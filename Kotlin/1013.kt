fun main(args: Array<String>) {

  var a:Int = readLine()!!.toInt()
  var b:Int = readLine()!!.toInt()
  var c:Int = readLine()!!.toInt()

  var maior = a
  if ((a < b) || (a < c)){
      maior = if (b > c){
          b
      } else {
          c
      }
  }
  
  println("$maior eh o maior")
}