//
// Created by flop on 04.04.22.
//
#include "../../include.h"

int FUN_140882f00(undefined8 param_1,undefined4 param_2,longlong param_3,uint param_4,
                  undefined8 *param_5,char param_6)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    char local_res18 [8];
    char *pcVar5;
    undefined8 local_28 [2];

    if (param_3 != 0) {
        *(undefined *)(param_3 + 0x1a) = 0;
    }
    lVar3 = FUN_1408819f0(DAT_140c111c0,0x28);
    if (lVar3 != 0) {
        pcVar5 = local_res18;
        local_res18[0] = param_6;
        iVar2 = (**(code **)(*DAT_140c62938 + 8))(DAT_140c62938,param_2,param_4,param_3,pcVar5,lVar3);
        if (iVar2 != 1) {
            FUN_140881720(DAT_140c111c0,lVar3);
            return iVar2;
        }
        if ((*(uint *)(lVar3 + 0x20) < (uint)(DAT_140c62948 - DAT_140c62940 >> 3)) &&
            (plVar1 = *(longlong **)(DAT_140c62940 + (ulonglong)*(uint *)(lVar3 + 0x20) * 8),
                    plVar1 != (longlong *)0x0)) {
            local_28[0] = 0;
            plVar4 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,lVar3,param_4,local_28);
            if (plVar4 != (longlong *)0x0) {
                if (local_res18[0] == '\0') {
                    iVar2 = FUN_140885760(plVar4,lVar3,param_2,param_3,
                                          (ulonglong)pcVar5 & 0xffffffff00000000 | (ulonglong)param_4);
                    if (iVar2 != 1) {
                        *(byte *)((longlong)plVar4 + 0x75) = *(byte *)((longlong)plVar4 + 0x75) & 0xbf | 8;
                        (**(code **)(*plVar4 + 0x10))(plVar4);
                        return 2;
                    }
                }
                else {
                    *(byte *)((longlong)plVar4 + 0x75) = *(byte *)((longlong)plVar4 + 0x75) | 0x10;
                    plVar4[5] = lVar3;
                }
                *param_5 = local_28[0];
                return 1;
            }
            if (local_res18[0] != '\0') {
                (**(code **)(*(longlong *)plVar1[0x20] + 8))((longlong *)plVar1[0x20],lVar3);
            }
        }
        FUN_140881720(DAT_140c111c0,lVar3);
        return 2;
    }
    return 2;
}



void FUN_140883230(longlong *param_1)

{
    if (((*(byte *)((longlong)param_1 + 0x2c) & 1) != 0) && (*param_1 != 0)) {
        FUN_140881720(DAT_140c111c0);
    }
    FUN_140881720(DAT_140c111c0,param_1);
    return;
}



void FUN_140883270(undefined8 *param_1)

{
    int iVar1;
    char cVar2;

    FUN_140883520();
    cVar2 = FUN_140881950();
    iVar1 = DAT_140c111c0;
    if (((cVar2 != '\0') && (DAT_140c111c0 != -1)) && (param_1 != (undefined8 *)0x0)) {
        (**(code **)*param_1)(param_1,0);
        FUN_140881720(iVar1,param_1);
    }
    FUN_140881dd0(DAT_140c111c0);
    DAT_140c111c0 = 0xffffffff;
    return;
}



undefined8 FUN_1408832e0(uint param_1)

{
    longlong *plVar1;

    if (param_1 < (uint)(DAT_140c62948 - DAT_140c62940 >> 3)) {
        plVar1 = *(longlong **)((ulonglong)param_1 * 8 + DAT_140c62940);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x28))();
            *(undefined8 *)((ulonglong)param_1 * 8 + DAT_140c62940) = 0;
            return 1;
        }
    }
    return 0x1f;
}



void FUN_140883340(longlong param_1,undefined param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;

    uVar3 = 0;
    lVar4 = DAT_140c62940;
    lVar5 = DAT_140c62948;
    if ((int)(DAT_140c62948 - DAT_140c62940 >> 3) != 0) {
        do {
            lVar1 = *(longlong *)(lVar4 + uVar3 * 8);
            if (lVar1 != 0) {
                FUN_1408844e0(lVar1,param_1 == lVar1,param_2);
                lVar4 = DAT_140c62940;
                lVar5 = DAT_140c62948;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)(lVar5 - lVar4 >> 3));
    }
    return;
}



void FUN_1408833c0(undefined8 *param_1)

{
    *(undefined4 *)(param_1 + 1) = 0x200000;
    *(undefined4 *)((longlong)param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 2) = 2;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x4000;
    *(undefined4 *)(param_1 + 3) = 1;
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x2000;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 5) = 0x43be0000;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
    *(undefined4 *)(param_1 + 6) = 0x3f800000;
    return;
}



undefined8 FUN_140883410(void)

{
    return DAT_140c62938;
}



undefined4 FUN_140883420(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar4;

    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
    *(undefined4 *)(param_1 + 5) = param_4;
    if (param_3 == (longlong *)0x0) {
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffd;
    }
    else {
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 2;
        param_1[1] = *param_3;
        param_1[2] = param_3[1];
        param_1[3] = param_3[2];
        param_1[4] = param_3[3];
    }
    lVar2 = -1;
    do {
        lVar6 = lVar2;
        lVar2 = lVar6 + 1;
    } while (*(short *)(param_2 + (lVar6 + 1) * 2) != 0);
    lVar2 = FUN_1408819f0(DAT_140c111c0,(lVar6 + 2) * 2);
    *param_1 = lVar2;
    if (lVar2 == 0) {
        uVar1 = 2;
    }
    else {
        uVar5 = lVar6 + 1;
        lVar3 = -1;
        do {
            lVar4 = lVar3;
            lVar3 = lVar4 + 1;
        } while (*(short *)(param_2 + lVar3 * 2) != 0);
        if (lVar4 + 2U <= uVar5) {
            lVar3 = -1;
            do {
                lVar4 = lVar3;
                lVar3 = lVar4 + 1;
            } while (*(short *)(param_2 + lVar3 * 2) != 0);
            uVar5 = lVar4 + 2;
        }
        FUN_1407e6d08(lVar2,lVar6 + 2,param_2,uVar5);
        *(undefined2 *)(lVar2 + uVar5 * 2) = 0;
        uVar1 = 1;
    }
    return uVar1;
}



void FUN_140883510(undefined8 param_1)

{
    DAT_140c62938 = param_1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140883520(void)

{
    longlong **pplVar1;
    longlong **pplVar2;

    DAT_140c62938 = 0;
    pplVar1 = DAT_140c62948;
    pplVar2 = DAT_140c62940;
    if (DAT_140c62940 != DAT_140c62948) {
        do {
            if (*pplVar2 != (longlong *)0x0) {
                (**(code **)(**pplVar2 + 0x28))();
                pplVar1 = DAT_140c62948;
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != pplVar1);
    }
    if (DAT_140c62940 != (longlong **)0x0) {
        DAT_140c62948 = DAT_140c62940;
        FUN_140881720(DAT_140c111c0,DAT_140c62940);
        DAT_140c62940 = (longlong **)0x0;
        DAT_140c62948 = (longlong **)0x0;
        DAT_140c62950 = 0;
    }
    if (DAT_140c62958 != 0) {
        _DAT_140c62960 = DAT_140c62958;
        FUN_140881720(DAT_140c111c0);
        DAT_140c62958 = 0;
        _DAT_140c62960 = 0;
        _DAT_140c62968 = 0;
    }
    return;
}



undefined8 * FUN_1408835e0(undefined8 *param_1)

{
    FUN_140888f00();
    *param_1 = &PTR_FUN_1409a7a38;
    param_1[4] = 0;
    param_1[5] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x83;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    *param_1 = &PTR_FUN_1409a7b20;
    param_1[0xf] = &PTR_LAB_1409a7b80;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(byte *)((longlong)param_1 + 0xc2) = *(byte *)((longlong)param_1 + 0xc2) & 0xfc;
    *(undefined *)(param_1 + 0x18) = 0;
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xfd | 1;
    return param_1;
}



undefined8 * FUN_140883680(undefined8 *param_1,undefined8 param_2)

{
    FUN_140888f20();
    *param_1 = &PTR_FUN_1409a79f0;
    param_1[0xf] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_1408895a0(param_1 + 0x15);
    param_1[0x20] = param_2;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    return param_1;
}



undefined8 * FUN_1408836f0(undefined8 *param_1)

{
    FUN_140888f00();
    *param_1 = &PTR_FUN_1409a7a38;
    param_1[4] = 0;
    param_1[5] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x83;
    param_1[0xd] = 0;
    *param_1 = &PTR_FUN_1409a7a70;
    param_1[0xf] = &PTR_LAB_1409a7ab0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff0;
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 0x10;
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xfc;
    *(undefined4 *)(param_1 + 0x15) = 0;
    return param_1;
}



void FUN_140883790(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a7b20;
    param_1[0xf] = &PTR_LAB_1409a7b80;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        FUN_140889050(param_1[0xc]);
    }
    param_1[0xf] = &PTR_FUN_1409a7960;
    FUN_140883870(param_1);
    return;
}



void FUN_1408837e0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a79f0;
    FUN_1408895e0();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_140888fa0(param_1);
    return;
}



void FUN_140883820(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a7a70;
    param_1[0xf] = &PTR_LAB_1409a7ab0;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        FUN_140889460(param_1[0xc]);
    }
    param_1[0xf] = &PTR_FUN_1409a78f0;
    FUN_140883870(param_1);
    return;
}



void FUN_140883870(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a7a38;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x10) != 0) {
        (**(code **)(**(longlong **)(param_1[0xc] + 0x100) + 8))
                (*(longlong **)(param_1[0xc] + 0x100),param_1[5]);
    }
    if (param_1[4] != 0) {
        FUN_140883230();
        param_1[4] = 0;
    }
    if (param_1[0xd] != 0) {
        FUN_140881720(DAT_140c111c0);
    }
    if (param_1[5] != 0) {
        FUN_140881720(DAT_140c111c0);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    *param_1 = &PTR_FUN_1409a8120;
    if ((HANDLE)param_1[1] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[1]);
        param_1[1] = 0;
    }
    return;
}



undefined8 * FUN_140883910(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7b20;
    param_1[0xf] = &PTR_LAB_1409a7b80;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        FUN_140889050(param_1[0xc]);
    }
    param_1[0xf] = &PTR_FUN_1409a7960;
    FUN_140883870(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140883980(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a79f0;
    FUN_1408895e0();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    FUN_140888fa0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408839e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7a70;
    param_1[0xf] = &PTR_LAB_1409a7ab0;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        FUN_140889460(param_1[0xc]);
    }
    param_1[0xf] = &PTR_FUN_1409a78f0;
    FUN_140883870(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_140883a50(undefined8 param_1,uint param_2)

{
    FUN_140883870();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140883a80(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a7960;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined8 * FUN_140883ab0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a78f0;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_140883ae0(longlong param_1,undefined8 *param_2,char param_3)

{
    longlong lVar1;

    if (((param_3 != '\0') && ((*(byte *)(param_1 + 0x75) & 8) == 0)) &&
        ((*(byte *)(param_1 + 0xc2) & 2) == 0)) {
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) & 0xfffffffb;
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 3;
        *param_2 = 0;
        if (*(undefined8 **)(param_1 + 0xb8) == (undefined8 *)0x0) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
            *(undefined8 **)(param_1 + 0xb0) = param_2;
            *(undefined8 **)(param_1 + 0xb8) = param_2;
            return;
        }
        **(undefined8 **)(param_1 + 0xb8) = param_2;
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        *(undefined8 **)(param_1 + 0xb8) = param_2;
        return;
    }
    lVar1 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    FUN_140883fe0(param_1,param_2);
    FUN_1408893c0(*(undefined8 *)(param_1 + 0x60));
    // WARNING: Could not recover jumptable at 0x000140883b93. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    return;
}



void FUN_140883ba0(longlong param_1,longlong *param_2,char param_3)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;

    if (((param_3 != '\0') && (bVar1 = *(byte *)(param_1 + 0x75), (bVar1 & 8) == 0)) &&
        (uVar2 = *(uint *)(param_1 + 0xb0), ((byte)uVar2 & 0xf) != 4)) {
        *(byte *)(param_1 + 0x75) = bVar1 & 0xfb;
        *(uint *)(param_1 + 0xb0) = uVar2 | 0x10;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x108);
        uVar7 = *(int *)(param_2[1] + 0x18) - *(int *)(param_2 + 2);
        if (uVar3 < uVar7) {
            *(uint *)(param_1 + 0xb0) = uVar2 & 0xffffffef;
            uVar7 = uVar3;
        }
        if (((bVar1 & 2) == 0) &&
            ((**(longlong **)(param_1 + 0x28) - (ulonglong)*(uint *)(param_2 + 2)) -
             *(longlong *)param_2[1] <= (ulonglong)uVar7)) {
            *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 0x10;
            *(byte *)(param_1 + 0x75) = bVar1 & 0xfb | 4;
            *(int *)(param_1 + 0x98) =
                    *(int *)(param_1 + 0x98) +
                    ((*(int *)*(longlong **)(param_1 + 0x28) - ((int *)param_2[1])[6]) - *(int *)param_2[1]);
        }
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    lVar5 = param_2[1];
    lVar6 = *(longlong *)(param_1 + 0x60);
    param_2[1] = 0;
    if (lVar5 != 0) {
        FUN_140889690(lVar6 + 0xa8,param_1 + 0x80);
    }
    if (*(longlong *)(lVar6 + 0x118) == 0) {
        *(longlong **)(lVar6 + 0x118) = param_2;
        *param_2 = 0;
    }
    else {
        *param_2 = *(longlong *)(lVar6 + 0x118);
        *(longlong **)(lVar6 + 0x118) = param_2;
    }
    // WARNING: Could not recover jumptable at 0x000140883cc5. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    return;
}



void FUN_140883cd0(longlong param_1,longlong param_2)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    if (*(longlong *)(param_1 + 0x78) == 0) {
        *(longlong *)(param_1 + 0x78) = param_2;
        *(undefined8 *)(param_2 + 0x18) = 0;
    }
    else {
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_1 + 0x78);
        *(longlong *)(param_1 + 0x78) = param_2;
    }
    // WARNING: Could not recover jumptable at 0x000140883d20. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    return;
}



undefined8 FUN_140883d30(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined4 uVar4;
    char cVar5;

    plVar1 = *(longlong **)(param_1 + 0x78);
    plVar3 = (longlong *)0x0;
    joined_r0x000140883d4b:
    do {
        plVar2 = plVar1;
        if (plVar2 == (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x78) == 0) {
                *(undefined8 *)(param_1 + 0x78) = 0;
                return 1;
            }
            return 0;
        }
        if ((*(byte *)((longlong)plVar2 + 0x75) & 8) == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        else {
            cVar5 = (**(code **)(*plVar2 + 8))();
            if (cVar5 != '\0') {
                plVar1 = (longlong *)plVar2[3];
                if (plVar2 == *(longlong **)(param_1 + 0x78)) {
                    *(longlong **)(param_1 + 0x78) = plVar1;
                }
                else {
                    plVar3[3] = (longlong)plVar1;
                }
                uVar4 = DAT_140c111c0;
                (**(code **)*plVar2)(plVar2,0);
                FUN_140881720(uVar4);
                goto joined_r0x000140883d4b;
            }
        }
        plVar1 = (longlong *)plVar2[3];
        plVar3 = plVar2;
    } while( true );
}



void FUN_140883e00(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int iVar5;
    char cVar6;
    int iVar7;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    *(byte *)(param_1 + -3) = *(byte *)(param_1 + -3) & 0xbf | 8;
    cVar6 = *(char *)(param_1 + 0x48);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if (cVar6 != '\0') {
        iVar7 = *(int *)(param_1 + 0x24);
        do {
            plVar2 = (longlong *)puVar4[1];
            uVar1 = *(uint *)(param_1 + 0x1c);
            lVar3 = *plVar2;
            if ((lVar3 + (ulonglong)*(uint *)(puVar4 + 2) < (ulonglong)uVar1) &&
                ((ulonglong)uVar1 < (ulonglong)*(uint *)(plVar2 + 3) + lVar3)) {
                iVar5 = uVar1 - (int)lVar3;
            }
            else {
                iVar5 = *(int *)(plVar2 + 3);
            }
            iVar7 = iVar7 + (iVar5 - *(uint *)(puVar4 + 2));
            cVar6 = cVar6 + -1;
            *(char *)(param_1 + 0x48) = cVar6;
            *(int *)(param_1 + 0x24) = iVar7;
            puVar4 = (undefined8 *)*puVar4;
        } while (cVar6 != '\0');
    }
    FUN_1408843e0(param_1 + -0x78);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    // WARNING: Could not recover jumptable at 0x000140883eb0. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140883ec0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 *puVar4;

    FUN_1408894e0();
    if (param_1[0x24] != 0) {
        if (*(char *)(param_1 + 0x1f) == '\0') {
            param_1[0x23] = 0;
        }
        else {
            puVar1 = (undefined8 *)param_1[0x23];
            puVar4 = (undefined8 *)_DAT_00000000;
            while (_DAT_00000000 = puVar4, puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
                puVar1 = (undefined8 *)*puVar2;
                if ((*(uint *)((longlong)puVar2 + 0x14) >> 3 & 1) == 0) {
                    puVar4 = puVar1;
                    if (puVar2 == (undefined8 *)param_1[0x23]) {
                        param_1[0x23] = puVar1;
                        puVar4 = (undefined8 *)_DAT_00000000;
                    }
                    _DAT_00000000 = puVar4;
                    puVar4 = (undefined8 *)_DAT_00000000;
                    if (puVar2 != (undefined8 *)0x0) {
                        FUN_140881720(DAT_140c111c0,puVar2);
                    }
                }
                else {
                    puVar4 = puVar1;
                    if (puVar2 == (undefined8 *)param_1[0x23]) {
                        param_1[0x23] = puVar1;
                        puVar4 = (undefined8 *)_DAT_00000000;
                    }
                }
            }
        }
        FUN_140881720(DAT_140c111c0,param_1[0x24]);
    }
    param_1[0x23] = 0;
    FUN_140889dc0(param_1 + 0x15);
    uVar3 = DAT_140c111c0;
    (**(code **)*param_1)(param_1,0);
    FUN_140881720(uVar3,param_1);
    return;
}



void FUN_140883fe0(longlong param_1,longlong *param_2)

{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;

    plVar2 = (longlong *)param_2[1];
    lVar3 = *plVar2;
    uVar1 = *(uint *)(param_1 + 0x94);
    if ((lVar3 + (ulonglong)*(uint *)(param_2 + 2) < (ulonglong)uVar1) &&
        ((ulonglong)uVar1 < (ulonglong)*(uint *)(plVar2 + 3) + lVar3)) {
        iVar5 = uVar1 - (int)lVar3;
    }
    else {
        iVar5 = *(int *)(plVar2 + 3);
    }
    lVar3 = *(longlong *)(param_1 + 0x60);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) - (iVar5 - *(uint *)(param_2 + 2));
    lVar4 = param_2[1];
    param_2[1] = 0;
    if (lVar4 != 0) {
        FUN_140889b30(lVar3 + 0xa8);
    }
    if (*(longlong *)(lVar3 + 0x118) == 0) {
        *(longlong **)(lVar3 + 0x118) = param_2;
        *param_2 = 0;
        return;
    }
    *param_2 = *(longlong *)(lVar3 + 0x118);
    *(longlong **)(lVar3 + 0x118) = param_2;
    return;
}



void FUN_140884080(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = param_2[1];
    param_2[1] = 0;
    if (lVar1 != 0) {
        FUN_140889b30(param_1 + 0xa8);
    }
    if (*(longlong *)(param_1 + 0x118) == 0) {
        *(longlong **)(param_1 + 0x118) = param_2;
        *param_2 = 0;
        return;
    }
    *param_2 = *(longlong *)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x118) = param_2;
    return;
}



int FUN_140884180(longlong *param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined local_res8 [8];

    puVar1 = (undefined8 *)param_1[4];
    if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((longlong)param_1 + 0x75) & 8) == 0)) {
        local_res8[0] = 1;
        if ((*(uint *)((longlong)puVar1 + 0x2c) & 2) == 0) {
            puVar3 = (undefined8 *)0x0;
        }
        else {
            puVar3 = puVar1 + 1;
        }
        if ((*(uint *)((longlong)puVar1 + 0x2c) & 1) == 0) {
            iVar2 = (**(code **)(*DAT_140c62938 + 8))
                    (DAT_140c62938,*(undefined4 *)puVar1,*(undefined4 *)(puVar1 + 5),puVar3,
                     local_res8,param_1[5]);
        }
        else {
            iVar2 = (**(code **)(*DAT_140c62938 + 0x10))(DAT_140c62938,*puVar1);
        }
        if (iVar2 == 1) {
            (**(code **)(*param_1 + 0x18))(param_1);
        }
        if (param_1[4] != 0) {
            FUN_140883230();
            param_1[4] = 0;
        }
        return iVar2;
    }
    return 1;
}



char FUN_140884230(longlong param_1,byte param_2,longlong param_3,uint param_4,char param_5,
                   byte param_6,float param_7,uint *param_8)

{
    undefined4 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    *param_8 = 0;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xffffffef;
    *(float *)(param_1 + 0xac) = param_7;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(longlong *)(param_1 + 0x88) = param_3;
    *(uint *)(param_1 + 0x98) = param_4;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | (param_2 & 1) * '\x02';
    *(byte *)(param_1 + 0x74) = param_6;
    if (((param_3 == 0) || (100 < param_6)) || (param_7 < 0.0)) {
        return '\x1f';
    }
    if ((((*(int *)(param_1 + 0xb0) << 0x1c) >> 0x1c) - 2U & 0xfffffffd) == 0) {
        return '\x02';
    }
    if (param_2 == 0) {
        if (param_4 % *(uint *)(param_1 + 0x70) != 0) {
            return '\x02';
        }
        if ((*(byte *)(param_1 + 0x75) & 0x10) != 0) {
            uVar2 = *(ulonglong *)(param_1 + 0x80);
            uVar3 = **(ulonglong **)(param_1 + 0x28);
            if (uVar3 < uVar2 + param_4) {
                if (uVar3 <= uVar2) goto LAB_140884324;
                param_4 = (int)uVar3 - (int)uVar2;
            }
        }
    }
    if (param_4 != 0) {
        QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x58));
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
        if (param_5 != '\0') {
            FUN_140889400();
            FUN_140885d10(param_1,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
            FUN_140889590(*(undefined8 *)(param_1 + 0x60),param_1);
            uVar1 = *(undefined4 *)(param_1 + 0xb0);
            *param_8 = param_4;
            return (((byte)uVar1 & 0xf) != 1) + '\x01';
        }
        FUN_140885d10(param_1,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
        *param_8 = param_4;
        return '\x01';
    }
    LAB_140884324:
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    FUN_140885d10(param_1,1);
    *param_8 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return '\x01';
}



void FUN_1408843e0(longlong *param_1)

{
    byte bVar1;
    longlong lVar2;
    longlong **pplVar3;
    ulonglong uVar4;
    longlong **pplVar5;
    longlong **pplVar6;

    (**(code **)(*param_1 + 0x40))();
    bVar1 = *(byte *)(param_1 + 0x18);
    uVar4 = (ulonglong)bVar1;
    if ((uint)bVar1 <= *(uint *)(param_1 + 0x15) && *(uint *)(param_1 + 0x15) != (uint)bVar1) {
        pplVar5 = (longlong **)param_1[0x16];
        pplVar6 = (longlong **)0x0;
        if (bVar1 != 0) {
            do {
                pplVar6 = pplVar5;
                pplVar5 = (longlong **)*pplVar6;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        lVar2 = param_1[0xc];
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
        while (pplVar5 != (longlong **)0x0) {
            pplVar3 = (longlong **)*pplVar5;
            if (pplVar5 == (longlong **)param_1[0x16]) {
                param_1[0x16] = (longlong)pplVar3;
            }
            else {
                *pplVar6 = (longlong *)pplVar3;
            }
            if (pplVar5 == (longlong **)param_1[0x17]) {
                param_1[0x17] = (longlong)pplVar6;
            }
            *(int *)(param_1 + 0x15) = *(int *)(param_1 + 0x15) + -1;
            FUN_140883fe0(param_1,pplVar5);
            pplVar5 = pplVar3;
        }
        FUN_1408893c0(param_1[0xc]);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
    }
    FUN_140885f10(param_1);
    return;
}



void FUN_1408844e0(longlong param_1,char param_2,char param_3)

{
    char cVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    plVar2 = (longlong *)0x0;
    plVar3 = *(longlong **)(param_1 + 0x78);
    plVar5 = plVar2;
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
        do {
            if ((*(byte *)((longlong)plVar3 + 0x75) & 8) == 0) {
                if (((param_2 != '\0') &&
                     (((plVar5 == (longlong *)0x0 ||
                        (*(char *)((longlong)plVar3 + 0x74) < *(char *)((longlong)plVar5 + 0x74))) &&
                       (*(char *)((longlong)plVar3 + 0x74) < param_3)))) &&
                    ((*(byte *)((longlong)plVar3 + 0x75) & 0x40) != 0)) {
                    plVar5 = plVar3;
                }
                LAB_1408845b2:
                plVar4 = (longlong *)plVar3[3];
                plVar2 = plVar3;
            }
            else {
                cVar1 = (**(code **)(*plVar3 + 8))();
                if (cVar1 == '\0') goto LAB_1408845b2;
                plVar4 = (longlong *)plVar3[3];
                if (plVar3 == *(longlong **)(param_1 + 0x78)) {
                    *(longlong **)(param_1 + 0x78) = plVar4;
                }
                else {
                    plVar2[3] = (longlong)plVar4;
                }
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)*plVar3)(plVar3,0);
                    FUN_140881720();
                }
            }
            plVar3 = plVar4;
        } while (plVar4 != (longlong *)0x0);
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
        }
    }
    // WARNING: Could not recover jumptable at 0x0001408845f5. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    return;
}



void FUN_140884600(longlong *param_1,longlong param_2)

{
    byte bVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    bVar1 = *(byte *)(param_1 + 0x18);
    param_1[0x10] = param_2;
    if ((uint)bVar1 < *(uint *)(param_1 + 0x15)) {
        puVar2 = (undefined8 *)param_1[0x16];
        if (bVar1 != 0) {
            uVar3 = (ulonglong)bVar1;
            do {
                puVar2 = (undefined8 *)*puVar2;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        if ((ulonglong)*(uint *)(puVar2 + 2) + *(longlong *)puVar2[1] != param_2) {
            FUN_1408843e0();
            goto LAB_140884677;
        }
    }
    else {
        (**(code **)(*param_1 + 0x48))(param_1,param_2);
    }
    FUN_140885f10(param_1);
    LAB_140884677:
    // WARNING: Could not recover jumptable at 0x00014088468a. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    return;
}



ulonglong FUN_1408846a0(uint param_1,uint param_2)

{
    uint uVar1;
    byte bVar2;
    uint uVar3;
    int iVar5;
    ulonglong uVar6;
    bool bVar7;
    ulonglong uVar4;

    uVar6 = (ulonglong)param_2;
    if (param_1 < param_2) {
        uVar6 = (ulonglong)param_1;
        param_1 = param_2;
    }
    uVar4 = (ulonglong)param_1 % uVar6;
    if ((uint)uVar4 != 0) {
        bVar2 = 0;
        uVar1 = (uint)uVar4 | (uint)uVar6;
        while ((uVar1 & 1) == 0) {
            uVar6 = uVar6 >> 1;
            uVar4 = uVar4 >> 1;
            bVar2 = bVar2 + 1;
            uVar1 = (uint)uVar6 | (uint)uVar4;
        }
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1) {
        }
        uVar1 = (uint)uVar6;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
        }
        bVar7 = uVar1 < (uint)uVar4;
        if (uVar1 != (uint)uVar4) {
            do {
                iVar5 = (int)uVar6;
                if (bVar7) {
                    iVar5 = (int)uVar4;
                    uVar4 = uVar6;
                }
                uVar3 = (uint)uVar4;
                uVar1 = iVar5 - uVar3 >> 1;
                uVar6 = (ulonglong)uVar1;
                if ((uVar1 & 1) == 0) {
                    do {
                        uVar6 = uVar6 >> 1;
                    } while ((uVar6 & 1) == 0);
                }
                uVar1 = (uint)uVar6;
                bVar7 = uVar1 < uVar3;
            } while (uVar1 != uVar3);
        }
        uVar6 = (ulonglong)(uVar1 << (bVar2 & 0x1f));
    }
    return uVar6;
}



undefined8 FUN_140884740(longlong param_1,longlong *param_2,undefined4 *param_3,char param_4)

{
    char cVar1;
    longlong lVar2;
    undefined8 uVar3;

    *param_2 = 0;
    *param_3 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    lVar2 = FUN_140884a40(param_1 + -0x78,param_3);
    *param_2 = lVar2;
    if (((lVar2 == 0) && ((*(byte *)(param_1 + 0x4a) & 2) == 0)) &&
        ((cVar1 = FUN_140884880(param_1 + -0x78,param_2,param_3), cVar1 != '\0' || (param_4 != '\0'))))
    {
        lVar2 = *param_2;
        while (((lVar2 == 0 && ((*(byte *)(param_1 + 0x4a) & 2) == 0)) &&
                (((*(byte *)(param_1 + -3) & 0x20) != 0 || (*(int *)(param_1 + 0x24) != 0))))) {
            FUN_140889400(param_1 + -0x78);
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
            FUN_140889590(*(undefined8 *)(&DAT_ffffffffffffffe8 + param_1),param_1 + -0x78);
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
            lVar2 = FUN_140884a40(param_1 + -0x78,param_3);
            *param_2 = lVar2;
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    if ((*(byte *)(param_1 + 0x4a) & 2) == 0) {
        if (*param_2 == 0) {
            if (((*(byte *)(param_1 + -3) & 4) == 0) ||
                (*(ulonglong *)(param_1 + 8) < **(ulonglong **)(&DAT_ffffffffffffffb0 + param_1))) {
                uVar3 = 0x2e;
            }
            else {
                uVar3 = 0x11;
            }
        }
        else if (((*(byte *)(param_1 + -3) & 4) == 0) ||
                 (uVar3 = 0x11,
                         *(ulonglong *)(param_1 + 8) < **(ulonglong **)(&DAT_ffffffffffffffb0 + param_1))) {
            uVar3 = 0x2d;
        }
    }
    else {
        uVar3 = 2;
    }
    return uVar3;
}



bool FUN_140884880(longlong param_1,longlong *param_2,undefined8 param_3)

{
    char cVar1;
    longlong lVar2;

    if ((*(byte *)(param_1 + 0x75) & 0x10) == 0) {
        return false;
    }
    lVar2 = FUN_140884a40(param_1,param_3);
    *param_2 = lVar2;
    if (lVar2 != 0) {
        return true;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))
            (*(longlong **)(param_1 + 0x60),param_1);
    if (cVar1 != '\0') {
        lVar2 = FUN_140884a40(param_1,param_3);
        *param_2 = lVar2;
    }
    return *param_2 != 0;
}



ulonglong FUN_1408849a0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 == 0) {
        uVar2 = *(ulonglong *)(param_1 + 8);
    }
    else {
        uVar2 = (ulonglong)*(uint *)(lVar1 + 0x10) + **(longlong **)(lVar1 + 8);
    }
    if (param_2 != 0) {
        *(bool *)param_2 = **(ulonglong **)(&DAT_ffffffffffffffb0 + param_1) <= uVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return uVar2;
}



longlong FUN_140884a40(longlong *param_1,int *param_2)

{
    byte bVar1;
    uint uVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    int iVar6;
    undefined8 *puVar7;

    bVar1 = *(byte *)(param_1 + 0x18);
    if (*(uint *)(param_1 + 0x15) <= (uint)bVar1) {
        *param_2 = 0;
        return 0;
    }
    puVar7 = (undefined8 *)param_1[0x16];
    if (bVar1 != 0) {
        uVar5 = (ulonglong)bVar1;
        do {
            puVar7 = (undefined8 *)*puVar7;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    if ((ulonglong)*(uint *)(puVar7 + 2) + *(longlong *)puVar7[1] != param_1[0x10]) {
        (**(code **)(*param_1 + 0x58))(param_1,0);
        FUN_1408843e0(param_1);
        *param_2 = 0;
        return 0;
    }
    *(byte *)(param_1 + 0x18) = bVar1 + 1;
    param_1[0x10] = (ulonglong)*(uint *)((longlong *)puVar7[1] + 3) + *(longlong *)puVar7[1];
    *param_2 = *(int *)(puVar7[1] + 0x18) - *(int *)(puVar7 + 2);
    plVar3 = (longlong *)puVar7[1];
    lVar4 = *plVar3;
    uVar2 = *(uint *)((longlong)param_1 + 0x94);
    if ((lVar4 + (ulonglong)*(uint *)(puVar7 + 2) < (ulonglong)uVar2) &&
        ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar3 + 3) + lVar4)) {
        iVar6 = uVar2 - (int)lVar4;
    }
    else {
        iVar6 = *(int *)(plVar3 + 3);
    }
    *(int *)((longlong)param_1 + 0x9c) =
            *(int *)((longlong)param_1 + 0x9c) - (iVar6 - *(uint *)(puVar7 + 2));
    FUN_140885f10(param_1);
    return (ulonglong)*(uint *)(puVar7 + 2) + *(longlong *)(puVar7[1] + 8);
}



undefined8
FUN_140884b70(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,float *param_5,
              undefined8 param_6,uint param_7)

{
    undefined uVar1;
    uint uVar2;
    undefined8 uVar3;
    char cVar4;
    float fVar5;

    *(longlong *)(param_1 + 0x60) = param_2;
    if (*param_3 < 0) {
        *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 8;
        return 0x1f;
    }
    *(undefined4 *)(param_1 + 0x88) = param_4;
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0x100) + 0x10))();
    if (((uVar2 == 0) || (param_7 < uVar2)) || (param_7 % uVar2 != 0)) {
        *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 8;
        uVar3 = 2;
    }
    else {
        *(uint *)(param_1 + 0x70) = uVar2;
        *(uint *)(param_1 + 0xa4) = uVar2;
        fVar5 = *param_5;
        if (fVar5 <= 1.0) {
            fVar5 = 1.0;
        }
        *(float *)(param_1 + 0x8c) = fVar5;
        *(uint *)(param_1 + 0x90) = (int)param_5[1] - (uint)param_5[1] % uVar2;
        fVar5 = param_5[2];
        if (*param_3 < (longlong)(ulonglong)(uint)fVar5) {
            fVar5 = *(float *)param_3;
        }
        *(float *)(param_1 + 0x94) = fVar5;
        cVar4 = *(char *)(param_5 + 3);
        if (cVar4 == '\0') {
            cVar4 = '\x01';
        }
        *(char *)(param_1 + 0xc1) = cVar4;
        uVar1 = *(undefined *)((longlong)param_5 + 0xd);
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined *)(param_1 + 0x74) = uVar1;
        if (*param_3 == 0) {
            *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 4;
        }
        uVar3 = FUN_140885660(param_1,param_6,param_7);
        if ((int)uVar3 != 1) {
            *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 8;
            return uVar3;
        }
    }
    return uVar3;
}



undefined8 FUN_140884cc0(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;

    if (((*(int *)(param_2 + 0x14) != 0) &&
         ((*(int *)(param_2 + 8) == 0 ||
           (0.0 < *(float *)(param_2 + 0x28) || *(float *)(param_2 + 0x28) == 0.0)))) &&
        (((*(byte *)(param_2 + 0x18) & 2) == 0 || (*(int *)(param_2 + 0x2c) - 1U < 0x400)))) {
        *(int *)(param_1 + 0x108) = *(int *)(param_2 + 0x14);
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x28);
        uVar1 = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0x110) = param_3;
        *(undefined4 *)(param_1 + 8) = uVar1;
        iVar2 = FUN_1408898c0(param_1 + 0xa8);
        if (iVar2 != 1) {
            return 2;
        }
        uVar3 = FUN_1408892a0(param_1,param_2 + 0x1c);
        return uVar3;
    }
    return 0x1f;
}



undefined4 FUN_140884d60(longlong param_1,longlong param_2,longlong *param_3)

{
    uint uVar1;

    *(longlong *)(param_1 + 0x60) = param_2;
    if (*param_3 < 0) {
        *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 8;
        return 0x1f;
    }
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x100) + 0x10))();
    if (((uVar1 != 0) && (uVar1 <= *(uint *)(param_2 + 0x108))) &&
        (*(uint *)(param_2 + 0x108) % uVar1 == 0)) {
        *(uint *)(param_1 + 0x70) = uVar1;
        return 1;
    }
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xbf | 8;
    return 2;
}



void FUN_140884df0(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 2;
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x60))(param_1 + 0x78);
    FUN_140885f10(param_1);
    if (*(char *)(param_1 + 0x10) != '\0') {
        FUN_140889450(*(undefined8 *)(param_1 + 0x60),param_1);
    }
    // WARNING: Could not recover jumptable at 0x000140884e41. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
}



void FUN_140884e50(longlong *param_1)

{
    char cVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff4;
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 4;
    if ((*(byte *)((longlong)param_1 + 0x75) & 8) != 0) {
        cVar1 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar1 != '\0') {
            if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) == 0) {
                *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x20;
                FUN_1408894a0(param_1[0xc]);
            }
            goto LAB_140884eba;
        }
    }
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xbf;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xdf;
        FUN_140889460(param_1[0xc]);
    }
    LAB_140884eba:
    if ((*(char *)(param_1 + 2) != '\0') &&
        (((*(int *)(param_1 + 0x16) << 0x1c) >> 0x1c & 0xfffffffdU) != 0)) {
        FUN_140889450(param_1[0xc],param_1);
    }
    // WARNING: Could not recover jumptable at 0x000140884eed. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    return;
}



