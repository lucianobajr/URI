fun main(args: Array<String>) {
  var distancia:Int = readLine()!!.toInt()
  var consumo:Float = readLine()!!.toFloat()
  var media = distancia / consumo
  println("%.3f km/l".format(media))
}