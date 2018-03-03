# include<iostream>
# include<string.h>

using namespace std;
struct input
{
	string key;
	string text;
	string alph= "ABCDEFGHIKLMNOPQRSTUVWXYZ";
	

};
int main()
{
	
	input data;
	
	
	const int row = 5;
	const int col = 5;
	
	cout<<"\n";
	cout<<"\n\n\n !!!!!!!!!! This Program Will Encrypt The Given Text According to given table !!!!!!!!!!\n\n\n";
	cout<<"             ........................................\n\n\n";
	cout<<"Enter the Key : ";
	cin>>data.key;
		for(int i =0 ;i<data.key.length() ;i++)
    	{
	    	data.key[i] = data.key[i]- 32;
	    }
	    
	cout<<"Enter the text : ";
	cin>>data.text;
	int x = data.text.length();
	for(int i = 0; i < x; ++i)
    {
        if (!((data.text[i] >= 'a' && data.text[i]<='z') || (data.text[i] >= 'A' && data.text[i]<='Z')))
        {
            data.text[i] = '\0';
        }
    }
    
    
    for(int i =0 ;i<data.text.length() ;i++)
    	{
	    	data.text[i] = data.text[i]- 32;
	    }
	    
    char encrypt[x];
    cout<<"\n";
    cout<<"\n";
    char arr[row][col] = { 0 };
    



for (int i = 0; i < data.key.size(); i++)
 {
 	
     for (int j = 0; j < data.alph.size(); j++) 
     
	 {
	 	
         if (data.key[i] == data.alph[j]) 
		 {
               data.alph.erase(j, 1);
         }
     }
 }


data.key.append(data.alph);
int index = 0;
for (int row = 0; row < 5; row++) 
   {
   	    
       for (int col = 0; col < 5; col++) 
	    {
                arr[row][col] = data.key[index];
                index++;



                if (arr[row][col] == arr[row][col-1])
                    {
                        arr[row][col] = arr[row][col+1];
                          col -= 1;
                    }

        }
   }
   for(int i=0 ;i<5;i++)
   {
   	for(int j=0; j<5; j++)
   	{
   		cout<<arr[i][j];
	   }
	   cout<<endl;
   }
  int counter=0;
for (int i=0; i<x;i++)
{
	for(int j=0; j<5; j++)
	{
		for(int k=0; k<5; k++)
		{
			if(data.text[i]==arr[j][k])
			{
				if(k<=3)
				{
				encrypt[i]=arr[j][counter];
				
			    }
				else
				{
					encrypt[i]=arr[j][1];
					
				}
			counter++;	
			}
		}
	}
}
   
   cout<<"\n";
   cout<<encrypt;
   
	
	
	
}

