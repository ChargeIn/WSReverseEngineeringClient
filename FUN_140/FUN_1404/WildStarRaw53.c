//
// Created by flop on 04.04.22.
//
#include "../../include.h"

bool FUN_14049f9d0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5)

{
    uint *puVar1;
    longlong lVar2;
    longlong lVar3;
    bool bVar4;
    bool bVar5;
    longlong local_18;

    if (DAT_140c65948 == 0) {
        return false;
    }
    lVar2 = *(longlong *)(DAT_140c65948 + 0x30);
    local_18 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_4) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_18 == lVar2) || (param_4 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar2;
    }
    if (local_18 == lVar2) {
        bVar5 = false;
    }
    else {
        puVar1 = (uint *)(*(longlong *)(local_18 + 0x28) + 0x20);
        bVar5 = param_5 <= *puVar1 && *puVar1 != param_5;
    }
    bVar4 = bVar5;
    if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
        return bVar5 == false;
    }
    return bVar4;
}



ulonglong FUN_14049fa80(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    uVar2 = FUN_14048d5a0(param_1,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



uint FUN_14049fac0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    longlong local_18;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
    local_18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar1;
    }
    uVar3 = 0;
    if (local_18 != *(longlong *)(DAT_140c65948 + 0x30)) {
        uVar3 = *(uint *)(*(longlong *)(local_18 + 0x28) + 0x34);
    }
    uVar4 = uVar3;
    if ((param_3 != 1) && (uVar4 = 0, param_3 == 2)) {
        return (uint)(uVar3 == 0);
    }
    return uVar4;
}



undefined8
FUN_14049fb50(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
              undefined4 param_5)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_18;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
    uVar5 = 0;
    lVar4 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((lVar4 == lVar1) || (local_18 = lVar4, param_4 < *(uint *)(lVar4 + 0x20))) {
        local_18 = lVar1;
    }
    if ((local_18 != lVar1) && (lVar4 = *(longlong *)(local_18 + 0x28), lVar4 != 0)) {
        uVar5 = *(undefined4 *)(lVar4 + 0x28);
    }
    uVar3 = FUN_1404a2090(lVar4,param_3,uVar5,param_5);
    return uVar3;
}



undefined8
FUN_14049fbe0(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
              undefined4 param_5)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong local_18;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(DAT_140c65948 + 0x30);
    uVar5 = 0;
    lVar4 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((lVar4 == lVar1) || (local_18 = lVar4, param_4 < *(uint *)(lVar4 + 0x20))) {
        local_18 = lVar1;
    }
    if ((local_18 != lVar1) && (lVar4 = *(longlong *)(local_18 + 0x28), lVar4 != 0)) {
        uVar5 = *(undefined4 *)(lVar4 + 0x14);
    }
    uVar3 = FUN_1404a2090(lVar4,param_3,uVar5,param_5);
    return uVar3;
}



ulonglong FUN_14049fc70(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                        longlong param_5)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    if (((*(int *)(param_2 + 0x80) == 0x14) || (*(int *)(param_2 + 0x80) == 0x17)) &&
        ((param_5 == 0 || ((*(int *)(param_5 + 0x80) == 0x14 || (*(int *)(param_5 + 0x80) == 0x17))))))
    {
        if ((param_3 != 1) && (param_3 == 2)) {
            return 1;
        }
        return 0;
    }
    uVar3 = 0;
    uVar4 = uVar3;
    iVar1 = FUN_14048d530(param_1,param_4);
    if (iVar1 != 0) {
        uVar2 = FUN_14048d610();
        uVar3 = (ulonglong)uVar2;
    }
    iVar1 = (int)uVar3;
    if ((param_3 != 1) && (uVar3 = uVar4, param_3 == 2)) {
        return uVar4 & 0xffffff00 | (ulonglong)(iVar1 == 0);
    }
    return uVar3 & 0xffffffff;
}



uint FUN_14049fe10(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    uint uVar1;
    longlong *plVar2;
    uint uVar3;

    uVar3 = 0;
    uVar1 = uVar3;
    if (DAT_140c65970 != 0) {
        plVar2 = (longlong *)FUN_1403d7bc0(DAT_140c65970,param_4);
        if (plVar2 == (longlong *)0x0) {
            uVar1 = 0;
        }
        else {
            uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
        }
    }
    if (param_3 != 1) {
        if (param_3 == 2) {
            uVar3 = (uint)(uVar1 == 0);
        }
        return uVar3;
    }
    return uVar1;
}



ulonglong FUN_14049fe80(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                        undefined4 param_5)

{
    longlong *plVar1;
    ulonglong uVar2;

    if ((param_2 != 0) && (DAT_140c65970 != 0)) {
        plVar1 = (longlong *)FUN_1403d7bc0(DAT_140c65970,param_4);
        if (plVar1 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_5);
            if (param_3 == 1) {
                return uVar2;
            }
            if (param_3 != 2) {
                return 0;
            }
            return (ulonglong)((int)uVar2 == 0);
        }
        if ((param_3 != 1) && (param_3 == 2)) {
            return 1;
        }
    }
    return 0;
}



void FUN_14049fef0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 uVar1;

    uVar1 = 0;
    if (DAT_140c65970 != 0) {
        uVar1 = FUN_1404a1aa0(param_1,param_4,0);
    }
    FUN_1404a2090(param_1,param_3,uVar1,param_5);
    return;
}



void FUN_14049ffb0(void)

{
    if (DAT_140c65970 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65970 + 0x10))();
    }
    FUN_1404a2090();
    return;
}



uint FUN_14049fff0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                   longlong param_5)

{
    int iVar1;
    uint uVar2;
    longlong *plVar3;

    if (((*(int *)(param_2 + 0x80) == 0x14) || (*(int *)(param_2 + 0x80) == 0x17)) &&
        ((param_5 == 0 ||
          ((*(int *)(param_5 + 0x80) == 0x14 || (param_2 = param_5, *(int *)(param_5 + 0x80) == 0x17))))
        )) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return 1;
        }
    }
    else {
        uVar2 = 0;
        if (DAT_140c65970 != 0) {
            plVar3 = (longlong *)FUN_1403d7bc0(DAT_140c65970,param_4);
            if (plVar3 == (longlong *)0x0) {
                uVar2 = 0;
            }
            else {
                iVar1 = *(int *)(param_2 + 0x35f8);
                if (iVar1 == -1) {
                    uVar2 = 0;
                }
                else {
                    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
                    uVar2 = uVar2 & 1 << ((byte)iVar1 & 0x1f);
                }
            }
        }
        if (param_3 == 1) {
            return uVar2;
        }
        if (param_3 == 2) {
            return (uint)(uVar2 == 0);
        }
    }
    return 0;
}



void FUN_1404a00e0(void)

{
    int iVar1;
    longlong *plVar2;
    undefined4 in_R9D;

    if ((DAT_140c65970 != 0) &&
        (plVar2 = (longlong *)FUN_1403d7bc0(DAT_140c65970,in_R9D), plVar2 != (longlong *)0x0)) {
        iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
        if (iVar1 == 0) {
            (**(code **)(*plVar2 + 0x40))(plVar2);
        }
        else {
            (**(code **)(*plVar2 + 0x48))();
        }
    }
    FUN_1404a2090();
    return;
}



bool FUN_1404a0150(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
    longlong lVar1;
    bool bVar2;
    bool bVar3;

    if (DAT_140c65960 == 0) {
        return false;
    }
    lVar1 = FUN_1403d2d60(param_1,param_4);
    if (lVar1 != 0) {
        bVar3 = param_3 == *(int *)(lVar1 + 0x10);
        bVar2 = bVar3;
        if ((param_2 != 1) && (bVar2 = false, param_2 == 2)) {
            return !bVar3;
        }
        return bVar2;
    }
    if ((param_2 != 1) && (param_2 == 2)) {
        return true;
    }
    return false;
}



undefined8
FUN_1404a01e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (DAT_140c65960 != 0) {
        lVar1 = FUN_140432960(DAT_140c65960,param_7,param_6,param_7,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (lVar1 != 0) {
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + 4);
            fVar4 = (float)uVar3;
            uVar2 = FUN_1404a2010(fVar4,param_2,
                                  ((float)(ulonglong)*(uint *)(lVar1 + 0x60) / fVar4) * 100.0,param_3,
                                  uVar3,param_5);
            return uVar2;
        }
    }
    return 0;
}



undefined8
FUN_1404a0260(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (DAT_140c65960 != 0) {
        lVar1 = FUN_140432960(DAT_140c65960,param_7,param_6,param_7,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (lVar1 != 0) {
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + 0xc);
            fVar4 = (float)uVar3;
            uVar2 = FUN_1404a2010(fVar4,param_2,
                                  ((float)(ulonglong)*(uint *)(lVar1 + 0x68) / fVar4) * 100.0,param_3,
                                  uVar3,param_5);
            return uVar2;
        }
    }
    return 0;
}



undefined8
FUN_1404a02e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (DAT_140c65960 != 0) {
        lVar1 = FUN_140432960(DAT_140c65960,param_7,param_6,param_7,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (lVar1 != 0) {
            uVar3 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + 8);
            fVar4 = (float)uVar3;
            uVar2 = FUN_1404a2010(fVar4,param_2,((float)(ulonglong)*(uint *)(lVar1 + 100) / fVar4) * 100.0
                    ,param_3,uVar3,param_5);
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_1404a0360(void)

{
    longlong *plVar1;
    undefined8 uVar2;
    undefined4 in_stack_00000028;

    if (DAT_140c65970 != 0) {
        plVar1 = (longlong *)FUN_1403d7bc0(DAT_140c65970,in_stack_00000028);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xd0))(plVar1);
        }
        uVar2 = FUN_1404a2090();
        return uVar2;
    }
    return 0;
}



bool FUN_1404a03e0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    bool bVar4;
    longlong local_18;

    if (DAT_140c659a8 == 0) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return true;
        }
        return false;
    }
    lVar1 = *(longlong *)(DAT_140c659a8 + 0x38);
    local_18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar1;
    }
    if (local_18 != *(longlong *)(DAT_140c659a8 + 0x38)) {
        bVar4 = true;
        bVar3 = true;
        if (*(int *)(*(longlong *)(local_18 + 0x28) + 0x28) != 0) goto LAB_1404a0468;
    }
    bVar4 = false;
    bVar3 = false;
    LAB_1404a0468:
    if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
        return !bVar3;
    }
    return bVar4;
}



ulonglong FUN_1404a0490(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                        undefined4 param_5)

{
    int iVar1;
    ulonglong uVar2;

    if (DAT_140c659a8 != 0) {
        uVar2 = FUN_1404a6190(param_1,param_4,param_5);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            uVar2 = (ulonglong)(iVar1 == 0);
        }
        return uVar2;
    }
    if ((param_3 != 1) && (param_3 == 2)) {
        return 1;
    }
    return 0;
}



undefined8
FUN_1404a04f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              uint param_5_00,undefined4 param_6,undefined4 param_5)

{
    undefined8 uVar1;
    ulonglong uVar2;
    undefined4 uVar3;

    uVar2 = (ulonglong)param_5_00;
    if (DAT_140c659a8 != 0) {
        uVar3 = FUN_1404a6070(param_3,param_6);
        uVar1 = FUN_1404a2010(uVar3,param_2,uVar3,param_5,param_3,uVar2 & 0xffffffff);
        return uVar1;
    }
    if ((param_5_00 != 1) && (param_5_00 == 2)) {
        return 1;
    }
    return 0;
}



ulonglong FUN_1404a0540(undefined8 param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    ulonglong uVar2;

    if (DAT_140c65980 == (longlong *)0x0) {
        return 0;
    }
    uVar2 = (**(code **)(*DAT_140c65980 + 0x48))(DAT_140c65980,param_3,0);
    iVar1 = (int)uVar2;
    if ((param_2 != 1) && (uVar2 = 0, param_2 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



bool FUN_1404a0590(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    bool bVar4;

    if (DAT_140c65980 != (longlong *)0x0) {
        iVar2 = 0;
        plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,param_4,0);
        if (((plVar3 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar3 + 0x68))(), iVar1 != 0)) &&
            (plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,param_4,0),
                    plVar3 != (longlong *)0x0)) {
            iVar2 = (**(code **)(*plVar3 + 0x38))();
        }
        bVar4 = iVar2 == param_3;
        if ((param_2 != 1) && (bVar4 = false, param_2 == 2)) {
            bVar4 = iVar2 != param_3;
        }
        return bVar4;
    }
    return false;
}



uint FUN_1404a0650(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                   longlong param_5)

{
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    uint uVar4;

    if (DAT_140c65980 != (longlong *)0x0) {
        if (((*(int *)(param_2 + 0x80) == 0x14) || (*(int *)(param_2 + 0x80) == 0x17)) &&
            ((param_5 == 0 ||
              ((*(int *)(param_5 + 0x80) == 0x14 || (param_2 = param_5, *(int *)(param_5 + 0x80) == 0x17))
              )))) {
            if ((param_3 - 1U == 0) || (uVar4 = param_3 - 1U, param_3 != 2)) {
                uVar4 = 0;
            }
        }
        else {
            uVar4 = 0;
            plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,param_4,0);
            uVar2 = 0;
            if ((plVar3 != (longlong *)0x0) &&
                (((iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3), uVar2 = uVar4, iVar1 != 0 &&
                                                                                 (plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,param_4,0),
                                                                                         plVar3 != (longlong *)0x0)) && (-1 < *(int *)(param_2 + 0x35f8))))) {
                uVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
            }
            uVar4 = uVar2;
            if ((param_3 != 1) && (uVar4 = 0, param_3 == 2)) {
                uVar4 = (uint)(uVar2 == 0);
            }
        }
        return uVar4;
    }
    return 0;
}



bool FUN_1404a0760(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
    int iVar1;
    longlong *plVar2;
    bool bVar3;
    bool bVar4;

    if (DAT_140c65980 == 0) {
        return false;
    }
    plVar2 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    bVar4 = false;
    if ((plVar2 != (longlong *)0x0) &&
        (iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2), bVar4 = false, iVar1 != 0)) {
        if (param_5 == 0) {
            bVar4 = true;
        }
        else {
            iVar1 = (**(code **)(*plVar2 + 0x170))(plVar2);
            bVar4 = iVar1 == param_5;
        }
    }
    bVar3 = bVar4;
    if ((param_3 != 1) && (bVar3 = false, param_3 == 2)) {
        return bVar4 == false;
    }
    return bVar3;
}



bool FUN_1404a0810(undefined8 param_1,longlong param_2,int param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    bool bVar5;
    bool bVar6;
    longlong local_18;

    if (DAT_140c65980 == 0) {
        return false;
    }
    plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    bVar6 = false;
    if ((plVar4 != (longlong *)0x0) &&
        (iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4), bVar6 = false, iVar3 != 0)) {
        lVar1 = *(longlong *)(param_2 + 0x3760);
        local_18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_4) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
            local_18 = lVar1;
        }
        bVar6 = local_18 != lVar1;
    }
    bVar5 = bVar6;
    if ((param_3 != 1) && (bVar5 = false, param_3 == 2)) {
        bVar5 = bVar6 == false;
    }
    return bVar5;
}



bool FUN_1404a08f0(undefined8 param_1,longlong param_2,int param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    bool bVar5;
    bool bVar6;
    longlong local_18;

    if (DAT_140c65980 == (longlong *)0x0) {
        return false;
    }
    plVar4 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,param_4,0);
    bVar6 = false;
    if ((plVar4 != (longlong *)0x0) &&
        (iVar3 = (**(code **)(*plVar4 + 0x68))(plVar4), bVar6 = false, iVar3 != 0)) {
        lVar1 = *(longlong *)(param_2 + 0x3780);
        local_18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_4) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
            local_18 = lVar1;
        }
        bVar6 = local_18 != lVar1;
    }
    bVar5 = bVar6;
    if ((param_3 != 1) && (bVar5 = false, param_3 == 2)) {
        bVar5 = bVar6 == false;
    }
    return bVar5;
}



undefined8 FUN_1404a09d0(void)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined4 in_R9D;

    if (DAT_140c65980 == (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,in_R9D,0);
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
        if (iVar1 != 0) {
            plVar2 = (longlong *)(**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,in_R9D,0);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x98))(plVar2);
            }
        }
    }
    uVar3 = FUN_1404a2090();
    return uVar3;
}



bool FUN_1404a0b70(undefined8 param_1,int param_2,undefined4 param_3)

{
    longlong lVar1;
    bool bVar2;
    bool bVar3;

    if (DAT_140c65980 == 0) {
        return false;
    }
    lVar1 = FUN_140498a40(DAT_140c65980,param_3,0);
    bVar3 = false;
    if (lVar1 != 0) {
        bVar3 = *(int *)(lVar1 + 0x1d0) == 1;
    }
    bVar2 = bVar3;
    if ((param_2 != 1) && (bVar2 = false, param_2 == 2)) {
        return bVar3 == false;
    }
    return bVar2;
}



uint FUN_1404a0bf0(undefined8 param_1,int param_2,undefined4 param_3,uint param_4)

{
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    uint uVar4;

    if (DAT_140c65980 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x40))(DAT_140c65980,param_3,0);
        uVar2 = 0;
        if (((plVar3 != (longlong *)0x0) &&
             (iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3), uVar2 = 0, iVar1 != 0)) &&
            (plVar3 = (longlong *)(**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,param_3,0),
                    plVar3 != (longlong *)0x0)) {
            uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3);
            uVar2 = uVar2 & param_4;
        }
        uVar4 = uVar2;
        if ((param_2 != 1) && (uVar4 = 0, param_2 == 2)) {
            uVar4 = (uint)(uVar2 == 0);
        }
        return uVar4;
    }
    return 0;
}



undefined8
FUN_1404a0cb0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
    undefined4 uVar1;
    undefined8 uVar2;

    if (((DAT_140c65980 != 0) && (param_2 != 0)) &&
        ((*(int *)(param_2 + 0x80) == 0x14 || (*(int *)(param_2 + 0x80) == 0x17)))) {
        uVar1 = FUN_1405f68f0(param_1,param_4);
        uVar2 = FUN_1404a2090(param_1,param_3,uVar1,param_5);
        return uVar2;
    }
    return 0;
}



bool FUN_1404a0e10(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    uint uVar1;
    bool bVar2;
    bool bVar3;

    if (param_2 == 0) {
        return false;
    }
    uVar1 = FUN_14049bdc0(param_4);
    bVar3 = (*(uint *)(param_2 + 0x114) & uVar1) != 0;
    bVar2 = bVar3;
    if ((param_3 != 1) && (bVar2 = false, param_3 == 2)) {
        return !bVar3;
    }
    return bVar2;
}



undefined8 FUN_1404a1070(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((param_2 != 0) &&
        (((*(int *)(param_2 + 0x80) == 0x14 || (*(int *)(param_2 + 0x80) == 0x17)) && (param_4 != 0))))
    {
        lVar1 = FUN_1405b15c0(&DAT_140c7dfb0,*(undefined4 *)(param_4 + 0x172c));
        if (lVar1 != 0) {
            uVar2 = FUN_1404a2090();
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_1404a10e0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined4 local_18 [2];
    undefined8 uStack16;

    if ((param_2 == 0) ||
        ((((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17)) || (param_4 == 0))
          || (lVar4 = FUN_1405b15c0(&DAT_140c7dfb0), lVar2 = DAT_140c659f0, lVar4 == 0)))) {
        return 0;
    }
    local_18[0] = *(undefined4 *)(lVar4 + 8);
    uStack16 = *(undefined8 *)(lVar4 + 0x20);
    uVar5 = (**(code **)(DAT_140c659f0 + 0x1e0))(local_18);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar2 + 0x1d8) + (uVar5 % *(ulonglong *)(lVar2 + 0x1d0)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1404a11a1:
            if ((param_3 == 1) || (param_3 != 2)) {
                LAB_1404a11a9:
                uVar6 = 0;
            }
            else {
                LAB_1404a11d0:
                uVar6 = 1;
            }
            return uVar6;
        }
        if ((uVar5 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x1e8))(local_18,puVar1 + 2), iVar3 != 0)) {
            if ((puVar1 + 4 != (ulonglong *)0x0) && (puVar1[4] != 0)) {
                if (param_3 != 1) goto LAB_1404a11a9;
                goto LAB_1404a11d0;
            }
            goto LAB_1404a11a1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



ulonglong FUN_1404a1370(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
    bool bVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    float fVar5;

    if ((param_2 != 0) && (param_4 != 0)) {
        uVar2 = FUN_1402081a0();
        if (uVar2 != 0) {
            if (*(int *)(&DAT_000015ac + param_4) == 0) {
                iVar4 = 1;
            }
            else {
                if (*(int *)(&DAT_000015ac + param_4) != 1) {
                    return 0;
                }
                iVar4 = 2;
            }
            if ((DAT_140dc30b8 & 1) == 0) {
                DAT_140dc30b8 = DAT_140dc30b8 | 1;
                lVar3 = FUN_140200220();
                if (lVar3 == 0) {
                    DAT_140dc30bc = 0;
                }
                else {
                    DAT_140dc30bc = *(int *)(lVar3 + 8);
                }
            }
            if ((DAT_140dc30b8 & 2) == 0) {
                DAT_140dc30b8 = DAT_140dc30b8 | 2;
                if (DAT_140dc30bc == 2) {
                    DAT_140dc30c0 = 0x18;
                }
                else {
                    DAT_140dc30c0 = (DAT_140dc30bc == 1) + 0x16;
                }
            }
            fVar5 = (float)FUN_140466520(param_2,DAT_140dc30c0);
            bVar1 = (float)(ulonglong)*(uint *)(uVar2 + 0xc + (longlong)iVar4 * 4) <= fVar5;
            uVar2 = (ulonglong)bVar1;
            if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
                uVar2 = (ulonglong)!bVar1;
            }
        }
        return uVar2;
    }
    return 0;
}



bool FUN_1404a14d0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    longlong lVar2;
    bool bVar3;
    int iVar4;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        return false;
    }
    lVar2 = FUN_140224d00(param_4);
    iVar4 = 0;
    if (lVar2 != 0) {
        iVar4 = (*(int *)(lVar2 + 8) != 0) + 1;
    }
    iVar1 = FUN_1403a9c40(DAT_140c65898,param_4);
    bVar3 = iVar1 == iVar4;
    if ((param_3 != 1) && (bVar3 = false, param_3 == 2)) {
        return iVar1 != iVar4;
    }
    return bVar3;
}



