#ifndef SQLITE_H
#define SQLITE_H

#include <QDebug>
#include <QSqlDatabase>
#include <QString>

class Sqlite {
public:
    Sqlite();
    Sqlite(QString user,QString pass);

private:
    QString m_user;
    QString m_pass;

    QSqlDatabase m_db;
    bool DbConnect();
};

#endif // SQLITE_H
