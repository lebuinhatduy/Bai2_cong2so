// Bai2_cong2so.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	cout << "CHUONG TRINH TINH TONG HAI SO " << endl; 
	int so1, so2; //khai bao bien so1 va so2 kieu so nguyen 
	int hieu;
	cout << "Nhap so1 :"; cin >> so1;
	cout << "nhap so2 :"; cin >> so2;
	hieu = so1 - so2;
	cout << "Tong hai so:" << so1 << "-"<< so2 << "=" << hieu;
	return 0;
}