// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     // Print the elements of the 2D array
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << arr[1][2] << endl; // Accessing a specific element (7)
//     return 0;
// }

//                                   INPUT AND OUTPUT OF 2D ARRAY
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][4] ;

//     // Print the elements of the 2D array  
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << "Enter the element of Index " << i+1 << j+1 << " " ;
//             cin >> arr[i][j];
//         }
//     }

//     // Print the elements of the 2D array
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j <4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//                                      SPIRAL MATRIX
// #include <iostream>
// using namespace std;

// void spiralMatrix(int matrix[][4], int n, int m){

//     int stCol = 0;
//     int endCol = m-1;
//     int stRow = 0;
//     int endRow = n-1;
//     while(stCol <= endCol && stRow <= endRow){
//     //top 
//     for(int j = stCol; j <= endCol; j++){
//         cout << matrix[stRow][j] << " ";
//     }
//     //right 
//     for(int i = stRow+1; i <= endRow; i++){
//         cout << matrix[i][endCol] << " ";
//     }
//     //bottom 
//     for(int j = endCol-1; j >= stCol; j--){
//         if(stRow == endRow) {
//             break;
//         }
//         cout << matrix[endRow][j] << " ";
//     }
//     //left
//     for(int i = endRow-1; i >= stRow+1; i--){
//         if(stCol == endCol) {
//             break;
//         }
//         cout << matrix[i][stCol] << " ";
//     }
//     stCol++;
//     stRow++;
//     endCol--;
//     endRow--;
// }
// }
// int main() {
    // int matrix[4][4] = {{1,2,3,4},
    //                     {5,6,7,8},
    //                     {9,10,11,12},
    //                     {13,14,15,16}};
//     spiralMatrix(matrix, 4, 4);
//     return 0;
// }

//                                      DIAGONAL SUM
//                                  TIME COMPLEXITY OF O(N^2)
// #include<iostream>
// using namespace std;
// void diagonalSum(int matrix[][3], int n, int m){
//     int primaryDiagonalSum = 0;
//     int secondaryDiagonalSum = 0;
//     int commanIndex = 0;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(i == j){
//                 primaryDiagonalSum += matrix[i][j];
//             }
//             if(j == n-i-1){
//                 secondaryDiagonalSum += matrix[i][j];
//             }
//             if((i == j) && (j == n-i-1)){
//                 commanIndex += matrix[i][j];
//             }
//         }
//     }

//     int totalSum = primaryDiagonalSum + secondaryDiagonalSum - commanIndex;
//     cout << "Diagonal Sum is " <<  totalSum << endl;
//     cout << "Primary Diagonal Sum is " <<  primaryDiagonalSum << endl;
//     cout << "Secondary Diagonal Sum is " <<  secondaryDiagonalSum << endl;
// }
// int main(){
//     int matrix[4][4] = {{1,2,3,4},
//                         {5,6,7,8},
//                         {9,10,11,12},
//                         {13,14,15,16}};
//     int matrix2[3][3] = {{1,2,3},
//                         {4,5,6},
//                         {7,8,9}};
//     // diagonalSum(matrix, 4, 4);
//     diagonalSum(matrix2, 3, 3);
//     return 0;
// }

//                                      DIAGONAL SUM
//                                  TIME COMPLEXITY OF O(N)

// #include<iostream>
// using namespace std;
// int diagonalSum(int matrix[][3], int n){ //n*n matrix
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += matrix[i][i];
//         if(i != n-i-1){
//             sum +=matrix[i][n-i-1];
//         }
//     }
//     cout << "sum = " << sum << endl;
//     return sum;
// }
// int main(){
//     int matrix[4][4] = {{1,2,3,4},
//                         {5,6,7,8},
//                         {9,10,11,12},
//                         {13,14,15,16}};
//     int matrix2[3][3] = {{1,2,3},
//                         {4,5,6},
//                         {7,8,9}};
//     // diagonalSum(matrix, 4, 4);
//     diagonalSum(matrix2, 3);
//     return 0;
// }

//                        SEARCHING THROUGH BRUTEFORCE APPROACH FOR SORTED MATRIX
//              TIME COMPEXITY WILL BE O(n*m)
// #include<iostream>
// using namespace std;
// void searchKey(int matrix[][4],int n, int m, int key){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(matrix[i][j] == key){
//                 cout << "Searching key is in index "<< i+1 << "," << j+1 << endl;
//                 break;
//             }
//         }
//     }
// }
// int main(){
//     int matrix[4][4] = {{10,20,30,40},
//                         {15,25,35,45},
//                         {27,29,37,48},
//                         {32,33,39,50}};
//     int key= 30;
//     searchKey(matrix, 4, 4, key);
//     return 0;
// }

//                        SEARCHING THROUGH ROWWISE/COLUMNWISE BINARY SEARCH FOR SORTED MATRIX
//              TIME COMPEXITY WILL BE O(nlogm) OR O(mlogn)
// #include<iostream>
// using namespace std;
// int binarySearch(int matrix[][4], int n, int m, int key){
//     for(int i = 0; i < n; i++){
//         int st = 0;
//         int end = m-1;
//         while(st <= end){
//             int mid = st + (end-st)/2;
//             if(matrix[i][mid] == key){
//                 cout << "Searching key is in index "<< i+1 << "," << mid+1 << endl;
//                 return 1;
//             }
//             else if(matrix[i][mid] > key){
//                 end = mid-1;
//             }
//             else{
//                 st = mid+1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int matrix[4][4] = {{10,20,30,40},
//                         {15,25,35,45},
//                         {27,29,37,48},
//                         {32,33,39,50}};
//     int key= 30;
//     binarySearch(matrix, 4, 4, key);
//     return 0;
// }

//                      SEARCHING THROUGH STAIRCASE SEARCH FOR SORTED MATRIX
//              TIME COMPEXITY WILL BE O(n+m)
// #include<iostream>
// using namespace std;
// void stairSearch(int matrix[][4], int n, int m, int key){
//     int i = 0,  j = m-1;
//     while(i<n && j>=0){
//         if(matrix[i][j] == key){
//             cout << "Searching key is in index "<< i+1 << "," << j+1 << endl;
//             break;
//         } else if(matrix[i][j] < key){
//             i++;
//         } else if(matrix[i][j] >=0){
//             j--;
//         }
//     }
//     if(matrix[i][j] !=key){
//         cout << "key not found" << endl;
//     }
// }
// int main(){
    // int matrix[4][4] = {{10,20,30,40},
    //                     {15,25,35,45},
    //                     {27,29,37,48},
    //                     {32,33,39,50}};
//     int key= 50;
//     stairSearch(matrix, 4, 4, key);
//     return 0;
// }

//                              MATRIX POINTER
#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};
    cout << matrix  << " =" << matrix[0][0] << endl;
    cout << matrix +1 << " !=" << matrix[0][1]<< endl;// row ++ in each +1 not a single element
    cout << matrix +1 << " =" << matrix[1][0]<< endl;// row ++ in each +1
    cout << "the adress of matrix+1 " << matrix+1 <<  "is equal to matrix[1][0]" << &matrix[1][0];
    return 0;
}