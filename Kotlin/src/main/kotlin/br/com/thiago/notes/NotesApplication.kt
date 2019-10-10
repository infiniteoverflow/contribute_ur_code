package br.com.thiago.notes

import org.springframework.boot.autoconfigure.SpringBootApplication
import org.springframework.boot.runApplication

@SpringBootApplication
class NotesApplication

fun main(args: Array<String>){
	runApplication<NotesApplication>(*args)
}


