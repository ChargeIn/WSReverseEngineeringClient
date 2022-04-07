//
// Created by flop on 04.04.22.
//
#include "../../include.h"

ulonglong FUN_1401d8660(longlong *param_1,longlong *param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *local_res10 [3];
    undefined4 local_18 [4];

    if (param_2 == (longlong *)0x0) {
        return 0x80070057;
    }
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    if (lVar2 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,local_res10,0);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
        local_18[0] = 0xffffffff;
        (**(code **)(*local_res10[0] + 0x20))(local_res10[0],local_18);
        uVar1 = (**(code **)(*local_res10[0] + 0x28))(local_res10[0],0);
        if ((int)uVar1 < 0) {
            (**(code **)(*local_res10[0] + 8))();
            return (ulonglong)uVar1;
        }
        (**(code **)(*local_res10[0] + 8))();
    }
    return 0;
}



int FUN_1401d8710(longlong *param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    longlong *plVar2;

    if (param_3 == 0) {
        return 0;
    }
    if (param_2 == 0) {
        iVar1 = -0x7ff8ffa9;
    }
    else {
        plVar2 = (longlong *)FUN_14018b280(0x20);
        if (plVar2 == (longlong *)0x0) {
            iVar1 = -0x7ff8fff2;
        }
        else {
            *(undefined4 *)(plVar2 + 1) = 1;
            *plVar2 = (longlong)&PTR_LAB_140b5f4f0;
            plVar2[2] = param_2;
            plVar2[3] = param_3;
            iVar1 = (**(code **)(*param_1 + 0x68))(param_1,plVar2);
            if (iVar1 < 0) {
                (**(code **)(*plVar2 + 8))();
            }
            else {
                (**(code **)(*plVar2 + 8))(plVar2);
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}



undefined8 FUN_1401d87d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;

    if (param_2 == (longlong *)0x0) {
        uVar1 = 0x80070057;
    }
    else if ((*(byte *)(param_1 + 0x220) & 2) == 0) {
        uVar1 = 0x80070005;
    }
    else {
        lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
        uVar4 = lVar2 + *(longlong *)(param_1 + 0x238);
        lVar2 = FUN_14018b280(200,0);
        if (lVar2 == 0) {
            plVar3 = (longlong *)0x0;
        }
        else {
            plVar3 = (longlong *)
                    FUN_1401d97b0(lVar2,param_1,*(undefined8 *)(param_1 + 0x238),param_2,param_4);
        }
        FUN_14019e010();
        (**(code **)(*plVar3 + 8))(plVar3);
        *(ulonglong *)(param_1 + 0x238) = uVar4;
        if (*(ulonglong *)(param_1 + 0x228) < uVar4) {
            *(ulonglong *)(param_1 + 0x228) = uVar4;
        }
        uVar1 = 0;
    }
    return uVar1;
}



ulonglong FUN_1401d88b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                        undefined8 param_5)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *local_res20;

    if (param_4 == 0) {
        uVar2 = FUN_1401c5740(param_2,param_3,&local_res20);
        if ((int)uVar2 < 0) {
            return uVar2;
        }
    }
    else {
        if ((param_2 == 0) && (param_3 != 0)) {
            return 0x80070057;
        }
        local_res20 = (longlong *)FUN_14018b280(0x20);
        if (local_res20 == (longlong *)0x0) {
            return 0x8007000e;
        }
        *(undefined4 *)(local_res20 + 1) = 1;
        *local_res20 = (longlong)&PTR_LAB_140b5f4f0;
        local_res20[2] = param_2;
        local_res20[3] = param_3;
    }
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_res20,param_4,param_5);
    uVar2 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
        (**(code **)(*local_res20 + 8))();
    }
    else {
        (**(code **)(*local_res20 + 8))(local_res20);
        uVar2 = 0;
    }
    return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0001401d8a07)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1401d8980(undefined8 param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined4 local_18 [4];

    lVar2 = FUN_14018b280(0xb0,0);
    plVar4 = (longlong *)0x0;
    plVar3 = plVar4;
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_1401d9d90(lVar2,param_1);
    }
    uVar1 = FUN_14019e010();
    if (-1 < (int)uVar1) {
        local_18[0] = 0xffffffff;
        (**(code **)(_DAT_00000000 + 0x20))(0,local_18);
        uVar1 = (**(code **)(_DAT_00000000 + 0x28))(0,0);
        if (-1 < (int)uVar1) goto LAB_1401d8a02;
    }
    plVar4 = (longlong *)(ulonglong)uVar1;
    LAB_1401d8a02:
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
    }
    return plVar4;
}



void FUN_1401d8af0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined4 *puVar6;

    if ((*(code **)(param_1 + 0x28) != (code *)0x0) &&
        (iVar4 = (**(code **)(param_1 + 0x28))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x30))
                , iVar4 == 0)) {
        return;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0xc) == iVar4) {
        if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x10) = 0x10;
        }
        else {
            *(int *)(param_1 + 0x10) = iVar4 * 2;
        }
        uVar5 = FUN_14018c320(*(undefined8 *)(param_1 + 0x18),
                              (ulonglong)*(uint *)(param_1 + 0x10) * 0x30,8);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
    }
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    puVar6 = (undefined4 *)
            ((ulonglong)(uint)(*(int *)(param_1 + 0xc) * 3) * 0x10 + *(longlong *)(param_1 + 0x18));
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    puVar6[4] = *param_3;
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    puVar6[8] = *param_4;
    puVar6[9] = uVar1;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x20),0);
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return;
}



undefined4 FUN_1401d8bc0(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    puVar1 = param_1 + 1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)puVar1 == 0) {
        *param_1 = &PTR_LAB_140b5fe88;
        FUN_14018b900(param_1[3],0);
        FUN_14018b900(param_1[4],0);
        FUN_14018b900(param_1,0);
        uVar2 = 0;
    }
    return uVar2;
}



undefined (*) [16] FUN_1401d8c20(longlong param_1)

{
undefined (*pauVar1) [16];
undefined (*pauVar2) [16];
undefined (*pauVar3) [16];
float *pfVar4;
undefined auVar5 [16];
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;

if (*(longlong *)(param_1 + 0x20) == 0) {
pauVar1 = (undefined (*) [16])FUN_14018b280((ulonglong)*(uint *)(param_1 + 0xc) << 4,0);
pfVar4 = *(float **)(param_1 + 0x18);
*(undefined (**) [16])(param_1 + 0x20) = pauVar1;
pauVar3 = pauVar1[*(uint *)(param_1 + 0xc)];
if (pauVar1 < pauVar3) {
do {
pauVar2 = pauVar1[1];
fVar8 = (pfVar4[5] - pfVar4[1]) * 0.0 - (pfVar4[9] - pfVar4[1]) * (pfVar4[6] - pfVar4[2]);
fVar9 = (pfVar4[8] - *pfVar4) * 0.0 - (pfVar4[4] - *pfVar4) * 0.0;
fVar10 = (pfVar4[9] - pfVar4[1]) * (pfVar4[4] - *pfVar4) -
         (pfVar4[8] - *pfVar4) * (pfVar4[5] - pfVar4[1]);
fVar11 = (pfVar4[0xb] - pfVar4[3]) * (pfVar4[7] - pfVar4[3]) -
         (pfVar4[0xb] - pfVar4[3]) * (pfVar4[7] - pfVar4[3]);
fVar6 = fVar9 * fVar9;
fVar7 = fVar8 * fVar8 + fVar6 + 0.0;
auVar5 = rsqrtss(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar6))),
                 CONCAT412(fVar11 * fVar11,CONCAT48(fVar10 * fVar10,CONCAT44(fVar6,fVar7))))
;
fVar6 = SUB164(auVar5,0);
fVar6 = (3.0 - fVar7 * fVar6 * fVar6) * 0.5 * fVar6;
if (fVar6 <= 0.0) {
fVar6 = 0.0;
}
*pauVar1 = CONCAT412(fVar6 * fVar11,
                     CONCAT48(fVar6 * fVar10,CONCAT44(fVar6 * fVar9,fVar6 * fVar8)));
pauVar1 = pauVar2;
pfVar4 = pfVar4 + 0xc;
} while (pauVar2 < pauVar3);
return *(undefined (**) [16])(param_1 + 0x20);
}
}
else {
pauVar1 = *(undefined (**) [16])(param_1 + 0x20);
}
return pauVar1;
}



undefined8 * FUN_1401d8d20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;

    uVar7 = 0;
    *param_1 = &PTR_LAB_140b600e0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x94) = 3;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    (**(code **)*param_2)();
    param_1[3] = param_2[2];
    param_1[4] = 0;
    *param_1 = &PTR_LAB_140b5feb0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x16] = param_3;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    pDVar2 = (DWORD *)(lVar3 + 0x12f8);
    DVar6 = GetCurrentThreadId();
    if (*pDVar2 == DVar6) {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar3 + 0x1300);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *pDVar2 = DVar6;
                goto LAB_1401d8e14;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401d8e14:
    lVar5 = *(longlong *)(lVar3 + 0x12a0);
    *(longlong *)(lVar3 + 0x12a0) = lVar5 + 1;
    if (lVar5 == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x12f0) + 0x18))();
    }
    if (*(ulonglong *)(lVar3 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(lVar3 + 0x1300) = 0;
        if (*(longlong *)(lVar3 + 0x1308) != 0) {
            if (*(longlong *)(lVar3 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar3 + 0x1310);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar3 + 0x1310));
        }
    }
    else {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + -1;
    }
    return param_1;
}



undefined8 FUN_1401d8eb0(undefined8 param_1,ulonglong param_2)

{
    FUN_1401da4f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1401d8f00(longlong *param_1)

{
    int iVar1;
    longlong lVar2;

    if (*(int *)(param_1 + 0x15) == 0) {
        iVar1 = (**(code **)(*(longlong *)param_1[2] + 0xa0))((longlong *)param_1[2],param_1);
        if (-1 < iVar1) {
            return;
        }
        lVar2 = *param_1;
        if (iVar1 == -0x7fffbfff) {
            // WARNING: Could not recover jumptable at 0x0001401d8f3c. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(lVar2 + 0x58))(param_1,0);
            return;
        }
    }
    else {
        lVar2 = *param_1;
        iVar1 = -0x5fdcfffe;
    }
    // WARNING: Could not recover jumptable at 0x0001401d8f4d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(lVar2 + 0x60))(param_1,iVar1);
    return;
}



void FUN_1401d8f60(longlong param_1)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
int iVar6;
DWORD DVar7;
HANDLE hObject;
ulonglong uVar8;

iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
if (*(int *)(*(longlong **)(param_1 + 0x10) + 1) == 1) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))();
}
lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar7 = GetCurrentThreadId();
uVar8 = 0;
if (*pDVar2 == DVar7) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar7;
goto LAB_1401d8ff9;
}
uVar8 = uVar8 + 1;
} while (uVar8 < 0x400);
FUN_14019fb60(pDVar2);
}
LAB_1401d8ff9:
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar8 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar8 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
if (iVar6 < 0) {
FUN_1401da930(param_1,iVar6);
}
else {
FUN_1401da7c0(param_1,0);
}
return;
}



void FUN_1401d90a0(longlong param_1,undefined4 param_2)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
DWORD DVar6;
HANDLE hObject;
ulonglong uVar7;

if (*(int *)(*(longlong **)(param_1 + 0x10) + 1) == 1) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))();
}
lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar2 == DVar6) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar6;
goto LAB_1401d9125;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar2);
}
LAB_1401d9125:
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar7 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
FUN_1401da930(param_1,param_2);
return;
}



undefined8 *
FUN_1401d91c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
              undefined8 param_5)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    longlong lVar7;
    HANDLE hObject;
    ulonglong uVar8;

    FUN_1401da420(param_1,param_2,param_5);
    param_1[0x16] = param_3;
    param_1[0x17] = param_4;
    *param_1 = &PTR_LAB_140b5ff20;
    (**(code **)*param_4)();
    uVar8 = 0;
    param_1[0x18] = 0;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    pDVar2 = (DWORD *)(lVar3 + 0x12f8);
    DVar6 = GetCurrentThreadId();
    if (*pDVar2 == DVar6) {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar3 + 0x1300);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *pDVar2 = DVar6;
                goto LAB_1401d9264;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401d9264:
    *(longlong *)(lVar3 + 0x12a8) = *(longlong *)(lVar3 + 0x12a8) + 1;
    lVar7 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    lVar5 = *(longlong *)(lVar3 + 0x12a0);
    *(longlong *)(lVar3 + 0x12b0) = *(longlong *)(lVar3 + 0x12b0) + lVar7;
    *(longlong *)(lVar3 + 0x12a0) = lVar5 + 1;
    if (lVar5 == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x12f0) + 0x18))();
    }
    if (*(ulonglong *)(lVar3 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(lVar3 + 0x1300) = 0;
        if (*(longlong *)(lVar3 + 0x1308) != 0) {
            if (*(longlong *)(lVar3 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar3 + 0x1310);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar3 + 0x1310));
        }
    }
    else {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + -1;
    }
    return param_1;
}



void FUN_1401d9370(longlong *param_1,int param_2)

{
longlong lVar1;
int iVar2;
longlong lVar3;
longlong lVar4;
int iVar5;

if (*(int *)(param_1 + 0x15) == 0) {
lVar3 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
iVar2 = -0x80000000;
if ((ulonglong)(lVar3 - param_1[0x18]) < 0x80000000) {
iVar2 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
iVar2 = iVar2 - *(int *)(param_1 + 0x18);
if (iVar2 == 0) {
// WARNING: Could not recover jumptable at 0x0001401d93d5. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*param_1 + 0x58))(param_1);
return;
}
}
lVar3 = param_1[0x18];
lVar1 = *(longlong *)param_1[2];
iVar5 = 0;
if (param_2 != 0) {
iVar5 = iVar2;
}
lVar4 = (**(code **)(*(longlong *)param_1[0x17] + 0x20))();
iVar2 = (**(code **)(lVar1 + 0xa8))
        (param_1[2],param_1[0x16] + lVar3,lVar3 + lVar4,iVar5,param_1);
if (iVar2 < 0) {
// WARNING: Could not recover jumptable at 0x0001401d9450. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*param_1 + 0x60))(param_1,iVar2);
return;
}
}
else {
(**(code **)(*param_1 + 0x60))(param_1,0xa0230002);
}
return;
}



undefined8 *
FUN_1401d97b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
              undefined8 param_5)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    longlong lVar7;
    HANDLE hObject;
    ulonglong uVar8;

    FUN_1401da420(param_1,param_2,param_5);
    param_1[0x16] = param_3;
    param_1[0x17] = param_4;
    *param_1 = &PTR_LAB_140b5ff90;
    (**(code **)*param_4)();
    uVar8 = 0;
    param_1[0x18] = 0;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    pDVar2 = (DWORD *)(lVar3 + 0x12f8);
    DVar6 = GetCurrentThreadId();
    if (*pDVar2 == DVar6) {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar3 + 0x1300);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *pDVar2 = DVar6;
                goto LAB_1401d9854;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401d9854:
    *(longlong *)(lVar3 + 0x12c8) = *(longlong *)(lVar3 + 0x12c8) + 1;
    lVar7 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    lVar5 = *(longlong *)(lVar3 + 0x12a0);
    *(longlong *)(lVar3 + 0x12d0) = *(longlong *)(lVar3 + 0x12d0) + lVar7;
    *(longlong *)(lVar3 + 0x12a0) = lVar5 + 1;
    if (lVar5 == 0) {
        (**(code **)(**(longlong **)(lVar3 + 0x12f0) + 0x18))();
    }
    if (*(ulonglong *)(lVar3 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(lVar3 + 0x1300) = 0;
        if (*(longlong *)(lVar3 + 0x1308) != 0) {
            if (*(longlong *)(lVar3 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar3 + 0x1310);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar3 + 0x1310));
        }
    }
    else {
        *(longlong *)(lVar3 + 0x1300) = *(longlong *)(lVar3 + 0x1300) + -1;
    }
    return param_1;
}



void FUN_1401d9960(longlong *param_1,int param_2)

{
longlong lVar1;
int iVar2;
longlong lVar3;
longlong lVar4;
int iVar5;

if (*(int *)(param_1 + 0x15) == 0) {
lVar3 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
iVar2 = -0x80000000;
if ((ulonglong)(lVar3 - param_1[0x18]) < 0x80000000) {
iVar2 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
iVar2 = iVar2 - *(int *)(param_1 + 0x18);
if (iVar2 == 0) {
// WARNING: Could not recover jumptable at 0x0001401d99c5. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*param_1 + 0x58))(param_1);
return;
}
}
lVar3 = param_1[0x18];
lVar1 = *(longlong *)param_1[2];
iVar5 = 0;
if (param_2 != 0) {
iVar5 = iVar2;
}
lVar4 = (**(code **)(*(longlong *)param_1[0x17] + 0x18))();
iVar2 = (**(code **)(lVar1 + 0xb0))
        (param_1[2],param_1[0x16] + lVar3,lVar3 + lVar4,iVar5,param_1);
if (iVar2 < 0) {
// WARNING: Could not recover jumptable at 0x0001401d9a40. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*param_1 + 0x60))(param_1,iVar2);
return;
}
}
else {
(**(code **)(*param_1 + 0x60))(param_1,0xa0230002);
}
return;
}



void FUN_1401d9a60(longlong *param_1,ulonglong param_2)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
DWORD DVar6;
ulonglong uVar7;
HANDLE pvVar8;

param_2 = param_2 & 0xffffffff;
param_1[0x18] = param_1[0x18] + param_2;
uVar7 = (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
if ((ulonglong)param_1[0x18] < uVar7) {
lVar4 = *(longlong *)(param_1[2] + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar2 == DVar6) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar6;
goto LAB_1401d9af4;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar2);
}
LAB_1401d9af4:
*(longlong *)(lVar4 + 0x12e0) = *(longlong *)(lVar4 + 0x12e0) + param_2;
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)pvVar8);
if (uVar7 != 0) {
CloseHandle(pvVar8);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
(**(code **)(*param_1 + 0x48))(param_1,1);
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
(**(code **)(*param_1 + 0x48))(param_1,1);
}
}
else {
if (*(int *)((longlong *)param_1[2] + 1) == 1) {
(**(code **)(*(longlong *)param_1[2] + 0xd0))();
}
lVar4 = *(longlong *)(param_1[2] + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar2 == DVar6) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar6;
goto LAB_1401d9bd4;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar2);
}
LAB_1401d9bd4:
*(longlong *)(lVar4 + 0x12d8) = *(longlong *)(lVar4 + 0x12d8) + 1;
*(longlong *)(lVar4 + 0x12e0) = *(longlong *)(lVar4 + 0x12e0) + param_2;
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)pvVar8);
if (uVar7 != 0) {
CloseHandle(pvVar8);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
FUN_1401da7c0(param_1,0);
}
return;
}



undefined8 * FUN_1401d9d90(undefined8 *param_1,undefined8 *param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    DWORD DVar7;
    HANDLE hObject;
    ulonglong uVar8;

    uVar8 = 0;
    *param_1 = &PTR_LAB_140b600e0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x94) = 3;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    (**(code **)*param_2)();
    uVar3 = param_2[2];
    param_1[4] = 0;
    param_1[3] = uVar3;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = &PTR_LAB_140b60000;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    pDVar2 = (DWORD *)(lVar4 + 0x12f8);
    DVar7 = GetCurrentThreadId();
    if (*pDVar2 == DVar7) {
        *(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar4 + 0x1300);
            uVar5 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
            if (uVar5 == 0) {
                *pDVar2 = DVar7;
                goto LAB_1401d9e75;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401d9e75:
    lVar6 = *(longlong *)(lVar4 + 0x12a0);
    *(longlong *)(lVar4 + 0x12a0) = lVar6 + 1;
    if (lVar6 == 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x18))();
    }
    if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(lVar4 + 0x1300) = 0;
        if (*(longlong *)(lVar4 + 0x1308) != 0) {
            if (*(longlong *)(lVar4 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar4 + 0x1310);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar4 + 0x1310));
        }
    }
    else {
        *(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
    }
    return param_1;
}



void FUN_1401d9f20(longlong param_1)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
int iVar6;
DWORD DVar7;
HANDLE hObject;
ulonglong uVar8;

iVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xc0))();
if (*(int *)(*(longlong **)(param_1 + 0x10) + 1) == 1) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))();
}
lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar7 = GetCurrentThreadId();
uVar8 = 0;
if (*pDVar2 == DVar7) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar7;
goto LAB_1401d9fb4;
}
uVar8 = uVar8 + 1;
} while (uVar8 < 0x400);
FUN_14019fb60(pDVar2);
}
LAB_1401d9fb4:
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar8 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar8 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
if (iVar6 < 0) {
FUN_1401da930(param_1,iVar6);
}
else {
FUN_1401da7c0(param_1,0);
}
return;
}



undefined8 * FUN_1401da060(undefined8 *param_1,undefined8 *param_2)

{
    ulonglong *puVar1;
    DWORD *pDVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    DWORD DVar7;
    HANDLE hObject;
    ulonglong uVar8;

    uVar8 = 0;
    *param_1 = &PTR_LAB_140b600e0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x94) = 3;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    (**(code **)*param_2)();
    uVar3 = param_2[2];
    param_1[4] = 0;
    param_1[3] = uVar3;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = &PTR_LAB_140b60070;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    pDVar2 = (DWORD *)(lVar4 + 0x12f8);
    DVar7 = GetCurrentThreadId();
    if (*pDVar2 == DVar7) {
        *(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar4 + 0x1300);
            uVar5 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
            if (uVar5 == 0) {
                *pDVar2 = DVar7;
                goto LAB_1401da145;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < 0x400);
        FUN_14019fb60(pDVar2);
    }
    LAB_1401da145:
    lVar6 = *(longlong *)(lVar4 + 0x12a0);
    *(longlong *)(lVar4 + 0x12a0) = lVar6 + 1;
    if (lVar6 == 0) {
        (**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x18))();
    }
    if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
        *pDVar2 = 0;
        *(undefined8 *)(lVar4 + 0x1300) = 0;
        if (*(longlong *)(lVar4 + 0x1308) != 0) {
            if (*(longlong *)(lVar4 + 0x1310) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar4 + 0x1310);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar8 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar8 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar4 + 0x1310));
        }
    }
    else {
        *(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
    }
    return param_1;
}



void FUN_1401da1f0(longlong param_1)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
DWORD DVar6;
HANDLE hObject;
ulonglong uVar7;

(**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))();
lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar2 == DVar6) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar6;
goto LAB_1401da26a;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar2,DVar6);
}
LAB_1401da26a:
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar7 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
FUN_1401da7c0(param_1,0);
return;
}



void FUN_1401da300(longlong param_1,undefined4 param_2)

{
ulonglong *puVar1;
DWORD *pDVar2;
longlong *plVar3;
longlong lVar4;
ulonglong uVar5;
DWORD DVar6;
HANDLE hObject;
ulonglong uVar7;

(**(code **)(**(longlong **)(param_1 + 0x10) + 0xd0))();
lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pDVar2 = (DWORD *)(lVar4 + 0x12f8);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar2 == DVar6) {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1300);
uVar5 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
if (uVar5 == 0) {
*pDVar2 = DVar6;
goto LAB_1401da388;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar2,DVar6);
}
LAB_1401da388:
plVar3 = (longlong *)(lVar4 + 0x12a0);
*plVar3 = *plVar3 + -1;
if (*plVar3 == 0) {
(**(code **)(**(longlong **)(lVar4 + 0x12f0) + 0x10))();
}
if (*(ulonglong *)(lVar4 + 0x1300) < 2) {
*pDVar2 = 0;
*(undefined8 *)(lVar4 + 0x1300) = 0;
if (*(longlong *)(lVar4 + 0x1308) != 0) {
if (*(longlong *)(lVar4 + 0x1310) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar4 + 0x1310);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar7 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar4 + 0x1310));
}
}
else {
*(longlong *)(lVar4 + 0x1300) = *(longlong *)(lVar4 + 0x1300) + -1;
}
FUN_1401da930(param_1,param_2);
return;
}



undefined8 * FUN_1401da420(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
    undefined8 uVar1;

    *param_1 = &PTR_LAB_140b600e0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x94) = 3;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = param_2;
    (**(code **)*param_2)(param_2);
    uVar1 = param_2[2];
    param_1[4] = 0;
    param_1[3] = uVar1;
    if (param_3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
        *(undefined4 *)(param_1 + 5) = 1;
        *(undefined4 *)(param_1 + 6) = *param_3;
        param_1[8] = *(undefined8 *)(param_3 + 4);
        param_1[7] = *(undefined8 *)(param_3 + 2);
        param_1[9] = *(undefined8 *)(param_3 + 6);
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    return param_1;
}



void FUN_1401da4f0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b600e0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    FUN_140195d70(param_1 + 10);
    *(undefined4 *)(param_1 + 10) = 0;
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xd] = param_1[0xc];
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    return;
}



int FUN_1401da560(longlong *param_1)

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
            (**(code **)(*param_1 + 0x38))(param_1,1);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1401da590(longlong *param_1,longlong param_2)

{
ulonglong *puVar1;
longlong lVar2;
ulonglong uVar3;
longlong lVar4;
longlong lVar5;
DWORD DVar6;
HANDLE hObject;
ulonglong uVar7;
DWORD *pDVar8;

lVar2 = param_1[2];
param_1[4] = param_2;
pDVar8 = (DWORD *)(lVar2 + 0x298);
DVar6 = GetCurrentThreadId();
uVar7 = 0;
if (*pDVar8 == DVar6) {
*(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar2 + 0x2a0);
uVar3 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
if (uVar3 == 0) {
*pDVar8 = DVar6;
goto LAB_1401da5f8;
}
uVar7 = uVar7 + 1;
} while (uVar7 < 0x400);
FUN_14019fb60(pDVar8,DVar6);
}
LAB_1401da5f8:
lVar4 = param_1[2];
lVar5 = *(longlong *)(lVar4 + 0x250);
param_1[0x14] = 0;
param_1[0x13] = lVar5;
**(longlong ***)(lVar4 + 0x250) = param_1;
*(longlong **)(lVar4 + 0x250) = param_1 + 0x14;
if (param_1 == *(longlong **)(param_1[2] + 0x248)) {
(**(code **)(*param_1 + 0x48))(param_1,0);
}
if (*(ulonglong *)(lVar2 + 0x2a0) < 2) {
*pDVar8 = 0;
*(undefined8 *)(lVar2 + 0x2a0) = 0;
if (*(longlong *)(lVar2 + 0x2a8) != 0) {
if (*(longlong *)(lVar2 + 0x2b0) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar2 + 0x2b0);
uVar7 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar7 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar2 + 0x2b0));
}
return;
}
*(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + -1;
return;
}



void FUN_1401da7c0(longlong *param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    DWORD *pDVar5;
    ulonglong uVar6;

    (**(code **)*param_1)();
    lVar2 = param_1[2];
    uVar6 = 0;
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        *(longlong *)param_1[0x13] = param_1[0x14];
        if (param_1[0x14] == 0) {
            *(longlong *)(lVar2 + 0x250) = param_1[0x13];
        }
        else {
            *(longlong *)(param_1[0x14] + 0x98) = param_1[0x13];
        }
        param_1[0x13] = 0;
        param_1[0x14] = 0;
    }
    if (*(longlong **)(param_1[2] + 0x248) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1[2] + 0x248) + 0x48))();
    }
    lVar2 = param_1[2];
    pDVar5 = (DWORD *)(lVar2 + 0x298);
    if (*(ulonglong *)(lVar2 + 0x2a0) < 2) {
        *pDVar5 = 0;
        *(undefined8 *)(lVar2 + 0x2a0) = 0;
        if (*(longlong *)(lVar2 + 0x2a8) != 0) {
            if (*(longlong *)(lVar2 + 0x2b0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar2 + 0x2b0);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar3 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar2 + 0x2b0));
        }
    }
    else {
        *(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + -1;
    }
    FUN_14019e200(param_1[4],0,0);
    if (*(int *)(param_1 + 5) != 0) {
        FUN_140195960(param_1 + 10,0,param_1 + 6,2);
    }
    DVar4 = GetCurrentThreadId();
    if (*pDVar5 == DVar4) {
        *(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar2 + 0x2a0);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar5 = DVar4;
                goto LAB_1401da906;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar5);
    }
    LAB_1401da906:
    // WARNING: Could not recover jumptable at 0x0001401da920. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 8))(param_1);
    return;
}



void FUN_1401da930(longlong *param_1,undefined4 param_2)

{
ulonglong *puVar1;
longlong lVar2;
ulonglong uVar3;
DWORD DVar4;
HANDLE hObject;
DWORD *pDVar5;
ulonglong uVar6;

(**(code **)*param_1)();
lVar2 = param_1[2];
uVar6 = 0;
if ((longlong *)param_1[0x13] != (longlong *)0x0) {
*(longlong *)param_1[0x13] = param_1[0x14];
if (param_1[0x14] == 0) {
*(longlong *)(lVar2 + 0x250) = param_1[0x13];
}
else {
*(longlong *)(param_1[0x14] + 0x98) = param_1[0x13];
}
param_1[0x13] = 0;
param_1[0x14] = 0;
}
if (*(longlong **)(param_1[2] + 0x248) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1[2] + 0x248) + 0x48))();
}
lVar2 = param_1[2];
pDVar5 = (DWORD *)(lVar2 + 0x298);
if (*(ulonglong *)(lVar2 + 0x2a0) < 2) {
*pDVar5 = 0;
*(undefined8 *)(lVar2 + 0x2a0) = 0;
if (*(longlong *)(lVar2 + 0x2a8) != 0) {
if (*(longlong *)(lVar2 + 0x2b0) == 0) {
hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
LOCK();
puVar1 = (ulonglong *)(lVar2 + 0x2b0);
uVar3 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong)hObject);
if (uVar3 != 0) {
CloseHandle(hObject);
}
}
SetEvent(*(HANDLE *)(lVar2 + 0x2b0));
}
}
else {
*(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + -1;
}
FUN_14019e200(param_1[4],param_2,0);
DVar4 = GetCurrentThreadId();
if (*pDVar5 == DVar4) {
*(longlong *)(lVar2 + 0x2a0) = *(longlong *)(lVar2 + 0x2a0) + 1;
}
else {
do {
LOCK();
puVar1 = (ulonglong *)(lVar2 + 0x2a0);
uVar3 = *puVar1;
*puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
if (uVar3 == 0) {
*pDVar5 = DVar4;
goto LAB_1401daa68;
}
uVar6 = uVar6 + 1;
} while (uVar6 < 0x400);
FUN_14019fb60(pDVar5);
}
LAB_1401daa68:
// WARNING: Could not recover jumptable at 0x0001401daa88. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*param_1 + 8))(param_1);
return;
}



undefined8 * FUN_1401daa90(undefined8 *param_1)

{
    param_1[2] = 2;
    *(undefined4 *)(param_1 + 3) = 0x3f800000;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1407e4830((longlong)param_1 + 0x1c,0,0x40);
    *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401dab50(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4,
                   longlong param_5)

{
    undefined4 uVar1;
    ulonglong uVar2;
    code *pcVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong *plVar8;
    longlong lVar9;

    lVar6 = 0;
    *(float *)(param_4 + 3) = param_3 * *(float *)(param_5 + 0x88);
    uVar2 = *(ulonglong *)(param_5 + 8);
    lVar9 = lVar6;
    if (uVar2 != 0) {
        if (DAT_140c3fe70 < uVar2) {
            lVar9 = 0;
        }
        else {
            lVar9 = DAT_140c3fe68 + uVar2;
        }
    }
    *param_4 = lVar9;
    *(undefined4 *)(param_4 + 1) = 0;
    *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(param_5 + 0xb8);
    uVar1 = *(undefined4 *)(param_5 + 0xbc);
    *(undefined4 *)((longlong)param_4 + 0x14) = 0;
    *(undefined4 *)(param_4 + 2) = uVar1;
    *(undefined4 *)((longlong)param_4 + 0x5c) = *(undefined4 *)(param_5 + 0x40);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_5 + 0x44);
    lVar9 = 6;
    *(undefined4 *)((longlong)param_4 + 100) = *(undefined4 *)(param_5 + 0x48);
    *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(param_5 + 0x4c);
    *(undefined4 *)((longlong)param_4 + 0x6c) = *(undefined4 *)(param_5 + 0x50);
    plVar8 = param_4 + 0xf;
    *(undefined4 *)(param_4 + 0xe) = *(undefined4 *)(param_5 + 0x54);
    do {
        uVar2 = *(ulonglong *)((param_5 - (longlong)param_4) + -0x68 + (longlong)plVar8);
        lVar5 = lVar6;
        if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
            lVar5 = DAT_140c3fe68 + uVar2;
        }
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = 0x10;
    puVar7 = (undefined4 *)((longlong)param_4 + 0x1c);
    do {
        *puVar7 = *(undefined4 *)((param_5 - (longlong)param_4) + 0xf4 + (longlong)puVar7);
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
    *(undefined4 *)(param_4 + 0x15) = 0;
    uVar2 = *(ulonglong *)(param_5 + 0x58);
    lVar9 = lVar6;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        lVar9 = DAT_140c3fe68 + uVar2;
    }
    param_4[0x16] = lVar9;
    *(undefined4 *)(param_4 + 0x17) = *(undefined4 *)(param_5 + 0x60);
    *(undefined8 *)((longlong)param_4 + 0xbc) = 0;
    *(undefined8 *)((longlong)param_4 + 0xc4) = 0;
    *(undefined8 *)((longlong)param_4 + 0xcc) = 0;
    *(undefined8 *)((longlong)param_4 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_4 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_4 + 0xe4) = 0;
    if (*(int *)(param_5 + 100) != 0) {
        *(undefined *)((longlong)param_4 + 0xdc) = 0;
        pcVar3 = DAT_140c63840;
        *(undefined4 *)((longlong)param_4 + 0xbc) = 1;
        uVar1 = *(undefined4 *)(param_5 + 100);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xe4) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x68) != 0) {
        *(undefined4 *)(param_4 + 0x18) = 1;
        *(undefined *)((longlong)param_4 + 0xdd) = 1;
        uVar1 = *(undefined4 *)(param_5 + 0x68);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xe5) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x6c) != 0) {
        *(undefined4 *)((longlong)param_4 + 0xc4) = 3;
        *(undefined *)((longlong)param_4 + 0xde) = 0;
        uVar1 = *(undefined4 *)(param_5 + 0x6c);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xe6) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x70) != 0) {
        *(undefined4 *)(param_4 + 0x19) = 3;
        *(undefined *)((longlong)param_4 + 0xdf) = 1;
        uVar1 = *(undefined4 *)(param_5 + 0x70);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xe7) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x74) != 0) {
        *(undefined4 *)((longlong)param_4 + 0xcc) = 5;
        *(undefined *)(param_4 + 0x1c) = 0;
        uVar1 = *(undefined4 *)(param_5 + 0x74);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)(param_4 + 0x1d) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x78) != 0) {
        *(undefined4 *)(param_4 + 0x1a) = 5;
        *(undefined *)((longlong)param_4 + 0xe1) = 1;
        uVar1 = *(undefined4 *)(param_5 + 0x78);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xe9) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x7c) != 0) {
        *(undefined4 *)((longlong)param_4 + 0xd4) = 0x7fffffff;
        *(undefined *)((longlong)param_4 + 0xe2) = 0;
        uVar1 = *(undefined4 *)(param_5 + 0x7c);
        if (pcVar3 == (code *)0x0) {
            lVar9 = lVar6;
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar9 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xea) = *(undefined *)(lVar9 + 4);
    }
    pcVar3 = DAT_140c63840;
    if (*(int *)(param_5 + 0x80) != 0) {
        *(undefined4 *)(param_4 + 0x1b) = 0x7fffffff;
        *(undefined *)((longlong)param_4 + 0xe3) = 1;
        uVar1 = *(undefined4 *)(param_5 + 0x80);
        if (pcVar3 == (code *)0x0) {
            if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
                lVar6 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
            }
        }
        else {
            lVar6 = (*pcVar3)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
        }
        *(undefined *)((longlong)param_4 + 0xeb) = *(undefined *)(lVar6 + 4);
    }
    return;
}



