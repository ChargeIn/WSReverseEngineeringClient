//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407abb30(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auStack200 [32];
    undefined4 local_a8;
    undefined4 local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    int local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    local_68 = 1;
    local_90 = 1;
    lVar5 = param_1 + 0x10420 +
            ((ulonglong)*(uint *)(param_1 + 0x69760 + (param_2 & 0xffffffff) * 4) +
             (param_2 & 0xffffffff) * 8) * 0x58;
    uVar1 = *(undefined4 *)(param_1 + 0x69760 + (ulonglong)*(uint *)(lVar5 + 8) * 4);
    uVar2 = *(undefined4 *)(lVar5 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0x69f7c + (ulonglong)*(uint *)(lVar5 + 8) * 4);
    local_50 = 1;
    local_78 = 1;
    local_54 = 0xffffffff;
    local_7c = 0xffffffff;
    local_a8 = uVar3;
    local_a0 = param_3;
    local_8c = uVar1;
    local_88 = uVar2;
    local_80 = uVar3;
    local_64 = uVar1;
    local_60 = uVar2;
    local_58 = uVar3;
    lVar4 = FUN_1407abd10(param_1,uVar1,uVar2);
    local_5c = *(undefined4 *)(lVar5 + 0x10);
    local_70 = lVar4;
    if (*(int *)(lVar5 + 0xc) == 5) {
        local_98 = 0;
        local_84 = 6;
    }
    else {
        local_a8 = uVar3;
        local_a0 = param_3;
        local_98 = FUN_1407abd10(param_1,uVar1,uVar2);
        local_84 = *(int *)(lVar5 + 0xc);
        if (local_98 != 0) {
            FUN_1407ac430(param_1,local_98,&local_90,(local_84 - 1U & 0xfffffffd) != 0);
            lVar4 = local_70;
        }
    }
    if (lVar4 != 0) {
        FUN_1407ac430(param_1,lVar4,&local_68,1);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack200);
    return;
}



void FUN_1407abcd0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined4 *puVar2;

    puVar2 = (undefined4 *)(param_1 + 0x6a888);
    for (lVar1 = 0xdf; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = param_2;
        puVar2 = puVar2 + 1;
    }
    return;
}



int * FUN_1407abd10(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,uint param_5,
                    uint param_6)

{
    int iVar1;
    int **ppiVar2;
    int *piVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong uVar7;

    uVar7 = 0;
    iVar1 = *DAT_140c63750;
    iVar4 = DAT_140c54a20;
    if (iVar1 < DAT_140c54a20) {
        iVar4 = iVar1;
    }
    lVar6 = 1;
    if ((&DAT_140c54a30)[iVar4] != '\0') {
        lVar6 = 8;
    }
    if (lVar6 != 0) {
        iVar4 = DAT_140c54a20;
        if (iVar1 < DAT_140c54a20) {
            iVar4 = iVar1;
        }
        uVar5 = 1;
        if ((&DAT_140c54a30)[iVar4] != '\0') {
            uVar5 = 8;
        }
        do {
            for (ppiVar2 = *(int ***)(param_1 + 0xa0 +
                                      ((ulonglong)param_6 +
                                       ((ulonglong)
                                        *(uint *)(&DAT_140b53390 + ((param_2 & 0xffffffff) * 8 + uVar7) * 4)
                                        + (param_3 & 0xffffffff) * 8) * 2) * 8); ppiVar2 != (int **)0x0;
                 ppiVar2 = (int **)ppiVar2[4]) {
                piVar3 = *ppiVar2;
                if (((piVar3 != (int *)0x0) &&
                     ((*(uint *)(ppiVar2 + 2) & param_5) == *(uint *)((longlong)ppiVar2 + 0xc))) &&
                    ((*(int *)(param_1 + 0x5c) == 0 || (*piVar3 == 7)))) {
                    if (*(int *)(ppiVar2 + 1) != param_4) {
                        return (int *)0x0;
                    }
                    return piVar3;
                }
            }
        } while ((*(uint *)(&DAT_140b53390 + ((param_2 & 0xffffffff) * 8 + uVar7) * 4) != 0) &&
                 (uVar7 = (ulonglong)((int)uVar7 + 1), uVar7 < uVar5));
    }
    return (int *)0x0;
}



int * FUN_1407abe40(longlong param_1,ulonglong param_2,uint param_3,int param_4,uint param_5,
                    uint param_6)

{
    int iVar1;
    int **ppiVar2;
    int *piVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar6 = 0;
    iVar1 = *DAT_140c63750;
    iVar4 = DAT_140c54a20;
    if (iVar1 < DAT_140c54a20) {
        iVar4 = iVar1;
    }
    lVar5 = 1;
    if ((&DAT_140c54a30)[iVar4] != '\0') {
        lVar5 = 8;
    }
    if (lVar5 != 0) {
        iVar4 = DAT_140c54a20;
        if (iVar1 < DAT_140c54a20) {
            iVar4 = iVar1;
        }
        uVar7 = 1;
        if ((&DAT_140c54a30)[iVar4] != '\0') {
            uVar7 = 8;
        }
        do {
            for (ppiVar2 = *(int ***)(param_1 + 0x100a0 +
                                      ((ulonglong)param_6 +
                                       ((ulonglong)
                                        *(uint *)(&DAT_140b53390 + ((param_2 & 0xffffffff) * 8 + uVar6) * 4)
                                        + (ulonglong)param_3 * 8) * 2) * 8); ppiVar2 != (int **)0x0;
                 ppiVar2 = (int **)ppiVar2[4]) {
                piVar3 = *ppiVar2;
                if (((piVar3 != (int *)0x0) && (*(int *)(ppiVar2 + 1) == param_4)) &&
                    ((*(uint *)(ppiVar2 + 2) & param_5) == *(uint *)((longlong)ppiVar2 + 0xc))) {
                    if (*(int *)(param_1 + 0x5c) == 0) {
                        return piVar3;
                    }
                    if (*piVar3 == 7) {
                        return piVar3;
                    }
                }
            }
        } while ((*(uint *)(&DAT_140b53390 + ((param_2 & 0xffffffff) * 8 + uVar6) * 4) != 0) &&
                 (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar7));
    }
    return (int *)0x0;
}



void FUN_1407abf70(longlong *param_1)

{
    int *piVar1;
    int *piVar2;
    undefined4 uVar3;
    int iVar4;
    BOOL BVar5;
    int iVar6;
    HWND hWndParent;
    longlong lVar7;
    int iVar8;
    uint uVar9;
    undefined auStack136 [32];
    int local_68;
    int local_60;
    int local_58;
    int local_54;
    uint local_50;
    int local_4c;
    int local_48;
    undefined4 local_44;
    ulonglong local_38;
    undefined8 uStack48;

    *(undefined4 *)((longlong)param_1 + 0x6a87c) = *(undefined4 *)(param_1 + 0xd510);
    uStack48 = 0x1407abf8a;
    uVar3 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0xd510) = uVar3;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    iVar4 = (**(code **)(*param_1 + 0xb8))();
    hWndParent = GetForegroundWindow();
    uVar3 = 0;
    if ((hWndParent == (HWND)param_1[2]) || (BVar5 = IsChild(hWndParent,(HWND)param_1[2]), BVar5 != 0)
            ) {
        uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar3;
    iVar6 = (**(code **)(*param_1 + 0xb8))();
    if (iVar4 != iVar6) {
        FUN_1407ac000();
    }
    for (piVar1 = (int *)param_1[0xd4f3]; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 0x10)) {
        if (piVar1[3] == 1) {
            iVar4 = DAT_140c54a60;
            if (*DAT_140c63750 < DAT_140c54a60) {
                iVar4 = *DAT_140c63750;
            }
            if (*(uint *)(&DAT_140c54a70 + (longlong)iVar4 * 4) <=
                (uint)(*(int *)(param_1 + 0xd510) - piVar1[7]) &&
                *(int *)(param_1 + 0xd510) - piVar1[7] != *(uint *)(&DAT_140c54a70 + (longlong)iVar4 * 4))
            {
                iVar4 = *piVar1;
                if (iVar4 == 1) {
                    uVar9 = piVar1[2];
                    iVar6 = piVar1[1];
                    local_68 = *(undefined4 *)((longlong)param_1 + (ulonglong)uVar9 * 4 + 0x69f7c);
                    local_60 = 0;
                    lVar7 = FUN_1407abd10(param_1,iVar6,uVar9,2);
                }
                else {
                    if (iVar4 != 2) goto LAB_1407acf7b;
                    uVar9 = piVar1[2];
                    iVar6 = piVar1[1];
                    local_68 = *(undefined4 *)((longlong)param_1 + (ulonglong)uVar9 * 4 + 0x6a77c);
                    local_60 = 0;
                    lVar7 = FUN_1407abe40(param_1,iVar6,uVar9,2);
                }
                if (lVar7 != 0) {
                    local_48 = piVar1[5];
                    piVar1[3] = 2;
                    local_4c = 2;
                    local_44 = 0xffffffff;
                    local_68 = 1;
                    local_58 = iVar4;
                    local_54 = iVar6;
                    local_50 = uVar9;
                    FUN_1407ac2c0();
                }
            }
        }
        LAB_1407acf7b:
        local_60 = piVar1[3];
        local_68 = piVar1[2];
        FUN_1400035b0();
    }
    piVar1 = (int *)param_1[0xd4f4];
    iVar4 = DAT_140c549c0;
    do {
        do {
            piVar2 = piVar1;
            if (piVar2 == (int *)0x0) {
                FUN_1407db4f0(local_38 ^ (ulonglong)auStack136);
                return;
            }
            piVar1 = *(int **)(piVar2 + 0x14);
            iVar6 = iVar4;
            if (*DAT_140c63750 < iVar4) {
                iVar6 = *DAT_140c63750;
            }
        } while ((uint)(*(int *)(param_1 + 0xd510) - piVar2[7]) <
                 *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4) ||
                 *(int *)(param_1 + 0xd510) - piVar2[7] ==
                 *(uint *)(&DAT_140c549d0 + (longlong)iVar6 * 4));
        iVar4 = *piVar2;
        if (iVar4 == 1) {
            uVar9 = piVar2[2];
            iVar6 = piVar2[1];
            iVar8 = piVar2[5];
            local_60 = 0;
            local_68 = iVar8;
            lVar7 = FUN_1407abd10(param_1,iVar6,uVar9,5);
            LAB_1407ad06f:
            if (lVar7 != 0) {
                local_4c = piVar2[3];
                local_44 = 0xffffffff;
                local_58 = iVar4;
                local_54 = iVar6;
                local_50 = uVar9;
                local_48 = iVar8;
                FUN_1407ac430(param_1,lVar7,&local_58,1);
            }
        }
        else if (iVar4 == 2) {
            uVar9 = piVar2[2];
            iVar6 = piVar2[1];
            iVar8 = piVar2[5];
            local_60 = 0;
            local_68 = iVar8;
            lVar7 = FUN_1407abe40(param_1,iVar6,uVar9,5);
            goto LAB_1407ad06f;
        }
        if (*(undefined8 **)(piVar2 + 0x12) != (undefined8 *)0x0) {
            **(undefined8 **)(piVar2 + 0x12) = *(undefined8 *)(piVar2 + 0x14);
        }
        if (*(longlong *)(piVar2 + 0x14) != 0) {
            *(undefined8 *)(*(longlong *)(piVar2 + 0x14) + 0x48) = *(undefined8 *)(piVar2 + 0x12);
        }
        *(undefined8 *)(piVar2 + 0x12) = 0;
        *(undefined8 *)(piVar2 + 0x14) = 0;
        iVar4 = DAT_140c549c0;
    } while( true );
}



void FUN_1407ac000(longlong *param_1)

{
    int iVar1;
    int iVar2;
    BOOL BVar3;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined extraout_XMM0_01 [16];
    undefined auVar4 [16];
    int local_res8 [2];
    undefined local_28 [12];
    LONG local_1c;
    tagRECT local_18;

    iVar1 = (**(code **)(*param_1 + 0xb8))();
    if (iVar1 == 0) {
        auVar4 = extraout_XMM0;
        if (*(int *)(param_1 + 0xd50f) == 0) {
            if (*(int *)(DAT_140c65678 + 0x48) != 4) {
                ClipCursor((RECT *)0x0);
            }
            SetCursorPos(*(int *)(param_1 + 0xd4fb),*(int *)((longlong)param_1 + 0x6a7dc));
            auVar4 = extraout_XMM0_01;
        }
        *(undefined (*) [16])(param_1 + 0xd4fc) = auVar4 & (undefined  [16])0x0;
        return;
    }
    GetCursorPos((LPPOINT)(param_1 + 0xd4fb));
    ((LPPOINT)(param_1 + 0xd4fa))->x = *(LONG *)(param_1 + 0xd4fb);
    *(undefined4 *)((longlong)param_1 + 0x6a7d4) = *(undefined4 *)((longlong)param_1 + 0x6a7dc);
    ScreenToClient((HWND)param_1[2],(LPPOINT)(param_1 + 0xd4fa));
    if ((*(int *)(param_1 + 0xd50f) == 0) && (*(int *)(DAT_140c65678 + 0x48) != 4)) {
        GetClientRect((HWND)param_1[2],&local_18);
        local_28._0_4_ = local_18.left;
        local_28._4_4_ = local_18.top;
        local_28._8_4_ = local_18.right;
        local_1c = local_18.bottom;
        ClientToScreen((HWND)param_1[2],(LPPOINT)local_28);
        ClientToScreen((HWND)param_1[2],(LPPOINT)(local_28 + 8));
        ClipCursor((RECT *)local_28);
    }
    iVar1 = GetSystemMetrics(1);
    iVar2 = GetSystemMetrics(0);
    *(float *)(param_1 + 0xd50c) = (float)iVar2 * 3.051758e-05;
    *(float *)((longlong)param_1 + 0x6a864) = (float)iVar1 * 3.051758e-05;
    *(undefined4 *)(param_1 + 0xd50d) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6a86c) = 0;
    BVar3 = SystemParametersInfoW(0x70,0,local_res8,0);
    if (BVar3 != 0) {
        *(float *)(param_1 + 0xd50e) = (float)local_res8[0] * 0.1;
        *(undefined (*) [16])(param_1 + 0xd4fc) = ZEXT416(0);
        return;
    }
    *(undefined4 *)(param_1 + 0xd50e) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0xd4fc) = extraout_XMM0_00 & (undefined  [16])0x0;
    return;
}



void FUN_1407ac1f0(longlong *param_1)

{
    int iVar1;
    int iVar2;

    iVar1 = (**(code **)(*param_1 + 0xb8))();
    *(undefined4 *)((longlong)param_1 + 0x6a874) = 0;
    iVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
    if (iVar1 != iVar2) {
        FUN_1407ac000(param_1);
    }
    return;
}



undefined8 FUN_1407ac240(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    undefined8 uVar2;

    if (*(code **)(param_1 + 0x20) == (code *)0x0) {
        LAB_1407ac283:
        if (*(code **)(param_1 + 0x30) != (code *)0x0) {
            iVar1 = (**(code **)(param_1 + 0x30))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x28))
                    ;
            if (iVar1 != 0) goto LAB_1407ac27c;
        }
        uVar2 = 0;
    }
    else {
        iVar1 = (**(code **)(param_1 + 0x20))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x28));
        if (iVar1 == 0) goto LAB_1407ac283;
        LAB_1407ac27c:
        uVar2 = 1;
    }
    return uVar2;
}



ulonglong FUN_1407ac2c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,
                        int param_5)

{
    longlong lVar1;
    short sVar2;
    short sVar3;
    undefined4 *puVar4;
    longlong lVar5;
    int iVar6;
    undefined4 uVar7;
    short *psVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    uVar9 = 0;
    if (*(int *)(param_2 + 0x90) == 0) {
        return 0;
    }
    if (param_1[0x12] != 0) {
        uVar10 = uVar9;
        do {
            psVar8 = (short *)(param_2 + 0x44);
            do {
                sVar2 = *psVar8;
                sVar3 = *(short *)((longlong)psVar8 +
                                   ((*(longlong *)(param_1[0x11] + uVar10 * 8) + 0x44) -
                                    (longlong)(short *)(param_2 + 0x44)));
                if (sVar2 != sVar3) break;
                psVar8 = psVar8 + 1;
            } while (sVar3 != 0);
            if (sVar2 == sVar3) goto LAB_1407ac357;
            uVar10 = (ulonglong)((int)uVar10 + 1);
        } while (uVar10 < (ulonglong)param_1[0x12]);
    }
    uVar10 = 0xffffffff;
    LAB_1407ac357:
    lVar1 = (longlong)(int)uVar10 * 8;
    puVar4 = *(undefined4 **)(param_1[0x11] + (longlong)(int)uVar10 * 8);
    if (puVar4[0x5f] == 0) {
        iVar6 = (**(code **)(*param_1 + 0x160))(param_1,*puVar4);
        if ((param_4 != 0) && (iVar6 != 0)) {
            *(undefined4 *)(*(longlong *)(param_1[0x11] + lVar1) + 0x17c) = 1;
        }
        lVar5 = param_1[0x11];
        uVar7 = FUN_14018cdf0();
        *(undefined4 *)(*(longlong *)(lVar1 + lVar5) + 0x180) = uVar7;
        if ((param_5 != 0) && (iVar6 != 0)) {
            iVar6 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,1);
            uVar9 = (ulonglong)(iVar6 != 0);
            uVar7 = FUN_14018cdf0();
            FUN_1400035b0(0xf,4,0,param_2 + 0x44,uVar7);
        }
    }
    return uVar9;
}



ulonglong FUN_1407ac430(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
    int *piVar1;
    longlong lVar2;
    short sVar3;
    short sVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    short *psVar8;
    uint uVar9;
    ulonglong uVar10;
    int iVar11;
    ulonglong uVar12;

    uVar10 = 0;
    if (*(int *)(param_2 + 0x90) == 0) {
        return 0;
    }
    if (param_1[0x12] != 0) {
        uVar12 = uVar10;
        do {
            psVar8 = (short *)(param_2 + 0x44);
            do {
                sVar3 = *psVar8;
                sVar4 = *(short *)((longlong)psVar8 +
                                   ((*(longlong *)(param_1[0x11] + uVar12 * 8) + 0x44) -
                                    (longlong)(short *)(param_2 + 0x44)));
                if (sVar3 != sVar4) break;
                psVar8 = psVar8 + 1;
            } while (sVar4 != 0);
            if (sVar3 == sVar4) goto LAB_1407ac4c7;
            uVar12 = (ulonglong)((int)uVar12 + 1);
        } while (uVar12 < (ulonglong)param_1[0x12]);
    }
    uVar12 = 0xffffffff;
    LAB_1407ac4c7:
    lVar2 = (longlong)(int)uVar12 * 8;
    if (*(int *)(*(longlong *)(param_1[0x11] + lVar2) + 0x17c) != 0) {
        *(undefined4 *)(*(longlong *)(param_1[0x11] + lVar2) + 0x17c) = 0;
        iVar6 = FUN_14018cdf0();
        uVar5 = *(uint *)(*(longlong *)(lVar2 + param_1[0x11]) + 0x180);
        uVar9 = *(uint *)(param_1 + 0xd510);
        if (*(uint *)(param_1 + 0xd510) < uVar5) {
            uVar9 = uVar5;
        }
        iVar11 = iVar6 - uVar9;
        iVar7 = iVar11;
        if (iVar11 == 0) {
            iVar7 = 1;
        }
        piVar1 = (int *)(*(longlong *)(lVar2 + param_1[0x11]) + 0x184);
        *piVar1 = *piVar1 + iVar7;
        if ((param_4 != 0) &&
            (iVar7 = (**(code **)(*param_1 + 0x160))(param_1,**(undefined4 **)(lVar2 + param_1[0x11])),
                    iVar7 != 0)) {
            iVar7 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,0);
            uVar10 = (ulonglong)(iVar7 != 0);
            FUN_1400035b0(0xf,4,0,param_2 + 0x44,iVar6,iVar11);
        }
    }
    return uVar10;
}



void FUN_1407ac660(longlong param_1,int param_2,undefined4 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x90) != 0) {
        uVar3 = 0;
        while (**(int **)(*(longlong *)(param_1 + 0x88) + uVar3 * 8) != param_2) {
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
            uVar3 = (ulonglong)uVar1;
            if (*(ulonglong *)(param_1 + 0x90) <= uVar3) {
                return;
            }
        }
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + uVar2 * 8) + 0x17c) = param_3;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + uVar2 * 8) + 0x184) = 0;
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + uVar2 * 8) + 0x180) = 0;
    }
    return;
}



undefined8 FUN_1407af940(undefined8 param_1,ulonglong param_2)

{
    FUN_1407af980();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407af980(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b78750;
    if ((HANDLE)param_1[5] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[5]);
    }
    if (param_1[0x1b] != 0) {
        WinHttpCloseHandle();
    }
    if (param_1[0x1a] != 0) {
        WinHttpCloseHandle();
    }
    FUN_14018b900(param_1[0xc],0);
    lVar1 = param_1[10];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001407af9e7. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



uint FUN_1407afa00(longlong param_1,undefined8 param_2)

{
    DWORD DVar1;
    HANDLE pvVar2;
    longlong lVar3;
    short *psVar4;
    short *psVar5;
    DWORD DVar6;

    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x28) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        if (0 < (int)DVar1) {
            return DVar1 & 0xffff | 0x80070000;
        }
    }
    else {
        DVar1 = FUN_1401c3640(param_1 + 0x60,param_2);
        if ((-1 < (int)DVar1) && (DVar1 = FUN_1401c37f0(param_1 + 0xd0,param_2,1), -1 < (int)DVar1)) {
            lVar3 = WinHttpConnect(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80),
                                   *(undefined2 *)(param_1 + 0x8c));
            *(longlong *)(param_1 + 0xd8) = lVar3;
            if (lVar3 == 0) {
                DVar1 = GetLastError();
                if (0 < (int)DVar1) {
                    DVar1 = DVar1 & 0xffff | 0x80070000;
                }
                if ((int)DVar1 < 0) {
                    return DVar1;
                }
            }
            else {
                *(undefined8 *)(param_1 + 0xe0) = 0;
            }
            psVar5 = *(short **)(param_1 + 0xb0);
            psVar4 = (short *)(param_1 + 0xe8);
            lVar3 = 0x104;
            DVar6 = 0;
            do {
                if ((lVar3 == -0x7ffffefa) || (*psVar5 == 0)) {
                    if (lVar3 != 0) goto LAB_1407afb1a;
                    break;
                }
                *psVar4 = *psVar5;
                psVar4 = psVar4 + 1;
                psVar5 = psVar5 + 1;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            psVar4 = psVar4 + -1;
            DVar6 = 0x8007007a;
            LAB_1407afb1a:
            *psVar4 = 0;
            DVar1 = 0;
            if ((int)DVar6 < 0) {
                DVar1 = DVar6;
            }
        }
    }
    return DVar1;
}



int FUN_1407afb50(longlong *param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x3c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x38))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 * FUN_1407afb80(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b78780;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[1] + 8))();
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



ulonglong FUN_1407b00b0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    DWORD DVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_18;
    undefined4 uStack20;

    lVar1 = *(longlong *)(param_1 + 8) + 0xe8;
    if (lVar1 == 0) {
        return 0x80070057;
    }
    uVar4 = FUN_1401c39a0(*(longlong *)(param_1 + 8) + 0xd8,lVar1,&local_18);
    if (-1 < (int)uVar4) {
        if (CONCAT44(uStack20,local_18) < 0x100000000) {
            FUN_140033620(*(longlong *)(param_1 + 8) + 0x50);
            plVar2 = *(longlong **)(param_1 + 8);
            uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
            uVar4 = FUN_1401c3dc0(plVar2 + 0x1b,plVar2 + 0x1d,uVar5,local_18,plVar2 + 2);
            if (-1 < (int)uVar4) {
                DVar3 = WaitForSingleObject(*(HANDLE *)(*(longlong *)(param_1 + 8) + 0x28),0xffffffff);
                if (DVar3 == 0) {
                    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x4c);
                }
                return 0x80004005;
            }
        }
        else {
            uVar4 = 0x8007000e;
        }
    }
    return uVar4;
}



void FUN_1407b01a0(undefined8 param_1,undefined8 param_2)

{
    char *local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined8 local_28;
    undefined *local_20;
    undefined8 local_18;
    undefined4 local_10;

    local_38 = "Asset Download";
    local_30 = 2;
    local_2c = 4;
    local_20 = &DAT_1407afbd0;
    local_10 = 1;
    local_28 = param_1;
    local_18 = param_2;
    FUN_1401a0eb0(&local_38,param_2,0);
    return;
}



void FUN_1407b01f0(wchar_t *param_1,uint param_2,longlong **param_3,undefined8 param_4)

{
    short *psVar1;
    wchar_t wVar2;
    uint uVar3;
    undefined2 uVar4;
    int iVar5;
    wchar_t *pwVar6;
    short *psVar7;
    longlong *plVar8;
    wchar_t *pwVar9;
    longlong *plVar10;
    longlong lVar11;
    wchar_t *pwVar12;
    wchar_t *pwVar13;
    longlong *plVar14;
    wchar_t *pwVar15;
    wchar_t *pwVar16;
    longlong lVar17;
    longlong lVar18;
    longlong lVar19;
    undefined auStack2232 [32];
    undefined8 local_898;
    wchar_t *local_890;
    uint local_888;
    wchar_t *local_880;
    undefined8 local_878;
    longlong **local_870;
    short local_868;
    short local_866 [263];
    wchar_t local_658 [256];
    wchar_t local_458 [256];
    wchar_t local_258 [264];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack2232;
    lVar19 = 0;
    local_888 = param_2;
    local_880 = param_1;
    local_878 = param_4;
    local_870 = param_3;
    if ((param_2 & 1) != 0) {
        lVar18 = 0x100;
        pwVar16 = local_458;
        lVar11 = 0;
        lVar17 = 0x100;
        if (param_1 != (wchar_t *)0x0) {
            iVar5 = FUN_1407dff20(*param_1);
            pwVar9 = pwVar16;
            if ((iVar5 == 0) || (param_1[1] != L':')) {
                if ((param_1[1] == L'\0') || (param_1[2] != L':')) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = 1;
                }
                iVar5 = FUN_1407dff20(uVar4);
                if (iVar5 != 0) goto LAB_1407b02aa;
            }
            else {
                LAB_1407b02aa:
                pwVar6 = (wchar_t *)0x0;
                if (*param_1 != L'\0') {
                    do {
                        pwVar12 = param_1;
                        if (lVar11 == 1) {
                            if (pwVar6 != (wchar_t *)0x0) {
                                *pwVar6 = L'\0';
                            }
                            goto LAB_1407b0411;
                        }
                        pwVar13 = pwVar6;
                        if (pwVar6 != (wchar_t *)0x0) {
                            pwVar13 = pwVar6 + 1;
                            lVar11 = lVar11 + -1;
                            *pwVar6 = *pwVar12;
                        }
                    } while ((*pwVar12 != L':') &&
                             (param_1 = pwVar12 + 1, pwVar6 = pwVar13, pwVar12[1] != L'\0'));
                    param_1 = pwVar12 + 1;
                    if (pwVar13 != (wchar_t *)0x0) {
                        *pwVar13 = L'\0';
                    }
                }
            }
            lVar11 = FUN_1407dd8d8(param_1,0x2f);
            if ((((lVar11 != 0) || (lVar11 = FUN_1407dd8d8(param_1,0x5c), lVar11 != 0)) && (lVar11 != -2))
                && (pwVar6 = (wchar_t *)0x0, param_1 != (wchar_t *)(lVar11 + 2))) {
                do {
                    if (lVar19 == 1) {
                        if (pwVar6 != (wchar_t *)0x0) {
                            *pwVar6 = L'\0';
                        }
                        goto LAB_1407b0411;
                    }
                    pwVar12 = pwVar6;
                    if (pwVar6 != (wchar_t *)0x0) {
                        pwVar12 = pwVar6 + 1;
                        lVar19 = lVar19 + -1;
                        *pwVar6 = *param_1;
                    }
                    param_1 = param_1 + 1;
                    pwVar6 = pwVar12;
                } while (param_1 != (wchar_t *)(lVar11 + 2));
                if (pwVar12 != (wchar_t *)0x0) {
                    *pwVar12 = L'\0';
                }
            }
            lVar19 = 0;
            pwVar6 = (wchar_t *)FUN_1407dd8d8(param_1,0x2e);
            if (pwVar6 == (wchar_t *)0x0) {
                wVar2 = *param_1;
                while (wVar2 != L'\0') {
                    lVar19 = lVar19 + 1;
                    wVar2 = param_1[lVar19];
                }
                pwVar6 = param_1 + lVar19;
            }
            if (param_1 == pwVar6) {
                LAB_1407b03b0:
                *pwVar16 = L'\0';
            }
            else {
                do {
                    if (lVar17 == 1) {
                        if (pwVar9 != (wchar_t *)0x0) {
                            LAB_1407b0411:
                            *pwVar9 = L'\0';
                        }
                        goto LAB_1407b041b;
                    }
                    pwVar16 = pwVar9;
                    if (pwVar9 != (wchar_t *)0x0) {
                        pwVar16 = pwVar9 + 1;
                        lVar17 = lVar17 + -1;
                        *pwVar9 = *param_1;
                    }
                    param_1 = param_1 + 1;
                    pwVar9 = pwVar16;
                } while (param_1 != pwVar6);
                if (pwVar16 != (wchar_t *)0x0) goto LAB_1407b03b0;
            }
            pwVar16 = local_658;
            do {
                pwVar9 = pwVar16;
                if ((lVar18 == -0x7ffffefe) ||
                    (wVar2 = *(wchar_t *)(((longlong)pwVar6 - (longlong)local_658) + (longlong)pwVar9),
                            wVar2 == L'\0')) {
                    if (lVar18 == 0) {
                        pwVar9 = pwVar9 + -1;
                    }
                    *pwVar9 = L'\0';
                    goto LAB_1407b041b;
                }
                *pwVar9 = wVar2;
                lVar18 = lVar18 + -1;
                pwVar16 = pwVar9 + 1;
            } while (lVar18 != 0);
            *pwVar9 = L'\0';
        }
        LAB_1407b041b:
        pwVar16 = local_658;
        pwVar9 = local_458;
        lVar19 = 0x104;
        pwVar6 = local_258;
        pwVar12 = L"RemoteCache";
        do {
            pwVar15 = pwVar12;
            pwVar13 = pwVar6;
            lVar11 = lVar19;
            pwVar6 = pwVar13;
            if (lVar11 == 1) goto LAB_1407b0500;
            pwVar6 = pwVar13 + 1;
            *pwVar13 = *pwVar15;
            lVar19 = lVar11 + -1;
            pwVar12 = pwVar15 + 1;
        } while (pwVar15[1] != L'\0');
        if ((*pwVar15 == L'/') || (*pwVar15 == L'\\')) {
            joined_r0x0001407b04a1:
            while (local_458[0] != L'\0') {
                if (lVar19 == 1) goto LAB_1407b0500;
                pwVar9 = pwVar9 + 1;
                *pwVar6 = local_458[0];
                pwVar6 = pwVar6 + 1;
                lVar19 = lVar19 + -1;
                local_458[0] = *pwVar9;
            }
            if (local_658[0] != L'\0') {
                if (local_658[0] != L'.') {
                    if (lVar19 == 1) goto LAB_1407b0500;
                    *pwVar6 = L'.';
                    pwVar6 = pwVar6 + 1;
                    lVar19 = lVar19 + -1;
                }
                do {
                    if (lVar19 == 1) break;
                    pwVar16 = pwVar16 + 1;
                    *pwVar6 = local_658[0];
                    pwVar6 = pwVar6 + 1;
                    local_658[0] = *pwVar16;
                    lVar19 = lVar19 + -1;
                } while (local_658[0] != L'\0');
            }
        }
        else if (lVar19 != 1) {
            *pwVar6 = L'\\';
            pwVar6 = pwVar13 + 2;
            lVar19 = lVar11 + -2;
            goto joined_r0x0001407b04a1;
        }
        LAB_1407b0500:
        *pwVar6 = L'\0';
        local_890 = local_258;
        local_898 = *(undefined8 *)(DAT_140c63788 + 0x1320);
        iVar5 = FUN_14001b370(&local_868,0x104,L"%s%s\\%s",DAT_140c63788 + 0x1094);
        if ((-1 < iVar5) && (local_868 != 0)) {
            psVar7 = &local_868;
            do {
                psVar1 = psVar7 + 1;
                psVar7 = psVar7 + 1;
            } while (*psVar1 != 0);
        }
        iVar5 = FUN_1401b58d0();
        param_3 = local_870;
        param_4 = local_878;
        if (iVar5 != 0) {
            local_898 = 0;
            iVar5 = FUN_1401b6de0();
            if (-1 < iVar5) goto LAB_1407b06e2;
        }
    }
    uVar3 = local_888;
    plVar14 = (longlong *)0x0;
    plVar8 = (longlong *)FUN_14018b280(0x2f0,0);
    plVar10 = plVar14;
    if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_LAB_140b78750;
        *(undefined4 *)(plVar8 + 1) = 1;
        plVar8[0xb] = 0;
        plVar8[10] = 0;
        plVar8[0xc] = 0;
        plVar8[0x1a] = 0;
        plVar8[0x1b] = 0;
        plVar8[2] = 0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        plVar8[6] = 0;
        plVar8[7] = 0;
        plVar8[8] = 0;
        plVar8[9] = 0;
        plVar10 = plVar8;
    }
    iVar5 = FUN_1407afa00(plVar10,local_880);
    if (-1 < iVar5) {
        plVar8 = (longlong *)FUN_14018b280(0x40);
        if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_LAB_140b78780;
            plVar8[1] = (longlong)plVar10;
            if (plVar10 != (longlong *)0x0) {
                (**(code **)*plVar10)(plVar10);
            }
            plVar8[4] = 0;
            plVar8[5] = 0;
            *(uint *)(plVar8 + 7) = uVar3;
            *(undefined4 *)((longlong)plVar8 + 0x3c) = 1;
            *(undefined4 *)(plVar8 + 2) = 0;
            plVar14 = plVar8;
        }
        local_898 = param_4;
        FUN_14019e010();
        (**(code **)(*plVar14 + 8))(plVar14);
        if (param_3 != (longlong **)0x0) {
            *param_3 = plVar10;
            (**(code **)*plVar10)(plVar10);
        }
    }
    if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10);
    }
    LAB_1407b06e2:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack2232);
    return;
}



undefined8 * FUN_1407b0710(undefined8 *param_1,ulonglong param_2)

{
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = 0;
    *param_1 = &PTR_LAB_140b787c0;
    if (param_1[1] != 0) {
        do {
            plVar1 = *(longlong **)(param_1[2] + uVar2 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))();
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    FUN_14018b900(param_1[2],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int FUN_1407b07a0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 3;
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x20))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



bool FUN_1407b07d0(longlong *param_1,ulonglong param_2)

{
    if ((ulonglong)param_1[1] <= param_2 >> 3) {
        return false;
    }
    return (*(byte *)(*param_1 + (param_2 >> 3)) & '\x01' << ((byte)param_2 & 7)) != 0;
}



void FUN_1407b0810(longlong *param_1,ulonglong param_2,int param_3)

{
    ulonglong uVar1;
    byte *pbVar2;
    byte bVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = param_1[1];
    uVar5 = param_2 >> 3;
    if ((uVar4 <= uVar5) && (uVar1 = uVar5 + 1, uVar4 < uVar1)) {
        FUN_140033620(param_1,uVar1);
        for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
            *(undefined *)(uVar4 + *param_1) = 0;
        }
    }
    bVar3 = '\x01' << ((byte)param_2 & 7);
    if (param_3 != 0) {
        pbVar2 = (byte *)(*param_1 + uVar5);
        *pbVar2 = *pbVar2 | bVar3;
        return;
    }
    pbVar2 = (byte *)(*param_1 + uVar5);
    *pbVar2 = *pbVar2 & ~bVar3;
    return;
}



float * FUN_1407b08c0(byte *param_1,float *param_2)

{
    undefined auVar1 [16];
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar5 = (float)(uint)*param_1 * 0.003921569 * 2.0 - 1.0;
    fVar6 = (float)(uint)param_1[1] * 0.003921569 * 2.0 - 1.0;
    fVar7 = 1.0 - ((float)((uint)fVar5 & 0x7fffffff) * 1.0 + (float)((uint)fVar6 & 0x7fffffff) * 1.0);
    if (fVar7 < 0.0) {
        fVar3 = (float)(uint)(0.0 <= fVar5) * 2.0 - 1.0;
        fVar4 = (float)(uint)(0.0 <= fVar6) * 2.0 - 1.0;
        fVar2 = (float)((uint)fVar5 & 0x7fffffff);
        fVar5 = fVar3 - (float)((uint)fVar6 & 0x7fffffff) * fVar3;
        fVar6 = fVar4 - fVar2 * fVar4;
    }
    auVar1 = CONCAT124(CONCAT48(fVar7 * 0.0,CONCAT44(fVar6 * fVar6,fVar5 * fVar5)) >> 0x20,
                       fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * 0.0) &
             (undefined  [16])0xffffffffffffffff;
    auVar1 = rsqrtss(auVar1,auVar1);
    fVar2 = SUB164(auVar1,0);
    *param_2 = fVar2 * fVar5;
    param_2[1] = fVar2 * fVar6;
    param_2[2] = fVar2 * fVar7;
    param_2[3] = fVar2 * 0.0;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_1407b0a40(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       undefined4 param_5)

{
    longlong lVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    undefined2 *puVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    short *psVar8;
    ulonglong uVar9;
    longlong lVar10;
    short *psVar11;
    short *psVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    short *psVar16;
    bool bVar17;
    ulonglong local_res8;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    ulonglong local_98;
    ulonglong local_90;
    undefined8 local_88;
    undefined8 uStack128;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    uVar6 = FUN_14018ff60(param_2,param_3,0);
    uVar13 = 0;
    if (uVar6 != 0xffffffffffffffff) {
        local_90 = 1;
        uVar15 = uVar6;
        do {
            if (uVar13 != 0) {
                lVar10 = *(longlong *)(param_2 + 8);
                local_98 = uVar13;
                lVar1 = lVar10 + uVar6 * 2;
                local_res8 = (*(longlong *)(param_2 + 0x10) - lVar10 >> 1) - uVar6;
                local_60 = (undefined2 *)0x0;
                local_50 = (undefined2 *)0x0;
                puVar7 = &local_res8;
                if (uVar13 <= local_res8) {
                    puVar7 = &local_98;
                }
                lVar10 = lVar10 + (*puVar7 + uVar6) * 2;
                uVar6 = (lVar10 - lVar1 >> 1) + 1;
                if (uVar6 < 0x7fffffffffffffff) {
                    local_60 = (undefined2 *)FUN_14018b280(uVar6 * 2,0);
                    local_50 = local_60 + uVar6;
                }
                puVar5 = local_60;
                local_58 = local_60;
                if (lVar1 != lVar10) {
                    do {
                        if (local_58 != (undefined2 *)0x0) {
                            *local_58 = *(undefined2 *)((lVar1 - (longlong)local_60) + (longlong)local_58);
                        }
                        local_58 = local_58 + 1;
                    } while ((lVar1 - (longlong)local_60) + (longlong)local_58 != lVar10);
                }
                if (local_58 != (undefined2 *)0x0) {
                    *local_58 = 0;
                }
                lVar1 = *(longlong *)(param_1 + 0x10);
                if (lVar1 == *(longlong *)(param_1 + 0x18)) {
                    FUN_1400f8cf0(param_1,lVar1,local_68);
                }
                else {
                    if (lVar1 != 0) {
                        *(undefined8 *)(lVar1 + 8) = 0;
                        *(undefined8 *)(lVar1 + 0x10) = 0;
                        *(undefined8 *)(lVar1 + 0x18) = 0;
                        FUN_14001c1b0(lVar1,local_60);
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
                }
                if (puVar5 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar5,0);
                }
            }
            lVar4 = local_res10;
            lVar10 = *(longlong *)(local_res10 + 8);
            lVar1 = lVar10 + uVar15 * 2;
            local_60 = (undefined2 *)0x0;
            local_50 = (undefined2 *)0x0;
            local_res8 = (*(longlong *)(local_res10 + 0x10) - lVar10 >> 1) - uVar15;
            puVar7 = &local_res8;
            if (local_res8 != 0) {
                puVar7 = &local_90;
            }
            lVar10 = lVar10 + (*puVar7 + uVar15) * 2;
            uVar6 = (lVar10 - lVar1 >> 1) + 1;
            if (uVar6 < 0x7fffffffffffffff) {
                local_60 = (undefined2 *)FUN_14018b280(uVar6 * 2,0);
                local_50 = local_60 + uVar6;
            }
            puVar5 = local_60;
            local_58 = local_60;
            if (lVar1 != lVar10) {
                do {
                    if (local_58 != (undefined2 *)0x0) {
                        *local_58 = *(undefined2 *)((lVar1 - (longlong)local_60) + (longlong)local_58);
                    }
                    local_58 = local_58 + 1;
                } while ((lVar1 - (longlong)local_60) + (longlong)local_58 != lVar10);
            }
            if (local_58 != (undefined2 *)0x0) {
                *local_58 = 0;
            }
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (lVar1 == *(longlong *)(param_1 + 0x18)) {
                FUN_1400f8cf0(param_1,lVar1,local_68);
            }
            else {
                if (lVar1 != 0) {
                    *(undefined8 *)(lVar1 + 8) = 0;
                    *(undefined8 *)(lVar1 + 0x10) = 0;
                    *(undefined8 *)(lVar1 + 0x18) = 0;
                    FUN_14001c1b0(lVar1,local_60);
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
            }
            if (puVar5 != (undefined2 *)0x0) {
                FUN_14018b900(puVar5,0);
            }
            psVar3 = *(short **)(lVar4 + 0x10);
            lVar1 = *(longlong *)(lVar4 + 8);
            lVar10 = *(longlong *)(local_res20 + 8);
            uVar14 = (longlong)psVar3 - lVar1 >> 1;
            if (uVar14 < uVar15 + 1) {
                LAB_1407b0d19:
                uVar6 = 0xffffffffffffffff;
            }
            else {
                uStack128 = lVar10 + (*(longlong *)(local_res20 + 0x10) - lVar10 >> 1) * 2;
                local_88._0_4_ = (undefined4)lVar10;
                local_88._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
                uStack128._4_4_ = (undefined4)((ulonglong)uStack128 >> 0x20);
                local_78 = (undefined4)local_88;
                uStack116 = local_88._4_4_;
                uStack112 = (undefined4)uStack128;
                uStack108 = uStack128._4_4_;
                local_88 = lVar10;
                psVar8 = (short *)FUN_1400f9810(lVar1 + (uVar15 + 1) * 2,psVar3,&local_78);
                if (psVar8 == psVar3) goto LAB_1407b0d19;
                uVar6 = (longlong)psVar8 - lVar1 >> 1;
            }
            local_res8 = *(ulonglong *)(local_res18 + 0x10);
            psVar8 = *(short **)(local_res18 + 8);
            if (uVar6 < uVar14) {
                psVar12 = (short *)(lVar1 + uVar6 * 2);
                psVar16 = psVar3;
                if (psVar12 != psVar3) {
                    do {
                        if (psVar8 != psVar8 + ((longlong)(local_res8 - (longlong)psVar8) >> 1)) {
                            psVar11 = psVar8;
                            do {
                                psVar16 = psVar12;
                                if (*psVar12 == *psVar11) goto LAB_1407b0d6e;
                                psVar11 = psVar11 + 1;
                            } while (psVar11 != psVar8 + ((longlong)(local_res8 - (longlong)psVar8) >> 1));
                        }
                        psVar12 = psVar12 + 1;
                        psVar16 = psVar3;
                    } while (psVar12 != psVar3);
                }
                LAB_1407b0d6e:
                if (psVar16 == psVar3) goto LAB_1407b0d7b;
                uVar15 = (longlong)psVar16 - lVar1 >> 1;
            }
            else {
                LAB_1407b0d7b:
                uVar15 = 0xffffffffffffffff;
            }
            uVar13 = uVar15 - uVar6;
            if (uVar6 < uVar14) {
                param_5 = CONCAT22(0x22,(undefined2)param_5);
                psVar8 = (short *)FUN_14002c8a0(lVar1 + uVar6 * 2,psVar3,param_5);
                if (psVar8 == psVar3) goto LAB_1407b0db8;
                uVar9 = (longlong)psVar8 - lVar1 >> 1;
            }
            else {
                LAB_1407b0db8:
                uVar9 = 0xffffffffffffffff;
            }
            if (uVar9 < uVar15) {
                LAB_1407b0dd0:
                if (uVar9 != 0xffffffffffffffff) {
                    if (uVar9 + 1 < uVar14) {
                        psVar8 = (short *)(lVar1 + (uVar9 + 1) * 2);
                        for (lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 3; psVar12 = psVar8, 0 < lVar10;
                             lVar10 = lVar10 + -1) {
                            if ((((*psVar8 == 0x22) || (psVar12 = psVar8 + 1, psVar8[1] == 0x22)) ||
                                 (psVar12 = psVar8 + 2, psVar8[2] == 0x22)) ||
                                (psVar12 = psVar8 + 3, psVar8[3] == 0x22)) goto LAB_1407b0e65;
                            psVar8 = psVar8 + 4;
                        }
                        lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 1;
                        if (lVar10 == 1) {
                            LAB_1407b0e5c:
                            psVar12 = psVar8;
                            if (*psVar8 != 0x22) {
                                LAB_1407b0e62:
                                psVar12 = psVar3;
                            }
                        }
                        else if (lVar10 == 2) {
                            LAB_1407b0e52:
                            psVar12 = psVar8;
                            if (*psVar8 != 0x22) {
                                psVar8 = psVar8 + 1;
                                goto LAB_1407b0e5c;
                            }
                        }
                        else {
                            if (lVar10 != 3) goto LAB_1407b0e62;
                            if (*psVar8 != 0x22) {
                                psVar8 = psVar8 + 1;
                                goto LAB_1407b0e52;
                            }
                        }
                        LAB_1407b0e65:
                        if (psVar12 != psVar3) {
                            uVar13 = (longlong)psVar12 - lVar1 >> 1;
                            goto joined_r0x0001407b0e79;
                        }
                    }
                    uVar13 = 0xffffffffffffffff;
                    joined_r0x0001407b0e79:
                    do {
                        if ((uVar13 == 0) || (uVar13 == 0xffffffffffffffff)) goto LAB_1407b0f54;
                        psVar8 = (short *)(lVar1 + -2 + uVar13 * 2);
                        sVar2 = *(short *)(lVar1 + -2 + uVar13 * 2);
                        bVar17 = false;
                        while (sVar2 == 0x5c) {
                            psVar8 = psVar8 + -1;
                            bVar17 = (bool)(bVar17 ^ 1);
                            sVar2 = *psVar8;
                        }
                        if (!bVar17) goto LAB_1407b0f54;
                        if (uVar13 + 1 < uVar14) {
                            psVar8 = (short *)(lVar1 + (uVar13 + 1) * 2);
                            for (lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 3; psVar12 = psVar8, 0 < lVar10;
                                 lVar10 = lVar10 + -1) {
                                if (((*psVar8 == 0x22) || (psVar12 = psVar8 + 1, psVar8[1] == 0x22)) ||
                                    ((psVar12 = psVar8 + 2, psVar8[2] == 0x22 ||
                                                            (psVar12 = psVar8 + 3, psVar8[3] == 0x22)))) goto LAB_1407b0f3a;
                                psVar8 = psVar8 + 4;
                            }
                            lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 1;
                            if (lVar10 == 1) {
                                LAB_1407b0f31:
                                psVar12 = psVar8;
                                if (*psVar8 != 0x22) {
                                    LAB_1407b0f37:
                                    psVar12 = psVar3;
                                }
                            }
                            else if (lVar10 == 2) {
                                LAB_1407b0f27:
                                psVar12 = psVar8;
                                if (*psVar8 != 0x22) {
                                    psVar8 = psVar8 + 1;
                                    goto LAB_1407b0f31;
                                }
                            }
                            else {
                                if (lVar10 != 3) goto LAB_1407b0f37;
                                if (*psVar8 != 0x22) {
                                    psVar8 = psVar8 + 1;
                                    goto LAB_1407b0f27;
                                }
                            }
                            LAB_1407b0f3a:
                            if (psVar12 != psVar3) {
                                uVar13 = (longlong)psVar12 - lVar1 >> 1;
                                goto joined_r0x0001407b0e79;
                            }
                        }
                        uVar13 = 0xffffffffffffffff;
                    } while( true );
                }
            }
            LAB_1407b1124:
            param_2 = local_res10;
        } while (uVar15 != 0xffffffffffffffff);
    }
    return param_1;
    LAB_1407b0f54:
    if (uVar13 < uVar15) {
        if (uVar13 + 1 < uVar14) {
            psVar8 = (short *)(lVar1 + (uVar13 + 1) * 2);
            for (lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 3; psVar12 = psVar8, 0 < lVar10;
                 lVar10 = lVar10 + -1) {
                if (((*psVar8 == 0x22) || (psVar12 = psVar8 + 1, psVar8[1] == 0x22)) ||
                    ((psVar12 = psVar8 + 2, psVar8[2] == 0x22 || (psVar12 = psVar8 + 3, psVar8[3] == 0x22))))
                    goto LAB_1407b0fe5;
                psVar8 = psVar8 + 4;
            }
            lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 1;
            if (lVar10 == 1) {
                LAB_1407b0fdc:
                psVar12 = psVar8;
                if (*psVar8 != 0x22) {
                    LAB_1407b0fe2:
                    psVar12 = psVar3;
                }
            }
            else if (lVar10 == 2) {
                LAB_1407b0fd2:
                psVar12 = psVar8;
                if (*psVar8 != 0x22) {
                    psVar8 = psVar8 + 1;
                    goto LAB_1407b0fdc;
                }
            }
            else {
                if (lVar10 != 3) goto LAB_1407b0fe2;
                if (*psVar8 != 0x22) {
                    psVar8 = psVar8 + 1;
                    goto LAB_1407b0fd2;
                }
            }
            LAB_1407b0fe5:
            if (psVar12 != psVar3) {
                uVar9 = (longlong)psVar12 - lVar1 >> 1;
                bVar17 = uVar9 < uVar15;
                uVar13 = (uVar13 - uVar6) + 1;
                goto LAB_1407b111c;
            }
        }
        uVar9 = 0xffffffffffffffff;
        bVar17 = false;
        uVar13 = (uVar13 - uVar6) + 1;
        goto LAB_1407b111c;
    }
    psVar8 = *(short **)(local_res18 + 8);
    uVar13 = uVar13 + 1;
    if (uVar13 < uVar14) {
        psVar12 = (short *)(lVar1 + uVar13 * 2);
        psVar16 = psVar3;
        if (psVar12 != psVar3) {
            do {
                if (psVar8 != psVar8 + ((longlong)(local_res8 - (longlong)psVar8) >> 1)) {
                    psVar11 = psVar8;
                    do {
                        psVar16 = psVar12;
                        if (*psVar12 == *psVar11) goto LAB_1407b106a;
                        psVar11 = psVar11 + 1;
                    } while (psVar11 != psVar8 + ((longlong)(local_res8 - (longlong)psVar8) >> 1));
                }
                psVar12 = psVar12 + 1;
                psVar16 = psVar3;
            } while (psVar12 != psVar3);
        }
        LAB_1407b106a:
        if (psVar16 == psVar3) goto LAB_1407b1077;
        uVar15 = (longlong)psVar16 - lVar1 >> 1;
    }
    else {
        LAB_1407b1077:
        uVar15 = 0xffffffffffffffff;
    }
    if (uVar13 < uVar14) {
        psVar8 = (short *)(lVar1 + uVar13 * 2);
        for (lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 3; psVar12 = psVar8, 0 < lVar10;
             lVar10 = lVar10 + -1) {
            if ((((*psVar8 == 0x22) || (psVar12 = psVar8 + 1, psVar8[1] == 0x22)) ||
                 (psVar12 = psVar8 + 2, psVar8[2] == 0x22)) || (psVar12 = psVar8 + 3, psVar8[3] == 0x22))
                goto LAB_1407b10fc;
            psVar8 = psVar8 + 4;
        }
        lVar10 = (longlong)psVar3 - (longlong)psVar8 >> 1;
        if (lVar10 == 1) {
            LAB_1407b10f3:
            psVar12 = psVar8;
            if (*psVar8 != 0x22) {
                LAB_1407b10f9:
                psVar12 = psVar3;
            }
        }
        else if (lVar10 == 2) {
            LAB_1407b10e9:
            psVar12 = psVar8;
            if (*psVar8 != 0x22) {
                psVar8 = psVar8 + 1;
                goto LAB_1407b10f3;
            }
        }
        else {
            if (lVar10 != 3) goto LAB_1407b10f9;
            if (*psVar8 != 0x22) {
                psVar8 = psVar8 + 1;
                goto LAB_1407b10e9;
            }
        }
        LAB_1407b10fc:
        if (psVar12 == psVar3) goto LAB_1407b1109;
        uVar9 = (longlong)psVar12 - lVar1 >> 1;
    }
    else {
        LAB_1407b1109:
        uVar9 = 0xffffffffffffffff;
    }
    bVar17 = uVar9 < uVar15;
    uVar13 = uVar15 - uVar6;
    LAB_1407b111c:
    if (!bVar17) goto LAB_1407b1124;
    goto LAB_1407b0dd0;
}



int FUN_1407b1160(longlong *param_1,longlong *param_2,longlong *param_3,longlong **param_4)

{
    ushort uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong *local_58;
    longlong *local_50;
    longlong *local_48;
    longlong local_40;
    longlong local_38;
    longlong local_30;
    longlong local_28 [2];

    plVar3 = (longlong *)FUN_14018b280();
    if (plVar3 == (longlong *)0x0) {
        return -0x7ff8fff2;
    }
    *plVar3 = (longlong)&PTR_LAB_140b790b0;
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    lVar4 = *param_2;
    lVar8 = *param_1;
    *param_3 = lVar4;
    if (lVar8 != lVar4) {
        do {
            uVar5 = 0;
            do {
                uVar5 = uVar5 + 1;
            } while ((&DAT_1409fabfc)[uVar5] != 0);
            lVar4 = *(longlong *)(lVar8 + 8);
            uVar9 = *(longlong *)(lVar8 + 0x10) - lVar4 >> 1;
            if (uVar9 == uVar5) {
                uVar7 = 0;
                if (uVar5 != 0) {
                    do {
                        uVar1 = *(ushort *)(lVar4 + uVar7 * 2);
                        if (uVar1 != (&DAT_1409fabfc)[uVar7]) {
                            iVar2 = 1;
                            if (uVar1 < (ushort)(&DAT_1409fabfc)[uVar7]) {
                                iVar2 = -1;
                            }
                            if (iVar2 != 0) goto LAB_1407b12a8;
                            break;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < uVar5);
                }
                local_40 = lVar8 + 0x20;
                local_50 = (longlong *)0x0;
                iVar2 = FUN_1407b1670(&local_40,param_2,&local_38,&local_50);
                plVar6 = local_50;
                lVar8 = local_38;
                if (iVar2 < 0) {
                    LAB_1407b15f6:
                    if (plVar6 != (longlong *)0x0) {
                        (**(code **)(*plVar6 + 8))();
                    }
                    goto LAB_1407b15c5;
                }
                LAB_1407b1568:
                iVar2 = (**(code **)(*plVar3 + 0x1b0))();
                if (iVar2 < 0) {
                    if (plVar6 != (longlong *)0x0) {
                        (**(code **)(*plVar6 + 8))(plVar6);
                    }
                    goto LAB_1407b15c5;
                }
                if (plVar6 != (longlong *)0x0) {
                    lVar4 = *plVar6;
                    LAB_1407b1589:
                    (**(code **)(lVar4 + 8))();
                }
            }
            else {
                LAB_1407b12a8:
                uVar5 = 0;
                do {
                    uVar5 = uVar5 + 1;
                } while ((&DAT_1409fac14)[uVar5] != 0);
                if (uVar9 == uVar5) {
                    uVar7 = 0;
                    if (uVar5 != 0) {
                        do {
                            uVar1 = *(ushort *)(lVar4 + uVar7 * 2);
                            if (uVar1 != (&DAT_1409fac14)[uVar7]) {
                                iVar2 = 1;
                                if (uVar1 < (ushort)(&DAT_1409fac14)[uVar7]) {
                                    iVar2 = -1;
                                }
                                if (iVar2 != 0) goto LAB_1407b1390;
                                break;
                            }
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar5);
                    }
                    local_30 = lVar8 + 0x20;
                    local_58 = (longlong *)0x0;
                    iVar2 = FUN_1407b1160(&local_30,param_2,local_28,&local_58);
                    lVar8 = local_28[0];
                    if (iVar2 < 0) {
                        if (local_58 != (longlong *)0x0) {
                            (**(code **)(*local_58 + 8))();
                        }
                        goto LAB_1407b15c5;
                    }
                    iVar2 = (**(code **)(*plVar3 + 0x1b0))(plVar3);
                    plVar6 = local_58;
                    if (iVar2 < 0) goto LAB_1407b15f6;
                    if (local_58 != (longlong *)0x0) {
                        lVar4 = *local_58;
                        goto LAB_1407b1589;
                    }
                }
                else {
                    LAB_1407b1390:
                    uVar5 = 0;
                    do {
                        uVar5 = uVar5 + 1;
                    } while ((&DAT_1409fac2c)[uVar5] != 0);
                    if (uVar9 == uVar5) {
                        uVar7 = 0;
                        if (uVar5 != 0) {
                            while( true ) {
                                uVar1 = *(ushort *)(lVar4 + uVar7 * 2);
                                if (uVar1 != (&DAT_1409fac2c)[uVar7]) break;
                                uVar7 = uVar7 + 1;
                                if (uVar5 <= uVar7) goto LAB_1407b1615;
                            }
                            iVar2 = 1;
                            if (uVar1 < (ushort)(&DAT_1409fac2c)[uVar7]) {
                                iVar2 = -1;
                            }
                            if (iVar2 != 0) goto LAB_1407b1403;
                        }
                        LAB_1407b1615:
                        *param_3 = lVar8;
                        break;
                    }
                    LAB_1407b1403:
                    uVar5 = 0;
                    do {
                        uVar5 = uVar5 + 1;
                    } while ((&DAT_1409facbc)[uVar5] != 0);
                    if (uVar9 == uVar5) {
                        uVar7 = 0;
                        if (uVar5 != 0) {
                            do {
                                uVar1 = *(ushort *)(lVar4 + uVar7 * 2);
                                if (uVar1 != (&DAT_1409facbc)[uVar7]) {
                                    iVar2 = 1;
                                    if (uVar1 < (ushort)(&DAT_1409facbc)[uVar7]) {
                                        iVar2 = -1;
                                    }
                                    if (iVar2 != 0) goto LAB_1407b1472;
                                    break;
                                }
                                uVar7 = uVar7 + 1;
                            } while (uVar7 < uVar5);
                        }
                    }
                    else {
                        LAB_1407b1472:
                        uVar5 = 0;
                        do {
                            uVar5 = uVar5 + 1;
                        } while ((&DAT_1409facfc)[uVar5] != 0);
                        if (uVar9 == uVar5) {
                            uVar7 = 0;
                            if (uVar5 != 0) {
                                do {
                                    uVar1 = *(ushort *)(lVar4 + uVar7 * 2);
                                    if (uVar1 != (&DAT_1409facfc)[uVar7]) {
                                        iVar2 = 1;
                                        if (uVar1 < (ushort)(&DAT_1409facfc)[uVar7]) {
                                            iVar2 = -1;
                                        }
                                        if (iVar2 != 0) goto LAB_1407b14e2;
                                        break;
                                    }
                                    uVar7 = uVar7 + 1;
                                } while (uVar7 < uVar5);
                            }
                        }
                        else {
                            LAB_1407b14e2:
                            uVar5 = 0;
                            do {
                                uVar5 = uVar5 + 1;
                            } while ((&DAT_1409fad3c)[uVar5] != 0);
                            if (uVar9 != uVar5) {
                                LAB_1407b1543:
                                local_48 = (longlong *)0x0;
                                iVar2 = FUN_1407b1d40(lVar4,&local_48);
                                plVar6 = local_48;
                                if (-1 < iVar2) goto LAB_1407b1568;
                                if (local_48 != (longlong *)0x0) {
                                    (**(code **)(*local_48 + 8))();
                                }
                                goto LAB_1407b15c5;
                            }
                            uVar9 = 0;
                            if (uVar5 != 0) {
                                do {
                                    uVar1 = *(ushort *)(lVar4 + uVar9 * 2);
                                    if (uVar1 != (&DAT_1409fad3c)[uVar9]) {
                                        iVar2 = 1;
                                        if (uVar1 < (ushort)(&DAT_1409fad3c)[uVar9]) {
                                            iVar2 = -1;
                                        }
                                        if (iVar2 != 0) goto LAB_1407b1543;
                                        break;
                                    }
                                    uVar9 = uVar9 + 1;
                                } while (uVar9 < uVar5);
                            }
                        }
                    }
                }
            }
            lVar8 = lVar8 + 0x20;
        } while (lVar8 != *param_2);
    }
    if (*param_3 != *param_2) {
        *param_4 = plVar3;
        return 0;
    }
    iVar2 = -0x7fffbffb;
    LAB_1407b15c5:
    (**(code **)(*plVar3 + 8))(plVar3);
    return iVar2;
}



int FUN_1407b1670(longlong *param_1,longlong *param_2,longlong *param_3,longlong **param_4)

{
    ushort uVar1;
    int iVar2;
    longlong *plVar3;
    undefined *puVar4;
    short *psVar5;
    short *psVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    bool bVar11;
    bool bVar12;
    undefined *local_88;
    longlong *local_80;
    longlong *local_78;
    longlong *local_70;
    longlong *local_68;
    short *local_60;
    short *local_58;
    undefined local_50 [8];
    short *local_48;
    short *local_40;
    longlong *local_38;
    undefined *local_30;
    undefined *local_28 [2];

    plVar3 = (longlong *)FUN_14018b280();
    if (plVar3 == (longlong *)0x0) {
        return -0x7ff8fff2;
    }
    *plVar3 = (longlong)&PTR_LAB_140b79270;
    *(undefined4 *)(plVar3 + 1) = 1;
    local_70 = plVar3;
    puVar4 = (undefined *)FUN_14018b280();
    plVar3[3] = (longlong)puVar4;
    plVar3[4] = 0;
    *puVar4 = 0;
    *(undefined8 *)(plVar3[3] + 8) = 0;
    *(longlong *)(plVar3[3] + 0x10) = plVar3[3];
    *(longlong *)(plVar3[3] + 0x18) = plVar3[3];
    psVar5 = (short *)FUN_14018b280(0x10);
    bVar12 = false;
    local_38 = (longlong *)(psVar5 + 8);
    if (psVar5 != (short *)0x0) {
        *psVar5 = 0;
    }
    puVar4 = (undefined *)*param_2;
    *param_3 = (longlong)puVar4;
    local_88 = (undefined *)*param_1;
    bVar11 = local_88 == puVar4;
    local_60 = psVar5;
    local_48 = psVar5;
    local_40 = psVar5;
    do {
        uVar8 = 0;
        uVar7 = uVar8;
        if (bVar11) {
            LAB_1407b1ce5:
            iVar2 = 0;
            if (*param_3 == *param_2) {
                iVar2 = -0x7fffbffb;
                LAB_1407b1cf2:
                (**(code **)(*local_70 + 8))();
            }
            else {
                *param_4 = local_70;
            }
            LAB_1407b1d0c:
            if (psVar5 != (short *)0x0) {
                FUN_14018b900(psVar5,0);
            }
            return iVar2;
        }
        do {
            uVar7 = uVar7 + 1;
        } while ((&DAT_1409fad94)[uVar7] != 0);
        lVar9 = *(longlong *)(local_88 + 8);
        uVar10 = *(longlong *)(local_88 + 0x10) - lVar9 >> 1;
        if (uVar10 == uVar7) {
            if (uVar7 != 0) {
                do {
                    uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                    if (uVar1 != (&DAT_1409fad94)[uVar8]) {
                        iVar2 = 1;
                        if (uVar1 < (ushort)(&DAT_1409fad94)[uVar8]) {
                            iVar2 = -1;
                        }
                        if (iVar2 != 0) goto LAB_1407b1842;
                        break;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7);
            }
            if (bVar12) {
                local_68 = (longlong *)0x0;
                local_88 = local_88 + 0x20;
                iVar2 = FUN_1407b1670(&local_88,param_2,local_28,&local_68);
                plVar3 = local_68;
                if (-1 < iVar2) {
                    local_88 = local_28[0];
                    iVar2 = (**(code **)(*local_70 + 200))(local_70,psVar5);
                    plVar3 = local_68;
                    LAB_1407b181b:
                    if (-1 < iVar2) {
                        bVar12 = false;
                        if (plVar3 != (longlong *)0x0) {
                            (**(code **)(*plVar3 + 8))();
                        }
                        goto LAB_1407b1c47;
                    }
                }
                if (plVar3 == (longlong *)0x0) goto LAB_1407b1cf2;
                (**(code **)(*plVar3 + 8))();
                (**(code **)(*local_70 + 8))();
            }
            else {
                LAB_1407b1a05:
                iVar2 = -0x7fff0001;
                (**(code **)(*local_70 + 8))();
            }
            goto LAB_1407b1d0c;
        }
        LAB_1407b1842:
        uVar8 = 0;
        uVar7 = uVar8;
        do {
            uVar7 = uVar7 + 1;
        } while ((&DAT_1409fae1c)[uVar7] != 0);
        if (uVar10 == uVar7) {
            if (uVar7 != 0) {
                while( true ) {
                    uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                    if (uVar1 != (&DAT_1409fae1c)[uVar8]) break;
                    uVar8 = uVar8 + 1;
                    if (uVar7 <= uVar8) goto LAB_1407b1c80;
                }
                iVar2 = 1;
                if (uVar1 < (ushort)(&DAT_1409fae1c)[uVar8]) {
                    iVar2 = -1;
                }
                if (iVar2 != 0) goto LAB_1407b18b7;
            }
            LAB_1407b1c80:
            *param_3 = (longlong)local_88;
            goto LAB_1407b1ce5;
        }
        LAB_1407b18b7:
        uVar8 = 0;
        uVar7 = uVar8;
        do {
            uVar7 = uVar7 + 1;
        } while ((&DAT_1409fae3c)[uVar7] != 0);
        if (uVar10 == uVar7) {
            if (uVar7 != 0) {
                do {
                    uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                    if (uVar1 != (&DAT_1409fae3c)[uVar8]) {
                        iVar2 = 1;
                        if (uVar1 < (ushort)(&DAT_1409fae3c)[uVar8]) {
                            iVar2 = -1;
                        }
                        if (iVar2 != 0) goto LAB_1407b198c;
                        break;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7);
            }
            if (!bVar12) goto LAB_1407b1a05;
            local_78 = (longlong *)0x0;
            local_58 = (short *)(local_88 + 0x20);
            iVar2 = FUN_1407b1160(&local_58,param_2,&local_30,&local_78);
            if (-1 < iVar2) {
                local_88 = local_30;
                iVar2 = (**(code **)(*local_70 + 200))(local_70,psVar5);
                plVar3 = local_78;
                goto LAB_1407b181b;
            }
            if (local_78 == (longlong *)0x0) goto LAB_1407b1cf2;
            (**(code **)(*local_78 + 8))();
            (**(code **)(*local_70 + 8))();
            goto LAB_1407b1d0c;
        }
        LAB_1407b198c:
        uVar8 = 0;
        uVar7 = uVar8;
        do {
            uVar7 = uVar7 + 1;
        } while ((&DAT_1409fae7c)[uVar7] != 0);
        if (uVar10 == uVar7) {
            if (uVar7 != 0) {
                do {
                    uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                    if (uVar1 != (&DAT_1409fae7c)[uVar8]) {
                        iVar2 = 1;
                        if (uVar1 < (ushort)(&DAT_1409fae7c)[uVar8]) {
                            iVar2 = -1;
                        }
                        if (iVar2 != 0) goto LAB_1407b1a1c;
                        break;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7);
            }
            if (!bVar12) goto LAB_1407b1a05;
        }
        else {
            LAB_1407b1a1c:
            uVar8 = 0;
            uVar7 = uVar8;
            do {
                uVar7 = uVar7 + 1;
            } while ((&DAT_1409fae9c)[uVar7] != 0);
            if (uVar10 == uVar7) {
                if (uVar7 != 0) {
                    do {
                        uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                        if (uVar1 != (&DAT_1409fae9c)[uVar8]) {
                            iVar2 = 1;
                            if (uVar1 < (ushort)(&DAT_1409fae9c)[uVar8]) {
                                iVar2 = -1;
                            }
                            if (iVar2 != 0) goto LAB_1407b1a96;
                            break;
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar7);
                }
            }
            else {
                LAB_1407b1a96:
                uVar8 = 0;
                uVar7 = uVar8;
                do {
                    uVar7 = uVar7 + 1;
                } while ((&DAT_1409faecc)[uVar7] != 0);
                if (uVar10 == uVar7) {
                    if (uVar7 != 0) {
                        do {
                            uVar1 = *(ushort *)(lVar9 + uVar8 * 2);
                            if (uVar1 != (&DAT_1409faecc)[uVar8]) {
                                iVar2 = 1;
                                if (uVar1 < (ushort)(&DAT_1409faecc)[uVar8]) {
                                    iVar2 = -1;
                                }
                                if (iVar2 != 0) goto LAB_1407b1b06;
                                break;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < uVar7);
                    }
                }
                else {
                    LAB_1407b1b06:
                    if (bVar12) {
                        local_80 = (longlong *)0x0;
                        iVar2 = FUN_1407b1d40(lVar9,&local_80);
                        plVar3 = local_80;
                        if (iVar2 < 0) {
                            if (local_80 == (longlong *)0x0) goto LAB_1407b1cf2;
                            (**(code **)(*local_80 + 8))();
                            (**(code **)(*local_70 + 8))();
                            goto LAB_1407b1d0c;
                        }
                        iVar2 = (**(code **)(*local_70 + 200))(local_70,psVar5);
                        if (iVar2 < 0) {
                            if (plVar3 == (longlong *)0x0) goto LAB_1407b1cf2;
                            (**(code **)(*plVar3 + 8))(plVar3);
                            (**(code **)(*local_70 + 8))();
                            goto LAB_1407b1d0c;
                        }
                        bVar12 = false;
                        if (plVar3 != (longlong *)0x0) {
                            (**(code **)(*plVar3 + 8))(plVar3);
                        }
                    }
                    else {
                        if (local_88 != local_50) {
                            FUN_14001c480(local_50,lVar9);
                            local_60 = local_40;
                            psVar5 = local_48;
                        }
                        psVar6 = psVar5;
                        if ((*psVar5 == 0x22) &&
                            (lVar9 = ((longlong)local_60 - (longlong)psVar5 >> 1) + -1, psVar5[lVar9] == 0x22)) {
                            psVar6 = (short *)0x0;
                            local_58 = psVar5 + 1;
                            local_80 = (longlong *)0x0;
                            lVar9 = (longlong)psVar5 + (lVar9 * 2 - (longlong)local_58) >> 1;
                            uVar7 = lVar9 + 1;
                            if (uVar7 < 0x7fffffffffffffff) {
                                psVar6 = (short *)FUN_14018b280(uVar7 * 2,0);
                                local_80 = (longlong *)(psVar6 + uVar7);
                            }
                            FUN_1407db590(psVar6,local_58);
                            psVar5 = local_48;
                            local_60 = psVar6 + lVar9;
                            if (local_60 != (short *)0x0) {
                                *local_60 = 0;
                            }
                            local_38 = local_80;
                            bVar12 = local_48 != (short *)0x0;
                            local_48 = psVar6;
                            local_40 = local_60;
                            if (bVar12) {
                                FUN_14018b900(psVar5,0);
                            }
                        }
                        bVar12 = true;
                        psVar5 = psVar6;
                    }
                }
            }
        }
        LAB_1407b1c47:
        local_88 = local_88 + 0x20;
        bVar11 = local_88 == (undefined *)*param_2;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1407b1d40(short *param_1,undefined8 param_2)

{
    short *psVar1;
    longlong lVar2;
    longlong lVar3;
    short sVar4;
    double dVar5;
    uint uVar6;
    int iVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined2 *puVar10;
    ulonglong *puVar11;
    undefined *puVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    undefined8 uVar16;
    undefined4 uVar17;
    ulonglong uVar18;
    longlong lVar19;
    longlong lVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    ulonglong uVar23;
    longlong lVar24;
    undefined2 *puVar25;
    ulonglong local_res8;
    undefined8 local_res10;
    ulonglong local_res18;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;

    uVar9 = 0;
    sVar4 = *param_1;
    uVar8 = uVar9;
    if (sVar4 == 0) {
        return 0x80070057;
    }
    do {
        uVar23 = uVar8;
        uVar8 = uVar23 + 1;
    } while (param_1[uVar8] != 0);
    if (uVar8 == 0) {
        return 0x80070057;
    }
    uVar18 = 1;
    uVar21 = 1;
    local_res10 = param_2;
    if ((sVar4 != 0x22) || (param_1[uVar23] != 0x22)) {
        if (((sVar4 - 0x2bU & 0xfffd) != 0) && (9 < (ushort)(sVar4 - 0x30U))) {
            LAB_1407b20dd:
            iVar7 = FUN_14018e2c0(param_1,L"true");
            if (iVar7 == 0) {
                uVar17 = 1;
            }
            else {
                iVar7 = FUN_14018e2c0(param_1,L"false");
                if (iVar7 != 0) {
                    uVar8 = FUN_1407b21f0(param_1,param_2);
                    return uVar8;
                }
                uVar17 = 0;
            }
            uVar8 = FUN_1407b2310(uVar17,param_2);
            return uVar8;
        }
        uVar22 = 1;
        uVar23 = uVar9;
        uVar15 = FUN_14018e200();
        uVar8 = uVar9;
        if (uVar18 < uVar15) {
            do {
                sVar4 = param_1[uVar22];
                uVar21 = uVar21 & 0xffffffff;
                if (9 < (ushort)(sVar4 - 0x30U)) {
                    uVar21 = uVar9;
                }
                if (sVar4 == 0x2e) {
                    iVar7 = (int)uVar23;
                    uVar23 = 1;
                    LAB_1407b20a8:
                    uVar18 = uVar18 & 0xffffffff;
                    if (iVar7 != 0) {
                        uVar18 = uVar9;
                    }
                }
                else if ((sVar4 - 0x45U & 0xffdf) == 0) {
                    iVar7 = (int)uVar8;
                    uVar8 = 1;
                    goto LAB_1407b20a8;
                }
                if (((int)uVar21 == 0) && ((int)uVar18 == 0)) goto LAB_1407b20dd;
                uVar22 = uVar22 + 1;
            } while (uVar22 < uVar15);
            if ((int)uVar21 == 0) {
                if ((int)uVar18 != 0) {
                    dVar5 = (double)FUN_1407dfe80(param_1,0);
                    uVar8 = FUN_1407b2460((float)dVar5);
                    return uVar8;
                }
                goto LAB_1407b20dd;
            }
        }
        uVar16 = FUN_14018e8f0(param_1);
        uVar8 = FUN_1407b2380(uVar16,param_2);
        return uVar8;
    }
    local_50 = 0;
    lVar19 = (longlong)((longlong)param_1 + ((uVar8 * 2 + -2) - (longlong)(param_1 + 1))) >> 1;
    local_40 = 0;
    uVar8 = lVar19 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar24 = uVar8 * 2;
        local_50 = FUN_14018b280(lVar24,0);
        local_40 = local_50 + lVar24;
    }
    lVar24 = local_50;
    lVar19 = lVar19 * 2;
    FUN_1407db590(local_50,param_1 + 1,lVar19);
    puVar25 = (undefined2 *)(lVar24 + lVar19);
    if (puVar25 != (undefined2 *)0x0) {
        *puVar25 = 0;
    }
    do {
        uVar9 = uVar9 + 1;
    } while (*(short *)(&DAT_140b53990 + uVar9 * 2) != 0);
    uVar8 = (longlong)puVar25 - lVar24 >> 1;
    local_48 = puVar25;
    if (uVar9 <= uVar8) {
        puVar10 = (undefined2 *)
                FUN_14010a450(lVar24,puVar25,&DAT_140b53990,&DAT_140b53990 + uVar9 * 2,
                              (undefined)local_res8);
        if (puVar10 != puVar25) {
            lVar19 = (longlong)puVar10 - lVar24 >> 1;
            goto LAB_1407b1e6c;
        }
    }
    lVar19 = -1;
    LAB_1407b1e6c:
    if (lVar19 != -1) {
        local_res18 = 2;
        do {
            lVar13 = 0;
            local_res8 = uVar8 - lVar19;
            puVar11 = &local_res8;
            if (1 < uVar8 - lVar19) {
                puVar11 = &local_res18;
            }
            puVar12 = &DAT_1409faee4;
            do {
                psVar1 = (short *)(puVar12 + 2);
                puVar12 = puVar12 + 2;
            } while (*psVar1 != 0);
            do {
                psVar1 = &DAT_1409faee6 + lVar13;
                lVar13 = lVar13 + 1;
            } while (*psVar1 != 0);
            lVar2 = lVar24 + lVar19 * 2;
            lVar3 = lVar24 + (*puVar11 + lVar19) * 2;
            lVar20 = lVar13 * 2 >> 1;
            lVar14 = lVar3 - lVar2 >> 1;
            if (lVar14 < lVar20) {
                lVar14 = lVar14 * 2;
                FUN_1407db590(lVar2,&DAT_1409faee4,(lVar14 >> 1) * 2);
                FUN_1401905c0(local_58,lVar3,&DAT_1409faee4 + lVar14,&DAT_1409faee4 + lVar13 * 2);
                lVar24 = local_50;
                puVar25 = local_48;
            }
            else {
                lVar20 = lVar20 * 2;
                FUN_1407db590(lVar2,&DAT_1409faee4,lVar20);
                lVar20 = lVar20 + lVar2;
                if (lVar20 != lVar3) {
                    FUN_1407db590(lVar20,lVar3,((longlong)puVar25 - lVar3 >> 1) * 2 + 2);
                    local_48 = puVar25 + -(lVar3 - lVar20 >> 1);
                    puVar25 = local_48;
                }
            }
            lVar13 = 0;
            do {
                lVar14 = lVar13;
                lVar13 = lVar14 + 1;
            } while ((&DAT_140b53a2e)[lVar14] != 0);
            uVar8 = (longlong)puVar25 - lVar24 >> 1;
            if ((uVar8 < (ulonglong)(lVar14 + 2 + lVar19)) ||
                (puVar10 = (undefined2 *)
                        FUN_14010a450(lVar24 + (lVar19 + 1) * 2,puVar25,&DAT_140b53a2c,
                                      &DAT_140b53a2c + (lVar14 + 1) * 2,(undefined)local_res8),
                        puVar10 == puVar25)) {
                lVar19 = -1;
            }
            else {
                lVar19 = (longlong)puVar10 - lVar24 >> 1;
            }
        } while (lVar19 != -1);
    }
    uVar6 = FUN_1407b21f0(lVar24,local_res10);
    if (lVar24 != 0) {
        FUN_14018b900(lVar24,0);
    }
    return (ulonglong)uVar6;
}



undefined8 FUN_1407b2160(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;

    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b79270;
        *(undefined4 *)(puVar1 + 1) = 1;
        puVar2 = (undefined *)FUN_14018b280();
        puVar1[3] = puVar2;
        puVar1[4] = 0;
        *puVar2 = 0;
        *(undefined8 *)(puVar1[3] + 8) = 0;
        *(undefined8 *)(puVar1[3] + 0x10) = puVar1[3];
        *(undefined8 *)(puVar1[3] + 0x18) = puVar1[3];
        *param_1 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined8 FUN_1407b21f0(short *param_1,undefined8 *param_2)

{
    short sVar1;
    undefined8 *puVar2;
    longlong lVar3;

    if ((param_1 != (short *)0x0) && (param_2 != (undefined8 *)0x0)) {
        puVar2 = (undefined8 *)FUN_14018b280(0x30);
        if (puVar2 == (undefined8 *)0x0) {
            return 0x8007000e;
        }
        lVar3 = 0;
        *puVar2 = &PTR_LAB_140b79430;
        *(undefined4 *)(puVar2 + 1) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        sVar1 = *param_1;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = param_1[lVar3];
        }
        FUN_14001c1b0(puVar2 + 2,param_1,param_1 + lVar3);
        *param_2 = puVar2;
        return 0;
    }
    return 0x80070057;
}



undefined8 FUN_1407b22a0(undefined4 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b78ef0;
        *(undefined4 *)(puVar1 + 1) = 1;
        *(undefined4 *)((longlong)puVar1 + 0xc) = param_1;
        *param_2 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined8 FUN_1407b2310(undefined4 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b78d30;
        *(undefined4 *)(puVar1 + 1) = 1;
        *(undefined4 *)((longlong)puVar1 + 0xc) = param_1;
        *param_2 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined8 FUN_1407b2380(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b78b70;
        *(undefined4 *)(puVar1 + 1) = 1;
        puVar1[2] = param_1;
        *param_2 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined8 FUN_1407b23f0(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b789b0;
        *(undefined4 *)(puVar1 + 1) = 1;
        puVar1[2] = param_1;
        *param_2 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined8 FUN_1407b2460(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
    undefined8 *puVar1;

    if (param_3 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b787f0;
        *(undefined4 *)(puVar1 + 1) = 1;
        *(undefined4 *)((longlong)puVar1 + 0xc) = param_1;
        *param_3 = puVar1;
        return 0;
    }
    return 0x8007000e;
}



undefined4 FUN_1407b24e0(undefined8 param_1,undefined8 param_2)

{
    short *psVar1;
    ushort uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong local_res18;
    longlong local_res20;
    undefined local_a8 [16];
    longlong local_98;
    undefined2 *local_90;
    longlong local_88;
    undefined local_80 [8];
    longlong local_78;
    undefined2 *local_70;
    longlong local_68;
    undefined local_60 [8];
    longlong local_58;
    longlong local_50;

    uVar11 = 0;
    local_98 = 0;
    local_88 = 0;
    uVar7 = uVar11;
    do {
        psVar1 = &DAT_140b53a5a + uVar7;
        uVar7 = uVar7 + 1;
    } while (*psVar1 != 0);
    lVar10 = (longlong)(uVar7 * 2) >> 1;
    uVar7 = lVar10 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar3 = uVar7 * 2;
        local_98 = FUN_14018b280(lVar3,0);
        local_88 = lVar3 + local_98;
    }
    lVar3 = local_98;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_98,&DAT_140b53a58,lVar10);
    local_90 = (undefined2 *)(lVar10 + lVar3);
    if (local_90 != (undefined2 *)0x0) {
        *local_90 = 0;
    }
    local_78 = 0;
    local_68 = 0;
    uVar7 = uVar11;
    do {
        psVar1 = &DAT_140b53a6a + uVar7;
        uVar7 = uVar7 + 1;
    } while (*psVar1 != 0);
    lVar10 = (longlong)(uVar7 * 2) >> 1;
    uVar7 = lVar10 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar4 = uVar7 * 2;
        local_78 = FUN_14018b280(lVar4,0);
        local_68 = lVar4 + local_78;
    }
    lVar4 = local_78;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_78,&DAT_140b53a68,lVar10);
    local_70 = (undefined2 *)(lVar10 + lVar4);
    if (local_70 != (undefined2 *)0x0) {
        *local_70 = 0;
    }
    FUN_1407b0a40(local_60,param_1,local_80);
    if (lVar4 != 0) {
        FUN_14018b900(lVar4);
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3);
    }
    uVar7 = uVar11;
    lVar10 = local_58;
    if ((local_50 - local_58 & 0xffffffffffffffe0U) == 0) {
        uVar6 = 0x80004005;
    }
    else {
        do {
            uVar7 = uVar7 + 1;
        } while ((&DAT_1409faf8c)[uVar7] != 0);
        lVar3 = *(longlong *)(local_58 + 8);
        uVar12 = *(longlong *)(local_58 + 0x10) - lVar3 >> 1;
        uVar8 = uVar11;
        if (uVar12 == uVar7) {
            uVar9 = uVar11;
            if (uVar7 != 0) {
                do {
                    uVar2 = *(ushort *)(lVar3 + uVar9 * 2);
                    if (uVar2 != (&DAT_1409faf8c)[uVar9]) {
                        iVar5 = 1;
                        if (uVar2 < (ushort)(&DAT_1409faf8c)[uVar9]) {
                            iVar5 = -1;
                        }
                        if (iVar5 != 0) goto LAB_1407b2711;
                        break;
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < uVar7);
            }
            local_res20 = local_58 + 0x20;
            local_res18 = local_50;
            uVar6 = FUN_1407b1670(&local_res20,&local_res18,local_a8,param_2);
        }
        else {
            LAB_1407b2711:
            do {
                uVar8 = uVar8 + 1;
            } while ((&DAT_1409fafac)[uVar8] != 0);
            if (uVar12 == uVar8) {
                if (uVar8 != 0) {
                    do {
                        uVar2 = *(ushort *)(lVar3 + uVar11 * 2);
                        if (uVar2 != (&DAT_1409fafac)[uVar11]) {
                            iVar5 = 1;
                            if (uVar2 < (ushort)(&DAT_1409fafac)[uVar11]) {
                                iVar5 = -1;
                            }
                            if (iVar5 != 0) goto LAB_1407b277a;
                            break;
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < uVar8);
                }
                local_res20 = local_58 + 0x20;
                local_res18 = local_50;
                uVar6 = FUN_1407b1160(&local_res20,&local_res18,local_a8,param_2);
            }
            else {
                LAB_1407b277a:
                uVar6 = 0x8000ffff;
            }
        }
    }
    for (; lVar10 != local_50; lVar10 = lVar10 + 0x20) {
        if (*(longlong *)(lVar10 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar10 + 8),0);
        }
    }
    if (local_58 != 0) {
        FUN_14018b900(local_58,0);
    }
    return uVar6;
}



int FUN_1407b27d0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x1b8))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1407b2800(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined *local_70;
    undefined4 local_68;
    short local_58 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_68 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = 0;
    local_70 = &DAT_140b53998;
    local_78 = 0;
    FUN_1401a3210(local_58,0x20,0,0);
    while (local_58[0] != 0) {
        lVar1 = lVar1 + 1;
        local_58[0] = local_58[lVar1];
    }
    FUN_1401c5740(local_58,lVar1 * 2 + 2,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_1407b28e0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined *local_70;
    undefined4 local_68;
    short local_58 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_68 = *(undefined4 *)(param_1 + 0xc);
    lVar1 = 0;
    local_70 = &DAT_140b539c4;
    local_78 = 0;
    FUN_1401a3210(local_58,0x20,0,0);
    while (local_58[0] != 0) {
        lVar1 = lVar1 + 1;
        local_58[0] = local_58[lVar1];
    }
    FUN_1401c5740(local_58,lVar1 * 2 + 2,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_1407b29a0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined *local_70;
    undefined8 local_68;
    short local_58 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_68 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = 0;
    local_70 = &DAT_140b539f4;
    local_78 = 0;
    FUN_1401a3210(local_58,0x20,0,0);
    while (local_58[0] != 0) {
        lVar1 = lVar1 + 1;
        local_58[0] = local_58[lVar1];
    }
    FUN_1401c5740(local_58,lVar1 * 2 + 2,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_1407b2aa0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined *local_70;
    undefined8 local_68;
    short local_58 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_68 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = 0;
    local_70 = &DAT_140b53a24;
    local_78 = 0;
    FUN_1401a3210(local_58,0x20,0,0);
    while (local_58[0] != 0) {
        lVar1 = lVar1 + 1;
        local_58[0] = local_58[lVar1];
    }
    FUN_1401c5740(local_58,lVar1 * 2 + 2,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_1407b2b50(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined auStack152 [32];
    undefined8 local_78;
    undefined *local_70;
    double local_68;
    short local_58 [32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    lVar1 = 0;
    local_68 = (double)*(float *)(param_1 + 0xc);
    local_70 = &DAT_140b53ac8;
    local_78 = 0;
    FUN_1401a3210(local_58,0x20,0,0);
    while (local_58[0] != 0) {
        lVar1 = lVar1 + 1;
        local_58[0] = local_58[lVar1];
    }
    FUN_1401c5740(local_58,lVar1 * 2 + 2,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



undefined8 * FUN_1407b2c10(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b78ef0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1407b2c40(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b78d30;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1407b2c70(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b78b70;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1407b2ca0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b789b0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1407b2cd0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b787f0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001407b303b)
// WARNING: Removing unreachable block (ram,0x0001407b3059)
// WARNING: Removing unreachable block (ram,0x0001407b305e)
// WARNING: Removing unreachable block (ram,0x0001407b3063)
// WARNING: Removing unreachable block (ram,0x0001407b3046)
// WARNING: Removing unreachable block (ram,0x0001407b304c)
// WARNING: Removing unreachable block (ram,0x0001407b306e)
// WARNING: Removing unreachable block (ram,0x0001407b3081)
// WARNING: Removing unreachable block (ram,0x0001407b3086)
// WARNING: Removing unreachable block (ram,0x0001407b3074)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b2d00(float *param_1,float *param_2,float *param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined local_d8 [8];
    float fStack208;
    float afStack204 [5];
    undefined local_b8 [8];
    float fStack176;

    fVar4 = param_1[4] - *param_1;
    fVar5 = param_1[5] - param_1[1];
    fVar11 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
    if (fVar11 <= 1e-05) {
        _local_d8 = CONCAT412(uRam0000000140c7787c,
                              CONCAT48(uRam0000000140c77878,
                                       CONCAT44(uRam0000000140c77874,_DAT_140c77870)));
    }
    else {
        _local_d8 = divps(CONCAT412(param_1[7] - param_1[3],
                                    CONCAT48(param_1[6] - param_1[2],CONCAT44(fVar5,fVar4))),
                          CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))));
    }
    FUN_1401ae000(afStack204 + 1);
    fVar4 = *param_1;
    fVar5 = param_1[2];
    fVar10 = param_1[1];
    _local_d8 = ZEXT1216(CONCAT48(afStack204[3] * fVar5,
                                  CONCAT44(afStack204[2] * fVar10,afStack204[1] * fVar4)));
    uVar2 = (ulonglong)(afStack204[1] * fVar4 < afStack204[2] * fVar10);
    lVar1 = 1 - uVar2;
    if (*(float *)(local_d8 + uVar2 * 4) <= 0.0 && *(float *)(local_d8 + uVar2 * 4) != 0.0) {
        uVar2 = 2;
    }
    fVar3 = (float)((uint)(afStack204[-(lVar1 + uVar2)] + *(float *)(local_d8 + lVar1 * 4) +
                           *(float *)(local_d8 + uVar2 * 4)) ^ 0x80000000);
    _local_d8 = ZEXT1216(CONCAT48(fStack176 * fVar5,
                                  CONCAT44(local_b8._4_4_ * fVar10,local_b8._0_4_ * fVar4)));
    uVar2 = (ulonglong)(local_b8._0_4_ * fVar4 < local_b8._4_4_ * fVar10);
    lVar1 = 1 - uVar2;
    if (*(float *)(local_d8 + uVar2 * 4) <= 0.0 && *(float *)(local_d8 + uVar2 * 4) != 0.0) {
        uVar2 = 2;
    }
    _local_d8 = ZEXT1216(CONCAT48(fStack208 * fVar5,
                                  CONCAT44(local_d8._4_4_ * fVar10,local_d8._0_4_ * fVar4)));
    fVar4 = (float)((uint)(afStack204[-(lVar1 + uVar2)] + *(float *)(local_d8 + lVar1 * 4) +
                           *(float *)(local_d8 + uVar2 * 4)) ^ 0x80000000);
    fVar5 = *param_2 * afStack204[1] + param_2[1] * afStack204[2] + 0.0 + fVar3;
    fVar10 = *param_2 * local_b8._0_4_ + param_2[1] * local_b8._4_4_ + 0.0 + fVar4;
    fVar3 = (*param_3 * afStack204[1] + param_3[1] * afStack204[2] + 0.0 + fVar3) - fVar5;
    fVar4 = (*param_3 * local_b8._0_4_ + param_3[1] * local_b8._4_4_ + 0.0 + fVar4) - fVar10;
    if (0.0 <= fVar11) {
        fVar11 = fVar3 * 0.0 + fVar5;
        fVar7 = fVar4 * 0.0 + fVar10;
        fVar8 = fVar11 - 0.0;
        fVar9 = fVar7 - 0.0;
        fVar6 = (fVar8 * fVar8 + fVar9 * fVar9) - param_1[8] * param_1[8];
        if (fVar6 <= 0.0) {
            return 1;
        }
        fVar11 = (fVar3 * 1.0 + fVar5) - fVar11;
        fVar7 = (fVar4 * 1.0 + fVar10) - fVar7;
        fVar4 = fVar11 * fVar11 + fVar7 * fVar7;
        if (_DAT_140c3ea78 <= fVar4) {
            fVar5 = (fVar11 * fVar8 + fVar7 * fVar9) * 2.0;
            fVar11 = fVar5 * fVar5 - fVar4 * 4.0 * fVar6;
            if (0.0 <= fVar11) {
                fVar11 = SQRT(fVar11);
                fVar4 = 1.0 / (fVar4 * 2.0);
                if ((0.0 <= (fVar11 - fVar5) * fVar4) &&
                    (((float)((uint)fVar5 ^ 0x80000000) - fVar11) * fVar4 <= 1.0)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1407b31c0(undefined8 param_1,ulonglong param_2)

{
    FUN_1407b3200();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407b3200(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    *param_1 = &PTR_LAB_140b790b0;
    pplVar1 = (longlong **)param_1[4];
    for (pplVar2 = (longlong **)param_1[3]; pplVar2 != pplVar1; pplVar2 = pplVar2 + 1) {
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
        }
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3],0);
    }
    return;
}



ulonglong FUN_1407b3270(longlong param_1,undefined8 param_2)

{
    short sVar1;
    longlong lVar2;
    uint uVar3;
    short *psVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong **pplVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong *local_res8;
    undefined local_48 [8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    uVar9 = 0;
    local_40 = 0;
    local_30 = 0;
    uVar5 = uVar9;
    do {
        psVar4 = &DAT_1409fb29e + uVar5;
        uVar5 = uVar5 + 1;
    } while (*psVar4 != 0);
    lVar8 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar8 + 1;
    if (uVar5 < 0x7fffffffffffffff) {
        lVar2 = uVar5 * 2;
        local_40 = FUN_14018b280(lVar2,0);
        local_30 = lVar2 + local_40;
    }
    lVar2 = local_40;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_40,&DAT_1409fb29c,lVar8);
    local_38 = (undefined2 *)(lVar8 + lVar2);
    if (local_38 != (undefined2 *)0x0) {
        *local_38 = 0;
    }
    pplVar7 = *(longlong ***)(param_1 + 0x18);
    uVar5 = uVar9;
    if (pplVar7 != *(longlong ***)(param_1 + 0x20)) {
        do {
            local_res8 = (longlong *)0x0;
            uVar3 = (**(code **)(**pplVar7 + 0x18))(*pplVar7,&local_res8);
            uVar6 = (ulonglong)uVar3;
            if ((int)uVar3 < 0) {
                lVar8 = local_40;
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)(*local_res8 + 8))();
                    lVar8 = local_40;
                }
                goto LAB_1407b3419;
            }
            uVar6 = uVar9;
            if (pplVar7 != *(longlong ***)(param_1 + 0x18)) {
                do {
                    psVar4 = &DAT_1409fb2ee + uVar6;
                    uVar6 = uVar6 + 1;
                } while (*psVar4 != 0);
                FUN_14001c310(local_48,&DAT_1409fb2ec,&DAT_1409fb2ec + uVar6 * 2);
            }
            psVar4 = (short *)(**(code **)(*local_res8 + 0x20))();
            sVar1 = *psVar4;
            uVar6 = uVar9;
            while (sVar1 != 0) {
                uVar6 = uVar6 + 1;
                sVar1 = psVar4[uVar6];
            }
            FUN_14001c310(local_48,psVar4,psVar4 + uVar6);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
            pplVar7 = pplVar7 + 1;
        } while (pplVar7 != *(longlong ***)(param_1 + 0x20));
    }
    do {
        psVar4 = &DAT_1409fb306 + uVar5;
        uVar5 = uVar5 + 1;
    } while (*psVar4 != 0);
    FUN_14001c310(local_48,&DAT_1409fb304,&DAT_1409fb304 + uVar5 * 2);
    lVar8 = local_40;
    uVar3 = FUN_1401c5740(local_40,((longlong)local_38 - local_40 >> 1) * 2 + 2,param_2);
    uVar6 = (ulonglong)uVar3;
    if (-1 < (int)uVar3) {
        uVar6 = uVar9;
    }
    LAB_1407b3419:
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    return uVar6;
}



undefined8 FUN_1407b3460(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
    undefined8 *puVar1;

    if ((param_3 != (undefined8 *)0x0) &&
        (param_2 < (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3))) {
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + param_2 * 8);
        *param_3 = puVar1;
        (**(code **)*puVar1)();
        return 0;
    }
    return 0x80070057;
}



int FUN_1407b34a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x90))(local_res8,param_3,param_4,param_5);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b3570(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x80))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b35d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x78))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b3630(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x70))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b3690(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x68))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b36f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x60))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



undefined8 FUN_1407b3750(longlong param_1,ulonglong param_2,longlong *param_3)

{
    longlong **pplVar1;
    longlong *plVar2;

    if ((param_3 != (longlong *)0x0) &&
        (param_2 < (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3))) {
        pplVar1 = (longlong **)(*(longlong *)(param_1 + 0x18) + param_2 * 8);
        if (*(longlong **)(*(longlong *)(param_1 + 0x18) + param_2 * 8) != param_3) {
            (**(code **)*param_3)(param_3);
            plVar2 = *pplVar1;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
            }
            *pplVar1 = param_3;
        }
        return 0;
    }
    return 0x80070057;
}



int FUN_1407b37c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b21f0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3840(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b22a0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b38c0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2310(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3940(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2380(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b39c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b23f0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x178))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3a40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2460(param_3,param_4,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_4 + 0x178))(param_4,param_5,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



undefined8 FUN_1407b3ac0(longlong param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong *local_res10 [3];

    if (param_2 == (longlong *)0x0) {
        return 0x80070057;
    }
    local_res10[0] = param_2;
    (**(code **)*param_2)(param_2);
    pplVar1 = *(longlong ***)(param_1 + 0x20);
    if (pplVar1 == *(longlong ***)(param_1 + 0x28)) {
        FUN_1405b1d60(param_1 + 0x10,pplVar1,local_res10);
    }
    else {
        if (pplVar1 != (longlong **)0x0) {
            *pplVar1 = param_2;
            (**(code **)*param_2)(param_2);
        }
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 8;
    }
    (**(code **)(*param_2 + 8))(param_2);
    return 0;
}



int FUN_1407b3b40(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b21f0(param_2,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3bb0(longlong *param_1,undefined4 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b22a0(param_2,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3c20(longlong *param_1,undefined4 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b2310(param_2,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3c90(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b2380(param_2,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3d00(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b23f0(param_2,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b3d70(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res18 [2];

    local_res18[0] = (longlong *)0x0;
    iVar2 = FUN_1407b2460(param_2,param_3,local_res18);
    plVar1 = local_res18[0];
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_3 + 0x1b0))(param_3,local_res18[0]);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



undefined8 * FUN_1407b3de0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b79270;
    if (param_1[4] != 0) {
        FUN_1407b5100(param_1 + 2,*(undefined8 *)(param_1[3] + 8));
        *(undefined8 *)(param_1[3] + 0x10) = param_1[3];
        *(undefined8 *)(param_1[3] + 8) = 0;
        *(undefined8 *)(param_1[3] + 0x18) = param_1[3];
        param_1[4] = 0;
    }
    FUN_14018b900(param_1[3],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



ulonglong FUN_1407b3e70(longlong param_1,undefined8 param_2)

{
    short sVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    short *psVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong *local_res8;
    undefined local_48 [8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    uVar10 = 0;
    local_40 = 0;
    local_30 = 0;
    uVar7 = uVar10;
    do {
        psVar5 = &DAT_1409fb31e + uVar7;
        uVar7 = uVar7 + 1;
    } while (*psVar5 != 0);
    lVar9 = (longlong)(uVar7 * 2) >> 1;
    uVar7 = lVar9 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar6 = uVar7 * 2;
        local_40 = FUN_14018b280(lVar6,0);
        local_30 = local_40 + lVar6;
    }
    lVar6 = local_40;
    lVar9 = lVar9 * 2;
    FUN_1407db590(local_40,&DAT_1409fb31c,lVar9);
    local_38 = (undefined2 *)(lVar6 + lVar9);
    if (local_38 != (undefined2 *)0x0) {
        *local_38 = 0;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar7 = uVar10;
    if (lVar9 != *(longlong *)(param_1 + 0x18)) {
        do {
            local_res8 = (longlong *)0x0;
            uVar3 = (**(code **)(**(longlong **)(lVar9 + 0x40) + 0x18))
                    (*(longlong **)(lVar9 + 0x40),&local_res8);
            uVar8 = (ulonglong)uVar3;
            if ((int)uVar3 < 0) {
                lVar9 = local_40;
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)(*local_res8 + 8))();
                    lVar9 = local_40;
                }
                goto LAB_1407b4116;
            }
            uVar4 = uVar10;
            uVar8 = uVar10;
            if (lVar9 != *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
                do {
                    psVar5 = &DAT_1409fb336 + uVar8;
                    uVar8 = uVar8 + 1;
                } while (*psVar5 != 0);
                FUN_14001c310(local_48,&DAT_1409fb334,&DAT_1409fb334 + uVar8 * 2);
            }
            do {
                psVar5 = &DAT_1409fb34e + uVar4;
                uVar4 = uVar4 + 1;
            } while (*psVar5 != 0);
            FUN_14001c310(local_48,&DAT_1409fb34c,&DAT_1409fb34c + uVar4 * 2);
            FUN_14001c310(local_48,*(undefined8 *)(lVar9 + 0x28),*(undefined8 *)(lVar9 + 0x30));
            uVar8 = uVar10;
            do {
                psVar5 = &DAT_1409fb37e + uVar8;
                uVar8 = uVar8 + 1;
            } while (*psVar5 != 0);
            FUN_14001c310(local_48,&DAT_1409fb37c,&DAT_1409fb37c + uVar8 * 2);
            uVar8 = uVar10;
            do {
                psVar5 = &DAT_1409fb396 + uVar8;
                uVar8 = uVar8 + 1;
            } while (*psVar5 != 0);
            FUN_14001c310(local_48,&DAT_1409fb394,&DAT_1409fb394 + uVar8 * 2);
            psVar5 = (short *)(**(code **)(*local_res8 + 0x20))();
            sVar1 = *psVar5;
            uVar8 = uVar10;
            while (sVar1 != 0) {
                uVar8 = uVar8 + 1;
                sVar1 = psVar5[uVar8];
            }
            FUN_14001c310(local_48,psVar5,psVar5 + uVar8);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
            lVar6 = *(longlong *)(lVar9 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar9 = lVar6;
                        lVar6 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar6) {
                    lVar9 = lVar6;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar6 + 0x10); lVar9 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar9 != *(longlong *)(param_1 + 0x18));
    }
    do {
        psVar5 = &DAT_1409fb3fe + uVar7;
        uVar7 = uVar7 + 1;
    } while (*psVar5 != 0);
    FUN_14001c310(local_48,&DAT_1409fb3fc,&DAT_1409fb3fc + uVar7 * 2);
    lVar9 = local_40;
    uVar3 = FUN_1401c5740(local_40,((longlong)local_38 - local_40 >> 1) * 2 + 2,param_2);
    uVar8 = (ulonglong)uVar3;
    if (-1 < (int)uVar3) {
        uVar8 = uVar10;
    }
    LAB_1407b4116:
    if (lVar9 != 0) {
        FUN_14018b900(lVar9,0);
    }
    return uVar8;
}



int FUN_1407b4650(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x90))(local_res8,param_3,param_4,param_5);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b46c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x88))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b4720(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x80))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b4780(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x78))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b47e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x70))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b4840(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x68))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b48a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_res8);
    if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_res8 + 0x60))(local_res8,param_3);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return iVar1;
}



int FUN_1407b4ce0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b21f0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 200))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b4d60(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b22a0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 200))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b4de0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2310(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 200))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b4e60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2380(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 200))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b4ee0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b23f0(param_3,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 200))(param_1,param_2,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



int FUN_1407b4f60(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 param_5)

{
    longlong *plVar1;
    int iVar2;
    longlong *local_res20;

    local_res20 = (longlong *)0x0;
    iVar2 = FUN_1407b2460(param_3,param_4,&local_res20);
    plVar1 = local_res20;
    if (-1 < iVar2) {
        iVar2 = (**(code **)(*param_4 + 200))(param_4,param_5,local_res20);
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return iVar2;
}



longlong FUN_1407b4fe0(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;
    longlong local_res18;
    undefined local_58 [8];
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    longlong *local_38;

    lVar4 = *(longlong *)(param_1 + 8);
    local_res8 = lVar4;
    if (*(longlong *)(lVar4 + 8) != 0) {
        uVar1 = *(undefined8 *)(param_2 + 0x10);
        uVar2 = *(undefined8 *)(param_2 + 8);
        lVar5 = *(longlong *)(lVar4 + 8);
        do {
            iVar3 = FUN_1400454d0(*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30),uVar2,uVar1)
                    ;
            if (iVar3 < 0) {
                lVar6 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar6 = *(longlong *)(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            lVar5 = lVar6;
        } while (lVar6 != 0);
    }
    if ((local_res8 == lVar4) ||
        (iVar3 = FUN_1400454d0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(local_res8 + 0x28),*(undefined8 *)(local_res8 + 0x30)),
                lVar4 = local_res8, iVar3 < 0)) {
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        FUN_14001c1b0(local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        local_38 = (longlong *)0x0;
        FUN_1407b5180(param_1,&local_res18,&local_res8,local_58);
        if (local_38 != (longlong *)0x0) {
            (**(code **)(*local_38 + 8))();
        }
        lVar4 = local_res18;
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
    }
    return lVar4 + 0x40;
}



void FUN_1407b5100(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_1407b5100(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if (*(longlong **)(param_2 + 0x40) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_2 + 0x40) + 8))();
            }
            if (*(longlong *)(param_2 + 0x28) != 0) {
                FUN_14018b900(*(longlong *)(param_2 + 0x28),0);
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_1407b5180(longlong param_1,longlong *param_2,char **param_3,longlong param_4)

{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) != 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                   *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            FUN_1407b53a0(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    else if (pcVar2 == pcVar1) {
        pcVar2 = *(char **)(pcVar1 + 0x18);
        iVar3 = FUN_1400454d0(*(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30),
                              *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
        if (iVar3 < 0) {
            if ((pcVar2 == pcVar1) ||
                (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                       *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                        iVar3 < 0)) {
                lVar4 = FUN_1407b5670();
                *(longlong *)(pcVar2 + 0x10) = lVar4;
                pcVar1 = *(char **)(param_1 + 8);
                if (pcVar2 == pcVar1) {
                    *(longlong *)(pcVar1 + 8) = lVar4;
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
                else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                    *(longlong *)(pcVar1 + 0x10) = lVar4;
                }
            }
            else {
                lVar4 = FUN_1407b5670();
                *(longlong *)(pcVar2 + 0x18) = lVar4;
                if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar4;
                }
            }
            *(char **)(lVar4 + 8) = pcVar2;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            *(undefined8 *)(lVar4 + 0x18) = 0;
            FUN_1400081c0(lVar4,*(longlong *)(param_1 + 8) + 8);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
            *param_2 = lVar4;
            return param_2;
        }
    }
    else {
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar4 = *(longlong *)(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar4;
                if (pcVar2 == *(char **)(lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar4 + 0x10);
                        lVar6 = lVar4;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar4 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar4 = lVar6;
                }
            }
        }
        iVar3 = FUN_1400454d0(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),
                              *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
        if ((iVar3 < 0) &&
            (iVar3 = FUN_1400454d0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                                   *(undefined8 *)(pcVar2 + 0x28),*(undefined8 *)(pcVar2 + 0x30)),
                    iVar3 < 0)) {
            if (*(longlong *)(lVar4 + 0x18) == 0) {
                FUN_1407b53a0(param_1,param_2,0,lVar4,param_4);
                return param_2;
            }
            FUN_1407b53a0(param_1,param_2,pcVar2,pcVar2,param_4);
            return param_2;
        }
    }
    plVar5 = (longlong *)FUN_1407b5480(param_1,local_18,param_4);
    *param_2 = *plVar5;
    return param_2;
}



longlong *
FUN_1407b53a0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        iVar2 = FUN_1400454d0(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10),
                              *(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
        if (-1 < iVar2) {
            lVar3 = FUN_1407b5670();
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1407b5436;
        }
    }
    lVar3 = FUN_1407b5670();
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar3;
    }
    LAB_1407b5436:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



char ** FUN_1407b5480(longlong param_1,char **param_2,longlong param_3)

{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    char **ppcVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    undefined local_res8 [8];

    pcVar6 = *(char **)(param_1 + 8);
    pcVar5 = *(char **)(pcVar6 + 8);
    bVar9 = true;
    pcVar8 = pcVar6;
    if (pcVar5 != (char *)0x0) {
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        uVar2 = *(undefined8 *)(param_3 + 8);
        do {
            pcVar8 = pcVar5;
            iVar3 = FUN_1400454d0(uVar2,uVar1,*(undefined8 *)(pcVar8 + 0x28),
                                  *(undefined8 *)(pcVar8 + 0x30));
            bVar9 = iVar3 < 0;
            if (bVar9) {
                pcVar5 = *(char **)(pcVar8 + 0x10);
            }
            else {
                pcVar5 = *(char **)(pcVar8 + 0x18);
            }
        } while (pcVar5 != (char *)0x0);
        pcVar6 = *(char **)(param_1 + 8);
    }
    pcVar7 = pcVar8;
    if (bVar9) {
        if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
            ppcVar4 = (char **)FUN_1407b53a0(param_1,local_res8,pcVar5,pcVar8,param_3);
            *param_2 = *ppcVar4;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
            pcVar7 = *(char **)(pcVar8 + 0x18);
        }
        else {
            pcVar7 = *(char **)(pcVar8 + 0x10);
            if (pcVar7 == (char *)0x0) {
                pcVar7 = *(char **)(pcVar8 + 8);
                pcVar6 = pcVar7;
                if (pcVar8 == *(char **)(pcVar7 + 0x10)) {
                    do {
                        pcVar7 = *(char **)(pcVar6 + 8);
                        bVar9 = pcVar6 == *(char **)(pcVar7 + 0x10);
                        pcVar6 = pcVar7;
                    } while (bVar9);
                }
            }
            else {
                for (pcVar6 = *(char **)(pcVar7 + 0x18); pcVar6 != (char *)0x0;
                     pcVar6 = *(char **)(pcVar6 + 0x18)) {
                    pcVar7 = pcVar6;
                }
            }
        }
    }
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 8);
    iVar3 = FUN_1400454d0(*(undefined8 *)(pcVar7 + 0x28),*(undefined8 *)(pcVar7 + 0x30),uVar2,uVar1);
    if (iVar3 < 0) {
        if (((pcVar8 == *(char **)(param_1 + 8)) || (pcVar5 != (char *)0x0)) ||
            (iVar3 = FUN_1400454d0(uVar2,uVar1,*(undefined8 *)(pcVar8 + 0x28),
                                   *(undefined8 *)(pcVar8 + 0x30)), iVar3 < 0)) {
            pcVar5 = (char *)FUN_1407b5670();
            *(char **)(pcVar8 + 0x10) = pcVar5;
            pcVar6 = *(char **)(param_1 + 8);
            if (pcVar8 == pcVar6) {
                *(char **)(pcVar6 + 8) = pcVar5;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar5;
            }
            else if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
                *(char **)(pcVar6 + 0x10) = pcVar5;
            }
        }
        else {
            pcVar5 = (char *)FUN_1407b5670();
            *(char **)(pcVar8 + 0x18) = pcVar5;
            if (pcVar8 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar5;
            }
        }
        *(char **)(pcVar5 + 8) = pcVar8;
        *(undefined8 *)(pcVar5 + 0x10) = 0;
        *(undefined8 *)(pcVar5 + 0x18) = 0;
        FUN_1400081c0(pcVar5,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar5;
        *(undefined *)(param_2 + 1) = 1;
    }
    else {
        *param_2 = pcVar7;
        *(undefined *)(param_2 + 1) = 0;
    }
    return param_2;
}



longlong FUN_1407b5670(undefined8 param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;

    lVar2 = FUN_14018b280(0x48);
    if (lVar2 + 0x20 != 0) {
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_14001c1b0(lVar2 + 0x20,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
        puVar1 = *(undefined8 **)(param_2 + 0x20);
        *(undefined8 **)(lVar2 + 0x40) = puVar1;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
        }
    }
    return lVar2;
}



undefined8 * FUN_1407b56e0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b79430;
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3],0);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1407b5730(longlong param_1,undefined8 param_2)

{
    short *psVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    undefined2 *puVar5;
    undefined *puVar6;
    longlong lVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    undefined2 *puVar13;
    ulonglong uVar14;
    longlong lVar15;
    undefined4 local_res8;
    longlong local_res18;
    longlong local_res20;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;

    lVar15 = *(longlong *)(param_1 + 0x18);
    lVar12 = *(longlong *)(param_1 + 0x20) - lVar15 >> 1;
    local_60 = 0;
    local_50 = 0;
    uVar9 = lVar12 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar11 = uVar9 * 2;
        local_60 = FUN_14018b280(lVar11,0);
        local_50 = local_60 + lVar11;
    }
    lVar11 = local_60;
    lVar12 = lVar12 * 2;
    FUN_1407db590(local_60,lVar15,lVar12);
    puVar13 = (undefined2 *)(lVar11 + lVar12);
    if (puVar13 != (undefined2 *)0x0) {
        *puVar13 = 0;
    }
    local_58 = puVar13;
    if ((longlong)puVar13 - lVar11 >> 1 != 0) {
        local_res8 = CONCAT22(0x5c,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar12 = (longlong)puVar5 - lVar11 >> 1, lVar15 = 0, lVar12 != -1))
        {
            while( true ) {
                do {
                    psVar1 = &DAT_1409fb416 + lVar15;
                    lVar15 = lVar15 + 1;
                } while (*psVar1 != 0);
                FUN_1401905c0(local_68,lVar11 + lVar12 * 2,&DAT_1409fb414,&DAT_1409fb414 + lVar15 * 2);
                puVar13 = local_58;
                lVar11 = local_60;
                if ((ulonglong)((longlong)local_58 - local_60 >> 1) <= lVar12 + 2U) break;
                local_res8 = CONCAT22(0x5c,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(local_60 + (lVar12 + 2U) * 2,local_58,local_res8);
                if ((puVar5 == puVar13) ||
                    (lVar12 = (longlong)puVar5 - lVar11 >> 1, lVar15 = 0, lVar12 == -1)) break;
            }
        }
    }
    uVar9 = (longlong)puVar13 - lVar11 >> 1;
    if (uVar9 != 0) {
        local_res8 = CONCAT22(10,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 != -1)) {
            local_res20 = 1;
            while( true ) {
                lVar12 = 0;
                local_res18 = uVar9 - lVar15;
                plVar8 = &local_res18;
                if (uVar9 - lVar15 != 0) {
                    plVar8 = &local_res20;
                }
                puVar6 = &DAT_140b53aec;
                do {
                    psVar1 = (short *)(puVar6 + 2);
                    puVar6 = puVar6 + 2;
                } while (*psVar1 != 0);
                do {
                    psVar1 = &DAT_140b53aee + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                lVar2 = lVar11 + lVar15 * 2;
                lVar3 = lVar11 + (*plVar8 + lVar15) * 2;
                lVar10 = lVar12 * 2 >> 1;
                lVar7 = lVar3 - lVar2 >> 1;
                if (lVar7 < lVar10) {
                    lVar7 = lVar7 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53aec,(lVar7 >> 1) * 2);
                    FUN_1401905c0(local_68,lVar3,&DAT_140b53aec + lVar7,&DAT_140b53aec + lVar12 * 2);
                    lVar11 = local_60;
                    puVar13 = local_58;
                }
                else {
                    lVar10 = lVar10 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53aec,lVar10);
                    lVar10 = lVar10 + lVar2;
                    if (lVar10 != lVar3) {
                        FUN_1407db590(lVar10,lVar3,((longlong)puVar13 - lVar3 >> 1) * 2 + 2);
                        local_58 = puVar13 + -(lVar3 - lVar10 >> 1);
                        puVar13 = local_58;
                    }
                }
                uVar9 = (longlong)puVar13 - lVar11 >> 1;
                if (uVar9 <= lVar15 + 2U) break;
                local_res8 = CONCAT22(10,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(lVar11 + (lVar15 + 2U) * 2,puVar13,local_res8);
                if ((puVar5 == puVar13) || (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 == -1)) break;
            }
        }
    }
    uVar9 = (longlong)puVar13 - lVar11 >> 1;
    if (uVar9 != 0) {
        local_res8 = CONCAT22(0xd,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 != -1)) {
            local_res20 = 1;
            while( true ) {
                lVar12 = 0;
                local_res18 = uVar9 - lVar15;
                plVar8 = &local_res18;
                if (uVar9 - lVar15 != 0) {
                    plVar8 = &local_res20;
                }
                puVar6 = &DAT_140b53af4;
                do {
                    psVar1 = (short *)(puVar6 + 2);
                    puVar6 = puVar6 + 2;
                } while (*psVar1 != 0);
                do {
                    psVar1 = &DAT_140b53af6 + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                lVar2 = lVar11 + lVar15 * 2;
                lVar3 = lVar11 + (*plVar8 + lVar15) * 2;
                lVar10 = lVar12 * 2 >> 1;
                lVar7 = lVar3 - lVar2 >> 1;
                if (lVar7 < lVar10) {
                    lVar7 = lVar7 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53af4,(lVar7 >> 1) * 2);
                    FUN_1401905c0(local_68,lVar3,&DAT_140b53af4 + lVar7,&DAT_140b53af4 + lVar12 * 2);
                    lVar11 = local_60;
                    puVar13 = local_58;
                }
                else {
                    lVar10 = lVar10 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53af4,lVar10);
                    lVar10 = lVar10 + lVar2;
                    if (lVar10 != lVar3) {
                        FUN_1407db590(lVar10,lVar3,((longlong)puVar13 - lVar3 >> 1) * 2 + 2);
                        local_58 = puVar13 + -(lVar3 - lVar10 >> 1);
                        puVar13 = local_58;
                    }
                }
                uVar9 = (longlong)puVar13 - lVar11 >> 1;
                if (uVar9 <= lVar15 + 2U) break;
                local_res8 = CONCAT22(0xd,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(lVar11 + (lVar15 + 2U) * 2,puVar13,local_res8);
                if ((puVar5 == puVar13) || (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 == -1)) break;
            }
        }
    }
    uVar9 = (longlong)puVar13 - lVar11 >> 1;
    if (uVar9 != 0) {
        local_res8 = CONCAT22(9,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 != -1)) {
            local_res20 = 1;
            while( true ) {
                local_res18 = uVar9 - lVar15;
                plVar8 = &local_res18;
                if (uVar9 - lVar15 != 0) {
                    plVar8 = &local_res20;
                }
                puVar6 = &DAT_140b53afc;
                do {
                    psVar1 = (short *)(puVar6 + 2);
                    puVar6 = puVar6 + 2;
                } while (*psVar1 != 0);
                lVar12 = 0;
                do {
                    psVar1 = &DAT_140b53afe + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                lVar2 = lVar11 + lVar15 * 2;
                lVar3 = lVar11 + (*plVar8 + lVar15) * 2;
                lVar10 = lVar12 * 2 >> 1;
                lVar7 = lVar3 - lVar2 >> 1;
                if (lVar7 < lVar10) {
                    lVar7 = lVar7 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53afc,(lVar7 >> 1) * 2);
                    FUN_1401905c0(local_68,lVar3,&DAT_140b53afc + lVar7,&DAT_140b53afc + lVar12 * 2);
                    lVar11 = local_60;
                    puVar13 = local_58;
                }
                else {
                    lVar10 = lVar10 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53afc,lVar10);
                    lVar10 = lVar10 + lVar2;
                    if (lVar10 != lVar3) {
                        FUN_1407db590(lVar10,lVar3,((longlong)puVar13 - lVar3 >> 1) * 2 + 2);
                        local_58 = puVar13 + -(lVar3 - lVar10 >> 1);
                        puVar13 = local_58;
                    }
                }
                uVar9 = (longlong)puVar13 - lVar11 >> 1;
                if (uVar9 <= lVar15 + 2U) break;
                local_res8 = CONCAT22(9,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(lVar11 + (lVar15 + 2U) * 2,puVar13,local_res8);
                if ((puVar5 == puVar13) || (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 == -1)) break;
            }
        }
    }
    uVar9 = (longlong)puVar13 - lVar11 >> 1;
    if (uVar9 != 0) {
        local_res8 = CONCAT22(8,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 != -1)) {
            local_res20 = 1;
            while( true ) {
                local_res18 = uVar9 - lVar15;
                plVar8 = &local_res18;
                if (uVar9 - lVar15 != 0) {
                    plVar8 = &local_res20;
                }
                puVar6 = &DAT_140b53b04;
                do {
                    psVar1 = (short *)(puVar6 + 2);
                    puVar6 = puVar6 + 2;
                } while (*psVar1 != 0);
                lVar12 = 0;
                do {
                    psVar1 = &DAT_140b53b06 + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                lVar2 = lVar11 + lVar15 * 2;
                lVar3 = lVar11 + (*plVar8 + lVar15) * 2;
                lVar10 = lVar12 * 2 >> 1;
                lVar7 = lVar3 - lVar2 >> 1;
                if (lVar7 < lVar10) {
                    lVar7 = lVar7 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53b04,(lVar7 >> 1) * 2);
                    FUN_1401905c0(local_68,lVar3,&DAT_140b53b04 + lVar7,&DAT_140b53b04 + lVar12 * 2);
                    lVar11 = local_60;
                    puVar13 = local_58;
                }
                else {
                    lVar10 = lVar10 * 2;
                    FUN_1407db590(lVar2,&DAT_140b53b04,lVar10);
                    lVar10 = lVar10 + lVar2;
                    if (lVar10 != lVar3) {
                        FUN_1407db590(lVar10,lVar3,((longlong)puVar13 - lVar3 >> 1) * 2 + 2);
                        local_58 = puVar13 + -(lVar3 - lVar10 >> 1);
                        puVar13 = local_58;
                    }
                }
                uVar9 = (longlong)puVar13 - lVar11 >> 1;
                if (uVar9 <= lVar15 + 2U) break;
                local_res8 = CONCAT22(8,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(lVar11 + (lVar15 + 2U) * 2,puVar13,local_res8);
                if ((puVar5 == puVar13) || (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 == -1)) break;
            }
        }
    }
    if ((longlong)puVar13 - lVar11 >> 1 != 0) {
        local_res8 = CONCAT22(0x22,(undefined2)local_res8);
        puVar5 = (undefined2 *)FUN_14002c8a0(lVar11,puVar13,local_res8);
        if ((puVar5 != puVar13) && (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 != -1)) {
            while( true ) {
                lVar12 = 0;
                do {
                    psVar1 = &DAT_1409fb44e + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                FUN_1401905c0(local_68,lVar11 + lVar15 * 2,&DAT_1409fb44c,&DAT_1409fb44c + lVar12 * 2);
                puVar13 = local_58;
                lVar11 = local_60;
                if ((ulonglong)((longlong)local_58 - local_60 >> 1) <= lVar15 + 2U) break;
                local_res8 = CONCAT22(0x22,(undefined2)local_res8);
                puVar5 = (undefined2 *)FUN_14002c8a0(local_60 + (lVar15 + 2U) * 2,local_58,local_res8);
                if ((puVar5 == puVar13) || (lVar15 = (longlong)puVar5 - lVar11 >> 1, lVar15 == -1)) break;
            }
        }
    }
    uVar14 = 0;
    uVar9 = uVar14;
    do {
        psVar1 = &DAT_1409fb52e + uVar9;
        uVar9 = uVar9 + 1;
    } while (*psVar1 != 0);
    FUN_1401905c0(local_68,lVar11,&DAT_1409fb52c,&DAT_1409fb52c + uVar9 * 2);
    uVar9 = uVar14;
    do {
        psVar1 = &DAT_1409fb556 + uVar9;
        uVar9 = uVar9 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(local_68,&DAT_1409fb554,&DAT_1409fb554 + uVar9 * 2);
    lVar15 = local_60;
    uVar4 = FUN_1401c5740(local_60,((longlong)local_58 - local_60 >> 1) * 2 + 2,param_2);
    if ((int)uVar4 < 0) {
        uVar14 = (ulonglong)uVar4;
    }
    if (lVar15 != 0) {
        FUN_14018b900(lVar15,0);
    }
    return uVar14;
}



undefined8 FUN_1407b5fd0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
    undefined8 uVar1;
    longlong local_res18 [2];

    if (param_3 == 0) {
        if (param_4 != (longlong *)0x0) {
            *param_4 = (*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 1) + 1;
        }
        return 1;
    }
    uVar1 = FUN_1401b38f0(param_2,param_3,*(undefined8 *)(param_1 + 0x18),0,local_res18);
    if (param_4 != (longlong *)0x0) {
        *param_4 = local_res18[0] + param_3;
    }
    return uVar1;
}



undefined8 FUN_1407b6110(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;

    lVar2 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        lVar2 = lVar2 + 1;
        sVar1 = param_2[lVar2];
    }
    FUN_14001c480(param_1 + 0x10,param_2,param_2 + lVar2);
    return 0;
}



int FUN_1407b6140(undefined8 param_1,longlong **param_2)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_14018b280(0x4d0,0);
    if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_LAB_140b795f0;
        plVar2[0x72] = 0;
        plVar2[0x71] = 0;
        plVar2[0x99] = 0;
        plVar2[0x98] = 0;
        *(undefined4 *)(plVar2 + 1) = 1;
        plVar2[2] = 0;
        *(undefined4 *)(plVar2 + 0x70) = 0;
        FUN_1407e4830(plVar2 + 4,0,0xc0);
        FUN_1407e4830(plVar2 + 0x1c,0,0x80);
    }
    iVar1 = FUN_1407b6280(plVar2,param_1);
    if (-1 < iVar1) {
        *param_2 = plVar2;
        return 0;
    }
    (**(code **)(*plVar2 + 8))(plVar2);
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b6280(longlong param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *(undefined8 **)(param_1 + 0x10) = param_2;
    (**(code **)*param_2)(param_2);
    uVar3 = uRam0000000140c798cc;
    uVar2 = uRam0000000140c798c8;
    uVar1 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x360) = _DAT_140c798c0;
    *(undefined4 *)(param_1 + 0x364) = uVar1;
    *(undefined4 *)(param_1 + 0x368) = uVar2;
    *(undefined4 *)(param_1 + 0x36c) = uVar3;
    uVar3 = uRam0000000140c798dc;
    uVar2 = uRam0000000140c798d8;
    uVar1 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x370) = _DAT_140c798d0;
    *(undefined4 *)(param_1 + 0x374) = uVar1;
    *(undefined4 *)(param_1 + 0x378) = uVar2;
    *(undefined4 *)(param_1 + 0x37c) = uVar3;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x2a0) = _DAT_140c78390;
    *(undefined4 *)(param_1 + 0x2a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2a8) = uVar2;
    *(undefined4 *)(param_1 + 0x2ac) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x2b0) = _DAT_140c783a0;
    *(undefined4 *)(param_1 + 0x2b4) = uVar1;
    *(undefined4 *)(param_1 + 0x2b8) = uVar2;
    *(undefined4 *)(param_1 + 700) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x2c0) = _DAT_140c783b0;
    *(undefined4 *)(param_1 + 0x2c4) = uVar1;
    *(undefined4 *)(param_1 + 0x2c8) = uVar2;
    *(undefined4 *)(param_1 + 0x2cc) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x2d0) = _DAT_140c783c0;
    *(undefined4 *)(param_1 + 0x2d4) = uVar1;
    *(undefined4 *)(param_1 + 0x2d8) = uVar2;
    *(undefined4 *)(param_1 + 0x2dc) = uVar3;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x260) = _DAT_140c78390;
    *(undefined4 *)(param_1 + 0x264) = uVar1;
    *(undefined4 *)(param_1 + 0x268) = uVar2;
    *(undefined4 *)(param_1 + 0x26c) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x270) = _DAT_140c783a0;
    *(undefined4 *)(param_1 + 0x274) = uVar1;
    *(undefined4 *)(param_1 + 0x278) = uVar2;
    *(undefined4 *)(param_1 + 0x27c) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x280) = _DAT_140c783b0;
    *(undefined4 *)(param_1 + 0x284) = uVar1;
    *(undefined4 *)(param_1 + 0x288) = uVar2;
    *(undefined4 *)(param_1 + 0x28c) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x290) = _DAT_140c783c0;
    *(undefined4 *)(param_1 + 0x294) = uVar1;
    *(undefined4 *)(param_1 + 0x298) = uVar2;
    *(undefined4 *)(param_1 + 0x29c) = uVar3;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1407b6330(longlong param_1)

{
    float fVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    float fVar5;

    uVar4 = uRam0000000140c7841c;
    uVar3 = uRam0000000140c78418;
    uVar2 = uRam0000000140c78414;
    *(undefined4 *)(param_1 + 0x1e0) = _DAT_140c78410;
    *(undefined4 *)(param_1 + 0x1e4) = uVar2;
    *(undefined4 *)(param_1 + 0x1e8) = uVar3;
    *(undefined4 *)(param_1 + 0x1ec) = uVar4;
    uVar4 = uRam0000000140c7842c;
    uVar3 = uRam0000000140c78428;
    uVar2 = uRam0000000140c78424;
    *(undefined4 *)(param_1 + 0x1f0) = _DAT_140c78420;
    *(undefined4 *)(param_1 + 500) = uVar2;
    *(undefined4 *)(param_1 + 0x1f8) = uVar3;
    *(undefined4 *)(param_1 + 0x1fc) = uVar4;
    uVar4 = uRam0000000140c7843c;
    uVar3 = uRam0000000140c78438;
    uVar2 = uRam0000000140c78434;
    *(undefined4 *)(param_1 + 0x200) = _DAT_140c78430;
    *(undefined4 *)(param_1 + 0x204) = uVar2;
    *(undefined4 *)(param_1 + 0x208) = uVar3;
    *(undefined4 *)(param_1 + 0x20c) = uVar4;
    *(undefined (*) [16])(param_1 + 0x210) =
            CONCAT412(0x3f800000,*(undefined (*) [12])(param_1 + 0x40));
    uVar4 = uRam0000000140c7841c;
    uVar3 = uRam0000000140c78418;
    uVar2 = uRam0000000140c78414;
    *(undefined4 *)(param_1 + 0x220) = _DAT_140c78410;
    *(undefined4 *)(param_1 + 0x224) = uVar2;
    *(undefined4 *)(param_1 + 0x228) = uVar3;
    *(undefined4 *)(param_1 + 0x22c) = uVar4;
    uVar4 = uRam0000000140c7842c;
    uVar3 = uRam0000000140c78428;
    uVar2 = uRam0000000140c78424;
    *(undefined4 *)(param_1 + 0x230) = _DAT_140c78420;
    *(undefined4 *)(param_1 + 0x234) = uVar2;
    *(undefined4 *)(param_1 + 0x238) = uVar3;
    *(undefined4 *)(param_1 + 0x23c) = uVar4;
    uVar4 = uRam0000000140c7843c;
    uVar3 = uRam0000000140c78438;
    uVar2 = uRam0000000140c78434;
    *(undefined4 *)(param_1 + 0x240) = _DAT_140c78430;
    *(undefined4 *)(param_1 + 0x244) = uVar2;
    *(undefined4 *)(param_1 + 0x248) = uVar3;
    *(undefined4 *)(param_1 + 0x24c) = uVar4;
    *(undefined (*) [16])(param_1 + 0x250) =
            CONCAT412(0x3f800000,
                      ZEXT812(CONCAT44(0.0 - *(float *)(param_1 + 0x44),0.0 - *(float *)(param_1 + 0x40))
                      ));
    *(undefined (*) [16])(param_1 + 0x1a0) =
            CONCAT412((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x2c)) * 0.5,
                      CONCAT48((*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x28)) * 0.5,
                               CONCAT44((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24)) * 0.5,
                                        (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x20)) * 0.5))
            );
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    fVar5 = *(float *)(param_1 + 0x1a0);
    fVar1 = *(float *)(param_1 + 0x1a4);
    *(undefined (*) [16])(param_1 + 0x1b0) =
            CONCAT412((fVar5 * *(float *)(param_1 + 0x1ec) + fVar1 * *(float *)(param_1 + 0x1fc) +
                       *(float *)(param_1 + 0x20c) * 0.0 + *(float *)(param_1 + 0x21c)) -
                      *(float *)(param_1 + 0x21c),
                      CONCAT48((fVar5 * *(float *)(param_1 + 0x1e8) + fVar1 * *(float *)(param_1 + 0x1f8)
                                + *(float *)(param_1 + 0x208) * 0.0 + *(float *)(param_1 + 0x218)) -
                               *(float *)(param_1 + 0x218),
                               CONCAT44((fVar5 * *(float *)(param_1 + 0x1e4) +
                                         fVar1 * *(float *)(param_1 + 500) +
                                         *(float *)(param_1 + 0x204) * 0.0 + *(float *)(param_1 + 0x214))
                                        - *(float *)(param_1 + 0x214),
                                        (fVar5 * *(float *)(param_1 + 0x1e0) +
                                         fVar1 * *(float *)(param_1 + 0x1f0) +
                                         *(float *)(param_1 + 0x200) * 0.0 + *(float *)(param_1 + 0x210))
                                        - *(float *)(param_1 + 0x210))));
    *(undefined (*) [16])(param_1 + 0x1d0) =
            CONCAT412((*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c)) * 0.5,
                      CONCAT48((*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28)) * 0.5,
                               CONCAT44((*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24)) * 0.5,
                                        (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20)) * 0.5))
            );
    fVar5 = (*(float *)(param_1 + 0x1d0) + *(float *)(param_1 + 0x1d8)) * 0.5;
    *(float *)(param_1 + 0x1d8) = fVar5;
    *(float *)(param_1 + 0x1d0) = fVar5;
    *(undefined (*) [16])(param_1 + 0x1c0) =
            ZEXT1216(CONCAT48(1.0 / fVar5,CONCAT44(1.0 / *(float *)(param_1 + 0x1d4),1.0 / fVar5)));
    return 1.0 / fVar5;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407b64c0(longlong param_1,float *param_2,float *param_3,uint param_4)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined8 uVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    float *pfVar13;
    uint uVar14;
    ulonglong uVar15;
    int iVar16;
    float *pfVar17;
    float fVar18;
    float fVar20;
    float fVar21;
    undefined auVar19 [16];
    float fVar22;
    float fVar24;
    float fVar25;
    undefined auVar23 [16];
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    undefined auStack392 [32];
    longlong local_168;
    ulonglong local_160;
    undefined local_158 [8];
    undefined8 uStack336;
    undefined local_148 [8];
    float fStack320;
    undefined4 uStack316;
    undefined local_138 [8];
    float fStack304;
    float fStack300;
    float local_128;
    float fStack292;
    float fStack288;
    float fStack284;
    float *local_118;
    float *local_110;
    ulonglong local_c8;

    local_c8 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    if (*(int *)(param_1 + 0x130) != 0) {
        param_4 = param_4 | 4;
    }
    fVar29 = *param_2;
    fVar30 = param_2[1];
    fVar31 = param_2[2];
    uStack336 = (float *)(param_1 + 0x220);
    pfVar17 = (float *)(param_1 + 0x360);
    fVar33 = *param_3;
    fVar22 = param_3[1];
    fVar24 = param_3[2];
    fVar26 = fVar29 * *uStack336 + fVar30 * *(float *)(param_1 + 0x230) +
             fVar31 * *(float *)(param_1 + 0x240) + *(float *)(param_1 + 0x250) +
             *(float *)(param_1 + 0x1a0);
    fVar27 = fVar29 * *(float *)(param_1 + 0x224) + fVar30 * *(float *)(param_1 + 0x234) +
             fVar31 * *(float *)(param_1 + 0x244) + *(float *)(param_1 + 0x254) +
             *(float *)(param_1 + 0x1a4);
    fVar28 = fVar29 * *(float *)(param_1 + 0x228) + fVar30 * *(float *)(param_1 + 0x238) +
             fVar31 * *(float *)(param_1 + 0x248) + *(float *)(param_1 + 600) +
             *(float *)(param_1 + 0x1a8);
    fVar29 = fVar29 * *(float *)(param_1 + 0x22c) + fVar30 * *(float *)(param_1 + 0x23c) +
             fVar31 * *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x25c) +
             *(float *)(param_1 + 0x1ac);
    fVar30 = fVar33 * *uStack336 + fVar22 * *(float *)(param_1 + 0x230) +
             fVar24 * *(float *)(param_1 + 0x240) + *(float *)(param_1 + 0x250) +
             *(float *)(param_1 + 0x1a0);
    fVar31 = fVar33 * *(float *)(param_1 + 0x224) + fVar22 * *(float *)(param_1 + 0x234) +
             fVar24 * *(float *)(param_1 + 0x244) + *(float *)(param_1 + 0x254) +
             *(float *)(param_1 + 0x1a4);
    fVar32 = fVar33 * *(float *)(param_1 + 0x228) + fVar22 * *(float *)(param_1 + 0x238) +
             fVar24 * *(float *)(param_1 + 0x248) + *(float *)(param_1 + 600) +
             *(float *)(param_1 + 0x1a8);
    fVar33 = fVar33 * *(float *)(param_1 + 0x22c) + fVar22 * *(float *)(param_1 + 0x23c) +
             fVar24 * *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x25c) +
             *(float *)(param_1 + 0x1ac);
    if ((*pfVar17 <= *param_2) && (*param_2 < *(float *)(param_1 + 0x370))) {
        if ((*(float *)(param_1 + 0x364) <= param_2[1]) && (param_2[1] < *(float *)(param_1 + 0x374))) {
            if ((((((*(float *)(param_1 + 0x368) <= param_2[2]) &&
                    (param_2[2] < *(float *)(param_1 + 0x378))) && (*pfVar17 <= *param_3)) &&
                  ((*param_3 < *(float *)(param_1 + 0x370) && (*(float *)(param_1 + 0x364) <= param_3[1])))
                 ) && (param_3[1] < *(float *)(param_1 + 0x374))) &&
                (((*(float *)(param_1 + 0x368) <= param_3[2] && (param_3[2] < *(float *)(param_1 + 0x378)))
                  && ((fVar22 = *(float *)(param_1 + 0x1c0) - *(float *)(param_1 + 0x2a0),
                       fVar24 = *(float *)(param_1 + 0x1c4) - *(float *)(param_1 + 0x2b4),
                       fVar25 = *(float *)(param_1 + 0x1c8) - *(float *)(param_1 + 0x2c8),
                        fVar22 * fVar22 + fVar24 * fVar24 + fVar25 * fVar25 < DAT_140c3c7a8 &&
                        (*(uint *)(param_1 + 0x380) == param_4)))))) {
                local_118 = (float *)(param_1 + 0x2e0);
                local_110 = uStack336;
                local_158 = local_118;
                FUN_1401afb10(&local_118,param_1 + 0x260);
                local_118 = (float *)(param_1 + 0x1e0);
                local_110 = (float *)(param_1 + 800);
                _local_158 = CONCAT88(local_110,local_118);
                FUN_1401afb10(&local_118,(float *)(param_1 + 0x2a0));
                goto LAB_1407b6d82;
            }
        }
    }
    local_110 = (float *)(param_1 + 0x1e0);
    fVar24 = *(float *)(param_1 + 0x1d0) * 1.1;
    fVar25 = *(float *)(param_1 + 0x1d4) * 1.1;
    fVar18 = *(float *)(param_1 + 0x1d8) * 1.1;
    auVar19 = minps(_DAT_140c798c0,CONCAT412(fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar26))));
    auVar23 = maxps(_DAT_140c798d0,CONCAT412(fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar26))));
    fVar29 = *local_110;
    fVar22 = *(float *)(param_1 + 0x210);
    auVar23 = maxps(auVar23,CONCAT412(fVar33,CONCAT48(fVar32,CONCAT44(fVar31,fVar30))));
    auVar19 = minps(auVar19,CONCAT412(fVar33,CONCAT48(fVar32,CONCAT44(fVar31,fVar30))));
    fVar34 = (fVar26 + fVar30) * 0.5;
    fVar35 = (fVar27 + fVar31) * 0.5;
    fVar36 = (fVar28 + fVar32) * 0.5;
    fVar32 = SUB164(auVar19,0) - fVar24;
    fVar20 = SUB164(auVar19 >> 0x20,0) - fVar25;
    fVar21 = SUB164(auVar19 >> 0x40,0) - fVar18;
    fVar24 = fVar24 + SUB164(auVar23,0);
    fVar25 = fVar25 + SUB164(auVar23 >> 0x20,0);
    fVar18 = fVar18 + SUB164(auVar23 >> 0x40,0);
    fVar28 = fVar32;
    fVar33 = fVar24;
    if (0.0 < fVar29) {
        fVar28 = fVar24;
        fVar33 = fVar32;
    }
    fVar2 = *(float *)(param_1 + 0x1f0);
    fVar8 = fVar20;
    fVar6 = fVar25;
    if (0.0 < fVar2) {
        fVar8 = fVar25;
        fVar6 = fVar20;
    }
    fVar3 = *(float *)(param_1 + 0x200);
    fVar9 = fVar21;
    fVar4 = fVar18;
    if (0.0 < fVar3) {
        fVar9 = fVar18;
        fVar4 = fVar21;
    }
    fVar5 = *(float *)(param_1 + 0x1e4);
    _local_158 = CONCAT124(CONCAT48(*(undefined4 *)(param_1 + 0x218),
                                    CONCAT44(*(undefined4 *)(param_1 + 0x214),fVar22)) >> 0x20,
                           fVar22 + fVar29 * fVar28 + fVar2 * fVar8 + fVar3 * fVar9) &
                 (undefined  [16])0xffffffffffffffff;
    _local_148 = CONCAT124(CONCAT48(*(undefined4 *)(param_1 + 0x218),
                                    CONCAT44(*(undefined4 *)(param_1 + 0x214),fVar22)) >> 0x20,
                           fVar22 + fVar29 * fVar33 + fVar2 * fVar6 + fVar3 * fVar4) &
                 (undefined  [16])0xffffffffffffffff;
    fVar33 = fVar32;
    fVar29 = fVar24;
    if (0.0 < fVar5) {
        fVar33 = fVar24;
        fVar29 = fVar32;
    }
    fVar22 = *(float *)(param_1 + 500);
    fVar2 = fVar20;
    fVar28 = fVar25;
    if (0.0 < fVar22) {
        fVar2 = fVar25;
        fVar28 = fVar20;
    }
    fVar6 = *(float *)(param_1 + 0x204);
    fVar3 = fVar21;
    fVar8 = fVar18;
    if (0.0 < fVar6) {
        fVar3 = fVar18;
        fVar8 = fVar21;
    }
    fStack292 = local_158._4_4_ + fVar5 * fVar33 + fVar22 * fVar2 + fVar6 * fVar3;
    fVar33 = *(float *)(param_1 + 0x1e8);
    fVar22 = local_148._4_4_ + fVar5 * fVar29 + fVar22 * fVar28 + fVar6 * fVar8;
    local_148 = (longlong *)CONCAT44(fVar22,local_148._0_4_);
    fVar29 = fVar32;
    if (0.0 < fVar33) {
        fVar29 = fVar24;
        fVar24 = fVar32;
    }
    fVar28 = *(float *)(param_1 + 0x1f8);
    fVar32 = fVar20;
    if (0.0 < fVar28) {
        fVar32 = fVar25;
        fVar25 = fVar20;
    }
    fVar20 = *(float *)(param_1 + 0x208);
    fVar2 = fVar21;
    if (0.0 < fVar20) {
        fVar2 = fVar18;
        fVar18 = fVar21;
    }
    fVar24 = fStack320 + fVar33 * fVar24 + fVar28 * fVar25 + fVar20 * fVar18;
    fStack288 = (float)uStack336 + fVar33 * fVar29 + fVar28 * fVar32 + fVar20 * fVar2;
    iVar16 = (int)local_148._0_4_;
    fStack284 = uStack336._4_4_;
    uVar15 = local_c8;
    auVar19 = _local_148;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != local_148._0_4_)) {
        uVar14 = movmskps((int)local_c8,
                          CONCAT88(SUB168(CONCAT412(fVar22,CONCAT48(fVar22,local_148)) >> 0x40,0),
                                   (ulonglong)(uint)local_148._0_4_ | (longlong)local_148 << 0x20));
        uVar15 = (ulonglong)(uVar14 & 1);
        auVar19 = ZEXT416((uint)(float)(iVar16 - (uVar14 & 1)));
    }
    uVar14 = (uint)uVar15;
    iVar16 = (int)fVar22;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar22)) {
        uVar14 = movmskps(uVar14,ZEXT816(CONCAT44(fVar22,fVar22)));
        uVar14 = uVar14 & 1;
        fVar22 = (float)(iVar16 - uVar14);
    }
    iVar16 = (int)fVar24;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar24)) {
        uVar14 = movmskps(uVar14,ZEXT816(CONCAT44(fVar24,fVar24)));
        uVar14 = uVar14 & 1;
        fVar24 = (float)(iVar16 - uVar14);
    }
    _local_138 = CONCAT412(uStack316,CONCAT48(fVar24,CONCAT44(fVar22,SUB164(auVar19,0))));
    iVar16 = (int)local_158._0_4_;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != local_158._0_4_)) {
        uVar14 = movmskps(uVar14,ZEXT816(CONCAT44(local_158._0_4_,local_158._0_4_)));
        uVar14 = uVar14 & 1 ^ 1;
        local_158._0_4_ = (float)(iVar16 + uVar14);
    }
    iVar16 = (int)fStack292;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fStack292)) {
        uVar14 = movmskps(uVar14,ZEXT816(CONCAT44(fStack292,fStack292)));
        uVar14 = uVar14 & 1 ^ 1;
        fStack292 = (float)(iVar16 + uVar14);
    }
    iVar16 = (int)fStack288;
    if ((iVar16 != -0x80000000) && ((float)iVar16 != fStack288)) {
        uVar14 = movmskps(uVar14,ZEXT816(CONCAT44(fStack288,fStack288)));
        fStack288 = (float)(iVar16 + (uVar14 & 1 ^ 1));
    }
    fVar29 = *(float *)(param_1 + 0x1d4);
    fVar33 = *(float *)(param_1 + 0x1d8);
    fVar22 = *(float *)(param_1 + 0x1d0);
    local_118 = (float *)(param_1 + 0x260);
    pfVar1 = (float *)(param_1 + 0x2a0);
    fVar24 = fRam0000000140c78414 * fVar22;
    fVar28 = fRam0000000140c78418 * fVar22;
    fVar32 = fRam0000000140c7841c * fVar22;
    *local_118 = _DAT_140c78410 * fVar22;
    *(float *)(param_1 + 0x264) = fVar24;
    *(float *)(param_1 + 0x268) = fVar28;
    *(float *)(param_1 + 0x26c) = fVar32;
    fVar22 = fRam0000000140c78424 * fVar29;
    fVar24 = fRam0000000140c78428 * fVar29;
    fVar28 = fRam0000000140c7842c * fVar29;
    *(float *)(param_1 + 0x270) = _DAT_140c78420 * fVar29;
    *(float *)(param_1 + 0x274) = fVar22;
    *(float *)(param_1 + 0x278) = fVar24;
    *(float *)(param_1 + 0x27c) = fVar28;
    fVar29 = fRam0000000140c78434 * fVar33;
    fVar22 = fRam0000000140c78438 * fVar33;
    fVar24 = fRam0000000140c7843c * fVar33;
    *(float *)(param_1 + 0x280) = _DAT_140c78430 * fVar33;
    *(float *)(param_1 + 0x284) = fVar29;
    *(float *)(param_1 + 0x288) = fVar22;
    *(float *)(param_1 + 0x28c) = fVar24;
    uVar12 = uRam0000000140c7844c;
    uVar11 = uRam0000000140c78448;
    uVar10 = uRam0000000140c78444;
    *(undefined4 *)(param_1 + 0x290) = _DAT_140c78440;
    *(undefined4 *)(param_1 + 0x294) = uVar10;
    *(undefined4 *)(param_1 + 0x298) = uVar11;
    *(undefined4 *)(param_1 + 0x29c) = uVar12;
    *(float *)(param_1 + 0x290) = fVar34;
    *(float *)(param_1 + 0x294) = fVar35;
    *(float *)(param_1 + 0x298) = fVar36;
    fVar29 = *(float *)(param_1 + 0x1c0);
    fVar33 = *(float *)(param_1 + 0x1c4);
    fVar22 = *(float *)(param_1 + 0x1c8);
    fVar24 = fRam0000000140c78414 * fVar29;
    fVar28 = fRam0000000140c78418 * fVar29;
    fVar32 = fRam0000000140c7841c * fVar29;
    *pfVar1 = _DAT_140c78410 * fVar29;
    *(float *)(param_1 + 0x2a4) = fVar24;
    *(float *)(param_1 + 0x2a8) = fVar28;
    *(float *)(param_1 + 0x2ac) = fVar32;
    fVar29 = fRam0000000140c78424 * fVar33;
    fVar24 = fRam0000000140c78428 * fVar33;
    fVar28 = fRam0000000140c7842c * fVar33;
    *(float *)(param_1 + 0x2b0) = _DAT_140c78420 * fVar33;
    *(float *)(param_1 + 0x2b4) = fVar29;
    *(float *)(param_1 + 0x2b8) = fVar24;
    *(float *)(param_1 + 700) = fVar28;
    fVar29 = fRam0000000140c78434 * fVar22;
    fVar33 = fRam0000000140c78438 * fVar22;
    fVar24 = fRam0000000140c7843c * fVar22;
    *(float *)(param_1 + 0x2c0) = _DAT_140c78430 * fVar22;
    *(float *)(param_1 + 0x2c4) = fVar29;
    *(float *)(param_1 + 0x2c8) = fVar33;
    *(float *)(param_1 + 0x2cc) = fVar24;
    uVar12 = uRam0000000140c7844c;
    uVar11 = uRam0000000140c78448;
    uVar10 = uRam0000000140c78444;
    *(undefined4 *)(param_1 + 0x2d0) = _DAT_140c78440;
    *(undefined4 *)(param_1 + 0x2d4) = uVar10;
    *(undefined4 *)(param_1 + 0x2d8) = uVar11;
    *(undefined4 *)(param_1 + 0x2dc) = uVar12;
    auVar19 = ZEXT416((uint)(0.0 - *(float *)(param_1 + 0x1c0) * fVar34)) &
              (undefined  [16])0xffffffffffffffff;
    *(int *)(param_1 + 0x2d0) = SUB164(auVar19,0);
    *(float *)(param_1 + 0x2d4) = 0.0 - *(float *)(param_1 + 0x1c4) * fVar35;
    *(float *)(param_1 + 0x2d8) = SUB164(auVar19 >> 0x40,0) - *(float *)(param_1 + 0x1c8) * fVar36;
    local_128 = local_158._0_4_;
    local_158 = local_118;
    pfVar13 = uStack336;
    uStack336 = local_110;
    FUN_1401afb10(&local_118,param_1 + 0x2e0);
    _local_158 = CONCAT88(pfVar1,uStack336);
    local_118 = uStack336;
    local_110 = pfVar1;
    FUN_1401afb10(&local_118,param_1 + 800);
    *pfVar17 = local_138._0_4_;
    pfVar17[1] = local_138._4_4_;
    pfVar17[2] = fStack304;
    pfVar17[3] = fStack300;
    pfVar17[4] = local_128;
    pfVar17[5] = fStack292;
    pfVar17[6] = fStack288;
    pfVar17[7] = fStack284;
    *(uint *)(param_1 + 0x380) = param_4;
    local_168 = 0;
    iVar16 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1a0))
            (*(longlong **)(param_1 + 0x10),pfVar17,param_4,local_148);
    if (-1 < iVar16) {
        iVar16 = (**(code **)(*local_148 + 0x10))();
        local_160 = (ulonglong)(uint)(iVar16 * 3);
        FUN_1402626b0(param_1 + 0x388,iVar16 * 3);
        uVar7 = *(undefined8 *)(param_1 + 0x388);
        (**(code **)(*local_148 + 0x18))();
        local_168 = param_1 + 800;
        FUN_1401ade90(uVar7);
        (**(code **)(*local_148 + 8))();
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    LAB_1407b6d82:
    *(float *)(param_1 + 0x170) =
            fVar27 * *(float *)(param_1 + 0x2b0) + fVar26 * *(float *)(param_1 + 0x2a0) +
            *(float *)(param_1 + 0x2c0) * 0.0 + *(float *)(param_1 + 0x2d0);
    *(float *)(param_1 + 0x174) =
            fVar27 * *(float *)(param_1 + 0x2b4) + fVar26 * *(float *)(param_1 + 0x2a4) +
            *(float *)(param_1 + 0x2c4) * 0.0 + *(float *)(param_1 + 0x2d4);
    *(float *)(param_1 + 0x178) =
            fVar27 * *(float *)(param_1 + 0x2b8) + fVar26 * *(float *)(param_1 + 0x2a8) +
            *(float *)(param_1 + 0x2c8) * 0.0 + *(float *)(param_1 + 0x2d8);
    *(float *)(param_1 + 0x17c) =
            fVar27 * *(float *)(param_1 + 700) + fVar26 * *(float *)(param_1 + 0x2ac) +
            *(float *)(param_1 + 0x2cc) * 0.0 + *(float *)(param_1 + 0x2dc);
    fVar29 = fVar30 * *(float *)(param_1 + 0x2a0) + fVar31 * *(float *)(param_1 + 0x2b0) +
             *(float *)(param_1 + 0x2c0) * 0.0 + *(float *)(param_1 + 0x2d0);
    fVar33 = fVar30 * *(float *)(param_1 + 0x2a4) + fVar31 * *(float *)(param_1 + 0x2b4) +
             *(float *)(param_1 + 0x2c4) * 0.0 + *(float *)(param_1 + 0x2d4);
    fVar22 = fVar30 * *(float *)(param_1 + 0x2a8) + fVar31 * *(float *)(param_1 + 0x2b8) +
             *(float *)(param_1 + 0x2c8) * 0.0 + *(float *)(param_1 + 0x2d8);
    fVar30 = fVar30 * *(float *)(param_1 + 0x2ac) + fVar31 * *(float *)(param_1 + 700) +
             *(float *)(param_1 + 0x2cc) * 0.0 + *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x180) = fVar29;
    *(float *)(param_1 + 0x184) = fVar33;
    *(float *)(param_1 + 0x188) = fVar22;
    *(float *)(param_1 + 0x18c) = fVar30;
    *(float *)(param_1 + 400) = fVar29 - *(float *)(param_1 + 0x170);
    *(float *)(param_1 + 0x194) = fVar33 - *(float *)(param_1 + 0x174);
    *(float *)(param_1 + 0x198) = fVar22 - *(float *)(param_1 + 0x178);
    *(float *)(param_1 + 0x19c) = fVar30 - *(float *)(param_1 + 0x17c);
    *(undefined4 *)(param_1 + 0x164) = 0;
    if (*(int *)(param_1 + 0x134) != 0) {
        fVar29 = *(float *)(param_1 + 0x140);
        fVar30 = *(float *)(param_1 + 0x144);
        fVar31 = *(float *)(param_1 + 0x148);
        *(float *)(param_1 + 0x4a0) =
                fVar30 * *(float *)(param_1 + 0x330) + fVar29 * *(float *)(param_1 + 800) +
                fVar31 * *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x350);
        *(float *)(param_1 + 0x4a4) =
                fVar30 * *(float *)(param_1 + 0x334) + fVar29 * *(float *)(param_1 + 0x324) +
                fVar31 * *(float *)(param_1 + 0x344) + *(float *)(param_1 + 0x354);
        *(float *)(param_1 + 0x4a8) =
                fVar30 * *(float *)(param_1 + 0x338) + fVar29 * *(float *)(param_1 + 0x328) +
                fVar31 * *(float *)(param_1 + 0x348) + *(float *)(param_1 + 0x358);
        *(float *)(param_1 + 0x4ac) =
                fVar30 * *(float *)(param_1 + 0x33c) + fVar29 * *(float *)(param_1 + 0x32c) +
                fVar31 * *(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x35c);
        fVar29 = *(float *)(param_1 + 0x150);
        fVar30 = *(float *)(param_1 + 0x154);
        fVar31 = *(float *)(param_1 + 0x158);
        auVar19 = *(undefined (*) [16])(param_1 + 0x300);
        *(undefined (*) [16])(param_1 + 0x4b0) =
                CONCAT412(fVar30 * *(float *)(param_1 + 0x314) + fVar29 * *(float *)(param_1 + 0x310) +
                          fVar31 * *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x31c),
                          CONCAT48(fVar30 * SUB164(auVar19 >> 0x20,0) + fVar29 * SUB164(auVar19,0) +
                                   fVar31 * SUB164(auVar19 >> 0x40,0) + 0.0,
                                   CONCAT44(fVar30 * *(float *)(param_1 + 0x2f4) +
                                            fVar29 * *(float *)(param_1 + 0x2f0) +
                                            fVar31 * *(float *)(param_1 + 0x2f8) +
                                            *(float *)(param_1 + 0x2fc),
                                            fVar30 * 0.0 + fVar29 * *(float *)(param_1 + 0x2e0) +
                                            fVar31 * *(float *)(param_1 + 0x2e8) + 0.0)));
    }
    FUN_1407db4f0(local_c8 ^ (ulonglong)auStack392);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b6f20(longlong param_1)

{
    float *pfVar1;
    float *pfVar2;
    longlong lVar3;
    undefined8 uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;
    float fVar8;
    undefined auVar9 [16];
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    pfVar2 = *(float **)(param_1 + 0x3d0);
    uVar7 = 0;
    fVar15 = *pfVar2;
    fVar16 = pfVar2[1];
    fVar13 = DAT_140dc4f34;
    uVar5 = DAT_140dc4f30;
    do {
        pfVar1 = (float *)(param_1 + (uVar7 + 0x3a) * 0x10);
        fVar12 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar11 = fVar15 * fVar12 + fVar16 * fVar8 + pfVar2[2] * fVar14 + pfVar1[3];
        fVar10 = pfVar2[4] * fVar12 + pfVar2[5] * fVar8 + pfVar2[6] * fVar14 + pfVar1[3];
        fVar12 = pfVar2[8] * fVar12 + pfVar2[9] * fVar8 + pfVar2[10] * fVar14 +
                 *(float *)(param_1 + 0xc + (uVar7 + 0x3a) * 0x10);
        if ((uVar5 & 1) == 0) {
            fVar13 = 1.00001;
            uVar5 = uVar5 | 1;
            DAT_140dc4f34 = 1.00001;
            DAT_140dc4f30 = uVar5;
        }
        fVar8 = (float)((uint)fVar13 ^ 0x80000000);
        if ((((fVar11 < fVar8) && (fVar10 < fVar8)) && (fVar12 < fVar8)) ||
            (((fVar13 < fVar11 && (fVar13 < fVar10)) && (fVar13 < fVar12)))) goto LAB_1407b74d6;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 3);
    fVar8 = pfVar2[4] - fVar15;
    fVar14 = pfVar2[5] - fVar16;
    fVar10 = pfVar2[7] - pfVar2[3];
    fVar15 = pfVar2[8] - fVar15;
    fVar16 = pfVar2[9] - fVar16;
    fVar11 = pfVar2[0xb] - pfVar2[3];
    fVar13 = (pfVar2[10] - pfVar2[2]) * fVar14 - fVar16 * 0.0;
    fVar12 = fVar15 * 0.0 - fVar8 * 0.0;
    *(float *)(param_1 + 0x3e0) = fVar13;
    *(float *)(param_1 + 0x3e4) = fVar12;
    *(float *)(param_1 + 1000) = fVar16 * fVar8 - fVar15 * fVar14;
    *(float *)(param_1 + 0x3ec) = fVar11 * fVar10 - fVar11 * fVar10;
    pfVar2 = *(float **)(param_1 + 0x3d0);
    if (((*(float *)(param_1 + 0x170) - *pfVar2) * fVar13 +
         (*(float *)(param_1 + 0x174) - pfVar2[1]) * fVar12 + 0.0 < 0.0) ||
        (fVar13 = fVar13 * fVar13 + fVar12 * fVar12 + 0.0, fVar13 < _DAT_140c54b18)) {
        LAB_1407b74d6:
        uVar4 = 0;
    }
    else {
        fVar13 = SQRT(fVar13);
        auVar9 = divps(*(undefined (*) [16])(param_1 + 0x3e0),
                       CONCAT412(fVar13,CONCAT48(fVar13,CONCAT44(fVar13,fVar13))));
        *(undefined (*) [16])(param_1 + 0x3e0) = auVar9;
        fVar13 = SUB164(auVar9 >> 0x20,0);
        fVar12 = SUB164(auVar9 >> 0x40,0);
        fVar14 = fVar14 * 0.0 - fVar13 * 0.0;
        fVar8 = SUB164(auVar9,0) * 0.0 - fVar12 * fVar8;
        fVar13 = fVar8 * 0.0 - fVar13 * 0.0;
        fVar12 = SUB164(auVar9,0) * 0.0 - fVar12 * fVar14;
        *(undefined (*) [16])(param_1 + 0x3f0) =
                CONCAT412(*pfVar2 * fVar14 + pfVar2[1] * fVar8 + 0.0,ZEXT812(CONCAT44(fVar8,fVar14))) ^
                (undefined  [16])0x8000000000000000;
        *(undefined (*) [16])(param_1 + 0x400) =
                CONCAT412(*pfVar2 * fVar13 + pfVar2[1] * fVar12 + 0.0,ZEXT812(CONCAT44(fVar12,fVar13))) ^
                (undefined  [16])0x8000000000000000;
        *(undefined (*) [16])(param_1 + 0x410) =
                CONCAT412(*(float *)(*(longlong *)(param_1 + 0x3d0) + 0x10) * (0.0 - fVar13) +
                          *(float *)(*(longlong *)(param_1 + 0x3d0) + 0x14) * (0.0 - fVar12) + 0.0,
                          ZEXT812(CONCAT44(0.0 - fVar12,0.0 - fVar13))) ^
                (undefined  [16])0x8000000000000000;
        lVar3 = *(longlong *)(param_1 + 0x3d0);
        fVar13 = (*(float *)(lVar3 + 0x24) - *(float *)(lVar3 + 0x14)) * 0.0 -
                 *(float *)(param_1 + 0x3e4) * 0.0;
        fVar12 = *(float *)(param_1 + 0x3e0) * 0.0 -
                 *(float *)(param_1 + 1000) * (*(float *)(lVar3 + 0x20) - *(float *)(lVar3 + 0x10));
        fVar8 = fVar12 * 0.0 - *(float *)(param_1 + 0x3e4) * 0.0;
        fVar14 = *(float *)(param_1 + 0x3e0) * 0.0 - *(float *)(param_1 + 1000) * fVar13;
        *(undefined (*) [16])(param_1 + 0x420) =
                CONCAT412(fVar13 * *(float *)(lVar3 + 0x10) + fVar12 * *(float *)(lVar3 + 0x14) + 0.0,
                          ZEXT812(CONCAT44(fVar12,fVar13))) ^ (undefined  [16])0x8000000000000000;
        *(undefined (*) [16])(param_1 + 0x430) =
                CONCAT412(*(float *)(*(longlong *)(param_1 + 0x3d0) + 0x10) * fVar8 +
                          *(float *)(*(longlong *)(param_1 + 0x3d0) + 0x14) * fVar14 + 0.0,
                          ZEXT812(CONCAT44(fVar14,fVar8))) ^ (undefined  [16])0x8000000000000000;
        *(undefined (*) [16])(param_1 + 0x440) =
                CONCAT412(*(float *)(*(longlong *)(param_1 + 0x3d0) + 0x20) * (0.0 - fVar8) +
                          *(float *)(*(longlong *)(param_1 + 0x3d0) + 0x24) * (0.0 - fVar14) + 0.0,
                          ZEXT812(CONCAT44(0.0 - fVar14,0.0 - fVar8))) ^
                (undefined  [16])0x8000000000000000;
        fVar16 = (0.0 - fVar16) * 0.0 - *(float *)(param_1 + 0x3e4) * 0.0;
        fVar15 = *(float *)(param_1 + 0x3e0) * 0.0 - *(float *)(param_1 + 1000) * (0.0 - fVar15);
        fVar13 = fVar15 * 0.0 - *(float *)(param_1 + 0x3e4) * 0.0;
        fVar12 = *(float *)(param_1 + 0x3e0) * 0.0 - *(float *)(param_1 + 1000) * fVar16;
        *(undefined (*) [16])(param_1 + 0x450) =
                CONCAT412(*(float *)(*(longlong *)(param_1 + 0x3d0) + 0x20) * fVar16 +
                          *(float *)(*(longlong *)(param_1 + 0x3d0) + 0x24) * fVar15 + 0.0,
                          ZEXT812(CONCAT44(fVar15,fVar16))) ^ (undefined  [16])0x8000000000000000;
        *(undefined (*) [16])(param_1 + 0x460) =
                CONCAT412(*(float *)(*(longlong *)(param_1 + 0x3d0) + 0x20) * fVar13 +
                          *(float *)(*(longlong *)(param_1 + 0x3d0) + 0x24) * fVar12 + 0.0,
                          ZEXT812(CONCAT44(fVar12,fVar13))) ^ (undefined  [16])0x8000000000000000;
        uVar4 = 1;
        *(undefined (*) [16])(param_1 + 0x470) =
                CONCAT412(**(float **)(param_1 + 0x3d0) * (0.0 - fVar13) +
                          (*(float **)(param_1 + 0x3d0))[1] * (0.0 - fVar12) + 0.0,
                          ZEXT812(CONCAT44(0.0 - fVar12,0.0 - fVar13))) ^
                (undefined  [16])0x8000000000000000;
    }
    return uVar4;
}



void FUN_1407b74e0(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    undefined (*pauVar3) [16];
    ulonglong uVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    undefined (*pauVar8) [16];
    ulonglong uVar9;
    float *pfVar10;
    undefined (*pauVar11) [16];
    ulonglong uVar12;
    ulonglong uVar13;
    float *pfVar14;
    undefined (*pauVar15) [16];
    ulonglong uVar16;
    undefined auVar17 [16];
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;

    *(undefined (*) [16])(param_1 + 0x3a0) =
            CONCAT412(*(float *)(param_1 + 0x170) * 0.9922481 + *(float *)(param_1 + 0x174) * 0.0 + 0.0,
                      ZEXT812(0x3f7e03f8)) ^ (undefined  [16])0x8000000000000000;
    *(undefined (*) [16])(param_1 + 0x3b0) =
            CONCAT412(*(float *)(param_1 + 0x170) * 0.0 + *(float *)(param_1 + 0x174) * 0.9922481 + 0.0,
                      ZEXT412(0x3f7e03f8) << 0x20) ^ (undefined  [16])0x8000000000000000;
    *(undefined (*) [16])(param_1 + 0x3c0) =
            CONCAT412(*(float *)(param_1 + 0x170) * 0.0 + *(float *)(param_1 + 0x174) * 0.0 + 0.0,
                      ZEXT412(0x3f7e03f8) << 0x40) ^ (undefined  [16])0x8000000000000000;
    FUN_1407bc9b0();
    uVar2 = *(ulonglong *)(param_1 + 0x388);
    *(ulonglong *)(param_1 + 0x3d0) = uVar2;
    uVar13 = *(longlong *)(param_1 + 0x390) * 0x10 + uVar2;
    while (uVar2 < uVar13) {
        iVar6 = FUN_1407b6f20();
        if (iVar6 != 0) {
            FUN_1407b7c60();
        }
        *(longlong *)(param_1 + 0x3d0) = *(longlong *)(param_1 + 0x3d0) + 0x30;
        uVar2 = *(ulonglong *)(param_1 + 0x3d0);
    }
    if (*(int *)(param_1 + 0x134) != 0) {
        FUN_1407bca70();
    }
    uVar2 = DAT_140c7f868;
    lVar5 = DAT_140c7f880;
    if (((DAT_140c7f888 <= DAT_140c7f868) &&
         (lVar7 = FUN_14018db00(DAT_140c7f880,DAT_140c7f868,8), lVar5 = DAT_140c7f880,
                 DAT_140c7f880 != lVar7)) &&
        (FUN_1407db590(lVar7,DAT_140c7f880,DAT_140c7f888 * 8), lVar5 = lVar7, DAT_140c7f880 != 0)) {
        (**(code **)(*(longlong *)(DAT_140c7f880 + -0x10) + 8))();
    }
    DAT_140c7f880 = lVar5;
    uVar13 = 0;
    DAT_140c7f888 = uVar2;
    if (uVar2 != 0) {
        if (1 < uVar2) {
            uVar12 = uVar13;
            do {
                uVar13 = uVar12 + 2;
                puVar1 = (ulonglong *)(DAT_140c7f880 + -0x10 + uVar13 * 8);
                *puVar1 = uVar12;
                puVar1[1] = uVar12 + 1;
                uVar12 = uVar13;
            } while (uVar13 < uVar2 - ((uint)uVar2 & 1));
        }
        for (; uVar13 < uVar2; uVar13 = uVar13 + 1) {
            *(ulonglong *)(DAT_140c7f880 + uVar13 * 8) = uVar13;
        }
    }
    FUN_14001fec0(&LAB_1407b6210,DAT_140c7f880,uVar2,DAT_140c7f860);
    pfVar10 = (float *)0x0;
    uVar13 = 0;
    DAT_140c7f878 = 0;
    if (uVar2 != 0) {
        fVar24 = 3.0;
        fVar25 = 0.5;
        pauVar11 = DAT_140c7f870;
        uVar12 = 0;
        do {
            pfVar14 = (float *)(*(longlong *)(DAT_140c7f880 + uVar13 * 8) * 0x20 + DAT_140c7f860);
            if ((pfVar10 == (float *)0x0) ||
                (uVar16 = uVar12, pauVar3 = DAT_140c7f870, uVar4 = DAT_140c7f878,
                        DAT_140c3c7a8 <=
                        (*pfVar14 - *pfVar10) * (*pfVar14 - *pfVar10) +
                        (pfVar14[1] - pfVar10[1]) * (pfVar14[1] - pfVar10[1]) + 0.0)) {
                uVar16 = uVar12 + 1;
                fVar20 = *(float *)(param_1 + 0x1c0) * *pfVar14;
                fVar21 = *(float *)(param_1 + 0x1c4) * pfVar14[1];
                fVar22 = *(float *)(param_1 + 0x1c8) * pfVar14[2];
                fVar23 = *(float *)(param_1 + 0x1cc) * pfVar14[3];
                fVar18 = fVar21 * fVar21;
                fVar19 = fVar20 * fVar20 + fVar18 + 0.0;
                auVar17 = rsqrtss(CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))),
                                  CONCAT412(fVar23 * fVar23,
                                            CONCAT48(fVar22 * fVar22,CONCAT44(fVar18,fVar19))));
                fVar18 = SUB164(auVar17,0);
                fVar18 = (fVar24 - fVar19 * fVar18 * fVar18) * fVar25 * fVar18;
                if (fVar18 <= 0.0) {
                    fVar18 = 0.0;
                }
                fVar20 = fVar18 * fVar20;
                fVar21 = fVar18 * fVar21;
                fVar22 = fVar18 * fVar22;
                fVar18 = fVar18 * fVar23;
                pauVar8 = (undefined (*) [16])FUN_14018db00(pauVar11,uVar16,0x10);
                if (pauVar8[uVar12] != (undefined (*) [16])0x0) {
                    pauVar8[uVar12] = CONCAT412(fVar18,CONCAT48(fVar22,CONCAT44(fVar21,fVar20)));
                }
                pfVar10 = pfVar14;
                pauVar11 = DAT_140c7f870;
                pauVar3 = DAT_140c7f870;
                uVar4 = uVar16;
                if (DAT_140c7f870 != pauVar8) {
                    uVar12 = 0;
                    pauVar15 = DAT_140c7f870;
                    if (DAT_140c7f878 != 0) {
                        uVar9 = DAT_140c7f878;
                        pauVar11 = pauVar8;
                        do {
                            if (pauVar11 != (undefined (*) [16])0x0) {
                                *pauVar11 = *(undefined (*) [16])
                                        (((longlong)pauVar11 - (longlong)pauVar8) + (longlong)pauVar15);
                                uVar9 = DAT_140c7f878;
                                pauVar15 = DAT_140c7f870;
                            }
                            uVar12 = uVar12 + 1;
                            pauVar11 = pauVar11[1];
                        } while (uVar12 < uVar9);
                    }
                    pauVar11 = pauVar8;
                    pauVar3 = pauVar8;
                    if (pauVar15 != (undefined (*) [16])0x0) {
                        (**(code **)(*(longlong *)pauVar15[-1] + 8))(pauVar15[-1]);
                    }
                }
            }
            DAT_140c7f878 = uVar4;
            DAT_140c7f870 = pauVar3;
            uVar13 = uVar13 + 1;
            uVar12 = uVar16;
        } while (uVar13 < uVar2);
    }
    *(undefined4 *)(param_1 + 0x160) = 1;
    return;
}



void FUN_1407b7940(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    undefined (*pauVar3) [16];
    ulonglong uVar4;
    undefined (*pauVar5) [16];
    ulonglong uVar6;
    float *pfVar7;
    undefined (*pauVar8) [16];
    ulonglong uVar9;
    longlong lVar10;
    float *pfVar11;
    ulonglong uVar12;
    undefined (*pauVar13) [16];
    ulonglong uVar14;
    undefined auVar15 [16];
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar22;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar23;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined auVar24 [16];
    undefined auVar25 [16];
    undefined auVar26 [16];

    if ((*(int *)(param_1 + 0x160) != 0) && (DAT_140c7f868 != 0)) {
        auVar25 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        fVar22 = 0.5;
        if (DAT_140c7f868 != 0) {
            lVar10 = DAT_140c7f868 << 5;
            uVar12 = DAT_140c7f868;
            do {
                lVar10 = lVar10 + -0x20;
                uVar12 = uVar12 - 1;
                pfVar7 = (float *)(lVar10 + DAT_140c7f860);
                if (*pfVar7 * *(float *)(param_1 + 0x2e4) + pfVar7[1] * *(float *)(param_1 + 0x2f4) +
                    pfVar7[2] * *(float *)(param_1 + 0x304) < fVar22) {
                    FUN_1407bcb60();
                }
            } while (uVar12 != 0);
        }
        uVar2 = DAT_140c7f868;
        FUN_14004eed0(&DAT_140c7f880,DAT_140c7f868);
        uVar12 = 0;
        if (uVar2 != 0) {
            if (1 < uVar2) {
                uVar9 = uVar12;
                do {
                    uVar12 = uVar9 + 2;
                    puVar1 = (ulonglong *)(DAT_140c7f880 + -0x10 + uVar12 * 8);
                    *puVar1 = uVar9;
                    puVar1[1] = uVar9 + 1;
                    uVar9 = uVar12;
                } while (uVar12 < uVar2 - ((uint)uVar2 & 1));
            }
            for (; uVar12 < uVar2; uVar12 = uVar12 + 1) {
                *(ulonglong *)(DAT_140c7f880 + uVar12 * 8) = uVar12;
            }
        }
        FUN_14001fec0(&LAB_1407b6210,DAT_140c7f880,uVar2,DAT_140c7f860);
        FUN_1402626b0(&DAT_140c7f870,0);
        pfVar7 = (float *)0x0;
        uVar12 = 0;
        if (uVar2 != 0) {
            auVar24 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
            fVar23 = 3.0;
            auVar26 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
            pauVar8 = DAT_140c7f870;
            uVar9 = DAT_140c7f878;
            do {
                pfVar11 = (float *)(*(longlong *)(DAT_140c7f880 + uVar12 * 8) * 0x20 + DAT_140c7f860);
                if ((pfVar7 == (float *)0x0) ||
                    (uVar14 = uVar9, pauVar3 = DAT_140c7f870, uVar4 = DAT_140c7f878,
                            DAT_140c3c7a8 <=
                            (*pfVar11 - *pfVar7) * (*pfVar11 - *pfVar7) +
                            (pfVar11[1] - pfVar7[1]) * (pfVar11[1] - pfVar7[1]) + 0.0)) {
                    uVar14 = uVar9 + 1;
                    fVar18 = *(float *)(param_1 + 0x1c0) * *pfVar11;
                    fVar19 = *(float *)(param_1 + 0x1c4) * pfVar11[1];
                    fVar20 = *(float *)(param_1 + 0x1c8) * pfVar11[2];
                    fVar21 = *(float *)(param_1 + 0x1cc) * pfVar11[3];
                    fVar16 = fVar19 * fVar19;
                    fVar17 = fVar18 * fVar18 + fVar16 + 0.0;
                    auVar15 = rsqrtss(CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))),
                                      CONCAT412(fVar21 * fVar21,
                                                CONCAT48(fVar20 * fVar20,CONCAT44(fVar16,fVar17))));
                    fVar16 = SUB164(auVar15,0);
                    fVar16 = (fVar23 - fVar17 * fVar16 * fVar16) * fVar22 * fVar16;
                    if (fVar16 <= 0.0) {
                        fVar16 = 0.0;
                    }
                    fVar18 = fVar16 * fVar18;
                    fVar19 = fVar16 * fVar19;
                    fVar20 = fVar16 * fVar20;
                    fVar16 = fVar16 * fVar21;
                    pauVar5 = (undefined (*) [16])
                            FUN_14018db00(pauVar8,uVar14,0x10,pauVar8,auVar24,auVar25,auVar26);
                    if (pauVar5[uVar9] != (undefined (*) [16])0x0) {
                        pauVar5[uVar9] = CONCAT412(fVar16,CONCAT48(fVar20,CONCAT44(fVar19,fVar18)));
                    }
                    pfVar7 = pfVar11;
                    pauVar8 = DAT_140c7f870;
                    pauVar3 = DAT_140c7f870;
                    uVar4 = uVar14;
                    if (DAT_140c7f870 != pauVar5) {
                        uVar9 = 0;
                        pauVar13 = DAT_140c7f870;
                        if (DAT_140c7f878 != 0) {
                            uVar6 = DAT_140c7f878;
                            pauVar8 = pauVar5;
                            do {
                                if (pauVar8 != (undefined (*) [16])0x0) {
                                    *pauVar8 = *(undefined (*) [16])
                                            (((longlong)pauVar8 - (longlong)pauVar5) + (longlong)pauVar13);
                                    uVar6 = DAT_140c7f878;
                                    pauVar13 = DAT_140c7f870;
                                }
                                uVar9 = uVar9 + 1;
                                pauVar8 = pauVar8[1];
                            } while (uVar9 < uVar6);
                        }
                        pauVar8 = pauVar5;
                        pauVar3 = pauVar5;
                        if (pauVar13 != (undefined (*) [16])0x0) {
                            (**(code **)(*(longlong *)pauVar13[-1] + 8))(pauVar13[-1]);
                        }
                    }
                }
                DAT_140c7f878 = uVar4;
                DAT_140c7f870 = pauVar3;
                uVar12 = uVar12 + 1;
                uVar9 = uVar14;
            } while (uVar12 < uVar2);
        }
    }
    return;
}



void FUN_1407b7c60(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    uint uVar3;
    uint uVar4;
    float *pfVar5;
    longlong lVar6;

    uVar3 = 0;
    pfVar5 = (float *)(param_1 + 0x3f0);
    uVar1 = 1;
    lVar6 = 9;
    uVar4 = 0;
    do {
        if (0.0 <= *(float *)(param_1 + 0x170) * *pfVar5 + *(float *)(param_1 + 0x174) * pfVar5[1] + 0.0
                   + pfVar5[3]) {
            uVar4 = uVar4 | uVar1;
        }
        uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
        pfVar5 = pfVar5 + 4;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar2 = &DAT_140b53bfc;
    do {
        if ((puVar2[1] & uVar4) == *puVar2) goto LAB_1407b7cda;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 0xd;
    } while (uVar3 < 7);
    uVar3 = 7;
    LAB_1407b7cda:
    FUN_1407b7d00(param_1,&DAT_140b53bd0 + (longlong)(int)uVar3 * 0x34);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407b7d00(longlong param_1,int *param_2)

{
    int iVar1;
    float *pfVar2;
    float *pfVar3;
    undefined auVar4 [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined local_48 [8];
    float fStack64;
    float fStack60;
    float local_38;
    float fStack52;
    float fStack48;
    undefined local_28 [8];
    float fStack32;
    longlong local_18;

    iVar1 = *param_2;
    if (iVar1 == 1) {
        local_18 = *(longlong *)(param_1 + 0x3d0);
        pfVar2 = (float *)(local_18 + (ulonglong)(uint)param_2[1] * 0x10);
        fVar5 = *(float *)(param_1 + 0x170) - *pfVar2;
        fVar6 = *(float *)(param_1 + 0x174) - pfVar2[1];
        fVar7 = *(float *)(param_1 + 0x178) - pfVar2[2];
        fVar8 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        if ((1e-05 <= fVar8) && (fVar8 <= 1.007813)) {
            _local_28 = divps(CONCAT412(*(float *)(param_1 + 0x17c) - pfVar2[3],
                                        CONCAT48(fVar7,CONCAT44(fVar6,fVar5))),
                              CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))));
            FUN_1407bca70(param_1,local_28);
        }
    }
    else {
        if (iVar1 == 2) {
            pfVar3 = (float *)((ulonglong)(uint)param_2[2] * 0x10 + *(longlong *)(param_1 + 0x3d0));
            pfVar2 = (float *)((ulonglong)(uint)param_2[1] * 0x10 + *(longlong *)(param_1 + 0x3d0));
            fVar7 = *pfVar3 - *pfVar2;
            fVar8 = pfVar3[1] - pfVar2[1];
            fVar9 = pfVar3[2] - pfVar2[2];
            fVar10 = pfVar3[3] - pfVar2[3];
            fVar5 = fVar8 * fVar8;
            fVar6 = fVar7 * fVar7 + fVar5 + fVar9 * fVar9;
            auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                             CONCAT412(fVar10 * fVar10,CONCAT48(fVar9 * fVar9,CONCAT44(fVar5,fVar6))));
            fVar5 = SUB164(auVar4,0);
            fVar5 = (3.0 - fVar6 * fVar5 * fVar5) * 0.5 * fVar5;
            if (fVar5 <= 0.0) {
                fVar5 = 0.0;
            }
            _local_48 = CONCAT412(fVar5 * fVar10,
                                  CONCAT48(fVar5 * fVar9,CONCAT44(fVar5 * fVar8,fVar5 * fVar7)));
            FUN_1401ae000(0,SUB168(auVar4,0),local_28,&local_38,local_48);
            fVar7 = *(float *)(param_1 + 0x170) - *pfVar2;
            fVar8 = *(float *)(param_1 + 0x174) - pfVar2[1];
            fVar5 = *(float *)(param_1 + 0x178) - pfVar2[2];
            fVar9 = *(float *)(param_1 + 0x17c) - pfVar2[3];
            fVar6 = local_38 * fVar7 + fStack52 * fVar8 + fStack48 * fVar5;
            fVar5 = local_28._0_4_ * fVar7 + local_28._4_4_ * fVar8 + fStack32 * fVar5;
            fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
            if ((1e-05 <= fVar5) && (fVar5 <= 1.007813)) {
                local_18 = *(undefined8 *)(param_1 + 0x3d0);
                fVar5 = fVar8 * 0.0 - local_48._4_4_ * 0.0;
                fVar10 = local_48._0_4_ * 0.0 - fStack64 * fVar7;
                fVar9 = fStack60 * fVar9 - fStack60 * fVar9;
                fVar6 = local_48._4_4_ * 0.0 - fVar10 * 0.0;
                fVar7 = fVar5 * fStack64 -
                        (local_48._4_4_ * fVar7 - local_48._0_4_ * fVar8) * local_48._0_4_;
                fVar8 = fVar10 * local_48._0_4_ - fVar5 * local_48._4_4_;
                fVar9 = fVar9 * fStack60 - fVar9 * fStack60;
                auVar4 = CONCAT124(SUB1612(CONCAT412(fVar9 * fVar9,
                                                     CONCAT48(fVar8 * fVar8,
                                                              CONCAT44(fVar7 * fVar7,fVar6 * fVar6))) >>
                                                                                                      0x20,0),fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
                auVar4 = rsqrtss(auVar4,auVar4);
                fVar5 = SUB164(auVar4,0);
                _local_28 = CONCAT48(fVar5 * fVar8,CONCAT44(fVar5 * fVar7,fVar5 * fVar6));
                _local_28 = CONCAT412(fVar5 * fVar9,_local_28);
                FUN_1407bca70();
            }
            return;
        }
        if (iVar1 == 3) {
            FUN_1407b7f60(param_1,param_2,
                          (ulonglong)(uint)param_2[1] * 0x10 + *(longlong *)(param_1 + 0x3d0),
                    param_1 + 0x3e0);
            return;
        }
    }
    return;
}



void FUN_1407b7f60(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    undefined local_28 [16];
    undefined8 local_18;

    fVar2 = (*(float *)(param_1 + 0x170) - *param_3) * *param_4 +
            (*(float *)(param_1 + 0x174) - param_3[1]) * param_4[1] + 0.0;
    if (fVar2 < 0.0) {
        fVar1 = -1.0;
    }
    else {
        fVar1 = 1.0;
    }
    if (fVar1 * fVar2 <= 1.007813) {
        local_18 = *(undefined8 *)(param_1 + 0x3d0);
        local_28 = CONCAT412(fVar1 * param_4[3],
                             CONCAT48(fVar1 * param_4[2],CONCAT44(fVar1 * param_4[1],fVar1 * *param_4)))
                ;
        FUN_1407bca70(param_1,local_28);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b7fe0(longlong param_1,float *param_2)

{
    float fVar1;
    float fVar2;
    ulonglong uVar3;
    float *pfVar4;

    if (DAT_140c7f878 != 0) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        if (_DAT_140c54b18 <= fVar1 * fVar1 + fVar2 * fVar2 + 0.0) {
            uVar3 = 0;
            pfVar4 = DAT_140c7f870;
            if (DAT_140c7f878 != 0) {
                do {
                    if (*pfVar4 * *(float *)(param_1 + 0x1d0) *
                        (fVar2 * *(float *)(param_1 + 0x330) + fVar1 * *(float *)(param_1 + 800) +
                         *(float *)(param_1 + 0x340) * 0.0) +
                        pfVar4[1] *
                        *(float *)(param_1 + 0x1d4) *
                        (fVar2 * *(float *)(param_1 + 0x334) + fVar1 * *(float *)(param_1 + 0x324) +
                         *(float *)(param_1 + 0x344) * 0.0) + 0.0 < 1e-05) {
                        return 1;
                    }
                    uVar3 = uVar3 + 1;
                    pfVar4 = pfVar4 + 4;
                } while (uVar3 < DAT_140c7f878);
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b80b0(longlong param_1,float *param_2)

{
    float fVar1;
    float fVar2;
    ulonglong uVar3;
    float *pfVar4;

    if (DAT_140c7f878 != 0) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        if (_DAT_140c54b18 <= fVar1 * fVar1 + fVar2 * fVar2 + 0.0) {
            uVar3 = 0;
            pfVar4 = DAT_140c7f870;
            if (DAT_140c7f878 != 0) {
                do {
                    if (*pfVar4 * *(float *)(param_1 + 0x1d0) *
                        (fVar2 * *(float *)(param_1 + 0x330) + fVar1 * *(float *)(param_1 + 800) +
                         *(float *)(param_1 + 0x340) * 0.0) +
                        pfVar4[1] *
                        *(float *)(param_1 + 0x1d4) *
                        (fVar2 * *(float *)(param_1 + 0x334) + fVar1 * *(float *)(param_1 + 0x324) +
                         *(float *)(param_1 + 0x344) * 0.0) + 0.0 < -1e-05) {
                        return 0;
                    }
                    uVar3 = uVar3 + 1;
                    pfVar4 = pfVar4 + 4;
                } while (uVar3 < DAT_140c7f878);
            }
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407b8180(longlong param_1)

{
    undefined (*pauVar1) [16];
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;
    float *pfVar7;
    longlong lVar8;
    uint uVar9;
    float *pfVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    uint uVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined auStack456 [32];
    longlong local_1a8;
    undefined local_198 [16];
    undefined local_188 [16];
    undefined local_178 [16];
    undefined4 local_168;
    undefined local_158 [16];
    undefined local_148 [16];
    undefined local_138 [16];
    undefined4 local_128;
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined local_108 [16];
    undefined local_f8 [16];
    undefined4 local_e8;
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack456;
    local_1a8 = param_1;
    FUN_1407bcc60();
    uVar11 = DAT_140c7f878;
    if (DAT_140c7f878 < 2) {
        *(undefined4 *)(param_1 + 0x164) = 1;
    }
    else {
        if ((DAT_140dc4f38 & 1) == 0) {
            DAT_140dc4f38 = DAT_140dc4f38 | 1;
            _DAT_140dc4f40 = 1.0;
            fRam0000000140dc4f44 = 0.0;
            fRam0000000140dc4f48 = 0.0;
            fRam0000000140dc4f4c = 0.0;
        }
        if ((DAT_140dc4f38 & 2) == 0) {
            DAT_140dc4f38 = DAT_140dc4f38 | 2;
            _DAT_140dc4f50 = 0.0;
            fRam0000000140dc4f54 = 1.0;
            fRam0000000140dc4f58 = 0.0;
            fRam0000000140dc4f5c = 0.0;
        }
        if ((DAT_140dc4f38 & 4) == 0) {
            DAT_140dc4f38 = DAT_140dc4f38 | 4;
            _DAT_140dc4f60 = 0.0;
            fRam0000000140dc4f64 = 0.0;
            fRam0000000140dc4f68 = 1.0;
            fRam0000000140dc4f6c = 0.0;
        }
        local_198 = CONCAT412(fRam0000000140dc4f6c,
                              CONCAT48(fRam0000000140dc4f68,
                                       CONCAT44(fRam0000000140dc4f64,_DAT_140dc4f60)));
        local_188._0_8_ = CONCAT44(fRam0000000140dc4f44,_DAT_140dc4f40);
        local_188._0_12_ = CONCAT48(fRam0000000140dc4f48,local_188._0_8_);
        local_188 = CONCAT412(fRam0000000140dc4f4c,local_188._0_12_);
        local_168 = 1;
        local_178 = CONCAT412(fRam0000000140dc4f5c,
                              CONCAT48(fRam0000000140dc4f58,
                                       CONCAT44(fRam0000000140dc4f54,_DAT_140dc4f50)));
        FUN_1407bcd40();
        local_168 = 1;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        local_198._0_8_ = CONCAT44(fRam0000000140dc4f64,_DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fRam0000000140dc4f6c,local_198._0_12_);
        local_178 = CONCAT412(0.0 - fRam0000000140dc4f4c,
                              CONCAT48(0.0 - fRam0000000140dc4f48,
                                       CONCAT44(0.0 - fRam0000000140dc4f44,0.0 - _DAT_140dc4f40)));
        local_188._0_8_ = CONCAT44(fRam0000000140dc4f54,_DAT_140dc4f50);
        local_188._0_12_ = CONCAT48(fRam0000000140dc4f58,local_188._0_8_);
        local_188 = CONCAT412(fRam0000000140dc4f5c,local_188._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_188 = CONCAT412(fVar37 - fRam0000000140dc4f4c,
                              CONCAT48(fVar36 - fRam0000000140dc4f48,
                                       CONCAT44(fVar35 - fRam0000000140dc4f44,fVar34 - _DAT_140dc4f40)))
                ;
        local_178 = CONCAT412(fVar37 - fRam0000000140dc4f5c,
                              CONCAT48(fVar36 - fRam0000000140dc4f58,
                                       CONCAT44(fVar35 - fRam0000000140dc4f54,fVar34 - _DAT_140dc4f50)))
                ;
        local_198._0_8_ = CONCAT44(fRam0000000140dc4f64,_DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fRam0000000140dc4f6c,local_198._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_198._0_8_ = CONCAT44(fRam0000000140dc4f64,_DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fRam0000000140dc4f6c,local_198._0_12_);
        local_188 = CONCAT412(fVar37 - fRam0000000140dc4f5c,
                              CONCAT48(fVar36 - fRam0000000140dc4f58,
                                       CONCAT44(fVar35 - fRam0000000140dc4f54,fVar34 - _DAT_140dc4f50)))
                ;
        local_178._0_8_ = CONCAT44(fRam0000000140dc4f44,_DAT_140dc4f40);
        local_178._0_12_ = CONCAT48(fRam0000000140dc4f48,local_178._0_8_);
        local_178 = CONCAT412(fRam0000000140dc4f4c,local_178._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_178._0_8_ = CONCAT44(fRam0000000140dc4f44,_DAT_140dc4f40);
        local_178._0_12_ = CONCAT48(fRam0000000140dc4f48,local_178._0_8_);
        local_178 = CONCAT412(fRam0000000140dc4f4c,local_178._0_12_);
        local_198._0_8_ = CONCAT44(fVar35 - fRam0000000140dc4f64,fVar34 - _DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fVar36 - fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fVar37 - fRam0000000140dc4f6c,local_198._0_12_);
        local_188._0_8_ = CONCAT44(fRam0000000140dc4f54,_DAT_140dc4f50);
        local_188._0_12_ = CONCAT48(fRam0000000140dc4f58,local_188._0_8_);
        local_188 = CONCAT412(fRam0000000140dc4f5c,local_188._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_198._0_8_ = CONCAT44(fVar35 - fRam0000000140dc4f64,fVar34 - _DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fVar36 - fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fVar37 - fRam0000000140dc4f6c,local_198._0_12_);
        local_188 = CONCAT412(fVar37 - fRam0000000140dc4f4c,
                              CONCAT48(fVar36 - fRam0000000140dc4f48,
                                       CONCAT44(fVar35 - fRam0000000140dc4f44,fVar34 - _DAT_140dc4f40)))
                ;
        local_178._0_8_ = CONCAT44(fRam0000000140dc4f54,_DAT_140dc4f50);
        local_178._0_12_ = CONCAT48(fRam0000000140dc4f58,local_178._0_8_);
        local_178 = CONCAT412(fRam0000000140dc4f5c,local_178._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_188 = CONCAT412(fVar37 - fRam0000000140dc4f5c,
                              CONCAT48(fVar36 - fRam0000000140dc4f58,
                                       CONCAT44(fVar35 - fRam0000000140dc4f54,fVar34 - _DAT_140dc4f50)))
                ;
        local_178 = CONCAT412(fVar37 - fRam0000000140dc4f4c,
                              CONCAT48(fVar36 - fRam0000000140dc4f48,
                                       CONCAT44(fVar35 - fRam0000000140dc4f44,fVar34 - _DAT_140dc4f40)))
                ;
        local_198._0_8_ = CONCAT44(fVar35 - fRam0000000140dc4f64,fVar34 - _DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fVar36 - fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fVar37 - fRam0000000140dc4f6c,local_198._0_12_);
        FUN_1407bcd40();
        local_168 = 1;
        local_198._0_8_ = CONCAT44(fVar35 - fRam0000000140dc4f64,fVar34 - _DAT_140dc4f60);
        local_198._0_12_ = CONCAT48(fVar36 - fRam0000000140dc4f68,local_198._0_8_);
        local_198 = CONCAT412(fVar37 - fRam0000000140dc4f6c,local_198._0_12_);
        local_188._0_8_ = CONCAT44(fRam0000000140dc4f44,_DAT_140dc4f40);
        local_188._0_12_ = CONCAT48(fRam0000000140dc4f48,local_188._0_8_);
        local_188 = CONCAT412(fRam0000000140dc4f4c,local_188._0_12_);
        local_178 = CONCAT412(fVar37 - fRam0000000140dc4f5c,
                              CONCAT48(fVar36 - fRam0000000140dc4f58,
                                       CONCAT44(fVar35 - fRam0000000140dc4f54,fVar34 - _DAT_140dc4f50)))
                ;
        FUN_1407bcd40();
        if (uVar11 == 0) {
            *(undefined4 *)(param_1 + 0x164) = 1;
        }
        else {
            lVar13 = 0;
            fVar35 = 1.0;
            uVar33 = 0x80000000;
            fVar36 = -1e-05;
            uVar9 = (uint)local_1a8;
            do {
                lVar2 = DAT_140c7f870;
                lVar8 = 0;
                auVar14 = local_188;
                for (lVar12 = DAT_140c7f898; local_188 = auVar14, lVar12 != 0; lVar12 = lVar12 + -1) {
                    uVar4 = 0;
                    pfVar10 = (float *)(DAT_140c7f890 + lVar8);
                    if (pfVar10[0xc] != 0.0) {
                        fVar37 = *(float *)(lVar13 + lVar2);
                        fVar17 = ((float *)(lVar13 + lVar2))[1];
                        pfVar7 = pfVar10;
                        uVar5 = uVar4;
                        do {
                            uVar3 = uVar4;
                            if (1e-05 <= *pfVar7 * fVar37 + pfVar7[1] * fVar17 + 0.0) {
                                uVar5 = uVar5 + 1;
                                uVar3 = (uint)local_1a8;
                                uVar9 = uVar4;
                            }
                            local_1a8._0_4_ = uVar3;
                            uVar4 = uVar4 + 1;
                            pfVar7 = pfVar7 + 4;
                        } while (uVar4 < 3);
                        if (uVar5 == 0) {
                            pfVar10[0xc] = 0.0;
                        }
                        else if (uVar5 == 1) {
                            pfVar10[0xc] = 0.0;
                            fVar37 = *(float *)(lVar13 + lVar2);
                            fVar17 = ((float *)(lVar13 + lVar2))[1];
                            pfVar7 = pfVar10 + (ulonglong)uVar9 * 4;
                            local_118 = *pfVar7;
                            fStack276 = pfVar7[1];
                            fStack272 = pfVar7[2];
                            fStack268 = pfVar7[3];
                            pfVar7 = pfVar10 + (ulonglong)((uVar9 + 1) % 3) * 4;
                            fVar19 = (float)((uint)(local_118 * fVar37 + fStack276 * fVar17 + 0.0) ^ uVar33);
                            pfVar10 = pfVar10 + (ulonglong)((uVar9 + 2) % 3) * 4;
                            fVar21 = (*pfVar7 - local_118) * fVar37 + (pfVar7[1] - fStack276) * fVar17 + 0.0;
                            fVar17 = (*pfVar10 - local_118) * fVar37 + (pfVar10[1] - fStack276) * fVar17 + 0.0;
                            fVar37 = fVar35;
                            if (fVar21 <= fVar36) {
                                fVar37 = fVar19 / fVar21;
                            }
                            fVar21 = fVar35;
                            if (fVar17 <= fVar36) {
                                fVar21 = fVar19 / fVar17;
                            }
                            local_e8 = 1;
                            fVar23 = fVar21 * (*pfVar10 - local_118) + local_118;
                            fVar26 = fVar21 * (pfVar10[1] - fStack276) + fStack276;
                            fVar24 = fVar21 * (pfVar10[2] - fStack272) + fStack272;
                            fVar21 = fVar21 * (pfVar10[3] - fStack268) + fStack268;
                            fVar17 = fVar26 * fVar26;
                            fVar19 = fVar23 * fVar23 + fVar17 + 0.0;
                            auVar14 = rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))),
                                              CONCAT412(fVar21 * fVar21,
                                                        CONCAT48(fVar24 * fVar24,CONCAT44(fVar17,fVar19))));
                            fVar17 = SUB164(auVar14,0);
                            fVar17 = (3.0 - fVar19 * fVar17 * fVar17) * 0.5 * fVar17;
                            if (fVar17 <= fVar34) {
                                fVar17 = fVar34;
                            }
                            local_f8 = CONCAT412(fVar17 * fVar21,
                                                 CONCAT48(fVar17 * fVar24,
                                                          CONCAT44(fVar17 * fVar26,fVar17 * fVar23)));
                            fVar19 = fVar37 * (*pfVar7 - local_118) + local_118;
                            fVar21 = fVar37 * (pfVar7[1] - fStack276) + fStack276;
                            fVar23 = fVar37 * (pfVar7[2] - fStack272) + fStack272;
                            fVar26 = fVar37 * (pfVar7[3] - fStack268) + fStack268;
                            fVar37 = fVar21 * fVar21;
                            fVar17 = fVar19 * fVar19 + fVar37 + 0.0;
                            auVar14 = rsqrtss(CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(fVar37,fVar37))),
                                              CONCAT412(fVar26 * fVar26,
                                                        CONCAT48(fVar23 * fVar23,CONCAT44(fVar37,fVar17))));
                            fVar37 = SUB164(auVar14,0);
                            fVar37 = (3.0 - fVar17 * fVar37 * fVar37) * 0.5 * fVar37;
                            if (fVar37 <= fVar34) {
                                fVar37 = fVar34;
                            }
                            local_108 = CONCAT412(fVar37 * fVar26,
                                                  CONCAT48(fVar37 * fVar23,
                                                           CONCAT44(fVar37 * fVar21,fVar37 * fVar19)));
                            LAB_1407b88c0:
                            FUN_1407bcd40();
                            auVar14 = local_188;
                        }
                        else if (uVar5 == 2) {
                            pfVar7 = pfVar10 + (ulonglong)(uint)local_1a8 * 4;
                            fVar19 = *pfVar7;
                            fVar21 = pfVar7[1];
                            fVar23 = pfVar7[2];
                            fVar26 = pfVar7[3];
                            pauVar1 = (undefined (*) [16])(pfVar10 + (ulonglong)(((uint)local_1a8 + 1) % 3) * 4);
                            fVar24 = *(float *)*pauVar1;
                            fVar28 = *(float *)((longlong)*pauVar1 + 4);
                            fVar29 = *(float *)((longlong)*pauVar1 + 8);
                            fVar30 = *(float *)((longlong)*pauVar1 + 0xc);
                            local_188 = *pauVar1;
                            fVar27 = (float)((uint)(fVar19 * fVar37 + fVar21 * fVar17 + 0.0) ^ uVar33);
                            uVar6 = (ulonglong)(((uint)local_1a8 + 2) % 3);
                            pfVar7 = pfVar10 + uVar6 * 4;
                            fVar37 = *pfVar7;
                            fVar17 = pfVar7[1];
                            fVar31 = pfVar7[2];
                            fVar32 = pfVar7[3];
                            if (1e-05 <= fVar27) {
                                pfVar10[0xc] = 0.0;
                                fVar18 = (fVar24 - fVar19) * *(float *)(lVar13 + lVar2) +
                                         (fVar28 - fVar21) * ((float *)(lVar13 + lVar2))[1] + 0.0;
                                fVar15 = (fVar37 - fVar19) * *(float *)(lVar13 + lVar2) +
                                         (fVar17 - fVar21) * ((float *)(lVar13 + lVar2))[1] + 0.0;
                                fVar16 = fVar35;
                                if (1e-05 <= fVar18) {
                                    fVar16 = fVar27 / fVar18;
                                }
                                fVar18 = fVar35;
                                if (1e-05 <= fVar15) {
                                    fVar18 = fVar27 / fVar15;
                                }
                                local_168 = 1;
                                fVar15 = fVar16 * (fVar24 - fVar19) + fVar19;
                                fVar20 = fVar16 * (fVar28 - fVar21) + fVar21;
                                fVar22 = fVar16 * (fVar29 - fVar23) + fVar23;
                                fVar25 = fVar16 * (fVar30 - fVar26) + fVar26;
                                fVar27 = fVar20 * fVar20;
                                fVar16 = fVar15 * fVar15 + fVar27 + 0.0;
                                auVar14 = rsqrtss(CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(fVar27,fVar27))),
                                                  CONCAT412(fVar25 * fVar25,
                                                            CONCAT48(fVar22 * fVar22,CONCAT44(fVar27,fVar16))));
                                fVar27 = SUB164(auVar14,0);
                                fVar27 = (3.0 - fVar16 * fVar27 * fVar27) * 0.5 * fVar27;
                                if (fVar27 <= fVar34) {
                                    fVar27 = fVar34;
                                }
                                local_198 = CONCAT412(fVar27 * fVar25,
                                                      CONCAT48(fVar27 * fVar22,
                                                               CONCAT44(fVar27 * fVar20,fVar27 * fVar15)));
                                fVar19 = fVar18 * (fVar37 - fVar19) + fVar19;
                                fVar21 = fVar18 * (fVar17 - fVar21) + fVar21;
                                fVar23 = fVar18 * (fVar31 - fVar23) + fVar23;
                                fVar26 = fVar18 * (fVar32 - fVar26) + fVar26;
                                fVar27 = fVar21 * fVar21;
                                fVar16 = fVar19 * fVar19 + fVar27 + 0.0;
                                auVar14 = rsqrtss(CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(fVar27,fVar27))),
                                                  CONCAT412(fVar26 * fVar26,
                                                            CONCAT48(fVar23 * fVar23,CONCAT44(fVar27,fVar16))));
                                fVar27 = SUB164(auVar14,0);
                                fVar27 = (3.0 - fVar16 * fVar27 * fVar27) * 0.5 * fVar27;
                                if (fVar27 <= fVar34) {
                                    fVar27 = fVar34;
                                }
                                fVar19 = fVar27 * fVar19;
                                fVar21 = fVar27 * fVar21;
                                fVar23 = fVar27 * fVar23;
                                fVar27 = fVar27 * fVar26;
                                local_178 = CONCAT412(fVar27,CONCAT48(fVar23,CONCAT44(fVar21,fVar19)));
                                FUN_1407bcd40(SUB168(auVar14,0),uVar6,local_198);
                                local_158 = CONCAT412(fVar27,CONCAT48(fVar23,CONCAT44(fVar21,fVar19)));
                                local_128 = 1;
                                local_148 = CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(fVar28,fVar24)));
                                local_138 = CONCAT412(fVar32,CONCAT48(fVar31,CONCAT44(fVar17,fVar37)));
                                goto LAB_1407b88c0;
                            }
                        }
                    }
                    local_188 = auVar14;
                    lVar8 = lVar8 + 0x40;
                    auVar14 = local_188;
                }
                lVar13 = lVar13 + 0x10;
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            *(undefined4 *)(local_1a8 + 0x164) = 1;
        }
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack456);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_1407b89b0(longlong param_1,undefined (*param_2) [16],float *param_3)

{
float *pfVar1;
ulonglong uVar2;
float *pfVar3;
longlong lVar4;
float *pfVar5;
uint uVar6;
undefined auVar7 [16];
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
float fVar21;
float fVar22;
float fVar23;
undefined auVar20 [16];
float fVar24;

if (DAT_140c7f878 == 0) {
fVar9 = param_3[1];
fVar14 = param_3[2];
fVar17 = param_3[3];
*(float *)*param_2 = *param_3;
*(float *)(*param_2 + 4) = fVar9;
*(float *)(*param_2 + 8) = fVar14;
*(float *)(*param_2 + 0xc) = fVar17;
return param_2;
}
fVar9 = *param_3;
fVar14 = param_3[1];
fVar17 = param_3[2];
fVar15 = param_3[3];
if (fVar9 * fVar9 + fVar14 * fVar14 + 0.0 < _DAT_140c54b18) {
*(float *)*param_2 = fVar9;
*(float *)(*param_2 + 4) = fVar14;
*(float *)(*param_2 + 8) = fVar17;
*(float *)(*param_2 + 0xc) = fVar15;
return param_2;
}
fVar18 = *(float *)(param_1 + 0x1d0) *
         (fVar14 * *(float *)(param_1 + 0x330) + fVar9 * *(float *)(param_1 + 800) +
          fVar17 * *(float *)(param_1 + 0x340));
fVar21 = *(float *)(param_1 + 0x1d4) *
         (fVar14 * *(float *)(param_1 + 0x334) + fVar9 * *(float *)(param_1 + 0x324) +
          fVar17 * *(float *)(param_1 + 0x344));
fVar22 = *(float *)(param_1 + 0x1d8) *
         (fVar14 * *(float *)(param_1 + 0x338) + fVar9 * *(float *)(param_1 + 0x328) +
          *(float *)(param_1 + 0x348) * 0.0);
if (DAT_140c7f878 == 1) {
fVar22 = fVar18 * *DAT_140c7f870 + fVar21 * DAT_140c7f870[1] + fVar22 * DAT_140c7f870[2];
if (0.0 <= fVar22) {
*(float *)*param_2 = fVar9;
*(float *)(*param_2 + 4) = fVar14;
*(float *)(*param_2 + 8) = fVar17;
*(float *)(*param_2 + 0xc) = fVar15;
return param_2;
}
fVar8 = *(float *)(param_1 + 0x1c0) * (fVar18 - fVar22 * *DAT_140c7f870);
fVar10 = *(float *)(param_1 + 0x1c4) * (fVar21 - fVar22 * DAT_140c7f870[1]);
fVar9 = *(float *)(param_1 + 0x2f4);
fVar14 = *(float *)(param_1 + 0x2f8);
fVar17 = *(float *)(param_1 + 0x2fc);
fVar15 = *(float *)(param_1 + 0x2e4);
fVar18 = *(float *)(param_1 + 0x2e8);
fVar21 = *(float *)(param_1 + 0x2ec);
fVar22 = *(float *)(param_1 + 0x304);
fVar16 = *(float *)(param_1 + 0x308);
fVar24 = *(float *)(param_1 + 0x30c);
*(float *)*param_2 =
fVar10 * *(float *)(param_1 + 0x2f0) + fVar8 * *(float *)(param_1 + 0x2e0) +
*(float *)(param_1 + 0x300) * 0.0;
*(float *)(*param_2 + 4) = fVar10 * fVar9 + fVar8 * fVar15 + fVar22 * 0.0;
*(float *)(*param_2 + 8) = fVar10 * fVar14 + fVar8 * fVar18 + fVar16 * 0.0;
*(float *)(*param_2 + 0xc) = fVar10 * fVar17 + fVar8 * fVar21 + fVar24 * 0.0;
return param_2;
}
uVar2 = 0;
pfVar3 = DAT_140c7f870;
if (DAT_140c7f878 != 0) {
do {
if (*pfVar3 * fVar18 + pfVar3[1] * fVar21 + 0.0 < 0.0) break;
uVar2 = uVar2 + 1;
pfVar3 = pfVar3 + 4;
} while (uVar2 < DAT_140c7f878);
}
if (uVar2 == DAT_140c7f878) {
*(float *)*param_2 = fVar9;
*(float *)(*param_2 + 4) = fVar14;
*(float *)(*param_2 + 8) = fVar17;
*(float *)(*param_2 + 0xc) = fVar15;
}
else {
fVar15 = 0.0;
fVar16 = 0.0;
fVar17 = 0.0;
fVar24 = SQRT(fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22);
auVar20 = divps(CONCAT412(*(float *)(param_1 + 0x1dc) *
                          (fVar14 * *(float *)(param_1 + 0x33c) +
                           fVar9 * *(float *)(param_1 + 0x32c) +
                           *(float *)(param_1 + 0x34c) * 0.0),
                          CONCAT48(fVar22,CONCAT44(fVar21,fVar18))),
                CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24))));
lVar4 = DAT_140c7f898;
pfVar3 = DAT_140c7f890;
if (DAT_140c7f898 != 0) {
do {
if (pfVar3[0xc] != 0.0) {
uVar6 = 0;
pfVar5 = pfVar3;
do {
fVar14 = *pfVar5;
fVar18 = pfVar5[1];
fVar21 = pfVar5[2];
uVar6 = uVar6 + 1;
fVar19 = SUB164(auVar20,0);
fVar23 = SUB164(auVar20 >> 0x40,0);
fVar9 = SUB164(auVar20 >> 0x20,0);
pfVar1 = pfVar3 + (ulonglong)(uVar6 % 3) * 4;
fVar22 = *pfVar1;
fVar8 = pfVar1[1];
fVar10 = fVar18 * 0.0 - fVar8 * 0.0;
fVar11 = fVar22 * 0.0 - pfVar1[2] * fVar14;
fVar12 = fVar11 * 0.0 - fVar9 * 0.0;
fVar13 = fVar19 * 0.0 - fVar23 * fVar10;
fVar11 = fVar14 * fVar12 + fVar18 * fVar13 + fVar21 * (fVar9 * fVar10 - fVar19 * fVar11)
;
fVar10 = fVar12 * fVar22 + fVar13 * fVar8 + 0.0;
if ((char)((0.0 <= fVar10) + (0.0 <= fVar11)) == '\x01') {
fVar10 = (float)((uint)(fVar11 / (fVar10 - fVar11)) ^ 0x80000000);
fVar14 = fVar10 * (fVar22 - fVar14) + fVar14;
fVar18 = fVar10 * (fVar8 - fVar18) + fVar18;
fVar21 = fVar10 * (pfVar1[2] - fVar21) + fVar21;
fVar10 = fVar10 * (pfVar1[3] - pfVar5[3]) + pfVar5[3];
fVar22 = fVar18 * fVar18;
fVar8 = fVar14 * fVar14 + fVar22 + 0.0;
auVar7 = rsqrtss(CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))),
                 CONCAT412(fVar10 * fVar10,
                           CONCAT48(fVar21 * fVar21,CONCAT44(fVar22,fVar8))));
fVar22 = SUB164(auVar7,0);
fVar22 = (3.0 - fVar8 * fVar22 * fVar22) * 0.5 * fVar22;
if (fVar22 <= 0.0) {
fVar22 = 0.0;
}
fVar9 = fVar22 * fVar14 * fVar19 + fVar22 * fVar18 * fVar9 + fVar22 * fVar21 * fVar23;
if (fVar17 < fVar9) {
fVar15 = fVar9 * fVar24 * fVar22 * fVar14;
fVar16 = fVar9 * fVar24 * fVar22 * fVar18;
fVar17 = fVar9;
}
}
else {
fVar9 = fVar14 * fVar19 + fVar18 * fVar9 + fVar21 * fVar23;
if (fVar17 < fVar9) {
fVar15 = fVar9 * fVar24 * fVar14;
fVar16 = fVar9 * fVar24 * fVar18;
fVar17 = fVar9;
}
}
pfVar5 = pfVar5 + 4;
} while (uVar6 < 3);
}
lVar4 = lVar4 + -1;
pfVar3 = pfVar3 + 0x10;
} while (lVar4 != 0);
if (1e-05 <= fVar17) {
fVar15 = *(float *)(param_1 + 0x1c0) * fVar15;
fVar16 = *(float *)(param_1 + 0x1c4) * fVar16;
fVar9 = *(float *)(param_1 + 0x2f4);
fVar14 = *(float *)(param_1 + 0x2f8);
fVar17 = *(float *)(param_1 + 0x2fc);
fVar18 = *(float *)(param_1 + 0x2e4);
fVar21 = *(float *)(param_1 + 0x2e8);
fVar22 = *(float *)(param_1 + 0x2ec);
fVar24 = *(float *)(param_1 + 0x304);
fVar8 = *(float *)(param_1 + 0x308);
fVar10 = *(float *)(param_1 + 0x30c);
*(float *)*param_2 =
fVar16 * *(float *)(param_1 + 0x2f0) + fVar15 * *(float *)(param_1 + 0x2e0) +
*(float *)(param_1 + 0x300) * 0.0;
*(float *)(*param_2 + 4) = fVar16 * fVar9 + fVar15 * fVar18 + fVar24 * 0.0;
*(float *)(*param_2 + 8) = fVar16 * fVar14 + fVar15 * fVar21 + fVar8 * 0.0;
*(float *)(*param_2 + 0xc) = fVar16 * fVar17 + fVar15 * fVar22 + fVar10 * 0.0;
return param_2;
}
}
*param_2 = ZEXT816(0);
}
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1407b8e80(longlong param_1,undefined (*param_2) [16],float *param_3,float *param_4)

{
float *pfVar1;
ulonglong uVar2;
float *pfVar3;
longlong lVar4;
uint uVar5;
float *pfVar6;
undefined auVar7 [16];
undefined auVar8 [16];
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
float fVar18;
float fVar19;
float fVar20;

if (DAT_140c7f878 == 0) {
fVar9 = param_3[1];
fVar10 = param_3[2];
fVar11 = param_3[3];
*(float *)*param_2 = *param_3;
*(float *)(*param_2 + 4) = fVar9;
*(float *)(*param_2 + 8) = fVar10;
*(float *)(*param_2 + 0xc) = fVar11;
return param_2;
}
fVar9 = *param_3;
fVar10 = param_3[1];
fVar11 = param_3[2];
fVar12 = param_3[3];
if (fVar9 * fVar9 + fVar10 * fVar10 + 0.0 < _DAT_140c54b18) {
*(float *)*param_2 = fVar9;
*(float *)(*param_2 + 4) = fVar10;
*(float *)(*param_2 + 8) = fVar11;
*(float *)(*param_2 + 0xc) = fVar12;
return param_2;
}
uVar2 = 0;
fVar16 = (fVar9 * *(float *)(param_1 + 800) + fVar10 * *(float *)(param_1 + 0x330) +
          *(float *)(param_1 + 0x340) * 0.0) * *(float *)(param_1 + 0x1d0);
fVar17 = (fVar9 * *(float *)(param_1 + 0x324) + fVar10 * *(float *)(param_1 + 0x334) +
          *(float *)(param_1 + 0x344) * 0.0) * *(float *)(param_1 + 0x1d4);
fVar18 = (fVar9 * *(float *)(param_1 + 0x328) + fVar10 * *(float *)(param_1 + 0x338) +
          *(float *)(param_1 + 0x348) * 0.0) * *(float *)(param_1 + 0x1d8);
fVar19 = (fVar9 * *(float *)(param_1 + 0x32c) + fVar10 * *(float *)(param_1 + 0x33c) +
          *(float *)(param_1 + 0x34c) * 0.0) * *(float *)(param_1 + 0x1dc);
pfVar3 = DAT_140c7f870;
if (DAT_140c7f878 != 0) {
do {
if (*pfVar3 * fVar16 + pfVar3[1] * fVar17 + 0.0 < 0.0) break;
uVar2 = uVar2 + 1;
pfVar3 = pfVar3 + 4;
} while (uVar2 < DAT_140c7f878);
}
if (uVar2 == DAT_140c7f878) {
*(float *)*param_2 = fVar9;
*(float *)(*param_2 + 4) = fVar10;
*(float *)(*param_2 + 8) = fVar11;
*(float *)(*param_2 + 0xc) = fVar12;
}
else {
fVar9 = *param_4;
fVar10 = param_4[1];
fVar20 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + 0.0);
fVar11 = (fVar9 * *(float *)(param_1 + 800) + fVar10 * *(float *)(param_1 + 0x330) +
          *(float *)(param_1 + 0x340) * 0.0) * *(float *)(param_1 + 0x1d0);
fVar12 = (fVar9 * *(float *)(param_1 + 0x324) + fVar10 * *(float *)(param_1 + 0x334) +
          *(float *)(param_1 + 0x344) * 0.0) * *(float *)(param_1 + 0x1d4);
fVar13 = (fVar9 * *(float *)(param_1 + 0x328) + fVar10 * *(float *)(param_1 + 0x338) +
          *(float *)(param_1 + 0x348) * 0.0) * *(float *)(param_1 + 0x1d8);
fVar14 = (fVar9 * *(float *)(param_1 + 0x32c) + fVar10 * *(float *)(param_1 + 0x33c) +
          *(float *)(param_1 + 0x34c) * 0.0) * *(float *)(param_1 + 0x1dc);
fVar9 = fVar12 * fVar12;
fVar10 = fVar11 * fVar11 + fVar9 + 0.0;
auVar7 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                 CONCAT412(fVar14 * fVar14,CONCAT48(fVar13 * fVar13,CONCAT44(fVar9,fVar10))));
fVar9 = SUB164(auVar7,0);
fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
if (fVar9 <= 0.0) {
fVar9 = 0.0;
}
fVar13 = fVar17 * 0.0 - fVar9 * fVar12 * fVar18;
fVar15 = fVar9 * fVar11 * fVar18 - fVar16 * 0.0;
fVar10 = fVar9 * fVar12 * fVar16 - fVar9 * fVar11 * fVar17;
fVar12 = fVar9 * fVar14 * fVar19 - fVar9 * fVar14 * fVar19;
fVar9 = fVar15 * fVar15;
fVar10 = fVar10 * fVar10;
fVar11 = fVar13 * fVar13 + fVar9 + 0.0;
auVar7 = rsqrtss(CONCAT412(fVar12 * fVar12,CONCAT48(fVar10,CONCAT44(fVar9,fVar11))),
                 CONCAT412(fVar12 * fVar12,CONCAT48(fVar10,CONCAT44(fVar9,fVar11))));
fVar9 = SUB164(auVar7,0);
fVar9 = (3.0 - fVar11 * fVar9 * fVar9) * 0.5 * fVar9;
if (fVar9 <= 0.0) {
fVar9 = 0.0;
}
fVar13 = fVar9 * fVar13;
fVar15 = fVar9 * fVar15;
if (DAT_140c7f878 == 1) {
fVar11 = DAT_140c7f870[1] * 0.0 - fVar15 * DAT_140c7f870[2];
fVar18 = fVar13 * 0.0 - *DAT_140c7f870 * 0.0;
fVar19 = fVar15 * *DAT_140c7f870 - fVar13 * DAT_140c7f870[1];
fVar12 = fVar9 * fVar12 * DAT_140c7f870[3] - fVar9 * fVar12 * DAT_140c7f870[3];
fVar9 = fVar18 * fVar18;
fVar10 = fVar11 * fVar11 + fVar9 + 0.0;
auVar7 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                 CONCAT412(fVar12 * fVar12,CONCAT48(fVar19 * fVar19,CONCAT44(fVar9,fVar10))));
fVar9 = SUB164(auVar7,0);
fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
if (fVar9 <= 0.0) {
fVar9 = 0.0;
}
fVar10 = fVar9 * fVar18 * fVar17 + fVar9 * fVar11 * fVar16 + 0.0;
fVar11 = *(float *)(param_1 + 0x1c0) * fVar10 * fVar9 * fVar11;
fVar9 = *(float *)(param_1 + 0x1c4) * fVar10 * fVar9 * fVar18;
*param_2 = CONCAT412(fVar9 * *(float *)(param_1 + 0x2fc) +
                     fVar11 * *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x30c) * 0.0,
                     CONCAT48(fVar9 * *(float *)(param_1 + 0x2f8) +
                              fVar11 * *(float *)(param_1 + 0x2e8) +
                              *(float *)(param_1 + 0x308) * 0.0,
                              CONCAT44(fVar9 * *(float *)(param_1 + 0x2f4) +
                                       fVar11 * *(float *)(param_1 + 0x2e4) +
                                       *(float *)(param_1 + 0x304) * 0.0,
                                       fVar9 * *(float *)(param_1 + 0x2f0) +
                                       fVar11 * *(float *)(param_1 + 0x2e0) +
                                       *(float *)(param_1 + 0x300) * 0.0)));
}
else {
fVar10 = 0.0;
fVar11 = 0.0;
fVar9 = 0.0;
auVar7 = divps(CONCAT412(fVar19,CONCAT48(fVar18,CONCAT44(fVar17,fVar16))),
               CONCAT412(fVar20,CONCAT48(fVar20,CONCAT44(fVar20,fVar20))));
lVar4 = DAT_140c7f898;
pfVar3 = DAT_140c7f890;
if (DAT_140c7f898 != 0) {
do {
if (pfVar3[0xc] != 0.0) {
uVar5 = 0;
pfVar6 = pfVar3;
do {
fVar12 = *pfVar6;
fVar16 = pfVar6[1];
uVar5 = uVar5 + 1;
pfVar1 = pfVar3 + (ulonglong)(uVar5 % 3) * 4;
fVar17 = fVar12 * fVar13 + fVar16 * fVar15 + 0.0;
fVar18 = *pfVar1 * fVar13 + pfVar1[1] * fVar15 + 0.0;
if ((char)((0.0 <= fVar18) + (0.0 <= fVar17)) == '\x01') {
fVar17 = (float)((uint)(fVar17 / (fVar18 - fVar17)) ^ 0x80000000);
fVar12 = fVar17 * (*pfVar1 - fVar12) + fVar12;
fVar16 = fVar17 * (pfVar1[1] - fVar16) + fVar16;
fVar19 = fVar17 * (pfVar1[2] - pfVar6[2]) + pfVar6[2];
fVar14 = fVar17 * (pfVar1[3] - pfVar6[3]) + pfVar6[3];
fVar17 = fVar16 * fVar16;
fVar18 = fVar12 * fVar12 + fVar17 + 0.0;
auVar8 = rsqrtss(CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))),
                 CONCAT412(fVar14 * fVar14,
                           CONCAT48(fVar19 * fVar19,CONCAT44(fVar17,fVar18))));
fVar17 = SUB164(auVar8,0);
fVar17 = (3.0 - fVar18 * fVar17 * fVar17) * 0.5 * fVar17;
if (fVar17 <= 0.0) {
fVar17 = 0.0;
}
fVar18 = SUB164(auVar7,0) * fVar17 * fVar12 +
         SUB164(auVar7 >> 0x20,0) * fVar17 * fVar16 + 0.0;
if (fVar9 < fVar18) {
fVar10 = fVar18 * fVar20 * fVar17 * fVar12;
fVar11 = fVar18 * fVar20 * fVar17 * fVar16;
fVar9 = fVar18;
}
}
pfVar6 = pfVar6 + 4;
} while (uVar5 < 3);
}
lVar4 = lVar4 + -1;
pfVar3 = pfVar3 + 0x10;
} while (lVar4 != 0);
if (1e-05 <= fVar9) {
fVar10 = *(float *)(param_1 + 0x1c0) * fVar10;
fVar11 = *(float *)(param_1 + 0x1c4) * fVar11;
*param_2 = CONCAT412(fVar11 * *(float *)(param_1 + 0x2fc) +
                     fVar10 * *(float *)(param_1 + 0x2ec) +
                     *(float *)(param_1 + 0x30c) * 0.0,
                     CONCAT48(fVar11 * *(float *)(param_1 + 0x2f8) +
                              fVar10 * *(float *)(param_1 + 0x2e8) +
                              *(float *)(param_1 + 0x308) * 0.0,
                              CONCAT44(fVar11 * *(float *)(param_1 + 0x2f4) +
                                       fVar10 * *(float *)(param_1 + 0x2e4) +
                                       *(float *)(param_1 + 0x304) * 0.0,
                                       fVar11 * *(float *)(param_1 + 0x2f0) +
                                       fVar10 * *(float *)(param_1 + 0x2e0) +
                                       *(float *)(param_1 + 0x300) * 0.0)));
return param_2;
}
}
*param_2 = ZEXT816(0);
}
}
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407b93e0(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    ulonglong local_48 [2];
    ulonglong local_38 [6];

    fVar7 = *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
            *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194) + 0.0;
    if (fVar7 < _DAT_140c54b18) {
        *(undefined4 *)(param_1 + 0x480) = 0;
        return;
    }
    FUN_1401ae000(local_48,local_38,param_1 + 400);
    *(undefined (*) [16])(param_1 + 0x3a0) =
            CONCAT412(*(float *)(param_1 + 0x170) * (float)local_48[0] +
                      *(float *)(param_1 + 0x174) * (float)(local_48[0] >> 0x20) + 0.0,
                      ZEXT812(local_48[0])) ^ (undefined  [16])0x8000000000000000;
    fVar7 = SQRT(fVar7) + fVar7 * 0.5;
    *(undefined (*) [16])(param_1 + 0x3b0) =
            CONCAT412(*(float *)(param_1 + 0x170) * (float)local_38[0] +
                      *(float *)(param_1 + 0x174) * (float)(local_38[0] >> 0x20) + 0.0,
                      ZEXT812(local_38[0])) ^ (undefined  [16])0x8000000000000000;
    auVar6 = divps(*(undefined (*) [16])(param_1 + 400),
                   CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))));
    *(undefined (*) [16])(param_1 + 0x3c0) =
            CONCAT412((*(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170)) * 0.5 *
                      SUB164(auVar6,0) +
                      (*(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174)) * 0.5 *
                      SUB164(auVar6 >> 0x20,0) + 0.0,ZEXT812(SUB168(auVar6,0))) ^
            (undefined  [16])0x8000000000000000;
    uVar4 = *(ulonglong *)(param_1 + 0x388);
    *(undefined4 *)(param_1 + 0x480) = 0x3f800000;
    uVar1 = DAT_140c7f868;
    uVar5 = *(longlong *)(param_1 + 0x390) * 0x10 + uVar4;
    *(ulonglong *)(param_1 + 0x3d0) = uVar4;
    if (uVar4 < uVar5) {
        fVar8 = -1e-05;
        fVar7 = 0.0;
        do {
            iVar2 = FUN_1407b6f20();
            if ((iVar2 != 0) &&
                (*(float *)(param_1 + 0x3e0) * *(float *)(param_1 + 400) +
                 *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x194) + 0.0 <= fVar8)) {
                uVar4 = 0;
                if (uVar1 != 0) {
                    plVar3 = (longlong *)(DAT_140c7f860 + 0x10);
                    do {
                        if (*(longlong *)(param_1 + 0x3d0) == *plVar3) {
                            if (uVar4 < uVar1) goto LAB_1407b962d;
                            break;
                        }
                        uVar4 = uVar4 + 1;
                        plVar3 = plVar3 + 4;
                    } while (uVar4 < uVar1);
                }
                iVar2 = FUN_1407b9670(param_1);
                if ((iVar2 != 0) && (fVar7 == *(float *)(param_1 + 0x480))) {
                    return;
                }
            }
            LAB_1407b962d:
            *(longlong *)(param_1 + 0x3d0) = *(longlong *)(param_1 + 0x3d0) + 0x30;
        } while (*(ulonglong *)(param_1 + 0x3d0) < uVar5);
    }
    return;
}



undefined4 FUN_1407b9670(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    uint uVar5;
    uint uVar6;
    float *pfVar7;
    uint *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint *puVar11;
    int *piVar12;
    ulonglong uVar13;
    uint uVar14;
    float *pfVar15;
    longlong lVar16;
    uint uVar17;
    uint uVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    fVar21 = *(float *)(param_1 + 0x480);
    uVar4 = 0;
    pfVar15 = (float *)(param_1 + 0x3f0);
    lVar16 = 9;
    uVar1 = 1;
    uVar14 = 0;
    lVar10 = 9;
    pfVar7 = pfVar15;
    do {
        if (0.0 <= *(float *)(param_1 + 0x170) * *pfVar7 + *(float *)(param_1 + 0x174) * pfVar7[1] + 0.0
                   + pfVar7[3]) {
            uVar14 = uVar14 | uVar1;
        }
        uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
        pfVar7 = pfVar7 + 4;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    puVar11 = &DAT_140b53bfc;
    uVar1 = 0;
    puVar8 = &DAT_140b53bfc;
    do {
        if ((puVar8[1] & uVar14) == *puVar8) goto LAB_1407b972e;
        uVar1 = uVar1 + 1;
        puVar8 = puVar8 + 0xd;
    } while (uVar1 < 7);
    uVar1 = 7;
    LAB_1407b972e:
    piVar12 = (int *)(&DAT_140b53bd0 + (longlong)(int)uVar1 * 0x34);
    if (1e-05 < fVar21) {
        uVar18 = 0;
        uVar2 = 1;
        do {
            if (0.0 <= (*(float *)(param_1 + 400) * fVar21 + *(float *)(param_1 + 0x170)) * *pfVar15 +
                       (*(float *)(param_1 + 0x194) * fVar21 + *(float *)(param_1 + 0x174)) * pfVar15[1] +
                       0.0 + pfVar15[3]) {
                uVar18 = uVar18 | uVar2;
            }
            uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
            pfVar15 = pfVar15 + 4;
            lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar2 = uVar18 ^ uVar14;
        if (uVar2 != 0) {
            uVar5 = 0;
            do {
                uVar17 = uVar5;
                if ((puVar11[1] & uVar18) == *puVar11) break;
                uVar5 = uVar5 + 1;
                puVar11 = puVar11 + 0xd;
                uVar17 = 7;
            } while (uVar5 < 7);
            if (uVar1 != uVar17) {
                uVar1 = 0x80000000;
                do {
                    uVar5 = piVar12[4];
                    uVar13 = 0xffffffff;
                    uVar9 = 0;
                    if (uVar5 != 0) {
                        puVar8 = (uint *)(piVar12 + 8);
                        fVar20 = fVar21;
                        do {
                            if ((uVar2 >> (*puVar8 & 0x1f) & 1) != 0) {
                                lVar10 = (longlong)(int)*puVar8 + 0x3f;
                                pfVar15 = (float *)(param_1 + lVar10 * 0x10);
                                pfVar7 = (float *)(param_1 + lVar10 * 0x10);
                                fVar19 = (float)((uint)((*(float *)(param_1 + 0x170) * *pfVar15 +
                                                         *(float *)(param_1 + 0x174) * pfVar15[1] + 0.0 +
                                                         *(float *)(param_1 + 0xc + lVar10 * 0x10)) /
                                                        (*(float *)(param_1 + 400) * *pfVar7 +
                                                         *(float *)(param_1 + 0x194) * pfVar7[1] + 0.0)) ^ uVar1);
                                if (fVar19 < fVar20) {
                                    uVar13 = uVar9;
                                    fVar20 = fVar19;
                                }
                            }
                            uVar6 = (int)uVar9 + 1;
                            uVar9 = (ulonglong)uVar6;
                            puVar8 = puVar8 + 1;
                        } while (uVar6 < uVar5);
                    }
                    if (uVar5 <= (uint)uVar13) break;
                    iVar3 = *piVar12;
                    if (iVar3 == 1) {
                        iVar3 = FUN_1407b9a40(param_1);
                        LAB_1407b9930:
                        if (iVar3 != 0) {
                            return 1;
                        }
                    }
                    else {
                        if (iVar3 == 2) {
                            iVar3 = FUN_1407b9c40(param_1);
                            goto LAB_1407b9930;
                        }
                        if (iVar3 == 3) {
                            iVar3 = FUN_1407b9fb0(param_1);
                            goto LAB_1407b9930;
                        }
                    }
                    puVar8 = (uint *)(piVar12 + uVar13 + 5);
                    lVar10 = (longlong)(int)*puVar8;
                    piVar12 = (int *)(&DAT_140b53bd0 + lVar10 * 0x34);
                    uVar14 = uVar14 & ~(&DAT_140b53c00)[lVar10 * 0xd] | (&DAT_140b53bfc)[lVar10 * 0xd];
                    uVar2 = uVar18 ^ uVar14;
                } while (*puVar8 != uVar17);
            }
        }
    }
    iVar3 = *piVar12;
    if (iVar3 == 1) {
        uVar4 = FUN_1407b9a40(param_1);
    }
    else if (iVar3 == 2) {
        uVar4 = FUN_1407b9c40(param_1);
    }
    else if (iVar3 == 3) {
        uVar4 = FUN_1407b9fb0(param_1);
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407b9a40(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar5;
    undefined auVar4 [16];
    float fVar6;
    float fVar7;
    float fVar8;

    fVar1 = param_3[1];
    fVar2 = *param_3 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170);
    fVar5 = *param_3 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174);
    fVar7 = fVar2 - *param_4;
    fVar8 = fVar5 - param_4[1];
    fVar6 = (fVar7 * fVar7 + fVar8 * fVar8 + 0.0) - 1.0;
    if (fVar6 <= 0.0) {
        fVar2 = 0.0;
    }
    else {
        fVar2 = (fVar1 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170)) - fVar2;
        fVar5 = (fVar1 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174)) - fVar5;
        fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + 0.0;
        if (fVar3 < _DAT_140c3d928) {
            return 0;
        }
        fVar5 = (fVar2 * fVar7 + fVar5 * fVar8 + 0.0) * 2.0;
        fVar6 = fVar5 * fVar5 - fVar3 * 4.0 * fVar6;
        if (fVar6 < 0.0) {
            return 0;
        }
        fVar6 = SQRT(fVar6);
        fVar2 = 1.0 / (fVar3 * 2.0);
        fVar7 = (fVar6 - fVar5) * fVar2;
        if (fVar7 < 0.0) {
            return 0;
        }
        fVar2 = ((float)((uint)fVar5 ^ 0x80000000) - fVar6) * fVar2;
        if (1.0 < fVar2) {
            return 0;
        }
        if (fVar2 < 0.0) {
            fVar2 = fVar7;
        }
    }
    fVar8 = (fVar1 - *param_3) * fVar2 + *param_3;
    fVar6 = fVar8 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170);
    fVar7 = fVar8 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174);
    fVar2 = fVar6 - *param_4;
    fVar5 = fVar7 - param_4[1];
    fVar1 = fVar2 * fVar2 + fVar5 * fVar5 + 0.0;
    if (_DAT_140c54b18 <= fVar1) {
        fVar1 = SQRT(fVar1);
        auVar4 = divps(CONCAT412((fVar8 * *(float *)(param_1 + 0x19c) + *(float *)(param_1 + 0x17c)) -
                                 param_4[3],
                                 CONCAT48((fVar8 * *(float *)(param_1 + 0x198) +
                                           *(float *)(param_1 + 0x178)) - param_4[2],
                                          CONCAT44(fVar5,fVar2))),
                       CONCAT412(fVar1,CONCAT48(fVar1,CONCAT44(fVar1,fVar1))));
        if ((*(float *)(param_1 + 0x180) - fVar6) * SUB164(auVar4,0) +
            (*(float *)(param_1 + 0x184) - fVar7) * SUB164(auVar4 >> 0x20,0) + 0.0 <= -1e-05) {
            *(float *)(param_1 + 0x480) = fVar8;
            *(undefined (*) [16])(param_1 + 0x490) = auVar4;
            return 1;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1407b9c40(longlong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
    undefined auVar1 [16];
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    float local_68;
    float fStack100;
    float fStack96;
    float local_58;
    float fStack84;
    float fStack80;

    local_78 = *param_5 - *param_4;
    fStack116 = param_5[1] - param_4[1];
    fStack112 = param_5[2] - param_4[2];
    fVar7 = param_5[3] - param_4[3];
    fVar2 = fStack116 * fStack116;
    fVar3 = local_78 * local_78 + fVar2 + 0.0;
    auVar1 = rsqrtss(CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))),
                     CONCAT412(fVar7 * fVar7,CONCAT48(fStack112 * fStack112,CONCAT44(fVar2,fVar3))));
    fStack108 = SUB164(auVar1,0);
    fStack108 = (3.0 - fVar3 * fStack108 * fStack108) * 0.5 * fStack108;
    if (fStack108 <= 0.0) {
        fStack108 = 0.0;
    }
    local_78 = fStack108 * local_78;
    fStack116 = fStack108 * fStack116;
    fStack112 = fStack108 * fStack112;
    fStack108 = fStack108 * fVar7;
    FUN_1401ae000(0,SUB168(auVar1,0),&local_58,&local_68,&local_78);
    fVar2 = *param_3;
    fVar3 = param_3[1];
    fVar7 = (fVar2 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170)) - *param_4;
    fVar4 = (fVar2 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174)) - param_4[1];
    fVar5 = (fVar2 * *(float *)(param_1 + 0x198) + *(float *)(param_1 + 0x178)) - param_4[2];
    fVar8 = (fVar3 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170)) - *param_4;
    fVar9 = (fVar3 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174)) - param_4[1];
    fVar2 = local_68 * fVar7 + fStack100 * fVar4 + fStack96 * fVar5;
    fVar5 = local_58 * fVar7 + fStack84 * fVar4 + fStack80 * fVar5;
    fVar7 = fVar5 - _DAT_140c79930;
    fVar4 = fVar2 - fRam0000000140c79934;
    fVar6 = (fVar7 * fVar7 + fVar4 * fVar4) - DAT_140c79940 * DAT_140c79940;
    if (fVar6 <= 0.0) {
        fVar2 = 0.0;
    }
    else {
        fVar5 = (fVar8 * local_58 + fVar9 * fStack84 + 0.0) - fVar5;
        fVar2 = (fVar8 * local_68 + fVar9 * fStack100 +
                 ((fVar3 * *(float *)(param_1 + 0x198) + *(float *)(param_1 + 0x178)) - param_4[2]) *
                 fStack96) - fVar2;
        fVar8 = fVar5 * fVar5 + fVar2 * fVar2;
        if (fVar8 < _DAT_140c3ea78) {
            return 0;
        }
        fVar4 = (fVar5 * fVar7 + fVar2 * fVar4) * 2.0;
        fVar7 = fVar4 * fVar4 - fVar8 * 4.0 * fVar6;
        if (fVar7 < 0.0) {
            return 0;
        }
        fVar7 = SQRT(fVar7);
        fVar2 = 1.0 / (fVar8 * 2.0);
        fVar5 = (fVar7 - fVar4) * fVar2;
        if (fVar5 < 0.0) {
            return 0;
        }
        fVar2 = ((float)((uint)fVar4 ^ 0x80000000) - fVar7) * fVar2;
        if (1.0 < fVar2) {
            return 0;
        }
        if (fVar2 < 0.0) {
            fVar2 = fVar5;
        }
    }
    fVar10 = (fVar3 - *param_3) * fVar2 + *param_3;
    fVar8 = fVar10 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170);
    fVar9 = fVar10 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174);
    fVar2 = fVar8 - *param_4;
    fVar3 = fVar9 - param_4[1];
    fVar7 = (fVar10 * *(float *)(param_1 + 0x19c) + *(float *)(param_1 + 0x17c)) - param_4[3];
    fVar4 = fStack112 * fVar3 - fStack116 * 0.0;
    fVar5 = local_78 * 0.0 - fStack112 * fVar2;
    fVar2 = fStack116 * fVar2 - local_78 * fVar3;
    fVar6 = fStack108 * fVar7 - fStack108 * fVar7;
    fVar3 = fVar2 * fStack116 - fVar5 * 0.0;
    fVar7 = fVar4 * 0.0 - fVar2 * local_78;
    fVar4 = fVar5 * local_78 - fVar4 * fStack116;
    fVar2 = fVar3 * fVar3 + fVar7 * fVar7 + fVar4 * fVar4;
    if (_DAT_140c54b18 <= fVar2) {
        fVar2 = SQRT(fVar2);
        auVar1 = divps(CONCAT412(fVar6 * fStack108 - fVar6 * fStack108,
                                 CONCAT48(fVar4,CONCAT44(fVar7,fVar3))),
                       CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))));
        if ((*(float *)(param_1 + 0x180) - fVar8) * SUB164(auVar1,0) +
            (*(float *)(param_1 + 0x184) - fVar9) * SUB164(auVar1 >> 0x20,0) + 0.0 <= -1e-05) {
            *(float *)(param_1 + 0x480) = fVar10;
            *(undefined (*) [16])(param_1 + 0x490) = auVar1;
            return 1;
        }
    }
    return 0;
}



undefined8
FUN_1407b9fb0(longlong param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar1 = param_3[1];
    fVar4 = ((*param_3 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170)) - *param_4) *
            *param_5 +
            ((*param_3 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174)) - param_4[1]) *
            param_5[1] + 0.0;
    if (fVar4 < 0.0) {
        fVar3 = -1.0;
    }
    else {
        fVar3 = 1.0;
    }
    fVar4 = fVar4 * fVar3;
    fVar2 = (((fVar1 * *(float *)(param_1 + 400) + *(float *)(param_1 + 0x170)) - *param_4) * *param_5
             + ((fVar1 * *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x174)) - param_4[1]) *
               param_5[1] + 0.0) * fVar3;
    if (((fVar2 <= fVar4 - 1e-05) && (fVar4 = (1.0 - fVar4) / (fVar2 - fVar4), 0.0 <= fVar4)) &&
        (fVar4 < 1.0)) {
        *(float *)(param_1 + 0x480) = (fVar1 - *param_3) * fVar4 + *param_3;
        *(undefined (*) [16])(param_1 + 0x490) =
                CONCAT412(param_5[3] * fVar3,
                          CONCAT48(param_5[2] * fVar3,CONCAT44(param_5[1] * fVar3,*param_5 * fVar3)));
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined4
FUN_1407ba0d0(longlong param_1,undefined (*param_2) [16],float *param_3,int param_4,float param_5,
              float *param_6)

{
    bool bVar1;
    int iVar2;
    undefined auVar3 [16];
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined local_b8 [8];
    float fStack176;
    float fStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;
    undefined local_98 [16];
    undefined local_88 [112];

    fVar11 = 3.0;
    fVar8 = 0.0;
    local_b8._0_4_ = SUB124(*(undefined (*) [12])*param_2,0);
    fStack176 = SUB164(*param_2 >> 0x40,0);
    fStack172 = SUB164(*param_2 >> 0x60,0);
    fVar18 = 0.5;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar5 = local_b8._0_4_ * local_b8._0_4_ + 0.0 + 0.0;
    auVar3 = rsqrtss(ZEXT816(0),
                     CONCAT412(fStack172 * fStack172,
                               CONCAT48(fStack176 * fStack176,(ulonglong)(uint)fVar5)));
    fVar6 = SUB164(auVar3,0);
    fVar6 = (3.0 - fVar5 * fVar6 * fVar6) * 0.5 * fVar6;
    if (fVar6 <= 0.0) {
        fVar6 = 0.0;
    }
    fVar5 = fVar6 * local_b8._0_4_ * *(float *)(param_1 + 0x1d0);
    fVar7 = *(float *)(param_1 + 0x1d8) * 0.0;
    fVar6 = 0.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    local_88._0_16_ = ZEXT1216(CONCAT48(fVar7,(ulonglong)(uint)fVar5));
    fVar4 = *(float *)(param_1 + 0x1d4) * 2.0 * 0.3333333;
    _local_b8 = *(undefined (*) [16])(param_1 + 0x40);
    fVar9 = 0.0;
    local_98 = ZEXT416((uint)fVar4) << 0x20;
    local_a8 = *(float *)*(undefined (*) [16])(param_1 + 0x40) + 0.0;
    fStack164 = *(float *)(param_1 + 0x44) + fVar4;
    fStack160 = *(float *)(param_1 + 0x48) + 0.0;
    fStack156 = *(float *)(param_1 + 0x4c) + 0.0;
    FUN_1407b64c0(param_1,local_b8,&local_a8,0x4041);
    FUN_1407b74e0(param_1);
    iVar2 = FUN_1407b80b0(param_1,local_98);
    if (iVar2 != 0) {
        FUN_1407b93e0(param_1);
        fVar10 = *(float *)(param_1 + 0x480);
        if (1e-05 <= fVar10) {
            fVar8 = fVar10 * fVar8;
            fVar4 = fVar10 * fVar4;
            fVar9 = fVar10 * fVar9;
            fVar10 = fVar10 * fVar6;
            local_b8 = CONCAT44(local_b8._4_4_ + fVar4,local_b8._0_4_ + fVar8);
            _local_b8 = CONCAT48(fStack176 + fVar9,local_b8);
            _local_b8 = CONCAT412(fStack172 + fVar10,_local_b8);
            local_98 = CONCAT412(fStack172 + fVar10 + fVar13,
                                 CONCAT48(fStack176 + fVar9 + fVar7,
                                          CONCAT44(local_b8._4_4_ + fVar4 + fVar12,
                                                   local_b8._0_4_ + fVar8 + fVar5)));
            FUN_1407b64c0(param_1,local_b8,local_98,0x4041);
            FUN_1407b74e0(param_1);
            iVar2 = FUN_1407b80b0(param_1,local_88);
            if (iVar2 != 0) {
                FUN_1407b93e0(param_1);
                fVar6 = *(float *)(param_1 + 0x480);
                if (1e-05 <= fVar6) {
                    fVar5 = fVar6 * fVar5;
                    fVar12 = fVar6 * fVar12;
                    fVar8 = fVar14 - fVar8;
                    fVar15 = fVar15 - fVar4;
                    fVar16 = fVar16 - fVar9;
                    fVar17 = fVar17 - fVar10;
                    fStack176 = fStack176 + fVar6 * fVar7;
                    fStack172 = fStack172 + fVar6 * fVar13;
                    local_98 = CONCAT412(fVar17,CONCAT48(fVar16,CONCAT44(fVar15,fVar8)));
                    local_b8 = CONCAT44(local_b8._4_4_ + fVar12,local_b8._0_4_ + fVar5);
                    local_88._0_16_ =
                            CONCAT412(fStack172 + fVar17,
                                      CONCAT48(fStack176 + fVar16,
                                               CONCAT44(local_b8._4_4_ + fVar12 + fVar15,
                                                        local_b8._0_4_ + fVar5 + fVar8)));
                    FUN_1407b64c0(param_1,local_b8,local_88,0x4041);
                    FUN_1407b74e0(param_1);
                    iVar2 = FUN_1407b80b0(param_1,local_98);
                    if (iVar2 == 0) {
                        *(undefined4 *)(param_1 + 0x480) = 0;
                    }
                    else {
                        FUN_1407b93e0(param_1);
                    }
                    fVar6 = *(float *)(param_1 + 0x480);
                    if (fVar6 != 1.0) {
                        local_b8._0_4_ = local_b8._0_4_ + fVar6 * fVar8;
                        local_b8._4_4_ = local_b8._4_4_ + fVar6 * fVar15;
                        fStack176 = fStack176 + fVar6 * fVar16;
                        fStack172 = fStack172 + fVar6 * fVar17;
                        _local_b8 = CONCAT412(fStack172,
                                              CONCAT48(fStack176,CONCAT44(local_b8._4_4_,local_b8._0_4_)));
                        local_b8._0_4_ = local_b8._0_4_ - *(float *)(param_1 + 0x40);
                        local_b8._4_4_ = local_b8._4_4_ - *(float *)(param_1 + 0x44);
                        fStack176 = fStack176 - *(float *)(param_1 + 0x48);
                        fStack172 = fStack172 - *(float *)(param_1 + 0x4c);
                        fVar6 = SQRT(local_b8._0_4_ * local_b8._0_4_ + local_b8._4_4_ * local_b8._4_4_ + 0.0);
                        if ((1e-05 <= fVar6) &&
                            (fVar6 = SQRT(fVar5 * fVar5 + fVar12 * fVar12 + 0.0) / fVar6, param_5 <= fVar6)) {
                            FUN_1407b64c0(param_1,local_b8,local_b8,0x4041);
                            FUN_1407b74e0(param_1);
                            FUN_1407b8180(param_1);
                            FUN_1407b89b0(param_1,local_88,param_3);
                            fVar8 = SQRT(local_88._0_4_ * local_88._0_4_ + local_88._4_4_ * local_88._4_4_ + 0.0);
                            fVar5 = SQRT((*param_3 - local_88._0_4_) * (*param_3 - local_88._0_4_) +
                                         (param_3[1] - local_88._4_4_) * (param_3[1] - local_88._4_4_) + 0.0);
                            bVar1 = false;
                            if ((fVar5 * *(float *)(param_1 + 0x114) < fVar8) && (bVar1 = false, param_4 != 0)) {
                                bVar1 = true;
                            }
                            if ((fVar8 <= fVar5 * *(float *)(param_1 + 0x110)) && (!bVar1)) {
                                fVar5 = local_b8._4_4_ * local_b8._4_4_;
                                fVar8 = local_b8._0_4_ * local_b8._0_4_ + fVar5 + 0.0;
                                auVar3 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,CONCAT44(fVar5,fVar5))),
                                                 CONCAT412(fStack172 * fStack172,
                                                           CONCAT48(fStack176 * fStack176,CONCAT44(fVar5,fVar8))));
                                fVar5 = SUB164(auVar3,0);
                                fVar5 = (fVar11 - fVar8 * fVar5 * fVar5) * fVar18 * fVar5;
                                if (fVar5 <= fVar14) {
                                    fVar5 = fVar14;
                                }
                                fVar6 = SQRT(*(float *)*param_2 * *(float *)*param_2 +
                                             *(float *)(*param_2 + 4) * *(float *)(*param_2 + 4) + 0.0) * fVar6;
                                *param_6 = fVar6 * fVar5 * local_b8._0_4_;
                                param_6[1] = fVar6 * fVar5 * local_b8._4_4_;
                                param_6[2] = fVar6 * fVar5 * fStack176;
                                param_6[3] = fVar6 * fVar5 * fStack172;
                                FUN_1407b8180(param_1);
                                return 1;
                            }
                        }
                    }
                }
            }
            FUN_1407b64c0(param_1,param_1 + 0x40,param_1 + 0x40,0x4041);
            FUN_1407b74e0(param_1);
            FUN_1407b8180(param_1);
            return 0;
        }
    }
    FUN_1407b8180();
    return 0;
}



void FUN_1407ba560(longlong param_1,float *param_2,float *param_3,float *param_4)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined (*pauVar4) [16];
    undefined (*pauVar5) [16];
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    float fVar10;
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;

    uVar9 = 0;
    fVar25 = 3.0;
    fVar26 = 0.5;
    fVar27 = 0.0;
    fVar28 = 0.06666667;
    fVar17 = local_b8;
    fVar18 = fStack180;
    fVar19 = fStack176;
    fVar20 = fStack172;
    do {
        if (uVar9 == 0) {
            local_b8 = *param_2;
            fStack180 = param_2[1];
            fStack176 = param_2[2];
            fStack172 = param_2[3];
            fVar17 = *param_3;
            fVar18 = param_3[1];
            fVar19 = param_3[2];
            fVar20 = param_3[3];
        }
        else if (uVar9 == 1) {
            local_b8 = *param_3;
            fStack180 = param_3[1];
            fStack176 = param_3[2];
            fStack172 = param_3[3];
            fVar17 = *param_4;
            fVar18 = param_4[1];
            fVar19 = param_4[2];
            fVar20 = param_4[3];
        }
        else if (uVar9 == 2) {
            local_b8 = *param_4;
            fStack180 = param_4[1];
            fStack176 = param_4[2];
            fStack172 = param_4[3];
            fVar17 = *param_2;
            fVar18 = param_2[1];
            fVar19 = param_2[2];
            fVar20 = param_2[3];
        }
        uVar8 = 0;
        fVar21 = fVar17 - local_b8;
        fVar22 = fVar18 - fStack180;
        fVar23 = fVar19 - fStack176;
        fVar24 = fVar20 - fStack172;
        do {
            lVar2 = *(longlong *)(param_1 + 0x4c8);
            lVar1 = lVar2 + 1;
            fVar10 = (float)uVar8 * fVar28;
            fVar13 = fVar10 * fVar21 + local_b8;
            fVar14 = fVar10 * fVar22 + fStack180;
            fVar15 = fVar10 * fVar23 + fStack176;
            fVar16 = fVar10 * fVar24 + fStack172;
            fVar10 = fVar14 * fVar14;
            uVar6 = SUB128(CONCAT84(SUB168((ZEXT416(0) << 0x20) >> 0x40,0),fVar10),0);
            uVar3 = uVar6 & 0xffffffff;
            fVar12 = fVar13 * fVar13 + (float)uVar3 + 0.0;
            auVar11 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,uVar6 << 0x20 | uVar3)),
                              CONCAT412(fVar16 * fVar16,CONCAT48(fVar15 * fVar15,CONCAT44(fVar10,fVar12)))
            );
            fVar10 = SUB164(auVar11,0);
            fVar10 = (fVar25 - fVar12 * fVar10 * fVar10) * fVar26 * fVar10;
            if (fVar10 <= fVar27) {
                fVar10 = fVar27;
            }
            fVar12 = *(float *)(param_1 + 0x1a0) + fVar10 * fVar13;
            fVar10 = *(float *)(param_1 + 0x1a4) + fVar10 * fVar14;
            fVar13 = fVar10 * *(float *)(param_1 + 0x1f0) + fVar12 * *(float *)(param_1 + 0x1e0) +
                     *(float *)(param_1 + 0x200) * 0.0 + *(float *)(param_1 + 0x210);
            fVar14 = fVar10 * *(float *)(param_1 + 500) + fVar12 * *(float *)(param_1 + 0x1e4) +
                     *(float *)(param_1 + 0x204) * 0.0 + *(float *)(param_1 + 0x214);
            fVar15 = fVar10 * *(float *)(param_1 + 0x1f8) + fVar12 * *(float *)(param_1 + 0x1e8) +
                     *(float *)(param_1 + 0x208) * 0.0 + *(float *)(param_1 + 0x218);
            fVar10 = fVar10 * *(float *)(param_1 + 0x1fc) + fVar12 * *(float *)(param_1 + 0x1ec) +
                     *(float *)(param_1 + 0x20c) * 0.0 + *(float *)(param_1 + 0x21c);
            pauVar4 = (undefined (*) [16])FUN_14018db00(*(undefined8 *)(param_1 + 0x4c0),lVar1,0x10);
            if (pauVar4[lVar2] != (undefined (*) [16])0x0) {
                pauVar4[lVar2] = CONCAT412(fVar10,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
            }
            if (*(undefined (**) [16])(param_1 + 0x4c0) != pauVar4) {
                uVar6 = 0;
                if (*(longlong *)(param_1 + 0x4c8) != 0) {
                    pauVar5 = pauVar4;
                    do {
                        if (pauVar5 != (undefined (*) [16])0x0) {
                            *pauVar5 = *(undefined (*) [16])
                                    ((*(longlong *)(param_1 + 0x4c0) - (longlong)pauVar4) + (longlong)pauVar5)
                            ;
                        }
                        uVar6 = uVar6 + 1;
                        pauVar5 = pauVar5[1];
                    } while (uVar6 < *(ulonglong *)(param_1 + 0x4c8));
                }
                lVar2 = *(longlong *)(param_1 + 0x4c0);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                *(undefined (**) [16])(param_1 + 0x4c0) = pauVar4;
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            *(longlong *)(param_1 + 0x4c8) = lVar1;
        } while (uVar7 < 0x10);
        uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    return;
}



undefined4 FUN_1407ba7d0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 uVar3;

    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar3 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        *param_1 = &PTR_LAB_140b795f0;
        if ((longlong *)param_1[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[2] + 8))();
            param_1[2] = 0;
        }
        lVar2 = param_1[0x98];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        lVar2 = param_1[0x71];
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(param_1,0);
        uVar3 = 0;
    }
    return uVar3;
}



void FUN_1407ba850(undefined8 param_1,float param_2,undefined8 param_3)

{
    int iVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    float fVar4;
    float fVar5;
    undefined4 local_res18 [2];
    undefined4 local_res20 [2];
    float local_58;
    undefined local_48 [64];

    uVar3 = FUN_1407b6330();
    uVar2 = 0;
    fVar5 = 0.0;
    while (fVar5 < param_2) {
        iVar1 = FUN_1407ba940(param_3,local_res20,local_48,local_res18);
        uVar3 = extraout_XMM0_Qa;
        if (iVar1 == 0) break;
        iVar1 = FUN_1407bb5f0(param_3,local_res20[0],local_48);
        uVar3 = extraout_XMM0_Qa_00;
        if (iVar1 == 0) break;
        fVar4 = local_58;
        iVar1 = FUN_1407bb9c0(extraout_XMM0_Qa_00,local_res18[0],local_58,param_3);
        uVar3 = extraout_XMM0_Qa_01;
        if (((iVar1 == 0) || (param_2 = param_2 - fVar4, fVar4 == fVar5)) ||
            (uVar2 = uVar2 + 1, 0x3f < uVar2)) break;
    }
    FUN_1407bb9c0(uVar3,local_res18[0],param_2,param_3);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407ba940(longlong param_1,int *param_2,undefined (*param_3) [16],float *param_4)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    float *pfVar8;
    undefined4 *puVar9;
    undefined (*pauVar10) [16];
    ulonglong uVar11;
    ulonglong uVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    undefined local_f8 [8];
    undefined8 uStack240;
    undefined local_e8 [8];
    float fStack224;
    undefined local_d8 [176];

    FUN_1407b64c0(param_1,param_1 + 0x40,param_1 + 0x40,0x4041);
    FUN_1407b74e0(param_1);
    FUN_1407b8180(param_1);
    uVar12 = 0;
    iVar6 = 0;
    iVar5 = iVar6;
    if (1 < DAT_140c7f878) {
        if (DAT_140c7f898 != 0) {
            piVar7 = (int *)(DAT_140c7f890 + 0x30);
            uVar11 = uVar12;
            do {
                if (*piVar7 != 0) goto LAB_1407ba9e5;
                uVar11 = uVar11 + 1;
                piVar7 = piVar7 + 0x10;
            } while (uVar11 < DAT_140c7f898);
        }
        iVar5 = 1;
    }
    LAB_1407ba9e5:
    fVar32 = 2.0;
    fVar31 = 1.0;
    *(int *)(param_1 + 0xd4) = iVar5;
    if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
        *param_3 = ZEXT816(0);
        FUN_1407b7940(param_1);
        FUN_1407b8180(param_1);
        if (1 < DAT_140c7f878) {
            if (DAT_140c7f898 != 0) {
                piVar7 = (int *)(DAT_140c7f890 + 0x30);
                uVar11 = uVar12;
                do {
                    if (*piVar7 != 0) goto LAB_1407baaba;
                    uVar11 = uVar11 + 1;
                    piVar7 = piVar7 + 0x10;
                } while (uVar11 < DAT_140c7f898);
            }
            FUN_1407bc9b0();
            FUN_1402626b0(&DAT_140c7f870,0);
            goto LAB_1407bae65;
        }
    }
    LAB_1407baaba:
    FUN_1407b89b0(param_1,local_f8,param_1 + 0x60);
    fVar31 = *(float *)(param_1 + 0x60) - SUB164(_local_f8,0);
    fVar32 = *(float *)(param_1 + 100) - SUB164(_local_f8 >> 0x20,0);
    fVar25 = *(float *)(param_1 + 0x68) - SUB164(_local_f8 >> 0x40,0);
    auVar14 = _local_f8;
    if ((*(float *)(param_1 + 0x120) < SQRT(fVar31 * fVar31 + fVar32 * fVar32 + fVar25 * fVar25)) &&
        (*(float *)(param_1 + 0x120) < *(float *)(param_1 + 0x124))) {
        FUN_1408fbfc0();
        *(float *)(param_1 + 0xb0) = extraout_XMM0_Da + *(float *)(param_1 + 0xb0);
    }
    *(undefined (*) [16])(param_1 + 0x60) = auVar14;
    fVar31 = *(float *)(param_1 + 0xf0);
    fVar32 = *(float *)(param_1 + 0xf4);
    fVar19 = *(float *)(param_1 + 0xf8);
    fVar29 = *(float *)(param_1 + 0xfc);
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar17 = *(float *)(param_1 + 0x118);
    fVar21 = fVar32 * fVar32;
    fVar23 = fVar31 * fVar31 + fVar21 + fVar19 * fVar19;
    auVar13 = rsqrtss(CONCAT412(fVar21,CONCAT48(fVar21,CONCAT44(fVar21,fVar21))),
                      CONCAT412(fVar29 * fVar29,CONCAT48(fVar19 * fVar19,CONCAT44(fVar21,fVar23))));
    fVar21 = SUB164(auVar13,0);
    fVar21 = (3.0 - fVar23 * fVar21 * fVar21) * 0.5 * fVar21;
    if (fVar21 <= 0.0) {
        fVar21 = 0.0;
    }
    fVar31 = fVar21 * fVar31;
    fVar32 = fVar21 * fVar32;
    fVar23 = SUB164(auVar14,0);
    fVar16 = SUB164(auVar14 >> 0x20,0);
    fVar18 = SUB164(auVar14 >> 0x40,0);
    fVar20 = SUB164(auVar14 >> 0x60,0);
    if (fVar17 != *(float *)(param_1 + 0x11c)) {
        fVar22 = fVar16 * fVar16;
        fVar24 = fVar23 * fVar23 + fVar22 + 0.0;
        auVar14 = rsqrtss(CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))),
                          CONCAT412(fVar20 * fVar20,CONCAT48(fVar18 * fVar18,CONCAT44(fVar22,fVar24))));
        fVar20 = SUB164(auVar14,0);
        fVar20 = (3.0 - fVar24 * fVar20 * fVar20) * 0.5 * fVar20;
        if (fVar20 <= 0.0) {
            fVar20 = 0.0;
        }
        fVar20 = fVar20 * fVar23 * fVar31 + fVar20 * fVar16 * fVar32 + 0.0;
        if (1.0 <= fVar20) {
            fVar20 = 1.0;
        }
        fVar22 = 0.0;
        if (0.0 <= fVar20) {
            fVar22 = fVar20;
        }
        fVar17 = (*(float *)(param_1 + 0x11c) - fVar17) * fVar22 + fVar17;
    }
    if ((0.5 < *(float *)(param_1 + 0xac) || *(float *)(param_1 + 0xac) == 0.5) ||
        (*(int *)(param_1 + 0xc0) != 0)) {
        fVar23 = 0.0;
        fVar16 = 0.0;
        fVar19 = 0.0;
        fVar29 = 0.0;
    }
    else {
        fVar20 = fVar32 * fVar16 + fVar31 * fVar23 + 0.0;
        fVar23 = fVar23 - fVar20 * fVar31;
        fVar16 = fVar16 - fVar20 * fVar32;
        fVar18 = fVar18 - fVar20 * fVar21 * fVar19;
        fVar18 = SQRT(fVar23 * fVar23 + fVar16 * fVar16 + fVar18 * fVar18);
        fVar23 = fVar18 * fVar31 * 1.33;
        fVar16 = fVar18 * fVar32 * 1.33;
        fVar19 = fVar18 * fVar21 * fVar19 * 1.33;
        fVar29 = fVar18 * fVar21 * fVar29 * 1.33;
    }
    fVar18 = 0.0;
    fVar20 = 0.0;
    fVar22 = 0.0;
    fVar21 = 0.0;
    if (*(int *)(param_1 + 0x138) != 0) {
        fVar31 = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 100) * 0.1 * 0.5;
        local_f8._0_4_ =
                *(float *)(param_1 + 0x100) -
                (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x60) * 0.1 * 0.5);
        local_f8._4_4_ = *(float *)(param_1 + 0x104) - fVar31;
        fVar32 = *(float *)(param_1 + 0x108) -
                 (*(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x68) * 0.1 * 0.5);
        fVar24 = *(float *)(param_1 + 0x10c) -
                 (*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x6c) * 0.1 * 0.5);
        _local_f8 = CONCAT412(fVar24,CONCAT48(fVar32,CONCAT44(local_f8._4_4_,local_f8._0_4_)));
        if (0.0 < local_f8._4_4_) {
            if (*(float *)(param_1 + 300) <= fVar31) {
                local_f8 = (ulonglong)(uint)local_f8._0_4_;
            }
            else {
                fVar31 = *(float *)(param_1 + 300) - fVar31;
                if (local_f8._4_4_ <= fVar31) {
                    fVar31 = local_f8._4_4_;
                }
                local_f8 = CONCAT44(fVar31,local_f8._0_4_);
            }
            local_f8._4_4_ = (float)(local_f8 >> 0x20);
        }
        fVar31 = *(float *)(param_1 + 0x128) - 0.5;
        fVar15 = SQRT(local_f8._0_4_ * local_f8._0_4_ + local_f8._4_4_ * local_f8._4_4_ +
                      fVar32 * fVar32);
        if (fVar31 <= 0.0) {
            fVar31 = 0.0;
        }
        if (fVar31 < fVar15) {
            fVar21 = local_f8._4_4_ * local_f8._4_4_;
            uVar11 = SUB128(CONCAT84(SUB168((ZEXT416(0) << 0x20) >> 0x40,0),fVar21),0);
            uVar1 = uVar11 & 0xffffffff;
            fVar18 = local_f8._0_4_ * local_f8._0_4_ + (float)uVar1 + 0.0;
            auVar14 = rsqrtss(CONCAT412(fVar21,CONCAT48(fVar21,uVar11 << 0x20 | uVar1)),
                              CONCAT412(fVar24 * fVar24,CONCAT48(fVar32 * fVar32,CONCAT44(fVar21,fVar18)))
            );
            fVar30 = SUB164(auVar14,0);
            fVar30 = (3.0 - fVar18 * fVar30 * fVar30) * 0.5 * fVar30;
            if (fVar30 <= 0.0) {
                fVar30 = 0.0;
            }
            fVar18 = 100.0 - (fVar30 * local_f8._0_4_ * *(float *)(param_1 + 0x60) +
                              fVar30 * local_f8._4_4_ * *(float *)(param_1 + 100) + 0.0) * 5.0;
            fVar21 = 100.0;
            if (fVar18 <= 100.0) {
                fVar21 = fVar18;
            }
            if (fVar21 <= 0.0) {
                fVar21 = 0.0;
            }
            fVar21 = fVar21 * (fVar15 - fVar31);
            fVar18 = fVar21 * fVar30 * local_f8._0_4_;
            fVar20 = fVar21 * fVar30 * local_f8._4_4_;
            fVar22 = fVar21 * fVar30 * fVar32;
            fVar21 = fVar21 * fVar30 * fVar24;
        }
    }
    fVar32 = 2.0;
    if (DAT_140c54a08 <= fVar17) {
        fVar17 = DAT_140c54a08;
    }
    fVar31 = 1.0;
    *param_3 = CONCAT412((*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0x6c)) * fVar17 +
                         fVar21 + *(float *)(param_1 + 0xfc) + fVar29,
                         CONCAT48((*(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0x68)) * fVar17 +
                                  fVar22 + *(float *)(param_1 + 0xf8) + fVar19,
                                  CONCAT44((*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 100)) *
                                           fVar17 + fVar20 + *(float *)(param_1 + 0xf4) + fVar16,
                                           (*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0x60)) *
                                           fVar17 + fVar18 + *(float *)(param_1 + 0xf0) + fVar23)));
    LAB_1407bae65:
    iVar5 = *(int *)(param_1 + 0xa0);
    *param_2 = 0;
    *param_4 = 0.0;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0xa4) == 0)) {
        fVar17 = *(float *)(param_1 + 0x80);
        fVar19 = *(float *)(param_1 + 0x84);
        fVar29 = 1e-05;
        if (1e-05 < fVar17 * fVar17 + fVar19 * fVar19 + 0.0) {
            fVar17 = fVar25 - fVar17;
            fVar19 = fVar26 - fVar19;
            fVar21 = fVar27 - *(float *)(param_1 + 0x88);
            fVar23 = fVar28 - *(float *)(param_1 + 0x8c);
            _local_e8 = CONCAT412(fVar23,CONCAT48(fVar21,CONCAT44(fVar19,fVar17)));
            iVar5 = FUN_1407b7fe0(param_1,local_e8);
            if (iVar5 != 0) {
                _local_e8 = CONCAT412(fVar23,CONCAT48(fVar21,CONCAT44(fVar19,fVar17)));
                pfVar8 = (float *)FUN_1407b89b0(param_1,local_f8,local_e8);
                fVar18 = fVar25 - *pfVar8;
                fVar20 = fVar26 - pfVar8[1];
                fVar22 = fVar27 - pfVar8[2];
                fVar24 = fVar28 - pfVar8[3];
                fVar19 = *(float *)(param_1 + 0x80) - fVar18;
                fVar21 = *(float *)(param_1 + 0x84) - fVar20;
                fVar23 = *(float *)(param_1 + 0x88) - fVar22;
                fVar16 = *(float *)(param_1 + 0x8c) - fVar24;
                fVar17 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar22 * fVar22);
                if (*(int *)(param_1 + 0xb4) == 0) {
                    fVar15 = *(float *)(param_1 + 0x110);
                }
                else {
                    fVar15 = *(float *)(param_1 + 0x114);
                }
                fVar15 = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar23 * fVar23) * fVar15;
                if ((fVar15 < fVar17) && (fVar29 < fVar17)) {
                    fVar15 = fVar15 / fVar17;
                    fVar18 = fVar15 * fVar18;
                    fVar20 = fVar15 * fVar20;
                    fVar22 = fVar15 * fVar22;
                    fVar24 = fVar15 * fVar24;
                }
                fVar18 = fVar18 + fVar19;
                fVar20 = fVar20 + fVar21;
                fVar22 = fVar22 + fVar23;
                fVar24 = fVar24 + fVar16;
                local_e8 = CONCAT44(*(float *)(param_1 + 100) + fVar20,*(float *)(param_1 + 0x60) + fVar18);
                _local_e8 = CONCAT48(*(float *)(param_1 + 0x68) + fVar22,local_e8);
                _local_e8 = CONCAT412(*(float *)(param_1 + 0x6c) + fVar24,_local_e8);
                puVar9 = (undefined4 *)FUN_1407b89b0(param_1,local_f8,local_e8);
                uVar2 = puVar9[1];
                uVar3 = puVar9[2];
                uVar4 = puVar9[3];
                *(undefined4 *)(param_1 + 0x60) = *puVar9;
                *(undefined4 *)(param_1 + 100) = uVar2;
                *(undefined4 *)(param_1 + 0x68) = uVar3;
                *(undefined4 *)(param_1 + 0x6c) = uVar4;
                *(undefined (*) [16])(param_1 + 0x80) =
                        CONCAT412(fVar28,CONCAT48(fVar27,CONCAT44(fVar26,fVar25)));
                *(undefined (*) [16])(param_1 + 0x90) =
                        CONCAT412(fVar24,CONCAT48(fVar22,CONCAT44(fVar20,fVar18)));
                *(undefined4 *)(param_1 + 0xa8) = 1;
                *(undefined4 *)(param_1 + 0xb4) = 1;
                *(undefined4 *)(param_1 + 0xc0) = 1;
                *(undefined8 *)(param_1 + 0xc4) = 1;
                fVar17 = *(float *)(param_1 + 0xf0);
                fVar19 = *(float *)(param_1 + 0xf4);
                *(undefined4 *)(param_1 + 0xd0) = 0;
                *(uint *)(param_1 + 0xcc) =
                        (uint)((fVar17 * fVar18 + fVar19 * fVar20 + *(float *)(param_1 + 0xf8) * fVar22) /
                               (fVar17 * fVar17 + fVar19 * fVar19 + 0.0)) ^ 0x80000000;
            }
        }
        local_e8 = CONCAT44(*(float *)(param_1 + 100) + *(float *)(*param_3 + 4) * 0.05,
                            *(float *)(param_1 + 0x60) + *(float *)*param_3 * 0.05);
        _local_e8 = CONCAT48(*(float *)(param_1 + 0x68) + *(float *)(*param_3 + 8) * 0.05,local_e8);
        _local_e8 = CONCAT412(*(float *)(param_1 + 0x6c) + *(float *)(*param_3 + 0xc) * 0.05,_local_e8);
        iVar5 = FUN_1407b7fe0(param_1,local_e8);
        if (iVar5 == 0) {
            *(undefined4 *)(param_1 + 0xa8) = 1;
            if (0.1 < *(float *)(param_1 + 0xac) || *(float *)(param_1 + 0xac) == 0.1) {
                *(undefined4 *)(param_1 + 0xb4) = 1;
            }
        }
        else {
            FUN_1407b89b0(param_1,local_e8,param_3);
            fVar19 = *(float *)*param_3;
            fVar21 = *(float *)(*param_3 + 4);
            fVar23 = *(float *)(*param_3 + 8);
            fVar16 = *(float *)(*param_3 + 0xc);
            fVar22 = SQRT(local_e8._0_4_ * local_e8._0_4_ + local_e8._4_4_ * local_e8._4_4_ +
                          fStack224 * fStack224);
            fVar18 = SQRT((fVar19 - local_e8._0_4_) * (fVar19 - local_e8._0_4_) +
                          (fVar21 - local_e8._4_4_) * (fVar21 - local_e8._4_4_) + 0.0);
            fVar20 = fVar18 * *(float *)(param_1 + 0x114);
            fVar17 = *(float *)(param_1 + 0x110);
            if ((fVar20 < fVar22) && (*(int *)(param_1 + 0xb4) != 0)) {
                *param_4 = fVar20;
                iVar6 = 1;
            }
            if ((fVar18 * fVar17 < fVar22) || (iVar6 != 0)) {
                uVar12 = 1;
            }
            fVar17 = *(float *)(param_1 + 0x70);
            fVar18 = *(float *)(param_1 + 0x74);
            fVar20 = *(float *)(param_1 + 0x78);
            fVar22 = *(float *)(param_1 + 0x7c);
            fVar24 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar20 * fVar20);
            if (fVar24 <= fVar29) {
                _local_f8 = CONCAT412(fVar28,CONCAT48(fVar27,CONCAT44(fVar26,fVar25)));
            }
            else if (fVar19 * fVar19 + fVar21 * fVar21 + 0.0 <= _DAT_140c54b18) {
                pauVar10 = (undefined (*) [16])FUN_1407b89b0(param_1,local_d8,param_1 + 0x70);
                _local_f8 = *pauVar10;
            }
            else {
                iVar5 = FUN_1407b7fe0(param_1,param_1 + 0x70);
                if (iVar5 == 0) {
                    auVar14 = CONCAT412(fVar28 - fVar22,
                                        CONCAT48(fVar27 - fVar20,CONCAT44(fVar26 - fVar18,fVar25 - fVar17)));
                    _local_e8 = auVar14;
                    iVar5 = FUN_1407b7fe0(param_1,local_e8);
                    if (iVar5 != 0) {
                        local_e8 = CONCAT44(fVar26 - fVar21,fVar25 - fVar19);
                        _local_e8 = CONCAT48(fVar27 - fVar23,local_e8);
                        _local_e8 = CONCAT412(fVar28 - fVar16,_local_e8);
                        _local_f8 = auVar14;
                        pfVar8 = (float *)FUN_1407b8e80(param_1,local_d8,local_f8,local_e8);
                        fVar19 = fVar25 - *pfVar8;
                        fVar21 = fVar26 - pfVar8[1];
                        fVar23 = fVar27 - pfVar8[2];
                        fVar16 = fVar28 - pfVar8[3];
                        fVar17 = SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar23 * fVar23);
                        FUN_140934e10();
                        FUN_1408fc950();
                        if (fVar17 <= extraout_XMM0_Da_01 * fVar24) {
                            _local_f8 = *(undefined (*) [16])(param_1 + 0x70);
                        }
                        else {
                            fVar24 = fVar24 * fVar24;
                            fVar17 = fVar17 * fVar17;
                            _local_f8 = divps(CONCAT412(fVar24 * fVar16,
                                                        CONCAT48(fVar24 * fVar23,
                                                                 CONCAT44(fVar24 * fVar21,fVar24 * fVar19))),
                                              CONCAT412(fVar17,CONCAT48(fVar17,CONCAT44(fVar17,fVar17))));
                        }
                    }
                }
                else {
                    local_e8 = CONCAT44(fVar26 - fVar21,fVar25 - fVar19);
                    _local_e8 = CONCAT48(fVar27 - fVar23,local_e8);
                    _local_e8 = CONCAT412(fVar28 - fVar16,_local_e8);
                    FUN_1407b8e80(param_1,local_f8,param_1 + 0x70,local_e8);
                    fVar17 = SUB164(_local_f8 >> 0x20,0);
                    fVar19 = SUB164(_local_f8 >> 0x40,0);
                    fVar24 = SQRT(SUB164(_local_f8,0) * SUB164(_local_f8,0) + fVar17 * fVar17 +
                                  fVar19 * fVar19) / fVar24;
                    auVar14 = _local_f8;
                    iVar5 = FUN_1407ba0d0(param_1,param_1 + 0x70,param_3,uVar12,fVar24,local_f8);
                    *param_2 = iVar5;
                    if (iVar5 == 0) {
                        FUN_140934e10();
                        FUN_1408fc950();
                        if (fVar24 <= extraout_XMM0_Da_00) {
                            pauVar10 = (undefined (*) [16])FUN_1407b89b0(param_1,local_e8,param_1 + 0x70);
                            fVar29 = 1e-05;
                            _local_f8 = *pauVar10;
                        }
                        else {
                            fVar29 = 1e-05;
                            _local_f8 = auVar14;
                        }
                    }
                    else {
                        fVar29 = 1e-05;
                    }
                }
            }
            _local_f8 = CONCAT412((SUB164(_local_f8 >> 0x60,0) - *(float *)(param_1 + 0x6c)) *
                                  DAT_140c54a08,
                                  CONCAT48((SUB164(_local_f8 >> 0x40,0) - *(float *)(param_1 + 0x68)) *
                                           DAT_140c54a08,
                                           CONCAT44((SUB164(_local_f8 >> 0x20,0) -
                                                     *(float *)(param_1 + 100)) * DAT_140c54a08,
                                                    (SUB164(_local_f8,0) - *(float *)(param_1 + 0x60)) *
                                                    DAT_140c54a08)));
            if (*param_2 == 0) {
                pfVar8 = (float *)FUN_1407b89b0(param_1,local_d8,local_f8);
            }
            else {
                _local_e8 = _local_f8;
                pfVar8 = (float *)local_e8;
            }
            fVar17 = *pfVar8;
            fVar19 = pfVar8[1];
            fVar21 = pfVar8[2];
            fVar23 = pfVar8[3];
            pfVar8 = (float *)FUN_1407b89b0(param_1,local_d8,param_3);
            fVar16 = *(float *)(*param_3 + 0xc);
            fVar18 = pfVar8[3];
            fVar24 = *pfVar8 - fVar17;
            fVar15 = pfVar8[1] - fVar19;
            fVar30 = pfVar8[2] - fVar21;
            fVar20 = (*(float *)*param_3 - fVar17) - fVar24;
            fVar22 = (*(float *)(*param_3 + 4) - fVar19) - fVar15;
            fVar21 = (*(float *)(*param_3 + 8) - fVar21) - fVar30;
            fVar19 = SQRT(fVar24 * fVar24 + fVar15 * fVar15 + fVar30 * fVar30);
            fVar17 = fVar25;
            if (fVar29 < fVar19) {
                if ((int)uVar12 == 0) {
                    fVar26 = *(float *)(param_1 + 0x110);
                }
                else {
                    fVar26 = *(float *)(param_1 + 0x114);
                }
                fVar17 = fVar19 - fVar26 * SQRT(fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21);
                if (fVar17 <= 0.0) {
                    fVar17 = 0.0;
                }
                fVar17 = fVar17 / fVar19;
                fVar26 = fVar17 * fVar15;
                fVar27 = fVar17 * fVar30;
                fVar28 = fVar17 * (fVar18 - fVar23);
                fVar17 = fVar17 * fVar24;
            }
            *(float *)*param_3 = fVar17 + fVar20 + SUB164(_local_f8,0);
            *(float *)(*param_3 + 4) = fVar26 + fVar22 + SUB164(_local_f8 >> 0x20,0);
            *(float *)(*param_3 + 8) = fVar27 + fVar21 + SUB164(_local_f8 >> 0x40,0);
            *(float *)(*param_3 + 0xc) =
                    fVar28 + ((fVar16 - fVar23) - (fVar18 - fVar23)) + SUB164(_local_f8 >> 0x60,0);
            *(undefined4 *)(param_1 + 0xa8) = 0;
            *(int *)(param_1 + 0xb4) = (int)uVar12;
            if ((*(float *)(param_1 + 0xcc) < *(float *)(param_1 + 200)) ||
                (*(float *)(param_1 + 100) <= 0.0)) {
                *(undefined4 *)(param_1 + 0xc0) = 0;
                *(undefined4 *)(param_1 + 0xd0) = 0;
            }
        }
        if (*(int *)(param_1 + 0xa8) != 0) {
            fVar26 = *(float *)(param_1 + 0x70);
            if (fVar29 < (float)((uint)fVar26 & 0x7fffffff)) {
                fVar27 = fVar31 - *(float *)(param_1 + 0x60) / fVar26;
                if (fVar31 <= fVar27) {
                    fVar27 = fVar31;
                }
                fVar28 = fVar25;
                if (fVar25 <= fVar27) {
                    fVar28 = fVar27;
                }
                *(float *)*param_3 = fVar28 * fVar26 * fVar32 + *(float *)*param_3;
            }
            fVar26 = *(float *)(param_1 + 0x78);
            if (fVar29 < (float)((uint)fVar26 & 0x7fffffff)) {
                fVar27 = fVar31 - *(float *)(param_1 + 0x68) / fVar26;
                if (fVar31 <= fVar27) {
                    fVar27 = fVar31;
                }
                if (fVar25 <= fVar27) {
                    fVar25 = fVar27;
                }
                *(float *)(*param_3 + 8) = fVar25 * fVar26 * fVar32 + *(float *)(*param_3 + 8);
            }
        }
    }
    else {
        fVar31 = *(float *)(param_1 + 0x118);
        if (DAT_140c54a08 <= *(float *)(param_1 + 0x118)) {
            fVar31 = DAT_140c54a08;
        }
        fVar32 = *(float *)(param_1 + 0x70) * fVar31 + *(float *)*param_3;
        fVar25 = *(float *)(param_1 + 0x74) * fVar31 + *(float *)(*param_3 + 4);
        fVar26 = *(float *)(param_1 + 0x78) * fVar31 + *(float *)(*param_3 + 8);
        fVar31 = *(float *)(param_1 + 0x7c) * fVar31 + *(float *)(*param_3 + 0xc);
        *param_3 = CONCAT412(fVar31,CONCAT48(fVar26,CONCAT44(fVar25,fVar32)));
        local_e8 = CONCAT44(*(float *)(param_1 + 100) + fVar25 * 0.05,
                            *(float *)(param_1 + 0x60) + fVar32 * 0.05);
        _local_e8 = CONCAT48(*(float *)(param_1 + 0x68) + fVar26 * 0.05,local_e8);
        _local_e8 = CONCAT412(*(float *)(param_1 + 0x6c) + fVar31 * 0.05,_local_e8);
        if (*(int *)(param_1 + 0xa4) == 0) {
            iVar6 = FUN_1407b80b0(param_1,local_e8);
        }
        *(int *)(param_1 + 0xa8) = iVar6;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1407bb5f0(longlong param_1,int param_2,float *param_3,undefined8 param_4,float *param_5)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float in_XMM3_Da;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined local_68 [8];
    float fStack96;
    float fStack92;
    undefined local_58 [8];
    undefined8 uStack80;
    undefined local_48 [8];
    float fStack64;
    float fStack60;

    if (param_2 == 0) {
        _local_58 = CONCAT412(*(float *)(param_1 + 0x6c) + param_3[3] * 0.05,
                              CONCAT48(*(float *)(param_1 + 0x68) + param_3[2] * 0.05,
                                       CONCAT44(*(float *)(param_1 + 100) + param_3[1] * 0.05,
                                                *(float *)(param_1 + 0x60) + *param_3 * 0.05)));
        FUN_1407b89b0(param_1,local_48,local_58);
        fVar2 = local_48._0_4_ * 0.1 + *(float *)(param_1 + 0x40);
        fVar7 = local_48._4_4_ * 0.1 + *(float *)(param_1 + 0x44);
        fVar9 = *(float *)(param_1 + 0x40) - fVar2;
        fVar11 = *(float *)(param_1 + 0x44) - fVar7;
        _local_48 = CONCAT412(fStack60 * 0.1 + *(float *)(param_1 + 0x4c),
                              CONCAT48(fStack64 * 0.1 + *(float *)(param_1 + 0x48),CONCAT44(fVar7,fVar2)
                              ));
        if (fVar9 * fVar9 + fVar11 * fVar11 + 0.0 < DAT_140c3c7a8) {
            *(undefined (*) [16])(param_1 + 0x60) = ZEXT816(0);
            return 0;
        }
        if (*(int *)(param_1 + 0xd4) == 0) {
            iVar1 = FUN_1407b64c0(param_1,param_1 + 0x40,local_48,0x4041);
            if (iVar1 != 0) {
                FUN_1407b74e0(param_1);
            }
            FUN_1407b93e0(param_1);
        }
        else {
            *(undefined4 *)(param_1 + 0x480) = 0x3f800000;
        }
        fVar2 = *(float *)(param_1 + 0x40);
        fVar7 = *(float *)(param_1 + 0x44);
        fVar9 = *(float *)(param_1 + 0x48);
        fVar11 = *(float *)(param_1 + 0x4c);
        fVar13 = *(float *)(param_1 + 0x480) * 0.1;
        if (in_XMM3_Da <= fVar13) {
            fVar13 = in_XMM3_Da;
        }
        fVar8 = *param_3;
        fVar10 = param_3[1];
        fVar12 = param_3[2];
        fVar3 = param_3[3];
        *param_5 = fVar13;
        fVar2 = fVar2 + local_58._0_4_ * fVar13;
        fVar7 = fVar7 + local_58._4_4_ * fVar13;
        fVar9 = fVar9 + (float)uStack80 * fVar13;
        fVar11 = fVar11 + uStack80._4_4_ * fVar13;
        _local_48 = CONCAT412(fVar11,CONCAT48(fVar9,CONCAT44(fVar7,fVar2)));
        *(undefined (*) [16])(param_1 + 0x60) =
                CONCAT412(*(float *)(param_1 + 0x6c) + fVar3 * fVar13,
                          CONCAT48(*(float *)(param_1 + 0x68) + fVar12 * fVar13,
                                   CONCAT44(*(float *)(param_1 + 100) + fVar10 * fVar13,
                                            *(float *)(param_1 + 0x60) + fVar8 * fVar13)));
        fVar8 = fVar13 * local_48._0_4_ + *(float *)(param_1 + 0x40);
        fVar10 = fVar13 * local_48._4_4_ + *(float *)(param_1 + 0x44);
        fVar12 = fVar13 * fStack64 + *(float *)(param_1 + 0x48);
        fVar13 = fVar13 * fStack60 + *(float *)(param_1 + 0x4c);
        fVar2 = fVar2 - fVar8;
        fVar7 = fVar7 - fVar10;
        fVar9 = fVar9 - fVar12;
        fVar11 = fVar11 - fVar13;
        *(undefined (*) [16])(param_1 + 0x40) =
                CONCAT412(fVar13,CONCAT48(fVar12,CONCAT44(fVar10,fVar8)));
        _local_58 = CONCAT412(fVar11,CONCAT48(fVar9,CONCAT44(fVar7,fVar2)));
        if (_DAT_140c54b18 < fVar2 * fVar2 + fVar7 * fVar7 + 0.0) {
            FUN_1407b64c0(param_1,param_1 + 0x40,local_48,0x4041);
            FUN_1407b74e0(param_1);
            iVar1 = FUN_1407b7fe0(param_1,local_58);
            if (iVar1 == 0) {
                FUN_1407b93e0(param_1);
                fVar13 = *(float *)(param_1 + 0x480);
                *(undefined (*) [16])(param_1 + 0x40) =
                        CONCAT412(fVar13 * fVar11 + *(float *)(param_1 + 0x4c),
                                  CONCAT48(fVar13 * fVar9 + *(float *)(param_1 + 0x48),
                                           CONCAT44(fVar13 * fVar7 + *(float *)(param_1 + 0x44),
                                                    fVar13 * fVar2 + *(float *)(param_1 + 0x40))));
            }
        }
    }
    else {
        _local_68 = *(undefined (*) [16])(param_1 + 0x40);
        fVar2 = *(float *)(param_1 + 0x1d4) * 0.6666667;
        fVar7 = 0.0;
        fVar9 = 0.0;
        fVar11 = 0.0;
        _local_48 = ZEXT416((uint)fVar2) << 0x20;
        _local_58 = CONCAT412(*(float *)(param_1 + 0x4c) + 0.0,
                              CONCAT48(*(float *)(param_1 + 0x48) + 0.0,
                                       CONCAT44(*(float *)(param_1 + 0x44) + fVar2,
                                                *(float *)*(undefined (*) [16])(param_1 + 0x40) + 0.0)))
                ;
        FUN_1407b64c0(param_1,local_68,local_58,0x4041);
        FUN_1407b74e0(param_1);
        iVar1 = FUN_1407b80b0(param_1,local_48);
        if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x480) = 0;
        }
        else {
            FUN_1407b93e0(param_1);
        }
        fVar13 = *(float *)(param_1 + 0x480);
        fVar7 = fVar13 * fVar7;
        fVar2 = fVar13 * fVar2;
        fVar9 = fVar13 * fVar9;
        fVar13 = fVar13 * fVar11;
        fVar11 = *(float *)(param_1 + 0x60) + *param_3 * 0.05;
        fVar8 = *(float *)(param_1 + 100) + param_3[1] * 0.05;
        fVar10 = *(float *)(param_1 + 0x68) + param_3[2] * 0.05;
        fVar12 = *(float *)(param_1 + 0x6c) + param_3[3] * 0.05;
        _local_68 = CONCAT412(fStack92 + fVar13,
                              CONCAT48(fStack96 + fVar9,
                                       CONCAT44(local_68._4_4_ + fVar2,local_68._0_4_ + fVar7)));
        _local_58 = CONCAT412(fVar12 * 0.1,CONCAT48(fVar10 * 0.1,CONCAT44(fVar8 * 0.1,fVar11 * 0.1)));
        _local_48 = CONCAT412(fVar12 * 0.1 + fStack92 + fVar13,
                              CONCAT48(fVar10 * 0.1 + fStack96 + fVar9,
                                       CONCAT44(fVar8 * 0.1 + local_68._4_4_ + fVar2,
                                                fVar11 * 0.1 + local_68._0_4_ + fVar7)));
        FUN_1407b64c0(param_1,local_68,local_48,0x4041);
        FUN_1407b74e0(param_1);
        iVar1 = FUN_1407b80b0(param_1,local_58);
        if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x480) = 0;
        }
        else {
            FUN_1407b93e0(param_1);
        }
        fVar3 = *(float *)(param_1 + 0x480) * 0.1;
        if (in_XMM3_Da <= fVar3) {
            fVar3 = in_XMM3_Da;
        }
        fVar4 = 0.0 - fVar7;
        fVar5 = 0.0 - fVar9;
        fVar6 = 0.0 - fVar13;
        *param_5 = fVar3;
        local_68._0_4_ = fVar3 * fVar11 + local_68._0_4_;
        local_68._4_4_ = fVar3 * fVar8 + local_68._4_4_;
        fStack96 = fVar3 * fVar10 + fStack96;
        fStack92 = fVar3 * fVar12 + fStack92;
        fVar11 = (0.0 - fVar2) - fVar3 * fVar8;
        _local_68 = CONCAT412(fStack92,CONCAT48(fStack96,CONCAT44(local_68._4_4_,local_68._0_4_)));
        _local_48 = CONCAT412(fStack92 + fVar6,
                              CONCAT48(fStack96 + fVar5,
                                       CONCAT44(local_68._4_4_ + fVar11,local_68._0_4_ + fVar4)));
        FUN_1407b64c0(param_1,local_68,local_48,0x4041);
        FUN_1407b74e0(param_1);
        iVar1 = FUN_1407b80b0(param_1,local_58);
        if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x480) = 0;
        }
        else {
            FUN_1407b93e0(param_1);
        }
        fVar8 = *(float *)(param_1 + 0x480);
        fVar10 = *param_5;
        *(undefined (*) [16])(param_1 + 0x60) =
                CONCAT412(*(float *)(param_1 + 0x6c) + param_3[3] * fVar10,
                          CONCAT48(*(float *)(param_1 + 0x68) + param_3[2] * fVar10,
                                   CONCAT44(*(float *)(param_1 + 100) + param_3[1] * fVar10,
                                            *(float *)(param_1 + 0x60) + *param_3 * fVar10)));
        *(undefined (*) [16])(param_1 + 0x40) =
                CONCAT412(fStack92 + fVar8 * fVar6,
                          CONCAT48(fStack96 + fVar8 * fVar5,
                                   CONCAT44(local_68._4_4_ + fVar8 * fVar11,local_68._0_4_ + fVar8 * fVar4)
                          ));
        *(undefined (*) [16])(param_1 + 0x50) =
                CONCAT412(*(float *)(param_1 + 0x5c) + fVar8 * fVar6 + fVar13,
                          CONCAT48(*(float *)(param_1 + 0x58) + fVar8 * fVar5 + fVar9,
                                   CONCAT44(*(float *)(param_1 + 0x54) + fVar8 * fVar11 + fVar2,
                                            *(float *)(param_1 + 0x50) + fVar8 * fVar4 + fVar7)));
    }
    return 1;
}



undefined8 FUN_1407bb9c0(undefined8 param_1,float param_2,float param_3,longlong param_4)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    iVar1 = *(int *)(param_4 + 0xa8);
    if (((iVar1 == 0) && (*(int *)(param_4 + 0xb4) != 0)) && (*(int *)(param_4 + 0x138) == 0)) {
        fVar4 = *(float *)(param_4 + 0x60);
        fVar2 = *(float *)(param_4 + 0x60) - *(float *)(param_4 + 0x70);
        fVar3 = *(float *)(param_4 + 100) - *(float *)(param_4 + 0x74);
        if (fVar4 < 0.0) {
            if (0.0 <= fVar2) {
                fVar2 = 0.0;
            }
            if (fVar4 <= fVar2) {
                fVar4 = fVar2;
            }
        }
        else {
            if (fVar4 <= fVar2) {
                fVar2 = fVar4;
            }
            fVar4 = 0.0;
            if (0.0 <= fVar2) {
                fVar4 = fVar2;
            }
        }
        fVar2 = *(float *)(param_4 + 100);
        if (fVar2 < 0.0) {
            if (0.0 <= fVar3) {
                fVar3 = 0.0;
            }
            if (fVar2 <= fVar3) {
                fVar2 = fVar3;
            }
        }
        else {
            if (fVar2 <= fVar3) {
                fVar3 = fVar2;
            }
            fVar2 = 0.0;
            if (0.0 <= fVar3) {
                fVar2 = fVar3;
            }
        }
        fVar4 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + 0.0);
        if (fVar4 <= *(float *)(param_4 + 0x120)) {
            fVar4 = fVar4 / *(float *)(param_4 + 0x120);
        }
        else {
            fVar4 = 1.0;
        }
        fVar4 = fVar4 * param_2 * 0.01 * param_3 + *(float *)(param_4 + 0xbc);
        *(float *)(param_4 + 0xbc) = fVar4;
        if (0.25 < fVar4) {
            *(undefined4 *)(param_4 + 0xbc) = 0;
            *(float *)(param_4 + 0xb0) = fVar4 + *(float *)(param_4 + 0xb0);
        }
    }
    else {
        fVar4 = *(float *)(param_4 + 0xbc);
        if ((0.0 < fVar4) && (iVar1 == 0)) {
            if (fVar4 <= 0.1) {
                *(float *)(param_4 + 0xbc) = fVar4 - *(float *)(param_4 + 0x120) * 0.01 * param_3;
            }
            else {
                *(undefined4 *)(param_4 + 0xbc) = 0;
                *(float *)(param_4 + 0xb0) = fVar4 + *(float *)(param_4 + 0xb0);
            }
        }
    }
    if (*(float *)(param_4 + 0xbc) <= 0.0 && *(float *)(param_4 + 0xbc) != 0.0) {
        *(undefined4 *)(param_4 + 0xbc) = 0;
    }
    if (iVar1 == 0) {
        *(undefined4 *)(param_4 + 0xac) = 0;
    }
    else {
        *(float *)(param_4 + 0xac) = param_3 + *(float *)(param_4 + 0xac);
    }
    if (*(int *)(param_4 + 0xb4) == 0) {
        *(undefined4 *)(param_4 + 0xb8) = 0;
    }
    else {
        *(float *)(param_4 + 0xb8) = param_3 + *(float *)(param_4 + 0xb8);
    }
    if (*(int *)(param_4 + 0xc0) == 0) {
        *(undefined4 *)(param_4 + 200) = 0;
    }
    else {
        *(float *)(param_4 + 200) = param_3 + *(float *)(param_4 + 200);
    }
    fVar4 = (float)FUN_1408fc7f0(param_3 * -0.6931472 * 20.0);
    *(undefined (*) [16])(param_4 + 0x50) =
            CONCAT412(*(float *)(param_4 + 0x5c) * fVar4,
                      CONCAT48(*(float *)(param_4 + 0x58) * fVar4,
                               CONCAT44(*(float *)(param_4 + 0x54) * fVar4,
                                        *(float *)(param_4 + 0x50) * fVar4)));
    return 1;
}



void FUN_1407bbf40(longlong param_1,float *param_2,int param_3,uint param_4,undefined8 param_5,
                   int param_6)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    uint *puVar4;
    undefined4 *puVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    undefined4 *puVar13;
    float *pfVar14;
    ulonglong uVar15;
    uint *puVar16;
    ulonglong uVar17;
    float fVar18;
    undefined extraout_var [12];
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    longlong local_res8;
    float *local_res10;
    int local_res18;
    uint local_res20;
    float local_118;
    undefined local_114 [4];
    longlong local_110;
    longlong local_108;
    undefined8 local_100;
    ulonglong local_f8;
    undefined8 local_f0;
    undefined8 local_e8;
    ulonglong local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    undefined auVar23 [16];

    lVar9 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1407b6330();
    pfVar14 = (float *)(lVar9 + 0x40);
    local_100 = 0;
    local_108 = 0;
    FUN_1405e7080(&local_108);
    uVar12 = 0x100;
    if (*(int *)(param_1 + 0xa8) != 0) {
        uVar12 = 0xc;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
        uVar12 = uVar12 | 0x30;
    }
    lVar10 = 1;
    local_res8 = 1;
    puVar2 = (uint *)FUN_14018db00(0);
    *puVar2 = uVar12;
    puVar3 = (undefined4 *)FUN_14018db00(0);
    uVar15 = 1;
    *puVar3 = 0;
    fVar29 = 0.5;
    fVar28 = 1000.0;
    fVar26 = 0.0;
    fVar27 = *(float *)(param_1 + 0xf0);
    fVar18 = *(float *)(param_1 + 0xf4);
    fVar20 = fVar18 * fVar18;
    fVar22 = *local_res10 - *pfVar14;
    fVar24 = local_res10[1] - *(float *)(lVar9 + 0x44);
    auVar23 = CONCAT412(local_res10[3] - *(float *)(lVar9 + 0x4c),
                        CONCAT48(local_res10[2] - *(float *)(lVar9 + 0x48),CONCAT44(fVar24,fVar22)));
    uVar11 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar20),0);
    uVar17 = uVar11 & 0xffffffff;
    fVar25 = (float)(ulonglong)local_res20 * 0.001;
    fVar21 = fVar27 * fVar27 + (float)uVar17 + 0.0;
    auVar19 = rsqrtss(CONCAT412(fVar20,CONCAT48(fVar20,uVar11 << 0x20 | uVar17)),
                      CONCAT412(*(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc),
                                CONCAT48(*(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xf8),
                                         CONCAT44(fVar20,fVar21))));
    fVar20 = SUB164(auVar19,0);
    fVar20 = (3.0 - fVar21 * fVar20 * fVar20) * 0.5 * fVar20;
    if (fVar20 <= 0.0) {
        fVar20 = 0.0;
    }
    fVar27 = fVar20 * fVar27;
    fVar20 = fVar20 * fVar18;
    fVar18 = fVar24 * fVar20 + fVar22 * fVar27 + 0.0;
    fVar22 = fVar22 - fVar18 * fVar27;
    fVar24 = fVar24 - fVar18 * fVar20;
    fVar18 = SQRT(fVar22 * fVar22 + fVar24 * fVar24 + 0.0) / fVar25;
    lVar9 = local_res8;
    if (1e-05 < fVar25) {
        lVar10 = 1;
        puVar13 = puVar3;
        puVar16 = puVar2;
        fVar22 = DAT_140c54b1c;
        while (puVar3 = puVar13, puVar2 = puVar16, lVar9 = lVar10, fVar25 + 1e-05 < fVar22) {
            auVar19 = divps(auVar23,CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))));
            *(undefined (*) [16])(param_1 + 0x60) = auVar19;
            if (local_res18 != 0) {
                fVar22 = fVar25 * fVar29;
                *(float *)(param_1 + 0x60) = SUB164(auVar19,0) - *(float *)(param_1 + 0xf0) * fVar22;
                *(float *)(param_1 + 100) = SUB164(auVar19 >> 0x20,0) - *(float *)(param_1 + 0xf4) * fVar22;
                *(float *)(param_1 + 0x68) = SUB164(auVar19 >> 0x40,0) - *(float *)(param_1 + 0xf8) * fVar22
                        ;
                *(float *)(param_1 + 0x6c) = SUB164(auVar19 >> 0x60,0) - *(float *)(param_1 + 0xfc) * fVar22
                        ;
            }
            iVar1 = FUN_1407ba940(param_1,&local_res8,&local_f8,local_114);
            if (((iVar1 == 0) || (iVar1 = FUN_1407bb5f0(param_1), iVar1 == 0)) ||
                (fVar22 = local_118, iVar1 = FUN_1407bb9c0(param_1), iVar1 == 0)) break;
            fVar26 = fVar26 + fVar22;
            FUN_1405e7080(&local_108,pfVar14);
            uVar12 = FUN_1407bc740(param_1);
            local_110 = lVar10 + 1;
            puVar4 = (uint *)FUN_14018db00(puVar16,local_110,4);
            puVar4[lVar10] = uVar12;
            fVar22 = fVar25;
            if ((puVar16 != puVar4) &&
                (FUN_1407db590(puVar4,puVar16), puVar2 = puVar4, fVar22 = fVar25, puVar16 != (uint *)0x0))
            {
                (**(code **)(*(longlong *)(puVar16 + -4) + 8))(puVar16 + -4);
                fVar22 = fVar25;
            }
            lVar10 = local_110;
            puVar5 = (undefined4 *)FUN_14018db00(puVar13,uVar15 + 1,4);
            puVar5[uVar15] = (int)(longlong)(fVar26 * fVar28);
            if ((puVar13 != puVar5) &&
                (FUN_1407db590(puVar5), puVar3 = puVar5, puVar13 != (undefined4 *)0x0)) {
                (**(code **)(*(longlong *)(puVar13 + -4) + 8))(puVar13 + -4);
            }
            pfVar14 = (float *)(param_1 + 0x40);
            uVar15 = uVar15 + 1;
            fVar21 = *local_res10 - *pfVar14;
            fVar25 = local_res10[1] - *(float *)(param_1 + 0x44);
            auVar23 = CONCAT412(local_res10[3] - *(float *)(param_1 + 0x4c),
                                CONCAT48(local_res10[2] - *(float *)(param_1 + 0x48),
                                         CONCAT44(fVar25,fVar21)));
            fVar24 = fVar25 * fVar20 + fVar21 * fVar27 + 0.0;
            fVar21 = fVar21 - fVar24 * fVar27;
            fVar25 = fVar25 - fVar24 * fVar20;
            fVar25 = SQRT(fVar21 * fVar21 + fVar25 * fVar25 + 0.0) / fVar18;
            puVar13 = puVar3;
            puVar16 = puVar2;
            lVar9 = lVar10;
            if (fVar25 <= 1e-05) break;
        }
    }
    local_res8 = lVar9;
    uVar11 = 0;
    if (((int)(longlong)(fVar26 * fVar28) != 0) && (uVar15 != 0)) {
        do {
            uVar17 = uVar11 + 1;
            puVar3[uVar11] =
                    (int)((ulonglong)(puVar3[uVar11] * local_res20) /
                          ((longlong)(fVar26 * fVar28) & 0xffffffffU)) + param_6;
            lVar10 = local_res8;
            uVar11 = uVar17;
        } while (uVar17 < uVar15);
    }
    FUN_1405e7080(&local_108,pfVar14);
    uVar12 = 0x100;
    if (*(int *)(param_1 + 0xa8) != 0) {
        uVar12 = 0xc;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
        uVar12 = uVar12 | 0x30;
    }
    puVar4 = (uint *)FUN_14018db00(puVar2,lVar10 + 1,4);
    puVar4[lVar10] = uVar12;
    puVar16 = puVar2;
    if ((puVar2 != puVar4) && (FUN_1407db590(puVar4,puVar2), puVar16 = puVar4, puVar2 != (uint *)0x0))
    {
        (**(code **)(*(longlong *)(puVar2 + -4) + 8))(puVar2 + -4);
    }
    uVar11 = uVar15 + 1;
    puVar5 = (undefined4 *)FUN_14018db00(puVar3,uVar11,4);
    puVar5[uVar15] = param_6 + local_res20;
    puVar13 = puVar3;
    if ((puVar3 != puVar5) &&
        (FUN_1407db590(puVar5,puVar3), puVar13 = puVar5, puVar3 != (undefined4 *)0x0)) {
        (**(code **)(*(longlong *)(puVar3 + -4) + 8))(puVar3 + -4);
    }
    uVar17 = uVar11 & 0xffffffff;
    local_f0 = 0;
    local_e8 = 0;
    local_f8 = uVar11 & 0xffffffff;
    uVar6 = SUB168(ZEXT816(4) * ZEXT816(uVar17),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar17) >> 0x40,0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6,0);
    local_f0 = uVar6;
    FUN_1407db590(uVar6,puVar13,uVar17 * 4);
    uVar7 = SUB168(ZEXT816(0xc) * ZEXT816(uVar17),0);
    if (SUB168(ZEXT816(0xc) * ZEXT816(uVar17) >> 0x40,0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    local_e8 = FUN_14018b280(uVar7,0);
    FUN_1407db590(local_e8,local_108,uVar17 * 0xc);
    if ((int)uVar11 != 0) {
        FUN_1407bce70(&local_f8);
        uVar6 = local_f0;
    }
    local_d0 = 0;
    local_c8 = 0;
    local_d8 = uVar11 & 0xffffffff;
    uVar7 = SUB168(ZEXT816(4) * ZEXT816(uVar17),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar17) >> 0x40,0) != 0) {
        uVar7 = 0xffffffffffffffff;
    }
    uVar7 = FUN_14018b280(uVar7,0);
    local_d0 = uVar7;
    FUN_1407db590(uVar7,puVar13,uVar17 * 4);
    uVar8 = SUB168(ZEXT816(4) * ZEXT816(uVar17),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar17) >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8,0);
    local_c8 = uVar8;
    FUN_1407db590(uVar8,puVar16,uVar17 * 4);
    if ((int)uVar11 != 0) {
        FUN_1407bdd70(&local_d8);
        uVar11 = local_d8 & 0xffffffff;
        uVar8 = local_c8;
        uVar7 = local_d0;
    }
    FUN_14079a660(param_5,local_f8 & 0xffffffff,uVar6,local_e8);
    FUN_14079a880(param_5,uVar11 & 0xffffffff,uVar7,uVar8);
    FUN_14018b900(uVar7,0);
    FUN_14018b900(uVar8,0);
    FUN_14018b900(uVar6,0);
    FUN_14018b900(local_e8,0);
    if (puVar13 != (undefined4 *)0x0) {
        (**(code **)(*(longlong *)(puVar13 + -4) + 8))(puVar13 + -4);
    }
    if (puVar16 != (uint *)0x0) {
        (**(code **)(*(longlong *)(puVar16 + -4) + 8))(puVar16 + -4);
    }
    if (local_108 != 0) {
        (**(code **)(*(longlong *)(local_108 + -0x10) + 8))(local_108 + -0x10);
    }
    return;
}



undefined8 FUN_1407bc630(longlong param_1)

{
    int *piVar1;
    ulonglong uVar2;

    FUN_1407b64c0(param_1,param_1 + 0x40,param_1 + 0x40,0x4041);
    FUN_1407b74e0(param_1);
    FUN_1407b8180();
    if (DAT_140c7f878 < 2) {
        return 0;
    }
    uVar2 = 0;
    if (DAT_140c7f898 != 0) {
        piVar1 = (int *)(DAT_140c7f890 + 0x30);
        do {
            if (*piVar1 != 0) {
                return 0;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 0x10;
        } while (uVar2 < DAT_140c7f898);
    }
    return 1;
}



undefined4 FUN_1407bc6b0(longlong param_1,float *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined local_18 [16];

    lVar2 = param_1;
    FUN_1407b6330();
    local_18 = *(undefined (*) [16])(lVar2 + 0x40);
    FUN_1407b64c0();
    FUN_1407b74e0(param_1);
    local_18 = CONCAT412(param_2[3] - *(float *)(param_1 + 0x4c),
                         CONCAT48(param_2[2] - *(float *)(param_1 + 0x48),
                                  CONCAT44(param_2[1] - *(float *)(param_1 + 0x44),
                                           *param_2 - *(float *)(param_1 + 0x40))));
    iVar1 = FUN_1407b80b0(param_1,local_18);
    if (iVar1 != 0) {
        FUN_1407b93e0(param_1);
        return *(undefined4 *)(param_1 + 0x480);
    }
    *(undefined4 *)(param_1 + 0x480) = 0;
    return *(undefined4 *)(param_1 + 0x480);
}



uint FUN_1407bc740(longlong param_1)

{
    uint uVar1;

    uVar1 = 0x100;
    if (*(int *)(param_1 + 0xa8) != 0) {
        uVar1 = 0xc;
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
        uVar1 = uVar1 | 0x30;
    }
    return uVar1;
}



void FUN_1407bc770(longlong param_1)

{
    float *pfVar1;
    uint uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float *pfVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;

    FUN_1402626b0(param_1 + 0x4c0);
    uVar16 = 0;
    uVar15 = uVar16;
    uVar17 = uVar16;
    uVar18 = DAT_140c7f898;
    if (DAT_140c7f898 != 0) {
        do {
            lVar14 = DAT_140c7f890 + uVar17;
            if (*(int *)(lVar14 + 0x30) != 0) {
                FUN_1407ba560(param_1,lVar14,lVar14 + 0x10);
                uVar18 = DAT_140c7f898;
            }
            uVar15 = uVar15 + 1;
            uVar17 = uVar17 + 0x40;
        } while (uVar15 < uVar18);
    }
    lVar14 = (**(code **)(*DAT_140c65670 + 0xe0))();
    if (lVar14 != 0) {
        FUN_1407db590(lVar14);
        (**(code **)(*DAT_140c65670 + 0xe8))();
        (**(code **)(*DAT_140c65670 + 0x288))();
    }
    uVar2 = *(uint *)(param_1 + 0x390);
    pfVar13 = (float *)(**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,uVar2 << 4,0xf);
    if (pfVar13 != (float *)0x0) {
        if (uVar2 != 0) {
            uVar15 = (ulonglong)uVar2;
            do {
                uVar16 = uVar16 + 0x10;
                pfVar1 = (float *)(*(longlong *)(param_1 + 0x388) + -0x10 + uVar16);
                fVar3 = *pfVar1;
                fVar4 = pfVar1[1];
                fVar5 = *(float *)(param_1 + 0x2f4);
                fVar6 = *(float *)(param_1 + 0x2f8);
                fVar7 = *(float *)(param_1 + 0x2e4);
                fVar8 = *(float *)(param_1 + 0x2e8);
                fVar9 = *(float *)(param_1 + 0x304);
                fVar10 = *(float *)(param_1 + 0x308);
                fVar11 = *(float *)(param_1 + 0x314);
                fVar12 = *(float *)(param_1 + 0x318);
                *pfVar13 = fVar4 * *(float *)(param_1 + 0x2f0) + fVar3 * *(float *)(param_1 + 0x2e0) +
                           *(float *)(param_1 + 0x300) * 0.0 + *(float *)(param_1 + 0x310);
                pfVar13[1] = fVar4 * fVar5 + fVar3 * fVar7 + fVar9 * 0.0 + fVar11;
                pfVar13[2] = fVar4 * fVar6 + fVar3 * fVar8 + fVar10 * 0.0 + fVar12;
                uVar15 = uVar15 - 1;
                pfVar13 = pfVar13 + 4;
            } while (uVar15 != 0);
        }
        (**(code **)(*DAT_140c65670 + 0xe8))();
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,3,0,uVar2,1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407bc940(longlong param_1,undefined (*param_2) [16])

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fStack36;
    float fStack32;
    float fStack20;
    float fStack16;

    uVar3 = uRam0000000140c798cc;
    uVar2 = uRam0000000140c798c8;
    uVar1 = uRam0000000140c798c4;
    auVar5 = minps(*(undefined (*) [16])(param_1 + 0x370),param_2[1]);
    auVar4 = maxps(*(undefined (*) [16])(param_1 + 0x360),*param_2);
    if (((SUB164(auVar4,0) < SUB164(auVar5,0)) &&
         (fStack36 = SUB164(auVar4 >> 0x20,0), fStack20 = SUB164(auVar5 >> 0x20,0), fStack36 < fStack20
         )) && (fStack32 = SUB164(auVar4 >> 0x40,0), fStack16 = SUB164(auVar5 >> 0x40,0),
            fStack32 < fStack16)) {
        *(undefined4 *)(param_1 + 0x360) = _DAT_140c798c0;
        *(undefined4 *)(param_1 + 0x364) = uVar1;
        *(undefined4 *)(param_1 + 0x368) = uVar2;
        *(undefined4 *)(param_1 + 0x36c) = uVar3;
        uVar3 = uRam0000000140c798dc;
        uVar2 = uRam0000000140c798d8;
        uVar1 = uRam0000000140c798d4;
        *(undefined4 *)(param_1 + 0x370) = _DAT_140c798d0;
        *(undefined4 *)(param_1 + 0x374) = uVar1;
        *(undefined4 *)(param_1 + 0x378) = uVar2;
        *(undefined4 *)(param_1 + 0x37c) = uVar3;
    }
    return;
}



void FUN_1407bc9b0(void)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 *puVar9;

    if (DAT_140c7f868 != 0) {
        DAT_140c7f868 = 0;
        return;
    }
    puVar5 = (undefined4 *)FUN_14018db00(DAT_140c7f860,0,0x20);
    puVar6 = DAT_140c7f860;
    if (DAT_140c7f860 != puVar5) {
        uVar7 = 0;
        puVar9 = DAT_140c7f860;
        if (DAT_140c7f868 != 0) {
            puVar6 = puVar5;
            uVar8 = DAT_140c7f868;
            do {
                if (puVar6 != (undefined4 *)0x0) {
                    puVar1 = (undefined4 *)(((longlong)puVar6 - (longlong)puVar5) + (longlong)puVar9);
                    uVar2 = puVar1[1];
                    uVar3 = puVar1[2];
                    uVar4 = puVar1[3];
                    *puVar6 = *puVar1;
                    puVar6[1] = uVar2;
                    puVar6[2] = uVar3;
                    puVar6[3] = uVar4;
                    *(undefined8 *)(puVar6 + 4) =
                            *(undefined8 *)(((longlong)puVar6 - (longlong)puVar5) + 0x10 + (longlong)puVar9);
                    uVar8 = DAT_140c7f868;
                    puVar9 = DAT_140c7f860;
                }
                uVar7 = uVar7 + 1;
                puVar6 = puVar6 + 8;
            } while (uVar7 < uVar8);
        }
        puVar6 = puVar5;
        if (puVar9 != (undefined4 *)0x0) {
            (**(code **)(*(longlong *)(puVar9 + -4) + 8))(puVar9 + -4);
        }
    }
    DAT_140c7f860 = puVar6;
    DAT_140c7f868 = 0;
    return;
}



ulonglong FUN_1407bca70(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined4 *puVar11;

    uVar6 = DAT_140c7f868;
    lVar1 = DAT_140c7f868 + 1;
    puVar7 = (undefined4 *)FUN_14018db00(DAT_140c7f860,lVar1,0x20);
    puVar8 = puVar7 + uVar6 * 8;
    if (puVar8 != (undefined4 *)0x0) {
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        *puVar8 = *param_2;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_2 + 4);
    }
    puVar8 = DAT_140c7f860;
    if (DAT_140c7f860 != puVar7) {
        uVar10 = 0;
        puVar11 = DAT_140c7f860;
        if (DAT_140c7f868 != 0) {
            puVar8 = puVar7;
            uVar9 = DAT_140c7f868;
            do {
                if (puVar8 != (undefined4 *)0x0) {
                    puVar2 = (undefined4 *)(((longlong)puVar8 - (longlong)puVar7) + (longlong)puVar11);
                    uVar3 = puVar2[1];
                    uVar4 = puVar2[2];
                    uVar5 = puVar2[3];
                    *puVar8 = *puVar2;
                    puVar8[1] = uVar3;
                    puVar8[2] = uVar4;
                    puVar8[3] = uVar5;
                    *(undefined8 *)(puVar8 + 4) =
                            *(undefined8 *)(((longlong)puVar8 - (longlong)puVar7) + 0x10 + (longlong)puVar11);
                    uVar9 = DAT_140c7f868;
                    puVar11 = DAT_140c7f860;
                }
                uVar10 = uVar10 + 1;
                puVar8 = puVar8 + 8;
            } while (uVar10 < uVar9);
        }
        puVar8 = puVar7;
        if (puVar11 != (undefined4 *)0x0) {
            (**(code **)(*(longlong *)(puVar11 + -4) + 8))(puVar11 + -4);
        }
    }
    DAT_140c7f860 = puVar8;
    DAT_140c7f868 = lVar1;
    return uVar6;
}



void FUN_1407bcb60(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    ulonglong uVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    ulonglong uVar11;

    uVar8 = param_2 + 1;
    lVar1 = DAT_140c7f868 - 1;
    if (uVar8 < DAT_140c7f868) {
        lVar6 = uVar8 * 0x20;
        uVar11 = DAT_140c7f868;
        do {
            puVar7 = DAT_140c7f860;
            puVar9 = (undefined4 *)((longlong)DAT_140c7f860 + lVar6 + -0x20);
            if (puVar9 != (undefined4 *)0x0) {
                puVar10 = (undefined4 *)(lVar6 + (longlong)DAT_140c7f860);
                uVar3 = puVar10[1];
                uVar4 = puVar10[2];
                uVar5 = puVar10[3];
                *puVar9 = *puVar10;
                puVar9[1] = uVar3;
                puVar9[2] = uVar4;
                puVar9[3] = uVar5;
                *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar6 + 0x10 + (longlong)puVar7);
                uVar11 = DAT_140c7f868;
            }
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
        } while (uVar8 < uVar11);
    }
    puVar9 = (undefined4 *)FUN_14018db00(DAT_140c7f860,lVar1,0x20);
    puVar7 = DAT_140c7f860;
    if (DAT_140c7f860 != puVar9) {
        puVar10 = DAT_140c7f860;
        if (lVar1 != 0) {
            puVar7 = puVar9;
            lVar6 = lVar1;
            do {
                if (puVar7 != (undefined4 *)0x0) {
                    puVar2 = (undefined4 *)(((longlong)puVar7 - (longlong)puVar9) + (longlong)puVar10);
                    uVar3 = puVar2[1];
                    uVar4 = puVar2[2];
                    uVar5 = puVar2[3];
                    *puVar7 = *puVar2;
                    puVar7[1] = uVar3;
                    puVar7[2] = uVar4;
                    puVar7[3] = uVar5;
                    *(undefined8 *)(puVar7 + 4) =
                            *(undefined8 *)(((longlong)puVar7 - (longlong)puVar9) + 0x10 + (longlong)puVar10);
                    puVar10 = DAT_140c7f860;
                }
                puVar7 = puVar7 + 8;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        puVar7 = puVar9;
        if (puVar10 != (undefined4 *)0x0) {
            (**(code **)(*(longlong *)(puVar10 + -4) + 8))(puVar10 + -4);
        }
    }
    DAT_140c7f860 = puVar7;
    DAT_140c7f868 = lVar1;
    return;
}



void FUN_1407bcc60(void)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong lVar8;
    int iVar9;
    ulonglong uVar10;
    longlong lVar11;
    undefined4 *puVar12;
    ulonglong uVar13;

    if (DAT_140c7f898 != 0) {
        DAT_140c7f898 = 0;
        return;
    }
    lVar6 = FUN_14018db00(DAT_140c7f890,0,0x40);
    lVar8 = DAT_140c7f890;
    if (DAT_140c7f890 != lVar6) {
        uVar13 = 0;
        lVar11 = DAT_140c7f890;
        if (DAT_140c7f898 != 0) {
            lVar8 = lVar6;
            uVar10 = DAT_140c7f898;
            do {
                if (lVar8 != 0) {
                    iVar9 = 2;
                    puVar12 = (undefined4 *)((lVar8 - lVar6) + lVar11);
                    puVar7 = puVar12;
                    do {
                        iVar9 = iVar9 + -1;
                        uVar2 = *puVar7;
                        uVar3 = puVar7[1];
                        uVar4 = puVar7[2];
                        uVar5 = puVar7[3];
                        puVar7 = puVar7 + 4;
                        puVar1 = (undefined4 *)((lVar8 - (longlong)puVar12) + -0x10 + (longlong)puVar7);
                        *puVar1 = uVar2;
                        puVar1[1] = uVar3;
                        puVar1[2] = uVar4;
                        puVar1[3] = uVar5;
                    } while (-1 < iVar9);
                    *(undefined4 *)(lVar8 + 0x30) = puVar12[0xc];
                    uVar10 = DAT_140c7f898;
                    lVar11 = DAT_140c7f890;
                }
                uVar13 = uVar13 + 1;
                lVar8 = lVar8 + 0x40;
            } while (uVar13 < uVar10);
        }
        lVar8 = lVar6;
        if (lVar11 != 0) {
            (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
        }
    }
    DAT_140c7f890 = lVar8;
    DAT_140c7f898 = 0;
    return;
}



ulonglong FUN_1407bcd40(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    int iVar11;
    longlong lVar12;
    longlong lVar13;
    undefined4 *puVar14;
    ulonglong uVar15;

    uVar7 = DAT_140c7f898;
    lVar1 = DAT_140c7f898 + 1;
    lVar8 = FUN_14018db00(DAT_140c7f890,lVar1,0x40);
    lVar13 = uVar7 * 0x40 + lVar8;
    if (lVar13 != 0) {
        iVar11 = 2;
        puVar9 = param_2;
        do {
            iVar11 = iVar11 + -1;
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            uVar5 = puVar9[2];
            uVar6 = puVar9[3];
            puVar9 = puVar9 + 4;
            puVar14 = (undefined4 *)((lVar13 - (longlong)param_2) + -0x10 + (longlong)puVar9);
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
            puVar14[2] = uVar5;
            puVar14[3] = uVar6;
        } while (-1 < iVar11);
        *(undefined4 *)(lVar13 + 0x30) = param_2[0xc];
    }
    lVar13 = DAT_140c7f890;
    if (DAT_140c7f890 != lVar8) {
        uVar15 = 0;
        lVar12 = DAT_140c7f890;
        if (DAT_140c7f898 != 0) {
            uVar10 = DAT_140c7f898;
            lVar13 = lVar8;
            do {
                if (lVar13 != 0) {
                    puVar14 = (undefined4 *)((lVar13 - lVar8) + lVar12);
                    iVar11 = 2;
                    puVar9 = puVar14;
                    do {
                        iVar11 = iVar11 + -1;
                        uVar3 = *puVar9;
                        uVar4 = puVar9[1];
                        uVar5 = puVar9[2];
                        uVar6 = puVar9[3];
                        puVar9 = puVar9 + 4;
                        puVar2 = (undefined4 *)((lVar13 - (longlong)puVar14) + -0x10 + (longlong)puVar9);
                        *puVar2 = uVar3;
                        puVar2[1] = uVar4;
                        puVar2[2] = uVar5;
                        puVar2[3] = uVar6;
                    } while (-1 < iVar11);
                    *(undefined4 *)(lVar13 + 0x30) = puVar14[0xc];
                    uVar10 = DAT_140c7f898;
                    lVar12 = DAT_140c7f890;
                }
                uVar15 = uVar15 + 1;
                lVar13 = lVar13 + 0x40;
            } while (uVar15 < uVar10);
        }
        lVar13 = lVar8;
        if (lVar12 != 0) {
            (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
        }
    }
    DAT_140c7f890 = lVar13;
    DAT_140c7f898 = lVar1;
    return uVar7;
}



void FUN_1407bce70(uint *param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    int *piVar4;
    undefined **ppuVar5;
    longlong *plVar6;
    undefined4 *puVar7;
    undefined *puVar8;
    undefined *puVar9;
    float *pfVar10;
    undefined8 uVar11;
    uint *puVar12;
    undefined8 *puVar13;
    longlong lVar14;
    longlong **pplVar15;
    undefined8 uVar16;
    int iVar17;
    longlong **pplVar18;
    longlong lVar19;
    uint uVar20;
    ulonglong uVar21;
    undefined *puVar22;
    longlong **pplVar23;
    ulonglong uVar24;
    uint uVar25;
    uint **ppuVar26;
    undefined8 *puVar27;
    undefined8 *puVar28;
    uint uVar29;
    undefined8 *puVar30;
    uint uVar32;
    undefined8 *puVar33;
    longlong *plVar34;
    bool bVar35;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    float fVar36;
    float fVar37;
    float fVar38;
    undefined4 uVar39;
    float fVar40;
    float fVar41;
    uint *local_res18;
    longlong *local_b8 [2];
    longlong *local_a8;
    undefined4 local_a0;
    undefined *local_98;
    longlong **local_90;
    undefined8 *local_88;
    uint *local_80;
    undefined8 *puVar31;

    uVar20 = 1;
    uVar24 = 1;
    uVar29 = 1;
    fVar41 = DAT_140c5f470;
    if (1 < *param_1) {
        do {
            if (*(uint *)(*(longlong *)(param_1 + 2) + uVar24 * 4) <=
                *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)((int)uVar24 - 1) * 4)) {
                FUN_1407bdef0();
                break;
            }
            uVar25 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar25;
        } while (uVar25 < *param_1);
    }
    piVar4 = *(int **)(param_1 + 2);
    puVar27 = (undefined8 *)0x0;
    fVar40 = 0.0;
    if ((*piVar4 < 0) && (uVar25 = *param_1, puVar28 = puVar27, uVar25 != 0)) {
        do {
            if (-1 < piVar4[(longlong)puVar28]) break;
            uVar32 = (int)puVar28 + 1;
            puVar28 = (undefined8 *)(ulonglong)uVar32;
        } while (uVar32 < uVar25);
        uVar32 = (uint)puVar28;
        if (uVar32 != 0) {
            if (uVar32 == uVar25) {
                piVar4[(longlong)(undefined8 *)(ulonglong)(uVar32 - 1)] = 0;
                puVar13 = (undefined8 *)(ulonglong)(uVar32 - 1);
            }
            else {
                puVar13 = puVar28;
                if (piVar4[(longlong)puVar28] != 0) {
                    lVar14 = *(longlong *)(param_1 + 4);
                    puVar13 = (undefined8 *)(ulonglong)(uVar32 - 1);
                    fVar37 = *(float *)(lVar14 + (longlong)puVar13 * 0xc);
                    fVar38 = *(float *)(lVar14 + 8 + (longlong)puVar28 * 0xc);
                    fVar1 = *(float *)(lVar14 + 4 + (longlong)puVar28 * 0xc);
                    fVar2 = *(float *)(lVar14 + 8 + (longlong)puVar13 * 0xc);
                    fVar3 = *(float *)(lVar14 + 4 + (longlong)puVar13 * 0xc);
                    fVar36 = (float)(ulonglong)(uint)-piVar4[(longlong)puVar13] /
                    (float)(ulonglong)(uint)(piVar4[(longlong)puVar28] - piVar4[(longlong)puVar13]);
                    *(float *)(lVar14 + (longlong)puVar13 * 0xc) =
                    fVar36 * (*(float *)(lVar14 + (longlong)puVar28 * 0xc) - fVar37) + fVar37;
                    *(float *)(lVar14 + 4 + (longlong)puVar13 * 0xc) = fVar36 * (fVar1 - fVar3) + fVar3;
                    *(float *)(lVar14 + 8 + (longlong)puVar13 * 0xc) = fVar36 * (fVar38 - fVar2) + fVar2;
                    *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar13 * 4) = 0;
                }
            }
            if ((uint)puVar13 != 0) {
                puVar28 = puVar27;
                puVar30 = puVar27;
                if ((uint)puVar13 < *param_1) {
                    do {
                        uVar25 = (int)puVar13 + 1;
                        puVar28 = (undefined8 *)(ulonglong)((int)puVar30 + 1);
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar30 * 4) =
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar13 * 4);
                        lVar14 = *(longlong *)(param_1 + 4);
                        *(undefined4 *)(lVar14 + (longlong)puVar30 * 0xc) =
                        *(undefined4 *)(lVar14 + (longlong)puVar13 * 0xc);
                        *(undefined4 *)(lVar14 + 4 + (longlong)puVar30 * 0xc) =
                        *(undefined4 *)(lVar14 + 4 + (longlong)puVar13 * 0xc);
                        *(undefined4 *)(lVar14 + 8 + (longlong)puVar30 * 0xc) =
                        *(undefined4 *)(lVar14 + 8 + (longlong)puVar13 * 0xc);
                        puVar30 = puVar28;
                        puVar13 = (undefined8 *)(ulonglong)uVar25;
                    } while (uVar25 < *param_1);
                }
                *param_1 = (uint)puVar28;
                uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 2),(longlong)puVar28 << 2);
                *(undefined8 *)(param_1 + 2) = uVar11;
                uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 4));
                *(undefined8 *)(param_1 + 4) = uVar11;
            }
        }
    }
    if (fVar41 < fVar40) {
        if (1 < *param_1) {
            do {
                lVar14 = *(longlong *)(param_1 + 4);
                uVar24 = (ulonglong)(uVar20 - 1);
                uVar21 = (ulonglong)uVar29;
                if (fVar41 < fVar40) {
                    lVar19 = *(longlong *)(lVar14 + uVar24 * 0xc) - *(longlong *)(lVar14 + uVar21 * 0xc);
                    if (lVar19 == 0) {
                        lVar19 = (ulonglong)*(uint *)(lVar14 + 8 + uVar24 * 0xc) -
                                 (ulonglong)*(uint *)(lVar14 + 8 + uVar21 * 0xc);
                    }
                    bVar35 = lVar19 == 0;
                }
                else {
                    fVar37 = *(float *)(lVar14 + uVar24 * 0xc) - *(float *)(lVar14 + uVar21 * 0xc);
                    fVar38 = *(float *)(lVar14 + 4 + uVar24 * 0xc) - *(float *)(lVar14 + 4 + uVar21 * 0xc);
                    bVar35 = fVar37 * fVar37 + fVar38 * fVar38 + 0.0 < fVar41 * fVar41;
                }
                if (!bVar35) {
                    uVar24 = (ulonglong)uVar20;
                    uVar20 = uVar20 + 1;
                    *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar24 * 4) =
                            *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar21 * 4);
                    lVar14 = *(longlong *)(param_1 + 4);
                    *(undefined4 *)(lVar14 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + uVar21 * 0xc);
                    *(undefined4 *)(lVar14 + 4 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + 4 + uVar21 * 0xc);
                    *(undefined4 *)(lVar14 + 8 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + 8 + uVar21 * 0xc);
                }
                uVar29 = uVar29 + 1;
            } while (uVar29 < *param_1);
            *param_1 = uVar20;
            uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 2),(ulonglong)uVar20 << 2,0);
            *(undefined8 *)(param_1 + 2) = uVar11;
            uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 4),(ulonglong)*param_1 * 0xc,0);
            *(undefined8 *)(param_1 + 4) = uVar11;
        }
    }
    else {
        if (2 < *param_1) {
            puVar28 = puVar27;
            puVar13 = puVar27;
            puVar30 = puVar27;
            if (*param_1 != 0) {
                do {
                    uVar29 = (uint)puVar28 + 1;
                    puVar31 = (undefined8 *)(ulonglong)uVar29;
                    *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar30 * 4) =
                    *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar28 * 4);
                    lVar14 = *(longlong *)(param_1 + 4);
                    puVar33 = (undefined8 *)(ulonglong)((int)puVar30 + 1);
                    *(undefined4 *)(lVar14 + (longlong)puVar30 * 0xc) =
                    *(undefined4 *)(lVar14 + (longlong)puVar28 * 0xc);
                    *(undefined4 *)(lVar14 + 4 + (longlong)puVar30 * 0xc) =
                    *(undefined4 *)(lVar14 + 4 + (longlong)puVar28 * 0xc);
                    *(undefined4 *)(lVar14 + 8 + (longlong)puVar30 * 0xc) =
                    *(undefined4 *)(lVar14 + 8 + (longlong)puVar28 * 0xc);
                    if (uVar29 < *param_1) {
                        lVar14 = *(longlong *)(param_1 + 4);
                        do {
                            fVar40 = *(float *)(lVar14 + (longlong)puVar28 * 0xc) -
                                    *(float *)(lVar14 + (longlong)puVar31 * 0xc);
                            fVar37 = *(float *)(lVar14 + 4 + (longlong)puVar28 * 0xc) -
                                    *(float *)(lVar14 + 4 + (longlong)puVar31 * 0xc);
                            fVar38 = *(float *)(lVar14 + 8 + (longlong)puVar28 * 0xc) -
                                    *(float *)(lVar14 + 8 + (longlong)puVar31 * 0xc);
                            if (9.999999e-11 <= fVar40 * fVar40 + fVar37 * fVar37 + fVar38 * fVar38) break;
                            uVar29 = (int)puVar31 + 1;
                            puVar31 = (undefined8 *)(ulonglong)uVar29;
                        } while (uVar29 < *param_1);
                    }
                    uVar29 = (uint)puVar31 - 1;
                    puVar13 = puVar33;
                    if ((uint)puVar28 < uVar29) {
                        uVar24 = (ulonglong)uVar29;
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)puVar33 * 4) =
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar29 * 4);
                        lVar14 = *(longlong *)(param_1 + 4);
                        puVar13 = (undefined8 *)(ulonglong)((int)puVar30 + 2);
                        *(undefined4 *)(lVar14 + (longlong)puVar33 * 0xc) =
                        *(undefined4 *)(lVar14 + uVar24 * 0xc);
                        *(undefined4 *)(lVar14 + 4 + (longlong)puVar33 * 0xc) =
                        *(undefined4 *)(lVar14 + 4 + uVar24 * 0xc);
                        *(undefined4 *)(lVar14 + 8 + (longlong)puVar33 * 0xc) =
                        *(undefined4 *)(lVar14 + 8 + uVar24 * 0xc);
                    }
                    puVar28 = puVar31;
                    puVar30 = puVar13;
                } while ((uint)puVar31 < *param_1);
            }
            *param_1 = (uint)puVar13;
            uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 2),(longlong)puVar13 << 2);
            *(undefined8 *)(param_1 + 2) = uVar11;
            uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 4));
            uVar29 = *param_1;
            *(undefined8 *)(param_1 + 4) = uVar11;
            if (2 < uVar29) {
                uVar24 = (ulonglong)uVar29;
                puVar12 = (uint *)FUN_14018b280();
                if (puVar12 == (uint *)0x0) {
                    local_res18 = (uint *)0x0;
                }
                else {
                    iVar17 = uVar29 - 1;
                    local_res18 = puVar12 + 2;
                    *puVar12 = uVar29;
                    if (-1 < iVar17) {
                        puVar28 = (undefined8 *)(puVar12 + 8);
                        do {
                            iVar17 = iVar17 + -1;
                            *puVar28 = 0;
                            puVar28 = puVar28 + 5;
                        } while (-1 < iVar17);
                    }
                }
                if (uVar29 != 0) {
                    ppuVar26 = (uint **)(local_res18 + 4);
                    puVar28 = puVar27;
                    do {
                        uVar20 = (uint)puVar28;
                        puVar28 = puVar27;
                        if (uVar20 != 0) {
                            puVar28 = (undefined8 *)(local_res18 + (ulonglong)(uVar20 - 1) * 10);
                        }
                        ppuVar26[-1] = (uint *)puVar28;
                        puVar13 = puVar27;
                        if (uVar20 < *param_1 - 1) {
                            puVar13 = (undefined8 *)(local_res18 + (ulonglong)(uVar20 + 1) * 10);
                        }
                        *(uint *)((longlong)ppuVar26 + -0xc) = uVar20;
                        puVar28 = (undefined8 *)(ulonglong)(uVar20 + 1);
                        *ppuVar26 = (uint *)puVar13;
                        ppuVar26 = ppuVar26 + 5;
                    } while (uVar20 + 1 < uVar29);
                }
                local_88 = (undefined8 *)0x0;
                local_90 = (longlong **)0x0;
                local_98 = &LAB_1407be6c0;
                pplVar15 = local_90;
                if (uVar29 != 0) {
                    puVar13 = (undefined8 *)FUN_14018b280(((ulonglong)uVar29 + 1) * 0x10,0);
                    puVar28 = puVar27;
                    if (puVar13 != (undefined8 *)0x0) {
                        puVar13[1] = uVar24;
                        *puVar13 = &PTR_LAB_140b55060;
                        puVar28 = puVar13;
                    }
                    pplVar23 = (longlong **)(puVar28 + 2);
                    pplVar15 = local_90;
                    if (local_90 != pplVar23) {
                        if (local_88 != (undefined8 *)0x0) {
                            pplVar15 = pplVar23;
                            do {
                                if (pplVar15 != (longlong **)0x0) {
                                    pplVar18 = (longlong **)
                                            (((longlong)pplVar15 - (longlong)pplVar23) + (longlong)local_90);
                                    *pplVar15 = *pplVar18;
                                    *(undefined4 *)(pplVar15 + 1) = *(undefined4 *)(pplVar18 + 1);
                                }
                                puVar27 = (undefined8 *)((longlong)puVar27 + 1);
                                pplVar15 = pplVar15 + 2;
                            } while (puVar27 < local_88);
                        }
                        pplVar15 = pplVar23;
                        if (local_90 != (longlong **)0x0) {
                            (*(code *)local_90[-2][1])();
                        }
                    }
                }
                local_90 = pplVar15;
                local_80 = local_res18;
                if (uVar29 != 0) {
                    plVar34 = (longlong *)(local_res18 + 6);
                    puVar12 = local_res18;
                    do {
                        FUN_1407be0e0(param_1,puVar12);
                        *(undefined4 *)(plVar34 + -3) = extraout_XMM0_Da;
                        ppuVar5 = (undefined **)*plVar34;
                        if (ppuVar5 == (undefined **)0x0) {
                            *plVar34 = (longlong)&local_98;
                            pplVar15 = local_b8;
                            local_b8[0] = plVar34;
                            LAB_1407bd469:
                            lVar14 = FUN_1407be5e0(&local_90,pplVar15);
                            plVar34[1] = lVar14;
                            FUN_1407be330(&local_98,plVar34);
                        }
                        else {
                            if (ppuVar5 != &local_98) {
                                puVar8 = (undefined *)plVar34[1];
                                *plVar34 = 0;
                                puVar22 = ppuVar5[2] + -1;
                                if (puVar8 < puVar22) {
                                    puVar9 = ppuVar5[1];
                                    *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10) =
                                    *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10);
                                    *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10 + 8) =
                                    *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10 + 8);
                                    FUN_1407be530(ppuVar5 + 1);
                                    lVar14 = *(longlong *)(ppuVar5[1] + (longlong)puVar8 * 0x10);
                                    *(undefined **)(lVar14 + 8) = puVar8;
                                    iVar17 = FUN_1407be330(ppuVar5,lVar14);
                                    if (iVar17 == 0) {
                                        FUN_1407be410(ppuVar5,lVar14);
                                    }
                                }
                                else {
                                    FUN_1407be530(ppuVar5 + 1);
                                }
                                pplVar15 = &local_a8;
                                *plVar34 = (longlong)&local_98;
                                local_a0 = *(undefined4 *)(plVar34 + -3);
                                local_a8 = plVar34;
                                goto LAB_1407bd469;
                            }
                            *(undefined4 *)(local_90 + plVar34[1] * 2 + 1) = *(undefined4 *)(plVar34 + -3);
                            iVar17 = FUN_1407be330(&local_98,plVar34);
                            if (iVar17 == 0) {
                                FUN_1407be410(&local_98,plVar34);
                            }
                        }
                        puVar12 = puVar12 + 10;
                        plVar34 = plVar34 + 5;
                        uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                }
                fVar40 = fVar41 * fVar41;
                joined_r0x0001407bd4ab:
                if (2 < uVar29) {
                    plVar34 = (longlong *)0x0;
                    if (local_88 != (undefined8 *)0x0) {
                        plVar34 = *local_90;
                    }
                    if (fVar40 < *(float *)(plVar34 + -3)) goto LAB_1407bda03;
                    if ((undefined **)*plVar34 == &local_98) {
                        uVar24 = plVar34[1];
                        *plVar34 = 0;
                        uVar21 = (longlong)local_88 - 1;
                        if (uVar24 < uVar21) {
                            local_90[uVar24 * 2] = local_90[uVar21 * 2];
                            local_90[uVar24 * 2 + 1] = local_90[uVar21 * 2 + 1];
                            FUN_1407be530(&local_90);
                            plVar6 = local_90[uVar24 * 2];
                            plVar6[1] = uVar24;
                            iVar17 = FUN_1407be330(&local_98,plVar6);
                            if (iVar17 == 0) {
                                FUN_1407be410(&local_98,plVar6);
                            }
                        }
                        else {
                            FUN_1407be530(&local_90);
                        }
                    }
                    uVar29 = uVar29 - 1;
                    if (plVar34[-2] != 0) {
                        *(longlong *)(plVar34[-2] + 0x10) = plVar34[-1];
                        puVar7 = (undefined4 *)plVar34[-2];
                        FUN_1407be0e0(param_1,puVar7);
                        puVar27 = local_88;
                        *puVar7 = extraout_XMM0_Da_00;
                        puVar7 = (undefined4 *)plVar34[-2];
                        ppuVar5 = *(undefined ***)(puVar7 + 6);
                        plVar6 = (longlong *)(puVar7 + 6);
                        if (ppuVar5 == (undefined **)0x0) {
                            *plVar6 = (longlong)&local_98;
                            uVar39 = *puVar7;
                            puVar28 = (undefined8 *)((longlong)local_88 + 1);
                            pplVar15 = (longlong **)FUN_14018db00(local_90,puVar28);
                            pplVar23 = pplVar15 + (longlong)puVar27 * 2;
                            if (pplVar23 != (longlong **)0x0) {
                                *(undefined4 *)(pplVar23 + 1) = uVar39;
                                *pplVar23 = plVar6;
                            }
                            pplVar23 = local_90;
                            if (local_90 != pplVar15) {
                                puVar13 = (undefined8 *)0x0;
                                if (local_88 != (undefined8 *)0x0) {
                                    pplVar23 = pplVar15;
                                    do {
                                        if (pplVar23 != (longlong **)0x0) {
                                            *pplVar23 = *(longlong **)
                                                    (((longlong)pplVar23 - (longlong)pplVar15) + (longlong)local_90);
                                            *(undefined4 *)(pplVar23 + 1) =
                                                    *(undefined4 *)
                                                            (((longlong)pplVar23 - (longlong)pplVar15) + 8 + (longlong)local_90);
                                        }
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        pplVar23 = pplVar23 + 2;
                                    } while (puVar13 < local_88);
                                }
                                LAB_1407bd781:
                                pplVar23 = pplVar15;
                                if (local_90 != (longlong **)0x0) {
                                    (*(code *)local_90[-2][1])(local_90 + -2);
                                }
                            }
                        }
                        else {
                            if (ppuVar5 == &local_98) {
                                *(undefined4 *)(local_90 + *(longlong *)(puVar7 + 8) * 2 + 1) = *puVar7;
                                iVar17 = FUN_1407be330(&local_98,plVar6);
                                if (iVar17 == 0) {
                                    FUN_1407be410(&local_98,plVar6);
                                }
                                goto LAB_1407bd7ad;
                            }
                            puVar8 = *(undefined **)(puVar7 + 8);
                            *plVar6 = 0;
                            puVar22 = ppuVar5[2] + -1;
                            if (puVar8 < puVar22) {
                                puVar9 = ppuVar5[1];
                                *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10) =
                                *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10);
                                *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10 + 8) =
                                *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10 + 8);
                                FUN_1407be530(ppuVar5 + 1);
                                lVar14 = *(longlong *)(ppuVar5[1] + (longlong)puVar8 * 0x10);
                                *(undefined **)(lVar14 + 8) = puVar8;
                                iVar17 = FUN_1407be330(ppuVar5,lVar14);
                                if (iVar17 == 0) {
                                    FUN_1407be410(ppuVar5,lVar14);
                                }
                            }
                            else {
                                FUN_1407be530(ppuVar5 + 1);
                            }
                            puVar27 = local_88;
                            *plVar6 = (longlong)&local_98;
                            uVar39 = *puVar7;
                            puVar28 = (undefined8 *)((longlong)local_88 + 1);
                            pplVar15 = (longlong **)FUN_14018db00(local_90,puVar28);
                            pplVar23 = pplVar15 + (longlong)puVar27 * 2;
                            if (pplVar23 != (longlong **)0x0) {
                                *(undefined4 *)(pplVar23 + 1) = uVar39;
                                *pplVar23 = plVar6;
                            }
                            pplVar23 = local_90;
                            if (local_90 != pplVar15) {
                                puVar13 = (undefined8 *)0x0;
                                if (local_88 != (undefined8 *)0x0) {
                                    pplVar23 = pplVar15;
                                    do {
                                        if (pplVar23 != (longlong **)0x0) {
                                            *pplVar23 = *(longlong **)
                                                    (((longlong)pplVar23 - (longlong)pplVar15) + (longlong)local_90);
                                            *(undefined4 *)(pplVar23 + 1) =
                                                    *(undefined4 *)
                                                            (((longlong)pplVar23 - (longlong)pplVar15) + 8 + (longlong)local_90);
                                        }
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        pplVar23 = pplVar23 + 2;
                                    } while (puVar13 < local_88);
                                }
                                goto LAB_1407bd781;
                            }
                        }
                        local_90 = pplVar23;
                        *(undefined8 **)(puVar7 + 8) = puVar27;
                        local_88 = puVar28;
                        FUN_1407be330(&local_98,plVar6);
                    }
                    LAB_1407bd7ad:
                    if (plVar34[-1] != 0) {
                        *(longlong *)(plVar34[-1] + 8) = plVar34[-2];
                        puVar7 = (undefined4 *)plVar34[-1];
                        FUN_1407be0e0(param_1,puVar7);
                        puVar27 = local_88;
                        *puVar7 = extraout_XMM0_Da_01;
                        puVar7 = (undefined4 *)plVar34[-1];
                        ppuVar5 = *(undefined ***)(puVar7 + 6);
                        plVar34 = (longlong *)(puVar7 + 6);
                        if (ppuVar5 == (undefined **)0x0) {
                            *plVar34 = (longlong)&local_98;
                            uVar39 = *puVar7;
                            puVar28 = (undefined8 *)((longlong)local_88 + 1);
                            pplVar15 = (longlong **)FUN_14018db00(local_90,puVar28);
                            pplVar23 = pplVar15 + (longlong)puVar27 * 2;
                            if (pplVar23 != (longlong **)0x0) {
                                *(undefined4 *)(pplVar23 + 1) = uVar39;
                                *pplVar23 = plVar34;
                            }
                            pplVar23 = local_90;
                            if (local_90 != pplVar15) {
                                puVar13 = (undefined8 *)0x0;
                                if (local_88 != (undefined8 *)0x0) {
                                    pplVar23 = pplVar15;
                                    do {
                                        if (pplVar23 != (longlong **)0x0) {
                                            *pplVar23 = *(longlong **)
                                                    (((longlong)pplVar23 - (longlong)pplVar15) + (longlong)local_90);
                                            *(undefined4 *)(pplVar23 + 1) =
                                                    *(undefined4 *)
                                                            (((longlong)pplVar23 - (longlong)pplVar15) + 8 + (longlong)local_90);
                                        }
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        pplVar23 = pplVar23 + 2;
                                    } while (puVar13 < local_88);
                                }
                                LAB_1407bd9bc:
                                pplVar23 = pplVar15;
                                if (local_90 != (longlong **)0x0) {
                                    (*(code *)local_90[-2][1])(local_90 + -2);
                                }
                            }
                        }
                        else {
                            if (ppuVar5 == &local_98) {
                                *(undefined4 *)(local_90 + *(longlong *)(puVar7 + 8) * 2 + 1) = *puVar7;
                                iVar17 = FUN_1407be330(&local_98,plVar34);
                                if (iVar17 == 0) {
                                    FUN_1407be410(&local_98,plVar34);
                                }
                                goto joined_r0x0001407bd4ab;
                            }
                            puVar8 = *(undefined **)(puVar7 + 8);
                            *plVar34 = 0;
                            puVar22 = ppuVar5[2] + -1;
                            if (puVar8 < puVar22) {
                                puVar9 = ppuVar5[1];
                                *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10) =
                                *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10);
                                *(undefined8 *)(puVar9 + (longlong)puVar8 * 0x10 + 8) =
                                *(undefined8 *)(puVar9 + (longlong)puVar22 * 0x10 + 8);
                                FUN_1407be530(ppuVar5 + 1);
                                lVar14 = *(longlong *)(ppuVar5[1] + (longlong)puVar8 * 0x10);
                                *(undefined **)(lVar14 + 8) = puVar8;
                                iVar17 = FUN_1407be330(ppuVar5,lVar14);
                                if (iVar17 == 0) {
                                    FUN_1407be410(ppuVar5,lVar14);
                                }
                            }
                            else {
                                FUN_1407be530(ppuVar5 + 1);
                            }
                            puVar27 = local_88;
                            *plVar34 = (longlong)&local_98;
                            uVar39 = *puVar7;
                            puVar28 = (undefined8 *)((longlong)local_88 + 1);
                            pplVar15 = (longlong **)FUN_14018db00(local_90,puVar28);
                            pplVar23 = pplVar15 + (longlong)puVar27 * 2;
                            if (pplVar23 != (longlong **)0x0) {
                                *(undefined4 *)(pplVar23 + 1) = uVar39;
                                *pplVar23 = plVar34;
                            }
                            pplVar23 = local_90;
                            if (local_90 != pplVar15) {
                                puVar13 = (undefined8 *)0x0;
                                if (local_88 != (undefined8 *)0x0) {
                                    pplVar23 = pplVar15;
                                    do {
                                        if (pplVar23 != (longlong **)0x0) {
                                            *pplVar23 = *(longlong **)
                                                    (((longlong)pplVar23 - (longlong)pplVar15) + (longlong)local_90);
                                            *(undefined4 *)(pplVar23 + 1) =
                                                    *(undefined4 *)
                                                            (((longlong)pplVar23 - (longlong)pplVar15) + 8 + (longlong)local_90);
                                        }
                                        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                                        pplVar23 = pplVar23 + 2;
                                    } while (puVar13 < local_88);
                                }
                                goto LAB_1407bd9bc;
                            }
                        }
                        local_90 = pplVar23;
                        *(undefined8 **)(puVar7 + 8) = puVar27;
                        local_88 = puVar28;
                        FUN_1407be330(&local_98,plVar34);
                    }
                    goto joined_r0x0001407bd4ab;
                }
                LAB_1407bda03:
                puVar27 = (undefined8 *)0x0;
                uVar24 = 0;
                puVar12 = local_res18;
                if (local_res18 != (uint *)0x0) {
                    do {
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar24 * 4) =
                                *(undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)puVar12[1] * 4);
                        uVar21 = (ulonglong)puVar12[1];
                        lVar14 = *(longlong *)(param_1 + 4);
                        *(undefined4 *)(lVar14 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + uVar21 * 0xc);
                        *(undefined4 *)(lVar14 + 4 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + 4 + uVar21 * 0xc);
                        *(undefined4 *)(lVar14 + 8 + uVar24 * 0xc) = *(undefined4 *)(lVar14 + 8 + uVar21 * 0xc);
                        ppuVar26 = (uint **)(puVar12 + 4);
                        puVar12 = *ppuVar26;
                        uVar24 = (ulonglong)((int)uVar24 + 1);
                    } while (*ppuVar26 != (uint *)0x0);
                    iVar17 = local_res18[-2] - 1;
                    if (-1 < iVar17) {
                        local_res18 = local_res18 + (longlong)(int)local_res18[-2] * 10 + 6;
                        do {
                            plVar34 = (longlong *)(local_res18 + -10);
                            local_res18 = local_res18 + -10;
                            if (*plVar34 != 0) {
                                FUN_1407be030(*plVar34,local_res18);
                            }
                            iVar17 = iVar17 + -1;
                        } while (-1 < iVar17);
                    }
                    FUN_14018b900(local_res18 + -2,0);
                }
                *param_1 = uVar29;
                uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 2),(ulonglong)uVar29 * 4,0);
                *(undefined8 *)(param_1 + 2) = uVar11;
                uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 4),(ulonglong)*param_1 * 0xc,0);
                *(undefined8 *)(param_1 + 4) = uVar11;
                puVar28 = puVar27;
                if (local_88 != (undefined8 *)0x0) {
                    do {
                        puVar28 = (undefined8 *)((longlong)puVar28 + 1);
                        **(undefined8 **)((longlong)puVar27 + (longlong)local_90) = 0;
                        puVar27 = puVar27 + 2;
                    } while (puVar28 < local_88);
                }
                if (local_90 != (longlong **)0x0) {
                    (*(code *)local_90[-2][1])(local_90 + -2);
                }
            }
        }
        uVar29 = *param_1;
        if (1 < uVar29) {
            pfVar10 = *(float **)(param_1 + 4);
            uVar24 = 1;
            do {
                uVar20 = (uint)uVar24;
                if (fVar41 * fVar41 <=
                    (*pfVar10 - pfVar10[uVar24 * 3]) * (*pfVar10 - pfVar10[uVar24 * 3]) +
                    (pfVar10[1] - pfVar10[uVar24 * 3 + 1]) * (pfVar10[1] - pfVar10[uVar24 * 3 + 1]) +
                    (pfVar10[2] - pfVar10[uVar24 * 3 + 2]) * (pfVar10[2] - pfVar10[uVar24 * 3 + 2])) break;
                uVar20 = uVar20 + 1;
                uVar24 = (ulonglong)uVar20;
            } while (uVar20 < uVar29);
            if (uVar20 == uVar29) {
                if (uVar29 != 1) {
                    uVar11 = FUN_14018c320(*(undefined8 *)(param_1 + 2),4,2);
                    uVar16 = FUN_14018c320(*(undefined8 *)(param_1 + 4),0xc,2);
                    *param_1 = 1;
                    *(undefined8 *)(param_1 + 2) = uVar11;
                    *(undefined8 *)(param_1 + 4) = uVar16;
                }
                **(undefined4 **)(param_1 + 2) = 0;
            }
        }
    }
    return;
}



void FUN_1407bdd70(uint *param_1)

{
    longlong lVar1;
    int *piVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;

    uVar5 = 1;
    uVar7 = 1;
    if (1 < *param_1) {
        do {
            if (*(uint *)(*(longlong *)(param_1 + 2) + uVar7 * 4) <=
                *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)((int)uVar7 - 1) * 4)) {
                FUN_1407be210(param_1);
                break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *param_1);
    }
    piVar2 = *(int **)(param_1 + 2);
    if (*piVar2 < 0) {
        uVar6 = *param_1;
        uVar7 = 0;
        if (uVar6 != 0) {
            do {
                if (-1 < piVar2[uVar7]) break;
                uVar8 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar8;
            } while (uVar8 < uVar6);
            uVar8 = (uint)uVar7;
            if (uVar8 != 0) {
                if ((uVar8 == uVar6) || (piVar2[uVar7] != 0)) {
                    uVar7 = (ulonglong)(uVar8 - 1);
                    piVar2[uVar7] = 0;
                }
                if ((uint)uVar7 != 0) {
                    uVar4 = 0;
                    if ((uint)uVar7 < *param_1) {
                        do {
                            *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar4 * 4) =
                                    *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar7 * 4);
                            lVar1 = uVar7 * 4;
                            uVar6 = (int)uVar7 + 1;
                            uVar7 = (ulonglong)uVar6;
                            *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar4 * 4) =
                                    *(undefined4 *)(*(longlong *)(param_1 + 4) + lVar1);
                            uVar4 = (ulonglong)((int)uVar4 + 1);
                        } while (uVar6 < *param_1);
                    }
                    *param_1 = (uint)uVar4;
                    uVar3 = FUN_14018c320(*(undefined8 *)(param_1 + 2),uVar4 << 2,0);
                    *(undefined8 *)(param_1 + 2) = uVar3;
                    uVar3 = FUN_14018c320(*(undefined8 *)(param_1 + 4),(ulonglong)*param_1 << 2,0);
                    *(undefined8 *)(param_1 + 4) = uVar3;
                }
            }
        }
    }
    if (1 < *param_1) {
        uVar7 = 1;
        do {
            if (*(int *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar5 - 1) * 4) !=
                *(int *)(*(longlong *)(param_1 + 4) + uVar7 * 4)) {
                uVar4 = (ulonglong)uVar5;
                uVar5 = uVar5 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar4 * 4) =
                        *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar7 * 4);
                *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar4 * 4) =
                        *(undefined4 *)(*(longlong *)(param_1 + 4) + uVar7 * 4);
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < *param_1);
        *param_1 = uVar5;
        uVar3 = FUN_14018c320(*(undefined8 *)(param_1 + 2),(ulonglong)uVar5 << 2,0);
        *(undefined8 *)(param_1 + 2) = uVar3;
        uVar3 = FUN_14018c320(*(undefined8 *)(param_1 + 4),(ulonglong)*param_1 << 2,0);
        *(undefined8 *)(param_1 + 4) = uVar3;
    }
    return;
}



void FUN_1407bdef0(uint *param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    longlong *plVar7;
    undefined4 *puVar8;
    undefined8 local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;
    longlong *local_28;

    local_40 = (ulonglong)*param_1;
    local_48 = 0;
    FUN_1401d3110(&local_38,&LAB_1407be6b0,&local_48,*(undefined8 *)(param_1 + 2),0x1a);
    uVar6 = local_30 & 0xffffffff;
    uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    puVar3 = (undefined4 *)FUN_14018b280(uVar2,0);
    uVar2 = SUB168(ZEXT816(0xc) * ZEXT816(uVar6),0);
    if (SUB168(ZEXT816(0xc) * ZEXT816(uVar6) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    puVar4 = (undefined4 *)FUN_14018b280(uVar2,0);
    puVar5 = puVar4;
    plVar7 = local_28;
    puVar8 = puVar3;
    if ((uint)local_30 != 0) {
        do {
            *puVar8 = *(undefined4 *)(*(longlong *)(param_1 + 2) + *plVar7 * 4);
            lVar1 = *(longlong *)(param_1 + 4) + *plVar7 * 0xc;
            *puVar5 = *(undefined4 *)(*(longlong *)(param_1 + 4) + *plVar7 * 0xc);
            puVar5[1] = *(undefined4 *)(lVar1 + 4);
            puVar5[2] = *(undefined4 *)(lVar1 + 8);
            uVar6 = uVar6 - 1;
            puVar5 = puVar5 + 3;
            plVar7 = plVar7 + 1;
            puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
    *param_1 = (uint)local_30;
    *(undefined4 **)(param_1 + 2) = puVar3;
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (local_38 < local_30) {
        FUN_14018b900(local_28 + local_38,0);
    }
    return;
}



void FUN_1407be030(longlong param_1,undefined8 *param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    uVar1 = param_2[1];
    *param_2 = 0;
    uVar4 = *(longlong *)(param_1 + 0x10) - 1;
    if (uVar1 < uVar4) {
        lVar2 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(lVar2 + uVar1 * 0x10) = *(undefined8 *)(lVar2 + uVar4 * 0x10);
        *(undefined8 *)(lVar2 + 8 + uVar1 * 0x10) = *(undefined8 *)(lVar2 + 8 + uVar4 * 0x10);
        FUN_1407be530(param_1 + 8);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar1 * 0x10);
        *(ulonglong *)(lVar2 + 8) = uVar1;
        iVar3 = FUN_1407be330(param_1,lVar2);
        if (iVar3 == 0) {
            FUN_1407be410(param_1,lVar2);
        }
        return;
    }
    FUN_1407be530(param_1 + 8);
    return;
}



undefined8 FUN_1407be0e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if ((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 8) + 4);
        lVar2 = *(longlong *)(param_1 + 8);
        uVar4 = (ulonglong)*(uint *)(param_2 + 4);
        uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 4);
        fVar7 = *(float *)(lVar1 + uVar3 * 0xc);
        fVar6 = (float)(ulonglong)*(uint *)(lVar2 + uVar3 * 4);
        fVar8 = *(float *)(lVar1 + 4 + uVar3 * 0xc);
        fVar6 = ((float)(ulonglong)*(uint *)(lVar2 + uVar4 * 4) - fVar6) /
                ((float)(ulonglong)*(uint *)(lVar2 + uVar5 * 4) - fVar6);
        fVar7 = (fVar6 * (*(float *)(lVar1 + uVar5 * 0xc) - fVar7) + fVar7) -
                *(float *)(lVar1 + uVar4 * 0xc);
        fVar8 = (fVar6 * (*(float *)(lVar1 + 4 + uVar5 * 0xc) - fVar8) + fVar8) -
                *(float *)(lVar1 + 4 + uVar4 * 0xc);
        fVar8 = fVar8 * fVar8;
        return CONCAT44(fVar8,fVar7 * fVar7 + fVar8 + 0.0);
    }
    return 0x7f7fffff;
}



void FUN_1407be210(uint *param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined8 local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;
    longlong *local_28;

    local_40 = (ulonglong)*param_1;
    local_48 = 0;
    FUN_1401d3110(&local_38,&LAB_1407be6b0,&local_48,*(undefined8 *)(param_1 + 2),0x1a);
    uVar5 = local_30 & 0xffffffff;
    uVar1 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_14018b280(uVar1,0);
    uVar1 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
    if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    puVar3 = (undefined4 *)FUN_14018b280(uVar1,0);
    if ((uint)local_30 != 0) {
        plVar4 = local_28;
        puVar6 = puVar3;
        do {
            *(undefined4 *)((lVar2 - (longlong)puVar3) + -4 + (longlong)(puVar6 + 1)) =
            *(undefined4 *)(*(longlong *)(param_1 + 2) + *plVar4 * 4);
            *puVar6 = *(undefined4 *)(*(longlong *)(param_1 + 4) + *plVar4 * 4);
            uVar5 = uVar5 - 1;
            plVar4 = plVar4 + 1;
            puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
    *param_1 = (uint)local_30;
    *(longlong *)(param_1 + 2) = lVar2;
    *(undefined4 **)(param_1 + 4) = puVar3;
    if (local_38 < local_30) {
        FUN_14018b900(local_28 + local_38,0);
    }
    return;
}



undefined8 FUN_1407be330(code **param_1,longlong param_2)

{
    undefined4 uVar1;
    code *pcVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    int iVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;

    uVar4 = *(ulonglong *)(param_2 + 8);
    while (uVar4 != 0) {
        uVar7 = uVar4 - 1 >> 1;
        lVar8 = uVar7 * 0x10;
        lVar9 = uVar4 * 0x10;
        iVar5 = (**param_1)(param_1[1] + lVar9 + 8,param_1[1] + lVar8 + 8,param_1[3]);
        if (-1 < iVar5) break;
        pcVar2 = param_1[1];
        uVar3 = *(undefined8 *)(pcVar2 + lVar9);
        puVar6 = (undefined8 *)(pcVar2 + lVar9);
        uVar1 = *(undefined4 *)(puVar6 + 1);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = *(undefined8 *)(pcVar2 + lVar8);
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(pcVar2 + lVar8 + 8);
        }
        puVar6 = (undefined8 *)(param_1[1] + lVar8);
        if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = uVar1;
            *puVar6 = uVar3;
        }
        *(ulonglong *)(*(longlong *)(param_1[1] + lVar9) + 8) = uVar4;
        uVar4 = uVar7;
    }
    if (*(ulonglong *)(param_2 + 8) != uVar4) {
        *(ulonglong *)(param_2 + 8) = uVar4;
        return 1;
    }
    return 0;
}



void FUN_1407be410(code **param_1,longlong param_2)

{
    undefined4 uVar1;
    code *pcVar2;
    undefined8 uVar3;
    int iVar4;
    undefined8 *puVar5;
    code *pcVar6;
    code *pcVar7;
    code *pcVar8;
    longlong lVar9;
    longlong lVar10;

    pcVar8 = *(code **)(param_2 + 8);
    pcVar2 = param_1[2];
    pcVar6 = (code *)((longlong)pcVar8 * 2 + 1);
    if (pcVar6 < pcVar2) {
        do {
            pcVar7 = pcVar6;
            if ((pcVar6 + 1 < pcVar2) &&
                (iVar4 = (**param_1)(param_1[1] + (longlong)pcVar6 * 0x10 + 8,
                        param_1[1] + (longlong)pcVar6 * 0x10 + 0x18,param_1[3]), -1 < iVar4))
            {
                pcVar7 = pcVar6 + 1;
            }
            lVar10 = (longlong)pcVar8 * 0x10;
            lVar9 = (longlong)pcVar7 * 0x10;
            iVar4 = (**param_1)(param_1[1] + lVar9 + 8,param_1[1] + lVar10 + 8,param_1[3]);
            if (-1 < iVar4) break;
            pcVar6 = param_1[1];
            uVar3 = *(undefined8 *)(pcVar6 + lVar10);
            puVar5 = (undefined8 *)(pcVar6 + lVar10);
            uVar1 = *(undefined4 *)(puVar5 + 1);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = *(undefined8 *)(pcVar6 + lVar9);
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(pcVar6 + lVar9 + 8);
            }
            puVar5 = (undefined8 *)(param_1[1] + lVar9);
            if (puVar5 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar5 + 1) = uVar1;
                *puVar5 = uVar3;
            }
            *(code **)(*(longlong *)(param_1[1] + lVar10) + 8) = pcVar8;
            pcVar6 = (code *)((longlong)pcVar7 * 2 + 1);
            pcVar8 = pcVar7;
        } while (pcVar6 < pcVar2);
        *(code **)(param_2 + 8) = pcVar8;
    }
    else {
        *(code **)(param_2 + 8) = pcVar8;
    }
    return;
}



void FUN_1407be530(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        puVar2 = (undefined8 *)FUN_14018db00(*param_1);
        if ((undefined8 *)*param_1 != puVar2) {
            uVar5 = 0;
            if (param_1[1] != 0) {
                puVar4 = puVar2;
                do {
                    if (puVar4 != (undefined8 *)0x0) {
                        puVar3 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar2));
                        *puVar4 = *puVar3;
                        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
                    }
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 2;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = (longlong)puVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



longlong FUN_1407be5e0(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar5 = puVar3 + lVar1 * 2;
    if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *param_2;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
    }
    if ((undefined8 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar5 = puVar3;
            do {
                if (puVar5 != (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar3));
                    *puVar5 = *puVar4;
                    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 2;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_1407be6e0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b79650;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
    }
    FUN_14018b900(param_1[7],0);
    FUN_14018b900(param_1[8],0);
    return;
}



int FUN_1407be740(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1407be6e0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



longlong FUN_1407be780(longlong *param_1,uint param_2)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    iVar2 = (**(code **)(*param_1 + 0x40))();
    if (iVar2 != 0) {
        uVar4 = *(uint *)(param_1 + 9);
        uVar5 = 0;
        if (uVar4 != 0) {
            do {
                uVar3 = uVar4 + uVar5 >> 1;
                uVar1 = *(uint *)((ulonglong)
                                          (uint)(*(int *)(param_1[8] + (ulonglong)uVar3 * 4) *
                                                 *(int *)(param_1[3] + 8)) + param_1[7]);
                if (uVar1 <= param_2) {
                    if (param_2 <= uVar1) {
                        return (ulonglong)
                                       (uint)(*(int *)(param_1[8] + (ulonglong)uVar3 * 4) * *(int *)(param_1[3] + 8)) +
                               param_1[7];
                    }
                    uVar5 = uVar3 + 1;
                    uVar3 = uVar4;
                }
                uVar4 = uVar3;
            } while (uVar5 < uVar4);
        }
    }
    return 0;
}



longlong FUN_1407be810(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    iVar2 = (**(code **)(*param_1 + 0x40))();
    if (iVar2 != 0) {
        uVar4 = *(uint *)(param_1 + 9);
        uVar5 = 0;
        if (uVar4 != 0) {
            do {
                uVar3 = uVar4 + uVar5 >> 1;
                uVar1 = *(ulonglong *)
                        ((ulonglong)
                                 (uint)(*(int *)(param_1[8] + (ulonglong)uVar3 * 4) * *(int *)(param_1[3] + 8)) +
                         param_1[7]);
                if (uVar1 <= param_2) {
                    if (param_2 <= uVar1) {
                        return (ulonglong)
                                       (uint)(*(int *)(param_1[8] + (ulonglong)uVar3 * 4) * *(int *)(param_1[3] + 8)) +
                               param_1[7];
                    }
                    uVar5 = uVar3 + 1;
                    uVar3 = uVar4;
                }
                uVar4 = uVar3;
            } while (uVar5 < uVar4);
        }
    }
    return 0;
}



longlong FUN_1407be8b0(longlong *param_1,uint param_2)

{
    int iVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_18);
    if ((iVar1 != 0) && (param_2 < *(uint *)(param_1 + 9))) {
        return (ulonglong)(*(int *)(param_1[3] + 8) * param_2) + param_1[7];
    }
    return 0;
}



ulonglong FUN_1407be910(longlong *param_1)

{
    ulonglong uVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_18);
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    return (ulonglong)*(uint *)(param_1 + 9);
}



undefined8 FUN_1407be9f0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
    ulonglong uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    iVar2 = (**(code **)(*param_1 + 0x40))();
    if (iVar2 != 0) {
        uVar4 = *(uint *)(param_1 + 9);
        uVar5 = 0;
        if (uVar4 != 0) {
            do {
                uVar3 = uVar4 + uVar5 >> 1;
                uVar1 = *(ulonglong *)
                        ((ulonglong)
                                 (uint)(*(int *)(param_1[8] + (ulonglong)uVar3 * 4) * *(int *)(param_1[3] + 8)) +
                         param_1[7]);
                if (uVar1 <= param_2) {
                    if (param_2 <= uVar1) {
                        if (param_3 != (undefined4 *)0x0) {
                            *param_3 = *(undefined4 *)(param_1[8] + (ulonglong)uVar3 * 4);
                        }
                        return 1;
                    }
                    uVar5 = uVar3 + 1;
                    uVar3 = uVar4;
                }
                uVar4 = uVar3;
            } while (uVar5 < uVar4);
        }
    }
    return 0;
}



undefined8 FUN_1407beaa0(longlong param_1)

{
    int iVar1;

    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
        if (iVar1 == 0) {
            return 0;
        }
        if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
            *(undefined8 *)(param_1 + 0x28) = 0;
        }
    }
    return 1;
}



ulonglong FUN_1407beaf0(longlong param_1)

{
    ulonglong uVar1;

    if ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) &&
    (uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))(), (int)uVar1 < 0)) {
        return uVar1;
    }
    return (ulonglong)*(uint *)(param_1 + 0x20);
}



// WARNING: Removing unreachable block (ram,0x0001407bf097)
// WARNING: Removing unreachable block (ram,0x0001407bf101)

ulonglong FUN_1407befc0(longlong param_1,short *param_2,undefined8 param_3,longlong *param_4)

{
    short sVar1;
    wchar_t wVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined2 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    short *psVar9;
    wchar_t *pwVar10;
    ulonglong uVar11;
    short *psVar12;
    longlong *local_res20;
    longlong local_48;
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;

    local_40 = (undefined2 *)&DAT_1407bf410;
    local_res20 = param_4;
    local_48 = param_1;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
            (*(longlong **)(param_1 + 0x10),param_1 + 0x28,&local_48,0);
    if ((int)uVar4 < 0) {
        return uVar4;
    }
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    uVar4 = 0;
    local_30 = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    psVar9 = *(short **)(*(longlong *)(param_1 + 0x18) + 0x18);
    uVar6 = uVar4;
    local_40 = puVar5;
    local_38 = puVar5;
    if ((psVar9 == (short *)0x0) || (*psVar9 == 0)) {
        do {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
        } while (L"SELECT "[lVar8] != L'\0');
        if ((longlong)(uVar6 * 2) >> 1 == 0) {
            FUN_1407db590(puVar5,L"SELECT ",0);
        }
        else {
            FUN_14001c310(&local_48);
        }
        lVar8 = *(longlong *)(param_1 + 0x18);
        uVar6 = uVar4;
        uVar11 = uVar4;
        if (*(int *)(lVar8 + 0xc) != 0) {
            do {
                psVar9 = *(short **)(*(longlong *)(lVar8 + 0x10) + uVar11 * 0x28);
                sVar1 = *psVar9;
                uVar7 = uVar4;
                while (sVar1 != 0) {
                    uVar7 = uVar7 + 1;
                    sVar1 = psVar9[uVar7];
                }
                FUN_14001c310(&local_48,psVar9,psVar9 + uVar7);
                uVar7 = uVar4;
                if ((int)uVar11 != *(int *)(*(longlong *)(param_1 + 0x18) + 0xc) + -1) {
                    do {
                        psVar9 = &DAT_140b53b56 + uVar7;
                        uVar7 = uVar7 + 1;
                    } while (*psVar9 != 0);
                    FUN_14001c310(&local_48,&DAT_140b53b54,&DAT_140b53b54 + uVar7 * 2);
                }
                lVar8 = *(longlong *)(param_1 + 0x18);
                uVar3 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar8 + 0xc));
        }
        do {
            psVar9 = &DAT_140b53d52 + uVar6;
            uVar6 = uVar6 + 1;
        } while (*psVar9 != 0);
        FUN_14001c310(&local_48,&DAT_140b53d50,&DAT_140b53d50 + uVar6 * 2);
        psVar9 = **(short ***)(param_1 + 0x18);
        sVar1 = *psVar9;
        uVar6 = uVar4;
        while (sVar1 != 0) {
            uVar6 = uVar6 + 1;
            sVar1 = psVar9[uVar6];
        }
        FUN_14001c310(&local_48,psVar9,psVar9 + uVar6);
        psVar9 = (short *)&DAT_1409fb80c;
        uVar6 = uVar4;
        do {
            psVar12 = &DAT_1409fb80e + uVar6;
            uVar6 = uVar6 + 1;
        } while (*psVar12 != 0);
        psVar12 = (short *)(&DAT_1409fb80c + uVar6 * 2);
        LAB_1407bf221:
        FUN_14001c310(&local_48,psVar9,psVar12);
        puVar5 = local_40;
    }
    else {
        sVar1 = *psVar9;
        while (sVar1 != 0) {
            uVar6 = uVar6 + 1;
            sVar1 = psVar9[uVar6];
        }
        psVar12 = psVar9 + uVar6;
        if ((longlong)psVar12 - (longlong)psVar9 >> 1 != 0) goto LAB_1407bf221;
        FUN_1407db590(puVar5,psVar9,0);
    }
    if ((param_2 == (short *)0x0) || (uVar6 = uVar4, *param_2 == 0)) {
        psVar9 = *(short **)(*(longlong *)(param_1 + 0x18) + 0x20);
        if ((psVar9 == (short *)0x0) || (uVar6 = uVar4, *psVar9 == 0)) goto LAB_1407bf2f0;
        do {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
        } while (L" WHERE "[lVar8] != L'\0');
        FUN_14001c310(&local_48,L" WHERE ",L" WHERE " + uVar6);
        psVar9 = *(short **)(*(longlong *)(param_1 + 0x18) + 0x20);
        sVar1 = *psVar9;
        uVar6 = uVar4;
        while (sVar1 != 0) {
            uVar6 = uVar6 + 1;
            sVar1 = psVar9[uVar6];
        }
        psVar12 = psVar9 + uVar6;
    }
    else {
        do {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
        } while (L" WHERE "[lVar8] != L'\0');
        FUN_14001c310(&local_48,L" WHERE ",L" WHERE " + uVar6);
        sVar1 = *param_2;
        uVar6 = uVar4;
        while (sVar1 != 0) {
            uVar6 = uVar6 + 1;
            sVar1 = param_2[uVar6];
        }
        psVar12 = param_2 + uVar6;
        psVar9 = param_2;
    }
    FUN_14001c310(&local_48,psVar9,psVar12);
    puVar5 = local_40;
    LAB_1407bf2f0:
    if ((param_2 == (short *)0x0) || (lVar8 = FUN_1407df6e0(param_2,L"ORDER BY"), lVar8 == 0)) {
        psVar9 = *(short **)(*(longlong *)(param_1 + 0x18) + 0x28);
        if ((psVar9 == (short *)0x0) || (uVar6 = uVar4, *psVar9 == 0)) {
            pwVar10 = L" ORDER BY ID";
            do {
                lVar8 = uVar4 + 1;
                uVar4 = uVar4 + 1;
            } while (L" ORDER BY ID"[lVar8] != L'\0');
        }
        else {
            do {
                lVar8 = uVar6 + 1;
                uVar6 = uVar6 + 1;
            } while (L" ORDER BY "[lVar8] != L'\0');
            FUN_14001c310(&local_48,L" ORDER BY ",L" ORDER BY " + uVar6);
            pwVar10 = *(wchar_t **)(*(longlong *)(param_1 + 0x18) + 0x28);
            wVar2 = *pwVar10;
            while (wVar2 != L'\0') {
                uVar4 = uVar4 + 1;
                wVar2 = pwVar10[uVar4];
            }
        }
        FUN_14001c310(&local_48,pwVar10,pwVar10 + uVar4);
        puVar5 = local_40;
    }
    local_res20 = (longlong *)0x0;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),puVar5,&local_res20);
    uVar4 = (ulonglong)uVar3;
    if (-1 < (int)uVar3) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                (*(longlong **)(param_1 + 0x28),local_res20);
        uVar4 = (ulonglong)uVar3;
        if (-1 < (int)uVar3) {
            uVar4 = 0;
        }
    }
    if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
        local_res20 = (longlong *)0x0;
    }
    if (puVar5 != (undefined2 *)0x0) {
        FUN_14018b900(puVar5,0);
    }
    return uVar4;
}



uint FUN_1407bfdf0(longlong *param_1)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    int iVar5;
    ulonglong *puVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    undefined **local_68;
    undefined4 local_60;
    longlong *local_58;
    longlong local_50;
    undefined4 local_48;
    longlong *local_40;
    undefined4 local_38;
    longlong local_30;
    longlong local_28;
    uint local_20;

    uVar7 = 0;
    local_58 = (longlong *)param_1[2];
    local_60 = 1;
    local_50 = param_1[3];
    local_48 = 0;
    local_40 = (longlong *)0x0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_68 = &PTR_LAB_140b79650;
    (**(code **)*local_58)();
    uVar4 = FUN_1407befc0(&local_68,0);
    if ((-1 < (int)uVar4) && (uVar4 = uVar7, *(int *)(param_1 + 9) != 0)) {
        do {
            puVar6 = (ulonglong *)(**(code **)(*param_1 + 0x20))(param_1,uVar7);
            if (*(short *)(*(longlong *)(param_1[3] + 0x10) + 8) == 3) {
                uVar9 = *(uint *)puVar6;
                iVar5 = (*(code *)local_68[8])();
                if ((iVar5 != 0) && (local_20 != 0)) {
                    uVar11 = local_20;
                    uVar10 = 0;
                    do {
                        uVar8 = uVar11 + uVar10 >> 1;
                        uVar1 = *(uint *)((ulonglong)
                                                  (uint)(*(int *)(local_28 + (ulonglong)uVar8 * 4) *
                                                         *(int *)(local_50 + 8)) + local_30);
                        if (uVar1 <= uVar9) {
                            if (uVar9 <= uVar1) break;
                            uVar10 = uVar8 + 1;
                            uVar8 = uVar11;
                        }
                        uVar11 = uVar8;
                    } while (uVar10 < uVar11);
                }
            }
            else {
                uVar2 = *puVar6;
                iVar5 = (*(code *)local_68[8])();
                if ((iVar5 != 0) && (local_20 != 0)) {
                    uVar9 = local_20;
                    uVar11 = 0;
                    do {
                        uVar10 = uVar9 + uVar11 >> 1;
                        uVar3 = *(ulonglong *)
                                ((ulonglong)
                                         (uint)(*(int *)(local_28 + (ulonglong)uVar10 * 4) * *(int *)(local_50 + 8)) +
                                 local_30);
                        if (uVar3 <= uVar2) {
                            if (uVar2 <= uVar3) break;
                            uVar11 = uVar10 + 1;
                            uVar10 = uVar9;
                        }
                        uVar9 = uVar10;
                    } while (uVar11 < uVar9);
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + 9));
    }
    local_68 = &PTR_LAB_140b79650;
    if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
        local_58 = (longlong *)0x0;
    }
    if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
        local_40 = (longlong *)0x0;
    }
    FUN_14018b900(local_30,0);
    FUN_14018b900(local_28,0);
    return uVar4;
}
