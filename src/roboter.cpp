#include "roboter.h"
#include <iostream>
using namespace std;

Roboter::Roboter(int argc, char **argv)
    :ROSNode(argc,argv)
{

}

void Roboter::setStatus(string status)
{
    m_status = status;
//    cout << "Status: " << status << endl;
    benachrichtige();
}

string Roboter::getStatus()
{
    return m_status;
}

void Roboter::setZiel(double x, double y)
{
    // hier Message an echten Roboter ueber ROSNode senden
}

void Roboter::msgReceivedCallback(const std_msgs::String::ConstPtr &msg)
{
    string status = string(msg->data.c_str());
    setStatus(status);
}
