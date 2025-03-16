#include <iostream>

using namespace std;

// void removeChar(string ans, string original){
//     if (original.length()==0)
//     {
//         cout<<ans;
//         return;
//     }
    
//     char ch = original[0];
//     if (ch=='o')
//     {
//         removeChar(ans,original.substr(1));
//     }
//     else removeChar(ans+ch,original.substr(1));
    
// }

void removeChar(string ans, string original, int idx){
    if (idx == original.length())
    {
        cout<<ans;
        return;
    }
    
    char ch = original[idx];
    if (ch=='o')
    {
        removeChar(ans,original,idx+1);
    }
    else removeChar(ans+ch,original,idx+1);
    
}

int main() {
    
    string str = "Hello World!";
    cout << str << endl;
    removeChar("",str,0);


    return 0;
}
