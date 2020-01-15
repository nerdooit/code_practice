#include <iostream>
#include <vector>

using namespace std;

class Subject; // IGraph에서 사용하기 위해 전방선언

struct IGraph
{
  virtual void update(Subject*) = 0;

  virtual ~IGraph() {}
};

// 변경되었다만 알리면 안되고, 어떻게 변경되었다라는 걸 알려줘야함.
// 1. 변화를 통보할 때 같이 전달 - push 방식
//    데이터가 하나 일경우는 가능하다. 하지만, 데이터가 많을 경우 복잡해진다.
// 2. 변화된 사시을 알려줌. - pull 방식
//    뭐가 변화되었는지는 Graph에서 얻어감.
//    그래프입장에서는 table의 주소를 알아야함.
//    데이터 전달하지말고 주소를 전달하자.

class Subject
{
public:
  vector<IGraph*> v;
  void attach(IGraph* p) { v.push_back(p); }
  void detach(IGraph* p) { v.pop_back(); }
  void notify()
  {
    for (auto p : v)
      p->update(this); // 내 주소 줄테니까 함수 통해서 알아서 꺼내가라.
  }
};

class Table : public Subject
{
  int data;
public:

  void SetData(int d) {
    data = d;
    notify();
  }

  int GetData()
  {
    return data;
  }
};


class PieGraph : public IGraph
{
public:
  virtual void update(Subject* p)
  {
    // 테이블에 접근해서 데이터를 꺼내와야한다.
    //int n = p->GetData(); // 테이블의 포인터의 함수로 꺼낼 수 있다.
    // GetData는 Table의 함수이다. 그렇다면, Table로 변경하는건 어떨까? 안된다. 여러개의 Table이 존재할 수도 있음.
    // 반드시 casting이 등장함.
    int n = static_cast<Table*>(p)->GetData();
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
  virtual void update(Subject* p)
  {
    int n = static_cast<Table*>(p)->GetData();
    // casting이 들어가야하는 모델이다.
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
