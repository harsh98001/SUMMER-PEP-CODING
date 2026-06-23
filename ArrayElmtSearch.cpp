#include<iostream>
using namespace std;
int main(){
    int arr[20]={20,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,150,200,250,300};
    int n,i;
    int found = 0;
    cout<<"Enter the Number :--------------"<<endl;
    cin>>n;
    for(i=0;i<20;i++){
        if(n==arr[i]){
            found=1;
            break;
        }
    }
    if(found==1){
        cout<<"Yes the number is found"<<endl;
    } 
    else
    {
        cout<<"Number Not found"<<endl;
    }
    return 0;

}