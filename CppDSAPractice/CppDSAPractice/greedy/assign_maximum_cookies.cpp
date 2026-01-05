//
//  assign_maximum_cookies.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 21/12/25.
//

/*
 Assign Maximum Cookies
 
 Given two arrays, greed[] and cookie[] such that greed[i] denotes the minimum cookie size wanted by ith child and cookie[i] denotes the size of ith cookie, we have to find the maximum number of children that can be satisfied by assigning them cookies, with each child getting at most 1 cookie.

 Note: A child will be satisfied if he is assigned a cookie of size at least equal to his greed. In other words, the ith child will be satified with jth cookie only if greed[i] <= cookie[j].

 Examples:

 Input: greed[] = [1, 10, 3], cookie[] = [1, 2,3]
 Output: 2
 Explanation: We can only assign  cookie to the first child and third child.

 Input: greed[] = [10,100], cookie[] = [1, 2]
 Output: 0
 Explanation: We can not assign cookies to children.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int maxChildren(vector<int>&greed, vector<int>&cookies){
    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());
    
    int count = 0, i = 0, j =0;
    
    while (i<greed.size() && j<cookies.size()) {
        if (greed[i] <= cookies[j]) {
            count++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    
    return count;
}

void assign_maximum_cookies(){
//    vector<int> greed = {1, 10, 3};
    vector<int> greed = {1, 2, 3};
    vector<int> cookie = {1,1};
//    vector<int> cookie = {1, 2,3};
  
    cout << maxChildren(greed, cookie) << endl;
}
