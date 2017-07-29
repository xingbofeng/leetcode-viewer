# 003.longest-substring-without-repeating-characters
这道题是晚上利用业余时间在公司做的，因为没有`C/C++`的环境，所以简单易行使用了`JavaScript`。

首先看题意，题意是叫我们找到最长非重复子串，其实个人觉得这个题意有点难懂哈，看例子：`abcabcbb`这个字符串，找到一个`string`，里面的任何一个`char`都不重复，显然是`abc`，这样好理解一些。

其实我首先就想到这道题要用`Hash Map`，但是自己搞了很久没搞出来，后面参考了一些网上的答案。

我们设定一个左指针和右指针，最开始左右指针都指向`string[0]`然后从左到右进行遍历。遍历到的字符分两种情况，一是未命中哈希表，则把它的位置存到哈希表中。如果命中了哈希表，证明有重复的了，则此时右指针到左指针的距离存到临时变量`result`中。最后看`result`的最大值。

其次，命中哈希表时我们需要更新指针和哈希表，在**当前左指针**和**命中的哈希表的位置右边一位**找到一个较大值，什么意思呢？有可能**命中的哈希表的位置右边一位**是比**当前左指针**还要小的，这样可能造成无限循环！！

具体过程可以看下面的图：

![](https://hk029.gitbooks.io/leetbook/content/%E5%AD%97%E7%AC%A6%E4%B8%B2/003.%20Longest%20Substring%20Without%20Repeating%20Characters[M]/1459857033836.png)![](https://hk029.gitbooks.io/leetbook/content/%E5%AD%97%E7%AC%A6%E4%B8%B2/003.%20Longest%20Substring%20Without%20Repeating%20Characters[M]/1459857050765.png)![](https://hk029.gitbooks.io/leetbook/content/%E5%AD%97%E7%AC%A6%E4%B8%B2/003.%20Longest%20Substring%20Without%20Repeating%20Characters[M]/1459857109997.png)![](https://hk029.gitbooks.io/leetbook/content/%E5%AD%97%E7%AC%A6%E4%B8%B2/003.%20Longest%20Substring%20Without%20Repeating%20Characters[M]/1459857137766.png)![](https://hk029.gitbooks.io/leetbook/content/%E5%AD%97%E7%AC%A6%E4%B8%B2/003.%20Longest%20Substring%20Without%20Repeating%20Characters[M]/1459857157171.png)