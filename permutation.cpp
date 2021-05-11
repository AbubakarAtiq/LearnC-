#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
void permutation(string str,int i,int n)
{
    //base condition
    if(i==n-1)
    {
        cout<<str<<endl;
        return;
    }
    //process each character of the remaining string
    for (int j=i;j<n;j++)
    {
        //swap character at index 'i' with the current character
        swap(str [i],str[j]);//STL 'swap()' used
        //recur for substring 'str[i+1,n-1]
        permutation(str,i+1,n);
        //backtrack (restore the string to its original state)
        swap(str[i],str[j]);
    }
}
int main()
{
    string str="ABCDE";
    permutation(str,0,str.length());
    return 0;
    system("pause");
}