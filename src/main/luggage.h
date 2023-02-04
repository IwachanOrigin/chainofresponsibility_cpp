
#ifndef LUGGAGE_H_
#define LUGGAGE_H_

namespace design_pattern
{

const int LIGHT_LUGGAGE = 15;
const int MEDIUM_LUGGAGE = 45;
const int HEAVY_LUGGAGE = 120;

class Luggage
{
public:
  explicit Luggage(int weight)
    : m_weight(weight)
    {
    }
  ~Luggage() = default;

  int getWeight() { return m_weight; }

private:
  int m_weight;
};

} // design_pattern

#endif // LUGGAGE_H_
