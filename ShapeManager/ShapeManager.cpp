#include "ShapeManager.h"

ShapeManager::ShapeManager(const size_t& _size) :
    m_shapes(new const Shape*[_size]),
    m_capacity(_size) {
}

ShapeManager::~ShapeManager() {
    for (size_t index = 0; index < this->m_capacity; ++index) {
        if (this->m_shapes[index] != nullptr) {
            delete this->m_shapes[index];
        }
    }

    delete[] this->m_shapes;
}

const std::optional<const Shape*&> ShapeManager::operator[](const size_t& _index) const {
    return std::make_optional(this->m_shapes[_index]);
}

const std::optional<const Shape*&> ShapeManager::operator[](const std::function<const bool(const Shape*&)> _predicate) const {
    for (size_t index = 0; index < this->m_capacity; ++index) {
        if (_predicate(this->m_shapes[index])) {
            return std::make_optional(this->m_shapes[index]);
        }
    }

    return std::nullopt;
}
