//q7
#include<iostream>
using namespace std;
class Bank
{
    private:
    string name;
    string accno;
    string type;
    float balance;
    public: 
    Bank(string a,string b,string c,float d)
    {
        name=a;
        accno=b;
        type=c;
        balance=d;
    }
    void deposit(float x)
    {
        balance=balance+x;
        cout<<"Your current balance is: "<<balance<<endl;
    }
    void withdraw(int x)
    {
        if(x>balance)
        {
            cout<<"Insufficeint balance";
        }
        else
        {
            balance=balance-x;
            cout<<"Your current balance is: "<<balance<<endl;
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    string n,acc,t;float bal;
    int p,q;
    cout<<"Enter the name: ";
    cin>>n;
    cout<<"Enter account no.";
    cin>>acc;
    cout<<"Enter type of account: ";
    cin>>t;
    cout<<"Enter the balance of the account: ";
    cin>>bal;
    Bank ob(n,acc,t,bal);
    cout<<"Enter 1 to deposit an amount"<<endl;
    cout<<"Enter 2 to withdraw an amount"<<endl;
    cout<<"Enter 3 to display name and balance"<<endl;
    int ch;
    while(1)
    {
        cout<<"enter your choice : ";
        cin>>ch;
    switch(ch)
    {
        case 1: cout<<"enter the amount to be deposited: ";
        cin>>p;
        ob.deposit(p);
        break;
        case 2: cout<<"enter the amount to withdraw: ";
        cin>>q;
        ob.withdraw(q);
        break;
        case 3: ob.display();
        break;
        default: return 0;
    }
    }
    return 0;
}