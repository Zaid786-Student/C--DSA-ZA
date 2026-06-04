// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout <<"Enter Your Age";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "Can Vote" << endl;
//     } 
//     if (age >= 45)
//     {
//         cout << "Contest for Election as well";
//     }else {
//         cout << "You Can't Vote";
//     }

    
//     return 0;
// }

//                                    CODE FOR VOTE


// #include <iostream>
// using namespace std;

// int main() {
//     float Marks;
//     cout << "Enter Your Marks in Percentage" << endl;
//     cin >> Marks;
//     if (Marks > 100)
//     {
//         cout << "Your Calculation is wrong Re-calculate your Percentage";
//     } else if (Marks >= 85)
//     {
//         cout << "Congratulations! You hvae scored a Excellent Percentage "<< endl << "Your Marks is " << Marks;
//     } else if (Marks >= 65)
//     {
//         cout << "You hvae scored a Good Marks Your Marks is " << Marks;
//     } else if (Marks >= 33)
//     {
//         cout << "Pass! Try To Score Good Marks Your Marks is " << Marks;
//     } else if (Marks < 33)
//     {
//         cout << "Fail! Better Luck Next Time Your Marks is " << Marks;
//     } 
//     return 0;
// }

/*                     FOR MARKS OR SCHOOL RESULT                                                       */

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout << "Enter A" << endl;
//     cin >> a;
//     cout << "Enter B" << endl;
//     cin >> b;
//     if (a>b)
//     {
//         cout << a << " is Largest";
//     } else {
//         cout << b << " is Largest";
//     }
    
//     return 0;
// }

//                   LARGEST NUMBER FOR 2 VARIABLE

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b,c;
//     cout << "Enter A" << endl;
//     cin >> a;
//     cout << "Enter B" << endl;
//     cin >> b;
//     cout << "Enter C" << endl;
//     cin >>c;
//     if ((a>=b)&&(a>=c))
//     {
//         cout << a << " is Largest";
//     } else if (b>=c)
//     {
//         cout << b << " is Largest";
//     }
    
//     else {
//         cout << c << " is Largest";
//     }
    
//     return 0;
// }

//                   LARGEST NUMBER FOR 3 VARIABLE
// #include <iostream>
// using namespace std;
// int main() {
//     bool isAdult;
//     int age;
//     cout << "Enter Age ";
//     cin >> age;
//     if (age >= 18)
//     {
//         isAdult =  true;
//     } else{
//         isAdult = false;
//     }
//     cout << isAdult;
//     isAdult = age >= 18? true : false;
    
//     return 0;
// }

//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it <<---- GITHUB TOKEN

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 13;
//     int b = 21;

//     int largest = a>=b? a : b;
//     cout << "Largest is " << largest;
//     return 0;
// }

//                               Largest of Two Number


// #include <iostream>
// using namespace std;
// int main() {
//     int num = 13;
//     bool isEven = num%2 == 0? true : false;
//     cout << num << "is" << isEven;
//     return 0;
// }

/*                                             SWITCH STATEMENTS SARTS HERE...                                                                */

// #include <iostream>
// using namespace std;
// int main() {
//     int day;
//     cout << "Enter Day ";
//     cin >> day;

//     switch (day) {
//         case 1 : cout << "Monday" << endl ;
//                 break;
//         case 2 : cout << "Tuesday" << endl ;
//                 break;
//         case 3 : cout << "Wednesday" << endl ;
//                 break;
//         case 4 : cout << "Thursday" << endl ;
//                 break;
//         case 5 : cout << "Friday" << endl ;
//                 break;
//         case 6 : cout << "Saturday" << endl ;
//                 break;
//         case 7 : cout << "Sunday" << endl ;
//                 break;
//                 default : cout << "Invalid Day";
//     }
//     return 0;
// }


/*                                            PRACTICE QUESTION CALCULTOR START HERE USING IF ELSE CASES ONLY                                 */

// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     int b;
//     char op;
//     cout << "Enter A" << endl;
//     cin >> a;
//     cout << "Enter B" << endl;
//     cin >> b;
//     cout << "Enter Operator" << endl;
//     cin >> op;
//     if (op == '+')
//     {
//         cout << (a+b) << endl;
//     } else if (op == '-')
//     {
//         cout << (a-b) << endl;
//     } else if (op == '/')
//     {
//         cout << (a/b) << endl;
//     } else if (op == '*')
//     {
//         cout << (a*b) << endl;
//     } else {
//         cout << "Invalid Opertor";
//     }
    
//     return 0;
// }

/*                                            PRACTICE QUESTION CALCULTOR START HERE USING SWICH CASES ONLY                                   */

// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     int b;
//     char op;
//     cout << "Enter A" << endl;
//     cin >> a;
//     cout << "Enter B" << endl;
//     cin >> b;
//     cout << "Enter Operator" << endl;
//     cin >> op;
//     switch (op)
//     {
//     case '+': cout << (a+b) << endl;
//         break;
//     case '-': cout << (a-b) << endl;
//         break;
//     case '/': cout << (a/b) << endl;
//         break;
//     case '*': cout << (a*b) << endl;
//         break;
    
//     default: cout << "INVALID OPERATOR";
//         break;
//     }
    
//     return 0;
// }
/*                         CONDITIONS AND STATEMENT ENDS HERE...                                        */


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