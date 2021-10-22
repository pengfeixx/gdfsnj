#ifndef TODOVIEW_H
#define TODOVIEW_H

#include <QWidget>
#include <QListView>
#include <QStyledItemDelegate>
#include "todomodel.h"

class TodoView : public QListView
{
    Q_OBJECT
public:
    explicit TodoView(QWidget *parent = nullptr);


signals:

public slots:


    // QAbstractItemView interface
public:
    virtual QModelIndexList selectedIndexes() const override;
};

#endif // TODOVIEW_H
