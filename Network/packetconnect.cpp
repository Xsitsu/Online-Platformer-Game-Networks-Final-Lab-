#include "packetconnect.hpp"

namespace Network
{

namespace Packet
{

Connect::Connect(uint32_t conId, PacketAction action) : Packet::Base(conId, PacketFamily::FAMILY_CONNECT, action), assignedId(0)
{

}

Connect::~Connect()
{

}

unsigned int Connect::GetPacketSize() const
{
    return sizeof(uint32_t) + Packet::Base::GetPacketSize();
}

uint32_t Connect::GetAssignedId() const
{
    return this->assignedId;
}

void Connect::SetAssignedId(uint32_t id)
{
    this->assignedId = id;
}


}

}
