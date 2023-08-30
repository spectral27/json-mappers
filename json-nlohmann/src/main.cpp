#include <iostream>
#include "processor.h"
#include "processor_mapper.h"

int main() {
    Processor processor;
    processor.setModel("i7-1165G7");

    std::string processorJson = ProcessorMapper::toJson(processor);
    std::cout << processorJson << "\n";

    Processor processorFromJson = ProcessorMapper::toObject(processorJson);
    std::cout << processorFromJson.getModel() << "\n";

    return 0;
}
