#include "room.hpp"
#include <cmath>
Room::Room() {
  rows = cols = 3;
  seats = new Seat *[cols];
  for (int i = 0; i < cols; i++) {
    seats[i] = new Seat[rows];
  }
} 
Room::Room(int rows, int cols) {
  this->rows = rows;
  this->cols = cols;
  seats = new Seat *[cols];
  for (int i = 0; i < cols; ++i) {
    seats[i] = new Seat[rows];
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      seats[i][j] = false;
    }
  }
}
Room::~Room() {
  for (int i = 0; i < cols; i++) {
    delete[] seats[i];
  }
  delete[] seats;
}
int Room::getRows() const { return rows; }
int Room::getCols() const { return cols; }
bool Room::bookSeat(int i, int j) {
  if (i >= 0 && j >= 0 && seats[i][j].getStatus() == false) {
    return seats[i][j].book();
  } else {
    return false;
  }
}
bool Room::freeSeat(int i, int j) {
  if (i >= 0 && j >= 0 && seats[i][j].getStatus() == true)
    return seats[i][j].free();
  else
    return false;
}
double Room::occupancy() {
  int count = 0;
  for (int i = 0; i < this->rows; i++) {
    for (int j = 0; j < this->cols; j++) {
      if (seats[i][j].getStatus() == true) {
        count++;
      }
    }
  }
  double total = this->rows * this->cols;
  return double(count) / total;
}