//
// Created by Flo on 10.04.2022.
//
#include "../../WildStarTypes.c"

// void FUN_1403a71f0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
//                   int param_6)
void WindowHandlerFunction(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
                   int param_6)
{
    int iVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong lVar6;
    ulonglong uVar7;
    char *pcVar8;
    char *pcVar9;
    undefined8 extraout_XMM0_Qa;
    undefined4 uVar10;
    undefined8 local_48;
    longlong local_40;
    undefined8 local_38;

    uVar7 = 0;
    uVar10 = 0;
    if ((ulonglong)(longlong)param_5 < 0x66) {
        uVar10 = *(undefined4 *)(&DAT_140c48160 + (longlong)param_5 * 0x48);
    }
    uVar4 = uVar7;
    if (param_4 != 0) {
        uVar4 = FUN_1403d90d0();
        if (uVar4 == 0) {
            return;
        }
        iVar3 = FUN_1403add00(extraout_XMM0_Qa,param_2,uVar10);
        if (iVar3 != 0) {
            return;
        }
        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
             (*(int *)(*(longlong *)(param_3 + 0x78) + 8) ==
              *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) &&
            (*(longlong *)(DAT_140c65898 + 0x6718) != 0)) {
            return;
        }
    }
    iVar3 = *(int *)(param_3 + 0x6644);
    iVar1 = *(int *)(param_3 + 0x6640);
    *(int *)(param_3 + 0x6640) = param_4;
    *(int *)(param_3 + 0x6644) = param_5;
    if ((iVar3 == param_5) && (iVar1 == param_4)) {
        switch(iVar3) {
            case 8:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x1e:
            case 0x24:
            case 0x25:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x33:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4b:
            case 0x4c:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
                return;
        }
    }
    if (iVar1 == 0) goto switchD_1403a7314_caseD_9;
    switch(iVar3) {
        case 8:
            pcVar9 = "";
            pcVar8 = "HousingGuildNeighborhoodBrokerClose";
            break;
        default:
            goto switchD_1403a7314_caseD_9;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x25:
        case 0x33:
        case 0x3d:
        case 0x3e:
        case 0x3f:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Dialog_Close",&DAT_1409d0bff);
            FUN_140554ea0(&DAT_140c7dc60,0);
            goto switchD_1403a7314_caseD_9;
        case 0x1e:
            pcVar9 = "";
            pcVar8 = "SettlerHubClose";
            break;
        case 0x24:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"HideInstanceGameModeDialog",&DAT_1409e8fbc,1);
            goto switchD_1403a7314_caseD_9;
        case 0x28:
        case 0x29:
            pcVar9 = "";
            pcVar8 = "ResourceConversionClose";
            break;
        case 0x2a:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"AbilitiesWindowClose",&DAT_1409e9cfc,1);
            goto switchD_1403a7314_caseD_9;
        case 0x2b:
            FUN_140426b60();
            goto switchD_1403a7314_caseD_9;
        case 0x2c:
            pcVar9 = "";
            pcVar8 = "CraftingStationClose";
            break;
        case 0x2d:
            pcVar9 = "";
            pcVar8 = "ShuttlePromptClose";
            break;
        case 0x2e:
        case 0x2f:
        case 0x30:
            pcVar9 = "";
            pcVar8 = "TaxiWindowClose";
            break;
        case 0x31:
            FUN_140426ac0();
            goto switchD_1403a7314_caseD_9;
        case 0x41:
            pcVar9 = "";
            pcVar8 = "MannequinWindowClose";
            break;
        case 0x42:
            FUN_140426890();
            goto switchD_1403a7314_caseD_9;
        case 0x43:
            FUN_1404268d0();
            goto switchD_1403a7314_caseD_9;
        case 0x44:
            pcVar9 = "";
            pcVar8 = "MailBoxDeactivate";
            break;
        case 0x45:
            pcVar9 = "";
            pcVar8 = "HideDye";
            break;
        case 0x46:
            pcVar9 = "";
            pcVar8 = "GuildRegistrarClose";
            break;
        case 0x47:
            pcVar9 = "";
            pcVar8 = "WarPartyRegistrarClose";
            break;
        case 0x48:
            pcVar9 = "";
            pcVar8 = "GuildBankerClose";
            break;
        case 0x49:
            pcVar9 = "";
            pcVar8 = "WarPartyBankerClose";
            break;
        case 0x4b:
            pcVar9 = "";
            pcVar8 = "MarketplaceWindowClose";
            break;
        case 0x4c:
            pcVar9 = "";
            pcVar8 = "AuctionWindowClose";
            break;
        case 0x4f:
            pcVar9 = "";
            pcVar8 = "TradeskillEngravingStationClose";
            break;
        case 0x50:
            pcVar9 = "";
            pcVar8 = "HousingMannequinClose";
            break;
        case 0x51:
            pcVar9 = "";
            pcVar8 = "CityDirectionsClose";
            break;
        case 0x52:
            if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
                pcVar9 = "";
                pcVar8 = "CREDDExchangeWindowClose";
                break;
            }
            goto switchD_1403a7314_caseD_9;
        case 0x54:
            pcVar9 = "";
            pcVar8 = "CommunityRegistrarClose";
            break;
        case 0x55:
            pcVar9 = "";
            pcVar8 = "ContractBoardClose";
            break;
        case 0x56:
            pcVar9 = "";
            pcVar8 = "BarberClose";
            break;
        case 0x57:
            pcVar9 = "";
            pcVar8 = "MasterCraftsmanClose";
    }
    FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),pcVar8,pcVar9);
    switchD_1403a7314_caseD_9:
    if (param_6 != 0) {
        local_48 = CONCAT44(param_5,param_4);
        FUN_1403f4900(param_3,0x7ea,&local_48);
    }
    if (param_4 == 0) {
        return;
    }
    switch(*(int *)(param_3 + 0x6644)) {
        case 8:
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) {
                iVar3 = 0;
            }
            else {
                iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            }
            lVar6 = FUN_140205b60((iVar3 != 0xa7) + '\f');
            if (lVar6 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"HousingGuildNeighborhoodBrokerOpen",
                              &DAT_1409ebf7c,*(undefined4 *)(lVar6 + 4));
            }
            break;
        case 0x28:
        case 0x29:
            if (((*(longlong *)(uVar4 + 0x18) != 0) &&
                 (plVar5 = (longlong *)
                         FUN_1403ac530(IMAGE_DOS_HEADER_140000000.e_magic +
                                       (&switchD_1403a75ec::switchdataD_1403a7b80)
                                       [(&switchD_1403a75ec::switchdataD_1403a7bf0)
                                       [*(int *)(param_3 + 0x6644) + -8]],
                                       *(undefined4 *)(*(longlong *)(uVar4 + 0x18) + 0x70)),
                         plVar5 != (longlong *)0x0)) && ((*(byte *)(*plVar5 + 4) & 4) == 0)) {
                FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ResourceConversionOpen",&DAT_1409e9ffc,
                              param_4);
            }
            break;
        case 0x2a:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ToggleAbilitiesWindow",&DAT_1409e9d34,1);
            break;
        case 0x2b:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"InvokeTradeskillTrainerWindow",&DAT_1409e9f2c,
                          param_4);
            break;
        case 0x2d:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"InvokeShuttlePrompt",&DAT_1409e9f54,param_4);
            break;
        case 0x2e:
            uVar10 = 1;
            goto LAB_1403a77a0;
        case 0x2f:
        case 0x30:
            uVar10 = 0;
        LAB_1403a77a0:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"InvokeTaxiWindow",&DAT_1409e9f7c,param_4,uVar10
            );
            break;
        case 0x41:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"MannequinWindowOpen","");
            break;
        case 0x42:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ShowBank","");
            break;
        case 0x43:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ShowRealmBank",&DAT_1409d0da6);
            break;
        case 0x44:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"MailBoxActivate","");
            break;
        case 0x45:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ShowDye","");
            break;
        case 0x46:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"GuildRegistrarOpen",&DAT_1409ea66c,param_4);
            break;
        case 0x47:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"WarPartyRegistrarOpen",&DAT_1409ea63c,param_4);
            break;
        case 0x48:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"GuildBankerOpen",&DAT_1409ea554,param_4);
            break;
        case 0x49:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"WarPartyBankerOpen",&DAT_1409ea52c,param_4);
            break;
        case 0x4b:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ToggleMarketplaceWindow","");
            break;
        case 0x4c:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ToggleAuctionWindow","");
            break;
        case 0x4f:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"TradeskillEngravingStationOpen",&DAT_1409d11c7)
                    ;
            break;
        case 0x50:
            DAT_140c4df28 = 0;
            uVar4 = uVar7;
            if (DAT_140c4df20 != 0) {
                do {
                    uVar2 = *(ulonglong *)(DAT_140c4df18 + uVar7 * 8);
                    if ((uVar2 != 0) && (DAT_140c4df28 = uVar4, *(int *)(uVar2 + 0x68) == param_4)) {
                        uVar4 = uVar2;
                        DAT_140c4df28 = uVar2;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < DAT_140c4df20);
            }
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"HousingMannequinOpen",&DAT_1409d0fff);
            break;
        case 0x51:
            local_38 = 0;
            local_40 = 0;
            FUN_1403a9da0(IMAGE_DOS_HEADER_140000000.e_magic +
                          (&switchD_1403a75ec::switchdataD_1403a7b80)
                          [(&switchD_1403a75ec::switchdataD_1403a7bf0)[*(int *)(param_3 + 0x6644) + -8]],
                          *(undefined4 *)(DAT_140c65898 + 0x7150),&local_40);
            FUN_14042f470(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_40);
            if (local_40 != 0) {
                (**(code **)(*(longlong *)(local_40 + -0x10) + 8))(local_40 + -0x10);
            }
            break;
        case 0x52:
            if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
                FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ToggleCREDDExchangeWindow","");
            }
            break;
        case 0x54:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"CommunityRegistrarOpen",&DAT_1409ea9e4,param_4)
                    ;
            break;
        case 0x55:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ContractBoardOpen",&DAT_1409d0bfb);
            FUN_140437a10(DAT_140c658d8,0x152,0,0,0,0,1);
            break;
        case 0x56:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"BarberOpen",&DAT_1409d0bdf);
            break;
        case 0x57:
            FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"MasterCraftsmanOpen",&DAT_1409d0c17);
            break;
        case 0x58:
            FUN_1403fa280();
    }
    return;
}
