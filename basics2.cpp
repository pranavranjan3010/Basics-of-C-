#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
main()

/*
{
	cout<<"hello world";
	return 0;
}
*/
/*
{
	int a=10,b=90;
	cout<<a<<"\n"<<b<<endl;
	return 0;
}
*/
/*
{
	int a=10;
	float f=9.78;
	char c='A';
	cout<<a<<"\n"<<f<<"\n"<<c<<endl;
	return 0;
}
*/
/*
{
	int a;
	float f;
	char c;
	cout<<"enter the values\n";
	cin>>a>>f>>c;
	
	cout<<a<<"\n"<<f<<"\n"<<c<<endl;
	return 0;
}
*/
/*
{
	int a;
	cout<<"Enter the number\n";
	cin>>a;
	cout<<a<<endl;
	return 0;
}
*/
/*
{
	int a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	float sum=a+b;
	cout<<sum<<endl;
	return 0;
}
*/
/*
{
	int a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	float sum=a-b;
	cout<<sum<<endl;
	return 0;
}
*/
/*
{
	int a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	float sum=a*b;
	cout<<sum<<endl;
	return 0;
}
*/
/*
{
	float a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	float sum=a/b;
	cout<<sum<<endl;
	return 0;
}
*/
/*
{
	int a,b;
	cout<<"enter the numbrs\n";
	cin>>a>>b;
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<a*b<<endl;
	cout<<a/b<<endl;
	return 0;
}
*/
/*
{
	int a=10;
	cout<<a++;
	return 0;
}
*/
/*
{
	int a=1,b=5;
	if(a==b)
	{
		cout<<"false";
		
	}
	if(a!=b)
	{
		cout<<"true";
	}
	return 0;
}
*/
/*
{
	int age;
	cout<<"Enter the age\n";
	cin>>age;
	if(age>=18||age<60)
	{
		cout<<"you can drive the car";
	}
	else
	{
		cout<<"not allowed";
	}
	return 0;
	
}
*/
/*
{
	int i;
	for(i=1;i<=5;i++)
	{
		cout<<i<<endl;
		
	}
}
*/
/*
{
	int i=1;
	while(i<=5)
	{
		cout<<i<<endl;
		i++;
		
	}
}
*/
/*
{
	int i=1;
	do
	{
		cout<<i<<endl;
		i++;
	}
	while(i<=5);
}
*/
/*
{
	int age;
	cout<<"enter the age\n";
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
}*/
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;i<=i;j++)
		{
			cout<<"*";
			cout<<"\n";
		}
		
	
	}
}
*/
/*
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
}*/
/*

	{
	int n;
	cout<<"enter the number\n";
	cin>>n;
	if(n>0)
	{
		cout<<"positve number";
	}
	else
	{
		cout<<"negative number";
	}
	return 0;
}
*/
/*
{
	int n,i,fact=1;
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
{
	int a,b;
	cout<<"enter the number\n";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"a is greater number";
	}
	else
	{
		cout<<"b is greater number";
	}
	return 0;
}
*/
/*
{
	int a,b,c;
	cout<<"enter the number\n";
	cin>>a>>b>>c;
	if(a>b&&a>>c)
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
}*/
/*
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
		cout<<"not a primne number";
	}
}
*/
/*
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
	 cout<<rev<<endl;
	 return 0;
}
*/
/*
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
{
	int n,r,rev=0,t;
	cout<<"enter the number\n";
	cin>>n;
	t=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		rev=rev+r*r*r;
	}
	 if(rev==t)
	 {
	 	cout<<"Armstrong number";
	 }
	 else
	 {
	 	cout<<"not a armstrong number";
	 }
	 return 0;
}
*/
/*
{
	int n,r,sum=0;
	cout<<"enter the number\n";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	 cout<<sum<<endl;
	 return 0;
}
*/
/*
{
	int n,i,a=0,b=1,c;
	cout<<"enter the elements\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		cout<<a<<endl;
		a=b;
		b=c;
	}
}
*/
/*
{
	int a,b;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	cout<<"before swapping:\n";
	cout<<a<<"\n"<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping:\n";
	cout<<a<<"\n"<<b<<endl;
	return 0;
}
*/
/*
{
	int a,b,t;
	cout<<"enter the numbers\n";
	cin>>a>>b;
	cout<<"before swapping:\n";
	cout<<a<<"\n"<<b<<endl;
	t=a;
	a=b;
	b=t;
	
	cout<<"after swapping:\n";
	cout<<a<<"\n"<<b<<endl;
	return 0;
}
*/
/*
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==2)
		{
			continue;
		}
		cout<<i<<endl;
	}
}
*/
/*
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==2)
		{
			break;
		}
		cout<<i<<endl;
	}
}
*/
/*
{
	int n ;
	ZERO:
		cout<<"enter the number\n";
		cin>>n;
		if(n==0)
		{
			goto ZERO;
			
		}
		else
		{
			cout<<"You entered number:"<<n<<endl;
		}
	}
*/
/*
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	cout<<"you entered string:"<<str<<endl;
	return 0;
}
*/
/*
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	int len=strlen(str);
	cout<<"you entered string length:"<<len<<endl;
	return 0;
}
*/
/*
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strrev(str);
	cout<<"you entered string revrse is:"<<str<<endl;
	return 0;
}*/
/*
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strupr(str);
	cout<<"you entered string:"<<str<<endl;
	return 0;
}
*/
/*
{
	char str[90];
	cout<<"enter the string\n";
	gets(str);
	strlwr(str);
	cout<<"you entered string:"<<str<<endl;
	return 0;
}
*/
/*
{
	char str1[90]="harry",str2[90]="potter";
	strcat(str1,str2);
	cout<<str1<<""<<endl;
	return 0;
}
*/
/*
{
int r;
cout<<"enter the radius\n";
cin>>r;
float ar=3.14*r*r;
cout<<ar<<endl;
return 0;
}
*/
/*
{
	int l,b;
	cout<<"enter the values\n";
	cin>>l>>b;
	float ar=l*b;
	cout<<ar<<endl;
	return 0;
}
*/
/*
{
	float p,r,t;
	cout<<"enter the values\n";
	cin>>p>>r>>t;
	float si=p*r*t/100;
	cout<<si<<endl;
	return 0;
}
*/
/*
{
	int c;
	cout<<"enter the temperature in celsius\n";
	cin>>c;
	 float f=(c*9)/5+32;
	cout<<"Temperature in fahrenheit:"<<f<<endl;
}
*/
/*

{
	int f;
	cout<<"enter the temperature in fahrenheit\n";
	cin>>f;
	 float c=f*(5+32)/9;
	cout<<"Temperature in celsius:"<<c<<endl;
}
*/
/*
{
	int a;
	cout<<"enter the number\n";
	cin>>a;
	float vol=a*a*a;
	cout<<vol<<endl;
	return 0;
}
*/
/*
{
	int r,h;
	cout<<"Enter the values\n";
	cin>>r>>h;
	float v=0.3*3.14*r*r*h;
	cout<<v<<endl;
	return 0;
}*/
/*
{
	int n;
	cout<<"enter the number\n";
	cin>>n;
	float s=n*n;
	cout<<s<<endl;
	return 0;
}
*/
/*
{
	int n,i;
	cout<<"enter the number\n";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;

	}
}
*/
/*
{
	int a,b;
	cout<<"enter the number\n";
	cin>>a>>b;
	int max =a>b?a:b;
	cout<<max<<endl;
	return 0;
}
*/
/*
{
int num;
cout<<"enter the number\n";
cin>>num;
switch(num)
	
	{
		case 1:
			cout<<"one";
			break;
			case 2:
				cout<<"two";
				break;
				case 3:
					cout<<"three";
					break;
					case 4:
						cout<<"four";
						break;
						case 5:
							cout<<"five";
							break;
							default:
								cout<<"invalid number";
								
	}
}
*/
/*
class student
{
	public:
		char name[90];
		int roll;
		float marks;
	};
	main()
	{
		student s;
		cout<<"enter the name\n";
		gets(s.name);
		cout<<"enter the roll number\n";
		cin>>s.roll;
		cout<<"enter the marks\n";
		cin>>s.marks;
		cout<<"Name"<<"="<<s.name<<endl;
			cout<<"Roll"<<"="<<s.roll<<endl;
				cout<<"Marks"<<"="<<s.marks<<endl;
	}
	*/
	/*
	struct book
	{
		public:
			string name;
			int pages;
			float price;
		};
		main()
		{
			book b;
			b.name="Harry potter";
			b.pages=900;
			b.price=1200;
			cout<<b.name<<endl;
			cout<<b.pages<<endl;
			cout<<b.price<<endl;
		}
		*/
		/*
		main()
		{
			int arr[5],i;
			for(i=1;i<=5;i++)
			{
				cout<<"Enter the numbers\n";
				cin>>arr[i];
			}
			cout<<"Elements are:\n";
			for(i=1;i<=5;i++)
			{
				cout<<arr[i]<<endl;
			
		}
	}
	*/
	
	
	
	
	

	/*
	main()
	{
		int arr[5]={1,2,3,45,67};
		cout<<arr[0]<<endl;
			cout<<arr[1]<<endl;
				cout<<arr[2]<<endl;
					cout<<arr[4]<<endl;	
					cout<<arr[3]<<endl;
	}
	*/
	/*main()
	{
		int arr[5],i,sum=0;
		for(i=1;i<=5;i++)
		{
			cout<<"Enter the number\n";
			cin>>arr[i];
			sum=sum+arr[i];
		}
		cout<<"sum of the first five numbers are:"<<sum<<endl;
		
	}
	*/
	/*
	{
		int arr[10],i,max=0;
		for(i=1;i<=5;i++)
		{
			cout<<"enter the number\n";
			cin>>arr[i];
		}
		for(i=1;i<=5;i++)
		{
			if(arr[i]>max)
			{
			
				max=arr[i];
		}
			
		}
		
		
			cout<<"Maximum of the numbers are:"<<max<<endl;
	
		return 0;
	}
	*/
	/*
		{
		int arr[10],i,min;
		for(i=1;i<=5;i++)
		{
			cout<<"enter the number\n";
			cin>>arr[i];
		}
		for(i=1;i<=5;i++)
		{
			if(arr[i]<min)
			{
			
				min=arr[i];
		}
			
		}
		
		
			cout<<"Minimum of the numbers are:"<<min<<endl;
	
		return 0;
	}
	*/
