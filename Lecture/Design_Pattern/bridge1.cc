#include <iostream>
using namespace std;

struct IMP3
{
  virtual void Play() = 0;
  virtual void PlayOneMinuate() = 0; // 이렇게 넣는순간 인터페이스가 바뀌게 됨. 모든 엠피쓰리의 인터페이스가 바껴야함. People에서 요구 조건이 계속 바뀌면 업데이트가 너무 많아 힘들어짐.
  virtual void Stop() = 0;
  virtual ~IMP3() {}
};

class IPod : public IMP3
{
public:
  void Play() { cout << "Play MP3" << endl; }
  void Stop() { cout << "Stop MP3" << endl; }w
};

class People
{
public:
  void UseMP3(IPod* p)
  {
    p->Play();
    p->PlayOneMinuate(); // 1분 미리듣기가 필요했어.
  }
};

int main()
{

}

// bridge pattern
// 음악관련 코드가 있다고 보자. 사람이 있어 아이팟을 받아서 사람이 음악을 들음. IPod을 받으면, 새로운 엠피쓰리를 쓸 수 없음. 새로운 제품이 나왔을 때 확장성을 갖기 위해서는 Interface를 만들어야해. 
//
// 모든 엠피쓰리는 무조건 재생 스탑 함수 필요하고 가상 소멸자 필요함.
//
// 사람이 요구조건이 생김.
//
// 음악을 듣다보니 1 분 미리듣기 할 수 있으면 좋을 것 같다.
// playOneMinuate가 필요함.
//
