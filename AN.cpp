#include<iostream>
using namespace std;

int main()
{
    long marks_long;
    
    cin>>marks_long;
    
    cout<<"The value is :: "<<marks_long<<" and the memory size is : "<<sizeof(marks_long)<<endl;


     int marks;
    cin>>marks;
    cout<<"The value is :: "<<marks<<" and the memory size is : "<<sizeof(marks)<<endl;

    short marks_short;
    cin>>marks_short;
    cout<<"The value is :: "<<marks_short<<" and the memory size is : "<<sizeof(marks_short)<<endl;

    
    double marks_double;
    cin>>marks_double;
    cout<<"The value is :: "<<marks_double<<" and the memory size is : "<<sizeof(marks_double)<<endl;

    float marks_float;
    cin>>marks_float;
    cout<<"The value is :: "<<marks_float<<" and the memory size is : "<<sizeof(marks_float)<<endl;
    return 0;
};