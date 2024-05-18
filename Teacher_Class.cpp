#include<iostream>
using namespace std;
class Teacher
{
private:
    string ID;
    string Name;
    float Salary;
public:
   void setValue(string id, string name,float salary)
    {
        ID = id;
        Name = name;
        Salary = salary;
    }
    string getId()
    {
        return ID;
    }
    string getName()
    {
        return Name;
    }
    float getSalary()
    {
        return Salary;
    }
    void displayInfo()
    {
        cout<<"Teacher's ID : "<< ID <<endl;
        cout<<"Teacher's Name : " <<Name <<endl;
        cout<<"Teacher's Salary : "<< Salary <<endl;
    }
    void yearlySalary()
    {
       float yearly_Salary = Salary*12;
       cout<<" Yearly Salary : "<<yearly_Salary<<endl;
    }

};
int main ()
{
    Teacher T1;
    T1.setValue("24-56126-1","Madhobi",2450.78);
    T1.displayInfo();
    T1.yearlySalary();



}
