//Ava N.
//Write a program sort.c that dynamically allocates an array of integers. The size of the array (the number of integers, not the byte size) should be read from the user using scanf(). You may assume that the user will input a positive integer. The elements of the array should be filled using the rand() function. After filling the array with random numbers, your program should then make a copy of the array, and sort the new array in ascending order. Then make a second copy of the original array and sort it in descending order. Finally your program should print out all three arrays. All three arrays should be allocated using malloc() library function.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

	int array_size; //user defined array size for integers 
	int max_int;
	int *input_arr; //input array for random numbers
	int *asc_arr; //ascending array
	int *des_arr; //descending array
	int i;
	int n;
	int temp;

	printf("Input a positive integer for the size of the array:\n");
	scanf("%d", &array_size);
	printf("Input maximum size of each integer in the array:\n");
	scanf("%d", &max_int);

	input_arr = malloc(array_size * sizeof(int));

	printf("Random numbers in the array:\n");

	for (i = 0; i < array_size; i++) {
		input_arr[i] = rand() % max_int;  // Random number from 0 - 99
		printf("%d\n",input_arr[i]); // Print random numbers in the array
	}

	asc_arr = input_arr;
	des_arr = input_arr;

//ascending order
	for (i=0; i!=array_size-1; i++){
		for (n = i + 1; n != array_size; n++){		
			if (asc_arr[n] > asc_arr[i]){
				temp = asc_arr[i];
				asc_arr[i] = asc_arr[n];
				asc_arr[n] = temp;
			}
		}
	}

	printf("\nArray is sorted in ascending order:\n");
	for (i = 0; i < array_size; i++) {

		printf("%d\n",asc_arr[i]);  // diagnostic for ascending
	}

//descending order
	for (i=0; i!=array_size-1; i++){
		for (n = i+1; n != array_size; n++){		
			if (des_arr[n] < des_arr[i]){
				temp = des_arr[i];
				des_arr[i] = des_arr[n];
				des_arr[n] = temp;
			}
		}
	}
	printf("\nArray is sorted in descending order:\n");
	for (i = 0; i < array_size; i++) {

		printf("%d\n",des_arr[i]);
	}
	return 0;
}
