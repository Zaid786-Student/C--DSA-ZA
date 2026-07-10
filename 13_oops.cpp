// #include<iostream>
// using namespace std;
// class student {
//     // properites of entites
//     string name; 
//     float cgpa;

//     //Method s
//     void getPercentage(){
//         cout << (cgpa * 10) <<"% \n";
//     }
// };

// class user {
//     int id;
//     string username;
//     string password;
//     string bio;

//     void deactivate() {
//         cout << "delelting account \n";
//     }
//     void editBio(string newBio){
//         bio = newBio;
//     }
// };
// int main(){
//     student s1; // object
//     cout << sizeof(s1);
//     return 0;
// }
//                                    ACCESS MODIFIERS
// #include<iostream>
// using namespace std;
// class student {
// private :
//     string name; 
// public : 
//     float cgpa;

//     void getPercentage(){
//         cout << (cgpa * 10) <<"% \n";
//     }
// };


// int main(){
//     student s1; // object
//     // s1.name  = "zaid"; //we cannot assign value if its private
//     s1.cgpa = 9.4; // we can assign values that are public
//     cout << s1.cgpa << endl;
//     s1.getPercentage();
//     return 0;
// }

//                                  GETTERS AND SETTERS 

// #include<iostream>
// #include<string>
// using namespace std;
// class student {
// private :
//     string name; 
// public : 
//     float cgpa;

//     void getPercentage(){
//         cout << (cgpa * 10) <<"% \n";
//     }
//     //setters
//     void setName(string nameVal) {
//         name = nameVal;
//     }
//     void setCgpa(float cgpaVal) {
//         cgpa = cgpaVal;
//     }
//     //getter
//     string getName() {
//         return name;
//     }
//     float getCgpa() {
//         return cgpa;
//     }
// };


// int main(){
//     student s1; // object
//     s1.setName("zaid");
//     s1.setCgpa(9.3);

//     cout << s1.getCgpa() << endl;
//     cout << s1.getName() << endl;
//     return 0;
// }
//                          CONSTRUCTORS
// #include<iostream>
// #include<string>
// using namespace std;
// class car {
//     string name;
//     string color;
// public : 
//     car() {//counstructor without parmeter
//         cout  << "cunstructor is called. object being created.. \n";
//     }
//     car(string name, string color) {//counstructor
//         cout  << "cunstructor is called. object being created.. \n";
//         this->name  = name;
//         this->color = color;
//     }
//     void start() {
//         cout << "car has started.. \n ";
//     }
//     void stop() {
//         cout << "car has stoped.. \n ";
//     }
//     //Getter 
//     string getName(){
//         return name;
//     }
// };

// int main(){
//     car c1("maruti 800","white");

//     cout << "car name : " << c1.getName() <<  endl;
//     return 0;
// }

// Prctice problem : Create a user with properties : id(private), username(public) & password (private).
// its id should be initialized in a parameterised constructor.
//It should have Getter and Setter for password
// #include<iostream>
// #include<string>
// using namespace std;
// class user {
//     string id;
//     string password;
// public : 
//     string username;
//     user(string id){
//         cout << "Id is in parametized form" << endl;
//         this -> id = id;
//     }
//     //setter
//     void setPassword(string setPassVal){
//         password = setPassVal;
//     }
//     //getter
//     string getPassword(){
//         return password;
//     }
// };
// int main() {
//     user u1("123");
//     u1.username = "zaid";
//     u1.setPassword("786");
//     cout << u1.getPassword() << endl;
//     cout << u1.username << endl;
//     return 0;
// }

//                                COPY CONSTRUCTOR AND SHALLOW COPY
// #include<iostream>
// #include<string>
// using namespace std;

// class car{
//     public :
//         string name;
//         string color;
//          SHALLOW COPY
//         int *milage; // dinamic allocation
//     car(string name, string color){
//         this -> name = name;
//         this -> color = color;
//         milage = new int; //Dynamic Allocation
//         *milage = 12;
//     }
//     car(car &original){
//         cout << "copying original to new.. \n";
//         name = original.name;
//         color = original.color;
//         milage = original.milage;
//     }
// };
// int main(){
//     car c1("maruti 800", "White");
    
//     car c2(c1); // copy constructor
//     cout << c2.name << endl;
//     cout << c2.color << endl;
//     cout << *c2.milage << endl;

//     *c2.milage = 10;

