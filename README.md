> 这篇文章是给**从未接触过密码学原理**或**对于密码学基础原理十分好奇**的读者准备的，如果您已经具备一定基础或只想知道如何运用，可以直接阅读左翼网络社的系列教程。
> 
> 您的对密码学原理的理解会随跟着左翼网络社的系列教程进行**应用**而加深。
> 
> 为了防止您疲劳或中途按捺不住键政的欲望，本文不得不十分有趣并**浅尝辄止**，因此无需担心。
> 
> 尽管本文会运用许多数学原理，但**只需要完成九年义务教育水准的数学基础**即可大概读懂。
>
> **请关闭黑暗模式。** 不建议您独自深夜在被窝里钻研数学，更好地方法是明天早起研究。

## 这里不安全！

现在，爱丽丝很想在 QQ 上给鲍勃分享自己的敏感见解。
 
![不安全信道](https://bbvsukzcbmlmapdkuybx.supabase.co/storage/v1/object/public/bed/ink.png)

可是聪明的她随即想到 QQ 可能会读取这条信息，甚至篡改这条信息。

> 像 QQ 那样的，对于信息传输来说不安全，即可能会遭到窃听或篡改的通道，就是**一条不安全的信道**。

因此她需要一个方式，既不让中间的 QQ 读取，又能证明这条信息未经篡改且由自己所发。

让我们开始吧！

## 随机一一替换

假设爱丽丝要发送给鲍勃的敏感信息是：

（提示：这是网上随意摘录、拼接的文段，只有无聊的人才会试图阅读全文，我们只需关注第一句话即可。）

> When World War I ended, the experience of it seemed to vindicate the power of the defensive over the offensive. <small>It was widely believed that a superiority in numbers of at least three to one was required for a successful offensive. Defensive concepts underlay the construction of the Maginot Line between France and Germany and of its lesser counterpart, the Siegfried Line, in the interwar years. Yet by 1918 both of the requirements for the supremacy of the offensive were at hand: tanks and planes. The battles of Cambrai (1917) and Amiens (1918) had proved that when tanks were used in masses, with surprise, and on firm and open terrain, it was possible to break through any trench system. In the air the technology of war had also changed radically between 1918 and 1939. Military aircraft had increased in size, speed, and range, and for operations at sea, aircraft carriers were developed that were capable of accompanying the fastest surface ships. Among the new types of planes developed was the dive bomber, a plane designed for accurate low-altitude bombing of enemy strong points as part of the tank-plane-infantry combination. Fast low-wing monoplane fighters were developed in all countries; these aircraft were essentially flying platforms for eight to 12 machine guns installed in the wings. Light and medium bombers were also developed that could be used for the strategic bombardment of cities and military strongpoints. The threat of bomber attacks on both military and civilian targets led directly to the development of radar in England. Radar made it possible to determine the location, the distance, and the height and speed of a distant aircraft no matter what the weather was. By December 1938 there were five radar stations established on the coast of England, and 15 additional stations were begun. So, when war came in September 1939, Great Britain had a warning chain of radar stations that could tell when hostile planes were approaching. If someone tells you that you've come up with a novel idea or a novel interpretation of something, it's probably a compliment: not everyone is capable of original thinking. But not everything new is terribly worthwhile; a novelty, for example, is often a cute (or maybe just silly) little object that you might put on a display shelf in your house.</small>

> 我们将具有可读性的原文称之为**明文**。

如果鲍勃和 QQ 在获取到信息时是信息对称的，即鲍勃和 QQ 知晓相同多的信息，则鲍勃能知晓的信息 QQ 必然也知晓，故鲍勃必须额外知道些信息。

爱丽丝想到了一个好方法：制作一张密码表，将明文中的每一个字母都替换成另一个字母，然后将密码表线下交给鲍勃。这样的话，爱丽丝每一次都可以照着密码表一一替换，鲍勃每一次都可以照着密码表一一换回。

> 像密码表这样，可以用于完成加密、解密或其它密码学操作的信息叫做**密钥**（yuè）。
> 
> 像替换加密这样，使用同一进行密钥加密和解密的加密方法叫做**对称加密**。

爱丽丝非常自信地在交给鲍勃密码表后发送了如下密文：

> “wvan wxdfy wmd e anyay, rva akqadeanja xl er uaaoay rx tenyejmra rva qxwad xl rva yalanueta xtad rva xllanueta. <small>er wmu weyafc bafeatay rvmr m uiqadexderc en niobadu xl mr famur rvdaa rx xna wmu dagieday lxd m uijjauulif xllanueta. yalanueta jxnjaqru inyadfmc rva jxnurdijrexn xl rva omzenxr fena barwaan ldmnja mny zadomnc mny xl eru fauuad jxinradqmdr, rva ueazldeay fena, en rva enradwmd camdu. car bc 1918 bxrv xl rva dagiedaoanru lxd rva uiqdaomjc xl rva xllanueta wada mr vmny: rmnsu mny qfmnau. rva bmrrfau xl jmobdme (1917) mny moeanu (1918) vmy qdxtay rvmr wvan rmnsu wada iuay en omuuau, werv uidqdeua, mny xn ledo mny xqan raddmen, er wmu qxuuebfa rx bdams rvdxizv mnc rdanjv ucurao. en rva med rva rajvnxfxzc xl wmd vmy mfux jvmnzay dmyejmffc barwaan 1918 mny 1939. oefermdc medjdmlr vmy enjdamuay en ueha, uqaay, mny dmnza, mny lxd xqadmrexnu mr uam, medjdmlr jmddeadu wada yatafxqay rvmr wada jmqmbfa xl mjjxoqmncenz rva lmuraur uidlmja uvequ. moxnz rva naw rcqau xl qfmnau yatafxqay wmu rva yeta bxobad, m qfmna yaueznay lxd mjjidmra fxw-mfreriya bxobenz xl anaoc urdxnz qxenru mu qmdr xl rva rmns-qfmna-enlmnrdc jxobenmrexn. lmur fxw-wenz oxnxqfmna lezvradu wada yatafxqay en mff jxinrdeau; rvaua medjdmlr wada auuanremffc lfcenz qfmrlxdou lxd aezvr rx 12 omjvena zinu enurmffay en rva wenzu. fezvr mny oayeio bxobadu wada mfux yatafxqay rvmr jxify ba iuay lxd rva urdmrazej bxobmdyoanr xl jereau mny oefermdc urdxnzqxenru. rva rvdamr xl bxobad mrrmjsu xn bxrv oefermdc mny jetefemn rmdzaru fay yedajrfc rx rva yatafxqoanr xl dmymd en anzfmny. dmymd omya er qxuuebfa rx yaradoena rva fxjmrexn, rva yeurmnja, mny rva vaezvr mny uqaay xl m yeurmnr medjdmlr nx omrrad wvmr rva wamrvad wmu. bc yajaobad 1938 rvada wada leta dmymd urmrexnu aurmbfeuvay xn rva jxmur xl anzfmny, mny 15 myyerexnmf urmrexnu wada bazin. ux, wvan wmd jmoa en uaqraobad 1939, zdamr bdermen vmy m wmdnenz jvmen xl dmymd urmrexnu rvmr jxify raff wvan vxurefa qfmnau wada mqqdxmjvenz. el uxoaxna raffu cxi rvmr cxi'ta jxoa iq werv m nxtaf eyam xd m nxtaf enradqdarmrexn xl uxoarvenz, er'u qdxbmbfc m jxoqfeoanr: nxr atadcxna eu jmqmbfa xl xdezenmf rvensenz. bir nxr atadcrvenz naw eu raddebfc wxdrvwvefa; m nxtafrc, lxd akmoqfa, eu xlran m jira (xd omcba piur ueffc) ferrfa xbpajr rvmr cxi oezvr qir xn m yeuqfmc uvafl en cxid vxiua.</small>

爱丽丝觉得非常靠谱，该密文不怎么可能被破解，因为密码表总共有 26! 种可能，即使是计算机一一尝试并判断其是否具备可读性十分困难。

> 穷举密钥来尝试获知明文的方法叫做**蛮力破解**或**暴力破解**。无法**蛮力破解**或**暴力破解**的密码是**计算安全**的。

不幸的是，鲍勃在接收到密码表后不慎将其弄丢了，因此他需要破译该密文，即**在没有密钥的情况下从密文获知明文**。

鲍勃当然不可能蛮力破解。他注意到了一些在替换后文本没有更改的属性——各字母的统计学属性。

替换法不是好的加密方法，因为字母是一一对应的，使得各字母出现的频率未改变。鲍勃想到按照各字母在这段密文中出现的次数排序，根据各字母在实际英语文本中的出现频率的顺序确定字母间的对应关系。

鲍勃不仅可以根据单个字母出现的频率来确定对应关系，还可以根据字母组合出现的频率确定。例如，`qu` 是经常一起出现的字母组合。通过确定一些短单词的拼写也非常有用。

这些方法暴露出替换加密的另一个问题：我们只需要知道二十六对互不重复的明文字母和密文字母就可以知道完整的密钥。

是时候开始破译了！

鲍勃首先在维基上查到了各字母在现实生活中的英语文本中的平均出现频率排序：

> “etaonrishdlfcmugypwbvkjxzq.”

接下来就是计算出现次数并排序、然后将之与排名相同的字母替换。例如，假如 r 是密文中最多出现的字母，我们可以暂且认为 e 被替换为了 r，并将对应字母代入回原文本看看。

这项工作可以交给计算机做。

> 试试看！
> <input id='ciphertext' style='border-style: outset; width: 100%;' /><br>
<textarea id='plaintext' style='border-style: outset; height: 100px; overflow-y: scroll; width: 100%;' readonly></textarea>
<script>
    const alphabet = 'abcdefghijklmnopqrstuvwxyz'
    const alphabetSortedByFrequency = 'etaonrishdlfcmugypwbvkjxzq'

   setInterval(() => {
        const ciphertext = document.getElementById('ciphertext').value
        let letterAppearCount = new Array(26).fill(0)
        ciphertext.split('').forEach(letter => {
            const index = letter.charCodeAt(0) - 97
            if (index > -1 && index < 26)
                letterAppearCount[index]++
        })

        const letterAndCounts = []
        letterAppearCount.forEach((count, index) => {
            letterAndCounts.push({
                letter: alphabet[index],
                count: count
            })
        })
        letterAndCounts.sort((a, b) => b.count - a.count)

        const plaintext = []
        ciphertext.split('').forEach(letter => {
            const ciphertextLetterIndex = letter.charCodeAt(0) - 97
            if (ciphertextLetterIndex > -1 && ciphertextLetterIndex < 26) {
                const index = letterAndCounts.indexOf(letterAndCounts.find(letterAndCount => letterAndCount.letter === letter))
                plaintext.push(alphabetSortedByFrequency[index])
            }
            else {
                plaintext.push(letter)
            }
        })
        document.getElementById('plaintext').innerText = plaintext.join('')
    }, 1000)
</script>

本章节所有的代码都可以在 GitHub 仓库里找到，不过键盘政治人没什么读的必要。但当涉猎，见原理尔。

关注第一句的破译结果：

> gheo grild gai n eoded, the exueineoce rf nt seemed tr vnodncate the urgei rf the defeosnve rvei the rffeosnve.

看起来挺令人失望的，对吧？依然看起来毫无头绪。这是因为文本长度不够，且文本主题过于单一，所以一些词出现频率很高，以至于字母频率偏离平均值。但是已经有一些单词有模有样了！

事实上，我们只要思考一下就可以发现一些蛛丝马迹。例如反复出现的 `rf` 和 `nt`，显然是 `of` 和 `it`。我们又知道了两对：

- r -> o
- n -> i

代入得：

> gheo goild gai i eoded, the exueiieoce of it seemed to viodicate the uogei of the defeosive ovei the offeosive.

通过：

- defeosive -> defensive (o -> n)
- viodicate -> vindicate (o -> n)
- offeosive -> offensive (o -> n)
- gheo -> when (g -> w, o -> n)

又得两组，代入：

> when woild wai i ended, the exueiience of it seemed to vindicate the uowei of the defensive ovei the offensive.

已经一目了然了。`exueiience` 显然是 `experience`（i -> r），`uowei` 是 `power`（i -> r, u -> p），`ovei` 是 `over`（i -> r）。

> when world war i ended, the experience of it seemed to vindicate the power of the defensive over the offensive.

我们还有那么多段怎么办？别担心，我们只需要二十六对互不重复的明文和密文的字母就可以求出完整的密码表了，事实上我们已经求出了差不多二十对，再来几句就几乎可以求出整张密码表。

只要鲍勃有耐心花十分钟读几句话再敲几行代码，密码表就破译了，于是可以用密码表作为密钥对密文进行解码。

破译替换密码的过程可以说明以下要点：

- 替换密码虽然历史悠久，但在现代可以轻松破译。
- 替换密码等对称密码需要安全的信道（例如线下面对面）传输密钥。加密和解密使用同一密钥。
- 良好的加密方式必须计算安全，且不透露内部的统计学属性。

最后，尤其值得一提的是另一种破译密文的方式：将已经破译密文的鲍勃带回派出所。

> 这种方式在现代密码学中称为**社会工程**。

破译密码就是要找到最薄弱的一环，而非密码本身最薄弱的一环。往后运用密码编码学时，我们要尤为注意。

## 移动一点

爱丽丝经过鲍勃提醒发明了一种新的密码。该密码的构想是：**将 a\~z 分别看作 0\~25。每一位字母换成数字后均加 n 并换回字母。n 就是密钥。**

> 这种密码称为**移位密码**。

首先，爱丽丝要解决的问题是：超出怎么办？例如 ![](https://latex.codecogs.com/svg.image?z&plus;5=30)。

答案是除以 26，取余数。

几乎所有加密算法都基于有限元素的运算，然而我们熟悉的整数集是无穷的。为了建立起整数集到仅含有限整数的集合的映射，我们定义：

>当 ![](https://latex.codecogs.com/svg.image?a,r,m%5Cin%5Cmathbb%7BZ%7D,m%3E0)，
>
> ![](https://latex.codecogs.com/svg.image?%5Cbg_white%20a%20%5Cequiv%20r%5C%20mod%5C%20m) 代表 a 除以 m 的余数与 r 除以 m 的余数相同。符号 ![](https://latex.codecogs.com/svg.image?%5Cequiv) 意为同余。
> 
> 一般取满足 ![](https://latex.codecogs.com/svg.image?0%5Cle%20r%5Cle%20m-1) 的 r。这时可以将 r 看作是 a 除以 m 的余数。
>
> 模运算满足交换律和分配律。

在移位时，任意给定整数 i 和 r ，我们会发现对同一字母移动 i+26r 位的效果与移动 i 位效果相等。例如，对字母 a=0 移动 1 位和 27 位，结果都等于 b。

> 像 {..., -41, -25, 1, 27, 53, ...} 这样，由所有模 26 同余的整数构成了模 26 意义下的 26 个**等价类**中的 1 个。

给定任意整数 a 和 r，若 ![](https://latex.codecogs.com/svg.image?%5Cbg_white%20a%20%5Cequiv%20r%5C%20mod%5C%20m)，即 a 与 r 在同一模 m 的等价类内，则易证在该式左右两边同时乘以或加上任意两个在同一等价类内的数，左右依然同余。

例如 ![](https://latex.codecogs.com/svg.image?%5Cbg_white%201%20%5Cequiv%209%5C%20mod%5C%208)，左边加上 18，右边加上 82，![](https://latex.codecogs.com/svg.image?%5Cbg_white%2019%20%5Cequiv%2090%5C%20mod%5C%209) 依然成立。

> 同一等价类中，元素行为等价。

这对于计算来说非常有用。例如爱丽丝想让每个字母移动 200\*200 位，但她又不想一个个数，就可以计算 200\*200 mod 26 的余数。算 40000 mod 26 不是个好主意，我们可以：

![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20200*200%20%5Cequiv%20(7*26&plus;18)*(7*26&plus;18)%5Cequiv%2018*18=324=%2012*26&plus;12%5Cequiv%2012%20%5C%20mod%5C%2026)

这样极大简化了运算。

现在，我们由 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a%5Cequiv%20a%5C%20mod%5C%20m) 定义一个数的乘法逆元：

> ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 的乘法逆元 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 是满足 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D=1%5C%20mod%5C%20m) 的整数。

接下来证明在整数集（有的情况下称为“整数环”） ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 的 乘法逆元 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 存在与 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 和 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20m) 互素等价。

首先证明 a 与 m 互素是其乘法逆元存在的必要条件：

> 按照定义，![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 与 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 应等价于 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D=%201&plus;mk(k%5Cin%20%5Cmathbb%7BZ%7D))。
>
> 这个式子亦等价于 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D-mk=%201)。
> 
> 假设存在 a 与 m 存在公因数 f，则 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cfrac%7Ba%7D%7Bf%7D*a%5E%7B-1%7D-%5Cfrac%7Bm%7D%7Bf%7D*k=%20%5Cfrac%7B1%7D%7Bf%7D)。
>
> 整数加整数等于分数，矛盾。证毕。


接下来证明 a 与 m 互素是其乘法逆元有且仅有一个的充分条件：

> a 与 m 互素。有集合 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cleft%5C%7B%200,1,2,...,m-1%20%5Cright%5C%7D) 和序列 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cleft(%200*a%5C%20mod%5C%20m,1*a%5C%20mod%5C%20m,2*a%5C%20mod%5C%20m,...,(b-1)*a%5C%20mod%5C%20m%20%5Cright)) 有相同元素个数，且序列中每个元素均属于集合。
> 
> 如果该序列与集合等价，则必然存在序列中的一个元素等于 1，即 a 的乘法逆元唯一存在。而只需证明序列元素互不重复，即可证明该序列可以构成集合且与该集合等价，推出 a 的乘法逆元唯一存在。
> 
> 任取两个元素作差得 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20ka%5C%20mod%5C%20m,k%5Cle%20m-1)。因为 a 与 m 互素，k 亦小于 m，即 k 不可能是 m 的倍数，所以没有两个元素差为 0。证毕。

