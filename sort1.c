#include <stdio.h>

int i;

int main() {

	int array[8] = { 5, 4, 7, 1, 2, 6, 3, 8};

	for (i = 0; i < 8; i++) {

		printf("%d ", array[i]);
	}
	
	printf("\n");

	for (i = 7; i > 0; i--) {

		int a;
		int temp;

		a=(array[i-1] > array[i]);

		if (a != 0) {
			temp = array[i - 1];
			array[i - 1] = array[i];
			array[i] = temp;		

			i = 7;
		}
	}

	for (i = 0; i < 8; i++) {

		printf("%d ", array[i]);
	}

	printf("\n");

}