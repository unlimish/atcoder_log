use proconio::input;

fn get_distance(sec:i16, meeter:i16, rest:i16, x:i16) -> i16 {
    let result:i16 = if x < (sec + rest)
    {
        meeter * x
    }
    else
    {

        let left_distance = (x - (sec + rest))*meeter;
        meeter * sec + left_distance
    };
    return result;
}

fn main() {

    input! {
        a:i16, b:i16, c:i16, d:i16, e:i16, f:i16, x:i16,
    }

    let taka = get_distance(a,b,c,x);
    // println!("Taka:{}", taka);
    let aoki = get_distance(d, e, f, x);
    // println!("Aoki:{}", aoki);

    if taka == aoki
    {
        println!("Draw");
    }
    else if taka < aoki
    {
        println!("Aoki");
    }
    else {
        println!("Takahashi");
    }

}
