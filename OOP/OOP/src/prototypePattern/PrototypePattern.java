package prototypePattern;

class Prototype implements Cloneable {
    private String name;

    public Prototype(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class PrototypePattern {
    public static void main(String[] args) {
        Prototype originalObject = new Prototype("Original Object");

        try {
            Prototype clonedObject1 = (Prototype) originalObject.clone();
            clonedObject1.setName("Cloned Object 1");

            Prototype clonedObject2 = (Prototype) originalObject.clone();
            clonedObject2.setName("Cloned Object 2");

            System.out.println("Original Object: " + originalObject.getName());
            System.out.println("Cloned Object 1: " + clonedObject1.getName());
            System.out.println("Cloned Object 2: " + clonedObject2.getName());
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
        }
    }
}

