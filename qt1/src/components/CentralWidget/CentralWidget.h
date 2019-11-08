#ifndef QTLESSON1_CENTRALWIDGET_H
#define QTLESSON1_CENTRALWIDGET_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QMessageBox>
#include "ResultView.h"
#include "ControlPanel.h"

class CentralWidget : public QWidget
{
	Q_OBJECT
	
public:
	explicit CentralWidget(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

public slots:
    void on_runButton_clicked();
    void on_saveButton_clicked();

private:
	QGridLayout *_mainLayout;
	ControlPanel *_controlPanel;
	ResultView *_resultView2;
    ResultView *_resultView5;
    ResultView *_resultView8;
};

#endif