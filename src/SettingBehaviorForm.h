#ifndef SETTINGBEHAVIORFORM_H
#define SETTINGBEHAVIORFORM_H

#include "AbstractSettingForm.h"

#include <QWidget>

namespace Ui {
class SettingBehaviorForm;
}

class SettingBehaviorForm : public AbstractSettingForm
{
	Q_OBJECT

public:
	explicit SettingBehaviorForm(QWidget *parent = 0);
	~SettingBehaviorForm();

private:
	Ui::SettingBehaviorForm *ui;

	// AbstractSettingForm interface
public:
	void exchange(bool save);
};

#endif // SETTINGBEHAVIORFORM_H