ulonglong FUN_1401db030(short **param_1,short **param_2)

{
    uint uVar1;
    ulonglong in_RAX;
    short *psVar2;
    short *psVar3;
    uint *puVar4;
    uint uVar5;
    short **ppsVar6;

    if ((((*(float *)(param_2 + 3) != *(float *)(param_1 + 3)) ||
          (in_RAX = (ulonglong)*(uint *)((longlong)param_2 + 0xc),
    *(uint *)((longlong)param_1 + 0xc) != *(uint *)((longlong)param_2 + 0xc))) ||
    (in_RAX = (ulonglong)*(uint *)(param_2 + 2), *(uint *)(param_1 + 2) != *(uint *)(param_2 + 2))
    ) || ((in_RAX = (ulonglong)*(uint *)(param_2 + 1),
            *(uint *)(param_1 + 1) != *(uint *)(param_2 + 1) ||
            (in_RAX = (ulonglong)*(uint *)((longlong)param_2 + 0x14),
    *(uint *)((longlong)param_1 + 0x14) != *(uint *)((longlong)param_2 + 0x14))))) {
        return in_RAX & 0xffffffffffffff00;
    }
    psVar3 = *param_1;
    if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
        psVar3 = (short *)0x0;
    }
    psVar2 = *param_2;
    if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
        psVar2 = (short *)0x0;
    }
    if (psVar3 == (short *)0x0) {
        if (psVar2 != (short *)0x0) goto LAB_1401db194;
    }
    else {
        if ((psVar2 == (short *)0x0) ||
            (psVar2 = (short *)FUN_14018e2c0(psVar3,psVar2), (int)psVar2 != 0)) goto LAB_1401db194;
        uVar5 = 0;
        ppsVar6 = param_1 + 0xf;
        puVar4 = (uint *)((longlong)param_1 + 0x5c);
        do {
            uVar1 = *(uint *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
            psVar2 = (short *)(ulonglong)uVar1;
            if (*puVar4 != uVar1) goto LAB_1401db194;
            psVar2 = (short *)0x0;
            if (((*ppsVar6 == (short *)0x0) !=
                 (*(longlong *)(((longlong)param_2 - (longlong)param_1) + (longlong)ppsVar6) == 0)) ||
            ((*ppsVar6 != (short *)0x0 && (psVar2 = (short *)FUN_14018e2c0(), (int)psVar2 != 0))))
            goto LAB_1401db194;
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 1;
            ppsVar6 = ppsVar6 + 1;
        } while (uVar5 < 6);
    }
    uVar5 = 0;
    puVar4 = (uint *)((longlong)param_1 + 0x1c);
    do {
        uVar1 = *(uint *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
        psVar2 = (short *)(ulonglong)uVar1;
        if (*puVar4 != uVar1) goto LAB_1401db194;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
    } while (uVar5 < 0x10);
    psVar2 = (short *)(ulonglong)*(uint *)(param_2 + 0x15);
    if (*(uint *)(param_1 + 0x15) == *(uint *)(param_2 + 0x15)) {
        psVar3 = param_1[0x16];
        if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
            psVar3 = (short *)0x0;
        }
        psVar2 = param_2[0x16];
        if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
            psVar2 = (short *)0x0;
        }
        if (psVar3 == (short *)0x0) {
            if (psVar2 != (short *)0x0) goto LAB_1401db194;
        }
        else if ((psVar2 == (short *)0x0) ||
                 (psVar2 = (short *)FUN_14018e2c0(psVar3,psVar2), (int)psVar2 != 0)) goto LAB_1401db194;
        psVar2 = (short *)(ulonglong)*(uint *)(param_2 + 0x17);
        if ((*(uint *)(param_1 + 0x17) == *(uint *)(param_2 + 0x17)) &&
            (((psVar2 = (short *)FUN_1407e6af0((longlong)param_1 + 0xbc,(longlong)param_2 + 0xbc,0x20),
        (int)psVar2 == 0 &&
        (psVar2 = *(short **)((longlong)param_1 + 0xdc),
        psVar2 == *(short **)((longlong)param_2 + 0xdc))) &&
        (psVar2 = *(short **)((longlong)param_1 + 0xe4),
        psVar2 == *(short **)((longlong)param_2 + 0xe4))))) {
            return CONCAT71((int7)((ulonglong)psVar2 >> 8),1);
        }
    }
    LAB_1401db194:
    return (ulonglong)psVar2 & 0xffffffffffffff00;
}



int FUN_1401db210(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c63798 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c63798)();
        return 0;
    }
    lVar2 = FUN_14018b280(0x170,0);
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = FUN_1401dc200(lVar2);
    }
    iVar1 = FUN_1401dc490(lVar2);
    if (iVar1 < 0) {
        if (lVar2 != 0) {
            FUN_1401dc2b0(lVar2);
            FUN_14018b900(lVar2,0);
        }
        return iVar1;
    }
    DAT_140c63798 = (undefined8 *)lVar2;
    return 0;
}



int FUN_1401db2a0(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_14018b280(0xc80,0);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_1401df340(lVar2);
    }
    iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
    if (iVar1 < 0) {
        (**(code **)(*plVar3 + 0x168))(plVar3,1);
    }
    else {
        *param_3 = plVar3;
        iVar1 = 0;
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401db470(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
    undefined8 *puVar1;
    uint uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    uint uVar10;

    if (_DAT_140c8a270 == 0) {
        puVar6 = &DAT_140d10170;
        puVar8 = &DAT_140d2ecf0;
        lVar5 = 0x1eb;
        puVar1 = &DAT_140db90b0;
        do {
            puVar4 = puVar1;
            *puVar4 = 0x9600000096;
            puVar4[1] = 0x9600000096;
            puVar4[2] = 0x9600000096;
            puVar4[3] = 0x9600000096;
            puVar4[4] = 0x9600000096;
            puVar4[5] = 0x9600000096;
            puVar4[6] = 0x9600000096;
            puVar4[7] = 0x9600000096;
            lVar5 = lVar5 + -1;
            puVar1 = puVar4 + 8;
        } while (lVar5 != 0);
        puVar4[8] = 0x9600000096;
        puVar4[9] = 0x9600000096;
        puVar4[10] = 0x9600000096;
        puVar4[0xb] = 0x9600000096;
        puVar9 = &DAT_140d64910;
        uVar2 = 0;
        do {
            *puVar8 = uVar2;
            puVar8[1] = uVar2;
            puVar8[2] = uVar2;
            puVar8[3] = uVar2;
            *puVar6 = uVar2;
            puVar8[4] = uVar2;
            puVar6[1] = uVar2;
            puVar8[5] = uVar2;
            puVar6[2] = uVar2;
            puVar8[6] = uVar2;
            puVar6[3] = uVar2;
            uVar10 = uVar2 + 1;
            puVar6 = puVar6 + 4;
            puVar8 = puVar8 + 7;
            puVar7 = puVar9;
            for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
                *puVar7 = uVar2;
                puVar7 = puVar7 + 1;
            }
            puVar9 = puVar9 + 0xb;
            uVar2 = uVar10;
        } while (uVar10 < 0x1eb8);
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c6556c == 0) {
                iVar3 = FUN_14021a920();
                if (iVar3 < 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = (**(code **)(*DAT_140c63cb0 + 0x28))();
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = (*DAT_140c63838)();
        }
        uVar10 = 0;
        if (uVar2 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    if (_DAT_140c6556c == 0) {
                        iVar3 = FUN_14021a920();
                        if (iVar3 < 0) {
                            lVar5 = 0;
                        }
                        else {
                            lVar5 = (**(code **)(*DAT_140c63cb0 + 0x20))();
                        }
                    }
                    else {
                        lVar5 = 0;
                    }
                }
                else {
                    lVar5 = (*DAT_140c63848)(&PTR_u_ModelSequenceByMode_140a6b9e8,uVar10,DAT_140c63858);
                }
                if (*(uint *)(lVar5 + 4) < 0x1eb8) {
                    if (*(int *)(lVar5 + 8) != 0) {
                        (&DAT_140d10174)[(ulonglong)*(uint *)(lVar5 + 4) * 4] = *(int *)(lVar5 + 8);
                    }
                    if (*(int *)(lVar5 + 0xc) != 0) {
                        (&DAT_140d10178)[(ulonglong)*(uint *)(lVar5 + 4) * 4] = *(int *)(lVar5 + 0xc);
                    }
                    if (*(int *)(lVar5 + 0x10) != 0) {
                        (&DAT_140d1017c)[(ulonglong)*(uint *)(lVar5 + 4) * 4] = *(int *)(lVar5 + 0x10);
                    }
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar2);
        }
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c640b0 == 0) {
                iVar3 = FUN_14021ad60();
                if (iVar3 < 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = (**(code **)(*DAT_140c63ee8 + 0x28))();
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = (*DAT_140c63838)();
        }
        uVar10 = 0;
        if (uVar2 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    if (_DAT_140c640b0 == 0) {
                        iVar3 = FUN_14021ad60();
                        if (iVar3 < 0) {
                            lVar5 = 0;
                        }
                        else {
                            lVar5 = (**(code **)(*DAT_140c63ee8 + 0x20))();
                        }
                    }
                    else {
                        lVar5 = 0;
                    }
                }
                else {
                    lVar5 = (*DAT_140c63848)(&PTR_u_ModelSequenceBySeatPosture_140a6ba20,uVar10,DAT_140c63858)
                            ;
                }
                if (*(uint *)(lVar5 + 4) < 0x1eb8) {
                    if (*(int *)(lVar5 + 8) != 0) {
                        (&DAT_140d2ecf4)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 8);
                    }
                    if (*(int *)(lVar5 + 0xc) != 0) {
                        (&DAT_140d2ecf0)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0xc);
                    }
                    if (*(int *)(lVar5 + 0x10) != 0) {
                        (&DAT_140d2ecf8)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0x10);
                    }
                    if (*(int *)(lVar5 + 0x14) != 0) {
                        (&DAT_140d2ecfc)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0x14);
                    }
                    if (*(int *)(lVar5 + 0x18) != 0) {
                        (&DAT_140d2ed00)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0x18);
                    }
                    if (*(int *)(lVar5 + 0x1c) != 0) {
                        (&DAT_140d2ed04)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0x1c);
                    }
                    if (*(int *)(lVar5 + 0x20) != 0) {
                        (&DAT_140d2ed08)[(ulonglong)*(uint *)(lVar5 + 4) * 7] = *(int *)(lVar5 + 0x20);
                    }
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar2);
        }
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c648a0 == 0) {
                iVar3 = FUN_14021b1a0();
                if (iVar3 < 0) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = (**(code **)(*DAT_140c653b0 + 0x28))();
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = (*DAT_140c63838)();
        }
        uVar10 = 0;
        if (uVar2 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    if (_DAT_140c648a0 == 0) {
                        iVar3 = FUN_14021b1a0();
                        if (iVar3 < 0) {
                            lVar5 = 0;
                        }
                        else {
                            lVar5 = (**(code **)(*DAT_140c653b0 + 0x20))();
                        }
                    }
                    else {
                        lVar5 = 0;
                    }
                }
                else {
                    lVar5 = (*DAT_140c63848)(&PTR_u_ModelSequenceByWeapon_140a6ba58,uVar10,DAT_140c63858);
                }
                if (*(uint *)(lVar5 + 4) < 0x1eb8) {
                    if (*(int *)(lVar5 + 8) != 0) {
                        *(int *)(&DAT_140d64914 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) = *(int *)(lVar5 + 8);
                    }
                    if (*(int *)(lVar5 + 0xc) != 0) {
                        *(int *)(&DAT_140d64918 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0xc);
                    }
                    if (*(int *)(lVar5 + 0x10) != 0) {
                        *(int *)(&DAT_140d6491c + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x10);
                    }
                    if (*(int *)(lVar5 + 0x14) != 0) {
                        *(int *)(&DAT_140d64920 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x14);
                    }
                    if (*(int *)(lVar5 + 0x18) != 0) {
                        *(int *)(&DAT_140d64924 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x18);
                    }
                    if (*(int *)(lVar5 + 0x1c) != 0) {
                        *(int *)(&DAT_140d64928 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x1c);
                    }
                    if (*(int *)(lVar5 + 0x20) != 0) {
                        *(int *)(&DAT_140d6492c + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x20);
                    }
                    if (*(int *)(lVar5 + 0x24) != 0) {
                        *(int *)(&DAT_140d64930 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x24);
                    }
                    if (*(int *)(lVar5 + 0x28) != 0) {
                        *(int *)(&DAT_140d64934 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x28);
                    }
                    if (*(int *)(lVar5 + 0x2c) != 0) {
                        *(int *)(&DAT_140d64938 + (ulonglong)*(uint *)(lVar5 + 4) * 0x2c) =
                                *(int *)(lVar5 + 0x2c);
                    }
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < uVar2);
        }
        _DAT_140dba7b4 = 0x1621;
        _DAT_140dbe934 = 0x1621;
        _DAT_140dba7b0 = 0x1622;
        _DAT_140dbe938 = 0x1622;
        _DAT_140dba7bc = 0x1623;
        _DAT_140dbe93c = 0x1623;
        _DAT_140dba7b8 = 0x1624;
        _DAT_140dbe940 = 0x1624;
        _DAT_140db9324 = 0x19f4;
        _DAT_140dbf880 = 0x19f4;
        _DAT_140db9d88 = 0x336;
        _DAT_140db9d7c = 0x333;
        _DAT_140db9d84 = 0x335;
        _DAT_140db9a38 = 0x262;
        _DAT_140db9a30 = 0x260;
        _DAT_140db9a34 = 0x261;
        _DAT_140c8a270 = 1;
    }
    if ((param_1 < 0x1eb8) && (param_3 < 7)) {
        param_1 = (&DAT_140d2ecf0)[(longlong)param_1 * 7 + (longlong)param_3];
    }
    if (param_5 != 0) {
        param_1 = *(int *)((longlong)&DAT_140db90b0 + (longlong)param_1 * 4);
    }
    if ((param_1 < 0x1eb8) && (param_2 < 4)) {
        param_1 = (&DAT_140d10170)[(longlong)param_2 + (longlong)param_1 * 4];
    }
    if (param_6 != (int *)0x0) {
        *param_6 = param_1;
    }
    if ((param_1 < 0x1eb8) && (param_4 < 0xb)) {
        return (&DAT_140d64910)[(longlong)param_1 * 0xb + (longlong)param_4];
    }
    return param_1;
}



void FUN_1401dba80(longlong *param_1,undefined8 param_2)

{
undefined8 *puVar1;
undefined8 uVar2;
uint uVar3;
ulonglong uVar5;
undefined auStack776 [32];
undefined8 local_2e8;
undefined4 *local_2e0;
undefined4 local_2d8;
undefined4 local_2d4;
undefined4 local_2d0;
undefined4 local_2cc;
undefined4 local_2c8;
undefined8 local_2c4;
undefined2 local_2bc;
undefined8 local_278;
undefined4 auStack620 [72];
undefined4 auStack332 [73];
ulonglong local_28;
ulonglong uVar4;

local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
uVar4 = 0;
uVar5 = uVar4;
do {
puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x40))(param_1,uVar4);
if ((undefined4 *)*puVar1 != (undefined4 *)0x0) {
uVar5 = uVar5 + 1;
auStack332[uVar5] = *(undefined4 *)*puVar1;
auStack620[uVar5] = *(undefined4 *)(puVar1 + 1);
}
uVar3 = (int)uVar4 + 1;
uVar4 = (ulonglong)uVar3;
} while (uVar3 < 0x48);
uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
local_2e0 = &local_2d8;
local_2c4 = 0;
local_2bc = 0;
local_2d8 = 0x67452301;
local_2d4 = 0xefcdab89;
local_2d0 = 0x98badcfe;
local_2cc = 0x10325476;
local_2c8 = 0xc3d2e1f0;
local_278 = 0;
local_2e8 = param_2;
FUN_1401dbc80(uVar2,auStack332 + 1,auStack620 + 1,uVar5);
FUN_1407db4f0(local_28 ^ (ulonglong)auStack776);
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401dbb90(int param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64c3c == 0) {
            iVar2 = FUN_14022d2a0();
            if (iVar2 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c63918 + 0x28))();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_Race_140a6c938,DAT_140c63858);
    }
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64c3c == 0) {
                    iVar2 = FUN_14022d2a0();
                    if (iVar2 < 0) {
                        lVar3 = 0;
                    }
                    else {
                        lVar3 = (**(code **)(*DAT_140c63918 + 0x20))(DAT_140c63918,uVar4);
                    }
                }
                else {
                    lVar3 = 0;
                }
            }
            else {
                lVar3 = (*DAT_140c63848)(&PTR_u_Race_140a6c938,uVar4,DAT_140c63858);
            }
            if ((((param_1 == *(int *)(lVar3 + 0x68)) || (param_1 == *(int *)(lVar3 + 100))) ||
                 (param_1 == *(int *)(lVar3 + 0x60))) || (param_1 == *(int *)(lVar3 + 0x6c))) {
                return 1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401dbc80(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
        ulonglong param_5,longlong param_6)

{
int *piVar1;
undefined4 uVar2;
longlong lVar3;
int iVar4;
uint uVar5;
ulonglong uVar6;
ulonglong uVar7;
longlong lVar8;
undefined4 *puVar9;
ulonglong *puVar10;
uint uVar11;
undefined *puVar12;
ulonglong uVar13;
ulonglong uVar14;
undefined auStack216 [32];
undefined8 local_b8;
wchar_t *local_b0;
uint local_a8;
longlong local_98;
ulonglong local_90;
ulonglong local_88;
undefined4 local_80 [2];
longlong local_78;
ulonglong local_70;
ulonglong local_68;
ulonglong local_60;
longlong local_58;
byte local_50 [24];
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
lVar8 = 4;
puVar12 = (undefined *)(param_1 + 0xc);
local_98 = param_2;
local_78 = param_3;
local_70 = param_4;
if ((param_6 == 0) || (puVar12 == (undefined *)0x0)) goto LAB_1401dbcef;
if (*(int *)(param_6 + 0x60) == 0) {
if (*(int *)(param_6 + 100) != 0) goto LAB_1401dbcef;
do {
lVar8 = lVar8 + -1;
if (*(int *)(param_6 + 100) != 0) break;
*(undefined *)((longlong)*(short *)(param_6 + 0x1c) + 0x1e + param_6) = *puVar12;
*(short *)(param_6 + 0x1c) = *(short *)(param_6 + 0x1c) + 1;
piVar1 = (int *)(param_6 + 0x14);
*piVar1 = *piVar1 + 8;
if (*piVar1 == 0) {
piVar1 = (int *)(param_6 + 0x18);
*piVar1 = *piVar1 + 1;
if (*piVar1 == 0) {
*(undefined4 *)(param_6 + 100) = 1;
}
}
if (*(short *)(param_6 + 0x1c) == 0x40) {
FUN_1401c8ce0(param_6);
}
puVar12 = puVar12 + 1;
} while (lVar8 != 0);
puVar12 = (undefined *)(param_1 + 0x10);
lVar8 = 4;
if (puVar12 == (undefined *)0x0) goto LAB_1401dbcef;
if (*(int *)(param_6 + 0x60) == 0) {
if (*(int *)(param_6 + 100) == 0) {
do {
lVar8 = lVar8 + -1;
if (*(int *)(param_6 + 100) != 0) break;
*(undefined *)((longlong)*(short *)(param_6 + 0x1c) + 0x1e + param_6) = *puVar12;
*(short *)(param_6 + 0x1c) = *(short *)(param_6 + 0x1c) + 1;
piVar1 = (int *)(param_6 + 0x14);
*piVar1 = *piVar1 + 8;
if (*piVar1 == 0) {
piVar1 = (int *)(param_6 + 0x18);
*piVar1 = *piVar1 + 1;
if (*piVar1 == 0) {
*(undefined4 *)(param_6 + 100) = 1;
}
}
if (*(short *)(param_6 + 0x1c) == 0x40) {
FUN_1401c8ce0(param_6);
}
puVar12 = puVar12 + 1;
} while (lVar8 != 0);
lVar8 = local_98;
uVar7 = 0;
local_b8 = CONCAT44(local_b8._4_4_,2);
local_90 = 0;
local_88 = param_4;
FUN_1401d3110(&local_68,&LAB_1401dc1e0,&local_90,local_98);
uVar14 = uVar7;
if (param_4 != 0) {
do {
lVar3 = *(longlong *)(local_58 + uVar14 * 8);
uVar2 = *(undefined4 *)(lVar8 + lVar3 * 4);
local_90 = local_90 & 0xffffffff00000000 | (ulonglong)*(uint *)(local_78 + lVar3 * 4);
local_80[0] = uVar2;
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c64f64 != 0) || (iVar4 = FUN_14020bac0(), iVar4 < 0)) goto LAB_1401dc094;
lVar8 = (**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,uVar2);
}
else {
lVar8 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8,uVar2,DAT_140c63858);
}
if (lVar8 == 0) goto LAB_1401dc094;
iVar4 = FUN_1401dbb90();
if (iVar4 == 0) {
uVar5 = FUN_1401f57d0();
uVar13 = uVar7;
uVar11 = 0;
if (uVar5 != 0) {
do {
uVar11 = (uint)uVar13;
if (DAT_140c63848 == (code *)0x0) {
uVar6 = uVar7;
if (_DAT_140c64080 == 0) {
iVar4 = FUN_1401f55c0();
if (iVar4 < 0) {
uVar6 = 0;
}
else {
uVar6 = (**(code **)(*DAT_140c65300 + 0x20))(DAT_140c65300,uVar13);
}
}
}
else {
uVar6 = (*DAT_140c63848)(&PTR_u_ComponentRegionRect_140a69b48,uVar13,
                         DAT_140c63858);
}
if ((((*(uint *)(lVar8 + 0x90) >> (*(uint *)(uVar6 + 4) & 0x1f) & 1) != 0) &&
(*(int *)(uVar6 + 8) < *(int *)(uVar6 + 0x10))) &&
(*(int *)(uVar6 + 0xc) < *(int *)(uVar6 + 0x14))) break;
uVar11 = uVar11 + 1;
uVar13 = (ulonglong)uVar11;
} while (uVar11 < uVar5);
}
if (uVar11 != uVar5) {
lVar8 = 4;
puVar9 = local_80;
if (*(int *)(param_6 + 0x60) == 0) {
if (*(int *)(param_6 + 100) != 0) goto LAB_1401dc094;
do {
lVar8 = lVar8 + -1;
if (*(int *)(param_6 + 100) != 0) break;
*(undefined *)((longlong)*(short *)(param_6 + 0x1c) + 0x1e + param_6) =
*(undefined *)puVar9;
*(short *)(param_6 + 0x1c) = *(short *)(param_6 + 0x1c) + 1;
piVar1 = (int *)(param_6 + 0x14);
*piVar1 = *piVar1 + 8;
if (*piVar1 == 0) {
piVar1 = (int *)(param_6 + 0x18);
*piVar1 = *piVar1 + 1;
if (*piVar1 == 0) {
*(undefined4 *)(param_6 + 100) = 1;
}
}
if (*(short *)(param_6 + 0x1c) == 0x40) {
FUN_1401c8ce0(param_6);
}
puVar9 = (undefined4 *)((longlong)puVar9 + 1);
} while (lVar8 != 0);
lVar8 = 4;
puVar10 = &local_90;
if (*(int *)(param_6 + 0x60) == 0) {
if (*(int *)(param_6 + 100) == 0) {
do {
lVar8 = lVar8 + -1;
if (*(int *)(param_6 + 100) != 0) break;
*(undefined *)((longlong)*(short *)(param_6 + 0x1c) + 0x1e + param_6) =
*(undefined *)puVar10;
*(short *)(param_6 + 0x1c) = *(short *)(param_6 + 0x1c) + 1;
piVar1 = (int *)(param_6 + 0x14);
*piVar1 = *piVar1 + 8;
if (*piVar1 == 0) {
piVar1 = (int *)(param_6 + 0x18);
*piVar1 = *piVar1 + 1;
if (*piVar1 == 0) {
*(undefined4 *)(param_6 + 100) = 1;
}
}
if (*(short *)(param_6 + 0x1c) == 0x40) {
FUN_1401c8ce0(param_6);
}
puVar10 = (ulonglong *)((longlong)puVar10 + 1);
} while (lVar8 != 0);
goto LAB_1401dbff1;
}
goto LAB_1401dc094;
}
}
*(undefined4 *)(param_6 + 100) = 3;
goto LAB_1401dc094;
}
}
LAB_1401dbff1:
uVar14 = uVar14 + 1;
lVar8 = local_98;
} while (uVar14 < local_70);
}
iVar4 = FUN_1401c8b70(param_6,local_50);
if (iVar4 == 0) {
local_90 = param_5;
local_98 = 0x29;
do {
local_a8 = (uint)local_50[uVar7];
local_b0 = L"%0.2x";
local_b8 = 0;
iVar4 = FUN_1401a3210(local_90,local_98,&local_90,&local_98);
if (iVar4 < 0) break;
uVar7 = uVar7 + 1;
} while (uVar7 < 0x14);
}
LAB_1401dc094:
if (local_68 < local_60) {
FUN_14018b900(local_68 * 8 + local_58,0);
}
}
goto LAB_1401dbcef;
}
}
*(undefined4 *)(param_6 + 100) = 3;
LAB_1401dbcef:
FUN_1407db4f0(local_38 ^ (ulonglong)auStack216);
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401dc0d0(longlong param_1)

{
int iVar1;
undefined4 uVar2;
longlong lVar3;
undefined4 *puVar4;
longlong lVar5;
undefined auStack72 [32];
undefined4 local_28 [4];
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
if (param_1 == 0) {
FUN_1407db4f0(DAT_140c0f7b0 ^ (ulonglong)auStack72 ^ (ulonglong)auStack72);
return;
}
puVar4 = local_28;
lVar5 = 3;
do {
uVar2 = *(undefined4 *)((param_1 - (longlong)local_28) + 4 + (longlong)puVar4);
if (DAT_140c63840 == (code *)0x0) {
if (_DAT_140c63eac == 0) {
iVar1 = FUN_1401fccc0();
if (-1 < iVar1) {
lVar3 = (**(code **)(*DAT_140c63ae0 + 0x18))(DAT_140c63ae0,uVar2);
goto LAB_1401dc175;
}
}
LAB_1401dc17f:
uVar2 = 0;
}
else {
lVar3 = (*DAT_140c63840)(&PTR_u_DyeColorRamp_140a6a168,uVar2,DAT_140c63858);
LAB_1401dc175:
if (lVar3 == 0) goto LAB_1401dc17f;
uVar2 = *(undefined4 *)(lVar3 + 0xc);
}
*puVar4 = uVar2;
puVar4 = puVar4 + 1;
lVar5 = lVar5 + -1;
if (lVar5 == 0) {
FUN_1407db4f0(local_18 ^ (ulonglong)auStack72);
return;
}
} while( true );
}



undefined8 * FUN_1401dc200(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b60150;
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
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    FUN_1401ddce0(param_1 + 0x20);
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[1] = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
}



void FUN_1401dc2b0(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    int iVar4;

    *param_1 = &PTR_LAB_140b60150;
    FUN_1401dc3f0();
    plVar2 = param_1 + 0x2c;
    FUN_1401981b0(plVar2);
    if (*plVar2 != 0) {
        FUN_1401a4a00(plVar2);
    }
    iVar4 = 6;
    do {
        plVar2 = plVar2 + -1;
        if (*plVar2 != 0) {
            FUN_1401a4a00(plVar2);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    FUN_140019490(param_1 + 0x20);
    FUN_14018b900(param_1[0x22],0);
    param_1[0x22] = 0;
    if (param_1[0x1f] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x1e] != 0) {
        FUN_1401a4a00();
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
    puVar3 = param_1 + 8;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[8] + 8))();
    }
    iVar4 = 3;
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
    }
    return;
}