void FUN_140884f00(longlong param_1)

{
    undefined local_18 [8];
    uint local_10;

    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x10;
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x20))(param_1 + 0x78,local_18);
    if (**(longlong **)(param_1 + 0x28) < (longlong)(ulonglong)local_10) {
        local_10 = *(uint *)*(longlong **)(param_1 + 0x28);
        (**(code **)(*(longlong *)(param_1 + 0x78) + 0x28))(param_1 + 0x78,local_18);
    }
    return;
}



undefined8 FUN_140884f70(longlong param_1,uint *param_2)

{
    byte bVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    if ((*(byte *)(param_1 + 0x4a) & 2) == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        *param_2 = 0;
        bVar1 = *(byte *)(param_1 + 0x48);
        uVar3 = (ulonglong)bVar1;
        if ((uint)bVar1 < *(uint *)(param_1 + 0x30)) {
            puVar2 = *(undefined8 **)(param_1 + 0x38);
            uVar4 = 0x2d;
            if (bVar1 != 0) {
                do {
                    puVar2 = (undefined8 *)*puVar2;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
            for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
                *param_2 = *param_2 + (*(int *)(puVar2[1] + 0x18) - *(int *)(puVar2 + 2));
            }
        }
        else {
            uVar4 = 0x2e;
        }
        if ((((*(byte *)(param_1 + -3) & 0x20) == 0) &&
             (*(uint *)(param_1 + 0x24) < *param_2 || *(uint *)(param_1 + 0x24) == *param_2)) ||
            (*(char *)(*(longlong *)(&DAT_ffffffffffffffe8 + param_1) + 0x68) != '\0')) {
            uVar4 = 0x11;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        return uVar4;
    }
    return 2;
}



void FUN_140885040(longlong param_1,undefined8 param_2,undefined4 param_3,undefined param_4,
                   undefined param_5,undefined4 param_6,undefined8 param_7)

{
    FUN_140884230(param_1 + -0x78,0,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1408851a0(longlong param_1,float *param_2)

{
    byte bVar1;
    undefined4 uVar2;
    char cVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    plVar5 = *(longlong **)(param_1 + 0x78);
    plVar6 = (longlong *)0x0;
    while( true ) {
        while( true ) {
            plVar4 = plVar5;
            if (plVar4 == (longlong *)0x0) {
                return (longlong *)0x0;
            }
            bVar1 = *(byte *)((longlong)plVar4 + 0x75);
            if ((bVar1 & 8) == 0) break;
            cVar3 = (**(code **)(*plVar4 + 8))(plVar4);
            if (cVar3 == '\0') goto LAB_140885237;
            plVar5 = (longlong *)plVar4[3];
            if (plVar4 == *(longlong **)(param_1 + 0x78)) {
                *(longlong **)(param_1 + 0x78) = plVar5;
            }
            else {
                plVar6[3] = (longlong)plVar5;
            }
            uVar2 = DAT_140c111c0;
            if (plVar4 != (longlong *)0x0) {
                (**(code **)*plVar4)(plVar4,0);
                FUN_140881720(uVar2);
            }
        }
        if (((bVar1 & 1) == 0) && ((bVar1 & 0x40) != 0)) break;
        LAB_140885237:
        plVar5 = (longlong *)plVar4[3];
        plVar6 = plVar4;
    }
    fVar8 = (float)(**(code **)(*plVar4 + 0x30))(plVar4);
    if ((longlong *)plVar4[3] != (longlong *)0x0) {
        fVar11 = 1.0;
        fVar10 = 0.0;
        plVar5 = plVar4;
        plVar6 = (longlong *)plVar4[3];
        do {
            bVar1 = *(byte *)((longlong)plVar6 + 0x75);
            if ((bVar1 & 8) == 0) {
                if (((bVar1 & 1) == 0) && ((bVar1 & 0x40) != 0)) {
                    fVar9 = (float)(**(code **)(*plVar6 + 0x30))();
                    if (fVar9 == fVar10) {
                        if (((*(char *)((longlong)plVar4 + 0x74) < *(char *)((longlong)plVar6 + 0x74)) ||
                             (fVar10 < fVar8)) ||
                            ((*(char *)((longlong)plVar6 + 0x74) == *(char *)((longlong)plVar4 + 0x74) &&
                              ((float)(*(longlong *)(param_1 + 0x70) - plVar4[0xb]) * (fVar11 / _DAT_140c61fe8) <
                               (float)(*(longlong *)(param_1 + 0x70) - plVar6[0xb]) * (fVar11 / _DAT_140c61fe8))))
                                ) {
                            LAB_14088537a:
                            plVar4 = plVar6;
                            fVar8 = fVar9;
                        }
                    }
                    else if (fVar9 < fVar8) goto LAB_14088537a;
                }
                LAB_140885380:
                plVar7 = (longlong *)plVar6[3];
                plVar5 = plVar6;
            }
            else {
                cVar3 = (**(code **)(*plVar6 + 8))(plVar6);
                if (cVar3 == '\0') goto LAB_140885380;
                plVar7 = (longlong *)plVar6[3];
                if (plVar6 == *(longlong **)(param_1 + 0x78)) {
                    *(longlong **)(param_1 + 0x78) = plVar7;
                }
                else {
                    plVar5[3] = (longlong)plVar7;
                }
                uVar2 = DAT_140c111c0;
                if (plVar6 != (longlong *)0x0) {
                    (**(code **)*plVar6)(plVar6,0);
                    FUN_140881720(uVar2);
                }
            }
            plVar6 = plVar7;
        } while (plVar7 != (longlong *)0x0);
    }
    *param_2 = fVar8;
    return plVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1408853c0(longlong param_1,float *param_2)

{
    undefined4 uVar1;
    char cVar2;
    longlong *plVar3;
    byte bVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong *plVar8;
    byte bVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x70));
    if (*(char *)(param_1 + 0x68) == '\0') {
        plVar8 = (longlong *)0x0;
        plVar3 = *(longlong **)(param_1 + 0x78);
        plVar6 = plVar8;
        joined_r0x00014088543d:
        plVar5 = plVar3;
        plVar3 = plVar8;
        if (plVar5 != (longlong *)0x0) {
            if ((*(byte *)((longlong)plVar5 + 0x75) & 8) == 0) {
                if ((*(byte *)((longlong)plVar5 + 0x75) & 0x40) != 0) {
                    fVar10 = (float)(**(code **)(*plVar5 + 0x30))(plVar5);
                    bVar9 = *(byte *)((longlong)plVar5 + 0x75) >> 5 & 1;
                    plVar3 = plVar5;
                    if ((longlong *)plVar5[3] == (longlong *)0x0) goto LAB_140885630;
                    fVar13 = 1.0;
                    fVar12 = 0.0;
                    plVar6 = (longlong *)plVar5[3];
                    goto LAB_140885513;
                }
            }
            else {
                cVar2 = (**(code **)(*plVar5 + 8))(plVar5);
                if (cVar2 != '\0') {
                    plVar3 = (longlong *)plVar5[3];
                    if (plVar5 == *(longlong **)(param_1 + 0x78)) {
                        *(longlong **)(param_1 + 0x78) = plVar3;
                    }
                    else {
                        plVar6[3] = (longlong)plVar3;
                    }
                    uVar1 = DAT_140c111c0;
                    if (plVar5 != (longlong *)0x0) {
                        (**(code **)*plVar5)(plVar5,0);
                        FUN_140881720(uVar1);
                    }
                    goto joined_r0x00014088543d;
                }
            }
            plVar3 = (longlong *)plVar5[3];
            plVar6 = plVar5;
            goto joined_r0x00014088543d;
        }
    }
    else {
        plVar3 = (longlong *)FUN_1408851a0(param_1,param_2);
    }
    goto LAB_140885408;
    LAB_140885513:
    do {
        if ((*(byte *)((longlong)plVar6 + 0x75) & 8) == 0) {
            if ((*(byte *)((longlong)plVar6 + 0x75) & 0x40) != 0) {
                fVar11 = (float)(**(code **)(*plVar6 + 0x30))();
                bVar4 = *(byte *)((longlong)plVar6 + 0x75) >> 5;
                if (bVar9 == 0) {
                    if ((bVar4 & 1) == 0) {
                        LAB_1408855b2:
                        bVar4 = bVar4 & 1;
                        if (fVar11 == fVar12) {
                            if (((*(char *)((longlong)plVar3 + 0x74) < *(char *)((longlong)plVar6 + 0x74)) ||
                                 (fVar12 < fVar10)) ||
                                ((*(char *)((longlong)plVar6 + 0x74) == *(char *)((longlong)plVar3 + 0x74) &&
                                  ((float)(*(longlong *)(param_1 + 0x70) - plVar3[0xb]) * (fVar13 / _DAT_140c61fe8)
                                   < (float)(*(longlong *)(param_1 + 0x70) - plVar6[0xb]) *
                                     (fVar13 / _DAT_140c61fe8))))) goto LAB_14088560f;
                        }
                        else if (fVar11 < fVar10) goto LAB_14088560f;
                    }
                    else {
                        bVar4 = 1;
                        LAB_14088560f:
                        bVar9 = bVar4;
                        plVar3 = plVar6;
                        fVar10 = fVar11;
                    }
                }
                else if ((bVar4 & 1) != 0) goto LAB_1408855b2;
            }
            LAB_140885615:
            plVar7 = (longlong *)plVar6[3];
            plVar5 = plVar6;
        }
        else {
            cVar2 = (**(code **)(*plVar6 + 8))(plVar6);
            if (cVar2 == '\0') goto LAB_140885615;
            plVar7 = (longlong *)plVar6[3];
            if (plVar6 == *(longlong **)(param_1 + 0x78)) {
                *(longlong **)(param_1 + 0x78) = plVar7;
            }
            else {
                plVar5[3] = (longlong)plVar7;
            }
            uVar1 = DAT_140c111c0;
            if (plVar6 != (longlong *)0x0) {
                (**(code **)*plVar6)(plVar6,0);
                FUN_140881720(uVar1);
            }
        }
        plVar6 = plVar7;
    } while (plVar7 != (longlong *)0x0);
    LAB_140885630:
    *param_2 = fVar10;
    if (bVar9 == 0) goto LAB_14088540b;
    LAB_140885408:
    plVar8 = plVar3;
    LAB_14088540b:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
    return plVar8;
}



undefined4 FUN_140885660(longlong param_1,uint *param_2,ulonglong param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;

    param_3 = param_3 & 0xffffffff;
    uVar3 = (uint)param_3;
    if (param_2 == (uint *)0x0) {
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x98) = uVar3 - (int)(param_3 % (ulonglong)*(uint *)(param_1 + 0x70));
        return 1;
    }
    if (param_2[2] != 0) {
        uVar2 = FUN_1408846a0();
        *(uint *)(param_1 + 0xa4) = (param_2[2] / uVar2) * *(int *)(param_1 + 0x70);
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xa0) = uVar2;
    uVar4 = uVar3 - (int)(param_3 % (ulonglong)uVar2);
    *(uint *)(param_1 + 0x98) = uVar4;
    uVar1 = *param_2;
    if (uVar1 == 0) {
        uVar3 = param_2[1];
        if (uVar3 == 0) {
            return 1;
        }
        if (uVar3 <= uVar2) {
            return 1;
        }
        uVar2 = (((uVar3 - 1) + uVar2) / uVar2) * uVar2;
        *(uint *)(param_1 + 0xa0) = uVar2;
        if (uVar2 <= uVar4) {
            return 1;
        }
    }
    else if ((uVar1 <= uVar3) && (uVar1 % uVar2 == 0)) {
        *(uint *)(param_1 + 0x98) = uVar1;
        *(uint *)(param_1 + 0xa0) = *param_2;
        return 1;
    }
    return 2;
}



int FUN_140885760(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
    longlong lVar1;

    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    *(undefined8 *)(param_1 + 0x28) = param_2;
    lVar1 = FUN_1408827a0(param_3,param_4,param_5);
    *(longlong *)(param_1 + 0x20) = lVar1;
    return 2 - (uint)(lVar1 != 0);
}



int FUN_1408857a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
    longlong lVar1;

    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
    *(undefined8 *)(param_1 + 0x28) = param_2;
    lVar1 = FUN_140882830(param_3,param_4,param_5);
    *(longlong *)(param_1 + 0x20) = lVar1;
    return 2 - (uint)(lVar1 != 0);
}



int FUN_140885ac0(longlong *param_1,undefined4 param_2)

{
    uint uVar1;
    int iVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;

    uVar1 = *(uint *)(param_1 + 5);
    local_28 = 0;
    local_20 = 0;
    local_24 = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -9));
    iVar2 = FUN_140885660(param_1 + -0xf,&local_28,*(undefined4 *)(param_1[-3] + 0x108));
    if (iVar2 == 1) {
        if (uVar1 <= *(uint *)(param_1 + 5) && *(uint *)(param_1 + 5) != uVar1) {
            (**(code **)(param_1[-0xf] + 0x50))(param_1 + -0xf,param_2);
        }
    }
    else {
        *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
        (**(code **)(*param_1 + 0x60))(param_1);
        FUN_140885f10(param_1 + -0xf);
        if (*(char *)(param_1 + -0xd) != '\0') {
            FUN_140889450(param_1[-3],param_1 + -0xf);
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -9));
    return iVar2;
}



void FUN_140885d10(longlong *param_1,uint param_2)

{
    char cVar1;

    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff0;
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | param_2 & 0xf;
    if (((*(byte *)((longlong)param_1 + 0x75) & 8) == 0) ||
        (cVar1 = (**(code **)(*param_1 + 8))(), cVar1 == '\0')) {
        if (param_2 != 2) {
            *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xbf;
            if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) == 0) {
                return;
            }
            *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xdf;
            FUN_140889460(param_1[0xc]);
            return;
        }
        *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x40;
    }
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        return;
    }
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x20;
    FUN_1408894a0(param_1[0xc]);
    return;
}



char FUN_140885e20(longlong param_1)

{
    byte bVar1;
    longlong lVar2;
    char cVar3;

    if ((*(byte *)(param_1 + 0x4a) & 1) == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        bVar1 = *(byte *)(param_1 + -3);
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 1;
        if (((bVar1 & 4) == 0) && ((bVar1 & 8) == 0)) {
            cVar3 = '\x01';
        }
        else {
            cVar3 = '\0';
        }
        *(byte *)(param_1 + -3) = (cVar3 << 6 ^ bVar1) & 0x40 ^ bVar1;
        FUN_140885f10();
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        lVar2 = *(longlong *)(&DAT_ffffffffffffffe8 + param_1);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
        FUN_1408893c0(*(undefined8 *)(&DAT_ffffffffffffffe8 + param_1));
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x18));
        *(undefined8 *)(param_1 + -0x20) =
                *(undefined8 *)(*(longlong *)(&DAT_ffffffffffffffe8 + param_1) + 0x70);
    }
    return ((*(byte *)(param_1 + 0x4a) & 2) != 0) + '\x01';
}



undefined8 FUN_140885ec0(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfe;
    *(byte *)(param_1 + -3) = *(byte *)(param_1 + -3) & 0xbf;
    FUN_1408843e0(param_1 + -0x78);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return 1;
}



void FUN_140885f10(longlong *param_1)

{
    ulonglong uVar1;
    byte bVar2;
    char cVar3;
    ulonglong uVar4;

    if (*(int *)((longlong)param_1 + 0x94) == 0) {
        uVar1 = *(ulonglong *)param_1[5];
        uVar4 = (**(code **)(*param_1 + 0x38))();
        if ((uVar4 < uVar1) || ((*(byte *)((longlong)param_1 + 0x75) & 0x10) == 0)) goto LAB_140885f4c;
        bVar2 = *(byte *)((longlong)param_1 + 0x75) & 0xbf | 4;
    }
    else {
        LAB_140885f4c:
        *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xfb;
        bVar2 = *(byte *)((longlong)param_1 + 0x75);
        if (((*(byte *)((longlong)param_1 + 0xc2) & 1) == 0) || ((bVar2 & 8) != 0)) {
            cVar3 = '\0';
        }
        else {
            cVar3 = '\x01';
        }
        bVar2 = (cVar3 << 6 ^ bVar2) & 0x40 ^ bVar2;
    }
    *(byte *)((longlong)param_1 + 0x75) = bVar2;
    if (((bVar2 & 0x40) == 0) ||
        (*(float *)(param_1[0xc] + 0x10c) * *(float *)((longlong)param_1 + 0x8c) <=
         (float)(ulonglong)*(uint *)((longlong)param_1 + 0x9c))) {
        if ((bVar2 & 8) != 0) {
            cVar3 = (**(code **)(*param_1 + 8))(param_1);
            if (cVar3 != '\0') goto LAB_140885fb4;
        }
        if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
            *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xdf;
            FUN_140889050(param_1[0xc]);
            return;
        }
    }
    else {
        LAB_140885fb4:
        if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) == 0) {
            *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x20;
            FUN_140889090(param_1[0xc]);
            return;
        }
    }
    return;
}



void FUN_140885ff0(longlong param_1,int param_2)

{
    if (param_2 == 2) {
        *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 2;
        (**(code **)(*(longlong *)(param_1 + 0x78) + 0x60))(param_1 + 0x78);
    }
    FUN_140885f10(param_1);
    if (*(char *)(param_1 + 0x10) != '\0') {
        FUN_140889450(*(undefined8 *)(param_1 + 0x60),param_1);
        return;
    }
    return;
}



void FUN_140886040(longlong *param_1,int param_2)

{
    char cVar1;
    longlong lVar2;

    if (param_2 == 2) {
        *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff4;
        *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 4;
        if ((*(byte *)((longlong)param_1 + 0x75) & 8) != 0) {
            lVar2 = *param_1;
            LAB_140886097:
            cVar1 = (**(code **)(lVar2 + 8))(param_1);
            if (cVar1 != '\0') {
                if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) == 0) {
                    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x20;
                    FUN_1408894a0(param_1[0xc]);
                }
                goto LAB_1408860d0;
            }
        }
    }
    else {
        if ((*(uint *)(param_1 + 0x16) & 0x10) == 0) goto LAB_1408860d0;
        param_1[0x10] = param_1[0x10] + (ulonglong)*(uint *)(param_1 + 0x13);
        *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff1 | 1;
        if ((*(byte *)((longlong)param_1 + 0x75) & 8) != 0) {
            lVar2 = *param_1;
            goto LAB_140886097;
        }
    }
    *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xbf;
    if ((*(byte *)((longlong)param_1 + 0x75) & 0x20) != 0) {
        *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xdf;
        FUN_140889460(param_1[0xc]);
    }
    LAB_1408860d0:
    if ((*(char *)(param_1 + 2) != '\0') &&
        (((*(int *)(param_1 + 0x16) << 0x1c) >> 0x1c & 0xfffffffdU) != 0)) {
        FUN_140889450(param_1[0xc],param_1);
        return;
    }
    return;
}



undefined8 * FUN_140886150(undefined8 *param_1)

{
    FUN_140883680();
    *param_1 = &PTR_FUN_1409a7c10;
    return param_1;
}



undefined8 * FUN_140886190(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7d00;
    param_1[0xf] = &PTR_LAB_1409a7d60;
    FUN_140883790();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408861e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7c10;
    FUN_1408837e0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140886220(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7c58;
    param_1[0xf] = &PTR_LAB_1409a7c90;
    FUN_140883820();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 FUN_140886270(longlong param_1)

{
    undefined8 uVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if ((*(longlong *)(param_1 + 200) == 0) && (*(char *)(param_1 + 0xd0) == '\0')) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return uVar1;
}



undefined8 FUN_1408862c0(longlong param_1)

{
    undefined8 uVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if ((*(longlong *)(param_1 + 0xb8) == 0) && (*(char *)(param_1 + 0xc0) == '\0')) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return uVar1;
}



void FUN_140886310(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    FUN_140885d10(param_1 + -0x78,3);
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_1 + 0x48) = 1;
        FUN_140889400(param_1 + -0x78);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        FUN_140889590(*(undefined8 *)(&DAT_ffffffffffffffe8 + param_1),param_1 + -0x78);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        *(undefined *)(param_1 + 0x48) = 0;
    }
    // WARNING: Could not recover jumptable at 0x000140886386. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return;
}



void FUN_1408863a0(longlong param_1)

{
    uint *puVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;

    lVar3 = *(longlong *)(param_1 + 200);
    puVar1 = (uint *)(lVar3 + 0x14);
    *puVar1 = *puVar1 & 0xfffffffa;
    puVar1 = (uint *)(lVar3 + 0x14);
    *puVar1 = *puVar1 | 2;
    lVar3 = *(longlong *)(param_1 + 200);
    plVar4 = *(longlong **)(lVar3 + 8);
    uVar2 = *(uint *)(param_1 + 0x94);
    lVar5 = *plVar4;
    if ((lVar5 + (ulonglong)*(uint *)(lVar3 + 0x10) < (ulonglong)uVar2) &&
        ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar4 + 3) + lVar5)) {
        iVar6 = uVar2 - (int)lVar5;
    }
    else {
        iVar6 = *(int *)(plVar4 + 3);
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) - (iVar6 - *(uint *)(lVar3 + 0x10));
    *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x18);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0xd0) = 1;
    return;
}



int FUN_140886440(longlong param_1)

{
    undefined8 *puVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    int iVar6;
    uint uVar7;
    int iVar8;

    puVar5 = *(undefined8 **)(param_1 + 0xb0);
    uVar7 = (uint)*(byte *)(param_1 + 0xc0);
    iVar8 = 0;
    do {
        iVar6 = 0;
        if (puVar5 == (undefined8 *)0x0) {
            LAB_1408864b8:
            lVar3 = *(longlong *)(param_1 + 200);
            if (lVar3 == 0) {
                return iVar6;
            }
            uVar7 = *(uint *)(lVar3 + 0x10);
            plVar4 = *(longlong **)(lVar3 + 8);
            uVar2 = *(uint *)(param_1 + 0x94);
            lVar3 = *plVar4;
            if ((lVar3 + (ulonglong)uVar7 < (ulonglong)uVar2) &&
                ((ulonglong)uVar2 < (ulonglong)*(uint *)(plVar4 + 3) + lVar3)) {
                return ((uVar2 - (int)lVar3) - uVar7) + iVar6;
            }
            return (*(int *)(plVar4 + 3) - uVar7) + iVar6;
        }
        if (uVar7 == 0) {
            iVar6 = 0;
            if (puVar5 != (undefined8 *)0x0) {
                uVar7 = *(uint *)(param_1 + 0x94);
                do {
                    plVar4 = (longlong *)puVar5[1];
                    puVar1 = puVar5 + 2;
                    lVar3 = *plVar4;
                    if ((lVar3 + (ulonglong)*(uint *)puVar1 < (ulonglong)uVar7) &&
                        ((ulonglong)uVar7 < (ulonglong)*(uint *)(plVar4 + 3) + lVar3)) {
                        iVar6 = uVar7 - (int)lVar3;
                    }
                    else {
                        iVar6 = *(int *)(plVar4 + 3);
                    }
                    puVar5 = (undefined8 *)*puVar5;
                    iVar8 = iVar8 + (iVar6 - *(uint *)puVar1);
                    iVar6 = iVar8;
                } while (puVar5 != (undefined8 *)0x0);
            }
            goto LAB_1408864b8;
        }
        puVar5 = (undefined8 *)*puVar5;
        uVar7 = uVar7 - 1;
    } while( true );
}



undefined8 *
FUN_140886520(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              undefined8 param_5,longlong *param_6)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)0x0;
    *param_6 = 0;
    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,0xd8);
    if (puVar3 == (undefined8 *)0x0) {
        FUN_140883340(param_1,*(undefined *)(param_4 + 0xd));
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,0xd8);
        if (puVar3 != (undefined8 *)0x0) goto LAB_140886597;
    }
    else {
        LAB_140886597:
        FUN_1408835e0(puVar3);
        *puVar3 = &PTR_FUN_1409a7d00;
        *(undefined *)(puVar3 + 0x1a) = 0;
        puVar3[0x19] = 0;
        puVar3[0xf] = &PTR_LAB_1409a7d60;
        iVar2 = FUN_140884b70(puVar3,param_1,param_2,param_3,param_4,param_5,
                              *(undefined4 *)(param_1 + 0x108));
        uVar1 = DAT_140c111c0;
        if (iVar2 == 1) {
            FUN_140883cd0(param_1,puVar3);
            if (puVar3 != (undefined8 *)0x0) {
                puVar4 = puVar3 + 0xf;
            }
            goto LAB_14088662e;
        }
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_140881720(uVar1,puVar3);
        }
    }
    puVar3 = (undefined8 *)0x0;
    LAB_14088662e:
    *param_6 = (longlong)puVar4;
    return puVar3;
}



undefined8 *
FUN_140886650(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
              uint param_6,byte param_7,char param_8,undefined4 *param_9,longlong **param_10)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 *puVar6;
    longlong local_res8;
    longlong local_res10;
    ulonglong in_stack_ffffffffffffffa8;
    uint in_stack_ffffffffffffffb0;

    uVar5 = 0;
    *param_10 = (longlong *)0x0;
    local_res10 = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    local_res8 = 0;
    puVar6 = (undefined8 *)0x0;
    if (((*(char *)(param_1 + 0xf8) == '\0') || (param_3 == -1)) ||
        (uVar5 = FUN_1408896b0(param_1 + 0xa8,param_3,param_4,param_5,
                               in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)param_6,
                               in_stack_ffffffffffffffb0 & 0xffffff00 | (uint)param_7,param_9,
                               &local_res8), local_res8 == 0)) {
        if (param_8 != '\0') goto LAB_1408867ea;
        FUN_140889870(param_1 + 0xa8,&local_res8);
        if (local_res8 == 0) {
            FUN_1408893e0(param_1);
            puVar6 = (undefined8 *)0x0;
            goto LAB_1408867ea;
        }
        uVar2 = *param_9;
        iVar3 = *(int *)(*(longlong *)(local_res10 + 0x28) + 8);
        iVar4 = *(int *)(local_res10 + 0x70);
        plVar1 = (longlong *)(param_1 + 0x128);
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(local_res8 + 8);
        *plVar1 = (ulonglong)(uint)(iVar3 * iVar4) + param_4;
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x108);
        *(undefined4 *)(param_1 + 0x134) = uVar2;
        *param_10 = plVar1;
        FUN_140889c10(param_1 + 0xa8,local_res8,plVar1,param_3,param_4,*param_9);
    }
    else if ((param_8 != '\0') && (*(longlong *)(local_res8 + 0x10) != 0)) {
        FUN_140889b30(param_1 + 0xa8);
        goto LAB_1408867ea;
    }
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x118) = *puVar6;
    }
    *(uint *)((longlong)puVar6 + 0x14) = *(uint *)((longlong)puVar6 + 0x14) & 0xfffffff8;
    puVar6[1] = local_res8;
    *(undefined4 *)(puVar6 + 2) = uVar5;
    LAB_1408867ea:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return puVar6;
}



undefined8 *
FUN_140886810(longlong param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5,
              undefined4 param_6,undefined4 param_7,longlong **param_8)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;

    *param_8 = (longlong *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    puVar2 = *(undefined8 **)(param_1 + 0x118);
    if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x118) = *puVar2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    plVar1 = (longlong *)(param_1 + 0x128);
    lVar3 = *(longlong *)(param_3 + 8);
    *plVar1 = (ulonglong)
                      (uint)(*(int *)(*(longlong *)(param_2 + 0x28) + 8) * *(int *)(param_2 + 0x70)) + param_5
            ;
    *(ulonglong *)(param_1 + 0x138) = (ulonglong)param_4 + lVar3;
    *(undefined4 *)(param_1 + 0x130) = param_6;
    *(undefined4 *)(param_1 + 0x134) = param_7;
    *param_8 = plVar1;
    *(longlong **)(param_3 + 0x10) = plVar1;
    *(uint *)((longlong)puVar2 + 0x14) = *(uint *)((longlong)puVar2 + 0x14) & 0xfffffff8;
    puVar2[1] = param_3;
    *(uint *)(puVar2 + 2) = param_4;
    return puVar2;
}



undefined8 *
FUN_1408868e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)0x0;
    *param_4 = 0;
    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,200);
    if (puVar3 == (undefined8 *)0x0) {
        FUN_140883340(param_1,100);
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,200);
        if (puVar3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
        }
    }
    FUN_1408836f0(puVar3);
    *puVar3 = &PTR_FUN_1409a7c58;
    *(undefined *)(puVar3 + 0x18) = 0;
    puVar3[0x17] = 0;
    puVar3[0xf] = &PTR_LAB_1409a7c90;
    iVar2 = FUN_140884d60(puVar3,param_1,param_2,param_3);
    uVar1 = DAT_140c111c0;
    if (iVar2 != 1) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_140881720(uVar1,puVar3);
        }
        return (undefined8 *)0x0;
    }
    FUN_140883cd0(param_1,puVar3);
    if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3 + 0xf;
    }
    *param_4 = (longlong)puVar4;
    return puVar3;
}



void FUN_1408869e0(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    *(byte *)(param_1 + -3) = *(byte *)(param_1 + -3) & 0xbf | 8;
    FUN_140885d10(param_1 + -0x78,3);
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined *)(param_1 + 0x48) = 1;
        FUN_140889400(param_1 + -0x78);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        FUN_140889590(*(undefined8 *)(&DAT_ffffffffffffffe8 + param_1),param_1 + -0x78);
        *(undefined *)(param_1 + 0x48) = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    }
    // WARNING: Could not recover jumptable at 0x000140886a61. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return;
}



undefined8 FUN_140886a70(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong local_res10;
    undefined local_res18 [16];

    lVar1 = (**(code **)(*param_2 + 0x20))(param_2,local_res18,&local_res10,1);
    if (lVar1 == 0) {
        return 0;
    }
    (**(code **)(*param_2 + 0x28))(param_2,lVar1,1,local_res10 != 0);
    return 1;
}



void FUN_140886ac0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   longlong *param_5)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    bool bVar5;
    undefined4 local_res20;
    undefined local_res24;
    undefined8 local_28;
    longlong local_20 [3];

    iVar2 = FUN_140884180(param_5);
    uVar4 = 0;
    if (iVar2 == 1) {
        lVar3 = (**(code **)(*param_5 + 0x20))(param_5,&local_28,local_20);
        if (lVar3 == 0) {
            uVar4 = 0;
            iVar2 = 0x35;
            lVar3 = 0;
        }
        else {
            bVar5 = local_20[0] == 0;
            if (!bVar5) {
                local_res24 = *(undefined *)((longlong)param_5 + 0x74);
                uVar4 = *(ulonglong *)(local_20[0] + 0x10);
                lVar1 = **(longlong **)(param_4 + 0x100);
                local_res20 = param_3;
                if ((*(byte *)((longlong)param_5 + 0x75) & 2) == 0) {
                    iVar2 = (**(code **)(lVar1 + 0x28))();
                }
                else {
                    iVar2 = (**(code **)(lVar1 + 0x30))
                            (*(longlong **)(param_4 + 0x100),local_28,&local_res20,uVar4,local_20[0]
                            );
                }
                FUN_140886e00(param_4,lVar3,iVar2);
                bVar5 = local_20[0] == 0;
            }
            uVar4 = uVar4 & 0xffffffffffffff00 | (ulonglong)!bVar5;
        }
        (**(code **)(*param_5 + 0x28))(param_5,lVar3,iVar2,uVar4);
    }
    else {
        (**(code **)(*param_5 + 0x28))(param_5,0,2);
    }
    return;
}



int FUN_140886d30(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    ulonglong uVar4;

    iVar2 = FUN_140884cc0();
    if (iVar2 == 1) {
        uVar4 = (ulonglong)(*(int *)(param_1 + 0xf4) + 1);
        plVar3 = (longlong *)FUN_1408819f0(DAT_140c111c0,uVar4 * 0x18);
        *(longlong **)(param_1 + 0x120) = plVar3;
        if (plVar3 == (longlong *)0x0) {
            return 2;
        }
        plVar1 = plVar3 + uVar4 * 3;
        do {
            if (plVar3 != (longlong *)0x0) {
                *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) & 0xfffffffb;
                *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0xb;
                *plVar3 = 0;
                plVar3[1] = 0;
                *(undefined4 *)(plVar3 + 2) = 0;
            }
            if (*(longlong *)(param_1 + 0x118) == 0) {
                *(longlong **)(param_1 + 0x118) = plVar3;
                *plVar3 = 0;
            }
            else {
                *plVar3 = *(longlong *)(param_1 + 0x118);
                *(longlong **)(param_1 + 0x118) = plVar3;
            }
            plVar3 = plVar3 + 3;
        } while (plVar3 < plVar1);
    }
    return iVar2;
}



void FUN_140886e00(longlong param_1,longlong param_2,int param_3)

{
    longlong lVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    lVar1 = *(longlong *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if ((param_3 != 1) && (*(int *)(lVar1 + 0x1c) != -1)) {
        FUN_140889e50(param_1 + 0xa8);
    }
    // WARNING: Could not recover jumptable at 0x000140886e62. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



void FUN_140886e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 extraout_XMM0_Qa;
    undefined4 local_res10 [6];

    lVar1 = FUN_1408853c0(param_3,local_res10);
    if (lVar1 != 0) {
        FUN_140886ac0(extraout_XMM0_Qa,param_2,local_res10[0],param_3,lVar1);
    }
    return;
}



longlong FUN_140887010(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (((*(byte *)(param_1 + 0x75) & 8) == 0) && ((*(byte *)(param_1 + 0x75) & 0x40) != 0)) {
        *param_2 = *(undefined8 *)(param_1 + 0x28);
        uVar1 = *(uint *)(param_1 + 0xa8);
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x108);
        uVar5 = (ulonglong)uVar1 + *(longlong *)(param_1 + 0x80);
        uVar4 = *(int *)(param_1 + 0x98) - uVar1;
        if (uVar6 < uVar4) {
            uVar4 = uVar6;
        }
        uVar6 = uVar4;
        if (((*(byte *)(param_1 + 0x75) & 2) == 0) &&
            (uVar2 = **(ulonglong **)(param_1 + 0x28), uVar2 < uVar4 + uVar5)) {
            if (uVar5 < uVar2) {
                uVar6 = (int)uVar2 - (int)uVar5;
            }
            else {
                uVar6 = 0;
            }
        }
        lVar3 = FUN_140886810(*(longlong *)(param_1 + 0x60),param_1,param_1 + 0x80,uVar1,uVar5,uVar4,
                              uVar6,param_3);
        if (lVar3 != 0) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + uVar6;
            *(longlong *)(param_1 + 0xb8) = lVar3;
            *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x70);
        }
    }
    else {
        lVar3 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return lVar3;
}



void FUN_140887120(longlong param_1,undefined4 param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 0x94) = param_2;
    uVar1 = FUN_140886440();
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    return;
}



void FUN_140887200(longlong param_1,longlong param_2,ulonglong param_3)

