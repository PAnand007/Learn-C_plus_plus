#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

//sort in ascending or decending of if simply sort is wrriiten then ascending
// IN built sort time complexity 0 O(n log n)
int main(){
    vector <int> v(5);
    cout<<"Enter the digits"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>v[i];
    }

    cout<<"Before"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());

    cout<<"After"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<endl;
    }
    


    return 0;
}