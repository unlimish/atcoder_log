package abc

import java.util.*

fun main(args: Array<String>) {

    val scanner = Scanner(System.`in`)

    val a = scanner.nextInt()
    val b = scanner.nextInt()

    val calcProduct = a * b
    
    if (calcProduct % 2 == 0){
        println("Even")
    } else
        println("Odd")
}