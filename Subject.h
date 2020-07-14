//
// Created by Lorenzo Ricci on 14/07/2020.
//

#ifndef INC_2020_SUBJECT_H
#define INC_2020_SUBJECT_H


class Subject {
public:
    virtual ~Subject();

    virtual void registerObserver(Observer* o)=0;
    virtual void unregisterObserver(Observer* o)=0;

    virtual void notify()=0;

};


#endif //INC_2020_SUBJECT_H
