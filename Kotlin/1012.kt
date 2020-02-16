fun main(args: Array<String>) {
  var A:Double = readLine()!!.toDouble()
  var B:Double = readLine()!!.toDouble()
  var C:Double = readLine()!!.toDouble()
  println("TRIANGULO: %.3f".format((A*C)/2))
  println("CIRCULO: %.3f".format(3.14159 * C * C))
  println("TRAPEZIO: %.3f".format((A+B)/2 * C))
  println("QUADRADO: %.3f".format(B * B))
  println("RETANGULO: %.3f".format(A * B ))
} 