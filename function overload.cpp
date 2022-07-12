#include<iostream>

using namespace std;




void add(float *val1,float *val2,float *add){
    *add=*val1+ *val2;
    
}


void add(int *val1,int *val2,int *add){
    *add=*val1+ *val2;
    
}

void add(double *val1,double *val2,double *add){
    *add=*val1+ *val2;
    
}




int main(){


        
    int val1,val2,added;
    float fval1,fval2,fadd;
    double dval1,dval2,dadd;
    
    
    
    cin >> val1;
    cin>>val2;
    cin >> fval1;
    cin>>fval2;
    cin >> dval1;
    cin>>dval2;
    
    add(&val1,&val2,&added);
    add(&fval1,&fval2,&fadd);
    add(&dval1,&dval2,&dadd);
    
    cout<<added<<" "<<fadd<<" "<<dadd;

    
    return 0;
}