# include<iostream>
using namespace std;
int max(int,int,int,int,int);
int integerlength(int);
char lowerLetter(char);
bool ispalindrome(int);
int main()
{
	int num1,num2,num3,num4,num5,result;
	cout<<"\n\n\n                You have to Enter 5 Numbers to find Maximum...... \n\n\n";
	cout<<"Enter First number : ";
	cin>>num1;
	cout<<"Enter Second number : ";
	cin>>num2;
	cout<<"Enter Third number : ";
	cin>>num3;
	cout<<"Enter Forth number : ";
	cin>>num4;
	cout<<"Enter Fifth number : ";
	cin>>num5;
	result = max(num1,num2,num3,num4,num5);
	cout<<"Maximum Number is : "<<result<<endl;
	
	
	
	
	int number,output;
	cout<<"\n\n\n      This program give the length of the Number.....\n\n\n";
	cout<<" Enter The Number To Find Their Length : ";
	cin>>number;
	output = integerlength(number);
	cout<<" The length of your Number is : "<<output<<endl;
	
	
	
	
	char ch,output2;
	cout<<"\n\n\n      This program give the uppercase of the charcter .....\n\n\n";
	cout<<" Enter The char To get its uppercase : ";
	cin>>ch;
	output2 = lowerLetter(ch);
	cout<<" The Uppercase of char  is : "<<output2<<endl;

	
	int number1;
	cout<<"\n\n\n                 Enter number to check  pallindrome   ...... \n\n\n";
	cout<<"Enter  number : ";
	cin>>number1;
	ispalindrome(number1);
    if (ispalindrome(number1) == true)
    {
    	cout << "Number is a palindrome." << endl;

	}
	else
	{
		cout << "Number is not a palindrome." << endl;

	}

	
}


// this function find maximum number
int max(int num1,int num2,int num3,int num4,int num5)
{
	if(num1 > num2 && num1 > num3 && num1 > 4 && num1 > num5)
	{
		return num1;
	}
	else if(num2 > num3 && num2 > num4 && num2 > num5 )
	{
		return num2;
	}
	else if(num3 > num4 && num3 > num5 )
	{
		return num3;
	}
	else if(num4 > num5  )
	{
		return num4;
	}
	else
	{
		return num5;
	}
}

// this function find the length of number 
int integerlength(int number)
{
	int counter=0;
      while(number)
     {        
            number=number/10;
            counter++;
      }
      return (counter);
}

// this function  change lowercase to upper case
char lowerLetter(char ch)
{
	if(ch>= 'a' && ch<= 'z')
	{
		return ch;
	}
	else
	{
		ch = ch+32;
		return ch;
	}
}


// check the number is palindrome by this Function
int numRem;
bool isPalindrome(int number1)
{  
    int holdNum = number1;
    while (number1 > 0)
    {
        numRem = (numRem * 10) + (number1 % 10);
        number1 = number1 / 10;
        cout << "holdNumber = " << holdNum << endl;
        cout << "numRem = " << numRem << endl;
        cout << "number = " << number1 << endl;
    }
    if (holdNum != numRem)
    {
        return false;
    }
    return true;
}

