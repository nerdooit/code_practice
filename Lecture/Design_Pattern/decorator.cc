#include <iostream>

using namespace std;

struct Component
{
  virtual void Fire() = 0;
  virtual ~Component() {};
};

class Airplane : public Component
{
  int color;
  int speed;
public:
  void Fire() { cout << " Airpalne --------" << endl; }
};

class IDecorator : public Component
{
  Component* ar;
public:
  IDecorator(Component* p) : ar(p) {}
  void Fire() { ar->Fire(); }
};

class LeftMissile : public IDecorator
{
public:
  LeftMissile(Component* p) : IDecorator(p) {}

  void Fire() { 
    IDecorator::Fire();
    cout << "Left Missile >>>>>>> " << endl; 
  }
};

class RightMissile : public IDecorator
{
public:
  RightMissile(Component* p) : IDecorator(p) {}

  void Fire() { 
    IDecorator::Fire();
    cout << "Right Missile >>>>>>> " << endl; 
  }
};

int main()
{
  Airplane ar;
  LeftMissile lm(&ar);

  RightMissile rm(&lm);
  rm.Fire();
}
