//                           Finding the position of character
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main() {
//     char ch = 'f'; 
//     int position = ch - 'a';
//     cout << position << endl; // five
//     return 0;
// }
//                      CHARACTER ARRAY
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main() {
//     char str[5] = {'a', 'b', 'c', 'd', 'e'};
//     cout << str[0] << endl;
//     cout << str[1] << endl;
//     cout << str[2] << endl;
//     cout << str[3] << endl;
//     cout << str[4] << endl;
//     return 0;
// }
//                      STRINGS AND STRING LITERALS
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main() {
//     char arr[5] = {'c', 'o', 'd', 'e', '\0'};
//     cout << arr << endl; // here arr will fetch the values not the address beccause it is char array
//     "apna collge";// string lateral 
//     "hello world";// string lateral 
//     "a"; // string lateral means a fix value that cannot be changed
//     return 0;
// }
// #include<iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     char str[50] = {'c', 'o', 'd', 'e', '\0'};
//     cout << str <<endl;
//     cout << strlen(str);// USE FOR STRING LENGTH
//     return 0;
// }

//                          INPUT FOR CHAR ARRAY
// #include<iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     // char  word[10]; // we can give all index value at once it will auto convert it into index in array
//     // cin >> word; // ignore whitespace
//     // cout << "Your word was : " << word << endl;

//     char sentence[100];
//     cin.getline(sentence, 100); // it will take input with whitespace
//     cout << "Your sentence was : " << sentence << endl;
//     cout << strlen(sentence);
//     return 0;
// }
//PRACTICE PROBLEM                     CONVERT TO UPPER CASE
// #include<iostream>
// #include <cstring>
// using namespace std;
// void toUpper(char word[], int n){
//     for(int i =0; i <n; i++){
//         char ch = word[i];
//         if(ch >= 'A' && ch <= 'Z' ){ //Checking whether letter is is upper case or not
//             continue;
//         } else{//lowercase
//             word[i] = ch -'a' +'A';
//         }
//     }
// }
// int main(){
//     char word[] = "ApplE";
//     toUpper(word, strlen(word));
//     cout << word;
//     return 0;
// }
// PRACTICE PROBLEM                     CONVERT TO LOWER CASE
// #include<iostream>
// #include <cstring>
// using namespace std;
// void toLowerCase(char word[],int n){
//     for(int i = 0; i<n; i++){
//         char ch = word[i];
//         if(ch >= 'a' && ch <= 'z'){
//             continue;
//         }else{
//             word[i] = ch - 'A' + 'a';
//         }
//     }
// }
// int main(){
//     char word[] = "ApPlE";
//     toLowerCase(word, strlen(word));
//     cout << word;
//     return 0;
// }

// PRACTICE PROBLEM                    REVERSE THE ARRAY
// #include<iostream>
// #include <cstring>
// using namespace std;
// //METHOD 1
// // char* reverseCharArray(char word[], int n){
// //     int st = 0;
// //     int end = n-1;
// //     for(int i = 0; i < n; i++){
// //         if(st < end){
// //         swap(word[st], word[end]);
// //         st++;
// //         end--;
// //         }else{
// //             break;
// //         }
// //     }
// //     cout << word;
// //     return word;
// // }
// // METHOD 2
// // void reverseCharArray(char word[], int n){
// //     int st = 0;
// //     int end = n-1;
// //     for(int i = 0; i < n; i++){
// //         if(st < end){
// //         swap(word[st], word[end]);
// //         st++;
// //         end--;
// //         }else{
// //             break;
// //         }
// //     }
// //     cout << word;
// // }
// void reverseCharArray(char word[], int n){
//     int st = 0;
//     int end = n-1;
//     while (st < end){
//         swap(word[st], word[end]);
//         st++;
//         end--;
//     }
    
//     cout << word;
// }
// int main(){
//     char word[]  = "code";
//     reverseCharArray(word, strlen(word)); 
//     return 0;
// }

// PRACTICE PROBLEM                    REVERSE THE ARRAY
// #include<iostream>
// #include <cstring>
// using namespace std;
// bool isPalindrome(char word[], int n){
//     int st =0, end = n-1;
//     while(st < end){
//         if(word[st] != word[end]){
//             cout << "Not a Palindrome";
//             return false;
//         } else{
//             st++;
//             end--;
//         }
//     }
//     cout << word << " Is palindrome";
//     return true;
// }
// int main(){
//     char word[]  = "racecar";
//     isPalindrome(word, strlen(word));
//     return 0;
// }

//                          <cstring> FUNCTIONS
// #include<iostream>
// #include <cstring>
// using namespace std;
// int main(){
//     char str1[100] = "Hello world";
//     char str2[100] = "Hello world";
//     // str1 = "apna college" // we cannot assign direct string into char array
//     // strcpy(str1, "apna college");// we use strcpy funtion for this implementation
//     // cout << str1 << endl;
//     // strcpy(str1,str2);//copy the value form second string to 1st string
//     // cout << str1 << endl;
//     // strcat(str1,str2); // to join or concatinate 2 string in one 
//     // cout << str1 << endl; // str2 will merge on str1
//     cout << strcmp(str1,str2) << endl;
//     return 0;
// }
//                                        STRING CLASS
// #include<iostream>
// #include <string>
// using namespace std;
// int main(){
//     // string str = "hello";
//     // cout << str << endl;

//     // str = "yellow";
//     // cout << str << endl;
//     string str;
//     getline(cin, str, '$'); //for include white spaces
//     cout << str;
//     return 0;
// }
// //                                  for each loop in STRING CLASS
// #include<iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str = "Apna Colloge";
//     //NORMAL FOR LOOP TO ACCESS THE VALUE
//     // for(int i = 0; i < str.length(); i++){
//     //     cout << str[i] << " ";
//     // }
//     //For each
//     for(char ch : str){
//         cout << ch << ",";
//     }
//     return 0;
// }
//                                  Member Function in STRING CLASS
// #include<iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str = "I like to do coding in c++";
    
//     cout << str.length() << endl;
//     cout << str[3] << endl;
//     cout << str.at(3) << endl; //same as 2nd one
//     cout << str.substr(4, 5) << endl;
//     cout << str.find("c++");
//     return 0;
// }
//PROBLEM QUESTION                      CHECK THE 2 WORDS ARE ANAGRAMS OR NOT
#include<iostream>
#include <string>
using namespace std;
bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout << "not a valid anagram" << endl;
        return false;
    }

    int count[26] = {0};
    for(int i = 0; i <str1.length(); i++){
        int idx = str1[i]-'a';
        count[idx]++;
    }
    for(int i = 0; i <str2.length(); i++){
        int idx = str2[i]-'a';
        if(count[idx] == 0){
            cout << "not a valid anagram" << endl;
            return false;
        }
        count[idx]--;
    }
    
    cout << "valid anagram" << endl;
    return true;
}
int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    
    isAnagram(str1, str2);
    return 0;
}