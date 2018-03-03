/*    NAME : Mubashar Ahmed
       ID : P17-6165
       SECTION : B
       
       
       THIS IS HEADER FILE FOR INTEGER DATA TYPE ,WHICH IS MADE BY USING THE CONCEPT OF CLASSES AND OBJECTS 
       THIS HEADER FILE CONTAIN ABOUT 25 FUNCTIONS AND ALSO GIVE THE CONCEPT OF CONSATTRACTORS AND DESTRACTORS IN CLASSES
       
*/






#include<iostream>
#include<sstream>
#include<string.h>
#include<cmath>
using namespace std;
class intType
{
	// class instance
	
	private:
		int num;
		
		// class function members 
	public:
		//   Default constractors 
		intType()
		{
			num =0;
		}
		// constractor with parameters 
		intType(int a)
		{
			num = a;
		}
		
		// Destractor
		
		~ intType()
		{
			num = 0;
		}
		
		// functions definations 
		
		
		// function that print values on screen 
		void printNum()
		{
			cout<<" The Entered Number is : "<<num<<endl;
		}
		
		
		// initializer 
		void initialize(int n)
		{
			num = n;
		}
		
		//function for length of integer
		int numLength()
		{
			int count3 =0;
			while(num != 0)
			{
				num /= 10;
				count3++;
				
			}
			return count3;
		}
		
		// conversion of int to string 
		string int_to_string()
		{
			stringstream convt;
			convt<<num;
			return convt.str();
		}
		
		// reverse of number 
		int reverseNum()
		{
			int res4 =0;
			int remainder4;
			while(num !=0)
			{
				remainder4 = num % 10;
				res4 = res4*10 + remainder4;
				num /= 10;
			}
			return res4;
		}
		
		// sum of all digit of the int type number
		int sum_all_digits()
		{
			int res5 =0;
			int remainder5;
			while(num !=0)
			{
				remainder5 = num % 10;
				res5 +=   remainder5;
				num /= 10;
			}
			return res5;
			
		}
		// function for checking number is or not pallindrom
		bool pallindrom() 
		{
			int res =0;
			int remainder;
			int n = num;
			while(num !=0)
			{
				remainder = num % 10;
				res = res*10 + remainder;
				num /= 10;
			}
			if (n == res)
			{
				return true;
			}
			else
			{
				return false;
			}
			
		}
		// find even digits in number
		int count_evens()
		{
			
			int numb = num;
	        int rem1;
	        int count1 = 0;
	        while(numb !=0)
	          {
	            rem1 = numb % 10;
	            if(rem1 % 2 ==0)
	               {
		              count1++;
	               }
	             numb /= 10;
              }
			return count1;
			
		}
		// find odd digits in number
		int count_odds()
		{
			
			int numb6 = num;
	        int rem6;
	        int count6 = 0;
	        while(numb6 !=0)
	          {
	            rem6 = numb6 % 10;
	            if(rem6 % 2 !=0)
	               {
		              count6++;
	               }
	             numb6 /= 10;
              }
			return count6;
			
		}
		// sum of all odd digits in a number
		int sum_odd_digits()
		{
			int numb0 = num;
	        int rem0;
	        int sum0 = 0;
	        while(numb0 !=0)
	          {
	            rem0 = numb0 % 10;
	            if(rem0 % 2 !=0)
	               {
		              sum0  += rem0;
	               }
	             numb0 /= 10;
              }
			return sum0;
			
		}
		// find  sum of all even digits in number
		int sum_even_digits()
		{
			
			int numb9 = num;
	        int rem9;
	        int count9 = 0;
	        while(numb9 !=0)
	          {
	            rem9 = numb9 % 10;
	            if(rem9 % 2 ==0)
	               {
		              count9  +=  rem9;
	               }
	             numb9 /= 10;
              }
			return count9;
			
		}
		// max digit in number
		int max_digit()
		{
			int max =0;
			while ( num > 0 )
                 {
                       int remainder = num % 10;
                       if ( remainder > max )
                        max = remainder;

                        num /= 10;
                 }  
				 return max;            
		}
		// min digit in number
		int min_digit()
		{
			int p,i=0,digit,small=9;
	        p=num;
	        while(num>0)
	        {
		       digit=num%10;
		       if(digit==0)
		        {
			        small=0;
		        }
		       if(digit<=small)
		       {
			      small=digit;
		       }
	
	           num=num/10;
	        }
			
			return small; 
			
		}
		// delete the first digit of number
          int delete_digit(int n)
		  {
		  	if(n>10) return n/10;
		  	if(n<10)return 0;
		  	return delete_digit(n/10);
		  }
        // conversion of decimal to binary
        int toBinary()
        {
        	long dec,rem,i=1,sum=0;
        	dec = num; 
         do
         {
         	rem=dec%2;
         	sum=sum + (i*rem);
         	dec=dec/2;
         	i=i*10;
         }while(dec>0);
         
         
         return sum;
         
		}

        // conversion of decimal to hex
         void toHaxadeciaml(int n)
		 {
		 	char hexaDeciNum[100];
		 	int i = 0;
		 	while(n!=0)
		 	{
			 int temp  = 0;
			 temp = n % 16; 
			 if(temp < 10)
			 {
			 	hexaDeciNum[i] = temp + 48;
			 	i++;
			 }
			 else
			 {
			 	hexaDeciNum[i] = temp + 55;
			 	i++;
			 	
			 }
			  n = n/16;  
	}
	    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
       
    
    
    
		  } 
		  
		  // Addition of numbers
		  int add(int a,int b)
		  {
		  	return a+b;
		  }
		  // subtraction of of number
		  int sub(int c, int d)
		  {
		  	return c-d;
		  }
		  // multiply of two number
		  int multiply(int e, int f)
		  {
		  	return e*f;
		  }
		  // division of two numbers 
		  int devide(int g, int h)
		  {
		  	return g/h;
		  }
		  // remainder finder
		  int remainder(int a)
		  {
		  	return num % a;
		  }



		
};


	

	
	
	
	
	
	
	
	





