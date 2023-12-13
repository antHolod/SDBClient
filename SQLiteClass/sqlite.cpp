#include "sqlite.h"

Sqlite::Sqlite()
{
}

Sqlite::Sqlite(QString user, QString pass)
{
    this->m_user = user;
    this->m_pass = pass;

    if(!DbConnect())
    {
        this->m_connection = false;
        return;
    }
    if(!DbPrepear())
    {
        this->m_connection = false;
        return;
    }
}

bool Sqlite::DbConnect()
{
    m_db = QSqlDatabase::addDatabase("SQLITE");
    m_db.setDatabaseName(this->m_db_name);
    if(!m_db.open())
    {
        qDebug() << "Error DB connection";
        return false;
    }

    return true;
}

bool Sqlite::DbPrepear()
{
    QSqlQuery query;
    QString reqest;
    //reqest = "CREATE TABLE "
}
