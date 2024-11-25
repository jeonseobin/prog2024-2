// 008_tv.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

//struct TV {
class TV {
private:
    bool powerOn;
    int channel;
    int volume;
public:
    void on() {
        powerOn = true;
    }
    void off() {
        powerOn = false;
    }
    void setChannel(int ch) {
        if (ch >= 0 && ch <= 1000)
            channel = ch;
    }
    int getChannel() {
        return channel;
    }
    void setVolume(int vol) {
        if (vol >= 1 && vol <= 100)
            volume = vol;
    }
    int getVoulme() {
        return volume;
    }
};
int main()
{
    TV tv;

    tv.on();
    tv.setChannel(10);
    tv.setVolume(50);

    //tv.channel = 130;
    //cout << "현재 채널은 " << tv.channel << endl; 
    //변수는 private 함수는  public

    cout << "현재 채널은 " << tv.getChannel() << endl;
    cout << "현재 볼륨은 " << tv.getVoulme() << endl;
}


