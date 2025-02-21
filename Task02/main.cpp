#include <iostream>
#define SIZE 5
using namespace std;


int main() {
	//1)
	//int marks[];
	// 2)
	//const int SIZE = 5;
	//int marks[SIZE];
	//3)
	int marks[SIZE];

	marks[0] = 5;
	marks[1] = 10;
	marks[2] = 8;
	marks[3] = 9;
	marks[4] = 10;

	double s = 0;

	//s += marks[0];
	//s += marks[1];
	//s += marks[2];
	//s += marks[3];
	//s += marks[4];

	for (size_t i = 0; i < SIZE; i++)
	{
		s += marks[i];
	}

	cout << s / SIZE << endl;

	return 0;
}