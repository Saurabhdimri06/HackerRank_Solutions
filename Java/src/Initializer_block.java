
import java.util.Scanner;

public class Initializer_block {

    static int B,H;
    static boolean flag = true;
    static
    {
        
        try
        {
            Scanner sc = new Scanner(System.in);
            if (flag)
            {   
                B = sc.nextInt();
                H = sc.nextInt();
                if(B <= 0||H <= 0)
                {
                    flag = false;
                    System.out.println("java.lang.Exception: Breadth and height must be positive");
                }
            }
        }

        catch (Exception e)
        {
            System.out.println(e);
        }
    }

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class

