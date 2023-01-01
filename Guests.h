
#ifndef guests_hpp
#define guests_hpp

#include <stdio.h>
#include "Information.h"
#include "Date.h"

class Guests{

private:
    Date *checkIn, *checkOut;
    Information *roomGuestInfo;
    int numGuestsInRoom;
    int roomNum;

public:

    
    Guests();
    Guests(int,int,int,int,int,int,int);

    void addGuest(Information&);

    Date getCheckIn();
    Date getCheckOut();
    int getRoomNum();
    void setCheckIn(int,int,int);
    void setCheckOut(int,int,int);
    void setRoomNum(int);

    void print();
    ~Guests();

};


#endif 