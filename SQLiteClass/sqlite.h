#ifndef SQLITE_H
#define SQLITE_H

#include <QDebug>
#include <QSqlDatabase>
#include <QString>

class Sqlite {
public:
    Sqlite();
    Sqlite(QString user,QString pass);

    bool GetConnection()        {return m_connection;}

    bool UserLogin();
    bool DbQuery(QString query);

private:
    QString m_user;
    QString m_pass;
    bool m_connection;

    QSqlDatabase m_db;

    bool DbConnect();
    bool DbPrepear();
};

#endif // SQLITE_H
