﻿#ifndef NOWEGLOBAL_H
#define NOWEGLOBAL_H

#include <QXmppClient.h>
#include <QXmppVCardIq.h>
#include <QXmppPubSubIq.h>
#include<QXmppBookmarkManager.h>

namespace Nowe {
QXmppClient* myClient();
const QXmppVCardIq& myVCard();
QString myJid();
QString myJidBare();
void sendBookMarkRequest();
void createBookMark(QString markName);
}


#endif // NOWEGLOBAL_H
