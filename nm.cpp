#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>



using namespace std;

double func(double x){
return (230*x*x*x*x) + (18*x*x*x) + 9*x*x-221*x-9;
}

double derivativefunc(double x){
return (920*x*x*x)+(54*x*x) +18*x-221;
}


void NewtonRaphson(double x)
{
    double e = pow(10,-6);
    double y=0.0,z=100.0;
    while((z-x)>e || (x-z)>e){
    z=x;
    x = x - (func(x)/derivativefunc(x));
    }
    cout<<"The reqd. root is :";
     std::cout << std::fixed;
    std::cout << std::setprecision(16);
    std::cout << x;
}


void Secant(double a, double b)
{
    double fa,fb,fm,mid=0,mid2 ;
    double e = pow(10,-6);

    if(func(a)*func(b)>0)
    {
        cout<<"Please choose appropriate values";
        exit(0);
    }
    fa=func(a);
    fb=func(b);
       fm=100;
    while(fm>e||fm<-e)
    {
        fa=func(a);
        fb=func(b);
        mid2=mid;
        mid=((fb*a)-(fa*b))/(fb-fa);
        fm=func(mid);
        a=b;
        b=mid;
        

    }

    cout<<"The reqd. root is :";
    std::cout << std::fixed;
    std::cout << std::setprecision(16);
    std::cout << mid;
   
}

int main() {
double x0;
double a0,b0;
int ch;
cout<<"Enter the method to be used to calculate:"<<endl;
cout<<"1.NEWTON RAPHSON METHOD"<<endl;
cout<<"2.SECANT METHOD"<<endl;
cout<<"wrong option for any other choice"<<endl;
cout<<"enter your choice"<<endl;
cin>>ch;
switch(ch)
{
 case 1:
{
    cout<<"Enter your assumption :";
    cin>>x0;
    NewtonRaphson(x0);
    break;
}
  case 2:
{
    cout<<"Enter the initial two guesses.\n";
    cin>>a0;
    cin>>b0;
    Secant(a0,b0);
    break;
}
default :
	{
	cout<<"wrong option"<<endl;
	}
}
}
