//Program to find first and last occurrence of Target in array
//Coded By: Sonu Shriram Vishwakarma
//Time Complexity O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    //Hast table to store indices of all occurrence 
    vector<int> result[10];
    int n;
    
    cout<<"Enter size of array:";
    cin>>n;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        
        cout<<"Enter number" <<i<<" : ";
        cin>>arr[i];
        result[arr[i]].push_back(i);
        
    }
    
    cout<<"First Occurrence: "<<result[target][0]<<endl;
    int last= (result[target].size()-1);
    cout<<"Last occurrence: "<<result[target][last];

    return 0;
}
