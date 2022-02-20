#include <iostream> 
#include "../src/sqmatrix.hpp";
using namespace std; 
long double a[100][100],b[100][100];
class Matrix{
int main()  {  
int i,j,k,l=0; 
int n;
cin>>n;
while(l<2){
for(i=0;i<n;i++)  {    
for(j=0;j<n;j++)  {    
    if(l==0)
    cin>>a[i][j];  
    else if(l==1)
    cin>>b[i][j];
}} 
l++;}
multiply(a,b,n);
}
};