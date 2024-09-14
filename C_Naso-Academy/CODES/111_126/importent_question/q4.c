// if i is a variable and p points to i, which of the following 
// expressions are aliases of i?

// a) *p    b)*&p   c) &p   d) *i   e) *&i

// solution: options (a) and (e) are aliases of variable i

/*
                a) *p = *(1000) = 10

                b) *&p = *(&p) = *(2000) = 1000

                c) &p = 2000

                d) *i = *(10) doesn't make sense

                e) *&i = *(&i) = *(1000) = 10
*/