fun main(){
    val (x, y) = readLine()!!.split(" ").map{it.toInt()}
    
    val clane_leg = x * 2
    val remain_leg = y - clane_leg
    val amount_turtle = remain_leg / 2
    val amount_clane = x - amount_turtle
    
    val foots = (amount_clane * 2) + (amount_turtle * 4)
    val amount = amount_turtle + amount_clane
    

    if ((4 * x >= y) and (foots == y) and (amount == x)){
        println("Yes")
    } else println("No")

}

/* 
WAが2個だけ潰せない…
- 脚が余る時

*/