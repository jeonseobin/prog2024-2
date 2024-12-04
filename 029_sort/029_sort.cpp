// 029_sort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[7] = { 2,4,3,1,7,5,23 };

    sort(a, a + 7);

    for (int i : a)
        cout << a << " ";
    cout << endl;
}

