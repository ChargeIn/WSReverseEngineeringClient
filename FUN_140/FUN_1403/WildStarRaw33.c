//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140343bb0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b64f30;
    if (-1 < *(int *)(param_1 + 0x44)) {
        FUN_1400035b0(0x13,4,0,param_1 + 1);
        (**(code **)(*DAT_140c65858 + 0x150))(DAT_140c65858,*(undefined4 *)(param_1 + 0x42));
    }
    if ((undefined8 *)param_1[0x4d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x4d] = param_1[0x4e];
    }
    if (param_1[0x4e] != 0) {
        *(undefined8 *)(param_1[0x4e] + 0x268) = param_1[0x4d];
    }
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    FUN_140349d80(param_1 + 0x43);
    return;
}



void FUN_140343c50(undefined4 param_1,longlong *param_2)

{
    FUN_14034a1a0(param_2 + 0x43,param_1);
    // WARNING: Could not recover jumptable at 0x000140343c72. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 8))(param_2);
    return;
}



undefined8 FUN_140343d30(undefined8 *param_1,ushort *param_2)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    short sVar4;
    ushort uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    uint uVar8;
    longlong lVar9;

    if (param_2 == (ushort *)0x0) {
        return 0x80070057;
    }
    puVar1 = param_1 + 1;
    lVar9 = 0x104;
    puVar7 = puVar1;
    while ((lVar9 != -0x7ffffefa &&
            (sVar4 = *(short *)(((longlong)param_2 - (longlong)puVar1) + (longlong)puVar7), sVar4 != 0)
    )) {
        *(short *)puVar7 = sVar4;
        puVar7 = (undefined8 *)((longlong)puVar7 + 2);
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) {
            LAB_140343d8a:
            puVar7 = (undefined8 *)((longlong)puVar7 + -2);
            LAB_140343d8e:
            uVar8 = 0;
            *(short *)puVar7 = 0;
            uVar5 = *param_2;
            while (uVar5 != 0) {
                param_2 = param_2 + 1;
                uVar8 = uVar8 + (uint)uVar5 * 0x1d;
                uVar5 = *param_2;
            }
            plVar3 = &DAT_140c7a100 + (uVar8 & 0x1f);
            if (param_1[0x4d] == 0) {
                param_1[0x4d] = plVar3;
                plVar2 = param_1 + 0x4e;
                *plVar2 = *plVar3;
                *plVar3 = (longlong)param_1;
                if (*plVar2 != 0) {
                    *(longlong **)(*plVar2 + 0x268) = plVar2;
                }
            }
            FUN_14034a2b0(param_1 + 0x43);
            (**(code **)*param_1)(param_1);
            // WARNING: Could not recover jumptable at 0x000140343e2f. Too many branches
            // WARNING: Treating indirect jump as call
            uVar6 = (**(code **)(*DAT_140c65858 + 0x148))
                    (DAT_140c65858,param_1 + 0x42,puVar1,param_1 + 0x4b);
            return uVar6;
        }
    }
    if (lVar9 != 0) goto LAB_140343d8e;
    goto LAB_140343d8a;
}



longlong FUN_140343e40(ushort *param_1)

{
    ushort *puVar1;
    ushort uVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;

    uVar5 = 0;
    uVar2 = *param_1;
    puVar1 = param_1;
    while (uVar2 != 0) {
        puVar1 = puVar1 + 1;
        uVar5 = uVar5 + (uint)uVar2 * 0x1d;
        uVar2 = *puVar1;
    }
    lVar3 = (&DAT_140c7a100)[uVar5 & 0x1f];
    while( true ) {
        if (lVar3 == 0) {
            return 0;
        }
        iVar4 = FUN_14018e2c0(lVar3 + 8,param_1);
        if (iVar4 == 0) break;
        lVar3 = *(longlong *)(lVar3 + 0x270);
    }
    return lVar3;
}



int FUN_140343f50(undefined8 param_1,int *param_2)

{
    int iVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7a0d8 == DVar2) {
        DAT_140c7a0e0 = DAT_140c7a0e0 + 1;
        DVar2 = DAT_140c7a0d8;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7a0e0 == 0;
            DAT_140c7a0e0 = DAT_140c7a0e0 ^ (ulonglong)bVar4 * (DAT_140c7a0e0 ^ 1);
            if (bVar4) goto LAB_140343fb2;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a0d8);
        DVar2 = DAT_140c7a0d8;
    }
    LAB_140343fb2:
    DAT_140c7a0d8 = DVar2;
    *param_2 = *param_2 + 1;
    if (param_2 == DAT_140c7a0c8) {
        DAT_140c7a0c8 = *(int **)(param_2 + 6);
    }
    if (param_2 == DAT_140c7a0d0) {
        DAT_140c7a0d0 = *(int **)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 6) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x10) = *(undefined8 *)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x18) = *(undefined8 *)(param_2 + 6);
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    iVar1 = *param_2;
    if (DAT_140c7a0e0 < 2) {
        DAT_140c7a0d8 = 0;
        DAT_140c7a0e0 = 0;
        if (DAT_140c7a0e8 != 0) {
            if (DAT_140c7a0f0 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7a0f0 == (HANDLE)0x0;
                DAT_140c7a0f0 =
                        (HANDLE)((ulonglong)DAT_140c7a0f0 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7a0f0 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a0f0);
        }
        return iVar1;
    }
    DAT_140c7a0e0 = DAT_140c7a0e0 - 1;
    return iVar1;
}



undefined8 FUN_140344200(undefined8 param_1,ulonglong param_2)

{
    FUN_140344240();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140344240(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b64fc0;
    FUN_1403499e0();
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if (-1 < *(int *)(param_1 + 0xc)) {
        (**(code **)(*DAT_140c65858 + 0x160))(DAT_140c65858,*(undefined4 *)(param_1 + 1));
    }
    if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x14] = param_1[0x15];
    }
    if (param_1[0x15] != 0) {
        *(undefined8 *)(param_1[0x15] + 0xa0) = param_1[0x14];
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    FUN_140349d80(param_1 + 0xb);
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x10) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}



undefined8 FUN_140344310(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
    if (iVar3 == 0) {
        iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x20))();
        if (iVar3 == 0) {
            (**(code **)(*(longlong *)param_1[3] + 0x28))();
        }
    }
    FUN_14034a2b0(param_1 + 0xb);
    (**(code **)*param_1)(param_1);
    plVar1 = param_1 + 4;
    FUN_1403499e0(plVar1);
    lVar2 = param_1[3];
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
        FUN_140349890(plVar1);
        if (*(int *)(lVar2 + 0x220) != -0x7ffffff6) {
            FUN_140349b20(lVar2 + 0x230);
        }
        return 0;
    }
    return 0x80070057;
}



void FUN_1403443c0(int param_1,longlong *param_2)

{
    if (-1 < param_1) {
        param_1 = (**(code **)(*DAT_140c65858 + 0x158))
                (DAT_140c65858,*(undefined4 *)(param_2 + 1),param_2 + 8);
        if (-1 < param_1) {
            return;
        }
    }
    FUN_14034a1a0(param_2 + 0xb,param_1);
    // WARNING: Could not recover jumptable at 0x000140344400. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 8))(param_2);
    return;
}



void FUN_140344410(undefined4 param_1,longlong *param_2)

{
    FUN_14034a1a0(param_2 + 0xb,param_1);
    // WARNING: Could not recover jumptable at 0x00014034442f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 8))(param_2);
    return;
}



void FUN_1403444e0(undefined8 *param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    *param_1 = &PTR_LAB_140b64f70;
    if (param_1[3] != 0) {
        uVar1 = 0;
        uVar2 = uVar1;
        if (param_1[3] != 0) {
            do {
                if (*(longlong *)(param_1[1] + uVar1 * 8) != 0) {
                    FUN_1403499e0(param_1[8] + uVar2);
                    (**(code **)(**(longlong **)(param_1[1] + uVar1 * 8) + 8))();
                }
                uVar1 = uVar1 + 1;
                uVar2 = uVar2 + 0x20;
            } while (uVar1 < (ulonglong)param_1[3]);
        }
        FUN_14018b900(param_1[1],0);
        if (param_1[8] != 0) {
            FUN_140344580();
        }
    }
    FUN_140349d80(param_1 + 4);
    return;
}



longlong FUN_140344580(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined8 *)(param_1 + (longlong)*(int *)(param_1 + -8) * 0x20 + 0x10);
        do {
            puVar1 = puVar2 + -4;
            if ((undefined8 *)puVar2[-4] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[-4] = puVar2[-3];
            }
            if (puVar2[-3] != 0) {
                *(undefined8 *)(puVar2[-3] + 0x10) = *puVar1;
            }
            iVar3 = iVar3 + -1;
            *puVar1 = 0;
            puVar2[-3] = 0;
            puVar2 = puVar1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



undefined8 FUN_140344600(longlong param_1,longlong param_2,ulonglong param_3)

{
    longlong *plVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    int *piVar5;
    undefined8 *puVar6;
    int iVar7;
    int *piVar8;
    ulonglong uVar9;

    if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0x18) == 0)) {
        *(ulonglong *)(param_1 + 0x18) = param_3;
        uVar2 = SUB168(ZEXT816(8) * ZEXT816(param_3),0);
        if (SUB168(ZEXT816(8) * ZEXT816(param_3) >> 0x40,0) != 0) {
            uVar2 = 0xffffffffffffffff;
        }
        uVar2 = FUN_14018b280(uVar2,0);
        *(undefined8 *)(param_1 + 8) = uVar2;
        uVar3 = SUB168(ZEXT816(0x20) * ZEXT816(param_3),0);
        if (SUB168(ZEXT816(0x20) * ZEXT816(param_3) >> 0x40,0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        lVar4 = uVar3 + 8;
        if (0xfffffffffffffff7 < uVar3) {
            lVar4 = -1;
        }
        piVar5 = (int *)FUN_14018b280(lVar4,0);
        uVar3 = 0;
        if (piVar5 == (int *)0x0) {
            piVar8 = (int *)0x0;
        }
        else {
            iVar7 = (int)param_3 + -1;
            *piVar5 = (int)param_3;
            piVar8 = piVar5 + 2;
            if (-1 < iVar7) {
                puVar6 = (undefined8 *)(piVar5 + 6);
                do {
                    iVar7 = iVar7 + -1;
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    puVar6[-2] = 0;
                    puVar6[-1] = 0;
                    puVar6 = puVar6 + 4;
                } while (-1 < iVar7);
            }
        }
        *(int **)(param_1 + 0x40) = piVar8;
        FUN_1407e4830(*(undefined8 *)(param_1 + 8),0,param_3 * 8);
        FUN_14034a2b0(param_1 + 0x20);
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar9 = uVar3;
        if (*(longlong *)(param_1 + 0x18) != 0) {
            do {
                plVar1 = DAT_140c65858;
                lVar4 = *(longlong *)(param_1 + 0x40);
                *(undefined **)(uVar3 + lVar4) = &LAB_140344790;
                *(longlong *)(uVar3 + 8 + lVar4) = param_1;
                iVar7 = (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(longlong *)(param_1 + 8) + uVar9 * 8,
                         *(undefined4 *)(param_2 + uVar9 * 4));
                if (-1 < iVar7) {
                    LOCK();
                    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                    FUN_14034a140(param_1 + 0x20,*(longlong *)(param_1 + 0x40) + uVar3);
                }
                uVar9 = uVar9 + 1;
                uVar3 = uVar3 + 0x20;
            } while (uVar9 < *(ulonglong *)(param_1 + 0x18));
        }
        LOCK();
        piVar5 = (int *)(param_1 + 0x10);
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        if (iVar7 == 2) {
            FUN_14034a1a0(param_1 + 0x20,0);
        }
        return 0;
    }
    return 0x80070057;
}



void FUN_1403447e0(longlong param_1)

{
    int *piVar1;
    int iVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (*(int *)(param_1 + 0x28) != -0x7ffffff6) {
        FUN_14034a1a0(param_1 + 0x20,0);
        FUN_14034a2b0(param_1 + 0x20);
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        uVar4 = 0;
        uVar5 = uVar4;
        if (*(longlong *)(param_1 + 0x18) != 0) {
            do {
                plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar5 * 8);
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x28))();
                    LOCK();
                    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x40) + uVar4);
                    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
                        (FUN_140349890(), *(int *)(param_1 + 0x28) != -0x7ffffff6)) {
                        FUN_140349b20(param_1 + 0x38);
                    }
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x20;
            } while (uVar5 < *(ulonglong *)(param_1 + 0x18));
        }
        LOCK();
        piVar1 = (int *)(param_1 + 0x10);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar2 == 2) {
            FUN_14034a1a0(param_1 + 0x20,0);
        }
    }
    return;
}



int FUN_140344960(undefined8 param_1,int *param_2)

{
    int iVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7a210 == DVar2) {
        DAT_140c7a218 = DAT_140c7a218 + 1;
        DVar2 = DAT_140c7a210;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7a218 == 0;
            DAT_140c7a218 = DAT_140c7a218 ^ (ulonglong)bVar4 * (DAT_140c7a218 ^ 1);
            if (bVar4) goto LAB_1403449c2;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7a210);
        DVar2 = DAT_140c7a210;
    }
    LAB_1403449c2:
    DAT_140c7a210 = DVar2;
    *param_2 = *param_2 + 1;
    if (param_2 == DAT_140c7a200) {
        DAT_140c7a200 = *(int **)(param_2 + 6);
    }
    if (param_2 == DAT_140c7a208) {
        DAT_140c7a208 = *(int **)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 6) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x10) = *(undefined8 *)(param_2 + 4);
    }
    if (*(longlong *)(param_2 + 4) != 0) {
        *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x18) = *(undefined8 *)(param_2 + 6);
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    iVar1 = *param_2;
    if (DAT_140c7a218 < 2) {
        DAT_140c7a210 = 0;
        DAT_140c7a218 = 0;
        if (DAT_140c7a220 != 0) {
            if (DAT_140c7a228 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7a228 == (HANDLE)0x0;
                DAT_140c7a228 =
                        (HANDLE)((ulonglong)DAT_140c7a228 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7a228 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7a228);
        }
        return iVar1;
    }
    DAT_140c7a218 = DAT_140c7a218 - 1;
    return iVar1;
}



int FUN_140344c00(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;

    LOCK();
    plVar1 = param_1 + 9;
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x40))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140344c60(undefined8 param_1)

{
    FUN_14018b280(param_1,0);
    return;
}



ulonglong FUN_140344c70(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    lVar1 = FUN_14018b280(param_2 + 0x2008,0);
    uVar2 = lVar1 + 0x2007U & 0xffffffffffffe000;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
}



void FUN_140344ca0(longlong param_1)

{
    FUN_14018b900(*(undefined8 *)(param_1 + -8),0);
    return;
}



undefined8 FUN_140344cb0(undefined8 param_1,ulonglong param_2)

{
    FUN_140344e10();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140344cf0(undefined8 *param_1)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 2) = 0x14;
    *param_1 = &PTR_FUN_140b65370;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0x7fff0;
    param_1[3] = &PTR_LAB_140b65380;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[7] = &PTR_LAB_140b65340;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    FUN_14034a660(param_1 + 0xf);
    *(undefined4 *)(param_1 + 0x122) = uVar1;
    param_1[0x121] = &PTR_FUN_140b65360;
    param_1[0x123] = 0;
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
    param_1[0x127] = 0;
    param_1[0x128] = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[300] = 0;
    param_1[0x12d] = 0;
    param_1[0x12e] = 0;
    *(undefined4 *)(param_1 + 0x133) = uVar1;
    *(undefined4 *)(param_1 + 0x134) = 0xbf800000;
    param_1[0x132] = &PTR_FUN_140b65330;
    *(undefined4 *)(param_1 + 0x136) = uVar1;
    param_1[0x135] = &PTR_LAB_140b65690;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140344e10(undefined8 *param_1)

{
    longlong lVar1;

    _DAT_140c65868 = 1;
    *param_1 = &PTR_FUN_140b65030;
    FUN_140345070();
    lVar1 = param_1[0x13d];
    _DAT_140c65868 = 0;
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x13b];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    param_1[0x139] = &PTR_LAB_140b65690;
    FUN_14034ac20(param_1 + 0x15);
    *param_1 = &PTR_FUN_140b64c80;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140344ea0(undefined8 param_1)

{
    int iVar1;
    undefined8 local_res20;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (_DAT_140c65868 == 0) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res20 = 0x141deead8;
        local_20 = local_40;
        local_18 = local_38;
        iVar1 = FUN_140196f30(&DAT_140c8a650,0x13,&local_res20,param_1,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140344f77. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    return;
}



void FUN_140344f90(longlong param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 0x28) == 0) {
        iVar1 = (***(code ***)(param_1 + 0x20))(param_1 + 0x20);
        *(uint *)(param_1 + 0x28) = (uint)(-1 < iVar1);
        if (iVar1 < 0) {
            return;
        }
    }
    if (*(int *)(param_1 + 0x40) == 0) {
        iVar1 = (***(code ***)(param_1 + 0x38))();
        *(uint *)(param_1 + 0x40) = (uint)(-1 < iVar1);
        if (iVar1 < 0) {
            return;
        }
    }
    if (*(int *)(param_1 + 0x60) == 0) {
        iVar1 = (***(code ***)(param_1 + 0x58))();
        *(uint *)(param_1 + 0x60) = (uint)(-1 < iVar1);
        if (iVar1 < 0) {
            return;
        }
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
        iVar1 = (***(code ***)(param_1 + 0x98))(param_1 + 0x98);
        *(uint *)(param_1 + 0xa0) = (uint)(-1 < iVar1);
        if (iVar1 < 0) {
            return;
        }
    }
    iVar1 = FUN_14034b780(param_1 + 0x928);
    if ((-1 < iVar1) && (iVar1 = FUN_14034b780(param_1 + 0x9b0), -1 < iVar1)) {
        FUN_14034b780(param_1 + 0x9c8);
    }
    return;
}



int FUN_140345070(longlong param_1)

{
    int iVar1;
    int iVar2;

    iVar2 = 0;
    if (*(int *)(param_1 + 0x9d0) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x9c8) + 8))(param_1 + 0x9c8);
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x9d0) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0x9b8) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x9b0) + 8))();
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x9b8) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0x930) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x928) + 8))();
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x930) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x98) + 8))();
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0xa0) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x58) + 8))();
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x60) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 8))();
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x40) = (uint)(iVar1 < 0);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
        iVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20);
        if (iVar1 < 0) {
            iVar2 = iVar1;
        }
        *(uint *)(param_1 + 0x28) = (uint)(iVar1 < 0);
    }
    return iVar2;
}



undefined8 FUN_140345250(undefined8 param_1,undefined4 param_2)

{
    switch(param_2) {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        case 4:
            return 4;
        case 5:
            return 5;
        case 6:
            return 6;
        case 7:
            return 7;
        case 8:
        case 9:
            return 8;
        case 10:
            return 9;
        default:
            return 0;
    }
}



void FUN_140345600(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    undefined4 uVar1;

    uVar1 = FUN_140345250(param_1,param_4);
    FUN_140828f30(param_2,param_3,uVar1);
    return;
}



undefined8
FUN_140345630(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_3 != 0) {
        if (param_3 == 1) {
            uVar4 = 1;
        }
        else {
            if (param_3 != 2) {
                return 0x80004005;
            }
            uVar4 = 2;
        }
    }
    uVar1 = FUN_140345250(param_1,param_6);
    iVar2 = FUN_1408272f0(param_4,uVar4,param_2,param_5,uVar1,0);
    if (iVar2 != 1) {
        uVar3 = 0x80004005;
    }
    return uVar3;
}



undefined8 FUN_1403456e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_140827710(param_2,param_3,param_4 != 0);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8
FUN_140345710(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_140828aa0(param_3,param_4,param_2);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_140345740(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;
    float in_XMM3_Da;

    iVar1 = FUN_1407ddb6c((double)in_XMM3_Da);
    if (iVar1 == 0) {
        in_XMM3_Da = 0.0;
    }
    iVar1 = FUN_140828990(extraout_XMM0_Qa,in_XMM3_Da,param_3);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8
FUN_1403457b0(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
              undefined8 param_5)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    iVar1 = FUN_1407ddb6c((double)param_3);
    if (iVar1 == 0) {
        param_3 = 1.0;
    }
    iVar1 = FUN_140828540(extraout_XMM0_Qa,param_3,param_5);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140345810(undefined8 param_1,undefined8 param_2,float *param_3)

{
    int iVar1;
    uint uVar2;
    undefined auStack120 [32];
    undefined local_58 [8];
    uint uStack80;
    float local_48;
    float local_44;
    float local_40;
    float local_3c;
    float local_38;
    float local_34;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    local_48 = param_3[4];
    _local_58 = ZEXT816(0);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_48,0));
    if (iVar1 == 0) {
        local_48 = local_58._0_4_;
    }
    local_44 = param_3[5];
    iVar1 = FUN_1407ddb6c(SUB84((double)local_44,0));
    if (iVar1 == 0) {
        local_44 = local_58._4_4_;
    }
    uVar2 = 0x80000000;
    local_40 = (float)((uint)param_3[6] ^ 0x80000000);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_40,0));
    if (iVar1 == 0) {
        local_40 = (float)(uStack80 ^ uVar2);
    }
    local_3c = *param_3;
    _local_58 = CONCAT412(uRam0000000140c7788c,
                          CONCAT48(uRam0000000140c77888,CONCAT44(uRam0000000140c77884,_DAT_140c77880))
    );
    iVar1 = FUN_1407ddb6c(SUB84((double)local_3c,0));
    if (iVar1 == 0) {
        local_3c = local_58._0_4_;
    }
    local_38 = param_3[1];
    iVar1 = FUN_1407ddb6c(SUB84((double)local_38,0));
    if (iVar1 == 0) {
        local_38 = local_58._4_4_;
    }
    local_34 = (float)((uint)param_3[2] ^ uVar2);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_34,0));
    if (iVar1 == 0) {
        local_34 = (float)(uStack80 ^ uVar2);
    }
    FUN_140828930(param_2,&local_48);
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack120,0x80004005);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140345990(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                        int param_5)

{
    longlong lVar1;
    longlong lVar2;
    float *pfVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;
    uint uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    uint uVar14;
    uint uVar15;

    if (*(ulonglong *)(param_1 + 0x9e0) < param_4) {
        FUN_140115d60(param_1 + 0x9d8,param_4);
    }
    uVar7 = 0;
    if (param_4 != 0) {
        uVar10 = 0x80000000;
        uVar5 = uVar7;
        uVar6 = uVar7;
        fVar9 = 0.0;
        fVar12 = 0.0;
        uVar14 = 0;
        do {
            lVar1 = *(longlong *)(param_3 + uVar6 * 8);
            lVar2 = *(longlong *)(param_1 + 0x9d8);
            fVar8 = *(float *)(lVar1 + 0x10);
            fVar11 = fVar9;
            fVar13 = fVar12;
            uVar15 = uVar14;
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar8,0));
            if (iVar4 == 0) {
                fVar8 = fVar9;
            }
            *(float *)(uVar5 + lVar2) = fVar8;
            fVar9 = *(float *)(lVar1 + 0x14);
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar9,0));
            if (iVar4 == 0) {
                fVar9 = fVar12;
            }
            *(float *)(uVar5 + 4 + lVar2) = fVar9;
            fVar9 = (float)(*(uint *)(lVar1 + 0x18) ^ uVar10);
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar9,0));
            if (iVar4 == 0) {
                fVar9 = (float)(uVar14 ^ uVar10);
            }
            *(float *)(uVar5 + 8 + lVar2) = fVar9;
            uVar14 = uRam0000000140c77888;
            fVar8 = fRam0000000140c77884;
            fVar12 = _DAT_140c77880;
            pfVar3 = *(float **)(param_3 + uVar6 * 8);
            lVar1 = *(longlong *)(param_1 + 0x9d8);
            fVar9 = *pfVar3;
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar9,0));
            if (iVar4 == 0) {
                fVar9 = fVar12;
            }
            *(float *)(uVar5 + 0xc + lVar1) = fVar9;
            fVar9 = pfVar3[1];
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar9,0));
            if (iVar4 == 0) {
                fVar9 = fVar8;
            }
            *(float *)(uVar5 + 0x10 + lVar1) = fVar9;
            fVar9 = (float)((uint)pfVar3[2] ^ uVar10);
            iVar4 = FUN_1407ddb6c(SUB84((double)fVar9,0));
            if (iVar4 == 0) {
                fVar9 = (float)(uVar14 ^ uVar10);
            }
            uVar6 = uVar6 + 1;
            *(float *)(uVar5 + 0x14 + lVar1) = fVar9;
            uVar5 = uVar5 + 0x18;
            fVar9 = fVar11;
            fVar12 = fVar13;
            uVar14 = uVar15;
        } while (uVar6 < param_4);
    }
    iVar4 = FUN_1408287a0(param_2,*(undefined8 *)(param_1 + 0x9d8),param_4 & 0xffff,
                          (param_5 != 0) + '\x01');
    if (iVar4 != 1) {
        uVar7 = 0x80004005;
    }
    return uVar7;
}



undefined8
FUN_140345bf0(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
              undefined8 param_5)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    iVar1 = FUN_1407ddb6c((double)param_3);
    if (iVar1 == 0) {
        param_3 = 1.0;
    }
    iVar1 = FUN_1408285f0(extraout_XMM0_Qa,param_3,param_5);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_140345d20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,code **param_4)

{
    int iVar1;
    undefined4 local_res20 [2];

    local_res20[0] = 0;
    if ((param_4 == (code **)0x0) || (*param_4 == (code *)0x0)) {
        iVar1 = FUN_1408279e0(param_3,0xffffffff,local_res20);
        if (iVar1 != 1) {
            if (param_2 != (undefined4 *)0x0) {
                *param_2 = 0;
            }
            FUN_1400035b0(0x13,1,0,param_3);
            return 0x80004005;
        }
    }
    else {
        iVar1 = FUN_140827ad0(param_3,&LAB_1403451b0,param_4,0xffffffff,local_res20);
        if (iVar1 != 1) {
            if (param_2 != (undefined4 *)0x0) {
                *param_2 = 0;
            }
            FUN_1400035b0(0x13,1,0,param_3);
            (**param_4)(0x80004005,param_4[1]);
            return 0x80004005;
        }
    }
    if (param_2 != (undefined4 *)0x0) {
        *param_2 = local_res20[0];
    }
    return 0;
}



undefined8 FUN_140345e20(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_140829340(param_2,0,0);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_140345e50(undefined8 param_1,undefined4 param_2,code **param_3)

{
    int iVar1;
    undefined4 local_res10 [6];

    local_res10[0] = param_2;
    if ((param_3 == (code **)0x0) || (*param_3 == (code *)0x0)) {
        iVar1 = FUN_1408281c0(0,local_res10,1);
        if (iVar1 == 1) {
            return 0;
        }
    }
    else {
        iVar1 = FUN_140828280(0,local_res10,1,&LAB_1403451b0,param_3);
        if (iVar1 == 1) {
            return 0;
        }
        (**param_3)(0x80004005,param_3[1]);
    }
    return 0x80004005;
}



undefined8 FUN_140345f40(void)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_140828ef0();
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140345f60(undefined8 param_1,float *param_2)

{
    int iVar1;
    uint uVar2;
    undefined auStack136 [32];
    undefined local_68 [8];
    uint uStack96;
    float local_58;
    float local_54;
    float local_50;
    float local_4c;
    float local_48;
    float local_44;
    float local_40;
    float local_3c;
    float local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    local_40 = param_2[8];
    _local_68 = ZEXT816(0);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_40,0));
    if (iVar1 == 0) {
        local_40 = local_68._0_4_;
    }
    local_3c = param_2[9];
    iVar1 = FUN_1407ddb6c(SUB84((double)local_3c,0));
    if (iVar1 == 0) {
        local_3c = local_68._4_4_;
    }
    uVar2 = 0x80000000;
    local_38 = (float)((uint)param_2[10] ^ 0x80000000);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_38,0));
    if (iVar1 == 0) {
        local_38 = (float)(uStack96 ^ uVar2);
    }
    local_58 = param_2[4];
    local_68 = CONCAT44(uRam0000000140c77884,_DAT_140c77880);
    _local_68 = CONCAT48(uRam0000000140c77888,local_68);
    _local_68 = CONCAT412(uRam0000000140c7788c,_local_68);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_58,0));
    if (iVar1 == 0) {
        local_58 = local_68._0_4_;
    }
    local_54 = param_2[5];
    iVar1 = FUN_1407ddb6c(SUB84((double)local_54,0));
    if (iVar1 == 0) {
        local_54 = local_68._4_4_;
    }
    local_50 = (float)((uint)param_2[6] ^ uVar2);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_50,0));
    if (iVar1 == 0) {
        local_50 = (float)(uStack96 ^ uVar2);
    }
    local_4c = *param_2;
    local_68 = CONCAT44(uRam0000000140c77874,_DAT_140c77870);
    _local_68 = CONCAT48(uRam0000000140c77878,local_68);
    _local_68 = CONCAT412(uRam0000000140c7787c,_local_68);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_4c,0));
    if (iVar1 == 0) {
        local_4c = local_68._0_4_;
    }
    local_48 = param_2[1];
    iVar1 = FUN_1407ddb6c(SUB84((double)local_48,0));
    if (iVar1 == 0) {
        local_48 = local_68._4_4_;
    }
    local_44 = (float)((uint)param_2[2] ^ uVar2);
    iVar1 = FUN_1407ddb6c(SUB84((double)local_44,0));
    if (iVar1 == 0) {
        local_44 = (float)(uStack96 ^ uVar2);
    }
    FUN_140828630(&local_58,0);
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack136,0x80004005);
    return;
}



float FUN_140346580(longlong param_1,int param_2)

{
    undefined4 uVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    ulonglong local_res8 [4];

    if (*(int *)(param_1 + 0x930) == 0) {
        return 1.0;
    }
    uVar2 = 0;
    local_res8[0] = 0;
    uVar1 = DAT_140c10f20;
    if (param_2 != 0) {
        if (param_2 != 1) goto LAB_1403465c6;
        uVar1 = *(undefined4 *)(param_1 + 0x68);
    }
    FUN_140881810(uVar1,local_res8);
    uVar2 = local_res8[0] & 0xffffffff;
    LAB_1403465c6:
    if ((int)uVar2 == 0) {
        return 1.0;
    }
    fVar3 = (float)(local_res8[0] >> 0x20) / (float)uVar2;
    if (1.0 <= fVar3) {
        fVar3 = 1.0;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
        fVar4 = fVar3;
    }
    return fVar4;
}



undefined8
FUN_140346630(undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,
              undefined4 param_5)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    iVar1 = FUN_1407ddb6c((double)param_3);
    if (iVar1 == 0) {
        param_3 = 0.0;
    }
    iVar1 = FUN_140828990(extraout_XMM0_Qa,param_3,param_5);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8
FUN_140346690(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined4 param_4,
              undefined4 param_5)

{
    undefined4 uVar1;
    undefined8 uVar2;

    if (param_3 == (longlong *)0x0) {
        return 0x80070057;
    }
    uVar1 = (**(code **)(*param_3 + 0x30))(param_3);
    uVar2 = FUN_140345630(param_1,0xffffffffffffffff,param_2,uVar1,param_4,param_5);
    return uVar2;
}



undefined8 FUN_140346700(undefined8 param_1,float param_2)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    iVar1 = FUN_1407ddb6c((double)param_2);
    if (iVar1 == 0) {
        param_2 = 1.0;
    }
    iVar1 = FUN_140828720(extraout_XMM0_Qa,param_2,0);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_140346750(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_140827d60(param_2,0xffffffffffffffff);
    uVar2 = 0;
    if (iVar1 != 1) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_140346780(void)

{
    int in_R9D;
    code **in_stack_00000028;

    if (((in_stack_00000028 != (code **)0x0) && (*in_stack_00000028 != (code *)0x0)) && (in_R9D < 0))
    {
        (**in_stack_00000028)(0x80000000,in_stack_00000028[1]);
    }
    return 0;
}



undefined8 FUN_1403467b0(void)

{
    code **in_R9;

    if ((in_R9 != (code **)0x0) && (*in_R9 != (code *)0x0)) {
        (**in_R9)(0,in_R9[1]);
    }
    return 0;
}



void FUN_140346830(undefined8 *param_1)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    *param_1 = &PTR_LAB_140b651e0;
    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c7aa70 == DVar1) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar1 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar3 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar3 * (DAT_140c7aa78 ^ 1);
            if (bVar3) goto LAB_1403468a3;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7aa70,DVar1);
        DVar1 = DAT_140c7aa70;
    }
    LAB_1403468a3:
    DAT_140c7aa70 = DVar1;
    if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 *)(param_1[0x11] + 0x80) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if (DAT_140c7aa78 < 2) {
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
    }
    else {
        DAT_140c7aa78 = DAT_140c7aa78 - 1;
    }
    if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 *)(param_1[0x11] + 0x80) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
    }
    return;
}



void FUN_140346c20(uint param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    DWORD DVar5;
    longlong lVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong in_GS_OFFSET;
    bool bVar10;
    undefined4 uStack60;

    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c7aa50 == DVar5) {
        DAT_140c7aa58 = DAT_140c7aa58 + 1;
        DVar5 = DAT_140c7aa50;
    }
    else {
        do {
            LOCK();
            bVar10 = DAT_140c7aa58 == 0;
            DAT_140c7aa58 = DAT_140c7aa58 ^ (ulonglong)bVar10 * (DAT_140c7aa58 ^ 1);
            if (bVar10) goto LAB_140346cbf;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(&DAT_140c7aa50,DVar5);
        DVar5 = DAT_140c7aa50;
    }
    LAB_140346cbf:
    DAT_140c7aa50 = DVar5;
    if (*(int *)(param_2 + 0x54) == 0) {
        LOCK();
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        lVar8 = DAT_140c65870 * 0x10;
        plVar9 = &DAT_140c7aa30 + DAT_140c65870 * 2;
        lVar3 = *(longlong *)(&DAT_140c7aa38 + lVar8);
        lVar6 = FUN_14018db00(*plVar9,lVar3 + 1,0x10);
        *(longlong *)(lVar6 + lVar3 * 0x10) = param_2;
        *(ulonglong *)(lVar6 + 8 + lVar3 * 0x10) = CONCAT44(uStack60,param_1);
        if (*plVar9 != lVar6) {
            FUN_1407db590(lVar6,*plVar9,*(longlong *)(&DAT_140c7aa38 + lVar8) << 4);
            lVar4 = *plVar9;
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *plVar9 = lVar6;
        }
        *(longlong *)(&DAT_140c7aa38 + lVar8) = lVar3 + 1;
        if ((param_1 & 0x80000000) != 0) {
            *(undefined4 *)(param_2 + 0x54) = 1;
        }
    }
    if (DAT_140c7aa58 < 2) {
        DAT_140c7aa50 = 0;
        DAT_140c7aa58 = 0;
        if (DAT_140c7aa60 != 0) {
            if (DAT_140c7aa68 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar10 = DAT_140c7aa68 == (HANDLE)0x0;
                DAT_140c7aa68 =
                        (HANDLE)((ulonglong)DAT_140c7aa68 ^
                                 (ulonglong)bVar10 * ((ulonglong)DAT_140c7aa68 ^ (ulonglong)hObject));
                if (!bVar10) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa68);
        }
        *(undefined4 *)(lVar2 + -4) = uVar1;
        return;
    }
    DAT_140c7aa58 = DAT_140c7aa58 - 1;
    *(undefined4 *)(lVar2 + -4) = uVar1;
    return;
}



undefined8
FUN_140346e50(longlong **param_1,longlong **param_2,longlong param_3,undefined8 *param_4,
              undefined4 param_5,longlong param_6,longlong param_7,undefined8 *param_8)

{
    longlong **pplVar1;
    longlong lVar2;
    DWORD DVar3;
    longlong *plVar4;
    HANDLE hObject;
    longlong *plVar5;
    bool bVar6;

    if (param_4 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    DVar3 = GetCurrentThreadId();
    plVar5 = (longlong *)0x0;
    plVar4 = plVar5;
    if (DAT_140c7aa70 == DVar3) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar3 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar6 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar6 * (DAT_140c7aa78 ^ 1);
            if (bVar6) goto LAB_140346eef;
            plVar4 = (longlong *)((longlong)plVar4 + 1);
        } while (plVar4 < &DAT_00000400);
        FUN_14019fb60(&DAT_140c7aa70);
        DVar3 = DAT_140c7aa70;
    }
    LAB_140346eef:
    DAT_140c7aa70 = DVar3;
    plVar4 = (longlong *)FUN_14018b280(0x90,0);
    if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_LAB_140b651e0;
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[0xe] = 0;
        plVar4[0xf] = 0;
        plVar4[0x10] = 0;
        plVar4[0x11] = 0;
        *(undefined4 *)(plVar4 + 2) = 0;
        plVar4[3] = 0;
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[10] = 0;
        plVar4[0xc] = (longlong)&DAT_1403469f0;
        plVar4[0xd] = (longlong)plVar4;
        plVar4[7] = (longlong)plVar4;
        plVar4[6] = (longlong)FUN_140346c20;
        *(undefined4 *)(plVar4 + 0xb) = 0x80070057;
        plVar5 = plVar4;
    }
    plVar5[3] = param_3;
    if ((undefined8 *)plVar5[4] != param_4) {
        (**(code **)*param_4)(param_4);
        if ((longlong *)plVar5[4] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar5[4] + 8))();
        }
        plVar5[4] = (longlong)param_4;
    }
    *(undefined4 *)(plVar5 + 2) = 0;
    plVar5[8] = param_6;
    *(undefined4 *)(plVar5 + 0xb) = 0x8000000a;
    plVar5[9] = param_7;
    *(undefined4 *)(plVar5 + 10) = param_5;
    if ((undefined8 *)plVar5[5] != param_8) {
        if (param_8 != (undefined8 *)0x0) {
            (**(code **)*param_8)(param_8);
        }
        if ((longlong *)plVar5[5] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar5[5] + 8))();
        }
        plVar5[5] = (longlong)param_8;
    }
    if (plVar5[0x10] == 0) {
        plVar5[0x10] = (longlong)param_1;
        pplVar1 = (longlong **)(plVar5 + 0x11);
        *pplVar1 = *param_1;
        *param_1 = plVar5;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0x10] = (longlong)pplVar1;
        }
    }
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    lVar2 = plVar5[4];
    if (((plVar5 + 0xc != (longlong *)0x0) && (plVar5[0xc] != 0)) &&
        (FUN_140349890(), *(int *)(lVar2 + 0x60) != -0x7ffffff6)) {
        FUN_140349b20(lVar2 + 0x70);
    }
    if (param_2 == (longlong **)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
    }
    else {
        *param_2 = plVar5;
    }
    if (DAT_140c7aa78 < 2) {
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar6 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar6 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar6) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
    }
    else {
        DAT_140c7aa78 = DAT_140c7aa78 - 1;
    }
    return 0;
}



