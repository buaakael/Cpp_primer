void free()
{
    if (elements)
    {
        for_each(elements, first_free, [this](std::string &rhs){ alloc.destroy(&rhs); });
        alloc.deallocate(elements, cap - elements);
    }
}
