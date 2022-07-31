#include<iostream>
using namespace std;


int main()
{

int x;
int *p1=&x;
const int *p2=&x;
int *const p3=&x;
const int * const p4=&x;
*p1=10;

cout<<" "<<*p1<<" "<<*p2<<" "<<p3<<" "<<p4;


    return 0;
};