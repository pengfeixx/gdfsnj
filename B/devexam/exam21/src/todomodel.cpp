#include "todomodel.h"
#include <QLineEdit>

TodoModel::TodoModel(QObject *parent)
    :QAbstractItemModel (parent)
{
//    todos << "123" << "456";
}

QModelIndex TodoModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    if (row < 0 || column < 0)
        return QModelIndex();
    return createIndex(row, column);
}

QModelIndex TodoModel::parent(const QModelIndex &child) const
{
    Q_UNUSED(child)
    return QModelIndex();
}

int TodoModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return todos.count();
}

int TodoModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return 1;
}

QVariant TodoModel::data(const QModelIndex &index, int role) const
{
    if (role != Qt::DisplayRole || !index.isValid())
        return QVariant();
    int row = index.row();
    if (row >= todos.count())
        return QVariant();
    return todos[row].trimmed();
}

bool TodoModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (role != Qt::EditRole || !index.isValid())
        return false;
    int row = index.row();
    if (row >= todos.count())
        return false;
    todos[row] = value.toString();
    return true;
}

void TodoModel::addTodo(const QString &todo)
{
    beginResetModel();
    todos << todo;
    endResetModel();
}

void TodoModel::delTodo(int row)
{
    beginResetModel();
    todos.removeAt(row);
    endResetModel();
}

Qt::ItemFlags TodoModel::flags(const QModelIndex &index) const
{
    return Qt::ItemIsEditable | QAbstractItemModel::flags(index);
}

ItemDelegate::ItemDelegate(QObject *parent)
    :QStyledItemDelegate (parent)
{

}

QWidget *ItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QLineEdit *editor = new QLineEdit(parent);
    return editor;
}

void ItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QLineEdit *le = dynamic_cast<QLineEdit *>(editor);
    if (!le)
        return;
    le->setText(index.data().toString());
}

void ItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    TodoModel *todoModel = dynamic_cast<TodoModel *>(model);
    if (!todoModel)
        return;
    QLineEdit *le = dynamic_cast<QLineEdit *>(editor);
    if (!le)
        return;
    const QString &newTodo = le->text().trimmed();
    if (newTodo.isEmpty())
        return;
    todoModel->setData(index, newTodo);
}
