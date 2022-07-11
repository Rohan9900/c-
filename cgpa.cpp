#include<iostream>

using namespace std;




int add(int *a , int *b){
    return *a+*b;
}

int subs(int *a , int *b){
    return *a-*b;
}
int multiplicationn(int *a , int *b){
    return *a* *b;
}

int main(){

    // int x , y ;

    // cin >> x >> y;
    // cout << add(x,y) << endl;
    // cout << subs(x,y) << endl;


    do
    {
        int val_1 , val_2;
        cout << "enter two numbers for further Operations";
        cin >> val_1 >> val_2;
        int operations = -1;
        cout << "enter 1 for add"<< endl;
        cout << "enter 2 for subs" << endl;
        cout << "enter 3 for multiplication"<< endl;
        
    int xyz;
    cin >> xyz;
if(xyz==0){
	break;
}
        // int a = add(val_1,val_2);
        
        // int c = multiplicationn(val_1,val_2);

        switch (xyz)
    {
    case 1:
        int a = add(&val_1,&val_2);
        cout << a ;
        break;
    case 2:
        int b = subs(&val_1,&val_2);
        cout << b;
        break;
    case 3 :
        int c = multiplicationn(&val_1,&val_2);
        cout << c;
        break;
    default:
        break;
    }
    } while (true);

    
    return 0;
}