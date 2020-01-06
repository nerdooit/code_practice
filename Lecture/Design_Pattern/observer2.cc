#include <iostream>
#include <vector>

using namespace std;

struct IGraph
{
  virtual void update(int) = 0;

  virtual ~IGraph() {}
};


class Table
{
  vector<IGraph*> v;

  int data;
public:
  void attach(IGraph* p) { v.push_back(p); }
  void detach(IGraph* p) { v.pop_back(); }

  void SetData(int d) { 
    data = d; 

    for (auto p : v)
      p->update(data);
    // table의 데이터가 변경되는 순간 데이터를 전달함.
  }
};
// table 쪽에는 모든 graph를 담아야한다.
//
// vector<PieGraph*> v; .. 이렇게 정의하면, Pie밖에 담을 수 없다. 공통의 클래스가 필요함. (우리가 이전 시간까지 배운 내용들) 공통의 인터페이스가 필요함. 통하는 함수가 필요하다. 모든 Graph는 Update함수가 있어야함. paraeter가 있는데 점점 발전시켜가보자.
//
// attach, detach 함수가 있으면 됨. 이함수들은 그래프를 담을 수 있어야하기때문에 필요.

class PieGraph : public IGraph
{
public:
  virtual void update(int n)
  {
    Draw(n); // 그래프를 다시 그리면 됨.
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

  // 사용자 한테 데이터 받아서 전달 이순간 모든 그래프에게 통보됨
}

