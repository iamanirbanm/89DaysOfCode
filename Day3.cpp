//  ARRAYS

// Array- Collection of similiar type of data element. It is a vector variable. Contigious memory allocation

/* <---Declaration of Array--->*/

int A[5]; // Declaration of array; allocates array of 5 units with garbage value
int A[5] = {2,4,6,8,10} //Declaration + Initialization
int A[5] = {2,4}        // Only 2 are initialized, rest are 0
int A[] = {2,4,6,8,10}  //Array of size 5 is created with initializaition as such.

/* <---Accessing values in Array--->*/
    /* Elements in array can be accessed by its index value.*/
cout<<A[2];     //Index inside
cout<<2[A];     //Index outside
cout<<*(A+2);   //Using pointer

/*<---Memory allocation in Array(Static vs Dynamic)--->*/
void main()
{
    int A[5]; // Allocated in stack memory. Memory value will be created at the start of execution. 
    int n;
    cin>>n;
    int B[n]; // Memory allocated at runtime.
}
void main()
{
    int A[5];
    int *p;
    p = new int[5]; //Dynamic memory allocation in heap memory using pointer.
    delete []p;     //Unused heap memory should be deleted to avoid memory leak.
}

/*Increasing or decreasing size of array*/

int *p = new int [5];
int *q = new int[10];       
for (int i = 0; i<5; i++)
{
    q[i]=p[i];              //Another bigger array is created and value gets assigned.
}
delete p;
p=q;
q=NULL;

/*NOTE:- This can only be used for heap memory allocation.
          Size of Arrays cannot be changed since it is contigeous memory allocation, so we don't know where the new memory will be allocated.

/* 2D Arrays*/

/* There are 3 ways of declaring 2D arrays.*/
int A[3][4];                //Complete stack memory allocation

int *B[3];                  //Allocated in stack memory
int B[0] = new int[4];      // Allocated in Heap memory
int B[1] = new int[4];
int B[2] = new int[4];

int **C;
C = new int* [3];          //Completely Heap memory allocation
C[0] = new int [4];
C[1] = new int [4];
C[2] = new int [4];

/* Arrays in compilers*/

/* The address of a particular index of array in the memory is accessed by the compiler using the formula 
        Add.(A[i]) = L0 + i * s
         Here, L0 -> Base memory allocation
                i -> Index
                s -> Size of Data type
    If Index of array starts from 1, then Add.(A[i]) = L0 + (i-1) * s; 
    However, it is not used in C++, due to one extra operation  */

// For 2D arrays, even though it is represented in form of rows and coloumns, but it is stored in memory in linear form
int A[m][n];
// Add.(A[i][j]) = L0 + (i + n)* s; This is used when Row mapping is used.
// Add.(A[i][j]) = L0 + (j + m)* s; This is used when Column mapping is used.  
