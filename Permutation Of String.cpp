/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void
permute (string s)
{

  sort (s.begin (), s.end ());      //To sort the given string in ascending order
  do
    {
      cout << s << endl;
    }
  while (next_permutation (s.begin (), s.end ()));    //Change the order of string
}



int
main ()
{
  string s;
  getline (cin, s);    //getting input
  cout << "Permutation of given string are:" << endl;
  permute (s);
  return 0;

}
