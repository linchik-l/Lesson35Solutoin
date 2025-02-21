#include <iostream>
using namespace std;
#include "logic.h"

int main() {
	int mark, mark2, mark3, mark4, mark5;
	cout << "Input ur marks: ";
	cin >> mark >> mark2 >> mark3 >> mark4 >> mark5;;

	cout << "Averange mark is " << find_average_mark(mark, mark2, mark3, mark4, mark5) << endl;

	return 0;
}