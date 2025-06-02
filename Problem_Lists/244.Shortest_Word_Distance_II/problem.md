
# 244. 最短单词距离

## 题目描述

设计一个类 `WordDistance`，使该类的构造函数能够接收一个字符串数组。然后再实现一个方法，该方法能够分别接收两个单词，并返回列表中这两个单词之间的最短距离。

### 示例 1:

```python
# 输入: 
words_dict = ["WordDistance", "shortest", "shortest"]
pairs = [["practice", "makes", "perfect", "coding", "makes"], ["coding", "practice"], ["makes", "coding"]]

word_distance = WordDistance(words_dict)
print(word_distance.shortest("coding", "practice"))  # 输出: 3
print(word_distance.shortest("makes", "coding"))    # 输出: 1
```

### 解释：

- `WordDistance wordDistance = new WordDistance(["practice", "makes", "perfect", "coding", "makes"]);`
- `wordDistance.shortest("coding", "practice");` // 返回 3
- `wordDistance.shortest("makes", "coding");`    // 返回 1

注意：

1. `1 <= wordsDict.length <= 3 * 10^4`
2. `1 <= wordsDict[i].length <= 10`
3. `wordsDict[i] 由小写英文字母组成`
4. `word1 和 word2 在数组 wordsDict 中`
5. `word1 != word2`
6. `shortest 操作次数不大于 5000`
