package main
import "fmt"

func main() {
    var r int
    var c int
    fmt.Scan(&r, &c)
    fmt.Printf("% 5v", "|")
    for a := 1; a <= c; a++ {
        fmt.Printf("% 4v", a)
    }
    fmt.Println()
    fmt.Printf("% 5v", "--")
    for a := 1; a <= c; a++ {
        fmt.Printf("% 4v", "----")
    }
    fmt.Println()
    for a := 1; a <= r; a++ {
        fmt.Printf("% 4v|", a)
        for b := 1; b <= c; b++ {
            fmt.Printf("% 4v", a*b)
        }
        fmt.Println()
    }
}