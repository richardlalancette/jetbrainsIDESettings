#ifndef __PROFILESCREENCONTROLLER_H_
#define __PROFILESCREENCONTROLLER_H_

#include "screen/ScreenViewController.h"

class CYISceneManager;
class ProfileScreenViewController : public ScreenViewController
{
public:
    ProfileScreenViewController(CYISceneManager *pSceneManager, CYIApp *pApplication);
    virtual ~ProfileScreenViewController();

protected:
    virtual void OnPreloadScreen(CYIBundle bundle, const CYIPersistentStore & StateData);

    virtual void OnLoadScreen(const CYIPersistentStore & StateData);
    virtual void OnUnloadScreen(CYIPersistentStore & StateData);
    virtual void OnStageScreen();
    virtual void OnUnstageScreen();

    virtual void UpdateView();

private:
    virtual CYISceneView *BuildView();
    void InitTestProfileViews();
};

#endif
