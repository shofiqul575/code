#include<iostream>
using namespace std;
int main()
{
    int n,i,marks[1000];
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    cout<<"Enter the marks:"<<endl;
    for(i=1; i<=n; i++)
    {
        cin>>marks[i];
    }
    for(i=1; i<=n; i++)
    {
        if(marks[i]>=90 && marks[i]<=100)
        {
            cout<<"Student:"<<i<<" A+"<<endl;
        }
        else if(marks[i]>=80 && marks[i]<90)
        {
            cout<<"Student:"<<i<<" A"<<endl;
        }
        else if(marks[i]>=70 && marks[i]<80)
        {
            cout<<"Student:"<<i<<" A-"<<endl;
        }
        else if(marks[i]>=60 && marks[i]<70)
        {
            cout<<"Student:"<<i<<" B+"<<endl;
        }
        else if(marks[i]>=50 && marks[i]<60)
        {
            cout<<"Student:"<<i<<" B"<<endl;
        }
        else if(marks[i]>=40 && marks[i]<50)
        {
            cout<<"Student:"<<i<<" C"<<endl;
        }
        else if(marks[i]>=35 && marks[i]<40)
        {
            cout<<"Student:"<<i<<" D"<<endl;
        }
        else if(marks[i]<35 && marks[i]>=0)
        {
            cout<<"Student:"<<i<<" F"<<endl;
        }
    }
}
