#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the  cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price: ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit: "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss: "<<cp-sp;
    }
    else{
        cout<<"No profit, no loss.";
    }
}