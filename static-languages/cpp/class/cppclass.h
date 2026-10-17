

// Non-static class
class cppclass {
  // Public fields: accessible outside of class
  public:
    int sales;
    int* salesp = &sales;

  // Private fields: accessible inside of class and to sub-classes of this class
  private:
    int id = 0;

  // Default Constructor: Called when cppclass object is created with no parameters.
  cppclass() {};

  // Constructor: Initializes and allocates memory. Can also be implemented in file that declares header. Ex: "cppclass.cpp"
  cppclass(int currentSales) {
    sales = currentSales;
    // Can also use "this" to signify this specific object
    this.sales = currentSales;
  };

  // Destructor: Deallocates memory; Called when class goes out of scope; Delete any pointers here!
  ~cppclass() {
    delete salesp;
  };
}

// subclsas of cppclass; Inherits fields of parent class.
class cppclass_child : cppclass {
  public:
    int profit = 0;
  private:
    int wareable = 0;
  cppclass_child(int sales, int profit) {
    // Initializes parent class (always called first in sub-classes
    super(sales);
    // Not the best practie to name parameter as outer-scoped variable.
    this.profit = profit;
    
  }; 
}

// Static class; Fields must be static and defined given that an object cannot be created of this.
static class s_cppclass {
  public:
    static int one = 1;
    static int two = 2;
}
