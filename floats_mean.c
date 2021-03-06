//Ava N.
//First, create a .txt file with several floats, each on its own line. Then, write a program that reads values from this file, then calculates the mean and standard deviation of all the numbers it reads arr

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <math.h>

#define MAXSIZE 10 //source: http://www.sanfoundry.com/c-program-mean-variance-standard-deviation/

int main(){
	FILE *arrFile = fopen("floats.txt", "r");
	char arr[100];
	float average, variance, std_deviation, sqr_num, sum = 0, sum1 = 0;
	float a;
	fgets(arr, sizeof(arr), arrFile);
	int i;
	float x[MAXSIZE]; //from same source as #define MAXSIZE 10
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
	std_deviation = sqrt(variance); //this section of code is from the same source as #define MAXSIZE 10
	printf("Average/Mean: %.2f\n", average);
	//printf("Variance of numbers in array: %.2f\n", variance);
	printf("Standard Deviation: %.2f\n", std_deviation);

	fclose(arrFile);
	return 0;
}
