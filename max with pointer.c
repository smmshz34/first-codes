#include <stdio.h>
void max(float mat[6][6], int*x, int*y);
int main() {
	int satr, soton;
	float matris[6][6];
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			printf("(%d,%d)=", i+1, j+1);
			scanf_s("%f", &matris[i][j]);
		}
	}
	max(matris, &satr, &soton);
	printf("\nthe max. element less than mean is a(%d,%d)= %f", satr+1, soton+1, matris[satr][soton]);
	system("pause");
}
void max(float mat[6][6], int* x, int* y) {
	float sum = 0,max=0;
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			sum += mat[i][j];
		}
	}
	float mean = (sum / 36);
	//printf("\nmean =%f\n",mean);
	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			if (mat[i][j] < mean) {
				if (mat[i][j]>max)
				{
					max = mat[i][j];
					*x = i;
					*y = j;
				}
			}
		}
	}
}