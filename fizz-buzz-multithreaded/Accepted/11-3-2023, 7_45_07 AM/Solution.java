// https://leetcode.com/problems/fizz-buzz-multithreaded

// Java Solution using 'synchronized' keyword
class FizzBuzz {
    private int n;
    private int x=1; // Shared Current Number

    public FizzBuzz(int n) {
        this.n = n;
    }

    // printFizz.run() outputs "fizz".
    public synchronized void fizz(Runnable printFizz) throws InterruptedException {
        while(x<=n) {
            if(x%3==0 && x%5!=0) {
                printFizz.run();
                x++;
                notifyAll(); // Wakes all the other waiting threads for this object
            }
            else wait();
        }
    }

    // printBuzz.run() outputs "buzz".
    public synchronized void buzz(Runnable printBuzz) throws InterruptedException {
        while(x<=n) {
            if(x%3!=0 && x%5==0) {
                printBuzz.run();
                x++;
                notifyAll(); // Wakes all the other waiting threads for this object
            }
            else wait();
        }  
    }

    // printFizzBuzz.run() outputs "fizzbuzz".
    public synchronized void fizzbuzz(Runnable printFizzBuzz) throws InterruptedException {
        while(x<=n) {
            if(x%3==0 && x%5==0) {
                printFizzBuzz.run();
                x++;
                notifyAll(); // Wakes all the other waiting threads for this object
            }
            else wait();
        }
    }

    // printNumber.accept(x) outputs "x", where x is an integer.
    public synchronized void number(IntConsumer printNumber) throws InterruptedException {
        while(x<=n) {
            if(x%3!=0 && x%5!=0) {
                printNumber.accept(x);
                x++;
                notifyAll(); // Wakes all the other waiting threads for this object
            }
            else wait();
        }
    }
}
