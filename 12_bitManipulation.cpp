// //                      BASIC BITWISE OPERATOR
// #include<iostream>
// using namespace std;

// int main() {
//     cout << (3 & 5) << endl; //Bitwise AND
//     cout << (3 | 5) << endl;//Bitwise OR
//     cout << (3 ^ 5) << endl;//Bitwise Ex-OR
//     cout << (~6) << endl;// Biinary Not 
//     cout << (7 >> 2) << endl;//Bitwise left shift
//     return 0;
// }

//                      check odd even using BITWISE OPERATOR
// #include<iostream>
// using namespace std;

// void oddEven(int num){
//     if((num & 1) == 0){
//         cout << "The given No. is even"<<endl;
//     } else if ((num & 1) == 1){
//         cout << "The given No. is odd"<<endl;
//     }
// }
// int main() {
//     int num;
//     cout << "Enter a Num" << endl;
//     cin >> num;
//     oddEven(num);
//     return 0;
// }

//                      GET THE ITH BIT
// #include<iostream>
// using namespace std;
// int getIthBit(int num , int i){
//     int bitMask = 1 << i;

//     if((num & bitMask) == 0){
//         return 0;
//     }else{
//         return 1;
//     }
// }
// int main() {
//     cout << getIthBit(6,2);
//     return 0;
// }

// //                                  SET THE ITH BIT
// #include<iostream>
// using namespace std;
// int setIthBit(int num , int i){
//     int bitMask = 1 << i;
//     return (num | bitMask);
    
// }
// int main() {
//     cout << setIthBit(6,3);
//     return 0;
// }

//                                  CLEAR THE ITH BIT
// #include<iostream>
// using namespace std;
// int clearIthBit(int num , int i){
//     int bitMask = ~(1 << i);
//     return (num & bitMask);
    
// }
// int main() {
//     cout << clearIthBit(6,2);
//     return 0;
// }

//Problem                       check the Power of 2
// #include<iostream>
// using namespace std;
// bool checkPowerOf2(int num){
//     if(!(num & (num-1))){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main() {
//     cout << checkPowerOf2(16) << endl;
//     cout << checkPowerOf2(13) << endl;
//     return 0;
// }

// //PRACTICE PROBLEM :WAF TO UPDATE THE BIT IN A NUMBER ACCORDING TO GIVEN VALUE (0 or 1);
// #include<iostream>
// using namespace std;

// void updateIthBit(int num, int i, int val){
//     num = num & ~(1 << i); // for clear ith bit

//     num = num | (val << i); //for update
//     cout << num << endl;
// }

// int main(){
//         updateIthBit(7, 2, 0);
//         updateIthBit(7, 3, 1);
//     return 0;
// }

//PRACTICE PROBLEM :WAF TO CLEAR LAST I BITS OF A NUMBER
// #include<iostream>
// using namespace std;

// void clearBits(int num, int i){
//     num = num & (~(0) << i);
//     cout << num << endl;
// }

// int main(){
//     clearBits(15, 2); //ans = 12
//     return 0;
// }
// //PRACTICE PROBLEM :WAF TO count SET BITS OF A NUMBER
// #include<iostream>
// using namespace std;

// void countSetBits(int num){
//     int count = 0;

//     while(num > 0){
//         int lastDig =  num & 1;
//         count += lastDig;

//         num = num >> 1;
//     }
//     cout << count << endl;
// }

// int main(){
//     countSetBits(10);
//     return 0;
// }

//PRACTICE PROBLEM :WAF TO FIND THE POWER OF NO. USING FAST EXPONENTIATION
#include<iostream>
using namespace std;

void fastExpo(int x, int n){
    int ans = 1;

    while(n > 0){
        int lastBit = n &1; 
        if(lastBit){
            ans= ans * x;
        }
        x = x*x;
        n = n >> 1;
    }
    cout << ans<< endl;
}

int main(){
    fastExpo(3, 4);
    return 0;
}