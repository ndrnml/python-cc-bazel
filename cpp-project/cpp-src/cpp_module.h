#ifndef EXAMPLE_CPP_MODULE_H_
#define EXAMPLE_CPP_MODULE_H_

#include <string>

/*struct ComplexInternalClass {*/
/*    std::string name = "ComplexInternalClass";*/
/*};*/
/**/

namespace example {

class CppModule {
public:
    /*struct Options {*/
    /*    int option1 = 1;*/
    /*    bool option2 = false;*/
    /*    std::string option3 = "option3";*/
    /*};*/
    /**/
public:
    CppModule();
    /*CppModule(const Options& options);*/
    ~CppModule();

    void Run();
    /*void Run(ComplexInternalClass c);*/
//    void Set(ImageBuffer3f i);

private:
    /*Options options_;*/
};

}  // namespace example

#endif  // EXAMPLE_CPP_MODULE_H_
