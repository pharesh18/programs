package composition;

public class CompositionTest {
    public static void main(String[] args) {

        Engine carEngine = new Engine("V6");

        Car myCar = new Car("Audi", carEngine);

        myCar.display();
    }
}