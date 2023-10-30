package main

import "fmt"

func main() {
	var a int
	var b int
	var c int
	var d int
	var e int
	var N int
	fmt.Scan(&N)
	a = N / 5000
	b = (N - 5000*a) / 1000
	c = (N - 5000*a - 1000*b) / 500
	d = (N - 5000*a - 1000*b - 500*c) / 200
	e = (N - 5000*a - 1000*b - 500*c - 200*d) / 100
	fmt.Println(a, b, c, d, e)
}