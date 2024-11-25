// 004_loop.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };

    // 범위 기반 for문
    for (int i : a)
        //cout << i << ' ';
        cout << i*i << ' '; // i의 제곱 출력
    cout << endl;
}

