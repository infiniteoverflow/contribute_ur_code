package main

import (
	"bufio"
	"encoding/csv"
	"fmt"
	"io"
	"log"
	"strings"
)

// CSV : csv
type CSV struct {
	Name     string `json:"name"`
	Nickname string `json:"nickname"`
	Text     string `json:"text"`
}

func checkErr(err error) {
	if err != nil {
		log.Panic("ERROR: " + err.Error())
	}
}

func main() {
	// Wihout file
	var csvFile = strings.NewReader(`name;nickname;text
	Valéria;Valchan;has been here!`)

	// With file
	//csvFile, err := os.Open("file.csv")
	//checkErr(err)

	reader := csv.NewReader(bufio.NewReader(csvFile))
	reader.Comma = ';'

	var person []CSV

	for {
		line, err := reader.Read()
		if err == io.EOF {
			break
		} else if err != nil {
			checkErr(err)
		}
		person = append(person, CSV{
			Name:     line[0],
			Nickname: line[1],
			Text:     line[2],
		})
	}

	//personJSON, err := json.Marshal(person)
	//checkErr(err)
	//fmt.Println(string(personJSON))
	// Output: [{"name":"name","nickname":"nickname","text":"text"},{"name":"Valéria","nickname":"Valchan","text":"has been here!"}]

	fmt.Println(person[1].Nickname + " " + person[1].Text)
	// Output: Valchan has been here!
}
