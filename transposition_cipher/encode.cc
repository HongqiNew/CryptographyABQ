#include <iostream>
#include <random>

using namespace std;

int main()
{
    string plaintext;
    getline(cin, plaintext);
    size_t key;
    cin >> key;

    for (size_t i = 0; i < plaintext.length(); i++)
    {
        char currentChar = plaintext[i];
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            currentChar -= 'a';
            currentChar = (currentChar + key) % 26;
            currentChar += 'a';
        }
        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            currentChar -= 'A';
            currentChar = (currentChar + key) % 26;
            currentChar += 'A';
        }
        cout << currentChar;
    }

    return 0;
}
