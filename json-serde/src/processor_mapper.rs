use crate::processor::Processor;

pub fn to_json(processor: &Processor) -> String {
    match serde_json::to_string_pretty(&processor) {
        Ok(json) => json,
        Err(e) => panic!("Error mapping struct to json: {}", e.to_string())
    }
}

pub fn to_struct(json: &str) -> Processor {
    match serde_json::from_str(&json) {
        Ok(processor) => processor,
        Err(e) => panic!("Error mapping json to struct: {}", e.to_string())
    }
}
