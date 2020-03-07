//
// C++ Program Utilizes System Time
// Jeeho Ahn
// Mar. 5th, 2020
// Base code from: https://stackoverflow.com/questions/997946/how-to-get-current-time-and-date-in-c
//

#include "pch.h"
#include <iostream>
#include <ctime>   
#include <string>

int main()
{
	std::time_t time = std::time(0);
	std::tm* current_t = std::localtime(&time);

	std::string year = std::to_string((current_t->tm_year + 1900));
	std::string month = std::to_string((current_t->tm_mon + 1));
	if (current_t->tm_mon < 10)
		month = "0" + month;
	std::string date = std::to_string(current_t->tm_mday);
	if (current_t->tm_mday < 10)
		date = "0" + date;


	std::cout << "date: " << year << " " << month << " " << date << std::endl;
}

