#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <windows.h>

SQLHSTMT hstmt;
SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"SELECT * FROM table_name", SQL_NTS);
if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
    // ��������� ����������� SELECT �������
    // ���������� ������ � ����� �� �����
}
else {
    // ��������� ������ ���������� �������
}

//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//### ������ INSERT ������� :
//// ���������� INSERT �������
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"INSERT INTO table_name (column1, column2) VALUES (value1, value2)", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // ��������� ��������� ���������� INSERT �������
//}
//else {
//    // ��������� ������ ���������� �������
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//
//### ������ UPDATE ������� :
//// ���������� UPDATE �������
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"UPDATE table_name SET column1 = new_value WHERE condition", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // ��������� ��������� ���������� UPDATE �������
//}
//else {
//    // ��������� ������ ���������� �������
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
//
//
//### ������ DELETE ������� :
//// ���������� DELETE �������
//SQLHSTMT hstmt;
//SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
//retcode = SQLExecDirect(hstmt, (SQLWCHAR*)L"DELETE FROM table_name WHERE condition", SQL_NTS);
//
//if (retcode == SQL_SUCCESS || retcode == SQL_SUCCESS_WITH_INFO) {
//    // ��������� ��������� ���������� DELETE �������
//}
//else {
//    // ��������� ������ ���������� �������
//}
//
//SQLFreeHandle(SQL_HANDLE_STMT, hstmt);