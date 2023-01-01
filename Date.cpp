

#include "Date.h"
#include <iostream>
using namespace std;



Date::Date(){
    this->month = 0;
    this->day = 0;
    this->year = 0;
}


Date::Date(int m, int d, int y){
    this->month = m;
    this->day = d;
    this->year = y;
}


int Date::getMonth(){
    return this->month;
}
int Date::getDay(){
    return this->day;
}
int Date::getYear(){
    return this->year;
}
void Date::setMonth(int m){
    this->month = m;
}
void Date::setDay(int d){
    this->day = d;
}
void Date::setYear(int y){
    this->year = y;
}


void Date::print(){
    cout << this->month << "/" << this->day << "/" << this->year << " (MM/DD/YYYY)" << endl;
}


Date::~Date(){};