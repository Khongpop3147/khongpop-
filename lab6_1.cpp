#include<iostream>
using namespace std;

int main()
{
    int x;
    int odd =0;
    int even =0;
    
    do
    {
        cout << "Enter an integer: "  ;
        cin >> x ;
    
        if (x%2 ==0 && x !=0){
        even++;
        }
        if (x%2 !=0){ 
        odd++;
        }
    } while(x !=0);
   cout << "#Even numbers = " << even << endl;
   cout << "#Odd numbers = " << odd ;
    return 0;
}