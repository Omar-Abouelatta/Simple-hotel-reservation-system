//
//  information.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-18.
//

#include "Information.h"
#include <iostream>
#include <string.h>
using namespace std;

//default constructor initializing with character arrays and a new Date object
Information::Information(){
    this->firstName = new char[50];
    this->lastName = new char[50];
    this->dateOfBirth = new Date();
}

//constructor with parameters
Information::Information(char *fn, char *ln, int month, int day, int year){

    firstName = new char[strlen(fn)+1];
    strcpy(firstName,fn);

    lastName = new char[strlen(ln)+1];
    strcpy(lastName,ln);

    dateOfBirth = new Date(month,day,year);
}

//getters and setters
char* Information::getFirstName(){
    return this->firstName;
}
char* Information::getLastName(){
    return this->lastName;
}
Date Information::getDateOfBirth(){
    return *this->dateOfBirth;
}
void Information::setFirstName(char* fn){
    firstName = new char[strlen(fn)+1];
    strcpy(firstName,fn);
}
void Information::setLastName(char* ln){
    lastName = new char[strlen(ln)+1];
    strcpy(lastName,ln);
}
void Information::setDateOfBirth(int month, int day, int year){
    this->dateOfBirth = new Date(month,day,year);
}

//print function making use of date of birth's print function
void Information::print(){
    cout << "Name: " << this->firstName << " " << this->lastName << "\nDate of Birth: ";
    this->dateOfBirth->print();
}

//destructor
Information::~Information(){
//    delete dateOfBirth;
}
