/*write a java program to implement an ArrayList Arr for 5 elements. All the elements should be 
integer/string type. Perform the following operation on Arr: 
i) Traversing 
ii) Sorting in ascending order 
iii) Sorting in descending order 
iv) Searching an element 
v) Addition of two or more duplicate items  */

import java.util.ArrayList; 
import java.util.Collections; 
 
public class ArrayListOperations { 
    public static void main(String[] args) { 
        ArrayList<Integer> arrInt = new ArrayList<>(); 
 
        arrInt.add(10); 
        arrInt.add(5); 
        arrInt.add(8); 
        arrInt.add(15); 
        arrInt.add(3); 
 
        System.out.println("Elements of the ArrayList:"); 
        for (int i = 0; i < arrInt.size(); i++) { 
            System.out.print(arrInt.get(i) + " "); 
        } 
        System.out.println(); 
 
        Collections.sort(arrInt); 
        System.out.println("Sorted in ascending order: " + arrInt); 
 
        Collections.sort(arrInt, Collections.reverseOrder()); 
        System.out.println("Sorted in descending order: " + arrInt); 
 
        int searchElement = 8; 
        if (arrInt.contains(searchElement)) { 
            System.out.println("Element " + searchElement + " found at index " + arrInt.indexOf(searchElement)); 
        } else { 
            System.out.println("Element " + searchElement + " not found"); 
        } 
 
        arrInt.add(5); 
        arrInt.add(10); 
        System.out.println("ArrayList after adding duplicate items: " + arrInt); 
    } 
} 