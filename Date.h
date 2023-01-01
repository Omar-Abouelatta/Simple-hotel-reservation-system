
#ifndef date_hpp
#define date_hpp

#include <stdio.h>

class Date{

private:
    
    int month, day, year;

public:
    
    Date();
    Date(int,int,int);

    
    int getMonth();
    int getDay();
    int getYear();
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    
    void print();
    ~Date();
};

#endif