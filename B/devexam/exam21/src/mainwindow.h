#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "todomodel.h"
#include "todoview.h"
#include "ui_mainwindow.h"

class QStandardItemModel;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    friend class AutoTest;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void slotClickedReturn();

private:
    Ui::MainWindow *ui;
    TodoModel *model;
    TodoView *view;
    ItemDelegate *p;

    // QObject interface
public:
//    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // MAINWINDOW_H
