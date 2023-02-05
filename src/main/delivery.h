
#ifndef DELIVELY_H_
#define DELIVELY_H_

#include "luggage.h"

namespace design_pattern
{
  
class Delivery
{
public:
  explicit Delivery();
  explicit Delivery(Delivery* pChain);
  virtual ~Delivery();

  virtual bool checkLuggage(Luggage* luggage) = 0;
  virtual void deliver(Luggage* luggage) = 0;
  virtual void handle(Luggage* luggage) = 0;

protected:
  void getAcceptance(Luggage* luggage);

private:
  Delivery* m_successor;
};

} // design_pattern

#endif // DELIVELY_H_
