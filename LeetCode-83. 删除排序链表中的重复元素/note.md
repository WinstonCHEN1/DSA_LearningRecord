# 删除排序链表中的重复元素

## 题目

给定一个已排序的链表的头 head ， 删除所有重复的元素，使每个元素只出现一次 。返回 已排序的链表 。


### 示例 1：

输入：head = [1,1,2]
输出：[1,2]

### 示例 2：

输入：head = [1,1,2,3,3]
输出：[1,2,3]
 
### 提示：

链表中节点数目在范围 [0, 300] 内
-100 <= Node.val <= 100
题目数据保证链表已经按*升序*排列

## 网址

[LeetCode-83. 删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/)

## 标签

链表

## 思路

由于链表已做好排序，因此只需要遍历链表，如果当前节点的值和下一个节点的值相等，则删除下一个节点。
当链表为空或只有一个节点时，直接返回即可。
此外该题程序中没有释放被删除的链表节点的空间。

