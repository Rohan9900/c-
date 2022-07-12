#include<iostream>

using namespace std;




void input(int *rollNo,int *CGPA){
    *rollNo+=1;
    *CGPA+=1;
    
}




int main(){


    char character='r';
    int var=4;
    float floating=0.666;
    double doubles=0.88888888888888888888888;
    
    char *ptrCharacter=&character;
    int *ptrVar=&var;
    float *ptrFloating=&floating;
    double *PtrDoubles=&doubles;
    
    cout<<"Value of char is: "<<character<<endl<<"Address of char is: "<<&character<<endl<<"Ptr of char is: "<<ptrCharacter<<endl<<"Value of char pointer by pointer is: "<<*ptrCharacter<<endl<<"Address of char pointer is: "<<&ptrCharacter<<endl;
    cout<<"Value of int is: "<<var<<endl<<"Address of int is: "<<&var<<endl<<"Ptr of int is: "<<ptrVar<<endl<<"Value of int pointer by pointer is: "<<*ptrVar<<endl<<"Address of int pointer is: "<<&ptrVar<<endl;
cout<<"Value of float is: "<<floating<<endl<<"Address of float is: "<<&floating<<endl<<"Ptr of float is: "<<ptrFloating<<endl<<"Value of float pointer by pointer is: "<<*ptrFloating<<endl<<"Address of float pointer is: "<<&ptrFloating<<endl;
    cout<<"Value of char is: "<<doubles<<endl<<"Address of char is: "<<&doubles<<endl<<"Ptr of char is: "<<PtrDoubles<<endl<<"Value of char pointer by pointer is: "<<*PtrDoubles<<endl<<"Address of char pointer is: "<<&PtrDoubles<<endl;
    
    return 0;
}