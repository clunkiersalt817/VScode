#include<iostream>
using namespace std;
int main()
{
    int max=0,min=INT_MAX;
    int Arr[5]={4,5,3,6,2};
    for(int i=0;i<5;i++){
        cout<<Arr[i]<<endl;
    }
    
    cout<<endl;
    
    for(int j=4;j>=0;j--){
        cout<<Arr[j]<<endl;
    }

    for(int k=0;k<5;k++){
        if(max<Arr[k])
        max=Arr[k];
    }
    cout<<endl<<"Max element is : "<<max;

    for(int l=0;l<5;l++){
        if(min>Arr[l])
        min=Arr[l];
    }

    cout<<endl<<"Min element is : "<<min;

    return 0;
}