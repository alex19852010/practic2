
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;





int main()
{
 
 string str = "hello";

 for(int i = 0; i < str.length(); i ++)
 {
   while(str[i] != 0)
   {
      char a = str[i];
      cout << a << endl;
   }
 }
 cout << "Hello Alex";
 cout << "hello world";
    return 0;  
 
   
}
