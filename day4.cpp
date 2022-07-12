#include<iostream>

using namespace std;






int main(){


   
    int var=4;
    int *ptr=&var;
    int **ptr2=NULL;
    
    void *ptr3;
    ptr3=&var;
    
    cout<<var<<" "<<(int *)&ptr3;
    
    

    
    return 0;
}