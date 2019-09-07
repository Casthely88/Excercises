/*
 Chapter 3 Part 4:
 the 'new' keyword
 
 Scroll down to line 114
 */

#include <cassert>
#include <atomic>
#include <iostream>

namespace juce
{
    namespace AtomicHelpers
    {
        template <typename T> struct DiffTypeHelper     { using Type = T; };
        template <typename T> struct DiffTypeHelper<T*> { using Type = std::ptrdiff_t; };
    }
    template <typename Type>
    struct Atomic  final
    {
        using DiffType = typename AtomicHelpers::DiffTypeHelper<Type>::Type;
        Atomic() noexcept  : value (Type()) {}
        Atomic (Type initialValue) noexcept  : value (initialValue) {}
        Atomic (const Atomic& other) noexcept  : value (other.get()) {}
        ~Atomic() noexcept
        {
#if __cpp_lib_atomic_is_always_lock_free
            static_assert (std::atomic<Type>::is_always_lock_free,
                           "This class can only be used for lock-free types");
#endif
        }
        Type get() const noexcept               { return value.load(); }
        void set (Type newValue) noexcept       { value = newValue; }
        Type exchange (Type newValue) noexcept  { return value.exchange (newValue); }
        bool compareAndSetBool (Type newValue, Type valueToCompare) noexcept
        {
            return value.compare_exchange_strong (valueToCompare, newValue);
        }
        
        Atomic<Type>& operator= (const Atomic& other) noexcept
        {
            value = other.value.load();
            return *this;
        }
        
        Atomic<Type>& operator= (Type newValue) noexcept
        {
            value = newValue;
            return *this;
        }
        Type operator+= (DiffType amountToAdd) noexcept { return value += amountToAdd; }
        Type operator-= (DiffType amountToSubtract) noexcept { return value -= amountToSubtract; }
        Type operator++() noexcept { return ++value; }
        Type operator--() noexcept { return --value; }
        void memoryBarrier() noexcept          { atomic_thread_fence (std::memory_order_seq_cst); }
        std::atomic<Type> value;
    };
    
    template <class OwnerClass>
    class LeakedObjectDetector
    {
    public:
        //==============================================================================
        LeakedObjectDetector() noexcept                                 { ++(getCounter().numObjects); }
        LeakedObjectDetector (const LeakedObjectDetector&) noexcept     { ++(getCounter().numObjects); }
        
        ~LeakedObjectDetector()
        {
            if (--(getCounter().numObjects) < 0)
            {
                std::cout << "*** Dangling pointer deletion! Class: " << getLeakedObjectClassName() << std::endl;
                assert(false);
            }
        }
        
    private:
        //==============================================================================
        class LeakCounter
        {
        public:
            LeakCounter() = default;
            
            ~LeakCounter()
            {
                if (numObjects.value > 0)
                {
                    std::cout << "*** Leaked objects detected: " << numObjects.value << " instance(s) of class " << getLeakedObjectClassName() << std::endl;
                    assert(false);
                }
            }
            
            Atomic<int> numObjects;
        };
        
        static const char* getLeakedObjectClassName()
        {
            return OwnerClass::getLeakedObjectClassName();
        }
        
        static LeakCounter& getCounter() noexcept
        {
            static LeakCounter counter;
            return counter;
        }
    };
}
#define JUCE_JOIN_MACRO_HELPER(a, b) a ## b
#define JUCE_JOIN_MACRO(item1, item2)  JUCE_JOIN_MACRO_HELPER (item1, item2)
#define JUCE_LEAK_DETECTOR(OwnerClass) \
friend class juce::LeakedObjectDetector<OwnerClass>; \
static const char* getLeakedObjectClassName() noexcept { return #OwnerClass; } \
juce::LeakedObjectDetector<OwnerClass> JUCE_JOIN_MACRO (leakDetector, __LINE__);

/*
 Chapter 3 Part 4: new
 
 1) Copy some of your user-defined types from the 'this' keyword video task, preferably ones that depend on nested or other User Defined Types that you created.
 
 2) paste them below, above main()
 
 3) Add 'JUCE_LEAK_DETECTOR(OwnerClass)' at the end of your UDTs.
 
 4) write the name of your class where it says "OwnerClass"
 
 5) write wrapper classes for each type similar to how it was shown in the video
 
 6) Copy your main() code from the 'this' video that used your UDTs.
 
 7) duplicate it and update it to use your wrapper classes, which have your UDTs as pointer member variables.
 
 8) After you finish, click the [Compile, Link and Run] button to make sure you don't have any errors.
 
 share the url into the #ch3_p04 channel when you're done.  Good luck!!!
 
 see here for an example: https://coliru.stacked-crooked.com/a/ac6a0c24b5b92125
 */



int main()
{
    return 0;
}









