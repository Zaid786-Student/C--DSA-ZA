//                               CREATING AND USING ARRAYS IN C++
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[50] = {1,2,3,4,5}; // DECLARING AN ARRAY OF SIZE 50
//     cout << arr[0] << endl; // ACCESSING THE FIRST ELEMENT OF THE ARRAY
//     cout << arr[1] << endl; // ACCESSING THE SECOND ELEMENT OF THE ARRAY
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
// #include<iostream>
// using namespace std;
// void func(int arr[]){
//     arr[0] = 1000;
// }
// void func2(int *ptr){
//     ptr[0] = 1000;
// }
// int main() {
//     int a = 5;
//     int *ptr = &a;
//     cout << ptr << endl;

//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(int);
//     func(arr); // passing array name is equivalent to passing the pointer
//     func2(arr);
//     cout << arr[0] << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void printArr(int nums[], int n){
//     for(int i = 0; i < n; i++){
//         cout << nums[i] << ",";
//     }
//     cout << endl;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(int);
//     cout << "array size = " << sizeof(arr) << endl; //20
    
//     printArr(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int searchKey(int *arr, int n, int key){
//     for(int i=0; i<n; i++){
//         if (arr[i] == key){
//             return i;
//         }

//     }
//     return -1;
// }
// int main(){
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
//     int n = sizeof(arr)/sizeof(int);

//     cout << searchKey(arr, n, 18);
//     return 0;
// }

//                         REVERESE AN ARRAY WITH EXTRA SPACE
// #include<iostream>
// using namespace std;
// void printArr(int *arr, int n){
//     for(int i = 0; i<n; i++){
//         cout << arr[i] << ",";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/ sizeof(int);

//     int copyArr[n];
//     for(int i = 0; i <n; i++){
//         int j = n-i-1;
//         copyArr[i] = arr[j];
//     }
//     for(int i = 0; i<n; i++){
//         arr[i] = copyArr[i];
//     }
//     printArr(arr, n);
//     return 0;
// }

//                         REVERSE AN ARRAY without extra space

// #include<iostream>
// using namespace std;
// void swappingElement(int arr[], int start, int end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
// }
// int main(){
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/ sizeof(int);
//     int start = 0;
//     int end = n - 1;
//     while(start < end){
//         // swappingElement(arr, start, end);         //METHOD 1
//         // swap(arr[start], arr[end]);  //ALSO WE CAN USE ONE LINE TO SWAP  METHOD 2
//         start++;
//         end--;
//     }
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << ",";
//     }
//     return 0;
// }

//                                BINARY SEARCH IN AN ARRAY
// #include <iostream>
// using namespace std;

// int binSearch(int *arr, int n, int key){
//     int start = 0;
//     int end = n-1;

//     while(start <= end){
//         int mid = (start+end) / 2;
//         if(arr[mid] == key){
//             cout << "the given key is in index " << mid << endl;
//             return mid;
//         } else if(arr[mid] < key){
//             start = mid +1;
//         } else{
//             end = mid -1;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n = sizeof(arr)/sizeof(int);
//     cout << binSearch(arr, n, 12) << endl;
//     return 0;
// }

//                                  POINTER ARITHMETIC 1

// #include<iostream>
// using namespace std;

// int main() {
//     int cha = 'b';
//     int *chptr = &cha;
//     int a = 10;
//     int *aptr = &a;

//     cout << aptr << endl; //0x61ff08 
//     aptr++; //1 int++
//     cout << aptr << endl; //0x61ff0c   here there is a 4byte difference
    
//     cout << chptr << endl; 
//     chptr--; //1 ch--
//     cout << chptr << endl; 
    
//     return 0;
// }

//                                ARITHMETIC OPERATION 2 
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     int *ptr = &a;

//     cout << ptr << endl; //0x61ff08
//     cout << (ptr+3) << endl; //0x61ff14
//     cout << &a;
//     return 0;
// }

//                          CODE FOR SUB ARRAY AND SUB ARRAY ELEMENTS

// #include<iostream>
// using namespace std;

// void printSubArray(int *arr, int n){
//     for(int start = 0; start < n; start++){
//         for(int end = start; end<n; end++){
//            // cout << "("<<start << "," << end << ") "; // NO. OF SUB ARRAY
//             for(int i = start; i<=end; i++){
//                 cout << arr[i]; // subarray elements also 
//             }
//             cout << ", ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     printSubArray(arr,n);
//     return 0;
// }

//                     CODE FOR MAX SUM SUB ARRAY

#include<iostream>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT8_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum = sum + arr[i];
            }
            cout << sum << ", ";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
    }
    cout << "Maximum subarray sum =" << maxSum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum(arr, n);
    return 0;
}