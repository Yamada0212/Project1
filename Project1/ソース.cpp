#include<iostream>
using namespace std;

int main() {
    int crane = 0;	//��
    int turtle = 0;	//�T
    int heads = 0;	//��
    int legs = 0;	//�r
    cout << "���̐��́F";
    cin >> heads;
    cout << "�r�̐��́F";
    cin >> legs;
    //�����Œ߂ƋT�̐���crane��turtle�ɑ��
    crane = (heads * 4 - legs) / 2;
    turtle = heads - crane;
    cout << "�߂�" << crane << "�T��" << turtle << endl;
    return 0;
}