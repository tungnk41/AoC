package y2022

import Problem
import Utils.InputReader

class Day01 : Problem(1, 2022) {
    val input = InputReader.inputAsListListInt(day, year)
    override fun partOne() {
        var max_1 = 0
        var max_2 = 0
        var max_3 = 0
        var result = 0
        input.forEach {
            val t = it.sum()
            if (t > max_1) {
                max_3 = max_2
                max_2 = max_1
                max_1 = t
            }
            else if (t > max_2) {
                max_3 = max_2
                max_2 = t
            }
            else if (t > max_3) {
                max_3 = t
            }
        }
        ansPart1 = max_1 + max_2 + max_3
    }

    override fun partTwo() {

    }


}