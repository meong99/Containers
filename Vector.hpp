#include <memory>

namespace m_containers
{
    template<class T, class Allocator = std::allocator<T>>
    class vector
    {
        public:
        
        private:
        using value_type = T;
        using allocator_type = Allocator;
        using allocator_traits = std::allocator_traits<allocator_type>;
        using size_type = typename allocator_traits::size_type;
        using difference_type = typename allocator_traits::difference_type;
        using reference = value_type&;
        using const_reference = const value_type&;
    };
}