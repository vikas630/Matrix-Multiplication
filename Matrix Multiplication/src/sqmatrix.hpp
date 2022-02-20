#include <iostream> 
using namespace std;
int multiply(long double a[][100],long double b[][100],int n){
long double mul[n][n];
for(int i=0;i<n;i++)    {    
for(int j=0;j<n;j++)    {    
mul[i][j]=0;    
for(int k=0;k<n;k++)    {    
mul[i][j]+=a[i][k]*b[k][j];    
}}}
return mul[0][0];     
}  