#include "NatTypes.h"

#include "StringHelpers.h"

Naturalize::FactionType Naturalize::GetFactionFromString(std::string name)
{
	if (StringToLower(name) == "human")
	{
		return FACTION_HUMAN;
	}
	else if (StringToLower(name) == "plant")
	{
		return FACTION_PLANT;
	}

	return FACTION_UNKNOWN;
}

std::string Naturalize::GetStringFromFaction(Naturalize::FactionType faction)
{
	switch (faction)
	{
	default:
	case FACTION_UNKNOWN:
		break;
	case FACTION_HUMAN:
		return "human";
		break;
	case FACTION_PLANT:
		return "plant";
		break;
	}

	return "";
}

Naturalize::MoveType Naturalize::GetMoveTypeFromString(std::string name)
{
	if (StringToLower(name) == "infantry")
	{
		return MOVETYPE_INFANTRY;
	}
	else if (StringToLower(name) == "vehicle")
	{
		return MOVETYPE_VEHICLE;
	}
	else if (StringToLower(name) == "flying")
	{
		return MOVETYPE_FLYING;
	}

	return MOVETYPE_UNKNOWN;
}

std::string Naturalize::GetStringFromMoveType(Naturalize::MoveType movetype)
{
	switch (movetype)
	{
	default:
	case MOVETYPE_UNKNOWN:
		break;
	case MOVETYPE_INFANTRY:
		return "infantry";
		break;
	case MOVETYPE_VEHICLE:
		return "vehicle";
		break;
	case MOVETYPE_FLYING:
		return "flying";
		break;
	}

	return "";
}
