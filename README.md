> 这篇文章是给从未接触过密码学原理或对于密码学基础原理十分好奇的读者准备的，如果您已经具备一定基础或只想知道如何运用，可以直接阅读左翼网络社的系列教程。
> 
> 为了防止您疲劳或中途按捺不住键政的欲望，本文不得不十分有趣并浅尝辄止，因此无需担心。
> 
> 尽管本文会运用许多数学原理，但只需要完成九年义务教育水准的数学基础即可大概读懂。

## 这里不安全！

现在，爱丽丝很想在 QQ 上给鲍勃分享自己政治敏感的见解。
 
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

> <small>“wvan wxdfy wmd e anyay, rva akqadeanja xl er uaaoay rx tenyejmra rva qxwad xl rva yalanueta xtad rva xllanueta. er wmu weyafc bafeatay rvmr m uiqadexderc en niobadu xl mr famur rvdaa rx xna wmu dagieday lxd m uijjauulif xllanueta. yalanueta jxnjaqru inyadfmc rva jxnurdijrexn xl rva omzenxr fena barwaan ldmnja mny zadomnc mny xl eru fauuad jxinradqmdr, rva ueazldeay fena, en rva enradwmd camdu. car bc 1918 bxrv xl rva dagiedaoanru lxd rva uiqdaomjc xl rva xllanueta wada mr vmny: rmnsu mny qfmnau. rva bmrrfau xl jmobdme (1917) mny moeanu (1918) vmy qdxtay rvmr wvan rmnsu wada iuay en omuuau, werv uidqdeua, mny xn ledo mny xqan raddmen, er wmu qxuuebfa rx bdams rvdxizv mnc rdanjv ucurao. en rva med rva rajvnxfxzc xl wmd vmy mfux jvmnzay dmyejmffc barwaan 1918 mny 1939. oefermdc medjdmlr vmy enjdamuay en ueha, uqaay, mny dmnza, mny lxd xqadmrexnu mr uam, medjdmlr jmddeadu wada yatafxqay rvmr wada jmqmbfa xl mjjxoqmncenz rva lmuraur uidlmja uvequ. moxnz rva naw rcqau xl qfmnau yatafxqay wmu rva yeta bxobad, m qfmna yaueznay lxd mjjidmra fxw-mfreriya bxobenz xl anaoc urdxnz qxenru mu qmdr xl rva rmns-qfmna-enlmnrdc jxobenmrexn. lmur fxw-wenz oxnxqfmna lezvradu wada yatafxqay en mff jxinrdeau; rvaua medjdmlr wada auuanremffc lfcenz qfmrlxdou lxd aezvr rx 12 omjvena zinu enurmffay en rva wenzu. fezvr mny oayeio bxobadu wada mfux yatafxqay rvmr jxify ba iuay lxd rva urdmrazej bxobmdyoanr xl jereau mny oefermdc urdxnzqxenru. rva rvdamr xl bxobad mrrmjsu xn bxrv oefermdc mny jetefemn rmdzaru fay yedajrfc rx rva yatafxqoanr xl dmymd en anzfmny. dmymd omya er qxuuebfa rx yaradoena rva fxjmrexn, rva yeurmnja, mny rva vaezvr mny uqaay xl m yeurmnr medjdmlr nx omrrad wvmr rva wamrvad wmu. bc yajaobad 1938 rvada wada leta dmymd urmrexnu aurmbfeuvay xn rva jxmur xl anzfmny, mny 15 myyerexnmf urmrexnu wada bazin. ux, wvan wmd jmoa en uaqraobad 1939, zdamr bdermen vmy m wmdnenz jvmen xl dmymd urmrexnu rvmr jxify raff wvan vxurefa qfmnau wada mqqdxmjvenz. el uxoaxna raffu cxi rvmr cxi'ta jxoa iq werv m nxtaf eyam xd m nxtaf enradqdarmrexn xl uxoarvenz, er'u qdxbmbfc m jxoqfeoanr: nxr atadcxna eu jmqmbfa xl xdezenmf rvensenz. bir nxr atadcrvenz naw eu raddebfc wxdrvwvefa; m nxtafrc, lxd akmoqfa, eu xlran m jira (xd omcba piur ueffc) ferrfa xbpajr rvmr cxi oezvr qir xn m yeuqfmc uvafl en cxid vxiua.</small>

