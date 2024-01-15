package smartHome;

public class CommandPatternTest {
    public static void main(String[] args) {

        Light livingRoomLight = new Light();
        AC RoomAC = new AC();

        TurnOnCommand lightOnCommand = new TurnOnCommand(livingRoomLight);
        TurnOffCommand lightOffCommand = new TurnOffCommand(livingRoomLight);
        TurnOnCommand acOnCommand = new TurnOnCommand(RoomAC);
        TurnOffCommand acOffCommand = new TurnOffCommand(RoomAC);


        RemoteControl remoteControl = new RemoteControl();


        remoteControl.setCommand(lightOnCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(lightOffCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(acOnCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(acOffCommand);
        remoteControl.pressButton();
    }
}



