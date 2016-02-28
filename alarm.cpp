#include <iostream>
#include <ctime>
#include <unistd.h>

#include "alarm.h"

using namespace std;

int main() {

	time_t timeO = time(NULL);
	tm* t = localtime(&timeO);
	
	cout<< "seconds " << t->tm_sec << endl;
	cout << "minutes " << t->tm_min << endl;
	cout << "hours " << t->tm_hour << endl;
	cout << "day " << t->tm_mday << endl;
	cout << "month " << t->tm_mon << endl;
	cout << "year " << t->tm_year << endl;
	cout << "weekday " << t->tm_wday << endl;
	cout << "day of year " << t->tm_yday << endl;
	cout << "daylight savings " << t->tm_isdst << endl;

	cout << endl;

for(int i = 0; i < 100; i++) {

	int day = t->tm_wday;
	int month = t->tm_mon;
	int year = t->tm_year + 1900;
	int hours = t->tm_hour;
	int min = t->tm_min;
	int sec = t->tm_sec;
	int mday = t->tm_mday;
	
	string sday;
	if(day == 0) sday = "Sunday";
	else sday = "fucked up";

	string smonth;
	if(month == 1) smonth = "Feburary";
	else smonth = "fucked up";

	bool pm;
	if(hours > 12) {
		hours -= 12;
		pm = true;
	}

	cout << "Today is: " << sday << ", the " << mday << " of " << smonth << " " << year << endl;
	cout << "The time is: " << hours << ":" << (min < 10 ? "0" : "") << min << "." << sec << (pm ? "pm" : "am") << endl << endl;
	usleep(1000000);
}
	return 0;
}
