// Bai18_TinhSoThoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include  <iostream> <cmath>
using namespace std;
int main()
{
	cout << "tinh so thoc tren ban co\n:";
	int soO;
	double tongthoc = 0;
	cout << " nhap so o: ";
	cin >> soO;
	for (int i = 0; i < soO; i++)
	{
		cout << " O thu" << i + 1 << " co " << pow(2, i) << "thoc\n";
		tongthoc = tongthoc + pow(2, i);
	}
	cout << "tong so thoc la: " << tongthoc;
	return 0;
}
	