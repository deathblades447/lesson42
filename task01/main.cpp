#include "util.h"
#include "task01.cpp"

#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "input size of vector: ";
	cin >> size;

	//random_init(array, size, -100, 100);
	cout << "input vector element: ";
	user_init(array, size);
	cout << "vector: " << convert(array, size) << endl;

	int result = calculate_product_between_extreme_elements(array, size);
	cout << "product of elements" << endl;
	return 0;
}