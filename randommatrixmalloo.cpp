#include <iostream>
int** ArrayGenerator(int x, int y)
{
  int** ptr = (int**)malloc(x*sizeof(int*));
  for(int i = 0;i < x ; i++)
{  ptr[i]=(int*)malloc(y*sizeof(int));}
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
  free(arr[i]);
}
  free(arr);

}
int main ( int argc, char* argv[])
{  if(argc<3)
 { std::cout << "Սխալ" << std::endl;
   return 1;
}
  int x = 0;
  int y = 0 ;
  for(int i =0;argv[1][i] !='\0';i++ )
{  x = x*10 + ( argv[1][i] -'0') ;}
  for(int i =0;argv[2][i] !='\0';i++ )
 { y = y*10 + ( argv[2][i] -'0') ;}
  int**arr = ArrayGenerator(x , y) ;
  createArray( x , y , arr) ;
  printArray( x , y , arr) ;
  deleteArray(x , arr);
  return 0 ;
}
