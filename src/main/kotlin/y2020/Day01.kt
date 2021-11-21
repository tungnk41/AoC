package y2020

import Problem
import Utils.InputReader
import java.util.*
import kotlin.collections.HashSet

class Day01 : Problem(1,2020) {
    val input = InputReader.inputAsListInt(day,year)
    val targetSum = 2020

    override fun partOne() {
        val set = HashSet<Int>()
        var ans = 0
        input.forEach forEach@{ num ->
            if(!set.contains(targetSum - num)){
                set.add(num)
            }else{
                ans = num * (targetSum - num)
                return@forEach
            }
        }
        println(ans)
    }

    override fun partTwo() {
        Collections.sort(input)
        var ans = 0

        for (index in 0..input.size-3 step 1){
            var left = index + 1
            var right = input.size-1

            while (left < right){
                var sum = input[left] + input[right]
                if(sum == (targetSum - input[index])){
                    ans = input[index] * input[left] * input[right]
                    break
                }
                if (sum < (targetSum-input[index])){
                    left++
                }else{
                    right--
                }
            }
        }

        println(ans)
    }
}