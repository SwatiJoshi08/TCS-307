#include<iostream>
using namespace std;
class invoice
{
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;
    public:

    invoice(string partNumber,string partDescription,int quantity,double price_per_item)
    {
        this->partNumber=partNumber;
        this->partDescription=partDescription;
            if(quantity<0)
        {
            this->quantity=0;
        }
        else{
            this->quantity=quantity;
        }
        if(price_per_item<0)
        {
            this->price_per_item=0.0;
        }
        else{
            this->price_per_item=price_per_item;
        }
    }
    void setDetails(string partNumber,string partDescription,int quantity,double price_per_item)
    {
        this->partNumber=partNumber;
        this->partDescription=partDescription;
        if(quantity<0)
        {
            this->quantity=0;
        }
        else{
            this->quantity=quantity;
        }
        if(price_per_item<0)
        {
            this->price_per_item=0.0;
        }
        else{
            this->price_per_item=price_per_item;
        }
    }
    void getDetails()
    {
        cout<<partNumber<<endl<<partDescription<<endl<<quantity<<endl<<price_per_item << endl;
    }
};

int main()
{
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;
    cout<<"enter number: ";
    cin>>partNumber;
    cout<<"enter desciption: ";
    cin>>partDescription;
    cout<<"enter quantity: ";
    cin>>quantity;
    cout<<"enter price of item: ";
    cin>>price_per_item;
    invoice d1(partNumber,partDescription,quantity,price_per_item);
    d1.setDetails(partNumber,partDescription,quantity,price_per_item);
    d1.getDetails();
    return 0;
}
