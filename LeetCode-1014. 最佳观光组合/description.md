
# description

<p>给你一个正整数数组 <code>values</code>，其中 <code>values[i]</code>&nbsp;表示第 <code>i</code> 个观光景点的评分，并且两个景点&nbsp;<code>i</code> 和&nbsp;<code>j</code>&nbsp;之间的 <strong>距离</strong> 为&nbsp;<code>j - i</code>。</p>

<p>一对景点（<code>i &lt; j</code>）组成的观光组合的得分为 <code>values[i] + values[j] + i - j</code> ，也就是景点的评分之和<strong> 减去 </strong>它们两者之间的距离。</p>

<p>返回一对观光景点能取得的最高分。</p>

<p>&nbsp;</p>

### eg.1

<pre><strong>输入：</strong>values = [8,1,5,2,6]
<strong>输出：</strong>11
<strong>解释：</strong>i = 0, j = 2, values[i] + values[j] + i - j = 8 + 5 + 0 - 2 = 11
</pre>

### eg.2

<pre><strong>输入：</strong>values = [1,2]
<strong>输出：</strong>2
</pre>

### range

<ul>
	<li><code>2 &lt;= values.length &lt;= 5 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= values[i] &lt;= 1000</code></li>
</ul>

## 原文

https://leetcode.cn/problems/best-sightseeing-pair/description/

## 后记
注意力惊人的我们读完题目可以注意到答案的组成可以分成两组：value[i]+i、value[j]-j。遂易解。
通过的代码时间还是略长，但是内存占用不多，时间换空间。 其实还有种想法就是列两个表排序对应，但是感觉可能不仅会爆时间还会爆内存，没有尝试去写。 通过代码的想法非常简单易懂，在cpp的里面注释了一下。 超时代码还是遍历过久了，时间复杂度被搞上了好几个阶级。