#include <iostream>
#include <unistd.h>
using namespace std; 

int main()
{
    cout<<"Userid = "<< getuid()<<endl;
    return 0;
}