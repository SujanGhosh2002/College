import java.net.*;
public class Ip{
    public static void main(String[] args)throws UnknownHostException {
        InetAddress iAddress=InetAddress.getLocalHost();
        System.out.println("Ip Address: "+iAddress.getHostAddress());
    }
}


















































// import java.net.*;
// public class Ip
// {
//     public static void main(String args[]) throws UnknownHostException
//     {
//         InetAddress iaddress = InetAddress.getLocalHost();
//         System.out.println ("Ip address is "+iaddress.getHostAddress());
//     }
// }