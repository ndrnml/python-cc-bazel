#include "cpp_module.h"

#include <iostream>

CppModule::CppModule() {
    std::cout << "C++ module constructor" << std::endl;
}

/*Module::Module(const Options& options)*/
/*        : options_(options) {*/
/*    std::cout << "C++ constructor with options" << std::endl;*/
/*    std::cout << "option1: " << options_.option1 << std::endl;*/
/*    std::cout << "option2: " << (options_.option2 ? "true" : "false") << std::endl;*/
/*    std::cout << "option3: " << options_.option3 << std::endl;*/
/*}*/

CppModule::~CppModule() {
    std::cout << "C++ module destructor" << std::endl;
}

void CppModule::Run() {
    std::cout << "C++ Run()" << std::endl;
}
