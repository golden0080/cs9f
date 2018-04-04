#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>

#include "positions.h"
#include "park.h"

class Person : public Animal {
public:
  Person(std::string name, Position p);
  bool Chase();

protected:
};

class Cat : public Animal {
public:
  Cat(std::string name, Position p);
  bool Chase();

protected:
};

class Mouse : public Animal {
public:
  Mouse(std::string name, Position p);
  bool Chase();

protected:
};

#endif  // ANIMALS_H
