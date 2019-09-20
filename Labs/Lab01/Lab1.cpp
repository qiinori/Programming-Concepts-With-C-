// ==========================================================================
// $Id: event.cpp,v 1.1 2018/11/05 14:34:23 jlang Exp $
// CSI2372 Lab Exercise
// ==========================================================================
// (C)opyright:
//
//   Jochen Lang
//   EECS, University of Ottawa
//   800 King Edward Ave.
//   Ottawa, On., K1N 6N5
//   Canada. 
//   http://www.eecs.uottawa.ca
// 
// Creator: Jochen Lang
// Email:   jlang@eecs.uottawa.ca
// ==========================================================================
// $Log: event.cpp,v $
// Revision 1.1  2018/11/05 14:34:23  jlang
// Lab exercise 1 added.
//
// ==========================================================================
#include <iostream>
#include <string>
using namespace std;

// Part B
struct Room {
  int d_noSeat;
  bool d_hasProjector;
  void shallow_copy_room(Room r);
};


// Part A, C, D
class Event {
  Room *d_room;
  string d_name;
public:
  Event();
  void set( Room r, const string &name );  
  void print();
  void deep_copy_event(const Event &e);
  ~Event();
};

Event::Event() : d_room(0), d_name("") {};

void Event::print() {

  cout << "Event: " << d_name;

  if ( d_room != 0 ) {

    cout << " in size " << d_room->d_noSeat;

    if ( d_room->d_hasProjector) 
		cout << " with";
    else
		cout << " without";

	cout << " projector";
  }
  cout << endl;
}

void printEvent(Event e) {
  e.print();
}


// Part A
void Event::set( Room r, const string &name ) {
  //if d_room of the Event hasn't been initialized, create a new space.
  if(d_room == 0){
    d_room = new Room;
  }
  d_room->d_noSeat = r.d_noSeat;
  d_room->d_hasProjector = r.d_hasProjector;
  d_name = name;
}

// Part B -- Room shallow copy constructor
// copy r2 to r1
void Room::shallow_copy_room(Room r){
	d_noSeat = r.d_noSeat;
	d_hasProjector = r.d_hasProjector;
}

// Part C - Event deep copy constructor
// Copy e to current event
void Event::deep_copy_event(const Event &e){
  if(d_room == 0){
    d_room = new Room;
  }
  d_room->d_noSeat = e.d_room->d_noSeat;
  d_room->d_hasProjector = e.d_room->d_hasProjector;
  d_name = e.d_name;
}

// Part D - Event destructor
// print out something for showing that destructor is called 
Event::~Event(){

}

int main() {

  cout << "-------------------" << endl;
  cout << "----General test---" << endl;
  cout << "-------------------" << endl;

  const int noLect = 5; 
  Room r; 
  Event lectures[noLect];

  for ( int i = 0; i < noLect; ++i ) {
    r.d_noSeat = i+1;
    // r.d_hasProjector != r.d_hasProjector; // there might be a mistake in this line
    lectures[i].set( r, "CSI2372" );
    lectures[i].print();
  }

  cout << "-------------------" << endl;

  for ( int i=0; i<noLect; ++i ) {
    printEvent( lectures[i] );
  }

  cout << endl;

  cout << "------------------------------" << endl;
  cout << "Test for shallow copy for Room" << endl;
  cout << "------------------------------" << endl;

  Room r1, r2;

  r1.d_noSeat = 1;
  r1.d_hasProjector = true;

  r2.shallow_copy_room(r1);
  cout << r2.d_noSeat <<endl;

  cout << endl;

  cout << "----------------------------" << endl;
  cout << "Test for deep copy for Event" << endl;
  cout << "----------------------------" << endl;

  Event e1;
  e1.set(r1,"CSI2373");

  Event e2;
  e2.deep_copy_event(e1);
  e2.print();
  
  cout << endl;

  system("PAUSE");
  return 0;
}
