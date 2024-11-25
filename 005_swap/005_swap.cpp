﻿// 005_swap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void swap(int* x, int* y)

{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
//void swap(int& x, int& y)// 레퍼런스 변수사용
//{
//    int t = x;
//    x = y;
//    y = t;
//}

void swap(double& x, double& y)// 레퍼런스 변수사용
{
    double t = x;
    x = y;
    y = t;
}


int main()
{
    int a = 4;
    int b = 5;

    double x = 1.1234;
    double y = 5.4321;

   /* swap(&a, &b);*/
    swap(a, b);
    swap(x, y);

    cout << a << ' ' << b << endl;
    cout << x << ' ' << y << endl;
}
