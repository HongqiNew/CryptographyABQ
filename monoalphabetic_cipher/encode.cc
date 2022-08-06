#include <iostream>
#include <random>
#include <algorithm>
#include "alphabet.h"

using namespace std;

int main()
{
    const string plaintext = "When World War I ended, the experience of it seemed to vindicate the power of the defensive over the offensive. It was widely believed that a superiority in numbers of at least three to one was required for a successful offensive. Defensive concepts underlay the construction of the Maginot Line between France and Germany and of its lesser counterpart, the Siegfried Line, in the interwar years. Yet by 1918 both of the requirements for the supremacy of the offensive were at hand: tanks and planes. The battles of Cambrai (1917) and Amiens (1918) had proved that when tanks were used in masses, with surprise, and on firm and open terrain, it was possible to break through any trench system. In the air the technology of war had also changed radically between 1918 and 1939. Military aircraft had increased in size, speed, and range, and for operations at sea, aircraft carriers were developed that were capable of accompanying the fastest surface ships. Among the new types of planes developed was the dive bomber, a plane designed for accurate low-altitude bombing of enemy strong points as part of the tank-plane-infantry combination. Fast low-wing monoplane fighters were developed in all countries; these aircraft were essentially flying platforms for eight to 12 machine guns installed in the wings. Light and medium bombers were also developed that could be used for the strategic bombardment of cities and military strongpoints. The threat of bomber attacks on both military and civilian targets led directly to the development of radar in England. Radar made it possible to determine the location, the distance, and the height and speed of a distant aircraft no matter what the weather was. By December 1938 there were five radar stations established on the coast of England, and 15 additional stations were begun. So, when war came in September 1939, Great Britain had a warning chain of radar stations that could tell when hostile planes were approaching. If someone tells you that you've come up with a novel idea or a novel interpretation of something, it's probably a compliment: not everyone is capable of original thinking. But not everything new is terribly worthwhile; a novelty, for example, is often a cute (or maybe just silly) little object that you might put on a display shelf in your house.";
    string ciphertext;

    string cipher = alphabet;
    random_shuffle(cipher.begin(), cipher.end()); // 生成密码表
    for (size_t i = 0; i < plaintext.length(); i++)
    {
        int index = alphabet.find(tolower(plaintext[i]));
        ciphertext += index == string::npos ? plaintext[i] : cipher[index];
    }

    cout << "Encoded message: " << endl
         << ciphertext << endl;
    return 0;
}
