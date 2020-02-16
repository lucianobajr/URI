import kotlin.math.sqrt

fun main(args: Array<String>) {
  val input = Scanner(System.`in`)
  var x1 = input.nextDouble()
  var y1 = input.nextDouble()
  var x2 = input.nextDouble()
  var y2 = input.nextDouble()
  var distancia= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
  println("%.4f".format(distancia))
}