#include <iostream>
#define SIZE 100
using namespace std;

int get_min(int* numbers, int count);
int get_max(int* numbers, int count);


int main() {
	int numbers[SIZE];

	int count;
	cout << "Input count of numbers: ";
	cin >> count;

	cout << "Input numbers: ";
	for (int i = 0; i < count; i++)
	{
		cin >> numbers[i];
	}

	cout << "Max value is " << get_max(numbers, count) << endl;
	cout << "Max value is " << get_min(numbers, count) << endl;

	return 0;
}