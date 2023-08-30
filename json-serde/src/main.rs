use crate::processor::Processor;

mod processor;
mod processor_mapper;

fn main() {
    let processor = Processor {
        model: String::from("i7-1165G7")
    };

    let processor_json = processor_mapper::to_json(&processor);
    println!("{}", processor_json);

    let processor_from_json = processor_mapper::to_struct(&processor_json);
    println!("{}", processor_from_json.model);
}
