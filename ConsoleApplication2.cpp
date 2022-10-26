#include <iostream>
#include <ostream>
#include <string>

using namespace std;



int main() {
	printf("Wie lautet der Radius deiner Kugel?");
	
	int a;
	float b;
	float myNum = 3.14f;
	
	cin >> a;
	b = (a * a * myNum);
	cout << "Die gesuchte Zahl lautet " << b << ".";
	return 0;
}