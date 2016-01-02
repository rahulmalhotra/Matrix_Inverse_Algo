//PROGRAM TO FIND THE INVERSE OF ANY MATRIX USING GAUSS JORDAN METHOD ( Row Transformations ) //
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,i,j,k,h,o;
float p[50];
float a[50][50],b[50][50];
cout<<"\n\n Program to find the Inverse of a Matrix using Gauss Jordan Method ";
cout<<"\n ^^^^^^^ ^^ ^^^^ ^^^ ^^^^^^^ ^^ ^ ^^^^^^ ^^^^^ ^^^^^ ^^^^^^ ^^^^^^";
cout<<"\n\n Enter the rows and columns of Matrix - ";
cin>>x>>y;
if(x==y)
{
cout<<"\n\n Enter the Matrix - ";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
if(i==j)
{
b[i][j]=1;
}
else
{
b[i][j]=0;
}
}
}
cout<<"\n\n Original Matrix\t Augmented Matrix\n\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<<" "<<a[i][j];
}
cout<<"\t\t\t";
for(j=0;j<y;j++)
{
cout<<" "<<b[i][j];
}
cout<<"\n";
}
for(i=0;i<x;i++)
{
p[i]=a[i][i];
for(j=0;j<y;j++)
{
b[i][j]=b[i][j]/p[i];
a[i][j]=a[i][j]/p[i];
}
for(j=0;j<x;j++)
{
for(k=0;k<y;k++)
{
if(j!=i)
{
p[j]=a[j][i];
b[j][k]-=b[i][k]*p[j];
}
}
}
for(j=0;j<x;j++)
{
for(k=0;k<y;k++)
{
if(j!=i)
{
a[j][k]-=a[i][k]*p[j];
}
}
}
cout<<"\n\n Result after "<<i+1<<" Operation - ";
cout<<"\n\n Original Matrix\t Augmented Matrix\n\n";
for(h=0;h<x;h++)
{
for(o=0;o<y;o++)
{
cout<<" "<<a[h][o];
}
cout<<"\t\t\t";
for(o=0;o<y;o++)
{
cout<<" "<<b[h][o];
}
cout<<"\n";
}
}
cout<<"\n\n Matrix you have entered = \n\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<<" "<<a[i][j];
}
cout<<"\n";
}
cout<<"\n\n Augmented Matrix = \n\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<<" "<<b[i][j];
}
cout<<"\n";
}
}
else
{
cout<<"\n\n Inverse of matrix cannot be calculated as the matrix is not a square matrix...";
}
getch();
}
//		END OF PROGRAM		//
