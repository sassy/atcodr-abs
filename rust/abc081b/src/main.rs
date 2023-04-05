// -*- coding:utf-8-unix -*-

use proconio::input;

// ABC081B - Shift only
// https://atcoder.jp/contests/abs/tasks/abc081_b

fn main() {
    input! {
        n: usize,
        mut a:[usize;n],
    }
    let mut divisible = true; 
    let mut result = 0;
    while divisible {
        for i in 0..n {
            if a[i] % 2 != 0 {
                divisible = false;
            } else {
                a[i] /= 2;
            }
        }
        if !divisible {
            break;
        }
        result += 1;
    }
    println!("{}", result);
}
