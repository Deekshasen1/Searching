#include<iostream>
using namespace std;
int fun(int a[],int n);
int main(){
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    char m,ch;
    do{
    cout<<"Enter 1 if you want search element\n";
    cout<<"Enter 2 if exit from programme\n";
    fflush (stdin);
    cin>>m;
    switch (m)
    {
    case '1':
        fun(a,n);
        break;
    
    case '2':
       exit(0);
       break;
    default:
        cout<<"Wrong entry";
        break;
    }
    fflush(stdin);
    cout<<"Do you want to continue y/n\n";
    cin>>ch;
    fflush(stdin);
    }
    while(ch=='y' || ch=='Y');
}
int fun(int a[],int n){
    int element,flag=0,index;
    cout<<"Enter the number do you want to search\n";
    cin>>element;
    for( int i=1;i<=n;i++){
        if(element==a[i]){
            index=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element  " <<element<<" are present in index = "<<index<<"\n";
    }
    else{
        cout<<"Element not present in array\n";
    }
    return 0;
}