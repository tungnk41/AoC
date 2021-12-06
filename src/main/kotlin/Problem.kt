abstract class Problem(val day: Int,val year: Int) {
    var ansPart1 = 0
    var ansPart2 = 0
    fun solve(){
        partOne()
        partTwo()
        println("Part 1: ${ansPart1}")
        println("Part 2: ${ansPart2}")
    }
    abstract fun partOne()
    abstract fun partTwo()

}