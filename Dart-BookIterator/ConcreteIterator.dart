import 'Book.dart';
import 'Iterator.dart';

class ConcreteIterator extends BookIterator {
  late List<Book> books = [];
  int index = 0;

  ConcreteIterator(this.books);
  @override
  bool hasNext() {
    return index < books.length;
  }
  @override
  String next() {
    return books[index++].title;
  }
}
