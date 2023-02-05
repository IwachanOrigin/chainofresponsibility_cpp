
#include "delivery.h"
#include <iostream>

using namespace design_pattern;

Delivery::Delivery()
  : m_successor(nullptr)
{
}

Delivery::Delivery(Delivery* pChain)
  : m_successor(pChain)
{
}

Delivery::~Delivery()
{
  if (m_successor)
  {
    delete m_successor;
  }
  m_successor = nullptr;
}

void Delivery::getAcceptance(Luggage* luggage)
{
  if (m_successor != nullptr)
  {
    m_successor->handle(luggage);
  }
  else
  {
    std::wcout << "重量オーバーです。" << std::endl;
  }
}
