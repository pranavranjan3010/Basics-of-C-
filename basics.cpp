//BASICS PROGRAMS OF THE C++....................
//Hello world
/*
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
main()
/*
{
	cout<<"Hello world";
	return 0;
}
*/
//Variables..
/*
{
	int a=12;
	float f=8.88;
	char c='A';
	cout<<"value of a"<<"="<<a<<endl;
	cout<<"value of f"<<"="<<f<<endl;
    cout<<"value of c"<<"="<<c<<endl;
    return 0;
}
*/
//Data Types.......
//User input in Data types...
/*
{
	int a;
	float f;
	char c;
	cout<<"enter the value of a\n";
	cin>>a;
	cout<<"enter the value of f\n";
	cin>>f;
	cout<<"enter the value of c\n";
	cin>>c;
	cout<<"value of a"<<"="<<a<<"\nvalue of f"<<"="<<f<<"\nvalue of c"<<"="<<c<<endl;
	return 0;
}
*/
/*
//Other Data types..
{
long a=3248902;
double d=8.993043;
cout<<"\nvalue of a"<<"="<<a<<"\nvalue of d"<<"="<<d<<endl;
return 0;
}
*/
//Operators in c++........(Arithmetic,relational,Assignment,Logical,Bitwise)
//Arithmetic operators.....
/*
{
	int a=100,b=15;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
    cout<<a/b<<endl;
    return 0;
}
*/
/*
//User input........
{
 float a,b;
 cout<<"enter the numbers\n";
 cin>>a>>b;
 cout<<"a+b"<<"="<<a+b<<endl;
 cout<<"a-b"<<"="<<a-b<<endl;
 cout<<"a*b"<<"="<<a*b<<endl;
 cout<<"a/b"<<"="<<a/b<<endl;
 return 0;
}
*/
/*
//Relational operator.....(>,<,>=,<=,==,!=)
{
	int a;
	cout<<"enter the numebr\n";
	cin>>a;
	if(a>=18)
	{
	cout<<"you are mature";	
	}
	else
	{
		cout<<"you are not mature";
	}
	return 0;

}
*/
/*
//Assignment operator.......(=)
{
	int a=10;
	cout<<a;
	return 0;
}

*/
/*
//Logical operator .............(&& ,||- And ,or)
//And operator....
{
	int age;
	cout<<"enter the age\n";
	cin>>age;
	if(age>=18&&age<=60)
	{
		cout<<"you can drive";
	}
	else
	{
		cout<<"you cannot drive";
	}
	return 0;
}
*/
//Or operator......
/*
{
	int marks;
	cout<<"Enter your marks\n";
	cin>>marks;
	if(marks>=90||marks<101)
	{
		cout<<"A++";
	}
	else
	{
		cout<<"you are not in rank holder";
	}
	return 0;
}
*/
/*
//Conditional statements......(if,else,if-else,else-if)
{
	int age;
	cout<<"enter your age\n";
	cin>>age;
	if(age>=18)
	{
		cout<<"you can vote";
	}
	else
	{
		cout<<"you cannot vote";
	}
	return 0;
}
*/
/*
//Greatest of three numbers...............
{
int a,b,c;
cout<<"enter the three numbers\n";
cin>>a>>b>>c;
if(a>b&&a>c)
{
	cout<<"a is greater number";
}
else if(b>a&&b>c)
{
	cout<<"b is greater number";
}
else
{
	cout<<"c is greater number";
}
return 0;
}
*/
/*
//loops....(for,while,do while)....
//for loop.....
{
	int i;
	for(i=1;i<=5;i++)
	{
		cout<<i<<endl;
		
	}
	return 0;
}
*/
/*
//While loop.....
{
	int i=1;
	while(i<=5)
	{
		cout<<i<<endl;
		i++;
	}
	return 0;
}
*/
/*
 //Do while loop..........
 {
 	int i=1;
 	do
 	{
 		cout<<i<<endl;
 		i++;
	 }
	 while(i<=5);
	 return 0;
	 
 }
 */
 /*
 //Other Programs.......
 //odd or even number....
 {
 	int n;
 	cout<<"enter the number\n";
 	cin>>n;
 	if(n%2==0)
 	{
 		cout<<"even number";
	 }
	 else
	 {
	 	cout<<"odd number";
	 }
	 return 0;
}
*/
/*
//Positive or negative number......
{
	int n;
	cout<<"enter the number\n";
	cin>>n;
	if(n>0)
	{
		cout<<"positive number";
	}
	else
	{
		cout<<"negative number";
	}
	return 0;
}
*/
/*
//Factorial of number......
{
	int n,fact=1,i;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	cout<<"factorial of the number"<<"="<<fact<<endl;
	return 0;
}
*/
/*
//Prime number..........
{
	int n,i,count=0;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)

{
	cout<<"prime number";
 } 
 else
 {
 	cout<<"not a prime number";
 }
 return 0;
}
*/
/*
//Reverse of the number....
{
	int n,r,rev=0;
	cout<<"enter the number\n";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	cout<<"reverse of the number is"<<"="<<rev;
	return 0;
}
*/
/*
//Palindrome number.............
{
	int n,r,rev=0,t;
	cout<<"enter the number\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(rev==t)
	{
		cout<<"palindrome number";
	}
	else
	{
		cout<<"not a palindrome number";
	}
	return 0;
}
*/
/*
//Armstrong number......
{
	int n,r,t,rev=0;
	cout<<"enter the number\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		rev=rev+r*r*r;
		n=n/10;
	}
     if(rev==t)
     {
     	cout<<"Armstrong number";
	 }
	 else
	 {
	 	cout<<"Not a armstrong number";
	 }
	 return 0;
}
*/
/*
//Table of any number.......
{
	int n,i;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		
	}
	return 0;
}
*/
/*
//Fibonacci Series..........
{
	int n,i,a=0,b=1,c;
	cout<<"enter the elements\n";
	cin>>n;
	cout<<"Fibonacci series:\n";
	for(i=1;i<=n;i++)
	{
		c=a+b;
		
		cout<<a<<endl;
		a=b;
		b=c;
	}
	return 0;
}
*/
/*
//Swapping values.........
{
int a,b,t;
cout<<"enter the values\n";
cin>>a>>b;
 cout<<"Values before swapping:"<<"a"<<"="<<a<<"\n"<<"b"<<"="<<b<<endl;
  t=a;
  a=b;
  b=t;
  cout<<"Values after swapping:"<<"a"<<"="<<a<<"\n"<<"b"<<"="<<b<<endl;
  return 0;
}
*/
/*
//Area of circle;
{
	float r;
	cout<<"enter the radius\n";
	cin>>r;
	float ar=3.14*r*r;
	cout<<"Area of circle"<<"="<<ar<<endl;
	return 0;
}
*/
/*
//Area of triangle......
{
	float b,h;
	cout<<"enter the base and height of triangle\n";
	cin>>b>>h;
	float ar=0.5*b*h;
	cout<<"Area of the triangle"<<"="<<ar<<endl;
	return 0;
}
*/
/*
//Simple interest...............
{
float p,r,t,si;
cout<<"enter the principal,rate,time\n";
cin>>p>>r>>t;
si=(p*r*t)/100;
cout<<"Simple interest"<<"="<<si<<endl;
return 0;
}
*/
/*
//Strings...............
//Print the string.......
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	cout<<"entered string is:"<<str<<endl;
	return 0;
}
*/
/*
//Length of the string..........
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	int len=strlen(str);
	cout<<"length of the string:"<<len<<endl;
	return 0;
}
*/
/*
//Reverse of the string.......
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strrev(str);
	cout<<"reverse of the strine is:"<<str<<endl;
	return 0;
}
*/
/*
//Lowercase and the Uppercase of the string.........
Uppercase string.....
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strupr(str);
	cout<<"Uppercase of the string:"<<str<<endl;
	return 0;
}
*/
/*
//Lowercase of the string.........
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strlwr(str);
	cout<<"lowercase of the string is: "<<str;
	return 0;
}
*/
/*
//Concatenate strings.........
{
char  str1[90]="harry",str2[90]="potter";
	strcat(str1,str2);
	cout<<str1,str2;
	return 0;
}
*/
/*
//Copy strings..............
{
char str1[90],str2[90];
cout<<"enter the string\n";
gets(str1);
strcpy(str2,str1);
cout<<"copied string is"<<str2;
return 0;
}
*/
/*
//Arrays.............
//Indexing......
{
	int arr[5]={1,2,4,6,7};
	
	{
		cout<<arr[1]<<endl;
		cout<<arr[2]<<endl;
		cout<<arr[0]<<endl;
		cout<<arr[3]<<endl;
		cout<<arr[4]<<endl;
		
	}
	return 0;
}
*/
/*
//Arrays Elements print..........
{
	int arr[10],n,i;
	for(i=1;i<=5;i++)
	{
		cout<<"enter the elements\n";
		cin>>arr[i];
	}
	cout<<"Elements are:\n";
	for(i=1;i<=5;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	return 0;
}
*/
/*
//Sum of the first n elements........
{
	int arr[10],i,sum=0;
	for(i=1;i<=5;i++)
	{
	
	cout<<"enter the elemnts\n";
	cin>>arr[i];

		sum=sum+arr[i];
	}
	cout<<"sum of the numbers"<<"="<<sum;
	return 0;
}
*/
/*
//Switch case ...........................
{
	int day_num;
	cout<<"enter the day number\n";
	cin>>day_num;
	switch(day_num)
	{
		case 1:
			cout<<"monday";
			break;
			case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"wednesdsy";
			break;
			case 4:
				cout<<"Thursday";
				break;
				case 5:
					cout<<"Friday";
					break;
					case 6:
						cout<<"Saturday";
						break;
						case 7:
						cout<<"!!Sunday!!";
						break;
						default:
							cout<<"enter the valid day number(1 to 7)";
		}
		return 0;	
	}
	*/
	/*
	//Goto keyword......
	{
		int n;
		ZERO:
			cout<<"enter the number\n";
			cin>>n;
			if(n==0)
			{
				goto ZERO;
			}
			
			
			cout<<n;
			return 0;
			
	}
	*/
	/*
	
	// Class and objects.................
	#include<stdio.h>
	#include<iostream>
	#include<string.h>
	using namespace std;
	/*
	class Student
	{
		public:
		
			int roll;
			float marks;
	};
	main()
	{
		Student s;
		
		s.roll=57;
		s.marks=9.78;
		
		cout<<"Roll"<<"="<<s.roll<<endl;
		
		
		cout<<"Marks"<<"="<<s.marks<<endl;
		return 0;
		
	}
	*/
	/*
	class car
	{
		public:
			char name[200];
			int number;
			long price;
		
	};
	main()
	{
		car c;
		cout<<"enter the car name\n";
		gets(c.name);
		cout<<"enter the model number\n";
		cin>>c.number;
		cout<<"enter the price of the car\n";
		cin>>c.price;
		cout<<"Car name"<<"="<<c.name<<endl;
		cout<<"Car model number"<<"="<<c.number<<endl;
		cout<<"Car price"<<"="<<c.price<<endl;
		return 0;
	}
	*/
