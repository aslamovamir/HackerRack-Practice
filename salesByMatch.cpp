// There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.
// Example 
// n = 7;
// ar = [1,2,1,2,1,3,2];

// There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .


int sockMerchant(int n, vector<int> ar) {
    int answer = 0;
    map<int , int> SetSocks;
    for (auto itr: ar) {
        if (SetSocks[itr] == 0) {
            SetSocks[itr]++;    
        } else if (SetSocks[itr] == 1) {
            answer++;
            SetSocks[itr] = 0;
        }
    }
    return answer;
}
