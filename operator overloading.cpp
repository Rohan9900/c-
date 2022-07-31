#include<iostream>

using namespace std;


class str{
	char *p;
	int len;
	
	public:
		str(){
			len=0;
			p=0;
		}
		str(const char *t){
			len=strlen(t);
			p=new char[len+1];
			strcpy(p,t);
		}
		str(const str &s){
			len=s.len;
			p=new char[len+1];
			strcpy(p,s.p);
		}
		
	void printStr(){
		cout<<"\nThe string is::::>>"<<p;
	}
	
	friend str operator+(const str &s1,const str &s2);
	friend str operator<=(const str &s1,const str &s2);
	
};

str operator+(const str &s1,const str &s2){
	str temp;
	temp.len=s1.len+s2.len;
	temp.p=new char[temp.len+2];
	strcpy(temp.p,s1.p);
	strcat(temp.p," ");
	strcat(temp.p,s2.p);
	return temp;
}

str operator<=(const str &s1,const str &s2){
	str temp;
	if(s1.len>=s2.len){
		temp.len=s1.len;
		temp.p=new char[temp.len+1];
		strcpy(temp.p,s1.p);
		
	}
	else{
		temp.len=s2.len;
		temp.p=new char[temp.len+1];
		strcpy(temp.p,s2.p);
	}
	return temp;
}


int main(){
	
str a1("rohan")	,a2("bindal");

str s1(a1),s2(a2);

str s3=s1+s2;

str a3=a1+a2;

s3.printStr();
a3.printStr();
    
str s4=s1<=s2;

s4.printStr();

    
    return 0;
}