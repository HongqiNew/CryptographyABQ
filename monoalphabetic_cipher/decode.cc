#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include "alphabet.h"

#define ASCII_A 97

using namespace std;

bool sort_frequency(const map<string, size_t> a, const map<string, size_t> b)
{
    return a.at("count") > b.at("count");
}

int main()
{
    string ciphertext = "wvan wxdfy wmd e anyay, rva akqadeanja xl er uaaoay rx tenyejmra rva qxwad xl rva yalanueta xtad rva xllanueta. er wmu weyafc bafeatay rvmr m uiqadexderc en niobadu xl mr famur rvdaa rx xna wmu dagieday lxd m uijjauulif xllanueta. yalanueta jxnjaqru inyadfmc rva jxnurdijrexn xl rva omzenxr fena barwaan ldmnja mny zadomnc mny xl eru fauuad jxinradqmdr, rva ueazldeay fena, en rva enradwmd camdu. car bc 1918 bxrv xl rva dagiedaoanru lxd rva uiqdaomjc xl rva xllanueta wada mr vmny: rmnsu mny qfmnau. rva bmrrfau xl jmobdme (1917) mny moeanu (1918) vmy qdxtay rvmr wvan rmnsu wada iuay en omuuau, werv uidqdeua, mny xn ledo mny xqan raddmen, er wmu qxuuebfa rx bdams rvdxizv mnc rdanjv ucurao. en rva med rva rajvnxfxzc xl wmd vmy mfux jvmnzay dmyejmffc barwaan 1918 mny 1939. oefermdc medjdmlr vmy enjdamuay en ueha, uqaay, mny dmnza, mny lxd xqadmrexnu mr uam, medjdmlr jmddeadu wada yatafxqay rvmr wada jmqmbfa xl mjjxoqmncenz rva lmuraur uidlmja uvequ. moxnz rva naw rcqau xl qfmnau yatafxqay wmu rva yeta bxobad, m qfmna yaueznay lxd mjjidmra fxw-mfreriya bxobenz xl anaoc urdxnz qxenru mu qmdr xl rva rmns-qfmna-enlmnrdc jxobenmrexn. lmur fxw-wenz oxnxqfmna lezvradu wada yatafxqay en mff jxinrdeau; rvaua medjdmlr wada auuanremffc lfcenz qfmrlxdou lxd aezvr rx 12 omjvena zinu enurmffay en rva wenzu. fezvr mny oayeio bxobadu wada mfux yatafxqay rvmr jxify ba iuay lxd rva urdmrazej bxobmdyoanr xl jereau mny oefermdc urdxnzqxenru. rva rvdamr xl bxobad mrrmjsu xn bxrv oefermdc mny jetefemn rmdzaru fay yedajrfc rx rva yatafxqoanr xl dmymd en anzfmny. dmymd omya er qxuuebfa rx yaradoena rva fxjmrexn, rva yeurmnja, mny rva vaezvr mny uqaay xl m yeurmnr medjdmlr nx omrrad wvmr rva wamrvad wmu. bc yajaobad 1938 rvada wada leta dmymd urmrexnu aurmbfeuvay xn rva jxmur xl anzfmny, mny 15 myyerexnmf urmrexnu wada bazin. ux, wvan wmd jmoa en uaqraobad 1939, zdamr bdermen vmy m wmdnenz jvmen xl dmymd urmrexnu rvmr jxify raff wvan vxurefa qfmnau wada mqqdxmjvenz. el uxoaxna raffu cxi rvmr cxi'ta jxoa iq werv m nxtaf eyam xd m nxtaf enradqdarmrexn xl uxoarvenz, er'u qdxbmbfc m jxoqfeoanr: nxr atadcxna eu jmqmbfa xl xdezenmf rvensenz. bir nxr atadcrvenz naw eu raddebfc wxdrvwvefa; m nxtafrc, lxd akmoqfa, eu xlran m jira (xd omcba piur ueffc) ferrfa xbpajr rvmr cxi oezvr qir xn m yeuqfmc uvafl en cxid vxiua.";

    // 统计字母出现次数
    size_t letter_appear_count[ALPHABET_LENGTH] = {};
    for (size_t i = 0; i < ciphertext.length(); i++)
    {
        const int index = ciphertext[i] - ASCII_A;
        if (index > -1 && index < ALPHABET_LENGTH)
        {
            letter_appear_count[index]++;
        }
    }

    // 带着对应字母按频率降序排列
    map<string, size_t> letter_count_map[ALPHABET_LENGTH] = {};
    for (size_t i = 0; i < ALPHABET_LENGTH; i++)
    {
        letter_count_map[i]["letter"] = alphabet[i];
        letter_count_map[i]["count"] = letter_appear_count[i];
    }
    sort(letter_count_map, letter_count_map + ALPHABET_LENGTH, sort_frequency);

    // 替换
    for (size_t i1 = 0; i1 < ciphertext.length(); i1++)
    {
        for (size_t i2 = 0; i2 < ALPHABET_LENGTH; i2++)
        {
            if (ciphertext[i1] == letter_count_map[i2].at("letter"))
            {
                ciphertext[i1] = alphabet_sorted_by_frequency[i2];
                break;
            }
        }
    }

    cout << "Decoded message: " << endl
         << ciphertext << endl;
    return 0;
}
