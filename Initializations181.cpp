#include "header181.h"
using namespace std;

void initialization(double array_int_time[], double array_int_data[], int array_size,double** matrix_int_time, double** matrix_int_data, int matrix_size){
	for(int i = 0; i < matrix_size; i++)
		for(int j = 0; j < matrix_size; j++){
			matrix_int_time[i][j] = rand() % 255;
			matrix_int_data[i][j] = rand() % 255; 
		}
	for(int i = 0; i < array_size; i++) 
		array_int_time[i] = i + i*rand() % 255;
	for(int i = 0; i < array_size; i++) 
		array_int_data[i] = i-i^2*rand() % 255;
}
