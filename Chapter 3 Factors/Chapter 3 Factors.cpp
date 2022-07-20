

#include <iostream>

using namespace std;
int main()
{
    int value = 0;
    cout << "Please enter a positive integer\n";
    cin >> value;
    cout << "The factors of " << value << ": 1";
    for (int i = 2; i <= value/2; i++)
    {
        if (value % i == 0)
        {
            cout << ", " << i;

        }
    }
    cout << ", " << value;
}
