#include<iostream>
using namespace std;
int main()
{
    int n,i,m,j,num;
    cout<<"Enter the number of case"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter the case number:"<<endl;
        cin>>num;
        cout<<"Case no:"<<i<<endl;

        for(j=1; j<=10; j++)
        {
            m=num*j;
            cout<<num<<" * "<<j<<"  =   "<<m<<endl;
        }
    }
}
