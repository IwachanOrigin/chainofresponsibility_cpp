
#include "mediumluggagedelivery.h"
#include <iostream>

using namespace design_pattern;

bool MediumLuggageDelivery::checkLuggage(Luggage* luggage)
{
  if (!luggage)
  {
    return false;
  }

  if ((20 < luggage->getWeight()) && (luggage->getWeight() <= 50))
  {
    return true;
  }
  return false;
}

void MediumLuggageDelivery::deliver(Luggage* luggage)
{
  if (!luggage)
  {
    return;
  }
  
  std::wcout << L"貨物重量[ " << luggage->getWeight() << L" ]中型トラックで配送します。" << std::endl;
}
