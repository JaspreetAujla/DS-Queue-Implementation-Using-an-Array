class Queue:

    def __init__(self):
        self.queue = []

    def enqueue(self, item):
        self.queue.append(item)

    def dequeue(self):
        if len(self.queue) < 1:
            return None
        return self.queue.pop(0)

    def display(self):
        print(self.queue)

    def size(self):
        return len(self.queue)

print("\nElements in Queue:")
q = Queue()
q.enqueue(23)
q.enqueue(34)
q.enqueue(45)
q.enqueue(56)
q.enqueue(67)

q.display()

q.dequeue()
q.dequeue()
q.dequeue()
q.dequeue()

print("\nAfter Removing Elements from Queue:")
q.display()