fun main(args: Array<String>) {
  var name = readLine()!!
  var salary:Double = readLine()!!.toDouble()
  var sales:Double = readLine()!!.toDouble()

  var total = salary + (sales*15)/100

  println("TOTAL = R$ %.2f".format(total))
}