
#include "heavyluggagedelivery.h"
#include <iostream>

using namespace design_pattern;

bool HeavyLuggageDelivery::checkLuggage(Luggage* luggage)
{
  if (!luggage)
  {
    return false;
  }

  if ((50 < luggage->getWeight()) && (luggage->getWeight() <= 120))
  {
    return true;
  }
  return false;
}

void HeavyLuggageDelivery::deliver(Luggage* luggage)
{
  if (!luggage)
  {
    return;
  }
  
  std::wcout << L"貨物重量[ " << luggage->getWeight() << L" 大型トラックで配送します。" << std::endl;
}
