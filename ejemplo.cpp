//Tarea de for
#include <iostream>
using namespace std;
int primo(int x)
{
  int flag=0;
  if(x==1)
    {
    flag=1;
    }
  else
    {
  for (int i=2; i<x; i++)
    {
      if (x%i==0)
	{
	  flag=1;
	}
    }
    }
  return flag;
}
      
int main()
{
  int s=12;
  int flag=0;
  int p;
  cout<<"entra un número "<<endl;
  cin >> p;
  do{
    if (p%2==0)
      p++;
    if(primo(p)==1)
      p=p+2;
  }while(primo(p)==1);
  
  cout<<"p vale "<<p<<endl;
  return 0;
}
    
  
