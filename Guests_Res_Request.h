
#ifndef guestsResRequest_hpp
#define guestsResRequest_hpp

#include <stdio.h>
#include "Guests.h"

class Guests_Res_Request{

private:
    Guests *roomInfo;
    static int counter;
    int reservationID;
    int numNights;

public:
    Guests_Res_Request();
    Guests_Res_Request(Guests*);

    
    Guests getRoom(); 
    int getReservationID();
    int getNumNights();
    void setGuest(Guests*);

   
    void print();
    ~Guests_Res_Request();

};


#endif 