#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,num,n,cnt=0,pos;
	cout<<"\n enter array size:";
	cin>>n;
	cout<<"\n enter array elements:\n";
	for(i=0;i<n;i++)
	{
		cout<<" ";
		cin>>arr[i];
    }
    cout<<"\n enter element to be searched:";
    cin>>num;
    for(i=0;i<n;i++)
    {
    	if(arr[i]==num)
    	{
    		cnt=1;
    		pos=i+1;
    		break;
        }
    }
        if(cnt==0)
        {
        	cout<<"\n element not found..!!";
        }
        else
        {
        	cout<<"\n element"<<num<<" found at position"<<pos;
        }
        return 0;
}
		
		
		
	
	