{
    ulonglong uVar1;

    uVar1 = param_3;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (param_2 != 0) {
        if (((int)(param_3 & 0xffffffff) == 1) && (((byte)*(undefined4 *)(param_2 + 0x14) & 7) != 2)) {
            uVar1 = param_3 & 0xff;
        }
        else {
            uVar1 = uVar1 & 0xffffffffffffff00;
        }
        FUN_140883ba0(param_1,param_2,uVar1);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    FUN_140886040(param_1,param_3 & 0xffffffff);
    // WARNING: Could not recover jumptable at 0x00014088727b. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
}



undefined8 * FUN_140887290(undefined8 *param_1)

{
    FUN_140883680();
    *param_1 = &PTR_FUN_1409a7e40;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    return param_1;
}



undefined8 * FUN_1408872e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7fd0;
    param_1[0xf] = &PTR_LAB_1409a8030;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    FUN_140883790();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140887340(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7df0;
    FUN_1408837e0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140887380(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a7e88;
    param_1[0xf] = &PTR_LAB_1409a7ec0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    FUN_140883820();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



bool FUN_1408873e0(longlong param_1)

{
    longlong lVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    lVar1 = *(longlong *)(param_1 + 0xd8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return lVar1 == 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140887520(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    uint7 uVar6;
    undefined8 *local_38;
    undefined8 *local_30;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;
    undefined8 uStack16;

    local_38 = (undefined8 *)0x0;
    local_30 = (undefined8 *)0x0;
    puVar5 = *(undefined8 **)(param_1 + 200);
    puVar3 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)0x0;
    while (puVar2 = puVar5, puVar2 != (undefined8 *)0x0) {
        lVar1 = *(longlong *)puVar2[1];
        if ((ulonglong)*(uint *)(puVar2 + 2) + lVar1 == param_2) {
            param_2 = (ulonglong)*(uint *)((longlong *)puVar2[1] + 3) + lVar1;
            if ((*(uint *)(param_1 + 0x94) != 0) && (*(uint *)(param_1 + 0x94) <= param_2)) {
                param_2 = (ulonglong)*(uint *)(param_1 + 0x90);
            }
            puVar5 = (undefined8 *)*puVar2;
            puVar3 = puVar2;
        }
        else {
            local_18 = (undefined8 *)*puVar2;
            if (puVar2 == *(undefined8 **)(param_1 + 200)) {
                *(undefined8 **)(param_1 + 200) = local_18;
            }
            else {
                *puVar3 = local_18;
            }
            if (puVar2 == *(undefined8 **)(param_1 + 0xd0)) {
                *(undefined8 **)(param_1 + 0xd0) = puVar3;
            }
            local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
            uStack16._0_4_ = SUB84(puVar3,0);
            uStack16._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
            puVar5 = local_18;
            local_38 = puVar2;
            uStack16 = puVar3;
            uStack28 = uStack16._4_4_;
            uStack32 = (undefined4)uStack16;
            uStack36 = local_18._4_4_;
            local_28 = (undefined4)local_18;
            if (puVar4 == (undefined8 *)0x0) {
                *puVar2 = 0;
                puVar4 = puVar2;
                local_30 = puVar2;
            }
            else {
                *puVar2 = puVar4;
                puVar4 = puVar2;
            }
        }
    }
    uVar6 = (uint7)((ulonglong)puVar3 >> 8);
    if ((*(char *)(*(longlong *)(param_1 + 0x60) + 0xf8) == '\0') &&
        (*(longlong *)(param_1 + 200) == 0)) {
        FUN_140887660(param_1,&local_38,CONCAT71(uVar6,1));
        return;
    }
    FUN_140887660(param_1,&local_38,(ulonglong)uVar6 << 8);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140887660(longlong param_1,longlong **param_2,char param_3)

{
    uint uVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    int iVar7;
    longlong *plVar8;
    bool bVar9;

    pplVar5 = (longlong **)*param_2;
    while (pplVar5 != (longlong **)0x0) {
        pplVar2 = (longlong **)*pplVar5;
        pplVar6 = pplVar2;
        if (pplVar5 == (longlong **)*param_2) {
            *param_2 = (longlong *)pplVar2;
            pplVar6 = _DAT_00000000;
        }
        _DAT_00000000 = pplVar6;
        if (pplVar5 == (longlong **)param_2[1]) {
            param_2[1] = (longlong *)0x0;
        }
        if ((*(uint *)((longlong)pplVar5 + 0x14) & 7) == 0) {
            plVar8 = pplVar5[1];
            *(uint *)((longlong)pplVar5 + 0x14) = *(uint *)((longlong)pplVar5 + 0x14) & 0xfffffffa | 2;
            lVar3 = *plVar8;
            uVar1 = *(uint *)(param_1 + 0x94);
            if ((lVar3 + (ulonglong)*(uint *)(pplVar5 + 2) < (ulonglong)uVar1) &&
                ((ulonglong)uVar1 < (ulonglong)*(uint *)(plVar8 + 3) + lVar3)) {
                iVar7 = uVar1 - (int)lVar3;
            }
            else {
                iVar7 = *(int *)(plVar8 + 3);
            }
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) - (iVar7 - *(uint *)(pplVar5 + 2));
            *(undefined4 *)(pplVar5 + 2) = *(undefined4 *)(pplVar5[1] + 3);
            if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
                *(longlong ***)(param_1 + 0xd8) = pplVar5;
                *pplVar5 = (longlong *)0x0;
                pplVar5 = pplVar2;
            }
            else {
                *pplVar5 = *(longlong **)(param_1 + 0xd8);
                *(longlong ***)(param_1 + 0xd8) = pplVar5;
                pplVar5 = pplVar2;
            }
        }
        else {
            FUN_140883ae0(param_1,pplVar5,0);
            pplVar5 = pplVar2;
        }
    }
    if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0xd8);
        bVar9 = true;
        do {
            plVar4 = (longlong *)*plVar8;
            FUN_140889f90(plVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x100),bVar9,param_3);
            plVar8 = plVar4;
            bVar9 = param_3 == '\0';
        } while (plVar4 != (longlong *)0x0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408877c0(longlong param_1,longlong **param_2,char param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong *plVar5;
    bool bVar6;

    pplVar3 = (longlong **)*param_2;
    while (pplVar3 != (longlong **)0x0) {
        pplVar1 = (longlong **)*pplVar3;
        pplVar4 = pplVar1;
        if (pplVar3 == (longlong **)*param_2) {
            *param_2 = (longlong *)pplVar1;
            pplVar4 = _DAT_00000000;
        }
        _DAT_00000000 = pplVar4;
        if (pplVar3 == (longlong **)param_2[1]) {
            param_2[1] = (longlong *)0x0;
        }
        if ((*(uint *)((longlong)pplVar3 + 0x14) & 7) == 0) {
            *(uint *)((longlong)pplVar3 + 0x14) = *(uint *)((longlong)pplVar3 + 0x14) & 0xfffffffa | 2;
            if (*(longlong **)(param_1 + 200) == (longlong *)0x0) {
                *(longlong ***)(param_1 + 200) = pplVar3;
                *pplVar3 = (longlong *)0x0;
                pplVar3 = pplVar1;
            }
            else {
                *pplVar3 = *(longlong **)(param_1 + 200);
                *(longlong ***)(param_1 + 200) = pplVar3;
                pplVar3 = pplVar1;
            }
        }
        else {
            FUN_140883ba0(param_1,pplVar3,0);
            pplVar3 = pplVar1;
        }
    }
    if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 200);
        bVar6 = true;
        do {
            plVar2 = (longlong *)*plVar5;
            FUN_140889f90(plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x100),bVar6,param_3);
            plVar5 = plVar2;
            bVar6 = param_3 == '\0';
        } while (plVar2 != (longlong *)0x0);
    }
    return;
}



int FUN_1408878e0(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    int iVar7;
    int iVar8;
    uint uVar9;

    puVar5 = *(undefined8 **)(param_1 + 0xb0);
    uVar9 = (uint)*(byte *)(param_1 + 0xc0);
    iVar7 = 0;
    do {
        iVar8 = 0;
        if (puVar5 == (undefined8 *)0x0) {
            LAB_14088795c:
            plVar6 = *(longlong **)(param_1 + 200);
            if (plVar6 != (longlong *)0x0) {
                uVar9 = *(uint *)(param_1 + 0x94);
                do {
                    plVar3 = (longlong *)plVar6[1];
                    plVar1 = plVar6 + 2;
                    lVar4 = *plVar3;
                    if ((lVar4 + (ulonglong)*(uint *)plVar1 < (ulonglong)uVar9) &&
                        ((ulonglong)uVar9 < (ulonglong)*(uint *)(plVar3 + 3) + lVar4)) {
                        iVar7 = uVar9 - (int)lVar4;
                    }
                    else {
                        iVar7 = *(int *)(plVar3 + 3);
                    }
                    plVar6 = (longlong *)*plVar6;
                    iVar8 = iVar8 + (iVar7 - *(uint *)plVar1);
                } while (plVar6 != (longlong *)0x0);
            }
            return iVar8;
        }
        if (uVar9 == 0) {
            iVar8 = 0;
            if (puVar5 != (undefined8 *)0x0) {
                uVar9 = *(uint *)(param_1 + 0x94);
                do {
                    plVar6 = (longlong *)puVar5[1];
                    uVar2 = *(uint *)(puVar5 + 2);
                    lVar4 = *plVar6;
                    if ((lVar4 + (ulonglong)uVar2 < (ulonglong)uVar9) &&
                        ((ulonglong)uVar9 < (ulonglong)*(uint *)(plVar6 + 3) + lVar4)) {
                        iVar8 = (uVar9 - uVar2) - (int)lVar4;
                    }
                    else {
                        iVar8 = *(int *)(plVar6 + 3) - uVar2;
                    }
                    puVar5 = (undefined8 *)*puVar5;
                    iVar7 = iVar7 + iVar8;
                    iVar8 = iVar7;
                } while (puVar5 != (undefined8 *)0x0);
            }
            goto LAB_14088795c;
        }
        puVar5 = (undefined8 *)*puVar5;
        uVar9 = uVar9 - 1;
    } while( true );
}



undefined8 *
FUN_1408879c0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              undefined8 param_5,longlong *param_6)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar4 = (undefined8 *)0x0;
    *param_6 = 0;
    puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,0xe0);
    if (puVar3 == (undefined8 *)0x0) {
        FUN_140883340(param_1,*(undefined *)(param_4 + 0xd));
        puVar3 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,0xe0);
        if (puVar3 != (undefined8 *)0x0) goto LAB_140887a37;
    }
    else {
        LAB_140887a37:
        FUN_1408835e0(puVar3);
        puVar3[0x19] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x1b] = 0;
        *puVar3 = &PTR_FUN_1409a80c0;
        puVar3[0xf] = &PTR_LAB_1409a8030;
        iVar2 = FUN_140884b70(puVar3,param_1,param_2,param_3,param_4,param_5,
                              *(undefined4 *)(param_1 + 0x108));
        uVar1 = DAT_140c111c0;
        if (iVar2 == 1) {
            FUN_140883cd0(param_1,puVar3);
            if (puVar3 != (undefined8 *)0x0) {
                puVar4 = puVar3 + 0xf;
            }
            goto LAB_140887ad5;
        }
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_140881720(uVar1,puVar3);
        }
    }
    puVar3 = (undefined8 *)0x0;
    LAB_140887ad5:
    *param_6 = (longlong)puVar4;
    return puVar3;
}



undefined8 *
FUN_140887b00(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
              uint param_6,byte param_7,undefined4 *param_8,longlong *param_9)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    longlong *plVar7;
    undefined4 uVar8;
    undefined8 *puVar9;
    ulonglong in_stack_ffffffffffffffb8;
    uint in_stack_ffffffffffffffc0;

    plVar7 = param_9;
    *param_9 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    puVar9 = *(undefined8 **)(param_1 + 0x118);
    if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x118) = *puVar9;
    }
    param_9 = (longlong *)0x0;
    if ((*(char *)(param_1 + 0xf8) == '\0') || (param_3 == -1)) {
        LAB_140887c16:
        FUN_140889870(param_1 + 0xa8);
        if (param_9 == (longlong *)0x0) {
            FUN_140884080(param_1,puVar9);
            FUN_1408893e0(param_1);
            puVar9 = (undefined8 *)0x0;
            goto LAB_140887d4c;
        }
        puVar5 = *(undefined8 **)(param_1 + 0x128);
        uVar8 = *param_8;
        uVar1 = *(undefined4 *)(param_1 + 0x108);
        uVar6 = *(undefined8 *)((longlong)param_9 + 8);
        if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x128) = *puVar5;
        }
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x28) + 8);
        iVar3 = *(int *)(param_2 + 0x70);
        *(uint *)(puVar5 + 9) = *(uint *)(puVar5 + 9) & 0xfffffffc;
        *(undefined4 *)(puVar5 + 2) = uVar1;
        puVar5[3] = uVar6;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar8;
        puVar5[1] = (ulonglong)(uint)(iVar2 * iVar3) + param_4;
        puVar5[5] = puVar5;
        puVar5[6] = 0;
        puVar5[8] = param_2;
        puVar5[4] = FUN_14088a0d0;
        *plVar7 = (longlong)puVar5;
        FUN_140889c10(param_1 + 0xa8,param_9,puVar5,param_3,param_4,*param_8);
        *(uint *)((longlong)puVar9 + 0x14) = *(uint *)((longlong)puVar9 + 0x14) & 0xfffffff8;
        puVar9[1] = param_9;
        *(undefined4 *)(puVar9 + 2) = 0;
        lVar4 = *plVar7;
        if (*(longlong *)(lVar4 + 0x38) == 0) {
            *(undefined8 **)(lVar4 + 0x38) = puVar9;
            puVar9[3] = 0;
        }
        else {
            puVar9[3] = *(longlong *)(lVar4 + 0x38);
            *(undefined8 **)(lVar4 + 0x38) = puVar9;
        }
    }
    else {
        uVar8 = FUN_1408896b0(param_1 + 0xa8,param_3,param_4,param_5,
                              in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_6,
                              in_stack_ffffffffffffffc0 & 0xffffff00 | (uint)param_7,param_8,&param_9);
        if (param_9 == (longlong *)0x0) goto LAB_140887c16;
        *(uint *)((longlong)puVar9 + 0x14) = *(uint *)((longlong)puVar9 + 0x14) & 0xfffffff8;
        puVar9[1] = param_9;
        *(undefined4 *)(puVar9 + 2) = uVar8;
        lVar4 = *(longlong *)((longlong)param_9 + 0x10);
        *plVar7 = lVar4;
        if (lVar4 != 0) {
            if (*(longlong *)(lVar4 + 0x38) == 0) {
                *(undefined8 **)(lVar4 + 0x38) = puVar9;
                puVar9[3] = 0;
            }
            else {
                puVar9[3] = *(longlong *)(lVar4 + 0x38);
                *(undefined8 **)(lVar4 + 0x38) = puVar9;
            }
        }
    }
    *puVar9 = 0;
    if (*(undefined8 **)(param_2 + 0xd0) == (undefined8 *)0x0) {
        *(undefined8 **)(param_2 + 200) = puVar9;
        *(undefined8 **)(param_2 + 0xd0) = puVar9;
        puVar9[4] = param_2;
    }
    else {
        **(undefined8 **)(param_2 + 0xd0) = puVar9;
        *(undefined8 **)(param_2 + 0xd0) = puVar9;
        puVar9[4] = param_2;
    }
    LAB_140887d4c:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return puVar9;
}



undefined8 *
FUN_140887d80(longlong param_1,longlong param_2,longlong *param_3,uint param_4,longlong param_5,
              undefined4 param_6,undefined4 param_7,longlong *param_8)

{
    int iVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 *puVar7;

    plVar5 = param_8;
    *param_8 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    puVar7 = *(undefined8 **)(param_1 + 0x118);
    if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x118) = *puVar7;
    }
    plVar6 = param_3;
    if ((param_3[2] == 0) ||
        (FUN_140889620(param_1 + 0xa8,param_3,&param_8), plVar6 = param_8, param_8 != (longlong *)0x0))
    {
        param_8 = plVar6;
        puVar3 = *(undefined8 **)(param_1 + 0x128);
        lVar4 = param_8[1];
        if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x128) = *puVar3;
        }
        iVar1 = *(int *)(*(longlong *)(param_2 + 0x28) + 8);
        iVar2 = *(int *)(param_2 + 0x70);
        *(uint *)(puVar3 + 9) = *(uint *)(puVar3 + 9) & 0xfffffffc;
        puVar3[3] = (ulonglong)param_4 + lVar4;
        puVar3[5] = puVar3;
        puVar3[6] = 0;
        puVar3[1] = (ulonglong)(uint)(iVar1 * iVar2) + param_5;
        puVar3[8] = param_2;
        *(undefined4 *)(puVar3 + 2) = param_6;
        *(undefined4 *)((longlong)puVar3 + 0x14) = param_7;
        puVar3[4] = FUN_14088a0d0;
        *plVar5 = (longlong)puVar3;
        param_8[2] = (longlong)puVar3;
        *(uint *)((longlong)puVar7 + 0x14) = *(uint *)((longlong)puVar7 + 0x14) & 0xfffffff8;
        puVar7[1] = param_8;
        *(uint *)(puVar7 + 2) = param_4;
        lVar4 = *plVar5;
        if (*(longlong *)(lVar4 + 0x38) == 0) {
            *(undefined8 **)(lVar4 + 0x38) = puVar7;
            puVar7[3] = 0;
        }
        else {
            puVar7[3] = *(longlong *)(lVar4 + 0x38);
            *(undefined8 **)(lVar4 + 0x38) = puVar7;
        }
        *puVar7 = 0;
        if (*(undefined8 **)(param_2 + 0xc0) == (undefined8 *)0x0) {
            *(undefined8 **)(param_2 + 0xb8) = puVar7;
        }
        else {
            **(undefined8 **)(param_2 + 0xc0) = puVar7;
        }
        *(undefined8 **)(param_2 + 0xc0) = puVar7;
        puVar7[4] = param_2;
    }
    else {
        FUN_140884080(param_1,puVar7);
        puVar7 = (undefined8 *)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return puVar7;
}



void FUN_140888020(longlong param_1)

{
    FUN_1408894e0();
    if (*(longlong *)(param_1 + 0x130) != 0) {
        *(undefined8 *)(param_1 + 0x128) = 0;
        FUN_140881720(DAT_140c111c0);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_140883ec0(param_1);
    return;
}



void FUN_140888070(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    *(byte *)(param_1 + -3) = *(byte *)(param_1 + -3) & 0xbf | 8;
    FUN_140885d10(param_1 + -0x78,3);
    if ((*(longlong *)(param_1 + 0x40) == 0) && (*(longlong *)(param_1 + 0x50) == 0)) {
        // WARNING: Could not recover jumptable at 0x0001408880c6. Too many branches
        // WARNING: Treating indirect jump as call
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
        return;
    }
    FUN_140889400(param_1 + -0x78);
    FUN_1408877c0(param_1 + -0x78,param_1 + 0x40,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    FUN_140889590(*(undefined8 *)(&DAT_ffffffffffffffe8 + param_1),param_1 + -0x78);
    return;
}



void FUN_140888110(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   longlong *param_5)

{
    int iVar1;
    longlong lVar2;
    undefined4 local_res20;
    undefined local_res24;
    longlong local_28;
    undefined8 local_20 [3];

    FUN_140889250();
    iVar1 = FUN_140884180(param_5);
    if (iVar1 != 1) {
        (**(code **)(*param_5 + 0x28))(param_5,0,2);
        return;
    }
    lVar2 = (**(code **)(*param_5 + 0x20))(param_5,local_20,&local_28);
    if (lVar2 == 0) {
        (**(code **)(*param_5 + 0x28))(param_5,0,0x35,0);
        return;
    }
    if (local_28 == 0) {
        (**(code **)(*param_5 + 0x28))(param_5,lVar2,1);
    }
    else {
        local_res24 = *(undefined *)((longlong)param_5 + 0x74);
        local_res20 = param_3;
        iVar1 = FUN_14088a060(local_28,*(undefined8 *)(param_4 + 0x100),local_20[0],&local_res20,
                              *(byte *)((longlong)param_5 + 0x75) >> 1 & 1);
        if (iVar1 != 1) {
            FUN_14088a0d0(local_28 + 8,iVar1);
        }
    }
    return;
}



void FUN_140888210(longlong param_1,uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    longlong *plVar10;
    longlong **pplVar11;
    bool bVar12;
    longlong **pplVar13;
    char cVar14;
    LPCRITICAL_SECTION lpCriticalSection;

    bVar1 = *(byte *)(param_1 + 0xc0);
    uVar6 = (ulonglong)bVar1;
    bVar12 = false;
    pplVar13 = (longlong **)0x0;
    if ((uint)bVar1 <= *(uint *)(param_1 + 0xa8) && *(uint *)(param_1 + 0xa8) != (uint)bVar1) {
        pplVar8 = *(longlong ***)(param_1 + 0xb0);
        pplVar11 = pplVar13;
        if (bVar1 != 0) {
            do {
                pplVar11 = pplVar8;
                pplVar8 = (longlong **)*pplVar11;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x60) + 0x18);
        EnterCriticalSection(lpCriticalSection);
        if (pplVar8 != (longlong **)0x0) {
            do {
                if ((bVar12) || ((uint)(*(int *)(pplVar8[1] + 3) - *(int *)(pplVar8 + 2)) < param_2)) {
                    pplVar9 = (longlong **)*pplVar8;
                    bVar12 = true;
                    if (pplVar8 == *(longlong ***)(param_1 + 0xb0)) {
                        *(longlong ***)(param_1 + 0xb0) = pplVar9;
                    }
                    else {
                        *pplVar11 = (longlong *)pplVar9;
                    }
                    if (pplVar8 == *(longlong ***)(param_1 + 0xb8)) {
                        *(longlong ***)(param_1 + 0xb8) = pplVar11;
                    }
                    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
                    FUN_140883fe0(param_1,pplVar8);
                }
                else {
                    pplVar9 = (longlong **)*pplVar8;
                    pplVar11 = pplVar8;
                }
                pplVar8 = pplVar9;
            } while (pplVar9 != (longlong **)0x0);
            if (bVar12) {
                FUN_1408893c0(*(undefined8 *)(param_1 + 0x60));
            }
        }
        LeaveCriticalSection(lpCriticalSection);
        if ((bVar12) && (*(char *)(*(longlong *)(param_1 + 0x60) + 0xf8) == '\0')) {
            cVar14 = '\x01';
            goto LAB_140888332;
        }
    }
    cVar14 = '\0';
    LAB_140888332:
    pplVar11 = *(longlong ***)(param_1 + 200);
    pplVar8 = *(longlong ***)(param_1 + 200);
    if (bVar12) {
        joined_r0x0001408883c4:
        while (pplVar8 != (longlong **)0x0) {
            pplVar11 = (longlong **)*pplVar8;
            if (pplVar8 == *(longlong ***)(param_1 + 200)) {
                *(longlong ***)(param_1 + 200) = pplVar11;
            }
            else {
                *pplVar13 = (longlong *)pplVar11;
            }
            if (pplVar8 == *(longlong ***)(param_1 + 0xd0)) {
                *(longlong ***)(param_1 + 0xd0) = pplVar13;
            }
            if ((*(uint *)((longlong)pplVar8 + 0x14) & 7) == 0) {
                plVar10 = pplVar8[1];
                uVar2 = *(uint *)(pplVar8 + 2);
                *(uint *)((longlong)pplVar8 + 0x14) = *(uint *)((longlong)pplVar8 + 0x14) & 0xfffffffa | 2;
                lVar5 = *plVar10;
                uVar3 = *(uint *)(param_1 + 0x94);
                if ((lVar5 + (ulonglong)uVar2 < (ulonglong)uVar3) &&
                    ((ulonglong)uVar3 < (ulonglong)*(uint *)(plVar10 + 3) + lVar5)) {
                    iVar7 = (uVar3 - uVar2) - (int)lVar5;
                }
                else {
                    iVar7 = *(int *)(plVar10 + 3) - uVar2;
                }
                *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) - iVar7;
                *(undefined4 *)(pplVar8 + 2) = *(undefined4 *)(pplVar8[1] + 3);
                if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
                    *(longlong ***)(param_1 + 0xd8) = pplVar8;
                    *pplVar8 = (longlong *)0x0;
                    pplVar8 = pplVar11;
                }
                else {
                    *pplVar8 = *(longlong **)(param_1 + 0xd8);
                    *(longlong ***)(param_1 + 0xd8) = pplVar8;
                    pplVar8 = pplVar11;
                }
            }
            else {
                FUN_140883ae0(param_1,pplVar8,0);
                pplVar8 = pplVar11;
            }
        }
    }
    else {
        while (pplVar8 = pplVar11, pplVar8 != (longlong **)0x0) {
            if ((uint)(*(int *)(pplVar8[1] + 3) - *(int *)(pplVar8 + 2)) < param_2)
                goto joined_r0x0001408883c4;
            pplVar13 = pplVar8;
            pplVar11 = (longlong **)*pplVar8;
        }
    }
    if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_1 + 0xd8);
        bVar12 = true;
        do {
            plVar4 = (longlong *)*plVar10;
            FUN_140889f90(plVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x100),bVar12,cVar14);
            plVar10 = plVar4;
            bVar12 = cVar14 == '\0';
        } while (plVar4 != (longlong *)0x0);
    }
    return;
}



longlong FUN_1408884b0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 200);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x14) & 7) == 0)) {
        lVar1 = 0;
    }
    return lVar1;
}



longlong FUN_1408884d0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0xb8);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x14) & 7) == 0)) {
        lVar1 = 0;
    }
    return lVar1;
}



int FUN_1408884f0(longlong param_1)

{
    int iVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar1 = (*(int *)(param_1 + 0x38) << 0x1c) >> 0x1c;
    }
    else {
        iVar1 = 2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + -0x48));
    return iVar1;
}



int FUN_140888580(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong *plVar5;

    if (*(int *)(param_2 + 0x2c) == 0) {
        return 0x1f;
    }
    iVar1 = FUN_140884cc0();
    if (iVar1 == 1) {
        plVar2 = (longlong *)FUN_1408819f0(DAT_140c111c0,(ulonglong)*(uint *)(param_2 + 0x2c) * 0x50);
        *(longlong **)(param_1 + 0x130) = plVar2;
        if (plVar2 != (longlong *)0x0) {
            plVar4 = plVar2 + (ulonglong)*(uint *)(param_2 + 0x2c) * 10;
            do {
                if (plVar2 != (longlong *)0x0) {
                    *plVar2 = 0;
                    plVar2[7] = 0;
                }
                if (*(longlong *)(param_1 + 0x128) == 0) {
                    *(longlong **)(param_1 + 0x128) = plVar2;
                    *plVar2 = 0;
                }
                else {
                    *plVar2 = *(longlong *)(param_1 + 0x128);
                    *(longlong **)(param_1 + 0x128) = plVar2;
                }
                plVar2 = plVar2 + 10;
            } while (plVar2 < plVar4);
            uVar3 = (ulonglong)(uint)(*(int *)(param_1 + 0xf4) + *(int *)(param_2 + 0x2c));
            plVar2 = (longlong *)FUN_1408819f0(DAT_140c111c0,uVar3 * 0x28);
            *(longlong **)(param_1 + 0x120) = plVar2;
            if (plVar2 != (longlong *)0x0) {
                plVar4 = plVar2;
                do {
                    if (plVar4 != (longlong *)0x0) {
                        *(uint *)((longlong)plVar4 + 0x14) = *(uint *)((longlong)plVar4 + 0x14) & 0xfffffffb;
                        *(uint *)((longlong)plVar4 + 0x14) = *(uint *)((longlong)plVar4 + 0x14) | 0xb;
                        *plVar4 = 0;
                        plVar4[1] = 0;
                        *(undefined4 *)(plVar4 + 2) = 0;
                        plVar4[3] = 0;
                        plVar4[4] = 0;
                    }
                    plVar5 = plVar4 + 5;
                    if (*(longlong *)(param_1 + 0x118) == 0) {
                        *(longlong **)(param_1 + 0x118) = plVar4;
                        *plVar4 = 0;
                    }
                    else {
                        *plVar4 = *(longlong *)(param_1 + 0x118);
                        *(longlong **)(param_1 + 0x118) = plVar4;
                    }
                    plVar4 = plVar5;
                } while (plVar5 < plVar2 + uVar3 * 5);
                return 1;
            }
        }
        iVar1 = 2;
    }
    return iVar1;
}



void FUN_1408886d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 extraout_XMM0_Qa;
    undefined4 local_res10 [6];

    lVar1 = FUN_1408853c0(param_3,local_res10);
    if (lVar1 != 0) {
        FUN_140888110(extraout_XMM0_Qa,param_2,local_res10[0],param_3,lVar1);
    }
    return;
}



void FUN_140888700(longlong param_1,longlong **param_2,char param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
        pplVar1 = *(longlong ***)(param_1 + 0xd8);
        pplVar3 = pplVar1;
        pplVar5 = (longlong **)0x0;
        if (pplVar1 != (longlong **)0x0) {
            while (pplVar4 = pplVar3, pplVar4 != param_2) {
                pplVar3 = (longlong **)*pplVar4;
                pplVar5 = pplVar4;
                if ((longlong **)*pplVar4 == (longlong **)0x0) {
                    return;
                }
            }
            if (pplVar4 == pplVar1) {
                *(longlong **)(param_1 + 0xd8) = *pplVar4;
                return;
            }
            *pplVar5 = *pplVar4;
        }
    }
    else if ((param_3 == '\0') && (pplVar1 = *(longlong ***)(param_1 + 200), pplVar1 != param_2)) {
        pplVar3 = pplVar1;
        pplVar5 = (longlong **)0x0;
        if (pplVar1 != (longlong **)0x0) {
            while (pplVar4 = pplVar3, pplVar4 != param_2) {
                pplVar3 = (longlong **)*pplVar4;
                pplVar5 = pplVar4;
                if ((longlong **)*pplVar4 == (longlong **)0x0) {
                    return;
                }
            }
            if (pplVar4 == pplVar1) {
                *(longlong **)(param_1 + 200) = *pplVar4;
            }
            else {
                *pplVar5 = *pplVar4;
            }
            if (pplVar4 == *(longlong ***)(param_1 + 0xd0)) {
                *(longlong ***)(param_1 + 0xd0) = pplVar5;
                return;
            }
        }
    }
    else if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
        lVar2 = **(longlong **)(param_1 + 200);
        if (lVar2 == 0) {
            *(undefined8 *)(param_1 + 200) = 0;
            *(undefined8 *)(param_1 + 0xd0) = 0;
            return;
        }
        *(longlong *)(param_1 + 200) = lVar2;
        return;
    }
    return;
}



void FUN_1408887d0(longlong param_1,longlong **param_2,char param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong **pplVar5;

    if (((byte)*(undefined4 *)((longlong)param_2 + 0x14) & 7) == 2) {
        pplVar1 = *(longlong ***)(param_1 + 200);
        pplVar3 = pplVar1;
        pplVar5 = (longlong **)0x0;
        if (pplVar1 != (longlong **)0x0) {
            while (pplVar4 = pplVar3, pplVar4 != param_2) {
                pplVar3 = (longlong **)*pplVar4;
                pplVar5 = pplVar4;
                if ((longlong **)*pplVar4 == (longlong **)0x0) {
                    return;
                }
            }
            if (pplVar4 == pplVar1) {
                *(longlong **)(param_1 + 200) = *pplVar4;
                return;
            }
            *pplVar5 = *pplVar4;
        }
    }
    else if ((param_3 == '\0') && (pplVar1 = *(longlong ***)(param_1 + 0xb8), pplVar1 != param_2)) {
        pplVar3 = pplVar1;
        pplVar5 = (longlong **)0x0;
        if (pplVar1 != (longlong **)0x0) {
            while (pplVar4 = pplVar3, pplVar4 != param_2) {
                pplVar3 = (longlong **)*pplVar4;
                pplVar5 = pplVar4;
                if ((longlong **)*pplVar4 == (longlong **)0x0) {
                    return;
                }
            }
            if (pplVar4 == pplVar1) {
                *(longlong **)(param_1 + 0xb8) = *pplVar4;
            }
            else {
                *pplVar5 = *pplVar4;
            }
            if (pplVar4 == *(longlong ***)(param_1 + 0xc0)) {
                *(longlong ***)(param_1 + 0xc0) = pplVar5;
                return;
            }
        }
    }
    else if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
        lVar2 = **(longlong **)(param_1 + 0xb8);
        if (lVar2 == 0) {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined8 *)(param_1 + 0xc0) = 0;
            return;
        }
        *(longlong *)(param_1 + 0xb8) = lVar2;
        return;
    }
    return;
}



longlong FUN_1408889f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
    ulonglong uVar1;
    bool bVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    undefined8 local_res8;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (((*(byte *)(param_1 + 0x75) & 8) == 0) && ((*(byte *)(param_1 + 0x75) & 0x40) != 0)) {
        *param_2 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = *(int *)(param_1 + 0x98) - *(uint *)(param_1 + 0xa8);
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x108);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0xa8) + *(longlong *)(param_1 + 0x80);
        if (uVar6 < uVar4) {
            uVar4 = uVar6;
        }
        bVar2 = false;
        uVar6 = uVar4;
        if (((*(byte *)(param_1 + 0x75) & 2) == 0) &&
            (uVar1 = **(ulonglong **)(param_1 + 0x28), uVar1 < uVar4 + uVar5)) {
            bVar2 = true;
            if (uVar5 < uVar1) {
                uVar6 = (int)uVar1 - (int)uVar5;
            }
            else {
                uVar6 = 0;
            }
        }
        lVar3 = FUN_140887d80(*(longlong *)(param_1 + 0x60),param_1,(longlong *)(param_1 + 0x80),
                              *(undefined4 *)(param_1 + 0xa8),uVar5,uVar4,uVar6,&local_res8);
        if (lVar3 != 0) {
            *param_3 = local_res8;
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + uVar6;
            if ((bVar2) || (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0x98))) {
                FUN_140885d10(param_1,0);
            }
            *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x70);
            goto LAB_140888af8;
        }
    }
    lVar3 = 0;
    LAB_140888af8:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return lVar3;
}



void FUN_140888b20(longlong param_1,undefined4 param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 0x94) = param_2;
    uVar1 = FUN_1408878e0();
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    return;
}



void FUN_140888d40(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar5 = *(undefined8 **)(param_1 + 200);
    if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar5 + 0x14) & 7) != 0)) {
        do {
            if (((byte)*(undefined4 *)((longlong)puVar5 + 0x14) & 7) == 2) {
                puVar4 = *(undefined8 **)(param_1 + 0xd8);
                puVar3 = (undefined8 *)0x0;
                while (puVar2 = puVar4, puVar2 != (undefined8 *)0x0) {
                    if (puVar2 == puVar5) {
                        if (puVar2 == *(undefined8 **)(param_1 + 0xd8)) {
                            *(undefined8 *)(param_1 + 0xd8) = *puVar2;
                        }
                        else {
                            *puVar3 = *puVar2;
                        }
                        break;
                    }
                    puVar3 = puVar2;
                    puVar4 = (undefined8 *)*puVar2;
                }
            }
            else if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
                lVar1 = **(longlong **)(param_1 + 200);
                if (lVar1 == 0) {
                    *(undefined8 *)(param_1 + 200) = 0;
                    *(undefined8 *)(param_1 + 0xd0) = 0;
                }
                else {
                    *(longlong *)(param_1 + 200) = lVar1;
                }
            }
            FUN_140883ae0(param_1,puVar5,1);
            FUN_1408890e0(*(undefined8 *)(param_1 + 0x60));
            puVar5 = (undefined8 *)FUN_1408884b0(param_1);
        } while (puVar5 != (undefined8 *)0x0);
    }
    return;
}



void FUN_140888e20(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar5 = *(undefined8 **)(param_1 + 0xb8);
    if ((puVar5 != (undefined8 *)0x0) && ((*(byte *)((longlong)puVar5 + 0x14) & 7) != 0)) {
        do {
            if (((byte)*(undefined4 *)((longlong)puVar5 + 0x14) & 7) == 2) {
                puVar4 = *(undefined8 **)(param_1 + 200);
                puVar3 = (undefined8 *)0x0;
                while (puVar2 = puVar4, puVar2 != (undefined8 *)0x0) {
                    if (puVar2 == puVar5) {
                        if (puVar2 == *(undefined8 **)(param_1 + 200)) {
                            *(undefined8 *)(param_1 + 200) = *puVar2;
                        }
                        else {
                            *puVar3 = *puVar2;
                        }
                        break;
                    }
                    puVar3 = puVar2;
                    puVar4 = (undefined8 *)*puVar2;
                }
            }
            else if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
                lVar1 = **(longlong **)(param_1 + 0xb8);
                if (lVar1 == 0) {
                    *(undefined8 *)(param_1 + 0xb8) = 0;
                    *(undefined8 *)(param_1 + 0xc0) = 0;
                }
                else {
                    *(longlong *)(param_1 + 0xb8) = lVar1;
                }
            }
            FUN_140883ba0(param_1,puVar5,1);
            FUN_1408890e0(*(undefined8 *)(param_1 + 0x60));
            puVar5 = (undefined8 *)FUN_1408884d0(param_1);
        } while (puVar5 != (undefined8 *)0x0);
    }
    return;
}



undefined8 * FUN_140888f00(undefined8 *param_1)

{
    param_1[1] = 0;
    *(undefined *)(param_1 + 2) = 0;
    *param_1 = &PTR_FUN_1409a8120;
    return param_1;
}



undefined8 * FUN_140888f20(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8128;
    param_1[2] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    return param_1;
}



void FUN_140888fa0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8128;
    // WARNING: Could not recover jumptable at 0x000140888faf. Too many branches
    // WARNING: Treating indirect jump as call
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



undefined8 * FUN_140888fc0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a8120;
    if ((HANDLE)param_1[1] != (HANDLE)0x0) {
        CloseHandle((HANDLE)param_1[1]);
        param_1[1] = 0;
    }
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_140889010(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a8128;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_140889050(longlong param_1)

{
    int *piVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    piVar1 = (int *)(param_1 + 100);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        ResetEvent(*(HANDLE *)(param_1 + 0x58));
    }
    // WARNING: Could not recover jumptable at 0x000140889084. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



void FUN_140889090(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if ((*(int *)(param_1 + 100) == 1) && (*(char *)(param_1 + 0x68) == '\0')) {
        SetEvent(*(HANDLE *)(param_1 + 0x58));
    }
    // WARNING: Could not recover jumptable at 0x0001408890ce. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



void FUN_1408890e0(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 8) + -1) {
        SetEvent(*(HANDLE *)(param_1 + 0x48));
    }
    // WARNING: Could not recover jumptable at 0x00014088911c. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



undefined8 FUN_140889130(longlong *param_1)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    DWORD DVar4;
    HANDLE local_38;
    longlong local_30;
    HANDLE local_28;
    longlong local_20;
    longlong local_18;

    local_20 = param_1[10];
    local_38 = (HANDLE)param_1[8];
    local_18 = param_1[0xb];
    local_30 = param_1[9];
    local_28 = local_38;
    (**(code **)(*param_1 + 0x18))();
    LAB_140889180:
    do {
        DVar4 = WaitForMultipleObjectsEx(2,&local_38,0,0xffffffff,1);
        if (DVar4 != 0) {
            DVar4 = WaitForMultipleObjectsEx(3,&local_28,0,0xffffffff,1);
            if (DVar4 != 0) {
                if (2 < DVar4) {
                    if (DVar4 == 0xc0) goto LAB_140889180;
                    if (DVar4 != 0x102) {
                        return 1;
                    }
                }
                EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                uVar1 = *(uint *)(param_1 + 1);
                uVar2 = *(uint *)((longlong)param_1 + 0x6c);
                LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
                if (uVar2 < uVar1) {
                    (**(code **)(*param_1 + 8))();
                }
                goto LAB_140889180;
            }
        }
        cVar3 = (**(code **)(*param_1 + 0x10))();
        if (cVar3 != '\0') {
            return 0;
        }
        SleepEx(100,1);
    } while( true );
}



