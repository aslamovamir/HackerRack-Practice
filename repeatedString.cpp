// There is a string, s, of lowercase English letters that is repeated infinitely many times. Given an integer, n, 
// find and print the number of letter a's in the first letters of the infinite string.
  
// Example
// s = 'abcac'
// n = 10
// The substring we consider is 'abcacabcac', the first 10 characters of the infinite string. There are 4 occurrences of a in the substring.

long repeatedString(string s, long n) {
    long num_uniq = 0;
    long indexing = 0;
    if (s.length() > n) {
        for (long i=0; i<n; i++) {
            if (s[i] == 'a') {
                num_uniq++;
                indexing = i+1; 
            }
        }
        return num_uniq;
    }
    for (long i=0; i<s.size(); i++) {
        if (s[i] == 'a') {
            num_uniq++;
            indexing = i+1; 
        }
    }
    long k = (long)n/s.length();
    long answer = num_uniq * k;
    if (n%s.length() == 0) {
        return answer;
    } else {
        long left = n%s.length();
        for (long i=0; i < left; i++) {
            if (s[i] == 'a') {
                answer++;
            }
        }
        return answer;
    }
}
