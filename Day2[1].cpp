// DAY 2 @ 89DaysOfCode

//contd. from before

// <---PARAMETER PASSING>

/* There are 3 types of passing parameters in a function
    1. Passing by value
    2. Passing by address
    3. Passing by reference*/

void swap(int x, int y)
{
    int temp;
    temp = y;
    y = x;                              //In this case we are just passing by values, the formal parameters will change but the actual 
    x = temp;                           //parameters remains same since it is not returning the values. 
}
int main()
{
    int a,b;                            //For changing the actual parameter, we will need them to pass by address(Using pointers) or
    a=10; b=20;                         //pass by reference (using referencing by &)
    swap(a,b);
}

// Arrays can only be passed by address, never by value. We can use both pointers(*) as well as third bracket([]) for passing arrays.

// If an array is included inside a structure, then the array can be passed by value as it is inside the structure.

// <---STRUCTURE AND FUNCTIONS--->
struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->breadth = b;                                 // This is the case when we use C language. We create the structure and then write 
    r->length = l;                                  //the functions by passing the values from structure. 
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;                                  
}
                                                    
int main()
{
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}
//In case of C++, we use objects and classes for this purpose.


// <---CLASSES AND CONSTRUCTORS--->

/* Class is a data structure with contains both data members and functions. We can define these data members as private or public.
    Constructor is a function that creates and initializes the object. So, it has the same name as the class. */

#include <iostream>>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() 
    {
        length = breadth;
    }
    Rectangle(int l, int b); 
    int area();             //Facilitators - To perform some operation 
    int perimeter();        //Facilitators 
    int getLength();        //Accessors - To get the value of a particular parameter
    {
        return length;
    }
    void setLength(int l)
    {
        length = l;           //Mutator- To change the value
    }
};

Rectangle ::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle ::area()
{
    return length * breadth;
}

int Rectangle ::perimeter()
{
    return 2 * (length + breadth);
}
Rectangle ::~Rectangle()
{

    //Rectangle(); --> destructor -> to destroy anything stored in the dynamic memory //deallocation
}

int main()
{
    Rectangle r(10, 5);
    cout << r.area();
    cout << r.perimeter();
    cout << r.setLength();
    cout << r.getLength();
}


// <---TEMPLATE CLASS--->

/*Often we need to work with different data types for similiar classes and functions. For this purpose, we use a template class
so that we don't have to write the same class over and over again. This is called generic class or template class.*/
template <class T>          
T Arithametic<T>::add()
{               
    T c;
    c = a + b;                  //Wherever we use the data type, we replace it with generic variable T. 
    return c;
}
template <class T>
T Arithametic<T>::sub()
{
    T c;
    c = a - b;                  //However, we should be careful with what to replace and what not. 
    return c;
}
template <class T> 
class Arithametic
{
private:
    T a;
    T b;
public:
    Arithametic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this->a = a;
    this->b = b;
}
int main()
{
    Arithametic<int> ar(10, 5)
            cout
        << ar.add();
    Arithametic<float> ar1(1.5, 1.2);
    cout << ar1.add();
}





