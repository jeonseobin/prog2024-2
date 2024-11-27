// 017_String.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string.h> // c언어의 string 라이브러리 : strcpy(), streln()
using namespace std;

class String {
private:
    char* strData;
    int len;
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char* str) {
        len = strlen(str);
      /*  strData = str;*/  // 얕은 복사
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, str);
    }
    String(String& rhs) {   // 복사생성자    // 꼭 외우기 !!
        len = rhs.len;
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, rhs.strData);
    }
    ~String() {
        if (strData != NULL)
            delete[] strData;
    }

    const char* GetStrData() {
        if (strData)
            return strData;
        return "";
    }

    int GetLength() {
        return len;
    }
};

int main()
{
    String s1;
    String s2("Hello");

    cout << s1.GetLength() << endl;
    cout << s1.GetStrData() << endl;
    cout << s2.GetLength() << endl;
    cout << s2.GetStrData() << endl;

    String s("Hello2");
    String t = s;

    cout << t.GetLength() << endl;
    cout << t.GetStrData() << endl;
}

