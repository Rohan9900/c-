#include<iostream>
#include <stdlib.h>
using namespace std;


class test{

    public:
    int a_;

    test(int val = 0){
        a_ = val;

    }

    void display(void){
        cout << "The value of a: " << a_ << endl;
    }
};


int main(){

    test obj(9);
    obj.display();
    test *optr;

    optr = &obj;
    optr->display();

    (*optr).display();
    system("Color 0C");
   
    cout<<&optr<<" Size of pointer "<<sizeof(optr)<<" "<<sizeof(obj);

    return 0;
}