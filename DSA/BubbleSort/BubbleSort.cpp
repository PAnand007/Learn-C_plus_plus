#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
int main(){
    vector <int> v(7);
    int n = v.size();
    cout<<"Enter the digits"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    cout<<"Before"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i] << " ";
    }
    //Bubble sort algorithm
    for (int i = 0; i < n - 1 ; i++)
    {
       for (int j = 0; j < n -i -1; j++) //j< n-1 can also wors but it will be efficient
       {
        if (v[j]>v[j+1])
        {
            int temp = v[j]; //swap or swap(v[j],v[j+1])
            v[j] = v[j+1];
            v[j+1] = temp;
        }
        
       }
       
    }

    // for (int i = 0; i < n - 1 ; i++)
    // {
    //    for (int j = 0; j < n -1; j++) //j< n-1 can also wors but it will be efficient
    //    {
    //     if (v[j]>v[j+1])
    //     {
    //         int temp = v[j]; //swap or swap(v[j],v[j+1])
    //         v[j] = v[j+1];
    //         v[j+1] = temp;
    //     }
        
    //    }
       
    // }
    
    cout<<endl;

    

    cout<<"After"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<< " ";
    }
    


    return 0;
}