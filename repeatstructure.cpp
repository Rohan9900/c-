#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;



class Book{
	public:
		char name[100];
	float price;
	int quant;
	char author[25];
	char publisher[25];
	
	public:
		
		Book(){
		
	}
		
	Book(char name[100],float price,int quant,char author[25],char publisher[25]){
		strcpy(this->name,name);
	strcpy(this->author,author);
	strcpy(this->publisher,publisher);
	this->price=price;
	this->quant=quant;
	
	}
	
	
	
};


int main()
{
	int i;
	cout<<"Please enter the number of books: ";

	cin>>i;
	const int productCount=i;
	Book p[productCount];
	
	for(int count=0; count<productCount;count++)
	{
	
	
p[count]=Book("book",100,2,"me","chetan bhagat");
		
		
	}
	
	
	for(int count=0; count<productCount;count++)
	{
	
	
		
		cout<<"Product Name: "<<p[count].name<<", price:"<<p[count].price<<", quant:"<<p[count].quant<<", publisher: "<<p[count].publisher<<endl;
	}
	
return 0;


}