// Array continued....
/* For a nD Array, the address can be written as: A[d1][d2][d3]...[dn]
    Add.(A[i1][i2][i3]...[in]) = L0 + (i1*d2*d3*..dn + i2*d3*d4..*dn + .....+in)
    The above formula has a time complexity of O(n^2).
    To reduce the time complexity, we can just reduce the no. of operation by writing the address backwards{O(n)}.*/


// <---Recursion--->
/* When a function is calling itself, it is called a recursive function. */
void fun1(int n)
{
    if(n>0)
    {
        cout<<n;        //In this case, printing is done first and then function is called again.
        fun(n-1);       //Printing occurs at calling time of function.
    }
}
void fun2(int n)
{
    if(n>0)
    {
        fun(n-1);       //Here, function is called first, and while returning the printing is done. 
        cout<<n;        //Printing is done at returning time. 
    }
}
int main()
{
    int x=3;
    fun1(x);            //O/P : 3 2 1
    fun2(x);            //O/P : 1 2 3
}

/* The difference between recursion and loop is that a loop has only ascending phase but a recursion has both ascending as well as descending phase.*/
void fun1(int n)
{
    if(n>0)
    {
        stmnt1;     //Ascending phase: This operation is done before calling of function
        fun1(n-1)
        stmnt2;     //Descending phase: This operation is done while returning.
    }
}
/* Recurrsion occurs in stacks as one is stored after another.*/

#include <stdio.h>
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main()
{
    int r;
    r=fun(5);
    cout<<r;
    return 0;
}
/*In the above example, the static variable has only one copy and does not change its value. Hence it is called with same value everytime
    while returning.*/
/*There are different types of Recursion: 
    1. Tail Recursion: When the recursive statement is the last line of the function. All the operations will be done at calling time
                        and no operation will be done while returning. */
void fun(int n)
{
    if(n>0)
    {
        cout<<n;            //Time complexity: O(n) ; Space used: O(n)
        fun(n-1);
    }
}
// The tail recursion can easily be converted to loop as it is. 
void fun(int n)
{
    while(n>0)
    {
        cout<<n;            //Time complexity: O(n) ; Space used: O(1)
        n--;
    }
}
//For tail recursion, it is preferable to convert it into a loop since it requires less space. 

/*  2. Head Recursion: When the recursive statement is the first line of the function. All operations are done at returning time 
                        and no operation is done while calling of function. */
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n;           
    }
}   
// The head recursion cannot be easily converted to loop as it is, but it can be converted to loop.                      

/*  3. Tree Recursion: When multiple recursive calls are made of the function.  */
#include <stdio.h>
void fun(int n)
{
    if(n>0)
    {
        cout<<n;
        fun(n-1);
        fun(n-1);               //For this problem---> Time complexity: O(2^n) ; Space needed : O(n)
    }
}
int main() 
{
    fun(3);
    return 0;
}
//The above program is tree recursion since it calls the function multiple times. 

/*  4. Indirect Recursion: When a function indirectly calls itself via another function. */
#include <stdio.h>
void funA(int n)
{
    if(n>0)
    {
        cout<<n;
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n;
        funA(n/2);
    }
}
int main()
{
    funA(20);
    return 0;
}

/*   5. Nested Recurision: When the parameter of the recursive call of the function is a recursive call in itself. */
#include <stdio.h>
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    return fun(fun(n+11));          //Nested Recursion
}
int main()
{
    int r;
    r=fun(95);
    cout<<r;
    return 0;
}