对于逆元的求解方法，只需要知道求出逆元并不难，总是可以利用欧几里得辗转相除法求出逆元即可。

——终于可以继续分析密码了！

移位密码很不安全，因为密钥只有 26 种可能。我们介绍一下它的升级版：仿射密码。这是极好的练习模运算的契机。

爱丽丝如果要从移位密码迁移到仿射密码，只需注意在移位前乘以一个数即可。

> 密钥对： (a, b)
>
> 加密过程：
> 
> ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20y=a*x+b%5C%20mod%5C%2026)

例如密钥对为(2, 1)，明文字母为 c=2，密文字母就为 2*2+1=5=f。

鲍勃如果拿到了密钥对和密文，从直觉上来说，他应该会根据 f=5 计算出 (5-1)/2=2=c。

***错！***

事实上，17 也满足用密钥对(2, 1)加密后值为 5，因为 ![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%2015%20*%202%20&plus;1%20%5Cequiv%205%5C%20mod%5C%2026)。这说明密钥对(2, 1)加密得出的密文和明文不是一一映射的关系，无法根据密文和密钥得出唯一确定的明文。

出 bug 了！为什么会这样？

**请记住，在模运算中，乘法的逆运算不是除法，而是乘以这个数的乘法逆元。**

我们只需推导一遍解密公式便能发现解决问题的方法：

