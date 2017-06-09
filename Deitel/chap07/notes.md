## Pointer Variable Definitions and Initialization

Pointers are variables whose values are memory addresses. Normally, a variable directly contains a specific value. **A pointer contains an address of a variable that contains a specific value**. A variable name *directly* references a value, and a pointer *indirectly* references a value. Referencing a value through a pointer is called **indirection**.

*Pointers like all variables must be defined before they can be used*.


```c
int *countPtr, count;
```

Here the definition specifies that variable countPtr is of type int * (i.e., a pointer to an integer ) reads such as : "countPtr is a pointer to int." And the variable **count** is defined as an **int**, and **NOT** the pointer to **int**.




