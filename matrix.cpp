#include <iostream>
int** Array1Generator(int size)
{
	int** ptr1 = new int*[size];
	for (int i = 0; i < size; i++)
		ptr1[i] = new int[size];
	return ptr1;

}
int** Array2Generator(int size)
{
	int** ptr2 = new int*[size];
	for (int i = 0; i < size; i++)
		ptr2[i] = new int[size];
	return ptr2;

}
void createArray1 (int size, int** arr1)
{
	for (int i = 0 ; i < size ; i++)
		for (int j = 0 ; j < size ; j++)
		{
			arr1[i][j] = i * j + 2;
		}
}
void createArray2 (int size, int** arr2)
{
	for (int i = 0 ; i < size ; i++)
		for (int j = 0 ; j < size ; j++)
		{
			arr2[i][j] = i * j;
		}
}
void printArray (int size, int** arr1, int**arr2)
{
	int S1 = 0;
	int S2 = 0;

	for (int i = 0 ; i < size ; i++)
		for (int j = 0 ; j < size ; j++)
			S1 += arr1[i][j];

	for (int i = 0 ; i < size ; i++)
		for (int j = 0 ; j < size ; j++)
			S2 += arr2[i][j];

	if (S1 > S2)
	{
		std::cout << "S1 = " << S1 << std::endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				std::cout << arr1[i][j] << " ";
			std::cout << std::endl;
		}
	}
	else if (S1 < S2)
	{
		std::cout << "S2 = " << S2 << std::endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				std::cout << arr2[i][j] << " ";
			std::cout << std::endl;
		}
	}
	else
	{
		std::cout << "Sums are equal!" << std::endl;
	}

	std::cout << std::endl;
}

int main()
{
	int size;
	std::cin >> size;

	int** arr1 = Array1Generator(size);
	int** arr2 = Array2Generator(size);

	createArray1(size, arr1);
	createArray2(size, arr2);
	printArray(size, arr1, arr2);

	for (int i = 0; i < size; i++)
		delete[] arr1[i];
	delete[] arr1;

	for (int i = 0; i < size; i++)
		delete[] arr2[i];
	delete[] arr2;

	return 0;
}
