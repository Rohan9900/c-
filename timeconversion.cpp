#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	int seconds;
	
    
    cin>>seconds;
    float hr=seconds/3600;
	float min=(seconds%3600)/60;
	float sec=(seconds%3600)%60;
	
    cout<<"hours: "<<hr<<" Minutes: "<<min<<" Seconds: "<<sec<<" "<<seconds++ + ++seconds;
    



    
    return 0;
};