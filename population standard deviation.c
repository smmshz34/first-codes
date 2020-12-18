#include <stdio.h>
#include <math.h>
void readnum(float* num,int n,float* average) {
	for (int i = 0; i < n; i++)
	{
		printf("Enter number: ");
		scanf_s("%f", &num[i]);
		*average += num[i];
	}
}
int main() {
	int n;
	float numbers[200], average = 0,var=0;
	printf("Enter number of elements: ");
	scanf_s("%d", &n);
	readnum(&numbers, n,&average);
	average /= n;
	for (int i = 0; i < n; i++)
	{
		var += (pow((numbers[i] - average), 2));
	}
	var=sqrt(var/n);
	printf("%.4f", var);
}
