# 删除链表的倒数第 N 个结点

## 题目描述

给你一个链表，删除链表的倒数第 $n$ 个结点，并且返回链表的头结点

- 示例 1：

    输入：head = [1,2,3,4,5], n = 2
    输出：[1,2,3,5]
- 示例 2：

    输入：head = [1], n = 1
    输出：[]
- 示例 3：

    输入：head = [1,2], n = 1
    输出：[1]

## 原文链接
[https://leetcode.cn/problems/remove-nth-node-from-end-of-list/](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)

## 思路

使用哑节点辅助遍历操作。使用一个栈储存每一个节点，储存完全部的节点后，弹栈n次，栈顶元素即为要删除的元素，定义一个新节点，改变节点指向的下一个节点即可。最终返回哑节点的next即为头节点。