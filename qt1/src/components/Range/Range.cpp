#include "Range.h"

Range::Range(QWidget *parent, Qt::WindowFlags flags): QWidget(parent, flags)
{
    _leftBorder = new QLineEdit(this);
    _leftBorder->setValidator( new QIntValidator(0, 100, this) );
    _rightBorder = new QLineEdit(this);
    _rightBorder->setValidator( new QIntValidator(0, 100, this) );

    _layout = new QGridLayout(this);

    _layout->addWidget(_leftBorder, 0, 1, 1, 1);
    _layout->addWidget(_rightBorder, 0, 2, 1, 1);

    setLayout(_layout);
}

std::array< int, 2 > Range::getRange() {
    std::array<int, 2> range{};
    range[0] = _leftBorder->text().toInt();
    range[1] = _rightBorder->text().toInt();
    return range;
}
#include "Range.h"
