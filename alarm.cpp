#include <iostream>
#include <ctime>

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

	return 0;
}
