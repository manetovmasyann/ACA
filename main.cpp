#include <iostream>

int** ArrayGenerator(int size)
{
	int** ptr = new int*[size];
	for (int i = 0; i < size; i++)
		ptr[i] = new int[size];
	return ptr;
}

void createArray (int size, int** arr)
{
	for (int i = 0 ; i < size ; i++)
		for (int j = 0 ; j < size ; j++)
			arr[i][j] = i * j + 2;
}

void printArray (int size, int** arr)
{
	for(int i =0; i < size ; i++)
	{
		for(int j =0; j < size ; j++)
			std::cout<<arr[i][j]<<" ";
		std::cout<<std::endl;
	}
}


void deleteArray(int size, int** arr)
{
	for (int i = 0; i < size; i++)
		delete[] arr[i]; 
	        delete[] arr;
}

int main()
{
	int size;
	std::cin >> size;

	int** arr = ArrayGenerator(size);
	createArray(size, arr);
	printArray(size, arr);

	deleteArray(size, arr);
	return 0;
}

