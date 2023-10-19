#include<iostream>
#include "seat.hpp"
class Room{
	Seat **seats;
	int rows;
	int cols;
	public:
Room();
	Room(int rows,int cols)
;

  // this is destructor
	~Room();
	int getRows()const;
	int getCols()const;
	bool bookSeat(int i,int j);
	bool freeSeat(int i,int j);
	double occupancy();

};