void FUN_1401dc3f0(void)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    FUN_140008410(&DAT_140c799d0);
    FUN_140008410(&DAT_140c79a00);
    FUN_140008410();
    uVar4 = 0;
    uVar3 = DAT_140c799f8;
    if (DAT_140c799f8 == 0) {
        DAT_140c799f8 = 0;
        return;
    }
    do {
        plVar1 = *(longlong **)(DAT_140c799f0 + uVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
            lVar2 = *plVar1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(plVar1,0);
            uVar3 = DAT_140c799f8;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < uVar3);
    DAT_140c799f8 = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401dc490(wchar_t *param_1)

{
    uint uVar1;
    uint **ppuVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined *puVar5;
    undefined *puVar6;
    uint uVar7;
    int iVar8;
    longlong lVar9;
    undefined8 uVar10;
    uint uVar11;
    uint uVar12;
    undefined *puVar13;
    uint *puVar14;
    uint uVar15;
    uint uVar16;
    uint *local_res20;
    undefined ***in_stack_fffffffffffffe48;
    ulonglong uVar17;
    undefined4 *in_stack_fffffffffffffe50;
    undefined4 uVar18;
    undefined ***in_stack_fffffffffffffe58;
    ulonglong uVar19;
    wchar_t *pwVar20;
    ulonglong uVar21;
    undefined **local_188;
    undefined8 uStack384;
    undefined8 local_178;
    undefined8 uStack368;
    undefined8 local_168;
    undefined local_160 [8];
    undefined *local_158;
    longlong local_150;
    undefined **local_138;
    wchar_t *local_130;
    code *local_128;
    wchar_t *local_120;
    undefined **local_118;
    wchar_t *local_110;
    code *local_108;
    wchar_t *local_100;
    undefined **local_f8;
    wchar_t *local_f0;
    LPVOID local_e8;
    ulonglong local_e0;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined *local_c0;
    undefined *local_b8 [2];
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    wchar_t *local_80;
    LPVOID local_78;
    ulonglong local_70;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    uint uStack80;
    uint uStack76;
    undefined8 local_48;

    uVar12 = 1;
    *(undefined4 *)(param_1 + 10) = 1;
    puVar14 = &DAT_140c637b4;
    uVar15 = 2;
    uVar16 = 0;
    do {
        uVar7 = 0;
        uVar11 = uVar16;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c651b0 == 0) && (iVar8 = FUN_1401f5180(), -1 < iVar8)) {
                lVar9 = (**(code **)(*DAT_140c65118 + 0x18))();
                goto LAB_1401dc521;
            }
        }
        else {
            lVar9 = (*DAT_140c63840)(&PTR_u_ComponentRegion_140a69b10,uVar12,DAT_140c63858);
            LAB_1401dc521:
            if (lVar9 != 0) {
                uVar11 = *(uint *)(lVar9 + 0x10);
            }
        }
        uVar12 = uVar12 + 1;
        *puVar14 = uVar11;
        (&DAT_140c637a0)[(int)uVar11] = (&DAT_140c637a0)[(int)uVar11] | uVar15;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        puVar14 = puVar14 + 1;
        if (0x1f < uVar12) {
            local_158 = (undefined *)FUN_14018b280();
            local_150 = 0;
            *local_158 = 0;
            *(undefined8 *)(local_158 + 8) = 0;
            *(undefined **)(local_158 + 0x10) = local_158;
            *(undefined **)(local_158 + 0x18) = local_158;
            if (DAT_140c63838 == (code *)0x0) {
                if (_DAT_140c64080 == 0) {
                    iVar8 = FUN_1401f55c0();
                    if (iVar8 < 0) {
                        uVar7 = 0;
                    }
                    else {
                        uVar7 = (**(code **)(*DAT_140c65300 + 0x28))();
                    }
                }
            }
            else {
                uVar7 = (*DAT_140c63838)(&PTR_u_ComponentRegionRect_140a69b48,DAT_140c63858);
            }
            uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe50 >> 0x20);
            if (uVar7 != 0) {
                do {
                    puVar14 = (uint *)0x0;
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c64080 == 0) && (iVar8 = FUN_1401f55c0(), -1 < iVar8)) {
                            puVar14 = (uint *)(**(code **)(*DAT_140c65300 + 0x20))(DAT_140c65300,uVar16);
                        }
                    }
                    else {
                        puVar14 = (uint *)(*DAT_140c63848)(&PTR_u_ComponentRegionRect_140a69b48,uVar16,
                                                           DAT_140c63858);
                    }
                    uVar12 = puVar14[6];
                    local_res20 = puVar14;
                    if (uVar12 != 0) {
                        uVar15 = puVar14[2];
                        uVar11 = puVar14[3];
                        uVar10 = *(undefined8 *)(puVar14 + 2);
                        uVar4 = *(undefined8 *)(puVar14 + 4);
                        if (((uVar15 | uVar11 | puVar14[4] | puVar14[5]) & 0x3f) == 0) {
                            puVar6 = *(undefined **)(local_158 + 8);
                            puVar13 = local_158;
                            while (puVar5 = puVar6, puVar5 != (undefined *)0x0) {
                                if (*(uint *)(puVar5 + 0x20) < uVar12) {
                                    puVar6 = *(undefined **)(puVar5 + 0x18);
                                }
                                else {
                                    puVar6 = *(undefined **)(puVar5 + 0x10);
                                    puVar13 = puVar5;
                                }
                            }
                            if ((puVar13 == local_158) || (uVar12 < *(uint *)(puVar13 + 0x20))) {
                                local_188 = (undefined **)
                                        ((ulonglong)local_188 & 0xffffffff00000000 | (ulonglong)uVar12);
                                local_178 = (LPVOID)0x0;
                                local_168 = 0;
                                FUN_1407db590(0,0,0);
                                uStack368 = 0;
                                local_c0 = puVar13;
                                FUN_1401de5f0(local_160,local_b8,&local_c0,&local_188);
                                puVar13 = local_b8[0];
                            }
                            ppuVar2 = *(uint ***)(puVar13 + 0x38);
                            if (ppuVar2 == *(uint ***)(puVar13 + 0x40)) {
                                FUN_14010a1c0();
                                puVar14 = local_res20;
                            }
                            else {
                                if (ppuVar2 != (uint **)0x0) {
                                    *ppuVar2 = puVar14;
                                }
                                *(longlong *)(puVar13 + 0x38) = *(longlong *)(puVar13 + 0x38) + 8;
                            }
                            uVar12 = puVar14[2];
                            uVar15 = puVar14[3];
                            uVar11 = puVar14[4];
                            uVar1 = puVar14[5];
                            uVar10 = FUN_1401ddd50();
                            puVar14 = (uint *)FUN_1401ddf30(uVar10,puVar14 + 1);
                            *puVar14 = uVar12;
                            puVar14[1] = uVar15;
                            puVar14[3] = uVar1;
                            puVar14[2] = uVar11;
                        }
                        else {
                            local_d8 = &PTR_LAB_140b5e648;
                            local_d0 = 0;
                            local_c8 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_d8);
                            local_a8 = local_d8;
                            local_a0 = local_d0;
                            local_188 = &PTR_LAB_140b5e648;
                            local_98 = local_c8;
                            uStack384 = L"Rect";
                            local_178 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_188);
                            local_58 = (undefined4)local_178;
                            uStack84 = local_178._4_4_;
                            local_188 = &PTR_FUN_140b60148;
                            local_68 = 0x40b60148;
                            uStack100 = 1;
                            uStack96 = (undefined4)uStack384;
                            uStack92 = uStack384._4_4_;
                            uVar12 = *puVar14;
                            local_f8 = &PTR_LAB_140b5e648;
                            local_f0 = L"RecordId";
                            uStack368 = uVar10;
                            local_168 = uVar4;
                            uStack80 = uVar15;
                            uStack76 = uVar11;
                            local_48 = uVar4;
                            local_e8 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_f8);
                            local_80 = local_f0;
                            local_118 = &PTR_LAB_140b5e648;
                            local_f8 = &PTR_LAB_140b5e630;
                            local_110 = L"TableName";
                            local_88 = &PTR_LAB_140b5e630;
                            local_78 = local_e8;
                            local_e0 = (ulonglong)uVar12;
                            local_70 = (ulonglong)uVar12;
                            local_108 = (code *)TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720,&local_118);
                            local_100 = L"ComponentRegionRect";
                            local_130 = local_110;
                            local_118 = &PTR_LAB_140b5e638;
                            local_120 = L"ComponentRegionRect";
                            local_res20 = (uint *)0x141d452b0;
                            local_138 = &PTR_LAB_140b5e638;
                            local_128 = local_108;
                            in_stack_fffffffffffffe58 = &local_a8;
                            in_stack_fffffffffffffe50 = &local_68;
                            in_stack_fffffffffffffe48 = &local_88;
                            iVar8 = FUN_1401971e0(&DAT_140c8a278,10,&local_res20,&local_138,
                                                  in_stack_fffffffffffffe48,in_stack_fffffffffffffe50,
                                                  in_stack_fffffffffffffe58);
                            local_118 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_108);
                            local_f8 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_e8);
                            local_188 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_178);
                            local_d8 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720,local_c8);
                            if (iVar8 != 0) {
                                DebugBreak();
                            }
                        }
                    }
                    uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe50 >> 0x20);
                    uVar16 = uVar16 + 1;
                } while (uVar16 < uVar7);
            }
            *(undefined4 *)(param_1 + 8) = 0;
            iVar8 = (**(code **)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670,L"Shaders\\ComponentPS.sho",param_1 + 0xc);
            if (-1 < iVar8) {
                uVar19 = (ulonglong)in_stack_fffffffffffffe58 & 0xffffffff00000000;
                uVar17 = (ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000;
                iVar8 = (**(code **)(*DAT_140c65670 + 0x50))
                        (DAT_140c65670,L"Art\\Dev\\DyeColor_Skin_Ramp.tex",0,1,uVar17,
                         CONCAT44(uVar18,0x100),uVar19,0,param_1 + 0x10);
                if (-1 < iVar8) {
                    uVar19 = uVar19 & 0xffffffff00000000;
                    uVar17 = uVar17 & 0xffffffff00000000;
                    iVar8 = (**(code **)(*DAT_140c65670 + 0x50))
                            (DAT_140c65670,L"Art\\Dev\\DyeColor_Armor_Ramp.tex",0,1,uVar17,0x100,
                             uVar19,0,param_1 + 0x14);
                    if (-1 < iVar8) {
                        uVar19 = uVar19 & 0xffffffff00000000;
                        uVar17 = uVar17 & 0xffffffff00000000;
                        iVar8 = (**(code **)(*DAT_140c65670 + 0x50))
                                (DAT_140c65670,L"Art\\Dev\\DyeColor_Armor_Ramp.tex",0,1,uVar17,0x100,
                                 uVar19,0,param_1 + 0x18);
                        if (-1 < iVar8) {
                            pwVar20 = param_1 + 0x1c;
                            uVar19 = uVar19 & 0xffffffff00000000;
                            uVar17 = uVar17 & 0xffffffff00000000;
                            iVar8 = (**(code **)(*DAT_140c65670 + 0x50))
                                    (DAT_140c65670,L"Art\\Dev\\DyeColor_Armor_Ramp.tex",0,1,uVar17,0x100
                                            ,uVar19,0,pwVar20);
                            if (-1 < iVar8) {
                                uVar21 = (ulonglong)pwVar20 & 0xffffffff00000000;
                                uVar19 = uVar19 & 0xffffffff00000000;
                                uVar10 = CONCAT44((int)(uVar17 >> 0x20),6);
                                iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                                        (DAT_140c65670,1,1,1,uVar10,1,uVar19,0,uVar21,param_1 + 0x20);
                                if (-1 < iVar8) {
                                    uVar21 = uVar21 & 0xffffffff00000000;
                                    uVar19 = uVar19 & 0xffffffff00000000;
                                    uVar17 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
                                    iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                                            (DAT_140c65670,1,1,1,uVar17,1,uVar19,0,uVar21,param_1 + 0x24);
                                    if (-1 < iVar8) {
                                        uVar21 = uVar21 & 0xffffffff00000000;
                                        uVar19 = uVar19 & 0xffffffff00000000;
                                        uVar17 = uVar17 & 0xffffffff00000000;
                                        iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                                                (DAT_140c65670,1,1,1,uVar17,1,uVar19,0,uVar21,param_1 + 0x28);
                                        if (((-1 < iVar8) &&
                                             (iVar8 = (**(code **)(*DAT_140c65670 + 0x58))
                                                     (DAT_140c65670,1,1,1,uVar17 & 0xffffffff00000000,1,
                                                      uVar19 & 0xffffffff00000000,0,
                                                      uVar21 & 0xffffffff00000000,param_1 + 0x2c), -1 < iVar8)
                                            ) && (iVar8 = (**(code **)(*DAT_140c65670 + 0xc0))
                                                (DAT_140c65670,param_1 + 0x30), -1 < iVar8)) {
                                            local_128 = FUN_1401dcd30;
                                            local_138 = (undefined **)((ulonglong)local_138 & 0xffffffff00000000);
                                            local_120 = (wchar_t *)0x0;
                                            local_130 = param_1;
                                            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                                                    (*(longlong **)(param_1 + 0x30),0,&local_138);
                                            local_128 = FUN_1401dce00;
                                            local_138 = (undefined **)((ulonglong)local_138 & 0xffffffff00000000);
                                            local_120 = (wchar_t *)0x0;
                                            local_130 = param_1;
                                            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                                                    (*(longlong **)(param_1 + 0x30),1,&local_138);
                                            FUN_1401dcd30(param_1);
                                            iVar8 = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (local_150 != 0) {
                lVar9 = *(longlong *)(local_158 + 8);
                while (lVar9 != 0) {
                    FUN_1401de580(local_160,*(undefined8 *)(lVar9 + 0x18));
                    lVar3 = *(longlong *)(lVar9 + 0x10);
                    if (*(longlong *)(lVar9 + 0x30) != 0) {
                        FUN_14018b900(*(longlong *)(lVar9 + 0x30),0);
                    }
                    FUN_14018b900(lVar9,0);
                    lVar9 = lVar3;
                }
                *(undefined **)(local_158 + 0x10) = local_158;
                *(undefined8 *)(local_158 + 8) = 0;
                *(undefined **)(local_158 + 0x18) = local_158;
                local_150 = 0;
            }
            FUN_14018b900(local_158,0);
            return iVar8;
        }
    } while( true );
}



void FUN_1401dcd30(longlong param_1)

{
undefined *puVar1;
undefined4 *puVar2;
undefined local_res8 [32];

puVar1 = (undefined *)
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))
        (*(longlong **)(param_1 + 0x40),0,local_res8,2);
if (puVar1 != (undefined *)0x0) {
*puVar1 = 0xff;
(**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),0);
}
puVar1 = (undefined *)
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))
        (*(longlong **)(param_1 + 0x48),0,local_res8,2);
if (puVar1 != (undefined *)0x0) {
*puVar1 = 0;
(**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))(*(longlong **)(param_1 + 0x48),0);
}
puVar2 = (undefined4 *)
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
        (*(longlong **)(param_1 + 0x50),0,local_res8,2);
if (puVar2 != (undefined4 *)0x0) {
*puVar2 = 0xff000000;
(**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))(*(longlong **)(param_1 + 0x50),0);
}
puVar2 = (undefined4 *)
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x48))
        (*(longlong **)(param_1 + 0x58),0,local_res8,2);
if (puVar2 != (undefined4 *)0x0) {
*puVar2 = 0xff7f7fff;
(**(code **)(**(longlong **)(param_1 + 0x58) + 0x50))(*(longlong **)(param_1 + 0x58),0);
}
return;
}



void FUN_1401dce00(longlong param_1)

{
longlong lVar1;

for (lVar1 = *(longlong *)(param_1 + 0xf8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x500)) {
FUN_1401e5380(lVar1);
}
FUN_1401981b0(param_1 + 0x160);
for (lVar1 = *(longlong *)(param_1 + 0xf0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xc78)) {
*(uint *)(lVar1 + 0xc60) = *(uint *)(lVar1 + 0xc60) & 0xffffffef;
*(undefined4 *)(lVar1 + 0xc64) = 0xffffffff;
}
return;
}



undefined8 FUN_1401dce80(longlong param_1,undefined8 param_2)

{
uint uVar1;
int iVar2;
undefined8 uVar3;
longlong lVar4;
ulonglong uVar5;
longlong **pplVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;

if (*(int *)(param_1 + 0xc) != 0) {
return 1;
}
uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
if ((int)uVar3 != 0) {
uVar5 = 0;
pplVar6 = (longlong **)(param_1 + 0x20);
do {
iVar2 = (**(code **)(**pplVar6 + 0x20))(*pplVar6,param_2);
if (iVar2 == 0) {
return 0;
}
uVar5 = uVar5 + 1;
pplVar6 = pplVar6 + 1;
} while (uVar5 < 4);
lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
fVar10 = 1.0;
fVar9 = 0.5;
uVar1 = *(uint *)(lVar4 + 4);
*(undefined4 *)(param_1 + 0x74) = 0;
*(float *)(param_1 + 0x70) = 255.0 / (float)(ulonglong)uVar1;
fVar7 = 1.0 / (float)(ulonglong)*(uint *)(lVar4 + 8);
*(float *)(param_1 + 0xb0) = fVar7;
*(float *)(param_1 + 0xb4) = fVar7 * 0.5;
lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
fVar8 = 85.0;
uVar1 = *(uint *)(lVar4 + 4);
*(undefined4 *)(param_1 + 0x84) = 0;
*(float *)(param_1 + 0x80) = 85.0 / (float)(ulonglong)uVar1;
fVar7 = fVar10 / (float)(ulonglong)*(uint *)(lVar4 + 8);
*(float *)(param_1 + 0xc0) = fVar7;
*(float *)(param_1 + 0xc4) = fVar7 * fVar9;
lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
uVar1 = *(uint *)(lVar4 + 4);
*(undefined4 *)(param_1 + 0x94) = 0;
*(float *)(param_1 + 0x90) = fVar8 / (float)(ulonglong)uVar1;
fVar7 = fVar10 / (float)(ulonglong)*(uint *)(lVar4 + 8);
*(float *)(param_1 + 0xd0) = fVar7;
*(float *)(param_1 + 0xd4) = fVar7 * fVar9;
lVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
uVar1 = *(uint *)(lVar4 + 4);
*(undefined4 *)(param_1 + 0xa4) = 0;
*(float *)(param_1 + 0xa0) = fVar8 / (float)(ulonglong)uVar1;
fVar10 = fVar10 / (float)(ulonglong)*(uint *)(lVar4 + 8);
*(float *)(param_1 + 0xe0) = fVar10;
*(float *)(param_1 + 0xe4) = fVar10 * fVar9;
*(undefined4 *)(param_1 + 0xc) = 1;
return 1;
}
return uVar3;
}



int FUN_1401dd0b0(longlong param_1,ulonglong param_2,longlong *param_3)

{
int iVar1;
undefined8 *puVar2;

puVar2 = *(undefined8 **)(param_1 + 0x128 + (param_2 & 0xffffffff) * 8);
if (puVar2 == (undefined8 *)0x0) {
puVar2 = (undefined8 *)FUN_14018b280(0x70);
if (puVar2 != (undefined8 *)0x0) {
*puVar2 = &PTR_FUN_140b602f0;
puVar2[4] = 0;
puVar2[5] = 0;
puVar2[8] = 0;
puVar2[9] = 0;
puVar2[10] = 0;
puVar2[0xb] = 0;
puVar2[6] = 0;
*(undefined4 *)(puVar2 + 7) = 0;
puVar2[0xc] = 0;
puVar2[0xd] = 0;
*(undefined4 *)(puVar2 + 1) = 1;
puVar2[2] = param_1;
*(int *)(puVar2 + 3) = (int)(param_2 & 0xffffffff);
}
iVar1 = FUN_1401e65c0(puVar2);
if (iVar1 < 0) {
if (puVar2 == (undefined8 *)0x0) {
return iVar1;
}
FUN_1401e6500(puVar2);
FUN_14018b900(puVar2,0);
return iVar1;
}
}
else {
(**(code **)*puVar2)(puVar2);
}
*param_3 = (longlong)puVar2;
return 0;
}



int FUN_1401dd190(longlong param_1,undefined8 param_2,longlong **param_3)

{
ulonglong *puVar1;
int iVar2;
ulonglong uVar3;
longlong *plVar4;

uVar3 = (**(code **)(param_1 + 0x118))(param_2);
puVar1 = *(ulonglong **)
        (*(longlong *)(param_1 + 0x110) + (uVar3 % *(ulonglong *)(param_1 + 0x108)) * 8);
do {
if (puVar1 == (ulonglong *)0x0) {
LAB_1401dd1f7:
plVar4 = (longlong *)FUN_14018b280(0x508,0);
if (plVar4 != (longlong *)0x0) {
*plVar4 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar4 + 1) = 1;
*plVar4 = (longlong)&PTR_LAB_140b602d0;
plVar4[0x9d] = 0;
plVar4[0x9e] = 0;
plVar4[0x9f] = 0;
plVar4[0xa0] = 0;
plVar4[2] = param_1;
}
iVar2 = FUN_1401e5130(plVar4,param_2);
if (iVar2 < 0) {
if (plVar4 != (longlong *)0x0) {
(**(code **)(*plVar4 + 0x10))(plVar4,1);
}
}
else {
LAB_1401dd261:
*param_3 = plVar4;
iVar2 = 0;
}
return iVar2;
}
if ((uVar3 == *puVar1) &&
(iVar2 = (**(code **)(param_1 + 0x120))(param_2,puVar1 + 2), iVar2 != 0)) {
if ((longlong **)(puVar1 + 0x95) != (longlong **)0x0) {
plVar4 = (longlong *)puVar1[0x95];
(**(code **)*plVar4)(plVar4);
goto LAB_1401dd261;
}
goto LAB_1401dd1f7;
}
puVar1 = (ulonglong *)puVar1[1];
} while( true );
}



undefined4 * FUN_1401dd2b0(longlong param_1,undefined4 param_2)

{
int iVar1;
longlong lVar2;
undefined8 uVar3;
undefined4 *puVar4;
undefined4 local_res18 [2];
undefined4 local_res20 [2];

lVar2 = FUN_1401f53e0();
if (lVar2 == 0) {
return &DAT_140c784c0;
}
iVar1 = *(int *)(lVar2 + 0x10);
if (iVar1 == 1) {
local_res18[0] = 10;
}
else if (iVar1 == 2) {
local_res18[0] = 1;
}
else {
if (iVar1 != 3) {
local_res18[0] = param_2;
if (*(int *)(param_1 + 0xc) != 0) {
lVar2 = FUN_1401f5c60();
if (lVar2 == 0) {
return &DAT_140c784c0;
}
uVar3 = FUN_1401ddd50();
puVar4 = (undefined4 *)FUN_1401ddf30(uVar3,local_res18);
return puVar4;
}
lVar2 = FUN_14022d500(*(undefined4 *)(param_1 + 4));
if (lVar2 == 0) {
return &DAT_140c784c0;
}
if (*(int *)(param_1 + 8) != 1) {
uVar3 = FUN_1401ddd50();
puVar4 = (undefined4 *)FUN_1401ddf30(uVar3,local_res18);
return puVar4;
}
uVar3 = FUN_1401ddd50();
puVar4 = (undefined4 *)FUN_1401ddf30(uVar3,local_res18);
return puVar4;
}
local_res18[0] = 0xd;
}
local_res20[0] = param_2;
uVar3 = FUN_1401ddd50();
puVar4 = (undefined4 *)FUN_1401ddf30(uVar3,local_res20);
return puVar4;
}



int FUN_1401dd3d0(longlong param_1)

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
FUN_1401dc2b0();
FUN_14018b900(param_1,0);
}
iVar2 = 0;
}
return iVar2;
}



undefined4 FUN_1401dd410(short *param_1)

{
    longlong *plVar1;
    short sVar2;
    undefined4 uVar3;
    int iVar4;
    longlong **pplVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    longlong **pplVar9;
    longlong **pplVar10;
    undefined8 *puVar11;
    longlong **local_res10;

    pplVar5 = DAT_140c79a08;
    pplVar9 = (longlong **)DAT_140c79a08[1];
    local_res10 = DAT_140c79a08;
    if ((longlong **)DAT_140c79a08[1] != (longlong **)0x0) {
        do {
            iVar4 = FUN_14018e2c0(pplVar9[4],param_1);
            if (iVar4 < 0) {
                pplVar10 = (longlong **)pplVar9[3];
            }
            else {
                pplVar10 = (longlong **)pplVar9[2];
                local_res10 = pplVar9;
            }
            pplVar9 = pplVar10;
        } while (pplVar10 != (longlong **)0x0);
        if ((local_res10 != pplVar5) && (iVar4 = FUN_14018e2c0(param_1,local_res10[4]), -1 < iVar4))
            goto LAB_1401dd473;
    }
    local_res10 = pplVar5;
    LAB_1401dd473:
    uVar3 = (undefined4)DAT_140c799f8;
    if (local_res10 != pplVar5) {
        return *(undefined4 *)(local_res10 + 5);
    }
    pplVar5 = (longlong **)FUN_14018b280(8);
    puVar7 = (undefined8 *)0x0;
    if (pplVar5 == (longlong **)0x0) {
        local_res10 = (longlong **)0x0;
    }
    else if (param_1 == (short *)0x0) {
        *pplVar5 = (longlong *)0x0;
        local_res10 = pplVar5;
    }
    else {
        sVar2 = *param_1;
        puVar11 = puVar7;
        while (sVar2 != 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 1);
            sVar2 = param_1[(longlong)puVar11];
        }
        puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar11 * 2 + 0x12,0);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = puVar11;
            *puVar6 = &PTR_LAB_140b55060;
            puVar7 = puVar6;
        }
        plVar1 = puVar7 + 2;
        FUN_1407db590(plVar1,param_1,(longlong)puVar11 * 2);
        *(undefined2 *)((longlong)puVar11 * 2 + (longlong)plVar1) = 0;
        *pplVar5 = plVar1;
        local_res10 = pplVar5;
    }
    FUN_1401de2c0();
    local_res10 = (longlong **)*local_res10;
    puVar8 = (undefined4 *)FUN_1401dde60(&DAT_140c79a00,&local_res10);
    *puVar8 = uVar3;
    return uVar3;
}



undefined4 FUN_1401dd570(short *param_1)

{
    longlong *plVar1;
    short sVar2;
    undefined4 uVar3;
    int iVar4;
    longlong **pplVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    longlong **pplVar9;
    longlong **pplVar10;
    undefined8 *puVar11;
    longlong **local_res10;

    pplVar5 = DAT_140c79a28;
    pplVar9 = (longlong **)DAT_140c79a28[1];
    local_res10 = DAT_140c79a28;
    if ((longlong **)DAT_140c79a28[1] != (longlong **)0x0) {
        do {
            iVar4 = FUN_14018e2c0(pplVar9[4],param_1);
            if (iVar4 < 0) {
                pplVar10 = (longlong **)pplVar9[3];
            }
            else {
                pplVar10 = (longlong **)pplVar9[2];
                local_res10 = pplVar9;
            }
            pplVar9 = pplVar10;
        } while (pplVar10 != (longlong **)0x0);
        if ((local_res10 != pplVar5) && (iVar4 = FUN_14018e2c0(param_1,local_res10[4]), -1 < iVar4))
            goto LAB_1401dd5d3;
    }
    local_res10 = pplVar5;
    LAB_1401dd5d3:
    uVar3 = (undefined4)DAT_140c799f8;
    if (local_res10 != pplVar5) {
        return *(undefined4 *)(local_res10 + 5);
    }
    pplVar5 = (longlong **)FUN_14018b280(8);
    puVar7 = (undefined8 *)0x0;
    if (pplVar5 == (longlong **)0x0) {
        local_res10 = (longlong **)0x0;
    }
    else if (param_1 == (short *)0x0) {
        *pplVar5 = (longlong *)0x0;
        local_res10 = pplVar5;
    }
    else {
        sVar2 = *param_1;
        puVar11 = puVar7;
        while (sVar2 != 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 1);
            sVar2 = param_1[(longlong)puVar11];
        }
        puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar11 * 2 + 0x12,0);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = puVar11;
            *puVar6 = &PTR_LAB_140b55060;
            puVar7 = puVar6;
        }
        plVar1 = puVar7 + 2;
        FUN_1407db590(plVar1,param_1,(longlong)puVar11 * 2);
        *(undefined2 *)((longlong)puVar11 * 2 + (longlong)plVar1) = 0;
        *pplVar5 = plVar1;
        local_res10 = pplVar5;
    }
    FUN_1401de2c0();
    local_res10 = (longlong **)*local_res10;
    puVar8 = (undefined4 *)FUN_1401dde60(&DAT_140c79a20,&local_res10);
    *puVar8 = uVar3;
    return uVar3;
}



void FUN_1401dd6d0(wchar_t *param_1,int param_2,int param_3,int param_4)

{
    undefined2 *puVar1;
    short sVar2;
    code *pcVar3;
    undefined2 *puVar4;
    wchar_t *pwVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    wchar_t *pwVar9;
    wchar_t *pwVar10;
    wchar_t *pwVar11;
    wchar_t *pwVar12;
    ulonglong uVar13;
    undefined auStack2328 [32];
    wchar_t *local_8f8;
    wchar_t *local_8f0;
    wchar_t *local_8e8;
    wchar_t *local_8d8;
    short *local_8d0;
    wchar_t *local_8c8;
    int local_8c0;
    int local_8bc;
    int local_8b8;
    undefined4 local_8b4;
    wchar_t *local_8b0 [3];
    undefined local_898 [528];
    undefined2 local_688 [264];
    wchar_t local_478 [264];
    undefined2 local_268 [264];
    ulonglong local_58;

    pwVar12 = DAT_140c799d8;
    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack2328;
    local_8b0[0] = param_1;
    if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) goto LAB_1401dd81f;
    local_8b4 = 0xffffffff;
    pwVar11 = *(wchar_t **)(DAT_140c799d8 + 4);
    local_8d8 = DAT_140c799d8;
    local_8c8 = param_1;
    local_8c0 = param_2;
    local_8bc = param_3;
    local_8b8 = param_4;
    if (*(wchar_t **)(DAT_140c799d8 + 4) == (wchar_t *)0x0) {
        LAB_1401dd7d3:
        local_8d8 = pwVar12;
    }
    else {
        do {
            if ((*(int *)(pwVar11 + 0x14) < param_2) ||
                ((*(int *)(pwVar11 + 0x14) == param_2 &&
                  ((*(int *)(pwVar11 + 0x16) < param_3 ||
                    ((*(int *)(pwVar11 + 0x16) == param_3 &&
                      ((*(int *)(pwVar11 + 0x18) < param_4 ||
                        ((*(int *)(pwVar11 + 0x18) == param_4 &&
                          (iVar6 = FUN_14018e2c0(*(undefined8 *)(pwVar11 + 0x10),param_1), iVar6 < 0))))))))))))
            {
                pwVar10 = *(wchar_t **)(pwVar11 + 0xc);
            }
            else {
                pwVar10 = *(wchar_t **)(pwVar11 + 8);
                local_8d8 = pwVar11;
            }
            pwVar11 = pwVar10;
        } while (pwVar10 != (wchar_t *)0x0);
        if (((local_8d8 == pwVar12) || (param_2 < *(int *)(local_8d8 + 0x14))) ||
            ((param_2 == *(int *)(local_8d8 + 0x14) &&
              ((param_3 < *(int *)(local_8d8 + 0x16) ||
                ((param_3 == *(int *)(local_8d8 + 0x16) &&
                  ((param_4 < *(int *)(local_8d8 + 0x18) ||
                    ((param_4 == *(int *)(local_8d8 + 0x18) &&
                      (iVar6 = FUN_14018e2c0(param_1,*(undefined8 *)(local_8d8 + 0x10)), iVar6 < 0))))))))))))
            goto LAB_1401dd7d3;
    }
    if (local_8d8 != pwVar12) goto LAB_1401dd81f;
    uVar7 = FUN_1401dd410();
    pwVar10 = (wchar_t *)0x0;
    pwVar11 = (wchar_t *)0x0;
    local_8d0 = (short *)0x0;
    local_8c8 = **(wchar_t ***)(DAT_140c799f0 + (ulonglong)uVar7 * 8);
    pwVar12 = pwVar10;
    if ((((param_3 < 0x11) && (lVar8 = FUN_14022d500(param_3), pwVar12 = pwVar11, lVar8 != 0)) &&
         (uVar13 = *(ulonglong *)(lVar8 + 8), uVar13 != 0)) && (uVar13 <= DAT_140c3fe70)) {
        pwVar12 = (wchar_t *)(DAT_140c3fe68 + uVar13);
    }
    pwVar11 = pwVar10;
    if (param_4 < 3) {
        pwVar11 = (wchar_t *)(&PTR_DAT_140c58760)[param_4];
    }
    if (param_2 < 0x20) {
        lVar8 = FUN_1401f53e0(param_2);
        if (((lVar8 == 0) || (uVar13 = *(ulonglong *)(lVar8 + 8), uVar13 == 0)) ||
            (DAT_140c3fe70 < uVar13)) {
            local_8d0 = (short *)0x0;
        }
        else {
            local_8d0 = (short *)(DAT_140c3fe68 + uVar13);
        }
    }
    pwVar5 = local_8b0[0];
    pwVar9 = (wchar_t *)FUN_1407dd8d8(local_8b0[0],0x2e);
    if (pwVar9 == (wchar_t *)0x0) {
        pwVar9 = pwVar5;
    }
    uVar13 = (longlong)pwVar9 - (longlong)pwVar5 >> 1;
    iVar6 = FUN_14018e2c0(pwVar9,L".dds");
    local_8d8 = L".tex";
    if (iVar6 != 0) {
        local_8d8 = pwVar9;
    }
    lVar8 = 0;
    uVar7 = (uint)uVar13;
    if ((uVar7 < 5) ||
        (iVar6 = FUN_14018e3e0(pwVar5 + ((uVar13 & 0xffffffff) - 5),L"_Mask",5), iVar6 != 0)) {
        if ((uVar7 < 6) ||
            (iVar6 = FUN_14018e3e0(pwVar5 + ((uVar13 & 0xffffffff) - 6),L"_Color",6), iVar6 != 0)) {
            if ((uVar7 < 7) ||
                (iVar6 = FUN_14018e3e0(pwVar5 + ((uVar13 & 0xffffffff) - 7),L"_Normal",7), iVar6 != 0)) {
                if (3 < uVar7) {
                    iVar6 = FUN_14018e3e0(pwVar5 + ((uVar13 & 0xffffffff) - 4),L"_Dye",4);
                    lVar8 = 0;
                    if (iVar6 == 0) {
                        lVar8 = 4;
                    }
                }
            }
            else {
                lVar8 = 7;
            }
        }
        else {
            lVar8 = 6;
        }
    }
    else {
        lVar8 = 5;
    }
    uVar13 = (ulonglong)(uVar7 - (int)lVar8);
    FUN_1407db590(local_268,pwVar5 + uVar13,lVar8 * 2);
    if (0x207 < (ulonglong)(lVar8 * 2)) {
        __report_rangecheckfailure();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
    }
    local_268[lVar8] = 0;
    FUN_1407db590(local_688,pwVar5,uVar13 * 2);
    if (0x207 < uVar13 * 2) {
        __report_rangecheckfailure();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
    }
    local_688[uVar13] = 0;
    if ((pwVar12 != (wchar_t *)0x0) || (pwVar11 != (wchar_t *)0x0)) {
        lVar8 = FUN_1407dd8d8(local_688,0x5c);
        puVar1 = (undefined2 *)(lVar8 + 2);
        if (lVar8 == 0) {
            puVar1 = local_688;
        }
        while (puVar1 < local_688 + uVar13) {
            sVar2 = puVar1[1];
            puVar4 = puVar1;
            while ((sVar2 != 0 && (sVar2 != 0x5f))) {
                sVar2 = puVar4[2];
                puVar4 = puVar4 + 1;
            }
            lVar8 = (longlong)(puVar4 + 1) - (longlong)puVar1 >> 1;
            if (((pwVar12 == (wchar_t *)0x0) || (iVar6 = FUN_14018e3e0(puVar1,pwVar12,lVar8), iVar6 != 0))
                || (pwVar12[lVar8] != L'\0')) {
                if (pwVar11 != (wchar_t *)0x0) goto LAB_1401ddad9;
            }
            else {
                pwVar12 = pwVar10;
                if (pwVar11 == (wchar_t *)0x0) break;
                LAB_1401ddad9:
                iVar6 = FUN_14018e3e0(puVar1,pwVar11,lVar8);
                if (((iVar6 == 0) && (pwVar11[lVar8] == L'\0')) &&
                    (pwVar11 = pwVar10, pwVar12 == (wchar_t *)0x0)) break;
            }
            puVar1 = puVar4 + 2;
        }
    }
    if ((local_8d0 == (short *)0x0) || (*local_8d0 == 0)) {
        local_8f8 = local_8d8;
        FUN_14001b370(local_478,0x104,L"%s%s",local_268);
    }
    else {
        local_8f0 = local_8d8;
        local_8f8 = local_8d0;
        FUN_14001b370(local_478,0x104,L"%s.%s%s",local_268);
    }
    if (pwVar12 == (wchar_t *)0x0) {
        LAB_1401ddbfb:
        if (pwVar11 != (wchar_t *)0x0) {
            local_8f0 = local_478;
            local_8f8 = pwVar11;
            FUN_14001b370(local_898,0x104,L"%s_%s%s",local_688);
            iVar6 = FUN_1401b58d0();
            if (iVar6 != 0) goto LAB_1401ddc6f;
        }
        local_8f8 = local_478;
        FUN_14001b370(local_898,0x104,L"%s%s",local_688);
        iVar6 = FUN_1401b58d0();
        if (iVar6 == 0) {
            FUN_1401de150(&DAT_140c799d0,local_8b0,&local_8c8);
            goto LAB_1401dd81f;
        }
    }
    else if (pwVar11 == (wchar_t *)0x0) {
        LAB_1401ddbc1:
        local_8f0 = local_478;
        local_8f8 = pwVar12;
        FUN_14001b370(local_898,0x104,L"%s_%s%s",local_688);
        iVar6 = FUN_1401b58d0();
        if (iVar6 == 0) goto LAB_1401ddbfb;
    }
    else {
        local_8e8 = local_478;
        local_8f8 = pwVar12;
        local_8f0 = pwVar11;
        FUN_14001b370(local_898,0x104,L"%s_%s_%s%s",local_688);
        iVar6 = FUN_1401b58d0();
        if (iVar6 == 0) goto LAB_1401ddbc1;
    }
    LAB_1401ddc6f:
    local_8b4 = FUN_1401dd570(local_898);
    FUN_1401de150(&DAT_140c799d0,local_8b0,&local_8c8);
    LAB_1401dd81f:
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack2328);
    return;
}



undefined8 * FUN_1401ddce0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1401e4aa0;
    param_1[4] = &LAB_1401e4af0;
    return param_1;
}



longlong FUN_1401ddd50(longlong param_1,uint *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8;
longlong local_res18 [2];
undefined local_58 [8];
undefined *local_50;
undefined8 local_48;
uint local_38 [2];
undefined local_30 [8];
undefined8 local_28;

lVar3 = DAT_140c79a48;
if (*(longlong *)(DAT_140c79a48 + 8) != 0) {
lVar1 = *(longlong *)(DAT_140c79a48 + 8);
do {
if (*(uint *)(lVar1 + 0x20) < *param_2) {
lVar2 = *(longlong *)(lVar1 + 0x18);
}
else {
lVar2 = *(longlong *)(lVar1 + 0x10);
lVar3 = lVar1;
}
lVar1 = lVar2;
} while (lVar2 != 0);
}
if ((lVar3 == DAT_140c79a48) || (*param_2 < *(uint *)(lVar3 + 0x20))) {
local_res8 = param_1;
local_50 = (undefined *)FUN_14018b280();
local_48 = 0;
*local_50 = 0;
*(undefined8 *)(local_50 + 8) = 0;
*(undefined **)(local_50 + 0x10) = local_50;
*(undefined **)(local_50 + 0x18) = local_50;
local_38[0] = *param_2;
FUN_1401de080(local_30,local_58);
local_res8 = lVar3;
FUN_1401de370(&DAT_140c79a40,local_res18,&local_res8,local_38);
FUN_140008410(local_30);
FUN_14018b900(local_28,0);
FUN_140008410(local_58);
FUN_14018b900(local_50,0);
lVar3 = local_res18[0];
}
return lVar3 + 0x28;
}



longlong FUN_1401dde60(longlong param_1,undefined8 *param_2)