![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20ax&plus;b%5Cequiv%20y%5C%20mod%5C%2026%5C%5Cax%5Cequiv%20(y-b)%5C%20mod%5C%2026%5C%5Ca*a%5E%7B-1%7Dx%5Cequiv%20a%5E%7B-1%7D%20(y-b)%5C%20mod%5C%2026%5C%5Cx%5Cequiv%20a%5E%7B-1%7D(y-b)%5C%20mod%5C%2026)

注意：求解解密公式的过程中用到了 a 的乘法逆元。前文已经证明过 a 存在乘法逆元的充分必要条件是与 m 互素，否则同时乘以逆元的行为就和除以 0 一样没有意义。

因此爱丽丝还需要给密钥对加上一个条件：a 与 26 互素。

现在就没有问题了！我们用密钥对(3, 1)试一下明文 c=3 吧！

![](https://latex.codecogs.com/svg.image?%5Cdpi%7B110%7D%20%5Cbg_white%20y=3*3&plus;1=10%5C%5C3%5E%7B-1%7D=9%5C%5Cx%5Cequiv%209*(10-1)=81%5C%20mod%5C%2026%5C%5Cx=3=c)

令人遗憾的是，这种密码依然并不满足计算安全或统计学安全，连社会工程的必要都没有，但它的意义在于开了个无限数集映射到有限数集的好头，让我们回顾一下：

- 在密码编码学中，我们使用模运算进行整数集到有限整数集的映射。
- 模运算中没有实数除法，只有乘以一个数的乘法逆元。在实数运算中，一个数的乘法逆元被称为它的倒数。它们的共同点在于可使得右式为一。
- 移位密码和仿射密码仍然没有随机性，亦无法破坏内部的统计学属性。

## 异或——二元切换

爱丽丝又想到，由于数据能够以二进制流的形式传输（字符串可以先转 ASCII 码或其它编码再转二进制），也就是说非 0 即 1，可以**随机产生一个与二进制下的明文信息等长的二进制串，并将位置相同的明文与密钥位相加并模 2，对所有位都执行此操作**。

例如，对于明文 110，爱丽丝随机写下密钥 101，则密文为 011。因为：

![](https://latex.codecogs.com/svg.image?1&plus;1=2%5Cequiv%200%5C%20mod%5C%202%5C%5C1&plus;0=1%5Cequiv%201%5C%20mod%5C%202%5C%5C0&plus;1=1%5Cequiv%201%5C%20mod%5C%202%5C%5C)

> 对于这种单独加密每一位的密码称为**序列密码**。

模 2 除法的解密方法亦显而易见，就是每位都减去密钥位。不过我们只想在自然数集内运算，因此爱丽丝可以给每位都加上密钥位。

加密和解密的过程总共加上了两次密钥位，可以推出 ![](https://latex.codecogs.com/svg.image?s_%7Bi%7D&plus;2k_%7Bi%7D%5Cequiv%20s_%7Bi%7D%5C%20mod%5C%202)。

也就是说，它本身便是自己的“反函数”。

模 2 加法等价于“异或”。

> **异或（XOR）** 的法则是，假如两个二进制位不相等，则结果为 1；否则结果为 0。

一种直观的实现方法：

```cpp
bool xor (bool a, bool b) { // C++ Function
    return a!=b;
}

/*
 * xor(0, 0) == 0
 * xor(0, 1) == 1
 * xor(1, 0) == 1
 * xor(1, 1) == 0
 */
```

假设与 1 进行异或，对于信息 0，不停地以结果作为下一次运算的初始值：

| 初值 | 0 | 1 | 0 | 1 |
|----------|---|---|---|---|
| 结果     | 1 | 0 | 1 | 0 |

可以发现，结果永远在 0 和 1 之间来回切换，且进行任意次的异或，结果为 0 的概率和为 1 的概率相等。模 2 加法的效果与之完全一样。

对于明文 110，爱丽丝随机写下密钥 101，则密文为 011。因为 1=1，故第一位异或值为 0；1≠0，故第二、三位异或值为 1。再次印证了模 2 加法的效果与之完全一样。

鲍勃需要解密，用密文 011 再与密钥 101 按位异或即可得出明文 110。

可是一般来说，信息都很长很长。我们需要自动生成随机密钥的方法。

有三种重要的随机数生成器：

- **真随机数生成器**，例如抛五十次硬币。鉴于抛硬币比较~~低级~~麻烦，可以采用记录半导体噪音或元素放射性衰变的高效方法。~~（世界上有真随机吗？）~~
- **（不满足密码学安全的）伪随机数生成器**，由一个初始的种子进行运算得到伪随机序列。一个最常见的例子是**线性同余生成器**：![](https://latex.codecogs.com/svg.image?s_%7Bi&plus;1%7D%20%5Cequiv%20as_%7Bi%7D&plus;b%5C%20mod%5C%20m)。ANSI C 标准中采用的参数为 ![](https://latex.codecogs.com/svg.image?a=1103515245,b=12345,m=2%5E%7B31%7D)。可惜的是，尽管它具有良好的统计学属性，但在获知一定长度的随机数序列的条件下是可以计算出种子并进行预测的。ANSI C 标准的随机数生成算法和 V8 (JavaScript) 的随机数生成算法都不具有不可预知性。不过这不那么重要。
- **密码学安全的伪随机数生成器**难以通过一定长度的随机数序列计算出后续位。在一些场景中，这是必要的。

我们可以根据所需安全程度的不同，利用以上任意一种随机数生成器。

至此，我们终于实现了序列密码。

它的缺点在于，需要和明文同样长的密钥，密钥的传递也是个问题。不过序列密码因其只有异或操作，故电路可以非常高效地执行，在资源有限的设备上具有优势。

有一种密码与序列密码相对：

> **分组密码**每次使用相同密钥加密整个明文位分组。

分组密码的实现有 DES、3DES 等等。按组来加密，可以混淆密钥和密文的关系，同时可以通过将一个明文符号的影响扩散到多个密文符号来隐藏其统计属性。

N 轮乘积密码就是分组密码，它交替进行 N 轮数据的扩散和混淆。改变 1 位都会对密文造成巨大的改变。

分组密码的主要结构是 Feistel 网络，每次只对左半组进行加密并加密完成后调换顺序：

![](https://i.stack.imgur.com/IGGiW.gif)

DES 中的 `F` 函数利用异或与非线性的 `S` 盒进行了混淆和扩散：

![](https://www.researchgate.net/profile/Bidyut-Jyoti-Saha/publication/309634531/figure/fig2/AS:424227682689026@1478155169598/Function-f-of-DES-5.png)

解密过程和加密过程非常类似，而且只需要将加密密钥顺序反转即是解密密钥。

爱丽丝了解了分组密码的大致原理，她并不想了解一些具体实现，因此回顾一下序列密码与分组密码吧：

- 异或操作和随机数在现代密码学中有非常重要的运用。
- 序列密码用一位密钥加密一位明文，分组密码分别用一串密钥加密一个分组。
- 在高度机密场合，使用真随机数，甚至可以“一次一密”（例如冷战期间的各国政府通信）。其它情况下，可根据场景不同选择是否使用密码学安全的随机数生成器。
- 序列密码一般比分组密码所需资源少。

## 大素数

以上的密码都没能为爱丽丝解决一个很要命的问题：如果她通过不安全信道向鲍勃传送密钥，则 QQ 必然可以看到密钥并用它解密信息。

为了解决这个问题，天才般的爱丽丝想到，**可以利用无法相互推导的两个密钥分别进行加密和解密**。

> 利用无法相互推导的两个密钥分别进行加密和解密的算法叫**公钥算法**或**非对称算法**。

> 公开的密钥称为**公钥**，仅自己知道的密钥称为**私钥**。

爱丽丝让鲍勃将鲍勃自己的公钥在发信前通过 QQ 传输给爱丽丝，然后爱丽丝**使用该公钥加密**对自己要发送的信息，并将加密信息通过 QQ 传送给鲍勃。鲍勃**用自己的私钥解密**用自己的公钥加密而成的密文，计算出明文。

在此过程中，QQ 仅能知道鲍勃的公钥和密文，而公钥无法解密自己加密的信息。因此 QQ 无法知道明文！

接着，爱丽丝开始思考如何实现一个公钥算法。她又想到了数论中的一个重要事实：**将两个大素数相乘很容易，从它们巨大的积中重新分解出两个原来的素因子很难**。

> **公钥算法**主要有两种，一种是利用分解大素数的困难性的**RSA 算法**，它仍然是目前世界上最通用的公钥算法；还有一种则基于离散对数。我们主要介绍爱丽丝想实现的 RSA 算法。

RSA 算法中，我们需要在给定一个正整数的情况下，计算出小于这个数且与之互素的正整数个数。

> 把给定一个正整数，计算小于这个数且与之互素的正整数个数的函数叫做**欧拉函数**，记作 `φ` 函数。

例如 φ(3)=2，因为共有 1、2 两个数与 3 互素。

爱丽丝尝试推导欧拉函数的公式。她首先尝试推导比 ![](https://latex.codecogs.com/svg.image?p%5E%7Bk%7D) 小且与它***不***互素的数的个数。

> 显然，比 ![](https://latex.codecogs.com/svg.image?p%5E%7Bk%7D) 小且与它不互素等价于含有因数 ![](https://latex.codecogs.com/svg.image?p)。
>
> 比它小且只含有因数 ![](https://latex.codecogs.com/svg.image?p) 的数构成 ![](https://latex.codecogs.com/svg.image?(1p,2p,%20...,(p-1)p)) ，有 p 个。
> 
> 比它小且只含有因数 ![](https://latex.codecogs.com/svg.image?p%5E%7B2%7D) 的数构成 ![](https://latex.codecogs.com/svg.image?(1p%5E2,2p%5E2,%20...,(p-1)p%5E2)) ，也有 p 个。
>
> ……
> 
> 因此共有 (k-1)p 个数满足比它小而不互素的条件。可以推出：
> 
> ![](https://latex.codecogs.com/svg.image?%5Cvarphi(p%5Ek)=p%5Ek-p%5E%7Bk-1%7D=p%5Ek(1-%5Cfrac%7B1%7D%7Bp%7D))

求完了。

接着，爱丽丝试图证明：![](https://latex.codecogs.com/svg.image?%5Cvarphi(mn)=%5Cvarphi(m)%5Cvarphi(n))。

> 构建两个集合：第一个集合中的正整数 ![](https://latex.codecogs.com/svg.image?a_%7Bi%7D) 小于 mn 且与 mn 互素，第二个集合中的二元组 ![](https://latex.codecogs.com/svg.image?(b_%7Bi%7D,c_%7Bi%7D)) 满足 ![](https://latex.codecogs.com/svg.image?b_%7Bi%7D) 小于 m 且与 m 互素、![](https://latex.codecogs.com/svg.image?c_%7Bi%7D) 小于 n 且与 n 互素。
> 
> 可推出 a 与 m 和 n 都互素。将 a 替换为等价类中的其它数后可产生二元组 (a mod m, a mod n)，该二元组属于集合 B。易证这样的对应关系 A 到 B 是单射，即每个 A 中的元素对应一个不重复的 B 中的元素；通过中国剩余定理又可证 A 到 B 是满射，即每个 B 中的元素都有 A 中的元素与之对应。
> 
> 故 A 集合到 B 集合是双射，即一一对应。因此两个集合的元素个数相同。

最终，爱丽丝推出了欧拉函数的公式：

> 假设 n 可素因数分解为 ![](https://latex.codecogs.com/svg.image?p%5E%7Bk_1%7D_1p%5E%7Bk_2%7D_2...p%5E%7Bk_r%7D_r)，则：
> 
> ![](https://latex.codecogs.com/svg.image?%5Cvarphi(n)=%5Cvarphi(%5Cprod_%7Bi=1%7D%5E%7Br%7Dp%5E%7Bk_i%7D_i)=%5Cprod_%7Bi=1%7D%5E%7Br%7Dp%5E%7Bk_i%7D_i(1-%5Cfrac%7B1%7D%7Bp_i%7D)=n%5Cprod_%7Bi=1%7D%5E%7Br%7D(1-%5Cfrac%7B1%7D%7Bp_i%7D))

好，进入 RSA 算法！

首先，生成密钥：

> 1. 选择*非常大*的素数 p 和 q。
> 2. 计算 n=pq。
> 3. 计算 φ(n)=(p-1)(q-1)［这种形式不过是我们刚刚求出的公式进行乘法分配律，并代入 φ(p)=p-1 和 φ(q)=q-1］。
> 4. 选择小于 φ(n) 且与 φ(n) 互质的正整数 e。
> 5. 计算模 φ(n) 意义下 e 的逆元 d。
> 6. 记录 (n, e) 作为公钥，(n, d) 作为私钥，并销毁计算过程中产生的数据。

注意，非对称算法（公钥算法）中的密钥通常需要比对称算法的密钥长得多。

`d` 暴露是一件非常危险的事，知道 `d` 的任何人只要联立公开的 `n` 就都可以读取密文。

现在，爱丽丝要使用 RAS 算法发信息给鲍勃。

> 计算公钥和私钥，收信方鲍勃给发信方爱丽丝提供自己的公钥。
> 
> 爱丽丝拿到鲍勃的公钥 (n, e)，用它加密明文 x (x<n) 得到密文 ![](https://latex.codecogs.com/svg.image?y%5Cequiv%20x%5Ee%5C%20mod%5C%20n)。
> 
> 可恶的 QQ 发现了爱丽丝传输的密文 y 和公钥 (n, e)，试图计算私钥 d 来读取消息。计算 d，即计算出模 φ(n) 意义下 e 的逆元，就需要计算出 φ(n)=(p-1)(q-1)。可是对大素数分解素因数极其困难，所以 QQ 几乎没有在有生之年算出来的可能。
> 
> 鲍勃接受到密文 x，用自己的私钥 (n, d) 计算出明文 ![](https://latex.codecogs.com/svg.image?x%5Cequiv%20y%5Ed%5C%20mod%5C%20n)。

举例：

> ![RSA 1](https://bbvsukzcbmlmapdkuybx.supabase.co/storage/v1/object/public/bed/0.8392475090672491.png)
> 
> ![RSA 2](https://bbvsukzcbmlmapdkuybx.supabase.co/storage/v1/object/public/bed/0.8629663057702643.png)
> 
> ![RSA 3](https://bbvsukzcbmlmapdkuybx.supabase.co/storage/v1/object/public/bed/0.3659689833940627.png)

证明它为什么能够成立，需要把 y 代换，得到：证明它能够成立，等价于证明 ![](https://latex.codecogs.com/svg.image?x%5Cequiv%20x%5E%7Bde%7D%5C%20mod%5C%20n)。

事实证明，这个式子是成立的。因为严格证明的步骤比较繁琐，所以爱丽丝决定，如果研究完还有精力的话，就课下再读一读[维基百科上的证明](https://zh.wikipedia.org/wiki/RSA%E5%8A%A0%E5%AF%86%E6%BC%94%E7%AE%97%E6%B3%95#%E6%AD%A3%E7%A1%AE%E6%80%A7%E8%AF%81%E6%98%8E)。没精力的话，不读也无妨，因为爱丽丝已经了解了 RSA 加密的大致过程和原理与安全性和正确性。让我们来小结一下 RSA 算法：

- RSA 算法是公钥算法，它对比对称算法解决了密钥传递的大问题。
- RSA 算法基于分解大素数极为困难的事实，足够安全的公钥和私钥长度一般远大于对称算法。
- 密码学学者试图寻找高效的算法实现大素数的寻找和大数的乘方，但 RSA 算法的性能仍远低于对称算法。互联网通信协议（例如 `HTTPS`）中，一般混合多种加密算法。