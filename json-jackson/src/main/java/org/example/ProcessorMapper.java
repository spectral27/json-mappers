package org.example;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.core.util.DefaultIndenter;
import com.fasterxml.jackson.core.util.DefaultPrettyPrinter;
import com.fasterxml.jackson.databind.ObjectMapper;

public class ProcessorMapper {

    private final ObjectMapper jackson;
    private final DefaultPrettyPrinter printer;

    public ProcessorMapper() {
        jackson = new ObjectMapper();
        printer = new DefaultPrettyPrinter().withObjectIndenter(new DefaultIndenter("  ", "\n"));
    }

    public String toJson(Processor processor) {
        try {
            return jackson.writer(printer).writeValueAsString(processor);
        } catch (JsonProcessingException e) {
            throw new RuntimeException(e);
        }
    }

    public Processor toObject(String json) {
        try {
            return jackson.readValue(json, Processor.class);
        } catch (JsonProcessingException e) {
            throw new RuntimeException(e);
        }
    }

}