爱丽丝觉得非常靠谱，该密文不怎么可能被破解，因为密码表总共有 
![](http://latex.codecogs.com/gif.latex?26!)
种可能，即使是计算机一一尝试并判断其是否具备可读性十分困难。

> 穷举密钥来尝试获知明文的方法叫做**蛮力破解**或**暴力破解**。无法**蛮力破解**或**暴力破解**的密码是**计算安全**的。

不幸的是，鲍勃在接收到密码表后不慎将其弄丢了，因此他需要破译该密文，即**在没有密钥的情况下从密文获知明文**。

鲍勃当然不可能蛮力破解。他注意到了一些在替换后文本没有更改的属性——各字母的统计学属性。

替换法不是好的加密方法，因为字母是一一对应的，加密对一个字母的影响没有“扩散”，使得各字母出现的频率未改变。鲍勃想到按照各字母在这段密文中出现的次数排序，根据各字母在实际英语文本中的出现频率的顺序确定字母间的对应关系。

鲍勃不仅可以根据单个字母出现的频率来确定对应关系，还可以根据字母组合出现的频率确定。例如，`qu` 是经常一起出现的字母组合。通过确定一些短单词的拼写也非常有用。

这些方法暴露出替换加密的另一个问题：我们只需要知道二十六对互不重复明文字母和密文字母就可以知道完整的密钥。

是时候开始破译了！

鲍勃首先在维基上查到了各字母在现实生活中的英语文本中的平均出现频率排序：

> “etaonrishdlfcmugypwbvkjxzq.”

接下来就是计算出现次数并排序、然后将之与排名相同的字母替换。例如，r 是密文中最多出现的字母，我们可以认为 e 被替换为了 r。

这项工作可以交给计算机做。本文所有的代码都可以在 GitHub 仓库里找到，不过我想键盘政治人没什么读的必要。

但当涉猎，见原理尔。

计算机算出的密文，我们依然只关注第一句：

> gheo grild gai n eoded, the exueineoce rf nt seemed tr vnodncate the urgei rf the defeosnve rvei the rffeosnve.

看起来挺令人失望的，对吧？依然看起来毫无头绪。这是因为文本长度不够，且文本主题过于单一，所以一些词出现频率很高，以至于字母频率偏离平均值。但是已经有一些单词有模有样了！

事实上，我们只要思考一下就可以发现一些蛛丝马迹。例如反复出现的 `rf` 和 `nt`，显然是 `of` 和 `it`。我们又知道了两对映射：

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

我们还有那么多段怎么办？别担心，我们只需要二十六个互不重复的明文和密文的字母对就可以求出完整的密码表了，事实上我们已经求出了十八个以上，再来几句就几乎可以求出整张密码表。

只要鲍勃有耐心花十分钟读几句话再敲几行代码，密码表就破译了，于是可以用密码表作为密钥对密文进行解码。

破译替换密码的过程可以说明以下要点：

- 替换密码虽然历史悠久，但在现代可以轻松破译。
- 替换密码等对称密码需要安全的信道（例如线下面对面）传输密钥。加密和解密使用同一密钥。
- 良好的加密方式必须计算安全，且不透露内部的统计学属性。

最后，尤其值得一提的是另一种破译密文的方式：将已经破译密文的鲍勃带回派出所。

> 这种方式在密码学中称为**社会工程**。

## 移动一点

爱丽丝经过鲍勃提醒发明了一种新的密码。该密码的构想是：**将 a~z 分别看作 0~25。每一位字母换成数字后均加 n 并换回字母。n 就是密钥。**

> 这种密码称为**移位密码**。

首先，爱丽丝要解决的问题是：超出怎么办？例如![](http://latex.codecogs.com/png.image?%5Cbg_white%20z+5=30)。
答案是除以 26，取余数。

几乎所有加密算法都基于有限元素的运算，然而我们熟悉的整数集是无穷的。为了建立起整数集到仅含有限整数的集合的映射，我们定义：

>当 ![](http://latex.codecogs.com/png.image?%5Cbg_white%20a,r,m\in\mathbb{Z},m>0)，
>
> ![](https://latex.codecogs.com/png.image?%5Cbg_white%20a%20%5Cequiv%20r%5C%20mod%5C%20m) 代表 a 除以 m 的余数与 r 除以 m 的余数相同。符号 ![](http://latex.codecogs.com/png.image?%5Cbg_white%20\equiv) 意为同余。
> 
> 一般取满足 ![](http://latex.codecogs.com/png.image?%5Cbg_white%200\le%20r\le%20m-1) 的 r。这时可以将 r 看作是 a 除以 m 的余数。
>
> 模运算满足交换律和分配率。

在移位时，任意给定整数 i 和 r ，我们会发现对同一字母移动 i+26r 位的效果与移动 i 位效果相等。例如，对字母 a=0 移动 1 位和 27 位，结果都等于 b。

> 像 {..., -41, -25, 1, 27, 53, ...} 这样由所有模 26 同余的整数构成了模 26 的**等价类**。

给定任意整数 a 和 r，若 ![](https://latex.codecogs.com/png.image?%5Cbg_white%20a%20%5Cequiv%20r%5C%20mod%5C%20m)，即 a 与 r 在同一模 m 的等价类内，则易证在该式左右两边同时乘以或加上任意两个在同一等价类内的数，左右依然同余。

例如 ![](https://latex.codecogs.com/png.image?%5Cbg_white%201%20%5Cequiv%209%5C%20mod%5C%208)，左边加上 18，右边加上 82，![](https://latex.codecogs.com/png.image?%5Cbg_white%2019%20%5Cequiv%2090%5C%20mod%5C%209) 依然成立。

> 同一等价类中，元素行为等价。

这对于计算来说非常有用。例如爱丽丝想让每个字母移动 200\*200 位，但她又不想一个个数，就可以计算 200\*200 mod 26 的余数。算 40000 mod 26 不是个好主意，我们可以：![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20200*200%20%5Cequiv%20(7*26&plus;18)*(7*26&plus;18)%5Cequiv%2018*18=324=%2012*26&plus;12%5Cequiv%2012%20%5C%20mod%5C%2026)

这样极大简化了运算。

现在，我们由 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a%5Cequiv%20a%5C%20mod%5C%20a) 定义一个数的乘法逆元：

> ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 的 乘法逆元 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 是满足 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D=1%5C%20mod%5C%20m)的整数。

接下来证明在整数集（有的情况下称为“整数环”） ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 的 乘法逆元 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 是否存在与 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 和 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20m) 是否互素等价。

首先证明 a 与 m 互素是其乘法逆元存在的必要条件：

> 按照定义，![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a) 与 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a^{-1}) 应等价于 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D=%201&plus;mk(k%5Cin%20%5Cmathbb%7BZ%7D))。
>
> 这个式子亦等价于 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20a*a%5E%7B-1%7D-mk=%201)。
> 
> 假设存在 a 与 m 存在公因数 f，则
> ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cfrac%7Ba%7D%7Bf%7D*a%5E%7B-1%7D-%5Cfrac%7Bm%7D%7Bf%7D*k=%20%5Cfrac%7B1%7D%7Bf%7D)。
> 整数加整数不等于整数，矛盾。证毕。

