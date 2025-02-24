#include <iostream>
#include <ctime>
#include "CWaitForFullSeconds.hpp"


CWaitForFullSeconds::CWaitForFullSeconds()
{
    timespec now;
    clockid_t id01;
    pid_t pid01;
    int clockID;
    clockID = clock_getcpuclockid(pid01, &id01);
    std::cout << clockID << std::endl;
}

CWaitForFullSeconds::~CWaitForFullSeconds()
{
}
