// 014_opOverloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Vector2 {
private:
	float x, y;
public:
	Vector2();	// 생성자 함수여서 리턴하지 않음
	Vector2(float x, float y);	// 생성자 함수여서 리턴하지 않음
	float GetX() const;	// 리턴해야함
	float GetY() const;	// 리턴해야함
	Vector2 operator+(const Vector2 other) const;
	Vector2 operator-(const Vector2 other) const;
	Vector2 Add(const Vector2 other) const;
	Vector2 operator*(float k);
	float operator*(Vector2 other);
};

Vector2 Vector2::operator*(float k) {
	return Vector2(k * x, k * y);
}

float Vector2::operator*(Vector2 other) {
	return x * other.x + y * other.y;
}
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
Vector2 Vector2::operator+(const Vector2 other) const {
	return Vector2(this->x + other.x, this->y + other.y);	// 생성이 된 거임
}
Vector2 Vector2::operator-(const Vector2 other) const {
	return Vector2(this->x - other.x, this->y - other.y);	// 생성이 된 거임
}
Vector2 Vector2::Add(const Vector2 other) const {
	return Vector2(x + other.x, y + other.y);
}

// 클래스 밖에서 만든 연산자 오버로딩
// 클래스이 멤버 함수가 아니다
Vector2 operator*(float k, Vector2 v) {
	return Vector2(k * v.GetX(), k * v.GetY());
}
int main()
{
	Vector2 a(3, 4);
	Vector2 b(5, 6);

	Vector2 c = a + b;
	Vector2 d = a - b;

	Vector2 e = a.Add(b);

	cout << "c = (" << c.GetX() << ", " << c.GetY() << ")" << endl;
	cout << "d = (" << d.GetX() << ", " << d .GetY() << ")" << endl;
	cout << "e = (" << e.GetX() << ", " << e.GetY() << ")" << endl;

	Vector2 f = a * 3.1;
	Vector2 g = 3.1 * a;	// 쓸 수 없음
	float x = a * b;

	cout << "f = (" << f.GetX() << ", " << f.GetY() << ")" << endl;
	cout << "g = (" << g.GetX() << ", " << g.GetY() << ")" << endl;
	cout << "x = " << x << endl;
}
