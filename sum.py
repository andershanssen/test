from threading import Thread

i = 0

def add():
    global i

    for j in range(0,1000000):
         i += 1

def sub():
    global i

    for j in range(0,1000000):
        i -= 1

def main():
    thread1 = Thread(target = add, args = (),)
    thread2 = Thread(target = sub, args = (),)

    thread1.start()
    thread2.start()

    thread1.join()
    thread2.join()

    print i

main()
