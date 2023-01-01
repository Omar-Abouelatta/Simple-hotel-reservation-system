
#include "Guests.h"
#include <iostream>
using namespace std;

Guests::Guests(){
    this->checkIn = new Date();
    this->checkOut = new Date();
    this->roomGuestInfo = new Information[4];
    this->numGuestsInRoom = 0;
    this->roomNum = 0;
}
Guests::Guests(int monthIn, int dayIn, int yearIn, int monthOut, int dayOut, int yearOut, int room){

    this->checkIn = new Date(monthIn,dayIn,yearIn);
    this->checkOut = new Date(monthOut,dayOut,yearOut);

    this->roomGuestInfo = new Information[4];
    this->numGuestsInRoom = 0;
    this->roomNum = room;
}

void Guests::addGuest(Information &info){
    if(numGuestsInRoom < 4){
        this->roomGuestInfo[numGuestsInRoom] = info;
        this->numGuestsInRoom++;
        cout << info.getFirstName() << " has been added successfully!" << endl;
    }
    else{
        cout << info.getFirstName() << " could not be added. No more space in this room!" << endl;
    }
}

Date Guests::getCheckIn(){
    return *this->checkIn;
}
Date Guests::getCheckOut(){
    return *this->checkOut;
}
int Guests::getRoomNum(){
    return this->roomNum;
}

void Guests::setCheckIn(int monthIn, int dayIn, int yearIn){
    this->checkIn = new Date(monthIn,dayIn,yearIn);
}
void Guests::setCheckOut(int monthOut, int dayOut, int yearOut){
    this->checkOut = new Date(monthOut,dayOut,yearOut);
}
void Guests::setRoomNum(int room){
    this->roomNum = room;
}

void Guests::print(){
    cout << "Check-In Date: ";
    this->checkIn->print();
    cout << "Check-Out Date: ";
    this->checkOut->print();

    cout << "The Guests in this room are: " << endl;

    for(int i=0; i<numGuestsInRoom; i++){
        cout << '\t' << this->roomGuestInfo[i].getFirstName() << ' ' << this->roomGuestInfo[i].getLastName() << " - ";
        this->roomGuestInfo[i].getDateOfBirth().print();
    }

    cout << "Room Number " << this->roomNum << endl;
}


Guests::~Guests(){
}
