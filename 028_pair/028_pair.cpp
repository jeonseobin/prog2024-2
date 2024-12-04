// 028_pair.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair<int, string> a = { 123, "abc" };

    cout << a.first << ", " << a.second << endl;
    a.second = "asdlkfalk";
    cout << a.first << ", " << a.second << endl;

    pair<string, string> dict = { "Hllo", "안녕하세요" };
    cout << dict.first << ", " << dict.second << endl;

    // dictionary
    map<string, int> fruit;
    fruit["apple"] = 7;
    fruit["banana"] = 5;
    fruit["orange"] = 10;

    cout << "banana : " << fruit["banana"] << endl;
    cout << "apple : " << fruit["apple"] << endl;
    cout << "orange : " << fruit["orange"] << endl;

    /*for (pair<string, int> f : fruit)
        cout << f.first << " : " << f.second << endl;
    cout << endl;*/

    for (auto f : fruit)
        cout << f.first << " : " << f.second << endl;
    cout << endl;


}