{
longlong lVar1;
undefined8 uVar2;
int iVar3;
longlong lVar4;
longlong lVar5;
longlong local_res8;
longlong local_res18 [2];
undefined8 local_38;
undefined4 local_30;

lVar1 = *(longlong *)(param_1 + 8);
local_res8 = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
uVar2 = *param_2;
lVar4 = *(longlong *)(lVar1 + 8);
do {
iVar3 = FUN_14018e2c0(*(undefined8 *)(lVar4 + 0x20),uVar2);
if (iVar3 < 0) {
lVar5 = *(longlong *)(lVar4 + 0x18);
}
else {
lVar5 = *(longlong *)(lVar4 + 0x10);
local_res8 = lVar4;
}
lVar4 = lVar5;
} while (lVar5 != 0);
}
if ((local_res8 != lVar1) &&
(iVar3 = FUN_14018e2c0(*param_2,*(undefined8 *)(local_res8 + 0x20)), -1 < iVar3)) {
return local_res8 + 0x28;
}
local_38 = *param_2;
local_30 = 0;
FUN_140144990(param_1,local_res18,&local_res8,&local_38);
return local_res18[0] + 0x28;
}



longlong FUN_1401ddf30(longlong param_1,int *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8 [2];
longlong local_res18 [2];
int local_28;
int local_24;
int local_20;
int local_1c;
int local_18;

lVar1 = *(longlong *)(param_1 + 8);
local_res8[0] = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(int *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res8[0] = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res8[0] == lVar1) || (*param_2 < *(int *)(local_res8[0] + 0x20))) {
local_28 = *param_2;
local_24 = local_28;
local_20 = local_28;
local_1c = local_28;
local_18 = local_28;
FUN_1401de930(param_1,local_res18,local_res8,&local_28);
local_res8[0] = local_res18[0];
}
return local_res8[0] + 0x24;
}



longlong FUN_1401ddfd0(longlong param_1,longlong param_2)

{
longlong lVar1;
longlong lVar2;

lVar2 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 3;
if (lVar2 == 0) {
*(undefined8 *)(param_1 + 8) = 0;
*(undefined8 *)(param_1 + 0x10) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
}
else {
lVar2 = lVar2 * 8;
lVar1 = FUN_14018b280(lVar2,0);
*(longlong *)(param_1 + 8) = lVar1;
*(longlong *)(param_1 + 0x10) = lVar1;
*(longlong *)(param_1 + 0x18) = lVar1 + lVar2;
}
lVar1 = *(longlong *)(param_1 + 8);
lVar2 = (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 3) * 8;
FUN_1407db590(lVar1,*(longlong *)(param_2 + 8),lVar2);
*(longlong *)(param_1 + 0x10) = lVar2 + lVar1;
return param_1;
}



longlong FUN_1401de080(longlong param_1,longlong param_2)

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
uVar4 = FUN_1401de800(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



char ** FUN_1401de150(longlong param_1,char **param_2,undefined8 *param_3)

{
int iVar1;
int iVar2;
char **ppcVar3;
char *pcVar4;
char *pcVar5;
char *pcVar6;
char *pcVar7;
bool bVar8;
undefined local_res8 [8];

pcVar4 = *(char **)(param_1 + 8);
pcVar7 = *(char **)(pcVar4 + 8);
bVar8 = true;
pcVar6 = pcVar4;
if (pcVar7 != (char *)0x0) {
iVar2 = *(int *)(param_3 + 1);
do {
pcVar6 = pcVar7;
if ((iVar2 < *(int *)(pcVar6 + 0x28)) ||
((iVar2 == *(int *)(pcVar6 + 0x28) &&
((*(int *)((longlong)param_3 + 0xc) < *(int *)(pcVar6 + 0x2c) ||
((*(int *)((longlong)param_3 + 0xc) == *(int *)(pcVar6 + 0x2c) &&
((*(int *)(param_3 + 2) < *(int *)(pcVar6 + 0x30) ||
((*(int *)(param_3 + 2) == *(int *)(pcVar6 + 0x30) &&
(iVar1 = FUN_14018e2c0(*param_3,*(undefined8 *)(pcVar6 + 0x20)), iVar1 < 0))))))))))))
{
pcVar7 = *(char **)(pcVar6 + 0x10);
bVar8 = true;
}
else {
pcVar7 = *(char **)(pcVar6 + 0x18);
bVar8 = false;
}
} while (pcVar7 != (char *)0x0);
}
pcVar5 = pcVar6;
if (bVar8) {
if (pcVar6 == *(char **)(pcVar4 + 0x10)) goto LAB_1401de27e;
if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
pcVar5 = *(char **)(pcVar6 + 0x18);
}
else {
pcVar5 = *(char **)(pcVar6 + 0x10);
if (pcVar5 == (char *)0x0) {
pcVar5 = *(char **)(pcVar6 + 8);
pcVar4 = pcVar5;
if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
do {
pcVar5 = *(char **)(pcVar4 + 8);
bVar8 = pcVar4 == *(char **)(pcVar5 + 0x10);
pcVar4 = pcVar5;
} while (bVar8);
}
}
else {
for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
pcVar4 = *(char **)(pcVar4 + 0x18)) {
pcVar5 = pcVar4;
}
}
}
}
if ((*(int *)(param_3 + 1) <= *(int *)(pcVar5 + 0x28)) &&
((*(int *)(pcVar5 + 0x28) != *(int *)(param_3 + 1) ||
((*(int *)((longlong)param_3 + 0xc) <= *(int *)(pcVar5 + 0x2c) &&
((*(int *)(pcVar5 + 0x2c) != *(int *)((longlong)param_3 + 0xc) ||
((*(int *)(param_3 + 2) <= *(int *)(pcVar5 + 0x30) &&
((*(int *)(pcVar5 + 0x30) != *(int *)(param_3 + 2) ||
(iVar2 = FUN_14018e2c0(*(undefined8 *)(pcVar5 + 0x20),*param_3), -1 < iVar2)))))))))))) {
*param_2 = pcVar5;
*(undefined *)(param_2 + 1) = 0;
return param_2;
}
LAB_1401de27e:
ppcVar3 = (char **)FUN_1401deba0(param_1,local_res8,pcVar7,pcVar6,param_3);
*param_2 = *ppcVar3;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}



longlong FUN_1401de2c0(undefined8 param_1,undefined8 *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong lVar4;

lVar2 = DAT_140c799f8;
lVar1 = DAT_140c799f8 + 1;
lVar4 = FUN_14018db00(DAT_140c799f0,lVar1,8);
*(undefined8 *)(lVar4 + lVar2 * 8) = *param_2;
lVar3 = DAT_140c799f0;
if ((DAT_140c799f0 != lVar4) &&
(FUN_1407db590(lVar4,DAT_140c799f0,DAT_140c799f8 * 8), lVar3 = lVar4, DAT_140c799f0 != 0)) {
(**(code **)(*(longlong *)(DAT_140c799f0 + -0x10) + 8))(DAT_140c799f0 + -0x10);
}
DAT_140c799f0 = lVar3;
DAT_140c799f8 = lVar1;
return lVar2;
}



longlong * FUN_1401de370(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
uint uVar1;
char *pcVar2;
char *pcVar3;
longlong *plVar4;
longlong lVar5;
longlong lVar6;
bool bVar7;
undefined local_18 [16];

pcVar2 = *(char **)(param_1 + 8);
pcVar3 = *param_3;
if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
LAB_1401de3ca:
plVar4 = (longlong *)FUN_1401dedd0(param_1,local_18,param_4);
*param_2 = *plVar4;
return param_2;
}
}
else {
if (pcVar3 == pcVar2) {
uVar1 = *param_4;
pcVar3 = *(char **)(pcVar2 + 0x18);
if (*(uint *)(pcVar3 + 0x20) < uVar1) {
if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
lVar5 = FUN_14018b280(0x48);
if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
*(uint *)(lVar5 + 0x20) = *param_4;
FUN_1401de080(lVar5 + 0x28,param_4 + 2);
}
*(longlong *)(pcVar3 + 0x10) = lVar5;
pcVar2 = *(char **)(param_1 + 8);
if (pcVar3 == pcVar2) {
*(longlong *)(pcVar2 + 8) = lVar5;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
*(longlong *)(pcVar2 + 0x10) = lVar5;
}
}
else {
lVar5 = FUN_1401df2c0(uVar1,param_4);
*(longlong *)(pcVar3 + 0x18) = lVar5;
if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
}
*(char **)(lVar5 + 8) = pcVar3;
*(undefined8 *)(lVar5 + 0x10) = 0;
*(undefined8 *)(lVar5 + 0x18) = 0;
FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = lVar5;
}
else {
plVar4 = (longlong *)FUN_1401dedd0(param_1,local_18,param_4);
*param_2 = *plVar4;
}
return param_2;
}
if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
lVar5 = *(longlong *)(pcVar3 + 0x18);
}
else {
lVar5 = *(longlong *)(pcVar3 + 0x10);
if (lVar5 == 0) {
lVar5 = *(longlong *)(pcVar3 + 8);
lVar6 = lVar5;
if (pcVar3 == *(char **)(lVar5 + 0x10)) {
do {
lVar5 = *(longlong *)(lVar6 + 8);
bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
lVar6 = lVar5;
} while (bVar7);
}
}
else {
for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
lVar5 = lVar6;
}
}
}
if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
goto LAB_1401de3ca;
if (*(longlong *)(lVar5 + 0x18) == 0) {
FUN_1401dece0(param_1,param_2,0,lVar5,param_4);
return param_2;
}
}
FUN_1401dece0();
return param_2;
}



void FUN_1401de580(undefined8 param_1,longlong param_2)

{
longlong lVar1;

if (param_2 != 0) {
do {
FUN_1401de580(param_1,*(undefined8 *)(param_2 + 0x18));
lVar1 = *(longlong *)(param_2 + 0x10);
if (*(longlong *)(param_2 + 0x30) != 0) {
FUN_14018b900(*(longlong *)(param_2 + 0x30),0);
}
FUN_14018b900(param_2,0);
param_2 = lVar1;
} while (lVar1 != 0);
}
return;
}



longlong * FUN_1401de5f0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
uint uVar1;
char *pcVar2;
char *pcVar3;
longlong *plVar4;
longlong lVar5;
longlong lVar6;
bool bVar7;
undefined local_18 [16];

pcVar2 = *(char **)(param_1 + 8);
pcVar3 = *param_3;
if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
LAB_1401de64a:
plVar4 = (longlong *)FUN_1401defc0(param_1,local_18,param_4);
*param_2 = *plVar4;
return param_2;
}
}
else {
if (pcVar3 == pcVar2) {
uVar1 = *param_4;
pcVar3 = *(char **)(pcVar2 + 0x18);
if (*(uint *)(pcVar3 + 0x20) < uVar1) {
if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
lVar5 = FUN_14018b280(0x48);
if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
*(uint *)(lVar5 + 0x20) = *param_4;
FUN_1401ddfd0(lVar5 + 0x28,param_4 + 2);
}
*(longlong *)(pcVar3 + 0x10) = lVar5;
pcVar2 = *(char **)(param_1 + 8);
if (pcVar3 == pcVar2) {
*(longlong *)(pcVar2 + 8) = lVar5;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
*(longlong *)(pcVar2 + 0x10) = lVar5;
}
}
else {
lVar5 = FUN_1401df300(uVar1,param_4);
*(longlong *)(pcVar3 + 0x18) = lVar5;
if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
}
*(char **)(lVar5 + 8) = pcVar3;
*(undefined8 *)(lVar5 + 0x10) = 0;
*(undefined8 *)(lVar5 + 0x18) = 0;
FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = lVar5;
}
else {
plVar4 = (longlong *)FUN_1401defc0(param_1,local_18,param_4);
*param_2 = *plVar4;
}
return param_2;
}
if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
lVar5 = *(longlong *)(pcVar3 + 0x18);
}
else {
lVar5 = *(longlong *)(pcVar3 + 0x10);
if (lVar5 == 0) {
lVar5 = *(longlong *)(pcVar3 + 8);
lVar6 = lVar5;
if (pcVar3 == *(char **)(lVar5 + 0x10)) {
do {
lVar5 = *(longlong *)(lVar6 + 8);
bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
lVar6 = lVar5;
} while (bVar7);
}
}
else {
for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
lVar5 = lVar6;
}
}
}
if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
goto LAB_1401de64a;
if (*(longlong *)(lVar5 + 0x18) == 0) {
FUN_1401deed0(param_1,param_2,0,lVar5,param_4);
return param_2;
}
}
FUN_1401deed0();
return param_2;
}



undefined * FUN_1401de800(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
undefined uVar1;
undefined *puVar2;
undefined8 uVar3;
undefined *puVar4;
undefined *puVar5;
undefined *puVar6;

puVar2 = (undefined *)FUN_14018b280();
if ((undefined4 *)(puVar2 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
*(undefined4 *)(puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
*(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)(param_2 + 0x28);
*(undefined4 *)(puVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
*(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(param_2 + 0x30);
}
uVar1 = *param_2;
*(undefined8 *)(puVar2 + 8) = param_3;
*puVar2 = uVar1;
*(undefined8 *)(puVar2 + 0x10) = 0;
*(undefined8 *)(puVar2 + 0x18) = 0;
if (*(longlong *)(param_2 + 0x18) != 0) {
uVar3 = FUN_1401de800(param_1,*(longlong *)(param_2 + 0x18),puVar2);
*(undefined8 *)(puVar2 + 0x18) = uVar3;
}
puVar6 = *(undefined **)(param_2 + 0x10);
puVar5 = puVar2;
if (puVar6 == (undefined *)0x0) {
return puVar2;
}
do {
puVar4 = (undefined *)FUN_14018b280(0x38);
if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
*(undefined4 *)(puVar4 + 0x24) = *(undefined4 *)(puVar6 + 0x24);
*(undefined4 *)(puVar4 + 0x28) = *(undefined4 *)(puVar6 + 0x28);
*(undefined4 *)(puVar4 + 0x2c) = *(undefined4 *)(puVar6 + 0x2c);
*(undefined4 *)(puVar4 + 0x30) = *(undefined4 *)(puVar6 + 0x30);
}
*puVar4 = *puVar6;
*(undefined8 *)(puVar4 + 0x10) = 0;
*(undefined8 *)(puVar4 + 0x18) = 0;
*(undefined **)(puVar5 + 0x10) = puVar4;
*(undefined **)(puVar4 + 8) = puVar5;
if (*(longlong *)(puVar6 + 0x18) != 0) {
uVar3 = FUN_1401de800(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
*(undefined8 *)(puVar4 + 0x18) = uVar3;
}
puVar6 = *(undefined **)(puVar6 + 0x10);
puVar5 = puVar4;
} while (puVar6 != (undefined *)0x0);
return puVar2;
}



longlong * FUN_1401de930(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
int iVar1;
char *pcVar2;
char *pcVar3;
longlong *plVar4;
longlong lVar5;
longlong lVar6;
bool bVar7;
undefined local_18 [16];

pcVar2 = *(char **)(param_1 + 8);
pcVar3 = *param_3;
if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
LAB_1401de98a:
plVar4 = (longlong *)FUN_1401df1c0(param_1,local_18,param_4);
*param_2 = *plVar4;
return param_2;
}
}
else {
if (pcVar3 == pcVar2) {
iVar1 = *param_4;
pcVar3 = *(char **)(pcVar2 + 0x18);
if (*(int *)(pcVar3 + 0x20) < iVar1) {
if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
lVar5 = FUN_14018b280(0x38);
if ((int *)(lVar5 + 0x20) != (int *)0x0) {
*(int *)(lVar5 + 0x20) = *param_4;
*(int *)(lVar5 + 0x24) = param_4[1];
*(int *)(lVar5 + 0x28) = param_4[2];
*(int *)(lVar5 + 0x2c) = param_4[3];
*(int *)(lVar5 + 0x30) = param_4[4];
}
*(longlong *)(pcVar3 + 0x10) = lVar5;
pcVar2 = *(char **)(param_1 + 8);
if (pcVar3 == pcVar2) {
*(longlong *)(pcVar2 + 8) = lVar5;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
*(longlong *)(pcVar2 + 0x10) = lVar5;
}
}
else {
lVar5 = FUN_1401deb50(iVar1,param_4);
*(longlong *)(pcVar3 + 0x18) = lVar5;
if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
}
*(char **)(lVar5 + 8) = pcVar3;
*(undefined8 *)(lVar5 + 0x10) = 0;
*(undefined8 *)(lVar5 + 0x18) = 0;
FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = lVar5;
}
else {
plVar4 = (longlong *)FUN_1401df1c0(param_1,local_18,param_4);
*param_2 = *plVar4;
}
return param_2;
}
if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
lVar5 = *(longlong *)(pcVar3 + 0x18);
}
else {
lVar5 = *(longlong *)(pcVar3 + 0x10);
if (lVar5 == 0) {
lVar5 = *(longlong *)(pcVar3 + 8);
lVar6 = lVar5;
if (pcVar3 == *(char **)(lVar5 + 0x10)) {
do {
lVar5 = *(longlong *)(lVar6 + 8);
bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
lVar6 = lVar5;
} while (bVar7);
}
}
else {
for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
lVar5 = lVar6;
}
}
}
if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
goto LAB_1401de98a;
if (*(longlong *)(lVar5 + 0x18) == 0) {
FUN_1401df0c0(param_1,param_2,0,lVar5,param_4);
return param_2;
}
}
FUN_1401df0c0();
return param_2;
}



longlong FUN_1401deb50(undefined8 param_1,undefined4 *param_2)

{
longlong lVar1;

lVar1 = FUN_14018b280();
if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(lVar1 + 0x20) = *param_2;
*(undefined4 *)(lVar1 + 0x24) = param_2[1];
*(undefined4 *)(lVar1 + 0x28) = param_2[2];
*(undefined4 *)(lVar1 + 0x2c) = param_2[3];
*(undefined4 *)(lVar1 + 0x30) = param_2[4];
}
return lVar1;
}



longlong *
        FUN_1401deba0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
        undefined8 *param_5)

{
longlong lVar1;
int iVar2;
longlong lVar3;

if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
(*(int *)(param_5 + 1) < *(int *)(param_4 + 0x28))) {
LAB_1401dec47:
lVar3 = FUN_14018b280(0x38);
if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar3 + 0x20) = *param_5;
*(undefined8 *)(lVar3 + 0x28) = param_5[1];
*(undefined8 *)(lVar3 + 0x30) = param_5[2];
}
*(longlong *)(param_4 + 0x10) = lVar3;
lVar1 = *(longlong *)(param_1 + 8);
if (param_4 == lVar1) {
*(longlong *)(lVar1 + 8) = lVar3;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
}
else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
*(longlong *)(lVar1 + 0x10) = lVar3;
}
}
else {
if (*(int *)(param_5 + 1) == *(int *)(param_4 + 0x28)) {
if (*(int *)((longlong)param_5 + 0xc) < *(int *)(param_4 + 0x2c)) goto LAB_1401dec47;
if (*(int *)((longlong)param_5 + 0xc) == *(int *)(param_4 + 0x2c)) {
if (*(int *)(param_5 + 2) < *(int *)(param_4 + 0x30)) goto LAB_1401dec47;
if (*(int *)(param_5 + 2) == *(int *)(param_4 + 0x30)) {
iVar2 = FUN_14018e2c0(*param_5,*(undefined8 *)(param_4 + 0x20));
if (iVar2 < 0) goto LAB_1401dec47;
}
}
}
lVar3 = FUN_14018b280(0x38);
if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
*(undefined8 *)(lVar3 + 0x20) = *param_5;
*(undefined8 *)(lVar3 + 0x28) = param_5[1];
*(undefined8 *)(lVar3 + 0x30) = param_5[2];
}
*(longlong *)(param_4 + 0x18) = lVar3;
if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
}
}
*(longlong *)(lVar3 + 8) = param_4;
*(undefined8 *)(lVar3 + 0x10) = 0;
*(undefined8 *)(lVar3 + 0x18) = 0;
FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = lVar3;
return param_2;
}



longlong *
        FUN_1401dece0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
longlong lVar1;
longlong lVar2;

if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
(*param_5 < *(uint *)(param_4 + 0x20))) {
lVar2 = FUN_14018b280(0x48);
if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
*(uint *)(lVar2 + 0x20) = *param_5;
FUN_1401de080(lVar2 + 0x28,param_5 + 2);
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
lVar2 = FUN_1401df2c0(param_1,param_5);
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



char ** FUN_1401dedd0(longlong param_1,char **param_2,uint *param_3)

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
bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
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
if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1401dee2e;
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
if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
*param_2 = pcVar3;
*(undefined *)(param_2 + 1) = 0;
return param_2;
}
LAB_1401dee2e:
ppcVar1 = (char **)FUN_1401dece0(param_1,local_res8,pcVar4,pcVar5,param_3);
*param_2 = *ppcVar1;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}



longlong *
        FUN_1401deed0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
longlong lVar1;
longlong lVar2;

if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
(*param_5 < *(uint *)(param_4 + 0x20))) {
lVar2 = FUN_14018b280(0x48);
if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
*(uint *)(lVar2 + 0x20) = *param_5;
FUN_1401ddfd0(lVar2 + 0x28,param_5 + 2);
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
lVar2 = FUN_1401df300(param_1,param_5);
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



char ** FUN_1401defc0(longlong param_1,char **param_2,uint *param_3)

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
bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
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
if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1401df01e;
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
if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
*param_2 = pcVar3;
*(undefined *)(param_2 + 1) = 0;
return param_2;
}
LAB_1401df01e:
ppcVar1 = (char **)FUN_1401deed0(param_1,local_res8,pcVar4,pcVar5,param_3);
*param_2 = *ppcVar1;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}



longlong *
        FUN_1401df0c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
longlong lVar1;
longlong lVar2;

if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
(*param_5 < *(int *)(param_4 + 0x20))) {
lVar2 = FUN_14018b280(0x38);
if ((int *)(lVar2 + 0x20) != (int *)0x0) {
*(int *)(lVar2 + 0x20) = *param_5;
*(int *)(lVar2 + 0x24) = param_5[1];
*(int *)(lVar2 + 0x28) = param_5[2];
*(int *)(lVar2 + 0x2c) = param_5[3];
*(int *)(lVar2 + 0x30) = param_5[4];
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
lVar2 = FUN_1401deb50(param_1,param_5);
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



char ** FUN_1401df1c0(longlong param_1,char **param_2,int *param_3)

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
if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1401df21e;
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
LAB_1401df21e:
ppcVar1 = (char **)FUN_1401df0c0(param_1,local_res8,pcVar4,pcVar5,param_3);
*param_2 = *ppcVar1;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}



longlong FUN_1401df2c0(undefined8 param_1,undefined4 *param_2)

{
longlong lVar1;

lVar1 = FUN_14018b280();
if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(lVar1 + 0x20) = *param_2;
FUN_1401de080(lVar1 + 0x28,param_2 + 2);
}
return lVar1;
}



longlong FUN_1401df300(undefined8 param_1,undefined4 *param_2)

{
longlong lVar1;

lVar1 = FUN_14018b280();
if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(lVar1 + 0x20) = *param_2;
FUN_1401ddfd0(lVar1 + 0x28,param_2 + 2);
}
return lVar1;
}



undefined8 * FUN_1401df340(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;

    *param_1 = &PTR_LAB_140b60160;
    FUN_1401daa90();
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    lVar5 = 9;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    lVar6 = 9;
    puVar4 = param_1 + 0x29;
    do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 8;
    } while (lVar6 != 0);
    lVar6 = 9;
    puVar4 = param_1 + 0x71;
    do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 8;
    } while (lVar6 != 0);
    puVar4 = param_1 + 0xb9;
    do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        lVar6 = DAT_140c63798;
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 8;
    } while (lVar5 != 0);
    param_1[0x167] = 0;
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    param_1[0x16a] = 0;
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
    param_1[0x171] = 0;
    param_1[0x172] = 0;
    param_1[0x173] = 0;
    param_1[0x174] = 0;
    param_1[0x175] = 0;
    param_1[0x176] = 0;
    param_1[0x177] = 0;
    param_1[0x178] = 0;
    param_1[0x179] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
    param_1[0x17c] = 0;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
    param_1[0x181] = 0;
    param_1[0x182] = 0;
    param_1[0x183] = 0;
    param_1[0x184] = 0;
    param_1[0x185] = 0;
    *(undefined4 *)(param_1 + 0x186) = 0;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    plVar1 = (longlong *)(lVar6 + 0xf0);
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = lVar6;
    if (param_1[0x18e] == 0) {
        param_1[0x18e] = plVar1;
        plVar2 = param_1 + 399;
        *plVar2 = *plVar1;
        *plVar1 = (longlong)param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0xc70) = plVar2;
        }
    }
    FUN_1407e4830(param_1 + 3,0,0xf0);
    uVar3 = DAT_140c3f4f8;
    lVar5 = 4;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    puVar4 = param_1 + 0x16d;
    do {
        *(undefined4 *)(puVar4 + 0x12) = uVar3;
        *(undefined4 *)(puVar4 + -2) = 7;
        *(undefined4 *)puVar4 = 0;
        puVar4 = (undefined8 *)((longlong)puVar4 + 4);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(undefined4 *)((longlong)param_1 + 0xc34) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc44) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc4c) = 0;
    *(undefined4 *)(param_1 + 0x185) = 6;
    *(undefined4 *)((longlong)param_1 + 0xc2c) = 0;
    *(undefined4 *)(param_1 + 0x186) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc54) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc5c) = 0;
    *(undefined4 *)(param_1 + 0x187) = DAT_140c636a8;
    *(undefined4 *)(param_1 + 0x21) = 0;
    param_1[0x18c] = 0x7f;
    return param_1;
}



undefined8 FUN_1401df620(undefined8 param_1,ulonglong param_2)

{
FUN_1401df660();
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



void FUN_1401df660(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    int iVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    undefined8 *puVar8;

    puVar3 = param_1 + 0x16b;
    plVar2 = param_1 + 0x167;
    lVar5 = 4;
    *param_1 = &PTR_LAB_140b60160;
    puVar8 = puVar3;
    do {
        if (*plVar2 != 0) {
            FUN_1401e5490(*plVar2,*(undefined4 *)puVar8);
        }
        plVar2 = plVar2 + 1;
        puVar8 = (undefined8 *)((longlong)puVar8 + 4);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((undefined8 *)param_1[0x18e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x18e] = param_1[399];
    }
    if (param_1[399] != 0) {
        *(undefined8 *)(param_1[399] + 0xc70) = param_1[0x18e];
    }
    iVar4 = 3;
    puVar8 = param_1 + 0x185;
    param_1[0x18e] = 0;
    param_1[399] = 0;
    iVar7 = 3;
    iVar6 = iVar7;
    do {
        pplVar1 = (longlong **)(puVar8 + -1);
        puVar8 = puVar8 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar8 = param_1 + 0x17f;
    do {
        lVar5 = puVar8[-1];
        puVar8 = puVar8 + -1;
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    puVar8 = param_1 + 0x17b;
    iVar7 = 3;
    iVar6 = iVar7;
    do {
        pplVar1 = (longlong **)(puVar8 + -1);
        puVar8 = puVar8 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar8 = param_1 + 0x177;
    iVar6 = iVar7;
    do {
        lVar5 = puVar8[-1];
        puVar8 = puVar8 + -1;
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar8 = param_1 + 0x173;
    do {
        pplVar1 = (longlong **)(puVar8 + -1);
        puVar8 = puVar8 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar4 = 0x47;
    puVar3 = param_1 + 0x101;
    iVar7 = 0x47;
    iVar6 = 0x47;
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar3 = param_1 + 0xb9;
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    puVar3 = param_1 + 0x71;
    do {
        pplVar1 = (longlong **)(puVar3 + -1);
        puVar3 = puVar3 + -1;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x26] + 8))();
    }
    if ((longlong *)param_1[0x25] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x25] + 8))();
    }
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x24] + 8))();
    }
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 8))();
    }
    return;
}



undefined4 FUN_1401df8c0(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)plVar1 == 0) {
        (**(code **)(*param_1 + 0x168))(param_1,1);
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_1401dfdd0(longlong param_1,int *param_2)

{
int iVar1;
uint uVar2;
uint uVar3;
longlong *plVar4;
longlong lVar5;

if (((*(int *)(param_1 + 0xc34) != 0) && (*(int *)(param_1 + 0xc28) == *param_2)) &&
((float)param_2[1] == *(float *)(param_1 + 0xc2c))) {
uVar2 = *(uint *)(param_1 + 0xc30);
if ((int)(param_2[2] ^ uVar2) < 0) {
uVar2 = 0x80000000 - uVar2;
}
uVar2 = uVar2 - param_2[2];
uVar3 = (int)uVar2 >> 0x1f;
if ((int)((uVar2 ^ uVar3) - uVar3) < 0x55) {
return 0;
}
}
plVar4 = *(longlong **)(param_1 + 0x128);
*(int *)(param_1 + 0xc28) = *param_2;
*(int *)(param_1 + 0xc2c) = param_2[1];
iVar1 = param_2[2];
*(undefined4 *)(param_1 + 0xc34) = 1;
*(int *)(param_1 + 0xc30) = iVar1;
if (plVar4 != (longlong *)0x0) {
(**(code **)(*plVar4 + 0xf0))(plVar4,param_1 + 0xc28);
plVar4 = (longlong *)(param_1 + 0x388);
lVar5 = 0x48;
do {
if (*plVar4 != 0) {
FUN_1401e7f20(*plVar4,param_1 + 0xc28);
}
plVar4 = plVar4 + 1;
lVar5 = lVar5 + -1;
} while (lVar5 != 0);
}
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) & 0xfffffff7;
return 0;
}



undefined8
        FUN_1401dfee0(longlong *param_1,float *param_2,longlong param_3,uint param_4,undefined4 param_5)

{
longlong *plVar1;
float *pfVar2;
longlong lVar3;
undefined8 uVar4;
float fVar5;
float fVar6;
float fVar7;
undefined4 local_38;
undefined4 local_34;
float local_30;

plVar1 = (longlong *)param_1[0x25];
if (plVar1 != (longlong *)0x0) {
local_34 = param_5;
local_38 = 0;
local_30 = 2.0 / ((float)(ulonglong)param_4 * *(float *)(param_3 + 0x14));
if (*(float *)(param_3 + 0x2c) != 0.0) {
pfVar2 = (float *)(**(code **)(*plVar1 + 0x50))(plVar1);
lVar3 = (**(code **)(*plVar1 + 0x490))(plVar1);
fVar6 = (*(float *)(lVar3 + 0x24) * pfVar2[4] + *(float *)(lVar3 + 0x20) * *pfVar2 +
         pfVar2[8] * 0.0 + pfVar2[0xc]) - *param_2;
fVar7 = (*(float *)(lVar3 + 0x24) * pfVar2[5] + *(float *)(lVar3 + 0x20) * pfVar2[1] +
         pfVar2[9] * 0.0 + pfVar2[0xd]) - param_2[1];
fVar5 = *(float *)(param_3 + 0x38) / *(float *)(param_3 + 0x28);
fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + 0.0);
if (fVar6 <= fVar5) {
fVar6 = fVar5;
}
local_30 = local_30 * fVar6;
}
uVar4 = (**(code **)(*param_1 + 0x38))(param_1,&local_38);
if ((int)uVar4 < 0) {
return uVar4;
}
}
return 0;
}



void FUN_1401e0290(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
undefined8 local_18;
undefined4 local_10;

local_18 = param_3;
local_10 = param_4;
(**(code **)(*param_1 + 0x48))(param_1,param_2,&local_18);
return;
}



void FUN_1401e09e0(longlong param_1,uint param_2,uint param_3)

{
longlong lVar1;
uint uVar2;
uint uVar3;

if (*(int *)(param_1 + 0xb34) != 0) {
uVar3 = *(uint *)(param_1 + 0xc44);
uVar2 = ~param_3 & uVar3 | param_2 & param_3;
*(uint *)(param_1 + 0xc44) = uVar2;
lVar1 = *(longlong *)(param_1 + 0x1e8);
uVar3 = uVar3 ^ uVar2;
if (lVar1 != 0) {
if ((uVar3 & 1) != 0) {
FUN_1401e7c40(lVar1);
}
if ((uVar3 & 2) != 0) {
FUN_1401e7a30(lVar1);
}
}
if (((*(int *)(param_1 + 0xc48) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) &&
((uVar3 & 2) != 0)) {
FUN_1401e7a30();
}
}
return;
}



void FUN_1401e0a70(longlong param_1,int param_2)

{
longlong lVar1;

if ((*(int *)(param_1 + 0xb34) != 0) && (*(int *)(param_1 + 0xc48) != param_2)) {
*(int *)(param_1 + 0xc48) = param_2;
if (*(longlong *)(param_1 + 0x180) != 0) {
FUN_1401e7a30();
}
lVar1 = *(longlong *)(param_1 + 0x1e8);
if (lVar1 != 0) {
FUN_1401e7c40(lVar1);
FUN_1401e7a30(lVar1);
return;
}
}
return;
}



void FUN_1401e0ad0(longlong param_1,int param_2)

{
longlong lVar1;

if ((*(int *)(param_1 + 0xb34) != 0) && (*(int *)(param_1 + 0xc4c) != param_2)) {
*(int *)(param_1 + 0xc4c) = param_2;
lVar1 = *(longlong *)(param_1 + 0x1e8);
if (lVar1 != 0) {
FUN_1401e7c40(lVar1);
FUN_1401e7a30(lVar1);
return;
}
}
return;
}



void FUN_1401e0bc0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
undefined4 uVar1;

uVar1 = (**(code **)(*param_1 + 0xd8))();
FUN_1401db470(param_2,param_3,param_4,uVar1,0,0);
return;
}



undefined8 FUN_1401e0c10(longlong param_1,undefined8 param_2)

{
int iVar1;
undefined8 uVar2;
uint uVar3;
longlong *plVar4;

if ((*(byte *)(param_1 + 0xc60) & 1) != 0) {
return 1;
}
uVar2 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))
        (*(longlong **)(param_1 + 0x120),param_2,0);
if ((int)uVar2 != 0) {
plVar4 = (longlong *)(param_1 + 0x148);
uVar3 = 0;
while ((*plVar4 == 0 || (iVar1 = FUN_1401e80b0(*plVar4,param_2), iVar1 != 0))) {
uVar3 = uVar3 + 1;
plVar4 = plVar4 + 1;
if (0x47 < uVar3) {
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) | 1;
return 1;
}
}
return 0;
}
return uVar2;
}



longlong * FUN_1401e1220(longlong param_1)

