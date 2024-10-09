/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ code to illustrate queue in Standard Template Library (STL)
#include <iostream>
#include <queue>
#include <string>
void display(std::queue <std::string> q)
{
    std::queue <std::string> c = q;
    while (!c.empty())
    {
        std::cout << " " << c.front();
        c.pop();
    }
    std::cout << "\n";
}

int main()
{
    std::queue <std::string> a;
    
    std::string arr[5] = {"Array1","Array2","Array3", "Array4", "Array5"};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    

    a.push("Alice");

    a.push("Kyle");

    a.push("Aero");

    a.push("Cj");

    a.push("Cj");

    
    std::cout << "The Name of the Students: ";
    
    
    display(a);
    
    std::cout<<"The Original Array:"<<std::endl;
    for(int i = 0; i<size; i++ ){
       std::cout<<arr[i]<<' '<<std::endl; 
    }
    
    for(int i = 0; i<size; i++ ){
        arr[i]=a.front();
        a.pop();
        
        
    }
    
    std::cout<<"The Modified Array:"<<std::endl;
    for(int i = 0; i<size; i++ ){
       std::cout<<arr[i]<<' '<<std::endl; 

    }   


    return 0;

}