package main

import "fmt"

func main() {
	var a string
	var b string
	var c string
	fmt.Scan(&a, &b, &c)
	if a == "Да" {
		if b == "Да" {
			if c == "Да" {
				fmt.Println("Утка")
			} else if c == "Нет" {
				fmt.Println("Пингвин")
			}
		} else if b == "Нет" {
			if c == "Да" {
				fmt.Println("Плезиозавры")
			} else if c == "Нет" {
				fmt.Println("Дельфин")
			}
		}
	} else if a == "Нет" {
		if b == "Да" {
			if c == "Да" {
				fmt.Println("Страус")
			} else if c == "Нет" {
				fmt.Println("Курица")
			}
		} else if b == "Нет" {
			if c == "Да" {
				fmt.Println("Жираф")
			} else if c == "Нет" {
				fmt.Println("Кот")
			}
		}
	}
}
