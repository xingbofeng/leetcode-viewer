var lengthOfLongestSubstring = function(s) {
    var hashmap = {};
    var result = 0;
    var left = 0;
    var j = left;
    while(j < s.length) {
        if (hashmap[s[j]] !== undefined) {
            left = Math.max(hashmap[s[j]] + 1, left);
        }
        result = Math.max(result, j - left + 1);
        hashmap[s[j]] = j++;
    }
    return result;
};