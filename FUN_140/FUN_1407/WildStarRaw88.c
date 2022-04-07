//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 * FUN_140776900(longlong param_1,undefined8 *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    undefined8 *puVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar3 = *param_3;
    pcVar5 = *(char **)(param_1 + 8);
    pcVar6 = pcVar3;
    if (pcVar3 != *(char **)(pcVar5 + 0x10)) {
        if (pcVar3 == pcVar5) {
            pcVar5 = *(char **)(pcVar5 + 0x18);
            if ((*param_4 <= *(uint *)(pcVar5 + 0x20)) &&
                ((*param_4 < *(uint *)(pcVar5 + 0x20) || (param_4[1] <= *(uint *)(pcVar5 + 0x24)))))
                goto LAB_140776941;
        }
        else {
            if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                pcVar5 = *(char **)(pcVar3 + 0x18);
            }
            else {
                pcVar5 = *(char **)(pcVar3 + 0x10);
                if (pcVar5 == (char *)0x0) {
                    pcVar5 = *(char **)(pcVar3 + 8);
                    pcVar4 = pcVar5;
                    if (pcVar3 == *(char **)(pcVar5 + 0x10)) {
                        do {
                            pcVar5 = *(char **)(pcVar4 + 8);
                            bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                            pcVar4 = pcVar5;
                        } while (bVar7);
                    }
                }
                else {
                    for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                         pcVar4 = *(char **)(pcVar4 + 0x18)) {
                        pcVar5 = pcVar4;
                    }
                }
            }
            uVar1 = *param_4;
            if (((uVar1 <= *(uint *)(pcVar5 + 0x20)) &&
                 ((uVar1 < *(uint *)(pcVar5 + 0x20) || (param_4[1] <= *(uint *)(pcVar5 + 0x24))))) ||
                ((*(uint *)(pcVar3 + 0x20) <= uVar1 &&
                  ((*(uint *)(pcVar3 + 0x20) < uVar1 || (*(uint *)(pcVar3 + 0x24) <= param_4[1]))))))
                goto LAB_140776941;
            if (*(longlong *)(pcVar5 + 0x18) != 0) goto LAB_140776a2a;
        }
        pcVar3 = (char *)0x0;
        pcVar6 = pcVar5;
        LAB_140776a2a:
        FUN_140776b20(param_1,param_2,pcVar3,pcVar6,param_4);
        return param_2;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        if ((*param_4 < *(uint *)(pcVar3 + 0x20)) ||
            ((*param_4 <= *(uint *)(pcVar3 + 0x20) && (param_4[1] < *(uint *)(pcVar3 + 0x24)))))
            goto LAB_140776a2a;
    }
    LAB_140776941:
    puVar2 = (undefined8 *)FUN_140776c40(param_1,local_18,param_4);
    *param_2 = *puVar2;
    return param_2;
}



void FUN_140776a40(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_140776d80(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_140776b20(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(uint *)(param_4 + 0x20) <= *param_5) &&
            ((*(uint *)(param_4 + 0x20) < *param_5 || (*(uint *)(param_4 + 0x24) <= param_5[1])))) {
            lVar2 = FUN_14018b280();
            if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
                *(uint *)(lVar2 + 0x20) = *param_5;
                *(uint *)(lVar2 + 0x24) = param_5[1];
                *(uint *)(lVar2 + 0x28) = param_5[2];
                *(uint *)(lVar2 + 0x2c) = param_5[3];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_140776bf8;
        }
    }
    lVar2 = FUN_14018b280(0x30);
    if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
        *(uint *)(lVar2 + 0x20) = *param_5;
        *(uint *)(lVar2 + 0x24) = param_5[1];
        *(uint *)(lVar2 + 0x28) = param_5[2];
        *(uint *)(lVar2 + 0x2c) = param_5[3];
    }
    *(longlong *)(param_4 + 0x10) = lVar2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar2;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar2;
    }
    LAB_140776bf8:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140776c40(longlong param_1,char **param_2,uint *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            if ((*param_3 < *(uint *)(pcVar5 + 0x20)) ||
                ((*param_3 <= *(uint *)(pcVar5 + 0x20) && (param_3[1] < *(uint *)(pcVar5 + 0x24))))) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
                bVar6 = false;
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140776d29;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if ((*param_3 <= *(uint *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(uint *)(pcVar3 + 0x20) || (param_3[1] <= *(uint *)(pcVar3 + 0x24))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140776d29:
    ppcVar1 = (char **)FUN_140776b20(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140776d80(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8b154,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140776e46. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



undefined4 *
FUN_140776e80(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 4) = puVar1;
    *(undefined2 **)(param_1 + 6) = puVar1;
    *(undefined2 **)(param_1 + 8) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0xc) = puVar1;
    *(undefined2 **)(param_1 + 0xe) = puVar1;
    *(undefined2 **)(param_1 + 0x10) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x14) = puVar1;
    *(undefined2 **)(param_1 + 0x16) = puVar1;
    *(undefined2 **)(param_1 + 0x18) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *param_1 = param_2;
    if (*(undefined2 **)(param_1 + 0x14) != *(undefined2 **)(param_1 + 0x16)) {
        **(undefined2 **)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x14);
    }
    FUN_1407771f0(param_1,1,param_4,param_5,param_6);
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001407770f1)

undefined4 *
FUN_140776f80(undefined4 *param_1,undefined4 param_2,short *param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
    short sVar1;
    ushort uVar2;
    longlong lVar3;
    int iVar4;
    undefined2 *puVar5;
    ulonglong uVar6;
    ushort *puVar7;
    short *psVar8;
    undefined8 uVar9;
    ushort *puVar10;
    ulonglong uVar11;
    undefined local_38 [8];
    ushort *local_30;
    ushort *local_28;
    ushort *local_20;

    uVar11 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 4) = puVar5;
    *(undefined2 **)(param_1 + 6) = puVar5;
    *(undefined2 **)(param_1 + 8) = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0xc) = puVar5;
    *(undefined2 **)(param_1 + 0xe) = puVar5;
    *(undefined2 **)(param_1 + 0x10) = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x14) = puVar5;
    *(undefined2 **)(param_1 + 0x16) = puVar5;
    *(undefined2 **)(param_1 + 0x18) = puVar5 + 8;
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *param_1 = param_2;
    psVar8 = (short *)&DAT_1409f9c34;
    if (param_3 != (short *)0x0) {
        psVar8 = param_3;
    }
    sVar1 = *psVar8;
    uVar6 = uVar11;
    while (sVar1 != 0) {
        uVar6 = uVar6 + 1;
        sVar1 = psVar8[uVar6];
    }
    FUN_14001c480(param_1 + 0x12,psVar8,psVar8 + uVar6);
    puVar7 = (ushort *)FUN_14018b280(0x10);
    local_20 = puVar7 + 8;
    if (puVar7 != (ushort *)0x0) {
        *puVar7 = 0;
    }
    psVar8 = (short *)&DAT_1409f9c0c;
    if (*(short **)(DAT_140c65898 + 0x88) != (short *)0x0) {
        psVar8 = *(short **)(DAT_140c65898 + 0x88);
    }
    sVar1 = *psVar8;
    uVar6 = uVar11;
    while (sVar1 != 0) {
        uVar6 = uVar6 + 1;
        sVar1 = psVar8[uVar6];
    }
    local_30 = puVar7;
    local_28 = puVar7;
    if ((longlong)(uVar6 * 2) >> 1 == 0) {
        FUN_1407db590(puVar7);
        puVar10 = puVar7;
    }
    else {
        FUN_14001c310(local_38);
        puVar7 = local_28;
        puVar10 = local_30;
    }
    lVar3 = *(longlong *)(param_1 + 0x14);
    uVar6 = *(longlong *)(param_1 + 0x16) - lVar3 >> 1;
    if (uVar6 == (longlong)puVar7 - (longlong)puVar10 >> 1) {
        if (uVar6 != 0) {
            puVar7 = puVar10;
            do {
                uVar2 = *(ushort *)((lVar3 - (longlong)puVar10) + (longlong)puVar7);
                if (uVar2 != *puVar7) {
                    iVar4 = 1;
                    if (uVar2 < *puVar7) {
                        iVar4 = -1;
                    }
                    if (iVar4 != 0) goto LAB_1407771e1;
                    break;
                }
                uVar11 = uVar11 + 1;
                puVar7 = puVar7 + 1;
            } while (uVar11 < uVar6);
        }
    }
    else {
        LAB_1407771e1:
        if (lVar3 != *(longlong *)(param_1 + 0x16)) {
            uVar9 = 0;
            goto LAB_14077717d;
        }
    }
    uVar9 = 1;
    LAB_14077717d:
    FUN_1407771f0(param_1,uVar9,param_4,param_5,param_6);
    if (puVar10 != (ushort *)0x0) {
        FUN_14018b900(puVar10,0);
    }
    return param_1;
}



void FUN_1407771f0(longlong param_1,char param_2,short *param_3,short *param_4,undefined8 param_5)

{
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    short *psVar4;

    lVar3 = 0;
    *(char *)(param_1 + 4) = param_2;
    if (param_2 == '\0') {
        if (*(longlong *)(param_1 + 0x50) == *(longlong *)(param_1 + 0x58)) {
            psVar4 = (short *)&DAT_1409f9bd4;
            if (*(short **)(DAT_140c65898 + 0x88) != (short *)0x0) {
                psVar4 = *(short **)(DAT_140c65898 + 0x88);
            }
            sVar1 = *psVar4;
            lVar2 = lVar3;
            while (sVar1 != 0) {
                lVar2 = lVar2 + 1;
                sVar1 = psVar4[lVar2];
            }
            FUN_14001c480(param_1 + 0x48,psVar4,psVar4 + lVar2);
        }
    }
    else if (*(undefined2 **)(param_1 + 0x50) != *(undefined2 **)(param_1 + 0x58)) {
        **(undefined2 **)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    }
    if (param_3 != (short *)0x0) {
        sVar1 = *param_3;
        lVar2 = lVar3;
        while (sVar1 != 0) {
            lVar2 = lVar2 + 1;
            sVar1 = param_3[lVar2];
        }
        FUN_14001c480(param_1 + 8,param_3,param_3 + lVar2);
    }
    if (param_4 != (short *)0x0) {
        sVar1 = *param_4;
        while (sVar1 != 0) {
            lVar3 = lVar3 + 1;
            sVar1 = param_4[lVar3];
        }
        FUN_14001c480(param_1 + 0x28,param_4,param_4 + lVar3);
    }
    FUN_1407477a0(param_1 + 0x68,param_5);
    return;
}



void FUN_1407772f0(undefined8 *param_1,undefined8 param_2)

{
    short sVar1;
    ushort uVar2;
    ulonglong uVar3;
    wchar_t *pwVar4;
    int iVar5;
    undefined *puVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined2 *puVar9;
    short *psVar10;
    ushort *puVar11;
    longlong lVar12;
    int *piVar13;
    ulonglong *puVar14;
    ulonglong *puVar15;
    ushort *puVar16;
    ulonglong uVar17;
    longlong *plVar18;
    ulonglong uVar19;
    longlong lVar20;
    ushort *puVar21;
    short *psVar22;
    ushort *puVar23;
    uint uVar24;
    short *psVar25;
    short *psVar26;
    ushort *puVar27;
    undefined auStack1480 [32];
    wchar_t *local_5a8;
    short **local_5a0;
    wchar_t *local_598;
    int local_588 [2];
    longlong *local_580;
    uint local_578;
    ulonglong local_570;
    short *local_568;
    short *local_560;
    longlong local_558;
    wchar_t *local_550;
    longlong local_548;
    ulonglong local_540;
    undefined8 *local_538;
    short *local_530;
    longlong local_528;
    longlong local_520;
    ushort *local_510;
    ushort *local_508;
    ushort *local_500;
    undefined2 *local_4f8;
    undefined8 *local_4f0;
    ulonglong local_4e8;
    int local_4e0 [2];
    undefined8 local_4d8;
    undefined local_4c8 [92];
    undefined4 local_46c;
    longlong local_460;
    undefined8 local_458;
    short local_248 [264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1480;
    param_1[1] = param_2;
    local_4f0 = param_1 + 3;
    *param_1 = &PTR_FUN_140b76650;
    local_538 = param_1;
    puVar6 = (undefined *)FUN_14018b280(0x30);
    lVar8 = 0;
    param_1[4] = puVar6;
    param_1[5] = 0;
    *puVar6 = 0;
    *(undefined8 *)(param_1[4] + 8) = 0;
    *(undefined8 *)(param_1[4] + 0x10) = param_1[4];
    *(undefined8 *)(param_1[4] + 0x18) = param_1[4];
    uVar7 = FUN_14018b280(0x30,0);
    param_1[8] = uVar7;
    *(undefined8 *)uVar7 = uVar7;
    *(undefined8 *)(param_1[8] + 8) = param_1[8];
    lVar12 = DAT_140c63788;
    local_598 = L"LocalMacros.xml";
    lVar20 = DAT_140c63788 + 0xa7c;
    *(undefined4 *)(param_1 + 9) = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    local_5a0 = *(short ***)(lVar12 + 0x1320);
    local_5a8 = L"NCSOFT";
    iVar5 = FUN_14001b370(local_248,0x104,L"%s\\%s\\%s\\%s",lVar20);
    if ((-1 < iVar5) && (local_248[0] != 0)) {
        psVar10 = local_248;
        do {
            psVar22 = psVar10 + 1;
            psVar10 = psVar10 + 1;
        } while (*psVar22 != 0);
    }
    local_528 = 0;
    while (local_248[0] != 0) {
        lVar8 = lVar8 + 1;
        local_248[0] = local_248[lVar8];
    }
    lVar20 = lVar8 * 2 >> 1;
    uVar19 = lVar20 + 1;
    if (uVar19 < 0x7fffffffffffffff) {
        local_528 = FUN_14018b280(uVar19 * 2,0);
    }
    lVar8 = local_528;
    lVar20 = lVar20 * 2;
    FUN_1407db590(local_528,local_248,lVar20);
    puVar9 = (undefined2 *)(lVar20 + lVar8);
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    puVar9 = (undefined2 *)FUN_14018b280(0x10);
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    local_4f8 = puVar9;
    FUN_1401a72e0(local_4c8);
    FUN_1401a59a0(local_4c8);
    lVar20 = local_460;
    local_46c = 0;
    local_460 = 0;
    if (lVar20 != 0) {
        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
    }
    FUN_14018b900(local_458,0);
    local_458 = 0;
    local_580 = (longlong *)0x0;
    iVar5 = FUN_1401b6d00();
    plVar18 = local_580;
    if (iVar5 < 0) {
        iVar5 = FUN_1401a81b0(local_4c8,iVar5,lVar8);
        if (local_580 == (longlong *)0x0) goto LAB_140777521;
        lVar20 = *local_580;
        plVar18 = local_580;
    }
    else {
        iVar5 = FUN_1401a7c70(local_4c8,local_580);
        if (plVar18 == (longlong *)0x0) goto LAB_140777521;
        lVar20 = *plVar18;
    }
    (**(code **)(lVar20 + 8))(plVar18);
    LAB_140777521:
    if (iVar5 < 0) {
        FUN_1401a76a0();
    }
    else {
        lVar20 = FUN_1401a5ae0(local_4c8,L"Macros");
        if (lVar20 == 0) {
            FUN_1401a76a0(local_4c8);
        }
        else {
            lVar20 = FUN_1401a5ae0(lVar20,L"Macro");
            while (local_520 = lVar20, lVar20 != 0) {
                lVar8 = FUN_1401a6b80(lVar20,L"Name");
                if (lVar8 == 0) {
                    psVar10 = (short *)0x0;
                }
                else {
                    psVar10 = (short *)FUN_1401a4f40(lVar8 + 0x20);
                }
                psVar25 = (short *)0x0;
                psVar22 = (short *)&DAT_1409f9b0c;
                if (psVar10 != (short *)0x0) {
                    psVar22 = psVar10;
                }
                local_548 = 0;
                sVar1 = *psVar22;
                psVar10 = psVar25;
                while (sVar1 != 0) {
                    psVar10 = (short *)((longlong)psVar10 + 1);
                    sVar1 = psVar22[(longlong)psVar10];
                }
                lVar8 = (longlong)psVar10 * 2 >> 1;
                uVar19 = lVar8 + 1;
                if (uVar19 < 0x7fffffffffffffff) {
                    local_548 = FUN_14018b280(uVar19 * 2,0);
                }
                lVar12 = local_548;
                lVar8 = lVar8 * 2;
                FUN_1407db590(local_548,psVar22,lVar8);
                puVar9 = (undefined2 *)(lVar12 + lVar8);
                if (puVar9 != (undefined2 *)0x0) {
                    *puVar9 = 0;
                }
                lVar8 = FUN_1401a6b80(lVar20,L"Character");
                psVar10 = psVar25;
                if (lVar8 != 0) {
                    psVar10 = (short *)FUN_1401a4f40(lVar8 + 0x20);
                }
                psVar22 = (short *)&DAT_1409f9da4;
                if (psVar10 != (short *)0x0) {
                    psVar22 = psVar10;
                }
                local_558 = 0;
                sVar1 = *psVar22;
                psVar10 = psVar25;
                while (sVar1 != 0) {
                    psVar10 = (short *)((longlong)psVar10 + 1);
                    sVar1 = psVar22[(longlong)psVar10];
                }
                lVar8 = (longlong)psVar10 * 2 >> 1;
                uVar19 = lVar8 + 1;
                if (uVar19 < 0x7fffffffffffffff) {
                    local_558 = FUN_14018b280(uVar19 * 2,0);
                }
                lVar12 = local_558;
                lVar8 = lVar8 * 2;
                FUN_1407db590(local_558,psVar22,lVar8);
                puVar9 = (undefined2 *)(lVar8 + lVar12);
                if (puVar9 != (undefined2 *)0x0) {
                    *puVar9 = 0;
                }
                lVar8 = FUN_1401a6b80(lVar20,L"Sprite");
                psVar10 = psVar25;
                if (lVar8 != 0) {
                    psVar10 = (short *)FUN_1401a4f40(lVar8 + 0x20);
                }
                psVar22 = (short *)&DAT_1409f9d44;
                if (psVar10 != (short *)0x0) {
                    psVar22 = psVar10;
                }
                local_550 = (wchar_t *)0x0;
                sVar1 = *psVar22;
                psVar10 = psVar25;
                while (sVar1 != 0) {
                    psVar10 = (short *)((longlong)psVar10 + 1);
                    sVar1 = psVar22[(longlong)psVar10];
                }
                lVar8 = (longlong)psVar10 * 2 >> 1;
                if (lVar8 + 1U < 0x7fffffffffffffff) {
                    local_550 = (wchar_t *)FUN_14018b280((lVar8 + 1U) * 2,0);
                }
                pwVar4 = local_550;
                FUN_1407db590(local_550,psVar22,lVar8 * 2);
                if (pwVar4 + lVar8 != (wchar_t *)0x0) {
                    pwVar4[lVar8] = L'\0';
                }
                local_588[0] = 0;
                lVar8 = FUN_1401a6b80(lVar20,&DAT_140b4f358);
                if (lVar8 != 0) {
                    uVar7 = FUN_1401a4f40(lVar8 + 0x20);
                    FUN_1407df428(uVar7,&DAT_1409e4114,local_588);
                }
                if (local_588[0] == 0) {
                    local_588[0] = *(int *)(param_1 + 9);
                }
                local_560 = (short *)0x0;
                local_568 = (short *)0x0;
                psVar10 = psVar25;
                if ((*(longlong **)(lVar20 + 0x30) != (longlong *)0x0) &&
                    (lVar8 = (**(code **)(**(longlong **)(lVar20 + 0x30) + 0x10))(), lVar8 != 0)) {
                    plVar18 = *(longlong **)(lVar20 + 0x30);
                    lVar20 = (**(code **)(*plVar18 + 0x30))(plVar18);
                    if (lVar20 == 0) {
                        psVar10 = (short *)FUN_1401a4f40(plVar18 + 3);
                    }
                }
                psVar22 = (short *)&DAT_1409f9d1c;
                if (psVar10 != (short *)0x0) {
                    psVar22 = psVar10;
                }
                local_580 = (longlong *)0x0;
                sVar1 = *psVar22;
                psVar10 = psVar25;
                while (sVar1 != 0) {
                    psVar10 = (short *)((longlong)psVar10 + 1);
                    sVar1 = psVar22[(longlong)psVar10];
                }
                lVar20 = (longlong)psVar10 * 2 >> 1;
                uVar19 = lVar20 + 1;
                if (uVar19 < 0x7fffffffffffffff) {
                    local_580 = (longlong *)FUN_14018b280(uVar19 * 2,0);
                }
                plVar18 = local_580;
                lVar20 = lVar20 * 2;
                FUN_1407db590(local_580,psVar22,lVar20);
                puVar9 = (undefined2 *)(lVar20 + (longlong)plVar18);
                if (puVar9 != (undefined2 *)0x0) {
                    *puVar9 = 0;
                }
                puVar11 = (ushort *)FUN_14018b280(2);
                puVar27 = puVar11 + 1;
                local_510 = puVar11;
                local_500 = puVar27;
                FUN_1407db590(puVar11,&DAT_1409f9cf4,0);
                if (puVar11 != (ushort *)0x0) {
                    *puVar11 = 0;
                }
                local_578 = 0;
                psVar10 = (short *)((longlong)puVar9 - (longlong)local_580 >> 1);
                puVar23 = puVar11;
                psVar22 = psVar25;
                psVar26 = psVar25;
                local_530 = psVar10;
                local_508 = puVar11;
                if (psVar10 != (short *)0x0) {
                    do {
                        uVar24 = (uint)psVar25;
                        uVar2 = *(ushort *)((longlong)local_580 + (longlong)psVar25 * 2);
                        if ((uVar2 < 0x3c) && ((0x800000000002400U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0)) {
                            lVar20 = (longlong)puVar23 - (longlong)puVar11 >> 1;
                            if (lVar20 != 0) {
                                FUN_140554170(&local_568);
                            }
                            psVar10 = local_530;
                            if (puVar11 != puVar23) {
                                FUN_1407db590(puVar11,puVar23,2);
                                puVar23 = puVar23 + -lVar20;
                                psVar10 = local_530;
                                local_508 = puVar23;
                            }
                        }
                        else {
                            uVar19 = (longlong)puVar23 - (longlong)puVar11 >> 1;
                            if ((uVar19 != 0) || ((uVar2 != 9 && (uVar2 != 0x20)))) {
                                puVar16 = puVar11;
                                puVar21 = puVar23;
                                if (puVar23 + 1 == puVar27) {
                                    local_570 = uVar19;
                                    local_540 = 1;
                                    puVar14 = &local_540;
                                    if (uVar19 != 0) {
                                        puVar14 = &local_570;
                                    }
                                    local_540 = *puVar14 + uVar19;
                                    puVar15 = &local_570;
                                    if (uVar19 <= *puVar14 + uVar19) {
                                        puVar15 = &local_540;
                                    }
                                    uVar19 = *puVar15;
                                    puVar16 = (ushort *)FUN_14018b280();
                                    puVar21 = puVar16;
                                    if (puVar11 != puVar23) {
                                        do {
                                            if (puVar21 != (ushort *)0x0) {
                                                *puVar21 = *(ushort *)
                                                        ((longlong)puVar21 + ((longlong)puVar11 - (longlong)puVar16));
                                            }
                                            puVar21 = puVar21 + 1;
                                        } while ((ushort *)((longlong)puVar21 + ((longlong)puVar11 - (longlong)puVar16))
                                                 != puVar23);
                                    }
                                    if (puVar21 != (ushort *)0x0) {
                                        *puVar21 = 0;
                                    }
                                    if (puVar11 != (ushort *)0x0) {
                                        FUN_14018b900(puVar11);
                                    }
                                    puVar27 = puVar16 + uVar19 + 1;
                                    psVar10 = local_530;
                                    uVar24 = local_578;
                                    local_510 = puVar16;
                                    local_500 = puVar27;
                                }
                                puVar23 = puVar21 + 1;
                                if (puVar23 != (ushort *)0x0) {
                                    *puVar23 = 0;
                                }
                                *puVar21 = uVar2;
                                puVar11 = puVar16;
                                local_508 = puVar23;
                            }
                        }
                        local_578 = uVar24 + 1;
                        psVar25 = (short *)(ulonglong)local_578;
                        psVar22 = local_568;
                        psVar26 = local_560;
                    } while (psVar25 < psVar10);
                }
                if ((longlong)puVar23 - (longlong)puVar11 >> 1 != 0) {
                    FUN_140554170(&local_568);
                    psVar22 = local_568;
                    psVar26 = local_560;
                }
                lVar12 = FUN_14018b280(0x78);
                lVar8 = local_548;
                pwVar4 = local_550;
                lVar20 = local_558;
                if (lVar12 == 0) {
                    piVar13 = (int *)0x0;
                }
                else {
                    local_5a0 = &local_568;
                    local_5a8 = local_550;
                    piVar13 = (int *)FUN_140776f80(lVar12,local_588[0],local_558,local_548);
                }
                iVar5 = *piVar13;
                uVar19 = local_4f0[1];
                uVar17 = uVar19;
                uVar3 = *(ulonglong *)(uVar19 + 8);
                while (uVar3 != 0) {
                    if (*(int *)(uVar3 + 0x20) < iVar5) {
                        uVar3 = *(ulonglong *)(uVar3 + 0x18);
                    }
                    else {
                        uVar17 = uVar3;
                        uVar3 = *(ulonglong *)(uVar3 + 0x10);
                    }
                }
                if ((uVar17 == uVar19) || (iVar5 < *(int *)(uVar17 + 0x20))) {
                    local_4d8 = 0;
                    local_570 = uVar17;
                    local_4e0[0] = iVar5;
                    FUN_14004f0d0(local_4f0,&local_4e8,&local_570,local_4e0);
                    uVar17 = local_4e8;
                }
                *(int **)(uVar17 + 0x28) = piVar13;
                local_588[0] = local_588[0] + 1;
                iVar5 = *(int *)(local_538 + 9);
                if (*(int *)(local_538 + 9) < local_588[0]) {
                    iVar5 = local_588[0];
                }
                *(int *)(local_538 + 9) = iVar5;
                if (puVar11 != (ushort *)0x0) {
                    FUN_14018b900(puVar11,0);
                }
                if (local_580 != (longlong *)0x0) {
                    FUN_14018b900(local_580,0);
                }
                if (psVar26 != (short *)0x0) {
                    plVar18 = (longlong *)(psVar22 + 4);
                    do {
                        if (*plVar18 != 0) {
                            FUN_14018b900(*plVar18,0);
                        }
                        plVar18 = plVar18 + 4;
                        psVar26 = (short *)((longlong)psVar26 + -1);
                    } while (psVar26 != (short *)0x0);
                }
                if (psVar22 != (short *)0x0) {
                    (**(code **)(*(longlong *)(psVar22 + -8) + 8))(psVar22 + -8);
                }
                if (pwVar4 != (wchar_t *)0x0) {
                    FUN_14018b900(pwVar4,0);
                }
                if (lVar20 != 0) {
                    FUN_14018b900(lVar20,0);
                }
                if (lVar8 != 0) {
                    FUN_14018b900(lVar8,0);
                }
                lVar20 = FUN_1401a5bc0(local_520,L"Macro");
                puVar9 = local_4f8;
                param_1 = local_538;
                lVar8 = local_528;
            }
            FUN_1401a76a0(local_4c8);
        }
    }
    if (puVar9 != (undefined2 *)0x0) {
        FUN_14018b900(puVar9,0);
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1480);
    return;
}



undefined8 FUN_140777c10(undefined8 param_1,ulonglong param_2)

{
    FUN_140777c50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140777c50(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    ulonglong uVar7;

    *param_1 = &PTR_FUN_140b76650;
    lVar4 = *(longlong *)(param_1[4] + 0x10);
    if (lVar4 != param_1[4]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                uVar7 = 0;
                if (*(longlong *)(lVar3 + 0x70) != 0) {
                    lVar6 = 0;
                    do {
                        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x68) + 8 + lVar6);
                        if (lVar1 != 0) {
                            FUN_14018b900(lVar1,0);
                        }
                        uVar7 = uVar7 + 1;
                        lVar6 = lVar6 + 0x20;
                    } while (uVar7 < *(ulonglong *)(lVar3 + 0x70));
                }
                lVar6 = *(longlong *)(lVar3 + 0x68);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                if (*(longlong *)(lVar3 + 0x50) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 0x50),0);
                }
                if (*(longlong *)(lVar3 + 0x30) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 0x30),0);
                }
                if (*(longlong *)(lVar3 + 0x10) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 0x10),0);
                }
                FUN_14018b900(lVar3,0);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar6 != 0;
                     lVar6 = *(longlong *)(lVar6 + 0x10)) {
                    lVar3 = lVar6;
                }
            }
        } while (lVar4 != param_1[4]);
    }
    plVar5 = *(longlong **)(longlong *)param_1[8];
    if (plVar5 != (longlong *)param_1[8]) {
        do {
            plVar2 = (longlong *)*plVar5;
            if (plVar5[3] != 0) {
                FUN_14018b900(plVar5[3],0);
            }
            FUN_14018b900(plVar5,0);
            plVar5 = plVar2;
        } while (plVar2 != (longlong *)param_1[8]);
    }
    *(undefined8 *)param_1[8] = param_1[8];
    *(undefined8 *)(param_1[8] + 8) = param_1[8];
    FUN_14018b900(param_1[8],0);
    FUN_140008410(param_1 + 3);
    FUN_14018b900(param_1[4],0);
    return;
}



longlong FUN_140777e10(longlong param_1)

{
    FUN_1400b9580(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x50),0);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x30),0);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x10),0);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



void FUN_140777e70(undefined8 param_1,float param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    double dVar4;
    bool bVar5;
    undefined2 *puVar6;
    ulonglong *puVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    undefined2 *puVar12;
    longlong lVar13;
    bool bVar14;
    int iVar15;
    ulonglong uVar16;
    float fVar17;
    ulonglong local_res8;
    undefined4 local_res10;
    ulonglong local_res18;
    undefined local_68 [8];
    undefined2 *local_60;

    puVar9 = (undefined2 *)0x0;
    param_2 = *(float *)(param_3 + 0x10) - param_2;
    bVar14 = false;
    local_res10 = 0;
    *(float *)(param_3 + 0x10) = param_2;
    if (0.0 < param_2) {
        return;
    }
    fVar17 = 0.25;
    *(float *)(param_3 + 0x10) = param_2 + 0.25;
    plVar1 = *(longlong **)(param_3 + 0x40);
    if ((longlong *)*plVar1 == plVar1) {
        return;
    }
    lVar2 = *(longlong *)(*plVar1 + 0x18);
    lVar13 = *(longlong *)(*plVar1 + 0x20) - lVar2 >> 1;
    uVar16 = lVar13 + 1;
    puVar6 = puVar9;
    if (uVar16 < 0x7fffffffffffffff) {
        puVar6 = (undefined2 *)FUN_14018b280(uVar16 * 2,0);
    }
    FUN_1407db590(puVar6,lVar2);
    puVar8 = puVar6 + lVar13;
    if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
    }
    plVar1 = **(longlong ***)(param_3 + 0x40);
    lVar2 = *plVar1;
    plVar3 = (longlong *)plVar1[1];
    *plVar3 = lVar2;
    *(longlong **)(lVar2 + 8) = plVar3;
    if (plVar1[3] != 0) {
        FUN_14018b900(plVar1[3],0);
    }
    FUN_14018b900(plVar1,0);
    uVar16 = (longlong)puVar8 - (longlong)puVar6 >> 1;
    puVar8 = local_60;
    if (10 < uVar16) {
        local_res18 = 0xb;
        puVar7 = &local_res8;
        if (10 < uVar16) {
            puVar7 = &local_res18;
        }
        local_res8 = uVar16;
        iVar15 = 1;
        bVar14 = true;
        puVar12 = puVar6 + *puVar7;
        uVar10 = ((longlong)puVar12 - (longlong)puVar6 >> 1) + 1;
        puVar8 = puVar9;
        if (uVar10 < 0x7fffffffffffffff) {
            puVar8 = (undefined2 *)FUN_14018b280(uVar10 * 2,0);
        }
        puVar11 = puVar8;
        if (puVar6 != puVar12) {
            do {
                if (puVar11 != (undefined2 *)0x0) {
                    *puVar11 = *(undefined2 *)(((longlong)puVar6 - (longlong)puVar8) + (longlong)puVar11);
                }
                puVar11 = puVar11 + 1;
            } while ((undefined2 *)(((longlong)puVar6 - (longlong)puVar8) + (longlong)puVar11) != puVar12)
                    ;
        }
        puVar12 = puVar9;
        if (puVar11 != (undefined2 *)0x0) {
            *puVar11 = 0;
        }
        do {
            puVar12 = (undefined2 *)((longlong)puVar12 + 1);
        } while (L"/macropause"[(longlong)puVar12] != L'\0');
        if ((undefined2 *)((longlong)puVar11 - (longlong)puVar8 >> 1) == puVar12) {
            bVar5 = true;
            puVar11 = puVar9;
            if (puVar12 != (undefined2 *)0x0) {
                do {
                    if (puVar8[(longlong)puVar11] != L"/macropause"[(longlong)puVar11]) {
                        if ((ushort)puVar8[(longlong)puVar11] < (ushort)L"/macropause"[(longlong)puVar11]) {
                            iVar15 = -1;
                        }
                        if (iVar15 != 0) goto LAB_14077806b;
                        break;
                    }
                    puVar11 = (undefined2 *)((longlong)puVar11 + 1);
                } while (puVar11 < puVar12);
            }
            goto LAB_14077806d;
        }
    }
    LAB_14077806b:
    bVar5 = false;
    LAB_14077806d:
    if ((bVar14) && (puVar8 != (undefined2 *)0x0)) {
        FUN_14018b900(puVar8,0);
    }
    if (bVar5) {
        if (0xb < uVar16) {
            local_res18 = 0xffffffffffffffff;
            local_res8 = uVar16 - 0xc;
            puVar7 = &local_res8;
            if (uVar16 - 0xc == 0xffffffffffffffff) {
                puVar7 = &local_res18;
            }
            puVar8 = puVar6 + 0xc;
            puVar12 = puVar6 + *puVar7 + 0xc;
            uVar16 = ((longlong)puVar12 - (longlong)puVar8 >> 1) + 1;
            if (uVar16 < 0x7fffffffffffffff) {
                puVar9 = (undefined2 *)FUN_14018b280(uVar16 * 2,0);
            }
            puVar11 = puVar9;
            if (puVar8 != puVar12) {
                do {
                    if (puVar11 != (undefined2 *)0x0) {
                        *puVar11 = *(undefined2 *)(((longlong)puVar8 - (longlong)puVar9) + (longlong)puVar11);
                    }
                    puVar11 = puVar11 + 1;
                } while ((undefined2 *)(((longlong)puVar8 - (longlong)puVar9) + (longlong)puVar11) !=
                         puVar12);
            }
            if (puVar11 != (undefined2 *)0x0) {
                *puVar11 = 0;
            }
            if (puVar6 != (undefined2 *)0x0) {
                FUN_14018b900(puVar6,0);
            }
            dVar4 = (double)FUN_1407dfe80(puVar9,0);
            fVar17 = (float)dVar4;
            puVar6 = puVar9;
        }
        *(float *)(param_3 + 0x10) = fVar17 + *(float *)(param_3 + 0x10);
    }
    else {
        FUN_14011b780(local_68,*(undefined8 *)(param_3 + 8),puVar6);
        if (local_60 != (undefined2 *)0x0) {
            FUN_14018b900(local_60,0);
        }
    }
    if (puVar6 != (undefined2 *)0x0) {
        FUN_14018b900(puVar6,0);
    }
    return;
}



void FUN_1407781b0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    longlong local_res10 [3];
    int local_18 [2];
    undefined8 local_10;

    local_18[0] = *param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < local_18[0]) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (local_18[0] < *(int *)(local_res8 + 0x20))) {
        local_10 = 0;
        FUN_14004f0d0(param_1 + 0x18,local_res10,&local_res8,local_18);
        local_res8 = local_res10[0];
    }
    *(int **)(local_res8 + 0x28) = param_2;
    return;
}