ulonglong FUN_1404a1580(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1404a7f50(DAT_140c659b0,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



ulonglong FUN_1404a15d0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1404a80b0(DAT_140c659b0,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



ulonglong FUN_1404a1620(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1403d2140(DAT_140c65898,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



undefined8 FUN_1404a1670(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;

    if ((param_2 != 0) && ((*(int *)(param_2 + 0x80) == 0x14 || (*(int *)(param_2 + 0x80) == 0x17))))
    {
        FUN_1403d2140(DAT_140c65898,param_4);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



ulonglong FUN_1404a1790(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1403c16e0(param_1,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



ulonglong FUN_1404a17e0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1403b91d0(param_1,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



ulonglong FUN_1404a1830(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1403d4080(DAT_140c65898 + 0x6300,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



undefined8 FUN_1404a1890(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    bool bVar2;

    if (((param_2 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (bVar2 = *(int *)(param_2 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8), bVar2)) {
        FUN_1403fa980(bVar2,param_4);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



undefined8 FUN_1404a18f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    bool bVar2;

    if (((param_2 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (bVar2 = *(int *)(param_2 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8), bVar2)) {
        FUN_1404d6a60(bVar2,param_4);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



ulonglong FUN_1404a1950(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong local_res8;

    lVar4 = DAT_140c65970;
    if (*(longlong *)(DAT_140c65970 + 0x58) == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65970 + 0x58) + 0x10);
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
    if ((local_res8 == lVar1) ||
        (plVar3 = *(longlong **)(local_res8 + 0x28), plVar3 == (longlong *)0x0)) {
        return 0;
    }
    if (*(int *)(DAT_140c65970 + 8) == 0) {
        iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (iVar5 == 0) {
            return 0;
        }
        iVar5 = *(int *)(*(longlong *)plVar3[6] + 0xc);
        if (iVar5 == 0) {
            lVar4 = *(longlong *)(lVar4 + 0x68);
            uVar6 = *(uint *)(*(longlong *)plVar3[6] + 0x14);
            local_res8 = lVar4;
            lVar1 = *(longlong *)(lVar4 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < uVar6) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar4) || (uVar6 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar4;
            }
            return (ulonglong)(local_res8 != lVar4);
        }
        if (iVar5 - 4U < 4) {
            uVar6 = (**(code **)(*plVar3 + 0x58))(plVar3);
            return (ulonglong)(uVar6 & 1);
        }
    }
    // WARNING: Could not recover jumptable at 0x0001404a1a87. Too many branches
    // WARNING: Treating indirect jump as call
    uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3);
    return uVar7;
}



int FUN_1404a1aa0(undefined8 param_1,uint param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong local_res8;

    if (param_2 == 0) {
        lVar6 = *(longlong *)(DAT_140c65970 + 0x58);
    }
    else {
        lVar6 = *(longlong *)(DAT_140c65970 + 0x40);
        local_res8 = lVar6;
        lVar4 = *(longlong *)(lVar6 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < param_2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res8 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res8 == lVar6) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar6;
        }
        if (local_res8 == lVar6) {
            return 0;
        }
        lVar6 = *(longlong *)(local_res8 + 0x28);
    }
    if (lVar6 == 0) {
        return 0;
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    iVar5 = 0;
    lVar4 = *(longlong *)(lVar6 + 0x10);
    while (lVar4 != lVar6) {
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x38))();
        if ((iVar2 != 0) &&
            ((param_3 != 0 ||
              ((*(byte *)(**(longlong **)(*(longlong *)(lVar4 + 0x28) + 0x30) + 0x34) & 0x40) == 0)))) {
            iVar5 = iVar5 + 1;
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
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
    }
    return iVar5;
}



undefined8 * FUN_1404a1be0(undefined8 *param_1)

{
    undefined *puVar1;
    undefined2 *puVar2;

    *param_1 = &PTR_FUN_140b67e20;
    param_1[1] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[4] = 0;
    param_1[3] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)(param_1[3] + 0x10) = param_1[3];
    *(undefined8 *)(param_1[3] + 0x18) = param_1[3];
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0x128;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[10] = puVar2;
    param_1[0xb] = puVar2;
    param_1[0xc] = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    FUN_14001c480(param_1 + 9,&DAT_140b7b704,&DAT_140b7b704);
    return param_1;
}



void FUN_1404a1ca0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    bool bVar3;
    int iVar4;
    ulonglong uVar5;
    int *piVar6;
    ulonglong uVar7;
    uint uVar8;
    bool bVar9;
    undefined auStack120 [32];
    undefined4 local_58 [2];
    int local_50 [4];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    lVar1 = *(longlong *)(param_1 + 8);
    local_58[0] = param_3;
    uVar5 = (**(code **)(lVar1 + 0x18))(local_58);
    for (puVar2 = *(ulonglong **)
            (*(longlong *)(lVar1 + 0x10) + (uVar5 % *(ulonglong *)(lVar1 + 8)) * 8);
         puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
        if ((uVar5 == *puVar2) && (iVar4 = (**(code **)(lVar1 + 0x20))(local_58), iVar4 != 0)) {
            if (puVar2 + 3 != (ulonglong *)0x0) {
                uVar5 = puVar2[3];
                *(undefined8 *)(param_1 + 0x38) = param_2;
                *(undefined4 *)(param_1 + 0x30) = local_58[0];
                bVar9 = (*(byte *)(uVar5 + 4) & 1) == 0;
                uVar7 = 0;
                goto LAB_1404a1d50;
            }
            break;
        }
    }
    goto LAB_1404a1d07;
    while( true ) {
        iVar4 = FUN_1404a2100(param_1);
        local_50[uVar7] = iVar4;
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        if (*(int *)(param_1 + 0x6c) == 0) {
            if (bVar9) {
                if (iVar4 == 0) break;
            }
            else if (iVar4 != 0) break;
        }
        if (2 < uVar8) break;
        LAB_1404a1d50:
        if (*(longlong *)(uVar5 + 8 + uVar7 * 8) == 0) break;
    }
    bVar3 = false;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (bVar9) {
        bVar9 = true;
        if ((int)uVar7 != 0) {
            piVar6 = local_50;
            do {
                if ((bVar9) && (*piVar6 != 0)) {
                    bVar9 = true;
                }
                else {
                    bVar9 = false;
                }
                piVar6 = piVar6 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
    }
    else if ((int)uVar7 != 0) {
        piVar6 = local_50;
        do {
            if ((bVar3) || (*piVar6 != 0)) {
                bVar3 = true;
            }
            piVar6 = piVar6 + 1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    LAB_1404a1d07:
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack120);
    return;
}



int FUN_1404a1e10(longlong param_1,longlong *param_2,undefined4 param_3)

{
    wchar_t wVar1;
    ulonglong *puVar2;
    undefined2 *puVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    wchar_t *pwVar7;
    undefined2 *puVar8;
    undefined4 local_res18 [4];
    undefined local_38 [8];
    longlong local_30;

    lVar6 = *(longlong *)(param_1 + 8);
    local_res18[0] = param_3;
    uVar5 = (**(code **)(lVar6 + 0x18))(local_res18);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar6 + 0x10) + (uVar5 % *(ulonglong *)(lVar6 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar5 == *puVar2) &&
            (iVar4 = (**(code **)(lVar6 + 0x20))(local_res18,puVar2 + 2), iVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar5 = puVar2[3];
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 1;
    FUN_14001c480(param_1 + 0x48,&DAT_140b7b704,&DAT_140b7b704);
    pwVar7 = L"Client check\n";
    if (*(int *)(param_1 + 0x70) != 0) {
        pwVar7 = L"Server check\n";
    }
    lVar6 = 0;
    wVar1 = *pwVar7;
    while (wVar1 != L'\0') {
        lVar6 = lVar6 + 1;
        wVar1 = pwVar7[lVar6];
    }
    FUN_14001c310(param_1 + 0x48,pwVar7,pwVar7 + lVar6);
    puVar3 = *(undefined2 **)(*param_2 + 0x10);
    puVar8 = &DAT_140b7b704;
    if (puVar3 != (undefined2 *)0x0) {
        puVar8 = puVar3;
    }
    lVar6 = FUN_14018efa0(local_38,L"Evaluating (%d) for (%s): \n",*(undefined4 *)(*param_2 + 8),
                          puVar8);
    FUN_14001c310(param_1 + 0x48,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    lVar6 = FUN_14018efa0(local_38,L"Prereq Id (%d)",local_res18[0]);
    FUN_14001c310(param_1 + 0x48,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pwVar7 = L"  AND\n";
    if ((*(byte *)(uVar5 + 4) & 1) != 0) {
        pwVar7 = L"  OR\n";
    }
    lVar6 = 0;
    wVar1 = *pwVar7;
    while (wVar1 != L'\0') {
        lVar6 = lVar6 + 1;
        wVar1 = pwVar7[lVar6];
    }
    FUN_14001c310(param_1 + 0x48,pwVar7,pwVar7 + lVar6);
    iVar4 = FUN_1404a1ca0(param_1,param_2,local_res18[0]);
    pwVar7 = L"FAIL";
    if (iVar4 != 0) {
        pwVar7 = L"PASS";
    }
    lVar6 = FUN_14018efa0(local_38,L"FINAL RESULT: %s\n",pwVar7);
    FUN_14001c310(param_1 + 0x48,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return iVar4;
}



bool FUN_1404a2010(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   undefined8 param_5,undefined4 param_6)

{
    switch(param_6) {
        case 1:
            if (param_3 == param_4) {
                return true;
            }
            break;
        case 2:
            if (param_3 != param_4) {
                return true;
            }
            break;
        case 3:
            return param_4 < param_3;
        case 4:
            return param_4 <= param_3;
        case 5:
            return param_3 < param_4;
        case 6:
            return param_3 <= param_4;
    }
    return false;
}



bool FUN_1404a2090(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4)

{
    switch(param_2) {
        case 1:
            return param_3 == param_4;
        case 2:
            return param_3 != param_4;
        case 3:
            return param_4 < param_3;
        case 4:
            return param_4 <= param_3;
        case 5:
            return param_3 < param_4;
        case 6:
            return param_3 <= param_4;
        default:
            return false;
    }
}


/*
Unable to decompile 'FUN_1404a2100'
Cause: Exception while decompiling 1404a2100: process: timeout

*/


undefined8
FUN_1404a4cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              undefined8 param_5,uint param_6)

{
    uint uVar1;
    undefined8 uVar2;
    float fVar3;
    float fVar4;

    if (param_4 == (longlong *)0x0) {
        return 0;
    }
    uVar1 = (**(code **)(*param_4 + 0x70))(param_4);
    fVar3 = (float)(ulonglong)param_6;
    fVar4 = (float)(ulonglong)uVar1 * 100.0;
    uVar1 = (**(code **)(*param_4 + 0x78))(param_4);
    uVar2 = FUN_1404a2010((float)(ulonglong)uVar1,param_2,fVar4 / (float)(ulonglong)uVar1,fVar3);
    return uVar2;
}



undefined8
FUN_1404a4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              undefined8 param_5,uint param_6)

{
    uint uVar1;
    undefined8 uVar2;
    float fVar3;
    float fVar4;

    if (param_4 == (longlong *)0x0) {
        return 0;
    }
    uVar1 = (**(code **)(*param_4 + 0x40))(param_4);
    fVar3 = (float)(ulonglong)param_6;
    fVar4 = (float)(ulonglong)uVar1 * 100.0;
    uVar1 = (**(code **)(*param_4 + 0x48))(param_4);
    uVar2 = FUN_1404a2010((float)(ulonglong)uVar1,param_2,fVar4 / (float)(ulonglong)uVar1,fVar3);
    return uVar2;
}



undefined8
FUN_1404a4e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
              undefined4 param_5_00,undefined4 param_6,uint param_5)

{
    undefined8 uVar1;
    float fVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    if (param_4 == 0) {
        return 0;
    }
    fVar2 = (float)FUN_140466520(param_4,param_6,param_5_00,param_6,
                                 CONCAT412(in_XMM7_Dd,
                                           CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                                 CONCAT412(in_XMM6_Dd,
                                           CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    fVar4 = (float)(ulonglong)param_5;
    fVar2 = fVar2 * 100.0;
    fVar3 = (float)FUN_1404667c0(param_4,param_6);
    uVar1 = FUN_1404a2010(fVar3,param_2,fVar2 / fVar3,fVar4);
    return uVar1;
}



bool FUN_1404a4ec0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    bool bVar4;

    if (param_2 == 0) {
        return false;
    }
    lVar1 = *(longlong *)(param_2 + 0x15c8);
    bVar2 = false;
    do {
        bVar4 = false;
        if (lVar1 == 0) {
            LAB_1404a4f19:
            if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
                return !bVar2;
            }
            return bVar4;
        }
        iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
        if (iVar3 == param_4) {
            bVar2 = true;
            bVar4 = true;
            goto LAB_1404a4f19;
        }
        lVar1 = *(longlong *)(lVar1 + 0x18);
    } while( true );
}



undefined8 FUN_1404a4f60(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        return 0;
    }
    for (lVar1 = *(longlong *)(param_2 + 0x15c8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
        (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
    }
    uVar2 = FUN_1404a2090();
    return uVar2;
}



bool FUN_1404a4fe0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    longlong *plVar1;
    bool bVar2;
    int iVar3;
    bool bVar4;

    if (param_2 == 0) {
        return false;
    }
    plVar1 = *(longlong **)(param_2 + 0x15d0);
    bVar2 = false;
    do {
        bVar4 = false;
        if (plVar1 == (longlong *)0x0) {
            LAB_1404a5038:
            if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
                return !bVar2;
            }
            return bVar4;
        }
        iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
        if (iVar3 == param_4) {
            bVar2 = true;
            bVar4 = true;
            goto LAB_1404a5038;
        }
        plVar1 = (longlong *)plVar1[6];
    } while( true );
}



void FUN_1404a5080(longlong param_1,undefined4 param_2,int param_3)

{
    short *psVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    wchar_t *pwVar5;
    undefined local_38 [8];
    longlong local_30;

    puVar2 = (undefined4 *)FUN_140225e00(param_2);
    if (puVar2 != (undefined4 *)0x0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
            do {
                lVar3 = 0;
                do {
                    psVar1 = &DAT_140b685ba + lVar3;
                    lVar3 = lVar3 + 1;
                } while (*psVar1 != 0);
                FUN_14001c310(param_1 + 0x48,&DAT_140b685b8,&DAT_140b685b8 + lVar3 * 2);
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(param_1 + 0x68));
        }
        pwVar5 = L"FAIL";
        if (param_3 != 0) {
            pwVar5 = L"PASS";
        }
        lVar3 = FUN_14018efa0(local_38,L"- PrereqType Id (%d): %s\n",*puVar2,pwVar5);
        FUN_14001c310(param_1 + 0x48,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
        if (local_30 != 0) {
            FUN_14018b900(local_30,0);
        }
    }
    return;
}



undefined8 FUN_1404a5150(undefined8 param_1,ulonglong param_2)

{
    FUN_1404a5590();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404a5190(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
    int *piVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int *piVar4;
    uint uVar5;
    longlong *plVar6;

    if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
        *param_2 = *param_3;
        uVar5 = 0;
        plVar6 = (longlong *)(param_2 + 2);
        piVar4 = param_3 + 2;
        param_2[1] = param_3[1];
        do {
            if (*piVar4 == 0) {
                return;
            }
            puVar3 = (undefined8 *)FUN_14018b280();
            if (puVar3 != (undefined8 *)0x0) {
                *puVar3 = 0;
                puVar3[1] = 0;
            }
            *plVar6 = (longlong)puVar3;
            uVar5 = uVar5 + 1;
            *(int *)puVar3 = *piVar4;
            *(int *)(*plVar6 + 4) = piVar4[3];
            *(int *)(*plVar6 + 8) = piVar4[6];
            lVar2 = *plVar6;
            piVar1 = piVar4 + 9;
            piVar4 = piVar4 + 1;
            plVar6 = plVar6 + 1;
            *(int *)(lVar2 + 0xc) = *piVar1;
        } while (uVar5 < 3);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404a5240(longlong param_1)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong *plVar3;
    ulonglong *puVar4;
    uint uVar5;
    int iVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 uVar9;
    longlong lVar10;
    ulonglong *puVar11;
    uint uVar12;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c647d0 == 0) {
            iVar6 = FUN_140225760();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c64208 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Prerequisite_140a6c2e0,DAT_140c63858);
    }
    puVar7 = (undefined8 *)FUN_14018b280(0x28);
    if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
    }
    else {
        *puVar7 = 0;
        uVar8 = FUN_1401a40c0(uVar5);
        puVar7[1] = uVar8;
        uVar9 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9,0);
        puVar7[2] = uVar9;
        FUN_1407e4830(uVar9,0,puVar7[1] << 3);
        puVar7[3] = &LAB_1400522d0;
        puVar7[4] = &LAB_1400522e0;
    }
    uVar12 = 0;
    *(undefined8 **)(param_1 + 8) = puVar7;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c647d0 == 0) && (iVar6 = FUN_140225760(), -1 < iVar6)) {
                    lVar10 = (**(code **)(*DAT_140c64208 + 0x20))(DAT_140c64208,uVar12);
                    goto LAB_1404a5379;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_Prerequisite_140a6c2e0,uVar12,DAT_140c63858);
                LAB_1404a5379:
                if (lVar10 != 0) {
                    puVar7 = (undefined8 *)FUN_14018b280(0x20);
                    if (puVar7 == (undefined8 *)0x0) {
                        puVar7 = (undefined8 *)0x0;
                    }
                    else {
                        *puVar7 = 0;
                        puVar7[1] = 0;
                        puVar7[2] = 0;
                        puVar7[3] = 0;
                    }
                    FUN_1404a5190();
                    plVar3 = *(longlong **)(param_1 + 8);
                    if (*plVar3 == plVar3[1]) {
                        FUN_1400290d0(plVar3);
                    }
                    uVar8 = (*(code *)plVar3[3])(puVar7);
                    ppuVar1 = (ulonglong **)(plVar3[2] + (uVar8 % (ulonglong)plVar3[1]) * 8);
                    puVar11 = (ulonglong *)FUN_14018b280(0x20);
                    if (puVar11 != (ulonglong *)0x0) {
                        puVar4 = *ppuVar1;
                        *puVar11 = uVar8;
                        puVar11[1] = (ulonglong)puVar4;
                        uVar2 = *(undefined4 *)puVar7;
                        puVar11[3] = (ulonglong)puVar7;
                        *(undefined4 *)(puVar11 + 2) = uVar2;
                    }
                    *ppuVar1 = puVar11;
                    *plVar3 = *plVar3 + 1;
                }
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
    }
    return 0;
}



ulonglong FUN_1404a5440(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar1 = *(longlong *)(param_1 + 8);
    local_res10[0] = param_2;
    uVar4 = (**(code **)(lVar1 + 0x18))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar1 + 0x10) + (uVar4 % *(ulonglong *)(lVar1 + 8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar2) &&
            (iVar3 = (**(code **)(lVar1 + 0x20))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar2[3];
}



undefined8 FUN_1404a54d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 0x18);
                lVar1 = *(longlong *)(lVar1 + 8);
                if (lVar2 != 0) {
                    FUN_1404a5550(lVar2);
                    FUN_14018b900(lVar2,0);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



void FUN_1404a5550(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;

    puVar1 = (undefined8 *)(param_1 + 8);
    lVar2 = 3;
    do {
        FUN_14018b900(*puVar1,0);
        puVar1 = puVar1 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return;
}



void FUN_1404a5590(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b67e20;
    if (param_1[1] != 0) {
        FUN_1404a54d0();
        lVar1 = param_1[1];
        if (lVar1 != 0) {
            FUN_140019490(lVar1);
            FUN_14018b900(*(undefined8 *)(lVar1 + 0x10),0);
            *(undefined8 *)(lVar1 + 0x10) = 0;
            FUN_14018b900(lVar1,0);
        }
    }
    if (param_1[10] != 0) {
        FUN_14018b900(param_1[10],0);
    }
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404a5620(longlong param_1)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    code *pcVar4;
    undefined4 uVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    uint *puVar9;
    uint *puVar10;
    char *pcVar11;
    char *pcVar12;
    uint uVar13;
    uint *puVar15;
    uint *puVar16;
    bool bVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 uStack84;
    uint *puVar14;

    lVar8 = FUN_140200220(0x1ba);
    if (lVar8 == 0) {
        uVar5 = 500;
    }
    else {
        uVar5 = *(undefined4 *)(lVar8 + 4);
    }
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    lVar8 = FUN_140200220();
    pcVar4 = DAT_140c63838;
    if (lVar8 == 0) {
        fVar19 = 1.0;
    }
    else {
        fVar19 = *(float *)(lVar8 + 0x18);
    }
    puVar16 = (uint *)0x0;
    *(float *)(param_1 + 0x2c) = fVar19 * 0.01;
    uVar6 = 0;
    if (pcVar4 == (code *)0x0) {
        if ((_DAT_140c63b5c == 0) && (iVar7 = FUN_140202e80(), -1 < iVar7)) {
            uVar6 = (**(code **)(*DAT_140c65030 + 0x28))();
        }
    }
    else {
        uVar6 = (*pcVar4)();
    }
    if (uVar6 != 0) {
        fVar19 = 0.001;
        fVar20 = -1.0;
        fVar21 = 0.0;
        puVar14 = puVar16;
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar9 = puVar16;
                if (_DAT_140c63b5c == 0) {
                    iVar7 = FUN_140202e80();
                    if (iVar7 < 0) {
                        puVar9 = (uint *)0x0;
                    }
                    else {
                        puVar9 = (uint *)(**(code **)(*DAT_140c65030 + 0x20))();
                    }
                }
            }
            else {
                puVar9 = (uint *)(*DAT_140c63848)();
            }
            puVar10 = (uint *)FUN_14018b280();
            puVar15 = puVar16;
            if (puVar10 != (uint *)0x0) {
                FUN_1407e4830();
                puVar15 = puVar10;
            }
            *puVar15 = *puVar9;
            puVar15[2] = (uint)(float)(ulonglong)puVar9[4];
            uVar13 = puVar9[5];
            puVar15[3] = uVar13;
            uVar1 = puVar9[6];
            puVar15[4] = uVar1;
            fVar18 = (float)puVar9[3];
            if ((fVar18 != fVar21) && (uVar1 == 4)) {
                fVar18 = (float)(ulonglong)*(uint *)(param_1 + 0x28);
                if ((uVar13 & 1) != 0) {
                    fVar18 = fVar18 * fVar20;
                }
                fVar18 = fVar18 * fVar19;
            }
            puVar15[1] = (uint)fVar18;
            puVar15[5] = puVar9[7];
            puVar15[6] = puVar9[8];
            puVar15[7] = puVar9[9];
            puVar15[10] = puVar9[0xc];
            puVar15[8] = puVar9[10];
            puVar15[0xb] = puVar9[0xd];
            puVar15[9] = puVar9[0xb];
            puVar15[0xc] = puVar9[0xe];
            if ((uVar13 & 4) != 0) {
                puVar15[2] = (uint)((float)puVar15[2] - (float)puVar15[6]);
            }
            pcVar2 = *(char **)(param_1 + 0x10);
            uVar13 = *puVar15;
            bVar17 = true;
            pcVar3 = pcVar2;
            pcVar12 = *(char **)(pcVar2 + 8);
            while (pcVar12 != (char *)0x0) {
                bVar17 = uVar13 < *(uint *)(pcVar12 + 0x20);
                pcVar3 = pcVar12;
                if (bVar17) {
                    pcVar12 = *(char **)(pcVar12 + 0x10);
                }
                else {
                    pcVar12 = *(char **)(pcVar12 + 0x18);
                }
            }
            pcVar12 = pcVar3;
            if (bVar17) {
                if (pcVar3 != *(char **)(pcVar2 + 0x10)) {
                    if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
                        pcVar12 = *(char **)(pcVar3 + 0x18);
                    }
                    else {
                        pcVar12 = *(char **)(pcVar3 + 0x10);
                        if (pcVar12 == (char *)0x0) {
                            pcVar12 = *(char **)(pcVar3 + 8);
                            pcVar11 = pcVar12;
                            if (pcVar3 == *(char **)(pcVar12 + 0x10)) {
                                do {
                                    pcVar12 = *(char **)(pcVar11 + 8);
                                    bVar17 = pcVar11 == *(char **)(pcVar12 + 0x10);
                                    pcVar11 = pcVar12;
                                } while (bVar17);
                            }
                        }
                        else {
                            for (pcVar11 = *(char **)(pcVar12 + 0x18); pcVar11 != (char *)0x0;
                                 pcVar11 = *(char **)(pcVar11 + 0x18)) {
                                pcVar12 = pcVar11;
                            }
                        }
                    }
                    goto LAB_1404a58ad;
                }
                LAB_1404a58b7:
                if ((pcVar3 == pcVar2) || (uVar13 < *(uint *)(pcVar3 + 0x20))) {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack84,uVar13);
                        *(uint **)(lVar8 + 0x28) = puVar15;
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar8;
                    pcVar2 = *(char **)(param_1 + 0x10);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar8;
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar8;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar8;
                    }
                }
                else {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack84,uVar13);
                        *(uint **)(lVar8 + 0x28) = puVar15;
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar8;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 0x10) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar8;
                    }
                }
                *(char **)(lVar8 + 8) = pcVar3;
                *(undefined8 *)(lVar8 + 0x10) = 0;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            }
            else {
                LAB_1404a58ad:
                if (*(uint *)(pcVar12 + 0x20) < uVar13) goto LAB_1404a58b7;
            }
            uVar13 = (int)puVar14 + 1;
            puVar14 = (uint *)(ulonglong)uVar13;
        } while (uVar13 < uVar6);
    }
    return 0;
}



int FUN_1404a59a0(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (DAT_140c659a8 != (longlong *)0x0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x90,0);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_1404a5a30(lVar2);
    }
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar1 < 0) {
        (**(code **)*plVar3)(plVar3,1);
        return iVar1;
    }
    DAT_140c659a8 = plVar3;
    return 0;
}



undefined8 * FUN_1404a5a30(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b78370;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    FUN_140008410(param_1 + 1);
    *param_1 = &PTR_FUN_140b686e0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[8] = 0;
    param_1[7] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    param_1[0xb] = 0;
    param_1[10] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe] = 0;
    param_1[0xd] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xd] + 8) = 0;
    *(undefined8 *)(param_1[0xd] + 0x10) = param_1[0xd];
    *(undefined8 *)(param_1[0xd] + 0x18) = param_1[0xd];
    return param_1;
}



undefined8 FUN_1404a5b10(undefined8 param_1,ulonglong param_2)

{
    FUN_1404a5b50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404a5b50(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b686e0;
    FUN_1404a5ed0();
    FUN_140008410(param_1 + 0xc);
    FUN_14018b900(param_1[0xd],0);
    lVar1 = param_1[10];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 6);
    FUN_14018b900(param_1[7],0);
    FUN_14079d4c0(param_1);
    return;
}



void FUN_1404a5ed0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x38)) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != *(longlong *)(param_1 + 0x38));
    }
    FUN_140008410(param_1 + 0x30);
    FUN_140008410(param_1 + 0x60);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x80),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    return;
}



void FUN_1404a5f90(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar3 = *(longlong *)(param_1 + 0x40);
    while (lVar3 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
        uVar1 = *(undefined4 *)(lVar3 + 0x20);
        lVar2 = *(longlong *)(lVar3 + 0x28);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardRemoved",&DAT_1409e9a5c,uVar1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardRemoveMinimapUnit",&DAT_1409e99fc,
                      uVar1,*(undefined4 *)(lVar2 + 0x18));
        FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
        local_res8 = lVar3;
        FUN_1404a6830(param_1 + 0x30,&local_res8);
        lVar3 = *(longlong *)(param_1 + 0x40);
    }
    return;
}



undefined4 FUN_1404a6070(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659a8 + 0x38);
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
    if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 8);
    }
    return 0xbf800000;
}



float FUN_1404a60e0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659a8 + 0x38);
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
    if ((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) {
        return *(float *)(*(longlong *)(DAT_140c659a8 + 0x88) + (ulonglong)param_2 * 0xc) *
               *(float *)(*(longlong *)(DAT_140c659a8 + 0x80) + (longlong)*(int *)(lVar1 + 4) * 0xc) *
               *(float *)(lVar1 + 0xc) +
               *(float *)(*(longlong *)(DAT_140c659a8 + 0x88) + 4 + (ulonglong)param_2 * 0xc) +
               *(float *)(*(longlong *)(DAT_140c659a8 + 0x80) + 4 + (longlong)*(int *)(lVar1 + 4) * 0xc)
                ;
    }
    return -1.0;
}



undefined8 FUN_1404a6190(undefined8 param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    float *pfVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    float fVar8;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659a8 + 0x38);
    lVar6 = *(longlong *)(lVar1 + 8);
    local_res8 = lVar1;
    lVar7 = lVar6;
    while (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x20) < param_2) {
            lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
            local_res8 = lVar7;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (((local_res8 != lVar1) && (lVar7 = *(longlong *)(local_res8 + 0x28), lVar7 != 0)) &&
        (param_3 < 5)) {
        lVar3 = FUN_14079d570();
        fVar8 = *(float *)(lVar7 + 8);
        if ((*(int *)(lVar7 + 0x20) == 0) && (*(int *)(lVar7 + 0x24) != 0)) {
            fVar8 = *(float *)(lVar7 + 0xc) - fVar8;
        }
        local_res8 = lVar1;
        if (param_3 == 4) {
            while (lVar6 != 0) {
                if (*(uint *)(lVar6 + 0x20) < param_2) {
                    lVar6 = *(longlong *)(lVar6 + 0x18);
                }
                else {
                    local_res8 = lVar6;
                    lVar6 = *(longlong *)(lVar6 + 0x10);
                }
            }
            if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar1;
            }
            if ((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) {
                if (*(int *)(lVar1 + 0x24) != 0) {
                    if (*(float *)(lVar1 + 8) == 0.0) {
                        return 1;
                    }
                    if (*(int *)(lVar1 + 0x24) != 0) {
                        return 0;
                    }
                }
                if (*(float *)(lVar1 + 8) == *(float *)(lVar1 + 0xc)) {
                    return 1;
                }
            }
        }
        else {
            uVar2 = 0;
            pfVar4 = (float *)(lVar3 + 0x1c);
            do {
                uVar5 = 4;
                if ((*pfVar4 == 0.0) ||
                    (uVar5 = uVar2, (fVar8 / *(float *)(lVar7 + 0xc)) * 100.0 <= *pfVar4)) break;
                uVar2 = uVar2 + 1;
                pfVar4 = pfVar4 + 1;
                uVar5 = 4;
            } while (uVar2 < 3);
            if ((uVar2 <= param_3) && (param_3 <= uVar5)) {
                return 1;
            }
        }
    }
    return 0;
}



undefined * FUN_1404a6340(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x68);
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
        return &DAT_1409f0784;
    }
    return *(undefined **)(local_res8 + 0x28);
}



undefined8 FUN_1404a63a0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 *puVar6;
    longlong lVar7;
    uint uVar8;
    longlong local_res8;
    longlong local_res10;
    undefined local_38 [16];

    lVar4 = DAT_140c659a8;
    local_res8 = param_1;
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    uVar8 = 0;
    if (*param_2 != 0) {
        do {
            lVar1 = *(longlong *)(lVar4 + 0x38);
            lVar7 = (ulonglong)uVar8 * 0x34;
            lVar3 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < *(uint *)(lVar7 + *(longlong *)(param_2 + 2))) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar3 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((lVar3 == lVar1) ||
                (*(uint *)(lVar7 + *(longlong *)(param_2 + 2)) < *(uint *)(lVar3 + 0x20))) {
                local_res10 = lVar1;
                plVar5 = &local_res10;
            }
            else {
                local_res8 = lVar3;
                plVar5 = &local_res8;
            }
            if ((*plVar5 == *(longlong *)(lVar4 + 0x38)) ||
                (puVar6 = *(undefined4 **)(*plVar5 + 0x28), puVar6 == (undefined4 *)0x0)) {
                puVar6 = (undefined4 *)FUN_14018b280(0x34);
                FUN_1407e4830(puVar6,0,0x34);
                puVar6[4] = 0xffffffff;
                FUN_140055f80(lVar4 + 0x30,local_38);
            }
            lVar1 = *(longlong *)(param_2 + 2);
            uVar8 = uVar8 + 1;
            *puVar6 = *(undefined4 *)(lVar1 + lVar7);
            puVar6[1] = *(undefined4 *)(lVar1 + 4 + lVar7);
            puVar6[2] = *(undefined4 *)(lVar1 + 8 + lVar7);
            puVar6[3] = *(undefined4 *)(lVar1 + 0xc + lVar7);
            puVar6[4] = *(undefined4 *)(lVar1 + 0x10 + lVar7);
            puVar6[5] = *(undefined4 *)(lVar1 + 0x14 + lVar7);
            puVar6[6] = *(undefined4 *)(lVar1 + 0x18 + lVar7);
            puVar6[7] = *(undefined4 *)(lVar1 + 0x1c + lVar7);
            puVar6[8] = *(undefined4 *)(lVar1 + 0x20 + lVar7);
            puVar6[9] = *(undefined4 *)(lVar1 + 0x24 + lVar7);
            puVar6[10] = *(undefined4 *)(lVar1 + 0x28 + lVar7);
            puVar6[0xb] = *(undefined4 *)(lVar1 + 0x2c + lVar7);
            puVar6[0xc] = *(undefined4 *)(lVar1 + 0x30 + lVar7);
        } while (uVar8 < *param_2);
    }
    FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf10);
    return 0;
}



undefined8 FUN_1404a6560(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong local_res8;
    undefined8 in_stack_ffffffffffffffc8;
    undefined4 uVar8;

    lVar3 = DAT_140c659a8;
    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    local_res8 = param_1;
    if (param_2[1] == 3) {
        FUN_1404a5f90(DAT_140c659a8);
        return 0;
    }
    uVar1 = *param_2;
    lVar4 = FUN_1402030e0(uVar1);
    if (lVar4 == 0) {
        return 0x80004005;
    }
    lVar5 = FUN_14049ade0(lVar3,uVar1);
    if (lVar5 == 0) {
        uVar6 = 0x80004005;
    }
    else {
        uVar2 = param_2[1];
        if (uVar2 == 0) {
            uVar7 = FUN_1404a6340(lVar3);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardEnabled",&DAT_1409e9964,uVar1,
                          uVar7);
            uVar7 = uVar7 & 0xffffffff00000000;
            FUN_140437a10(DAT_140c658d8,0x6a,0,0,uVar7,0,1);
            if ((*(int *)(lVar5 + 0x20) != 0) && ((*(uint *)(lVar4 + 0x14) & 8) != 0)) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardShowMinimapUnit",&DAT_1409e9a44
                        ,uVar1,uVar7 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar5 + 0x18),
                              *(uint *)(lVar4 + 0x14) & 0x10);
            }
        }
        else if (uVar2 == 1) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardRemoved",&DAT_1409e9a5c,uVar1);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HazardRemoveMinimapUnit",&DAT_1409e99fc
                    ,uVar1,CONCAT44(uVar8,*(undefined4 *)(lVar5 + 0x18)));
            lVar4 = *(longlong *)(lVar3 + 0x38);
            local_res8 = lVar4;
            lVar5 = *(longlong *)(lVar4 + 8);
            while (lVar5 != 0) {
                if (*(uint *)(lVar5 + 0x20) < uVar1) {
                    lVar5 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    local_res8 = lVar5;
                    lVar5 = *(longlong *)(lVar5 + 0x10);
                }
            }
            if ((local_res8 == lVar4) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar4;
            }
            lVar5 = local_res8;
            if (local_res8 != lVar4) {
                FUN_14018b900(*(undefined8 *)(local_res8 + 0x28),0);
                local_res8 = lVar5;
                FUN_1404a6830(lVar3 + 0x30,&local_res8);
            }
        }
        else if (uVar2 == 2) {
            FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf10);
        }
        uVar6 = 0;
    }
    return uVar6;
}



undefined8 FUN_1404a67a0(undefined8 param_1,uint *param_2)

{
    longlong lVar1;

    lVar1 = DAT_140c659a8;
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    FUN_1407db590(*(undefined8 *)(DAT_140c659a8 + 0x88),*(undefined8 *)(param_2 + 2),
                  (ulonglong)*param_2 * 0xc);
    FUN_1407db590(*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(param_2 + 6),
                  (ulonglong)param_2[4] * 0xc);
    FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf10);
    return 0;
}



void FUN_1404a6830(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad0c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404a68f6. Too many branches
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



void FUN_1404a6930(void)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x10);
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 8) = 0;
        return;
    }
    return;
}



longlong FUN_1404a6960(void)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x30);
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        return lVar1;
    }
    return 0;
}



int FUN_1404a69a0(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (DAT_140c659b0 != (longlong *)0x0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x450,0);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_1404a6a30(lVar2);
    }
    iVar1 = (**(code **)*plVar3)(plVar3);
    if (iVar1 < 0) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return iVar1;
    }
    DAT_140c659b0 = plVar3;
    return 0;
}



undefined8 * FUN_1404a6a30(undefined8 *param_1)

{
    undefined *puVar1;
    undefined8 *puVar2;
    int iVar3;

    FUN_1404a6b90();
    puVar2 = param_1 + 0x1e;
    iVar3 = 2;
    *param_1 = &PTR_FUN_140b68710;
    param_1[0x1d] = 0;
    do {
        FUN_1404a6d20(puVar2);
        puVar2 = puVar2 + 0x20;
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    puVar1 = (undefined *)FUN_14018b280(0x28);
    param_1[0x80] = 0;
    param_1[0x7f] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x7f] + 8) = 0;
    *(undefined8 *)(param_1[0x7f] + 0x10) = param_1[0x7f];
    *(undefined8 *)(param_1[0x7f] + 0x18) = param_1[0x7f];
    puVar1 = (undefined *)FUN_14018b280(0x28);
    param_1[0x84] = 0;
    param_1[0x83] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x83] + 8) = 0;
    *(undefined8 *)(param_1[0x83] + 0x10) = param_1[0x83];
    *(undefined8 *)(param_1[0x83] + 0x18) = param_1[0x83];
    puVar1 = (undefined *)FUN_14018b280(0x28);
    param_1[0x87] = puVar1;
    param_1[0x88] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x87] + 8) = 0;
    *(undefined8 *)(param_1[0x87] + 0x10) = param_1[0x87];
    *(undefined8 *)(param_1[0x87] + 0x18) = param_1[0x87];
    return param_1;
}



undefined8 * FUN_1404a6b90(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b686f0;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    return param_1;
}



longlong FUN_1404a6d20(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined **)(param_1 + 0x88) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined **)(param_1 + 0xa8) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = *(longlong *)(param_1 + 0xa8);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined **)(param_1 + 200) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x10) = *(longlong *)(param_1 + 200);
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x18) = *(longlong *)(param_1 + 200);
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined **)(param_1 + 0xe8) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
    return param_1;
}



void FUN_1404a6ef0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_140032150(param_1 + 0xe0,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xe8),0);
    FUN_140008410(param_1 + 0xc0);
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_140032150(param_1 + 0xa0,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = *(longlong *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa8),0);
    FUN_140008410(param_1 + 0x80);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    FUN_140008410(param_1 + 0x60);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    FUN_140008410(param_1 + 0x40);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_140008410(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



void FUN_1404a7060(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    *param_1 = &PTR_FUN_140b68710;
    FUN_140008410();
    FUN_140008410(param_1 + 0x86);
    FUN_140008410(param_1 + 0x82);
    FUN_140008410(param_1 + 0x86);
    FUN_14018b900(param_1[0x87],0);
    FUN_140008410(param_1 + 0x82);
    FUN_14018b900(param_1[0x83],0);
    FUN_140008410(param_1 + 0x7e);
    FUN_14018b900(param_1[0x7f],0);
    puVar1 = param_1 + 0x7e;
    iVar2 = 2;
    do {
        puVar1 = puVar1 + -0x20;
        FUN_1404a6ef0(puVar1);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1d] + 8))();
    }
    FUN_1404a9450(param_1);
    return;
}



