
// find pivot element 


#include<iostream>
using namespace std;

int main() { 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = sizeof(arr) / sizeof(arr[0]);  
    int rsum, lsum;
    for(int i = 0; i < x; i++) {
        lsum = 0;  
        rsum = 0;  
        for(int j = 0; j < i; j++) {
            lsum += arr[j];
        }

        for(int j = i + 1; j < x; j++) {
            rsum += arr[j];
        }
        if (lsum == rsum) {
            cout << "yes" << endl;
            return 0;  
        }
    }

    cout << "no" << endl; 
    return 0;
}




// using lsum and rsum are array

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = sizeof(arr) / sizeof(arr[0]);

    int total_sum = 0;
    for (int i = 0; i < x; i++) {
        total_sum += arr[i];  

    int lsum[x];  
    lsum[0] = arr[0];  
    for (int i = 1; i < x; i++) {
        lsum[i] = lsum[i - 1] + arr[i];
    }

    for (int i = 0; i < x; i++) {
        int rsum = total_sum - lsum[i] - arr[i];  

        if (lsum[i] == rsum) {
            cout << "yes" << endl;
            return 0;  
        }
    }

    cout << "no" << endl;  
    }
    return 0;
}