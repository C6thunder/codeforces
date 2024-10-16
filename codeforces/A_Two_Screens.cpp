#include<bits/stdc++.h>
using namespace std;  
using namespace std;  
  
int main() {  
    int T;  
    cin >> T;  
    string s, t;  
    while (T--) {  
        cin >> s >> t;  
        int nums = s.size();  
        int numt = t.size();  
        int num = min(nums, numt); 
        int matchCount = 0; 
  
        for (int i = 0; i < num; ++i) {  
            if (s[i] == t[i]) {  
                matchCount++;  
            } else {  
                break;  
            }  
        }  
        int sum;
        if(matchCount!=0) sum = nums + numt - matchCount+1;  
        if(matchCount==0) sum = nums + numt - matchCount;
        cout << sum << endl;  
    }  
    return 0;  
}