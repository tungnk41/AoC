abstract class Problem(val day: Int,val year: Int) {
    fun solve(){
        partOne()
        partTwo()
    }
    abstract fun partOne()
    abstract fun partTwo()
}