#include "util.h"
#include "task01.cpp"
#include "task02.cpp"
#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "input size of vector: ";
	cin >> size;

	random_init(array, size, -100, 100);
	//random_init(array, size, -100, 100);
	//cout << "input vector element: ";
	//user_init(array, size);
	cout << "vector before: " << convert(array, size) << endl;
	//task01
	//int result = calculate_product_between_extreme_elements(array, size);
	//cout << "product of elements" << endl;
	//return 0;

	//task02
	//bubble_sort_asc(array, size);
	//cout << "vector after: " << convert(array, size) << endl;

	int sum = sum_absolute_values_after_first_negative_value(array, size);
	cout << "sum absolute values after first negative value is" << sum;
}