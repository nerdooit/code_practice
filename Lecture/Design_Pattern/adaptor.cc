#include <iostream>
#include <vector>
#include <string>
#include "TextView.h"

using namespace std;

class Shape
{
public:
  virtual void Draw() { cout << "Draw Shape" << endl; }
};

class Text : public TextView, public Shape
{
public:
  Text( string s) : TextView(s) {}

  virtual void Draw() { TextView::Show(); }
};

class Rect : public Shape
{
public:
  virtual void Draw() { cout << "Rect Shape" << endl; }
};

class Circle : public Shape
{
public:
  virtual void Draw() { cout << "Circle Shape" << endl; }
};

int main()
{
   vector<Shape*> v;
   v.push_back(new Rect);
   v.push_back(new Circle);
   v.push_back(new Text("hello"));

   for (auto p : v)
     p->Draw();
}
