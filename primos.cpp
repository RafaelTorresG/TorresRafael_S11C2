#include<iostream>
#include <math.h>
int main()
{
 std::cout<<"Inserte limite inferior: "<<std::endl;  
 int n;  
 std::cin>>n;
 std::cout<<"Inserte limite superior: "<<std::endl;  
 int m;  
 std::cin>>m;
 double c=sqrt(m);
 int test=2;
 
 while(test<c)
 {
  for(int p=n;p<=m;p++)
  {
   int cont=0;
   for(int i=2;i<p;i++)
   {
    if(p%i==0)
    {
     cont++;
    }
    else
    {
     cont=cont;
    }
   }
   if(cont==0)
    {   
 	std::cout<<p<<std::endl;
    }
   cont=0; 
   }
 test++;
 }
 
return 0;
}


