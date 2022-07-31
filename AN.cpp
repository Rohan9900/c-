#include <iostream>

using namespace std;

struct Product
{
  int id;
  int weight;
  float price;
};

int main()
{
  int count=0;
  cout<<"How many products do you want to enter: ";
  cin>>count;
  const int productCount=count;
  Product pObj[productCount];
  
  for(int count=0;count<productCount;count++)
  {
    cout<<"Enter the product info in order of id, weight, price: ";
    cin>>pObj[count].id;
    cin>>pObj[count].weight;
    cin>>pObj[count].price;
    
  }
  
   for(int count=0;count<productCount;count++)
  {
    cout<<"Product ID: "<<pObj[count].id<<" Product weight: "<<pObj[count].weight<<" Product price: "<<pObj[count].price<<endl;
    
  }

cout<<sizeof(pObj);
  
  return 0;
}