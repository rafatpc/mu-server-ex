//---------------------------------------------------------------------------
// # Project:		HaRiBO MU GameServer - Supported Season 6
// # Company:		RealCoderZ MU Development � 2011
// # Description:	Firewall Class
// # Developed By:	WolF & M.E.S
//---------------------------------------------------------------------------
#ifndef FIREWALL_H
#define FIREWALL_H

#include "StdAfx.H"
//-------------------------------------------------------------------------------------------------------------------------------------------
#define MAX_IP_LEN					16
//-------------------------------------------------------------------------------------------------------------------------------------------
typedef struct IP_BLOCK_LIST
{
	char IpAddress[MAX_IP_LEN];
}
IPBLOCK;
//-------------------------------------------------------------------------------------------------------------------------------------------
class GCFirewall
{
public:
	GCFirewall();
	virtual ~GCFirewall();

	void	Init();
	void	Firewall__ReadFile();
	bool	CheckIP(DWORD aIndex);

	int		IPBlockCount;
	char	IpAddress[MAX_IP_LEN];
private:
	char	Enabled;
};
//-------------------------------------------------------------------------------------------------------------------------------------------
extern GCFirewall FirewallC;
//-------------------------------------------------------------------------------------------------------------------------------------------
#endif
//-------------------------------------------------------------------------------------------------------------------------------------------