undefined8 FUN_140778230(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x20);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014077833f)

void FUN_140778290(longlong param_1,undefined8 param_2)

{
    short sVar1;
    ushort uVar2;
    longlong lVar3;
    int iVar4;
    ushort *puVar5;
    ulonglong uVar6;
    ushort *puVar7;
    longlong lVar8;
    short *psVar9;
    ulonglong uVar10;
    longlong lVar11;
    ushort *puVar12;
    ulonglong uVar13;
    undefined local_38 [8];
    ushort *local_30;
    ushort *local_28;
    ushort *local_20;

    puVar5 = (ushort *)FUN_14018b280(0x10);
    uVar13 = 0;
    local_20 = puVar5 + 8;
    if (puVar5 != (ushort *)0x0) {
        *puVar5 = 0;
    }
    psVar9 = (short *)&DAT_1409f9c94;
    if (*(short **)(DAT_140c65898 + 0x88) != (short *)0x0) {
        psVar9 = *(short **)(DAT_140c65898 + 0x88);
    }
    sVar1 = *psVar9;
    uVar6 = uVar13;
    while (sVar1 != 0) {
        uVar6 = uVar6 + 1;
        sVar1 = psVar9[uVar6];
    }
    local_30 = puVar5;
    local_28 = puVar5;
    if ((longlong)(uVar6 * 2) >> 1 == 0) {
        FUN_1407db590(puVar5,psVar9,0);
        puVar12 = puVar5;
    }
    else {
        FUN_14001c310(local_38);
        puVar5 = local_28;
        puVar12 = local_30;
    }
    FUN_1400523e0(param_2);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (lVar11 != *(longlong *)(param_1 + 0x20)) {
        do {
            if (*(char *)(*(longlong *)(lVar11 + 0x28) + 4) == '\0') {
                psVar9 = *(short **)(*(longlong *)(lVar11 + 0x28) + 0x50);
                sVar1 = *psVar9;
                uVar6 = uVar13;
                while (sVar1 != 0) {
                    uVar6 = uVar6 + 1;
                    sVar1 = psVar9[uVar6];
                }
                if (uVar6 == (longlong)puVar5 - (longlong)puVar12 >> 1) {
                    if (uVar6 != 0) {
                        puVar7 = puVar12;
                        uVar10 = uVar13;
                        do {
                            uVar2 = *(ushort *)(((longlong)psVar9 - (longlong)puVar12) + (longlong)puVar7);
                            if (uVar2 != *puVar7) {
                                iVar4 = 1;
                                if (uVar2 < *puVar7) {
                                    iVar4 = -1;
                                }
                                if (iVar4 != 0) goto LAB_14077842a;
                                break;
                            }
                            uVar10 = uVar10 + 1;
                            puVar7 = puVar7 + 1;
                        } while (uVar10 < uVar6);
                    }
                    goto LAB_14077841e;
                }
            }
            else {
                LAB_14077841e:
                FUN_140033260(param_2,lVar11 + 0x28);
            }
            LAB_14077842a:
            lVar8 = *(longlong *)(lVar11 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar11 = lVar8;
                        lVar8 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar8) {
                    lVar11 = lVar8;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar8 + 0x10); lVar11 = lVar8, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar8 = lVar3;
                }
            }
        } while (lVar11 != *(longlong *)(param_1 + 0x20));
    }
    if (puVar12 == (ushort *)0x0) {
        return;
    }
    FUN_14018b900(puVar12,0);
    return;
}



void FUN_1407784c0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x20);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) &&
        (uVar5 = 0, *(longlong *)(lVar1 + 0x70) != 0)) {
        do {
            lVar2 = *(longlong *)(param_1 + 0x40);
            lVar4 = uVar5 * 0x20 + *(longlong *)(lVar1 + 0x68);
            plVar3 = (longlong *)FUN_14018b280(0x30);
            if (plVar3 + 2 != (longlong *)0x0) {
                plVar3[3] = 0;
                plVar3[4] = 0;
                plVar3[5] = 0;
                FUN_14001c1b0(plVar3 + 2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
            }
            *plVar3 = lVar2;
            plVar3[1] = *(longlong *)(lVar2 + 8);
            uVar5 = (ulonglong)((int)uVar5 + 1);
            **(longlong ***)(lVar2 + 8) = plVar3;
            *(longlong **)(lVar2 + 8) = plVar3;
        } while (uVar5 < *(ulonglong *)(lVar1 + 0x70));
    }
    return;
}



void FUN_1407785e0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    int local_res10 [2];
    longlong local_res18;
    int local_18 [2];
    undefined8 local_10;

    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res10[0] = param_2;
    if ((lVar3 == lVar1) || (param_2 < *(int *)(lVar3 + 0x20))) {
        local_10 = 0;
        local_res8 = lVar3;
        local_18[0] = param_2;
        FUN_14004f0d0(param_1 + 0x18,&local_res18,&local_res8,local_18);
        lVar3 = local_res18;
    }
    if (*(longlong *)(lVar3 + 0x28) != 0) {
        FUN_140777e10();
    }
    FUN_140779270(param_1 + 0x18,local_res10);
    // WARNING: Could not recover jumptable at 0x000140778695. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7340) + 0x40))
            (*(longlong **)(DAT_140c65898 + 0x7340),0x405,0,(longlong)param_2);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407786a0(longlong param_1)

{
    short *psVar1;
    ulonglong uVar2;
    short sVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined auVar6 [16];
    longlong *plVar7;
    int iVar8;
    short *psVar9;
    undefined8 *puVar10;
    undefined2 *puVar11;
    undefined8 *puVar12;
    undefined8 uVar13;
    longlong lVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    longlong lVar17;
    longlong *plVar18;
    longlong lVar19;
    undefined8 *puVar20;
    undefined auStack1752 [32];
    wchar_t *local_6b8;
    undefined8 local_6b0;
    wchar_t *local_6a8;
    longlong *local_698;
    longlong local_690;
    undefined2 *local_688;
    undefined local_680 [8];
    undefined2 *local_678;
    undefined2 *local_670;
    undefined2 *local_668;
    undefined **local_658;
    longlong local_650;
    longlong local_648;
    uint local_640;
    undefined local_638 [16];
    undefined8 *local_628;
    undefined8 *local_620;
    longlong local_618;
    longlong local_610;
    int local_5fc;
    longlong local_5f0;
    undefined8 local_5e8;
    undefined **local_5d8;
    undefined *local_5d0;
    undefined local_5c8 [84];
    int local_574;
    undefined8 local_570;
    undefined local_568 [16];
    undefined **local_558;
    undefined *local_550;
    undefined local_548 [84];
    int local_4f4;
    undefined8 local_4f0;
    undefined local_4e8 [16];
    undefined **local_4d8;
    undefined *local_4d0;
    undefined local_4c8 [84];
    int local_474;
    undefined8 local_470;
    undefined local_468 [16];
    undefined **local_458;
    undefined *local_450;
    undefined local_448 [84];
    int local_3f4;
    undefined8 local_3f0;
    undefined local_3e8 [16];
    short local_3d8 [264];
    short local_1c8 [200];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1752;
    local_6b0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_6a8 = L"LocalMacros.xml";
    local_6b8 = L"NCSOFT";
    local_690 = param_1;
    iVar8 = FUN_14001b370(local_3d8,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    if ((-1 < iVar8) && (local_3d8[0] != 0)) {
        psVar9 = local_3d8;
        do {
            psVar1 = psVar9 + 1;
            psVar9 = psVar9 + 1;
        } while (*psVar1 != 0);
    }
    puVar20 = (undefined8 *)0x0;
    local_698 = (longlong *)0x0;
    puVar10 = puVar20;
    while (local_3d8[0] != 0) {
        puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        local_3d8[0] = local_3d8[(longlong)puVar10];
    }
    lVar17 = (longlong)puVar10 * 2 >> 1;
    uVar2 = lVar17 + 1;
    if (uVar2 < 0x7fffffffffffffff) {
        local_698 = (longlong *)FUN_14018b280(uVar2 * 2,0);
    }
    plVar18 = local_698;
    lVar17 = lVar17 * 2;
    FUN_1407db590(local_698,local_3d8,lVar17);
    puVar11 = (undefined2 *)(lVar17 + (longlong)plVar18);
    if (puVar11 != (undefined2 *)0x0) {
        *puVar11 = 0;
    }
    puVar11 = (undefined2 *)FUN_14018b280(0x10);
    if (puVar11 != (undefined2 *)0x0) {
        *puVar11 = 0;
    }
    local_688 = puVar11;
    FUN_1401a72e0(&local_658);
    puVar12 = (undefined8 *)(*(code *)local_458[2])(&local_458);
    puVar10 = puVar20;
    if (puVar12 != (undefined8 *)0x0) {
        puVar12[2] = 0;
        puVar12[1] = &local_658;
        *(undefined4 *)(puVar12 + 3) = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        *puVar12 = &PTR_LAB_140b5ed50;
        puVar12[10] = 0;
        puVar10 = puVar12;
    }
    puVar10[10] = &local_458;
    FUN_1401a4c50(puVar10 + 3,L"xml version=\"1.0\" encoding=\"UTF-8\"");
    if (puVar10[1] == local_650) {
        lVar17 = puVar10[2];
        if (lVar17 == 0) {
            (**(code **)(*(longlong *)puVar10[10] + 0x20))();
        }
        else {
            if (puVar10 == *(undefined8 **)(lVar17 + 0x30)) {
                *(undefined8 *)(lVar17 + 0x30) = (*(undefined8 **)(lVar17 + 0x30))[9];
            }
            if (puVar10 == *(undefined8 **)(lVar17 + 0x38)) {
                *(undefined8 *)(lVar17 + 0x38) = (*(undefined8 **)(lVar17 + 0x38))[8];
            }
            if (puVar10[8] != 0) {
                *(undefined8 *)(puVar10[8] + 0x48) = puVar10[9];
            }
            if (puVar10[9] != 0) {
                *(undefined8 *)(puVar10[9] + 0x40) = puVar10[8];
            }
            puVar10[2] = 0;
        }
        if (local_620 == (undefined8 *)0x0) {
            puVar10[8] = 0;
            local_628 = puVar10;
        }
        else {
            local_620[9] = puVar10;
            puVar10[8] = local_620;
        }
        puVar10[9] = 0;
        puVar10[2] = &local_658;
        local_620 = puVar10;
    }
    puVar10 = (undefined8 *)(*(code *)local_5d8[2])(&local_5d8);
    if (puVar10 != (undefined8 *)0x0) {
        puVar10[2] = 0;
        puVar10[1] = &local_658;
        *(undefined4 *)(puVar10 + 3) = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        *puVar10 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(puVar10 + 0xb) = 0;
        puVar10[0xc] = 0;
        puVar20 = puVar10;
    }
    puVar20[10] = &local_5d8;
    FUN_1401a4c50(puVar20 + 3,L"Macros");
    if (puVar20[1] == local_650) {
        lVar17 = puVar20[2];
        if (lVar17 == 0) {
            (**(code **)(*(longlong *)puVar20[10] + 0x20))();
        }
        else {
            if (puVar20 == *(undefined8 **)(lVar17 + 0x30)) {
                *(undefined8 *)(lVar17 + 0x30) = (*(undefined8 **)(lVar17 + 0x30))[9];
            }
            if (puVar20 == *(undefined8 **)(lVar17 + 0x38)) {
                *(undefined8 *)(lVar17 + 0x38) = (*(undefined8 **)(lVar17 + 0x38))[8];
            }
            if (puVar20[8] != 0) {
                *(undefined8 *)(puVar20[8] + 0x48) = puVar20[9];
            }
            if (puVar20[9] != 0) {
                *(undefined8 *)(puVar20[9] + 0x40) = puVar20[8];
            }
            puVar20[2] = 0;
        }
        if (local_620 == (undefined8 *)0x0) {
            puVar20[8] = 0;
            local_628 = puVar20;
        }
        else {
            local_620[9] = puVar20;
            puVar20[8] = local_620;
        }
        puVar20[9] = 0;
        puVar20[2] = &local_658;
        local_620 = puVar20;
    }
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    if (lVar17 != *(longlong *)(param_1 + 0x20)) {
        do {
            puVar5 = *(undefined4 **)(lVar17 + 0x28);
            puVar12 = (undefined8 *)(*(code *)local_5d8[2])(&local_5d8);
            puVar10 = (undefined8 *)0x0;
            if (puVar12 != (undefined8 *)0x0) {
                puVar12[2] = 0;
                puVar12[1] = &local_658;
                *(undefined4 *)(puVar12 + 3) = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar12[8] = 0;
                puVar12[9] = 0;
                *puVar12 = &PTR_FUN_140b5eba0;
                puVar12[10] = 0;
                *(undefined4 *)(puVar12 + 0xb) = 0;
                puVar12[0xc] = 0;
                puVar10 = puVar12;
            }
            puVar10[10] = &local_5d8;
            if ((*(uint *)(puVar10 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar10[4],0);
            }
            *(undefined4 *)(puVar10 + 3) = 0;
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar12 = (undefined8 *)0x0;
            do {
                puVar16 = puVar12;
                puVar12 = (undefined8 *)((longlong)puVar16 + 1);
            } while (L"Macro"[(longlong)puVar16 + 1] != L'\0');
            auVar6 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
            uVar13 = SUB168(auVar6,0);
            if (SUB168(auVar6 >> 0x40,0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            uVar13 = FUN_14018b280(uVar13,0);
            puVar10[4] = uVar13;
            FUN_1407db590(uVar13,L"Macro",(longlong)puVar12 * 2 + 2);
            *(undefined4 *)(puVar10 + 3) = 0x200;
            puVar10[5] = puVar10[4] + (longlong)puVar12 * 2;
            uVar13 = *(undefined8 *)(puVar5 + 4);
            lVar14 = FUN_1401a6c70(puVar10,L"Name");
            FUN_1401a4c50(lVar14 + 0x20,uVar13);
            uVar13 = *(undefined8 *)(puVar5 + 0xc);
            lVar14 = FUN_1401a6c70(puVar10,L"Sprite");
            FUN_1401a4c50(lVar14 + 0x20,uVar13);
            uVar13 = *(undefined8 *)(puVar5 + 0x14);
            lVar14 = FUN_1401a6c70(puVar10,L"Character");
            FUN_1401a4c50(lVar14 + 0x20,uVar13);
            uVar4 = *puVar5;
            lVar14 = FUN_1401a6c70(puVar10,&DAT_140b4f384);
            FUN_1401a4c20(local_1c8,200,&DAT_1409e41f4,uVar4);
            if ((*(uint *)(lVar14 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 *)(lVar14 + 0x28),0);
            }
            lVar19 = 0;
            *(undefined4 *)(lVar14 + 0x20) = 0;
            *(undefined8 *)(lVar14 + 0x28) = 0;
            *(undefined8 *)(lVar14 + 0x30) = 0;
            sVar3 = local_1c8[0];
            while (sVar3 != 0) {
                lVar19 = lVar19 + 1;
                sVar3 = local_1c8[lVar19];
            }
            auVar6 = ZEXT816(2) * ZEXT816(lVar19 + 1);
            uVar13 = SUB168(auVar6,0);
            if (SUB168(auVar6 >> 0x40,0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            uVar13 = FUN_14018b280(uVar13,0);
            *(undefined8 *)(lVar14 + 0x28) = uVar13;
            FUN_1407db590(uVar13,local_1c8,lVar19 * 2 + 2);
            *(undefined4 *)(lVar14 + 0x20) = 0x200;
            *(longlong *)(lVar14 + 0x30) = *(longlong *)(lVar14 + 0x28) + lVar19 * 2;
            local_678 = (undefined2 *)FUN_14018b280(0x10);
            puVar12 = (undefined8 *)0x0;
            local_668 = local_678 + 8;
            if (local_678 != (undefined2 *)0x0) {
                *local_678 = 0;
            }
            puVar16 = puVar12;
            local_670 = local_678;
            if (*(longlong *)(puVar5 + 0x1c) != 0) {
                do {
                    lVar14 = (longlong)puVar16 * 0x20 + *(longlong *)(puVar5 + 0x1a);
                    FUN_14001c310(local_680,*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
                    puVar15 = puVar12;
                    do {
                        psVar9 = &DAT_1409f9dc6 + (longlong)puVar15;
                        puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                    } while (*psVar9 != 0);
                    FUN_14001c310(local_680,&DAT_1409f9dc4,&DAT_1409f9dc4 + (longlong)puVar15 * 2);
                    puVar16 = (undefined8 *)(ulonglong)((int)puVar16 + 1);
                } while (puVar16 < *(undefined8 **)(puVar5 + 0x1c));
            }
            puVar11 = local_678;
            puVar16 = (undefined8 *)(*(code *)local_4d8[2])(&local_4d8);
            if (puVar16 != (undefined8 *)0x0) {
                puVar16[2] = 0;
                puVar16[1] = &local_658;
                *(undefined4 *)(puVar16 + 3) = 0;
                puVar16[4] = 0;
                puVar16[5] = 0;
                puVar16[6] = 0;
                puVar16[7] = 0;
                puVar16[8] = 0;
                puVar16[9] = 0;
                *puVar16 = &PTR_LAB_140b5ee70;
                puVar16[10] = 0;
                *(undefined *)(puVar16 + 0xb) = 0;
                puVar12 = puVar16;
            }
            puVar12[10] = &local_4d8;
            FUN_1401a4c50(puVar12 + 3);
            if (puVar12[1] == puVar10[1]) {
                lVar14 = puVar12[2];
                if (lVar14 == 0) {
                    (**(code **)(*(longlong *)puVar12[10] + 0x20))();
                }
                else {
                    if (puVar12 == *(undefined8 **)(lVar14 + 0x30)) {
                        *(undefined8 *)(lVar14 + 0x30) = (*(undefined8 **)(lVar14 + 0x30))[9];
                    }
                    if (puVar12 == *(undefined8 **)(lVar14 + 0x38)) {
                        *(undefined8 *)(lVar14 + 0x38) = (*(undefined8 **)(lVar14 + 0x38))[8];
                    }
                    if (puVar12[8] != 0) {
                        *(undefined8 *)(puVar12[8] + 0x48) = puVar12[9];
                    }
                    if (puVar12[9] != 0) {
                        *(undefined8 *)(puVar12[9] + 0x40) = puVar12[8];
                    }
                    puVar12[2] = 0;
                }
                if (puVar10[7] == 0) {
                    puVar10[7] = puVar12;
                    puVar10[6] = puVar12;
                    puVar12[8] = 0;
                }
                else {
                    *(undefined8 **)(puVar10[7] + 0x48) = puVar12;
                    puVar12[8] = puVar10[7];
                    puVar10[7] = puVar12;
                }
                puVar12[9] = 0;
                puVar12[2] = puVar10;
            }
            if (puVar10[1] == puVar20[1]) {
                lVar14 = puVar10[2];
                if (lVar14 == 0) {
                    (**(code **)(*(longlong *)puVar10[10] + 0x20))();
                }
                else {
                    if (puVar10 == *(undefined8 **)(lVar14 + 0x30)) {
                        *(undefined8 *)(lVar14 + 0x30) = (*(undefined8 **)(lVar14 + 0x30))[9];
                    }
                    if (puVar10 == *(undefined8 **)(lVar14 + 0x38)) {
                        *(undefined8 *)(lVar14 + 0x38) = (*(undefined8 **)(lVar14 + 0x38))[8];
                    }
                    if (puVar10[8] != 0) {
                        *(undefined8 *)(puVar10[8] + 0x48) = puVar10[9];
                    }
                    if (puVar10[9] != 0) {
                        *(undefined8 *)(puVar10[9] + 0x40) = puVar10[8];
                    }
                    puVar10[2] = 0;
                }
                if (puVar20[7] == 0) {
                    puVar20[7] = puVar10;
                    puVar20[6] = puVar10;
                    puVar10[8] = 0;
                }
                else {
                    *(undefined8 **)(puVar20[7] + 0x48) = puVar10;
                    puVar10[8] = puVar20[7];
                    puVar20[7] = puVar10;
                }
                puVar10[9] = 0;
                puVar10[2] = puVar20;
            }
            if (puVar11 != (undefined2 *)0x0) {
                FUN_14018b900(puVar11,0);
            }
            lVar14 = *(longlong *)(lVar17 + 0x18);
            if (lVar14 == 0) {
                lVar14 = *(longlong *)(lVar17 + 8);
                if (lVar17 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar17 = lVar14;
                        lVar14 = *(longlong *)(lVar17 + 8);
                    } while (lVar17 == *(longlong *)(lVar14 + 0x18));
                }
                if (*(longlong *)(lVar17 + 0x18) != lVar14) {
                    lVar17 = lVar14;
                }
            }
            else {
                for (lVar19 = *(longlong *)(lVar14 + 0x10); lVar17 = lVar14, lVar19 != 0;
                     lVar19 = *(longlong *)(lVar19 + 0x10)) {
                    lVar14 = lVar19;
                }
            }
            plVar18 = local_698;
            puVar11 = local_688;
        } while (lVar17 != *(longlong *)(local_690 + 0x20));
    }
    if ((local_5fc == 0) && (plVar18 != (longlong *)0x0)) {
        local_698 = (longlong *)0x0;
        iVar8 = FUN_1401a7fc0(&local_658,&local_698);
        plVar7 = local_698;
        if (iVar8 < 0) {
            if (local_698 != (longlong *)0x0) {
                (**(code **)(*local_698 + 8))();
            }
        }
        else {
            iVar8 = FUN_1401b6f30();
            if (iVar8 < 0) {
                if (plVar7 != (longlong *)0x0) {
                    (**(code **)(*plVar7 + 8))(plVar7);
                }
            }
            else if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 8))(plVar7);
            }
        }
    }
    local_658 = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(&local_658);
    lVar17 = local_5f0;
    local_5fc = 0;
    local_5f0 = 0;
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    FUN_14018b900(local_5e8,0);
    local_5e8 = 0;
    local_458 = &PTR_FUN_140b5ea18;
    while (local_3f4 != 0) {
        local_3f4 = local_3f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_450 + (longlong)local_3f4 * 8),0);
    }
    local_3f0 = 0;
    local_3e8 = ZEXT816(0);
    if (local_450 != local_448) {
        FUN_14018b900(local_450,0);
    }
    local_4d8 = &PTR_LAB_140b5ea48;
    local_458 = &PTR_FUN_140b5ead8;
    while (local_474 != 0) {
        local_474 = local_474 + -1;
        FUN_14018b900(*(undefined8 *)(local_4d0 + (longlong)local_474 * 8),0);
    }
    local_470 = 0;
    local_468 = ZEXT816(0);
    if (local_4d0 != local_4c8) {
        FUN_14018b900(local_4d0,0);
    }
    local_4d8 = &PTR_FUN_140b5ead8;
    local_558 = &PTR_LAB_140b5ea78;
    while (local_4f4 != 0) {
        local_4f4 = local_4f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_550 + (longlong)local_4f4 * 8),0);
    }
    local_4f0 = 0;
    local_4e8 = ZEXT816(0);
    if (local_550 != local_548) {
        FUN_14018b900(local_550,0);
    }
    local_558 = &PTR_FUN_140b5ead8;
    local_5d8 = &PTR_LAB_140b5eaa8;
    while (local_574 != 0) {
        local_574 = local_574 + -1;
        FUN_14018b900(*(undefined8 *)(local_5d0 + (longlong)local_574 * 8),0);
    }
    local_570 = 0;
    local_568 = ZEXT816(0);
    if (local_5d0 != local_5c8) {
        FUN_14018b900(local_5d0,0);
    }
    local_5d8 = &PTR_FUN_140b5ead8;
    if (local_5f0 != 0) {
        (**(code **)(*(longlong *)(local_5f0 + -0x10) + 8))(local_5f0 + -0x10);
    }
    local_658 = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(&local_658);
    if (local_648 != 0) {
        if (&local_658 == *(undefined ****)(local_648 + 0x30)) {
            *(undefined ***)(local_648 + 0x30) = (*(undefined ****)(local_648 + 0x30))[9];
        }
        if (&local_658 == *(undefined ****)(local_648 + 0x38)) {
            *(undefined ***)(local_648 + 0x38) = (*(undefined ****)(local_648 + 0x38))[8];
        }
        if (local_618 != 0) {
            *(longlong *)(local_618 + 0x48) = local_610;
        }
        if (local_610 != 0) {
            *(longlong *)(local_610 + 0x40) = local_618;
        }
        local_648 = 0;
    }
    if ((local_640 & 0x200) != 0) {
        FUN_14018b900(local_638._0_8_,0);
    }
    local_640 = 0;
    local_638 = ZEXT816(0);
    if (puVar11 != (undefined2 *)0x0) {
        FUN_14018b900(puVar11,0);
    }
    if (plVar18 != (longlong *)0x0) {
        FUN_14018b900(plVar18,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1752);
    return;
}



longlong FUN_140779270(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];

    local_res18[0] = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(int *)(lVar2 + 0x20)) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(int *)(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
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
        lVar4 = lVar4 + 1;
    }
    FUN_140779360(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_140779360(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_140779440(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_140779440(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8b158,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140779506. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



undefined8 FUN_140779540(undefined8 param_1,ulonglong param_2)

{
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140779580(undefined8 *param_1)

{
    longlong lVar1;
    longlong **pplVar2;
    longlong *plVar3;
    uint uVar5;
    int iVar6;
    longlong *plVar4;

    *param_1 = &PTR_LAB_140b769c0;
    FUN_140779660(param_1,0);
    uVar5 = 0;
    pplVar2 = (longlong **)(param_1 + 3);
    do {
        if (uVar5 < 5) {
            plVar3 = pplVar2[-1];
            while (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x20))();
                plVar3 = pplVar2[-1];
            }
            plVar3 = *pplVar2;
            while (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x20))(plVar3);
                plVar3 = *pplVar2;
            }
        }
        uVar5 = uVar5 + 1;
        pplVar2 = pplVar2 + 2;
    } while (uVar5 < 5);
    lVar1 = param_1[0xc];
    while (lVar1 != 0) {
        (**(code **)(*(longlong *)param_1[0xc] + 0x20))();
        lVar1 = param_1[0xc];
    }
    iVar6 = 4;
    plVar3 = param_1 + 0xc;
    do {
        plVar4 = plVar3 + -2;
        if (plVar3[-1] != 0) {
            FUN_1401a4a00(plVar3 + -1);
        }
        if (*plVar4 != 0) {
            FUN_1401a4a00(plVar4);
        }
        iVar6 = iVar6 + -1;
        plVar3 = plVar4;
    } while (-1 < iVar6);
    return;
}



void FUN_140779660(longlong *param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong **pplVar4;
    uint uVar5;

    if (*(int *)(param_1 + 1) == 0) {
        *(undefined4 *)(param_1 + 1) = 1;
        *(undefined4 *)(param_1 + 0x15) = 0;
        if ((code *)param_1[0x10] != (code *)0x0) {
            (*(code *)param_1[0x10])(param_2,param_1[0x11]);
        }
        uVar5 = 0;
        pplVar4 = (longlong **)(param_1 + 3);
        do {
            if (uVar5 < 5) {
                plVar1 = pplVar4[-1];
                while (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x20))();
                    plVar1 = pplVar4[-1];
                }
                plVar1 = *pplVar4;
                while (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x20))(plVar1);
                    plVar1 = *pplVar4;
                }
            }
            uVar5 = uVar5 + 1;
            pplVar4 = pplVar4 + 2;
        } while (uVar5 < 5);
        lVar2 = param_1[0xc];
        while (lVar2 != 0) {
            (**(code **)(*(longlong *)param_1[0xc] + 0x20))();
            lVar2 = param_1[0xc];
        }
        if (DAT_140c65898 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x7340) != 0) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"ProgressClickWindowDisplay",
                              &DAT_1409ec19c,0);
            }
            lVar2 = DAT_140c65898;
            plVar1 = *(longlong **)(DAT_140c65898 + 0x7188);
            if ((plVar1 == param_1) && (plVar1 != (longlong *)0x0)) {
                (**(code **)(*plVar1 + 8))(plVar1);
                uVar3 = DAT_140c636a8;
                *(undefined8 *)(lVar2 + 0x7188) = 0;
                *(undefined4 *)(lVar2 + 0x7190) = uVar3;
                *(undefined8 *)(lVar2 + 0x7188) = 0;
            }
        }
    }
    return;
}



void FUN_1407797a0(longlong param_1,int param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;

    uVar3 = (ulonglong)param_3;
    if (uVar3 < 5) {
        if (param_2 == 0) {
            plVar1 = *(longlong **)(param_1 + 0x10 + uVar3 * 0x10);
            while (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x20))();
                plVar1 = *(longlong **)(param_1 + 0x10 + uVar3 * 0x10);
            }
            plVar1 = *(longlong **)(param_1 + 0x18 + uVar3 * 0x10);
            while (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x20))();
                plVar1 = *(longlong **)(param_1 + 0x18 + uVar3 * 0x10);
            }
        }
        else {
            lVar4 = uVar3 * 0x10 + param_1;
            if (((*(longlong *)(lVar4 + 0x10) == 0) &&
                 (lVar2 = FUN_140248f00(*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x4c + uVar3 * 4)),
                         lVar2 != 0)) && (*(int *)(param_1 + 0x6c) != 0)) {
                FUN_140578770();
            }
            if (((*(longlong *)(lVar4 + 0x18) == 0) &&
                 (lVar4 = FUN_140248f00(*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x38 + uVar3 * 4)),
                         lVar4 != 0)) && (*(int *)(param_1 + 0x70) != 0)) {
                FUN_140578770();
                return;
            }
        }
    }
    return;
}



undefined8 FUN_1407798c0(longlong *param_1,longlong param_2,longlong *param_3)

{
    longlong lVar1;
    int iVar2;

    if (param_2 == 0) {
        return 0x80070057;
    }
    param_1[0x12] = param_2;
    param_1[0xd] = *param_3;
    param_1[0xe] = param_3[1];
    param_1[0xf] = param_3[2];
    param_1[0x10] = param_3[3];
    lVar1 = param_3[4];
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
    param_1[0x11] = lVar1;
    iVar2 = FUN_14039ce20(param_1,param_1);
    if (iVar2 < 0) {
        (**(code **)(*param_1 + 0x58))(param_1);
        return 0x80004005;
    }
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"ProgressClickWindowCompletionLevel",
                      &DAT_1409ec294,0,0);
    }
    return 0;
}



int FUN_140779980(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint uVar3;

    if ((*(int *)(*(longlong *)(param_1 + 0x90) + 4) != 5) &&
        (iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + 0xc), iVar2 != 0)) {
        if (*(int *)(param_1 + 0x9c) == 0) {
            return iVar2;
        }
        iVar2 = FUN_14018cdf0();
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + 0xc);
        uVar3 = iVar2 - *(int *)(param_1 + 0x9c);
        if (uVar3 <= uVar1) {
            return uVar1 - uVar3;
        }
    }
    return 0;
}



void FUN_1407799e0(longlong *param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;

    iVar2 = FUN_140779be0();
    if (iVar2 == 0) {
        // WARNING: Could not recover jumptable at 0x0001407799fd. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0x58))(param_1);
        return;
    }
    if (*(int *)(param_1 + 0x15) != 0) {
        iVar3 = FUN_14018cdf0();
        iVar2 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar3;
        *(int *)((longlong)param_1 + 0xa4) = iVar3 - iVar2;
        (**(code **)(*param_1 + 0x88))();
        if (((*(int *)(param_1[0x12] + 4) != 5) && (uVar1 = *(uint *)(param_1[0x12] + 0xc), uVar1 != 0))
            && (uVar1 < (uint)(*(int *)(param_1 + 0x14) - *(int *)((longlong)param_1 + 0x9c)))) {
            FUN_140779660(param_1,0);
            return;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140779a70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    undefined local_18 [16];

    if (*(int *)(param_1 + 0xa8) == 0) {
        if (*(code **)(param_1 + 0x80) != (code *)0x0) {
            (**(code **)(param_1 + 0x80))(3,*(undefined8 *)(param_1 + 0x88));
        }
        uVar5 = 0;
        lVar4 = 0x28;
        do {
            uVar2 = *(undefined4 *)(lVar4 + *(longlong *)(param_1 + 0x90));
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64c04 == 0) {
                    iVar1 = FUN_140248ca0();
                    if (-1 < iVar1) {
                        lVar3 = (**(code **)(*DAT_140c63b40 + 0x18))(DAT_140c63b40,uVar2);
                        goto LAB_140779b0b;
                    }
                }
            }
            else {
                lVar3 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,uVar2,DAT_140c63858);
                LAB_140779b0b:
                if (lVar3 != 0) {
                    local_18 = ZEXT816(0);
                    FUN_1405787d0(param_1 + 0x60,0,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),
                                  param_4,lVar3,0,0,0,param_1 + 0x60,local_18,0);
                }
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 4;
        } while (uVar5 < 4);
        *(undefined4 *)(param_1 + 0xa8) = 1;
        uVar2 = FUN_14018cdf0();
        *(undefined4 *)(param_1 + 0x9c) = uVar2;
        *(undefined4 *)(param_1 + 0xa0) = uVar2;
    }
    return;
}



undefined8 FUN_140779be0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;

    plVar1 = *(longlong **)(param_3 + 0x88);
    if (plVar1 == (longlong *)0x0) {
        return 0;
    }
    lVar2 = plVar1[0x27];
    if ((lVar2 != 0) &&
        ((0.0 < *(float *)(*(longlong *)(lVar2 + 0x70) + 0x70) ||
          (0.0 < *(float *)(*(longlong *)(lVar2 + 0x70) + 0x74))))) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0x6c));
        lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0x70));
        if ((lVar5 != 0) && (lVar6 != 0)) {
            uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 0x6c);
            uVar4 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 0x70);
            if (*(int *)((longlong)plVar1 + 0xbc) != 0) {
                uVar3 = (**(code **)(*plVar1 + 8))(plVar1);
                uVar3 = FUN_1403ad860(DAT_140c65b70,uVar3,lVar6);
                uVar4 = (**(code **)(*plVar1 + 8))(plVar1);
                uVar4 = FUN_1403ad8f0(DAT_140c65b70,uVar4,lVar6);
            }
            uVar7 = FUN_1403ad690(uVar4,param_2,uVar3,uVar4,lVar5,lVar6);
            if ((int)uVar7 == 0) {
                return uVar7;
            }
        }
    }
    return 1;
}



undefined8 * FUN_140779d00(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b76a50;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140779d40(longlong param_1,longlong param_2)

{
    undefined8 uVar1;

    uVar1 = FUN_1407798c0();
    if (-1 < (int)uVar1) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        if (*(uint *)(param_2 + 8) == 0) {
            *(undefined4 *)(param_1 + 0xb4) = 0x3a83126f;
            *(undefined4 *)(param_1 + 0xb8) = 0x3a83126f;
        }
        else {
            *(float *)(param_1 + 0xb4) = 1.0 / (float)(ulonglong)*(uint *)(param_2 + 8);
            *(float *)(param_1 + 0xb8) =
                    ((float)(ulonglong)*(uint *)(param_2 + 0x18) / (float)(ulonglong)*(uint *)(param_2 + 8))
                    * 0.001;
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"SetProgressClickTimes",&DAT_140b00ec4,0,0
                    ,0,0);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProgressClickWindowDisplay",
                          &DAT_1409ec1b4,1);
        }
        uVar1 = 0;
    }
    return uVar1;
}



void FUN_140779e40(longlong param_1)

{
    int iVar1;
    float fVar2;

    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
        fVar2 = (float)(*(uint *)(param_1 + 0xb8) ^ 0x80000000);
    }
    else {
        fVar2 = *(float *)(param_1 + 0xb4);
    }
    *(float *)(param_1 + 0xb0) =
            (float)(ulonglong)*(uint *)(param_1 + 0xa4) * fVar2 + *(float *)(param_1 + 0xb0);
    if (*(int *)(param_1 + 0xc0) != iVar1) {
        FUN_1407797a0(param_1,iVar1,0);
        FUN_1407797a0(param_1,*(int *)(param_1 + 0xbc) == 0,2);
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    }
    if (*(float *)(param_1 + 0xb0) < 0.0) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        return;
    }
    if (1.0 <= *(float *)(param_1 + 0xb0)) {
        FUN_140779660(param_1,1);
        return;
    }
    return;
}



