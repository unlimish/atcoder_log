use proconio::input;

fn main() {

	let mut dup: i16 = 0;
	let mut used_upper: bool = false;
	let mut used_lower: bool = false;

    input! {
        input:String,
    }
	for i in input.as_str().chars() {
		if i == ("a".."z") {
			used_lower = true;
		}
		else if i == ("A".."Z")
		{
			used_upper = true;
		}
	}

	for i in input.as_str().chars() {
		for j in input.as_str().chars() {
			if i == j {dup += 1};
			if dup > 1 {
				println!("No");
				break;};
		}
		println!("{}", i);
	}
}
