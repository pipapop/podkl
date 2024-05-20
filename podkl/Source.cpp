#include <iostream>
#include <sql.h>
#include <sqlext.h>
#include <windows.h>
#include <sqloledb.h>
#include<sqlspi.h>


int main() {
	// Объявление переменных для подключения к базе данных
	SQLHENV henv; // Окружение
	SQLHDBC hdbc; // Соединение
	SQLRETURN retcode;

	// Инициализация окружения
	retcode = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &henv);
	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO) {
		// Обработка ошибки и выход
		return 1;
	}

	retcode = SQLSetEnvAttr(henv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);
	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO) {
		// Обработка ошибки и выход
		return 1;
	}

	// Инициализация соединения
	retcode = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);
	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO) {
		// Обработка ошибки и выход
		return 1;
	}

	// Строка подключения к базе данных в формате SQLWCHAR
	SQLWCHAR connectionString[] = L"DRIVER={SQL Server};SERVER=your_server;DATABASE=your_database;UID=your_username;PWD=your_password";

	// Установка соединения с базой данных
	retcode = SQLDriverConnectW(hdbc, NULL, connectionString, SQL_NTS, NULL, 0, NULL, SQL_DRIVER_NOPROMPT);
	if (retcode != SQL_SUCCESS && retcode != SQL_SUCCESS_WITH_INFO) {
		// Обработка ошибки и выход
		return 1;
	}

	std::wcout << L"Connected to the database" << std::endl;

	// Освобождение ресурсов
	SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
	SQLFreeHandle(SQL_HANDLE_ENV, henv);

	return 0;
}