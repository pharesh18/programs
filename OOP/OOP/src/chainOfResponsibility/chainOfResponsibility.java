package chainOfResponsibility;

abstract class Handler {
    private Handler successor;

    public void setSuccessor(Handler successor) {
        this.successor = successor;
    }

    public void handleRequest(Request request) {
        if (successor != null) {
            successor.handleRequest(request);
        }
    }
}

class Request {
    private String content;

    public Request(String content) {
        this.content = content;
    }

    public String getContent() {
        return content;
    }
}

class ConcreteHandler1 extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getContent().contains("Handler1")) {
            System.out.println("Handled by ConcreteHandler1: " + request.getContent());
        } else {
            super.handleRequest(request);
        }
    }
}

class ConcreteHandler2 extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getContent().contains("Handler2")) {
            System.out.println("Handled by ConcreteHandler2: " + request.getContent());
        } else {
            super.handleRequest(request);
        }
    }
}

class ConcreteHandler3 extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getContent().contains("Handler3")) {
            System.out.println("Handled by ConcreteHandler3: " + request.getContent());
        } else {
            super.handleRequest(request);
        }
    }
}

public class chainOfResponsibility {
    public static void main(String[] args) {
        Handler handler1 = new ConcreteHandler1();
        Handler handler2 = new ConcreteHandler2();
        Handler handler3 = new ConcreteHandler3();

        handler1.setSuccessor(handler2);
        handler2.setSuccessor(handler3);

        Request request1 = new Request("Handler1 Request");
        Request request2 = new Request("Handler2 Request");
        Request request3 = new Request("Handler3 Request");

        handler1.handleRequest(request1);
        handler1.handleRequest(request2);
        handler1.handleRequest(request3);
    }
}

