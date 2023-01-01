
#include <iostream>
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"
#include <string>

using namespace std;

void Continue(){
    cout << "\nPress ENTER To Continue";
    cin.get();
    cout << endl;
}


int main() {

   
    cout << "Creation of Reservation Manager " << endl;
    Continue();

    Reservation_Manager cPlusPlus;
    cPlusPlus.print();


    cout << "Creation of 5 Information Objects (5 people)" << endl;
    Continue();

    cout << "-Person 1-" << endl;
    Information person1("Eren","Jeager",8,19,2003);
    person1.print();
    cout << "\n-Person 2-" << endl;
    Information person2("Erwin","Smith",1,1,1998);
    person2.print();
    cout << "\n-Person 3-" << endl;
    Information person3("Levi","Ackerman",12,11,1998);
    person3.print();
    cout << "\n-Person 4-" << endl;
    Information person4("Tanjiro","Kamado",9,13,2000);
    person4.print();
  


    cout << "\n\nCreation of Guests object (a room)" << endl;
    Continue();

    Guests room1(3,1,2022,3,7,2022,1);
    cout << "\n\nRoom Info:" << endl;
    room1.print();


    cout << "\n\nAdd 5 guests to Room 1" << endl;
    Continue();

    room1.addGuest(person1);
    room1.addGuest(person2);
    room1.addGuest(person3);
    room1.addGuest(person4);
    cout << endl;
    room1.print();


    cout << "\n\nReservation Request" << endl;
    Continue();

    Guests_Res_Request reservation1(&room1);
    reservation1.print();

    cout << "Add Reservation to Cplusplus" << endl;
    Continue();

    cPlusPlus.addResRequest(reservation1);
    cPlusPlus.print();


    return 0;
}