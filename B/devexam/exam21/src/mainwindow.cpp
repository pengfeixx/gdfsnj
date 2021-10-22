#include "mainwindow.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->addButton->setEnabled(false);
    ui->deleteButton->setEnabled(false);

    model = new TodoModel(this);
    view = new TodoView(this);
    p = new ItemDelegate(this);
    view->setModel(model);
    view->setItemDelegate(p);

    ui->centralWidget->layout()->addWidget(view);

    connect(ui->addButton, &QPushButton::clicked, this, [ & ] {
        const QString &txt = ui->lineEdit->text();
        model->addTodo(txt);
        ui->lineEdit->clear();
        ui->deleteButton->setEnabled(false);
    });
    connect(ui->deleteButton, &QPushButton::clicked, this, [ & ] {
        auto idxs = view->selectedIndexes();
        foreach (auto idx, idxs)
        {
            if (!idx.isValid())
                continue;
            model->delTodo(idx.row());
        }
        ui->deleteButton->setEnabled(false);
    });
    connect(ui->lineEdit, &QLineEdit::textChanged, this, [ & ](const QString & txt) {
        ui->addButton->setEnabled(!txt.trimmed().isEmpty());
    });
    connect(view, &QListView::clicked, this, [ & ] {
        ui->deleteButton->setEnabled(true);
    });

//    ui->lineEdit->installEventFilter(this);
    connect(ui->lineEdit, &QLineEdit::returnPressed,
            this, &MainWindow::slotClickedReturn);
}

MainWindow::~MainWindow()
{

}

void MainWindow::slotClickedReturn()
{
    model->addTodo(ui->lineEdit->text().trimmed());
}

//bool MainWindow::eventFilter(QObject *watched, QEvent *event)
//{
//    if (!watched)
//        return false;
//    if (event->type() != QEvent::KeyPress) {
//        return false;
//    }
//    QKeyEvent *keyEvent = dynamic_cast<QKeyEvent *>(event);
//    if (!keyEvent)
//        return false;
//    if (keyEvent->key() != Qt::Key_Return && keyEvent->key() != Qt::Key_Enter)
//        return false;
//    ui->addButton->click();
//    return true;
//}
