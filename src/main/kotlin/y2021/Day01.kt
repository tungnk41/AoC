package y2021

import Problem
import Utils.InputReader

class Day01 : Problem(1, 2021) {
    val input = InputReader.inputAsListInt(day, year)

    override fun partOne() {
        var prev = -1
        var cur = prev
        var count = 0
        input.forEach {
            prev = cur
            cur = it
            if (cur > prev && prev != -1) {
                count++
            }
        }
        ansPart1 = count
    }

    override fun partTwo() {
        var prev = 0
        var cur = prev
        var count = 0
        for (i in 0..input.size-3 step 1){
            cur = input[i] + input[i+1] + input[i+2]
            if( prev != 0) {
                if(cur > prev)count++
            }
            prev = cur
        }
        ansPart2 = count
    }
}