#include<iostream>
using namespace  std;

int main()
{
    int input=0;
    cout<<"How many elements do you want to add: ";
    cin>>input;
    const int val=input;
    double foo[val];
    //operations to be handled by this code
    enum arrayoperations{traverse=1,insert,search, deleteElement};
    
    for(int counter=0; counter<val; counter++)
    {
        cout<<"Enter the value for index "<<counter<<" : ";
        cin>>foo[counter];
    }

int num;
    do{
        int options=0;
        cout<<"Choose any of the following operations: "<<endl;
        cout<<"1. Traverse Array: "<<endl;
        cout<<"2. Insert at a location: "<<endl;
        cout<<"3. Search element in array: "<<endl;
        cout<<"4. Delete Element from array: "<<endl;
        cin>>options;

        switch(options)
        {
            case traverse:
             //logic for print/traverse and array 
    for(int counter=0; counter<val; counter++)
    {
        cout<<"value for index "<<counter<<": "<<foo[counter]<<endl;
    }
                break;
            case insert:
            int location;
    	cout<<"Enter the location:";
    	cin>>location;
    	
    	
    	cout<<"Enter the element:";
    	cin>>num;
    	
    	foo[location]=num;
                break;
            case search:
            
    	cout<<"Enter the value to be search:";
    	cin>>num;
            	 for(int counter=0; counter<val; counter++)
    {
    	
    	if(foo[counter]==num){
        cout<<"value for index "<<counter<<endl;
    }
}
                break;
            case deleteElement:
            
    	cout<<"Enter the index to be deleted:";
    	cin>>num;
            	 for(int counter=0; counter<val; counter++)
    {
    	
    	if(counter==num){
        for(int j=counter;j<val-1;j++){
        	foo[j]=foo[j+1];
        	if(j==val-1){
        	foo[val-1]=0;
        }
		}
		break;
    }
}
                break;
            default:
                cout<<"Invalid operation";
                return 0;
        }

        ///add logic to exit or continue the loop
    }while(1);

    
    //logic for input
    
   
    


    return 0;
}

