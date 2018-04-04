#include "positions.h"

Position::Position() : myRadius(1), myAngleInRadians(0) {}

Position::Position(float r) : myRadius(r), myAngleInRadians(0) {}

Position::Position(float r, float thetaInRadians) : myRadius(r), myAngleInRadians(thetaInRadians) {}

void Position::SetAbsolutePosition(float r, float thetaInRadians) {
  myRadius = r;
  myAngleInRadians = thetaInRadians;
}

void Position::IncrementPosition(float r, float thetaInRadians) {
  if (r != 0 && thetaInRadians != 0) {
    return;
  }
  myRadius += r;
  myAngleInRadians += thetaInRadians;
}

bool Position::operator== (Position coords) {
  bool r_equal = false, ri_equal = false;
  if (myAngleInRadians - coords.myAngleInRadians < 0.0001 && coords.myAngleInRadians - myAngleInRadians < 0.0001) ri_equal = true;
  if (myRadius - coords.myRadius < 0.0001 && coords.myRadius - myRadius < 0.0001) r_equal = true;
  return r_equal && ri_equal;
}
