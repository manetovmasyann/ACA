#include <iostream>
void* operator new(size_t size) {
    std::cout << " Allocating " << size << " bytes"; 
    void* p = std::malloc(size); 
     return p; 
}

void operator delete(void* p)  {
    std::cout << "Freeing memory"; 
   
 
}

void* operator new[](size_t size) {
    std::cout << "Allocating array of " << size << " bytes";
    void* p = std::malloc(size);
    return p;
}

void operator delete[](void* p) {
    std::cout << " Freeing array memory"; 
   
}

int main() {
    int* x = new int(42);      
    delete x;                   
    double* arr = new double[5]; 
    delete[] arr;               
}