void FUN_140779f10(longlong param_1)

{
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"ProgressClickWindowCompletionLevel",
                      &DAT_1409ec294,(int)(*(float *)(param_1 + 0xb0) * 100.0),0);
    }
    return;
}



void FUN_140779f80(longlong param_1)

{
    if (*(int *)(param_1 + 0xa8) == 0) {
        FUN_140779a70();
        *(undefined4 *)(param_1 + 0xbc) = 1;
        return;
    }
    *(undefined4 *)(param_1 + 0xbc) = 1;
    return;
}



undefined8 * FUN_140779fc0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b76810;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14077a000(longlong param_1,longlong param_2)

{
    undefined8 uVar1;

    uVar1 = FUN_1407798c0();
    if (-1 < (int)uVar1) {
        if (*(int *)(*(longlong *)(param_1 + 0x90) + 4) == 7) {
            *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
        }
        if (*(uint *)(param_2 + 8) == 0) {
            *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
            *(undefined4 *)(param_1 + 0xbc) = 0x3a83126f;
        }
        else {
            *(float *)(param_1 + 0xb8) =
                    (float)(ulonglong)*(uint *)(param_2 + 0x10) / (float)(ulonglong)*(uint *)(param_2 + 8);
            *(float *)(param_1 + 0xbc) =
                    ((float)(ulonglong)*(uint *)(param_2 + 0x18) / (float)(ulonglong)*(uint *)(param_2 + 8))
                    * 0.001;
        }
        if (*(int *)(*(longlong *)(param_1 + 0x90) + 4) == 7) {
            FUN_140779a70(param_1);
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"ProgressClickWindowDisplay",
                          &DAT_1409ec1b4,1);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SetProgressClickTimes",&DAT_140b00ec4,0
                    ,0,0,0);
        }
        uVar1 = 0;
    }
    return uVar1;
}



void FUN_14077a120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    float fVar1;
    undefined4 in_XMM6_Da;
    float fVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    fVar2 = 0.0;
    fVar1 = *(float *)(param_1 + 0xb4) -
            (float)(ulonglong)*(uint *)(param_1 + 0xa4) * *(float *)(param_1 + 0xbc);
    *(float *)(param_1 + 0xb4) = fVar1;
    if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
        FUN_1407797a0(param_1,1,0,param_4,
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    fVar1 = (float)(ulonglong)*(uint *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb8);
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 4) == 7) {
        fVar1 = *(float *)(param_1 + 0xb4) - fVar1;
        *(float *)(param_1 + 0xb4) = fVar1;
        if (fVar2 < fVar1) goto LAB_14077a1e4;
    }
    else {
        fVar1 = fVar1 + *(float *)(param_1 + 0xb4);
        *(float *)(param_1 + 0xb4) = fVar1;
        if (fVar1 < 1.0) goto LAB_14077a1e4;
    }
    FUN_140779660(param_1,1);
    LAB_14077a1e4:
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
}



void FUN_14077a200(longlong param_1)

{
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"ProgressClickWindowCompletionLevel",
                      &DAT_1409ec294,(int)(*(float *)(param_1 + 0xb4) * 100.0),0);
    }
    return;
}



void FUN_14077a260(longlong param_1)

{
    if (*(int *)(param_1 + 0xa8) == 0) {
        FUN_140779a70();
        *(undefined4 *)(param_1 + 0xb0) = 1;
        return;
    }
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return;
}



undefined8 * FUN_14077a2a0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b769c0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 1;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = &PTR_LAB_140b768a0;
    FUN_1407e4830(param_1 + 0x18,0,0x30);
    return param_1;
}



undefined8 * FUN_14077a360(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b768a0;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14077a3a0(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    uVar2 = FUN_1407798c0();
    if (-1 < (int)uVar2) {
        if (*(uint *)(param_2 + 0xc) == 0) {
            *(undefined4 *)(param_1 + 0xb8) = 0x3a83126f;
        }
        else {
            *(float *)(param_1 + 0xb8) = 1.0 / (float)(ulonglong)*(uint *)(param_2 + 0xc);
        }
        fVar7 = *(float *)(param_1 + 0xb8);
        fVar9 = (float)(ulonglong)*(uint *)(param_2 + 0x14) * 100.0 * fVar7;
        fVar6 = fVar9 * 0.5;
        fVar8 = (float)(ulonglong)*(uint *)(param_2 + 0x20) * 100.0 * fVar7;
        fVar7 = (float)(ulonglong)*(uint *)(param_2 + 0x24) * 100.0 * fVar7;
        *(float *)(param_1 + 0xc0) = (fVar8 - fVar6) * 0.01;
        *(float *)(param_1 + 0xc4) = (fVar6 + fVar8) * 0.01;
        *(float *)(param_1 + 0xd8) = (fVar7 - fVar6) * 0.01;
        *(float *)(param_1 + 0xdc) = (fVar6 + fVar7) * 0.01;
        if ((fVar8 <= 0.0) || (100.0 <= fVar8)) {
            fVar8 = 0.0;
        }
        else {
            *(undefined4 *)(param_1 + 200) = 1;
        }
        if ((fVar7 <= 0.0) || (100.0 <= fVar7)) {
            fVar7 = 0.0;
        }
        else {
            *(undefined4 *)(param_1 + 0xe0) = 1;
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0();
            iVar4 = 0x7fffffff;
            if ((int)fVar7 < 0x7fffffff) {
                iVar4 = (int)fVar7;
            }
            iVar1 = 0x7fffffff;
            if ((int)fVar8 < 0x7fffffff) {
                iVar1 = (int)fVar8;
            }
            iVar5 = 0x7fffffff;
            if ((int)fVar9 < 0x7fffffff) {
                iVar5 = (int)fVar9;
            }
            iVar3 = -0x80000000;
            if (-0x80000000 < iVar4) {
                iVar3 = iVar4;
            }
            iVar4 = -0x80000000;
            if (-0x80000000 < iVar1) {
                iVar4 = iVar1;
            }
            iVar1 = -0x80000000;
            if (-0x80000000 < iVar5) {
                iVar1 = iVar5;
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SetProgressClickTimes",&DAT_140b00ec4,
                          iVar1,iVar4,iVar3,1);
        }
        uVar2 = 0;
    }
    return uVar2;
}



void FUN_14077a940(longlong param_1)

{
    uint uVar1;
    float *pfVar2;
    ulonglong uVar3;

    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        pfVar2 = (float *)(param_1 + 0xd4);
        uVar1 = 0;
        do {
            uVar3 = (ulonglong)uVar1;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProgressClickHighlightTime",
                          &DAT_1409ec2d4,uVar3,(int)*pfVar2);
            uVar1 = uVar1 + 1;
            pfVar2 = pfVar2 + 6;
        } while (uVar1 < 2);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProgressClickWindowCompletionLevel",
                      &DAT_1409ec294,
                      uVar3 & 0xffffffff00000000 |
                      (ulonglong)(uint)(int)(*(float *)(param_1 + 0xb0) * 100.0),0);
    }
    return;
}



undefined8 * FUN_14077aa10(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b769c0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 1;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = &PTR_LAB_140b76930;
    FUN_1407e4830(param_1 + 0x1a,0,0x28);
    return param_1;
}



undefined8 * FUN_14077aae0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b76930;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14077ab20(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    uVar4 = FUN_1407798c0();
    if (-1 < (int)uVar4) {
        if (*(uint *)(param_2 + 0x18) == 0) {
            *(undefined4 *)(param_1 + 0xb4) = 0x3a83126f;
        }
        else {
            *(float *)(param_1 + 0xb4) = 1.0 / (float)(ulonglong)*(uint *)(param_2 + 0x18);
        }
        fVar9 = *(float *)(param_1 + 0xb4);
        uVar2 = (uint)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0xc) * fVar9);
        if (0x32 < uVar2) {
            uVar2 = 0x32;
        }
        *(uint *)(param_1 + 0xb8) = uVar2;
        fVar11 = (float)(ulonglong)*(uint *)(param_2 + 0x14) * 100.0 * fVar9;
        fVar8 = fVar11 * 0.5;
        fVar10 = (float)(ulonglong)*(uint *)(param_2 + 0x20) * 100.0 * fVar9;
        fVar9 = (float)(ulonglong)*(uint *)(param_2 + 0x24) * 100.0 * fVar9;
        *(float *)(param_1 + 0xd0) = (fVar10 - fVar8) * 0.01;
        *(float *)(param_1 + 0xd4) = (fVar8 + fVar10) * 0.01;
        *(float *)(param_1 + 0xe4) = (fVar9 - fVar8) * 0.01;
        *(float *)(param_1 + 0xe8) = (fVar8 + fVar9) * 0.01;
        if ((fVar10 <= 0.0) || (100.0 <= fVar10)) {
            fVar10 = 0.0;
        }
        else {
            *(undefined4 *)(param_1 + 0xd8) = 1;
        }
        if ((fVar9 <= 0.0) || (100.0 <= fVar9)) {
            fVar9 = 0.0;
        }
        else {
            *(undefined4 *)(param_1 + 0xec) = 1;
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0();
            iVar5 = 0x7fffffff;
            if (*(int *)(param_1 + 0xb8) < 0x7fffffff) {
                iVar5 = *(int *)(param_1 + 0xb8);
            }
            iVar3 = 0x7fffffff;
            if ((int)fVar9 < 0x7fffffff) {
                iVar3 = (int)fVar9;
            }
            iVar1 = 0x7fffffff;
            if ((int)fVar10 < 0x7fffffff) {
                iVar1 = (int)fVar10;
            }
            iVar7 = 0x7fffffff;
            if ((int)fVar11 < 0x7fffffff) {
                iVar7 = (int)fVar11;
            }
            iVar6 = -0x80000000;
            if (-0x80000000 < iVar5) {
                iVar6 = iVar5;
            }
            iVar5 = -0x80000000;
            if (-0x80000000 < iVar3) {
                iVar5 = iVar3;
            }
            iVar3 = -0x80000000;
            if (-0x80000000 < iVar1) {
                iVar3 = iVar1;
            }
            iVar1 = -0x80000000;
            if (iVar7 != -0x80000000) {
                iVar1 = iVar7;
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SetProgressClickTimes",&DAT_140b00ec4,
                          iVar1,iVar3,iVar5,iVar6);
        }
        uVar4 = 0;
    }
    return uVar4;
}



void FUN_14077ad70(longlong param_1)

{
    if (*(int *)(param_1 + 0xa8) == 0) {
        FUN_140779a70();
        FUN_1407797a0(param_1,1,3);
        return;
    }
    return;
}



void FUN_14077b570(longlong param_1)

{
    uint uVar1;
    float *pfVar2;
    ulonglong uVar3;

    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        pfVar2 = (float *)(param_1 + 0xe0);
        uVar1 = 0;
        do {
            uVar3 = (ulonglong)uVar1;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProgressClickHighlightTime",
                          &DAT_1409ec2d4,uVar3,(int)*pfVar2);
            uVar1 = uVar1 + 1;
            pfVar2 = pfVar2 + 5;
        } while (uVar1 < 2);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ProgressClickWindowCompletionLevel",
                      &DAT_1409ec294,
                      uVar3 & 0xffffffff00000000 |
                      (ulonglong)(uint)(int)(*(float *)(param_1 + 0xb0) * 100.0),
                *(uint *)(param_1 + 0xbc) & 1);
    }
    return;
}



undefined8 FUN_14077b650(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    int iVar7;

    uVar6 = FUN_1407798c0();
    lVar5 = DAT_140c65898;
    if (-1 < (int)uVar6) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
        uVar2 = *(undefined4 *)(lVar1 + 0x11e4);
        uVar3 = *(undefined4 *)(lVar1 + 0x11e8);
        uVar4 = *(undefined4 *)(lVar1 + 0x11ec);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x11e0);
        *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
        *(undefined4 *)(param_1 + 0x19) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
        iVar7 = 60000;
        if (*(int *)(param_2 + 0xc) != 0) {
            iVar7 = *(int *)(param_2 + 0xc);
        }
        *(int *)(param_1 + 0x16) = iVar7;
        if (*(longlong *)(lVar5 + 0x7340) != 0) {
            FUN_1400ea3e0(*(longlong *)(lVar5 + 0x7340),"ProgressClickWindowDisplay",&DAT_1409ec1b4,1);
        }
        (**(code **)(*param_1 + 0x50))(param_1);
        FUN_1407797a0(param_1,1,3);
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_14077b750(undefined8 param_1)

{
    FUN_1407797a0(param_1,1,1);
    FUN_140779660(param_1,0);
    return;
}



void FUN_14077b780(undefined8 param_1)

{
    FUN_1407797a0(param_1,1);
    FUN_140779660(param_1,1);
    return;
}



undefined8 FUN_14077b7c0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;

    if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x10) == 0)) {
        uVar6 = 0x80004005;
    }
    else {
        uVar6 = FUN_1407798c0();
        lVar5 = DAT_140c65898;
        if (-1 < (int)uVar6) {
            lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
            uVar2 = *(undefined4 *)(lVar1 + 0x11e4);
            uVar3 = *(undefined4 *)(lVar1 + 0x11e8);
            uVar4 = *(undefined4 *)(lVar1 + 0x11ec);
            *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar1 + 0x11e0);
            *(undefined4 *)(param_1 + 0xc4) = uVar2;
            *(undefined4 *)(param_1 + 200) = uVar3;
            *(undefined4 *)(param_1 + 0xcc) = uVar4;
            if (*(longlong *)(lVar5 + 0x7340) != 0) {
                FUN_1400ea3e0(*(longlong *)(lVar5 + 0x7340),"ProgressClickWindowDisplay",&DAT_1409ec1b4,1);
            }
            return 0;
        }
    }
    return uVar6;
}



void FUN_14077b830(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    double dVar5;
    longlong lVar6;
    uint uVar7;
    double dVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 local_48 [2];
    longlong local_40;
    code *local_38;
    undefined8 local_30;

    if (*(int *)(param_1 + 0xa8) != 0) {
        return;
    }
    local_30 = 0x14077b847;
    FUN_140779a70();
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AcceptProgressInput",&DAT_1409ec27c,0);
    uVar2 = *(uint *)(param_1 + 0xd0);
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x90) + 8);
    *(uint *)(param_1 + 0xd0) = uVar2 + 1;
    if (uVar2 < uVar3) {
        if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x10) != 0) {
            uVar9 = 0;
            uVar10 = 0xc0100000;
            do {
                dVar8 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
                lVar4 = *(longlong *)(param_1 + 0xb8);
                dVar5 = (double)CONCAT44(uVar10,uVar9);
                lVar1 = lVar4 + 1;
                lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0xb0),lVar1,4);
                *(int *)(lVar6 + lVar4 * 4) = 1 - (int)(dVar8 * dVar5);
                if (*(longlong *)(param_1 + 0xb0) != lVar6) {
                    FUN_1407db590(lVar6,*(longlong *)(param_1 + 0xb0),*(longlong *)(param_1 + 0xb8) << 2);
                    lVar4 = *(longlong *)(param_1 + 0xb0);
                    if (lVar4 != 0) {
                        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                    *(longlong *)(param_1 + 0xb0) = lVar6;
                }
                *(longlong *)(param_1 + 0xb8) = lVar1;
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(*(longlong *)(param_1 + 0x90) + 0x10));
        }
        *(undefined4 *)(param_1 + 0xd4) = 0;
        local_38 = FUN_14077ba30;
        local_48[0] = 0;
        local_30 = 0;
        local_40 = param_1;
        FUN_140195960(param_1 + 0xe0,500,local_48,4);
        return;
    }
    FUN_1407797a0(param_1,1,0);
    FUN_140779660(param_1,1);
    return;
}



void FUN_14077ba30(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    lVar2 = DAT_140c65898;
    uVar1 = *(uint *)(param_1 + 0xd4);
    if ((ulonglong)uVar1 < *(ulonglong *)(param_1 + 0xb8)) {
        *(uint *)(param_1 + 0xd4) = uVar1 + 1;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HighlightProgressOption",&DAT_1409ec38c,
                      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)uVar1 * 4));
        local_18 = FUN_14077ba30;
        iVar3 = 0x2ee;
    }
    else {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"AcceptProgressInput",&DAT_1409ec27c,1);
        *(undefined4 *)(param_1 + 0x128) = 1;
        local_18 = FUN_14077bb20;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) + 0xc) * *(int *)(param_1 + 0xd0);
    }
    local_28[0] = 0;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0xe0,iVar3,local_28,4);
    return;
}



void FUN_14077bb20(undefined8 param_1)

{
    FUN_1407797a0(param_1,1,2);
    FUN_140779660(param_1,0);
    return;
}



void FUN_14077bb50(longlong param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    double dVar5;
    longlong lVar6;
    uint uVar7;
    double dVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 auStack72 [2];
    longlong lStack64;
    code *pcStack56;
    undefined8 uStack48;

    if (*(int *)(param_1 + 0x128) != 0) {
        uVar3 = *(uint *)(param_1 + 0xd8);
        if (uVar3 < *(uint *)(param_1 + 0xb8)) {
            *(uint *)(param_1 + 0xd8) = uVar3 + 1;
            if (param_2 != *(int *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)uVar3 * 4)) {
                uStack48 = 0x14077bb9e;
                FUN_1407797a0(param_1,1,2);
                FUN_140779660(param_1,0);
                return;
            }
            if (uVar3 + 1 == *(uint *)(param_1 + 0xb8)) {
                uStack48 = 0x14077bbc3;
                FUN_1407797a0(param_1,1,3);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AcceptProgressInput",&DAT_1409ec27c,0
                );
                uVar3 = *(uint *)(param_1 + 0xd0);
                uVar7 = 0;
                *(undefined4 *)(param_1 + 0x128) = 0;
                uVar2 = *(uint *)(*(longlong *)(param_1 + 0x90) + 8);
                *(uint *)(param_1 + 0xd0) = uVar3 + 1;
                if (uVar3 < uVar2) {
                    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x10) != 0) {
                        uVar9 = 0;
                        uVar10 = 0xc0100000;
                        do {
                            dVar8 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
                            lVar4 = *(longlong *)(param_1 + 0xb8);
                            dVar5 = (double)CONCAT44(uVar10,uVar9);
                            lVar1 = lVar4 + 1;
                            lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0xb0),lVar1,4);
                            *(int *)(lVar6 + lVar4 * 4) = 1 - (int)(dVar8 * dVar5);
                            if (*(longlong *)(param_1 + 0xb0) != lVar6) {
                                FUN_1407db590(lVar6,*(longlong *)(param_1 + 0xb0),*(longlong *)(param_1 + 0xb8) << 2
                                );
                                lVar4 = *(longlong *)(param_1 + 0xb0);
                                if (lVar4 != 0) {
                                    (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                                }
                                *(longlong *)(param_1 + 0xb0) = lVar6;
                            }
                            *(longlong *)(param_1 + 0xb8) = lVar1;
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < *(uint *)(*(longlong *)(param_1 + 0x90) + 0x10));
                    }
                    *(undefined4 *)(param_1 + 0xd4) = 0;
                    pcStack56 = FUN_14077ba30;
                    auStack72[0] = 0;
                    uStack48 = 0;
                    lStack64 = param_1;
                    FUN_140195960(param_1 + 0xe0,500,auStack72,4);
                    return;
                }
                FUN_1407797a0(param_1,1,0);
                FUN_140779660(param_1,1);
                return;
            }
        }
    }
    return;
}



undefined8 FUN_14077bbe0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;

    uVar6 = FUN_1407798c0();
    lVar5 = DAT_140c65898;
    if (-1 < (int)uVar6) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
        uVar2 = *(undefined4 *)(lVar1 + 0x11e4);
        uVar3 = *(undefined4 *)(lVar1 + 0x11e8);
        uVar4 = *(undefined4 *)(lVar1 + 0x11ec);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar1 + 0x11e0);
        *(undefined4 *)(param_1 + 0xb4) = uVar2;
        *(undefined4 *)(param_1 + 0xb8) = uVar3;
        *(undefined4 *)(param_1 + 0xbc) = uVar4;
        if (*(longlong *)(lVar5 + 0x7340) != 0) {
            FUN_1400ea3e0(*(longlong *)(lVar5 + 0x7340),"ProgressClickWindowDisplay",&DAT_1409ec1b4,1);
        }
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_14077bc40(longlong param_1,int param_2)

{
    if (param_2 == *(int *)(*(longlong *)(param_1 + 0x90) + 8)) {
        FUN_1407797a0(param_1,1,0);
        FUN_140779660(param_1,1);
        return;
    }
    FUN_1407797a0(param_1,1,2);
    FUN_140779660(param_1,0);
    return;
}



void FUN_14077bc90(longlong param_1)

{
    float fVar1;
    float fVar2;

    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x1c) & 1) == 0) {
        fVar1 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0) - *(float *)(param_1 + 0xb0);
        fVar2 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - *(float *)(param_1 + 0xb4);
        if (25.0 < fVar1 * fVar1 + fVar2 * fVar2 + 0.0) {
            FUN_1407797a0(param_1,1,2);
            FUN_140779660(param_1,0);
            return;
        }
    }
    return;
}



int FUN_14077bd10(longlong **param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;

    if (*param_2 == 0) {
        return -0x7ff8ffa9;
    }
    lVar2 = FUN_1401f42e0();
    if (lVar2 == 0) {
        return -0x7ff8ffa9;
    }
    iVar6 = 0x1a0;
    iVar1 = 0x1a0;
    switch(*(undefined4 *)(lVar2 + 4)) {
        case 0:
            plVar3 = (longlong *)FUN_14018b280(200,0);
            if (plVar3 == (longlong *)0x0) {
                plVar3 = (longlong *)0x0;
                iVar6 = 0xa4;
            }
            else {
                *(undefined4 *)(plVar3 + 1) = 0;
                iVar6 = 0xa4;
                *plVar3 = (longlong)&PTR_LAB_140b769c0;
                plVar3[2] = 0;
                plVar3[3] = 0;
                plVar3[4] = 0;
                plVar3[5] = 0;
                plVar3[6] = 0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                plVar3[9] = 0;
                plVar3[10] = 0;
                plVar3[0xb] = 0;
                plVar3[0xc] = 0;
                plVar3[0x12] = 0;
                *(undefined4 *)(plVar3 + 0x13) = 1;
                *(undefined8 *)((longlong)plVar3 + 0x9c) = 0;
                *(undefined8 *)((longlong)plVar3 + 0xa4) = 0;
                plVar3[0xd] = 0;
                plVar3[0xe] = 0;
                plVar3[0xf] = 0;
                plVar3[0x10] = 0;
                plVar3[0x11] = 0;
                plVar3[0x16] = 0;
                plVar3[0x17] = 0;
                *(undefined4 *)(plVar3 + 0x18) = 0;
                *plVar3 = (longlong)&PTR_LAB_140b76a50;
            }
            break;
        case 1:
            iVar1 = 0xa5;
        case 7:
            iVar6 = iVar1;
            plVar3 = (longlong *)FUN_14018b280(0xc0,0);
            iVar1 = iVar6;
            if (plVar3 == (longlong *)0x0) {
                LAB_14077bf09:
                iVar6 = iVar1;
                plVar3 = (longlong *)0x0;
            }
            else {
                *(undefined4 *)(plVar3 + 1) = 0;
                *plVar3 = (longlong)&PTR_LAB_140b769c0;
                plVar3[2] = 0;
                plVar3[3] = 0;
                plVar3[4] = 0;
                plVar3[5] = 0;
                plVar3[6] = 0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                plVar3[9] = 0;
                plVar3[10] = 0;
                plVar3[0xb] = 0;
                plVar3[0xc] = 0;
                plVar3[0x12] = 0;
                *(undefined4 *)(plVar3 + 0x13) = 1;
                *(undefined8 *)((longlong)plVar3 + 0x9c) = 0;
                *(undefined8 *)((longlong)plVar3 + 0xa4) = 0;
                plVar3[0xd] = 0;
                plVar3[0xe] = 0;
                plVar3[0xf] = 0;
                plVar3[0x10] = 0;
                plVar3[0x11] = 0;
                plVar3[0x16] = 0;
                plVar3[0x17] = 0;
                *plVar3 = (longlong)&PTR_LAB_140b76810;
            }
            break;
        case 2:
            lVar4 = FUN_14018b280(0xf0,0);
            if (lVar4 == 0) {
                plVar3 = (longlong *)0x0;
                iVar6 = 0xa6;
            }
            else {
                plVar3 = (longlong *)FUN_14077a2a0(lVar4);
                iVar6 = 0xa6;
            }
            break;
        case 3:
            lVar4 = FUN_14018b280(0xf8,0);
            if (lVar4 == 0) {
                plVar3 = (longlong *)0x0;
                iVar6 = 0xa9;
            }
            else {
                plVar3 = (longlong *)FUN_14077aa10(lVar4);
                iVar6 = 0xa9;
            }
            break;
        case 4:
            plVar3 = (longlong *)FUN_14018b280(0xd0,0);
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 0;
                *plVar3 = (longlong)&PTR_LAB_140b769c0;
                plVar3[2] = 0;
                plVar3[3] = 0;
                plVar3[4] = 0;
                plVar3[5] = 0;
                plVar3[6] = 0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                plVar3[9] = 0;
                plVar3[10] = 0;
                plVar3[0xb] = 0;
                plVar3[0xc] = 0;
                plVar3[0x12] = 0;
                *(undefined4 *)(plVar3 + 0x13) = 1;
                *(undefined8 *)((longlong)plVar3 + 0x9c) = 0;
                *(undefined8 *)((longlong)plVar3 + 0xa4) = 0;
                plVar3[0xd] = 0;
                plVar3[0xe] = 0;
                plVar3[0xf] = 0;
                plVar3[0x10] = 0;
                plVar3[0x11] = 0;
                *plVar3 = (longlong)&PTR_LAB_140b76780;
                *(undefined4 *)(plVar3 + 0x16) = 0;
                break;
            }
            goto LAB_14077bf09;
        case 5:
            lVar4 = FUN_14018b280(0x130,0);
            if (lVar4 == 0) {
                plVar3 = (longlong *)0x0;
                iVar6 = 0xa7;
            }
            else {
                plVar3 = (longlong *)FUN_14077c2d0(lVar4);
                iVar6 = 0xa7;
            }
            break;
        case 6:
            plVar5 = (longlong *)FUN_14018b280(0xc0,0);
            plVar3 = (longlong *)0x0;
            if (plVar5 != (longlong *)0x0) {
                *(undefined4 *)(plVar5 + 1) = 0;
                *plVar5 = (longlong)&PTR_LAB_140b769c0;
                plVar5[2] = 0;
                plVar5[3] = 0;
                plVar5[4] = 0;
                plVar5[5] = 0;
                plVar5[6] = 0;
                plVar5[7] = 0;
                plVar5[8] = 0;
                plVar5[9] = 0;
                plVar5[10] = 0;
                plVar5[0xb] = 0;
                plVar5[0xc] = 0;
                plVar5[0x12] = 0;
                *(undefined4 *)(plVar5 + 0x13) = 1;
                *(undefined8 *)((longlong)plVar5 + 0x9c) = 0;
                *(undefined8 *)((longlong)plVar5 + 0xa4) = 0;
                plVar5[0xd] = 0;
                plVar5[0xe] = 0;
                plVar5[0xf] = 0;
                plVar5[0x10] = 0;
                plVar5[0x11] = 0;
                *plVar5 = (longlong)&PTR_LAB_140b76660;
                plVar3 = plVar5;
            }
            iVar6 = 0xa8;
            break;
        default:
            return -0x7ff8ffa9;
    }
    iVar1 = (**(code **)(*plVar3 + 0x80))(plVar3,lVar2,param_2);
    if (iVar1 < 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
    }
    else {
        *param_1 = plVar3;
        if (iVar6 != 0x1a0) {
            FUN_140437a10(DAT_140c658d8,iVar6,0,0,0,0,1);
        }
    }
    return iVar1;
}



undefined8 * FUN_14077c1a0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b76660;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14077c210(undefined8 param_1,ulonglong param_2)

{
    FUN_14077c250();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14077c250(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b766f0;
    FUN_140195d70(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((undefined8 *)param_1[0x1e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1e] = param_1[0x1f];
    }
    if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1f] = param_1[0x1e];
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    lVar1 = param_1[0x16];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140779580(param_1);
    return;
}



undefined8 * FUN_14077c2d0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b769c0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 1;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = &PTR_LAB_140b766f0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x124) = 0;
    return param_1;
}



undefined8 * FUN_14077c3f0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b76780;
    FUN_140779580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_14077c430(longlong *param_1)

{
    ulonglong **ppuVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    longlong lVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    ulonglong *puVar11;
    uint uVar12;
    ulonglong *puVar13;
    undefined4 local_res8;
    undefined4 uStackX12;

    puVar11 = (ulonglong *)0x0;
    iVar3 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64b74 == 0) {
            iVar3 = FUN_14022c1a0();
            if (iVar3 < 0) {
                iVar3 = 0;
            }
            else {
                iVar3 = (**(code **)(*DAT_140c638f8 + 0x28))();
            }
        }
    }
    else {
        iVar3 = (*DAT_140c63838)(&PTR_u_Quest2RandomTextLineJoin_140a6c858,DAT_140c63858);
    }
    *param_1 = 0;
    uVar5 = FUN_1401a40c0(iVar3 + 1);
    param_1[1] = uVar5;
    uVar6 = SUB168(ZEXT816(8) * ZEXT816(uVar5),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar5) >> 0x40,0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    lVar7 = FUN_14018b280(uVar6);
    param_1[2] = lVar7;
    FUN_1407e4830(lVar7,0,param_1[1] << 3);
    param_1[3] = (longlong)&LAB_14077ccc0;
    param_1[4] = (longlong)FUN_1402dd540;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64b74 != 0) || (iVar3 = FUN_14022c1a0(), iVar3 < 0)) goto LAB_14077c6ec;
        uVar4 = (**(code **)(*DAT_140c638f8 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_Quest2RandomTextLineJoin_140a6c858);
    }
    puVar13 = puVar11;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar8 = puVar11;
                if (_DAT_140c64b74 == 0) {
                    iVar3 = FUN_14022c1a0();
                    if (iVar3 < 0) {
                        puVar8 = (ulonglong *)0x0;
                    }
                    else {
                        puVar8 = (ulonglong *)(**(code **)(*DAT_140c638f8 + 0x20))();
                    }
                }
            }
            else {
                puVar8 = (ulonglong *)
                        (*DAT_140c63848)(&PTR_u_Quest2RandomTextLineJoin_140a6c858,puVar13,DAT_140c63858);
            }
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65234 == 0) && (iVar3 = FUN_14022d6e0(), -1 < iVar3)) {
                    lVar7 = (**(code **)(*DAT_140c64a50 + 0x18))();
                    goto LAB_14077c5ea;
                }
            }
            else {
                lVar7 = (*DAT_140c63840)(&PTR_u_RandomTextLine_140a6c970,
                                         *(undefined4 *)((longlong)puVar8 + 0xc),DAT_140c63858);
                LAB_14077c5ea:
                if (lVar7 != 0) {
                    local_res8 = *(undefined4 *)((longlong)puVar8 + 4);
                    uStackX12 = *(undefined4 *)(puVar8 + 1);
                    uVar5 = (*(code *)param_1[3])(&local_res8);
                    for (puVar8 = *(ulonglong **)(param_1[2] + (uVar5 % (ulonglong)param_1[1]) * 8);
                         puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                        if ((uVar5 == *puVar8) && (iVar3 = (*(code *)param_1[4])(&local_res8), iVar3 != 0)) {
                            if ((ulonglong **)(puVar8 + 3) != (ulonglong **)0x0) {
                                puVar8 = (ulonglong *)puVar8[3];
                                goto LAB_14077c6c5;
                            }
                            break;
                        }
                    }
                    puVar9 = (ulonglong *)FUN_14018b280(0x18);
                    puVar8 = puVar11;
                    if (puVar9 != (ulonglong *)0x0) {
                        puVar9[2] = 0;
                        puVar9[1] = 0;
                        puVar8 = puVar9;
                    }
                    if (*param_1 == param_1[1]) {
                        FUN_1400290d0(param_1);
                    }
                    uVar5 = (*(code *)param_1[3])(&local_res8);
                    ppuVar1 = (ulonglong **)(param_1[2] + (uVar5 % (ulonglong)param_1[1]) * 8);
                    puVar10 = (ulonglong *)FUN_14018b280(0x20);
                    puVar9 = puVar11;
                    if (puVar10 != (ulonglong *)0x0) {
                        puVar9 = *ppuVar1;
                        *puVar10 = uVar5;
                        puVar10[1] = (ulonglong)puVar9;
                        puVar10[3] = (ulonglong)puVar8;
                        puVar10[2] = CONCAT44(uStackX12,local_res8);
                        puVar9 = puVar10;
                    }
                    *ppuVar1 = puVar9;
                    *param_1 = *param_1 + 1;
                    LAB_14077c6c5:
                    FUN_140003460(puVar8 + 1);
                }
            }
            uVar12 = (int)puVar13 + 1;
            puVar13 = (ulonglong *)(ulonglong)uVar12;
        } while (uVar12 < uVar4);
    }
    LAB_14077c6ec:
    if (param_1[1] != 0) {
        do {
            lVar7 = *(longlong *)(param_1[2] + (longlong)puVar11 * 8);
            while (lVar7 != 0) {
                lVar2 = *(longlong *)(lVar7 + 8);
                iVar3 = FUN_14077c7f0(lVar7 + 0x18,0);
                lVar7 = lVar2;
                if (iVar3 == 0) {
                    return param_1;
                }
            }
            puVar11 = (ulonglong *)((longlong)puVar11 + 1);
        } while (puVar11 < (ulonglong *)param_1[1]);
    }
    return param_1;
}



void FUN_14077c750(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x18);
                lVar1 = *(longlong *)(lVar1 + 8);
                if (lVar2 != 0) {
                    lVar3 = *(longlong *)(lVar2 + 8);
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    FUN_14018b900(lVar2,0);
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 8));
    }
    FUN_140019490(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



undefined8 FUN_14077c7f0(longlong *param_1)

{
    undefined4 uVar1;
    ulonglong uVar2;
    longlong lVar3;
    double dVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;

    uVar6 = 0;
    *(undefined8 *)*param_1 = 0;
    uVar2 = *(ulonglong *)(*param_1 + 0x10);
    if (uVar2 != 0) {
        uVar10 = 0;
        uVar11 = 0x3df00000;
        dVar4 = (double)(ulonglong)((int)uVar2 - 1) + 1.0;
        uVar8 = SUB84(dVar4,0);
        uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
        do {
            uVar5 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
            uVar6 = uVar6 + 1;
            lVar3 = *(longlong *)(*param_1 + 8);
            uVar1 = *(undefined4 *)(lVar3 + -4 + uVar6 * 4);
            uVar7 = (longlong)
                            ((double)(ulonglong)uVar5 * (double)CONCAT44(uVar11,uVar10) *
                             (double)CONCAT44(uVar9,uVar8)) & 0xffffffff;
            *(undefined4 *)(lVar3 + -4 + uVar6 * 4) = *(undefined4 *)(lVar3 + uVar7 * 4);
            *(undefined4 *)(*(longlong *)(*param_1 + 8) + uVar7 * 4) = uVar1;
        } while (uVar6 < uVar2);
    }
    return 1;
}



int FUN_14077c8b0(undefined8 param_1,int param_2,int param_3,longlong param_4,uint param_5)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (param_3 == 1) {
        return 1;
    }
    if (param_3 == 2) {
        return 3;
    }
    if (param_3 == 3) {
        return 6;
    }
    if (param_3 == 5) {
        if (param_5 < 5) {
            return param_5 + 8;
        }
    }
    else if ((param_4 != 0) && (iVar1 = FUN_1405fbc40(), param_3 == 0)) {
        if (param_2 == 0) {
            if (iVar1 == 1) {
                return 1;
            }
            if (iVar1 == 2) {
                return 5;
            }
        }
        else {
            uVar3 = 0;
            if (*(ulonglong *)(param_4 + 0x90) != 0) {
                piVar2 = *(int **)(param_4 + 0x88);
                uVar4 = uVar3;
                do {
                    if (*piVar2 == param_2) {
                        if (iVar1 != 1) {
                            if (iVar1 == 2) {
                                return 5;
                            }
                            if (iVar1 != 4) break;
                        }
                        return 4;
                    }
                    uVar4 = uVar4 + 1;
                    piVar2 = piVar2 + 1;
                } while (uVar4 < *(ulonglong *)(param_4 + 0x90));
            }
            if (*(ulonglong *)(param_4 + 0x80) != 0) {
                piVar2 = *(int **)(param_4 + 0x78);
                while (*piVar2 != param_2) {
                    uVar3 = uVar3 + 1;
                    piVar2 = piVar2 + 1;
                    if (*(ulonglong *)(param_4 + 0x80) <= uVar3) {
                        return 0;
                    }
                }
                if ((iVar1 == 1) || (iVar1 == 2)) {
                    return 2;
                }
            }
        }
        return 0;
    }
    return 0xe;
}



