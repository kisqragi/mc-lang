#include <iostream>

extern "C" {
    int fib(int);
    int f(int);
    int myfunc(int, int);
    int test(int);
    int test1();
    int test2();
    int testloop();
    int testbr(int);
}

int main() {
    /*
    std::cout << "Call fib with 10: " << fib(10) << std::endl;
    */

    /*
    std::cout << "Call f with 4: " << f(4) << std::endl;
    std::cout << "Call f with 3: " << f(3) << std::endl;
    std::cout << "Call f with 2: " << f(2) << std::endl;
    std::cout << "Call f with 1: " << f(1) << std::endl;
    */

    /*
    std::cout << "Call myfunc with (3, 3): " << myfunc(3, 3) << std::endl;
    std::cout << "Call myfunc with (2, 3): " << myfunc(2, 3) << std::endl;
    std::cout << "Call myfunc with (3, 2): " << myfunc(3, 2) << std::endl;
    */

    // extern test
    //test(10);

    testloop();

    /*
    test_eq 
    if x == 1 then
        1
    else
        0
    */

    /*
    std::cout << "Call test with (0): " << test(0) << std::endl;
    std::cout << "Call test with (1): " << test(1) << std::endl;
    std::cout << "Call test with (2): " << test(2) << std::endl;
    */
    
    /*
    test1();
    test2();
    */

    /*
    testbr(0);
    testbr(1);
    testbr(2);
    */

    return 0;
}
