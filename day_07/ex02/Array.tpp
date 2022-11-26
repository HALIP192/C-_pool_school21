#ifndef ARRAY_TPP
# define ARRAY_TPP

template<class T>
Array<T>::Array(void)
{
	arr = new T[0];
	count = 0;
}


template<class T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	count = n;
}

template<class T>
Array<T>::Array(const Array<T> &obj)
{
	count = obj.count;
	arr = new T[count];
	for (unsigned int i = 0; i < count; i++)
		arr[i] = obj.arr[i];
}

template<class T>
Array<T>::~Array(void)
{
	delete[] arr;
}

template<class T>
Array<T> &Array<T>::operator=(const Array<T> &obj)
{
	delete[] arr;
	count = obj.count;
	arr = new T[count];
	for (int i = 0; i < count; i++)
		arr[i] = obj.arr[i];
	return *this;
}

template<class T>
T &Array<T>::operator[](unsigned int idx) const
{
	if (idx >= count)
		throw std::exception();
	return arr[idx];
}

template<class T>
unsigned int Array<T>::size(void) const
{
	return count;
}

#endif
