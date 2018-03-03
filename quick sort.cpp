#include<iostream>
using namespace std;
void sort(int ,int ,int);
int partition(int ,int,int);

int partition(int *testArray ,int m, int n)
{
	int piviot=testArray[n];
    int seprtd=m;
    int i,t;
    for(i=m;i<n;i++)
    {
    	if(testArray[i]<=piviot)
        {
        	t=testArray[i];
            testArray[i]=testArray[seprtd];
            testArray[seprtd]=t;
            seprtd++;
        }
	}

    t=testArray[n];
    testArray[n]=testArray[seprtd];
    testArray[seprtd]=t;
    return seprtd;
}


void sort(int *testArray,int m,int n)
{
	if(m<n)
	{
		int seprtd=partition(testArray,m,n);
        sort(testArray,m,seprtd-1);
        sort(testArray,seprtd+1,n);
	}
}


int main()
{
	int testArray[6];

	cout<<"\n\n\n Fill The Array by Puting Random Values \n\n\n";
	
	//Inputs
	for(int i=0; i<6; i++)
	{
		cout<<" Enter the "<<i+1<<" element of Array: ";
		cin>>testArray[i];
	}
	
	//calling function of sort
	sort(testArray,0, 5);
	
	//output
	cout<<"Sorted array is :- ";
    for(int i=0;i<6;i++)
    {
    	cout<<testArray[i]<<" ";
	}
	return 0;
	
}
