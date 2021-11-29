// Problem	Submissions	Leaderboard	Discussions	Editorial	Topics
// A left rotation operation on an array shifts each of the array's elements 1 unit to the left. For example, if 2 left 
// rotations are performed on array [1,2,3,4,5], then the array would become [3,4,5,1,2]. Note that the lowest index item moves to the 
// highest index in a rotation. This is called a circular array.
// Given an array a of n integers and a number, d, perform d left rotations on the array. Return the updated array to be 
// printed as a single line of space-separated integers.

// Sample Input
// 5 4
// 1 2 3 4 5
// Sample Output
// 5 1 2 3 4

vector<int> rotLeft(vector<int> a, int d) {
    vector<int> answer;
    for (unsigned int i = d; i < a.size(); i++) {
        answer.push_back(a[i]);
    }
    for (unsigned i = 0; i < d; i++) {
        answer.push_back(a[i]);
    }
    return answer;
}
