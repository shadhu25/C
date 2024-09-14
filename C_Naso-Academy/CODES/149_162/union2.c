#include<stdio.h>
#pragma pack(1)// you can use semicolon(;) here
struct store
{
    double price;// 8b
    union 
    {
        struct 
        {
            char *title;// 8b
            char *author;// 8b
            int num_pagrs;// 4b
        } book;// 20b

        struct 
        {
            int color;// 4b
            int size;// 4b
            char *design;// 8b
        } shirt;// 14b
    } items;// 20b
};// 20b+8bb=28b

int main()
{
    struct store s;
    s.items.book.title="The Alchemist";
    s.items.book.author="Paulo Ceolho";
    s.items.book.num_pagrs=197;
    printf("%s\n",s.items.book.author);
    printf("%ld\n",sizeof(s));// 28b without padding
    return 0;
}