#include<iostream>
using namespace std;
int main()
{
    int c,students,marks,i,j,total,average;
    cout<<"Enter the case number:"<<endl;
    cin>>c;

    for(i=1; i<=c; i++)
    {
        cout<<"Enter the number of students:"<<endl;
        cin>>students;
        cout<<"Enter the marks:"<<endl;
        total=0;
        for(j=0; j<students; j++)
        {
            cin>>marks;
            total=total+marks;
        }
        average=total/students;
        cout<<"Case: "<<i<<" Average: "<<average<<endl;
    }
}
