//Program to find first and last occurrence of Target in array
//Coded By: Sonu Shriram Vishwakarma

#include <bits/stdc++.h>
using namespace std;

int main() {
    //Hast table to store indices of all occurrence 
    vector<int> result[(int)1e3];
    int n;
    
    cout<<"Enter size of array:";
    cin>>n;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int flag = 0;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        
        cout<<"Enter number " <<i<<" : ";
        cin>>arr[i];
        result[arr[i]].push_back(i);
        
        if (arr[i]==target)
              flag = 1;
    }
    
    if(flag==1){
    cout<<"First Occurrence: "<<result[target][0]<<endl;
    int last= (result[target].size()-1);
    cout<<"Last occurrence: "<<result[target][last];
    }
    else{
         cout<<"First Occurrence: "<<-1<<endl;
    int last= (result[target].size()-1);
    cout<<"Last occurrence: "<<-1;
    
     }

    return 0;
}
