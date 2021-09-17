#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int i, n;
	float H[200],sum=0,avg;
	printf("Number of student you want to calculate height : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter student number %d height[m] : ", i + 1);
			scanf("%f", &H[i]);
	}
	for (i = 0; i < n; i++)
		sum = sum + H[i];
	avg = sum / n;
	printf("\n\n%d students Height average : %.3f meters\n\n", n, avg);

}