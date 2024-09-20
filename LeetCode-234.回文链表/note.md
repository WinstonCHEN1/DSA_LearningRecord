# 回文链表

## 题目描述

给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 `true` ；否则，返回 `false` 。

### 示例 1：

输入：head = [1,2,2,1]
输出：true

### 示例 2：

输入：head = [1,2]
输出：false

## 原文链接
[https://leetcode.cn/problems/palindrome-linked-list/](https://leetcode.cn/problems/palindrome-linked-list/)

## 思路

使用栈将链表的每个节点依次入栈，比较栈顶节点和头节点的值，然后依次比较。

需要注意的几个点是，链表节点不可直接比较，因为他们是指针类型，需要比较它们的值（->val）。此外，.pop()操作并不会返回值，而是直接进行弹栈操作。