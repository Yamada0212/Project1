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

	if (bmi >= 25.0) 
	{
		cout<<"あなたは"
	}

	return 0;
}