//     cout << *c1.milage << endl;
//     return 0;
// }
                    //    COPY CONSTRUCTOR AND SHALLOW COPY and DESTRUCTOR  
// #include<iostream>
// #include<string>
// using namespace std;

// class car{
//     public :
//         string name;
//         string color;
//         int *milage; // dinamic allocation
//     car(string name, string color){
//         this -> name = name;
//         this -> color = color;
//         milage = new int; //Dynamic Allocation
//         *milage = 12;
//     }
//     car(car &original){
//         cout << "copying original to new.. \n";
//         name = original.name;
//         color = original.color;
//         milage = new int;
//         *milage = *original.milage;
//     }
//     ~car(){
//         cout << "destructor called for " << name << endl;
//         if(milage != nullptr){
//             delete milage;
//             milage = nullptr;
//         }
//     }
// };
// int main(){
//     car c1("maruti 800", "White");
    
//     car c2(c1); // copy constructor
//     cout << c2.name << endl;
//     cout << c2.color << endl;
//     cout << *c2.milage << endl;

//     *c2.milage = 10;

//     cout << *c1.milage << endl;
//     return 0;
// }

//                                INHERITANCE (1) SINGLE INHERITANCE
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
// public :    
//     string color;
//     void eat() {
//         cout << "eat \n";
//     }
//     void breathe() {
//         cout << "breathe \n";
//     }
// };

// class Fish : public Animal { //Using Inherutance
// public : 
//     int fins;

//     void swim() {
//         cout << "swim \n";
//     }
// };
// int main(){
//     Fish f1;
//     f1.fins = 3;
//     cout << f1.fins << endl;
//     f1.swim();
//     f1.eat();
//     f1.breathe();
//     return 0;
// }

//                                INHERITANCE (2) MULTI-LEVEL INHERITANCE
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
// public : 
//     void eat() {
//         cout << "eats \n" ;
//     }
//     void breathe() {
//         cout << "breathe \n";
//     }
// };

// class Mammal : public Animal {
// public : 
//     string bloodType;
//     Mammal() {
//         bloodType = "warm";
//     }
// };

// class Dog : public Mammal {
// public : 
//     void tailWag() {
//         cout << "a Dog wag its tail \n";
//     }
// };
// int main(){
//     Dog d1;

//     d1.eat();
//     d1.breathe();
//     cout << d1.bloodType << endl;
//     d1.tailWag();
//     return 0;
// }

// //                                INHERITANCE (2) MULTIPLE INHERITANCE
// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
// public :
//     int salary;
//     string subject;
// };
// class Student {
// public :
//     int rollNo;
//     float cgpa;
// };
// class TA : public Teacher, public Student {
// public :
//     string name;
// };
// int main(){
//     TA ta1;
//     ta1.name = "zaid";
//     ta1.salary = 10000;
//     ta1.subject = "maths";
//     ta1.rollNo = 123;
//     ta1.cgpa = 9.3;

//     cout << ta1.name << endl;
//     cout << ta1.salary << endl; 
//     cout << ta1.subject << endl;
//     cout << ta1.rollNo << endl;
//     cout << ta1.cgpa << endl;
//     return 0;
// }

//                           HIERARCHICAL INHERITANCE
// #include<iostream>
// #include<string>
// using namespace std;

// class Animals {
// public :
//     void eat() {
//         cout << "Can Eat" << endl;
//     }
//     void breathe() {
//         cout << "Can breathe " << endl; 
//     }
// };
// class Birds : public Animals{
// public :
//     void fly() {
//         cout << "can fly \n";
//     }
// };
// class Fish : public Animals{
// public :
//     void swim() {
//         cout << "can swim \n";
//     }
// };
// class Mammals : public Animals{
// public :
//     void walk() {
//         cout << "can walk \n";
//     }
// };
// int main(){
//     Animals an1;
//     Birds b1;
//     Fish f1;
//     Mammals m1;
//     b1.fly();
//     b1.eat();
//     b1.breathe();
//     f1.swim();
//     f1.eat();
//     f1.breathe();
//     m1.walk();
//     m1.eat();
//     m1.breathe();
//     an1.eat();
//     an1.breathe();
    
//     return 0;
// }
//                      POLYMORPHISM -> COMPILE TIME POLYMORPHISM -> FUNCTION OVERLOADING

