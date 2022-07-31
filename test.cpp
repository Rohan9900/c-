#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


struct Product{
	char name[25];
	float price;
	int quant;
};


int main()
{
int c;
cout<<"Please enter the number of product: ";

cin>>c;
const int count=c;


struct Product product[count];

for(int i=0;i<count;i++){
	
	cout<<"Product "<<i<<endl;
	
	
	cout<<"Please enter the name of product: ";
	cin>>product[count].name;
	
    cout<<"Please enter the cost of product: ";
	cin>>product[count].price;  
	 
	cout<<"Please enter the quantity of product: ";
	cin>>product[count].quant;

}

for(int i=0;i<count;i++){
	cout<<"How many "<< product[count].name<<" were sold?"<<endl<<setw(20)<<product[count].quant<<endl;
}
                                                               

cout<<setw(9)<<"Items"<<setw(3)<<"Cost"<<setw(3)<<"Tax"<<setw(3)<<"Subtotal";

  
  return 0;
}