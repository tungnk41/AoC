package Utils

import java.io.File

object InputReader {
    fun convertAlphaToInt(c: String): Int {
        var result: Int = -1
        if (c == "A" || c == "X") result = 1
        if (c == "B" || c == "Y") result = 2
        if (c == "C" || c == "Z") result = 3
        return result
    }
    fun inputRowAsListListInt(day: Int,year: Int): List<List<Int>> {
        val result: MutableList<List<Int>> = ArrayList()
        fromResource(day,year).readLines().map {
            result.add(it.split(" ").map { convertAlphaToInt(it) })
        }
        return result.toList()
    }

    fun inputAsListInt(day: Int,year: Int): List<Int> {
        return fromResource(day,year).readLines().map { it.toInt() }
    }

    fun inputAsListListInt(day: Int,year: Int): List<List<Int>> {
        val result: MutableList<List<Int>> = ArrayList()
        val arr = ArrayList<Int>()
        var isNeedClear = true
         fromResource(day,year).readLines().map {
            if (it.trim().isNotEmpty()) {
                if (isNeedClear) {
                    arr.clear()
                }
                isNeedClear = false
                arr.add(it.toInt())
            }
             else {
                 if (!isNeedClear) {
                     result.add(arr.toList())
                 }
                isNeedClear = true;
             }
        }
        return result.toList()
    }

    fun inputAsListString(day: Int,year: Int): List<String> {
        return fromResource(day,year).readLines()
    }



    private fun fromResource(day: Int, year: Int): File{
        return File(javaClass.classLoader.getResource("$year/" + day.toString().padStart(2,'0') + ".txt").toURI())
    }
}