undefined4 FUN_14077ca60(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    if (param_3 != 0) {
        switch(param_2) {
            case 0:
                return *(undefined4 *)(param_3 + 0x90);
            case 1:
                return *(undefined4 *)(param_3 + 0xa0);
            case 2:
                return *(undefined4 *)(param_3 + 0x94);
            case 3:
                return *(undefined4 *)(param_3 + 0x1a8);
            case 4:
                return *(undefined4 *)(param_3 + 0x98);
            case 5:
                return *(undefined4 *)(param_3 + 0x9c);
            case 6:
                return *(undefined4 *)(param_3 + 0xa4);
            case 8:
                return *(undefined4 *)(param_3 + 0x14c);
            case 9:
                return *(undefined4 *)(param_3 + 0x150);
            case 10:
                return *(undefined4 *)(param_3 + 0x154);
            case 0xb:
                return *(undefined4 *)(param_3 + 0x158);
            case 0xc:
                return *(undefined4 *)(param_3 + 0x15c);
        }
    }
    return 0;
}



undefined8 FUN_14077cb20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    undefined4 uVar1;
    ulonglong *puVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined4 local_res8;
    undefined4 local_resc;

    local_res8 = param_2;
    local_resc = param_3;
    uVar5 = (**(code **)(param_1 + 0x18))(&local_res8);
    puVar2 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar5 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar5 == *puVar2) &&
            (iVar3 = (**(code **)(param_1 + 0x20))(&local_res8,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if ((ulonglong **)(puVar2 + 3) == (ulonglong **)0x0) {
        return 0;
    }
    puVar2 = (ulonglong *)puVar2[3];
    uVar5 = puVar2[2];
    if (uVar5 == 0) {
        return 0;
    }
    if (uVar5 != 1) {
        if (uVar5 == 2) {
            iVar3 = FUN_1401ae6a0(0,1);
            uVar6 = FUN_14077cc50((longlong)iVar3,*(undefined4 *)(puVar2[1] + (longlong)iVar3 * 4));
            return uVar6;
        }
        if (uVar5 <= *puVar2) {
            *puVar2 = 0;
        }
        uVar4 = FUN_1401ae6f0(*(undefined4 *)puVar2,(int)uVar5 + -1);
        uVar5 = puVar2[1];
        uVar1 = *(undefined4 *)(uVar5 + *puVar2 * 4);
        *(undefined4 *)(uVar5 + *puVar2 * 4) = *(undefined4 *)(uVar5 + (ulonglong)uVar4 * 4);
        *(undefined4 *)(puVar2[1] + (ulonglong)uVar4 * 4) = uVar1;
        uVar5 = *puVar2;
        *puVar2 = uVar5 + 1;
        uVar6 = FUN_14077cc50(uVar5,*(undefined4 *)(puVar2[1] + uVar5 * 4));
        return uVar6;
    }
    uVar6 = FUN_14077cc50();
    return uVar6;
}



ulonglong FUN_14077cc50(undefined8 param_1,undefined4 param_2)

{
    ulonglong uVar1;
    longlong lVar2;

    if (DAT_140c65898 == 0) {
        lVar2 = FUN_14022d940(param_2);
        return (ulonglong)*(uint *)(lVar2 + 4);
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 != 0) {
        uVar1 = FUN_140612e30(lVar2,param_2,*(undefined4 *)(lVar2 + 0x34),*(undefined4 *)(lVar2 + 0xdc),
                              *(undefined4 *)(lVar2 + 0xd8));
        return uVar1;
    }
    uVar1 = FUN_140612e30(0,param_2,3,0x17,0x11);
    return uVar1;
}



longlong *
FUN_14077cce0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    float fVar8;
    float fVar9;
    undefined4 in_XMM6_Da;
    float fVar10;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar11;
    undefined4 in_XMM7_Db;
    float fVar12;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar13 [16];
    undefined auVar14 [16];

    lVar4 = *(longlong *)param_1[6];
    if ((*(uint *)(lVar4 + 0xc) < 0x1c) && ((0x8008008U >> (*(uint *)(lVar4 + 0xc) & 0x1f) & 1) != 0))
    {
        lVar4 = FUN_140721ef0(lVar4,*(undefined4 *)(lVar4 + 0x14));
        if (lVar4 == 0) {
            return (longlong *)0x0;
        }
        auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar10 = 3.402823e+38;
        auVar13 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        plVar7 = (longlong *)0x0;
        lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x10);
        fVar11 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
        fVar12 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4);
        if (lVar6 != *(longlong *)(lVar4 + 0x10)) {
            do {
                plVar1 = *(longlong **)(lVar6 + 0x28);
                iVar3 = (**(code **)(*param_1 + 0x50))
                        (param_1,*(undefined4 *)(plVar1 + 1),param_3,param_4,auVar13,auVar14);
                if ((((iVar3 == 0) && (lVar5 = FUN_14024b980(*(undefined4 *)(*plVar1 + 8)), lVar5 != 0)) &&
                     (fVar8 = fVar11 - *(float *)(lVar5 + 0xc), fVar9 = fVar12 - *(float *)(lVar5 + 0x10),
                      fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + 0.0) - *(float *)(lVar5 + 4),
                             fVar8 < fVar10)) && (plVar7 = plVar1, fVar10 = fVar8, param_2 != (undefined4 *)0x0)) {
                    *param_2 = *(undefined4 *)(plVar1 + 1);
                }
                lVar5 = *(longlong *)(lVar6 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar6 + 8);
                    if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar6 = lVar5;
                            lVar5 = *(longlong *)(lVar6 + 8);
                        } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                        lVar6 = lVar5;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
            } while (lVar6 != *(longlong *)(lVar4 + 0x10));
        }
        return plVar7;
    }
    return (longlong *)0x0;
}



float FUN_14077ce90(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    float fVar2;
    float fVar3;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return 0.0;
    }
    fVar2 = *(float *)(param_2 + 0xc) - *(float *)(lVar1 + 0x11e0);
    fVar3 = *(float *)(param_2 + 0x10) - *(float *)(lVar1 + 0x11e4);
    return 1.0 - SQRT(fVar2 * fVar2 + fVar3 * fVar3 + 0.0) / *(float *)(param_2 + 4);
}



wchar_t * FUN_14077cf00(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    wchar_t *pwVar2;
    float fVar3;
    float fVar4;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
    }
    fVar3 = *(float *)(param_2 + 0xc) - *(float *)(lVar1 + 0x11e0);
    fVar4 = *(float *)(param_2 + 0x10) - *(float *)(lVar1 + 0x11e4);
    fVar3 = 1.0 - SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0) / *(float *)(param_2 + 4);
    if (fVar3 <= 0.0) {
        return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_RED\\Explorer_Arrow_01_RED.m3";
    }
    if (fVar3 < 0.25) {
        return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_YLW\\Explorer_Arrow_01_YLW.m3";
    }
    if (fVar3 < 0.5) {
        return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_YLW\\Explorer_Arrow_01_YLW.m3";
    }
    pwVar2 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
    if (fVar3 < 0.75) {
        pwVar2 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_GRN\\Explorer_Arrow_01_GRN.m3";
    }
    return pwVar2;
}



// WARNING: Removing unreachable block (ram,0x00014077d0ce)

undefined8 FUN_14077cfc0(undefined8 param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined4 local_28;
    int local_24;
    undefined4 local_20;
    longlong local_18;
    code *local_10;

    local_18 = DAT_140c65970;
    if ((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 3)) {
        plVar3 = (longlong *)FUN_1403d7bc0(DAT_140c65970);
        if (plVar3 == (longlong *)0x0) {
            return 0x80004005;
        }
        iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
        plVar4 = (longlong *)0x0;
        if (iVar2 == 0) {
            plVar4 = (longlong *)FUN_14077cce0(plVar3,0);
        }
        iVar2 = FUN_14077d110();
        if (iVar2 == 0) {
            uVar5 = 0x80004005;
        }
        else {
            local_28 = 0;
            local_20 = 0;
            plVar3 = *(longlong **)(DAT_140c65920 + 2);
            local_24 = param_2;
            while (plVar1 = plVar3, plVar1 != (longlong *)0x0) {
                plVar3 = (longlong *)plVar1[4];
                if (((*(int *)((longlong)plVar1 + 0x3c) == param_2) && (*(int *)(plVar1 + 7) == 0)) &&
                    (*(int *)(plVar1 + 8) == 0)) {
                    (**(code **)(*plVar1 + 8))();
                }
            }
            local_10 = FUN_140001b70;
            if (*DAT_140c65920 == 0) {
                uVar5 = 0x80004005;
            }
            else {
                lVar6 = FUN_140487030(DAT_140c65920,*(undefined4 *)(*plVar4 + 0xc),&local_28,&local_18);
                uVar5 = 0x80004005;
                if (lVar6 != 0) {
                    uVar5 = 0;
                }
            }
        }
        return uVar5;
    }
    return 0x80004005;
}



bool FUN_14077d110(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if ((DAT_140c65970 == 0) || (*(int *)(DAT_140c65970 + 8) != 3)) {
        return false;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (((lVar1 != 0) && (param_2 != (longlong *)0x0)) && (*param_2 != 0)) {
        lVar3 = FUN_14024b980(*(undefined4 *)(*param_2 + 8));
        if (lVar3 != 0) {
            iVar2 = FUN_140633cb0();
            if (-1 < iVar2) {
                fVar5 = *(float *)(lVar3 + 0x10);
                fVar4 = *(float *)(lVar3 + 0xc);
                fVar6 = 0.0;
                lVar3 = FUN_140200220(*(undefined4 *)(lVar3 + 0x14),0,fVar5,0x1da);
                if (lVar3 != 0) {
                    fVar6 = *(float *)(lVar3 + 0x18);
                }
                fVar4 = fVar4 - *(float *)(lVar1 + 0x11e0);
                fVar5 = fVar5 - *(float *)(lVar1 + 0x11e4);
                return fVar4 * fVar4 + fVar5 * fVar5 + 0.0 < fVar6 * fVar6;
            }
        }
        return false;
    }
    return false;
}



undefined8 FUN_14077d240(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 in_stack_ffffffffffffffb8;
    undefined4 uVar7;
    undefined4 local_38;
    int local_34;
    undefined4 local_30;
    undefined local_28 [16];

    uVar6 = DAT_140c65970;
    plVar4 = (longlong *)FUN_1403d7bc0(DAT_140c65970);
    if ((((plVar4 != (longlong *)0x0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
         (iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4), iVar3 == 3)) &&
        (lVar5 = FUN_140721f50(*(longlong *)plVar4[6],*(undefined4 *)(*(longlong *)plVar4[6] + 0x14)),
                lVar5 != 0)) {
        lVar5 = FUN_1407209f0(lVar5,param_3);
        if ((lVar5 != 0) && (iVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,param_3), iVar3 == 0)) {
            uVar1 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x18);
            lVar5 = FUN_14024b980(uVar1);
            if (lVar5 == 0) {
                uVar6 = 0x80004005;
            }
            else {
                local_28 = ZEXT1216(*(undefined (*) [12])(lVar5 + 0xc));
                FUN_140485fa0(uVar1,0);
                uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
                iVar3 = *(int *)(*(longlong *)plVar4[6] + 0x14);
                local_38 = 0;
                local_30 = 0;
                plVar4 = *(longlong **)(DAT_140c65920 + 2);
                local_34 = iVar3;
                while (plVar4 != (longlong *)0x0) {
                    plVar2 = (longlong *)plVar4[4];
                    if (((*(int *)((longlong)plVar4 + 0x3c) == iVar3) && (*(int *)(plVar4 + 7) == 0)) &&
                        (*(int *)(plVar4 + 8) == 0)) {
                        (**(code **)(*plVar4 + 8))(plVar4);
                        (**(code **)*plVar4)(plVar4,1);
                    }
                    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
                    plVar4 = plVar2;
                }
                iVar3 = FUN_140485fa0(uVar1,0);
                if (iVar3 == 0) {
                    local_28 = CONCAT88(0x14077d440,uVar6);
                    if (*DAT_140c65920 != 0) {
                        FUN_140486dc0(DAT_140c65920,
                                      L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
                                      &local_38,local_28,CONCAT44(uVar7,uVar1),0);
                    }
                }
                else {
                    local_28 = local_28 & (undefined  [16])0xffffffffffffffff;
                    if (*DAT_140c65920 != 0) {
                        FUN_140486f10(DAT_140c65920,
                                      L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                                ,*(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,&local_38,local_28);
                    }
                }
                uVar6 = 0;
            }
            return uVar6;
        }
        return 0x80004005;
    }
    return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14077d4e0(longlong param_1,undefined8 param_2,int param_3,longlong **param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined **local_38;
    undefined8 local_30;

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    lVar6 = *(longlong *)(lVar1 + 0x10);
    do {
        if (lVar6 == lVar1) {
            return 0;
        }
        plVar2 = *(longlong **)(lVar6 + 0x28);
        iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
        if ((iVar4 == 0) && (*(int *)(*(longlong *)plVar2[6] + 0xc) == 0xc)) {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6467c != 0) || (iVar4 = FUN_14021d3a0(), iVar4 < 0)) goto LAB_14077d5d3;
                lVar5 = (**(code **)(*DAT_140c64f68 + 0x18))();
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_PathExplorerDoor_140a6bc18,
                                         *(undefined4 *)(*(longlong *)plVar2[6] + 0x14),DAT_140c63858);
            }
            if (lVar5 != 0) {
                local_38 = &PTR_FUN_140b66440;
                if (param_3 == 0) {
                    iVar4 = *(int *)(lVar5 + 8);
                }
                else {
                    iVar4 = *(int *)(lVar5 + 0xc);
                }
                local_30 = param_2;
                if (iVar4 != 0) {
                    FUN_1403b4a10(&local_38);
                    iVar4 = FUN_1403b4a20(&local_38);
                    if (iVar4 == 0) {
                        if (param_4 != (longlong **)0x0) {
                            *param_4 = plVar2;
                        }
                        return 1;
                    }
                }
                local_38 = &PTR_FUN_140b66400;
            }
        }
        LAB_14077d5d3:
        lVar5 = *(longlong *)(lVar6 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar6 + 8);
            if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                do {
                    lVar6 = lVar5;
                    lVar5 = *(longlong *)(lVar6 + 8);
                } while (lVar6 == *(longlong *)(lVar5 + 0x18));
            }
            if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                lVar6 = lVar5;
            }
        }
        else {
            for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                lVar5 = lVar3;
            }
        }
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14077d660(longlong param_1)

{
    uint uVar1;
    code *pcVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    uint *puVar7;
    undefined4 uVar8;
    uint uVar9;

    lVar6 = FUN_140200220(0xb9);
    uVar8 = 200;
    if (lVar6 == 0) {
        uVar3 = 200;
    }
    else {
        uVar3 = *(undefined4 *)(lVar6 + 4);
    }
    *(undefined4 *)(param_1 + 0xcf88) = uVar3;
    lVar6 = FUN_140200220(0xba);
    pcVar2 = DAT_140c63838;
    if (lVar6 != 0) {
        uVar8 = *(undefined4 *)(lVar6 + 4);
    }
    *(undefined4 *)(param_1 + 0xcf8c) = uVar8;
    uVar9 = 0;
    if (pcVar2 == (code *)0x0) {
        uVar4 = uVar9;
        if (_DAT_140c64798 == 0) {
            iVar5 = FUN_140236fe0();
            if (iVar5 < 0) {
                uVar4 = 0;
            }
            else {
                uVar4 = (**(code **)(*DAT_140c64bd0 + 0x28))();
            }
        }
    }
    else {
        uVar4 = (*pcVar2)(&PTR_u_Spell4CastResult_140a6d150,DAT_140c63858);
    }
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64798 == 0) && (iVar5 = FUN_140236fe0(), -1 < iVar5)) {
                    puVar7 = (uint *)(**(code **)(*DAT_140c64bd0 + 0x20))(DAT_140c64bd0,uVar9);
                    goto LAB_14077d741;
                }
            }
            else {
                puVar7 = (uint *)(*DAT_140c63848)(&PTR_u_Spell4CastResult_140a6d150,uVar9,DAT_140c63858);
                LAB_14077d741:
                if (puVar7 != (uint *)0x0) {
                    uVar1 = *puVar7;
                    *(uint **)((ulonglong)uVar1 * 0xa0 + 8 + param_1) = puVar7;
                    (**(code **)(*DAT_140c65848 + 0x18))
                            (DAT_140c65848,param_1 + 0x10 + (ulonglong)uVar1 * 0xa0,puVar7[6]);
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
    }
    return 0;
}



undefined8 FUN_14077d790(undefined8 *param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong **pplVar6;

    if (param_2 == (longlong *)0x0) {
        return 0x80004005;
    }
    iVar3 = (**(code **)(*param_2 + 8))(param_2);
    pplVar1 = (longlong **)param_1[2];
    pplVar6 = (longlong **)*pplVar1;
    if (pplVar6 != pplVar1) {
        do {
            if (*(int *)(pplVar6 + 2) == iVar3) break;
            pplVar6 = (longlong **)*pplVar6;
        } while (pplVar6 != pplVar1);
        if (pplVar6 != pplVar1) {
            return 1;
        }
    }
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = param_1[2];
    plVar5 = (longlong *)FUN_14018b280(0x18);
    if (plVar5 + 2 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 2) = uVar4;
    }
    *plVar5 = lVar2;
    plVar5[1] = *(longlong *)(lVar2 + 8);
    **(longlong ***)(lVar2 + 8) = plVar5;
    *(longlong **)(lVar2 + 8) = plVar5;
    iVar3 = (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)*param_1);
    if (iVar3 != 0) {
        uVar4 = (**(code **)(*param_2 + 8))(param_2);
        lVar2 = param_1[4];
        plVar5 = (longlong *)FUN_14018b280(0x18);
        if (plVar5 + 2 != (longlong *)0x0) {
            *(undefined4 *)(plVar5 + 2) = uVar4;
        }
        *plVar5 = lVar2;
        plVar5[1] = *(longlong *)(lVar2 + 8);
        **(longlong ***)(lVar2 + 8) = plVar5;
        *(longlong **)(lVar2 + 8) = plVar5;
    }
    return 0;
}



void FUN_14077d8b0(undefined8 *param_1,longlong *param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong **pplVar7;
    longlong lVar8;
    undefined local_18 [8];
    longlong **local_10;

    if (param_2 == (longlong *)0x0) {
        return;
    }
    iVar1 = (**(code **)(*param_2 + 200))(param_2);
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    for (pplVar7 = *(longlong ***)(longlong **)param_1[4];
            (pplVar7 != (longlong **)param_1[4] && (*(int *)(pplVar7 + 2) != iVar2));
    pplVar7 = (longlong **)*pplVar7) {
    }
    local_10 = (longlong **)FUN_14018b280(0x28);
    *local_10 = (longlong *)local_10;
    local_10[1] = (longlong *)local_10;
    (**(code **)(*param_2 + 0xa0))(param_2,*(undefined4 *)*param_1,local_18,0);
    lVar6 = 0;
    if ((iVar1 == 0) || (pplVar4 = (longlong **)*local_10, lVar8 = lVar6, pplVar4 == local_10)) {
        LAB_14077d970:
        if (pplVar7 != (longlong **)param_1[4]) {
            plVar5 = *pplVar7;
            pplVar4 = (longlong **)pplVar7[1];
            *pplVar4 = plVar5;
            plVar5[1] = (longlong)pplVar4;
            FUN_14018b900(pplVar7);
            goto LAB_14077d9f5;
        }
    }
    else {
        do {
            pplVar4 = (longlong **)*pplVar4;
            lVar8 = lVar8 + 1;
        } while (pplVar4 != local_10);
        if (lVar8 == 0) goto LAB_14077d970;
    }
    if ((iVar1 != 0) && (pplVar4 = (longlong **)*local_10, pplVar4 != local_10)) {
        do {
            pplVar4 = (longlong **)*pplVar4;
            lVar6 = lVar6 + 1;
        } while (pplVar4 != local_10);
        if ((lVar6 != 0) && (pplVar7 == (longlong **)param_1[4])) {
            uVar3 = (**(code **)(*param_2 + 8))(param_2);
            lVar6 = param_1[4];
            plVar5 = (longlong *)FUN_14018b280(0x18);
            if (plVar5 + 2 != (longlong *)0x0) {
                *(undefined4 *)(plVar5 + 2) = uVar3;
            }
            *plVar5 = lVar6;
            plVar5[1] = *(longlong *)(lVar6 + 8);
            **(longlong ***)(lVar6 + 8) = plVar5;
            *(longlong **)(lVar6 + 8) = plVar5;
        }
    }
    LAB_14077d9f5:
    pplVar7 = (longlong **)*local_10;
    if ((longlong **)*local_10 != local_10) {
        do {
            pplVar4 = (longlong **)*pplVar7;
            FUN_14018b900(pplVar7,0);
            pplVar7 = pplVar4;
        } while (pplVar4 != local_10);
    }
    *local_10 = (longlong *)local_10;
    local_10[1] = (longlong *)local_10;
    FUN_14018b900(local_10,0);
    return;
}



void FUN_14077da50(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar2 = lVar1, lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                if (*(longlong *)(lVar2 + 0x18) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0x18),0);
                    *(undefined8 *)(lVar2 + 0x18) = 0;
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    FUN_140019490(param_1);
    FUN_140019490(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



undefined8 FUN_14077db00(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    undefined8 uVar7;
    ulonglong local_res10;

    local_res10 = param_2;
    uVar4 = (*(code *)param_1[3])(&local_res10);
    puVar5 = *(ulonglong **)(param_1[2] + (uVar4 % (ulonglong)param_1[1]) * 8);
    do {
        if (puVar5 == (ulonglong *)0x0) {
            LAB_14077db5e:
            puVar5 = (ulonglong *)FUN_14018b280(0x10);
            if (puVar5 == (ulonglong *)0x0) {
                LAB_14077dbd7:
                uVar7 = 0x80004005;
            }
            else {
                *puVar5 = local_res10;
                *(undefined4 *)(puVar5 + 1) = param_3;
                *(undefined4 *)((longlong)puVar5 + 0xc) = param_4;
                if (*param_1 == param_1[1]) {
                    FUN_1400290d0(param_1);
                }
                uVar4 = (*(code *)param_1[3])(&local_res10);
                ppuVar1 = (ulonglong **)(param_1[2] + (uVar4 % (ulonglong)param_1[1]) * 8);
                puVar6 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar6 != (ulonglong *)0x0) {
                    puVar2 = *ppuVar1;
                    *puVar6 = uVar4;
                    puVar6[1] = (ulonglong)puVar2;
                    puVar6[3] = (ulonglong)puVar5;
                    puVar6[2] = local_res10;
                }
                *ppuVar1 = puVar6;
                *param_1 = *param_1 + 1;
                uVar7 = 0;
            }
            return uVar7;
        }
        if ((uVar4 == *puVar5) && (iVar3 = (*(code *)param_1[4])(&local_res10), iVar3 != 0)) {
            if (puVar5 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_14077dbd7;
            goto LAB_14077db5e;
        }
        puVar5 = (ulonglong *)puVar5[1];
    } while( true );
}



ulonglong FUN_14077dc00(longlong *param_1,undefined8 param_2)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    ulonglong **ppuVar5;
    undefined8 local_res10;

    local_res10 = param_2;
    uVar2 = (*(code *)param_1[3])(&local_res10);
    uVar3 = uVar2 / (ulonglong)param_1[1];
    puVar4 = *(ulonglong **)(param_1[2] + (uVar2 % (ulonglong)param_1[1]) * 8);
    if (puVar4 != (ulonglong *)0x0) {
        while ((uVar2 != *puVar4 || (uVar3 = (*(code *)param_1[4])(&local_res10), (int)uVar3 == 0))) {
            puVar4 = (ulonglong *)puVar4[1];
            if (puVar4 == (ulonglong *)0x0) {
                return uVar3;
            }
        }
        if (puVar4 + 3 != (ulonglong *)0x0) {
            uVar2 = puVar4[3];
            uVar3 = (*(code *)param_1[3])(&local_res10);
            ppuVar5 = (ulonglong **)(param_1[2] + (uVar3 % (ulonglong)param_1[1]) * 8);
            puVar4 = *(ulonglong **)(param_1[2] + (uVar3 % (ulonglong)param_1[1]) * 8);
            while (puVar4 != (ulonglong *)0x0) {
                if ((uVar3 == **ppuVar5) &&
                    (iVar1 = (*(code *)param_1[4])(&local_res10,*ppuVar5 + 2), iVar1 != 0)) {
                    puVar4 = *ppuVar5;
                    *ppuVar5 = (ulonglong *)puVar4[1];
                    FUN_14018b900(puVar4,0);
                    *param_1 = *param_1 + -1;
                    break;
                }
                ppuVar5 = (ulonglong **)(*ppuVar5 + 1);
                puVar4 = *ppuVar5;
            }
            uVar3 = FUN_14018b900(uVar2,0);
        }
    }
    return uVar3;
}



ulonglong FUN_14077dd00(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 local_res10;

    local_res10 = param_2;
    uVar3 = (**(code **)(param_1 + 0x18))(&local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar3 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x20))(&local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 * FUN_14077dd90(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;

    FUN_1405c7150(param_1,3);
    lVar2 = DAT_140c65898;
    *param_1 = &PTR_FUN_140b77a30;
    if (*(longlong *)(lVar2 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        return param_1;
    }
    iVar1 = FUN_140397740();
    if (iVar1 != 0) {
        if ((((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) ||
             (lVar2 = FUN_1405a5b90(DAT_140c65898,iVar1), lVar2 == 0)) &&
            (lVar2 = FUN_1407a0fd0(DAT_140c65b70), lVar2 == 0)) {
            return param_1;
        }
        FUN_1405c7620(param_1,lVar2);
        return param_1;
    }
    return param_1;
}



void FUN_14077de30(longlong param_1)

{
    short sVar1;
    short *psVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 local_res10;
    undefined4 local_res14;

    if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
        if (*(int *)(param_1 + 0x114) == 0) {
            uVar3 = FUN_140397740();
            FUN_1405c7960(param_1,uVar3);
        }
        lVar4 = DAT_140c65898;
        lVar5 = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined (*) [16])(param_1 + 0xe0) = ZEXT816(0);
        local_res10 = 0;
        local_res14 = 0x10;
        *(undefined8 *)(param_1 + 0x94) = 0;
        *(undefined8 *)(param_1 + 0x9c) = 0;
        *(undefined8 *)(param_1 + 0xa4) = 0;
        *(undefined8 *)(param_1 + 0xac) = 0;
        *(undefined8 *)(param_1 + 0xb4) = 0;
        *(undefined8 *)(param_1 + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0x108) = 0;
        lVar4 = FUN_1403ac780(lVar4 + 0xa0,&local_res10);
        if ((lVar4 != 0) &&
            (psVar2 = *(short **)(*(longlong *)(lVar4 + 0x40) + 0x1e8), psVar2 != (short *)0x0)) {
            sVar1 = *psVar2;
            while (sVar1 != 0) {
                lVar5 = lVar5 + 1;
                sVar1 = psVar2[lVar5];
            }
            FUN_14001c480(param_1 + 0x10,psVar2,psVar2 + lVar5);
        }
        return;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



undefined8 * FUN_14077dfa0(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    FUN_1405c7150();
    lVar2 = DAT_140c65898;
    *param_1 = &PTR_FUN_140b77af0;
    if (*(longlong *)(lVar2 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        return param_1;
    }
    lVar1 = *(longlong *)(lVar2 + 0x6d90);
    if (lVar1 == 0) {
        iVar3 = 0;
    }
    else {
        iVar3 = *(int *)(lVar1 + 8 + *(longlong *)(lVar1 + 0x30) * 4);
    }
    if (iVar3 != 0) {
        if (((lVar2 == 0) || (lVar2 = FUN_1405a5b90(lVar2), lVar2 == 0)) &&
            (lVar2 = FUN_1407a0fd0(DAT_140c65b70), lVar2 == 0)) {
            return param_1;
        }
        FUN_1405c7620(param_1,lVar2);
        return param_1;
    }
    return param_1;
}



void FUN_14077e040(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    if (*(int *)(param_1 + 0x114) != 0) goto LAB_14077e0a3;
    uVar2 = *(ulonglong *)(DAT_140c65898 + 0x6d90);
    if (uVar2 != 0) {
        uVar2 = (ulonglong)*(uint *)(uVar2 + 8 + *(longlong *)(uVar2 + 0x30) * 4);
    }
    if ((int)uVar2 == 0) goto LAB_14077e0a3;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_14077e087:
        lVar1 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar1 == 0) goto LAB_14077e0a3;
    }
    else {
        lVar1 = FUN_1405a5b90();
        if (lVar1 == 0) goto LAB_14077e087;
    }
    FUN_1405c7620(param_1,lVar1);
    LAB_14077e0a3:
    FUN_1405c8ec0(param_1);
    return;
}



undefined8 * FUN_14077e0c0(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 local_res8;
    undefined4 local_resc;

    FUN_1405c7150(param_1,1);
    lVar1 = DAT_140c65898;
    *param_1 = &PTR_FUN_140b77bb0;
    if (*(longlong *)(lVar1 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        return param_1;
    }
    local_res8 = 0;
    local_resc = 0xb;
    lVar1 = FUN_1403ac780(lVar1 + 0xa0,&local_res8);
    if (lVar1 != 0) {
        FUN_1405c7ad0(param_1,**(undefined4 **)(lVar1 + 0x40),0);
    }
    return param_1;
}



void FUN_14077e150(longlong *param_1)

{
    short sVar1;
    int iVar2;
    longlong lVar3;
    short *psVar4;
    longlong lVar5;
    undefined4 local_res8;
    undefined4 local_resc;

    iVar2 = FUN_1403ca1d0();
    lVar5 = 0;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x114) != 0)) {
        *(undefined4 *)((longlong)param_1 + 0x114) = 0;
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else if (iVar2 != *(int *)((longlong)param_1 + 0x114)) {
        local_res8 = 0;
        local_resc = 0xb;
        lVar3 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res8);
        if (lVar3 != 0) {
            FUN_1405c7ad0(param_1,**(undefined4 **)(lVar3 + 0x40),0);
        }
    }
    FUN_1405c8ec0(param_1);
    if (iVar2 == 0) {
        if (*(int *)((longlong)param_1 + 0x114) != 0) goto LAB_14077e232;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x1e) = 0x3ecccccd;
        *(undefined4 *)((longlong)param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0x1c) = 0x3ecccccd;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3ecccccd;
        *(undefined4 *)(param_1 + 0x1d) = 0x3ecccccd;
        *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
        FUN_14001c2b0(param_1 + 10,param_1[0xb],param_1[0xc]);
    }
    if (*(int *)((longlong)param_1 + 0x114) == 0) {
        return;
    }
    LAB_14077e232:
    psVar4 = (short *)(**(code **)(*param_1 + 0xb0))(param_1);
    sVar1 = *psVar4;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar4[lVar5];
    }
    FUN_14001c480(param_1 + 2,psVar4,psVar4 + lVar5);
    return;
}



wchar_t * FUN_14077e270(void)

{
    longlong lVar1;
    undefined4 local_res10;
    undefined4 local_res14;

    local_res10 = 0;
    local_res14 = 0xb;
    lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
    if (lVar1 == 0) {
        return L"Icon_ItemMisc_gadget_0001";
    }
    return *(wchar_t **)(*(longlong *)(lVar1 + 0x40) + 0x1e8);
}



void FUN_14077e2c0(undefined8 param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;

    if (param_2 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x6490);
        uVar5 = 0;
        if (lVar4 != 0) {
            uVar1 = *(undefined4 *)(lVar4 + 0x108);
            lVar3 = FUN_1403d90d0(DAT_140c65898,uVar1);
            if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x80) == 0x14)) && (*(int *)(lVar4 + 0x2ac) == 0)) &&
                (((*(int *)(lVar3 + 0x250) != 0 && (iVar2 = FUN_14045a950(lVar4,uVar1), iVar2 == 2)) &&
                  ((lVar3 = FUN_1401f31e0(*(undefined4 *)(lVar4 + 0xdc)), lVar3 != 0 &&
                                                                          (lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x54),lVar4), lVar4 != 0))))
                )) {
                FUN_140397ce0(DAT_140c65898);
                return;
            }
        }
        if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
            uVar5 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
        }
        FUN_14039d2c0(DAT_140c65898,uVar5);
    }
    return;
}



void FUN_14077e3b0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong *puVar9;
    ulonglong uVar6;

    lVar3 = DAT_140c65898;
    uVar8 = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined (*) [16])(param_1 + 0xe0) = ZEXT816(0);
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    lVar4 = *(longlong *)(lVar3 + 0x6490);
    if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        return;
    }
    plVar2 = (longlong *)(lVar4 + 0x2d8);
    puVar9 = (ulonglong *)(DAT_140c65a08 + 0x28);
    uVar6 = uVar8;
    do {
        if (*plVar2 != 0) {
            uVar7 = uVar8;
            if ((int)uVar6 < 0x1c) {
                uVar7 = *puVar9;
            }
            if ((*(byte *)(uVar7 + 0x10) & 4) != 0) {
                *(undefined4 *)(param_1 + 0xf0) = 0;
                *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
                *(undefined4 *)(param_1 + 0xd4) = 0;
                *(undefined4 *)(param_1 + 0xd8) = 0;
                *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
                return;
            }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        puVar9 = puVar9 + 1;
        plVar2 = plVar2 + 2;
    } while (uVar5 < 0x1c);
    if (lVar4 != 0) {
        uVar8 = (ulonglong)*(uint *)(lVar4 + 0x108);
    }
    lVar3 = FUN_1403d90d0(lVar3,uVar8);
    if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x80) == 0x14) {
            if ((((*(int *)(lVar4 + 0x2ac) != 0) || (*(int *)(lVar3 + 0x250) == 0)) ||
                 (iVar1 = FUN_14045a950(lVar4,uVar8), iVar1 == 0)) ||
                (lVar3 = FUN_1401f31e0(*(undefined4 *)(lVar4 + 0xdc)), lVar3 == 0)) goto LAB_14077e548;
            lVar4 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x54),lVar4);
        }
        else {
            if (*(char *)(*(longlong *)(lVar3 + 0x1908) + 4) == '\0') goto LAB_14077e548;
            lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1908) + 0x40);
        }
        if (lVar4 != 0) {
            return;
        }
    }
    LAB_14077e548:
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14077e580(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined2 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    lVar4 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (((((lVar4 != 0) && (*(int *)(lVar4 + 0xd50) != 0)) && (*(int *)(lVar4 + 0x80) != 0x17)) &&
         ((*(int *)(lVar4 + 0x250) == 0 && (*(int *)(lVar4 + 0x254) == 0)))) && (param_2 == 0)) {
        uVar5 = 0;
        uVar6 = uVar5;
        if (lVar4 != 0) {
            uVar6 = (ulonglong)*(uint *)(lVar4 + 0x108);
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,uVar6);
        if ((((lVar2 != 0) && (lVar2 != lVar4)) &&
             ((*(int *)(lVar2 + 0x80) != 0x17 &&
               ((*(int *)(lVar2 + 0x250) == 0 && (*(int *)(lVar2 + 0x254) == 0)))))) &&
            ((*(int *)(lVar2 + 0x80) != 0x14 ||
              ((*(int *)(lVar4 + 0x10c) != 0 ||
                (iVar1 = (**(code **)(*DAT_140c65b70 + 0x48))
                        (DAT_140c65b70,*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar2 + 8)),
                        iVar1 != 0)))))) {
            FUN_140559250(DAT_140c65898 + 0x70b0,lVar2);
            FUN_1400b7090(local_e8,0x501ee);
            local_e8[0] = &PTR_FUN_140b69230;
            local_18 = (undefined2 *)0x0;
            local_28 = ZEXT816(0);
            puVar3 = (undefined2 *)FUN_14018b280(0x10);
            local_28 = CONCAT88(puVar3,puVar3);
            local_18 = puVar3 + 8;
            if (puVar3 != (undefined2 *)0x0) {
                *puVar3 = 0;
            }
            lVar4 = FUN_14018b280(0x60);
            if (lVar4 != 0) {
                puVar3 = &DAT_140b7b704;
                if (*(undefined2 **)(lVar2 + 0x10) != (undefined2 *)0x0) {
                    puVar3 = *(undefined2 **)(lVar2 + 0x10);
                }
                uVar5 = FUN_1404ddb40(lVar4,puVar3);
            }
            FUN_1400b7480(local_e8,uVar5);
            lVar4 = FUN_1400b7660(local_e8);
            FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar4 + 8),0,0);
            if (local_28._0_8_ != 0) {
                FUN_14018b900(local_28._0_8_,0);
            }
            FUN_1400b7390(local_e8);
        }
    }
    return;
}



