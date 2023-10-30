package main

import "fmt"

func main() {
	var x uint
	var k int
	fmt.Scan(&x)
	for k = 0; x != 1; k++ {
		if x%2 == 0 {
			x = x / 2
		} else if x%2 != 0 {
			x = 3*x + 1
		}
	}
	fmt.Println(k)
}