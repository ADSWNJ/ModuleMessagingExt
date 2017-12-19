@echo Copying ModuleMessagingExt, Base and Put.hpp to %OrbiterDir%\...
copy src\ModuleMessagingExtBase.hpp %OrbiterDir%\orbitersdk\include\EnjoLib
copy src\ModuleMessagingExtPut.hpp %OrbiterDir%\orbitersdk\include\EnjoLib
copy src\ModuleMessagingExt.hpp %OrbiterDir%\orbitersdk\include\EnjoLib
@echo Copying ModuleMessagingExt.lib to %OrbiterDir%\...
copy lib\ModuleMessagingExt.lib %OrbiterDir%\orbitersdk\lib

