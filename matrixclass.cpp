#include <iostream>
class Matrix {
 int  x ;
 int y ;
 int** data ;
public:
Matrix(int rows ,int cols)
{ x=rows;
  y=cols;
  data = new int*[x];
 for(int i = 0; i < x ;i++)
 { 
    data[i]=new int[y];
 for(int j = 0 ; j < y ;j++)
{
     data[i][j] =  1;
}
  }
   }
void print()
{
  for(int i = 0;i < x ;i++)
 { for(int j = 0; j < y ; j++)
  {
    std::cout<<data[i][j];
    }
  std::cout<<std::endl;
  }
}
 ~Matrix()
{
  for(int i= 0 ; i < x ;i++)
  delete[] data[i];
  delete[] data;
 }
};
int main()
{  Matrix m(3,4);
   m.print();
   return 0;
}