void FUN_1404a7160(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined4 *puVar3;
    undefined8 *puVar4;
    ulonglong *puVar5;
    longlong lVar6;
    int iVar7;
    undefined8 uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined *puVar11;
    longlong lVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined auStack504 [32];
    undefined4 local_1d8 [2];
    undefined4 local_1d0 [2];
    longlong *local_1c8;
    undefined4 local_1c0 [2];
    longlong *local_1b8;
    undefined4 local_1b0 [2];
    longlong *local_1a8;
    undefined4 local_1a0 [2];
    undefined8 *local_198;
    undefined4 local_190 [2];
    longlong *local_188;
    undefined4 local_180 [2];
    longlong *local_178;
    undefined4 local_170 [2];
    longlong *local_168;
    undefined4 local_160 [2];
    undefined8 *local_158;
    undefined4 local_150 [2];
    longlong *local_148;
    undefined local_140 [16];
    undefined local_130 [16];
    undefined local_120 [16];
    undefined local_110 [16];
    undefined local_100 [16];
    undefined local_f0 [16];
    undefined local_e0 [16];
    undefined local_d0 [16];
    undefined local_c0 [16];
    undefined local_b0 [16];
    undefined local_a0 [16];
    undefined local_90 [16];
    undefined local_80 [16];
    undefined local_70 [16];
    undefined local_60 [16];
    undefined local_50 [16];
    undefined4 local_40;
    undefined4 local_3c;
    longlong *local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    FUN_1404a8d30();
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar12 != *(longlong *)(param_1 + 0x10)) {
        do {
            plVar2 = *(longlong **)(lVar12 + 0x28);
            puVar3 = (undefined4 *)*plVar2;
            iVar7 = puVar3[1];
            if (iVar7 == 0) {
                if ((puVar3[0xe] & 0xfffffffd) == 0) {
                    local_170[0] = *puVar3;
                    local_168 = plVar2;
                    FUN_140055f80(param_1 + 0xf0,local_a0,local_170);
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    FUN_1400293c0(param_1 + 0x150,local_80,local_1d8);
                }
                if ((uint)((undefined4 *)*plVar2)[0xe] < 2) {
                    local_150[0] = *(undefined4 *)*plVar2;
                    local_148 = plVar2;
                    FUN_140055f80(param_1 + 0x1f0,local_50,local_150);
                    puVar11 = local_60;
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    lVar9 = param_1 + 0x250;
                    LAB_1404a7474:
                    FUN_1400293c0(lVar9,puVar11,local_1d8);
                }
            }
            else if (iVar7 == 1) {
                if ((puVar3[0xe] & 0xfffffffd) == 0) {
                    local_1d0[0] = *puVar3;
                    local_1c8 = plVar2;
                    FUN_140055f80(param_1 + 0x130,local_70,local_1d0);
                    local_1c0[0] = *(undefined4 *)*plVar2;
                    local_1d8[0] = ((undefined4 *)*plVar2)[10];
                    local_1b8 = plVar2;
                    uVar8 = FUN_1404a8a10(param_1 + 0x1d0,local_1d8);
                    FUN_140055f80(uVar8,local_130,local_1c0);
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    FUN_1400293c0(param_1 + 0x1b0,local_120,local_1d8);
                }
                if ((uint)((undefined4 *)*plVar2)[0xe] < 2) {
                    local_1b0[0] = *(undefined4 *)*plVar2;
                    local_1a8 = plVar2;
                    FUN_140055f80(param_1 + 0x230,local_100,local_1b0);
                    local_190[0] = *(undefined4 *)*plVar2;
                    local_1d8[0] = ((undefined4 *)*plVar2)[10];
                    local_188 = plVar2;
                    uVar8 = FUN_1404a8a10(param_1 + 0x2d0,local_1d8);
                    FUN_140055f80(uVar8,local_e0,local_190);
                    puVar11 = local_c0;
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    lVar9 = param_1 + 0x2b0;
                    goto LAB_1404a7474;
                }
            }
            else if ((iVar7 == 2) && (puVar4 = (undefined8 *)plVar2[1], puVar4 != (undefined8 *)0x0)) {
                if (((*(uint *)(puVar4 + 5) & 0xfffffffd) == 0) && ((puVar3[0xe] & 0xfffffffd) == 0)) {
                    local_40 = *puVar3;
                    local_38 = plVar2;
                    FUN_140055f80(param_1 + 0x110,local_b0,&local_40);
                    local_160[0] = *(undefined4 *)*puVar4;
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    local_158 = puVar4;
                    uVar8 = FUN_1404a8a10(param_1 + 400,local_1d8);
                    FUN_140055f80(uVar8,local_110,local_160);
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    FUN_1400293c0(param_1 + 0x170,local_140,local_1d8);
                }
                if ((*(uint *)(puVar4 + 5) < 2) && ((uint)((undefined4 *)*plVar2)[0xe] < 2)) {
                    local_180[0] = *(undefined4 *)*plVar2;
                    local_178 = plVar2;
                    FUN_140055f80(param_1 + 0x210,local_f0,local_180);
                    local_1a0[0] = *(undefined4 *)*puVar4;
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    local_198 = puVar4;
                    uVar8 = FUN_1404a8a10(param_1 + 0x290,local_1d8);
                    FUN_140055f80(uVar8,local_90,local_1a0);
                    puVar11 = local_d0;
                    local_1d8[0] = *(undefined4 *)(*plVar2 + 0x28);
                    lVar9 = param_1 + 0x270;
                    goto LAB_1404a7474;
                }
            }
            lVar9 = *(longlong *)(lVar12 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar12 + 8);
                if (lVar12 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar12 = lVar9;
                        lVar9 = *(longlong *)(lVar12 + 8);
                    } while (lVar12 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar12 + 0x18) != lVar9) {
                    lVar12 = lVar9;
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar9 + 0x10); lVar12 = lVar9, lVar6 != 0;
                     lVar6 = *(longlong *)(lVar6 + 0x10)) {
                    lVar9 = lVar6;
                }
            }
        } while (lVar12 != *(longlong *)(param_1 + 0x10));
    }
    pplVar1 = (longlong **)(param_1 + 0xe8);
    uVar14 = 0;
    if (*pplVar1 != (longlong *)0x0) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    iVar7 = FUN_1407129a0(pplVar1);
    if (-1 < iVar7) {
        plVar2 = *pplVar1;
        if ((longlong *)plVar2[6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar2[6] + 8))();
            plVar2[6] = 0;
        }
        lVar12 = DAT_140c63628;
        local_1d8[0] = 0xa6;
        uVar10 = (**(code **)(DAT_140c63628 + 0x298))(local_1d8);
        for (puVar5 = *(ulonglong **)
                (*(longlong *)(lVar12 + 0x290) + (uVar10 % *(ulonglong *)(lVar12 + 0x288)) * 8);
             uVar13 = uVar14, puVar5 != (ulonglong *)0x0; puVar5 = (ulonglong *)puVar5[1]) {
            if ((uVar10 == *puVar5) &&
                (iVar7 = (**(code **)(lVar12 + 0x2a0))(local_1d8,puVar5 + 2), iVar7 != 0)) {
                if ((undefined4 *)((longlong)puVar5 + 0x14) != (undefined4 *)0x0) {
                    local_3c = *(undefined4 *)(puVar5 + 3);
                    uVar13 = *(undefined4 *)((longlong)puVar5 + 0x14);
                    if (1 < *(uint *)((longlong)puVar5 + 0x1c)) {
                        uVar13 = uVar14;
                    }
                }
                break;
            }
        }
        (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,plVar2 + 6,uVar13);
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack504);
    return;
}



undefined8 FUN_1404a75d0(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    char *pcVar2;
    longlong lVar3;
    char *pcVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    longlong lVar11;
    char *pcVar12;
    char *pcVar13;
    ulonglong uVar14;
    bool bVar15;
    undefined8 local_res8;
    longlong local_res20;
    longlong local_78;
    undefined local_70 [16];
    undefined local_60 [32];

    lVar5 = DAT_140c659b0;
    lVar9 = DAT_140c659b0 + 0x3f0;
    FUN_140008410(lVar9);
    FUN_140008410(lVar5 + 0x430);
    FUN_140008410(lVar5 + 0x410);
    lVar1 = DAT_140c65a20;
    uVar14 = 0;
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65a20 + 0x38) + 0x10);
    if (lVar8 != *(longlong *)(DAT_140c65a20 + 0x38)) {
        do {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x18) = 0;
            lVar11 = *(longlong *)(lVar8 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar8 = lVar11;
                        lVar11 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar11) {
                    lVar8 = lVar11;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar11 + 0x10); lVar8 = lVar11, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar11 = lVar3;
                }
            }
        } while (lVar8 != *(longlong *)(lVar1 + 0x38));
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10);
    if (lVar8 != *(longlong *)(lVar1 + 0x38)) {
        do {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x1c) = 0;
            lVar11 = *(longlong *)(lVar8 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar8 = lVar11;
                        lVar11 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar11) {
                    lVar8 = lVar11;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar11 + 0x10); lVar8 = lVar11, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar11 = lVar3;
                }
            }
        } while (lVar8 != *(longlong *)(lVar1 + 0x38));
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x10);
    if (lVar8 != *(longlong *)(lVar1 + 0x38)) {
        do {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x20) = 0;
            lVar11 = *(longlong *)(lVar8 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar8 = lVar11;
                        lVar11 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar11) {
                    lVar8 = lVar11;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar11 + 0x10); lVar8 = lVar11, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar11 = lVar3;
                }
            }
        } while (lVar8 != *(longlong *)(lVar1 + 0x38));
    }
    if (*param_2 != 0) {
        do {
            iVar6 = 0;
            uVar10 = *(uint *)(uVar14 * 8 + *(longlong *)(param_2 + 2));
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                iVar6 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            }
            if ((uVar10 != 0) && (iVar6 != 0)) {
                if (iVar6 == 0xa6) {
                    lVar8 = lVar5 + 0x48;
                }
                else {
                    if (iVar6 != 0xa7) goto LAB_1404a7926;
                    lVar8 = lVar5 + 0x28;
                }
                if (lVar8 != 0) {
                    lVar8 = *(longlong *)(lVar8 + 8);
                    lVar11 = lVar8;
                    lVar1 = *(longlong *)(lVar8 + 8);
                    while (lVar1 != 0) {
                        if (*(uint *)(lVar1 + 0x20) < uVar10) {
                            lVar1 = *(longlong *)(lVar1 + 0x18);
                        }
                        else {
                            lVar11 = lVar1;
                            lVar1 = *(longlong *)(lVar1 + 0x10);
                        }
                    }
                    if ((lVar11 == lVar8) || (uVar10 < *(uint *)(lVar11 + 0x20))) {
                        local_78 = lVar8;
                        plVar7 = &local_78;
                    }
                    else {
                        plVar7 = &local_res20;
                        local_res20 = lVar11;
                    }
                    if ((*plVar7 != lVar8) &&
                        (plVar7 = *(longlong **)(*plVar7 + 0x28), plVar7 != (longlong *)0x0)) {
                        lVar8 = *plVar7;
                        if ((*(int *)(lVar8 + 4) == 1) &&
                            (uVar10 = *(uint *)(uVar14 * 8 + 4 + *(longlong *)(param_2 + 2)),
                                    uVar10 = (uVar10 - (uVar10 >> 1 & 0x5b6db6db)) - (uVar10 >> 2 & 0x9249249),
                                    ((uVar10 >> 3) + uVar10 & 0xc71c71c7) % 0x3f < *(uint *)(lVar8 + 0x2c))) {
                            FUN_140032f50(lVar5 + 0x410,local_70);
                        }
                        else {
                            FUN_1400293c0(lVar9,local_60);
                            FUN_1404cf010();
                        }
                    }
                }
            }
            LAB_1404a7926:
            uVar10 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar10;
        } while (uVar10 < *param_2);
    }
    uVar14 = 0;
    if (param_2[4] != 0) {
        do {
            pcVar2 = *(char **)(lVar5 + 0x438);
            lVar9 = uVar14 * 8;
            uVar10 = *(uint *)(lVar9 + *(longlong *)(param_2 + 6));
            bVar15 = true;
            local_res8 = CONCAT44(*(undefined4 *)(lVar9 + 4 + *(longlong *)(param_2 + 6)),uVar10);
            pcVar4 = pcVar2;
            pcVar13 = *(char **)(pcVar2 + 8);
            while (pcVar13 != (char *)0x0) {
                bVar15 = uVar10 < *(uint *)(pcVar13 + 0x20);
                pcVar4 = pcVar13;
                if (bVar15) {
                    pcVar13 = *(char **)(pcVar13 + 0x10);
                }
                else {
                    pcVar13 = *(char **)(pcVar13 + 0x18);
                }
            }
            pcVar13 = pcVar4;
            if (bVar15) {
                if (pcVar4 != *(char **)(pcVar2 + 0x10)) {
                    if ((*pcVar4 == '\0') && (*(char **)(*(longlong *)(pcVar4 + 8) + 8) == pcVar4)) {
                        pcVar13 = *(char **)(pcVar4 + 0x18);
                    }
                    else {
                        pcVar13 = *(char **)(pcVar4 + 0x10);
                        if (pcVar13 == (char *)0x0) {
                            pcVar13 = *(char **)(pcVar4 + 8);
                            pcVar12 = pcVar13;
                            if (pcVar4 == *(char **)(pcVar13 + 0x10)) {
                                do {
                                    pcVar13 = *(char **)(pcVar12 + 8);
                                    bVar15 = pcVar12 == *(char **)(pcVar13 + 0x10);
                                    pcVar12 = pcVar13;
                                } while (bVar15);
                            }
                        }
                        else {
                            for (pcVar12 = *(char **)(pcVar13 + 0x18); pcVar12 != (char *)0x0;
                                 pcVar12 = *(char **)(pcVar12 + 0x18)) {
                                pcVar13 = pcVar12;
                            }
                        }
                    }
                    goto LAB_1404a7a0d;
                }
                LAB_1404a7a17:
                if ((pcVar4 == pcVar2) || (uVar10 < *(uint *)(pcVar4 + 0x20))) {
                    lVar8 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = local_res8;
                    }
                    *(longlong *)(pcVar4 + 0x10) = lVar8;
                    pcVar2 = *(char **)(lVar5 + 0x438);
                    if (pcVar4 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar8;
                        *(longlong *)(*(longlong *)(lVar5 + 0x438) + 0x18) = lVar8;
                    }
                    else if (pcVar4 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar8;
                    }
                }
                else {
                    lVar8 = FUN_14018b280(0x28);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = local_res8;
                    }
                    *(longlong *)(pcVar4 + 0x18) = lVar8;
                    if (pcVar4 == *(char **)(*(longlong *)(lVar5 + 0x438) + 0x18)) {
                        *(longlong *)(*(longlong *)(lVar5 + 0x438) + 0x18) = lVar8;
                    }
                }
                *(char **)(lVar8 + 8) = pcVar4;
                *(undefined8 *)(lVar8 + 0x10) = 0;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                FUN_1400081c0(lVar8,*(longlong *)(lVar5 + 0x438) + 8);
                *(longlong *)(lVar5 + 0x440) = *(longlong *)(lVar5 + 0x440) + 1;
            }
            else {
                LAB_1404a7a0d:
                if (*(uint *)(pcVar13 + 0x20) < uVar10) goto LAB_1404a7a17;
            }
            iVar6 = FUN_1404a80b0(lVar5,*(undefined4 *)(lVar9 + *(longlong *)(param_2 + 6)));
            if (((iVar6 != 0) &&
                 (lVar9 = FUN_1404a88a0(lVar5,*(undefined4 *)(lVar9 + *(longlong *)(param_2 + 6))),
                         lVar9 != 0)) && (*(undefined8 **)(lVar9 + 8) != *(undefined8 **)(lVar9 + 0x10))) {
                FUN_1404cf010(*(undefined8 *)**(undefined8 **)(lVar9 + 8),6);
            }
            uVar10 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar10;
        } while (uVar10 < param_2[4]);
    }
    return 0;
}



undefined8 FUN_1404a7b30(ulonglong param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    uint uVar9;
    ulonglong local_res8;
    longlong local_res10;
    longlong local_res18;
    undefined local_48 [16];
    undefined **local_38;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    lVar8 = DAT_140c659b0;
    uVar1 = *param_2;
    local_res8 = param_1 & 0xffffffff00000000 | (ulonglong)uVar1;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) {
        uVar4 = 0;
    }
    else {
        uVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    plVar6 = (longlong *)FUN_1404a9b30(lVar8,uVar4,uVar1);
    if (plVar6 == (longlong *)0x0) {
        return 0x80004005;
    }
    if (*(int *)(*plVar6 + 4) == 1) {
        uVar9 = param_2[1];
        uVar9 = (uVar9 - (uVar9 >> 2 & 0x9249249)) - (uVar9 >> 1 & 0x5b6db6db);
        if (((uVar9 >> 3) + uVar9 & 0xc71c71c7) % 0x3f < *(uint *)(*plVar6 + 0x2c)) {
            lVar2 = *(longlong *)(lVar8 + 0x418);
            lVar7 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar7 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((lVar7 == lVar2) || (uVar1 < *(uint *)(lVar7 + 0x20))) {
                local_res8 = (ulonglong)uVar1;
                local_res10 = lVar7;
                FUN_140032b30(lVar8 + 0x410,&local_res18,&local_res10,&local_res8);
                lVar7 = local_res18;
            }
            *(uint *)(lVar7 + 0x24) = param_2[1];
            goto LAB_1404a7cac;
        }
        FUN_140481460(lVar8 + 0x410,&local_res8);
    }
    FUN_1404cf010();
    FUN_1400293c0(lVar8 + 0x3f0,local_48,param_2);
    LAB_1404a7cac:
    local_30 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
    local_2c = 0x21;
    local_38 = &PTR_FUN_140b6f400;
    local_28 = (ulonglong)*(uint *)(*plVar6 + 4);
    iVar5 = FUN_14060af20(&local_38);
    if (((iVar5 != 0) && (lVar8 = FUN_1403d90d0(DAT_140c65898,local_30), lVar8 != 0)) &&
        (lVar8 = FUN_14047dca0(lVar8), lVar8 != 0)) {
        FUN_14060afe0(&local_38,local_30);
    }
    return 0;
}



void FUN_1404a7eb0(undefined8 param_1,undefined4 param_2)

{
    undefined4 uVar1;

    if (*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) {
        uVar1 = 0;
    }
    else {
        uVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    FUN_1404a9b30(param_1,uVar1,param_2);
    return;
}



void FUN_1404a7f00(undefined8 param_1,undefined4 param_2)

{
    undefined4 uVar1;

    if (*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) {
        uVar1 = 0;
    }
    else {
        uVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    FUN_1404a9bb0(param_1,uVar1,param_2);
    return;
}



undefined8 FUN_1404a7f50(longlong param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong local_res8;

    lVar4 = *(longlong *)(param_1 + 0x3f8);
    local_res8 = lVar4;
    lVar1 = *(longlong *)(lVar4 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if (local_res8 != lVar4) {
        return 1;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar4;
    lVar1 = *(longlong *)(lVar4 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if ((local_res8 != lVar4) &&
        (puVar5 = *(undefined8 **)(*(longlong *)(local_res8 + 0x28) + 8), puVar5 != (undefined8 *)0x0))
    {
        uVar3 = FUN_1404a8310(param_1,*(undefined4 *)*puVar5);
        if ((uVar3 != 0) && (lVar4 = FUN_1404a88a0(param_1,*(undefined4 *)*puVar5), lVar4 != 0)) {
            puVar5 = *(undefined8 **)(lVar4 + 8);
            uVar2 = 0;
            while ((puVar5 != *(undefined8 **)(lVar4 + 0x10) && (uVar2 < uVar3))) {
                if (**(uint **)*puVar5 == param_2) {
                    return 1;
                }
                puVar5 = puVar5 + 1;
                uVar2 = uVar2 + 1;
            }
        }
        return 0;
    }
    return 0;
}



ulonglong FUN_1404a80b0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x438);
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
    uVar4 = *(uint *)(local_res8 + 0x24);
    uVar3 = FUN_1404a8430();
    if ((uint)uVar3 == 0) {
        return uVar3;
    }
    uVar4 = (uVar4 - (uVar4 >> 2 & 0x9249249)) - (uVar4 >> 1 & 0x5b6db6db);
    return (ulonglong)((uint)uVar3 <= ((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f);
}



uint FUN_1404a8180(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;

    lVar3 = DAT_140c659b0;
    if (param_2 == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(param_2 + 0x18);
    if (lVar2 == 0) {
        return 0;
    }
    if (*(int *)(lVar2 + 0x7c) != 0) {
        plVar5 = (longlong *)FUN_1404a7eb0(DAT_140c659b0);
        if (plVar5 != (longlong *)0x0) {
            iVar4 = FUN_1404a7f50(lVar3);
            if (iVar4 != 0) {
                return 1;
            }
            if (*(int *)(*plVar5 + 4) != 0) {
                lVar3 = *(longlong *)(lVar3 + 0x418);
                local_res8 = lVar3;
                if (*(longlong *)(lVar3 + 8) != 0) {
                    lVar6 = *(longlong *)(lVar3 + 8);
                    do {
                        if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar2 + 0x7c)) {
                            lVar7 = *(longlong *)(lVar6 + 0x18);
                        }
                        else {
                            lVar7 = *(longlong *)(lVar6 + 0x10);
                            local_res8 = lVar6;
                        }
                        lVar6 = lVar7;
                    } while (lVar7 != 0);
                }
                if ((local_res8 == lVar3) || (*(uint *)(lVar2 + 0x7c) < *(uint *)(local_res8 + 0x20))) {
                    local_res8 = lVar3;
                }
                if (local_res8 != lVar3) {
                    return 1 << ((byte)*(undefined4 *)(param_2 + 0x35f8) & 0x1f) &
                           *(uint *)(local_res8 + 0x24);
                }
            }
        }
        return 0;
    }
    uVar1 = *(uint *)(lVar2 + 0x80);
    if (uVar1 == 0) {
        return 0;
    }
    lVar3 = *(longlong *)(DAT_140c659b0 + 0x438);
    local_res8 = lVar3;
    lVar2 = *(longlong *)(lVar3 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar1) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if (local_res8 == lVar3) {
        return 0;
    }
    return 1 << ((byte)*(undefined4 *)(param_2 + 0x35f8) & 0x1f) & *(uint *)(local_res8 + 0x24);
}



uint FUN_1404a8310(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    uint uVar4;
    longlong lVar5;
    longlong local_res20;

    if (param_2 != 0) {
        if (param_3 == 0) {
            iVar2 = FUN_1404a7f50();
            if (iVar2 != 0) {
                plVar3 = (longlong *)FUN_1404a7eb0(param_1,param_2);
                if (plVar3 == (longlong *)0x0) {
                    return 0;
                }
                return *(uint *)(*plVar3 + 0x2c);
            }
            lVar5 = *(longlong *)(param_1 + 0x418);
            local_res20 = lVar5;
            lVar1 = *(longlong *)(lVar5 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res20 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
        }
        else {
            lVar5 = *(longlong *)(param_1 + 0x438);
            local_res20 = lVar5;
            lVar1 = *(longlong *)(lVar5 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res20 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
        }
        if ((local_res20 == lVar5) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar5;
        }
        if (local_res20 != lVar5) {
            uVar4 = *(uint *)(local_res20 + 0x24);
            uVar4 = (uVar4 - (uVar4 >> 2 & 0x9249249)) - (uVar4 >> 1 & 0x5b6db6db);
            return ((uVar4 >> 3) + uVar4 & 0xc71c71c7) % 0x3f;
        }
    }
    return 0;
}



longlong FUN_1404a8430(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res18;

    if (param_2 != 0) {
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        }
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            if (iVar3 == 0xa6) {
                param_1 = param_1 + 0x68;
            }
            else {
                if (iVar3 != 0xa7) {
                    return 0;
                }
                param_1 = param_1 + 0x88;
            }
            if (param_1 != 0) {
                lVar1 = *(longlong *)(param_1 + 8);
                local_res18 = lVar1;
                lVar2 = *(longlong *)(lVar1 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < param_2) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        local_res18 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
                    local_res18 = lVar1;
                }
                if (local_res18 != lVar1) {
                    return *(longlong *)(*(longlong *)(local_res18 + 0x28) + 0x18) -
                           *(longlong *)(*(longlong *)(local_res18 + 0x28) + 0x10) >> 3;
                }
            }
        }
    }
    return 0;
}



undefined4 FUN_1404a8510(undefined8 param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = DAT_140c659b0;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x1bf0);
    if (param_2 == 2) {
        if (plVar1 != (longlong *)0x0) {
            iVar2 = (**(code **)(*plVar1 + 0x18))();
            if (iVar2 == 0xa6) {
                lVar3 = lVar3 + 0x68;
            }
            else {
                if (iVar2 != 0xa7) {
                    return 0;
                }
                lVar3 = lVar3 + 0x88;
            }
            if (lVar3 != 0) {
                return *(undefined4 *)(lVar3 + 0x10);
            }
        }
    }
    else if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x18))();
        if (iVar2 == 0xa6) {
            lVar3 = lVar3 + 0xf0;
        }
        else {
            if (iVar2 != 0xa7) {
                return 0;
            }
            lVar3 = lVar3 + 0x1f0;
        }
        if (lVar3 != 0) {
            if (param_2 == 0) {
                return *(undefined4 *)(lVar3 + 0x10);
            }
            if (param_2 == 1) {
                return *(undefined4 *)(lVar3 + 0x50);
            }
        }
    }
    return 0;
}



longlong FUN_1404a85e0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;

    lVar3 = DAT_140c659b0;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar2 == 0xa6) {
            lVar3 = lVar3 + 200;
        }
        else {
            if (iVar2 != 0xa7) {
                return 0;
            }
            lVar3 = lVar3 + 0xa8;
        }
        if (lVar3 != 0) {
            lVar3 = *(longlong *)(lVar3 + 8);
            local_res8 = lVar3;
            lVar1 = *(longlong *)(lVar3 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar3;
            }
            if (local_res8 != lVar3) {
                return local_res8 + 0x28;
            }
        }
    }
    return 0;
}



undefined8 FUN_1404a86a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
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
    return *(undefined8 *)(*(longlong *)(local_res8 + 0x28) + 8);
}



longlong FUN_1404a8700(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;

    lVar3 = DAT_140c659b0;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar2 == 0xa6) {
            lVar3 = lVar3 + 0xf0;
        }
        else {
            if (iVar2 != 0xa7) {
                return 0;
            }
            lVar3 = lVar3 + 0x1f0;
        }
        if (lVar3 != 0) {
            lVar3 = *(longlong *)(lVar3 + 0xa8);
            local_res8 = lVar3;
            lVar1 = *(longlong *)(lVar3 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar3;
            }
            if (local_res8 != lVar3) {
                return local_res8 + 0x28;
            }
        }
    }
    return 0;
}



longlong FUN_1404a87d0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;

    lVar3 = DAT_140c659b0;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar2 == 0xa6) {
            lVar3 = lVar3 + 0xf0;
        }
        else {
            if (iVar2 != 0xa7) {
                return 0;
            }
            lVar3 = lVar3 + 0x1f0;
        }
        if (lVar3 != 0) {
            lVar3 = *(longlong *)(lVar3 + 0xe8);
            local_res8 = lVar3;
            lVar1 = *(longlong *)(lVar3 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < param_2) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar3;
            }
            if (local_res8 != lVar3) {
                return local_res8 + 0x28;
            }
        }
    }
    return 0;
}



longlong FUN_1404a88a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res18;

    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar3 == 0xa6) {
            param_1 = param_1 + 0x68;
        }
        else {
            if (iVar3 != 0xa7) {
                return 0;
            }
            param_1 = param_1 + 0x88;
        }
        if (param_1 != 0) {
            lVar1 = *(longlong *)(param_1 + 8);
            local_res18 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < param_2) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res18 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
                local_res18 = lVar1;
            }
            if ((local_res18 != lVar1) && (*(longlong *)(local_res18 + 0x28) != 0)) {
                return *(longlong *)(local_res18 + 0x28) + 8;
            }
        }
    }
    return 0;
}



undefined8 FUN_1404a8960(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;

    lVar1 = DAT_140c659b0;
    lVar3 = FUN_1401fc260(param_2);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x24) != 0)) {
        iVar2 = FUN_1404a7f50(lVar1,param_2);
        if ((iVar2 != 0) && (*(longlong *)(lVar1 + 0xe8) != 0)) {
            uVar4 = FUN_140712a40(*(longlong *)(lVar1 + 0xe8),*(undefined4 *)(lVar3 + 0x24),&LAB_1404a89e0
                    ,lVar1);
            return uVar4;
        }
    }
    return 0x80004005;
}



longlong FUN_1404a8a10(longlong param_1,uint *param_2)

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
        FUN_14048b2a0(local_30,local_58);
        FUN_1404a8b20(param_1,&local_res18,&local_res8,local_38);
        FUN_140008410(local_30);
        FUN_14018b900(local_28,0);
        FUN_140008410(local_58);
        FUN_14018b900(local_50,0);
        local_res8 = local_res18;
    }
    return local_res8 + 0x28;
}



