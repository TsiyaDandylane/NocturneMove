#ifndef HEVWINDOW_H
#define HEVWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QMessageBox>

class HevWindow : public QWidget
{
    Q_OBJECT

public:
    HevWindow(QWidget* parent = nullptr);
    ~HevWindow();

public:
    QPushButton* reMainButton;
};

#endif