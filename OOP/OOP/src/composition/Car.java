package composition;
public class Car {
    private String model;
    private Engine engine; // Composition: Car has an Engine

    // Constructor
    public Car(String model, Engine engine) {
        this.model = model;
        this.engine = engine;
    }

    // Getter methods
    public String getModel() {
        return model;
    }

    public Engine getEngine() {
        return engine;
    }

    // Display method
    public void display() {
        System.out.println("Car Model: " + model);
        System.out.println("Engine Type: " + engine.getType());
    }
}