#include "header_functions181.h"
void sum_matrix(double** matrix_int_time, double** matrix_int_data, int matrix_size){
	for(int i = 0; i < matrix_size; i++) 
		for(int j = 0; j < matrix_size; j++) 
			matrix_int_data[i][j] += matrix_int_time[i][j];
}
void output_matrix(double** matrix_int_data, int matrix_size){
	for(int i = 0; i < matrix_size; i++) {
		for(int j = 0; j < matrix_size; j++) {
			printf(" %g ", matrix_int_data[i][j]);
		}
		cout<<endl;
	}
}