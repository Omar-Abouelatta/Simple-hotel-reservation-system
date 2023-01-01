#ifndef information_hpp
#define information_hpp

#include <stdio.h>
#include "Date.h"

class Information{

private:

    char *firstName;
    char *lastName;
    Date *dateOfBirth;

public:

    Information();
    Information(char*,char*,int,int,int);


    char* getFirstName();
    char* getLastName();
    Date getDateOfBirth();
    void setFirstName(char*);
    void setLastName(char*);
    void setDateOfBirth(int,int,int);


    void print();
    ~Information();
};



#endif 