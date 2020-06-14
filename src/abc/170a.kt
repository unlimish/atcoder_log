fun main() {
    val (x1, x2, x3, x4, x5) = readLine()!!.split(" ").map{it.toInt()}

    if (x1 == 0){
        println("1")
    } else if (x2 == 0){
        println("2")
    } else if (x3 == 0){
        println("3")
    } else if (x4 == 0){
        println("4")
    } else if (x5 == 0){
        println("5")
    }

}