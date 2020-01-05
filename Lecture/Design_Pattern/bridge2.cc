#include <iostream>
using namespace std;

struct IMP3
{
  virtual void Play() = 0;
  virtual void Stop() = 0;
  virtual ~IMP3() {}
};

class IPod : public IMP3
{
public:
  void Play() { cout << "Play MP3" << endl; }
  void Stop() { cout << "Stop MP3" << endl; }
};

//---------------
class MP3
{
  IMP3* pImpl;
public:
  MP3()
  {
    // 인자로 받아서 변경도 가능.
    pImpl = new IPod;
  }

  void Play() { pImpl->Play(); }
  void Stop() { pImpl->Stop(); }
  void PlayOneMinuate()
  {
    pImpl->Play();
    Sleep(1);
    pImpl->Stop();
  }// 더 편해짐.
};

class People
{
public:
  void UseMP3(MP* p)
  {
    p->Play();
    p->PlayOneMinuate(); // 1분 미리듣기가 필요했어.
  }
};

// people이 계속 생긴다. MP3에 대한 인터페이스를 변경할 경우 큰 변화가 생긴다. 빠르게 대응.. 따서 중간 계층에 하나를 둔다. People이 IMP3 건드리지 말고 중간 단을 둠
//
// Bridge Pattern
// 구현과 추상화 개념을 분리해서 각각을 독립적으로 변경할 수 있게한다.

int main()
{

}

// 사용자는 MP3만 알고 있음. 다른걸 요구하면, 거기서 만들면됨.
// Abstrcatioqn -> MP3
// Implementor -> IMP3
//
// bridge pattern은 update에 유연하게 대응.
