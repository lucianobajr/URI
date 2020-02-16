fun main(args: Array<String>) {
  var number:Int = readLine()!!.toInt()
  var hour_of_workr:Int = readLine()!!.toInt()
  var hourly_value:Float = readLine()!!.toFloat()

  var salary = hour_of_workr * hourly_value

  println("NUMBER = $number")
  println("SALARY = U$ %.2f".format(salary))
}