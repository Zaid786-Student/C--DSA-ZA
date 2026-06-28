// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *ptr=&a;

//     float pi = 3.14;
//     float *ptr2 = &pi;

//     cout << sizeof(ptr) << "\n"; // int pointer size
//     cout << sizeof(ptr2) << "\n"; // float pointer size
//     // cout << &pi << "=" << ptr2 << "\n";


//     // cout<<"Value of a is "<<a<<endl;
//     // cout<<"Address of a is "<<&a<<endl;
//     // cout<<"Value of ptr is "<<ptr<<endl;
//     // cout<<"Value at address ptr is "<<*ptr<<endl;

//     return 0;
// }

//                          STORING POINTER ADDRESS IN POINTER
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *ptr=&a;

//     int **pptr = &ptr;
//     cout << &ptr << "=" << pptr << "\n";

//     return 0;
// }
//                                  DEREFERENCE OPERATOR
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int *ptr = &a; 
//     cout << &a << "\n";
//     cout << *(&a) << "\n"; // GETTING THE VALUE OF ADDRESS USING DEREFERENCE ADDRESS "*"
//     cout << *ptr << "\n"; // IN TERMS OF DIFFERENT VARIABLE PTR

//     *ptr = 20;
//     cout << a; // WE CAN CHANGE THE VALUE OF A THROUGH DEREFERENCE OPERATOR
//     return 0;
// }

//                          PASSING ARGUMENT(VALUE VS REFERENCE)

//                          PASSING ARGUMENT BY VALUE
//                      ORIGINAL VALUE IS REMAINS UNCHANGED AND ONE COPY IS MADE
// #include<iostream>
// using namespace std;

// void changeA(int a) {
//     a = 20;
//     cout << a << endl;
// }
// int main()
// {
//     int a = 10;
//     changeA(a);

//     cout << a << endl;
//     return 0;
// }

//                              PASS BY REFRENCE
// #include<iostream>
// using namespace std;
// void changeA(int *ptr){
//     *ptr = 20;
//     cout << *ptr << endl;
// }

// int main()
// {
//     int a = 10;
//     changeA(&a);

//     cout << a << "\n";
//     return 0;
// }

//                          REFERENCE VARIABLE
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int &b = a; // REFERENCE VARIABLE
//     b = 30; // CHANGE IN REFERENCE VALUE B LEADS TO CHANGE IN A AUTOMATICALLY
//     cout << a << " this is A" << endl;
//     cout << b << " this is B" << endl;
//     return 0;
// }
//              PASS BY REFERENCE USING REFERENCE VARIABLE

// #include <iostream>
// using namespace std;

// void changeA(int &a) {
//     a = 20;
//     cout << a << endl;
// }

// int main(){
//     int a = 10;
//     changeA(a);

//     cout << a << endl;
//     return  0;
// }

//                          PASS BY REFERENCE USING REFERENCE VARIABLE WITH MULTIPLE ARGUMENTS  
//                          HOMEWORK ASSIGNMENT 1

// #include <iostream>
// using namespace std;

// void multipleBy2(int &a, int &b, int &c){
//     a *= 2;
//     b *= 2;
//     c *= 2;
// }
// int main(){
//     int x= 1, y = 2, z= 3;
//     multipleBy2(x,y,z);
//     cout << x << y << z << endl;
//     return 0 ;
// }

#include <iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho += a; // 'A' + 32 = 65 + 32 = 97 = 'a'
    *ptr += ch; // 32 + 'a' = 32 + 97 = 129
    cout << a << " " << ch << endl; // 129 a
    return 0 ;
}

//                           POINTERS ENDS HERE....