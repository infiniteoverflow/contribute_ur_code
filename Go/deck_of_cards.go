package main

import "fmt"

func newDeck() []string {
	cards := []string{}

	cardSuits := []string{"Spades", "Diamonds", "Hearts", "Clubs"}
	cardValues := []string{"Ace", "One", "Two", "Three", "Four"}

	for _, suits := range cardSuits {
		for _, values := range cardValues {
			cards = append(cards, values+" of "+suits)
		}
	}

	return cards
}

func main() {
	for index, card := range newDeck() {
		fmt.Println(index, card)
	}
}