short * FUN_14077e8b0(longlong param_1)

{
    longlong lVar1;
    short *psVar2;

    if (DAT_140c65b70 == 0) {
        return (short *)&DAT_1409f9e5c;
    }
    lVar1 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(param_1 + 0x114),
                          *(undefined8 *)(DAT_140c65898 + 0x6490));
    if ((((lVar1 == 0) || (*(short ***)(lVar1 + 8) == (short **)0x0)) ||
         (psVar2 = **(short ***)(lVar1 + 8), psVar2 == (short *)0x0)) || (*psVar2 == 0)) {
        psVar2 = (short *)&DAT_1409f9e34;
    }
    return psVar2;
}



void FUN_14077e990(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong *plVar2;

    if (((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
           (plVar2 = (longlong *)
                   FUN_1403d90d0(DAT_140c65898,
                                 *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)),
                   plVar2 == (longlong *)0x0)) || (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0))
         || (((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
               (iVar1 = FUN_14047be40(*(longlong *)(DAT_140c65898 + 0x78)), iVar1 != 0)) ||
              ((iVar1 = FUN_14039e1a0(DAT_140c65898), iVar1 != 0 ||
                                                      (iVar1 = FUN_14039e0a0(DAT_140c65898), iVar1 != 0)))))) &&
        (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        if (param_2 == 0) {
            *(undefined4 *)(DAT_140c65898 + 0x6824) = 0;
            return;
        }
        if (param_2 == 1) {
            *(undefined4 *)(DAT_140c65898 + 0x6824) = 1;
        }
    }
    return;
}



void FUN_14077ea40(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined8 local_14;
    undefined4 local_c;

    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        return;
    }
    uVar2 = FUN_1403982a0(DAT_140c65898,1);
    *(undefined4 *)((longlong)param_1 + 0x114) = uVar2;
    lVar3 = FUN_1403acd90(DAT_140c65b70,uVar2,lVar1);
    if (lVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else {
        (**(code **)(*param_1 + 0x38))(param_1);
        local_28 = 0;
        local_14 = 1;
        local_18 = 0;
        local_c = 0;
        local_20 = 0;
        FUN_1403986f0(&local_28,**(undefined4 **)(lVar3 + 0x70),*(undefined8 *)(DAT_140c65898 + 0x78),
                      lVar1,0,0,&local_28,1);
        (**(code **)(*param_1 + 0x88))(param_1,lVar3,&local_28);
        if (local_28 != 0) {
            (**(code **)(*(longlong *)(local_28 + -0x10) + 8))(local_28 + -0x10);
        }
    }
    return;
}



void FUN_14077ee50(longlong param_1)

{
    int iVar1;

    if ((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 2)) {
        *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined (*) [16])(param_1 + 0xe0) = ZEXT816(0);
        *(undefined8 *)(param_1 + 0x94) = 0;
        *(undefined8 *)(param_1 + 0x9c) = 0;
        *(undefined8 *)(param_1 + 0xa4) = 0;
        *(undefined8 *)(param_1 + 0xac) = 0;
        *(undefined8 *)(param_1 + 0xb4) = 0;
        *(undefined8 *)(param_1 + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0x108) = 0;
        iVar1 = FUN_140571350();
        if (iVar1 != 0) {
            return;
        }
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



void FUN_14077ef10(undefined8 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;

    if ((((((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
            (plVar4 = (longlong *)
                    FUN_1403d90d0(DAT_140c65898,
                                  *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)),
                    plVar4 == (longlong *)0x0)) || (iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4), iVar2 == 0))
          || ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
               (iVar2 = FUN_14047be40(*(longlong *)(DAT_140c65898 + 0x78)), iVar2 != 0)))) ||
         ((iVar2 = FUN_14039e1a0(DAT_140c65898), iVar2 != 0 ||
                                                 (iVar2 = FUN_14039e0a0(DAT_140c65898), iVar2 != 0)))) &&
        ((*(longlong *)(DAT_140c65898 + 0x78) != 0 && (param_2 == 0)))) {
        iVar2 = *DAT_140c63750;
        iVar3 = DAT_140c45de0;
        if (iVar2 < DAT_140c45de0) {
            iVar3 = iVar2;
        }
        iVar1 = DAT_140c45de0;
        if (iVar2 < DAT_140c45de0) {
            iVar1 = iVar2;
        }
        FUN_14001a770(&PTR_PTR_LAB_140c45dd0,iVar1,
                      (*(int *)(&DAT_140c45df0 + (longlong)iVar3 * 4) + 1U) % 3);
        return;
    }
    return;
}



void FUN_14077f070(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    lVar4 = DAT_140c65898;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    lVar1 = *(longlong *)(lVar4 + 0x78);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else {
        iVar2 = FUN_14039e1a0(lVar4);
        lVar3 = FUN_140200220(0x1a5);
        if (lVar3 != 0) {
            uVar5 = *(undefined4 *)(lVar3 + 4 + (longlong)(int)(uint)(iVar2 != 0) * 4);
        }
        lVar4 = FUN_1403acd90(DAT_140c65b70,uVar5,*(undefined8 *)(lVar4 + 0x78));
        if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x1e) = 0;
            *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
            *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
            *(undefined4 *)(param_1 + 0x1b) = 0;
            *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        }
        else {
            (**(code **)(*param_1 + 0x90))(param_1,lVar4,param_1 + 2);
            local_38 = 0;
            local_24 = 1;
            local_28 = 0;
            local_1c = 0;
            local_30 = 0;
            FUN_1403986f0(&local_38,**(undefined4 **)(lVar4 + 0x70),lVar1,lVar1,0,0,&local_38,1);
            (**(code **)(*param_1 + 0x88))(param_1,lVar4,&local_38);
            if (local_38 != 0) {
                (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
            }
        }
    }
    return;
}



void FUN_14077f260(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    lVar4 = DAT_140c65898;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    lVar1 = *(longlong *)(lVar4 + 0x78);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else {
        iVar2 = FUN_14039e1a0(lVar4);
        lVar3 = FUN_140200220(0x1a6);
        if (lVar3 != 0) {
            uVar5 = *(undefined4 *)(lVar3 + 4 + (longlong)(int)(uint)(iVar2 != 0) * 4);
        }
        lVar4 = FUN_1403acd90(DAT_140c65b70,uVar5,*(undefined8 *)(lVar4 + 0x78));
        if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x1e) = 0;
            *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
            *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
            *(undefined4 *)(param_1 + 0x1b) = 0;
            *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        }
        else {
            (**(code **)(*param_1 + 0x90))(param_1,lVar4,param_1 + 2);
            local_38 = 0;
            local_24 = 1;
            local_28 = 0;
            local_1c = 0;
            local_30 = 0;
            FUN_1403986f0(&local_38,**(undefined4 **)(lVar4 + 0x70),lVar1,lVar1,0,0,&local_38,1);
            (**(code **)(*param_1 + 0x88))(param_1,lVar4,&local_38);
            if (local_38 != 0) {
                (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
            }
        }
    }
    return;
}



void FUN_14077f450(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    lVar4 = DAT_140c65898;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    lVar1 = *(longlong *)(lVar4 + 0x78);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else {
        iVar2 = FUN_14039e1a0(lVar4);
        lVar3 = FUN_140200220(0x1a3);
        if (lVar3 != 0) {
            uVar5 = *(undefined4 *)(lVar3 + 4 + (longlong)(int)(uint)(iVar2 != 0) * 4);
        }
        lVar4 = FUN_1403acd90(DAT_140c65b70,uVar5,*(undefined8 *)(lVar4 + 0x78));
        if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x1e) = 0;
            *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
            *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
            *(undefined4 *)(param_1 + 0x1b) = 0;
            *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        }
        else {
            (**(code **)(*param_1 + 0x90))(param_1,lVar4,param_1 + 2);
            local_38 = 0;
            local_24 = 1;
            local_28 = 0;
            local_1c = 0;
            local_30 = 0;
            FUN_1403986f0(&local_38,**(undefined4 **)(lVar4 + 0x70),lVar1,lVar1,0,0,&local_38,1);
            (**(code **)(*param_1 + 0x88))(param_1,lVar4,&local_38);
            if (local_38 != 0) {
                (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
            }
        }
    }
    return;
}



void FUN_14077f640(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    lVar4 = DAT_140c65898;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    param_1[0x20] = 0;
    *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
    lVar1 = *(longlong *)(lVar4 + 0x78);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
        *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x1b) = 0;
        *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
    }
    else {
        iVar2 = FUN_14039e1a0(lVar4);
        lVar3 = FUN_140200220(0x1a4);
        if (lVar3 != 0) {
            uVar5 = *(undefined4 *)(lVar3 + 4 + (longlong)(int)(uint)(iVar2 != 0) * 4);
        }
        lVar4 = FUN_1403acd90(DAT_140c65b70,uVar5,*(undefined8 *)(lVar4 + 0x78));
        if (lVar4 == 0) {
            *(undefined4 *)(param_1 + 0x1e) = 0;
            *(undefined4 *)(param_1 + 0x1a) = 0x3f4ccccd;
            *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
            *(undefined4 *)(param_1 + 0x1b) = 0;
            *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
        }
        else {
            (**(code **)(*param_1 + 0x90))(param_1,lVar4,param_1 + 2);
            local_38 = 0;
            local_24 = 1;
            local_28 = 0;
            local_1c = 0;
            local_30 = 0;
            FUN_1403986f0(&local_38,**(undefined4 **)(lVar4 + 0x70),lVar1,lVar1,0,0,&local_38,1);
            (**(code **)(*param_1 + 0x88))(param_1,lVar4,&local_38);
            if (local_38 != 0) {
                (**(code **)(*(longlong *)(local_38 + -0x10) + 8))(local_38 + -0x10);
            }
        }
    }
    return;
}



void FUN_14077f830(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        return;
    }
    lVar1 = FUN_1401ed460(*(undefined4 *)(DAT_140c65898 + 0x1694));
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        return;
    }
    if (*(int *)(param_1 + 0x114) == 0) {
        lVar1 = FUN_140200220(0x309);
        if (lVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(undefined4 *)(lVar1 + 4);
        }
        FUN_1405c7960(param_1,uVar2);
    }
    FUN_1405c8ec0(param_1);
    return;
}



void FUN_14077f8d0(longlong param_1)

{
    ulonglong uVar1;

    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (*(longlong *)(DAT_140c65898 + 0x7508) != 0)) {
        if (*(int *)(param_1 + 0x114) == 0) {
            uVar1 = FUN_140200220(0x30a);
            if (uVar1 != 0) {
                uVar1 = (ulonglong)*(uint *)(uVar1 + 4);
            }
            FUN_1405c7960(param_1,uVar1 & 0xffffffff);
        }
        FUN_1405c8ec0(param_1);
        return;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



void FUN_14077f940(void)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar1 = uVar2;
    uVar3 = uVar2;
    if (DAT_140c7de20 != 0) {
        do {
            uVar3 = *(ulonglong *)(DAT_140c7de18 + uVar1 * 8);
            if (*(int *)(uVar3 + 0x10) == 3) break;
            uVar1 = uVar1 + 1;
            uVar3 = uVar2;
        } while (uVar1 < DAT_140c7de20);
    }
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (uVar3 != 0)) && (*(int *)(uVar3 + 0x230) == 0)
            ) {
        FUN_1405c9b90();
        return;
    }
    return;
}



void FUN_14077f9b0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;

    if (*(int *)(param_1 + 0x114) == 0) {
        lVar1 = FUN_140200220();
        if (lVar1 == 0) {
            iVar3 = 0;
        }
        else {
            iVar3 = *(int *)(lVar1 + 4);
        }
        if ((iVar3 != 0) &&
            ((((*(longlong *)(DAT_140c65898 + 0x78) != 0 && (DAT_140c65898 != 0)) &&
               (lVar1 = FUN_1405a5b90(DAT_140c65898), lVar1 != 0)) ||
              (lVar1 = FUN_1407a0fd0(), lVar1 != 0)))) {
            FUN_1405c7620(param_1,lVar1);
        }
    }
    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) goto LAB_14077fa54;
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    lVar1 = 0;
    LAB_14077fa54:
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (lVar1 != 0)) && (*(int *)(lVar1 + 0x230) == 0)
            ) {
        FUN_1405c8ec0(param_1);
        return;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



void FUN_14077faa0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    if (*(int *)(param_1 + 0x114) != 0) goto LAB_14077fb0c;
    lVar2 = FUN_140200220(0x321);
    if (lVar2 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(int *)(lVar2 + 4);
    }
    if (iVar4 == 0) goto LAB_14077fb0c;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_14077faf0:
        lVar2 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar2 == 0) goto LAB_14077fb0c;
    }
    else {
        lVar2 = FUN_1405a5b90(DAT_140c65898);
        if (lVar2 == 0) goto LAB_14077faf0;
    }
    FUN_1405c7620(param_1,lVar2);
    LAB_14077fb0c:
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    uVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar3 = FUN_14024acc0(uVar1);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (*(uint *)(lVar3 + 0x14) < 8)) &&
        ((0xa4U >> (*(uint *)(lVar3 + 0x14) & 0x1f) & 1) != 0)) {
        FUN_1405c8ec0(param_1);
        return;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



void FUN_14077fc00(longlong param_1)

{
    longlong lVar1;

    if ((*(int *)(DAT_140c65898 + 0x7f6c) == *(int *)(param_1 + 0x114)) ||
        (*(int *)(DAT_140c65898 + 0x7f6c) == 0)) goto LAB_14077fc54;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_14077fc38:
        lVar1 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar1 == 0) goto LAB_14077fc54;
    }
    else {
        lVar1 = FUN_1405a5b90();
        if (lVar1 == 0) goto LAB_14077fc38;
    }
    FUN_1405c7620(param_1,lVar1);
    LAB_14077fc54:
    FUN_1405c8ec0(param_1);
    return;
}



void FUN_14077fc70(longlong param_1,undefined4 param_2)

{
    longlong lVar1;

    if ((*(int *)(DAT_140c65898 + 0x7f6c) == *(int *)(param_1 + 0x114)) ||
        (*(int *)(DAT_140c65898 + 0x7f6c) == 0)) goto LAB_14077fcca;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_14077fcae:
        lVar1 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar1 == 0) goto LAB_14077fcca;
    }
    else {
        lVar1 = FUN_1405a5b90();
        if (lVar1 == 0) goto LAB_14077fcae;
    }
    FUN_1405c7620(param_1,lVar1);
    LAB_14077fcca:
    FUN_1405c9b90(param_1,param_2);
    return;
}



void FUN_14077fce0(longlong param_1)

{
    if (*(int *)(DAT_140c65898 + 0x7f70) != *(int *)(param_1 + 0x140)) {
        FUN_1405c7ad0(param_1,*(int *)(DAT_140c65898 + 0x7f70),0);
    }
    FUN_1405c8ec0(param_1);
    return;
}



void FUN_14077fd20(longlong param_1,undefined4 param_2)

{
    if (*(int *)(DAT_140c65898 + 0x7f70) != *(int *)(param_1 + 0x140)) {
        FUN_1405c7ad0(param_1,*(int *)(DAT_140c65898 + 0x7f70),0);
    }
    FUN_1405c9b90(param_1,param_2);
    return;
}



void FUN_14077fdd0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        return;
    }
    if (*(int *)(param_1 + 0x114) == 0) {
        lVar1 = FUN_140200220(0x457);
        if (lVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(undefined4 *)(lVar1 + 4);
        }
        FUN_1405c7960(param_1,uVar2);
    }
    FUN_1405c8ec0(param_1);
    return;
}



void FUN_14077fe40(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    *(undefined4 *)(param_1 + 0x220) = 0;
    uVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar2 = FUN_14024acc0(uVar1);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x14) < 8)) &&
        ((0xa4U >> (*(uint *)(lVar2 + 0x14) & 0x1f) & 1) != 0)) {
        lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
        if (lVar2 != 0) {
            FUN_1405c8ec0(param_1);
            *(undefined4 *)(param_1 + 0x220) = 1;
            return;
        }
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    return;
}



void FUN_14077fee0(longlong param_1)

{
    longlong lVar1;

    FUN_14077fe40();
    if (*(int *)(param_1 + 0x220) != 0) {
        lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
        if (lVar1 != 0) {
            if ((*(longlong *)(lVar1 + 0x20) != *(longlong *)(DAT_140c635f0 + 0x16a0)) &&
                ((lVar1 = *(longlong *)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x30), lVar1 == 0 ||
                                                                                      (lVar1 == -8)))) {
                *(undefined4 *)(param_1 + 0xf0) = 0;
                *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
                *(undefined4 *)(param_1 + 0xd4) = 0;
                *(undefined4 *)(param_1 + 0xd8) = 0;
                *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
                *(undefined4 *)(param_1 + 0x220) = 0;
                return;
            }
            *(undefined4 *)(param_1 + 0x220) = 1;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14077ffb0(undefined8 param_1,undefined8 param_2)

{
    short sVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    short *psVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined4 uVar10;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x30) != 5)) || (lVar4 = FUN_1405845f0(), lVar4 == 0)) ||
        (iVar2 = FUN_1405aff90(lVar3), iVar2 != 0)) {
        LAB_1407801c2:
        uVar7 = FUN_1405b2fe0(0x1f);
        FUN_1400ccb50(param_2,uVar7);
    }
    else {
        if ((((ulonglong)(longlong)*(int *)(lVar4 + 0x304) < 10) &&
             (lVar4 = lVar4 + ((longlong)*(int *)(lVar4 + 0x304) * 5 + 3) * 8, lVar4 != 0)) &&
            ((*(uint *)(lVar4 + 8) & 0x80000000) != 0)) {
            if (DAT_140c7dfd8 != 0) goto LAB_1407801c2;
            uVar10 = 0xbc23b;
        }
        else {
            uVar10 = 0xbc23c;
        }
        FUN_1400b6f30(&local_e8);
        puVar9 = (undefined8 *)0x0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8 = &PTR_FUN_140b69230;
        puVar5 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar5 + 8;
        local_28 = CONCAT88(puVar5,puVar5);
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        psVar6 = (short *)FUN_14034bdd0(local_18,0xbc23d);
        if (psVar6 == (short *)0x0) {
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
        }
        else {
            sVar1 = *psVar6;
            puVar8 = puVar9;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = psVar6[(longlong)puVar8];
            }
            FUN_14001c480(local_e0,psVar6,psVar6 + (longlong)puVar8);
        }
        lVar3 = FUN_14018b280(0x60);
        puVar8 = puVar9;
        if (lVar3 != 0) {
            uVar7 = FUN_1405b2fe0(0x1f);
            puVar8 = (undefined8 *)FUN_1404ddb40(lVar3,uVar7);
        }
        FUN_1400b7480(&local_e8,puVar8);
        puVar8 = (undefined8 *)FUN_14018b280(0x60);
        if (puVar8 != (undefined8 *)0x0) {
            FUN_1400b6390(puVar8);
            *puVar8 = &PTR_FUN_140b69170;
            *(undefined4 *)(puVar8 + 0xb) = 1;
            FUN_1400b6d70(puVar8,L"name",uVar10);
            puVar9 = puVar8;
        }
        FUN_1400b7480(&local_e8,puVar9);
        lVar3 = FUN_1400b7660(&local_e8);
        FUN_1400ccb50(param_2,*(undefined8 *)(lVar3 + 8));
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(&local_e8);
    }
    return;
}



void FUN_1407801f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    FUN_14077fe40();
    if ((*(int *)(param_1 + 0x220) != 0) && (lVar2 = FUN_1405b1510(&DAT_140c7dfb0), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x30) == 5) {
            lVar3 = FUN_1405845f0();
            if ((((lVar3 != 0) && (iVar1 = FUN_1405aff90(lVar2), iVar1 == 0)) &&
                 (((ulonglong)(longlong)*(int *)(lVar3 + 0x304) < 10 &&
                   ((lVar3 = lVar3 + ((longlong)*(int *)(lVar3 + 0x304) * 5 + 3) * 8, lVar3 != 0 &&
                                                                                      ((*(uint *)(lVar3 + 8) & 0x80000000) != 0)))))) && (DAT_140c7dfd8 != 0)) {
                LAB_1407802f5:
                *(undefined4 *)(param_1 + 0x220) = 1;
                return;
            }
        }
        else if (*(longlong *)(lVar2 + 0x20) == *(longlong *)(DAT_140c635f0 + 0x16a0)) {
            if ((*(longlong *)(lVar2 + 0xe8) == 0) ||
                (lVar3 = *(longlong *)(lVar2 + 0xe8), *(int *)(lVar2 + 0x110) == 0)) {
                lVar3 = 0;
            }
            if ((((*(uint *)(lVar3 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar3 + 0xb8) != 4)) &&
                (iVar1 = FUN_1405aff90(lVar2), iVar1 == 0)) goto LAB_1407802f5;
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x220) = 0;
    }
    return;
}



void FUN_140780350(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    FUN_14077fe40();
    if ((*(int *)(param_1 + 0x220) != 0) && (lVar1 = FUN_1405b1510(), lVar1 != 0)) {
        if (*(int *)(lVar1 + 0x30) == 5) {
            lVar1 = FUN_1405845f0();
            if ((((lVar1 != 0) && ((ulonglong)(longlong)*(int *)(lVar1 + 0x304) < 10)) &&
                 (lVar1 = lVar1 + ((longlong)*(int *)(lVar1 + 0x304) * 5 + 3) * 8, lVar1 != 0)) &&
                ((*(uint *)(lVar1 + 8) & 0x40000000) != 0)) {
                LAB_1407803be:
                *(undefined4 *)(param_1 + 0x220) = 1;
                return;
            }
        }
        else {
            if ((*(longlong *)(lVar1 + 0xe8) == 0) ||
                (lVar2 = *(longlong *)(lVar1 + 0xe8), *(int *)(lVar1 + 0x110) == 0)) {
                lVar2 = 0;
            }
            if ((((*(uint *)(lVar2 + 0xb8) & 0xfffffffa) == 0) && (*(uint *)(lVar2 + 0xb8) != 4)) &&
                ((lVar1 == DAT_140c7dfe0 || (0 < *(int *)(lVar1 + 0x1f0))))) goto LAB_1407803be;
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x220) = 0;
    }
    return;
}



void FUN_140780500(longlong param_1)

{
    int *piVar1;
    longlong lVar2;

    FUN_14077fe40();
    if (*(int *)(param_1 + 0x220) == 0) {
        return;
    }
    *(undefined4 *)(param_1 + 0x220) = 0;
    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x30) == 5) {
            lVar2 = FUN_1405845f0();
            if ((lVar2 == 0) ||
                (((9 < (ulonglong)(longlong)*(int *)(lVar2 + 0x304) ||
                   (lVar2 = lVar2 + ((longlong)*(int *)(lVar2 + 0x304) * 5 + 3) * 8, lVar2 == 0)) ||
                  ((*(uint *)(lVar2 + 8) & 0x40000000) == 0)))) goto LAB_140780595;
        }
        else if ((lVar2 != DAT_140c7dfe0) && (*(int *)(lVar2 + 0x1f0) < 1)) goto LAB_140780595;
        *(undefined4 *)(param_1 + 0x220) = 1;
    }
    LAB_140780595:
    piVar1 = DAT_140c659f0;
    if (*(int *)(param_1 + 0x220) == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xd0) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
        if (*piVar1 != 0) {
            FUN_1404b59b0(piVar1,0);
        }
        return;
    }
    *(uint *)(param_1 + 0xa0) = (uint)(*DAT_140c659f0 != 0);
    return;
}



void FUN_1407805f0(longlong param_1,int param_2)

{
    bool bVar1;

    if ((param_2 == 0) && (*(int *)(param_1 + 0x220) != 0)) {
        bVar1 = *DAT_140c659f0 == 0;
        if (!bVar1 != bVar1) {
            FUN_1404b59b0(DAT_140c659f0,bVar1);
        }
        if (!bVar1) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingExitEditMode","");
            return;
        }
    }
    return;
}



undefined8 * FUN_140780660(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b78440;
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4],0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3],0);
    }
    lVar1 = param_1[0xf];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int * FUN_1407806e0(undefined8 param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;

    if (DAT_140c7e688 == (int *)0x0) {
        DAT_140c7e688 = (int *)FUN_14018b280(0x4180,0);
        FUN_1407e4830(DAT_140c7e688,0,0x4180);
    }
    uVar2 = 0;
    piVar1 = DAT_140c7e688;
    do {
        if (*piVar1 == 0) {
            FUN_1407e4830(piVar1,0,0x830);
            *piVar1 = param_2;
            *(ulonglong *)(piVar1 + 2) = uVar2;
            piVar1[4] = 0;
            return piVar1;
        }
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 0x20c;
    } while (uVar2 < 8);
    return (int *)0x0;
}



void FUN_140780790(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    int *piVar3;
    int *piVar4;

    lVar1 = FUN_1403d90d0(DAT_140c65898);
    if (lVar1 != 0) {
        if (DAT_140c7e688 == (int *)0x0) {
            DAT_140c7e688 = (int *)FUN_14018b280(0x4180);
            FUN_1407e4830(DAT_140c7e688,0,0x4180);
        }
        uVar2 = 0;
        piVar4 = DAT_140c7e688;
        do {
            if (*piVar4 == param_2) {
                piVar3 = DAT_140c7e688 + uVar2 * 0x20c;
                if (piVar3 != (int *)0x0) goto LAB_14078081e;
                break;
            }
            uVar2 = uVar2 + 1;
            piVar4 = piVar4 + 0x20c;
        } while (uVar2 < 8);
        piVar3 = (int *)FUN_1407806e0(piVar4,param_2);
        if (piVar3 != (int *)0x0) {
            LAB_14078081e:
            piVar3[4] = param_3;
        }
    }
    return;
}



void FUN_140780830(undefined8 param_1,int param_2,int *param_3,int *param_4,int param_5)

{
    float fVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    int *piVar7;
    int *piVar8;
    ulonglong uVar9;

    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        if (DAT_140c7e688 == (int *)0x0) {
            DAT_140c7e688 = (int *)FUN_14018b280(0x4180,0);
            FUN_1407e4830(DAT_140c7e688,0,0x4180);
        }
        uVar9 = 0;
        piVar7 = DAT_140c7e688;
        do {
            if (*piVar7 == param_2) {
                piVar7 = DAT_140c7e688 + uVar9 * 0x20c;
                if (piVar7 != (int *)0x0) goto LAB_1407808d9;
                break;
            }
            uVar9 = uVar9 + 1;
            piVar7 = piVar7 + 0x20c;
        } while (uVar9 < 8);
        piVar7 = (int *)FUN_1407806e0(DAT_140c7e688,param_2);
        if (piVar7 != (int *)0x0) {
            LAB_1407808d9:
            iVar2 = *(int *)(lVar6 + 0x11e4);
            iVar3 = *(int *)(lVar6 + 0x11e8);
            iVar4 = *(int *)(lVar6 + 0x11ec);
            piVar8 = piVar7 + (*(longlong *)(piVar7 + 0x208) + 0x21) * 8;
            *piVar8 = *(int *)(lVar6 + 0x11e0);
            piVar8[1] = iVar2;
            piVar8[2] = iVar3;
            piVar8[3] = iVar4;
            piVar8[4] = *(int *)(lVar6 + 0x1140);
            piVar8[5] = *(int *)(lVar6 + 0x1144);
            piVar8[6] = *(int *)(lVar6 + 0x1148);
            uVar5 = FUN_14018cdf0();
            piVar8[7] = (int)((float)(ulonglong)uVar5 * 0.001);
            iVar2 = param_3[1];
            iVar3 = param_3[2];
            iVar4 = param_3[3];
            piVar8 = piVar7 + (*(longlong *)(piVar7 + 0x208) + 1) * 8;
            *piVar8 = *param_3;
            piVar8[1] = iVar2;
            piVar8[2] = iVar3;
            piVar8[3] = iVar4;
            piVar8[4] = *param_4;
            piVar8[5] = param_4[1];
            piVar8[6] = param_4[2];
            piVar8[7] = param_5;
            uVar5 = (int)*(undefined8 *)(piVar7 + 0x208) + 1U & 0x1f;
            uVar9 = (ulonglong)uVar5;
            *(ulonglong *)(piVar7 + 0x208) = uVar9;
            if (piVar7[4] == 0) {
                fVar1 = (float)piVar7[uVar9 * 8 + 0x10f];
                while (fVar1 == 0.0) {
                    uVar9 = (ulonglong)((int)uVar9 + 1U & 0x1f);
                    fVar1 = (float)piVar7[uVar9 * 8 + 0x10f];
                }
                if (uVar9 != (uVar5 - 1 & 0x1f)) {
                    FUN_140780d90(0,piVar7);
                }
            }
            else {
                if (piVar7[4] != 1) {
                    DebugBreak();
                }
                FUN_140780d00();
            }
        }
    }
    return;
}



void FUN_140780a00(undefined8 param_1,int param_2)

{
    ulonglong uVar1;
    int *piVar2;

    if (DAT_140c7e688 == (int *)0x0) {
        DAT_140c7e688 = (int *)FUN_14018b280(0x4180);
        FUN_1407e4830(DAT_140c7e688,0,0x4180);
    }
    uVar1 = 0;
    piVar2 = DAT_140c7e688;
    do {
        if (*piVar2 == param_2) {
            if (DAT_140c7e688 + uVar1 * 0x20c != (int *)0x0) {
                DAT_140c7e688[uVar1 * 0x20c] = 0;
            }
            return;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 0x20c;
    } while (uVar1 < 8);
    return;
}



void FUN_140780a80(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                   undefined (*param_5) [16],undefined (*param_6) [16])

{
    float fVar1;
    undefined auVar2 [16];
    float in_XMM3_Da;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar7 = (in_XMM3_Da - param_2[7]) / (param_3[7] - param_2[7]);
    if (param_5 != (undefined (*) [16])0x0) {
        fVar1 = 1.0 - fVar7;
        *param_5 = CONCAT412(param_3[3] * fVar7 + fVar1 * param_2[3],
                             CONCAT48(param_3[2] * fVar7 + fVar1 * param_2[2],
                                      CONCAT44(param_3[1] * fVar7 + fVar1 * param_2[1],
                                               *param_3 * fVar7 + fVar1 * *param_2)));
    }
    if (param_6 != (undefined (*) [16])0x0) {
        fVar1 = 1.0 - fVar7;
        fVar3 = param_3[4] * fVar7 + fVar1 * param_2[4];
        fVar4 = param_3[5] * fVar7 + fVar1 * param_2[5];
        fVar5 = param_3[6] * fVar7 + fVar1 * param_2[6];
        fVar6 = fVar7 * 0.0 + fVar1 * 0.0;
        *param_6 = CONCAT412(fVar6,CONCAT48(fVar5,CONCAT44(fVar4,fVar3)));
        fVar7 = fVar4 * fVar4;
        fVar1 = fVar3 * fVar3 + fVar7 + 0.0;
        auVar2 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                         CONCAT412(fVar6 * fVar6,CONCAT48(fVar5 * fVar5,CONCAT44(fVar7,fVar1))));
        fVar7 = SUB164(auVar2,0);
        fVar7 = (3.0 - fVar1 * fVar7 * fVar7) * 0.5 * fVar7;
        if (fVar7 <= 0.0) {
            fVar7 = 0.0;
        }
        *param_6 = CONCAT412(fVar7 * fVar6,CONCAT48(fVar7 * fVar5,CONCAT44(fVar7 * fVar4,fVar7 * fVar3))
        );
    }
    return;
}



void FUN_140780bc0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    int iVar3;
    float *pfVar4;
    undefined auVar5 [16];
    float fVar6;
    float fVar7;
    float fVar8;

    fVar7 = 0.5;
    uVar2 = (ulonglong)((int)param_3 + 1U & 0x1f);
    fVar8 = *(float *)(param_4 * 0x20 + 0x1c + param_2);
    fVar6 = *(float *)(param_3 * 0x20 + 0x1c + param_2) + 0.5;
    auVar5 = ZEXT416((uint)(fVar6 * 2.0)) & (undefined  [16])0xffffffffffffffff;
    iVar3 = (int)SUB164(auVar5,0);
    if ((iVar3 != -0x80000000) && ((float)iVar3 != SUB164(auVar5,0))) {
        uVar1 = movmskps((int)(param_3 * 0x20),ZEXT816(SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20));
        auVar5 = ZEXT416((uint)(float)(iVar3 + (uVar1 & 1 ^ 1)));
    }
    fVar6 = fVar6 + (SUB164(auVar5,0) * 0.5 - fVar6);
    if (fVar6 < fVar8) {
        pfVar4 = (float *)(param_2 + 0x1c + uVar2 * 0x20);
        do {
            if (*pfVar4 <= fVar6 && fVar6 != *pfVar4) {
                do {
                    uVar2 = (ulonglong)((int)uVar2 + 1U & 0x1f);
                    pfVar4 = (float *)(param_2 + 0x1c + uVar2 * 0x20);
                } while (*pfVar4 <= fVar6 && fVar6 != *pfVar4);
            }
            FUN_140780a80();
            fVar6 = fVar6 + fVar7;
        } while (fVar6 < fVar8);
    }
    return;
}



void FUN_140780d00(undefined8 param_1,longlong param_2)

{
    float fVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;

    uVar2 = *(ulonglong *)(param_2 + 0x820);
    fVar1 = *(float *)(uVar2 * 0x20 + 0x43c + param_2);
    uVar3 = uVar2;
    while (fVar1 == 0.0) {
        uVar3 = (ulonglong)((int)uVar3 + 1U & 0x1f);
        fVar1 = *(float *)(uVar3 * 0x20 + 0x43c + param_2);
    }
    uVar4 = (int)uVar2 - 1U & 0x1f;
    if (uVar3 != uVar4) {
        FUN_140780bc0(param_1,param_2 + 0x20,uVar3,uVar4);
        FUN_140780bc0(param_1,param_2 + 0x420,uVar3,uVar4);
    }
    return;
}



