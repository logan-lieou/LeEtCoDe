#include <stdio.h>

void quicksort(int *A, int len);

int main() 
{
	// declare vars
	int a[] = {4, 65, 2, 31, 0, 99, 1, 2, 4};
	int n = sizeof(a)/sizeof(a[0]);
	int i;

	// iterate first
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	// newline
	printf("\n");

	quicksort(a, n);

	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}

void quicksort(int *A, int len)
{
	if (len < 2) return;

	int piviot = A[len / 2];

	int i, j;

	for (i = 0; j = len - 1; i++, j--) {
		while(A[i] < piviot) i++;
		while(A[j] > piviot) j--;

		if (i >= j) break;

		// swap
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}

	quicksort(A, i);
	quicksort(A + i, len - i);
}
