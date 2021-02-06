#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;

int
main ()
{
  int num, flag;
  cin >> num;
  flag = 0;
  if (num > 2)
    {
      for (int i = 2; i < num; i++)
	{
	  if (num % i == 0)
	    {
	      flag = 1;
	    }
	}
	if (flag = 1)
    cout << "Non - Prime";
  else
    {
      cout << "Prime";
    }
    }
    else;
    cout<<"Prime";
  return 0;
}