#include <stdio.h>

int arr[5];
int getMaxIdx(int size); //size는 배열의 크기, 찾은 max 값의 index return
double getAverage(int size); //size는 배열의 크기, 평균값 return
void getArr(int size);
void printResult(int idx, double average);

int main(void)
{
	int size = sizeof(arr) / sizeof(int);
	getArr(size);
	int maxIdx = getMaxIdx(size);
	double average = getAverage(size);
	printResult(maxIdx, average);

	return 0;
}

int getMaxIdx(int size)
{
	int maxValue = 0;
	int maxIdx = 0;
	for (int i = 0; i < size; i++) {
		if (maxValue < arr[i]) {
			maxValue = arr[i];
			maxIdx = i;
		}
	}
	return maxIdx;
}

double getAverage(int size)
{
	double average = 0.0;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	average = (double)sum / size;

	return average;
}

void getArr(int size)
{
	for (int i = 0; i < size; i++) {
		printf("idx = %d number: ", i);
		scanf_s("%d", &arr[i]);
	}
}

void printResult(int idx, double average)
{
	printf("max idx = %d, max number:arr[%d] = %d\n", idx, idx, arr[idx]);
	printf("average = %f\n", average);
}