longlong * FUN_1404a8b20(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_1404a8b7a:
            plVar4 = (longlong *)FUN_1404a9e20(param_1,local_18,param_4);
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
                        FUN_14048b2a0(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_1404a9f20(uVar1,param_4);
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
                plVar4 = (longlong *)FUN_1404a9e20(param_1,local_18,param_4);
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
            goto LAB_1404a8b7a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404a9d30(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404a9d30();
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404a8d30(longlong *param_1)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong **pplVar6;
    char *pcVar7;
    ulonglong uVar8;
    char *pcVar9;
    uint uVar10;
    int iVar11;
    uint *puVar12;
    longlong lVar13;
    uint **ppuVar14;
    undefined8 uVar15;
    ulonglong *puVar16;
    char *pcVar17;
    char *pcVar18;
    longlong lVar19;
    uint uVar20;
    int iVar21;
    uint *puVar22;
    bool bVar23;
    uint local_res10 [2];
    uint local_res18;
    ulonglong local_res20;
    uint local_d8;
    undefined4 uStack212;
    uint **local_d0;
    uint local_c8;
    undefined4 uStack196;
    uint **local_c0;
    longlong *local_b8;
    uint **local_b0;
    ulonglong local_a8;
    uint **local_a0;
    uint local_98 [2];
    uint **local_90;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [16];
    undefined local_48 [16];

    uVar20 = 0;
    uVar10 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c645c4 == 0) {
            iVar21 = FUN_1401fc000();
            if (iVar21 < 0) {
                uVar10 = 0;
            }
            else {
                uVar10 = (**(code **)(*DAT_140c64bf0 + 0x28))();
            }
        }
    }
    else {
        uVar10 = (*DAT_140c63838)();
    }
    if (uVar10 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c645c4 == 0) && (iVar21 = FUN_1401fc000(), -1 < iVar21)) {
                    puVar12 = (uint *)(**(code **)(*DAT_140c64bf0 + 0x20))();
                    goto LAB_1404a8df9;
                }
            }
            else {
                puVar12 = (uint *)(*DAT_140c63848)(&PTR_u_Datacube_140a6a0c0,uVar20,DAT_140c63858);
                LAB_1404a8df9:
                if ((puVar12 != (uint *)0x0) && (uVar1 = *puVar12, uVar1 != 0)) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64634 != 0) || (iVar21 = FUN_14024d920(), iVar21 < 0)) goto LAB_1404a8f49;
                        lVar13 = (**(code **)(*DAT_140c64270 + 0x18))();
                    }
                    else {
                        lVar13 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,puVar12[10],DAT_140c63858);
                    }
                    if (lVar13 != 0) {
                        ppuVar14 = (uint **)(**(code **)(*param_1 + 0x10))(param_1);
                        *ppuVar14 = puVar12;
                        local_d8 = uVar1;
                        local_d0 = ppuVar14;
                        FUN_140055f80(param_1 + 1,local_78,&local_d8);
                        uVar2 = (*ppuVar14)[0xe];
                        if ((uVar2 & 0xfffffffd) == 0) {
                            local_c8 = uVar1;
                            local_c0 = ppuVar14;
                            FUN_140055f80(param_1 + 9,local_58,&local_c8);
                            puVar12 = *ppuVar14;
                            if (puVar12[1] == 0) {
                                local_b8 = (longlong *)
                                        ((ulonglong)local_b8 & 0xffffffff00000000 | (ulonglong)*puVar12);
                                local_res10[0] = puVar12[10];
                                local_b0 = ppuVar14;
                                uVar15 = FUN_1404a8a10(param_1 + 0x19,local_res10);
                                FUN_140055f80(uVar15,local_88,&local_b8);
                            }
                        }
                        if (uVar2 < 2) {
                            local_a8 = local_a8 & 0xffffffff00000000 | (ulonglong)uVar1;
                            local_a0 = ppuVar14;
                            FUN_140055f80(param_1 + 5,local_68,&local_a8);
                            puVar12 = *ppuVar14;
                            if (puVar12[1] == 0) {
                                local_98[0] = *puVar12;
                                local_res10[0] = puVar12[10];
                                local_90 = ppuVar14;
                                uVar15 = FUN_1404a8a10(param_1 + 0x15,local_res10);
                                FUN_140055f80(uVar15,local_48,local_98);
                            }
                        }
                    }
                }
            }
            LAB_1404a8f49:
            uVar20 = uVar20 + 1;
        } while (uVar20 < uVar10);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar10 = 0;
        if (_DAT_140c64594 == 0) {
            iVar21 = FUN_1401fc440();
            if (iVar21 < 0) {
                uVar10 = 0;
            }
            else {
                uVar10 = (**(code **)(*DAT_140c63948 + 0x28))();
            }
        }
    }
    else {
        uVar10 = (*DAT_140c63838)();
    }
    local_res10[0] = uVar10;
    local_res18 = 0;
    uVar10 = local_res10[0];
    if (local_res10[0] != 0) {
        do {
            iVar21 = 0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64594 == 0) &&
                    (iVar11 = FUN_1401fc440(), uVar10 = local_res10[0], -1 < iVar11)) {
                    puVar12 = (uint *)(**(code **)(*DAT_140c63948 + 0x20))();
                    goto LAB_1404a9009;
                }
            }
            else {
                puVar12 = (uint *)(*DAT_140c63848)(&PTR_u_DatacubeVolume_140a6a0f8,local_res18,DAT_140c63858
                );
                LAB_1404a9009:
                uVar10 = local_res10[0];
                if ((puVar12 != (uint *)0x0) && (uVar20 = *puVar12, uVar20 != 0)) {
                    ppuVar14 = (uint **)(**(code **)(*param_1 + 0x18))();
                    puVar22 = puVar12 + 4;
                    *(undefined4 *)(ppuVar14 + 5) = 0;
                    lVar13 = 0x10;
                    *ppuVar14 = puVar12;
                    do {
                        uVar10 = *puVar22;
                        if (uVar10 != 0) {
                            uVar3 = param_1[2];
                            uVar8 = uVar3;
                            uVar4 = *(ulonglong *)(uVar3 + 8);
                            while (uVar4 != 0) {
                                if (*(uint *)(uVar4 + 0x20) < uVar10) {
                                    uVar4 = *(ulonglong *)(uVar4 + 0x18);
                                }
                                else {
                                    uVar8 = uVar4;
                                    uVar4 = *(ulonglong *)(uVar4 + 0x10);
                                }
                            }
                            if ((uVar8 == uVar3) || (uVar10 < *(uint *)(uVar8 + 0x20))) {
                                local_a8 = uVar3;
                                puVar16 = &local_a8;
                            }
                            else {
                                puVar16 = &local_res20;
                                local_res20 = uVar8;
                            }
                            if (*puVar16 != uVar3) {
                                plVar5 = *(longlong **)(*puVar16 + 0x28);
                                lVar19 = (longlong)ppuVar14[3] - (longlong)ppuVar14[2] >> 3;
                                if (((int)lVar19 == 0) || (*(int *)(*plVar5 + 0x38) == *(int *)(ppuVar14 + 5))) {
                                    if (lVar19 == 0) {
                                        *(undefined4 *)(ppuVar14 + 5) = *(undefined4 *)(*plVar5 + 0x38);
                                    }
                                    pplVar6 = (longlong **)ppuVar14[3];
                                    local_b8 = plVar5;
                                    if (pplVar6 == (longlong **)ppuVar14[4]) {
                                        FUN_1400b9430(ppuVar14 + 1,pplVar6,&local_b8);
                                    }
                                    else {
                                        if (pplVar6 != (longlong **)0x0) {
                                            *pplVar6 = plVar5;
                                        }
                                        ppuVar14[3] = ppuVar14[3] + 2;
                                    }
                                    plVar5[1] = (longlong)ppuVar14;
                                    iVar21 = iVar21 + 1;
                                }
                            }
                        }
                        puVar22 = puVar22 + 1;
                        lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                    if (iVar21 == 0) {
                        if (ppuVar14[2] != (uint *)0x0) {
                            FUN_14018b900();
                        }
                        FUN_14018b900();
                        uVar10 = local_res10[0];
                    }
                    else {
                        uVar1 = *(uint *)(ppuVar14 + 5);
                        if ((uVar1 & 0xfffffffd) == 0) {
                            pcVar7 = (char *)param_1[0xe];
                            bVar23 = true;
                            pcVar9 = pcVar7;
                            pcVar18 = *(char **)(pcVar7 + 8);
                            while (pcVar18 != (char *)0x0) {
                                bVar23 = uVar20 < *(uint *)(pcVar18 + 0x20);
                                pcVar9 = pcVar18;
                                if (bVar23) {
                                    pcVar18 = *(char **)(pcVar18 + 0x10);
                                }
                                else {
                                    pcVar18 = *(char **)(pcVar18 + 0x18);
                                }
                            }
                            pcVar18 = pcVar9;
                            local_c8 = uVar20;
                            if (bVar23) {
                                if (pcVar9 != *(char **)(pcVar7 + 0x10)) {
                                    if ((*pcVar9 == '\0') && (*(char **)(*(longlong *)(pcVar9 + 8) + 8) == pcVar9)) {
                                        pcVar18 = *(char **)(pcVar9 + 0x18);
                                    }
                                    else {
                                        pcVar18 = *(char **)(pcVar9 + 0x10);
                                        if (pcVar18 == (char *)0x0) {
                                            pcVar18 = *(char **)(pcVar9 + 8);
                                            pcVar17 = pcVar18;
                                            if (pcVar9 == *(char **)(pcVar18 + 0x10)) {
                                                do {
                                                    pcVar18 = *(char **)(pcVar17 + 8);
                                                    bVar23 = pcVar17 == *(char **)(pcVar18 + 0x10);
                                                    pcVar17 = pcVar18;
                                                } while (bVar23);
                                            }
                                        }
                                        else {
                                            for (pcVar17 = *(char **)(pcVar18 + 0x18); pcVar17 != (char *)0x0;
                                                 pcVar17 = *(char **)(pcVar17 + 0x18)) {
                                                pcVar18 = pcVar17;
                                            }
                                        }
                                    }
                                    goto LAB_1404a929d;
                                }
                            }
                            else {
                                LAB_1404a929d:
                                if (uVar20 <= *(uint *)(pcVar18 + 0x20)) goto LAB_1404a92aa;
                            }
                            if ((pcVar9 == pcVar7) || (uVar20 < *(uint *)(pcVar9 + 0x20))) {
                                lVar13 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar13 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar13 + 0x20) = CONCAT44(uStack196,local_c8);
                                    *(uint ***)(lVar13 + 0x28) = ppuVar14;
                                }
                                *(longlong *)(pcVar9 + 0x10) = lVar13;
                                pcVar7 = (char *)param_1[0xe];
                                if (pcVar9 == pcVar7) {
                                    *(longlong *)(pcVar7 + 8) = lVar13;
                                    *(longlong *)(param_1[0xe] + 0x18) = lVar13;
                                }
                                else if (pcVar9 == *(char **)(pcVar7 + 0x10)) {
                                    *(longlong *)(pcVar7 + 0x10) = lVar13;
                                }
                            }
                            else {
                                lVar13 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar13 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar13 + 0x20) = CONCAT44(uStack196,local_c8);
                                    *(uint ***)(lVar13 + 0x28) = ppuVar14;
                                }
                                *(longlong *)(pcVar9 + 0x18) = lVar13;
                                if (pcVar9 == *(char **)(param_1[0xe] + 0x18)) {
                                    *(longlong *)(param_1[0xe] + 0x18) = lVar13;
                                }
                            }
                            *(char **)(lVar13 + 8) = pcVar9;
                            *(undefined8 *)(lVar13 + 0x10) = 0;
                            *(undefined8 *)(lVar13 + 0x18) = 0;
                            FUN_1400081c0();
                            param_1[0xf] = param_1[0xf] + 1;
                        }
                        LAB_1404a92aa:
                        uVar10 = local_res10[0];
                        if (uVar1 < 2) {
                            pcVar7 = (char *)param_1[0x12];
                            bVar23 = true;
                            pcVar9 = pcVar7;
                            pcVar18 = *(char **)(pcVar7 + 8);
                            while (pcVar18 != (char *)0x0) {
                                bVar23 = uVar20 < *(uint *)(pcVar18 + 0x20);
                                pcVar9 = pcVar18;
                                if (bVar23) {
                                    pcVar18 = *(char **)(pcVar18 + 0x10);
                                }
                                else {
                                    pcVar18 = *(char **)(pcVar18 + 0x18);
                                }
                            }
                            pcVar18 = pcVar9;
                            local_d8 = uVar20;
                            if (bVar23) {
                                if (pcVar9 != *(char **)(pcVar7 + 0x10)) {
                                    if ((*pcVar9 == '\0') && (*(char **)(*(longlong *)(pcVar9 + 8) + 8) == pcVar9)) {
                                        pcVar18 = *(char **)(pcVar9 + 0x18);
                                    }
                                    else {
                                        pcVar18 = *(char **)(pcVar9 + 0x10);
                                        if (pcVar18 == (char *)0x0) {
                                            pcVar18 = *(char **)(pcVar9 + 8);
                                            pcVar17 = pcVar18;
                                            if (pcVar9 == *(char **)(pcVar18 + 0x10)) {
                                                do {
                                                    pcVar18 = *(char **)(pcVar17 + 8);
                                                    bVar23 = pcVar17 == *(char **)(pcVar18 + 0x10);
                                                    pcVar17 = pcVar18;
                                                } while (bVar23);
                                            }
                                        }
                                        else {
                                            for (pcVar17 = *(char **)(pcVar18 + 0x18); pcVar17 != (char *)0x0;
                                                 pcVar17 = *(char **)(pcVar17 + 0x18)) {
                                                pcVar18 = pcVar17;
                                            }
                                        }
                                    }
                                    goto LAB_1404a934d;
                                }
                            }
                            else {
                                LAB_1404a934d:
                                if (uVar20 <= *(uint *)(pcVar18 + 0x20)) goto LAB_1404a9414;
                            }
                            if ((pcVar9 == pcVar7) || (uVar20 < *(uint *)(pcVar9 + 0x20))) {
                                lVar13 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar13 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar13 + 0x20) = CONCAT44(uStack212,local_d8);
                                    *(uint ***)(lVar13 + 0x28) = ppuVar14;
                                }
                                *(longlong *)(pcVar9 + 0x10) = lVar13;
                                pcVar7 = (char *)param_1[0x12];
                                if (pcVar9 == pcVar7) {
                                    *(longlong *)(pcVar7 + 8) = lVar13;
                                    *(longlong *)(param_1[0x12] + 0x18) = lVar13;
                                }
                                else if (pcVar9 == *(char **)(pcVar7 + 0x10)) {
                                    *(longlong *)(pcVar7 + 0x10) = lVar13;
                                }
                            }
                            else {
                                lVar13 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar13 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar13 + 0x20) = CONCAT44(uStack212,local_d8);
                                    *(uint ***)(lVar13 + 0x28) = ppuVar14;
                                }
                                *(longlong *)(pcVar9 + 0x18) = lVar13;
                                if (pcVar9 == *(char **)(param_1[0x12] + 0x18)) {
                                    *(longlong *)(param_1[0x12] + 0x18) = lVar13;
                                }
                            }
                            *(char **)(lVar13 + 8) = pcVar9;
                            *(undefined8 *)(lVar13 + 0x10) = 0;
                            *(undefined8 *)(lVar13 + 0x18) = 0;
                            FUN_1400081c0();
                            param_1[0x13] = param_1[0x13] + 1;
                            uVar10 = local_res10[0];
                        }
                    }
                }
            }
            LAB_1404a9414:
            local_res18 = local_res18 + 1;
        } while (local_res18 < uVar10);
    }
    return 0;
}



void FUN_1404a9450(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b686f0;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x28),0);
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410();
    FUN_140008410();
    FUN_140008410();
    lVar4 = *(longlong *)(param_1[0xe] + 0x10);
    if (lVar4 != param_1[0xe]) {
        do {
            FUN_1404a9c40(param_1 + 0x11,lVar4 + 0x20);
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0xe]);
    }
    lVar4 = *(longlong *)(param_1[0x12] + 0x10);
    if (lVar4 != param_1[0x12]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0x12]);
    }
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    if (param_1[0x1b] != 0) {
        lVar4 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar4 != 0) {
            FUN_140032150(param_1 + 0x19,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            if (*(longlong *)(lVar4 + 0x38) != 0) {
                lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 8);
                while (lVar2 != 0) {
                    FUN_1400083b0(lVar4 + 0x28,*(undefined8 *)(lVar2 + 0x18));
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                    FUN_14018b900(lVar2,0);
                    lVar2 = lVar1;
                }
                *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10) = *(longlong *)(lVar4 + 0x30);
                *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x18) = *(longlong *)(lVar4 + 0x30);
                *(undefined8 *)(lVar4 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x30),0);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    FUN_14018b900(param_1[0x1a],0);
    if (param_1[0x17] != 0) {
        lVar4 = *(longlong *)(param_1[0x16] + 8);
        while (lVar4 != 0) {
            FUN_140032150(param_1 + 0x15,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            if (*(longlong *)(lVar4 + 0x38) != 0) {
                lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 8);
                while (lVar2 != 0) {
                    FUN_1400083b0(lVar4 + 0x28,*(undefined8 *)(lVar2 + 0x18));
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                    FUN_14018b900(lVar2,0);
                    lVar2 = lVar1;
                }
                *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x10) = *(longlong *)(lVar4 + 0x30);
                *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x18) = *(longlong *)(lVar4 + 0x30);
                *(undefined8 *)(lVar4 + 0x38) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x30),0);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
        *(undefined8 *)(param_1[0x16] + 8) = 0;
        *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
        param_1[0x17] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_1404a9b30(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res20;

    if ((param_3 != 0) && (param_2 != 0)) {
        if (param_2 == 0xa6) {
            param_1 = param_1 + 0x48;
        }
        else {
            if (param_2 != 0xa7) {
                return 0;
            }
            param_1 = param_1 + 0x28;
        }
        if (param_1 != 0) {
            lVar1 = *(longlong *)(param_1 + 8);
            local_res20 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < param_3) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res20 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res20 == lVar1) || (param_3 < *(uint *)(local_res20 + 0x20))) {
                local_res20 = lVar1;
            }
            if (local_res20 != lVar1) {
                return *(undefined8 *)(local_res20 + 0x28);
            }
        }
    }
    return 0;
}



undefined8 FUN_1404a9bb0(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res20;

    if ((param_3 != 0) && (param_2 != 0)) {
        if (param_2 == 0xa6) {
            param_1 = param_1 + 0x68;
        }
        else {
            if (param_2 != 0xa7) {
                return 0;
            }
            param_1 = param_1 + 0x88;
        }
        if (param_1 != 0) {
            lVar1 = *(longlong *)(param_1 + 8);
            local_res20 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < param_3) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res20 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res20 == lVar1) || (param_3 < *(uint *)(local_res20 + 0x20))) {
                local_res20 = lVar1;
            }
            if (local_res20 != lVar1) {
                return *(undefined8 *)(local_res20 + 0x28);
            }
        }
    }
    return 0;
}



longlong FUN_1404a9c40(longlong param_1,uint *param_2)

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
            if (*param_2 < *(uint *)(lVar2 + 0x20)) {
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
                if (*(uint *)(lVar4 + 0x20) < *param_2) {
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
    FUN_1404a9f60(param_1,local_res18,&local_res8);
    return lVar4;
}



longlong *
FUN_1404a9d30(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_14048b2a0(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1404a9f20(param_1,param_5);
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



char ** FUN_1404a9e20(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404a9e7e;
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
    LAB_1404a9e7e:
    ppcVar1 = (char **)FUN_1404a9d30(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_1404a9f20(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_14048b2a0(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



void FUN_1404a9f60(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1404aa040(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_1404aa040(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad10,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404aa106. Too many branches
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



// WARNING: Removing unreachable block (ram,0x0001404aa2c3)
// WARNING: Removing unreachable block (ram,0x0001404aa2d0)
// WARNING: Removing unreachable block (ram,0x0001404aa2f2)

void FUN_1404aa140(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b68748;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                if (*(longlong *)(lVar2 + 8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 8),0);
                }
                FUN_14018b900(lVar2,0);
            }
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar3 = *(longlong *)(param_1[6] + 0x10);
    if (lVar3 != param_1[6]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar3 = *(longlong *)(param_1[6] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar3 + 0x18));
            lVar2 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar3 = *(longlong *)(param_1[2] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar3 + 0x18));
            lVar2 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8
FUN_1404aa7d0(undefined8 param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
              longlong *param_6)

{
    uint uVar1;
    bool bVar2;
    bool bVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;

    lVar6 = *(longlong *)(DAT_140c659b8 + 0x10);
    local_res8 = lVar6;
    lVar5 = *(longlong *)(lVar6 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar6) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    if (local_res8 == lVar6) {
        lVar6 = 0;
    }
    else {
        lVar6 = *(longlong *)(local_res8 + 0x28);
    }
    bVar2 = false;
    if (lVar6 != 0) {
        plVar4 = *(longlong **)(lVar6 + 8);
        lVar5 = 0;
        bVar2 = false;
        if (plVar4 != *(longlong **)(lVar6 + 0x10)) {
            do {
                uVar1 = *(uint *)(*plVar4 + 8);
                if ((uVar1 <= param_4) &&
                    ((lVar5 == 0 || (*(uint *)(lVar5 + 8) <= uVar1 && uVar1 != *(uint *)(lVar5 + 8))))) {
                    lVar5 = *plVar4;
                }
                plVar4 = plVar4 + 1;
            } while (plVar4 != *(longlong **)(lVar6 + 0x10));
            bVar2 = false;
            if (lVar5 != 0) {
                bVar2 = true;
            }
        }
    }
    lVar6 = *(longlong *)(DAT_140c659b8 + 0x30);
    local_res8 = lVar6;
    lVar5 = *(longlong *)(lVar6 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_3) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar6) || (param_3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    bVar3 = false;
    if ((((local_res8 != lVar6) &&
          (bVar3 = false, *(longlong **)(local_res8 + 0x28) != (longlong *)0x0)) &&
         (lVar6 = **(longlong **)(local_res8 + 0x28), lVar6 != 0)) &&
        (bVar3 = true, param_6 != (longlong *)0x0)) {
        *param_6 = lVar6;
        bVar3 = true;
    }
    if ((!bVar2) && (!bVar3)) {
        return 0;
    }
    return 1;
}



undefined8 * FUN_1404aa930(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b68748;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    return param_1;
}



undefined8 * FUN_1404aa9d0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b68770;
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



int FUN_1404aab00(void)

{
    int iVar1;
    longlong *plVar2;

    if (DAT_140c659c0 != (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_14018b280(0x28);
    if (plVar2 != (longlong *)0x0) {
        plVar2[2] = 0;
        plVar2[1] = 0;
        plVar2[4] = 0;
        plVar2[3] = 0;
        *plVar2 = (longlong)&PTR_FUN_140b68760;
    }
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (-1 < iVar1) {
        DAT_140c659c0 = plVar2;
        return 0;
    }
    (**(code **)*plVar2)(plVar2,1);
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404aaba0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    undefined4 local_res10 [2];

    uVar4 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63dc4 != 0) || (iVar2 = FUN_1401eb000(), iVar2 < 0)) {
            uVar1 = 0;
            goto LAB_1404aac0e;
        }
        uVar1 = (**(code **)(*DAT_140c64d80 + 0x28))();
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_ActionSlotPrereq_140a692c0);
    }
    if (0xc < uVar1) {
        return 0x80004005;
    }
    LAB_1404aac0e:
    local_res10[0] = 0;
    FUN_1404aadc0(param_1 + 8,uVar1,local_res10);
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63dc4 == 0) && (iVar2 = FUN_1401eb000(), -1 < iVar2)) {
                    lVar3 = (**(code **)(*DAT_140c64d80 + 0x20))();
                    goto LAB_1404aac71;
                }
            }
            else {
                lVar3 = (*DAT_140c63848)(&PTR_u_ActionSlotPrereq_140a692c0,uVar4,DAT_140c63858);
                LAB_1404aac71:
                if ((lVar3 != 0) && ((ulonglong)*(uint *)(lVar3 + 4) < *(ulonglong *)(param_1 + 0x10))) {
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(lVar3 + 4) * 4) =
                            *(undefined4 *)(lVar3 + 8);
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}



undefined4 FUN_1404aacb0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
    longlong lVar1;
    ulonglong uVar2;

    if (0x15 < param_3 - 1U) {
        return 4;
    }
    if (param_4 == 0) {
        return 0x17;
    }
    if (*(int *)(param_4 + 0x2ac) != 0) {
        return 0x1e;
    }
    lVar1 = *(longlong *)(param_2 + 8);
    if ((*(longlong *)(param_2 + 0x10) - lVar1 & 0xfffffffffffffffcU) == 0x30) {
        uVar2 = 0;
        do {
            FUN_1407a1440(lVar1,*(undefined4 *)(lVar1 + uVar2 * 4),1);
            lVar1 = FUN_1403acd90(DAT_140c65b70);
            if (lVar1 != 0) {
                if ((uint)uVar2 < 8) {
                    if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0xfc) != 5) {
                        return 0x18;
                    }
                }
                else if (*(int *)(*(longlong *)(lVar1 + 0x70) + 0xfc) == 5) {
                    return 0x18;
                }
            }
            lVar1 = *(longlong *)(param_2 + 8);
            uVar2 = (ulonglong)((uint)uVar2 + 1);
        } while (uVar2 < (ulonglong)(*(longlong *)(param_2 + 0x10) - lVar1 >> 2));
        return 1;
    }
    return 0x16;
}



void FUN_1404aadc0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (param_2 <= (ulonglong)param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar2 = FUN_14018db00(*param_1,param_2,4);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
        uVar3 = uVar3 + 1;
        *(undefined4 *)(lVar2 + -4 + uVar3 * 4) = *param_3;
    }
    if (*param_1 != lVar2) {
        FUN_1407db590(lVar2,*param_1,param_1[1] << 2);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1404aae70(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        return;
    }
    return;
}



longlong FUN_1404aaea0(void)

{
    longlong lVar1;
    undefined *puVar2;

    lVar1 = FUN_14018b280(0x30);
    if (lVar1 != 0) {
        puVar2 = (undefined *)FUN_14018b280(0x30);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined **)(lVar1 + 0x10) = puVar2;
        *puVar2 = 0;
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10) = *(longlong *)(lVar1 + 0x10);
        *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x18) = *(longlong *)(lVar1 + 0x10);
        return lVar1;
    }
    return 0;
}



undefined8 FUN_1404aaf00(void)

{
    int iVar1;
    undefined8 *puVar2;

    if (DAT_140c659c8 != (undefined8 *)0x0) {
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x48);
    if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        FUN_1404aafa0(puVar2);
        *puVar2 = &PTR_LAB_140b68780;
    }
    DAT_140c659c8 = puVar2;
    iVar1 = (**(code **)*puVar2)(puVar2);
    puVar2 = DAT_140c659c8;
    if (iVar1 < 0) {
        if (DAT_140c659c8 != (undefined8 *)0x0) {
            FUN_1404ab910(DAT_140c659c8);
            FUN_14018b900(puVar2,0);
        }
        DAT_140c659c8 = (undefined8 *)0x0;
        return 0x80004005;
    }
    return 0;
}



undefined8 * FUN_1404aafa0(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b68798;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    return param_1;
}



undefined8
FUN_1404ab040(longlong param_1,longlong param_2,uint param_3,int param_4,undefined8 param_5)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res10;
    undefined8 local_18;
    undefined8 local_10;

    if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
        (((*(longlong *)(param_2 + 0x18) != 0 && (*(int *)(*(longlong *)(param_2 + 0x18) + 0x70) != 0))
          && (iVar3 = FUN_1404ab430(param_1,param_3), iVar3 != 0)))) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        local_res10 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_3) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar1) || (param_3 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar1;
        }
        if (((local_res10 != lVar1) && (*(longlong *)(local_res10 + 0x28) != 0)) &&
            (iVar3 = FUN_1404ab150(*(longlong *)(local_res10 + 0x28),param_4), iVar3 != 0)) {
            local_18 = CONCAT44(param_4,param_3);
            local_10 = param_5;
            FUN_1403f4900(DAT_140c65898,0xd7,&local_18);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1404ab150(longlong *param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    if (((param_2 == 0) || (DAT_140c65898 == 0)) || (DAT_140c635f0 == 0)) {
        return 0;
    }
    lVar1 = *param_1;
    param_2 = param_2 - param_2 % *(uint *)(lVar1 + 0xc);
    if ((int)param_2 < 1) {
        return 0;
    }
    uVar4 = *(uint *)(lVar1 + 4);
    lVar3 = 0;
    uVar6 = 0;
    if (uVar4 < 2) {
        iVar2 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,*(undefined4 *)(lVar1 + 8));
        iVar2 = iVar2 - param_2;
    }
    else {
        if (uVar4 != 3) {
            if (uVar4 == 4) {
                if (*(int *)(lVar1 + 8) - 1U < 0xe) {
                    lVar3 = *(longlong *)(DAT_140c65898 + 0x15f0 + (longlong)*(int *)(lVar1 + 8) * 8);
                }
                if (lVar3 - (int)param_2 < 0) {
                    return 0;
                }
            }
            goto LAB_1404ab23e;
        }
        uVar4 = uVar6;
        if (*(uint *)(lVar1 + 8) < 0x13) {
            uVar4 = (uint)*(undefined8 *)
                    (*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xd0 +
                     (longlong)(int)*(uint *)(lVar1 + 8) * 8);
        }
        uVar5 = 0x7fffffff;
        if ((int)uVar4 < 0x7fffffff) {
            uVar5 = uVar4;
        }
        uVar4 = 0x80000000;
        if (-0x80000000 < (int)uVar5) {
            uVar4 = uVar5;
        }
        iVar2 = uVar4 - param_2;
    }
    if (iVar2 < 0) {
        return 0;
    }
    LAB_1404ab23e:
    lVar1 = *param_1;
    uVar4 = *(uint *)(lVar1 + 0x18);
    if ((uVar4 != 0) && (*(int *)(lVar1 + 0x1c) != 0)) {
        uVar5 = uVar6;
        if (uVar4 < 0x13) {
            uVar5 = (uint)*(undefined8 *)
                    (*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xd0 + (longlong)(int)uVar4 * 8);
        }
        uVar4 = 0xffffffff;
        if (uVar5 != 0xffffffff) {
            uVar4 = uVar5;
        }
        if (uVar4 != 0) {
            uVar6 = uVar4;
        }
        if (uVar6 < (param_2 / *(uint *)(lVar1 + 0xc)) * *(int *)(lVar1 + 0x1c)) {
            return 0;
        }
    }
    return 1;
}



ulonglong FUN_1404ab2b0(longlong *param_1)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong lVar5;

    lVar5 = *param_1;
    uVar1 = *(uint *)(lVar5 + 4);
    if (uVar1 < 2) {
        uVar1 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,*(undefined4 *)(lVar5 + 8));
        return (ulonglong)(uVar1 - uVar1 % *(uint *)(*param_1 + 0xc));
    }
    if (uVar1 != 3) {
        if (uVar1 != 4) {
            return 0;
        }
        uVar3 = 0;
        uVar2 = uVar3;
        if (*(int *)(lVar5 + 8) - 1U < 0xe) {
            uVar2 = *(ulonglong *)(DAT_140c65898 + 0x15f0 + (longlong)*(int *)(lVar5 + 8) * 8);
        }
        lVar5 = uVar2 - (longlong)uVar2 % (longlong)(ulonglong)*(uint *)(lVar5 + 0xc);
        if (0 < lVar5) {
            uVar4 = (uint)lVar5;
            uVar1 = 0xffffffff;
            if (uVar4 != 0xffffffff) {
                uVar1 = uVar4;
            }
            if (uVar1 != 0) {
                uVar3 = (ulonglong)uVar1;
            }
        }
        return uVar3;
    }
    uVar2 = 0;
    if (*(uint *)(lVar5 + 8) < 0x13) {
        uVar1 = (uint)*(undefined8 *)
                (*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xd0 +
                 (longlong)(int)*(uint *)(lVar5 + 8) * 8);
    }
    else {
        uVar1 = 0;
    }
    uVar4 = 0xffffffff;
    if (uVar1 != 0xffffffff) {
        uVar4 = uVar1;
    }
    if (uVar4 != 0) {
        uVar2 = (ulonglong)uVar4;
    }
    return (ulonglong)(uint)((int)uVar2 - (int)(uVar2 % (ulonglong)*(uint *)(lVar5 + 0xc)));
}



undefined8 FUN_1404ab3b0(undefined8 *param_1,int param_2)

{
    int iVar1;
    undefined8 local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        iVar1 = FUN_1404ab150();
        if ((iVar1 != 0) && ((~((undefined4 *)*param_1)[8] & 1) == 0)) {
            local_10 = 0;
            local_18 = CONCAT44(param_2,*(undefined4 *)*param_1);
            FUN_1403f4900(DAT_140c65898,0xd7,&local_18);
            return 0;
        }
    }
    return 0x80004005;
}



bool FUN_1404ab430(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        local_res18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar1;
        }
        if (local_res18 != lVar1) {
            return *(longlong *)(local_res18 + 0x28) != 0;
        }
    }
    return false;
}



// WARNING: Removing unreachable block (ram,0x0001404aba93)
// WARNING: Removing unreachable block (ram,0x0001404abaa0)
// WARNING: Removing unreachable block (ram,0x0001404abac2)

void FUN_1404ab910(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b68798;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_140008410(lVar2 + 8);
                FUN_14018b900(*(undefined8 *)(lVar2 + 0x10),0);
                FUN_14018b900(lVar2);
            }
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar3 = *(longlong *)(param_1[6] + 0x10);
    if (lVar3 != param_1[6]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar3 + 0x28),0);
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar3 = *(longlong *)(param_1[6] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar3 + 0x18));
            lVar2 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar3 = *(longlong *)(param_1[2] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar3 + 0x18));
            lVar2 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



longlong FUN_1404abb60(void)

{
    longlong lVar1;
    undefined *puVar2;

    lVar1 = FUN_14018b280(0x28);
    if (lVar1 != 0) {
        puVar2 = (undefined *)FUN_14018b280(0x30);
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined **)(lVar1 + 0x10) = puVar2;
        *puVar2 = 0;
        *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10) = *(longlong *)(lVar1 + 0x10);
        *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x18) = *(longlong *)(lVar1 + 0x10);
        return lVar1;
    }
    return 0;
}



void FUN_1404abbc0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        return;
    }
    return;
}



undefined8 FUN_1404abbf0(void)

{
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;

    if (DAT_140c659d0 == (undefined8 *)0x0) {
        lVar3 = FUN_14018b280(400,0);
        if (lVar3 == 0) {
            DAT_140c659d0 = (undefined8 *)0x0;
        }
        else {
            DAT_140c659d0 = (undefined8 *)FUN_1404abc80(lVar3);
        }
        iVar2 = (**(code **)*DAT_140c659d0)();
        if (iVar2 < 0) {
            FUN_1404ac840();
            puVar1 = DAT_140c659d0;
            if (DAT_140c659d0 != (undefined8 *)0x0) {
                FUN_1404abf70(DAT_140c659d0);
                FUN_14018b900(puVar1,0);
            }
            DAT_140c659d0 = (undefined8 *)0x0;
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 * FUN_1404abc80(undefined8 *param_1)

{
    undefined *puVar1;

    FUN_1404abda0();
    *param_1 = &PTR_FUN_140b687d0;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[0x22] = puVar1;
    param_1[0x23] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0;
    *(undefined8 *)(param_1[0x22] + 0x10) = param_1[0x22];
    *(undefined8 *)(param_1[0x22] + 0x18) = param_1[0x22];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x27] = 0;
    param_1[0x26] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x26] + 8) = 0;
    *(undefined8 *)(param_1[0x26] + 0x10) = param_1[0x26];
    *(undefined8 *)(param_1[0x26] + 0x18) = param_1[0x26];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x2b] = 0;
    param_1[0x2a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x2a] + 8) = 0;
    *(undefined8 *)(param_1[0x2a] + 0x10) = param_1[0x2a];
    *(undefined8 *)(param_1[0x2a] + 0x18) = param_1[0x2a];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x2f] = 0;
    param_1[0x2e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x2e] + 8) = 0;
    *(undefined8 *)(param_1[0x2e] + 0x10) = param_1[0x2e];
    *(undefined8 *)(param_1[0x2e] + 0x18) = param_1[0x2e];
    return param_1;
}



undefined8 * FUN_1404abda0(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b687b0;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1f] = 0;
    param_1[0x1e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
    *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
    return param_1;
}



