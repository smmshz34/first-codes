#include <stdio.h>
void readnum(float* num,int n) {
	for (int i = 0; i < n; i++)
	{
		printf("Enter number: ");
		scanf_s("%f", &num[i]);
	}
}
float compare(float* num,int n) {
	float* max = NULL;
	max = &num[0];
	for (int i = 0; i < n; i++)
	{
		if (*max>num[i])
		{
			*max = num[i];
		}
	}
	return *max;
}
int main() {
	int n;
	float numbers[20], average = 0;
	printf("enter number of numbers: ");
	scanf_s("%d", &n);
	readnum(&numbers, n);
	printf("%.2f", compare(&numbers, n));
}