void FUN_1403470f0(longlong *param_1)

{
    longlong lVar1;
    DWORD DVar2;
    int iVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;

    if (param_1 != (longlong *)0x0) {
        DVar2 = GetCurrentThreadId();
        uVar4 = 0;
        if (DAT_140c7aa70 == DVar2) {
            DAT_140c7aa78 = DAT_140c7aa78 + 1;
            DVar2 = DAT_140c7aa70;
        }
        else {
            do {
                LOCK();
                bVar5 = DAT_140c7aa78 == 0;
                DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar5 * (DAT_140c7aa78 ^ 1);
                if (bVar5) goto LAB_140347164;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x400);
            FUN_14019fb60(&DAT_140c7aa70);
            DVar2 = DAT_140c7aa70;
        }
        LAB_140347164:
        DAT_140c7aa70 = DVar2;
        lVar1 = *param_1;
        while (lVar1 != 0) {
            if (*(undefined8 **)(lVar1 + 0x80) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x80) = *(undefined8 *)(lVar1 + 0x88);
            }
            if (*(longlong *)(lVar1 + 0x88) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x88) + 0x80) = *(undefined8 *)(lVar1 + 0x80);
            }
            *(undefined8 *)(lVar1 + 0x80) = 0;
            *(undefined8 *)(lVar1 + 0x88) = 0;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            iVar3 = FUN_1403499e0(lVar1 + 0x60);
            if (iVar3 == 0) {
                if (*(int *)(lVar1 + 0x10) != 0) {
                    (**(code **)(*DAT_140c65858 + 0xd8))(DAT_140c65858,*(int *)(lVar1 + 0x10),500,4);
                }
            }
            else {
                *(undefined4 *)(lVar1 + 0x58) = 0;
                LOCK();
                DAT_140c7a0f8 = DAT_140c7a0f8 + 1;
                FUN_140346c20(0x80000000);
            }
            lVar1 = *param_1;
        }
        if (1 < DAT_140c7aa78) {
            DAT_140c7aa78 = DAT_140c7aa78 - 1;
            return;
        }
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
    }
    return;
}



void FUN_1403474d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    DWORD DVar1;
    int iVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar1 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7aa70 == DVar1) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar1 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar4 * (DAT_140c7aa78 ^ 1);
            if (bVar4) goto LAB_140347553;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7aa70);
        DVar1 = DAT_140c7aa70;
    }
    LAB_140347553:
    DAT_140c7aa70 = DVar1;
    iVar2 = FUN_1403499e0(param_1 + 0x60);
    if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0;
        LOCK();
        DAT_140c7a0f8 = DAT_140c7a0f8 + 1;
        FUN_140346c20(0x80000000);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
        (**(code **)(*DAT_140c65858 + 0xd8))(DAT_140c65858,*(int *)(param_1 + 0x10),param_2,param_3);
    }
    if (DAT_140c7aa78 < 2) {
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
    }
    else {
        DAT_140c7aa78 = DAT_140c7aa78 - 1;
    }
    return;
}



undefined8 FUN_140347620(longlong param_1)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    undefined8 uVar3;
    bool bVar4;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    uVar3 = 1;
    if (DAT_140c7aa70 == DVar1) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar1 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar4 * (DAT_140c7aa78 ^ 1);
            if (bVar4) goto LAB_140347693;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7aa70,DVar1);
        DVar1 = DAT_140c7aa70;
    }
    LAB_140347693:
    DAT_140c7aa70 = DVar1;
    if ((*(int *)(param_1 + 0x58) != -0x7ffffff6) && (*(int *)(param_1 + 0x58) != 0)) {
        uVar3 = 0;
    }
    if (DAT_140c7aa78 < 2) {
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
        return uVar3;
    }
    DAT_140c7aa78 = DAT_140c7aa78 - 1;
    return uVar3;
}



void FUN_140347740(void)

{
    int *piVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    DWORD DVar5;
    ulonglong uVar6;
    HANDLE pvVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong lVar11;
    bool bVar12;

    if ((DAT_140dc1438 & 1) == 0) {
        DAT_140dc1438 = DAT_140dc1438 | 1;
        FUN_1401ad620(&DAT_140dc1440);
    }
    FUN_1401ada40();
    DVar5 = GetCurrentThreadId();
    uVar10 = 0;
    uVar6 = uVar10;
    if (DAT_140c7aa50 == DVar5) {
        DAT_140c7aa58 = DAT_140c7aa58 + 1;
        DVar5 = DAT_140c7aa50;
    }
    else {
        do {
            LOCK();
            bVar12 = DAT_140c7aa58 == 0;
            DAT_140c7aa58 = DAT_140c7aa58 ^ (ulonglong)bVar12 * (DAT_140c7aa58 ^ 1);
            if (bVar12) goto LAB_1403477ef;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(&DAT_140c7aa50);
        DVar5 = DAT_140c7aa50;
    }
    LAB_1403477ef:
    DAT_140c7aa50 = DVar5;
    uVar6 = DAT_140c65870 ^ 1;
    lVar11 = DAT_140c65870 * 0x10;
    lVar4 = DAT_140c65870 * 2;
    DAT_140c65870 = uVar6;
    if (DAT_140c7aa58 < 2) {
        DAT_140c7aa50 = 0;
        DAT_140c7aa58 = 0;
        if (DAT_140c7aa60 != 0) {
            if (DAT_140c7aa68 == (HANDLE)0x0) {
                pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar12 = DAT_140c7aa68 == (HANDLE)0x0;
                DAT_140c7aa68 =
                        (HANDLE)((ulonglong)DAT_140c7aa68 ^
                                 (ulonglong)bVar12 * ((ulonglong)DAT_140c7aa68 ^ (ulonglong)pvVar7));
                if (!bVar12) {
                    CloseHandle(pvVar7);
                }
            }
            SetEvent(DAT_140c7aa68);
        }
    }
    else {
        DAT_140c7aa58 = DAT_140c7aa58 - 1;
    }
    DVar5 = GetCurrentThreadId();
    uVar6 = uVar10;
    if (DAT_140c7aa70 == DVar5) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar5 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar12 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar12 * (DAT_140c7aa78 ^ 1);
            if (bVar12) goto LAB_1403478cf;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(&DAT_140c7aa70);
        DVar5 = DAT_140c7aa70;
    }
    LAB_1403478cf:
    DAT_140c7aa70 = DVar5;
    uVar6 = DAT_140c7aa78;
    for (lVar9 = *(longlong *)(&DAT_140c7aa38 + lVar11); DAT_140c7aa78 = uVar6, lVar9 != 0;
         lVar9 = lVar9 + -1) {
        lVar2 = (&DAT_140c7aa30)[lVar4];
        plVar3 = *(longlong **)(lVar2 + uVar10);
        uVar8 = *(uint *)(plVar3 + 10) & *(uint *)(lVar2 + 8 + uVar10);
        if (((code *)plVar3[8] != (code *)0x0) && (uVar8 != 0)) {
            (*(code *)plVar3[8])(plVar3,uVar8,plVar3[9]);
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x58))(plVar3);
        }
        if ((*(uint *)(lVar2 + 8 + uVar10) & 0x80000000) != 0) {
            *(undefined4 *)(plVar3 + 2) = 0;
            plVar3[8] = 0;
            if (-1 < *(int *)(plVar3 + 0xb)) {
                *(undefined4 *)(plVar3 + 0xb) = 0x80070057;
            }
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x58))(plVar3);
            }
            LOCK();
            DAT_140c7a0f8 = DAT_140c7a0f8 + -1;
        }
        uVar10 = uVar10 + 0x10;
        uVar6 = DAT_140c7aa78;
    }
    *(undefined8 *)(&DAT_140c7aa38 + lVar11) = 0;
    if (1 < uVar6) {
        DAT_140c7aa78 = DAT_140c7aa78 - 1;
        return;
    }
    DAT_140c7aa70 = 0;
    DAT_140c7aa78 = 0;
    if (DAT_140c7aa80 != 0) {
        if (DAT_140c7aa88 == (HANDLE)0x0) {
            pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            bVar12 = DAT_140c7aa88 == (HANDLE)0x0;
            DAT_140c7aa88 =
                    (HANDLE)((ulonglong)DAT_140c7aa88 ^
                             (ulonglong)bVar12 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)pvVar7));
            if (!bVar12) {
                CloseHandle(pvVar7);
            }
        }
        // WARNING: Could not recover jumptable at 0x0001403479fa. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(DAT_140c7aa88);
        return;
    }
    DAT_140c7aa70 = 0;
    DAT_140c7aa78 = 0;
    return;
}



void FUN_140347a10(void)

{
    int *piVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE pvVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    bool bVar11;

    if (1 < DAT_140c7a0f8) {
        uVar10 = 0;
        do {
            if ((DAT_140dc1438 & 1) == 0) {
                DAT_140dc1438 = DAT_140dc1438 | 1;
                FUN_1401ad620(&DAT_140dc1440);
            }
            FUN_1401ada40();
            DVar5 = GetCurrentThreadId();
            uVar7 = uVar10;
            if (DAT_140c7aa50 == DVar5) {
                DAT_140c7aa58 = DAT_140c7aa58 + 1;
                DVar5 = DAT_140c7aa50;
            }
            else {
                do {
                    LOCK();
                    bVar11 = DAT_140c7aa58 == 0;
                    DAT_140c7aa58 = DAT_140c7aa58 ^ (ulonglong)bVar11 * (DAT_140c7aa58 ^ 1);
                    if (bVar11) goto LAB_140347aef;
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0x400);
                FUN_14019fb60();
                DVar5 = DAT_140c7aa50;
            }
            LAB_140347aef:
            DAT_140c7aa50 = DVar5;
            uVar7 = DAT_140c65870;
            DAT_140c65870 = DAT_140c65870 ^ 1;
            if (DAT_140c7aa58 < 2) {
                DAT_140c7aa50 = 0;
                DAT_140c7aa58 = 0;
                if (DAT_140c7aa60 != 0) {
                    if (DAT_140c7aa68 == (HANDLE)0x0) {
                        pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                        LOCK();
                        bVar11 = DAT_140c7aa68 == (HANDLE)0x0;
                        DAT_140c7aa68 =
                                (HANDLE)((ulonglong)DAT_140c7aa68 ^
                                         (ulonglong)bVar11 * ((ulonglong)DAT_140c7aa68 ^ (ulonglong)pvVar6));
                        if (!bVar11) {
                            CloseHandle(pvVar6);
                        }
                    }
                    SetEvent(DAT_140c7aa68);
                }
            }
            else {
                DAT_140c7aa58 = DAT_140c7aa58 - 1;
            }
            DVar5 = GetCurrentThreadId();
            uVar9 = uVar10;
            if (DAT_140c7aa70 == DVar5) {
                DAT_140c7aa78 = DAT_140c7aa78 + 1;
                DVar5 = DAT_140c7aa70;
            }
            else {
                do {
                    LOCK();
                    bVar11 = DAT_140c7aa78 == 0;
                    DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar11 * (DAT_140c7aa78 ^ 1);
                    if (bVar11) goto LAB_140347bcf;
                    uVar9 = uVar9 + 1;
                } while (uVar9 < 0x400);
                FUN_14019fb60(&DAT_140c7aa70);
                DVar5 = DAT_140c7aa70;
            }
            LAB_140347bcf:
            DAT_140c7aa70 = DVar5;
            uVar9 = uVar10;
            uVar4 = DAT_140c7aa78;
            for (lVar8 = *(longlong *)(&DAT_140c7aa38 + uVar7 * 0x10); DAT_140c7aa78 = uVar4, lVar8 != 0;
                 lVar8 = lVar8 + -1) {
                lVar2 = (&DAT_140c7aa30)[uVar7 * 2];
                plVar3 = *(longlong **)(lVar2 + uVar9);
                if (((code *)plVar3[8] != (code *)0x0) &&
                    ((*(uint *)(plVar3 + 10) & *(uint *)(lVar2 + 8 + uVar9)) != 0)) {
                    (*(code *)plVar3[8])(plVar3);
                }
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x58))(plVar3);
                }
                if ((*(uint *)(lVar2 + 8 + uVar9) & 0x80000000) != 0) {
                    *(undefined4 *)(plVar3 + 2) = 0;
                    plVar3[8] = 0;
                    if (-1 < *(int *)(plVar3 + 0xb)) {
                        *(undefined4 *)(plVar3 + 0xb) = 0x80070057;
                    }
                    LOCK();
                    piVar1 = (int *)((longlong)plVar3 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                        (**(code **)(*plVar3 + 0x58))(plVar3);
                    }
                    LOCK();
                    DAT_140c7a0f8 = DAT_140c7a0f8 - 1;
                }
                uVar9 = uVar9 + 0x10;
                uVar4 = DAT_140c7aa78;
            }
            *(undefined8 *)(&DAT_140c7aa38 + uVar7 * 0x10) = 0;
            if (uVar4 < 2) {
                DAT_140c7aa70 = 0;
                DAT_140c7aa78 = 0;
                if (DAT_140c7aa80 != 0) {
                    if (DAT_140c7aa88 == (HANDLE)0x0) {
                        pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                        LOCK();
                        bVar11 = DAT_140c7aa88 == (HANDLE)0x0;
                        DAT_140c7aa88 =
                                (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                         (ulonglong)bVar11 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)pvVar6));
                        if (!bVar11) {
                            CloseHandle(pvVar6);
                        }
                    }
                    SetEvent(DAT_140c7aa88);
                }
            }
            else {
                DAT_140c7aa78 = DAT_140c7aa78 - 1;
            }
        } while (1 < DAT_140c7a0f8);
    }
    return;
}



ulonglong FUN_140347d10(longlong *param_1,code *param_2,undefined8 param_3)

{
    longlong lVar1;
    DWORD DVar2;
    uint uVar3;
    HANDLE hObject;
    ulonglong uVar4;
    ulonglong uVar5;
    bool bVar6;

    DVar2 = GetCurrentThreadId();
    uVar5 = 0;
    uVar4 = uVar5;
    if (DAT_140c7aa70 == DVar2) {
        DAT_140c7aa78 = DAT_140c7aa78 + 1;
        DVar2 = DAT_140c7aa70;
    }
    else {
        do {
            LOCK();
            bVar6 = DAT_140c7aa78 == 0;
            DAT_140c7aa78 = DAT_140c7aa78 ^ (ulonglong)bVar6 * (DAT_140c7aa78 ^ 1);
            if (bVar6) goto LAB_140347d93;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c7aa70,DVar2);
        DVar2 = DAT_140c7aa70;
    }
    LAB_140347d93:
    DAT_140c7aa70 = DVar2;
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
        uVar3 = (*param_2)(lVar1,param_3);
        uVar5 = (ulonglong)uVar3;
        if ((int)uVar3 < 0) break;
    }
    if (DAT_140c7aa78 < 2) {
        DAT_140c7aa70 = 0;
        DAT_140c7aa78 = 0;
        if (DAT_140c7aa80 != 0) {
            if (DAT_140c7aa88 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar6 = DAT_140c7aa88 == (HANDLE)0x0;
                DAT_140c7aa88 =
                        (HANDLE)((ulonglong)DAT_140c7aa88 ^
                                 (ulonglong)bVar6 * ((ulonglong)DAT_140c7aa88 ^ (ulonglong)hObject));
                if (!bVar6) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aa88);
        }
    }
    else {
        DAT_140c7aa78 = DAT_140c7aa78 - 1;
    }
    return uVar5;
}



undefined8 FUN_140347e50(undefined8 param_1,ulonglong param_2)

{
    FUN_140347e90();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140347e90(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = param_1[3];
    uVar3 = 0;
    *param_1 = &PTR_LAB_140b65240;
    uVar5 = uVar3;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar1 = param_1[2];
        plVar2 = *(longlong **)(lVar1 + 0x210 + uVar5);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *(undefined8 *)(lVar1 + 0x210 + uVar5) = 0;
        }
        uVar5 = uVar5 + 0x218;
    }
    uVar5 = uVar3;
    if (param_1[3] != 0) {
        do {
            plVar2 = *(longlong **)(uVar5 + 0x210 + param_1[2]);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
            }
            uVar3 = uVar3 + 1;
            uVar5 = uVar5 + 0x218;
        } while (uVar3 < (ulonglong)param_1[3]);
    }
    lVar4 = param_1[2];
    if (lVar4 != 0) {
        // WARNING: Could not recover jumptable at 0x000140347f5b. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        return;
    }
    return;
}



void FUN_1403480d0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (1 < (ulonglong)param_1[1]) {
        uVar5 = 1;
        if (1 < (ulonglong)param_1[1]) {
            lVar3 = 0x218;
            do {
                plVar1 = *(longlong **)(lVar3 + 0x210 + *param_1);
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 8))();
                }
                uVar5 = uVar5 + 1;
                lVar3 = lVar3 + 0x218;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        param_1[1] = 1;
    }
    lVar3 = FUN_14018dbc0(*param_1,1,0x218);
    if (*param_1 != lVar3) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar5 + lVar3 != 0) {
                    FUN_140348290(uVar5 + lVar3,*param_1 + uVar5);
                }
                plVar1 = *(longlong **)(uVar5 + 0x210 + *param_1);
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 8))();
                }
                uVar4 = uVar4 + 1;
                uVar5 = uVar5 + 0x218;
            } while (uVar4 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    return;
}



longlong FUN_1403481c0(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1,0x218);
    lVar4 = lVar1 * 0x218 + lVar3;
    if (lVar4 != 0) {
        FUN_140348290(lVar4,param_2);
    }
    if (*param_1 != lVar3) {
        uVar5 = 0;
        uVar6 = uVar5;
        if (param_1[1] != 0) {
            do {
                if (uVar5 + lVar3 != 0) {
                    FUN_140348290(uVar5 + lVar3,*param_1 + uVar5);
                }
                plVar2 = *(longlong **)(uVar5 + 0x210 + *param_1);
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 8))();
                }
                uVar6 = uVar6 + 1;
                uVar5 = uVar5 + 0x218;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar4 = *param_1;
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined4 * FUN_140348290(undefined4 *param_1,undefined4 *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    puVar8 = (undefined8 *)(param_2 + 1);
    *param_1 = *param_2;
    puVar7 = (undefined8 *)(param_1 + 1);
    if ((((uint)puVar8 | (uint)puVar7) & 0xf) == 0) {
        lVar6 = 4;
        do {
            uVar3 = *(undefined4 *)((longlong)puVar8 + 4);
            uVar4 = *(undefined4 *)(puVar8 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0xc);
            puVar1 = puVar7 + 0x10;
            puVar2 = puVar8 + 0x10;
            *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar7 + 4) = uVar3;
            *(undefined4 *)(puVar7 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uVar4 = *(undefined4 *)(puVar8 + 3);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x1c);
            *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
            *(undefined4 *)(puVar7 + 3) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x24);
            uVar4 = *(undefined4 *)(puVar8 + 5);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x2c);
            *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar8 + 4);
            *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
            *(undefined4 *)(puVar7 + 5) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x34);
            uVar4 = *(undefined4 *)(puVar8 + 7);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x3c);
            *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(puVar8 + 6);
            *(undefined4 *)((longlong)puVar7 + 0x34) = uVar3;
            *(undefined4 *)(puVar7 + 7) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x44);
            uVar4 = *(undefined4 *)(puVar8 + 9);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x4c);
            *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(puVar8 + 8);
            *(undefined4 *)((longlong)puVar7 + 0x44) = uVar3;
            *(undefined4 *)(puVar7 + 9) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x54);
            uVar4 = *(undefined4 *)(puVar8 + 0xb);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x5c);
            *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(puVar8 + 10);
            *(undefined4 *)((longlong)puVar7 + 0x54) = uVar3;
            *(undefined4 *)(puVar7 + 0xb) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 100);
            uVar4 = *(undefined4 *)(puVar8 + 0xd);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x6c);
            *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar8 + 0xc);
            *(undefined4 *)((longlong)puVar7 + 100) = uVar3;
            *(undefined4 *)(puVar7 + 0xd) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x74);
            uVar4 = *(undefined4 *)(puVar8 + 0xf);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x7c);
            *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(puVar8 + 0xe);
            *(undefined4 *)((longlong)puVar7 + 0x74) = uVar3;
            *(undefined4 *)(puVar7 + 0xf) = uVar4;
            *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar5;
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
            puVar8 = puVar2;
        } while (lVar6 != 0);
        *puVar1 = *puVar2;
    }
    else {
        FUN_1407db590(puVar7,puVar8,0x208);
    }
    puVar7 = *(undefined8 **)(param_2 + 0x84);
    *(undefined8 **)(param_1 + 0x84) = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)();
    }
    return param_1;
}



int FUN_140348350(longlong *param_1)

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
            (**(code **)(*param_1 + 0x18))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 * FUN_140348380(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    *param_1 = &PTR_LAB_140b652d0;
    *(undefined4 *)(param_1 + 2) = 0x80070057;
    param_1[3] = 0;
    param_1[1] = &PTR_FUN_140b65328;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 1;
    iVar2 = 1;
    puVar1 = param_1 + 0xe;
    do {
        iVar2 = iVar2 + -1;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        puVar1 = puVar1 + 4;
    } while (-1 < iVar2);
    *(undefined4 *)(param_1 + 0x14) = 1;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    FUN_14034a1a0(param_1 + 1,0x80070057);
    return param_1;
}



void FUN_140348470(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong **pplVar5;
    int iVar6;

    *param_1 = &PTR_LAB_140b652d0;
    if (*(int *)(param_1 + 8) != 0) {
        FUN_1403487f0();
    }
    uVar3 = 0;
    pplVar5 = (longlong **)(param_1 + 10);
    do {
        if (*pplVar5 != (longlong *)0x0) {
            FUN_1403499e0(param_1 + (uVar3 + 3) * 4);
            (**(code **)(**pplVar5 + 8))();
            *pplVar5 = (longlong *)0x0;
        }
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
        pplVar5 = pplVar5 + 1;
    } while (uVar4 < 2);
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    FUN_14033fb30();
    if ((undefined8 *)param_1[0x15] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x15] = param_1[0x16];
    }
    if (param_1[0x16] != 0) {
        *(undefined8 *)(param_1[0x16] + 0xa8) = param_1[0x15];
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    iVar6 = 1;
    puVar2 = param_1 + 0x16;
    do {
        puVar1 = puVar2 + -4;
        if ((undefined8 *)puVar2[-4] != (undefined8 *)0x0) {
            *(undefined8 *)puVar2[-4] = puVar2[-3];
        }
        if (puVar2[-3] != 0) {
            *(undefined8 *)(puVar2[-3] + 0x10) = *puVar1;
        }
        iVar6 = iVar6 + -1;
        *puVar1 = 0;
        puVar2[-3] = 0;
        puVar2 = puVar1;
    } while (-1 < iVar6);
    FUN_140349d80(param_1 + 1);
    return;
}



undefined8 FUN_1403485a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
    int *piVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong lVar6;

    if ((param_2 != 0) && (param_4 != (undefined8 *)0x0)) {
        *(undefined8 *)(param_1 + 0x48) = 1;
        *(undefined8 **)(param_1 + 0x30) = param_4;
        *(undefined8 *)(param_1 + 0x40) = 0;
        (**(code **)*param_4)(param_4);
        FUN_14034a2b0(param_1 + 8);
        LOCK();
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        plVar5 = (longlong *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x58) = param_3;
        lVar6 = 2;
        *plVar5 = param_2;
        plVar4 = (longlong *)(param_1 + 0x60);
        do {
            if ((undefined8 *)*plVar5 != (undefined8 *)0x0) {
                (***(code ***)(undefined8 *)*plVar5)();
                *plVar4 = (longlong)&LAB_140348710;
                plVar4[1] = param_1;
                LOCK();
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                lVar3 = *plVar5;
                if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
                    FUN_140349890(plVar4);
                    if (*(int *)(lVar3 + 0x60) != -0x7ffffff6) {
                        FUN_140349b20(lVar3 + 0x70);
                    }
                }
            }
            plVar4 = plVar4 + 4;
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        LOCK();
        piVar1 = (int *)(param_1 + 0x28);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        if (iVar2 != 1) {
            FUN_14034a1a0(param_1 + 8,0);
        }
        if (*(longlong *)(param_1 + 0xa8) == 0) {
            plVar5 = (longlong *)(param_1 + 0xb0);
            *(longlong **)(param_1 + 0xa8) = &DAT_140c7aa90;
            *plVar5 = DAT_140c7aa90;
            DAT_140c7aa90 = param_1;
            if (*plVar5 != 0) {
                *(longlong **)(*plVar5 + 0xa8) = plVar5;
            }
        }
        FUN_14033fa70();
        return 0;
    }
    return 0x80070057;
}



void FUN_140348750(longlong param_1)

{
    int iVar1;

    if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x44) != 0)) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
        if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x40) = 1;
            *(undefined4 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x4c) = 1;
            if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
                *(undefined8 *)(param_1 + 0x38) = 0;
            }
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                    (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50),param_1 + 0x38,1,
                     &LAB_140348730,param_1,0);
        }
    }
    return;
}



void FUN_1403487f0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;

    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
        if (iVar2 != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                    (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x58),0,0,0,0,0);
            return;
        }
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140348853. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x48))(plVar1,1000,4);
        return;
    }
    return;
}



undefined8 FUN_140348a80(longlong param_1)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c7aa98 == DVar1) {
        DAT_140c7aaa0 = DAT_140c7aaa0 + 1;
        DVar1 = DAT_140c7aa98;
    }
    else {
        do {
            LOCK();
            bVar3 = DAT_140c7aaa0 == 0;
            DAT_140c7aaa0 = DAT_140c7aaa0 ^ (ulonglong)bVar3 * (DAT_140c7aaa0 ^ 1);
            if (bVar3) goto LAB_140348af3;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7aa98,DVar1);
        DVar1 = DAT_140c7aa98;
    }
    LAB_140348af3:
    DAT_140c7aa98 = DVar1;
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    FUN_140348750(param_1);
    if (DAT_140c7aaa0 < 2) {
        DAT_140c7aa98 = 0;
        DAT_140c7aaa0 = 0;
        if (DAT_140c7aaa8 != 0) {
            if (DAT_140c7aab0 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7aab0 == (HANDLE)0x0;
                DAT_140c7aab0 =
                        (HANDLE)((ulonglong)DAT_140c7aab0 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7aab0 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7aab0);
        }
        return 0;
    }
    DAT_140c7aaa0 = DAT_140c7aaa0 - 1;
    return 0;
}



void FUN_140348cd0(void)

{
    longlong lVar1;
    DWORD DVar2;
    int iVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;

    DVar2 = GetCurrentThreadId();
    uVar4 = 0;
    lVar1 = DAT_140c7aa90;
    if (DAT_140c7aa98 == DVar2) {
        DAT_140c7aaa0 = DAT_140c7aaa0 + 1;
        DVar2 = DAT_140c7aa98;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7aaa0 == 0;
            DAT_140c7aaa0 = DAT_140c7aaa0 ^ (ulonglong)bVar5 * (DAT_140c7aaa0 ^ 1);
            if (bVar5) goto joined_r0x000140348d3b;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c7aa98);
        lVar1 = DAT_140c7aa90;
        DVar2 = DAT_140c7aa98;
    }
    joined_r0x000140348d3b:
    for (; DAT_140c7aa98 = DVar2, lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb0)) {
        FUN_140348750(lVar1);
        if ((((*(int *)(lVar1 + 0x40) != 0) && (*(int *)(lVar1 + 0x48) == 0)) &&
             (*(int *)(lVar1 + 0x44) == 0)) &&
            ((iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x18))(), iVar3 != 0 &&
                                                                             (*(int *)(lVar1 + 0x10) != -0x7ffffff6)))) {
            FUN_1403487f0(lVar1);
            *(undefined4 *)(lVar1 + 0x48) = 1;
        }
        DVar2 = DAT_140c7aa98;
    }
    if (1 < DAT_140c7aaa0) {
        DAT_140c7aaa0 = DAT_140c7aaa0 - 1;
        return;
    }
    DAT_140c7aa98 = 0;
    DAT_140c7aaa0 = 0;
    if (DAT_140c7aaa8 != 0) {
        if (DAT_140c7aab0 == (HANDLE)0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            bVar5 = DAT_140c7aab0 == (HANDLE)0x0;
            DAT_140c7aab0 =
                    (HANDLE)((ulonglong)DAT_140c7aab0 ^
                             (ulonglong)bVar5 * ((ulonglong)DAT_140c7aab0 ^ (ulonglong)hObject));
            if (!bVar5) {
                CloseHandle(hObject);
            }
        }
        SetEvent(DAT_140c7aab0);
    }
    return;
}



void FUN_140348e50(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b652b8;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



int FUN_140348ed0(longlong param_1,longlong *param_2,undefined8 param_3)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;

    lVar3 = FUN_14018b280(0xa0,0);
    plVar5 = (longlong *)0x0;
    plVar4 = plVar5;
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_140342b10(lVar3);
    }
    iVar1 = (**(code **)(*DAT_140c65858 + 0xb0))(DAT_140c65858,plVar4[5],0);
    if (iVar1 < 0) {
        (**(code **)(*plVar4 + 0xf0))(plVar4,1);
    }
    else {
        lVar3 = FUN_14018b280(0xb8,0);
        if (lVar3 != 0) {
            plVar5 = (longlong *)FUN_140348380(lVar3);
        }
        iVar1 = FUN_1403485a0(plVar5,param_2,param_3,plVar4);
        if (iVar1 < 0) {
            (**(code **)(*plVar4 + 0xf0))(plVar4,1);
            if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x50))(plVar5,1);
            }
        }
        else {
            *(longlong **)(param_1 + 0x10) = plVar4;
            *(longlong **)(param_1 + 0x18) = plVar5;
            uVar2 = (**(code **)(*param_2 + 0x30))(param_2);
            plVar4 = (longlong *)(&DAT_140c7aae0 + (ulonglong)(uVar2 & 7) * 8);
            if (*(longlong *)(param_1 + 0x20) == 0) {
                *(longlong **)(param_1 + 0x20) = plVar4;
                plVar5 = (longlong *)(param_1 + 0x28);
                *plVar5 = *plVar4;
                *plVar4 = param_1;
                if (*plVar5 != 0) {
                    *(longlong **)(*plVar5 + 0x20) = plVar5;
                }
            }
        }
    }
    return iVar1;
}



int FUN_140349010(longlong **param_1,longlong param_2,undefined8 param_3)

{
    DWORD DVar1;
    int iVar2;
    longlong *plVar3;
    HANDLE hObject;
    longlong *plVar4;
    bool bVar5;

    if ((param_1 == (longlong **)0x0) || (param_2 == 0)) {
        return -0x7ff8ffa9;
    }
    DVar1 = GetCurrentThreadId();
    plVar4 = (longlong *)0x0;
    plVar3 = plVar4;
    if (DAT_140c7ab20 == DVar1) {
        DAT_140c7ab28 = DAT_140c7ab28 + 1;
        DVar1 = DAT_140c7ab20;
    }
    else {
        do {
            LOCK();
            bVar5 = DAT_140c7ab28 == 0;
            DAT_140c7ab28 = DAT_140c7ab28 ^ (ulonglong)bVar5 * (DAT_140c7ab28 ^ 1);
            if (bVar5) goto LAB_1403490ad;
            plVar3 = (longlong *)((longlong)plVar3 + 1);
        } while (plVar3 < &DAT_00000400);
        FUN_14019fb60(&DAT_140c7ab20,DVar1);
        DVar1 = DAT_140c7ab20;
    }
    LAB_1403490ad:
    DAT_140c7ab20 = DVar1;
    plVar3 = (longlong *)FUN_140349460(param_2);
    if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_14018b280(0x30,0);
        if (plVar3 != (longlong *)0x0) {
            *plVar3 = (longlong)&PTR_LAB_140b55048;
            *(undefined4 *)(plVar3 + 1) = 1;
            *plVar3 = (longlong)&PTR_LAB_140b652b8;
            plVar3[4] = 0;
            plVar3[5] = 0;
            plVar3[2] = 0;
            plVar3[3] = 0;
            plVar4 = plVar3;
        }
        iVar2 = FUN_140348ed0(plVar4,param_2,param_3);
        if (iVar2 < 0) {
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x10))(plVar4,1);
            }
        }
        else {
            *param_1 = plVar4;
        }
    }
    else {
        *param_1 = plVar3;
        (**(code **)*plVar3)(plVar3);
        iVar2 = 0;
    }
    if (DAT_140c7ab28 < 2) {
        DAT_140c7ab20 = 0;
        DAT_140c7ab28 = 0;
        if (DAT_140c7ab30 != 0) {
            if (DAT_140c7ab38 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar5 = DAT_140c7ab38 == (HANDLE)0x0;
                DAT_140c7ab38 =
                        (HANDLE)((ulonglong)DAT_140c7ab38 ^
                                 (ulonglong)bVar5 * ((ulonglong)DAT_140c7ab38 ^ (ulonglong)hObject));
                if (!bVar5) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab38);
        }
        return iVar2;
    }
    DAT_140c7ab28 = DAT_140c7ab28 - 1;
    return iVar2;
}



void FUN_1403491e0(longlong param_1,longlong param_2)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    if (param_2 != 0) {
        DVar1 = GetCurrentThreadId();
        uVar2 = 0;
        if (DAT_140c7ab20 == DVar1) {
            DAT_140c7ab28 = DAT_140c7ab28 + 1;
            DVar1 = DAT_140c7ab20;
        }
        else {
            do {
                LOCK();
                bVar3 = DAT_140c7ab28 == 0;
                DAT_140c7ab28 = DAT_140c7ab28 ^ (ulonglong)bVar3 * (DAT_140c7ab28 ^ 1);
                if (bVar3) goto LAB_140349263;
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x400);
            FUN_14019fb60(&DAT_140c7ab20,DVar1);
            DVar1 = DAT_140c7ab20;
        }
        LAB_140349263:
        DAT_140c7ab20 = DVar1;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),param_2,1);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
        if (1 < DAT_140c7ab28) {
            DAT_140c7ab28 = DAT_140c7ab28 - 1;
            return;
        }
        DAT_140c7ab20 = 0;
        DAT_140c7ab28 = 0;
        if (DAT_140c7ab30 != 0) {
            if (DAT_140c7ab38 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7ab38 == (HANDLE)0x0;
                DAT_140c7ab38 =
                        (HANDLE)((ulonglong)DAT_140c7ab38 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7ab38 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab38);
        }
    }
    return;
}



void FUN_140349310(longlong param_1,longlong param_2)

{
    longlong lVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    if (param_2 != 0) {
        DVar2 = GetCurrentThreadId();
        uVar3 = 0;
        if (DAT_140c7ab20 == DVar2) {
            DAT_140c7ab28 = DAT_140c7ab28 + 1;
            DVar2 = DAT_140c7ab20;
        }
        else {
            do {
                LOCK();
                bVar4 = DAT_140c7ab28 == 0;
                DAT_140c7ab28 = DAT_140c7ab28 ^ (ulonglong)bVar4 * (DAT_140c7ab28 ^ 1);
                if (bVar4) goto LAB_140349393;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x400);
            FUN_14019fb60(&DAT_140c7ab20,DVar2);
            DVar2 = DAT_140c7ab20;
        }
        LAB_140349393:
        DAT_140c7ab20 = DVar2;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))(*(longlong **)(param_1 + 0x10),param_2);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
        if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x50) == 0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
        }
        if (1 < DAT_140c7ab28) {
            DAT_140c7ab28 = DAT_140c7ab28 - 1;
            return;
        }
        DAT_140c7ab20 = 0;
        DAT_140c7ab28 = 0;
        if (DAT_140c7ab30 != 0) {
            if (DAT_140c7ab38 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7ab38 == (HANDLE)0x0;
                DAT_140c7ab38 =
                        (HANDLE)((ulonglong)DAT_140c7ab38 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7ab38 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab38);
        }
    }
    return;
}



longlong FUN_140349460(longlong *param_1)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong *plVar4;

    if (param_1 == (longlong *)0x0) {
        return 0;
    }
    uVar2 = (**(code **)(*param_1 + 0x30))();
    lVar1 = *(longlong *)(&DAT_140c7aae0 + (ulonglong)(uVar2 & 7) * 8);
    while( true ) {
        if (lVar1 == 0) {
            return 0;
        }
        plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x18) + 0x30))();
        uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
        if (uVar2 == uVar3) break;
        lVar1 = *(longlong *)(lVar1 + 0x28);
    }
    return lVar1;
}



undefined8 * FUN_1403494f0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b65260;
    if (*(int *)(param_1 + 3) != 0) {
        FUN_1403496e0();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[1] + 8))();
        param_1[1] = 0;
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1403496e0(longlong param_1)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c7ab40 == DVar1) {
        DAT_140c7ab48 = DAT_140c7ab48 + 1;
        DVar1 = DAT_140c7ab40;
    }
    else {
        do {
            LOCK();
            bVar3 = DAT_140c7ab48 == 0;
            DAT_140c7ab48 = DAT_140c7ab48 ^ (ulonglong)bVar3 * (DAT_140c7ab48 ^ 1);
            if (bVar3) goto LAB_140349746;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7ab40,DVar1);
        DVar1 = DAT_140c7ab40;
    }
    LAB_140349746:
    DAT_140c7ab40 = DVar1;
    if (*(int *)(param_1 + 0x18) != 0) {
        FUN_140349310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
        *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (DAT_140c7ab48 < 2) {
        DAT_140c7ab40 = 0;
        DAT_140c7ab48 = 0;
        if (DAT_140c7ab50 != 0) {
            if (DAT_140c7ab58 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7ab58 == (HANDLE)0x0;
                DAT_140c7ab58 =
                        (HANDLE)((ulonglong)DAT_140c7ab58 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7ab58 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab58);
        }
        return 0;
    }
    DAT_140c7ab48 = DAT_140c7ab48 - 1;
    return 0;
}



int FUN_1403497f0(longlong *param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x1c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (longlong *)0x0) {
            (**(code **)(*param_1 + 0x50))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_140349890(longlong *param_1,longlong **param_2)

{
    longlong **pplVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    if ((*param_1 == 0) || (param_2 == (longlong **)0x0)) {
        return 0x80070057;
    }
    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7ab60 == DVar2) {
        DAT_140c7ab68 = DAT_140c7ab68 + 1;
        DVar2 = DAT_140c7ab60;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7ab68 == 0;
            DAT_140c7ab68 = DAT_140c7ab68 ^ (ulonglong)bVar4 * (DAT_140c7ab68 ^ 1);
            if (bVar4) goto LAB_14034990f;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7ab60);
        DVar2 = DAT_140c7ab60;
    }
    LAB_14034990f:
    DAT_140c7ab60 = DVar2;
    if (param_1[2] == 0) {
        param_1[2] = (longlong)param_2;
        pplVar1 = (longlong **)(param_1 + 3);
        *pplVar1 = *param_2;
        *param_2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[2] = (longlong)pplVar1;
        }
    }
    if (DAT_140c7ab68 < 2) {
        DAT_140c7ab60 = 0;
        DAT_140c7ab68 = 0;
        if (DAT_140c7ab70 != 0) {
            if (DAT_140c7ab78 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7ab78 == (HANDLE)0x0;
                DAT_140c7ab78 =
                        (HANDLE)((ulonglong)DAT_140c7ab78 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7ab78 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab78);
        }
        return 0;
    }
    DAT_140c7ab68 = DAT_140c7ab68 - 1;
    return 0;
}



