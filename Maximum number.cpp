#include<iostream>
using namespace std;
int main()
{
    int n,i,a,b,c;
    cout<<"Enter the case number:"<<endl;
    cin>>n;
    cout<<"Enter the case elements:"<<endl;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b>>c;

        if(a>=b&&a>=c)
        {
            cout<<"Case "<<i<<":"<<a<<endl;
        }
        else if(b>=a&&b>=c)
        {
            cout<<"Case "<<i<<":"<<b<<endl;
        }
        else if(c>=a&&c>=b)
        {
            cout<<"Case "<<i<<":"<<c<<endl;
        }
    }
}
