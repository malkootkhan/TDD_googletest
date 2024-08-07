## Important steps To do unit testing using googletest framework:   
   
1. Firstly you should clone the repository from the following link   
[googletest_repo](https://github.com/google/googletest.git)   
**Windows:** 
2. Install cmake tools in your host that can be windows or linux or other os and add it to PATH variable (Environment variable)   
3. Install make and add its path to environment variable   
4. Go inside repo "googletest" create "build" `cd build` run `cmake -G "MinGW Makefiles" ..` it will create Makefile and run that Makefile by `make -j4`
4. copy the static libraries in lib/* to MinGW lib folder and the googlegmock/include and googletest/include to MinGW include which need to be added to the path
5. create a c++ project add the header `#include <gtest/gtest.h>` and then add the library path in project properties, and the lib name in library `gtest_main and gtest`
6. add the include in the include_path in the project properties->general c/c++ -> include path for googlemock include and googletest include
**Linux:**
7. in linux after running cmake in build and then make command to create the binaries you have run `sudo make install` it will copy the files to /usr/src which is already in path
8. create new project add test cases and then run `g++ test.cpp -lgtest -lgtest_main -o app` where -lgtest and -lgtest_main are the static libraries in the global path, there is no main in our testing as the main from googletest framework is linked 

## For testing you need to follow ==> [RED] > [GREEN] > REFACTORING
to see this in eclipse you have to go to run configuration ->  create new run configuration -> name run configuration - > C/C++ testing -> select google test runner apply it
then when test failed it will show red bar and on passing it will show green bar 

RED->failed -> added the required code -> GREEN->passed-> refactor (remove the unecessary code or repeatition) the run agian to see green