{
longlong *plVar1;
uint uVar2;
longlong *plVar3;
longlong *plVar4;
longlong *plVar5;
longlong *plVar6;
longlong **pplVar7;

plVar4 = (longlong *)0x0;
pplVar7 = (longlong **)(param_1 + 0x148);
plVar5 = plVar4;
do {
plVar1 = *pplVar7;
if (plVar1 != (longlong *)0x0) {
(**(code **)*plVar1)(plVar1);
if (*pplVar7 != (longlong *)0x0) {
(**(code **)(**pplVar7 + 8))();
*pplVar7 = (longlong *)0x0;
}
plVar6 = plVar4;
if (*(int *)((longlong)plVar1 + 0x2c) == 0) {
plVar3 = (longlong *)FUN_14018b280(0x78);
if (plVar3 != (longlong *)0x0) {
*plVar3 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar3 + 1) = 1;
*plVar3 = (longlong)&PTR_LAB_140b60300;
plVar3[6] = 0;
plVar3[7] = 0;
plVar3[9] = 0;
plVar3[10] = 0;
plVar3[0xb] = 0;
*(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
plVar3[2] = param_1;
plVar6 = plVar3;
}
uVar2 = FUN_1401e6820(plVar6,plVar5,plVar1 + 3,0);
if ((int)uVar2 < 0) {
(**(code **)(*plVar6 + 8))(plVar6);
(**(code **)(*plVar1 + 8))(plVar1);
return (longlong *)(ulonglong)uVar2;
}
}
*pplVar7 = plVar6;
(**(code **)(*plVar1 + 8))(plVar1);
}
uVar2 = (int)plVar5 + 1;
plVar5 = (longlong *)(ulonglong)uVar2;
pplVar7 = pplVar7 + 1;
if (0x47 < uVar2) {
uVar2 = FUN_1401e1350(param_1);
if ((int)uVar2 < 0) {
plVar4 = (longlong *)(ulonglong)uVar2;
}
return plVar4;
}
} while( true );
}



int FUN_1401e1350(longlong param_1)

{
int iVar1;
longlong lVar2;
longlong *plVar3;
longlong *plVar4;
longlong *plVar5;
uint uStack28;

lVar2 = *(longlong *)(param_1 + 0x110);
if (lVar2 == 0) {
return 0;
}
plVar5 = (longlong *)0x0;
plVar4 = plVar5;
if (*(int *)(param_1 + 0x28) == 0) {
if ((*(longlong *)(param_1 + 0x158) == 0) &&
(lVar2 = FUN_14020bd20(*(undefined4 *)(lVar2 + 0x60)), lVar2 != 0)) {
plVar3 = (longlong *)FUN_14018b280(0x78);
if (plVar3 != (longlong *)0x0) {
*plVar3 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar3 + 1) = 1;
*plVar3 = (longlong)&PTR_LAB_140b60300;
plVar3[6] = 0;
plVar3[7] = 0;
plVar3[9] = 0;
plVar3[10] = 0;
plVar3[0xb] = 0;
*(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
plVar3[2] = param_1;
plVar4 = plVar3;
}
plVar4[3] = lVar2;
*(undefined4 *)(plVar4 + 5) = 2;
*(undefined4 *)((longlong)plVar4 + 0x2c) = 1;
plVar4[8] = 0;
plVar4[4] = (ulonglong)uStack28 << 0x20;
iVar1 = FUN_1401e6bf0(plVar4);
if (iVar1 == -0x7ff8fb70) {
lVar2 = FUN_1401e6b70(plVar4);
if (lVar2 == 0) goto LAB_1401e1792;
plVar4[3] = lVar2;
iVar1 = FUN_1401e6bf0(plVar4);
}
if (iVar1 < 0) goto LAB_1401e1792;
if (*(int *)(plVar4[2] + 0xb34) == 0) {
*(undefined8 *)((longlong)plVar4 + 100) = 0;
}
else {
*(undefined4 *)((longlong)plVar4 + 100) = *(undefined4 *)(plVar4[3] + 0x90);
*(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(plVar4[3] + 0x94);
FUN_1401e7de0(plVar4);
}
if ((*(longlong *)(plVar4[2] + 0x120) != *(longlong *)(plVar4[2] + 0x130)) &&
(iVar1 = FUN_1401e7940(plVar4), iVar1 < 0)) goto LAB_1401e1792;
if (*(int *)((longlong)plVar4 + 100) != 0) {
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) & 0xfffffffb;
}
*(longlong **)(param_1 + 0x158) = plVar4;
}
}
else if (*(int *)(param_1 + 0x28) == 1) {
if ((*(longlong *)(param_1 + 0x158) == 0) &&
(lVar2 = FUN_14020bd20(*(undefined4 *)(lVar2 + 100)), lVar2 != 0)) {
plVar3 = (longlong *)FUN_14018b280(0x78,0);
if (plVar3 != (longlong *)0x0) {
*plVar3 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar3 + 1) = 1;
*plVar3 = (longlong)&PTR_LAB_140b60300;
plVar3[6] = 0;
plVar3[7] = 0;
plVar3[9] = 0;
plVar3[10] = 0;
plVar3[0xb] = 0;
*(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
plVar3[2] = param_1;
plVar4 = plVar3;
}
plVar4[3] = lVar2;
*(undefined4 *)(plVar4 + 5) = 2;
*(undefined4 *)((longlong)plVar4 + 0x2c) = 1;
plVar4[8] = 0;
plVar4[4] = (ulonglong)uStack28 << 0x20;
iVar1 = FUN_1401e6bf0(plVar4);
if (iVar1 == -0x7ff8fb70) {
lVar2 = FUN_1401e6b70(plVar4);
if (lVar2 == 0) goto LAB_1401e1792;
plVar4[3] = lVar2;
iVar1 = FUN_1401e6bf0(plVar4);
}
if (iVar1 < 0) goto LAB_1401e1792;
if (*(int *)(plVar4[2] + 0xb34) == 0) {
*(undefined8 *)((longlong)plVar4 + 100) = 0;
}
else {
*(undefined4 *)((longlong)plVar4 + 100) = *(undefined4 *)(plVar4[3] + 0x90);
*(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(plVar4[3] + 0x94);
FUN_1401e7de0(plVar4);
}
if ((*(longlong *)(plVar4[2] + 0x120) != *(longlong *)(plVar4[2] + 0x130)) &&
(iVar1 = FUN_1401e7940(plVar4), iVar1 < 0)) goto LAB_1401e1792;
if (*(int *)((longlong)plVar4 + 100) != 0) {
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) & 0xfffffffb;
}
*(longlong **)(param_1 + 0x158) = plVar4;
}
if ((*(longlong *)(param_1 + 0x150) == 0) &&
(lVar2 = FUN_14020bd20(*(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0x68)), lVar2 != 0))
{
plVar3 = (longlong *)FUN_14018b280(0x78);
plVar4 = plVar5;
if (plVar3 != (longlong *)0x0) {
*plVar3 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar3 + 1) = 1;
*plVar3 = (longlong)&PTR_LAB_140b60300;
plVar3[6] = 0;
plVar3[7] = 0;
plVar3[9] = 0;
plVar3[10] = 0;
plVar3[0xb] = 0;
*(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
plVar3[2] = param_1;
plVar4 = plVar3;
}
plVar4[3] = lVar2;
*(undefined4 *)(plVar4 + 5) = 1;
*(undefined4 *)((longlong)plVar4 + 0x2c) = 1;
plVar4[8] = 0;
plVar4[4] = (ulonglong)uStack28 << 0x20;
iVar1 = FUN_1401e6bf0(plVar4);
if (iVar1 == -0x7ff8fb70) {
lVar2 = FUN_1401e6b70(plVar4);
if (lVar2 == 0) goto LAB_1401e1792;
plVar4[3] = lVar2;
iVar1 = FUN_1401e6bf0(plVar4);
}
if (iVar1 < 0) goto LAB_1401e1792;
if (*(int *)(plVar4[2] + 0xb34) == 0) {
*(undefined8 *)((longlong)plVar4 + 100) = 0;
}
else {
*(undefined4 *)((longlong)plVar4 + 100) = *(undefined4 *)(plVar4[3] + 0x90);
*(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(plVar4[3] + 0x94);
FUN_1401e7de0(plVar4);
}
if ((*(longlong *)(plVar4[2] + 0x120) != *(longlong *)(plVar4[2] + 0x130)) &&
(iVar1 = FUN_1401e7940(plVar4), iVar1 < 0)) goto LAB_1401e1792;
if (*(int *)((longlong)plVar4 + 100) != 0) {
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) & 0xfffffffb;
}
*(longlong **)(param_1 + 0x150) = plVar4;
}
}
if (*(longlong *)(param_1 + 0x178) != 0) {
return 0;
}
lVar2 = FUN_14020bd20(*(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0x6c));
if (*(int *)(param_1 + 0x2c) == 0) {
return 0;
}
if (lVar2 == 0) {
return 0;
}
plVar3 = (longlong *)FUN_14018b280(0x78);
plVar4 = plVar5;
if (plVar3 != (longlong *)0x0) {
*plVar3 = (longlong)&PTR_LAB_140b55048;
*(undefined4 *)(plVar3 + 1) = 1;
*plVar3 = (longlong)&PTR_LAB_140b60300;
plVar3[6] = 0;
plVar3[7] = 0;
plVar3[9] = 0;
plVar3[10] = 0;
plVar3[0xb] = 0;
*(undefined8 *)((longlong)plVar3 + 0x6c) = 0;
plVar3[2] = param_1;
plVar4 = plVar3;
}
plVar4[3] = lVar2;
*(undefined4 *)(plVar4 + 5) = 6;
*(undefined4 *)((longlong)plVar4 + 0x2c) = 1;
plVar4[8] = 0;
plVar4[4] = (ulonglong)uStack28 << 0x20;
iVar1 = FUN_1401e6bf0(plVar4);
if (iVar1 == -0x7ff8fb70) {
lVar2 = FUN_1401e6b70(plVar4);
if (lVar2 == 0) goto LAB_1401e1792;
plVar4[3] = lVar2;
iVar1 = FUN_1401e6bf0(plVar4);
}
if (-1 < iVar1) {
if (*(int *)(plVar4[2] + 0xb34) == 0) {
*(undefined8 *)((longlong)plVar4 + 100) = 0;
}
else {
*(undefined4 *)((longlong)plVar4 + 100) = *(undefined4 *)(plVar4[3] + 0x90);
*(undefined4 *)(plVar4 + 0xd) = *(undefined4 *)(plVar4[3] + 0x94);
FUN_1401e7de0(plVar4);
}
if ((*(longlong *)(plVar4[2] + 0x120) == *(longlong *)(plVar4[2] + 0x130)) ||
(iVar1 = FUN_1401e7940(plVar4), -1 < iVar1)) {
if (*(int *)((longlong)plVar4 + 100) != 0) {
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) & 0xfffffffb;
}
*(longlong **)(param_1 + 0x178) = plVar4;
return 0;
}
}
LAB_1401e1792:
(**(code **)(*plVar4 + 8))(plVar4);
return iVar1;
}



undefined8 FUN_1401e1880(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
longlong *plVar1;
longlong *plVar2;
ulonglong uVar3;
longlong lVar4;
float *pfVar5;
longlong **pplVar6;
undefined4 uVar7;
float fVar8;
undefined4 in_XMM6_Da;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
undefined4 in_XMM7_Da;
float fVar9;
undefined4 in_XMM7_Db;
undefined4 in_XMM7_Dc;
undefined4 in_XMM7_Dd;
longlong local_res10;
undefined auVar10 [16];
undefined auVar11 [16];

auVar11 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
auVar10 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
uVar3 = 0;
do {
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x318))
        (*(longlong **)(param_1 + 0x120),
         *(undefined4 *)((longlong)&DAT_140c2d3f8 + uVar3),param_3,param_4,auVar10,
         auVar11);
lVar4 = param_1 + uVar3;
uVar3 = uVar3 + 4;
*(undefined4 *)(lVar4 + 0xbf8) = uVar7;
} while (uVar3 < 0x10);
pplVar6 = (longlong **)(param_1 + 0x388);
local_res10 = 0x48;
do {
plVar1 = pplVar6[-0x48];
plVar2 = *pplVar6;
if (plVar1 != (longlong *)0x0) {
pfVar5 = (float *)(param_1 + 0xbf8);
lVar4 = 4;
do {
if ((*(uint *)(plVar1[3] + 0x90) & *(uint *)((longlong)pfVar5 + (0x140c62ba8 - param_1))) !=
0) {
fVar8 = (float)FUN_1401e7fb0(plVar1,*(undefined4 *)
        ((0x140c2c800 - param_1) + (longlong)pfVar5));
fVar9 = *pfVar5;
if (fVar8 <= *pfVar5) {
fVar9 = fVar8;
}
*pfVar5 = fVar9;
}
pfVar5 = pfVar5 + 1;
lVar4 = lVar4 + -1;
} while (lVar4 != 0);
}
if (plVar1 != plVar2) {
if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0xc34) != 0)) {
if ((longlong *)plVar1[6] != (longlong *)0x0) {
(**(code **)(*(longlong *)plVar1[6] + 0xf0))();
}
if ((longlong *)plVar1[7] != (longlong *)0x0) {
(**(code **)(*(longlong *)plVar1[7] + 0xf0))();
}
if ((longlong *)plVar1[9] != (longlong *)0x0) {
(**(code **)(*(longlong *)plVar1[9] + 0xf0))();
}
if ((longlong *)plVar1[10] != (longlong *)0x0) {
(**(code **)(*(longlong *)plVar1[10] + 0xf0))();
}
if ((longlong *)plVar1[0xb] != (longlong *)0x0) {
(**(code **)(*(longlong *)plVar1[0xb] + 0xf0))();
}
*(undefined4 *)(plVar1 + 0xe) = 0;
}
if (*pplVar6 != plVar1) {
if (plVar1 != (longlong *)0x0) {
(**(code **)*plVar1)(plVar1);
}
if (*pplVar6 != (longlong *)0x0) {
(**(code **)(**pplVar6 + 8))();
}
*pplVar6 = plVar1;
}
}
pplVar6 = pplVar6 + 1;
local_res10 = local_res10 + -1;
} while (local_res10 != 0);
return 0;
}



void FUN_1401e1a80(longlong param_1)

{
int *piVar1;
longlong lVar2;
int iVar3;
uint uVar4;
longlong lVar5;
longlong *plVar6;
uint *puVar7;
ulonglong uVar8;
longlong lVar9;
longlong **pplVar10;
ulonglong uVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
float fVar16;
float fVar17;
undefined auStack1400 [32];
longlong *local_558 [2];
undefined4 local_548;
undefined4 local_544;
undefined4 local_540;
undefined4 local_53c;
longlong local_538;
longlong alStack1328 [145];
ulonglong local_a8;

local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack1400;
if ((*(int *)(param_1 + 0xb34) != 0) &&
(((*(byte *)(param_1 + 0xc60) & 4) != 0 || (iVar3 = FUN_1401e1e50(), -1 < iVar3)))) {
fVar13 = 6.0;
fVar14 = 0.0;
uVar11 = 0;
pplVar10 = (longlong **)(param_1 + 0xb38);
puVar7 = (uint *)(param_1 + 0xb58);
fVar16 = 1024.0;
fVar17 = 1.442695;
fVar15 = 2.0;
do {
plVar6 = (longlong *)0x0;
local_558[0] = (longlong *)0x0;
if ((*(byte *)(param_1 + 0xc60) & 4) == 0) {
if (pplVar10[0xc] != (longlong *)0x0) goto LAB_1401e1ce1;
local_544 = *(undefined4 *)(param_1 + 0x24);
lVar5 = 0;
local_548 = (undefined4)uVar11;
local_540 = *(undefined4 *)(param_1 + 0x28);
local_538 = 0;
local_53c = *(undefined4 *)(param_1 + 0x20);
plVar6 = (longlong *)(param_1 + 0x148);
lVar9 = 0x48;
do {
lVar2 = *plVar6;
if ((lVar2 != 0) &&
((*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x90) &
*(uint *)((0x140c62c48 - param_1) + (longlong)puVar7)) != 0)) {
alStack1328[lVar5 * 2] = *(longlong *)(lVar2 + 0x18);
alStack1328[lVar5 * 2 + 1] = *(longlong *)(lVar2 + 0x20);
lVar5 = local_538 + 1;
local_538 = lVar5;
}
plVar6 = plVar6 + 1;
lVar9 = lVar9 + -1;
} while (lVar9 != 0);
iVar3 = FUN_1401dd190(*(undefined8 *)(param_1 + 0x10),&local_548,local_558);
plVar6 = local_558[0];
if (iVar3 < 0) {
if (local_558[0] != (longlong *)0x0) {
(**(code **)(*local_558[0] + 8))();
}
goto LAB_1401e1e1e;
}
LAB_1401e1c4b:
if (plVar6 == (longlong *)0x0) goto LAB_1401e1ce1;
fVar12 = (float)FUN_1408fe170((float)puVar7[0x28] * fVar16 * *(float *)(param_1 + 0xc30));
fVar12 = fVar12 * fVar17 + *(float *)(param_1 + 0xc2c);
if (fVar12 <= (float)(ulonglong)*(uint *)(param_1 + 0xc28)) {
fVar12 = (float)(ulonglong)*(uint *)(param_1 + 0xc28);
}
if ((DAT_140c636a8 - *(int *)(param_1 + 0xc38) < 0) && (plVar6 == *pplVar10)) {
uVar8 = (ulonglong)*puVar7;
if (((float)uVar8 + fVar15 <= fVar12) || (fVar12 < (float)uVar8)) goto LAB_1401e1cc3;
}
else {
LAB_1401e1cc3:
if (fVar14 < fVar12) {
if (fVar12 < fVar13) {
uVar8 = (ulonglong)fVar12;
}
else {
uVar8 = 6;
}
}
else {
uVar8 = 0;
}
}
}
else {
if (*pplVar10 != (longlong *)0x0) {
(**(code **)**pplVar10)();
plVar6 = *pplVar10;
goto LAB_1401e1c4b;
}
LAB_1401e1ce1:
uVar8 = 7;
}
uVar4 = (uint)uVar8;
if ((uVar4 != *puVar7) || (plVar6 != *pplVar10)) {
*(int *)(param_1 + 0xc38) = DAT_140c636a8 + 5000;
if ((plVar6 != (longlong *)0x0) &&
((uVar4 < 7 &&
(piVar1 = (int *)((longlong)plVar6 + (uVar8 & 0xffffffff) * 4 + 0x4c8),
*piVar1 = *piVar1 + 1, uVar4 < *(uint *)(plVar6 + 0x98))))) {
FUN_1401e5690(plVar6);
}
if (*pplVar10 != (longlong *)0x0) {
FUN_1401e5490();
}
*puVar7 = uVar4;
if (plVar6 == (longlong *)0x0) {
uVar4 = 0;
}
else {
uVar4 = *(int *)((longlong)plVar6 + 0x4bc) - 1;
}
puVar7[4] = uVar4;
if (plVar6 != *pplVar10) {
if (plVar6 != (longlong *)0x0) {
(**(code **)*plVar6)(plVar6);
}
if (*pplVar10 != (longlong *)0x0) {
(**(code **)(**pplVar10 + 8))();
}
*pplVar10 = plVar6;
if (plVar6 == (longlong *)0x0) {
uVar4 = 0;
}
else {
uVar4 = *(int *)((longlong)plVar6 + 0x4bc) - 1;
}
puVar7[4] = uVar4;
}
}
if (plVar6 != (longlong *)0x0) {
(**(code **)(*plVar6 + 8))(plVar6);
}
uVar11 = uVar11 + 1;
pplVar10 = pplVar10 + 1;
puVar7 = puVar7 + 1;
} while (uVar11 < 4);
*(uint *)(param_1 + 0xc60) = *(uint *)(param_1 + 0xc60) | 4;
}
LAB_1401e1e1e:
FUN_1407db4f0(local_a8 ^ (ulonglong)auStack1400);
return;
}



void FUN_1401e1e50(longlong param_1)

{
short sVar1;
longlong lVar2;
int iVar3;
undefined8 *puVar4;
undefined8 *puVar5;
longlong *plVar6;
undefined8 *puVar7;
longlong *plVar8;
longlong lVar9;
undefined8 *puVar10;
longlong lVar11;
undefined auStack1256 [32];
undefined8 local_4c8;
undefined local_4b8 [96];
short local_458 [264];
short local_248 [264];
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1256;
plVar8 = (longlong *)(param_1 + 0xbd8);
lVar11 = 4;
lVar9 = 4;
puVar10 = (undefined8 *)0x0;
plVar6 = plVar8;
do {
lVar2 = plVar6[-8];
plVar6[-8] = 0;
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
lVar2 = *plVar6;
*plVar6 = 0;
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
plVar6 = plVar6 + 1;
lVar9 = lVar9 + -1;
} while (lVar9 != 0);
if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x10) & 1) == 0) &&
(iVar3 = FUN_1401dba80(param_1,local_4b8), -1 < iVar3)) {
do {
local_4c8 = *(undefined8 *)((longlong)&UNK_140a49f88 + -param_1 + (longlong)plVar8);
FUN_14001b370(local_458,0x104,L"Costume\\%s.%s_Color.tex",local_4b8);
local_4c8 = *(undefined8 *)((longlong)&UNK_140a49f88 + -param_1 + (longlong)plVar8);
FUN_14001b370(local_248,0x104,L"Costume\\%s.%s_Normal.tex",local_4b8);
iVar3 = FUN_1401b58d0();
if ((iVar3 != 0) && (iVar3 = FUN_1401b58d0(), iVar3 != 0)) {
lVar9 = plVar8[-8];
puVar7 = puVar10;
sVar1 = local_458[0];
while (sVar1 != 0) {
puVar7 = (undefined8 *)((longlong)puVar7 + 1);
sVar1 = local_458[(longlong)puVar7];
}
puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
puVar5 = puVar10;
if (puVar4 != (undefined8 *)0x0) {
*puVar4 = &PTR_LAB_140b55060;
puVar4[1] = puVar7;
puVar5 = puVar4;
}
puVar5 = puVar5 + 2;
FUN_1407db590(puVar5,local_458,(longlong)puVar7 * 2);
*(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar5) = 0;
plVar8[-8] = (longlong)puVar5;
if (lVar9 != 0) {
(**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
}
lVar9 = *plVar8;
puVar7 = puVar10;
sVar1 = local_248[0];
while (sVar1 != 0) {
puVar7 = (undefined8 *)((longlong)puVar7 + 1);
sVar1 = local_248[(longlong)puVar7];
}
puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
puVar5 = puVar10;
if (puVar4 != (undefined8 *)0x0) {
*puVar4 = &PTR_LAB_140b55060;
puVar4[1] = puVar7;
puVar5 = puVar4;
}
puVar5 = puVar5 + 2;
FUN_1407db590(puVar5,local_248,(longlong)puVar7 * 2);
*(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar5) = 0;
*plVar8 = (longlong)puVar5;
if (lVar9 != 0) {
(**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
}
}
plVar8 = plVar8 + 1;
lVar11 = lVar11 + -1;
} while (lVar11 != 0);
}
FUN_1407db4f0(local_38 ^ (ulonglong)auStack1256);
return;
}



undefined8 FUN_1401e20c0(longlong param_1)

{
longlong **pplVar1;
longlong *plVar2;
longlong lVar3;
longlong lVar4;
longlong **pplVar5;
longlong *plVar6;
ulonglong uVar7;

if (*(int *)(param_1 + 0xb34) != 0) {
pplVar5 = (longlong **)(param_1 + 0xb78);
uVar7 = 0;
do {
if (pplVar5[0x12] != (longlong *)0x0) {
(**(code **)(*pplVar5[0x12] + 8))();
pplVar5[0x12] = (longlong *)0x0;
}
plVar6 = pplVar5[-8];
if ((plVar6 != (longlong *)0x0) &&
(plVar2 = (longlong *)plVar6[0x9e], pplVar5[0x12] != plVar2)) {
if (plVar2 != (longlong *)0x0) {
(**(code **)*plVar2)();
}
if (pplVar5[0x12] != (longlong *)0x0) {
(**(code **)(*pplVar5[0x12] + 8))();
}
pplVar5[0x12] = (longlong *)plVar6[0x9e];
}
if (*pplVar5 != (longlong *)0x0) {
(**(code **)(**pplVar5 + 8))();
*pplVar5 = (longlong *)0x0;
}
plVar6 = pplVar5[-8];
if (plVar6 == (longlong *)0x0) {
if (pplVar5[4] == (longlong *)0x0) {
lVar4 = *(longlong *)(param_1 + 0x10);
plVar6 = *(longlong **)(lVar4 + 0x50);
if (*pplVar5 != plVar6) {
if (plVar6 != (longlong *)0x0) {
(**(code **)*plVar6)();
}
if (*pplVar5 != (longlong *)0x0) {
(**(code **)(**pplVar5 + 8))();
}
*pplVar5 = *(longlong **)(lVar4 + 0x50);
}
}
}
else if ((*(uint *)((longlong)&DAT_140c2d3f8 + param_1 + -0x140c2c8a0 + uVar7) < 7) &&
(pplVar5 != (longlong **)0x0)) {
if (plVar6[0x9e] == 0) {
plVar6 = *(longlong **)(plVar6[2] + 0x50);
(**(code **)*plVar6)(plVar6);
*pplVar5 = plVar6;
}
else {
plVar6 = *(longlong **)(plVar6[0x9e] + 0x20);
(**(code **)*plVar6)(plVar6);
*pplVar5 = plVar6;
}
}
lVar4 = **(longlong **)(param_1 + 0x120);
if (*pplVar5 == (longlong *)0x0) {
(**(code **)(lVar4 + 0x310))
(*(longlong **)(param_1 + 0x120),*(undefined4 *)((longlong)&DAT_140c2d3f8 + uVar7)
,pplVar5[4]);
}
else {
(**(code **)(lVar4 + 0x308))();
}
pplVar1 = pplVar5 + 8;
if (pplVar5[8] != (longlong *)0x0) {
(**(code **)(*pplVar5[8] + 8))();
*pplVar1 = (longlong *)0x0;
}
plVar6 = pplVar5[-8];
if (plVar6 == (longlong *)0x0) {
if (pplVar5[0xc] == (longlong *)0x0) {
lVar4 = *(longlong *)(param_1 + 0x10);
plVar6 = *(longlong **)(lVar4 + 0x58);
if (*pplVar1 != plVar6) {
if (plVar6 != (longlong *)0x0) {
(**(code **)*plVar6)();
}
if (*pplVar1 != (longlong *)0x0) {
(**(code **)(**pplVar1 + 8))();
}
*pplVar1 = *(longlong **)(lVar4 + 0x58);
}
}
}
else if ((*(uint *)((longlong)&DAT_140c2d3f8 + param_1 + -0x140c2c8a0 + uVar7) < 7) &&
(pplVar1 != (longlong **)0x0)) {
if (plVar6[0x9e] == 0) {
plVar6 = *(longlong **)(plVar6[2] + 0x58);
(**(code **)*plVar6)(plVar6);
*pplVar1 = plVar6;
}
else {
plVar6 = *(longlong **)(plVar6[0x9e] + 0x28);
(**(code **)*plVar6)(plVar6);
*pplVar1 = plVar6;
}
}
lVar4 = **(longlong **)(param_1 + 0x120);
if (*pplVar1 == (longlong *)0x0) {
(**(code **)(lVar4 + 0x310))
(*(longlong **)(param_1 + 0x120),*(undefined4 *)((longlong)&DAT_140c2d3e8 + uVar7)
,pplVar5[0xc]);
}
else {
(**(code **)(lVar4 + 0x308))();
}
uVar7 = uVar7 + 4;
pplVar5 = pplVar5 + 1;
} while (uVar7 < 0x10);
plVar6 = (longlong *)(param_1 + 0x148);
lVar4 = 0x48;
do {
lVar3 = *plVar6;
if (lVar3 != 0) {
if (*(longlong *)(lVar3 + 0x30) != 0) {
FUN_1401e7e50(lVar3);
}
if (*(longlong *)(lVar3 + 0x38) != 0) {
FUN_1401e7e50(lVar3);
}
if (*(longlong *)(lVar3 + 0x48) != 0) {
FUN_1401e7e50(lVar3);
}
if (*(longlong *)(lVar3 + 0x50) != 0) {
FUN_1401e7e50(lVar3);
}
if (*(longlong *)(lVar3 + 0x58) != 0) {
FUN_1401e7e50(lVar3);
}
*(undefined4 *)(lVar3 + 0x70) = 0;
}
plVar6 = plVar6 + 1;
lVar4 = lVar4 + -1;
} while (lVar4 != 0);
}
return 0;
}



undefined8 FUN_1401e23c0(longlong param_1)

{
int iVar1;
longlong lVar2;
int iVar3;
longlong **pplVar4;
int *piVar5;
uint uVar6;
longlong lVar7;
uint uVar8;
longlong *plVar9;
longlong **pplVar10;
uint uVar11;
longlong lVar12;
int aiStack3152 [764];
undefined8 uStack96;

lVar12 = 0x48;
plVar9 = (longlong *)(param_1 + 0x148);
lVar7 = 0x48;
do {
lVar2 = plVar9[0x90];
if ((lVar2 != 0) &&
((*plVar9 != lVar2 || (*(longlong *)(param_1 + 0x120) != *(longlong *)(param_1 + 0x130))))) {
if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
uStack96 = 0x1401e2423;
(**(code **)(**(longlong **)(lVar2 + 0x30) + 0x3a8))();
}
if (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0) {
uStack96 = 0x1401e2435;
(**(code **)(**(longlong **)(lVar2 + 0x38) + 0x3a8))();
}
if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
uStack96 = 0x1401e2447;
(**(code **)(**(longlong **)(lVar2 + 0x48) + 0x3a8))();
}
if (*(longlong **)(lVar2 + 0x50) != (longlong *)0x0) {
uStack96 = 0x1401e2459;
(**(code **)(**(longlong **)(lVar2 + 0x50) + 0x3a8))();
}
if (*(longlong **)(lVar2 + 0x58) != (longlong *)0x0) {
uStack96 = 0x1401e246b;
(**(code **)(**(longlong **)(lVar2 + 0x58) + 0x3a8))();
}
}
plVar9 = plVar9 + 1;
lVar7 = lVar7 + -1;
} while (lVar7 != 0);
pplVar4 = (longlong **)(param_1 + 0x5c8);
lVar7 = 0x48;
pplVar10 = pplVar4;
do {
if ((pplVar10[-0x90] != (longlong *)0x0) &&
((pplVar10[-0x90] != *pplVar10 ||
(*(longlong *)(param_1 + 0x120) != *(longlong *)(param_1 + 0x130))))) {
uStack96 = 0x1401e24b6;
FUN_1401e7940();
}
pplVar10 = pplVar10 + 1;
lVar7 = lVar7 + -1;
} while (lVar7 != 0);
do {
plVar9 = pplVar4[-0x90];
if (*pplVar4 != plVar9) {
if (plVar9 != (longlong *)0x0) {
uStack96 = 0x1401e24d6;
(**(code **)*plVar9)();
}
if (*pplVar4 != (longlong *)0x0) {
uStack96 = 0x1401e24e4;
(**(code **)(**pplVar4 + 8))();
}
*pplVar4 = pplVar4[-0x90];
}
pplVar4 = pplVar4 + 1;
lVar12 = lVar12 + -1;
} while (lVar12 != 0);
if (*(longlong *)(param_1 + 0x1e8) != 0) {
iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x18) + 0x10) + -0x2c;
switch(iVar3) {
case 0:
case 3:
case 7:
case 8:
case 0xe:
case 0xf:
break;
case 1:
break;
case 2:
break;
case 5:
case 0x10:
case 0xa0:
break;
case 6:
case 0x22:
break;
case 0x23:
}
switch(iVar3) {
case 1:
break;
case 2:
break;
case 5:
case 0x10:
case 0xa0:
break;
case 6:
case 0x22:
break;
case 0x23:
}
}
uVar6 = 0;
uVar8 = 0;
piVar5 = (int *)(param_1 + 0xc58);
do {
iVar3 = *(int *)((longlong)aiStack3152 + -param_1 + (longlong)piVar5);
uVar11 = 0;
switch(iVar3) {
case 4:
case 0x24:
case 0x25:
case 0x26:
case 0x29:
uVar11 = 4;
break;
case 5:
case 0x20:
case 0x22:
case 0xa4:
uVar11 = 1;
break;
case 6:
case 0x21:
case 0x23:
case 0xa5:
uVar11 = 2;
}
if ((uVar6 & uVar11) == 0) {
uVar6 = uVar6 | uVar11;
}
else {
iVar3 = 0;
*(undefined4 *)((longlong)aiStack3152 + -param_1 + (longlong)piVar5) = 0;
}
if ((piVar5[-2] != iVar3) ||
(*piVar5 != *(int *)((longlong)aiStack3152 + -param_1 + 8 + (longlong)piVar5))) {
iVar1 = *(int *)((longlong)aiStack3152 + -param_1 + 8 + (longlong)piVar5);
piVar5[-2] = iVar3;
*piVar5 = iVar1;
if (*(longlong *)(param_1 + 0x1e8) != 0) {
if ((uVar8 & 1) == 0) {
uStack96 = 0x1401e26a4;
FUN_1401e7a30();
}
else {
uStack96 = 0x1401e269d;
FUN_1401e7c40();
}
}
}
uVar8 = uVar8 + 1;
piVar5 = piVar5 + 1;
} while (uVar8 < 2);
return 0;
}



void FUN_1401e2910(longlong param_1)

