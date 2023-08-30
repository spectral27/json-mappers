package org.example;

public class Main {

    public static void main(String[] args) {
        Processor processor = new Processor();
        processor.model = "i7-1165G7";

        ProcessorMapper processorMapper = new ProcessorMapper();
        String json = processorMapper.toJson(processor);
        System.out.println(json);

        Processor processorFromJson = processorMapper.toObject(json);
        System.out.println(processorFromJson.model);
    }

}
