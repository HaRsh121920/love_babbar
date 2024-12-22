
// approach 1 according to video 

// #include<iostream>
// using namespace std;
// void color(int arr[],int size){
//     int zero =0;
//     int one = 1;
//     int two = 2;
//     // count number of 0,1,2
//     for(int i =0; i<size;i++){
//         if(arr[i] == 0){
//             zero++;
//             }
//         else if(arr[i] == 1){
//             one++;
//             }
//         else{
//             two++;
//         }

//     }
//      for (int i = 0; i < size; i++) {
//         if (zero > 0) {
//             arr[i] = 0;
//             zero--;
//         } else if (one > 0) {
//             arr[i] = 1;
//             one--;
//         } else {
//             arr[i] = 2;
//             two--;
//         }
//     }
// };

// int main() {
//     int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     color(arr, size);

//     // Print the sorted array
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

// }



// second approach  multiply the number 
// #include<iostream>
// using namespace std;
// void color(int arr[],int size){
//     int zero =0;
//     int one = 1;
//     int two = 2;
//     // count number of 0,1,2
//     for(int i =0; i<size;i++){
//         if(arr[i] == 0){
//             zero++;
//             }
//         else if(arr[i] == 1){
//             one++;
//             }
//         else{
//             two++;
//         }

//     }
//     int sorted[size];
//     int index =0;
//      for (int i = 0; i < zero; i++) {
//         sorted[index++] = 0*1;
//     }
//      for (int i = 0; i < one; i++) {
//         sorted[index++] = 1*1;
//     }
//      for (int i = 0; i < two; i++) {
//         sorted[index++] = 2*1;
//     }
//     for (int i = 0; i < size; i++) {
//         cout << sorted[i] << " ";
//     }
// };

// int main() {
//     int arr[] = {0, 1, 2, 0, 1, 2, 1, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     color(arr, size);

//     // // Print the sorted array
//     // for (int i = 0; i < size; i++) {
//     //     cout << arr[i] << " ";
//     // }

// }


// using stack simply apply this approach 
    // for (int i = 0; i < zero; i++) {
    //     stk.push(0);
    // }
    // for (int i = 0; i < one; i++) {
    //     stk.push(1);
    // }
    // for (int i = 0; i < two; i++) {
    //     stk.push(2);
    // }

    // 
    // for (int i = size - 1; i >= 0; i--) {
    //     arr[i] = stk.top();
    //     stk.pop();
    // }