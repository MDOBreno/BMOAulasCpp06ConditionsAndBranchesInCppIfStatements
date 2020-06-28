//
//  Log.cpp
//  BMOAulasCpp06ConditionsAndBranchesInCppIfStatements
//
//  Created by Breno Medeiros on 28/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.hpp"



void InitLog() {
    Log("Inicializar Log");
}

void Log(const char* mensagem) {
    std::cout << mensagem << std::endl;
}
