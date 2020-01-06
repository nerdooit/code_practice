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
// 실제 포인트 객체가 일을하는 것이 아닌 모든 일은 PointImpl이 한다. 한번 더 거치는데 왜 이런걸 만드냐?
// 혹시 디버깅을 만들기 위해서 멤버를 추가한다.
// Impl에 변화가 있어서 디버깅을 해야한다고 가정해보자. 그럴 경우 debugging 해야하는 것의 코드 양이 작다 그래서 더 빠르게 가능하다.
//
// Point to IMPlementation -> PIMPL
// 컴파일 속도를 향상시킨다.
// 완벽한 정보은닉이 가능하다. "헤더파일을 감출 수 있다."
//  - 위의 그림을 볼 경우 Point1.cpp을 감추고 싶다면, 동적모드로 빌드하면 소스 감출 수 있다. 그렇다 하더라도 header file을 줘야한다. Memberdata가 어떤 것이 있는지 감출 수 없다. C++ 아무리 동적 모드로 해도 감출 수 없다. 하지만, 이렇게 쓰면 최종 사용자에게는 Point2만 줌. 보안에 민감한 프로그램 만들 경우 이렇게 만들면 좋다. 
//
//  구현부와 인터페이스를 분리할 떄 사용.

// 그림 기억할 것
