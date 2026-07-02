//                                        2D DYNAMIC ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int rows, cols;
//     cout << "Enter rows : ";
//     cin >> rows;
//     cout << "Enter cols : ";
//     cin >> cols;

//     int* *matrix = new int*[rows];

//     for(int i = 0; i<rows; i++){
//         matrix[i] = new int[cols];
//     }

//     //data store
//     int x = 1;
//     for(int i = 0; i < rows; i++){
//         for(int j=0; j < cols; j++){
//             matrix[i][j] = x++;
//             cout << matrix[i][j]<< " ";
//         }
//         cout << endl;
//     }

//     cout << matrix[2][2];
//     cout << *(*(matrix+2)+2);
//     return 0;
// }

// //                          declaration of vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec1;
//     vector<int> vec2 = {1,2,3,4};
//     vector<int> vec3(5, -1);
//     // cout << vec1.size() << "\n";  //size is zero because we havn't allocated the value
//     // cout << vec2.size() << "\n";
//     // cout << vec3.size() << "\n";
//     // FOR ACCESSING THE VALUE OF VECTOR
//     for(int i= 0; i<vec3.size(); i++){
//         cout << vec3[i];
//     }
//     return 0;
// }
//                          Addition of new elemenet in vector
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec1 ={1,2,3,4};
//     cout << vec1.size() << endl;//size  4
//     cout << vec1.capacity() << endl;//capacity 4
//     //for adding element
//     vec1.push_back(5);
//     cout << vec1.size() << endl;//size 5
//     cout << vec1.capacity() << endl;//capacity gone double 8
//     //for delete the element from vector
//     vec1.pop_back(); //last element will be deleted
//     cout << vec1.size() << endl;//size decerease to 4
//     cout << vec1.capacity() << endl;//capacit will be same one build 8
//     return 0;
// }
//PROBLEM QUESTION                      PAIR SUM 2pointer approach
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> arr, int target){
//     int st = 0, end = arr.size()-1;
//     int currSum =0;
//     vector<int> ans;
//     while(st < end){
//         currSum = arr[st] + arr[end];
//         if(currSum == target){
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans; 
//         } else if(currSum > target){
//             end--;
//         }else{
//             st++;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> vec = {2,7,11,15};
//     int target = 9;
//     vector<int> ans = pairSum(vec, target);
//     cout << ans[0] << ", " << ans[1];
//     return 0;
// }
//                                      2D VECTOR
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> matrix = {{1,2,3}, {4,5,6},{7,8,9}};

    for(int i = 0; i <matrix.size(); i++){
        for(int j=0; j < matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}