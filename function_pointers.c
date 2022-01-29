#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>


void Something() { printf("Hello there!\n"); }

int product(const unsigned int a, const unsigned int b) { printf("result of multiplication: %d\n", a * b); }

////////////////////////  3 FUNCTIONS   //////////////////////////////////////////////////////

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

//////////////  ASSEMBLY ///////////////////////////////

void assembly_block0()
{
    int q, w, r;
    __asm
    {
        mov dword ptr[q], 0x11
        mov eax, dword ptr[q]
        mov dword ptr[w], 0x11
        add eax, dword ptr[w]
        mov dword ptr[r], eax
    }

    printf("%d + %d = %d", q, w, r);

}

///////////////////   MAIN   //////////////////////////////////
int main()
{

    /////////////////////////////////////////////////////////////////////////////////////////////////////////
                                              // ARRAY FUNCTIONS //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    // fun_ptr_arr is an array of function pointers 
    // it holds 3 elements: add , subtract, multiply
    void (*fun_ptr_arr[])(int, int) = { add, subtract, multiply };
    
    // declaring and defining both a and b as unsigned integers
    // ch will be used as index for array
    unsigned int ch, a = 15, b = 10;

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
        "for multiply\n");
    scanf("%d", &ch);

    if (ch > 2) return 0;

    (*fun_ptr_arr[ch])(a, b);




    ///////////////////////////////////////////////////////////////////////////////////////////////////
                                         // Something FUNCTIONS // 
    ///////////////////////////////////////////////////////////////////////////////////////////////////

    void (*x)() = &Something; // = void (*x)() = &Something; ORIGINAK FUNCTION HOLDS NO PARAMETERS
    x();

    void (*f)() = &Something;    // = FunctionFunc f = &Something;
    f();
    


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                              // PRODUCT FUNCTIONS //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //void (*some_func)(int, int) = &product;     // is the same as the following line!! 
    //some_func(10,10);
    void (*hey)(int, int) = &product;
    (*hey)(10, 10);


    void (*instance)(int, int) = &product;        // void (*instance)(int, int);
    // giving it parameters:
    (*instance)(12, 100);


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                // ASSEMBLY FUNCTIONS //
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    assembly_block0();
    
    return 0;
}
