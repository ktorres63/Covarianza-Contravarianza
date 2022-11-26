public class Y extends X{
    @Override
    public C foo(){
        System.out.println("foo in C,");
        return new CClass();
    }

}
