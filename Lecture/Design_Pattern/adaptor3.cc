#include <iostream>
#include <list>
#include <vector>
#include <deque>

using namespace std;

// adaptor pattern의 실제 예로 c++ STL을 살펴보자
// Stack을 만들어 보자
/*
template<typename T> class Stack : private list<T>
{
public:
  // 함수 이름을 변경해서 stack처럼 변경함.
  void push(const T& a) { list<T>::push_back(a); }
  void pop(const T& a)  { list<T>::pop_back(a); }
  T&   top()            { return list<T>::back(); }
};                                  
*/
template<typename T, template C = deque<T> > class Stack
{
  // 반드시 list를 사용할 필요 없음.
  // 만드는 사람이 결정하기 보다는, 사용자가 원하는 방향으로 만들 수 있도록 하는 게 좋다.

  C st;
public:
  // 함수 이름을 변경해서 stack처럼 변경함.
  void push(const T& a) { st.push_back(a); }
  void pop(const T& a)  { st.pop_back(a); }
  T&   top()            { return st.back(); }
};                          
// #include <stack> // stack adaptor라고 부른다. 다 만들어져있음. inline으로 되어져 있다. 기계어 코드로 치환. 따라서, 성능저하가 없다. 기계어 코드가 남을 필요도 없는거고 그래서 코드 메모리가 늘어나지 않음.

// Container Adaptor
// = Sequence Container의 인터페이스 수정 stack, queue, priority queue 제공
// 이 어뎁터는 class, object중에 어떤 것일까?
//


int main()
{
  Stack<int, list<int>> s; // list를 stack으로 변경하는 adaptor이다.
  Stack<int, vector<int>> s1; // vector를 stack으로 변경하는 adaptor. 아무것도 안쓰면 deque을 쓸께정도로 하면 초급사용자도 사용가능.
  Stack<int> s2;
  s.push(10);
  s.push(20);

  s.push_front(20); // 이건 stack의 고유 능력이 깨짐. 왜 컴파일이 되나? list에 있는 모든 것을 상속받음
  // - 해결 방법
  // 1. private 상속
  // 2. 상속을 받으니 물려 받는 것. 포함으로 가면 됨.

  cout << s.top() << endl;
}

// Stack이 없다고 가정.

// program을 만들다 보면 Stack이 필요하다. 이미 linked list가 STL에 있음. linked list를 한쪽 방향으로 사용한다면, 스택으로 사용할 수 있지 않을까?
//
// list의 함수이름을 stack처럼 보이도록 변경

