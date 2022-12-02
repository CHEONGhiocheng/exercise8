//
//  mysort.h
//  exercise8
//
//  Created by jane cheong  on 23/11/2022.
//

#ifndef mysort_h
#define mysort_h
class mysort{
private:
    const static int siz=8;
    double v[siz]={-9.3,-3.8, -7.4,  -0.4, 1.3, 3.9, 5.4, 8.2};
public:
    mysort();
    ~mysort();
    void sortnumber();
};

#endif /* mysort_h */
