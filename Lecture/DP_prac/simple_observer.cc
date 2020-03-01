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
  void detach()          { v.pop_back(); }

  void setData(int n) {
    data = n;

    for (auto p : v)
      p->update(data);
  }

};

class BarGraph : public IGraph
{
public:
  virtual void update(int n) { Draw(n); }
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
  virtual void update(int n) { Draw(n); }
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

  t.setData(2);
  //bg.Draw(2);
  //pg.Draw(2); 정적으로 넣는 것이 아닌 Table에서 업데이트 될 경우 자동으로 Update 하는게 핵심
  //

};