void FUN_140889250(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x6c)) {
        ResetEvent(*(HANDLE *)(param_1 + 0x48));
    }
    // WARNING: Could not recover jumptable at 0x00014088928a. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



undefined8 FUN_1408892a0(LPVOID param_1,int *param_2)

{
    BOOL BVar1;
    HANDLE pvVar2;
    DWORD_PTR DVar3;
    undefined8 uVar4;
    DWORD local_res8 [2];

    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x50) = pvVar2;
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x58) = pvVar2;
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x40) = pvVar2;
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)param_1 + 0x48) = pvVar2;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)(uint)param_2[2],FUN_140889130,param_1
            ,0,local_res8);
    *(HANDLE *)((longlong)param_1 + 0x10) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
        FUN_14083e140(local_res8[0],"AK::IOThread");
        BVar1 = SetThreadPriority(*(HANDLE *)((longlong)param_1 + 0x10),*param_2);
        if (BVar1 != 0) {
            if (param_2[1] == 0) goto LAB_140889389;
            DVar3 = SetThreadAffinityMask
                    (*(HANDLE *)((longlong)param_1 + 0x10),(ulonglong)(uint)param_2[1]);
            if (DVar3 != 0) goto LAB_140889389;
        }
        CloseHandle(*(HANDLE *)((longlong)param_1 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = 0;
    LAB_140889389:
    if ((((*(longlong *)((longlong)param_1 + 0x10) == 0) ||
          (*(longlong *)((longlong)param_1 + 0x40) == 0)) ||
         (*(longlong *)((longlong)param_1 + 0x50) == 0)) ||
        (uVar4 = 1, *(longlong *)((longlong)param_1 + 0x58) == 0)) {
        uVar4 = 2;
    }
    return uVar4;
}



void FUN_1408893c0(longlong param_1)

{
    if ((*(char *)(param_1 + 0x68) != '\0') &&
        (*(undefined *)(param_1 + 0x68) = 0, 0 < *(int *)(param_1 + 100))) {
        // WARNING: Could not recover jumptable at 0x0001408893d4. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(*(HANDLE *)(param_1 + 0x58));
        return;
    }
    return;
}



void FUN_1408893e0(longlong param_1)

{
    *(undefined *)(param_1 + 0x68) = 1;
    if (0 < *(int *)(param_1 + 100)) {
        // WARNING: Could not recover jumptable at 0x0001408893ee. Too many branches
        // WARNING: Treating indirect jump as call
        ResetEvent(*(HANDLE *)(param_1 + 0x58));
        return;
    }
    return;
}



void FUN_140889400(longlong param_1)

{
    HANDLE pvVar1;

    if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
        ResetEvent(*(HANDLE *)(param_1 + 8));
        *(undefined *)(param_1 + 0x10) = 1;
        return;
    }
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(undefined *)(param_1 + 0x10) = 1;
    *(HANDLE *)(param_1 + 8) = pvVar1;
    return;
}



void FUN_140889450(undefined8 param_1,longlong param_2)

{
    *(undefined *)(param_2 + 0x10) = 0;
    // WARNING: Could not recover jumptable at 0x000140889458. Too many branches
    // WARNING: Treating indirect jump as call
    SetEvent(*(HANDLE *)(param_2 + 8));
    return;
}



void FUN_140889460(longlong param_1)

{
    int *piVar1;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    piVar1 = (int *)(param_1 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        ResetEvent(*(HANDLE *)(param_1 + 0x50));
    }
    // WARNING: Could not recover jumptable at 0x000140889494. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



void FUN_1408894a0(longlong param_1)

{
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    if (*(int *)(param_1 + 0x60) == 1) {
        SetEvent(*(HANDLE *)(param_1 + 0x50));
    }
    // WARNING: Could not recover jumptable at 0x0001408894d8. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
}



void FUN_1408894e0(longlong param_1)

{
    if (*(HANDLE *)(param_1 + 0x40) != (HANDLE)0x0) {
        SetEvent(*(HANDLE *)(param_1 + 0x40));
        if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
            WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
            CloseHandle(*(HANDLE *)(param_1 + 0x10));
            *(undefined8 *)(param_1 + 0x10) = 0;
        }
        CloseHandle(*(HANDLE *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x50) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(HANDLE *)(param_1 + 0x58) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *(undefined4 *)(param_1 + 100) = 0;
    if (*(HANDLE *)(param_1 + 0x48) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x48) = 0;
    }
    return;
}



void FUN_140889590(undefined8 param_1,longlong param_2)

{
    // WARNING: Could not recover jumptable at 0x000140889597. Too many branches
    // WARNING: Treating indirect jump as call
    WaitForSingleObject(*(HANDLE *)(param_2 + 8),0xffffffff);
    return;
}



undefined8 * FUN_1408895a0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8158;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    return param_1;
}



void FUN_1408895e0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8158;
    return;
}



undefined8 * FUN_1408895f0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a8158;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_140889620(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c111c0);
    *param_3 = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
        uVar1 = param_2[1];
        *(undefined4 *)((longlong)puVar2 + 0x1c) = 0xffffffff;
        *puVar2 = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        puVar2[1] = uVar1;
        *(undefined2 *)(puVar2 + 4) = 0;
        *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
        *(undefined8 *)*param_3 = *param_2;
    }
    return;
}



void FUN_140889690(undefined8 param_1,longlong param_2,longlong param_3)

{
    if (param_3 != param_2) {
        FUN_140881720(DAT_140c111c0,param_3);
        return;
    }
    return;
}



uint FUN_1408896b0(longlong param_1,uint param_2,ulonglong param_3,uint param_4,uint param_5,
                   char param_6,uint *param_7,ulonglong **param_8)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined auVar4 [16];
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    uint uVar11;

    *param_8 = (ulonglong *)0x0;
    if (*(int *)(param_1 + 0x4c) == *(int *)(param_1 + 0x18)) {
        return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x10);
    iVar10 = 0;
    iVar9 = (int)(*(longlong *)(param_1 + 0x38) - lVar2 >> 1) + -1;
    uVar6 = (ulonglong)(uint)(iVar9 / 2);
    do {
        uVar7 = uVar6;
        uVar8 = iVar10 + (iVar9 - iVar10) / 2;
        uVar6 = (ulonglong)uVar8;
        uVar5 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 2);
        uVar11 = *(uint *)(lVar3 + 0x1c + uVar5 * 0x28);
        if (param_2 < uVar11) {
            LAB_140889769:
            iVar9 = uVar8 - 1;
        }
        else {
            if (param_2 <= uVar11) {
                uVar5 = *(ulonglong *)(lVar3 + uVar5 * 0x28);
                if (uVar5 < param_3) goto LAB_140889769;
                if (uVar5 <= param_3) {
                    puVar1 = (ulonglong *)(lVar3 + (ulonglong)*(ushort *)(lVar2 + uVar6 * 2) * 0x28);
                    if (puVar1 != (ulonglong *)0x0) {
                        uVar6 = ((ulonglong)*param_7 - (ulonglong)param_4) + *puVar1;
                        goto joined_r0x000140889841;
                    }
                    goto LAB_140889772;
                }
            }
            iVar10 = uVar8 + 1;
        }
        if (iVar9 < iVar10) {
            LAB_140889772:
            uVar6 = (ulonglong)*(ushort *)(lVar2 + uVar7 * 2);
            puVar1 = (ulonglong *)(lVar3 + uVar6 * 0x28);
            if ((param_2 == *(uint *)(lVar3 + 0x1c + uVar6 * 0x28)) && (*puVar1 <= param_3)) {
                uVar6 = ((ulonglong)*(uint *)(puVar1 + 3) - (ulonglong)param_4) + *puVar1;
                joined_r0x000140889841:
                if (param_3 <= uVar6) {
                    uVar8 = (int)param_3 - *(int *)puVar1;
                    uVar11 = *(int *)(puVar1 + 3) - uVar8;
                    if (((uVar11 <= *param_7) &&
                         (((uVar11 % param_5 == 0 || ((param_6 != '\0' && (uVar11 == *param_7)))) &&
                           (auVar4 = ZEXT816(puVar1[1] + (ulonglong)uVar8) % ZEXT416(param_5),
                                   SUB168(auVar4,0) == 0)))) && (param_4 <= uVar11)) {
                        *param_7 = uVar11;
                        if (*(short *)(puVar1 + 4) == SUB162(auVar4,0)) {
                            FUN_140889bb0(param_1 + 0x18,puVar1);
                            puVar1[2] = 0;
                        }
                        *(short *)(puVar1 + 4) = *(short *)(puVar1 + 4) + 1;
                        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
                        *param_8 = puVar1;
                        return uVar8;
                    }
                }
            }
            return 0;
        }
    } while( true );
}



void FUN_140889870(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = *(longlong *)(param_1 + 0x20);
    *param_2 = lVar1;
    if (lVar1 != 0) {
        *(short *)(lVar1 + 0x20) = *(short *)(lVar1 + 0x20) + 1;
        lVar1 = *(longlong *)(param_1 + 0x20);
        if (lVar1 != 0) {
            if (*(longlong *)(lVar1 + 0x10) == 0) {
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
                *(undefined8 *)(param_1 + 0x20) = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
                *(undefined8 *)(*param_2 + 0x10) = 0;
                return;
            }
            uVar2 = *(undefined8 *)(lVar1 + 0x10);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(undefined8 *)(param_1 + 0x20) = uVar2;
        }
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        *(undefined8 *)(*param_2 + 0x10) = 0;
    }
    return;
}



undefined8 FUN_1408898c0(longlong param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    ushort *puVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    ushort uVar10;
    int iVar11;

    uVar3 = (ulonglong)*(uint *)(param_2 + 1) / (ulonglong)*(uint *)((longlong)param_2 + 0x14);
    uVar4 = (uint)uVar3;
    iVar11 = *(uint *)((longlong)param_2 + 0x14) * uVar4;
    if (iVar11 != 0) {
        uVar5 = FUN_140881bc0(*param_2,iVar11,iVar11,*(uint *)(param_2 + 2) | 8,
                              *(undefined4 *)((longlong)param_2 + 0xc));
        *(undefined4 *)(param_1 + 0x48) = uVar5;
    }
    if (*(int *)(param_1 + 0x48) == -1) {
        if (*(int *)(param_2 + 1) != 0) {
            return 2;
        }
    }
    else {
        FUN_14001d310(*(int *)(param_1 + 0x48),0);
        uVar7 = FUN_140881790(*(undefined4 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 8) = uVar7;
        puVar8 = (undefined8 *)FUN_1408819f0(DAT_140c111c0,uVar3 * 0x28);
        *(undefined8 **)(param_1 + 0x10) = puVar8;
        if (puVar8 == (undefined8 *)0x0) {
            return 2;
        }
        lVar9 = *(longlong *)(param_1 + 8);
        puVar1 = puVar8 + uVar3 * 5;
        uVar10 = 0;
        do {
            if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
                puVar8[1] = lVar9;
                puVar8[2] = 0;
                *(undefined4 *)(puVar8 + 3) = 0;
                *(undefined4 *)((longlong)puVar8 + 0x1c) = 0xffffffff;
                *(undefined2 *)(puVar8 + 4) = 0;
            }
            uVar6 = *(uint *)((longlong)param_2 + 0x14);
            puVar8[2] = 0;
            lVar9 = lVar9 + (ulonglong)uVar6;
            if (*(longlong *)(param_1 + 0x28) == 0) {
                *(undefined8 **)(param_1 + 0x20) = puVar8;
            }
            else {
                *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x10) = puVar8;
            }
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            *(undefined8 **)(param_1 + 0x28) = puVar8;
            puVar8 = puVar8 + 5;
        } while (puVar8 < puVar1);
        if (uVar4 != 0) {
            lVar9 = FUN_1408819f0(DAT_140c111c0,uVar3 * 2);
            *(longlong *)(param_1 + 0x30) = lVar9;
            *(longlong *)(param_1 + 0x38) = lVar9;
            if (lVar9 == 0) {
                return 2;
            }
            *(uint *)(param_1 + 0x40) = uVar4;
            if (uVar4 != 0) {
                do {
                    puVar2 = *(ushort **)(param_1 + 0x38);
                    if (((uint)((longlong)puVar2 - *(longlong *)(param_1 + 0x30) >> 1) <
                         *(uint *)(param_1 + 0x40)) &&
                        (*(ushort **)(param_1 + 0x38) = puVar2 + 1, puVar2 != (ushort *)0x0)) {
                        *puVar2 = uVar10;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar4);
            }
        }
        uVar6 = (uint)(longlong)((float)uVar3 * *(float *)(param_2 + 6) + 0.5);
        if (uVar6 < uVar4) {
            uVar6 = uVar4;
        }
        *(uint *)(param_1 + 0x4c) = uVar6;
        *(bool *)(param_1 + 0x50) = 1.0 < *(float *)(param_2 + 6);
    }
    return 1;
}



void FUN_140889a90(longlong *param_1,uint param_2,uint param_3)

{
    undefined2 *puVar1;
    undefined2 uVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;

    uVar5 = (ulonglong)param_3;
    uVar4 = (ulonglong)param_2;
    lVar6 = uVar4 * 2;
    uVar2 = *(undefined2 *)(lVar6 + *param_1);
    if (param_2 < param_3) {
        param_3 = param_3 - 1;
        uVar5 = (ulonglong)param_3;
        param_2 = param_2 + 1;
        if (param_2 <= param_3) {
            lVar6 = (ulonglong)param_2 * 2;
            do {
                uVar3 = param_2 - 1;
                param_2 = param_2 + 1;
                puVar1 = (undefined2 *)(lVar6 + *param_1);
                lVar6 = lVar6 + 2;
                *(undefined2 *)(*param_1 + (ulonglong)uVar3 * 2) = *puVar1;
            } while (param_2 <= param_3);
        }
    }
    else if (param_3 < param_2) {
        do {
            uVar3 = (int)uVar4 - 1;
            uVar4 = (ulonglong)uVar3;
            *(undefined2 *)(lVar6 + *param_1) = *(undefined2 *)(*param_1 + uVar4 * 2);
            lVar6 = lVar6 + -2;
        } while (param_3 < uVar3);
        *(undefined2 *)(*param_1 + uVar5 * 2) = uVar2;
        return;
    }
    *(undefined2 *)(*param_1 + uVar5 * 2) = uVar2;
    return;
}



short FUN_140889b30(longlong param_1,longlong param_2)

{
    short sVar1;

    *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + -1;
    sVar1 = *(short *)(param_2 + 0x20);
    if (sVar1 == 0) {
        if (*(int *)(param_2 + 0x1c) != -1) {
            *(undefined8 *)(param_2 + 0x10) = 0;
            if (*(longlong *)(param_1 + 0x28) == 0) {
                *(longlong *)(param_1 + 0x20) = param_2;
                *(longlong *)(param_1 + 0x28) = param_2;
                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                return 0;
            }
            *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = param_2;
            *(longlong *)(param_1 + 0x28) = param_2;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            return 0;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
            *(longlong *)(param_1 + 0x28) = param_2;
            *(longlong *)(param_1 + 0x20) = param_2;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            return 0;
        }
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_1 + 0x20);
        *(longlong *)(param_1 + 0x20) = param_2;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    return sVar1;
}



undefined8 FUN_140889bb0(int *param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 2);
    lVar2 = 0;
    while( true ) {
        lVar1 = lVar3;
        if (lVar1 == 0) {
            return 2;
        }
        if (lVar1 == param_2) break;
        lVar3 = *(longlong *)(lVar1 + 0x10);
        lVar2 = lVar1;
    }
    if (lVar1 == 0) {
        return 2;
    }
    if (lVar1 == *(longlong *)(param_1 + 2)) {
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar1 + 0x10);
    }
    else {
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    }
    if (lVar1 == *(longlong *)(param_1 + 4)) {
        *(longlong *)(param_1 + 4) = lVar2;
    }
    *param_1 = *param_1 + -1;
    return 1;
}



void FUN_140889c10(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4,
                   ulonglong param_5,undefined4 param_6)

{
    uint uVar1;
    ulonglong *puVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;
    uint uVar11;

    if (*(char *)(param_1 + 0x50) == '\0') {
        param_2[2] = param_3;
        *param_2 = param_5;
        *(undefined4 *)(param_2 + 3) = param_6;
        return;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar8 = 0;
    lVar4 = *(longlong *)(param_1 + 0x10);
    iVar9 = 0;
    uVar11 = (int)(*(longlong *)(param_1 + 0x38) - lVar3 >> 1) - 1;
    uVar10 = uVar11;
    do {
        uVar1 = iVar9 + (int)(uVar10 - iVar9) / 2;
        uVar6 = (ulonglong)*(ushort *)(lVar3 + (ulonglong)uVar1 * 2);
        puVar2 = (ulonglong *)(lVar4 + uVar6 * 0x28);
        uVar5 = *(uint *)(lVar4 + 0x1c + uVar6 * 0x28);
        if (*(uint *)((longlong)param_2 + 0x1c) < uVar5) {
            LAB_140889cda:
            uVar10 = uVar1 - 1;
        }
        else {
            if (*(uint *)((longlong)param_2 + 0x1c) <= uVar5) {
                uVar6 = *puVar2;
                if (uVar6 < *param_2) goto LAB_140889cda;
                if (uVar6 <= *param_2) {
                    uVar6 = puVar2[1];
                    if (param_2[1] < uVar6) goto LAB_140889cda;
                    if (param_2[1] <= uVar6) break;
                }
            }
            iVar9 = uVar1 + 1;
        }
    } while (iVar9 <= (int)uVar10);
    uVar6 = param_2[1];
    do {
        uVar5 = (int)(uVar11 - uVar8) / 2 + uVar8;
        uVar7 = (ulonglong)*(ushort *)(lVar3 + (ulonglong)uVar5 * 2);
        puVar2 = (ulonglong *)(lVar4 + uVar7 * 0x28);
        uVar10 = *(uint *)(lVar4 + 0x1c + uVar7 * 0x28);
        if (param_4 < uVar10) {
            LAB_140889d53:
            uVar11 = uVar5 - 1;
        }
        else {
            if (param_4 <= uVar10) {
                uVar7 = *puVar2;
                if (uVar7 < param_5) goto LAB_140889d53;
                if (uVar7 <= param_5) {
                    uVar7 = puVar2[1];
                    if (uVar6 < uVar7) goto LAB_140889d53;
                    uVar8 = uVar5;
                    if (uVar6 <= uVar7) break;
                }
            }
            uVar8 = uVar5 + 1;
        }
        uVar5 = uVar11;
    } while ((int)uVar8 <= (int)uVar11);
    if ((int)uVar8 < (int)uVar5) {
        uVar8 = uVar5;
    }
    FUN_140889a90((longlong *)(param_1 + 0x30),(ulonglong)uVar1,uVar8,uVar6,*param_2);
    *param_2 = param_5;
    *(undefined4 *)(param_2 + 3) = param_6;
    *(uint *)((longlong)param_2 + 0x1c) = param_4;
    param_2[2] = param_3;
    return;
}



void FUN_140889dc0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x30) != 0) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x30);
        FUN_140881720();
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_140881720(DAT_140c111c0,*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x48) != -1) {
        FUN_140881a80(*(int *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8));
        FUN_140881dd0(*(undefined4 *)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    }
    return;
}



void FUN_140889e50(longlong param_1,ulonglong *param_2)

{
    uint uVar1;
    ulonglong *puVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    int iVar9;
    uint uVar10;

    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar8 = 0;
    uVar10 = (int)(*(longlong *)(param_1 + 0x38) - lVar4 >> 1) - 1;
    iVar9 = 0;
    uVar6 = uVar10;
    do {
        uVar1 = iVar9 + (int)(uVar6 - iVar9) / 2;
        uVar7 = (ulonglong)*(ushort *)(lVar4 + (ulonglong)uVar1 * 2);
        puVar2 = (ulonglong *)(lVar5 + uVar7 * 0x28);
        uVar3 = *(uint *)(lVar5 + 0x1c + uVar7 * 0x28);
        if (*(uint *)((longlong)param_2 + 0x1c) < uVar3) {
            LAB_140889ed9:
            uVar6 = uVar1 - 1;
        }
        else {
            if (*(uint *)((longlong)param_2 + 0x1c) <= uVar3) {
                uVar7 = *puVar2;
                if (uVar7 < *param_2) goto LAB_140889ed9;
                if (uVar7 <= *param_2) {
                    uVar7 = puVar2[1];
                    if (param_2[1] < uVar7) goto LAB_140889ed9;
                    if (param_2[1] <= uVar7) break;
                }
            }
            iVar9 = uVar1 + 1;
        }
    } while (iVar9 <= (int)uVar6);
    LAB_140889f04:
    uVar6 = (int)(uVar10 - uVar8) / 2 + uVar8;
    uVar7 = (ulonglong)*(ushort *)(lVar4 + (ulonglong)uVar6 * 2);
    puVar2 = (ulonglong *)(lVar5 + uVar7 * 0x28);
    if (*(int *)(lVar5 + 0x1c + uVar7 * 0x28) == -1) {
        uVar7 = *puVar2;
        if (uVar7 < *param_2) {
            LAB_140889f46:
            uVar10 = uVar6 - 1;
            goto LAB_140889f4a;
        }
        if (uVar7 <= *param_2) {
            uVar7 = puVar2[1];
            if (param_2[1] < uVar7) goto LAB_140889f46;
            uVar8 = uVar6;
            if (uVar7 < param_2[1]) goto LAB_140889f40;
            goto LAB_140889f57;
        }
    }
    LAB_140889f40:
    uVar8 = uVar6 + 1;
    LAB_140889f4a:
    uVar6 = uVar10;
    if ((int)uVar10 < (int)uVar8) {
        LAB_140889f57:
        if ((int)uVar8 < (int)uVar6) {
            uVar8 = uVar6;
        }
        FUN_140889a90(param_1 + 0x30,(ulonglong)uVar1,uVar8);
        *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
        return;
    }
    goto LAB_140889f04;
}



void FUN_140889f90(longlong param_1,longlong *param_2,char param_3,undefined param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_res20 [8];

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60);
    local_res20[0] = param_4;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar2 != 0) {
        if ((*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x18) == 0) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x20) == *(longlong *)(lVar2 + 0x40))) {
            if (*(int *)(*(longlong *)(param_1 + 8) + 0x1c) != -1) {
                FUN_140889e50(lVar1 + 0xa8);
            }
        }
        else {
            lVar2 = 0;
        }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
    if (lVar2 != 0) {
        if ((param_3 != '\0') && ((*(byte *)(lVar2 + 0x48) & 1) == 0)) {
            (**(code **)(*param_2 + 0x38))
                    (param_2,*(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x28),lVar2 + 8,local_res20);
        }
        *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 1;
    }
    return;
}



undefined8
FUN_14088a060(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
    undefined8 uVar1;

    if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
        return 1;
    }
    if (param_5 == '\0') {
        uVar1 = (**(code **)(*param_2 + 0x28))();
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
        return uVar1;
    }
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2,param_3,param_4,param_1 + 8);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
    return uVar1;
}



void FUN_14088a0d0(longlong param_1,int param_2)

{
    if (param_2 != 1) {
        param_2 = 2;
    }
    FUN_14088a0f0(*(undefined8 *)(param_1 + 0x20),param_2);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088a0f0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined uVar6;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x60);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    lVar5 = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar1 = *(longlong *)(lVar5 + 8);
    plVar2 = *(longlong **)(lVar1 + 0x10);
    if (*(longlong *)(lVar4 + 0x128) == 0) {
        *(longlong **)(lVar4 + 0x128) = plVar2;
        *plVar2 = 0;
    }
    else {
        *plVar2 = *(longlong *)(lVar4 + 0x128);
        *(longlong **)(lVar4 + 0x128) = plVar2;
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if ((param_2 != 1) && (*(int *)(lVar1 + 0x1c) != -1)) {
        FUN_140889e50(lVar4 + 0xa8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x18));
    uVar6 = 1;
    lVar4 = lVar5;
    do {
        lVar1 = *(longlong *)(lVar4 + 0x18);
        lVar3 = lVar1;
        if (lVar4 == lVar5) {
            lVar5 = lVar1;
            lVar3 = _DAT_00000018;
        }
        _DAT_00000018 = lVar3;
        (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x28))
                (*(longlong **)(lVar4 + 0x20),lVar4,param_2,uVar6);
        uVar6 = 0;
        lVar4 = lVar1;
    } while (lVar1 != 0);
    return;
}



undefined4 FUN_14088a1f0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
    char cVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    uint local_18 [4];

    lVar4 = FUN_1408819f0(DAT_140c10f20,0x50);
    if (lVar4 == 0) {
        return 2;
    }
    lVar4 = FUN_14088c840(lVar4,param_2,param_3,param_4);
    if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x78))(param_2);
        if (plVar5 != (longlong *)0x0) {
            cVar1 = (**(code **)(*plVar5 + 0x130))(plVar5,3);
            if (cVar1 != '\0') {
                if (DAT_140c629d8 == (longlong *)0x0) {
                    DAT_140c629d8 = param_2;
                    DAT_140c629e0 = param_2;
                    param_2[0xf] = 0;
                }
                else {
                    param_2[0xf] = (longlong)DAT_140c629d8;
                    DAT_140c629d8 = param_2;
                }
                FUN_14088c4d0(param_2);
                if (*(int *)(param_3 + 0x18) == 0) {
                    return 2;
                }
                local_18[0] = 0;
                uVar2 = FUN_14083c300(DAT_140c61b80,*(int *)(param_3 + 0x18),param_2 + 3,local_18);
                FUN_14088c4c0(param_2,local_18[0]);
                if (((local_18[0] & 0x20000) != 0) &&
                    (iVar3 = FUN_14088c5a0(&DAT_140c629f0,*(undefined4 *)(param_3 + 0x18)), iVar3 != 1)) {
                    FUN_14088c4c0(param_2,local_18[0] & 0xfffdffff);
                }
                FUN_14083be70(DAT_140c61b80,*(undefined4 *)(param_3 + 0x18));
                return uVar2;
            }
            (**(code **)(*plVar5 + 0x138))(plVar5,3);
        }
        uVar2 = DAT_140c10f20;
        FUN_14088c940(lVar4);
        FUN_140881720(uVar2,lVar4);
    }
    return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088a380(void)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar2 = (undefined8 *)0x0;
    puVar3 = DAT_140c62a30;
    puVar5 = DAT_140c62a30;
    if (DAT_140c62a30 != (undefined8 *)0x0) {
        do {
            if ((*(byte *)(puVar3 + 2) & 2) == 0) {
                puVar4 = (undefined8 *)*puVar3;
                puVar1 = puVar4;
                if (puVar3 != puVar5) {
                    *puVar2 = puVar4;
                    puVar1 = DAT_140c62a30;
                }
                DAT_140c62a30 = puVar1;
                if (puVar3 == DAT_140c62a38) {
                    DAT_140c62a38 = puVar2;
                }
                if ((puVar3 < DAT_140c62a58) || (DAT_140c62a58 + (ulonglong)DAT_140c62a48 * 3 <= puVar3)) {
                    FUN_140881720(DAT_140c10f20);
                }
                else {
                    *puVar3 = DAT_140c62a40;
                    DAT_140c62a40 = puVar3;
                }
                _DAT_140c62a50 = _DAT_140c62a50 + -1;
                puVar3 = puVar2;
                puVar5 = DAT_140c62a30;
            }
            else {
                puVar4 = (undefined8 *)*puVar3;
            }
            puVar2 = puVar3;
            puVar3 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
    }
    return;
}



longlong FUN_14088a460(undefined8 param_1)

{
    int iVar1;

    if (DAT_140c629c0 == 0) {
        DAT_140c629c0 = FUN_1408819f0(DAT_140c10f20,1);
        if (DAT_140c629c0 != 0) {
            iVar1 = FUN_14088a690(DAT_140c629c0,param_1);
            if (iVar1 == 1) {
                return DAT_140c629c0;
            }
            FUN_14088a4d0(DAT_140c629c0);
        }
        DAT_140c629c0 = 0;
    }
    return DAT_140c629c0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088a4d0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    bool bVar4;

    FUN_140828eb0(0xffffffffffffffff);
    FUN_140828530();
    while (DAT_140c629d8 != 0) {
        WaitForSingleObject(DAT_140c629d0,0xffffffff);
    }
    if (DAT_140c629d0 != (HANDLE)0x0) {
        CloseHandle(DAT_140c629d0);
    }
    DAT_140c629d0 = (HANDLE)0x0;
    DAT_140c629d8 = 0;
    DAT_140c629e0 = 0;
    FUN_14088c760(&DAT_140c629f0);
    if (DAT_140c62a4c != 0) {
        while (puVar3 = DAT_140c62a30, puVar2 = DAT_140c62a40, puVar1 = DAT_140c62a58,
                DAT_140c62a30 != (undefined8 *)0x0) {
            if (DAT_140c62a30 == DAT_140c62a38) {
                DAT_140c62a38 = (undefined8 *)0x0;
            }
            if ((DAT_140c62a30 < DAT_140c62a58) ||
                (DAT_140c62a58 + (_DAT_140c62a48 & 0xffffffff) * 3 <= DAT_140c62a30)) {
                DAT_140c62a30 = (undefined8 *)*DAT_140c62a30;
                FUN_140881720(DAT_140c10f20,puVar3);
                _DAT_140c62a50 = _DAT_140c62a50 + -1;
            }
            else {
                puVar2 = (undefined8 *)*DAT_140c62a30;
                *DAT_140c62a30 = DAT_140c62a40;
                DAT_140c62a30 = puVar2;
                _DAT_140c62a50 = _DAT_140c62a50 + -1;
                DAT_140c62a40 = puVar3;
            }
        }
        while (puVar2 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*puVar2;
            if ((puVar2 < puVar1) ||
                (bVar4 = puVar1 + (_DAT_140c62a48 & 0xffffffff) * 3 <= puVar2, puVar2 = puVar3, bVar4)) {
                FUN_140881720(DAT_140c10f20);
                puVar2 = puVar3;
                puVar1 = DAT_140c62a58;
            }
        }
        if (puVar1 != (undefined8 *)0x0) {
            FUN_140881720(DAT_140c10f20,puVar1);
        }
        _DAT_140c62a48 = 0;
        DAT_140c62a30 = (undefined8 *)0x0;
        DAT_140c62a38 = (undefined8 *)0x0;
    }
    if (param_1 != 0) {
        DAT_140c629c0 = 0;
        FUN_140881720(DAT_140c10f20,param_1);
    }
    return;
}



void FUN_14088a680(undefined4 *param_1)

{
    *param_1 = 0x3f800000;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14088a690(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;

    if (param_2 == (undefined4 *)0x0) {
        _DAT_140c629c8 = 0x3f800000;
    }
    else {
        _DAT_140c629c8 = *param_2;
    }
    FUN_140001b70(&DAT_140c629f0);
    DAT_140c629d0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    iVar1 = 2 - (uint)(DAT_140c629d0 != (HANDLE)0x0);
    if (iVar1 == 1) {
        DAT_140c62a4c = 0xffffffff;
        _DAT_140c62a50 = 0;
        DAT_140c62a40 = 0;
        DAT_140c62a58 = 0;
        DAT_140c62a30 = 0;
        DAT_140c62a38 = 0;
        iVar1 = 1;
    }
    return iVar1;
}



undefined8 FUN_14088a720(void)

{
    longlong lVar1;

    lVar1 = FUN_14088a460();
    if (lVar1 != 0) {
        FUN_140826ff0(FUN_14088a8a0);
        FUN_140827120(&DAT_14088b080);
        FUN_140827110(FUN_14088e6c0);
        return 1;
    }
    return 2;
}



void FUN_14088a770(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   int param_5)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = DAT_140c629d8;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            lVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
            if (((lVar2 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar3[0xd] + 0x38)))))
                && ((param_5 == 0 || (param_5 == *(int *)(plVar3[0xd] + 0x30))))) {
                FUN_14088b860(plVar3,param_4);
            }
            pplVar1 = (longlong **)(plVar3 + 0xf);
            plVar3 = *pplVar1;
        } while (*pplVar1 != (longlong *)0x0);
    }
    return;
}



void FUN_14088a800(undefined8 param_1,longlong *param_2)

{
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar3 = DAT_140c62a30;
    plVar4 = DAT_140c62a30;
    if (DAT_140c62a30 != (longlong *)0x0) {
        do {
            if (plVar4 + 1 == param_2) break;
            plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)0x0);
    }
    *(uint *)(plVar4 + 2) = *(uint *)(plVar4 + 2) & 0xfffffffd;
    if ((*(uint *)(plVar4 + 2) & 1) == 0) {
        *(uint *)(plVar4 + 2) = *(uint *)(plVar4 + 2) | 1;
        iVar1 = *(int *)(plVar4 + 1);
        FUN_140828a50(iVar1,*(undefined4 *)((longlong)plVar4 + 0xc),0,1,plVar3,0);
        for (puVar2 = (undefined8 *)*plVar4; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2
                ) {
            if (*(int *)(puVar2 + 1) == iVar1) {
                *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) | 1;
            }
        }
    }
    FUN_14088a380();
    return;
}



void FUN_14088a8a0(void)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined local_28 [32];

    plVar4 = DAT_140c629d8;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            plVar1 = (longlong *)plVar4[0xf];
            lVar2 = plVar4[0xd];
            if (((*(uint *)(plVar4 + 4) & 0x20000) != 0) &&
                (iVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4,local_28), iVar3 == 1)) {
                FUN_14088c7a0(&DAT_140c629f0,*(undefined4 *)(lVar2 + 0x30),local_28);
            }
            FUN_14088cc10(lVar2,0x400);
            plVar4 = plVar1;
        } while (plVar1 != (longlong *)0x0);
    }
    return;
}



void FUN_14088a920(longlong *param_1,ulonglong *param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plStack72;
    undefined8 uStack64;
    undefined4 uStack56;
    undefined4 uStack52;
    ulonglong uStack48;
    undefined2 uStack40;

    uStack48 = 0x14088a935;
    FUN_140843be0();
    uStack48 = 0x14088a93d;
    FUN_140860810(param_1);
    if (*(int *)param_2 != 0) {
        *(undefined4 *)(param_1 + 0x25) = 0;
        uVar2 = *param_2;
        if (param_1[0x10] == 0) {
            uStack64 = 0x1000000;
            plVar1 = param_1 + 2;
            uStack56 = 0;
            uStack52 = 0x3f800000;
            uStack40 = 0x100;
            plStack72 = plVar1;
            uStack48 = uVar2;
            lVar3 = FUN_14083a960(DAT_140c61b70,&plStack72,1,0);
            *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
            *(byte *)((longlong)param_1 + 0x17f) = *(byte *)((longlong)param_1 + 0x17f) | 0x80;
            param_1[0x10] = lVar3;
            (**(code **)(*param_1 + 0x80))(param_1,0xe,uVar2 & 0xffffffff);
            if (lVar3 == 0) {
                (**(code **)*plVar1)(plVar1,uStack64);
            }
        }
        else {
            FUN_14083ab80(DAT_140c61b70,param_1[0x10],0x1000000,1,(int)uVar2,(int)(uVar2 >> 0x20),0);
        }
    }
    if ((*(byte *)((longlong)param_1 + 0x17a) & 7) == 1) {
        *(byte *)((longlong)param_1 + 0x17d) = *(byte *)((longlong)param_1 + 0x17d) | 0x40;
        FUN_140858700(1,param_1);
        if (param_1[0x10] != 0) {
            FUN_14083aed0(DAT_140c61b70);
        }
        if (param_1[0x3f] != 0) {
            FUN_14083a5a0(DAT_140c61b98);
        }
    }
    else {
        FUN_140858700(0,param_1);
    }
    if ((*(byte *)((longlong)param_1 + 0x17a) & 7) == 2) {
        (**(code **)*param_1)(param_1,0,0,0);
    }
    DAT_140c62410 = DAT_140c62410 + 1;
    return;
}



