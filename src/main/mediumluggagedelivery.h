
#ifndef MEDIUM_LUGGAGE_DELIVERY_H_
#define MEDIUM_LUGGAGE_DELIVERY_H_

#include "delivery.h"

namespace design_pattern
{

class MediumLuggageDelivery : public Delivery
{
public:
  explicit MediumLuggageDelivery()
    : Delivery()
    {
    }
  explicit MediumLuggageDelivery(Delivery* pChain)
    : Delivery(pChain)
    {
    }
  virtual ~MediumLuggageDelivery() = default;

  bool checkLuggage(Luggage* luggage) override;
  void deliver(Luggage* luggage) override;
  void handle(Luggage* luggage) override;
};

} // design_pattern

#endif // MEDIUM_LUGGAGE_DELIVERY_H_
