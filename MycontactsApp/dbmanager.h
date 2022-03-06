#ifndef DBMANAGER_H
#define DBMANAGER_H

#define DB_PATH "C:/Users/nurbo/Downloads/solution/MycontactsApp/contacts.db"
// QString db_path ="C:/Users/nurbo/Downloads/solution/contacts.db";

#include <QtSql>

extern const QString connection_error_msg;
extern const QString connection_success_msg;
extern const QString insertData_error_msg;
extern const QString success_inserted_msg;
extern const QString deleteInfo_error_msg;
extern const QString deleteInfo_success_msg;

class DbManager
{
    public:
        DbManager(QString path);
        bool addNewInfo(QString name,QString surname, QString phone_number );
        void getAllRows();
        bool deleteInfo(QString phone_number); // will be fine delete with unique data like id
    private:
        QSqlDatabase db;
};
#endif
