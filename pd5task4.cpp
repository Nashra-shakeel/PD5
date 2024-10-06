#include<iostream>
#include<string>
using namespace std;
int projectTimeCalculation(int,int,int);
main()
{
int hours,days,workers;
cout<<"Enter the needed hours to finish the project:";
cin>> hours;
cout<<"Enter the days that the firm has:";
cin>>days;
cout<<"Enter the number of all workers:";
cin>>workers;
projectTimeCalculation(hours,days,workers);

}
int projectTimeCalculation(int hours,int days,int workers)
{
 int th,whour,workerh,phour,time;
 th=10*0.10; //training hours
 whour=10-th; //working day hours
 workerh=whour*days*workers; //worker hours
 if(workerh>=hours)
 {
    time=workerh-hours;
    cout<<"yes!"+to_string(time)+" hours are left.";
    return time;
 }
 if(hours>workerh)
 {
    time=hours-workerh;
    cout<<"Not enough time!"+to_string(time)+" hours needed.";
    return time;
 }
}
