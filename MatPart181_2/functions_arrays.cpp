#include "header_functions181.h"
///Прибавление к элементам первого вектора, элементов второго вектора
///
///Если указаны 4 первых параметра, то к элементам первого по порядку будут 
///добавлены элементы второго верктора
void sum_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2) {

	if (array_size1 >= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] += array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
		array_sum1[i] += array_sum2[i];
}

///Прибавление к элементам первого вектора, элементов второго вектора
///
///Если указать 5 параметр, то он показывает,
///с какого элемента начинать прибавлять значения
void sum_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2, int start_sum) {
	//если указаны 4 первых параметра, то к элементам первого по порядку будут 
	//добавлены элементы второго верктора, а если указать 5 параметр, то он показывает,
	//с какого элемента начинать прибавлять значения (начиная с 0)
	if (array_size1 >= array_size2)
		for (int i = start_sum; i < array_size2 + start_sum && i < array_size1; i++)
			array_sum1[i] += array_sum2[i - start_sum];
	else for (int i = start_sum; i < array_size1; i++)
		array_sum1[i] += array_sum2[i - start_sum];
}

///Вывод вектора на экран
void output_array(double* array_numb, int array_size) {
	for (int i = 0; i < array_size; i++) {
		if (i % 10 == 0) printf("\n");
		printf("%g  ", array_numb[i]);
	}
	printf("\n");
}
///Разность двух векторов
void difference_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2) {
	if (array_size1 >= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] -= array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
		array_sum1[i] -= array_sum2[i];
}
///Поэлементное перемножение двух векторов
void multiplication_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2) {
	if (array_size1 >= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] *= array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
		array_sum1[i] *= array_sum2[i];
}