接下来证明 a 与 m 互素是其乘法逆元存在的充分条件：

> a 与 m 互素。有集合 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cleft%5C%7B%200,1,2,...,m-1%20%5Cright%5C%7D) 和序列 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20%5Cleft(%200*a%5C%20mod%5C%20m,1*a%5C%20mod%5C%20m,2*a%5C%20mod%5C%20m,...,(b-1)*a%5C%20mod%5C%20m%20%5Cright)) 有相同元素个数，且序列中每个元素均属于集合。
> 
> 如果该序列与集合等价，则必然存在序列中的一个元素等于 1，即 a 的乘法逆元存在。而只需证明序列元素互不重复，即可证明该序列与集合等价，推出 a 的乘法逆元存在。
> 
> 任取两个元素作差得 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20ka%5C%20mod%5C%20m,k%5Cle%20m-1)。因为 a 是素数，k 亦小于 m，即不可能是 m 的倍数，所以没有相等的两个元素。证毕。

终于可以继续分析密码了。

移位密码很不安全，因为密钥只有 26 种可能。我们介绍一下它的升级版：仿射密码。这是极好的练习模运算的契机。

爱丽丝如果要从移位密码迁移到仿射密码，只需注意在移位前乘以一个数即可。

> 密钥对： (a, b)
>
> 加密过程：
> 
> ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20y=a*x+b%5C%20mod%5C%2026)