void FUN_1404abf70(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    FUN_140008410(param_1 + 0x2d);
    FUN_14018b900(param_1[0x2e],0);
    FUN_140008410(param_1 + 0x29);
    FUN_14018b900(param_1[0x2a],0);
    FUN_140008410(param_1 + 0x25);
    FUN_14018b900(param_1[0x26],0);
    FUN_140008410(param_1 + 0x21);
    FUN_14018b900(param_1[0x22],0);
    *param_1 = &PTR_FUN_140b687b0;
    lVar4 = *(longlong *)(param_1[0x16] + 0x10);
    if (lVar4 != param_1[0x16]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x28),0);
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0x16]);
    }
    FUN_140008410(param_1 + 0x15);
    lVar4 = *(longlong *)(param_1[0x1a] + 0x10);
    if (lVar4 != param_1[0x1a]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar4 + 0x28),0);
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[0x1a]);
    }
    if (param_1[0x1b] != 0) {
        lVar4 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x19,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x18) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar3 + 8,*(undefined8 *)(lVar2 + 0x18));
                        lVar1 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar1;
                    }
                    *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x10) = *(longlong *)(lVar3 + 0x10);
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x18) = *(longlong *)(lVar3 + 0x10);
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar3 + 0x10),0);
                FUN_14018b900(lVar3);
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[2]);
    }
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    lVar4 = *(longlong *)(param_1[6] + 0x10);
    if (lVar4 != param_1[6]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x18) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar3 + 8,*(undefined8 *)(lVar2 + 0x18));
                        lVar1 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar1;
                    }
                    *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x10) = *(longlong *)(lVar3 + 0x10);
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x18) = *(longlong *)(lVar3 + 0x10);
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar3 + 0x10),0);
                FUN_14018b900(lVar3);
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
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    if (param_1[0x1f] != 0) {
        lVar4 = *(longlong *)(param_1[0x1e] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x1d,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
        *(undefined8 *)(param_1[0x1e] + 8) = 0;
        *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
        param_1[0x1f] = 0;
    }
    FUN_14018b900(param_1[0x1e],0);
    if (param_1[0x1b] != 0) {
        lVar4 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x19,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    FUN_14018b900(param_1[0x1a],0);
    if (param_1[0x17] != 0) {
        lVar4 = *(longlong *)(param_1[0x16] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x15,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
        *(undefined8 *)(param_1[0x16] + 8) = 0;
        *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
        param_1[0x17] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1404ac000(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    char *pcVar3;
    char *pcVar4;
    longlong lVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong *plVar11;
    undefined8 uVar12;
    char *pcVar13;
    char *pcVar14;
    longlong lVar15;
    uint uVar16;
    bool bVar17;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;
    uint local_58;
    undefined4 uStack84;
    longlong local_50;
    undefined local_48 [16];

    uVar6 = FUN_1404ae270();
    *(undefined4 *)(param_1 + 0x188) = 0;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar15 != *(longlong *)(param_1 + 0x10)) {
        do {
            plVar11 = *(longlong **)(lVar15 + 0x28);
            uVar1 = *(undefined4 *)(*plVar11 + 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar7 = FUN_14024b720(), -1 < iVar7)) {
                    lVar8 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar1);
                    goto LAB_1404ac08b;
                }
                LAB_1404ac096:
                uVar16 = 0;
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar1,DAT_140c63858);
                LAB_1404ac08b:
                if (lVar8 == 0) goto LAB_1404ac096;
                uVar16 = *(uint *)(lVar8 + 0x28);
            }
            lVar8 = *(longlong *)(param_1 + 0x130);
            lVar2 = lVar8;
            lVar10 = *(longlong *)(lVar8 + 8);
            while (lVar10 != 0) {
                if (*(uint *)(lVar10 + 0x20) < uVar16) {
                    lVar10 = *(longlong *)(lVar10 + 0x18);
                }
                else {
                    lVar2 = lVar10;
                    lVar10 = *(longlong *)(lVar10 + 0x10);
                }
            }
            if ((lVar2 == lVar8) || (uVar16 < *(uint *)(lVar2 + 0x20))) {
                local_res18 = lVar8;
                plVar9 = &local_res18;
            }
            else {
                local_res10 = lVar2;
                plVar9 = &local_res10;
            }
            if (*plVar9 == *(longlong *)(param_1 + 0x130)) {
                lVar8 = FUN_14018b280(0x10);
                if (lVar8 == 0) {
                    lVar8 = 0;
                }
                else {
                    uVar12 = FUN_14018b280(0x18);
                    *(undefined8 *)(lVar8 + 8) = uVar12;
                    *(undefined8 *)uVar12 = uVar12;
                    *(longlong *)(*(longlong *)(lVar8 + 8) + 8) = *(longlong *)(lVar8 + 8);
                }
                lVar10 = *(longlong *)(lVar8 + 8);
                plVar9 = (longlong *)FUN_14018b280(0x18);
                if ((longlong **)(plVar9 + 2) != (longlong **)0x0) {
                    plVar9[2] = (longlong)plVar11;
                }
                *plVar9 = lVar10;
                plVar9[1] = *(longlong *)(lVar10 + 8);
                **(longlong ***)(lVar10 + 8) = plVar9;
                *(longlong **)(lVar10 + 8) = plVar9;
                local_58 = uVar16;
                local_50 = lVar8;
                FUN_140055f80(param_1 + 0x128,local_48,&local_58);
            }
            else {
                lVar8 = *(longlong *)(*(longlong *)(*plVar9 + 0x28) + 8);
                plVar9 = (longlong *)FUN_14018b280(0x18);
                if ((longlong **)(plVar9 + 2) != (longlong **)0x0) {
                    plVar9[2] = (longlong)plVar11;
                }
                *plVar9 = lVar8;
                plVar9[1] = *(longlong *)(lVar8 + 8);
                **(longlong ***)(lVar8 + 8) = plVar9;
                *(longlong **)(lVar8 + 8) = plVar9;
            }
            lVar8 = *(longlong *)(lVar15 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar15 + 8);
                if (lVar15 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar15 = lVar8;
                        lVar8 = *(longlong *)(lVar15 + 8);
                    } while (lVar15 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar15 + 0x18) != lVar8) {
                    lVar15 = lVar8;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar8 + 0x10); lVar15 = lVar8, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar8 = lVar10;
                }
            }
        } while (lVar15 != *(longlong *)(param_1 + 0x10));
    }
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar15 != *(longlong *)(param_1 + 0x30)) {
        do {
            plVar11 = *(longlong **)(lVar15 + 0x28);
            uVar1 = *(undefined4 *)(*plVar11 + 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar7 = FUN_14024b720(), -1 < iVar7)) {
                    lVar8 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar1);
                    goto LAB_1404ac25d;
                }
                LAB_1404ac267:
                uVar16 = 0;
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar1,DAT_140c63858);
                LAB_1404ac25d:
                if (lVar8 == 0) goto LAB_1404ac267;
                uVar16 = *(uint *)(lVar8 + 0x28);
            }
            lVar8 = *(longlong *)(param_1 + 0x150);
            lVar2 = lVar8;
            lVar10 = *(longlong *)(lVar8 + 8);
            while (lVar10 != 0) {
                if (*(uint *)(lVar10 + 0x20) < uVar16) {
                    lVar10 = *(longlong *)(lVar10 + 0x18);
                }
                else {
                    lVar2 = lVar10;
                    lVar10 = *(longlong *)(lVar10 + 0x10);
                }
            }
            if ((lVar2 == lVar8) || (uVar16 < *(uint *)(lVar2 + 0x20))) {
                local_res10 = lVar8;
                plVar9 = &local_res10;
            }
            else {
                local_res8 = lVar2;
                plVar9 = &local_res8;
            }
            if (*plVar9 == lVar8) {
                lVar8 = FUN_14018b280(0x10);
                if (lVar8 == 0) {
                    lVar8 = 0;
                }
                else {
                    uVar12 = FUN_14018b280(0x18);
                    *(undefined8 *)(lVar8 + 8) = uVar12;
                    *(undefined8 *)uVar12 = uVar12;
                    *(longlong *)(*(longlong *)(lVar8 + 8) + 8) = *(longlong *)(lVar8 + 8);
                }
                lVar10 = *(longlong *)(lVar8 + 8);
                plVar9 = (longlong *)FUN_14018b280(0x18);
                if ((longlong **)(plVar9 + 2) != (longlong **)0x0) {
                    plVar9[2] = (longlong)plVar11;
                }
                *plVar9 = lVar10;
                plVar9[1] = *(longlong *)(lVar10 + 8);
                **(longlong ***)(lVar10 + 8) = plVar9;
                *(longlong **)(lVar10 + 8) = plVar9;
                pcVar3 = *(char **)(param_1 + 0x150);
                bVar17 = true;
                pcVar4 = pcVar3;
                pcVar14 = *(char **)(pcVar3 + 8);
                while (pcVar14 != (char *)0x0) {
                    bVar17 = uVar16 < *(uint *)(pcVar14 + 0x20);
                    pcVar4 = pcVar14;
                    if (bVar17) {
                        pcVar14 = *(char **)(pcVar14 + 0x10);
                    }
                    else {
                        pcVar14 = *(char **)(pcVar14 + 0x18);
                    }
                }
                pcVar14 = pcVar4;
                local_58 = uVar16;
                if (bVar17) {
                    if (pcVar4 != *(char **)(pcVar3 + 0x10)) {
                        if ((*pcVar4 == '\0') && (*(char **)(*(longlong *)(pcVar4 + 8) + 8) == pcVar4)) {
                            pcVar14 = *(char **)(pcVar4 + 0x18);
                        }
                        else {
                            pcVar14 = *(char **)(pcVar4 + 0x10);
                            if (pcVar14 == (char *)0x0) {
                                pcVar14 = *(char **)(pcVar4 + 8);
                                pcVar13 = pcVar14;
                                if (pcVar4 == *(char **)(pcVar14 + 0x10)) {
                                    do {
                                        pcVar14 = *(char **)(pcVar13 + 8);
                                        bVar17 = pcVar13 == *(char **)(pcVar14 + 0x10);
                                        pcVar13 = pcVar14;
                                    } while (bVar17);
                                }
                            }
                            else {
                                for (pcVar13 = *(char **)(pcVar14 + 0x18); pcVar13 != (char *)0x0;
                                     pcVar13 = *(char **)(pcVar13 + 0x18)) {
                                    pcVar14 = pcVar13;
                                }
                            }
                        }
                        goto LAB_1404ac3ed;
                    }
                }
                else {
                    LAB_1404ac3ed:
                    if (uVar16 <= *(uint *)(pcVar14 + 0x20)) goto LAB_1404ac4b7;
                }
                if ((pcVar4 == pcVar3) || (uVar16 < *(uint *)(pcVar4 + 0x20))) {
                    lVar10 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack84,local_58);
                        *(longlong *)(lVar10 + 0x28) = lVar8;
                    }
                    *(longlong *)(pcVar4 + 0x10) = lVar10;
                    pcVar3 = *(char **)(param_1 + 0x150);
                    if (pcVar4 == pcVar3) {
                        *(longlong *)(pcVar3 + 8) = lVar10;
                        *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x18) = lVar10;
                    }
                    else if (pcVar4 == *(char **)(pcVar3 + 0x10)) {
                        *(longlong *)(pcVar3 + 0x10) = lVar10;
                    }
                }
                else {
                    lVar10 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack84,local_58);
                        *(longlong *)(lVar10 + 0x28) = lVar8;
                    }
                    *(longlong *)(pcVar4 + 0x18) = lVar10;
                    if (pcVar4 == *(char **)(*(longlong *)(param_1 + 0x150) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x18) = lVar10;
                    }
                }
                *(char **)(lVar10 + 8) = pcVar4;
                *(undefined8 *)(lVar10 + 0x10) = 0;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x158) = *(longlong *)(param_1 + 0x158) + 1;
            }
            else {
                lVar8 = *(longlong *)(*(longlong *)(*plVar9 + 0x28) + 8);
                plVar9 = (longlong *)FUN_14018b280(0x18);
                if ((longlong **)(plVar9 + 2) != (longlong **)0x0) {
                    plVar9[2] = (longlong)plVar11;
                }
                *plVar9 = lVar8;
                plVar9[1] = *(longlong *)(lVar8 + 8);
                **(longlong ***)(lVar8 + 8) = plVar9;
                *(longlong **)(lVar8 + 8) = plVar9;
            }
            LAB_1404ac4b7:
            lVar8 = *(longlong *)(lVar15 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar15 + 8);
                if (lVar15 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar15 = lVar8;
                        lVar8 = *(longlong *)(lVar15 + 8);
                    } while (lVar15 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar15 + 0x18) != lVar8) {
                    lVar15 = lVar8;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar8 + 0x10); lVar15 = lVar8, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar8 = lVar10;
                }
            }
        } while (lVar15 != *(longlong *)(param_1 + 0x30));
    }
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    if (lVar15 != *(longlong *)(param_1 + 0xb0)) {
        do {
            lVar8 = *(longlong *)(lVar15 + 0x28);
            uVar1 = *(undefined4 *)(**(longlong **)(lVar8 + 8) + 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63e98 == 0) && (iVar7 = FUN_14024b720(), -1 < iVar7)) {
                    lVar10 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar1);
                    goto LAB_1404ac574;
                }
                LAB_1404ac57e:
                uVar16 = 0;
            }
            else {
                lVar10 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar1,DAT_140c63858);
                LAB_1404ac574:
                if (lVar10 == 0) goto LAB_1404ac57e;
                uVar16 = *(uint *)(lVar10 + 0x28);
            }
            lVar10 = *(longlong *)(param_1 + 0x170);
            lVar5 = lVar10;
            lVar2 = *(longlong *)(lVar10 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < uVar16) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar5 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((lVar5 == lVar10) || (uVar16 < *(uint *)(lVar5 + 0x20))) {
                local_res10 = lVar10;
                plVar11 = &local_res10;
            }
            else {
                local_res8 = lVar5;
                plVar11 = &local_res8;
            }
            if (*plVar11 == lVar10) {
                lVar10 = FUN_14018b280(0x10);
                if (lVar10 == 0) {
                    lVar10 = 0;
                }
                else {
                    uVar12 = FUN_14018b280(0x18);
                    *(undefined8 *)(lVar10 + 8) = uVar12;
                    *(undefined8 *)uVar12 = uVar12;
                    *(longlong *)(*(longlong *)(lVar10 + 8) + 8) = *(longlong *)(lVar10 + 8);
                }
                lVar2 = *(longlong *)(lVar10 + 8);
                plVar11 = (longlong *)FUN_14018b280(0x18);
                if (plVar11 + 2 != (longlong *)0x0) {
                    plVar11[2] = lVar8;
                }
                *plVar11 = lVar2;
                plVar11[1] = *(longlong *)(lVar2 + 8);
                **(longlong ***)(lVar2 + 8) = plVar11;
                *(longlong **)(lVar2 + 8) = plVar11;
                pcVar3 = *(char **)(param_1 + 0x170);
                bVar17 = true;
                pcVar4 = pcVar3;
                pcVar14 = *(char **)(pcVar3 + 8);
                while (pcVar14 != (char *)0x0) {
                    bVar17 = uVar16 < *(uint *)(pcVar14 + 0x20);
                    pcVar4 = pcVar14;
                    if (bVar17) {
                        pcVar14 = *(char **)(pcVar14 + 0x10);
                    }
                    else {
                        pcVar14 = *(char **)(pcVar14 + 0x18);
                    }
                }
                pcVar14 = pcVar4;
                local_58 = uVar16;
                if (bVar17) {
                    if (pcVar4 != *(char **)(pcVar3 + 0x10)) {
                        if ((*pcVar4 == '\0') && (*(char **)(*(longlong *)(pcVar4 + 8) + 8) == pcVar4)) {
                            pcVar14 = *(char **)(pcVar4 + 0x18);
                        }
                        else {
                            pcVar14 = *(char **)(pcVar4 + 0x10);
                            if (pcVar14 == (char *)0x0) {
                                pcVar14 = *(char **)(pcVar4 + 8);
                                pcVar13 = pcVar14;
                                if (pcVar4 == *(char **)(pcVar14 + 0x10)) {
                                    do {
                                        pcVar14 = *(char **)(pcVar13 + 8);
                                        bVar17 = pcVar13 == *(char **)(pcVar14 + 0x10);
                                        pcVar13 = pcVar14;
                                    } while (bVar17);
                                }
                            }
                            else {
                                for (pcVar13 = *(char **)(pcVar14 + 0x18); pcVar13 != (char *)0x0;
                                     pcVar13 = *(char **)(pcVar13 + 0x18)) {
                                    pcVar14 = pcVar13;
                                }
                            }
                        }
                        goto LAB_1404ac6fd;
                    }
                }
                else {
                    LAB_1404ac6fd:
                    if (uVar16 <= *(uint *)(pcVar14 + 0x20)) goto LAB_1404ac7c7;
                }
                if ((pcVar4 == pcVar3) || (uVar16 < *(uint *)(pcVar4 + 0x20))) {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack84,local_58);
                        *(longlong *)(lVar8 + 0x28) = lVar10;
                    }
                    *(longlong *)(pcVar4 + 0x10) = lVar8;
                    pcVar3 = *(char **)(param_1 + 0x170);
                    if (pcVar4 == pcVar3) {
                        *(longlong *)(pcVar3 + 8) = lVar8;
                        *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x18) = lVar8;
                    }
                    else if (pcVar4 == *(char **)(pcVar3 + 0x10)) {
                        *(longlong *)(pcVar3 + 0x10) = lVar8;
                    }
                }
                else {
                    lVar8 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack84,local_58);
                        *(longlong *)(lVar8 + 0x28) = lVar10;
                    }
                    *(longlong *)(pcVar4 + 0x18) = lVar8;
                    if (pcVar4 == *(char **)(*(longlong *)(param_1 + 0x170) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x18) = lVar8;
                    }
                }
                *(char **)(lVar8 + 8) = pcVar4;
                *(undefined8 *)(lVar8 + 0x10) = 0;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + 1;
            }
            else {
                lVar10 = *(longlong *)(*(longlong *)(*plVar11 + 0x28) + 8);
                plVar11 = (longlong *)FUN_14018b280(0x18);
                if (plVar11 + 2 != (longlong *)0x0) {
                    plVar11[2] = lVar8;
                }
                *plVar11 = lVar10;
                plVar11[1] = *(longlong *)(lVar10 + 8);
                **(longlong ***)(lVar10 + 8) = plVar11;
                *(longlong **)(lVar10 + 8) = plVar11;
            }
            LAB_1404ac7c7:
            lVar8 = *(longlong *)(lVar15 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar15 + 8);
                if (lVar15 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar15 = lVar8;
                        lVar8 = *(longlong *)(lVar15 + 8);
                    } while (lVar15 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar15 + 0x18) != lVar8) {
                    lVar15 = lVar8;
                }
            }
            else {
                for (lVar10 = *(longlong *)(lVar8 + 0x10); lVar15 = lVar8, lVar10 != 0;
                     lVar10 = *(longlong *)(lVar10 + 0x10)) {
                    lVar8 = lVar10;
                }
            }
        } while (lVar15 != *(longlong *)(param_1 + 0xb0));
    }
    return uVar6;
}



void FUN_1404ac840(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;

    lVar3 = DAT_140c659d0;
    lVar5 = *(longlong *)(*(longlong *)(DAT_140c659d0 + 0x130) + 0x10);
    if (lVar5 != *(longlong *)(DAT_140c659d0 + 0x130)) {
        do {
            lVar4 = *(longlong *)(lVar5 + 0x28);
            if (lVar4 != 0) {
                plVar6 = (longlong *)**(longlong **)(lVar4 + 8);
                if (plVar6 != *(longlong **)(lVar4 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar6;
                        FUN_14018b900(plVar6,0);
                        plVar6 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar4 + 8);
                *(longlong *)(*(longlong *)(lVar4 + 8) + 8) = *(longlong *)(lVar4 + 8);
                FUN_14018b900(*(undefined8 *)(lVar4 + 8),0);
                FUN_14018b900(lVar4);
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
        } while (lVar5 != *(longlong *)(lVar3 + 0x130));
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x150) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x150)) {
        do {
            lVar4 = *(longlong *)(lVar5 + 0x28);
            if (lVar4 != 0) {
                plVar6 = (longlong *)**(longlong **)(lVar4 + 8);
                if (plVar6 != *(longlong **)(lVar4 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar6;
                        FUN_14018b900(plVar6,0);
                        plVar6 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar4 + 8);
                *(longlong *)(*(longlong *)(lVar4 + 8) + 8) = *(longlong *)(lVar4 + 8);
                FUN_14018b900(*(undefined8 *)(lVar4 + 8),0);
                FUN_14018b900(lVar4);
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
        } while (lVar5 != *(longlong *)(lVar3 + 0x150));
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x170) + 0x10);
    if (lVar5 != *(longlong *)(lVar3 + 0x170)) {
        do {
            lVar4 = *(longlong *)(lVar5 + 0x28);
            if (lVar4 != 0) {
                plVar6 = (longlong *)**(longlong **)(lVar4 + 8);
                if (plVar6 != *(longlong **)(lVar4 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar6;
                        FUN_14018b900(plVar6,0);
                        plVar6 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar4 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar4 + 8);
                *(longlong *)(*(longlong *)(lVar4 + 8) + 8) = *(longlong *)(lVar4 + 8);
                FUN_14018b900(*(undefined8 *)(lVar4 + 8),0);
                FUN_14018b900(lVar4);
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
        } while (lVar5 != *(longlong *)(lVar3 + 0x170));
    }
    return;
}



undefined8 FUN_1404acac0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c659d0 + 0x130);
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



undefined8 FUN_1404acb30(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c659d0 + 0x150);
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



undefined8 FUN_1404acba0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined local_28 [8];
    longlong local_20;
    longlong local_18;

    if ((longlong *)**(longlong **)(param_2 + 8) != *(longlong **)(param_2 + 8)) {
        return 0x80004005;
    }
    FUN_14048b2a0(local_28,param_1 + 8);
    if (local_18 == 0) {
        uVar6 = 0x80004005;
    }
    else {
        lVar7 = *(longlong *)(local_20 + 0x10);
        if (lVar7 != local_20) {
            do {
                plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + 0x10);
                iVar3 = FUN_1404ad9b0(DAT_140c659d0,*(undefined4 *)*plVar1);
                if ((iVar3 != 0) || ((*(byte *)(*plVar1 + 0xc) & 4) != 0)) {
                    lVar5 = *(longlong *)(param_2 + 8);
                    plVar4 = (longlong *)FUN_14018b280(0x18);
                    if ((longlong **)(plVar4 + 2) != (longlong **)0x0) {
                        plVar4[2] = (longlong)plVar1;
                    }
                    *plVar4 = lVar5;
                    plVar4[1] = *(longlong *)(lVar5 + 8);
                    **(longlong ***)(lVar5 + 8) = plVar4;
                    *(longlong **)(lVar5 + 8) = plVar4;
                }
                lVar5 = *(longlong *)(lVar7 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar7 = lVar5;
                            lVar5 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                        lVar7 = lVar5;
                    }
                }
                else {
                    for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x10)) {
                        lVar5 = lVar2;
                    }
                }
            } while (lVar7 != local_20);
        }
        uVar6 = 0;
    }
    FUN_140008410(local_28);
    FUN_14018b900(local_20,0);
    return uVar6;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404acfa0(undefined8 param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    longlong **pplVar5;
    int iVar6;
    longlong lVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong **pplVar10;
    uint uVar11;
    undefined auStack184 [32];
    undefined8 *local_98;
    ulonglong local_88;
    longlong local_80;
    undefined8 local_78;
    undefined local_70 [8];
    longlong **local_68;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    uVar8 = DAT_140c659d0;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    if ((((((param_2 != 0) && (param_3 != 0)) && (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0))
          && (*(int *)(lVar1 + 0x74) != 0)) &&
         ((iVar6 = FUN_1404ad9b0(), iVar6 != 0 ||
                                    (((*(int *)(lVar1 + 0x74) != 0 && (lVar7 = FUN_1402413c0(), lVar7 != 0)) &&
                                      ((*(uint *)(lVar7 + 0xc) & 4) != 0)))))) &&
        ((iVar6 = FUN_1404ad9b0(), iVar6 != 0 ||
                                   (((*(int *)(lVar1 + 0x74) != 0 && (lVar7 = FUN_1402413c0(), lVar7 != 0)) &&
                                     ((*(uint *)(lVar7 + 0xc) & 4) != 0)))))) {
        local_68 = (longlong **)FUN_14018b280(0x18);
        *local_68 = (longlong *)local_68;
        local_68[1] = (longlong *)local_68;
        local_50 = 1;
        uVar11 = 0;
        local_80 = 1;
        local_48 = 0;
        local_38 = 1;
        local_58 = 0;
        local_78 = 0;
        local_40 = 0;
        local_30 = 0;
        if (*(int *)(lVar1 + 0x74) != 0) {
            local_98 = &local_58;
            iVar6 = FUN_1404ad310(uVar8,*(int *)(lVar1 + 0x74),param_3,local_70);
            if (-1 < iVar6) {
                local_80 = 0;
                uVar9 = 0;
                for (pplVar10 = (longlong **)*local_68; pplVar10 != local_68;
                     pplVar10 = (longlong **)*pplVar10) {
                    uVar9 = uVar9 + 1;
                    uVar11 = (uint)uVar9;
                }
                local_88 = (ulonglong)uVar11;
                uVar8 = SUB168(ZEXT816(4) * ZEXT416(uVar11),0);
                if (SUB168(ZEXT816(4) * ZEXT416(uVar11) >> 0x40,0) != 0) {
                    uVar8 = 0xffffffffffffffff;
                }
                local_80 = FUN_14018b280(uVar8,0);
                uVar9 = 0;
                if ((uint)local_88 != 0) {
                    do {
                        plVar2 = *local_68;
                        lVar1 = *plVar2;
                        plVar3 = (longlong *)plVar2[1];
                        puVar4 = (undefined8 *)plVar2[2];
                        *plVar3 = lVar1;
                        *(longlong **)(lVar1 + 8) = plVar3;
                        FUN_14018b900();
                        uVar11 = (int)uVar9 + 1;
                        *(undefined4 *)(local_80 + uVar9 * 4) = *(undefined4 *)*puVar4;
                        uVar9 = (ulonglong)uVar11;
                    } while (uVar11 < (uint)local_88);
                }
                FUN_1403f4900(DAT_140c65898,0xff,&local_88);
                FUN_14018b900(local_80,0);
                pplVar10 = (longlong **)*local_68;
                if ((longlong **)*local_68 != local_68) {
                    do {
                        pplVar5 = (longlong **)*pplVar10;
                        FUN_14018b900(pplVar10,0);
                        pplVar10 = pplVar5;
                    } while (pplVar5 != local_68);
                }
                *local_68 = (longlong *)local_68;
                local_68[1] = (longlong *)local_68;
            }
        }
        pplVar10 = (longlong **)*local_68;
        if (pplVar10 != local_68) {
            do {
                pplVar5 = (longlong **)*pplVar10;
                FUN_14018b900(pplVar10,0);
                pplVar10 = pplVar5;
            } while (pplVar5 != local_68);
        }
        *local_68 = (longlong *)local_68;
        local_68[1] = (longlong *)local_68;
        FUN_14018b900(local_68,0);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack184);
    return;
}



undefined8 FUN_1404ad250(ulonglong param_1,longlong param_2)

{
    undefined8 uVar1;
    int iVar2;
    int iVar3;
    uint **ppuVar4;
    ulonglong local_res8;
    undefined8 local_18;
    ulonglong *local_10;

    uVar1 = DAT_140c659d0;
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
        iVar3 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x74);
        if (iVar3 != 0) {
            local_res8 = param_1;
            iVar2 = FUN_1404ad9b0(DAT_140c659d0,iVar3);
            if (iVar2 != 0) {
                ppuVar4 = (uint **)FUN_1404af650(uVar1,iVar3);
                if (ppuVar4 != (uint **)0x0) {
                    iVar3 = FUN_1404ae1f0();
                    if (iVar3 != 0) {
                        local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)**ppuVar4;
                        local_10 = &local_res8;
                        local_18 = 1;
                        FUN_1403f4900(DAT_140c65898,0xff,&local_18);
                        return 0;
                    }
                }
            }
        }
        return 0x80004005;
    }
    return 0x80004005;
}



undefined8
FUN_1404ad310(longlong param_1,uint param_2,uint param_3,undefined8 param_4,ulonglong *param_5)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong **pplVar11;
    longlong **pplVar12;
    undefined local_a8 [8];
    longlong **local_a0;
    uint local_90 [2];
    undefined8 local_88;
    undefined local_80 [8];
    longlong **local_78;
    undefined8 local_68;
    undefined8 local_60;
    ulonglong *local_58;
    undefined8 local_50;

    local_58 = param_5;
    if ((param_3 != 0) && (param_2 != param_3)) {
        local_50 = param_4;
        plVar7 = (longlong *)FUN_1404806a0();
        plVar8 = (longlong *)FUN_1404806a0(param_1,param_3);
        if ((plVar7 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) {
            uVar10 = 0x80004005;
        }
        else {
            lVar9 = FUN_14024b980(*(undefined4 *)(*plVar7 + 0x18));
            uVar10 = 0;
            iVar6 = 0;
            if (lVar9 != 0) {
                iVar6 = *(int *)(lVar9 + 0x28);
            }
            lVar9 = FUN_14024b980(*(undefined4 *)(*plVar8 + 0x18));
            if (lVar9 == 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = *(int *)(lVar9 + 0x28);
            }
            if (iVar6 == iVar4) {
                local_88 = (ulonglong)local_88._4_4_ << 0x20;
                local_90[0] = 0;
                local_78 = (longlong **)FUN_14018b280(0x18);
                *local_78 = (longlong *)local_78;
                local_78[1] = (longlong *)local_78;
                local_a0 = (longlong **)FUN_14018b280(0x18);
                pplVar12 = local_78;
                *local_a0 = (longlong *)local_a0;
                local_a0[1] = (longlong *)local_a0;
                uVar2 = *(undefined4 *)*plVar7;
                pplVar11 = (longlong **)FUN_14018b280(0x18);
                if (pplVar11 + 2 != (longlong **)0x0) {
                    *(undefined4 *)(pplVar11 + 2) = uVar2;
                }
                *pplVar11 = (longlong *)pplVar12;
                pplVar11[1] = pplVar12[1];
                *pplVar12[1] = (longlong)pplVar11;
                pplVar12[1] = (longlong *)pplVar11;
                iVar6 = FUN_1404ad660(param_1,plVar7,param_3,local_a8,local_80,&local_88,local_50,local_90);
                plVar7 = local_78[1];
                plVar8 = (longlong *)plVar7[1];
                lVar9 = *plVar7;
                *plVar8 = lVar9;
                *(longlong **)(lVar9 + 8) = plVar8;
                if (iVar6 < 0) {
                    FUN_14018b900(plVar7,0);
                    uVar10 = 0x80004005;
                }
                else {
                    FUN_14018b900(plVar7,0);
                    *local_58 = (ulonglong)local_90[0];
                    local_58[1] = 1;
                    local_58[2] = 0;
                    local_58[3] = 0;
                    local_68 = 1;
                    local_58[4] = 1;
                    local_58[5] = 0;
                    local_60 = 0;
                }
                pplVar12 = (longlong **)*local_a0;
                if (pplVar12 != local_a0) {
                    do {
                        pplVar11 = (longlong **)*pplVar12;
                        FUN_14018b900(pplVar12,0);
                        pplVar12 = pplVar11;
                    } while (pplVar11 != local_a0);
                }
                *local_a0 = (longlong *)local_a0;
                local_a0[1] = (longlong *)local_a0;
                FUN_14018b900(local_a0,0);
                pplVar12 = (longlong **)*local_78;
                if (pplVar12 != local_78) {
                    do {
                        pplVar11 = (longlong **)*pplVar12;
                        FUN_14018b900(pplVar12,0);
                        pplVar12 = pplVar11;
                    } while (pplVar11 != local_78);
                }
                *local_78 = (longlong *)local_78;
                local_78[1] = (longlong *)local_78;
                FUN_14018b900(local_78,0);
            }
            else {
                lVar9 = *(longlong *)(param_1 + 0xf0);
                local_88 = lVar9;
                lVar3 = *(longlong *)(lVar9 + 8);
                while (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x20) < param_2) {
                        lVar3 = *(longlong *)(lVar3 + 0x18);
                    }
                    else {
                        local_88 = lVar3;
                        lVar3 = *(longlong *)(lVar3 + 0x10);
                    }
                }
                if ((local_88 == lVar9) || (param_2 < *(uint *)(local_88 + 0x20))) {
                    local_88 = lVar9;
                }
                if (local_88 == lVar9) {
                    uVar10 = 0x80004005;
                }
                else {
                    puVar1 = (undefined8 *)(local_88 + 0x28);
                    FUN_1404ae120(local_50,puVar1);
                    uVar5 = FUN_1404ae170(*puVar1);
                    *local_58 = (ulonglong)uVar5;
                    local_58[1] = 1;
                    local_58[2] = 0;
                    local_58[3] = 0;
                    local_58[4] = 1;
                    uVar10 = 0;
                    local_58[5] = 0;
                }
            }
        }
        return uVar10;
    }
    return 0x80004005;
}



