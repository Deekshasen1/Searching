#include<iostream>
using namespace std;
int  Binary_Search(int a[],int s,int e,int element){
    int mid=(s+e)/2;
    int flag=0;
    while(s<=e){
    if(a[mid]==element){
          flag=1;
        cout<<"Element  "<<element<<" is present in index ="<<mid+1;
    }
    else if(element<a[mid]){
        return Binary_Search(a,s,mid-1,element);
    }
    else {
        return Binary_Search(a,mid+1,e,element);
    }
    return 0;
    }
    if(s>e){
        cout<<"element is not present in array\n";
    }
    return -1;
}
int main(){
    int n;
    int element;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the element of array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0,end=n;
    char ch,m;
   do{
    cout<<"Enter 1 if you want to search the element\n";
    cout<<"Enter 2 if you want to exit the programme\n";
    fflush(stdin);
     cin>>ch;
     switch (ch)
     {
     case '1':
      
    cout<<"Enter the element\n";
    cin>>element;
      Binary_Search(a,start,end,element);
        break;

      case '2':
      exit(0);
      break;

     default:
     cout<<"Wrong entry\n";
        break;
     }
     cout<<"\nDO YOU want to continue y/n \n";
     fflush(stdin);
     cin>>m;
     fflush(stdin);
   }while(m=='y'||m=='Y');
}