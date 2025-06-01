# 1. 两数之和-Solution

## 题目分析
 
显然，可以通过两次循环实现一个朴素版本：

```psuedo
for i in num:
    for j in num:
        if i+j == target:
            return [i,j]
```
但是，这是一个时间复杂度 $O$($n^2$) 的算法。为了降低时间复杂度，我们可以利用哈希表的$O(1)$ 查询特性，实现以下的逻辑：

```psuedo
将所有的(num, idx)对 插入哈希表
遍历哈希表的num：
    如果发现哈希表中可以查到target-num作为键的键值对：
        return num的idx, target-num的idx
```
这样，最多进行$n$次查询。建立哈希表的空间代价也为$O(n)$.
  
## 复杂度分析

时间复杂度：$O(n)$  
空间复杂度：$O(n)$