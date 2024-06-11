/* HASHING METHODS
    -> There are broadly 3 methods:
    (i). Division Method
    (ii). Folding Method
    (i). Mod Square Method

    In division method:
     -> division method is modulative in nature
     ex - consider hash array from index 0 to 9
     -> we need to find frequency of elements {2,5,16,28,139}
     -> 2%10 = 2 (you will find frequency of 2 at index 2)
     -> 28%10 = 8 (you will find frequency of 28 at index 8)

     -> through linear chaining, you can find the frequency of multiple elements which belong to same index in hash array.
     -> elements are chained in sorted method.

     -> if all elements end up at same hash index, this is worst case known as collision.




*/