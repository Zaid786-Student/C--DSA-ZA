// #include <iostream>
// using namespace std;

// int main () {
//     cout << "Zaid\nKhan" ;
//     return 0;
// }


//Boiler Plate code

// #include <iostream>
// using namespace std;
// int main () {
//     int age = 18;
//     char grade = 'a';
//     float PI = 3.14f;
//     bool isSafe = true;
//     double price = 100.99;
//     cout << "age is :" << age << endl ;
//     cout << grade << endl;
//     cout << PI << endl;
//     cout << isSafe << endl;
//     cout << price ;
//     return 0;
// }


                                            // VARIABLES                          

// #include <iostream>
// using namespace std;
// int main() {
//     char grade = 'a';

//     int value = grade;
//     cout << value << endl;
//     return 0;
// }

                                    // IMPLICIT CONVERSION OF dATA TYPE


// #include <iostream>
// using namespace std;
// int main() {
//     double price = 100.990796;

//     int newPrice = (int)price;
//     cout << newPrice << endl;
//     return 0;
// }
                                    // EXPLICIT CONVERSION OF dATA TYPE 

// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter the age : " ;
//     cin >> age;
//     cout << "YOur age is : " << age;
//     return 0;
// }
                                    // CIN HOW TO TAKE INPUTS

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 126 , b = 25;
//     cout << "Sum is :" << (a+b) << endl;
//     cout << "Difference is :" << (a-b) << endl;
//     cout << "Multiplication is :" << (a*b) << endl;
//     cout << "Division is :" << (a/(float)b) << endl;
//     cout << "modulo is :" << (a%b);
//     return 0;
// }
                                    // ARITHMETIC OPERATIONS ENDS HERE..
                                    
// #include <iostream>
// using namespace std;
// int main() {
    
//     cout << (3 < 5) << endl; //true --> 1
//     cout << (3 > 5) << endl; //False --> 0
//     cout << (3 <= 5) << endl; //true --> 1
//     cout << (3 >= 5) << endl; //False --> 0
//     cout << (3 == 5) << endl; //False --> 0
//     cout << (3 != 5) << endl; //true --> 1
//     return 0;
// }
                                    // RELATIONAL OPERATIONS ENDS HERE..

// #include <iostream>
// using namespace std;
// int main() {
    
//     cout << !(3 < 5) << endl; //False --> 0
//     cout << ((3 > 5) || (3 <= 5)) << endl; //True --> 1
//     cout << ((3 > 5) && (3 <= 5)) << endl; //False --> 0
//     cout << ((3 < 5) && (3 <= 5)) << endl; //True --> 1
//     return 0;
// }

                                    // LOGICAL OPERATIONS ENDS HERE..

// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cout << "Enter a :" ;
//     cin >> a;
//     cout << "Enter b :" ;
//     cin >> b;

//     cout << "Sum of " << a << " and " << b << " is " << (a+b);
//     return 0;
// }
                                    // QUESTION 1 SUM OF 2 NO. ENDS HERE..

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = ++a; // pahle  kaam phir update
    cout << "b is : " << b;
    cout << "a is : " << a;
    int c = 9;  
    int d = c++; //pahle update phir kaam
    cout << "c is : " << c;
    cout << "d is : " << d;
    return 0; 
}