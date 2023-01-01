
#ifndef reservationManager_hpp
#define reservationManager_hpp

#include <stdio.h>
#include "Guests_Res_Request.h"

class Reservation_Manager{

private:
    const int maxNoOfNights = 7;
    const int noOfRooms = 20;
    Guests_Res_Request *arr;
    int twoDimArray[7][20];
    int numOfReservations;

public:
   
    Reservation_Manager();

 
    int addResRequest(Guests_Res_Request&);
    bool reservationInfo(int);
    bool reservationCancel(int);

    
    int getMaxNoOfNights();
    int getNoOfRooms();
    Guests_Res_Request* getArr();
    int* getTwoDimArray();

    
    void print();
    ~Reservation_Manager();


};


#endif 