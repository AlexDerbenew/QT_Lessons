#ifndef QTLESSON1_MAINWINDOW_H
#define QTLESSON1_MAINWINDOW_H

#include <QMainWindow>
#include "CentralWidget.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

private:
	CentralWidget* _cwidg;
};

#endif