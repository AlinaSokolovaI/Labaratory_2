#include "pch.h"
#include "../MatPart181_2/header_functions181.h"
// ñëîæåíèå âåêòîðîâ
TEST(TestArray, Test_sum_array_1) {		// ðàçìåð âåêòîðà ¹1 < ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[3]{ 1, 0, -4 };
	double* array2 = new double[4]{ 2, -5, 17, 3 };
	double* result = new double[3]{ 3, -5, 13 };
	sum_array(array1, array2, 3, 4);

	for(int i=0;i< 3;i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_2) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[4]{ 13, -7, -4,  6 };
	double* array2 = new double[3]{ 0, 5, 17 };
	double* result = new double[4]{ 13, -2, 13, 6 };
	sum_array(array1, array2, 4, 3);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_3) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2
	double* array1 = new double[5]{ 15, 7, -4,  6 , 1 };
	double* array2 = new double[5]{ 0, 0, 17, 4, 0 };
	double* result = new double[5]{ 15, 7, 13, 10, 1 };
	sum_array(array1, array2, 5, 5);

	for (int i = 0; i < 5; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}

// äîáàâëåíèå ê âåêòîðó ¹1 ýëåìåíòîâ âåêòîðà ¹2 íà÷èíàÿ ñ n-ãî ýëåìåíòà
TEST(TestArray, Test_sum_array_4_1) {		// ðàçìåð âåêòîðà ¹1 < ðàçìåðà âåêòîðà ¹2 (äîáàâëåíèå ñ 1 ýëåìåíòà)
	double* array1 = new double[3]{ 1, 0, -4 };
	double* array2 = new double[4]{ 2, -5, 17, 3 };
	double* result = new double[3]{ 3, -5, 13 };
	sum_array(array1, array2, 3, 4, 0);

	for (int i = 0; i < 3; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_4_2) {		// ðàçìåð âåêòîðà ¹1 < ðàçìåðà âåêòîðà ¹2 (äîáàâëåíèå ñ ïîñëåäíåãî ýëåìåíòà)
	double* array1 = new double[3]{ 1, 0, -4 };
	double* array2 = new double[4]{ 2, -5, 17, 3 };
	double* result = new double[3]{ 1, 0, -2 };
	sum_array(array1, array2, 3, 4, 2);

	for (int i = 0; i < 3; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_5_1) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2 (äîáàâëåíèå ñ 1 ýëåìåíòà)
	double* array1 = new double[6]{ 13, -7, -4, 6, 5, 4 };
	double* array2 = new double[2]{ 0, 5 };
	double* result = new double[6]{ 13, -2, -4, 6, 5, 4 };
	sum_array(array1, array2, 6, 2, 0);

	for (int i = 0; i < 6; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_5_2) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2 (äîáàâëåíèå ñ 3 ýëåìåíòà)
	double* array1 = new double[6]{ 13, -7, -4, 6, 5, 4};
	double* array2 = new double[2]{ 0, 5};
	double* result = new double[6]{ 13, -7, -4, 11, 5, 4};
	sum_array(array1, array2, 6,2, 2);

	for (int i = 0; i < 6; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_5_3) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2 (äîáàâëåíèå ñ ïîñëåäíåãî ýëåìåíòà)
	double* array1 = new double[6]{ 13, -7, -4, 6, 7, 4 };
	double* array2 = new double[2]{ 1, 5 };
	double* result = new double[6]{ 13, -7, -4, 6, 7, 5 };
	sum_array(array1, array2, 6, 2, 5);

	for (int i = 0; i < 6; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_6_1) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2 (äîáàâëåíèå ñ 1 ýëåìåíòà)
	double* array1 = new double[4]{ 13, -7, -4, 0 };
	double* array2 = new double[4]{ 1, 5, 1, -1};
	double* result = new double[4]{ 14, -2, -3, -1 };
	sum_array(array1, array2, 4, 4, 0);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_6_2) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2 (äîáàâëåíèå ñî 2 ýëåìåíòà)
	double* array1 = new double[4]{ 13, -7, -4, 0 };
	double* array2 = new double[4]{ 1, 5, 1, -1 };
	double* result = new double[4]{ 13, -6, 1, 1 };
	sum_array(array1, array2, 4, 4, 1);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_sum_array_6_3) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2 (äîáàâëåíèå ñ ïîñëåäíåãî ýëåìåíòà)
	double* array1 = new double[4]{ 13, -7, -4, 0 };
	double* array2 = new double[4]{ 1, 5, 1, -1 };
	double* result = new double[4]{ 13, -7, -4, 1 };
	sum_array(array1, array2, 4, 4, 3);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}

