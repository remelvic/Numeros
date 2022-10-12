public class Main {

    static double mean = 0.0;
    static int count = 0;
    static int median = 0;
    static int numberForFib = 21;
    public static int Numeros(int number, int start, int end) {
        System.out.print(start+" ");
        if (count == (numberForFib - 1) / 2.0){
            median = start;
        }
        count++;
        mean += start;
        if (number == 0) return start;
        if (number == 1) return end;
        return Numeros(number - 1, end, start+end);
    }

    public static void main(String[] args) {
        int result = Numeros(numberForFib-1,0,1);
        System.out.println(result);
        System.out.printf("The mean is %.2f\n", (mean+result)/ numberForFib);
        System.out.println("The meadian is " + median);
    }
}