{
int iVar1;
int iVar2;
int *piVar3;
int *piVar4;
ulonglong uVar5;
uint uVar6;
ulonglong uVar7;
uint uVar8;
ulonglong uVar9;
longlong *plVar10;
longlong lVar11;
ulonglong uVar12;
undefined auStack344 [32];
int local_138 [72];
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
uVar7 = 0;
if (*(int *)(param_1 + 0xb34) == 0) {
piVar4 = (int *)(param_1 + 0x34);
uVar5 = uVar7;
do {
iVar1 = *piVar4;
uVar9 = uVar5;
if (iVar1 == 0) break;
uVar8 = (int)uVar5 + 1;
uVar9 = (ulonglong)uVar8;
piVar4 = piVar4 + 1;
local_138[uVar5] = iVar1;
uVar5 = uVar9;
} while (uVar8 < 0x10);
}
else {
plVar10 = (longlong *)(param_1 + 0x148);
lVar11 = 0x48;
uVar9 = uVar7;
do {
if (*plVar10 != 0) {
piVar4 = (int *)(*(longlong *)(*plVar10 + 0x18) + 0xd8);
uVar5 = uVar9;
uVar12 = uVar7;
do {
iVar1 = *piVar4;
uVar9 = uVar5;
if ((iVar1 != 0) && (iVar1 < 0xca)) {
uVar9 = (ulonglong)((int)uVar5 + 1);
local_138[uVar5] = iVar1;
}
uVar8 = (int)uVar12 + 1;
uVar12 = (ulonglong)uVar8;
piVar4 = piVar4 + 1;
uVar5 = uVar9;
} while (uVar8 < 4);
}
plVar10 = plVar10 + 1;
lVar11 = lVar11 + -1;
} while (lVar11 != 0);
}
uVar8 = (uint)uVar9;
if (1 < uVar8) {
FUN_1401c3280(&LAB_1401e2900,local_138,uVar9);
uVar9 = 1;
if (1 < uVar8) {
piVar3 = local_138;
piVar4 = local_138;
uVar12 = (ulonglong)(uVar8 - 1);
uVar5 = uVar9;
do {
piVar3 = piVar3 + 1;
uVar9 = uVar5;
if (*piVar3 != *piVar4) {
uVar9 = (ulonglong)((int)uVar5 + 1);
local_138[uVar5] = *piVar3;
}
piVar4 = piVar4 + 1;
uVar12 = uVar12 - 1;
uVar5 = uVar9;
} while (uVar12 != 0);
}
}
uVar8 = (uint)uVar9;
uVar5 = uVar7;
if (*(int *)(param_1 + 0xb30) != 0) {
do {
if (uVar8 <= (uint)uVar5) break;
iVar1 = *(int *)(param_1 + 0x808 + uVar7 * 4);
iVar2 = local_138[uVar5];
if (iVar1 < iVar2) {
(**(code **)(**(longlong **)(param_1 + 0x120) + 0x2d8))
(*(longlong **)(param_1 + 0x120),iVar1,0);
uVar7 = (ulonglong)((int)uVar7 + 1);
}
else {
if (iVar2 < iVar1) {
(**(code **)(**(longlong **)(param_1 + 0x120) + 0x2d8))
(*(longlong **)(param_1 + 0x120),iVar2,1);
}
else {
uVar7 = (ulonglong)((int)uVar7 + 1);
}
uVar5 = (ulonglong)((uint)uVar5 + 1);
}
} while ((uint)uVar7 < *(uint *)(param_1 + 0xb30));
if ((uint)uVar7 < *(uint *)(param_1 + 0xb30)) {
do {
(**(code **)(**(longlong **)(param_1 + 0x120) + 0x2d8))
(*(longlong **)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x808 + uVar7 * 4),0);
uVar6 = (int)uVar7 + 1;
uVar7 = (ulonglong)uVar6;
} while (uVar6 < *(uint *)(param_1 + 0xb30));
}
}
if ((uint)uVar5 < uVar8) {
piVar4 = local_138 + uVar5;
uVar7 = (ulonglong)(uVar8 - (uint)uVar5);
do {
(**(code **)(**(longlong **)(param_1 + 0x120) + 0x2d8))
(*(longlong **)(param_1 + 0x120),*piVar4,1);
piVar4 = piVar4 + 1;
uVar7 = uVar7 - 1;
} while (uVar7 != 0);
}
FUN_1407db590(param_1 + 0x808,local_138,uVar9 << 2);
*(uint *)(param_1 + 0xb30) = uVar8;
FUN_1407db4f0(local_18 ^ (ulonglong)auStack344);
return;
}



void FUN_1401e2b30(longlong *param_1,longlong param_2,longlong param_3)

{
undefined *puVar1;
undefined *puVar2;
int iVar3;
longlong lVar4;
undefined *puVar5;
ulonglong uVar6;
undefined8 *puVar7;
ulonglong uVar8;
undefined4 uVar9;
undefined *local_res20;
undefined **local_138;
undefined8 local_130;
LPVOID local_128;
undefined local_120 [8];
undefined *local_118;
undefined8 local_110;
undefined *local_100;
undefined **local_f8;
undefined8 local_f0;
LPVOID local_e8;
int local_d8 [4];
undefined8 local_c8;
undefined4 local_c0;
undefined local_b8 [16];
undefined8 local_a8;
undefined4 local_a0;
undefined local_98 [16];
undefined8 local_68;
undefined4 local_60;

lVar4 = (**(code **)(*param_1 + 0x70))();
if (lVar4 != 0) {
if ((*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) & 0xfffffffffffffffcU) != 0) {
uVar8 = 0;
uVar6 = uVar8;
for (puVar7 = (undefined8 *)**(undefined8 **)(param_3 + 8);
puVar7 != *(undefined8 **)(param_3 + 8); puVar7 = (undefined8 *)*puVar7) {
uVar6 = uVar6 + 1;
}
if (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 2 == uVar6) {
local_118 = (undefined *)FUN_14018b280(0x70);
local_110 = 0;
*local_118 = 0;
*(undefined8 *)(local_118 + 8) = 0;
*(undefined **)(local_118 + 0x10) = local_118;
*(undefined **)(local_118 + 0x18) = local_118;
puVar7 = (undefined8 *)**(undefined8 **)(param_3 + 8);
uVar6 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 2;
if (uVar6 != 0) {
do {
iVar3 = *(int *)(puVar7 + 2);
uVar9 = *(undefined4 *)(*(longlong *)(param_2 + 8) + uVar8 * 4);
puVar2 = *(undefined **)(local_118 + 8);
puVar5 = local_118;
while (puVar1 = puVar2, puVar1 != (undefined *)0x0) {
if (*(int *)(puVar1 + 0x20) < iVar3) {
puVar2 = *(undefined **)(puVar1 + 0x18);
}
else {
puVar2 = *(undefined **)(puVar1 + 0x10);
puVar5 = puVar1;
}
}
if ((puVar5 == local_118) || (iVar3 < *(int *)(puVar5 + 0x20))) {
local_a8 = 0;
local_b8 = ZEXT816(0);
local_98 = ZEXT816(0);
local_a0 = 0;
local_68 = 0;
local_60 = 0;
local_c8 = 0;
local_c0 = 0;
local_res20 = puVar5;
local_d8[0] = iVar3;
FUN_1401e4570(local_120,&local_100,&local_res20,local_d8);
puVar5 = local_100;
}
switch(*(undefined4 *)(puVar7 + 3)) {
case 0:
*(undefined4 *)(puVar5 + 0x40) = uVar9;
*(undefined4 *)(puVar5 + 0x30) = 1;
break;
case 1:
*(undefined4 *)(puVar5 + 0x44) = uVar9;
*(undefined4 *)(puVar5 + 0x30) = 1;
break;
case 2:
*(undefined4 *)(puVar5 + 0x48) = uVar9;
*(undefined4 *)(puVar5 + 0x30) = 1;
break;
case 3:
*(undefined4 *)(puVar5 + 0x54) = uVar9;
*(undefined4 *)(puVar5 + 0x34) = 1;
break;
case 4:
*(undefined4 *)(puVar5 + 0x50) = uVar9;
*(undefined4 *)(puVar5 + 0x34) = 1;
break;
case 5:
*(undefined4 *)(puVar5 + 0x58) = uVar9;
*(undefined4 *)(puVar5 + 0x34) = 1;
break;
case 6:
*(undefined4 *)(puVar5 + 0x60) = uVar9;
*(undefined4 *)(puVar5 + 0x38) = 1;
break;
case 7:
*(undefined4 *)(puVar5 + 100) = uVar9;
*(undefined4 *)(puVar5 + 0x38) = 1;
break;
case 8:
*(undefined4 *)(puVar5 + 0x68) = uVar9;
*(undefined4 *)(puVar5 + 0x38) = 1;
break;
default:
local_138 = &PTR_LAB_140b5e648;
local_130 = 0;
local_128 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_138);
local_f8 = local_138;
local_f0 = local_130;
local_e8 = local_128;
local_res20 = (undefined *)0x141d45610;
iVar3 = FUN_1401971e0(&DAT_140c8a284,5,&local_res20,*(undefined4 *)(puVar7 + 3),
                      &local_f8);
local_138 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_128);
if (iVar3 != 0) {
DebugBreak();
}
}
puVar7 = (undefined8 *)*puVar7;
uVar8 = uVar8 + 1;
} while (uVar8 < uVar6);
}
(**(code **)(*param_1 + 0x130))(param_1,local_120);
FUN_140008410(local_120);
FUN_14018b900(local_118,0);
}
}
}
return;
}



void FUN_1401e2ee0(longlong *param_1,longlong param_2)

{
undefined4 uVar1;
longlong lVar2;
longlong *plVar3;
longlong lVar4;
longlong lVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
float fVar11;
float fVar12;
float local_88;
float local_84;
float local_80;
float local_7c;

plVar3 = (longlong *)(**(code **)(*param_1 + 0x70))(param_1,0x19);
if ((plVar3 != (longlong *)0x0) &&
(lVar5 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10), lVar5 != *(longlong *)(param_2 + 8))
) {
fVar12 = 0.5;
do {
uVar1 = *(undefined4 *)(lVar5 + 0x20);
if (*(int *)(lVar5 + 0x30) != 0) {
(**(code **)(*plVar3 + 0x218))(plVar3,uVar1,lVar5 + 0x40);
}
if (*(int *)(lVar5 + 0x34) != 0) {
fVar9 = *(float *)(lVar5 + 0x58) * fVar12;
fVar6 = (float)FUN_1408fe3d0(fVar9);
fVar9 = (float)FUN_1408fc950(fVar9);
fVar10 = *(float *)(lVar5 + 0x54) * fVar12;
fVar7 = (float)FUN_1408fe3d0(fVar10);
fVar10 = (float)FUN_1408fc950(fVar10);
fVar11 = *(float *)(lVar5 + 0x50) * fVar12;
fVar8 = (float)FUN_1408fe3d0(fVar11);
fVar11 = (float)FUN_1408fc950(fVar11);
local_88 = fVar11 * fVar7 * fVar9 + fVar8 * fVar10 * fVar6;
local_80 = fVar11 * fVar10 * fVar6 - fVar8 * fVar7 * fVar9;
local_84 = fVar8 * fVar10 * fVar9 - fVar11 * fVar7 * fVar6;
local_7c = fVar8 * fVar7 * fVar6 + fVar11 * fVar10 * fVar9;
(**(code **)(*plVar3 + 0x220))(plVar3,uVar1,&local_88);
}
if (*(int *)(lVar5 + 0x38) != 0) {
(**(code **)(*plVar3 + 0x228))(plVar3,uVar1,lVar5 + 0x60);
}
lVar4 = *(longlong *)(lVar5 + 0x18);
if (lVar4 == 0) {
lVar4 = *(longlong *)(lVar5 + 8);
if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
do {
lVar5 = lVar4;
lVar4 = *(longlong *)(lVar5 + 8);
} while (lVar5 == *(longlong *)(lVar4 + 0x18));
}
if (*(longlong *)(lVar5 + 0x18) != lVar4) {
lVar5 = lVar4;
}
}
else {
for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar2 != 0;
lVar2 = *(longlong *)(lVar2 + 0x10)) {
lVar4 = lVar2;
}
}
} while (lVar5 != *(longlong *)(param_2 + 8));
}
return;
}



void FUN_1401e4220(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
longlong lVar2;
undefined4 local_28;
undefined4 local_24;
undefined4 local_20;
undefined4 local_1c;
float local_18;
undefined8 local_14;

plVar1 = *(longlong **)(param_1 + 0x130);
if (plVar1 == (longlong *)0x0) {
return;
}
if (*(longlong *)(param_1 + 0x7f8) == 0) {
local_18 = 0.0;
}
else {
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x7f8) + 0x18);
local_18 = (float)(*(uint *)(lVar2 + 0x100) & 0x7fffffff);
if (local_18 != 0.0) {
local_28 = *(undefined4 *)(lVar2 + 0xfc);
goto LAB_1401e4268;
}
}
local_28 = 0;
LAB_1401e4268:
local_24 = 0;
local_1c = 0;
local_14 = 0x11;
local_20 = 0x3f800000;
(**(code **)(*plVar1 + 600))(plVar1,param_2,&local_28);
return;
}



longlong ** FUN_1401e42b0(longlong **param_1,longlong **param_2)

{
    longlong *plVar1;

    plVar1 = *param_2;
    if (*param_1 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
            (**(code **)*plVar1)();
        }
        if (*param_1 != (longlong *)0x0) {
            (**(code **)(**param_1 + 8))();
        }
        *param_1 = *param_2;
    }
    return param_1;
}



void FUN_1401e4300(longlong param_1)

{
longlong lVar1;
longlong lVar2;

lVar1 = *(longlong *)(param_1 + 0x10);
lVar2 = *(longlong *)(param_1 + 8);
FUN_1407db590(lVar2,lVar1,0);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (lVar1 - lVar2 >> 2) * -4;
return;
}



longlong FUN_1401e4360(longlong param_1,int *param_2)

{
longlong lVar1;
longlong lVar2;
longlong lVar3;
longlong local_res8 [2];
longlong local_res18 [2];
int local_98 [4];
undefined8 local_88;
undefined4 local_80;
undefined local_78 [16];
undefined8 local_68;
undefined4 local_60;
undefined local_58 [16];
undefined8 local_28;
undefined4 local_20;

lVar1 = *(longlong *)(param_1 + 8);
local_res8[0] = lVar1;
if (*(longlong *)(lVar1 + 8) != 0) {
lVar2 = *(longlong *)(lVar1 + 8);
do {
if (*(int *)(lVar2 + 0x20) < *param_2) {
lVar3 = *(longlong *)(lVar2 + 0x18);
}
else {
lVar3 = *(longlong *)(lVar2 + 0x10);
local_res8[0] = lVar2;
}
lVar2 = lVar3;
} while (lVar3 != 0);
}
if ((local_res8[0] == lVar1) || (*param_2 < *(int *)(local_res8[0] + 0x20))) {
local_98[0] = *param_2;
local_28 = 0;
local_78 = ZEXT816(0);
local_58 = ZEXT816(0);
local_68 = 0;
local_20 = 0;
local_88 = 0;
local_80 = 0;
local_60 = 0;
FUN_1401e4570(param_1,local_res18,local_res8,local_98);
local_res8[0] = local_res18[0];
}
return local_res8[0] + 0x30;
}



void FUN_1401e4420(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
undefined4 *puVar1;
ulonglong uVar2;
longlong lVar3;
longlong lVar4;
undefined4 uVar5;

puVar1 = *(undefined4 **)(param_1 + 0x10);
if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
if (puVar1 != (undefined4 *)0x0) {
*puVar1 = puVar1[-1];
}
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 4;
uVar5 = *param_3;
FUN_1407db590(*(longlong *)(param_1 + 0x10) +
((*(longlong *)(param_1 + 0x10) - (longlong)param_2) + -8 >> 2) * -4 + -4);
*param_2 = uVar5;
return;
}
lVar4 = (longlong)puVar1 - *(longlong *)(param_1 + 8) >> 2;
lVar3 = lVar4 * 2;
if (lVar4 == 0) {
lVar3 = 1;
}
uVar2 = FUN_14018a3e0(lVar3 * 4);
lVar4 = FUN_14018b280(uVar2 & 0xfffffffffffffffc,0);
lVar3 = ((longlong)param_2 - *(longlong *)(param_1 + 8) >> 2) * 4;
FUN_1407db590(lVar4,*(longlong *)(param_1 + 8),lVar3);
puVar1 = (undefined4 *)(lVar3 + lVar4);
if (puVar1 != (undefined4 *)0x0) {
*puVar1 = *param_3;
}
lVar3 = *(longlong *)(param_1 + 0x10) - (longlong)param_2 >> 2;
FUN_1407db590(puVar1 + 1,param_2,lVar3 * 4);
if (*(longlong *)(param_1 + 8) != 0) {
FUN_14018b900(*(longlong *)(param_1 + 8),0);
}
*(longlong *)(param_1 + 8) = lVar4;
*(undefined4 **)(param_1 + 0x10) = puVar1 + 1 + lVar3;
*(ulonglong *)(param_1 + 0x18) = (uVar2 & 0xfffffffffffffffc) + lVar4;
return;
}



longlong * FUN_1401e4570(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
int iVar1;
char *pcVar2;
char *pcVar3;
longlong *plVar4;
longlong lVar5;
longlong lVar6;
bool bVar7;
undefined local_18 [16];

pcVar2 = *(char **)(param_1 + 8);
pcVar3 = *param_3;
if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
LAB_1401e45be:
plVar4 = (longlong *)FUN_1401e4820(param_1,local_18,param_4);
*param_2 = *plVar4;
return param_2;
}
}
else {
if (pcVar3 == pcVar2) {
iVar1 = *param_4;
pcVar3 = *(char **)(pcVar2 + 0x18);
if (*(int *)(pcVar3 + 0x20) < iVar1) {
if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
lVar5 = FUN_1401e49e0(iVar1,param_4);
*(longlong *)(pcVar3 + 0x10) = lVar5;
pcVar2 = *(char **)(param_1 + 8);
if (pcVar3 == pcVar2) {
*(longlong *)(pcVar2 + 8) = lVar5;
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
*(longlong *)(pcVar2 + 0x10) = lVar5;
}
}
else {
lVar5 = FUN_1401e49e0(iVar1,param_4);
*(longlong *)(pcVar3 + 0x18) = lVar5;
if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
}
}
*(char **)(lVar5 + 8) = pcVar3;
*(undefined8 *)(lVar5 + 0x10) = 0;
*(undefined8 *)(lVar5 + 0x18) = 0;
FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = lVar5;
return param_2;
}
plVar4 = (longlong *)FUN_1401e4820(param_1,local_18,param_4);
*param_2 = *plVar4;
return param_2;
}
if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
lVar5 = *(longlong *)(pcVar3 + 0x18);
}
else {
lVar5 = *(longlong *)(pcVar3 + 0x10);
if (lVar5 == 0) {
lVar5 = *(longlong *)(pcVar3 + 8);
lVar6 = lVar5;
if (pcVar3 == *(char **)(lVar5 + 0x10)) {
do {
lVar5 = *(longlong *)(lVar6 + 8);
bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
lVar6 = lVar5;
} while (bVar7);
}
}
else {
for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
lVar5 = lVar6;
}
}
}
if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
goto LAB_1401e45be;
if (*(longlong *)(lVar5 + 0x18) == 0) {
FUN_1401e4760(param_1,param_2,0,lVar5,param_4);
return param_2;
}
}
FUN_1401e4760();
return param_2;
}



longlong *
        FUN_1401e4760(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
longlong lVar1;
longlong lVar2;

if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
(*param_5 < *(int *)(param_4 + 0x20))) {
lVar2 = FUN_1401e49e0();
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
lVar2 = FUN_1401e49e0();
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



char ** FUN_1401e4820(longlong param_1,char **param_2,int *param_3)

{
char *pcVar1;
char **ppcVar2;
char *pcVar3;
char *pcVar4;
char *pcVar5;
char *pcVar6;
bool bVar7;
undefined local_res8 [8];

pcVar1 = *(char **)(param_1 + 8);
pcVar3 = *(char **)(pcVar1 + 8);
bVar7 = true;
pcVar6 = pcVar1;
if (pcVar3 != (char *)0x0) {
do {
pcVar6 = pcVar3;
bVar7 = *param_3 < *(int *)(pcVar6 + 0x20);
if (bVar7) {
pcVar3 = *(char **)(pcVar6 + 0x10);
}
else {
pcVar3 = *(char **)(pcVar6 + 0x18);
}
} while (pcVar3 != (char *)0x0);
}
pcVar5 = pcVar6;
if (bVar7) {
if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
ppcVar2 = (char **)FUN_1401e4760(param_1,local_res8,pcVar3,pcVar6,param_3);
*param_2 = *ppcVar2;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}
if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
pcVar5 = *(char **)(pcVar6 + 0x18);
}
else {
pcVar5 = *(char **)(pcVar6 + 0x10);
if (pcVar5 == (char *)0x0) {
pcVar5 = *(char **)(pcVar6 + 8);
pcVar4 = pcVar5;
if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
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
}
if (*(int *)(pcVar5 + 0x20) < *param_3) {
if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(int *)(pcVar6 + 0x20))) {
pcVar3 = (char *)FUN_1401e49e0(pcVar5,param_3);
*(char **)(pcVar6 + 0x10) = pcVar3;
pcVar1 = *(char **)(param_1 + 8);
if (pcVar6 == pcVar1) {
*(char **)(pcVar1 + 8) = pcVar3;
*(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
}
else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
*(char **)(pcVar1 + 0x10) = pcVar3;
}
}
else {
pcVar3 = (char *)FUN_1401e49e0(pcVar5,param_3);
*(char **)(pcVar6 + 0x18) = pcVar3;
if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
*(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
}
}
*(char **)(pcVar3 + 8) = pcVar6;
*(undefined8 *)(pcVar3 + 0x10) = 0;
*(undefined8 *)(pcVar3 + 0x18) = 0;
FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
*(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
*param_2 = pcVar3;
*(undefined *)(param_2 + 1) = 1;
return param_2;
}
*param_2 = pcVar5;
*(undefined *)(param_2 + 1) = 0;
return param_2;
}



longlong FUN_1401e49e0(undefined8 param_1,undefined4 *param_2)

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;
longlong lVar4;

lVar4 = FUN_14018b280();
if ((undefined4 *)(lVar4 + 0x20) != (undefined4 *)0x0) {
*(undefined4 *)(lVar4 + 0x20) = *param_2;
*(undefined4 *)(lVar4 + 0x30) = param_2[4];
*(undefined4 *)(lVar4 + 0x34) = param_2[5];
*(undefined4 *)(lVar4 + 0x38) = param_2[6];
uVar1 = param_2[9];
uVar2 = param_2[10];
uVar3 = param_2[0xb];
*(undefined4 *)(lVar4 + 0x40) = param_2[8];
*(undefined4 *)(lVar4 + 0x44) = uVar1;
*(undefined4 *)(lVar4 + 0x48) = uVar2;
*(undefined4 *)(lVar4 + 0x4c) = uVar3;
*(undefined4 *)(lVar4 + 0x50) = param_2[0xc];
*(undefined4 *)(lVar4 + 0x54) = param_2[0xd];
*(undefined4 *)(lVar4 + 0x58) = param_2[0xe];
uVar1 = param_2[0x11];
uVar2 = param_2[0x12];
uVar3 = param_2[0x13];
*(undefined4 *)(lVar4 + 0x60) = param_2[0x10];
*(undefined4 *)(lVar4 + 100) = uVar1;
*(undefined4 *)(lVar4 + 0x68) = uVar2;
*(undefined4 *)(lVar4 + 0x6c) = uVar3;
}
return lVar4;
}



undefined8
        FUN_1401e4b60(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
        longlong *param_5_00,undefined4 param_6_00,undefined4 param_5,undefined4 param_6,
        undefined4 param_7,int param_8)

{
int iVar1;
ulonglong uVar2;
longlong *plVar3;
undefined4 uVar4;
longlong lVar5;
undefined8 uVar6;
short *psVar7;
short *psVar8;
short *psVar9;
short *psVar10;
undefined8 extraout_XMM0_Qa;
undefined8 extraout_XMM0_Qa_00;
undefined8 extraout_XMM0_Qa_01;
undefined8 extraout_XMM0_Qa_02;

*param_3 = param_6_00;
lVar5 = FUN_1401f53e0();
if (lVar5 == 0) {
return 0x80004005;
}
if (*(int *)(param_5_00 + 1) < 0) {
param_3[1] = *(int *)(param_5_00 + 1);
}
else if ((*param_5_00 == 0) || (*(int *)(*param_5_00 + 0xf4) == 0)) {
param_3[1] = 0;
}
else {
FUN_14020b8e0();
uVar4 = FUN_1401dc0d0();
param_3[1] = uVar4;
}
iVar1 = *(int *)(lVar5 + 0x10);
if (iVar1 != 0) {
if (iVar1 == 1) {
lVar5 = *param_5_00;
uVar2 = *(ulonglong *)(lVar5 + 0xb8);
if (uVar2 == 0) {
psVar7 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar7 = (short *)0x0;
}
else {
psVar7 = (short *)(DAT_140c3fe68 + uVar2);
}
uVar2 = *(ulonglong *)(lVar5 + 0xd0);
if (uVar2 == 0) {
psVar10 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar10 = (short *)0x0;
}
else {
psVar10 = (short *)(DAT_140c3fe68 + uVar2);
}
uVar2 = *(ulonglong *)(lVar5 + 0xc0);
if (uVar2 == 0) {
psVar9 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar9 = (short *)0x0;
}
else {
psVar9 = (short *)(uVar2 + DAT_140c3fe68);
}
uVar2 = *(ulonglong *)(lVar5 + 200);
if (uVar2 == 0) {
psVar8 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar8 = (short *)0x0;
}
else {
psVar8 = (short *)(uVar2 + DAT_140c3fe68);
}
goto LAB_1401e4d1a;
}
if (1 < iVar1 - 2U) {
return 0x80004005;
}
}
lVar5 = *param_5_00;
uVar2 = *(ulonglong *)(lVar5 + 0x98);
if (uVar2 == 0) {
psVar7 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar7 = (short *)0x0;
}
else {
psVar7 = (short *)(DAT_140c3fe68 + uVar2);
}
uVar2 = *(ulonglong *)(lVar5 + 0xb0);
if (uVar2 == 0) {
psVar10 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar10 = (short *)0x0;
}
else {
psVar10 = (short *)(DAT_140c3fe68 + uVar2);
}
uVar2 = *(ulonglong *)(lVar5 + 0xa0);
if (uVar2 == 0) {
psVar9 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar9 = (short *)0x0;
}
else {
psVar9 = (short *)(DAT_140c3fe68 + uVar2);
}
uVar2 = *(ulonglong *)(lVar5 + 0xa8);
if (uVar2 == 0) {
psVar8 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar8 = (short *)0x0;
}
else {
psVar8 = (short *)(DAT_140c3fe68 + uVar2);
}
LAB_1401e4d1a:
if (((param_8 != 0) && (*psVar7 != 0)) &&
(lVar5 = FUN_1401dd6d0(psVar7,*param_3,param_5,param_6), lVar5 != 0)) {
uVar6 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,lVar5,0,0x200,0,0,param_3 + 2);
if ((int)uVar6 < 0) {
return uVar6;
}
(**(code **)(**(longlong **)(param_3 + 2) + 0x30))(extraout_XMM0_Qa,param_2,0,0);
}
if ((((param_3[1] & 0x80000000) != 0) && (*psVar10 != 0)) &&
(lVar5 = FUN_1401dd6d0(psVar10,*param_3,param_5,param_6), lVar5 != 0)) {
uVar6 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,lVar5,0,0x200,0,0,param_3 + 8);
if ((int)uVar6 < 0) {
return uVar6;
}
plVar3 = *(longlong **)(param_3 + 8);
(**(code **)(*plVar3 + 0x30))(extraout_XMM0_Qa_00,param_2,0,0,plVar3,param_7);
}
uVar4 = *(undefined4 *)(&DAT_140b602e8 + (longlong)*(int *)(param_4 + 0x14) * 4);
if ((*psVar9 != 0) && (lVar5 = FUN_1401dd6d0(psVar9,*param_3,param_5,param_6), lVar5 != 0)) {
uVar6 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,lVar5,0,0x200,0,uVar4,param_3 + 4);
if ((int)uVar6 < 0) {
return uVar6;
}
plVar3 = *(longlong **)(param_3 + 4);
(**(code **)(*plVar3 + 0x30))(extraout_XMM0_Qa_01,param_2,0,0,plVar3,param_7);
}
if ((*psVar8 != 0) && (lVar5 = FUN_1401dd6d0(psVar8,*param_3,param_5,param_6), lVar5 != 0)) {
uVar6 = (**(code **)(*DAT_140c65670 + 0x88))(DAT_140c65670,lVar5,0,0x200,0,uVar4,param_3 + 6);
if ((int)uVar6 < 0) {
return uVar6;
}
plVar3 = *(longlong **)(param_3 + 6);
(**(code **)(*plVar3 + 0x30))(extraout_XMM0_Qa_02,param_2,0,0,plVar3,param_7);
}
return 0;
}



undefined8 FUN_1401e4f30(undefined8 param_1,ulonglong param_2)

{
FUN_1401e4f70();
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



void FUN_1401e4f70(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b602d0;
    if (param_1[0x9f] != 0) {
        FUN_1400b6120(param_1[2] + 0x100,param_1 + 3);
        if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[0x9f] = param_1[0xa0];
        }
        if (param_1[0xa0] != 0) {
            *(undefined8 *)(param_1[0xa0] + 0x4f8) = param_1[0x9f];
        }
        param_1[0x9f] = 0;
        param_1[0xa0] = 0;
    }
    lVar1 = param_1[0x9d];
    while (lVar1 != 0) {
        lVar1 = param_1[0x9d];
        if (lVar1 != 0) {
            FUN_1401e50b0(lVar1);
            FUN_14018b900(lVar1,0);
        }
        lVar1 = param_1[0x9d];
    }
    if ((undefined8 *)param_1[0x9f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9f] = param_1[0xa0];
    }
    if (param_1[0xa0] != 0) {
        *(undefined8 *)(param_1[0xa0] + 0x4f8) = param_1[0x9f];
    }
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    if ((longlong *)param_1[0x9e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x9e] + 8))();
    }
    if (param_1[0x9d] != 0) {
        FUN_1401a4a00(param_1 + 0x9d);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_1401e50b0(longlong param_1)

{
if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
**(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
}
if (*(longlong *)(param_1 + 0x30) != 0) {
*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28) = *(undefined8 *)(param_1 + 0x28);
}
*(undefined8 *)(param_1 + 0x28) = 0;
*(undefined8 *)(param_1 + 0x30) = 0;
if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
}
if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
}
if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
}
if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e5122. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(**(longlong **)(param_1 + 8) + 8))();
return;
}
return;
}



undefined8 FUN_1401e5130(ulonglong param_1,undefined4 *param_2)

{
undefined4 *puVar1;
ulonglong *puVar2;
ulonglong **ppuVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined4 *puVar7;
longlong lVar8;
ulonglong uVar9;
ulonglong *puVar10;
uint uVar11;
ulonglong *puVar12;
undefined4 *puVar13;
longlong *plVar14;
undefined4 *puVar15;
longlong lVar16;

puVar1 = (undefined4 *)(param_1 + 0x18);
if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
lVar8 = 9;
puVar7 = puVar1;
do {
puVar15 = puVar7;
puVar13 = param_2;
uVar4 = puVar13[1];
uVar5 = puVar13[2];
uVar6 = puVar13[3];
*puVar15 = *puVar13;
puVar15[1] = uVar4;
puVar15[2] = uVar5;
puVar15[3] = uVar6;
uVar4 = puVar13[5];
uVar5 = puVar13[6];
uVar6 = puVar13[7];
puVar15[4] = puVar13[4];
puVar15[5] = uVar4;
puVar15[6] = uVar5;
puVar15[7] = uVar6;
uVar4 = puVar13[9];
uVar5 = puVar13[10];
uVar6 = puVar13[0xb];
puVar15[8] = puVar13[8];
puVar15[9] = uVar4;
puVar15[10] = uVar5;
puVar15[0xb] = uVar6;
uVar4 = puVar13[0xd];
uVar5 = puVar13[0xe];
uVar6 = puVar13[0xf];
puVar15[0xc] = puVar13[0xc];
puVar15[0xd] = uVar4;
puVar15[0xe] = uVar5;
puVar15[0xf] = uVar6;
uVar4 = puVar13[0x11];
uVar5 = puVar13[0x12];
uVar6 = puVar13[0x13];
puVar15[0x10] = puVar13[0x10];
puVar15[0x11] = uVar4;
puVar15[0x12] = uVar5;
puVar15[0x13] = uVar6;
uVar4 = puVar13[0x15];
uVar5 = puVar13[0x16];
uVar6 = puVar13[0x17];
puVar15[0x14] = puVar13[0x14];
puVar15[0x15] = uVar4;
puVar15[0x16] = uVar5;
puVar15[0x17] = uVar6;
uVar4 = puVar13[0x19];
uVar5 = puVar13[0x1a];
uVar6 = puVar13[0x1b];
puVar15[0x18] = puVar13[0x18];
puVar15[0x19] = uVar4;
puVar15[0x1a] = uVar5;
puVar15[0x1b] = uVar6;
uVar4 = puVar13[0x1d];
uVar5 = puVar13[0x1e];
uVar6 = puVar13[0x1f];
puVar15[0x1c] = puVar13[0x1c];
puVar15[0x1d] = uVar4;
puVar15[0x1e] = uVar5;
puVar15[0x1f] = uVar6;
lVar8 = lVar8 + -1;
param_2 = puVar13 + 0x20;
puVar7 = puVar15 + 0x20;
} while (lVar8 != 0);
uVar4 = puVar13[0x21];
uVar5 = puVar13[0x22];
uVar6 = puVar13[0x23];
puVar15[0x20] = puVar13[0x20];
puVar15[0x21] = uVar4;
puVar15[0x22] = uVar5;
puVar15[0x23] = uVar6;
*(undefined8 *)(puVar15 + 0x24) = *(undefined8 *)(puVar13 + 0x24);
}
else {
FUN_1407db590(puVar1,param_2,0x498);
}
*(undefined4 *)(param_1 + 0x4b4) = 1;
*(undefined8 *)(param_1 + 0x4b8) = 1;
*(undefined4 *)(param_1 + 0x4c0) = 7;
*(undefined8 *)(param_1 + 0x4c4) = 7;
*(undefined8 *)(param_1 + 0x4cc) = 0;
*(undefined8 *)(param_1 + 0x4d4) = 0;
*(undefined8 *)(param_1 + 0x4dc) = 0;
lVar8 = *(longlong *)(param_1 + 0x28);
*(undefined4 *)(param_1 + 0x4b0) = 0;
if (lVar8 != 0) {
uVar11 = 0;
plVar14 = (longlong *)(param_1 + 0x30);
do {
lVar16 = *plVar14;
plVar14 = plVar14 + 2;
uVar11 = uVar11 | *(uint *)(lVar16 + 0x90);
*(uint *)(param_1 + 0x4b0) = uVar11;
lVar8 = lVar8 + -1;
} while (lVar8 != 0);
}
lVar8 = *(longlong *)(param_1 + 0x10);
plVar14 = (longlong *)(lVar8 + 0x100);
if (*plVar14 == *(longlong *)(lVar8 + 0x108)) {
FUN_1400290d0(plVar14);
}
uVar9 = (**(code **)(lVar8 + 0x118))(puVar1);
ppuVar3 = (ulonglong **)
        (*(longlong *)(lVar8 + 0x110) + (uVar9 % *(ulonglong *)(lVar8 + 0x108)) * 8);
puVar10 = (ulonglong *)FUN_14018b280(0x4b0,0);
if (puVar10 == (ulonglong *)0x0) {
puVar10 = (ulonglong *)0x0;
}
else {
puVar12 = *ppuVar3;
*puVar10 = uVar9;
puVar10[1] = (ulonglong)puVar12;
lVar8 = 0x24;
*(undefined4 *)(puVar10 + 2) = *puVar1;
*(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
*(undefined4 *)(puVar10 + 3) = *(undefined4 *)(param_1 + 0x20);
*(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)(param_1 + 0x24);
puVar10[4] = *(ulonglong *)(param_1 + 0x28);
lVar16 = param_1 - (longlong)puVar10;
puVar12 = puVar10 + 7;
do {
puVar2 = puVar12 + 4;
puVar12[-2] = *(ulonglong *)(lVar16 + -8 + (longlong)puVar12);
*(undefined4 *)(puVar12 + -1) = *(undefined4 *)(lVar16 + -0x20 + (longlong)puVar2);
*puVar12 = *(ulonglong *)(&DAT_ffffffffffffffe8 + lVar16 + (longlong)puVar2);
*(undefined4 *)(puVar12 + 1) = *(undefined4 *)(lVar16 + -0x10 + (longlong)puVar2);
lVar8 = lVar8 + -1;
puVar12 = puVar2;
} while (lVar8 != 0);
puVar10[0x95] = param_1;
}
*ppuVar3 = puVar10;
*plVar14 = *plVar14 + 1;
puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
if (*(longlong *)(param_1 + 0x4f8) == 0) {
*(ulonglong **)(param_1 + 0x4f8) = puVar10;
puVar12 = (ulonglong *)(param_1 + 0x500);
*puVar12 = *puVar10;
*puVar10 = param_1;
if (*puVar12 != 0) {
*(ulonglong **)(*puVar12 + 0x4f8) = puVar12;
}
}
return 0;
}



