#include<iostream>
using namespace std;
int main()
{

    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }
    int i;
    int key;
    cin>>key;
    int(int i =0; i<=n-1;i++)
    {
        if (arr[i]==key)
        {
            cout<<"key is present"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"key is not present"<<endl;
    }
}