void FUN_140780d90(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
    float fVar1;
    uint uVar2;
    int iVar4;
    float *pfVar5;
    ulonglong uVar6;
    float *pfVar7;
    float fVar8;
    undefined auVar9 [16];
    float fVar10;
    float fVar11;
    float fVar12;
    ulonglong uVar3;

    fVar11 = 0.5;
    uVar2 = (int)param_3 + 1U & 0x1f;
    uVar3 = (ulonglong)uVar2;
    fVar12 = *(float *)(param_4 * 0x20 + 0x3c + param_2);
    fVar8 = *(float *)(param_3 * 0x20 + 0x3c + param_2);
    fVar1 = *(float *)(param_3 * 0x20 + 0x43c + param_2);
    fVar10 = fVar8 + 0.5;
    fVar8 = (fVar8 - fVar1) + *(float *)(param_4 * 0x20 + 0x43c + param_2);
    auVar9 = ZEXT416((uint)(fVar10 * 2.0)) & (undefined  [16])0xffffffffffffffff;
    uVar6 = (ulonglong)uVar2;
    if (fVar8 <= fVar12) {
        fVar12 = fVar8;
    }
    iVar4 = (int)SUB164(auVar9,0);
    if ((iVar4 != -0x80000000) && ((float)iVar4 != SUB164(auVar9,0))) {
        uVar2 = movmskps(((int)param_3 + 0x21) * 0x20,
                         ZEXT816(SUB168(auVar9,0) | SUB168(auVar9,0) << 0x20));
        auVar9 = ZEXT416((uint)(float)(iVar4 + (uVar2 & 1 ^ 1)));
    }
    fVar8 = SUB164(auVar9,0) * 0.5 - fVar10;
    fVar10 = fVar10 + fVar8;
    fVar8 = fVar1 + 0.5 + fVar8;
    if (fVar10 < fVar12) {
        pfVar7 = (float *)(param_2 + 0x3c + uVar3 * 0x20);
        pfVar5 = (float *)(param_2 + 0x43c + uVar3 * 0x20);
        do {
            if (*pfVar7 <= fVar10 && fVar10 != *pfVar7) {
                do {
                    uVar3 = (ulonglong)((int)uVar3 + 1U & 0x1f);
                    pfVar7 = (float *)(param_2 + 0x3c + uVar3 * 0x20);
                } while (*pfVar7 <= fVar10 && fVar10 != *pfVar7);
            }
            if (*pfVar5 <= fVar8 && fVar8 != *pfVar5) {
                do {
                    uVar6 = (ulonglong)((int)uVar6 + 1U & 0x1f);
                    pfVar5 = (float *)(param_2 + 0x43c + uVar6 * 0x20);
                } while (*pfVar5 <= fVar8 && fVar8 != *pfVar5);
            }
            FUN_140780a80();
            FUN_140780a80();
            fVar10 = fVar10 + fVar11;
            fVar8 = fVar8 + fVar11;
        } while (fVar10 < fVar12);
    }
    return;
}



void FUN_140780fb0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined4 uVar1;

    if (*(int *)(param_2 + 0xd54) == 0) {
        FUN_1407870e0(param_1 + 0x38,*(undefined4 *)(param_1 + 0x58));
    }
    uVar1 = FUN_1407870e0(param_1 + 0x38,param_3);
    *(undefined4 *)(param_1 + 0x58) = param_3;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *param_4 = uVar1;
    return;
}



void FUN_140781010(longlong param_1,longlong param_2,undefined8 param_3,undefined (*param_4) [16],
                   undefined (*param_5) [16],undefined (*param_6) [16])

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined (*pauVar3) [12];
    undefined auVar4 [16];
    float fVar5;
    float fVar6;
    uint local_res8 [8];
    float local_28;
    float local_24;
    float local_20;
    undefined local_18 [16];

    pauVar3 = (undefined (*) [12])
            FUN_140783690(param_1 + 0x38,local_18,param_3,*(undefined4 *)(param_2 + 0xd54),
                          local_res8,&local_28);
    *param_4 = ZEXT1216(*pauVar3);
    if (local_res8[0] == 0) {
        *param_5 = ZEXT816(0) & (undefined  [16])0xffffffff;
    }
    else {
        fVar5 = 1000.0 / (float)(ulonglong)local_res8[0];
        *param_5 = CONCAT412(fVar5 * 0.0,
                             CONCAT48(fVar5 * local_20,CONCAT44(fVar5 * local_24,fVar5 * local_28)));
    }
    fVar5 = local_24 * local_24;
    uVar1 = SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff) << 0x20
                                   ) >> 0x40,0),fVar5),0);
    uVar2 = uVar1 & 0xffffffff;
    fVar6 = local_28 * local_28 + (float)uVar2 + 0.0;
    auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,uVar1 << 0x20 | uVar2)),
                     ZEXT1216(CONCAT48(local_20 * local_20,CONCAT44(fVar5,fVar6))));
    fVar5 = SUB164(auVar4,0);
    fVar5 = (3.0 - fVar6 * fVar5 * fVar5) * 0.5 * fVar5;
    if (fVar5 <= 0.0) {
        fVar5 = 0.0;
    }
    *param_6 = CONCAT412(fVar5 * 0.0,
                         CONCAT48(fVar5 * local_20,CONCAT44(fVar5 * local_24,fVar5 * local_28)));
    return;
}



int FUN_140781140(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;

    uVar2 = param_3[8];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(longlong *)(param_1 + 0x10) = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar5;
        plVar1 = (longlong *)(param_1 + 0x20);
        *plVar1 = *plVar5;
        *plVar5 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_140783910(param_1 + 0x38,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4),param_3[6],0,param_3[7],param_4);
    iVar4 = 0;
    if (iVar3 < 0) {
        iVar4 = iVar3;
    }
    return iVar4;
}



void FUN_1407811d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined (*param_4) [16],
                   undefined (*param_5) [16],undefined (*param_6) [16])

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined (*pauVar3) [12];
    undefined auVar4 [16];
    float fVar5;
    float fVar6;
    uint local_res8 [8];
    float local_28;
    float local_24;
    float local_20;
    undefined local_18 [16];

    pauVar3 = (undefined (*) [12])FUN_140783e10(param_1 + 0x38,local_18,param_3,local_res8,&local_28);
    *param_4 = ZEXT1216(*pauVar3);
    if (local_res8[0] == 0) {
        *param_5 = ZEXT816(0) & (undefined  [16])0xffffffff;
    }
    else {
        fVar5 = 1000.0 / (float)(ulonglong)local_res8[0];
        *param_5 = CONCAT412(fVar5 * 0.0,
                             CONCAT48(fVar5 * local_20,CONCAT44(fVar5 * local_24,fVar5 * local_28)));
    }
    fVar5 = local_24 * local_24;
    uVar1 = SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff) << 0x20
                                   ) >> 0x40,0),fVar5),0);
    uVar2 = uVar1 & 0xffffffff;
    fVar6 = local_28 * local_28 + (float)uVar2 + 0.0;
    auVar4 = rsqrtss(CONCAT412(fVar5,CONCAT48(fVar5,uVar1 << 0x20 | uVar2)),
                     ZEXT1216(CONCAT48(local_20 * local_20,CONCAT44(fVar5,fVar6))));
    fVar5 = SUB164(auVar4,0);
    fVar5 = (3.0 - fVar6 * fVar5 * fVar5) * 0.5 * fVar5;
    if (fVar5 <= 0.0) {
        fVar5 = 0.0;
    }
    *param_6 = CONCAT412(fVar5 * 0.0,
                         CONCAT48(fVar5 * local_20,CONCAT44(fVar5 * local_24,fVar5 * local_28)));
    return;
}



undefined8 FUN_140781300(longlong param_1,undefined4 param_2,undefined4 *param_3,longlong param_4)

{
    undefined4 *puVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong *plVar4;
    float fVar5;
    undefined4 uVar6;

    puVar1 = param_3 + 4;
    fVar5 = (float)FUN_1401c9770(puVar1);
    if (fVar5 < 1e-05) {
        return 0x80004005;
    }
    uVar6 = param_3[8];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    if ((param_4 != 0) && (plVar4 = (longlong *)(param_4 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar4;
        plVar2 = (longlong *)(param_1 + 0x20);
        *plVar2 = *plVar4;
        *plVar4 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    uVar3 = FUN_140783910(param_1 + 0x38,*param_3,0,*(undefined8 *)(param_3 + 2),param_3[5],param_3[6]
            ,param_3[7],0);
    if (-1 < (int)uVar3) {
        uVar6 = FUN_1401c9770(puVar1);
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0x70) = uVar6;
    }
    return uVar3;
}



void FUN_1407813d0(undefined8 param_1,float param_2,longlong param_3,longlong param_4,int param_5_00
        ,undefined (*param_6_00) [16],undefined (*param_5) [16],undefined (*param_6) [16])

{
    longlong lVar1;
    undefined8 uVar2;
    int *piVar3;
    ulonglong uVar4;
    undefined (*pauVar5) [12];
    uint uVar6;
    ulonglong uVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    uint local_res8 [2];
    float local_68;
    float local_64;
    float local_60;
    undefined local_58 [80];

    fVar15 = 0.5;
    fVar14 = 1000.0;
    if (*(longlong *)(param_3 + 0x40) == 0) {
        fVar13 = 0.0;
        fVar12 = 1000.0 / *(float *)(param_3 + 0x70);
        auVar8 = ZEXT816(4) * ZEXT416(*(uint *)(param_3 + 0x38));
        uVar2 = SUB168(auVar8,0);
        if (SUB168(auVar8 >> 0x40,0) != 0) {
            uVar2 = 0xffffffffffffffff;
        }
        piVar3 = (int *)FUN_14018b280(uVar2,0);
        uVar7 = 1;
        *(int **)(param_3 + 0x40) = piVar3;
        *(int **)(param_3 + 0x48) = piVar3;
        *piVar3 = param_5_00;
        if (1 < *(uint *)(param_3 + 0x38)) {
            do {
                lVar1 = *(longlong *)(param_3 + 0x50);
                uVar4 = (ulonglong)((int)uVar7 - 1);
                uVar6 = (int)uVar7 + 1;
                fVar10 = *(float *)(lVar1 + uVar7 * 0xc) - *(float *)(lVar1 + uVar4 * 0xc);
                fVar11 = *(float *)(lVar1 + 4 + uVar7 * 0xc) - *(float *)(lVar1 + 4 + uVar4 * 0xc);
                param_2 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + 0.0);
                fVar13 = fVar13 + param_2;
                *(int *)(*(longlong *)(param_3 + 0x40) + uVar7 * 4) =
                        (int)(longlong)(fVar12 * fVar13 + fVar15) + param_5_00;
                uVar7 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_3 + 0x38));
        }
    }
    pauVar5 = (undefined (*) [12])
            FUN_140783e10(param_3 + 0x38,local_58,param_5_00,local_res8,&local_68);
    *param_6_00 = CONCAT412(param_2,*pauVar5) & (undefined  [16])0xffffffffffffffff;
    fVar12 = DAT_140c4b928;
    if (local_res8[0] == 0) {
        *param_5 = ZEXT816(0);
    }
    else {
        fVar14 = fVar14 / (float)(ulonglong)local_res8[0];
        *(float *)*param_5 = fVar14 * local_68;
        *(float *)(*param_5 + 4) = fVar14 * local_64;
        *(float *)(*param_5 + 8) = fVar14 * local_60;
        *(float *)(*param_5 + 0xc) = fVar14 * 0.0;
        if (((param_4 == 0) || (*(int *)(param_4 + 0x133c) == 0)) ||
            (local_68 * local_68 + local_60 * local_60 <= fVar12)) {
            if (fVar12 < local_68 * local_68 + local_64 * local_64 + local_60 * local_60) {
                fVar14 = local_64 * local_64;
                fVar12 = local_68 * local_68 + fVar14 + 0.0;
                auVar8 = rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,CONCAT44(fVar14,fVar14))),
                                 ZEXT1216(CONCAT48(local_60 * local_60,CONCAT44(fVar14,fVar12))));
                fVar14 = SUB164(auVar8,0);
                fVar14 = (3.0 - fVar12 * fVar14 * fVar14) * fVar15 * fVar14;
                if (fVar14 <= 0.0) {
                    fVar14 = 0.0;
                }
                *param_6 = CONCAT412(fVar14 * 0.0,
                                     CONCAT48(fVar14 * local_60,
                                              CONCAT44(fVar14 * local_64,fVar14 * local_68)));
            }
        }
        else {
            *param_6 = ZEXT1216(CONCAT48(local_60,CONCAT44(local_64,local_68)));
            *(undefined4 *)(*param_6 + 4) = 0;
            fVar14 = *(float *)*param_6;
            fVar12 = *(float *)(*param_6 + 4);
            fVar13 = *(float *)(*param_6 + 8);
            fVar10 = *(float *)(*param_6 + 0xc);
            fVar11 = fVar12 * fVar12;
            uVar7 = SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff) <<
                                                                                                       0x20) >> 0x40,0),fVar11),0);
            uVar4 = uVar7 & 0xffffffff;
            fVar9 = fVar14 * fVar14 + (float)uVar4 + 0.0;
            auVar8 = rsqrtss(CONCAT412(fVar11,CONCAT48(fVar11,uVar7 << 0x20 | uVar4)),
                             CONCAT412(fVar10 * fVar10,CONCAT48(fVar13 * fVar13,CONCAT44(fVar11,fVar9))));
            fVar11 = SUB164(auVar8,0);
            fVar11 = (3.0 - fVar9 * fVar11 * fVar11) * fVar15 * fVar11;
            if (fVar11 <= 0.0) {
                fVar11 = 0.0;
            }
            *param_6 = CONCAT412(fVar11 * fVar10,
                                 CONCAT48(fVar11 * fVar13,CONCAT44(fVar11 * fVar12,fVar11 * fVar14)));
        }
    }
    return;
}



undefined8 * FUN_140781720(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b77d80;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_140713a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8
FUN_140781780(longlong **param_1,undefined4 param_2,undefined4 *param_3,longlong *param_4)

{
    longlong **pplVar1;
    undefined8 uVar2;
    longlong **pplVar3;
    undefined4 uVar4;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    uVar4 = param_3[7];
    *(undefined4 *)(param_1 + 1) = param_2;
    param_1[2] = param_4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    pplVar3 = param_1;
    if ((param_4 != (longlong *)0x0) &&
        (pplVar1 = (longlong **)(param_4 + 0x12), param_1[3] == (longlong *)0x0)) {
        param_1[3] = (longlong *)pplVar1;
        pplVar3 = param_1 + 4;
        *pplVar3 = *pplVar1;
        *pplVar1 = (longlong *)param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[3] = (longlong)pplVar3;
        }
    }
    uVar2 = FUN_140633cb0(pplVar3,*param_3,param_1 + 7);
    if (-1 < (int)uVar2) {
        *(undefined4 *)(param_1 + 8) = *param_3;
        *(undefined4 *)((longlong)param_1 + 0x44) = param_3[1];
        *(undefined4 *)(param_1 + 9) = param_3[2];
        FUN_1401adb90(&local_18,param_3 + 3);
        *(undefined4 *)(param_1 + 10) = local_18;
        *(undefined4 *)((longlong)param_1 + 0x54) = uStack20;
        *(undefined4 *)(param_1 + 0xb) = uStack16;
        *(undefined4 *)((longlong)param_1 + 0x5c) = uStack12;
        *(undefined4 *)(param_1 + 0xc) = param_3[5];
        *(undefined4 *)((longlong)param_1 + 100) = param_3[6];
        if ((*(float *)((longlong)param_1 + 0x44) == -1.0) ||
            (1e-05 < *(float *)((longlong)param_1 + 0x44))) {
            uVar4 = (**(code **)(*param_1[7] + 0x70))();
        }
        else {
            uVar4 = 0;
        }
        *(undefined4 *)(param_1 + 0xd) = uVar4;
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 * FUN_140781940(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b77d68;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_140713a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1407819a0(longlong param_1,undefined4 param_2,uint *param_3,longlong param_4)

{
    ulonglong uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    undefined4 uVar11;
    longlong *local_res8;
    longlong local_res18 [2];
    longlong *plVar12;
    longlong lVar13;
    undefined8 local_98;
    undefined8 uStack144;
    undefined4 local_84;
    undefined4 local_64;

    uVar10 = param_3[0xd];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_4;
    *(uint *)(param_1 + 0xc) = uVar10;
    if ((param_4 != 0) && (plVar12 = (longlong *)(param_4 + 0x90), *(longlong *)(param_1 + 0x18) == 0)
            ) {
        *(longlong **)(param_1 + 0x18) = plVar12;
        plVar6 = (longlong *)(param_1 + 0x20);
        *plVar6 = *plVar12;
        *plVar12 = param_1;
        if (*plVar6 != 0) {
            *(longlong **)(*plVar6 + 0x18) = plVar6;
        }
    }
    if (*param_3 == 0) {
        return -0x7fffbffb;
    }
    uVar8 = 0;
    uStack144 = 0;
    local_98 = 0;
    uVar7 = uVar8;
    uVar9 = uVar8;
    if (*param_3 != 0) {
        do {
            uVar8 = uStack144;
            iVar2 = FUN_140633cb0(uVar9,*(undefined4 *)(*(longlong *)(param_3 + 2) + uVar9 * 4),
                                  &local_res8);
            plVar12 = local_res8;
            if (iVar2 < 0) {
                uVar9 = 0;
                if (uVar8 != 0) {
                    do {
                        plVar12 = *(longlong **)(uVar7 + uVar9 * 8);
                        if (plVar12 != (longlong *)0x0) {
                            (**(code **)(*plVar12 + 8))();
                            *(undefined8 *)(uVar7 + uVar9 * 8) = 0;
                        }
                        uVar9 = (ulonglong)((int)uVar9 + 1);
                    } while (uVar9 < uVar8);
                }
                goto LAB_140781d36;
            }
            uVar3 = (**(code **)(*local_res8 + 0x20))(local_res8);
            if (uVar3 < 2) {
                iVar2 = -0x7fffbffb;
                goto LAB_140781d36;
            }
            uVar3 = uVar8 + 1;
            uVar4 = FUN_14018db00(uVar7,uVar3,8);
            *(longlong **)(uVar8 * 8 + uVar4) = plVar12;
            uVar8 = uVar7;
            uVar1 = local_98;
            if ((uVar7 != uVar4) && (FUN_1407db590(), uVar8 = uVar4, uVar1 = uVar4, uVar7 != 0)) {
                (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))();
            }
            local_98 = uVar1;
            uVar10 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar10;
            uVar7 = uVar8;
            uStack144 = uVar3;
        } while (uVar10 < *param_3);
    }
    uVar7 = uStack144;
    uVar11 = FUN_1401c9770(param_3 + 4);
    local_res8 = (longlong *)0x0;
    local_res18[0] = 0;
    *(undefined4 *)(param_1 + 0x40) = uVar11;
    *(uint *)(param_1 + 100) = param_3[0xc];
    *(uint *)(param_1 + 0x48) = param_3[6];
    *(uint *)(param_1 + 0x4c) = param_3[7];
    plVar12 = local_res18;
    FUN_1407a6e40(&local_98);
    *(uint *)(param_1 + 0x74) = (uint)(local_res8 != (longlong *)0x0);
    *(uint *)(param_1 + 0x78) = (uint)(local_res18[0] != 0);
    if (local_res8 != (longlong *)0x0) {
        local_64 = *(undefined4 *)(param_1 + 0x48);
    }
    if (local_res18[0] != 0) {
        local_84 = *(undefined4 *)(param_1 + 0x4c);
    }
    uVar9 = (ulonglong)plVar12 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x40);
    plVar12 = local_res8;
    lVar13 = local_res18[0];
    iVar2 = FUN_1407a5ba0(param_1 + 0x38,&local_98);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    *(longlong *)(param_1 + 0x90) = lVar5 + -1;
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
    *(longlong *)(param_1 + 0x98) = lVar5 + -1;
    if (*(int *)(param_1 + 0x74) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                (*(longlong **)(param_1 + 0x38),0x65,param_1 + 0x88,0,plVar12,lVar13,uVar9);
    }
    if (*(int *)(param_1 + 0x78) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                (*(longlong **)(param_1 + 0x38),0x66,param_1 + 0x90);
    }
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (uVar7 != 0) {
        uVar9 = 0;
        do {
            plVar12 = *(longlong **)(uVar8 + uVar9 * 8);
            if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 8))();
                *(undefined8 *)(uVar8 + uVar9 * 8) = 0;
            }
            uVar10 = uVar10 + 1;
            uVar9 = (ulonglong)uVar10;
        } while (uVar9 < uVar7);
    }
    uVar7 = uVar8;
    if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
        *(uint *)(param_1 + 0x44) = param_3[5];
        FUN_1401adb90(&local_98,param_3 + 8);
        *(undefined4 *)(param_1 + 0x50) = (undefined4)local_98;
        *(undefined4 *)(param_1 + 0x54) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack144;
        *(undefined4 *)(param_1 + 0x5c) = uStack144._4_4_;
        *(uint *)(param_1 + 0x60) = param_3[10];
        *(uint *)(param_1 + 0x68) = param_3[0xb];
        if ((*(float *)(param_1 + 0x40) == -1.0) || (1e-05 < *(float *)(param_1 + 0x40))) {
            uVar11 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
        }
        else {
            uVar11 = 0;
        }
        *(undefined4 *)(param_1 + 0x6c) = uVar11;
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
    }
    LAB_140781d36:
    if (uVar7 != 0) {
        (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))(uVar7 - 0x10);
    }
    return iVar2;
}



void FUN_140781d90(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 *param_6)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    double dVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float fVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    float local_res10 [2];
    ulonglong local_48 [6];

    fVar8 = 0.0;
    if (((*(longlong *)(param_2 + 0x16e8) == 0) && (*(float *)(param_1 + 0x44) == 0.0)) &&
        ((*(byte *)(param_1 + 100) & 1) != 0)) {
        *(int *)(param_1 + 0x70) = param_3;
        return;
    }
    lVar3 = **(longlong **)(param_1 + 0x38);
    dVar4 = (double)(ulonglong)(uint)((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x70)) + param_3)
            * 0.001 * (double)*(float *)(param_1 + 0x6c) + (double)*(float *)(param_1 + 0x44);
    uVar9 = SUB84(dVar4,0);
    uVar10 = (undefined4)((ulonglong)dVar4 >> 0x20);
    (**(code **)(lVar3 + 0x90))
            (*(undefined4 *)(param_1 + 0x40),dVar4,*(longlong **)(param_1 + 0x38),lVar3,param_4,
             param_5,0,0,param_6,local_48,local_res10,0,*(undefined4 *)(param_1 + 0x60),
             param_1 + 0x50,*(undefined4 *)(param_1 + 0x40));
    iVar1 = *(int *)(param_1 + 0xa0);
    iVar2 = *(int *)(param_1 + 0xa4);
    uVar5 = 1;
    uVar7 = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
        if (local_res10[0] <= fVar8) {
            if (local_res10[0] < fVar8) {
                if ((local_48[0] < *(ulonglong *)(param_1 + 0x80)) ||
                    (uVar6 = uVar5, *(ulonglong *)(param_1 + 0x88) <= local_48[0])) {
                    uVar6 = uVar7;
                }
                *(undefined4 *)(param_1 + 0xa4) = uVar6;
            }
        }
        else {
            if ((local_48[0] < *(ulonglong *)(param_1 + 0x80)) ||
                (uVar6 = uVar5, *(ulonglong *)(param_1 + 0x88) <= local_48[0])) {
                uVar6 = uVar7;
            }
            *(undefined4 *)(param_1 + 0xa0) = uVar6;
        }
    }
    if (*(int *)(param_1 + 0x78) != 0) {
        if (fVar8 <= local_res10[0]) {
            if (fVar8 < local_res10[0]) {
                if ((local_48[0] < *(ulonglong *)(param_1 + 0x90)) ||
                    (*(ulonglong *)(param_1 + 0x98) <= local_48[0])) {
                    uVar5 = uVar7;
                }
                *(undefined4 *)(param_1 + 0xa4) = uVar5;
            }
        }
        else {
            if ((local_48[0] < *(ulonglong *)(param_1 + 0x90)) ||
                (*(ulonglong *)(param_1 + 0x98) <= local_48[0])) {
                uVar5 = uVar7;
            }
            *(undefined4 *)(param_1 + 0xa0) = uVar5;
        }
    }
    if ((((*(ulonglong *)(param_1 + 0x88) <= local_48[0]) &&
          (local_48[0] < *(ulonglong *)(param_1 + 0x90))) && (*(longlong *)(param_2 + 0xb8) != 0)) &&
        (*(int *)(*(longlong *)(param_2 + 0xb8) + 4) == 5)) {
        FUN_14045bf30(param_2,4);
    }
    if ((*(int *)(param_1 + 0xa0) != 0) || (*(int *)(param_1 + 0xa4) != 0)) {
        uVar5 = *(undefined4 *)(param_2 + 0x1144);
        uVar7 = *(undefined4 *)(param_2 + 0x1148);
        uVar6 = *(undefined4 *)(param_2 + 0x114c);
        *param_6 = *(undefined4 *)(param_2 + 0x1140);
        param_6[1] = uVar5;
        param_6[2] = uVar7;
        param_6[3] = uVar6;
        param_6[1] = 0;
    }
    if (((*(int *)(param_1 + 0xa0) != iVar1) && (*(longlong *)(param_2 + 0xb8) != 0)) &&
        ((*(int *)(*(longlong *)(param_2 + 0xb8) + 4) == 5 && (*(int *)(param_1 + 0xa0) != 0)))) {
        FUN_14045bf30(param_2,4);
    }
    if ((((*(int *)(param_1 + 0xa4) != iVar2) && (*(longlong *)(param_2 + 0xb8) != 0)) &&
         (*(int *)(*(longlong *)(param_2 + 0xb8) + 4) == 5)) && (*(int *)(param_1 + 0xa4) != 0)) {
        FUN_14045bf30(param_2,3);
    }
    if (((*(uint *)(param_1 + 0x60) < 0xb) &&
         ((0x609U >> (*(uint *)(param_1 + 0x60) & 0x1f) & 1) != 0)) &&
        (1.0 <= (double)CONCAT44(uVar10,uVar9))) {
        if (*(int *)(param_1 + 0xa0) != 0) {
            *(undefined4 *)(param_1 + 0xa0) = 0;
        }
        if (*(int *)(param_1 + 0xa4) != 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0;
        }
        if (*(longlong *)(param_1 + 0x18) != 0) {
            FUN_14079ab20(*(undefined8 *)(param_1 + 0x10),param_1);
        }
    }
    return;
}



undefined8
FUN_1407820a0(longlong param_1,int param_2,undefined (*param_3) [12],longlong param_4,int param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong *plVar3;

    uVar2 = *(undefined4 *)param_3[3];
    *(int *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    if ((param_4 != 0) && (plVar3 = (longlong *)(param_4 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar3;
        plVar1 = (longlong *)(param_1 + 0x20);
        *plVar1 = *plVar3;
        *plVar3 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    *(undefined (*) [16])(param_1 + 0x50) = ZEXT1216(*param_3);
    *(undefined (*) [16])(param_1 + 0x40) = ZEXT1216(param_3[1]);
    uVar2 = *(undefined4 *)(param_3[2] + 4);
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(int *)(param_1 + 0x68) = (*(int *)param_3[2] - *(int *)(param_3[2] + 8)) + param_2;
    *(uint *)(param_1 + 0x6c) = (uint)(param_5 == 0);
    return 0;
}



void FUN_140782150(longlong param_1,undefined8 param_2,int param_3,undefined (*param_4) [16],
                   undefined (*param_5) [16],undefined (*param_6) [16])

{
    int iVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar15;
    float fVar16;
    undefined auVar14 [16];
    float fVar17;
    undefined4 in_XMM6_Da;
    float fVar18;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    if (*(int *)(param_1 + 0x6c) == 0) {
        uVar4 = *(undefined4 *)(*param_4 + 4);
        uVar5 = *(undefined4 *)(*param_4 + 8);
        uVar6 = *(undefined4 *)(*param_4 + 0xc);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)*param_4;
        *(undefined4 *)(param_1 + 0x44) = uVar4;
        *(undefined4 *)(param_1 + 0x48) = uVar5;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
        *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    iVar1 = *(int *)(param_1 + 100);
    iVar2 = *(int *)(param_1 + 0x68);
    if (-1 < iVar1 - iVar2) {
        uVar4 = *(undefined4 *)(param_1 + 0x44);
        uVar5 = *(undefined4 *)(param_1 + 0x48);
        uVar6 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)*param_4 = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(*param_4 + 4) = uVar4;
        *(undefined4 *)(*param_4 + 8) = uVar5;
        *(undefined4 *)(*param_4 + 0xc) = uVar6;
        *(undefined4 *)*param_5 = 0;
        *(undefined4 *)(*param_5 + 4) = 0;
        *(undefined4 *)(*param_5 + 8) = 0;
        *(undefined4 *)(*param_5 + 0xc) = 0;
        return;
    }
    fVar7 = (float)(*(uint *)(param_1 + 0x60) ^ 0x80000000);
    iVar3 = iVar2;
    if (param_3 - iVar2 < 0) {
        iVar3 = param_3;
    }
    fVar18 = (float)(ulonglong)(uint)(iVar3 - iVar1) * 0.001;
    fVar9 = (float)(ulonglong)(uint)(iVar2 - iVar1) * 0.001;
    fVar8 = fVar9 * 0.5;
    auVar14 = divps(CONCAT412(*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x4c),
                              CONCAT48(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x48),
                                       CONCAT44(*(float *)(param_1 + 0x54) -
                                                *(float *)(param_1 + 0x44),
                                                *(float *)(param_1 + 0x50) -
                                                *(float *)(param_1 + 0x40)))),
                    CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))));
    fVar9 = SUB164(auVar14,0) - fVar8 * 0.0;
    fVar15 = SUB164(auVar14 >> 0x20,0) - fVar8 * fVar7;
    fVar16 = SUB164(auVar14 >> 0x40,0) - fVar8 * 0.0;
    fVar17 = SUB164(auVar14 >> 0x60,0) - fVar8 * 0.0;
    fVar10 = fVar18 * 0.0 + fVar9;
    fVar11 = fVar18 * fVar7 + fVar15;
    fVar12 = fVar18 * 0.0 + fVar16;
    fVar13 = fVar18 * 0.0 + fVar17;
    fVar8 = fVar18 * 0.5 * fVar18;
    fVar9 = fVar18 * fVar9 + fVar8 * 0.0 + *(float *)(param_1 + 0x40);
    fVar7 = fVar18 * fVar15 + fVar8 * fVar7 + *(float *)(param_1 + 0x44);
    fVar15 = fVar18 * fVar16 + fVar8 * 0.0 + *(float *)(param_1 + 0x48);
    fVar8 = fVar18 * fVar17 + fVar8 * 0.0 + *(float *)(param_1 + 0x4c);
    *(undefined (*) [16])(param_1 + 0x40) = CONCAT412(fVar8,CONCAT48(fVar15,CONCAT44(fVar7,fVar9)));
    *param_4 = CONCAT412(fVar8,CONCAT48(fVar15,CONCAT44(fVar7,fVar9)));
    *param_5 = CONCAT412(fVar13,CONCAT48(fVar12,CONCAT44(fVar11,fVar10)));
    if (DAT_140c4b928 < fVar10 * fVar10 + fVar11 * fVar11 + 0.0) {
        fVar7 = fVar11 * fVar11;
        fVar8 = fVar10 * fVar10 + fVar7 + 0.0;
        auVar14 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                          CONCAT412(fVar13 * fVar13,CONCAT48(fVar12 * fVar12,CONCAT44(fVar7,fVar8))));
        fVar7 = SUB164(auVar14,0);
        fVar7 = (3.0 - fVar8 * fVar7 * fVar7) * 0.5 * fVar7;
        if (fVar7 <= 0.0) {
            fVar7 = 0.0;
        }
        *param_6 = CONCAT412(fVar7 * fVar13,
                             CONCAT48(fVar7 * fVar12,CONCAT44(fVar7 * fVar11,fVar7 * fVar10)));
    }
    if ((-1 < param_3 - *(int *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0x18) != 0)) {
        FUN_14079ab20(*(undefined8 *)(param_1 + 0x10),param_1,iVar1,param_4,
                      CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                      CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    *(int *)(param_1 + 100) = param_3;
    return;
}



void FUN_140782310(longlong param_1,longlong param_2,undefined8 param_3,undefined (*param_4) [16])

{
    undefined (*pauVar1) [12];
    undefined local_18 [16];

    pauVar1 = (undefined (*) [12])
            FUN_140783690(param_1 + 0x38,local_18,param_3,*(undefined4 *)(param_2 + 0xd54),0,0);
    *param_4 = ZEXT1216(*pauVar1);
    return;
}



int FUN_140782360(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;

    uVar2 = param_3[8];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(longlong *)(param_1 + 0x10) = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar5;
        plVar1 = (longlong *)(param_1 + 0x20);
        *plVar1 = *plVar5;
        *plVar5 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_140784660(param_1 + 0x38,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4),param_3[6]);
    iVar4 = 0;
    if (iVar3 < 0) {
        iVar4 = iVar3;
    }
    return iVar4;
}



void FUN_1407823f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined local_18 [16];

    puVar4 = (undefined4 *)FUN_140784b60(param_1 + 0x38,local_18);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_4 = *puVar4;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    return;
}



void FUN_140782460(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
    undefined4 *puVar1;
    undefined local_18 [16];

    puVar1 = (undefined4 *)
            FUN_140785230(param_1 + 0x38,local_18,param_3,*(undefined4 *)(param_2 + 0xd54));
    *param_4 = *puVar1;
    param_4[1] = puVar1[1];
    param_4[2] = puVar1[2];
    return;
}



int FUN_1407824a0(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;

    uVar2 = param_3[8];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(longlong *)(param_1 + 0x10) = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar5;
        plVar1 = (longlong *)(param_1 + 0x20);
        *plVar1 = *plVar5;
        *plVar5 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_1407855d0(param_1 + 0x38,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4),param_3[6]);
    iVar4 = 0;
    if (iVar3 < 0) {
        iVar4 = iVar3;
    }
    return iVar4;
}



void FUN_140782540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
    undefined4 *puVar1;
    undefined local_18 [16];

    puVar1 = (undefined4 *)FUN_140785ad0(param_1 + 0x38,local_18);
    *param_4 = *puVar1;
    param_4[1] = puVar1[1];
    param_4[2] = puVar1[2];
    return;
}



undefined8 * FUN_140782580(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b77d38;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_140713a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8
FUN_1407825e0(longlong **param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
              longlong *param_5)

{
    undefined8 uVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    float fVar4;
    undefined4 uVar5;

    uVar5 = param_3[5];
    *(undefined4 *)(param_1 + 1) = param_2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    param_1[2] = param_5;
    pplVar2 = param_1;
    if ((param_5 != (longlong *)0x0) &&
        (pplVar3 = (longlong **)(param_5 + 0x12), param_1[3] == (longlong *)0x0)) {
        param_1[3] = (longlong *)pplVar3;
        pplVar2 = param_1 + 4;
        *pplVar2 = *pplVar3;
        *pplVar3 = (longlong *)param_1;
        if (*pplVar2 != (longlong *)0x0) {
            (*pplVar2)[3] = (longlong)pplVar2;
        }
    }
    uVar1 = FUN_140633cb0(pplVar2,*param_3,param_1 + 7);
    if (-1 < (int)uVar1) {
        *(undefined4 *)(param_1 + 8) = *param_3;
        fVar4 = (float)FUN_1401c9770(param_3 + 1);
        *(float *)((longlong)param_1 + 0x44) = fVar4;
        *(undefined4 *)(param_1 + 9) = param_3[2];
        *(undefined4 *)((longlong)param_1 + 0x4c) = param_3[3];
        *(undefined4 *)(param_1 + 10) = param_3[4];
        if ((fVar4 == -1.0) || (1e-05 < fVar4)) {
            uVar5 = (**(code **)(*param_1[7] + 0x70))(fVar4,fVar4);
        }
        else {
            uVar5 = 0;
        }
        *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
        uVar1 = 0;
    }
    return uVar1;
}



void FUN_1407826c0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
    double dVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined local_38 [16];
    undefined local_28 [32];

    local_38 = ZEXT816(0);
    dVar1 = (double)(ulonglong)(uint)((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 8)) + param_3) *
            0.001 * (double)*(float *)(param_1 + 0x54) + (double)*(float *)(param_1 + 0x48);
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))
            (*(undefined4 *)(param_1 + 0x44),dVar1);
    if (-1 < iVar2) {
        puVar3 = (undefined4 *)FUN_1401b2fe0(local_38,local_28);
        *param_4 = *puVar3;
        param_4[1] = puVar3[1];
        param_4[2] = puVar3[2];
    }
    if ((((*(uint *)(param_1 + 0x4c) < 0xb) &&
          ((0x609U >> (*(uint *)(param_1 + 0x4c) & 0x1f) & 1) != 0)) &&
         (1.0 <= (double)CONCAT44(uVar5,uVar4))) && (*(longlong *)(param_1 + 0x18) != 0)) {
        FUN_14079ab20(*(undefined8 *)(param_1 + 0x10),param_1);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140782a37)

