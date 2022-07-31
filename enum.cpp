#include<iostream>
using namespace std;

template<class num>
num add(num val1,num val2,int val3=0){
	return val1+val2+val3;
}

int main()
{

cout<<add(1.3,2.6);


    return 0;
};