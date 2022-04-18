﻿#ifndef UTIL_H
#define UTIL_H

#include <QString>
#include <QTextCodec>

class Util
{
public:
    Util();
    static QByteArray unescape(const QString& text, QTextCodec* codec);
private:
    static const char unescapeTable[];
    static int unescapeHelper(QStringRef text, int &result, int baseBits);
};

#endif // UTIL_H