int FUN_140782830(longlong param_1,undefined4 param_2,uint *param_3,longlong *param_4,
                  longlong param_5)

{
    ulonglong uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    undefined4 uVar11;
    undefined4 extraout_XMM0_Da;
    longlong *local_res20;
    ulonglong local_88;
    ulonglong local_80;
    undefined4 local_54;

    uVar9 = param_3[0xb];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0xc) = uVar9;
    *(longlong *)(param_1 + 0x10) = param_5;
    if ((param_5 != 0) && (plVar6 = (longlong *)(param_5 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar6;
        plVar5 = (longlong *)(param_1 + 0x20);
        *plVar5 = *plVar6;
        *plVar6 = param_1;
        if (*plVar5 != 0) {
            *(longlong **)(*plVar5 + 0x18) = plVar5;
        }
    }
    if (*param_3 == 0) {
        return -0x7fffbffb;
    }
    uVar7 = 0;
    local_80 = 0;
    local_88 = 0;
    uVar8 = uVar7;
    uVar10 = uVar7;
    local_res20 = param_4;
    if (*param_3 != 0) {
        do {
            uVar8 = local_80;
            iVar2 = FUN_140633cb0(uVar10,*(undefined4 *)(*(longlong *)(param_3 + 2) + uVar10 * 4),
                                  &local_res20);
            plVar6 = local_res20;
            if (iVar2 < 0) {
                uVar10 = 0;
                if (uVar8 != 0) {
                    do {
                        plVar6 = *(longlong **)(uVar7 + uVar10 * 8);
                        if (plVar6 != (longlong *)0x0) {
                            (**(code **)(*plVar6 + 8))();
                            *(undefined8 *)(uVar7 + uVar10 * 8) = 0;
                        }
                        uVar10 = (ulonglong)((int)uVar10 + 1);
                    } while (uVar10 < uVar8);
                }
                goto LAB_140782ade;
            }
            uVar3 = (**(code **)(*local_res20 + 0x20))(local_res20);
            if (uVar3 < 2) {
                iVar2 = -0x7fffbffb;
                goto LAB_140782ade;
            }
            uVar3 = uVar8 + 1;
            uVar4 = FUN_14018db00(uVar7,uVar3,8);
            *(longlong **)(uVar8 * 8 + uVar4) = plVar6;
            uVar8 = uVar7;
            uVar1 = local_88;
            if ((uVar7 != uVar4) && (FUN_1407db590(), uVar8 = uVar4, uVar1 = uVar4, uVar7 != 0)) {
                (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))();
            }
            local_88 = uVar1;
            uVar9 = (int)uVar10 + 1;
            uVar7 = uVar8;
            uVar10 = (ulonglong)uVar9;
            local_80 = uVar3;
        } while (uVar9 < *param_3);
    }
    uVar7 = local_80;
    uVar11 = FUN_1401c9770(param_3 + 4);
    local_res20 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x40) = uVar11;
    *(uint *)(param_1 + 0x54) = param_3[10];
    *(uint *)(param_1 + 0x48) = param_3[6];
    *(uint *)(param_1 + 0x4c) = param_3[7];
    FUN_1407a6e40(&local_88);
    if (local_res20 != (longlong *)0x0) {
        local_54 = *(undefined4 *)(param_1 + 0x48);
    }
    iVar2 = FUN_1407a5ba0(param_1 + 0x38,&local_88);
    uVar9 = 0;
    uVar11 = extraout_XMM0_Da;
    if (uVar7 != 0) {
        uVar10 = 0;
        do {
            plVar6 = *(longlong **)(uVar8 + uVar10 * 8);
            if (plVar6 != (longlong *)0x0) {
                uVar11 = (**(code **)(*plVar6 + 8))();
                *(undefined8 *)(uVar8 + uVar10 * 8) = 0;
            }
            uVar9 = uVar9 + 1;
            uVar10 = (ulonglong)uVar9;
        } while (uVar10 < uVar7);
    }
    uVar7 = uVar8;
    if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
        *(uint *)(param_1 + 0x44) = param_3[5];
        *(uint *)(param_1 + 0x50) = param_3[8];
        *(uint *)(param_1 + 0x58) = param_3[9];
        uVar11 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))(uVar11,0xbf800000);
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x5c) = uVar11;
    }
    LAB_140782ade:
    if (uVar7 != 0) {
        (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))(uVar7 - 0x10);
    }
    return iVar2;
}



void FUN_140782b70(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
    double dVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined local_38 [16];
    undefined local_28 [32];

    if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x16e8) == 0)) &&
         (*(float *)(param_1 + 0x44) == 0.0)) && ((*(byte *)(param_1 + 0x54) & 1) != 0)) {
        *(int *)(param_1 + 0x60) = param_3;
        return;
    }
    local_38 = ZEXT816(0);
    dVar1 = (double)(ulonglong)(uint)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60)) + param_3)
            * 0.001 * (double)*(float *)(param_1 + 0x5c) + (double)*(float *)(param_1 + 0x44);
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))
            (*(undefined4 *)(param_1 + 0x40),dVar1);
    if (-1 < iVar2) {
        puVar3 = (undefined4 *)FUN_1401b2fe0(local_38,local_28);
        *param_4 = *puVar3;
        param_4[1] = puVar3[1];
        param_4[2] = puVar3[2];
    }
    if (((*(uint *)(param_1 + 0x50) < 0xb) &&
         ((0x609U >> (*(uint *)(param_1 + 0x50) & 0x1f) & 1) != 0)) &&
        ((1.0 <= (double)CONCAT44(uVar5,uVar4) && (*(longlong *)(param_1 + 0x18) != 0)))) {
        FUN_14079ab20(*(undefined8 *)(param_1 + 0x10),param_1);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140782cd0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
    longlong lVar1;
    undefined4 *puVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar7;
    undefined auVar6 [16];
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined local_28 [8];
    undefined8 uStack32;
    undefined local_18 [16];

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x38));
    if (lVar1 != 0) {
        fVar8 = *(float *)(lVar1 + 0x11e0);
        local_28._4_4_ = *(float *)(lVar1 + 0x11e4);
        fVar10 = *(float *)(lVar1 + 0x11e8);
        fVar3 = *(float *)(lVar1 + 0x11ec);
        lVar1 = *(longlong *)(param_2 + 0xf00);
        if (lVar1 != 0) {
            fVar9 = local_28._4_4_ * *(float *)(lVar1 + 0x1208);
            fVar11 = local_28._4_4_ * *(float *)(lVar1 + 0x120c);
            fVar3 = fVar8 * *(float *)(lVar1 + 0x11f4);
            fVar4 = fVar8 * *(float *)(lVar1 + 0x11f8);
            fVar5 = fVar8 * *(float *)(lVar1 + 0x11fc);
            fVar7 = fVar10 * *(float *)(lVar1 + 0x121c);
            fVar8 = local_28._4_4_ * *(float *)(lVar1 + 0x1200) + fVar8 * *(float *)(lVar1 + 0x11f0) +
                    fVar10 * *(float *)(lVar1 + 0x1210) + *(float *)(lVar1 + 0x1220);
            local_28._4_4_ =
                    local_28._4_4_ * *(float *)(lVar1 + 0x1204) + fVar3 + fVar10 * *(float *)(lVar1 + 0x1214)
                    + *(float *)(lVar1 + 0x1224);
            fVar10 = fVar9 + fVar4 + fVar10 * *(float *)(lVar1 + 0x1218) + *(float *)(lVar1 + 0x1228);
            fVar3 = fVar11 + fVar5 + fVar7 + *(float *)(lVar1 + 0x122c);
        }
        fVar8 = fVar8 - *(float *)(param_2 + 0xf70);
        local_28._4_4_ = local_28._4_4_ - *(float *)(param_2 + 0xf74);
        fVar10 = fVar10 - *(float *)(param_2 + 0xf78);
        fVar3 = fVar3 - *(float *)(param_2 + 0xf7c);
        _local_28 = CONCAT412(fVar3,CONCAT48(fVar10,CONCAT44(local_28._4_4_,fVar8)));
        if (*(int *)(param_2 + 0x1088) - 1U < 3) {
            uStack32 = SUB168(_local_28 >> 0x40,0);
            _local_28 = CONCAT88(uStack32,(ulonglong)(uint)fVar8) & (undefined  [16])0xffffffffffffffff;
            local_28._4_4_ = 0.0;
        }
        fVar4 = fVar8 * fVar8 + local_28._4_4_ * local_28._4_4_ + fVar10 * fVar10;
        if (DAT_140c4b928 <= fVar4) {
            auVar6 = rsqrtss(ZEXT416((uint)fVar4) & (undefined  [16])0xffffffffffffffff,
                             CONCAT412(fVar3 * fVar3,
                                       CONCAT48(fVar10 * fVar10,
                                                CONCAT44(local_28._4_4_ * local_28._4_4_,fVar4))));
            fVar5 = SUB164(auVar6,0);
            fVar4 = (fVar5 * fVar4 * fVar5 - 3.0) * fVar5 * -0.5;
            local_18 = CONCAT412(fVar4 * fVar3,
                                 CONCAT48(fVar4 * fVar10,CONCAT44(fVar4 * local_28._4_4_,fVar4 * fVar8)));
            puVar2 = (undefined4 *)FUN_1401b3170(local_28,local_18);
            *param_4 = *puVar2;
            param_4[1] = puVar2[1];
            param_4[2] = puVar2[2];
        }
    }
    return;
}



void FUN_140782e00(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
    undefined4 *puVar1;
    float fVar2;
    undefined auVar3 [16];
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined local_28 [16];
    undefined local_18 [16];

    fVar5 = *(float *)(param_1 + 0x40) - *(float *)(param_2 + 0xf70);
    fVar6 = *(float *)(param_1 + 0x44) - *(float *)(param_2 + 0xf74);
    fVar7 = *(float *)(param_1 + 0x48) - *(float *)(param_2 + 0xf78);
    fVar8 = *(float *)(param_1 + 0x4c) - *(float *)(param_2 + 0xf7c);
    fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (DAT_140c4b928 <= fVar4) {
        auVar3 = rsqrtss(ZEXT416((uint)fVar4) & (undefined  [16])0xffffffffffffffff,
                         CONCAT412(fVar8 * fVar8,CONCAT48(fVar7 * fVar7,CONCAT44(fVar6 * fVar6,fVar4))))
                ;
        fVar2 = SUB164(auVar3,0);
        fVar4 = (fVar2 * fVar4 * fVar2 - 3.0) * fVar2 * -0.5;
        local_18 = CONCAT412(fVar4 * fVar8,CONCAT48(fVar4 * fVar7,CONCAT44(fVar4 * fVar6,fVar4 * fVar5))
        );
        puVar1 = (undefined4 *)FUN_1401b3170(local_28,local_18);
        *param_4 = *puVar1;
        param_4[1] = puVar1[1];
        param_4[2] = puVar1[2];
    }
    return;
}



undefined8 FUN_140782ea0(longlong param_1,int param_2,undefined4 *param_3,longlong param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;

    uVar4 = param_3[6];
    *(int *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    if ((param_4 != 0) && (plVar3 = (longlong *)(param_4 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar3;
        plVar2 = (longlong *)(param_1 + 0x20);
        *plVar2 = *plVar3;
        *plVar3 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    *(undefined4 *)(param_1 + 0x38) = *param_3;
    *(undefined4 *)(param_1 + 0x3c) = param_3[1];
    *(undefined4 *)(param_1 + 0x40) = param_3[2];
    uVar4 = FUN_1401c9770();
    *(undefined4 *)(param_1 + 0x44) = uVar4;
    iVar1 = param_3[5];
    *(int *)(param_1 + 0x48) = param_2 - iVar1;
    *(int *)(param_1 + 0x4c) = param_3[3] + (param_2 - iVar1);
    return 0;
}



void FUN_140782f40(longlong param_1,undefined8 param_2,int param_3,float *param_4)

{
    int iVar1;
    uint uVar2;
    float fVar3;
    float fVar4;

    iVar1 = *(int *)(param_1 + 0x4c);
    if ((0 < param_3 - iVar1) && (param_3 = iVar1, *(longlong *)(param_1 + 0x18) != 0)) {
        FUN_14079ab20(*(undefined8 *)(param_1 + 0x10),param_1);
    }
    uVar2 = param_3 - *(int *)(param_1 + 0x48);
    fVar4 = ((float)(ulonglong)uVar2 * 0.001 * *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x38)
             + 3.141593) * 0.1591549;
    iVar1 = (int)fVar4;
    fVar3 = fVar4;
    if ((iVar1 != -0x80000000) && ((float)iVar1 != fVar4)) {
        uVar2 = movmskps(uVar2,ZEXT816(CONCAT44(fVar4,fVar4)));
        fVar3 = (float)(iVar1 - (uVar2 & 1));
    }
    fVar4 = *(float *)(param_1 + 0x40);
    param_4[1] = *(float *)(param_1 + 0x3c);
    param_4[2] = fVar4;
    *param_4 = (fVar4 - fVar3) * 6.283185 - 3.141593;
    return;
}



undefined8 FUN_140783020(void)

{
    return 0x14;
}



void FUN_140783060(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = FUN_140786070(param_1 + 0x38,param_3,*(undefined4 *)(param_2 + 0xd54));
    *param_4 = uVar1;
    return;
}



int FUN_140783090(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;

    uVar2 = param_3[8];
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(longlong *)(param_1 + 0x10) = param_5;
    if ((param_5 != 0) && (plVar5 = (longlong *)(param_5 + 0x90), *(longlong *)(param_1 + 0x18) == 0))
    {
        *(longlong **)(param_1 + 0x18) = plVar5;
        plVar1 = (longlong *)(param_1 + 0x20);
        *plVar1 = *plVar5;
        *plVar5 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    iVar3 = FUN_140786120(param_1 + 0x38,*param_3,*(undefined8 *)(param_3 + 2),
                          *(undefined8 *)(param_3 + 4),param_3[6]);
    iVar4 = 0;
    if (iVar3 < 0) {
        iVar4 = iVar3;
    }
    return iVar4;
}



void FUN_140783130(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = FUN_140786620(param_1 + 0x38,param_3);
    *param_4 = uVar1;
    return;
}



void FUN_140783170(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined4 uVar1;

    uVar1 = FUN_140786e10(param_1 + 0x38,param_3);
    *param_4 = uVar1;
    return;
}



void FUN_1407831b0(longlong param_1,longlong param_2,int param_3,uint *param_4)

{
    longlong *plVar1;
    float fVar2;
    int iVar3;

    fVar2 = DAT_140c4b928;
    *param_4 = 0;
    if (*(float *)(param_2 + 0xff0) * *(float *)(param_2 + 0xff0) +
        *(float *)(param_2 + 0xff4) * *(float *)(param_2 + 0xff4) + 0.0 <= fVar2) {
        *param_4 = 1;
    }
    if (fVar2 < *(float *)(param_2 + 0x1030) * *(float *)(param_2 + 0x1030) +
                *(float *)(param_2 + 0x1034) * *(float *)(param_2 + 0x1034) + 0.0) {
        *param_4 = *param_4 | 2;
    }
    iVar3 = *(int *)(param_2 + 0x1088);
    if (iVar3 == 0) {
        *param_4 = *param_4 | 0x100;
    }
    else if (iVar3 == 1) {
        *param_4 = *param_4 | 0x280;
    }
    else if (iVar3 == 2) {
        *param_4 = *param_4 | 0x480;
    }
    else if (iVar3 == 3) {
        *param_4 = *param_4 | 0x80;
    }
    plVar1 = *(longlong **)(param_2 + 0xfe0);
    if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
        if (((iVar3 == 6) && (0.0 < *(float *)(plVar1 + 0xc))) && (param_3 - *(int *)(plVar1 + 0xd) < 0)
                ) {
            *param_4 = *param_4 & 0xfffffeff;
            *param_4 = *param_4 | 0x40;
        }
    }
    if (*(int *)(param_1 + 0x38) == 0) {
        *param_4 = *param_4 | 0x40000;
    }
    return;
}



void FUN_140783300(int *param_1,int param_2,int *param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;

    iVar2 = param_1[1];
    if ((iVar2 != 0) &&
        (uVar10 = (ulonglong)(param_1[2] + -1 + iVar2 & *param_1 - 1U),
                param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar10 * 4) < 0)) {
        param_2 = *(int *)(*(longlong *)(param_1 + 4) + uVar10 * 4);
    }
    iVar3 = *param_1;
    if (iVar2 == iVar3) {
        uVar10 = (ulonglong)(uint)(iVar3 * 2);
        if (iVar3 == 0) {
            uVar10 = 0x10;
        }
        uVar5 = SUB168(ZEXT816(4) * ZEXT816(uVar10),0);
        if (SUB168(ZEXT816(4) * ZEXT816(uVar10) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        lVar6 = FUN_14018b280(uVar5,8);
        lVar7 = FUN_14018b280();
        uVar4 = param_1[1];
        uVar8 = *param_1 - param_1[2];
        if (uVar4 < uVar8) {
            uVar8 = uVar4;
        }
        lVar1 = (ulonglong)uVar8 * 4;
        FUN_1407db590(lVar6,*(longlong *)(param_1 + 4) + (ulonglong)(uint)param_1[2] * 4,lVar1);
        lVar9 = (ulonglong)(uVar4 - uVar8) << 2;
        FUN_1407db590(lVar1 + lVar6,*(undefined8 *)(param_1 + 4),lVar9);
        FUN_1407db590(lVar7,*(longlong *)(param_1 + 6) + (ulonglong)(uint)param_1[2] * 4,lVar1);
        FUN_1407db590(lVar1 + lVar7,*(undefined8 *)(param_1 + 6),lVar9);
        FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
        FUN_14018b900(*(undefined8 *)(param_1 + 6),0);
        *param_1 = (int)uVar10;
        *(longlong *)(param_1 + 4) = lVar6;
        *(longlong *)(param_1 + 6) = lVar7;
        param_1[2] = 0;
    }
    lVar6 = (ulonglong)(param_1[2] + param_1[1] & *param_1 - 1U) * 4;
    *(int *)(lVar6 + *(longlong *)(param_1 + 4)) = param_2;
    *(int *)(lVar6 + *(longlong *)(param_1 + 6)) = *param_3;
    if (param_1[1] == 0) {
        param_1[8] = param_2;
        param_1[9] = *param_3;
    }
    param_1[1] = param_1[1] + 1;
    return;
}



void FUN_1407834b0(uint *param_1,uint param_2,uint *param_3)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar3 = param_1[1];
    if ((uVar3 != 0) &&
        (uVar9 = (ulonglong)((param_1[2] - 1) + uVar3 & *param_1 - 1),
                (int)(param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar9 * 4)) < 0)) {
        param_2 = *(uint *)(*(longlong *)(param_1 + 4) + uVar9 * 4);
    }
    uVar4 = *param_1;
    if (uVar3 == uVar4) {
        if (uVar4 == 0) {
            uVar4 = 0x10;
        }
        else {
            uVar4 = uVar4 * 2;
        }
        uVar5 = SUB168(ZEXT816(4) * ZEXT416(uVar4),0);
        if (SUB168(ZEXT816(4) * ZEXT416(uVar4) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        lVar6 = FUN_14018b280(uVar5,8);
        lVar7 = FUN_14018b280();
        uVar3 = param_1[1];
        uVar8 = *param_1 - param_1[2];
        if (uVar3 < uVar8) {
            uVar8 = uVar3;
        }
        lVar2 = (ulonglong)uVar8 * 4;
        FUN_1407db590(lVar6,*(longlong *)(param_1 + 4) + (ulonglong)param_1[2] * 4,lVar2);
        FUN_1407db590(lVar2 + lVar6,*(undefined8 *)(param_1 + 4),(ulonglong)(uVar3 - uVar8) * 4);
        lVar2 = (ulonglong)uVar8 * 0xc;
        FUN_1407db590(lVar7,*(longlong *)(param_1 + 6) + (ulonglong)param_1[2] * 0xc,lVar2);
        FUN_1407db590(lVar2 + lVar7,*(undefined8 *)(param_1 + 6),(ulonglong)(uVar3 - uVar8) * 0xc);
        FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
        FUN_14018b900(*(undefined8 *)(param_1 + 6),0);
        *(longlong *)(param_1 + 4) = lVar6;
        *(longlong *)(param_1 + 6) = lVar7;
        *param_1 = uVar4;
        param_1[2] = 0;
    }
    uVar9 = (ulonglong)(param_1[2] + param_1[1] & *param_1 - 1);
    *(uint *)(*(longlong *)(param_1 + 4) + uVar9 * 4) = param_2;
    puVar1 = (uint *)(*(longlong *)(param_1 + 6) + uVar9 * 0xc);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    if (param_1[1] == 0) {
        param_1[8] = param_2;
        param_1[9] = *param_3;
        param_1[10] = param_3[1];
        param_1[0xb] = param_3[2];
    }
    param_1[1] = param_1[1] + 1;
    return;
}



int * FUN_140783690(int *param_1,int *param_2,ulonglong param_3,int param_4,undefined8 param_5,
                    undefined8 param_6)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined auVar6 [12];
    int *piVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    float extraout_XMM0_Da;
    float fVar11;
    float fVar12;
    float fVar13;
    float local_48;
    float local_44;
    float local_40;

    if (param_4 != 0) {
        piVar7 = (int *)FUN_140787150(param_1,&local_48,param_3,param_5,param_6);
        param_1[9] = *piVar7;
        param_1[10] = piVar7[1];
        param_1[0xb] = piVar7[2];
        goto LAB_1407837fd;
    }
    iVar1 = param_1[8];
    if (param_1[1] == 1) {
        uVar5 = (ulonglong)(uint)param_1[2];
        LAB_140783709:
        lVar4 = *(longlong *)(param_1 + 6);
        fVar12 = *(float *)(lVar4 + uVar5 * 0xc);
        fVar13 = *(float *)(lVar4 + 4 + uVar5 * 0xc);
        fVar11 = *(float *)(lVar4 + 8 + uVar5 * 0xc);
    }
    else {
        uVar8 = (ulonglong)(param_1[2] + 1U & *param_1 - 1U);
        if (2 < (uint)param_1[1]) {
            do {
                if (iVar1 - *(int *)(*(longlong *)(param_1 + 4) + uVar8 * 4) < 0) break;
                param_1[1] = param_1[1] + -1;
                param_1[2] = (int)uVar8;
                uVar8 = (ulonglong)((int)uVar8 + 1U & *param_1 - 1U);
            } while (2 < (uint)param_1[1]);
        }
        uVar9 = (ulonglong)(uint)param_1[2];
        iVar2 = *(int *)(*(longlong *)(param_1 + 4) + uVar9 * 4);
        uVar10 = iVar1 - iVar2;
        uVar5 = uVar9;
        if (((int)uVar10 < 0) ||
            (iVar3 = *(int *)(*(longlong *)(param_1 + 4) + uVar8 * 4), uVar5 = uVar8, -1 < iVar1 - iVar3)
                ) goto LAB_140783709;
        lVar4 = *(longlong *)(param_1 + 6);
        fVar12 = *(float *)(lVar4 + uVar9 * 0xc);
        fVar13 = *(float *)(lVar4 + 4 + uVar9 * 0xc);
        fVar11 = (float)(ulonglong)uVar10 / (float)(ulonglong)(uint)(iVar3 - iVar2);
        fVar12 = fVar11 * (*(float *)(lVar4 + uVar8 * 0xc) - fVar12) + fVar12;
        fVar13 = fVar11 * (*(float *)(lVar4 + 4 + uVar8 * 0xc) - fVar13) + fVar13;
        fVar11 = 0.0;
    }
    FUN_140787150(param_1,&local_48,param_3 & 0xffffffff,param_5,param_6);
    FUN_1408fc7f0();
    auVar6 = *(undefined (*) [12])(param_1 + 9);
    param_1[9] = (int)((*(float *)*(undefined (*) [12])(param_1 + 9) - fVar12) * extraout_XMM0_Da +
                       local_48);
    param_1[10] = (int)((SUB164(ZEXT1216(auVar6) >> 0x20,0) - fVar13) * extraout_XMM0_Da + local_44);
    param_1[0xb] = (int)(((float)param_1[0xb] - fVar11) * extraout_XMM0_Da + local_40);
    LAB_1407837fd:
    param_1[8] = (int)(param_3 & 0xffffffff);
    *param_2 = param_1[9];
    param_2[1] = param_1[10];
    param_2[2] = param_1[0xb];
    return param_2;
}



undefined8
FUN_140783910(uint *param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,uint param_6
        ,uint param_7,longlong param_8)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    int *piVar6;
    int *piVar7;
    ulonglong uVar8;

    uVar5 = (ulonglong)param_2;
    if (param_5 == 0) {
        if (param_2 == 0) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -8) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -4) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (*(longlong *)(param_1 + 4) - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (4 - param_3) + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar6 + 4;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(0xc) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(0xc) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 0xc);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
        }
        *param_1 = param_2;
    }
    else {
        if ((param_5 != 1) || (param_2 < 3)) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        piVar7 = piVar6 + 4;
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + 4 + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0x10 + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0xc + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar7;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 4) + 4;
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(0xc) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(0xc) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            *(undefined8 *)(param_1 + 6) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 0xc);
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 8) + 0xc;
        }
        *param_1 = param_2 - 2;
    }
    param_1[1] = 0;
    param_1[10] = param_5;
    param_1[0xb] = param_6;
    param_1[0xc] = param_7;
    return 0;
}



float * FUN_140783e10(uint *param_1,float *param_2,int param_3,int *param_4,undefined8 *param_5,
                      undefined8 param_6,longlong param_7)

{
    float fVar1;
    float fVar2;
    float *pfVar3;
    undefined (*pauVar4) [12];
    undefined auVar5 [12];
    ulonglong uVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    int iVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;

    iVar10 = **(int **)(param_1 + 2);
    param_3 = (param_1[0xc] - iVar10) + param_3;
    iVar9 = (*(int **)(param_1 + 2))[*param_1 - 1] - iVar10;
    iVar15 = 0;
    iVar8 = iVar15;
    if (iVar9 < 1) {
        if ((param_7 != 0) && (*(longlong *)(param_7 + 0x18) != 0)) {
            FUN_14079ab20();
        }
        goto switchD_140783e7b_caseD_b;
    }
    iVar8 = param_3;
    switch(param_1[0xb]) {
        case 0:
        case 9:
            if (((param_7 != 0) && (iVar9 <= param_3)) && (*(longlong *)(param_7 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            iVar8 = iVar15;
            if ((-1 < param_3) && (iVar8 = param_3, iVar9 < param_3)) {
                iVar8 = iVar9;
            }
            break;
        case 1:
        case 6:
        case 8:
            if (param_3 < 0) {
                iVar8 = (iVar9 * 2 - (-1 - param_3) % (iVar9 * 2)) + -1;
            }
            else {
                LAB_140783f04:
                iVar8 = param_3 % (iVar9 * 2);
            }
            goto LAB_140783f09;
        case 2:
            if (param_3 < 0) {
                iVar8 = (iVar9 - (-1 - param_3) % iVar9) + -1;
            }
            else {
                iVar8 = param_3 % iVar9;
            }
            break;
        case 3:
        case 10:
            if (((param_7 != 0) && (iVar9 <= param_3)) && (*(longlong *)(param_7 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            param_3 = iVar9 - param_3;
            iVar8 = iVar15;
            if ((-1 < param_3) && (iVar8 = param_3, iVar9 < param_3)) {
                iVar8 = iVar9;
            }
            break;
        case 4:
        case 7:
            param_3 = iVar9 - param_3;
            if (-1 < param_3) goto LAB_140783f04;
            iVar8 = (iVar9 * 2 - (-1 - param_3) % (iVar9 * 2)) + -1;
        LAB_140783f09:
            if (iVar9 <= iVar8) {
                iVar8 = iVar9 * 2 - iVar8;
            }
            break;
        case 5:
            param_3 = iVar9 - param_3;
            if (param_3 < 0) {
                iVar8 = (iVar9 - (-1 - param_3) % iVar9) + -1;
            }
            else {
                iVar8 = param_3 % iVar9;
            }
    }
    switchD_140783e7b_caseD_b:
    uVar14 = param_1[1];
    iVar8 = iVar8 + iVar10;
    if (uVar14 == 0) {
        LAB_140784012:
        uVar12 = *param_1;
        if ((uVar14 < uVar12) &&
            (lVar7 = *(longlong *)(param_1 + 2), -1 < iVar8 - *(int *)(lVar7 + (ulonglong)uVar14 * 4))) {
            uVar14 = uVar14 + 1;
            iVar10 = 1;
            uVar13 = uVar14;
            while ((uVar14 < uVar12 && (-1 < iVar8 - *(int *)(lVar7 + (ulonglong)uVar14 * 4)))) {
                iVar10 = iVar10 * 2;
                uVar13 = uVar14 + 1;
                uVar14 = uVar14 + iVar10;
            }
            if (uVar12 < uVar14) {
                uVar14 = uVar12;
            }
            if (uVar13 < uVar14) {
                do {
                    uVar12 = uVar14 + uVar13 >> 1;
                    if (-1 < iVar8 - *(int *)(lVar7 + (ulonglong)uVar12 * 4)) {
                        uVar13 = uVar12 + 1;
                        uVar12 = uVar14;
                    }
                    uVar14 = uVar12;
                } while (uVar13 < uVar14);
            }
            param_1[1] = uVar13;
        }
    }
    else {
        lVar7 = *(longlong *)(param_1 + 2);
        uVar12 = uVar14 - 1;
        uVar6 = (ulonglong)uVar12;
        if (-1 < iVar8 - *(int *)(lVar7 + uVar6 * 4)) goto LAB_140784012;
        uVar11 = uVar6;
        iVar10 = 1;
        while (0 < (int)uVar12) {
            uVar12 = (uint)uVar6;
            uVar14 = uVar12 - 1;
            if (-1 < iVar8 - *(int *)(lVar7 + (ulonglong)uVar14 * 4)) break;
            uVar12 = uVar12 + iVar10 * -2;
            uVar6 = (ulonglong)uVar12;
            uVar11 = (ulonglong)uVar14;
            iVar10 = iVar10 * 2;
        }
        if ((int)uVar12 < 0) {
            uVar12 = 0;
        }
        if (uVar12 < (uint)uVar11) {
            do {
                uVar14 = uVar12 + (int)uVar11 >> 1;
                if (iVar8 - *(int *)(lVar7 + (ulonglong)uVar14 * 4) < 0) {
                    uVar11 = (ulonglong)uVar14;
                }
                else {
                    uVar12 = uVar14 + 1;
                }
            } while (uVar12 < (uint)uVar11);
        }
        param_1[1] = uVar12;
    }
    uVar14 = param_1[1];
    uVar6 = (ulonglong)uVar14;
    if (param_1[10] == 0) {
        if (uVar14 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = 0;
            }
            if (param_5 != (undefined8 *)0x0) {
                if (*param_1 < 2) {
                    *param_5 = 0;
                    *(undefined4 *)(param_5 + 1) = 0;
                }
                else {
                    pfVar3 = *(float **)(param_1 + 6);
                    fVar18 = pfVar3[5];
                    auVar5 = *(undefined (*) [12])(pfVar3 + 3);
                    fVar1 = pfVar3[2];
                    fVar2 = pfVar3[1];
                    *(float *)param_5 = *(float *)*(undefined (*) [12])(pfVar3 + 3) - *pfVar3;
                    *(float *)((longlong)param_5 + 4) = SUB164(ZEXT1216(auVar5) >> 0x20,0) - fVar2;
                    *(float *)(param_5 + 1) = fVar18 - fVar1;
                }
            }
            LAB_14078410d:
            pfVar3 = *(float **)(param_1 + 6);
            *param_2 = *pfVar3;
            param_2[1] = pfVar3[1];
            fVar18 = pfVar3[2];
            goto LAB_140784609;
        }
        uVar12 = *param_1;
        if (uVar14 < uVar12) {
            uVar11 = (ulonglong)(uVar14 - 1);
            iVar10 = *(int *)(*(longlong *)(param_1 + 2) + uVar11 * 4);
            iVar9 = *(int *)(*(longlong *)(param_1 + 2) + uVar6 * 4);
            if (param_4 != (int *)0x0) {
                *param_4 = iVar9 - iVar10;
            }
            if (param_5 != (undefined8 *)0x0) {
                lVar7 = *(longlong *)(param_1 + 6);
                fVar18 = *(float *)(lVar7 + 8 + uVar6 * 0xc);
                fVar1 = *(float *)(lVar7 + 4 + uVar6 * 0xc);
                fVar2 = *(float *)(lVar7 + 8 + uVar11 * 0xc);
                fVar17 = *(float *)(lVar7 + 4 + uVar11 * 0xc);
                *(float *)param_5 = *(float *)(lVar7 + uVar6 * 0xc) - *(float *)(lVar7 + uVar11 * 0xc);
                *(float *)((longlong)param_5 + 4) = fVar1 - fVar17;
                *(float *)(param_5 + 1) = fVar18 - fVar2;
            }
            lVar7 = *(longlong *)(param_1 + 6);
            uVar14 = param_1[1];
            fVar18 = *(float *)(lVar7 + 4 + (ulonglong)uVar14 * 0xc);
            fVar1 = *(float *)(lVar7 + 4 + (ulonglong)(uVar14 - 1) * 0xc);
            fVar2 = *(float *)(lVar7 + (ulonglong)(uVar14 - 1) * 0xc);
            fVar17 = (float)(ulonglong)(uint)(iVar8 - iVar10) / (float)(ulonglong)(uint)(iVar9 - iVar10);
            *param_2 = fVar17 * (*(float *)(lVar7 + (ulonglong)uVar14 * 0xc) - fVar2) + fVar2;
            param_2[2] = 0.0;
            param_2[1] = fVar17 * (fVar18 - fVar1) + fVar1;
            return param_2;
        }
        if (param_4 != (int *)0x0) {
            *param_4 = 0;
        }
        if (param_5 != (undefined8 *)0x0) {
            if (1 < uVar12) {
                lVar7 = *(longlong *)(param_1 + 6);
                uVar6 = (ulonglong)(uVar12 - 1);
                fVar2 = *(float *)(lVar7 + 8 + uVar6 * 0xc);
                fVar18 = *(float *)(lVar7 + 4 + uVar6 * 0xc);
                fVar1 = *(float *)(lVar7 + uVar6 * 0xc);
                uVar12 = uVar12 - 2;
                goto LAB_14078459f;
            }
            *param_5 = 0;
            *(undefined4 *)(param_5 + 1) = 0;
        }
    }
    else {
        if (uVar14 == 0) {
            if (param_4 != (int *)0x0) {
                *param_4 = 0;
            }
            if (param_5 != (undefined8 *)0x0) {
                pauVar4 = *(undefined (**) [12])(param_1 + 6);
                fVar18 = *(float *)(*pauVar4 + 8);
                auVar5 = *pauVar4;
                fVar1 = *(float *)(pauVar4[-1] + 8);
                fVar2 = *(float *)(pauVar4[-1] + 4);
                *(float *)param_5 = *(float *)*pauVar4 - *(float *)pauVar4[-1];
                *(float *)((longlong)param_5 + 4) = SUB164(ZEXT1216(auVar5) >> 0x20,0) - fVar2;
                *(float *)(param_5 + 1) = fVar18 - fVar1;
            }
            goto LAB_14078410d;
        }
        uVar12 = *param_1;
        uVar11 = (ulonglong)uVar12;
        if (uVar14 < uVar12) {
            uVar11 = (ulonglong)(uVar14 - 1);
            iVar10 = *(int *)(*(longlong *)(param_1 + 2) + uVar11 * 4);
            iVar9 = *(int *)(*(longlong *)(param_1 + 2) + uVar6 * 4);
            if (param_4 != (int *)0x0) {
                *param_4 = iVar9 - iVar10;
            }
            if (param_5 != (undefined8 *)0x0) {
                lVar7 = *(longlong *)(param_1 + 6);
                fVar18 = *(float *)(lVar7 + 8 + uVar6 * 0xc);
                fVar1 = *(float *)(lVar7 + 4 + uVar6 * 0xc);
                fVar2 = *(float *)(lVar7 + 8 + uVar11 * 0xc);
                fVar17 = *(float *)(lVar7 + 4 + uVar11 * 0xc);
                *(float *)param_5 = *(float *)(lVar7 + uVar6 * 0xc) - *(float *)(lVar7 + uVar11 * 0xc);
                *(float *)((longlong)param_5 + 4) = fVar1 - fVar17;
                *(float *)(param_5 + 1) = fVar18 - fVar2;
            }
            uVar6 = (ulonglong)param_1[1];
            lVar7 = *(longlong *)(param_1 + 6);
            fVar18 = *(float *)(lVar7 + 0x10 + uVar6 * 0xc);
            fVar23 = (float)(ulonglong)(uint)(iVar8 - iVar10) / (float)(ulonglong)(uint)(iVar9 - iVar10);
            fVar21 = fVar23 * fVar23;
            fVar1 = *(float *)(lVar7 + 4 + uVar6 * 0xc);
            fVar19 = fVar23 * fVar21 * 1.5;
            fVar2 = *(float *)(lVar7 + -8 + uVar6 * 0xc);
            fVar17 = *(float *)(lVar7 + -0x14 + uVar6 * 0xc);
            fVar16 = (fVar21 * 2.0 - fVar19) + fVar23 * 0.5;
            fVar20 = fVar23 * fVar21 * 0.5;
            fVar22 = fVar20 - fVar21 * 0.5;
            fVar20 = (fVar21 - fVar20) - fVar23 * 0.5;
            fVar19 = (fVar19 - fVar21 * 2.5) + 1.0;
            *param_2 = fVar22 * *(float *)(lVar7 + 0xc + uVar6 * 0xc) +
                       fVar16 * *(float *)(lVar7 + uVar6 * 0xc) +
                       fVar19 * *(float *)(lVar7 + -0xc + uVar6 * 0xc) +
                       fVar20 * *(float *)(&DAT_ffffffffffffffe8 + uVar6 * 0xc + lVar7);
            param_2[2] = 0.0;
            param_2[1] = fVar22 * fVar18 + fVar16 * fVar1 + fVar19 * fVar2 + fVar20 * fVar17;
            return param_2;
        }
        if (param_4 != (int *)0x0) {
            *param_4 = 0;
        }
        if (param_5 != (undefined8 *)0x0) {
            lVar7 = *(longlong *)(param_1 + 6);
            uVar12 = uVar12 - 1;
            fVar2 = *(float *)(lVar7 + 8 + uVar11 * 0xc);
            fVar18 = *(float *)(lVar7 + 4 + uVar11 * 0xc);
            fVar1 = *(float *)(lVar7 + uVar11 * 0xc);
            LAB_14078459f:
            uVar6 = (ulonglong)uVar12;
            fVar17 = *(float *)(lVar7 + 8 + uVar6 * 0xc);
            fVar16 = *(float *)(lVar7 + 4 + uVar6 * 0xc);
            *(float *)param_5 = fVar1 - *(float *)(lVar7 + uVar6 * 0xc);
            *(float *)((longlong)param_5 + 4) = fVar18 - fVar16;
            *(float *)(param_5 + 1) = fVar2 - fVar17;
        }
    }
    lVar7 = *(longlong *)(param_1 + 6);
    uVar6 = (ulonglong)(*param_1 - 1);
    *param_2 = *(float *)(lVar7 + uVar6 * 0xc);
    param_2[1] = *(float *)(lVar7 + 4 + uVar6 * 0xc);
    fVar18 = *(float *)(lVar7 + 8 + uVar6 * 0xc);
    LAB_140784609:
    param_2[2] = fVar18;
    return param_2;
}



undefined8
FUN_140784660(uint *param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,
              undefined8 param_6,uint param_7,longlong param_8)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    int *piVar6;
    int *piVar7;
    ulonglong uVar8;

    uVar5 = (ulonglong)param_2;
    if (param_5 == 0) {
        if (param_2 == 0) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -8) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -4) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (*(longlong *)(param_1 + 4) - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (4 - param_3) + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar6 + 4;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(6) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(6) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 6);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
        }
        *param_1 = param_2;
    }
    else {
        if ((param_5 != 1) || (param_2 < 3)) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        piVar7 = piVar6 + 4;
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + 4 + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0x10 + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0xc + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar7;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 4) + 4;
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(6) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(6) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            *(undefined8 *)(param_1 + 6) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 6);
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 8) + 6;
        }
        *param_1 = param_2 - 2;
    }
    param_1[1] = 0;
    param_1[10] = param_5;
    param_1[0xc] = param_7;
    param_1[0xb] = 0;
    return 0;
}



