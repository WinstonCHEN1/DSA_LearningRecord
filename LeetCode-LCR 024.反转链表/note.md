# 反转链表

## 题目描述

给定单链表的头节点 head ，请反转链表，并返回反转后的链表的头节点。

### 示例 1：

输入：head = [1,2,3,4,5]
输出：[5,4,3,2,1]

### 示例 2：

输入：head = [1,2]
输出：[2,1]

### 示例 3:

输入：head = []
输出：[]

## 原文链接
[https://leetcode.cn/problems/UHnkqh/](https://leetcode.cn/problems/UHnkqh/)

## 思路

这道题的思路比较简单，但是有两个值得注意的点：

- 对于空指针的处理，注意处理最后一个指针的`next`为`nullptr`
- `tail=tail->next`的意思是，将`tail`移到下一个指针的位置，在下一次循环中可以操作。