fun main(args: Array<String>) {
	val (v, t, s, d) = readLine()!!.split(" ").map{it.toInt()}
	val dv = d/v;

	if (t <= dv && dv <= s)
		{print("Yes");}
	else {print("No");}
}