undefined8
FUN_1404ad660(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
              int *param_6,longlong param_7,uint *param_8)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong local_res10;
    undefined local_48 [8];
    longlong local_40;

    FUN_14048b2a0(local_48,param_2 + 8);
    lVar6 = *(longlong *)(local_40 + 8);
    local_res10 = local_40;
    if (*(longlong *)(local_40 + 8) == 0) {
        LAB_1404ad6c9:
        local_res10 = local_40;
    }
    else {
        do {
            if (*(uint *)(lVar6 + 0x20) < param_3) {
                lVar8 = *(longlong *)(lVar6 + 0x18);
            }
            else {
                lVar8 = *(longlong *)(lVar6 + 0x10);
                local_res10 = lVar6;
            }
            lVar6 = lVar8;
        } while (lVar8 != 0);
        if ((local_res10 == local_40) || (param_3 < *(uint *)(local_res10 + 0x20))) goto LAB_1404ad6c9;
    }
    if (local_res10 == local_40) {
        lVar6 = *(longlong *)(local_40 + 0x10);
        if (lVar6 != local_40) {
            do {
                iVar4 = *(int *)(lVar6 + 0x20);
                iVar5 = FUN_1404ad9b0(param_1);
                if ((iVar5 != 0) && (iVar5 = FUN_1404adb70(param_1), iVar5 != 0)) {
                    for (puVar1 = (undefined8 *)**(undefined8 **)(param_5 + 8);
                         puVar1 != *(undefined8 **)(param_5 + 8); puVar1 = (undefined8 *)*puVar1) {
                        if (*(int *)(puVar1 + 2) == iVar4) goto LAB_1404ad91d;
                    }
                    iVar5 = FUN_1404ae170(*(undefined8 *)(lVar6 + 0x28));
                    if ((*param_8 == 0) || ((uint)(*param_6 + iVar5) < *param_8)) {
                        *param_6 = *param_6 + iVar5;
                        lVar8 = *(longlong *)(param_4 + 8);
                        plVar7 = (longlong *)FUN_14018b280(0x18);
                        if (plVar7 + 2 != (longlong *)0x0) {
                            plVar7[2] = *(longlong *)(lVar6 + 0x28);
                        }
                        *plVar7 = lVar8;
                        plVar7[1] = *(longlong *)(lVar8 + 8);
                        **(longlong ***)(lVar8 + 8) = plVar7;
                        *(longlong **)(lVar8 + 8) = plVar7;
                        lVar8 = *(longlong *)(param_5 + 8);
                        plVar7 = (longlong *)FUN_14018b280(0x18);
                        if (plVar7 + 2 != (longlong *)0x0) {
                            *(int *)(plVar7 + 2) = iVar4;
                        }
                        *plVar7 = lVar8;
                        plVar7[1] = *(longlong *)(lVar8 + 8);
                        **(longlong ***)(lVar8 + 8) = plVar7;
                        *(longlong **)(lVar8 + 8) = plVar7;
                        uVar9 = FUN_1404806a0(param_1,iVar4);
                        FUN_1404ad660(param_1,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
                        plVar7 = *(longlong **)(*(longlong *)(param_5 + 8) + 8);
                        lVar8 = *plVar7;
                        plVar2 = (longlong *)plVar7[1];
                        *plVar2 = lVar8;
                        *(longlong **)(lVar8 + 8) = plVar2;
                        FUN_14018b900(plVar7,0);
                        plVar7 = *(longlong **)(*(longlong *)(param_4 + 8) + 8);
                        lVar8 = *plVar7;
                        plVar7 = (longlong *)plVar7[1];
                        *plVar7 = lVar8;
                        *(longlong **)(lVar8 + 8) = plVar7;
                        FUN_14018b900();
                        *param_6 = *param_6 - iVar5;
                    }
                }
                LAB_1404ad91d:
                lVar8 = *(longlong *)(lVar6 + 0x18);
                if (lVar8 == 0) {
                    lVar8 = *(longlong *)(lVar6 + 8);
                    if (lVar6 == *(longlong *)(lVar8 + 0x18)) {
                        do {
                            lVar6 = lVar8;
                            lVar8 = *(longlong *)(lVar6 + 8);
                        } while (lVar6 == *(longlong *)(lVar8 + 0x18));
                    }
                    if (*(longlong *)(lVar6 + 0x18) != lVar8) {
                        lVar6 = lVar8;
                    }
                }
                else {
                    for (lVar3 = *(longlong *)(lVar8 + 0x10); lVar6 = lVar8, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar8 = lVar3;
                    }
                }
            } while (lVar6 != local_40);
        }
        if ((longlong *)**(longlong **)(param_7 + 8) == *(longlong **)(param_7 + 8)) goto LAB_1404ad985;
    }
    else {
        iVar4 = FUN_1404ae170(*(undefined8 *)(local_res10 + 0x28));
        if ((*param_8 != 0) && (*param_8 <= (uint)(iVar4 + *param_6))) {
            LAB_1404ad985:
            uVar9 = 0x80004005;
            goto LAB_1404ad98a;
        }
        *param_8 = iVar4 + *param_6;
        FUN_1404af710(param_7,param_4);
        lVar6 = *(longlong *)(param_7 + 8);
        plVar7 = (longlong *)FUN_14018b280(0x18);
        if (plVar7 + 2 != (longlong *)0x0) {
            plVar7[2] = *(longlong *)(local_res10 + 0x28);
        }
        *plVar7 = lVar6;
        plVar7[1] = *(longlong *)(lVar6 + 8);
        **(longlong ***)(lVar6 + 8) = plVar7;
        *(longlong **)(lVar6 + 8) = plVar7;
    }
    uVar9 = 0;
    LAB_1404ad98a:
    FUN_140008410(local_48);
    FUN_14018b900(local_40,0);
    return uVar9;
}



undefined8 FUN_1404ad9b0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res18;

    if (param_2 == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x110);
    local_res18 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res18 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res18 == lVar2) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar2;
    }
    if ((local_res18 == lVar2) &&
        (((lVar2 = FUN_1402413c0(param_2), lVar2 == 0 || (1 < *(uint *)(lVar2 + 8))) ||
          ((*(uint *)(lVar2 + 0xc) & 1) == 0)))) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar2 != 0) {
            uVar3 = FUN_1404af6b0(lVar2,param_2,*(undefined4 *)(lVar2 + 0x38),1);
            return uVar3;
        }
        uVar3 = FUN_1404af6b0(0,param_2,0,1);
        return uVar3;
    }
    return 1;
}



undefined8 FUN_1404ada70(undefined8 param_1,int param_2)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 uVar6;

    if (param_2 == 0) {
        return 0;
    }
    plVar3 = (longlong *)FUN_1404af5f0();
    if (plVar3 != (longlong *)0x0) {
        iVar2 = 0;
        uVar6 = 0;
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
            iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        }
        iVar1 = *(int *)(*plVar3 + 0x14);
        if (((iVar1 != 0) && ((iVar1 != 1 || (iVar2 != 0xa7)))) && ((iVar1 != 2 || (iVar2 != 0xa6)))) {
            return 0;
        }
        lVar4 = FUN_1402413c0(param_2);
        if (((lVar4 != 0) && ((*(uint *)(lVar4 + 8) & 0xfffffffd) == 0)) &&
            ((*(uint *)(lVar4 + 0xc) & 1) != 0)) {
            return 1;
        }
        lVar4 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar4 != 0) {
            uVar6 = *(undefined4 *)(lVar4 + 0x38);
        }
        uVar5 = FUN_1404af6b0(lVar4,param_2,uVar6,2);
        return uVar5;
    }
    return 0;
}



undefined8 FUN_1404adb70(longlong param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong local_res18;

    if (param_2 == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_res18 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res18 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res18 == lVar2) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar2;
    }
    if (local_res18 == lVar2) {
        return 0;
    }
    uVar5 = 0;
    iVar4 = 0;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    iVar1 = *(int *)(**(longlong **)(local_res18 + 0x28) + 0x14);
    if (((iVar1 == 0) || ((iVar1 == 1 && (iVar4 == 0xa7)))) || ((iVar1 == 2 && (iVar4 == 0xa6)))) {
        uVar5 = 1;
    }
    return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404adc50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        return 0;
    }
    if ((DAT_140dc30c4 & 1) == 0) {
        DAT_140dc30c4 = DAT_140dc30c4 | 1;
        _DAT_140dc30cc = 0;
    }
    if ((DAT_140dc30c4 & 2) == 0) {
        DAT_140dc30c4 = DAT_140dc30c4 | 2;
    }
    else if (_DAT_140dc30d4 != 0) goto LAB_1404adcf4;
    _DAT_140dc30d4 = 1;
    lVar1 = FUN_140200220(0x51b);
    if (lVar1 == 0) {
        DAT_140dc30d0 = 0;
    }
    else {
        DAT_140dc30d0 = *(int *)(lVar1 + 8);
    }
    LAB_1404adcf4:
    if (param_4 == DAT_140dc30d0) {
        LAB_1404addbf:
        (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
        uVar2 = FUN_1404af440();
        *param_3 = uVar2;
        param_3[1] = 0xf;
        param_3[2] = 0x900000000;
    }
    else {
        if (param_4 == 0) {
            if (_DAT_140dc30cc == 0) {
                _DAT_140dc30cc = 1;
                lVar1 = FUN_140200220(0x51b);
                if (lVar1 == 0) {
                    DAT_140dc30c8 = 0;
                }
                else {
                    DAT_140dc30c8 = *(int *)(lVar1 + 4);
                }
            }
            for (lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608); lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x88)) {
                if (*(int *)(lVar1 + 8) == DAT_140dc30c8) goto LAB_1404addbf;
            }
        }
        (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
        uVar2 = FUN_1404af1e0();
        *param_3 = uVar2;
        param_3[1] = 1;
        param_3[2] = 0;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1404ade10(void)

{
    int iVar1;
    int iVar2;
    longlong lVar3;

    if ((DAT_140dc30d8 & 1) == 0) {
        DAT_140dc30d8 = DAT_140dc30d8 | 1;
        DAT_140dc30e4 = 0;
    }
    if ((DAT_140dc30d8 & 2) == 0) {
        DAT_140dc30d8 = DAT_140dc30d8 | 2;
        _DAT_140dc30ec = 0;
    }
    if (DAT_140dc30e4 == 0) {
        DAT_140dc30e4 = 1;
        lVar3 = FUN_140200220(0x51b);
        if (lVar3 == 0) {
            DAT_140dc30e0 = 0;
        }
        else {
            DAT_140dc30e0 = *(undefined4 *)(lVar3 + 4);
        }
    }
    iVar1 = FUN_1404adc50();
    if (_DAT_140dc30ec == 0) {
        _DAT_140dc30ec = 1;
        lVar3 = FUN_140200220(0x51b);
        if (lVar3 == 0) {
            DAT_140dc30e8 = 0;
        }
        else {
            DAT_140dc30e8 = *(undefined4 *)(lVar3 + 8);
        }
    }
    iVar2 = FUN_1404adc50();
    return iVar2 != 0 && iVar1 != 0;
}



bool FUN_1404adf20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    ulonglong local_28;
    int local_20;
    int local_14;

    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        return false;
    }
    local_20 = 1;
    local_28 = 0;
    local_14 = 0;
    iVar1 = FUN_1404adc50(param_1,param_2,&local_28,param_3);
    if (iVar1 != 0) {
        if (local_14 == 9) {
            return local_28 <= *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118);
        }
        if (local_20 == 1) {
            return local_28 <= *(ulonglong *)(DAT_140c65898 + 0x15f8);
        }
    }
    return false;
}



undefined8 FUN_1404adfe0(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    lVar2 = FUN_1402413c0(param_2);
    if (lVar2 == 0) {
        return 0;
    }
    lVar2 = FUN_14024b980(*(undefined4 *)(lVar2 + 0x18));
    if (((lVar2 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        iVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
        if (iVar1 == *(int *)(lVar2 + 0x28)) {
            if ((DAT_140dc30f0 & 1) == 0) {
                DAT_140dc30f0 = DAT_140dc30f0 | 1;
                DAT_140dc30fc = 0;
            }
            fVar6 = 0.0;
            fVar4 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0) - *(float *)(lVar2 + 0xc);
            fVar5 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4) - *(float *)(lVar2 + 0x10);
            fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
            if (DAT_140dc30fc == 0) {
                DAT_140dc30fc = 1;
                lVar2 = FUN_140200220(0x52b);
                DAT_140dc30f8 = fVar6;
                if (lVar2 != 0) {
                    DAT_140dc30f8 = *(float *)(lVar2 + 0x18);
                }
            }
            if (fVar4 < DAT_140dc30f8) {
                return 0;
            }
        }
        uVar3 = FUN_1404ada70();
        return uVar3;
    }
    return 0;
}



void FUN_1404ae120(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong *)(param_1 + 8);
    plVar2 = (longlong *)FUN_14018b280(0x18);
    if (plVar2 + 2 != (longlong *)0x0) {
        plVar2[2] = *param_2;
    }
    *plVar2 = lVar1;
    plVar2[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar2;
    *(longlong **)(lVar1 + 8) = plVar2;
    return;
}



int FUN_1404ae170(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    float fVar5;
    float fVar6;

    lVar3 = FUN_140200220();
    if (lVar3 == 0) {
        fVar6 = 132.75;
    }
    else {
        fVar6 = *(float *)(lVar3 + 0x18);
    }
    if (((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
         (uVar1 = *(uint *)(**(longlong **)(param_1 + 0x10) + 0x1c), uVar1 != 0)) &&
        (fVar5 = (float)(ulonglong)uVar1, fVar5 = fVar5 * fVar6 * fVar5, 0.0 < fVar5)) {
        iVar2 = (int)(longlong)fVar5;
        iVar4 = -1;
        if (iVar2 != -1) {
            iVar4 = iVar2;
        }
        iVar2 = 0;
        if (iVar4 != 0) {
            iVar2 = iVar4;
        }
        return iVar2;
    }
    return 0;
}



bool FUN_1404ae1f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;

    if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10) != 0)) {
        lVar2 = FUN_14024b980(*(undefined4 *)(**(longlong **)(param_1 + 8) + 0x18));
        iVar1 = 0;
        iVar3 = iVar1;
        if (lVar2 != 0) {
            iVar3 = *(int *)(lVar2 + 0x28);
        }
        lVar2 = FUN_14024b980(*(undefined4 *)(**(longlong **)(param_1 + 0x10) + 0x18));
        if (lVar2 != 0) {
            iVar1 = *(int *)(lVar2 + 0x28);
        }
        return iVar3 != iVar1;
    }
    return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404ae270(longlong *param_1)

{
    uint uVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    uint *puVar9;
    longlong lVar10;
    uint **ppuVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong *puVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    char *pcVar17;
    char *pcVar18;
    uint *puVar19;
    uint uVar20;
    longlong *plVar21;
    bool bVar22;
    uint local_res18;
    ulonglong local_res20;
    uint local_e8;
    undefined4 uStack228;
    uint **local_e0;
    uint local_d8;
    undefined4 uStack212;
    uint **local_d0;
    ulonglong local_c8;
    uint **local_c0;
    uint local_b8 [2];
    uint **local_b0;
    uint local_a8;
    uint **local_a0;
    uint local_98;
    uint **local_90;
    uint local_88 [2];
    uint **local_80;
    ulonglong local_78 [2];
    ulonglong local_68 [2];
    undefined local_58 [32];

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c6497c == 0) {
            iVar7 = FUN_140241160();
            if (iVar7 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = (**(code **)(*DAT_140c64968 + 0x28))();
            }
        }
        else {
            uVar6 = 0;
        }
    }
    else {
        uVar6 = (*DAT_140c63838)(&PTR_u_TaxiNode_140a6d9a0,DAT_140c63858);
    }
    uVar20 = 0;
    if (uVar6 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c6497c == 0) && (iVar7 = FUN_140241160(), -1 < iVar7)) {
                    puVar9 = (uint *)(**(code **)(*DAT_140c64968 + 0x20))(DAT_140c64968,uVar20);
                    goto LAB_1404ae339;
                }
            }
            else {
                puVar9 = (uint *)(*DAT_140c63848)();
                LAB_1404ae339:
                if ((puVar9 != (uint *)0x0) && (uVar1 = *puVar9, uVar1 != 0)) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63e98 != 0) || (iVar7 = FUN_14024b720(), iVar7 < 0)) goto LAB_1404ae484;
                        lVar10 = (**(code **)(*DAT_140c65388 + 0x18))();
                    }
                    else {
                        lVar10 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228);
                    }
                    if (lVar10 != 0) {
                        if ((puVar9[2] != 2) && (iVar7 = (**(code **)(*param_1 + 0x18))(), iVar7 != 0)) {
                            ppuVar11 = (uint **)(**(code **)(*param_1 + 8))(param_1);
                            *ppuVar11 = puVar9;
                            local_d8 = uVar1;
                            local_d0 = ppuVar11;
                            FUN_140055f80(param_1 + 1);
                            if ((*(byte *)(*ppuVar11 + 3) & 1) != 0) {
                                local_e8 = uVar1;
                                local_e0 = ppuVar11;
                                FUN_140055f80();
                            }
                            if ((*(byte *)(*ppuVar11 + 3) & 4) != 0) {
                                local_98 = uVar1;
                                local_90 = ppuVar11;
                                FUN_140055f80();
                            }
                        }
                        if (puVar9[2] != 1) {
                            ppuVar11 = (uint **)(**(code **)(*param_1 + 8))(param_1);
                            *ppuVar11 = puVar9;
                            local_b8[0] = uVar1;
                            local_b0 = ppuVar11;
                            FUN_140055f80(param_1 + 5);
                            if ((*(byte *)(*ppuVar11 + 3) & 1) != 0) {
                                local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)uVar1;
                                local_c0 = ppuVar11;
                                FUN_140055f80();
                            }
                        }
                    }
                }
            }
            LAB_1404ae484:
            uVar20 = uVar20 + 1;
        } while (uVar20 < uVar6);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64320 == 0) {
            iVar7 = FUN_1402415a0();
            if (iVar7 < 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = (**(code **)(*DAT_140c63ac0 + 0x28))();
            }
        }
        else {
            uVar6 = 0;
        }
    }
    else {
        uVar6 = (*DAT_140c63838)(&PTR_u_TaxiRoute_140a6d9d8,DAT_140c63858);
    }
    local_res18 = 0;
    if (uVar6 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64320 == 0) && (iVar7 = FUN_1402415a0(), -1 < iVar7)) {
                    puVar9 = (uint *)(**(code **)(*DAT_140c63ac0 + 0x20))(DAT_140c63ac0,local_res18);
                    goto LAB_1404ae539;
                }
            }
            else {
                puVar9 = (uint *)(*DAT_140c63848)();
                LAB_1404ae539:
                if ((puVar9 != (uint *)0x0) && (uVar20 = *puVar9, uVar20 != 0)) {
                    uVar3 = param_1[2];
                    plVar21 = (longlong *)0x0;
                    puVar19 = (uint *)0x0;
                    uVar15 = *(ulonglong *)(uVar3 + 8);
                    uVar16 = uVar3;
                    if (uVar15 != 0) {
                        uVar12 = uVar15;
                        do {
                            if (*(uint *)(uVar12 + 0x20) < puVar9[1]) {
                                uVar13 = *(ulonglong *)(uVar12 + 0x18);
                            }
                            else {
                                uVar13 = *(ulonglong *)(uVar12 + 0x10);
                                uVar16 = uVar12;
                            }
                            uVar12 = uVar13;
                        } while (uVar13 != 0);
                    }
                    if ((uVar16 == uVar3) || (puVar9[1] < *(uint *)(uVar16 + 0x20))) {
                        local_78[0] = uVar3;
                        puVar14 = local_78;
                    }
                    else {
                        puVar14 = &local_res20;
                        local_res20 = uVar16;
                    }
                    if (*puVar14 != uVar3) {
                        plVar21 = *(longlong **)(*puVar14 + 0x28);
                    }
                    uVar16 = uVar3;
                    if (uVar15 != 0) {
                        do {
                            if (*(uint *)(uVar15 + 0x20) < puVar9[2]) {
                                uVar12 = *(ulonglong *)(uVar15 + 0x18);
                            }
                            else {
                                uVar12 = *(ulonglong *)(uVar15 + 0x10);
                                uVar16 = uVar15;
                            }
                            uVar15 = uVar12;
                        } while (uVar12 != 0);
                    }
                    if ((uVar16 == uVar3) || (puVar9[2] < *(uint *)(uVar16 + 0x20))) {
                        local_c8 = uVar3;
                        puVar14 = &local_c8;
                    }
                    else {
                        local_68[0] = uVar16;
                        puVar14 = local_68;
                    }
                    if (*puVar14 != uVar3) {
                        puVar19 = *(uint **)(*puVar14 + 0x28);
                    }
                    if ((plVar21 != (longlong *)0x0) || (puVar19 != (uint *)0x0)) {
                        ppuVar11 = (uint **)(**(code **)(*param_1 + 0x10))(param_1);
                        *ppuVar11 = puVar9;
                        ppuVar11[1] = (uint *)plVar21;
                        ppuVar11[2] = puVar19;
                        if ((plVar21 != (longlong *)0x0) && (puVar19 != (uint *)0x0)) {
                            uVar2 = *(undefined4 *)(*plVar21 + 0x18);
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c63e98 == 0) && (iVar7 = FUN_14024b720(), -1 < iVar7)) {
                                    lVar10 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar2);
                                    goto LAB_1404ae686;
                                }
                                LAB_1404ae69e:
                                iVar7 = 0;
                            }
                            else {
                                lVar10 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar2,DAT_140c63858);
                                LAB_1404ae686:
                                if (lVar10 == 0) goto LAB_1404ae69e;
                                iVar7 = *(int *)(lVar10 + 0x28);
                            }
                            uVar2 = *(undefined4 *)(*(longlong *)ppuVar11[2] + 0x18);
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c63e98 == 0) && (iVar8 = FUN_14024b720(), -1 < iVar8)) {
                                    lVar10 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar2);
                                    goto LAB_1404ae6e5;
                                }
                                LAB_1404ae6ef:
                                iVar8 = 0;
                            }
                            else {
                                lVar10 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar2,DAT_140c63858);
                                LAB_1404ae6e5:
                                if (lVar10 == 0) goto LAB_1404ae6ef;
                                iVar8 = *(int *)(lVar10 + 0x28);
                            }
                            if (iVar7 == iVar8) {
                                local_88[0] = uVar20;
                                local_80 = ppuVar11;
                                FUN_140055f80(param_1 + 0x15,local_58,local_88);
                                local_a8 = puVar9[2];
                                local_a0 = ppuVar11;
                                FUN_140055f80();
                                goto LAB_1404aea52;
                            }
                        }
                        pcVar4 = (char *)param_1[0x1a];
                        bVar22 = true;
                        pcVar5 = pcVar4;
                        pcVar18 = *(char **)(pcVar4 + 8);
                        while (pcVar18 != (char *)0x0) {
                            bVar22 = uVar20 < *(uint *)(pcVar18 + 0x20);
                            pcVar5 = pcVar18;
                            if (bVar22) {
                                pcVar18 = *(char **)(pcVar18 + 0x10);
                            }
                            else {
                                pcVar18 = *(char **)(pcVar18 + 0x18);
                            }
                        }
                        pcVar18 = pcVar5;
                        local_e8 = uVar20;
                        local_e0 = ppuVar11;
                        if (bVar22) {
                            if (pcVar5 != *(char **)(pcVar4 + 0x10)) {
                                if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
                                    pcVar18 = *(char **)(pcVar5 + 0x18);
                                }
                                else {
                                    pcVar18 = *(char **)(pcVar5 + 0x10);
                                    if (pcVar18 == (char *)0x0) {
                                        pcVar18 = *(char **)(pcVar5 + 8);
                                        pcVar17 = pcVar18;
                                        if (pcVar5 == *(char **)(pcVar18 + 0x10)) {
                                            do {
                                                pcVar18 = *(char **)(pcVar17 + 8);
                                                bVar22 = pcVar17 == *(char **)(pcVar18 + 0x10);
                                                pcVar17 = pcVar18;
                                            } while (bVar22);
                                        }
                                    }
                                    else {
                                        for (pcVar17 = *(char **)(pcVar18 + 0x18); pcVar17 != (char *)0x0;
                                             pcVar17 = *(char **)(pcVar17 + 0x18)) {
                                            pcVar18 = pcVar17;
                                        }
                                    }
                                }
                                goto LAB_1404ae84d;
                            }
                            FUN_140055e80(param_1 + 0x19,local_b8,0,pcVar5,&local_e8);
                        }
                        else {
                            LAB_1404ae84d:
                            if (*(uint *)(pcVar18 + 0x20) < uVar20) {
                                if ((pcVar5 == pcVar4) || (uVar20 < *(uint *)(pcVar5 + 0x20))) {
                                    lVar10 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack228,local_e8);
                                        *(uint ***)(lVar10 + 0x28) = ppuVar11;
                                    }
                                    *(longlong *)(pcVar5 + 0x10) = lVar10;
                                    pcVar4 = (char *)param_1[0x1a];
                                    if (pcVar5 == pcVar4) {
                                        *(longlong *)(pcVar4 + 8) = lVar10;
                                        *(longlong *)(param_1[0x1a] + 0x18) = lVar10;
                                    }
                                    else if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                                        *(longlong *)(pcVar4 + 0x10) = lVar10;
                                    }
                                }
                                else {
                                    lVar10 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack228,local_e8);
                                        *(uint ***)(lVar10 + 0x28) = ppuVar11;
                                    }
                                    *(longlong *)(pcVar5 + 0x18) = lVar10;
                                    if (pcVar5 == *(char **)(param_1[0x1a] + 0x18)) {
                                        *(longlong *)(param_1[0x1a] + 0x18) = lVar10;
                                    }
                                }
                                *(char **)(lVar10 + 8) = pcVar5;
                                *(undefined8 *)(lVar10 + 0x10) = 0;
                                *(undefined8 *)(lVar10 + 0x18) = 0;
                                FUN_1400081c0(lVar10,param_1[0x1a] + 8);
                                param_1[0x1b] = param_1[0x1b] + 1;
                            }
                        }
                        local_d8 = puVar9[1];
                        pcVar4 = (char *)param_1[0x1e];
                        bVar22 = true;
                        pcVar5 = pcVar4;
                        pcVar18 = *(char **)(pcVar4 + 8);
                        while (pcVar18 != (char *)0x0) {
                            bVar22 = local_d8 < *(uint *)(pcVar18 + 0x20);
                            pcVar5 = pcVar18;
                            if (bVar22) {
                                pcVar18 = *(char **)(pcVar18 + 0x10);
                            }
                            else {
                                pcVar18 = *(char **)(pcVar18 + 0x18);
                            }
                        }
                        pcVar18 = pcVar5;
                        local_d0 = ppuVar11;
                        if (bVar22) {
                            if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                                FUN_140055e80();
                                goto LAB_1404aea52;
                            }
                            if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
                                pcVar18 = *(char **)(pcVar5 + 0x18);
                            }
                            else {
                                pcVar18 = *(char **)(pcVar5 + 0x10);
                                if (pcVar18 == (char *)0x0) {
                                    pcVar18 = *(char **)(pcVar5 + 8);
                                    pcVar17 = pcVar18;
                                    if (pcVar5 == *(char **)(pcVar18 + 0x10)) {
                                        do {
                                            pcVar18 = *(char **)(pcVar17 + 8);
                                            bVar22 = pcVar17 == *(char **)(pcVar18 + 0x10);
                                            pcVar17 = pcVar18;
                                        } while (bVar22);
                                    }
                                }
                                else {
                                    for (pcVar17 = *(char **)(pcVar18 + 0x18); pcVar17 != (char *)0x0;
                                         pcVar17 = *(char **)(pcVar17 + 0x18)) {
                                        pcVar18 = pcVar17;
                                    }
                                }
                            }
                        }
                        if (*(uint *)(pcVar18 + 0x20) < local_d8) {
                            if ((pcVar5 == pcVar4) || (local_d8 < *(uint *)(pcVar5 + 0x20))) {
                                lVar10 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack212,local_d8);
                                    *(uint ***)(lVar10 + 0x28) = ppuVar11;
                                }
                                *(longlong *)(pcVar5 + 0x10) = lVar10;
                                pcVar4 = (char *)param_1[0x1e];
                                if (pcVar5 == pcVar4) {
                                    *(longlong *)(pcVar4 + 8) = lVar10;
                                    *(longlong *)(param_1[0x1e] + 0x18) = lVar10;
                                }
                                else if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                                    *(longlong *)(pcVar4 + 0x10) = lVar10;
                                }
                            }
                            else {
                                lVar10 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack212,local_d8);
                                    *(uint ***)(lVar10 + 0x28) = ppuVar11;
                                }
                                *(longlong *)(pcVar5 + 0x18) = lVar10;
                                if (pcVar5 == *(char **)(param_1[0x1e] + 0x18)) {
                                    *(longlong *)(param_1[0x1e] + 0x18) = lVar10;
                                }
                            }
                            *(char **)(lVar10 + 8) = pcVar5;
                            *(undefined8 *)(lVar10 + 0x10) = 0;
                            *(undefined8 *)(lVar10 + 0x18) = 0;
                            FUN_1400081c0();
                            param_1[0x1f] = param_1[0x1f] + 1;
                        }
                    }
                }
            }
            LAB_1404aea52:
            local_res18 = local_res18 + 1;
        } while (local_res18 < uVar6);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1404af1e0(undefined8 param_1,undefined8 param_2,int param_3,float *param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    lVar1 = FUN_1402413c0();
    if (lVar1 != 0) {
        lVar2 = FUN_14024b980();
        if (lVar2 != 0) {
            if ((DAT_140dc3100 & 1) == 0) {
                DAT_140dc3100 = DAT_140dc3100 | 1;
                _DAT_140dc310c = 0;
            }
            if ((DAT_140dc3100 & 2) == 0) {
                DAT_140dc3100 = DAT_140dc3100 | 2;
                DAT_140dc3114 = 0;
            }
            if ((DAT_140dc3100 & 4) == 0) {
                DAT_140dc3100 = DAT_140dc3100 | 4;
                _DAT_140dc311c = 0;
            }
            fVar5 = 0.0;
            if (DAT_140dc3114 == 0) {
                DAT_140dc3114 = 1;
                lVar3 = FUN_140200220(0x51e);
                DAT_140dc3110 = fVar5;
                if (lVar3 != 0) {
                    DAT_140dc3110 = *(float *)(lVar3 + 0x18);
                }
            }
            fVar6 = DAT_140dc3110;
            if (_DAT_140dc310c == 0) {
                _DAT_140dc310c = 1;
                lVar3 = FUN_140200220(0x3b8);
                DAT_140dc3108 = fVar5;
                if (lVar3 != 0) {
                    DAT_140dc3108 = *(float *)(lVar3 + 0x18);
                }
            }
            fVar6 = (float)(ulonglong)*(uint *)(lVar1 + 0x1c) * fVar6 * DAT_140dc3108;
            if (param_3 == *(int *)(lVar2 + 0x28)) {
                lVar3 = 0;
                fVar5 = *param_4 - *(float *)(lVar2 + 0xc);
                fVar4 = param_4[1] - *(float *)(lVar2 + 0x10);
                fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + 0.0) + fVar6;
                if ((9.223372e+18 <= fVar6) && (fVar6 = fVar6 - 9.223372e+18, fVar6 < 9.223372e+18)) {
                    lVar3 = -0x8000000000000000;
                }
            }
            else {
                if (_DAT_140dc311c == 0) {
                    _DAT_140dc311c = 1;
                    lVar2 = FUN_140200220(0x51e);
                    DAT_140dc3118 = fVar5;
                    if (lVar2 != 0) {
                        DAT_140dc3118 = *(float *)(lVar2 + 0x1c);
                    }
                }
                lVar3 = 0;
                fVar6 = (float)(ulonglong)*(uint *)(lVar1 + 0x1c) * DAT_140dc3118 + fVar6;
                if ((9.223372e+18 <= fVar6) && (fVar6 = fVar6 - 9.223372e+18, fVar6 < 9.223372e+18)) {
                    lVar3 = -0x8000000000000000;
                }
            }
            lVar2 = (longlong)fVar6 + lVar3;
        }
        return lVar2;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1404af440(void)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    float fVar6;

    lVar2 = FUN_1402413c0();
    if ((lVar2 != 0) && (lVar3 = FUN_14024b980(), lVar3 != 0)) {
        if ((DAT_140dc3120 & 1) == 0) {
            DAT_140dc3120 = DAT_140dc3120 | 1;
            DAT_140dc312c = 0;
        }
        if ((DAT_140dc3120 & 2) == 0) {
            DAT_140dc3120 = DAT_140dc3120 | 2;
            _DAT_140dc3138 = 0;
        }
        if ((DAT_140dc3120 & 4) == 0) {
            DAT_140dc3120 = DAT_140dc3120 | 4;
            _DAT_140dc3144 = 0;
        }
        iVar1 = *(int *)(lVar2 + 0x1c) + -1;
        iVar5 = 0;
        if (0 < iVar1) {
            iVar5 = iVar1;
        }
        if (DAT_140dc312c == 0) {
            DAT_140dc312c = 1;
            lVar2 = FUN_140200220();
            if (lVar2 == 0) {
                DAT_140dc3128 = 0;
            }
            else {
                DAT_140dc3128 = *(int *)(lVar2 + 4);
            }
        }
        iVar1 = DAT_140dc3128;
        fVar6 = 0.0;
        if (_DAT_140dc3144 == 0) {
            _DAT_140dc3144 = 1;
            lVar2 = FUN_140200220();
            DAT_140dc3140 = fVar6;
            if (lVar2 != 0) {
                DAT_140dc3140 = *(float *)(lVar2 + 0x20);
            }
        }
        lVar2 = 0;
        fVar6 = (float)(ulonglong)(uint)(iVar1 + iVar5) + DAT_140dc3140 * fVar6;
        if ((9.223372e+18 <= fVar6) && (fVar6 = fVar6 - 9.223372e+18, fVar6 < 9.223372e+18)) {
            lVar2 = -0x8000000000000000;
        }
        if (_DAT_140dc3138 == 0) {
            _DAT_140dc3138 = 1;
            lVar3 = FUN_140200220(0x51e);
            DAT_140dc3130 = 0;
            if (lVar3 != 0) {
                DAT_140dc3130 = (ulonglong)*(uint *)(lVar3 + 8);
            }
        }
        uVar4 = DAT_140dc3130;
        if ((ulonglong)((longlong)fVar6 + lVar2) < DAT_140dc3130) {
            uVar4 = (longlong)fVar6 + lVar2;
        }
        return uVar4;
    }
    return 0;
}



