//                          RECURSION
// #include <iostream>
// using namespace std;

// //recursive call
// void func() {
//     cout << "Function call..work \n";
//     func();
// }
// int main() {
//     func();
//     return 0;
// }

// //                             FACTORIAL THROUGH RECURSION
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }
// int main() {
//     cout << factorial(5);
//     return 0;
// }

// // PROBLEM QUESTION              PRINT NUMBER IN DECREASING ORDER FROM 1 TO N       
// #include <iostream>
// using namespace std;

// void print(int n) {
//     if(n == 0) {
//         return;
//     } else{
//         cout << n << " ";
//         print(n-1);
//     }
// }

// int main() {
//     print(8);
//     return 0;
// }

// // PROBLEM QUESTION              SUM OF N NATURAL NUMBER         
// #include <iostream>
// using namespace std;

// int sumNum(int n) {
//     if(n == 1) {
//         return 1;
//     } else{
//         return n + sumNum(n-1);
//     }
// }

// int main() {
//     cout << sumNum(5);
//     return 0;
// }

// PROBLEM QUESTION              PRINT NTH FIBONACCI NUMBER
// 0 1 1 2 3 5 8 13 21....
// #include <iostream>
// using namespace std;

// int fibonacci(int n ){
//     if(n == 0) {
//         return 0;
//     } else if(n == 1) {
//         return 1;
//     } else {
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }
// int main() {
//     cout << fibonacci(5);

//     return 0;
// }

//                                     CHECK IF ARRAY SORTED
// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int i, int n) {
//     if(i == n-1) {
//         return true;
//     }
//     if(arr[i] >= arr[i+1]){
//         return false;
//     }
//     return isSorted(arr, n, i+1);
// }
// int main() {
//     int arr1[5] = {1,2,3,4,5};
//     int arr2[5] = {1,2,4,3,5};
//     cout << isSorted(arr1, 0, 5);
//     cout << isSorted(arr2, 0, 5);
//     return 0;
// }

//                                  FIRST OCCURRENCE OF ELEMENT IN ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;

// int firstOccurence(vector<int> arr, int i, int key) {
//     if(i == arr.size()) {
//         return -1;
//     }
//     if(arr[i] == key) {
//         return i;
//     }
//     return firstOccurence(arr, i+1, key);
// }
// int main() {
//     vector<int> arr = {1,2,3,4,5,6,7,8};
//     cout << firstOccurence(arr, 0, 5);
//     return 0;
// }
//                                  LAST OCCURRENCE OF ELEMENT IN ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;

// int lastOccurence(vector<int> arr, int i, int key) {
//     if(i == arr.size()) {
//         return -1;
//     }
//     int idxFound = lastOccurence(arr, i+1, key);
//     if (idxFound == -1) {
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return idxFound;
// }
// int main() {
//     vector<int> arr = {1,2,3,4,5,7,5,6,7,8};
//     cout << lastOccurence(arr, 0, 5);
//     return 0;
// }
//              PRINT A NO. X TO THE POWER OF N
#include <iostream>
#include <vector>
using namespace std;

int power(int x, int n) {
    if(n == 0) {
        return 1;
    }
    int halfPower = power(x, n/2);
    int halfPowerSq = halfPower * halfPower;
    if(n%2 != 0) {
        // odd
        return x * halfPowerSq;
    } else {
        // even
        return halfPowerSq;
    }
}
int main() {
    cout << power(2, 3);
    return 0;
}