bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i=0; i<stalls.size(); i++){
        maxi=max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = (s+(e-s)/2);

    while(s<=e){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid=(s+(e-s)/2);
    }
    return ans;
}


//#include<bits/stdc++.h>
//
//int aggressiveCows(vector<int> &stalls, int k)
//
//{
//
//    //    Write your code here.
//
//    sort(stalls.begin(),stalls.end());
//
//    int low=0,high=1e9+1;
//
//    while(low<=high){
//
//        int mid= low+(high-low)/2;
//
//        // now we just need to check whether this mid satisfies the given constraints or not:
//
//        int cows=1;
//
//        int ans=0;
//
//        int prev=stalls[0];
//
//        for(int i=1;i<stalls.size();i++){
//
//            if(stalls[i]-prev>=mid){
//
//                cows++;
//
//                prev=stalls[i];
//
//            }
//
//        }
//
//        if(cows>=k) low=mid+1;
//
//        else high=mid-1;
//
//    }
//
//    return low-1;
//
//}
