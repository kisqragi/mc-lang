#ifdef _WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#include <iostream>

extern "C" DLLEXPORT int printd(int x) {
    fprintf(stderr, "%d", x);
    return 0;
}

extern "C" DLLEXPORT int printdclean(int x) {
    fprintf(stderr, "%3d", x);
    return 0;
}

extern "C" DLLEXPORT int println() {
    fprintf(stderr, "\n");
    return 0;
}

extern "C" DLLEXPORT int printdln(int x) {
    fprintf(stderr, "%d\n", x);
    return 0;
}
