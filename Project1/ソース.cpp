#include<iostream>
using namespace std;

int main() {
    int crane = 0;	//鶴
    int turtle = 0;	//亀
    int heads = 0;	//頭
    int legs = 0;	//脚
    cout << "頭の数は：";
    cin >> heads;
    cout << "脚の数は：";
    cin >> legs;
    //ここで鶴と亀の数をcraneとturtleに代入
    crane = (heads * 4 - legs) / 2;
    turtle = heads - crane;
    cout << "鶴は" << crane << "亀は" << turtle << endl;
    return 0;
}