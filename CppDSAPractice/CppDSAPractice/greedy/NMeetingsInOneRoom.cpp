//
//  NMeetingsInOneRoom.cpp
//  CppDSAPractice
//
//  Created by Abhaya Nigam on 05/01/26.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMaxMeeting(vector<int>& start, vector<int>& end){
    vector<pair<int,int>> ans;
    ans.push_back({start[0], end[0]});
    int j = 0;
    
    for (int i = 1; i<start.size(); i++) {
        if (end[j]< start[i]) {
            ans.push_back({start[i],end[i]});
            i++;
            j = i - 1;
            i--;
        }
    }
    for(auto& meet : ans){
        cout << meet.first << " : " << meet.second << endl;
    }
    
    return ans.size();
}

void NMeetingsInOneRoom(){
    //                  {0, 1, 2, 3, 4, 5}
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end =   {2, 4, 6, 7, 9, 9};
    
//    vector<int> start = {10,12,20};
//    vector<int> end =   {20,25,30};
//
//    vector<int> start = {1,2};
//    vector<int> end =   {100,99};
    
    int result = getMaxMeeting(start,end);
    
    cout << "The Number of meeting will be : " << result << endl;
}
