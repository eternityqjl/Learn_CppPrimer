class NoDefault {
    NoDefault(int num)
    { }
};

class C {
    C(NoDefault ex1): hello(ex1)
    { }
    
public:
    NoDefault hello;
};