void FUN_1401e5380(longlong param_1)

{
uint uVar1;
longlong lVar2;
undefined4 local_18 [4];

lVar2 = *(longlong *)(param_1 + 0x4e8);
while (lVar2 != 0) {
lVar2 = *(longlong *)(param_1 + 0x4e8);
if (lVar2 != 0) {
FUN_1401e50b0(lVar2);
FUN_14018b900(lVar2);
}
lVar2 = *(longlong *)(param_1 + 0x4e8);
}
if (*(longlong **)(param_1 + 0x4f0) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x4f0) + 8))();
*(undefined8 *)(param_1 + 0x4f0) = 0;
}
if (*(int *)(param_1 + 0x4c0) == 7) {
if (((*(int *)(param_1 + 0x4b4) == 0) || (*(int *)(param_1 + 0x4b8) == 0)) ||
(*(int *)(param_1 + 0x4c4) != 7)) {
*(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1;
*(undefined4 *)(param_1 + 0x4b4) = 1;
*(undefined4 *)(param_1 + 0x4b8) = 1;
*(undefined4 *)(param_1 + 0x4c4) = 7;
return;
}
}
else {
uVar1 = *(uint *)(param_1 + 0x4c4);
FUN_1401e57f0(param_1);
*(undefined8 *)(param_1 + 0x4b4) = 0;
*(undefined4 *)(param_1 + 0x4c4) = 7;
if (uVar1 < 7) {
local_18[0] = 0xffffffff;
FUN_1401e55d0(param_1,local_18);
}
}
return;
}



int FUN_1401e5490(longlong param_1,uint param_2)

{
longlong lVar1;
int iVar2;
int iVar3;
int *piVar4;
uint uVar5;
ulonglong uVar6;

if (6 < param_2) {
return -0x7ff8ffa9;
}
lVar1 = param_1 + (ulonglong)param_2 * 4;
iVar2 = *(int *)(lVar1 + 0x4c8);
if (iVar2 == 0) {
return -0x7fffbffb;
}
iVar2 = iVar2 + -1;
*(int *)(lVar1 + 0x4c8) = iVar2;
if ((iVar2 != 0) ||
(*(uint *)(param_1 + 0x4c0) <= param_2 && param_2 != *(uint *)(param_1 + 0x4c0))) {
return 0;
}
uVar6 = (ulonglong)(param_2 + 1);
if (param_2 + 1 < 7) {
piVar4 = (int *)(param_1 + (uVar6 + 0x132) * 4);
do {
if (*piVar4 != 0) break;
uVar5 = (int)uVar6 + 1;
uVar6 = (ulonglong)uVar5;
piVar4 = piVar4 + 1;
} while (uVar5 < 7);
}
iVar3 = FUN_1401e5690();
iVar2 = 0;
if (iVar3 < 0) {
iVar2 = iVar3;
}
return iVar2;
}



undefined8 FUN_1401e5510(longlong param_1,undefined8 param_2)

{
longlong lVar1;
longlong *plVar2;
int iVar3;

lVar1 = *(longlong *)(param_1 + 0x4e8);
while( true ) {
if (lVar1 == 0) {
*(undefined4 *)(param_1 + 0x4b4) = 1;
return 1;
}
plVar2 = *(longlong **)(lVar1 + 8);
if (((((plVar2 != (longlong *)0x0) &&
(iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar3 == 0)) ||
((plVar2 = *(longlong **)(lVar1 + 0x10), plVar2 != (longlong *)0x0 &&
(iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar3 == 0)))) ||
((plVar2 = *(longlong **)(lVar1 + 0x18), plVar2 != (longlong *)0x0 &&
(iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar3 == 0)))) ||
((plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0 &&
(iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2), iVar3 == 0)))) break;
lVar1 = *(longlong *)(lVar1 + 0x30);
}
return 0;
}



undefined8 FUN_1401e55d0(longlong param_1,undefined8 param_2)

{
longlong lVar1;
int iVar2;

iVar2 = FUN_1401dce80(*(undefined8 *)(param_1 + 0x10));
if ((iVar2 != 0) &&
(((*(int *)(param_1 + 0x4b4) != 0 || (iVar2 = FUN_1401e5510(param_1,param_2), iVar2 != 0)) &&
(iVar2 = FUN_1401e5bc0(), -1 < iVar2)))) {
lVar1 = *(longlong *)(param_1 + 0x4e8);
while (lVar1 != 0) {
lVar1 = *(longlong *)(param_1 + 0x4e8);
if (lVar1 != 0) {
FUN_1401e50b0(lVar1);
FUN_14018b900(lVar1,0);
}
lVar1 = *(longlong *)(param_1 + 0x4e8);
}
*(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1;
*(undefined4 *)(param_1 + 0x4b8) = 1;
*(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4c0);
return 1;
}
return 0;
}



undefined8 FUN_1401e5690(longlong param_1,uint param_2)

{
uint uVar1;
longlong lVar2;
undefined8 uVar3;

lVar2 = *(longlong *)(param_1 + 0x4e8);
while (lVar2 != 0) {
lVar2 = *(longlong *)(param_1 + 0x4e8);
if (lVar2 != 0) {
FUN_1401e50b0(lVar2);
FUN_14018b900(lVar2,0);
}
lVar2 = *(longlong *)(param_1 + 0x4e8);
}
uVar1 = *(uint *)(param_1 + 0x4c4);
if (param_2 == uVar1) {
*(uint *)(param_1 + 0x4c0) = uVar1;
*(undefined4 *)(param_1 + 0x4b4) = 1;
*(undefined4 *)(param_1 + 0x4b8) = 1;
return 0;
}
if (param_2 == 7) {
if (*(longlong **)(param_1 + 0x4f0) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x4f0) + 8))();
*(undefined8 *)(param_1 + 0x4f0) = 0;
}
*(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1;
*(undefined4 *)(param_1 + 0x4b4) = 1;
*(undefined4 *)(param_1 + 0x4b8) = 1;
*(undefined4 *)(param_1 + 0x4c0) = 7;
*(undefined4 *)(param_1 + 0x4c4) = 7;
return 0;
}
if (uVar1 < param_2) {
*(undefined8 *)(param_1 + 0x4b4) = 1;
*(uint *)(param_1 + 0x4c0) = param_2;
return 0;
}
uVar3 = FUN_1401e57f0(param_1,param_2);
if (-1 < (int)uVar3) {
uVar3 = 0;
*(uint *)(param_1 + 0x4c0) = param_2;
*(undefined8 *)(param_1 + 0x4b4) = 0;
}
return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401e57f0(longlong param_1,undefined4 param_2)

{
longlong *plVar1;
longlong *plVar2;
longlong lVar3;
ulonglong uVar4;
uint uVar5;
longlong lVar6;
short *psVar7;
int *piVar8;
longlong lVar9;
int iVar10;
uint uVar11;
uint uVar12;
longlong *plVar13;
ulonglong uVar14;
uint uVar15;
undefined auStack488 [32];
undefined4 local_1c8;
undefined4 local_1c0;
undefined4 local_1b8;
uint local_1b0;
undefined4 local_1a8;
ulonglong local_1a0;
undefined8 local_198;
undefined8 local_190;
ulonglong local_188;
ulonglong local_180;
longlong local_178;
int *local_170;
undefined8 *local_168;
int local_160;
int local_15c;
uint auStack344 [72];
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack488;
local_190 = *(undefined8 *)(param_1 + 0x28);
local_198 = 0;
local_1c8 = 2;
local_1a8 = param_2;
FUN_1401d3110(&local_188,&LAB_1401e57c0,&local_198,param_1 + 0x30);
lVar6 = *(longlong *)(param_1 + 0x28);
uVar15 = 0;
lVar9 = lVar6;
while (lVar9 != 0) {
lVar3 = lVar9 * 8;
lVar9 = lVar9 + -1;
uVar11 = *(uint *)(*(longlong *)(param_1 + (*(longlong *)(local_178 + -8 + lVar3) + 3) * 0x10) +
                   0x90);
uVar5 = uVar11 & uVar15;
uVar15 = uVar15 | uVar11;
auStack344[lVar9] = uVar5;
}
local_1a0 = 0;
if (lVar6 != 0) {
do {
plVar13 = (longlong *)((*(longlong *)(local_178 + local_1a0 * 8) + 3) * 0x10 + param_1);
uVar5 = *(uint *)(*plVar13 + 0x90) & uVar15;
uVar11 = 0;
uVar14 = local_1a0;
do {
uVar12 = 1 << ((byte)uVar11 & 0x1f);
if (uVar5 < uVar12) break;
if ((uVar5 & uVar12) != 0) {
if (DAT_140c63840 == (code *)0x0) {
if ((_DAT_140c651b0 != 0) || (iVar10 = FUN_1401f5180(), iVar10 < 0)) goto LAB_1401e5acb;
lVar6 = (**(code **)(*DAT_140c65118 + 0x18))(DAT_140c65118,uVar11);
}
else {
lVar6 = (*DAT_140c63840)(&PTR_u_ComponentRegion_140a69b10,uVar11,DAT_140c63858);
}
if ((((lVar6 != 0) && (uVar4 = *(ulonglong *)(lVar6 + 8), uVar4 != 0)) &&
(uVar4 <= DAT_140c3fe70)) && (uVar4 + DAT_140c3fe68 != 0)) {
if (uVar4 == 0) {
psVar7 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar4) {
psVar7 = (short *)0x0;
}
else {
psVar7 = (short *)(uVar4 + DAT_140c3fe68);
}
if (*psVar7 != 0) {
iVar10 = 1 << ((byte)param_2 & 0x1f);
piVar8 = (int *)FUN_1401dd2b0(param_1 + 0x18,uVar11);
local_15c = iVar10 + -1;
local_168 = &local_198;
local_170 = piVar8 + 2;
local_198 = CONCAT44(local_15c,local_15c);
local_160 = *local_170 + local_15c;
local_15c = local_15c + piVar8[3];
param_2 = local_1a8;
if ((*piVar8 / iVar10 < local_160 / iVar10) &&
(piVar8[1] / iVar10 < local_15c / iVar10)) {
lVar6 = FUN_14018b280(0x38);
if (lVar6 == 0) {
lVar6 = 0;
}
else {
*(undefined8 *)(lVar6 + 8) = 0;
*(undefined8 *)(lVar6 + 0x10) = 0;
*(undefined8 *)(lVar6 + 0x18) = 0;
*(undefined8 *)(lVar6 + 0x20) = 0;
*(undefined8 *)(lVar6 + 0x28) = 0;
*(undefined8 *)(lVar6 + 0x30) = 0;
}
local_1b0 = auStack344[uVar14] & uVar12;
local_1b8 = local_1a8;
local_1c0 = *(undefined4 *)(param_1 + 0x20);
local_1c8 = *(undefined4 *)(param_1 + 0x1c);
iVar10 = FUN_1401e4b60(lVar6,*(undefined8 *)(param_1 + 0x10),plVar13,uVar11);
if (iVar10 < 0) {
if (lVar6 != 0) {
FUN_1401e50b0(lVar6);
FUN_14018b900(lVar6,0);
}
goto LAB_1401e5b4c;
}
if ((*(longlong *)(lVar6 + 0x10) == 0) && (*(longlong *)(lVar6 + 0x20) == 0)) {
FUN_1401e50b0(lVar6);
FUN_14018b900();
uVar14 = local_1a0;
param_2 = local_1a8;
}
else {
if (*(longlong *)(lVar6 + 8) == 0) {
uVar15 = uVar15 & ~uVar12;
}
plVar2 = (longlong *)(param_1 + 0x4e8);
uVar14 = local_1a0;
param_2 = local_1a8;
if (*(longlong *)(lVar6 + 0x28) == 0) {
*(longlong **)(lVar6 + 0x28) = plVar2;
plVar1 = (longlong *)(lVar6 + 0x30);
*plVar1 = *plVar2;
*plVar2 = lVar6;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x28) = plVar1;
}
}
}
}
}
}
}
LAB_1401e5acb:
uVar11 = uVar11 + 1;
} while (uVar11 < 0x20);
local_1a0 = uVar14 + 1;
} while (local_1a0 < *(ulonglong *)(param_1 + 0x28));
}
LAB_1401e5b4c:
if (local_188 < local_180) {
FUN_14018b900(local_178 + local_188 * 8,0);
}
FUN_1407db4f0(local_38 ^ (ulonglong)auStack488);
return;
}



int FUN_1401e5bc0(longlong param_1)

{
undefined4 *puVar1;
float fVar2;
uint uVar3;
int *piVar4;
longlong lVar5;
undefined4 uVar6;
undefined4 uVar7;
int iVar8;
int iVar9;
int iVar10;
int *piVar11;
longlong lVar12;
longlong *plVar13;
undefined4 *puVar14;
int iVar15;
longlong lVar16;
longlong *plVar17;
float fVar18;
undefined8 uVar19;
undefined4 uVar21;
ulonglong uVar20;
undefined *puVar22;
longlong *local_c8;
undefined8 local_c0;
int *local_b8;
LPVOID local_b0;
longlong local_a8 [2];
undefined8 local_98;
int *local_90;
LPVOID local_88;
uint local_78;
int local_74;
int local_70;
float local_68;
float fStack100;
float fStack96;
float fStack92;
undefined local_58 [16];
undefined local_48 [16];

iVar9 = (**(code **)(*DAT_140c65670 + 600))();
if (iVar9 == 0) {
return -0x7fffbffb;
}
plVar17 = (longlong *)0x0;
local_c8 = (longlong *)0x0;
plVar13 = plVar17;
if (*(longlong *)(param_1 + 0x28) != 0) {
iVar9 = FUN_1401dd0b0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x4c0),&local_c8
);
plVar13 = local_c8;
if (iVar9 < 0) goto LAB_1401e64c0;
(**(code **)(*DAT_140c65670 + 0x120))();
(**(code **)(*DAT_140c65670 + 0x128))();
(**(code **)(*DAT_140c65670 + 0x1f8))();
(**(code **)(*DAT_140c65670 + 0x200))();
(**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
local_78 = 7 - *(int *)(param_1 + 0x4c0);
plVar13 = local_c8;
if (local_78 != 0) {
fVar18 = 1.0;
do {
local_c0 = (undefined **)CONCAT44(local_c0._4_4_,1);
local_b8 = (int *)plVar13[5];
iVar9 = (int)plVar17;
local_b0 = (LPVOID)((ulonglong)local_b0 & 0xffffffff | (longlong)plVar17 << 0x20);
local_98 = (undefined **)CONCAT44(local_98._4_4_,1);
local_90 = (int *)plVar13[4];
local_88 = (LPVOID)((ulonglong)local_88 & 0xffffffff | (longlong)plVar17 << 0x20);
(**(code **)(*DAT_140c65670 + 0x208))
(DAT_140c65670,&local_98,&local_c0,&DAT_140c3fe88,&DAT_140c3fe88);
if (((uint)(*(int *)(param_1 + 0x4c0) + iVar9) < *(uint *)(param_1 + 0x4c4)) ||
(*(longlong *)(param_1 + 0x4f0) == 0)) {
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,0,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40),0,0);
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),0,0);
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),0,0);
(**(code **)(*DAT_140c65670 + 0x178))
(DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1);
puVar22 = (undefined *)0x0;
uVar19 = 0;
(**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
for (piVar4 = *(int **)(param_1 + 0x4e8); piVar4 != (int *)0x0;
piVar4 = *(int **)(piVar4 + 0xc)) {
if (*(int *)(param_1 + 0x18) == *(int *)(&DAT_140c637b0 + (longlong)*piVar4 * 4)) {
iVar15 = 1 << ((char)*(undefined4 *)(param_1 + 0x4c0) + (char)plVar17 & 0x1fU);
piVar11 = (int *)FUN_1401dd2b0();
local_74 = iVar15 + -1;
local_90 = &local_74;
local_98 = (undefined **)(piVar11 + 2);
iVar10 = (*(int *)local_98 + local_74) / iVar15;
local_88 = (LPVOID)CONCAT44(local_74 + piVar11[3],*(int *)local_98 + local_74);
iVar8 = (local_74 + piVar11[3]) / iVar15;
local_70 = local_74;
if ((*piVar11 / iVar15 < iVar10) && (piVar11[1] / iVar15 < iVar8)) {
local_58 = ZEXT816(CONCAT44((float)(piVar11[1] / iVar15),(float)(*piVar11 / iVar15))
);
local_48 = ZEXT816(CONCAT44((float)iVar8,(float)iVar10));
if (*(longlong *)(piVar4 + 2) == 0) {
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,0,0,uVar19,puVar22);
}
else {
(**(code **)(*DAT_140c65670 + 0x168))(DAT_140c65670,0);
uVar21 = (undefined4)((ulonglong)uVar19 >> 0x20);
(**(code **)(*DAT_140c65670 + 0x178))
(DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),0xd
);
(**(code **)(*DAT_140c65670 + 0x1c8))
(DAT_140c65670,8,0,0,CONCAT44(uVar21,6),
(ulonglong)puVar22 & 0xffffffff00000000,0);
puVar22 = local_58;
uVar19 = 0;
(**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,0,uVar19,puVar22);
}
if ((*(longlong **)(piVar4 + 8) == (longlong *)0x0) ||
(lVar12 = (**(code **)(**(longlong **)(piVar4 + 8) + 0x38))(), lVar12 == 0)) {
if ((*(longlong **)(piVar4 + 8) != (longlong *)0x0) &&
(lVar12 = (**(code **)(**(longlong **)(piVar4 + 8) + 0x38))(), lVar12 == 0)) {
local_b8 = (int *)0x0;
local_c0 = &PTR_LAB_140b5e648;
local_b0 = TlsGetValue(DAT_140c63720);
TlsSetValue(DAT_140c63720,&local_c0);
local_98 = local_c0;
local_a8[0] = 0x141d45670;
local_88 = local_b0;
local_90 = local_b8;
iVar10 = FUN_1401971e0(&DAT_140c8a288,10,local_a8,&local_98);
local_c0 = &PTR_LAB_140b5e648;
TlsSetValue(DAT_140c63720,local_b0);
if (iVar10 != 0) {
DebugBreak();
}
}
}
else {
plVar13 = (longlong *)(**(code **)(**(longlong **)(piVar4 + 8) + 0x38))();
lVar12 = (**(code **)(*plVar13 + 0x18))(plVar13);
local_a8[0] = lVar12;
(**(code **)(*DAT_140c65670 + 0x168))(DAT_140c65670,3,*(undefined8 *)(piVar4 + 8))
;
uVar20 = 0;
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,4,
*(undefined8 *)
(*(longlong *)(param_1 + 0x10) + 0x20 +
(longlong)*(int *)(param_1 + 0x18) * 8),0,0);
puVar14 = (undefined4 *)
        (**(code **)(*DAT_140c65670 + 0x110))
        (DAT_140c65670,0x30,0,0,uVar20 & 0xffffffff00000000);
if (puVar14 != (undefined4 *)0x0) {
uVar3 = piVar4[1];
if ((int)uVar3 < 0) {
lVar16 = (longlong)*(int *)(param_1 + 0x18);
lVar5 = *(longlong *)(param_1 + 0x10);
fStack92 = *(float *)(lVar5 + (lVar16 + 0xb) * 0x10);
fVar2 = *(float *)(lVar5 + 0xb4 + lVar16 * 0x10);
local_68 = (float)(ulonglong)(uVar3 & 0x3ff) * fStack92 + fVar2;
fStack100 = (float)(ulonglong)(uVar3 >> 10 & 0x3ff) * fStack92 + fVar2;
fStack96 = ((float)(ulonglong)(uVar3 >> 0x14 & 0x3ff) * fStack92 + fVar2) -
           fStack100;
fStack100 = fStack100 - local_68;
puVar1 = (undefined4 *)(lVar5 + (lVar16 + 7) * 0x10);
uVar21 = puVar1[1];
uVar6 = puVar1[2];
uVar7 = puVar1[3];
*puVar14 = *puVar1;
puVar14[1] = uVar21;
puVar14[2] = uVar6;
puVar14[3] = uVar7;
puVar14[4] = local_68;
puVar14[5] = fStack100;
puVar14[6] = fStack96;
puVar14[7] = fStack92;
*(undefined (*) [16])(puVar14 + 8) =
ZEXT816(CONCAT44(fVar18 / (float)(ulonglong)*(uint *)(lVar12 + 8),
                 fVar18 / (float)(ulonglong)*(uint *)(lVar12 + 4)));
}
(**(code **)(*DAT_140c65670 + 0x118))();
}
}
if (*(longlong *)(piVar4 + 4) == 0) {
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50),0
,0);
}
else {
(**(code **)(*DAT_140c65670 + 0x168))();
}
if (*(longlong *)(piVar4 + 6) == 0) {
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),0
,0);
}
else {
(**(code **)(*DAT_140c65670 + 0x168))();
}
(**(code **)(*DAT_140c65670 + 0x178))
(DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
puVar22 = local_58;
uVar19 = 0;
(**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
}
}
plVar13 = local_c8;
}
}
else {
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,0,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40),0,0);
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,1,*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x20),
(*(int *)(param_1 + 0x4c0) - *(int *)(param_1 + 0x4c4)) + iVar9,0);
(**(code **)(*DAT_140c65670 + 0x160))
(DAT_140c65670,2,*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x28),
(*(int *)(param_1 + 0x4c0) - *(int *)(param_1 + 0x4c4)) + iVar9,0);
(**(code **)(*DAT_140c65670 + 0x178))
(DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),0);
(**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,0);
(**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
}
(**(code **)(*DAT_140c65670 + 0x2a0))();
plVar17 = (longlong *)(ulonglong)(iVar9 + 1U);
} while (iVar9 + 1U < local_78);
}
(**(code **)(*DAT_140c65670 + 0x220))();
(**(code **)(*DAT_140c65670 + 0x228))();
}
iVar9 = 0;
if (*(longlong **)(param_1 + 0x4f0) != plVar13) {
if (plVar13 != (longlong *)0x0) {
(**(code **)*plVar13)(plVar13);
}
if (*(longlong **)(param_1 + 0x4f0) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x4f0) + 8))();
}
*(longlong **)(param_1 + 0x4f0) = plVar13;
}
LAB_1401e64c0:
if (plVar13 != (longlong *)0x0) {
(**(code **)(*plVar13 + 8))(plVar13);
}
return iVar9;
}



void FUN_1401e6500(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b602f0;
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 *)(param_1[0xd] + 0x60) = param_1[0xc];
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if ((undefined8 *)param_1[10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[10] = param_1[0xb];
    }
    if (param_1[0xb] != 0) {
        *(undefined8 *)(param_1[0xb] + 0x20) = param_1[10];
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[8] = param_1[9];
    }
    if (param_1[9] != 0) {
        *(undefined8 *)(param_1[9] + 0x10) = param_1[8];
    }
    param_1[8] = 0;
    param_1[9] = 0;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e65b0. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)param_1[4] + 8))();
        return;
    }
    return;
}



undefined8 FUN_1401e65c0(longlong param_1)

{
undefined8 uVar1;
int iVar2;
int iVar3;

iVar2 = 0x400 >> ((byte)*(int *)(param_1 + 0x18) & 0x1f);
iVar3 = 7 - *(int *)(param_1 + 0x18);
uVar1 = (**(code **)(*DAT_140c65670 + 0x58))
        (DAT_140c65670,iVar2,iVar2,iVar3,0,3,3,0,0,param_1 + 0x20);
if (-1 < (int)uVar1) {
uVar1 = (**(code **)(*DAT_140c65670 + 0x58))
        (DAT_140c65670,iVar2,iVar2,iVar3,0,3,3,0,0,param_1 + 0x28);
if (-1 < (int)uVar1) {
uVar1 = 0;
}
}
return uVar1;
}



int FUN_1401e6680(longlong param_1)

{
int iVar1;

*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
iVar1 = *(int *)(param_1 + 8);
if (iVar1 == 1) {
if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
**(undefined8 **)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
}
if (*(longlong *)(param_1 + 0x68) != 0) {
*(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x60) = *(undefined8 *)(param_1 + 0x60);
}
*(undefined8 *)(param_1 + 0x60) = 0;
*(undefined8 *)(param_1 + 0x68) = 0;
FUN_1401984d0(param_1 + 0x30);
}
return iVar1;
}



void FUN_1401e67a0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b60300;
    FUN_1401e7d70();
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
    }
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
    }
    if ((longlong *)param_1[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[9] + 8))();
    }
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
    }
    if ((longlong *)param_1[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[6] + 8))();
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



ulonglong FUN_1401e6820(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
int iVar1;
undefined4 uVar2;
uint uVar3;
longlong lVar4;
ulonglong uVar5;
undefined4 uVar6;

*(int *)(param_1 + 0x28) = param_2;
*(undefined8 *)(param_1 + 0x18) = *param_3;
lVar4 = *(longlong *)(param_1 + 0x10);
*(undefined8 *)(param_1 + 0x20) = param_3[1];
*(undefined4 *)(param_1 + 0x2c) = param_4;
iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
uVar6 = 0xf;
switch(param_2 + -3) {
case 0:
uVar2 = 0xf;
break;
default:
switchD_1401e6880_caseD_1:
uVar2 = 0;
break;
case 4:
if ((*(int *)(lVar4 + 0xc48) == 0) || ((*(byte *)(lVar4 + 0xc44) & 2) != 0))
goto switchD_1401e6880_caseD_1;
uVar2 = 3;
break;
case 0x11:
if (((*(byte *)(lVar4 + 0xc44) & 2) == 0) && (*(int *)(lVar4 + 0xc48) == 0)) {
uVar2 = *(undefined4 *)(lVar4 + 0xc58);
}
else {
if (*(int *)(lVar4 + 0xc4c) != 0) goto switchD_1401e6880_caseD_1;
uVar2 = *(undefined4 *)(lVar4 + 0xc50);
}
break;
case 0x3e:
if (iVar1 != 0x16f) goto switchD_1401e6880_caseD_1;
uVar2 = 0x59;
break;
case 0x3f:
if (iVar1 == 0x170) {
uVar2 = 0x59;
}
else if (iVar1 == 0x174) {
uVar2 = 0xbc;
}
else {
if (iVar1 != 0x178) goto switchD_1401e6880_caseD_1;
uVar2 = 0x15;
}
break;
case 0x40:
if (iVar1 == 0x171) {
uVar2 = 0x59;
}
else {
if (iVar1 != 0x175) goto switchD_1401e6880_caseD_1;
uVar2 = 0xbd;
}
break;
case 0x41:
if (iVar1 == 0x172) {
uVar2 = 0x59;
}
else {
if (iVar1 != 0x176) goto switchD_1401e6880_caseD_1;
uVar2 = 0xbe;
}
break;
case 0x42:
if (iVar1 == 0x173) {
uVar2 = 0x59;
}
else {
if (iVar1 != 0x177) goto switchD_1401e6880_caseD_1;
uVar2 = 0xbf;
}
}
*(undefined4 *)(param_1 + 0x40) = uVar2;
switch(param_2 + -3) {
case 0:
goto switchD_1401e69b5_caseD_0;
case 4:
if ((*(int *)(lVar4 + 0xc48) != 0) && ((*(byte *)(lVar4 + 0xc44) & 2) == 0)) {
uVar6 = 3;
goto switchD_1401e69b5_caseD_0;
}
break;
case 0x11:
if (((*(byte *)(lVar4 + 0xc44) & 1) == 0) && (*(int *)(lVar4 + 0xc48) == 0)) {
uVar6 = *(undefined4 *)(lVar4 + 0xc5c);
goto switchD_1401e69b5_caseD_0;
}
if (*(int *)(lVar4 + 0xc4c) == 0) {
uVar6 = *(undefined4 *)(lVar4 + 0xc54);
goto switchD_1401e69b5_caseD_0;
}
}
uVar6 = 0;
switchD_1401e69b5_caseD_0:
*(undefined4 *)(param_1 + 0x44) = uVar6;
uVar3 = FUN_1401e6bf0(param_1);
uVar5 = (ulonglong)uVar3;
if (uVar3 == 0x80070490) {
lVar4 = FUN_1401e6b70(param_1);
if (lVar4 == 0) {
return uVar5;
}
*(longlong *)(param_1 + 0x18) = lVar4;
uVar3 = FUN_1401e6bf0(param_1);
uVar5 = (ulonglong)uVar3;
}
if ((int)uVar5 < 0) {
return uVar5;
}
if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xb34) == 0) {
*(undefined8 *)(param_1 + 100) = 0;
}
else {
*(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x90);
*(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x94);
FUN_1401e7de0(param_1);
}
if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x120) ==
*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x130)) ||
(uVar5 = FUN_1401e7940(param_1), -1 < (int)uVar5)) {
uVar5 = 0;
}
return uVar5;
}



undefined8 FUN_1401e6b70(longlong param_1)

