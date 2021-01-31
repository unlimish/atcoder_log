package abc

import java.util.*

fun main(ards: Array<String>) {
    val s = readLine()!!.toCharArray()
    val result = s.filter { it == '1' }.count()
    println(result)
}