bool FUN_1403499e0(longlong param_1)

{
    undefined8 *puVar1;
    DWORD DVar2;
    HANDLE hObject;
    ulonglong uVar3;
    bool bVar4;

    DVar2 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c7ab60 == DVar2) {
        DAT_140c7ab68 = DAT_140c7ab68 + 1;
        DVar2 = DAT_140c7ab60;
    }
    else {
        do {
            LOCK();
            bVar4 = DAT_140c7ab68 == 0;
            DAT_140c7ab68 = DAT_140c7ab68 ^ (ulonglong)bVar4 * (DAT_140c7ab68 ^ 1);
            if (bVar4) goto LAB_140349a53;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c7ab60,DVar2);
        DVar2 = DAT_140c7ab60;
    }
    LAB_140349a53:
    DAT_140c7ab60 = DVar2;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (DAT_140c7ab68 < 2) {
        DAT_140c7ab60 = 0;
        DAT_140c7ab68 = 0;
        if (DAT_140c7ab70 != 0) {
            if (DAT_140c7ab78 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar4 = DAT_140c7ab78 == (HANDLE)0x0;
                DAT_140c7ab78 =
                        (HANDLE)((ulonglong)DAT_140c7ab78 ^
                                 (ulonglong)bVar4 * ((ulonglong)DAT_140c7ab78 ^ (ulonglong)hObject));
                if (!bVar4) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab78);
        }
        return puVar1 != (undefined8 *)0x0;
    }
    DAT_140c7ab68 = DAT_140c7ab68 - 1;
    return puVar1 != (undefined8 *)0x0;
}



void FUN_140349b20(longlong *param_1)

{
    longlong lVar1;
    code **ppcVar2;
    DWORD DVar3;
    HANDLE pvVar4;
    ulonglong uVar5;
    bool bVar6;

    DVar3 = GetCurrentThreadId();
    uVar5 = 0;
    if (DAT_140c7ab60 == DVar3) {
        DAT_140c7ab68 = DAT_140c7ab68 + 1;
        DVar3 = DAT_140c7ab60;
    }
    else {
        do {
            LOCK();
            bVar6 = DAT_140c7ab68 == 0;
            DAT_140c7ab68 = DAT_140c7ab68 ^ (ulonglong)bVar6 * (DAT_140c7ab68 ^ 1);
            if (bVar6) goto LAB_140349b94;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(&DAT_140c7ab60,DVar3);
        DVar3 = DAT_140c7ab60;
    }
    LAB_140349b94:
    DAT_140c7ab60 = DVar3;
    lVar1 = *param_1;
    do {
        if (lVar1 == 0) {
            if (1 < DAT_140c7ab68) {
                DAT_140c7ab68 = DAT_140c7ab68 - 1;
                return;
            }
            DAT_140c7ab60 = 0;
            DAT_140c7ab68 = 0;
            if (DAT_140c7ab70 != 0) {
                if (DAT_140c7ab78 == (HANDLE)0x0) {
                    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    bVar6 = DAT_140c7ab78 == (HANDLE)0x0;
                    DAT_140c7ab78 =
                            (HANDLE)((ulonglong)DAT_140c7ab78 ^
                                     (ulonglong)bVar6 * ((ulonglong)DAT_140c7ab78 ^ (ulonglong)pvVar4));
                    if (!bVar6) {
                        CloseHandle(pvVar4);
                    }
                }
                // WARNING: Could not recover jumptable at 0x000140349d2d. Too many branches
                // WARNING: Treating indirect jump as call
                SetEvent(DAT_140c7ab78);
                return;
            }
            DAT_140c7ab60 = 0;
            DAT_140c7ab68 = 0;
            return;
        }
        ppcVar2 = (code **)*param_1;
        if ((code **)ppcVar2[2] != (code **)0x0) {
            *(code **)ppcVar2[2] = ppcVar2[3];
        }
        if (ppcVar2[3] != (code *)0x0) {
            *(code **)(ppcVar2[3] + 0x10) = ppcVar2[2];
        }
        ppcVar2[2] = (code *)0x0;
        ppcVar2[3] = (code *)0x0;
        if (DAT_140c7ab68 < 2) {
            DAT_140c7ab60 = 0;
            DAT_140c7ab68 = 0;
            if (DAT_140c7ab70 != 0) {
                if (DAT_140c7ab78 == (HANDLE)0x0) {
                    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    bVar6 = DAT_140c7ab78 == (HANDLE)0x0;
                    DAT_140c7ab78 =
                            (HANDLE)((ulonglong)DAT_140c7ab78 ^
                                     (ulonglong)bVar6 * ((ulonglong)DAT_140c7ab78 ^ (ulonglong)pvVar4));
                    if (!bVar6) {
                        CloseHandle(pvVar4);
                    }
                }
                SetEvent(DAT_140c7ab78);
            }
        }
        else {
            DAT_140c7ab68 = DAT_140c7ab68 - 1;
        }
        (**ppcVar2)();
        DVar3 = GetCurrentThreadId();
        uVar5 = 0;
        if (DAT_140c7ab60 == DVar3) {
            DAT_140c7ab68 = DAT_140c7ab68 + 1;
            DVar3 = DAT_140c7ab60;
        }
        else {
            do {
                LOCK();
                bVar6 = DAT_140c7ab68 == 0;
                DAT_140c7ab68 = DAT_140c7ab68 ^ (ulonglong)bVar6 * (DAT_140c7ab68 ^ 1);
                if (bVar6) goto LAB_140349c9f;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(&DAT_140c7ab60);
            DVar3 = DAT_140c7ab60;
        }
        LAB_140349c9f:
        DAT_140c7ab60 = DVar3;
        lVar1 = *param_1;
    } while( true );
}



undefined8 FUN_140349d40(undefined8 param_1,ulonglong param_2)

{
    FUN_140349d80();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140349d80(undefined8 *param_1)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    *param_1 = &PTR_FUN_140b65328;
    FUN_14034a1a0(param_1,0x80004004);
    if (param_1[2] != 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141deeb90;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a654,0x13,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    if (param_1[3] != 0) {
        FUN_1401a4a00(param_1 + 3);
        return;
    }
    return;
}



bool FUN_140349e90(longlong param_1,int *param_2)

{
    DWORD DVar1;
    uint uVar2;
    int iVar3;
    HANDLE pvVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    bool bVar7;
    bool bVar8;

    DVar1 = GetCurrentThreadId();
    uVar6 = 0;
    bVar8 = true;
    uVar5 = uVar6;
    if (DAT_140c7ab80 == DVar1) {
        DAT_140c7ab88 = DAT_140c7ab88 + 1;
        DVar1 = DAT_140c7ab80;
    }
    else {
        do {
            LOCK();
            bVar7 = DAT_140c7ab88 == 0;
            DAT_140c7ab88 = DAT_140c7ab88 ^ (ulonglong)bVar7 * (DAT_140c7ab88 ^ 1);
            if (bVar7) goto LAB_140349f05;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(&DAT_140c7ab80,DVar1);
        DVar1 = DAT_140c7ab80;
    }
    LAB_140349f05:
    DAT_140c7ab80 = DVar1;
    if (*(int *)(param_1 + 8) == -0x7ffffff6) {
        if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
            FUN_1401a1070(param_1 + 0x10,0,0,0,0);
        }
        else {
            (**(code **)**(undefined8 **)(param_1 + 0x10))();
        }
        if (DAT_140c7ab88 < 2) {
            DAT_140c7ab80 = 0;
            DAT_140c7ab88 = 0;
            if (DAT_140c7ab90 != 0) {
                if (DAT_140c7ab98 == (HANDLE)0x0) {
                    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    bVar8 = DAT_140c7ab98 == (HANDLE)0x0;
                    DAT_140c7ab98 =
                            (HANDLE)((ulonglong)DAT_140c7ab98 ^
                                     (ulonglong)bVar8 * ((ulonglong)DAT_140c7ab98 ^ (ulonglong)pvVar4));
                    if (!bVar8) {
                        CloseHandle(pvVar4);
                    }
                }
                SetEvent(DAT_140c7ab98);
            }
        }
        else {
            DAT_140c7ab88 = DAT_140c7ab88 - 1;
        }
        uVar5 = uVar6;
        if (*param_2 != 0) {
            uVar2 = FUN_14001c520(param_2);
            uVar5 = (ulonglong)uVar2;
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),uVar5);
        DVar1 = GetCurrentThreadId();
        if (DAT_140c7ab80 == DVar1) {
            DAT_140c7ab88 = DAT_140c7ab88 + 1;
            DVar1 = DAT_140c7ab80;
        }
        else {
            do {
                LOCK();
                bVar8 = DAT_140c7ab88 == 0;
                DAT_140c7ab88 = DAT_140c7ab88 ^ (ulonglong)bVar8 * (DAT_140c7ab88 ^ 1);
                if (bVar8) goto LAB_14034a093;
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(&DAT_140c7ab80,DVar1);
            DVar1 = DAT_140c7ab80;
        }
        LAB_14034a093:
        DAT_140c7ab80 = DVar1;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        if (iVar3 == 0) {
            *(undefined8 *)(param_1 + 0x10) = 0;
        }
        bVar8 = *(int *)(param_1 + 8) != -0x7ffffff6;
        if (DAT_140c7ab88 < 2) {
            DAT_140c7ab80 = 0;
            DAT_140c7ab88 = 0;
            if (DAT_140c7ab90 != 0) {
                if (DAT_140c7ab98 == (HANDLE)0x0) {
                    pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    bVar7 = DAT_140c7ab98 == (HANDLE)0x0;
                    DAT_140c7ab98 =
                            (HANDLE)((ulonglong)DAT_140c7ab98 ^
                                     (ulonglong)bVar7 * ((ulonglong)DAT_140c7ab98 ^ (ulonglong)pvVar4));
                    if (!bVar7) {
                        CloseHandle(pvVar4);
                    }
                }
                SetEvent(DAT_140c7ab98);
            }
        }
        else {
            DAT_140c7ab88 = DAT_140c7ab88 - 1;
        }
    }
    else if (DAT_140c7ab88 < 2) {
        DAT_140c7ab80 = 0;
        DAT_140c7ab88 = 0;
        if (DAT_140c7ab90 != 0) {
            if (DAT_140c7ab98 == (HANDLE)0x0) {
                pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar7 = DAT_140c7ab98 == (HANDLE)0x0;
                DAT_140c7ab98 =
                        (HANDLE)((ulonglong)DAT_140c7ab98 ^
                                 (ulonglong)bVar7 * ((ulonglong)DAT_140c7ab98 ^ (ulonglong)pvVar4));
                if (!bVar7) {
                    CloseHandle(pvVar4);
                }
            }
            SetEvent(DAT_140c7ab98);
        }
    }
    else {
        DAT_140c7ab88 = DAT_140c7ab88 - 1;
    }
    return bVar8;
}



undefined8 FUN_14034a140(longlong param_1,longlong *param_2)

{
    if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
        FUN_140349890(param_2);
        if (*(int *)(param_1 + 8) != -0x7ffffff6) {
            FUN_140349b20(param_1 + 0x18);
        }
        return 0;
    }
    return 0x80070057;
}



void FUN_14034a1a0(longlong param_1,undefined4 param_2)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c7ab80 == DVar1) {
        DAT_140c7ab88 = DAT_140c7ab88 + 1;
        DVar1 = DAT_140c7ab80;
    }
    else {
        do {
            LOCK();
            bVar3 = DAT_140c7ab88 == 0;
            DAT_140c7ab88 = DAT_140c7ab88 ^ (ulonglong)bVar3 * (DAT_140c7ab88 ^ 1);
            if (bVar3) goto LAB_14034a213;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7ab80,DVar1);
        DVar1 = DAT_140c7ab80;
    }
    LAB_14034a213:
    DAT_140c7ab80 = DVar1;
    *(undefined4 *)(param_1 + 8) = param_2;
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    }
    if (DAT_140c7ab88 < 2) {
        DAT_140c7ab80 = 0;
        DAT_140c7ab88 = 0;
        if (DAT_140c7ab90 != 0) {
            if (DAT_140c7ab98 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7ab98 == (HANDLE)0x0;
                DAT_140c7ab98 =
                        (HANDLE)((ulonglong)DAT_140c7ab98 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7ab98 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab98);
        }
    }
    else {
        DAT_140c7ab88 = DAT_140c7ab88 - 1;
    }
    FUN_140349b20(param_1 + 0x18,param_2);
    return;
}



void FUN_14034a2b0(longlong param_1)

{
    DWORD DVar1;
    HANDLE hObject;
    ulonglong uVar2;
    bool bVar3;

    DVar1 = GetCurrentThreadId();
    uVar2 = 0;
    if (DAT_140c7ab80 == DVar1) {
        DAT_140c7ab88 = DAT_140c7ab88 + 1;
        DVar1 = DAT_140c7ab80;
    }
    else {
        do {
            LOCK();
            bVar3 = DAT_140c7ab88 == 0;
            DAT_140c7ab88 = DAT_140c7ab88 ^ (ulonglong)bVar3 * (DAT_140c7ab88 ^ 1);
            if (bVar3) goto LAB_14034a316;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x400);
        FUN_14019fb60(&DAT_140c7ab80,DVar1);
        DVar1 = DAT_140c7ab80;
    }
    LAB_14034a316:
    DAT_140c7ab80 = DVar1;
    *(undefined4 *)(param_1 + 8) = 0x8000000a;
    if (DAT_140c7ab88 < 2) {
        DAT_140c7ab80 = 0;
        DAT_140c7ab88 = 0;
        if (DAT_140c7ab90 != 0) {
            if (DAT_140c7ab98 == (HANDLE)0x0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                bVar3 = DAT_140c7ab98 == (HANDLE)0x0;
                DAT_140c7ab98 =
                        (HANDLE)((ulonglong)DAT_140c7ab98 ^
                                 (ulonglong)bVar3 * ((ulonglong)DAT_140c7ab98 ^ (ulonglong)hObject));
                if (!bVar3) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(DAT_140c7ab98);
        }
        return;
    }
    DAT_140c7ab88 = DAT_140c7ab88 - 1;
    return;
}



undefined8 FUN_14034a460(longlong param_1)

{
    int iVar1;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    iVar1 = FUN_140881e90(param_1 + 0x10);
    if (iVar1 == 1) {
        return 0;
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141deec48;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8a668,0x13,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_14034a540(void)

{
    FUN_140881b10();
    return 0;
}



void FUN_14034a630(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



undefined8 * FUN_14034a660(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b65350;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    param_1[2] = &PTR_FUN_140b656d0;
    param_1[3] = &PTR_LAB_140b656e8;
    *(undefined2 *)((longlong)param_1 + 0x24) = 0;
    *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
    *(undefined2 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x87) = 0;
    *(undefined2 *)((longlong)param_1 + 0x43c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x644) = 0;
    *(undefined2 *)(param_1 + 0xc9) = 0;
    *(undefined4 *)(param_1 + 0x10a) = 0;
    *(undefined8 *)((longlong)param_1 + 0x874) = 1;
    *(undefined4 *)((longlong)param_1 + 0x87c) = 0x2000;
    param_1[0x10b] = 0;
    *(undefined4 *)((longlong)param_1 + 0x864) = 0x2000;
    *(undefined4 *)(param_1 + 0x10c) = 0x100000;
    *(undefined4 *)(param_1 + 0x10d) = 1;
    *(undefined4 *)((longlong)param_1 + 0x86c) = 0x4000;
    *(undefined4 *)(param_1 + 0x110) = 0x43fa0000;
    *(undefined4 *)(param_1 + 0x10e) = 1;
    *(undefined4 *)((longlong)param_1 + 0x884) = 1;
    return param_1;
}



undefined8 FUN_14034a730(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    uVar2 = FUN_14034ac80(param_1 + 0x10,param_1 + 0x858);
    if ((int)uVar2 == 0) {
        return uVar2;
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141deec80;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8a660,0x13,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_14034a810(longlong param_1)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x20) != -1) {
        lVar1 = FUN_140883410();
        if (lVar1 == param_1 + 0x10) {
            FUN_140883510(0);
        }
        FUN_1408832e0(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    return 0;
}



undefined8 FUN_14034a850(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(int *)(param_1 + 0x20) == 0) {
        FUN_1408274b0(param_1 + 0x10);
        thunk_FUN_140833e90(param_1 + 0x40);
        uVar1 = FUN_14018a3e0(*(undefined4 *)(param_1 + 0x20));
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        uVar1 = FUN_14018a3e0(*(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        uVar1 = FUN_14018a3e0(*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = uVar1;
        uVar1 = FUN_14018a3e0(*(undefined4 *)(param_1 + 0x3c));
        *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
    iVar2 = FUN_140827730(param_1 + 0x10,param_1 + 0x40);
    if (iVar2 == 1) {
        return 0;
    }
    local_48 = &PTR_LAB_140b5e648;
    local_40 = 0;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141deece8;
    local_18 = local_38;
    local_20 = local_40;
    iVar2 = FUN_140196f30(&DAT_140c8a664,0x13,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar2 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_14034a990(longlong param_1)

{
    float *pfVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    pfVar1 = (float *)(param_1 + 0x10);
    if (*pfVar1 == -1.0) {
        FUN_14088a680(pfVar1);
    }
    iVar2 = FUN_14088a720(pfVar1);
    if (iVar2 == 1) {
        return 0;
    }
    local_48 = &PTR_LAB_140b5e648;
    local_40 = 0;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141deecc8;
    local_18 = local_38;
    local_20 = local_40;
    iVar2 = FUN_140196f30(&DAT_140c8a658,0x13,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar2 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



undefined8 FUN_14034aa80(void)

{
    FUN_14088b320();
    return 0;
}



undefined8 FUN_14034abb0(longlong param_1)

{
    char cVar1;

    cVar1 = FUN_140881950();
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x10) != -1)) {
        FUN_140881dd0();
    }
    return 0;
}



undefined8 FUN_14034abe0(undefined8 param_1,ulonglong param_2)

{
    FUN_14034ac20();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14034ac20(undefined8 *param_1)

{
    undefined8 *puVar1;

    *param_1 = &PTR_FUN_140b656d0;
    param_1[1] = &PTR_LAB_140b656e8;
    if (*(int *)(param_1 + 2) != -1) {
        puVar1 = (undefined8 *)FUN_140883410();
        if (puVar1 == param_1) {
            FUN_140883510(0);
        }
        FUN_1408832e0(*(undefined4 *)(param_1 + 2));
    }
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1[1] = &PTR_FUN_140b65720;
    *param_1 = &PTR_FUN_140b65748;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14034ac80(longlong param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined auStack104 [32];
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    local_48 = *param_2;
    local_40 = param_2[1];
    local_38 = param_2[2];
    local_28 = param_2[4];
    local_20 = param_2[5];
    local_18 = param_2[6];
    local_30 = CONCAT44((int)((ulonglong)param_2[3] >> 0x20),1);
    lVar2 = FUN_140883410();
    if (lVar2 == 0) {
        FUN_140883510(param_1);
    }
    lVar2 = param_1 + 8;
    if (param_1 == 0) {
        lVar2 = 0;
    }
    uVar1 = FUN_140882ee0(&local_48,lVar2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack104);
    return;
}



undefined8 FUN_14034b0e0(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong in_GS_OFFSET;

    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
        *(undefined8 *)(param_2 + 0x10) = 0;
    }
    *(undefined4 *)(lVar2 + -4) = uVar1;
    return 1;
}



undefined8
FUN_14034b140(undefined8 param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
              ulonglong *param_5)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong in_GS_OFFSET;

    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    if ((param_4 != 0) && (plVar3 = (longlong *)param_2[2], plVar3 != (longlong *)0x0)) {
        uVar6 = (**(code **)(*plVar3 + 0x30))(plVar3);
        if (*param_5 != uVar6) {
            iVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
            if (iVar5 < 0) goto LAB_14034b1e2;
            uVar6 = (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        uVar8 = (ulonglong)*(uint *)((longlong)param_5 + 0xc);
        uVar4 = *param_2;
        if (uVar4 < uVar8 + uVar6) {
            if (uVar4 <= uVar6) goto LAB_14034b1e2;
            uVar8 = uVar4 - uVar6;
        }
        iVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_4,uVar8);
        uVar7 = 1;
        if (-1 < iVar5) goto LAB_14034b1e7;
    }
    LAB_14034b1e2:
    uVar7 = 2;
    LAB_14034b1e7:
    *(undefined4 *)(lVar2 + -4) = uVar1;
    return uVar7;
}



undefined8
FUN_14034b210(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
              longlong *param_5)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong in_GS_OFFSET;

    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    uVar7 = 1;
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    plVar3 = (longlong *)param_2[2];
    uVar6 = (**(code **)(*plVar3 + 0x30))();
    if ((*param_5 == 0) == uVar6) {
        LAB_14034b27b:
        uVar8 = (ulonglong)*(uint *)((longlong)param_5 + 0xc);
        uVar4 = *param_2;
        if (uVar4 < uVar8 + uVar6) {
            if (uVar4 <= uVar6) goto LAB_14034b2bf;
            uVar8 = uVar4 - uVar6;
        }
        iVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_4,uVar8);
        if (-1 < iVar5) {
            if (*param_2 <= uVar8 + uVar6) {
                uVar7 = 0x11;
            }
            goto LAB_14034b2bf;
        }
    }
    else {
        iVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
        if (-1 < iVar5) goto LAB_14034b27b;
    }
    uVar7 = 2;
    LAB_14034b2bf:
    *(undefined4 *)(lVar2 + -4) = uVar1;
    return uVar7;
}



undefined8
FUN_14034b380(longlong param_1,short *param_2,int *param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    short sVar2;
    uint uVar3;
    bool bVar4;
    char *pcVar5;
    undefined8 uVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    uint uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    uint uVar13;
    char cVar14;

    uVar12 = 0;
    sVar2 = *param_2;
    while (sVar2 != 0) {
        uVar12 = uVar12 + 1;
        sVar2 = param_2[uVar12];
    }
    cVar14 = '\0';
    bVar4 = false;
    if (param_3 != (int *)0x0) {
        if ((*param_3 == 0) && (param_3[1] == 0)) {
            bVar4 = true;
        }
        else {
            bVar4 = false;
        }
        cVar14 = *(char *)(param_3 + 6);
    }
    uVar10 = *(uint *)(param_1 + 0x21c);
    if (bVar4) {
        iVar7 = *(int *)(param_1 + 0x428);
    }
    else {
        iVar7 = *(int *)(param_1 + 0x634);
    }
    uVar13 = uVar10 + (int)uVar12 + iVar7;
    if (cVar14 != '\0') {
        uVar13 = uVar13 + *(int *)(param_1 + 0x840);
    }
    if (uVar13 < *param_5) {
        FUN_1407db590(param_4,param_1 + 0x14,(ulonglong)uVar10 * 2);
        lVar1 = param_4 + (ulonglong)uVar10 * 2;
        if (bVar4) {
            uVar13 = *(uint *)(param_1 + 0x428);
            FUN_1407db590(lVar1,param_1 + 0x220,(ulonglong)uVar13 * 2);
        }
        else {
            uVar13 = *(uint *)(param_1 + 0x634);
            FUN_1407db590(lVar1,param_1 + 0x42c,(ulonglong)uVar13 * 2);
        }
        uVar11 = (ulonglong)(uVar13 + uVar10);
        if (cVar14 != '\0') {
            uVar3 = *(uint *)(param_1 + 0x840);
            FUN_1407db590(param_4 + uVar11 * 2,param_1 + 0x638,(ulonglong)uVar3 * 2);
            uVar11 = (ulonglong)(uVar13 + uVar10 + uVar3);
        }
        FUN_1407db590(param_4 + uVar11 * 2,param_2,(uVar12 & 0xffffffff) * 2);
        uVar10 = (int)uVar11 + (int)uVar12;
        *param_5 = uVar10;
        uVar6 = 0;
        *(undefined2 *)(param_4 + (ulonglong)uVar10 * 2) = 0;
    }
    else {
        pcVar9 = "noflags";
        if (param_3 != (int *)0x0) {
            pcVar9 = "flags";
        }
        pcVar8 = "nonlocalized";
        if (cVar14 != '\0') {
            pcVar8 = "localized";
        }
        pcVar5 = "nobank";
        if (bVar4) {
            pcVar5 = "bank";
        }
        FUN_1400035b0(0x13,1,0,uVar12 & 0xffffffff,uVar10,*(undefined4 *)(param_1 + 0x634),
                      *(undefined4 *)(param_1 + 0x840),pcVar5,pcVar8,uVar13,*param_5,pcVar9);
        uVar6 = 0x80004005;
    }
    return uVar6;
}



undefined8
FUN_14034b570(undefined8 param_1,short *param_2,undefined2 *param_3,undefined8 param_4,uint *param_5
)

{
    short sVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 == (short *)0x0) {
        *param_3 = 0;
        *param_5 = 0;
        return 0;
    }
    for (; (*param_2 == 0x5c || (*param_2 == 0x2f)); param_2 = param_2 + 1) {
    }
    uVar4 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
        uVar4 = uVar4 + 1;
        sVar1 = param_2[uVar4];
    }
    uVar3 = (uint)uVar4;
    local_res8 = param_1;
    if (0x102 < uVar3) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e5fce0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_140196f30(&DAT_140c8a670,0x13,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    FUN_1407db590(param_3,param_2,(uVar4 & 0xffffffff) * 2);
    do {
        if (uVar3 == 0) {
            LAB_14034b6cd:
            *param_3 = 0;
            *param_5 = 0;
            return 0;
        }
        iVar2 = (int)uVar4;
        uVar3 = iVar2 - 1;
        if ((param_3[uVar3] != 0x5c) && (param_3[uVar3] != 0x2f)) {
            if (iVar2 != 0) {
                param_3[uVar4 & 0xffffffff] = 0x5c;
                param_3[iVar2 + 1U] = 0;
                *param_5 = iVar2 + 1U;
                return 0;
            }
            goto LAB_14034b6cd;
        }
        uVar4 = (ulonglong)uVar3;
        param_3[uVar3] = 0;
    } while( true );
}



undefined8 * FUN_14034b720(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b65720;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_14034b750(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b65748;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14034b780(undefined8 *param_1)

{
    undefined8 uVar1;

    if (*(int *)(param_1 + 1) != 0) {
        return 0;
    }
    uVar1 = (**(code **)*param_1)();
    *(uint *)(param_1 + 1) = (uint)(-1 < (int)uVar1);
    return uVar1;
}



int FUN_14034b7b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
    ulonglong uVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    iVar2 = 0;
    if (0x7ffffffe < param_2 - 1U) {
        iVar2 = -0x7ff8ffa9;
    }
    if (-1 < iVar2) {
        uVar1 = param_2 - 1;
        iVar2 = FUN_1407dda2c(param_1,uVar1,param_3,param_4,param_5);
        if ((iVar2 < 0) || (uVar1 < (ulonglong)(longlong)iVar2)) {
            *(undefined2 *)(param_1 + uVar1 * 2) = 0;
            iVar3 = -0x7ff8ff86;
        }
        else if ((longlong)iVar2 == uVar1) {
            *(undefined2 *)(param_1 + uVar1 * 2) = 0;
            return 0;
        }
        return iVar3;
    }
    return iVar2;
}



undefined8 FUN_14034b850(ulonglong *param_1,longlong param_2,int *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if (*param_3 != 0x4c544558) {
        return 0xa0040000;
    }
    if (param_3[1] != 4) {
        return 0xa0040001;
    }
    uVar1 = *(longlong *)(param_3 + 6) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong *)(param_3 + 6) + (ulonglong)(uint)param_3[4] * 2 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar3 = 0;
        uVar2 = uVar3;
        if (param_3[4] != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong *)(param_3 + 6) = uVar2;
        uVar1 = *(longlong *)(param_3 + 10) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong *)(param_3 + 10) + (ulonglong)(uint)param_3[8] * 2 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = uVar3;
            if (param_3[8] != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(param_3 + 10) = uVar2;
            uVar1 = *(longlong *)(param_3 + 0xe) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar2 = *(longlong *)(param_3 + 0xe) + (ulonglong)(uint)param_3[0xc] * 2 + param_2,
                        uVar2 < param_1[1] || uVar2 == param_1[1])) {
                uVar2 = uVar3;
                if (param_3[0xc] != 0) {
                    uVar2 = uVar1;
                }
                *(ulonglong *)(param_3 + 0xe) = uVar2;
                uVar1 = *(longlong *)(param_3 + 0x12) + param_2;
                if ((*param_1 <= uVar1) &&
                    (uVar2 = *(longlong *)(param_3 + 0x12) + (ulonglong)(uint)param_3[0x10] * 8 + param_2,
                            uVar2 < param_1[1] || uVar2 == param_1[1])) {
                    uVar2 = uVar3;
                    if (param_3[0x10] != 0) {
                        uVar2 = uVar1;
                    }
                    *(ulonglong *)(param_3 + 0x12) = uVar2;
                    uVar1 = *(longlong *)(param_3 + 0x16) + param_2;
                    if ((*param_1 <= uVar1) &&
                        (uVar2 = *(longlong *)(param_3 + 0x16) + (ulonglong)(uint)param_3[0x14] * 2 + param_2,
                                uVar2 < param_1[1] || uVar2 == param_1[1])) {
                        if (param_3[0x14] != 0) {
                            uVar3 = uVar1;
                        }
                        *(ulonglong *)(param_3 + 0x16) = uVar3;
                        return 0;
                    }
                }
            }
        }
    }
    return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14034bc70(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    if ((DAT_140c7aab8 == 0) && (DAT_140c7aac0 == 0)) {
        if (param_2 == (longlong *)0x0) {
            return 0x80070057;
        }
        local_res8 = param_1;
        lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
        local_28 = lVar1;
        local_20 = (**(code **)(*param_2 + 0x10))(param_2);
        local_20 = local_20 + lVar1;
        local_18 = 0;
        uVar2 = FUN_14034b850(&local_28,lVar1 + 0x60,lVar1);
        if (-1 < (int)uVar2) {
            if (_DAT_140c7abb0 != 0) {
                FUN_14001a270(&DAT_140c7aba0,*(undefined8 *)(DAT_140c7aba8 + 8));
                *(longlong *)(DAT_140c7aba8 + 0x10) = DAT_140c7aba8;
                *(undefined8 *)(DAT_140c7aba8 + 8) = 0;
                *(longlong *)(DAT_140c7aba8 + 0x18) = DAT_140c7aba8;
                _DAT_140c7abb0 = 0;
            }
            lVar3 = 0;
            if (*(longlong *)(lVar1 + 0x18) != 0) {
                FUN_14018dd50(&local_res8);
                lVar3 = local_res8;
            }
            DAT_140c7aac8 = FUN_1407dc810(4,lVar3);
            if (DAT_140c7aac8 == 0) {
                local_res8 = 0x141deee00;
                FUN_1401a3130(4,0,&local_res8,lVar3);
            }
            FUN_1400035c0(&DAT_140c7aab8,param_2);
            DAT_140c7aac0 = lVar1;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            uVar2 = 0;
        }
        return uVar2;
    }
    return 0x8000ffff;
}



undefined2 * FUN_14034bdd0(undefined8 param_1,int param_2)

{
    undefined2 *puVar1;
    bool bVar2;
    int *piVar3;
    short sVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    short sVar14;
    longlong *plVar15;
    int iVar16;
    short *psVar17;
    longlong local_res8;
    int local_58 [2];
    undefined8 *local_50;
    longlong local_48 [2];

    iVar16 = DAT_140c43da0;
    if (*DAT_140c63750 < DAT_140c43da0) {
        iVar16 = *DAT_140c63750;
    }
    if ((&DAT_140c43db0)[iVar16] == '\0') {
        uVar12 = 0;
        if ((ulonglong)*(uint *)(DAT_140c7aac0 + 0x40) != 0) {
            uVar13 = (ulonglong)*(uint *)(DAT_140c7aac0 + 0x40);
            do {
                uVar11 = (uVar13 - uVar12 >> 1) + uVar12;
                iVar16 = param_2 - *(int *)(*(longlong *)(DAT_140c7aac0 + 0x48) + uVar11 * 8);
                if (-1 < iVar16) {
                    if (iVar16 < 1) {
                        return (undefined2 *)
                                (*(longlong *)(DAT_140c7aac0 + 0x58) +
                                 (ulonglong)*(uint *)(*(longlong *)(DAT_140c7aac0 + 0x48) + 4 + uVar11 * 8) * 2);
                    }
                    uVar12 = uVar11 + 1;
                    uVar11 = uVar13;
                }
                uVar13 = uVar11;
            } while (uVar12 < uVar11);
        }
        return &DAT_140b7b704;
    }
    lVar5 = *(longlong *)(DAT_140c7aba8 + 8);
    local_res8 = DAT_140c7aba8;
    if (*(longlong *)(DAT_140c7aba8 + 8) != 0) {
        do {
            if (*(int *)(lVar5 + 0x20) < param_2) {
                lVar6 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar6 = *(longlong *)(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            lVar5 = lVar6;
        } while (lVar6 != 0);
        if ((local_res8 != DAT_140c7aba8) && (*(int *)(local_res8 + 0x20) <= param_2))
            goto LAB_14034b9c9;
    }
    local_res8 = DAT_140c7aba8;
    LAB_14034b9c9:
    if (local_res8 != DAT_140c7aba8) {
        return *(undefined2 **)(local_res8 + 0x28);
    }
    plVar15 = (longlong *)0x0;
    if ((longlong *)(ulonglong)*(uint *)(DAT_140c7aac0 + 0x40) != (longlong *)0x0) {
        plVar9 = plVar15;
        plVar8 = (longlong *)(ulonglong)*(uint *)(DAT_140c7aac0 + 0x40);
        do {
            plVar7 = (longlong *)
                    (((ulonglong)((longlong)plVar8 - (longlong)plVar9) >> 1) + (longlong)plVar9);
            iVar16 = param_2 - *(int *)(*(longlong *)(DAT_140c7aac0 + 0x48) + (longlong)plVar7 * 8);
            if (-1 < iVar16) {
                if (iVar16 < 1) {
                    psVar17 = (short *)(*(longlong *)(DAT_140c7aac0 + 0x58) +
                                        (ulonglong)
                                        *(uint *)(*(longlong *)(DAT_140c7aac0 + 0x48) + 4 +
                                                  (longlong)plVar7 * 8) * 2);
                    plVar8 = (longlong *)FUN_14018b280();
                    plVar9 = plVar15;
                    if (plVar8 != (longlong *)0x0) {
                        *plVar8 = (longlong)&PTR_LAB_140b55060;
                        plVar8[1] = 0;
                        plVar9 = plVar8;
                    }
                    piVar3 = DAT_140c63750;
                    plVar8 = plVar9 + 2;
                    *(undefined2 *)plVar8 = 0;
                    iVar16 = DAT_140c43da0;
                    if (*piVar3 < DAT_140c43da0) {
                        iVar16 = *piVar3;
                    }
                    plVar7 = plVar8;
                    if ((&DAT_140c43db0)[iVar16] == '\0') {
                        if (psVar17 != (short *)0x0) {
                            lVar5 = plVar9[1];
                            sVar14 = *psVar17;
                            while (sVar14 != 0) {
                                plVar15 = (longlong *)((longlong)plVar15 + 1);
                                sVar14 = psVar17[(longlong)plVar15];
                            }
                            lVar6 = (longlong)plVar15 + lVar5;
                            plVar7 = (longlong *)FUN_14018d140(plVar8,lVar6);
                            FUN_1407db590((undefined2 *)((longlong)plVar7 + lVar5 * 2),psVar17,
                                          (longlong)plVar15 * 2);
                            *(undefined2 *)((longlong)plVar7 + lVar6 * 2) = 0;
                            if (plVar8 != plVar7) {
                                (**(code **)(*plVar9 + 8))(plVar9);
                            }
                        }
                    }
                    else {
                        sVar14 = *psVar17;
                        if (sVar14 != 0) {
                            do {
                                psVar17 = psVar17 + 1;
                                if ((sVar14 == 0x20) || (bVar2 = false, (ushort)(sVar14 - 9U) < 5)) {
                                    bVar2 = true;
                                }
                                lVar5 = 0;
                                if (plVar8 != (longlong *)0x0) {
                                    lVar5 = plVar8[-1];
                                }
                                plVar7 = (longlong *)FUN_14018d140(plVar8,lVar5 + 1);
                                sVar4 = 0x2d;
                                if (bVar2) {
                                    sVar4 = sVar14;
                                }
                                *(short *)((longlong)plVar7 + lVar5 * 2) = sVar4;
                                *(undefined2 *)((longlong)plVar7 + lVar5 * 2 + 2) = 0;
                                if ((plVar8 != plVar7) && (plVar8 != (longlong *)0x0)) {
                                    (**(code **)(plVar8[-2] + 8))(plVar8 + -2);
                                }
                                sVar14 = *psVar17;
                                plVar8 = plVar7;
                            } while (sVar14 != 0);
                        }
                    }
                    local_50 = (undefined8 *)0x0;
                    local_58[0] = param_2;
                    if (plVar7 == (longlong *)0x0) {
                        local_50 = (undefined8 *)0x0;
                    }
                    else {
                        lVar5 = plVar7[-1];
                        puVar10 = (undefined8 *)FUN_14018b280(lVar5 * 2 + 0x12,0);
                        if (puVar10 != (undefined8 *)0x0) {
                            *puVar10 = &PTR_LAB_140b55060;
                            puVar10[1] = lVar5;
                            local_50 = puVar10;
                        }
                        local_50 = local_50 + 2;
                        FUN_1407db590(local_50,plVar7,lVar5 * 2);
                        *(undefined2 *)(lVar5 * 2 + (longlong)local_50) = 0;
                    }
                    FUN_14034c730(&DAT_140c7aba0,local_48,local_58);
                    puVar1 = *(undefined2 **)(local_48[0] + 0x28);
                    if (local_50 != (undefined8 *)0x0) {
                        (**(code **)(local_50[-2] + 8))(local_50 + -2);
                    }
                    if (plVar7 != (longlong *)0x0) {
                        (**(code **)(plVar7[-2] + 8))(plVar7 + -2);
                    }
                    return puVar1;
                }
                plVar9 = (longlong *)((longlong)plVar7 + 1);
                plVar7 = plVar8;
            }
            plVar8 = plVar7;
        } while (plVar9 < plVar7);
    }
    return &DAT_140b7b704;
}



longlong * FUN_14034be60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    if (DAT_140c7aac8 == 0) {
        FUN_14018d5e0(param_2,param_3);
        return param_2;
    }
    lVar2 = 0;
    iVar1 = FUN_1407dfff8(param_3,DAT_140c7aac8,param_4);
    lVar3 = (longlong)iVar1;
    if (iVar1 != -1) {
        lVar2 = FUN_14018d140(0,lVar3);
        *(undefined2 *)(lVar2 + lVar3 * 2) = 0;
        FUN_1407e0030(lVar2,(longlong)(iVar1 + 1),lVar3,param_3,DAT_140c7aac8,param_4);
    }
    *param_2 = lVar2;
    return param_2;
}



void FUN_14034bf10(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    undefined auStack584 [32];
    undefined local_228 [528];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack584;
    iVar1 = FUN_14001b370(local_228,0x104,L"%s.bin",param_2);
    if (-1 < iVar1) {
        FUN_1401b6d00();
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack584);
    return;
}



void FUN_14034bf80(void)

{
    if (DAT_140c7aac8 == 0) {
        FUN_140197a50();
        return;
    }
    FUN_14034b7b0();
    return;
}



uint FUN_14034bfc0(SYSTEMTIME *param_1,LPWSTR *param_2)

{
    LPWSTR pWVar1;
    int iVar2;
    DWORD DVar3;
    int iVar4;
    LPWSTR pWVar5;
    longlong lVar6;
    longlong lVar7;

    iVar2 = GetDateFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,(LPWSTR)0x0,0);
    lVar7 = (longlong)iVar2;
    if (iVar2 != 0) {
        iVar4 = GetTimeFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,(LPWSTR)0x0,0);
        if (iVar4 != 0) {
            if (0x7fffffff < (longlong)iVar4 + 1 + lVar7) {
                return 0x8007000e;
            }
            pWVar1 = *param_2;
            lVar6 = (longlong)(iVar4 + 1 + iVar2);
            pWVar5 = (LPWSTR)FUN_14018d140(pWVar1,lVar6);
            pWVar5[lVar6] = L'\0';
            *param_2 = pWVar5;
            if ((pWVar1 != pWVar5) && (pWVar1 != (LPWSTR)0x0)) {
                (**(code **)(*(longlong *)(pWVar1 + -8) + 8))(pWVar1 + -8);
            }
            iVar4 = GetDateFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,*param_2,
                                   (int)*(undefined8 *)(*param_2 + -4));
            if (iVar4 != 0) {
                (*param_2)[lVar7 + -1] = L' ';
                iVar2 = GetTimeFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,
                                       *param_2 + lVar7,(int)*(undefined8 *)(*param_2 + -4) - iVar2);
                if (iVar2 != 0) {
                    return 0;
                }
            }
            DVar3 = GetLastError();
            if ((int)DVar3 < 1) {
                return DVar3;
            }
            return DVar3 & 0xffff | 0x80070000;
        }
    }
    DVar3 = GetLastError();
    if ((int)DVar3 < 1) {
        return DVar3;
    }
    return DVar3 & 0xffff | 0x80070000;
}



uint FUN_14034c150(SYSTEMTIME *param_1,LPWSTR *param_2)

{
    LPWSTR pWVar1;
    int iVar2;
    DWORD DVar3;
    LPWSTR pWVar4;

    iVar2 = GetTimeFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
        pWVar1 = *param_2;
        pWVar4 = (LPWSTR)FUN_14018d140(pWVar1,(longlong)iVar2);
        pWVar4[iVar2] = L'\0';
        *param_2 = pWVar4;
        if ((pWVar1 != pWVar4) && (pWVar1 != (LPWSTR)0x0)) {
            (**(code **)(*(longlong *)(pWVar1 + -8) + 8))(pWVar1 + -8);
        }
        iVar2 = GetTimeFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,(LPCWSTR)0x0,*param_2,
                               (int)*(undefined8 *)(*param_2 + -4));
        if (iVar2 != 0) {
            return 0;
        }
    }
    DVar3 = GetLastError();
    if ((int)DVar3 < 1) {
        return DVar3;
    }
    return DVar3 & 0xffff | 0x80070000;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14034c240(LPCWSTR param_1,LPWSTR param_2,ulonglong param_3,int *param_4)

