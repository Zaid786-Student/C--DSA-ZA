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
// #include <iostream>
// #include <vector>
// using namespace std;

// int power(int x, int n) {
//     if(n == 0) {
//         return 1;
//     }
//     int halfPower = power(x, n/2);
//     int halfPowerSq = halfPower * halfPower;
//     if(n%2 != 0) {
//         // odd
//         return x * halfPowerSq;
//     } else {
//         // even
//         return halfPowerSq;
//     }
// }
// int main() {
//     cout << power(2, 3);
//     return 0;
// }

//                          TILING PROBLEM FOR 2XN
// #include <iostream>
// #include<string>
// using namespace std;

// int tilingProblem(int n){
//     if(n == 0 || n == 1) {
//         return 1;
//     }
//     //vetical
//     int ans1 = tilingProblem(n-1);//2xn-1
//     //horizontal
//     int ans2 = tilingProblem(n-2);//2xn-2

//     return ans1 + ans2;
// }
// int main() {
//     int n = 4;
//     cout << tilingProblem(n);
//     return 0;
// }

//                          REMOVING DUPLICATES FROM STRING
// #include<iostream>
// #include<string>
// using namespace std;

// void removeDuplicates(string str, string ans, int i, int map[26]) {
    
//     if(i == str.size()){
//         cout << "ans : " << ans << endl;
//     }

//     char ch = str[i];
//     int mapIdx = (int)(ch - 'a');

//     if(map[mapIdx] == true) { // duplicate
//         removeDuplicates(str, ans, i+1, map);
//     } else { // not duplicate
//         map[mapIdx] = true;
//         removeDuplicates(str, ans+str[i], i+1, map);
//     }
// }

// int main() {
//     string str = "appnnacollege";
//     string ans = "";
//     int map[26] = {false};

//     removeDuplicates(str, ans, 0, map);
// }
//                          REMOVING DUPLICATES FROM STRING WITHOUT INDEX I
// #include<iostream>
// #include<string>
// using namespace std;

// void removeDuplicates(string str, string ans, int map[26]) {
    
//     if(str.size() == 0){
//         cout << "ans : " << ans << endl;
//         return;
//     }

//     char ch = str[str.size() - 1];
//     int mapIdx = (int)(ch - 'a');
//     str = str.substr(0, str.size() - 1);
//     if(map[mapIdx] == true) { // duplicate
//         removeDuplicates(str, ans, map);
//     } else { // not duplicate
//         map[mapIdx] = true;
//         removeDuplicates(str, ch+ans, map);
//     }
// }

// int main() {
//     string str = "appnnacollege";
//     string ans = "";
//     int map[26] = {false};

//     removeDuplicates(str, ans, map);
//     return 0;
// }

//                                FRIENDS PAIRING PROBLEM
// #include<iostream>
// #include<string>
// using namespace std;

// int friendsPairing(int n) {
//     if(n == 1 || n == 2) {
//         return n;
//     }

//     return friendsPairing(n-1) + (n-1)*friendsPairing(n-2);
// }
// int main() {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

//                      BINARY STRING PROBLEM without any consecutive 1 
#include<iostream>
#include<string>
using namespace std;

void binString(int n, int lastPlace, string ans) {
    if(n == 0){
        cout << ans << endl;
        return;
    }
    if(lastPlace != 1) {
        binString(n-1, 0, ans + '0');
        binString(n-1, 1, ans + '1');
    } else{
        binString(n-1, 0, ans + '0');
    }
}
int main() {
    string ans = "";
    binString(3,0, ans);
    return 0;
}