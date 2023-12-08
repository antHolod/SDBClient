#include "sqlite.h"

Sqlite::Sqlite()
{
}

Sqlite::Sqlite(QString user, QString pass)
{
    this->m_user = user;
    this->m_pass = pass;
}
