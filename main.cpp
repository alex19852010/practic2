
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class People

{  
    public:
    int age;
    int weight;
    int height;

     People(int age, int weight, int height)
    {
       this->age = age;
       this->weight = weight;
       this->height = height;
    }

};



int main()
{
 People* people = new People(30, 75, 175);
 cout << people->height;
 cout << "hello world" << endl;
 cout << "Ukranian forever";
 

    return 0;  
 
   
}