{
    WCHAR WVar1;
    uint uVar2;
    int iVar3;
    NUMBERFMTW *pNVar4;
    NUMBERFMTW *pNVar5;
    NUMBERFMTW *pNVar6;
    NUMBERFMTW *pNVar7;
    NUMBERFMTW *pNVar8;
    WCHAR *pWVar9;
    NUMBERFMTW *pNVar10;
    undefined auStackY312 [32];
    ulonglong local_108;
    ulonglong local_100;
    NUMBERFMTW *local_f8;
    NUMBERFMTW *local_f0;
    ulonglong local_e8;
    LPWSTR local_e0;
    WCHAR local_d8 [64];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStackY312;
    pNVar10 = (NUMBERFMTW *)0x0;
    pNVar8 = (NUMBERFMTW *)0x0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = (NUMBERFMTW *)0x0;
    local_f0 = (NUMBERFMTW *)0x0;
    local_e8 = 0;
    pNVar7 = (NUMBERFMTW *)0x0;
    pNVar6 = pNVar10;
    pNVar4 = pNVar10;
    local_e0 = param_2;
    if (param_4 == (int *)0x0) {
        LAB_14034c545:
        iVar3 = (int)param_3;
        if (0x7fffffff < param_3) {
            iVar3 = 0x7fffffff;
        }
        if ((param_4 == (int *)0x0) || (pNVar7 = (NUMBERFMTW *)&local_108, *param_4 == 0)) {
            pNVar7 = pNVar10;
        }
        iVar3 = GetNumberFormatW(*(LCID *)(DAT_140c7aac0 + 0xc),0,param_1,pNVar7,local_e0,iVar3);
        pNVar7 = pNVar6;
        pNVar8 = pNVar4;
        if (iVar3 != 0) goto LAB_14034c59e;
    }
    else {
        if (((*(byte *)param_4 & 1) != 0) && (param_4[1] == 0)) {
            local_100 = 0;
            LAB_14034c33d:
            if ((*(byte *)param_4 & 2) == 0) {
                iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0x11,local_d8,0x40);
                if (iVar3 == 0) goto LAB_14034c586;
                uVar2 = FUN_14018e820(local_d8);
            }
            else {
                uVar2 = (uint)*(byte *)(param_4 + 2);
            }
            local_108 = local_108 & 0xffffffff00000000 | (ulonglong)uVar2;
            if ((*(byte *)param_4 & 4) == 0) {
                iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0x12,local_d8,0x40);
                if (iVar3 == 0) goto LAB_14034c586;
                uVar2 = FUN_14018e820(local_d8);
            }
            else {
                uVar2 = (uint)(param_4[3] != 0);
            }
            local_108 = local_108 & 0xffffffff | (ulonglong)uVar2 << 0x20;
            if ((*(byte *)param_4 & 8) == 0) {
                iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0xe,local_d8,0x40);
                pNVar8 = pNVar10;
                WVar1 = local_d8[0];
                if (iVar3 == 0) goto LAB_14034c586;
                while (WVar1 != L'\0') {
                    pNVar8 = (NUMBERFMTW *)((longlong)&pNVar8->NumDigits + 1);
                    WVar1 = local_d8[(longlong)pNVar8];
                }
                pNVar7 = (NUMBERFMTW *)FUN_14018b280((longlong)pNVar8 * 2 + 0x12,0);
                if (pNVar7 != (NUMBERFMTW *)0x0) {
                    *(NUMBERFMTW **)&pNVar7->Grouping = pNVar8;
                    *(undefined ***)pNVar7 = &PTR_LAB_140b55060;
                    pNVar4 = pNVar7;
                }
                pNVar4 = (NUMBERFMTW *)((longlong)&pNVar4->lpDecimalSep + 4);
                FUN_1407db590(pNVar4,local_d8,(longlong)pNVar8 * 2);
                *(undefined2 *)((longlong)&pNVar4->NumDigits + (longlong)pNVar8 * 2) = 0;
                local_f8 = pNVar4;
            }
            else {
                local_f8 = *(NUMBERFMTW **)(param_4 + 4);
            }
            pNVar8 = pNVar4;
            if ((*(byte *)param_4 & 0x10) == 0) {
                iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0xf,local_d8,0x40);
                pNVar7 = pNVar10;
                if (iVar3 == 0) goto LAB_14034c586;
                while (local_d8[0] != L'\0') {
                    pNVar7 = (NUMBERFMTW *)((longlong)&pNVar7->NumDigits + 1);
                    local_d8[0] = local_d8[(longlong)pNVar7];
                }
                pNVar5 = (NUMBERFMTW *)FUN_14018b280((longlong)pNVar7 * 2 + 0x12,0);
                if (pNVar5 != (NUMBERFMTW *)0x0) {
                    *(NUMBERFMTW **)&pNVar5->Grouping = pNVar7;
                    *(undefined ***)pNVar5 = &PTR_LAB_140b55060;
                    pNVar6 = pNVar5;
                }
                pNVar6 = (NUMBERFMTW *)((longlong)&pNVar6->lpDecimalSep + 4);
                FUN_1407db590(pNVar6,local_d8,(longlong)pNVar7 * 2);
                *(undefined2 *)((longlong)&pNVar6->NumDigits + (longlong)pNVar7 * 2) = 0;
                local_f0 = pNVar6;
            }
            else {
                local_f0 = *(NUMBERFMTW **)(param_4 + 6);
            }
            if ((*(byte *)param_4 & 0x20) == 0) {
                iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0x1010,local_d8,0x40);
                pNVar7 = pNVar6;
                if (iVar3 == 0) goto LAB_14034c586;
                uVar2 = FUN_14018e820(local_d8);
            }
            else {
                uVar2 = param_4[8];
            }
            local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)uVar2;
            goto LAB_14034c545;
        }
        iVar3 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0x10,local_d8,0x40);
        if (iVar3 != 0) {
            pWVar9 = local_d8;
            if (local_d8[0] != L'\0') {
                WVar1 = local_d8[0];
                do {
                    if ((ushort)(WVar1 + L'ￏ') < 9) {
                        local_100._0_4_ = (uint)(ushort)WVar1 + ((uint)local_100 * 5 + -0x18) * 2;
                        local_100 = local_100 & 0xffffffff00000000 | (ulonglong)(uint)local_100;
                    }
                    if ((WVar1 == L'0') && (pWVar9[1] != L'\0')) {
                        local_100._0_4_ = (uint)local_100 * 10;
                        local_100 = local_100 & 0xffffffff00000000 | (ulonglong)(uint)local_100;
                    }
                    WVar1 = pWVar9[1];
                    pWVar9 = pWVar9 + 1;
                } while (WVar1 != L'\0');
            }
            goto LAB_14034c33d;
        }
    }
    LAB_14034c586:
    GetLastError();
    LAB_14034c59e:
    if (pNVar7 != (NUMBERFMTW *)0x0) {
        (**(code **)(*(longlong *)((longlong)&pNVar7[-1].lpDecimalSep + 4) + 8))
                ((undefined *)((longlong)&pNVar7[-1].lpDecimalSep + 4));
    }
    if (pNVar8 != (NUMBERFMTW *)0x0) {
        (**(code **)(*(longlong *)((longlong)&pNVar8[-1].lpDecimalSep + 4) + 8))
                ((undefined *)((longlong)&pNVar8[-1].lpDecimalSep + 4));
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStackY312);
    return;
}



void FUN_14034c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   byte *param_5)

{
    int iVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined auStack232 [32];
    longlong local_c8 [2];
    WCHAR local_b8 [64];
    ulonglong local_38;

    uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar4 = (undefined4)param_1;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    if ((param_5 == (byte *)0x0) || ((*param_5 & 2) == 0)) {
        iVar1 = GetLocaleInfoW(*(LCID *)(DAT_140c7aac0 + 0xc),0x11,local_b8,0x40);
        if (iVar1 == 0) {
            GetLastError();
            goto LAB_14034c6da;
        }
        uVar2 = FUN_14018e820(local_b8);
    }
    else {
        uVar2 = (uint)param_5[8];
    }
    puVar3 = (undefined8 *)FUN_14018d540(local_c8,L"%.*lf",uVar2,CONCAT44(uVar5,uVar4));
    FUN_14034c240(*puVar3,param_3,param_4,param_5);
    if (local_c8[0] != 0) {
        (**(code **)(*(longlong *)(local_c8[0] + -0x10) + 8))(local_c8[0] + -0x10);
    }
    LAB_14034c6da:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



undefined8
FUN_14034c700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 local_res18;
    undefined8 local_res20;

    local_res18 = param_3;
    local_res20 = param_4;
    FUN_14034be60(param_1,param_1,param_2,&local_res18);
    return param_1;
}



char ** FUN_14034c730(longlong param_1,char **param_2,int *param_3)

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
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14034c78e;
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
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14034c78e:
    ppcVar1 = (char **)FUN_14034c830(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_14034c830(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x30);
        if (lVar2 + 0x20 != 0) {
            FUN_14001af60(lVar2 + 0x20,param_5);
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
    }
    else {
        lVar2 = FUN_14018b280(0x30);
        if (lVar2 + 0x20 != 0) {
            FUN_14001af60(lVar2 + 0x20,param_5);
        }
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



void FUN_14034c930(uint *param_1,uint *param_2,uint *param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;

    uVar8 = param_2[8];
    uVar1 = param_2[0xb];
    uVar2 = param_2[10];
    fVar10 = (float)param_2[5];
    if ((float)param_3[5] <= (float)param_2[5]) {
        fVar10 = (float)param_3[5];
    }
    uVar3 = param_2[7];
    uVar4 = param_2[6];
    fVar9 = (float)param_2[9];
    if ((float)param_2[9] <= (float)param_3[9]) {
        fVar9 = (float)param_3[9];
    }
    param_1[5] = (uint)fVar10;
    param_1[9] = (uint)fVar9;
    uVar5 = param_2[4];
    fVar10 = (float)param_2[3];
    if ((float)param_3[3] <= (float)param_2[3]) {
        fVar10 = (float)param_3[3];
    }
    fVar9 = (float)param_2[2];
    if ((float)param_3[2] <= (float)param_2[2]) {
        fVar9 = (float)param_3[2];
    }
    *param_1 = *param_2 & *param_3;
    uVar6 = param_2[1];
    param_1[2] = (uint)fVar9;
    param_1[3] = (uint)fVar10;
    if ((int)param_3[4] < (int)uVar5) {
        uVar5 = param_3[4];
    }
    uVar7 = param_3[6];
    param_1[1] = uVar6 & param_3[1];
    if ((int)uVar7 < (int)uVar4) {
        uVar4 = param_3[6];
    }
    if ((int)param_3[7] < (int)uVar3) {
        uVar3 = param_3[7];
    }
    uVar6 = param_3[8];
    param_1[4] = uVar5;
    if (uVar8 < uVar6) {
        uVar8 = param_3[8];
    }
    uVar5 = param_3[10];
    param_1[6] = uVar4;
    if (uVar5 < uVar2) {
        uVar2 = param_3[10];
    }
    uVar4 = param_3[0xb];
    param_1[8] = uVar8;
    if (uVar4 < uVar1) {
        uVar1 = param_3[0xb];
    }
    param_1[7] = uVar3;
    param_1[0xb] = uVar1;
    param_1[10] = uVar2;
    uVar8 = param_2[0xc];
    if (param_3[0xc] < uVar8) {
        uVar8 = param_3[0xc];
    }
    param_1[0xc] = uVar8;
    return;
}



void FUN_14034ca50(uint *param_1,uint *param_2,uint *param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    uVar2 = param_2[8];
    uVar3 = param_2[0xb];
    uVar4 = param_2[10];
    fVar11 = (float)param_2[5];
    if ((float)param_2[5] <= (float)param_3[5]) {
        fVar11 = (float)param_3[5];
    }
    uVar5 = param_2[7];
    uVar6 = param_2[6];
    fVar12 = (float)param_2[9];
    if ((float)param_3[9] <= (float)param_2[9]) {
        fVar12 = (float)param_3[9];
    }
    uVar7 = param_2[4];
    uVar8 = param_2[0xc];
    fVar10 = (float)param_2[3];
    if ((float)param_2[3] <= (float)param_3[3]) {
        fVar10 = (float)param_3[3];
    }
    fVar9 = (float)param_2[2];
    if ((float)param_2[2] <= (float)param_3[2]) {
        fVar9 = (float)param_3[2];
    }
    *param_1 = *param_2 | *param_3;
    if ((int)uVar7 < (int)param_3[4]) {
        uVar7 = param_3[4];
    }
    uVar1 = param_3[6];
    param_1[1] = param_2[1] | param_3[1];
    if ((int)uVar6 < (int)uVar1) {
        uVar6 = param_3[6];
    }
    if ((int)uVar5 < (int)param_3[7]) {
        uVar5 = param_3[7];
    }
    uVar1 = param_3[8];
    param_1[5] = (uint)fVar11;
    param_1[9] = (uint)fVar12;
    param_1[2] = (uint)fVar9;
    param_1[3] = (uint)fVar10;
    if (uVar1 < uVar2) {
        uVar2 = param_3[8];
    }
    uVar1 = param_3[10];
    param_1[4] = uVar7;
    if (uVar4 < uVar1) {
        uVar4 = param_3[10];
    }
    uVar7 = param_3[0xb];
    param_1[8] = uVar2;
    if (uVar3 < uVar7) {
        uVar3 = param_3[0xb];
    }
    if (uVar8 < param_3[0xc]) {
        uVar8 = param_3[0xc];
    }
    param_1[6] = uVar6;
    param_1[7] = uVar5;
    param_1[10] = uVar4;
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar8;
    return;
}



int FUN_14034cb80(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_14018b280(0xb10,0);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = FUN_14034cbf0(lVar2);
    }
    iVar1 = FUN_14034dc80(lVar2,param_1);
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_14034d010(lVar2);
            FUN_14018b900(lVar2,0);
        }
        return iVar1;
    }
    return 0;
}



undefined8 * FUN_14034cbf0(undefined8 *param_1)

{
    undefined *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;

    *param_1 = &PTR_LAB_140b657d8;
    *(undefined4 *)(param_1 + 2) = (undefined4)DAT_140c42a08;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_140c42a08._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)DAT_140c42a10;
    *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_140c42a10._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)DAT_140c42a18;
    *(undefined4 *)((longlong)param_1 + 0x24) = DAT_140c42a18._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)DAT_140c42a20;
    *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_140c42a20._4_4_;
    *(undefined4 *)(param_1 + 6) = (undefined4)DAT_140c42a28;
    *(undefined4 *)((longlong)param_1 + 0x34) = DAT_140c42a28._4_4_;
    *(undefined4 *)(param_1 + 7) = (undefined4)DAT_140c42a30;
    *(undefined4 *)((longlong)param_1 + 0x3c) = DAT_140c42a30._4_4_;
    *(undefined4 *)(param_1 + 8) = DAT_140c42a38;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x36] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    FUN_1400522f0(param_1 + 0x6c);
    param_1[0x71] = 0;
    FUN_1400522f0(param_1 + 0x72);
    param_1[0x77] = 0;
    FUN_1400522f0(param_1 + 0x78);
    param_1[0x7d] = 0;
    FUN_1400522f0(param_1 + 0x7e);
    param_1[0x83] = 0;
    FUN_1400522f0(param_1 + 0x84);
    param_1[0x89] = 0;
    FUN_1400522f0(param_1 + 0x8a);
    param_1[0x8f] = 0;
    FUN_1400522f0(param_1 + 0x90);
    param_1[0x95] = 0;
    FUN_1400522f0();
    param_1[0x9b] = 0;
    iVar2 = 0xb;
    lVar3 = (longlong)param_1 + 0x4ec;
    do {
        iVar2 = iVar2 + -1;
        *(undefined ***)(lVar3 + -0xc) = &PTR_LAB_140b657e8;
        *(undefined8 *)(lVar3 + -4) = 1;
        *(undefined8 *)(lVar3 + 0xc) = 0;
        *(undefined8 *)(lVar3 + 0x14) = 0;
        *(undefined8 *)(lVar3 + 0x1c) = 0;
        *(undefined8 *)(lVar3 + 0x24) = 0;
        *(undefined (*) [16])(lVar3 + 0x34) = ZEXT816(0);
        *(undefined (*) [16])(lVar3 + 0x44) = ZEXT816(0);
        *(undefined (*) [16])(lVar3 + 0x54) = ZEXT816(0);
        *(undefined (*) [16])(lVar3 + 100) = ZEXT816(0);
        lVar3 = lVar3 + 0x80;
    } while (-1 < iVar2);
    puVar1 = (undefined *)FUN_14018b280(0x28);
    param_1[0x15e] = 0;
    param_1[0x15d] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x15d] + 8) = 0;
    *(undefined8 *)(param_1[0x15d] + 0x10) = param_1[0x15d];
    DAT_140c65878 = param_1;
    *(undefined8 *)(param_1[0x15d] + 0x18) = param_1[0x15d];
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
    puVar4 = param_1 + 0x56;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    return param_1;
}



void FUN_14034d010(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    pplVar5 = (longlong **)(param_1 + 0x56);
    *param_1 = &PTR_LAB_140b657d8;
    lVar8 = 0xb;
    pplVar3 = pplVar5;
    do {
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
            *pplVar3 = (longlong *)0x0;
        }
        pplVar3 = pplVar3 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    FUN_1401981b0();
    lVar8 = param_1[0x71];
    while (lVar8 != 0) {
        lVar8 = param_1[0x71];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x71];
    }
    lVar8 = param_1[0x77];
    while (lVar8 != 0) {
        lVar8 = param_1[0x77];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x77];
    }
    lVar8 = param_1[0x7d];
    while (lVar8 != 0) {
        lVar8 = param_1[0x7d];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x7d];
    }
    lVar8 = param_1[0x83];
    while (lVar8 != 0) {
        lVar8 = param_1[0x83];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x83];
    }
    lVar8 = param_1[0x89];
    while (lVar8 != 0) {
        lVar8 = param_1[0x89];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x89];
    }
    lVar8 = param_1[0x8f];
    while (lVar8 != 0) {
        lVar8 = param_1[0x8f];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x8f];
    }
    lVar8 = param_1[0x95];
    while (lVar8 != 0) {
        lVar8 = param_1[0x95];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x95];
    }
    lVar8 = param_1[0x9b];
    while (lVar8 != 0) {
        lVar8 = param_1[0x9b];
        if (lVar8 != 0) {
            FUN_14018b900(*(undefined8 *)(lVar8 + 8),0);
            if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar8 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
            }
            if (*(longlong *)(lVar8 + 0x18) != 0) {
                *(undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10) = *(undefined8 *)(lVar8 + 0x10);
            }
            *(undefined8 *)(lVar8 + 0x10) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            FUN_14018b900(lVar8,0);
        }
        lVar8 = param_1[0x9b];
    }
    DAT_140c65878 = 0;
    if (param_1[0x15e] != 0) {
        lVar8 = *(longlong *)(param_1[0x15d] + 8);
        while (lVar8 != 0) {
            FUN_1400083b0(param_1 + 0x15c,*(undefined8 *)(lVar8 + 0x18));
            lVar1 = *(longlong *)(lVar8 + 0x10);
            FUN_14018b900(lVar8,0);
            lVar8 = lVar1;
        }
        *(undefined8 *)(param_1[0x15d] + 0x10) = param_1[0x15d];
        *(undefined8 *)(param_1[0x15d] + 8) = 0;
        *(undefined8 *)(param_1[0x15d] + 0x18) = param_1[0x15d];
        param_1[0x15e] = 0;
    }
    iVar6 = 0xb;
    FUN_14018b900(param_1[0x15d],0);
    puVar2 = param_1 + 0x15c;
    do {
        iVar6 = iVar6 + -1;
        puVar2 = puVar2 + -0x10;
        *puVar2 = &PTR_LAB_140b657e8;
    } while (-1 < iVar6);
    if (param_1[0x9b] != 0) {
        FUN_1401a4a00(param_1 + 0x9b);
    }
    uVar10 = 0;
    uVar9 = 0;
    if (param_1[0x97] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x98] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x98] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x97]);
    }
    param_1[0x96] = 0;
    FUN_14018b900(param_1[0x98],0);
    param_1[0x98] = 0;
    if (param_1[0x95] != 0) {
        FUN_1401a4a00(param_1 + 0x95);
    }
    uVar9 = uVar10;
    if (param_1[0x91] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x92] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x92] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x91]);
    }
    param_1[0x90] = 0;
    FUN_14018b900(param_1[0x92],0);
    param_1[0x92] = 0;
    if (param_1[0x8f] != 0) {
        FUN_1401a4a00(param_1 + 0x8f);
    }
    uVar9 = uVar10;
    if (param_1[0x8b] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x8c] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x8c] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x8b]);
    }
    param_1[0x8a] = 0;
    FUN_14018b900(param_1[0x8c],0);
    param_1[0x8c] = 0;
    if (param_1[0x89] != 0) {
        FUN_1401a4a00(param_1 + 0x89);
    }
    uVar9 = uVar10;
    if (param_1[0x85] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x86] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x86] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x85]);
    }
    param_1[0x84] = 0;
    FUN_14018b900(param_1[0x86],0);
    param_1[0x86] = 0;
    if (param_1[0x83] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x7f] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x80] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x80] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x7f]);
    }
    param_1[0x7e] = 0;
    FUN_14018b900(param_1[0x80],0);
    param_1[0x80] = 0;
    if (param_1[0x7d] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x79] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x7a] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x7a] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x79]);
    }
    param_1[0x78] = 0;
    FUN_14018b900(param_1[0x7a],0);
    param_1[0x7a] = 0;
    if (param_1[0x77] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x73] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x74] + uVar9 * 8);
            lVar8 = *(longlong *)(param_1[0x74] + uVar9 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x73]);
    }
    param_1[0x72] = 0;
    FUN_14018b900(param_1[0x74],0);
    param_1[0x74] = 0;
    if (param_1[0x71] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x6d] != 0) {
        do {
            plVar4 = (longlong *)(param_1[0x6e] + uVar10 * 8);
            lVar8 = *(longlong *)(param_1[0x6e] + uVar10 * 8);
            while (lVar8 != 0) {
                lVar8 = *plVar4;
                *plVar4 = *(longlong *)(lVar8 + 8);
                FUN_14018b900(lVar8,0);
                lVar8 = *plVar4;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)param_1[0x6d]);
    }
    param_1[0x6c] = 0;
    FUN_14018b900(param_1[0x6e],0);
    plVar4 = param_1 + 0x6b;
    param_1[0x6e] = 0;
    if (*plVar4 != 0) {
        FUN_1401a4a00(plVar4);
    }
    iVar7 = 8;
    iVar6 = 8;
    do {
        plVar4 = plVar4 + -1;
        if (*plVar4 != 0) {
            FUN_1401a4a00(plVar4);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    FUN_1401981b0(param_1 + 0x61);
    if (param_1[0x61] != 0) {
        FUN_1401a4a00(param_1 + 0x61);
    }
    do {
        pplVar5 = pplVar5 + -1;
        if (*pplVar5 != (longlong *)0x0) {
            FUN_1401a4a00(pplVar5);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    if (param_1[0x46] != 0) {
        FUN_1401a4a00();
    }
    if ((longlong *)param_1[0x45] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x45] + 8))();
    }
    if ((longlong *)param_1[0x44] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x44] + 8))();
    }
    if ((longlong *)param_1[0x43] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x43] + 8))();
    }
    if ((longlong *)param_1[0x42] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x42] + 8))();
    }
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x41] + 8))();
    }
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x40] + 8))();
    }
    if ((longlong *)param_1[0x3f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3f] + 8))();
    }
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3e] + 8))();
    }
    if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3d] + 8))();
    }
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3c] + 8))();
    }
    if ((longlong *)param_1[0x3b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3b] + 8))();
    }
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3a] + 8))();
    }
    if ((longlong *)param_1[0x39] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x39] + 8))();
    }
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x38] + 8))();
    }
    if ((longlong *)param_1[0x36] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x36] + 8))();
    }
    if ((longlong *)param_1[0x34] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x34] + 8))();
    }
    if ((longlong *)param_1[0x33] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x33] + 8))();
    }
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x32] + 8))();
    }
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x31] + 8))();
    }
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30] + 8))();
    }
    if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2f] + 8))();
    }
    if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2e] + 8))();
    }
    if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d] + 8))();
    }
    if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2c] + 8))();
    }
    if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b] + 8))();
    }
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2a] + 8))();
    }
    if ((longlong *)param_1[0x29] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x29] + 8))();
    }
    pplVar5 = (longlong **)(param_1 + 0x28);
    if (*pplVar5 != (longlong *)0x0) {
        (**(code **)(**pplVar5 + 8))();
    }
    iVar6 = 3;
    do {
        pplVar3 = pplVar5 + -1;
        pplVar5 = pplVar5 + -1;
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 8))();
    }
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x22] + 8))();
    }
    if ((longlong *)param_1[0x21] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x21] + 8))();
    }
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x20] + 8))();
    }
    if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1f] + 8))();
    }
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1e] + 8))();
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1d] + 8))();
    }
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1c] + 8))();
    }
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 8))();
    }
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 8))();
    }
    if ((longlong *)param_1[0x19] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x19] + 8))();
    }
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x18] + 8))();
    }
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x17] + 8))();
    }
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x16] + 8))();
    }
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x15] + 8))();
    }
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14] + 8))();
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x13] + 8))();
    }
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x12] + 8))();
    }
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x11] + 8))();
    }
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10] + 8))();
    }
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xf] + 8))();
    }
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe] + 8))();
    }
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xd] + 8))();
    }
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
    }
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
    }
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 8))();
    }
    return;
}



longlong FUN_14034dc20(longlong param_1)

{
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14034dc80(longlong param_1,undefined8 param_2)

{
    int iVar1;
    uint *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    int *piVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined8 in_stack_fffffffffffffec8;
    undefined4 uVar15;
    ulonglong in_stack_fffffffffffffee8;
    uint local_108;
    uint local_104;
    longlong local_100;
    undefined8 local_f8;
    undefined8 local_f0;
    uint local_e8;
    uint local_e0;
    uint local_dc;
    uint local_d8;
    undefined local_d0 [184];

    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
    puVar2 = (uint *)FUN_14034ca50(local_d0,&DAT_140c43e88,param_2);
    fVar14 = (float)puVar2[9];
    if ((float)puVar2[9] <= DAT_140c43e74) {
        fVar14 = DAT_140c43e74;
    }
    fVar13 = (float)puVar2[5];
    if (DAT_140c43e64 <= (float)puVar2[5]) {
        fVar13 = DAT_140c43e64;
    }
    fVar11 = (float)puVar2[2];
    if (DAT_140c43e58 <= (float)puVar2[2]) {
        fVar11 = DAT_140c43e58;
    }
    fVar12 = (float)puVar2[3];
    if (DAT_140c43e5c <= (float)puVar2[3]) {
        fVar12 = DAT_140c43e5c;
    }
    local_108 = *puVar2 & _DAT_140c43e50;
    local_104 = puVar2[1] & _DAT_140c43e54;
    uVar8 = puVar2[4];
    if ((int)DAT_140c43e60 < (int)puVar2[4]) {
        uVar8 = DAT_140c43e60;
    }
    uVar7 = puVar2[6];
    if ((int)DAT_140c43e68 < (int)puVar2[6]) {
        uVar7 = DAT_140c43e68;
    }
    local_f8 = (code *)CONCAT44(local_f8._4_4_,uVar8);
    uVar10 = puVar2[7];
    if ((int)DAT_140c43e6c < (int)puVar2[7]) {
        uVar10 = DAT_140c43e6c;
    }
    local_e8 = puVar2[8];
    if (puVar2[8] < DAT_140c43e70) {
        local_e8 = DAT_140c43e70;
    }
    local_f0 = CONCAT44(uVar10,uVar7);
    local_e0 = puVar2[10];
    if (DAT_140c43e78 < puVar2[10]) {
        local_e0 = DAT_140c43e78;
    }
    local_dc = puVar2[0xb];
    if (DAT_140c43e7c < puVar2[0xb]) {
        local_dc = DAT_140c43e7c;
    }
    local_d8 = puVar2[0xc];
    if (DAT_140c43e80 < puVar2[0xc]) {
        local_d8 = DAT_140c43e80;
    }
    *(uint *)(param_1 + 0x10) = local_108;
    *(uint *)(param_1 + 0x14) = local_104;
    *(float *)(param_1 + 0x18) = fVar11;
    *(float *)(param_1 + 0x1c) = fVar12;
    *(uint *)(param_1 + 0x20) = uVar8;
    *(float *)(param_1 + 0x24) = fVar13;
    *(uint *)(param_1 + 0x28) = uVar7;
    *(uint *)(param_1 + 0x2c) = uVar10;
    *(uint *)(param_1 + 0x30) = local_e8;
    *(float *)(param_1 + 0x34) = fVar14;
    *(uint *)(param_1 + 0x38) = local_e0;
    *(uint *)(param_1 + 0x3c) = local_dc;
    *(uint *)(param_1 + 0x40) = local_d8;
    lVar3 = (**(code **)(*DAT_140c65670 + 0x2c8))();
    uVar8 = *(uint *)(param_1 + 0x38);
    if (*(uint *)(lVar3 + 0x38) < uVar8) {
        uVar8 = *(uint *)(lVar3 + 0x38);
    }
    *(uint *)(param_1 + 0x38) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x3c);
    if (*(uint *)(lVar3 + 0x38) < uVar8) {
        uVar8 = *(uint *)(lVar3 + 0x38);
    }
    *(uint *)(param_1 + 0x3c) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x40);
    if (*(uint *)(lVar3 + 0x38) < *(uint *)(param_1 + 0x40)) {
        uVar8 = *(uint *)(lVar3 + 0x38);
    }
    *(uint *)(param_1 + 0x40) = uVar8;
    uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
            (DAT_140c65670,L"Shaders\\SimpleVS.sho",param_1 + 0x50);
    if ((int)uVar4 < 0) {
        return uVar4;
    }
    uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
            (DAT_140c65670,L"Shaders\\SimplePS.sho",param_1 + 0x58);
    if ((int)uVar4 < 0) {
        return uVar4;
    }
    uVar4 = (**(code **)(*DAT_140c65670 + 0x98))(DAT_140c65670,L"Shaders\\FillPS.sho",param_1 + 0x60);
    if ((int)uVar4 < 0) {
        return uVar4;
    }
    if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LandVS.sho",param_1 + 0x68);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LandPS.sho",param_1 + 0x70);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x884,1,param_1 + 0x78);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\landRoadTrailPS.sho",param_1 + 0x80);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LandDepthVS.sho",param_1 + 0x88);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LandDepthPS.sho",param_1 + 0x90);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
    }
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LandWaterDepthVS.sho",param_1 + 0x98);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LandWaterDepthPS.sho",param_1 + 0xa0);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LandWaterVS.sho",param_1 + 0xa8);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LandWaterPS.sho",param_1 + 0xb0);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LightShaftVS.sho",param_1 + 400);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LightShaftPS.sho",param_1 + 0x198);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
            uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                    (DAT_140c65670,L"Shaders\\OceanDepthVS.sho",param_1 + 0xb8);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670,L"Shaders\\OceanDepthPS.sho",param_1 + 0xc0);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                    (DAT_140c65670,L"Shaders\\OceanVS.sho",param_1 + 200);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670,L"Shaders\\OceanPS.sho",param_1 + 0xd0);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar4 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x40,1,param_1 + 0xd8);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
        }
    }
    if ((*(uint *)(param_1 + 0x10) & 0x4001) == 0x4001) {
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\ClutterVS.sho",param_1 + 0x140);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\ClutterPS.sho",param_1 + 0x148);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
    }
    if (((*(uint *)(param_1 + 0x14) & 0x4000000) != 0) &&
        (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\TopoMapPS.sho",param_1 + 0x150), (int)uVar4 < 0))
    {
        return uVar4;
    }
    uVar9 = 0;
    if ((*(uint *)(param_1 + 0x10) & 0x880) == 0x880) {
        in_stack_fffffffffffffee8 = param_1 + 0x180;
        uVar4 = (**(code **)(*DAT_140c65670 + 0x50))
                (DAT_140c65670,L"Art\\Dev\\Default_Shadow_Blob.tex",0,1,CONCAT44(uVar15,1),0,0
                        ,0,in_stack_fffffffffffffee8);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        if ((*(byte *)(param_1 + 0x14) & 0x88) != 0) {
            uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                    (DAT_140c65670,L"Shaders\\LandEdgeVS.sho",param_1 + 0xe0);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670,L"Shaders\\LandEdgePS.sho",param_1 + 0xe8);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            iVar1 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x1800,0,1,param_1 + 0xf0);
            if (iVar1 < 0) {
                return 0xa0140001;
            }
        }
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            if (((*(uint *)(param_1 + 0x14) & 0x2200004) != 0) &&
                (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\LandGridPS.sho",param_1 + 0xf8),
                        (int)uVar4 < 0)) {
                return uVar4;
            }
            if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && ((*(uint *)(param_1 + 0x14) & 0x200) != 0)) &&
                (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\LandSlopePS.sho",param_1 + 0x100),
                        (int)uVar4 < 0)) {
                return uVar4;
            }
        }
    }
    if (((byte)*(undefined4 *)(param_1 + 0x10) & 9) == 9) {
        uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                (DAT_140c65670,L"Shaders\\LandLowVS.sho",param_1 + 0x108);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\LandLowPS.sho",param_1 + 0x110);
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        uVar4 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x2648,1,param_1 + 0x118);
        uVar5 = uVar9;
        if ((int)uVar4 < 0) {
            return uVar4;
        }
        do {
            iVar1 = (**(code **)(*DAT_140c65670 + 0x40))
                    (DAT_140c65670,0x360c,0,1,param_1 + (uVar5 + 0x24) * 8);
            if (iVar1 < 0) {
                return 0xa0140001;
            }
            uVar8 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar8;
        } while (uVar8 < 4);
    }
    iVar1 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x48,0,1,param_1 + 0x158);
    if (-1 < iVar1) {
        uVar5 = param_1 + 0x160;
        iVar1 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x30,0,1,uVar5);
        if (-1 < iVar1) {
            in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
            uVar5 = uVar5 & 0xffffffff00000000;
            uVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,1,1,0,uVar5,1,0,0,in_stack_fffffffffffffee8,param_1 + 0x168);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
            uVar5 = uVar5 & 0xffffffff00000000;
            uVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,1,1,0,uVar5,1,0,0,in_stack_fffffffffffffee8,param_1 + 0x170);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
            uVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670,1,1,0,uVar5 & 0xffffffff00000000,1,0,0,
                     in_stack_fffffffffffffee8,param_1 + 0x178);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            *(undefined4 *)(param_1 + 0x1a8) = 0x22;
            *(undefined4 *)(param_1 + 0x1b8) = 0xc0;
            uVar4 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x330,1,param_1 + 0x1a0);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            uVar5 = param_1 + 0x1b0;
            uVar4 = (**(code **)(*DAT_140c65670 + 0x40))
                    (DAT_140c65670,*(int *)(param_1 + 0x1b8) * 2,0,1,uVar5);
            if ((int)uVar4 < 0) {
                return uVar4;
            }
            if (((*(byte *)(param_1 + 0x10) & 0x10) != 0) &&
                (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\RipplePS.sho",param_1 + 0x188), (int)uVar4 < 0
                )) {
                return uVar4;
            }
            if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
                (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\edgePS.sho",param_1 + 0x1c0), (int)uVar4 < 0))
            {
                return uVar4;
            }
            if ((*(uint *)(param_1 + 0x10) & 0x4800) != 0) {
                uVar5 = param_1 + 0x1c8;
                uVar4 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,12000,0,1,uVar5);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\WindSine2dPS.sho",param_1 + 0x1d0);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\WindLocalPS.sho",param_1 + 0x1d8);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\WindPhysicsPS.sho",param_1 + 0x1e0);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\WindVisualPS.sho",param_1 + 0x1e8);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
            }
            uVar15 = (undefined4)(uVar5 >> 0x20);
            if ((*(uint *)(param_1 + 0x14) & 0x1800000) != 0) {
                uVar5 = uVar5 & 0xffffffff00000000;
                uVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                        (DAT_140c65670,0x100,1,1,uVar5,1,0,0,
                         in_stack_fffffffffffffee8 & 0xffffffff00000000,param_1 + 0x1f0);
                uVar15 = (undefined4)(uVar5 >> 0x20);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
            }
            if ((*(uint *)(param_1 + 0x14) & 0x100000) != 0) {
                lVar3 = param_1 + 0x1f8;
                uVar4 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x1800,0,1,lVar3);
                uVar15 = (undefined4)((ulonglong)lVar3 >> 0x20);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
            }
            if (((*(uint *)(param_1 + 0x10) & 0x20001) == 0x20001) &&
                (lVar3 = (**(code **)(*DAT_140c65670 + 0x2c8))(), *(int *)(lVar3 + 0x50) == 0)) {
                *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffdffff;
            }
            if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
                uVar4 = (**(code **)(*DAT_140c65670 + 0x50))
                        (DAT_140c65670,L"Art\\Dev\\TelegraphGray_Ramp.tex",0,1,CONCAT44(uVar15,1),
                         0,0,0,param_1 + 0x200);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\TelegraphColorPS.sho",param_1 + 0x208);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
            }
            if ((ulonglong *)(param_1 + 0x48) == (ulonglong *)0x0) {
                return 0x80004003;
            }
            lVar3 = FUN_14018b280(0x18);
            uVar5 = uVar9;
            if (lVar3 != 0) {
                uVar5 = FUN_1401ae310(lVar3);
            }
            *(ulonglong *)(param_1 + 0x48) = uVar5;
            lVar3 = FUN_140232e40(2);
            if (lVar3 != 0) {
                *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(lVar3 + 4);
            }
            (**(code **)(*DAT_140c65670 + 0x2c8))();
            *(undefined4 *)(param_1 + 0x238) = 0;
            *(undefined4 *)(param_1 + 0x23c) = 1;
            *(undefined4 *)(param_1 + 0x240) = 2;
            *(undefined4 *)(param_1 + 0x244) = 7;
            *(undefined4 *)(param_1 + 0x248) = 7;
            *(undefined4 *)(param_1 + 0x24c) = 8;
            *(undefined4 *)(param_1 + 0x250) = 7;
            *(undefined4 *)(param_1 + 0x254) = 7;
            *(undefined4 *)(param_1 + 600) = 4;
            *(undefined4 *)(param_1 + 0x25c) = 3;
            *(undefined4 *)(param_1 + 0x260) = 6;
            uVar4 = (**(code **)(*DAT_140c65670 + 0xb8))(DAT_140c65670,param_1 + 0x210);
            if (-1 < (int)uVar4) {
                uVar4 = (**(code **)(*DAT_140c65670 + 0xc0))(DAT_140c65670,param_1 + 0x218);
                if ((int)uVar4 < 0) {
                    return uVar4;
                }
                local_f8 = FUN_14034ea90;
                local_108 = 0;
                local_f0 = 0;
                local_100 = param_1;
                (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))
                        (*(longlong **)(param_1 + 0x218),0,&local_108);
                local_f8 = (code *)&LAB_140350400;
                local_108 = 0;
                local_f0 = 0;
                local_100 = param_1;
                (**(code **)(**(longlong **)(param_1 + 0x218) + 0x18))
                        (*(longlong **)(param_1 + 0x218),1,&local_108);
                FUN_14034ea90(param_1);
                uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\VisualizeEnvMapPS.sho",param_1 + 0x220);
                if (-1 < (int)uVar4) {
                    uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                            (DAT_140c65670,L"Shaders\\SampleCubeMapPS.sho",param_1 + 0x228);
                    if (-1 < (int)uVar4) {
                        lVar3 = param_1 + 0x4ec;
                        do {
                            FUN_1403512d0(lVar3 + -0xc,uVar9);
                            piVar6 = (int *)FUN_140032640(param_1 + 0xae0);
                            lVar3 = lVar3 + 0x80;
                            *piVar6 = (int)uVar9;
                            uVar8 = (int)uVar9 + 1;
                            uVar9 = (ulonglong)uVar8;
                        } while (uVar8 < 0xc);
                        *(undefined4 *)(param_1 + 0x44) = 0;
                        return 0;
                    }
                    return uVar4;
                }
                return uVar4;
            }
            return uVar4;
        }
    }
    return 0xa0140001;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14034ea90(ulonglong param_1)

