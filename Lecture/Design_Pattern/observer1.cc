#include <iostream>
#include <vector>

using namespace std;

class Table
{
  int data;
public:
  // data 1개. 쉽게 생각해보자
  void SetData(int d) { data = d; }
};

class PieGraph
{
public:
  void Draw(int n)
  {
    cout << "Pie Graph : ";
    for ( int i = 0; i < n; i++ )
      cout << "*";
  }
};

int main()
{

}

// observer pattern
// 관찰자 패턴에 대해 알아보자.
// 오른쪽 그림 -> excel table, graph 추가할 수 있다. 값을 수정하고 엔터치면 바로 그래프 만들어진다. 이렇게 하나의 데이터가 변경 될 경우 연결된 다양한 객체들이 자동으로 업데이트 되게하는 디자인 기법.
//
// 어떻게 만들 수 있는지 생각해보자.
//
// 변경된 걸 어떻게 알 수 있을까?
// 1. Graph 쪽에서 데이터를 바라보는 방법 (Graph loop)
// 2. 테이블이 바뀔 경우 통보. 굳이 이럴 경우 Graph 입장에서 loop돌지 말고 테이블이 바뀔 경우 알려줌.
//
// Table들은 모든 Graph들에 대해 포인터를 가지고 있어야한다.
//
// 두 번째 방법으로 정의한 것을 관찰자 패턴이라고 함.
//
// 관찰자 패턴 - 객체 사이의 1 : N의 종속성을 정의하고 객체의 상태가 변하면 종속된 다른 객체에 통보가 가고 자동으로 수정이 일어나게 한다.
//
// 그래프 같은 것을 Observer 관찰자라 정의함.
// 테이블 같은 것을 Subject 관찰자의 대상 
