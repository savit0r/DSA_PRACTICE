#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int item;
    cout<<"enter item to be  searched:"<<endl;
    cin>>item;

    int flag = 0;

    for(int i=0;i<10;i++){
        if(arr[i]==item){
            flag = 1;
            break;

        }

    }

    if(flag == 1)
    cout<<"item founnd successfully"<<endl;

else
cout<<"item not found";

return 0;

}
