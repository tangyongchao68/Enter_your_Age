#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Enter_your_Age.h"

class Enter_your_Age : public QMainWindow
{
	Q_OBJECT

public:
	Enter_your_Age(QWidget *parent = Q_NULLPTR);

private:
	Ui::Enter_your_AgeClass ui;
};
