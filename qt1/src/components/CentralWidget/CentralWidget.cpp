#include "CentralWidget.h"

CentralWidget::CentralWidget(QWidget *parent, Qt::WindowFlags flags): QWidget(parent, flags)
{
	_mainLayout = new QGridLayout(this);
	
	_controlPanel = new ControlPanel(this);
    _controlPanel->setFixedWidth(196);
	_mainLayout->addWidget(_controlPanel);

	setLayout(_mainLayout);

    QMetaObject::connectSlotsByName(this);
}

void CentralWidget::on_runButton_clicked(){
    QMessageBox msgBox;
    auto range = _controlPanel->getRange();
    msgBox.setText("");
    msgBox.exec();
}