{
    undefined8 *puVar1;
    float fVar2;
    ushort uVar3;
    undefined4 *puVar4;
    int *piVar5;
    short *psVar6;
    undefined8 *puVar7;
    float *pfVar8;
    ushort uVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong *plVar12;
    ulonglong uVar13;
    short sVar14;
    short sVar15;
    short sVar16;
    ushort uVar17;
    float fVar18;
    ulonglong uVar19;
    short *psVar20;
    int *piVar21;
    float *pfVar22;
    longlong **pplVar23;
    int iVar24;
    ulonglong uVar25;
    uint uVar26;
    ushort *puVar27;
    short sVar28;
    longlong lVar29;
    uint uVar30;
    int *piVar31;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined auVar32 [16];
    undefined4 uVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    undefined8 local_res8;
    undefined4 local_res10;
    undefined2 uStackX20;
    undefined2 uStackX22;
    float local_res18;
    float fStackX28;
    float local_res20;
    float fStackX36;
    float local_1a8;
    short local_1a4;
    short local_1a0;
    short local_19c;
    short local_198;
    short local_194;
    short local_190;
    short local_18c;
    short local_188;
    short local_184;
    short local_180;
    short local_17c;
    short local_178;
    short local_174;
    short local_170;
    short local_16c;
    short local_168;
    short local_164;
    short local_160;
    float local_15c;
    short local_158;
    float local_154;
    short local_150;
    short local_14c;
    short local_148;
    short local_144;
    short local_140;
    short local_13c;
    short local_138;
    short local_134;
    short local_130;
    short local_12c;
    short local_128;
    float local_124;
    short local_120;
    short local_11c;
    short local_118;
    short local_114;
    short local_110;
    float local_10c;
    short local_108;
    short local_104;
    short local_100;
    short local_fc;
    short local_f8;
    undefined local_e8 [16];
    longlong local_d8;

    fVar36 = 0.0;
    local_res8 = param_1;
    if (((*(byte *)(param_1 + 0x10) & 0x10) != 0) &&
        (puVar4 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0xd8) + 0x38))(),
                auVar32 = _DAT_140b7a620, puVar4 != (undefined4 *)0x0)) {
        *puVar4 = SUB164(_DAT_140b7a620,0);
        puVar4[1] = SUB164(auVar32 >> 0x20,0);
        puVar4[2] = SUB164(auVar32 >> 0x40,0);
        FUN_1401c95b0(&local_res10);
        uVar33 = DAT_140c43e4c;
        puVar4[3] = local_res10;
        puVar4[4] = fVar36;
        puVar4[5] = 0xc47a0000;
        puVar4[6] = uVar33;
        FUN_1401c95b0(&local_res10);
        puVar4[7] = local_res10;
        puVar4[8] = uVar33;
        puVar4[9] = 0xc47a0000;
        puVar4[10] = fVar36;
        FUN_1401c95b0(&local_res10);
        puVar4[0xb] = local_res10;
        puVar4[0xc] = uVar33;
        puVar4[0xd] = 0xc47a0000;
        puVar4[0xe] = uVar33;
        local_e8 = ZEXT816(0x3f8000003f800000);
        FUN_1401c95b0(&local_res10);
        puVar4[0xf] = local_res10;
        (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x40))();
    }
    uVar25 = 0;
    if (((*(byte *)(param_1 + 0x10) & 4) != 0) &&
        (piVar5 = (int *)(**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))(),
         fVar18 = DAT_140c43e84, uVar33 = DAT_140c43e4c, uVar19 = uVar25, piVar21 = piVar5,
                piVar5 != (int *)0x0)) {
        do {
            uVar13 = uVar25;
            do {
                piVar31 = piVar21;
                uVar30 = (int)uVar13 + 1;
                auVar32 = divps(CONCAT88(SUB168(CONCAT412(fVar36,CONCAT48(fVar36,CONCAT44(fVar36,(float)
                                                                                                         uVar13 * fVar18))) >> 0x40,0),
                                         CONCAT44((float)uVar19 * fVar18,(float)uVar13 * fVar18)),
                                CONCAT412(uVar33,CONCAT48(uVar33,CONCAT44(uVar33,uVar33))));
                lVar10 = (longlong)(SUB164(auVar32,0) * 65535.0);
                lVar29 = (longlong)(SUB164(auVar32 >> 0x20,0) * 65535.0);
                *piVar31 = (uint)(byte)((ulonglong)lVar29 >> 8) * 0x1000000 +
                           ((uint)lVar10 & 0xff) * 0x10000 + (uint)(byte)((ulonglong)lVar10 >> 8) * 0x100 +
                           ((uint)lVar29 & 0xff);
                uVar13 = (ulonglong)uVar30;
                piVar21 = piVar31 + 1;
            } while (uVar30 < 0x11);
            uVar30 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar30;
            piVar21 = piVar31 + 0x11;
        } while (uVar30 < 0x11);
        fVar35 = fVar18 * 0.5;
        uVar19 = uVar25;
        do {
            piVar21 = piVar5 + 0x11;
            uVar13 = uVar25;
            do {
                uVar30 = (int)uVar13 + 1;
                piVar5 = piVar21 + 1;
                auVar32 = divps(CONCAT412(fVar35 + fVar36,
                                          CONCAT48(fVar35 + fVar36,
                                                   CONCAT44(fVar35 + (float)uVar19 * fVar18,
                                                            fVar35 + (float)uVar13 * fVar18))),
                                CONCAT412(uVar33,CONCAT48(uVar33,CONCAT44(uVar33,uVar33))));
                lVar10 = (longlong)(SUB164(auVar32,0) * 65535.0);
                lVar29 = (longlong)(SUB164(auVar32 >> 0x20,0) * 65535.0);
                *piVar21 = (uint)(byte)((ulonglong)lVar29 >> 8) * 0x1000000 +
                           ((uint)lVar10 & 0xff) * 0x10000 + ((uint)((ulonglong)lVar10 >> 8) & 0xff) * 0x100
                           + ((uint)lVar29 & 0xff);
                piVar21 = piVar5;
                uVar13 = (ulonglong)uVar30;
            } while (uVar30 < 0x10);
            uVar30 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar30;
        } while (uVar30 < 0x10);
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x40))();
    }
    if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && ((*(byte *)(param_1 + 0x14) & 8) != 0)) &&
        (psVar6 = (short *)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x38))(), uVar19 = uVar25,
                psVar6 != (short *)0x0)) {
        do {
            psVar20 = psVar6;
            uVar13 = uVar25;
            do {
                sVar28 = (short)uVar19 * 0x21 + (short)uVar13;
                uVar30 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar30;
                psVar6 = psVar20 + 0xc;
                psVar20[1] = sVar28;
                psVar20[5] = sVar28;
                sVar14 = sVar28 + 0x11;
                psVar20[4] = sVar28 + 1;
                psVar20[0xb] = sVar28 + 1;
                *psVar20 = sVar14;
                psVar20[3] = sVar14;
                psVar20[6] = sVar14;
                psVar20[9] = sVar14;
                psVar20[2] = sVar28 + 0x21;
                psVar20[7] = sVar28 + 0x21;
                psVar20[8] = sVar28 + 0x22;
                psVar20[10] = sVar28 + 0x22;
                psVar20 = psVar6;
            } while (uVar30 < 0x10);
            uVar30 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar30;
        } while (uVar30 < 0x10);
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x40))();
    }
    if (((byte)*(undefined4 *)(param_1 + 0x10) & 9) == 9) {
        puVar7 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        if (puVar7 != (undefined8 *)0x0) {
            lVar10 = 0x21;
            *puVar7 = DAT_140c67480;
            do {
                puVar1 = puVar7;
                puVar1[1] = DAT_140c67480;
                fVar18 = DAT_140c43ec0;
                local_res10 = DAT_140c43ebc;
                lVar10 = lVar10 + -1;
                puVar7 = puVar1 + 1;
            } while (lVar10 != 0);
            plVar12 = puVar1 + 3;
            local_res20 = DAT_140c43ebc;
            puVar1[2] = (ulonglong)(uint)DAT_140c43ebc;
            uVar19 = uVar25;
            do {
                fStackX28 = (float)uVar19 * fVar18;
                *plVar12 = (ulonglong)(uint)fStackX28 << 0x20;
                plVar12 = plVar12 + 1;
                uVar13 = uVar25;
                do {
                    plVar11 = plVar12;
                    uVar30 = (int)uVar13 + 1;
                    local_res18 = (float)uVar13 * fVar18;
                    *plVar11 = CONCAT44(fStackX28,local_res18);
                    plVar12 = plVar11 + 1;
                    uVar13 = (ulonglong)uVar30;
                } while (uVar30 < 0x21);
                uVar30 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar30;
                plVar11[1] = CONCAT44(fStackX28,local_res10);
                plVar12 = plVar11 + 2;
            } while (uVar30 < 0x21);
            uStackX20 = SUB42(local_res10,0);
            uStackX22 = (undefined2)((uint)local_res10 >> 0x10);
            *plVar12 = (ulonglong)(uint)local_res10 << 0x20;
            plVar12 = plVar11 + 3;
            uVar19 = uVar25;
            do {
                uVar30 = (int)uVar19 + 1;
                plVar11 = plVar12 + 1;
                *plVar12 = CONCAT26(uStackX22,CONCAT24(uStackX20,(float)uVar19 * fVar18));
                plVar12 = plVar11;
                uVar19 = (ulonglong)uVar30;
            } while (uVar30 < 0x21);
            *plVar11 = CONCAT26(uStackX22,CONCAT24(uStackX20,local_res10));
            fStackX36 = fStackX28;
            (**(code **)(**(longlong **)(param_1 + 0x118) + 0x40))();
        }
        local_d8 = 0;
        do {
            psVar6 = (short *)(**(code **)(**(longlong **)(local_res8 + 0x120 + local_d8 * 8) + 0x38))();
            iVar24 = (int)uVar25;
            if (psVar6 != (short *)0x0) {
                sVar28 = 2;
                lVar10 = 0x20;
                do {
                    if (iVar24 == 0) {
                        local_184 = sVar28 + -1;
                        local_13c = 0;
                    }
                    else if (iVar24 == 1) {
                        local_184 = 0x22;
                        local_13c = sVar28 + -1;
                    }
                    else if (iVar24 == 2) {
                        local_184 = 0;
                        local_13c = 0x23 - sVar28;
                    }
                    else if (iVar24 == 3) {
                        local_13c = 0x22;
                        local_184 = 0x23 - sVar28;
                    }
                    if (iVar24 == 0) {
                        local_19c = 0;
                        local_11c = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_19c = sVar28;
                        local_11c = 0x22;
                    }
                    else if (iVar24 == 2) {
                        local_19c = 0x22 - sVar28;
                        local_11c = 0;
                    }
                    else if (iVar24 == 3) {
                        local_19c = 0x22;
                        local_11c = 0x22 - sVar28;
                    }
                    sVar14 = local_19c * 0x23 + local_11c;
                    if (iVar24 == 0) {
                        local_144 = sVar28 + -1;
                        local_194 = 1;
                    }
                    else if (iVar24 == 1) {
                        local_194 = sVar28 + -1;
                        local_144 = 0x21;
                    }
                    else if (iVar24 == 2) {
                        local_194 = 0x23 - sVar28;
                        local_144 = 1;
                    }
                    else if (iVar24 == 3) {
                        local_144 = 0x23 - sVar28;
                        local_194 = 0x21;
                    }
                    sVar15 = local_194 * 0x23 + local_144;
                    if (iVar24 == 0) {
                        local_104 = 1;
                        local_18c = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_18c = 0x21;
                        local_104 = sVar28;
                    }
                    else if (iVar24 == 2) {
                        local_18c = 1;
                        local_104 = 0x22 - sVar28;
                    }
                    else if (iVar24 == 3) {
                        local_18c = 0x22 - sVar28;
                        local_104 = 0x21;
                    }
                    *psVar6 = local_13c * 0x23 + local_184;
                    psVar6[1] = sVar15;
                    psVar6[2] = sVar14;
                    psVar6[3] = sVar14;
                    psVar6[4] = sVar15;
                    psVar6[5] = local_104 * 0x23 + local_18c;
                    psVar6 = psVar6 + 6;
                    sVar28 = sVar28 + 1;
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                sVar28 = 2;
                lVar10 = 0x20;
                do {
                    if (iVar24 == 0) {
                        local_12c = sVar28 + -1;
                        local_164 = 0;
                    }
                    else if (iVar24 == 1) {
                        local_12c = 0;
                        local_164 = 0x23 - sVar28;
                    }
                    else if (iVar24 == 2) {
                        local_12c = 0x22;
                        local_164 = sVar28 + -1;
                    }
                    else if (iVar24 == 3) {
                        local_12c = 0x23 - sVar28;
                        local_164 = 0x22;
                    }
                    if (iVar24 == 0) {
                        local_17c = sVar28 + -1;
                        local_114 = 1;
                    }
                    else if (iVar24 == 1) {
                        local_114 = 0x23 - sVar28;
                        local_17c = 1;
                    }
                    else if (iVar24 == 2) {
                        local_114 = sVar28 + -1;
                        local_17c = 0x21;
                    }
                    else if (iVar24 == 3) {
                        local_17c = 0x23 - sVar28;
                        local_114 = 0x21;
                    }
                    sVar14 = local_17c * 0x23 + local_114;
                    if (iVar24 == 0) {
                        local_134 = 0;
                        local_174 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_134 = 0x22 - sVar28;
                        local_174 = 0;
                    }
                    else if (iVar24 == 2) {
                        local_134 = sVar28;
                        local_174 = 0x22;
                    }
                    else if (iVar24 == 3) {
                        local_134 = 0x22;
                        local_174 = 0x22 - sVar28;
                    }
                    sVar15 = local_174 * 0x23 + local_134;
                    if (iVar24 == 0) {
                        local_16c = 1;
                        local_f8 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_16c = 0x22 - sVar28;
                        local_f8 = 1;
                    }
                    else if (iVar24 == 2) {
                        local_16c = sVar28;
                        local_f8 = 0x21;
                    }
                    else if (iVar24 == 3) {
                        local_16c = 0x21;
                        local_f8 = 0x22 - sVar28;
                    }
                    *psVar6 = local_12c * 0x23 + local_164;
                    psVar6[1] = sVar15;
                    psVar6[2] = sVar14;
                    psVar6[3] = sVar14;
                    psVar6[4] = sVar15;
                    psVar6[5] = local_f8 * 0x23 + local_16c;
                    psVar6 = psVar6 + 6;
                    sVar28 = sVar28 + 1;
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                fVar18 = 2.802597e-45;
                local_e8 = CONCAT88(local_e8._8_8_,0x20);
                do {
                    fVar35 = 2.802597e-45;
                    lVar10 = 0x20;
                    do {
                        if (iVar24 == 0) {
                            local_res10 = (float)((int)fVar35 - 1);
                            local_res18 = (float)((int)fVar18 - 1);
                        }
                        else if (iVar24 == 1) {
                            local_res18 = (float)((int)fVar35 - 1);
                            local_res10 = (float)(0x23 - (int)fVar18);
                        }
                        else if (iVar24 == 2) {
                            local_res10 = (float)((int)fVar18 - 1);
                            local_res18 = (float)(0x23 - (int)fVar35);
                        }
                        else if (iVar24 == 3) {
                            local_res10 = (float)(0x23 - (int)fVar35);
                            local_res18 = (float)(0x23 - (int)fVar18);
                        }
                        if (iVar24 == 0) {
                            local_1a8 = (float)((int)fVar18 - 1);
                            local_res20 = fVar35;
                        }
                        else if (iVar24 == 1) {
                            local_1a8 = fVar35;
                            local_res20 = (float)(0x23 - (int)fVar18);
                        }
                        else if (iVar24 == 2) {
                            local_1a8 = (float)(0x22 - (int)fVar35);
                            local_res20 = (float)((int)fVar18 - 1);
                        }
                        else if (iVar24 == 3) {
                            local_1a8 = (float)(0x23 - (int)fVar18);
                            local_res20 = (float)(0x22 - (int)fVar35);
                        }
                        sVar28 = SUB42(local_1a8,0) * 0x23 + SUB42(local_res20,0);
                        if (iVar24 == 0) {
                            local_154 = (float)((int)fVar35 - 1);
                            local_10c = fVar18;
                        }
                        else if (iVar24 == 1) {
                            local_154 = (float)(0x22 - (int)fVar18);
                            local_10c = (float)((int)fVar35 - 1);
                        }
                        else if (iVar24 == 2) {
                            local_154 = fVar18;
                            local_10c = (float)(0x23 - (int)fVar35);
                        }
                        else if (iVar24 == 3) {
                            local_154 = (float)(0x23 - (int)fVar35);
                            local_10c = (float)(0x22 - (int)fVar18);
                        }
                        sVar14 = SUB42(local_10c,0) * 0x23 + SUB42(local_154,0);
                        fVar34 = fVar18;
                        fVar2 = fVar35;
                        if (iVar24 != 0) {
                            if (iVar24 == 1) {
                                fVar34 = fVar35;
                                fVar2 = (float)(0x22 - (int)fVar18);
                            }
                            else if (iVar24 == 2) {
                                fVar34 = (float)(0x22 - (int)fVar35);
                                fVar2 = fVar18;
                            }
                            else {
                                fVar34 = local_15c;
                                fVar2 = local_124;
                                if (iVar24 == 3) {
                                    fVar34 = (float)(0x22 - (int)fVar18);
                                    fVar2 = (float)(0x22 - (int)fVar35);
                                }
                            }
                        }
                        local_124 = fVar2;
                        local_15c = fVar34;
                        *psVar6 = SUB42(local_res18,0) * 0x23 + SUB42(local_res10,0);
                        psVar6[1] = sVar14;
                        psVar6[2] = sVar28;
                        psVar6[3] = sVar28;
                        psVar6[4] = sVar14;
                        psVar6[5] = SUB42(local_15c,0) * 0x23 + local_124._0_2_;
                        psVar6 = psVar6 + 6;
                        fVar35 = (float)((int)fVar35 + 1);
                        lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                    fVar18 = (float)((int)fVar18 + 1);
                    local_e8 = CONCAT88(local_e8._8_8_,local_e8._0_8_ + -1);
                } while (local_e8._0_8_ + -1 != 0);
                sVar28 = 2;
                lVar10 = 0x20;
                do {
                    sVar14 = 1;
                    if (iVar24 == 0) {
                        local_180 = 0x21;
                        local_188 = sVar28 + -1;
                    }
                    else if (iVar24 == 1) {
                        local_188 = 0x21;
                        local_180 = 0x23 - sVar28;
                    }
                    else if (iVar24 == 2) {
                        local_180 = sVar28 + -1;
                        local_188 = sVar14;
                    }
                    else if (iVar24 == 3) {
                        local_180 = 1;
                        local_188 = 0x23 - sVar28;
                    }
                    if (iVar24 == 0) {
                        local_14c = sVar28 + -1;
                        local_fc = 0x22;
                    }
                    else if (iVar24 == 1) {
                        local_fc = 0x23 - sVar28;
                        local_14c = 0x22;
                    }
                    else if (iVar24 == 2) {
                        local_fc = sVar28 + -1;
                        local_14c = 0;
                    }
                    else if (iVar24 == 3) {
                        local_14c = 0x23 - sVar28;
                        local_fc = 0;
                    }
                    sVar15 = local_14c * 0x23 + local_fc;
                    if (iVar24 == 0) {
                        local_1a4 = 0x21;
                        local_1a0 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_1a4 = 0x22 - sVar28;
                        local_1a0 = 0x21;
                    }
                    else if (iVar24 == 2) {
                        local_1a4 = sVar28;
                        local_1a0 = 1;
                    }
                    else if (iVar24 == 3) {
                        local_1a4 = 1;
                        local_1a0 = 0x22 - sVar28;
                    }
                    sVar16 = local_1a0 * 0x23 + local_1a4;
                    if (iVar24 == 0) {
                        local_190 = 0x22;
                        local_198 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_190 = 0x22 - sVar28;
                        local_198 = 0x22;
                    }
                    else if (iVar24 == 2) {
                        local_190 = sVar28;
                        local_198 = 0;
                    }
                    else if (iVar24 == 3) {
                        local_190 = 0;
                        local_198 = 0x22 - sVar28;
                    }
                    *psVar6 = local_188 * 0x23 + local_180;
                    psVar6[1] = sVar16;
                    psVar6[2] = sVar15;
                    psVar6[3] = sVar15;
                    psVar6[4] = sVar16;
                    psVar6[5] = local_198 * 0x23 + local_190;
                    psVar6 = psVar6 + 6;
                    sVar28 = sVar28 + 1;
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                sVar28 = 2;
                lVar10 = 0x20;
                do {
                    psVar20 = psVar6;
                    if (iVar24 == 0) {
                        local_140 = sVar28 + -1;
                        local_148 = 0x21;
                    }
                    else if (iVar24 == 1) {
                        local_148 = sVar28 + -1;
                        local_140 = sVar14;
                    }
                    else if (iVar24 == 2) {
                        local_148 = 0x23 - sVar28;
                        local_140 = 0x21;
                    }
                    else if (iVar24 == 3) {
                        local_148 = sVar14;
                        local_140 = 0x23 - sVar28;
                    }
                    if (iVar24 == 0) {
                        local_170 = 0x21;
                        local_178 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_178 = 1;
                        local_170 = sVar28;
                    }
                    else if (iVar24 == 2) {
                        local_178 = 0x21;
                        local_170 = 0x22 - sVar28;
                    }
                    else if (iVar24 == 3) {
                        local_178 = 0x22 - sVar28;
                        local_170 = 1;
                    }
                    sVar15 = local_170 * 0x23 + local_178;
                    if (iVar24 == 0) {
                        local_168 = sVar28 + -1;
                        local_160 = 0x22;
                    }
                    else if (iVar24 == 1) {
                        local_160 = sVar28 + -1;
                        local_168 = 0;
                    }
                    else if (iVar24 == 2) {
                        local_160 = 0x23 - sVar28;
                        local_168 = 0x22;
                    }
                    else if (iVar24 == 3) {
                        local_168 = 0x23 - sVar28;
                        local_160 = 0;
                    }
                    sVar16 = local_160 * 0x23 + local_168;
                    if (iVar24 == 0) {
                        local_158 = 0x22;
                        local_150 = sVar28;
                    }
                    else if (iVar24 == 1) {
                        local_158 = sVar28;
                        local_150 = 0;
                    }
                    else if (iVar24 == 2) {
                        local_158 = 0x22 - sVar28;
                        local_150 = 0x22;
                    }
                    else if (iVar24 == 3) {
                        local_158 = 0;
                        local_150 = 0x22 - sVar28;
                    }
                    *psVar20 = local_148 * 0x23 + local_140;
                    psVar20[1] = sVar16;
                    psVar20[2] = sVar15;
                    psVar20[3] = sVar15;
                    psVar20[4] = sVar16;
                    psVar20[5] = local_158 * 0x23 + local_150;
                    sVar28 = sVar28 + 1;
                    lVar10 = lVar10 + -1;
                    psVar6 = psVar20 + 6;
                } while (lVar10 != 0);
                if (iVar24 == 0) {
                    local_138 = 0;
                    local_130 = 0;
                }
                else if (iVar24 == 1) {
                    local_138 = 0x22;
                    local_130 = 0;
                }
                else if (iVar24 == 2) {
                    local_138 = 0;
                    local_130 = 0x22;
                }
                else if (iVar24 == 3) {
                    local_138 = 0x22;
                    local_130 = 0x22;
                }
                if (iVar24 == 0) {
                    local_128 = 0x22;
                    local_120 = 0;
                }
                else if (iVar24 == 1) {
                    local_128 = 0x22;
                    local_120 = 0x22;
                }
                else if (iVar24 == 2) {
                    local_128 = 0;
                    local_120 = 0;
                }
                else if (iVar24 == 3) {
                    local_128 = 0;
                    local_120 = 0x22;
                }
                sVar28 = local_120 * 0x23 + local_128;
                if (iVar24 == 0) {
                    local_118 = 0;
                    local_110 = 0x22;
                }
                else if (iVar24 == 1) {
                    local_118 = 0;
                    local_110 = 0;
                }
                else if (iVar24 == 2) {
                    local_118 = 0x22;
                    local_110 = 0x22;
                }
                else if (iVar24 == 3) {
                    local_118 = 0x22;
                    local_110 = 0;
                }
                sVar14 = local_110 * 0x23 + local_118;
                if (iVar24 == 0) {
                    local_100 = 0x22;
                    local_108 = 0x22;
                }
                else if (iVar24 == 1) {
                    local_100 = 0;
                    local_108 = 0x22;
                }
                else if (iVar24 == 2) {
                    local_100 = 0x22;
                    local_108 = 0;
                }
                else if (iVar24 == 3) {
                    local_100 = 0;
                    local_108 = 0;
                }
                psVar20[7] = sVar14;
                psVar20[10] = sVar14;
                psVar20[6] = local_130 * 0x23 + local_138;
                psVar20[0xb] = local_108 * 0x23 + local_100;
                psVar20[8] = sVar28;
                psVar20[9] = sVar28;
                (**(code **)(**(longlong **)(local_res8 + 0x120 + local_d8 * 8) + 0x40))();
            }
            uVar25 = (ulonglong)(iVar24 + 1U);
            local_d8 = local_d8 + 1;
            param_1 = local_res8;
        } while (iVar24 + 1U < 4);
    }
    uVar25 = 0;
    puVar4 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))
            (*(longlong **)(param_1 + 0x158),0,0,2);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0x10002;
        puVar4[1] = 0x10000;
        puVar4[2] = 0x30002;
        puVar4[3] = 0x70001;
        puVar4[4] = 0x70005;
        puVar4[5] = 0x30001;
        puVar4[6] = 0x40007;
        puVar4[7] = 0x40005;
        puVar4[8] = 0x60007;
        puVar4[9] = 6;
        puVar4[10] = 4;
        puVar4[0xb] = 0x20006;
        puVar4[0xc] = 0x10004;
        puVar4[0xd] = 0x10005;
        puVar4[0xe] = 4;
        puVar4[0xf] = 0x60003;
        *(undefined8 *)(puVar4 + 0x10) = 0x2000300060007;
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x40))();
    }
    puVar7 = (undefined8 *)
            (**(code **)(**(longlong **)(param_1 + 0x160) + 0x38))
            (*(longlong **)(param_1 + 0x160),0,0,2);
    if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x3000100010000;
        puVar7[1] = 0x200020003;
        puVar7[2] = 0x7000500050004;
        puVar7[3] = 0x4000600060007;
        puVar7[4] = 0x5000100040000;
        puVar7[5] = 0x7000300060002;
        (**(code **)(**(longlong **)(param_1 + 0x160) + 0x40))();
    }
    puVar4 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x168) + 0x48))
            (*(longlong **)(param_1 + 0x168),0,&local_res8,2);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x50))(*(longlong **)(param_1 + 0x168),0);
    }
    puVar4 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x170) + 0x48))
            (*(longlong **)(param_1 + 0x170),0,&local_res8,2);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0x7f7f7f7f;
        (**(code **)(**(longlong **)(param_1 + 0x170) + 0x50))(*(longlong **)(param_1 + 0x170),0);
    }
    puVar4 = (undefined4 *)
            (**(code **)(**(longlong **)(param_1 + 0x178) + 0x48))
            (*(longlong **)(param_1 + 0x178),0,&local_res8,2);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xffffffff;
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x50))(*(longlong **)(param_1 + 0x178),0);
    }
    pfVar8 = (float *)(**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x38))
            (*(longlong **)(param_1 + 0x1a0),0,0,2);
    if (pfVar8 != (float *)0x0) {
        *pfVar8 = fVar36;
        pfVar8[1] = 300.0;
        pfVar8[2] = fVar36;
        FUN_1401c96d0(&local_res8);
        FUN_1401c96d0((longlong)&local_res8 + 2);
        FUN_1401c96d0((longlong)&local_res8 + 4);
        pfVar8[3] = (float)local_res8;
        *(undefined2 *)(pfVar8 + 4) = local_res8._4_2_;
        FUN_1401c96d0(&local_res8);
        FUN_1401c96d0((longlong)&local_res8 + 2);
        fVar18 = -5.0;
        pfVar8[5] = (float)local_res8;
        fVar35 = 3.0;
        pfVar8 = pfVar8 + 6;
        uVar19 = uVar25;
        do {
            pfVar22 = pfVar8;
            FUN_1408fc950();
            fVar34 = extraout_XMM0_Da * fVar35;
            FUN_1408fe3d0();
            *pfVar22 = fVar34;
            pfVar22[1] = fVar18;
            pfVar22[2] = extraout_XMM0_Da_00 * fVar35;
            FUN_1401c96d0(&local_res10);
            FUN_1401c96d0((longlong)&local_res10 + 2);
            FUN_1401c96d0(&uStackX20);
            pfVar22[3] = local_res10;
            *(undefined2 *)(pfVar22 + 4) = uStackX20;
            FUN_1401c96d0(&local_res8);
            FUN_1401c96d0((longlong)&local_res8 + 2);
            uVar30 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar30;
            pfVar22[5] = (float)local_res8;
            pfVar8 = pfVar22 + 6;
        } while (uVar30 < 0x20);
        pfVar22[6] = fVar36;
        pfVar22[7] = -305.0;
        pfVar22[8] = fVar36;
        FUN_1401c96d0(&local_res8);
        FUN_1401c96d0((longlong)&local_res8 + 2);
        FUN_1401c96d0((longlong)&local_res8 + 4);
        pfVar22[9] = (float)local_res8;
        *(undefined2 *)(pfVar22 + 10) = local_res8._4_2_;
        FUN_1401c96d0(&local_res8);
        FUN_1401c96d0((longlong)&local_res8 + 2);
        pfVar22[0xb] = (float)local_res8;
        (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x40))();
    }
    psVar6 = (short *)(**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x38))
            (*(longlong **)(param_1 + 0x1b0),0,0,2);
    if (psVar6 != (short *)0x0) {
        uVar26 = 1;
        uVar30 = 1;
        do {
            uVar17 = (ushort)uVar30;
            psVar6[2] = uVar17;
            uVar30 = uVar30 + 1;
            *psVar6 = 0;
            psVar20 = psVar6 + 3;
            psVar6[1] = (uVar17 & 0x1f) + 1;
            psVar6 = psVar20;
        } while (uVar30 < 0x21);
        do {
            uVar17 = (ushort)uVar26;
            psVar20[2] = uVar17;
            uVar26 = uVar26 + 1;
            psVar20[1] = 0x21;
            *psVar20 = (uVar17 & 0x1f) + 1;
            psVar20 = psVar20 + 3;
        } while (uVar26 < 0x21);
        (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x40))();
    }
    if (((*(uint *)(param_1 + 0x10) & 0x4800) != 0) &&
        (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x38))(), lVar10 != 0)) {
        uVar17 = 2;
        puVar27 = (ushort *)(lVar10 + 4);
        do {
            uVar9 = uVar17 - 1;
            *puVar27 = uVar17;
            puVar27[-1] = uVar17 - 2;
            uVar3 = uVar17 + 1;
            puVar27[1] = uVar17;
            uVar17 = uVar17 + 4;
            puVar27[-2] = uVar9;
            puVar27[3] = uVar9;
            puVar27[2] = uVar3;
            puVar27 = puVar27 + 6;
        } while (uVar17 < 0xfa2);
        (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x40))();
    }
    if (((*(uint *)(param_1 + 0x14) & 0x1800000) != 0) &&
        (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x48))(), lVar10 != 0)) {
        lVar29 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x18))();
        uVar19 = uVar25;
        if (*(int *)(lVar29 + 8) != 0) {
            do {
                uVar13 = uVar25;
                if (*(int *)(lVar29 + 4) != 0) {
                    do {
                        uVar30 = (uint)uVar13 & 0x18;
                        if ((uVar13 & 0x18) == 0) {
                            *(undefined4 *)(lVar10 + uVar13 * 4) = 0xff0000;
                        }
                        else if (uVar30 == 8) {
                            *(undefined4 *)(lVar10 + uVar13 * 4) = 0xff00;
                        }
                        else if (uVar30 == 0x10) {
                            *(undefined4 *)(lVar10 + uVar13 * 4) = 0xff;
                        }
                        else if (uVar30 == 0x18) {
                            *(undefined4 *)(lVar10 + uVar13 * 4) = 0xff000000;
                        }
                        uVar30 = (uint)uVar13 + 1;
                        uVar13 = (ulonglong)uVar30;
                    } while (uVar30 < *(uint *)(lVar29 + 4));
                }
                uVar30 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar30;
                lVar10 = lVar10 + (local_res8 & 0xffffffff);
            } while (uVar30 < *(uint *)(lVar29 + 8));
        }
        (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x50))();
    }
    if (((*(uint *)(param_1 + 0x14) & 0x100000) != 0) &&
        (psVar6 = (short *)(**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x38))(), uVar19 = uVar25,
                psVar6 != (short *)0x0)) {
        do {
            psVar20 = psVar6;
            uVar13 = uVar25;
            do {
                sVar28 = (short)uVar19 * 0x21 + (short)uVar13;
                uVar30 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar30;
                psVar6 = psVar20 + 0xc;
                psVar20[1] = sVar28;
                psVar20[5] = sVar28;
                sVar14 = sVar28 + 0x11;
                psVar20[4] = sVar28 + 1;
                psVar20[0xb] = sVar28 + 1;
                *psVar20 = sVar14;
                psVar20[3] = sVar14;
                psVar20[6] = sVar14;
                psVar20[9] = sVar14;
                psVar20[2] = sVar28 + 0x21;
                psVar20[7] = sVar28 + 0x21;
                psVar20[8] = sVar28 + 0x22;
                psVar20[10] = sVar28 + 0x22;
                psVar20 = psVar6;
            } while (uVar30 < 0x10);
            uVar30 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar30;
        } while (uVar30 < 0x10);
        (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x40))();
    }
    pplVar23 = (longlong **)(param_1 + 0x2b0);
    lVar10 = 0xb;
    do {
        if (*pplVar23 != (longlong *)0x0) {
            (**(code **)(**pplVar23 + 8))();
            *pplVar23 = (longlong *)0x0;
        }
        pplVar23 = pplVar23 + 1;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    for (lVar10 = *(longlong *)(param_1 + 0x230); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x78))
    {
        // WARNING: Read-only address (ram,0x000140b7a620) is written
        FUN_140366cd0(lVar10);
    }
    // WARNING: Read-only address (ram,0x000140b7a620) is written
    return;
}



