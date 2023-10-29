package main

import (
	"fmt"
	"math"
)

func main() {
	var man float64 = 0.5
	var topol float64 = 32
	var dub float64 = 20
	var a float64
	var b float64
	var c float64
	var year float64 = 365
	a = man * year
	b = a / topol
	c = a / dub
	fmt.Println(a, math.Ceil(b), math.Ceil(c))
}
