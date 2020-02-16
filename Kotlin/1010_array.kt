fun main(args: Array<String>) {
  var peca1 = FloatArray(3)
  var peca2 = FloatArray(3)
  var x:Int = 0
  val i :Int = peca1.size
  while(x<i){
      peca1[x] = readLine()!!.toFloat()
      x++
  }
  x = 0
  while(x<i){
    peca2[x] = readLine()!!.toFloat()
    x++
  }
  var total = (peca1[1]*peca1[2]) + (peca2[1]*peca2[2])
  println("VALOR A PAGAR: R$ %.2f".format(total))
}