undefined (*) [16] FUN_140784b60(uint *param_1,undefined (*param_2) [16],int param_3)

{
ulonglong uVar1;
int iVar2;
int iVar3;
int iVar4;
uint uVar5;
uint uVar6;
ulonglong uVar7;
uint uVar8;
longlong lVar9;
int iVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
longlong in_stack_00000038;
float local_78;
float fStack116;
float fStack112;
float fStack108;
float local_68;
float fStack100;
float fStack96;
float fStack92;
float local_58;
float fStack84;
float fStack80;
float fStack76;
float local_48;
float fStack68;
float fStack64;
float fStack60;

iVar4 = **(int **)(param_1 + 2);
iVar2 = (*(int **)(param_1 + 2))[*param_1 - 1] - iVar4;
param_3 = (param_1[0xc] - iVar4) + param_3;
iVar10 = 0;
iVar3 = iVar10;
if (iVar2 < 1) {
if ((in_stack_00000038 != 0) && (*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
FUN_14079ab20();
}
goto switchD_140784bc5_caseD_b;
}
iVar3 = param_3;
switch(param_1[0xb]) {
case 0:
case 9:
if (((in_stack_00000038 != 0) && (iVar2 <= param_3)) &&
(*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
FUN_14079ab20();
}
iVar3 = iVar10;
if ((-1 < param_3) && (iVar3 = param_3, iVar2 < param_3)) {
iVar3 = iVar2;
}
break;
case 1:
case 6:
case 8:
if (param_3 < 0) {
iVar3 = (iVar2 * 2 - (-1 - param_3) % (iVar2 * 2)) + -1;
}
else {
LAB_140784c4e:
iVar3 = param_3 % (iVar2 * 2);
}
goto LAB_140784c53;
case 2:
if (param_3 < 0) {
iVar3 = (iVar2 - (-1 - param_3) % iVar2) + -1;
}
else {
iVar3 = param_3 % iVar2;
}
break;
case 3:
case 10:
if (((in_stack_00000038 != 0) && (iVar2 <= param_3)) &&
(*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
FUN_14079ab20();
}
param_3 = iVar2 - param_3;
iVar3 = iVar10;
if ((-1 < param_3) && (iVar3 = param_3, iVar2 < param_3)) {
iVar3 = iVar2;
}
break;
case 4:
case 7:
param_3 = iVar2 - param_3;
if (-1 < param_3) goto LAB_140784c4e;
iVar3 = (iVar2 * 2 - (-1 - param_3) % (iVar2 * 2)) + -1;
LAB_140784c53:
if (iVar2 <= iVar3) {
iVar3 = iVar2 * 2 - iVar3;
}
break;
case 5:
param_3 = iVar2 - param_3;
if (param_3 < 0) {
iVar3 = (iVar2 - (-1 - param_3) % iVar2) + -1;
}
else {
iVar3 = param_3 % iVar2;
}
}
switchD_140784bc5_caseD_b:
uVar8 = param_1[1];
iVar3 = iVar3 + iVar4;
if (uVar8 != 0) {
lVar9 = *(longlong *)(param_1 + 2);
uVar5 = uVar8 - 1;
uVar1 = (ulonglong)uVar5;
if (iVar3 - *(int *)(lVar9 + uVar1 * 4) < 0) {
uVar7 = uVar1;
iVar4 = 1;
while (0 < (int)uVar5) {
uVar5 = (uint)uVar1;
uVar8 = uVar5 - 1;
if (-1 < iVar3 - *(int *)(lVar9 + (ulonglong)uVar8 * 4)) break;
uVar5 = uVar5 + iVar4 * -2;
uVar1 = (ulonglong)uVar5;
uVar7 = (ulonglong)uVar8;
iVar4 = iVar4 * 2;
}
if ((int)uVar5 < 0) {
uVar5 = 0;
}
if (uVar5 < (uint)uVar7) {
do {
uVar8 = uVar5 + (int)uVar7 >> 1;
if (iVar3 - *(int *)(lVar9 + (ulonglong)uVar8 * 4) < 0) {
uVar7 = (ulonglong)uVar8;
}
else {
uVar5 = uVar8 + 1;
}
} while (uVar5 < (uint)uVar7);
}
param_1[1] = uVar5;
goto LAB_140784dbf;
}
}
uVar5 = *param_1;
if ((uVar8 < uVar5) &&
(lVar9 = *(longlong *)(param_1 + 2), -1 < iVar3 - *(int *)(lVar9 + (ulonglong)uVar8 * 4))) {
uVar8 = uVar8 + 1;
iVar4 = 1;
uVar6 = uVar8;
while ((uVar8 < uVar5 && (-1 < iVar3 - *(int *)(lVar9 + (ulonglong)uVar8 * 4)))) {
iVar4 = iVar4 * 2;
uVar6 = uVar8 + 1;
uVar8 = uVar8 + iVar4;
}
if (uVar5 < uVar8) {
uVar8 = uVar5;
}
if (uVar6 < uVar8) {
do {
uVar5 = uVar8 + uVar6 >> 1;
if (-1 < iVar3 - *(int *)(lVar9 + (ulonglong)uVar5 * 4)) {
uVar6 = uVar5 + 1;
uVar5 = uVar8;
}
uVar8 = uVar5;
} while (uVar6 < uVar8);
}
param_1[1] = uVar6;
}
LAB_140784dbf:
if (param_1[10] == 0) {
uVar8 = param_1[1];
if (uVar8 == 0) {
FUN_1401adb90(&local_78,*(undefined8 *)(param_1 + 6));
}
else {
if (uVar8 < *param_1) {
lVar9 = *(longlong *)(param_1 + 6);
uVar1 = (ulonglong)(uVar8 - 1);
iVar4 = *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4);
iVar2 = *(int *)(*(longlong *)(param_1 + 2) + uVar1 * 4);
FUN_1401adb90(&local_78,lVar9 + (ulonglong)uVar8 * 6);
FUN_1401adb90(&local_68,lVar9 + uVar1 * 6);
fVar11 = (float)(ulonglong)(uint)(iVar3 - iVar2) / (float)(ulonglong)(uint)(iVar4 - iVar2);
*param_2 = CONCAT412(fVar11 * (fStack108 - fStack92) + fStack92,
                     CONCAT48(fVar11 * (fStack112 - fStack96) + fStack96,
                              CONCAT44(fVar11 * (fStack116 - fStack100) + fStack100,
                                       fVar11 * (local_78 - local_68) + local_68)));
return param_2;
}
FUN_1401adb90(&local_68,*(longlong *)(param_1 + 6) + (ulonglong)(*param_1 - 1) * 6);
local_78 = local_68;
fStack116 = fStack100;
fStack112 = fStack96;
fStack108 = fStack92;
}
}
else {
uVar8 = param_1[1];
if (uVar8 == 0) {
FUN_1401adb90(&local_68,*(undefined8 *)(param_1 + 6));
local_78 = local_68;
fStack116 = fStack100;
fStack112 = fStack96;
fStack108 = fStack92;
}
else {
if (uVar8 < *param_1) {
iVar4 = *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar8 - 1) * 4);
lVar9 = *(longlong *)(param_1 + 6) + (ulonglong)uVar8 * 6;
fVar16 = (float)(ulonglong)(uint)(iVar3 - iVar4) /
         (float)(ulonglong)
                 (uint)(*(int *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4) - iVar4);
FUN_1401adb90(&local_68,lVar9 + 6);
FUN_1401adb90(&local_78,lVar9);
FUN_1401adb90(&local_58,lVar9 + -6);
FUN_1401adb90(&local_48,lVar9 + -0xc);
fVar14 = fVar16 * fVar16;
fVar12 = fVar14 * fVar16 * 1.5;
fVar13 = fVar14 * fVar16 * 0.5;
fVar11 = (fVar14 * 2.0 - fVar12) + fVar16 * 0.5;
fVar15 = fVar13 - fVar14 * 0.5;
fVar13 = (fVar14 - fVar13) - fVar16 * 0.5;
fVar12 = (fVar12 - fVar14 * 2.5) + 1.0;
*param_2 = CONCAT412(fVar15 * fStack92 +
                     fVar11 * fStack108 + fVar12 * fStack76 + fVar13 * fStack60,
                     CONCAT48(fVar15 * fStack96 +
                              fVar11 * fStack112 + fVar12 * fStack80 + fVar13 * fStack64,
                              CONCAT44(fVar15 * fStack100 +
                                       fVar11 * fStack116 +
                                       fVar12 * fStack84 + fVar13 * fStack68,
                                       fVar15 * local_68 +
                                       fVar11 * local_78 +
                                       fVar12 * local_58 + fVar13 * local_48)));
return param_2;
}
FUN_1401adb90(&local_48,*(longlong *)(param_1 + 6) + (ulonglong)(*param_1 - 1) * 6);
local_78 = local_48;
fStack116 = fStack68;
fStack112 = fStack64;
fStack108 = fStack60;
}
}
*param_2 = CONCAT412(fStack108,CONCAT48(fStack112,CONCAT44(fStack116,local_78)));
return param_2;
}



void FUN_140785050(uint *param_1,uint param_2,uint *param_3)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    ulonglong uVar8;

    uVar2 = param_1[1];
    if ((uVar2 != 0) &&
        (uVar8 = (ulonglong)((param_1[2] - 1) + uVar2 & *param_1 - 1),
                (int)(param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar8 * 4)) < 0)) {
        param_2 = *(uint *)(*(longlong *)(param_1 + 4) + uVar8 * 4);
    }
    uVar3 = *param_1;
    if (uVar2 == uVar3) {
        if (uVar3 == 0) {
            uVar3 = 0x10;
        }
        else {
            uVar3 = uVar3 * 2;
        }
        uVar4 = SUB168(ZEXT816(4) * ZEXT416(uVar3),0);
        if (SUB168(ZEXT816(4) * ZEXT416(uVar3) >> 0x40,0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        lVar5 = FUN_14018b280(uVar4,8);
        lVar6 = FUN_14018b280();
        uVar2 = param_1[1];
        uVar7 = *param_1 - param_1[2];
        if (uVar2 < uVar7) {
            uVar7 = uVar2;
        }
        lVar1 = (ulonglong)uVar7 * 4;
        FUN_1407db590(lVar5,*(longlong *)(param_1 + 4) + (ulonglong)param_1[2] * 4,lVar1);
        FUN_1407db590(lVar1 + lVar5,*(undefined8 *)(param_1 + 4),(ulonglong)(uVar2 - uVar7) * 4);
        lVar1 = (ulonglong)uVar7 * 0xc;
        FUN_1407db590(lVar6,*(longlong *)(param_1 + 6) + (ulonglong)param_1[2] * 0xc,lVar1);
        FUN_1407db590(lVar1 + lVar6,*(undefined8 *)(param_1 + 6),(ulonglong)(uVar2 - uVar7) * 0xc);
        FUN_14018b900(*(undefined8 *)(param_1 + 4),0);
        FUN_14018b900(*(undefined8 *)(param_1 + 6),0);
        *(longlong *)(param_1 + 4) = lVar5;
        *(longlong *)(param_1 + 6) = lVar6;
        *param_1 = uVar3;
        param_1[2] = 0;
    }
    uVar8 = (ulonglong)(param_1[2] + param_1[1] & *param_1 - 1);
    *(uint *)(*(longlong *)(param_1 + 4) + uVar8 * 4) = param_2;
    lVar5 = *(longlong *)(param_1 + 6);
    *(uint *)(lVar5 + uVar8 * 0xc) = *param_3;
    *(uint *)(lVar5 + 4 + uVar8 * 0xc) = param_3[1];
    *(uint *)(lVar5 + 8 + uVar8 * 0xc) = param_3[2];
    if (param_1[1] == 0) {
        param_1[8] = param_2;
        param_1[9] = *param_3;
        param_1[10] = param_3[1];
        param_1[0xb] = param_3[2];
    }
    param_1[1] = param_1[1] + 1;
    return;
}



undefined4 * FUN_140785230(longlong param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
    uint uVar1;
    undefined4 *puVar2;
    int iVar3;
    float extraout_XMM0_Da;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float local_88;
    float local_84;
    float local_80;
    float local_78;
    float local_74;
    float local_70;

    if (param_4 == 0) {
        FUN_140787350(param_1,&local_88,*(undefined4 *)(param_1 + 0x20));
        FUN_140787350(param_1,&local_78,param_3);
        uVar1 = FUN_1408fc7f0();
        local_84 = *(float *)(param_1 + 0x28) - local_84;
        fVar7 = ((*(float *)(param_1 + 0x2c) - local_80) + 3.141593) * 0.1591549;
        if (1.570796 <= local_84) {
            local_84 = 1.570796;
        }
        fVar6 = -1.570796;
        if (-1.570796 <= local_84) {
            fVar6 = local_84;
        }
        fVar5 = ((*(float *)(param_1 + 0x24) - local_88) + 3.141593) * 0.1591549;
        iVar3 = (int)fVar5;
        fVar4 = fVar5;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar5)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar5,fVar5)));
            uVar1 = uVar1 & 1;
            fVar4 = (float)(iVar3 - uVar1);
        }
        iVar3 = (int)fVar7;
        fVar5 = fVar7;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar7)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar7,fVar7)));
            uVar1 = uVar1 & 1;
            fVar5 = (float)(iVar3 - uVar1);
        }
        fVar6 = fVar6 * extraout_XMM0_Da;
        fVar7 = (((fVar5 - fVar4) * 6.283185 - 3.141593) * extraout_XMM0_Da + 3.141593) * 0.1591549;
        if (1.570796 <= fVar6) {
            fVar6 = 1.570796;
        }
        fVar4 = -1.570796;
        if (-1.570796 <= fVar6) {
            fVar4 = fVar6;
        }
        iVar3 = (int)fVar7;
        fVar5 = (((fVar7 - fVar5) * 6.283185 - 3.141593) * extraout_XMM0_Da + 3.141593) * 0.1591549;
        fVar6 = fVar7;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar7)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar7,fVar7)));
            uVar1 = uVar1 & 1;
            fVar6 = (float)(iVar3 - uVar1);
        }
        iVar3 = (int)fVar5;
        fVar7 = fVar5;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar5)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar5,fVar5)));
            uVar1 = uVar1 & 1;
            fVar7 = (float)(iVar3 - uVar1);
        }
        local_74 = local_74 + fVar4;
        fVar7 = (local_70 + ((fVar5 - fVar7) * 6.283185 - 3.141593) + 3.141593) * 0.1591549;
        if (1.570796 <= local_74) {
            local_74 = 1.570796;
        }
        fVar4 = -1.570796;
        if (-1.570796 <= local_74) {
            fVar4 = local_74;
        }
        fVar5 = (local_78 + ((fVar7 - fVar6) * 6.283185 - 3.141593) + 3.141593) * 0.1591549;
        iVar3 = (int)fVar5;
        fVar6 = fVar5;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar5)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar5,fVar5)));
            uVar1 = uVar1 & 1;
            fVar6 = (float)(iVar3 - uVar1);
        }
        iVar3 = (int)fVar7;
        fVar5 = fVar7;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar7)) {
            uVar1 = movmskps(uVar1,ZEXT816(CONCAT44(fVar7,fVar7)));
            fVar5 = (float)(iVar3 - (uVar1 & 1));
        }
        *(float *)(param_1 + 0x24) = (fVar5 - fVar6) * 6.283185 - 3.141593;
        *(float *)(param_1 + 0x28) = fVar4;
        *(float *)(param_1 + 0x2c) = (fVar7 - fVar5) * 6.283185 - 3.141593;
    }
    else {
        puVar2 = (undefined4 *)FUN_140787350(param_1,&local_78);
        *(undefined4 *)(param_1 + 0x24) = *puVar2;
        *(undefined4 *)(param_1 + 0x28) = puVar2[1];
        *(undefined4 *)(param_1 + 0x2c) = puVar2[2];
    }
    *(undefined4 *)(param_1 + 0x20) = param_3;
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    param_2[1] = *(undefined4 *)(param_1 + 0x28);
    param_2[2] = *(undefined4 *)(param_1 + 0x2c);
    return param_2;
}



undefined8
FUN_1407855d0(uint *param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,
              undefined8 param_6,uint param_7,longlong param_8)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    int *piVar6;
    int *piVar7;
    ulonglong uVar8;

    uVar5 = (ulonglong)param_2;
    if (param_5 == 0) {
        if (param_2 == 0) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -8) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -4) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (*(longlong *)(param_1 + 4) - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (4 - param_3) + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar6 + 4;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(0xc) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(0xc) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 0xc);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
        }
        *param_1 = param_2;
    }
    else {
        if ((param_5 != 1) || (param_2 < 3)) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        piVar7 = piVar6 + 4;
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + 4 + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0x10 + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0xc + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar7;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 4) + 4;
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(0xc) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(0xc) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            *(undefined8 *)(param_1 + 6) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 0xc);
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 8) + 0xc;
        }
        *param_1 = param_2 - 2;
    }
    param_1[1] = 0;
    param_1[10] = param_5;
    param_1[0xc] = param_7;
    param_1[0xb] = 0;
    return 0;
}



undefined4 * FUN_140785ad0(uint *param_1,undefined4 *param_2,int param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    longlong in_stack_00000038;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;

    iVar8 = **(int **)(param_1 + 2);
    iVar7 = (*(int **)(param_1 + 2))[*param_1 - 1] - iVar8;
    param_3 = (param_1[0xc] - iVar8) + param_3;
    iVar13 = 0;
    iVar6 = iVar13;
    if (iVar7 < 1) {
        if ((in_stack_00000038 != 0) && (*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
            FUN_14079ab20();
        }
        goto switchD_140785b30_caseD_b;
    }
    iVar6 = param_3;
    switch(param_1[0xb]) {
        case 0:
        case 9:
            if (((in_stack_00000038 != 0) && (iVar7 <= param_3)) &&
                (*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            iVar6 = iVar13;
            if ((-1 < param_3) && (iVar6 = param_3, iVar7 < param_3)) {
                iVar6 = iVar7;
            }
            break;
        case 1:
        case 6:
        case 8:
            if (param_3 < 0) {
                iVar6 = (iVar7 * 2 - (-1 - param_3) % (iVar7 * 2)) + -1;
            }
            else {
                LAB_140785bb9:
                iVar6 = param_3 % (iVar7 * 2);
            }
            goto LAB_140785bbe;
        case 2:
            if (param_3 < 0) {
                iVar6 = (iVar7 - (-1 - param_3) % iVar7) + -1;
            }
            else {
                iVar6 = param_3 % iVar7;
            }
            break;
        case 3:
        case 10:
            if (((in_stack_00000038 != 0) && (iVar7 <= param_3)) &&
                (*(longlong *)(in_stack_00000038 + 0x18) != 0)) {
                FUN_14079ab20();
            }
            param_3 = iVar7 - param_3;
            iVar6 = iVar13;
            if ((-1 < param_3) && (iVar6 = param_3, iVar7 < param_3)) {
                iVar6 = iVar7;
            }
            break;
        case 4:
        case 7:
            param_3 = iVar7 - param_3;
            if (-1 < param_3) goto LAB_140785bb9;
            iVar6 = (iVar7 * 2 - (-1 - param_3) % (iVar7 * 2)) + -1;
        LAB_140785bbe:
            if (iVar7 <= iVar6) {
                iVar6 = iVar7 * 2 - iVar6;
            }
            break;
        case 5:
            param_3 = iVar7 - param_3;
            if (param_3 < 0) {
                iVar6 = (iVar7 - (-1 - param_3) % iVar7) + -1;
            }
            else {
                iVar6 = param_3 % iVar7;
            }
    }
    switchD_140785b30_caseD_b:
    uVar12 = param_1[1];
    iVar6 = iVar6 + iVar8;
    if (uVar12 == 0) {
        LAB_140785cb2:
        uVar10 = *param_1;
        if ((uVar12 < uVar10) &&
            (lVar3 = *(longlong *)(param_1 + 2), -1 < iVar6 - *(int *)(lVar3 + (ulonglong)uVar12 * 4))) {
            uVar12 = uVar12 + 1;
            iVar8 = 1;
            uVar11 = uVar12;
            while ((uVar12 < uVar10 && (-1 < iVar6 - *(int *)(lVar3 + (ulonglong)uVar12 * 4)))) {
                iVar8 = iVar8 * 2;
                uVar11 = uVar12 + 1;
                uVar12 = uVar12 + iVar8;
            }
            if (uVar10 < uVar12) {
                uVar12 = uVar10;
            }
            if (uVar11 < uVar12) {
                do {
                    uVar10 = uVar12 + uVar11 >> 1;
                    if (-1 < iVar6 - *(int *)(lVar3 + (ulonglong)uVar10 * 4)) {
                        uVar11 = uVar10 + 1;
                        uVar10 = uVar12;
                    }
                    uVar12 = uVar10;
                } while (uVar11 < uVar12);
            }
            param_1[1] = uVar11;
        }
    }
    else {
        lVar3 = *(longlong *)(param_1 + 2);
        uVar10 = uVar12 - 1;
        uVar5 = (ulonglong)uVar10;
        if (-1 < iVar6 - *(int *)(lVar3 + uVar5 * 4)) goto LAB_140785cb2;
        uVar9 = uVar5;
        iVar8 = 1;
        while (0 < (int)uVar10) {
            uVar10 = (uint)uVar5;
            uVar12 = uVar10 - 1;
            if (-1 < iVar6 - *(int *)(lVar3 + (ulonglong)uVar12 * 4)) break;
            uVar10 = uVar10 + iVar8 * -2;
            uVar5 = (ulonglong)uVar10;
            uVar9 = (ulonglong)uVar12;
            iVar8 = iVar8 * 2;
        }
        if ((int)uVar10 < 0) {
            uVar10 = 0;
        }
        if (uVar10 < (uint)uVar9) {
            do {
                uVar12 = uVar10 + (int)uVar9 >> 1;
                if (iVar6 - *(int *)(lVar3 + (ulonglong)uVar12 * 4) < 0) {
                    uVar9 = (ulonglong)uVar12;
                }
                else {
                    uVar10 = uVar12 + 1;
                }
            } while (uVar10 < (uint)uVar9);
        }
        param_1[1] = uVar10;
    }
    if (param_1[10] == 0) {
        uVar12 = param_1[1];
        uVar5 = (ulonglong)uVar12;
        if (uVar12 != 0) {
            uVar10 = *param_1;
            if (uVar12 < uVar10) {
                lVar3 = *(longlong *)(param_1 + 6);
                uVar9 = (ulonglong)(uVar12 - 1);
                local_38 = *(undefined4 *)(lVar3 + uVar5 * 0xc);
                local_34 = *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc);
                local_30 = *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc);
                local_2c = *(undefined4 *)(lVar3 + uVar9 * 0xc);
                local_28 = *(undefined4 *)(lVar3 + 4 + uVar9 * 0xc);
                local_24 = *(undefined4 *)(lVar3 + 8 + uVar9 * 0xc);
                FUN_1401b3250(param_2,&local_2c,&local_38);
                return param_2;
            }
            LAB_140785e5a:
            uVar5 = (ulonglong)(uVar10 - 1);
            lVar3 = *(longlong *)(param_1 + 6);
            uVar1 = *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc);
            uVar2 = *(undefined4 *)(lVar3 + 8 + uVar5 * 0xc);
            *param_2 = *(undefined4 *)(lVar3 + uVar5 * 0xc);
            param_2[1] = uVar1;
            param_2[2] = uVar2;
            return param_2;
        }
    }
    else {
        uVar12 = param_1[1];
        if (uVar12 != 0) {
            uVar10 = *param_1;
            if (uVar12 < uVar10) {
                lVar3 = *(longlong *)(param_1 + 6) + ((ulonglong)uVar12 * 3 + -3) * 4;
                FUN_1401b3250(&local_2c,lVar3,lVar3 + 0xc);
                *param_2 = local_2c;
                param_2[1] = local_28;
                param_2[2] = local_24;
                return param_2;
            }
            goto LAB_140785e5a;
        }
    }
    puVar4 = *(undefined4 **)(param_1 + 6);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return param_2;
}



void FUN_140785ed0(int *param_1,int param_2,int *param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;

    iVar2 = param_1[1];
    if ((iVar2 != 0) &&
        (uVar10 = (ulonglong)(param_1[2] + -1 + iVar2 & *param_1 - 1U),
                param_2 - *(int *)(*(longlong *)(param_1 + 4) + uVar10 * 4) < 0)) {
        param_2 = *(int *)(*(longlong *)(param_1 + 4) + uVar10 * 4);
    }
    iVar3 = *param_1;
    if (iVar2 == iVar3) {
        uVar10 = (ulonglong)(uint)(iVar3 * 2);
        if (iVar3 == 0) {
            uVar10 = 0x10;
        }
        uVar4 = SUB168(ZEXT816(4) * ZEXT816(uVar10),0);
        if (SUB168(ZEXT816(4) * ZEXT816(uVar10) >> 0x40,0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        lVar5 = FUN_14018b280(uVar4,8);
        lVar6 = FUN_14018b280();
        uVar8 = param_1[1];
        uVar7 = *param_1 - param_1[2];
        if (uVar8 < uVar7) {
            uVar7 = uVar8;
        }
        lVar1 = (ulonglong)uVar7 * 4;
        FUN_1407db590(lVar5,*(longlong *)(param_1 + 4) + (ulonglong)(uint)param_1[2] * 4,lVar1);
        lVar9 = (ulonglong)(uVar8 - uVar7) << 2;
        FUN_1407db590(lVar1 + lVar5,*(undefined8 *)(param_1 + 4),lVar9);
        FUN_1407db590(lVar6,*(longlong *)(param_1 + 6) + (ulonglong)(uint)param_1[2] * 4,lVar1);
        FUN_1407db590(lVar1 + lVar6,*(undefined8 *)(param_1 + 6),lVar9);
        FUN_14018b900(*(undefined8 *)(param_1 + 4));
        FUN_14018b900();
        *param_1 = (int)uVar10;
        *(longlong *)(param_1 + 4) = lVar5;
        *(longlong *)(param_1 + 6) = lVar6;
        param_1[2] = 0;
    }
    uVar8 = param_1[2] + param_1[1] & *param_1 - 1U;
    *(int *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar8 * 4) = param_2;
    *(int *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar8 * 4) = *param_3;
    if (param_1[1] == 0) {
        param_1[8] = param_2;
        param_1[9] = *param_3;
    }
    param_1[1] = param_1[1] + 1;
    return;
}



float FUN_140786070(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
    uint uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    if (param_3 != 0) {
        fVar2 = (float)FUN_140787470();
        *(int *)(param_1 + 0x20) = param_2;
        *(float *)(param_1 + 0x24) = fVar2;
        return fVar2;
    }
    fVar2 = (float)FUN_140787470(param_1,*(undefined4 *)(param_1 + 0x20),0,param_4,
                                 CONCAT412(in_XMM7_Dd,
                                           CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                                 CONCAT412(in_XMM6_Dd,
                                           CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    fVar3 = (float)FUN_140787470(param_1,param_2);
    uVar1 = param_2 - *(int *)(param_1 + 0x20);
    fVar4 = 0.0;
    if (-1 < (int)uVar1) {
        fVar4 = (float)(ulonglong)uVar1 * 0.001;
    }
    fVar4 = (float)FUN_1408fc7f0(fVar4 * -0.6931472 * 6.024096);
    *(int *)(param_1 + 0x20) = param_2;
    fVar3 = (*(float *)(param_1 + 0x24) - fVar2) * fVar4 + fVar3;
    *(float *)(param_1 + 0x24) = fVar3;
    return fVar3;
}



undefined8
FUN_140786120(uint *param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,
              undefined8 param_6,uint param_7,longlong param_8)

{
    uint uVar1;
    undefined8 uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    int *piVar6;
    int *piVar7;
    ulonglong uVar8;

    uVar5 = (ulonglong)param_2;
    if (param_5 == 0) {
        if (param_2 == 0) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -8) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + -param_3 + -4) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (*(longlong *)(param_1 + 4) - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + (4 - param_3) + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar6 + 4;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(2) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(2) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 2);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 8);
        }
        *param_1 = param_2;
    }
    else {
        if ((param_5 != 1) || (param_2 < 3)) {
            return 0x80070057;
        }
        if (param_3 != 0) {
            uVar2 = SUB168(ZEXT816(4) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(4) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2);
            *(undefined8 *)(param_1 + 4) = uVar2;
            if (param_8 == 0) {
                FUN_1407db590(uVar2,param_3,uVar5 * 4);
            }
            else {
                uVar4 = 0;
                lVar3 = 0;
                if (3 < (int)param_2) {
                    uVar1 = (param_2 - 4 >> 2) + 1;
                    uVar4 = uVar1 * 4;
                    uVar8 = (ulonglong)uVar1;
                    lVar3 = (ulonglong)uVar1 * 4;
                    piVar6 = (int *)(param_3 + 8);
                    do {
                        piVar7 = piVar6 + 4;
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-2] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((longlong)piVar6 + *(longlong *)(param_1 + 4) + 4 + (-8 - param_3)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[-1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0x10 + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*piVar6 -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        *(int *)((*(longlong *)(param_1 + 4) - param_3) + -0xc + (longlong)piVar7) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(piVar6[1] -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        piVar6 = piVar7;
                    } while (uVar8 != 0);
                }
                if (uVar4 < param_2) {
                    uVar8 = (ulonglong)(param_2 - uVar4);
                    lVar3 = lVar3 * 4;
                    do {
                        *(int *)(lVar3 + *(longlong *)(param_1 + 4)) =
                                (int)(longlong)
                                        ((float)(ulonglong)
                                                (uint)(*(int *)(lVar3 + param_3) -
                                                       *(int *)(param_8 + 0x10 + (ulonglong)*(uint *)(param_8 + 4) * 8)
                                        ) * *(float *)(param_8 + 8) + *(float *)(param_8 + 0xc)) +
                                *(int *)(param_8 + 0x14 + (ulonglong)*(uint *)(param_8 + 4) * 8);
                        uVar8 = uVar8 - 1;
                        lVar3 = lVar3 + 4;
                    } while (uVar8 != 0);
                }
            }
            *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 4) + 4;
        }
        if (param_4 != 0) {
            uVar2 = SUB168(ZEXT816(2) * ZEXT816(uVar5),0);
            if (SUB168(ZEXT816(2) * ZEXT816(uVar5) >> 0x40,0) != 0) {
                uVar2 = 0xffffffffffffffff;
            }
            uVar2 = FUN_14018b280(uVar2,8);
            *(undefined8 *)(param_1 + 8) = uVar2;
            *(undefined8 *)(param_1 + 6) = uVar2;
            FUN_1407db590(uVar2,param_4,uVar5 * 2);
            *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 8) + 2;
        }
        *param_1 = param_2 - 2;
    }
    param_1[1] = 0;
    param_1[10] = param_5;
    param_1[0xc] = param_7;
    param_1[0xb] = 0;
    return 0;
}

