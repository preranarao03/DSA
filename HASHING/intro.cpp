/* HASHING

  -> to find the frequency of an element in the array:

  (FIRST APPROACH):
  -> The first appriach may be to run a for loop and search through each element in the array
  -> But, this approach taks up a lot of space and time because to find the frequency of element we are traversing through entire array
  -> Supposing, there are 5 elements then time complexity will be 5*O(N).
  -> Imagine the array is very large, then this is not efficient method.

  (SECOND APPROACH):
  -> To improve efficiency, hashing is done.
  -> Hashing consists of prestoring and fetching
  -> another array is created, called hash array.
  -> hash array all cells will be initialized to zero first
  -> as we traverse through the array, as we go past each element the frequency is added onto the hash array one by one
  -> Thus, the hsh array will have the frequency of all elements.
  -> ex - to find frequency of element 1, we dont loop through entire
          array. Instead we call hash[1] and we will get its frequency from the hash array.
  ->


*/