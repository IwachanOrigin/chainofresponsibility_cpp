
#include "lightluggagedelivery.h"
#include "mediumluggagedelivery.h"
#include "heavyluggagedelivery.h"
#include <memory>
#include <vector>
#include <locale>

using namespace design_pattern;

int main(int argc, char* argv[])
{
  std::locale::global(std::locale("japanese"));

  std::unique_ptr<Luggage> pLuggage = std::make_unique<Luggage>(HEAVY_LUGGAGE);
  std::unique_ptr<LightLuggageDelivery> pLight = std::make_unique<LightLuggageDelivery>();
  std::unique_ptr<MediumLuggageDelivery> pMedium = std::make_unique<MediumLuggageDelivery>();
  std::unique_ptr<HeavyLuggageDelivery> pHeavy = std::make_unique<HeavyLuggageDelivery>();

  std::vector<Delivery*> deliveries;
  deliveries.push_back(pLight.get());
  deliveries.push_back(pMedium.get());
  deliveries.push_back(pHeavy.get());

  std::vector<Delivery*>::iterator it = deliveries.begin();
  while(it != deliveries.end())
  {
    if ((*it)->checkLuggage(pLuggage.get()))
    {
      (*it)->deliver(pLuggage.get());
      break;
    }
    it++;
  }
  return 0;
}

