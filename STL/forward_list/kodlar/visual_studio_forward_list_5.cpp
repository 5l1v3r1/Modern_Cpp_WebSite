#include <iostream>
#include "stdafx.h"
#include <forward_list>
using namespace std;
/* bu kodu visual studio projenizin i�ine kopyalay�n
�rnek kod 5: bir pointer ile listeyi gezme 
*/

int main() {
	forward_list<int> l1;
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	l1.push_front(40);
	l1.push_front(50);

	auto fi = next(l1.begin(), 4);     // fi listenin ba� eleman�ndan ba�lay�p 4 ilerleyecek (10)
	cout << *fi << endl;               // 10

	auto it = l1.begin();              // t�m listeyi yaz
	while (it != l1.end()) {
		cout << *it << "  ";           // 50 40 30 20 10
		it = next(it, 1);
	}

	// ��kt�
	// 10
	// 50  40  30  20  10


	getchar();
	return 0;
}
