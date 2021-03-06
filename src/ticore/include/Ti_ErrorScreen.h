/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2014 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#ifndef TI_ERROR_SCREEN_H_
#define TI_ERROR_SCREEN_H_

#include <v8.h>
#include "TiCore.h"
#include <QObject>
#include <bb/cascades/Sheet>

using namespace v8;
namespace Ti {

class TiErrorScreen : public QObject
{
	Q_OBJECT;
public:
	static void ShowWithTryCatch(TryCatch);
private:
	TiErrorScreen();
	~TiErrorScreen();
	void parseTryCatch(TryCatch);
	void buildAndShow();
	QString _fileName;
	QString _sourceLine;
	QString _stackTrace;
	QString _exceptionName;
	QString _exceptionMessage;
	int _lineNumber;
	int _colNumber;
	bb::cascades::Sheet *_errorSheet;
public slots:
	void onClicked();
	void onClosed();
};
}
#endif
