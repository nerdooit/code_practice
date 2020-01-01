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
/*
class Text : public TextView, public Shape
{
public:
  Text( string s) : TextView(s) {}

  virtual void Draw() { TextView::Show(); }
};*/

// 다중상속이 아닌 포함관계로 변경가능
// 아래와 같이 사용하면, TextView가지고 있는 멤버함수를 사용할 수 없다.
class Text : public Shape
{
  TextView tv;
public:
  Text( string s) : tv(s) {}

  virtual void Draw() { tv.Show(); }
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

class ObjectAdaptor : public Shape
{
  TextView* pView; // 포인터가 핵심. 값으로 하면 만드는 것이니까 안돼.
public:
  ObjectAdaptor( TextView* p) : pView(p) {}

  virtual void Draw() { pView->Show(); }
};
// objectAdaptor는 도형편집기에 호환이 되고, 내부적으로 만드는 것이 아닌 외부의 것을 받아서 사용.

int main()
{

  TextView tv("world"); // 이미 존재하는 객체

   vector<Shape*> v; 
   // v.push_back(&tv); // error

   // 이미 존재하던 객체의 인터페이스를 변경한다.
   v.push_back( new ObjectAdaptor(&tv));
   v.push_back(new Text("hello"));

   for (auto p : v)
     p->Draw();
}

// 우리가 Text관련 클래스를 구성한 것도 아니고, 그냥 adaptor처럼 사용하게 구현함. 
// 한번 생각해보자.
// 예를들어, TextView가 이미 존재하던 객체라고 생각해보자.
// TextView는 클래스지만, tv는 객체이다.
// 하지만, tv는 Shape를 상속받은 것은 아님. 따라서, vector에 넣을수가 없다. tv는 객체. vector의 인터페이스가 교체되야지 들어갈 수 있음.
//
// adaptor에는 두가지 종류가 존재
// 1. 클래스 adaptor
//  - 우리가 이전에 고친 것. TextView라는 클래스의 어뎁터를 고친 것
//  - 클래스의 인터페이스를 변경한다.
//  - 다중 상속 또는 포함 되는 경우가 많다.
//  - 이미 존재하던 객체의 인터페이스는 변경할 수 없다.
//
// 2. 객체 adaptor
//
// - 객체의 인터페이스를 변경한다.
// - 구성 (composition)을 사용하는 경우가 많다.
// - 기존 객체를 포인터 또는 참조로 포함.
// 객체 어뎁터는 포인터를 받는 게 중요하다
