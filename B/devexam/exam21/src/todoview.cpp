#include "todoview.h"

#include <QMouseEvent>
#include <QDebug>
#include <QLineEdit>

TodoView::TodoView(QWidget *parent) : QListView(parent)
{

}

QModelIndexList TodoView::selectedIndexes() const
{
    return QListView::selectedIndexes();
}

