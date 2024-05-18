#include<iostream>
using namespace std;
class Account
{
private:
    string Name;
    int AccountNo;
    float Balance;
    string AccountType;
public:
    Account(string name, int ac, float bal, string type)
    {
        Name = name;
        AccountNo = ac;
        Balance = bal;
        AccountType = type;
    }
    Account()
    {
        Name = "";
        AccountNo = 0;
        Balance = 0.0;
        AccountType = "";
    }
    ~Account()
    {
        cout<<"Account Closed"<<endl;
    }

    void deposit(int amount)
    {
       Balance = Balance + amount;
    }
    void Withdraw(int amount)
    {
        if(amount<=Balance)
        {
            Balance= Balance - amount;
        }
    }
    void Transfer(int amount, Account * x)
    {
        Balance = Balance - amount;
        x->Balance = x->Balance+amount;
    }
    void ShowAccountDetails()
    {
        cout<<endl;
        cout<<"Info: "<<endl;
        cout<<"Account Name: "<<Name<<endl;
        cout<<"Account Number: "<<AccountNo<<endl;
        cout<<"Balance: "<<Balance<<endl;
        cout<<"Account Type : "<<AccountType<<endl;
    }
};
int main()
{
    Account A1("Broti",24, 2000.00,"Savings");
    A1.deposit(500);
    A1.ShowAccountDetails();
    A1.Withdraw(200);
    A1.ShowAccountDetails();
    Account A2("Aroti",22, 1000.00,"Savings");
    A1.Transfer(400, &A2);
    A1.ShowAccountDetails();
    A2.ShowAccountDetails();



    return 0;
}

