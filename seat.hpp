#include <iostream>
using namespace std;
class Seat{
	bool status;
	public:
	Seat();
	Seat(bool status);
	bool book();
	bool free();
	bool getStatus();
};