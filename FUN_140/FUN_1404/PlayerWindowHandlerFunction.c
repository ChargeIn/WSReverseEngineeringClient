//
// Created by Flo on 10.04.2022.
//

#include "../../WildStarTypes.c"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// void FUN_1404d7a10(longlong param_1, int *param_2, longlong param_3, int param_4)
void PlayerWindowsHandlerFunction(longlong param_1, int *param_2, longlong param_3, int param_4) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    char *pcVar5;
    undefined8 uVar6;
    wchar_t *pwVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    undefined4 uVar10;

    iVar1 = FUN_1405ccde0();
    if ((iVar1 != 0) && (*param_2 != 7)) {
        return;
    }
    iVar1 = *param_2;
    switch (iVar1) {
        case 2:
            pwVar7 = L"䄀戀猀漀爀瀀琀椀漀渀\x2000吀愀欀攀渀";
            pcVar5 = "InvokeOptionsDialog";
            goto LAB_1404d8738;
        case 3:
            pwVar7 = L"";
            pcVar5 = "ToggleCharacterWindow";
            goto LAB_1404d8738;
        case 4:
            pwVar7 = L"";
            pcVar5 = "ToggleInventory";
            goto LAB_1404d8738;
        case 5:
            pwVar7 = L"";
            pcVar5 = "ToggleQuestLog";
            goto LAB_1404d8738;
        case 6:
            FUN_14043c700(IMAGE_DOS_HEADER_140000000.e_magic +
                          (&switchD_1404d7a79::switchdataD_1404d8768)
                          [(&switchD_1404d7a79::switchdataD_1404d8914)[iVar1 + -2]], 0);
            break;
        case 7:
            FUN_1404d8a90(param_1, param_4);
            break;
        default:
            goto switchD_1404d7a79_caseD_8;
        case 9:
            if ((param_4 == 0) && (*(int *) (param_1 + 0x70a4) != 0)) {
                *(uint *) (param_1 + 0x70a8) = (uint) (*(int *) (param_1 + 0x70a8) == 0);
            }
            break;
        case 10:
            FUN_1404d8db0(param_1);
            break;
        case 0xb:
            if (param_4 == 0) {
                FUN_1404d9740(param_1);
            }
            break;
        case 0xc:
            FUN_1404d9450(param_1, param_4);
            break;
        case 0xd:
            if (param_4 == 0) {
                FUN_1404d9690(param_1);
            }
            break;
        case 0xe:
            if (*(longlong *) (param_1 + 0x6490) != 0) {
                FUN_14055b0e0(param_1, *(undefined4 *) (*(longlong *) (param_1 + 0x6490) + 8));
            }
            break;
        case 0xf:
            lVar2 = *(longlong *) (param_1 + 0x6c50);
            if ((lVar2 != 0) && (1 < *(ulonglong *) (lVar2 + 0x60))) {
                lVar2 = *(longlong *)
                        (*(longlong *) (lVar2 + 0x58) + (ulonglong) (*(longlong *) (lVar2 + 0x68) == 0) * 8);
                LAB_1404d7da6:
                if (lVar2 != 0) {
                    FUN_1403d9500(param_1, lVar2 + 0x10);
                    FUN_14055b0e0();
                }
            }
            break;
        case 0x10:
            lVar2 = *(longlong *) (param_1 + 0x6c50);
            if ((lVar2 != 0) && (2 < *(ulonglong *) (lVar2 + 0x60))) {
                lVar3 = 2;
                if (1 < *(ulonglong *) (lVar2 + 0x68)) {
                    lVar3 = 1;
                }
                lVar2 = *(longlong *) (*(longlong *) (lVar2 + 0x58) + lVar3 * 8);
                goto LAB_1404d7da6;
            }
            break;
        case 0x11:
            lVar2 = *(longlong *) (param_1 + 0x6c50);
            if ((lVar2 != 0) && (3 < *(ulonglong *) (lVar2 + 0x60))) {
                lVar3 = 3;
                if (2 < *(ulonglong *) (lVar2 + 0x68)) {
                    lVar3 = 2;
                }
                lVar2 = *(longlong *) (*(longlong *) (lVar2 + 0x58) + lVar3 * 8);
                goto LAB_1404d7da6;
            }
            break;
        case 0x12:
            lVar2 = *(longlong *) (param_1 + 0x6c50);
            if ((lVar2 != 0) && (4 < *(ulonglong *) (lVar2 + 0x60))) {
                lVar3 = 4;
                if (3 < *(ulonglong *) (lVar2 + 0x68)) {
                    lVar3 = 3;
                }
                lVar2 = *(longlong *) (*(longlong *) (lVar2 + 0x58) + lVar3 * 8);
                goto LAB_1404d7da6;
            }
            break;
        case 0x13:
            FUN_1404d9fd0(param_1, 1, 1, 0, 1);
            break;
        case 0x14:
            FUN_1404d9fd0(param_1, 1, 1, 0, 0);
            break;
        case 0x15:
            FUN_1404d9fd0(param_1, 0, 0, 1, 1);
            break;
        case 0x16:
            FUN_1404d9fd0(param_1, 0, 0, 1, 0);
            break;
        case 0x17:
            FUN_1404d8a00(param_1);
            break;
        case 0x18:
            FUN_1404d97a0(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x19:
            FUN_1404d9870(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x1a:
            FUN_1404d9940(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x1b:
            FUN_1404d9a10(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x1c:
            FUN_1404d9ae0(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x1d:
            FUN_1404d9bc0(param_1, param_4, *(undefined4 *) (param_3 + 0xc));
            break;
        case 0x20:
            if (param_4 != 0) {
                iVar1 = FUN_1404daf50();
                LAB_1404d854c:
                if (iVar1 != 0) {
                    DAT_140c89aa0 = 0;
                }
            }
            goto LAB_1404d8561;
        case 0x22:
            (**(code * *)(*DAT_140c89dc8 + 0x40))(DAT_140c89dc8, 0);
            break;
        case 0x23:
            if ((DAT_140c65970 != 0) && (*(longlong *) (param_1 + 0x78) != 0)) {
                if ((*(int *) (DAT_140c65970 + 8) == 2) &&
                    ((((iVar1 = FUN_14055a260(param_1 + 0x7330), iVar1 != 0 &&
                                                                 (*(int *) (param_1 + 0x64c4) != 0)) &&
                       (lVar2 = FUN_1403d90d0(param_1), lVar2 != 0)) &&
                      (iVar1 = FUN_140570c90(), iVar1 != 0)))) {
                    FUN_14055b0e0(param_1, *(undefined4 *) (lVar2 + 8));
                }
                (**(code * *)(*DAT_140c89dd0 + 0x40))(DAT_140c89dd0, 0);
            }
            break;
        case 0x24:
            FUN_1404d9f20(param_1, param_4);
            break;
        case 0x25:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            (**(code * *)(*DAT_140c89dc0 + 0x40))(DAT_140c89dc0, uVar10);
            break;
        case 0x26:
            FUN_1404db6d0(param_1);
            break;
        case 0x27:
            (**(code * *)(*DAT_140c89db0 + 0x40))(DAT_140c89db0, 0);
            break;
        case 0x28:
            DAT_140c89aa0 = (uint) (DAT_140c89aa0 == 0);
            break;
        case 0x2d:
            FUN_1404da040(param_1);
            break;
        case 0x2e:
            FUN_1404da150(param_1);
            break;
        case 0x2f:
            if (param_4 != 0) {
                iVar1 = FUN_1404daeb0(param_1, 0);
                goto LAB_1404d854c;
            }
        LAB_1404d8561:
            FUN_1404d7830(param_1);
            break;
        case 0x30:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_14039b930(param_1, 0x1e);
            }
            break;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x3a:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_1404da740(param_1, iVar1 + -0x31, 0);
            } else {
                FUN_1404da740(param_1, iVar1 + -0x31, 1);
            }
            break;
        case 0x39:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_1404da3e0(param_1, 0);
            } else {
                FUN_1404da3e0(param_1, 1);
            }
            break;
        case 0x67:
        case 0x68:
        case 0x69:
            if (*(longlong *) (param_1 + 0x6d90) != 0) {
                FUN_1405e7490(*(longlong *) (param_1 + 0x6d90), iVar1 + -0x67, 1);
            }
            break;
        case 0x6d:
            _DAT_140c89bb4 = (uint) (_DAT_140c89bb4 == 0);
            break;
        case 0x6e:
            pwVar7 = L"";
            pcVar5 = "ToggleFramerate";
            goto LAB_1404d8738;
        case 0x72:
            pwVar7 = L"";
            pcVar5 = "ToggleZoneMap";
            uVar4 = *(undefined8 *) (DAT_140c65898 + 0x7340);
            goto LAB_1404d873f;
        case 0x73:
            FUN_1400ea3e0(*(undefined8 *) (param_1 + 0x7340), "ToggleAbilitiesWindow", &DAT_1409e9d34, 0);
            break;
        case 0x76:
            if (*(int *) (param_1 + 0x7338) == 0) {
                iVar1 = FUN_14055a260(param_1 + 0x7330);
                if (iVar1 != 0) {
                    *(undefined4 *) (param_1 + 0x7338) = 2;
                }
            } else {
                *(undefined4 *) (param_1 + 0x7338) = 0;
            }
            break;
        case 0x77:
            FUN_1404da9d0(param_1);
            break;
        case 0x7b:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_1404da2e0(param_1, 0);
            } else {
                FUN_1404da2e0(param_1, 1);
            }
            break;
        case 0x80:
            if (*(longlong *) (param_1 + 0x73f8) != 0) {
                FUN_140608d00();
            }
            break;
        case 0x81:
            if (*(int *) (param_1 + 0x70b0) != 0) {
                lVar2 = *(longlong *) (param_1 + 0x71a0);
                if ((float) (*(uint *) (lVar2 + 0x224) & 0x7fffffff) < 1.570796) {
                    uVar10 = 0x40490fdb;
                } else {
                    uVar10 = 0;
                }
                *(undefined4 *) (lVar2 + 0x220) = *(undefined4 *) (lVar2 + 0x220);
                *(undefined4 *) (lVar2 + 0x224) = uVar10;
                *(undefined4 *) (lVar2 + 0x228) = *(undefined4 *) (lVar2 + 0x228);
                *(undefined4 *) (lVar2 + 0x22c) = *(undefined4 *) (lVar2 + 0x22c);
            }
            break;
        case 0x82:
            (**(code * *)(*DAT_140c89dd8 + 0x40))(DAT_140c89dd8, 0);
            break;
        case 0x83:
            pwVar7 = L"吀爀愀渀猀昀攀爀攀渀挀攀\x2000䐀漀渀攀";
            pcVar5 = "ToggleCodex";
            goto LAB_1404d8738;
        case 0x85:
            (**(code * *)(*DAT_140c89e00 + 0x40))(DAT_140c89e00, 0);
            break;
        case 0x86:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_1404da4e0(param_1, 0, 0);
            } else {
                FUN_1404da4e0(param_1, 0, 1);
            }
            break;
        case 0x87:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                FUN_1404da4e0(param_1, 1, 0);
            } else {
                FUN_1404da4e0(param_1, 1, 1, 1);
            }
            break;
        case 0x88:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da4e0(param_1, 2, uVar10);
            break;
        case 0x89:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da4e0(param_1, 3, uVar10);
            break;
        case 0x8a:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da4e0(param_1, 4, uVar10);
            break;
        case 0x8b:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da4e0(param_1, 5, uVar10);
            break;
        case 0x97:
            pwVar7 = L"";
            pcVar5 = "ToggleGroupFinder";
            goto LAB_1404d8738;
        case 0x98:
            if (*(uint *) (DAT_140c65898 + 0x7548) < 0x24) {
                (**(code * *)(*(longlong *) (&DAT_140c89d80)[(int) *(uint *) (DAT_140c65898 + 0x7548)] + 0x40))
                        ((longlong *) (&DAT_140c89d80)[(int) *(uint *) (DAT_140c65898 + 0x7548)], 0);
            } else {
                (**(code * *)(_DAT_00000000 + 0x40))(0, 0);
            }
            break;
        case 0x9a:
        case 0x9b:
        case 0x9c:
        case 0x9d:
        case 0x9e:
        case 0x9f:
        case 0xa0:
        case 0xa1:
            uVar9 = *(ulonglong *) (param_1 + 0x6490);
            if (uVar9 != 0) {
                uVar9 = (ulonglong) *(uint *) (uVar9 + 0x108);
            }
            FUN_1406020b0(param_1 + 0x6c10, iVar1 + -0x99, uVar9 & 0xffffffff);
            break;
        case 0xa2:
            FUN_14039eff0(param_1, 1);
            break;
        case 0xa3:
            FUN_14039eff0(param_1, 2);
            break;
        case 0xa4:
            FUN_14039eff0(param_1, 3);
            break;
        case 0xa5:
            FUN_14039eff0(param_1, 4);
            break;
        case 0xa8:
            if ((*(int *) (param_3 + 0x18) != 0) && (param_4 == 0)) {
                pwVar7 = L"";
                pcVar5 = "ChatReply";
                goto LAB_1404d8738;
            }
            break;
        case 0xa9:
            if ((*(int *) (param_3 + 0x18) != 0) && (param_4 == 0)) {
                pwVar7 = L"";
                pcVar5 = "ChatReWhisper";
                goto LAB_1404d8738;
            }
            break;
        case 0xb0:
            if (*(longlong *) (param_1 + 0x78) != 0) {
                uVar8 = 0;
                uVar6 = 1;
                uVar4 = 1;
                LAB_1404d7f1d:
                iVar1 = FUN_14055a5f0(param_1, uVar4, uVar6, uVar8, 1, 1, 0, 0x42480000);
                if (iVar1 != 0) {
                    FUN_14055b0e0(param_1, iVar1);
                }
            }
            break;
        case 0xb1:
            if (*(longlong *) (param_1 + 0x78) != 0) {
                uVar6 = 0;
                uVar8 = 1;
                uVar4 = 0;
                goto LAB_1404d7f1d;
            }
            break;
        case 0xb2:
            pwVar7 = L"";
            pcVar5 = "ToggleAchievementWindow";
            goto LAB_1404d8738;
        case 0xb3:
            pwVar7 = L"䌀慨汬湥敧扁湡潤n";
            pcVar5 = "ToggleAuctionList";
            goto LAB_1404d8738;
        case 0xb4:
            pwVar7 = L"䄀戀猀漀爀瀀琀椀漀渀\x2000䐀漀渀攀";
            pcVar5 = "ToggleChallengesWindow";
            goto LAB_1404d8738;
        case 0xb6:
            pwVar7 = L"";
            pcVar5 = "InvokeFriendsList";
            goto LAB_1404d8738;
        case 0xb7:
            pwVar7 = L"椀S匀瀀攀挀椀愀氀开吀愀欀攀渀";
            pcVar5 = "InterfaceMenu_ToggleLoreWindow";
            goto LAB_1404d8738;
        case 0xb8:
            pwVar7 = L"";
            pcVar5 = "ToggleMailWindow";
            goto LAB_1404d8738;
        case 0xb9:
            pwVar7 = L"";
            pcVar5 = "PlayerPathShow";
            goto LAB_1404d8738;
        case 0xbb:
            pwVar7 = L"";
            pcVar5 = "ToggleSocialWindow";
            goto LAB_1404d8738;
        case 0xbc:
            pwVar7 = L"匀瀀攀挀椀愀氀开吀愀欀攀渀";
            pcVar5 = "ToggleTradeskills";
            goto LAB_1404d8738;
        case 0xbd:
            iVar1 = DAT_140c49f00;
            if (*DAT_140c63750 < DAT_140c49f00) {
                iVar1 = *DAT_140c63750;
            }
            FUN_14039eff0(param_1, ((&DAT_140c49f10)[iVar1] != '\0') + '\x01', 1);
            break;
        case 0xbe:
        case 0xbf:
        case 0xc0:
        case 0xc1:
        case 0xc2:
        case 0xc3:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da610(param_1, iVar1 + -0xbe, uVar10);
            break;
        case 0xc4:
            pwVar7 = L"";
            pcVar5 = "ToggleGhostModeMap";
            uVar4 = *(undefined8 *) (DAT_140c65898 + 0x7340);
            goto LAB_1404d873f;
        case 0xc5:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            (**(code * *)(*DAT_140c89e50 + 0x40))(DAT_140c89e50, uVar10);
            break;
        case 0xc6:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            (**(code * *)(*DAT_140c89e58 + 0x40))(DAT_140c89e58, uVar10);
            break;
        case 199:
            pwVar7 = L"吀攀氀攀最愀瀀栀䔀瘀愀搀攀刀攀眀愀爀搀";
            pcVar5 = "ToggleGuild";
            goto LAB_1404d8738;
        case 200:
            FUN_1404d9ca0(param_1, param_4);
            break;
        case 0xc9:
            FUN_1404d9d40(param_1, param_4);
            break;
        case 0xca:
            FUN_1404d9de0(param_1, param_4);
            break;
        case 0xcb:
            FUN_1404d9e80(param_1, param_4);
            break;
        case 0xcd:
            if (param_4 == 0) {
                *(undefined4 *) (param_1 + 0x733c) = 0;
            } else {
                iVar1 = FUN_14055a260(param_1 + 0x7330);
                if (iVar1 != 0) {
                    *(undefined4 *) (param_1 + 0x733c) = 2;
                }
            }
            break;
        case 0xce:
            FUN_1403fa490(param_1, 1);
            break;
        case 0xcf:
            pwVar7 = L"";
            pcVar5 = "ToggleAccountInventoryWindow";
            goto LAB_1404d8738;
        case 0xd0:
            if (*(int *) (DAT_140c635f0 + 0x1708) == 0) {
                pwVar7 = L"";
                pcVar5 = "ToggleCREDDExchangeWindow";
                goto LAB_1404d8738;
            }
            break;
        case 0xd1:
            pwVar7 = L"唀一唀匀䔀䐀";
            pcVar5 = "ToggleCollectiblesWindow";
            goto LAB_1404d8738;
        case 0xd2:
            pwVar7 = L"椀戾匀瀀攀氀氀䘀愀椀氀甀爀攀开吀愀爀最攀琀开䘀攀攀琀";
            pcVar5 = "ToggleContractsWindow";
            goto LAB_1404d8738;
        case 0xd3:
            pwVar7 = L"";
            pcVar5 = "ToggleHoloWardrobeWindow";
            goto LAB_1404d8738;
        case 0xd4:
            pwVar7 = L"";
            pcVar5 = "ToggleLevelUpUnlockWindow";
            goto LAB_1404d8738;
        case 0xd6:
            pwVar7 = L"匀瀀攀氀氀䘀愀椀氀甀爀攀开吀愀爀最攀琀开䠀攀愀搀";
            pcVar5 = "ToggleWhoWindow";
            goto LAB_1404d8738;
        case 0xd7:
            pwVar7 = L"匀瀀攀挀椀愀氀开䐀漀渀攀";
            pcVar5 = "ToggleNonCombatAbilitiesWindow";
            goto LAB_1404d8738;
        case 0xd8:
            pwVar7 = (wchar_t *) ((longlong) L"bSpellFailure_Target_Feet" + 0x35);
            pcVar5 = "ToggleMacrosWindow";
            goto LAB_1404d8738;
        case 0xd9:
            pwVar7 = L"倀氀愀礀攀爀倀愀琀栀";
            pcVar5 = "ToggleReputationInterface";
            goto LAB_1404d8738;
        case 0xda:
            if ((*(int *) (param_3 + 0x18) == 0) || (param_4 == 0)) {
                uVar10 = 0;
            } else {
                uVar10 = 1;
            }
            FUN_1404da4e0(param_1, 6, uVar10);
            break;
        case 0xdb:
            pwVar7 = L"";
            pcVar5 = "ToggleWelcomeWindow";
            goto LAB_1404d8738;
        case 0xdd:
            pwVar7 = L"";
            pcVar5 = "ToggleLeaderboardsWindow";
            goto LAB_1404d8738;
        case 0xde:
            pwVar7 = L"";
            pcVar5 = "TogglePrimalMatrix";
        LAB_1404d8738:
            uVar4 = *(undefined8 *) (param_1 + 0x7340);
        LAB_1404d873f:
            FUN_1400ea3e0(uVar4, pcVar5, pwVar7);
    }
    FUN_1405df340(param_1 + 0x6838);
    switchD_1404d7a79_caseD_8:
    return;
}