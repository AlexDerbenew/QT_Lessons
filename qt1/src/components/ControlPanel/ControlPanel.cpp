#include "CentralWidget.h"

ControlPanel::ControlPanel(QWidget *parent, Qt::WindowFlags flags): QWidget(parent, flags)
{
	_range = new Range(this);
    _runButton = new QPushButton("Вычислить", this);
    _runButton->setObjectName("runButton");

	_groupBox = new QGroupBox(tr("Управление"));
	_boxLayout = new QVBoxLayout;
    _boxLayout->addWidget(_range);
    _boxLayout->addWidget(_runButton);

	_groupBox->setLayout(_boxLayout);

    _layout = new QGridLayout(this);

    _layout->addWidget(_groupBox);
	setLayout(_layout);

    QMetaObject::connectSlotsByName(this);
}

std::array<int, 2> ControlPanel::getRange(){
    return _range->getRange();
}