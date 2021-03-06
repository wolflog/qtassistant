#ifndef SEARCHMODULE_H
#define SEARCHMODULE_H

#include "cqmodule.h"

class SearchModulePrivate;
class SearchModule : public CqModule
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(SearchModule)

public:
    explicit SearchModule(CqEngine *engine = nullptr);
    virtual ~SearchModule();
protected:
    QScopedPointer<SearchModulePrivate> d_ptr;

public:
    bool privateMessageEvent(const MessageEvent &ev);
    bool groupMessageEvent(const MessageEvent &ev);
    bool discussMessageEvent(const MessageEvent &ev);

private:
    bool event(QEvent *event) final;
};

#endif // SEARCHMODULE_H