{
int iVar1;
longlong lVar2;
undefined8 uVar3;
int iVar4;
uint uVar5;

lVar2 = FUN_14020a3a0(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10));
iVar1 = 1;
if (lVar2 != 0) {
iVar1 = *(int *)(lVar2 + 0x20);
}
if (iVar1 == 2) {
iVar4 = 2;
}
else {
iVar4 = 1;
if (iVar1 - 3U < 2) {
iVar4 = 3;
}
}
uVar5 = *(int *)(param_1 + 0x28) - 1;
if (uVar5 < 6) {
uVar3 = FUN_14020bd20(*(undefined4 *)
        (&DAT_140b60320 + ((ulonglong)uVar5 + (ulonglong)(iVar4 - 1) * 6) * 4));
return uVar3;
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e6bf0(longlong param_1)

{
undefined4 uVar1;
ulonglong uVar2;
longlong *plVar3;
int iVar4;
longlong lVar5;
undefined8 uVar6;
longlong lVar7;
short *psVar8;
short *psVar9;
uint uVar10;
code *pcVar11;
longlong lVar12;
longlong lVar13;
longlong lVar14;
double dVar15;
float fVar16;
undefined4 uVar17;
undefined4 uVar18;
float local_res8;
float local_resc;
undefined4 local_68;
int local_64;
undefined8 local_60;
undefined4 local_58;
undefined8 local_54;
undefined4 local_4c;

if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
*(undefined8 *)(param_1 + 0x30) = 0;
}
uVar17 = 0;
uVar18 = 0x40f00000;
fVar16 = -1.0;
uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x18);
lVar12 = 0x28;
lVar13 = 0xd8;
if (((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) || (uVar2 + DAT_140c3fe68 == 0)) {
LAB_1401e6f63:
lVar5 = 2;
plVar3 = *(longlong **)(param_1 + 0x38);
if (plVar3 != (longlong *)0x0) {
(**(code **)(*plVar3 + 8))(plVar3);
*(undefined8 *)(param_1 + 0x38) = 0;
}
psVar8 = (short *)0x0;
uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x20);
if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(uVar2 + DAT_140c3fe68);
}
if (*psVar9 != 0) {
uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x18);
if (((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) ||
((psVar9 = (short *)(DAT_140c3fe68 + uVar2), psVar9 == (short *)0x0 ||
((*psVar9 == 0 ||
(lVar14 = FUN_1401dd6d0(psVar9,0x20,
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar14 == 0)))))) goto LAB_1401e6f8c;
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar14,param_1 + 0x38,8);
if ((int)uVar6 < 0) {
return uVar6;
}
do {
uVar2 = *(ulonglong *)(lVar12 + *(longlong *)(param_1 + 0x18));
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(DAT_140c3fe68 + uVar2);
}
if ((((*psVar9 != 0) && (uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) &&
(((psVar9 = (short *)(uVar2 + DAT_140c3fe68), psVar9 != (short *)0x0 && (*psVar9 != 0))
&& (lVar14 = FUN_1401dd6d0(psVar9,0x20,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar14 != 0)))) {
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x310))();
}
lVar12 = lVar12 + 8;
lVar5 = lVar5 + -1;
} while (lVar5 != 0);
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x2d8))
(*(longlong **)(param_1 + 0x38),0x3d,1);
psVar9 = psVar8;
do {
iVar4 = *(int *)(lVar13 + *(longlong *)(param_1 + 0x18));
if ((iVar4 != 0) && (iVar4 < 0xca)) {
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x2d8))
(*(longlong **)(param_1 + 0x38),iVar4,1);
}
uVar10 = (int)psVar9 + 1;
psVar9 = (short *)(ulonglong)uVar10;
lVar13 = lVar13 + 4;
} while (uVar10 < 4);
plVar3 = *(longlong **)(param_1 + 0x38);
dVar15 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
local_68 = 0x96;
local_60 = 0x3f800000;
local_58 = 0;
local_54 = 0x80;
local_4c = 0;
local_64 = (int)(dVar15 * (double)CONCAT44(uVar18,uVar17));
(**(code **)(*plVar3 + 0x248))(plVar3,0,&local_68);
pcVar11 = DAT_140c63840;
*(undefined8 *)(param_1 + 0x6c) = 0;
uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x104);
if (pcVar11 == (code *)0x0) {
psVar9 = psVar8;
if ((_DAT_140c655ec == 0) &&
(iVar4 = FUN_1402160e0(), pcVar11 = DAT_140c63840, -1 < iVar4)) {
psVar9 = (short *)(**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
pcVar11 = DAT_140c63840;
}
}
else {
psVar9 = (short *)(*pcVar11)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
pcVar11 = DAT_140c63840;
}
uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x108);
if (pcVar11 == (code *)0x0) {
if (_DAT_140c655ec == 0) {
iVar4 = FUN_1402160e0();
if (iVar4 < 0) {
psVar8 = (short *)0x0;
}
else {
psVar8 = (short *)(**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
}
}
}
else {
psVar8 = (short *)(*pcVar11)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
}
local_res8 = fVar16;
if (psVar9 != (short *)0x0) {
local_res8 = (float)(ulonglong)*(uint *)(psVar9 + 2);
}
local_resc = fVar16;
if (psVar8 != (short *)0x0) {
local_resc = (float)(ulonglong)*(uint *)(psVar8 + 2);
}
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x120))
(*(longlong **)(param_1 + 0x38),&local_res8);
}
}
plVar3 = *(longlong **)(param_1 + 0x48);
if (plVar3 != (longlong *)0x0) {
(**(code **)(*plVar3 + 8))(plVar3);
*(undefined8 *)(param_1 + 0x48) = 0;
}
psVar8 = (short *)0x0;
lVar12 = *(longlong *)(param_1 + 0x10);
lVar5 = 0x60;
lVar13 = 0x50;
if ((((*(int *)(lVar12 + 0xb34) != 0) &&
(uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x40), uVar2 != 0)) &&
(uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(uVar2 + DAT_140c3fe68);
}
if (*psVar9 != 0) {
if (((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) ||
((psVar8 = (short *)(DAT_140c3fe68 + uVar2), psVar8 == (short *)0x0 ||
((*psVar8 == 0 ||
(lVar12 = FUN_1401dd6d0(psVar8,0x20,*(undefined4 *)(lVar12 + 0x24),
                        *(undefined4 *)(lVar12 + 0x28)), lVar12 == 0))))))
goto LAB_1401e6f8c;
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar12,param_1 + 0x48,8);
if ((int)uVar6 < 0) {
return uVar6;
}
lVar14 = 0x60;
psVar8 = (short *)0x2;
lVar12 = lVar13;
do {
uVar2 = *(ulonglong *)(lVar12 + *(longlong *)(param_1 + 0x18));
if (uVar2 == 0) {
psVar9 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar9 = (short *)0x0;
}
else {
psVar9 = (short *)(DAT_140c3fe68 + uVar2);
}
if ((((*psVar9 != 0) && (uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) &&
(((psVar9 = (short *)(uVar2 + DAT_140c3fe68), psVar9 != (short *)0x0 && (*psVar9 != 0))
&& (lVar7 = FUN_1401dd6d0(psVar9,0x20,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar7 != 0)))) {
(**(code **)(**(longlong **)(param_1 + 0x48) + 0x310))
(*(longlong **)(param_1 + 0x48),
*(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x18)));
}
lVar12 = lVar12 + 8;
lVar14 = lVar14 + 4;
psVar8 = (short *)((longlong)psVar8 + -1);
} while (psVar8 != (short *)0x0);
plVar3 = *(longlong **)(param_1 + 0x48);
dVar15 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
local_68 = 0x96;
local_60 = 0x3f800000;
local_58 = 0;
local_54 = 0x80;
local_4c = 0;
local_64 = (int)(dVar15 * (double)CONCAT44(uVar18,uVar17));
(**(code **)(*plVar3 + 0x248))(plVar3,0,&local_68);
*(undefined8 *)(param_1 + 0x6c) = 0;
lVar12 = FUN_140216340(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x104));
lVar14 = FUN_140216340();
local_res8 = -1.0;
local_resc = -1.0;
if (lVar12 != 0) {
local_res8 = (float)(ulonglong)*(uint *)(lVar12 + 4);
}
if (lVar14 != 0) {
local_resc = (float)(ulonglong)*(uint *)(lVar14 + 4);
}
(**(code **)(**(longlong **)(param_1 + 0x48) + 0x120))
(*(longlong **)(param_1 + 0x48),&local_res8);
}
}
plVar3 = *(longlong **)(param_1 + 0x50);
if (plVar3 != (longlong *)0x0) {
(**(code **)(*plVar3 + 8))(plVar3);
*(short **)(param_1 + 0x50) = psVar8;
}
lVar12 = *(longlong *)(param_1 + 0x10);
if (*(int *)(lVar12 + 0xb34) != 0) {
uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x48);
if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(uVar2 + DAT_140c3fe68);
}
if (*psVar9 != 0) {
uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x40);
if ((((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) ||
(psVar9 = (short *)(DAT_140c3fe68 + uVar2), psVar9 == (short *)0x0)) ||
((*psVar9 == 0 ||
(lVar12 = FUN_1401dd6d0(psVar9,0x20,*(undefined4 *)(lVar12 + 0x24),
                        *(undefined4 *)(lVar12 + 0x28)), lVar12 == 0))))
goto LAB_1401e6f8c;
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar12,param_1 + 0x50,8);
if ((int)uVar6 < 0) {
return uVar6;
}
lVar12 = 2;
do {
uVar2 = *(ulonglong *)(lVar13 + *(longlong *)(param_1 + 0x18));
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(DAT_140c3fe68 + uVar2);
}
if (((((*psVar9 != 0) && (uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) &&
((psVar9 = (short *)(uVar2 + DAT_140c3fe68), psVar9 != (short *)0x0 &&
(*psVar9 != 0)))) &&
(lVar14 = FUN_1401dd6d0(psVar9,0x20,
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar14 != 0)) {
(**(code **)(**(longlong **)(param_1 + 0x50) + 0x310))
(*(longlong **)(param_1 + 0x50),
*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar5));
}
lVar13 = lVar13 + 8;
lVar5 = lVar5 + 4;
lVar12 = lVar12 + -1;
} while (lVar12 != 0);
plVar3 = *(longlong **)(param_1 + 0x50);
dVar15 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
local_68 = 0x96;
local_60 = 0x3f800000;
local_58 = SUB84(psVar8,0);
local_54 = 0x80;
local_64 = (int)(dVar15 * (double)CONCAT44(uVar18,uVar17));
local_4c = local_58;
(**(code **)(*plVar3 + 0x248))(plVar3,0,&local_68);
*(undefined8 *)(param_1 + 0x6c) = 0;
lVar12 = FUN_140216340(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x104));
lVar13 = FUN_140216340();
local_res8 = -1.0;
local_resc = -1.0;
if (lVar12 != 0) {
local_res8 = (float)(ulonglong)*(uint *)(lVar12 + 4);
}
if (lVar13 != 0) {
local_resc = (float)(ulonglong)*(uint *)(lVar13 + 4);
}
(**(code **)(**(longlong **)(param_1 + 0x50) + 0x120))
(*(longlong **)(param_1 + 0x50),&local_res8);
}
}
}
lVar12 = 2;
if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
*(undefined8 *)(param_1 + 0x58) = 0;
}
psVar8 = (short *)0x0;
iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x70);
*(int *)(param_1 + 0x60) = iVar4;
if (((iVar4 != 0) && (uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x68), uVar2 != 0))
&& ((uVar2 <= DAT_140c3fe70 && (uVar2 + DAT_140c3fe68 != 0)))) {
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(uVar2 + DAT_140c3fe68);
}
if (*psVar9 != 0) {
if ((((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) ||
(psVar9 = (short *)(uVar2 + DAT_140c3fe68), psVar9 == (short *)0x0)) ||
((*psVar9 == 0 ||
(lVar13 = FUN_1401dd6d0(psVar9,0x20,
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar13 == 0)))) goto LAB_1401e6f8c;
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar13,param_1 + 0x58,8);
if ((int)uVar6 < 0) {
return uVar6;
}
lVar5 = 0x88;
lVar13 = 0x78;
do {
uVar2 = *(ulonglong *)(lVar13 + *(longlong *)(param_1 + 0x18));
psVar9 = psVar8;
if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
psVar9 = (short *)(DAT_140c3fe68 + uVar2);
}
if ((((*psVar9 != 0) && (uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) &&
(((psVar9 = (short *)(uVar2 + DAT_140c3fe68), psVar9 != (short *)0x0 && (*psVar9 != 0))
&& (lVar14 = FUN_1401dd6d0(psVar9,0x20,
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar14 != 0)))) {
(**(code **)(**(longlong **)(param_1 + 0x58) + 0x310))
(*(longlong **)(param_1 + 0x58),
*(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar5));
}
lVar13 = lVar13 + 8;
lVar5 = lVar5 + 4;
lVar12 = lVar12 + -1;
} while (lVar12 != 0);
plVar3 = *(longlong **)(param_1 + 0x58);
dVar15 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
local_68 = 0x96;
local_60 = 0x3f800000;
local_58 = 0;
local_54 = 0x80;
local_4c = 0;
local_64 = (int)(dVar15 * (double)CONCAT44(uVar18,uVar17));
(**(code **)(*plVar3 + 0x248))(plVar3,0,&local_68);
*(undefined8 *)(param_1 + 0x6c) = 0;
}
}
uVar6 = 0;
}
else {
if (uVar2 == 0) {
psVar8 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar8 = (short *)0x0;
}
else {
psVar8 = (short *)(uVar2 + DAT_140c3fe68);
}
if (*psVar8 == 0) goto LAB_1401e6f63;
if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) &&
((psVar8 = (short *)(DAT_140c3fe68 + uVar2), psVar8 != (short *)0x0 &&
((*psVar8 != 0 &&
(lVar5 = FUN_1401dd6d0(psVar8,0x20,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)), lVar5 != 0))
)))) {
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
uVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar5,param_1 + 0x30,8);
if ((int)uVar6 < 0) {
return uVar6;
}
lVar14 = 2;
lVar5 = lVar12;
do {
uVar2 = *(ulonglong *)(lVar5 + *(longlong *)(param_1 + 0x18));
if (uVar2 == 0) {
psVar8 = (short *)0x0;
}
else if (DAT_140c3fe70 < uVar2) {
psVar8 = (short *)0x0;
}
else {
psVar8 = (short *)(DAT_140c3fe68 + uVar2);
}
if (((((*psVar8 != 0) && (uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) &&
((psVar8 = (short *)(uVar2 + DAT_140c3fe68), psVar8 != (short *)0x0 && (*psVar8 != 0))))
&& (lVar7 = FUN_1401dd6d0(psVar8,0x20,
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x24),
                          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
        lVar7 != 0)) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x310))();
}
lVar5 = lVar5 + 8;
lVar14 = lVar14 + -1;
} while (lVar14 != 0);
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))(*(longlong **)(param_1 + 0x30),0x3d,1);
uVar10 = 0;
lVar5 = 0xd8;
do {
iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x18));
if ((iVar4 != 0) && (iVar4 < 0xca)) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d8))
(*(longlong **)(param_1 + 0x30),iVar4,1);
}
uVar10 = uVar10 + 1;
lVar5 = lVar5 + 4;
} while (uVar10 < 4);
plVar3 = *(longlong **)(param_1 + 0x30);
dVar15 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
local_68 = 0x96;
local_60 = 0x3f800000;
local_58 = 0;
local_54 = 0x80;
local_4c = 0;
local_64 = (int)(dVar15 * (double)CONCAT44(uVar18,uVar17));
(**(code **)(*plVar3 + 0x248))(plVar3,0,&local_68);
pcVar11 = DAT_140c63840;
*(undefined8 *)(param_1 + 0x6c) = 0;
uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x104);
if (pcVar11 == (code *)0x0) {
lVar5 = lVar14;
if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), pcVar11 = DAT_140c63840, -1 < iVar4))
{
lVar5 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
pcVar11 = DAT_140c63840;
}
}
else {
lVar5 = (*pcVar11)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
pcVar11 = DAT_140c63840;
}
uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x108);
if (pcVar11 == (code *)0x0) {
if ((_DAT_140c655ec == 0) && (iVar4 = FUN_1402160e0(), -1 < iVar4)) {
lVar14 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar1);
}
}
else {
lVar14 = (*pcVar11)(&PTR_u_MaterialData_140a6b630,uVar1,DAT_140c63858);
}
local_res8 = fVar16;
if (lVar5 != 0) {
local_res8 = (float)(ulonglong)*(uint *)(lVar5 + 4);
}
local_resc = fVar16;
if (lVar14 != 0) {
local_resc = (float)(ulonglong)*(uint *)(lVar14 + 4);
}
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x120))
(*(longlong **)(param_1 + 0x30),&local_res8);
goto LAB_1401e6f63;
}
LAB_1401e6f8c:
uVar6 = 0x80070490;
}
return uVar6;
}



undefined8 FUN_1401e7940(longlong param_1)

{
longlong *plVar1;

plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x120);
if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) && (*(int *)(param_1 + 0x40) != 0)) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x3a8))();
(**(code **)(*plVar1 + 0x380))
(plVar1,*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
}
if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) && (*(int *)(param_1 + 0x44) != 0)) {
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a8))();
(**(code **)(*plVar1 + 0x380))
(plVar1,*(undefined4 *)(param_1 + 0x44),*(undefined8 *)(param_1 + 0x38));
}
if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x48) + 0x3a8))();
(**(code **)(*plVar1 + 0x388))(plVar1,*(undefined8 *)(param_1 + 0x48));
}
if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x50) + 0x3a8))();
(**(code **)(*plVar1 + 0x388))(plVar1,*(undefined8 *)(param_1 + 0x50));
}
if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) && (*(int *)(param_1 + 0x60) != 0)) {
(**(code **)(**(longlong **)(param_1 + 0x58) + 0x3a8))();
(**(code **)(*plVar1 + 0x380))
(plVar1,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58));
}
return 0;
}



void FUN_1401e7a30(longlong param_1)

{
longlong lVar1;
longlong *plVar2;
int iVar3;

lVar1 = *(longlong *)(param_1 + 0x10);
iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
switch(*(undefined4 *)(param_1 + 0x28)) {
case 3:
iVar3 = 0xf;
goto LAB_1401e7b87;
case 7:
if ((*(int *)(lVar1 + 0xc48) != 0) && ((*(byte *)(lVar1 + 0xc44) & 2) == 0)) {
iVar3 = 3;
goto LAB_1401e7b87;
}
break;
case 0x14:
if (((*(byte *)(lVar1 + 0xc44) & 2) == 0) && (*(int *)(lVar1 + 0xc48) == 0)) {
iVar3 = *(int *)(lVar1 + 0xc58);
goto LAB_1401e7b87;
}
if (*(int *)(lVar1 + 0xc4c) == 0) {
iVar3 = *(int *)(lVar1 + 0xc50);
goto LAB_1401e7b87;
}
break;
case 0x41:
if (iVar3 == 0x16f) {
iVar3 = 0x59;
goto LAB_1401e7b87;
}
break;
case 0x42:
if (iVar3 == 0x170) {
iVar3 = 0x59;
goto LAB_1401e7b87;
}
if (iVar3 == 0x174) {
iVar3 = 0xbc;
goto LAB_1401e7b87;
}
if (iVar3 == 0x178) {
iVar3 = 0x15;
goto LAB_1401e7b87;
}
break;
case 0x43:
if (iVar3 == 0x171) {
iVar3 = 0x59;
goto LAB_1401e7b87;
}
if (iVar3 == 0x175) {
iVar3 = 0xbd;
goto LAB_1401e7b87;
}
break;
case 0x44:
if (iVar3 == 0x172) {
iVar3 = 0x59;
goto LAB_1401e7b87;
}
if (iVar3 == 0x176) {
iVar3 = 0xbe;
goto LAB_1401e7b87;
}
break;
case 0x45:
if (iVar3 == 0x173) {
iVar3 = 0x59;
goto LAB_1401e7b87;
}
if (iVar3 == 0x177) {
iVar3 = 0xbf;
goto LAB_1401e7b87;
}
}
iVar3 = 0;
LAB_1401e7b87:
if (*(int *)(param_1 + 0x40) != iVar3) {
*(int *)(param_1 + 0x40) = iVar3;
if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x3a8))();
if (*(int *)(param_1 + 0x40) != 0) {
plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x120);
// WARNING: Could not recover jumptable at 0x0001401e7bbf. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*plVar2 + 0x380))
(plVar2,*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
return;
}
}
}
return;
}



void FUN_1401e7c40(longlong param_1)

{
longlong lVar1;
longlong *plVar2;
int iVar3;

lVar1 = *(longlong *)(param_1 + 0x10);
switch(*(undefined4 *)(param_1 + 0x28)) {
case 3:
iVar3 = 0xf;
goto LAB_1401e7cc9;
case 7:
if ((*(int *)(lVar1 + 0xc48) != 0) && ((*(byte *)(lVar1 + 0xc44) & 2) == 0)) {
iVar3 = 3;
goto LAB_1401e7cc9;
}
break;
case 0x14:
if (((*(byte *)(lVar1 + 0xc44) & 1) == 0) && (*(int *)(lVar1 + 0xc48) == 0)) {
iVar3 = *(int *)(lVar1 + 0xc5c);
goto LAB_1401e7cc9;
}
if (*(int *)(lVar1 + 0xc4c) == 0) {
iVar3 = *(int *)(lVar1 + 0xc54);
goto LAB_1401e7cc9;
}
}
iVar3 = 0;
LAB_1401e7cc9:
if (*(int *)(param_1 + 0x44) != iVar3) {
*(int *)(param_1 + 0x44) = iVar3;
if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a8))();
if (*(int *)(param_1 + 0x44) != 0) {
plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x120);
// WARNING: Could not recover jumptable at 0x0001401e7d01. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(*plVar2 + 0x380))
(plVar2,*(int *)(param_1 + 0x44),*(undefined8 *)(param_1 + 0x38));
return;
}
}
}
return;
}



void FUN_1401e7d70(longlong param_1)

{
if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0x3a8))();
}
if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a8))();
}
if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x48) + 0x3a8))();
}
if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x50) + 0x3a8))();
}
if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e7dd2. Too many branches
// WARNING: Treating indirect jump as call
(**(code **)(**(longlong **)(param_1 + 0x58) + 0x3a8))();
return;
}
return;
}



void FUN_1401e7de0(longlong param_1)

{
if (*(longlong *)(param_1 + 0x30) != 0) {
FUN_1401e7e50();
}
if (*(longlong *)(param_1 + 0x38) != 0) {
FUN_1401e7e50(param_1);
}
if (*(longlong *)(param_1 + 0x48) != 0) {
FUN_1401e7e50(param_1);
}
if (*(longlong *)(param_1 + 0x50) != 0) {
FUN_1401e7e50(param_1);
}
if (*(longlong *)(param_1 + 0x58) != 0) {
FUN_1401e7e50(param_1);
}
*(undefined4 *)(param_1 + 0x70) = 0;
return;
}



void FUN_1401e7e50(longlong param_1,longlong *param_2)

{
longlong lVar1;
ulonglong uVar2;
longlong lVar3;

uVar2 = 0xb78;
lVar3 = 0;
do {
lVar1 = *(longlong *)(uVar2 + *(longlong *)(param_1 + 0x10));
if (lVar1 == 0) {
(**(code **)(*param_2 + 0x310))
(param_2,*(undefined4 *)((longlong)&DAT_140c2d3f8 + lVar3),
*(undefined8 *)(uVar2 + 0x20 + *(longlong *)(param_1 + 0x10)));
}
else {
(**(code **)(*param_2 + 0x308))
(param_2,*(undefined4 *)((longlong)&DAT_140c2d3f8 + lVar3),lVar1);
}
lVar1 = *(longlong *)(uVar2 + 0x40 + *(longlong *)(param_1 + 0x10));
if (lVar1 == 0) {
(**(code **)(*param_2 + 0x310))
(param_2,*(undefined4 *)((longlong)&DAT_140c2d3e8 + lVar3),
*(undefined8 *)(uVar2 + 0x60 + *(longlong *)(param_1 + 0x10)));
}
else {
(**(code **)(*param_2 + 0x308))
(param_2,*(undefined4 *)((longlong)&DAT_140c2d3e8 + lVar3),lVar1);
}
uVar2 = uVar2 + 8;
lVar3 = lVar3 + 4;
} while (uVar2 < 0xb98);
return;
}



void FUN_1401e7f20(longlong param_1,undefined8 param_2)

{
longlong *plVar1;

if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x30) + 0xf0))();
}
plVar1 = *(longlong **)(param_1 + 0x38);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
}
plVar1 = *(longlong **)(param_1 + 0x48);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
}
plVar1 = *(longlong **)(param_1 + 0x50);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
}
plVar1 = *(longlong **)(param_1 + 0x58);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0xf0))(plVar1,param_2);
}
*(undefined4 *)(param_1 + 0x70) = 0;
return;
}



float FUN_1401e7fb0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
longlong *plVar1;
float fVar2;
float fVar3;
undefined4 in_XMM6_Da;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
undefined4 in_XMM7_Da;
undefined4 in_XMM7_Db;
undefined4 in_XMM7_Dc;
undefined4 in_XMM7_Dd;
undefined4 in_XMM8_Da;
undefined4 in_XMM8_Db;
undefined4 in_XMM8_Dc;
undefined4 in_XMM8_Dd;
undefined auVar4 [16];
undefined auVar5 [16];
undefined auVar6 [16];

auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
auVar5 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
auVar4 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
fVar2 = DAT_140c3f648;
if ((*(longlong **)(param_1 + 0x58) != (longlong *)0x0) &&
(fVar3 = DAT_140c3f648, fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x318))()
, fVar3 <= fVar2)) {
fVar2 = fVar3;
}
plVar1 = *(longlong **)(param_1 + 0x38);
fVar3 = fVar2;
if ((plVar1 != (longlong *)0x0) &&
(fVar3 = (float)(**(code **)(*plVar1 + 0x318))
        (plVar1,param_2,param_3,param_4,auVar4,auVar5,auVar6), fVar2 <= fVar3
)) {
fVar3 = fVar2;
}
plVar1 = *(longlong **)(param_1 + 0x30);
fVar2 = fVar3;
if ((plVar1 != (longlong *)0x0) &&
(fVar2 = (float)(**(code **)(*plVar1 + 0x318))(plVar1,param_2), fVar3 <= fVar2)) {
fVar2 = fVar3;
}
plVar1 = *(longlong **)(param_1 + 0x50);
fVar3 = fVar2;
if ((plVar1 != (longlong *)0x0) &&
(fVar3 = (float)(**(code **)(*plVar1 + 0x318))(plVar1,param_2), fVar2 <= fVar3)) {
fVar3 = fVar2;
}
plVar1 = *(longlong **)(param_1 + 0x48);
fVar2 = fVar3;
if ((plVar1 != (longlong *)0x0) &&
(fVar2 = (float)(**(code **)(*plVar1 + 0x318))(plVar1,param_2), fVar3 <= fVar2)) {
fVar2 = fVar3;
}
return fVar2;
}



undefined8 FUN_1401e80b0(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
int iVar2;

if (*(int *)(param_1 + 0x6c) == 0) {
plVar1 = *(longlong **)(param_1 + 0x30);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x38);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x48);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x50);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x58);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
*(undefined4 *)(param_1 + 0x6c) = 1;
}
return 1;
}



undefined8 FUN_1401e8170(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
int iVar2;

if (*(int *)(param_1 + 0x70) == 0) {
plVar1 = *(longlong **)(param_1 + 0x30);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x38);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x48);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x50);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
plVar1 = *(longlong **)(param_1 + 0x58);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
return 0;
}
*(undefined4 *)(param_1 + 0x70) = 1;
}
return 1;
}



void FUN_1401e8230(WORD *param_1,FILETIME param_2)

{
    BOOL BVar1;
    DWORD DVar2;
    undefined auStack72 [32];
    FILETIME local_28;
    _SYSTEMTIME local_20;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    if (param_1 == (WORD *)0x0) {
        FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
        return;
    }
    local_28 = param_2;
    BVar1 = FileTimeToSystemTime(&local_28,&local_20);
    if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (0 < (int)DVar2) {
            DVar2 = DVar2 & 0xffff | 0x80070000;
        }
        if ((int)DVar2 < 0) goto LAB_1401e82d9;
    }
    *param_1 = local_20.wYear;
    param_1[1] = local_20.wMonth;
    param_1[2] = local_20.wDay;
    param_1[3] = local_20.wHour;
    param_1[4] = local_20.wMinute;
    param_1[5] = local_20.wSecond;
    *(uint *)(param_1 + 6) = (uint)local_20.wMilliseconds * 1000000;
    LAB_1401e82d9:
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



undefined8 FUN_1401e82f0(undefined8 param_1,float param_2,longlong *param_3)

{
longlong lVar1;
float fVar2;
_FILETIME local_res8 [4];

GetSystemTimeAsFileTime(local_res8);
lVar1 = 0;
fVar2 = (param_2 - (float)(int)param_2) * 8.64e+11;
if ((9.223372e+18 <= fVar2) && (fVar2 = fVar2 - 9.223372e+18, fVar2 < 9.223372e+18)) {
lVar1 = -0x8000000000000000;
}
if (9.223372e+18 <= param_2) {
param_2 = param_2 - 9.223372e+18;
}
*param_3 = (longlong)param_2 * 864000000000 + (longlong)fVar2 + lVar1 + (longlong)local_res8[0];
return 0;
}



// WARNING: Removing unreachable block (ram,0x0001401e8403)
// WARNING: Removing unreachable block (ram,0x0001401e8424)

undefined8 FUN_1401e83a0(float *param_1,_FILETIME param_2)

{
    ulonglong uVar1;
    float fVar2;
    _FILETIME local_res8;

    GetSystemTimeAsFileTime(&local_res8);
    if ((ulonglong)param_2 < (ulonglong)local_res8) {
        fVar2 = -1.0;
        uVar1 = (longlong)local_res8 - (longlong)param_2;
    }
    else {
        fVar2 = 1.0;
        uVar1 = (longlong)param_2 - (longlong)local_res8;
    }
    *param_1 = ((float)(uVar1 % 864000000000) * 1.157407e-12 + (float)(uVar1 / 864000000000)) * fVar2;
    return 0;
}



undefined8 FUN_1401e8450(longlong *param_1,longlong param_2,uint param_3)

{
if ((param_2 != 0) && (param_3 != 0)) {
if (DAT_140c3fe70 < (ulonglong)param_3 + (param_2 - DAT_140c3fe68)) {
*param_1 = 0;
*(undefined4 *)(param_1 + 1) = 0;
return 0x80004005;
}
*param_1 = param_2 - DAT_140c3fe68;
*(uint *)(param_1 + 1) = param_3;
return 0;
}
*param_1 = 0;
*(undefined4 *)(param_1 + 1) = 0;
return 0;
}



undefined4 FUN_1401e84a0(ushort *param_1)

{
    ushort uVar1;
    int iVar2;
    ulonglong uVar3;
    ushort *puVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;

    if (DAT_140c79a78 == 0) {
        return 1;
    }
    uVar7 = 0;
    if (DAT_140c79a78 != 0) {
        lVar6 = DAT_140c79a70;
        do {
            uVar3 = 0;
            uVar1 = *param_1;
            while (uVar1 != 0) {
                uVar3 = uVar3 + 1;
                uVar1 = param_1[uVar3];
            }
            if (*(longlong *)(lVar6 + 0x10) - *(longlong *)(lVar6 + 8) >> 1 == uVar3) {
                uVar5 = 0;
                if (uVar3 == 0) {
                    return 1;
                }
                puVar4 = param_1;
                while( true ) {
                    uVar1 = *(ushort *)((*(longlong *)(lVar6 + 8) - (longlong)param_1) + (longlong)puVar4);
                    if (uVar1 != *puVar4) break;
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 1;
                    if (uVar3 <= uVar5) {
                        return 1;
                    }
                }
                iVar2 = 1;
                if (uVar1 < *puVar4) {
                    iVar2 = -1;
                }
                if (iVar2 == 0) {
                    return 1;
                }
            }
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
        } while (uVar7 < DAT_140c79a78);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e8580(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c64a98 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) ||
        (iVar2 = FUN_1401e84a0(L"AccountCurrencyType"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64714 != 0) {
                iVar2 = _DAT_140c64d5c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountCurrencyType_140acd8c8;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\AccountCurrencyType.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountCurrencyType_140acd8c8;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_AccountCurrencyType_140acd8c8;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64a98 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c64f2c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e8790(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e87b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_AccountCurrencyType_140a69090,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64f2c == 0) {
        iVar1 = FUN_1401e8580();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e87dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c64a98 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e87e0(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63840 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e8809. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63840)(&PTR_u_AccountCurrencyType_140a69090,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64f2c == 0) {
iVar1 = FUN_1401e8580();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e8837. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64a98 + 0x18))(DAT_140c64a98,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e8840(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e8869. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_AccountCurrencyType_140a69090,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64f2c == 0) {
iVar1 = FUN_1401e8580();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e8897. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64a98 + 0x20))(DAT_140c64a98,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e89c0(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c652d0 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) || (iVar2 = FUN_1401e84a0(L"AccountItem"), iVar2 == 0))
        {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c63cb8 != 0) {
                iVar2 = _DAT_140c65534;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountItem_140ad0728;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\AccountItem.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountItem_140ad0728;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_AccountItem_140ad0728;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c652d0 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c64170 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e8bd0(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e8bf2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_AccountItem_140a690c8,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64170 == 0) {
        iVar1 = FUN_1401e89c0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e8c1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c652d0 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e8c20(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63840 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e8c49. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64170 == 0) {
iVar1 = FUN_1401e89c0();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e8c77. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c652d0 + 0x18))(DAT_140c652d0,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e8c80(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e8ca9. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_AccountItem_140a690c8,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64170 == 0) {
iVar1 = FUN_1401e89c0();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e8cd7. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c652d0 + 0x20))(DAT_140c652d0,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e8e00(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c63a58 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) ||
        (iVar2 = FUN_1401e84a0(L"AccountItemCooldownGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64cbc != 0) {
                iVar2 = _DAT_140c6404c;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountItemCooldownGroup_140a75b38;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\AccountItemCooldownGroup.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_AccountItemCooldownGroup_140a75b38;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_AccountItemCooldownGroup_140a75b38;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c63a58 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c6501c = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9010(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e9032. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_AccountItemCooldownGroup_140a69100,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c6501c == 0) {
        iVar1 = FUN_1401e8e00();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e905c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c63a58 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e90c0(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e90e9. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_AccountItemCooldownGroup_140a69100,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c6501c == 0) {
iVar1 = FUN_1401e8e00();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9117. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c63a58 + 0x20))(DAT_140c63a58,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e9240(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c64218 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) || (iVar2 = FUN_1401e84a0(L"Achievement"), iVar2 == 0))
        {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64dfc != 0) {
                iVar2 = _DAT_140c650d8;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_Achievement_140a5ca18;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\Achievement.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_Achievement_140a5ca18;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_Achievement_140a5ca18;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64218 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c64944 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9450(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e9472. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_Achievement_140a69138,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c64944 == 0) {
        iVar1 = FUN_1401e9240();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e949c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c64218 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e94a0(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63840 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e94c9. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63840)(&PTR_u_Achievement_140a69138,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64944 == 0) {
iVar1 = FUN_1401e9240();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e94f7. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64218 + 0x18))(DAT_140c64218,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9500(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e9529. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_Achievement_140a69138,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c64944 == 0) {
iVar1 = FUN_1401e9240();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9557. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64218 + 0x20))(DAT_140c64218,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e9680(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c64768 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) ||
        (iVar2 = FUN_1401e84a0(L"AchievementCategory"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c64b8c != 0) {
                iVar2 = _DAT_140c65484;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_AchievementCategory_140acaf28;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\AchievementCategory.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_AchievementCategory_140acaf28;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_AchievementCategory_140acaf28;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64768 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c638bc = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9890(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e98b2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_AchievementCategory_140a69170,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c638bc == 0) {
        iVar1 = FUN_1401e9680();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e98dc. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c64768 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e98e0(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63840 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e9909. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63840)(&PTR_u_AchievementCategory_140a69170,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c638bc == 0) {
iVar1 = FUN_1401e9680();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9937. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64768 + 0x18))(DAT_140c64768,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9940(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e9969. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_AchievementCategory_140a69170,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c638bc == 0) {
iVar1 = FUN_1401e9680();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9997. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64768 + 0x20))(DAT_140c64768,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1401e9ac0(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    if (DAT_140c64588 == (longlong *)0x0) {
        if ((DAT_140c63970 == (undefined8 *)0x0) ||
        (iVar2 = FUN_1401e84a0(L"AchievementGroup"), iVar2 == 0)) {
            iVar2 = _DAT_140c1e48c;
            if (_DAT_140c6434c != 0) {
                iVar2 = _DAT_140c63c98;
            }
            if (iVar2 == 0) {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b798c0;
                    plVar3[4] = 0;
                    plVar3[2] = (longlong)&PTR_u_AchievementGroup_140a795c0;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,L"DB\\AchievementGroup.tbl");
                if (iVar2 < 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return iVar2;
                }
            }
            else {
                plVar3 = (longlong *)FUN_14018b280(0x30);
                if (plVar3 != (longlong *)0x0) {
                    *(undefined4 *)(plVar3 + 1) = 1;
                    plVar3[3] = 0;
                    plVar3[2] = (longlong)&PTR_u_AchievementGroup_140a795c0;
                    plVar3[4] = 0;
                    *plVar3 = (longlong)&PTR_LAB_140b79850;
                    plVar3[5] = 0;
                    plVar5 = plVar3;
                }
                lVar4 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],plVar5[2]);
                plVar5[5] = lVar4;
                if (lVar4 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                    return -0x7fffbffb;
                }
            }
        }
        else {
            plVar3 = (longlong *)FUN_14018b280(0x50,0);
            puVar1 = DAT_140c63970;
            if (plVar3 != (longlong *)0x0) {
                *(undefined4 *)(plVar3 + 1) = 1;
                *plVar3 = (longlong)&PTR_LAB_140b79650;
                *(undefined4 *)(plVar3 + 4) = 0;
                plVar3[2] = (longlong)puVar1;
                plVar3[5] = 0;
                *(undefined4 *)(plVar3 + 6) = 0;
                plVar3[3] = (longlong)&PTR_u_AchievementGroup_140a795c0;
                plVar3[7] = 0;
                plVar3[8] = 0;
                *(undefined4 *)(plVar3 + 9) = 0;
                (**(code **)*puVar1)();
                plVar5 = plVar3;
            }
            iVar2 = FUN_1407befc0(plVar5,0);
            if (iVar2 < 0) {
                if (plVar5 == (longlong *)0x0) {
                    return iVar2;
                }
                (**(code **)(*plVar5 + 8))(plVar5);
                return iVar2;
            }
        }
        DAT_140c64588 = plVar5;
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
    }
    _DAT_140c65614 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9cd0(void)

{
    int iVar1;
    undefined8 uVar2;

    if (DAT_140c63838 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001401e9cf2. Too many branches
        // WARNING: Treating indirect jump as call
        uVar2 = (*DAT_140c63838)(&PTR_u_AchievementGroup_140a691a8,DAT_140c63858);
        return uVar2;
    }
    if (_DAT_140c65614 == 0) {
        iVar1 = FUN_1401e9ac0();
        if (-1 < iVar1) {
            // WARNING: Could not recover jumptable at 0x0001401e9d1c. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*DAT_140c64588 + 0x28))();
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9d20(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63840 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e9d49. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63840)(&PTR_u_AchievementGroup_140a691a8,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c65614 == 0) {
iVar1 = FUN_1401e9ac0();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9d77. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64588 + 0x18))(DAT_140c64588,param_1);
return uVar2;
}
}
return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401e9d80(undefined4 param_1)

{
int iVar1;
undefined8 uVar2;

if (DAT_140c63848 != (code *)0x0) {
// WARNING: Could not recover jumptable at 0x0001401e9da9. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (*DAT_140c63848)(&PTR_u_AchievementGroup_140a691a8,param_1,DAT_140c63858);
return uVar2;
}
if (_DAT_140c65614 == 0) {
iVar1 = FUN_1401e9ac0();
if (-1 < iVar1) {
// WARNING: Could not recover jumptable at 0x0001401e9dd7. Too many branches
// WARNING: Treating indirect jump as call
uVar2 = (**(code **)(*DAT_140c64588 + 0x20))(DAT_140c64588,param_1);
return uVar2;
}
}
return 0;
}
