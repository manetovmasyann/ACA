#include <iostream>

void* operator new(std::size_t size)
{
    std::cout << "Allocating " << size << " bytes" << std::endl;
    void* p = malloc(size); 
    return p;
}

void operator delete(void* p) noexcept
{
    std::cout << "Memory freed" << std::endl;
    free(p); 
}

int* ArrayGenerator(int size)
{
    int* arr = new int[size];
    return arr;
}

void CreateArray(int size, int* arr)
{
    for (int i = 0; i < size; i++)
    {
          int srand(time(0));
	 for (int i = 0 ; i < size ; i++)
         arr[i] = 1 +(rand()%1000);
    }
}

void PrintArray(int size, int* arr)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


int main()
{
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    int* arr = ArrayGenerator(size);
    CreateArray(size, arr);
    PrintArray(size, arr);
   

    delete[] arr;
    return 0;
}
