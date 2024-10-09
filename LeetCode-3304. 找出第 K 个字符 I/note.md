# 找出第 K 个字符 I

## 题目描述

Alice 和 Bob 正在玩一个游戏。最初，Alice 有一个字符串 word = "a"。

给定一个正整数 k。

现在 Bob 会要求 Alice 执行以下操作无限次：

将 word 中的每个字符更改为英文字母表中的下一个字符来生成一个新字符串，并将其追加到原始的 word。
例如，对 "c" 进行操作生成 "cd"，对 "zb" 进行操作生成 "zbac"。

在执行足够多的操作后，word 中至少存在 k 个字符，此时返回 word 中第 k 个字符的值。

注意：在操作中字符 'z' 可以变成 'a'。

### 示例 1:

- 输入：k = 5
- 输出："b"
- 解释：最初，word = "a"。需要进行三次操作:
    - 生成的字符串是 "b"，word 变为 "ab"。
    - 生成的字符串是 "bc"，word 变为 "abbc"。
    - 生成的字符串是 "bccd"，word 变为 "abbcbccd"。

### 示例 2:

- 输入：k = 10
- 输出："c"

## 原文链接

* [https://leetcode.cn/problems/find-the-k-th-character-in-string-game-i/](https://leetcode.cn/problems/find-the-k-th-character-in-string-game-i/)

## 标签

字符串 模拟 递归

## 解题思路

*思路部分待补充*
