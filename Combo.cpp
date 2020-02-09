#include<iostream>
using namespace std;
void Combo(int,int,int,int*);

int main()
{
    int sum,var;
    cout<<"\nEnter the number of variables: ";
    cin>>var;
    cout<<"\nEnter the sum required: ";
    cin>>sum;
    int* array=new int[var];
    cout<<"\nThe possible combinations are: "<<endl;
    Combo(var-1,sum,0,array);
    return 0;
}
void Combo(int size,int tsum,int start,int* arr)		/*size=(number of variables req.-1)||last index of array
														  tsum=total sum required using enterd number of variables
                                                          start=starting index of the array */
   {
	 
    if(start>size)
    {
        if (tsum==0)									//Do not allow other combinations of 3 digit for which tsum!=0
        {
        	for(int i=0;i<=size;i++)    				//Prints the array when index of array exceeds the size entered inside recursion.
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=tsum;arr[start]>=0;arr[start]--)
        Combo(size,tsum-arr[start],start+1,arr);        /*During recursion the function prints the value at individual index to make the 
														  sum equal to total sum entered. */
    }
}
