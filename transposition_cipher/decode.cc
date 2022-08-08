#include <iostream>
#include <random>

using namespace std;

int main()
{
    string ciphertext;
    getline(cin, ciphertext);
    size_t key;
    cin >> key;

    for (size_t i = 0; i < ciphertext.length(); i++)
    {
        char currentChar = ciphertext[i];
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z')
        {
            currentChar -= 'a';
            currentChar = (currentChar + 23) % 26;
            currentChar += 'a';
        }
        else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z')
        {
            currentChar -= 'A';
            currentChar = (currentChar + 23) % 26;
            currentChar += 'A';
        }
        cout << currentChar;
    }

    return 0;
}
