#include <iostream>
#include "PointImpl.h"

using namespace std;

PointImpl::PointImpl( int a, int b ) : x(a), y(b) {}

void PointImpl::Print() const
{
  cout << x << ", " << y << endl;
}

// 모든 기능이 다 있다.
