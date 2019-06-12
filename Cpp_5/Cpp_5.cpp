#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	char a[1000], chet[1000];
	fstream kote("1.txt", ios::in);
	if (!kote)
	{
		cout << "File not open.";
		exit(1);
	}
	for (int i = 0;; i++)
	{
		kote >> a[i] >> chet[i];
		cout << a[i] << ' ' << chet[i] << '\n';
	}
	cout << chet[2];
	system("pause");
}