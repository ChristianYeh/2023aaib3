#week11-2.py
nums = [1,1,1,2,3]

from collections import Counter #�i����Ƶ��c Hash Map �ΨӥX�{�p��X��
counter = Counter()
for num in nums:
  counter[num] += 1

print(counter)
