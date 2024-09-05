#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int score[5];
    public:
    void input(int a,int b,int c,int d,int e)
    {
        score[0]=a;
        score[1]=b;
        score[2]=c;
        score[3]=d;
        score[4]=e;
    }
    int sum()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=score[i];
        }
        return sum;
    }
};

int main()
{
    int n;
    cout<<"enter no. of students: ";
    cin>>n;
    student student[n];
    for(int i=0;i<n;i++)
    {
        int a,b,c,d,e;
        cout<<"enter marks of students "<<i+1<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
        student[i].input(a,b,c,d,e);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(student[0].sum()>student[i].sum())
        {
            count++;
        }
    }
    cout<<endl<<"no. of student having score greater than anna are "<<count<<endl;
    return 0;
}