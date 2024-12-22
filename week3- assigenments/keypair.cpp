first problem  key pair 
// using 2 loop
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int x = sizeof(arr) / sizeof(arr[0]);  
    int y = 5;  
        for (int i = 0; i < x - 1; i++) {
        for (int j = i + 1; j < x; j++) {
            if (arr[i] + arr[j] == y) {
                cout << arr[i] << " + " << arr[j] << " = " << y << endl;
            }
        }
    }
    
    return 0;
}

// using one loop but only one time check 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int x = sizeof(arr) / sizeof(arr[0]);  
    int y = 5;  
        for (int j =1; j < x; j++) {
            if (arr[j] + arr[j+1] == y) {
                cout << arr[j] << " + " << arr[j+1] << " = " << y << endl;
            }
        }
    
    return 0;
}

// using stack 

#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};  
    int x = sizeof(arr) / sizeof(arr[0]);  
    int y;
    cin >> y;  

    stack<int> stk;  
    for (int j = 0; j < x; j++) {
        int complement = y - arr[j];
        if (!stk.empty() && stk.top() == complement) {
            cout << complement << " + " << arr[j] << " = " << y << endl;
        }
        stk.push(arr[j]);
    }

    return 0;
}

