#include<iostream>
using namespace std;

int main()
{
    // vector <int> a ;
    // vector <int> b;

    int a []= {1,3,5,7,9};
    int sizea=5;
    int b [] = {2,4,6,8};
    int sizeb=4;

    vector<int> ans ;

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(a[i]);
    }

     for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(b[i]);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<"  ";
    }
    
    return 0;
}