#include "runtime/LazyJoinHashtable.h"

void runtime::LazyJoinHashtable::finalize() {
   size_t htSize = std::max(nextPow2(values.getLen() * 1.25), 1ul);
   htMask = htSize - 1;
   ht.setNewSize(htSize);
   values.iterate([&](uint8_t* ptr) {
      auto *entry = (Entry*) ptr;
      size_t hash = (size_t) entry->next;
      auto pos = hash & htMask;
      auto* previousPtr = ht.at(pos);
      ht.at(pos) = runtime::tag(entry, previousPtr, hash);
      entry->next = previousPtr;
   });
}
uint8_t* runtime::LazyJoinHashtable::insert(size_t hash) {
   auto* entryPtr = values.insert();
   reinterpret_cast<Entry*>(entryPtr)->next = reinterpret_cast<Entry*>(hash);
   return entryPtr + sizeof(Entry::next);
}
runtime::LazyJoinHashtable* runtime::LazyJoinHashtable::create(size_t typeSize) {
   return new LazyJoinHashtable(1024, typeSize);
}
void runtime::LazyJoinHashtable::destroy(LazyJoinHashtable* ht) {
   delete ht;
}

runtime::BufferIterator* runtime::LazyJoinHashtable::createIterator() {
   return values.createIterator();
}