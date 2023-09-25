#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> arr ;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    
    vector <int> brr ;

    brr.push_back(3);
    brr.push_back(4);
    brr.push_back(9);
    brr.push_back(10);

    vector <int> ans;

    //Intersection

    for (int i = 0; i < arr.size(); i++)
    {
        int ele =arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if(ele == brr[j]){
                ans.push_back(brr[j]);
            }
        }
        
    }

    
    // for (int i = 0 ; i < ans.size() ; i++){
    //     cout  <<ans[i] << "  ";
    // }   Or write below code 


    //Priting an ans array
    for (auto value :ans){
        // : --> belongs to 
        /*
        Explanation

        for ( range_declaration : range_expression ) 
            loop_statement

        Parameters :
        range_declaration : 
        a declaration of a named variable, whose type is the 
        type of the element of the sequence represented by 
        range_expression, or a reference to that type.
        Often uses the auto specifier for automatic type 
        deduction.

        range_expression : 
        any expression that represents a suitable sequence 
        or a braced-init-list.

        loop_statement : 
        any statement, typically a compound statement, which
        is the body of the loop.

        */

        cout << value << "  ";
    }
    cout << endl;

    return 0;
}