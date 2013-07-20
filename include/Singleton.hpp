#ifndef SINGLETON_H
#define SINGLETON_H

template< class T >
class Singleton
{
public:
	static T* Instance();
	static void FreeInstance();
    virtual ~Singleton();

protected:
	static T* Self;

	Singleton();
};

template< class T >
T* Singleton< T >::Self = 0;

template< class T >
Singleton< T >::Singleton() { }

template< class T >
Singleton< T >::~Singleton() { }


template< class T >
T* Singleton< T >::Instance()
{
	if(Self==0) {
    	Self = new T();
    }

    return Self;
}

template< class T >
void Singleton< T >::FreeInstance()
{
	if(Self) {
		delete Self;
		Self = 0;
	}
}

#endif // SINGLETON_H
