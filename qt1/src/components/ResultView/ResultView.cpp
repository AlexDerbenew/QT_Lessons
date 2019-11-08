#include "ResultView.h"

ResultView::ResultView(QWidget *parent, const QString& boxName, Qt::WindowFlags flags): QWidget(parent, flags)
{
    this->setFixedWidth(256);

    _listView = new QListView(this);

    _saveButton = new QPushButton("Сохранить результат",this);
    _saveButton->setObjectName("saveButton");

    _groupBox = new QGroupBox(boxName);
    _boxLayout = new QVBoxLayout;
    _boxLayout->addWidget(_listView);
    _boxLayout->addWidget(_saveButton);
    _groupBox->setLayout(_boxLayout);

    _layout = new QGridLayout(this);
    _layout->addWidget(_groupBox);
    setLayout(_layout);

    QMetaObject::connectSlotsByName(this);
}
