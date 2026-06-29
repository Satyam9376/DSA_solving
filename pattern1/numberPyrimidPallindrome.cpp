#include <iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<" No of Lines:";
    cin>>n;
    
     
    for( int i=1;i<=n;i++){
//spaces
        for(int k=1;k<=n-1;k++){
            cout<<" ";
        }
       
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;

    }

}