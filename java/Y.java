public class Y extends X{
    @Override
    public B foo(B val){
        System.out.println("foo in B, Parameter C(main)");
        return new CClass();
    }

}
