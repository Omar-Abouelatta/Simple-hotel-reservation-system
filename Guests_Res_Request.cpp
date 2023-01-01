#include "Guests_Res_Request.h"
#include <iostream>
using namespace std;


int Guests_Res_Request::counter = 0;


Guests_Res_Request::Guests_Res_Request(){
    this->roomInfo = new Guests();
    this->numNights = 0;
    this->reservationID = 0;
}
Guests_Res_Request::Guests_Res_Request(Guests *rm){
    this->roomInfo = rm;

    this->numNights = 0;
    for(int i = rm->getCheckIn().getDay(); i <= rm->getCheckOut().getDay(); i++){
        this->numNights++;
    }
    counter++;
    this->reservationID = counter;
}

Guests Guests_Res_Request::getRoom(){
    return *this->roomInfo;
}
int Guests_Res_Request::getReservationID(){
    return this->reservationID;
}
int Guests_Res_Request::getNumNights(){
    return this->numNights;
}
void Guests_Res_Request::setGuest(Guests *rm){
    this->roomInfo = rm;
}


void Guests_Res_Request::print(){
    cout << "Guest Info: " << endl;
    this->roomInfo->print();
    cout << "Number of Nights: " << this->numNights << "\nReservation ID: " << this->reservationID << endl;
}

Guests_Res_Request::~Guests_Res_Request(){
}