undefined8 FUN_140350420(longlong param_1,undefined8 param_2)

{
    int iVar1;

    if (*(int *)(param_1 + 0x44) != 0) {
        return 1;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
    if (((iVar1 != 0) &&
         (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                 (*(longlong **)(param_1 + 0x58),param_2), iVar1 != 0)) &&
        (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                (*(longlong **)(param_1 + 0x60),param_2), iVar1 != 0)) {
        if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))
                    (*(longlong **)(param_1 + 0x68),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))
                    (*(longlong **)(param_1 + 0x70),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))
                    (*(longlong **)(param_1 + 0x88),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                    (*(longlong **)(param_1 + 0x90),param_2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))
                    (*(longlong **)(param_1 + 0xa8),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x20))
                    (*(longlong **)(param_1 + 0xb0),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                    (*(longlong **)(param_1 + 0x98),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))
                    (*(longlong **)(param_1 + 0xa0),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 400) + 0x20))
                    (*(longlong **)(param_1 + 400),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))
                    (*(longlong **)(param_1 + 0x198),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))
                        (*(longlong **)(param_1 + 0xb8),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))
                        (*(longlong **)(param_1 + 0xc0),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x20))
                        (*(longlong **)(param_1 + 200),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x20))
                        (*(longlong **)(param_1 + 0xd0),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
            }
        }
        if ((*(uint *)(param_1 + 0x10) & 0x4001) == 0x4001) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x20))
                    (*(longlong **)(param_1 + 0x140),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x20))
                    (*(longlong **)(param_1 + 0x148),param_2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        if (((*(uint *)(param_1 + 0x14) & 0x4000000) != 0) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x20))
                    (*(longlong **)(param_1 + 0x150),param_2), iVar1 == 0)) {
            return 0;
        }
        if (((*(uint *)(param_1 + 0x10) & 0x880) == 0x880) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))
                    (*(longlong **)(param_1 + 0x180),param_2), iVar1 == 0)) {
            return 0;
        }
        if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            if ((*(byte *)(param_1 + 0x14) & 0x88) != 0) {
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x20))
                        (*(longlong **)(param_1 + 0xe0),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x20))
                        (*(longlong **)(param_1 + 0xe8),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
            }
            if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
                if (((*(uint *)(param_1 + 0x14) & 0x2200004) != 0) &&
                    (iVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x20))
                            (*(longlong **)(param_1 + 0xf8),param_2), iVar1 == 0)) {
                    return 0;
                }
                if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && ((*(uint *)(param_1 + 0x14) & 0x200) != 0))
                    && (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
                        (*(longlong **)(param_1 + 0x100),param_2), iVar1 == 0)) {
                    return 0;
                }
            }
        }
        if (((byte)*(undefined4 *)(param_1 + 0x10) & 9) == 9) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))
                    (*(longlong **)(param_1 + 0x108),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x20))
                    (*(longlong **)(param_1 + 0x110),param_2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        if (((*(byte *)(param_1 + 0x10) & 0x10) != 0) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x20))
                    (*(longlong **)(param_1 + 0x188),param_2), iVar1 == 0)) {
            return 0;
        }
        if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x20))
                    (*(longlong **)(param_1 + 0x1c0),param_2), iVar1 == 0)) {
            return 0;
        }
        if ((*(uint *)(param_1 + 0x10) & 0x4800) != 0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x20))
                    (*(longlong **)(param_1 + 0x1d0),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))
                    (*(longlong **)(param_1 + 0x1d8),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x20))
                    (*(longlong **)(param_1 + 0x1e0),param_2);
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x20))
                    (*(longlong **)(param_1 + 0x1e8),param_2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x20))
                (*(longlong **)(param_1 + 0x220),param_2);
        if ((iVar1 != 0) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x20))
                    (*(longlong **)(param_1 + 0x228),param_2), iVar1 != 0)) {
            if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0x200) + 0x20))
                        (*(longlong **)(param_1 + 0x200),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0x20))
                        (*(longlong **)(param_1 + 0x208),param_2);
                if (iVar1 == 0) {
                    return 0;
                }
            }
            *(undefined4 *)(param_1 + 0x44) = 1;
            return 1;
        }
    }
    return 0;
}



int FUN_1403508e0(longlong param_1,undefined4 param_2,longlong **param_3)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_14018b280(0x68);
    if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_LAB_140b55048;
        *(undefined4 *)(plVar2 + 1) = 1;
        *plVar2 = (longlong)&PTR_LAB_140b65a38;
        plVar2[4] = 0;
        plVar2[10] = 0;
        plVar2[9] = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        plVar2[2] = param_1;
        *(undefined4 *)(plVar2 + 3) = param_2;
    }
    iVar1 = FUN_140371ba0(plVar2);
    if (iVar1 < 0) {
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,1);
        }
    }
    else {
        *param_3 = plVar2;
        iVar1 = 0;
    }
    return iVar1;
}



int FUN_140350990(longlong param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *local_res8;

    lVar1 = param_1 + (longlong)(int)param_2 * 8;
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar1 + 0x310) == 0) {
        iVar2 = FUN_1403508e0(param_1,param_2,&local_res8);
        plVar4 = local_res8;
        if (iVar2 < 0) goto LAB_1403509f6;
    }
    plVar4 = local_res8;
    lVar3 = FUN_14018b280(0x40);
    if (lVar3 != 0) {
        lVar3 = FUN_140371f80(lVar3,*(undefined8 *)(lVar1 + 0x310));
    }
    *param_3 = lVar3;
    iVar2 = 0;
    LAB_1403509f6:
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    return iVar2;
}



ulonglong FUN_140350a20(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    if (param_4 == (longlong *)0x0) {
        return 0x80070057;
    }
    if (param_3 == 0) {
        uVar4 = (ulonglong)*(int *)(param_1 + 0x238 + (longlong)(int)param_2 * 4);
        lVar1 = param_1 + uVar4 * 8;
        lVar2 = *(longlong *)(lVar1 + 0x268);
        if (lVar2 == 0) {
            puVar5 = (undefined8 *)FUN_14018b280(0x68);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = &PTR_LAB_140b65a50;
                puVar5[7] = 0;
                puVar5[8] = 0;
                puVar5[9] = 0;
                puVar5[10] = 0;
                puVar5[5] = 0;
                *(undefined4 *)(puVar5 + 6) = 0;
                puVar5[0xb] = 0;
                puVar5[0xc] = 0;
                *(undefined4 *)(puVar5 + 1) = 1;
                puVar5[2] = param_1;
                *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
                puVar5[4] = 0;
            }
            uVar3 = FUN_1403722d0(puVar5,uVar4 & 0xffffffff);
            if ((int)uVar3 < 0) {
                if (puVar5 == (undefined8 *)0x0) {
                    return (ulonglong)uVar3;
                }
                FUN_1403721f0(puVar5);
                FUN_14018b900(puVar5,0);
                return (ulonglong)uVar3;
            }
            *param_4 = (longlong)puVar5;
        }
        else {
            *param_4 = lVar2;
            (**(code **)**(undefined8 **)(lVar1 + 0x268))();
        }
        uVar4 = 0;
    }
    else {
        lVar1 = param_1 + (longlong)(int)param_2 * 8;
        if (*(longlong *)(lVar1 + 0x2b0) != 0) {
            *param_4 = *(longlong *)(lVar1 + 0x2b0);
            (**(code **)**(undefined8 **)(lVar1 + 0x2b0))();
            return 1;
        }
        uVar4 = FUN_140350a20(param_1,param_2,0,lVar1 + 0x2b0);
        if (-1 < (int)uVar4) {
            *param_4 = *(longlong *)(lVar1 + 0x2b0);
            (**(code **)**(undefined8 **)(lVar1 + 0x2b0))();
            return 0;
        }
    }
    return uVar4;
}



undefined8 FUN_140350b90(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x378))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x370) + (uVar3 % *(ulonglong *)(param_1 + 0x368)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140350bf1:
            uVar4 = FUN_14024bdc0(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x380))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140350bf1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140350c30(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x3a8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x3a0) + (uVar3 % *(ulonglong *)(param_1 + 0x398)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140350c91:
            uVar4 = FUN_14024db80(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x3b0))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140350c91;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140350cd0(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x3d8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x3d0) + (uVar3 % *(ulonglong *)(param_1 + 0x3c8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140350d31:
            uVar4 = FUN_14024b540(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x3e0))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140350d31;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140350d70(undefined8 param_1,undefined4 *param_2)

{
    ulonglong **ppuVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    undefined8 uVar10;
    ulonglong *puVar11;

    lVar5 = DAT_140c65878;
    plVar2 = (longlong *)(DAT_140c65878 + 0x3c0);
    uVar7 = (**(code **)(DAT_140c65878 + 0x3d8))(param_2);
    puVar11 = *(ulonglong **)
            (*(longlong *)(lVar5 + 0x3d0) + (uVar7 % *(ulonglong *)(lVar5 + 0x3c8)) * 8);
    do {
        if (puVar11 == (ulonglong *)0x0) {
            LAB_140350dcc:
            puVar8 = (ulonglong *)FUN_14018b280(0x20);
            puVar9 = (ulonglong *)0x0;
            puVar11 = puVar9;
            if (puVar8 != (ulonglong *)0x0) {
                puVar8[2] = 0;
                puVar8[3] = 0;
                puVar8[1] = 0;
                puVar11 = puVar8;
            }
            ppuVar3 = (ulonglong **)(lVar5 + 1000);
            if (puVar11[2] == 0) {
                puVar11[2] = (ulonglong)ppuVar3;
                ppuVar1 = (ulonglong **)(puVar11 + 3);
                *ppuVar1 = *ppuVar3;
                *ppuVar3 = puVar11;
                if (*ppuVar1 != (ulonglong *)0x0) {
                    (*ppuVar1)[2] = (ulonglong)ppuVar1;
                }
            }
            if (*plVar2 == *(longlong *)(lVar5 + 0x3c8)) {
                FUN_1400290d0(plVar2);
            }
            uVar7 = (**(code **)(lVar5 + 0x3d8))(param_2);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(lVar5 + 0x3d0) + (uVar7 % *(ulonglong *)(lVar5 + 0x3c8)) * 8);
            puVar8 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar8 != (ulonglong *)0x0) {
                puVar9 = *ppuVar3;
                *puVar8 = uVar7;
                puVar8[1] = (ulonglong)puVar9;
                uVar4 = *param_2;
                puVar8[3] = (ulonglong)puVar11;
                *(undefined4 *)(puVar8 + 2) = uVar4;
                puVar9 = puVar8;
            }
            *ppuVar3 = puVar9;
            *plVar2 = *plVar2 + 1;
            LAB_140350e94:
            FUN_1403514f0(puVar11,param_2,&PTR_u_WorldLayer_140a7d3e8);
            lVar5 = *(longlong *)(lVar5 + 0x230);
            do {
                if (lVar5 == 0) {
                    return 0;
                }
                uVar7 = (**(code **)(lVar5 + 0x7e8))(param_2);
                for (puVar11 = *(ulonglong **)
                        (*(longlong *)(lVar5 + 0x7e0) + (uVar7 % *(ulonglong *)(lVar5 + 0x7d8)) * 8)
                        ; puVar11 != (ulonglong *)0x0; puVar11 = (ulonglong *)puVar11[1]) {
                    if ((uVar7 == *puVar11) && (iVar6 = (**(code **)(lVar5 + 0x7f0))(param_2), iVar6 != 0)) {
                        if (puVar11 + 3 != (ulonglong *)0x0) {
                            uVar10 = FUN_140372fe0(puVar11[3]);
                            if ((int)uVar10 < 0) {
                                return uVar10;
                            }
                            uVar10 = FUN_140367360(lVar5);
                            if ((int)uVar10 < 0) {
                                return uVar10;
                            }
                        }
                        break;
                    }
                }
                lVar5 = *(longlong *)(lVar5 + 0x78);
            } while( true );
        }
        if ((uVar7 == *puVar11) && (iVar6 = (**(code **)(lVar5 + 0x3e0))(param_2), iVar6 != 0)) {
            if ((ulonglong **)(puVar11 + 3) != (ulonglong **)0x0) {
                puVar11 = (ulonglong *)puVar11[3];
                goto LAB_140350e94;
            }
            goto LAB_140350dcc;
        }
        puVar11 = (ulonglong *)puVar11[1];
    } while( true );
}



undefined8 FUN_140350f40(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x408))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x400) + (uVar3 % *(ulonglong *)(param_1 + 0x3f8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140350fa1:
            uVar4 = FUN_14024b100(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x410))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140350fa1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140350fe0(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x438))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x430) + (uVar3 % *(ulonglong *)(param_1 + 0x428)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140351041:
            uVar4 = FUN_14024cec0(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x440))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140351041;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140351080(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x468))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x460) + (uVar3 % *(ulonglong *)(param_1 + 0x458)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1403510e1:
            uVar4 = FUN_14024ca80(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x470))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_1403510e1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140351120(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c65878;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c65878 + 0x498))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar2 + 0x490) + (uVar4 % *(ulonglong *)(lVar2 + 0x488)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140351182:
            uVar5 = FUN_140249bc0(local_res10[0]);
            return uVar5;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x4a0))(local_res10,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140351182;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1403511c0(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c65878;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c65878 + 0x4c8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar2 + 0x4c0) + (uVar4 % *(ulonglong *)(lVar2 + 0x4b8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140351222:
            uVar5 = FUN_14024a000(local_res10[0]);
            return uVar5;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x4d0))(local_res10,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_140351222;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_140351260(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar2 != 0) {
                plVar1 = (longlong *)(lVar2 + 0x20);
                lVar2 = *(longlong *)(lVar2 + 8);
                FUN_1400035c0(*plVar1 + 0x350,0);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



undefined8 FUN_1403512d0(longlong param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    puVar1 = (undefined4 *)FUN_14024d360(param_2);
    if (puVar1 == (undefined4 *)0x0) {
        return 0x80004005;
    }
    fVar4 = -1.0;
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    fVar5 = 1.0;
    fVar6 = 0.6931472;
    *(undefined8 *)(param_1 + 0x10) = 0;
    fVar7 = 0.5;
    *(undefined4 *)(param_1 + 0x18) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1c) = puVar1[2];
    *(undefined4 *)(param_1 + 0x20) = puVar1[3];
    *(undefined4 *)(param_1 + 0x24) = puVar1[4];
    fVar3 = *(float *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = puVar1[5];
    *(undefined4 *)(param_1 + 0x2c) = puVar1[6];
    *(undefined4 *)(param_1 + 0x30) = puVar1[7];
    *(undefined4 *)(param_1 + 0x34) = puVar1[8];
    if (fVar3 <= *(float *)(param_1 + 0x20)) {
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
        fVar2 = -1.0 / ((*(float *)(param_1 + 0x20) + fVar3) * 0.5);
        *(float *)(param_1 + 0x50) = fVar2;
        fVar3 = (float)FUN_1408fc7f0(fVar2 * fVar3 * 0.6931472);
        *(float *)(param_1 + 0x54) = fVar5 / (fVar3 - fVar5);
    }
    fVar3 = *(float *)(param_1 + 0x1c);
    if (fVar3 <= *(float *)(param_1 + 0x18)) {
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
        fVar2 = fVar4 / ((*(float *)(param_1 + 0x18) + fVar3) * fVar7);
        *(float *)(param_1 + 0x40) = fVar2;
        fVar3 = (float)FUN_1408fc7f0(fVar2 * fVar3 * fVar6);
        *(float *)(param_1 + 0x44) = fVar5 / (fVar3 - fVar5);
    }
    fVar3 = *(float *)(param_1 + 0x34);
    if (fVar3 <= *(float *)(param_1 + 0x30)) {
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    else {
        fVar2 = fVar4 / ((*(float *)(param_1 + 0x30) + fVar3) * fVar7);
        *(float *)(param_1 + 0x70) = fVar2;
        fVar3 = (float)FUN_1408fc7f0(fVar2 * fVar3 * fVar6);
        *(float *)(param_1 + 0x74) = fVar5 / (fVar3 - fVar5);
    }
    fVar3 = *(float *)(param_1 + 0x2c);
    if (fVar3 <= *(float *)(param_1 + 0x28)) {
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
        fVar4 = fVar4 / ((*(float *)(param_1 + 0x28) + fVar3) * fVar7);
        *(float *)(param_1 + 0x60) = fVar4;
        fVar3 = (float)FUN_1408fc7f0(fVar4 * fVar3 * fVar6);
        *(float *)(param_1 + 100) = fVar5 / (fVar3 - fVar5);
    }
    return 0;
}



int FUN_1403514c0(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *)0x0) {
            *param_1 = &PTR_LAB_140b657e8;
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1403514f0(int *param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    short sVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    int iVar11;
    short *psVar12;
    ulonglong uVar13;
    uint uVar14;
    longlong *plVar15;
    longlong local_res8;

    uVar3 = *(undefined8 *)(param_1 + 2);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    local_res8 = 2;
    do {
        lVar6 = *(longlong *)(param_1 + 2);
        if (lVar6 != 0) {
            FUN_1407db590(lVar6,param_2);
        }
        uVar13 = 0;
        psVar12 = (short *)(lVar6 + (ulonglong)*(uint *)(param_3 + 8));
        if (*(int *)(param_3 + 0xc) != 0) {
            do {
                lVar10 = 0;
                lVar6 = *(longlong *)(param_3 + 0x10) + uVar13 * 0x28;
                sVar2 = *(short *)(*(longlong *)(param_3 + 0x10) + 8 + uVar13 * 0x28);
                if (sVar2 == 0x82) {
                    uVar5 = *(ulonglong *)((ulonglong)*(uint *)(lVar6 + 0xc) + param_2);
                    if (((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) && (DAT_140c3fe68 + uVar5 != 0)) {
                        lVar8 = lVar10;
                        if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                            lVar8 = DAT_140c3fe68 + uVar5;
                        }
                        lVar4 = -1;
                        do {
                            lVar1 = lVar4 * 2;
                            lVar4 = lVar4 + 1;
                        } while (*(short *)(lVar8 + 2 + lVar1) != 0);
                        uVar14 = (int)lVar4 * 2 + 2;
                        if (*(longlong *)(param_1 + 2) != 0) {
                            if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                                lVar10 = uVar5 + DAT_140c3fe68;
                            }
                            FUN_1407db590(psVar12,lVar10);
                            plVar15 = (longlong *)((ulonglong)*(uint *)(lVar6 + 0xc) + *(longlong *)(param_1 + 2))
                                    ;
                            if (psVar12 == (short *)0x0) {
                                *plVar15 = 0;
                                uVar5 = (ulonglong)uVar14;
                                goto LAB_140351709;
                            }
                            sVar2 = *psVar12;
                            lVar6 = 0;
                            while (sVar2 != 0) {
                                lVar6 = lVar6 + 1;
                                sVar2 = psVar12[lVar6];
                            }
                            lVar10 = (longlong)psVar12 - DAT_140c3fe68;
                            if (DAT_140c3fe70 < (ulonglong)(((longlong)psVar12 - DAT_140c3fe68) + lVar6 * 2)) {
                                lVar10 = 0;
                            }
                            *plVar15 = lVar10;
                        }
                        uVar5 = (ulonglong)uVar14;
                        LAB_140351709:
                        psVar12 = (short *)((longlong)psVar12 + uVar5);
                    }
                }
                else if ((sVar2 == 0x80) && ((*(byte *)(lVar6 + 0x18) & 0x10) == 0)) {
                    plVar15 = (longlong *)((ulonglong)*(uint *)(lVar6 + 0xc) + param_2);
                    lVar8 = *plVar15;
                    if (lVar8 != 0) {
                        if (*(longlong *)(param_1 + 2) != 0) {
                            if ((ulonglong)*(uint *)(plVar15 + 1) + lVar8 <= DAT_140c3fe70) {
                                lVar10 = DAT_140c3fe68 + lVar8;
                            }
                            FUN_1407db590(psVar12,lVar10);
                            uVar14 = *(uint *)(plVar15 + 1);
                            plVar9 = (longlong *)((ulonglong)*(uint *)(lVar6 + 0xc) + *(longlong *)(param_1 + 2));
                            if (((psVar12 == (short *)0x0) || (uVar14 == 0)) ||
                                (DAT_140c3fe70 < ((longlong)psVar12 - DAT_140c3fe68) + (ulonglong)uVar14)) {
                                *(undefined4 *)(plVar9 + 1) = 0;
                                *plVar9 = 0;
                            }
                            else {
                                *plVar9 = (longlong)psVar12 - DAT_140c3fe68;
                                *(uint *)(plVar9 + 1) = uVar14;
                            }
                        }
                        uVar5 = (ulonglong)*(uint *)(plVar15 + 1);
                        goto LAB_140351709;
                    }
                }
                uVar14 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(param_3 + 0xc));
        }
        if (*(longlong *)(param_1 + 2) == 0) {
            iVar11 = (int)psVar12 - param_1[2];
            *param_1 = iVar11;
            uVar7 = FUN_14018b280(iVar11,0);
            *(undefined8 *)(param_1 + 2) = uVar7;
        }
        local_res8 = local_res8 + -1;
        if (local_res8 == 0) {
            FUN_14018b900(uVar3,0);
            return;
        }
    } while( true );
}



char FUN_140351780(float *param_1,float *param_2,float *param_3,float *param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    bool bVar4;

    fVar1 = *param_1;
    fVar2 = *param_3;
    fVar3 = *param_2;
    bVar4 = fVar2 * param_4[1] + fVar3 < fVar1;
    if (fVar1 <= fVar2 * *param_4 + fVar3) {
        if (bVar4) {
            param_4[1] = (fVar1 - fVar3) / fVar2;
        }
    }
    else {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar1 - fVar3) / fVar2;
    }
    fVar1 = *param_3;
    fVar2 = *param_2;
    fVar3 = param_1[4];
    bVar4 = fVar3 < fVar1 * param_4[1] + fVar2;
    if (fVar1 * *param_4 + fVar2 <= fVar3) {
        if (bVar4) {
            param_4[1] = (fVar3 - fVar2) / fVar1;
        }
    }
    else {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar3 - fVar2) / fVar1;
    }
    fVar1 = param_3[1];
    fVar2 = param_2[1];
    fVar3 = param_1[1];
    bVar4 = fVar1 * param_4[1] + fVar2 < fVar3;
    if (fVar3 <= fVar1 * *param_4 + fVar2) {
        if (bVar4) {
            param_4[1] = (fVar3 - fVar2) / fVar1;
        }
    }
    else {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar3 - fVar2) / fVar1;
    }
    fVar1 = param_3[1];
    fVar2 = param_2[1];
    fVar3 = param_1[5];
    bVar4 = fVar3 < fVar1 * param_4[1] + fVar2;
    if (fVar1 * *param_4 + fVar2 <= fVar3) {
        if (bVar4) {
            param_4[1] = (fVar3 - fVar2) / fVar1;
        }
    }
    else {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar3 - fVar2) / fVar1;
    }
    fVar1 = param_3[2];
    fVar2 = param_2[2];
    fVar3 = param_1[2];
    bVar4 = fVar1 * param_4[1] + fVar2 < fVar3;
    if (fVar3 <= fVar1 * *param_4 + fVar2) {
        if (bVar4) {
            param_4[1] = (fVar3 - fVar2) / fVar1;
        }
    }
    else {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar3 - fVar2) / fVar1;
    }
    fVar1 = param_3[2];
    fVar2 = param_2[2];
    fVar3 = param_1[6];
    bVar4 = fVar3 < fVar1 * param_4[1] + fVar2;
    if (fVar3 < fVar1 * *param_4 + fVar2) {
        if (bVar4) {
            return '\0';
        }
        *param_4 = (fVar3 - fVar2) / fVar1;
        return bVar4 + '\x01';
    }
    if (bVar4) {
        param_4[1] = (fVar3 - fVar2) / fVar1;
    }
    return '\x01';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140351a20(undefined8 *param_1,undefined8 *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;

    *param_1 = &PTR_LAB_140b65830;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_140c42a08;
    *(undefined4 *)((longlong)param_1 + 0x84) = DAT_140c42a08._4_4_;
    *(undefined4 *)(param_1 + 0x11) = (undefined4)DAT_140c42a10;
    *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_140c42a10._4_4_;
    *(undefined4 *)(param_1 + 0x12) = (undefined4)DAT_140c42a18;
    *(undefined4 *)((longlong)param_1 + 0x94) = DAT_140c42a18._4_4_;
    *(undefined4 *)(param_1 + 0x13) = (undefined4)DAT_140c42a20;
    *(undefined4 *)((longlong)param_1 + 0x9c) = DAT_140c42a20._4_4_;
    *(undefined4 *)(param_1 + 0x14) = (undefined4)DAT_140c42a28;
    *(undefined4 *)((longlong)param_1 + 0xa4) = DAT_140c42a28._4_4_;
    *(undefined4 *)(param_1 + 0x15) = (undefined4)DAT_140c42a30;
    *(undefined4 *)((longlong)param_1 + 0xac) = DAT_140c42a30._4_4_;
    *(undefined4 *)(param_1 + 0x16) = DAT_140c42a38;
    *(undefined4 *)((longlong)param_1 + 0xb4) = (undefined4)DAT_140c42a08;
    *(undefined4 *)(param_1 + 0x17) = DAT_140c42a08._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xbc) = (undefined4)DAT_140c42a10;
    *(undefined4 *)(param_1 + 0x18) = DAT_140c42a10._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xc4) = (undefined4)DAT_140c42a18;
    *(undefined4 *)(param_1 + 0x19) = DAT_140c42a18._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xcc) = (undefined4)DAT_140c42a20;
    *(undefined4 *)(param_1 + 0x1a) = DAT_140c42a20._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xd4) = (undefined4)DAT_140c42a28;
    *(undefined4 *)(param_1 + 0x1b) = DAT_140c42a28._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xdc) = (undefined4)DAT_140c42a30;
    *(undefined4 *)(param_1 + 0x1c) = DAT_140c42a30._4_4_;
    *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_140c42a38;
    *(undefined4 *)(param_1 + 0x1d) = (undefined4)DAT_140c42a08;
    *(undefined4 *)((longlong)param_1 + 0xec) = DAT_140c42a08._4_4_;
    *(undefined4 *)(param_1 + 0x1e) = (undefined4)DAT_140c42a10;
    *(undefined4 *)((longlong)param_1 + 0xf4) = DAT_140c42a10._4_4_;
    *(undefined4 *)(param_1 + 0x1f) = (undefined4)DAT_140c42a18;
    *(undefined4 *)((longlong)param_1 + 0xfc) = DAT_140c42a18._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)DAT_140c42a20;
    *(undefined4 *)((longlong)param_1 + 0x104) = DAT_140c42a20._4_4_;
    *(undefined4 *)(param_1 + 0x21) = (undefined4)DAT_140c42a28;
    *(undefined4 *)((longlong)param_1 + 0x10c) = DAT_140c42a28._4_4_;
    *(undefined4 *)(param_1 + 0x22) = (undefined4)DAT_140c42a30;
    *(undefined4 *)((longlong)param_1 + 0x114) = DAT_140c42a30._4_4_;
    *(undefined4 *)(param_1 + 0x23) = DAT_140c42a38;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    *(undefined8 *)((longlong)param_1 + 0x774) = 0;
    *(undefined4 *)((longlong)param_1 + 0x77c) = 0;
    FUN_14036f940();
    FUN_1400522f0(param_1 + 0xf5);
    FUN_1400522f0(param_1 + 0xfa);
    FUN_1400522f0(param_1 + 0xff);
    FUN_1400522f0(param_1 + 0x104);
    FUN_1400522f0(param_1 + 0x109);
    param_1[0x11d] = 0;
    param_1[0x11f] = 0;
    param_1[0x121] = 0;
    param_1[0x123] = 0;
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    param_1[0x126] = 0;
    FUN_14036ff80(param_1 + 0x127);
    param_1[0x133] = 0;
    param_1[0x135] = 0;
    param_1[0x137] = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    param_1[0x149] = 0;
    param_1[0x14a] = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    param_1[0x14b] = 0;
    param_1[0x14d] = 0;
    param_1[0x14e] = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    param_1[0x14f] = 0;
    param_1[0x151] = 0;
    param_1[0x152] = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    param_1[0x153] = 0;
    FUN_1407e4830(param_1 + 0x154,0,0x310);
    FUN_1407e4830(param_1 + 0x1b6,0,0x310);
    param_1[0x219] = 0;
    param_1[0x21c] = 0;
    param_1[0x21d] = 0;
    param_1[0x256] = 0;
    param_1[600] = 0;
    param_1[599] = 0;
    param_1[0x25b] = 0;
    param_1[0x25a] = 0;
    param_1[0x25c] = 0;
    param_1[0x25f] = 0;
    param_1[0x25e] = 0;
    param_1[0x261] = 0;
    param_1[0x260] = 0;
    *(undefined4 *)(param_1 + 0x262) = 6;
    uVar5 = uRam0000000140c784ec;
    uVar4 = uRam0000000140c784e8;
    uVar3 = _DAT_140c784e4;
    *(undefined4 *)(param_1 + 0x264) = _DAT_140c784e0;
    *(undefined4 *)((longlong)param_1 + 0x1324) = uVar3;
    *(undefined4 *)(param_1 + 0x265) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x132c) = uVar5;
    uVar5 = uRam0000000140c784fc;
    uVar4 = uRam0000000140c784f8;
    uVar3 = _DAT_140c784f4;
    *(undefined4 *)(param_1 + 0x266) = _DAT_140c784f0;
    *(undefined4 *)((longlong)param_1 + 0x1334) = uVar3;
    *(undefined4 *)(param_1 + 0x267) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x133c) = uVar5;
    param_1[0x268] = 0;
    param_1[0x26a] = 0;
    param_1[0x269] = 0;
    param_1[0x26d] = 0;
    param_1[0x26c] = 0;
    param_1[0x26f] = 0;
    param_1[0x26e] = 0;
    param_1[0x270] = 0;
    param_1[0x271] = 0;
    param_1[0x272] = 0;
    param_1[0x273] = 0;
    param_1[0x275] = 0;
    param_1[0x276] = 0;
    param_1[0x277] = 0;
    param_1[0x278] = 0;
    param_1[0x279] = 0;
    param_1[0x27a] = 0;
    param_1[0x27b] = 0;
    param_1[0x27c] = 0;
    FUN_1403703f0(param_1 + 0x27d);
    FUN_14036fc30(param_1 + 0x282);
    param_1[0x290] = 0;
    param_1[0x291] = 0;
    param_1[0x292] = 0;
    param_1[0x293] = 0;
    param_1[0x294] = 0;
    param_1[0x295] = 0;
    param_1[0x296] = 0;
    param_1[0x297] = 0;
    param_1[0x298] = 0;
    param_1[0x299] = 0;
    param_1[0x29a] = 0;
    param_1[0x29b] = 0;
    param_1[0x29c] = 0;
    param_1[0x29d] = 0;
    param_1[0x29e] = 0;
    param_1[0x29f] = 0;
    param_1[0x2a0] = 0;
    param_1[0x2a1] = 0;
    param_1[0x2a2] = 0;
    param_1[0x2a3] = 0;
    param_1[0x2a4] = 0;
    param_1[0x2a5] = 0;
    param_1[0x2a6] = 0;
    param_1[0x2aa] = 0;
    param_1[0x2ab] = 0;
    param_1[0x2ac] = 0;
    param_1[0x2ad] = 0;
    param_1[0x2ae] = 0;
    param_1[0x2af] = 0;
    param_1[0x2b3] = 0;
    param_1[0x2b4] = 0;
    param_1[0x2b5] = 0;
    param_1[0x2b6] = 0;
    param_1[0x2b7] = 0;
    param_1[0x2b9] = 0;
    param_1[0x2b8] = 0;
    param_1[699] = 0;
    param_1[0x2ba] = 0;
    FUN_1407e4830(param_1 + 700,0,0x50);
    param_1[0x2c6] = 0;
    *(undefined4 *)(param_1 + 0x2c7) = 9;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    plVar1 = param_1 + 0x2fd;
    param_1[0x2f7] = 0;
    param_1[0x2f8] = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    param_1[0x2fc] = 0;
    param_1[0x2fb] = 0;
    *plVar1 = 0;
    FUN_14036fea0(param_1 + 0x2fe);
    param_1[0x304] = 0;
    param_1[0x305] = 0;
    param_1[0x306] = 0;
    param_1[0x307] = 0;
    param_1[0x308] = 0;
    param_1[0x309] = 0;
    param_1[0x30a] = 0;
    param_1[0x30b] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = param_2;
    (**(code **)*param_2)(param_2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    *(undefined4 *)(param_1 + 0x70) = 0xa8c0;
    param_1[0x11c] = 0;
    *(undefined4 *)(param_1 + 0x11e) = 1;
    *(undefined4 *)(param_1 + 0x120) = 1;
    *(undefined4 *)(param_1 + 0x122) = 1;
    param_1[0x132] = 0;
    *(undefined4 *)(param_1 + 0x134) = 1;
    *(undefined4 *)(param_1 + 0x136) = 1;
    param_1[0x274] = 0;
    param_1[0x287] = 0;
    param_1[0x288] = 0;
    param_1[0x28b] = 0;
    param_1[0x28c] = 0;
    param_1[0x28d] = 0;
    param_1[0x28e] = 0;
    param_1[0x289] = 0;
    param_1[0x28a] = 0;
    param_1[0x28f] = 0;
    param_1[0x140] = 0;
    param_1[0x141] = 0;
    param_1[0x142] = 0;
    param_1[0x143] = 0;
    param_1[0x144] = 0;
    param_1[0x145] = 0;
    param_1[0x146] = 0;
    param_1[0x147] = 0;
    *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
    param_1[0x218] = 0;
    *(undefined4 *)(param_1 + 0x21a) = 0;
    param_1[0x259] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    param_1[0x254] = 0;
    *(undefined4 *)(param_1 + 0x255) = 0x461c4000;
    param_1[0x21b] = 0;
    *(undefined4 *)(param_1 + 0x25d) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2b1) = 0;
    if (param_1[0x2f5] == 0) {
        param_1[0x2f5] = plVar1;
        plVar2 = param_1 + 0x2f6;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)(param_1 + 0x2d4);
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x108) = plVar2;
        }
    }
    param_1[0x2fa] = param_1 + 0x2d4;
    plVar1 = param_2 + 0x46;
    if (param_1[0xe] == 0) {
        param_1[0xe] = plVar1;
        plVar2 = param_1 + 0xf;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x70) = plVar2;
        }
    }
    return param_1;
}



void FUN_1403522c0(undefined8 *param_1)

