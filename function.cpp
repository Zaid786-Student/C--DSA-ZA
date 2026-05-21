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
#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a+b;
    return sum;
}

int diff(int a, int b){
    int diff = a-b;
    return diff;
}

int main(){
    int s = sum(2,4); // pass the values for a and b
    // passing values is known as argument
    cout << "sum = " << s << endl;
    int d = diff(4,2);
    cout << "diff = " << d;
    return 0;
}