#include<iostream>
#include<cmath>
using namespace std;


// no return value 
void functionname(){
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    } cout<<endl;
}

// retrun value 
int sum(int a,int b){
    int totalSum=a+b;
    return totalSum;
}

// int function with return value using paramerter 
int multiply(int x,int y, int z){
    int result=x*y*z;
    return result;
}

char lowertoupper(char c){
    char answer= c-'a'+'A';
    return answer;
}
void printname(){
    cout<<"harsh"<<endl;
}


int main(){
    functionname();

    printname();
    
    int ans=sum(5,500);
    cout<<ans<<endl;

    char character='z';
    char upCase= lowertoupper(character);
    cout<<upCase<<endl;

    //function call
    int mul=multiply(2,4,6);
    cout<<mul<<endl;
    
    return 0;
}

