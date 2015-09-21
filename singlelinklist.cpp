void insertfirst(list *l, address p);
void insertlast(list *l, address p){
  address q = first(*l);
    while (next(q) != nill){
        q = next(q);
    }
    next(q)=p;
};
void insertafter(address q, address p);

void deletefirst(list *l,address p);
void deletelast(list *l,address p){
  address q;
    p = first(*l);
    while(next(p) != nill){
        q = p;
        p = next(p);
    }
    next(q)=nill;
    dealokasi(p);
};
void deleteafter(address q,address *p);
