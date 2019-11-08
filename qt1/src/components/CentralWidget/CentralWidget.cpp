#include "CentralWidget.h"

CentralWidget::CentralWidget(QWidget *parent, Qt::WindowFlags flags): QWidget(parent, flags)
{
	_mainLayout = new QGridLayout(this);
	
	_controlPanel = new ControlPanel(this);
    _controlPanel->setFixedWidth(196);
    _controlPanel->setFixedHeight(128);

    _resultView2 = new ResultView(this, "Кратные 2");
    _resultView5 = new ResultView(this, "Кратные 5");
    _resultView8 = new ResultView(this, "Кратные 8");

	_mainLayout->addWidget(_controlPanel, 0, 0, 1, 1);
    _mainLayout->addWidget(_resultView2, 0, 1, 1, 1);
    _mainLayout->addWidget(_resultView5, 0, 2, 1, 1);
    _mainLayout->addWidget(_resultView8, 0, 3, 1, 1);

	setLayout(_mainLayout);

    QMetaObject::connectSlotsByName(this);
}

void CentralWidget::on_runButton_clicked(){
    QMessageBox msgBox;
    msgBox.setText("runButton is clicked");
    msgBox.exec();
}

void CentralWidget::on_saveButton_clicked() {
    QMessageBox msgBox;
    msgBox.setText("saveButton is clicked");
    msgBox.exec();
}