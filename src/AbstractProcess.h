#ifndef ABSTRACTPROCESS_H
#define ABSTRACTPROCESS_H

#include <QObject>
#include <functional>

class QString;

class AbstractPtyProcess : public QObject {
	Q_OBJECT
protected:
	QString change_dir;
public:
	void setChangeDir(QString const &dir);
	virtual bool isRunning() const = 0;
	virtual void writeInput(char const *ptr, int len) = 0;
	virtual int readOutput(char *ptr, int len) = 0;
	virtual void start(QString const &cmd) = 0;
	virtual bool wait(unsigned long time = ULONG_MAX) = 0;
	virtual void stop() = 0;
signals:
	void completed();
};

#endif // ABSTRACTPROCESS_H
