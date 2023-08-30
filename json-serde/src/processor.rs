use serde::{Deserialize, Serialize};

#[derive(Deserialize, Serialize)]
pub struct Processor {
    pub model: String
}
