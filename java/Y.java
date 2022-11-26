public class Y extends X{
    @Override
    public A foo(C val){
        System.out.println("foo in A, Parameter C");
        return new AClass();
    }
}