int FUN_14088a960(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,longlong **param_10)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;
    char cVar7;
    undefined4 local_res10;
    undefined4 local_f8 [2];
    undefined4 local_f0 [2];
    longlong local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    undefined4 local_d0;
    undefined2 local_cc;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [16];
    undefined4 local_a8 [2];
    longlong local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined4 local_88;
    undefined2 local_84;
    undefined4 local_64;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;

    if (param_2 == (longlong *)0x0) {
        return 0x1f;
    }
    FUN_140845010(&local_c8,param_2,param_4,local_f8);
    iVar2 = FUN_140844d10(local_c8);
    if (iVar2 == 2) {
        iVar6 = 3;
    }
    else {
        local_e0 = 0;
        local_d8 = 0;
        local_f0[0] = local_c8;
        iVar6 = 3;
        local_d0 = 3;
        local_cc = 0x100;
        local_e8 = param_4;
        iVar3 = (**(code **)(*param_2 + 0x110))(param_2,local_f0);
        cVar7 = iVar3 != 2;
        if ((iVar3 == 0x50) || (iVar2 == 0x50)) {
            FUN_14084ece0(param_2,local_b8);
            cVar7 = FUN_140843eb0();
        }
        if (cVar7 == '\0') {
            local_res10 = 0x20;
        }
        else {
            plVar5 = (longlong *)0x0;
            local_58 = 0;
            local_50 = 0;
            local_64 = 0;
            local_a8[0] = 0;
            lVar4 = FUN_1408819f0(DAT_140c10f20,0x250);
            if (lVar4 != 0) {
                local_48 = local_c8;
                uStack68 = uStack196;
                uStack64 = uStack192;
                uStack60 = uStack188;
                plVar5 = (longlong *)
                        FUN_14088bca0(lVar4,param_1,param_2,param_3,param_4,param_6,param_7,local_a8,0,
                                      &local_48,param_8,local_e0,local_d8);
            }
            *param_10 = plVar5;
            iVar6 = 2;
            if (plVar5 != (longlong *)0x0) {
                iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
                if (iVar2 != 1) {
                    (**(code **)(**param_10 + 0x18))(*param_10,1);
                    uVar1 = DAT_140c10f20;
                    plVar5 = *param_10;
                    if (plVar5 != (longlong *)0x0) {
                        (**(code **)(*plVar5 + 8))(plVar5,0);
                        FUN_140881720(uVar1,plVar5);
                    }
                    *param_10 = (longlong *)0x0;
                    return 2;
                }
                *(undefined4 *)((longlong)*param_10 + 0x1ac) = local_f8[0];
                *(undefined4 *)(*param_10 + 0x33) = param_9;
                FUN_14088a920(*param_10,param_5);
                return 1;
            }
        }
        local_98 = 0;
        local_90 = 0;
        local_a8[0] = 0;
        local_88 = 3;
        local_84 = 0x100;
        local_a0 = param_4;
        (**(code **)(*param_2 + 0x118))(param_2,local_a8);
        if (iVar6 != 3) {
            return iVar6;
        }
    }
    local_64 = 0;
    local_a8[0] = 0;
    FUN_140001b70(param_2,local_res10,*(undefined8 *)(param_4 + 0x80),param_6,local_a8);
    return iVar6;
}



void FUN_14088ac10(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    plVar5 = DAT_140c629d8;
    plVar6 = (longlong *)0x0;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            plVar3 = plVar5;
            if (plVar3 == param_2) {
                if (plVar3 != (longlong *)0x0) {
                    plVar5 = (longlong *)plVar3[0xf];
                    if (plVar3 != DAT_140c629d8) {
                        plVar6[0xf] = (longlong)(longlong *)plVar3[0xf];
                        plVar5 = DAT_140c629d8;
                    }
                    DAT_140c629d8 = plVar5;
                    if (plVar3 == DAT_140c629e0) {
                        DAT_140c629e0 = plVar6;
                    }
                }
                break;
            }
            plVar5 = (longlong *)plVar3[0xf];
            plVar6 = plVar3;
        } while ((longlong *)plVar3[0xf] != (longlong *)0x0);
    }
    lVar1 = param_2[0xd];
    if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x30) != 0) {
            if ((*(uint *)(param_2 + 4) & 0x20000) != 0) {
                FUN_140845490(&DAT_140c629f0);
            }
            FUN_14083c1c0(DAT_140c61b80,*(undefined4 *)(lVar1 + 0x30),param_2 + 3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            if (lVar4 != 0) {
                plVar5 = (longlong *)(**(code **)(*param_2 + 0x78))(param_2);
                (**(code **)(*plVar5 + 0x138))(plVar5,3);
            }
        }
        uVar2 = DAT_140c10f20;
        FUN_14088c940(lVar1);
        FUN_140881720(uVar2,lVar1);
    }
    // WARNING: Could not recover jumptable at 0x00014088acfd. Too many branches
    // WARNING: Treating indirect jump as call
    SetEvent(DAT_140c629d0);
    return;
}



void FUN_14088ad10(undefined8 param_1,longlong **param_2)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong **pplVar7;
    undefined4 uVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined4 local_res18;
    undefined4 uStackX28;
    undefined8 local_res20;
    longlong **pplVar11;
    undefined8 uVar12;

    lVar6 = 0;
    uVar12 = 0;
    pplVar7 = DAT_140c62a30;
    if (DAT_140c62a30 != (longlong **)0x0) {
        do {
            if (pplVar7 + 1 == param_2) break;
            pplVar7 = (longlong **)*pplVar7;
        } while (pplVar7 != (longlong **)0x0);
    }
    if ((*(uint *)(pplVar7 + 2) & 1) != 0) {
        *(uint *)(pplVar7 + 2) = *(uint *)(pplVar7 + 2) & 0xfffffffd;
        FUN_14088a380();
        return;
    }
    iVar2 = *(int *)(pplVar7 + 1);
    uVar9 = CONCAT44(uStackX28,local_res18);
    lVar5 = DAT_140c629d8;
    lVar10 = lVar6;
    uVar8 = local_res18;
    pplVar11 = DAT_140c62a30;
    if (DAT_140c629d8 != 0) {
        do {
            if ((((*(byte *)(lVar5 + 0x62) & 1) != 0) && ((*(byte *)(lVar5 + 0x62) & 0x10) == 0)) &&
                ((lVar4 = FUN_14088dc90(*(undefined8 *)(lVar5 + 0x68),iVar2,&local_res18,&local_res20,
                                        pplVar11,uVar12), lVar10 == 0 || (lVar4 < lVar6)))) {
                lVar6 = lVar4;
                uVar9 = local_res20;
                lVar10 = lVar5;
                uVar8 = local_res18;
            }
            plVar1 = (longlong *)(lVar5 + 0x78);
            lVar5 = *plVar1;
        } while (*plVar1 != 0);
    }
    if (lVar6 == 0x400 || lVar6 + -0x400 < 0) {
        FUN_140828a50(iVar2,*(undefined4 *)((longlong)pplVar7 + 0xc),0,1);
        *(uint *)(pplVar7 + 2) = *(uint *)(pplVar7 + 2) & 0xfffffffd | 1;
        do {
            if (*(int *)(pplVar7 + 1) == iVar2) {
                *(uint *)(pplVar7 + 2) = *(uint *)(pplVar7 + 2) | 1;
            }
            pplVar7 = (longlong **)*pplVar7;
        } while (pplVar7 != (longlong **)0x0);
    }
    else {
        iVar3 = FUN_14088d8d0(*(undefined8 *)(lVar10 + 0x68),param_2,uVar8,uVar9);
        if (iVar3 == 1) {
            return;
        }
        FUN_140828a50(iVar2,*(undefined4 *)((longlong)pplVar7 + 0xc),0,1);
        *(uint *)(pplVar7 + 2) = *(uint *)(pplVar7 + 2) & 0xfffffffd | 1;
        do {
            if (*(int *)(pplVar7 + 1) == iVar2) {
                *(uint *)(pplVar7 + 2) = *(uint *)(pplVar7 + 2) | 1;
            }
            pplVar7 = (longlong **)*pplVar7;
        } while (pplVar7 != (longlong **)0x0);
    }
    FUN_14088a380();
    return;
}



void FUN_14088aeb0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   undefined param_5,int param_6)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = DAT_140c629d8;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            lVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
            if (((lVar2 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar3[0xd] + 0x38)))))
                && ((param_6 == 0 || (param_6 == *(int *)(plVar3[0xd] + 0x30))))) {
                FUN_14088ba70(plVar3,param_4,param_5);
            }
            pplVar1 = (longlong **)(plVar3 + 0xf);
            plVar3 = *pplVar1;
        } while (*pplVar1 != (longlong *)0x0);
    }
    return;
}



void FUN_14088af40(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   undefined param_5)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 in_XMM3_Da;
    undefined4 local_res20 [2];

    plVar4 = DAT_140c629d8;
    local_res20[0] = in_XMM3_Da;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            plVar1 = (longlong *)plVar4[0xf];
            lVar3 = (**(code **)(*plVar4 + 0x78))(plVar4);
            if ((lVar3 == param_2) &&
                (((param_3 == 0 || (*(longlong *)(plVar4[0xd] + 0x38) == param_3)) &&
                  (iVar2 = (**(code **)(*plVar4 + 0xa0))(plVar4,local_res20,param_5), iVar2 == 1)))) {
                FUN_14083be70(DAT_140c61b80,*(undefined4 *)(plVar4[0xd] + 0x30));
            }
            plVar4 = plVar1;
        } while (plVar1 != (longlong *)0x0);
    }
    return;
}



void FUN_14088afe0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                   undefined param_5)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 local_res20 [2];

    plVar4 = DAT_140c629d8;
    local_res20[0] = param_4;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            plVar1 = (longlong *)plVar4[0xf];
            lVar3 = (**(code **)(*plVar4 + 0x78))(plVar4);
            if ((lVar3 == param_2) &&
                (((param_3 == 0 || (*(longlong *)(plVar4[0xd] + 0x38) == param_3)) &&
                  (iVar2 = (**(code **)(*plVar4 + 0x98))(plVar4,local_res20,param_5), iVar2 == 1)))) {
                FUN_14083be70(DAT_140c61b80,*(undefined4 *)(plVar4[0xd] + 0x30));
            }
            plVar4 = plVar1;
        } while (plVar1 != (longlong *)0x0);
    }
    return;
}



void FUN_14088b280(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   int param_5)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = DAT_140c629d8;
    if (DAT_140c629d8 != (longlong *)0x0) {
        do {
            plVar1 = (longlong *)plVar3[0xf];
            lVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
            if (((lVar2 == param_2) && ((param_3 == 0 || (param_3 == *(longlong *)(plVar3[0xd] + 0x38)))))
                && ((param_5 == 0 || (param_5 == *(int *)(plVar3[0xd] + 0x30))))) {
                FUN_14088bb90(plVar3,param_4,0xffffffff);
            }
            plVar3 = plVar1;
        } while (plVar1 != (longlong *)0x0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088b320(void)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    bool bVar5;

    lVar2 = DAT_140c629c0;
    if (DAT_140c629c0 != 0) {
        FUN_140828eb0(0xffffffffffffffff);
        FUN_140828530();
        while (DAT_140c629d8 != 0) {
            WaitForSingleObject(DAT_140c629d0,0xffffffff);
        }
        if (DAT_140c629d0 != (HANDLE)0x0) {
            CloseHandle(DAT_140c629d0);
        }
        DAT_140c629d0 = (HANDLE)0x0;
        DAT_140c629d8 = 0;
        DAT_140c629e0 = 0;
        FUN_14088c760(&DAT_140c629f0);
        if (DAT_140c62a4c != 0) {
            while (puVar4 = DAT_140c62a30, puVar3 = DAT_140c62a40, puVar1 = DAT_140c62a58,
                    DAT_140c62a30 != (undefined8 *)0x0) {
                if (DAT_140c62a30 == DAT_140c62a38) {
                    DAT_140c62a38 = (undefined8 *)0x0;
                }
                if ((DAT_140c62a30 < DAT_140c62a58) ||
                    (DAT_140c62a58 + (_DAT_140c62a48 & 0xffffffff) * 3 <= DAT_140c62a30)) {
                    DAT_140c62a30 = (undefined8 *)*DAT_140c62a30;
                    FUN_140881720(DAT_140c10f20,puVar4);
                    _DAT_140c62a50 = _DAT_140c62a50 + -1;
                }
                else {
                    puVar3 = (undefined8 *)*DAT_140c62a30;
                    *DAT_140c62a30 = DAT_140c62a40;
                    DAT_140c62a30 = puVar3;
                    _DAT_140c62a50 = _DAT_140c62a50 + -1;
                    DAT_140c62a40 = puVar4;
                }
            }
            while (puVar3 != (undefined8 *)0x0) {
                puVar4 = (undefined8 *)*puVar3;
                if ((puVar3 < puVar1) ||
                    (bVar5 = puVar1 + (_DAT_140c62a48 & 0xffffffff) * 3 <= puVar3, puVar3 = puVar4, bVar5)) {
                    FUN_140881720(DAT_140c10f20);
                    puVar3 = puVar4;
                    puVar1 = DAT_140c62a58;
                }
            }
            if (puVar1 != (undefined8 *)0x0) {
                FUN_140881720(DAT_140c10f20,puVar1);
            }
            _DAT_140c62a48 = 0;
            DAT_140c62a30 = (undefined8 *)0x0;
            DAT_140c62a38 = (undefined8 *)0x0;
        }
        if (lVar2 != 0) {
            DAT_140c629c0 = 0;
            FUN_140881720(DAT_140c10f20,lVar2);
        }
        return;
    }
    return;
}



undefined8 * FUN_14088b340(undefined8 *param_1)

{
    FUN_14088e7b0();
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = &PTR_FUN_1409a8160;
    param_1[3] = &PTR_FUN_1409a81a8;
    param_1[5] = &PTR_FUN_1409a93a0;
    param_1[6] = 0;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
    param_1[7] = 0;
    param_1[8] = 0;
    *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xe0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
    *(undefined2 *)(param_1 + 0xc) = 0;
    return param_1;
}



void FUN_14088b3b0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8160;
    param_1[3] = &PTR_FUN_1409a81a8;
    param_1[5] = &PTR_FUN_1409a93a0;
    if (param_1[7] != 0) {
        FUN_14083b060(DAT_140c61b70,param_1[7],param_1 + 5);
    }
    if (param_1[8] != 0) {
        FUN_14083b060(DAT_140c61b70,param_1[8],param_1 + 5);
    }
    param_1[6] = 0;
    param_1[3] = &PTR_FUN_1409a4328;
    FUN_14088e7d0(param_1);
    return;
}



undefined8 FUN_14088b440(undefined8 param_1,uint param_2)

{
    FUN_14088b3b0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14088b4a0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x10) == 0) {
        return;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
        *(longlong *)(lVar1 + 0x30) = param_1;
        *(undefined8 *)(param_1 + 8) = 0;
        *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        return;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(lVar1 + 0x30);
    *(longlong *)(lVar1 + 0x30) = param_1;
    *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
    return;
}



void FUN_14088b4b0(longlong *param_1,uint param_2)

{
    byte bVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar2 = (longlong *)param_1[6];
    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        (**(code **)*plVar2)(plVar2,param_2);
    }
    plVar2 = (longlong *)param_1[6];
    while (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)plVar2[1];
        (**(code **)(*plVar2 + 0x28))();
        plVar2 = plVar3;
    }
    if ((param_2 < *(uint *)((longlong)param_1 + 0x5c)) && (param_2 != 0xffffffff)) {
        *(uint *)((longlong)param_1 + 0x5c) = param_2;
    }
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x62);
        if (((bVar1 & 0xf) != 0) && ((bVar1 & 0x10) == 0)) {
            if ((bVar1 & 0xf) < 3) {
                *(byte *)((longlong)param_1 + 0x62) = bVar1 & 0xf2 | 2;
            }
            goto LAB_14088b54c;
        }
    }
    (**(code **)(*param_1 + 0x40))(param_1);
    LAB_14088b54c:
    FUN_14088b630(param_1);
    return;
}



void FUN_14088b570(longlong param_1)

{
    longlong *plVar1;

    for (plVar1 = *(longlong **)(param_1 + 0x30); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[1]) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 0x10;
    if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_14083aed0(DAT_140c61b70);
    }
    return;
}



void FUN_14088b5c0(longlong param_1)

{
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf1;
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 1;
    return;
}



void FUN_14088b5d0(longlong param_1)

{
    longlong *plVar1;

    for (plVar1 = *(longlong **)(param_1 + 0x30); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[1]) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xef;
    if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_14083b0c0(DAT_140c61b70);
    }
    return;
}



void FUN_14088b620(longlong param_1)

{
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xf4;
    *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 4;
    return;
}



void FUN_14088b630(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 uVar4;
    longlong *plVar5;

    plVar1 = param_1 + 10;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    if (*(int *)plVar1 == 0) {
        lVar2 = param_1[2];
        if (lVar2 == 0) {
            FUN_14088ac10(DAT_140c629c0,param_1);
        }
        else {
            plVar5 = *(longlong **)(lVar2 + 0x30);
            plVar1 = (longlong *)0x0;
            while (plVar3 = plVar5, plVar3 != (longlong *)0x0) {
                if (plVar3 == param_1) {
                    if (plVar3 != (longlong *)0x0) {
                        if (plVar3 == *(longlong **)(lVar2 + 0x30)) {
                            *(longlong *)(lVar2 + 0x30) = plVar3[1];
                            FUN_14088b630();
                        }
                        else {
                            plVar1[1] = plVar3[1];
                            FUN_14088b630();
                        }
                    }
                    break;
                }
                plVar1 = plVar3;
                plVar5 = (longlong *)plVar3[1];
            }
        }
        uVar4 = DAT_140c10f20;
        (**(code **)(*param_1 + 0x30))(param_1,0);
        FUN_140881720(uVar4,param_1);
    }
    return;
}



void FUN_14088b6d0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar2 = lVar1;
    lVar4 = 0;
    if (lVar1 != 0) {
        while (lVar3 = lVar2, lVar3 != param_2) {
            lVar2 = *(longlong *)(lVar3 + 8);
            lVar4 = lVar3;
            if (*(longlong *)(lVar3 + 8) == 0) {
                return;
            }
        }
        if (lVar3 != 0) {
            if (lVar3 == lVar1) {
                *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar3 + 8);
                FUN_14088b630(param_1);
                return;
            }
            *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
            FUN_14088b630(param_1);
            return;
        }
    }
    return;
}



void FUN_14088b720(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    longlong *plVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    for (plVar1 = *(longlong **)(param_4 + 0x30); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[1]) {
        param_1 = (**(code **)(*plVar1 + 0x18))
                (param_1,param_2,param_3,plVar1,param_5,param_6,param_7,auVar2);
    }
    return;
}



void FUN_14088b770(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   int param_5,undefined8 param_6,char param_7)

{
    bool bVar1;

    bVar1 = false;
    if (param_5 != 0x1000000) {
        if (param_5 != 0x2000000) {
            if (param_5 == 0x4000000) {
                bVar1 = true;
            }
            else if (param_5 != 0x8000000) {
                return;
            }
            *(undefined4 *)(param_4 + 0x30) = param_3;
            (**(code **)(*(longlong *)(param_4 + -0x28) + 0x18))(param_4 + -0x28);
            if (param_7 == '\0') {
                return;
            }
            *(undefined8 *)(param_4 + 0x18) = 0;
            if (!bVar1) {
                return;
            }
            (**(code **)(*(longlong *)(param_4 + -0x28) + 8))(param_4 + -0x28);
            return;
        }
        bVar1 = true;
    }
    *(undefined4 *)(param_4 + 0x2c) = param_3;
    (**(code **)(*(longlong *)(param_4 + -0x28) + 0x18))(param_4 + -0x28);
    if ((param_7 != '\0') && (*(undefined8 *)(param_4 + 0x10) = 0, bVar1)) {
        (***(code ***)(param_4 + -0x28))(param_4 + -0x28,0xffffffff);
    }
    return;
}



void FUN_14088b850(undefined8 *param_1)

{
    // WARNING: Could not recover jumptable at 0x00014088b855. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)*param_1)(param_1,0);
    return;
}



void FUN_14088b860(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined2 local_18;

    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14083ab80(DAT_140c61b70,*(longlong *)(param_1 + 0x40),0x4000000,param_4,*param_2,param_2[1],
                      0);
        return;
    }
    local_20 = *param_2;
    local_1c = param_2[1];
    local_28 = 0x3f800000;
    local_24 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x28);
    local_30 = 0x4000000;
    local_18 = 0x100;
    local_38 = puVar1;
    lVar2 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
    *(longlong *)(param_1 + 0x40) = lVar2;
    if (lVar2 == 0) {
        (**(code **)*puVar1)(puVar1,local_30);
    }
    return;
}



void FUN_14088b940(longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    int local_20;
    int local_1c;
    undefined2 local_18;

    if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) < 2) {
        if (param_1[7] == 0) {
            if (0 < *param_2) {
                local_1c = param_2[1];
                plVar1 = param_1 + 5;
                local_24 = 0x3f800000;
                local_28 = 0;
                local_30 = 0x1000000;
                local_18 = 0x100;
                local_38 = plVar1;
                local_20 = *param_2;
                lVar3 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
                *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
                param_1[7] = lVar3;
                if (lVar3 == 0) {
                    (**(code **)*plVar1)(plVar1,local_30);
                }
                else {
                    iVar2 = param_2[2];
                    if (iVar2 != 0) {
                        *(float *)(lVar3 + 0x14) =
                                (float)((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffU)) >> 10) + *(float *)(lVar3 + 0x14);
                    }
                }
            }
        }
        else {
            FUN_14083ab80(DAT_140c61b70,param_1[7],0x1000000,param_4,*param_2,param_2[1],0);
        }
        (**(code **)(*param_1 + 0x38))(param_1);
    }
    return;
}



void FUN_14088ba70(undefined4 param_1,undefined4 param_2,longlong *param_3,int *param_4,char param_5
        ,undefined8 param_6)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    int local_20;
    int local_1c;
    undefined2 local_18;

    if ((param_5 == '\0') && (1 < *(ushort *)(param_3 + 0xc))) {
        *(ushort *)(param_3 + 0xc) = *(ushort *)(param_3 + 0xc) - 1;
        return;
    }
    *(undefined2 *)(param_3 + 0xc) = 0;
    if (param_3[8] == 0) {
        if (*param_4 < 1) {
            *(undefined4 *)(param_3 + 0xb) = 0x3f800000;
            (**(code **)(*param_3 + 0x18))(param_1,param_2,0x3f800000,param_3);
        }
        else {
            local_28 = *(undefined4 *)(param_3 + 0xb);
            local_1c = param_4[1];
            plVar1 = param_3 + 5;
            local_24 = 0x3f800000;
            local_30 = 0x8000000;
            local_18 = 0x100;
            local_38 = plVar1;
            local_20 = *param_4;
            lVar2 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
            *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 2;
            param_3[8] = lVar2;
            if (lVar2 == 0) {
                (**(code **)*plVar1)(plVar1,local_30);
            }
        }
    }
    else {
        FUN_14083ab80(DAT_140c61b70,param_3[8],0x8000000,param_6,*param_4,param_4[1],0);
    }
    // WARNING: Could not recover jumptable at 0x00014088bb8c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
}



void FUN_14088bb90(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *local_38;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    int local_20;
    int local_1c;
    undefined2 local_18;

    if ((*(byte *)((longlong)param_1 + 0x62) & 0x10) != 0) {
        // WARNING: Could not recover jumptable at 0x00014088bbac. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)*param_1)(param_1,param_3);
        return;
    }
    if (param_1[7] != 0) {
        FUN_14083ab80(DAT_140c61b70,param_1[7],0x2000000,param_4,*param_2,param_2[1],0);
        return;
    }
    local_20 = *param_2;
    if ((0 < local_20) && ((*(byte *)((longlong)param_1 + 0x62) & 3) != 0)) {
        local_1c = param_2[1];
        local_28 = 0x3f800000;
        local_24 = 0;
        puVar1 = param_1 + 5;
        local_30 = 0x2000000;
        local_18 = 0x100;
        local_38 = puVar1;
        lVar2 = FUN_14083a960(DAT_140c61b70,&local_38,1,0);
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
        param_1[7] = lVar2;
        if (lVar2 == 0) {
            (**(code **)*puVar1)(puVar1,local_30);
        }
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014088bc96. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)*param_1)(param_1,param_3);
    return;
}



undefined8 *
FUN_14088bca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined4 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
              undefined8 param_13)

{
    FUN_14085cfe0(param_1,param_3,param_4,param_5,param_6,param_8,param_9,param_10,0,param_11,param_12
            ,param_13);
    FUN_14088e7b0(param_1 + 0x44,param_2);
    *(uint *)(param_1 + 0x49) = *(uint *)(param_1 + 0x49) & 0xfffffffc;
    *(byte *)((longlong)param_1 + 0x17e) = *(byte *)((longlong)param_1 + 0x17e) & 0xdf;
    *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
    *param_1 = &PTR_LAB_1409a81c0;
    param_1[2] = &PTR_FUN_1409a48a0;
    param_1[0x44] = &PTR_LAB_1409a8248;
    param_1[0x48] = param_7;
    return param_1;
}



undefined8 * FUN_14088bdb0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_LAB_1409a81c0;
    param_1[2] = &PTR_FUN_1409a48a0;
    param_1[0x44] = &PTR_LAB_1409a8248;
    FUN_14088e7d0();
    FUN_14085d300(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14088be20(longlong param_1)

{
    uint uVar1;
    uint uVar2;

    uVar1 = *(uint *)(param_1 + 0x198);
    uVar2 = uVar1 & 0x800003ff;
    if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffc00) + 1;
    }
    if (((int)uVar2 < 0x201) && ((int)uVar2 <= *(int *)(param_1 + 0x174))) {
        if (0 < (int)uVar2) {
            *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xf3;
            *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 0x82;
            *(uint *)(param_1 + 0x198) = uVar1 - uVar2;
            *(uint *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) - uVar2;
            return;
        }
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 0x80;
        return;
    }
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xf3;
    *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 0x82;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + (0x400 - uVar2);
    *(uint *)(param_1 + 0x198) = uVar1 + (0x400 - uVar2);
    return;
}



void FUN_14088bee0(longlong param_1,undefined8 param_2)

{
    FUN_14088e810(param_1 + 0x220);
    FUN_14085ed00(param_1,param_2);
    return;
}



undefined8 FUN_14088bf20(longlong param_1)

{
    char cVar1;
    undefined4 local_res8 [4];
    undefined4 local_res18 [4];

    cVar1 = FUN_14088f140(*(undefined8 *)(param_1 + 0x230),param_1,local_res8,local_res18);
    if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) & 0xf3;
        *(byte *)(param_1 + 0x17f) = *(byte *)(param_1 + 0x17f) | 2;
        *(undefined4 *)(param_1 + 0x198) = local_res8[0];
        *(undefined4 *)(param_1 + 0x174) = local_res18[0];
        return 1;
    }
    return 2;
}



void FUN_14088c020(longlong param_1)

{
    FUN_14085fbb0();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    return;
}



void FUN_14088c040(undefined4 param_1,undefined8 param_2,float param_3,longlong param_4,int param_5)

{
    if (param_5 == 0) {
        param_3 = param_3 + 1.0;
    }
    else {
        if (param_5 == 1) {
            *(float *)(param_4 + 0x124) = param_3;
            *(float *)(param_4 + 0xd4) = *(float *)(param_4 + 0x124) + *(float *)(param_4 + 0x120);
            return;
        }
        if (1 < param_5 - 2U) {
            return;
        }
    }
    // WARNING: Could not recover jumptable at 0x00014088c07b. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(param_4 + 0x220) + 0x18))
            (param_1,param_2,param_3,(longlong *)(param_4 + 0x220),param_5 + param_4);
    return;
}



void FUN_14088c0b0(longlong param_1,undefined param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    uint uVar6;
    undefined8 unaff_RDI;

    if ((*(byte *)(param_1 + 0x248) & 1) == 0) {
        FUN_14088f5a0(*(undefined8 *)(param_1 + 0x230),param_1);
    }
    FUN_14088b6d0(*(undefined8 *)(param_1 + 0x230),param_1 + 0x220);
    FUN_14085e090(param_1,param_2);
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x1f8) + 0x28) >> 1 & 1) != 0) {
            puVar4 = (undefined4 *)FUN_14084eb00(*(undefined8 *)(param_1 + 0xa0));
            *(undefined8 *)(puVar4 + 2) = 0;
            *puVar4 = 0;
        }
        FUN_14083a6d0(DAT_140c61b98,*(undefined8 *)(param_1 + 0x1f8),param_1,param_4,unaff_RDI);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined4 *)(param_1 + 0x200) = 0;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x80),param_1 + 0x10);
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_14083b060(DAT_140c61b70,*(longlong *)(param_1 + 0x88),param_1 + 0x10);
    }
    if ((*(byte *)(param_1 + 0x17d) & 1) != 0) {
        *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) & 0xfe;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
        FUN_14083c1c0(DAT_140c61b80,*(int *)(param_1 + 0x78),param_1);
    }
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 != 0) {
        uVar6 = *(uint *)(lVar1 + 0x88);
        uVar6 = (uVar6 - 1 ^ uVar6) & 0x3fffffff ^ uVar6;
        *(uint *)(lVar1 + 0x88) = uVar6;
        uVar3 = DAT_140c10f20;
        if ((uVar6 & 0x3fffffff) == 0) {
            FUN_14084bd30(lVar1);
            FUN_140881720(uVar3,lVar1);
        }
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x50) == 0) {
            uVar5 = FUN_14083ede0(DAT_140c61ba8 + 0x2550,*(undefined4 *)(lVar1 + 0xc));
            *(undefined8 *)(lVar1 + 0x50) = uVar5;
        }
        if (*(longlong *)(lVar1 + 0x50) != 0) {
            FUN_1408604c0(param_1);
        }
        uVar3 = DAT_140c10f20;
        puVar2 = *(undefined8 **)(param_1 + 0x58);
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_140881720(uVar3,puVar2);
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x30);
        FUN_140881720(DAT_140c10f20);
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
    }
    FUN_14085fe50(*(undefined8 *)(param_1 + 0xa0),param_1);
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
        FUN_140856790(*(undefined8 *)(param_1 + 0xa8));
        *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_140841fe0(*(longlong *)(param_1 + 0x28),0);
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
        FUN_1408707f0();
        *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
    uVar3 = DAT_140c10f20;
    if ((uVar6 & 0x100) != 0) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
        if (lVar1 != 0) {
            FUN_1408562d0(lVar1);
            FUN_140881720(uVar3,lVar1);
        }
    }
    return;
}



void FUN_14088c130(longlong param_1)

{
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) | 1;
    // WARNING: Could not recover jumptable at 0x00014088c141. Too many branches
    // WARNING: Treating indirect jump as call
    (***(code ***)(param_1 + 0x220))();
    return;
}



undefined8 * FUN_14088c150(undefined8 *param_1)

{
    FUN_14088b340();
    *param_1 = &PTR_FUN_1409a8280;
    param_1[3] = &PTR_FUN_1409a8330;
    param_1[5] = &PTR_FUN_1409a93a0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return param_1;
}



undefined8 * FUN_14088c1e0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409a8280;
    param_1[3] = &PTR_FUN_1409a8330;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_14088b3b0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_14088c230(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar2 = FUN_14088c230();
        return lVar2 + lVar1;
    }
    return lVar1;
}



undefined8 FUN_14088c260(undefined8 param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    undefined local_138 [264];
    longlong local_30;

    FUN_140890370(local_138,param_1,1);
    if (local_30 == 0) {
        uVar1 = 0;
        if (param_2 != (undefined8 *)0x0) {
            *param_2 = 0;
        }
    }
    else {
        uVar1 = FUN_1408906b0(local_138,param_2);
    }
    FUN_140001b70(local_138);
    return uVar1;
}



undefined4 FUN_14088c2d0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_138 [264];
    longlong local_30 [5];

    FUN_140890370(local_138,param_1,0);
    if (local_30[0] == 0) {
        uVar2 = 2;
    }
    else {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x10) != 0) {
            lVar3 = FUN_14088c230();
            lVar4 = lVar4 + lVar3;
        }
        if (*(longlong *)(local_30[0] + 0x18) == 0) {
            uVar2 = 0;
        }
        else {
            lVar3 = FUN_1408904a0(local_138,0);
            uVar2 = FUN_14088fae0(local_30,(lVar1 - lVar4) - lVar3);
        }
        uVar2 = FUN_14088ce10(local_30[0],uVar2,param_2);
    }
    FUN_140001b70(local_138);
    return uVar2;
}



longlong FUN_14088c3b0(longlong *param_1)

{
    longlong local_res8;
    longlong local_res10 [3];

    (**(code **)(*param_1 + 0x70))(param_1,local_res10,&local_res8);
    return local_res8 - local_res10[0];
}



undefined8 FUN_14088c3e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 uVar1;

    FUN_14088b4a0();
    if (*(longlong *)(param_1 + 0x10) != 0) {
        *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
        return 1;
    }
    uVar1 = FUN_14088a1f0(DAT_140c629c0,param_1,param_3,param_2);
    return uVar1;
}



void FUN_14088c450(longlong param_1)

{
    FUN_14088b620();
    if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
        FUN_14088de00();
        return;
    }
    return;
}



void FUN_14088c480(longlong *param_1)

{
    if (param_1[2] == 0) {
        FUN_14088d710(param_1[0xd]);
    }
    if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
        (**(code **)(*param_1 + 0x40))(param_1);
    }
    FUN_14088b630(param_1);
    return;
}



void FUN_14088c4c0(longlong param_1,undefined4 param_2)

{
    *(undefined4 *)(param_1 + 0x20) = param_2;
    return;
}



void FUN_14088c4d0(longlong param_1,undefined8 param_2)

{
    *(undefined8 *)(param_1 + 0x68) = param_2;
    return;
}



undefined8 * FUN_14088c4e0(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return param_1;
}



longlong FUN_14088c520(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x28);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_14088c660(param_1,1), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x28;
    return lVar1;
}



undefined8 FUN_14088c5a0(int **param_1,int param_2)

{
    int *piVar1;
    undefined8 *puVar2;
    undefined8 uVar3;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    for (piVar1 = *param_1; (piVar1 != param_1[1] && (*piVar1 != param_2)); piVar1 = piVar1 + 10) {
    }
    puVar2 = (undefined8 *)0x0;
    if ((piVar1 == param_1[1]) || (puVar2 = (undefined8 *)(piVar1 + 2), puVar2 == (undefined8 *)0x0))
    {
        piVar1 = (int *)FUN_14088c520(param_1);
        if (piVar1 != (int *)0x0) {
            *piVar1 = param_2;
            puVar2 = (undefined8 *)(piVar1 + 2);
        }
        if (puVar2 == (undefined8 *)0x0) {
            uVar3 = 2;
            goto LAB_14088c62f;
        }
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    QueryPerformanceCounter(puVar2 + 3);
    uVar3 = 1;
    LAB_14088c62f:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return uVar3;
}



undefined8 FUN_14088c660(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x28);
    if (lVar2 == 0) {
        return 0;
    }
    uVar6 = (param_1[1] - *param_1) / 0x28;
    uVar5 = uVar6 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar6 != 0) {
            lVar4 = 0;
            uVar6 = uVar5;
            do {
                puVar3 = (undefined8 *)(*param_1 + lVar4);
                *(undefined8 *)(lVar4 + lVar2) = *puVar3;
                *(undefined8 *)(lVar4 + 8 + lVar2) = puVar3[1];
                *(undefined8 *)(lVar4 + 0x10 + lVar2) = puVar3[2];
                *(undefined8 *)(lVar4 + 0x18 + lVar2) = puVar3[3];
                *(undefined8 *)(lVar4 + 0x20 + lVar2) = puVar3[4];
                uVar6 = uVar6 - 1;
                lVar4 = lVar4 + 0x28;
            } while (uVar6 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = lVar2;
    param_1[1] = lVar2 + uVar5 * 0x28;
    return CONCAT71((int7)(uVar5 * 5 >> 8),1);
}



void FUN_14088c760(longlong *param_1)

{
    if (*param_1 != 0) {
        param_1[1] = *param_1;
        FUN_140881720(DAT_140c10f20);
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



void FUN_14088c7a0(int **param_1,int param_2,int *param_3)

{
    int *piVar1;
    int *piVar2;

    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    piVar2 = *param_1;
    piVar1 = param_1[1];
    if (piVar2 != piVar1) {
        do {
            if (*piVar2 == param_2) break;
            piVar2 = piVar2 + 10;
        } while (piVar2 != piVar1);
        if ((piVar2 != piVar1) && (piVar2 + 2 != (int *)0x0)) {
            piVar2[2] = *param_3;
            piVar2[3] = param_3[1];
            piVar2[4] = param_3[2];
            piVar2[5] = param_3[3];
            piVar2[6] = param_3[4];
            QueryPerformanceCounter((LARGE_INTEGER *)(piVar2 + 8));
        }
    }
    // WARNING: Could not recover jumptable at 0x00014088c833. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    return;
}



undefined8 *
FUN_14088c840(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
    uint uVar1;
    int *piVar2;

    param_1[2] = param_2;
    *param_1 = &PTR_LAB_1409a8340;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 3);
    param_1[3] = *param_3;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 1);
    piVar2 = (int *)param_3[2];
    if (param_1[5] != 0) {
        FUN_140828460();
    }
    if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + 1;
    }
    param_1[5] = piVar2;
    param_1[7] = param_4;
    uVar1 = *(uint *)(param_4 + 0x88);
    *(uint *)(param_4 + 0x88) = (uVar1 + 1 ^ uVar1) & 0x3fffffff ^ uVar1;
    FUN_14082a5f0(DAT_140c61b78,param_1,param_1[7]);
    return param_1;
}



undefined8 * FUN_14088c900(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    param_1[1] = param_2;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = param_3;
    if (param_3 != 0) {
        *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(ushort *)((longlong)param_1 + 0x3c) = *(ushort *)((longlong)param_1 + 0x3c) & 0xfff8;
    if (param_1[3] != 0) {
        *(undefined8 **)(param_1[3] + 0x88) = param_1;
    }
    return param_1;
}



void FUN_14088c940(undefined8 *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    uint uVar3;

    *param_1 = &PTR_LAB_1409a8340;
    FUN_14088de00();
    FUN_14082b190(DAT_140c61b78,param_1);
    lVar1 = param_1[7];
    param_1[8] = 0;
    if (lVar1 != 0) {
        uVar3 = *(uint *)(lVar1 + 0x88);
        uVar3 = (uVar3 - 1 ^ uVar3) & 0x3fffffff ^ uVar3;
        *(uint *)(lVar1 + 0x88) = uVar3;
        uVar2 = DAT_140c10f20;
        if ((uVar3 & 0x3fffffff) == 0) {
            FUN_14084bd30(lVar1);
            FUN_140881720(uVar2,lVar1);
        }
        param_1[7] = 0;
    }
    if (param_1[5] != 0) {
        FUN_140828460();
        return;
    }
    return;
}



void FUN_14088c9f0(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
    int iVar1;
    double dVar2;
    double dVar3;

    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x34) = param_2;
    if (param_4 < iVar1) {
        dVar3 = ((double)(param_4 - iVar1) * 1000.0) / (double)(ulonglong)DAT_140c110b4;
        if (dVar3 <= 0.0) {
            dVar2 = -0.5;
        }
        else {
            dVar2 = 0.5;
        }
        *(int *)(param_1 + 0x34) = (int)(dVar2 + dVar3) + param_2;
        param_4 = iVar1;
    }
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 2;
    *(undefined4 *)(param_1 + 0x38) = param_3;
    *(int *)(param_1 + 0x30) = param_4;
    return;
}



