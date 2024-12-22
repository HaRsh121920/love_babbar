
// remove_duplicate_from_sorted_arr

// #include<iostream>
// #include <algorithm>
// using namespace std;

// int main() {   
//     int arr[] = {1, 2, 3, 3, 3, 5, 4, 4, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int j = 0;  
//     int i = 1;  
//     sort(arr, arr + n); 
//     while (i < n) { 
//         if (arr[i] == arr[j]) {
//             i++; 
//         } else {
//                j++;    
//             arr[j] = arr[i]; 
            
//             i++;
//         }
//     }
//     for (int k = 0; k <= j; k++) {
//         cout << arr[k] << " ";
//     }
//     return 0;
// }

// using stack
// #include<iostream>
// #include <algorithm>
// #include<stack>
// using namespace std;

// int main() {   
//     int arr[] = {1, 2, 3, 3, 3, 5, 4, 4, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     // sort(arr, arr + n); 
//     stack<int> stk;
//     // traverse array 
//     sort(arr,arr+n);
//     for(int i =0; i<n; i++){
//         if(stk.empty() || stk.top() != arr[i]){
//             stk.push(arr[i]);
//         }
//     }
//     // display the unique element
//     while(!stk.empty()){
//         cout<<stk.top()<<" ";
//         stk.pop();
//     }

//     return 0;
// }

// using map
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{      int arr[] = {1, 2, 3, 3, 3, 5, 4, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int,bool>dup;

    // traverse an array
    for(int i = 0; i<n; i++){
        if(seen.find(arr[i]) == seen.end()){
            cout<<
        }
    }
return 0;
}