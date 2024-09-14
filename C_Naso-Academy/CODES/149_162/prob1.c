// GATE CS 2000
/*
    consider the following C declaration

    struct 
    {
        short s[5];
        union
        {
            float y;
            long z;
        }u;
    }t;

    assume that objects of the type short,float and long accupy 2 bytes,
    4 bytes and 8 bytes, respectively. the memory requirement for variable
    t, ignoring alignment consideration, is

        a) 22 bytes
        b) 14 bytes
        c) 18 bytes
        d) 10 bytes

    answer: (c)
*/