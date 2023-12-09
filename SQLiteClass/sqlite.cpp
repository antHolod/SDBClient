#include "sqlite.h"

Sqlite::Sqlite()
{
}

Sqlite::Sqlite(QString user, QString pass)
{
    this->m_user = user;
    this->m_pass = pass;

    if(DbConnect())
    {

    }
}

bool Sqlite::DbConnect()
{
    m_db = QSqlDatabase::addDatabase("SQLITE");
    m_db.setDatabaseName("useinfo");
    if(!m_db.open())
    {
        qDebug() << "Error DB connection";
        return false;
    }

    return true;
}
