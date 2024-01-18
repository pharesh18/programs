package templateMethodPattern;

abstract class Game {
    abstract void initialize();
    abstract void startPlay();
    abstract void endPlay();

    public final void play() {
        initialize();
        startPlay();
        endPlay();
    }
}

class Football extends Game {
    @Override
    void initialize() {
        System.out.println("Football Game Initialized! Get ready to play.");
    }

    @Override
    void startPlay() {
        System.out.println("Football Game Started. Enjoy the game!");
    }

    @Override
    void endPlay() {
        System.out.println("Football Game Finished!");
    }
}

class Basketball extends Game {
    @Override
    void initialize() {
        System.out.println("Basketball Game Initialized! Get ready to play.");
    }

    @Override
    void startPlay() {
        System.out.println("Basketball Game Started. Enjoy the game!");
    }

    @Override
    void endPlay() {
        System.out.println("Basketball Game Finished!");
    }
}

public class TemplateMethodPattern {
    public static void main(String[] args) {
        Game footballGame = new Football();
        footballGame.play();

        System.out.println();

        Game basketballGame = new Basketball();
        basketballGame.play();
    }
}