undefined8 FUN_1404af5f0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c659d0 + 0x30);
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



undefined8 FUN_1404af650(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xf0);
        local_res18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar1;
        }
        if (local_res18 != lVar1) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



bool FUN_1404af6b0(undefined8 param_1,int param_2,uint param_3,int param_4)

{
    longlong lVar1;

    if (param_2 != 0) {
        lVar1 = FUN_1402413c0();
        if (((lVar1 != 0) && (*(uint *)(lVar1 + 0x20) != 0)) &&
            ((*(int *)(lVar1 + 8) == 0 || (param_4 == *(int *)(lVar1 + 8))))) {
            return *(uint *)(lVar1 + 0x20) <= param_3;
        }
    }
    return false;
}



longlong FUN_1404af710(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong **pplVar6;
    longlong **local_res8;

    if (param_1 == param_2) {
        return param_1;
    }
    puVar1 = *(undefined8 **)(param_2 + 8);
    local_res8 = *(longlong ***)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar1;
    pplVar6 = (longlong **)*local_res8;
    while (pplVar6 != local_res8) {
        if (puVar2 == puVar1) goto joined_r0x0001404af763;
        pplVar3 = (longlong **)(puVar2 + 2);
        puVar2 = (undefined8 *)*puVar2;
        pplVar6[2] = *pplVar3;
        pplVar6 = (longlong **)*pplVar6;
    }
    if (puVar2 != puVar1) {
        FUN_14001fdd0(param_1,&local_res8);
        return param_1;
    }
    joined_r0x0001404af763:
    while (pplVar6 != local_res8) {
        pplVar3 = (longlong **)*pplVar6;
        plVar4 = *pplVar6;
        plVar5 = pplVar6[1];
        *plVar5 = (longlong)plVar4;
        plVar4[1] = (longlong)plVar5;
        FUN_14018b900(pplVar6,0);
        pplVar6 = pplVar3;
    }
    return param_1;
}



undefined8 FUN_1404af7d0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    longlong local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    if (*(int *)(param_1 + 0x20) != 0) {
        local_48 = *(longlong *)(DAT_140c65898 + 0x78);
        if (local_48 == 0) {
            return 0;
        }
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 8;
        local_20 = 0;
        local_18 = 0xffffffff;
        local_1c = param_2;
        iVar1 = FUN_1404a1ca0(DAT_140c659a0,&local_48);
        if (iVar1 == 0) {
            return 0;
        }
    }
    if ((*(int *)(param_1 + 0x24) != 4) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x3700) != *(int *)(param_1 + 0x24))) {
        return 0;
    }
    if (*(int *)(param_1 + 0x28) != 0x17) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
            iVar1 = 0x17;
        }
        else {
            iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
        }
        if (iVar1 != *(int *)(param_1 + 0x28)) {
            return 0;
        }
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1404af8c0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    char *pcVar6;
    char *pcVar7;
    uint uVar8;
    undefined *puVar9;
    longlong lVar10;
    uint *puVar11;
    longlong *plVar12;
    longlong lVar13;
    uint *puVar14;
    ulonglong uVar15;
    undefined4 *puVar16;
    undefined8 *puVar17;
    undefined8 *puVar18;
    char *pcVar19;
    char *pcVar20;
    ulonglong *puVar21;
    undefined8 *puVar22;
    int iVar23;
    longlong lVar24;
    longlong lVar25;
    uint uVar26;
    uint **ppuVar27;
    bool bVar28;
    uint local_res10;
    uint local_res20 [2];
    uint *in_stack_fffffffffffffe78;
    undefined4 uVar29;
    wchar_t *in_stack_fffffffffffffe88;
    uint local_150;
    undefined4 uStack332;
    uint *local_148;
    uint local_140;
    undefined4 uStack316;
    uint local_130 [2];
    uint *local_128;
    uint **local_120;
    ulonglong local_118;
    uint local_110 [2];
    uint *local_108;
    uint local_100;
    undefined4 uStack252;
    longlong local_f0;
    longlong local_e8;
    longlong local_e0;
    longlong local_d8;
    uint local_d0;
    undefined4 uStack204;
    uint local_c0 [2];
    undefined4 *local_b8;
    uint local_b0;
    undefined4 uStack172;
    uint local_a0 [2];
    uint *local_98;
    undefined4 local_90 [2];
    undefined4 *local_88;
    undefined local_70 [24];
    undefined local_58 [24];

    iVar23 = 1;
    plVar12 = (longlong *)(param_1 + 8);
    do {
        puVar9 = (undefined *)FUN_14018b280(0x30);
        iVar23 = iVar23 + -1;
        plVar12[1] = 0;
        *plVar12 = (longlong)puVar9;
        *puVar9 = 0;
        *(undefined8 *)(*plVar12 + 8) = 0;
        *(longlong *)(*plVar12 + 0x10) = *plVar12;
        *(longlong *)(*plVar12 + 0x18) = *plVar12;
        plVar12 = plVar12 + 4;
    } while (-1 < iVar23);
    lVar1 = param_1 + 0x40;
    puVar9 = (undefined *)FUN_14018b280(0x30);
    uVar26 = 0;
    *(undefined **)(param_1 + 0x48) = puVar9;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *puVar9 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    puVar9 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar9;
    *puVar9 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    puVar9 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined **)(param_1 + 0x88) = puVar9;
    *puVar9 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
    FUN_140236320();
    FUN_140236ba0();
    uVar8 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64784 == 0) && (iVar23 = FUN_14020f200(), -1 < iVar23)) {
            uVar8 = (**(code **)(*DAT_140c640b8 + 0x28))();
        }
    }
    else {
        uVar8 = (*DAT_140c63838)(&PTR_u_LevelUpUnlock_140a6b080,DAT_140c63858);
    }
    if (uVar8 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64784 == 0) && (iVar23 = FUN_14020f200(), -1 < iVar23)) {
                    lVar10 = (**(code **)(*DAT_140c640b8 + 0x20))(DAT_140c640b8,uVar26);
                    goto LAB_1404afa7b;
                }
            }
            else {
                lVar10 = (*DAT_140c63848)(&PTR_u_LevelUpUnlock_140a6b080,uVar26,DAT_140c63858);
                LAB_1404afa7b:
                if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
                    puVar11 = (uint *)FUN_14018b280(0x30);
                    if (puVar11 != (uint *)0x0) {
                        puVar11 = (uint *)FUN_1404b36e0(puVar11,lVar10);
                    }
                    local_150 = *puVar11;
                    local_148 = puVar11;
                    FUN_140055f80(lVar1,local_130,&local_150);
                    local_140 = puVar11[2];
                    lVar24 = (longlong)(int)puVar11[1] * 0x20 + param_1;
                    lVar10 = *(longlong *)(lVar24 + 8);
                    lVar13 = lVar10;
                    lVar5 = *(longlong *)(lVar10 + 8);
                    while (lVar5 != 0) {
                        lVar13 = lVar5;
                        if (local_140 < *(uint *)(lVar5 + 0x20)) {
                            lVar5 = *(longlong *)(lVar5 + 0x10);
                        }
                        else {
                            lVar5 = *(longlong *)(lVar5 + 0x18);
                        }
                    }
                    if ((lVar13 == lVar10) || (local_140 < *(uint *)(lVar13 + 0x20))) {
                        lVar10 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack316,local_140);
                            *(uint **)(lVar10 + 0x28) = puVar11;
                        }
                        *(longlong *)(lVar13 + 0x10) = lVar10;
                        lVar5 = *(longlong *)(lVar24 + 8);
                        if (lVar13 == lVar5) {
                            *(longlong *)(lVar5 + 8) = lVar10;
                            *(longlong *)(*(longlong *)(lVar24 + 8) + 0x18) = lVar10;
                        }
                        else if (lVar13 == *(longlong *)(lVar5 + 0x10)) {
                            *(longlong *)(lVar5 + 0x10) = lVar10;
                        }
                    }
                    else {
                        lVar10 = FUN_14018b280(0x30,0);
                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack316,local_140);
                            *(uint **)(lVar10 + 0x28) = puVar11;
                        }
                        *(longlong *)(lVar13 + 0x18) = lVar10;
                        if (lVar13 == *(longlong *)(*(longlong *)(lVar24 + 8) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar24 + 8) + 0x18) = lVar10;
                        }
                    }
                    *(longlong *)(lVar10 + 8) = lVar13;
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar24 + 0x10) = *(longlong *)(lVar24 + 0x10) + 1;
                }
            }
            uVar26 = uVar26 + 1;
        } while (uVar26 < uVar8);
    }
    local_res10 = 0;
    lVar10 = DAT_140c65968;
    do {
        local_118 = 0;
        lVar13 = *(longlong *)(lVar10 + 0x50);
        lVar24 = lVar13;
        lVar5 = *(longlong *)(lVar13 + 8);
        while (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x20) < (int)local_res10) {
                lVar5 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar24 = lVar5;
                lVar5 = *(longlong *)(lVar5 + 0x10);
            }
        }
        if ((lVar24 == lVar13) || ((int)local_res10 < *(int *)(lVar24 + 0x20))) {
            local_e8 = lVar13;
            plVar12 = &local_e8;
        }
        else {
            local_f0 = lVar24;
            plVar12 = &local_f0;
        }
        uVar15 = local_118;
        if (*plVar12 != lVar13) {
            uVar15 = *(ulonglong *)(*plVar12 + 0x30);
        }
        uVar8 = 0xffffffff;
        if ((uint)uVar15 != 0xffffffff) {
            uVar8 = (uint)uVar15;
        }
        if (uVar8 != 0) {
            local_118 = (ulonglong)uVar8;
        }
        uVar8 = (uint)local_118;
        uVar15 = local_118;
        while (uVar8 != 0) {
            lVar24 = 0;
            iVar23 = (int)uVar15;
            lVar13 = *(longlong *)(lVar10 + 0x50);
            lVar25 = lVar13;
            lVar5 = *(longlong *)(lVar13 + 8);
            while (lVar5 != 0) {
                if (*(int *)(lVar5 + 0x20) < (int)local_res10) {
                    lVar5 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar25 = lVar5;
                    lVar5 = *(longlong *)(lVar5 + 0x10);
                }
            }
            if ((lVar25 == lVar13) || ((int)local_res10 < *(int *)(lVar25 + 0x20))) {
                local_e0 = lVar13;
                plVar12 = &local_e0;
            }
            else {
                local_d8 = lVar25;
                plVar12 = &local_d8;
            }
            lVar5 = *plVar12;
            if ((lVar5 != lVar13) && (local_118 - 1 < *(ulonglong *)(lVar5 + 0x30))) {
                lVar24 = *(longlong *)(*(longlong *)(lVar5 + 0x28) + (local_118 - 1) * 8);
            }
            ppuVar27 = *(uint ***)(lVar24 + 0x10);
            local_120 = ppuVar27;
            if (ppuVar27 != *(uint ***)(lVar24 + 0x18)) {
                do {
                    puVar11 = *ppuVar27;
                    if (puVar11[1] == 0) {
                        uVar26 = (uint)uVar15;
                        local_120 = ppuVar27;
                        if ((puVar11[4] != 0) && (lVar10 = FUN_1400b5df0(), lVar10 != 0)) {
                            lVar13 = FUN_14018b280();
                            if (lVar13 == 0) {
                                puVar14 = (uint *)0x0;
                            }
                            else {
                                in_stack_fffffffffffffe88 = *(wchar_t **)(lVar10 + 0x1e8);
                                in_stack_fffffffffffffe78 =
                                        (uint *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe78 >> 0x20),0x24);
                                puVar14 = (uint *)FUN_1404b37e0(lVar13,*puVar11,0,uVar15,in_stack_fffffffffffffe78,
                                                                *(undefined4 *)(lVar10 + 0x1dc),
                                                                in_stack_fffffffffffffe88,puVar11[7],local_res10,
                                                                puVar11[4]);
                            }
                            pcVar6 = *(char **)(param_1 + 0x48);
                            local_100 = *puVar14;
                            bVar28 = true;
                            pcVar7 = pcVar6;
                            pcVar20 = *(char **)(pcVar6 + 8);
                            while (pcVar20 != (char *)0x0) {
                                bVar28 = local_100 < *(uint *)(pcVar20 + 0x20);
                                pcVar7 = pcVar20;
                                if (bVar28) {
                                    pcVar20 = *(char **)(pcVar20 + 0x10);
                                }
                                else {
                                    pcVar20 = *(char **)(pcVar20 + 0x18);
                                }
                            }
                            pcVar20 = pcVar7;
                            if (bVar28) {
                                if (pcVar7 != *(char **)(pcVar6 + 0x10)) {
                                    if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
                                        pcVar20 = *(char **)(pcVar7 + 0x18);
                                    }
                                    else {
                                        pcVar20 = *(char **)(pcVar7 + 0x10);
                                        if (pcVar20 == (char *)0x0) {
                                            pcVar20 = *(char **)(pcVar7 + 8);
                                            pcVar19 = pcVar20;
                                            if (pcVar7 == *(char **)(pcVar20 + 0x10)) {
                                                do {
                                                    pcVar20 = *(char **)(pcVar19 + 8);
                                                    bVar28 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                    pcVar19 = pcVar20;
                                                } while (bVar28);
                                            }
                                        }
                                        else {
                                            for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                 pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                pcVar20 = pcVar19;
                                            }
                                        }
                                    }
                                    goto LAB_1404afe0d;
                                }
                                LAB_1404afe17:
                                if ((pcVar7 == pcVar6) || (local_100 < *(uint *)(pcVar7 + 0x20))) {
                                    lVar10 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack252,local_100);
                                        *(uint **)(lVar10 + 0x28) = puVar14;
                                    }
                                    *(longlong *)(pcVar7 + 0x10) = lVar10;
                                    pcVar6 = *(char **)(param_1 + 0x48);
                                    if (pcVar7 == pcVar6) {
                                        *(longlong *)(pcVar6 + 8) = lVar10;
                                        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                    }
                                    else if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                                        *(longlong *)(pcVar6 + 0x10) = lVar10;
                                    }
                                }
                                else {
                                    lVar10 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack252,local_100);
                                        *(uint **)(lVar10 + 0x28) = puVar14;
                                    }
                                    *(longlong *)(pcVar7 + 0x18) = lVar10;
                                    if (pcVar7 == *(char **)(*(longlong *)(param_1 + 0x48) + 0x18)) {
                                        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                    }
                                }
                                *(char **)(lVar10 + 8) = pcVar7;
                                *(undefined8 *)(lVar10 + 0x10) = 0;
                                *(undefined8 *)(lVar10 + 0x18) = 0;
                                FUN_1400081c0(lVar10,*(longlong *)(param_1 + 0x48) + 8);
                                *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
                            }
                            else {
                                LAB_1404afe0d:
                                if (*(uint *)(pcVar20 + 0x20) < local_100) goto LAB_1404afe17;
                            }
                            local_b0 = puVar14[2];
                            lVar25 = (longlong)(int)puVar14[1] * 0x20 + param_1;
                            lVar10 = *(longlong *)(lVar25 + 8);
                            lVar13 = lVar10;
                            lVar5 = *(longlong *)(lVar10 + 8);
                            while (lVar5 != 0) {
                                lVar13 = lVar5;
                                if (local_b0 < *(uint *)(lVar5 + 0x20)) {
                                    lVar5 = *(longlong *)(lVar5 + 0x10);
                                }
                                else {
                                    lVar5 = *(longlong *)(lVar5 + 0x18);
                                }
                            }
                            if ((lVar13 == lVar10) || (local_b0 < *(uint *)(lVar13 + 0x20))) {
                                lVar10 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack172,local_b0);
                                    *(uint **)(lVar10 + 0x28) = puVar14;
                                }
                                *(longlong *)(lVar13 + 0x10) = lVar10;
                                lVar5 = *(longlong *)(lVar25 + 8);
                                if (lVar13 == lVar5) {
                                    *(longlong *)(lVar5 + 8) = lVar10;
                                    *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18) = lVar10;
                                }
                                else if (lVar13 == *(longlong *)(lVar5 + 0x10)) {
                                    *(longlong *)(lVar5 + 0x10) = lVar10;
                                }
                            }
                            else {
                                lVar10 = FUN_14018b280(0x30,0);
                                if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack172,local_b0);
                                    *(uint **)(lVar10 + 0x28) = puVar14;
                                }
                                *(longlong *)(lVar13 + 0x18) = lVar10;
                                if (lVar13 == *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18)) {
                                    *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18) = lVar10;
                                }
                            }
                            *(longlong *)(lVar10 + 8) = lVar13;
                            *(undefined8 *)(lVar10 + 0x10) = 0;
                            *(undefined8 *)(lVar10 + 0x18) = 0;
                            FUN_1400081c0();
                            *(longlong *)(lVar25 + 0x10) = *(longlong *)(lVar25 + 0x10) + 1;
                            uVar26 = uVar8;
                        }
                        if (puVar11[3] != 0) {
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c64d94 != 0) || (iVar23 = FUN_140236320(), iVar23 < 0))
                                    goto LAB_1404b0314;
                                lVar10 = (**(code **)(*DAT_140c653f0 + 0x18))();
                            }
                            else {
                                lVar10 = (*DAT_140c63840)();
                            }
                            if (lVar10 != 0) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c64510 != 0) || (iVar23 = FUN_140236ba0(), iVar23 < 0))
                                        goto LAB_1404b0314;
                                    lVar10 = (**(code **)(*DAT_140c654e0 + 0x18))();
                                }
                                else {
                                    lVar10 = (*DAT_140c63840)();
                                }
                                if (lVar10 != 0) {
                                    lVar13 = FUN_14018b280(0x30);
                                    if (lVar13 == 0) {
                                        puVar14 = (uint *)0x0;
                                    }
                                    else {
                                        uVar15 = *(ulonglong *)(lVar10 + 0x48);
                                        if (uVar15 == 0) {
                                            in_stack_fffffffffffffe88 = (wchar_t *)0x0;
                                        }
                                        else if (DAT_140c3fe70 < uVar15) {
                                            in_stack_fffffffffffffe88 = (wchar_t *)0x0;
                                        }
                                        else {
                                            in_stack_fffffffffffffe88 = (wchar_t *)(uVar15 + DAT_140c3fe68);
                                        }
                                        in_stack_fffffffffffffe78 =
                                                (uint *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffe78 >> 0x20),0x25);
                                        puVar14 = (uint *)FUN_1404b37e0(lVar13,*puVar11,1,uVar26,
                                                                        in_stack_fffffffffffffe78,
                                                                        *(undefined4 *)(lVar10 + 4),
                                                                        in_stack_fffffffffffffe88,puVar11[7],local_res10
                                                ,puVar11[3]);
                                    }
                                    pcVar6 = *(char **)(param_1 + 0x48);
                                    local_140 = *puVar14;
                                    bVar28 = true;
                                    pcVar7 = pcVar6;
                                    pcVar20 = *(char **)(pcVar6 + 8);
                                    while (pcVar20 != (char *)0x0) {
                                        bVar28 = local_140 < *(uint *)(pcVar20 + 0x20);
                                        pcVar7 = pcVar20;
                                        if (bVar28) {
                                            pcVar20 = *(char **)(pcVar20 + 0x10);
                                        }
                                        else {
                                            pcVar20 = *(char **)(pcVar20 + 0x18);
                                        }
                                    }
                                    pcVar20 = pcVar7;
                                    if (bVar28) {
                                        if (pcVar7 != *(char **)(pcVar6 + 0x10)) {
                                            if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)
                                                    ) {
                                                pcVar20 = *(char **)(pcVar7 + 0x18);
                                            }
                                            else {
                                                pcVar20 = *(char **)(pcVar7 + 0x10);
                                                if (pcVar20 == (char *)0x0) {
                                                    pcVar20 = *(char **)(pcVar7 + 8);
                                                    pcVar19 = pcVar20;
                                                    if (pcVar7 == *(char **)(pcVar20 + 0x10)) {
                                                        do {
                                                            pcVar20 = *(char **)(pcVar19 + 8);
                                                            bVar28 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                            pcVar19 = pcVar20;
                                                        } while (bVar28);
                                                    }
                                                }
                                                else {
                                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                        pcVar20 = pcVar19;
                                                    }
                                                }
                                            }
                                            goto LAB_1404b017d;
                                        }
                                        LAB_1404b0187:
                                        if ((pcVar7 == pcVar6) || (local_140 < *(uint *)(pcVar7 + 0x20))) {
                                            lVar10 = FUN_14018b280(0x30);
                                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack316,local_140);
                                                *(uint **)(lVar10 + 0x28) = puVar14;
                                            }
                                            *(longlong *)(pcVar7 + 0x10) = lVar10;
                                            pcVar6 = *(char **)(param_1 + 0x48);
                                            if (pcVar7 == pcVar6) {
                                                *(longlong *)(pcVar6 + 8) = lVar10;
                                                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                            }
                                            else if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                                                *(longlong *)(pcVar6 + 0x10) = lVar10;
                                            }
                                        }
                                        else {
                                            lVar10 = FUN_14018b280(0x30);
                                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack316,local_140);
                                                *(uint **)(lVar10 + 0x28) = puVar14;
                                            }
                                            *(longlong *)(pcVar7 + 0x18) = lVar10;
                                            if (pcVar7 == *(char **)(*(longlong *)(param_1 + 0x48) + 0x18)) {
                                                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                            }
                                        }
                                        *(char **)(lVar10 + 8) = pcVar7;
                                        *(undefined8 *)(lVar10 + 0x10) = 0;
                                        *(undefined8 *)(lVar10 + 0x18) = 0;
                                        FUN_1400081c0(lVar10,*(longlong *)(param_1 + 0x48) + 8);
                                        *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
                                    }
                                    else {
                                        LAB_1404b017d:
                                        if (*(uint *)(pcVar20 + 0x20) < local_140) goto LAB_1404b0187;
                                    }
                                    local_d0 = puVar14[2];
                                    lVar25 = (longlong)(int)puVar14[1] * 0x20 + param_1;
                                    lVar10 = *(longlong *)(lVar25 + 8);
                                    lVar13 = lVar10;
                                    lVar5 = *(longlong *)(lVar10 + 8);
                                    while (lVar5 != 0) {
                                        lVar13 = lVar5;
                                        if (local_d0 < *(uint *)(lVar5 + 0x20)) {
                                            lVar5 = *(longlong *)(lVar5 + 0x10);
                                        }
                                        else {
                                            lVar5 = *(longlong *)(lVar5 + 0x18);
                                        }
                                    }
                                    if ((lVar13 == lVar10) || (local_d0 < *(uint *)(lVar13 + 0x20))) {
                                        lVar10 = FUN_14018b280(0x30);
                                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack204,local_d0);
                                            *(uint **)(lVar10 + 0x28) = puVar14;
                                        }
                                        *(longlong *)(lVar13 + 0x10) = lVar10;
                                        lVar5 = *(longlong *)(lVar25 + 8);
                                        if (lVar13 == lVar5) {
                                            *(longlong *)(lVar5 + 8) = lVar10;
                                            *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18) = lVar10;
                                        }
                                        else if (lVar13 == *(longlong *)(lVar5 + 0x10)) {
                                            *(longlong *)(lVar5 + 0x10) = lVar10;
                                        }
                                    }
                                    else {
                                        lVar10 = FUN_14018b280(0x30,0);
                                        if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                            *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack204,local_d0);
                                            *(uint **)(lVar10 + 0x28) = puVar14;
                                        }
                                        *(longlong *)(lVar13 + 0x18) = lVar10;
                                        if (lVar13 == *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18)) {
                                            *(longlong *)(*(longlong *)(lVar25 + 8) + 0x18) = lVar10;
                                        }
                                    }
                                    *(longlong *)(lVar10 + 8) = lVar13;
                                    *(undefined8 *)(lVar10 + 0x10) = 0;
                                    *(undefined8 *)(lVar10 + 0x18) = 0;
                                    FUN_1400081c0();
                                    *(longlong *)(lVar25 + 0x10) = *(longlong *)(lVar25 + 0x10) + 1;
                                }
                            }
                        }
                        LAB_1404b0314:
                        lVar10 = DAT_140c65b80;
                        if (puVar11[5] != 0) {
                            local_res20[0] = puVar11[5];
                            uVar15 = (**(code **)(DAT_140c65b80 + 0x20))(local_res20);
                            puVar21 = *(ulonglong **)
                                    (*(longlong *)(lVar10 + 0x18) +
                                     (uVar15 % *(ulonglong *)(lVar10 + 0x10)) * 8);
                            if (puVar21 != (ulonglong *)0x0) {
                                LAB_1404b0350:
                                if ((uVar15 != *puVar21) || (iVar23 = (**(code **)(lVar10 + 0x28))(), iVar23 == 0))
                                    goto LAB_1404b036b;
                                if (((puVar21 + 3 != (ulonglong *)0x0) && (uVar15 = puVar21[3], uVar15 != 0)) &&
                                    (*(longlong *)(uVar15 + 8) != 0)) {
                                    puVar14 = (uint *)FUN_14018b280(0x30);
                                    if (puVar14 == (uint *)0x0) {
                                        puVar14 = (uint *)0x0;
                                    }
                                    else {
                                        uVar26 = puVar11[5];
                                        uVar2 = puVar11[7];
                                        uVar3 = *(uint *)(*(longlong *)(uVar15 + 8) + 4);
                                        uVar4 = *puVar11;
                                        puVar14[1] = 1;
                                        puVar18 = (undefined8 *)0x0;
                                        puVar14[3] = 0x27;
                                        *puVar14 = uVar4 | 0x8000000;
                                        puVar14[2] = uVar8;
                                        puVar14[4] = uVar3;
                                        puVar22 = puVar18;
                                        do {
                                            puVar22 = (undefined8 *)((longlong)puVar22 + 1);
                                        } while (L"ClientSprites:UI_Temp_Quest"[(longlong)puVar22] != L'\0');
                                        puVar17 = (undefined8 *)FUN_14018b280((longlong)puVar22 * 2 + 0x12,0);
                                        if (puVar17 != (undefined8 *)0x0) {
                                            puVar17[1] = puVar22;
                                            *puVar17 = &PTR_LAB_140b55060;
                                            puVar18 = puVar17;
                                        }
                                        puVar18 = puVar18 + 2;
                                        FUN_1407db590(puVar18,L"ClientSprites:UI_Temp_Quest");
                                        *(undefined2 *)((longlong)puVar18 + (longlong)puVar22 * 2) = 0;
                                        *(undefined8 **)(puVar14 + 6) = puVar18;
                                        puVar14[8] = uVar2;
                                        puVar14[0xb] = uVar26;
                                        puVar14[9] = local_res10;
                                        puVar14[10] = 0x17;
                                        ppuVar27 = local_120;
                                    }
                                    pcVar6 = *(char **)(param_1 + 0x48);
                                    local_150 = *puVar14;
                                    bVar28 = true;
                                    pcVar7 = pcVar6;
                                    pcVar20 = *(char **)(pcVar6 + 8);
                                    while (pcVar20 != (char *)0x0) {
                                        bVar28 = local_150 < *(uint *)(pcVar20 + 0x20);
                                        pcVar7 = pcVar20;
                                        if (bVar28) {
                                            pcVar20 = *(char **)(pcVar20 + 0x10);
                                        }
                                        else {
                                            pcVar20 = *(char **)(pcVar20 + 0x18);
                                        }
                                    }
                                    pcVar20 = pcVar7;
                                    if (bVar28) {
                                        if (pcVar7 != *(char **)(pcVar6 + 0x10)) {
                                            if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)
                                                    ) {
                                                pcVar20 = *(char **)(pcVar7 + 0x18);
                                            }
                                            else {
                                                pcVar20 = *(char **)(pcVar7 + 0x10);
                                                if (pcVar20 == (char *)0x0) {
                                                    pcVar20 = *(char **)(pcVar7 + 8);
                                                    pcVar19 = pcVar20;
                                                    if (pcVar7 == *(char **)(pcVar20 + 0x10)) {
                                                        do {
                                                            pcVar20 = *(char **)(pcVar19 + 8);
                                                            bVar28 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                            pcVar19 = pcVar20;
                                                        } while (bVar28);
                                                    }
                                                }
                                                else {
                                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                        pcVar20 = pcVar19;
                                                    }
                                                }
                                            }
                                            goto LAB_1404b059d;
                                        }
                                        LAB_1404b05a7:
                                        if ((pcVar7 == pcVar6) || (local_150 < *(uint *)(pcVar7 + 0x20))) {
                                            lVar10 = FUN_14018b280(0x30);
                                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack332,local_150);
                                                *(uint **)(lVar10 + 0x28) = puVar14;
                                            }
                                            *(longlong *)(pcVar7 + 0x10) = lVar10;
                                            pcVar6 = *(char **)(param_1 + 0x48);
                                            if (pcVar7 == pcVar6) {
                                                *(longlong *)(pcVar6 + 8) = lVar10;
                                                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                            }
                                            else if (pcVar7 == *(char **)(pcVar6 + 0x10)) {
                                                *(longlong *)(pcVar6 + 0x10) = lVar10;
                                            }
                                        }
                                        else {
                                            lVar10 = FUN_14018b280(0x30);
                                            if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
                                                *(undefined8 *)(lVar10 + 0x20) = CONCAT44(uStack332,local_150);
                                                *(uint **)(lVar10 + 0x28) = puVar14;
                                            }
                                            *(longlong *)(pcVar7 + 0x18) = lVar10;
                                            if (pcVar7 == *(char **)(*(longlong *)(param_1 + 0x48) + 0x18)) {
                                                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar10;
                                            }
                                        }
                                        *(char **)(lVar10 + 8) = pcVar7;
                                        *(undefined8 *)(lVar10 + 0x10) = 0;
                                        *(undefined8 *)(lVar10 + 0x18) = 0;
                                        FUN_1400081c0(lVar10,*(longlong *)(param_1 + 0x48) + 8);
                                        *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
                                    }
                                    else {
                                        LAB_1404b059d:
                                        if (*(uint *)(pcVar20 + 0x20) < local_150) goto LAB_1404b05a7;
                                    }
                                    local_a0[0] = puVar14[2];
                                    lVar10 = *(longlong *)
                                            (*(longlong *)((longlong)(int)puVar14[1] * 0x20 + param_1 + 8) + 8);
                                    while (lVar10 != 0) {
                                        if (local_a0[0] < *(uint *)(lVar10 + 0x20)) {
                                            lVar10 = *(longlong *)(lVar10 + 0x10);
                                        }
                                        else {
                                            lVar10 = *(longlong *)(lVar10 + 0x18);
                                        }
                                    }
                                    in_stack_fffffffffffffe78 = local_a0;
                                    local_98 = puVar14;
                                    FUN_140055e80();
                                }
                            }
                        }
                        LAB_1404b0381:
                        if (puVar11[6] != 0) {
                            lVar10 = FUN_1401f1860();
                            uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
                            if (lVar10 != 0) {
                                puVar16 = (undefined4 *)FUN_14018b280();
                                if (puVar16 != (undefined4 *)0x0) {
                                    in_stack_fffffffffffffe88 = L"ClientSprites:Icon_ItemMisc_letter_0001";
                                    puVar16 = (undefined4 *)
                                            FUN_1404b37e0(puVar16,*puVar11,2,uVar8,CONCAT44(uVar29,0x26),
                                                          *(undefined4 *)(lVar10 + 0xc),
                                                          L"ClientSprites:Icon_ItemMisc_letter_0001",puVar11[7],
                                                          local_res10,puVar11[6]);
                                }
                                local_90[0] = *puVar16;
                                local_88 = puVar16;
                                FUN_140055f80(lVar1,local_58,local_90);
                                local_c0[0] = puVar16[2];
                                lVar10 = *(longlong *)
                                        (*(longlong *)((longlong)(int)puVar16[1] * 0x20 + param_1 + 8) + 8);
                                while (lVar10 != 0) {
                                    if (local_c0[0] < *(uint *)(lVar10 + 0x20)) {
                                        lVar10 = *(longlong *)(lVar10 + 0x10);
                                    }
                                    else {
                                        lVar10 = *(longlong *)(lVar10 + 0x18);
                                    }
                                }
                                in_stack_fffffffffffffe78 = local_c0;
                                local_b8 = puVar16;
                                FUN_140055e80();
                            }
                        }
                        if (puVar11[10] != 0) {
                            lVar10 = FUN_1402215c0();
                            uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
                            if (lVar10 != 0) {
                                puVar14 = (uint *)FUN_14018b280();
                                uVar15 = (ulonglong)uVar8;
                                if (puVar14 != (uint *)0x0) {
                                    in_stack_fffffffffffffe88 = L"ClientSprites:Icon_ItemMisc_letter_0001";
                                    puVar14 = (uint *)FUN_1404b37e0(puVar14,*puVar11,4,uVar8,CONCAT44(uVar29,0x28),
                                                                    *(undefined4 *)(lVar10 + 4),
                                                                    L"ClientSprites:Icon_ItemMisc_letter_0001",
                                                                    puVar11[7],local_res10,puVar11[10]);
                                }
                                local_110[0] = *puVar14;
                                local_108 = puVar14;
                                FUN_140055f80(lVar1,local_70,local_110);
                                local_130[0] = puVar14[2];
                                lVar10 = *(longlong *)
                                        (*(longlong *)((longlong)(int)puVar14[1] * 0x20 + param_1 + 8) + 8);
                                while (lVar10 != 0) {
                                    if (local_130[0] < *(uint *)(lVar10 + 0x20)) {
                                        lVar10 = *(longlong *)(lVar10 + 0x10);
                                    }
                                    else {
                                        lVar10 = *(longlong *)(lVar10 + 0x18);
                                    }
                                }
                                in_stack_fffffffffffffe78 = local_130;
                                local_128 = puVar14;
                                FUN_140055e80();
                                goto LAB_1404b0821;
                            }
                        }
                        uVar15 = (ulonglong)uVar8;
                    }
                    LAB_1404b0821:
                    iVar23 = (int)uVar15;
                    ppuVar27 = ppuVar27 + 1;
                    lVar10 = DAT_140c65968;
                    local_120 = ppuVar27;
                } while (ppuVar27 != *(uint ***)(lVar24 + 0x18));
            }
            uVar8 = iVar23 - 1;
            uVar15 = (ulonglong)uVar8;
            local_118 = local_118 - 1;
        }
        uVar8 = 0;
        local_res10 = local_res10 + 1;
    } while (local_res10 < 4);
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63b9c != 0) || (iVar23 = FUN_14023e2a0(), iVar23 < 0)) {
                LAB_1404b09d7:
                FUN_14020f520();
                FUN_1404b1bb0(param_1);
                return param_1;
            }
            uVar26 = (**(code **)(*DAT_140c646f0 + 0x28))();
        }
        else {
            uVar26 = (*DAT_140c63838)(&PTR_u_SpellLevel_140a6d738,DAT_140c63858);
        }
        if (uVar26 <= uVar8) goto LAB_1404b09d7;
        puVar16 = (undefined4 *)FUN_14023e560(uVar8);
        lVar10 = FUN_140236580(puVar16[4]);
        if (((((uint)puVar16[1] < 0x17) && ((uint)puVar16[2] < 100)) && (lVar10 != 0)) &&
            (lVar10 = FUN_140236e00(*(undefined4 *)(lVar10 + 0x10)), lVar10 != 0)) {
            puVar11 = (uint *)FUN_14018b280(0x30);
            if (puVar11 != (uint *)0x0) {
                uVar15 = *(ulonglong *)(lVar10 + 0x48);
                if (uVar15 == 0) {
                    lVar13 = 0;
                }
                else if (DAT_140c3fe70 < uVar15) {
                    lVar13 = 0;
                }
                else {
                    lVar13 = uVar15 + DAT_140c3fe68;
                }
                in_stack_fffffffffffffe88 =
                        (wchar_t *)
                                ((ulonglong)in_stack_fffffffffffffe88 & 0xffffffff00000000 |
                                 (ulonglong)(uint)puVar16[1]);
                puVar11 = (uint *)FUN_1404b38e0(puVar11,*puVar16,puVar16[2],*(undefined4 *)(lVar10 + 4),
                                                lVar13,puVar16[3],in_stack_fffffffffffffe88,puVar16[4]);
            }
            local_130[0] = *puVar11;
            local_128 = puVar11;
            FUN_140055f80(lVar1,local_70,local_130);
            local_110[0] = puVar11[2];
            lVar10 = *(longlong *)(*(longlong *)((longlong)(int)puVar11[1] * 0x20 + param_1 + 8) + 8);
            while (lVar10 != 0) {
                if (local_110[0] < *(uint *)(lVar10 + 0x20)) {
                    lVar10 = *(longlong *)(lVar10 + 0x10);
                }
                else {
                    lVar10 = *(longlong *)(lVar10 + 0x18);
                }
            }
            local_108 = puVar11;
            FUN_140055e80();
        }
        uVar8 = uVar8 + 1;
    } while( true );
    LAB_1404b036b:
    puVar21 = (ulonglong *)puVar21[1];
    if (puVar21 == (ulonglong *)0x0) goto LAB_1404b0381;
    goto LAB_1404b0350;
}



