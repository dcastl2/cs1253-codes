#include <iostream>
using namespace std;

int main() {

	int a = 5;
	int b = 2;

	cout << "<";
	cout << ((a>b)  &&  (a<b)) << ", ";
	cout << ((a>b)  ||  (a<b)) << ", ";
	cout << ((a>b)  && !(a>b)) << ", ";
	cout << ((a>b)  || !(a>b));
	cout << ">";
	cout << endl;

	return 0;

}
