#include <iostream>
int** ArrayGenerator(int x, int y)
{
  int**ptr = new int*[x];
  for(int i = 0;i < x ; i++)
  ptr[i]=new int[y];
  return ptr ;
}
void createArray (int x, int y ,int**arr)
{ int srand(time(0));
 for (int i = 0; i < x ; i++ )
 for(int j = 0 ;j < y ; j++)
 {
   arr[i][j] = 2 + (rand()%1000);
}
}
void printArray(int x , int y, int**arr)
{
   for (int i = 0; i < x ; i++ )
  { for(int j = 0 ;j < y ; j++)
   {
std::cout<<arr[i][j]<<" ";
}
std::cout<<std::endl;
}
}
void deleteArray(int x, int** arr)
{
  for(int i =0;i < x; i++)
{
  delete[] arr[i];
}
  delete[] arr;

}
int main()
{
  int x;
  int y;
  std::cout<<"Մուտքագրեք չափերը"<<std::endl;
  std::cin>>x>>y;
  int**arr = ArrayGenerator(x,y);
  createArray(x,y,arr);
  printArray(x,y,arr);
  return 0;
}
