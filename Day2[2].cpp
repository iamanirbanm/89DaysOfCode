// INTRODUCTION TO DATA STRUCTURES

// <---Applications/Uses of Data--->
/* Data Structures: Arrangement of collection of data items so that they can be used and operated efficiently. By efficiently, we refer
    to 2 factors: Less space and less time required for that operation. 
   Database: Arranging the data in form of some relational model in the hard disk.
   Datawarehouse: Contains the history of data from a long time back(legacy data), useful for analysing businesses.*/

// <---Static and Dynamic Memory Allocation--->
    /* The memory which remains fixed throughout and is allocated at the beginning of the function is called the static memory.
        Static memory is stack memory.
        It is called so because the memory allocatec to each function piles up one above another in a stack as and when the function is called.*/
    /* Heap is a memory which is used for unorganised memory allocation. 
        It should be used as a resource, i.e. used when required and then deleted when it is no longer needed.*/
    void main()
    {
        int *p;                 // Memory allocation in heap memory can be done by using pointers.
        p = new int[5];         //Dynamic memory allocation heap.
        delete []p;             //Delete when not used.
        p = NULL;
    }

// <---Physical & Logical data structure--->
    /* Physical data structures are those which actually contain the data. These include arrays, linked list. or a combination of these 2.*/
    /* Logical data structures are those which are involved in managing and arrangement of data based on some logic. 
        These are basically applied with the help of physical data structures themselves.*/

// <---Abstract Data Type--->
    /* A data type is defined on two basis: Its representation(i.e whether it is integer, float etc.) and the operations to be performed on it.
        An abstract data type is basically a data type in which we don't need the underneath bit level working of the data and the
        operations can be performed even without knowing those. */ 

   