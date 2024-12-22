#include<iostream>
using namespace std;
int main(){
    // for loop 

    for(int count=1;count<=10;count++){
        cout<<"X"<<endl;
    }


    // to break at that time and left the loop

    for(int i=1;i<=10;i++){
        if(i==5){
            break;
        }
        cout<<i<<endl;
    }

    // continue keyword use for at that number is miss and then continue
    for(int i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout<< i<<" "<<endl;
    }



    // no initial condtion only give final conditon 

    int i=1;
    while(i<=5){
        cout<<i<<endl;
        i=i+1;
    }

    //reverse counting 100 to 0
    for(int c=100; c>=0;c--){
        cout<<c<<" ";
    }
    
    // when the condition is occur then this loop start

    int d=1;
    do{
        //logic
        cout<<d<<" "<<endl;
        //updation
        d++;
    } while(d<=5);
    return 0;
}
