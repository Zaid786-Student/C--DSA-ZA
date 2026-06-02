//                               CREATING AND USING ARRAYS IN C++
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[50] = {1,2,3,4,5}; // DECLARING AN ARRAY OF SIZE 50
//     cout << arr[0] << endl; // ACCESSING THE FIRST ELEMENT OF THE ARRAY
//     cout << arr[1] << endl; // ACCESSING THE SECOND ELEMENT OF THE ARRAY
//     cout << arr[2] << endl; // ACCESSING THE THIRD ELEMENT OF THE ARRAY
//     cout << arr[3] << endl; // ACCESSING THE FOURTH ELEMENT OF THE ARRAY
//     cout << arr[4] << endl; // ACCESSING THE FIFTH ELEMENT OF THE ARRAY
//     cout << arr[5] << endl; // ACCESSING THE SIXTH ELEMENT OF THE ARRAY (UNINITIALIZED, MAY CONTAIN GARBAGE VALUE) or 0 (IF GLOBAL OR STATIC)
//     return 0;
// }

//                               USING LOOPS TO ACCESS ARRAY ELEMENTS
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[25] = {1,2,3,4,5,8,13};
//     int n = sizeof(arr)/sizeof(int); // CALCULATING THE LENGTH OF THE ARRAY
//     for (int i = 0; i <= n-1; i++){
//         cout << arr[i] << endl;
//     }
// }

//                              TAKING USER INPUT TO FILL AN ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];
//     cout << "Enter 5 integers: " << endl;
//     for(int i = 0; i < 5; i++){
//         cin >> arr[i];
//     }
//     cout << "You entered: " << endl;
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//      return 0;
// }

//                       PROBLEM TO FIND MAXIMUM ELEMENT IN AN ARRAY
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter the size of array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter the " << n << " elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     for(int i = 0; i < n; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     cout << max << " is the maximum element in the array" << endl;
//     cout << "Entered array is" << endl;
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//                         ARRAYS ARE PASSED BY REFERENCE
// #include<iostream>
// using namespace std;

// int main() {
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl;

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr)/sizeof(int);
//     cout << *arr << endl; // automatically index will be 0
//     cout << *(arr+1) << endl;
//     cout << *(arr+2) << endl;
//     cout << *(arr+3) << endl;
//     return 0;
// }

//                          ARRAY USING IN FUNCTION
#include<iostream>
using namespace std;
void func(int arr[]){
    arr[0] = 1000;
}
void func2(int *ptr){
    ptr[0] = 1000;
}
int main() {
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    func(arr); // passing array name is equivalent to passing the pointer
    func2(arr);
    cout << arr[0] << endl;
    return 0;
}