// 010_complex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Complex {
private:
    double real;    // 실수
    double imag;   // 허수
public:
    Complex() { //매개변수가 없는 초기화
        real = 0;
        imag = 0;
    }
    Complex(double real, double imag) {  //매개변수가 2개 있는 초기화 생성자
        this->real = real;
        this->imag = imag;
    }
    void SetReal(double real) {
        this->real = real;  //this 써도 되고 안써도 됌.
    }
    double GetReal() {
        return this->real;
    }
    void SetImag(double imag) {
        this->imag = imag;
    }
    double GetImag() {
        return imag;    //this 써도 되고 안써도됌.
    }
};

int main()
{
    Complex c1;
    Complex c2 = Complex(2, 3);
    Complex c3(2, 4);

    cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
    cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
}
