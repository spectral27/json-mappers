//
// Created by gsol27 on 8/29/23.
//

#include "processor_mapper.h"

std::string ProcessorMapper::toJson(const Processor &processor) {
    nlohmann::json json;
    json["model"] = processor.getModel();
    return json.dump(2);
}

Processor ProcessorMapper::toObject(const std::string &jsonString) {
    nlohmann::json json = nlohmann::json::parse(jsonString);
    Processor processor;
    processor.setModel(json.at("model"));
    return processor;
}
