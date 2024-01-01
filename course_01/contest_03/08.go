package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	c := make(map[int]int)

	for i := 0; i < n; i++ {
		var k int
		fmt.Scan(&k)
		c[k]++
	}

	for k, f := range c {
		if (f % 2) == 1 {
			fmt.Println(k)
		}
	}
}