
#include "lightluggagedelivery.h"
#include <iostream>

using namespace design_pattern;

bool LightLuggageDelivery::checkLuggage(Luggage* luggage)
{
  if (!luggage)
  {
    return false;
  }

  if (luggage->getWeight() <= 20)
  {
    return true;
  }
  return false;
}

void LightLuggageDelivery::deliver(Luggage* luggage)
{
  if (!luggage)
  {
    return;
  }
  
  std::wcout << L"貨物重量[ " << luggage->getWeight() << L" ]小型トラックで配送します。" << std::endl;
}

void LightLuggageDelivery::handle(Luggage* luggage)
{
  if (this->checkLuggage(luggage))
  {
    this->deliver(luggage);
  }
  else
  {
    this->getAcceptance(luggage);
  }
}
