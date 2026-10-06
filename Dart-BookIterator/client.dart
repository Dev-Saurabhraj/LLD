import 'Book.dart';
import 'ConcreteIterator.dart';
import 'Library.dart';

void main() {
  Library library = new Library();
  library.addBook(new Book('saurabh'));
  library.addBook(new Book('sumit'));
  library.addBook(new Book('sarthak'));
  library.addBook(new Book("subham"));

  final ConcreteIterator it = library.createIterator();

  while (it.hasNext()) {
    print(it.next() + '  ');
  }
}