// #include<iostream>
// #include <string>
// using namespace std;

// class Print {
// public: 
//     void show(int x){
//         cout << "int : " << x << endl;
//     }
//     void show(string str) {
//         cout << "string :" << str << endl;
//         }
// };
// int main() {
//     Print obj1;
//     obj1.show(25);
//     obj1.show("zaid");
//     return 0;
// }
// //                      POLYMORPHISM -> COMPILE TIME POLYMORPHISM -> OPERATOR OVERLOADING

// #include<iostream>
// #include <string>
// using namespace std;
// class complex {
//     int real; 
//     int img;

// public :
//     complex(int r, int i) {
//         real =  r;
//         img = i;
//     }

//     void showNum() {
//         cout << real << "+" << img << "i \n";
//     }
//     //operartor over loading
//     void operator + (complex &c2){
//         int resReal = this->real + c2.real;
//         int resImg = this->img + c2.img;
//         complex c3(resReal, resImg);
//         cout << "result = " ;
//         c3.showNum();
//     }
// };

// int main() {
//     complex c1(1, 2);
//     complex c2(3, 4);

//     c1.showNum();
//     c2.showNum();
//     c1 + c2; // operator overloading
//     return 0;
// }

// //                      POLYMORPHISM -> RUN TIME POLYMORPHISM -> FUNCTION OVERRIDING

// #include<iostream>
// #include <string>
// using namespace std;

// class Parent {
// public :
//     void show() {
//         cout << "parents class show.. \n";
//     }
// };

// class Child: public Parent{
// public :
//     void show() {
//         cout << "child class show.. \n";
//     }
// };
// int main() {
//     Child child1;
//     child1.show();
//     return 0;
// }
// //                      POLYMORPHISM -> RUN TIME POLYMORPHISM -> VIRTUAL FUNCTION

// #include<iostream>
// #include <string>
// using namespace std;

// class Parent {
// public :
//     virtual void hello() {
//         cout << "parents hello.. \n";
//     }
// };

// class Child: public Parent{
// public :
//     void hello() {
//         cout << "child hello.. \n";
//     }
// };
// int main() {
//     Child child1;
//     Parent *ptr;

//     ptr = &child1;//run time binding 
//     ptr -> hello(); //virtual function
//     return 0;
// }

// //                      ABSTRACT CLASS AND PURE VIRTUAL FUNCTION

// #include<iostream>
// #include <string>
// using namespace std;

// class Shape {
// public :
//         virtual void draw(); // pure virtual function or abstract function
// };

// class Circle : public Shape {
// public : 
//     void draw() {
//         cout << "draw Circle \n";
//     }
// };

// class Square : public Shape {
// public : 
//     void draw() {
//         cout << "draw Square \n";
//     }
// };

// int main() {
//     Circle cir1;
//     cir1.draw();

//     Square squ1;
//     squ1.draw();
    
//     return 0;
// }

//                      STATIC KEYWORD

// #include<iostream>
// #include <string>
// using namespace std;

// class Example{
// public :
//     int x = 0; //normal
//     static  int y;
// };
// int Example::y = 0; //static variable initialization
// int main() {
//     Example eg1;
//     Example eg2;
//     Example eg3;
//     //WITHOUD STATIC KEY WORD
//     cout << eg1.x++ << endl; //0
//     cout << eg2.x++ << endl;//0
//     cout << eg3.x++ << endl;// 0

//     cout << eg1.y++ << endl;
//     cout << eg2.y++ << endl;
//     cout << eg3.y++ << endl;
//     return 0;
// }

//                                  STAIC OBJECTS
// #include<iostream>
// #include <string>
// using namespace std;

// class Example{
// public :
//     Example() {
//         cout << "constructor called \n";
//     }
//     ~Example() {
//         cout << "destructor called \n";
//     }
// };
// int main() {
//     int a = 0;
//     if(a == 0){
//         static Example eg1; //static object
//     }
//     cout << "end of main \n";
//     return 0;
// }

//                                  FRIEND FUCTION
#include<iostream>
#include <string>
using namespace std;

class A {
    string secret = "secret data";
    friend class B; //friend class
    friend void revealSecret(A &obj); //friend functon
};
class B {
public : 
    void showSecret(A &obj) {
        cout << obj.secret << endl;
    }
};
void revealSecret(A &obj) {
    cout << obj.secret << endl;
};
int main() {
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}