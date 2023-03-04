#include "seat.hpp"
Seat::Seat() { status = false; }
Seat::Seat(bool status) { this->status = status; }
bool Seat::getStatus() { return status; }
bool Seat::book() {
  if (this->status == true) {
    // this line shouldn't be here i think
    return false;

  } else {
    return this->status = true;
  }
}

//- The `free` method should return false if fails. It should fail if the
// seat is already empty.

bool Seat::free() {
  if (this->status == true) {
    this->status = false;
    return true;
  } else {

    return false;
  }
}