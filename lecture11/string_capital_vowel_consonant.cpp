// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     cin >> str;
//     int length_of_string = str.size();
//     for (int i = 0; i < length_of_string; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             continue;
//     }
//     else
//     {
//         str[i] = toupper(str[i]);
//     }
//     }
//     cout<<str;
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int length_of_string = str.size();
    for (int i = 0; i < length_of_string; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {continue;
        }
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')){
        // str[i] = toupper(str[i]);
        str[i] = str[i]-32;
      }
    }
    cout<<str;
    return 0;
}