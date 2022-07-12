#include<iostream>

using namespace std;




void input(float *result,int *marksObtained,int *maxMarks){
    *result=*marksObtained*100/ *maxMarks;
    
}




int main(){


        
    int rollNo,marksObtained,maxMarks;
    float result;
    
    cout<<"Enter RollNo: ";
    cin >> rollNo;
    cout<<"Enter marks obtained: ";
    cin>>marksObtained;
    cout<<"Enter max marks: ";
    cin>>maxMarks;
    
    input(&result,&marksObtained,&maxMarks);
    
    cout<<result;

    
    return 0;
}