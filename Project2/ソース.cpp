#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int stdBMI = 22; //�W��BMI

	double height; //�g��
	double weight; //�̏d
	double bmi; //BMI
	double stdWeight; //�W���̏d

	cout << "�g��(cm)����͂��ĉ������B";
	cin >> height;
	cout << "�̏d(kg)����͂��ĉ������B";
	cin >> weight;

	height /= 100;

	bmi = weight / height / height;

	stdWeight = stdBMI * height * height;

	cout << "���Ȃ���BMI��" << fixed << setprecision(1) << bmi << "�ɂȂ�܂��B" << endl;
	cout << "���Ȃ��̕W���̏d��" << stdWeight << "kg�ɂȂ�܂��B" << endl;

	if (bmi >= 25.0) 
	{
		cout<<"���Ȃ���"
	}

	return 0;
}