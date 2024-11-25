// 006_defaultParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void f(int a = 1)
{
    cout << a << endl;
}

int main()
{
    f(123); // a에 123이 들어간다는 의미
    f();    // a에 기본값인 1이 들어간다는 의미
}
