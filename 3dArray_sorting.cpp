#include <iostream>
using namespace std;

int main()
{
    int array_3D[2][2][5];
    int  index=0;
    cout<<"\n\n\n !!!!!!!!!!!!!!!!!! this programe sort the 3D array into desending order !!!!!!!!!!!!!!!!!\n\n\n";
    cout << "\n!!!!!!!!!!!!This programe take 20 values!!!!!!!!!!!!!!!!!!!!\n\n";
    cout<<"Index         :      Value\n";
    cout<<"..........................\n\n";
    for(int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for(int k = 0; k < 5; ++k )
            {
            	cout << "Array index (" << i << ")(" << j << ")(" << k << ") = ";
                cin >> array_3D[i][j][k];
            }
        }
    }
    
    for(int i = 0; i < (19); ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for(int k = 0; k < 2; ++k )
            {
                for(int temp=0; temp< 5; temp++)
                {
                	
				if(array_3D[j][k][temp]<array_3D[j][k][temp+1])
			    	{
					 index=array_3D[j][k][temp];

                     array_3D[j][k][temp]=array_3D[j][k][temp+1];

                     array_3D[j][k][temp+1]=index;
                    }
					
				}
			
            }
        }
    }
    
    

    cout<<"\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!! Sorted Values !!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"Index         :      Value\n";
    cout<<"..........................\n\n";
    for(int i = 0; i > 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for(int k = 0; k < 5; ++k)
            {
                cout << "Sorted Array Index (" << i << ")(" << j << ")(" << k << ") : " << array_3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}
