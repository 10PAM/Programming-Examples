/*

Programmers {
  Mario Aguilera Piceno
}
File: cppclass.h
About: Header file that holds a basic overview of class declarations.
Date: 10/17/2026
Modified: 10/17/2026

*/

// Non-static class
class cppclass {
  // Public fields: accessible outside of class
  public:
    int sales = 0;
    int* salesp = &sales;

    // Default Constructor: Called when cppclass object is created with no parameters.
    cppclass() {}
  
    // Constructor: Initializes and allocates memory. Can also be implemented in file that declares header. Ex: "cppclass.cpp"
    cppclass(int currentSales) {
      sales = currentSales;
      // Can also use "this" to signify this specific object
      this->sales = currentSales;
    }
  
    // Destructor: Deallocates memory; Called when class goes out of scope; Delete any pointers here!
    ~cppclass() {
      delete this->salesp;
    }

  // Private fields: accessible inside of class and to sub-classes of this class
  private:
    int id = 0;
};

// subclsas of cppclass; Inherits fields of parent class.
class cppclass_child : cppclass {

  public:
    int profit = 0;

    // Child defined constructor
    cppclass_child(int sales, int profit) {
      // Initializes parent class (always called first in sub-classes by default as super() if not specified)
      super(sales);
      // Not the best practie to name parameter as outer-scoped variable.
      this->profit = profit;
    }

    // Default constreuctor: initializes parent with values to prevent errors.
    cppclass_child() {
      super(0);
    }

    // Default desctructor
    ~cppclass_child() {};

  private:
    int wareable = 0;
};

// Static class; Fields must be static and defined given that an object cannot be created of this.
static class s_cppclass {
  // NOTE: Fields are declared static in a "static" class
  public:
    static int one = 1;
    static int two = 2;

  // No constructor or descructor because we can't create a static class object.
  private:
    s_cppclass() = delete; // Might aswell delete the constructor lol! Prevents accidental instantiation.
};
