//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong FUN_1403bfd60(longlong param_1,uint *param_2,int *param_3,int param_4)

{
    undefined8 uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined4 uVar10;
    ulonglong uVar11;
    undefined4 uVar12;
    longlong local_res10;
    longlong local_48;

    if (*param_2 == 0) {
        *param_3 = 5;
        return 0;
    }
    uVar12 = 0;
    uVar10 = uVar12;
    if (*(longlong *)(param_1 + 0x6490) != 0) {
        uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108);
    }
    FUN_1403d90d0(param_1,uVar10);
    uVar2 = FUN_1403d3520();
    uVar3 = FUN_1403c0190(param_1,param_2[1]);
    if (uVar3 != 0) {
        uVar2 = uVar3;
    }
    *param_2 = uVar2;
    lVar6 = FUN_1403acd90(DAT_140c65b70,uVar2);
    lVar7 = *(longlong *)(param_1 + 0x1588);
    local_48 = lVar7;
    if (*(longlong *)(lVar7 + 8) != 0) {
        lVar8 = *(longlong *)(lVar7 + 8);
        do {
            if (*(uint *)(lVar8 + 0x20) < *param_2) {
                lVar9 = *(longlong *)(lVar8 + 0x18);
            }
            else {
                lVar9 = *(longlong *)(lVar8 + 0x10);
                local_48 = lVar8;
            }
            lVar8 = lVar9;
        } while (lVar9 != 0);
    }
    if ((local_48 == lVar7) || (*param_2 < *(uint *)(local_48 + 0x20))) {
        local_48 = lVar7;
    }
    if (local_48 == lVar7) {
        iVar5 = DAT_140c45e80;
        if (*DAT_140c63750 < DAT_140c45e80) {
            iVar5 = *DAT_140c63750;
        }
        if ((((&DAT_140c45e90)[iVar5] == '\0') || (*(int *)(*(longlong *)(lVar6 + 0x70) + 0x18) != 7))
            || (*(int *)(param_1 + 0x6364) != 0)) {
            iVar5 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x18);
            if ((iVar5 - 2U & 0xfffffffa) != 0) {
                return lVar6;
            }
            if (iVar5 != 3) {
                if (*(int *)(*(longlong *)(lVar6 + 0x70) + 0x184) == 0) {
                    *param_3 = 0x11d;
                    return lVar6;
                }
                return lVar6;
            }
            return lVar6;
        }
        lVar8 = FUN_1403acd90(DAT_140c65b70,param_2[1],*(undefined8 *)(param_1 + 0x78));
        lVar7 = *(longlong *)(param_1 + 0x78);
        if ((*(uint *)(*(longlong *)(lVar8 + 0x70) + 0x24) & 0xfffffffd) == 0) {
            for (lVar9 = *(longlong *)(lVar7 + 0x1608); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x88)) {
                if (((*(int *)(lVar9 + 4) == 0) && (*(longlong *)(lVar9 + 0x20) != 0)) &&
                    (iVar5 = FUN_140195f70(lVar9 + 0x10), iVar5 != 0)) {
                    iVar5 = 0xe;
                    goto LAB_1403c0063;
                }
            }
        }
        iVar5 = **(int **)(lVar8 + 0x70);
        for (lVar9 = *(longlong *)(lVar7 + 0x1608); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x88)) {
            if (((*(int *)(lVar9 + 4) == 1) && (iVar5 == *(int *)(lVar9 + 0xc))) &&
                ((*(longlong *)(lVar9 + 0x20) != 0 && (iVar4 = FUN_140195f70(lVar9 + 0x10), iVar4 != 0))))
            {
                iVar5 = 0xf;
                goto LAB_1403c0063;
            }
        }
        if (*(longlong *)(lVar8 + 0x38) != 0) {
            uVar11 = 0;
            do {
                iVar5 = *(int *)(uVar11 + 4 + *(longlong *)(lVar8 + 0x38));
                if (iVar5 != 0) {
                    for (lVar9 = *(longlong *)(lVar7 + 0x1608); lVar9 != 0;
                         lVar9 = *(longlong *)(lVar9 + 0x88)) {
                        if ((((*(int *)(lVar9 + 4) == 2) && (iVar5 == *(int *)(lVar9 + 0xc))) &&
                             (*(longlong *)(lVar9 + 0x20) != 0)) &&
                            (iVar4 = FUN_140195f70(lVar9 + 0x10), iVar4 != 0)) {
                            iVar5 = 0x10;
                            goto LAB_1403c0063;
                        }
                    }
                }
                uVar11 = uVar11 + 4;
            } while (uVar11 < 0xc);
        }
        iVar5 = 0;
        LAB_1403c0063:
        *param_3 = iVar5;
        if ((iVar5 != 0) && (iVar5 != 0x13d)) {
            return 0;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x78);
        uVar11 = 0;
        do {
            iVar5 = FUN_1403b3320(uVar11,lVar6,uVar1);
            if ((iVar5 != 0) && (iVar5 != 0x13d)) goto LAB_1403c00a6;
            uVar11 = uVar11 + 1;
        } while (uVar11 < 2);
        iVar5 = 0;
        LAB_1403c00a6:
        *param_3 = iVar5;
        if ((iVar5 != 0) && (iVar5 != 0x13d)) {
            return 0;
        }
        uVar3 = *param_2;
        lVar7 = FUN_140564f40(DAT_140c65b70,uVar3,0);
        if (lVar7 == 0) {
            return lVar6;
        }
        param_2[2] = uVar3;
        uVar3 = *(uint *)(lVar7 + 4);
        *param_2 = uVar3;
        lVar7 = FUN_1403acd90(DAT_140c65b70,uVar3,*(undefined8 *)(param_1 + 0x78));
        if (lVar7 == 0) {
            *param_3 = 4;
            return 0;
        }
        if (param_4 == 0) {
            return lVar7;
        }
        uVar12 = 0;
    }
    else {
        lVar6 = *(longlong *)(local_48 + 0x28);
        uVar3 = FUN_1403bfbf0(param_1,uVar2);
        if (uVar3 != *param_2) {
            param_2[2] = *param_2;
        }
        *param_2 = uVar3;
        lVar7 = FUN_1403acd90(DAT_140c65b70,uVar3,*(undefined8 *)(param_1 + 0x78));
        if (lVar7 == 0) {
            *param_3 = 4;
            return 0;
        }
        if (param_4 == 0) {
            return lVar7;
        }
        if (*(int *)(lVar6 + 0xc) != 0) {
            return lVar7;
        }
        if (*(int *)(lVar6 + 4) != 0) {
            return lVar7;
        }
        lVar6 = *(longlong *)(param_1 + 0x1588);
        local_res10 = lVar6;
        lVar8 = *(longlong *)(lVar6 + 8);
        while (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x20) < uVar2) {
                lVar8 = *(longlong *)(lVar8 + 0x18);
            }
            else {
                local_res10 = lVar8;
                lVar8 = *(longlong *)(lVar8 + 0x10);
            }
        }
        if ((local_res10 == lVar6) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar6;
        }
        if (local_res10 != lVar6) {
            uVar12 = **(undefined4 **)(local_res10 + 0x28);
        }
    }
    iVar5 = FUN_1403c0620(param_1,uVar2,uVar12);
    *param_3 = iVar5;
    if (iVar5 == 0) {
        return lVar7;
    }
    if (iVar5 != 0x13d) {
        return 0;
    }
    return lVar7;
}



undefined4 FUN_1403c0190(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1588) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(param_1 + 0x1588)) {
            return 0;
        }
        if (*(int *)(*(longlong *)(lVar2 + 0x28) + 0x10) == param_2) break;
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
    }
    return *(undefined4 *)(lVar2 + 0x20);
}



int FUN_1403c0210(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    bool bVar6;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x6490);
    uVar4 = param_2 & 0xffffffff;
    if ((int)param_2 == 0) {
        return 0;
    }
    if (lVar2 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar2) {
            bVar6 = true;
        }
        else {
            bVar6 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar2;
        }
        lVar2 = 0;
        if (bVar6) {
            lVar2 = DAT_140c65898;
        }
        param_2 = uVar4;
        if ((lVar2 != 0) && (lVar2 = FUN_1405a5b90(lVar2,uVar4), lVar2 != 0)) goto LAB_1403c0285;
    }
    lVar2 = FUN_1407a0fd0(DAT_140c65b70,param_2);
    if (lVar2 == 0) {
        return 0;
    }
    LAB_1403c0285:
    lVar2 = *(longlong *)(lVar2 + 0x70);
    if ((*(int *)(lVar2 + 0x18) - 2U & 0xfffffffb) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1588);
        local_res8 = lVar3;
        lVar1 = *(longlong *)(lVar3 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < (uint)uVar4) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res8 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || ((uint)uVar4 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if (local_res8 == lVar3) {
            return 0;
        }
        iVar5 = **(int **)(local_res8 + 0x28);
        if ((*(int **)(local_res8 + 0x28))[1] != 0) {
            iVar5 = iVar5 + -1;
        }
        if (iVar5 != -1) {
            if (*(int *)(lVar2 + 0x18) == 7) {
                iVar5 = iVar5 + 1;
            }
            lVar3 = FUN_140564f40(DAT_140c65b70,uVar4,iVar5);
            if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
                return *(int *)(lVar3 + 0x10);
            }
        }
    }
    return *(int *)(lVar2 + 0x184);
}



undefined8 FUN_1403c0340(undefined8 param_1,ulonglong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined4 extraout_XMM0_Db;
    undefined4 uVar8;
    undefined4 extraout_XMM0_Db_00;
    float fVar9;
    float fVar10;
    longlong local_res8;

    lVar6 = DAT_140c65898;
    uVar7 = param_2 & 0xffffffff;
    if ((int)param_2 == 0) {
        return 0;
    }
    if (((*(longlong *)(DAT_140c65898 + 0x6490) == 0) || (param_2 = uVar7, DAT_140c65898 == 0)) ||
        (lVar5 = FUN_1405a5b90(DAT_140c65898,uVar7), lVar5 == 0)) {
        lVar5 = FUN_1407a0fd0(DAT_140c65b70,param_2);
    }
    if (lVar5 == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(lVar6 + 0x1588);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < (uint)uVar7) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || ((uint)uVar7 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 == lVar2) {
        fVar10 = 0.0;
        uVar8 = 0;
        goto LAB_1403c044c;
    }
    if (*(int *)(*(longlong *)(local_res8 + 0x28) + 8) != 0) {
        fVar10 = 1.0;
        uVar8 = 0;
        goto LAB_1403c044c;
    }
    uVar4 = FUN_1403c0210(lVar6);
    fVar9 = 0.0;
    fVar10 = (float)(ulonglong)uVar4;
    if (fVar10 == 0.0) {
        fVar10 = 0.0;
        uVar8 = 0;
        goto LAB_1403c044c;
    }
    iVar1 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
    if ((iVar1 == 2) || (iVar1 == 6)) {
        lVar6 = *(longlong *)(local_res8 + 0x28) + 0x20;
        LAB_1403c0488:
        uVar4 = FUN_140195f70(lVar6);
        fVar9 = (float)(ulonglong)uVar4;
        uVar8 = extraout_XMM0_Db_00;
    }
    else {
        uVar8 = extraout_XMM0_Db;
        if (iVar1 == 7) {
            lVar6 = *(longlong *)(local_res8 + 0x28) + 0x68;
            goto LAB_1403c0488;
        }
    }
    fVar10 = (fVar10 - fVar9) / fVar10;
    LAB_1403c044c:
    return CONCAT44(uVar8,fVar10);
}



float FUN_1403c04c0(undefined8 param_1,ulonglong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    float fVar8;
    longlong local_res8;

    lVar6 = DAT_140c65898;
    uVar7 = param_2 & 0xffffffff;
    if ((int)param_2 != 0) {
        if (((*(longlong *)(DAT_140c65898 + 0x6490) == 0) || (param_2 = uVar7, DAT_140c65898 == 0)) ||
            (lVar5 = FUN_1405a5b90(DAT_140c65898,uVar7), lVar5 == 0)) {
            lVar5 = FUN_1407a0fd0(DAT_140c65b70,param_2);
        }
        if (lVar5 != 0) {
            lVar2 = *(longlong *)(lVar6 + 0x1588);
            local_res8 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < (uint)uVar7) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res8 == lVar2) || ((uint)uVar7 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar2;
            }
            if ((local_res8 == lVar2) || (*(int *)(*(longlong *)(local_res8 + 0x28) + 8) != 0)) {
                fVar8 = 0.0;
            }
            else {
                uVar4 = FUN_1403c0210(lVar6);
                fVar8 = 0.0;
                if ((float)(ulonglong)uVar4 != 0.0) {
                    iVar1 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
                    if ((iVar1 == 2) || (iVar1 == 6)) {
                        lVar6 = *(longlong *)(local_res8 + 0x28) + 0x20;
                    }
                    else {
                        if (iVar1 != 7) {
                            return 0.0;
                        }
                        lVar6 = *(longlong *)(local_res8 + 0x28) + 0x68;
                    }
                    uVar4 = FUN_140195f70(lVar6);
                    fVar8 = (float)(ulonglong)uVar4;
                }
            }
            return fVar8;
        }
    }
    return 0.0;
}



undefined8 FUN_1403c0620(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    int *piVar3;
    ulonglong uVar4;
    float fVar5;

    lVar1 = FUN_140564f40(DAT_140c65b70);
    if (lVar1 == 0) {
        return 5;
    }
    uVar4 = 0;
    piVar3 = (int *)(lVar1 + 0x1c);
    while ((*piVar3 == 0 ||
            (fVar5 = (float)FUN_140466520(*(undefined8 *)(param_1 + 0x78),piVar3[-2]),
                    *piVar3 <= (int)fVar5))) {
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
        if (1 < uVar4) {
            return 0;
        }
    }
    uVar2 = FUN_1403d3650(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar1 + 0x14 + uVar4 * 4));
    return uVar2;
}



void FUN_1403c06b0(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8 [4];
    undefined local_18 [24];

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    local_res8[0] = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8[0] = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8[0] == lVar1) || (param_2 < *(uint *)(local_res8[0] + 0x20))) {
        local_res8[0] = lVar1;
    }
    if (local_res8[0] == *(longlong *)(param_1 + 0x15c8)) {
        if (param_3 != 0) {
            local_res8[0] = CONCAT44(param_3,param_2);
            FUN_140032f50(param_1 + 0x15c0,local_18,local_res8);
            return;
        }
        if (local_res8[0] == *(longlong *)(param_1 + 0x15c8)) {
            return;
        }
    }
    if (param_3 == 0) {
        FUN_1403d5fd0(param_1 + 0x15c0,local_res8);
    }
    return;
}



undefined4 FUN_1403c0760(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined4 *)(local_res8 + 0x24);
}



void FUN_1403c07c0(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8 [4];
    undefined local_18 [24];

    lVar1 = *(longlong *)(param_1 + 0x15a8);
    local_res8[0] = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8[0] = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8[0] == lVar1) || (param_2 < *(uint *)(local_res8[0] + 0x20))) {
        local_res8[0] = lVar1;
    }
    if (local_res8[0] == *(longlong *)(param_1 + 0x15a8)) {
        if (param_3 != 0) {
            local_res8[0] = CONCAT44(param_3,param_2);
            FUN_140032f50(param_1 + 0x15a0,local_18,local_res8);
            return;
        }
        if (local_res8[0] == *(longlong *)(param_1 + 0x15a8)) {
            return;
        }
    }
    if (param_3 == 0) {
        FUN_1403d5fd0(param_1 + 0x15a0,local_res8);
    }
    return;
}



undefined4 FUN_1403c0870(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x15a8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined4 *)(local_res8 + 0x24);
}



undefined8 FUN_1403c08d0(longlong param_1,undefined4 *param_2)

{
    undefined4 local_28 [2];
    undefined4 *local_20;
    undefined local_18 [16];

    local_20 = (undefined4 *)FUN_14018b280(0xc);
    *local_20 = param_2[1];
    local_20[1] = param_2[2];
    local_20[2] = (uint)*(byte *)(param_2 + 3);
    local_28[0] = *param_2;
    FUN_140055f80(param_1 + 0x6fa0,local_18,local_28);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PetSpawned",&DAT_140b66548,*param_2);
    return 0;
}



bool FUN_1403c0960(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x6fa8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    return local_res8 != lVar1;
}



undefined8 FUN_1403c09b0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x6fa8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    lVar1 = local_res8;
    if (local_res8 != *(longlong *)(param_1 + 0x6fa8)) {
        FUN_14018b900(*(undefined8 *)(local_res8 + 0x28),0);
        local_res8 = lVar1;
        FUN_1403d60d0(param_1 + 0x6fa0,&local_res8);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PetDespawned",&DAT_140b66548,*param_2);
    }
    return 0;
}



undefined8 FUN_1403c0a80(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x6fa8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        *(uint *)(*(longlong *)(local_res8 + 0x28) + 8) = (uint)*(byte *)(param_2 + 1);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PetStanceChanged",&DAT_140b66548,*param_2);
    return 0;
}



void FUN_1403c0b20(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    undefined auStack1352 [32];
    undefined **local_528;
    longlong *local_520;
    LPVOID local_518;
    undefined8 local_510;
    undefined **local_508;
    longlong *local_500;
    LPVOID local_4f8;
    longlong *local_4e8 [96];
    longlong local_1e8;
    undefined8 local_34;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack1352;
    plVar3 = (longlong *)FUN_1403acbb0(param_1 + 0xa0,*param_2);
    if (plVar3 == (longlong *)0x0) {
        local_528 = &PTR_LAB_140b5e648;
        local_520 = plVar3;
        local_518 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_528);
        local_508 = local_528;
        local_510 = 0x141df0778;
        local_4f8 = local_518;
        local_500 = local_520;
        iVar2 = FUN_1401971e0(&DAT_140c8a6c4,5,&local_510,&local_508);
        local_528 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_518);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    else {
        *(undefined4 *)(param_1 + 0x6f98) = 1;
        iVar2 = 1;
        if (*(int *)(plVar3 + 0xf) != 0) {
            iVar2 = *(int *)(plVar3 + 0xf);
        }
        iVar4 = *(int *)(param_2 + 1);
        *(int *)(plVar3 + 0xf) = iVar4;
        iVar4 = iVar4 - iVar2;
        for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x88)) {
            if ((*(int *)(lVar1 + 4) == 3) && (*(int *)(lVar1 + 0xc) == 0x309)) {
                FUN_1407a0390();
                break;
            }
        }
        FUN_14040fae0(local_4e8);
        if (plVar3 != local_4e8[0]) {
            if (local_4e8[0] != (longlong *)0x0) {
                (**(code **)(*local_4e8[0] + 8))();
            }
            local_4e8[0] = plVar3;
            (**(code **)*plVar3)(plVar3);
        }
        local_34 = 0;
        FUN_140412ad0(local_4e8);
        if (iVar4 < 1) {
            FUN_1403b8250(param_1,*(undefined4 *)plVar3[8],-iVar4,*(undefined4 *)((longlong)param_2 + 0xc)
            );
        }
        else {
            FUN_1403b8060(param_1,local_4e8,iVar4);
        }
        FUN_1400a8020(*(longlong *)(param_1 + 0x7340) + 0xe88);
        if (*(longlong *)(param_1 + 0x7fe0) != 0) {
            FUN_1400a8020(*(longlong *)(param_1 + 0x7fe0) + 0x178);
        }
        if (local_4e8[0] != (longlong *)0x0) {
            (**(code **)(*local_4e8[0] + 8))();
            local_4e8[0] = (longlong *)0x0;
        }
        if (local_1e8 != 0) {
            FUN_14018b900(local_1e8,0);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack1352);
    return;
}



undefined8 FUN_1403c0f90(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    longlong local_40;
    LPVOID local_38;
    undefined **local_28;
    longlong local_20;
    LPVOID local_18;

    local_40 = FUN_1403acbb0(param_1 + 0xa0,*param_2);
    if (local_40 == 0) {
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141df06d8;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a6b8,5,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
            return 0;
        }
    }
    else {
        *(undefined4 *)(local_40 + 0x7c) = *(undefined4 *)(param_2 + 1);
    }
    return 0;
}



void FUN_1403c1080(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined auStack168 [32];
    _FILETIME local_88 [2];
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    _FILETIME local_58 [2];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined local_28 [16];
    LPVOID local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    if (DAT_140c65898 == 0) {
        local_28._8_8_ = 0;
        local_28._0_8_ = &PTR_LAB_140b5e648;
        local_18 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,local_28);
        local_78 = local_28._0_8_;
        local_88[0] = (_FILETIME)0x141df0720;
        local_68 = local_18;
        local_70 = local_28._8_8_;
        iVar1 = FUN_1401971e0(&DAT_140c8a6bc,5,local_88,&local_78);
        local_28._0_8_ = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_18);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    else {
        *(undefined4 *)(param_1 + 0x1b68) = param_2[3];
        *(undefined *)(param_1 + 0x1b6c) = *(undefined *)(param_2 + 4);
        *(undefined4 *)(param_1 + 0x1b70) = param_2[1];
        *(undefined4 *)(param_1 + 0x1b88) = param_2[5];
        if (param_2[3] == 0) {
            if (*(longlong *)(param_1 + 0x6490) != *(longlong *)(param_1 + 0x78)) {
                *(longlong *)(param_1 + 0x6490) = *(longlong *)(param_1 + 0x78);
                *(undefined8 *)(param_1 + 0x6488) = 0;
            }
            if (DAT_140c65b78 != 0) {
                FUN_140575dd0();
            }
            FUN_14055b0e0(param_1,0);
            *(undefined4 *)(*(longlong *)(param_1 + 0x71a0) + 0x54) = 0;
        }
        else {
            if (*(longlong *)(param_1 + 0x78) == 0) {
                local_70 = 0;
                local_78 = &PTR_LAB_140b5e648;
                local_68 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_78);
                local_48 = local_78;
                local_88[0] = (_FILETIME)0x141df0918;
                local_38 = local_68;
                local_40 = local_70;
                iVar1 = FUN_1401971e0(&DAT_140c8a6c0,5,local_88,&local_48);
                local_78 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_68);
                if (iVar1 != 0) {
                    DebugBreak();
                }
                goto LAB_1403c1336;
            }
            lVar2 = FUN_1403d90d0(param_1,*param_2);
            if (lVar2 != 0) {
                FUN_1403968b0();
            }
            *(ulonglong *)(param_1 + 0x1b48) = (ulonglong)(uint)param_2[2];
            GetLocalTime((LPSYSTEMTIME)local_28);
            SystemTimeToFileTime((SYSTEMTIME *)local_28,local_88);
            LocalFileTimeToFileTime(local_88,local_58);
            *(longlong *)(param_1 + 0x1b50) =
                    *(longlong *)(param_1 + 0x1b48) * 10000 + (longlong)local_58[0];
            *(ulonglong *)(param_1 + 7000) = (ulonglong)(uint)param_2[6];
            *(ulonglong *)(param_1 + 0x1b60) = (ulonglong)(uint)param_2[6] * 10000 + (longlong)local_58[0]
                    ;
            *(ulonglong *)(param_1 + 0x1b78) = (ulonglong)(uint)param_2[7] * 10000 + (longlong)local_58[0]
                    ;
        }
        FUN_140425850(*(undefined8 *)(param_1 + 0x7340));
        DAT_140c89aa0 = 0;
        FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0xc0,param_2[3]);
    }
    LAB_1403c1336:
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack168);
    return;
}



void FUN_1403c1360(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 local_res8;

    lVar2 = DAT_140c65898;
    if (((*(int *)param_2 < 300) && (*(uint *)((longlong)param_2 + 4) != 0xffffffff)) &&
        ((*(int *)param_2 != 0 || (*(uint *)((longlong)param_2 + 4) < 0x1f)))) {
        local_res8 = param_1;
        plVar4 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0);
        if (plVar4 != (longlong *)0x0) {
            lVar1 = plVar4[8];
            if (lVar1 == 0) {
                FUN_1403cc530(lVar2,6);
                return;
            }
            if ((*(uint *)(lVar1 + 0x14c) & 0x10000) != 0) {
                FUN_1403cc530(lVar2,0x9c);
                return;
            }
            if (((*(uint *)(lVar1 + 0x154) & 0x100) == 0) || (*(int *)(plVar4 + 4) != 0)) {
                uVar5 = (**(code **)(*plVar4 + 0x30))();
                iVar3 = FUN_1403a68e0(lVar2,uVar5);
                if (iVar3 == 0) {
                    local_res8 = *param_2;
                    FUN_1403f4900(lVar2,0x149,&local_res8);
                    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
                }
            }
        }
    }
    return;
}



undefined8 FUN_1403c1460(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 local_18;
    undefined8 local_10;

    if (((299 < *(int *)param_2) || (*(uint *)((longlong)param_2 + 4) == 0xffffffff)) ||
        ((*(int *)param_2 == 0 && (0x1e < *(uint *)((longlong)param_2 + 4))))) {
        return 0x80004005;
    }
    plVar2 = (longlong *)FUN_1403ac780(param_1 + 0xa0,param_2);
    if (plVar2 != (longlong *)0x0) {
        if ((*(byte *)(plVar2 + 0x10) & 0x10) == 0) {
            lVar3 = plVar2[9];
            if (lVar3 == 0) {
                lVar3 = plVar2[8] + 8;
            }
            iVar1 = FUN_1403d67d0(DAT_140c65898,plVar2[8],lVar3);
            if (iVar1 == 0) {
                local_10 = 0;
                local_18 = *param_2;
                local_10 = (**(code **)(*plVar2 + 0x30))(plVar2);
                FUN_1403f4900(param_1,0x15e,&local_18);
                *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
                return 0;
            }
        }
        else {
            iVar1 = 0x48;
        }
        FUN_1403cc530(param_1,iVar1);
    }
    return 0x80004005;
}



void FUN_1403c1580(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    undefined auStack104 [32];
    undefined local_48 [16];
    int local_38;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    ulonglong local_10;

    lVar1 = DAT_140c65898;
    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    if (param_2 == (int *)0x0) {
        FUN_1403cc530(DAT_140c65898,1);
    }
    else {
        uVar4 = 0;
        piVar3 = param_2;
        do {
            if (((299 < *piVar3) || (piVar3[1] == 0xffffffff)) ||
                ((*piVar3 == 0 && (0x1e < (uint)piVar3[1])))) {
                FUN_1403cc530(DAT_140c65898,0x88);
                goto LAB_1403c1631;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar4 < 4);
        iVar2 = FUN_1403d3800(param_2,4,DAT_140c65898 + 0xa0,local_48);
        if (iVar2 < 0) {
            FUN_1403cc530(lVar1,1);
        }
        else if (local_38 == 0) {
            FUN_1403cc530(lVar1,0x88);
        }
        else {
            local_30 = *param_2;
            local_2c = param_2[1];
            local_28 = param_2[2];
            local_24 = param_2[3];
            local_20 = param_2[4];
            local_1c = param_2[5];
            local_18 = param_2[6];
            local_14 = param_2[7];
            FUN_1403f4900(lVar1,0x59f,&local_30);
            *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        }
    }
    LAB_1403c1631:
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack104);
    return;
}



undefined8 FUN_1403c16e0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;

    lVar1 = DAT_140c65898;
    lVar2 = FUN_1401fcf20(param_2);
    if (lVar2 != 0) {
        lVar3 = FUN_1404530f0(DAT_140c65910);
        if ((lVar3 != 0) && ((*(int *)(lVar3 + 4) != 0 || (*(int *)(lVar3 + 8) != 0)))) {
            if (*(int *)(lVar2 + 0x18) == 0) {
                return 1;
            }
            uVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,*(undefined8 *)(lVar1 + 0x78),*(int *)(lVar2 + 0x18),0,0,0);
            return uVar4;
        }
    }
    return 0;
}



longlong FUN_1403c1780(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;

    uVar2 = 0;
    if ((param_2 != 0) && (*(ulonglong *)(param_1 + 0xa98) != 0)) {
        plVar3 = *(longlong **)(param_1 + 0xa90);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == param_2)) {
                return lVar1;
            }
            uVar2 = uVar2 + 1;
            plVar3 = plVar3 + 1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0xa98));
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1403c17d0(longlong param_1,uint *param_2,uint *param_3,int param_4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    char cVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    char *pcVar10;
    ulonglong uVar11;
    undefined *puVar12;
    uint uVar13;
    uint local_res10;
    uint uStackX20;
    uint local_res18;
    uint uStackX28;
    int local_res20;
    undefined8 in_stack_ffffffffffffff98;
    undefined4 uVar14;
    undefined8 in_stack_ffffffffffffffa0;
    undefined4 uVar15;
    undefined8 local_50;
    undefined8 local_48;

    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
    uVar1 = *param_3;
    uVar2 = *param_2;
    uVar13 = param_2[1];
    uVar3 = param_3[1];
    local_res10 = uVar1;
    uStackX20 = uVar3;
    local_res18 = uVar2;
    uStackX28 = uVar13;
    local_res20 = param_4;
    if (((299 < (int)uVar1) || (uVar3 == 0xffffffff)) || ((uVar1 == 0 && (0x1e < uVar3)))) {
        FUN_1403cc530(param_1,0x1b);
        return 0x1b;
    }
    lVar6 = FUN_1403ac780(param_1 + 0xa0,&local_res18);
    lVar7 = FUN_1403ac780(param_1 + 0xa0,&local_res10);
    lVar8 = *(longlong *)(param_1 + 0x78);
    if (((lVar8 == 0) || (*(int *)(lVar8 + 0x250) != 0)) || (*(int *)(lVar8 + 0x80) == 0x17)) {
        return 0x39;
    }
    cVar4 = FUN_14053bc30();
    if (cVar4 != '\0') {
        return 0x20;
    }
    iVar5 = *(int *)(param_1 + 0x6644);
    if (lVar6 == 0) {
        FUN_1403a6770(iVar5 == 0x43,1);
        return 1;
    }
    uVar9 = CONCAT44(uVar14,(uint)(iVar5 == 0x42));
    iVar5 = FUN_1403ad100(param_1,lVar6,lVar7,&local_res10,uVar9,
                          CONCAT44(uVar15,(uint)(iVar5 == 0x43)));
    if (iVar5 != 0) {
        FUN_1403a6770();
        return iVar5;
    }
    if (local_res20 != 0) goto LAB_1403c1ae6;
    if (((uVar1 & 0xfffffff6) == 0) && (uVar1 != 1)) {
        if (((*(byte *)(*(longlong *)(lVar6 + 0x40) + 0x150) & 0x10) != 0) &&
            (iVar5 = FUN_14056a3f0(), iVar5 == 0)) {
            uVar9 = (ulonglong)(byte)local_res10 << 8 | (ulonglong)(uVar3 & 0xff);
            if ((int)uVar2 < 300) {
                uVar11 = (ulonglong)(byte)local_res18 << 8 | (ulonglong)(uVar13 & 0xff);
            }
            else {
                uVar11 = 0xffffffffffffffff;
            }
            puVar12 = &DAT_1409e9fac;
            pcVar10 = "ItemConfirmSoulboundOnEquip";
            uVar13 = uVar3;
            goto LAB_1403c1ab6;
        }
        iVar5 = FUN_1403d8bc0();
        if (iVar5 == 0) goto LAB_1403c19e1;
        uVar9 = (ulonglong)(byte)local_res10 << 8 | (ulonglong)(uVar3 & 0xff);
        if ((int)uVar2 < 300) {
            uVar11 = (ulonglong)(byte)local_res18 << 8 | (ulonglong)(uVar13 & 0xff);
            uVar13 = uVar3;
        }
        else {
            uVar11 = 0xffffffffffffffff;
            uVar13 = uVar3;
        }
    }
    else {
        LAB_1403c19e1:
        if ((((uVar2 & 0xfffffff6) != 0) || (uVar2 == 1)) || (lVar7 == 0)) {
            LAB_1403c1ae6:
            uVar14 = (undefined4)(uVar9 >> 0x20);
            if ((*(int *)(*(longlong *)(param_1 + 0x78) + 0x2ac) != 0) && ((uVar2 == 0 || (uVar1 == 0))))
            {
                if ((DAT_140dc2280 & 1) == 0) {
                    DAT_140dc2280 = DAT_140dc2280 | 1;
                    lVar8 = FUN_140200220(0x149);
                    if (lVar8 == 0) {
                        DAT_140dc2284 = 0x5dc;
                    }
                    else {
                        DAT_140dc2284 = *(uint *)(lVar8 + 4);
                    }
                }
                uVar9 = uVar9 & 0xffffffff00000000 | (ulonglong)DAT_140dc2284;
                FUN_14046a3d0(*(undefined8 *)(param_1 + 0x78),0,0,0,uVar9);
                uVar14 = (undefined4)(uVar9 >> 0x20);
            }
            FUN_14046a3d0(*(undefined8 *)(param_1 + 0x78),3,0,0x309,CONCAT44(uVar14,10000));
            local_50 = CONCAT44(uStackX28,local_res18);
            local_48 = CONCAT44(uStackX20,local_res10);
            FUN_1403f4900(param_1,0x182,&local_50);
            *(undefined4 *)(lVar6 + 0x8c) = 0;
            if (lVar7 != 0) {
                *(undefined4 *)(lVar7 + 0x8c) = 0;
            }
            return 0;
        }
        if (((*(byte *)(*(longlong *)(lVar7 + 0x40) + 0x150) & 0x10) != 0) &&
            (iVar5 = FUN_14056a3f0(), iVar5 == 0)) {
            if ((int)uVar2 < 300) {
                uVar9 = (ulonglong)(byte)local_res18 << 8 | (ulonglong)(uVar13 & 0xff);
            }
            else {
                uVar9 = 0xffffffffffffffff;
            }
            puVar12 = &DAT_1409e9fac;
            uVar11 = (ulonglong)(byte)local_res10 << 8 | (ulonglong)(uVar3 & 0xff);
            pcVar10 = "ItemConfirmSoulboundOnEquip";
            goto LAB_1403c1ab6;
        }
        iVar5 = FUN_1403d8bc0();
        if (iVar5 == 0) goto LAB_1403c1ae6;
        if ((int)uVar2 < 300) {
            uVar9 = (ulonglong)(byte)local_res18 << 8 | (ulonglong)(uVar13 & 0xff);
        }
        else {
            uVar9 = 0xffffffffffffffff;
        }
        uVar11 = (ulonglong)(byte)local_res10 << 8 | (ulonglong)(uVar3 & 0xff);
    }
    puVar12 = &DAT_1409ea01c;
    pcVar10 = "ItemConfirmClearRestockOnEquip";
    LAB_1403c1ab6:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar10,puVar12,uVar13,uVar11,uVar9);
    return 0;
}



undefined8 *
FUN_1403c1bf0(undefined8 param_1,undefined4 param_2,int param_3,uint param_4,longlong param_5,
              undefined4 param_6)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    ulonglong uVar6;

    uVar6 = (ulonglong)(int)param_4;
    if (param_3 == 0) {
        return (undefined8 *)0x0;
    }
    lVar3 = FUN_14018b280(0x210,0);
    if (lVar3 == 0) {
        puVar4 = (undefined8 *)0x0;
    }
    else {
        puVar4 = (undefined8 *)FUN_1405c7150(lVar3,param_3);
    }
    lVar3 = DAT_140c65898;
    switch(param_3) {
        case 1:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
            iVar2 = FUN_1405c7ad0(puVar4,uVar6 & 0xffffffff,0);
            break;
        case 2:
            iVar2 = FUN_1405c7a20(puVar4,uVar6 & 0xffffffff);
            break;
        case 3:
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
            }
            if (0x23 < param_4) {
                return (undefined8 *)0x0;
            }
            if (0x23 < param_4) {
                return (undefined8 *)0x0;
            }
            return (&DAT_140c89d80)[uVar6];
        case 4:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
            plVar5 = (longlong *)FUN_1403c1780(param_1,uVar6 & 0xffffffff);
            if ((plVar5 != (longlong *)0x0) &&
                (iVar2 = (**(code **)(*plVar5 + 0x70))(plVar5), iVar2 == 0x1b)) {
                if (puVar4 != (undefined8 *)0x0) {
                    (**(code **)*puVar4)(puVar4,1);
                    return DAT_140c89d80;
                }
                return DAT_140c89d80;
            }
            goto LAB_1403c1e1b;
        default:
            goto switchD_1403c1c62_caseD_5;
        case 6:
            if (param_5 != 0) {
                uVar1 = *(undefined4 *)(param_5 + 4);
                *(undefined4 *)(puVar4 + 0x3f) = param_2;
                *(undefined4 *)((longlong)puVar4 + 0x1fc) = uVar1;
                if (param_4 == 0) {
                    return puVar4;
                }
                if ((((*(longlong *)(lVar3 + 0x78) == 0) || (lVar3 == 0)) ||
                     (lVar3 = FUN_1405a5b90(lVar3,uVar6 & 0xffffffff), lVar3 == 0)) &&
                    (lVar3 = FUN_1407a0fd0(DAT_140c65b70,uVar6 & 0xffffffff), lVar3 == 0)) {
                    return puVar4;
                }
                FUN_1405c7620(puVar4,lVar3);
                return puVar4;
            }
            goto switchD_1403c1c62_caseD_5;
        case 7:
            if (param_5 == 0) {
                return (undefined8 *)0x0;
            }
            iVar2 = FUN_1405c8040(puVar4,*(undefined4 *)(param_5 + 4),uVar6 & 0xffffffff);
            break;
        case 10:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
            iVar2 = FUN_1405c7d00(puVar4,param_2,*(undefined4 *)(param_5 + 4),uVar6 & 0xffffffff,param_6);
            break;
        case 0xb:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
            iVar2 = FUN_1405c7de0(puVar4,param_2,*(undefined4 *)(param_5 + 4),uVar6 & 0xffffffff,param_6);
            break;
        case 0xc:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
            iVar2 = FUN_1405c7f20(puVar4,param_2,*(undefined4 *)(param_5 + 4),uVar6 & 0xffffffff);
            break;
        case 0xd:
            if (param_5 == 0) goto switchD_1403c1c62_caseD_5;
        LAB_1403c1e1b:
            iVar2 = FUN_1405c79c0(puVar4,uVar6 & 0xffffffff);
    }
    if (-1 < iVar2) {
        return puVar4;
    }
    switchD_1403c1c62_caseD_5:
    if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1403c1ea0(longlong param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;

    if (((*(longlong *)(param_1 + 0x78) != 0) && (param_2 < 0x30)) && (param_3 < 4)) {
        lVar1 = param_1 + ((ulonglong)param_3 * 0x30 + (ulonglong)param_2) * 8;
        lVar2 = *(longlong *)(lVar1 + 0xac0);
        if (lVar2 != 0) {
            lVar2 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar2 + 0x114),
                                  *(longlong *)(param_1 + 0x78));
            if (param_2 < 8) {
                if ((lVar2 != 0) && (*(int *)(*(longlong *)(lVar2 + 0x70) + 0xfc) == 5)) {
                    LAB_1403c1f2f:
                    return *(undefined8 *)(lVar1 + 0xac0);
                }
            }
            else if ((0xb < param_2) ||
                     ((lVar2 != 0 && (*(int *)(*(longlong *)(lVar2 + 0x70) + 0xfc) != 5))))
                goto LAB_1403c1f2f;
        }
    }
    return 0;
}



longlong FUN_1403c1f50(longlong param_1,undefined8 param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;

    if (((*(longlong *)(param_1 + 0x78) != 0) && (param_3 < 4)) &&
        (lVar2 = FUN_1403acd90(DAT_140c65b70), lVar2 != 0)) {
        uVar3 = 0;
        plVar4 = (longlong *)(param_1 + 0xac0 + (ulonglong)param_3 * 0x180);
        do {
            lVar1 = *plVar4;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0x118) == *(int *)(*(longlong *)(lVar2 + 0x70) + 4))) {
                return lVar1;
            }
            uVar3 = uVar3 + 1;
            plVar4 = plVar4 + 1;
        } while (uVar3 < 0x30);
    }
    return 0;
}



longlong FUN_1403c1fd0(longlong param_1,int param_2,byte param_3)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    if ((*(longlong *)(param_1 + 0x78) != 0) && (param_3 < 4)) {
        uVar3 = 0;
        plVar2 = (longlong *)(param_1 + 0xac0 + (ulonglong)param_3 * 0x180);
        do {
            lVar1 = *plVar2;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0x118) == param_2)) {
                return lVar1;
            }
            uVar3 = uVar3 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar3 < 0x30);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1403c2020(undefined8 param_1,uint param_2,int param_3,int param_4,undefined8 param_5)

{
    undefined8 *puVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong local_28;
    ulonglong local_20;

    lVar2 = DAT_140c65898;
    uVar7 = (ulonglong)param_2;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (0x2f < param_2)) {
        return 0x80004005;
    }
    plVar4 = *(longlong **)
            (DAT_140c65898 + 0xac0 +
             ((ulonglong)*(uint *)(DAT_140c65898 + 0x6dec) * 0x30 + uVar7) * 8);
    if (((plVar4 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar4 + 8))(plVar4), iVar3 != param_3)
        ) || (*(int *)((longlong)plVar4 + 0x114) != param_4)) {
        if (param_3 == 4) {
            plVar4 = (longlong *)FUN_1403c1780(lVar2,param_4);
            if (((plVar4 != (longlong *)0x0) && (iVar3 = FUN_1403bb170(lVar2,param_4), iVar3 != 0)) &&
                ((iVar3 = (**(code **)(*plVar4 + 0x70))(plVar4), iVar3 == 4 || (param_2 < 0xc)))) {
                LAB_1403c2102:
                lVar5 = FUN_1405a4b80(plVar4,1);
                if ((*(uint *)(*(longlong *)(lVar5 + 0x70) + 0x108) & 0x40000000) == 0) {
                    LAB_1403c2139:
                    lVar5 = FUN_1403c1bf0(lVar2,9,param_3,param_4,param_5,0);
                    if ((lVar5 == 0) && (param_3 != 0)) {
                        return 0x80004005;
                    }
                    plVar4 = *(longlong **)
                            (lVar2 + 0xac0 + ((ulonglong)*(uint *)(lVar2 + 0x6dec) * 0x30 + uVar7) * 8);
                    if (((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x10))(), iVar3 == 0))
                        && (puVar1 = *(undefined8 **)
                            (lVar2 + 0xac0 +
                             ((ulonglong)*(uint *)(lVar2 + 0x6dec) * 0x30 + uVar7) * 8),
                            puVar1 != (undefined8 *)0x0)) {
                        (**(code **)*puVar1)(puVar1,1);
                    }
                    *(longlong *)(lVar2 + 0xac0 + ((ulonglong)*(uint *)(lVar2 + 0x6dec) * 0x30 + uVar7) * 8) =
                            lVar5;
                    local_28 = CONCAT44(param_3,param_2) & 0xffffffff000000ff;
                    local_20 = (ulonglong)CONCAT14(*(undefined *)(lVar2 + 0x6dec),param_4);
                    FUN_1403f4900(lVar2,0x16a,&local_28);
                    goto LAB_1403c2213;
                }
            }
        }
        else if ((param_3 == 0) || (0xb < param_2)) {
            if (param_3 != 0xd) goto LAB_1403c2139;
            plVar4 = (longlong *)FUN_1403c1780(lVar2,param_4);
            if ((plVar4 != (longlong *)0x0) && (iVar3 = FUN_1403bb170(lVar2,param_4), iVar3 != 0))
                goto LAB_1403c2102;
        }
        uVar6 = 1;
    }
    else {
        LAB_1403c2213:
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_1403c2230(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong **pplVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 *puVar6;

    uVar4 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x10c0);
    pplVar3 = (longlong **)(param_1 + 0x10e8);
    do {
        lVar5 = 0xc;
        do {
            if (*pplVar3 != (longlong *)0x0) {
                iVar2 = (**(code **)(**pplVar3 + 0x10))();
                if ((iVar2 == 0) && (plVar1 = *pplVar3, plVar1 != (longlong *)0x0)) {
                    (**(code **)*plVar1)(plVar1,1);
                }
                *pplVar3 = (longlong *)0x0;
            }
            pplVar3 = pplVar3 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        *puVar6 = 0;
        if (*(longlong *)(param_1 + 0x7340) != 0) {
            FUN_1400ea3e0(*(longlong *)(param_1 + 0x7340),"ShowActionBarShortcut",&DAT_1409e98ac,uVar4,0,0
            );
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
    } while (uVar4 < 9);
    *(undefined4 *)(param_1 + 0x1498) = 9;
    *(undefined4 *)(param_1 + 0x149c) = 9;
    return;
}



undefined8 FUN_1403c2300(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    longlong *plVar5;

    lVar1 = DAT_140c65898;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0))
                ;
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x80) == 3)) && (param_2 != 0)) {
            lVar2 = FUN_1407a0fd0(DAT_140c65b70,param_2);
            if (lVar2 != 0) {
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (*(int *)(DAT_140c65898 + 0x10c0) != 0)) {
                    uVar3 = 0;
                    plVar5 = (longlong *)(DAT_140c65898 + 0x10e8);
                    do {
                        if ((*plVar5 != 0) &&
                            (*(int *)(*plVar5 + 0x118) == *(int *)(*(longlong *)(lVar2 + 0x70) + 4))) {
                            uVar4 = FUN_14039df50(DAT_140c65898);
                            return uVar4;
                        }
                        uVar3 = uVar3 + 1;
                        plVar5 = plVar5 + 1;
                    } while (uVar3 < 0xc);
                }
            }
        }
    }
    return *(undefined8 *)(lVar1 + 0x78);
}



void FUN_1403c23c0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;
    ulonglong uVar8;
    bool bVar9;
    longlong local_res8;
    longlong local_res10;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
    do {
        if (lVar2 == 0) {
            return;
        }
        if (*(int *)(lVar2 + 4) - 1U < 2) {
            uVar1 = *(uint *)(lVar2 + 8);
            lVar7 = *(longlong *)(param_1 + 0x78);
            if (uVar1 != 0) {
                if (lVar7 == 0) {
                    LAB_1403c24ae:
                    lVar7 = FUN_1407a0fd0(DAT_140c65b70);
                    if (lVar7 == 0) goto LAB_1403c255f;
                }
                else {
                    if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
                        bVar9 = true;
                    }
                    else {
                        bVar9 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
                    }
                    lVar7 = 0;
                    if (bVar9) {
                        lVar7 = DAT_140c65898;
                    }
                    if (lVar7 == 0) goto LAB_1403c24ae;
                    lVar7 = *(longlong *)(lVar7 + 0x7d18);
                    lVar4 = lVar7;
                    lVar3 = *(longlong *)(lVar7 + 8);
                    while (lVar3 != 0) {
                        if (*(uint *)(lVar3 + 0x20) < uVar1) {
                            lVar3 = *(longlong *)(lVar3 + 0x18);
                        }
                        else {
                            lVar4 = lVar3;
                            lVar3 = *(longlong *)(lVar3 + 0x10);
                        }
                    }
                    if ((lVar4 == lVar7) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                        local_res10 = lVar7;
                        plVar6 = &local_res10;
                    }
                    else {
                        local_res8 = lVar4;
                        plVar6 = &local_res8;
                    }
                    if ((*plVar6 == lVar7) || (lVar7 = *(longlong *)(*plVar6 + 0x28), lVar7 == 0))
                        goto LAB_1403c24ae;
                }
                iVar5 = FUN_1403d8c10(lVar7);
                if (iVar5 == 0) {
                    uVar8 = 0;
                    do {
                        plVar6 = *(longlong **)
                                (param_1 + 0xac0 + ((ulonglong)*(uint *)(param_1 + 0x6dec) * 0x30 + uVar8) * 8
                                );
                        if (((plVar6 != (longlong *)0x0) && (iVar5 = (**(code **)(*plVar6 + 8))(), iVar5 == 4))
                            && (*(int *)(*(longlong *)(lVar7 + 0x70) + 4) ==
                                *(int *)(*(longlong *)
                                        (param_1 + 0xac0 +
                                         ((ulonglong)*(uint *)(param_1 + 0x6dec) * 0x30 + uVar8) * 8) + 0x118)))
                        {
                            iVar5 = FUN_1403bad30(param_1);
                            if ((iVar5 != 0) && (*(int *)(lVar2 + 8) = iVar5, *(int *)(lVar2 + 4) == 1)) {
                                *(int *)(lVar2 + 0xc) = iVar5;
                            }
                            break;
                        }
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < 0xc);
                }
            }
        }
        LAB_1403c255f:
        lVar2 = *(longlong *)(lVar2 + 0x88);
    } while( true );
}



undefined8 FUN_1403c2580(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 local_res8 [4];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 != 0) {
        uVar3 = 0;
        plVar2 = (longlong *)(lVar1 + 0x2d8);
        plVar5 = (longlong *)(DAT_140c65a08 + 0x28);
        do {
            if (*plVar2 != 0) {
                if ((int)uVar3 < 0x1c) {
                    lVar4 = *plVar5;
                }
                else {
                    lVar4 = 0;
                }
                if ((*(byte *)(lVar4 + 0x10) & 4) != 0) {
                    return 0x80004005;
                }
            }
            uVar3 = uVar3 + 1;
            plVar5 = plVar5 + 1;
            plVar2 = plVar2 + 2;
        } while (uVar3 < 0x1c);
        if ((*(int *)(lVar1 + 0x250) == 0) && (*(int *)(DAT_140c65898 + 0x6644) == 0x31)) {
            local_res8[0] = CONCAT44(param_3,param_2);
            FUN_1403f4900(DAT_140c65898,0xbe,local_res8);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1403c2630(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0x6644) != 0x31) {
        return 0x80004005;
    }
    lVar4 = FUN_1403d90d0(param_1,*(undefined4 *)(param_1 + 0x6640));
    if (lVar4 == 0) {
        return 0x80004005;
    }
    plVar5 = (longlong *)FUN_1403ac780(param_1 + 0xa0,param_2);
    if (plVar5 == (longlong *)0x0) {
        return 0x80004005;
    }
    lVar9 = *(longlong *)(lVar4 + 0x18);
    if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x74) != 0) {
            return 0x80004005;
        }
        if (*(int *)(lVar9 + 0x148) != 0) {
            return 0x80004005;
        }
        if (*(int *)(lVar9 + 0x78) != 0) {
            return 0x80004005;
        }
        lVar6 = FUN_1403d3950();
        if (lVar6 != 0) {
            return 0x80004005;
        }
        if (*(int *)(lVar9 + 0x70) != 0) {
            plVar7 = (longlong *)FUN_1403ac530();
            if (((plVar7 != (longlong *)0x0) && ((*(byte *)(*plVar7 + 4) & 4) != 0)) &&
                (lVar9 = *(longlong *)(plVar7[2] + 0x10), lVar9 != plVar7[2])) {
                do {
                    piVar1 = **(int ***)(lVar9 + 0x28);
                    if (((piVar1 != (int *)0x0) && (piVar1[1] == 2)) && (iVar3 = FUN_14049bf90(), iVar3 != 0))
                    {
                        iVar3 = *piVar1;
                        if (iVar3 == 0) {
                            return 0x80004005;
                        }
                        uVar8 = (**(code **)(*plVar5 + 0x30))(plVar5);
                        uVar8 = FUN_1404ab040(plVar7,lVar4,iVar3,param_3,uVar8);
                        return uVar8;
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
                } while (lVar9 != plVar7[2]);
            }
            return 0x80004005;
        }
    }
    iVar3 = FUN_1403d3a60(*(undefined8 *)(param_1 + 0x78),lVar4);
    if (iVar3 != 0) {
        FUN_1403cc530(param_1,iVar3);
        return 0x80004005;
    }
    local_28 = *param_2;
    local_20 = param_3;
    FUN_1403f4900(param_1,0x166,&local_28);
    return 0;
}



undefined8 FUN_1403c2850(ulonglong param_1,uint param_2)

{
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong local_res8 [4];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 != 0) {
        uVar3 = 0;
        plVar2 = (longlong *)(lVar1 + 0x2d8);
        plVar4 = (longlong *)(DAT_140c65a08 + 0x28);
        do {
            if (*plVar2 != 0) {
                if ((int)uVar3 < 0x1c) {
                    lVar5 = *plVar4;
                }
                else {
                    lVar5 = 0;
                }
                if ((*(byte *)(lVar5 + 0x10) & 4) != 0) {
                    return 0x80004005;
                }
            }
            uVar3 = uVar3 + 1;
            plVar4 = plVar4 + 1;
            plVar2 = plVar2 + 2;
        } while (uVar3 < 0x1c);
        if ((*(int *)(lVar1 + 0x250) == 0) && (*(int *)(DAT_140c65898 + 0x6644) == 0x31)) {
            local_res8[0] = param_1 & 0xffffffff00000000 | (ulonglong)param_2;
            FUN_1403f4900(DAT_140c65898,0xbb,local_res8);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1403c28f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar3 = FUN_1403d90d0(param_1,*(undefined4 *)(param_1 + 0x6640));
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x36d8) != 0)) {
        plVar4 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0,param_2);
        if (((plVar4 == (longlong *)0x0) || (iVar2 = FUN_140569f10(plVar4), iVar2 == 0)) ||
            ((param_3 == (undefined8 *)0x0 &&
              (uVar1 = *(ulonglong *)(param_1 + 0x15f8), uVar5 = FUN_1403b54a0(), uVar1 <= uVar5)))) {
            uVar6 = 0x80004005;
        }
        else {
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            local_28 = (**(code **)(*plVar4 + 0x30))(plVar4);
            if (param_3 == (undefined8 *)0x0) {
                local_20 = 0;
            }
            else {
                local_20 = *param_3;
            }
            local_18 = 0;
            FUN_1403f4900(param_1,0x14c,&local_28);
            uVar6 = 0;
        }
        return uVar6;
    }
    return 0x80004005;
}



ulonglong FUN_1403c2a20(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong local_48;
    ulonglong local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    lVar1 = DAT_140c65898;
    if (((*(int *)(DAT_140c65898 + 0x6644) != 0x31) ||
         (lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(DAT_140c65898 + 0x6640)),
                 lVar2 = DAT_140c65898, lVar4 == 0)) || (*(int *)(lVar4 + 0x36d8) == 0)) {
        return 0x80004005;
    }
    uVar7 = 0;
    local_40 = 0;
    local_48 = 0;
    FUN_1403d6710(DAT_140c65898 + 0xa0,&local_48);
    FUN_1403d6710(lVar2 + 0xb8,&local_48);
    FUN_1403d6710(lVar2 + 0x118,&local_48);
    FUN_1403d6710(lVar2 + 0x130,&local_48);
    uVar5 = local_40;
    lVar2 = local_48;
    if (param_2 == (undefined8 *)0x0) {
        uVar6 = uVar7;
        uVar8 = uVar7;
        if (local_40 != 0) {
            do {
                iVar3 = FUN_140569f10(*(undefined8 *)(lVar2 + uVar6 * 8));
                if (iVar3 != 0) {
                    lVar4 = FUN_1403b54a0();
                    uVar8 = uVar8 + lVar4;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar5);
        }
        uVar5 = *(ulonglong *)(lVar1 + 0x15f8);
        if (uVar5 <= uVar8) {
            uVar7 = 0x80004005;
            goto LAB_1403c2b4c;
        }
    }
    else {
        uVar5 = uVar7;
        if (((ulonglong)(longlong)*(int *)((longlong)param_2 + 0x304) < 10) &&
            (uVar5 = 0,
                    param_2 + (longlong)*(int *)((longlong)param_2 + 0x304) * 5 + 3 != (undefined8 *)0x0)) {
            uVar6 = (param_2 + (longlong)*(int *)((longlong)param_2 + 0x304) * 5 + 3)[4];
            if ((ulonglong)param_2[0x4d] < uVar6) {
                uVar5 = uVar6 - param_2[0x4d];
            }
        }
    }
    local_30 = 0;
    local_38 = 0;
    if (param_2 != (undefined8 *)0x0) {
        local_30 = *param_2;
    }
    local_28 = uVar5;
    FUN_1403f4900(lVar1,0x14c,&local_38);
    LAB_1403c2b4c:
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return uVar7;
}



void FUN_1403c2c10(longlong param_1)

{
    int *piVar1;
    int iVar2;

    piVar1 = DAT_140c63750;
    *(undefined4 *)(param_1 + 0x7ba0) = 1;
    iVar2 = DAT_140c45ec0;
    if (*piVar1 < DAT_140c45ec0) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c45ed0)[iVar2] != '\0') {
        *(undefined4 *)(param_1 + 0x7ba0) = 5;
    }
    iVar2 = DAT_140c45e80;
    if (*piVar1 < DAT_140c45e80) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c45e90)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba0) = *(uint *)(param_1 + 0x7ba0) | 2;
    }
    iVar2 = DAT_140c45e40;
    if (*piVar1 < DAT_140c45e40) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c45e50)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba0) = *(uint *)(param_1 + 0x7ba0) | 8;
    }
    return;
}



void FUN_1403c2ca0(longlong param_1)

{
    int *piVar1;
    int iVar2;

    piVar1 = DAT_140c63750;
    *(undefined4 *)(param_1 + 0x7ba4) = 0;
    iVar2 = DAT_140c4e080;
    if (*piVar1 < DAT_140c4e080) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e090)[iVar2] != '\0') {
        *(undefined4 *)(param_1 + 0x7ba4) = 1;
    }
    *(undefined4 *)(param_1 + 0x7ba8) = 0;
    iVar2 = DAT_140c4e0c0;
    if (*piVar1 < DAT_140c4e0c0) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e0d0)[iVar2] != '\0') {
        *(undefined4 *)(param_1 + 0x7ba8) = 1;
    }
    iVar2 = DAT_140c4e100;
    if (*piVar1 < DAT_140c4e100) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e110)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 2;
    }
    iVar2 = DAT_140c4e140;
    if (*piVar1 < DAT_140c4e140) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e150)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 4;
    }
    iVar2 = DAT_140c4e180;
    if (*piVar1 < DAT_140c4e180) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e190)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 8;
    }
    iVar2 = DAT_140c4e1c0;
    if (*piVar1 < DAT_140c4e1c0) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e1d0)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x10;
    }
    iVar2 = DAT_140c4e200;
    if (*piVar1 < DAT_140c4e200) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e210)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x20;
    }
    iVar2 = DAT_140c4e240;
    if (*piVar1 < DAT_140c4e240) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e250)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x40;
    }
    iVar2 = DAT_140c4e280;
    if (*piVar1 < DAT_140c4e280) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e290)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x80;
    }
    iVar2 = DAT_140c4e2c0;
    if (*piVar1 < DAT_140c4e2c0) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e2d0)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x100;
    }
    iVar2 = DAT_140c4e300;
    if (*piVar1 < DAT_140c4e300) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e310)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x200;
    }
    iVar2 = DAT_140c4e340;
    if (*piVar1 < DAT_140c4e340) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e350)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x400;
    }
    iVar2 = DAT_140c4e380;
    if (*piVar1 < DAT_140c4e380) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e390)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x800;
    }
    iVar2 = DAT_140c4e3c0;
    if (*piVar1 < DAT_140c4e3c0) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e3d0)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x1000;
    }
    iVar2 = DAT_140c4e400;
    if (*piVar1 < DAT_140c4e400) {
        iVar2 = *piVar1;
    }
    if ((&DAT_140c4e410)[iVar2] != '\0') {
        *(uint *)(param_1 + 0x7ba8) = *(uint *)(param_1 + 0x7ba8) | 0x2000;
    }
    return;
}



undefined8 FUN_1403c2ee0(undefined8 param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        ((((param_3 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) ||
            ((*(byte *)(DAT_140c65898 + 0x7ba4) & 1) == 0)) ||
           (lVar2 = FUN_1403d90d0(DAT_140c65898,param_3), lVar2 == 0)) || (*(int *)(lVar2 + 0xd50) == 0)
        ))) {
        switch(param_2) {
            case 0:
                if ((*(byte *)(lVar1 + 0x7ba8) & 1) != 0) {
                    return 0;
                }
                break;
            case 1:
                if ((*(byte *)(lVar1 + 0x7ba8) & 2) != 0) {
                    return 0;
                }
                break;
            default:
                if (param_3 != *(int *)(*(longlong *)(lVar1 + 0x78) + 8)) {
                    return 0;
                }
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                if ((*(byte *)(lVar1 + 0x7ba8) & 4) != 0) {
                    return 0;
                }
                break;
            case 8:
                if ((*(byte *)(lVar1 + 0x7ba8) & 0x40) != 0) {
                    return 0;
                }
                break;
            case 9:
            case 0xc:
            case 0xd:
                if ((*(byte *)(lVar1 + 0x7ba8) & 0x80) != 0) {
                    return 0;
                }
                break;
            case 10:
                if ((*(byte *)(lVar1 + 0x7ba8) & 0x10) != 0) {
                    return 0;
                }
                break;
            case 0xb:
                if ((*(byte *)(lVar1 + 0x7ba8) & 0x20) != 0) {
                    return 0;
                }
                break;
            case 0xe:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x400) != 0) {
                    return 0;
                }
                break;
            case 0xf:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x800) != 0) {
                    return 0;
                }
                break;
            case 0x10:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x1000) != 0) {
                    return 0;
                }
                break;
            case 0x11:
                if ((*(byte *)(lVar1 + 0x7ba8) & 8) != 0) {
                    return 0;
                }
                break;
            case 0x12:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x100) != 0) {
                    return 0;
                }
                break;
            case 0x13:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x200) != 0) {
                    return 0;
                }
                break;
            case 0x16:
                if ((*(uint *)(lVar1 + 0x7ba8) & 0x2000) != 0) {
                    return 0;
                }
        }
        return 1;
    }
    return 0;
}



void FUN_1403c48e0(undefined8 *param_1,short *param_2)

{
    int *piVar1;
    short sVar2;
    undefined4 uVar3;
    longlong lVar4;
    float *pfVar5;
    undefined (*pauVar6) [16];
    undefined4 *puVar7;
    uint6 uVar8;
    undefined2 *puVar9;
    undefined8 *puVar10;
    uint uVar11;
    ulonglong uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    longlong lVar15;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    float extraout_XMM0_Da_08;
    float extraout_XMM0_Da_09;
    float extraout_XMM0_Da_10;
    float extraout_XMM0_Da_11;
    float extraout_XMM0_Da_12;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    undefined8 uVar16;
    ushort uVar21;
    undefined extraout_XMM0 [16];
    undefined auVar18 [16];
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined auStack440 [32];
    float local_198;
    float fStack404;
    float fStack400;
    undefined4 uStack396;
    float local_188;
    float fStack388;
    float fStack384;
    undefined4 uStack380;
    float local_178;
    float fStack372;
    float fStack368;
    undefined4 uStack364;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    float local_148;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    float local_128;
    float fStack292;
    float fStack288;
    float fStack284;
    undefined local_118 [16];
    undefined local_108 [16];
    ulonglong local_e0;
    undefined auVar17 [12];
    undefined auVar19 [16];
    undefined auVar20 [16];

    local_e0 = DAT_140c0f7b0 ^ (ulonglong)auStack440;
    param_1[1] = 1;
    lVar15 = 0;
    *param_1 = &PTR_LAB_140b66490;
    *(undefined4 *)(param_1 + 2) = DAT_140c77760;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_140c77764;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    puVar9 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[10] = puVar9;
    param_1[0xb] = puVar9;
    param_1[0xc] = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    param_1[0xd] = 0;
    fVar22 = 0.001;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    fVar27 = 0.0;
    fVar24 = 2.0;
    fVar26 = 1.0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0x58) = extraout_XMM0 & (undefined  [16])0x0;
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 3) =
            *(undefined4 *)
                    (*(longlong *)(param_2 + 0x4c) + -0x48 +
                     ((*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x4c)) / 0x48) * 0x48);
    do {
        *(undefined4 *)((longlong)param_1 + lVar15 * 4 + 0x1c) = 0;
        puVar14 = param_1 + lVar15 * 4 + 0x12;
        lVar13 = puVar14[2];
        lVar4 = puVar14[1];
        FUN_1407db590(lVar4,lVar13);
        puVar14[2] = puVar14[2] + (lVar13 - lVar4 >> 2) * -4;
        uVar11 = 0;
        if ((*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x4c)) / 0x48 != 0) {
            uVar12 = 0;
            do {
                piVar1 = (int *)((longlong)param_1 + lVar15 * 4 + 0x1c);
                *piVar1 = *piVar1 + *(int *)(*(longlong *)(param_2 + 0x4c) + uVar12 * 0x48);
                if ((uVar11 == 0) ||
                    (*(int *)(*(longlong *)(param_2 + 0x4c) + 0x34 + (lVar15 + uVar12 * 0x12) * 4) != 0)) {
                    pfVar5 = (float *)puVar14[2];
                    local_148 = (float)(ulonglong)*(uint *)(*(longlong *)(param_2 + 0x4c) + uVar12 * 0x48) /
                                (float)(ulonglong)*(uint *)(param_1 + 3);
                    if (pfVar5 == (float *)puVar14[3]) {
                        FUN_1401e4420(puVar14);
                    }
                    else {
                        if (pfVar5 != (float *)0x0) {
                            *pfVar5 = local_148;
                        }
                        puVar14[2] = puVar14[2] + 4;
                    }
                    if (lVar15 == 0) {
                        fVar26 = *(float *)(*(longlong *)(param_2 + 0x4c) + 0x10 + uVar12 * 0x48);
                        fVar25 = *(float *)(*(longlong *)(param_2 + 0x4c) + 0xc + uVar12 * 0x48);
                        (**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                        fVar22 = (float)(ulonglong)*(uint *)(param_1 + 3) *
                                 ((float)(extraout_XMM0_Qa * (double)(fVar26 - fVar25)) + fVar25) * fVar22;
                        (**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                        FUN_1408fe3d0();
                        fVar25 = extraout_XMM0_Da;
                        FUN_1408fc950();
                        fVar26 = extraout_XMM0_Da_00;
                        FUN_1408fe3d0();
                        fVar23 = extraout_XMM0_Da_01;
                        FUN_1408fc950();
                        local_138 = extraout_XMM0_Da_02 * fVar23 * fVar26 +
                                    fVar23 * extraout_XMM0_Da_02 * fVar25;
                        fStack308 = fVar23 * extraout_XMM0_Da_02 * fVar26 -
                                    extraout_XMM0_Da_02 * fVar23 * fVar25;
                        fStack304 = extraout_XMM0_Da_02 * extraout_XMM0_Da_02 * fVar25 -
                                    fVar23 * fVar23 * fVar26;
                        fStack300 = fVar23 * fVar23 * fVar25 +
                                    extraout_XMM0_Da_02 * extraout_XMM0_Da_02 * fVar26;
                        fVar25 = fStack308 * fVar24;
                        pfVar5 = (float *)param_1[0x28];
                        uStack396 = 0;
                        uStack380 = 0;
                        uStack364 = 0;
                        fVar26 = fStack304 * fVar24;
                        fStack372 = local_138 * fVar24 * fStack300;
                        local_178 = fVar26 * local_138 + fVar25 * fStack300;
                        fStack400 = fVar26 * local_138 - fVar25 * fStack300;
                        local_198 = (1.0 - fVar25 * fStack308) - fVar26 * fStack304;
                        fStack384 = fVar26 * fStack308 + fStack372;
                        fStack372 = fVar26 * fStack308 - fStack372;
                        local_188 = fVar25 * local_138 - fVar26 * fStack300;
                        fStack404 = fVar25 * local_138 + fVar26 * fStack300;
                        fStack388 = 1.0 - local_138 * fVar24 * local_138;
                        fStack368 = fStack388 - fVar25 * fStack308;
                        fStack388 = fStack388 - fVar26 * fStack304;
                        local_128 = fVar22 * local_188 + local_198 * 0.0 + local_178 * 0.0 + 0.0;
                        fStack292 = fVar22 * fStack388 + fStack404 * 0.0 + fStack372 * 0.0 + 0.0;
                        fStack288 = fVar22 * fStack384 + fStack400 * 0.0 + fStack368 * 0.0 + 0.0;
                        fStack284 = fVar22 * 0.0 + 0.0 + 0.0 + 1.0;
                        fVar22 = extraout_XMM0_Da_02;
                        if (pfVar5 == (float *)param_1[0x29]) {
                            FUN_1403d3b90(param_1 + 0x26);
                        }
                        else {
                            if (pfVar5 != (float *)0x0) {
                                *pfVar5 = local_128;
                                pfVar5[1] = fStack292;
                                pfVar5[2] = fStack288;
                                pfVar5[3] = fStack284;
                            }
                            param_1[0x28] = param_1[0x28] + 0x10;
                        }
                        (**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                        fVar24 = *(float *)(*(longlong *)(param_2 + 0x4c) + 0x20 + uVar12 * 0x48);
                        fVar25 = *(float *)(*(longlong *)(param_2 + 0x4c) + 0x1c + uVar12 * 0x48);
                        (**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                        fVar25 = (float)(extraout_XMM0_Qa_00 * (double)(fVar24 - fVar25)) + fVar25;
                        FUN_1408fe3d0();
                        fVar24 = extraout_XMM0_Da_03;
                        FUN_1408fc950();
                        local_158 = fVar22 * fVar23 * extraout_XMM0_Da_04 + fVar23 * fVar22 * fVar24;
                        fStack340 = fVar23 * fVar22 * extraout_XMM0_Da_04 - fVar22 * fVar23 * fVar24;
                        fStack332 = fVar23 * fVar23 * fVar24 + fVar22 * fVar22 * extraout_XMM0_Da_04;
                        fStack336 = fVar22 * fVar22 * fVar24 - fVar23 * fVar23 * extraout_XMM0_Da_04;
                        fVar24 = fStack340 * 2.0;
                        fVar22 = fStack336 * 2.0;
                        fStack372 = local_158 * 2.0 * fStack332;
                        fVar26 = 1.0;
                        pauVar6 = (undefined (*) [16])param_1[0x2c];
                        uStack396 = 0;
                        uStack380 = 0;
                        uStack364 = 0;
                        local_178 = fVar22 * local_158 + fVar24 * fStack332;
                        local_198 = (1.0 - fVar24 * fStack340) - fVar22 * fStack336;
                        fStack400 = fVar22 * local_158 - fVar24 * fStack332;
                        fStack404 = fVar24 * local_158 + fVar22 * fStack332;
                        local_188 = fVar24 * local_158 - fVar22 * fStack332;
                        fStack384 = fVar22 * fStack340 + fStack372;
                        fStack368 = 1.0 - local_158 * 2.0 * local_158;
                        fStack372 = fVar22 * fStack340 - fStack372;
                        fStack388 = fStack368 - fVar22 * fStack336;
                        fVar22 = 0.001;
                        fStack368 = fStack368 - fVar24 * fStack340;
                        fVar24 = fVar25 * (float)(ulonglong)*(uint *)(param_1 + 3) *
                                 (float)(ulonglong)*(uint *)(param_1 + 3) * 0.001 * 0.001;
                        local_118 = CONCAT412(fVar24 * 0.0 + 0.0 + 0.0 + 1.0,
                                              CONCAT48(fVar24 * fStack384 + fStack400 * 0.0 + fStack368 * 0.0 +
                                                       0.0,CONCAT44(fVar24 * fStack388 + fStack404 * 0.0 +
                                                                    fStack372 * 0.0 + 0.0,
                                                                    fVar24 * local_188 + local_198 * 0.0 +
                                                                    local_178 * 0.0 + 0.0)));
                        if (pauVar6 == (undefined (*) [16])param_1[0x2d]) {
                            FUN_1403d3b90(param_1 + 0x2a);
                        }
                        else {
                            if (pauVar6 != (undefined (*) [16])0x0) {
                                *pauVar6 = local_118;
                            }
                            param_1[0x2c] = param_1[0x2c] + 0x10;
                        }
                        fVar24 = 2.0;
                    }
                    else if (lVar15 == 1) {
                        puVar7 = (undefined4 *)param_1[0x30];
                        puVar10 = param_1 + 0x2e;
                        if (puVar7 == (undefined4 *)param_1[0x31]) {
                            LAB_1403c524b:
                            FUN_1401e4420(puVar10);
                        }
                        else {
                            if (puVar7 != (undefined4 *)0x0) {
                                *puVar7 = *(undefined4 *)(*(longlong *)(param_2 + 0x4c) + 0x2c + uVar12 * 0x48);
                            }
                            param_1[0x30] = param_1[0x30] + 4;
                        }
                    }
                    else if (lVar15 == 3) {
                        puVar10 = param_1 + 0x36;
                        lVar13 = *(longlong *)(param_2 + 0x4c) + 0x28;
                        LAB_1403c55ad:
                        puVar7 = (undefined4 *)puVar10[2];
                        if (puVar7 == (undefined4 *)puVar10[3]) goto LAB_1403c524b;
                        if (puVar7 != (undefined4 *)0x0) {
                            *puVar7 = *(undefined4 *)(lVar13 + uVar12 * 0x48);
                        }
                        puVar10[2] = puVar10[2] + 4;
                    }
                    else if (lVar15 == 2) {
                        pauVar6 = (undefined (*) [16])param_1[0x3c];
                        uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x4c) + 0x24 + uVar12 * 0x48);
                        uVar16 = CONCAT44(uVar3,uVar3);
                        auVar17 = CONCAT48(uVar3,uVar16);
                        auVar20 = CONCAT97((unkuint9)
                                                   SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(
                                                                                            SUB153(CONCAT213(SUB152(CONCAT114((char)((uint)
                                                                                                                                      uVar3 >> 0x18),
                                                                                                                              ZEXT1314(SUB1613(CONCAT412(uVar3,auVar17),0))) >>
                                                                                                                                                                             0x68,0),CONCAT112((char)((uint)uVar3 >> 0x10),
                                                                                                                                                                                               auVar17)) >> 0x60,0),auVar17) >>
                                                                                                                                                                                                                             0x58,0),CONCAT110((char)((uint)uVar3 >> 8),
                                                                                                                                                                                                                                               SUB1210(auVar17,0))) >> 0x50,0),
                                                                                    (unkuint10)SUB129(auVar17,0)) >> 0x48,0),
                                                                   CONCAT18((char)uVar3,uVar16)) >> 0x40,0) << 8,
                                           ((uint7)uVar16 >> 0x18) << 0x30);
                        auVar19 = CONCAT115(ZEXT1011(SUB1610(auVar20 >> 0x30,0)) << 8,
                                            ((uint5)uVar16 >> 0x10) << 0x20);
                        auVar18 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar19 >> 0x20,0)) << 8,
                                                              ((uint3)uVar3 >> 8) << 0x10) >> 0x10,0),
                                            (short)uVar3) & (undefined  [16])0xffffffffffff00ff;
                        uVar21 = SUB162(auVar20 >> 0x30,0);
                        uVar8 = CONCAT42(SUB144(CONCAT212(uVar21,ZEXT1012(SUB1610(auVar18,0))) >> 0x50,0),
                                         SUB162(auVar19 >> 0x20,0));
                        local_108 = CONCAT412((float)(uint)uVar21 * 0.003921569,
                                              CONCAT48((float)(SUB164(auVar18,0) & 0xffff) * 0.003921569,
                                                       CONCAT44((float)SUB164(CONCAT106((unkuint10)uVar8 << 0x10
                                                                                      ,(SUB166(auVar18,0) >>
                                                                                                          0x10) << 0x20) >> 0x20,
                                                                              0) * 0.003921569,
                                                                (float)(int)uVar8 * 0.003921569)));
                        if (pauVar6 == (undefined (*) [16])param_1[0x3d]) {
                            FUN_1403d3b90(param_1 + 0x3a);
                        }
                        else {
                            if (pauVar6 != (undefined (*) [16])0x0) {
                                *pauVar6 = local_108;
                            }
                            param_1[0x3c] = param_1[0x3c] + 0x10;
                        }
                    }
                    else if (lVar15 == 4) {
                        puVar10 = param_1 + 0x32;
                        lVar13 = *(longlong *)(param_2 + 0x4c) + 0x30;
                        goto LAB_1403c55ad;
                    }
                }
                uVar11 = uVar11 + 1;
                uVar12 = (ulonglong)uVar11;
            } while (uVar12 < (ulonglong)
                    ((*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x4c)) / 0x48));
        }
        lVar15 = lVar15 + 1;
        if (4 < lVar15) {
            if (*(int *)(param_2 + 0x26) == 4) {
                *(undefined4 *)((longlong)param_1 + 0xc) = 1;
                FUN_1408fe3d0();
                fVar25 = extraout_XMM0_Da_05;
                FUN_1408fc950();
                fVar24 = extraout_XMM0_Da_06;
                FUN_1408fe3d0();
                fVar22 = extraout_XMM0_Da_07;
                FUN_1408fc950();
                fStack340 = fVar24 * fVar22 * extraout_XMM0_Da_08 - fVar25 * extraout_XMM0_Da_08 * fVar22;
                local_158 = fVar24 * extraout_XMM0_Da_08 * fVar22 + fVar25 * fVar22 * extraout_XMM0_Da_08;
                fStack336 = fVar25 * extraout_XMM0_Da_08 * extraout_XMM0_Da_08 - fVar24 * fVar22 * fVar22;
                fStack332 = fVar25 * fVar22 * fVar22 + fVar24 * extraout_XMM0_Da_08 * extraout_XMM0_Da_08;
                fVar24 = fStack336 * 2.0;
                fVar22 = fStack340 * 2.0;
                fStack372 = local_158 * 2.0 * fStack332;
                local_198 = (fVar26 - fVar22 * fStack340) - fVar24 * fStack336;
                fStack404 = fVar22 * local_158 + fVar24 * fStack332;
                local_188 = fVar22 * local_158 - fVar24 * fStack332;
                uStack396 = 0;
                fStack400 = fVar24 * local_158 - fVar22 * fStack332;
                uStack380 = 0;
                uStack364 = 0;
                fStack368 = fVar26 - local_158 * 2.0 * local_158;
                local_178 = fVar24 * local_158 + fVar22 * fStack332;
                fStack384 = fVar24 * fStack340 + fStack372;
                fStack388 = fStack368 - fVar24 * fStack336;
                fStack368 = fStack368 - fVar22 * fStack340;
                fVar22 = *(float *)(param_2 + 0x2c);
                fStack372 = fVar24 * fStack340 - fStack372;
                *(int *)(param_1 + 2) = (int)(fVar22 * local_188 + local_198 * 0.0 + local_178 * 0.0 + 0.0);
                *(int *)((longlong)param_1 + 0x14) =
                        (int)(fVar22 * fStack388 + fStack404 * 0.0 + fStack372 * 0.0 + 0.0);
            }
            fVar22 = 2.0;
            lVar15 = 0;
            sVar2 = *param_2;
            while (sVar2 != 0) {
                lVar15 = lVar15 + 1;
                sVar2 = param_2[lVar15];
            }
            FUN_14001c480(param_1 + 9,param_2,param_2 + lVar15);
            lVar15 = FUN_1400e58c0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2);
            puVar14 = *(undefined8 **)(lVar15 + 0x60);
            param_1[0xd] = puVar14;
            if (puVar14 != (undefined8 *)0x0) {
                (**(code **)*puVar14)();
            }
            uVar3 = *(undefined4 *)(param_2 + 0x22);
            uVar16 = CONCAT44(uVar3,uVar3);
            auVar17 = CONCAT48(uVar3,uVar16);
            auVar20 = CONCAT97((unkuint9)
                                       SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153(
                                                                                                 CONCAT213(SUB152(CONCAT114((char)((uint)uVar3 >>
                                                                                                                                               0x18),
                                                                                                                            ZEXT1314(SUB1613(
                                                                                                                                    CONCAT412(uVar3,auVar17),0))) >> 0x68,0),
                                                                                                           CONCAT112((char)((uint)uVar3 >> 0x10),auVar17)) >>
                                                                                                                                                           0x60,0),auVar17) >> 0x58,0),
                                                                                         CONCAT110((char)((uint)uVar3 >> 8),
                                                                                                   SUB1210(auVar17,0))) >> 0x50,0),
                                                                        (unkuint10)SUB129(auVar17,0)) >> 0x48,0),
                                                       CONCAT18((char)uVar3,uVar16)) >> 0x40,0) << 8,
                               ((uint7)uVar16 >> 0x18) << 0x30);
            auVar19 = CONCAT115(ZEXT1011(SUB1610(auVar20 >> 0x30,0)) << 8,((uint5)uVar16 >> 0x10) << 0x20)
                    ;
            auVar18 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar19 >> 0x20,0)) << 8,
                                                  ((uint3)uVar3 >> 8) << 0x10) >> 0x10,0),(short)uVar3) &
                      (undefined  [16])0xffffffffffff00ff;
            uVar21 = SUB162(auVar20 >> 0x30,0);
            uVar8 = CONCAT42(SUB144(CONCAT212(uVar21,ZEXT1012(SUB1610(auVar18,0))) >> 0x50,0),
                             SUB162(auVar19 >> 0x20,0));
            *(undefined (*) [16])(param_1 + 0xe) =
                    CONCAT412((float)(uint)uVar21 * 0.003921569,
                              CONCAT48((float)(SUB164(auVar18,0) & 0xffff) * 0.003921569,
                                       CONCAT44((float)SUB164(CONCAT106((unkuint10)uVar8 << 0x10,
                                                                        (SUB166(auVar18,0) >> 0x10) << 0x20)
                                                                      >> 0x20,0) * 0.003921569,
                                                (float)(int)uVar8 * 0.003921569)));
            FUN_1408fe3d0();
            fVar23 = extraout_XMM0_Da_09;
            FUN_1408fc950();
            fVar24 = extraout_XMM0_Da_10;
            FUN_1408fe3d0();
            fVar25 = extraout_XMM0_Da_11;
            FUN_1408fc950();
            local_158 = fVar25 * extraout_XMM0_Da_12 * fVar23 + extraout_XMM0_Da_12 * fVar25 * fVar24;
            fStack336 = extraout_XMM0_Da_12 * extraout_XMM0_Da_12 * fVar23 - fVar25 * fVar25 * fVar24;
            fStack332 = fVar25 * fVar25 * fVar23 + extraout_XMM0_Da_12 * extraout_XMM0_Da_12 * fVar24;
            fStack340 = fVar25 * extraout_XMM0_Da_12 * fVar24 - extraout_XMM0_Da_12 * fVar25 * fVar23;
            fVar24 = fStack336 * fVar22;
            fVar25 = fStack340 * fVar22;
            fStack372 = fStack332 * local_158 * fVar22;
            local_198 = (fVar26 - fVar25 * fStack340) - fVar24 * fStack336;
            fStack404 = fVar25 * local_158 + fStack332 * fVar24;
            local_188 = fVar25 * local_158 - fStack332 * fVar24;
            fVar26 = fVar26 - local_158 * fVar22 * local_158;
            uStack396 = 0;
            uStack380 = 0;
            uStack364 = 0;
            fStack400 = fVar24 * local_158 - fStack332 * fVar25;
            fStack388 = fVar26 - fVar24 * fStack336;
            fStack368 = fVar26 - fVar25 * fStack340;
            fStack384 = fVar24 * fStack340 + fStack372;
            fStack372 = fVar24 * fStack340 - fStack372;
            fVar22 = *(float *)(param_2 + 0x2c);
            local_178 = fVar24 * local_158 + fStack332 * fVar25;
            *(float *)(param_1 + 0x10) = fVar22 * local_188 + local_198 * 0.0 + local_178 * 0.0 + 0.0;
            *(float *)((longlong)param_1 + 0x84) =
                    fVar22 * fStack388 + fStack404 * 0.0 + fStack372 * 0.0 + 0.0;
            *(float *)(param_1 + 0x11) = fVar22 * fStack384 + fStack400 * 0.0 + fStack368 * 0.0 + 0.0;
            *(float *)((longlong)param_1 + 0x8c) = fVar22 * 0.0 + 0.0 + 0.0 + 1.0;
            *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x5a);
            *(float *)((longlong)param_1 + 0x2b4) = *(float *)(param_2 + 0x5c) * 0.001;
            *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x58);
            *(undefined (*) [16])(param_1 + 0x58) =
                    CONCAT412(fVar27,ZEXT412((uint)(*(float *)(param_2 + 0x58) * 30.0)) << 0x20);
            *(undefined4 *)(param_1 + 0x5a) = 0;
            *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x5e);
            fVar22 = *(float *)(param_2 + 0x60);
            *(float *)((longlong)param_1 + 0x2dc) = fVar22;
            if (fVar22 == fVar27) {
                *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
            }
            fVar22 = *(float *)(param_2 + 0x62);
            *(float *)(param_1 + 0x5b) = fVar22;
            if (fVar22 == fVar27) {
                *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
            }
            FUN_1407db4f0(local_e0 ^ (ulonglong)auStack440);
            return;
        }
    } while( true );
}



undefined8 FUN_1403c5980(undefined8 param_1,ulonglong param_2)

{
    FUN_1403c59c0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1403c59c0(undefined8 *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;

    *param_1 = &PTR_LAB_140b66490;
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd] + 8))();
        param_1[0xd] = 0;
    }
    if (param_1[0x3b] != 0) {
        FUN_14018b900(param_1[0x3b],0);
    }
    if (param_1[0x37] != 0) {
        FUN_14018b900(param_1[0x37],0);
    }
    if (param_1[0x33] != 0) {
        FUN_14018b900(param_1[0x33],0);
    }
    if (param_1[0x2f] != 0) {
        FUN_14018b900(param_1[0x2f],0);
    }
    if (param_1[0x2b] != 0) {
        FUN_14018b900(param_1[0x2b],0);
    }
    if (param_1[0x27] != 0) {
        FUN_14018b900(param_1[0x27],0);
    }
    iVar3 = 4;
    puVar2 = param_1 + 0x27;
    do {
        plVar1 = puVar2 + -4;
        puVar2 = puVar2 + -4;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (param_1[10] != 0) {
        FUN_14018b900(param_1[10],0);
    }
    return;
}



undefined4 FUN_1403c5ab0(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)plVar1 == 0) {
        (**(code **)(*param_1 + 0xb0))(param_1,1);
        uVar2 = 0;
    }
    return uVar2;
}



int FUN_1403c5b40(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x38))();
    return (int)(longlong)
            ((float)(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * *(float *)(param_1 + 0x4e) +
             0.5) - iVar1;
}



undefined2 * FUN_1403c5bb0(longlong param_1,undefined2 *param_2,longlong param_3)

{
    int iVar1;

    iVar1 = 0;
    if (0x7ffffffe < param_3 - 1U) {
        iVar1 = -0x7ff8ffa9;
    }
    if (iVar1 < 0) {
        if (param_3 != 0) {
            *param_2 = 0;
        }
    }
    else {
        iVar1 = FUN_14001b680(param_2,param_3,param_3,*(undefined8 *)(param_1 + 0x50));
    }
    if (iVar1 < 0) {
        param_2 = (undefined2 *)0x0;
    }
    return param_2;
}



ulonglong FUN_1403c5c10(undefined8 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                        int param_5,longlong param_6)

{
    float fVar1;
    float fVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    float fVar8;

    fVar8 = (float)param_2;
    uVar5 = 0;
    lVar7 = (longlong)param_5 * 0x20;
    uVar6 = *(longlong *)(lVar7 + 0xa0 + param_3) - *(longlong *)(lVar7 + 0x98 + param_3) >> 2;
    if (uVar6 != 0) {
        do {
            if (uVar5 == uVar6 - 1) {
                return (ulonglong)*(uint *)(*(longlong *)(param_6 + 8) + uVar5 * 4);
            }
            lVar3 = *(longlong *)(lVar7 + 0x98 + param_3);
            iVar4 = (int)uVar5;
            if ((*(float *)(lVar3 + uVar5 * 4) <= fVar8) &&
                (fVar8 < *(float *)(lVar3 + (ulonglong)(iVar4 + 1) * 4))) {
                lVar7 = *(longlong *)(lVar7 + 0x98 + param_3);
                fVar1 = *(float *)(lVar7 + uVar5 * 4);
                fVar2 = *(float *)(*(longlong *)(param_6 + 8) + uVar5 * 4);
                return param_2 & 0xffffffff00000000 |
                       (ulonglong)
                               (uint)(((fVar8 - fVar1) / (*(float *)(lVar7 + (ulonglong)(iVar4 + 1) * 4) - fVar1)) *
                                      (*(float *)(*(longlong *)(param_6 + 8) + (ulonglong)(iVar4 + 1) * 4) - fVar2)
                                      + fVar2);
            }
            uVar5 = (ulonglong)(iVar4 + 1);
        } while (uVar5 < uVar6);
    }
    return 0x3f800000;
}



undefined (*) [16]
FUN_1403c5d20(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4,
undefined (*param_5) [16])

{
float *pfVar1;
float *pfVar2;
float *pfVar3;
longlong lVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined4 uVar7;
undefined4 *puVar8;
int iVar9;
ulonglong uVar10;
ulonglong uVar11;
float fVar12;

uVar10 = 0;
uVar11 = param_4[0x1c] - param_4[0x1b] >> 2;
if (uVar11 != 0) {
do {
iVar9 = (int)uVar10;
if (uVar10 == uVar11 - 1) {
puVar8 = (undefined4 *)(uVar10 * 0x10 + param_4[0x3b]);
uVar5 = puVar8[1];
uVar6 = puVar8[2];
uVar7 = puVar8[3];
*(undefined4 *)*param_5 = *puVar8;
*(undefined4 *)(*param_5 + 4) = uVar5;
*(undefined4 *)(*param_5 + 8) = uVar6;
*(undefined4 *)(*param_5 + 0xc) = uVar7;
return param_5;
}
if ((*(float *)(param_4[0x1b] + uVar10 * 4) <= param_3) &&
(param_3 < *(float *)(param_4[0x1b] + (ulonglong)(iVar9 + 1) * 4))) {
lVar4 = param_4[0x3b];
pfVar1 = (float *)(lVar4 + (ulonglong)(iVar9 + 1U) * 0x10);
pfVar2 = (float *)(lVar4 + uVar10 * 0x10);
fVar12 = *(float *)(param_4[0x1b] + uVar10 * 4);
fVar12 = (param_3 - fVar12) /
         (*(float *)(param_4[0x1b] + (ulonglong)(iVar9 + 1U) * 4) - fVar12);
pfVar3 = (float *)(lVar4 + uVar10 * 0x10);
*param_5 = CONCAT412(fVar12 * (pfVar1[3] - pfVar2[3]) + pfVar3[3],
                     CONCAT48(fVar12 * (pfVar1[2] - pfVar2[2]) + pfVar3[2],
                              CONCAT44(fVar12 * (pfVar1[1] - pfVar2[1]) + pfVar3[1],
                                       fVar12 * (*pfVar1 - *pfVar2) + *pfVar3)));
return param_5;
}
uVar10 = (ulonglong)(iVar9 + 1);
} while (uVar10 < uVar11);
}
puVar8 = (undefined4 *)(**(code **)(*param_4 + 0x58))();
uVar5 = puVar8[1];
uVar6 = puVar8[2];
uVar7 = puVar8[3];
*(undefined4 *)*param_5 = *puVar8;
*(undefined4 *)(*param_5 + 4) = uVar5;
*(undefined4 *)(*param_5 + 8) = uVar6;
*(undefined4 *)(*param_5 + 0xc) = uVar7;
return param_5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1403c5e50(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
float *param_5)

{
float *pfVar1;
longlong lVar2;
float fVar3;
ulonglong uVar4;
ulonglong uVar5;
ulonglong uVar6;
ulonglong uVar7;
float fVar8;
float extraout_XMM0_Da;
float extraout_XMM0_Da_00;
undefined auVar9 [16];
float fVar10;
float fVar11;

fVar8 = *(float *)(param_4 + 0x84);
fVar11 = *(float *)(param_4 + 0x88);
fVar3 = *(float *)(param_4 + 0x8c);
*param_5 = *(float *)(param_4 + 0x80);
param_5[1] = fVar8;
param_5[2] = fVar11;
param_5[3] = fVar3;
uVar4 = *(longlong *)(param_4 + 0xa0) - *(longlong *)(param_4 + 0x98) >> 2;
if (uVar4 != 0) {
uVar5 = 1;
uVar6 = 0;
do {
if (uVar6 == uVar4 - 1) {
LAB_1403c5f37:
fVar10 = param_3 - *(float *)(*(longlong *)(param_4 + 0x98) + uVar6 * 4);
pfVar1 = (float *)(*(longlong *)(param_4 + 0x138) + uVar6 * 0x10);
fVar8 = pfVar1[1];
fVar11 = pfVar1[2];
fVar3 = pfVar1[3];
auVar9 = divps(*(undefined (*) [16])(*(longlong *)(param_4 + 0x158) + uVar6 * 0x10),
               _DAT_140b7b2f0);
*param_5 = *param_5 + *pfVar1 * fVar10 + SUB164(auVar9,0) * fVar10 * fVar10;
param_5[1] = param_5[1] + fVar8 * fVar10 + SUB164(auVar9 >> 0x20,0) * fVar10 * fVar10;
param_5[2] = param_5[2] + fVar11 * fVar10 + SUB164(auVar9 >> 0x40,0) * fVar10 * fVar10;
param_5[3] = param_5[3] + fVar3 * fVar10 + SUB164(auVar9 >> 0x60,0) * fVar10 * fVar10;
break;
}
lVar2 = *(longlong *)(param_4 + 0x98);
fVar8 = *(float *)(lVar2 + uVar6 * 4);
if ((fVar8 <= param_3) && (param_3 < *(float *)(lVar2 + uVar5 * 4))) goto LAB_1403c5f37;
uVar7 = (ulonglong)((int)uVar6 + 1);
fVar8 = *(float *)(lVar2 + uVar5 * 4) - fVar8;
pfVar1 = (float *)(*(longlong *)(param_4 + 0x138) + uVar6 * 0x10);
fVar11 = pfVar1[1];
fVar3 = pfVar1[2];
fVar10 = pfVar1[3];
auVar9 = divps(*(undefined (*) [16])(*(longlong *)(param_4 + 0x158) + uVar6 * 0x10),
               _DAT_140b7b2f0);
*param_5 = *param_5 + *pfVar1 * fVar8 + SUB164(auVar9,0) * fVar8 * fVar8;
param_5[1] = param_5[1] + fVar11 * fVar8 + SUB164(auVar9 >> 0x20,0) * fVar8 * fVar8;
param_5[2] = param_5[2] + fVar3 * fVar8 + SUB164(auVar9 >> 0x40,0) * fVar8 * fVar8;
param_5[3] = param_5[3] + fVar10 * fVar8 + SUB164(auVar9 >> 0x60,0) * fVar8 * fVar8;
uVar4 = *(longlong *)(param_4 + 0xa0) - *(longlong *)(param_4 + 0x98) >> 2;
uVar5 = (ulonglong)((int)uVar5 + 1);
uVar6 = uVar7;
} while (uVar7 < uVar4);
}
fVar8 = *(float *)(param_4 + 0x2b0);
fVar11 = 0.0;
if (0.0 < fVar8) {
FUN_1408fc950();
param_5[2] = extraout_XMM0_Da * fVar8 + param_5[2];
FUN_1408fe3d0();
*param_5 = extraout_XMM0_Da_00 * *(float *)(param_4 + 0x2b0) + *param_5;
}
fVar8 = *(float *)(param_4 + 0x2b8);
if (fVar11 < fVar8) {
fVar11 = param_3 - *(float *)(param_4 + 0x2d0);
if (fVar8 < (float)((uint)(fVar11 * *(float *)(param_4 + 0x2c4)) & 0x7fffffff)) {
*(float *)(param_4 + 0x2d0) = param_3;
*(float *)(param_4 + 0x2c0) = *(float *)(param_4 + 0x2c0) * -1.0;
*(float *)(param_4 + 0x2c4) = *(float *)(param_4 + 0x2c4) * -1.0;
*(float *)(param_4 + 0x2c8) = *(float *)(param_4 + 0x2c8) * -1.0;
*(float *)(param_4 + 0x2cc) = *(float *)(param_4 + 0x2cc) * -1.0;
param_5[1] = param_5[1] + fVar8;
return param_5;
}
fVar8 = *(float *)(param_4 + 0x2c4);
fVar3 = *(float *)(param_4 + 0x2c8);
fVar10 = *(float *)(param_4 + 0x2cc);
*param_5 = *param_5 + *(float *)(param_4 + 0x2c0) * fVar11;
param_5[1] = param_5[1] + fVar8 * fVar11;
param_5[2] = param_5[2] + fVar3 * fVar11;
param_5[3] = param_5[3] + fVar10 * fVar11;
}
return param_5;
}



void FUN_1403c6080(longlong param_1)

{
*(undefined8 *)(param_1 + 0x18) = 0;
return;
}



// WARNING: Removing unreachable block (ram,0x0001403c62db)
// WARNING: Could not reconcile some variable overlaps

undefined8
        FUN_1403c6090(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4,int param_5,
        undefined4 param_6)

{
undefined4 uVar1;
undefined2 uVar2;
uint uVar3;
uint uVar4;
uint uVar5;
undefined4 uVar6;
undefined4 *puVar7;
undefined2 *puVar8;
longlong lVar9;
longlong *plVar10;
undefined8 uVar11;
undefined4 *puVar12;
undefined extraout_XMM0_Ba;
undefined extraout_XMM0_Ba_00;
undefined extraout_XMM0_Bb;
undefined extraout_XMM0_Bb_00;
undefined extraout_XMM0_Bc;
undefined extraout_XMM0_Bc_00;
undefined uVar13;
undefined extraout_XMM0_Bd;
undefined extraout_XMM0_Bd_00;
undefined extraout_XMM0_Be;
undefined extraout_XMM0_Be_00;
undefined uVar14;
undefined uVar15;
undefined extraout_XMM0_Bf;
undefined extraout_XMM0_Bf_00;
undefined uVar16;
undefined uVar17;
undefined extraout_XMM0_Bg;
undefined extraout_XMM0_Bg_00;
undefined uVar18;
undefined extraout_XMM0_Bh;
undefined extraout_XMM0_Bh_00;
undefined uVar19;
undefined uVar20;
undefined2 uVar26;
undefined auVar21 [12];
undefined auVar22 [16];
float fVar27;
float fVar28;
float fVar29;
float fVar30;
undefined4 local_d8 [2];
undefined local_d0 [8];
undefined local_c8 [16];
undefined8 local_b8;
undefined4 local_b0;
undefined4 local_ac;
undefined4 local_a8;
longlong *local_a0;
longlong *local_98;
undefined4 local_90;
undefined4 local_8c;
undefined4 local_88;
undefined4 local_84;
undefined4 local_80;
undefined local_78 [16];
undefined4 local_68 [2];
undefined8 local_60;
code *local_58;
undefined4 *local_50;
undefined auVar23 [16];
undefined auVar24 [16];
undefined auVar25 [16];

if (param_5 < 1) {
lVar9 = FUN_14018b280(0x2e0,8);
plVar10 = (longlong *)0x0;
uVar13 = extraout_XMM0_Ba;
uVar15 = extraout_XMM0_Bb;
uVar17 = extraout_XMM0_Bc;
uVar20 = extraout_XMM0_Bd;
uVar14 = extraout_XMM0_Be;
uVar16 = extraout_XMM0_Bf;
uVar18 = extraout_XMM0_Bg;
uVar19 = extraout_XMM0_Bh;
if (lVar9 != 0) {
plVar10 = (longlong *)FUN_1403c48e0(lVar9,param_4);
uVar13 = extraout_XMM0_Ba_00;
uVar15 = extraout_XMM0_Bb_00;
uVar17 = extraout_XMM0_Bc_00;
uVar20 = extraout_XMM0_Bd_00;
uVar14 = extraout_XMM0_Be_00;
uVar16 = extraout_XMM0_Bf_00;
uVar18 = extraout_XMM0_Bg_00;
uVar19 = extraout_XMM0_Bh_00;
}
uVar6 = 0xffffffff;
param_5 = 0xffffffff;
if (*(int *)(param_4 + 0xd4) != 0) {
uVar6 = *(undefined4 *)(param_4 + 0xd8);
}
if (*(int *)(param_4 + 200) != 0) {
param_5 = *(undefined4 *)(param_4 + 0xcc);
}
uVar1 = *(undefined4 *)(param_4 + 0xdc);
local_80 = *(undefined4 *)(param_4 + 0xe0);
local_88 = *(undefined4 *)(param_4 + 0xe4);
uVar3 = CONCAT13(uVar20,CONCAT12(uVar17,CONCAT11(uVar15,uVar13))) ^
        CONCAT13(uVar20,CONCAT12(uVar17,CONCAT11(uVar15,uVar13)));
uVar13 = (undefined)(uVar3 >> 0x10);
uVar4 = CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) ^
        CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)));
uVar15 = (undefined)uVar4;
uVar17 = (undefined)(uVar4 >> 8);
uVar11 = CONCAT44(uVar1,uVar1);
auVar21 = CONCAT48(uVar1,uVar11);
auVar25 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                                      SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                                       ((char)(uVar4 >> 0x18),
                                                                                                                                        CONCAT114((char)((uint)uVar1 >> 0x18),
                                                                                                                                                  SUB1614(CONCAT412(uVar1,auVar21),0)))
                                                                                                                                       >> 0x70,0),
                                                                                                                        CONCAT113((char)(uVar4 >> 0x10),
                                                                                                                                  SUB1613(CONCAT412(uVar1,auVar21),0))) >>
                                                                                                                                                                        0x68,0),CONCAT112((char)((uint)uVar1 >> 0x10),
                                                                                                                                                                                          auVar21)) >> 0x60,0),
                                                                                      CONCAT111(uVar17,SUB1211(auVar21,0))) >> 0x58,0),
                                                                              CONCAT110((char)((uint)uVar1 >> 8),
                                                                                        SUB1210(auVar21,0))) >> 0x50,0),
                                                             CONCAT19(uVar15,SUB129(auVar21,0))) >> 0x48,0),
                                            CONCAT18((char)uVar1,uVar11)) >> 0x40,0),
                            (char)(uVar3 >> 0x18)),((uint7)uVar11 >> 0x18) << 0x30);
auVar24 = CONCAT115(CONCAT101(SUB1610(auVar25 >> 0x30,0),uVar13),((uint5)uVar11 >> 0x10) << 0x20
);
auVar23 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar24 >> 0x20,0),(uVar3 >> 8) << 0x18) >> 0x18,0
),((uint3)uVar1 >> 8) << 0x10);
auVar22 = CONCAT142(SUB1614(auVar23 >> 0x10,0),(ushort)uVar1 & 0xff | (ushort)(byte)uVar3 << 8);
uVar26 = SUB162(auVar24 >> 0x20,0);
uVar20 = (undefined)(((ulonglong)(ushort)(uVar3 >> 0x10) << 0x30) >> 0x38);
local_8c = *(undefined4 *)(param_4 + 0xd0);
local_d8[0] = DAT_140c636a8;
uVar2 = SUB162(auVar23 >> 0x10,0);
uVar5 = CONCAT13(uVar20,CONCAT12(uVar13,uVar2)) ^ CONCAT13(uVar20,CONCAT12(uVar13,uVar2));
local_c8 = ZEXT816(CONCAT17((char)(uVar5 >> 0x18),
                            CONCAT16((char)(uVar5 >> 0x10),
                                     CONCAT15((char)(uVar5 >> 8),
                                              CONCAT14((char)uVar5,
                                                       CONCAT13(uVar17,CONCAT12(uVar15,uVar26))
                                                       ^ CONCAT13(uVar17,CONCAT12(uVar15,uVar26)
                                                       ))))));
fVar27 = (float)CONCAT13(uVar17,CONCAT12(uVar15,uVar26)) * 0.003921569;
fVar28 = (float)CONCAT13(uVar20,CONCAT12(uVar13,uVar2)) * 0.003921569;
fVar29 = (float)(SUB164(auVar22,0) & 0xffff | uVar3 << 0x10) * 0.003921569;
fVar30 = (float)SUB164(CONCAT214((short)(uVar4 >> 0x10),
                                 CONCAT212(SUB162(auVar25 >> 0x30,0),SUB1612(auVar22,0))) >>
                                                                                          0x60,0) * 0.003921569;
local_b8 = 0;
FUN_14001c1b0(local_d0,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
local_78 = CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(fVar28,fVar27)));
local_b0 = 0;
local_a8 = 0;
local_90 = param_5;
local_a0 = (longlong *)0x0;
local_ac = 0;
local_98 = plVar10;
local_84 = uVar6;
if (plVar10 != (longlong *)0x0) {
(**(code **)*plVar10)();
}
if (*(int *)(param_4 + 0x4c) == 4) {
uVar11 = FUN_1403f8ce0(param_1,local_d8,param_6);
}
else {
uVar11 = FUN_140475370(param_2,*(undefined4 *)(param_4 + 0x50),local_d8,param_6,uVar6);
}
(**(code **)(*plVar10 + 8))(plVar10);
if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_d8)
;
}
if (local_a0 != (longlong *)0x0) {
(**(code **)(*local_a0 + 8))();
local_a0 = (longlong *)0x0;
}
if (local_98 != (longlong *)0x0) {
(**(code **)(*local_98 + 8))();
local_98 = (longlong *)0x0;
}
if (local_c8._0_8_ != 0) {
FUN_14018b900(local_c8._0_8_,0);
}
}
else {
puVar7 = (undefined4 *)FUN_14018b280(0x48);
local_50 = (undefined4 *)0x0;
puVar12 = local_50;
if (puVar7 != (undefined4 *)0x0) {
*(undefined8 *)(puVar7 + 4) = 0;
*(undefined8 *)(puVar7 + 6) = 0;
*(undefined8 *)(puVar7 + 10) = 0;
*(undefined8 *)(puVar7 + 0xc) = 0;
*puVar7 = 0x544e5645;
puVar7[0x11] = 0;
puVar12 = puVar7;
}
puVar7 = (undefined4 *)FUN_14018b280(0x140,0);
if (puVar7 != (undefined4 *)0x0) {
*(undefined8 *)(puVar7 + 4) = 0;
*(undefined8 *)(puVar7 + 6) = 0;
*(undefined8 *)(puVar7 + 8) = 0;
puVar8 = (undefined2 *)FUN_14018b280(0x10);
*(undefined2 **)(puVar7 + 4) = puVar8;
*(undefined2 **)(puVar7 + 6) = puVar8;
*(undefined2 **)(puVar7 + 8) = puVar8 + 8;
if (puVar8 != (undefined2 *)0x0) {
*puVar8 = 0;
}
*(undefined8 *)(puVar7 + 0x30) = 0;
*(undefined8 *)(puVar7 + 0x32) = 0;
*(undefined8 *)(puVar7 + 0x34) = 0;
local_50 = puVar7;
}
*local_50 = *(undefined4 *)(param_2 + 8);
if (param_3 != local_50 + 2) {
FUN_14001c480(local_50 + 2,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
}
FUN_1403c63c0(local_50 + 10,param_4);
*(undefined4 **)(local_50 + 0x4e) = puVar12;
local_68[0] = 1;
local_60 = FUN_14001c280(param_1);
local_58 = FUN_1403c65b0;
FUN_140195960(puVar12,param_5,local_68,4);
uVar11 = 0;
}
return uVar11;
}



longlong FUN_1403c63c0(longlong param_1,longlong param_2)

{
FUN_1403c6450();
*(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
*(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
*(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
*(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
*(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
*(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
*(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
*(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
*(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
return param_1;
}



longlong FUN_1403c6450(longlong param_1,longlong param_2)

{
longlong lVar1;
undefined4 *puVar2;
undefined2 *puVar3;
longlong lVar4;

lVar4 = param_2 - param_1;
lVar1 = 0x10;
puVar3 = (undefined2 *)(param_1 + 2);
do {
puVar3[-1] = *(undefined2 *)(lVar4 + -2 + (longlong)puVar3);
*puVar3 = *(undefined2 *)(lVar4 + -4 + (longlong)(puVar3 + 2));
lVar1 = lVar1 + -1;
puVar3 = puVar3 + 2;
} while (lVar1 != 0);
*(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
*(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
*(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
*(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
lVar1 = 0xc;
*(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
puVar2 = (undefined4 *)(param_1 + 0x5c);
do {
*puVar2 = *(undefined4 *)((longlong)puVar2 + lVar4);
lVar1 = lVar1 + -1;
puVar2 = puVar2 + 1;
} while (lVar1 != 0);
FUN_1403d3d00(param_1 + 0x90,param_2 + 0x90);
*(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
*(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
*(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
*(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
*(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
*(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
*(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
*(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
*(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
*(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
*(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
*(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
*(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
*(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001403c66c8)
// WARNING: Removing unreachable block (ram,0x0001403c67e0)
// WARNING: Could not reconcile some variable overlaps

void FUN_1403c65b0(longlong param_1,undefined4 *param_2)

{
undefined4 *puVar1;
longlong lVar2;
longlong lVar3;
longlong *plVar4;
longlong *plVar5;
undefined4 uVar6;
undefined4 uVar7;
undefined4 uVar8;
undefined4 uVar9;
undefined4 local_108 [2];
undefined local_100 [8];
undefined local_f8 [16];
undefined8 local_e8;
undefined4 local_e0;
undefined4 local_dc;
undefined4 local_d8;
longlong *local_d0;
longlong *local_c8;
undefined4 local_c0;
undefined4 local_bc;
undefined4 local_b8;
undefined4 local_b4;
undefined4 local_b0;
undefined local_a8 [16];
undefined4 local_98 [2];
undefined local_90 [8];
undefined local_88 [16];
undefined8 local_78;
undefined4 local_70;
undefined4 local_6c;
undefined4 local_68;
longlong *local_60;
longlong *local_58;
undefined4 local_50;
undefined4 local_4c;
undefined4 local_48;
undefined4 local_44;
undefined4 local_40;
undefined local_38 [16];

lVar3 = FUN_14018b280(0x2e0,0);
plVar4 = (longlong *)0x0;
if (lVar3 != 0) {
plVar4 = (longlong *)FUN_1403c48e0(lVar3,param_2 + 10);
}
if (param_2[0x1d] == 4) {
if (param_2[0x3c] == 0) {
local_50 = 0xffffffff;
}
else {
local_50 = param_2[0x3d];
}
uVar6 = 0x3f800000;
uVar7 = 0x3f800000;
uVar8 = 0x3f800000;
uVar9 = 0x3f800000;
local_88 = ZEXT816(0);
local_4c = param_2[0x43];
local_98[0] = DAT_140c636a8;
local_78 = 0;
FUN_14001c1b0(local_90,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
local_38 = CONCAT412(uVar9,CONCAT48(uVar8,CONCAT44(uVar7,uVar6)));
local_60 = (longlong *)0x0;
local_70 = 0;
local_68 = 0;
local_6c = 0;
local_48 = 0;
local_44 = 0xffffffff;
local_40 = 0;
local_58 = plVar4;
if (plVar4 != (longlong *)0x0) {
(**(code **)*plVar4)();
}
local_f8 = ZEXT816(0);
local_108[0] = local_98[0];
local_e8 = 0;
FUN_14001c1b0(local_100,local_88._0_8_,local_88._8_8_);
local_e0 = local_70;
local_dc = local_6c;
local_c0 = local_50;
local_d8 = local_68;
local_a8 = local_38;
local_bc = local_4c;
local_d0 = local_60;
local_b8 = local_48;
local_c8 = local_58;
local_b4 = local_44;
local_b0 = local_40;
if (local_60 != (longlong *)0x0) {
(**(code **)*local_60)(local_60);
}
if (local_c8 != (longlong *)0x0) {
(**(code **)*local_c8)();
}
(**(code **)(*local_c8 + 0x30))();
(**(code **)(*local_c8 + 0x60))();
(**(code **)(*DAT_140c65670 + 0x248))();
lVar3 = *(longlong *)(param_1 + 0x7da0);
plVar5 = (longlong *)FUN_14018b280(0x80,0);
if (plVar5 + 2 != (longlong *)0x0) {
FUN_140474e10(plVar5 + 2,local_108);
}
lVar2 = DAT_140c65898;
*plVar5 = lVar3;
plVar5[1] = *(longlong *)(lVar3 + 8);
**(longlong ***)(lVar3 + 8) = plVar5;
*(longlong **)(lVar3 + 8) = plVar5;
if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x7340), lVar3 != 0)) {
FUN_1400ea3e0(lVar3,"MessageFinished",&DAT_1409eb834,local_108);
}
if (local_d0 != (longlong *)0x0) {
(**(code **)(*local_d0 + 8))();
local_d0 = (longlong *)0x0;
}
if (local_c8 != (longlong *)0x0) {
(**(code **)(*local_c8 + 8))();
local_c8 = (longlong *)0x0;
}
if (local_f8._0_8_ != 0) {
FUN_14018b900(local_f8._0_8_,0);
}
if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_98)
;
}
if (local_60 != (longlong *)0x0) {
(**(code **)(*local_60 + 8))();
local_60 = (longlong *)0x0;
}
if (local_58 != (longlong *)0x0) {
(**(code **)(*local_58 + 8))();
local_58 = (longlong *)0x0;
}
local_f8._0_8_ = local_88._0_8_;
}
else {
lVar3 = FUN_1403d90d0(param_1,*param_2);
if (lVar3 == 0) goto LAB_1403c69cd;
if (param_2[0x3c] == 0) {
local_c0 = 0xffffffff;
}
else {
local_c0 = param_2[0x3d];
}
uVar6 = 0x3f800000;
uVar7 = 0x3f800000;
uVar8 = 0x3f800000;
uVar9 = 0x3f800000;
local_f8 = ZEXT816(0);
local_bc = param_2[0x43];
local_108[0] = DAT_140c636a8;
local_e8 = 0;
FUN_14001c1b0(local_100,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
local_a8 = CONCAT412(uVar9,CONCAT48(uVar8,CONCAT44(uVar7,uVar6)));
local_d0 = (longlong *)0x0;
local_e0 = 0;
local_d8 = 0;
local_dc = 0;
local_b8 = 0;
local_b4 = 0xffffffff;
local_b0 = 0;
local_c8 = plVar4;
if (plVar4 != (longlong *)0x0) {
(**(code **)*plVar4)();
}
FUN_140475370(lVar3,param_2[0x1e],local_108,0);
if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_108
);
}
if (local_d0 != (longlong *)0x0) {
(**(code **)(*local_d0 + 8))();
local_d0 = (longlong *)0x0;
}
if (local_c8 != (longlong *)0x0) {
(**(code **)(*local_c8 + 8))();
local_c8 = (longlong *)0x0;
}
}
if (local_f8._0_8_ != 0) {
FUN_14018b900(local_f8._0_8_,0);
}
LAB_1403c69cd:
(**(code **)(*plVar4 + 8))(plVar4);
puVar1 = *(undefined4 **)(param_2 + 0x4e);
if (puVar1 != (undefined4 *)0x0) {
FUN_140195d70(puVar1);
*puVar1 = 0;
if (*(undefined8 **)(puVar1 + 4) != (undefined8 *)0x0) {
**(undefined8 **)(puVar1 + 4) = *(undefined8 *)(puVar1 + 6);
}
if (*(undefined8 **)(puVar1 + 6) != (undefined8 *)0x0) {
**(undefined8 **)(puVar1 + 6) = *(undefined8 *)(puVar1 + 4);
}
*(undefined8 *)(puVar1 + 4) = 0;
*(undefined8 *)(puVar1 + 6) = 0;
FUN_14018b900(puVar1,0);
}
if (*(longlong *)(param_2 + 0x30) != 0) {
FUN_14018b900(*(longlong *)(param_2 + 0x30),0);
}
if (*(longlong *)(param_2 + 4) != 0) {
FUN_14018b900(*(longlong *)(param_2 + 4),0);
}
FUN_14018b900(param_2,0);
return;
}



void FUN_1403c6d80(longlong param_1,undefined8 param_2)

{
uint uVar1;
undefined2 *puVar2;
int iVar3;
int iVar4;
longlong lVar5;
longlong lVar6;
undefined *puVar7;
undefined2 *puVar8;
undefined8 local_res8;
undefined **local_48;
longlong local_40;
LPVOID local_38;
undefined **local_28;
longlong local_20;
LPVOID local_18;

iVar4 = FUN_140029820(param_1,param_2,*(undefined4 *)(param_1 + 0x1678));
if (iVar4 == -1) {
local_40 = 0;
local_48 = &PTR_LAB_140b5e648;
local_38 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_48);
local_res8 = 0x141df0950;
puVar7 = &DAT_140c8a6b4;
}
else {
if (iVar4 != -2) {
if (iVar4 == -3) {
puVar2 = *(undefined2 **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x10);
puVar8 = &DAT_140b7b704;
if (puVar2 != (undefined2 *)0x0) {
puVar8 = puVar2;
}
FUN_1400035b0(0x16,0,0,puVar8,*(undefined4 *)(param_1 + 0x1678));
return;
}
lVar5 = FUN_14024dfc0();
if (lVar5 == 0) {
local_48 = &PTR_LAB_140b5e648;
local_40 = lVar5;
local_38 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_48);
local_res8 = 0x141df0a58;
puVar7 = &DAT_140c8a6b0;
LAB_1403c6fe6:
local_28 = local_48;
local_20 = local_40;
local_18 = local_38;
iVar4 = FUN_1401971e0(puVar7,0x16,&local_res8,&local_28);
local_48 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_38);
if (iVar4 == 0) {
return;
}
DebugBreak();
return;
}
if ((DAT_140dc2288 & 1) == 0) {
DAT_140dc2288 = DAT_140dc2288 | 1;
lVar6 = FUN_140200220();
if (lVar6 == 0) {
DAT_140dc228c = 1;
}
else {
DAT_140dc228c = *(int *)(lVar6 + 4);
}
}
iVar3 = DAT_140dc228c;
*(undefined4 *)(param_1 + 0x167c) = *(undefined4 *)(lVar5 + 4);
if (iVar4 == iVar3) {
*(undefined4 *)(param_1 + 0x1684) = 0;
*(undefined4 *)(param_1 + 0x1680) = 0xffffffff;
}
else {
local_40 = FUN_14024dfc0(iVar4 + 1);
if (local_40 == 0) {
local_48 = &PTR_LAB_140b5e648;
local_38 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_48);
local_res8 = 0x141df09d0;
puVar7 = &DAT_140c8a6a4;
goto LAB_1403c6fe6;
}
*(int *)(param_1 + 0x1680) = *(int *)(local_40 + 4) - *(int *)(lVar5 + 4);
uVar1 = *(uint *)(lVar5 + 4);
if (uVar1 < *(uint *)(local_40 + 4)) {
*(float *)(param_1 + 0x1684) =
(float)(ulonglong)(*(int *)(param_1 + 0x1678) - uVar1) /
(float)(ulonglong)(*(uint *)(local_40 + 4) - uVar1);
}
}
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"UI_XPChanged",&DAT_140b00d38,
*(undefined4 *)(param_1 + 0x1678),*(undefined4 *)(lVar5 + 4),
*(undefined4 *)(param_1 + 0x1680),*(undefined4 *)(param_1 + 0x1688));
return;
}
local_40 = 0;
local_48 = &PTR_LAB_140b5e648;
local_38 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_48);
local_res8 = 0x141df0a18;
puVar7 = &DAT_140c8a6ac;
}
local_28 = local_48;
local_20 = local_40;
local_18 = local_38;
iVar4 = FUN_1401971e0(puVar7,0x16,&local_res8,&local_28);
local_48 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_38);
if (iVar4 != 0) {
DebugBreak();
}
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403c76d0(longlong *param_1)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    uint uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    short **ppsVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong lVar13;
    undefined4 *puVar14;
    longlong local_res8;
    undefined8 in_stack_fffffffffffffe98;
    undefined4 uVar15;
    undefined local_128 [16];
    undefined2 *local_118;
    longlong local_110;
    undefined local_108 [8];
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    longlong local_48;

    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
    puVar5 = (undefined4 *)param_1[6];
    lVar7 = FUN_1401f4b60(puVar5[4]);
    if ((((lVar7 != 0) && (*(int *)(param_1 + 5) == 0)) &&
         ((param_1[2] == 0 ||
           ((uVar4 = *(uint *)(param_1[2] + 8), uVar4 == 0 ||
                                                ((uint)(DAT_140c636a8 - *(int *)(param_1 + 3)) <= uVar4)))))) && (DAT_140c65898 != 0)) {
        plVar12 = (longlong *)0x0;
        if ((*(int *)(lVar7 + 8) != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1404dde90(local_108);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_f8 != local_f0) {
                    *local_f8 = 0;
                    local_f0 = local_f8;
                }
            }
            else {
                sVar3 = *psVar8;
                plVar10 = plVar12;
                while (sVar3 != 0) {
                    plVar10 = (longlong *)((longlong)plVar10 + 1);
                    sVar3 = psVar8[(longlong)plVar10];
                }
                FUN_14001c480(local_100,psVar8,psVar8 + (longlong)plVar10);
            }
            ppsVar9 = (short **)FUN_14034c700(&local_res8,&DAT_140aebd04,*(undefined8 *)(puVar5 + 2));
            psVar8 = *ppsVar9;
            sVar3 = *psVar8;
            plVar10 = plVar12;
            while (sVar3 != 0) {
                plVar10 = (longlong *)((longlong)plVar10 + 1);
                sVar3 = psVar8[(longlong)plVar10];
            }
            lVar13 = (longlong)plVar10 * 2 >> 1;
            uVar1 = lVar13 + 1;
            plVar10 = plVar12;
            if (uVar1 < 0x7fffffffffffffff) {
                plVar10 = (longlong *)FUN_14018b280(uVar1 * 2,0);
            }
            lVar13 = lVar13 * 2;
            FUN_1407db590(plVar10,psVar8,lVar13);
            puVar2 = (undefined2 *)(lVar13 + (longlong)plVar10);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            if (local_res8 != 0) {
                (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
            }
            lVar13 = FUN_14018b280(0x60);
            plVar11 = plVar12;
            if (lVar13 != 0) {
                plVar11 = (longlong *)FUN_1404ddb40(lVar13,plVar10);
            }
            local_128 = ZEXT816(local_128._0_8_);
            local_118 = (undefined2 *)0x0;
            local_110 = 0;
            do {
                lVar13 = (longlong)plVar12 + 1;
                plVar12 = (longlong *)((longlong)plVar12 + 1);
            } while (L"combatbuff"[lVar13] != L'\0');
            lVar13 = (longlong)plVar12 * 2 >> 1;
            uVar1 = lVar13 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar6 = uVar1 * 2;
                local_118 = (undefined2 *)FUN_14018b280(lVar6,0);
                local_128 = CONCAT88(local_118,local_128._0_8_);
                local_110 = lVar6 + (longlong)local_118;
            }
            lVar6 = (longlong)local_118;
            lVar13 = lVar13 * 2;
            FUN_1407db590(local_118,L"combatbuff",lVar13);
            local_118 = (undefined2 *)(lVar6 + lVar13);
            if (local_118 != (undefined2 *)0x0) {
                *local_118 = 0;
            }
            FUN_1400b7480(local_108,plVar11);
            (**(code **)(*plVar11 + 0x48))(plVar11,local_128);
            if (local_128._8_8_ != 0) {
                FUN_14018b900(local_128._8_8_,0);
            }
            lVar13 = FUN_1400b7660(local_108);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatMomentum",&DAT_1409eb6ec,*puVar5,
                          CONCAT44(uVar15,puVar5[2]),*(undefined8 *)(lVar13 + 8));
            if (plVar10 != (longlong *)0x0) {
                FUN_14018b900(plVar10,0);
            }
            if (local_48 != 0) {
                FUN_14018b900(local_48,0);
            }
            FUN_1400b7390(local_108);
        }
        if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
            puVar14 = (undefined4 *)(lVar7 + 0x10);
            lVar7 = 2;
            do {
                lVar13 = FUN_140248f00(*puVar14);
                if (lVar13 != 0) {
                    local_128 = ZEXT816(0);
                    FUN_1405787d0(local_128,0,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8));
                }
                puVar14 = puVar14 + 1;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
        }
    }
    FUN_14018b900(puVar5,0);
    if (*param_1 != 0) {
        FUN_1403d6480(*param_1,param_1);
    }
    FUN_14018b900(param_1,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403c7ac0(longlong param_1,undefined8 *param_2)

{
longlong lVar1;
short sVar2;
undefined *puVar3;
undefined *puVar4;
int iVar5;
undefined8 *puVar6;
longlong lVar7;
undefined *puVar8;
int *piVar9;
undefined2 *puVar10;
short *psVar11;
short **ppsVar12;
longlong *plVar13;
longlong *plVar14;
longlong *plVar15;
int iVar16;
uint uVar17;
ulonglong uVar18;
ulonglong uVar19;
undefined8 *puVar20;
undefined8 local_res10;
undefined *local_res18;
undefined *local_res20;
ulonglong in_stack_fffffffffffffd98;
undefined local_228 [8];
longlong lStack544;
undefined2 *local_218;
longlong local_210;
undefined **local_208;
undefined local_200 [8];
undefined2 *local_1f8;
undefined2 *local_1f0;
undefined local_148 [16];
undefined2 *local_138;
undefined **local_128;
undefined local_120 [8];
undefined2 *local_118;
undefined2 *local_110;
undefined local_68 [16];
undefined2 *local_58;

if (5 < *(int *)param_2 - 0x17U) {
return;
}
puVar20 = (undefined8 *)0x0;
uVar19 = in_stack_fffffffffffffd98 & 0xffffffff00000000;
FUN_140437a10();
uVar17 = DAT_140dc2290;
if ((DAT_140dc2290 & 1) == 0) {
uVar17 = DAT_140dc2290 | 1;
iVar16 = 3;
puVar6 = &DAT_140dc22a8;
DAT_140dc2290 = uVar17;
do {
iVar16 = iVar16 + -1;
puVar6[-1] = 0;
*puVar6 = 0;
puVar6 = puVar6 + 2;
} while (-1 < iVar16);
}
if ((uVar17 & 2) == 0) {
DAT_140dc2290 = uVar17 | 2;
DAT_140dc22e8 = (undefined *)FUN_14018b280(0x28);
_DAT_140dc22f0 = 0;
*DAT_140dc22e8 = 0;
*(undefined8 *)(DAT_140dc22e8 + 8) = 0;
*(undefined **)(DAT_140dc22e8 + 0x10) = DAT_140dc22e8;
*(undefined **)(DAT_140dc22e8 + 0x18) = DAT_140dc22e8;
FUN_1407dd89c();
}
puVar6 = puVar20;
if (_DAT_140c8a6a0 == 0) {
do {
if (DAT_140c63838 == (code *)0x0) {
if ((_DAT_140c64b6c != 0) || (iVar16 = FUN_1401f4900(), iVar16 < 0)) goto LAB_1403c7c8b;
uVar17 = (**(code **)(*DAT_140c64a90 + 0x28))();
}
else {
uVar17 = (*DAT_140c63838)();
}
if (uVar17 <= (uint)puVar6) goto LAB_1403c7c8b;
lVar7 = FUN_1401f4bc0();
if ((lVar7 != 0) && (*(int *)(lVar7 + 4) - 4U < 4)) {
_DAT_140c8a6a0 = 1;
*(undefined4 *)(&DAT_140dc22a0 + (ulonglong)(*(int *)(lVar7 + 4) - 4) * 2) =
*(undefined4 *)(lVar7 + 8);
*(undefined4 *)((longlong)&DAT_140dc22a0 + (ulonglong)(*(int *)(lVar7 + 4) - 4) * 0x10 + 4)
= *(undefined4 *)(lVar7 + 0xc);
*(undefined4 *)(&DAT_140dc22a8 + (ulonglong)(*(int *)(lVar7 + 4) - 4) * 2) =
*(undefined4 *)(lVar7 + 0x10);
*(undefined4 *)((longlong)&DAT_140dc22a8 + (ulonglong)(*(int *)(lVar7 + 4) - 4) * 0x10 + 4)
= *(undefined4 *)(lVar7 + 0x14);
}
puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 + 1);
} while( true );
}
LAB_1403c7df4:
lVar7 = FUN_1401f4b60();
if (lVar7 == 0) {
return;
}
iVar16 = *(int *)param_2;
local_res18 = (undefined *)0x0;
if (iVar16 == 0x17) {
LAB_1403c8493:
_local_228 = CONCAT412(0x14,CONCAT48(*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),
                                     local_228));
_local_228 = CONCAT88(lStack544,0x140b6f700);
iVar5 = -1;
if (*(int *)(param_2 + 1) != -1) {
iVar5 = *(int *)(param_2 + 1);
}
local_218 = (undefined2 *)CONCAT44(iVar5,iVar16);
iVar16 = FUN_14060af20(local_228);
if (iVar16 != 0) {
lVar7 = FUN_1403d90d0(DAT_140c65898,(undefined4)lStack544);
if ((lVar7 != 0) && (lVar7 = FUN_14047dca0(lVar7), lVar7 != 0)) {
FUN_14060afe0(local_228,(undefined4)lStack544);
}
}
puVar6 = (undefined8 *)FUN_14018b280(0x18);
if (puVar6 != (undefined8 *)0x0) {
*puVar6 = *param_2;
puVar6[1] = param_2[1];
puVar6[2] = param_2[2];
puVar20 = puVar6;
}
puVar6 = (undefined8 *)FUN_14018b280(0x38);
if (puVar6 != (undefined8 *)0x0) {
*puVar6 = 0;
puVar6[2] = 0;
*(undefined4 *)(puVar6 + 3) = 0;
*(undefined4 *)(puVar6 + 5) = 0;
puVar6[4] = FUN_1403c76d0;
puVar6[6] = puVar20;
lVar7 = FUN_140225140(3);
if (lVar7 != 0) {
puVar6[2] = lVar7;
}
}
FUN_1404cfa80();
}
else {
if (iVar16 == 0x18) {
local_res10 = CONCAT44(local_res10._4_4_,0x18);
piVar9 = (int *)FUN_1403d2710();
local_res18 = *(undefined **)(lVar7 + 0x10);
iVar5 = *(int *)(&DAT_140dc22a0 + ((longlong)*piVar9 + -4) * 2);
iVar16 = DAT_140dc22d4;
LAB_1403c7ee6:
plVar15 = (longlong *)0x0;
if (iVar5 != 0) {
FUN_1400b6f30(&local_208);
local_208 = &PTR_FUN_140b69230;
local_138 = (undefined2 *)0x0;
local_148 = ZEXT816(0);
puVar10 = (undefined2 *)FUN_14018b280(0x10);
local_148 = CONCAT88(puVar10,puVar10);
local_138 = puVar10 + 8;
if (puVar10 != (undefined2 *)0x0) {
*puVar10 = 0;
}
psVar11 = (short *)FUN_14034bdd0(local_138,iVar5);
if (psVar11 == (short *)0x0) {
if (local_1f8 != local_1f0) {
*local_1f8 = 0;
local_1f0 = local_1f8;
}
}
else {
sVar2 = *psVar11;
plVar13 = plVar15;
while (sVar2 != 0) {
plVar13 = (longlong *)((longlong)plVar13 + 1);
sVar2 = psVar11[(longlong)plVar13];
}
FUN_14001c480(local_200,psVar11,psVar11 + (longlong)plVar13);
}
ppsVar12 = (short **)FUN_14034c700(&local_res10,&DAT_140aeb814,param_2[1]);
psVar11 = *ppsVar12;
sVar2 = *psVar11;
plVar13 = plVar15;
while (sVar2 != 0) {
plVar13 = (longlong *)((longlong)plVar13 + 1);
sVar2 = psVar11[(longlong)plVar13];
}
lVar7 = (longlong)plVar13 * 2 >> 1;
uVar18 = lVar7 + 1;
plVar13 = plVar15;
if (uVar18 < 0x7fffffffffffffff) {
plVar13 = (longlong *)FUN_14018b280(uVar18 * 2,0);
}
lVar7 = lVar7 * 2;
FUN_1407db590(plVar13,psVar11,lVar7);
puVar10 = (undefined2 *)((longlong)plVar13 + lVar7);
if (puVar10 != (undefined2 *)0x0) {
*puVar10 = 0;
}
if (local_res10 != 0) {
(**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
}
lVar7 = FUN_14018b280(0x60);
plVar14 = plVar15;
if (lVar7 != 0) {
plVar14 = (longlong *)FUN_1404ddb40(lVar7,plVar13);
}
_local_228 = ZEXT816(local_228);
local_218 = (undefined2 *)0x0;
local_210 = 0;
do {
lVar7 = (longlong)plVar15 + 1;
plVar15 = (longlong *)((longlong)plVar15 + 1);
} while (L"combatbuff"[lVar7] != L'\0');
lVar7 = (longlong)plVar15 * 2 >> 1;
uVar18 = lVar7 + 1;
if (uVar18 < 0x7fffffffffffffff) {
lVar1 = uVar18 * 2;
local_218 = (undefined2 *)FUN_14018b280(lVar1,0);
_local_228 = CONCAT88(local_218,local_228);
local_210 = (longlong)local_218 + lVar1;
}
lVar1 = (longlong)local_218;
lVar7 = lVar7 * 2;
FUN_1407db590(local_218,L"combatbuff",lVar7);
local_218 = (undefined2 *)(lVar1 + lVar7);
if (local_218 != (undefined2 *)0x0) {
*local_218 = 0;
}
FUN_1400b7480(&local_208,plVar14);
(**(code **)(*plVar14 + 0x48))(plVar14,local_228);
if (lStack544 != 0) {
FUN_14018b900(lStack544,0);
}
lVar7 = FUN_1400b7660(&local_208);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"CombatMomentum",&DAT_1409eb6ec,
*(int *)param_2,
uVar19 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_2 + 1),
*(undefined8 *)(lVar7 + 8));
if (plVar13 != (longlong *)0x0) {
FUN_14018b900(plVar13,0);
}
if (local_148._0_8_ != 0) {
FUN_14018b900(local_148._0_8_,0);
}
FUN_1400b7390(&local_208);
}
if (iVar16 != 0) {
FUN_1400b6f30(&local_128);
local_128 = &PTR_FUN_140b69230;
local_58 = (undefined2 *)0x0;
local_68 = ZEXT816(0);
puVar10 = (undefined2 *)FUN_14018b280(0x10);
local_68 = CONCAT88(puVar10,puVar10);
local_58 = puVar10 + 8;
if (puVar10 != (undefined2 *)0x0) {
*puVar10 = 0;
}
psVar11 = (short *)FUN_14034bdd0(local_58,iVar16);
plVar15 = (longlong *)0x0;
if (psVar11 == (short *)0x0) {
if (local_118 != local_110) {
*local_118 = 0;
local_110 = local_118;
}
}
else {
sVar2 = *psVar11;
plVar13 = plVar15;
while (sVar2 != 0) {
plVar13 = (longlong *)((longlong)plVar13 + 1);
sVar2 = psVar11[(longlong)plVar13];
}
FUN_14001c480(local_120,psVar11,psVar11 + (longlong)plVar13);
}
ppsVar12 = (short **)FUN_14034c700(&local_res10,&DAT_140aebef4,param_2[1]);
psVar11 = *ppsVar12;
sVar2 = *psVar11;
plVar13 = plVar15;
while (sVar2 != 0) {
plVar13 = (longlong *)((longlong)plVar13 + 1);
sVar2 = psVar11[(longlong)plVar13];
}
lVar7 = (longlong)plVar13 * 2 >> 1;
uVar19 = lVar7 + 1;
plVar13 = plVar15;
if (uVar19 < 0x7fffffffffffffff) {
plVar13 = (longlong *)FUN_14018b280(uVar19 * 2,0);
}
lVar7 = lVar7 * 2;
FUN_1407db590(plVar13,psVar11,lVar7);
puVar10 = (undefined2 *)((longlong)plVar13 + lVar7);
if (puVar10 != (undefined2 *)0x0) {
*puVar10 = 0;
}
if (local_res10 != 0) {
(**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
}
lVar7 = FUN_14018b280(0x60);
plVar14 = plVar15;
if (lVar7 != 0) {
plVar14 = (longlong *)FUN_1404ddb40(lVar7,plVar13);
}
_local_228 = ZEXT816(local_228);
local_218 = (undefined2 *)0x0;
local_210 = 0;
do {
lVar7 = (longlong)plVar15 + 1;
plVar15 = (longlong *)((longlong)plVar15 + 1);
} while (L"combatbuff"[lVar7] != L'\0');
lVar7 = (longlong)plVar15 * 2 >> 1;
uVar19 = lVar7 + 1;
if (uVar19 < 0x7fffffffffffffff) {
lVar1 = uVar19 * 2;
local_218 = (undefined2 *)FUN_14018b280(lVar1,0);
_local_228 = CONCAT88(local_218,local_228);
local_210 = (longlong)local_218 + lVar1;
}
lVar1 = (longlong)local_218;
lVar7 = lVar7 * 2;
FUN_1407db590(local_218,L"combatbuff",lVar7);
local_218 = (undefined2 *)(lVar1 + lVar7);
if (local_218 != (undefined2 *)0x0) {
*local_218 = 0;
}
FUN_1400b7480(&local_128,plVar14);
(**(code **)(*plVar14 + 0x48))(plVar14,local_228);
if (lStack544 != 0) {
FUN_14018b900(lStack544,0);
}
lVar7 = FUN_1400b7660(&local_128);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"CombatLogString",&DAT_1409eb6d4,
*(undefined8 *)(lVar7 + 8));
if (plVar13 != (longlong *)0x0) {
FUN_14018b900(plVar13,0);
}
if (local_68._0_8_ != 0) {
FUN_14018b900(local_68._0_8_,0);
}
FUN_1400b7390(&local_128);
}
}
else {
if (iVar16 == 0x19) goto LAB_1403c8493;
if (iVar16 - 0x1aU < 3) {
piVar9 = (int *)FUN_1403d2710();
iVar5 = *(int *)(&DAT_140dc22a0 + ((longlong)*piVar9 + -4) * 2);
piVar9 = (int *)FUN_1403d2710(((longlong)*piVar9 + -4) * 2,param_2);
lVar7 = ((longlong)*piVar9 + -4) * 2;
uVar18 = 0;
iVar16 = *(int *)((longlong)&DAT_140dc22a0 + ((longlong)*piVar9 + -4) * 0x10 + 4);
do {
piVar9 = (int *)FUN_1403d2710(lVar7,param_2);
lVar7 = (longlong)*piVar9;
lVar1 = uVar18 + lVar7 * 4;
uVar18 = uVar18 + 1;
*(undefined4 *)((longlong)&local_res10 + uVar18 * 4 + 4) = (&DAT_140dc2268)[lVar1];
} while (uVar18 < 2);
goto LAB_1403c7ee6;
}
}
uVar19 = 0;
do {
iVar16 = *(int *)((longlong)&local_res18 + uVar19 * 4);
if (iVar16 != 0) {
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c64c04 != 0) || (iVar5 = FUN_140248ca0(), iVar5 < 0)) goto LAB_1403c8481;
lVar7 = (**(code **)(*DAT_140c63b40 + 0x18))(DAT_140c63b40,iVar16);
}
else {
lVar7 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,iVar16,DAT_140c63858);
}
if (lVar7 != 0) {
_local_228 = ZEXT816(0);
FUN_1405787d0(*(longlong *)(DAT_140c65898 + 0x6490),0,
*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8));
}
}
LAB_1403c8481:
uVar19 = uVar19 + 1;
} while (uVar19 < 2);
}
return;
LAB_1403c7c8b:
puVar4 = *(undefined **)(DAT_140dc22e8 + 8);
puVar8 = DAT_140dc22e8;
while (puVar3 = puVar4, puVar3 != (undefined *)0x0) {
if (*(int *)(puVar3 + 0x20) < 0x1a) {
puVar4 = *(undefined **)(puVar3 + 0x18);
}
else {
puVar4 = *(undefined **)(puVar3 + 0x10);
puVar8 = puVar3;
}
}
if ((puVar8 == DAT_140dc22e8) || (0x1a < *(int *)(puVar8 + 0x20))) {
local_res10 = 0x1a;
local_res18 = puVar8;
FUN_1403d3e70(&DAT_140dc22e0,&local_res20,&local_res18,&local_res10);
puVar8 = local_res20;
}
*(undefined4 *)(puVar8 + 0x24) = 4;
puVar4 = *(undefined **)(DAT_140dc22e8 + 8);
puVar8 = DAT_140dc22e8;
while (puVar3 = puVar4, puVar3 != (undefined *)0x0) {
if (*(int *)(puVar3 + 0x20) < 0x1b) {
puVar4 = *(undefined **)(puVar3 + 0x18);
}
else {
puVar4 = *(undefined **)(puVar3 + 0x10);
puVar8 = puVar3;
}
}
if ((puVar8 == DAT_140dc22e8) || (0x1b < *(int *)(puVar8 + 0x20))) {
local_res10 = 0x1b;
local_res18 = puVar8;
FUN_1403d3e70(&DAT_140dc22e0,&local_res20,&local_res18,&local_res10);
puVar8 = local_res20;
}
*(undefined4 *)(puVar8 + 0x24) = 5;
puVar4 = *(undefined **)(DAT_140dc22e8 + 8);
puVar8 = DAT_140dc22e8;
while (puVar3 = puVar4, puVar3 != (undefined *)0x0) {
if (*(int *)(puVar3 + 0x20) < 0x1c) {
puVar4 = *(undefined **)(puVar3 + 0x18);
}
else {
puVar4 = *(undefined **)(puVar3 + 0x10);
puVar8 = puVar3;
}
}
if ((puVar8 == DAT_140dc22e8) || (0x1c < *(int *)(puVar8 + 0x20))) {
local_res10 = 0x1c;
local_res18 = puVar8;
FUN_1403d3e70(&DAT_140dc22e0,&local_res20,&local_res18,&local_res10);
puVar8 = local_res20;
}
*(undefined4 *)(puVar8 + 0x24) = 6;
goto LAB_1403c7df4;
}



void FUN_1403c85c0(longlong param_1,undefined4 *param_2)

{
undefined4 uVar1;
longlong lVar2;
undefined4 local_28 [2];
undefined8 local_20;
code *local_18;
undefined8 local_10;

if ((DAT_140dc2300 & 1) == 0) {
DAT_140dc2300 = DAT_140dc2300 | 1;
lVar2 = FUN_140200220(0x463);
if (lVar2 == 0) {
DAT_140dc2304 = 30000;
}
else {
DAT_140dc2304 = *(undefined4 *)(lVar2 + 4);
}
}
uVar1 = DAT_140dc2304;
local_28[0] = 0;
local_20 = FUN_14001c280(param_1);
local_10 = 0;
local_18 = FUN_1403c8690;
FUN_140195960(param_1 + 0x6768,uVar1,local_28,4);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"PendingWorldRemovalWarning",&DAT_1409e9e1c,
*param_2);
return;
}



void FUN_1403c8690(longlong param_1)

{
FUN_140195d70(param_1 + 0x6768);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"PendingWorldRemovalCancel","");
return;
}



undefined4 FUN_1403c86d0(void)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    if ((((DAT_140c65b98 == 0) || (*(int *)(DAT_140c65b98 + 0x108) == 0)) ||
         (lVar1 = FUN_140215240(), lVar1 == 0)) ||
        ((lVar1 = FUN_140214e00(), lVar1 == 0 || (*(int *)(lVar1 + 0x34) == 0)))) {
        if (*(longlong *)(lVar2 + 0x7258) == 0) {
            return 0;
        }
        return *(undefined4 *)(*(longlong *)(lVar2 + 0x7258) + 0x44);
    }
    if (*(int *)(DAT_140c65b98 + 0x108) == 0) {
        return 0;
    }
    lVar2 = FUN_140215240();
    if (lVar2 == 0) {
        return 0;
    }
    lVar2 = FUN_140214e00(*(undefined4 *)(lVar2 + 0x10));
    if (lVar2 == 0) {
        return 0;
    }
    return *(undefined4 *)(lVar2 + 0x34);
}



undefined8 FUN_1403c9070(longlong param_1,int *param_2)

{
undefined4 local_18;
int local_14;
undefined4 local_10;

local_14 = (*param_2 - param_2[3]) - param_2[4];
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ElderPointsGained",&DAT_1409eb744,local_14,
param_2[3]);
*(int *)(param_1 + 0x168c) = param_2[1];
*(int *)(param_1 + 0x1690) = param_2[2];
if ((*(longlong *)(param_1 + 0x78) != 0) && ((*param_2 != 0 || (param_2[3] != 0)))) {
local_18 = 4;
local_10 = 0;
FUN_1404283d0(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_18);
local_14 = param_2[4];
if (local_14 != 0) {
local_18 = 7;
local_10 = 0;
FUN_1404283d0(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_18);
}
local_14 = param_2[3];
local_18 = 5;
local_10 = 0;
FUN_1404283d0(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_18);
}
return 0;
}



undefined8 FUN_1403c9180(longlong param_1)

{
int iVar1;
longlong lVar2;
undefined **local_18;
undefined4 local_10;
undefined4 local_c;

FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ElderPointsLimitReached","");
local_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
local_c = 0x22;
local_18 = &PTR_FUN_140b6f580;
iVar1 = FUN_14060af20(&local_18);
if (iVar1 != 0) {
lVar2 = FUN_1403d90d0(DAT_140c65898,local_10);
if (lVar2 != 0) {
lVar2 = FUN_14047dca0(lVar2);
if (lVar2 != 0) {
FUN_14060afe0(&local_18,local_10);
}
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1403c9210(void)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;

    lVar2 = DAT_140c65898;
    iVar4 = 0;
    lVar5 = FUN_14024db80(*(undefined4 *)(DAT_140c65898 + 0x74ec));
    iVar6 = 0;
    if (lVar5 != 0) {
        while (*(int *)(lVar5 + 0x20) == 0) {
            uVar1 = *(undefined4 *)(lVar5 + 8);
            iVar6 = iVar4;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64634 != 0) || (iVar3 = FUN_14024d920(), iVar3 < 0)) goto LAB_1403c928e;
                lVar5 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar1);
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,uVar1,DAT_140c63858);
            }
            if (lVar5 == 0) goto LAB_1403c928e;
        }
        iVar6 = *(int *)(lVar5 + 0x20);
        if (iVar6 != 0) {
            return iVar6;
        }
    }
    LAB_1403c928e:
    if (((*(longlong *)(lVar2 + 0x78) != 0) && (iVar4 = FUN_1403b48b0(), iVar4 != 0)) &&
        ((lVar2 = *(longlong *)(lVar2 + 0x78), lVar2 == 0 || ((*(uint *)(lVar2 + 0x15a8) & 2) != 0))))
    {
        return 4;
    }
    return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403c92e0(undefined8 param_1,int param_2)

{
int iVar1;
int iVar2;
int *piVar3;
undefined8 uVar4;

if (*(int *)(DAT_140c65898 + 0x74ec) == param_2) {
return 1;
}
uVar4 = 0;
piVar3 = (int *)FUN_14024db80();
if (piVar3 != (int *)0x0) {
while (param_2 != *piVar3) {
iVar1 = piVar3[2];
if (DAT_140c63840 == (code *)0x0) {
if (_DAT_140c64634 != 0) {
return 0;
}
iVar2 = FUN_14024d920();
if (iVar2 < 0) {
return 0;
}
piVar3 = (int *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,iVar1);
}
else {
piVar3 = (int *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar1,DAT_140c63858);
}
if (piVar3 == (int *)0x0) {
return 0;
}
}
uVar4 = 1;
}
return uVar4;
}



bool FUN_1403c93a0(undefined8 param_1,undefined4 param_2)

{
longlong lVar1;
int iVar2;
longlong lVar3;
float fVar4;
float fVar5;

lVar1 = DAT_140c65898;
lVar3 = FUN_14024b980(param_2);
if (lVar3 != 0) {
iVar2 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
if (*(int *)(lVar3 + 0x28) == iVar2) {
fVar4 = *(float *)(*(longlong *)(lVar1 + 0x78) + 0x11e0) - *(float *)(lVar3 + 0xc);
fVar5 = *(float *)(*(longlong *)(lVar1 + 0x78) + 0x11e4) - *(float *)(lVar3 + 0x10);
return fVar4 * fVar4 + fVar5 * fVar5 + 0.0 < *(float *)(lVar3 + 4) * *(float *)(lVar3 + 4);
}
}
return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403c9450(undefined8 param_1,int param_2,int param_3)

{
int iVar1;
int iVar2;
int *piVar3;
undefined8 uVar4;

if (param_2 == param_3) {
return 1;
}
uVar4 = 0;
piVar3 = (int *)FUN_14024db80(param_2);
if (piVar3 != (int *)0x0) {
while (param_3 != *piVar3) {
iVar1 = piVar3[2];
if (DAT_140c63840 == (code *)0x0) {
if (_DAT_140c64634 != 0) {
return 0;
}
iVar2 = FUN_14024d920();
if (iVar2 < 0) {
return 0;
}
piVar3 = (int *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,iVar1);
}
else {
piVar3 = (int *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar1,DAT_140c63858);
}
if (piVar3 == (int *)0x0) {
return 0;
}
}
uVar4 = 1;
}
return uVar4;
}



uint FUN_1403c9500(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
uint uVar1;
longlong lVar2;
uint uVar3;
uint uVar4;
int iVar5;
ulonglong uVar6;
uint uVar7;

switch(param_4) {
case 0:
case 1:
case 4:
case 8:
case 9:
uVar3 = 0x100;
uVar7 = 0x10;
break;
default:
return 1;
case 6:
uVar3 = 0x200;
uVar7 = 0x40;
break;
case 7:
uVar3 = 0x400;
uVar7 = 0x80;
}
uVar6 = 0;
lVar2 = FUN_14043ed60();
iVar5 = (int)uVar6;
uVar4 = iVar5 + 1;
while (lVar2 != 0) {
uVar1 = *(uint *)(*(longlong *)(lVar2 + 8) + 0x1c);
if ((uVar7 & uVar1) != 0) {
return 0;
}
lVar2 = *(longlong *)(lVar2 + 0x10);
uVar6 = uVar6 & 0xffffffff;
if ((uVar3 & uVar1) != 0) {
uVar6 = (ulonglong)uVar4;
}
iVar5 = (int)uVar6;
}
if ((param_3 != 0) && (iVar5 == 0)) {
return 0;
}
return uVar4;
}



void FUN_1403c95e0(void)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x16f0);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))();
    }
    FUN_1403c9500();
    return;
}



void FUN_1403c9640(void)

{
    longlong lVar1;
    undefined auStack88 [32];
    _FILETIME local_38;
    _FILETIME local_30;
    _SYSTEMTIME local_28;
    ulonglong local_18;

    lVar1 = DAT_140c65898;
    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if (*(longlong *)(DAT_140c65898 + 0x1b50) == 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    GetLocalTime(&local_28);
    SystemTimeToFileTime(&local_28,&local_30);
    LocalFileTimeToFileTime(&local_30,&local_38);
    if (*(longlong *)(lVar1 + 0x1b50) - (longlong)local_38 < 1) {
        *(undefined8 *)(lVar1 + 0x1b50) = 0;
        *(undefined8 *)(lVar1 + 0x1b48) = 0;
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
    return;
}



void FUN_1403c9740(void)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined auStack88 [32];
    _FILETIME local_38;
    _FILETIME local_30;
    _SYSTEMTIME local_28;
    ulonglong local_18;

    lVar1 = DAT_140c65898;
    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if (*(longlong *)(DAT_140c65898 + 0x1b50) == 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    GetLocalTime(&local_28);
    SystemTimeToFileTime(&local_28,&local_30);
    LocalFileTimeToFileTime(&local_30,&local_38);
    uVar2 = *(longlong *)(lVar1 + 0x1b50) - (longlong)local_38;
    if ((longlong)uVar2 < 1) {
        *(undefined8 *)(lVar1 + 0x1b50) = 0;
        *(undefined8 *)(lVar1 + 0x1b48) = 0;
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88,uVar2 / 10000);
    return;
}



void FUN_1403c9800(void)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined auStack88 [32];
    _FILETIME local_38;
    _FILETIME local_30;
    _SYSTEMTIME local_28;
    ulonglong local_18;

    lVar1 = DAT_140c65898;
    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if (*(longlong *)(DAT_140c65898 + 0x1b60) == 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    GetLocalTime(&local_28);
    SystemTimeToFileTime(&local_28,&local_30);
    LocalFileTimeToFileTime(&local_30,&local_38);
    uVar2 = *(longlong *)(lVar1 + 0x1b60) - (longlong)local_38;
    if ((longlong)uVar2 < 1) {
        *(undefined8 *)(lVar1 + 0x1b60) = 0;
        *(undefined8 *)(lVar1 + 7000) = 0;
        FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
        return;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88,uVar2 / 10000);
    return;
}



void FUN_1403c98c0(void)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined auStack88 [32];
    _FILETIME local_38;
    _FILETIME local_30;
    _SYSTEMTIME local_28;
    ulonglong local_18;

    lVar1 = DAT_140c65898;
    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if (*(longlong *)(DAT_140c65898 + 0x1b78) != 0) {
        GetLocalTime(&local_28);
        SystemTimeToFileTime(&local_28,&local_30);
        LocalFileTimeToFileTime(&local_30,&local_38);
        uVar2 = *(longlong *)(lVar1 + 0x1b78) - (longlong)local_38;
        if (0 < (longlong)uVar2) {
            FUN_1407db4f0(local_18 ^ (ulonglong)auStack88,uVar2 / 10000);
            return;
        }
        *(undefined8 *)(lVar1 + 0x1b78) = 0;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack88);
    return;
}



void FUN_1403c9970(longlong param_1)

{
longlong *plVar1;
undefined4 uVar2;
longlong lVar3;
int iVar4;

if (*(longlong *)(param_1 + 0x78) != 0) {
FUN_140200220();
uVar2 = FUN_140612e30();
lVar3 = FUN_140211280(uVar2);
if (lVar3 == 0) {
iVar4 = 0;
}
else if ((((*(uint *)(lVar3 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0) ||
(*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (iVar4 = *(int *)(lVar3 + 8), iVar4 == 0))
{
iVar4 = *(int *)(lVar3 + 4);
}
plVar1 = *(longlong **)(DAT_140c63628 + 0x2d8);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x10))(plVar1,iVar4,0,0,0,0,0);
}
}
return;
}



void FUN_1403c9a70(longlong param_1)

{
longlong *plVar1;
undefined4 uVar2;
longlong lVar3;
int iVar4;

if (*(longlong *)(param_1 + 0x78) != 0) {
FUN_140200220(0x435);
uVar2 = FUN_140612e30();
lVar3 = FUN_140211280(uVar2);
iVar4 = 0;
if ((lVar3 != 0) &&
((((*(uint *)(lVar3 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0 ||
(*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (iVar4 = *(int *)(lVar3 + 8), iVar4 == 0)))) {
iVar4 = *(int *)(lVar3 + 4);
}
plVar1 = *(longlong **)(DAT_140c63628 + 0x2d8);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x10))(plVar1,iVar4,0,0,0,0,0);
}
}
return;
}



void FUN_1403c9b30(void)

{
    longlong *plVar1;
    longlong lVar2;

    if ((DAT_140dc2308 & 1) == 0) {
        DAT_140dc2308 = DAT_140dc2308 | 1;
    }
    else if (DAT_140dc2314 != 0) goto LAB_1403c9b92;
    DAT_140dc2314 = 1;
    lVar2 = FUN_140200220(0x4ef);
    if (lVar2 == 0) {
        DAT_140dc2310 = 0;
        return;
    }
    DAT_140dc2310 = *(int *)(lVar2 + 4);
    LAB_1403c9b92:
    if (DAT_140dc2310 != 0) {
        if (DAT_140dc2314 == 0) {
            DAT_140dc2314 = 1;
            lVar2 = FUN_140200220(0x4ef);
            if (lVar2 == 0) {
                DAT_140dc2310 = 0;
            }
            else {
                DAT_140dc2310 = *(int *)(lVar2 + 4);
            }
        }
        plVar1 = *(longlong **)(DAT_140c63628 + 0x2d0);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1,DAT_140dc2310,0,0,0,0,0);
        }
    }
    return;
}



void FUN_1403c9c00(void)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;

    lVar2 = DAT_140c65898;
    uVar3 = 0;
    uVar5 = uVar3;
    if (*(int *)(DAT_140c65898 + 0xa4) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0xa4));
    }
    uVar5 = uVar3;
    if (*(int *)(lVar2 + 0xbc) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 200) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0xbc));
    }
    uVar5 = uVar3;
    if (*(int *)(lVar2 + 0xd4) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xe0) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0xd4));
    }
    uVar5 = uVar3;
    if (*(int *)(lVar2 + 0xec) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xf8) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0xec));
    }
    uVar5 = uVar3;
    if (*(int *)(lVar2 + 0x104) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x110) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0x104));
    }
    uVar5 = uVar3;
    if (*(int *)(lVar2 + 0x11c) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x128) + uVar5 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0x11c));
    }
    if (*(int *)(lVar2 + 0x134) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x140) + uVar3 * 8);
            if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x40) + 0x14c) & 8) != 0)) {
                FUN_14056a430();
            }
            uVar4 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar2 + 0x134));
    }
    return;
}



void FUN_1403c9df0(longlong *param_1)

{
    uint uVar1;
    undefined4 local_res8 [8];

    if ((*(int *)(param_1 + 5) == 0) &&
        (((param_1[2] == 0 || (uVar1 = *(uint *)(param_1[2] + 8), uVar1 == 0)) ||
          ((uint)(DAT_140c636a8 - *(int *)(param_1 + 3)) <= uVar1)))) {
        local_res8[0] = *(undefined4 *)(param_1 + 6);
        FUN_1403f4900(DAT_140c65898,0x7a5,local_res8);
    }
    if (*param_1 != 0) {
        FUN_1403d6480(*param_1,param_1);
    }
    FUN_14018b900(param_1,0);
    return;
}



void FUN_1403c9e60(undefined8 *param_1,uint param_2)

{
longlong *plVar1;
undefined8 *puVar2;
longlong lVar3;
undefined8 *local_res8;

local_res8 = param_1;
puVar2 = (undefined8 *)FUN_14018b280(0x38);
if (puVar2 == (undefined8 *)0x0) {
puVar2 = (undefined8 *)0x0;
}
else {
*puVar2 = 0;
puVar2[2] = 0;
*(undefined4 *)(puVar2 + 3) = 0;
*(undefined4 *)(puVar2 + 5) = 0;
puVar2[4] = FUN_1403c9df0;
puVar2[6] = (ulonglong)param_2;
lVar3 = FUN_140225140(1);
if (lVar3 != 0) {
puVar2[2] = lVar3;
}
}
plVar1 = DAT_140c65a28;
lVar3 = *(longlong *)(*DAT_140c65a28 + 0x10);
*(undefined4 *)(puVar2 + 3) = DAT_140c636a8;
local_res8 = puVar2;
FUN_1404cfc10(*plVar1,puVar2,&local_res8);
if ((lVar3 == 0) && (plVar1[0xc] == 0)) {
FUN_1404cf990(plVar1);
}
return;
}



undefined4 FUN_1403c9f10(longlong param_1)

{
if (*(longlong *)(param_1 + 0x78) != 0) {
return *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xdc);
}
return 0x17;
}



void FUN_1403c9f30(longlong param_1,undefined4 param_2)

{
int iVar1;
longlong lVar2;
longlong lVar3;
undefined8 *puVar4;
undefined8 *puVar5;
undefined8 local_res8;
undefined **local_58;
undefined8 local_50;
LPVOID local_48;
undefined **local_38;
undefined8 local_30;
LPVOID local_28;

if ((*(longlong *)(param_1 + 0x78) != 0) && (lVar2 = FUN_1401f31e0(param_2), lVar2 != 0)) {
puVar4 = *(undefined8 **)(param_1 + 0x6d90);
if (puVar4 != (undefined8 *)0x0) {
(**(code **)*puVar4)(puVar4,1);
}
puVar4 = (undefined8 *)0x0;
*(undefined8 *)(param_1 + 0x6d90) = 0;
iVar1 = *(int *)(lVar2 + 0x18);
if (iVar1 == 1) {
puVar5 = (undefined8 *)FUN_14018b280(0x90,0);
if (puVar5 != (undefined8 *)0x0) {
FUN_1405e7330(puVar5,lVar2);
*puVar5 = &PTR_FUN_140b6e570;
puVar4 = puVar5;
}
}
else if (iVar1 == 2) {
puVar5 = (undefined8 *)FUN_14018b280(0x90,0);
if (puVar5 != (undefined8 *)0x0) {
FUN_1405e7330(puVar5,lVar2);
*puVar5 = &PTR_FUN_140b6e3d0;
puVar4 = puVar5;
}
}
else if (iVar1 == 4) {
puVar5 = (undefined8 *)FUN_14018b280(0x90,0);
if (puVar5 != (undefined8 *)0x0) {
FUN_1405e7330(puVar5,lVar2);
*puVar5 = &PTR_FUN_140b66550;
puVar4 = puVar5;
}
}
else if (iVar1 == 5) {
puVar5 = (undefined8 *)FUN_14018b280(0x90,0);
if (puVar5 != (undefined8 *)0x0) {
FUN_1405e7330(puVar5,lVar2);
*puVar5 = &PTR_FUN_140b66630;
puVar4 = puVar5;
}
}
else {
if (iVar1 != 6) {
lVar3 = FUN_14018b280(0x90,0);
if (lVar3 != 0) {
puVar4 = (undefined8 *)FUN_1405e7330(lVar3,lVar2);
}
*(undefined8 **)(param_1 + 0x6d90) = puVar4;
return;
}
puVar5 = (undefined8 *)FUN_14018b280(0x90,0);
if (puVar5 != (undefined8 *)0x0) {
FUN_1405e7330(puVar5,lVar2);
*puVar5 = &PTR_FUN_140b66700;
puVar4 = puVar5;
}
}
*(undefined8 **)(param_1 + 0x6d90) = puVar4;
if (puVar4 == (undefined8 *)0x0) {
local_50 = 0;
local_58 = &PTR_LAB_140b5e648;
local_48 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_58);
local_38 = local_58;
local_30 = local_50;
local_res8 = 0x141df0b40;
local_28 = local_48;
iVar1 = FUN_140196f30(&DAT_140c8a69c,0x1c,&local_res8,*(undefined4 *)(lVar2 + 0x18),param_2,
                      &local_38);
local_58 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_48);
if (iVar1 != 0) {
DebugBreak();
}
}
lVar3 = *(longlong *)(param_1 + 0x78);
*(undefined4 *)(param_1 + 0x7d80) = *(undefined4 *)(lVar2 + 0x5c);
lVar2 = FUN_1401f31e0(param_2);
if (lVar2 != 0) {
*(longlong *)(lVar3 + 0xe0) = lVar2;
}
*(undefined4 *)(lVar3 + 0xdc) = param_2;
*(undefined4 *)(param_1 + 0x6f98) = 1;
}
return;
}



undefined4 FUN_1403ca1d0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = DAT_140c65898;
    lVar3 = 0;
    lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0);
    if (lVar1 != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x50);
        if (lVar4 == 0) {
            lVar4 = *(longlong *)(lVar1 + 0x40) + 0x9c;
        }
        if (*(int *)(lVar4 + 0x80) != 0) {
            lVar2 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar4 + 0x80),*(undefined8 *)(lVar2 + 0x78));
            if (lVar2 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x50);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(lVar1 + 0x40) + 0x9c;
                }
                if (*(int *)(lVar2 + 0x80) != 0) {
                    lVar3 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar2 + 0x80),
                                          *(undefined8 *)(DAT_140c65898 + 0x78));
                }
                return **(undefined4 **)(lVar3 + 0x70);
            }
        }
    }
    return 0;
}



uint FUN_1403ca2b0(longlong param_1,undefined4 param_2)

{
longlong lVar1;

lVar1 = FUN_14020c160(param_2);
if ((lVar1 != 0) && (*(uint *)(lVar1 + 4) != 0)) {
return *(uint *)(param_1 + 0x1b40) & *(uint *)(lVar1 + 4);
}
return 1;
}



void FUN_1403ca2f0(undefined8 param_1,uint param_2)

{
longlong lVar1;
longlong lVar2;
int iVar3;
longlong local_res8;
uint local_res10 [6];

if (param_2 != 0) {
lVar1 = *(longlong *)(DAT_140c65898 + 0x6310);
local_res8 = lVar1;
lVar2 = *(longlong *)(lVar1 + 8);
while (lVar2 != 0) {
if (*(uint *)(lVar2 + 0x20) < param_2) {
lVar2 = *(longlong *)(lVar2 + 0x18);
}
else {
local_res8 = lVar2;
lVar2 = *(longlong *)(lVar2 + 0x10);
}
}
if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar1;
}
if (local_res8 == lVar1) {
return;
}
iVar3 = FUN_1403d6d10(local_res8 + 0x28);
if (iVar3 == 0) {
return;
}
}
local_res10[0] = param_2;
FUN_1403f4900(DAT_140c65898,0x78e,local_res10);
return;
}



// WARNING: Could not reconcile some variable overlaps

longlong ** FUN_1403ca5f0(longlong param_1,longlong **param_2,undefined4 param_3)

{
ulonglong uVar1;
short sVar2;
longlong lVar3;
longlong *plVar4;
undefined2 *puVar5;
longlong *plVar6;
short *psVar7;
longlong *plVar8;
undefined8 *puVar9;
undefined8 *puVar10;
longlong lVar11;
undefined local_128 [8];
longlong local_120;
undefined2 *local_118;
longlong local_110;
undefined **local_108;
undefined local_100 [8];
undefined2 *local_f8;
undefined2 *local_f0;
undefined local_48 [16];
undefined2 *local_38;

lVar3 = FUN_1401f1860(param_3);
if ((lVar3 == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
puVar9 = (undefined8 *)FUN_14018b280(0x12);
puVar10 = (undefined8 *)0x0;
if (puVar9 != (undefined8 *)0x0) {
puVar9[1] = 0;
*puVar9 = &PTR_LAB_140b55060;
puVar10 = puVar9;
}
*param_2 = puVar10 + 2;
*(undefined2 *)(puVar10 + 2) = 0;
}
else {
lVar3 = FUN_14018b280(0x58);
plVar8 = (longlong *)0x0;
plVar4 = plVar8;
if (lVar3 != 0) {
plVar4 = (longlong *)FUN_1400b6390(lVar3);
}
(**(code **)(*plVar4 + 0x78))(plVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x34));
FUN_1400b6f30(&local_108);
local_108 = &PTR_FUN_140b69230;
local_38 = (undefined2 *)0x0;
local_48 = ZEXT816(0);
puVar5 = (undefined2 *)FUN_14018b280(0x10);
local_48 = CONCAT88(puVar5,puVar5);
local_38 = puVar5 + 8;
if (puVar5 != (undefined2 *)0x0) {
*puVar5 = 0;
}
local_120 = 0;
local_118 = (undefined2 *)0x0;
local_110 = 0;
plVar6 = plVar8;
do {
plVar6 = (longlong *)((longlong)plVar6 + 1);
} while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar6 * 2) != 0);
lVar3 = (longlong)plVar6 * 2 >> 1;
uVar1 = lVar3 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar11 = uVar1 * 2;
local_118 = (undefined2 *)FUN_14018b280(lVar11,0);
local_110 = lVar11 + (longlong)local_118;
}
lVar11 = (longlong)local_118;
lVar3 = lVar3 * 2;
local_120 = (longlong)local_118;
FUN_1407db590(local_118,&DAT_140b0a7c8,lVar3);
local_118 = (undefined2 *)(lVar3 + lVar11);
if (local_118 != (undefined2 *)0x0) {
*local_118 = 0;
}
FUN_1400b7480(&local_108,plVar4);
(**(code **)(*plVar4 + 0x48))(plVar4,local_128);
if (local_120 != 0) {
FUN_14018b900(local_120,0);
}
psVar7 = (short *)FUN_14034bdd0();
if (psVar7 == (short *)0x0) {
if (local_f8 != local_f0) {
*local_f8 = 0;
local_f0 = local_f8;
}
}
else {
sVar2 = *psVar7;
plVar4 = plVar8;
while (sVar2 != 0) {
plVar4 = (longlong *)((longlong)plVar4 + 1);
sVar2 = psVar7[(longlong)plVar4];
}
FUN_14001c480(local_100,psVar7,psVar7 + (longlong)plVar4);
}
lVar3 = FUN_1400b7660(&local_108);
lVar11 = *(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 1;
plVar4 = (longlong *)FUN_14018b280(lVar11 * 2 + 0x12,0);
if (plVar4 != (longlong *)0x0) {
plVar4[1] = lVar11;
*plVar4 = (longlong)&PTR_LAB_140b55060;
plVar8 = plVar4;
}
plVar8 = plVar8 + 2;
FUN_1407db590(plVar8,*(undefined8 *)(lVar3 + 8),lVar11 * 2);
*(undefined2 *)(lVar11 * 2 + (longlong)plVar8) = 0;
*param_2 = plVar8;
if (local_48._0_8_ != 0) {
FUN_14018b900(local_48._0_8_,0);
}
FUN_1400b7390(&local_108);
}
return param_2;
}



// WARNING: Could not reconcile some variable overlaps

longlong ** FUN_1403ca8b0(undefined8 param_1,longlong **param_2,undefined4 param_3,longlong param_4)

{
ulonglong uVar1;
short sVar2;
longlong lVar3;
longlong *plVar4;
undefined2 *puVar5;
longlong *plVar6;
short *psVar7;
longlong *plVar8;
undefined8 *puVar9;
undefined8 *puVar10;
longlong lVar11;
undefined local_128 [8];
longlong local_120;
undefined2 *local_118;
longlong local_110;
undefined **local_108;
undefined local_100 [8];
undefined2 *local_f8;
undefined2 *local_f0;
undefined local_48 [16];
undefined2 *local_38;

lVar3 = FUN_1401f1860(param_3);
if ((lVar3 == 0) || (param_4 == 0)) {
puVar9 = (undefined8 *)FUN_14018b280(0x12);
puVar10 = (undefined8 *)0x0;
if (puVar9 != (undefined8 *)0x0) {
puVar9[1] = 0;
*puVar9 = &PTR_LAB_140b55060;
puVar10 = puVar9;
}
*param_2 = puVar10 + 2;
*(undefined2 *)(puVar10 + 2) = 0;
}
else {
lVar3 = FUN_14018b280(0x60);
plVar8 = (longlong *)0x0;
plVar4 = plVar8;
if (lVar3 != 0) {
puVar5 = &DAT_140b7b704;
if (*(undefined2 **)(param_4 + 0x10) != (undefined2 *)0x0) {
puVar5 = *(undefined2 **)(param_4 + 0x10);
}
plVar4 = (longlong *)FUN_1404ddb40(lVar3,puVar5);
}
(**(code **)(*plVar4 + 0x78))(plVar4,*(undefined4 *)(param_4 + 0x34));
FUN_1400b6f30(&local_108);
local_108 = &PTR_FUN_140b69230;
local_38 = (undefined2 *)0x0;
local_48 = ZEXT816(0);
puVar5 = (undefined2 *)FUN_14018b280(0x10);
local_48 = CONCAT88(puVar5,puVar5);
local_38 = puVar5 + 8;
if (puVar5 != (undefined2 *)0x0) {
*puVar5 = 0;
}
local_120 = 0;
local_118 = (undefined2 *)0x0;
local_110 = 0;
plVar6 = plVar8;
do {
plVar6 = (longlong *)((longlong)plVar6 + 1);
} while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar6 * 2) != 0);
lVar3 = (longlong)plVar6 * 2 >> 1;
uVar1 = lVar3 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar11 = uVar1 * 2;
local_118 = (undefined2 *)FUN_14018b280(lVar11,0);
local_110 = lVar11 + (longlong)local_118;
}
lVar11 = (longlong)local_118;
lVar3 = lVar3 * 2;
local_120 = (longlong)local_118;
FUN_1407db590(local_118,&DAT_140b0a7c8,lVar3);
local_118 = (undefined2 *)(lVar3 + lVar11);
if (local_118 != (undefined2 *)0x0) {
*local_118 = 0;
}
FUN_1400b7480(&local_108,plVar4);
(**(code **)(*plVar4 + 0x48))(plVar4,local_128);
if (local_120 != 0) {
FUN_14018b900(local_120,0);
}
psVar7 = (short *)FUN_14034bdd0();
if (psVar7 == (short *)0x0) {
if (local_f8 != local_f0) {
*local_f8 = 0;
local_f0 = local_f8;
}
}
else {
sVar2 = *psVar7;
plVar4 = plVar8;
while (sVar2 != 0) {
plVar4 = (longlong *)((longlong)plVar4 + 1);
sVar2 = psVar7[(longlong)plVar4];
}
FUN_14001c480(local_100,psVar7,psVar7 + (longlong)plVar4);
}
lVar3 = FUN_1400b7660(&local_108);
lVar11 = *(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 1;
plVar4 = (longlong *)FUN_14018b280(lVar11 * 2 + 0x12,0);
if (plVar4 != (longlong *)0x0) {
plVar4[1] = lVar11;
*plVar4 = (longlong)&PTR_LAB_140b55060;
plVar8 = plVar4;
}
plVar8 = plVar8 + 2;
FUN_1407db590(plVar8,*(undefined8 *)(lVar3 + 8),lVar11 * 2);
*(undefined2 *)(lVar11 * 2 + (longlong)plVar8) = 0;
*param_2 = plVar8;
if (local_48._0_8_ != 0) {
FUN_14018b900(local_48._0_8_,0);
}
FUN_1400b7390(&local_108);
}
return param_2;
}



undefined8 FUN_1403cab70(longlong param_1,longlong param_2)

{
undefined4 *puVar1;
undefined4 *puVar2;
uint uVar3;
ulonglong uVar4;

if (*(longlong *)(param_1 + 0x78) != 0) {
uVar4 = 0;
if (*(short *)(param_2 + 4) != 0) {
do {
puVar1 = (undefined4 *)(*(longlong *)(param_2 + 8) + uVar4 * 8);
puVar2 = (undefined4 *)FUN_1403d2690(param_1 + 0x1b90,puVar1);
*puVar2 = puVar1[1];
FUN_1403cada0(param_1,*puVar1);
uVar3 = (int)uVar4 + 1;
uVar4 = (ulonglong)uVar3;
} while (uVar3 < *(ushort *)(param_2 + 4));
}
return 0;
}
return 0x80004005;
}



undefined8 FUN_1403cac00(longlong param_1,uint param_2,undefined4 *param_3)

{
longlong lVar1;
longlong lVar2;
longlong local_res8;

lVar1 = *(longlong *)(param_1 + 0x1bb8);
local_res8 = lVar1;
lVar2 = *(longlong *)(lVar1 + 8);
while (lVar2 != 0) {
if (*(uint *)(lVar2 + 0x20) < param_2) {
lVar2 = *(longlong *)(lVar2 + 0x18);
}
else {
local_res8 = lVar2;
lVar2 = *(longlong *)(lVar2 + 0x10);
}
}
if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar1;
}
if (local_res8 != lVar1) {
*param_3 = *(undefined4 *)(local_res8 + 0x24);
return 0;
}
lVar1 = *(longlong *)(param_1 + 0x1b98);
local_res8 = lVar1;
lVar2 = *(longlong *)(lVar1 + 8);
while (lVar2 != 0) {
if (*(uint *)(lVar2 + 0x20) < param_2) {
lVar2 = *(longlong *)(lVar2 + 0x18);
}
else {
local_res8 = lVar2;
lVar2 = *(longlong *)(lVar2 + 0x10);
}
}
if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar1;
}
if (local_res8 == lVar1) {
return 0x80004005;
}
*param_3 = *(undefined4 *)(local_res8 + 0x24);
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403cacd0(undefined8 param_1)

{
uint uVar1;
int iVar2;
longlong lVar3;
uint uVar4;

uVar4 = 0;
if (DAT_140c63838 == (code *)0x0) {
if (_DAT_140c6546c == 0) {
iVar2 = FUN_1401feec0();
if (iVar2 < 0) {
uVar1 = 0;
}
else {
uVar1 = (**(code **)(*DAT_140c64d20 + 0x28))();
}
}
else {
uVar1 = 0;
}
}
else {
uVar1 = (*DAT_140c63838)(&PTR_u_Faction2_140a6a328,DAT_140c63858);
}
if (uVar1 != 0) {
do {
if (DAT_140c63848 == (code *)0x0) {
if (_DAT_140c6546c != 0) {
return;
}
iVar2 = FUN_1401feec0();
if (iVar2 < 0) {
return;
}
lVar3 = (**(code **)(*DAT_140c64d20 + 0x20))(DAT_140c64d20,uVar4);
}
else {
lVar3 = (*DAT_140c63848)(&PTR_u_Faction2_140a6a328,uVar4,DAT_140c63858);
}
if (lVar3 == 0) {
return;
}
FUN_1403cada0(param_1);
uVar4 = uVar4 + 1;
} while (uVar4 < uVar1);
}
return;
}



void FUN_1403cada0(longlong param_1,undefined4 param_2)

{
longlong *plVar1;
int iVar2;
longlong lVar3;
undefined4 *puVar4;
undefined4 local_res10 [2];
undefined4 local_res18;
undefined4 local_res1c;
undefined4 local_res20;
undefined4 local_res24;
undefined local_28 [16];

local_res10[0] = param_2;
lVar3 = FUN_1401ff120(param_2);
if ((lVar3 != 0) && ((*(byte *)(lVar3 + 8) & 1) == 0)) {
FUN_1403d57b0(param_1 + 0x1bd0,local_res10);
plVar1 = *(longlong **)(param_1 + 0x1bf0);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2), 4 < iVar2)) {
if ((*(byte *)(lVar3 + 8) & 4) == 0) {
iVar2 = FUN_1403cac00(param_1,param_2,&local_res18);
if (iVar2 != 0) {
return;
}
puVar4 = &local_res20;
local_res24 = local_res18;
local_res20 = param_2;
}
else {
local_res18 = param_2;
local_res1c = (**(code **)(**(longlong **)(param_1 + 0x1bf0) + 0x20))();
puVar4 = &local_res18;
}
FUN_140032f50(param_1 + 0x1bd0,local_28,puVar4);
}
}
return;
}



undefined8 FUN_1403cae70(longlong param_1,uint *param_2)

{
short sVar1;
uint uVar2;
ulonglong uVar3;
undefined8 *puVar4;
ulonglong uVar5;
uint uVar6;
int iVar7;
longlong lVar8;
ulonglong uVar9;
short *psVar10;
longlong *plVar11;
longlong lVar12;
longlong *plVar13;
longlong *plVar14;
undefined8 uVar15;
char *pcVar16;
int iVar17;
longlong lVar18;
undefined4 uVar21;
ulonglong uVar19;
undefined *puVar20;
bool bVar22;
float fVar23;
undefined8 uVar24;
double dVar25;
float fVar26;
undefined4 uVar27;
undefined4 uVar28;
float fVar29;
float fVar30;
ulonglong local_res18 [2];
undefined8 in_stack_fffffffffffffe50;
undefined4 uVar31;
undefined **local_198;
longlong *local_190;
longlong *local_188;
longlong *local_180;
undefined local_178 [8];
longlong local_170;
undefined local_158 [8];
undefined local_150 [8];
undefined2 *local_148;
undefined2 *local_140;
longlong local_98;

uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffe50 >> 0x20);
plVar13 = (longlong *)0x0;
uVar6 = 0;
local_res18[0] = local_res18[0] & 0xffffffff00000000;
if (*(longlong *)(param_1 + 0x78) == 0) {
return 0x80004005;
}
plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x110);
if (plVar11 != (longlong *)0x0) {
uVar6 = (**(code **)(*plVar11 + 0x18))();
}
uVar2 = *param_2;
if (uVar2 == uVar6) {
return 0;
}
uVar27 = 0;
fVar30 = 0.0;
if ((float)param_2[1] == 0.0) {
return 0;
}
uVar9 = *(ulonglong *)(param_1 + 0x1b98);
local_res18[0] = uVar9;
uVar3 = *(ulonglong *)(uVar9 + 8);
while (uVar3 != 0) {
if (*(uint *)(uVar3 + 0x20) < uVar2) {
uVar3 = *(ulonglong *)(uVar3 + 0x18);
}
else {
local_res18[0] = uVar3;
uVar3 = *(ulonglong *)(uVar3 + 0x10);
}
}
if ((local_res18[0] == uVar9) || (uVar2 < *(uint *)(local_res18[0] + 0x20))) {
local_res18[0] = uVar9;
}
uVar3 = local_res18[0];
if (local_res18[0] == uVar9) {
uVar24 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x110) + 0x20))();
fVar23 = (float)uVar24;
uVar27 = (undefined4)((ulonglong)uVar24 >> 0x20);
fVar26 = fVar23 + (float)param_2[1];
local_res18[0] = CONCAT44(fVar26,*param_2);
uVar28 = uVar27;
FUN_140032f50(param_1 + 0x1b90,&local_198,local_res18);
}
else {
fVar23 = *(float *)(local_res18[0] + 0x24);
uVar28 = 0;
fVar26 = (float)param_2[1] + fVar23;
*(float *)(local_res18[0] + 0x24) = fVar26;
}
lVar8 = FUN_1401ff120();
if ((((lVar8 != 0) && ((*(uint *)(lVar8 + 8) & 1) != 0)) || ((int)fVar26 == (int)fVar23)) ||
((lVar8 = FUN_1401ff120(*param_2), lVar8 == 0 || (*(int *)(lVar8 + 0xc) == 0))))
goto LAB_1403cb661;
fVar29 = (float)param_2[1];
uVar9 = FUN_14034bdd0();
local_res18[0] = uVar9;
FUN_1404dde90(local_158);
psVar10 = (short *)FUN_14034bdd0();
if (psVar10 == (short *)0x0) {
if (local_148 != local_140) {
*local_148 = 0;
local_140 = local_148;
}
}
else {
sVar1 = *psVar10;
plVar11 = plVar13;
while (sVar1 != 0) {
plVar11 = (longlong *)((longlong)plVar11 + 1);
sVar1 = psVar10[(longlong)plVar11];
}
FUN_14001c480(local_150,psVar10,psVar10 + (longlong)plVar11);
}
lVar8 = FUN_14018b280(0x60);
plVar11 = plVar13;
if (lVar8 != 0) {
plVar11 = (longlong *)FUN_1404ddb40(lVar8,uVar9);
}
local_190 = (longlong *)0x0;
local_188 = (longlong *)0x0;
local_180 = (longlong *)0x0;
plVar14 = plVar13;
do {
psVar10 = &DAT_140af6572 + (longlong)plVar14;
plVar14 = (longlong *)((longlong)plVar14 + 1);
} while (*psVar10 != 0);
lVar8 = (longlong)plVar14 * 2 >> 1;
uVar9 = lVar8 + 1;
if (uVar9 < 0x7fffffffffffffff) {
lVar12 = uVar9 * 2;
local_188 = (longlong *)FUN_14018b280(lVar12,0);
local_180 = (longlong *)((longlong)local_188 + lVar12);
}
lVar12 = (longlong)local_188;
lVar8 = lVar8 * 2;
local_190 = local_188;
FUN_1407db590(local_188,&DAT_140af6570,lVar8);
local_188 = (longlong *)(lVar12 + lVar8);
plVar14 = (longlong *)0x0;
if (local_188 != (longlong *)0x0) {
*(undefined2 *)local_188 = 0;
}
FUN_1400b7480(local_158,plVar11);
(**(code **)(*plVar11 + 0x48))(plVar11,&local_198);
if (local_190 != (longlong *)0x0) {
FUN_14018b900(local_190,0);
}
if ((float)((uint)fVar29 & 0x7fffffff) < 1.0) {
lVar8 = FUN_14018b280(0x60);
plVar11 = plVar14;
if (lVar8 != 0) {
plVar13 = (longlong *)0x2;
lVar12 = FUN_14018efa0(local_178,L"%.1g",(double)fVar29);
plVar11 = (longlong *)FUN_1404ddb40(lVar8,*(undefined8 *)(lVar12 + 8));
}
local_190 = (longlong *)0x0;
local_188 = (longlong *)0x0;
local_180 = (longlong *)0x0;
do {
lVar8 = (longlong)plVar14 + 1;
plVar14 = (longlong *)((longlong)plVar14 + 1);
} while (L"delta"[lVar8] != L'\0');
lVar8 = (longlong)plVar14 * 2 >> 1;
uVar9 = lVar8 + 1;
if (uVar9 < 0x7fffffffffffffff) {
lVar12 = uVar9 * 2;
local_188 = (longlong *)FUN_14018b280(lVar12,0);
local_180 = (longlong *)((longlong)local_188 + lVar12);
}
lVar12 = (longlong)local_188;
lVar8 = lVar8 * 2;
lVar18 = lVar8;
local_190 = local_188;
FUN_1407db590(local_188,L"delta",lVar8);
uVar21 = (undefined4)((ulonglong)lVar18 >> 0x20);
local_188 = (longlong *)(lVar12 + lVar8);
if (local_188 != (longlong *)0x0) {
*(undefined2 *)local_188 = 0;
}
FUN_1400b7480(local_158,plVar11);
(**(code **)(*plVar11 + 0x48))(plVar11,&local_198);
if (local_190 != (longlong *)0x0) {
FUN_14018b900(local_190,0);
}
bVar22 = plVar13 != (longlong *)0x0;
}
else {
lVar8 = FUN_14018b280(0x60);
bVar22 = lVar8 != 0;
plVar13 = plVar14;
if (bVar22) {
lVar12 = FUN_14018efa0(local_178,L"%.0f",(double)fVar29);
plVar13 = (longlong *)FUN_1404ddb40(lVar8,*(undefined8 *)(lVar12 + 8));
}
local_190 = (longlong *)0x0;
local_188 = (longlong *)0x0;
local_180 = (longlong *)0x0;
do {
lVar8 = (longlong)plVar14 + 1;
plVar14 = (longlong *)((longlong)plVar14 + 1);
} while (L"delta"[lVar8] != L'\0');
lVar8 = (longlong)plVar14 * 2 >> 1;
uVar9 = lVar8 + 1;
if (uVar9 < 0x7fffffffffffffff) {
lVar12 = uVar9 * 2;
local_188 = (longlong *)FUN_14018b280(lVar12,0);
local_180 = (longlong *)((longlong)local_188 + lVar12);
}
lVar12 = (longlong)local_188;
lVar8 = lVar8 * 2;
lVar18 = lVar8;
local_190 = local_188;
FUN_1407db590(local_188,L"delta",lVar8);
uVar21 = (undefined4)((ulonglong)lVar18 >> 0x20);
local_188 = (longlong *)(lVar12 + lVar8);
if (local_188 != (longlong *)0x0) {
*(undefined2 *)local_188 = 0;
}
FUN_1400b7480(local_158,plVar13);
(**(code **)(*plVar13 + 0x48))(plVar13,&local_198);
if (local_190 != (longlong *)0x0) {
FUN_14018b900(local_190,0);
}
}
if ((bVar22) && (local_170 != 0)) {
FUN_14018b900(local_170,0);
}
plVar13 = (longlong *)FUN_14018b280(0x60);
bVar22 = plVar13 != (longlong *)0x0;
plVar11 = plVar13;
plVar14 = plVar13;
if (bVar22) {
lVar8 = FUN_14018efa0(local_178,&DAT_140aec4d4,CONCAT44(uVar21,(int)fVar26));
plVar11 = (longlong *)FUN_1404ddb40(plVar13,*(undefined8 *)(lVar8 + 8));
plVar13 = (longlong *)0x0;
plVar14 = plVar13;
}
do {
lVar8 = (longlong)plVar13 + 1;
plVar13 = (longlong *)((longlong)plVar13 + 1);
} while (L"total"[lVar8] != L'\0');
lVar8 = (longlong)plVar13 * 2 >> 1;
uVar9 = lVar8 + 1;
local_180 = plVar14;
if (uVar9 < 0x7fffffffffffffff) {
lVar12 = uVar9 * 2;
local_190 = plVar14;
local_188 = plVar14;
plVar14 = (longlong *)FUN_14018b280(lVar12,0);
local_180 = (longlong *)((longlong)plVar14 + lVar12);
}
lVar8 = lVar8 * 2;
local_190 = plVar14;
local_188 = plVar14;
FUN_1407db590(plVar14,L"total",lVar8);
local_188 = (longlong *)((longlong)plVar14 + lVar8);
if (local_188 != (longlong *)0x0) {
*(undefined2 *)local_188 = 0;
}
FUN_1400b7480(local_158,plVar11);
(**(code **)(*plVar11 + 0x48))(plVar11);
if (local_190 != (longlong *)0x0) {
FUN_14018b900();
}
if ((bVar22) && (local_170 != 0)) {
FUN_14018b900();
}
lVar8 = FUN_1400b7660();
uVar5 = local_res18[0];
uVar9 = *(ulonglong *)(lVar8 + 8);
uVar19 = local_res18[0];
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"FactionFloater","USiSi",
*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),uVar9,
CONCAT44(uVar31,(int)fVar29),local_res18[0],*param_2);
uVar31 = (undefined4)(uVar19 >> 0x20);
uVar6 = FUN_1407a2a00(CONCAT44(uVar27,fVar26));
uVar19 = (ulonglong)uVar6;
iVar7 = FUN_1407a2a00(CONCAT44(uVar28,fVar23));
iVar17 = (int)uVar19;
if (iVar17 == iVar7) {
if (((fVar30 < fVar29) && (fVar30 = (float)FUN_1407a2aa0(uVar19 & 0xffffffff), fVar23 < fVar30))
&& (fVar30 <= fVar26)) {
uVar24 = *(undefined8 *)(DAT_140c65898 + 0x7340);
uVar15 = FUN_140616130(iVar17 + 1);
puVar20 = &DAT_1409ea15c;
pcVar16 = "ReputationBoundryWarning";
goto LAB_1403cb5c5;
}
}
else {
uVar24 = *(undefined8 *)(DAT_140c65898 + 0x7340);
uVar15 = FUN_140616130(uVar19 & 0xffffffff);
puVar20 = &DAT_1409ea18c;
pcVar16 = "ReputationLevel";
LAB_1403cb5c5:
uVar9 = uVar5;
FUN_1400ea3e0(uVar24,pcVar16,puVar20,uVar15,uVar5);
}
FUN_1403cada0(param_1,*param_2);
dVar25 = (double)fVar29;
uVar9 = uVar9 & 0xffffffff00000000 | (longlong)*(float *)(uVar3 + 0x24) & 0xffffffffU;
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ReputationChanged",&DAT_1409ea1cc,uVar5,uVar9,
dVar25);
FUN_140437a10(DAT_140c658d8,0xc4,0,0,uVar9 & 0xffffffff00000000,
(ulonglong)dVar25 & 0xffffffff00000000,CONCAT44(uVar31,1));
if (local_98 != 0) {
FUN_14018b900(local_98,0);
}
FUN_1400b7390(local_158);
LAB_1403cb661:
puVar4 = DAT_140c65b80;
*(undefined4 *)(param_1 + 0x6f98) = 1;
FUN_1405fccb0(*puVar4);
local_190 = (longlong *)((ulonglong)local_190 & 0xffffffff00000000 | (ulonglong)(uint)fVar23);
local_198 = &PTR_LAB_140b66f78;
FUN_14043b4e0();
return 0;
}



undefined8 FUN_1403cb7f0(longlong param_1,undefined4 *param_2)

{
longlong lVar1;
int *piVar2;
uint uVar3;
ulonglong uVar4;
undefined4 local_res8 [2];
undefined local_18 [16];

if (((*(longlong *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x6644) == 0x21)) &&
(lVar1 = FUN_1403d90d0(DAT_140c65898,*param_2), lVar1 != 0)) {
piVar2 = (int *)FUN_140617410();
if ((piVar2 == (int *)0x0) || (*piVar2 != 1)) {
return 1;
}
uVar4 = 0;
if (param_2[2] != 0) {
do {
local_res8[0] = *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar4 * 4);
FUN_1400293c0(piVar2 + 0x12,local_18,local_res8);
uVar3 = (int)uVar4 + 1;
uVar4 = (ulonglong)uVar3;
} while (uVar3 < (uint)param_2[2]);
}
lVar1 = FUN_140617410();
if (lVar1 != 0) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"InvokeSoldierBuild",&DAT_1409ed774,
*param_2,*(undefined8 *)(lVar1 + 0x98));
}
}
return 0;
}



undefined8 FUN_1403cb8e0(longlong param_1,undefined4 *param_2)

{
longlong lVar1;
undefined4 uVar2;
undefined4 local_res8;
undefined4 local_resc;
undefined local_28 [32];

if ((*(longlong *)(param_1 + 0x78) != 0) && (lVar1 = FUN_140617410(param_1,*param_2), lVar1 != 0))
{
local_res8 = param_2[1];
uVar2 = param_2[3];
local_resc = param_2[2];
FUN_140617d30(lVar1 + 0x28,local_28,&local_res8);
if (param_2[2] == 0) {
*(undefined4 *)(lVar1 + 0x1c) = uVar2;
}
else if (param_2[2] == 1) {
*(undefined4 *)(lVar1 + 0x20) = uVar2;
}
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UpdateSoldierBuild",&DAT_1409ed804,
*(undefined8 *)(lVar1 + 0x98));
}
return 0;
}



undefined8 FUN_1403cb990(longlong param_1,int *param_2,undefined8 param_3)

{
longlong lVar1;
undefined8 uVar2;

if (*param_2 == 0) {
if (*(longlong *)(param_1 + 0x7078) != 0) {
FUN_1403b7290();
}
uVar2 = 0;
}
else {
uVar2 = 0;
if (*(longlong *)(param_1 + 0x7078) != 0) {
FUN_1403b7290();
*(undefined8 *)(param_1 + 0x7078) = 0;
}
if ((DAT_140dc2318 & 1) == 0) {
DAT_140dc2318 = DAT_140dc2318 | 1;
lVar1 = FUN_140200220(0xb7);
if (lVar1 == 0) {
DAT_140dc231c = 10000;
}
else {
DAT_140dc231c = *(undefined4 *)(lVar1 + 4);
}
}
lVar1 = FUN_14018b280(0x60);
if (lVar1 != 0) {
uVar2 = FUN_1406077d0(lVar1,DAT_140dc231c,param_3,0x98daa);
}
}
*(undefined8 *)(param_1 + 0x7078) = uVar2;
*(undefined *)(param_1 + 0x1b6c) = *(undefined *)(param_2 + 1);
*(undefined4 *)(param_1 + 0x6f98) = 1;
return 0;
}



undefined8 FUN_1403cba60(longlong param_1,int *param_2,undefined8 param_3)

{
longlong lVar1;
undefined8 uVar2;

if (*param_2 == 0) {
if (*(longlong *)(param_1 + 0x7080) != 0) {
FUN_1403b7290();
}
uVar2 = 0;
}
else {
uVar2 = 0;
if (*(longlong *)(param_1 + 0x7080) != 0) {
FUN_1403b7290();
*(undefined8 *)(param_1 + 0x7080) = 0;
}
if ((DAT_140dc2320 & 1) == 0) {
DAT_140dc2320 = DAT_140dc2320 | 1;
lVar1 = FUN_140200220(0x20b);
if (lVar1 == 0) {
DAT_140dc2324 = 10000;
}
else {
DAT_140dc2324 = *(undefined4 *)(lVar1 + 4);
}
}
lVar1 = FUN_14018b280(0x60);
if (lVar1 != 0) {
uVar2 = FUN_1406077d0(lVar1,DAT_140dc2324,param_3,0x98dac);
}
}
*(undefined8 *)(param_1 + 0x7080) = uVar2;
return 0;
}



undefined8 FUN_1403cbb10(undefined8 param_1,undefined4 *param_2)

{
longlong lVar1;

lVar1 = DAT_140c65898;
*(undefined4 *)(DAT_140c65898 + 0x1694) = *param_2;
*(undefined4 *)(lVar1 + 0x6f98) = 1;
FUN_140437a10(DAT_140c658d8,0x4a,0,0,0,0,1);
return 0;
}



undefined8 FUN_1403cbb60(undefined8 param_1,int *param_2)

{
uint uVar1;
longlong lVar2;
undefined8 uVar3;

uVar1 = *param_2 - 1;
if (uVar1 < 0x12) {
switch(*param_2) {
case 1:
uVar3 = 0x75e9;
break;
case 2:
uVar3 = 0x69876;
break;
case 3:
uVar3 = 0x754a;
break;
case 4:
uVar3 = 0x6987a;
break;
case 5:
uVar3 = 0x754b;
break;
case 6:
uVar3 = 0x6987e;
break;
case 7:
uVar3 = 0x754c;
break;
case 8:
uVar3 = 0x754d;
break;
case 9:
uVar3 = 0x754e;
break;
case 10:
uVar3 = 0x754f;
break;
case 0xb:
uVar3 = 0x757c;
break;
case 0xc:
uVar3 = 0x5b5cd;
break;
case 0xd:
uVar3 = 0x6989e;
break;
case 0xe:
uVar3 = 0x6989f;
break;
case 0xf:
uVar3 = 0x69a2e;
break;
case 0x10:
uVar3 = 0x8ff83;
break;
case 0x11:
uVar3 = 0x8ff84;
break;
case 0x12:
uVar3 = 0xbae48;
}
lVar2 = FUN_14034bdd0(IMAGE_DOS_HEADER_140000000.e_magic +
                      (&switchD_1403cbb84::switchdataD_1403cbc34)[(int)uVar1],uVar3);
if (lVar2 != 0) {
FUN_140003890(DAT_140c658a0,10,0,lVar2,0,0);
}
}
return 0;
}



undefined8 FUN_1403cbc80(longlong param_1)

{
FUN_1403a1510();
FUN_140566240(DAT_140c65b70 + 0x7a0,FUN_14055c760,param_1 + 0x7d10);
FUN_1403d40e0(param_1 + 0x7d10);
FUN_1403d4180(param_1 + 0x7d30);
FUN_1403d4210();
FUN_1403d4910();
return 0;
}



undefined8 FUN_1403cbdf0(longlong param_1,undefined4 param_2,uint param_3)

{
int iVar1;
uint uVar2;
ulonglong uVar3;
longlong lVar4;
ulonglong uVar5;
ulonglong uVar6;
longlong *plVar7;
uint local_res18 [4];

local_res18[0] = param_3;
switch(param_2) {
case 0:
lVar4 = FUN_1400b5df0(DAT_140c658f0,param_3);
if (lVar4 == 0) {
return 1;
}
iVar1 = *(int *)(lVar4 + 0x17c);
if (iVar1 - 1U < 6) {
uVar2 = iVar1 - 1;
if (6 < uVar2) {
return 1;
}
}
else {
if (iVar1 != 0x14) {
return 1;
}
uVar2 = 6;
}
uVar3 = 0;
plVar7 = (longlong *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x568));
if (plVar7[1] != 0) {
uVar5 = plVar7[1];
do {
uVar6 = (uVar5 - uVar3 >> 1) + uVar3;
uVar2 = *(uint *)(*plVar7 + uVar6 * 4);
if (uVar2 <= param_3) {
if (param_3 <= uVar2) goto switchD_1403cbe28_caseD_1;
uVar3 = uVar6 + 1;
uVar6 = uVar5;
}
uVar5 = uVar6;
} while (uVar3 < uVar6);
}
FUN_1401c2e70(plVar7,uVar3,local_res18);
case 1:
case 2:
case 3:
case 6:
case 7:
switchD_1403cbe28_caseD_1:
FUN_140431520(*(undefined8 *)(DAT_140c65898 + 0x7340),param_3,param_2);
return 0;
case 4:
lVar4 = FUN_1400b5df0(DAT_140c658f0,param_3);
if (lVar4 == 0) {
return 1;
}
iVar1 = *(int *)(lVar4 + 0x17c);
if (iVar1 - 1U < 6) {
uVar2 = iVar1 - 1;
if (6 < uVar2) {
return 1;
}
}
else {
if (iVar1 != 0x14) {
return 1;
}
uVar2 = 6;
}
uVar3 = 0;
plVar7 = (longlong *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x568));
if (plVar7[1] != 0) {
uVar5 = plVar7[1];
do {
uVar6 = (uVar5 - uVar3 >> 1) + uVar3;
uVar2 = *(uint *)(*plVar7 + uVar6 * 4);
if (uVar2 <= param_3) {
if (param_3 <= uVar2) {
FUN_1401c2f20(plVar7);
break;
}
uVar3 = uVar6 + 1;
uVar6 = uVar5;
}
uVar5 = uVar6;
} while (uVar3 < uVar6);
}
case 5:
case 8:
case 9:
FUN_140431570(*(undefined8 *)(DAT_140c65898 + 0x7340),param_3,param_2);
default:
return 0;
}
}



undefined8 FUN_1403cc420(undefined8 param_1,uint *param_2)

{
if (*(longlong *)(&DAT_000018a0 + *(longlong *)(DAT_140c65898 + 0x78)) == 0) {
return 1;
}
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_MentorLeftAOI",&DAT_1409ea4a4,
(ulonglong)*param_2 / 1000,param_2[1]);
return 0;
}



void FUN_1403cc480(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
uint uVar1;
uint uVar2;
undefined auStack72 [32];
undefined8 local_28;
undefined8 local_20;
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
uVar1 = *(uint *)(DAT_140c65898 + 0x6328);
if (param_2 == 0) {
uVar2 = uVar1 & 0xffffffdf;
}
else {
uVar2 = uVar1 | 0x20;
}
if (param_3 == 0) {
uVar2 = uVar2 & 0xffffffbf;
}
else {
uVar2 = uVar2 | 0x40;
}
if (param_4 == 0) {
uVar2 = uVar2 & 0xffffff7f;
}
else {
uVar2 = uVar2 | 0x80;
}
if (param_5 == 0) {
uVar2 = uVar2 & 0xfffffdff;
}
else {
uVar2 = uVar2 | 0x200;
}
if (uVar2 != uVar1) {
local_28 = CONCAT44(param_3,param_2);
local_20 = CONCAT44(param_5,param_4);
FUN_1403f4900(DAT_140c65898,0x10c,&local_28);
}
FUN_1407db4f0(local_18 ^ (ulonglong)auStack72);
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403cc530(longlong param_1,int param_2)

{
short sVar1;
undefined2 *puVar2;
short *psVar3;
undefined *puVar4;
longlong lVar5;
char *pcVar6;
longlong lVar7;
undefined **local_108;
undefined local_100 [8];
undefined2 *local_f8;
undefined2 *local_f0;
undefined local_48 [16];
undefined2 *local_38;
undefined local_28 [8];
longlong local_20;

FUN_1400b6f30(&local_108);
lVar5 = 0;
lVar7 = 0;
local_38 = (undefined2 *)0x0;
local_48 = ZEXT816(0);
local_108 = &PTR_FUN_140b69230;
puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
local_38 = puVar2 + 8;
local_48 = CONCAT88(puVar2,puVar2);
if (puVar2 != (undefined2 *)0x0) {
*puVar2 = 0;
}
pcVar6 = IMAGE_DOS_HEADER_140000000.e_magic +
         (&switchD_1403cc5c0::switchdataD_1403cd2ec)
         [(&switchD_1403cc5c0::switchdataD_1403cd498)[param_2 + -1]];
switch(param_2) {
case 1:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x11fff);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
LAB_1403cc60a:
FUN_14001c480(local_100,psVar3,psVar3 + lVar5);
break;
}
goto LAB_1403cc5d1;
case 2:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12002);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 3:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12004);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 4:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12007);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 5:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12008);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 6:
case 0x94:
case 0x95:
case 0x97:
case 0x98:
case 0x99:
FUN_1400b75f0(&local_108,0x12009);
break;
default:
puVar4 = (undefined *)
        FUN_14018efa0(local_28,L"(Unlocalized) Unhandled EGenericError Code (%d)",param_2);
if (puVar4 != local_100) {
FUN_14001c480(local_100,*(undefined8 *)(puVar4 + 8),*(undefined8 *)(puVar4 + 0x10));
}
if (local_20 != 0) {
FUN_14018b900(local_20,0);
}
break;
case 0xb:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1200b);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0xd:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12010);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0xe:
case 0x9e:
break;
case 0xf:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12012);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x10:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12013);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x11:
case 0x96:
FUN_1400b75f0(&local_108,0x12014);
break;
case 0x12:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12015);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x13:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12016);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x14:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12018);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x15:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12019);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x16:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1201a);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x17:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1201b);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x18:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1201c);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x19:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12048);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x1a:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1201d);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x1b:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12020);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x1c:
FUN_1400b75f0(&local_108,0x12021);
break;
case 0x1d:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12023);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x1e:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12027);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x1f:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12029);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x20:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12049);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x21:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202a);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x22:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202b);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x23:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202c);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x24:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202d);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x25:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202e);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x26:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1202f);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x27:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12032);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x28:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12033);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x29:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12034);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x2a:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x12035);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x2b:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1204c);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x2c:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1204d);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x2d:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x1204e);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
lVar5 = lVar7;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x2e:
FUN_1400b75f0(&local_108,0x1204f);
break;
case 0x2f:
FUN_1400b75f0(&local_108,0x12050);
break;
case 0x30:
FUN_1400b75f0(&local_108,0x12051);
break;
case 0x31:
FUN_1400b75f0(&local_108,0x12052);
break;
case 0x32:
FUN_1400b75f0(&local_108,0x12053);
break;
case 0x33:
FUN_1400b75f0(&local_108,0x120bc);
break;
case 0x34:
FUN_1400b75f0(&local_108,0x120c2);
break;
case 0x35:
FUN_1400b75f0(&local_108,0x157af);
break;
case 0x36:
FUN_1400b75f0(&local_108,0x157b0);
break;
case 0x39:
FUN_1400b75f0(&local_108,0x7f1f8);
break;
case 0x3f:
FUN_1400b75f0(&local_108,0x1f7c3);
break;
case 0x40:
FUN_1400b75f0(&local_108,0x2b797);
break;
case 0x41:
FUN_1400b75f0(&local_108,0x2b793);
break;
case 0x42:
FUN_1400b75f0(&local_108,0x2b796);
break;
case 0x43:
FUN_1400b75f0(&local_108,0x2b791);
break;
case 0x44:
FUN_1400b75f0(&local_108,0x2b79a);
break;
case 0x45:
FUN_1400b75f0(&local_108,0x2b795);
break;
case 0x46:
FUN_1400b75f0(&local_108,0x2b799);
break;
case 0x47:
FUN_1400b75f0(&local_108,0x2b798);
break;
case 0x48:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x2dec6);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x4c:
FUN_1400b75f0(&local_108,0x2fe6e);
break;
case 0x4d:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x63aba);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
goto LAB_1403cc5d1;
case 0x4e:
case 0x6f:
FUN_1400b75f0(&local_108,0xad110);
break;
case 0x4f:
FUN_1400b75f0(&local_108,0x3ea69);
break;
case 0x50:
FUN_1400b75f0(&local_108,0xad115);
break;
case 0x52:
FUN_1400b75f0(&local_108,0x3a2dc);
break;
case 0x54:
FUN_1400b75f0(&local_108,0x97ef9);
break;
case 0x55:
FUN_1400b75f0(&local_108,0x4392f);
break;
case 0x57:
FUN_1400b75f0(&local_108,0x4b204);
break;
case 0x58:
FUN_1400b75f0(&local_108,0x5353c);
break;
case 0x5b:
FUN_1400b75f0(&local_108,0x58641);
break;
case 0x5c:
FUN_1400b75f0(&local_108,0x58646);
break;
case 0x5d:
FUN_1400b75f0(&local_108,0x58647);
break;
case 0x67:
FUN_1400b75f0(&local_108,0x6ab42);
break;
case 0x6e:
FUN_1400b75f0(&local_108,0x6f4c4);
break;
case 0x70:
FUN_1400b75f0(&local_108,0xad113);
break;
case 0x72:
FUN_1400b75f0(&local_108,0xad111);
break;
case 0x73:
FUN_1400b75f0(&local_108,0x7a796);
break;
case 0x74:
FUN_1400b75f0(&local_108,0x7a877);
break;
case 0x75:
FUN_1400b75f0(&local_108,0x7cbad);
break;
case 0x76:
FUN_1400b75f0(&local_108,0x7f767);
break;
case 0x79:
FUN_1400b75f0(&local_108,0x84b21);
break;
case 0x7a:
FUN_1400b75f0(&local_108,0x8abb7);
break;
case 0x7f:
FUN_1400b75f0(&local_108,0x8ec1f);
break;
case 0x80:
FUN_1400b75f0(&local_108,0x8ec21);
break;
case 0x81:
FUN_1400b75f0(&local_108,0x8ec22);
break;
case 0x82:
FUN_1400b75f0(&local_108,0x8ec24);
break;
case 0x83:
FUN_1400b75f0(&local_108,0x8ecf6);
break;
case 0x84:
psVar3 = (short *)FUN_14034bdd0(pcVar6,0x8fbc9);
if (psVar3 != (short *)0x0) {
sVar1 = *psVar3;
while (sVar1 != 0) {
lVar5 = lVar5 + 1;
sVar1 = psVar3[lVar5];
}
goto LAB_1403cc60a;
}
LAB_1403cc5d1:
if (local_f8 != local_f0) {
*local_f8 = 0;
local_f0 = local_f8;
}
break;
case 0x85:
FUN_1400b75f0(&local_108,0x13383);
break;
case 0x87:
FUN_1400b75f0(&local_108,0xa0717);
break;
case 0x88:
FUN_1400b75f0(&local_108,0xa0718);
break;
case 0x89:
FUN_1400b75f0(&local_108,0xa0719);
break;
case 0x8a:
FUN_1400b75f0(&local_108,0xa071b);
break;
case 0x8b:
FUN_1400b75f0(&local_108,0xa0532);
break;
case 0x8c:
FUN_1400b75f0(&local_108,0xa0ee7);
break;
case 0x8d:
FUN_1400b75f0(&local_108,0xa0eef);
break;
case 0x8e:
FUN_1400b75f0(&local_108,0xa1e8d);
break;
case 0x8f:
FUN_1400b75f0(&local_108,0xa0ef0);
break;
case 0x90:
FUN_1400b75f0(&local_108,0xa5272);
break;
case 0x91:
FUN_1400b75f0(&local_108,0xa6b05);
break;
case 0x9a:
FUN_1400b75f0(&local_108,0xad114);
break;
case 0x9c:
FUN_1400b75f0(&local_108,0xb2a5f);
break;
case 0x9d:
FUN_1400b75f0(&local_108,0xb2f8e);
break;
case 0x9f:
FUN_1400b75f0(&local_108,0xb5256);
break;
case 0xae:
FUN_1400b75f0(&local_108,0xbc19f);
}
lVar5 = FUN_1400b7660(&local_108);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"GenericError",&DAT_1409eef4c,param_2,
*(undefined8 *)(lVar5 + 8));
if (local_48._0_8_ != 0) {
FUN_14018b900(local_48._0_8_,0);
}
FUN_1400b7390(&local_108);
return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1403cd550(undefined8 param_1,uint *param_2)

{
short sVar1;
uint uVar2;
undefined2 *puVar3;
undefined8 *puVar4;
short *psVar5;
undefined8 *puVar6;
undefined8 uVar7;
longlong lVar8;
undefined8 *puVar9;
undefined extraout_XMM0 [16];
undefined **local_e8;
undefined local_e0 [8];
undefined2 *local_d8;
undefined2 *local_d0;
undefined local_28 [16];
undefined2 *local_18;

FUN_1400b6f30(&local_e8);
puVar6 = (undefined8 *)0x0;
local_28 = extraout_XMM0 & (undefined  [16])0x0;
local_18 = (undefined2 *)0x0;
local_e8 = &PTR_FUN_140b69230;
puVar3 = (undefined2 *)FUN_14018b280(0x10);
local_18 = puVar3 + 8;
local_28 = CONCAT88(puVar3,puVar3);
if (puVar3 != (undefined2 *)0x0) {
*puVar3 = 0;
}
puVar4 = (undefined8 *)FUN_14018b280(0x58);
puVar9 = puVar6;
if (puVar4 != (undefined8 *)0x0) {
uVar2 = *param_2;
FUN_1400b6390(puVar4);
*puVar4 = &PTR_FUN_140b69300;
*(uint *)(puVar4 + 1) = uVar2 / 1000;
*(float *)((longlong)puVar4 + 0xc) = (float)(uVar2 / 1000);
puVar9 = puVar4;
}
FUN_1400b7480(&local_e8,puVar9);
psVar5 = (short *)FUN_14034bdd0();
if (psVar5 == (short *)0x0) {
if (local_d8 != local_d0) {
*local_d8 = 0;
local_d0 = local_d8;
}
}
else {
sVar1 = *psVar5;
while (sVar1 != 0) {
puVar6 = (undefined8 *)((longlong)puVar6 + 1);
sVar1 = psVar5[(longlong)puVar6];
}
FUN_14001c480(local_e0,psVar5,psVar5 + (longlong)puVar6);
}
uVar7 = FUN_14034bdd0();
lVar8 = FUN_1400b7660(&local_e8);
FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar8 + 8),0,uVar7);
if (local_28._0_8_ != 0) {
FUN_14018b900(local_28._0_8_,0);
}
FUN_1400b7390(&local_e8);
return 0;
}



undefined8 FUN_1403cd6d0(longlong param_1,undefined8 *param_2)

{
uint uVar1;
uint uVar2;

*(undefined8 *)(param_1 + 0x7508) = *param_2;
*(undefined8 *)(param_1 + 0x7510) = param_2[1];
uVar1 = *(uint *)(param_2 + 2);
uVar2 = *(uint *)(param_1 + 0x7518);
*(uint *)(param_1 + 0x7518) = uVar1;
if ((uVar2 & 1) != (uVar1 & 1)) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingPrivacyUpdated",&DAT_1409ec064);
}
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingBasicsUpdated","");
return 0;
}



undefined8 FUN_1403cd760(longlong param_1,uint *param_2)

{
uint uVar1;
uint uVar2;

uVar1 = *(uint *)(param_1 + 0x7f68);
if (uVar1 != *param_2) {
*(uint *)(param_1 + 0x7f68) = *param_2;
FUN_140619730(param_1,param_2,uVar1);
uVar2 = *param_2 & 1;
if ((uVar1 & 1) != uVar2) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ItemAuctionsDisabled",&DAT_1409ec954,
uVar2);
if ((uVar2 != 0) && (*(int *)(DAT_140c65898 + 0x6644) == 0x4c)) {
FUN_1403a71f0(DAT_140c65898,0,0x65,1);
}
*(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
}
}
return 0;
}



void FUN_1403cd800(undefined8 param_1,byte param_2)

{
longlong lVar1;
int iVar2;
byte local_res10 [8];
undefined4 uVar3;

lVar1 = DAT_140c65898;
if (3 < param_2) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpecChanged",&DAT_1409ecde4,param_2 + 1,1
);
return;
}
if ((uint)param_2 == *(uint *)(DAT_140c65898 + 0x6dec)) {
uVar3 = 2;
}
else if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x2ac) == 0)) {
if ((*(byte *)(DAT_140c65898 + 0x1448 + (ulonglong)param_2 * 4) & 1) == 0) {
uVar3 = 5;
}
else {
iVar2 = FUN_1403a11c0();
if (iVar2 != 0) {
if (((*(longlong *)(lVar1 + 0x7928) != 0) && ((*(byte *)(lVar1 + 0x7b48) & 0x20) != 0)) &&
(DAT_140c65808 != 0)) {
local_res10[0] = param_2;
FUN_1403f4900(lVar1,0x174,local_res10);
}
return;
}
uVar3 = 6;
}
}
else {
uVar3 = 3;
}
FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"SpecChanged",&DAT_1409ecde4,param_2 + 1,uVar3);
return;
}



void FUN_1403cd930(longlong param_1,uint param_2)

{
int iVar1;
longlong lVar2;
undefined **local_28;
undefined4 local_20;
undefined4 local_1c;
undefined4 local_18;

*(uint *)(param_1 + 0x6dec) = param_2 & 0xff;
FUN_140008410();
*(undefined4 *)(param_1 + 0x6ddc) = 0xffffffff;
*(undefined8 *)(param_1 + 0x6eb8) = 0;
FUN_1403c23c0(param_1);
local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
local_1c = 0x20;
local_28 = &PTR_FUN_140b6f3d0;
local_18 = *(undefined4 *)(param_1 + 0x6dec);
iVar1 = FUN_14060af20(&local_28);
if (iVar1 != 0) {
lVar2 = FUN_1403d90d0(DAT_140c65898,local_20);
if (lVar2 != 0) {
lVar2 = FUN_14047dca0(lVar2);
if (lVar2 != 0) {
FUN_14060afe0(&local_28,local_20);
}
}
}
return;
}



undefined8 FUN_1403cd9e0(longlong param_1,int *param_2)

{
int iVar1;
longlong lVar2;
undefined **local_18;
undefined4 local_10;
undefined4 local_c;

FUN_140008410(param_1 + 0x1458);
*(undefined4 *)(param_1 + 0x6ddc) = 0xffffffff;
*(undefined8 *)(param_1 + 0x6eb8) = 0;
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"AbilityBookChange",&DAT_1409d10c6);
if (*param_2 != 0) {
local_10 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
local_c = 0x1f;
local_18 = &PTR_FUN_140b6f3a0;
iVar1 = FUN_14060af20(&local_18);
if (iVar1 != 0) {
lVar2 = FUN_1403d90d0(DAT_140c65898,local_10);
if (lVar2 != 0) {
lVar2 = FUN_14047dca0(lVar2);
if (lVar2 != 0) {
FUN_14060afe0(&local_18,local_10);
}
}
}
}
return 0;
}



void FUN_1403cdaa0(undefined8 param_1,uint param_2,longlong param_3,int **param_4)

{
int iVar1;
longlong lVar2;
longlong lVar3;
longlong *plVar4;
int *piVar5;
int *piVar6;
int *piVar7;
ulonglong local_28;

lVar2 = *(longlong *)(param_3 + 8);
local_28 = lVar2;
lVar3 = *(longlong *)(lVar2 + 8);
while (lVar3 != 0) {
if (*(uint *)(lVar3 + 0x20) < param_2) {
lVar3 = *(longlong *)(lVar3 + 0x18);
}
else {
local_28 = lVar3;
lVar3 = *(longlong *)(lVar3 + 0x10);
}
}
if ((local_28 == lVar2) || (param_2 < *(uint *)(local_28 + 0x20))) {
local_28 = lVar2;
}
if (local_28 != lVar2) {
plVar4 = *(longlong **)(local_28 + 0x28);
local_28 = 0;
if (plVar4[1] != 0) {
do {
piVar5 = param_4[1];
iVar1 = *(int *)(*plVar4 + local_28 * 4);
piVar7 = (int *)0x0;
if (piVar5 != (int *)0x0) {
piVar6 = *param_4;
do {
if (*piVar6 == iVar1) goto LAB_1403cdba2;
piVar7 = (int *)((longlong)piVar7 + 1);
piVar6 = piVar6 + 1;
} while (piVar7 < piVar5);
}
piVar7 = (int *)FUN_14018db00(*param_4,(longlong)piVar5 + 1,4);
piVar7[(longlong)piVar5] = iVar1;
if (*param_4 != piVar7) {
FUN_1407db590(piVar7,*param_4,(longlong)param_4[1] << 2);
piVar6 = *param_4;
if (piVar6 != (int *)0x0) {
(**(code **)(*(longlong *)(piVar6 + -4) + 8))(piVar6 + -4);
}
*param_4 = piVar7;
}
param_4[1] = (int *)((longlong)piVar5 + 1);
LAB_1403cdba2:
FUN_1403cdaa0(param_1,iVar1,param_3,param_4);
local_28 = local_28 + 1;
} while (local_28 < (ulonglong)plVar4[1]);
}
}
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403cdbf0(longlong param_1)

{
int iVar1;
longlong lVar2;
uint uVar3;

if ((DAT_140dc2328 & 1) == 0) {
DAT_140dc2328 = DAT_140dc2328 | 1;
lVar2 = FUN_140200220(0x3ae);
if (lVar2 == 0) {
_DAT_140dc232c = 10;
}
else {
_DAT_140dc232c = *(uint *)(lVar2 + 4);
}
}
if ((DAT_140dc2328 & 2) == 0) {
DAT_140dc2328 = DAT_140dc2328 | 2;
lVar2 = FUN_140200220(0x3ae);
if (lVar2 == 0) {
_DAT_140dc2330 = 4;
}
else {
_DAT_140dc2330 = *(int *)(lVar2 + 8);
}
}
if ((DAT_140dc2328 & 4) == 0) {
DAT_140dc2328 = DAT_140dc2328 | 4;
lVar2 = FUN_140200220(0x3ae);
if (lVar2 == 0) {
DAT_140dc2334 = 1.0;
}
else {
DAT_140dc2334 = *(float *)(lVar2 + 0x18);
}
}
lVar2 = *(longlong *)(param_1 + 0x78);
iVar1 = 0;
if (lVar2 == 0) {
uVar3 = 0;
}
else {
uVar3 = *(uint *)(lVar2 + 0x38);
}
if (_DAT_140dc232c <= uVar3) {
if (lVar2 != 0) {
iVar1 = *(int *)(lVar2 + 0x38);
}
iVar1 = (int)(longlong)((float)(ulonglong)(iVar1 - _DAT_140dc232c) * DAT_140dc2334) +
        *(int *)(param_1 + 0x6e68) + *(int *)(param_1 + 0x6e64) + _DAT_140dc2330;
}
*(int *)(param_1 + 0x6e60) = iVar1;
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short FUN_1403cdd00(undefined8 param_1,int param_2)

{
undefined2 uVar1;
ulonglong uVar2;
longlong lVar3;
int iVar4;
longlong lVar5;
ulonglong uVar6;
ulonglong uVar7;
short sVar8;

lVar3 = DAT_140c65898;
uVar6 = 0;
if (3 < *(uint *)(DAT_140c65898 + 0x6dec)) {
return 0;
}
sVar8 = *(short *)(DAT_140c65898 + 0x6e60);
uVar2 = *(ulonglong *)
        ((ulonglong)*(uint *)(DAT_140c65898 + 0x6dec) * 0x10 + 0x6e78 + DAT_140c65898);
uVar7 = uVar6;
if (uVar2 != 0) {
do {
uVar1 = *(undefined2 *)
        (*(longlong *)(lVar3 + ((ulonglong)*(uint *)(lVar3 + 0x6dec) + 0x6e7) * 0x10) +
         uVar7 * 2);
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c65444 == 0) && (iVar4 = FUN_1401fd540(), -1 < iVar4)) {
lVar5 = (**(code **)(*DAT_140c653a0 + 0x18))(DAT_140c653a0,uVar1);
goto LAB_1403cddbb;
}
}
else {
lVar5 = (*DAT_140c63840)(&PTR_u_EldanAugmentation_140a6a1d8,uVar1,DAT_140c63858);
LAB_1403cddbb:
if (lVar5 != 0) {
sVar8 = sVar8 - *(short *)(lVar5 + 0x10);
}
}
uVar7 = uVar7 + 1;
} while (uVar7 < uVar2);
}
uVar2 = *(ulonglong *)(lVar3 + 0x6eb8);
if (((uVar2 != 0) && (param_2 == 0)) && (uVar2 != 0)) {
do {
uVar1 = *(undefined2 *)(*(longlong *)(lVar3 + 0x6eb0) + uVar6 * 2);
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c65444 == 0) && (iVar4 = FUN_1401fd540(), -1 < iVar4)) {
lVar5 = (**(code **)(*DAT_140c653a0 + 0x18))(DAT_140c653a0,uVar1);
goto LAB_1403cde3c;
}
}
else {
lVar5 = (*DAT_140c63840)(&PTR_u_EldanAugmentation_140a6a1d8,uVar1,DAT_140c63858);
LAB_1403cde3c:
if (lVar5 != 0) {
sVar8 = sVar8 - *(short *)(lVar5 + 0x10);
}
}
uVar6 = uVar6 + 1;
} while (uVar6 < uVar2);
}
return sVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1403cde70(longlong param_1,int param_2)

{
undefined2 uVar1;
ulonglong uVar2;
int iVar3;
longlong lVar4;
ulonglong uVar5;
ulonglong uVar6;

uVar5 = 0;
uVar6 = uVar5;
if ((*(uint *)(param_1 + 0x6dec) < 4) &&
(uVar2 = *(ulonglong *)((ulonglong)*(uint *)(param_1 + 0x6dec) * 0x10 + 0x6e78 + param_1),
        uVar2 != 0)) {
do {
uVar1 = *(undefined2 *)
        (*(longlong *)(param_1 + ((ulonglong)*(uint *)(param_1 + 0x6dec) + 0x6e7) * 0x10) +
         uVar5 * 2);
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c65444 == 0) && (iVar3 = FUN_1401fd540(), -1 < iVar3)) {
lVar4 = (**(code **)(*DAT_140c653a0 + 0x18))(DAT_140c653a0,uVar1);
goto LAB_1403cdf19;
}
}
else {
lVar4 = (*DAT_140c63840)(&PTR_u_EldanAugmentation_140a6a1d8,uVar1,DAT_140c63858);
LAB_1403cdf19:
if ((lVar4 != 0) && ((param_2 == 0 || (param_2 == *(int *)(lVar4 + 0x20))))) {
uVar6 = (ulonglong)(ushort)((short)uVar6 + *(short *)(lVar4 + 0x10));
}
}
uVar5 = uVar5 + 1;
} while (uVar5 < uVar2);
}
return uVar6;
}



undefined8 FUN_1403cdf50(longlong param_1,uint param_2,byte param_3,int param_4)

{
ulonglong uVar1;
ulonglong uVar2;
bool bVar3;
ushort *puVar4;
ulonglong uVar5;
ulonglong uVar6;

if (3 < param_3) {
return 0;
}
uVar1 = *(ulonglong *)(param_1 + 0x6eb8);
uVar5 = 0;
if ((((uint)param_3 != *(uint *)(param_1 + 0x6dec)) || (param_4 != 0)) ||
(bVar3 = true, uVar1 == 0)) {
bVar3 = false;
}
uVar2 = *(ulonglong *)(param_1 + 0x6e78 + (ulonglong)param_3 * 0x10);
if (uVar2 != 0) {
puVar4 = *(ushort **)(param_1 + ((ulonglong)param_3 + 0x6e7) * 0x10);
uVar6 = uVar5;
do {
if (*puVar4 == param_2) {
return 1;
}
uVar6 = uVar6 + 1;
puVar4 = puVar4 + 1;
} while (uVar6 < uVar2);
}
if ((bVar3) && (uVar1 != 0)) {
puVar4 = *(ushort **)(param_1 + 0x6eb0);
do {
if (*puVar4 == param_2) {
return 1;
}
uVar5 = uVar5 + 1;
puVar4 = puVar4 + 1;
} while (uVar5 < uVar1);
}
return 0;
}



undefined8 FUN_1403ce010(undefined8 param_1,longlong param_2)

{
longlong *plVar1;
int iVar2;
double *pdVar3;
longlong lVar4;
int iVar5;
undefined8 *puVar6;
undefined8 uVar7;
longlong lVar8;
longlong lVar9;
undefined8 *puVar10;
longlong lVar11;
longlong lVar12;
ulonglong uVar13;
double dVar14;
undefined4 uVar15;
undefined4 uVar16;
int local_res8;
int iStackX12;
undefined local_68 [8];
longlong local_60;

lVar4 = DAT_140c65898;
lVar9 = *(longlong *)(param_2 + 0x10);
uVar13 = *(ulonglong *)(DAT_140c65898 + 0x6ed0);
puVar6 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
*(undefined4 *)(param_2 + 8));
puVar10 = *(undefined8 **)(lVar9 + 0x10);
*puVar10 = *puVar6;
*(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar10,L"nCount",uVar13 & 0xffffffff);
plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
*plVar1 = *plVar1 + -0x10;
lVar9 = *(longlong *)(lVar4 + 0x6ec8);
lVar11 = *(longlong *)(lVar9 + 0x10);
if (lVar11 != lVar9) {
uVar15 = 0;
uVar16 = 0;
do {
lVar9 = *(longlong *)(param_2 + 0x10);
if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar9);
}
puVar10 = *(undefined8 **)(lVar9 + 0x10);
uVar7 = FUN_14005c1b0(lVar9,0,0);
*(undefined4 *)(puVar10 + 1) = 5;
*puVar10 = uVar7;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
iVar5 = FUN_1400578c0(lVar9);
iVar2 = *(int *)(lVar11 + 0x20);
lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
if (iVar5 - 1U < *(uint *)(lVar8 + 0x38)) {
puVar10 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
}
else {
dVar14 = (double)iVar5;
if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
puVar10 = *(undefined8 **)(lVar8 + 0x20);
}
else {
iStackX12 = (int)((ulonglong)dVar14 >> 0x20);
local_res8 = SUB84(dVar14,0);
puVar10 = (undefined8 *)
        (*(longlong *)(lVar8 + 0x20) +
         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
          (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1403ce1a0;
puVar10 = (undefined8 *)puVar10[4];
} while (puVar10 != (undefined8 *)0x0);
puVar10 = &DAT_140a12138;
}
LAB_1403ce1a0:
puVar6 = *(undefined8 **)(lVar9 + 0x10);
*puVar6 = *puVar10;
*(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar10 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar8 = FUN_14018f0e0(local_68,L"nSpecIndex");
lVar8 = *(longlong *)(lVar8 + 8);
if (lVar8 == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
}
else {
lVar12 = -1;
do {
lVar12 = lVar12 + 1;
} while (*(char *)(lVar8 + lVar12) != '\0');
if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar9);
}
puVar10 = *(undefined8 **)(lVar9 + 0x10);
uVar7 = FUN_140062650(lVar9,lVar8,lVar12);
*(undefined4 *)(puVar10 + 1) = 4;
*puVar10 = uVar7;
}
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
if (local_60 != 0) {
FUN_14018b900(local_60,0);
}
pdVar3 = *(double **)(lVar9 + 0x10);
*(undefined4 *)(pdVar3 + 1) = 3;
*pdVar3 = (double)(iVar2 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar7 = FUN_1400580e0(lVar9,0xfffffffd);
FUN_14005ea50(lVar9,uVar7,*(longlong *)(lVar9 + 0x10) + -0x20,
*(longlong *)(lVar9 + 0x10) + -0x10);
lVar8 = *(longlong *)(lVar9 + 0x10);
*(undefined **)(lVar9 + 0x10) = &DAT_ffffffffffffffd0 + lVar8;
lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
iVar2 = *(int *)(lVar11 + 0x24);
if (iVar5 - 1U < *(uint *)(lVar12 + 0x38)) {
puVar10 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar12 + 0x18));
}
else {
dVar14 = (double)iVar5;
if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
puVar10 = *(undefined8 **)(lVar12 + 0x20);
}
else {
iStackX12 = (int)((ulonglong)dVar14 >> 0x20);
local_res8 = SUB84(dVar14,0);
puVar10 = (undefined8 *)
        (*(longlong *)(lVar12 + 0x20) +
         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
          (longlong)((1 << (*(byte *)(lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1403ce314;
puVar10 = (undefined8 *)puVar10[4];
} while (puVar10 != (undefined8 *)0x0);
puVar10 = &DAT_140a12138;
}
LAB_1403ce314:
*(undefined8 *)(&DAT_ffffffffffffffd0 + lVar8) = *puVar10;
*(undefined4 *)(lVar8 + -0x28) = *(undefined4 *)(puVar10 + 1);
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
lVar8 = FUN_14018f0e0(local_68,L"eLimitedActionSetResult");
lVar8 = *(longlong *)(lVar8 + 8);
if (lVar8 == 0) {
*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
}
else {
lVar12 = -1;
do {
lVar12 = lVar12 + 1;
} while (*(char *)(lVar8 + lVar12) != '\0');
if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar9);
}
puVar10 = *(undefined8 **)(lVar9 + 0x10);
uVar7 = FUN_140062650(lVar9,lVar8,lVar12);
*(undefined4 *)(puVar10 + 1) = 4;
*puVar10 = uVar7;
}
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
if (local_60 != 0) {
FUN_14018b900(local_60,0);
}
pdVar3 = *(double **)(lVar9 + 0x10);
*(undefined4 *)(pdVar3 + 1) = 3;
*pdVar3 = (double)iVar2;
*(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
uVar7 = FUN_1400580e0(lVar9,0xfffffffd);
FUN_14005ea50(lVar9,uVar7,*(longlong *)(lVar9 + 0x10) + -0x20,
*(longlong *)(lVar9 + 0x10) + -0x10);
*(longlong *)(lVar9 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar9 + 0x10));
FUN_1400fb1d0(param_2);
FUN_1400579e0(lVar9);
lVar9 = *(longlong *)(lVar11 + 0x18);
if (lVar9 == 0) {
lVar9 = *(longlong *)(lVar11 + 8);
if (lVar11 == *(longlong *)(lVar9 + 0x18)) {
do {
lVar11 = lVar9;
lVar9 = *(longlong *)(lVar11 + 8);
} while (lVar11 == *(longlong *)(lVar9 + 0x18));
}
if (*(longlong *)(lVar11 + 0x18) != lVar9) {
lVar11 = lVar9;
}
}
else {
for (lVar8 = *(longlong *)(lVar9 + 0x10); lVar11 = lVar9, lVar8 != 0;
lVar8 = *(longlong *)(lVar8 + 0x10)) {
lVar9 = lVar8;
}
}
} while (lVar11 != *(longlong *)(lVar4 + 0x6ec8));
}
return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403ce4a0(byte param_1,longlong param_2)

{
uint *puVar1;
short sVar2;
uint uVar3;
double *pdVar4;
uint uVar5;
int iVar6;
int iVar7;
uint *puVar8;
longlong lVar9;
short *psVar10;
undefined *puVar11;
undefined *puVar12;
undefined **ppuVar13;
longlong lVar14;
undefined8 uVar15;
int *piVar16;
undefined2 *puVar17;
ulonglong uVar18;
ushort *puVar19;
undefined *puVar20;
undefined8 *puVar21;
uint uVar22;
longlong lVar23;
ulonglong uVar24;
ulonglong uVar25;
ulonglong uVar26;
undefined8 *puVar27;
uint uVar28;
longlong lVar29;
undefined *puVar30;
bool bVar31;
float fVar32;
undefined extraout_XMM0 [16];
uint uVar33;
float fVar34;
undefined4 uVar35;
undefined4 uVar36;
undefined auStack920 [32];
undefined8 local_378;
uint local_370;
int *local_368;
undefined *local_360;
longlong local_358;
undefined local_350 [8];
undefined *local_348;
undefined8 local_340;
undefined *local_330;
undefined8 local_328;
undefined *local_320;
undefined **local_318;
undefined4 local_310;
longlong local_308;
undefined4 local_300;
undefined local_2f8 [8];
undefined *local_2f0;
undefined8 local_2e8;
undefined local_2d8 [8];
undefined *local_2d0;
undefined8 local_2c8;
undefined **local_2b8;
undefined4 local_2b0;
longlong local_2a8;
undefined4 local_2a0;
undefined **local_298;
int local_290;
undefined *local_288;
undefined4 local_280;
undefined **local_278;
undefined local_270 [8];
undefined2 *local_268;
undefined2 *local_260;
undefined local_1b8 [16];
undefined2 *local_1a8;
undefined local_198 [8];
undefined local_190 [8];
undefined2 *local_188;
undefined2 *local_180;
longlong local_d8;
uint local_b8;
uint uStack180;
undefined8 uStack176;
uint local_a8;
undefined8 uStack164;
undefined8 uStack156;
uint uStack148;
undefined8 uStack144;
uint local_88;
uint uStack132;
undefined8 uStack128;
short *local_78;
undefined4 local_68 [4];
undefined4 local_58;
undefined4 local_54;
ulonglong local_50;

lVar14 = DAT_140c65898;
local_50 = DAT_140c0f7b0 ^ (ulonglong)auStack920;
local_358 = param_2;
local_2f0 = (undefined *)FUN_14018b280(0x70);
local_368._0_4_ = 0;
local_2e8 = 0;
*local_2f0 = 0;
*(undefined8 *)(local_2f0 + 8) = 0;
*(undefined **)(local_2f0 + 0x10) = local_2f0;
*(undefined **)(local_2f0 + 0x18) = local_2f0;
local_348 = (undefined *)FUN_14018b280(0x58);
local_340 = 0;
*local_348 = 0;
*(undefined8 *)(local_348 + 8) = 0;
*(undefined **)(local_348 + 0x10) = local_348;
*(undefined **)(local_348 + 0x18) = local_348;
local_2d0 = (undefined *)FUN_14018b280(0x30);
local_2c8 = 0;
uVar33 = 0;
*local_2d0 = 0;
*(undefined8 *)(local_2d0 + 8) = 0;
*(undefined **)(local_2d0 + 0x10) = local_2d0;
*(undefined **)(local_2d0 + 0x18) = local_2d0;
uVar28 = (uint)local_368;
while( true ) {
if (DAT_140c63838 == (code *)0x0) {
uVar5 = 0;
if ((_DAT_140c655f8 == 0) && (iVar6 = FUN_1401fd100(), -1 < iVar6)) {
uVar5 = (**(code **)(*DAT_140c63fb8 + 0x28))();
}
}
else {
uVar5 = (*DAT_140c63838)(&PTR_u_EldanAugmentationCategory_140a6a1a0);
}
if (uVar28 == uVar5) break;
if (DAT_140c63848 == (code *)0x0) {
if ((_DAT_140c655f8 == 0) && (iVar6 = FUN_1401fd100(), -1 < iVar6)) {
puVar8 = (uint *)(**(code **)(*DAT_140c63fb8 + 0x20))();
goto LAB_1403ce628;
}
}
else {
puVar8 = (uint *)(*DAT_140c63848)(&PTR_u_EldanAugmentationCategory_140a6a1a0);
LAB_1403ce628:
if (puVar8 != (uint *)0x0) {
puVar11 = local_2d0;
if (*(undefined **)(local_2d0 + 8) != (undefined *)0x0) {
puVar30 = *(undefined **)(local_2d0 + 8);
do {
if (*(uint *)(puVar30 + 0x20) < *puVar8) {
puVar12 = *(undefined **)(puVar30 + 0x18);
}
else {
puVar12 = *(undefined **)(puVar30 + 0x10);
puVar11 = puVar30;
}
puVar30 = puVar12;
} while (puVar12 != (undefined *)0x0);
}
if ((puVar11 == local_2d0) || (*puVar8 < *(uint *)(puVar11 + 0x20))) {
local_330 = (undefined *)((ulonglong)local_330 & 0xffffffff00000000 | (ulonglong)*puVar8);
local_328 = 0;
local_360 = puVar11;
FUN_140055c60(local_2d8,&local_378,&local_360,&local_330);
puVar11 = local_378;
}
*(uint **)(puVar11 + 0x28) = puVar8;
uStack164 = 0;
uStack156 = 0;
uStack148 = 0;
local_b8 = *puVar8;
uStack180 = puVar8[7];
uStack144 = 0;
lVar9 = -(longlong)puVar8;
puVar8 = puVar8 + 3;
lVar23 = 2;
do {
puVar1 = puVar8 + 1;
*(uint *)((longlong)&uStack180 + lVar9 + (longlong)puVar1) = puVar8[-2];
*(uint *)((longlong)&uStack176 + lVar9 + 4 + (longlong)puVar1) = *puVar8;
*(uint *)((longlong)&uStack164 + lVar9 + (longlong)puVar1) = puVar8[2];
lVar23 = lVar23 + -1;
puVar8 = puVar1;
} while (lVar23 != 0);
uStack176 = 0;
puVar8 = (uint *)FUN_1403d2880(local_350);
*puVar8 = local_b8;
puVar8[1] = uStack180;
puVar8[2] = (uint)uStack176;
puVar8[3] = uStack176._4_4_;
puVar8[4] = uVar33;
puVar8[5] = (uint)uStack164;
puVar8[6] = uStack164._4_4_;
puVar8[7] = (uint)uStack156;
puVar8[8] = uStack156._4_4_;
puVar8[9] = uStack148;
puVar8[10] = (uint)uStack144;
puVar8[0xb] = uStack144._4_4_;
}
}
uVar28 = uVar28 + 1;
}
if (*(longlong *)(lVar14 + 0x78) == 0) {
uVar28 = 0x17;
}
else {
uVar28 = *(uint *)(*(longlong *)(lVar14 + 0x78) + 0xdc);
}
local_370 = uVar28;
if ((DAT_140dc2338 & 1) != 0) goto LAB_1403ce86a;
DAT_140dc2338 = DAT_140dc2338 | 1;
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c638ac == 0) && (iVar6 = FUN_1401fffc0(), -1 < iVar6)) {
lVar23 = (**(code **)(*DAT_140c64c58 + 0x18))();
goto LAB_1403ce845;
}
}
else {
lVar23 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408);
LAB_1403ce845:
if (lVar23 != 0) {
_DAT_140dc233c = *(float *)(lVar23 + 0x1c);
goto LAB_1403ce86a;
}
}
_DAT_140dc233c = 0.5;
LAB_1403ce86a:
uVar25 = 0;
local_368 = (int *)((ulonglong)local_368 & 0xffffffff00000000 | (ulonglong)(uint)local_368);
uVar33 = 0;
if (DAT_140c63838 == (code *)0x0) {
uVar5 = uVar33;
if ((_DAT_140c65444 == 0) && (iVar6 = FUN_1401fd540(), -1 < iVar6)) {
uVar5 = (**(code **)(*DAT_140c653a0 + 0x28))();
}
}
else {
uVar5 = (*DAT_140c63838)(&PTR_u_EldanAugmentation_140a6a1d8);
}
if ((uint)local_368 == uVar5) {
puVar11 = *(undefined **)(local_348 + 0x10);
while (puVar11 != local_348) {
puVar8 = (uint *)(puVar11 + 0x48);
uVar18 = uVar25;
uVar26 = 3;
do {
uVar28 = (uint)uVar26;
if (uVar28 == 0) break;
uVar33 = puVar8[-4];
uVar24 = uVar26;
if (uVar33 != 0) {
puVar30 = *(undefined **)(local_348 + 8);
puVar12 = local_348;
if (*(undefined **)(local_348 + 8) == (undefined *)0x0) {
LAB_1403cef21:
local_320 = local_348;
ppuVar13 = &local_320;
}
else {
do {
if (*(uint *)(puVar30 + 0x20) < uVar33) {
puVar20 = *(undefined **)(puVar30 + 0x18);
}
else {
puVar20 = *(undefined **)(puVar30 + 0x10);
puVar12 = puVar30;
}
puVar30 = puVar20;
} while (puVar20 != (undefined *)0x0);
if ((puVar12 == local_348) || (uVar33 < *(uint *)(puVar12 + 0x20))) goto LAB_1403cef21;
local_330 = puVar12;
ppuVar13 = &local_330;
}
puVar30 = *ppuVar13;
uVar24 = uVar25;
if (puVar30 != local_348) {
if ((uint)(longlong)*(float *)(puVar30 + 0x30) < *puVar8) {
if ((puVar8[-2] <= (uint)(longlong)*(float *)(puVar30 + 0x2c)) &&
(uVar24 = uVar26, 1 < uVar28)) {
uVar24 = 1;
}
}
else {
uVar24 = uVar26;
if (2 < uVar28) {
uVar24 = 2;
}
}
}
}
uVar28 = (uint)uVar24;
uVar33 = (int)uVar18 + 1;
uVar18 = (ulonglong)uVar33;
puVar8 = puVar8 + 1;
uVar26 = uVar24;
} while (uVar33 < 2);
*(uint *)(puVar11 + 0x50) = uVar28;
puVar30 = *(undefined **)(puVar11 + 0x18);
if (puVar30 == (undefined *)0x0) {
puVar30 = *(undefined **)(puVar11 + 8);
if (puVar11 == *(undefined **)(puVar30 + 0x18)) {
do {
puVar11 = puVar30;
puVar30 = *(undefined **)(puVar11 + 8);
} while (puVar11 == *(undefined **)(puVar30 + 0x18));
}
if (*(undefined **)(puVar11 + 0x18) != puVar30) {
puVar11 = puVar30;
}
}
else {
for (puVar12 = *(undefined **)(puVar30 + 0x10); puVar11 = puVar30,
        puVar12 != (undefined *)0x0; puVar12 = *(undefined **)(puVar12 + 0x10)) {
puVar30 = puVar12;
}
}
}
puVar11 = *(undefined **)(local_2f0 + 0x10);
if (puVar11 != local_2f0) {
do {
if ((*(int *)(puVar11 + 0x2c) == 1) &&
(lVar14 = FUN_1403d2880(local_350,puVar11 + 0x50),
        *(uint *)(puVar11 + 0x54) < *(uint *)(lVar14 + 0x2c) ||
*(uint *)(puVar11 + 0x54) == *(uint *)(lVar14 + 0x2c))) {
*(undefined4 *)(puVar11 + 0x2c) = 2;
}
puVar30 = *(undefined **)(puVar11 + 0x18);
if (puVar30 == (undefined *)0x0) {
puVar30 = *(undefined **)(puVar11 + 8);
if (puVar11 == *(undefined **)(puVar30 + 0x18)) {
do {
puVar11 = puVar30;
puVar30 = *(undefined **)(puVar11 + 8);
} while (puVar11 == *(undefined **)(puVar30 + 0x18));
}
if (*(undefined **)(puVar11 + 0x18) != puVar30) {
puVar11 = puVar30;
}
}
else {
for (puVar12 = *(undefined **)(puVar30 + 0x10); puVar11 = puVar30,
        puVar12 != (undefined *)0x0; puVar12 = *(undefined **)(puVar12 + 0x10)) {
puVar30 = puVar12;
}
}
} while (puVar11 != local_2f0);
}
lVar23 = local_358;
local_68[3] = 1;
lVar14 = *(longlong *)(local_358 + 0x10);
local_68[0] = 4;
local_68[1] = 2;
local_68[2] = 6;
local_58 = 5;
local_54 = 3;
local_2b8 = &PTR_FUN_140b569f0;
local_2a0 = 1;
local_2a8 = lVar14;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_14005c1b0(lVar14,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
local_2b0 = FUN_1400578c0(lVar14);
uVar35 = 0;
uVar36 = 0;
local_370 = 0;
do {
puVar11 = *(undefined **)(lVar23 + 0x10);
local_298 = &PTR_FUN_140b569f0;
local_280 = 1;
local_330 = puVar11;
local_288 = puVar11;
if (*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x78)) {
FUN_14005e2c0(puVar11);
}
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar15 = FUN_14005c1b0(puVar11,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
iVar7 = FUN_1400578c0(puVar11);
local_290 = iVar7;
piVar16 = (int *)FUN_1403d2880(local_350,local_68 + uVar25);
lVar14 = *(longlong *)(*(longlong *)(puVar11 + 0x20) + 0xa0);
iVar6 = *piVar16;
if (iVar7 - 1U < *(uint *)(lVar14 + 0x38)) {
puVar27 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar7;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar27 = *(undefined8 **)(lVar14 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar27 = (undefined8 *)
        (*(longlong *)(lVar14 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar27 + 3) == 3) && ((double)local_378 == (double)puVar27[2]))
goto LAB_1403cf201;
puVar27 = (undefined8 *)puVar27[4];
} while (puVar27 != (undefined8 *)0x0);
puVar27 = &DAT_140a12138;
}
LAB_1403cf201:
puVar21 = *(undefined8 **)(puVar11 + 0x10);
*puVar21 = *puVar27;
*(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
local_368 = piVar16;
lVar14 = FUN_14018f0e0(&local_b8,&DAT_140af66d8);
lVar14 = *(longlong *)(lVar14 + 8);
if (lVar14 == 0) {
*(undefined4 *)(*(longlong *)(puVar11 + 0x10) + 8) = 0;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
}
else {
lVar23 = -1;
do {
lVar23 = lVar23 + 1;
} while (*(char *)(lVar14 + lVar23) != '\0');
if (*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x78)) {
FUN_14005e2c0(puVar11);
}
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar15 = FUN_140062650(puVar11,lVar14,lVar23);
*(undefined4 *)(puVar27 + 1) = 4;
*puVar27 = uVar15;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
piVar16 = local_368;
}
if (uStack176 != 0) {
FUN_14018b900(uStack176,0);
}
pdVar4 = *(double **)(puVar11 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*pdVar4 = (double)iVar6;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
uVar15 = FUN_1400580e0(puVar11,0xfffffffd);
FUN_14005ea50(puVar11,uVar15,*(longlong *)(puVar11 + 0x10) + -0x20,
*(longlong *)(puVar11 + 0x10) + -0x10);
*(undefined **)(puVar11 + 0x10) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar11 + 0x10);
uVar15 = FUN_14034bdd0();
lVar14 = *(longlong *)(*(longlong *)(puVar11 + 0x20) + 0xa0);
if (iVar7 - 1U < *(uint *)(lVar14 + 0x38)) {
puVar27 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar7;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar27 = *(undefined8 **)(lVar14 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar27 = (undefined8 *)
        (*(longlong *)(lVar14 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar27 + 3) == 3) && ((double)local_378 == (double)puVar27[2]))
goto LAB_1403cf38d;
puVar27 = (undefined8 *)puVar27[4];
} while (puVar27 != (undefined8 *)0x0);
puVar27 = &DAT_140a12138;
}
LAB_1403cf38d:
puVar21 = *(undefined8 **)(puVar11 + 0x10);
*puVar21 = *puVar27;
*(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
FUN_1400f0870(puVar11,puVar27,L"strName",uVar15);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + -0x10;
fVar34 = (float)piVar16[4];
lVar14 = *(longlong *)(*(longlong *)(puVar11 + 0x20) + 0xa0);
puVar27 = *(undefined8 **)(puVar11 + 0x10);
if (iVar7 - 1U < *(uint *)(lVar14 + 0x38)) {
puVar21 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar7;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar21 = *(undefined8 **)(lVar14 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar21 = (undefined8 *)
        (*(longlong *)(lVar14 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar21 + 3) == 3) && ((double)local_378 == (double)puVar21[2]))
goto LAB_1403cf44d;
puVar21 = (undefined8 *)puVar21[4];
} while (puVar21 != (undefined8 *)0x0);
puVar21 = &DAT_140a12138;
}
LAB_1403cf44d:
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
lVar14 = FUN_14018f0e0(&local_b8,L"fPowerInCategory");
lVar14 = *(longlong *)(lVar14 + 8);
if (lVar14 == 0) {
*(undefined4 *)(*(longlong *)(puVar11 + 0x10) + 8) = 0;
}
else {
lVar23 = -1;
do {
lVar23 = lVar23 + 1;
} while (*(char *)(lVar14 + lVar23) != '\0');
if (*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x78)) {
FUN_14005e2c0(puVar11);
}
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar15 = FUN_140062650(puVar11,lVar14,lVar23);
*(undefined4 *)(puVar27 + 1) = 4;
*puVar27 = uVar15;
piVar16 = local_368;
}
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
if (uStack176 != 0) {
FUN_14018b900(uStack176,0);
}
pdVar4 = *(double **)(puVar11 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*pdVar4 = (double)fVar34;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
uVar15 = FUN_1400580e0(puVar11,0xfffffffd);
FUN_14005ea50(puVar11,uVar15,*(longlong *)(puVar11 + 0x10) + -0x20,
*(longlong *)(puVar11 + 0x10) + -0x10);
*(undefined **)(puVar11 + 0x10) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar11 + 0x10);
lVar14 = *(longlong *)(*(longlong *)(puVar11 + 0x20) + 0xa0);
iVar6 = piVar16[0xb];
puVar27 = *(undefined8 **)(puVar11 + 0x10);
if (iVar7 - 1U < *(uint *)(lVar14 + 0x38)) {
puVar21 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar7;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar21 = *(undefined8 **)(lVar14 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar21 = (undefined8 *)
        (*(longlong *)(lVar14 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar21 + 3) == 3) && ((double)local_378 == (double)puVar21[2]))
goto LAB_1403cf5c4;
puVar21 = (undefined8 *)puVar21[4];
} while (puVar21 != (undefined8 *)0x0);
puVar21 = &DAT_140a12138;
}
LAB_1403cf5c4:
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
lVar14 = FUN_14018f0e0(&local_b8,L"nHighestTierUnlocked");
lVar14 = *(longlong *)(lVar14 + 8);
if (lVar14 == 0) {
*(undefined4 *)(*(longlong *)(puVar11 + 0x10) + 8) = 0;
}
else {
lVar23 = -1;
do {
lVar23 = lVar23 + 1;
} while (*(char *)(lVar14 + lVar23) != '\0');
if (*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x78)) {
FUN_14005e2c0(puVar11);
}
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar15 = FUN_140062650(puVar11,lVar14,lVar23);
*(undefined4 *)(puVar27 + 1) = 4;
*puVar27 = uVar15;
piVar16 = local_368;
}
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
if (uStack176 != 0) {
FUN_14018b900(uStack176,0);
}
pdVar4 = *(double **)(puVar11 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*pdVar4 = (double)(iVar6 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
uVar15 = FUN_1400580e0(puVar11,0xfffffffd);
FUN_14005ea50(puVar11,uVar15,*(longlong *)(puVar11 + 0x10) + -0x20,
*(longlong *)(puVar11 + 0x10) + -0x10);
*(undefined **)(puVar11 + 0x10) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar11 + 0x10);
lVar14 = *(longlong *)(*(longlong *)(puVar11 + 0x20) + 0xa0);
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar28 = (piVar16[6] != 0) + 1;
if (iVar7 - 1U < *(uint *)(lVar14 + 0x38)) {
puVar21 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar7;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar21 = *(undefined8 **)(lVar14 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar21 = (undefined8 *)
        (*(longlong *)(lVar14 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar21 + 3) == 3) && ((double)local_378 == (double)puVar21[2]))
goto LAB_1403cf740;
puVar21 = (undefined8 *)puVar21[4];
} while (puVar21 != (undefined8 *)0x0);
puVar21 = &DAT_140a12138;
}
LAB_1403cf740:
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
lVar14 = FUN_14018f0e0(&local_b8,L"nCategoriesToUnlock");
lVar14 = *(longlong *)(lVar14 + 8);
if (lVar14 == 0) {
*(undefined4 *)(*(longlong *)(puVar11 + 0x10) + 8) = 0;
}
else {
lVar23 = -1;
do {
lVar23 = lVar23 + 1;
} while (*(char *)(lVar14 + lVar23) != '\0');
if (*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(puVar11 + 0x20) + 0x78)) {
FUN_14005e2c0(puVar11);
}
puVar27 = *(undefined8 **)(puVar11 + 0x10);
uVar15 = FUN_140062650(puVar11,lVar14,lVar23);
*(undefined4 *)(puVar27 + 1) = 4;
*puVar27 = uVar15;
}
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
if (uStack176 != 0) {
FUN_14018b900(uStack176,0);
}
pdVar4 = *(double **)(puVar11 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*pdVar4 = (double)uVar28;
*(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 0x10;
uVar15 = FUN_1400580e0(puVar11,0xfffffffd);
FUN_14005ea50(puVar11,uVar15,*(longlong *)(puVar11 + 0x10) + -0x20,
*(longlong *)(puVar11 + 0x10) + -0x10);
lVar9 = local_358;
*(undefined **)(puVar11 + 0x10) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar11 + 0x10);
lVar14 = *(longlong *)(local_358 + 0x10);
local_300 = 1;
local_318 = &PTR_FUN_140b569f0;
local_308 = lVar14;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_14005c1b0(lVar14,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
local_310 = FUN_1400578c0(lVar14);
lVar23 = lVar9;
if (uVar28 != 0) {
puVar30 = (undefined *)(ulonglong)uVar28;
piVar16 = local_368 + 7;
do {
lVar14 = *(longlong *)(lVar9 + 0x10);
local_360 = puVar30;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_14005c1b0(lVar14,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
iVar6 = FUN_1400578c0(lVar14);
local_368._0_4_ = piVar16[-2];
lVar23 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + 0xa0);
local_368 = (int *)((ulonglong)local_368 & 0xffffffff00000000 | (ulonglong)(uint)local_368
);
if (iVar6 - 1U < *(uint *)(lVar23 + 0x38)) {
puVar27 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar23 + 0x18));
}
else {
local_378 = (undefined *)(double)iVar6;
if ((double)local_378 == (double)CONCAT44(uVar36,uVar35)) {
puVar27 = *(undefined8 **)(lVar23 + 0x20);
}
else {
local_378._4_4_ = (int)((ulonglong)local_378 >> 0x20);
puVar27 = (undefined8 *)
        (*(longlong *)(lVar23 + 0x20) +
         ((longlong)(ulonglong)(uint)(local_378._4_4_ + (int)local_378) %
          (longlong)((1 << (*(byte *)(lVar23 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
}
do {
if ((*(int *)(puVar27 + 3) == 3) && ((double)local_378 == (double)puVar27[2]))
goto LAB_1403cf97d;
puVar27 = (undefined8 *)puVar27[4];
} while (puVar27 != (undefined8 *)0x0);
puVar27 = &DAT_140a12138;
}
LAB_1403cf97d:
puVar21 = *(undefined8 **)(lVar14 + 0x10);
*puVar21 = *puVar27;
*(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar27 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
lVar23 = FUN_14018f0e0(&local_b8,L"nUnlockCategoryId");
lVar23 = *(longlong *)(lVar23 + 8);
if (lVar23 == 0) {
*(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 8) = 0;
}
else {
lVar29 = -1;
do {
lVar29 = lVar29 + 1;
} while (*(char *)(lVar23 + lVar29) != '\0');
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_140062650(lVar14,lVar23,lVar29);
*(undefined4 *)(puVar27 + 1) = 4;
*puVar27 = uVar15;
puVar30 = local_360;
}
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
if (uStack176 != 0) {
FUN_14018b900(uStack176,0);
}
pdVar4 = *(double **)(lVar14 + 0x10);
*(undefined4 *)(pdVar4 + 1) = 3;
*pdVar4 = (double)(uint)local_368;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
uVar15 = FUN_1400580e0(lVar14,0xfffffffd);
FUN_14005ea50(lVar14,uVar15,*(longlong *)(lVar14 + 0x10) + -0x20,
*(longlong *)(lVar14 + 0x10) + -0x10);
*(longlong *)(lVar14 + 0x10) =
(longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar14 + 0x10));
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),iVar6);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar25 = (ulonglong)(uint)piVar16[2];
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),iVar6);
uVar15 = *puVar21;
*puVar27 = uVar15;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14,uVar15,L"nTier3Amount",uVar25 & 0xffffffff);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
FUN_1400fb1d0(&local_318);
FUN_1400579e0(lVar14);
piVar16 = piVar16 + 1;
puVar30 = puVar30 + -1;
puVar11 = local_330;
lVar14 = local_308;
lVar23 = local_358;
local_360 = puVar30;
} while (puVar30 != (undefined *)0x0);
}
FUN_1400fb2a0(&local_298);
FUN_1400fb1d0(&local_2b8);
if (lVar14 != 0) {
FUN_1400579e0(lVar14);
}
FUN_1400579e0(puVar11);
local_370 = local_370 + 1;
uVar25 = (ulonglong)local_370;
if (5 < local_370) {
FUN_1400fb2a0(lVar23,L"tCategories",local_2b0);
lVar14 = *(longlong *)(lVar23 + 0x10);
local_318 = &PTR_FUN_140b569f0;
local_300 = 1;
local_308 = lVar14;
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_14005c1b0(lVar14,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
local_310 = FUN_1400578c0(lVar14);
puVar11 = *(undefined **)(local_2f0 + 0x10);
if (puVar11 != local_2f0) {
do {
lVar14 = *(longlong *)(lVar23 + 0x10);
if (*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x70) <=
*(ulonglong *)(*(longlong *)(lVar14 + 0x20) + 0x78)) {
FUN_14005e2c0(lVar14);
}
puVar27 = *(undefined8 **)(lVar14 + 0x10);
uVar15 = FUN_14005c1b0(lVar14,0,0);
*(undefined4 *)(puVar27 + 1) = 5;
*puVar27 = uVar15;
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
uVar35 = FUN_1400578c0(lVar14);
uVar25 = (ulonglong)*(uint *)(puVar11 + 0x28);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
puVar27 = *(undefined8 **)(lVar14 + 0x10);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14,puVar27,&DAT_140af65a8,uVar25 & 0xffffffff);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f0630(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f0630(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f0630(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
puVar27 = *(undefined8 **)(lVar14 + 0x10);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0));
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f06f0(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
FUN_1400b6f30();
local_278 = &PTR_FUN_140b69230;
local_1b8 = extraout_XMM0 & (undefined  [16])0x0;
local_1a8 = (undefined2 *)0x0;
puVar17 = (undefined2 *)FUN_14018b280(0x10);
local_1b8 = CONCAT88(puVar17,puVar17);
local_1a8 = puVar17 + 8;
if (puVar17 != (undefined2 *)0x0) {
*puVar17 = 0;
}
psVar10 = *(short **)(puVar11 + 0x60);
if (psVar10 == (short *)0x0) {
if (local_268 != local_260) {
*local_268 = 0;
local_260 = local_268;
}
}
else {
sVar2 = *psVar10;
lVar9 = 0;
while (sVar2 != 0) {
lVar9 = lVar9 + 1;
sVar2 = psVar10[lVar9];
}
FUN_14001c480(local_270,psVar10,psVar10 + lVar9);
}
lVar9 = FUN_1400b7660(&local_278);
uVar15 = *(undefined8 *)(lVar9 + 8);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
puVar27 = *(undefined8 **)(lVar14 + 0x10);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f0870(lVar14,puVar27,L"strTitle",uVar15);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
FUN_1404dde90(local_198);
psVar10 = *(short **)(puVar11 + 0x68);
if (psVar10 == (short *)0x0) {
if (local_188 != local_180) {
*local_188 = 0;
local_180 = local_188;
}
}
else {
sVar2 = *psVar10;
lVar9 = 0;
while (sVar2 != 0) {
lVar9 = lVar9 + 1;
sVar2 = psVar10[lVar9];
}
FUN_14001c480(local_190,psVar10,psVar10 + lVar9);
}
FUN_1400b7660(local_198);
puVar21 = (undefined8 *)
FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar35);
puVar27 = *(undefined8 **)(lVar14 + 0x10);
*puVar27 = *puVar21;
*(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar21 + 1);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
FUN_1400f0870(lVar14);
*(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + -0x10;
FUN_1400fb1d0(&local_318);
if (local_d8 != 0) {
FUN_14018b900();
}
FUN_1400b7390(local_198);
if (local_1b8._0_8_ != 0) {
FUN_14018b900();
}
FUN_1400b7390(&local_278);
FUN_1400579e0(lVar14);
puVar30 = *(undefined **)(puVar11 + 0x18);
if (puVar30 == (undefined *)0x0) {
puVar30 = *(undefined **)(puVar11 + 8);
if (puVar11 == *(undefined **)(puVar30 + 0x18)) {
do {
puVar11 = puVar30;
puVar30 = *(undefined **)(puVar11 + 8);
} while (puVar11 == *(undefined **)(puVar30 + 0x18));
}
if (*(undefined **)(puVar11 + 0x18) != puVar30) {
puVar11 = puVar30;
}
}
else {
for (puVar12 = *(undefined **)(puVar30 + 0x10); puVar11 = puVar30,
        puVar12 != (undefined *)0x0; puVar12 = *(undefined **)(puVar12 + 0x10)) {
puVar30 = puVar12;
}
}
lVar14 = local_308;
} while (puVar11 != local_2f0);
}
FUN_1400fb2a0(lVar23,L"tAugments",local_310);
if (lVar14 != 0) {
FUN_1400579e0(lVar14);
}
if (local_2a8 != 0) {
FUN_1400579e0();
}
FUN_140008410(local_2d8);
FUN_14018b900(local_2d0,0);
FUN_140008410(local_350);
FUN_14018b900(local_348,0);
FUN_140008410(local_2f8);
FUN_14018b900(local_2f0,0);
FUN_1407db4f0(local_50 ^ (ulonglong)auStack920);
return;
}
} while( true );
}
if (DAT_140c63848 != (code *)0x0) {
puVar8 = (uint *)(*DAT_140c63848)();
LAB_1403ce906:
if ((puVar8 == (uint *)0x0) || (puVar8[3] != uVar28)) goto LAB_1403cee83;
uVar28 = *puVar8;
if ((param_1 < 4) && (*(ulonglong *)(lVar14 + 0x6eb8) != 0)) {
uVar18 = uVar25;
do {
if (*(ushort *)(*(longlong *)(lVar14 + 0x6eb0) + uVar18 * 2) == uVar28) {
uVar18 = *(ulonglong *)(lVar14 + 0x6e78 + (ulonglong)param_1 * 0x10);
if (uVar18 == 0) goto LAB_1403cea60;
puVar19 = *(ushort **)(lVar14 + ((ulonglong)param_1 + 0x6e7) * 0x10);
uVar26 = uVar25;
goto LAB_1403cea41;
}
uVar18 = (ulonglong)((int)uVar18 + 1);
} while (uVar18 < *(ulonglong *)(lVar14 + 0x6eb8));
}
LAB_1403ce958:
uStack176._0_4_ = 0;
goto LAB_1403ce95f;
}
if ((_DAT_140c65444 == 0) && (iVar6 = FUN_1401fd540(), -1 < iVar6)) {
puVar8 = (uint *)(**(code **)(*DAT_140c653a0 + 0x20))();
goto LAB_1403ce906;
}
goto LAB_1403cee83;
while( true ) {
uVar26 = uVar26 + 1;
puVar19 = puVar19 + 1;
if (uVar18 <= uVar26) break;
LAB_1403cea41:
if (*puVar19 == uVar28) goto LAB_1403ce958;
}
LAB_1403cea60:
uStack176._0_4_ = 1;
LAB_1403ce95f:
uStack176 = CONCAT44(puVar8[4],(uint)uStack176);
local_a8 = puVar8[7];
uVar5 = 1;
if ((local_a8 != 0) && (uVar5 = uVar33, *(uint *)(lVar14 + 0x6df0) != 0)) {
puVar19 = (ushort *)(lVar14 + 0x6df4);
uVar18 = uVar25;
do {
uVar5 = 1;
if (*puVar19 == uVar28) break;
uVar22 = (int)uVar18 + 1;
uVar18 = (ulonglong)uVar22;
puVar19 = puVar19 + 1;
uVar5 = uVar33;
} while (uVar22 < *(uint *)(lVar14 + 0x6df0));
}
uVar22 = puVar8[1];
uVar3 = puVar8[5];
uStack148 = puVar8[2];
uStack164 = CONCAT44(uVar3,uVar5);
uStack144 = *(undefined8 *)(puVar8 + 8);
local_88 = puVar8[6];
if (uVar3 == 0) {
uStack156 = CONCAT44(uVar22,1);
}
else {
if (param_1 < 4) {
uVar18 = *(ulonglong *)(lVar14 + 0x6eb8);
if (((uint)param_1 == *(uint *)(lVar14 + 0x6dec)) && (uVar18 != 0)) {
uVar33 = 1;
}
uVar26 = *(ulonglong *)(lVar14 + 0x6e78 + (ulonglong)param_1 * 0x10);
if (uVar26 != 0) {
puVar19 = *(ushort **)(lVar14 + ((ulonglong)param_1 + 0x6e7) * 0x10);
uVar24 = uVar25;
do {
if (*puVar19 == uVar3) goto LAB_1403ceaec;
uVar24 = uVar24 + 1;
puVar19 = puVar19 + 1;
} while (uVar24 < uVar26);
}
if ((uVar33 != 0) && (uVar18 != 0)) {
puVar19 = *(ushort **)(lVar14 + 0x6eb0);
do {
if (*puVar19 == uVar3) goto LAB_1403ceaec;
uVar25 = uVar25 + 1;
puVar19 = puVar19 + 1;
} while (uVar25 < uVar18);
}
}
uStack156 = (ulonglong)uVar22 << 0x20;
}
LAB_1403ceb06:
local_b8 = uVar28;
psVar10 = (short *)FUN_14034bdd0();
uStack128 = psVar10;
local_78 = (short *)FUN_14034bdd0();
uVar33 = puVar8[6];
lVar23 = *(longlong *)(lVar14 + 0x78);
if (uVar33 != 0) {
if (lVar23 == 0) {
LAB_1403cebc8:
lVar23 = FUN_1407a0fd0();
if (lVar23 == 0) goto LAB_1403cec26;
}
else {
if (*(longlong *)(DAT_140c65898 + 0x78) == lVar23) {
bVar31 = true;
}
else {
bVar31 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar23;
}
lVar23 = 0;
if (bVar31) {
lVar23 = DAT_140c65898;
}
if (lVar23 == 0) goto LAB_1403cebc8;
puVar11 = *(undefined **)(lVar23 + 0x7d18);
puVar12 = puVar11;
puVar30 = *(undefined **)(puVar11 + 8);
while (puVar30 != (undefined *)0x0) {
if (*(uint *)(puVar30 + 0x20) < uVar33) {
puVar30 = *(undefined **)(puVar30 + 0x18);
}
else {
puVar12 = puVar30;
puVar30 = *(undefined **)(puVar30 + 0x10);
}
}
if ((puVar12 == puVar11) || (uVar33 < *(uint *)(puVar12 + 0x20))) {
local_378 = puVar11;
ppuVar13 = (undefined **)&local_378;
}
else {
local_360 = puVar12;
ppuVar13 = &local_360;
}
if ((*ppuVar13 == puVar11) || (lVar23 = *(longlong *)(*ppuVar13 + 0x28), lVar23 == 0))
goto LAB_1403cebc8;
}
if (*(longlong *)(lVar23 + 8) != 0) {
if ((psVar10 == (short *)0x0) || (*psVar10 == 0)) {
uStack128 = (short *)FUN_14034bdd0();
}
if ((local_78 == (short *)0x0) || (*local_78 == 0)) {
local_78 = (short *)FUN_14034bdd0();
}
}
}
LAB_1403cec26:
if (param_1 < 4) {
uVar25 = *(ulonglong *)(lVar14 + 0x6eb8);
if (((uint)param_1 == *(uint *)(lVar14 + 0x6dec)) && (uVar25 != 0)) {
bVar31 = true;
}
else {
bVar31 = false;
}
uVar26 = 0;
uVar18 = *(ulonglong *)(lVar14 + 0x6e78 + (ulonglong)param_1 * 0x10);
if (uVar18 != 0) {
puVar19 = *(ushort **)(lVar14 + ((ulonglong)param_1 + 0x6e7) * 0x10);
uVar24 = uVar26;
do {
if (*puVar19 == uVar28) goto LAB_1403cecde;
uVar24 = uVar24 + 1;
puVar19 = puVar19 + 1;
} while (uVar24 < uVar18);
}
if ((bVar31) && (uVar25 != 0)) {
puVar19 = *(ushort **)(lVar14 + 0x6eb0);
do {
if (*puVar19 == uVar28) goto LAB_1403cecde;
uVar26 = uVar26 + 1;
puVar19 = puVar19 + 1;
} while (uVar26 < uVar25);
uStack180 = (uint)(uVar5 != 0);
goto LAB_1403cee35;
}
}
uStack180 = (uint)(uVar5 != 0);
LAB_1403cee35:
puVar8 = (uint *)FUN_1403d2790(local_2f8);
*puVar8 = local_b8;
puVar8[1] = uStack180;
puVar8[2] = (uint)uStack176;
puVar8[3] = uStack176._4_4_;
puVar8[4] = local_a8;
puVar8[5] = (uint)uStack164;
puVar8[6] = uStack164._4_4_;
puVar8[7] = (uint)uStack156;
puVar8[8] = uStack156._4_4_;
puVar8[9] = uStack148;
puVar8[10] = (uint)uStack144;
puVar8[0xb] = uStack144._4_4_;
puVar8[0xc] = local_88;
puVar8[0xd] = uStack132;
puVar8[0xe] = (uint)uStack128;
puVar8[0xf] = uStack128._4_4_;
*(short **)(puVar8 + 0x10) = local_78;
LAB_1403cee83:
local_368._0_4_ = (uint)local_368 + 1;
uVar28 = local_370;
goto LAB_1403ce86a;
LAB_1403ceaec:
uStack156 = CONCAT44(uVar22,1);
goto LAB_1403ceb06;
LAB_1403cecde:
uStack180 = 3;
puVar11 = *(undefined **)(local_2d0 + 8);
puVar30 = local_2d0;
if (puVar11 == (undefined *)0x0) {
LAB_1403ced2d:
local_330 = local_2d0;
ppuVar13 = &local_330;
}
else {
do {
if (*(uint *)(puVar11 + 0x20) < puVar8[8]) {
puVar12 = *(undefined **)(puVar11 + 0x18);
}
else {
puVar12 = *(undefined **)(puVar11 + 0x10);
puVar30 = puVar11;
}
puVar11 = puVar12;
} while (puVar12 != (undefined *)0x0);
if ((puVar30 == local_2d0) || (puVar8[8] < *(uint *)(puVar30 + 0x20))) goto LAB_1403ced2d;
local_320 = puVar30;
ppuVar13 = &local_320;
}
if (*ppuVar13 != local_2d0) {
lVar23 = *(longlong *)(*ppuVar13 + 0x28);
uVar28 = puVar8[9];
fVar34 = (float)(ulonglong)puVar8[4];
piVar16 = (int *)(lVar23 + 8);
lVar23 = lVar23 + 4;
if (*piVar16 == 0) {
lVar9 = FUN_1403d2880(local_350,lVar23);
uVar28 = 0;
fVar32 = fVar34;
}
else {
lVar9 = FUN_1403d2880(local_350,lVar23);
*(float *)(lVar9 + 0x10) = fVar34 * _DAT_140dc233c + *(float *)(lVar9 + 0x10);
lVar9 = FUN_1403d2880(local_350,piVar16);
fVar32 = fVar34 * _DAT_140dc233c;
}
uVar33 = 1;
if (1 < (int)uVar28) {
uVar33 = uVar28;
}
*(float *)(lVar9 + 0x10) = fVar32 + *(float *)(lVar9 + 0x10);
for (; uVar33 < 3; uVar33 = uVar33 + 1) {
if (*piVar16 == 0) {
lVar9 = FUN_1403d2880(local_350,lVar23);
*(float *)(lVar9 + 8 + (ulonglong)(uVar33 - 1) * 4) =
fVar34 + *(float *)(lVar9 + 8 + (ulonglong)(uVar33 - 1) * 4);
}
else {
uVar25 = (ulonglong)(uVar33 - 1);
lVar9 = FUN_1403d2880(local_350,lVar23);
*(float *)(lVar9 + 8 + uVar25 * 4) =
fVar34 * _DAT_140dc233c + *(float *)(lVar9 + 8 + uVar25 * 4);
lVar9 = FUN_1403d2880(local_350,piVar16);
*(float *)(lVar9 + 8 + uVar25 * 4) =
fVar34 * _DAT_140dc233c + *(float *)(lVar9 + 8 + uVar25 * 4);
}
}
}
goto LAB_1403cee35;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1403d02a0(longlong param_1)

{
int *piVar1;
uint *puVar2;
uint uVar3;
longlong lVar4;
char cVar5;
int iVar6;
int iVar7;
undefined8 *puVar8;
undefined8 *puVar9;
undefined8 *puVar10;
uint *puVar11;
longlong lVar12;
undefined *puVar13;
undefined *puVar14;
undefined *puVar15;
longlong lVar16;
float *pfVar17;
longlong lVar18;
undefined *puVar19;
undefined **ppuVar20;
undefined *puVar21;
ushort *puVar22;
uint uVar23;
undefined8 uVar24;
ulonglong uVar25;
ulonglong uVar26;
undefined *puVar27;
int iVar28;
float fVar29;
undefined *local_res8;
undefined *local_res10;
undefined *local_res18;
undefined8 *local_res20;
undefined *local_1b8;
uint local_1b0;
undefined4 uStack428;
undefined local_1a8 [8];
undefined *local_1a0;
undefined8 local_198;
undefined *local_188;
undefined *local_180;
undefined local_178 [8];
undefined *local_170;
longlong local_168;
undefined *local_158;
undefined8 local_150;
undefined local_148 [8];
undefined *local_140;
longlong local_138;
ulonglong local_128;
undefined local_120 [8];
undefined *local_118;
undefined8 local_110;
undefined local_100 [8];
undefined *local_f8;
undefined8 local_f0;
uint local_e0;
undefined4 local_dc;
undefined local_d8 [8];
undefined *local_d0;
undefined8 local_c8;
undefined local_b8 [8];
undefined *local_b0;
undefined8 local_a8;
undefined local_98 [32];
undefined local_78 [16];
undefined local_68 [40];

if (*(longlong *)(param_1 + 0x6eb8) == 0) {
return 1;
}
if (*(int *)(param_1 + 0x6e60) < 1) {
return 0x1f;
}
iVar28 = 0;
uVar26 = *(ulonglong *)(param_1 + 8 + ((ulonglong)*(uint *)(param_1 + 0x6dec) + 0x6e7) * 0x10);
local_128 = uVar26;
if (uVar26 == 0) {
puVar9 = (undefined8 *)0x0;
}
else {
puVar8 = (undefined8 *)FUN_14018b280(uVar26 * 2 + 0x10,0);
if (puVar8 == (undefined8 *)0x0) {
puVar9 = (undefined8 *)&DAT_00000010;
}
else {
puVar8[1] = uVar26;
puVar9 = puVar8 + 2;
*puVar8 = &PTR_LAB_140b55060;
}
}
local_res20 = puVar9;
FUN_1407db590(puVar9);
puVar8 = local_res20;
if (*(longlong *)(param_1 + 0x6eb8) != 0) {
local_128 = uVar26 + *(longlong *)(param_1 + 0x6eb8);
puVar10 = (undefined8 *)FUN_14018db00(puVar9,local_128,2);
FUN_1407db590((undefined *)((longlong)puVar10 + uVar26 * 2));
puVar9 = local_res20;
puVar8 = local_res20;
if ((local_res20 != puVar10) &&
(FUN_1407db590(puVar10), puVar8 = puVar10, puVar9 != (undefined8 *)0x0)) {
(**(code **)(puVar9[-2] + 8))(puVar9 + -2);
}
}
local_res20 = puVar8;
local_d0 = (undefined *)FUN_14018b280(0x28);
uVar25 = 0;
local_c8 = 0;
*local_d0 = 0;
*(undefined8 *)(local_d0 + 8) = 0;
*(undefined **)(local_d0 + 0x10) = local_d0;
*(undefined **)(local_d0 + 0x18) = local_d0;
local_b0 = (undefined *)FUN_14018b280(0x28);
local_a8 = 0;
*local_b0 = 0;
*(undefined8 *)(local_b0 + 8) = 0;
*(undefined **)(local_b0 + 0x10) = local_b0;
*(undefined **)(local_b0 + 0x18) = local_b0;
local_170 = (undefined *)FUN_14018b280(0x48);
local_168 = 0;
*local_170 = 0;
*(undefined8 *)(local_170 + 8) = 0;
*(undefined **)(local_170 + 0x10) = local_170;
*(undefined **)(local_170 + 0x18) = local_170;
local_140 = (undefined *)FUN_14018b280(0x48);
local_138 = 0;
*local_140 = 0;
*(undefined8 *)(local_140 + 8) = 0;
*(undefined **)(local_140 + 0x10) = local_140;
*(undefined **)(local_140 + 0x18) = local_140;
local_1a0 = (undefined *)FUN_14018b280(0x28);
local_198 = 0;
*local_1a0 = 0;
*(undefined8 *)(local_1a0 + 8) = 0;
*(undefined **)(local_1a0 + 0x10) = local_1a0;
*(undefined **)(local_1a0 + 0x18) = local_1a0;
local_f8 = (undefined *)FUN_14018b280(0x28);
local_f0 = 0;
*local_f8 = 0;
*(undefined8 *)(local_f8 + 8) = 0;
*(undefined **)(local_f8 + 0x10) = local_f8;
*(undefined **)(local_f8 + 0x18) = local_f8;
local_118 = (undefined *)FUN_14018b280(0x30);
local_110 = 0;
*local_118 = 0;
*(undefined8 *)(local_118 + 8) = 0;
*(undefined **)(local_118 + 0x10) = local_118;
*(undefined **)(local_118 + 0x18) = local_118;
uVar26 = uVar25;
while( true ) {
if (DAT_140c63838 == (code *)0x0) {
iVar6 = 0;
if ((_DAT_140c655f8 == 0) && (iVar7 = FUN_1401fd100(), -1 < iVar7)) {
iVar6 = (**(code **)(*DAT_140c63fb8 + 0x28))();
}
}
else {
iVar6 = (*DAT_140c63838)(&PTR_u_EldanAugmentationCategory_140a6a1a0);
}
if ((int)uVar26 == iVar6) break;
if (DAT_140c63848 == (code *)0x0) {
if ((_DAT_140c655f8 == 0) && (iVar6 = FUN_1401fd100(), -1 < iVar6)) {
puVar11 = (uint *)(**(code **)(*DAT_140c63fb8 + 0x20))();
goto LAB_1403d05d4;
}
}
else {
puVar11 = (uint *)(*DAT_140c63848)(&PTR_u_EldanAugmentationCategory_140a6a1a0);
LAB_1403d05d4:
if (puVar11 != (uint *)0x0) {
puVar14 = local_118;
if (*(undefined **)(local_118 + 8) != (undefined *)0x0) {
puVar15 = *(undefined **)(local_118 + 8);
do {
if (*(uint *)(puVar15 + 0x20) < *puVar11) {
puVar13 = *(undefined **)(puVar15 + 0x18);
}
else {
puVar13 = *(undefined **)(puVar15 + 0x10);
puVar14 = puVar15;
}
puVar15 = puVar13;
} while (puVar13 != (undefined *)0x0);
}
if ((puVar14 == local_118) || (*puVar11 < *(uint *)(puVar14 + 0x20))) {
local_158 = (undefined *)((ulonglong)local_158 & 0xffffffff00000000 | (ulonglong)*puVar11)
;
local_150 = 0;
local_res8 = puVar14;
FUN_140055c60(local_120);
puVar14 = local_res10;
}
*(uint **)(puVar14 + 0x28) = puVar11;
}
}
uVar26 = (ulonglong)((int)uVar26 + 1);
}
if (*(longlong *)(param_1 + 0x78) == 0) {
local_res18._0_4_ = 0x17;
}
else {
local_res18._0_4_ = *(uint *)(*(longlong *)(param_1 + 0x78) + 0xdc);
}
local_res18 = (undefined *)
        ((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)(uint)local_res18);
if ((DAT_140dc2340 & 1) == 0) {
DAT_140dc2340 = DAT_140dc2340 | 1;
lVar12 = FUN_140200220(0x3ae);
if (lVar12 == 0) {
_DAT_140dc2344 = 0.5;
}
else {
_DAT_140dc2344 = *(float *)(lVar12 + 0x1c);
}
}
uVar26 = local_128;
if (local_128 != 0) {
do {
local_res10 = (undefined *)
        ((ulonglong)local_res10 & 0xffffffff00000000 |
         (ulonglong)*(ushort *)((longlong)local_res20 + uVar25 * 2));
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c65444 != 0) || (iVar6 = FUN_1401fd540(), iVar6 < 0)) goto LAB_1403d11df;
puVar11 = (uint *)(**(code **)(*DAT_140c653a0 + 0x18))();
}
else {
puVar11 = (uint *)(*DAT_140c63840)(&PTR_u_EldanAugmentation_140a6a1d8);
}
if (puVar11 == (uint *)0x0) goto LAB_1403d11df;
iVar28 = iVar28 + puVar11[4];
if (*(int *)(param_1 + 0x6e60) < iVar28) {
uVar24 = 0x1f;
goto LAB_1403d12d7;
}
if (puVar11[3] != (uint)local_res18) {
uVar24 = 4;
goto LAB_1403d12d7;
}
if (puVar11[7] != 0) {
uVar23 = 0;
if (*(uint *)(param_1 + 0x6df0) == 0) {
LAB_1403d0777:
uVar24 = 0x20;
goto LAB_1403d12d7;
}
puVar22 = (ushort *)(param_1 + 0x6df4);
while ((uint)*puVar22 != *puVar11) {
uVar23 = uVar23 + 1;
puVar22 = puVar22 + 1;
if (*(uint *)(param_1 + 0x6df0) <= uVar23) goto LAB_1403d0777;
}
}
uVar23 = puVar11[8];
puVar14 = *(undefined **)(local_118 + 8);
local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar23);
puVar15 = local_118;
if (puVar14 == (undefined *)0x0) {
LAB_1403d07cd:
local_1b8 = local_118;
ppuVar20 = &local_1b8;
}
else {
do {
if (*(uint *)(puVar14 + 0x20) < uVar23) {
puVar13 = *(undefined **)(puVar14 + 0x18);
}
else {
puVar13 = *(undefined **)(puVar14 + 0x10);
puVar15 = puVar14;
}
puVar14 = puVar13;
} while (puVar13 != (undefined *)0x0);
if ((puVar15 == local_118) || (uVar23 < *(uint *)(puVar15 + 0x20))) goto LAB_1403d07cd;
local_188 = puVar15;
ppuVar20 = &local_188;
}
if (*ppuVar20 == local_118) goto LAB_1403d137f;
uVar23 = puVar11[9];
if (uVar23 == 0) {
lVar12 = *(longlong *)(*ppuVar20 + 0x28);
piVar1 = (int *)(lVar12 + 8);
lVar12 = lVar12 + 4;
if (*piVar1 == 0) {
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12);
*pfVar17 = (float)(ulonglong)puVar11[4] + *pfVar17;
}
else {
fVar29 = (float)(ulonglong)puVar11[4] * _DAT_140dc2344;
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12);
*pfVar17 = fVar29 + *pfVar17;
pfVar17 = (float *)FUN_1403d2690(local_1a8,piVar1);
*pfVar17 = fVar29 + *pfVar17;
}
}
else {
if (2 < uVar23) {
uVar24 = 0x25;
goto LAB_1403d12d7;
}
if (uVar23 == 1) {
uVar24 = FUN_1403d2990(local_178,&local_res8);
puVar14 = local_68;
}
else {
uVar24 = FUN_1403d2990(local_148,&local_res8);
puVar14 = local_98;
}
FUN_1400293c0(uVar24,puVar14,&local_res10);
puVar15 = *(undefined **)(local_f8 + 8);
puVar14 = local_f8;
while (puVar13 = puVar15, puVar13 != (undefined *)0x0) {
if (*(uint *)(puVar13 + 0x20) < (uint)local_res8) {
puVar15 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar15 = *(undefined **)(puVar13 + 0x10);
puVar14 = puVar13;
}
}
if ((puVar14 == local_f8) || ((uint)local_res8 < *(uint *)(puVar14 + 0x20))) {
local_e0 = (uint)local_res8;
local_dc = 0;
local_res8 = puVar14;
FUN_140032b30(local_100,&local_180,&local_res8);
puVar14 = local_180;
}
uVar23 = *(uint *)(puVar14 + 0x24);
uVar3 = puVar11[9];
puVar15 = *(undefined **)(local_f8 + 8);
puVar14 = local_f8;
while (puVar13 = puVar15, puVar13 != (undefined *)0x0) {
if (*(uint *)(puVar13 + 0x20) < (uint)local_res8) {
puVar15 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar15 = *(undefined **)(puVar13 + 0x10);
puVar14 = puVar13;
}
}
if ((puVar14 == local_f8) || ((uint)local_res8 < *(uint *)(puVar14 + 0x20))) {
local_1b0 = (uint)local_res8;
uStack428 = 0;
local_res8 = puVar14;
FUN_140032b30(local_100,&local_158,&local_res8);
puVar14 = local_158;
}
if (uVar23 < uVar3) {
uVar23 = uVar3;
}
*(uint *)(puVar14 + 0x24) = uVar23;
uVar26 = local_128;
}
if (puVar11[5] != 0) {
FUN_1400293c0(local_b8,local_78,puVar11 + 5);
}
FUN_1400293c0(local_d8);
uVar25 = (ulonglong)((int)uVar25 + 1);
} while (uVar25 != uVar26);
}
puVar14 = *(undefined **)(local_f8 + 0x10);
puVar15 = local_118;
puVar13 = local_f8;
if (puVar14 != local_f8) {
do {
if (*(int *)(puVar14 + 0x24) != 0) {
uVar23 = *(uint *)(puVar14 + 0x20);
local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar23);
puVar21 = *(undefined **)(puVar15 + 8);
puVar27 = puVar15;
if (*(undefined **)(puVar15 + 8) == (undefined *)0x0) {
LAB_1403d0a3c:
local_180 = puVar15;
ppuVar20 = &local_180;
}
else {
do {
if (*(uint *)(puVar21 + 0x20) < uVar23) {
puVar19 = *(undefined **)(puVar21 + 0x18);
}
else {
puVar19 = *(undefined **)(puVar21 + 0x10);
puVar27 = puVar21;
}
puVar21 = puVar19;
} while (puVar19 != (undefined *)0x0);
if ((puVar27 == puVar15) || (uVar23 < *(uint *)(puVar27 + 0x20))) goto LAB_1403d0a3c;
local_158 = puVar27;
ppuVar20 = &local_158;
}
if (*ppuVar20 == puVar15) goto LAB_1403d11df;
lVar12 = *(longlong *)(*ppuVar20 + 0x28);
puVar11 = (uint *)(lVar12 + 8);
if (*(int *)(lVar12 + 8) != 0) {
puVar2 = (uint *)(lVar12 + 4);
puVar15 = local_1a0;
if (*(undefined **)(local_1a0 + 8) != (undefined *)0x0) {
puVar13 = *(undefined **)(local_1a0 + 8);
do {
if (*(uint *)(puVar13 + 0x20) < *puVar2) {
puVar21 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar21 = *(undefined **)(puVar13 + 0x10);
puVar15 = puVar13;
}
puVar13 = puVar21;
} while (puVar21 != (undefined *)0x0);
}
if ((puVar15 == local_1a0) || (*puVar2 < *(uint *)(puVar15 + 0x20))) {
local_res10 = (undefined *)(ulonglong)*puVar2;
local_1b8 = puVar15;
FUN_140032b30(local_1a8,&local_188);
puVar15 = local_188;
}
if (*(float *)(puVar15 + 0x24) <= (float)(ulonglong)*(uint *)(lVar12 + 0xc) &&
(float)(ulonglong)*(uint *)(lVar12 + 0xc) != *(float *)(puVar15 + 0x24))
goto LAB_1403d1375;
puVar15 = local_1a0;
if (*(undefined **)(local_1a0 + 8) != (undefined *)0x0) {
puVar13 = *(undefined **)(local_1a0 + 8);
do {
if (*(uint *)(puVar13 + 0x20) < *puVar11) {
puVar21 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar21 = *(undefined **)(puVar13 + 0x10);
puVar15 = puVar13;
}
puVar13 = puVar21;
} while (puVar21 != (undefined *)0x0);
}
if ((puVar15 == local_1a0) || (*puVar11 < *(uint *)(puVar15 + 0x20))) {
local_res18 = (undefined *)(ulonglong)*puVar11;
local_1b8 = puVar15;
FUN_140032b30(local_1a8,&local_1b0,&local_1b8);
puVar15 = (undefined *)CONCAT44(uStack428,local_1b0);
}
if (*(float *)(puVar15 + 0x24) <= (float)(ulonglong)*(uint *)(lVar12 + 0x10) &&
(float)(ulonglong)*(uint *)(lVar12 + 0x10) != *(float *)(puVar15 + 0x24))
goto LAB_1403d1375;
lVar12 = FUN_1403d2990(local_178,&local_res8);
lVar12 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x10);
lVar16 = FUN_1403d2990(local_178,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
if (lVar12 != *(longlong *)(lVar16 + 8)) {
do {
lVar16 = FUN_1401fd7a0(*(undefined4 *)(lVar12 + 0x20));
if (lVar16 == 0) goto LAB_1403d11df;
fVar29 = (float)(ulonglong)*(uint *)(lVar16 + 0x10) * _DAT_140dc2344;
pfVar17 = (float *)FUN_1403d2690(local_1a8,puVar2);
*pfVar17 = fVar29 + *pfVar17;
pfVar17 = (float *)FUN_1403d2690(local_1a8,puVar11);
*pfVar17 = fVar29 + *pfVar17;
lVar16 = *(longlong *)(lVar12 + 0x18);
if (lVar16 == 0) {
lVar16 = *(longlong *)(lVar12 + 8);
if (lVar12 == *(longlong *)(lVar16 + 0x18)) {
do {
lVar12 = lVar16;
lVar16 = *(longlong *)(lVar12 + 8);
} while (lVar12 == *(longlong *)(lVar16 + 0x18));
}
if (*(longlong *)(lVar12 + 0x18) != lVar16) {
lVar12 = lVar16;
}
}
else {
for (lVar18 = *(longlong *)(lVar16 + 0x10); lVar12 = lVar16, lVar18 != 0;
lVar18 = *(longlong *)(lVar18 + 0x10)) {
lVar16 = lVar18;
}
}
lVar16 = FUN_1403d2990(local_178,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
} while (lVar12 != *(longlong *)(lVar16 + 8));
}
}
}
puVar21 = *(undefined **)(puVar14 + 0x18);
if (puVar21 == (undefined *)0x0) {
puVar21 = *(undefined **)(puVar14 + 8);
if (puVar14 == *(undefined **)(puVar21 + 0x18)) {
do {
puVar14 = puVar21;
puVar21 = *(undefined **)(puVar14 + 8);
} while (puVar14 == *(undefined **)(puVar21 + 0x18));
}
if (*(undefined **)(puVar14 + 0x18) != puVar21) {
puVar14 = puVar21;
}
}
else {
for (puVar27 = *(undefined **)(puVar21 + 0x10); puVar14 = puVar21,
        puVar27 != (undefined *)0x0; puVar27 = *(undefined **)(puVar27 + 0x10)) {
puVar21 = puVar27;
}
}
} while (puVar14 != puVar13);
}
puVar14 = *(undefined **)(puVar13 + 0x10);
if (puVar14 != puVar13) {
do {
if (*(int *)(puVar14 + 0x24) != 0) {
uVar23 = *(uint *)(puVar14 + 0x20);
local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar23);
puVar21 = *(undefined **)(puVar15 + 8);
puVar27 = puVar15;
if (*(undefined **)(puVar15 + 8) == (undefined *)0x0) {
LAB_1403d0d2e:
local_180 = puVar15;
ppuVar20 = &local_180;
}
else {
do {
if (*(uint *)(puVar21 + 0x20) < uVar23) {
puVar19 = *(undefined **)(puVar21 + 0x18);
}
else {
puVar19 = *(undefined **)(puVar21 + 0x10);
puVar27 = puVar21;
}
puVar21 = puVar19;
} while (puVar19 != (undefined *)0x0);
if ((puVar27 == puVar15) || (uVar23 < *(uint *)(puVar27 + 0x20))) goto LAB_1403d0d2e;
local_158 = puVar27;
ppuVar20 = &local_158;
}
if (*ppuVar20 == puVar15) goto LAB_1403d137f;
lVar12 = *(longlong *)(*ppuVar20 + 0x28);
if (*(int *)(lVar12 + 8) == 0) {
puVar15 = local_1a0;
if (*(undefined **)(local_1a0 + 8) != (undefined *)0x0) {
puVar13 = *(undefined **)(local_1a0 + 8);
do {
if (*(uint *)(puVar13 + 0x20) < *(uint *)(lVar12 + 4)) {
puVar21 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar21 = *(undefined **)(puVar13 + 0x10);
puVar15 = puVar13;
}
puVar13 = puVar21;
} while (puVar21 != (undefined *)0x0);
}
if ((puVar15 == local_1a0) || (*(uint *)(lVar12 + 4) < *(uint *)(puVar15 + 0x20))) {
local_res10 = (undefined *)(ulonglong)*(uint *)(lVar12 + 4);
local_1b8 = puVar15;
FUN_140032b30(local_1a8,&local_188);
puVar15 = local_188;
}
if (*(float *)(puVar15 + 0x24) <= (float)(ulonglong)*(uint *)(lVar12 + 0xc) &&
(float)(ulonglong)*(uint *)(lVar12 + 0xc) != *(float *)(puVar15 + 0x24))
goto LAB_1403d1375;
lVar16 = FUN_1403d2990(local_178,&local_res8);
lVar16 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x10);
lVar18 = FUN_1403d2990(local_178,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
if (lVar16 != *(longlong *)(lVar18 + 8)) {
do {
lVar18 = FUN_1401fd7a0(*(undefined4 *)(lVar16 + 0x20));
if (lVar18 == 0) goto LAB_1403d11df;
puVar15 = local_1a0;
if (*(undefined **)(local_1a0 + 8) != (undefined *)0x0) {
puVar13 = *(undefined **)(local_1a0 + 8);
do {
if (*(uint *)(puVar13 + 0x20) < *(uint *)(lVar12 + 4)) {
puVar21 = *(undefined **)(puVar13 + 0x18);
}
else {
puVar21 = *(undefined **)(puVar13 + 0x10);
puVar15 = puVar13;
}
puVar13 = puVar21;
} while (puVar21 != (undefined *)0x0);
}
if ((puVar15 == local_1a0) || (*(uint *)(lVar12 + 4) < *(uint *)(puVar15 + 0x20))) {
local_res18 = (undefined *)(ulonglong)*(uint *)(lVar12 + 4);
local_1b8 = puVar15;
FUN_140032b30(local_1a8,&local_1b0);
puVar15 = (undefined *)CONCAT44(uStack428,local_1b0);
}
*(float *)(puVar15 + 0x24) =
(float)(ulonglong)*(uint *)(lVar18 + 0x10) + *(float *)(puVar15 + 0x24);
lVar18 = *(longlong *)(lVar16 + 0x18);
if (lVar18 == 0) {
lVar18 = *(longlong *)(lVar16 + 8);
if (lVar16 == *(longlong *)(lVar18 + 0x18)) {
do {
lVar16 = lVar18;
lVar18 = *(longlong *)(lVar16 + 8);
} while (lVar16 == *(longlong *)(lVar18 + 0x18));
}
if (*(longlong *)(lVar16 + 0x18) != lVar18) {
lVar16 = lVar18;
}
}
else {
for (lVar4 = *(longlong *)(lVar18 + 0x10); lVar16 = lVar18, lVar4 != 0;
lVar4 = *(longlong *)(lVar4 + 0x10)) {
lVar18 = lVar4;
}
}
lVar18 = FUN_1403d2990(local_178,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
} while (lVar16 != *(longlong *)(lVar18 + 8));
}
}
}
puVar21 = *(undefined **)(puVar14 + 0x18);
if (puVar21 == (undefined *)0x0) {
puVar21 = *(undefined **)(puVar14 + 8);
if (puVar14 == *(undefined **)(puVar21 + 0x18)) {
do {
puVar14 = puVar21;
puVar21 = *(undefined **)(puVar14 + 8);
} while (puVar14 == *(undefined **)(puVar21 + 0x18));
}
if (*(undefined **)(puVar14 + 0x18) != puVar21) {
puVar14 = puVar21;
}
}
else {
for (puVar27 = *(undefined **)(puVar21 + 0x10); puVar14 = puVar21,
        puVar27 != (undefined *)0x0; puVar27 = *(undefined **)(puVar27 + 0x10)) {
puVar21 = puVar27;
}
}
} while (puVar14 != puVar13);
}
puVar14 = *(undefined **)(puVar13 + 0x10);
if (puVar14 != puVar13) {
do {
if (*(int *)(puVar14 + 0x24) == 2) {
uVar23 = *(uint *)(puVar14 + 0x20);
local_res8 = (undefined *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar23);
puVar21 = *(undefined **)(puVar15 + 8);
puVar27 = puVar15;
if (*(undefined **)(puVar15 + 8) == (undefined *)0x0) {
LAB_1403d0fe4:
local_res18 = puVar15;
ppuVar20 = &local_res18;
}
else {
do {
if (*(uint *)(puVar21 + 0x20) < uVar23) {
puVar19 = *(undefined **)(puVar21 + 0x18);
}
else {
puVar19 = *(undefined **)(puVar21 + 0x10);
puVar27 = puVar21;
}
puVar21 = puVar19;
} while (puVar19 != (undefined *)0x0);
if ((puVar27 == puVar15) || (uVar23 < *(uint *)(puVar27 + 0x20))) goto LAB_1403d0fe4;
local_res10 = puVar27;
ppuVar20 = &local_res10;
}
if (*ppuVar20 == puVar15) goto LAB_1403d137f;
lVar12 = *(longlong *)(*ppuVar20 + 0x28);
if (*(int *)(lVar12 + 8) != 0) {
fVar29 = (float)(ulonglong)*(uint *)(lVar12 + 0x14);
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12 + 4);
if (*pfVar17 <= fVar29 && fVar29 != *pfVar17) goto LAB_1403d1375;
fVar29 = (float)(ulonglong)*(uint *)(lVar12 + 0x18);
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12 + 8);
if (*pfVar17 <= fVar29 && fVar29 != *pfVar17) goto LAB_1403d1375;
lVar16 = FUN_1403d2990(local_148,&local_res8);
lVar16 = *(longlong *)(*(longlong *)(lVar16 + 8) + 0x10);
lVar18 = FUN_1403d2990(local_148,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
if (lVar16 != *(longlong *)(lVar18 + 8)) {
do {
lVar18 = FUN_1401fd7a0(*(undefined4 *)(lVar16 + 0x20));
if (lVar18 == 0) goto LAB_1403d11df;
fVar29 = (float)(ulonglong)*(uint *)(lVar18 + 0x10) * _DAT_140dc2344;
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12 + 4);
*pfVar17 = fVar29 + *pfVar17;
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12 + 8);
*pfVar17 = fVar29 + *pfVar17;
lVar18 = *(longlong *)(lVar16 + 0x18);
if (lVar18 == 0) {
lVar18 = *(longlong *)(lVar16 + 8);
if (lVar16 == *(longlong *)(lVar18 + 0x18)) {
do {
lVar16 = lVar18;
lVar18 = *(longlong *)(lVar16 + 8);
} while (lVar16 == *(longlong *)(lVar18 + 0x18));
}
if (*(longlong *)(lVar16 + 0x18) != lVar18) {
lVar16 = lVar18;
}
}
else {
for (lVar4 = *(longlong *)(lVar18 + 0x10); lVar16 = lVar18, lVar4 != 0;
lVar4 = *(longlong *)(lVar4 + 0x10)) {
lVar18 = lVar4;
}
}
lVar18 = FUN_1403d2990(local_148,&local_res8);
puVar15 = local_118;
puVar13 = local_f8;
} while (lVar16 != *(longlong *)(lVar18 + 8));
}
}
}
puVar21 = *(undefined **)(puVar14 + 0x18);
if (puVar21 == (undefined *)0x0) {
puVar21 = *(undefined **)(puVar14 + 8);
if (puVar14 == *(undefined **)(puVar21 + 0x18)) {
do {
puVar14 = puVar21;
puVar21 = *(undefined **)(puVar14 + 8);
} while (puVar14 == *(undefined **)(puVar21 + 0x18));
}
if (*(undefined **)(puVar14 + 0x18) != puVar21) {
puVar14 = puVar21;
}
}
else {
for (puVar27 = *(undefined **)(puVar21 + 0x10); puVar14 = puVar21,
        puVar27 != (undefined *)0x0; puVar27 = *(undefined **)(puVar27 + 0x10)) {
puVar21 = puVar27;
}
}
} while (puVar14 != puVar13);
}
puVar14 = *(undefined **)(puVar13 + 0x10);
if (puVar14 != puVar13) {
do {
if (*(int *)(puVar14 + 0x24) == 2) {
puVar21 = *(undefined **)(puVar15 + 8);
puVar27 = puVar15;
if (puVar21 == (undefined *)0x0) {
LAB_1403d120d:
local_res10 = puVar15;
ppuVar20 = &local_res10;
}
else {
do {
if (*(uint *)(puVar21 + 0x20) < *(uint *)(puVar14 + 0x20)) {
puVar19 = *(undefined **)(puVar21 + 0x18);
}
else {
puVar19 = *(undefined **)(puVar21 + 0x10);
puVar27 = puVar21;
}
puVar21 = puVar19;
} while (puVar19 != (undefined *)0x0);
if ((puVar27 == puVar15) || (*(uint *)(puVar14 + 0x20) < *(uint *)(puVar27 + 0x20)))
goto LAB_1403d120d;
local_res8 = puVar27;
ppuVar20 = &local_res8;
}
if (*ppuVar20 == puVar15) goto LAB_1403d137f;
lVar12 = *(longlong *)(*ppuVar20 + 0x28);
if (*(int *)(lVar12 + 8) == 0) {
fVar29 = (float)(ulonglong)*(uint *)(lVar12 + 0x14);
pfVar17 = (float *)FUN_1403d2690(local_1a8,lVar12 + 4);
puVar15 = local_118;
puVar13 = local_f8;
if (*pfVar17 <= fVar29 && fVar29 != *pfVar17) goto LAB_1403d1375;
}
}
puVar21 = *(undefined **)(puVar14 + 0x18);
if (puVar21 == (undefined *)0x0) {
puVar21 = *(undefined **)(puVar14 + 8);
if (puVar14 == *(undefined **)(puVar21 + 0x18)) {
do {
puVar14 = puVar21;
puVar21 = *(undefined **)(puVar14 + 8);
} while (puVar14 == *(undefined **)(puVar21 + 0x18));
}
if (*(undefined **)(puVar14 + 0x18) != puVar21) {
puVar14 = puVar21;
}
}
else {
for (puVar27 = *(undefined **)(puVar21 + 0x10); puVar14 = puVar21,
        puVar27 != (undefined *)0x0; puVar27 = *(undefined **)(puVar27 + 0x10)) {
puVar21 = puVar27;
}
}
} while (puVar14 != puVar13);
}
cVar5 = FUN_1403d5640(*(undefined8 *)(local_d0 + 0x10),local_d0,*(undefined8 *)(local_b0 + 0x10),
                      local_b0);
uVar24 = 0x22;
if (cVar5 != '\0') {
uVar24 = 1;
}
LAB_1403d12d7:
FUN_140008410(local_120);
FUN_14018b900(local_118,0);
FUN_140008410(local_100);
FUN_14018b900(local_f8,0);
FUN_140008410(local_1a8);
FUN_14018b900(local_1a0,0);
if (local_138 != 0) {
FUN_140032150(local_148,*(undefined8 *)(local_140 + 8));
*(undefined **)(local_140 + 0x10) = local_140;
*(undefined8 *)(local_140 + 8) = 0;
*(undefined **)(local_140 + 0x18) = local_140;
local_138 = 0;
}
FUN_14018b900(local_140,0);
if (local_168 != 0) {
FUN_140032150(local_178,*(undefined8 *)(local_170 + 8));
*(undefined **)(local_170 + 0x10) = local_170;
*(undefined8 *)(local_170 + 8) = 0;
*(undefined **)(local_170 + 0x18) = local_170;
local_168 = 0;
}
FUN_14018b900(local_170,0);
FUN_140008410(local_b8);
FUN_14018b900(local_b0,0);
FUN_140008410(local_d8);
FUN_14018b900(local_d0,0);
if (local_res20 != (undefined8 *)0x0) {
(**(code **)(local_res20[-2] + 8))(local_res20 + -2);
}
return uVar24;
LAB_1403d11df:
uVar24 = 0x23;
goto LAB_1403d12d7;
LAB_1403d137f:
uVar24 = 0x24;
goto LAB_1403d12d7;
LAB_1403d1375:
uVar24 = 0x21;
goto LAB_1403d12d7;
}



void FUN_1403d1440(longlong param_1,int param_2,undefined4 param_3)

{
int iVar1;
longlong lVar2;
undefined8 uVar3;
ulonglong uVar4;
int *piVar5;
ulonglong uVar6;
ulonglong uVar7;
undefined4 local_res18 [4];
longlong local_28;
ulonglong local_20;

if (*(longlong *)(param_1 + 0x6eb8) != 0) {
if (param_2 == 0) {
*(undefined8 *)(param_1 + 0x6eb8) = 0;
return;
}
local_res18[0] = param_3;
if (param_2 == 1) {
piVar5 = (int *)FUN_1401fd360(param_3);
if ((piVar5 != (int *)0x0) && (uVar7 = 0, *(longlong *)(param_1 + 0x6eb8) != 0)) {
do {
lVar2 = FUN_1401fd7a0(*(undefined2 *)(*(longlong *)(param_1 + 0x6eb0) + uVar7 * 2));
if (lVar2 != 0) {
if (*piVar5 == *(int *)(lVar2 + 0x20)) {
FUN_140334370(param_1 + 0x6eb0,uVar7);
}
else {
uVar7 = uVar7 + 1;
}
}
} while (uVar7 < *(ulonglong *)(param_1 + 0x6eb8));
return;
}
}
else if ((((param_2 == 2) &&
(iVar1 = FUN_1403cdf50(param_1,param_3,*(undefined *)(param_1 + 0x6dec),0), iVar1 != 0
)) && (lVar2 = FUN_1401fd7a0(param_3), lVar2 != 0)) &&
(lVar2 = FUN_1401fd360(*(undefined4 *)(lVar2 + 0x20)), lVar2 != 0)) {
uVar3 = FUN_14079b380();
local_20 = 0;
local_28 = 0;
FUN_140003460(&local_28,local_res18);
FUN_1403cdaa0(param_1,param_3,uVar3,&local_28);
lVar2 = local_28;
uVar7 = local_20;
uVar6 = 0;
if (*(longlong *)(param_1 + 0x6eb8) != 0) {
do {
uVar4 = 0;
if (uVar7 != 0) {
do {
if (*(uint *)(lVar2 + uVar4 * 4) ==
(uint)*(ushort *)(*(longlong *)(param_1 + 0x6eb0) + uVar6 * 2)) {
FUN_140334370(param_1 + 0x6eb0,uVar6);
lVar2 = local_28;
uVar7 = local_20;
goto LAB_1403d1546;
}
uVar4 = uVar4 + 1;
} while (uVar4 < uVar7);
}
uVar6 = uVar6 + 1;
LAB_1403d1546:
} while (uVar6 < *(ulonglong *)(param_1 + 0x6eb8));
}
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
}
}
return;
}



void FUN_1403d1610(ulonglong param_1,undefined4 param_2,uint param_3)

{
    longlong lVar1;
    int iVar2;
    ulonglong local_res8;

    lVar1 = DAT_140c65898;
    local_res8 = param_1;
    iVar2 = FUN_1403d16c0(DAT_140c65898);
    if (iVar2 != 0) {
        local_res8 = (ulonglong)(byte)param_2 << 8;
        local_res8 = local_res8 | (ulonglong)param_3 << 0x20 | (ulonglong)*(byte *)(lVar1 + 0x6dec);
        FUN_1403f4900(DAT_140c65898,0x151,&local_res8);
        return;
    }
    FUN_1403d1440(lVar1,param_2,param_3);
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"CharacterEldanAugmentationsUpdated",&DAT_1409d10e6)
            ;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1403d16c0(longlong param_1,int param_2,undefined4 param_3)

{
short sVar1;
int iVar2;
longlong lVar3;
ulonglong uVar4;
undefined8 uVar5;
longlong lVar6;
ulonglong uVar7;
ulonglong uVar8;
float extraout_XMM0_Da;
undefined4 local_res18 [2];
longlong local_28;
ulonglong local_20;

if (2 < param_2) {
return 0;
}
local_res18[0] = param_3;
if ((DAT_140dc2348 & 1) == 0) {
DAT_140dc2348 = DAT_140dc2348 | 1;
lVar3 = FUN_140200220();
if (lVar3 == 0) {
_DAT_140dc234c = 0.117692;
}
else {
_DAT_140dc234c = *(float *)(lVar3 + 0x18);
}
}
if ((DAT_140dc2348 & 2) == 0) {
DAT_140dc2348 = DAT_140dc2348 | 2;
lVar3 = FUN_140200220();
if (lVar3 == 0) {
_DAT_140dc2350 = 0xc0933333;
}
else {
_DAT_140dc2350 = *(undefined4 *)(lVar3 + 0x1c);
}
}
if ((DAT_140dc2348 & 4) == 0) {
DAT_140dc2348 = DAT_140dc2348 | 4;
lVar3 = FUN_140200220();
if (lVar3 == 0) {
DAT_140dc2354 = 0x40800000;
}
else {
DAT_140dc2354 = *(undefined4 *)(lVar3 + 0x20);
}
}
uVar7 = 0;
if (*(longlong *)(param_1 + 0x78) == 0) {
iVar2 = 0;
}
else {
iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x38);
}
FUN_1408fbfc0();
uVar4 = (ulonglong)((extraout_XMM0_Da * _DAT_140dc234c) / (float)(ulonglong)(iVar2 - 5));
uVar8 = 1;
if (1 < (int)uVar4) {
uVar8 = uVar4 & 0xffffffff;
}
if (param_2 == 0) {
param_3 = 0;
}
else {
if (param_2 + -1 != 0) {
if (param_2 == 2) {
lVar3 = FUN_1401fd7a0(param_3);
if (lVar3 == 0) {
return 0;
}
iVar2 = FUN_1403cdf50(param_1,param_3,*(undefined *)(param_1 + 0x6dec),param_2 + -1);
if (iVar2 == 0) {
return 0;
}
if ((DAT_140dc2348 & 8) == 0) {
DAT_140dc2348 = DAT_140dc2348 | 8;
lVar3 = FUN_140200220(0x4a6);
if (lVar3 == 0) {
_DAT_140dc2358 = 1.1;
}
else {
_DAT_140dc2358 = *(float *)(lVar3 + 0x18);
}
}
uVar5 = FUN_14079b380();
local_20 = 0;
local_28 = 0;
FUN_140003460(&local_28,local_res18);
FUN_1403cdaa0(param_1,param_3,uVar5,&local_28);
lVar3 = local_28;
uVar4 = uVar7;
if (local_20 != 0) {
do {
lVar6 = FUN_1401fd7a0(*(undefined4 *)(lVar3 + uVar7 * 4));
lVar3 = local_28;
if ((lVar6 != 0) &&
(iVar2 = FUN_1403cdf50(param_1,*(undefined4 *)(local_28 + uVar7 * 4),
                       *(undefined *)(param_1 + 0x6dec),1), iVar2 != 0)) {
uVar4 = (ulonglong)(ushort)((short)uVar4 + *(short *)(lVar6 + 0x10));
}
uVar7 = uVar7 + 1;
} while (uVar7 < local_20);
}
uVar7 = (ulonglong)((float)uVar8 * _DAT_140dc2358 * (float)(int)(short)uVar4);
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
}
goto LAB_1403d197e;
}
lVar3 = FUN_1401fd360(param_3);
if (lVar3 == 0) {
return 0;
}
}
sVar1 = FUN_1403cde70(param_1,param_3);
uVar7 = (ulonglong)(uint)((int)sVar1 * (int)uVar8);
LAB_1403d197e:
return uVar7 & 0xffffffff;
}



void FUN_1403d19a0(void)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong local_28;
    undefined8 *local_20;

    lVar3 = DAT_140c65898;
    if (*(longlong *)(DAT_140c65898 + 0x6eb8) != 0) {
        lVar7 = (ulonglong)*(uint *)(DAT_140c65898 + 0x6dec) + 0x6e7;
        local_28 = *(ulonglong *)(DAT_140c65898 + 8 + lVar7 * 0x10);
        if (local_28 == 0) {
            puVar6 = (undefined8 *)0x0;
        }
        else {
            puVar4 = (undefined8 *)FUN_14018b280(local_28 * 2 + 0x10,0);
            if (puVar4 == (undefined8 *)0x0) {
                puVar6 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar4[1] = local_28;
                puVar6 = puVar4 + 2;
                *puVar4 = &PTR_LAB_140b55060;
            }
        }
        lVar2 = local_28 * 2;
        FUN_1407db590(puVar6,*(undefined8 *)(lVar3 + lVar7 * 0x10),lVar2);
        lVar7 = *(longlong *)(lVar3 + 0x6eb8);
        uVar1 = *(undefined8 *)(lVar3 + 0x6eb0);
        puVar4 = puVar6;
        if (lVar7 != 0) {
            local_28 = local_28 + lVar7;
            puVar5 = (undefined8 *)FUN_14018db00(puVar6,local_28,2);
            FUN_1407db590((undefined *)(lVar2 + (longlong)puVar5),uVar1,lVar7 * 2);
            if ((puVar6 != puVar5) &&
                (FUN_1407db590(puVar5,puVar6,lVar2), puVar4 = puVar5, puVar6 != (undefined8 *)0x0)) {
                (**(code **)(puVar6[-2] + 8))(puVar6 + -2);
            }
        }
        local_28 = local_28 & 0xff;
        local_20 = puVar4;
        FUN_1403f4900(DAT_140c65898,0x1a2,&local_28);
        *(undefined8 *)(lVar3 + 0x6eb8) = 0;
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
    }
    return;
}



int FUN_1403d1b10(undefined8 param_1,short param_2)

{
longlong lVar1;
short **ppsVar2;
longlong lVar3;
short *psVar4;
longlong lVar5;
int iVar6;
short *psVar7;
ulonglong uVar8;

lVar5 = DAT_140c65898;
ppsVar2 = (short **)(DAT_140c65898 + 0x6eb0);
lVar3 = *(longlong *)(DAT_140c65898 + 0x6eb8);
lVar1 = lVar3 + 1;
psVar7 = (short *)FUN_14018db00(*ppsVar2,lVar1,2);
psVar7[lVar3] = param_2;
if (*ppsVar2 != psVar7) {
FUN_1407db590(psVar7,*ppsVar2,*(longlong *)(lVar5 + 0x6eb8) * 2);
psVar4 = *ppsVar2;
if (psVar4 != (short *)0x0) {
(**(code **)(*(longlong *)(psVar4 + -8) + 8))(psVar4 + -8);
}
*ppsVar2 = psVar7;
}
*(longlong *)(lVar5 + 0x6eb8) = lVar1;
iVar6 = FUN_1403d02a0(lVar5);
if (iVar6 == 1) {
FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"CharacterEldanAugmentationsUpdated",
&DAT_1409d10e6);
iVar6 = 1;
}
else {
uVar8 = 0;
if (*(ulonglong *)(lVar5 + 0x6eb8) != 0) {
psVar7 = *ppsVar2;
do {
if (*psVar7 == param_2) {
FUN_140334370(ppsVar2);
return iVar6;
}
uVar8 = uVar8 + 1;
psVar7 = psVar7 + 1;
} while (uVar8 < *(ulonglong *)(lVar5 + 0x6eb8));
}
}
return iVar6;
}



undefined8 FUN_1403d1c00(longlong param_1,byte *param_2)

{
uint uVar1;

uVar1 = 0x36;
if (*param_2 < 0x36) {
uVar1 = (uint)*param_2;
}
*(uint *)(param_1 + 0x6df0) = uVar1;
FUN_1407db590(param_1 + 0x6df4,*(undefined8 *)(param_2 + 8),(ulonglong)*param_2 * 2);
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"CharacterUnlockedInlaidEldanAugmentation","");
return 0;
}



undefined8 FUN_1403d1c60(longlong param_1,byte *param_2)

{
if (3 < *param_2) {
return 0x80004005;
}
*(undefined8 *)(param_1 + 0x6e78 + (ulonglong)*param_2 * 0x10) = 0;
FUN_1403d33d0(((ulonglong)*param_2 + 0x6e7) * 0x10 + param_1,*(undefined8 *)(param_2 + 8),
param_2[1]);
*(undefined8 *)(param_1 + 0x6eb8) = 0;
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"CharacterEldanAugmentationsUpdated",
&DAT_1409d10e6);
return 0;
}



void FUN_1403d1e40(longlong param_1,int param_2,int param_3,int param_4)

{
uint *puVar1;
uint uVar2;
longlong lVar3;
undefined4 uVar4;
int *piVar5;
longlong lVar6;
undefined8 *puVar7;
undefined8 *puVar8;
undefined8 *puVar9;
longlong lVar10;
longlong local_res8;
undefined8 local_38;
int local_30;
int iStack44;

puVar8 = (undefined8 *)0x0;
puVar7 = *(undefined8 **)(param_1 + 0x7f60);
if (puVar7 != (undefined8 *)0x0) {
lVar6 = *(longlong *)(param_1 + 0x7f58);
piVar5 = (int *)(lVar6 + 8);
puVar9 = puVar8;
do {
if (*piVar5 == param_2) {
lVar10 = (longlong)puVar9 * 0x10;
uVar2 = *(uint *)(lVar10 + 0xc + lVar6);
*(int *)(lVar10 + 0xc + lVar6) = param_3;
puVar7 = (undefined8 *)FUN_14018b280(0x12);
if (puVar7 != (undefined8 *)0x0) {
puVar7[1] = 0;
*puVar7 = &PTR_LAB_140b55060;
puVar8 = puVar7;
}
puVar8 = puVar8 + 2;
*(undefined2 *)puVar8 = 0;
puVar7 = puVar8;
if ((param_4 == 0) &&
(puVar1 = (uint *)(lVar10 + 0xc + *(longlong *)(param_1 + 0x7f58)),
        uVar2 <= *puVar1 && *puVar1 != uVar2)) {
puVar9 = (undefined8 *)FUN_1403d2200();
puVar7 = (undefined8 *)*puVar9;
*puVar9 = puVar8;
if (local_res8 != 0) {
(**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
}
if (puVar7[-1] != 0) {
FUN_140003890(DAT_140c658a0,2,0,puVar7,0,0);
}
}
FUN_1404313e0(*(undefined8 *)(param_1 + 0x7340),*(longlong *)(param_1 + 0x7f58) + lVar10,
puVar7,param_4);
lVar6 = *(longlong *)(param_1 + 0x7f58);
lVar3 = *DAT_140c658d0;
uVar4 = FUN_1403d2140(param_1,*(undefined4 *)(lVar6 + 8 + lVar10));
(**(code **)(lVar3 + 8))(DAT_140c658d0,*(undefined4 *)(lVar6 + 8 + lVar10),uVar4,0);
lVar6 = *(longlong *)(param_1 + 0x7fe0);
if (lVar6 == 0) goto LAB_1403d210b;
puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x7f58) + lVar10);
goto LAB_1403d2100;
}
puVar9 = (undefined8 *)((longlong)puVar9 + 1);
piVar5 = piVar5 + 4;
} while (puVar9 < puVar7);
}
local_38 = 0;
local_30 = param_2;
iStack44 = param_3;
lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0x7f58),(longlong)puVar7 + 1U,0x10);
*(undefined8 *)(lVar6 + (longlong)puVar7 * 0x10) = 0;
*(ulonglong *)(lVar6 + 8 + (longlong)puVar7 * 0x10) = CONCAT44(iStack44,local_30);
if (*(longlong *)(param_1 + 0x7f58) != lVar6) {
FUN_1407db590(lVar6,*(longlong *)(param_1 + 0x7f58),*(longlong *)(param_1 + 0x7f60) << 4);
lVar10 = *(longlong *)(param_1 + 0x7f58);
if (lVar10 != 0) {
(**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
}
*(longlong *)(param_1 + 0x7f58) = lVar6;
}
*(ulonglong *)(param_1 + 0x7f60) = (longlong)puVar7 + 1U;
puVar7 = (undefined8 *)FUN_14018b280(0x12);
if (puVar7 != (undefined8 *)0x0) {
puVar7[1] = 0;
*puVar7 = &PTR_LAB_140b55060;
puVar8 = puVar7;
}
puVar8 = puVar8 + 2;
*(undefined2 *)puVar8 = 0;
puVar7 = puVar8;
if ((param_4 == 0) && (param_3 != 0)) {
puVar9 = (undefined8 *)FUN_1403d2200();
puVar7 = (undefined8 *)*puVar9;
*puVar9 = puVar8;
if (local_res8 != 0) {
(**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
}
if (puVar7[-1] != 0) {
FUN_140003890(DAT_140c658a0,2,0,puVar7,0,0);
}
}
FUN_1404313e0(*(undefined8 *)(param_1 + 0x7340),&local_38,puVar7,param_4);
lVar6 = *DAT_140c658d0;
uVar4 = FUN_1403d2140(param_1,param_2);
(**(code **)(lVar6 + 8))(DAT_140c658d0,param_2,uVar4,0);
lVar6 = *(longlong *)(param_1 + 0x7fe0);
if (lVar6 != 0) {
puVar8 = &local_38;
LAB_1403d2100:
FUN_1404356b0(lVar6,puVar8,puVar7,param_4);
}
LAB_1403d210b:
if (puVar7 != (undefined8 *)0x0) {
(**(code **)(puVar7[-2] + 8))(puVar7 + -2);
}
return;
}



uint FUN_1403d2140(longlong param_1,int param_2)

{
longlong lVar1;
ulonglong uVar2;
ulonglong uVar3;
int *piVar4;
uint uVar5;
int iVar6;
int iVar7;

lVar1 = FUN_1401fe020(param_2);
if ((lVar1 == 0) || (uVar5 = *(uint *)(lVar1 + 4), uVar5 == 0)) {
uVar5 = 0xffffffff;
}
uVar3 = 0;
iVar6 = 0;
iVar7 = iVar6;
if (*(ulonglong *)(param_1 + 0x7f60) != 0) {
piVar4 = (int *)(*(longlong *)(param_1 + 0x7f58) + 8);
uVar2 = uVar3;
do {
if (*piVar4 == param_2) {
iVar7 = *(int *)(*(longlong *)(param_1 + 0x7f58) + 0xc + uVar2 * 0x10);
break;
}
uVar2 = uVar2 + 1;
piVar4 = piVar4 + 4;
} while (uVar2 < *(ulonglong *)(param_1 + 0x7f60));
}
uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xa0);
if (uVar2 != 0) {
lVar1 = *(longlong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x98);
piVar4 = (int *)(lVar1 + 8);
do {
if (*piVar4 == param_2) {
iVar6 = *(int *)(lVar1 + 0xc + uVar3 * 0x10);
break;
}
uVar3 = uVar3 + 1;
piVar4 = piVar4 + 4;
} while (uVar3 < uVar2);
}
if ((uint)(iVar6 + iVar7) < uVar5) {
uVar5 = iVar6 + iVar7;
}
return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

longlong * FUN_1403d2200(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
short sVar1;
longlong lVar2;
undefined2 *puVar3;
short *psVar4;
undefined8 uVar5;
undefined8 *puVar6;
undefined8 *puVar7;
longlong lVar8;
undefined **local_e8;
undefined local_e0 [8];
undefined2 *local_d8;
undefined2 *local_d0;
undefined local_28 [16];
undefined2 *local_18;

lVar2 = FUN_1401fe020(param_3);
if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 2) != 0)) {
puVar6 = (undefined8 *)FUN_14018b280(0x12);
puVar7 = (undefined8 *)0x0;
if (puVar6 != (undefined8 *)0x0) {
puVar6[1] = 0;
*puVar6 = &PTR_LAB_140b55060;
puVar7 = puVar6;
}
*param_2 = (longlong)(puVar7 + 2);
*(undefined2 *)(puVar7 + 2) = 0;
}
else {
FUN_1400b6f30(&local_e8);
puVar7 = (undefined8 *)0x0;
local_18 = (undefined2 *)0x0;
local_28 = ZEXT816(0);
local_e8 = &PTR_FUN_140b69230;
puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
local_18 = puVar3 + 8;
local_28 = CONCAT88(puVar3,puVar3);
if (puVar3 != (undefined2 *)0x0) {
*puVar3 = 0;
}
psVar4 = (short *)FUN_14034bdd0(local_18,0xb2c93);
if (psVar4 == (short *)0x0) {
if (local_d8 != local_d0) {
*local_d8 = 0;
local_d0 = local_d8;
}
}
else {
sVar1 = *psVar4;
puVar6 = puVar7;
while (sVar1 != 0) {
puVar6 = (undefined8 *)((longlong)puVar6 + 1);
sVar1 = psVar4[(longlong)puVar6];
}
FUN_14001c480(local_e0,psVar4,psVar4 + (longlong)puVar6);
}
lVar2 = FUN_14018b280(0x60);
puVar6 = puVar7;
if (lVar2 != 0) {
uVar5 = FUN_14034bdd0();
puVar6 = (undefined8 *)FUN_1404ddb40(lVar2,uVar5);
}
FUN_1400b7480(&local_e8,puVar6);
lVar2 = FUN_1400b7660(&local_e8);
lVar8 = *(longlong *)(lVar2 + 0x10) - *(longlong *)(lVar2 + 8) >> 1;
puVar6 = (undefined8 *)FUN_14018b280(lVar8 * 2 + 0x12,0);
if (puVar6 != (undefined8 *)0x0) {
puVar6[1] = lVar8;
*puVar6 = &PTR_LAB_140b55060;
puVar7 = puVar6;
}
puVar7 = puVar7 + 2;
FUN_1407db590(puVar7,*(undefined8 *)(lVar2 + 8),lVar8 * 2);
*(undefined2 *)(lVar8 * 2 + (longlong)puVar7) = 0;
*param_2 = (longlong)puVar7;
if (local_28._0_8_ != 0) {
FUN_14018b900(local_28._0_8_,0);
}
FUN_1400b7390(&local_e8);
}
return param_2;
}



undefined8 FUN_1403d2400(undefined8 param_1,longlong param_2)

{
int iVar1;
undefined8 uVar2;
longlong lVar3;
longlong lVar4;
longlong *plVar5;
undefined local_18 [16];

lVar3 = DAT_140c65898;
if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
return 0;
}
if (param_2 == 0) {
return 0;
}
lVar4 = *(longlong *)(param_2 + 0xf00);
if (((lVar4 == 0) || ((*(int *)(lVar4 + 0x80) - 3U & 0xfffffff9) != 0)) ||
(*(int *)(lVar4 + 0x80) == 5)) {
lVar4 = param_2;
}
if (lVar4 == 0) {
return 0;
}
plVar5 = *(longlong **)(lVar4 + 0x16f0);
if ((plVar5 == (longlong *)0x0) &&
(plVar5 = *(longlong **)(lVar4 + 0x16f8), plVar5 == (longlong *)0x0)) {
return 0;
}
if (*(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x3c8) != 0) {
return 1;
}
iVar1 = FUN_1403b48b0(param_2);
if (((iVar1 != 0) && (iVar1 = FUN_1403b48b0(*(undefined8 *)(lVar3 + 0x78)), iVar1 != 0)) &&
(iVar1 = FUN_14045a950(*(undefined8 *)(lVar3 + 0x78),*(undefined4 *)(param_2 + 8)), iVar1 == 0)
) {
iVar1 = (**(code **)(*plVar5 + 0x108))(plVar5,0,1,1);
if (iVar1 != 0) {
return 1;
}
iVar1 = (**(code **)(*plVar5 + 0x100))(plVar5);
if (iVar1 == 0) {
return 1;
}
lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
if (lVar3 == 0) {
lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
}
uVar2 = FUN_1403d8b90();
lVar3 = FUN_140251620(local_18,param_2 + 0x11e0,uVar2,lVar3 + 0x1e0);
if (*(float *)(lVar3 + 8) <= 0.0 && *(float *)(lVar3 + 8) != 0.0) {
return 1;
}
}
return 0;
}



longlong FUN_1403d2690(longlong param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
uint local_res8;
undefined4 local_resc;
longlong local_res18;
longlong local_res20;

lVar1 = *(longlong *)(param_1 + 8);
local_res18 = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(uint *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res18 = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res18 == lVar1) || (*param_2 < *(uint *)(local_res18 + 0x20))) {
local_res8 = *param_2;
local_resc = 0;
FUN_140032b30(param_1,&local_res20,&local_res18,&local_res8);
local_res18 = local_res20;
}
return local_res18 + 0x24;
}



longlong FUN_1403d2710(undefined8 param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
ulonglong local_res8 [2];
longlong local_res18;
longlong local_res20;

local_res18 = DAT_140dc22e8;
if (*(longlong *)(DAT_140dc22e8 + 8) != 0) {
lVar1 = *(longlong *)(DAT_140dc22e8 + 8);
do {
if (*(int *)(lVar1 + 0x20) < (int)*param_2) {
lVar2 = *(longlong *)(lVar1 + 0x18);
}
else {
lVar2 = *(longlong *)(lVar1 + 0x10);
local_res18 = lVar1;
}
lVar1 = lVar2;
} while (lVar2 != 0);
}
if ((local_res18 == DAT_140dc22e8) || ((int)*param_2 < *(int *)(local_res18 + 0x20))) {
local_res8[0] = (ulonglong)*param_2;
FUN_1403d3e70(&DAT_140dc22e0,&local_res20,&local_res18,local_res8);
local_res18 = local_res20;
}
return local_res18 + 0x24;
}



longlong FUN_1403d2790(longlong param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8 [2];
longlong local_res18 [2];
uint uStack128;
uint uStack116;
uint local_60 [2];
undefined8 local_58;
undefined8 local_50;
undefined8 local_48;
undefined8 local_40;
undefined8 local_38;
ulonglong local_30;
longlong local_28;
undefined8 local_20;
undefined8 local_18;

lVar1 = *(longlong *)(param_1 + 8);
local_res8[0] = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(uint *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res8[0] = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res8[0] == lVar1) || (*param_2 < *(uint *)(local_res8[0] + 0x20))) {
local_60[0] = *param_2;
local_58 = 0x400000000;
local_50 = 0;
local_48 = 0x100000000;
local_40 = 0x100000000;
local_20 = 0;
local_38 = 0;
local_18 = 0;
local_30 = (ulonglong)uStack128;
local_28 = (ulonglong)uStack116 << 0x20;
FUN_1403d5050(param_1,local_res18,local_res8,local_60);
local_res8[0] = local_res18[0];
}
return local_res8[0] + 0x28;
}



longlong FUN_1403d2880(longlong param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8 [2];
longlong local_res18 [2];
uint local_48;
undefined4 local_44;
undefined4 local_40;
undefined4 local_3c;
undefined4 local_38;
undefined4 local_34;
undefined4 local_30;
undefined4 local_2c;
undefined4 local_28;
undefined4 local_24;
undefined4 local_20;
undefined4 local_1c;
undefined4 local_18;

lVar1 = *(longlong *)(param_1 + 8);
local_res8[0] = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(uint *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res8[0] = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res8[0] == lVar1) || (*param_2 < *(uint *)(local_res8[0] + 0x20))) {
local_34 = 0;
local_44 = 0;
local_40 = 0;
local_48 = *param_2;
local_3c = 0;
local_38 = 0;
local_30 = 0;
local_2c = 0;
local_28 = 0;
local_20 = 0;
local_24 = 0;
local_18 = 0;
local_1c = 0;
FUN_1403d5240(param_1,local_res18,local_res8,&local_48);
local_res8[0] = local_res18[0];
}
return local_res8[0] + 0x24;
}



longlong FUN_1403d2990(longlong param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8;
longlong local_res18;
undefined local_58 [8];
undefined *local_50;
undefined8 local_48;
uint local_38 [2];
undefined local_30 [8];
undefined8 local_28;

lVar1 = *(longlong *)(param_1 + 8);
local_res8 = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(uint *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res8 = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
local_50 = (undefined *)FUN_14018b280();
local_48 = 0;
*local_50 = 0;
*(undefined8 *)(local_50 + 8) = 0;
*(undefined **)(local_50 + 0x10) = local_50;
*(undefined **)(local_50 + 0x18) = local_50;
local_38[0] = *param_2;
FUN_1403d2aa0(local_30,local_58);
FUN_1403d5430(param_1,&local_res18,&local_res8,local_38);
FUN_140008410(local_30);
FUN_14018b900(local_28,0);
FUN_140008410(local_58);
FUN_14018b900(local_50,0);
local_res8 = local_res18;
}
return local_res8 + 0x28;
}



longlong FUN_1403d2aa0(longlong param_1,longlong param_2)

{
longlong lVar1;
longlong lVar2;
undefined *puVar3;
undefined8 uVar4;

puVar3 = (undefined *)FUN_14018b280();
*(undefined **)(param_1 + 8) = puVar3;
*(undefined8 *)(param_1 + 0x10) = 0;
lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
*puVar3 = 0;
if (lVar1 == 0) {
*(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
}
else {
lVar1 = *(longlong *)(param_1 + 8);
uVar4 = FUN_1403d59a0(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
*(undefined8 *)(lVar1 + 8) = uVar4;
lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
lVar1 = lVar2;
}
*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
for (lVar2 = *(longlong *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
lVar1 = lVar2;
}
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1;
}
*(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
return param_1;
}



void FUN_1403d2b70(longlong *param_1)

{
    ulonglong *puVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar10 = param_1[1];
    if (1 < uVar10) {
        local_28 = *param_1;
        uVar9 = 0;
        local_20 = &LAB_1403d33b0;
        local_18 = 0;
        uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar10),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar10) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        local_10 = FUN_14018b280(uVar5,0);
        if (uVar10 != 0) {
            uVar6 = uVar9;
            if (1 < uVar10) {
                uVar8 = uVar9;
                do {
                    uVar6 = uVar8 + 2;
                    puVar1 = (ulonglong *)(local_10 + -0x10 + uVar6 * 8);
                    *puVar1 = uVar8;
                    puVar1[1] = uVar8 + 1;
                    uVar8 = uVar6;
                } while (uVar6 < uVar10 - ((uint)uVar10 & 1));
            }
            for (; uVar6 < uVar10; uVar6 = uVar6 + 1) {
                *(ulonglong *)(local_10 + uVar6 * 8) = uVar6;
            }
        }
        FUN_14001fec0(&LAB_140029df0,local_10,uVar10,&local_28);
        uVar8 = 1;
        uVar10 = uVar9;
        uVar6 = uVar9;
        if (1 < (ulonglong)param_1[1]) {
            do {
                lVar4 = *(longlong *)(local_10 + uVar8 * 8);
                uVar2 = *(uint *)(*param_1 + *(longlong *)(uVar6 + local_10) * 4);
                uVar3 = *(uint *)(*param_1 + lVar4 * 4);
                if ((uVar2 < uVar3) || (uVar3 < uVar2)) {
                    uVar10 = uVar10 + 1;
                    uVar6 = uVar10 * 8;
                    *(longlong *)(uVar6 + local_10) = lVar4;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < (ulonglong)param_1[1]);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == 0) {
            puVar11 = (undefined8 *)0x0;
        }
        else {
            puVar7 = (undefined8 *)FUN_14018b280(uVar10 * 4 + 0x10,0);
            if (puVar7 == (undefined8 *)0x0) {
                puVar11 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar7[1] = uVar10;
                puVar11 = puVar7 + 2;
                *puVar7 = &PTR_LAB_140b55060;
            }
        }
        if (uVar10 != 0) {
            do {
                lVar4 = uVar9 * 8;
                uVar9 = uVar9 + 1;
                *(undefined4 *)((longlong)puVar11 + uVar9 * 4 + -4) =
                *(undefined4 *)(*param_1 + *(longlong *)(local_10 + lVar4) * 4);
            } while (uVar9 < uVar10);
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        param_1[1] = uVar10;
        *param_1 = (longlong)puVar11;
        FUN_14018b900(local_10,0);
    }
    return;
}



undefined8 FUN_1403d2d60(undefined8 param_1,uint param_2)

{
longlong lVar1;
longlong lVar2;
longlong local_res8;

lVar1 = *(longlong *)(DAT_140c65960 + 0x10);
local_res8 = lVar1;
for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
local_res8 = lVar2;
}
if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
local_res8 = lVar1;
}
if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
lVar1 = *(longlong *)(local_res8 + 0xb0);
local_res8 = lVar1;
lVar2 = *(longlong *)(lVar1 + 8);
while (lVar2 != 0) {
if (*(uint *)(lVar2 + 0x20) < param_2) {
lVar2 = *(longlong *)(lVar2 + 0x18);
}
else {
local_res8 = lVar2;
lVar2 = *(longlong *)(lVar2 + 0x10);
}
}
if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
local_res8 = lVar1;
}
if (local_res8 != lVar1) {
return *(undefined8 *)(local_res8 + 0x28);
}
}
return 0;
}



ulonglong FUN_1403d2e10(longlong param_1,int *param_2)

{
int iVar1;
longlong lVar2;
byte bVar3;
uint uVar4;
ulonglong uVar5;
uint uVar6;

iVar1 = *param_2;
if (iVar1 == 0) {
uVar4 = FUN_1403d6640(param_1,param_2[1]);
if ((-1 < (int)uVar4) && (*param_2 == 0)) {
if (param_2[1] - 0x11U < 4) {
uVar6 = 0x11;
*(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
do {
if ((uVar6 < *(uint *)(param_1 + 4)) &&
(lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 8),
lVar2 != 0)) {
lVar2 = *(longlong *)(lVar2 + 0x40);
if ((*(uint *)(lVar2 + 0x154) & 0x100) == 0) {
bVar3 = 0;
}
else {
bVar3 = *(byte *)(lVar2 + 0x1a0);
}
*(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)bVar3;
}
uVar6 = uVar6 + 1;
} while (uVar6 < 0x15);
return (ulonglong)uVar4;
}
if (param_2[1] - 0x15U < 10) {
uVar6 = 0x15;
*(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
do {
if ((uVar6 < *(uint *)(param_1 + 4)) &&
(lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 8),
lVar2 != 0)) {
lVar2 = *(longlong *)(lVar2 + 0x40);
if ((*(uint *)(lVar2 + 0x154) & 0x100) == 0) {
bVar3 = 0;
}
else {
bVar3 = *(byte *)(lVar2 + 0x1a0);
}
*(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + (uint)bVar3;
}
uVar6 = uVar6 + 1;
} while (uVar6 < 0x1f);
}
}
return (ulonglong)uVar4;
}
if (iVar1 == 1) {
uVar5 = FUN_1403d6640(param_1 + 0x18,param_2[1]);
return uVar5;
}
if (iVar1 == 2) {
uVar5 = FUN_1403d6640(param_1 + 0x30,param_2[1]);
return uVar5;
}
if (iVar1 == 10) {
uVar5 = FUN_1403d6640(param_1 + 0x48,param_2[1]);
return uVar5;
}
if (iVar1 == 5) {
uVar5 = FUN_1403d6640(param_1 + 0x60,param_2[1]);
return uVar5;
}
if (iVar1 == 8) {
uVar5 = FUN_1403d6640(param_1 + 0x78,param_2[1]);
return uVar5;
}
if (iVar1 == 9) {
uVar5 = FUN_1403d6640(param_1 + 0x90,param_2[1]);
return uVar5;
}
return 0x80004005;
}



void FUN_1403d2fc0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1[1] == 0) {
        lVar2 = FUN_14018db00(*param_1,0,0x100);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] << 8);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}



longlong FUN_1403d3040(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar1 = param_1[1];
    lVar5 = FUN_14018db00(*param_1,lVar1 + 1,0x100);
    puVar7 = (undefined4 *)(lVar1 * 0x100 + lVar5);
    if ((((uint)param_2 | (uint)puVar7) & 0xf) == 0) {
        lVar6 = 2;
        do {
            uVar2 = param_2[1];
            uVar3 = param_2[2];
            uVar4 = param_2[3];
            *puVar7 = *param_2;
            puVar7[1] = uVar2;
            puVar7[2] = uVar3;
            puVar7[3] = uVar4;
            uVar2 = param_2[5];
            uVar3 = param_2[6];
            uVar4 = param_2[7];
            puVar7[4] = param_2[4];
            puVar7[5] = uVar2;
            puVar7[6] = uVar3;
            puVar7[7] = uVar4;
            uVar2 = param_2[9];
            uVar3 = param_2[10];
            uVar4 = param_2[0xb];
            puVar7[8] = param_2[8];
            puVar7[9] = uVar2;
            puVar7[10] = uVar3;
            puVar7[0xb] = uVar4;
            uVar2 = param_2[0xd];
            uVar3 = param_2[0xe];
            uVar4 = param_2[0xf];
            puVar7[0xc] = param_2[0xc];
            puVar7[0xd] = uVar2;
            puVar7[0xe] = uVar3;
            puVar7[0xf] = uVar4;
            uVar2 = param_2[0x11];
            uVar3 = param_2[0x12];
            uVar4 = param_2[0x13];
            puVar7[0x10] = param_2[0x10];
            puVar7[0x11] = uVar2;
            puVar7[0x12] = uVar3;
            puVar7[0x13] = uVar4;
            uVar2 = param_2[0x15];
            uVar3 = param_2[0x16];
            uVar4 = param_2[0x17];
            puVar7[0x14] = param_2[0x14];
            puVar7[0x15] = uVar2;
            puVar7[0x16] = uVar3;
            puVar7[0x17] = uVar4;
            uVar2 = param_2[0x19];
            uVar3 = param_2[0x1a];
            uVar4 = param_2[0x1b];
            puVar7[0x18] = param_2[0x18];
            puVar7[0x19] = uVar2;
            puVar7[0x1a] = uVar3;
            puVar7[0x1b] = uVar4;
            uVar2 = param_2[0x1d];
            uVar3 = param_2[0x1e];
            uVar4 = param_2[0x1f];
            puVar7[0x1c] = param_2[0x1c];
            puVar7[0x1d] = uVar2;
            puVar7[0x1e] = uVar3;
            puVar7[0x1f] = uVar4;
            lVar6 = lVar6 + -1;
            puVar7 = puVar7 + 0x20;
            param_2 = param_2 + 0x20;
        } while (lVar6 != 0);
    }
    else {
        FUN_1407db590(puVar7,param_2,0x100);
    }
    if (*param_1 != lVar5) {
        FUN_1407db590(lVar5,*param_1,param_1[1] << 8);
        lVar6 = *param_1;
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}
