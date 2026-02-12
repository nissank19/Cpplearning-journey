#include <memory>
template <class  T>

class Tptr{
public:
    Tptr(Tptr&&others) noexcept:m_ptr(others.m_ptr){others.m_ptr=nullptr;}

   /// Tptr& operator=(const Tptr& other) = delete;
///   Tptr(Tptr&& other) = delete;
    T*m_ptr;

    ~Tptr() {
        delete m_ptr;
    };
};