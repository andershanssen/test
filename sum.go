
package main

import(
	"fmt"
	"runtime"
	"time"
)

var i = 0

func add(){
	for x := 0; x < 1000000; x++ {
		i++
	}
}

func sub(){
	for x := 0; x < 1000000; x++ {
		i--
	}
}

func main(){
	runtime.GOMAXPROCS(runtime.NumCPU())
	go add()
	go sub()

	time.Sleep(100*time.Millisecond)
	fmt.Println("The sum is:", i);
}

