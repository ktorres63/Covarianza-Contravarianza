public class Y extends X{
    @Override
    public C foo(B val){
        System.out.println("foo in C, parameter B");
        return new CClass();
    }

}
