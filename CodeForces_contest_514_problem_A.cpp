#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int d = n[0] - '0';
    if(d == 9)
        n[0] = '9';
    else if(d > 4)
        n[0] = (9 - d) + '0';

    
    for(int i = 1; i < n.length(); i++)
    {
        if(n[i] - '0' > 4)
            n[i] = (9 - (n[i] - '0')) + '0';
    }
    cout << n << endl;
    return 0;
}