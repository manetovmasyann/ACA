#include <iostream>
#include <cstring>
class Car {
   std::string m_name ;
   std::string m_color ; 
   int m_year ;
   int m_horsepower;
   double m_fuelLevel;
   double m_mileage; 
public:
Car (const std::string& name, const std::string& color ,int year , int horsepower,double fuelLevel,double mileage)
{
  m_name = name;
  m_color = color ;
  m_year =year ;
  m_horsepower = horsepower ;
  m_fuelLevel = fuelLevel ;
  m_mileage  = mileage ;
}
public:
void print()
{
  std::cout<<"Name = "<< m_name << std::endl;
  std::cout<<"Color = "<< m_color << std::endl;
  std::cout<<"Year = "<< m_year << std::endl;
  std::cout<<"Horsepower = "<< m_horsepower << std::endl;
  std::cout<<"FuelLevel = "<< m_fuelLevel << std::endl;
  std::cout<< "Mileage = " << m_mileage << std::endl ;  
}
public:
void refuel(double liters) {
        m_fuelLevel += liters;
        std::cout << m_name << " refueled with " << liters << " liters. Current fuel: " << m_fuelLevel << std::endl;
    } 
public:
int getage (int currentyear){
     int  getage = currentyear - m_year ;
      return getage ;
     std::cout<<"Car is" << getage << "years old"<< std::endl ;

}
public:
void stop(){
   std::cout<< " The car is stopped" << std::endl ;
}
public:
void honk(){
    std::cout << m_name << "Beep beep!"<< std::endl;
}

void drive(double distance){
        m_mileage += distance;   
        m_fuelLevel -= distance * 0.1;  
        std::cout << m_name << " drove " << distance << " km. Total mileage: " << m_mileage  << " km. Fuel left: " << m_fuelLevel << std::endl;
    }
};
int main()
{
  Car BMW("BMW M3","grey" , 2022, 483, 30, 3000 );
  BMW.print();
  BMW.refuel(5);
  BMW.getage(2025);
  BMW.stop();
  BMW.honk();
  BMW.drive(200.7);
  return 0;
}
