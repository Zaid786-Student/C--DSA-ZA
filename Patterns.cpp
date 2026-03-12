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

#include <iostream>
using namespace std;
int main() {
    int n = 4;

    for(int i = 1; i<=n; i++){
        cout << "*"; // first star
        for(int j = 1; j <= n-1; j++){
            if(i == 1 || i== n) {
                cout << "*";
            } else{
                cout << " ";
            }
        }
        cout << "*" << endl; // last star
    }
    return 0; 
}