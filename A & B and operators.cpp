#include<iostream>
using namespace std;
int main()
{
    int n,i,A,B;
    char operators;
    cout<<"Enter number of case:"<<endl;
    cin>>n;
    cout<<"Enter the numbers with operator:"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>A>>B>>operators;
        if(operators=='+' )
        {
            int sum;
            sum=A+B;
            cout<<"Summation is "<<i<<":"<<sum<<endl;
        }
        else if(operators=='-')
        {
            int minus;
            minus=A-B;
            cout<<"Subtraction is "<<i<<":"<<minus<<endl;
        }
        else if(operators=='*')
        {
            int mul;
            mul=A*B;
            cout<<"Multiplication is "<<i<<":"<<mul<<endl;
        }
        else if(operators=='/')
        {
            int div;
            div=A/B;
            cout<<"Division is "<<i<<":"<<div<<endl;
        }
        else if(operators=='%')
        {
            int rem;
            rem=A%B;
            cout<<"Remainder is "<<i<<":"<<rem<<endl;
        }

    }
}
