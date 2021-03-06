#ifndef APPLICATIONGLOBAL_H
#define APPLICATIONGLOBAL_H

#include <QColor>
#include <QString>
#include "Theme.h"

struct ApplicationGlobal {
	bool start_with_shift_key = false;
	QString application_data_dir;
	QColor panel_bg_color;
	ThemePtr theme;
};

extern ApplicationGlobal *global;

#endif // APPLICATIONGLOBAL_H
