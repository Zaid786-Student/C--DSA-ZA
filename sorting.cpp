//                                       BUBBLE SORT

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);

//     for(int pass = 0; pass < n-1; pass++){
//         for(int i =0; i<n-1; i++){
//         if(arr[i] > arr[i+1]){
//             // int temp = arr[i];
//             // arr[i] = arr[i+1];
//             // arr[i+1] = temp;
//             // we can also use swap function to swap the values
//             swap(arr[i], arr[i+1]);
//         }
//       }
//     }
//         cout << "Sorted array is: " << endl;
//     for(int i = 0; i<n; i++ ){
//         cout << arr[i] << ", " ;
//     }
//     return 0;
// } 

//                                     BUBBLE SORT METHOD 2
// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[], int n){
//     for(int i = 0; i < n-1; i++){
//         bool swapped = false;
//         for(int j = 0; j < n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(!swapped){
//             return;
//         }
//     }
// }
// int main(){
//     int arr[5] = {5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);

//      bubbleSort(arr, n);
//      for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//                                      SELECTION SORT
// #include<iostream>
// using namespace std;

// void selectionSort(int *arr, int n){
//     for(int i = 0; i <n-1; i++){
//         int minIdx = i;
//         // loop 2 is to find minimum index
//         for(int j = i+1; j<n; j++){
//             if(arr[j] < arr[minIdx]){
//                 minIdx = j;
//             }
//         }
//         swap(arr[i], arr[minIdx]);
//     }
// }
// int main() {
    // int arr[5] = {5, 4, 1, 3, 2};
    // int n = sizeof(arr) / sizeof(int);
//     selectionSort(arr, n);
    
//     cout << "Sorted Array = " << endl;
//     for(int  i = 0; i < n; i++){
//         cout << arr[i] << ", ";
//     }
//     return 0;
// }

//                                  INSERTION SORT
// #include<iostream>
// using namespace std;
// void insertionSort(int *arr, int n){
//     for(int i = 1; i< n; i++){
//         int temp = arr[i];
//         int prev = i -1;
//         while (prev > 0 && arr[prev] > temp){
//             swap(arr[prev], arr[prev+1]);
//             prev--;
//         }

//         arr[prev+1] = temp;
//     }
// }
// int main(){
    // int arr[5] = {5, 4, 1, 3, 2};
    // int n = sizeof(arr) / sizeof(int);
//     insertionSort(arr, n);

//     for(int i = 0; i < n; i++){
//     cout << arr[i] << " ";
// }
//     return 0;
// }

//                                  COUNTING SORT       
// #include<iostream>
// #include<climits>
// using namespace std;
// void countSort(int *arr, int n){
//     int  freq[100000]; //Range
//     int minVal = INT_MAX, maxVal = INT_MIN;
//     for(int i =0; i<n; i++){ //Loop is used to find range
//         minVal = min(minVal, arr[i]);
//         maxVal = max(maxVal, arr[i]);
//     }
//     // 1st Step TC = O(n)
//     for(int i =0; i <n; i++){
//         freq[arr[i]]++;
//     }
//     // 2nd step TC O(range) = max -min
//     for(int i= minVal, j = 0; i <maxVal; i++){
//         while(freq[i]>0){
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }
// }
// int main() {
//     int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
//     int n = sizeof(arr) / sizeof(int);
//     countSort(arr, n);

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//                              IN-BUILD SORTING
// #include<iostream>
// #include<algorithm> // for sort function
// using namespace std;
// int main() {
//     int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
//     int n = sizeof(arr) / sizeof(int);
//     sort(arr, arr+8); // SORTING IN ASCENDING ORDER
//     // sort(arr, arr+8, greater<int>()); // SORTING IN DESCENDING ORDER

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// PRACTICE PROBLEMS   Sort this array of characters using insertion sort in descending order
#include<iostream>
using namespace std;
void print(char arr[], int n) {
    for(int i= 0; i<n; i++){
        cout << arr[i] << ", ";
    }
}
void sortChar(char arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >=0 && arr[prev] < curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;
    }
    print(arr, n);
}
int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch)/ sizeof(char);

    sortChar(ch, n);
    return 0;
}