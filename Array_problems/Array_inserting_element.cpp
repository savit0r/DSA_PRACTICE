#include<iostream>
using namespace std;

int main(){
    int element;
    int pos;
    int n =5 ;
    int arr[n] ={1,2,3,4,5};

    cout<<"enter position to insert element : ";
    cin>>pos;

    cout<<"enter element to enter : ";
    cin>>element;

    if(pos>=0 &&  pos<8){
        for(int i=n; i>pos ;i--){
            arr[i] = arr[i-1];
            arr[pos] = element ;
        }

        cout<<"arry after insertion :"<<endl;

        for(int i=0 ;i<n ; i++){
            cout<<arr[i];
            cout<<" ";
            
        }


    }

    else
    cout<<"invalid position";
return 0;
}