#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;


class Student{
	
	int adNo,engMark,mathMark,sciMark,totalMark;
	string name;
	
	void calculateTotal(){
		this->totalMark=this->engMark+this->mathMark+this->sciMark;
	}
	
	public:
	void takeData(int adNo,int engMark,int mathMark,int sciMark,string name){
		this->adNo=adNo;
		this->engMark=engMark;
		this->mathMark=mathMark;
		this->sciMark=sciMark;
		this->name=name;
		calculateTotal();
	}
	
	void showData(){
		     system("Color 42");           
		cout<<endl<<"----------------------------------------------------------------------------------"<<endl<<"Student name: "<<this->name<<endl<<"Student Number: "<<this->adNo<<endl<<"Marks in English: "<<this->engMark<<endl<<"Marks in Math: "<<this->mathMark<<endl<<"Marks in Science: "<<this->sciMark<<endl<<"Total MArks: : "<<this->totalMark<<endl<<"----------------------------------------------------------------------------------"<<endl;
	}
	
};

int main()
{
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	
	Student student[n];
	int adNo,engMark,mathMark,sciMark;
	string name;
	for(int i=0;i<n;i++){
		system("Color 06");
		cout<<"Enter name of students: ";
		cin>>name;
		system("Color 0E");
		cout<<"Enter admission number of students: ";
		cin>>adNo;
		system("Color 05");
		cout<<"Enter math marks of students: ";
		cin>>engMark;
		system("Color 0D");
		cout<<"Enter english marks of students: ";
		cin>>mathMark;
		system("Color 0F");
		cout<<"Enter science marks of students: ";
		cin>>sciMark;
		student[i].takeData(adNo,engMark,mathMark,sciMark,name);
		
	}
	
	for(int i=0;i<n;i++){
	student[i].showData();
	}

  return 0;
}