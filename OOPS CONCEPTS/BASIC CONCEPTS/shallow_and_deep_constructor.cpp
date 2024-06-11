/* DESTRUCTOR

   -> Destructor is used for memory deallocation
   -> After scope of object is going to end, destructor is called to deallocate the memory of the object.
   -> Destructor is created automatically
   -> You can also manually create the destructor function:
      -> ~ Hero(){
        cout<<"desturctor called"<<endl;
      }
    -> ~ sign represents the destructor function
    -> object made by static allocation, destructor is called automatically
    -> object made through dynamic allocation, destructor should be called manually

*/

/* STATIC KEYWORD

   -> static member is a property that can be accessed without creating an object
   -> static member does not belong to the object, it belongs to the class
   -> you need to make the property static by using 'static' keyword
   -> ex - the declaration of static member would be like:
            -> static int timeToComplete;
   -> To access the static member:
            -> class-name::static-member
*/

/* STATIC FUNCTIONS

   -> 'this' keyword does not belong to this
   -> becoz if there is no object needed then there is no need for 'this' keyword at all
   -> with the help of static function, you can access static menbers

*/

/* SHALLOW & DEEP CONSTRUCTOR
 */