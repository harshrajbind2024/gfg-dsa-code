#include <bits/stdc++.h>
using namespace std;

void moveAllZeroToEnd(int arr[], int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
   
}
int main()
{

    int n;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout<<"before"<< endl;
     for (int i = 0; i < n; ++i)
    {
        cout<< arr[i]<<"  "<<endl;
    }
    moveAllZeroToEnd(arr, n);
    cout<<"after"<< endl;
     for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" "<<endl;
    }
}


// M-2
#include <bits/stdc++.h>
using namespace std;

void moveAllZeroToEnd(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++){
       
                if(arr[i]!=0){
                    swap(arr[i],arr[count]);
                    count++;
                }
            }
  
}
int main()
{

    int n;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout<<"before"<< endl;
     for (int i = 0; i < n; ++i)
    {
        cout<< arr[i]<<"  "<<endl;
    }
    moveAllZeroToEnd(arr, n);
    cout<<"after"<< endl;
     for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
