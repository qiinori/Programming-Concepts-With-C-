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
};


// Part A, C, D
class Event {
  Room* d_room;
  std::string d_name;
public:
  Event();
  void set( Room r, const std::string& name );  
  void print();
};

Event::Event() : d_room(0), d_name("") {};

void Event::print() {
  std::cout << "Event: " << d_name;
  if ( d_room != 0 ) {
    std::cout << " in size " << d_room->d_noSeat;
    if ( d_room->d_hasProjector) 
      std::cout << " with";
    else
      std::cout << " without";
    std::cout << " projector";
  }
  std::cout << std::endl;
  return;
}

void printEvent(Event e) {
  e.print();
  return;
}


// Part A
void Event::set( Room r, const std::string& name ) {
}

// Part B -- Room shallow copy constructor


// Part C - Event deep copy constructor


// Part D - Event destructor




int main() {
  const int noLect = 5; 
  Room r; 
  Event lectures[noLect];

  for ( int i=0; i<noLect; ++i ) {
    r.d_noSeat = i+1; 
    r.d_hasProjector != r.d_hasProjector;
    lectures[i].set( r, "CSI2372" );
    lectures[i].print();
  }
  std::cout << "-------------------" << std::endl;
  for ( int i=0; i<noLect; ++i ) {
    printEvent( lectures[i] );
  }
  return 0;
}
