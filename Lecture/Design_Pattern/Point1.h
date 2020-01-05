class Point
{
  int x, y;
  int debug;
public:
  Point( int a = 0, int b = 0);

  void Print() const;
};


// PIMPL IDioms
// point class 선언부만 넣어둠
//
// 예를 들어서, debug를 위해 member data를 추가했다고 해보자.
// 다시 컴파일 했을 경우
// 어떤 것들이 컴파일 될까?
// include 되고 있는 파일들은 재 컴파일.
//
// 오픈 소스 보면, 수백개의 소스가 있음
//
// 포인터는 기본적인 코드..
// 단 한줄만 적었는데 수백 수천만의 코드가 다시 컴파일 
//
// 컴파일 시간의 저하가 생김.
//
// bridge pattern개념 가져다 쓰면, 더 빠르게 할 수 있음