undefined FUN_14088ca60(longlong param_1)

{
    if (((*(longlong *)(param_1 + 0x18) == 0) && ((*(byte *)(param_1 + 0x3c) & 2) == 0)) &&
        (*(longlong *)(param_1 + 0x10) == 0)) {
        return 1;
    }
    return 0;
}



longlong FUN_14088ca80(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    uint7 uVar2;

    puVar1 = *(undefined8 **)(param_1 + 0x40);
    while( true ) {
        uVar2 = (uint7)((ulonglong)puVar1 >> 8);
        if (puVar1 == (undefined8 *)0x0) {
            return CONCAT71(uVar2,1);
        }
        if ((*(int *)(puVar1 + 2) == param_2) &&
            (*(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) <=
             (longlong)((ulonglong)*(uint *)(puVar1 + 4) + puVar1[3]))) break;
        puVar1 = (undefined8 *)*puVar1;
    }
    return (ulonglong)uVar2 << 8;
}



void FUN_14088cac0(longlong param_1,int param_2)

{
    if (((*(longlong *)(param_1 + 0x18) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x62) & 1) != 0)) &&
        ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
        FUN_14088e200(param_1,param_2 - *(int *)(param_1 + 8));
        return;
    }
    FUN_14088d540();
    return;
}



longlong * FUN_14088caf0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined local_res20 [8];
    undefined4 local_28 [2];
    undefined8 local_20;
    undefined4 local_18;
    ushort local_14;

    plVar2 = (longlong *)FUN_140830f00(DAT_140c61ba8,param_2,0);
    if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)
                (**(code **)(*plVar2 + 0x2a0))
                (plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),
                 param_1 + 0x18);
        if (plVar3 != (longlong *)0x0) {
            local_14 = local_14 & 0xffe8 | 8;
            local_20 = 0;
            local_28[0] = 0;
            local_18 = 0;
            uVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,local_28,0,0,local_res20,0);
            *param_3 = uVar1;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return plVar3;
    }
    *param_3 = 0;
    return (longlong *)0x0;
}



void FUN_14088cbc0(longlong param_1)

{
    undefined4 uVar1;

    uVar1 = DAT_140c10f20;
    if (param_1 != 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
            FUN_14088b630();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
        FUN_140881720(uVar1,param_1);
    }
    return;
}



void FUN_14088cc10(longlong param_1,undefined4 param_2)

{
    int *piVar1;
    longlong *plVar2;
    undefined8 local_18;
    undefined local_10;

    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x50);
    *piVar1 = *piVar1 + 1;
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (((*(byte *)((longlong)plVar2 + 0x62) & 3) != 0) &&
        ((*(byte *)((longlong)plVar2 + 0x62) & 0x10) == 0)) {
        *(undefined4 *)(param_1 + 0x48) = param_2;
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined8 *)(param_1 + 8),param_2,&local_18);
        *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x48);
    }
    FUN_14088b630(*(undefined8 *)(param_1 + 0x10));
    return;
}



void FUN_14088cc70(longlong param_1,char param_2)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;

    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x34) == 0)) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x80);
        if (param_2 != '\0') {
            iVar2 = FUN_140891630(uVar1);
            iVar3 = FUN_1408922f0(uVar1);
            *(int *)(param_1 + 0x30) = iVar2 + iVar3;
            return;
        }
        uVar4 = FUN_140891630(uVar1);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
    }
    return;
}



int FUN_14088cce0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
    int iVar1;
    undefined8 uVar2;
    int *piVar3;
    int iVar4;
    undefined4 local_res20 [2];
    longlong local_38;
    int *local_30;
    int *local_28;
    undefined4 local_20;

    *param_4 = 0;
    local_30 = (int *)0x0;
    local_28 = (int *)0x0;
    local_20 = 0;
    uVar2 = FUN_1408906b0(param_2,0);
    FUN_140892140(uVar2,param_3,&local_30);
    if ((int)((longlong)local_28 - (longlong)local_30 >> 2) == 0) {
        iVar4 = 3;
    }
    else if (*local_30 == 0) {
        iVar4 = 2;
    }
    else {
        iVar4 = 1;
        piVar3 = local_30;
        if (local_30 != local_28) {
            do {
                local_res20[0] = 0;
                iVar1 = FUN_140890530(param_2,*(longlong *)(param_1 + 8) -
                                              *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70),*piVar3,
                                      local_res20,0,0,&local_38);
                if ((iVar1 == 1) && ((iVar4 == 1 || (local_38 < *param_4)))) {
                    *param_4 = local_38;
                    iVar4 = 0;
                }
                piVar3 = piVar3 + 1;
            } while (piVar3 != local_28);
        }
    }
    if (local_30 != (int *)0x0) {
        local_28 = local_30;
        FUN_140881720(DAT_140c10f20,local_30);
    }
    return iVar4;
}



undefined8 FUN_14088ce10(longlong param_1,int param_2,int *param_3)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;

    if (*(longlong *)(param_1 + 0x18) == 0) {
        *(undefined8 *)(param_3 + 1) = 0;
        *(undefined8 *)(param_3 + 3) = 0;
        *param_3 = 0;
    }
    else {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x80);
        iVar3 = FUN_140892310(uVar1);
        uVar10 = 0;
        uVar11 = 0x408f4000;
        uVar8 = 0;
        uVar9 = 0xbfe00000;
        uVar12 = 0;
        uVar13 = 0;
        uVar6 = 0;
        uVar7 = 0x3fe00000;
        dVar5 = ((double)iVar3 * 1000.0) / (double)(ulonglong)DAT_140c110b4;
        if (dVar5 <= 0.0) {
            lVar2 = 0xbfe00000;
        }
        else {
            lVar2 = 0x3fe00000;
        }
        param_3[1] = (int)((double)(lVar2 << 0x20) + dVar5);
        iVar3 = FUN_140891630(uVar1);
        dVar5 = ((double)iVar3 * (double)CONCAT44(uVar11,uVar10)) / (double)(ulonglong)DAT_140c110b4;
        if (dVar5 < (double)CONCAT44(uVar13,uVar12) || dVar5 == (double)CONCAT44(uVar13,uVar12)) {
            dVar4 = (double)CONCAT44(uVar9,uVar8);
        }
        else {
            dVar4 = (double)CONCAT44(uVar7,uVar6);
        }
        param_3[2] = (int)(dVar4 + dVar5);
        iVar3 = FUN_1408922f0();
        dVar5 = ((double)iVar3 * (double)CONCAT44(uVar11,uVar10)) / (double)(ulonglong)DAT_140c110b4;
        if (dVar5 < (double)CONCAT44(uVar13,uVar12) || dVar5 == (double)CONCAT44(uVar13,uVar12)) {
            dVar4 = (double)CONCAT44(uVar9,uVar8);
        }
        else {
            dVar4 = (double)CONCAT44(uVar7,uVar6);
        }
        param_3[3] = (int)(dVar4 + dVar5);
        dVar5 = ((double)param_2 * (double)CONCAT44(uVar11,uVar10)) / (double)(ulonglong)DAT_140c110b4;
        if (dVar5 < (double)CONCAT44(uVar13,uVar12) || dVar5 == (double)CONCAT44(uVar13,uVar12)) {
            dVar4 = (double)CONCAT44(uVar9,uVar8);
        }
        else {
            dVar4 = (double)CONCAT44(uVar7,uVar6);
        }
        *param_3 = (int)(dVar4 + dVar5);
        param_2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x90) - param_2;
        if (param_2 < 1) {
            iVar3 = 0;
        }
        else {
            dVar5 = ((double)param_2 * (double)CONCAT44(uVar11,uVar10)) / (double)(ulonglong)DAT_140c110b4
                    ;
            if (dVar5 < (double)CONCAT44(uVar13,uVar12) || dVar5 == (double)CONCAT44(uVar13,uVar12)) {
                uVar6 = uVar8;
                uVar7 = uVar9;
            }
            iVar3 = (int)((double)CONCAT44(uVar7,uVar6) + dVar5);
        }
        param_3[4] = iVar3;
    }
    return 1;
}



uint FUN_14088d000(longlong param_1)

{
    return *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20) & 0xff00;
}



void FUN_14088d010(longlong param_1,int param_2,char param_3)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    int *piVar8;
    int *piVar9;
    bool bVar10;
    uint local_res8 [2];
    int local_res20 [2];
    ulonglong in_stack_fffffffffffffe38;
    uint in_stack_fffffffffffffe40;
    uint uVar11;
    ulonglong *puVar12;
    int *local_1a8;
    int *local_1a0;
    undefined4 local_198;
    ulonglong local_188;
    longlong local_180;
    longlong local_178;
    undefined local_170 [8];
    undefined local_168 [264];
    longlong local_60;
    char local_40;

    local_180 = *(longlong *)(param_1 + 8) - *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
    FUN_140890370(local_168,*(longlong *)(param_1 + 0x10),0);
    piVar1 = local_1a0;
    if (local_60 != 0) {
        bVar10 = param_3 != '\0';
        if (bVar10) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                    (*(longlong **)(param_1 + 0x10),local_168,0);
        }
        iVar4 = 2;
        do {
            lVar6 = FUN_1408906b0(local_168,&local_178);
            local_1a8 = (int *)0x0;
            local_1a0 = (int *)0x0;
            lVar7 = local_178;
            if (lVar6 != 0) {
                lVar7 = lVar6;
            }
            local_198 = 0;
            FUN_140890da0(lVar7,&local_1a8);
            piVar2 = local_1a8;
            for (piVar8 = local_1a8; piVar9 = (int *)0x0, piVar8 != local_1a0; piVar8 = piVar8 + 6) {
                if (*piVar8 == param_2) {
                    cVar3 = FUN_14088ca80(param_1,param_2);
                    piVar1 = local_1a0;
                    if ((cVar3 != '\0') &&
                        ((lVar7 = FUN_14088caf0(param_1,piVar8[1],local_res8), uVar11 = local_res8[0],
                                lVar7 != 0 || (piVar2 = local_1a8, piVar1 = local_1a0, piVar8[1] == 0)))) {
                        local_res20[0] = piVar8[3];
                        puVar12 = &local_188;
                        in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffff00;
                        in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
                        iVar4 = FUN_140890530(local_168,(int)local_res8[0] + local_180,piVar8[2],local_res20,
                                              in_stack_fffffffffffffe38,in_stack_fffffffffffffe40,puVar12);
                        piVar9 = piVar8;
                        if (iVar4 != 1) {
                            if (lVar7 != 0) {
                                FUN_14088b850(lVar7);
                            }
                            if (((local_40 != '\0') || (piVar8[5] != 1)) || (bVar10)) {
                                iVar4 = 1;
                            }
                            else {
                                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                                        (*(longlong **)(param_1 + 0x10),local_168,0);
                                bVar10 = true;
                            }
                            break;
                        }
                        in_stack_fffffffffffffe38 = local_188;
                        iVar5 = FUN_14088dff0(param_1,local_168,lVar7,piVar8,local_188,uVar11,
                                              (ulonglong)puVar12 & 0xffffffffffffff00 | (ulonglong)!bVar10);
                        piVar2 = local_1a8;
                        piVar1 = local_1a0;
                        if (iVar5 == 1) {
                            in_stack_fffffffffffffe40 = uVar11;
                            if (lVar7 != 0) {
                                FUN_14088c260(lVar7,local_170);
                                in_stack_fffffffffffffe40 = uVar11;
                            }
                            break;
                        }
                    }
                    local_1a0 = piVar2;
                    if (local_1a0 != (int *)0x0) {
                        FUN_140881720(DAT_140c10f20,local_1a0);
                        piVar1 = local_1a0;
                    }
                    goto LAB_14088d282;
                }
            }
            if (local_1a8 != (int *)0x0) {
                local_1a0 = local_1a8;
                FUN_140881720(DAT_140c10f20,local_1a8);
            }
            piVar1 = local_1a0;
        } while ((iVar4 != 1) && (piVar9 != (int *)0x0));
    }
    LAB_14088d282:
    local_1a0 = piVar1;
    FUN_140001b70(local_168);
    return;
}



void FUN_14088d2a0(longlong param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    uint uVar4;
    uint local_res20 [2];
    ulonglong in_stack_ffffffffffffffb8;
    uint local_38;
    uint local_34 [3];

    if (param_4 != 0) {
        uVar2 = FUN_140890d60(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x80));
        if ((param_4 >> 0xd & 1) != 0) {
            FUN_1408921c0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x80),param_5,uVar2,param_2,
                          in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)param_3);
        }
        if ((((param_4 >> 10 & 1) != 0) && (param_2 < 1)) && (0 < (int)(param_2 + param_3))) {
            FUN_14083bcf0(DAT_140c61b80,param_5,0x400,uVar2);
        }
        FUN_140891ed0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x80),param_2,param_3,local_res20,
                      &local_38,local_34);
        uVar4 = 0;
        if (((param_4 >> 9 & 1) != 0) && (uVar3 = 0, local_res20[0] != 0)) {
            do {
                FUN_14083bcf0(DAT_140c61b80,param_5,0x200,uVar2);
                uVar3 = uVar3 + 1;
            } while (uVar3 < local_res20[0]);
        }
        if (((param_4 >> 8 & 1) != 0) && (uVar3 = 0, local_38 != 0)) {
            do {
                FUN_14083bcf0(DAT_140c61b80,param_5,0x100,uVar2);
                uVar3 = uVar3 + 1;
            } while (uVar3 < local_38);
        }
        if (((param_4 >> 0xc & 1) != 0) && (local_34[0] != 0)) {
            do {
                FUN_14083bcf0(DAT_140c61b80,param_5,0x1000,uVar2);
                uVar4 = uVar4 + 1;
            } while (uVar4 < local_34[0]);
        }
        if ((((param_4 >> 0xb & 1) != 0) && (iVar1 = FUN_140891630(), param_2 <= iVar1)) &&
            (iVar1 < (int)(param_2 + param_3))) {
            FUN_14083bcf0(DAT_140c61b80,param_5,0x800,uVar2);
        }
    }
    return;
}



void FUN_14088d490(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    while (lVar2 = lVar1, lVar2 != 0) {
        if (*(int *)(lVar2 + 8) == 1) {
            FUN_14088a800(DAT_140c629c0,*(undefined8 *)(lVar2 + 0x10));
            lVar1 = *(longlong *)(lVar2 + 0x18);
            if (lVar2 == *(longlong *)(param_1 + 0x10)) {
                *(longlong *)(param_1 + 0x10) = lVar1;
            }
            else {
                *(longlong *)(lVar3 + 0x18) = lVar1;
            }
            FUN_140881720(DAT_140c10f20,lVar2);
        }
        else {
            lVar1 = *(longlong *)(lVar2 + 0x18);
            lVar3 = lVar2;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088d540(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffc;
    lVar2 = *(longlong *)(param_1 + 0x10);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) == 1) {
            FUN_14088a800(DAT_140c629c0,*(undefined8 *)(lVar2 + 0x10));
        }
        lVar1 = *(longlong *)(lVar2 + 0x18);
        lVar3 = lVar1;
        if (lVar2 == *(longlong *)(param_1 + 0x10)) {
            *(longlong *)(param_1 + 0x10) = lVar1;
            lVar3 = _DAT_00000018;
        }
        _DAT_00000018 = lVar3;
        FUN_140881720(DAT_140c10f20,lVar2);
        lVar2 = lVar1;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x88) = 0;
        lVar2 = *(longlong *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        if (lVar2 != 0) {
            FUN_14088b630();
            return;
        }
    }
    return;
}



void FUN_14088d620(longlong param_1,longlong **param_2,longlong param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar3 = (longlong *)0x0;
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        if ((param_3 < *plVar2) || ((*(int *)(plVar2 + 1) == 0 && (*plVar2 == param_3)))) {
            plVar1 = (longlong *)plVar2[3];
            if (plVar2 == *(longlong **)(param_1 + 0x10)) {
                *(longlong **)(param_1 + 0x10) = plVar1;
            }
            else {
                plVar3[3] = (longlong)plVar1;
            }
            if (*param_2 == (longlong *)0x0) {
                *param_2 = plVar2;
                plVar2[3] = 0;
            }
            else {
                plVar2[3] = (longlong)*param_2;
                *param_2 = plVar2;
            }
        }
        else {
            plVar1 = (longlong *)plVar2[3];
            plVar3 = plVar2;
        }
    }
    return;
}



void FUN_14088d6b0(longlong param_1,int param_2,int param_3,int *param_4)

{
    int iVar1;

    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        if ((0 < *param_4) && (param_3 < param_4[2])) {
            param_3 = param_4[2];
        }
        iVar1 = FUN_14088f4c0(*(longlong *)(param_1 + 0x18),param_3);
        iVar1 = iVar1 + (param_2 - param_3);
    }
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(int *)(param_1 + 0x20) = param_2 - iVar1;
    return;
}



void FUN_14088d710(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    FUN_14088daf0();
    FUN_14088d9d0(param_1,param_2,param_3);
    return;
}



void FUN_14088d750(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
    longlong lVar1;
    ushort uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    int iVar8;
    ulonglong uVar9;

    uVar9 = param_2 - *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar1 = uVar9 + (param_3 & 0xffffffff);
    if (lVar4 != 0) {
        uVar2 = *(ushort *)(param_1 + 0x3c);
        iVar8 = (int)uVar9;
        if ((uVar2 & 1) == 0) {
            if (((param_4 != '\0') && ((*(byte *)(lVar4 + 0x62) & 1) != 0)) && ((uVar2 & 4) == 0)) {
                FUN_14088e200(param_1,uVar9 & 0xffffffff);
            }
        }
        else if ((iVar8 <= *(int *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x20) < lVar1)) {
            if (param_4 == '\0') {
                FUN_14088b940(lVar4,param_1 + 0x24);
                *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffe;
            }
            else {
                *(ushort *)(param_1 + 0x3c) = uVar2 | 4;
                *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffe;
            }
        }
        if ((((*(byte *)(param_1 + 0x3c) & 2) != 0) && (iVar3 = *(int *)(param_1 + 0x30), iVar3 < lVar1)
            ) && (iVar8 <= iVar3)) {
            FUN_14088bb90(*(undefined8 *)(param_1 + 0x18),param_1 + 0x34,iVar3 - iVar8);
            *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) & 0xfffd;
        }
        lVar4 = *(longlong *)(param_1 + 0x18);
        if (((lVar4 != 0) && ((*(byte *)(lVar4 + 0x62) & 3) != 0)) &&
            ((*(byte *)(lVar4 + 0x62) & 0x10) == 0)) {
            FUN_14088f4d0(lVar4,uVar9 & 0xffffffff,param_3 & 0xffffffff);
        }
    }
    plVar5 = *(longlong **)(param_1 + 0x10);
    plVar7 = (longlong *)0x0;
    while (plVar6 = plVar5, plVar6 != (longlong *)0x0) {
        if (*plVar6 < lVar1) {
            if (*(int *)(plVar6 + 1) == 1) {
                FUN_14088a800(DAT_140c629c0,plVar6[2]);
            }
            plVar5 = (longlong *)plVar6[3];
            if (plVar6 == *(longlong **)(param_1 + 0x10)) {
                *(longlong **)(param_1 + 0x10) = plVar5;
            }
            else {
                plVar7[3] = (longlong)plVar5;
            }
            FUN_140881720(DAT_140c10f20,plVar6);
        }
        else {
            plVar5 = (longlong *)plVar6[3];
            plVar7 = plVar6;
        }
    }
    return;
}



undefined8 FUN_14088d8d0(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined local_138 [264];
    longlong local_30 [5];

    FUN_140890370(local_138,*(undefined8 *)(param_1 + 0x10),0);
    if (local_30[0] != 0) {
        if (param_3 != 0) {
            do {
                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                        (*(longlong **)(param_1 + 0x10),local_138,0);
                param_3 = param_3 + -1;
            } while (param_3 != 0);
        }
        puVar1 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x20);
        if (puVar1 != (undefined8 *)0x0) {
            uVar4 = 1;
            *(undefined4 *)(puVar1 + 1) = 1;
            lVar2 = FUN_1408904a0(local_138,0);
            uVar3 = FUN_14088fae0(local_30,param_4 - lVar2);
            puVar1[2] = param_2;
            *puVar1 = uVar3;
            if (*(longlong *)(local_30[0] + 0x10) == 0) {
                *(undefined8 **)(local_30[0] + 0x10) = puVar1;
                puVar1[3] = 0;
            }
            else {
                puVar1[3] = *(longlong *)(local_30[0] + 0x10);
                *(undefined8 **)(local_30[0] + 0x10) = puVar1;
            }
            goto LAB_14088d9a6;
        }
    }
    uVar4 = 2;
    LAB_14088d9a6:
    FUN_140001b70(local_138);
    return uVar4;
}



void FUN_14088d9d0(longlong param_1,longlong param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    uint uVar3;
    undefined local_138 [264];
    longlong local_30 [3];
    longlong local_18;
    char local_10;

    param_3 = param_3 & 0xffffffff;
    FUN_140890370(local_138,*(undefined8 *)(param_1 + 0x10),0);
    if (local_30[0] != 0) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20) & 0xff00;
        FUN_1408907b0(local_138,param_2,param_3,uVar3,*(undefined4 *)(param_1 + 0x30));
        while (local_10 == '\0') {
            lVar1 = FUN_1408904a0(local_138,0);
            lVar1 = FUN_14088fae0(local_30,param_2 - lVar1);
            if (lVar1 < local_18) {
                uVar2 = local_18 - lVar1;
            }
            else {
                uVar2 = 0;
            }
            if (param_3 <= uVar2) break;
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                    (*(longlong **)(param_1 + 0x10),local_138,0);
            FUN_1408907b0(local_138,param_2,param_3,uVar3,*(undefined4 *)(param_1 + 0x30));
        }
    }
    FUN_140001b70(local_138);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14088daf0(longlong param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined4 local_res8 [2];
    undefined4 local_68 [2];
    undefined4 local_60;
    longlong local_58;
    undefined local_50;
    undefined8 local_48;
    undefined8 uStack64;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    lVar1 = param_2 + (ulonglong)param_3;
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    puVar6 = (undefined8 *)0x0;
    puVar4 = uStack64;
    do {
        while( true ) {
            uStack64 = puVar6;
            puVar6 = puVar5;
            if (puVar6 == (undefined8 *)0x0) {
                return;
            }
            if (puVar6[1] == 0) break;
            lVar7 = puVar6[3] - (longlong)*(int *)((longlong)puVar6 + 0x24);
            if (lVar7 < lVar1) {
                uStack64 = puVar4;
                if (param_2 <= lVar7) {
                    local_60 = 0;
                    local_68[0] = 0;
                    FUN_14088b940(puVar6[1],local_68);
                }
                lVar7 = (longlong)*(int *)(puVar6 + 5) + puVar6[3];
                if ((param_2 <= lVar7) && (lVar7 < lVar1)) {
                    local_res8[0] = 0;
                    FUN_14088bb90(puVar6[1],local_res8,(int)lVar7 - (int)param_2);
                }
                plVar2 = (longlong *)puVar6[1];
                puVar4 = uStack64;
                if (((*(byte *)((longlong)plVar2 + 0x62) & 3) != 0) &&
                    ((*(byte *)((longlong)plVar2 + 0x62) & 0x10) == 0)) {
                    local_50 = 1;
                    local_58 = puVar6[3] + 1;
                    (**(code **)(*plVar2 + 0x50))(plVar2,param_2,(ulonglong)param_3,&local_58);
                    lVar7 = puVar6[1];
                    puVar4 = uStack64;
                    if ((1 < (*(byte *)(lVar7 + 0x62) & 0xf)) && (puVar6[1] = 0, lVar7 != 0)) {
                        FUN_14088b630(lVar7);
                        puVar4 = uStack64;
                    }
                }
            }
            LAB_14088dbed:
            uStack64 = puVar4;
            puVar5 = (undefined8 *)*puVar6;
            puVar4 = uStack64;
        }
        if (param_2 <= (longlong)((ulonglong)*(uint *)(puVar6 + 4) + puVar6[3])) goto LAB_14088dbed;
        local_48 = *puVar6;
        if (puVar6 == *(undefined8 **)(param_1 + 0x40)) {
            *(undefined8 *)(param_1 + 0x40) = local_48;
        }
        else {
            *uStack64 = local_48;
        }
        uVar3 = DAT_140c10f20;
        lVar7 = puVar6[1];
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack64._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
        local_38 = (undefined4)local_48;
        uStack52 = local_48._4_4_;
        uStack48 = (undefined4)uStack64;
        uStack44 = uStack64._4_4_;
        puVar6[1] = 0;
        if (lVar7 != 0) {
            FUN_14088b630();
        }
        if (puVar6[1] != 0) {
            FUN_14088b630();
            puVar6[1] = 0;
        }
        FUN_140881720(uVar3,puVar6);
        puVar5 = (undefined8 *)CONCAT44(uStack52,local_38);
        puVar6 = (undefined8 *)CONCAT44(uStack44,uStack48);
        puVar4 = uStack64;
    } while( true );
}



longlong FUN_14088dc90(longlong param_1,undefined4 param_2,undefined4 *param_3,longlong *param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    undefined local_158 [264];
    longlong local_50;
    char local_30;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
    FUN_140890370(local_158,*(longlong *)(param_1 + 0x10),0);
    lVar5 = 0;
    lVar6 = 0;
    if (local_50 == 0) goto LAB_14088ddc9;
    lVar3 = *(longlong *)(local_50 + 0x18);
    iVar7 = 3;
    *param_3 = 0;
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x62) & 1) == 0)) {
        LAB_14088dd23:
        if (local_30 != '\0') goto LAB_14088ddc9;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                (*(longlong **)(param_1 + 0x10),local_158,0);
        lVar5 = lVar6;
        if (*(longlong *)(local_50 + 0x18) == 0) {
            if (((iVar7 != 1) || (lVar3 == 0)) || ((*(byte *)(lVar3 + 0x62) & 1) == 0))
                goto LAB_14088ddc9;
            lVar5 = FUN_140890920(local_158);
            *param_4 = lVar5;
        }
        else {
            if ((iVar7 == 3) && ((*(byte *)(*(longlong *)(local_50 + 0x18) + 0x62) & 1) == 0))
                goto LAB_14088ddc9;
            *param_3 = 1;
            iVar4 = FUN_14088cce0(param_1,local_158,param_2,param_4);
            if (iVar4 == 0) goto LAB_14088ddc3;
            if (((iVar4 == 1) || (1 < iVar4 - 2U)) || (iVar7 == 3)) goto LAB_14088ddc9;
            lVar5 = FUN_140890920(local_158);
            *param_4 = lVar5;
        }
    }
    else {
        iVar7 = FUN_14088cce0(param_1,local_158,param_2,param_4);
        if (iVar7 == 2) goto LAB_14088ddc9;
        if (iVar7 != 0) goto LAB_14088dd23;
        LAB_14088ddc3:
        lVar5 = *param_4;
    }
    lVar5 = lVar5 - (lVar1 - lVar2);
    LAB_14088ddc9:
    FUN_140001b70(local_158);
    return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088de00(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 uVar5;

    puVar1 = *(undefined8 **)(param_1 + 0x40);
    puVar4 = puVar1;
    while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar4;
        puVar1 = puVar2;
        if (puVar4 == *(undefined8 **)(param_1 + 0x40)) {
            *(undefined8 **)(param_1 + 0x40) = puVar2;
            puVar1 = (undefined8 *)_DAT_00000000;
        }
        _DAT_00000000 = puVar1;
        uVar5 = DAT_140c10f20;
        lVar3 = puVar4[1];
        puVar4[1] = 0;
        if (lVar3 != 0) {
            FUN_14088b630();
        }
        if (puVar4[1] != 0) {
            FUN_14088b630();
            puVar4[1] = 0;
        }
        FUN_140881720(uVar5,puVar4);
        puVar4 = puVar2;
        puVar1 = *(undefined8 **)(param_1 + 0x40);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14088dec0(longlong param_1,longlong *param_2)

{
    char cVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;

    lVar7 = *param_2;
    do {
        if (lVar7 == 0) {
            return;
        }
        if (*(int *)(lVar7 + 8) == 0) {
            puVar3 = *(undefined8 **)(lVar7 + 0x10);
            plVar4 = (longlong *)puVar3[1];
            uVar2 = *(undefined4 *)(puVar3 + 2);
            cVar1 = *(char *)((longlong)puVar3 + 0x2c);
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x88))
                        (plVar4,*(longlong *)(param_1 + 8) -
                                *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70));
            }
            for (puVar5 = *(undefined8 **)(param_1 + 0x40); puVar5 != (undefined8 *)0x0;
                 puVar5 = (undefined8 *)*puVar5) {
                if (puVar5 == puVar3) {
                    if (puVar5 != (undefined8 *)0x0) {
                        *(undefined4 *)(puVar5 + 2) = 0;
                    }
                    break;
                }
            }
            if (cVar1 != '\0') {
                FUN_14088d010(param_1,uVar2);
            }
        }
        else if (*(int *)(lVar7 + 8) == 1) {
            FUN_14088ad10(DAT_140c629c0,*(undefined8 *)(lVar7 + 0x10));
        }
        lVar6 = *(longlong *)(lVar7 + 0x18);
        lVar8 = lVar6;
        if (lVar7 == *param_2) {
            *param_2 = lVar6;
            lVar8 = _DAT_00000018;
        }
        _DAT_00000018 = lVar8;
        FUN_140881720(DAT_140c10f20);
        lVar7 = lVar6;
    } while( true );
}



undefined4
FUN_14088dff0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
              longlong param_5,undefined4 param_6,char param_7)

{
    uint uVar1;
    undefined uVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;

    plVar6 = (longlong *)FUN_1408819f0(DAT_140c10f20);
    if (plVar6 != (longlong *)0x0) {
        plVar6[1] = 0;
        puVar7 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
        uVar5 = DAT_140c10f20;
        if (puVar7 == (undefined8 *)0x0) {
            lVar8 = plVar6[1];
            plVar6[1] = 0;
            if (lVar8 != 0) {
                FUN_14088b630();
            }
            if (plVar6[1] != 0) {
                FUN_14088b630();
                plVar6[1] = 0;
            }
            FUN_140881720(uVar5,plVar6);
            uVar5 = 2;
        }
        else {
            *(undefined4 *)(plVar6 + 2) = *param_4;
            uVar5 = param_4[1];
            plVar6[3] = param_5;
            *(undefined4 *)((longlong)plVar6 + 0x14) = uVar5;
            uVar1 = DAT_140c110b4 / 1000;
            iVar3 = param_4[4];
            *(undefined4 *)((longlong)plVar6 + 0x24) = param_6;
            *(uint *)(plVar6 + 4) = uVar1 * iVar3;
            if (param_3 != 0) {
                *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
                *(longlong *)(param_3 + 0x70) = param_5;
                lVar8 = plVar6[1];
                plVar6[1] = param_3;
                if (lVar8 != 0) {
                    FUN_14088b630();
                }
                lVar8 = FUN_14088c260(param_3,0);
                if (lVar8 == 0) {
                    *(undefined4 *)(plVar6 + 5) = 0;
                }
                else {
                    iVar3 = FUN_140891630(lVar8);
                    iVar4 = FUN_1408922f0(lVar8);
                    *(int *)(plVar6 + 5) = iVar3 + iVar4;
                }
            }
            if ((param_7 == '\0') || (uVar2 = 1, param_4[5] == 0)) {
                uVar2 = 0;
            }
            *(undefined *)((longlong)plVar6 + 0x2c) = uVar2;
            if (*(longlong *)(param_1 + 0x40) == 0) {
                *(longlong **)(param_1 + 0x40) = plVar6;
                *plVar6 = 0;
            }
            else {
                *plVar6 = *(longlong *)(param_1 + 0x40);
                *(longlong **)(param_1 + 0x40) = plVar6;
            }
            *(undefined4 *)(puVar7 + 1) = 0;
            lVar8 = FUN_1408904a0(param_2,0);
            uVar9 = FUN_14088fae0(param_2 + 0x108,param_5 - lVar8);
            puVar7[2] = plVar6;
            *puVar7 = uVar9;
            lVar8 = *(longlong *)(param_2 + 0x108);
            if (*(longlong *)(lVar8 + 0x10) == 0) {
                *(undefined8 **)(lVar8 + 0x10) = puVar7;
                puVar7[3] = 0;
                uVar5 = 1;
            }
            else {
                puVar7[3] = *(longlong *)(lVar8 + 0x10);
                *(undefined8 **)(lVar8 + 0x10) = puVar7;
                uVar5 = 1;
            }
        }
        return uVar5;
    }
    return 2;
}



void FUN_14088e1d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 1;
    *(undefined4 *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = param_4;
    return;
}



void FUN_14088e200(longlong param_1,int param_2)

{
    int iVar1;
    double dVar2;
    double dVar3;
    int local_res8;
    undefined4 local_resc;

    local_resc = 4;
    param_2 = param_2 - *(int *)(*(longlong *)(param_1 + 0x18) + 0x90);
    iVar1 = 0;
    if (0 < param_2) {
        iVar1 = param_2;
    }
    dVar3 = ((double)iVar1 * 1000.0) / (double)(ulonglong)DAT_140c110b4;
    if (dVar3 <= 0.0) {
        dVar2 = -0.5;
    }
    else {
        dVar2 = 0.5;
    }
    local_res8 = (int)(dVar2 + dVar3);
    FUN_14088bb90(*(longlong *)(param_1 + 0x18),&local_res8,0xffffffff);
    *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 4;
    return;
}



int FUN_14088e290(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    undefined4 uVar1;
    char cVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong *plVar5;

    iVar3 = 1;
    puVar4 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar4 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar4;
    plVar5 = (longlong *)FUN_140830f00(DAT_140c61ba8,uVar1,0);
    if (plVar5 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar5 = (longlong *)FUN_140894180(uVar1);
        if (plVar5 == (longlong *)0x0) {
            iVar3 = 2;
        }
        else {
            iVar3 = FUN_1408947c0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,0);
            if (iVar3 != 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        LAB_14088e3a7:
        if (iVar3 != 1) goto LAB_14088e3ba;
    }
    else if ((plVar5[0x16] == plVar5[0x15]) || (cVar2 = FUN_140894360(plVar5), cVar2 == '\0')) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        iVar3 = FUN_1408947c0(plVar5,puVar4,*(undefined4 *)(param_2 + 1),param_3,1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar3 != 1) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            goto LAB_14088e3a7;
        }
    }
    FUN_14083e110(param_1,param_3,plVar5);
    LAB_14088e3ba:
    FUN_14083c740(param_1);
    return iVar3;
}



int FUN_14088e3f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    int iVar4;

    iVar4 = 1;
    puVar2 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar2 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar2;
    plVar3 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar3 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar3 = (longlong *)FUN_140892d30(uVar1);
        if (plVar3 == (longlong *)0x0) {
            iVar4 = 2;
        }
        else {
            iVar4 = FUN_140893020(plVar3,puVar2,*(undefined4 *)(param_2 + 1));
            if (iVar4 != 1) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar4 != 1) goto LAB_14088e4ab;
    }
    FUN_14083e110(param_1,param_3,plVar3);
    LAB_14088e4ab:
    FUN_14083c740(param_1);
    return iVar4;
}



int FUN_14088e4e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    int iVar4;

    iVar4 = 1;
    puVar2 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar2 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar2;
    plVar3 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar3 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar3 = (longlong *)FUN_1408916f0(uVar1);
        if (plVar3 == (longlong *)0x0) {
            iVar4 = 2;
        }
        else {
            iVar4 = FUN_140892390(plVar3,puVar2,*(undefined4 *)(param_2 + 1));
            if (iVar4 != 1) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar4 != 1) goto LAB_14088e59b;
    }
    FUN_14083e110(param_1,param_3,plVar3);
    LAB_14088e59b:
    FUN_14083c740(param_1);
    return iVar4;
}



int FUN_14088e5d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    int iVar4;

    iVar4 = 1;
    puVar2 = (undefined4 *)FUN_14083c610(param_1,*(undefined4 *)(param_2 + 1));
    if (puVar2 == (undefined4 *)0x0) {
        return 2;
    }
    uVar1 = *puVar2;
    plVar3 = (longlong *)FUN_14083ede0(param_4,uVar1);
    if (plVar3 == (longlong *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        plVar3 = (longlong *)FUN_140893410(uVar1);
        if (plVar3 == (longlong *)0x0) {
            iVar4 = 2;
        }
        else {
            iVar4 = FUN_1408939d0(plVar3,puVar2,*(undefined4 *)(param_2 + 1));
            if (iVar4 != 1) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
            }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140c61bb8);
        if (iVar4 != 1) goto LAB_14088e68b;
    }
    FUN_14083e110(param_1,param_3,plVar3);
    LAB_14088e68b:
    FUN_14083c740(param_1);
    return iVar4;
}



