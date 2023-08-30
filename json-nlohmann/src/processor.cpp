//
// Created by gsol27 on 8/29/23.
//

#include "processor.h"

const std::string &Processor::getModel() const {
    return _model;
}

void Processor::setModel(const std::string &model) {
    _model = model;
}
