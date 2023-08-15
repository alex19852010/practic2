
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;




int main()
{
 int count = 0;
 for(int i = 0; i < 50; i ++)
 {
    string name;
    name = rand() % 5 ? "elf" + to_string(i) : ("none");
    cout << name << endl;
 }


    return 0;  
 
   
}