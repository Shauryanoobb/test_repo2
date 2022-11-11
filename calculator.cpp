#include <iostream>
#include <cmath>



using namespace std;

int main()
{
double num0;
double num1;
double num2;
string op;
cout<<"choose an operator from the following"<<endl;
cin>>op;
if(op=="sin"||op=="cos"||op=="tan"){
cout<<"enter angle in radians ";
cin>>num0;
if(op=="sin"){cout<<sin(num0);}
else if(op=="cos"){cout<<cos(num0);}
else if(op=="tan"){cout<<tan(num0);}
}
else if(op=="+"){cout<<"enter number 1"<<endl;cin>>num1;cout<<"enter number 2"<<endl;cin>>num2;cout<<num1+num2;}
else if(op=="-"){cout<<"enter number 1"<<endl;cin>>num1;cout<<"enter number 2"<<endl;cin>>num2;cout<<num1-num2;}
else if(op=="*"){cout<<"enter number 1"<<endl;cin>>num1;cout<<"enter number 2"<<endl;cin>>num2;cout<<num1*num2;}
else if(op=="/"){cout<<"enter number 1"<<endl;cin>>num1;cout<<"enter number 2"<<endl;cin>>num2;cout<<num1/num2;}
else if(op=="^"){cout<<"enter base number"<<endl;cin>>num1;cout<<"enter power number"<<endl;cin>>num2;cout<<pow(num1,num2);}
else {cout<<"invalid operator";}






    return 0;
}