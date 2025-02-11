# 图书整理 I

## 题目描述

书店店员有一张链表形式的书单，每个节点代表一本书，节点中的值表示书的编号。为更方便整理书架，店员需要将书单倒过来排列，就可以从最后一本书开始整理，逐一将书放回到书架上。请倒序返回这个书单链表。

### 示例 1：

输入：head = [3,6,4,1]

输出：[1,4,6,3]

## 原文链接
[https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/](https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/)

## 思路

题目的思路很简单了，其实就是用一个辅助栈进行操作即可。这里需要注意的是返回的虽然是链表，但是是以数组形式返回，而在cpp里用到vector的话，就需要使用push_back逐个加入，而不是优先初始化大小。

这题可以参考的其实就是数组+栈的处理方法，熟悉一下接口。

另外我在题解里面看到了递归的处理方法，我把思路贴在下面，看着还不错：

> 利用递归，先递推至链表末端；回溯时，依次将节点值加入列表，即可实现链表值的倒序输出。
> 终止条件： 当 head == None 时，代表越过了链表尾节点，则返回空列表；
> 递推工作： 访问下一节点 head.next ；
> 回溯阶段：
> Python： 返回 当前 list + 当前节点值 [head.val] ；
> Java / C++： 将当前节点值 head.val 加入列表 tmp ；