// ðàçíîñòü âåêòîðîâ
TEST(TestArray, Test_difference_array_1) {		// ðàçìåð âåêòîðà ¹1 < ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[3]{ 1, 0, -4 };
	double* array2 = new double[4]{ 2, -5, 17, 3 };
	double* result = new double[3]{ -1, 5, -21 };
	difference_array(array1, array2, 3, 4);

	for (int i = 0; i < 3; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_difference_array_2) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[4]{ 13, -7, -4,  6 };
	double* array2 = new double[3]{ 0, 5, 17 };
	double* result = new double[4]{ 13, -12, -21, 6 };
	difference_array(array1, array2, 4, 3);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_difference_array_3) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2
	double* array1 = new double[5]{ 15, 7, -4,  6 , 1 };
	double* array2 = new double[5]{ 0, 0, 17, 4, 0 };
	double* result = new double[5]{ 15, 7, -21, 2, 1 };
	difference_array(array1, array2, 5, 5);

	for (int i = 0; i < 5; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}

//ïîýëåìåíòíîå ïåðåìíîæåíèå âåêòîðîâ
TEST(TestArray, Test_multiplication_array_1) {		// ðàçìåð âåêòîðà ¹1 < ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[3]{ 1, 0, -4 };
	double* array2 = new double[4]{ 2, -5, 17, 3 };
	double* result = new double[3]{ 2, 0, -68 };
	multiplication_array(array1, array2, 3, 4);

	for (int i = 0; i < 3; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_multiplication_array_2) {		// ðàçìåð âåêòîðà ¹1 > ðàçìåðà âåêòîðà ¹2
	double* array1 = new double[4]{ 13, -7, -4,  6 };
	double* array2 = new double[3]{ 0, 5, 17 };
	double* result = new double[4]{ 0, -35, -68, 6 };
	multiplication_array(array1, array2, 4, 3);

	for (int i = 0; i < 4; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}
TEST(TestArray, Test_multiplication_array_3) {		// ðàçìåð âåêòîðà ¹1 = ðàçìåðó âåêòîðà ¹2
	double* array1 = new double[5]{ 15, 7, 4,  6 , 1 };
	double* array2 = new double[5]{ 0, 0, 17, 4, 0 };
	double* result = new double[5]{ 0, 0, 68, 24, 0 };
	multiplication_array(array1, array2, 5, 5);

	for (int i = 0; i < 5; i++)
		EXPECT_EQ(result[i], array1[i]);

	delete[] array1;
	delete[] array2;
	delete[] result;
}

// ñëîæåíèå ìàòðèö
TEST(TestMatrix, Test_sum_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = -5;
	matrix1[1][0] = 0;
	matrix1[1][1] = 17;

	matrix2[0][0] = 1;
	matrix2[0][1] = -7;
	matrix2[1][0] = 0;
	matrix2[1][1] = 17;

	result[0][0] = 2;
	result[0][1] = -12;
	result[1][0] = 0;
	result[1][1] = 34;

	sum_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i){
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}

// ðàçíîñòü ìàòðèö
TEST(TestMatrix, Test_difference_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = -5;
	matrix1[1][0] = 0;
	matrix1[1][1] = 17;

	matrix2[0][0] = 1;
	matrix2[0][1] = -7;
	matrix2[1][0] = 0;
	matrix2[1][1] = 17;

	result[0][0] = 0;
	result[0][1] = 2;
	result[1][0] = 0;
	result[1][1] = 0;

	difference_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}
