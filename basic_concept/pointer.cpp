#include <iostream>

namespace pointer_notes {

    void demo() {
        std::cout << "\n===== POINTER AND REFERENCE NOTES =====\n";

        int ival = 42;
        double dval = 3.14;

        int *p = &ival, &r = ival; // p is a pointer to int, r is a reference to ival
        int &rr = *p; // rr is a reference to the object pointed to by p
        int *pr = &r; // pr holds the address of r (which is the same as the address of ival)
        int *&rp = p; // rp is a reference to the pointer p
        rp = &ival; // changing rp changes p to point to ival
        void *vp = &ival; // vp is a void pointer pointing to ival
        int **pp = &p; // pp is a pointer to the pointer p

        std::cout << "ival: " << ival << "\n";
        std::cout << "*p (pointer dereference): " << *p << "\n";
        std::cout << "r (reference to ival): " << r << "\n";
        std::cout << "rr (reference to *p): " << rr << "\n";
        std::cout << "*pr (dereference of pointer to reference): " << *pr << "\n";
        std::cout << "*rp (dereference of pointer reference): " << *rp << "\n";
        std::cout << "*pp (dereference of pointer to pointer): " << *pp << "\n";
        std::cout << "**pp (double dereference of pointer to pointer): " << **pp << "\n";
        std::cout << "vp (void pointer): " << vp << "\n";
        std::cout << "*static_cast<int*>(vp) (dereferenced void pointer): " << *static_cast<int*>(vp) << "\n";
        
        *static_cast<int*>(vp) = 100; // modifying the value via void pointer
        std::cout << "ival after modifying via void pointer: " << ival << "\n";
        vp = &dval; // vp now points to dval
        std::cout << "vp after pointing to dval: " << vp << "\n";
        std::cout << "*static_cast<double*>(vp) (dereferenced void pointer to dval): " << *static_cast<double*>(vp) << "\n";
    }

} // namespace pointer_notes

int main() {
    pointer_notes::demo();
    return 0;
}