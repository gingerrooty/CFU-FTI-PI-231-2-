package main

import "fmt"

func main() {
	var n, x, k, t, a, b int
	var s []int
	var p bool

	a = 0
	b = 0
	fmt.Scan(&n, &x)
	for i := 0; i < n; i++ {
		fmt.Scan(&k)
		if k < x {
			p = true
			t = x - k
			for _, j := range s {
				if j == t {
					if k > j {
						a, b = j, k
					} else {
						a, b = k, j
					}
					break
				} else if j == k {
					p = false
				}
			}
			if p {
				s = append(s, k)
			}
		}
	}

	fmt.Println(a, b)
}