// #include <iostream>
// using namespace std;

// void sayHello(); // forward declaration when you want to use a  function after main function int main()
// void sayHello() {
//     cout << "Hello :)\n";
// }

// int main(){
//     sayHello(); //Function Call
//     return 0;
// }

//                    SYNTAX WITH PARAMETER
//input is parameters ex int a, int b
//output is return statement a+b in result
//in function block operation sum = a+b

// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     int sum = a+b;
//     return sum;
// }

// int diff(int a, int b){
//     int diff = a-b;
//     return diff;
// }

// int main(){
//     int s = sum(2,4); // pass the values for a and b
//     // passing values is known as argument
//     cout << "sum = " << s << endl;
//     int d = diff(4,2);
//     cout << "diff = " << d;
//     return 0;
// }

//                   WHEN YOU HAVE ONLY 1 ARGUMENT THEN FIX ONE PARAMETER BY DEFAUL VALUE OF 1

// #include<iostream>
// using namespace std;

// int sum(int a, int b=1){ // dont choose first parameter as default because argument always pick 1st value
//     int sum = a+b;
//     return sum;
// }
// int main(){
//     int s = sum(2);
//     cout << "sum is : "<< s << endl;
//     return 0;
// }

/*                    PRACTICE QUESTIONS STARTS HERE                             */
//  WAF TO FIND THE PRODUCT OF 2 NUMBER A&B

// #include<iostream>
// using namespace std;
// int multi(int a, int b) {
//     int product = a*b;
//     return product;
// }

// int main(){
//     int p = multi(2,3);
//     cout << "Product of a and b is : "<< p << endl;
//     return 0;
// }

//               WAF TO PRINT IF A NO. IS ODD OR EVEN

// #include<iostream>
// using namespace std;
// bool check(int a){
//     if (a%2 == 0){
//         cout << "the given no. is even"<< endl;
//         return true;
//     } else{
//         cout << "the given no. is odd"<< endl;
//         return false;
//     }
// }

// int main(){
//     int p = check(245);
//     cout << p << endl;
//     return 0;
// }

//                      WAF TO PRINT THE FACTORIAL NO.

// #include<iostream>
// using namespace std;
// int fact(int n){
//     int facto = 1;
//     for (int i = 1; i<=n; i++){
//         facto = facto*i;
//     }
//     return facto;
// }
// int main() {
//     cout << fact(3) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int num = 25;
// void sum(int a, int b){
//     cout << num << endl;
//     int s = a+b; // local scope
//     cout << s << endl;
// }
// int main() {
//     sum(5,4);
//     int s = 10; // local scope
//     cout << s << endl; // local scope call
//     cout << num << endl; // global scope call
//     return 0;
// }

