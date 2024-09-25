/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include  <iostream>
#include <stack> 
using namespace std; 
stack <string> kyle;

void display(stack<string>kyle)
{ 
    while(!kyle.empty())
    {
    cout << kyle.top() << endl;
    kyle.pop();
    }
}

    
    
int main() 
{ 
    kyle.push("C++");
    kyle.push("Java");
    kyle.push("python");

    cout<< "Stack: " <<endl<<endl;
    display(kyle);
    
    return 0;
}