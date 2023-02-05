
#ifndef HEAVY_LUGGAGE_DELIVERY_H_
#define HEAVY_LUGGAGE_DELIVERY_H_

#include "delivery.h"

namespace design_pattern
{

class HeavyLuggageDelivery : public Delivery
{
public:
  explicit HeavyLuggageDelivery()
    : Delivery()
    {
    }
  explicit HeavyLuggageDelivery(Delivery* pChain)
    : Delivery(pChain)
    {
    }
  virtual ~HeavyLuggageDelivery() = default;

  bool checkLuggage(Luggage* luggage) override;
  void deliver(Luggage* luggage) override;
  void handle(Luggage* luggage) override;
};

} // design_pattern

#endif // HEAVY_LUGGAGE_DELIVERY_H_
