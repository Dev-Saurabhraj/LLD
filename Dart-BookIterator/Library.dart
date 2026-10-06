import 'Book.dart';
import 'ConcreteIterator.dart';

class Library {
  late List<Book> books = [];

  void addBook(Book book) {
    books.add(book);
  }

  ConcreteIterator createIterator() {
    return ConcreteIterator(books);
  }
}
