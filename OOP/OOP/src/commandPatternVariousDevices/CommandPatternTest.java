package commandPatternVariousDevices;

public class CommandPatternTest {
    public static void main(String[] args) {

        Light livingRoomLight = new Light();
        TV livingRoomTV = new TV();

        TurnOnCommand lightOnCommand = new TurnOnCommand(livingRoomLight);
        TurnOffCommand lightOffCommand = new TurnOffCommand(livingRoomLight);
        TurnOnCommand tvOnCommand = new TurnOnCommand(livingRoomTV);
        TurnOffCommand tvOffCommand = new TurnOffCommand(livingRoomTV);


        RemoteControl remoteControl = new RemoteControl();


        remoteControl.setCommand(lightOnCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(lightOffCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(tvOnCommand);
        remoteControl.pressButton();


        remoteControl.setCommand(tvOffCommand);
        remoteControl.pressButton();
    }
}



