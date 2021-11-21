package Utils

import java.io.File

object InputReader {
    fun inputAsListInt(day: Int,year: Int): List<Int> {
        return fromResource(day,year).readLines().map { it.toInt() }
    }

    fun inputAsListString(day: Int,year: Int): List<String> {
        return fromResource(day,year).readLines()
    }



    private fun fromResource(day: Int, year: Int): File{
        return File(javaClass.classLoader.getResource("$year/" + day.toString().padStart(2,'0') + ".txt").toURI())
    }
}