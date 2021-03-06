/* Forwards and natives for the team shuffle plugin
 */
 
forward void ND_OnTeamsShuffled();

native WB2_BalanceTeams();
#define BT2_AVAILABLE() (GetFeatureStatus(FeatureType_Native, "WB2_BalanceTeams") == FeatureStatus_Available)

native Handle WB2_GetBalanceData();
