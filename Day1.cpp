#include<iostream> // Header file which is used in C++ and has istream and ostream library which are used for input and outpur respectively
using namespace std;
//Essential Components of C++

    // <---ARRAYS--->
    /* Array- Physical Data structure which is a collection of similiar data types. 
    The arrays are generally stored in the main section of the stack memory(part of main memory)*/
int main() // Main function of the program
{
    int arr[5]; //Declaration of Array

    int b[5]={1,2,3,4,5} //Declaration and Initialization of array

    for(int i=0; i<5; i++) //Accessing(in this case printing the values) of the array
    {
        cout<<b[i]; //Command for printing values stored in array
    }
}
    // <---STRUCTURE--->
    /* Structures are collection of data members(which may or may not be same data type) that are categoriezed under a single data member.
        This is useful for defining user defined data types. 
        They are stored in main section of stack memory*/
struct rectangle
    {
        int length;             // Storing length and breadth under single data member rectangle
        int breadth;
    }
int main()
{
    struct rectangle r; //declaration of structure
    struct rectangle r={10,5}; //delcaration + initialization

    r.length = 20;          //changing length
    r.breadth = 10;         //changing breadth
}
    /* Other functions might include storing of complex number(where the structure will define real and imaginary part), details of student,
    (including his name, roll, dept.) or even a card(denoted by its number and card type)*/
    
    //Arrays of Strucutre
struct card
{
    int face;
    int shape;
};
int main()
{
    struct card c; //Declaration
    c.face = 1;
    c.shape = 0;
    struct card c = {1, 0}; //Declaration and initialization of the structure

    struct card deck[52]; //Declaration arrays of structures

    struct card deck[52] = {{1, 0} {2, 0}..............the list goes on upto 52th time............} //Declaration and initialization of arrays of structures
}   

    // <---POINTERS--->
    /* Pointer is an address variable used to store address of data and not the data itself.
      ---They are useful in indirectly accessing of data. They are used to access data from heap memory. 
      ---They are also used to access resources which are not included in program.
      ---They are used for parameter passing.*/

int main()
{
    int a = 10; //declaration of variable
    int  *p ;  //declaration of pointer
    p = &a;  //initialization (address of a is given to p)
    cout<<a;
    cout<<*p //-->dereferrencing 
    //-------
    p= new int[5]; // allocation of heap memory in C++
}

    //<---REFERENCE--->
    /* It is an alias given to a variable(another name to variable). It is useful in paramter passing.*/
int main()
{
    int a = 10;
    int &r = a;                     //here r is reference of a (initialozation)
    cout<<a;                        //prints 10
    r++;                            
    cout<<r;                        //prints 11
    cout<<a;                        //prints 11
}

    //<---POINTER TO STRUCTURE--->  
struct Rectangle
{
    int length;
    int breadth;
}

int main()
{
    struct Rectangle r = {10,5}
    struct Rectangle *p = &r;

    r.length=15;
    // (*p).length =20; //this is same piece of code as the following line
     p->length =20;
    // *p.length =20; //This won't work becuase . and * won't be working together(it is read as p.length)
    // The space of pointer is the same as the data type it is used for. For example, in case of integer, it will be size of integer only.
}

    //<---FUNCTIONS--->
    /*Functions are a piece of code which performs a set of task. These are used to execute a group of instructions in the program.
    Grouping of data --- structures
    Grouping of instructions --- functions
    Similiar to a button which executes a task when pressed */
int main()
{
    -----
    -----       //A program where the main function contains all set of instructions is called monolithic programming.
    -----
    -----
}

func1()
{
    ---
    ---
}
func2()
{
    ---
    ---
}
int main()
{
    func1()
    func2()        //The program where it is divided into smaller group of tasks into other functions is called modular/procedural programming.
    -----          //Modular programming is better since we dont have to repeat the same instructions over time
    -----
}

int add(int a,int b)        //Function declared for addition; Here a,b are formal paramters
{
    int c;
    c=a+b;
    return c;                 //Value c is returned so that this function is returning a particular answer
}

int main()
{ 
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);  //Calling of function; Here x,y are the actual parameters 
    cout<<z;
}
// Note: The variables of function cannot access those of main function and vice versa.



