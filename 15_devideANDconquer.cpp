//                              MERGE SORT  
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr[], int st, int mid, int end){ // O(n)
//     vector<int> temp;
//     int i = st;
//     int j = mid+1;

//     while(i <= mid && j <= end) {
//         if(arr[i] <= arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//         } else{
//             temp.push_back(arr[j++]);
//         }
//     }

//     while(i <= mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j <= end){
//         temp.push_back(arr[j++]);
//     } 

//     //vector to original array

//     for(int idx = st, x = 0; idx <= end; idx++) {
//         arr[idx] = temp[x++];
//     }
// }
// void mergeSort(int arr[], int st, int end) { // O(nlogn)
//     if(st >= end) {
//         return;
//     }

//     int mid = (st+end)/2; //st + (end - st)/2

//     mergeSort(arr, st, mid); // left half
//     mergeSort(arr, mid+1, end); // left half

//     merge(arr, st, mid, end);
// }

// void printArr(int arr[], int n) {
//     for(int i= 0; i <n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main() {
//     int arr[6] = {6, 3, 7, 5, 2, 4};
//     int n = 6;

//     mergeSort(arr, 0, n-1);
//     printArr(arr, n);
//     return 0;
// }

//                                     QUICK SORT   
// #include<iostream>
// #include<vector>
// using namespace std;

// void printArr(int arr[], int n) {
//     for(int i= 0; i <n; i++) {
//         cout << arr[i] << " ";
//     } 
// }
// int partition(int arr[], int st, int end) {
//     int pivot = arr[end];
//     int i = st-1;

//     for(int j = st; j < end; j++) {
//         if(arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[end]);
//     return i+1;
// }
// void quickSort(int arr[], int st, int end) {
//     if(st >= end) {
//         return;
//     }

//     int pivotIdx = partition(arr, st, end);

//     quickSort(arr, st, pivotIdx-1); // left half
//     quickSort(arr, pivotIdx+1, end); // right half
// }
// int main() {
//     int arr[6] = {6, 3, 7, 5, 2, 4};
//     int n = 6;

//     quickSort(arr, 0, n-1);
//     printArr(arr, n);
//     return 0;
// }

//                                    ROTATED SORT
#include<iostream>
#include<vector>
using namespace std;

int search(int arr[], int st, int end, int tar) {

    if(st > end){
        return -1;
    }
    int mid = st + (end - st)/2;
    if(arr[mid] == tar) {
        return mid;
    }

    if(arr[st] <= arr[mid]){//line1
        if(arr[st] <= tar && tar <= arr[mid]){
            //left half
            return search(arr, st, mid-1, tar);
        } else{
            //right half
            return search(arr, mid+1, end, tar);
        }
    } else {
        //line 2
        if(arr[mid] <= tar && tar <= arr[end]) {
            //right half
            return search(arr, mid+1, end, tar);
        } else{
            //left half
            return search(arr, st, mid-1, tar);
        }
    }
}
int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    
    cout << "index value : " << search(arr, 0, n-1, 4) << endl;
    return 0;
}