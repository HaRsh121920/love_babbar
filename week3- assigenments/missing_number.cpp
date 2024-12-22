
// simple approach
// #include <iostream>
// using namespace std;
// #include <algorithm>  

// int main() {
//     int arr[] = {1,4,5,3,6,7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n-1); 

//     for (int i = 1; i <= n; i++) {
//         if(arr[i-1]!=i){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }

// using xor
#include <iostream>
using namespace std;
#include <algorithm>  

int main() {
    int arr[] = {1,4,5,3,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n-1); 

    for (int i = 1; i <= n; i++) {
        if(arr[i-1]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}