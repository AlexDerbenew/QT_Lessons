#ifndef QTLESSON1_CENTRALWIDGET_H
#define QTLESSON1_CENTRALWIDGET_H

#include <QWidget>
#include <QtWidgets/QMessageBox>
#include "ControlPanel.h"

class CentralWidget : public QWidget
{
	Q_OBJECT
	
public:
	explicit CentralWidget(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

public slots:
    void on_runButton_clicked();

private:
	QGridLayout *_mainLayout;
	ControlPanel *_controlPanel;
};

#endif