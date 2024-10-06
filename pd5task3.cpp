#include<iostream>
using namespace std;
float taxCalculator(char,float);
main()
{
char type;
float price,result;
cout<<"Enter the vehicle type code(M,E,S,V,T):";
cin>>type;
cout<<"Enter the price of the vehicle:$";
cin>>price;
result=taxCalculator(type,price);
cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is "<<result;
}
float taxCalculator(char type,float price)
{
float tax,final;
if(type=='M')
{
tax=price*0.06;
final=price+tax;
return final;
}
if(type=='E')
{
tax=price*0.08;
final=price+tax;
return final;
}
if(type=='S')
{
tax=price*0.10;
final=price+tax;
return final;
}
if(type=='V')
{
tax=price*0.12;
final=price+tax;
return final;
}
if(type=='T')
{
tax=price*0.15;
final=price+tax;
return final;
}
}