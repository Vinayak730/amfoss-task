extern crate regex;
use std::io;
use regex::Regex;


fn main() {
	let mut input = string::new();
	io::stdin().read_line(&mut input)?;
	        ok()
	let re = Regex::new(r"^\w+@[[:word:]]+\.[[:word:]]$").unwrap();
	
	  match re.capture(input){
	      some(caps) => println!("valid mail"),
	      None => println!("Invalid mail")
	  }        
}