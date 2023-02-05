
#ifndef LIGHT_LUGGAGE_DELIVERY_H_
#define LIGHT_LUGGAGE_DELIVERY_H_

#include "delivery.h"

namespace design_pattern
{

class LightLuggageDelivery : public Delivery
{
public:
  explicit LightLuggageDelivery()
    : Delivery()
    {
    }
  virtual ~LightLuggageDelivery() = default;

  bool checkLuggage(Luggage* luggage) override;
  void deliver(Luggage* luggage) override;
  
};

} // design_pattern

#endif // LIGHT_LUGGAGE_DELIVERY_H_
