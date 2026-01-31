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

#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    char op;
    cout << "Enter A" << endl;
    cin >> a;
    cout << "Enter B" << endl;
    cin >> b;
    cout << "Enter Operator" << endl;
    cin >> op;
    switch (op)
    {
    case '+': cout << (a+b) << endl;
        break;
    case '-': cout << (a-b) << endl;
        break;
    case '/': cout << (a/b) << endl;
        break;
    case '*': cout << (a*b) << endl;
        break;
    
    default: cout << "INVALID OPERATOR";
        break;
    }
    
    return 0;
}