undefined8 FUN_14088e6c0(char *param_1,undefined8 param_2,undefined4 param_3)

{
    char cVar1;
    undefined8 uVar2;

    cVar1 = *param_1;
    if (cVar1 == '\n') {
        uVar2 = FUN_140830ed0(DAT_140c61ba8,0);
        uVar2 = FUN_14088e4e0(DAT_140c61b58,param_1,param_2,uVar2);
        return uVar2;
    }
    if (cVar1 == '\v') {
        uVar2 = FUN_14088e290(DAT_140c61b58,param_1,param_2,param_3);
        return uVar2;
    }
    if (cVar1 == '\f') {
        uVar2 = FUN_140830ed0(DAT_140c61ba8,0);
        uVar2 = FUN_14088e5d0(DAT_140c61b58,param_1,param_2,uVar2);
        return uVar2;
    }
    if (cVar1 == '\r') {
        uVar2 = FUN_140830ed0(DAT_140c61ba8,0);
        uVar2 = FUN_14088e3f0(DAT_140c61b58,param_1,param_2,uVar2);
        return uVar2;
    }
    return 3;
}



undefined8 * FUN_14088e7b0(undefined8 *param_1,undefined8 param_2)

{
    param_1[2] = param_2;
    *param_1 = &PTR_FUN_1409a8348;
    return param_1;
}



void FUN_14088e7d0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8348;
    return;
}



undefined8 * FUN_14088e7e0(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a8348;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



void FUN_14088e810(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
        *(longlong *)(lVar1 + 0x30) = param_1;
        *(undefined8 *)(param_1 + 8) = 0;
        *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        return;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(lVar1 + 0x30);
    *(longlong *)(lVar1 + 0x30) = param_1;
    *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
    return;
}



undefined8 * FUN_14088e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    ushort uVar2;
    LPCRITICAL_SECTION lpCriticalSection;
    longlong lVar3;
    longlong *plVar4;
    ushort uVar5;

    FUN_14088b340(param_1,param_3);
    *param_1 = &PTR_FUN_1409a83a0;
    param_1[3] = &PTR_FUN_1409a83e8;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_140894f70(param_1 + 0xd);
    uVar5 = 0;
    param_1[0x10] = param_2;
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    plVar1 = param_1 + 0x13;
    *plVar1 = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x19] = 0;
    if (param_1[0x10] == 0) {
        return param_1;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,0);
    EnterCriticalSection(lpCriticalSection);
    (**(code **)(*(longlong *)param_1[0x10] + 8))();
    uVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x290))();
    if (uVar2 != 0) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar2 << 3);
        *plVar1 = lVar3;
        param_1[0x14] = lVar3;
        if ((lVar3 != 0) && (*(uint *)(param_1 + 0x15) = (uint)uVar2, uVar2 != 0)) {
            do {
                plVar4 = (longlong *)FUN_1408928b0(param_1[0x10],uVar5);
                (**(code **)(*plVar4 + 8))(plVar4);
                FUN_14084ca80(plVar1);
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
        }
    }
    LeaveCriticalSection(lpCriticalSection);
    return param_1;
}



void FUN_14088e9a0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a8380;
    if (param_1[6] == 0) {
        *param_1 = &PTR_FUN_1409a70c8;
        return;
    }
    do {
        if (param_1[6] != 0) {
            param_1[6] = *(undefined8 *)(param_1[6] + 0x18);
            FUN_140881720(DAT_140c10f20);
        }
    } while (param_1[6] != 0);
    *param_1 = &PTR_FUN_1409a70c8;
    return;
}



void FUN_14088ea10(undefined8 *param_1)

{
    LPCRITICAL_SECTION lpCriticalSection;
    longlong **pplVar1;

    *param_1 = &PTR_FUN_1409a83a0;
    param_1[3] = &PTR_FUN_1409a83e8;
    param_1[5] = &PTR_FUN_1409a93a0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if (param_1[0x16] != 0) {
        param_1[0x17] = param_1[0x16];
        FUN_140881720(DAT_140c10f20);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (param_1[0x10] != 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)FUN_140830ed0(DAT_140c61ba8,0);
        EnterCriticalSection(lpCriticalSection);
        pplVar1 = (longlong **)param_1[0x13];
        if (pplVar1 != (longlong **)param_1[0x14]) {
            do {
                (**(code **)(**pplVar1 + 0x10))();
                pplVar1 = pplVar1 + 1;
            } while (pplVar1 != (longlong **)param_1[0x14]);
        }
        (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
        LeaveCriticalSection(lpCriticalSection);
    }
    if (param_1[0x13] != 0) {
        param_1[0x14] = param_1[0x13];
        FUN_140881720(DAT_140c10f20);
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        *(undefined4 *)(param_1 + 0x15) = 0;
    }
    FUN_140894f90(param_1 + 0xd);
    FUN_14088b3b0(param_1);
    return;
}



undefined8 FUN_14088eb50(undefined8 param_1,uint param_2)

{
    FUN_14088e9a0();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14088ebb0(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
    int *piVar1;
    int **ppiVar2;
    int *piVar3;

    piVar3 = *(int **)(*(longlong *)(param_1 + 0x18) + 0xc0);
    piVar1 = *(int **)(*(longlong *)(param_1 + 0x18) + 200);
    if (piVar3 != piVar1) {
        do {
            if ((*piVar3 == param_2) && (piVar3[1] == param_3)) break;
            piVar3 = piVar3 + 6;
        } while (piVar3 != piVar1);
        if ((piVar3 != piVar1) && (piVar3 != (int *)0x0)) {
            ppiVar2 = (int **)FUN_1408819f0(DAT_140c10f20);
            if (ppiVar2 != (int **)0x0) {
                *ppiVar2 = piVar3;
                *(undefined4 *)(ppiVar2 + 2) = param_4;
                ppiVar2[1] = (int *)0x0;
                if (*(int **)(param_1 + 0x30) == (int *)0x0) {
                    *(int ***)(param_1 + 0x30) = ppiVar2;
                    ppiVar2[3] = (int *)0x0;
                    return;
                }
                ppiVar2[3] = *(int **)(param_1 + 0x30);
                *(int ***)(param_1 + 0x30) = ppiVar2;
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14088ed70(longlong param_1,ulonglong param_2,ulonglong param_3)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong *plVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    undefined8 uVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    longlong local_res8;
    uint local_res10;
    uint local_res18;
    longlong local_res20;
    longlong *local_78;
    undefined4 local_70 [2];
    undefined8 local_68;
    undefined8 uStack96;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;

    local_res18 = (uint)param_3;
    local_res10 = (uint)param_2;
    uVar15 = param_3 & 0xffffffff;
    uVar16 = param_2 & 0xffffffff;
    iVar10 = FUN_140895120(param_1 + 0x68,param_2,param_3,&local_78);
    do {
        if (iVar10 != 0x2d) {
            return;
        }
        iVar10 = *(int *)(local_78 + 2);
        iVar11 = (**(code **)(*local_78 + 8))();
        plVar8 = local_78;
        if (iVar11 == 0) {
            local_70[0] = 0;
            local_res20 = 0;
            local_res8 = local_78[4];
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
            iVar11 = *(int *)((longlong)local_78 + 0x2c);
            uVar1 = *(undefined4 *)(local_78 + 5);
            uVar4 = *(undefined8 *)(lVar3 + 0x38);
            uVar13 = FUN_1408942c0(local_78[3],*(undefined4 *)(local_res8 + 4));
            lVar7 = local_res8;
            iVar10 = FUN_14088a960(param_1,plVar8[3],uVar13,uVar4,local_70,lVar3 + 0x18,local_res8,uVar1,
                                   iVar11 + (iVar10 - (int)uVar16),&local_res20);
            uVar2 = local_res10;
            if (iVar10 == 1) {
                if ((*(byte *)(param_1 + 0x62) & 2) == 0) {
                    puVar14 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
                    if (puVar14 != (undefined8 *)0x0) {
                        iVar10 = *(int *)(lVar7 + 0xc);
                        iVar11 = *(int *)(lVar7 + 8);
                        iVar12 = FUN_140892310(*(undefined8 *)(param_1 + 0x80));
                        puVar14[3] = local_res20;
                        *puVar14 = &PTR_FUN_1409a8390;
                        *(int *)(puVar14 + 2) = (iVar10 + iVar11) - iVar12;
                        FUN_140895170(param_1 + 0x68);
                        while (plVar5 = (longlong *)plVar8[6], plVar5 != (longlong *)0x0) {
                            plVar8[6] = plVar5[3];
                            plVar5[1] = local_res20;
                            *(undefined *)(puVar14 + 4) = 1;
                            if (*(longlong *)(param_1 + 200) == 0) {
                                *(longlong **)(param_1 + 200) = plVar5;
                                plVar5[3] = 0;
                            }
                            else {
                                plVar5[3] = *(longlong *)(param_1 + 200);
                                *(longlong **)(param_1 + 200) = plVar5;
                            }
                            if (*(int *)(*plVar5 + 4) == 2) {
                                FUN_14088be20(local_res20);
                            }
                            else if (*(int *)(*plVar5 + 4) == 3) {
                                *(uint *)(local_res20 + 0x248) = *(uint *)(local_res20 + 0x248) | 2;
                            }
                        }
                        uVar16 = (ulonglong)local_res10;
                        uVar15 = (ulonglong)local_res18;
                        goto LAB_14088f034;
                    }
                    FUN_14088c130(local_res20);
                    uVar2 = local_res10;
                }
                else {
                    FUN_14088c130(local_res20);
                    uVar2 = local_res10;
                    while (plVar5 = (longlong *)plVar8[6], plVar5 != (longlong *)0x0) {
                        plVar8[6] = plVar5[3];
                        plVar5[1] = local_res20;
                        FUN_140892310(*(undefined8 *)(param_1 + 0x80));
                        FUN_140835ca0(*plVar5 + 8);
                        FUN_14088c040(plVar5[1],*(undefined4 *)(*plVar5 + 4));
                        FUN_140881720(DAT_140c10f20);
                    }
                }
            }
            uVar16 = (ulonglong)uVar2;
            uVar15 = (ulonglong)local_res18;
        }
        else if ((iVar11 == 1) && (FUN_14088c130(local_78[3]), *(char *)(plVar8 + 4) != '\0')) {
            plVar9 = *(longlong **)(param_1 + 200);
            plVar5 = (longlong *)0x0;
            while (plVar6 = plVar9, plVar6 != (longlong *)0x0) {
                if (plVar6[1] == plVar8[3]) {
                    iVar10 = FUN_140892310(*(undefined8 *)(param_1 + 0x80));
                    FUN_140835ca0(*plVar6 + 8,((int)uVar16 + iVar10 + (int)uVar15) - *(int *)(plVar6 + 2),0,
                                  &local_res8);
                    FUN_14088c040(plVar6[1],*(undefined4 *)(*plVar6 + 4));
                    local_68 = plVar6[3];
                    if (plVar6 == *(longlong **)(param_1 + 200)) {
                        *(longlong *)(param_1 + 200) = local_68;
                    }
                    else {
                        plVar5[3] = local_68;
                    }
                    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                    uStack96._0_4_ = SUB84(plVar5,0);
                    uStack96._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
                    local_58 = (undefined4)local_68;
                    uStack84 = local_68._4_4_;
                    uStack80 = (undefined4)uStack96;
                    uStack76 = uStack96._4_4_;
                    uStack96 = plVar5;
                    FUN_140881720(DAT_140c10f20);
                    plVar9 = (longlong *)CONCAT44(uStack84,local_58);
                    plVar5 = (longlong *)CONCAT44(uStack76,uStack80);
                }
                else {
                    plVar9 = (longlong *)plVar6[3];
                    plVar5 = plVar6;
                }
            }
        }
        LAB_14088f034:
        uVar1 = DAT_140c10f20;
        if (local_78 != (longlong *)0x0) {
            (**(code **)*local_78)(local_78,0);
            FUN_140881720(uVar1);
        }
        iVar10 = FUN_140895120(param_1 + 0x68,uVar16,uVar15,&local_78);
    } while( true );
}



ulonglong FUN_14088f140(longlong param_1,longlong param_2,uint *param_3,uint *param_4)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    int iVar6;

    if (1 < (*(byte *)(param_1 + 0x62) & 0xf)) {
        return 0;
    }
    if (((byte)*(undefined4 *)(*(longlong *)(param_2 + 0xa8) + 0x10) & 0x7c) == 4) {
        *param_3 = *(uint *)(*(longlong *)(param_2 + 0xa8) + 0x28);
    }
    else {
        *param_3 = 0;
    }
    *param_3 = *param_3 + 0x3ff & 0xfffffc00;
    lVar1 = *(longlong *)(param_2 + 0x240);
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x48);
    iVar2 = FUN_14088fdc0();
    uVar4 = FUN_140892310();
    iVar6 = (iVar2 - iVar6) + (int)uVar4;
    if ((int)(*param_3 + iVar6) < *(int *)(lVar1 + 0xc) + *(int *)(lVar1 + 8)) {
        uVar3 = (*(int *)(lVar1 + 0x14) - *(int *)(lVar1 + 8)) + *param_3 + iVar6;
        uVar5 = uVar3 % *(uint *)(lVar1 + 0x10);
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 / (ulonglong)*(uint *)(lVar1 + 0x10) >> 8),1);
        if ((int)uVar5 < 0) {
            uVar5 = 0;
        }
        *param_4 = uVar5;
    }
    else {
        uVar4 = uVar4 & 0xffffffffffffff00;
    }
    return uVar4;
}



undefined8 FUN_14088f230(longlong param_1)

{
    undefined2 *puVar1;
    undefined2 uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;

    FUN_14088b4a0();
    uVar8 = *(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 3;
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
        lVar3 = FUN_1408819f0(DAT_140c10f20,(uVar8 & 0xffffffff) * 2);
        *(longlong *)(param_1 + 0xb0) = lVar3;
        *(longlong *)(param_1 + 0xb8) = lVar3;
        if (lVar3 == 0) {
            return 0x34;
        }
        *(int *)(param_1 + 0xc0) = iVar7;
    }
    lVar3 = *(longlong *)(param_1 + 0x98);
    if (lVar3 != *(longlong *)(param_1 + 0xa0)) {
        do {
            uVar2 = FUN_140894250();
            uVar8 = *(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 1 & 0xffffffff;
            if (uVar8 < *(uint *)(param_1 + 0xc0)) {
                LAB_14088f364:
                if (uVar8 < *(uint *)(param_1 + 0xc0)) {
                    puVar1 = *(undefined2 **)(param_1 + 0xb8);
                    *(undefined2 **)(param_1 + 0xb8) = puVar1 + 1;
                    if (puVar1 != (undefined2 *)0x0) {
                        *puVar1 = uVar2;
                    }
                }
            }
            else {
                uVar9 = *(uint *)(param_1 + 0xc0) + 0x10;
                lVar4 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar9 * 2);
                if (lVar4 != 0) {
                    uVar5 = *(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 1;
                    uVar10 = uVar5 & 0xffffffff;
                    if (*(longlong *)(param_1 + 0xb0) != 0) {
                        uVar6 = 0;
                        if ((int)uVar5 != 0) {
                            do {
                                uVar6 = uVar6 + 1;
                                *(undefined2 *)(lVar4 + -2 + uVar6 * 2) =
                                        *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + -2 + uVar6 * 2);
                            } while (uVar6 < uVar10);
                        }
                        FUN_140881720(DAT_140c10f20);
                    }
                    *(longlong *)(param_1 + 0xb0) = lVar4;
                    *(uint *)(param_1 + 0xc0) = uVar9;
                    *(ulonglong *)(param_1 + 0xb8) = lVar4 + uVar10 * 2;
                    goto LAB_14088f364;
                }
            }
            lVar3 = lVar3 + 8;
        } while (lVar3 != *(longlong *)(param_1 + 0xa0));
    }
    return 1;
}



void FUN_14088f3d0(longlong param_1)

{
    FUN_14088b570();
    if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_14088d490();
        return;
    }
    return;
}



void FUN_14088f400(undefined8 param_1)

{
    FUN_14088b5c0();
    FUN_14088f640(param_1);
    return;
}



void FUN_14088f420(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    lVar2 = *(longlong *)(param_1 + 200);
    while (lVar2 != 0) {
        if (*(longlong *)(param_1 + 200) != 0) {
            *(undefined8 *)(param_1 + 200) = *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x18);
            FUN_140881720(DAT_140c10f20);
        }
        lVar2 = *(longlong *)(param_1 + 200);
    }
    FUN_1408950a0(param_1 + 0x68);
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (lVar2 != 0) {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x88) = 0;
        lVar1 = *(longlong *)(lVar2 + 0x18);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        if (lVar1 != 0) {
            FUN_14088b630();
        }
    }
    FUN_14088b620(param_1);
    FUN_14088b630(param_1);
    return;
}



int FUN_14088f4c0(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    uint *puVar5;
    int iVar6;
    longlong *plVar7;
    int iVar8;
    int iVar9;
    ulonglong uVar10;

    *(int *)(param_1 + 0x90) = param_2;
    iVar2 = FUN_140892310();
    plVar7 = *(longlong **)(param_1 + 0x98);
    iVar6 = 0;
    uVar10 = 0;
    if (plVar7 != *(longlong **)(param_1 + 0xa0)) {
        do {
            lVar1 = *plVar7;
            puVar5 = *(uint **)(lVar1 + 0xe0);
            if (puVar5 != *(uint **)(lVar1 + 0xe8)) {
                do {
                    if ((*puVar5 == (uint)*(ushort *)(*(longlong *)(param_1 + 0xb0) + uVar10 * 2)) &&
                        (lVar3 = FUN_1408942c0(), lVar3 != 0)) {
                        iVar4 = puVar5[2] - (param_2 + iVar2);
                        iVar9 = 0;
                        iVar8 = iVar9;
                        if (((byte)*(uint *)(lVar3 + 0x10) & 0x7c) == 4) {
                            if (((*(uint *)(lVar3 + 0x10) >> 1 & 1) == 0) || (iVar4 < 0)) {
                                iVar8 = *(int *)(lVar3 + 0x28);
                                goto LAB_14088ed1c;
                            }
                        }
                        else {
                            LAB_14088ed1c:
                            if (iVar4 < 0) {
                                iVar4 = iVar9;
                            }
                        }
                        if (iVar6 < iVar8 - iVar4) {
                            iVar6 = iVar8 - iVar4;
                        }
                    }
                    puVar5 = puVar5 + 6;
                } while (puVar5 != *(uint **)(lVar1 + 0xe8));
            }
            plVar7 = plVar7 + 1;
            uVar10 = (ulonglong)((int)uVar10 + 1);
        } while (plVar7 != *(longlong **)(param_1 + 0xa0));
    }
    return iVar6;
}



void FUN_14088f4d0(longlong *param_1,undefined8 param_2,int param_3)

{
    longlong *plVar1;
    int iVar2;
    undefined local_res10 [8];

    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    if (((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && (*(int *)((longlong)param_1 + 0x5c) != -1)
            ) {
        param_3 = *(int *)((longlong)param_1 + 0x5c);
    }
    FUN_14088ed70(param_1,param_2,param_3);
    iVar2 = FUN_140892310(param_1[0x10]);
    for (plVar1 = (longlong *)param_1[0x19]; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[3]
            ) {
        FUN_140835ca0(*plVar1 + 8,(iVar2 + (int)param_2 + param_3) - *(int *)(plVar1 + 2),0,local_res10)
                ;
        FUN_14088c040(plVar1[1],*(undefined4 *)(*plVar1 + 4));
    }
    if ((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) {
        (**(code **)(*param_1 + 0x40))(param_1);
    }
    FUN_14088b630(param_1);
    return;
}



void FUN_14088f5a0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    FUN_140894fe0(param_1 + 0x68);
    lVar1 = *(longlong *)(param_1 + 200);
    lVar3 = 0;
    while (lVar2 = lVar1, lVar2 != 0) {
        if (*(longlong *)(lVar2 + 8) == param_2) {
            lVar1 = *(longlong *)(lVar2 + 0x18);
            if (lVar2 == *(longlong *)(param_1 + 200)) {
                *(longlong *)(param_1 + 200) = lVar1;
            }
            else {
                *(longlong *)(lVar3 + 0x18) = lVar1;
            }
            if (lVar2 != 0) {
                FUN_140881720(DAT_140c10f20,lVar2);
            }
        }
        else {
            lVar1 = *(longlong *)(lVar2 + 0x18);
            lVar3 = lVar2;
        }
    }
    return;
}



void FUN_14088f640(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    uint uVar9;
    longlong *plVar10;
    int iVar11;
    int iVar12;
    uint *puVar13;
    ulonglong uVar14;
    uint uVar15;
    int iVar16;
    uint local_res18;

    iVar11 = *(int *)(param_1 + 0x90);
    iVar4 = FUN_140892310(*(undefined8 *)(param_1 + 0x80));
    plVar10 = *(longlong **)(param_1 + 0x98);
    uVar14 = 0;
    iVar11 = iVar11 + iVar4;
    local_res18 = 0;
    if (plVar10 != *(longlong **)(param_1 + 0xa0)) {
        do {
            lVar2 = *plVar10;
            uVar15 = 0;
            lVar8 = *(longlong *)(lVar2 + 0xe8) - *(longlong *)(lVar2 + 0xe0);
            lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
            iVar3 = (int)(lVar8 >> 0x3f);
            iVar4 = (int)(lVar8 >> 2);
            if (iVar4 != iVar3) {
                lVar8 = 0;
                do {
                    puVar13 = (uint *)(*(longlong *)(lVar2 + 0xe0) + lVar8);
                    if ((*puVar13 == (uint)*(ushort *)(uVar14 * 2 + *(longlong *)(param_1 + 0xb0))) &&
                        (lVar6 = FUN_1408942c0(), lVar6 != 0)) {
                        iVar16 = 0;
                        if ((((byte)*(uint *)(lVar6 + 0x10) & 0x7c) == 4) &&
                            (((*(uint *)(lVar6 + 0x10) >> 1 & 1) == 0 ||
                              (((int)puVar13[2] < iVar11 && (puVar13[5] == 0)))))) {
                            iVar16 = *(int *)(lVar6 + 0x28);
                        }
                        uVar1 = puVar13[2];
                        if (iVar11 < (int)(puVar13[3] + uVar1)) {
                            uVar9 = puVar13[5];
                            if ((int)uVar1 < iVar11) {
                                iVar12 = iVar11 - iVar16;
                                uVar9 = ((uVar9 - uVar1) + iVar11) % puVar13[4];
                            }
                            else {
                                iVar12 = uVar1 - iVar16;
                            }
                            puVar7 = (undefined8 *)FUN_1408819f0(DAT_140c10f20);
                            if (puVar7 != (undefined8 *)0x0) {
                                iVar5 = FUN_140892310(*(undefined8 *)(param_1 + 0x80));
                                puVar7[3] = lVar2;
                                puVar7[4] = puVar13;
                                *(int *)((longlong)puVar7 + 0x2c) = iVar16;
                                *puVar7 = &PTR_FUN_1409a8380;
                                *(int *)(puVar7 + 2) = iVar12 - iVar5;
                                *(uint *)(puVar7 + 5) = uVar9;
                                puVar7[6] = 0;
                                FUN_14088ebb0(puVar7,uVar15,0,puVar13[2]);
                                FUN_14088ebb0(puVar7,uVar15,1);
                                FUN_14088ebb0(puVar7,uVar15,2);
                                FUN_14088ebb0(puVar7,uVar15);
                                FUN_140895170(param_1 + 0x68);
                            }
                        }
                    }
                    uVar15 = uVar15 + 1;
                    lVar8 = lVar8 + 0x18;
                } while (uVar15 < (uint)(iVar4 - iVar3));
                uVar14 = (ulonglong)local_res18;
            }
            plVar10 = plVar10 + 1;
            local_res18 = (int)uVar14 + 1;
            uVar14 = (ulonglong)local_res18;
        } while (plVar10 != *(longlong **)(param_1 + 0xa0));
    }
    return;
}



undefined8 * FUN_14088f8f0(undefined8 *param_1)

{
    FUN_14088c150();
    *param_1 = &PTR_FUN_1409a8400;
    param_1[3] = &PTR_FUN_1409a84d0;
    param_1[5] = &PTR_FUN_1409a93a0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    return param_1;
}



void FUN_14088f940(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_1409a8400;
    param_1[3] = &PTR_FUN_1409a84d0;
    param_1[5] = &PTR_FUN_1409a93a0;
    lVar1 = param_1[0x10];
    while (lVar1 != 0) {
        if ((longlong *)param_1[0x10] != (longlong *)0x0) {
            lVar1 = *(longlong *)param_1[0x10];
            if (lVar1 == 0) {
                param_1[0x10] = 0;
                param_1[0x11] = 0;
            }
            else {
                param_1[0x10] = lVar1;
            }
        }
        FUN_14088cbc0();
        lVar1 = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = &PTR_FUN_1409a8280;
    param_1[3] = &PTR_FUN_1409a8330;
    param_1[5] = &PTR_FUN_1409a93a0;
    FUN_14088b3b0();
    return;
}



undefined8 FUN_14088f9f0(undefined8 param_1,uint param_2)

{
    FUN_14088f940();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_14088fa60(longlong *param_1,longlong param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;

    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) == 0) {
        (**(code **)(*param_1 + 0x40))();
        FUN_14088b630(param_1);
        return;
    }
    if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
        uVar1 = *(uint *)(param_1 + 0x12);
        lVar3 = param_1[0xe];
        for (puVar2 = (undefined8 *)param_1[0x10]; puVar2 != (undefined8 *)0x0;
             puVar2 = (undefined8 *)*puVar2) {
            FUN_14088cac0(puVar2,((ulonglong)uVar1 - lVar3) + param_2);
        }
    }
    FUN_14088b630(param_1);
    return;
}



longlong FUN_14088fae0(longlong *param_1,longlong param_2)

{
    return ((ulonglong)*(uint *)(param_1[1] + 0x90) - *(longlong *)(*param_1 + 8)) + param_2;
}



void FUN_14088fb00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;

    lVar1 = FUN_1408819f0(DAT_140c10f20,0x40);
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)FUN_14088c900(lVar1,param_2,param_3);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            if (*(undefined8 **)(param_1 + 0x88) == (undefined8 *)0x0) {
                *(undefined8 **)(param_1 + 0x88) = puVar2;
                *(undefined8 **)(param_1 + 0x80) = puVar2;
                return;
            }
            **(undefined8 **)(param_1 + 0x88) = puVar2;
            *(undefined8 **)(param_1 + 0x88) = puVar2;
            return;
        }
    }
    return;
}



void FUN_14088fba0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 0x80);
    while (lVar1 != 0) {
        FUN_14088d540(lVar1);
        if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
            lVar2 = **(longlong **)(param_1 + 0x80);
            if (lVar2 == 0) {
                *(undefined8 *)(param_1 + 0x80) = 0;
                *(undefined8 *)(param_1 + 0x88) = 0;
            }
            else {
                *(longlong *)(param_1 + 0x80) = lVar2;
            }
        }
        FUN_14088cbc0(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x80);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14088fc20(longlong *param_1,longlong param_2,char param_3)

{
    longlong **pplVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined local_38 [8];
    undefined8 uStack48;

    if (*(longlong ***)(param_2 + 0x108) == (longlong **)0x0) {
        pplVar1 = (longlong **)param_1[0x10];
        local_38._0_4_ = SUB84(pplVar1,0);
        local_38._4_4_ = (undefined4)((ulonglong)pplVar1 >> 0x20);
        uStack48._0_4_ = SUB84(param_1,0);
        uStack48._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        if (pplVar1 == (longlong **)0x0) {
            return;
        }
        if (*(char *)(param_2 + 299) == '\0') {
            lVar4 = param_1[0xe];
            lVar6 = *(longlong *)(param_1[0xd] + 8);
            if (param_1[2] != 0) {
                lVar7 = FUN_14088c230();
                lVar4 = lVar4 + lVar7;
            }
            plVar3 = *pplVar1;
            _local_38 = CONCAT88(uStack48,plVar3);
            if (plVar3 != (longlong *)0x0) {
                do {
                    if (lVar6 - lVar4 <= (longlong)(plVar3[1] - (ulonglong)*(uint *)(param_1 + 0x12))) break;
                    plVar3 = (longlong *)*plVar3;
                    _local_38 = CONCAT88(uStack48,plVar3);
                } while (plVar3 != (longlong *)0x0);
            }
            _local_38 = CONCAT412(uStack48._4_4_,
                                  CONCAT48((undefined4)uStack48,CONCAT44(local_38._4_4_,local_38._0_4_)));
        }
    }
    else {
        local_38 = **(longlong ***)(param_2 + 0x108);
        _local_38 = CONCAT88(*(undefined8 *)(param_2 + 0x110),local_38);
        if (local_38 == (longlong *)0x0) {
            *(undefined8 *)(param_2 + 0x108) = 0;
            return;
        }
    }
    lVar4 = *local_38;
    uVar5 = 0;
    lVar6 = 0;
    if (lVar4 == 0) {
        if ((param_3 != '\0') || (cVar2 = (**(code **)(*param_1 + 0xb8))(param_1), cVar2 == '\0')) {
            uVar5 = 1;
            goto LAB_14088fd57;
        }
        lVar4 = *local_38;
    }
    lVar7 = local_38[1] - (ulonglong)*(uint *)(param_1 + 0x12);
    if (lVar7 < 0) {
        lVar7 = lVar6;
    }
    lVar4 = *(longlong *)(lVar4 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
    if (lVar4 < 0) {
        lVar4 = lVar6;
    }
    lVar6 = lVar4 - lVar7;
    LAB_14088fd57:
    FUN_1408908d0(param_2,local_38);
    FUN_1408908c0(param_2,lVar6,uVar5);
    return;
}



longlong FUN_14088fda0(longlong *param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90);
    if (lVar1 < 0) {
        lVar1 = 0;
    }
    return lVar1;
}



int FUN_14088fdc0(longlong *param_1,longlong param_2)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    undefined local_138 [264];
    longlong local_30;
    longlong local_28;

    FUN_140890370(local_138,param_1,1);
    lVar2 = local_30;
    while (local_30 = lVar2, lVar2 != param_2) {
        (**(code **)(*param_1 + 0x60))(param_1,local_138,0);
        lVar2 = local_30;
    }
    iVar4 = (int)param_1[0xe];
    uVar1 = *(undefined8 *)(param_1[0xd] + 8);
    if (param_1[2] != 0) {
        iVar3 = FUN_14088c230();
        iVar4 = iVar4 + iVar3;
    }
    if (*(longlong *)(lVar2 + 0x18) == 0) {
        iVar4 = 0;
    }
    else {
        iVar3 = FUN_1408904a0(local_138,0);
        iVar4 = (*(int *)(local_28 + 0x90) - *(int *)(local_30 + 8)) + (((int)uVar1 - iVar4) - iVar3);
    }
    FUN_140001b70(local_138);
    return iVar4;
}



void FUN_14088feb0(longlong param_1)

{
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    FUN_14088fba0();
    FUN_14088c450(param_1);
    FUN_14088b630(param_1);
    return;
}



int FUN_14088fee0(longlong *param_1,longlong param_2,float param_3,float *param_4,undefined8 param_5
        ,undefined4 param_6)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    bool bVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    float local_res8 [2];

    puVar1 = (undefined8 *)param_1[0x10];
    local_res8[0] = 0.0;
    if (param_2 == 0) {
        local_res8[0] = 0.0;
        if (0 < (int)param_3) {
            local_res8[0] = param_3;
        }
        (**(code **)(*param_1 + 0xc0))(param_1);
        iVar6 = FUN_14088d6b0();
    }
    else {
        lVar2 = puVar1[3];
        if (lVar2 != 0) {
            uVar3 = *(undefined8 *)(lVar2 + 0x80);
            if (param_4 != (float *)0x0) {
                if (*(char *)(param_4 + 1) == '\0') {
                    param_3 = *param_4;
                }
                else {
                    uVar5 = FUN_140891630(uVar3);
                    param_3 = (float)(int)((float)(ulonglong)uVar5 * *param_4);
                }
            }
            FUN_140891aa0(uVar3,param_2,param_3,param_6,param_5,local_res8);
            if ((((*(ushort *)(param_2 + 0x14) & 8) == 0) || (local_res8[0] != 0.0)) ||
                (((byte)*(ushort *)(param_2 + 0x14) & 7) == 1)) {
                bVar4 = false;
            }
            else {
                bVar4 = true;
            }
            if (bVar4) {
                FUN_140892310(uVar3);
            }
        }
        (**(code **)(*param_1 + 0xc0))(param_1);
        iVar6 = FUN_14088d6b0();
    }
    *(float *)(param_1 + 0x12) = local_res8[0];
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
        iVar7 = ((int)local_res8[0] - *(int *)(puVar1 + 4)) - *(int *)(puVar1 + 1);
        puVar1 = (undefined8 *)*puVar1;
        if (iVar6 < iVar7) {
            iVar6 = iVar7;
        }
    }
    return iVar6;
}



void FUN_140890090(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong **pplVar5;
    bool bVar6;
    longlong **pplVar7;
    longlong **pplVar8;
    char cVar9;
    undefined uVar10;

    lVar2 = param_1[0xe];
    *param_4 = *param_4 - lVar2;
    *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
    param_2 = param_2 - lVar2;
    if (((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && (*(int *)((longlong)param_1 + 0x5c) != -1)
            ) {
        param_3 = *(undefined4 *)((longlong)param_1 + 0x5c);
    }
    uVar1 = *(uint *)(param_1 + 0x12);
    lVar3 = *param_4;
    lVar2 = (ulonglong)uVar1 + param_2;
    (**(code **)(*param_1 + 0xc0))(param_1,lVar2);
    bVar6 = true;
    pplVar5 = (longlong **)param_1[0x10];
    pplVar8 = (longlong **)0x0;
    joined_r0x000140890106:
    do {
        pplVar7 = pplVar5;
        if (pplVar7 == (longlong **)0x0) {
            FUN_14088c480(param_1,param_2,param_3);
            return;
        }
        if ((*(char *)(param_4 + 1) == '\0') ||
            ((longlong)pplVar7[1] < (longlong)(lVar3 + (ulonglong)uVar1))) {
            uVar10 = 0;
        }
        else {
            uVar10 = 1;
        }
        FUN_14088d750(pplVar7,lVar2,param_3,uVar10);
        if (bVar6) {
            plVar4 = *pplVar7;
            cVar9 = FUN_14088ca60(pplVar7);
            if (((cVar9 != '\0') && (plVar4 != (longlong *)0x0)) && (plVar4[1] < lVar2)) {
                pplVar5 = (longlong **)*pplVar7;
                if (pplVar7 == (longlong **)param_1[0x10]) {
                    param_1[0x10] = (longlong)pplVar5;
                }
                else {
                    *pplVar8 = (longlong *)pplVar5;
                }
                if (pplVar7 == (longlong **)param_1[0x11]) {
                    param_1[0x11] = (longlong)pplVar8;
                }
                FUN_14088cbc0(pplVar7);
                goto joined_r0x000140890106;
            }
            bVar6 = false;
        }
        pplVar5 = (longlong **)*pplVar7;
        pplVar8 = pplVar7;
    } while( true );
}



void FUN_1408902a0(longlong *param_1,longlong param_2)

{
    longlong *plVar1;
    char cVar2;
    longlong lVar3;
    undefined uVar4;
    longlong lVar5;
    longlong lVar6;

    plVar1 = *(longlong **)(param_2 + 0x108);
    uVar4 = 0;
    lVar3 = *plVar1;
    lVar5 = 0;
    if (lVar3 == 0) {
        cVar2 = (**(code **)(*param_1 + 0xb8))();
        if (cVar2 == '\0') {
            uVar4 = 1;
            goto LAB_140890318;
        }
        lVar3 = *plVar1;
    }
    lVar6 = plVar1[1] - (ulonglong)*(uint *)(param_1 + 0x12);
    if (lVar6 < 0) {
        lVar6 = lVar5;
    }
    lVar3 = *(longlong *)(lVar3 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
    if (lVar3 < 0) {
        lVar3 = lVar5;
    }
    lVar5 = lVar3 - lVar6;
    LAB_140890318:
    FUN_1408908c0(param_2,lVar5,uVar4);
    return;
}



longlong FUN_140890350(longlong *param_1,longlong param_2)

{
    return (*(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90)) + param_2;
}



longlong FUN_140890370(longlong param_1,longlong *param_2,char param_3)

{
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined2 *)(param_1 + 0x128) = 1;
    *(undefined *)(param_1 + 0x12a) = 0;
    *(char *)(param_1 + 299) = param_3;
    (**(code **)(*param_2 + 0x60))(param_2,param_1,0);
    *(bool *)(param_1 + 0x12a) = param_3 == '\0';
    return param_1;
}



longlong FUN_1408903f0(longlong param_1,undefined param_2)

{
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined *)(param_1 + 0x12a) = 0;
    *(undefined2 *)(param_1 + 0x128) = 1;
    *(undefined *)(param_1 + 299) = param_2;
    return param_1;
}



void FUN_140890430(longlong param_1,undefined8 param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    plVar1 = (longlong *)(param_1 + 0x108);
    if (*plVar1 == 0) {
        lVar2 = 0x7fffffffffffffff;
    }
    else {
        lVar2 = FUN_1408904a0(param_1,0);
        lVar3 = FUN_14088fda0(plVar1);
        lVar2 = lVar2 + lVar3;
    }
    FUN_14088d620(*plVar1,param_2,param_3 - lVar2);
    return;
}



longlong FUN_1408904a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;

    uVar2 = *(uint *)(param_1 + 0x100);
    lVar6 = 0;
    uVar7 = (ulonglong)param_2;
    if (uVar2 <= param_2) {
        return 0;
    }
    lVar4 = lVar6;
    lVar8 = lVar6;
    if (1 < (int)(uVar2 - param_2)) {
        uVar3 = ((uVar2 - param_2) - 2 >> 1) + 1;
        uVar5 = (ulonglong)uVar3;
        param_2 = param_2 + uVar3 * 2;
        do {
            lVar1 = uVar7 * 8;
            uVar7 = uVar7 + 2;
            lVar8 = lVar8 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar1) + 8) + 0x70);
            lVar4 = lVar4 + *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + -8 + uVar7 * 8) + 8) + 0x70);
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    if (param_2 < uVar2) {
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + uVar7 * 8) + 8) + 0x70);
    }
    return lVar4 + lVar8 + lVar6;
}



