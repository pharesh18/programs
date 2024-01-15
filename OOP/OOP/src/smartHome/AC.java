package smartHome;

public class AC implements Device {
    @Override
    public void turnOn() {
        System.out.println("AC is ON");
    }

    @Override
    public void turnOff() {
        System.out.println("AC is OFF");
    }
}