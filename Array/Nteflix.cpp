#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;

        if (a + b == x || a + c == x || b + a == x || b + c == x || c + a == x || c + b = x)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
