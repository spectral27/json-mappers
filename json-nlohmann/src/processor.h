//
// Created by gsol27 on 8/29/23.
//

#ifndef UNTITLED_0829_01_PROCESSOR_H
#define UNTITLED_0829_01_PROCESSOR_H

#include <string>

class Processor {

private:
    std::string _model;

public:
    [[nodiscard]] const std::string &getModel() const;

    void setModel(const std::string &model);

};

#endif //UNTITLED_0829_01_PROCESSOR_H
