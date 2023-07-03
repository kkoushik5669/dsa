ll longestConsecutive(vector < ll > & nums) {
  set < ll > hashSet;
  for (ll num: nums) {
    hashSet.insert(num);
  }

  ll longestStreak = 0;

  for (ll num: nums) {
    if (!hashSet.count(num - 1)) {
      ll currentNum = num;
      ll currentStreak = 1;

      while (hashSet.count(currentNum + 1)) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}
