package br.com.thiago.notes.controller

import br.com.thiago.notes.model.Note
import br.com.thiago.notes.repository.NoteRepository
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.http.ResponseEntity
import org.springframework.web.bind.annotation.*
import java.net.http.HttpResponse

@RestController
@RequestMapping("notes")
class NoteController (
        private val noteRepository: NoteRepository) {

    @GetMapping
    fun list(): List<Note> {
        return noteRepository.findAll().toList()
    }

    @PostMapping
    fun add(@RequestBody note: Note): Note {
        return noteRepository.save(note)
    }

    @PutMapping("{id}")
    fun alter(@PathVariable id: Long, @RequestBody note: Note): Note {
        if (noteRepository.existsById(id)){
            val safeNote = note.copy(id = id)
            return noteRepository.save(safeNote)
        }
        return Note()
    }

    @DeleteMapping("{id}")
    fun delete(@PathVariable id: Long): ResponseEntity<Note> {
        if (noteRepository.existsById(id)){
            noteRepository.deleteById(id)
            return ResponseEntity.ok().build()
        }
        else return ResponseEntity.badRequest().build<Note>()

    }
}