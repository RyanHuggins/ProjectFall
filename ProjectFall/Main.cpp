#include "Common.h"

int main( int argc, char** argv )
{

#ifdef DEBUG

    initConsole();

#endif // DEBUG

    gpMemoryTracker = new MemoryTracker();

    Program* program = New Program();
    program->init();

    INFO("Main", "Starting Loop");

    program->start();

    INFO("Main", "Shutting Down");

    delete program;

#ifdef DEBUG

    if (gpMemoryTracker->numAllocations() > 0)
    {
        gpMemoryTracker->printAllocations();
        pause();
    }

#endif // DEBUG

    delete gpMemoryTracker;
    gpMemoryTracker = nullptr;

    return EXIT_SUCCESS;
}