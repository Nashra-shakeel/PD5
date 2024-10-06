#include<iostream>
using namespace std;
float pyramidVolume(float,float,float,string);
main()
{
float l,w,h,result;
string unit;
cout<<"Enter the length of the pyramid(in metres):";
cin>> l;
cout<<"Enter the width of the pyramid(in metres):";
cin>>w;
cout<<"Enter the height of the pyramid(in meters):";
cin>>h;
cout<<"Enter the desired output unit(millimeter,centimeters,meters,kilometers):";
cin>> unit;
result=pyramidVolume(l,w,h,unit);
cout<<"The volume of pyramid is:"<<result<<" cubic "<<unit;
}
float pyramidVolume(float l,float w,float h,string unit)
{
float volume;
if(unit=="millimeters")
{
 volume=((l*w*h)/3)*1000;
}
if(unit=="centimeters")
{
volume=((l*w*h)/3)*100;
}
if(unit=="meters")
{
volume=((l*w*h)/3);
}
if(unit=="kilometers")
{
volume=((l*w*h)/3)/1000;
}
return volume;
}