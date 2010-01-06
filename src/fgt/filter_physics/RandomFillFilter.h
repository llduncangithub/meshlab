#ifndef RANDOMFILLFILTER_H
#define RANDOMFILLFILTER_H

#include "MeshSubFilter.h"
#include "ODEFacade.h"

class RandomFillFilter : public MeshSubFilter{
public:
    virtual void initParameterSet(QAction* action,MeshDocument& md, RichParameterSet & par);
    virtual bool applyFilter(QAction* filter, MeshDocument &md, RichParameterSet& par, vcg::CallBackPos* cb);

protected:
    virtual void addRandomObject(MeshDocument& md);

private:
    int m_randomLayer;
    int m_fillLayer;
    int m_dropRate;
    ODEFacade m_engine;
};

#endif // RANDOMFILLFILTER_H