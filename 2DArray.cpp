// Given a 6X6 2D Array,
// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// An hourglass in A is a subset of values with indices falling in this pattern in arr's graphical representation:
// a b c
//   d
// e f g

// There are 16 hourglasses in arr. An hourglass sum is the sum of an hourglass' values. 
// Calculate the hourglass sum for every hourglass in arr, then print the maximum hourglass sum. The array will always be 6X6.
  
// Example
// arr = 
//   -63, -34, -9, 12, 
// -10,   0, 28, 23, 
// -27, -11, -2, 10, 
//   9,  17, 25, 18
// The highest hourglass sum is 28 from the hourglass beginning at row 1, column 2:
// 0 4 3
//   1
// 8 6 6

int hourglassSum(vector<vector<int>> arr) {
    int greatest_sum;
    int running_sum = 0;
    for (unsigned int i = 0; i < 4; i++) {
        for (unsigned int j = 0; j < 4; j++) {
            running_sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
            running_sum += arr[i+1][j+1];
            running_sum += arr[i+2][j]+ arr[i+2][j+1] + arr[i+2][j+2];
            if (i == 0 && j == 0) {
                greatest_sum = running_sum;
                running_sum = 0;
                continue;
            }
            if (running_sum > greatest_sum) {
                greatest_sum = running_sum;
            }
            running_sum = 0;
        }
    }
    return greatest_sum;
}
