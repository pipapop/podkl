#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <windows.h>

SQLHSTMT hstmt;
SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"SELECT * FROM table_name", SQL_NTS);
if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
    // Обработка результатов SELECT запроса
    // Извлечение данных и вывод на экран
}
else {
    // Обработка ошибок выполнения запроса
}

//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//### Пример INSERT запроса :
//// Выполнение INSERT запроса
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"INSERT INTO table_name (column1, column2) VALUES (value1, value2)", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // Обработка успешного выполнения INSERT запроса
//}
//else {
//    // Обработка ошибок выполнения запроса
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//
//### Пример UPDATE запроса :
//// Выполнение UPDATE запроса
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"UPDATE table_name SET column1 = new_value WHERE condition", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // Обработка успешного выполнения UPDATE запроса
//}
//else {
//    // Обработка ошибок выполнения запроса
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//
//### Пример DELETE запроса :
//// Выполнение DELETE запроса
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"DELETE FROM table_name WHERE condition", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // Обработка успешного выполнения DELETE запроса
//}
//else {
//    // Обработка ошибок выполнения запроса
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);