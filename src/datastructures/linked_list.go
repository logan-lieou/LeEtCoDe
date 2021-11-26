package main

import "fmt"

type node struct {
	dat int
	key int
	next *node
}

func (l *node) printList() {
	fmt.Printf("\n[ ")
	for l != nil {
		fmt.Printf("(%d, %d) ", l.key, l.dat)
		l = l.next
	}
	fmt.Printf("]\n")
}

func main() {
}
