#week11-2.py
nums = [1,1,1,2,3]

from collections import Counter #進階資料結構 Hash Map 用來出現計算幾次
counter = Counter()
for num in nums:
  counter[num] += 1

print(counter)
