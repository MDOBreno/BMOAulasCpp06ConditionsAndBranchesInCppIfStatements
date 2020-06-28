//
//  main.cpp
//  BMOAulasCpp06ConditionsAndBranchesInCppIfStatements
//
//  Created by Breno Medeiros on 26/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = 6;
    bool resultadoDeComparacao = x==5;
    if (resultadoDeComparacao) {
        std::cout << "Hello, World!";
    }
    
    const char* ptr1 = "Hello";
    if (ptr1) {         //Equivale a    ptr1!=nullptr
        Log(ptr1);
    }
    const char* ptr2 = 0;
    const char* ptr3 = nullptr;
    if (ptr2) {         //Equivale a    ptr2!=nullptr
        Log("0");
    } else if (ptr3) {  //Equivale a    ptr3!=nullptr
        Log("nullptr");
    } else {
        Log("ptr2 e ptr3 são null!");
    }
    
    return 0;
}
