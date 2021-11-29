#include "header181.h"
#include "MatPart181_2\header_functions181.h"
/*
#include <boost/program_options.hpp>

using namespace boost::program_options;

void on_array_size(int number)
{
	std::cout << "On array_size: " << number << '\n';
}
void on_matrix_size(int number)
{
	std::cout << "On matrix_size: " << number << '\n';
}
*/
void main(int argc, const char* argv[]){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 17;//стандартные значени€ размеров 
	int array_size = default_size;
	int matrix_size = 7;
	/*
	try//работа через командную строку
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("array_size", value<int>()->notifier(on_array_size), "Array_size")//размер векторов
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");//размер матриц

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("array_size")) {
			std::cout << "Array_size: " << vm["array_size"].as<int>() << '\n';
			array_size = vm["array_size"].as<int>();//записываем в наш размер значение из командной строки
		}
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();//записываем в наш размер значение из командной строки
		}
		
	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}
	*/
	//сама работа с векторами и матрицами
	double *array_int_time = new double[array_size];
	double *array_int_data = new double[array_size];
	double **matrix_int_time = new double*[matrix_size];
	double **matrix_int_data = new double*[matrix_size];
	for(int i = 0; i < matrix_size; i++) {
		matrix_int_time[i]=new double[matrix_size]; 
		matrix_int_data[i]=new double[matrix_size]; 
	}

	initialization(array_int_time, array_int_data, array_size,matrix_int_time, matrix_int_data, matrix_size);
	printf("¬ектор data: \n");
	output_array(array_int_data, array_size);
	printf("¬ектор time: \n");
	output_array(array_int_time, array_size);
	printf("ѕрибавление к элементам первого вектора, элементов второго вектора: \n");
	sum_array(array_int_data, array_int_time, array_size, array_size);
	output_array(array_int_data, array_size);
	printf("¬ычитание веторов: \n");
	difference_array(array_int_data, array_int_time, array_size, array_size);
	output_array(array_int_data, array_size);
	printf("ѕрибавление к элементам первого вектора, элементов второго вектора начина€ с элемента 5: \n");
	sum_array(array_int_data, array_int_time, array_size, array_size,5);
	output_array(array_int_data, array_size);

	printf("матрица data: \n");
	output_matrix(matrix_int_data, matrix_size);
	printf("матрица time: \n");
	output_matrix(matrix_int_time, matrix_size);
	printf("ѕрибавление к элементам первой матрицы, элементов второй матрицы: \n");
	sum_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);
	
	system("pause");
}


