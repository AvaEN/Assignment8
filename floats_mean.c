//Ava N.
//First, create a .txt file with several floats, each on its own line. Then, write a program that reads values from this file, then calculates the mean and standard deviation of all the numbers it reads arr

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <math.h>

#define MAXSIZE 10

int main(){
	FILE *arrFile = fopen("floats.txt", "r");
	//float temp;
	char arr[100];
	//float float_arr[100];
	float average, variance, std_deviation, sqr_num, sum = 0, sum1 = 0;
	float a;
	fgets(arr, sizeof(arr), arrFile);
	int i;
	//float mean; //mean of the floats
	//float sum = 0;
	float x[MAXSIZE];
	printf("Numbers in the array: \n");

	for(i = 0; i<5; i++) {
		a = atof(arr);
		//a = float_arr[i];
		//sum += a;
		printf("%lf\n", a);
		x[i]=a;
		fgets(arr, 100, arrFile);
	}

	for (i = 0; i < 5; i++){
		sum = sum + x[i];
	}

	printf("Sum of numbers in array: %f\n", sum);
	average = sum / (float)5;

//Compute  variance  and standard deviation  
	for (i = 0; i < 5; i++){
		sqr_num = average - x[i];
		sum1 = sum1 + (sqr_num * sqr_num);
	}

	variance = sum1 / 5;
	std_deviation = sqrt(variance);
	printf("Average/Mean: %.2f\n", average);
	//printf("Variance of numbers in array: %.2f\n", variance);
	printf("Standard Deviation: %.2f\n", std_deviation);
	//mean = sum/5;
	fclose(arrFile);
	//printf("Here is the mean: %d \n", mean);

	return 0;
}
