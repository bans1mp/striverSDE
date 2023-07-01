// The idea is to make a lps array where lps[i] is the size of largest prefix in substring s(0,i) which is also a suffix , 
// now when matching , whenever there is a mismatch, backtrack to lps[j-1] and not 0 :) 