ulonglong FUN_140890530(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,
                        undefined param_5,char param_6,longlong *param_7)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint local_res8 [2];

    if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar1 = 0x7fffffffffffffff;
    }
    else {
        lVar1 = FUN_1408904a0(param_1,0);
        lVar2 = FUN_14088fda0(param_1 + 0x108);
        lVar1 = lVar1 + lVar2;
    }
    if (param_2 < lVar1) {
        param_2 = lVar1;
    }
    lVar2 = FUN_1408904a0(param_1,0);
    uVar3 = FUN_14088fae0(param_1 + 0x108,param_2 - lVar2);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x18);
    if ((lVar2 == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
        *param_4 = 0;
        if ((param_6 == '\0') && (param_3 != 0)) {
            return 2;
        }
        uVar6 = 1;
    }
    else {
        uVar4 = FUN_140891b60(*(undefined8 *)(lVar2 + 0x80),uVar3,param_3,param_4,param_5,local_res8);
        uVar3 = (ulonglong)local_res8[0];
        uVar6 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 1) {
            return uVar4;
        }
    }
    lVar2 = FUN_140890350(param_1 + 0x108,uVar3);
    lVar5 = FUN_1408904a0(param_1,0);
    *param_7 = lVar2 + lVar5;
    if ((*(char *)(param_1 + 0x128) == '\0') &&
        (*(longlong *)(param_1 + 0x120) + lVar1 < lVar2 + lVar5)) {
        uVar6 = 3;
    }
    return uVar6;
}



undefined8 * FUN_140890680(longlong param_1,undefined8 *param_2)

{
    uint uVar1;

    uVar1 = *(int *)(param_1 + 0x118) - 1;
    if (uVar1 == *(uint *)(param_1 + 0x100)) {
        *param_2 = 0;
        return param_2;
    }
    *param_2 = *(undefined8 *)(param_1 + (ulonglong)uVar1 * 8);
    return param_2;
}



longlong FUN_1408906b0(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x18);
    if (lVar1 == 0) {
        if (param_2 != (longlong *)0x0) {
            lVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x78))();
            *param_2 = lVar1;
            if (lVar1 == 0) {
                lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x110) + 0x10) + 0x78))();
                *param_2 = lVar1;
            }
        }
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 0x80);
        if (param_2 != (longlong *)0x0) {
            *param_2 = *(longlong *)(lVar1 + 0x40);
            return lVar1;
        }
    }
    return lVar1;
}



ulonglong FUN_140890730(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 uVar5;

    puVar1 = (ulonglong *)(param_1 + 0x108);
    if (*(longlong *)(*puVar1 + 0x18) != 0) {
        lVar3 = FUN_1408904a0(param_1,0);
        iVar2 = FUN_14088fae0(puVar1,param_2 - lVar3);
        uVar5 = 0;
        if (*(longlong *)(*puVar1 + 0x18) != 0) {
            uVar5 = *(undefined8 *)(*(longlong *)(*puVar1 + 0x18) + 0x80);
        }
        uVar4 = FUN_140891630(uVar5);
        return uVar4 & 0xffffffffffffff00 | (ulonglong)(iVar2 == (int)uVar4);
    }
    return *puVar1 & 0xffffffffffffff00;
}



void FUN_1408907b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = (longlong *)(param_1 + 0x108);
    if (*(longlong *)(*plVar1 + 0x18) != 0) {
        FUN_1408904a0(param_1,0);
        uVar2 = FUN_14088fae0(plVar1);
        FUN_14088d2a0(*plVar1,uVar2,param_3,param_4,param_5);
    }
    return;
}



void FUN_140890820(longlong param_1,longlong *param_2)

{
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;

    uVar4 = *(int *)(param_1 + 0x118) - 1;
    if (uVar4 == *(uint *)(param_1 + 0x100)) {
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(longlong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x100) * 8) = *param_2;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        return;
    }
    if (*(longlong *)(param_1 + (ulonglong)uVar4 * 8) != *param_2) {
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        iVar2 = *(int *)(param_1 + 0x100) + -1;
        if ((int)uVar4 <= iVar2) {
            iVar1 = *(int *)(param_1 + 0x100);
            uVar3 = (ulonglong)((iVar2 - uVar4) + 1);
            do {
                iVar1 = iVar1 + -1;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            *(int *)(param_1 + 0x100) = iVar1;
        }
        *(longlong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x100) * 8) = *param_2;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    return;
}



void FUN_1408908c0(longlong param_1,undefined8 param_2,undefined param_3)

{
    *(undefined8 *)(param_1 + 0x120) = param_2;
    *(undefined *)(param_1 + 0x128) = param_3;
    return;
}



void FUN_1408908d0(longlong param_1,undefined8 *param_2)

{
    char cVar1;

    cVar1 = (**(code **)(*(longlong *)param_2[1] + 0xb0))();
    *(bool *)(param_1 + 0x129) = cVar1 == '\0';
    *(undefined8 *)(param_1 + 0x108) = *param_2;
    *(undefined8 *)(param_1 + 0x110) = param_2[1];
    *(undefined *)(param_1 + 0x12a) = 0;
    return;
}



longlong FUN_140890920(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar1 = FUN_1408904a0(param_1,0);
        lVar2 = FUN_14088fda0((longlong *)(param_1 + 0x108));
        return lVar2 + lVar1;
    }
    return 0x7fffffffffffffff;
}



longlong FUN_140890970(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar1 = FUN_1408904a0(param_1,*(int *)(param_1 + 0x118) + -1);
        lVar2 = FUN_14088fda0((longlong *)(param_1 + 0x108));
        return lVar2 + lVar1;
    }
    return 0x7fffffffffffffff;
}



undefined8 * FUN_1408909c0(undefined8 *param_1)

{
    FUN_14084c610();
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    *param_1 = &PTR_FUN_1409a84e0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfe;
    param_1[0x1b] = 0;
    return param_1;
}



void FUN_140890a20(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409a84e0;
    FUN_140890cf0();
    *param_1 = &PTR_FUN_1409a48f0;
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    FUN_14084c670(param_1);
    return;
}



undefined8 * FUN_140890a90(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_1409a84e0;
    FUN_140890cf0();
    *param_1 = &PTR_FUN_1409a48f0;
    if (param_1[0x15] != 0) {
        param_1[0x16] = param_1[0x15];
        FUN_140881720(DAT_140c10f20);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        *(undefined4 *)(param_1 + 0x17) = 0;
    }
    FUN_14084c670(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_140890b10(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    char cVar3;

    uVar2 = (uint)((param_1[1] - *param_1) / 0x18);
    if ((*(uint *)(param_1 + 2) <= uVar2) && (cVar3 = FUN_140890f10(param_1,2), cVar3 == '\0')) {
        return 0;
    }
    if (*(uint *)(param_1 + 2) <= uVar2) {
        return 0;
    }
    lVar1 = param_1[1];
    param_1[1] = lVar1 + 0x18;
    return lVar1;
}



undefined4 FUN_140890b90(longlong *param_1,int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    uint in_stack_ffffffffffffffe8;

    (**(code **)(*param_1 + 8))();
    iVar1 = *param_2;
    if (iVar1 == 0) {
        FUN_14088b280(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
    }
    else if (iVar1 == 1) {
        FUN_14088a770(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
    }
    else if (iVar1 == 2) {
        FUN_14088aeb0(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                      in_stack_ffffffffffffffe8 & 0xffffff00 | (uint)*(byte *)((longlong)param_2 + 0x1e)
                ,param_2[4]);
    }
    uVar2 = FUN_140869430(param_1,param_2);
    (**(code **)(*param_1 + 0x10))(param_1);
    return uVar2;
}



undefined4 FUN_140890c40(longlong *param_1,int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    uint in_stack_ffffffffffffffe8;

    (**(code **)(*param_1 + 8))();
    iVar1 = *param_2;
    if (iVar1 == 0) {
        FUN_14088b280(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
    }
    else if (iVar1 == 1) {
        FUN_14088a770(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,param_2[6]);
    }
    else if (iVar1 == 2) {
        FUN_14088aeb0(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 4),param_2 + 7,
                      in_stack_ffffffffffffffe8 & 0xffffff00 | (uint)*(byte *)((longlong)param_2 + 0x25)
                ,param_2[6]);
    }
    uVar2 = FUN_140869520(param_1,param_2);
    (**(code **)(*param_1 + 0x10))(param_1);
    return uVar2;
}



void FUN_140890cf0(longlong param_1)

{
    longlong *plVar1;

    plVar1 = *(longlong **)(param_1 + 0xd8);
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            plVar1[1] = *plVar1;
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
            plVar1[1] = 0;
            *(undefined4 *)(plVar1 + 2) = 0;
        }
        if (*(longlong *)(param_1 + 0xd8) != 0) {
            FUN_140881720(DAT_140c10f20);
        }
        *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    return;
}



longlong FUN_140890d60(longlong param_1)

{
    longlong lVar1;

    if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
        while (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 != 0) {
            param_1 = lVar1;
            if ((*(byte *)(lVar1 + 0xd0) & 1) != 0) {
                return lVar1 + 0xc0;
            }
        }
    }
    return param_1 + 0xc0;
}



void FUN_140890da0(longlong param_1,int **param_2)

{
    int **ppiVar1;
    int *piVar2;
    uint uVar3;
    char cVar4;
    int *piVar5;
    int *piVar6;

    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_140890da0();
    }
    ppiVar1 = *(int ***)(param_1 + 0xd8);
    if ((ppiVar1 != (int **)0x0) && (piVar6 = *ppiVar1, piVar6 != ppiVar1[1])) {
        do {
            piVar5 = *param_2;
            if (piVar5 != param_2[1]) {
                do {
                    if (*piVar5 == *piVar6) {
                        piVar2 = param_2[1];
                        if (1 < (uint)(((longlong)piVar2 - (longlong)*param_2) / 0x18)) {
                            *piVar5 = piVar2[-6];
                            piVar5[1] = piVar2[-5];
                            piVar5[2] = piVar2[-4];
                            piVar5[3] = piVar2[-3];
                            piVar5[4] = piVar2[-2];
                            piVar5[5] = piVar2[-1];
                        }
                        param_2[1] = param_2[1] + -6;
                    }
                    else {
                        piVar5 = piVar5 + 6;
                    }
                } while (piVar5 != param_2[1]);
            }
            uVar3 = (uint)(((longlong)param_2[1] - (longlong)*param_2) / 0x18);
            if (((uVar3 < *(uint *)(param_2 + 2)) || (cVar4 = FUN_140890f10(param_2,2), cVar4 != '\0')) &&
                (uVar3 < *(uint *)(param_2 + 2))) {
                piVar5 = param_2[1];
                param_2[1] = piVar5 + 6;
                if (piVar5 != (int *)0x0) {
                    *piVar5 = *piVar6;
                    piVar5[1] = piVar6[1];
                    piVar5[2] = piVar6[2];
                    piVar5[3] = piVar6[3];
                    piVar5[4] = piVar6[4];
                    piVar5[5] = piVar6[5];
                }
            }
            piVar6 = piVar6 + 6;
        } while (piVar6 != ppiVar1[1]);
    }
    return;
}



undefined8 FUN_140890f10(longlong *param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(param_1 + 2);
    lVar2 = FUN_1408819f0(DAT_140c10f20,(ulonglong)(uint)(iVar1 + param_2) * 0x18);
    if (lVar2 == 0) {
        return 0;
    }
    uVar6 = (param_1[1] - *param_1) / 0x18;
    uVar5 = uVar6 & 0xffffffff;
    if (*param_1 != 0) {
        if ((int)uVar6 != 0) {
            lVar4 = 0;
            uVar6 = uVar5;
            do {
                puVar3 = (undefined4 *)(*param_1 + lVar4);
                *(undefined4 *)(lVar4 + lVar2) = *puVar3;
                *(undefined4 *)(lVar4 + 4 + lVar2) = puVar3[1];
                *(undefined4 *)(lVar4 + 8 + lVar2) = puVar3[2];
                *(undefined4 *)(lVar4 + 0xc + lVar2) = puVar3[3];
                *(undefined4 *)(lVar4 + 0x10 + lVar2) = puVar3[4];
                *(undefined4 *)(lVar4 + 0x14 + lVar2) = puVar3[5];
                uVar6 = uVar6 - 1;
                lVar4 = lVar4 + 0x18;
            } while (uVar6 != 0);
        }
        FUN_140881720(DAT_140c10f20,*param_1);
    }
    *(int *)(param_1 + 2) = iVar1 + param_2;
    *param_1 = lVar2;
    param_1[1] = lVar2 + uVar5 * 0x18;
    return CONCAT71((int7)(uVar5 * 3 >> 8),1);
}



void FUN_140891010(longlong param_1,double *param_2)

{
    float fVar1;
    float fVar2;
    int iVar3;
    double dVar4;
    double dVar5;
    double dVar6;

    if (param_2 == (double *)0x0) {
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xfe;
        return;
    }
    *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 1;
    fVar1 = (4.0 / (float)(uint)*(byte *)((longlong)param_2 + 0x15)) *
            (60.0 / *(float *)(param_2 + 2)) * (float)(ulonglong)DAT_140c110b4;
    dVar4 = 0.5;
    if (fVar1 <= 0.0) {
        fVar2 = -0.5;
    }
    else {
        fVar2 = 0.5;
    }
    iVar3 = (int)(fVar2 + fVar1);
    *(int *)(param_1 + 0xc0) = iVar3;
    *(uint *)(param_1 + 0xc4) = (uint)*(byte *)((longlong)param_2 + 0x14) * iVar3;
    dVar6 = (double)(ulonglong)DAT_140c110b4 * *param_2 * 0.001;
    if (dVar6 <= 0.0) {
        dVar5 = -0.5;
    }
    else {
        dVar5 = 0.5;
    }
    *(int *)(param_1 + 200) = (int)(dVar5 + dVar6);
    dVar6 = (double)(ulonglong)DAT_140c110b4 * param_2[1] * 0.001;
    if (dVar6 <= 0.0) {
        dVar4 = -0.5;
    }
    *(int *)(param_1 + 0xcc) = (int)(dVar4 + dVar6);
    return;
}



ulonglong FUN_140891130(longlong *param_1)

{
    ulonglong uVar1;

    uVar1 = (**(code **)(*param_1 + 0x2a8))();
    if ((int)uVar1 == 1) {
        uVar1 = FUN_140869a30(param_1);
        if ((int)uVar1 != 1) {
            (**(code **)(*param_1 + 0x2b0))(param_1);
            uVar1 = uVar1 & 0xffffffff;
        }
    }
    return uVar1;
}



ulonglong FUN_140891180(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;

    plVar1 = *(longlong **)(param_1 + 0xd8);
    if (plVar1 == (longlong *)0x0) {
        return 1;
    }
    lVar3 = *plVar1;
    if (lVar3 != plVar1[1]) {
        do {
            uVar2 = FUN_140853b00(*(undefined4 *)(lVar3 + 4));
            if ((int)uVar2 != 1) {
                lVar4 = *plVar1;
                if (lVar4 == lVar3) {
                    return uVar2;
                }
                do {
                    FUN_1408552b0(*(undefined4 *)(lVar4 + 4));
                    lVar4 = lVar4 + 0x18;
                } while (lVar4 != lVar3);
                return uVar2 & 0xffffffff;
            }
            lVar3 = lVar3 + 0x18;
        } while (lVar3 != plVar1[1]);
        return uVar2;
    }
    return 1;
}



undefined8 FUN_140891220(longlong *param_1,uint param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        lVar1 = FUN_1408819f0(DAT_140c10f20,(ulonglong)param_2 * 0x18);
        *param_1 = lVar1;
        param_1[1] = lVar1;
        if (lVar1 == 0) {
            return 0x34;
        }
        *(uint *)(param_1 + 2) = param_2;
    }
    return 1;
}



ulonglong FUN_140891280(undefined8 param_1,uint **param_2,undefined8 param_3)

{
    char cVar1;
    uint uVar2;
    undefined8 *puVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint *puVar7;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined local_14;
    char local_13;

    *param_2 = *param_2 + 1;
    uVar5 = FUN_1408546e0();
    if (((int)uVar5 == 1) && (uVar5 = FUN_140869cc0(param_1,param_2,param_3), (int)uVar5 == 1)) {
        puVar3 = (undefined8 *)*param_2;
        *param_2 = (uint *)((longlong)puVar3 + 0x14);
        local_14 = *(undefined *)((longlong)puVar3 + 0x14);
        *param_2 = (uint *)((longlong)puVar3 + 0x15);
        local_28 = *puVar3;
        local_20 = puVar3[1];
        local_18 = *(undefined4 *)(puVar3 + 2);
        local_13 = *(char *)(uint *)((longlong)puVar3 + 0x15);
        *param_2 = (uint *)((longlong)puVar3 + 0x16);
        cVar1 = *(char *)(uint *)((longlong)puVar3 + 0x16);
        *param_2 = (uint *)((longlong)puVar3 + 0x17);
        if (cVar1 != '\0') {
            FUN_140891010(param_1,&local_28);
        }
        uVar4 = **param_2;
        *param_2 = *param_2 + 1;
        if (uVar4 == 0) {
            FUN_140890cf0(param_1);
            uVar5 = 1;
        }
        else {
            uVar5 = (ulonglong)uVar4;
            lVar6 = FUN_1408819f0(DAT_140c10f20,(ulonglong)uVar4 * 0x18);
            if (lVar6 == 0) {
                uVar5 = 2;
            }
            else {
                if (uVar4 != 0) {
                    puVar7 = (uint *)(lVar6 + 8);
                    do {
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar7[-2] = uVar2;
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar7[-1] = uVar2;
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        *puVar7 = uVar2;
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar7[1] = uVar2;
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar7[2] = uVar2;
                        uVar2 = **param_2;
                        *param_2 = *param_2 + 1;
                        puVar7[3] = uVar2;
                        uVar5 = uVar5 - 1;
                        puVar7 = puVar7 + 6;
                    } while (uVar5 != 0);
                }
                uVar4 = FUN_140891430(param_1,lVar6,uVar4);
                uVar5 = (ulonglong)uVar4;
                FUN_140881720(DAT_140c10f20,lVar6);
            }
        }
    }
    return uVar5;
}



undefined8 FUN_140891430(longlong param_1,undefined4 *param_2,uint param_3)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 *puVar4;
    uint uVar5;
    undefined8 *puVar6;

    if (param_3 == 0) {
        FUN_140890cf0();
    }
    else {
        puVar3 = *(undefined8 **)(param_1 + 0xd8);
        puVar6 = (undefined8 *)0x0;
        if (puVar3 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)FUN_1408819f0(DAT_140c10f20,0x18);
            puVar3 = puVar6;
            if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = 0;
                puVar2[1] = 0;
                *(undefined4 *)(puVar2 + 2) = 0;
                puVar3 = puVar2;
            }
            *(undefined8 **)(param_1 + 0xd8) = puVar3;
            if ((puVar3 == (undefined8 *)0x0) || (iVar1 = FUN_140891220(puVar3,param_3), iVar1 != 1)) {
                return 2;
            }
        }
        else {
            puVar3[1] = *puVar3;
        }
        if (param_3 != 0) {
            do {
                puVar4 = (undefined4 *)FUN_140890b10();
                if (puVar4 != (undefined4 *)0x0) {
                    *puVar4 = *param_2;
                    puVar4[1] = param_2[1];
                    puVar4[2] = param_2[2];
                    puVar4[3] = param_2[3];
                    puVar4[4] = param_2[4];
                    puVar4[5] = param_2[5];
                }
                param_2 = param_2 + 6;
                if (puVar4 == (undefined4 *)0x0) {
                    return 2;
                }
                uVar5 = (int)puVar6 + 1;
                puVar6 = (undefined8 *)(ulonglong)uVar5;
            } while (uVar5 < param_3);
        }
    }
    return 1;
}



void FUN_140891520(longlong *param_1)

{
    longlong **pplVar1;

    pplVar1 = (longlong **)param_1[0x15];
    if (pplVar1 != (longlong **)param_1[0x16]) {
        do {
            (**(code **)(**pplVar1 + 0x148))();
            pplVar1 = pplVar1 + 1;
        } while (pplVar1 != (longlong **)param_1[0x16]);
    }
    // WARNING: Could not recover jumptable at 0x000140891569. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x2b0))(param_1);
    return;
}



void FUN_140891570(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong **)(param_1 + 0xd8);
    if ((plVar1 != (longlong *)0x0) && (lVar2 = *plVar1, lVar2 != plVar1[1])) {
        do {
            FUN_1408552b0(*(undefined4 *)(lVar2 + 4));
            lVar2 = lVar2 + 0x18;
        } while (lVar2 != plVar1[1]);
    }
    return;
}



undefined8 * FUN_1408915b0(undefined8 *param_1,ulonglong param_2)

{
    longlong *plVar1;

    plVar1 = param_1 + 0x1c;
    *param_1 = &PTR_FUN_1409a87b0;
    if (*plVar1 != 0) {
        FUN_140892320(plVar1);
        FUN_140881720(DAT_140c10f20,*plVar1);
        *plVar1 = 0;
        param_1[0x1d] = 0;
        *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    FUN_140890a20(param_1);
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



int FUN_140891630(longlong param_1)

{
    return *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
           *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
}



undefined4 FUN_140891650(longlong *param_1,longlong *param_2)

{
    short sVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;

    iVar2 = (**(code **)(*param_2 + 0x70))(param_2);
    sVar1 = (**(code **)(*param_1 + 0x290))(param_1);
    if (sVar1 == -1) {
        uVar3 = 9;
    }
    else if (iVar2 == 6) {
        if (param_2[8] == 0) {
            iVar2 = *(int *)(param_2 + 3);
            lVar4 = FUN_1408591d0(param_1 + 0x15,iVar2);
            if (lVar4 == 0) {
                uVar3 = 1;
                if (*(int *)(param_1 + 3) == iVar2) {
                    uVar3 = 0x17;
                }
            }
            else {
                uVar3 = 5;
            }
        }
        else {
            uVar3 = 0x15;
        }
    }
    else {
        uVar3 = 4;
    }
    return uVar3;
}



longlong * FUN_1408916f0(undefined4 param_1)

{
    char cVar1;
    uint uVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1408819f0(DAT_140c10f20,0x100);
    if (plVar3 != (longlong *)0x0) {
        FUN_1408909c0(plVar3,param_1);
        *plVar3 = (longlong)&PTR_FUN_1409a87b0;
        plVar3[0x1c] = 0;
        plVar3[0x1d] = 0;
        *(undefined4 *)(plVar3 + 0x1e) = 0;
        *(undefined4 *)(plVar3 + 0x1f) = 0;
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



longlong FUN_1408917a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0xe8) == *(longlong *)(param_1 + 0xe0)) {
        return 0;
    }
    lVar2 = FUN_1408819f0(DAT_140c10f20,0xd0);
    if (lVar2 != 0) {
        lVar2 = FUN_14088e820(lVar2,param_1,param_2);
        if (lVar2 == 0) {
            return 0;
        }
        *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
        iVar1 = FUN_14088f230(lVar2,param_3,param_4);
        if (iVar1 == 1) {
            return lVar2;
        }
        FUN_14088b850(lVar2);
        FUN_14088b630(lVar2);
    }
    return 0;
}



longlong FUN_140891840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0xe8) == *(longlong *)(param_1 + 0xe0)) {
        return 0;
    }
    lVar2 = FUN_1408819f0(DAT_140c10f20,0xa0);
    if (lVar2 != 0) {
        lVar2 = FUN_1408951d0(lVar2,param_1,param_2);
        if (lVar2 == 0) {
            return 0;
        }
        *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
        iVar1 = FUN_140895390(lVar2,param_3,param_4);
        if (iVar1 == 1) {
            FUN_14088b630();
            return lVar2;
        }
        FUN_14088b850(lVar2);
        FUN_14088b630(lVar2);
    }
    return 0;
}



undefined8 FUN_1408918f0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
    byte bVar1;
    undefined8 uVar2;

    if (*param_2 != 4) {
        uVar2 = FUN_140890b90();
        return uVar2;
    }
    bVar1 = *(byte *)(param_2 + 0xb);
    if ((bVar1 & 1) == 0) {
        FUN_14088afe0(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_2[10],bVar1 >> 1 & 1);
        return 1;
    }
    FUN_14088af40(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 2),param_4,bVar1 >> 1 & 1);
    return 1;
}



undefined8 FUN_140891980(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
    byte bVar1;
    undefined8 uVar2;

    if (*param_2 != 4) {
        uVar2 = FUN_140890c40();
        return uVar2;
    }
    bVar1 = *(byte *)(param_2 + 0xb);
    if ((bVar1 & 1) == 0) {
        FUN_14088afe0(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 4),param_2[10],bVar1 >> 1 & 1);
        return 1;
    }
    FUN_14088af40(DAT_140c629c0,param_1,*(undefined8 *)(param_2 + 4),param_4,bVar1 >> 1 & 1);
    return 1;
}



int FUN_140891a10(longlong param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    int *piVar7;
    int iVar8;
    int local_res10;

    lVar1 = *(longlong *)(param_1 + 0xe0);
    uVar4 = 0;
    piVar7 = (int *)(lVar1 + 4);
    iVar8 = (int)(*(longlong *)(param_1 + 0xe8) - lVar1 >> 4);
    uVar6 = uVar4;
    if (iVar8 != 1) {
        do {
            uVar2 = *piVar7 - (*(int *)(lVar1 + 4) + param_2);
            uVar5 = (int)uVar2 >> 0x1f;
            iVar3 = (uVar2 ^ uVar5) - uVar5;
            if ((uVar6 == 0) || (iVar3 < local_res10)) {
                uVar6 = uVar4 * 0x10 + lVar1;
                local_res10 = iVar3;
            }
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar2;
            piVar7 = piVar7 + 4;
        } while (uVar2 < iVar8 - 1U);
    }
    return *(int *)(uVar6 + 4) - *(int *)(lVar1 + 4);
}



void FUN_140891aa0(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
                   undefined4 *param_5,uint *param_6)

{
    ushort uVar1;
    ushort uVar2;
    uint uVar3;
    undefined8 uVar4;

    uVar4 = 0;
    uVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
            *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
    if (uVar3 == 0) {
        *param_6 = 0;
    }
    else {
        *param_6 = param_3 % uVar3;
    }
    *param_5 = 0;
    uVar1 = *(ushort *)(param_2 + 0x14);
    uVar2 = uVar1 & 7;
    if (uVar2 == 0) {
        if (param_3 == 0) {
            *param_5 = **(undefined4 **)(param_1 + 0xe0);
            return;
        }
    }
    else {
        if (uVar2 == 2) {
            if ((uVar1 & 0x10) == 0) {
                param_4 = *(undefined4 *)(param_2 + 0xc);
            }
        }
        else {
            if (uVar2 != 3) {
                return;
            }
            if ((uVar1 & 0x10) == 0) {
                param_4 = *(undefined4 *)(param_2 + 0xc);
            }
            uVar4 = 1;
        }
        uVar3 = FUN_140892000(param_1,*param_6,param_4,uVar4,param_5);
        *param_6 = uVar3;
    }
    return;
}



ulonglong FUN_140891b60(longlong param_1,uint param_2,undefined4 param_3,undefined4 *param_4,
                        char param_5,uint *param_6)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;

    uVar6 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) - (*(undefined4 **)(param_1 + 0xe0))[1];
    uVar7 = 2;
    if (uVar6 < param_2) {
        return 2;
    }
    switch(param_3) {
        case 0:
            *param_4 = 0;
            *param_6 = param_2;
            break;
        case 1:
            lVar5 = FUN_140890d60(param_1);
            uVar6 = *(uint *)(lVar5 + 0xc);
            iVar2 = *(int *)(lVar5 + 8);
            if (param_5 != '\0') {
                param_2 = param_2 + 1;
            }
            uVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
                    *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
            *param_6 = uVar6;
            if (iVar2 == 0) {
                *param_6 = param_2 + 1;
            }
            else if (uVar6 <= param_2) {
                do {
                    uVar6 = uVar6 + iVar2;
                } while (uVar6 <= param_2);
                *param_6 = uVar6;
            }
            uVar6 = *param_6;
            uVar1 = *param_6;
            *param_4 = 0;
            return (ulonglong)((uVar3 <= uVar6 && uVar1 != uVar3) + 1);
        case 2:
            lVar5 = FUN_140890d60(param_1);
            iVar2 = *(int *)(lVar5 + 4);
            if (param_5 != '\0') {
                param_2 = param_2 + 1;
            }
            uVar3 = 0;
            uVar6 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
                    *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
            *param_6 = 0;
            if (iVar2 != 0) {
                do {
                    uVar3 = uVar3 + iVar2;
                } while (uVar3 <= param_2);
                goto LAB_140891c8b;
            }
            goto LAB_140891c88;
        case 3:
            piVar4 = (int *)FUN_140890d60(param_1);
            iVar2 = *piVar4;
            if (param_5 != '\0') {
                param_2 = param_2 + 1;
            }
            uVar6 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
                    *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
            *param_6 = 0;
            if (iVar2 != 0) {
                uVar3 = 0;
                do {
                    uVar3 = uVar3 + iVar2;
                } while (uVar3 <= param_2);
                goto LAB_140891c8b;
            }
        LAB_140891c88:
            uVar3 = param_2 + 1;
        LAB_140891c8b:
            *param_6 = uVar3;
            *param_4 = 0;
            return (ulonglong)((uVar6 < uVar3) + 1);
        case 4:
            uVar6 = FUN_140891da0(param_1,param_2,param_4,param_5);
            goto LAB_140891d5a;
        case 5:
            uVar7 = FUN_140891e30(param_1,param_2,param_4,param_6);
            return uVar7;
        case 6:
            if (param_2 != 0) {
                return 2;
            }
            if (param_5 != '\0') {
                return 2;
            }
            uVar6 = 0;
            *param_4 = **(undefined4 **)(param_1 + 0xe0);
        LAB_140891d5a:
            *param_6 = uVar6;
            break;
        case 7:
            *param_6 = uVar6;
            *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + -0x10);
            break;
        default:
            goto switchD_140891bb9_caseD_8;
    }
    uVar7 = 1;
    switchD_140891bb9_caseD_8:
    return uVar7;
}



int FUN_140891da0(longlong param_1,int param_2,int *param_3,char param_4)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *(int **)(param_1 + 0xe0);
    piVar1 = piVar2 + 1;
    if (param_4 != '\0') {
        piVar2 = piVar2 + 4;
    }
    while( true ) {
        if (piVar2 == *(int **)(param_1 + 0xe8)) {
            *param_3 = (*(int **)(param_1 + 0xe8))[-4];
            return *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
                   *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
        }
        if (((uint)(*piVar1 + param_2) <= (uint)piVar2[1]) && ((*param_3 == 0 || (*piVar2 == *param_3)))
                ) break;
        piVar2 = piVar2 + 4;
    }
    *param_3 = *piVar2;
    return piVar2[1] - *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
}



undefined8 FUN_140891e30(longlong param_1,int param_2,int *param_3,int *param_4)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;

    lVar2 = *(longlong *)(param_1 + 0xe0);
    uVar3 = 1;
    uVar4 = *(int *)(lVar2 + 4) + param_2;
    iVar5 = (int)(*(longlong *)(param_1 + 0xe8) - lVar2 >> 4);
    if (iVar5 != 2) {
        do {
            puVar1 = (uint *)(lVar2 + 4 + (ulonglong)uVar3 * 0x10);
            if ((uVar4 <= *puVar1 && *puVar1 != uVar4) &&
                ((*param_3 == 0 || (*(int *)(lVar2 + (ulonglong)uVar3 * 0x10) == *param_3)))) {
                *param_3 = *(int *)(lVar2 + (ulonglong)uVar3 * 0x10);
                *param_4 = *(int *)(*(longlong *)(param_1 + 0xe0) + 4 + (ulonglong)uVar3 * 0x10) -
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
                return 1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 <= iVar5 - 2U);
    }
    return 2;
}



void FUN_140891ed0(longlong param_1,uint param_2,uint param_3,int *param_4,int *param_5,
                   uint *param_6)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;

    uVar3 = 0;
    if ((int)param_2 < 0) {
        if (-param_2 < param_3) {
            param_3 = param_3 + param_2;
            param_2 = uVar3;
            goto LAB_140891f16;
        }
        LAB_140891efc:
        *param_4 = 0;
        *param_5 = 0;
        *param_6 = 0;
    }
    else {
        LAB_140891f16:
        uVar4 = *(int *)(*(longlong *)(param_1 + 0xe8) + -0xc) -
                *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
        if (uVar4 < param_2 + param_3) {
            if (uVar4 <= param_2) goto LAB_140891efc;
            param_3 = uVar4 - param_2;
        }
        puVar1 = (uint *)FUN_140890d60();
        uVar4 = puVar1[1];
        iVar6 = 0;
        iVar5 = iVar6;
        if (uVar4 != 0) {
            uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
            iVar5 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
        }
        *param_4 = iVar5;
        uVar4 = *puVar1;
        if (uVar4 != 0) {
            uVar2 = (uVar4 - 1) + (uVar4 + param_2) % uVar4;
            iVar6 = (uVar2 + param_3) / uVar4 - uVar2 / uVar4;
        }
        *param_5 = iVar6;
        uVar4 = puVar1[2];
        if (uVar4 != 0) {
            uVar3 = (uVar4 - 1) + ((uVar4 - puVar1[3]) + param_2) % uVar4;
            uVar3 = (uVar3 + param_3) / uVar4 - uVar3 / uVar4;
        }
        *param_6 = uVar3;
    }
    return;
}



int FUN_140892000(longlong param_1,int param_2,int param_3,char param_4,undefined4 *param_5)

{
    undefined4 *puVar1;
    uint *puVar2;
    int *piVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;

    puVar1 = *(undefined4 **)(param_1 + 0xe0);
    uVar7 = (ulonglong)(param_4 != '\0');
    uVar4 = (int)(*(longlong *)(param_1 + 0xe8) - (longlong)puVar1 >> 4) - 1;
    if ((param_4 != '\0') < uVar4) {
        puVar2 = puVar1 + uVar7 * 4 + 1;
        do {
            if ((uint)(param_2 + puVar1[1]) <= *puVar2) break;
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
            puVar2 = puVar2 + 4;
        } while (uVar8 < uVar4);
    }
    iVar5 = (int)uVar7;
    if (param_3 == 0) {
        uVar8 = uVar4 - iVar5;
    }
    else {
        uVar6 = uVar7;
        if (iVar5 == 0) {
            uVar6 = 1;
        }
        uVar8 = (uint)(iVar5 == 0);
        if ((uint)uVar6 < uVar4) {
            piVar3 = puVar1 + uVar6 * 4;
            uVar6 = (ulonglong)(uVar4 - (uint)uVar6);
            do {
                if (*piVar3 == param_3) {
                    uVar8 = uVar8 + 1;
                }
                piVar3 = piVar3 + 4;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    if (uVar8 == 0) {
        *param_5 = *puVar1;
        iVar5 = 0;
    }
    else {
        uVar4 = rand();
        uVar4 = uVar4 % uVar8;
        if (param_3 == 0) {
            uVar7 = (ulonglong)(uVar4 + iVar5);
        }
        else if (uVar4 != 0) {
            iVar5 = uVar4 - 1;
            do {
                uVar4 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar4;
                if (*(int *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 0x10) == param_3) {
                    if (iVar5 == 0) goto LAB_1408920ee;
                    iVar5 = iVar5 + -1;
                }
            } while (uVar4 < (uint)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 4));
            uVar7 = 0;
        }
        LAB_1408920ee:
        *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 0x10);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0xe0) + 4 + uVar7 * 0x10) -
                *(int *)(*(longlong *)(param_1 + 0xe0) + 4);
    }
    return iVar5;
}



undefined FUN_140892140(longlong param_1,undefined4 param_2,undefined8 param_3)

{
    char cVar1;
    undefined uVar2;
    undefined8 *puVar3;

    puVar3 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar3 != *(undefined8 **)(param_1 + 0xb0)) {
        do {
            cVar1 = FUN_140894300(*puVar3,param_2,param_3);
            if (cVar1 != '\0') {
                return 1;
            }
            puVar3 = puVar3 + 1;
        } while (puVar3 != *(undefined8 **)(param_1 + 0xb0));
    }
    uVar2 = FUN_140852ed0(param_1,param_2,param_3,0);
    return uVar2;
}
