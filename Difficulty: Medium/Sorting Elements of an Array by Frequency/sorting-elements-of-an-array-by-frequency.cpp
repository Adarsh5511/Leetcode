#include<iostream>
#include<unordered_map>
#include<vector>
#include <algorithm>
using namespace std;


bool comp(pair<int,int>&a,pair<int,int>&b){
    
    if(a.second==b.second){
        return a.first<b.first;
    }
    
    return a.second>b.second;
}

int main()
 {
	
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;  // Number of elements in the array
        vector<int> a(n);
        
        // Reading input array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Frequency map
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[a[i]]++;  // Count the frequency of each element
        }

        // Create a vector of pairs (element, frequency)
        vector<pair<int, int>> v;
        for (auto i : m) {
            v.push_back({i.first, i.second});
        }

        // Sort the vector by frequency and element value
        sort(v.begin(), v.end(), comp);

        // Print the elements according to their frequency
        for (auto i : v) {
            int x = i.first;  // Element
            int f = i.second;  // Frequency
            while (f--) {  // Print the element `f` times
                cout << x << " ";
            }
        }
        cout << endl;  // Newline after each test case
    }

    return 0;
	

}