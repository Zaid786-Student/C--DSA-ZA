//                              patterns Start

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 15;
//     for(int i=1; i <=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/* pattern 1          
1111
2222
3333
4444
*/

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 7;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*              STAR PATTERN

****
***
**
*                                                                   */

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for(int i = 1; i<=n; i++){
//         for(int j=1; j <=(n-i+1); j++){
//             cout  << "* ";
//         }
//         cout << endl;
//     }
// }

//                                STAR PATTERN

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for(int i = 1; i <=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

//                                  HALF PYRAMID PATTERNS

// #include <iostream>
// using namespace std;
// int main() {
//     char ch = 'A';
//     int n = 5;
//     for(int i = 1; i <=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*            PATTERNS FOR CHARACTER PYRAMID 
A
BC
DEF
GHIJ
*/

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;

//     for(int i = 1; i<=n; i++){
//         cout << "*"; // first star
//         for(int j = 1; j <= n-1; j++){
//             if(i == 1 || i== n) {
//                 cout << "*";
//             } else{
//                 cout << " ";
//             }
//         }
//         cout << "*" << endl; // last star
//     }
//     return 0; 
// }
//                                Hollow Rectangle Pattern

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;
//     for(int i = 1; i<=n; i++){
//         //spaces
//         for(int j = 1; j<=(n-i); j++){
//             cout << " ";
//         }

//         // stars
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//  return 0;
// }
//                          Inverted star pyramid
/*
     *
    **
   ***
  ****
 *****
******

*/
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 1;
//     int n = 10;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }
//        FLOYD'S TRIANGLE

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     // 1st Pyramid upward
//     for(int i = 1; i<=4; i++){
//         // space
//         for(int j = 1; j<=(n-i); j++){
//             cout << " ";
//         }
//         // stars
//         for(int j = 1; j<= (2*i-1); j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     //2nd pyramid
//     for(int i =n; i>=1; i--){
//         //star
//         for(int j= 1; j<=(n-i); j++){
//             cout << " ";
//         }
//         for(int j = 1; j<=(2*i-1); j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0; 
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << " ";
//         }
//         cout << "\\";
//         for(int j=1; j<=2*(n-i); j++){
//             cout << " ";
//         }
//         cout << "/";
//         cout << endl;
//     }
//     return 0;
// }

/*
\      /
 \    /
  \  /
   \/
*/

#include <iostream>
using namespace std;
int main() {
    int n = 10; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<= i; j++){
            cout << "*";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout << "*";
        }
        for(int j=1; j<=2*(i-1); j++){
            cout << " ";
        }
        for(int j=n; j>=i; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}
//                        BUTTERFLY PATTERN