// WARNING: Removing unreachable block (ram,0x0001404b0c63)
// WARNING: Removing unreachable block (ram,0x0001404b0c70)
// WARNING: Removing unreachable block (ram,0x0001404b0c92)

void FUN_1404b0a00(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;

    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x48)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if (lVar5 != 0) {
                lVar2 = *(longlong *)(lVar5 + 0x18);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar5,0);
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
        } while (lVar6 != *(longlong *)(param_1 + 0x48));
    }
    FUN_140008410(param_1 + 0x40);
    lVar5 = 2;
    lVar6 = param_1;
    do {
        if (*(longlong *)(lVar6 + 0x10) != 0) {
            lVar2 = *(longlong *)(*(longlong *)(lVar6 + 8) + 8);
            while (lVar2 != 0) {
                FUN_1400083b0(lVar6,*(undefined8 *)(lVar2 + 0x18));
                lVar3 = *(longlong *)(lVar2 + 0x10);
                FUN_14018b900(lVar2,0);
                lVar2 = lVar3;
            }
            *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10) = *(longlong *)(lVar6 + 8);
            *(undefined8 *)(*(longlong *)(lVar6 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar6 + 8) + 0x18) = *(longlong *)(lVar6 + 8);
            *(undefined8 *)(lVar6 + 0x10) = 0;
        }
        lVar6 = lVar6 + 0x20;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x88)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if (lVar5 != 0) {
                if (*(longlong *)(lVar5 + 0x10) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar5,*(undefined8 *)(lVar2 + 0x18));
                        lVar3 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar3;
                    }
                    *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) = *(longlong *)(lVar5 + 8);
                    *(undefined8 *)(*(longlong *)(lVar5 + 8) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar5 + 8) + 0x18) = *(longlong *)(lVar5 + 8);
                    *(undefined8 *)(lVar5 + 0x10) = 0;
                }
                FUN_14018b900(*(undefined8 *)(lVar5 + 8),0);
                FUN_14018b900(lVar5);
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
        } while (lVar6 != *(longlong *)(param_1 + 0x88));
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x80,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x90) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x60,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x70) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        while (lVar6 != 0) {
            FUN_1400083b0(param_1 + 0x40,*(undefined8 *)(lVar6 + 0x18));
            lVar5 = *(longlong *)(lVar6 + 0x10);
            FUN_14018b900(lVar6,0);
            lVar6 = lVar5;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    iVar4 = 1;
    plVar7 = (longlong *)(param_1 + 0x48);
    do {
        plVar1 = plVar7 + -4;
        if (plVar7[-3] != 0) {
            lVar6 = *(longlong *)(*plVar1 + 8);
            while (lVar6 != 0) {
                FUN_1400083b0(plVar7 + -5,*(undefined8 *)(lVar6 + 0x18));
                lVar5 = *(longlong *)(lVar6 + 0x10);
                FUN_14018b900(lVar6,0);
                lVar6 = lVar5;
            }
            *(longlong *)(*plVar1 + 0x10) = *plVar1;
            *(undefined8 *)(*plVar1 + 8) = 0;
            *(longlong *)(*plVar1 + 0x18) = *plVar1;
            plVar7[-3] = 0;
        }
        FUN_14018b900(*plVar1,0);
        iVar4 = iVar4 + -1;
        plVar7 = plVar1;
    } while (-1 < iVar4);
    return;
}



undefined8 FUN_1404b0e10(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659d8 + 0x48);
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
    return *(undefined8 *)(local_res8 + 0x28);
}



undefined8 FUN_1404b0e70(void)

{
    uint uVar1;
    undefined8 uVar2;
    uint *puVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *plVar13;
    uint *puVar14;
    longlong local_res8;
    uint local_res10 [2];
    longlong local_res18;
    longlong local_res20;

    lVar4 = DAT_140c659d8;
    lVar12 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar12 != 0) {
        lVar11 = *(longlong *)(DAT_140c659d8 + 0x88);
        local_res8 = lVar11;
        if (*(longlong *)(lVar11 + 8) != 0) {
            lVar7 = *(longlong *)(lVar11 + 8);
            do {
                if (*(ulonglong *)(lVar7 + 0x20) < *(ulonglong *)(lVar12 + 0x1a8)) {
                    lVar6 = *(longlong *)(lVar7 + 0x18);
                }
                else {
                    lVar6 = *(longlong *)(lVar7 + 0x10);
                    local_res8 = lVar7;
                }
                lVar7 = lVar6;
            } while (lVar6 != 0);
        }
        if ((local_res8 == lVar11) ||
            (*(ulonglong *)(lVar12 + 0x1a8) < *(ulonglong *)(local_res8 + 0x20))) {
            local_res8 = lVar11;
        }
        if (local_res8 != lVar11) {
            uVar2 = *(undefined8 *)(local_res8 + 0x28);
            local_res10[1] = 0;
            if (lVar12 == 0) {
                local_res10[0] = 0;
            }
            else {
                local_res10[0] = *(uint *)(lVar12 + 0x38);
            }
            if (DAT_140c65970 != (longlong *)0x0) {
                local_res10[1] = (**(code **)(*DAT_140c65970 + 0x10))();
            }
            puVar14 = local_res10;
            plVar13 = (longlong *)(lVar4 + 8);
            lVar12 = 2;
            do {
                lVar11 = *plVar13;
                lVar7 = *(longlong *)(lVar11 + 8);
                lVar6 = lVar11;
                if (lVar7 != 0) {
                    lVar8 = lVar7;
                    do {
                        if (*puVar14 < *(uint *)(lVar8 + 0x20)) {
                            lVar9 = *(longlong *)(lVar8 + 0x10);
                            lVar6 = lVar8;
                        }
                        else {
                            lVar9 = *(longlong *)(lVar8 + 0x18);
                        }
                        lVar8 = lVar9;
                    } while (lVar9 != 0);
                    while (lVar7 != 0) {
                        if (*(int *)(lVar7 + 0x20) == 0) {
                            lVar7 = *(longlong *)(lVar7 + 0x18);
                        }
                        else {
                            lVar11 = lVar7;
                            lVar7 = *(longlong *)(lVar7 + 0x10);
                        }
                    }
                }
                while (lVar11 != lVar6) {
                    puVar3 = *(uint **)(lVar11 + 0x28);
                    if (puVar3 != (uint *)0x0) {
                        uVar1 = *puVar3;
                        if (uVar1 != 0) {
                            lVar7 = *(longlong *)(lVar4 + 0x68);
                            lVar9 = lVar7;
                            lVar8 = *(longlong *)(lVar7 + 8);
                            while (lVar8 != 0) {
                                if (*(uint *)(lVar8 + 0x20) < uVar1) {
                                    lVar8 = *(longlong *)(lVar8 + 0x18);
                                }
                                else {
                                    lVar9 = lVar8;
                                    lVar8 = *(longlong *)(lVar8 + 0x10);
                                }
                            }
                            if ((lVar9 == lVar7) || (uVar1 < *(uint *)(lVar9 + 0x20))) {
                                local_res20 = lVar7;
                                plVar10 = &local_res20;
                            }
                            else {
                                local_res18 = lVar9;
                                plVar10 = &local_res18;
                            }
                            if (*plVar10 != lVar7) goto LAB_1404b105e;
                        }
                        iVar5 = FUN_1404af7d0(puVar3);
                        if (iVar5 != 0) {
                            FUN_1400293c0(uVar2);
                        }
                    }
                    LAB_1404b105e:
                    lVar7 = *(longlong *)(lVar11 + 0x18);
                    if (lVar7 == 0) {
                        lVar7 = *(longlong *)(lVar11 + 8);
                        if (lVar11 == *(longlong *)(lVar7 + 0x18)) {
                            do {
                                lVar11 = lVar7;
                                lVar7 = *(longlong *)(lVar11 + 8);
                            } while (lVar11 == *(longlong *)(lVar7 + 0x18));
                        }
                        if (*(longlong *)(lVar11 + 0x18) != lVar7) {
                            lVar11 = lVar7;
                        }
                    }
                    else {
                        for (lVar8 = *(longlong *)(lVar7 + 0x10); lVar11 = lVar7, lVar8 != 0;
                             lVar8 = *(longlong *)(lVar8 + 0x10)) {
                            lVar7 = lVar8;
                        }
                    }
                }
                puVar14 = puVar14 + 1;
                plVar13 = plVar13 + 4;
                lVar12 = lVar12 + -1;
                if (lVar12 == 0) {
                    return uVar2;
                }
            } while( true );
        }
    }
    return 0;
}



void FUN_1404b10f0(longlong param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 local_res10 [4];
    longlong local_res20;
    undefined local_18 [16];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return;
    }
    lVar4 = param_1 + 0x60;
    local_res10[0] = param_2;
    if (param_3 != 0) {
        FUN_1400293c0(lVar4,local_18,local_res10);
        lVar4 = *(longlong *)(param_1 + 0x88);
        local_res20 = lVar4;
        if (*(longlong *)(lVar4 + 8) != 0) {
            lVar2 = *(longlong *)(lVar4 + 8);
            do {
                if (*(ulonglong *)(lVar2 + 0x20) < *(ulonglong *)(lVar1 + 0x1a8)) {
                    lVar3 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar3 = *(longlong *)(lVar2 + 0x10);
                    local_res20 = lVar2;
                }
                lVar2 = lVar3;
            } while (lVar3 != 0);
        }
        if ((local_res20 == lVar4) ||
            (*(ulonglong *)(lVar1 + 0x1a8) < *(ulonglong *)(local_res20 + 0x20))) {
            local_res20 = lVar4;
        }
        if (local_res20 == lVar4) goto LAB_1404b1196;
        lVar4 = *(longlong *)(local_res20 + 0x28);
    }
    FUN_1400ee810(lVar4,local_res10);
    LAB_1404b1196:
    FUN_1404b2680(param_1);
    return;
}



void FUN_1404b11b0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = DAT_140c659d8;
    FUN_140008410(DAT_140c659d8 + 0x60);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x88) + 0x10);
    if (lVar4 != *(longlong *)(lVar2 + 0x88)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                FUN_140008410(lVar3);
                FUN_14018b900(*(undefined8 *)(lVar3 + 8),0);
                FUN_14018b900(lVar3);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x88));
    }
    FUN_140008410(lVar2 + 0x80);
    FUN_1404b2680(lVar2);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001404b198d)
// WARNING: Removing unreachable block (ram,0x0001404b15e7)
// WARNING: Removing unreachable block (ram,0x0001404b1b07)
// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1404b1290(ulonglong param_1,longlong param_2,uint param_3,uint param_4,int param_5)

{
    uint *puVar1;
    double *pdVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    undefined8 *puVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    longlong lVar16;
    longlong lVar17;
    ulonglong uVar18;
    double dVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined8 local_res8;
    int local_res20;
    ulonglong local_b8;
    longlong local_b0;
    ulonglong local_a8;
    uint local_a0 [2];
    longlong local_98;
    longlong local_90;
    ulonglong local_88;
    undefined **local_80;
    int local_78;
    longlong local_70;
    undefined4 local_68;

    local_98 = DAT_140c659d8;
    if (1 < param_4) {
        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        return 0;
    }
    local_res20 = 1;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar15 = *(undefined8 **)(param_2 + 0x10);
    uVar5 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_2);
    uVar20 = 0;
    uVar21 = 0;
    uVar18 = 0;
    local_res8 = param_1 & 0xffffffff00000000 | (ulonglong)uVar3;
    local_b0 = 0;
    local_a8 = 0;
    if (param_5 == 0) {
        lVar16 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar16 == 0) goto LAB_1404b1ad8;
        lVar11 = local_98 + 0x80;
        uVar14 = *(ulonglong *)(local_98 + 0x88);
        local_b8 = uVar14;
        if (*(ulonglong *)(uVar14 + 8) != 0) {
            uVar6 = *(ulonglong *)(uVar14 + 8);
            do {
                if (*(ulonglong *)(uVar6 + 0x20) < *(ulonglong *)(lVar16 + 0x1a8)) {
                    uVar7 = *(ulonglong *)(uVar6 + 0x18);
                }
                else {
                    uVar7 = *(ulonglong *)(uVar6 + 0x10);
                    local_b8 = uVar6;
                }
                uVar6 = uVar7;
            } while (uVar7 != 0);
        }
        if ((local_b8 == uVar14) || (*(ulonglong *)(lVar16 + 0x1a8) < *(ulonglong *)(local_b8 + 0x20)))
        {
            local_b8 = uVar14;
        }
        if (local_b8 == *(ulonglong *)(local_98 + 0x88)) {
            lVar8 = FUN_14018b280(0x20);
            if (lVar8 != 0) {
                uVar18 = FUN_140028fc0(lVar8);
            }
            local_90 = *(longlong *)(lVar16 + 0x1a8);
            local_b8 = uVar18;
            local_88 = uVar18;
            FUN_1400eedd0(lVar11,&local_80,&local_90);
        }
        else {
            local_b8 = *(ulonglong *)(local_b8 + 0x28);
        }
    }
    else {
        local_b8 = local_res8;
    }
    uVar6 = local_b8;
    local_90 = (longlong)(int)param_4 * 0x20;
    lVar16 = *(longlong *)(local_90 + 8 + local_98);
    lVar11 = *(longlong *)(lVar16 + 8);
    lVar9 = lVar11;
    lVar17 = lVar16;
    uVar18 = local_b8;
    lVar8 = local_b0;
    uVar14 = local_a8;
    if (lVar11 != 0) {
        do {
            if (param_3 < *(uint *)(lVar9 + 0x20)) {
                lVar10 = *(longlong *)(lVar9 + 0x10);
                lVar17 = lVar9;
            }
            else {
                lVar10 = *(longlong *)(lVar9 + 0x18);
            }
            lVar9 = lVar10;
        } while (lVar10 != 0);
        while (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x20) < param_3) {
                lVar11 = *(longlong *)(lVar11 + 0x18);
            }
            else {
                lVar16 = lVar11;
                lVar11 = *(longlong *)(lVar11 + 0x10);
            }
        }
    }
    while (local_b8 = uVar18, lVar16 != lVar17) {
        puVar1 = *(uint **)(lVar16 + 0x28);
        if ((puVar1 != (uint *)0x0) &&
            (iVar4 = FUN_1404af7d0(puVar1,param_3), uVar14 = local_a8, iVar4 != 0)) {
            if (param_5 == 0) {
                local_a0[0] = *puVar1;
                FUN_1400293c0(uVar6,&local_80,local_a0);
            }
            uVar18 = local_a8;
            lVar10 = FUN_14018db00(lVar8,local_a8 + 1,8);
            *(uint **)(uVar18 * 8 + lVar10) = puVar1;
            lVar11 = lVar8;
            lVar9 = local_b0;
            if ((lVar8 != lVar10) &&
                (FUN_1407db590(lVar10,lVar8), lVar11 = lVar10, lVar9 = lVar10, lVar8 != 0)) {
                (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
            }
            local_b0 = lVar9;
            local_a8 = uVar18 + 1;
            uVar14 = local_a8;
            lVar8 = lVar11;
        }
        lVar11 = *(longlong *)(lVar16 + 0x18);
        uVar18 = local_b8;
        if (lVar11 == 0) {
            lVar11 = *(longlong *)(lVar16 + 8);
            if (lVar16 == *(longlong *)(lVar11 + 0x18)) {
                do {
                    lVar16 = lVar11;
                    lVar11 = *(longlong *)(lVar16 + 8);
                } while (lVar16 == *(longlong *)(lVar11 + 0x18));
            }
            if (*(longlong *)(lVar16 + 0x18) != lVar11) {
                lVar16 = lVar11;
            }
        }
        else {
            for (lVar9 = *(longlong *)(lVar11 + 0x10); lVar16 = lVar11, lVar9 != 0;
                 lVar9 = *(longlong *)(lVar9 + 0x10)) {
                lVar11 = lVar9;
            }
        }
    }
    lVar16 = *(longlong *)(local_90 + 8 + local_98);
    lVar8 = *(longlong *)(lVar16 + 8);
    lVar11 = lVar8;
    lVar9 = lVar16;
    lVar17 = local_b0;
    lVar10 = local_98;
    if (lVar8 != 0) {
        do {
            lVar11 = *(longlong *)(lVar11 + 0x18);
        } while (lVar11 != 0);
        while (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x20) == -1) {
                lVar9 = lVar8;
                lVar8 = *(longlong *)(lVar8 + 0x10);
            }
            else {
                lVar8 = *(longlong *)(lVar8 + 0x18);
            }
        }
    }
    while (lVar9 != lVar16) {
        puVar1 = *(uint **)(lVar9 + 0x28);
        if ((puVar1 != (uint *)0x0) &&
            (iVar4 = FUN_1404af7d0(puVar1,param_3), uVar14 = local_a8, iVar4 != 0)) {
            if (param_5 == 0) {
                local_a0[0] = *puVar1;
                local_b8 = local_b8 & 0xffffffff00000000 | (ulonglong)local_a0[0];
                if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                    FUN_1400ee810(lVar10 + 0x60,local_a0);
                    FUN_1404b2680(lVar10);
                }
                FUN_1400293c0(uVar18,&local_80,&local_b8);
            }
            uVar14 = local_a8;
            lVar10 = FUN_14018db00(lVar17,local_a8 + 1,8);
            *(uint **)(lVar10 + uVar14 * 8) = puVar1;
            lVar11 = lVar17;
            lVar8 = local_b0;
            if ((lVar17 != lVar10) &&
                (FUN_1407db590(lVar10,lVar17), lVar11 = lVar10, lVar8 = lVar10, lVar17 != 0)) {
                (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))();
            }
            local_b0 = lVar8;
            local_a8 = uVar14 + 1;
            uVar14 = local_a8;
            lVar10 = local_98;
            lVar17 = lVar11;
        }
        lVar11 = *(longlong *)(lVar9 + 0x18);
        if (lVar11 == 0) {
            lVar11 = *(longlong *)(lVar9 + 8);
            if (lVar9 == *(longlong *)(lVar11 + 0x18)) {
                do {
                    lVar9 = lVar11;
                    lVar11 = *(longlong *)(lVar9 + 8);
                } while (lVar9 == *(longlong *)(lVar11 + 0x18));
            }
            if (*(longlong *)(lVar9 + 0x18) != lVar11) {
                lVar9 = lVar11;
            }
        }
        else {
            for (lVar8 = *(longlong *)(lVar11 + 0x10); lVar9 = lVar11, lVar8 != 0;
                 lVar8 = *(longlong *)(lVar8 + 0x10)) {
                lVar11 = lVar8;
            }
        }
    }
    if (1 < uVar14) {
        FUN_1404b3f40(&local_b0,&LAB_1404af890);
        uVar14 = local_a8;
    }
    lVar16 = local_b0;
    if (uVar14 != 0) {
        uVar18 = 0;
        do {
            local_80 = &PTR_FUN_140b569f0;
            local_68 = 1;
            local_70 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar15 = *(undefined8 **)(param_2 + 0x10);
            uVar5 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar15 + 1) = 5;
            *puVar15 = uVar5;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(param_2);
            local_78 = iVar4;
            FUN_1404b39c0(*(undefined8 *)(lVar16 + uVar18 * 8),&local_80);
            lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
            if (uVar3 - 1 < *(uint *)(lVar11 + 0x38)) {
                puVar15 = (undefined8 *)((longlong)(int)(uVar3 - 1) * 0x10 + *(longlong *)(lVar11 + 0x18));
            }
            else {
                dVar19 = (double)uVar3;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar15 = *(undefined8 **)(lVar11 + 0x20);
                }
                else {
                    local_res8._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
                    local_res8._0_4_ = SUB84(dVar19,0);
                    puVar15 = (undefined8 *)
                            (*(longlong *)(lVar11 + 0x20) +
                             ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                              (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar15 + 3) == 3) && (dVar19 == (double)puVar15[2])) goto LAB_1404b1874;
                    puVar15 = (undefined8 *)puVar15[4];
                } while (puVar15 != (undefined8 *)0x0);
                puVar15 = &DAT_140a12138;
            }
            LAB_1404b1874:
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            *puVar13 = *puVar15;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar15 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)local_res20;
            lVar11 = *(longlong *)(param_2 + 0x10);
            puVar15 = (undefined8 *)(lVar11 + 0x10);
            *(undefined8 **)(param_2 + 0x10) = puVar15;
            lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar8 + 0x38)) {
                puVar13 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
            }
            else {
                dVar19 = (double)iVar4;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar13 = *(undefined8 **)(lVar8 + 0x20);
                }
                else {
                    local_res8._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
                    local_res8._0_4_ = SUB84(dVar19,0);
                    puVar13 = (undefined8 *)
                            (*(longlong *)(lVar8 + 0x20) +
                             ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                              (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_1404b193d;
                    puVar13 = (undefined8 *)puVar13[4];
                } while (puVar13 != (undefined8 *)0x0);
                puVar13 = &DAT_140a12138;
            }
            LAB_1404b193d:
            *puVar15 = *puVar13;
            *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)(puVar13 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_14005ea50();
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            if (-1 < iVar4) {
                plVar12 = (longlong *)FUN_1400580e0(param_2,0xffffd8f0);
                puVar15 = *(undefined8 **)(*plVar12 + 0x20);
                do {
                    if ((*(int *)(puVar15 + 3) == 3) &&
                        ((double)CONCAT44(uVar21,uVar20) == (double)puVar15[2])) goto LAB_1404b19bd;
                    puVar15 = (undefined8 *)puVar15[4];
                } while (puVar15 != (undefined8 *)0x0);
                puVar15 = &DAT_140a12138;
                LAB_1404b19bd:
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                *puVar13 = *puVar15;
                *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar15 + 1);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                FUN_140058b30(param_2,0xffffd8f0);
                pdVar2 = *(double **)(param_2 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar4;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                FUN_140058b30();
            }
            uVar18 = uVar18 + 1;
            local_res20 = local_res20 + 1;
        } while (uVar18 < local_a8);
    }
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
    if (uVar3 - 1 < *(uint *)(lVar11 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(int)(uVar3 - 1) * 0x10 + *(longlong *)(lVar11 + 0x18));
    }
    else {
        dVar19 = (double)uVar3;
        if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
            puVar15 = *(undefined8 **)(lVar11 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
            local_res8._0_4_ = SUB84(dVar19,0);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar11 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (dVar19 == (double)puVar15[2])) goto LAB_1404b1aa4;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_1404b1aa4:
    puVar13 = *(undefined8 **)(param_2 + 0x10);
    *puVar13 = *puVar15;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_1404b2680(local_98);
    uVar18 = 1;
    if (lVar16 != 0) {
        (**(code **)(*(longlong *)(lVar16 + -0x10) + 8))(lVar16 + -0x10);
    }
    LAB_1404b1ad8:
    if (-1 < (int)uVar3) {
        plVar12 = (longlong *)FUN_1400580e0(param_2,0xffffd8f0);
        puVar15 = *(undefined8 **)(*plVar12 + 0x20);
        do {
            if ((*(int *)(puVar15 + 3) == 3) && ((double)CONCAT44(uVar21,uVar20) == (double)puVar15[2]))
                goto LAB_1404b1b32;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
        LAB_1404b1b32:
        puVar13 = *(undefined8 **)(param_2 + 0x10);
        *puVar13 = *puVar15;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar15 + 1);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        FUN_140058b30(param_2,0xffffd8f0,uVar3);
        pdVar2 = *(double **)(param_2 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)uVar3;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        FUN_140058b30(param_2,0xffffd8f0,0);
    }
    return uVar18;
}

