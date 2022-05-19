package main

import (
	"fmt"
)

func main() {
	fmt.Println("Hello, ")
	var name string
	fmt.Scanln(&name)
	fmt.Println(name)
}
