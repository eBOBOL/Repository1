#include <iostream>
using namespace std;
template <typename �, typename ��>
void swap(�& a, ��& b) {
	� temp = a;
	a = b;
	b = temp;
}
int main() {
	setlocale(LC_ALL, "rus");
	int a = 12; double b = 1.46;
	cout << a << b << endl;
	swap<int, double>(a, b);
	cout << a << b << endl;
}