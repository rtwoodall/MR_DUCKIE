#ifndef MR_DUCKIEAPP_H
#define MR_DUCKIEAPP_H

#include "MooseApp.h"

class MrDuckieApp;

template<>
InputParameters validParams<MrDuckieApp>();

class MrDuckieApp : public MooseApp
{
public:
  MrDuckieApp(InputParameters parameters);
  virtual ~MrDuckieApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* MR_DUCKIEAPP_H */
