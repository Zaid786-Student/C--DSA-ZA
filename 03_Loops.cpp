/*                                      LOOPS STARTS HERE...                                            */


// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     for(num=1; num<=100; num++) {
//         cout << num  << " ";
//     }
//     cout << endl;
//     cout << num << "LOOP END";   
//     return 0;
// }

//                       Loop for print name according to my choice number
// #include <iostream>
// using namespace std;
// int main() {
//     string text;
//     cout << "Enter Something to print :";
//     cin >> text;
//     for(int i =1; i<=5; i++) {
//         cout << text << endl;
//     }
//     return 0;
// }

//                       loop for print name according to user's choice number
// #include <iostream>
// using namespace std;
// int main() {
//     string text;
//     int times;
//     cout << "Enter Something to print :";
//     cin >> text;
//     cout << "Enter how many times you want to print :";
//     cin >> times;
//     for(int i =1; i<= times; i++) {
//         cout << text << endl;
//     }
// }

//                    print a number till N

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter till how many times you want to print :";
//     cin >> n;
//     for(int i =1; i<= n; i++) {
//         cout << i << " ";
//     }
// }

//                                       SUM OF N NO.
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter till how many times you want to print :";
//     cin >> n;
//     int sum = 0;
//     for(int i =1; i<= n; i++) {
//         sum = sum + i;
//     }
//     cout << "Sum = " << sum ;
// }

//                          while loops Start here


// #include <iostream>
// using namespace std;
// int main() {
//     int count =1;
//     while(count < 13){
//         cout << "Apna College" << endl;
//         count ++;
//     }
//     return 0;
// }


//                         Print Square Using Stars Only

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     for(n = 1; n<=4; n++){
//         cout << "****" << endl;
//     }
//     return 0;
// }

//                       Print Number From N to 1

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n ;
//     for(n; n>=1; n--){
//         cout << n << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n ;
//     for(n; n>=1; n--){
//         cout << n << endl;
//     }
//     return 0;
// }

//                              PRACTICE QUESTIONS STARTS HERE

//                Print the sum of digits of number using While loop
// Number is 10829
// #include <iostream>
// using namespace std;
// int main() {
//     int i = 12345;
//     int digSum = 0;
//     while(i >0 ) {
//         int lastDig = i%10;
//         digSum += lastDig;
//         i = i/10;

//         // int sum+= lastDig;
//         // i = i/10;
//     }
//     cout << "Sum Of all digit is " << digSum <<endl;
//     return 0;
// }

//                Print the sum of odd digits of number using While loop

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10829;`
//     int oddDigSum = 0;
//     while(n > 0) {
//         int lastDig = n%10;
//         if (lastDig %2 != 0){
//             oddDigSum += lastDig;
//         }
//         n = n / 10;
//     }
//     cout << "Sum = "<< oddDigSum << endl;
//     return 0;
// }

//                Print the digits of a given number in reverese using While loop
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 12345;
//     while(n > 0) {
//         int i = n%10;
//         cout << i << "";
//         n = n/10;
//     }
//     return 0;
// }

//                Print the digits of a given number in reverese using While loop


// #include <iostream>
// using namespace std;
// int main() {
//     int n = 12345;
//     int result = 0;
//     while(n > 0) {
//         int lastDig = n%10;
//         result = result*10 + lastDig;
//         n = n/10;
//     }
//     cout << result << endl;
//     return 0;
// }

/*                         WHILE LOOP ENDS HERE                                                       */
/*                        DO WHILE LOOP STARTS HERE                                                       */

// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     do{
//         cout << i << " ";
//         i++;
//     }while(i<=5);
//     return 0;
// }

//                             BREAK STATEMENT
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     while(i<=10){
//         if (i == 3) {
//             break;
//         }
//         cout << i << " ";
//         i++;
//     }
//     cout << "out of loop now" << endl;
//     return 0;
// }

//       PRACTICE QUESTION : WAP where user can keep ntering numbers till they enter a multiple of 10

// #include <iostream>
// using namespace std;
// int main() {
//     int userInput;
//     do{
//         cout << "Enter a Number" << endl;
//         cin >> userInput;
//         if(userInput % 10 == 0){
//             break;
//         }
//         cout << "You Entered "<< userInput << endl;
//     } while(true);

//     return 0;
// }

//                                     CONTINUE STATEMENT

// #include <iostream>
// using namespace std;
// int main() {
//     for(int i =1; i<=10; i++){
//         if(i == 3){
//             continue;
//         }
//         cout << i << endl;
//     }
//     return 0;
// }
//          Everything is print except 3

//  PRACTICE QUESTION : WAP to show entered no. by user except multiple of 10.

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     while (true){
//         cout << "Enter Your Number"<< endl;
//         cin >> n;
//         if(n % 10 == 0) {
//             continue;
//         } 
//         cout << "You Entered " << n << endl;
//     }
//     return 0;
// }


//                           CHECKING THE NUMBER IS PRIME OR NOT

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter No. " << endl;
//     cin >> n;
//     for(int x= 2; x <= n-1; x++){
//         if(n%x == 0) { // x is a factor of n , x is non prime, x completely devide x
//             cout << "The Given No. is composite (Not Prime) " << n << endl;
//             return 0;
//         } 
//     }
//     cout << n << " Given No. is Prime";
//     return 0;
// }

//                           CHECKING THE NUMBER IS PRIME OR NOT IN DIFFERENT WAY


#include <iostream>
#include <cmath> // for sqrt function 
using namespace std;

int main() {
    int n = 17;
    bool isPrime = true;
    for(int x= 2; x <= sqrt(n); x++){
        if(n % x == 0) { // x is a factor of n , x is non prime, x completely devide x
            isPrime = false;
            break;
        } 
    }
    if(isPrime){
        cout << n << " Given No. is Prime";
    } else {
        cout << "The Given No. is composite (Not Prime) " << n << endl;
    }
    return 0;
}