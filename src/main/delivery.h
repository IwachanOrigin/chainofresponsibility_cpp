
#ifndef DELIVELY_H_
#define DELIVELY_H_

#include "luggage.h"

namespace design_pattern
{
  
class Delivery
{
public:
  explicit Delivery() = default;
  virtual ~Delivery() = default;

  virtual bool checkLuggage(Luggage* luggage) = 0;
  virtual void deliver(Luggage* luggage) = 0;
};

} // design_pattern

#endif // DELIVELY_H_
