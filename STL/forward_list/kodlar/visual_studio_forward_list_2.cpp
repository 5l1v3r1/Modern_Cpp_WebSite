#include <iostream>
#include "stdafx.h"
#include <forward_list>
using namespace std;

/* bu kodu visual studio projenizin i�ine kopyalay�n
�rnek kod 2: bir listeyi yazd�rma �rne�i */

int main() {
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);

	for (auto i = l1.begin(); i != l1.end(); i++)
		cout << *i << "  ";
	cout << endl;

	// ��kt�
	// 50  40  30  20  10


	getchar();
	return 0;
}