{
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined *puVar6;
    longlong *plVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined8 local_res18;
    undefined8 local_res20;
    ulonglong in_stack_ffffffffffffffa8;

    *param_1 = &PTR_LAB_140b65830;
    FUN_1403694e0();
    lVar11 = param_1[0x25c];
    while (lVar11 != 0) {
        lVar11 = param_1[0x25c];
        if (lVar11 != 0) {
            FUN_14037b140(lVar11);
            FUN_14018b900(lVar11,0);
        }
        *(int *)(param_1 + 0x25d) = *(int *)(param_1 + 0x25d) + -1;
        lVar11 = param_1[0x25c];
    }
    if (param_1[0x11c] != 0) {
        uVar2 = *(int *)(param_1 + 0x114) * *(int *)((longlong)param_1 + 0x89c);
        if (uVar2 != 0) {
            lVar11 = 0;
            uVar10 = (ulonglong)uVar2;
            do {
                lVar5 = *(longlong *)(lVar11 + param_1[0x11c]);
                if (lVar5 != 0) {
                    FUN_14037c2e0(lVar5);
                    FUN_14018b900(lVar5,0);
                }
                lVar11 = lVar11 + 8;
                uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
        }
        FUN_14018b900(param_1[0x11c],0);
    }
    if (param_1[0x132] != 0) {
        uVar2 = *(int *)((longlong)param_1 + 0x97c) * *(int *)(param_1 + 0x12f);
        if (uVar2 != 0) {
            lVar11 = 0;
            uVar10 = (ulonglong)uVar2;
            do {
                lVar5 = *(longlong *)(lVar11 + param_1[0x132]);
                if (lVar5 != 0) {
                    FUN_14038a230(lVar5);
                    FUN_14018b900(lVar5,0);
                }
                lVar11 = lVar11 + 8;
                uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
        }
        FUN_14018b900(param_1[0x132],0);
    }
    lVar11 = param_1[0x13e];
    while (lVar11 != 0) {
        lVar11 = param_1[0x13e];
        if (lVar11 != 0) {
            FUN_1403535e0(lVar11);
            FUN_14018b900(lVar11,0);
        }
        lVar11 = param_1[0x13e];
    }
    plVar7 = (longlong *)param_1[0x293];
    while (plVar7 != (longlong *)0x0) {
        lVar11 = *plVar7;
        plVar7 = (longlong *)plVar7[0x85];
        (**(code **)(lVar11 + 8))();
    }
    plVar7 = (longlong *)param_1[0x275];
    if (plVar7 != (longlong *)0x0) {
        local_res8 = 0x141def768;
        do {
            plVar3 = (longlong *)(**(code **)(*plVar7 + 0x148))(plVar7);
            if (plVar3 == (longlong *)0x0) {
                puVar4 = &DAT_1409e745c;
            }
            else {
                puVar4 = (undefined *)(**(code **)(*plVar3 + 0x30))(plVar3);
            }
            uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7);
            in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)uVar2;
            FUN_1401a3130(0x14,1,&local_res8,plVar7,in_stack_ffffffffffffffa8,puVar4);
            FUN_140195d70(plVar7 + 0x7a);
            plVar7[2] = 0;
            plVar7 = (longlong *)plVar7[0x93];
        } while (plVar7 != (longlong *)0x0);
    }
    plVar7 = (longlong *)param_1[0x290];
    if (plVar7 != (longlong *)0x0) {
        local_res10 = 0x141def6e0;
        do {
            plVar3 = (longlong *)(**(code **)(*plVar7 + 0x148))(plVar7);
            if (plVar3 == (longlong *)0x0) {
                puVar4 = &DAT_1409e749c;
            }
            else {
                puVar4 = (undefined *)(**(code **)(*plVar3 + 0x30))(plVar3);
            }
            uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7);
            in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)uVar2;
            FUN_1401a3130(0x14,1,&local_res10,plVar7,in_stack_ffffffffffffffa8,puVar4);
            FUN_140195d70(plVar7 + 0x6a);
            plVar7[2] = 0;
            plVar7 = (longlong *)plVar7[0x7f];
        } while (plVar7 != (longlong *)0x0);
    }
    lVar11 = param_1[0x29c];
    if (lVar11 != 0) {
        local_res18 = 0x141def6c8;
        do {
            FUN_1401a3130(0x14,1,&local_res18,lVar11);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            lVar11 = *(longlong *)(lVar11 + 0x370);
        } while (lVar11 != 0);
    }
    lVar11 = param_1[0x29f];
    if (lVar11 != 0) {
        local_res20 = 0x141def708;
        do {
            puVar4 = (undefined *)0x0;
            if (*(longlong **)(lVar11 + 0x140) != (longlong *)0x0) {
                lVar5 = (**(code **)(**(longlong **)(lVar11 + 0x140) + 0x18))();
                puVar4 = *(undefined **)(lVar5 + 0x30);
            }
            puVar6 = &DAT_1409e7444;
            if (puVar4 != (undefined *)0x0) {
                puVar6 = puVar4;
            }
            FUN_1401a3130(0x14,1,&local_res20,lVar11,puVar6);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            lVar11 = *(longlong *)(lVar11 + 0x1d0);
        } while (lVar11 != 0);
    }
    lVar11 = param_1[0x2a3];
    while (lVar11 != 0) {
        FUN_14037a4e0(param_1[0x2a3]);
        lVar11 = param_1[0x2a3];
    }
    lVar11 = param_1[0x2ac];
    while (lVar11 != 0) {
        plVar7 = (longlong *)param_1[0x2ac];
        if (plVar7[5] != 0) {
            FUN_1403762e0();
        }
        plVar7[5] = 0;
        plVar7[2] = 0;
        if ((longlong *)plVar7[0xb] != (longlong *)0x0) {
            *(longlong *)plVar7[0xb] = plVar7[0xc];
        }
        if (plVar7[0xc] != 0) {
            *(longlong *)(plVar7[0xc] + 0x58) = plVar7[0xb];
        }
        plVar7[0xb] = 0;
        plVar7[0xc] = 0;
        (**(code **)*plVar7)(plVar7);
        FUN_14037aa70(plVar7);
        *(undefined4 *)((longlong)plVar7 + 0xc) = 0;
        if (*(float *)(plVar7 + 10) < *(float *)((longlong)plVar7 + 0x44) ||
            *(float *)(plVar7 + 10) == *(float *)((longlong)plVar7 + 0x44)) {
            *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        }
        if (*(float *)((longlong)plVar7 + 0x34) <= *(float *)((longlong)plVar7 + 0x54)) {
            *(uint *)((longlong)plVar7 + 0xc) = *(uint *)((longlong)plVar7 + 0xc) | 2;
        }
        if ((longlong *)plVar7[0xd] != (longlong *)0x0) {
            *(longlong *)plVar7[0xd] = plVar7[0xe];
        }
        if (plVar7[0xe] != 0) {
            *(longlong *)(plVar7[0xe] + 0x68) = plVar7[0xd];
        }
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        (**(code **)(*plVar7 + 8))(plVar7);
        lVar11 = param_1[0x2ac];
    }
    plVar7 = (longlong *)param_1[3];
    if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0xf0))(plVar7,0,0);
        if ((longlong *)param_1[3] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[3] + 8))();
            param_1[3] = 0;
        }
    }
    plVar7 = (longlong *)param_1[4];
    if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0xf0))(plVar7,0,0);
        if ((longlong *)param_1[4] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[4] + 8))();
            param_1[4] = 0;
        }
    }
    uVar10 = 4;
    pplVar8 = (longlong **)(param_1 + 0x144);
    lVar11 = 4;
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pplVar8 = (longlong **)(param_1 + 0x250);
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if ((longlong *)param_1[0x254] == (longlong *)0x0) {
        uVar10 = 0;
    }
    else {
        (**(code **)(*(longlong *)param_1[0x254] + 8))();
        param_1[0x254] = 0;
    }
    if ((longlong *)param_1[0x259] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x259] + 8))();
        param_1[0x259] = uVar10;
    }
    if ((longlong *)param_1[0x256] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x256] + 8))();
        param_1[0x256] = uVar10;
    }
    if ((longlong *)param_1[0x14d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14d] + 8))();
        param_1[0x14d] = uVar10;
    }
    if ((longlong *)param_1[0x14e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14e] + 8))();
        param_1[0x14e] = uVar10;
    }
    if ((longlong *)param_1[0x151] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x151] + 8))();
        param_1[0x151] = uVar10;
    }
    if ((longlong *)param_1[0x152] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x152] + 8))();
        param_1[0x152] = uVar10;
    }
    if ((longlong *)param_1[0x149] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x149] + 8))();
        param_1[0x149] = uVar10;
    }
    if ((longlong *)param_1[0x14a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14a] + 8))();
        param_1[0x14a] = uVar10;
    }
    if ((longlong *)param_1[0x143] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x143] + 8))();
        param_1[0x143] = uVar10;
    }
    if ((longlong *)param_1[0x142] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x142] + 8))();
        param_1[0x142] = uVar10;
    }
    if ((longlong *)param_1[0x141] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x141] + 8))();
        param_1[0x141] = uVar10;
    }
    if ((longlong *)param_1[0x140] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x140] + 8))();
        param_1[0x140] = uVar10;
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = uVar10;
    }
    uVar9 = uVar10;
    if (param_1[0x2fc] != 0) {
        do {
            if (*(longlong *)(param_1[0x2fb] + uVar9 * 8) != 0) {
                FUN_140353530();
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x2fc]);
    }
    if ((undefined8 *)param_1[0x2f5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2f5] = param_1[0x2f6];
    }
    if (param_1[0x2f6] != 0) {
        *(undefined8 *)(param_1[0x2f6] + 0x108) = param_1[0x2f5];
    }
    param_1[0x2f5] = uVar10;
    param_1[0x2f6] = uVar10;
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xe] = uVar10;
    param_1[0xf] = uVar10;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = uVar10;
    }
    if ((longlong *)param_1[0x30b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30b] + 8))();
    }
    if ((longlong *)param_1[0x30a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30a] + 8))();
    }
    if ((longlong *)param_1[0x309] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x309] + 8))();
    }
    if ((longlong *)param_1[0x308] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x308] + 8))();
    }
    if ((longlong *)param_1[0x307] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x307] + 8))();
    }
    if ((longlong *)param_1[0x306] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x306] + 8))();
    }
    if ((longlong *)param_1[0x305] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x305] + 8))();
    }
    if ((longlong *)param_1[0x304] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x304] + 8))();
    }
    uVar9 = uVar10;
    if (param_1[0x2ff] != 0) {
        do {
            lVar11 = param_1[0x300];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x2ff]);
    }
    param_1[0x2fe] = uVar10;
    FUN_14018b900(param_1[0x300],0);
    param_1[0x300] = uVar10;
    if (param_1[0x2fd] != 0) {
        FUN_1401a4a00();
    }
    lVar11 = param_1[0x2fb];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    if ((undefined8 *)param_1[0x2f7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2f7] = param_1[0x2f8];
    }
    if (param_1[0x2f8] != 0) {
        *(undefined8 *)(param_1[0x2f8] + 0x118) = param_1[0x2f7];
    }
    param_1[0x2f7] = uVar10;
    param_1[0x2f8] = uVar10;
    if ((undefined8 *)param_1[0x2f5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2f5] = param_1[0x2f6];
    }
    if (param_1[0x2f6] != 0) {
        *(undefined8 *)(param_1[0x2f6] + 0x108) = param_1[0x2f5];
    }
    param_1[0x2f5] = uVar10;
    param_1[0x2f6] = uVar10;
    if (param_1[0x2c6] != 0) {
        FUN_1407c2b30(param_1[0x2c6],param_1[0x2c8],*(undefined4 *)(param_1 + 0x2c7),9);
    }
    lVar11 = param_1[0x2ba];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[0x2b8];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    if ((longlong *)param_1[0x2b7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b7] + 8))();
    }
    if ((longlong *)param_1[0x2b6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b6] + 8))();
    }
    if ((longlong *)param_1[0x2b5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b5] + 8))();
    }
    if ((longlong *)param_1[0x2b4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b4] + 8))();
    }
    if ((longlong *)param_1[0x2b3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b3] + 8))();
    }
    if ((longlong *)param_1[0x2af] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2af] + 8))();
    }
    if ((longlong *)param_1[0x2ae] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2ae] + 8))();
    }
    if (param_1[0x2ad] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2ac] != 0) {
        FUN_1401a4a00(param_1 + 0x2ac);
    }
    if (param_1[0x2ab] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2aa] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a6] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a5] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a4] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a3] != 0) {
        FUN_1401a4a00(param_1 + 0x2a3);
    }
    if (param_1[0x2a2] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a1] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x2a0] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x29f] != 0) {
        FUN_1401a4a00(param_1 + 0x29f);
    }
    if (param_1[0x29e] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x29d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x29c] != 0) {
        FUN_1401a4a00(param_1 + 0x29c);
    }
    if (param_1[0x29b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x29a] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x299] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x298] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x297] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x296] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x295] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x294] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x293] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x292] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x291] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x290] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x283] != 0) {
        do {
            lVar11 = param_1[0x284];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x283]);
    }
    param_1[0x282] = uVar10;
    FUN_14018b900(param_1[0x284],0);
    param_1[0x284] = uVar10;
    uVar9 = uVar10;
    if (param_1[0x27e] != 0) {
        do {
            lVar11 = param_1[0x27f];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x27e]);
    }
    param_1[0x27d] = uVar10;
    FUN_14018b900(param_1[0x27f],0);
    param_1[0x27f] = uVar10;
    if (param_1[0x27c] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x27b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x27a] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x279] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x278] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x277] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x276] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x275] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x273] != 0) {
        CloseHandle((HANDLE)param_1[0x273]);
    }
    lVar11 = param_1[0x26e];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[0x26c];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[0x268];
    if (lVar11 != 0) {
        iVar1 = *(int *)(lVar11 + -0x10);
        puVar4 = (undefined *)((longlong)iVar1 * 0x50 + lVar11);
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            puVar4 = &DAT_ffffffffffffffb0 + (longlong)puVar4;
            FUN_14036f9b0(puVar4);
        }
        FUN_14018b900(lVar11 + -0x10,0);
    }
    lVar11 = param_1[0x269];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[0x260];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[0x25e];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    if (param_1[0x25c] != 0) {
        FUN_1401a4a00();
    }
    lVar11 = param_1[0x25a];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    lVar11 = param_1[599];
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    if ((longlong *)param_1[0x256] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x256] + 8))();
    }
    if (param_1[0x21d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x21c] != 0) {
        FUN_1401a4a00();
    }
    if ((longlong *)param_1[0x219] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x219] + 8))();
    }
    if ((longlong *)param_1[0x152] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x152] + 8))();
    }
    if ((longlong *)param_1[0x151] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x151] + 8))();
    }
    if ((longlong *)param_1[0x14e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14e] + 8))();
    }
    if ((longlong *)param_1[0x14d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14d] + 8))();
    }
    if ((longlong *)param_1[0x14a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14a] + 8))();
    }
    if ((longlong *)param_1[0x149] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x149] + 8))();
    }
    if (param_1[0x13f] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x13e] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x13d] != 0) {
        CloseHandle((HANDLE)param_1[0x13d]);
    }
    if (param_1[0x137] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x135] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x133] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x128] != 0) {
        do {
            lVar11 = param_1[0x129];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x128]);
    }
    param_1[0x127] = uVar10;
    FUN_14018b900(param_1[0x129],0);
    param_1[0x129] = uVar10;
    if (param_1[0x126] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x125] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x124] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x123] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x121] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x11f] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x11d] != 0) {
        FUN_1401a4a00();
    }
    uVar9 = uVar10;
    if (param_1[0x10a] != 0) {
        do {
            lVar11 = param_1[0x10b];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x10a]);
    }
    param_1[0x109] = uVar10;
    FUN_14018b900(param_1[0x10b],0);
    param_1[0x10b] = uVar10;
    uVar9 = uVar10;
    if (param_1[0x105] != 0) {
        do {
            lVar11 = param_1[0x106];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x105]);
    }
    param_1[0x104] = uVar10;
    FUN_14018b900(param_1[0x106],0);
    param_1[0x106] = uVar10;
    uVar9 = uVar10;
    if (param_1[0x100] != 0) {
        do {
            lVar11 = param_1[0x101];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x100]);
    }
    param_1[0xff] = uVar10;
    FUN_14018b900(param_1[0x101],0);
    param_1[0x101] = uVar10;
    uVar9 = uVar10;
    if (param_1[0xfb] != 0) {
        do {
            lVar11 = param_1[0xfc];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0xfb]);
    }
    param_1[0xfa] = uVar10;
    FUN_14018b900(param_1[0xfc],0);
    param_1[0xfc] = uVar10;
    uVar9 = uVar10;
    if (param_1[0xf6] != 0) {
        do {
            lVar11 = param_1[0xf7];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0xf6]);
    }
    param_1[0xf5] = uVar10;
    FUN_14018b900(param_1[0xf7],0);
    param_1[0xf7] = uVar10;
    uVar9 = uVar10;
    if (param_1[0xf1] != 0) {
        do {
            lVar11 = param_1[0xf2];
            lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            while (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
                *(undefined8 *)(lVar11 + uVar9 * 8) = *(undefined8 *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *(longlong *)(lVar11 + uVar9 * 8);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0xf1]);
    }
    param_1[0xf0] = uVar10;
    FUN_14018b900(param_1[0xf2],0);
    param_1[0xf2] = uVar10;
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xe] = uVar10;
    param_1[0xf] = uVar10;
    if (param_1[0xd] != 0) {
        CloseHandle((HANDLE)param_1[0xd]);
    }
    if (param_1[9] != 0) {
        CloseHandle((HANDLE)param_1[9]);
    }
    return;
}



longlong FUN_140353530(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -0x10) + -1;
    if (-1 < iVar3) {
        plVar2 = (longlong *)(param_1 + (longlong)*(int *)(param_1 + -0x10) * 0x130 + 0x110);
        do {
            plVar1 = plVar2 + -0x26;
            if ((longlong *)plVar2[-0x25] != (longlong *)0x0) {
                *(longlong *)plVar2[-0x25] = plVar2[-0x24];
            }
            if (plVar2[-0x24] != 0) {
                *(longlong *)(plVar2[-0x24] + 0x118) = plVar2[-0x25];
            }
            plVar2[-0x25] = 0;
            plVar2[-0x24] = 0;
            if ((longlong *)plVar2[-0x27] != (longlong *)0x0) {
                *(longlong *)plVar2[-0x27] = *plVar1;
            }
            if (*plVar1 != 0) {
                *(longlong *)(*plVar1 + 0x108) = plVar2[-0x27];
            }
            iVar3 = iVar3 + -1;
            plVar2[-0x27] = 0;
            *plVar1 = 0;
            plVar2 = plVar1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -0x10,0);
    return param_1 + -0x10;
}



void FUN_1403535e0(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    if ((longlong *)param_1[0xa4] != (longlong *)0x0) {
        *(longlong *)param_1[0xa4] = param_1[0xa5];
    }
    if (param_1[0xa5] != 0) {
        *(longlong *)(param_1[0xa5] + 0x520) = param_1[0xa4];
    }
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    if ((longlong *)param_1[0xa2] != (longlong *)0x0) {
        *(longlong *)param_1[0xa2] = param_1[0xa3];
    }
    if (param_1[0xa3] != 0) {
        *(longlong *)(param_1[0xa3] + 0x510) = param_1[0xa2];
    }
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    iVar2 = 0xf;
    plVar3 = param_1 + 0xa4;
    do {
        plVar3 = plVar3 + -8;
        FUN_140003810(plVar3,8,6,&LAB_14036f920);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    plVar3 = param_1 + 0x22;
    iVar2 = 3;
    do {
        lVar1 = plVar3[-2];
        plVar3 = plVar3 + -2;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}



ulonglong FUN_140353720(LPVOID param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                        longlong param_5)

{
    ulonglong *puVar1;
    ulonglong *puVar2;
    ulonglong *puVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    ulonglong uVar11;
    int iVar12;
    uint *puVar13;
    longlong *plVar14;
    float extraout_XMM0_Da;
    undefined extraout_XMM0 [16];
    float fVar15;
    float fVar16;
    _SYSTEM_INFO local_138;
    code *local_f8;
    code *local_f0;
    undefined *local_e8;
    code *local_e0;
    code *local_d8;
    code *local_d0;
    code *local_c8;
    code *local_b8;
    code *local_b0;
    code *local_a8;
    undefined local_98 [16];
    code *local_88;
    code *local_80;

    puVar8 = (undefined4 *)((longlong)param_1 + 0xb4);
    *puVar8 = DAT_140c43ec8;
    *(undefined4 *)((longlong)param_1 + 0xb8) = DAT_140c43ecc;
    *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_140c43ed0;
    *(undefined4 *)((longlong)param_1 + 0xc0) = DAT_140c43ed4;
    *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_140c43ed8;
    *(undefined4 *)((longlong)param_1 + 200) = DAT_140c43edc;
    *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_140c43ee0;
    *(undefined4 *)((longlong)param_1 + 0xd0) = DAT_140c43ee4;
    *(undefined4 *)((longlong)param_1 + 0xd4) = DAT_140c43ee8;
    *(undefined4 *)((longlong)param_1 + 0xd8) = DAT_140c43eec;
    *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_140c43ef0;
    *(undefined4 *)((longlong)param_1 + 0xe0) = DAT_140c43ef4;
    *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_140c43ef8;
    if (param_5 == 0) {
        lVar10 = *(longlong *)((longlong)param_1 + 0x10);
        *(undefined4 *)((longlong)param_1 + 0xe8) = *(undefined4 *)(lVar10 + 0x10);
        *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(lVar10 + 0x14);
        *(undefined4 *)((longlong)param_1 + 0xf0) = *(undefined4 *)(lVar10 + 0x18);
        *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(lVar10 + 0x1c);
        *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)(lVar10 + 0x20);
        *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)(lVar10 + 0x24);
        *(undefined4 *)((longlong)param_1 + 0x100) = *(undefined4 *)(lVar10 + 0x28);
        *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(lVar10 + 0x2c);
        *(undefined4 *)((longlong)param_1 + 0x108) = *(undefined4 *)(lVar10 + 0x30);
        *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(lVar10 + 0x34);
        *(undefined4 *)((longlong)param_1 + 0x110) = *(undefined4 *)(lVar10 + 0x38);
        *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(lVar10 + 0x3c);
        uVar4 = *(undefined4 *)(lVar10 + 0x40);
    }
    else {
        lVar10 = *(longlong *)((longlong)param_1 + 0x10);
        uVar6 = FUN_14034ca50(&local_138,puVar8);
        puVar7 = (undefined4 *)FUN_14034c930(local_98,uVar6,lVar10 + 0x10);
        *(undefined4 *)((longlong)param_1 + 0xe8) = *puVar7;
        *(undefined4 *)((longlong)param_1 + 0xec) = puVar7[1];
        *(undefined4 *)((longlong)param_1 + 0xf0) = puVar7[2];
        *(undefined4 *)((longlong)param_1 + 0xf4) = puVar7[3];
        *(undefined4 *)((longlong)param_1 + 0xf8) = puVar7[4];
        *(undefined4 *)((longlong)param_1 + 0xfc) = puVar7[5];
        *(undefined4 *)((longlong)param_1 + 0x100) = puVar7[6];
        *(undefined4 *)((longlong)param_1 + 0x104) = puVar7[7];
        *(undefined4 *)((longlong)param_1 + 0x108) = puVar7[8];
        *(undefined4 *)((longlong)param_1 + 0x10c) = puVar7[9];
        *(undefined4 *)((longlong)param_1 + 0x110) = puVar7[10];
        *(undefined4 *)((longlong)param_1 + 0x114) = puVar7[0xb];
        uVar4 = puVar7[0xc];
    }
    puVar13 = (uint *)((longlong)param_1 + 0xe8);
    *(undefined4 *)((longlong)param_1 + 0x118) = uVar4;
    if (param_4 == 0) {
        *(uint *)((longlong)param_1 + 0x80) = *puVar13;
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0xec);
        *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)((longlong)param_1 + 0xf0);
        *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0xf4);
        *(undefined4 *)((longlong)param_1 + 0x90) = *(undefined4 *)((longlong)param_1 + 0xf8);
        *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_1 + 0xfc);
        *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_1 + 0x100);
        *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_1 + 0x104);
        *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_1 + 0x108);
        *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x10c);
        *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_1 + 0x110);
        *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_1 + 0x114);
        *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_1 + 0x118);
        *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    }
    else {
        uVar6 = FUN_14034ca50(local_98,puVar8,param_4);
        puVar8 = (undefined4 *)FUN_14034c930(&local_138,uVar6,puVar13);
        *(undefined4 *)((longlong)param_1 + 0x80) = *puVar8;
        *(undefined4 *)((longlong)param_1 + 0x84) = puVar8[1];
        *(undefined4 *)((longlong)param_1 + 0x88) = puVar8[2];
        *(undefined4 *)((longlong)param_1 + 0x8c) = puVar8[3];
        *(undefined4 *)((longlong)param_1 + 0x90) = puVar8[4];
        *(undefined4 *)((longlong)param_1 + 0x94) = puVar8[5];
        *(undefined4 *)((longlong)param_1 + 0x98) = puVar8[6];
        *(undefined4 *)((longlong)param_1 + 0x9c) = puVar8[7];
        *(undefined4 *)((longlong)param_1 + 0xa0) = puVar8[8];
        *(undefined4 *)((longlong)param_1 + 0xa4) = puVar8[9];
        *(undefined4 *)((longlong)param_1 + 0xa8) = puVar8[10];
        *(undefined4 *)((longlong)param_1 + 0xac) = puVar8[0xb];
        *(undefined4 *)((longlong)param_1 + 0xb0) = puVar8[0xc];
    }
    *(undefined8 **)((longlong)param_1 + 0x18) = param_2;
    (**(code **)*param_2)(param_2);
    FUN_1407e4830(&local_f8,0,0x60);
    local_f8 = FUN_140001b70;
    local_f0 = FUN_140366dd0;
    local_e8 = &LAB_140367070;
    local_e0 = FUN_1403670b0;
    local_d8 = FUN_1403670f0;
    local_d0 = FUN_140367130;
    local_c8 = FUN_140367170;
    local_b8 = FUN_1403671b0;
    local_b0 = FUN_1403671f0;
    local_a8 = FUN_140001b70;
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0xf0))
            (*(longlong **)((longlong)param_1 + 0x18),&local_f8,param_1);
    if ((param_3 != (undefined8 *)0x0) && ((*puVar13 & 0x2008) == 0x2008)) {
        *(undefined8 **)((longlong)param_1 + 0x20) = param_3;
        (**(code **)*param_3)(param_3);
        FUN_1407e4830(local_98,0,0x60);
        local_88 = FUN_140367290;
        local_80 = FUN_1403672d0;
        (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0xf0))
                (*(longlong **)((longlong)param_1 + 0x20),local_98,param_1);
    }
    uVar9 = FUN_1407c2ca0((longlong)param_1 + 0xa00);
    if ((-1 < (int)uVar9) && (uVar9 = FUN_1407c2ca0((longlong)param_1 + 0xa08), -1 < (int)uVar9)) {
        (**(code **)(**(longlong **)((longlong)param_1 + 0xa00) + 0x10))
                (*(longlong **)((longlong)param_1 + 0xa00),param_1);
        (**(code **)(**(longlong **)((longlong)param_1 + 0xa08) + 0x10))
                (*(longlong **)((longlong)param_1 + 0xa08),param_1);
        if ((*(byte *)puVar13 & 1) != 0) {
            uVar9 = FUN_1403543e0(param_1,1,*(undefined8 *)((longlong)param_1 + 0xa00),
                                  (longlong)param_1 + 0xa10);
            if ((int)uVar9 < 0) {
                return uVar9;
            }
            uVar9 = FUN_1403543e0(param_1,0x23,*(undefined8 *)((longlong)param_1 + 0xa08),
                                  (longlong)param_1 + 0xa18);
            if ((int)uVar9 < 0) {
                return uVar9;
            }
            if ((*(byte *)puVar13 & 1) != 0) {
                *(undefined4 *)((longlong)param_1 + 0x10d0) = 0;
                uVar9 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,(longlong)param_1 + 0x10c8);
                if ((int)uVar9 < 0) {
                    return uVar9;
                }
            }
        }
        uVar9 = FUN_140354e10(param_1);
        if ((-1 < (int)uVar9) && (uVar9 = FUN_1402ec590(), -1 < (int)uVar9)) {
            (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x10))
                    (*(longlong **)((longlong)param_1 + 0x28),param_1);
            puVar8 = (undefined4 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
            fVar16 = 1.0;
            plVar14 = (longlong *)((longlong)param_1 + 0x1280);
            uVar9 = 0;
            do {
                lVar10 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
                if (*(int *)(lVar10 + 4 + uVar9) != 0) {
                    lVar10 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
                    uVar5 = FUN_140354aa0(param_1,*(undefined4 *)(lVar10 + 4 + uVar9),plVar14);
                    if ((int)uVar5 < 0) {
                        (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
                        return (ulonglong)uVar5;
                    }
                    fVar15 = *(float *)(*plVar14 + 0x24);
                    iVar12 = (int)fVar15;
                    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
                        uVar5 = movmskps(uVar5,ZEXT816(CONCAT44(fVar15,fVar15)));
                        fVar15 = (float)(iVar12 + (uVar5 & 1 ^ 1));
                    }
                    if (fVar15 <= fVar16) {
                        fVar15 = fVar16;
                    }
                    *(float *)(*plVar14 + 0x24) = fVar15;
                }
                uVar9 = uVar9 + 4;
                plVar14 = plVar14 + 1;
            } while (uVar9 < 0x10);
            lVar10 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
            if (*(int *)(lVar10 + 0x1c) != 0) {
                lVar10 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
                uVar5 = FUN_140354aa0(param_1,*(undefined4 *)(lVar10 + 0x1c),(longlong)param_1 + 0x12a0);
                if ((int)uVar5 < 0) {
                    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x40))();
                    return (ulonglong)uVar5;
                }
                fVar15 = *(float *)(*(longlong *)((longlong)param_1 + 0x12a0) + 0x24);
                iVar12 = (int)fVar15;
                if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar15)) {
                    uVar5 = movmskps(uVar5,ZEXT816(CONCAT44(fVar15,fVar15)));
                    fVar15 = (float)(iVar12 + (uVar5 & 1 ^ 1));
                }
                if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                }
                *(float *)(*(longlong *)((longlong)param_1 + 0x12a0) + 0x24) = fVar15;
            }
            if (1e-05 <= (float)puVar8[6]) {
                fVar16 = fVar16 / (float)puVar8[6];
            }
            else {
                fVar16 = 10000.0;
            }
            *(float *)((longlong)param_1 + 0x12a8) = fVar16;
            uVar9 = FUN_140354930(param_1,*puVar8,(longlong)param_1 + 0x12c8);
            if ((((-1 < (int)uVar9) && (uVar9 = FUN_140357140(param_1), -1 < (int)uVar9)) &&
                 (uVar9 = FUN_140357300(param_1), -1 < (int)uVar9)) &&
                (uVar9 = FUN_140357620(param_1), -1 < (int)uVar9)) {
                FUN_1407c2990((longlong)param_1 + 0x1630,(longlong)param_1 + 0x15c0,4);
                local_138.lpMaximumApplicationAddress = FUN_14035a150;
                local_138.u = 0x14;
                local_138.dwPageSize = 1;
                local_138.dwActiveProcessorMask = 0;
                local_138.dwNumberOfProcessors = 1;
                local_138.lpMinimumApplicationAddress = param_1;
                uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1820);
                if (-1 < (int)uVar9) {
                    local_138.u = 0x14;
                    local_138.lpMaximumApplicationAddress = &DAT_14035ac20;
                    local_138.dwPageSize = 1;
                    local_138.dwActiveProcessorMask = 0;
                    local_138.dwNumberOfProcessors = 1;
                    local_138.lpMinimumApplicationAddress = param_1;
                    uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1828);
                    if (-1 < (int)uVar9) {
                        local_138.u = 0x14;
                        local_138.lpMaximumApplicationAddress = FUN_14035b0e0;
                        local_138.dwPageSize = 1;
                        local_138.dwActiveProcessorMask = 0;
                        local_138.dwNumberOfProcessors = 1;
                        local_138.lpMinimumApplicationAddress = param_1;
                        uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1830);
                        if (-1 < (int)uVar9) {
                            local_138.u = 0x14;
                            local_138.lpMaximumApplicationAddress = FUN_14035b910;
                            local_138.dwPageSize = 1;
                            local_138.dwActiveProcessorMask = 0;
                            local_138.dwNumberOfProcessors = 1;
                            local_138.lpMinimumApplicationAddress = param_1;
                            uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1838);
                            if (-1 < (int)uVar9) {
                                local_138.u = 0x14;
                                local_138.lpMaximumApplicationAddress = FUN_14035b640;
                                local_138.dwPageSize = 1;
                                local_138.dwActiveProcessorMask = 0;
                                local_138.dwNumberOfProcessors = 1;
                                local_138.lpMinimumApplicationAddress = param_1;
                                uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1840);
                                if (-1 < (int)uVar9) {
                                    local_138.u = 0x14;
                                    local_138.lpMaximumApplicationAddress = FUN_14035bc40;
                                    local_138.dwPageSize = 1;
                                    local_138.dwActiveProcessorMask = 0;
                                    local_138.dwNumberOfProcessors = 1;
                                    local_138.lpMinimumApplicationAddress = param_1;
                                    uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1848);
                                    if (-1 < (int)uVar9) {
                                        local_138.u = 0x14;
                                        local_138.lpMaximumApplicationAddress = FUN_14035fd40;
                                        local_138.dwPageSize = 2;
                                        local_138.dwActiveProcessorMask = 0;
                                        local_138.dwNumberOfProcessors = 1;
                                        local_138.lpMinimumApplicationAddress = param_1;
                                        uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1850);
                                        if (-1 < (int)uVar9) {
                                            local_138.u = 0x14;
                                            local_138.lpMaximumApplicationAddress = FUN_1403610f0;
                                            local_138.dwPageSize = 2;
                                            local_138.dwActiveProcessorMask = 0;
                                            local_138.dwNumberOfProcessors = 1;
                                            local_138.lpMinimumApplicationAddress = param_1;
                                            uVar9 = FUN_14019dca0(&local_138,1,0,(longlong)param_1 + 0x1858);
                                            if (-1 < (int)uVar9) {
                                                *(undefined4 *)((longlong)param_1 + 0x350) = 0;
                                                *(undefined (*) [16])((longlong)param_1 + 0x360) =
                                                        extraout_XMM0 & (undefined  [16])0x0;
                                                *(undefined4 *)((longlong)param_1 + 0x884) = DAT_140c77760;
                                                *(undefined4 *)((longlong)param_1 + 0x888) = DAT_140c77764;
                                                *(undefined4 *)((longlong)param_1 + 0x89c) = DAT_140c77760;
                                                *(undefined4 *)((longlong)param_1 + 0x8a0) = DAT_140c77764;
                                                *(undefined4 *)((longlong)param_1 + 0x88c) = DAT_140c784c0;
                                                *(undefined4 *)((longlong)param_1 + 0x890) = DAT_140c784c4;
                                                *(undefined4 *)((longlong)param_1 + 0x894) = DAT_140c784c8;
                                                *(undefined4 *)((longlong)param_1 + 0x898) = DAT_140c784cc;
                                                *(undefined4 *)((longlong)param_1 + 0x8d0) = DAT_140c784c0;
                                                *(undefined4 *)((longlong)param_1 + 0x8d4) = DAT_140c784c4;
                                                *(undefined4 *)((longlong)param_1 + 0x8d8) = DAT_140c784c8;
                                                *(undefined4 *)((longlong)param_1 + 0x8dc) = DAT_140c784cc;
                                                *(undefined4 *)((longlong)param_1 + 0x960) = DAT_140c77760;
                                                *(undefined4 *)((longlong)param_1 + 0x964) = DAT_140c77764;
                                                *(undefined4 *)((longlong)param_1 + 0x978) = DAT_140c77760;
                                                *(undefined4 *)((longlong)param_1 + 0x97c) = DAT_140c77764;
                                                *(undefined4 *)((longlong)param_1 + 0x968) = DAT_140c784c0;
                                                *(undefined4 *)((longlong)param_1 + 0x96c) = DAT_140c784c4;
                                                *(undefined4 *)((longlong)param_1 + 0x970) = DAT_140c784c8;
                                                *(undefined4 *)((longlong)param_1 + 0x974) = DAT_140c784cc;
                                                *(undefined4 *)((longlong)param_1 + 0x980) = DAT_140c784c0;
                                                *(undefined4 *)((longlong)param_1 + 0x984) = DAT_140c784c4;
                                                *(undefined4 *)((longlong)param_1 + 0x988) = DAT_140c784c8;
                                                *(undefined4 *)((longlong)param_1 + 0x98c) = DAT_140c784cc;
                                                *(undefined4 *)((longlong)param_1 + 0x9c0) = DAT_140c784c0;
                                                *(undefined4 *)((longlong)param_1 + 0x9c4) = DAT_140c784c4;
                                                *(undefined4 *)((longlong)param_1 + 0x9c8) = DAT_140c784c8;
                                                *(undefined4 *)((longlong)param_1 + 0x9cc) = DAT_140c784cc;
                                                *(undefined4 *)((longlong)param_1 + 0x648) = 0;
                                                *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
                                                GetSystemInfo(&local_138);
                                                uVar5 = local_138.dwNumberOfProcessors;
                                                if (4 < local_138.dwNumberOfProcessors) {
                                                    uVar5 = 4;
                                                }
                                                if (uVar5 != 0) {
                                                    puVar1 = (ulonglong *)((longlong)param_1 + 0x9f0);
                                                    puVar2 = (ulonglong *)((longlong)param_1 + 0x9f8);
                                                    uVar9 = (ulonglong)uVar5;
                                                    do {
                                                        lVar10 = FUN_14018b280(0x530,0);
                                                        uVar11 = 0;
                                                        if (lVar10 != 0) {
                                                            uVar11 = FUN_140354300(lVar10);
                                                        }
                                                        if (*(longlong *)(uVar11 + 0x510) == 0) {
                                                            *(ulonglong **)(uVar11 + 0x510) = puVar1;
                                                            puVar3 = (ulonglong *)(uVar11 + 0x518);
                                                            *puVar3 = *puVar1;
                                                            *puVar1 = uVar11;
                                                            if (*puVar3 != 0) {
                                                                *(ulonglong **)(*puVar3 + 0x510) = puVar3;
                                                            }
                                                        }
                                                        if (*(longlong *)(uVar11 + 0x520) == 0) {
                                                            *(ulonglong **)(uVar11 + 0x520) = puVar2;
                                                            puVar3 = (ulonglong *)(uVar11 + 0x528);
                                                            *puVar3 = *puVar2;
                                                            *puVar2 = uVar11;
                                                            if (*puVar3 != 0) {
                                                                *(ulonglong **)(*puVar3 + 0x520) = puVar3;
                                                            }
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                    } while (uVar9 != 0);
                                                }
                                                *(undefined4 *)((longlong)param_1 + 0x774) =
                                                        *(undefined4 *)((longlong)param_1 + 0xa0);
                                                *(undefined4 *)((longlong)param_1 + 0x778) =
                                                        *(undefined4 *)((longlong)param_1 + 0xa4);
                                                lVar10 = (**(code **)(*DAT_140c65670 + 0x248))();
                                                FUN_1408fe3d0();
                                                *(float *)((longlong)param_1 + 0x77c) =
                                                        (extraout_XMM0_Da * 2.0) / (float)(ulonglong)*(uint *)(lVar10 + 0xc);
                                                *(undefined8 *)((longlong)param_1 + 0x64c) = 0x447a00003dcccccd;
                                                uVar9 = 0;
                                                *(undefined8 *)((longlong)param_1 + 0x870) = 0;
                                                *(undefined8 *)((longlong)param_1 + 0x878) = 0;
                                                *(undefined4 *)((longlong)param_1 + 0x880) = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar9;
}



undefined8 * FUN_140354300(undefined8 *param_1)

{
    int iVar1;
    undefined8 *puVar2;

    puVar2 = param_1 + 0x24;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    iVar1 = 0xf;
    do {
        FUN_1400037c0(puVar2,8,6,&LAB_14036f910);
        puVar2 = puVar2 + 8;
        iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    return param_1;
}



int FUN_1403543e0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_28 [2];
    undefined8 local_20;

    if (param_4 == (longlong *)0x0) {
        return -0x7ff8ffa9;
    }
    local_28[0] = param_2;
    local_20 = param_3;
    uVar3 = (**(code **)(param_1 + 0x798))(local_28);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x790) + (uVar3 % *(ulonglong *)(param_1 + 0x788)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140354471:
            puVar4 = (undefined8 *)FUN_14018b280(0x360,0);
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_LAB_140b65a60;
                FUN_1407e4830(puVar4 + 8,0,0x310);
                puVar4[0x6a] = 0;
                *(undefined4 *)(puVar4 + 1) = 1;
                puVar4[2] = param_1;
                puVar4[3] = param_3;
                *(undefined4 *)(puVar4 + 4) = 0;
                puVar4[5] = 0;
                puVar4[6] = 0;
            }
            iVar2 = FUN_1403728f0(puVar4,param_2);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_1403727f0(puVar4);
                    FUN_14018b900(puVar4,0);
                }
            }
            else {
                LAB_1403544d6:
                iVar2 = 0;
                *param_4 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x7a0))(local_28,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 4 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[4];
                (**(code **)*puVar4)(puVar4);
                goto LAB_1403544d6;
            }
            goto LAB_140354471;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



