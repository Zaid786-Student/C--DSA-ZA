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

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i<=n; i++){
        for(int j=1; j <=(n-i+1); j++){
            cout  << "* ";
        }
        cout << endl;
    }
}