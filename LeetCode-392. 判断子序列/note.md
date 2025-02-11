# 判断子序列

## 题目描述

给定字符串 s 和 t ，判断 s 是否为 t 的子序列。

字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，"ace"是"abcde"的一个子序列，而"aec"不是）。

- 示例1:

输入：s = "abc", t = "ahbgdc"
输出：true

- 示例2:

输入：s = "axc", t = "ahbgdc"
输出：false

## 原文链接

*[https://leetcode.cn/problems/is-subsequence/](https://leetcode.cn/problems/is-subsequence/)

## 标签

动态规划 双指针

## 思路

一眼丁真的双指针题，定义两个指针分别指向两个字符串的最左边，如果两个指针指向的值相同就两个同时后移，如果不相同，由于是在右边找左边，就只移动右边。
循环的出口就是，两个指针但凡有一个走完了（其实只有右边，因为右边动的多），代表没找到，直接退出循环返回`false`
如果左边走到头了，且左右指针的值相同，说明找到了，直接返回`true`
这里需要注意的是空字符串可以直接返回`true`，因为空字符串是任何字符串的子序列。

动归思路贴在下面，反正我看不懂，我只会双指针：
对于 t 的每一个位置，从该位置开始往后每一个字符第一次出现的位置。
令 f[i][j] 表示字符串 t 中从位置 i 开始往后字符 j 第一次出现的位置。在进行状态转移时，如果 t 中位置 i 的字符就是 j，那么 f[i][j]=i，否则 j 出现在位置 i+1 开始往后，即 f[i][j]=f[i+1][j]，因此我们要倒过来进行动态规划，从后往前枚举 i。
假定下标从 0 开始，那么 f[i][j] 中有 0≤i≤m−1 ，对于边界状态 f[m−1][..]，我们置 f[m][..] 为 m，让 f[m−1][..] 正常进行转移。这样如果 f[i][j]=m，则表示从位置 i 开始往后不存在字符 j。
