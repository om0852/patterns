/*
1
12
123
1234
12345

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows:";
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            count++;
            cout << count;
        }
        count = 0;
        cout << endl;
    }

    return 0;
}