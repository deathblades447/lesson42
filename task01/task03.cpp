#include <cmath>
int get_first_negative_value_index(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0) {
			return i;
		}
	}
	return -1;

}

int sum_absolute_value_after_first_negarive_value(int* array, int size) {
	int index = get_first_negative_value_index(array, size);

	if (index < 0) {
		return 0;
	}
	int sum = 0;

	for (int i =index + 1; i < size; i++)
	{
		sum += abs(array[i]);
	}
	return sum;
}