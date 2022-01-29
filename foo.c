
struct Foo* Foo_Create()
{
    struct Foo* foo = malloc(sizeof(struct Foo));

    foo->p = malloc(sizeof(struct FooPrivate));

    foo->x = 0;
    foo->y = 0;
    foo->p->z = 0;

    return foo;
}

void Foo_DoWhatever(struct Foo* foo)
{
    foo->p->z = 4; /* Can access "private" parts of foo */
}



int main()
{

    struct Foo* foo = Foo_Create();

    foo->x = 100; /* Can access "public" parts of foo */
    foo->p->z = 20; /* Error! FooPrivate is not fully declared here! */

    Foo_DoWhatever(foo); /* Can call "member" function */


}