例如密钥对为(2, 1)，明文字母为 c=2，密文字母就为 2*2+1=5=f。

鲍勃如果拿到了密钥对和密文，从直觉上来说，他应该会根据 f=5 计算出 (5-1)/2=2=c。

***错！***

事实上，17 也满足用密钥对(2, 1)加密后值为 5，因为 ![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%2015%20*%202%20&plus;1%20%5Cequiv%205%5C%20mod%5C%2026)。这说明密钥对(2, 1)加密得出的密文和明文不是一一映射的关系。

为什么会这样？

**请记住，在模运算中，乘法的逆运算不是除法，而是乘以这个数的乘法逆元。**

我们只需推导一遍解密公式便能发现解决问题的方法：

![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20ax&plus;b%5Cequiv%20y%5C%20mod%5C%2026%5C%5Cax%5Cequiv%20(y-b)%5C%20mod%5C%2026%5C%5Ca*a%5E%7B-1%7Dx%5Cequiv%20a%5E%7B-1%7D%20(y-b)%5C%20mod%5C%2026%5C%5Cx%5Cequiv%20a%5E%7B-1%7D(y-b)%5C%20mod%5C%2026)

注意：求解解密公式的过程中用到了 a 的乘法逆元。前文已经证明过 a 存在乘法逆元的充分必要条件是与 m 互素，否则同时乘以逆元的行为和除以 0 一样没有意义。

因此爱丽丝还需要给密钥对加上一个条件：a 与 26 互素。

现在就没有问题了！我们用密钥对(3, 1)试一下明文 c=3 吧！

![](https://latex.codecogs.com/png.image?%5Cdpi%7B110%7D%20%5Cbg_white%20y=3*3&plus;1=10%5C%5C3%5E%7B-1%7D=9%5C%5Cx%5Cequiv%209*(10-1)=81%5C%20mod%5C%2026%5C%5Cx=3=c)

令人遗憾的是，这种密码依然并不计算安全或统计学安全，连社会工程的必要都没有，但它的意义在于开了个无限数集映射到有限数集的好头，让我们回顾一下：

- 在密码编码学中，我们使用模运算进行整数集到有限整数集的映射。
- 模运算中没有实数除法，只有乘以一个数的乘法逆元。在实数运算中，一个数的乘法逆元被称为它的倒数。它们的共同点在于可使得右式为一。之后会学习求解乘法逆元的方法。
- 移位密码和仿射密码仍然是线性密码，没有随机性，亦无法破坏内部的统计学属性。

