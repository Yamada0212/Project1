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

	if(bmi<18.5)
	{
		cout << "���Ȃ��͒�̏d�ł��B";
	}
	else if (18.5<=bmi< 25.0) 
	{
		cout << "���Ȃ��͕W���̏d�ł��B";
	}
	else if (25<=bmi<30) 
	{
		cout<<"���Ȃ��͔얞(1)�ł��B";
	}
	else if (30<=bmi<35)
	{
		cout << "���Ȃ��͔얞(2)�ł��B";
	}
	else if (35 <= bmi < 40)
	{
		cout << "���Ȃ��͔얞(3)�ł��B";
	}
	else if (40 <= bmi < 45)
	{
		cout << "���Ȃ��͔얞(4)�ł��B";
	}


	return 0;
}