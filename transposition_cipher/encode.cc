#include <iostream>
#include <random>

using namespace std;

int main()
{
    string plaintext = "";
    size_t key;
    cin >> plaintext >> key;

    for (size_t i = 0; i < plaintext.length(); i++)
    {
        if ((plaintext[i] >= 'a' && plaintext[i] <= 'z') || (plaintext[i] >= 'A' && plaintext[i] <= 'Z'))
        {
            cout << char(plaintext[i] + 3);
        }
        else
        {
            cout << plaintext[i];
        }
    }

    return 0;
}
