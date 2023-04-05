// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC081A - Placing Marbles
// https://atcoder.jp/contests/abs/tasks/abc081_a

fn main() {
    input! {
        n: String,
    }
    let v:Vec<char> = n.chars().collect();
    let mut result =  if v[0] == '1' { 1 } else {0 };
    result +=  if v[1] == '1' { 1 } else { 0 };
    result +=  if v[2] == '1' { 1 } else { 0 };
    
    println!("{}", result);
}
