var merge = function(intervals) {
    if (intervals.length === 0) {
        return [];
    }
    var stack = [];
    intervals.sort((a, b) => a.start - b.start);
    stack.push(intervals[0])
    for (var i = 1; i < intervals.length; i++) {
        if (intervals[i].start <= stack[stack.length - 1].end) {
            stack[stack.length - 1].end = (intervals[i].end > stack[stack.length - 1].end) ? intervals[i].end : stack[stack.length - 1].end;
        } else {
            stack.push(intervals[i]);
        }
    }
    return stack;
};