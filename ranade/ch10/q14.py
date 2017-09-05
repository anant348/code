def pow2(b,p):
    if p == 0:
        return 1;
    if p == 1:
        return b;
    if p%2==0:
        temp = pow2(b,p/2);
        return temp*temp;
    else:
        temp = pow2(b,p-1);
        return temp*b;
def pow1(b,p):
    x = b;
    for i in range(p-1):
        x = x*b;
    return x;    
