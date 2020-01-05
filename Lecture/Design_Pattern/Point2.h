//Point2.h
//
class PointImpl; // forward declartion.. 핵심..
//

class Point
{
  PointImpl* pImpl;
public:
  Point(int a =0 , int b =0);

  void Print() const;
};

// Point는 x,y가 있어야함.
//
// include가 필요할 것 같은데, point선언 같은 경우 전방선언으로만 가능함.
// 전방선언으로 포인터를 선언하는 것 가능하다.
//
//
