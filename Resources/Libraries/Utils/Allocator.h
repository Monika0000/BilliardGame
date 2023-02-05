//
// Created by Monika on 09.08.2022.
//

#ifndef SRENGINE_ALLOCATOR_H
#define SRENGINE_ALLOCATOR_H

#include <Libraries/MemoryAllocator.h>

void* operator new(size_t sz) {
    return ESMemoryAlloc(sz);
}

void operator delete(void* ptr) {
    ESMemoryFree(ptr);
}

void* operator new[](size_t sz) {
    return ESMemoryAlloc(sz);
}

void operator delete[](void* ptr) {
    ESMemoryFree(ptr);
}

#include <iostream>
#include <string>
#include <thread>
#include <atomic>
#include <unordered_set>
#include <math.h>
#include <unordered_map>
#include <any>
#include <functional>
#include <utility>
#include <cmath>
#include <memory>
#include <ctype.h>

#define SR_SAFE_PTR_ASSERT(expr, msg)                                                                                  \
    if (!(expr)) {                                                                                                     \
        fprintf(stderr, "[SafePtr<%s>] %s\n\tLine: %i\n\tPtr: %p\n", typeid(T).name(), msg, __LINE__, (void *) m_ptr); \
    }                                                                                                                  \

#define SR_DLL_EXPORT
#define SR_NODISCARD [[nodiscard]]
#define SR_INLINE inline
#define SR_FORCE_INLINE __forceinline

#define SR_NEW_SAFE_PTR() { }
#define SR_DEL_SAFE_PTR() { }

#endif //SRENGINE_ALLOCATOR_H
