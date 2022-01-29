#pragma once
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

struct FooPrivate;

struct Foo {
    /* public: */
    int x;
    double y;
    /* private: */
    struct FooPrivate* p;
};

extern struct Foo* Foo_Create(); /* "constructor" */

extern void Foo_DoWhatever(struct Foo
