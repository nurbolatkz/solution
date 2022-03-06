#include "dbmanager.h"

const QString connection_error_msg = "Error: connection with database failed";
const QString connection_success_msg = "Database: connection is ok";
const QString insertData_error_msg = "Failed to add new contact" ;
const QString success_inserted_msg = "Successfully inserted to table";
const QString deleteInfo_error_msg =  "Failed to delete";
const QString deleteInfo_success_msg = "Succefully deleted";


DbManager::DbManager(QString path)
{
   db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName(path);

   if (!db.open())
   {
      qDebug() << connection_error_msg;
   }
   else
   {
      qDebug() << connection_success_msg;
   }
}

bool DbManager::addNewInfo(QString name, QString surname, QString phone_number ){
     QSqlQuery query;

     QString queryText = QString("INSERT INTO maincontacts(name,surname, phone_number) VALUES( '%1', '%2', '%3');").arg(name).arg(surname).arg(phone_number);
     query.prepare(queryText);

     if(query.exec()){
            qDebug() << success_inserted_msg;
            return true;
      }else{
         qDebug() <<insertData_error_msg << query.lastError();;
         qDebug() << query.executedQuery();
         return false;

     }

}

void DbManager::getAllRows(){

    QSqlQuery query("SELECT * FROM maincontacts ORDER BY name");

    while (query.next())
    {
        qDebug() <<  query.value(1).toString() << query.value(2).toString()<<query.value(3).toString();

    }

}

bool DbManager::deleteInfo(QString phone_number){
    QSqlQuery query;
    query.prepare(QString("DELETE FROM maincontacts WHERE  phone_number = '%2'").arg(phone_number));

    if(!query.exec()){
         qDebug() << deleteInfo_error_msg;
         return false;
    }else{
        qDebug() << deleteInfo_success_msg;
        return true;
    }

}
