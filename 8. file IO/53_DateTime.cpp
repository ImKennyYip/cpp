#include <ctime>        // for C++
                        // #include <time.h> for C
#include <iostream>
#include <windows.h>    // Sleep for windows
// #include <unistd.h>  // usleep for unix

using namespace std;

int main() {
    // ctime libary - date and time
    // The Unix epoch (or Unix time or POSIX time or Unix timestamp) 
    // number of seconds that have elapsed since January 1, 1970 (midnight UTC/GMT)
    // Year 2038 problem - 32 bit integer will overflow and

    time_t now = time(nullptr); //current time in seconds
    cout << now << endl;
    cout << ctime(&now) << endl; //takes a pointer

    //date
    struct tm *localTime = localtime(&now);
    int year = localTime->tm_year + 1900;   //year from 1900, shift by 1900 (year 1900 problem - 2 digits)
    cout << year << endl;

    int month = localTime->tm_mon + 1;      //month [0, 11] starts at 0, shift by 1
    cout << month << endl;

    int monthDay = localTime->tm_mday;      //day of month [1, 31]
    cout << monthDay << endl;

    int weekDay = localTime->tm_wday;       //day of week [0-6], 0 = sunday
    cout << weekDay << endl;

    //month and weekday translate to strings, would be weird to skip 0 and make it ""
    cout << month << "/" << monthDay << "/" << year << endl;


    //time
    int hour = localTime->tm_hour;
    cout << hour << endl;

    int minute = localTime->tm_min;
    cout << minute << endl;

    int second = localTime->tm_sec;
    cout << second << endl;

    cout << hour << ":" << minute << ":" << second << endl;


    // timing - use #include <chrono> for better timing
    // chrono is more type safe, uses seconds/duration type instead of int/double
    // c++ 20 added date support

    time_t start = time(nullptr);
    cout << ctime(&start) << endl; //takes a pointer
    Sleep(2000); //milliseconds
    time_t end = time(nullptr);
    cout << ctime(&end) << endl; //takes a pointer

    cout << end - start << endl;
    cout << difftime(end, start) << endl; //time elapsed
}



