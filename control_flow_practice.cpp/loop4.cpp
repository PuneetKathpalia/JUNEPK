// // Write a C++ program to input a number and check whether the number is a Perfect number or not. 
// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cin >> n;
//     for (int i = 1; i <= n / 2; i++) {
//         if (n % i == 0) {
//             sum += i;
//         } 
//     }
//     if (sum == n && n > 0) {
//         cout << "perfect number" << endl;
//     } else {
//         cout << "not a perfect number" << endl;
//     }
    
//     return 0;
// }

// Write a C++ program to find all Perfect numbers between 1 to n where n is the input given by the user.
#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n;
     for(int i = 1; i <= n; i++)
    {
        sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}