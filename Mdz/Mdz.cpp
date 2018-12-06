// Mdz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void hasNull(int N) {
	int n = N;
	while (N != 0) {
		if (N % 10 == 0){ 
			cout << " " << n;
			break;
		}
		N /= 10;
	}
}

int sknum(int N) {
	int num = 0;
	while (N != 0) {
		num++;
		N /= 10;
	}
	return num;
}

int tenin(int N) {
	int ten = 10;
	for (int i = 1; i < N; i++)
	{
		ten = ten * 10;
	}
	return ten;
}
void lastisnum(int N) {
	cout << endl;
	for (int i = 1; i <= N; i++)
	{
		if (i == (i*i) % tenin(sknum(i))) {
			 cout << i << "-" << i*i << "- " << tenin(sknum(i)) << endl;
		}		
	}
}
void armstroing(int b) {
	int N, n, dig, num, lc = 0;
	for (int x = 1; x <= b; x++)
	{
		N = x, n = x, dig = 0, num = sknum(x);
		while (N != 0) {
			lc = N % 10;
			for (int i = 1; i < num; i++)
			{
				lc = lc * (N % 10);
			
			}
			dig += lc;
			N /= 10;
		}
		if (dig == n) {
			cout << " " << x ;
		}
	}
	cout << endl;
}

int main()
{
	int N = 0;
	do {
		cout << "Enter N ="; cin >> N;
	} while (N < 1);

	cout << "1 Uzd) ";
	lastisnum(N);
	cout << endl;
	cout << "3 Uzd) ";
	armstroing(N);
	cout << endl;
	cout << "2 Uzd) ";
	for (int i = 1; i <= N; i++)
	{
		hasNull(i);
	}
	system("pause");
}