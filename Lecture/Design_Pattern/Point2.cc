#include "PointImpl.h"
#include "Point2.h"

Point::Point(int a, int b)
{
  PImpl = new PointImpl(a,b);
}

void Point::Print() const
{
  pImpl->Print();
}

// 그림 기억할 것
