int get_min(int* numbers,int count) {

	int min = numbers[0];

	for (int i = 0; i < count; i++)
	{
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	return min;
}
int get_max(int* numbers, int count) {

	int max = numbers[0];

	for (int i = 0; i < count; i++)
	{
		if (numbers[i] > max) {
			max = numbers[i];
		}
	}
	return max;
}