#include <iostream>
#include "stdafx.h"
#include <forward_list>
using namespace std;
// bu kodu visual studio projenizin i�ine kopyalay�n
// �rnek kod 3 : listenin istenilen bir yerine eleman ekleme

int main() {
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);

	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";             // liste 50 40 30 20 10
	cout << endl;
	l1.insert_after(l1.begin(), 45);  // listenin ba� eleman�n sonras�na 35 ekle
	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";            // yeni liste 50 45 40 30 20 10
	cout << endl;

	// ��kt�
	// 50  40  30  20  10
	// 50  45  40  30  20  10


	getchar();
	return 0;
}

