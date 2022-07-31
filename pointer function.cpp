#include<iostream>
using namespace  std;


int operation(int x,int y,int(*function)(int,int)){
	int g;
	g=(*function)(x,y);
	return g;
}

float operation(float x,float y,float(*function)(float,float)){
	float g;
	g=(*function)(x,y);
	return g;
}

int add(int x,int y){
	return x+y;
}
float add(float x,float y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}

int main()
{
    float a=9.8,b=6;
	
	cout<<"Add: " <<operation(a,b,add)<<" ";  
cout<<"Sub: " <<operation(a,b,sub);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////