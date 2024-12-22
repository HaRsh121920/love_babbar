#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"IMPLICIT TYPE CASTING"<<endl;

    //int to float
    int x=1;
    float y=1.1;
    float value=x+y;
    cout<<value<<endl;

    //char to int
    char ch='A'; 
    int a=ch+1;
    char p=ch+1;
    cout<<p<<endl;
    cout<<a<<endl;

    //int to char
    int b=97;
    char c=b;
    cout<<c<<endl;

    cout<<"EXPLICIT TYPE CASTING"<<endl;

    //float to int
    float num1=1;
    float num2=1.1;
    float res=num1+(int)num2; //num2 is 5 now after converting to int
    cout<<res<<endl;


    //double to int
    double e = 2.734343;
    int q=(int)e;
    cout<<q<<endl;

    //float to char
    float num=65.63;
    char cv=(char)num;
    cout<<cv<<endl;


    //int to float
    int nu1=20;
    int nu2=6.0;
    float z=nu1/((float)nu2);
    cout<<z<<endl;
}