int FUN_140354530(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x7c0))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x7b8) + (uVar3 % *(ulonglong *)(param_1 + 0x7b0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140354597:
            puVar4 = (undefined8 *)FUN_14018b280(0x30);
            if (puVar4 == (undefined8 *)0x0) {
                puVar4 = (undefined8 *)0x0;
            }
            else {
                *(undefined4 *)(puVar4 + 1) = 1;
                puVar4[2] = param_1;
                *puVar4 = &PTR_LAB_140b65a70;
                *(undefined4 *)(puVar4 + 3) = 0;
            }
            iVar2 = FUN_140372db0(puVar4,local_res10[0]);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_140354620(puVar4);
                }
            }
            else {
                LAB_1403545d8:
                iVar2 = 0;
                *param_3 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x7c8))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[3];
                (**(code **)*puVar4)(puVar4);
                goto LAB_1403545d8;
            }
            goto LAB_140354597;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_140354620(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65a70;
    if (*(int *)(param_1 + 3) != 0) {
        FUN_1400b6120(param_1[2] + 0x7a8,param_1 + 3);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



int FUN_140354660(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x7e8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x7e0) + (uVar3 % *(ulonglong *)(param_1 + 0x7d8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1403546c7:
            puVar4 = (undefined8 *)FUN_14018b280(0x90,0);
            if (puVar4 == (undefined8 *)0x0) {
                puVar4 = (undefined8 *)0x0;
            }
            else {
                puVar4[1] = 1;
                puVar4[2] = param_1;
                *puVar4 = &PTR_LAB_140b65a80;
            }
            iVar2 = FUN_140372f30(puVar4,local_res10[0]);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_140354750(puVar4);
                }
            }
            else {
                LAB_140354704:
                iVar2 = 0;
                *param_3 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x7f0))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[3];
                (**(code **)*puVar4)(puVar4);
                goto LAB_140354704;
            }
            goto LAB_1403546c7;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_140354750(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65a80;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
        FUN_1400b6120(param_1[2] + 2000,(longlong)param_1 + 0xc);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



int FUN_140354790(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_res10 [2];

    if (param_3 == (longlong *)0x0) {
        return -0x7ff8ffa9;
    }
    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x810))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x808) + (uVar3 % *(ulonglong *)(param_1 + 0x800)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140354811:
            puVar4 = (undefined8 *)FUN_14018b280(0x60);
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_LAB_140b65a90;
                puVar4[6] = 0;
                puVar4[7] = 0;
                puVar4[8] = 0;
                puVar4[9] = 0;
                puVar4[10] = 0;
                puVar4[0xb] = 0;
                *(undefined4 *)(puVar4 + 1) = 1;
                puVar4[2] = param_1;
                *(undefined4 *)(puVar4 + 3) = 0;
                *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
            }
            iVar2 = FUN_140374370(puVar4,local_res10[0]);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_1403548b0(puVar4);
                }
            }
            else {
                LAB_14035486b:
                iVar2 = 0;
                *param_3 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x818))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[3];
                (**(code **)*puVar4)(puVar4);
                goto LAB_14035486b;
            }
            goto LAB_140354811;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_1403548b0(undefined8 *param_1)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    int iVar3;

    *param_1 = &PTR_LAB_140b65a90;
    if (*(int *)(param_1 + 3) != 0) {
        FUN_1400b6120(param_1[2] + 0x7f8,param_1 + 3);
    }
    puVar2 = param_1 + 0xc;
    iVar3 = 5;
    do {
        pplVar1 = (longlong **)(puVar2 + -1);
        puVar2 = puVar2 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_14018b900(param_1,0);
    return param_1;
}



int FUN_140354930(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_res10 [2];

    if (param_3 == (longlong *)0x0) {
        return -0x7ff8ffa9;
    }
    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x838))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x830) + (uVar3 % *(ulonglong *)(param_1 + 0x828)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1403549b1:
            puVar4 = (undefined8 *)FUN_14018b280(0x38);
            if (puVar4 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar4 + 1) = 1;
                puVar4[2] = param_1;
                *puVar4 = &PTR_LAB_140b65ab0;
                *(undefined4 *)(puVar4 + 3) = 0;
                *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
                puVar4[6] = 0;
            }
            iVar2 = FUN_140374e90(puVar4,local_res10[0]);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_140354a40(puVar4);
                }
            }
            else {
                LAB_1403549f8:
                iVar2 = 0;
                *param_3 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x840))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[3];
                (**(code **)*puVar4)(puVar4);
                goto LAB_1403549f8;
            }
            goto LAB_1403549b1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_140354a40(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65ab0;
    if (*(int *)(param_1 + 3) != 0) {
        FUN_1400b6120(param_1[2] + 0x820,param_1 + 3);
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
        param_1[6] = 0;
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



int FUN_140354aa0(longlong param_1,undefined4 param_2,longlong *param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined4 local_res10 [2];

    if (param_3 == (longlong *)0x0) {
        return -0x7ff8ffa9;
    }
    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x860))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x858) + (uVar3 % *(ulonglong *)(param_1 + 0x850)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140354b21:
            puVar4 = (undefined8 *)FUN_14018b280(0xc0,0);
            if (puVar4 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar4 + 1) = 1;
                puVar4[2] = param_1;
                *puVar4 = &PTR_LAB_140b65ac0;
                *(undefined4 *)(puVar4 + 3) = 0;
                puVar4[10] = 0;
                puVar4[0xb] = 0;
            }
            iVar2 = FUN_1403750b0(puVar4,local_res10[0]);
            if (iVar2 < 0) {
                if (puVar4 != (undefined8 *)0x0) {
                    FUN_140354bb0(puVar4);
                }
            }
            else {
                LAB_140354b6a:
                iVar2 = 0;
                *param_3 = (longlong)puVar4;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x868))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                puVar4 = (undefined8 *)puVar1[3];
                (**(code **)*puVar4)(puVar4);
                goto LAB_140354b6a;
            }
            goto LAB_140354b21;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_140354bb0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65ac0;
    if (*(int *)(param_1 + 3) != 0) {
        FUN_1400b6120(param_1[2] + 0x848,param_1 + 3);
    }
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
        param_1[10] = 0;
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 FUN_140354c20(longlong param_1,uint *param_2)

{
    uint *puVar1;
    uint uVar2;
    undefined8 uVar3;
    byte bVar4;

    bVar4 = 0;
    if ((float)param_2[2] != *(float *)(param_1 + 0x88)) {
        bVar4 = 0x40;
    }
    if ((float)param_2[3] != *(float *)(param_1 + 0x8c)) {
        bVar4 = 0x40;
    }
    if (*(uint *)(param_1 + 0x90) != param_2[4]) {
        bVar4 = 0x40;
    }
    if ((float)param_2[5] != *(float *)(param_1 + 0x94)) {
        bVar4 = 0x60;
    }
    if (*(uint *)(param_1 + 0x98) != param_2[6]) {
        bVar4 = bVar4 | 0x42;
    }
    if (*(uint *)(param_1 + 0x9c) != param_2[7]) {
        bVar4 = bVar4 | 0xc0;
    }
    if ((*(uint *)(param_1 + 0xa0) != param_2[8]) || ((float)param_2[9] != *(float *)(param_1 + 0xa4))
            ) {
        bVar4 = bVar4 | 5;
    }
    if (*(uint *)(param_1 + 0xa8) != param_2[10]) {
        bVar4 = bVar4 | 8;
    }
    if (*(uint *)(param_1 + 0xac) != param_2[0xb]) {
        bVar4 = bVar4 | 4;
    }
    if (*(uint *)(param_1 + 0xb0) != param_2[0xc]) {
        bVar4 = bVar4 | 0x10;
    }
    puVar1 = (uint *)(param_1 + 0x80);
    *puVar1 = *param_2;
    *(uint *)(param_1 + 0x84) = param_2[1];
    *(uint *)(param_1 + 0x88) = param_2[2];
    *(uint *)(param_1 + 0x8c) = param_2[3];
    *(uint *)(param_1 + 0x90) = param_2[4];
    *(uint *)(param_1 + 0x94) = param_2[5];
    *(uint *)(param_1 + 0x98) = param_2[6];
    *(uint *)(param_1 + 0x9c) = param_2[7];
    *(uint *)(param_1 + 0xa0) = param_2[8];
    *(uint *)(param_1 + 0xa4) = param_2[9];
    *(uint *)(param_1 + 0xa8) = param_2[10];
    *(uint *)(param_1 + 0xac) = param_2[0xb];
    *(uint *)(param_1 + 0xb0) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0xa4);
    uVar2 = *puVar1;
    if ((uVar2 & 2) == 0) {
        uVar2 = uVar2 | 1;
    }
    else {
        uVar2 = uVar2 & 0x18e6;
    }
    *puVar1 = uVar2;
    if (((bVar4 & 2) == 0) || (uVar3 = FUN_140355d50(param_1,&DAT_140c784c0), -1 < (int)uVar3)) {
        if ((bVar4 & 4) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x20))(*(longlong **)(param_1 + 0xa00),puVar1)
                    ;
        }
        if ((bVar4 & 8) != 0) {
            FUN_140351260(param_1 + 0x780);
        }
        if (((((((bVar4 & 0x10) == 0) || (uVar3 = FUN_140357140(param_1), -1 < (int)uVar3)) &&
               (((bVar4 & 0x20) == 0 || (uVar3 = FUN_140357300(param_1), -1 < (int)uVar3)))) &&
              (((bVar4 & 4) == 0 || (uVar3 = FUN_140357620(param_1), -1 < (int)uVar3)))) &&
             (((bVar4 & 0x40) == 0 || (uVar3 = FUN_140354e10(param_1), -1 < (int)uVar3)))) &&
            ((-1 < (char)bVar4 || (uVar3 = FUN_140355330(param_1,param_1 + 0x88c), -1 < (int)uVar3)))) {
            uVar3 = 0;
        }
    }
    return uVar3;
}



void FUN_140354e10(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    ulonglong local_10;

    lVar2 = DAT_140c657f0;
    local_10 = DAT_140c0f7b0 ^ (ulonglong)&local_28;
    local_28 = *(undefined4 *)(longlong *)(param_1 + 0x88);
    uStack36 = *(undefined4 *)(param_1 + 0x8c);
    local_18 = *(undefined4 *)(param_1 + 0x94);
    local_20 = *(undefined4 *)(&DAT_140b65808 + (longlong)*(int *)(param_1 + 0x9c) * 4);
    uStack28 = *(undefined4 *)(&DAT_140b62ce8 + (longlong)*(int *)(param_1 + 0x90) * 4);
    uStack20 = *(undefined4 *)(&DAT_140b65818 + (longlong)*(int *)(param_1 + 0x98) * 4);
    if (DAT_140c657f0 != 0) {
        if (((*(longlong *)(DAT_140c657f0 + 0x538) != *(longlong *)(param_1 + 0x88)) ||
             (*(longlong *)(DAT_140c657f0 + 0x540) != CONCAT44(uStack28,local_20))) ||
            (*(longlong *)(DAT_140c657f0 + 0x548) != CONCAT44(uStack20,local_18))) {
            lVar1 = *(longlong *)(DAT_140c657f0 + 0x28);
            *(undefined4 *)(DAT_140c657f0 + 0x538) = local_28;
            *(undefined4 *)(lVar2 + 0x53c) = uStack36;
            *(undefined4 *)(lVar2 + 0x540) = local_20;
            *(undefined4 *)(lVar2 + 0x544) = uStack28;
            *(undefined4 *)(lVar2 + 0x548) = local_18;
            *(undefined4 *)(lVar2 + 0x54c) = uStack20;
            for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x200)) {
            }
        }
        FUN_1407db4f0(local_10 ^ (ulonglong)&local_28);
        return;
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)&local_28);
    return;
}



undefined8 FUN_140354f90(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    int iVar5;
    undefined auVar6 [16];
    int local_18;
    int iStack20;
    int local_10;
    int iStack12;

    lVar2 = *(longlong *)(param_1 + 0x884);
    iVar4 = (int)((*(float *)(param_1 + 0x360) * DAT_140c43fb8 + 0.5) * 2048.0);
    iVar5 = (int)((*(float *)(param_1 + 0x368) * DAT_140c43fb8 + 0.5) * 2048.0);
    if (lVar2 != CONCAT44(iVar5,iVar4)) {
        lVar2 = 0;
        *(int *)(param_1 + 0x884) = iVar4;
        *(int *)(param_1 + 0x888) = iVar5;
        *(undefined4 *)(param_1 + 0x8f0) = 0;
        *(undefined4 *)(param_1 + 0x900) = 0;
        *(undefined4 *)(param_1 + 0x910) = 0;
    }
    auVar6 = ZEXT416((uint)(*(float *)(param_1 + 0x88) / DAT_140c44018)) &
             (undefined  [16])0xffffffffffffffff;
    iVar4 = (int)SUB164(auVar6,0);
    if ((iVar4 != -0x80000000) && ((float)iVar4 != SUB164(auVar6,0))) {
        uVar1 = movmskps((int)lVar2,ZEXT816(SUB168(auVar6,0) | SUB168(auVar6,0) << 0x20));
        auVar6 = ZEXT416((uint)(float)(iVar4 + (uVar1 & 1 ^ 1)));
    }
    iStack12 = (int)SUB164(auVar6,0) + 2;
    iStack20 = (int)SUB164(auVar6,0) + 1;
    local_10 = *(int *)(param_1 + 0x884) + iStack12;
    iStack12 = *(int *)(param_1 + 0x888) + iStack12;
    local_18 = *(int *)(param_1 + 0x884) - iStack20;
    iStack20 = *(int *)(param_1 + 0x888) - iStack20;
    *(int *)(param_1 + 0x8d0) = (int)DAT_140c77768 + local_18;
    *(int *)(param_1 + 0x8d4) = DAT_140c77768._4_4_ + iStack20;
    *(int *)(param_1 + 0x8d8) = local_10 - (int)DAT_140c77768;
    *(int *)(param_1 + 0x8dc) = iStack12 - DAT_140c77768._4_4_;
    if (*(int *)(param_1 + 0x88c) < local_18) {
        local_18 = local_18 + -1;
    }
    else {
        local_10 = local_10 + 1;
    }
    if (*(int *)(param_1 + 0x890) < iStack20) {
        iStack20 = iStack20 + -1;
    }
    else {
        iStack12 = iStack12 + 1;
    }
    if (((CONCAT44(iStack20,local_18) != *(longlong *)(param_1 + 0x88c)) ||
         (CONCAT44(iStack12,local_10) != *(longlong *)(param_1 + 0x894))) &&
        (uVar3 = FUN_140355440(param_1,&local_18), (int)uVar3 < 0)) {
        return uVar3;
    }
    return 0;
}



undefined8 FUN_140355150(longlong param_1)

{
    float fVar1;
    uint uVar2;
    undefined8 uVar3;
    int iVar4;
    int iVar5;
    undefined auVar6 [16];
    int local_18;
    int iStack20;
    int local_10;
    int iStack12;

    fVar1 = DAT_140c43fb8;
    iVar4 = (int)((*(float *)(param_1 + 0x360) * DAT_140c43fb8 + 0.5) * 256.0);
    iVar5 = (int)((*(float *)(param_1 + 0x368) * DAT_140c43fb8 + 0.5) * 256.0);
    if (*(longlong *)(param_1 + 0x960) != CONCAT44(iVar5,iVar4)) {
        *(int *)(param_1 + 0x960) = iVar4;
        *(int *)(param_1 + 0x964) = iVar5;
        *(undefined4 *)(param_1 + 0x9a0) = 0;
        *(undefined4 *)(param_1 + 0x9b0) = 0;
    }
    local_18 = (int)((*(float *)(param_1 + 0x360) * fVar1 + 0.5) * 256.0);
    iVar4 = (int)((*(float *)(param_1 + 0x368) * fVar1 + 0.5) * 256.0);
    *(int *)(param_1 + 0x960) = local_18;
    *(int *)(param_1 + 0x964) = iVar4;
    auVar6 = ZEXT416((uint)(*(float *)(param_1 + 0x8c) / DAT_140c44078)) &
             (undefined  [16])0xffffffffffffffff;
    iVar5 = (int)SUB164(auVar6,0);
    if ((iVar5 != -0x80000000) && ((float)iVar5 != SUB164(auVar6,0))) {
        uVar2 = movmskps(iVar4,ZEXT816(SUB168(auVar6,0) | SUB168(auVar6,0) << 0x20));
        auVar6 = ZEXT416((uint)(float)(iVar5 + (uVar2 & 1 ^ 1)));
    }
    local_10 = (int)SUB164(auVar6,0) + 2;
    iStack12 = *(int *)(param_1 + 0x964) + local_10;
    local_10 = local_10 + local_18;
    iStack20 = (int)SUB164(auVar6,0) + 1;
    local_18 = local_18 - iStack20;
    *(int *)(param_1 + 0x980) = (int)DAT_140c77768 + local_18;
    iStack20 = *(int *)(param_1 + 0x964) - iStack20;
    *(int *)(param_1 + 0x984) = DAT_140c77768._4_4_ + iStack20;
    *(int *)(param_1 + 0x988) = local_10 - (int)DAT_140c77768;
    *(int *)(param_1 + 0x98c) = iStack12 - DAT_140c77768._4_4_;
    if (*(int *)(param_1 + 0x968) < local_18) {
        local_18 = local_18 + -1;
    }
    else {
        local_10 = local_10 + 1;
    }
    if (*(int *)(param_1 + 0x96c) < iStack20) {
        iStack20 = iStack20 + -1;
    }
    else {
        iStack12 = iStack12 + 1;
    }
    if (((CONCAT44(iStack20,local_18) != *(longlong *)(param_1 + 0x968)) ||
         (CONCAT44(iStack12,local_10) != *(longlong *)(param_1 + 0x970))) &&
        (uVar3 = FUN_140355800(param_1,&local_18), (int)uVar3 < 0)) {
        return uVar3;
    }
    return 0;
}



undefined8 FUN_140355330(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar4 = *(int *)(param_1 + 0x890);
    if (iVar4 < *(int *)(param_1 + 0x898)) {
        do {
            iVar3 = *(int *)(param_1 + 0x88c);
            if (iVar3 < *(int *)(param_1 + 0x894)) {
                do {
                    iVar1 = *(int *)(param_1 + 0x89c);
                    iVar2 = iVar4 % *(int *)(param_1 + 0x8a0);
                    if ((((*param_2 <= iVar3) && (iVar3 < param_2[2])) && (param_2[1] <= iVar4)) &&
                        (iVar4 < param_2[3])) {
                        FUN_14037ea00(*(undefined8 *)
                                ((ulonglong)
                                         ((uint)(iVar3 % iVar1 < 0) * iVar1 +
                                          ((uint)(iVar2 < 0) * *(int *)(param_1 + 0x8a0) + iVar2) * iVar1 +
                                          iVar3 % iVar1) * 8 + *(longlong *)(param_1 + 0x8e0)));
                        FUN_140381180();
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < *(int *)(param_1 + 0x894));
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x898));
    }
    return 0;
}



void FUN_140355440(longlong param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined auVar4 [16];
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    uint uVar9;
    int iVar10;
    int *piVar11;
    int iVar12;
    uint *puVar13;
    uint uVar14;
    uint uVar15;
    undefined auStack248 [32];
    uint local_d8;
    uint uStack212;
    ulonglong local_d0;
    ulonglong local_c8;
    int *local_c0;
    uint local_b8 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    uVar14 = param_2[2] - *param_2;
    uVar15 = param_2[3] - param_2[1];
    local_d8 = uVar14;
    uStack212 = uVar15;
    if (*(longlong *)(param_1 + 0x89c) != CONCAT44(uVar15,uVar14)) {
        auVar4 = ZEXT816(8) * ZEXT416(uVar15 * uVar14);
        uVar7 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        lVar8 = FUN_14018b280(uVar7);
        FUN_1407e4830();
        iVar12 = *(int *)(param_1 + 0x890);
        if (iVar12 < *(int *)(param_1 + 0x898)) {
            do {
                iVar10 = *(int *)(param_1 + 0x88c);
                if (iVar10 < *(int *)(param_1 + 0x894)) {
                    do {
                        iVar2 = *(int *)(param_1 + 0x89c);
                        iVar5 = iVar12 % *(int *)(param_1 + 0x8a0);
                        uVar9 = (uint)(iVar10 % iVar2 < 0) * iVar2 +
                                ((uint)(iVar5 < 0) * *(int *)(param_1 + 0x8a0) + iVar5) * iVar2 + iVar10 % iVar2
                                ;
                        if ((((iVar10 < *param_2) || (param_2[2] <= iVar10)) || (iVar12 < param_2[1])) ||
                            (param_2[3] <= iVar12)) {
                            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)uVar9 * 8);
                            if (lVar1 != 0) {
                                FUN_14037c2e0(lVar1);
                                FUN_14018b900();
                            }
                        }
                        else {
                            *(undefined8 *)
                                    (lVar8 + (ulonglong)
                                                     (((uint)(iVar10 % (int)uVar14 < 0) +
                                                       (iVar12 % (int)uVar15 < 0) * uVar15 + iVar12 % (int)uVar15) * uVar14 +
                                                      iVar10 % (int)uVar14) * 8) =
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + (ulonglong)uVar9 * 8);
                        }
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < *(int *)(param_1 + 0x894));
                }
                iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(param_1 + 0x898));
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 0x8e0),0);
        *(longlong *)(param_1 + 0x8e0) = lVar8;
        *(uint *)(param_1 + 0x89c) = uVar14;
        *(uint *)(param_1 + 0x8a0) = uVar15;
    }
    local_c0 = (int *)(param_1 + 0x88c);
    local_c8 = FUN_1401b24c0();
    local_d0 = 0;
    piVar11 = (int *)(param_1 + 0x88c);
    if (local_c8 != 0) {
        puVar13 = local_b8 + 3;
        do {
            uStack212 = puVar13[-2];
            uVar14 = *puVar13;
            if ((int)uStack212 < (int)uVar14) {
                uVar15 = puVar13[-1];
                do {
                    local_d8 = puVar13[-3];
                    if ((int)local_d8 < (int)uVar15) {
                        do {
                            iVar12 = *(int *)(param_1 + 0x8a0);
                            iVar10 = *(int *)(param_1 + 0x89c);
                            iVar2 = (int)uStack212 % iVar12;
                            iVar5 = (int)local_d8 % iVar10;
                            if ((local_d8 < 0x800) && (uStack212 < 0x800)) {
                                lVar8 = FUN_14018b280(0x5e0,0);
                                if (lVar8 == 0) {
                                    lVar8 = 0;
                                }
                                else {
                                    lVar8 = FUN_14037c090(lVar8,param_1);
                                }
                                iVar6 = FUN_14037c910();
                                if (iVar6 < 0) {
                                    if (lVar8 != 0) {
                                        FUN_14037c2e0(lVar8);
                                        FUN_14018b900(lVar8,0);
                                    }
                                    goto LAB_1403557ca;
                                }
                            }
                            else {
                                lVar8 = 0;
                            }
                            lVar1 = (ulonglong)
                                            ((uint)(iVar5 < 0) * iVar10 +
                                             ((uint)(iVar2 < 0) * iVar12 + iVar2) * iVar10 + iVar5) * 8;
                            lVar3 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x8e0));
                            if (lVar3 != 0) {
                                FUN_14037c2e0(lVar3);
                                FUN_14018b900();
                            }
                            *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x8e0)) = lVar8;
                            local_d8 = local_d8 + 1;
                        } while ((int)local_d8 < (int)uVar15);
                        uVar14 = *puVar13;
                    }
                    uStack212 = uStack212 + 1;
                } while ((int)uStack212 < (int)uVar14);
            }
            local_d0 = local_d0 + 1;
            puVar13 = puVar13 + 4;
            piVar11 = local_c0;
        } while (local_d0 < local_c8);
    }
    *piVar11 = *param_2;
    piVar11[1] = param_2[1];
    piVar11[2] = param_2[2];
    piVar11[3] = param_2[3];
    LAB_1403557ca:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack248);
    return;
}



void FUN_140355800(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined auVar3 [16];
    int iVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    uint uVar9;
    int iVar10;
    longlong *plVar11;
    int *piVar12;
    int iVar13;
    uint *puVar14;
    uint uVar15;
    uint uVar16;
    undefined auStack248 [32];
    uint local_d8;
    uint uStack212;
    ulonglong local_d0;
    ulonglong local_c8;
    int *local_c0;
    uint local_b8 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    uVar15 = param_2[2] - *param_2;
    uVar16 = param_2[3] - param_2[1];
    local_d8 = uVar15;
    uStack212 = uVar16;
    if (*(longlong *)(param_1 + 0x978) != CONCAT44(uVar16,uVar15)) {
        auVar3 = ZEXT816(8) * ZEXT416(uVar16 * uVar15);
        uVar6 = SUB168(auVar3,0);
        if (SUB168(auVar3 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6);
        FUN_1407e4830();
        iVar13 = *(int *)(param_1 + 0x96c);
        if (iVar13 < *(int *)(param_1 + 0x974)) {
            do {
                iVar10 = *(int *)(param_1 + 0x968);
                if (iVar10 < *(int *)(param_1 + 0x970)) {
                    do {
                        iVar1 = *(int *)(param_1 + 0x978);
                        iVar4 = iVar13 % *(int *)(param_1 + 0x97c);
                        uVar9 = (uint)(iVar10 % iVar1 < 0) * iVar1 +
                                ((uint)(iVar4 < 0) * *(int *)(param_1 + 0x97c) + iVar4) * iVar1 + iVar10 % iVar1
                                ;
                        if ((((iVar10 < *param_2) || (param_2[2] <= iVar10)) || (iVar13 < param_2[1])) ||
                            (param_2[3] <= iVar13)) {
                            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x990) + (ulonglong)uVar9 * 8);
                            if (lVar2 != 0) {
                                FUN_14038a230(lVar2);
                                FUN_14018b900();
                            }
                        }
                        else {
                            *(undefined8 *)
                                    (lVar7 + (ulonglong)
                                                     (((uint)(iVar10 % (int)uVar15 < 0) +
                                                       (iVar13 % (int)uVar16 < 0) * uVar16 + iVar13 % (int)uVar16) * uVar15 +
                                                      iVar10 % (int)uVar15) * 8) =
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x990) + (ulonglong)uVar9 * 8);
                        }
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < *(int *)(param_1 + 0x970));
                }
                iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(param_1 + 0x974));
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 0x990),0);
        *(longlong *)(param_1 + 0x990) = lVar7;
        *(uint *)(param_1 + 0x978) = uVar15;
        *(uint *)(param_1 + 0x97c) = uVar16;
    }
    local_c0 = (int *)(param_1 + 0x968);
    local_c8 = FUN_1401b24c0(param_2);
    local_d0 = 0;
    piVar12 = (int *)(param_1 + 0x968);
    if (local_c8 != 0) {
        puVar14 = local_b8 + 3;
        do {
            uStack212 = puVar14[-2];
            uVar15 = *puVar14;
            if ((int)uStack212 < (int)uVar15) {
                uVar16 = puVar14[-1];
                do {
                    local_d8 = puVar14[-3];
                    if ((int)local_d8 < (int)uVar16) {
                        do {
                            plVar11 = (longlong *)0x0;
                            iVar13 = *(int *)(param_1 + 0x97c);
                            iVar10 = *(int *)(param_1 + 0x978);
                            iVar1 = (int)uStack212 % iVar13;
                            iVar4 = (int)local_d8 % iVar10;
                            if ((local_d8 < 0x100) && (uStack212 < 0x100)) {
                                plVar8 = (longlong *)FUN_14018b280(0xa0,0);
                                if (plVar8 != (longlong *)0x0) {
                                    plVar8[0xe] = 0;
                                    plVar8[0xf] = 0;
                                    plVar8[0x10] = 0;
                                    plVar8[0x11] = 0;
                                    plVar8[0x12] = 0;
                                    plVar8[0x13] = 0;
                                    *plVar8 = param_1;
                                    plVar8[2] = 0;
                                    plVar8[4] = 0;
                                    plVar11 = plVar8;
                                }
                                iVar5 = FUN_14038a320();
                                if (iVar5 < 0) {
                                    if (plVar11 != (longlong *)0x0) {
                                        FUN_14038a230(plVar11);
                                        FUN_14018b900(plVar11,0);
                                    }
                                    goto LAB_140355bb6;
                                }
                            }
                            lVar7 = (ulonglong)
                                            ((uint)(iVar4 < 0) * iVar10 +
                                             ((uint)(iVar1 < 0) * iVar13 + iVar1) * iVar10 + iVar4) * 8;
                            lVar2 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x990));
                            if (lVar2 != 0) {
                                FUN_14038a230(lVar2);
                                FUN_14018b900();
                            }
                            *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x990)) = plVar11;
                            local_d8 = local_d8 + 1;
                        } while ((int)local_d8 < (int)uVar16);
                        uVar15 = *puVar14;
                    }
                    uStack212 = uStack212 + 1;
                } while ((int)uStack212 < (int)uVar15);
            }
            local_d0 = local_d0 + 1;
            puVar14 = puVar14 + 4;
            piVar12 = local_c0;
        } while (local_d0 < local_c8);
    }
    *piVar12 = *param_2;
    piVar12[1] = param_2[1];
    piVar12[2] = param_2[2];
    piVar12[3] = param_2[3];
    LAB_140355bb6:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack248);
    return;
}



undefined8 FUN_140355bf0(longlong param_1)

{
    uint uVar1;
    undefined8 uVar2;
    int iVar3;
    float fVar4;
    undefined auVar5 [16];
    int local_18;
    int iStack20;
    int local_10;
    int iStack12;
    undefined auVar6 [16];

    uVar1 = *(uint *)(param_1 + 0x80);
    if ((uVar1 & 1) != 0) {
        local_18 = (int)((*(float *)(param_1 + 0x390) * DAT_140c43fb8 + 0.5) * 2048.0);
        iStack20 = (int)((*(float *)(param_1 + 0x398) * DAT_140c43fb8 + 0.5) * 2048.0);
        if ((uVar1 >> 0xe & 1) == 0) {
            local_18 = DAT_140c784c0;
            iStack20 = DAT_140c784c4;
            local_10 = DAT_140c784c8;
            iStack12 = DAT_140c784cc;
        }
        else {
            auVar5 = ZEXT416((uint)*(float *)(param_1 + 0x94));
            if (*(float *)(param_1 + 0x88) <= *(float *)(param_1 + 0x94)) {
                auVar5 = ZEXT416((uint)*(float *)(param_1 + 0x88)) & (undefined  [16])0xffffffffffffffff;
            }
            fVar4 = SUB164(auVar5,0) / DAT_140c44018;
            auVar6 = CONCAT124(SUB1612(auVar5 >> 0x20,0),fVar4);
            iVar3 = (int)fVar4;
            if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar4)) {
                uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar5 >> 0x40,0),
                                                SUB168(auVar6,0) | SUB168(auVar6,0) << 0x20) &
                                       (undefined  [16])0xffffffffffffffff);
                auVar6 = ZEXT416((uint)(float)(iVar3 + (uVar1 & 1 ^ 1)));
            }
            iStack12 = (int)SUB164(auVar6,0) + 2;
            iVar3 = (int)SUB164(auVar6,0) + 1;
            local_10 = iStack12 + local_18;
            iStack12 = iStack12 + iStack20;
            local_18 = local_18 - iVar3;
            iStack20 = iStack20 - iVar3;
            if (*(int *)(param_1 + 0x9c0) < local_18) {
                local_18 = local_18 + -1;
            }
            else {
                local_10 = local_10 + 1;
            }
            if (*(int *)(param_1 + 0x9c4) < iStack20) {
                iStack20 = iStack20 + -1;
            }
            else {
                iStack12 = iStack12 + 1;
            }
        }
        if (((CONCAT44(iStack20,local_18) != *(longlong *)(param_1 + 0x9c0)) ||
             (CONCAT44(iStack12,local_10) != *(longlong *)(param_1 + 0x9c8))) &&
            (uVar2 = FUN_140355d50(param_1,&local_18), (int)uVar2 < 0)) {
            return uVar2;
        }
    }
    return 0;
}



void FUN_140355d50(longlong param_1,int *param_2)

{
    int *piVar1;
    longlong **pplVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    longlong *plVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    longlong **pplVar11;
    int *piVar12;
    int iVar13;
    int *piVar14;
    undefined auStack248 [32];
    int *local_d8;
    int local_d0;
    int local_cc;
    int *local_c8;
    int *local_c0;
    int local_b8 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    local_c0 = (int *)(param_1 + 0x9c0);
    iVar13 = *(int *)(param_1 + 0x9c8);
    if (*(int *)(param_1 + 0x894) < *(int *)(param_1 + 0x9c8)) {
        iVar13 = *(int *)(param_1 + 0x894);
    }
    iVar3 = *(int *)(param_1 + 0x9cc);
    if (*(int *)(param_1 + 0x898) < *(int *)(param_1 + 0x9cc)) {
        iVar3 = *(int *)(param_1 + 0x898);
    }
    iVar4 = *local_c0;
    if (*local_c0 < *(int *)(param_1 + 0x88c)) {
        iVar4 = *(int *)(param_1 + 0x88c);
    }
    iVar5 = *(int *)(param_1 + 0x9c4);
    if (*(int *)(param_1 + 0x9c4) < *(int *)(param_1 + 0x890)) {
        iVar5 = *(int *)(param_1 + 0x890);
    }
    local_c8 = param_2;
    if ((iVar4 < iVar13) && (iVar5 < iVar3)) {
        local_d8 = (int *)CONCAT44(iVar5,iVar4);
        local_d0 = iVar13;
        local_cc = iVar3;
        lVar10 = FUN_1401b24c0(&local_d8);
        piVar12 = local_b8 + lVar10 * 4;
        local_d8 = piVar12;
        if (local_b8 < piVar12) {
            piVar14 = local_b8 + 3;
            do {
                iVar13 = piVar14[-2];
                iVar3 = *piVar14;
                if (iVar13 < iVar3) {
                    iVar4 = piVar14[-3];
                    iVar5 = piVar14[-1];
                    iVar9 = iVar4;
                    piVar12 = local_d8;
                    do {
                        for (; local_d8 = piVar12, iVar9 < iVar5; iVar9 = iVar9 + 1) {
                            iVar6 = *(int *)(param_1 + 0x89c);
                            iVar8 = iVar13 % *(int *)(param_1 + 0x8a0);
                            plVar7 = *(longlong **)
                                    (*(longlong *)(param_1 + 0x8e0) +
                                     (ulonglong)
                                             ((uint)(iVar9 % iVar6 < 0) * iVar6 +
                                              ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar6 +
                                              iVar9 % iVar6) * 8);
                            if ((plVar7 != (longlong *)0x0) && (*(int *)(plVar7 + 0x62) != 0)) {
                                *(undefined4 *)(plVar7 + 0x62) = 0;
                                FUN_140383760();
                                *(uint *)((longlong)plVar7 + 0x2c) = *(uint *)((longlong)plVar7 + 0x2c) & 0xfffffff5
                                        ;
                                if (plVar7[0xb9] == 0) {
                                    pplVar2 = (longlong **)(plVar7 + 0xba);
                                    pplVar11 = (longlong **)(*plVar7 + 0x908);
                                    plVar7[0xb9] = (longlong)pplVar11;
                                    *pplVar2 = *pplVar11;
                                    *pplVar11 = plVar7;
                                    if (*pplVar2 != (longlong *)0x0) {
                                        (*pplVar2)[0xb9] = (longlong)pplVar2;
                                    }
                                    *(int *)(*plVar7 + 0x87c) = *(int *)(*plVar7 + 0x87c) + 1;
                                }
                            }
                            piVar12 = local_d8;
                        }
                        iVar13 = iVar13 + 1;
                        iVar9 = iVar4;
                    } while (iVar13 < iVar3);
                }
                piVar1 = piVar14 + 1;
                param_2 = local_c8;
                piVar14 = piVar14 + 4;
            } while (piVar1 < piVar12);
        }
    }
    iVar13 = param_2[2];
    if (*(int *)(param_1 + 0x894) < param_2[2]) {
        iVar13 = *(int *)(param_1 + 0x894);
    }
    iVar3 = param_2[3];
    if (*(int *)(param_1 + 0x898) < param_2[3]) {
        iVar3 = *(int *)(param_1 + 0x898);
    }
    iVar4 = *param_2;
    if (*param_2 < *(int *)(param_1 + 0x88c)) {
        iVar4 = *(int *)(param_1 + 0x88c);
    }
    iVar5 = param_2[1];
    if (param_2[1] < *(int *)(param_1 + 0x890)) {
        iVar5 = *(int *)(param_1 + 0x890);
    }
    if ((iVar4 < iVar13) && (iVar5 < iVar3)) {
        local_d8 = (int *)CONCAT44(iVar5,iVar4);
        local_d0 = iVar13;
        local_cc = iVar3;
        lVar10 = FUN_1401b24c0(&local_d8);
        piVar12 = local_b8 + lVar10 * 4;
        local_d8 = piVar12;
        if (local_b8 < piVar12) {
            piVar14 = local_b8 + 3;
            do {
                iVar13 = piVar14[-2];
                iVar3 = *piVar14;
                if (iVar13 < iVar3) {
                    iVar4 = piVar14[-3];
                    iVar5 = piVar14[-1];
                    iVar9 = iVar4;
                    piVar12 = local_d8;
                    do {
                        for (; local_d8 = piVar12, iVar9 < iVar5; iVar9 = iVar9 + 1) {
                            iVar6 = *(int *)(param_1 + 0x89c);
                            iVar8 = iVar13 % *(int *)(param_1 + 0x8a0);
                            plVar7 = *(longlong **)
                                    (*(longlong *)(param_1 + 0x8e0) +
                                     (ulonglong)
                                             ((uint)(iVar9 % iVar6 < 0) * iVar6 +
                                              ((uint)(iVar8 < 0) * *(int *)(param_1 + 0x8a0) + iVar8) * iVar6 +
                                              iVar9 % iVar6) * 8);
                            if ((plVar7 != (longlong *)0x0) && (*(int *)(plVar7 + 0x62) == 0)) {
                                *(undefined4 *)(plVar7 + 0x62) = 1;
                                FUN_140383760();
                                *(uint *)((longlong)plVar7 + 0x2c) = *(uint *)((longlong)plVar7 + 0x2c) & 0xfffffff5
                                        ;
                                if (plVar7[0xb9] == 0) {
                                    pplVar2 = (longlong **)(plVar7 + 0xba);
                                    pplVar11 = (longlong **)(*plVar7 + 0x908);
                                    plVar7[0xb9] = (longlong)pplVar11;
                                    *pplVar2 = *pplVar11;
                                    *pplVar11 = plVar7;
                                    if (*pplVar2 != (longlong *)0x0) {
                                        (*pplVar2)[0xb9] = (longlong)pplVar2;
                                    }
                                    *(int *)(*plVar7 + 0x87c) = *(int *)(*plVar7 + 0x87c) + 1;
                                }
                            }
                            piVar12 = local_d8;
                        }
                        iVar13 = iVar13 + 1;
                        iVar9 = iVar4;
                    } while (iVar13 < iVar3);
                }
                piVar1 = piVar14 + 1;
                param_2 = local_c8;
                piVar14 = piVar14 + 4;
            } while (piVar1 < piVar12);
        }
    }
    *local_c0 = *param_2;
    local_c0[1] = param_2[1];
    local_c0[2] = param_2[2];
    local_c0[3] = param_2[3];
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack248);
    return;
}

