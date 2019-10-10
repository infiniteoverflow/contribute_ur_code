package br.com.thiago.notes.repository

import br.com.thiago.notes.model.Note
import org.springframework.data.repository.CrudRepository
import org.springframework.stereotype.Repository

@Repository
interface NoteRepository : CrudRepository<Note, Long>