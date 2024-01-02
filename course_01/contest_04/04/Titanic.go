package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
	"strings"
)

type Passenger struct {
	age int
	name string
}

func main() {
	var (
		pclass, age, a, c int
		line []string
		t []string
		v []Passenger
		p Passenger
		s, n string
	)

	fmt.Scan(&pclass, &age)

	file, err := os.Open("train.csv")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	S := bufio.NewScanner(file)
	for S.Scan() {
		line = strings.Split(S.Text(), "\r")
		for _, w := range line {
			t = strings.Split(w, ",")
			a, err = strconv.Atoi(t[6])
			c, err = strconv.Atoi(t[2])
			if t[5] == "female" && a > age && c == pclass {
				s = t[3] + "," + t[4]
				n = ""
				for i := 1; i < len(s)-1; i++ {
					if !(s[i-1] == '"' && s[i] == '"') {
						n += string(s[i])
					}
				}
				p = Passenger{name: n, age: a}
				v = append(v, p)
			}
		}
	}

	for i := 0; i < len(v); i++ {
		for j := i + 1; j < len(v); j++ {
			if v[i].age > v[j].age || (v[i].age == v[j].age && v[i].name > v[j].name) {
				p = v[i]
				v[i] = v[j]
				v[j] = p
			}
		}
	}

	for _, i := range v {
		fmt.Println(i.name)
	}
}