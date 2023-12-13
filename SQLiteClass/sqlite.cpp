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
    reqest.append("CREATE TABLE IF NOT EXISTS users(");
    reqest.append("id INTEGER PRIMARY KEY AUTOINCREMENT,");
    reqest.append("name TEXT UNIQUE CHECK(name != '' AND name != ' '),");
    reqest.append("x_point INTEGER DEFAUT 0,");
    reqest.append("y_point INTEGER DEFAUT 0,");
    reqest.append("width INTEGER DEFAUT 0,");
    reqest.append("height INTEGER DEFAUT 0,");
    reqest.append("last_session TEXT NULL DEFAULT NULL);");
    if(!query.exec(reqest)) return false;

    reqest.clear();

    reqest.append("CREATE TABLE IF NOT EXISTS sessions(");
    reqest.append("id INTEGER PRIMARY KEY AUTOINCREMENT,");

    return true;
}
