fun main(args: Array<String>) {
  var raio:Double = readLine()!!.toDouble()

  var volume = (4/3.0) * 3.14159 * raio * raio * raio
  println("VOLUME = %.3f".format(volume)) 
}