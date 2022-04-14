#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int stdBMI = 22; //標準BMI

	double height; //身長
	double weight; //体重
	double bmi; //BMI
	double stdWeight; //標準体重

	cout << "身長(cm)を入力して下さい。";
	cin >> height;
	cout << "体重(kg)を入力して下さい。";
	cin >> weight;

	height /= 100;

	bmi = weight / height / height;

	stdWeight = stdBMI * height * height;

	cout << "あなたのBMIは" << fixed << setprecision(1) << bmi << "になります。" << endl;
	cout << "あなたの標準体重は" << stdWeight << "kgになります。" << endl;

    if (bmi>=40)
	{
	cout << "あなたは肥満(4)です。";
	}
	else if (bmi>=35)
	{
		cout << "あなたは肥満(3)です。";
	}
	else if (bmi>=30)
	{
		cout << "あなたは肥満(2)です。";
	}
	else if (bmi>=25) 
	{
		cout<<"あなたは肥満(1)です。";
	}
	else if (bmi>=18.5)
	{
		cout << "あなたは標準体重です。";
	}
	else
	{
		cout << "あなたは低体重です。";
	}

	return 0;
}