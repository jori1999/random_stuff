#include <stdio.h>
#include <stdlib.h>


typedef enum color {yellow, green, red = 16} *Color;
typedef struct person { int age; char* name; } *Person;



int main() 
{
    Person jori = malloc(sizeof(struct person)); 
    jori->name = "Jori";
    jori->age = 12;
    printf("%s\n", jori->name);
    printf("%d\n", jori->age);

    Color a = red;
    printf("%d", a);
    
    
    
    
    
    
    return 0;
}
