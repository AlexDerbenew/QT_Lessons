#ifndef QTLESSON1_RANGE_H
#define QTLESSON1_RANGE_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtGui/QIntValidator>

class Range : public QWidget
{
Q_OBJECT
public:
    explicit Range(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

    std::array< int, 2 > getRange();

private:
    QGridLayout *_layout;

    QLineEdit *_leftBorder;
    QLineEdit *_rightBorder;
};


#endif //QTLESSON1_RANGE_H
