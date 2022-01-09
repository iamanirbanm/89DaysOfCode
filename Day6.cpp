// ARRAY ADT

/* An ADT is sidplayed by the datat type and its operations. The operations that can be performed in an array are:
    -> Display
    -> Add/Append
    -> Insert
    -> Delete
    -> Search
    -> Get
    -> Set
    -> Reverse
    -> Max/Min
    -> Shift/Rotate             */
struct array{
    int A[10];
    int length;
    int size;
}
// Display or Traversing through an Array
for(int i = 0; i<array.length; i++)
{
    cout<<A[i];
}

//Adding or Appending
A[length]= element;
length++;

// Inserting an Element at a given index
for (int i = array->length; i> index; i--)
{
    array->A[i]=array->A[i-1];            //Copying all the elements to the next space
}
array->A[index]= n;                //Inserting element
length++;

// Deleting element in array
x= A[index];
for(int i=index; i<length-1; i++)
{
    A[i]=A[i+1];
}
length--;

//Linear Search 
for(int i=0;i<length;i++)
{
    if(key=A[i])
    {
        return i;
    }
}
return -1;

/*Improvements in Linear Search include: 
    1. Transposition -> Shifting the index of key one step forward when found.
    2. Moving to Front/Head -> Moving the index of the key to the first element of array    */

//Binary Search
//Criteria: Array should be sorted.
Algo binarySearch(low, high, key)
{
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(key==A[mid])
        {
            return mid;
        }
        else if (key<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid +1;
        }
    }
return -1;
}
/* The binary search can be written as reccursive function as well. But since its a Tail recursive function, its better to write it as loop.*/

// Get(index) -> To view value at particular index
if(index>=0 && index<length)
{
    return A[index];
}
// Set(index,x) -> To change value at particular index
if(index>=0 && index<length)
{
    A[index]=x;
}

//Max() & Min()
max = A[0];
min = A[0];
for(int i=0;i<length;i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
    if(A[i]<min)
    {
        min = A[i];
    }
}
return max,min;

//Sum & Avg
total = 0;
for(int i=0;i<length;i++)
{
    total = total + A[i];
}
avg=total/length;
return total,avg;

/*Some more operations on array
    --> Reversing of array
    --> Left / Right Shift
    --> Left / Right Rotate
    --> Check whether an array is sorted or not
    --> Inserting elements in sorted array
    --> Inserting negative numbers on left hand side, and poisitive on right hand side
    --> Merging of Arrays
    --> Set operations


