//
// Created by gsol27 on 8/29/23.
//

#ifndef UNTITLED_0829_01_PROCESSOR_MAPPER_H
#define UNTITLED_0829_01_PROCESSOR_MAPPER_H

#include <string>
#include "processor.h"
#include "nlohmann/json.hpp"

namespace ProcessorMapper {

    std::string toJson(const Processor& processor);

    Processor toObject(const std::string& jsonString);

}

#endif //UNTITLED_0829_01_PROCESSOR_MAPPER_H
