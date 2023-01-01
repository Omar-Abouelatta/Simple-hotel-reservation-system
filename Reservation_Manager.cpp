
#include "Reservation_Manager.h"
#include <iostream>
using namespace std;


Reservation_Manager::Reservation_Manager(){
    this->arr = new Guests_Res_Request[maxNoOfNights*noOfRooms];
    this->numOfReservations = 0;

    for(int i = 0; i < maxNoOfNights; i++){
        for(int j=0; j < noOfRooms; j++){
            twoDimArray[i][j] = 0;
        }
    }
}

int Reservation_Manager::addResRequest(Guests_Res_Request &reservation){
    if(numOfReservations < 140){

        for(int i=reservation.getRoom().getCheckIn().getDay(); i <= reservation.getRoom().getCheckOut().getDay(); i++){
           
            if(twoDimArray[i-1][reservation.getRoom().getRoomNum()-1] != 0){
                cout << "Reservation #" << reservation.getReservationID() << " could not be added. Room " << reservation.getRoom().getRoomNum() << " is taken on March " << i << endl;
                return 0;

            }
        }
        arr[numOfReservations]= reservation;
        numOfReservations++;

        for(int i=reservation.getRoom().getCheckIn().getDay(); i <= reservation.getRoom().getCheckOut().getDay(); i++){
            twoDimArray[i-1][reservation.getRoom().getRoomNum()-1] = reservation.getReservationID();
        }
        cout << "Reservation #" << reservation.getReservationID() << " has been successfully added!" << endl;
    }
    else{
        cout << "Reservation #" << reservation.getReservationID() << " could not be added. No more space in the hotel!" << endl;
        return 0;
    }

    return reservation.getReservationID();
}

bool Reservation_Manager::reservationInfo(int id){

    for(int i=0; i<numOfReservations; i++){
        if(arr[i].getReservationID() == id){
            arr[i].print();
            return true;
        }
    }
    return false;
}

bool Reservation_Manager::reservationCancel(int id){

    bool isCancelled = false;

    for(int i = 0; i < maxNoOfNights; i++){
        for(int j=0; j < noOfRooms; j++){
            if(twoDimArray[i][j] == id){
                twoDimArray[i][j] = 0;
                isCancelled = true;
            }
        }
    }

    return isCancelled;
}


int Reservation_Manager::getMaxNoOfNights(){
    return this->maxNoOfNights;
}
int Reservation_Manager::getNoOfRooms(){
    return this->noOfRooms;
}
Guests_Res_Request* Reservation_Manager::getArr(){
    return this->arr;
}
int* Reservation_Manager::getTwoDimArray(){
    return *twoDimArray;
}


void Reservation_Manager::print(){

    cout << endl;
   
    for(int i=0; i <= maxNoOfNights; i++){
        for(int j=0; j<=noOfRooms; j++){

            if(i == 0 && j == 0){
                cout << '\t';
            }
            else if(i == 0){
                cout << '\t' << j;
            }
            else if(j == 0){
                cout << "Mar " << i;
            }
            else{
                cout << '\t' << twoDimArray[i-1][j-1];
            }
        }
        cout << endl;
    }

    cout << endl;
}
Reservation_Manager::~Reservation_Manager(){
    delete[] arr;
}