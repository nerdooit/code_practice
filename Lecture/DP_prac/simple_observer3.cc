#include <iostream>
#include <vector>

using namespace std;

class Subject;

struct IGraph
{
  virtual void update(Subject* p) = 0;
  virtual ~IGraph() {}
};

class Subject
{
public:
  vector<IGraph*> v;
  void attach(IGraph* p) { v.push_back(p); }
  void detach()          { v.pop_back(); }
  void notify()
  {
    for (auto p : v)
      p->update(this);
  }
};

class Table : public Subject
{
  int data;
public:
  int getData() { return data; }
  void setData(int n) {
    data = n;
    notify();
  }
};

class BarGraph : public IGraph
{
public:
  virtual void update(Subject* p)
  {
    int n =  static_cast<Table*>(p)->getData();
    Draw(n);
  }
  void Draw(int n)
  {
    cout << "Bar Graph : ";
    for (int i = 0; i < n; i++)
      cout << "-";
    cout << endl;
  }
};

class PieGraph : public IGraph
{
public:
  virtual void update(Subject* p)
  {
    int n =  static_cast<Table*>(p)->getData();
    Draw(n);
  }
  void Draw(int n)
  {
    cout << "Pie Graph : ";
    for (int i = 0; i < n; i++)
      cout << "*";
    cout << endl;
  }
};

int main()
{
  Table t;
  BarGraph bg;
  PieGraph pg;

  t.attach(&bg);
  t.attach(&pg);

  while (1)
  {
    int n;
    cin >> n;
    t.setData(n);
  }
};
