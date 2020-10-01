/*
About:
	This program outputs to terminal requested message

Usage:
	go run main.go "hello"
*/

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	if !isValid() {
		return
	}
	banners := GetBanners()
	banners = CombineBanners(banners)
	Print(banners)
}

func GetBanners() [][]string {
	var banners [][]string
	var banner []string
	file, _ := os.Open("standart.txt")
	reader := bufio.NewReader(file)
	counter := 0

	for {
		line, err := reader.ReadString('\n')
		if err != nil {
			banners = append(banners, banner)
			break
		}
		// saving only 8 lines in each banner
		if counter > 8 {
			banners = append(banners, banner)
			banner = []string{}
			counter = 0
		}
		banner = append(banner, line)
		counter++
	}
	return banners
}

func CombineBanners(banners [][]string) [][]string {
	// maybe should fix args
	arg := os.Args[1]
	requestedBanners := [][]string{}
	for i := 0; i < len(arg); i++ {
		if i+1 < len(arg) {
			if arg[i] == '\\' && arg[i+1] == 'n' {
				requestedBanners = append(requestedBanners, nil)
				i++
				continue
			}
		}
		requestedBanners = append(requestedBanners, banners[int(arg[i])-32])
	}
	return requestedBanners
}

func PrintBanners(banners [][]string) {
	for i := 0; i < 8; i++ {
		combineStr := ""
		for _, banner := range banners {
			// to not include \n in the end of string
			lastChInd := len(banner[i]) - 1
			combineStr += banner[i][:lastChInd]
		}
		fmt.Println(combineStr)
	}
}

// prints given arguments correcly
func Print(banners [][]string) {
	i := 0
	for index, value := range banners {
		// to split banners with \n
		if value == nil {
			PrintBanners(banners[i:index])
			fmt.Println()
			i = index + 1
		}
	}
	PrintBanners(banners[i:])
}

func isValid() bool {
	if len(os.Args) != 2 {
		return false
	}

	for _, value := range os.Args[1] {
		if int(value) < 0 || int(value) > 127 {
			return false
		}
	}

	return true
}
