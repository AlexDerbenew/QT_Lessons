#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags):QMainWindow(parent,flags)
{
	_cwidg = new CentralWidget(this);
	setCentralWidget(_cwidg);
}