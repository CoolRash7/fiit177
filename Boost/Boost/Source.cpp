#ifndef TEST

#include <iostream>
#include <conio.h>
#include "Source.h"

using namespace std;

void main() {
	int number = 5349;

	int number1 = number % 10;
	int number2 = number % 100 / 10;
	int number3 = number % 1000 / 100;
	int number4 = number % 10000 / 1000;

	cout<<number1<<endl<<number2<<endl<<number3<<endl<<number4;
	_getch();

}

#endif // !1