package pack.pack2;

// Importing classes from pack1
import pack.pack1.First;
import pack.pack1.Second;  // Importing pack1.Second with full name

public class Fourth {
    public static void main(String[] args) {
        // Creating objects of pack1 classes
        First firstObj = new First();
        pack.pack1.Second secondObjPack1 = new pack.pack1.Second();

        // Accessing methods from pack1 classes
        firstObj.display();
        secondObjPack1.display();

        // Creating object of pack2 Second class
        Second secondObjPack2 = new Second();

        // Accessing method from pack2 Second class
        secondObjPack2.display();
    }
}
