// Problem: Largest Element in an Array
// Platform: Basic / GFG
// Topic: Arrays
// Difficulty: Easy
// Approach: Linear traversal to find maximum
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxi = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

