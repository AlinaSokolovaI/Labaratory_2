#include "header_functions181.h"

void sum_array(double array_int_time[], double array_int_data[], int array_size){
	for(int i = 0; i < array_size; i++) 
		array_int_data[i] += array_int_time[i];
}
void output_array(double array_int_data[], int array_size){
	for(int i = 0; i < array_size; i++) 
		printf("data[%d] = %g \n",i, array_int_data[i]);
}

