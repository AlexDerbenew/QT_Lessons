#ifndef QTLESSON1_CONTROLPANEL_H
#define QTLESSON1_CONTROLPANEL_H

#include <QWidget>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QPushButton>
#include "Range.h"

class ControlPanel : public QWidget
{
Q_OBJECT

public:
	explicit ControlPanel(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

    std::array<int, 2> getRange();

private:
	QGridLayout *_layout;

	// Box
	QGroupBox *_groupBox;
	QVBoxLayout *_boxLayout;

	// Elements
	Range *_range;
	QPushButton *_runButton;
};

#endif