import java.util.Scanner;

public class Prac {

    static boolean checkPrime(int n){
        int i,m=0,flag=0;
        boolean ans=false;
        m=n/2;
        if(n==0||n==1){
            //System.out.println(n+" is not prime number");
            ans= false;
        }else{
            for(i=2;i<=m;i++){
                if(n%i==0){
                   // System.out.println(n+" is not prime number");
                    ans= false;
                    flag=1;
                    break;
                }
            }
            if(flag==0)  {
                //System.out.println(n+" is prime number");
                ans= true;
            }
        }//end of else
        return ans;
    }
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();

        int fin=0;
        int got=0;

        while(t>0){

            String s=sc.next();

            for(int i=0;i<8;i++){

                String p=s.charAt(i)+"";
                for(int j=i+1;j<9;j++){
                    String m=p+s.charAt(j);

                    int val=Integer.parseInt(m);

                    boolean ans=checkPrime(val);
                    if(ans)
                    {
                        got=1;
                        fin=val;
                        break;
                    }
                }
            }
            if(got==0){
                System.out.println("-1");
            }else{
                System.out.println(fin);
            }
            t--;
        }



    }
}