public abstract class Foo
{
    // normal implementation

    public abstract Foo Clone();
}

public class ConcreteFoo1 : Foo
{
    public override Foo Clone()
    {
        return (Foo)this.MemberwiseClone(); // Clones the concrete class.
    }
}

public class ConcreteFoo2 : Foo
{
    public override Foo Clone()
    {
        return (Foo)this.MemberwiseClone(); // Clones the concrete class.
    }
}
