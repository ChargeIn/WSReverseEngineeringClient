//
// Created by flop on 04.04.22.
//
#include "../../include.h"

ulonglong FUN_140853b00(undefined4 param_1)

{
    longlong *plVar1;
    ulonglong uVar2;

    plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_1,0);
    if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x140))(plVar1);
        if ((int)uVar2 != 1) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            uVar2 = uVar2 & 0xffffffff;
        }
        return uVar2;
    }
    return 2;
}



int FUN_140853b70(longlong *param_1,int **param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;

    if (*(char *)(DAT_140c61b58 + 0x8f8) == '\0') {
        return 1;
    }
    iVar1 = **param_2;
    *param_2 = *param_2 + 1;
    if (iVar1 == 0) {
        return 1;
    }
    if (param_1[0xd] == 0) {
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,8);
        param_1[0xd] = (longlong)puVar2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
        }
        if (param_1[0xd] == 0) {
            return 0x34;
        }
    }
    plVar3 = (longlong *)FUN_140830f00(DAT_140c61ba8,iVar1,1);
    iVar1 = 2;
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if (iVar1 == 1) {
            return 1;
        }
    }
    return iVar1;
}



undefined8 FUN_140853c70(undefined8 param_1,uint **param_2)

{
    undefined uVar1;
    ushort uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;

    uVar11 = 0;
    uVar3 = **param_2;
    *param_2 = *param_2 + 1;
    if (uVar3 != 0) {
        do {
            uVar9 = **param_2;
            *param_2 = *param_2 + 1;
            lVar7 = FUN_1408518a0(param_1,uVar9,1);
            if (lVar7 == 0) {
                return 2;
            }
            uVar10 = 0;
            uVar1 = *(undefined *)*param_2;
            *param_2 = (uint *)((longlong)*param_2 + 1);
            *(undefined *)(lVar7 + 0x48) = uVar1;
            uVar2 = *(ushort *)*param_2;
            *param_2 = (uint *)((longlong)*param_2 + 2);
            uVar9 = (uint)uVar2;
            if (uVar9 != 0) {
                do {
                    puVar6 = *param_2;
                    uVar4 = *puVar6;
                    *param_2 = puVar6 + 1;
                    uVar5 = puVar6[1];
                    *param_2 = puVar6 + 2;
                    uVar8 = FUN_1408516e0(lVar7,uVar5,uVar4,1);
                    if ((int)uVar8 != 1) {
                        return uVar8;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar9);
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar3);
    }
    return 1;
}



undefined4 FUN_140853d70(longlong *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong *plVar3;
    LPCRITICAL_SECTION lpCriticalSection;
    undefined8 uVar4;

    lpCriticalSection =
            (LPCRITICAL_SECTION)
                    FUN_140830ed0(DAT_140c61ba8,(*(byte *)((longlong)param_1 + 0x5b) >> 1 & 1) != 0);
    EnterCriticalSection(lpCriticalSection);
    plVar3 = param_1 + 1;
    *(int *)plVar3 = *(int *)plVar3 + -1;
    uVar1 = *(undefined4 *)(param_1 + 1);
    if (*(int *)plVar3 == 0) {
        uVar2 = *(undefined4 *)(param_1 + 3);
        uVar4 = FUN_140830ed0(DAT_140c61ba8,(*(byte *)((longlong)param_1 + 0x5b) >> 1 & 1) != 0);
        FUN_140868870(uVar4,uVar2);
        (**(code **)(*param_1 + 0x28))(param_1);
        plVar3 = (longlong *)param_1[8];
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
        }
        plVar3 = (longlong *)param_1[9];
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
        }
        uVar2 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar2,param_1);
    }
    LeaveCriticalSection(lpCriticalSection);
    return uVar1;
}



void FUN_140853e50(longlong *param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    char local_res8;

    if (*(char *)((longlong)param_1 + 0x1a) == '\0') {
        puVar2 = (undefined8 *)FUN_140850ba0(param_1,*(undefined8 *)(param_2 + 0x184));
    }
    else {
        puVar2 = (undefined8 *)FUN_140850c90();
    }
    if (local_res8 != '\0') {
        if (puVar2 < (undefined8 *)(param_1[1] + -8)) {
            puVar5 = puVar2;
            for (lVar3 = ((ulonglong)((longlong)(undefined8 *)(param_1[1] + -8) + (-1 - (longlong)puVar2))
                    >> 3) + 1; puVar2 = puVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar5 = *puVar2;
                puVar5 = puVar5 + 1;
            }
        }
        param_1[1] = param_1[1] + -8;
    }
    if (param_1[1] == *param_1) {
        if (param_3 == 1) {
            FUN_1408447a0(param_1);
        }
        else if (param_3 == 2) {
            plVar1 = DAT_140c61fd0;
            plVar6 = (longlong *)0x0;
            if (DAT_140c61fd0 != (longlong *)0x0) {
                while (plVar4 = plVar1, plVar4 != param_1) {
                    plVar1 = (longlong *)plVar4[4];
                    plVar6 = plVar4;
                    if ((longlong *)plVar4[4] == (longlong *)0x0) {
                        return;
                    }
                }
                if (plVar4 != (longlong *)0x0) {
                    if (plVar4 == DAT_140c61fd0) {
                        DAT_140c61fd0 = (longlong *)plVar4[4];
                        return;
                    }
                    plVar6[4] = plVar4[4];
                }
            }
            return;
        }
    }
    return;
}



undefined4 FUN_140853f00(longlong *param_1,uint param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong)param_2;
    if (3 < param_2) {
        return 0x1f;
    }
    lVar1 = param_1[6];
    if (lVar1 == 0) {
        return 2;
    }
    if ((*(char *)(lVar1 + 1 + uVar2 * 8) != '\0') || (*(int *)(lVar1 + 4 + uVar2 * 8) != 0)) {
        *(undefined *)(lVar1 + 1 + uVar2 * 8) = 0;
        *(undefined4 *)(lVar1 + 4 + uVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x198))(param_1);
        (**(code **)(*param_1 + 0x108))(param_1,uVar2);
    }
    return 1;
}



undefined8 * FUN_140853f80(longlong param_1,int param_2)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 != puVar5) {
        do {
            if (*(int *)puVar2 == param_2) break;
            puVar2 = puVar2 + 3;
        } while (puVar2 != puVar5);
        if ((puVar2 != puVar5) && (pplVar1 = (longlong **)(puVar2 + 1), pplVar1 != (longlong **)0x0)) {
            FUN_140869260(*pplVar1);
            (**(code **)(**pplVar1 + 0x10))();
            puVar5 = *(undefined8 **)(param_1 + 0x28);
            puVar2 = *(undefined8 **)(param_1 + 0x30);
            if (puVar5 != puVar2) {
                do {
                    if (*(int *)puVar5 == param_2) break;
                    puVar5 = puVar5 + 3;
                } while (puVar5 != puVar2);
                if (puVar5 != puVar2) {
                    if (puVar5 < puVar2 + -3) {
                        uVar3 = (longlong)(puVar2 + -3) + (-1 - (longlong)puVar5);
                        puVar2 = (undefined8 *)(uVar3 * -0x5555555555555555);
                        puVar4 = puVar5 + 3;
                        for (uVar3 = (uVar3 / 0x18 + 1) * 3 & 0x1fffffffffffffff; uVar3 != 0; uVar3 = uVar3 - 1)
                        {
                            *puVar5 = *puVar4;
                            puVar4 = puVar4 + 1;
                            puVar5 = puVar5 + 1;
                        }
                    }
                    *(longlong *)(param_1 + 0x30) =
                            (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x30));
                }
            }
        }
    }
    return puVar2;
}



void FUN_140854040(longlong *param_1,char param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;

    puVar3 = (undefined8 *)param_1[4];
    if (puVar3 != (undefined8 *)0x0) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_140854090;
        do {
            param_1[4] = puVar3[2];
            LAB_140854090:
            FUN_14082a860(DAT_140c61b78,*(undefined4 *)(puVar3 + 8),puVar3);
            puVar4 = (undefined4 *)puVar3[5];
            iVar1 = (int)(puVar3[6] - (longlong)puVar4 >> 0x3f);
            if ((int)((puVar3[6] - (longlong)puVar4) / 0x18) + iVar1 != iVar1) {
                do {
                    FUN_140853f80(puVar3,*puVar4);
                    puVar4 = (undefined4 *)puVar3[5];
                    iVar1 = (int)(puVar3[6] - (longlong)puVar4 >> 0x3f);
                } while ((int)((puVar3[6] - (longlong)puVar4) / 0x18) + iVar1 != iVar1);
            }
            uVar2 = DAT_140c10f20;
            *puVar3 = &PTR_FUN_1409a3618;
            if (puVar3[5] != 0) {
                puVar3[6] = puVar3[5];
                FUN_140881720(DAT_140c10f20);
                puVar3[5] = 0;
                puVar3[6] = 0;
                *(undefined4 *)(puVar3 + 7) = 0;
            }
            if (puVar3[4] != 0) {
                FUN_140881720(DAT_140c10f20);
            }
            puVar3[4] = 0;
            FUN_140881720(uVar2);
            puVar3 = (undefined8 *)param_1[4];
        } while (puVar3 != (undefined8 *)0x0);
        if (param_2 != '\0') {
            (**(code **)(*param_1 + 0x1a0))(param_1);
        }
    }
    return;
}



undefined4 FUN_140854180(longlong param_1,uint param_2,char param_3)

{
    longlong lVar1;
    undefined2 *puVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 == 0) {
        if (param_3 == '\0') {
            return 1;
        }
        puVar2 = (undefined2 *)FUN_1408819f0(DAT_140c10f20,0x24);
        *(undefined2 **)(param_1 + 0x30) = puVar2;
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar2[4] = 0;
            *(undefined4 *)(puVar2 + 6) = 0;
            puVar2[8] = 0;
            *(undefined4 *)(puVar2 + 10) = 0;
            puVar2[0xc] = 0;
            *(undefined4 *)(puVar2 + 0xe) = 0;
            *(undefined *)(puVar2 + 0x10) = 0;
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (lVar3 == 0) {
            return 0x34;
        }
    }
    lVar1 = (ulonglong)param_2 * 8;
    *(char *)(lVar1 + lVar3) = param_3;
    if ((param_3 != '\0') && (*(int *)(lVar1 + 4 + *(longlong *)(param_1 + 0x30)) != 0)) {
        FUN_140853f00(param_1,(ulonglong)param_2);
    }
    return 1;
}



void FUN_140854240(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    undefined uVar1;

    if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x20);
    }
    FUN_140851a80(param_1,uVar1,param_2,param_3,1);
    return;
}



void FUN_140854270(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;

    local_20 = param_5;
    local_1c = 0;
    local_1a = 0;
    local_38[0] = 2;
    local_30 = param_2;
    local_28 = param_3;
    local_24 = param_4;
    (**(code **)(*param_1 + 0x80))(param_1,local_38);
    return;
}



void FUN_1408542c0(longlong *param_1,int param_2,int param_3)

{
    byte *pbVar1;
    int *piVar2;
    uint uVar3;
    int *piVar4;
    int local_res10 [2];

    pbVar1 = (byte *)param_1[10];
    piVar4 = (int *)0x0;
    local_res10[0] = *(int *)(&DAT_140c11000 + (longlong)param_2 * 4);
    if (pbVar1 != (byte *)0x0) {
        piVar2 = piVar4;
        do {
            uVar3 = (int)piVar2 + 1;
            if (pbVar1[uVar3] == (byte)param_2) {
                piVar4 = (int *)(pbVar1 + (longlong)piVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            piVar2 = (int *)(ulonglong)uVar3;
        } while (uVar3 < *pbVar1);
    }
    piVar2 = local_res10;
    if (piVar4 != (int *)0x0) {
        piVar2 = piVar4;
    }
    if (*piVar2 != param_3) {
        FUN_14084fb50(param_1 + 10,param_2,param_3);
        (**(code **)(*param_1 + 0x198))(param_1);
    }
    return;
}



void FUN_140854370(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4,int param_5
)

{
    byte *pbVar1;
    float *pfVar2;
    uint uVar3;
    float *pfVar4;
    float local_res10 [6];

    pbVar1 = (byte *)param_4[10];
    pfVar4 = (float *)0x0;
    local_res10[0] = *(float *)(&DAT_140c11000 + (longlong)param_5 * 4);
    if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar4;
        do {
            uVar3 = (int)pfVar2 + 1;
            if (pbVar1[uVar3] == (byte)param_5) {
                pfVar4 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            pfVar2 = (float *)(ulonglong)uVar3;
        } while (uVar3 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar4 != (float *)0x0) {
        pfVar2 = pfVar4;
    }
    if (*pfVar2 != param_3) {
        local_res10[0] = param_3;
        FUN_14084fb50(param_4 + 10,param_5,param_3);
        (**(code **)(*param_4 + 0x198))(param_4);
    }
    return;
}



undefined4 FUN_140854420(longlong *param_1,uint param_2,int param_3,char param_4)

{
    undefined4 uVar1;
    undefined2 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = (ulonglong)param_2;
    if (param_2 < 4) {
        lVar3 = param_1[6];
        if (lVar3 == 0) {
            puVar2 = (undefined2 *)FUN_1408819f0(DAT_140c10f20,0x24);
            param_1[6] = (longlong)puVar2;
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
                *(undefined4 *)(puVar2 + 2) = 0;
                puVar2[4] = 0;
                *(undefined4 *)(puVar2 + 6) = 0;
                puVar2[8] = 0;
                *(undefined4 *)(puVar2 + 10) = 0;
                puVar2[0xc] = 0;
                *(undefined4 *)(puVar2 + 0xe) = 0;
                *(undefined *)(puVar2 + 0x10) = 0;
            }
            lVar3 = param_1[6];
            if (lVar3 == 0) {
                return 0x34;
            }
        }
        if ((*(char *)(lVar3 + 1 + uVar4 * 8) != param_4) ||
            (*(int *)(lVar3 + 4 + uVar4 * 8) != param_3)) {
            *(char *)(lVar3 + 1 + uVar4 * 8) = param_4;
            *(int *)(lVar3 + 4 + uVar4 * 8) = param_3;
            (**(code **)(*param_1 + 0x198))(param_1);
            (**(code **)(*param_1 + 0x108))(param_1,uVar4);
        }
        uVar1 = 1;
    }
    else {
        uVar1 = 0x1f;
    }
    return uVar1;
}



void FUN_1408544f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x260))();
    if (lVar1 != 0) {
        FUN_140854df0(param_1,lVar1,8,param_4,param_3,param_5,param_6);
    }
    return;
}



undefined8 FUN_140854560(undefined8 param_1,ushort **param_2,int *param_3)

{
    undefined uVar1;
    ushort uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    uint uVar7;
    ulonglong uVar8;

    uVar2 = **param_2;
    *param_2 = *param_2 + 1;
    if (uVar2 != 0) {
        uVar8 = (ulonglong)uVar2;
        do {
            puVar6 = (undefined4 *)*param_2;
            uVar3 = *puVar6;
            *param_2 = (ushort *)(puVar6 + 1);
            uVar4 = puVar6[1];
            *param_2 = (ushort *)(puVar6 + 2);
            uVar5 = puVar6[2];
            *param_2 = (ushort *)(puVar6 + 3);
            uVar1 = *(undefined *)(puVar6 + 3);
            *param_2 = (ushort *)((longlong)puVar6 + 0xd);
            uVar7 = (uint)*(ushort *)((longlong)puVar6 + 0xd);
            *param_2 = (ushort *)((longlong)puVar6 + 0xf);
            FUN_140854d30(param_1,uVar3,uVar4,uVar5,uVar1,(ushort *)((longlong)puVar6 + 0xf),uVar7);
            *param_2 = *param_2 + (ulonglong)uVar7 * 6;
            *param_3 = *param_3 + uVar7 * -0xc;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return 1;
}



void FUN_140854630(longlong param_1,byte param_2)

{
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xf7;
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | (param_2 & 1) << 3;
    return;
}



void FUN_140854640(longlong param_1,byte param_2)

{
    byte bVar1;
    longlong lVar2;
    longlong lVar3;
    bool bVar4;

    bVar1 = *(byte *)(param_1 + 0x5a);
    if ((bVar1 & 1) != param_2) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        *(byte *)(param_1 + 0x5a) = (bVar1 ^ param_2) & 1 ^ bVar1;
        if (lVar3 != 0) {
            bVar4 = *(char *)(lVar3 + 0x3a) == '\0';
            *(bool *)(lVar3 + 0x3a) = bVar4;
            if (bVar4) {
                FUN_140850e70();
            }
            else {
                FUN_140850d80();
            }
            lVar3 = **(longlong **)(param_1 + 0x38);
            if (lVar3 != (*(longlong **)(param_1 + 0x38))[1]) {
                do {
                    lVar2 = *(longlong *)(lVar3 + 8);
                    if (lVar2 != 0) {
                        bVar4 = *(char *)(lVar2 + 0x1a) == '\0';
                        *(bool *)(lVar2 + 0x1a) = bVar4;
                        if (bVar4) {
                            FUN_140850e70();
                        }
                        else {
                            FUN_140850d80();
                        }
                    }
                    lVar3 = lVar3 + 0x18;
                } while (lVar3 != *(longlong *)(*(longlong *)(param_1 + 0x38) + 8));
            }
        }
    }
    return;
}



ulonglong FUN_1408546e0(longlong *param_1,int **param_2,undefined8 param_3,char param_4)

{
    char cVar1;
    char cVar2;
    byte bVar3;
    int iVar4;
    int *piVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    bool bVar10;

    uVar7 = (**(code **)(*param_1 + 0x240))();
    uVar9 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 1) {
        return uVar7;
    }
    if (param_4 != '\0') {
        return uVar7;
    }
    iVar4 = **param_2;
    *param_2 = *param_2 + 1;
    if (iVar4 != 0) {
        plVar8 = (longlong *)FUN_140830f00(DAT_140c61ba8,iVar4,uVar7 & 0xffffffff);
        if (plVar8 == (longlong *)0x0) {
            return 2;
        }
        (**(code **)(*param_1 + 8))(param_1);
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,param_1);
        uVar9 = (ulonglong)uVar6;
        (**(code **)(*plVar8 + 0x10))();
        if (uVar6 != 1) {
            return uVar9;
        }
    }
    iVar4 = **param_2;
    *param_2 = *param_2 + 1;
    if ((iVar4 != 0) &&
        (plVar8 = (longlong *)FUN_140830f00(DAT_140c61ba8,iVar4,0), plVar8 != (longlong *)0x0)) {
        uVar6 = FUN_140851560(plVar8,param_1);
        uVar9 = (ulonglong)uVar6;
        (**(code **)(*plVar8 + 0x10))();
        if (uVar6 != 1) {
            return uVar9;
        }
    }
    piVar5 = *param_2;
    cVar1 = *(char *)piVar5;
    *param_2 = (int *)((longlong)piVar5 + 1);
    cVar2 = *(char *)((longlong)piVar5 + 1);
    *param_2 = (int *)((longlong)piVar5 + 2);
    bVar3 = *(byte *)((longlong)param_1 + 0x5a);
    if ((bool)(bVar3 >> 6 & 1) != (cVar1 != '\0')) {
        *(byte *)((longlong)param_1 + 0x5a) = ((cVar1 != '\0') << 6 ^ bVar3) & 0x40 ^ bVar3;
        (**(code **)(*param_1 + 0x198))();
    }
    bVar3 = *(byte *)((longlong)param_1 + 0x5a);
    bVar10 = cVar2 != '\0';
    if ((bool)(bVar3 >> 5 & 1) != bVar10) {
        *(byte *)((longlong)param_1 + 0x5a) = (bVar10 << 5 ^ bVar3) & 0x20 ^ bVar3;
        (**(code **)(*param_1 + 0x198))(param_1);
    }
    if ((int)uVar9 == 1) {
        uVar6 = (**(code **)(*param_1 + 0x238))(param_1,param_2,param_3);
        uVar9 = (ulonglong)uVar6;
        if (uVar6 == 1) {
            uVar6 = (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
            uVar9 = (ulonglong)uVar6;
            if (uVar6 == 1) {
                uVar6 = (**(code **)(*param_1 + 0x250))(param_1,param_2,param_3);
                uVar9 = (ulonglong)uVar6;
                if (uVar6 == 1) {
                    uVar6 = (**(code **)(*param_1 + 600))(param_1,param_2,param_3);
                    uVar9 = (ulonglong)uVar6;
                    if (uVar6 == 1) {
                        uVar6 = FUN_140853c70(param_1,param_2,param_3);
                        uVar9 = (ulonglong)uVar6;
                        if (uVar6 == 1) {
                            uVar6 = FUN_140854560(param_1,param_2,param_3);
                            uVar9 = (ulonglong)uVar6;
                            if (uVar6 == 1) {
                                uVar6 = FUN_140853b70(param_1,param_2,param_3);
                                uVar9 = (ulonglong)uVar6;
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar9;
}



void FUN_140854910(longlong param_1,byte param_2)

{
    byte bVar1;
    longlong lVar2;

    bVar1 = *(byte *)(param_1 + 0x5a);
    if ((bVar1 >> 1 & 1) != param_2) {
        *(byte *)(param_1 + 0x5a) = (param_2 * '\x02' ^ bVar1) & 2 ^ bVar1;
        if (*(longlong *)(param_1 + 0x38) != 0) {
            *(byte *)(*(longlong *)(param_1 + 0x38) + 0x3b) = param_2;
            lVar2 = **(longlong **)(param_1 + 0x38);
            if (lVar2 != (*(longlong **)(param_1 + 0x38))[1]) {
                do {
                    if (*(longlong *)(lVar2 + 8) != 0) {
                        *(byte *)(*(longlong *)(lVar2 + 8) + 0x1b) = param_2;
                    }
                    lVar2 = lVar2 + 0x18;
                } while (lVar2 != *(longlong *)(*(longlong *)(param_1 + 0x38) + 8));
            }
        }
    }
    return;
}



undefined8
FUN_140854970(undefined4 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5_00,float param_5,undefined8 param_6,undefined8 param_7)

{
    undefined8 uVar1;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined local_28;
    undefined8 local_20;
    float local_18;

    uVar1 = 1;
    switch(param_4) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x16:
        case 0x17:
        case 0x1d:
        case 0x1e:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
            FUN_1408364e0(DAT_140c61bb0,param_3,param_6);
            (**(code **)(*param_2 + 0xb0))(param_2,param_4,*param_2,param_6,param_7);
            return 1;
        default:
            uVar1 = 2;
            break;
        case 6:
            break;
        case 8:
            if (((*(byte *)((longlong)param_2 + 0x5a) & 0x40) != 0) || (param_2[8] == 0)) {
                local_30 = param_6;
                local_18 = param_5;
                local_20 = param_7;
                local_38[0] = 8;
                local_28 = 0;
                (**(code **)(*param_2 + 0xa8))(param_2,local_38);
                return 1;
            }
            break;
        case 9:
            if (((*(byte *)((longlong)param_2 + 0x5a) & 8) != 0) || (param_2[8] == 0)) {
                (**(code **)(*param_2 + 0x1a8))(param_2,(longlong)param_5,param_6,param_7,1);
                return 1;
            }
            break;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x14:
        case 0x15:
        case 0x25:
        case 0x26:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
            (**(code **)(*param_2 + 0x230))(param_1,param_5,param_2,*param_2,param_4,param_6,param_7);
            return 1;
        case 0x18:
            (**(code **)(*param_2 + 0xd8))(param_2,param_5 != 0.0,1,param_6,param_7);
            return 1;
        case 0x19:
            (**(code **)(*param_2 + 0xd8))(param_2,(param_5 != 0.0) * '\x02',2,param_6,param_7);
            return 1;
        case 0x1a:
            (**(code **)(*param_2 + 0xd8))(param_2,(param_5 != 0.0) * '\x04',4,param_6,param_7);
            return 1;
        case 0x1b:
            (**(code **)(*param_2 + 0xd8))(param_2,(param_5 != 0.0) * '\b',8,param_6,param_7);
            return 1;
        case 0x1c:
            (**(code **)(*param_2 + 0xd8))(param_2,(ulonglong)(param_5 != 0.0) << 4,0x10,param_6,param_7);
            return 1;
    }
    return uVar1;
}



void FUN_140854d30(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
    undefined4 uVar1;

    param_1[0xc] = param_1[0xc] | 1 << ((byte)param_3 & 0x3f);
    if (DAT_140c61bb0 != 0) {
        uVar1 = (**(code **)(*param_1 + 0x268))(param_1);
        FUN_1408382f0(DAT_140c61bb0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,uVar1);
        (**(code **)(*param_1 + 0xe0))(param_1,param_3);
    }
    return;
}



void FUN_140854de0(longlong param_1,byte param_2)

{
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfb;
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | (param_2 & 1) << 2;
    return;
}



void FUN_140854df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                   longlong *param_5_00,longlong param_6_00,int param_7_00,undefined8 param_8,
                   int param_5,undefined4 param_6,int param_7)

{
    byte *pbVar1;
    float *pfVar2;
    float *pfVar3;
    undefined8 uVar4;
    uint uVar5;
    float *pfVar6;
    byte bVar7;
    float local_res10 [2];
    longlong local_68;
    longlong local_60;
    float local_58;
    float local_54;
    int local_50;
    undefined4 local_4c;
    undefined local_48;
    undefined local_47;

    local_60 = (longlong)param_7_00;
    pbVar1 = *(byte **)(param_6_00 + 0x18);
    pfVar6 = (float *)0x0;
    bVar7 = (byte)param_7_00;
    if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar6;
        do {
            uVar5 = (int)pfVar2 + 1;
            if (pbVar1[uVar5] == bVar7) {
                pfVar2 = (float *)(pbVar1 + (longlong)pfVar2 * 0x10 +
                                   ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (pfVar2 != (float *)0x0) goto LAB_140854e74;
                break;
            }
            pfVar2 = (float *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
    }
    pfVar2 = (float *)FUN_140829be0();
    if (pfVar2 != (float *)0x0) {
        *pfVar2 = 0.0;
        *(undefined8 *)(pfVar2 + 2) = 0;
        LAB_140854e74:
        if (*(longlong *)(pfVar2 + 2) == 0) {
            local_58 = *pfVar2;
            local_54 = 0.0;
            if (param_5 == 1) {
                pbVar1 = (byte *)param_5_00[10];
                local_res10[0] = *(float *)(&DAT_140c11000 + local_60 * 4);
                if (pbVar1 != (byte *)0x0) {
                    pfVar3 = pfVar6;
                    do {
                        uVar5 = (int)pfVar3 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == bVar7) {
                            pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 +
                                               ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                            break;
                        }
                        pfVar3 = (float *)(ulonglong)uVar5;
                    } while (uVar5 < *pbVar1);
                }
                pfVar3 = local_res10;
                if (pfVar6 != (float *)0x0) {
                    pfVar3 = pfVar6;
                }
                local_res10[0] = *pfVar3;
                local_54 = param_4 - local_res10[0];
            }
            else if (param_5 == 2) {
                local_54 = local_58 + param_4;
            }
            if ((local_58 == local_54) || (param_7 == 0)) {
                *pfVar2 = local_54;
                (**(code **)(*param_5_00 + 0xb0))
                        (local_58,param_2,local_54 - local_58,param_5_00,(&DAT_1409a3530)[local_60],
                         *param_5_00,*(undefined8 *)(param_6_00 + 0x10),0);
            }
            else {
                local_50 = param_7;
                local_4c = param_6;
                local_48 = (&DAT_1409a35e8)[local_60];
                local_47 = 1;
                local_68 = param_6_00;
                uVar4 = FUN_14083a960(DAT_140c61b70,&local_68,1,0);
                *(undefined8 *)(pfVar2 + 2) = uVar4;
            }
        }
        else {
            if (param_5 == 1) {
                pbVar1 = (byte *)param_5_00[10];
                local_res10[0] = *(float *)(&DAT_140c11000 + local_60 * 4);
                if (pbVar1 != (byte *)0x0) {
                    pfVar3 = pfVar6;
                    do {
                        uVar5 = (int)pfVar3 + 1;
                        if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == bVar7) {
                            pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 +
                                               ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                            break;
                        }
                        pfVar3 = (float *)(ulonglong)uVar5;
                    } while (uVar5 < *pbVar1);
                }
                pfVar3 = local_res10;
                if (pfVar6 != (float *)0x0) {
                    pfVar3 = pfVar6;
                }
                local_res10[0] = *pfVar3;
            }
            FUN_14083ab80(DAT_140c61b70,*(longlong *)(pfVar2 + 2),local_60);
        }
    }
    return;
}



void FUN_140855080(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5_00,undefined8 param_6,undefined4 param_7,int param_5)

{
    byte *pbVar1;
    undefined4 *puVar2;
    undefined8 uVar3;
    uint uVar4;
    uint uVar5;
    undefined4 extraout_XMM0_Da;
    undefined8 *local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;
    int local_30;
    undefined4 local_2c;
    undefined2 local_28;

    pbVar1 = (byte *)param_5_00[3];
    if (pbVar1 != (byte *)0x0) {
        uVar4 = 0;
        do {
            uVar5 = uVar4 + 1;
            if (pbVar1[uVar5] == 10) {
                puVar2 = (undefined4 *)
                        (pbVar1 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                if (puVar2 != (undefined4 *)0x0) goto LAB_140855108;
                break;
            }
            uVar4 = uVar5;
        } while (uVar5 < *pbVar1);
    }
    puVar2 = (undefined4 *)FUN_140829be0(param_5_00 + 3,10);
    if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0x3f800000;
        *(undefined8 *)(puVar2 + 2) = 0;
        param_1 = extraout_XMM0_Da;
        LAB_140855108:
        if (*(longlong *)(puVar2 + 2) == 0) {
            if (param_5 == 0) {
                (**(code **)*param_5_00)(param_1,param_2,param_3,param_5_00,10);
            }
            else {
                local_38 = *puVar2;
                local_40 = 10;
                local_30 = param_5;
                local_28 = 0x100;
                local_48 = param_5_00;
                local_34 = param_3;
                local_2c = param_7;
                uVar3 = FUN_14083a960(DAT_140c61b70,&local_48,1,0);
                *(undefined8 *)(puVar2 + 2) = uVar3;
            }
        }
        else {
            FUN_14083ab80(DAT_140c61b70,*(longlong *)(puVar2 + 2),10);
        }
    }
    return;
}



void FUN_1408551c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined local_1a;

    local_20 = param_5;
    local_1c = 0;
    local_1a = 0;
    local_38[0] = 0;
    local_30 = param_2;
    local_28 = param_3;
    local_24 = param_4;
    (**(code **)(*param_1 + 0x80))(param_1,local_38);
    return;
}



void FUN_140855210(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   byte param_5,undefined8 param_6,char param_7)

{
    byte *pbVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    uint uVar4;

    pbVar1 = *(byte **)(param_4 + 0x20);
    if (pbVar1 != (byte *)0x0) {
        uVar3 = 0;
        do {
            uVar4 = (int)uVar3 + 1;
            if (pbVar1[uVar4] == param_5) {
                puVar2 = (undefined4 *)(pbVar1 + uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                goto LAB_14085524a;
            }
            uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    puVar2 = (undefined4 *)0x0;
    LAB_14085524a:
    *puVar2 = param_3;
    if (param_7 != '\0') {
        (**(code **)(**(longlong **)(param_4 + 0x18) + 0x138))(*(longlong **)(param_4 + 0x18),3);
        *(undefined8 *)(puVar2 + 2) = 0;
    }
    // WARNING: Could not recover jumptable at 0x000140855283. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_4 + 0x18) + 0x198))();
    return;
}



void FUN_1408552b0(undefined4 param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_1,0);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x148))(plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        // WARNING: Could not recover jumptable at 0x0001408552ef. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
    }
    return;
}



longlong * FUN_140855300(longlong **param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar4 = *param_1;
    plVar1 = param_1[1];
    if (plVar4 != plVar1) {
        do {
            if (*plVar4 == param_2) break;
            plVar4 = plVar4 + 3;
        } while (plVar4 != plVar1);
        if (plVar4 != plVar1) {
            if (plVar4 < plVar1 + -3) {
                uVar2 = (longlong)(plVar1 + -3) + (-1 - (longlong)plVar4);
                plVar1 = (longlong *)(uVar2 * -0x5555555555555555);
                plVar3 = plVar4 + 3;
                for (uVar2 = (uVar2 / 0x18 + 1) * 3 & 0x1fffffffffffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
                    *plVar4 = *plVar3;
                    plVar3 = plVar3 + 1;
                    plVar4 = plVar4 + 1;
                }
            }
            param_1[1] = param_1[1] + -3;
        }
    }
    return plVar1;
}



void FUN_140855370(longlong *param_1,int param_2,undefined4 param_3)

{
    byte *pbVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 *puVar5;
    int iVar6;
    undefined8 uVar7;
    undefined4 uVar8;
    undefined4 local_res8 [2];
    char local_res10 [8];

    local_res10[0] = '\0';
    if ((DAT_140c61bb0 == 0) ||
        (FUN_140838f30(DAT_140c61bb0,param_1,param_2,param_3,local_res10), local_res10[0] == '\0')) {
        param_1[0xc] = param_1[0xc] & ~(1 << ((byte)param_2 & 0x3f));
    }
    uVar7 = (**(code **)(*param_1 + 0x198))(param_1);
    if (param_2 == 0x14) {
        iVar6 = 0xb;
    }
    else {
        if (param_2 != 0x15) {
            if (1 < param_2 - 0x25U) {
                return;
            }
            uVar8 = 0;
            goto LAB_14085543b;
        }
        iVar6 = 0xc;
    }
    pbVar1 = (byte *)param_1[10];
    local_res8[0] = *(undefined4 *)(&DAT_140c11000 + (longlong)iVar6 * 4);
    if (pbVar1 != (byte *)0x0) {
        uVar3 = 0;
        do {
            uVar4 = (int)uVar3 + 1;
            if (pbVar1[uVar4] == (byte)iVar6) {
                puVar5 = (undefined4 *)(pbVar1 + uVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                goto LAB_140855423;
            }
            uVar3 = (ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    puVar5 = (undefined4 *)0x0;
    LAB_140855423:
    puVar2 = local_res8;
    if (puVar5 != (undefined4 *)0x0) {
        puVar2 = puVar5;
    }
    uVar8 = *puVar2;
    local_res8[0] = uVar8;
    LAB_14085543b:
    (**(code **)(*param_1 + 0x230))(uVar7,uVar8,param_1);
    return;
}



void FUN_140855480(undefined8 param_1,float param_2,longlong *param_3,undefined8 param_4,
                   longlong param_5)

{
    uint *puVar1;
    longlong *plVar2;
    float fVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong *plVar10;
    uint uVar11;
    uint uVar13;
    ulonglong uVar14;
    bool bVar15;
    bool bVar16;
    char local_28 [16];
    int iVar12;

    uVar4 = *(uint *)(param_5 + 0x188);
    if (*(char *)((longlong)param_3 + 0x1a) != '\0') {
        plVar7 = (longlong *)FUN_140850c90(param_3,*(undefined8 *)(param_5 + 0x184),local_28);
        if (local_28[0] == '\0') {
            return;
        }
        lVar5 = *param_3;
        uVar14 = (longlong)plVar7 - lVar5 >> 3;
        iVar12 = (int)(param_3[1] - lVar5 >> 3);
        uVar11 = iVar12 - 1;
        uVar13 = (uint)uVar14;
        if (uVar13 != 0) {
            uVar9 = (ulonglong)(uVar13 - 1);
            lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar13 - 1) * 8);
            if (param_2 == *(float *)(lVar8 + 0x184)) {
                bVar16 = uVar4 < *(uint *)(lVar8 + 0x188);
            }
            else {
                bVar16 = *(float *)(lVar8 + 0x184) < param_2;
            }
            if (bVar16) {
                if (1 < uVar13) {
                    lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar13 - 2) * 8);
                    fVar3 = *(float *)(lVar6 + 0x184);
                    if (param_2 == fVar3) {
                        puVar1 = (uint *)(lVar6 + 0x188);
                        bVar15 = uVar4 < *puVar1;
                        bVar16 = uVar4 == *puVar1;
                    }
                    else {
                        bVar16 = fVar3 == param_2;
                        bVar15 = fVar3 < param_2;
                    }
                    if (!bVar15 && !bVar16) goto LAB_1408511f8;
                    goto LAB_14085127e;
                }
                goto LAB_1408511f8;
            }
        }
        if (uVar11 <= uVar13) {
            return;
        }
        uVar9 = (ulonglong)(uVar13 + 1);
        lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar13 + 1) * 8);
        fVar3 = *(float *)(lVar8 + 0x184);
        if (param_2 == fVar3) {
            bVar15 = uVar4 < *(uint *)(lVar8 + 0x188);
            bVar16 = uVar4 == *(uint *)(lVar8 + 0x188);
        }
        else {
            bVar16 = fVar3 == param_2;
            bVar15 = fVar3 < param_2;
        }
        if (bVar15 || bVar16) {
            return;
        }
        if (uVar13 < iVar12 - 2U) {
            lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar13 + 2) * 8);
            fVar3 = *(float *)(lVar6 + 0x184);
            if (param_2 == fVar3) {
                bVar16 = uVar4 < *(uint *)(lVar6 + 0x188);
            }
            else {
                bVar16 = fVar3 < param_2;
            }
            if (!bVar16) {
                LAB_14085127e:
                lVar8 = FUN_140850c90(param_3,CONCAT44(uVar4,param_2),local_28);
                if (lVar8 == 0) {
                    uVar9 = (ulonglong)uVar11;
                }
                else {
                    uVar9 = lVar8 - lVar5 >> 3;
                    if (uVar13 < (uint)uVar9) {
                        uVar9 = (ulonglong)((uint)uVar9 - 1);
                    }
                }
                plVar7 = (longlong *)(lVar5 + (uVar14 & 0xffffffff) * 8);
                plVar2 = (longlong *)(lVar5 + (uVar9 & 0xffffffff) * 8);
                if ((uint)uVar9 < uVar13) {
                    if (plVar7 != plVar2) {
                        do {
                            plVar10 = plVar7 + -1;
                            *plVar7 = plVar7[-1];
                            plVar7 = plVar10;
                        } while (plVar10 != plVar2);
                        *plVar2 = param_5;
                        return;
                    }
                }
                else {
                    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
                        *plVar7 = plVar7[1];
                    }
                }
                *plVar2 = param_5;
                return;
            }
        }
        LAB_1408511f8:
        *(longlong *)(lVar5 + uVar9 * 8) = *plVar7;
        *plVar7 = lVar8;
        return;
    }
    plVar7 = (longlong *)FUN_140850ba0(param_3,*(undefined8 *)(param_5 + 0x184),local_28);
    if (local_28[0] == '\0') {
        return;
    }
    lVar5 = *param_3;
    uVar14 = (longlong)plVar7 - lVar5 >> 3;
    iVar12 = (int)(param_3[1] - lVar5 >> 3);
    uVar11 = iVar12 - 1;
    uVar13 = (uint)uVar14;
    if (uVar13 != 0) {
        uVar9 = (ulonglong)(uVar13 - 1);
        lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar13 - 1) * 8);
        fVar3 = *(float *)(lVar8 + 0x184);
        if (param_2 == fVar3) {
            bVar15 = uVar4 < *(uint *)(lVar8 + 0x188);
            bVar16 = uVar4 == *(uint *)(lVar8 + 0x188);
        }
        else {
            bVar16 = param_2 == fVar3;
            bVar15 = param_2 < fVar3;
        }
        if (!bVar15 && !bVar16) {
            if (1 < uVar13) {
                lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar13 - 2) * 8);
                fVar3 = *(float *)(lVar6 + 0x184);
                if (param_2 == fVar3) {
                    bVar16 = uVar4 < *(uint *)(lVar6 + 0x188);
                }
                else {
                    bVar16 = param_2 < fVar3;
                }
                if (bVar16) goto LAB_140851028;
                goto LAB_1408510ae;
            }
            goto LAB_140851028;
        }
    }
    if (uVar11 <= uVar13) {
        return;
    }
    uVar9 = (ulonglong)(uVar13 + 1);
    lVar8 = *(longlong *)(lVar5 + (ulonglong)(uVar13 + 1) * 8);
    if (param_2 == *(float *)(lVar8 + 0x184)) {
        bVar16 = uVar4 < *(uint *)(lVar8 + 0x188);
    }
    else {
        bVar16 = param_2 < *(float *)(lVar8 + 0x184);
    }
    if (!bVar16) {
        return;
    }
    if (uVar13 < iVar12 - 2U) {
        lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar13 + 2) * 8);
        fVar3 = *(float *)(lVar6 + 0x184);
        if (param_2 == fVar3) {
            puVar1 = (uint *)(lVar6 + 0x188);
            bVar15 = uVar4 < *puVar1;
            bVar16 = uVar4 == *puVar1;
        }
        else {
            bVar16 = param_2 == fVar3;
            bVar15 = param_2 < fVar3;
        }
        if (bVar15 || bVar16) {
            LAB_1408510ae:
            lVar8 = FUN_140850ba0(param_3,CONCAT44(uVar4,param_2),local_28);
            if (lVar8 == 0) {
                uVar9 = (ulonglong)uVar11;
            }
            else {
                uVar9 = lVar8 - lVar5 >> 3;
                if (uVar13 < (uint)uVar9) {
                    uVar9 = (ulonglong)((uint)uVar9 - 1);
                }
            }
            plVar7 = (longlong *)(lVar5 + (uVar14 & 0xffffffff) * 8);
            plVar2 = (longlong *)(lVar5 + (uVar9 & 0xffffffff) * 8);
            if ((uint)uVar9 < uVar13) {
                if (plVar7 != plVar2) {
                    do {
                        plVar10 = plVar7 + -1;
                        *plVar7 = plVar7[-1];
                        plVar7 = plVar10;
                    } while (plVar10 != plVar2);
                    *plVar2 = param_5;
                    return;
                }
            }
            else {
                for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
                    *plVar7 = plVar7[1];
                }
            }
            *plVar2 = param_5;
            return;
        }
    }
    LAB_140851028:
    *(longlong *)(lVar5 + uVar9 * 8) = *plVar7;
    *plVar7 = lVar8;
    return;
}



void FUN_1408554c0(longlong **param_1)

{
    byte bVar1;
    ushort uVar2;
    longlong *plVar3;
    uint uVar4;
    longlong *plVar5;

    uVar2 = *(ushort *)(param_1 + 3);
    if (uVar2 != 0) {
        plVar5 = *param_1;
        plVar3 = param_1[1];
        if (((uint)uVar2 < (uint)((longlong)plVar3 - (longlong)plVar5 >> 3)) &&
            (uVar4 = 0, plVar5 != plVar3)) {
            while (uVar4 < uVar2) {
                bVar1 = *(byte *)(*plVar5 + 0x17f);
                if (((((bVar1 & 0x40) == 0) || ((bVar1 & 0x20) != 0)) &&
                     ((*(byte *)(*plVar5 + 0x17e) & 1) == 0)) && ((bVar1 & 0x10) == 0)) {
                    uVar4 = uVar4 + 1;
                }
                plVar5 = plVar5 + 1;
                if (plVar5 == plVar3) {
                    return;
                }
            }
            for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
                if ((*(byte *)(*plVar5 + 0x17e) & 1) == 0) {
                    if (*(char *)((longlong)param_1 + 0x1b) == '\0') {
                        FUN_14085f2e0(*plVar5,param_1 == (longlong **)&DAT_140c10f30);
                    }
                    else {
                        FUN_14085e370();
                    }
                }
            }
        }
    }
    return;
}



void FUN_1408555c0(longlong *param_1,char param_2)

{
    *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) & 0x7f;
    *(byte *)((longlong)param_1 + 0x5a) = *(byte *)((longlong)param_1 + 0x5a) | param_2 << 7;
    // WARNING: Could not recover jumptable at 0x0001408555cd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x1a0))();
    return;
}



undefined8 * FUN_1408555e0(undefined8 *param_1,undefined2 param_2,undefined4 param_3)

{
    FUN_140865e10(param_1,param_3);
    *param_1 = &PTR_FUN_1409a38a0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined2 *)((longlong)param_1 + 0x3c) = param_2;
    *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) & 0x84 | 4;
    return param_1;
}



void FUN_140855630(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a38a0;
    if (param_1[6] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[6] = 0;
    if (param_1[5] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[5] = 0;
    FUN_140865e30(param_1);
    return;
}



undefined8 * FUN_140855690(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a38a0;
    if (param_1[6] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[6] = 0;
    if (param_1[5] != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    param_1[5] = 0;
    FUN_140865e30(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_140855710(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x18e0));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18e0));
    return iVar2;
}



void FUN_140855760(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
    longlong lVar1;
    LPCRITICAL_SECTION lpCriticalSection;
    uint uVar2;

    lVar1 = DAT_140c61ba8;
    if (*(int *)&(param_1->ProcessLocksList).Blink != 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x18e0);
        EnterCriticalSection(lpCriticalSection);
        uVar2 = *(uint *)&(param_1->ProcessLocksList).Blink % 0xc1;
        (param_1->ProcessLocksList).Flink = (_LIST_ENTRY *)(&lpCriticalSection[1].DebugInfo)[uVar2];
        (&lpCriticalSection[1].DebugInfo)[uVar2] = param_1;
        *(int *)(lVar1 + 0x1f10) = *(int *)(lVar1 + 0x1f10) + 1;
        LeaveCriticalSection(lpCriticalSection);
    }
    return;
}



undefined8 FUN_1408557d0(uint param_1,undefined8 param_2)

{
    undefined8 uVar1;
    uint uVar2;

    uVar2 = param_1 & 0xff00;
    if (uVar2 < 0xe01) {
        if (uVar2 != 0xe00) {
            if (uVar2 < 0x801) {
                if (uVar2 == 0x800) {
                    LAB_14085588d:
                    uVar1 = FUN_1408754b0(param_1,param_2,2);
                    return uVar1;
                }
                if (uVar2 < 0x401) {
                    if (uVar2 == 0x400) {
                        uVar1 = FUN_1408748c0();
                        return uVar1;
                    }
                    if (uVar2 == 0x100) {
                        uVar1 = FUN_140856810();
                        return uVar1;
                    }
                    if (uVar2 == 0x200) {
                        uVar1 = FUN_140874b90();
                        return uVar1;
                    }
                    if (uVar2 == 0x300) {
                        uVar1 = FUN_140874dc0();
                        return uVar1;
                    }
                }
                else if ((uVar2 - 0x600 & 0xfffffeff) == 0) {
                    uVar1 = FUN_140875140();
                    return uVar1;
                }
            }
            else {
                if (uVar2 == 0x900) goto LAB_14085588d;
                if ((uVar2 - 0xa00 & 0xfffffeff) == 0) {
                    uVar1 = FUN_1408754b0(param_1,param_2,0);
                    return uVar1;
                }
                if ((uVar2 - 0xc00 & 0xfffffeff) == 0) {
                    uVar1 = FUN_1408754b0(param_1,param_2,4);
                    return uVar1;
                }
            }
            return 0;
        }
    }
    else {
        if (0x1900 < uVar2) {
            if ((uVar2 - 0x1a00 & 0xfffffeff) == 0) {
                uVar1 = FUN_140875ed0();
                return uVar1;
            }
            if (uVar2 == 0x1c00) {
                uVar1 = FUN_140874fe0();
                return uVar1;
            }
            if (uVar2 == 0x1d00) {
                uVar1 = FUN_1408763d0();
                return uVar1;
            }
            if (uVar2 != 0x1e00) {
                return 0;
            }
            uVar1 = FUN_140876690();
            return uVar1;
        }
        if (uVar2 == 0x1900) {
            uVar1 = FUN_140875a20();
            return uVar1;
        }
        if (0x1200 < uVar2) {
            if ((uVar2 - 0x1300 & 0xfffffeff) != 0) {
                return 0;
            }
            uVar1 = FUN_140875b10();
            return uVar1;
        }
        if (uVar2 == 0x1200) {
            uVar1 = FUN_140875900();
            return uVar1;
        }
        if (uVar2 != 0xf00) {
            if ((uVar2 - 0x1000 & 0xfffffeff) != 0) {
                return 0;
            }
            uVar1 = FUN_140875dd0();
            return uVar1;
        }
    }
    uVar1 = FUN_1408754b0(param_1,param_2,3);
    return uVar1;
}



void FUN_140855940(longlong param_1)

{
    FUN_140830f00(DAT_140c61ba8,*(undefined4 *)(param_1 + 0x38),
                  (*(byte *)(param_1 + 0x3e) >> 6 & 1) != 0);
    return;
}



int FUN_140855970(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    byte *pbVar4;
    int iVar5;
    int *piVar6;
    uint uVar7;
    int *piVar8;
    int *piVar9;
    int local_res8 [2];

    pbVar4 = *(byte **)(param_1 + 0x28);
    piVar9 = (int *)0x0;
    iVar5 = 0;
    local_res8[0] = DAT_140c11038;
    piVar8 = piVar9;
    if (pbVar4 != (byte *)0x0) {
        piVar6 = piVar9;
        do {
            uVar7 = (int)piVar6 + 1;
            if (pbVar4[uVar7] == 0xe) {
                piVar8 = (int *)(pbVar4 + (longlong)piVar6 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                break;
            }
            piVar6 = (int *)(ulonglong)uVar7;
        } while (uVar7 < *pbVar4);
    }
    pbVar4 = *(byte **)(param_1 + 0x30);
    piVar6 = local_res8;
    if (piVar8 != (int *)0x0) {
        piVar6 = piVar8;
    }
    iVar1 = *piVar6;
    if (pbVar4 != (byte *)0x0) {
        do {
            uVar7 = (int)piVar9 + 1;
            if (*(byte *)((longlong)(int *)(ulonglong)uVar7 + (longlong)pbVar4) == 0xe) {
                piVar9 = (int *)(pbVar4 + (longlong)piVar9 * 8 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                if (piVar9 == (int *)0x0) {
                    return iVar1;
                }
                iVar2 = piVar9[1];
                iVar3 = *piVar9;
                if (iVar2 - iVar3 != 0) {
                    iVar5 = rand();
                    iVar5 = (int)((double)iVar5 * 3.051850947599719e-05 * (double)(iVar2 - iVar3) + 0.5);
                }
                return *piVar9 + iVar5 + iVar1;
            }
            piVar9 = (int *)(ulonglong)uVar7;
        } while (uVar7 < *pbVar4);
    }
    return iVar1;
}



int FUN_140855a70(longlong param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    byte *pbVar4;
    int iVar5;
    int *piVar6;
    uint uVar7;
    int *piVar8;
    int *piVar9;
    int local_res8 [2];

    pbVar4 = *(byte **)(param_1 + 0x28);
    piVar9 = (int *)0x0;
    iVar5 = 0;
    local_res8[0] = DAT_140c1103c;
    piVar8 = piVar9;
    if (pbVar4 != (byte *)0x0) {
        piVar6 = piVar9;
        do {
            uVar7 = (int)piVar6 + 1;
            if (pbVar4[uVar7] == 0xf) {
                piVar8 = (int *)(pbVar4 + (longlong)piVar6 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                break;
            }
            piVar6 = (int *)(ulonglong)uVar7;
        } while (uVar7 < *pbVar4);
    }
    pbVar4 = *(byte **)(param_1 + 0x30);
    piVar6 = local_res8;
    if (piVar8 != (int *)0x0) {
        piVar6 = piVar8;
    }
    iVar1 = *piVar6;
    if (pbVar4 != (byte *)0x0) {
        do {
            uVar7 = (int)piVar9 + 1;
            if (*(byte *)((longlong)(int *)(ulonglong)uVar7 + (longlong)pbVar4) == 0xf) {
                piVar9 = (int *)(pbVar4 + (longlong)piVar9 * 8 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
                if (piVar9 == (int *)0x0) {
                    return iVar1;
                }
                iVar2 = piVar9[1];
                iVar3 = *piVar9;
                if (iVar2 - iVar3 != 0) {
                    iVar5 = rand();
                    iVar5 = (int)((double)iVar5 * 3.051850947599719e-05 * (double)(iVar2 - iVar3) + 0.5);
                }
                return *piVar9 + iVar5 + iVar1;
            }
            piVar9 = (int *)(ulonglong)uVar7;
        } while (uVar7 < *pbVar4);
    }
    return iVar1;
}



undefined4 FUN_140855b70(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x18e0));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        if (*(int *)(param_1 + 3) != 0) {
            FUN_140868870(DAT_140c61ba8 + 0x18e0);
        }
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18e0));
    return uVar2;
}



ulonglong FUN_140855c00(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
    byte *pbVar1;
    int *piVar2;
    ulonglong uVar3;
    uint uVar4;
    int *piVar5;
    int *piVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    int local_res10 [2];

    uVar7 = (ulonglong)param_2;
    pbVar1 = *(byte **)(param_1 + 0x28);
    piVar6 = (int *)0x0;
    uVar8 = 1;
    local_res10[0] = *(int *)(&DAT_140c11000 + uVar7 * 4);
    piVar5 = piVar6;
    if (pbVar1 != (byte *)0x0) {
        piVar2 = piVar6;
        do {
            uVar4 = (int)piVar2 + 1;
            if (pbVar1[uVar4] == (byte)param_2) {
                piVar5 = (int *)(pbVar1 + (longlong)piVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            piVar2 = (int *)(ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    piVar2 = local_res10;
    if (piVar5 != (int *)0x0) {
        piVar2 = piVar5;
    }
    if (*piVar2 != param_3) {
        uVar3 = FUN_14084fb50(param_1 + 0x28,uVar7 & 0xff);
        uVar8 = uVar3 & 0xffffffff;
        if ((int)uVar3 != 1) {
            return uVar3;
        }
    }
    if ((param_4 == 0) && (param_5 == 0)) {
        pbVar1 = *(byte **)(param_1 + 0x30);
        if (pbVar1 != (byte *)0x0) {
            do {
                uVar4 = (int)piVar6 + 1;
                if (pbVar1[uVar4] == (byte)param_2) {
                    if (pbVar1 + (longlong)piVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
                            ) {
                        return uVar8;
                    }
                    goto LAB_140855ce3;
                }
                piVar6 = (int *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
    }
    else {
        LAB_140855ce3:
        uVar8 = FUN_14084fac0(param_1 + 0x30,uVar7 & 0xff,CONCAT44(param_5,param_4));
    }
    return uVar8;
}



ulonglong FUN_140855d20(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                        longlong param_5_00,int param_6,undefined8 param_7,undefined8 param_8,
                        float param_5)

{
    byte *pbVar1;
    float *pfVar2;
    ulonglong uVar3;
    uint uVar4;
    float *pfVar5;
    float *pfVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    float local_res10 [2];

    uVar7 = (ulonglong)param_6;
    pbVar1 = *(byte **)(param_5_00 + 0x28);
    pfVar6 = (float *)0x0;
    uVar8 = 1;
    local_res10[0] = *(float *)(&DAT_140c11000 + uVar7 * 4);
    pfVar5 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar6;
        do {
            uVar4 = (int)pfVar2 + 1;
            if (pbVar1[uVar4] == (byte)param_6) {
                pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            pfVar2 = (float *)(ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    pfVar2 = local_res10;
    if (pfVar5 != (float *)0x0) {
        pfVar2 = pfVar5;
    }
    local_res10[0] = *pfVar2;
    if (local_res10[0] != param_3) {
        local_res10[0] = param_3;
        uVar3 = FUN_14084fb50(param_5_00 + 0x28,uVar7 & 0xff,param_3,pbVar1,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        uVar8 = uVar3 & 0xffffffff;
        if ((int)uVar3 != 1) {
            return uVar3;
        }
    }
    if ((param_4 == 0.0) && (param_5 == 0.0)) {
        pbVar1 = *(byte **)(param_5_00 + 0x30);
        if (pbVar1 != (byte *)0x0) {
            do {
                uVar4 = (int)pfVar6 + 1;
                if (pbVar1[uVar4] == (byte)param_6) {
                    if (pbVar1 + (longlong)pfVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0
                            ) {
                        return uVar8;
                    }
                    goto LAB_140855e13;
                }
                pfVar6 = (float *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
    }
    else {
        LAB_140855e13:
        uVar8 = FUN_14084fac0(param_5_00 + 0x30,uVar7 & 0xff,CONCAT44(param_5,param_4));
    }
    return uVar8;
}



int FUN_140855e70(longlong *param_1,longlong param_2,undefined4 param_3)

{
    byte **ppbVar1;
    int *piVar2;
    longlong lVar3;
    byte bVar4;
    byte *pbVar5;
    ulonglong uVar6;
    uint uVar7;
    ulonglong uVar8;
    int iVar9;
    uint uStackX12;
    byte *local_res10;
    undefined4 local_res18 [4];

    local_res10 = (byte *)(param_2 + 0xb);
    uStackX12 = uStackX12 & 0xffffff00 | (uint)(*(char *)(param_2 + 10) != '\0');
    local_res18[0] = param_3;
    (**(code **)(*param_1 + 0x28))(param_1,CONCAT44(uStackX12,*(undefined4 *)(param_2 + 6)));
    if (param_1[5] != 0) {
        FUN_140881720();
    }
    uVar8 = 0;
    ppbVar1 = (byte **)(param_1 + 6);
    param_1[5] = 0;
    if (*ppbVar1 != (byte *)0x0) {
        FUN_140881720();
    }
    *ppbVar1 = (byte *)0x0;
    bVar4 = *local_res10;
    local_res10 = local_res10 + 1;
    if (bVar4 != 0) {
        pbVar5 = (byte *)FUN_1408819f0();
        if (pbVar5 == (byte *)0x0) {
            iVar9 = 0x34;
            goto LAB_140855faf;
        }
        *pbVar5 = bVar4;
        FUN_1407db590(pbVar5 + 1,local_res10,bVar4);
        local_res10 = local_res10 + bVar4;
        lVar3 = (ulonglong)bVar4 * 4;
        FUN_1407db590(pbVar5 + (bVar4 + 4 & 0xfffffffc),local_res10,lVar3);
        local_res10 = local_res10 + lVar3;
        param_1[5] = (longlong)pbVar5;
    }
    iVar9 = FUN_140850240(ppbVar1,&local_res10,local_res18);
    if (iVar9 == 1) {
        iVar9 = (**(code **)(*param_1 + 0x48))(param_1,&local_res10,local_res18);
    }
    LAB_140855faf:
    pbVar5 = (byte *)param_1[5];
    if (pbVar5 != (byte *)0x0) {
        uVar6 = uVar8;
        do {
            uVar7 = (int)uVar6 + 1;
            if (pbVar5[uVar7] == 0xe) {
                piVar2 = (int *)(pbVar5 + uVar6 * 4 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc));
                if (piVar2 != (int *)0x0) {
                    *piVar2 = *piVar2 * (DAT_140c110b4 / 1000);
                }
                break;
            }
            uVar6 = (ulonglong)uVar7;
        } while (uVar7 < *pbVar5);
    }
    pbVar5 = *ppbVar1;
    if (pbVar5 != (byte *)0x0) {
        while (uVar7 = (int)uVar8 + 1, pbVar5[uVar7] != 0xe) {
            uVar8 = (ulonglong)uVar7;
            if (*pbVar5 <= uVar7) {
                return iVar9;
            }
        }
        piVar2 = (int *)(pbVar5 + uVar8 * 8 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc));
        if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar2 * (DAT_140c110b4 / 1000);
            piVar2[1] = piVar2[1] * (DAT_140c110b4 / 1000);
        }
    }
    return iVar9;
}



undefined8 * FUN_140856090(undefined8 *param_1)

{
    *param_1 = 0;
    *(undefined *)(param_1 + 1) = 0;
    return param_1;
}



undefined8 FUN_1408560a0(HANDLE *param_1)

{
    DWORD DVar1;
    __time64_t _Var2;

    DAT_140c62408 = GetCurrentThreadId();
    _Var2 = _time64((__time64_t *)0x0);
    FUN_1407ddb54(_Var2);
    FUN_140834600();
    DVar1 = 0x102;
    do {
        if ((DVar1 == 0) || (DVar1 == 0x102)) {
            FUN_14082c8e0(DAT_140c61b68);
        }
        DVar1 = (**(code **)(*DAT_140c61c60 + 0x20))();
        DVar1 = WaitForSingleObject(*param_1,DVar1);
    } while (*(char *)(param_1 + 1) == '\0');
    return 0;
}



undefined8 FUN_140856110(HANDLE *param_1)

{
    BOOL BVar1;
    HANDLE pvVar2;
    DWORD_PTR DVar3;
    DWORD local_res8 [2];

    *(undefined *)(param_1 + 1) = 0;
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *param_1 = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
        return 2;
    }
    DAT_140c62400 =
            CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_140c61c80,FUN_1408560a0,param_1,0,
                         local_res8);
    if (DAT_140c62400 != (HANDLE)0x0) {
        FUN_14083e140(local_res8[0],"AK::EventManager");
        BVar1 = SetThreadPriority(DAT_140c62400,DAT_140c61c78);
        if (BVar1 != 0) {
            if (DAT_140c61c7c == 0) {
                LAB_1408561e2:
                if (DAT_140c62400 == (HANDLE)0x0) {
                    return 2;
                }
                return 1;
            }
            DVar3 = SetThreadAffinityMask(DAT_140c62400,(ulonglong)DAT_140c61c7c);
            if (DVar3 != 0) goto LAB_1408561e2;
        }
        CloseHandle(DAT_140c62400);
    }
    DAT_140c62400 = (HANDLE)0x0;
    return 2;
}



void FUN_140856210(HANDLE *param_1)

{
    *(undefined *)(param_1 + 1) = 1;
    if (DAT_140c62400 != (HANDLE)0x0) {
        if (*param_1 != (HANDLE)0x0) {
            SetEvent(*param_1);
        }
        WaitForSingleObject(DAT_140c62400,0xffffffff);
        CloseHandle(DAT_140c62400);
        DAT_140c62400 = (HANDLE)0x0;
    }
    if (*param_1 != (HANDLE)0x0) {
        CloseHandle(*param_1);
    }
    *param_1 = (HANDLE)0x0;
    return;
}



void FUN_140856280(HANDLE *param_1)

{
    if (*param_1 != (HANDLE)0x0) {
        // WARNING: Could not recover jumptable at 0x000140856288. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(*param_1);
        return;
    }
    return;
}



undefined4 * FUN_1408562a0(undefined4 *param_1)

{
    param_1[8] = 0xffffffff;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = param_1[4] & 0xfffff800;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = 0xffffffff;
    return param_1;
}



void FUN_1408562d0(undefined4 *param_1)

{
    if ((((byte)param_1[4] & 0x7c) == 4) && (*(longlong *)(param_1 + 6) != 0)) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 6) = 0;
    }
    param_1[4] = param_1[4] & 0xfffff800;
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = param_1[4] & 0xffffff7f;
    *(undefined8 *)(param_1 + 6) = 0;
    return;
}



undefined8 * FUN_140856330(undefined8 *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
    if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 4) = 0xffffffff;
        puVar1[3] = 0;
        *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xfffff800;
        *(undefined4 *)puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)((longlong)puVar1 + 4) = 0xffffffff;
        *puVar1 = *param_1;
        puVar1[1] = param_1[1];
        puVar1[2] = param_1[2];
        puVar1[3] = param_1[3];
        puVar1[4] = param_1[4];
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_1408563b0(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
    undefined8 local_18;
    undefined4 local_10;

    if (*(longlong *)(param_1 + 6) == 0) {
        FUN_14083ed20(DAT_140c61b58,&local_18,*param_1);
        *param_3 = local_10;
        *param_2 = local_18;
        return;
    }
    *param_3 = param_1[3];
    *param_2 = *(undefined8 *)(param_1 + 6);
    return;
}



undefined8 FUN_140856410(longlong param_1)

{
    undefined8 uVar1;

    if ((*(int *)(param_1 + 0xc) != 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
        uVar1 = FUN_140840b80(DAT_140c61b58,param_1);
        return uVar1;
    }
    return 1;
}



void FUN_140856440(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar3;
    longlong lVar2;

    uVar3 = param_3 - 1;
    lVar1 = -1;
    do {
        lVar2 = lVar1;
        lVar1 = lVar2 + 1;
    } while (*(short *)(param_2 + lVar1 * 2) != 0);
    if (lVar2 + 2U <= uVar3) {
        lVar1 = -1;
        do {
            lVar2 = lVar1;
            lVar1 = lVar2 + 1;
        } while (*(short *)(param_2 + lVar1 * 2) != 0);
        uVar3 = lVar2 + 2;
    }
    FUN_1407e6d08(param_1,param_3,param_2,uVar3);
    *(undefined2 *)(param_1 + uVar3 * 2) = 0;
    return;
}



void FUN_1408564b0(undefined4 *param_1,undefined4 param_2)

{
    if ((((byte)param_1[4] & 0x7c) == 4) && (*(longlong *)(param_1 + 6) != 0)) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 6) = 0;
    }
    param_1[4] = param_1[4] & 0xfffff800;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = 0xffffffff;
    param_1[4] = param_1[4] & 0xffffff7f;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = param_2;
    param_1[1] = 0xffffffff;
    param_1[4] = param_1[4] & 0xfffff808 | 8;
    return;
}



void FUN_140856540(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                   undefined4 param_5,byte param_6,byte param_7)

{
    longlong lVar1;
    longlong lVar2;

    if ((((byte)param_1[4] & 0x7c) == 4) && (*(longlong *)(param_1 + 6) != 0)) {
        FUN_140881720();
        *(undefined8 *)(param_1 + 6) = 0;
    }
    param_1[4] = param_1[4] & 0xfffff800;
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = param_1[4] & 0xffffff7f;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = param_3;
    if (param_4 != 0) {
        lVar1 = -1;
        do {
            lVar2 = lVar1;
            lVar1 = lVar2 + 1;
        } while (*(short *)(param_4 + lVar1 * 2) != 0);
        lVar2 = lVar2 + 2;
        lVar1 = FUN_1408819f0(DAT_140c10f20,lVar2 * 2);
        *(longlong *)(param_1 + 6) = lVar1;
        if (lVar1 != 0) {
            FUN_140856440(lVar1,param_4,lVar2);
        }
    }
    param_1[4] = param_1[4] & 0xfffffc84;
    param_1[1] = param_5;
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = param_1[4] | ((param_6 & 1) * 2 | param_7 & 1) << 8 | 0x484;
    return;
}



void FUN_140856640(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
    if ((((byte)param_1[4] & 0x7c) == 4) && (*(longlong *)(param_1 + 6) != 0)) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 6) = 0;
    }
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = param_1[4] & 0xfffff800;
    param_1[8] = param_2;
    *(undefined8 *)(param_1 + 6) = param_3;
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    param_1[4] = param_4[4];
    param_1[4] = param_1[4] | 0x80;
    return;
}



void FUN_1408566f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
    if ((((byte)param_1[4] & 0x7c) == 4) && (*(longlong *)(param_1 + 6) != 0)) {
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 6) = 0;
    }
    param_1[4] = param_1[4] & 0xfffff800;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = 0xffffffff;
    param_1[4] = param_1[4] & 0xffffff7f;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = param_2;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[4] = param_1[4] | 0x80;
    return;
}



void FUN_140856790(undefined4 *param_1)

{
    if (*(longlong *)(param_1 + 6) == 0) {
        FUN_1408420f0(DAT_140c61b58,*param_1);
        return;
    }
    return;
}



void FUN_1408567b0(uint *param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    longlong lVar6;
    uint uVar7;
    ulonglong uVar8;
    undefined4 *puVar10;
    ulonglong uVar9;

    lVar6 = DAT_140c61b58;
    if ((param_1[3] == 0) || (*(longlong *)(param_1 + 6) != 0)) {
        return;
    }
    uVar7 = *param_1;
    if (*(char *)(DAT_140c61b58 + 0x960) != '\0') {
        return;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61b58 + 0x78);
    EnterCriticalSection(lpCriticalSection);
    puVar10 = (undefined4 *)(lVar6 + 0xd8);
    uVar8 = (ulonglong)(uVar7 % 0xc1);
    pplVar1 = *(longlong ***)(puVar10 + uVar8 * 2 + 2);
    pplVar5 = (longlong **)0x0;
    do {
        pplVar4 = pplVar1;
        if (pplVar4 == (longlong **)0x0) {
            LAB_14084241b:
            // WARNING: Could not recover jumptable at 0x00014084243a. Too many branches
            // WARNING: Treating indirect jump as call
            LeaveCriticalSection(lpCriticalSection);
            return;
        }
        if (*(uint *)(pplVar4 + 1) == uVar7) {
            pplVar1 = pplVar4 + 7;
            *(int *)pplVar1 = *(int *)pplVar1 + -1;
            if ((*(int *)pplVar1 == 0) && (pplVar4[2] != (longlong *)0x0)) {
                FUN_140881720(DAT_140c61b1c);
                pplVar4[2] = (longlong *)0x0;
                *(undefined4 *)(pplVar4 + 3) = 0;
            }
            if (*(int *)(pplVar4 + 7) == 0) {
                plVar2 = *pplVar4;
                uVar9 = uVar8;
                plVar3 = plVar2;
                while ((plVar3 == (longlong *)0x0 &&
                        (uVar7 = (int)uVar9 + 1, uVar9 = (ulonglong)uVar7, uVar7 < 0xc1))) {
                    plVar3 = *(longlong **)(lVar6 + 0xe0 + uVar9 * 8);
                }
                if (pplVar5 == (longlong **)0x0) {
                    *(longlong **)(puVar10 + uVar8 * 2 + 2) = plVar2;
                }
                else {
                    *pplVar5 = plVar2;
                }
                if (pplVar4[4] != (longlong *)0x0) {
                    pplVar4[5] = pplVar4[4];
                    FUN_140881720(DAT_140c10f20);
                    pplVar4[4] = (longlong *)0x0;
                    pplVar4[5] = (longlong *)0x0;
                    *(undefined4 *)(pplVar4 + 6) = 0;
                }
                FUN_140881720(*puVar10,pplVar4);
                *(int *)(lVar6 + 0x6e8) = *(int *)(lVar6 + 0x6e8) + -1;
            }
            goto LAB_14084241b;
        }
        pplVar1 = (longlong **)*pplVar4;
        pplVar5 = pplVar4;
    } while( true );
}



undefined8 * FUN_1408567d0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a3910;
    FUN_140876ce0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140856810(undefined4 param_1,undefined4 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x60);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140876cb0(puVar1,param_1,param_2);
        *puVar1 = &PTR_FUN_1409a3910;
        FUN_140855760(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_140856880(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined4 uVar2;
    longlong *plVar3;

    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = 1;
    switch(*(undefined2 *)(param_1 + 0x3c)) {
        case 0x102:
        case 0x103:
            plVar3 = (longlong *)FUN_140855940(param_1);
            if (plVar3 != (longlong *)0x0) {
                uVar2 = FUN_140876f80(param_1,0,uVar1,*(undefined4 *)(param_2 + 0x44));
                FUN_14082f330(DAT_140c61b68,plVar3,uVar1,*(undefined4 *)(param_2 + 0x44));
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
            break;
        case 0x104:
        case 0x105:
            FUN_140876d30(param_1,0,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082f330(DAT_140c61b68,0,uVar1,*(undefined4 *)(param_2 + 0x44));
            break;
        case 0x108:
        case 0x109:
            FUN_140876ea0(param_1,0,uVar1,*(undefined4 *)(param_2 + 0x44));
            FUN_14082f6b0(DAT_140c61b68,uVar1,param_1 + 0x40,*(undefined4 *)(param_2 + 0x44));
    }
    return uVar2;
}



undefined8 *
FUN_1408569b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
    longlong lVar1;

    FUN_140874840();
    *param_1 = &PTR_LAB_1409a3980;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc;
    param_1[9] = 0;
    param_1[10] = 0;
    lVar1 = *param_4;
    param_1[0xe] = lVar1;
    if (lVar1 != 0) {
        FUN_140865fb0();
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined *)((longlong)param_1 + 0xd6) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    *(undefined2 *)((longlong)param_1 + 0xd4) = 1;
    *(undefined4 *)(param_1 + 0x1b) = 1;
    return param_1;
}



void FUN_140856a60(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409a3980;
    if ((param_1[9] != 0) && (param_1[0x1c] != 0)) {
        FUN_14083b060(DAT_140c61b70);
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfe;
    param_1[9] = 0;
    if ((param_1[10] != 0) && (param_1[0x1c] != 0)) {
        FUN_14083b060(DAT_140c61b70);
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
    param_1[10] = 0;
    if (param_1[0xc] != 0) {
        FUN_14083a740(DAT_140c61b98);
    }
    if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
        param_1[0x1f] = 0;
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
    }
    if (param_1[0xe] != 0) {
        FUN_140866000();
        param_1[0xe] = 0;
    }
    *param_1 = &PTR_LAB_1409a6450;
    FUN_140855630();
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140856b60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    char cVar5;
    longlong *plVar6;
    uint uVar7;
    longlong *local_res8;
    undefined local_28 [16];

    plVar6 = *(longlong **)(param_1 + 0x70);
    if (plVar6 != (longlong *)0x0) {
        if (plVar6[1] != *plVar6) {
            do {
                lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8);
                if (*(longlong *)(lVar2 + -0x10) == 0) {
                    cVar5 = FUN_14084f1e0(*(undefined8 *)(lVar2 + -0x28),param_2,0);
                    if (cVar5 == '\0') {
                        plVar6 = (longlong *)
                                FUN_14086d020(*(undefined8 *)(lVar2 + -0x28),param_3,&local_res8,local_28,
                                              lVar2 + -0x20,&DAT_ffffffffffffffe8 + lVar2);
                        if (plVar6 != (longlong *)0x0) {
                            *(undefined2 *)(param_1 + 0x7c + (ulonglong)(*(int *)(param_1 + 0x78) - 1) * 2) =
                                    local_res8._0_2_;
                            *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(plVar6 + 3);
                            (**(code **)(*plVar6 + 0x10))(plVar6);
                            return 0;
                        }
                        break;
                    }
                    puVar1 = (uint *)(param_1 + 0x78);
                    *puVar1 = *puVar1 - 1;
                    uVar7 = *puVar1;
                    while ((uVar7 != 0 &&
                            ((uVar7 = *(int *)(param_1 + 0x78) - 1, 0x1f < uVar7 ||
                                                                    ((*(uint *)(param_1 + 0xbc) >> ((ulonglong)uVar7 & 0x3f) & 1) == 0))))) {
                        *(uint *)(param_1 + 0x78) = uVar7;
                    }
                    lVar2 = *(longlong *)(param_1 + 0x70);
                    FUN_140865e90(*(longlong *)(lVar2 + 8) + -0x28);
                    plVar6 = (longlong *)(lVar2 + 8);
                    *plVar6 = *plVar6 + -0x28;
                }
                else {
                    local_res8 = (longlong *)0x0;
                    FUN_140874330(*(longlong *)(lVar2 + -0x10),*(undefined8 *)(lVar2 + -8),&local_res8);
                    lVar2 = *(longlong *)(param_1 + 0x70);
                    FUN_140865e90(*(longlong *)(lVar2 + 8) + -0x28);
                    plVar4 = local_res8;
                    plVar6 = (longlong *)(lVar2 + 8);
                    *plVar6 = *plVar6 + -0x28;
                    if (local_res8 == (longlong *)0x0) {
                        lVar2 = *(longlong *)(param_1 + 0x70);
                        *(undefined8 *)(param_1 + 0x70) = 0;
                        if (lVar2 == 0) {
                            return 1;
                        }
                        FUN_140866000();
                        plVar6 = local_res8;
                        if (local_res8 == (longlong *)0x0) {
                            return 1;
                        }
                        goto LAB_140856cb3;
                    }
                    FUN_140865fb0(local_res8);
                    lVar2 = *(longlong *)(param_1 + 0x70);
                    *(longlong **)(param_1 + 0x70) = plVar4;
                    if (lVar2 != 0) {
                        FUN_140866000();
                    }
                    if (local_res8 != (longlong *)0x0) {
                        FUN_140866000();
                    }
                }
            } while ((*(longlong **)(param_1 + 0x70))[1] != **(longlong **)(param_1 + 0x70));
        }
        plVar6 = *(longlong **)(param_1 + 0x70);
        iVar3 = (int)(plVar6[1] - *plVar6 >> 0x3f);
        if (((int)((plVar6[1] - *plVar6) / 0x28) + iVar3 == iVar3) &&
            (*(undefined8 *)(param_1 + 0x70) = 0, plVar6 != (longlong *)0x0)) {
            LAB_140856cb3:
            FUN_140866000(plVar6);
        }
    }
    return 1;
}



longlong FUN_140856d40(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1408819f0(DAT_140c10f20,0x100);
    if (lVar1 != 0) {
        lVar1 = FUN_1408569b0(lVar1,param_1,param_2,param_3);
        if (lVar1 != 0) {
            FUN_140855760(lVar1);
            return lVar1;
        }
    }
    return lVar1;
}



undefined FUN_1408570e0(longlong param_1)

{
    return *(undefined *)(param_1 + 0xd4);
}



void FUN_1408570f0(longlong param_1)

{
    if (((*(byte *)(param_1 + 0x58) & 2) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
        if (*(longlong *)(param_1 + 0xe0) != 0) {
            FUN_14083b060(DAT_140c61b70);
        }
        *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfd;
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    return;
}



void FUN_140857140(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    *(undefined8 *)(param_1 + 0xc0) = param_2;
    *(undefined4 *)(param_1 + 200) = param_3;
    *(undefined *)(param_1 + 0xd4) = 0;
    return;
}



void FUN_140857160(longlong param_1,undefined4 *param_2)

{
    *(undefined4 *)(param_1 + 0x78) = *param_2;
    *(undefined4 *)(param_1 + 0x7c) = param_2[1];
    *(undefined4 *)(param_1 + 0x80) = param_2[2];
    *(undefined4 *)(param_1 + 0x84) = param_2[3];
    *(undefined4 *)(param_1 + 0x88) = param_2[4];
    *(undefined4 *)(param_1 + 0x8c) = param_2[5];
    *(undefined4 *)(param_1 + 0x90) = param_2[6];
    *(undefined4 *)(param_1 + 0x94) = param_2[7];
    *(undefined4 *)(param_1 + 0x98) = param_2[8];
    *(undefined4 *)(param_1 + 0x9c) = param_2[9];
    *(undefined4 *)(param_1 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + 0xa4) = param_2[0xb];
    *(undefined4 *)(param_1 + 0xa8) = param_2[0xc];
    *(undefined4 *)(param_1 + 0xac) = param_2[0xd];
    *(undefined4 *)(param_1 + 0xb0) = param_2[0xe];
    *(undefined4 *)(param_1 + 0xb4) = param_2[0xf];
    *(undefined4 *)(param_1 + 0xb8) = param_2[0x10];
    *(undefined4 *)(param_1 + 0xbc) = param_2[0x11];
    return;
}



void FUN_140857200(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0xcc) = param_2;
    return;
}



void FUN_140857210(longlong param_1,longlong *param_2)

{
    *(longlong **)(param_1 + 0xe8) = param_2;
    // WARNING: Could not recover jumptable at 0x00014085721d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 8))(param_2);
    return;
}



void FUN_140857230(longlong param_1,undefined param_2)

{
    *(undefined *)(param_1 + 0xd5) = param_2;
    return;
}



void FUN_140857240(longlong param_1,longlong *param_2)

{
    undefined8 uVar1;

    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*param_2 != 0) {
        FUN_14083a530(DAT_140c61b98);
    }
    *(longlong *)(param_1 + 0x60) = *param_2;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 1);
    if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
        *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    uVar1 = FUN_140830f00(DAT_140c61ba8,*(undefined4 *)(param_2 + 1),0);
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    return;
}



undefined8 FUN_1408572d0(longlong param_1,longlong param_2,byte param_3,longlong param_4)

{
    undefined8 uVar1;

    *(longlong *)(param_1 + 0xe0) = param_4;
    if ((*(longlong *)(param_1 + 0x50) != 0) && (param_4 != 0)) {
        FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x50),param_4);
    }
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfd;
    *(undefined8 *)(param_1 + 0x50) = 0;
    if ((param_2 != 0) &&
        (uVar1 = FUN_14083ab00(DAT_140c61b70,param_2,*(undefined8 *)(param_1 + 0xe0)), (int)uVar1 != 1)
            ) {
        return uVar1;
    }
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfd;
    *(longlong *)(param_1 + 0x50) = param_2;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | (param_3 & 1) * '\x02';
    return 1;
}



undefined8 FUN_140857370(longlong param_1,longlong param_2,byte param_3,longlong param_4)

{
    undefined8 uVar1;

    *(longlong *)(param_1 + 0xe0) = param_4;
    if ((*(longlong *)(param_1 + 0x48) != 0) && (param_4 != 0)) {
        FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x48),param_4);
    }
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if ((param_2 != 0) &&
        (uVar1 = FUN_14083ab00(DAT_140c61b70,param_2,*(undefined8 *)(param_1 + 0xe0)), (int)uVar1 != 1)
            ) {
        return uVar1;
    }
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
    *(longlong *)(param_1 + 0x48) = param_2;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | param_3 & 1;
    return 1;
}



void FUN_140857400(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0xd0) = param_2;
    return;
}



void FUN_140857410(longlong param_1)

{
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return;
}



void FUN_140857420(longlong param_1,longlong param_2)

{
    if (param_2 == *(longlong *)(param_1 + 0xc0)) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    return;
}



void FUN_140857440(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = param_1[9];
    *param_1 = &PTR_FUN_1409a39e0;
    if (lVar2 != param_1[10]) {
        do {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
                FUN_140881720(DAT_140c10f20);
                *(undefined8 *)(lVar2 + 0x10) = 0;
            }
            *(undefined8 *)(lVar2 + 0x18) = 0;
            lVar2 = lVar2 + 0x20;
        } while (lVar2 != param_1[10]);
    }
    if (param_1[9] != 0) {
        param_1[10] = param_1[9];
        FUN_140881720(DAT_140c10f20);
        param_1[9] = 0;
        param_1[10] = 0;
        *(undefined4 *)(param_1 + 0xb) = 0;
    }
    if (param_1[6] != 0) {
        param_1[7] = param_1[6];
        FUN_140881720(DAT_140c10f20);
        param_1[6] = 0;
        param_1[7] = 0;
        *(undefined4 *)(param_1 + 8) = 0;
    }
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_FUN_140c10f60);
    }
    FUN_140865e30(param_1);
    return;
}



undefined8 FUN_140857510(undefined8 param_1,uint param_2)

{
    FUN_140857440();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_140857590(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x37f8));
    iVar2 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x37f8));
    return iVar2;
}



PRTL_CRITICAL_SECTION_DEBUG FUN_1408575e0(void)

{
    int *piVar1;
    longlong lVar2;
    PRTL_CRITICAL_SECTION_DEBUG p_Var3;
    LPCRITICAL_SECTION lpCriticalSection;
    ulonglong uVar4;

    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1408819f0(DAT_140c10f20);
    if (p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        FUN_140865e10(p_Var3);
        p_Var3->EntryCount = 0xffffffff;
        *(undefined8 *)&p_Var3->Flags = 0;
        *(undefined8 *)(p_Var3 + 1) = 0;
        p_Var3[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
        *(undefined4 *)&p_Var3[1].ProcessLocksList.Flink = 0;
        p_Var3[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
        *(undefined8 *)&p_Var3[1].EntryCount = 0;
        p_Var3[1].Flags = 0;
        *(undefined ***)p_Var3 = &PTR_FUN_1409a3a30;
        lVar2 = DAT_140c61ba8;
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x3e30);
        EnterCriticalSection(lpCriticalSection);
        uVar4 = (ulonglong)(*(uint *)&(p_Var3->ProcessLocksList).Blink % 0xc1);
        (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(lVar2 + 0x3e58 + uVar4 * 8);
        (&lpCriticalSection[1].DebugInfo)[uVar4] = p_Var3;
        piVar1 = (int *)(lVar2 + 0x4460);
        *piVar1 = *piVar1 + 1;
        LeaveCriticalSection(lpCriticalSection);
        return p_Var3;
    }
    return (PRTL_CRITICAL_SECTION_DEBUG)0x0;
}



PRTL_CRITICAL_SECTION_DEBUG FUN_1408576b0(void)

{
    int *piVar1;
    longlong lVar2;
    PRTL_CRITICAL_SECTION_DEBUG p_Var3;
    LPCRITICAL_SECTION lpCriticalSection;
    ulonglong uVar4;

    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_1408819f0(DAT_140c10f20);
    if (p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        FUN_140865e10(p_Var3);
        p_Var3->EntryCount = 0xffffffff;
        *(undefined8 *)&p_Var3->Flags = 0;
        *(undefined8 *)(p_Var3 + 1) = 0;
        p_Var3[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
        *(undefined4 *)&p_Var3[1].ProcessLocksList.Flink = 0;
        p_Var3[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
        *(undefined8 *)&p_Var3[1].EntryCount = 0;
        p_Var3[1].Flags = 0;
        *(undefined ***)p_Var3 = &PTR_FUN_1409a3a08;
        lVar2 = DAT_140c61ba8;
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x37f8);
        EnterCriticalSection(lpCriticalSection);
        uVar4 = (ulonglong)(*(uint *)&(p_Var3->ProcessLocksList).Blink % 0xc1);
        (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(lVar2 + 0x3820 + uVar4 * 8);
        (&lpCriticalSection[1].DebugInfo)[uVar4] = p_Var3;
        piVar1 = (int *)(lVar2 + 0x3e28);
        *piVar1 = *piVar1 + 1;
        LeaveCriticalSection(lpCriticalSection);
        return p_Var3;
    }
    return (PRTL_CRITICAL_SECTION_DEBUG)0x0;
}



undefined8 FUN_140857780(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) << 5);
    if (lVar2 != 0) {
        uVar3 = param_1[1] - *param_1 >> 5;
        uVar5 = uVar3 & 0xffffffff;
        if (*param_1 != 0) {
            if ((int)uVar3 != 0) {
                lVar4 = lVar2 + 0x1c;
                uVar3 = uVar5;
                do {
                    if ((undefined8 *)(lVar4 + -0x1c) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar4 + -0xc) = 0;
                        *(undefined8 *)(lVar4 + -4) = 0;
                    }
                    puVar6 = (undefined8 *)((-0x1c - lVar2) + lVar4 + *param_1);
                    *(undefined8 *)(lVar4 + -0x1c) = *puVar6;
                    *(undefined8 *)(lVar4 + -0x14) = puVar6[1];
                    *(undefined8 *)(lVar4 + -0xc) = puVar6[2];
                    *(undefined8 *)(lVar4 + -4) = puVar6[3];
                    uVar3 = uVar3 - 1;
                    lVar4 = lVar4 + 0x20;
                } while (uVar3 != 0);
            }
            FUN_140881720(DAT_140c10f20,*param_1);
        }
        *(int *)(param_1 + 2) = iVar1 + param_2;
        *param_1 = lVar2;
        param_1[1] = uVar5 * 0x20 + lVar2;
        return 1;
    }
    return 0;
}



undefined4 FUN_140857880(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x3e30));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        FUN_140868870(DAT_140c61ba8 + 0x3e30,*(undefined4 *)(param_1 + 3));
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x3e30));
    return uVar2;
}



undefined4 FUN_140857910(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;

    lVar4 = DAT_140c61ba8;
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_140c61ba8 + 0x37f8));
    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        FUN_140868870(DAT_140c61ba8 + 0x37f8,*(undefined4 *)(param_1 + 3));
        uVar3 = DAT_140c10f20;
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(uVar3,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x37f8));
    return uVar2;
}



int FUN_1408579a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong *local_18 [2];

    local_18[0] = (longlong *)0x0;
    iVar3 = FUN_14082fc60(&PTR_PTR_FUN_140c10f60,param_2,local_18);
    if ((iVar3 == 1) && (local_18[0] != (longlong *)0x0)) {
        iVar3 = (**(code **)(*local_18[0] + 0x18))(local_18[0],&PTR_PTR_FUN_140c10f60,param_3,param_4);
        plVar2 = local_18[0];
        if (iVar3 != 1) {
            (**(code **)(*local_18[0] + 0x20))(local_18[0],&PTR_PTR_FUN_140c10f60);
            return iVar3;
        }
        plVar1 = *(longlong **)(param_1 + 0x28);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_FUN_140c10f60);
            *(undefined8 *)(param_1 + 0x28) = 0;
        }
        *(int *)(param_1 + 0x20) = (int)param_2;
        *(longlong **)(param_1 + 0x28) = plVar2;
    }
    return 1;
}



void FUN_140857a60(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,&PTR_PTR_FUN_140c10f60);
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x28) = param_3;
        *(undefined4 *)(param_1 + 0x20) = param_2;
        return;
    }
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined8 *)(param_1 + 0x28) = param_3;
    return;
}



int FUN_140857ad0(longlong param_1,longlong param_2)

{
    uint **ppuVar1;
    byte bVar2;
    ushort uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong lVar7;
    undefined4 *puVar8;
    char cVar9;
    uint *puVar10;
    uint *puVar11;
    uint uVar12;
    byte *pbVar13;
    ushort *puVar14;
    undefined4 *puVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    int local_res18;

    uVar12 = *(uint *)(param_2 + 8);
    local_res18 = 1;
    if (*(int *)(param_2 + 4) != -1) {
        local_res18 = FUN_1408579a0(param_1,*(int *)(param_2 + 4),param_2 + 0xc,uVar12);
    }
    pbVar13 = (byte *)(param_2 + 0xc + (ulonglong)uVar12);
    if (local_res18 == 1) {
        bVar2 = *pbVar13;
        puVar14 = (ushort *)(pbVar13 + 1);
        uVar12 = (uint)bVar2;
        uVar17 = (ulonglong)uVar12;
        ppuVar1 = (uint **)(param_1 + 0x30);
        if (bVar2 != 0) {
            puVar10 = (uint *)FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar12 << 3);
            *ppuVar1 = puVar10;
            *(uint **)(param_1 + 0x38) = puVar10;
            if (puVar10 != (uint *)0x0) {
                *(uint *)(param_1 + 0x40) = uVar12;
            }
        }
        if (uVar12 != 0) {
            do {
                puVar10 = *(uint **)(param_1 + 0x38);
                bVar2 = *(byte *)puVar14;
                uVar12 = *(uint *)((longlong)puVar14 + 1);
                puVar14 = (ushort *)((longlong)puVar14 + 5);
                for (puVar11 = *ppuVar1; (puVar11 != puVar10 && (*puVar11 != (uint)bVar2));
                     puVar11 = puVar11 + 2) {
                }
                if ((puVar11 == puVar10) || (puVar11 + 1 == (uint *)0x0)) {
                    uVar16 = (longlong)puVar10 - (longlong)*ppuVar1 >> 3 & 0xffffffff;
                    if (((uVar16 < *(uint *)(param_1 + 0x40)) ||
                         (cVar9 = FUN_140892ef0(ppuVar1,8), cVar9 != '\0')) &&
                        (uVar16 < *(uint *)(param_1 + 0x40))) {
                        puVar10 = *(uint **)(param_1 + 0x38);
                        *(uint **)(param_1 + 0x38) = puVar10 + 2;
                        if (puVar10 != (uint *)0x0) {
                            *puVar10 = (uint)bVar2;
                            puVar10[1] = uVar12;
                        }
                    }
                }
                else {
                    puVar11[1] = uVar12;
                }
                uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
        }
        puVar15 = (undefined4 *)(puVar14 + 1);
        if (*puVar14 != 0) {
            uVar17 = (ulonglong)*puVar14;
            do {
                uVar4 = puVar15[1];
                uVar5 = puVar15[2];
                uVar6 = *puVar15;
                uVar3 = *(ushort *)((longlong)puVar15 + 0xd);
                FUN_140857db0(param_1,uVar4,uVar5,0);
                uVar16 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 5 & 0xffffffff;
                if (((uVar16 < *(uint *)(param_1 + 0x58)) || (cVar9 = FUN_140857780(), cVar9 != '\0')) &&
                    (uVar16 < *(uint *)(param_1 + 0x58))) {
                    lVar7 = *(longlong *)(param_1 + 0x50);
                    if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x10) = 0;
                        *(undefined8 *)(lVar7 + 0x18) = 0;
                    }
                    puVar8 = *(undefined4 **)(param_1 + 0x50);
                    *(undefined4 **)(param_1 + 0x50) = puVar8 + 8;
                    if (puVar8 != (undefined4 *)0x0) {
                        puVar8[1] = uVar5;
                        *puVar8 = uVar6;
                        puVar8[2] = uVar4;
                        if (((byte *)((longlong)puVar15 + 0xf) != (byte *)0x0) && (uVar3 != 0)) {
                            FUN_140837e30(puVar8 + 4);
                        }
                    }
                }
                puVar15 = (undefined4 *)((byte *)((longlong)puVar15 + 0xf) + (ulonglong)uVar3 * 0xc);
                uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
        }
        return 1;
    }
    return local_res18;
}



void FUN_140857d10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined4 *puVar1;

    puVar1 = *(undefined4 **)(param_1 + 0x48);
    if (puVar1 != *(undefined4 **)(param_1 + 0x50)) {
        do {
            FUN_1408382f0(DAT_140c61bb0,param_2,*puVar1,puVar1[2],puVar1[1],puVar1[7],
                          *(undefined8 *)(puVar1 + 4),puVar1[6],param_3,0);
            puVar1 = puVar1 + 8;
        } while (puVar1 != *(undefined4 **)(param_1 + 0x50));
    }
    return;
}



void FUN_140857db0(longlong param_1,int param_2,int param_3,char param_4)

{
    bool bVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    int local_res8;
    int local_resc;

    puVar4 = *(undefined8 **)(param_1 + 0x48);
    bVar1 = false;
    if (puVar4 != *(undefined8 **)(param_1 + 0x50)) {
        lVar6 = (longlong)puVar4 + 0x1c;
        do {
            if ((*(int *)(lVar6 + -0x14) == param_2) &&
                (*(int *)(&DAT_ffffffffffffffe8 + lVar6) == param_3)) {
                if (*(longlong *)(lVar6 + -0xc) != 0) {
                    FUN_140881720(DAT_140c10f20);
                    *(undefined8 *)(lVar6 + -0xc) = 0;
                }
                *(undefined8 *)(lVar6 + -4) = 0;
                puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + -0x20);
                if (puVar4 < puVar2) {
                    uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar4)) >> 3 & 0xfffffffffffffffc
                            ) + 4 & 0x1ffffffffffffffc;
                    puVar2 = (undefined8 *)(lVar6 + 4);
                    puVar5 = puVar4;
                    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                        *puVar5 = *puVar2;
                        puVar2 = puVar2 + 1;
                        puVar5 = puVar5 + 1;
                    }
                }
                *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + -0x20;
                bVar1 = true;
            }
            else {
                puVar4 = puVar4 + 4;
                lVar6 = lVar6 + 0x20;
            }
        } while (puVar4 != *(undefined8 **)(param_1 + 0x50));
        if ((bVar1) && (param_4 != '\0')) {
            local_res8 = param_2;
            local_resc = param_3;
            FUN_140832480(param_1,FUN_140857ec0,&local_res8);
        }
    }
    return;
}



void FUN_140857ec0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
    FUN_140838f30(DAT_140c61bb0,param_1,*param_3,param_3[1],0);
    return;
}



undefined8 * FUN_140857ef0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a3a60;
    FUN_1408562d0();
    FUN_14086fc60(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong * FUN_140857f40(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1408819f0(DAT_140c10f20,0xd0);
    if (plVar3 != (longlong *)0x0) {
        FUN_14086fc30(plVar3,param_1);
        *plVar3 = (longlong)&PTR_FUN_1409a3a60;
        FUN_1408562a0(plVar3 + 0x15);
        uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
        if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
            cVar1 = '\x01';
        }
        else {
            cVar1 = '\0';
        }
        *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) & 0xfd;
        *(byte *)((longlong)plVar3 + 0x5b) = *(byte *)((longlong)plVar3 + 0x5b) | cVar1 * '\x02';
        FUN_140851a00(plVar3);
        return plVar3;
    }
    return (longlong *)0x0;
}



undefined8 FUN_1408580d0(longlong *param_1,int *param_2)

{
    int iVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_2 + 4) == 0) {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    if ((param_1[7] != 0) && (*(short *)(param_1[7] + 0x48) != 0)) {
        iVar1 = *param_2;
        if (iVar1 == 0) {
            uVar2 = FUN_140844aa0(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
            return uVar2;
        }
        if (iVar1 == 1) {
            uVar2 = FUN_140844120(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
            return uVar2;
        }
        if (iVar1 == 2) {
            uVar2 = FUN_140844a10(param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,
                                  *(undefined *)((longlong)param_2 + 0x25),param_2[6]);
            return uVar2;
        }
        if (iVar1 == 4) {
            FUN_1408582f0(param_1,*(undefined8 *)(param_2 + 4),param_2);
        }
    }
    return 1;
}



void FUN_1408581d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if ((*(byte *)(param_3 + 0x2c) & 1) == 0) {
        iVar2 = *(int *)(param_3 + 0x28);
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[4]) {
                if (((param_2 == 0) || (param_2 == plVar1[0x16])) &&
                    ((*(int *)(param_3 + 0x10) == 0 || (*(int *)(param_3 + 0x10) == *(int *)(plVar1 + 0xf))))
                        ) {
                    (**(code **)(*plVar1 + 0x40))
                            (plVar1,iVar2,*(byte *)(param_3 + 0x2c) >> 1 & 1,param_4,auVar5);
                }
            }
        }
    }
    else {
        fVar4 = *(float *)(param_3 + 0x28);
        fVar3 = 0.0;
        if ((fVar4 < 0.0) || (fVar3 = 1.0, 1.0 < fVar4)) {
            fVar4 = fVar3;
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[4]) {
                if (((param_2 == 0) || (param_2 == plVar1[0x16])) &&
                    ((*(int *)(param_3 + 0x10) == 0 || (*(int *)(param_3 + 0x10) == *(int *)(plVar1 + 0xf))))
                        ) {
                    fVar3 = (float)(**(code **)(*plVar1 + 0x48))(fVar3,fVar4,plVar1);
                }
            }
        }
    }
    return;
}



void FUN_1408582f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if ((*(byte *)(param_3 + 0x2c) & 1) == 0) {
        iVar2 = *(int *)(param_3 + 0x28);
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[4]) {
                if ((param_2 == 0) || (plVar1[0x16] == param_2)) {
                    (**(code **)(*plVar1 + 0x40))
                            (plVar1,iVar2,*(byte *)(param_3 + 0x2c) >> 1 & 1,param_4,auVar5);
                }
            }
        }
    }
    else {
        fVar4 = *(float *)(param_3 + 0x28);
        fVar3 = 0.0;
        if ((fVar4 < 0.0) || (fVar3 = 1.0, 1.0 < fVar4)) {
            fVar4 = fVar3;
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
            for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[4]) {
                if ((param_2 == 0) || (plVar1[0x16] == param_2)) {
                    fVar3 = (float)(**(code **)(*plVar1 + 0x48))(fVar3,fVar4,plVar1);
                }
            }
        }
    }
    return;
}



void FUN_1408583f0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                   undefined param_5)

{
    int iVar1;
    longlong local_res10;
    undefined4 local_res18 [4];
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined local_38 [4];
    undefined4 local_34;
    undefined4 local_30;
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 uStack36;
    undefined4 local_20;
    longlong local_18;

    local_res10 = param_2 + 4;
    local_res18[0] = param_3;
    iVar1 = FUN_14083fd40(&local_res10,local_res18,local_38);
    if (iVar1 == 1) {
        if (local_18 == 0) {
            local_48 = local_20;
            local_58 = local_30;
            uStack84 = uStack44;
            uStack80 = uStack40;
            uStack76 = uStack36;
            FUN_1408566f0(param_1 + 0xa8,local_34,&local_58);
        }
        else {
            FUN_1408564b0(param_1 + 0xa8,local_30);
        }
        FUN_1408546e0(param_1,&local_res10,local_res18,param_5);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858490(undefined8 param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    puVar6 = (undefined8 *)0x0;
    puVar3 = DAT_140c62428;
    puVar5 = DAT_140c62428;
    if (DAT_140c62428 != (undefined8 *)0x0) {
        do {
            lVar2 = FUN_140832b80(param_1);
            if (puVar3[1] == lVar2) {
                puVar4 = (undefined8 *)*puVar3;
                puVar1 = puVar4;
                if (puVar3 != puVar5) {
                    *puVar6 = puVar4;
                    puVar1 = DAT_140c62428;
                }
                DAT_140c62428 = puVar1;
                if (puVar3 == DAT_140c62430) {
                    DAT_140c62430 = puVar6;
                }
                if ((puVar3 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= puVar3)) {
                    FUN_140881720(DAT_140c10f28,puVar3);
                }
                else {
                    *puVar3 = DAT_140c62438;
                    DAT_140c62438 = puVar3;
                }
                _DAT_140c62448 = _DAT_140c62448 + -1;
                puVar5 = DAT_140c62428;
            }
            else {
                puVar4 = (undefined8 *)*puVar3;
                puVar6 = puVar3;
            }
            puVar3 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858590(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar4 = (undefined8 *)0x0;
    puVar2 = DAT_140c62428;
    puVar5 = DAT_140c62428;
    if (DAT_140c62428 != (undefined8 *)0x0) {
        do {
            if (puVar2[1] == param_1) {
                puVar3 = (undefined8 *)*puVar2;
                puVar1 = puVar3;
                if (puVar2 != puVar5) {
                    *puVar4 = puVar3;
                    puVar1 = DAT_140c62428;
                }
                DAT_140c62428 = puVar1;
                if (puVar2 == DAT_140c62430) {
                    DAT_140c62430 = puVar4;
                }
                if ((puVar2 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= puVar2)) {
                    FUN_140881720(DAT_140c10f28);
                }
                else {
                    *puVar2 = DAT_140c62438;
                    DAT_140c62438 = puVar2;
                }
                _DAT_140c62448 = _DAT_140c62448 + -1;
                puVar5 = DAT_140c62428;
            }
            else {
                puVar3 = (undefined8 *)*puVar2;
                puVar4 = puVar2;
            }
            puVar2 = puVar3;
        } while (puVar3 != (undefined8 *)0x0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858670(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = DAT_140c62418;
    if (DAT_140c62418 != 0) {
        do {
            lVar1 = *(longlong *)(lVar3 + 8);
            lVar2 = lVar1;
            if (lVar3 == DAT_140c62418) {
                DAT_140c62418 = lVar1;
                lVar2 = _DAT_00000008;
            }
            _DAT_00000008 = lVar2;
            if (lVar3 == DAT_140c62420) {
                DAT_140c62420 = 0;
            }
            FUN_140831560();
            lVar3 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140858700(uint param_1,undefined8 param_2)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    if (DAT_140c62438 == (undefined8 *)0x0) {
        if (DAT_140c62444 <= _DAT_140c62448) {
            return 2;
        }
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f28,0x20);
        if (puVar2 == (undefined8 *)0x0) {
            return 2;
        }
        *puVar2 = DAT_140c62438;
        DAT_140c62438 = puVar2;
    }
    puVar2 = DAT_140c62438;
    if (DAT_140c62430 != (undefined8 *)0x0) {
        *DAT_140c62430 = DAT_140c62438;
        puVar2 = DAT_140c62428;
    }
    DAT_140c62428 = puVar2;
    DAT_140c62430 = DAT_140c62438;
    uVar1 = *DAT_140c62438;
    *DAT_140c62438 = 0;
    DAT_140c62438 = (undefined8 *)uVar1;
    puVar2 = DAT_140c62430;
    _DAT_140c62448 = _DAT_140c62448 + 1;
    puVar3 = DAT_140c62430 + 1;
    if (puVar3 == (undefined8 *)0x0) {
        return 2;
    }
    *(uint *)(DAT_140c62430 + 2) = param_1;
    *puVar3 = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = DAT_140c62410;
    *(undefined *)(puVar2 + 3) = 0;
    if (param_1 < 2) {
        DAT_140c62414 = 1;
    }
    return 1;
}



undefined8 FUN_1408587e0(longlong param_1)

{
    longlong *plVar1;
    undefined8 uVar2;

    plVar1 = DAT_140c62428;
    if (DAT_140c62428 != (longlong *)0x0) {
        do {
            if (plVar1[1] == param_1) {
                if ((*(uint *)(plVar1 + 2) < 2) && (*(longlong *)(param_1 + 0xb8) == 0)) {
                    FUN_140858590();
                    FUN_14085e170(param_1,1);
                    return 1;
                }
                break;
            }
            plVar1 = (longlong *)*plVar1;
        } while (plVar1 != (longlong *)0x0);
    }
    uVar2 = FUN_140858700(2,param_1);
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140858850(void)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    uint uVar4;

    uVar4 = 0;
    DAT_140c62410 = 0;
    _DAT_140c62448 = 0;
    DAT_140c62444 = 0xffffffff;
    DAT_140c62438 = (undefined8 *)0x0;
    DAT_140c62450 = (undefined8 *)FUN_1408819f0(DAT_140c10f28);
    if (DAT_140c62450 == (undefined8 *)0x0) {
        uVar2 = 0x34;
    }
    else {
        DAT_140c62440 = 0x200;
        puVar1 = DAT_140c62450;
        DAT_140c62438 = DAT_140c62450;
        do {
            puVar3 = puVar1;
            uVar4 = uVar4 + 1;
            *puVar3 = puVar3 + 4;
            puVar1 = puVar3 + 4;
        } while (uVar4 < DAT_140c62440);
        *puVar3 = 0;
        uVar2 = 1;
    }
    DAT_140c62428 = 0;
    DAT_140c62430 = 0;
    return uVar2;
}



void FUN_1408588f0(void)

{
    if (DAT_140c62414 != '\0') {
        FUN_140858ef0();
    }
    FUN_140858af0();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858910(uint param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;

    lVar9 = 0;
    lVar8 = DAT_140c62418;
    if (DAT_140c62418 != 0) {
        do {
            if (*(int *)(lVar8 + 0x4c) == 2) {
                puVar2 = (undefined8 *)0x0;
                puVar3 = DAT_140c62428;
                puVar4 = DAT_140c62428;
                while (puVar3 != (undefined8 *)0x0) {
                    lVar7 = FUN_140832b80(lVar8);
                    if (puVar3[1] == lVar7) {
                        puVar1 = (undefined8 *)*puVar3;
                        puVar6 = puVar1;
                        if (puVar3 != puVar4) {
                            *puVar2 = puVar1;
                            puVar6 = DAT_140c62428;
                        }
                        DAT_140c62428 = puVar6;
                        if (puVar3 == DAT_140c62430) {
                            DAT_140c62430 = puVar2;
                        }
                        if ((puVar3 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= puVar3)
                                ) {
                            FUN_140881720(DAT_140c10f28);
                        }
                        else {
                            *puVar3 = DAT_140c62438;
                            DAT_140c62438 = puVar3;
                        }
                        _DAT_140c62448 = _DAT_140c62448 + -1;
                        puVar3 = puVar1;
                        puVar4 = DAT_140c62428;
                    }
                    else {
                        puVar2 = puVar3;
                        puVar3 = (undefined8 *)*puVar3;
                    }
                }
                lVar7 = *(longlong *)(lVar8 + 8);
                lVar5 = lVar7;
                if (lVar8 != DAT_140c62418) {
                    *(longlong *)(lVar9 + 8) = lVar7;
                    lVar5 = DAT_140c62418;
                }
                DAT_140c62418 = lVar5;
                if (lVar8 == DAT_140c62420) {
                    DAT_140c62420 = lVar9;
                }
                FUN_140831560();
            }
            else {
                lVar9 = *(longlong *)(lVar8 + 0x10);
                if (lVar9 != 0) {
                    lVar9 = *(longlong *)(lVar9 + 0x18);
                }
                if ((*(byte *)(lVar9 + 0x17e) & 0x80) != 0) {
                    param_1 = param_1 * ((uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff) >> 10;
                }
                if (-1 < *(int *)(lVar9 + 0x198)) {
                    *(uint *)(lVar9 + 0x198) = *(int *)(lVar9 + 0x198) - param_1;
                }
                lVar7 = *(longlong *)(lVar8 + 8);
                lVar9 = lVar8;
            }
            lVar8 = lVar7;
        } while (lVar7 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858af0(void)

{
    int iVar1;
    longlong **pplVar2;
    bool bVar3;
    int iVar4;
    longlong *plVar5;
    longlong **pplVar6;
    longlong **pplVar7;
    longlong **local_78;
    longlong **pplStack112;

    LAB_140858b20:
    pplStack112 = (longlong **)0x0;
    pplVar2 = DAT_140c62428;
    LAB_140858b31:
    do {
        local_78 = pplVar2;
        if (local_78 == (longlong **)0x0) {
            return;
        }
        iVar1 = *(int *)((longlong)local_78 + 0x14);
        bVar3 = false;
        pplVar2 = local_78;
        pplVar7 = pplStack112;
        do {
            pplVar6 = pplVar2;
            if (iVar1 != *(int *)((longlong)pplVar6 + 0x14)) break;
            if (((*(char *)(pplVar6 + 3) == '\0') && (*(uint *)(pplVar6 + 2) < 2)) &&
                (*(int *)(pplVar6[1][0x17] + 0x4c) != 2)) {
                iVar4 = FUN_140833d70();
                if (iVar4 == 2) {
                    pplVar2 = (longlong **)*pplVar6;
                    if (pplVar6 != DAT_140c62428) {
                        *pplVar7 = *pplVar6;
                        pplVar2 = DAT_140c62428;
                    }
                    DAT_140c62428 = pplVar2;
                    if (pplVar6 == DAT_140c62430) {
                        DAT_140c62430 = pplVar7;
                    }
                    if ((pplVar6 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= pplVar6)
                            ) {
                        FUN_140881720(DAT_140c10f28,pplVar6);
                        _DAT_140c62448 = _DAT_140c62448 + -1;
                    }
                    else {
                        *pplVar6 = (longlong *)DAT_140c62438;
                        _DAT_140c62448 = _DAT_140c62448 + -1;
                        DAT_140c62438 = pplVar6;
                    }
                    goto LAB_140858b20;
                }
                if (iVar4 == 0x3f) {
                    bVar3 = true;
                }
                else {
                    *(undefined *)(pplVar6 + 3) = 1;
                }
            }
            pplVar2 = (longlong **)*pplVar6;
            pplVar7 = pplVar6;
        } while (*pplVar6 != (longlong *)0x0);
        if (!bVar3) {
            if (*(char *)(local_78 + 3) == '\0') {
                plVar5 = (longlong *)FUN_140833330();
                if (plVar5 == (longlong *)0x0) {
                    pplVar2 = (longlong **)*local_78;
                    pplVar7 = pplVar2;
                    if (local_78 != DAT_140c62428) {
                        *pplStack112 = (longlong *)pplVar2;
                        pplVar7 = DAT_140c62428;
                    }
                    DAT_140c62428 = pplVar7;
                    if (local_78 == DAT_140c62430) {
                        DAT_140c62430 = pplStack112;
                    }
                    if ((local_78 < DAT_140c62450) ||
                        (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= local_78)) {
                        FUN_140881720(DAT_140c10f28,local_78);
                    }
                    else {
                        *local_78 = (longlong *)DAT_140c62438;
                        DAT_140c62438 = local_78;
                    }
                    _DAT_140c62448 = _DAT_140c62448 + -1;
                    goto LAB_140858b31;
                }
            }
            else {
                plVar5 = (longlong *)local_78[1][0x17];
            }
            if (*(char *)(local_78 + 3) == '\0') {
                if ((*(int *)(local_78 + 2) == 2) && (plVar5 != (longlong *)0x0)) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                    pplVar2 = (longlong **)*local_78;
                    pplVar7 = pplVar2;
                    if (local_78 != DAT_140c62428) {
                        *pplStack112 = (longlong *)pplVar2;
                        pplVar7 = DAT_140c62428;
                    }
                    DAT_140c62428 = pplVar7;
                    if (local_78 == DAT_140c62430) {
                        DAT_140c62430 = pplStack112;
                    }
                    if ((local_78 < DAT_140c62450) ||
                        (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= local_78)) {
                        FUN_140881720(DAT_140c10f28,local_78);
                    }
                    else {
                        *local_78 = (longlong *)DAT_140c62438;
                        DAT_140c62438 = local_78;
                    }
                    _DAT_140c62448 = _DAT_140c62448 + -1;
                }
                else {
                    pplVar2 = (longlong **)*local_78;
                    pplStack112 = local_78;
                }
            }
            else {
                switch(*(undefined4 *)(local_78 + 2)) {
                    case 0:
                        FUN_140848c80(plVar5);
                        break;
                    case 1:
                        FUN_140848c80(plVar5);
                    case 3:
                        (**(code **)(*plVar5 + 0x18))(plVar5);
                        break;
                    case 2:
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                        break;
                    case 4:
                        (**(code **)(*plVar5 + 0x20))(plVar5);
                        break;
                    case 5:
                        (**(code **)(*plVar5 + 0x28))(plVar5,local_78[1]);
                        break;
                    case 6:
                        (**(code **)(*plVar5 + 0x30))(plVar5);
                }
                pplVar2 = (longlong **)*local_78;
                pplVar7 = pplVar2;
                if (local_78 != DAT_140c62428) {
                    *pplStack112 = (longlong *)pplVar2;
                    pplVar7 = DAT_140c62428;
                }
                DAT_140c62428 = pplVar7;
                if (local_78 == DAT_140c62430) {
                    DAT_140c62430 = pplStack112;
                }
                if ((local_78 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= local_78)
                        ) {
                    FUN_140881720(DAT_140c10f28,local_78);
                }
                else {
                    *local_78 = (longlong *)DAT_140c62438;
                    DAT_140c62438 = local_78;
                }
                _DAT_140c62448 = _DAT_140c62448 + -1;
            }
            goto LAB_140858b31;
        }
        do {
            pplStack112 = local_78;
            local_78 = (longlong **)*pplStack112;
            if (local_78 == (longlong **)0x0) {
                return;
            }
            pplVar2 = local_78;
        } while (iVar1 == *(int *)((longlong)local_78 + 0x14));
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140858ef0(void)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar5 = (undefined8 *)0x0;
    puVar3 = DAT_140c62428;
    if (DAT_140c62428 != (undefined8 *)0x0) {
        do {
            if (((*(longlong *)(puVar3[1] + 0xb8) == 0) && (*(uint *)(puVar3 + 2) < 2)) &&
                (iVar2 = FUN_1408318c0(), iVar2 != 1)) {
                puVar4 = (undefined8 *)*puVar3;
                puVar1 = puVar4;
                if (puVar3 != DAT_140c62428) {
                    *puVar5 = puVar4;
                    puVar1 = DAT_140c62428;
                }
                DAT_140c62428 = puVar1;
                if (puVar3 == DAT_140c62430) {
                    DAT_140c62430 = puVar5;
                }
                if ((puVar3 < DAT_140c62450) || (DAT_140c62450 + (ulonglong)DAT_140c62440 * 4 <= puVar3)) {
                    FUN_140881720(DAT_140c10f28,puVar3);
                }
                else {
                    *puVar3 = DAT_140c62438;
                    DAT_140c62438 = puVar3;
                }
                _DAT_140c62448 = _DAT_140c62448 + -1;
            }
            else {
                puVar4 = (undefined8 *)*puVar3;
                puVar5 = puVar3;
            }
            puVar3 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
        DAT_140c62414 = 0;
        return;
    }
    DAT_140c62414 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140859010(void)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    DAT_140c62418 = 0;
    DAT_140c62420 = 0;
    if (DAT_140c62444 != 0) {
        while (puVar3 = DAT_140c62428, puVar2 = DAT_140c62438, puVar1 = DAT_140c62450,
                DAT_140c62428 != (undefined8 *)0x0) {
            if (DAT_140c62428 == DAT_140c62430) {
                DAT_140c62430 = (undefined8 *)0x0;
            }
            if ((DAT_140c62428 < DAT_140c62450) ||
                (DAT_140c62450 + (_DAT_140c62440 & 0xffffffff) * 4 <= DAT_140c62428)) {
                DAT_140c62428 = (undefined8 *)*DAT_140c62428;
                FUN_140881720(DAT_140c10f28,puVar3);
                _DAT_140c62448 = _DAT_140c62448 + -1;
            }
            else {
                puVar2 = (undefined8 *)*DAT_140c62428;
                *DAT_140c62428 = DAT_140c62438;
                DAT_140c62428 = puVar2;
                _DAT_140c62448 = _DAT_140c62448 + -1;
                DAT_140c62438 = puVar3;
            }
        }
        while (puVar2 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*puVar2;
            if ((puVar2 < puVar1) ||
                (bVar4 = puVar1 + (_DAT_140c62440 & 0xffffffff) * 4 <= puVar2, puVar2 = puVar3, bVar4)) {
                FUN_140881720(DAT_140c10f28);
                puVar2 = puVar3;
                puVar1 = DAT_140c62450;
            }
        }
        if (puVar1 != (undefined8 *)0x0) {
            FUN_140881720(DAT_140c10f28,puVar1);
        }
        _DAT_140c62440 = 0;
        DAT_140c62428 = (undefined8 *)0x0;
        DAT_140c62430 = (undefined8 *)0x0;
    }
    return;
}



void FUN_140859140(longlong *param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    lVar3 = *param_1;
    iVar6 = 0;
    iVar5 = (int)(param_1[1] - lVar3 >> 3) + -1;
    iVar4 = iVar6;
    if (-1 < iVar5) {
        do {
            iVar4 = (iVar5 - iVar6) / 2 + iVar6;
            uVar2 = *(uint *)(*(longlong *)(lVar3 + (longlong)iVar4 * 8) + 0x18);
            if (param_2 < uVar2) {
                iVar5 = iVar4 + -1;
            }
            else {
                if (param_2 <= uVar2) goto LAB_140859198;
                iVar6 = iVar4 + 1;
            }
            iVar4 = iVar6;
        } while (iVar6 <= iVar5);
    }
    if (lVar3 != 0) {
        LAB_140859198:
        lVar1 = lVar3 + (longlong)iVar4 * 8;
        if (lVar1 != 0) {
            FUN_14085ae30(param_1,lVar1 - lVar3 >> 3 & 0xffffffff);
            return;
        }
    }
    FUN_140859980(param_1);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014085922e)

longlong FUN_1408591d0(longlong *param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    lVar2 = *param_1;
    iVar5 = 0;
    iVar4 = (int)(param_1[1] - lVar2 >> 3) + -1;
    if (-1 < iVar4) {
        do {
            iVar3 = (iVar4 - iVar5) / 2 + iVar5;
            uVar1 = *(uint *)(*(longlong *)(lVar2 + (longlong)iVar3 * 8) + 0x18);
            if (param_2 < uVar1) {
                iVar4 = iVar3 + -1;
            }
            else {
                if (param_2 <= uVar1) {
                    return lVar2 + (longlong)iVar3 * 8;
                }
                iVar5 = iVar3 + 1;
            }
        } while (iVar5 <= iVar4);
    }
    if (lVar2 == 0) {
        return 0;
    }
    return 0;
}



void FUN_140859270(longlong *param_1,uint param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined8 *puVar7;

    lVar3 = *param_1;
    iVar4 = 0;
    iVar6 = (int)(param_1[1] - lVar3 >> 3) + -1;
    if (iVar6 < 0) {
        return;
    }
    do {
        iVar2 = (iVar6 - iVar4) / 2 + iVar4;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + (longlong)iVar2 * 8) + 0x18);
        if (param_2 < uVar1) {
            iVar6 = iVar2 + -1;
        }
        else {
            if (param_2 <= uVar1) {
                puVar5 = (undefined8 *)(lVar3 + (longlong)iVar2 * 8);
                puVar7 = (undefined8 *)(param_1[1] - 8);
                if (puVar5 < puVar7) {
                    lVar3 = ((ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) >> 3) + 1;
                    puVar7 = puVar5;
                    for (; puVar5 = puVar5 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
                        *puVar7 = *puVar5;
                        puVar7 = puVar7 + 1;
                    }
                }
                param_1[1] = param_1[1] + -8;
                return;
            }
            iVar4 = iVar2 + 1;
        }
    } while (iVar4 <= iVar6);
    return;
}



undefined8 * FUN_140859300(undefined8 *param_1)

{
    FUN_140851300();
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = &PTR_FUN_1409a3f90;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f;
    *(undefined4 *)(param_1 + 0x15) = 0xc2c0999a;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xe0;
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x60;
    param_1[0x28] = 0;
    return param_1;
}



void FUN_1408593a0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    LPCRITICAL_SECTION lpCriticalSection;
    bool bVar3;

    puVar1 = (undefined8 *)param_1[0x1c];
    *param_1 = &PTR_FUN_1409a3f90;
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
        FUN_140877050(puVar1 + 2);
    }
    if (*(int *)((longlong)param_1 + 0xfc) != 0) {
        while (puVar1 = (undefined8 *)param_1[0x1c], puVar1 != (undefined8 *)0x0) {
            param_1[0x1c] = *puVar1;
            if (puVar1 == (undefined8 *)param_1[0x1d]) {
                param_1[0x1d] = 0;
            }
            if ((puVar1 < (undefined8 *)param_1[0x21]) ||
                ((undefined8 *)param_1[0x21] + (ulonglong)*(uint *)(param_1 + 0x1f) * 6 <= puVar1)) {
                FUN_140881720(DAT_140c10f20);
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
            }
            else {
                *puVar1 = param_1[0x1e];
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
                param_1[0x1e] = puVar1;
            }
        }
        puVar1 = (undefined8 *)param_1[0x1e];
        while (puVar1 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar1;
            if ((puVar1 < (undefined8 *)param_1[0x21]) ||
                (bVar3 = (undefined8 *)param_1[0x21] + (ulonglong)*(uint *)(param_1 + 0x1f) * 6 <= puVar1,
                        puVar1 = puVar2, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar1 = puVar2;
            }
        }
        if (param_1[0x21] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[0x1f] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
    }
    for (puVar1 = (undefined8 *)param_1[0x22]; puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)*puVar1) {
        FUN_140877050(puVar1 + 2);
    }
    if (*(int *)((longlong)param_1 + 300) != 0) {
        while (puVar1 = (undefined8 *)param_1[0x22], puVar1 != (undefined8 *)0x0) {
            param_1[0x22] = *puVar1;
            if (puVar1 == (undefined8 *)param_1[0x23]) {
                param_1[0x23] = 0;
            }
            if ((puVar1 < (undefined8 *)param_1[0x27]) ||
                ((undefined8 *)param_1[0x27] + (ulonglong)*(uint *)(param_1 + 0x25) * 6 <= puVar1)) {
                FUN_140881720(DAT_140c10f20);
                *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + -1;
            }
            else {
                *puVar1 = param_1[0x24];
                *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + -1;
                param_1[0x24] = puVar1;
            }
        }
        puVar1 = (undefined8 *)param_1[0x24];
        while (puVar1 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar1;
            if ((puVar1 < (undefined8 *)param_1[0x27]) ||
                (bVar3 = (undefined8 *)param_1[0x27] + (ulonglong)*(uint *)(param_1 + 0x25) * 6 <= puVar1,
                        puVar1 = puVar2, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar1 = puVar2;
            }
        }
        if (param_1[0x27] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[0x25] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
    }
    if (*(int *)((longlong)param_1 + 0xcc) != 0) {
        while (puVar1 = (undefined8 *)param_1[0x16], puVar1 != (undefined8 *)0x0) {
            param_1[0x16] = *puVar1;
            if (puVar1 == (undefined8 *)param_1[0x17]) {
                param_1[0x17] = 0;
            }
            if ((puVar1 < (undefined8 *)param_1[0x1b]) ||
                ((undefined8 *)param_1[0x1b] + (ulonglong)*(uint *)(param_1 + 0x19) * 4 <= puVar1)) {
                FUN_140881720(DAT_140c10f20);
                *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + -1;
            }
            else {
                *puVar1 = param_1[0x18];
                *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + -1;
                param_1[0x18] = puVar1;
            }
        }
        puVar1 = (undefined8 *)param_1[0x18];
        while (puVar1 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar1;
            if ((puVar1 < (undefined8 *)param_1[0x1b]) ||
                (bVar3 = (undefined8 *)param_1[0x1b] + (ulonglong)*(uint *)(param_1 + 0x19) * 4 <= puVar1,
                        puVar1 = puVar2, bVar3)) {
                FUN_140881720(DAT_140c10f20);
                puVar1 = puVar2;
            }
        }
        if (param_1[0x1b] != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        param_1[0x19] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
    }
    if (param_1 == DAT_140c62458) {
        lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
        EnterCriticalSection(lpCriticalSection);
        DAT_140c62458 = (undefined8 *)0x0;
        LeaveCriticalSection(lpCriticalSection);
        if (DAT_140c61b58 != 0) {
            *(undefined *)(DAT_140c61b58 + 0xd0) = 0;
        }
        FUN_140842690();
    }
    if (param_1[0x11] != 0) {
        param_1[0x12] = param_1[0x11];
        FUN_140881720(DAT_140c10f20);
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        *(undefined4 *)(param_1 + 0x13) = 0;
    }
    *param_1 = &PTR_FUN_1409a3d00;
    if (param_1[0xe] != 0) {
        param_1[0xf] = param_1[0xe];
        FUN_140881720(DAT_140c10f20);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_140851350(param_1);
    return;
}



undefined8 * FUN_1408597a0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a3d00;
    if (param_1[0xe] != 0) {
        param_1[0xf] = param_1[0xe];
        FUN_140881720(DAT_140c10f20);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_140851350(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_140859810(undefined8 param_1,uint param_2)

{
    FUN_1408593a0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_140859890(longlong *param_1,longlong *param_2)

{
    int iVar1;
    longlong **pplVar2;

    iVar1 = (**(code **)(*param_1 + 0x280))();
    if (iVar1 == 1) {
        pplVar2 = (longlong **)FUN_140859140(param_1 + 0xe,*(undefined4 *)(param_2 + 3));
        if (pplVar2 == (longlong **)0x0) {
            iVar1 = 2;
        }
        else {
            *pplVar2 = param_2;
            (**(code **)(*param_2 + 0x30))(param_2,param_1);
            (**(code **)(*param_1 + 8))(param_1);
        }
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    return iVar1;
}



longlong FUN_140859980(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_140892ef0(param_1,1), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 8;
    return lVar1;
}



undefined4 FUN_140859a10(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;

    if (*(longlong *)(param_2 + 0x48) != 0) {
        return 0x15;
    }
    uVar2 = 1;
    if ((*(byte *)(param_2 + 0x5b) >> 1 & 1) == 0) {
        lVar3 = FUN_1408591d0(param_1 + 0x70,*(undefined4 *)(param_2 + 0x18));
        if (lVar3 != 0) {
            return 5;
        }
        return 1;
    }
    iVar1 = *(int *)(param_2 + 0x18);
    lVar3 = FUN_1408591d0(param_1 + 0x88,iVar1);
    if (lVar3 != 0) {
        return 5;
    }
    if (*(int *)(param_1 + 0x18) == iVar1) {
        uVar2 = 0x17;
    }
    return uVar2;
}



void FUN_140859ac0(longlong param_1)

{
    undefined8 *puVar1;

    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    while( true ) {
        if (puVar1 == (undefined8 *)0x0) {
            for (puVar1 = *(undefined8 **)(param_1 + 0x110);
                 (puVar1 != (undefined8 *)0x0 &&
                  (-0.01 < *(float *)(puVar1 + 5) || *(float *)(puVar1 + 5) == -0.01));
                 puVar1 = (undefined8 *)*puVar1) {
            }
            return;
        }
        if (*(float *)(puVar1 + 5) <= -0.01 && *(float *)(puVar1 + 5) != -0.01) break;
        puVar1 = (undefined8 *)*puVar1;
    }
    return;
}



void FUN_140859b30(void)

{
    LPCRITICAL_SECTION lpCriticalSection;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
    EnterCriticalSection(lpCriticalSection);
    DAT_140c62458 = 0;
    // WARNING: Could not recover jumptable at 0x000140859b66. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(lpCriticalSection);
    return;
}



longlong * FUN_140859b70(undefined4 param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_1408819f0(DAT_140c10f20,0x150);
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140859300(lVar2,param_1);
        if (plVar3 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        iVar1 = FUN_14085ad70(plVar3);
        if (iVar1 == 1) {
            if (DAT_140c62458 == (longlong *)0x0) {
                DAT_140c62458 = plVar3;
            }
            return plVar3;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    return (longlong *)0x0;
}



void FUN_140859be0(longlong param_1)

{
    longlong *plVar1;

    FUN_140851c70();
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x138))(plVar1,3);
    }
    if ((*(longlong ***)(param_1 + 0x68) != (longlong **)0x0) &&
        (plVar1 = **(longlong ***)(param_1 + 0x68), plVar1 != (longlong *)0x0)) {
        // WARNING: Could not recover jumptable at 0x000140859c23. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x138))(plVar1,3);
        return;
    }
    return;
}



void FUN_140859cc0(longlong param_1,longlong param_2)

{
    longlong *plVar1;

    if ((((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x48) == 0)) &&
        (*(char *)(param_2 + 0x24) == '\0')) {
        FUN_140851f80(param_1,param_2 + 0x22,*(undefined *)(param_2 + 0x25));
        *(undefined *)(param_2 + 0x24) = 1;
    }
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x128))(plVar1,param_2);
    }
    if ((*(longlong ***)(param_1 + 0x68) != (longlong **)0x0) &&
        (plVar1 = **(longlong ***)(param_1 + 0x68), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x128))(plVar1,param_2);
    }
    return;
}



void FUN_140859d40(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   int param_5_00,undefined8 param_6_00,undefined4 param_7,undefined4 param_5,
                   int param_6)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)0x0;
    if (param_6 == 0) {
        puVar1 = (undefined8 *)(param_4 + 0xe0);
    }
    else if (param_6 == 4) {
        puVar1 = (undefined8 *)(param_4 + 0x110);
    }
    puVar1 = (undefined8 *)*puVar1;
    do {
        if (puVar1 == (undefined8 *)0x0) {
            LAB_140859da8:
            puVar1 = (undefined8 *)FUN_14085bd50();
            if (puVar1 != (undefined8 *)0x0) {
                param_1 = FUN_140877030(puVar1,param_4);
                LAB_140859dc0:
                FUN_14085c450(param_1,param_2,param_3,param_4,puVar1,param_6_00,2,param_5,param_7,param_6);
            }
            return;
        }
        if (*(int *)(puVar1 + 1) == param_5_00) {
            puVar1 = puVar1 + 2;
            if (puVar1 != (undefined8 *)0x0) goto LAB_140859dc0;
            goto LAB_140859da8;
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
}



void FUN_140859e10(longlong param_1)

{
    if ((*(byte *)(param_1 + 0x148) & 0xe) == 4) {
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf1;
        FUN_14085c7e0();
        return;
    }
    return;
}



undefined8 FUN_140859f30(longlong *param_1,int *param_2)

{
    longlong *plVar1;
    char cVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;

    if (*(longlong *)(param_2 + 4) == 0) {
        (**(code **)(*param_1 + 0x158))
                (param_1,(ulonglong)param_2 & 0xffffffffffffff00 | (ulonglong)(*param_2 == 1));
    }
    *(undefined *)(param_2 + 9) = 1;
    uVar4 = param_1[0xf] - param_1[0xe] >> 3;
    if ((int)uVar4 != 0) {
        lVar5 = (uVar4 & 0xffffffff) << 3;
        do {
            lVar5 = lVar5 + -8;
            plVar1 = *(longlong **)(lVar5 + param_1[0xe]);
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
            cVar2 = FUN_140853640(plVar1,*(undefined8 *)(param_2 + 2));
            if (cVar2 == '\0') {
                (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
            }
        } while (uVar3 != 0);
    }
    uVar4 = param_1[0x12] - param_1[0x11] >> 3;
    if ((int)uVar4 != 0) {
        lVar5 = (uVar4 & 0xffffffff) << 3;
        do {
            lVar5 = lVar5 + -8;
            plVar1 = *(longlong **)(lVar5 + param_1[0x11]);
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
            cVar2 = FUN_140853640(plVar1,*(undefined8 *)(param_2 + 2));
            if (cVar2 == '\0') {
                (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
            }
        } while (uVar3 != 0);
    }
    return 1;
}



void FUN_14085a040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    pplVar4 = (longlong **)(param_1 + 0x88);
    pplVar3 = (longlong **)*pplVar4;
    pplVar1 = (longlong **)(param_1 + 0x70);
    if (pplVar3 == *(longlong ***)(param_1 + 0x90)) {
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
        if (pplVar3 == (longlong **)pplVar4[1]) {
            return;
        }
    }
    do {
        do {
            plVar2 = *pplVar3;
            if ((plVar2[7] != 0) && (*(short *)(plVar2[7] + 0x48) != 0)) {
                (**(code **)(*plVar2 + 0xd0))(plVar2,param_2,param_3,param_4);
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != (longlong **)pplVar4[1]);
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
    } while (pplVar3 != (longlong **)pplVar4[1]);
    return;
}



undefined8
FUN_14085a0f0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,undefined8 param_5,
              undefined param_6,undefined8 param_7)

{
    byte *pbVar1;
    longlong *plVar2;
    float *pfVar3;
    float *pfVar4;
    uint uVar5;
    float *pfVar6;
    float fVar7;
    float local_res18 [2];
    longlong local_28;
    uint uStack32;

    FUN_1408527d0(param_1,param_2,param_3 & 0xfffffff6);
    pfVar6 = (float *)0x0;
    if ((param_3 & 2) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res18[0] = 0.0;
        pfVar4 = pfVar6;
        if (pbVar1 != (byte *)0x0) {
            pfVar3 = pfVar6;
            do {
                uVar5 = (int)pfVar3 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == 2) {
                    pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar3 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
        pfVar3 = local_res18;
        if (pfVar4 != (float *)0x0) {
            pfVar3 = pfVar4;
        }
        local_res18[0] = *pfVar3;
        *(float *)(param_2 + 8) = local_res18[0] + *(float *)(param_2 + 8);
        if ((*(ulonglong *)(param_1 + 0x60) >> 2 & 1) != 0) {
            fVar7 = (float)FUN_140836340();
            *(float *)(param_2 + 8) = fVar7 + *(float *)(param_2 + 8);
        }
    }
    if ((param_3 & 4) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x50);
        local_res18[0] = 0.0;
        pfVar4 = pfVar6;
        if (pbVar1 != (byte *)0x0) {
            pfVar3 = pfVar6;
            do {
                uVar5 = (int)pfVar3 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == 3) {
                    pfVar4 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar3 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
        pfVar3 = local_res18;
        if (pfVar4 != (float *)0x0) {
            pfVar3 = pfVar4;
        }
        local_res18[0] = *pfVar3;
        *(float *)(param_2 + 0xc) = local_res18[0] + *(float *)(param_2 + 0xc);
        if ((*(ulonglong *)(param_1 + 0x60) >> 3 & 1) != 0) {
            fVar7 = (float)FUN_140836340();
            *(float *)(param_2 + 0xc) = fVar7 + *(float *)(param_2 + 0xc);
        }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar4 = pfVar6;
            do {
                uVar5 = (int)pfVar4 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == 2) {
                    if ((float *)(pbVar1 + (longlong)pfVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                        != (float *)0x0) {
                        *(float *)(param_2 + 8) =
                                *(float *)(param_2 + 8) +
                                *(float *)(pbVar1 + (longlong)pfVar4 * 0x10 +
                                           ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    }
                    break;
                }
                pfVar4 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            pfVar4 = pfVar6;
            do {
                uVar5 = (int)pfVar4 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar5 + (longlong)pbVar1) == 3) {
                    if ((float *)(pbVar1 + (longlong)pfVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                        != (float *)0x0) {
                        *(float *)(param_2 + 0xc) =
                                *(float *)(param_2 + 0xc) +
                                *(float *)(pbVar1 + (longlong)pfVar4 * 0x10 +
                                           ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    }
                    break;
                }
                pfVar4 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
        pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18);
        if (pbVar1 != (byte *)0x0) {
            do {
                uVar5 = (int)pfVar6 + 1;
                if (pbVar1[uVar5] == 10) {
                    if (((float *)(pbVar1 + (longlong)pfVar6 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                         != (float *)0x0) &&
                        (*(float *)(pbVar1 + (longlong)pfVar6 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
                         != 1.0)) {
                        uStack32 = uStack32 & 0xfffffffd | 1;
                        local_28 = param_1;
                        FUN_14084f8a0(param_4,&local_28);
                    }
                    break;
                }
                pfVar6 = (float *)(ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x150))
                (plVar2,param_2,param_3 & 0xfffffff6,param_4,param_5,param_6,param_7,1);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14085a3f0(longlong param_1,int param_2,int param_3)

{
    byte *pbVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined8 *puVar6;
    float fVar7;
    undefined4 uVar8;
    float fVar9;
    float local_res18;
    float local_58;
    undefined4 local_54;
    undefined8 local_50;
    undefined8 local_48;
    byte local_40;
    undefined4 local_3c;
    byte local_38;

    local_40 = local_40 & 0xfc;
    local_38 = local_38 & 0xfe;
    fVar9 = 0.0;
    local_54 = 0x3f800000;
    local_48._0_4_ = 0.0;
    local_58 = 0.0;
    local_50 = 0;
    local_48 = 0;
    local_3c = 0;
    if (param_3 == 0) {
        FUN_1408527d0(param_1,&local_58,1);
        local_48._0_4_ = local_58;
    }
    else if (param_3 == 4) {
        FUN_1408527d0(param_1,&local_58,8);
    }
    uVar8 = 0;
    pbVar1 = *(byte **)(param_1 + 0x50);
    puVar6 = (undefined8 *)0x0;
    local_res18 = 0.0;
    puVar4 = puVar6;
    if (pbVar1 != (byte *)0x0) {
        puVar3 = puVar6;
        do {
            uVar5 = (int)puVar3 + 1;
            if (*(byte *)((longlong)(undefined8 *)(ulonglong)uVar5 + (longlong)pbVar1) == (byte)param_3) {
                puVar4 = (undefined8 *)
                        (pbVar1 + (longlong)puVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            puVar3 = (undefined8 *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
    }
    puVar3 = (undefined8 *)&local_res18;
    if (puVar4 != (undefined8 *)0x0) {
        puVar3 = puVar4;
    }
    local_res18 = *(float *)puVar3;
    local_48._0_4_ = (float)local_48 + local_res18;
    if ((*(ulonglong *)(param_1 + 0x60) >> ((ulonglong)(uint)(&DAT_1409a3530)[param_3] & 0x3f) & 1) !=
        0) {
        fVar7 = (float)FUN_140836340();
        local_48._0_4_ = (float)local_48 + fVar7;
    }
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
        (pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x28) + 0x18), pbVar1 != (byte *)0x0)) {
        puVar4 = puVar6;
        do {
            uVar5 = (int)puVar4 + 1;
            if (*(byte *)((longlong)(undefined8 *)(ulonglong)uVar5 + (longlong)pbVar1) == (byte)param_3) {
                if ((float *)(pbVar1 + (longlong)puVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
                    (float *)0x0) {
                    local_48._0_4_ =
                            (float)local_48 +
                            *(float *)(pbVar1 + (longlong)puVar4 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
                }
                break;
            }
            puVar4 = (undefined8 *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
    }
    if (param_3 == 0) {
        puVar6 = (undefined8 *)(param_1 + 0xe0);
    }
    else if (param_3 == 4) {
        puVar6 = (undefined8 *)(param_1 + 0x110);
    }
    for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6)
    {
        fVar9 = fVar9 + *(float *)(puVar6 + 5);
    }
    if (fVar9 < *(float *)(param_1 + 0xa8)) {
        fVar9 = *(float *)(param_1 + 0xa8);
    }
    local_48._0_4_ = (float)local_48 + fVar9;
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
        ((param_2 == 1 || (cVar2 = FUN_14085af10(), cVar2 == '\0')))) {
        fVar9 = (float)FUN_14085a3f0(*(undefined8 *)(param_1 + 0x48),param_2,
                                     (longlong)param_3 & 0xffffffff);
        local_48._0_4_ = (float)local_48 + fVar9;
    }
    return CONCAT44(uVar8,(float)local_48);
}



byte FUN_14085a600(longlong param_1)

{
    byte bVar1;
    float extraout_XMM0_Da;

    if ((*(longlong *)(param_1 + 0x30) == 0) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x20) & 0x10) == 0)) {
        bVar1 = 0;
    }
    else {
        bVar1 = 1;
    }
    if ((*(uint *)(param_1 + 0x60) >> 0x1c & 1) != 0) {
        FUN_140836340(DAT_140c61bb0,param_1,0x1c);
        if (extraout_XMM0_Da != 0.0) {
            return 1;
        }
        return 0;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        return *(byte *)(*(longlong *)(param_1 + 0x28) + 0x20) >> 4 & 1;
    }
    return bVar1;
}



ulonglong FUN_14085a670(longlong param_1,uint param_2)

{
    longlong lVar1;
    ulonglong in_RAX;
    byte bVar2;
    float fVar3;

    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    bVar2 = *(byte *)(lVar1 + 0x20) >> ((byte)param_2 & 0x1f);
    if ((*(int *)(lVar1 + 4 + (ulonglong)param_2 * 8) != 0) &&
        ((*(ulonglong *)(param_1 + 0x60) >> ((ulonglong)(param_2 + 0x18 & 0xff) & 0x3f) & 1) != 0)) {
        fVar3 = (float)FUN_140836340(DAT_140c61bb0,param_1,param_2 + 0x18,0);
        if (fVar3 != 0.0) {
            return 1;
        }
        return 0;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x20) >> ((byte)param_2 & 0x1f);
    }
    return (ulonglong)(bVar2 & 1);
}



void FUN_14085a710(longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
    longlong **pplVar1;

    pplVar1 = *(longlong ***)(param_1 + 0x70);
    if (pplVar1 != *(longlong ***)(param_1 + 0x78)) {
        do {
            if (*param_4 < *param_2) {
                *(undefined4 *)(param_3 + (ulonglong)*param_4 * 0xc) = *(undefined4 *)(*pplVar1 + 3);
                *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
                        *(undefined4 *)((*pplVar1)[8] + 0x18);
                *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
            }
            *param_4 = *param_4 + 1;
        } while (((*param_4 != *param_2) &&
                  ((**(code **)(**pplVar1 + 0x68))(*pplVar1,param_2,param_3,param_4,param_5 + 1),
                          *param_4 != *param_2)) &&
                 (pplVar1 = pplVar1 + 1, pplVar1 != *(longlong ***)(param_1 + 0x78)));
    }
    return;
}



float FUN_14085a7d0(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    float fVar2;

    puVar1 = (undefined8 *)0x0;
    if (param_2 == 0) {
        puVar1 = (undefined8 *)(param_1 + 0xe0);
    }
    else if (param_2 == 4) {
        puVar1 = (undefined8 *)(param_1 + 0x110);
    }
    fVar2 = 0.0;
    for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
    {
        fVar2 = fVar2 + *(float *)(puVar1 + 5);
    }
    if (fVar2 < *(float *)(param_1 + 0xa8)) {
        fVar2 = *(float *)(param_1 + 0xa8);
    }
    return fVar2;
}



void FUN_14085a8e0(longlong param_1,ulonglong param_2,int param_3,int *param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    int *piVar3;
    longlong *plVar4;
    int *piVar5;
    int iVar6;

    *param_4 = -1;
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (lVar2 == 0) {
        return;
    }
    uVar1 = *(undefined4 *)(lVar2 + 4 + (param_2 & 0xffffffff) * 8);
    if (*(char *)(lVar2 + 1 + (param_2 & 0xffffffff) * 8) == '\0') {
        plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x3e30,uVar1);
    }
    else {
        plVar4 = (longlong *)FUN_14083ede0(DAT_140c61ba8 + 0x37f8,uVar1);
    }
    if (plVar4 == (longlong *)0x0) {
        return;
    }
    piVar5 = (int *)plVar4[6];
    piVar3 = (int *)plVar4[7];
    if (piVar5 != piVar3) {
        do {
            if (*piVar5 == param_3) break;
            piVar5 = piVar5 + 2;
        } while (piVar5 != piVar3);
        if ((piVar5 != piVar3) && (piVar5 + 1 != (int *)0x0)) {
            iVar6 = piVar5[1];
            goto LAB_14085a96e;
        }
    }
    iVar6 = 0;
    LAB_14085a96e:
    *param_4 = iVar6;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
}



longlong * FUN_14085a9a0(void)

{
    longlong *plVar1;
    LPCRITICAL_SECTION lpCriticalSection;

    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,1);
    EnterCriticalSection(lpCriticalSection);
    plVar1 = DAT_140c62458;
    if (DAT_140c62458 != (longlong *)0x0) {
        (**(code **)(*DAT_140c62458 + 8))(DAT_140c62458);
    }
    LeaveCriticalSection(lpCriticalSection);
    return plVar1;
}



longlong * FUN_14085aa00(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    int *piVar3;
    uint uVar4;

    if (param_1[6] != 0) {
        uVar4 = 0;
        piVar3 = (int *)(param_1[6] + 4);
        do {
            if (*piVar3 != 0) goto LAB_14085aa6a;
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar4 < 4);
    }
    iVar1 = (**(code **)(*param_1 + 0x70))();
    if ((((iVar1 == 0xc) || (*(int *)((longlong)param_1 + 0xa4) != 0)) ||
         ((*(byte *)((longlong)param_1 + 0x5b) & 4) != 0)) ||
        ((param_1 != DAT_140c62458 && ((*(byte *)((longlong)param_1 + 0x5b) & 8) != 0)))) {
        LAB_14085aa6a:
        if (param_1 != DAT_140c62458) {
            return param_1;
        }
    }
    plVar2 = (longlong *)param_1[9];
    if ((plVar2 == (longlong *)0x0) && (plVar2 = (longlong *)param_1[8], plVar2 == (longlong *)0x0)) {
        return (longlong *)0x0;
    }
    // WARNING: Could not recover jumptable at 0x000140852d2f. Too many branches
    // WARNING: Treating indirect jump as call
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0xf8))();
    return plVar2;
}



undefined8 * FUN_14085aa80(longlong param_1)

{
    char cVar1;
    undefined8 *puVar2;
    uint uVar3;
    uint uVar4;
    byte bVar5;

    FUN_140830940(DAT_140c61ba0,param_1);
    if (*(longlong *)(param_1 + 0x28) == 0) {
        bVar5 = 0;
        uVar3 = 0;
        do {
            cVar1 = FUN_14085a670(param_1,uVar3);
            uVar4 = uVar3 + 1;
            bVar5 = bVar5 | (cVar1 != '\0') << ((byte)uVar3 & 0x1f);
            uVar3 = uVar4;
        } while (uVar4 < 4);
        puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x28);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = param_1;
            puVar2[2] = 0;
            *puVar2 = &PTR_FUN_1409a3278;
            puVar2[3] = 0;
            *(byte *)(puVar2 + 4) = bVar5;
            *(undefined8 **)(param_1 + 0x28) = puVar2;
            return puVar2;
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    return *(undefined8 **)(param_1 + 0x28);
}



undefined FUN_14085ab30(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    char cVar1;

    cVar1 = FUN_140851b30();
    while( true ) {
        if (cVar1 != '\0') {
            return 1;
        }
        param_1 = *(longlong *)(param_1 + 0x48);
        if (param_1 == 0) break;
        cVar1 = FUN_140851b30(param_1,param_2,param_3);
    }
    return 0;
}



int FUN_14085ac00(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    undefined8 extraout_XMM0_Qa;

    iVar2 = FUN_140853540();
    if (((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x48) == 0)) {
        if ((*(char *)(param_2 + 9) == '\0') && (iVar2 == 1)) {
            iVar2 = FUN_140853430(extraout_XMM0_Qa,*param_2,param_1);
        }
        *(undefined *)(param_2 + 9) = 1;
    }
    iVar4 = iVar2;
    if ((((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
          (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x110))(), iVar3 != 1)) &&
         (iVar4 = iVar3, iVar3 == 0x50)) && (iVar4 = iVar2, iVar2 == 1)) {
        iVar4 = 0x50;
    }
    iVar2 = iVar4;
    if (((*(longlong ***)(param_1 + 0x68) != (longlong **)0x0) &&
         (plVar1 = **(longlong ***)(param_1 + 0x68), plVar1 != (longlong *)0x0)) &&
        ((iVar3 = (**(code **)(*plVar1 + 0x110))(), iVar3 != 1 &&
                                                    ((iVar2 = iVar3, iVar3 == 0x50 && (iVar2 = iVar4, iVar4 == 1)))))) {
        iVar2 = 0x50;
    }
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
        (*(short *)(*(longlong *)(param_1 + 0x38) + 0x48) == 1)) {
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf3;
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 2;
        FUN_14085c7e0(param_1);
    }
    return iVar2;
}



void FUN_14085ad00(longlong param_1,longlong param_2)

{
    short *psVar1;
    longlong *plVar2;

    if (((*(byte *)(param_1 + 0x5a) & 8) != 0) || (*(longlong *)(param_1 + 0x48) == 0)) {
        if ((*(char *)(param_2 + 0x24) == '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
            psVar1 = (short *)(*(longlong *)(param_1 + 0x38) + 0x4e);
            *psVar1 = *psVar1 + 1;
        }
        *(undefined *)(param_2 + 0x24) = 1;
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x120))();
    }
    if ((*(longlong ***)(param_1 + 0x68) != (longlong **)0x0) &&
        (plVar2 = **(longlong ***)(param_1 + 0x68), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x120))(plVar2,param_2);
    }
    return;
}



undefined8 FUN_14085ad70(longlong *param_1)

{
    char cVar1;
    uint uVar2;

    uVar2 = (**(code **)(*param_1 + 0x70))();
    if ((uVar2 < 0xd) && ((0x1401U >> (uVar2 & 0x1f) & 1) != 0)) {
        cVar1 = '\x01';
    }
    else {
        cVar1 = '\0';
    }
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) & 0xfd;
    *(byte *)((longlong)param_1 + 0x5b) = *(byte *)((longlong)param_1 + 0x5b) | cVar1 * '\x02';
    FUN_140851a00(param_1);
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined8 *)((longlong)param_1 + 0xcc) = 100;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined8 *)((longlong)param_1 + 0xfc) = 100;
    param_1[0x24] = 0;
    param_1[0x27] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined8 *)((longlong)param_1 + 300) = 100;
    return 1;
}



longlong FUN_14085ae30(longlong *param_1,uint param_2)

{
    longlong lVar1;
    char cVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    uVar5 = param_1[1] - *param_1 >> 3 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar5) && (cVar2 = FUN_140892ef0(param_1,1), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar5) {
        return 0;
    }
    puVar3 = (undefined8 *)param_1[1];
    lVar1 = (ulonglong)param_2 * 8;
    param_1[1] = (longlong)(puVar3 + 1);
    if ((undefined8 *)(*param_1 + lVar1) < puVar3) {
        do {
            puVar4 = puVar3 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar4;
        } while ((undefined8 *)(*param_1 + lVar1) < puVar4);
    }
    return *param_1 + lVar1;
}



void FUN_14085aed0(longlong param_1,int param_2)

{
    if (((param_2 != *(int *)(param_1 + 0x18)) && (*(longlong *)(param_1 + 0x48) != 0)) &&
        ((*(byte *)(param_1 + 0x5a) & 8) == 0)) {
        FUN_14085aed0(*(longlong *)(param_1 + 0x48));
        return;
    }
    return;
}



undefined8 FUN_14085af10(longlong *param_1)

{
    int iVar1;
    int *piVar2;
    uint uVar3;

    if (param_1[6] != 0) {
        uVar3 = 0;
        piVar2 = (int *)(param_1[6] + 4);
        do {
            if (*piVar2 != 0) {
                return 1;
            }
            uVar3 = uVar3 + 1;
            piVar2 = piVar2 + 2;
        } while (uVar3 < 4);
    }
    iVar1 = (**(code **)(*param_1 + 0x70))();
    if ((((iVar1 != 0xc) && (*(int *)((longlong)param_1 + 0xa4) == 0)) &&
         ((*(byte *)((longlong)param_1 + 0x5b) & 4) == 0)) &&
        ((param_1 != DAT_140c62458 && ((*(byte *)((longlong)param_1 + 0x5b) & 8) == 0)))) {
        return 0;
    }
    return 1;
}



undefined FUN_14085af80(longlong param_1,longlong param_2)

{
    if (param_1 != 0) {
        do {
            if (param_2 == param_1) {
                return 1;
            }
            param_1 = *(longlong *)(param_1 + 0x48);
        } while (param_1 != 0);
    }
    return 0;
}



void FUN_14085b000(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5_00,undefined8 param_6,undefined param_5)

{
    longlong *plVar1;
    longlong **pplVar2;

    pplVar2 = *(longlong ***)(param_3 + 0x70);
    if (pplVar2 != *(longlong ***)(param_3 + 0x78)) {
        do {
            plVar1 = *pplVar2;
            if ((plVar1[7] != 0) && (*(short *)(plVar1[7] + 0x48) != 0)) {
                param_1 = (**(code **)(*plVar1 + 0xb8))
                        (param_1,param_2,plVar1,param_4,param_5_00,param_6,param_5);
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != *(longlong ***)(param_3 + 0x78));
    }
    return;
}



void FUN_14085b0a0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    pplVar4 = (longlong **)(param_3 + 0x88);
    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    pplVar3 = (longlong **)*pplVar4;
    pplVar1 = (longlong **)(param_3 + 0x70);
    if (pplVar3 == *(longlong ***)(param_3 + 0x90)) {
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
        if (pplVar3 == (longlong **)pplVar4[1]) {
            return;
        }
    }
    do {
        do {
            plVar2 = *pplVar3;
            if ((plVar2[7] != 0) && (*(short *)(plVar2[7] + 0x48) != 0)) {
                param_1 = (**(code **)(*plVar2 + 0xc0))(param_1,param_2,plVar2,param_4,param_5,1,auVar5);
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != (longlong **)pplVar4[1]);
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
    } while (pplVar3 != (longlong **)pplVar4[1]);
    return;
}



void FUN_14085b160(undefined8 param_1,float param_2,longlong param_3)

{
    byte *pbVar1;
    float *pfVar2;
    float *pfVar3;
    uint uVar4;
    float *pfVar5;
    float *pfVar6;
    float fVar7;
    float local_res8 [4];
    float local_res18;
    undefined4 local_res20;
    undefined4 local_res24;

    pbVar1 = *(byte **)(param_3 + 0x50);
    pfVar6 = (float *)0x0;
    local_res8[0] = 0.0;
    pfVar5 = pfVar6;
    if (pbVar1 != (byte *)0x0) {
        pfVar2 = pfVar6;
        do {
            uVar4 = (int)pfVar2 + 1;
            if (*(byte *)((longlong)(float *)(ulonglong)uVar4 + (longlong)pbVar1) == 0x1d) {
                pfVar5 = (float *)(pbVar1 + (longlong)pfVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                break;
            }
            pfVar2 = (float *)(ulonglong)uVar4;
        } while (uVar4 < *pbVar1);
    }
    pfVar2 = local_res8;
    if (pfVar5 != (float *)0x0) {
        pfVar2 = pfVar5;
    }
    if (*pfVar2 != 0.0) {
        local_res20 = 0;
        local_res24 = 4;
        local_res8[0] = DAT_140c11078;
        pfVar5 = pfVar6;
        if (pbVar1 != (byte *)0x0) {
            pfVar3 = pfVar6;
            do {
                uVar4 = (int)pfVar3 + 1;
                if (*(byte *)((longlong)(float *)(ulonglong)uVar4 + (longlong)pbVar1) == 0x1e) {
                    pfVar5 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar3 = (float *)(ulonglong)uVar4;
            } while (uVar4 < *pbVar1);
        }
        pfVar3 = local_res8;
        if (pfVar5 != (float *)0x0) {
            pfVar3 = pfVar5;
        }
        local_res18 = *pfVar3;
        local_res8[0] = DAT_140c1107c;
        if (pbVar1 != (byte *)0x0) {
            pfVar3 = pfVar6;
            do {
                uVar4 = (int)pfVar3 + 1;
                pfVar5 = (float *)(ulonglong)uVar4;
                if (*(byte *)((longlong)pfVar5 + (longlong)pbVar1) == 0x1f) {
                    pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    break;
                }
                pfVar3 = pfVar5;
            } while (uVar4 < *pbVar1);
        }
        pfVar3 = local_res8;
        if (pfVar6 != (float *)0x0) {
            pfVar3 = pfVar6;
        }
        local_res8[0] = *pfVar3;
        fVar7 = local_res18;
        if ((param_2 < local_res18) || (fVar7 = local_res8[0], local_res8[0] < param_2)) {
            param_2 = fVar7;
        }
        FUN_1408380a0(fVar7,param_2,param_2,DAT_140c61bb0,*pfVar2,pfVar5,0,&local_res20,1);
    }
    return;
}



void FUN_14085b2f0(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    char cVar4;
    uint uVar5;
    longlong **pplVar6;
    longlong **pplVar7;
    longlong **pplVar8;
    undefined4 extraout_XMM0_Da;
    float fVar9;

    *(undefined *)(param_2 + 4) = 1;
    if ((*param_2 == 4) && (cVar4 = FUN_14085af10(), lVar2 = DAT_140c61cc0, cVar4 != '\0')) {
        if (param_1 != DAT_140c62458) {
            FUN_140833840(extraout_XMM0_Da,param_2[8],*(undefined4 *)(param_1 + 0x18));
            return;
        }
        if (DAT_140c61cc0 != 0) {
            fVar9 = (float)param_2[8] + *(float *)(DAT_140c61cc0 + 0x314);
            *(float *)(DAT_140c61cc0 + 0x314) = fVar9;
            fVar9 = fVar9 * 0.05;
            if (fVar9 < -37.0) {
                *(undefined4 *)(lVar2 + 0x30c) = 0;
                return;
            }
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar5 = (uint)(longlong)(DAT_140c61bf8 * fVar9 + 1.065353e+09);
            fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
            *(float *)(lVar2 + 0x30c) =
                    ((fVar9 * 0.3251898 + 0.02080577) * fVar9 + 0.6530434) * (float)(uVar5 & 0xff800000);
            return;
        }
        return;
    }
    lVar2 = *(longlong *)(param_1 + 0x38);
    if ((lVar2 != 0) &&
        ((*(short *)(lVar2 + 0x48) != 0 || ((lVar2 != 0 && (*(short *)(lVar2 + 0x4a) != 0)))))) {
        iVar1 = *param_2;
        if (iVar1 == 4) {
            pplVar6 = *(longlong ***)(param_1 + 0x88);
            *(float *)(param_1 + 0x140) = (float)param_2[8] + *(float *)(param_1 + 0x140);
            if (pplVar6 != *(longlong ***)(param_1 + 0x90)) {
                do {
                    plVar3 = *pplVar6;
                    lVar2 = plVar3[7];
                    if ((lVar2 != 0) &&
                        ((*(short *)(lVar2 + 0x48) != 0 || ((lVar2 != 0 && (*(short *)(lVar2 + 0x4a) != 0))))))
                    {
                        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
                    }
                    pplVar6 = pplVar6 + 1;
                } while (pplVar6 != *(longlong ***)(param_1 + 0x90));
                return;
            }
        }
        else if (iVar1 == 0) {
            pplVar6 = *(longlong ***)(param_1 + 0x88);
            *(float *)(param_1 + 0x144) = (float)param_2[8] + *(float *)(param_1 + 0x144);
            if (pplVar6 != *(longlong ***)(param_1 + 0x90)) {
                do {
                    plVar3 = *pplVar6;
                    lVar2 = plVar3[7];
                    if ((lVar2 != 0) &&
                        ((*(short *)(lVar2 + 0x48) != 0 || ((lVar2 != 0 && (*(short *)(lVar2 + 0x4a) != 0))))))
                    {
                        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
                    }
                    pplVar6 = pplVar6 + 1;
                } while (pplVar6 != *(longlong ***)(param_1 + 0x90));
                return;
            }
        }
        else {
            if (iVar1 == 0x21) {
                *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 0x20;
                return;
            }
            if ((iVar1 - 0x20U & 0xfffffffd) == 0) {
                *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 0x40;
                return;
            }
            pplVar6 = (longlong **)(param_1 + 0x88);
            pplVar8 = (longlong **)(param_1 + 0x70);
            pplVar7 = (longlong **)*pplVar6;
            if (pplVar7 == *(longlong ***)(param_1 + 0x90)) {
                if (pplVar6 != pplVar8) {
                    pplVar7 = (longlong **)*pplVar8;
                    pplVar6 = pplVar8;
                }
                if (pplVar7 == (longlong **)pplVar6[1]) {
                    return;
                }
            }
            do {
                do {
                    plVar3 = *pplVar7;
                    lVar2 = plVar3[7];
                    if ((lVar2 != 0) &&
                        ((*(short *)(lVar2 + 0x48) != 0 || ((lVar2 != 0 && (*(short *)(lVar2 + 0x4a) != 0))))))
                    {
                        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
                    }
                    pplVar7 = pplVar7 + 1;
                } while (pplVar7 != (longlong **)pplVar6[1]);
                if (pplVar6 != pplVar8) {
                    pplVar7 = (longlong **)*pplVar8;
                    pplVar6 = pplVar8;
                }
            } while (pplVar7 != (longlong **)pplVar6[1]);
        }
    }
    return;
}



void FUN_14085b550(longlong param_1,int param_2,undefined8 param_3,undefined param_4)

{
    undefined8 *puVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong *plVar4;

    puVar3 = *(undefined8 **)(param_1 + 0xe0);
    do {
        if (puVar3 == (undefined8 *)0x0) {
            LAB_14085b5cc:
            plVar4 = *(longlong **)(param_1 + 0x110);
            if (plVar4 != (longlong *)0x0) {
                while (*(int *)(plVar4 + 1) != param_2) {
                    plVar4 = (longlong *)*plVar4;
                    if (plVar4 == (longlong *)0x0) {
                        return;
                    }
                }
                plVar2 = plVar4 + 2;
                if (plVar2 != (longlong *)0x0) {
                    if (plVar4[4] != 0) {
                        FUN_14083ab80(DAT_140c61b70,plVar4[4],4);
                        return;
                    }
                    (**(code **)*plVar2)(plVar2,4);
                }
            }
            return;
        }
        if (*(int *)(puVar3 + 1) == param_2) {
            puVar1 = puVar3 + 2;
            if (puVar1 != (undefined8 *)0x0) {
                if (puVar3[4] == 0) {
                    (**(code **)*puVar1)(puVar1,0,param_3,1);
                }
                else {
                    FUN_14083ab80(DAT_140c61b70,puVar3[4],0,param_4,0,4,1);
                }
            }
            goto LAB_14085b5cc;
        }
        puVar3 = (undefined8 *)*puVar3;
    } while( true );
}



undefined8 FUN_14085b660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong **pplVar3;
    longlong *plVar4;

    plVar4 = (longlong *)(param_1 + 0x88);
    pplVar3 = (longlong **)*plVar4;
    plVar1 = (longlong *)(param_1 + 0x70);
    if (pplVar3 == *(longlong ***)(param_1 + 0x90)) {
        if (plVar4 != plVar1) {
            pplVar3 = (longlong **)*plVar1;
            plVar4 = plVar1;
        }
        if (pplVar3 == (longlong **)plVar4[1]) {
            return 1;
        }
    }
    do {
        do {
            uVar2 = (**(code **)(**pplVar3 + 0x98))(*pplVar3,param_2,param_3,param_4);
            if ((int)uVar2 != 1) {
                return uVar2;
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != (longlong **)plVar4[1]);
        if (plVar4 != plVar1) {
            pplVar3 = (longlong **)*plVar1;
            plVar4 = plVar1;
        }
    } while (pplVar3 != (longlong **)plVar4[1]);
    return uVar2;
}



ulonglong FUN_14085b730(longlong param_1)

{
    ulonglong uVar1;
    longlong **pplVar2;
    longlong **pplVar3;

    pplVar2 = *(longlong ***)(param_1 + 0x70);
    if (pplVar2 == *(longlong ***)(param_1 + 0x78)) {
        return 1;
    }
    do {
        uVar1 = (**(code **)(**pplVar2 + 0x140))();
        if ((int)uVar1 != 1) {
            pplVar3 = *(longlong ***)(param_1 + 0x70);
            if (pplVar3 == pplVar2) {
                return uVar1;
            }
            do {
                (**(code **)(**pplVar3 + 0x148))();
                pplVar3 = pplVar3 + 1;
            } while (pplVar3 != pplVar2);
            return uVar1 & 0xffffffff;
        }
        pplVar2 = pplVar2 + 1;
    } while (pplVar2 != *(longlong ***)(param_1 + 0x78));
    return uVar1;
}



void FUN_14085b7d0(longlong param_1,undefined8 param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    pplVar4 = (longlong **)(param_1 + 0x88);
    pplVar1 = (longlong **)(param_1 + 0x70);
    pplVar3 = (longlong **)*pplVar4;
    if (pplVar3 == *(longlong ***)(param_1 + 0x90)) {
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
        if (pplVar3 == (longlong **)pplVar4[1]) {
            return;
        }
    }
    do {
        do {
            plVar2 = *pplVar3;
            if ((((*(byte *)((longlong)plVar2 + 0x5a) & 0x40) == 0) && (plVar2[7] != 0)) &&
                (*(short *)(plVar2[7] + 0x48) != 0)) {
                (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != (longlong **)pplVar4[1]);
        if (pplVar4 != pplVar1) {
            pplVar3 = (longlong **)*pplVar1;
            pplVar4 = pplVar1;
        }
    } while (pplVar3 != (longlong **)pplVar4[1]);
    return;
}



void FUN_14085b890(longlong *param_1)

{
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    int *piVar4;
    uint uVar5;
    longlong **pplVar6;
    longlong **pplVar7;
    undefined4 uVar8;

    if (param_1[6] != 0) {
        uVar5 = 0;
        piVar4 = (int *)(param_1[6] + 4);
        do {
            if (*piVar4 != 0) goto LAB_14085b8ed;
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 2;
        } while (uVar5 < 4);
    }
    iVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((((iVar3 == 0xc) || (*(int *)((longlong)param_1 + 0xa4) != 0)) ||
         ((*(byte *)((longlong)param_1 + 0x5b) & 4) != 0)) ||
        ((param_1 == DAT_140c62458 || ((*(byte *)((longlong)param_1 + 0x5b) & 8) != 0)))) {
        LAB_14085b8ed:
        uVar8 = FUN_14085a3f0(param_1,0,4);
        *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x20;
        if (param_1 == DAT_140c62458) {
            FUN_1408332f0();
        }
        else {
            FUN_140833270(uVar8,uVar8,*(undefined4 *)(param_1 + 3));
        }
    }
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe;
    if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
        FUN_14085c930(param_1);
    }
    pplVar7 = (longlong **)(param_1 + 0x11);
    pplVar1 = (longlong **)(param_1 + 0xe);
    pplVar6 = (longlong **)*pplVar7;
    if (pplVar6 == (longlong **)param_1[0x12]) {
        if (pplVar7 != pplVar1) {
            pplVar6 = (longlong **)*pplVar1;
            pplVar7 = pplVar1;
        }
        if (pplVar6 == (longlong **)pplVar7[1]) {
            return;
        }
    }
    do {
        do {
            lVar2 = (*pplVar6)[7];
            if ((lVar2 != 0) &&
                ((*(short *)(lVar2 + 0x48) != 0 || ((lVar2 != 0 && (*(short *)(lVar2 + 0x4a) != 0)))))) {
                (**(code **)(**pplVar6 + 0x198))();
            }
            pplVar6 = pplVar6 + 1;
        } while (pplVar6 != (longlong **)pplVar7[1]);
        if (pplVar7 != pplVar1) {
            pplVar6 = (longlong **)*pplVar1;
            pplVar7 = pplVar1;
        }
    } while (pplVar6 != (longlong **)pplVar7[1]);
    return;
}



void FUN_14085b9c0(longlong *param_1,longlong *param_2)

{
    if ((longlong *)param_2[8] == param_1) {
        (**(code **)(*param_2 + 0x30))(param_2,0);
        FUN_140859270(param_1 + 0xe,*(undefined4 *)(param_2 + 3));
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
}



void FUN_14085ba10(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408591d0(param_1 + 0xe);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)(*param_1 + 0x60))(param_1,*puVar1);
    }
    return;
}



void FUN_14085ba40(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;

    if ((longlong *)param_2[9] == param_1) {
        (**(code **)(*param_2 + 0x38))(param_2,0);
        plVar1 = param_1 + 0x11;
        if ((*(byte *)((longlong)param_2 + 0x5b) & 2) == 0) {
            plVar1 = param_1 + 0xe;
        }
        FUN_140859270(plVar1,*(undefined4 *)(param_2 + 3));
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return;
}



void FUN_14085ba90(longlong *param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong *plVar2;

    if ((char)((ulonglong)param_2 >> 0x20) == '\0') {
        plVar2 = param_1 + 0xe;
    }
    else {
        plVar2 = param_1 + 0x11;
    }
    puVar1 = (undefined8 *)FUN_1408591d0(plVar2);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)(*param_1 + 0x60))(param_1,*puVar1);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14085bad0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;
    undefined4 uStackX20;

    uVar4 = 2;
    lVar2 = FUN_1408819f0(DAT_140c10f20,0x40);
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_140877140(lVar2,0x1820,0);
        if (plVar3 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,0xe,*(undefined4 *)(param_1 + 0xa0),0,0);
            if (iVar1 == 1) {
                uStackX20 = CONCAT31(uStackX20._1_3_,1);
                (**(code **)(*plVar3 + 0x28))(plVar3,CONCAT44(uStackX20,*(undefined4 *)(param_1 + 0x18)));
                lVar2 = FUN_1408819f0(DAT_140c10f20,0x50);
                if (lVar2 != 0) {
                    lVar2 = FUN_14082b2c0(lVar2,0);
                    if (lVar2 != 0) {
                        *(longlong **)(lVar2 + 8) = plVar3;
                        FUN_14082bb80(DAT_140c61b68,lVar2);
                        uVar4 = 1;
                    }
                }
            }
            (**(code **)(*plVar3 + 0x10))(plVar3);
        }
        return uVar4;
    }
    return 2;
}



void FUN_14085bbc0(longlong *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
    byte *pbVar1;
    uint uVar2;
    uint uVar3;

    if ((param_1[5] != 0) && (pbVar1 = *(byte **)(param_1[5] + 0x18), pbVar1 != (byte *)0x0)) {
        uVar3 = 0;
        while (uVar2 = uVar3 + 1, pbVar1[uVar2] != param_2) {
            uVar3 = uVar2;
            if (*pbVar1 <= uVar2) {
                return;
            }
        }
        if (((float *)(pbVar1 + (ulonglong)uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
             (float *)0x0) &&
            (*(float *)(pbVar1 + (ulonglong)uVar3 * 0x10 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
             0.0)) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2,0,0,0,param_3,param_4);
        }
    }
    return;
}



longlong FUN_14085bc80(undefined8 *param_1,int param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    int *piVar3;
    longlong lVar4;

    puVar2 = (undefined8 *)*param_1;
    do {
        if (puVar2 == (undefined8 *)0x0) {
            lVar4 = 0;
            LAB_14085bcaf:
            if (param_1[2] == 0) {
                if (*(uint *)((longlong)param_1 + 0x1c) <= *(uint *)(param_1 + 4)) {
                    return lVar4;
                }
                puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
                if (puVar2 == (undefined8 *)0x0) {
                    return lVar4;
                }
                *puVar2 = param_1[2];
                param_1[2] = puVar2;
            }
            if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
                *param_1 = param_1[2];
            }
            else {
                *(undefined8 *)param_1[1] = param_1[2];
            }
            puVar2 = (undefined8 *)param_1[2];
            param_1[1] = puVar2;
            param_1[2] = *puVar2;
            *puVar2 = 0;
            lVar1 = param_1[1];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            piVar3 = (int *)(lVar1 + 8);
            if (piVar3 == (int *)0x0) {
                return lVar4;
            }
            *piVar3 = param_2;
            return lVar1 + 0xc;
        }
        if (*(int *)(puVar2 + 1) == param_2) {
            lVar4 = (longlong)puVar2 + 0xc;
            if (lVar4 != 0) {
                return lVar4;
            }
            goto LAB_14085bcaf;
        }
        puVar2 = (undefined8 *)*puVar2;
    } while( true );
}



undefined8 * FUN_14085bd50(undefined8 *param_1,int param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    int *piVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)*param_1;
    do {
        if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)0x0;
            LAB_14085bd7f:
            if (param_1[2] == 0) {
                if (*(uint *)((longlong)param_1 + 0x1c) <= *(uint *)(param_1 + 4)) {
                    return puVar4;
                }
                puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x30);
                if (puVar2 == (undefined8 *)0x0) {
                    return puVar4;
                }
                if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
                    puVar2[2] = &PTR_FUN_1409a3cf0;
                }
                *puVar2 = param_1[2];
                param_1[2] = puVar2;
            }
            if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
                *param_1 = param_1[2];
            }
            else {
                *(undefined8 *)param_1[1] = param_1[2];
            }
            puVar2 = (undefined8 *)param_1[2];
            param_1[1] = puVar2;
            param_1[2] = *puVar2;
            *puVar2 = 0;
            lVar1 = param_1[1];
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
            piVar3 = (int *)(lVar1 + 8);
            if (piVar3 == (int *)0x0) {
                return puVar4;
            }
            *piVar3 = param_2;
            return (undefined8 *)(lVar1 + 0x10);
        }
        if (*(int *)(puVar4 + 1) == param_2) {
            puVar4 = puVar4 + 2;
            if (puVar4 != (undefined8 *)0x0) {
                return puVar4;
            }
            goto LAB_14085bd7f;
        }
        puVar4 = (undefined8 *)*puVar4;
    } while( true );
}



void FUN_14085be30(undefined8 param_1,undefined4 param_2,float param_3,longlong *param_4,
                   uint param_5_00,undefined8 param_6,undefined8 param_7,uint param_5)

{
    byte *pbVar1;
    float *pfVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    float *pfVar6;
    ulonglong uVar7;
    float local_res10 [6];
    ulonglong in_stack_ffffffffffffffd8;

    uVar7 = (ulonglong)(int)param_5_00;
    if (param_5_00 < 5) {
        pbVar1 = (byte *)param_4[10];
        local_res10[0] = 0.0;
        if (pbVar1 != (byte *)0x0) {
            uVar5 = 0;
            do {
                uVar3 = uVar5 + 1;
                if (pbVar1[uVar3] == (byte)param_5_00) {
                    pfVar6 = (float *)(pbVar1 + (ulonglong)uVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                    );
                    goto LAB_14085be83;
                }
                uVar5 = uVar3;
            } while (uVar3 < *pbVar1);
        }
        pfVar6 = (float *)0x0;
        LAB_14085be83:
        pfVar2 = local_res10;
        if (pfVar6 != (float *)0x0) {
            pfVar2 = pfVar6;
        }
        local_res10[0] = *pfVar2;
        if (param_3 - local_res10[0] != 0.0) {
            (**(code **)(*param_4 + 0xb0))(param_4,(&DAT_1409a3530)[uVar7],*param_4,0,0);
            LAB_14085bf73:
            local_res10[0] = param_3;
            FUN_14084fb50(param_4 + 10,param_5_00 & 0xff,param_3);
            return;
        }
    }
    else if (param_5_00 - 0xb < 3) {
        pbVar1 = (byte *)param_4[10];
        local_res10[0] = 0.0;
        if (pbVar1 != (byte *)0x0) {
            uVar4 = 0;
            do {
                uVar5 = (int)uVar4 + 1;
                if (pbVar1[uVar5] == (byte)param_5_00) {
                    pfVar6 = (float *)(pbVar1 + uVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
                    goto LAB_14085bf29;
                }
                uVar4 = (ulonglong)uVar5;
            } while (uVar5 < *pbVar1);
        }
        pfVar6 = (float *)0x0;
        LAB_14085bf29:
        pfVar2 = local_res10;
        if (pfVar6 != (float *)0x0) {
            pfVar2 = pfVar6;
        }
        local_res10[0] = *pfVar2;
        if (param_3 - local_res10[0] != 0.0) {
            (**(code **)(*param_4 + 0x230))
                    (param_3 - local_res10[0],param_3,param_4,*param_4,(&DAT_1409a3530)[uVar7],0,0);
            goto LAB_14085bf73;
        }
    }
    else {
        FUN_140854370(param_5,param_2,param_3,param_4,uVar7 & 0xffffffff,param_6,param_7,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)param_5);
    }
    return;
}



void FUN_14085bfe0(longlong *param_1,undefined4 param_2)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x260))(param_1,0);
    if (lVar1 != 0) {
        FUN_140854df0(param_1,lVar1,param_2);
    }
    return;
}



int FUN_14085c050(undefined8 param_1,byte **param_2)

{
    byte bVar1;
    byte bVar2;
    byte bVar3;
    byte bVar4;
    int iVar5;
    byte *pbVar6;
    int iVar7;
    uint uVar8;

    pbVar6 = *param_2;
    bVar1 = *pbVar6;
    iVar7 = 1;
    *param_2 = pbVar6 + 1;
    if (bVar1 != 0) {
        bVar2 = pbVar6[1];
        uVar8 = 0;
        *param_2 = pbVar6 + 2;
        if (bVar1 != 0) {
            do {
                pbVar6 = *param_2;
                bVar3 = *pbVar6;
                *param_2 = pbVar6 + 1;
                iVar5 = *(int *)(pbVar6 + 1);
                *param_2 = pbVar6 + 5;
                bVar4 = pbVar6[5];
                *param_2 = pbVar6 + 7;
                if (iVar5 != 0) {
                    iVar7 = FUN_140854420(param_1,bVar3,iVar5,bVar4 != 0);
                    if (iVar7 != 1) break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < bVar1);
        }
        FUN_140853680(param_1,bVar2,0xffffffff);
    }
    return iVar7;
}



void FUN_14085c450(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
                   undefined8 *param_5_00,undefined8 param_6_00,undefined8 param_7_00,
                   undefined4 param_5,int param_6,int param_7)

{
    undefined8 uVar1;
    undefined8 *local_38;
    longlong local_30;
    float local_28;
    float local_24;
    int local_20;
    undefined4 local_1c;
    undefined2 local_18;

    if (param_5_00[2] != 0) {
        FUN_14083ab80(DAT_140c61b70,param_5_00[2],(longlong)param_7,param_7_00,param_6,param_5,
                      (int)param_7_00);
        return;
    }
    local_28 = *(float *)(param_5_00 + 3);
    local_24 = 0.0;
    if ((int)param_7_00 - 1U < 2) {
        local_24 = param_3;
    }
    if ((local_28 != local_24) && (param_6 != 0)) {
        local_30 = (longlong)param_7;
        local_20 = param_6;
        local_1c = param_5;
        local_18 = 0x101;
        local_38 = param_5_00;
        uVar1 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
        param_5_00[2] = uVar1;
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014085c52c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)*param_5_00)(param_5_00,(longlong)param_7,param_6_00,1);
    return;
}



void FUN_14085c530(longlong param_1)

{
    int iVar1;

    if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xd0) != 0)) {
        iVar1 = FUN_14085bad0();
        if (iVar1 == 1) {
            *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf5;
            *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 4;
            FUN_14085c7e0(param_1);
            return;
        }
        *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf1;
        FUN_14085c7e0(param_1);
        return;
    }
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xf1;
    FUN_14085c7e0(param_1);
    return;
}



void FUN_14085c5a0(longlong param_1)

{
    longlong **pplVar1;

    pplVar1 = *(longlong ***)(param_1 + 0x70);
    if (pplVar1 != *(longlong ***)(param_1 + 0x78)) {
        do {
            (**(code **)(**pplVar1 + 0x148))();
            pplVar1 = pplVar1 + 1;
        } while (pplVar1 != *(longlong ***)(param_1 + 0x78));
    }
    return;
}



void FUN_14085c6e0(longlong *param_1,int param_2)

{
    char cVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;

    if (param_2 == 0x18) {
        lVar3 = *param_1;
        cVar1 = FUN_14085a670(param_1,0);
        uVar4 = 1;
        uVar2 = (ulonglong)(cVar1 != '\0');
    }
    else if (param_2 == 0x19) {
        lVar3 = *param_1;
        cVar1 = FUN_14085a670(param_1,1);
        uVar4 = 2;
        uVar2 = (ulonglong)((uint)(cVar1 != '\0') * 2);
    }
    else if (param_2 == 0x1a) {
        lVar3 = *param_1;
        cVar1 = FUN_14085a670(param_1,2);
        uVar4 = 4;
        uVar2 = (ulonglong)(cVar1 != '\0') << 2;
    }
    else {
        if (param_2 != 0x1b) {
            if (param_2 != 0x1c) {
                return;
            }
            lVar3 = *param_1;
            cVar1 = (**(code **)(lVar3 + 0x1d0))(param_1,0);
            (**(code **)(lVar3 + 0xd8))(param_1,(ulonglong)(cVar1 != '\0') << 4,0x10,0,0);
            return;
        }
        lVar3 = *param_1;
        cVar1 = FUN_14085a670(param_1,3);
        uVar4 = 8;
        uVar2 = (ulonglong)(cVar1 != '\0') << 3;
    }
    (**(code **)(lVar3 + 0xd8))(param_1,uVar2,uVar4,0,0);
    return;
}



void FUN_14085c7e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    byte bVar3;
    longlong *plVar4;
    longlong *plVar5;
    byte bVar6;
    undefined8 extraout_XMM0_Qa;

    puVar1 = *(undefined8 **)(param_3 + 0xb0);
    do {
        if (puVar1 == (undefined8 *)0x0) {
            return;
        }
        plVar4 = (longlong *)FUN_140830f00();
        if (plVar4 != (longlong *)0x0) {
            bVar3 = *(byte *)(param_3 + 0x148) >> 1;
            bVar6 = bVar3 & 7;
            if ((bVar3 & 7) == 0) {
                plVar5 = (longlong *)0x0;
                if (*(int *)((longlong)puVar1 + 0x1c) == 0) {
                    plVar5 = plVar4 + 0x1c;
                }
                else if (*(int *)((longlong)puVar1 + 0x1c) == 4) {
                    plVar5 = plVar4 + 0x22;
                }
                for (puVar2 = (undefined8 *)*plVar5; puVar2 != (undefined8 *)0x0;
                     puVar2 = (undefined8 *)*puVar2) {
                    if (*(int *)(puVar2 + 1) == *(int *)(param_3 + 0x18)) {
                        if (puVar2 != (undefined8 *)&DAT_fffffffffffffff0) {
                            FUN_14085c450(extraout_XMM0_Qa,param_2,0,plVar4);
                        }
                        break;
                    }
                }
            }
            else if (bVar6 == 1) {
                FUN_140859d40(plVar4);
            }
            else if (bVar6 == 2) {
                FUN_14085b550(plVar4);
            }
            (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
}



void FUN_14085c930(longlong *param_1)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    undefined4 uVar4;

    if (param_1[6] != 0) {
        uVar3 = 0;
        piVar2 = (int *)(param_1[6] + 4);
        do {
            if (*piVar2 != 0) goto LAB_14085c999;
            uVar3 = uVar3 + 1;
            piVar2 = piVar2 + 2;
        } while (uVar3 < 4);
    }
    iVar1 = (**(code **)(*param_1 + 0x70))();
    if ((((iVar1 == 0xc) || (*(int *)((longlong)param_1 + 0xa4) != 0)) ||
         ((*(byte *)((longlong)param_1 + 0x5b) & 4) != 0)) ||
        ((param_1 == DAT_140c62458 || ((*(byte *)((longlong)param_1 + 0x5b) & 8) != 0)))) {
        LAB_14085c999:
        *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
        uVar4 = FUN_14085a3f0(param_1,0,4);
        *(undefined4 *)(param_1 + 0x28) = uVar4;
    }
    uVar4 = FUN_14085a3f0(param_1,1);
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 1;
    *(undefined4 *)((longlong)param_1 + 0x144) = uVar4;
    return;
}



undefined8 * FUN_14085c9d0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a4260;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
}



undefined8 * FUN_14085c9f0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a4260;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



longlong * FUN_14085ca20(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;

    if (*(uint *)(param_1 + 0x30) < 2) {
        lVar3 = FUN_1408819f0(DAT_140c10f28,0x98);
        if (lVar3 == 0) {
            return (longlong *)0x0;
        }
        plVar4 = (longlong *)FUN_140878140(lVar3);
        if (plVar4 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
        if (iVar2 == 1) {
            return plVar4;
        }
        (**(code **)(*plVar4 + 0x18))(plVar4);
        uVar1 = DAT_140c10f28;
        (**(code **)*plVar4)(plVar4,0);
        FUN_140881720(uVar1,plVar4);
    }
    if ((((*(uint *)(param_1 + 0x30) & 0xfffffffd) == 0) &&
         (lVar3 = FUN_1408819f0(DAT_140c10f28,0x48), lVar3 != 0)) &&
        (plVar4 = (longlong *)FUN_140877460(lVar3), plVar4 != (longlong *)0x0)) {
        iVar2 = FUN_140877b40(plVar4,param_1);
        if (iVar2 == 1) {
            return plVar4;
        }
        (**(code **)(*plVar4 + 0x18))(plVar4);
        uVar1 = DAT_140c10f28;
        (**(code **)*plVar4)(plVar4,0);
        FUN_140881720(uVar1,plVar4);
    }
    return (longlong *)0x0;
}



undefined8 * FUN_14085cb20(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f28,0x28);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = &PTR_FUN_1409a42c0;
        FUN_14085cb70(puVar1);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined4 FUN_14085cb70(longlong param_1)

{
    DWORD DVar1;
    short sVar2;
    uint uVar3;

    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x18) = DVar1;
    uVar3 = 3;
    *(undefined4 *)(param_1 + 0x10) = 3;
    sVar2 = 0;
    *(int *)(param_1 + 0x1c) =
            (int)(longlong)(1000.0 / ((double)(ulonglong)DAT_140c110b4 * 0.0009765625));
    do {
        sVar2 = sVar2 + 1;
        uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    *(short *)(param_1 + 0x20) = sVar2 * 2;
    return 1;
}



undefined8 FUN_14085cc30(longlong param_1,float **param_2)

{
    float *pfVar1;
    float *pfVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    ulonglong uVar12;
    float *pfVar13;
    uint uVar14;
    int iVar15;
    undefined (*pauVar16) [16];
    undefined auVar17 [16];
    undefined8 auStack48 [5];

    pfVar2 = *param_2;
    iVar15 = 0;
    for (uVar14 = *(uint *)(param_2 + 1); uVar14 != 0; uVar14 = uVar14 & uVar14 - 1) {
        iVar15 = iVar15 + 1;
    }
    iVar15 = (uint)*(ushort *)((longlong)param_2 + 0x12) * iVar15;
    if (*(longlong *)(param_1 + 8) != 0) {
        uVar12 = (ulonglong)(uint)(iVar15 * 2) + 0xf;
        if (uVar12 <= (uint)(iVar15 * 2)) {
            uVar12 = 0xffffffffffffff0;
        }
        uVar12 = uVar12 & 0xfffffffffffffff0;
        auStack48[0] = 0x14085cca5;
        FUN_1407f0f60();
        if (pfVar2 < pfVar2 + iVar15) {
            pfVar13 = pfVar2 + 0xc;
            pauVar16 = (undefined (*) [16])(&stack0xfffffffffffffff8 + -uVar12);
            do {
                fVar4 = pfVar13[-4];
                fVar5 = pfVar13[-3];
                fVar6 = pfVar13[-2];
                fVar7 = pfVar13[-1];
                fVar8 = *pfVar13;
                fVar9 = pfVar13[1];
                fVar10 = pfVar13[2];
                fVar11 = pfVar13[3];
                auVar17 = packssdw(CONCAT412((int)(pfVar13[-9] * 32767.0),
                                             CONCAT48((int)(pfVar13[-10] * 32767.0),
                                                      CONCAT44((int)(pfVar13[-0xb] * 32767.0),
                                                               (int)(pfVar13[-0xc] * 32767.0)))),
                                   CONCAT412((int)(pfVar13[-5] * 32767.0),
                                             CONCAT48((int)(pfVar13[-6] * 32767.0),
                                                      CONCAT44((int)(pfVar13[-7] * 32767.0),
                                                               (int)(pfVar13[-8] * 32767.0)))));
                pfVar1 = pfVar13 + 4;
                *pauVar16 = auVar17;
                auVar17 = packssdw(CONCAT412((int)(fVar7 * 32767.0),
                                             CONCAT48((int)(fVar6 * 32767.0),
                                                      CONCAT44((int)(fVar5 * 32767.0),(int)(fVar4 * 32767.0)
                                                      ))),
                                   CONCAT412((int)(fVar11 * 32767.0),
                                             CONCAT48((int)(fVar10 * 32767.0),
                                                      CONCAT44((int)(fVar9 * 32767.0),(int)(fVar8 * 32767.0)
                                                      ))));
                pauVar16[1] = auVar17;
                pfVar13 = pfVar13 + 0x10;
                pauVar16 = pauVar16[2];
            } while (pfVar1 < pfVar2 + iVar15);
        }
        uVar3 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)((longlong)auStack48 + -uVar12) = 0x14085cd2c;
        FUN_140877220(uVar3,(undefined (*) [16])(&stack0xfffffffffffffff8 + -uVar12));
    }
    return 1;
}



undefined8 FUN_14085cd40(longlong param_1,int param_2)

{
    ushort uVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 auStack48 [5];

    uVar1 = *(ushort *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 8) != 0) {
        auStack48[0] = 0x14085cd87;
        lVar3 = FUN_1407f0f60();
        lVar3 = -lVar3;
        *(undefined8 *)((longlong)auStack48 + lVar3) = 0x14085cd99;
        FUN_1407e4830(&stack0xfffffffffffffff8 + lVar3,0);
        uVar2 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)((longlong)auStack48 + lVar3) = 0x14085cda8;
        FUN_140877220(uVar2,&stack0xfffffffffffffff8 + lVar3,(uint)uVar1 * param_2);
    }
    return 1;
}



void FUN_14085cdc0(longlong param_1,ulonglong param_2)

{
    uint uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    uint uVar4;

    if (*(longlong *)(param_1 + 8) == 0) {
        uVar4 = 0;
        uVar3 = param_2;
        for (uVar1 = *(uint *)(param_1 + 0x10); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
            uVar3 = (ulonglong)(uVar1 - 1);
            uVar4 = uVar4 + 1;
        }
        uVar2 = FUN_1408771e0(param_1,uVar3,uVar4);
        uVar2 = FUN_1408772f0(uVar2,param_2,uVar4 & 0xffff,DAT_140c110b4,0x10,1);
        *(undefined8 *)(param_1 + 8) = uVar2;
    }
    return;
}



void FUN_14085ce40(longlong param_1)

{
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1408773f0();
        *(undefined8 *)(param_1 + 8) = 0;
    }
    return;
}



ulonglong FUN_14085ce70(longlong **param_1)

{
    longlong *plVar1;
    ulonglong in_RAX;
    ulonglong uVar2;

    plVar1 = *param_1;
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014085ce7d. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (**(code **)(*plVar1 + 0x1d0))(plVar1,0);
        return uVar2;
    }
    return in_RAX & 0xffffffffffffff00;
}



int FUN_14085ce90(longlong *param_1)

{
    int iVar1;

    if ((*param_1 == 0) || (iVar1 = *(int *)(*param_1 + 0xa4), iVar1 == 0)) {
        iVar1 = DAT_140c61ce8;
    }
    return iVar1;
}



void FUN_14085ceb0(longlong **param_1,undefined8 param_2,longlong **param_3)

{
    longlong *plVar1;

    if (*param_1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014085cecc. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**param_1 + 0x1c0))();
        return;
    }
    plVar1 = *param_3;
    *param_3 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined *)(param_3 + 1) = 0;
    return;
}



void FUN_14085cf00(longlong **param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
    if (*param_1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014085cf0b. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**param_1 + 0x1c8))();
        return;
    }
    *param_4 = 0xffffffff;
    return;
}



longlong * FUN_14085cf20(longlong *param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = *param_1;
    *param_2 = 0;
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x48), plVar1 != (longlong *)0x0)) {
        lVar2 = (**(code **)(*plVar1 + 0xf8))();
        if (lVar2 != 0) {
            *param_2 = lVar2;
        }
    }
    return param_2;
}



undefined8 FUN_14085cf60(longlong *param_1,int param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = *param_1;
    if ((*param_1 == 0) && ((param_2 != 1 || (lVar1 = DAT_140c62458, DAT_140c62458 == 0)))) {
        return 0;
    }
    uVar2 = FUN_14085a3f0(lVar1,param_2,4);
    return uVar2;
}



ulonglong FUN_14085cf90(ulonglong *param_1)

{
    ulonglong uVar1;

    uVar1 = *param_1;
    if (uVar1 != 0) {
        return (ulonglong)*(uint *)(uVar1 + 0x18);
    }
    return uVar1;
}



bool FUN_14085cfd0(longlong *param_1)

{
    if (*param_1 == 0) {
        return false;
    }
    return *param_1 == DAT_140c62458;
}



undefined8 *
FUN_14085cfe0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 *param_8,
              char param_9,int param_10,undefined8 param_11,undefined8 param_12)

{
    undefined4 uVar1;
    uint uVar2;
    int *piVar3;
    longlong lVar4;
    int iVar5;
    byte bVar6;
    undefined8 uVar7;
    undefined8 *puVar8;

    *param_1 = &PTR_FUN_1409a4340;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[5] = 0;
    param_1[2] = &PTR_FUN_1409a48a0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_5 + 3);
    param_1[0xc] = *param_5;
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_5 + 1);
    piVar3 = (int *)param_5[2];
    if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
    }
    param_1[0xe] = piVar3;
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfc;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(byte *)((longlong)param_1 + 0x17a) = *(byte *)((longlong)param_1 + 0x17a) & 0x80;
    *(undefined4 *)(param_1 + 0x13) = param_7;
    param_1[0x14] = param_2;
    *(int *)((longlong)param_1 + 0x174) = param_10;
    param_1[0x15] = param_3;
    param_1[0x16] = param_4;
    param_1[0x17] = 0;
    *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 300) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
    *(undefined2 *)(param_1 + 0x2f) = 1;
    *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xf | 0x10;
    *(byte *)((longlong)param_1 + 0x17e) = param_9 << 7 | 0x20;
    *(char *)((longlong)param_1 + 0x17f) = (param_10 != 0) * '\x02';
    *(undefined4 *)((longlong)param_1 + 0x184) = *param_8;
    *(undefined4 *)(param_1 + 0x31) = param_8[1];
    *(undefined4 *)((longlong)param_1 + 0x18c) = param_8[2];
    uVar1 = param_8[3];
    *(undefined8 *)((longlong)param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x32) = uVar1;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    *(byte *)((longlong)param_1 + 0x1bb) = *(byte *)((longlong)param_1 + 0x1bb) & 0xf8;
    param_1[0x36] = 0;
    *(undefined2 *)(param_1 + 0x37) = 0;
    *(undefined *)((longlong)param_1 + 0x1ba) = 1;
    *(undefined4 *)(param_1 + 0x3a) = 0x42ca0000;
    param_1[0x41] = param_11;
    param_1[0x42] = param_12;
    param_1[0x3e] = 0;
    uVar7 = FUN_140852980();
    param_1[0x43] = uVar7;
    iVar5 = DAT_140c62460 + 1;
    *(int *)(param_1 + 0x31) = DAT_140c62460;
    DAT_140c62460 = iVar5;
    param_1[0x3f] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar2 = *(uint *)(param_1[0x16] + 0x88);
    *(uint *)(param_1[0x16] + 0x88) = (uVar2 + 1 ^ uVar2) & 0x3fffffff ^ uVar2;
    (**(code **)(*param_2 + 8))(param_2);
    lVar4 = *(longlong *)(param_2[7] + 0x18);
    puVar8 = (undefined8 *)(param_2[7] + 0x18);
    if (lVar4 == 0) {
        *puVar8 = param_1;
        param_1[4] = 0;
    }
    else {
        param_1[4] = lVar4;
        *puVar8 = param_1;
    }
    if ((*(byte *)((longlong)param_2 + 0x5b) & 8) == 0) {
        if ((param_2[9] == 0) && (param_2[8] == 0)) {
            bVar6 = 0;
        }
        else {
            bVar6 = FUN_14085ef80();
        }
    }
    else {
        bVar6 = 1;
    }
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
    *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffc0004;
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | bVar6 & 1;
    *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 4;
    *(undefined4 *)(param_1 + 0x26) = *param_6;
    *(undefined4 *)((longlong)param_1 + 0x134) = param_6[1];
    *(undefined4 *)(param_1 + 0x27) = param_6[2];
    *(undefined4 *)((longlong)param_1 + 0x13c) = param_6[3];
    *(undefined4 *)(param_1 + 0x28) = param_6[4];
    *(undefined4 *)((longlong)param_1 + 0x144) = param_6[5];
    *(undefined4 *)(param_1 + 0x29) = param_6[6];
    *(undefined4 *)((longlong)param_1 + 0x14c) = param_6[7];
    *(undefined4 *)(param_1 + 0x2a) = param_6[8];
    *(undefined4 *)((longlong)param_1 + 0x154) = param_6[9];
    *(undefined4 *)(param_1 + 0x2b) = param_6[10];
    *(undefined4 *)((longlong)param_1 + 0x15c) = param_6[0xb];
    *(undefined4 *)(param_1 + 0x2c) = param_6[0xc];
    *(undefined4 *)((longlong)param_1 + 0x164) = param_6[0xd];
    *(undefined4 *)(param_1 + 0x2d) = param_6[0xe];
    *(undefined4 *)((longlong)param_1 + 0x16c) = param_6[0xf];
    *(undefined4 *)(param_1 + 0x2e) = param_6[0x10];
    return param_1;
}



void FUN_14085d300(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a4340;
    param_1[2] = &PTR_FUN_1409a48a0;
    if (param_1[0x36] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[0x36] = 0;
        *(undefined2 *)(param_1 + 0x37) = 0;
    }
    if (param_1[0xe] != 0) {
        FUN_140828460();
    }
    *param_1 = &PTR_FUN_1409a4328;
    return;
}



undefined8 * FUN_14085d370(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a4340;
    param_1[2] = &PTR_FUN_1409a48a0;
    if (param_1[0x36] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[0x36] = 0;
        *(undefined2 *)(param_1 + 0x37) = 0;
    }
    if (param_1[0xe] != 0) {
        FUN_140828460();
    }
    *param_1 = &PTR_FUN_1409a4328;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_14085d3f0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a4328;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_14085d440(longlong param_1)

{
    longlong lVar1;
    float fVar2;

    fVar2 = 1.0;
    for (lVar1 = *(longlong *)(param_1 + 0x30); lVar1 != *(longlong *)(param_1 + 0x38);
         lVar1 = lVar1 + 0x18) {
        fVar2 = fVar2 * *(float *)(lVar1 + 0x10);
    }
    fVar2 = fVar2 * *(float *)(param_1 + 0x128) * *(float *)(param_1 + 300);
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    *(float *)(param_1 + 0xcc) = fVar2;
    *(float *)(param_1 + 200) = *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x48);
    return;
}



void FUN_14085d4b0(float param_1,float param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong *plVar3;
    float extraout_XMM0_Da;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar4 = *(float *)(param_3 + 0x18c);
    fVar6 = 0.0;
    fVar7 = *(float *)(param_3 + 400);
    fVar5 = fVar4;
    if (fVar7 != 0.0) {
        if (*(longlong *)(param_5 + 0x48) == 0) {
            uVar2 = FUN_14083ede0();
            *(undefined8 *)(param_5 + 0x48) = uVar2;
            param_1 = extraout_XMM0_Da;
        }
        lVar1 = *(longlong *)(param_5 + 0x48);
        if (((lVar1 != 0) && (*(byte *)(lVar1 + 0x80) != 0xff)) &&
            (plVar3 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0x80) + 3) * 0x10 + lVar1),
                    plVar3 != (longlong *)0x0)) {
            param_1 = *(float *)(*plVar3 + (ulonglong)(*(int *)(plVar3 + 1) - 1) * 0xc);
            if ((param_1 <= param_2) || (param_1 <= fVar6)) {
                fVar4 = fVar4 + fVar7;
            }
            else {
                fVar4 = fVar4 + (param_2 / param_1) * fVar7;
            }
        }
        fVar5 = fVar6;
        if ((fVar6 <= fVar4) && (param_1 = 100.0, fVar5 = fVar4, 100.0 < fVar4)) {
            fVar5 = 100.0;
        }
    }
    if (fVar5 != *(float *)(param_3 + 0x184)) {
        if (*(longlong *)(param_3 + 0x208) != 0) {
            param_1 = (float)FUN_140855480(param_1,fVar5);
        }
        if (*(longlong *)(param_3 + 0x210) != 0) {
            param_1 = (float)FUN_140855480(param_1,fVar5);
        }
        FUN_140855480(param_1,fVar5,&DAT_140c10f30);
        *(float *)(param_3 + 0x184) = fVar5;
    }
    return;
}



undefined8
FUN_14085d600(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4_00,
              float *param_5_00,undefined8 param_6_00,char param_4,char param_5,float *param_6)

{
    undefined8 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float local_68;
    float local_64;
    float local_60;

    local_68 = *param_5_00 - *(float *)(param_4_00 + 0x18);
    local_64 = param_5_00[1] - *(float *)(param_4_00 + 0x1c);
    local_60 = param_5_00[2] - *(float *)(param_4_00 + 0x20);
    uVar1 = FUN_140829600(&local_68);
    fVar2 = (float)uVar1;
    fVar5 = 0.0;
    fVar6 = fVar2 / (param_3 * *(float *)(param_4_00 + 0x24));
    *param_6 = fVar6;
    if (param_4 == '\0') goto LAB_14085d76b;
    fVar2 = local_64 * *(float *)(param_4_00 + 0x54) + local_68 * *(float *)(param_4_00 + 0x50) +
            local_60 * *(float *)(param_4_00 + 0x58);
    fVar3 = local_64 * *(float *)(param_4_00 + 0x6c) + local_68 * *(float *)(param_4_00 + 0x68) +
            local_60 * *(float *)(param_4_00 + 0x70);
    fVar4 = local_64 * *(float *)(param_4_00 + 0x60) + local_68 * *(float *)(param_4_00 + 0x5c) +
            local_60 * *(float *)(param_4_00 + 100);
    if (fVar3 == 0.0) {
        if (fVar2 != 0.0) {
            if (fVar2 <= 0.0) {
                fVar3 = -1.570796;
            }
            else {
                fVar3 = 1.570796;
            }
            goto LAB_14085d749;
        }
        fVar3 = 0.0;
        fVar2 = 0.0;
    }
    else {
        fVar3 = (float)FUN_1408fd190(fVar2,fVar3);
        LAB_14085d749:
        fVar2 = (float)FUN_1408fcf3c(fVar4 / (float)uVar1);
    }
    *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) | 2;
    param_6[1] = fVar3;
    param_6[2] = fVar2;
    LAB_14085d76b:
    uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
    if (param_5 != '\0') {
        fVar3 = 1.0;
        if (fVar5 < (float)uVar1) {
            fVar2 = (float)FUN_140829590(&local_68,param_5_00 + 3);
            uVar7 = (undefined4)((ulonglong)uVar1 >> 0x20);
            fVar2 = (float)((uint)(fVar2 / (float)uVar1) ^ 0x80000000);
            if ((fVar2 < fVar3) && (fVar2 <= -1.0)) {
                fVar2 = -1.0;
            }
        }
        fVar2 = (float)FUN_1408fccb0(fVar2);
        *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xfe;
        param_6[3] = fVar2;
    }
    return CONCAT44(uVar7,fVar6);
}



longlong FUN_14085d800(float param_1,longlong param_2,int param_3,longlong *param_4)

{
    float fVar1;
    float fVar2;
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
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    longlong lVar19;
    bool bVar20;
    char cVar21;
    int iVar22;
    undefined8 uVar23;
    float *pfVar24;
    longlong lVar25;
    float *pfVar26;
    ushort uVar27;
    byte bVar28;
    uint uVar29;
    bool bVar30;
    ulonglong uVar31;
    ulonglong uVar32;
    ulonglong uVar33;
    uint uVar34;
    uint uVar35;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    uint local_res8;
    uint local_res20;
    float local_108;
    float local_104;
    float local_100;
    undefined8 local_f8;
    undefined4 local_f0;

    param_4[1] = *param_4;
    lVar19 = *(longlong *)(param_2 + 0x58);
    if (*(longlong *)(lVar19 + 0x50) == 0) {
        uVar23 = FUN_14083ede0();
        *(undefined8 *)(lVar19 + 0x50) = uVar23;
        param_1 = extraout_XMM0_Da;
    }
    if ((*(longlong *)(lVar19 + 0x50) == 0) ||
        ((*(byte *)(*(longlong *)(lVar19 + 0x50) + 0x85) & 1) == 0)) {
        bVar30 = false;
    }
    else {
        bVar30 = true;
    }
    if (param_3 == 1) {
        if (((*(byte *)(lVar19 + 0x4c) & 8) == 0) && ((*(byte *)(param_2 + 0x17c) & 0x40) == 0)) {
            lVar25 = *(longlong *)(param_2 + 0xb0);
            *(undefined *)(param_2 + 0x1ba) = *(undefined *)(lVar25 + 0x12);
            *(byte *)(param_2 + 0x1bb) =
                    *(byte *)(param_2 + 0x1bb) ^ (*(byte *)(lVar25 + 0x13) ^ *(byte *)(param_2 + 0x1bb)) & 7;
            iVar22 = FUN_14084c510(param_2 + 0x1b0,*(undefined8 *)(lVar25 + 8),
                                   *(undefined2 *)(lVar25 + 0x10));
            param_1 = extraout_XMM0_Da_00;
            if (iVar22 == 1) {
                *(byte *)(param_2 + 0x17c) = *(byte *)(param_2 + 0x17c) | 0x40;
            }
        }
        lVar25 = *(longlong *)(param_2 + 0xb0);
        fVar37 = 1e+10;
        if (((~(byte)((uint)*(undefined4 *)(lVar25 + 0x88) >> 0x1e) & 1) != 0) &&
            ((*(byte *)(lVar19 + 0x4c) & 8) != 0)) {
            pfVar26 = *(float **)(lVar25 + 0x68);
            if ((((*(byte *)(pfVar26 + 4) & 2) != 0) || ((*(byte *)(lVar19 + 0x4c) & 1) == 0)) &&
                (((*(byte *)(pfVar26 + 4) & 1) != 0 || (!bVar30)))) {
                do {
                    pfVar24 = (float *)FUN_140846eb0();
                    fVar41 = extraout_XMM0_Da_01;
                    if (pfVar24 == (float *)0x0) break;
                    *pfVar24 = *pfVar26;
                    pfVar24[1] = pfVar26[1];
                    pfVar24[2] = pfVar26[2];
                    pfVar24[3] = pfVar26[3];
                    *(byte *)(pfVar24 + 4) =
                            *(byte *)(pfVar24 + 4) ^ (*(byte *)(pfVar24 + 4) ^ *(byte *)(pfVar26 + 4)) & 1;
                    *(byte *)(pfVar24 + 4) =
                            *(byte *)(pfVar24 + 4) ^ (*(byte *)(pfVar24 + 4) ^ *(byte *)(pfVar26 + 4)) & 2;
                    *(undefined *)((longlong)pfVar24 + 0x11) = *(undefined *)((longlong)pfVar26 + 0x11);
                    fVar41 = *pfVar26;
                    if (fVar41 < fVar37) {
                        fVar37 = fVar41;
                    }
                    pfVar26 = pfVar26 + 5;
                } while (pfVar26 != *(float **)(lVar25 + 0x70));
                FUN_14085d4b0(fVar41,fVar37,param_2,pfVar24,lVar19 + 8);
                goto LAB_14085dff0;
            }
        }
        lVar25 = lVar25 + 8;
        if ((*(byte *)(lVar19 + 0x4c) & 8) == 0) {
            lVar25 = param_2 + 0x1b0;
        }
        uVar27 = 1;
        if ((*(byte *)(lVar25 + 0xb) & 7) != 0) {
            uVar27 = *(ushort *)(lVar25 + 8);
        }
        uVar31 = (ulonglong)*(byte *)(lVar25 + 10);
        bVar28 = 0;
        uVar35 = (uint)*(byte *)(lVar25 + 10);
        while (uVar35 != 0) {
            local_res20 = (uint)uVar27;
            if ((uVar31 & 1) == 0) {
                uVar31 = uVar31 >> 1;
            }
            else {
                uVar29 = 0;
                uVar34 = (uint)uVar31;
                if (uVar27 != 0) {
                    do {
                        lVar25 = FUN_140846eb0();
                        param_1 = extraout_XMM0_Da_02;
                        uVar34 = uVar35;
                        if (lVar25 == 0) break;
                        *(char *)(lVar25 + 0x11) = '\x01' << (bVar28 & 0x1f);
                        param_1 = (float)FUN_14085d600();
                        if (param_1 < fVar37) {
                            fVar37 = param_1;
                        }
                        uVar29 = uVar29 + 1;
                    } while (uVar29 < local_res20);
                }
                uVar31 = (ulonglong)(uVar34 >> 1);
            }
            bVar28 = bVar28 + 1;
            uVar35 = (uint)uVar31;
        }
        if ((*(byte *)(lVar19 + 0x4c) & 8) != 0) {
            param_1 = (float)FUN_14084bf40(*(undefined8 *)(param_2 + 0xb0),param_4);
        }
        FUN_14085d4b0(param_1,fVar37,param_2);
    }
    else {
        if ((((*(longlong *)(param_2 + 0x1f8) != 0) &&
              (bVar28 = *(byte *)(lVar19 + 0x4c) >> 5 & 1,
                      FUN_140867b00(*(longlong *)(param_2 + 0x1f8),bVar28), bVar28 != 0)) &&
             ((*(uint *)(*(longlong *)(param_2 + 0x1f8) + 0x28) >> 1 & 1) != 0)) &&
            (cVar21 = FUN_1408677e0(), cVar21 != '\0')) {
            uVar23 = FUN_14084eb00(*(undefined8 *)(param_2 + 0xa0));
            FUN_14083a800(DAT_140c61b98,*(undefined8 *)(param_2 + 0x1f8),uVar23);
        }
        uVar35 = 0;
        bVar28 = *(byte *)(*(longlong *)(param_2 + 0xb0) + 0x12);
        uVar31 = (ulonglong)bVar28;
        if (bVar28 != 0) {
            fVar42 = 1.0;
            fVar41 = -1.0;
            local_res8 = 0;
            fVar37 = 0.0;
            do {
                if ((uVar31 & 1) != 0) {
                    pfVar26 = (float *)FUN_140846eb0();
                    if (pfVar26 == (float *)0x0) break;
                    uVar33 = (ulonglong)uVar35;
                    *(char *)((longlong)pfVar26 + 0x11) = '\x01' << ((byte)uVar35 & 0x1f);
                    fVar36 = (float)FUN_140829600(lVar19 + 0x18);
                    *pfVar26 = fVar36 / ((float)(&DAT_140c62024)[uVar33 * 0x20] *
                                         *(float *)(*(longlong *)(param_2 + 0xb0) + 100));
                    if (((*(byte *)(lVar19 + 0x4c) & 1) == 0) || ((&DAT_140c62028)[uVar33 * 0x80] == '\0')) {
                        bVar20 = false;
                        if (!bVar30) goto LAB_14085dfe8;
                    }
                    else {
                        bVar20 = true;
                    }
                    if (((*(byte *)(lVar19 + 0x4c) & 0x10) == 0) && (*(longlong *)(param_2 + 0x1f8) != 0)) {
                        uVar32 = (ulonglong)local_res8;
                        lVar25 = *(longlong *)(*(longlong *)(param_2 + 0x1f8) + 0x88);
                        fVar39 = (float)(&DAT_140c62054)[uVar33 * 0x20];
                        fVar40 = (float)(&DAT_140c62050)[uVar33 * 0x20];
                        fVar1 = (float)(&DAT_140c62058)[uVar33 * 0x20];
                        fVar38 = (float)(&DAT_140c62060)[uVar33 * 0x20];
                        fVar2 = *(float *)(lVar25 + 0xc + uVar32 * 4);
                        fVar3 = *(float *)(lVar25 + uVar32 * 4);
                        fVar4 = *(float *)(lVar25 + 0x18 + uVar32 * 4);
                        fVar5 = *(float *)(lVar25 + 0x10 + uVar32 * 4);
                        fVar6 = *(float *)(lVar25 + 4 + uVar32 * 4);
                        fVar7 = *(float *)(lVar25 + 0x14 + uVar32 * 4);
                        fVar8 = *(float *)(lVar25 + 8 + uVar32 * 4);
                        fVar9 = *(float *)(lVar25 + 0x1c + uVar32 * 4);
                        fVar10 = *(float *)(lVar25 + 0x20 + uVar32 * 4);
                        fVar11 = (float)(&DAT_140c62064)[uVar33 * 0x20];
                        fVar12 = (float)(&DAT_140c6205c)[uVar33 * 0x20];
                        fVar13 = (float)(&DAT_140c6206c)[uVar33 * 0x20];
                        fVar14 = (float)(&DAT_140c62068)[uVar33 * 0x20];
                        fVar15 = (float)(&DAT_140c62070)[uVar33 * 0x20];
                        fVar16 = *(float *)(lVar19 + 0x18);
                        fVar42 = 1.0;
                        local_res8 = local_res8 + 9;
                        fVar41 = -1.0;
                        fVar17 = *(float *)(lVar19 + 0x20);
                        fVar37 = 0.0;
                        fVar18 = *(float *)(lVar19 + 0x1c);
                        fVar38 = (fVar12 * fVar3 + fVar38 * fVar2 + fVar11 * fVar4) * fVar16 +
                                 (fVar12 * fVar6 + fVar38 * fVar5 + fVar11 * fVar9) * fVar18 +
                                 (fVar38 * fVar7 + fVar12 * fVar8 + fVar11 * fVar10) * fVar17;
                        local_108 = (fVar40 * fVar3 + fVar39 * fVar2 + fVar1 * fVar4) * fVar16 +
                                    (fVar40 * fVar6 + fVar39 * fVar5 + fVar1 * fVar9) * fVar18 +
                                    (fVar40 * fVar8 + fVar39 * fVar7 + fVar1 * fVar10) * fVar17;
                        local_100 = (fVar14 * fVar3 + fVar13 * fVar2 + fVar15 * fVar4) * fVar16 +
                                    (fVar14 * fVar6 + fVar13 * fVar5 + fVar15 * fVar9) * fVar18 +
                                    (fVar14 * fVar8 + fVar13 * fVar7 + fVar15 * fVar10) * fVar17;
                    }
                    else {
                        local_108 = *(float *)(lVar19 + 0x18);
                        fVar38 = *(float *)(lVar19 + 0x1c);
                        local_100 = *(float *)(lVar19 + 0x20);
                    }
                    fVar39 = fVar37;
                    local_104 = fVar38;
                    if (bVar20) {
                        if (local_100 == fVar37) {
                            fVar40 = fVar37;
                            if (local_108 != fVar37) {
                                if (local_108 <= fVar37) {
                                    fVar40 = -1.570796;
                                }
                                else {
                                    fVar40 = 1.570796;
                                }
                                goto LAB_14085df6e;
                            }
                        }
                        else {
                            fVar40 = (float)FUN_1408fd190(local_108,local_100);
                            fVar39 = fVar37;
                            LAB_14085df6e:
                            fVar37 = (float)FUN_1408fcf3c(fVar38 / fVar36);
                        }
                        *(byte *)(pfVar26 + 4) = *(byte *)(pfVar26 + 4) | 2;
                        pfVar26[1] = fVar40;
                        pfVar26[2] = fVar37;
                    }
                    fVar37 = fVar39;
                    if (bVar30) {
                        fVar37 = fVar42;
                        if (fVar39 < fVar36) {
                            local_f8 = 0;
                            local_f0 = 0x3f800000;
                            fVar38 = (float)FUN_140829590(&local_108,&local_f8);
                            fVar38 = fVar38 / fVar36;
                            fVar37 = fVar42;
                            if ((fVar38 < fVar42) && (fVar37 = fVar38, fVar38 <= fVar41)) {
                                fVar37 = fVar41;
                            }
                        }
                        fVar37 = (float)FUN_1408fccb0(fVar37);
                        *(byte *)(pfVar26 + 4) = *(byte *)(pfVar26 + 4) & 0xfe;
                        pfVar26[3] = fVar37;
                        fVar37 = fVar39;
                    }
                }
                LAB_14085dfe8:
                uVar31 = uVar31 >> 1;
                uVar35 = uVar35 + 1;
            } while ((int)uVar31 != 0);
        }
    }
    LAB_14085dff0:
    return (param_4[1] - *param_4) / 0x24;
}



void FUN_14085e090(longlong param_1)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined2 local_14;

    if ((*(byte *)(param_1 + 0x17f) & 0x40) != 0) {
        FUN_14085e190(param_1,0);
    }
    if ((*(byte *)(param_1 + 0x17e) & 0x10) == 0) {
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | 0x10;
        if (*(longlong *)(param_1 + 0x208) != 0) {
            FUN_140853e50(*(longlong *)(param_1 + 0x208),param_1,1);
            *(undefined8 *)(param_1 + 0x208) = 0;
        }
        if (*(longlong *)(param_1 + 0x210) != 0) {
            FUN_140853e50(*(longlong *)(param_1 + 0x210),param_1,2);
            *(undefined8 *)(param_1 + 0x210) = 0;
        }
        FUN_140853e50(&DAT_140c10f30,param_1,0);
        local_30 = *(undefined8 *)(param_1 + 0xb0);
        local_38[0] = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 3;
        local_14 = 0x100;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x118))(*(longlong **)(param_1 + 0xa0),local_38);
    }
    return;
}



void FUN_14085e170(longlong param_1,undefined4 param_2)

{
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_140843c20(param_1,4,param_2);
    return;
}



void FUN_14085e190(longlong param_1,undefined param_2)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined local_14;
    undefined local_13;

    if ((*(byte *)(param_1 + 0x17f) & 0x40) != 0) {
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xbf;
        FUN_140843a20();
        local_30 = *(undefined8 *)(param_1 + 0xb0);
        local_28 = 0;
        local_20 = 0;
        local_14 = 0;
        local_38[0] = 0;
        local_18 = 3;
        local_13 = param_2;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x128))(*(longlong **)(param_1 + 0xa0),local_38);
    }
    return;
}



undefined8 FUN_14085e210(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    char cVar3;
    int iVar4;
    longlong *plVar5;
    undefined4 local_res8 [2];
    longlong local_res18;
    longlong local_res20;

    lVar1 = *(longlong *)(param_1 + 0xb8);
    if (lVar1 != 0) {
        plVar2 = *(longlong **)(lVar1 + 0x10);
        plVar5 = (longlong *)0x0;
        if ((plVar2 != (longlong *)0x0) && (plVar2[3] == param_1)) {
            plVar5 = plVar2;
        }
        plVar2 = *(longlong **)(lVar1 + 0x18);
        if ((plVar2 != (longlong *)0x0) && (plVar2[3] == param_1)) {
            plVar5 = plVar2;
        }
        if (plVar5 != (longlong *)0x0) {
            cVar3 = (**(code **)(*plVar5 + 0x78))(plVar5);
            if (cVar3 != '\0') {
                local_res18 = 0;
                local_res8[0] = 0;
                local_res20 = 0;
                FUN_1408563b0(*(undefined8 *)(param_1 + 0xa8),&local_res18,local_res8,&local_res20);
                if (local_res18 != 0) {
                    iVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,local_res18,*(undefined8 *)(param_1 + 0x1a0))
                            ;
                    if (iVar4 == 1) {
                        cVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
                        if (cVar3 != '\0') {
                            (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x68))
                                    (*(longlong **)(param_1 + 0xb8),local_res18,*(undefined8 *)(param_1 + 0x1a0)
                                    );
                        }
                        if (*(longlong *)(param_1 + 0x1a0) != 0) {
                            FUN_140856790(*(undefined8 *)(param_1 + 0xa8));
                        }
                        if (*(longlong *)(param_1 + 0x28) != 0) {
                            FUN_140841fe0(*(longlong *)(param_1 + 0x28),0);
                        }
                        *(longlong *)(param_1 + 0x1a0) = local_res18;
                        *(longlong *)(param_1 + 0x28) = local_res20;
                        return 1;
                    }
                    if (local_res18 != 0) {
                        FUN_140856790(*(undefined8 *)(param_1 + 0xa8));
                    }
                    if (local_res20 != 0) {
                        FUN_140841fe0(local_res20,0);
                    }
                }
            }
        }
    }
    return 0;
}



void FUN_14085e370(longlong param_1,byte param_2)

{
    byte bVar1;
    uint uVar2;
    char local_res8;
    undefined4 local_res18;
    undefined4 local_res1c;

    bVar1 = *(byte *)(param_1 + 0x17c);
    if ((bVar1 & 0x10) == 0) {
        *(byte *)(param_1 + 0x17c) = bVar1 | 0x10;
        uVar2 = FUN_14084ece0();
        *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0x1f;
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xf0;
        *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) | local_res8 << 5;
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | (byte)uVar2 & 0xf;
    }
    else {
        uVar2 = bVar1 & 0xf;
    }
    if (uVar2 == 1) {
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xf1;
        local_res18 = 0;
        local_res1c = 4;
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | (param_2 & 7) * '\x02' | 1;
        FUN_140860ea0(param_1,&local_res18,1);
    }
    else if (uVar2 == 2) {
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 0x10;
        return;
    }
    return;
}



void FUN_14085e450(longlong param_1,longlong param_2)

{
    int iVar1;
    float fVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    int *piVar7;
    float *pfVar8;
    uint uVar9;
    float fVar10;
    float fVar11;

    fVar2 = DAT_140c10f58;
    piVar7 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x18);
    uVar6 = 0;
    fVar11 = DAT_140c61bf8;
    uVar5 = DAT_140c61bfc;
    if (*(char *)(param_1 + 0x118) != '\0') {
        uVar9 = 0;
        do {
            iVar1 = *piVar7;
            if (iVar1 == 0) break;
            fVar10 = *(float *)(param_1 + 0x114) * 0.05;
            if (-37.0 <= fVar10) {
                if ((uVar5 & 1) == 0) {
                    fVar11 = 2.786635e+07;
                    uVar5 = uVar5 | 1;
                    DAT_140c61bf8 = 2.786635e+07;
                    DAT_140c61bfc = uVar5;
                }
                uVar4 = (uint)(longlong)(fVar11 * fVar10 + 1.065353e+09);
                fVar10 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
                fVar10 = ((fVar10 * 0.3251898 + 0.02080577) * fVar10 + 0.6530434) *
                         (float)(uVar4 & 0xff800000);
            }
            else {
                fVar10 = 0.0;
            }
            if (fVar2 < fVar10 * (float)piVar7[1]) {
                uVar3 = (ulonglong)uVar6;
                uVar6 = uVar6 + 1;
                *(float *)(param_2 + 4 + uVar3 * 0xc) = fVar10 * (float)piVar7[1];
                *(int *)(param_2 + uVar3 * 0xc) = iVar1;
                *(undefined4 *)(param_2 + 8 + uVar3 * 0xc) = 0;
            }
            uVar9 = uVar9 + 1;
            piVar7 = piVar7 + 2;
        } while (uVar9 < 4);
    }
    fVar2 = DAT_140c10f5c;
    uVar9 = 0;
    pfVar8 = (float *)(param_1 + 0xf4);
    do {
        if (7 < uVar6) {
            return;
        }
        if ((pfVar8[4] != 0.0) && (fVar2 < *pfVar8)) {
            uVar3 = (ulonglong)uVar6;
            fVar10 = *pfVar8 * 0.05;
            *(float *)(param_2 + uVar3 * 0xc) = pfVar8[4];
            if (-37.0 <= fVar10) {
                if ((uVar5 & 1) == 0) {
                    fVar11 = 2.786635e+07;
                    uVar5 = uVar5 | 1;
                    DAT_140c61bf8 = 2.786635e+07;
                    DAT_140c61bfc = uVar5;
                }
                uVar4 = (uint)(longlong)(fVar11 * fVar10 + 1.065353e+09);
                fVar10 = (float)((uVar4 & 0x7fffff) + 0x3f800000);
                fVar10 = ((fVar10 * 0.3251898 + 0.02080577) * fVar10 + 0.6530434) *
                         (float)(uVar4 & 0xff800000);
            }
            else {
                fVar10 = 0.0;
            }
            *(float *)(param_2 + 4 + uVar3 * 0xc) = fVar10;
            *(undefined4 *)(param_2 + 8 + uVar3 * 0xc) = 1;
            uVar6 = uVar6 + 1;
        }
        uVar9 = uVar9 + 1;
        pfVar8 = pfVar8 + 1;
    } while (uVar9 < 4);
    if (uVar6 < 8) {
        *(undefined4 *)(param_2 + (ulonglong)uVar6 * 0xc) = 0;
    }
    return;
}



undefined8
FUN_14085e6d0(undefined4 param_1,undefined4 param_2,longlong param_3,int param_4,undefined4 *param_5
)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    int iVar4;
    uint uVar5;
    byte bVar6;
    byte bVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;
    byte local_28;
    char local_27;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    lVar1 = *(longlong *)(param_3 + 0xb0);
    bVar7 = 1;
    local_28 = local_28 & 0xfc;
    local_30 = 0;
    uStack44 = 0;
    local_38 = 0;
    uStack52 = 0;
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    bVar6 = 1;
    if ((~(byte)((uint)*(undefined4 *)(lVar1 + 0x88) >> 0x1e) & 1) != 0) {
        puVar3 = *(undefined4 **)(lVar1 + 0x68);
        iVar4 = 0;
        if (param_4 != 0) {
            do {
                if (puVar3 == *(undefined4 **)(lVar1 + 0x70)) break;
                iVar4 = iVar4 + 1;
                puVar3 = puVar3 + 5;
            } while (iVar4 != param_4);
        }
        bVar6 = 1;
        if (puVar3 != *(undefined4 **)(lVar1 + 0x70)) {
            param_1 = *puVar3;
            param_2 = puVar3[1];
            local_30 = puVar3[2];
            uStack44 = puVar3[3];
            local_28 = local_28 ^ *(byte *)(puVar3 + 4) & 1 ^ *(byte *)(puVar3 + 4) & 2;
            bVar6 = ~local_28 & 1;
            bVar7 = ~(local_28 >> 1) & 1;
            local_38 = param_1;
            uStack52 = param_2;
            if ((bVar7 == 0) && (bVar6 == 0)) {
                *param_5 = param_1;
                param_5[1] = param_2;
                param_5[2] = local_30;
                param_5[3] = uStack44;
                return 1;
            }
        }
    }
    iVar4 = 0;
    uVar5 = 1;
    if ((*(byte *)(lVar1 + 0x13) & 7) != 0) {
        uVar5 = (uint)*(ushort *)(lVar1 + 0x10);
    }
    uVar10 = (ulonglong)*(byte *)(lVar1 + 0x12);
    uVar11 = 0;
    if (*(byte *)(lVar1 + 0x12) != 0) {
        do {
            if ((uVar10 & 1) == 0) {
                uVar10 = uVar10 >> 1;
                uVar11 = uVar11 + 1;
            }
            else {
                uVar9 = 0;
                if (uVar5 != 0) {
                    do {
                        if (param_4 == iVar4) {
                            local_27 = '\x01' << ((byte)uVar11 & 0x1f);
                            puVar3 = &DAT_140c10fb0;
                            if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
                                puVar3 = *(undefined4 **)(lVar1 + 8);
                            }
                            FUN_14085d600(param_1,param_2,*(undefined4 *)(lVar1 + 100),
                                          &DAT_140c62000 + (ulonglong)uVar11 * 0x20,puVar3 + uVar9 * 6,uVar9,bVar7
                                    ,bVar6,&local_38);
                            uVar2 = *(undefined8 *)(param_3 + 0xb0);
                            *param_5 = local_38;
                            param_5[1] = uStack52;
                            param_5[2] = local_30;
                            param_5[3] = uStack44;
                            FUN_14084be70(uVar2,&local_38);
                            return 1;
                        }
                        uVar8 = (int)uVar9 + 1;
                        uVar9 = (ulonglong)uVar8;
                        iVar4 = iVar4 + 1;
                    } while (uVar8 < uVar5);
                }
            }
        } while ((int)uVar10 != 0);
    }
    return 2;
}



void FUN_14085e910(longlong param_1)

{
    // WARNING: Could not recover jumptable at 0x00014085e91a. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x1c8))();
    return;
}



longlong * FUN_14085ea40(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(param_1 + 0xa0);
    if ((*(byte *)(param_1 + 0x17e) & 0x80) != 0) {
        plVar1 = (longlong *)(**(code **)(*plVar2 + 0x210))();
        if ((plVar1 == (longlong *)0x0) &&
            (plVar1 = (longlong *)FUN_14086f180(), plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 8))(plVar2);
            (**(code **)(*plVar1 + 0x48))(plVar1,plVar2);
            (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        return plVar1;
    }
    // WARNING: Could not recover jumptable at 0x00014085ea57. Too many branches
    // WARNING: Treating indirect jump as call
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0xf8))();
    return plVar2;
}



undefined8 FUN_14085ea60(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;

    lVar1 = *(longlong *)(param_1 + 0x218);
    fVar2 = *(float *)(param_1 + 0xec);
    uVar3 = 0;
    if (lVar1 != 0) {
        if ((*(byte *)(lVar1 + 0x148) & 1) == 0) {
            FUN_14085c930(lVar1);
        }
        fVar2 = fVar2 + *(float *)(lVar1 + 0x140);
    }
    return CONCAT44(uVar3,fVar2);
}



undefined4 FUN_14085eab0(longlong param_1)

{
    return *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x18);
}



ulonglong FUN_14085eac0(longlong param_1,uint *param_2)

{
    char cVar1;
    ulonglong uVar2;

    if ((*(byte *)(param_1 + 0x17c) & 0x10) == 0) {
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x10;
        uVar2 = FUN_14084ece0();
        cVar1 = *(char *)param_2;
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xf0;
        *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0x1f | cVar1 << 5;
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | (byte)uVar2 & 0xf;
        return uVar2;
    }
    *param_2 = (uint)(*(byte *)(param_1 + 0x17b) >> 5);
    return (ulonglong)(*(byte *)(param_1 + 0x17c) & 0xf);
}



undefined4 FUN_14085eb50(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x218);
    if (lVar1 != 0) {
        if ((*(byte *)(lVar1 + 0x148) & 1) == 0) {
            FUN_14085c930(lVar1);
        }
        return *(undefined4 *)(lVar1 + 0x144);
    }
    return 0;
}



int FUN_14085eb90(longlong param_1,longlong *param_2)

{
    bool bVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    int *piVar6;

    piVar6 = (int *)(*(longlong *)(param_1 + 0x58) + 8);
    if (piVar6 == (int *)0x0) {
        return 1;
    }
    if ((*(byte *)(param_1 + 0x17b) & 0xc) == 0) {
        lVar3 = *(longlong *)(param_1 + 0xa0);
        if (((*(uint *)(lVar3 + 0x60) >> 10 & 1) == 0) || ((*(byte *)(lVar3 + 0x5b) & 0x10) == 0)) {
            bVar1 = false;
        }
        else {
            bVar1 = true;
        }
        for (lVar3 = *(longlong *)(lVar3 + 0x40); (!bVar1 && (lVar3 != 0));
             lVar3 = *(longlong *)(lVar3 + 0x40)) {
            if (((*(uint *)(lVar3 + 0x60) >> 10 & 1) == 0) || ((*(byte *)(lVar3 + 0x5b) & 0x10) == 0)) {
                bVar1 = false;
            }
            else {
                bVar1 = true;
            }
        }
        if (((*(byte *)(param_1 + 0x17b) & 3) == 0) && (!bVar1)) {
            return 1;
        }
    }
    iVar5 = *piVar6;
    iVar2 = 1;
    if ((*param_2 != 0) && (*(int *)(param_2 + 1) == iVar5)) {
        *(longlong *)(param_1 + 0x1f8) = *param_2;
        *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 1);
    }
    if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
        ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x24) & 4) != 0)) {
        lVar3 = FUN_14083a400(DAT_140c61b98);
        *(longlong *)(param_1 + 0x1f8) = lVar3;
        if (lVar3 != 0) {
            uVar4 = FUN_14084eb00(*(undefined8 *)(param_1 + 0xa0));
            iVar2 = FUN_140873e20(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x1f8),uVar4);
            if (iVar2 != 1) {
                FUN_14083a630(DAT_140c61b98,*(undefined8 *)(param_1 + 0x1f8));
                iVar5 = 0;
                *(undefined8 *)(param_1 + 0x1f8) = 0;
            }
            *(int *)(param_1 + 0x200) = iVar5;
        }
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x4c) & 0x10) == 0) &&
        (*(longlong *)(param_1 + 0x1f8) != 0)) {
        FUN_1408676e0(*(longlong *)(param_1 + 0x1f8),
                      *(undefined *)(*(longlong *)(param_1 + 0xb0) + 0x12));
    }
    return iVar2;
}



ulonglong FUN_14085ed00(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    byte bVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    byte local_res8 [8];
    byte local_res18 [8];

    uVar7 = 2;
    if (*(longlong *)(param_1 + 0x208) != 0) {
        FUN_1408514b0(*(longlong *)(param_1 + 0x208),param_1,1);
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
        FUN_1408514b0(*(longlong *)(param_1 + 0x210),param_1,2);
    }
    FUN_1408514b0(&DAT_140c10f30,param_1,0);
    if (*(int *)(param_1 + 0x78) != 0) {
        uVar3 = FUN_14083c300(DAT_140c61b80,*(int *)(param_1 + 0x78),param_1,param_1 + 8);
        uVar7 = (ulonglong)uVar3;
        if (uVar3 == 1) {
            bVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x1d0))
                    (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
            *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xfe;
            *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | bVar2 & 1;
            *(undefined8 *)(param_1 + 0x58) = 0;
            FUN_14084d5f0(*(undefined8 *)(param_1 + 0xa0),param_1 + 0x58,*(undefined8 *)(param_1 + 0xb0),
                          local_res18,local_res8,param_1 + 0x1c0);
            *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xf0;
            lVar1 = *(longlong *)(param_1 + 0x58);
            *(byte *)(param_1 + 0x17b) =
                    *(byte *)(param_1 + 0x17b) | (local_res8[0] & 3) << 2 | local_res18[0] & 3;
            if (lVar1 == 0) {
                *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xfc;
            }
            else {
                if (*(longlong *)(lVar1 + 0x50) == 0) {
                    uVar5 = FUN_14083ede0(DAT_140c61ba8 + 0x2550,*(undefined4 *)(lVar1 + 0xc));
                    *(undefined8 *)(lVar1 + 0x50) = uVar5;
                }
                lVar1 = *(longlong *)(lVar1 + 0x50);
                if (lVar1 == 0) {
                    if (*(int *)(*(longlong *)(param_1 + 0x58) + 0xc) != 0) {
                        return 2;
                    }
                }
                else {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x10) = *(undefined4 *)(lVar1 + 0x28);
                    *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x14) = *(undefined4 *)(lVar1 + 0x2c);
                    uVar6 = FUN_140860120(param_1);
                    uVar7 = uVar6 & 0xffffffff;
                    if ((int)uVar6 != 1) {
                        return uVar6;
                    }
                }
                FUN_14085eb90(param_1,param_2);
            }
            if (*(longlong *)(param_1 + 0x1f8) != 0) {
                iVar4 = FUN_14083a4b0(DAT_140c61b98,*(longlong *)(param_1 + 0x1f8),param_1);
                if (iVar4 == 2) {
                    *(undefined8 *)(param_1 + 0x1f8) = 0;
                }
                else {
                    FUN_140867bf0(*(undefined8 *)(param_1 + 0x1f8),
                                  *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x18));
                    FUN_140867be0(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x78));
                }
            }
            FUN_1408563b0(*(undefined8 *)(param_1 + 0xa8),param_1 + 0x1a0,param_1 + 0x1a8,param_1 + 0x28);
        }
    }
    return uVar7;
}



void FUN_14085ef10(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
        FUN_1408707f0();
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xdf;
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xbf;
        *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    return;
}



undefined FUN_14085ef50(longlong param_1)

{
    int *piVar1;
    longlong lVar2;

    if (*(char *)(param_1 + 0x118) == '\0') {
        lVar2 = 0;
        piVar1 = (int *)(param_1 + 0x104);
        while (*piVar1 == 0) {
            lVar2 = lVar2 + 1;
            piVar1 = piVar1 + 1;
            if (3 < lVar2) {
                return 0;
            }
        }
    }
    return 1;
}



undefined8 FUN_14085ef80(longlong param_1)

{
    byte bVar1;
    longlong lVar2;

    bVar1 = *(byte *)(param_1 + 0x5b);
    while( true ) {
        if ((bVar1 & 8) != 0) {
            return 1;
        }
        lVar2 = *(longlong *)(param_1 + 0x48);
        if ((lVar2 == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 == 0)) break;
        bVar1 = *(byte *)(lVar2 + 0x5b);
        param_1 = lVar2;
    }
    return 0;
}



ulonglong FUN_14085efb0(longlong *param_1)

{
    bool bVar1;
    int *in_RAX;
    uint uVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if ((*(byte *)((longlong)param_1 + 0x17c) & 0x20) == 0) {
        in_RAX = (int *)(**(code **)(*param_1 + 0x78))();
    }
    lVar3 = param_1[0x43];
    fVar6 = 0.0;
    fVar4 = 0.0;
    if (lVar3 != 0) {
        if ((*(byte *)(lVar3 + 0x148) & 1) == 0) {
            in_RAX = (int *)FUN_14085c930();
        }
        fVar4 = *(float *)(lVar3 + 0x144);
    }
    fVar5 = (fVar4 + *(float *)(param_1 + 0x19)) * 0.05;
    fVar4 = fVar6;
    if (-37.0 <= fVar5) {
        if ((DAT_140c61bfc & 1) == 0) {
            DAT_140c61bfc = DAT_140c61bfc | 1;
            DAT_140c61bf8 = 2.786635e+07;
        }
        uVar2 = (uint)(longlong)(DAT_140c61bf8 * fVar5 + 1.065353e+09);
        fVar4 = (float)(uVar2 & 0xff800000);
        in_RAX = (int *)(ulonglong)(uint)fVar4;
        fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
        fVar4 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * fVar4;
    }
    fVar4 = fVar4 * *(float *)((longlong)param_1 + 0xcc);
    lVar3 = 0;
    if (*(char *)(param_1 + 0x23) == '\0') {
        in_RAX = (int *)((longlong)param_1 + 0x104);
        do {
            if (*in_RAX != 0) goto LAB_14085f1bc;
            lVar3 = lVar3 + 1;
            in_RAX = in_RAX + 1;
        } while (lVar3 < 4);
        fVar5 = *(float *)((longlong)param_1 + 0xec);
        lVar3 = param_1[0x43];
        if (lVar3 != 0) {
            if ((*(byte *)(lVar3 + 0x148) & 1) == 0) {
                in_RAX = (int *)FUN_14085c930(lVar3);
            }
            fVar5 = fVar5 + *(float *)(lVar3 + 0x140);
        }
        if (-37.0 <= fVar5 * 0.05) {
            if ((DAT_140c61bfc & 1) == 0) {
                DAT_140c61bfc = DAT_140c61bfc | 1;
                DAT_140c61bf8 = 2.786635e+07;
            }
            uVar2 = (uint)(longlong)(fVar5 * 0.05 * DAT_140c61bf8 + 1.065353e+09);
            fVar6 = (float)(uVar2 & 0xff800000);
            in_RAX = (int *)(ulonglong)(uint)fVar6;
            fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
            fVar6 = ((fVar5 * 0.3251898 + 0.02080577) * fVar5 + 0.6530434) * fVar6;
        }
        bVar1 = DAT_140c10f58 < fVar6 * fVar4;
    }
    else {
        LAB_14085f1bc:
        bVar1 = DAT_140c10f58 < fVar4;
    }
    return (ulonglong)in_RAX & 0xffffffffffffff00 | (ulonglong)!bVar1;
}



undefined FUN_14085f1f0(longlong param_1,int param_2)

{
    undefined uVar1;

    if (param_2 == 0) {
        return 1;
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
        uVar1 = FUN_14084f160(*(longlong *)(param_1 + 0xa0),param_2,0,0);
        return uVar1;
    }
    return 0;
}



bool FUN_14085f220(longlong param_1)

{
    if (((*(byte *)(param_1 + 0x17b) & 3) == 1) && ((*(byte *)(param_1 + 0x17b) & 0xc) == 4)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x4c) & 8) != 0) {
            return (*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x13) & 7) == 1;
        }
        return (*(byte *)(param_1 + 0x1bb) & 7) == 1;
    }
    return false;
}



undefined8 FUN_14085f280(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    char cVar2;
    undefined8 uVar3;

    if (*(longlong *)(param_1 + 0x28) == param_2) {
        cVar2 = FUN_14085e210();
        if (cVar2 == '\0') {
            return 1;
        }
    }
    plVar1 = *(longlong **)(param_1 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014085f2c8. Too many branches
        // WARNING: Treating indirect jump as call
        uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        return uVar3;
    }
    return 0;
}



void FUN_14085f2e0(longlong param_1,byte param_2)

{
    undefined4 local_res8;
    undefined4 local_resc;

    *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xf1;
    local_res8 = 0;
    local_resc = 4;
    *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | (param_2 & 7) * '\x02' | 1;
    FUN_140860ea0(param_1,&local_res8,1);
    return;
}



void FUN_14085f320(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,
                   longlong *param_5,char param_6)

{
    longlong *plVar1;
    ulonglong uVar2;
    uint uVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined4 local_18;
    undefined4 uStack20;
    uint uStack16;
    undefined4 uStack12;

    if (param_6 != '\0') {
        plVar5 = *(longlong **)(param_3 + 0x30);
        plVar4 = *(longlong **)(param_3 + 0x38);
        uVar3 = ~*(uint *)(param_5 + 1) & 1;
        plVar1 = plVar5;
        while ((plVar1 != plVar4 &&
                ((*plVar1 != *param_5 || (((*(uint *)(plVar1 + 1) ^ uVar3) & 1) != 0))))) {
            plVar1 = plVar1 + 3;
        }
        if ((plVar1 != plVar4) && (plVar1 != (longlong *)&DAT_fffffffffffffff0)) {
            if ((*(uint *)(param_5 + 1) & 1) != 0) {
                return;
            }
            if (plVar5 != plVar4) {
                do {
                    if ((*plVar5 == *param_5) && (((*(uint *)(plVar5 + 1) ^ uVar3) & 1) == 0)) break;
                    plVar5 = plVar5 + 3;
                } while (plVar5 != plVar4);
                if (plVar5 != plVar4) {
                    if (plVar5 < plVar4 + -3) {
                        uVar2 = ((ulonglong)((longlong)(plVar4 + -3) + (-1 - (longlong)plVar5)) / 0x18 + 1) * 3
                                & 0x1fffffffffffffff;
                        plVar4 = plVar5 + 3;
                        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                            *plVar5 = *plVar4;
                            plVar4 = plVar4 + 1;
                            plVar5 = plVar5 + 1;
                        }
                    }
                    *(longlong *)(param_3 + 0x38) =
                            (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_3 + 0x38));
                }
            }
        }
    }
    if ((param_2 == 1.0) && ((param_6 == '\0' || ((*(byte *)(param_5 + 1) & 1) != 0)))) {
        local_18 = *(undefined4 *)param_5;
        uStack20 = *(undefined4 *)((longlong)param_5 + 4);
        uStack16 = *(uint *)(param_5 + 1);
        uStack12 = *(undefined4 *)((longlong)param_5 + 0xc);
        plVar5 = *(longlong **)(param_3 + 0x30);
        plVar4 = *(longlong **)(param_3 + 0x38);
        if (plVar5 != plVar4) {
            do {
                if ((*plVar5 == *param_5) && (((*(uint *)(plVar5 + 1) ^ uStack16) & 1) == 0)) break;
                plVar5 = plVar5 + 3;
            } while (plVar5 != plVar4);
            if (plVar5 != plVar4) {
                if (plVar5 < plVar4 + -3) {
                    uVar2 = ((ulonglong)((longlong)(plVar4 + -3) + (-1 - (longlong)plVar5)) / 0x18 + 1) * 3 &
                            0x1fffffffffffffff;
                    plVar4 = plVar5 + 3;
                    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        *plVar5 = *plVar4;
                        plVar4 = plVar4 + 1;
                        plVar5 = plVar5 + 1;
                    }
                }
                *(longlong *)(param_3 + 0x38) =
                        (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_3 + 0x38));
            }
        }
    }
    else {
        local_18 = *(undefined4 *)param_5;
        uStack20 = *(undefined4 *)((longlong)param_5 + 4);
        uStack16 = *(uint *)(param_5 + 1);
        uStack12 = *(undefined4 *)((longlong)param_5 + 0xc);
        FUN_14084f8a0(local_18,param_2,param_2,param_3 + 0x30,&local_18);
    }
    FUN_14085d440(param_3);
    return;
}



void FUN_14085f4c0(longlong param_1)

{
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0x9f;
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 0x18;
    return;
}



void FUN_14085f4d0(longlong param_1,uint param_2,uint param_3)

{
    if ((*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) && ((param_3 & 0xffffffef) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x50))();
    }
    if ((param_3 & 0x10) != 0) {
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xfe;
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | (byte)(param_2 >> 4) & 1;
    }
    return;
}



void FUN_14085f530(float param_1,longlong param_2,undefined4 *param_3)

{
    longlong lVar1;
    float fVar2;
    float fVar3;

    switch(*param_3) {
        case 0:
        case 4:
            if (((*(byte *)(param_2 + 0x17e) & 0x80) == 0) || (*(char *)(param_3 + 4) == '\0')) {
                *(float *)(param_2 + 0x11c) = (float)param_3[8] + *(float *)(param_2 + 0x11c);
                FUN_14085d440(param_2);
                if ((*(char *)(param_3 + 4) != '\0') && (lVar1 = *(longlong *)(param_2 + 0x1f0), lVar1 != 0))
                {
                    *(float *)(lVar1 + 0xc) = (float)param_3[8] + *(float *)(lVar1 + 0xc);
                    return;
                }
            }
            break;
        case 2:
        switchD_14085f566_caseD_2:
            *(float *)(param_2 + 0xd0) = (float)param_3[8] + *(float *)(param_2 + 0xd0);
            return;
        case 3:
            fVar2 = (float)param_3[8] + *(float *)(param_2 + 0x120);
            *(float *)(param_2 + 0x120) = fVar2;
            *(float *)(param_2 + 0xd4) = fVar2 + *(float *)(param_2 + 0x124);
            return;
        case 8:
            fVar2 = (*(float *)(param_2 + 0x18c) + (float)param_3[8]) - *(float *)(param_2 + 0x184);
            if ((fVar2 < 0.0) ||
                ((param_1 = 100.0, fVar3 = param_1, fVar2 < 100.0 && (fVar3 = fVar2, fVar2 < 0.0)))) {
                fVar3 = 0.0;
            }
            FUN_140860560(param_1,fVar3,param_2);
            *(undefined4 *)(param_2 + 0x18c) = param_3[8];
            return;
        case 0xf:
            *(float *)(param_2 + 0xf4) = (float)param_3[8] + *(float *)(param_2 + 0xf4);
            return;
        case 0x10:
            *(float *)(param_2 + 0xf8) = (float)param_3[8] + *(float *)(param_2 + 0xf8);
            return;
        case 0x11:
            *(float *)(param_2 + 0xfc) = (float)param_3[8] + *(float *)(param_2 + 0xfc);
            return;
        case 0x12:
            *(float *)(param_2 + 0x100) = (float)param_3[8] + *(float *)(param_2 + 0x100);
            return;
        case 0x13:
            *(float *)(param_2 + 0x114) = (float)param_3[8] + *(float *)(param_2 + 0x114);
            return;
        case 0x16:
            *(float *)(param_2 + 0xec) = (float)param_3[8] + *(float *)(param_2 + 0xec);
            return;
        case 0x17:
            *(float *)(param_2 + 0xf0) = (float)param_3[8] + *(float *)(param_2 + 0xf0);
            return;
        case 0x1d:
            lVar1 = *(longlong *)(param_2 + 0x1f0);
            if (lVar1 != 0) {
                *(float *)(lVar1 + 8) = (float)param_3[8] + *(float *)(lVar1 + 8);
                return;
            }
            break;
        case 0x1e:
            lVar1 = *(longlong *)(param_2 + 0x1f0);
            if (lVar1 != 0) {
                *(float *)(lVar1 + 0x10) = (float)param_3[8] + *(float *)(lVar1 + 0x10);
                return;
            }
            break;
        case 0x1f:
            if ((*(byte *)(param_2 + 0x17e) & 0x80) != 0) goto switchD_14085f566_caseD_2;
            break;
        case 0x23:
            *(float *)(param_2 + 0xe4) = (float)param_3[8] + *(float *)(param_2 + 0xe4);
            return;
        case 0x24:
            *(float *)(param_2 + 0xdc) = (float)param_3[8] + *(float *)(param_2 + 0xdc);
    }
    return;
}



void FUN_14085f860(longlong param_1)

{
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0x8f;
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 8;
    FUN_140843c20(param_1,1);
    return;
}



void FUN_14085f880(longlong param_1)

{
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0x9f;
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 0x18;
    FUN_140843c20(param_1,3);
    return;
}



void FUN_14085f8c0(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,int param_5)

{
    byte bVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    byte bVar6;
    undefined4 uVar7;
    undefined local_res18 [8];
    undefined local_res20 [8];

    switch(param_5) {
        case 10:
            bVar1 = *(byte *)(param_3 + 0x17b);
            bVar6 = (byte)(int)param_2 & 3;
            *(byte *)(param_3 + 0x17b) =
                    ((bVar1 & 3) != (int)param_2) << 4 | bVar1 & 0x10 | bVar1 & 0xec | bVar6;
            if (((bVar6 == 1) && (*(longlong *)(param_3 + 0x58) == 0)) &&
                (FUN_14084d5f0(*(undefined8 *)(param_3 + 0xa0),param_3 + 0x58,*(undefined8 *)(param_3 + 0xb0)
                        ,local_res20,local_res18,param_3 + 0x1c0), *(longlong *)(param_3 + 0x58) == 0)
                    ) {
                *(byte *)(param_3 + 0x17b) = *(byte *)(param_3 + 0x17b) & 0xfc;
                return;
            }
            break;
        case 0xb:
            *(float *)(param_3 + 0x1c8) = param_2;
            return;
        default:
            lVar3 = *(longlong *)(param_3 + 0x58);
            if (lVar3 != 0) {
                if (param_5 == 0x41) {
                    *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) & 0xf7;
                    *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) | (param_2 != 0.0) << 3;
                }
                else {
                    if (param_5 == 0x42) {
                        if (param_2 != 0.0) {
                            *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) & 0xdf;
                            *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) | 0x20;
                            return;
                        }
                        *(byte *)(lVar3 + 0x4c) = *(byte *)(lVar3 + 0x4c) & 0xdf;
                        *(undefined *)(lVar3 + 0x4c) = *(undefined *)(lVar3 + 0x4c);
                        return;
                    }
                    if (param_5 == 0x43) {
                        uVar5 = 0;
                        *(int *)(lVar3 + 0x28) = (int)param_2;
                        if (*(int *)(lVar3 + 0x48) != 0) {
                            do {
                                iVar2 = *(int *)(*(longlong *)(lVar3 + 0x40) + 8 + uVar5 * 0x18);
                                if (0 < iVar2) {
                                    *(undefined4 *)
                                            (*(longlong *)(*(longlong *)(lVar3 + 0x40) + uVar5 * 0x18) + -4 +
                                             (longlong)iVar2 * 0x10) = *(undefined4 *)(lVar3 + 0x28);
                                }
                                uVar4 = (int)uVar5 + 1;
                                uVar5 = (ulonglong)uVar4;
                            } while (uVar4 < *(uint *)(lVar3 + 0x48));
                        }
                        return;
                    }
                    if (param_5 == 0x44) {
                        *(int *)(lVar3 + 0x24) = (int)param_2;
                        return;
                    }
                }
            }
            break;
        case 0x14:
            *(float *)(param_3 + 0x1c0) = param_2;
            return;
        case 0x15:
            *(float *)(param_3 + 0x1c4) = param_2;
            return;
        case 0x25:
            lVar3 = *(longlong *)(param_3 + 0x58);
            if (lVar3 != 0) {
                uVar7 = FUN_14085fef0(param_3);
                *(undefined4 *)(lVar3 + 0x18) = uVar7;
                return;
            }
            break;
        case 0x26:
            lVar3 = *(longlong *)(param_3 + 0x58);
            if (lVar3 != 0) {
                uVar7 = FUN_14085fef0(param_3);
                *(undefined4 *)(lVar3 + 0x20) = uVar7;
                return;
            }
            break;
        case 0x40:
            *(bool *)(param_3 + 0x1cc) = 0.0 < param_2;
            return;
    }
    return;
}



void FUN_14085fb30(longlong *param_1,int param_2,int param_3)

{
    undefined8 uVar1;
    undefined4 in_XMM3_Da;

    if ((param_2 != 1) && (param_2 != 2)) {
        if (param_2 == 3) {
            *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) | 1;
            uVar1 = (**(code **)(*param_1 + 0x58))();
            (**(code **)(*param_1 + 0x20))(uVar1,in_XMM3_Da,param_1);
        }
        else if ((param_2 == 4) && (param_3 == 1)) {
            *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) & 0xfe;
            *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) | 8;
            return;
        }
    }
    return;
}



void FUN_14085fba0(longlong param_1)

{
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xdf;
    *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xbf;
    return;
}



void FUN_14085fbb0(longlong param_1)

{
    undefined4 *puVar1;
    byte bVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 uVar6;
    float fVar7;
    float local_res8;
    float fStackX12;

    puVar1 = (undefined4 *)(param_1 + 200);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfc;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xfe;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x104);
    lVar4 = 4;
    *(undefined8 *)(param_1 + 0xec) = 0;
    do {
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined2 *)(param_1 + 0x118) = 0;
    *(undefined *)(param_1 + 0x11a) = 0;
    FUN_14085fde0(param_1);
    FUN_140850b30(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0),param_1 + 0x1c0,
                  *(undefined8 *)(param_1 + 0x58));
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x60))();
    }
    bVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x1d0))();
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xfe;
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | bVar2 & 1;
    if ((*(byte *)(param_1 + 0x17e) & 0x80) != 0) {
        uVar6 = FUN_14086f790(*(undefined8 *)(param_1 + 0xa0));
        *puVar1 = uVar6;
        if ((*(byte *)(param_1 + 0x17e) & 0x40) == 0) {
            FUN_1408605d0(param_1);
        }
    }
    uVar5 = 0xffffffff;
    if ((*(byte *)(param_1 + 0x180) & 1) == 0) {
        uVar5 = 0xffffffef;
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0x42ca0000;
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x150))
            (*(longlong **)(param_1 + 0xa0),puVar1,uVar5,param_1 + 0x30,
             *(undefined8 *)(param_1 + 0xb0),~(*(byte *)(param_1 + 0x17c) >> 7) & 1,param_1 + 0x48,1
            );
    fVar7 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0xd4);
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x80;
    *(undefined4 *)(param_1 + 0x11c) = *puVar1;
    *(float *)(param_1 + 0x120) = fVar7;
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 0xd4) = fVar7 + *(float *)(param_1 + 0x124);
    FUN_14085d440(param_1);
    if (((*(byte *)(param_1 + 0x17e) & 0x80) != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
        *(float *)(param_1 + 0xd0) =
                *(float *)(*(longlong *)(param_1 + 0x1f0) + 0x14) + *(float *)(param_1 + 0xd0);
    }
    FUN_140852d50(*(undefined8 *)(param_1 + 0xa0),&local_res8,*(undefined8 *)(param_1 + 0xb0));
    if ((local_res8 != *(float *)(param_1 + 0x18c)) || (fStackX12 != *(float *)(param_1 + 400))) {
        *(ulonglong *)(param_1 + 0x18c) = CONCAT44(fStackX12,local_res8);
        FUN_140860560(param_1);
    }
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 0x20;
    return;
}



void FUN_14085fde0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;

    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 != *(undefined8 **)(param_1 + 0x38)) {
        do {
            if ((*(byte *)(puVar2 + 1) & 2) == 0) {
                lVar1 = *(longlong *)(param_1 + 0x38);
                if (1 < (uint)((lVar1 - *(longlong *)(param_1 + 0x30)) / 0x18)) {
                    *puVar2 = *(undefined8 *)(&DAT_ffffffffffffffe8 + lVar1);
                    puVar2[1] = *(undefined8 *)(lVar1 + -0x10);
                    puVar2[2] = *(undefined8 *)(lVar1 + -8);
                }
                *(longlong *)(param_1 + 0x38) =
                        (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x38));
            }
            else {
                puVar2 = puVar2 + 3;
            }
        } while (puVar2 != *(undefined8 **)(param_1 + 0x38));
    }
    return;
}



void FUN_14085fe50(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    lVar5 = lVar1;
    lVar4 = 0;
    do {
        lVar3 = lVar5;
        if (lVar3 == 0) {
            LAB_14085fe91:
            plVar2 = *(longlong **)(param_1 + 0x38);
            if ((((*(short *)(plVar2 + 9) == 0) && (*(short *)((longlong)plVar2 + 0x4a) == 0)) &&
                 (*(short *)((longlong)plVar2 + 0x4c) == 0)) &&
                (((*(short *)((longlong)plVar2 + 0x4e) == 0 && (plVar2[3] == 0)) && (plVar2[1] == *plVar2))
                )) {
                FUN_1408520b0(param_1);
                return;
            }
            return;
        }
        if (lVar3 == param_2) {
            if (lVar3 != 0) {
                if (lVar3 == lVar1) {
                    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18) = *(undefined8 *)(lVar3 + 0x20);
                }
                else {
                    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
                }
            }
            goto LAB_14085fe91;
        }
        lVar5 = *(longlong *)(lVar3 + 0x20);
        lVar4 = lVar3;
    } while( true );
}



void FUN_14085fed0(longlong param_1)

{
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) & 0x9f;
    *(byte *)(param_1 + 0x17a) = *(byte *)(param_1 + 0x17a) | 0x18;
    FUN_140843c20(param_1,2);
    return;
}



undefined8 FUN_14085fef0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong *plVar3;
    float fVar4;
    undefined4 uVar5;

    uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
    fVar4 = (float)param_2;
    lVar1 = *(longlong *)(param_3 + 0x58);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
        uVar2 = FUN_14083ede0();
        *(undefined8 *)(lVar1 + 0x50) = uVar2;
    }
    lVar1 = *(longlong *)(lVar1 + 0x50);
    if (((lVar1 != 0) && (*(byte *)(lVar1 + 0x80) != 0xff)) &&
        (plVar3 = (longlong *)(((ulonglong)*(byte *)(lVar1 + 0x80) + 3) * 0x10 + lVar1),
                plVar3 != (longlong *)0x0)) {
        fVar4 = fVar4 * *(float *)(*plVar3 + (ulonglong)(*(int *)(plVar3 + 1) - 1) * 0xc) * 0.01;
    }
    return CONCAT44(uVar5,fVar4);
}



void FUN_14085ff70(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   char param_5)

{
    *(undefined4 *)(param_3 + 0x174) = param_2;
    *(byte *)(param_3 + 0x17f) =
            (param_5 << 3 ^ *(byte *)(param_3 + 0x17f)) & 8 ^ *(byte *)(param_3 + 0x17f) | 6;
    FUN_140858700(6,param_3);
    return;
}



void FUN_14085ffb0(longlong param_1,int param_2,byte param_3)

{
    uint uVar1;

    uVar1 = DAT_140c110b4;
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xf3;
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | (param_3 & 1) << 3 | 2;
    *(uint *)(param_1 + 0x174) = (uVar1 / 1000) * param_2;
    FUN_140858700(6,param_1);
    return;
}



int FUN_140860000(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                  longlong *param_5)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    int iVar4;
    longlong *plVar5;
    undefined4 local_18;
    undefined4 uStack20;
    uint uStack16;
    undefined4 uStack12;

    local_18 = *(undefined4 *)param_5;
    uStack20 = *(undefined4 *)((longlong)param_5 + 4);
    uStack16 = *(uint *)(param_5 + 1);
    uStack12 = *(undefined4 *)((longlong)param_5 + 0xc);
    if (param_3 == 1.0) {
        plVar5 = *(longlong **)(param_4 + 0x30);
        plVar3 = *(longlong **)(param_4 + 0x38);
        if (plVar5 != plVar3) {
            do {
                if ((*plVar5 == *param_5) && (((*(uint *)(plVar5 + 1) ^ uStack16) & 1) == 0)) break;
                plVar5 = plVar5 + 3;
            } while (plVar5 != plVar3);
            if (plVar5 != plVar3) {
                if (plVar5 < plVar3 + -3) {
                    uVar2 = ((ulonglong)((longlong)(plVar3 + -3) + (-1 - (longlong)plVar5)) / 0x18 + 1) * 3 &
                            0x1fffffffffffffff;
                    plVar3 = plVar5 + 3;
                    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        *plVar5 = *plVar3;
                        plVar3 = plVar3 + 1;
                        plVar5 = plVar5 + 1;
                    }
                }
                *(longlong *)(param_4 + 0x38) =
                        (longlong)(&DAT_ffffffffffffffe8 + *(longlong *)(param_4 + 0x38));
            }
        }
        iVar4 = 1;
    }
    else {
        lVar1 = FUN_14084f8a0(param_4 + 0x30,&local_18);
        iVar4 = 2 - (uint)(lVar1 != 0);
    }
    FUN_14085d440(param_4);
    return iVar4;
}



undefined8 FUN_1408600d0(longlong param_1,short param_2,undefined4 *param_3)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 != 0) {
        if (param_2 == 0xd) {
            *(undefined4 *)(lVar1 + 0x10) = *param_3;
        }
        else if (param_2 == 0xe) {
            *(undefined4 *)(lVar1 + 0x14) = *param_3;
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_140860120(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    undefined4 *puVar2;

    puVar2 = *(undefined4 **)(param_2 + 0x88);
    if (puVar2 == *(undefined4 **)(param_2 + 0x90)) {
        uVar1 = 1;
    }
    else {
        while (uVar1 = FUN_1408382f0(DAT_140c61bb0,param_1,*puVar2,puVar2[1],puVar2[2],puVar2[7],
                                     *(undefined8 *)(puVar2 + 4),puVar2[6],
                                     *(undefined8 *)(param_1 + 0xb0),4), (int)uVar1 == 1) {
            puVar2 = puVar2 + 8;
            if (puVar2 == *(undefined4 **)(param_2 + 0x90)) {
                return uVar1;
            }
        }
    }
    return uVar1;
}



void FUN_140860420(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   int param_5,undefined8 param_6,char param_7)

{
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if ((param_5 - 0x1000000U & 0xfeffffff) == 0) {
        if ((param_7 != '\0') && (*(undefined8 *)(param_4 + 0x70) = 0, param_5 == 0x2000000)) {
            (***(code ***)(param_4 + -0x10))
                    (param_4 + -0x10,0,1,0,
                     CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
        }
        *(undefined4 *)(param_4 + 0x118) = param_3;
    }
    else if ((param_5 + 0xfc000000U & 0xfbffffff) == 0) {
        if ((param_7 != '\0') && (*(undefined8 *)(param_4 + 0x78) = 0, param_5 == 0x4000000)) {
            (**(code **)(*(longlong *)(param_4 + -0x10) + 0x28))(param_4 + -0x10,1);
        }
        *(undefined4 *)(param_4 + 0x11c) = param_3;
    }
    FUN_14085d440(param_4 + -0x10);
    return;
}



void FUN_1408604c0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_2 + 0x88);
    if (lVar1 != *(longlong *)(param_2 + 0x90)) {
        do {
            FUN_140838e30(DAT_140c61bb0,param_1,*(undefined4 *)(lVar1 + 4));
            lVar1 = lVar1 + 0x20;
        } while (lVar1 != *(longlong *)(param_2 + 0x90));
    }
    return;
}



void FUN_140860520(longlong param_1,undefined4 param_2)

{
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x48))();
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x58))(*(longlong **)(param_1 + 0xb8),param_2);
    }
    return;
}



void FUN_140860560(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar1 [16];

    auVar1 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (param_2 != *(float *)(param_3 + 0x184)) {
        if (*(longlong *)(param_3 + 0x208) != 0) {
            param_1 = FUN_140855480(*(longlong *)(param_3 + 0x208),param_4,param_3,param_6,auVar1);
        }
        if (*(longlong *)(param_3 + 0x210) != 0) {
            param_1 = FUN_140855480(param_1,param_2,*(longlong *)(param_3 + 0x210),param_4,param_3,param_6
                    ,auVar1);
        }
        FUN_140855480(param_1,param_2,&DAT_140c10f30,param_4,param_3,param_6,auVar1);
        *(float *)(param_3 + 0x184) = param_2;
    }
    return;
}



void FUN_1408605d0(longlong param_1)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    undefined8 uVar4;

    lVar1 = DAT_140c61fe0;
    if (DAT_140c61fe0 != 0) {
        cVar2 = FUN_1408462d0(DAT_140c61fe0);
        if (cVar2 != '\0') {
            if (*(longlong *)(param_1 + 0x1f0) == 0) {
                lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x210))();
                if ((lVar3 != 0) || ((*(byte *)(param_1 + 0x17e) & 0x80) != 0)) {
                    uVar4 = FUN_140870690(*(undefined *)(lVar1 + 0x89),*(uint *)(param_1 + 0xc4) & 0x3ffff,
                                          *(byte *)(param_1 + 0x17b) & 3,*(byte *)(param_1 + 0x17b) >> 2 & 3);
                    *(undefined8 *)(param_1 + 0x1f0) = uVar4;
                }
            }
            if (*(longlong *)(param_1 + 0x1f0) != 0) {
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x200))
                        (*(longlong **)(param_1 + 0xa0),*(longlong *)(param_1 + 0x1f0),
                         *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),1);
            }
            *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | 0x40;
        }
    }
    return;
}



void FUN_1408606a0(longlong param_1)

{
    char cVar1;
    undefined8 uVar2;
    byte bVar3;
    float fVar4;
    float fVar5;

    if ((*(byte *)(param_1 + 0x17b) & 3) == 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 0x42ca0000;
        return;
    }
    if ((*(byte *)(param_1 + 0x17b) & 0xc) == 4) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x4c) & 8) != 0) ||
            ((*(byte *)(param_1 + 0x17c) & 0x40) == 0)) {
            fVar5 = *(float *)(*(longlong *)(param_1 + 0xb0) + 100);
            fVar4 = (float)FUN_140843db0(*(longlong *)(param_1 + 0xb0) + 8);
            FUN_14085d4b0(fVar4 / fVar5,fVar4 / fVar5,param_1);
            return;
        }
    }
    else if (*(longlong *)(param_1 + 0x1f8) != 0) {
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x58) + 0x4c) >> 5 & 1;
        FUN_140867b00(*(longlong *)(param_1 + 0x1f8),bVar3);
        if ((bVar3 != 0) && ((*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x28) >> 1 & 1) != 0)) {
            cVar1 = FUN_1408677e0();
            if (cVar1 != '\0') {
                uVar2 = FUN_14084eb00(*(undefined8 *)(param_1 + 0xa0));
                FUN_14083a800(DAT_140c61b98,*(undefined8 *)(param_1 + 0x1f8),uVar2);
                return;
            }
        }
    }
    return;
}



void FUN_1408607a0(longlong param_1)

{
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined2 local_14;

    if ((*(byte *)(param_1 + 0x17f) & 0x40) == 0) {
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 0x40;
        DAT_140c61f80 = DAT_140c61f80 + 1;
        local_30 = *(undefined8 *)(param_1 + 0xb0);
        local_38[0] = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 3;
        local_14 = 0x100;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x120))(*(longlong **)(param_1 + 0xa0),local_38);
    }
    return;
}



void FUN_140860810(longlong param_1)

{
    undefined2 uVar1;
    undefined8 uVar2;

    uVar1 = FUN_14086fd20(*(undefined8 *)(param_1 + 0xa0));
    *(undefined2 *)(param_1 + 0x178) = uVar1;
    if ((-1 < (char)*(byte *)(param_1 + 0x17d)) &&
        (*(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 0x80,
                *(longlong *)(param_1 + 0x1f8) != 0)) {
        uVar2 = FUN_14084eb00(*(undefined8 *)(param_1 + 0xa0));
        FUN_14083a800(DAT_140c61b98,*(undefined8 *)(param_1 + 0x1f8),uVar2);
        return;
    }
    return;
}



void FUN_140860880(undefined8 param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4,
                   undefined8 param_5,undefined8 param_6)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined2 local_18;

    *(int *)((longlong)param_3 + 0x194) = *(int *)((longlong)param_3 + 0x194) + 1;
    if (*(int *)param_4 != 0) {
        uVar2 = *param_4;
        local_20 = (undefined4)uVar2;
        local_1c = (undefined4)(uVar2 >> 0x20);
        if (param_3[0x11] == 0) {
            local_28 = *(undefined4 *)((longlong)param_3 + 300);
            local_30 = 0x4000000;
            plVar1 = param_3 + 2;
            local_24 = 0;
            local_18 = 0x100;
            local_38 = plVar1;
            lVar3 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
            *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) | 2;
            param_3[0x11] = lVar3;
            uVar4 = (**(code **)(*param_3 + 0x80))(param_3,0xe,uVar2 & 0xffffffff);
            if (lVar3 == 0) {
                (**(code **)*plVar1)(uVar4,param_2,local_24,plVar1,local_30);
            }
            return;
        }
        FUN_14083ab80(DAT_140c61b70,param_3[0x11],0x4000000,param_6,local_20,local_1c,0);
        return;
    }
    if ((*(byte *)((longlong)param_3 + 0x17a) & 0x78) == 0) {
        // WARNING: Could not recover jumptable at 0x0001408609b8. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_3 + 0x28))(param_3,0);
        return;
    }
    if (param_3[0x11] != 0) {
        FUN_14083ab80(DAT_140c61b70,param_3[0x11],0x4000000,param_6,0,4,0);
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001408609ff. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_3 + 0x28))(param_3,1);
    return;
}



void FUN_140860a10(longlong param_1,char param_2)

{
    byte bVar1;

    bVar1 = *(byte *)(param_1 + 0x17d);
    if (((bVar1 & 0x10) == 0) && ((bVar1 & 0x40) == 0)) {
        *(byte *)(param_1 + 0x17d) = bVar1 | 0x40;
        if ((*(byte *)(param_1 + 0x17e) & 0x80) == 0) {
            *(undefined4 *)(param_1 + 300) = 0;
            *(undefined4 *)(param_1 + 0xcc) = 0;
        }
        if (param_2 == '\0') {
            FUN_140858700(3,param_1);
        }
        if (*(longlong *)(param_1 + 0x80) != 0) {
            FUN_14083aed0(DAT_140c61b70);
        }
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
            FUN_14083a5a0(DAT_140c61b98);
            return;
        }
    }
    return;
}



void FUN_140860c80(undefined8 param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4,
                   char param_5)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined2 local_18;

    if ((param_5 == '\0') && (1 < *(uint *)((longlong)param_3 + 0x194))) {
        *(uint *)((longlong)param_3 + 0x194) = *(uint *)((longlong)param_3 + 0x194) - 1;
        return;
    }
    *(undefined4 *)((longlong)param_3 + 0x194) = 0;
    (**(code **)(*param_3 + 0x30))();
    lVar3 = param_3[0x11];
    if (*(int *)param_4 == 0) {
        if (lVar3 == 0) {
            *(undefined4 *)((longlong)param_3 + 300) = 0x3f800000;
            FUN_14085d440(param_3);
        }
        else {
            FUN_14083ab80(DAT_140c61b70,lVar3,0x8000000);
        }
    }
    else {
        uVar2 = *param_4;
        local_20 = (undefined4)uVar2;
        local_1c = (undefined4)(uVar2 >> 0x20);
        if (lVar3 == 0) {
            local_28 = *(undefined4 *)((longlong)param_3 + 300);
            plVar1 = param_3 + 2;
            local_24 = 0x3f800000;
            local_30 = 0x8000000;
            local_18 = 0x100;
            local_38 = plVar1;
            lVar3 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
            *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) & 0xfd;
            param_3[0x11] = lVar3;
            uVar4 = (**(code **)(*param_3 + 0x80))(param_3,0xe,uVar2 & 0xffffffff);
            if (lVar3 == 0) {
                (**(code **)*plVar1)(uVar4,param_2,local_24,plVar1,local_30);
            }
        }
        else {
            FUN_14083ab80(DAT_140c61b70,lVar3,0x8000000);
        }
    }
    return;
}



void FUN_140860e30(longlong param_1)

{
    if (((*(byte *)(param_1 + 0x17d) & 0x10) == 0) && ((*(byte *)(param_1 + 0x17d) & 0x40) != 0)) {
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
            FUN_14083a770(DAT_140c61b98);
        }
        *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) & 0xbf;
        FUN_140858700(4,param_1);
        if (*(longlong *)(param_1 + 0x80) != 0) {
            FUN_14083b0c0(DAT_140c61b70);
            return;
        }
    }
    return;
}



void FUN_140860ea0(undefined8 param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4,
                   char param_5,undefined8 param_6)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined2 local_18;

    if (((*(byte *)((longlong)param_3 + 0x17d) & 0x40) != 0) ||
        ((param_3[0x11] != 0 && ((*(byte *)(param_3 + 0x12) & 2) != 0)))) {
        // WARNING: Could not recover jumptable at 0x00014086109f. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)*param_3)(param_3,0,0,0);
        return;
    }
    *(byte *)((longlong)param_3 + 0x17d) = *(byte *)((longlong)param_3 + 0x17d) | 0x20;
    if (*(int *)param_4 == 0) {
        if ((*(byte *)((longlong)param_3 + 0x17a) & 0x78) == 0) {
            // WARNING: Could not recover jumptable at 0x000140861020. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)*param_3)(param_3,0,0,1);
            return;
        }
        if (param_3[0x10] != 0) {
            FUN_14083ab80(DAT_140c61b70,param_3[0x10],0x2000000,param_6,0,4,0);
            return;
        }
        if (param_5 != '\0') {
            if ((*(byte *)((longlong)param_3 + 0x17e) & 0x80) == 0) {
                *(undefined4 *)(param_3 + 0x25) = 0;
                *(undefined4 *)((longlong)param_3 + 0xcc) = 0;
            }
            // WARNING: Could not recover jumptable at 0x00014086108c. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)*param_3)(param_3,0,1,0);
            return;
        }
    }
    else {
        uVar2 = *param_4;
        local_20 = (undefined4)uVar2;
        local_1c = (undefined4)(uVar2 >> 0x20);
        if (param_3[0x10] != 0) {
            FUN_14083ab80(DAT_140c61b70,param_3[0x10],0x2000000,param_6,local_20,local_1c,0);
            return;
        }
        local_28 = *(undefined4 *)(param_3 + 0x25);
        plVar1 = param_3 + 2;
        local_24 = 0;
        local_30 = 0x2000000;
        local_18 = 0x100;
        local_38 = plVar1;
        lVar3 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
        *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) | 1;
        *(byte *)((longlong)param_3 + 0x17f) = *(byte *)((longlong)param_3 + 0x17f) & 0x7f;
        param_3[0x10] = lVar3;
        uVar4 = (**(code **)(*param_3 + 0x80))(param_3,0xe,uVar2 & 0xffffffff);
        if (lVar3 == 0) {
            (**(code **)*plVar1)(uVar4,param_2,local_24,plVar1,local_30);
        }
    }
    return;
}



void FUN_1408610b0(longlong param_1,ulonglong param_2,char param_3)

{
    undefined4 *puVar1;

    if ((*(byte *)(param_1 + 0x17d) & 0x10) == 0) {
        *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 0x10;
        if (param_3 == '\0') {
            FUN_1408587e0();
        }
        if ((param_2 & 0xfffffffd) == 0) {
            if (*(longlong *)(param_1 + 0x80) != 0) {
                FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x80),param_1 + 0x10);
                *(undefined8 *)(param_1 + 0x80) = 0;
            }
            if (*(longlong *)(param_1 + 0x88) != 0) {
                FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x88),param_1 + 0x10);
                *(undefined8 *)(param_1 + 0x88) = 0;
            }
            if (*(longlong *)(param_1 + 0x1f8) != 0) {
                if ((*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x28) >> 1 & 1) != 0) {
                    puVar1 = (undefined4 *)FUN_14084eb00(*(undefined8 *)(param_1 + 0xa0));
                    *(undefined8 *)(puVar1 + 2) = 0;
                    *puVar1 = 0;
                }
                FUN_14083a6d0(DAT_140c61b98,*(undefined8 *)(param_1 + 0x1f8),param_1);
                *(undefined8 *)(param_1 + 0x1f8) = 0;
                *(undefined4 *)(param_1 + 0x200) = 0;
            }
            *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) & 0xfe;
            *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 4;
        }
    }
    return;
}



undefined8 * FUN_1408611a0(undefined8 *param_1,undefined8 param_2)

{
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfc;
    *param_1 = &PTR_FUN_1409a43d0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_2;
    return param_1;
}



longlong FUN_1408611d0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;

    lVar4 = 0;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10) >> 2 & 0x1f;
    lVar2 = 0;
    if (uVar3 == 2) {
        lVar4 = FUN_1408819f0(DAT_140c10f28,0x88);
        if (lVar4 == 0) goto LAB_1408612ef;
        lVar2 = FUN_140879420(lVar4,param_1);
    }
    else {
        if ((uVar3 == 0) ||
            (uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x20) >> 0x10, lVar2 = lVar4, uVar1 == 0))
            goto LAB_1408612ef;
        if (uVar1 == 1) {
            if (uVar3 == 1) {
                lVar4 = FUN_1408819f0(DAT_140c10f28,0x90);
                if (lVar4 == 0) goto LAB_1408612ef;
                lVar2 = FUN_140878d70(lVar4,param_1);
            }
            else {
                if ((uVar3 != 3) || (lVar4 = FUN_1408819f0(DAT_140c10f28,0x60), lVar4 == 0))
                    goto LAB_1408612ef;
                lVar2 = FUN_1408789b0(lVar4,param_1);
            }
        }
        else if (uVar1 == 2) {
            if (uVar3 == 1) {
                lVar4 = FUN_1408819f0(DAT_140c10f28,0x170);
                if (lVar4 == 0) goto LAB_1408612ef;
                lVar2 = FUN_140879b50(lVar4,param_1);
            }
            else {
                if ((uVar3 != 3) || (lVar4 = FUN_1408819f0(DAT_140c10f28,0x70), lVar4 == 0))
                    goto LAB_1408612ef;
                lVar2 = FUN_14087a210(lVar4,param_1);
            }
        }
        else {
            lVar2 = FUN_14082fb50();
        }
    }
    if (lVar2 != 0) {
        return lVar2;
    }
    LAB_1408612ef:
    FUN_14085e170(param_1,1);
    return lVar2;
}



undefined8 FUN_140861310(longlong *param_1)

{
    undefined8 uVar1;

    if ((*(byte *)(param_1 + 4) & 1) != 0) {
        return 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x40))();
    if ((int)uVar1 == 1) {
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | (byte)uVar1;
    }
    return uVar1;
}



void FUN_140861340(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    uVar1 = FUN_14085f860(*(undefined8 *)(param_3 + 0x18));
    FUN_1408455e0(uVar1,param_2,0,DAT_140c61b60,*(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x78))
            ;
    return;
}



void FUN_140861370(longlong param_1)

{
    FUN_14085fed0(*(undefined8 *)(param_1 + 0x18));
    FUN_1408455e0(DAT_140c61b60,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x78));
    return;
}



void FUN_1408613d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined4 uVar3;
    float fVar4;
    float fVar5;

    fVar5 = 0.0;
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
        fVar5 = (float)(**(code **)(*param_1 + 0x58))();
    }
    if ((*(byte *)((longlong)(longlong *)param_1[3] + 0x17c) & 0x20) == 0) {
        (**(code **)(*(longlong *)param_1[3] + 0x78))();
    }
    lVar2 = param_1[3];
    fVar4 = (float)FUN_1408fbfc0(0x40000000,*(float *)(lVar2 + 0xd0) * 0.0008333334);
    FUN_14085f880(fVar4,fVar5 / fVar4,lVar2);
    uVar1 = *(undefined4 *)(param_1[3] + 0x78);
    uVar3 = FUN_14085eab0();
    FUN_14083b840(DAT_140c61b80,uVar1);
    if ((*(uint *)(param_1[3] + 8) & 0x10000) != 0) {
        FUN_140845270(DAT_140c61b60,*(undefined4 *)(param_1[3] + 0x78),param_1,param_4,uVar3);
    }
    return;
}



void FUN_1408614a0(longlong param_1)

{
    byte *pbVar1;

    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x17a);
    *pbVar1 = *pbVar1 & 0x87;
    return;
}



void FUN_1408614b0(longlong *param_1,undefined4 param_2)

{
    if ((*(uint *)(param_1[3] + 8) & 0x10000) != 0) {
        FUN_140845530(DAT_140c61b60,*(undefined4 *)(param_1[3] + 0x78),param_1);
    }
    FUN_14085e170(param_1[3],param_2);
    // WARNING: Could not recover jumptable at 0x0001408614f9. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x48))(param_1);
    return;
}



undefined4 FUN_140861500(longlong *param_1,uint *param_2)

{
    longlong local_48 [2];
    undefined2 local_38;
    ushort local_36;
    undefined2 local_30;
    undefined8 local_28;
    undefined4 local_10;

    local_38 = *(undefined2 *)param_2;
    local_48[0] = 0;
    local_30 = 0;
    local_28 = 0;
    (**(code **)(*param_1 + 0x50))(param_1,local_48);
    if (local_48[0] == 0) {
        *param_2 = 0;
    }
    else {
        *param_2 = (uint)local_36;
        (**(code **)(*param_1 + 0x10))(param_1);
    }
    return local_10;
}



void FUN_140861570(longlong param_1,longlong *param_2)

{
    if (*param_2 != 0) {
        FUN_1408718e0(param_1 + 0x10);
        return;
    }
    return;
}



void FUN_1408615c0(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;

    FUN_140872260(param_1 + 0x10);
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    }
    return;
}



void FUN_140861600(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    ushort uVar2;
    short sVar3;
    longlong lVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    undefined4 uVar8;

    if (*(int *)(param_2 + 7) == 0x11) {
        *(undefined *)(param_1 + 0xd8) = 1;
    }
    if (*(short *)(param_1 + 0x6a) == 0) {
        if ((*(short *)((longlong)param_2 + 0x12) == 0) && (*(int *)(param_2 + 7) == 0x2d)) {
            *(undefined4 *)(param_2 + 7) = 0x2b;
            return;
        }
        *(longlong *)(param_1 + 0x58) = *param_2;
        *(longlong *)(param_1 + 0x60) = param_2[1];
        *(longlong *)(param_1 + 0x68) = param_2[2];
        *(longlong *)(param_1 + 0x70) = param_2[3];
        *(longlong *)(param_1 + 0x78) = param_2[4];
        *(longlong *)(param_1 + 0x80) = param_2[5];
        *(longlong *)(param_1 + 0x88) = param_2[6];
    }
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*plVar1 == 0) {
        iVar6 = FUN_140868400(plVar1,*(undefined2 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x60));
        if (iVar6 != 1) {
            *(undefined4 *)(param_2 + 7) = 2;
            return;
        }
        if (*(char *)(param_1 + 0xda) != '\0') {
            lVar4 = *(longlong *)(param_1 + 0xd0);
            if ((*(byte *)(lVar4 + 0x17e) & 0x80) == 0) {
                iVar6 = *(int *)(lVar4 + 0x198) + 0x400;
            }
            else {
                iVar6 = ((uint)(0x5dc00 / (ulonglong)DAT_140c110b4) & 0xffff) + *(int *)(lVar4 + 0x198);
            }
            if (0 < iVar6) {
                cVar5 = FUN_140872740(param_1 + 0x10);
                if (cVar5 == '\0') {
                    FUN_140861f30();
                }
                else {
                    FUN_140861fa0();
                }
                *(int *)(param_1 + 0x2c) = iVar6;
            }
            *(undefined *)(param_1 + 0xda) = 0;
        }
    }
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (((*(byte *)(lVar4 + 0x17f) & 2) == 0) && (iVar6 = *(int *)(lVar4 + 0x174), iVar6 != 0)) {
        uVar2 = *(ushort *)(param_1 + 0x6a);
        if ((int)(uint)uVar2 <= iVar6) {
            *(byte *)(lVar4 + 0x17f) = *(byte *)(lVar4 + 0x17f) & 0xf1;
            *(uint *)(lVar4 + 0x174) = iVar6 - (uint)uVar2;
            *(undefined2 *)(param_1 + 0x6a) = 0;
            *(undefined2 *)((longlong)param_2 + 0x12) = 0;
            FUN_140861a30(param_1,param_2);
            uVar8 = 0x2b;
            if (*(char *)(param_1 + 0xd8) != '\0') {
                uVar8 = 0x11;
            }
            *(undefined4 *)(param_2 + 7) = uVar8;
            return;
        }
        *(int *)(param_1 + 0x28) = iVar6;
        *(ushort *)(param_1 + 0x6a) = uVar2 - (short)iVar6;
        *(byte *)(lVar4 + 0x17f) = *(byte *)(lVar4 + 0x17f) & 0xf1;
        *(undefined4 *)(lVar4 + 0x174) = 0;
    }
    sVar3 = *(short *)(param_1 + 0x6a);
    iVar6 = *(int *)(param_1 + 0x28);
    iVar7 = FUN_1408724d0(param_1 + 0x10,param_1 + 0x58,plVar1);
    FUN_140872b20(param_1 + 0x58,plVar1,iVar6,sVar3 - *(short *)(param_1 + 0x6a));
    if ((*(int *)(param_1 + 0x80) != -1) && (*(char *)(param_1 + 0xd9) == '\0')) {
        *(undefined *)(param_1 + 0xd9) = 1;
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x84);
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x8c);
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x80) + iVar6;
    }
    uVar8 = FUN_140872580(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    if ((*(short *)(param_1 + 0x6a) == 0) &&
        (FUN_140861a30(param_1,param_2), *(char *)(param_1 + 0xd8) == '\x01')) {
        if (*(longlong *)(*(longlong *)(param_1 + 200) + 0x18) != 0) {
            iVar7 = FUN_140861b40(param_1);
            goto LAB_140861838;
        }
        iVar7 = 0x11;
    }
    else {
        LAB_140861838:
        if ((iVar7 != 0x2d) && (iVar7 != 0x11)) goto LAB_140861891;
    }
    cVar5 = FUN_140872740(param_1 + 0x10);
    if (cVar5 != '\0') {
        FUN_140872430(param_1 + 0x10,plVar1);
    }
    *param_2 = *plVar1;
    param_2[1] = *(longlong *)(param_1 + 0x98);
    param_2[2] = *(longlong *)(param_1 + 0xa0);
    param_2[3] = *(longlong *)(param_1 + 0xa8);
    param_2[4] = *(longlong *)(param_1 + 0xb0);
    param_2[5] = *(longlong *)(param_1 + 0xb8);
    param_2[6] = *(longlong *)(param_1 + 0xc0);
    LAB_140861891:
    *(int *)(param_2 + 7) = iVar7;
    return;
}



void FUN_140861920(undefined8 param_1,longlong param_2,longlong param_3)

{
    ushort uVar1;

    uVar1 = *(ushort *)(param_3 + 0x10);
    *(undefined *)(param_2 + 0xd9) = 0;
    *(uint *)(param_2 + 0x44) = (uint)uVar1;
    FUN_140872760(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0xd0),param_2 + 0x10);
    if (*(short *)(param_2 + 0x6a) != 0) {
        FUN_140861600(param_2,param_3);
        return;
    }
    if (*(char *)(param_2 + 0xd8) != '\0') {
        *(undefined4 *)(param_3 + 0x38) = 0x11;
    }
    return;
}



void FUN_140861990(longlong param_1,uint *param_2,undefined8 param_3,uint param_4)

{
    char cVar1;
    uint uVar2;

    *(undefined8 *)(param_1 + 0xd0) = param_3;
    *(undefined *)(param_1 + 0xd8) = 0;
    *(undefined *)(param_1 + 0xda) = 1;
    *(undefined8 *)(param_1 + 0x30) = 0x10000;
    *(undefined *)(param_1 + 0x57) = 1;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x40) = (int)(48000 / (ulonglong)param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(float *)(param_1 + 0x4c) = (float)(ulonglong)*param_2 / (float)(ulonglong)param_4;
    cVar1 = '\0';
    for (uVar2 = param_2[1] & 0x3ffff; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        cVar1 = cVar1 + '\x01';
    }
    *(char *)(param_1 + 0x55) = cVar1;
    *(byte *)(param_1 + 0x56) = *(byte *)((longlong)param_2 + 7) & 0x1f;
    uVar2 = param_2[1] >> 0x12 & 0x3f;
    if (uVar2 == 0x10) {
        if (cVar1 == '\x01') {
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined *)(param_1 + 0x54) = 0;
            return;
        }
        if (cVar1 == '\x02') {
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined *)(param_1 + 0x54) = 1;
            return;
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(char *)(param_1 + 0x54) = (1 < (byte)(cVar1 - 3U)) + '\x02';
        return;
    }
    if (uVar2 != 0x20) {
        *(undefined *)(param_1 + 0x54) = 0xff;
        *(undefined4 *)(param_1 + 0x48) = 0;
        return;
    }
    if (cVar1 == '\x01') {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined *)(param_1 + 0x54) = 4;
        return;
    }
    if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined *)(param_1 + 0x54) = 5;
        return;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(char *)(param_1 + 0x54) = (1 < (byte)(cVar1 - 3U)) + '\x06';
    return;
}



void FUN_1408619c0(longlong param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(param_1 + 0x90);
    if (*plVar1 != 0) {
        FUN_140868480(plVar1);
        *(undefined8 *)(param_1 + 0x9c) = 0x2b;
        *plVar1 = 0;
        *(undefined2 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xc4) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    return;
}



void FUN_140861a30(longlong param_1,undefined8 *param_2)

{
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    FUN_1408683d0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 100) = 0x2b;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = 1;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    return;
}



void FUN_140861ac0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    FUN_1408683d0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 100) = 0x2b;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = 1;
    FUN_1403c6080(param_1 + 0x10);
    *(undefined *)(param_1 + 0xd8) = 0;
    // WARNING: Could not recover jumptable at 0x000140861b37. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return;
}



undefined8
FUN_140861b40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
              undefined8 param_5)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined8 uVar6;
    longlong local_res8;

    lVar1 = *(longlong *)(*(longlong *)(param_3 + 200) + 0x18);
    plVar2 = *(longlong **)(lVar1 + 0x18);
    iVar4 = *(int *)(plVar2 + 0x33);
    if (iVar4 < 1) {
        iVar4 = FUN_140861310(lVar1);
        if (iVar4 != 0x3f) {
            if (iVar4 != 1) {
                return 2;
            }
            local_res8 = plVar2[0x18];
            if ((((uint)((ulonglong)local_res8 >> 0x20) ^
                  (uint)((ulonglong)*(undefined8 *)(*(longlong *)(param_3 + 0xd0) + 0xc0) >> 0x20)) &
                 0x3ffff) == 0) {
                uVar6 = FUN_140849210(*(undefined8 *)(param_3 + 200));
                *(longlong **)(param_3 + 0xd0) = plVar2;
                *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(longlong *)(param_3 + 200) + 0x10);
                if ((*(byte *)((longlong)plVar2 + 0x17c) & 0x20) == 0) {
                    uVar6 = (**(code **)(*plVar2 + 0x78))(plVar2);
                }
                FUN_140872910(uVar6,param_2,*(undefined4 *)(plVar2 + 0x1a),param_3 + 0x10,&local_res8,
                              param_5,param_3 + 0x90,*(undefined4 *)(*(longlong *)(param_3 + 200) + 0x1d8));
                *(undefined *)(param_3 + 0xd8) = 0;
                uVar6 = 0x2d;
                if ((uint)*(ushort *)(param_3 + 0xa2) != *(uint *)(param_3 + 0x44)) {
                    uVar6 = 0x2b;
                }
                return uVar6;
            }
        }
    }
    else {
        iVar5 = (uint)*(ushort *)(param_3 + 0xa0) - (uint)*(ushort *)(param_3 + 0xa2);
        if (-1 < iVar4) {
            iVar3 = iVar4;
            if (iVar5 < iVar4) {
                iVar3 = iVar5;
            }
            *(int *)(plVar2 + 0x33) = iVar4 - iVar3;
        }
    }
    return 0x11;
}



void FUN_140861c80(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_1408683d0(param_1 + 0x90);
        FUN_140868480(param_1 + 0x90);
    }
    FUN_1408683d0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    FUN_140001b70(param_1 + 0x10);
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140861ce0(undefined4 param_1,longlong param_2,uint *param_3)

{
    short *psVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    int iVar9;
    uint local_res8 [2];

    FUN_140872880(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0xd0) + 0xd0));
    uVar6 = 0;
    uVar5 = 0x2d;
    uVar8 = (ulonglong)
            ((float)(ulonglong)*(uint *)(param_2 + 0x34) * 1.525879e-05 * (float)(ulonglong)*param_3 +
             0.5);
    uVar7 = (uint)uVar8;
    do {
        if (uVar7 == 0) goto LAB_140861dff;
        if ((*(short *)(param_2 + 0x6a) == 0) && (*(char *)(param_2 + 0xd8) == '\0')) {
            local_res8[0] = *param_3;
            uVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))
                    (*(longlong **)(param_2 + 8),local_res8);
            if ((int)uVar4 != 0x2d) {
                if ((int)uVar4 != 0x11) {
                    return uVar4;
                }
                *(undefined *)(param_2 + 0xd8) = 1;
            }
            lVar2 = *(longlong *)(param_2 + 0xd0);
            if ((*(byte *)(lVar2 + 0x17f) & 2) == 0) {
                uVar7 = *(uint *)(lVar2 + 0x174);
            }
            else {
                uVar7 = 0;
            }
            iVar9 = 0;
            if (local_res8[0] < uVar7) {
                iVar9 = uVar7 - local_res8[0];
                uVar7 = local_res8[0];
            }
            local_res8[0]._0_2_ = (short)local_res8[0] - (short)uVar7;
            *(byte *)(lVar2 + 0x17f) = *(byte *)(lVar2 + 0x17f) & 0xf1;
            *(int *)(lVar2 + 0x174) = iVar9;
            *(short *)(param_2 + 0x6a) = (short)local_res8[0];
        }
        uVar7 = (uint)uVar8;
        uVar3 = (uint)*(ushort *)(param_2 + 0x6a);
        if (uVar7 < *(ushort *)(param_2 + 0x6a)) {
            uVar3 = uVar7;
        }
        uVar6 = uVar6 + uVar3;
        uVar7 = uVar7 - uVar3;
        uVar8 = (ulonglong)uVar7;
        psVar1 = (short *)(param_2 + 0x6a);
        *psVar1 = *psVar1 - (short)uVar3;
    } while ((*psVar1 != 0) || (*(char *)(param_2 + 0xd8) == '\0'));
    uVar5 = 0x11;
    LAB_140861dff:
    *param_3 = (uint)(longlong)
            ((float)(ulonglong)uVar6 /
             ((float)(ulonglong)*(uint *)(param_2 + 0x34) * 1.525879e-05) + 0.5);
    return (ulonglong)uVar5;
}



void FUN_140861e80(longlong param_1,int param_2)

{
    if (param_2 != 2) {
        if (*(longlong *)(param_1 + 0x58) != 0) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
        }
        FUN_1408683d0(param_1 + 0x58);
        *(undefined8 *)(param_1 + 100) = 0x2b;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x8c) = 1;
        FUN_1403c6080(param_1 + 0x10);
    }
    if (param_2 == 0) {
        *(undefined *)(param_1 + 0xd8) = 0;
    }
    if (*(char *)(param_1 + 0xd8) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    }
    return;
}



void FUN_140861f30(longlong *param_1,uint param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint uVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    uint uVar6;

    if (param_2 != 0) {
        uVar5 = 0;
        uVar6 = 0;
        uVar2 = uVar5;
        for (uVar3 = *(uint *)(param_1 + 1); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar6 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar6;
        }
        if (uVar6 != 0) {
            uVar2 = (ulonglong)uVar6;
            do {
                puVar4 = (undefined4 *)(*param_1 + *(ushort *)(param_1 + 2) * uVar5 * 4);
                uVar1 = (ulonglong)param_2;
                if (param_2 != 0) {
                    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                        *puVar4 = 0;
                        puVar4 = puVar4 + 1;
                    }
                }
                uVar5 = uVar5 + 1;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
    }
    return;
}



void FUN_140861fa0(undefined8 *param_1,int param_2)

{
    uint uVar1;
    int iVar2;

    if (param_2 == 0) {
        return;
    }
    iVar2 = 0;
    for (uVar1 = *(uint *)(param_1 + 1); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
        iVar2 = iVar2 + 1;
    }
    FUN_1407e4830(*param_1,0,(ulonglong)(uint)(iVar2 * param_2) << 2);
    return;
}



undefined8 *
FUN_140861fe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
    *(undefined4 *)(param_1 + 1) = param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = param_2;
    *param_1 = &PTR_FUN_1409a4650;
    param_1[6] = *param_4;
    return param_1;
}



undefined8 * FUN_140862010(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
    *(undefined4 *)(param_1 + 1) = param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = param_2;
    *param_1 = &PTR_FUN_1409a45b0;
    return param_1;
}



undefined8 * FUN_140862040(undefined8 *param_1,undefined8 param_2)

{
    param_1[1] = param_2;
    *param_1 = &PTR_FUN_1409a46f0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    return param_1;
}



void FUN_140862060(longlong *param_1)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *param_1;
    if (lVar1 != param_1[1]) {
        plVar2 = (longlong *)(lVar1 + 0x18);
        do {
            if (((plVar2[-2] != 0) && (*(int *)((longlong)plVar2 + -4) != -1)) &&
                (FUN_1408420f0(DAT_140c61b58), *plVar2 != 0)) {
                FUN_140841fe0();
            }
            lVar1 = lVar1 + 0x20;
            plVar2 = plVar2 + 4;
        } while (lVar1 != param_1[1]);
    }
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



undefined8 * FUN_1408620f0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a4510;
    FUN_140862060();
    *param_1 = &PTR_FUN_1409a4480;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140862140(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a46f0;
    FUN_140862060();
    *param_1 = &PTR_FUN_1409a4480;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140862190(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a4480;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



longlong * FUN_1408621c0(int **param_1,int param_2,int param_3)

{
    int *piVar1;
    int *piVar2;
    longlong *plVar3;
    longlong local_res20;
    longlong local_18;
    int local_10;

    plVar3 = (longlong *)0x0;
    local_res20 = 0;
    FUN_14083ed20(DAT_140c61b58,&local_18,param_3,&local_res20);
    if (local_18 == 0) {
        return (longlong *)0x0;
    }
    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 8;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && (plVar3 = (longlong *)(piVar2 + 2), plVar3 != (longlong *)0x0))
            goto LAB_140862243;
    }
    piVar2 = (int *)FUN_1408622a0(param_1);
    if (piVar2 != (int *)0x0) {
        *piVar2 = param_2;
        plVar3 = (longlong *)(piVar2 + 2);
    }
    if (plVar3 == (longlong *)0x0) {
        FUN_1408420f0(DAT_140c61b58,param_3);
        if (local_res20 == 0) {
            return (longlong *)0x0;
        }
        FUN_140841fe0(local_res20,0);
        return (longlong *)0x0;
    }
    LAB_140862243:
    *plVar3 = local_18;
    *(int *)((longlong)plVar3 + 0xc) = param_3;
    *(int *)(plVar3 + 1) = local_10;
    plVar3[2] = local_res20;
    return plVar3;
}



longlong FUN_1408622a0(longlong *param_1)

{
    longlong lVar1;
    char cVar2;
    ulonglong uVar3;

    uVar3 = param_1[1] - *param_1 >> 5 & 0xffffffff;
    if ((*(uint *)(param_1 + 2) <= uVar3) && (cVar2 = FUN_1408627d0(param_1,2), cVar2 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar3) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x20;
    return lVar1;
}



void FUN_1408624e0(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
    int *piVar1;
    int *piVar2;
    undefined8 *puVar3;
    int local_res8 [2];

    piVar2 = *(int **)(param_1 + 0x10);
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar2 == piVar1) {
        LAB_140862529:
        local_res8[0] = -1;
        FUN_14085cf00(param_1 + 0x30,*(undefined4 *)(param_1 + 8),param_2,local_res8);
        if (local_res8[0] != -1) {
            puVar3 = (undefined8 *)FUN_1408621c0(param_1 + 0x10,param_2);
            if (puVar3 != (undefined8 *)0x0) goto LAB_14086255f;
        }
        *param_3 = 0;
        *param_4 = 0;
    }
    else {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 8;
        } while (piVar2 != piVar1);
        if ((piVar2 == piVar1) || (puVar3 = (undefined8 *)(piVar2 + 2), puVar3 == (undefined8 *)0x0))
            goto LAB_140862529;
        LAB_14086255f:
        *param_4 = *(int *)(puVar3 + 1);
        *param_3 = *puVar3;
    }
    return;
}



void FUN_140862590(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
    int *piVar1;
    int *piVar2;
    undefined8 *puVar3;
    int local_res8 [2];

    piVar2 = *(int **)(param_1 + 0x10);
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar2 == piVar1) {
        LAB_1408625d8:
        local_res8[0] = -1;
        FUN_14085e910(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 8),param_2,local_res8);
        if (local_res8[0] != -1) {
            puVar3 = (undefined8 *)FUN_1408621c0(param_1 + 0x10,param_2);
            if (puVar3 != (undefined8 *)0x0) goto LAB_14086260e;
        }
        *param_3 = 0;
        *param_4 = 0;
    }
    else {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 8;
        } while (piVar2 != piVar1);
        if ((piVar2 == piVar1) || (puVar3 = (undefined8 *)(piVar2 + 2), puVar3 == (undefined8 *)0x0))
            goto LAB_1408625d8;
        LAB_14086260e:
        *param_4 = *(int *)(puVar3 + 1);
        *param_3 = *puVar3;
    }
    return;
}



void FUN_140862640(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
    int *piVar1;
    longlong *plVar2;
    int *piVar3;
    undefined8 *puVar4;
    int iVar5;

    for (piVar3 = *(int **)(param_1 + 0x10);
         (piVar3 != *(int **)(param_1 + 0x18) && (*piVar3 != param_2)); piVar3 = piVar3 + 8) {
    }
    if ((piVar3 == *(int **)(param_1 + 0x18)) ||
        (puVar4 = (undefined8 *)(piVar3 + 2), puVar4 == (undefined8 *)0x0)) {
        plVar2 = (longlong *)
                FUN_14083ede0(DAT_140c61ba8 + 0x3e30,
                              **(undefined4 **)(*(longlong *)(param_1 + 8) + 0xa8));
        if (plVar2 != (longlong *)0x0) {
            piVar3 = (int *)plVar2[6];
            piVar1 = (int *)plVar2[7];
            if (piVar3 == piVar1) {
                LAB_1408626de:
                iVar5 = 0;
            }
            else {
                do {
                    if (*piVar3 == param_2) break;
                    piVar3 = piVar3 + 2;
                } while (piVar3 != piVar1);
                if ((piVar3 == piVar1) || (piVar3 + 1 == (int *)0x0)) goto LAB_1408626de;
                iVar5 = piVar3[1];
            }
            (**(code **)(*plVar2 + 0x10))(plVar2);
            if ((iVar5 != -1) &&
                (puVar4 = (undefined8 *)FUN_1408621c0(param_1 + 0x10,param_2,iVar5),
                        puVar4 != (undefined8 *)0x0)) goto LAB_140862700;
        }
        *param_3 = 0;
        *param_4 = 0;
    }
    else {
        LAB_140862700:
        *param_4 = *(int *)(puVar4 + 1);
        *param_3 = *puVar4;
    }
    return;
}



undefined8 FUN_1408627d0(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20);
    if (lVar2 == 0) {
        return 0;
    }
    uVar3 = param_1[1] - *param_1 >> 5;
    uVar6 = uVar3 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar3 != 0) {
            lVar5 = 0;
            uVar3 = uVar6;
            do {
                puVar4 = (undefined8 *)(*param_1 + lVar5);
                *(undefined8 *)(lVar5 + lVar2) = *puVar4;
                *(undefined8 *)(lVar5 + 8 + lVar2) = puVar4[1];
                *(undefined8 *)(lVar5 + 0x10 + lVar2) = puVar4[2];
                *(undefined8 *)(lVar5 + 0x18 + lVar2) = puVar4[3];
                uVar3 = uVar3 - 1;
                lVar5 = lVar5 + 0x20;
            } while (uVar3 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = lVar2;
    param_1[1] = uVar6 * 0x20 + lVar2;
    return 1;
}



ulonglong FUN_1408628b0(longlong param_1,longlong param_2)

{
    ulonglong uVar1;

    uVar1 = *(ulonglong *)(param_1 + 0x10);
    while( true ) {
        if (uVar1 == *(ulonglong *)(param_1 + 0x18)) {
            return uVar1 & 0xffffffffffffff00;
        }
        if (*(longlong *)(uVar1 + 8) == param_2) break;
        uVar1 = uVar1 + 0x20;
    }
    return CONCAT71((int7)(uVar1 >> 8),1);
}



undefined8 FUN_1408628e0(longlong param_1,ulonglong param_2,longlong *param_3)

{
    char cVar1;
    int iVar2;
    longlong lVar3;
    ulonglong *puVar4;
    ulonglong local_res8;
    ulonglong local_28 [2];

    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x18)) {
        puVar4 = (ulonglong *)(lVar3 + 0x18);
        do {
            if (*puVar4 == param_2) {
                cVar1 = (**(code **)(*param_3 + 0x20))(param_3);
                if (cVar1 == '\0') {
                    return 1;
                }
                local_res8 = 0;
                FUN_14083ed20(DAT_140c61b58,local_28,*(undefined4 *)((longlong)puVar4 + -4),&local_res8);
                if (local_28[0] == 0) {
                    return 1;
                }
                iVar2 = (**(code **)(*param_3 + 0x28))(param_3);
                if (iVar2 != 1) {
                    if (local_28[0] == 0) {
                        return 1;
                    }
                    FUN_1408420f0(DAT_140c61b58,*(undefined4 *)((longlong)puVar4 + -4));
                    if (local_res8 == 0) {
                        return 1;
                    }
                    FUN_140841fe0(local_res8,0);
                    return 1;
                }
                if ((puVar4[-2] != 0) && (*(int *)((longlong)puVar4 + -4) != -1)) {
                    FUN_1408420f0(DAT_140c61b58);
                    if (*puVar4 != 0) {
                        FUN_140841fe0(*puVar4,0);
                    }
                }
                puVar4[-2] = local_28[0];
                *puVar4 = local_res8;
            }
            lVar3 = lVar3 + 0x20;
            puVar4 = puVar4 + 4;
        } while (lVar3 != *(longlong *)(param_1 + 0x18));
    }
    return 0;
}



longlong FUN_140862a10(longlong param_1)

{
    FUN_140862af0();
    *(undefined8 *)(param_1 + 0x340) = 0;
    FUN_14087acc0(param_1 + 0x348);
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(byte *)(param_1 + 0x398) = *(byte *)(param_1 + 0x398) & 0xfc;
    *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(byte *)(param_1 + 0x3c0) = *(byte *)(param_1 + 0x3c0) & 0xfc;
    *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    *(byte *)(param_1 + 1000) = *(byte *)(param_1 + 1000) & 0xfc;
    *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
    *(byte *)(param_1 + 0x410) = *(byte *)(param_1 + 0x410) & 0xfc;
    *(byte *)(param_1 + 0x418) = *(byte *)(param_1 + 0x418) & 0xfc;
    return param_1;
}



longlong FUN_140862af0(longlong param_1)

{
    undefined (*pauVar1) [16];
    longlong lVar2;

    *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) & 0xfe;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined *)(param_1 + 0x328) = 0;
    *(undefined4 *)(param_1 + 0x31c) = 0x3f000000;
    *(undefined4 *)(param_1 + 800) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x324) = 0x42c80000;
    *(undefined *)(param_1 + 0x338) = 0;
    pauVar1 = (undefined (*) [16])(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x334) = 0x42c80000;
    *(undefined4 *)(param_1 + 0x32c) = 0x42ca0000;
    lVar2 = 6;
    do {
        *pauVar1 = ZEXT816(0);
        pauVar1[1] = ZEXT816(0);
        pauVar1[-2] = ZEXT816(0);
        pauVar1[-1] = ZEXT816(0);
        pauVar1 = pauVar1[4];
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return param_1;
}



void FUN_140862b80(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0x420);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x138))(plVar1,3);
        (**(code **)(**(longlong **)(param_1 + 0x420) + 0x10))();
    }
    FUN_140862e30(param_1);
    if (*(longlong *)(param_1 + 0x350) != 0) {
        FUN_140881720(DAT_140c10f28);
        *(undefined8 *)(param_1 + 0x350) = 0;
    }
    return;
}



void FUN_140862be0(longlong param_1)

{
    undefined4 uVar1;

    if (*(int *)(param_1 + 0x428) != 1) {
        uVar1 = FUN_14085cf60(param_1 + 0x420,0);
        FUN_140833a10(uVar1,uVar1,param_1);
        *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x30c);
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x314);
        return;
    }
    *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + 1;
    return;
}



void FUN_140862c40(longlong param_1,longlong param_2,undefined8 param_3)

{
    if (*(short *)(param_2 + 0x12) != 0) {
        if (*(char *)(param_1 + 0x430) == '\0') {
            FUN_1408634c0();
        }
        *(undefined4 *)(param_1 + 0x35c) = 0x2d;
        if (*(int *)(param_1 + 0x428) == 4) {
            *(undefined4 *)(param_1 + 0x428) = 1;
        }
        FUN_140863bc0(param_2);
        *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
        FUN_14087acf0(param_1 + 0x348,param_2,param_1 + 0x350,param_3);
    }
    return;
}



void FUN_140862cd0(longlong param_1,longlong param_2,undefined param_3,undefined8 param_4)

{
    if (*(short *)(param_2 + 0x12) != 0) {
        if (*(char *)(param_1 + 0x430) == '\0') {
            FUN_1408634c0();
        }
        *(undefined4 *)(param_1 + 0x35c) = 0x2d;
        if (*(int *)(param_1 + 0x428) == 4) {
            *(undefined4 *)(param_1 + 0x428) = 1;
        }
        FUN_140863bc0(param_2);
        *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
        FUN_140863260(param_1 + 0x348,param_2,param_1 + 0x350,param_3,param_4);
    }
    return;
}



void FUN_140862d70(longlong param_1)

{
    *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1;
    return;
}



void FUN_140862d80(longlong param_1,ulonglong param_2)

{
    undefined4 *puVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined4 uVar4;

    puVar1 = (undefined4 *)(param_1 + (param_2 & 0xffffffff) * 0x28 + 0x378);
    plVar2 = *(longlong **)(puVar1 + 4);
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,&PTR_PTR_FUN_140c10f70);
        *(undefined8 *)(puVar1 + 4) = 0;
    }
    uVar4 = DAT_140c10f28;
    puVar3 = *(undefined8 **)(puVar1 + 6);
    if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_140881720(uVar4,puVar3);
        *(undefined8 *)(puVar1 + 6) = 0;
    }
    *puVar1 = 0xffffffff;
    if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_140838cc0(DAT_140c61bb0);
        (**(code **)(**(longlong **)(puVar1 + 2) + 0x20))
                (*(longlong **)(puVar1 + 2),&PTR_PTR_FUN_140c10f70);
        *(undefined8 *)(puVar1 + 2) = 0;
    }
    return;
}



void FUN_140862e30(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong **pplVar3;
    longlong lVar4;

    pplVar3 = (longlong **)(param_1 + 0x388);
    lVar4 = 4;
    do {
        plVar1 = *pplVar3;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_FUN_140c10f70);
            *pplVar3 = (longlong *)0x0;
        }
        uVar2 = DAT_140c10f28;
        plVar1 = pplVar3[1];
        if (plVar1 != (longlong *)0x0) {
            (**(code **)*plVar1)(plVar1,0);
            FUN_140881720(uVar2,plVar1);
            pplVar3[1] = (longlong *)0x0;
        }
        *(undefined4 *)(pplVar3 + -2) = 0xffffffff;
        if (pplVar3[-1] != (longlong *)0x0) {
            FUN_140838cc0(DAT_140c61bb0);
            (**(code **)(*pplVar3[-1] + 0x20))();
            pplVar3[-1] = (longlong *)0x0;
        }
        pplVar3 = pplVar3 + 5;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}



void FUN_140862f00(longlong param_1,longlong *param_2)

{
    byte bVar1;

    FUN_140863360();
    if (*(int *)(param_1 + 0x428) == 1) {
        bVar1 = *(byte *)(param_1 + 0x418);
        *(byte *)(param_1 + 0x418) = (bVar1 * '\x02' ^ bVar1) & 2 ^ bVar1;
    }
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x310);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x314);
    *param_2 = param_1 + 0x350;
    FUN_140863990(param_1);
    return;
}



undefined4 FUN_140862f90(longlong param_1,uint param_2,ushort param_3,undefined8 param_4)

{
    byte bVar1;
    char cVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    int iVar7;

    *(undefined8 *)(param_1 + 0x420) = param_4;
    uVar3 = FUN_14085cf90(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x304) = uVar3;
    bVar1 = FUN_14083b280(DAT_140c61b88,uVar3);
    *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) & 0xfd;
    *(undefined *)(param_1 + 0x430) = 0;
    *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | (bVar1 & 1) * '\x02';
    FUN_140863130(param_1,param_4,param_2);
    FUN_14087acd0(param_1 + 0x348);
    if (*(longlong **)(param_1 + 0x420) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x420) + 8))();
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x130))();
        if (cVar2 == '\0') {
            return 2;
        }
    }
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x428) = 4;
    *(undefined4 *)(param_1 + 0x310) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x314) = 0;
    iVar7 = 0;
    uVar5 = param_2;
    if (param_2 != 0) {
        do {
            iVar7 = iVar6 + 1;
            uVar5 = uVar5 & uVar5 - 1;
            iVar6 = iVar7;
        } while (uVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(uint *)(param_1 + 0x370) = (uint)param_3 * iVar7 * 4;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x35c) = 0x2b;
    *(undefined4 *)(param_1 + 0x35c) = 0x11;
    lVar4 = FUN_140881960(DAT_140c10f28,*(undefined4 *)(param_1 + 0x370),0x10);
    if (lVar4 == 0) {
        uVar3 = 0x34;
    }
    else {
        FUN_1407e4830(lVar4,0,*(undefined4 *)(param_1 + 0x370));
        *(longlong *)(param_1 + 0x350) = lVar4;
        *(ushort *)(param_1 + 0x360) = param_3;
        *(undefined2 *)(param_1 + 0x362) = 0;
        *(uint *)(param_1 + 0x358) = param_2;
        uVar3 = 1;
        *(undefined8 *)(param_1 + 0x368) = 0;
    }
    return uVar3;
}



void FUN_140863130(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;

    *(undefined4 *)(param_1 + 0x300) = param_3;
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x5b) & 4) == 0)) {
        *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) & 0xfe;
        *(undefined4 *)(param_1 + 0x31c) = 0x3f000000;
        *(undefined4 *)(param_1 + 800) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x324) = 0x42c80000;
        *(undefined *)(param_1 + 0x328) = 0;
    }
    else {
        *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 1;
        FUN_1408524d0(param_2);
    }
    FUN_140863990();
    uVar9 = 0;
    for (uVar8 = *(uint *)(param_1 + 0x300); uVar10 = 0, uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
        uVar9 = uVar9 + 1;
    }
    do {
        uVar6 = (ulonglong)uVar10;
        uVar10 = uVar10 + 1;
        lVar7 = uVar6 * 0x40;
        puVar1 = (undefined4 *)(lVar7 + param_1);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(lVar7 + 0x20 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar1 = (undefined4 *)(lVar7 + 0x10 + param_1);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(lVar7 + 0x30 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
    } while (uVar10 < uVar9);
    return;
}



void FUN_1408631f0(longlong param_1)

{
    undefined4 uVar1;

    if (*(int *)(param_1 + 0x428) != 1) {
        uVar1 = FUN_14085cf60(param_1 + 0x420,0);
        FUN_140833a10(uVar1,uVar1,param_1);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x30c);
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x314);
    }
    return;
}

