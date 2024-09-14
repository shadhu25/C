/*
    Q8: Assume int size is 4 bytes. What is going to happen when the
     following program runs?

     #include<stdio.h>
     int main()
     {
        printf("hi!\n");
        main();
        return 0;
     }

     a) we can't use main() inside main()
     b) hi! will be printed 2147483647 times
     c) hi! would be printed until stack overflow happens for this
     program
     d) hi! would be printed only once brcause when main() is used
     inside main(), it's ignored by compiler at run time.

     answer: (c)
*/