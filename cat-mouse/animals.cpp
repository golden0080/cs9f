#include <string>
#include "animals.h"

using namespace std;

Person::Person(string s, Position p) : Animal(s, p) {}

Mouse::Mouse(string s, Position p) : Animal(s, p) {}

Cat::Cat(string s, Position p) : Animal(s, p) {}

bool Person::Chase() {
  if (myTarget && !myPos.Sees(myTarget->Pos())) {
    // TODO(gh): move himself
  }
  return false;
}

bool Mouse::Chase() {
  return false;
}

bool Cat::Chase() {
  return false;
}
