#include<iostream>
using namespace std;
class Employee
{
    string Name;
    string ID;
private:
    float Salary;
public:
    int Year;

void SetEmployeeInfo(string name,string id, float sal, int year)
{
    Name=name;
    ID=id;
    Salary=sal;
    Year=year;
}

float SetBonus()
{

    float Bonus;
    if(Salary>=25000 && Year<2016)
    {
        Bonus = Salary*(30.0/100);

    }

    else if(Salary>20000 && Year<2018)
    {
        Bonus = Salary*(20.0/100);
    }
    else
    {
        Bonus = Salary*(5.0/100);
    }
   return Bonus;
}
void DisplayInfo()
    {
    cout<<Name<<endl;
    cout<<ID<<endl;
    cout<<Salary<<endl;
    cout<<Year<<endl;
    }
};
int main()
{
    Employee Broti;
    Broti.SetEmployeeInfo("Broti","24-56126-1",2440.45, 2000);
    Broti.DisplayInfo();
    float Amount;
    Amount = Broti.SetBonus();
    cout<<Amount<<endl;


}