//                            WAF TO CHECK THE NO. IS PRIME OR NOT
// #include <iostream>
// using namespace std;
// bool isPrime(int n){
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i<= n-1; i++){
//         if(n%i == 0){
//             return false;
//         } 
//     }
//     return true;
// }
// //    LOGIC 1
// bool isPrime2(int n){
//     if(n == 1){
//         return false;
//     }
//     for(int i =2; i*i <=n; i++){
//         if(n%i == 0){
//             return false;
//         } 
//     }
//     return true;
//     // LOGIC 2
// }
// int main() {
//     cout << isPrime2(23);
//     cout << isPrime(22);
//     return 0 ;
// }

//             WAF TO FIND THE BINOMIAL COEFFICIANT FOR GIVEN N & R

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact = 1;
//     for(int i =1; i <= n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int binCoeff(int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);
    
//     int result = val1/(val2*val3);  // BY BINOMIAL COEFFICIANT FORMULA 
    
//     return result;
// }
// int main() {
//     int coeff = binCoeff(3,2);
//     cout << "binary coueffient for given no. is " << coeff << endl;
//     return 0; 
// }

/*                      FINCTION OVERLOADING                                */
// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     cout << (a+b) << endl;
//     return a+b;
// }

// double sum(double a, double b){
//     cout << (a+b) << endl;
//     return a+b;
// }

// int sum(int a, int b, int c){
//     cout << (a+b+c) << endl;
//     return a+b;
// }

// int main() {
//     sum(1,2);
//     sum(1.5,2.5);
//     sum(1,2,3);
//     return 0;
// }

//         PRACTICE QUESTION: WAF TO PRINT ALL PRIME NO. FROM 2 TO N

// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i*i<=n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// void allPrime(int n){
//     // all prime no. from 2 to n
//     for(int i=2; i<=n; i++){
//         if(isPrime(i)){ // true
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main() {
//     allPrime(100);
//     return 0;
// }

//                  HOMEWORK QUESTIONS STARTS HERE
//         WAF TO CHECK IF A NO. IS PALINDROME OR NOT
// #include<iostream>
// using namespace std;
// int revrese(int n){
//     int revNumber = 0;

//     while (n>0)
//     {
//         int lastDig = n%10;
//         revNumber = revNumber*10 + lastDig;
//         n = n/10;
//     }
//     return revNumber;
// }

// bool isPalindrome(int num){
//     int revNum = revrese(num);
//     if (revNum == num)
//     {
//         return true;
//     } else{
//         return false;
//     }
    
// }int main() {
//     cout << isPalindrome(125);
//     cout << isPalindrome(121);
//     return 0;
// }

//         WAF TO CALCULATE THE SOME OF DIGITS OF A NO.

// #include<iostream>
// using namespace std;
// int digSum(int n){
//     int sum = 0;
//     while (n > 0)
//     {
//         int lasDig = n%10;
//         sum = sum + lasDig;
//         n = n/10;
//     }
    
//     return sum;
// }
// int main(){
//     cout << "The sum of given digits are : " << digSum(456);
// }

//              WAF TO GET THE OUTPUT a^2+b^2+2*a*b USING 2 PARAMETER a & b
// #include<iostream>
// using namespace std;
// int cal(int a, int b){
//     int output = (a*a)+(b*b)+(2*a*b);
//     return output;
// }
// int main() {
//     cout << "Square of a+b is :" << cal(2,3);
//     return 0;
// }

//    WAF TO ACCEPT A CHARACTER AS PARAMETER AND RETURN NEXT CHARACTER AS RESULT/OUTPUT
// #include<iostream>
// using namespace std;
// char alpha(char ch){
//     if(ch == 'z'){
//         return 'a'; // if the input is z or Z then return the same character
//     }
//     if(ch == 'Z'){
//         return 'A';
//     }
//     char newChar = ch +1;
//     return newChar;
// }
// int main() {
//     char ch;
//     cout << "Enter a character" << endl;
//     cin >> ch;
//     cout << "The next character will be "<< alpha(ch);
//     return 0;
// }



//                          BINARY NO. SYSTEM
//                           BINARY TO DECIMAL
// #include<iostream>
// using namespace std;
// int binToDec(int n){
//     int decNum = 0;
//     int power = 1; // 2^0 = 1
//     while (n > 0)
//     {
//         int lastDig = n%10;
//         decNum = decNum + lastDig*power;
//         power = power*2; // power of 2 increases by 1 in each iteration
//         n = n/10;
//     }
//     return decNum;
// }
// int main() {
//     int n;
//     cout << "Enter a binary no. : " << endl;
//     cin >> n;
//     cout << "The decimal no. is : " << binToDec(n) << endl;
//     return 0;
// }

//                           DECIMAL TO BINARY
#include<iostream>
using namespace std;
int decToBin(int decimal){
    int n = decimal;
    int power = 1; //10^0 = 1
    int binNum = 0;

    while (n > 0)
    {
        int lastDig = n%2;
        binNum = binNum + lastDig*power;
        n = n/2;
        power = power*10;
    }
    cout << binNum;
    
}
int main(){
    decToBin(20);
    return 0;
}