#include <iostream>
using namespace std;
void sum_array(double* array_int_time, double* array_int_data, int array_size1, int array_size2);//сумма векторов
void output_array(double* array_int_data, int array_size);//вывод вектора
void difference_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2);//разность веторов
void sum_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2, int start_sum);//сумма векторов начиная с эелемента
//поэлементное перемножение двух векторов
void multiplication_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2);
void sum_matrix(double** matrix_int_time, double** matrix_int_data, int matrix_size);//сумма матриц
void output_matrix(double** matrix_int_data, int matrix_size);//вывод матриц
void difference_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);