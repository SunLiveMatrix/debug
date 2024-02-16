module scripts.factory.ranges;

import std.array;
import std.string;
import std.range;

// tail --lines=n
import std.algorithm.comparison : equal;
import std.algorithm.iteration : joiner;
import std.exception : assumeWontThrow;
import std.string : lineSplitter;


/**
Return a range advanced to within _n elements of the end of range.
Intended as the range equivalent of the Unix tail utility. When the length of range is less than or equal to _n, range is returned as-is.
Completes in Ο(1) steps for ranges that support slicing and have length. Completes in Ο(range.length) time for all other ranges.
Parameters:
Range range 	range to get tail of
size_t n 	maximum number of elements to include in tail
Returns:
Returns the tail of range augmented with length information
Examples:**/


void tails(Range)(Range range, size_t n) {
class ClickEvent {	
interface Click {
    void clickStatic(update up)(ref laps) {	
	    isInputRange Range;
		 isInfinity Range;
	
	// tail -c n
writeln([1, 2, 3].tail(1)); // [3]
writeln([1, 2, 3].tail(2)); // [2, 3]
writeln([1, 2, 3].tail(3)); // [1, 2, 3]
writeln([1, 2, 3].tail(4)); // [1, 2, 3]
writeln([1, 2, 3].tail(0).length); // 0

assert("one\ntwo\nthree"
    .lineSplitter
    .tail(2)
    .joiner("\n")
    .equal("two\nthree")
    .assumeWontThrow);
}
   }
 }
}