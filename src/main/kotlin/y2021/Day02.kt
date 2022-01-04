package y2021

import Problem
import Utils.InputReader

class Day02 : Problem(2, 2021) {
    val input = InputReader.inputAsListString(day, year)
    override fun partOne() {
        var totalPos = 0
        var totaldep = 0

        input.forEach {
            var temp = it.split(" ")
            var dir = temp[0]
            var value = temp[1].toInt()

            if (dir == "forward") {
                totalPos += value
            } else if (dir == "down") {
                totaldep += value
            } else {
                totaldep -= value
            }
        }
        ansPart1 = totaldep * totalPos
    }

    override fun partTwo() {
    }
}