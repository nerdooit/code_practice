#include <iostream>
#include <vector>

using namespace std;

struct IGraph
{
  virtual void update(int) = 0;

  virtual ~IGraph() {}
};

// 관찰자 기본 기능을 제공하는 클래스

// 3D 테이블이 있다고 생각해보고 데이터 모양이 복잡하다고 가정해보자.
// 모든 테이블들은 데이터의 모양은 다르지만, 공통적으로 동일한 모양이있다.
// 모든 테이블들은 vector와, attach, detach는 동일함.
// 관찰자 패턴을 위한 코드들은 동일하고, 데이터를 위한 코드만 다르다.
// 동일한 코드를 매번 만들기 보다는 관찰자 코드를 제공하는 기반 클래스를 만드는 것이 좋다.
// vector<IGraph*>, attach detach notify()
// 관찰자 기본 기능을 제공하는 기반 클래스를 설계한다.
class Subject
{
public:
  vector<IGraph*> v;
  void attach(IGraph* p) { v.push_back(p); }
  void detach(IGraph* p) { v.pop_back(); }
  void notify(int data)
  {
    for (auto p : v)
      p->update(data);
  }
};

// table에 초점을 맞춰보자.
// data를 하나밖에 안다루고 있는데 새로운 복잡한 데이터 타입이있다고 해보자.
class Table : public Subject
{
  int data;
public:

  void SetData(int d) {
    data = d;
    notify(data);
    // 이 코드도 동일하다.
    // 어짜피 위에서 벡터를 가지고 있다.
    // notify는 따로 빼는 게 좋다.
    //for (auto p : v)
    //  p->update(data);
  }
};


class PieGraph : public IGraph
{
public:
  virtual void update(int n)
  {
    Draw(n);
  }

  void Draw(int n)
  {
    cout << "Pie Graph : ";
    for ( int i = 0; i < n; i++ )
      cout << "*";
    cout << endl;
  }
};

class BarGraph : public IGraph
{
public:
  virtual void update(int n)
  {
    Draw(n); // 그래프를 다시 그리면 됨.
  }

  void Draw(int n)
  {
    cout << "Bar Graph : ";
    for ( int i = 0; i < n; i++ )
      cout << "+";
    cout << endl;
  }
};

int main()
{
  BarGraph bg;
  PieGraph pg;

  Table t;
  t.attach(&bg);
  t.attach(&pg);

  while(1)
  {
    int n;
    cin >> n;
    t.SetData(n);
  }
}
// GoF 디자인 패턴
// 객체 사이의 1:N의 종속성을 정의하고 한 객체의 상태가 변하면 종속된 다른 객체에 통보가 가고 자동으로 수정이 일어나게 한다. - 관찰자 패턴
// 다이어 그램
//
// 관찰자 패턴은 추상클래스 끼리 통신한다라고 부름.
// Subject           observer
// concrete subject   concrete observe
