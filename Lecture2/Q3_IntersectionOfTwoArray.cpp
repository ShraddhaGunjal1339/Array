#include<iostream>
#include<vector>

using namespace std;

void intersectionArray(vector<int> arr ,vector<int> brr){
    vector <int> ans;
    //Intersection
    //not works for duplicate elements without adding marking condition 
    //if you add mark it works for duplicate also
    for (int i = 0; i < arr.size(); i++)
    {
        int ele =arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if(ele == brr[j]){
                //to handel duplicate elements
                //mark as already added to ans
                //-->make that element =-1(works for +ve ele array)
                brr[j]=-1;    //IMP

                //if array contain both +ve and -ve number mark using =INT_MIN

                
                ans.push_back(ele);
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


}
//O/P -->7  5  5  5  5  5  4  2  2  2  2  

int main()
{
    vector <int> arr ;
    
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(2);
    
    vector <int> brr ;

    brr.push_back(1);
    brr.push_back(2);
    brr.push_back(3);
    brr.push_back(4);
    brr.push_back(5);
    brr.push_back(5);
    brr.push_back(5);
    brr.push_back(5);
    brr.push_back(5);
    brr.push_back(2);
    brr.push_back(2);
    brr.push_back(2);
    brr.push_back(7);
    brr.push_back(1);

    
    intersectionArray(arr,brr);
    return 0;
}