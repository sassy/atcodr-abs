// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC086A - Product 
// https://atcoder.jp/contests/abs/tasks/abc086_a

fn main() {
    input! {
        a: usize,
        b: usize
    }
    println!("{}", if (a * b) % 2 == 0 { "Even" } else { "Odd" });
}
