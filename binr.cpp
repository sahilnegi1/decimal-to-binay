#include<iostream>
using namespace std;
int bin(int a);
int calc(int a);
int main()
{
int b;
cout<<"Enter the size of array = ";
cin>>b;
int a[b];
cout<<"Enter the numbers in array =";
for (int i = 0; i < b; i++)
{
    cin>>a[i];
}

for (int i = 0; i < b; i++)
{       int num=a[i];
    bin(num);
    cout<<endl;
}
return 0;
}
int bin(int a)
{
int dec=a;
int s=calc(dec);
int x[s];
for (int i = 0; i < s; i++)
{x[i]=dec%2;
dec/=2;   

}
cout<<"Binary String is = ";

for (int i = (s-1); i >=0; i--)
{
    cout<<x[i];
}
return 0 ;
}
//-----------------------------
int calc(int a)
{int count=1;
while(a!=1)
{count++;
a/=2;
}
return count;
}