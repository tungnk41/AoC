package y2022

import Problem
import Utils.InputReader

class Day02 : Problem(2, 2022) {
    val input = InputReader.inputRowAsListListInt(day, year)

    override fun partOne() {
        var score = 0
        // 1 : rock
        // 2 : paper
        // 3 : sci
        input.forEach {
            if (it[1] == it[0]) { //draw
                score += (it[1] + 3)
            }
            else if ( (it[1] == 1 && it[0] == 2) || (it[1] == 2 && it[0] == 3) || (it[1] == 3 && it[0] == 1) ) {
                score += it[1]
            }
            else {
                score += (it[1] + 6)
            }
        }
        ansPart1 = score
    }

    override fun partTwo() {
        var score = 0
        // 1 : lose
        // 2 : draw
        // 3 : win
        input.forEach {
            if (it[1] == 2) { //draw
                score += (it[0] + 3)
            }
            else if ( it[1] == 1 ) {
                var t = -1
                if (it[0] == 1) t = 3
                if (it[0] == 2 ) t = 1
                if (it[0] == 3 ) t = 2
                score += t
            }
            else {
                var t = -1
                if (it[0] == 1) t = 2
                if (it[0] == 2 ) t = 3
                if (it[0] == 3 ) t = 1
                score += (t + 6)
            }
        }
        ansPart2 = score
    }


}