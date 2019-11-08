#ifndef QTLESSON1_RESULTVIEW_H
#define QTLESSON1_RESULTVIEW_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QMessageBox>

class ResultView : public QWidget
{
    Q_OBJECT

public:
    explicit ResultView(QWidget *parent = nullptr, const QString& boxName = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

private:
    QGridLayout *_layout;

    // Box
    QGroupBox *_groupBox;
    QVBoxLayout *_boxLayout;

    // Elements
    QListView *_listView;
    QPushButton *_saveButton;

};


#endif //QTLESSON1_RESULTVIEW_H
