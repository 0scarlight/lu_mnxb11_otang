1. A static library is a library which the compiler copies the lines of code from into the main.cxx to ensure that resulting executable can be run without the library files needing to be present. A dynamic library is linked when the executable is run and as such the library file must be present to be able to run the executable. Static libraries lead to bigger but more portable executable and also results in the code having to be recompiled no for every small change. Dynamic libraries have smaller executables but in turn the library files stored and  for the executable to run which makes them less portable, the upside to this is that only the parts that change need to be recompiled. 
2. -L/some/dir/lib/ -l:libfmt-3.2.0.so
3. specifiers and qualifiers: the return type, the function name, the parameter list, and the function body. The function name and the parameter list constitute the function signature
4. To get the address you use "&x" and a pointer pointing to the address would have the type "int*"
5. 
double 2DPoint {
    public:
    //constructors

    2DPoint() = default; 
    2DPoint(double x, double y): x_(x), y_(y){}
    ~2DPoint() = default;


    private:
    int x_
    int y_
}
