
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;




int main()
{
 
 for(int i = 0; i < 50; i ++)
 {
    string name;
    name = rand() % 5 ? "elf" + to_string(i) : ("none");
    cout << name << endl;
 }

 int goga = 25;
    return 0;  
 
   
}