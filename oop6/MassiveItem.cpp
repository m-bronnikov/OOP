

template <class T> MassiveItem<T>::MassiveItem(){
  item = nullptr;
}

template <class T> std::shared_ptr<T>& MassiveItem<T>::GetValue(){
  return item;
}

template <class T> void MassiveItem<T>::SetValue(std::shared_ptr<T>& n){
  item = n;
  return;
}

template <class T> MassiveItem<T>& MassiveItem<T>::operator=(const MassiveItem<T>& right){
  item = right.item;
  return *this;
}

// template <class T>  TAllocationBlock MassiveItem<T>::allocator(sizeof(MassiveItem<T>),OPT_NUM);
//
// template <class T> void* MassiveItem<T>::operator new[](size_t size) {
// 	void* p = allocator.allocate(size);
//   // int* a;
//   // *a = 5;
//   // p = a;
//   return p;
// }
//
//
// template <class T> void MassiveItem<T>::operator delete[](void *p) {
//   int *a = (int *)p;
// 	allocator.deallocate(p, *a + 1);
// }
