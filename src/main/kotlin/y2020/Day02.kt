package y2020

import Problem
import Utils.InputReader

class Day02: Problem(2,2020) {
    val input = InputReader.inputAsListString(day,year)

    override fun partOne() {
        var ans = 0
        input.forEach {

            var min = 0
            var max = 0
            var word: Char? = null
            var str: String? = null

            var index = 0
            while (index < it.length ){
                if(min == 0 || max == 0){
                    if(it[index].isDigit()){
                        if(it[index+1].isDigit()){
                            if(min == 0){
                                min = it.substring(index,index+2).toInt()
                            }else{
                                max = it.substring(index,index+2).toInt()
                            }
                            index+=1
                        }else{
                            if(min == 0){
                                min = it[index].code - '0'.code
                            }else{
                                max = it[index].code - '0'.code
                            }
                        }
                    }
                }

                if(word == null){
                    if (it[index].isLetter()){
                        word = it[index]
                    }
                }else{
                    if(it[index].isLetter()){
                        str = it.substring(index, it.length)
                    }
                }

                if(str == null){
                    index++
                }else{
                    break
                }
            }

            var count = 0
            str?.forEach {
                if(it == word) count++
            }

            if(count >= min && count <= max ){
                ans++
            }
        }

        println(ans)
    }

    override fun partTwo() {
        var ans = 0
        input.forEach {

            var min = 0
            var max = 0
            var word: Char? = null
            var str: String? = null

            var index = 0
            while (index < it.length ){
                if(min == 0 || max == 0){
                    if(it[index].isDigit()){
                        if(it[index+1].isDigit()){
                            if(min == 0){
                                min = it.substring(index,index+2).toInt()
                            }else{
                                max = it.substring(index,index+2).toInt()
                            }
                            index+=1
                        }else{
                            if(min == 0){
                                min = it[index].code - '0'.code
                            }else{
                                max = it[index].code - '0'.code
                            }
                        }
                    }
                }

                if(word == null){
                    if (it[index].isLetter()){
                        word = it[index]
                    }
                }else{
                    if(it[index].isLetter()){
                        str = it.substring(index, it.length)
                    }
                }

                if(str == null){
                    index++
                }else{
                    break
                }
            }

            min = min - 1
            max = max - 1
            str?.let {
                var pos_1 = if (min >= 0 && min < str.length) str[min] == word else false
                var pos_2 = if (max >= 0 && max < str.length) str[max] == word else false
                if (pos_1 xor pos_2) {
                    println(str)
                    ans++
                }
            }
        }

        println(ans)
    }

}