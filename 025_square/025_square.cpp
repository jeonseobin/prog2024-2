// 025_square.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int minimum(int a[], int n, int(*fp), (int))

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int calc(int a, int (*fp)(int)) {
    return fp(a);
}
int main()
{
    int arr[] = { 23,9, -65,3,5 };
    int a = 10;
    int (*fp) (int);

    fp = square;
    cout << fp(a) << endl;

    fp = cube;
    cout << fp(a) << endl;

    cout<< calc(a, square) << endl;
    cout << calc(a, cube) << endl;

    cout << minimum(arr, 5, square) << endl;
    cout << minimum(arr, 5, cube) << endl;
}

//배열의 원소를 fp 함수로 계산한 최소값을 리턴
int minimum(int a[], int n, int(*fp), (int)) {
    int min = fp(a[0]);
    for (int i = 0; i < n; i++)
        if (min > fp(a[i]))
            min = fp(a[i]);
}



