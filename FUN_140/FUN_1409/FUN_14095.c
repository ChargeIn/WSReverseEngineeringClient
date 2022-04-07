//
// Created by flop on 05.04.22.
//
#include "../../WildStarTypes.c"

void FUN_140950ab0(void)

{
    undefined4 *puVar1;
    int iVar2;

    puVar1 = &DAT_140c7cb70;
    iVar2 = 0x13;
    do {
        puVar1 = puVar1 + -0x4e;
        FUN_14001c0c0(puVar1);
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return;
}



void FUN_140950c40(void)

{
    FUN_140001b70();
    if (DAT_140dc2820 != 0) {
        FUN_14018b900(DAT_140dc2820,0);
        return;
    }
    return;
}



void FUN_140950c70(void)

{
    FUN_140001b70();
    if (DAT_140dc2868 != 0) {
        FUN_14018b900(DAT_140dc2868,0);
        return;
    }
    return;
}



void FUN_140950ca0(void)

{
    FUN_140001b70();
    if (DAT_140dc2848 != 0) {
        FUN_14018b900(DAT_140dc2848,0);
        return;
    }
    return;
}



void FUN_1409512a0(void)

{
    FUN_140008410(&DAT_140c7cf40);
    FUN_14018b900(DAT_140c7cf48,0);
    return;
}



void FUN_140952010(void)

{
    longlong **pplVar1;
    longlong **pplVar2;

    pplVar2 = (longlong **)*DAT_140c7cf68;
    if (pplVar2 != DAT_140c7cf68) {
        do {
            pplVar1 = (longlong **)*pplVar2;
            FUN_14018b900(pplVar2,0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7cf68);
    }
    *DAT_140c7cf68 = (longlong *)DAT_140c7cf68;
    DAT_140c7cf68[1] = (longlong *)DAT_140c7cf68;
    FUN_14018b900(DAT_140c7cf68,0);
    return;
}



void FUN_140952070(void)

{
    FUN_140001b70();
    if (DAT_140c7cf78 != 0) {
        FUN_14018b900(DAT_140c7cf78,0);
        return;
    }
    return;
}



void FUN_1409520a0(void)

{
    if (DAT_140c7cfb0 != 0) {
        (**(code **)(*(longlong *)(DAT_140c7cfb0 + -0x10) + 8))(DAT_140c7cfb0 + -0x10);
    }
    if (DAT_140c7cfa0 != 0) {
        (**(code **)(*(longlong *)(DAT_140c7cfa0 + -0x10) + 8))(DAT_140c7cfa0 + -0x10);
    }
    if (DAT_140c7cf90 != 0) {
        // WARNING: Could not recover jumptable at 0x0001409520ea. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(DAT_140c7cf90 + -0x10) + 8))(DAT_140c7cf90 + -0x10);
        return;
    }
    return;
}


void FUN_1409541f0(void)

{
    FUN_140008410(&DAT_140dc3328);
    FUN_14018b900(DAT_140dc3330,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409543e0(void)

{
    longlong lVar1;

    lVar1 = DAT_140c7dc90;
    if (DAT_140c7dc90 != 0) {
        FUN_14077c750(DAT_140c7dc90);
        FUN_14018b900(lVar1,0);
    }
    DAT_140c7dc90 = 0;
    if (_DAT_140c7dce0 != 0) {
        FUN_1401a4a00(&DAT_140c7dce0);
    }
    FUN_140558bd0(&DAT_140c7dcd0);
    FUN_140001b70();
    if (DAT_140c7dcb0 != 0) {
        FUN_14018b900(DAT_140c7dcb0,0);
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140954720(void)

{
    _DAT_140c7dfb0 = &PTR_LAB_140b6cff8;
    FUN_1405b0ec0(&DAT_140c7dfb0);
    FUN_140019490(&DAT_140c7dfe8);
    FUN_14018b900(DAT_140c7dff8,0);
    DAT_140c7dff8 = 0;
    FUN_140001b70();
    if (DAT_140c7dfc0 != 0) {
        FUN_14018b900(DAT_140c7dfc0,0);
        return;
    }
    return;
}



void FUN_140954790(void)

{
    FUN_140019490(&DAT_140c4a3a8);
    FUN_14018b900(DAT_140c4a3b8,0);
    DAT_140c4a3b8 = 0;
    return;
}



void FUN_140954fd0(void)

{
    if (DAT_140c4df18 != 0) {
        (**(code **)(*(longlong *)(DAT_140c4df18 + -0x10) + 8))(DAT_140c4df18 + -0x10);
    }
    FUN_140019490(&DAT_140c4def0);
    FUN_14018b900(DAT_140c4df00,0);
    DAT_140c4df00 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140955c60(void)

{
    FUN_140195d70(&DAT_140c4ee20);
    _DAT_140c4ee20 = 0;
    if (DAT_140c4ee30 != (longlong **)0x0) {
        *DAT_140c4ee30 = DAT_140c4ee38;
    }
    if (DAT_140c4ee38 != (longlong *)0x0) {
        *DAT_140c4ee38 = (longlong)DAT_140c4ee30;
    }
    _DAT_140c4ee30 = ZEXT816(0);
    return;
}



void FUN_140955cc0(void)

{
    FUN_14018b900(DAT_140c7e578,0);
    FUN_14062f960();
    FUN_140008410(&DAT_140c7e590);
    FUN_14018b900(DAT_140c7e598,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140955d00(void)

{
    FUN_140195d70(&DAT_140c4ee70);
    _DAT_140c4ee70 = 0;
    if (DAT_140c4ee80 != (longlong **)0x0) {
        *DAT_140c4ee80 = DAT_140c4ee88;
    }
    if (DAT_140c4ee88 != (longlong *)0x0) {
        *DAT_140c4ee88 = (longlong)DAT_140c4ee80;
    }
    _DAT_140c4ee80 = ZEXT816(0);
    return;
}



void FUN_140955d70(void)

{
    longlong *plVar1;
    int iVar2;

    iVar2 = 0x3e;
    plVar1 = (longlong *)&DAT_140c53648;
    do {
        plVar1 = plVar1 + -0x24;
        FUN_140001b70();
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return;
}



void FUN_1409561a0(void)

{
    FUN_140001b70();
    if (DAT_140c7e828 != 0) {
        FUN_14018b900(DAT_140c7e828,0);
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140956840(void)

{
    if (_DAT_140c7f0f8 != 0) {
        FUN_14001ea50(&DAT_140c7f0e8,*(undefined8 *)(DAT_140c7f0f0 + 8));
        *(longlong *)(DAT_140c7f0f0 + 0x10) = DAT_140c7f0f0;
        *(undefined8 *)(DAT_140c7f0f0 + 8) = 0;
        *(longlong *)(DAT_140c7f0f0 + 0x18) = DAT_140c7f0f0;
        _DAT_140c7f0f8 = 0;
    }
    FUN_14018b900(DAT_140c7f0f0,0);
    return;
}



void FUN_140956a90(void)

{
    FUN_140008410(&DAT_140dc4d38);
    FUN_14018b900(DAT_140dc4d40,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140956ac0(void)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    uVar3 = DAT_140c4b730;
    if (DAT_140c4b730 != 0) {
        do {
            lVar2 = DAT_140c4b738;
            lVar1 = *(longlong *)(DAT_140c4b738 + uVar4 * 8);
            while (lVar1 != 0) {
                lVar1 = *(longlong *)(lVar2 + uVar4 * 8);
                *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)(lVar1 + 8);
                FUN_14018b900(lVar1,0);
                uVar3 = DAT_140c4b730;
                lVar1 = *(longlong *)(lVar2 + uVar4 * 8);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
    }
    _DAT_140c4b728 = 0;
    FUN_14018b900(DAT_140c4b738,0);
    DAT_140c4b738 = 0;
    return;
}



void FUN_140956b90(void)

{
    FUN_140008410(&DAT_140c7f408);
    FUN_14018b900(DAT_140c7f410,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140956bc0(void)

{
    _DAT_140dc4de0 = &PTR_LAB_140b6f2f8;
    if (DAT_140dc4f00 != 0) {
        (**(code **)(*(longlong *)(DAT_140dc4f00 + -0x10) + 8))(DAT_140dc4f00 + -0x10);
    }
    if (DAT_140dc4ee0 != 0) {
        // WARNING: Could not recover jumptable at 0x000140956c01. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(DAT_140dc4ee0 + -0x10) + 8))(DAT_140dc4ee0 + -0x10);
        return;
    }
    return;
}



void FUN_140956c10(void)

{
    FUN_140008410(&DAT_140c7f750);
    FUN_14018b900(DAT_140c7f758,0);
    return;
}



void FUN_140956c40(void)

{
    FUN_140008410(&DAT_140c7f770);
    FUN_14018b900(DAT_140c7f778,0);
    return;
}



void FUN_140956c70(void)

{
    FUN_140008410(&DAT_140c7f790);
    FUN_14018b900(DAT_140c7f798,0);
    return;
}



void FUN_140956ce0(void)

{
    FUN_140008410(&DAT_140c7f7b0);
    FUN_14018b900(DAT_140c7f7b8,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140957b90(void)

{
    if (DAT_140c62ad0 != 0) {
        FUN_140881720(DAT_140c10f20);
    }
    if (DAT_140c62a70 != 0) {
        _DAT_140c62a70 = CONCAT88(DAT_140c62a70,DAT_140c62a70);
        FUN_140881720(DAT_140c10f20);
        DAT_140c62a80 = 0;
        _DAT_140c62a70 = ZEXT816(0);
    }
    if (DAT_140c62a88 != 0) {
        DAT_140c62a90 = DAT_140c62a88;
        FUN_140881720(DAT_140c10f20);
        DAT_140c62a88 = 0;
        DAT_140c62a90 = 0;
        DAT_140c62a98 = 0;
    }
    return;
}



void FUN_1409580a0(longlong *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong in_GS_OFFSET;

    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    if (param_1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 0x38))();
    }
    *(undefined4 *)(lVar2 + -4) = uVar1;
    return;
}



int FUN_1409580e0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    longlong in_GS_OFFSET;
    int local_res10;

    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))();
    }
    if ((param_2 != -1) && (*(int *)(param_1 + 0xf4) != param_2)) {
        lVar2 = *(longlong *)(in_GS_OFFSET + 8);
        plVar3 = *(longlong **)(param_1 + 200);
        lVar4 = *(longlong *)(param_1 + 0xc0);
        uVar1 = *(undefined4 *)(lVar2 + -4);
        *(undefined4 *)(lVar2 + -4) = 1;
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,param_2 + lVar4);
        }
        *(undefined4 *)(lVar2 + -4) = uVar1;
        *(int *)(param_1 + 0xf4) = param_2;
    }
    lVar2 = *(longlong *)(in_GS_OFFSET + 8);
    plVar3 = *(longlong **)(param_1 + 200);
    uVar1 = *(undefined4 *)(lVar2 + -4);
    *(undefined4 *)(lVar2 + -4) = 1;
    if ((plVar3 != (longlong *)0x0) &&
        (iVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_3,param_4), local_res10 = param_4,
                iVar5 < 0)) {
        local_res10 = 0;
    }
    *(undefined4 *)(lVar2 + -4) = uVar1;
    if (local_res10 != param_4) {
        *(undefined4 *)(param_1 + 0x80) = 1;
    }
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + local_res10;
    uVar6 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xf4);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xf4);
    if (*(uint *)(param_1 + 0xa0) <= uVar6) {
        uVar6 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa8) = uVar6;
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        (**(code **)(param_1 + 0x50))(param_1);
    }
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
        (**(code **)(param_1 + 0x70))(param_3,local_res10);
    }
    return local_res10;
}



void FUN_140958670(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
    uint uVar1;
    ulonglong uVar2;

    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))();
    }
    uVar2 = param_2 + 0xfffU & 0xfffffffffffff000;
    *(ulonglong *)(param_1 + 0xd8) = uVar2;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(ulonglong *)(param_1 + 0x100) = uVar2;
    uVar1 = ((int)param_2 - (int)uVar2) + param_3 & 0xfffe0000;
    *(ulonglong *)(param_1 + 0xe0) = uVar1 + uVar2;
    *(uint *)(param_1 + 0xa0) = uVar1;
    *(uint *)(param_1 + 0xf8) = uVar1;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xec) = param_4;
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        (**(code **)(param_1 + 0x50))(param_1);
    }
    return;
}



void FUN_140958720(longlong param_1)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong in_GS_OFFSET;

    if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))();
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
        plVar2 = *(longlong **)(param_1 + 200);
        lVar3 = *(longlong *)(in_GS_OFFSET + 8);
        uVar1 = *(undefined4 *)(lVar3 + -4);
        *(undefined4 *)(lVar3 + -4) = 1;
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x88))(plVar2);
            (**(code **)(*plVar2 + 8))(plVar2);
        }
        *(undefined4 *)(lVar3 + -4) = uVar1;
    }
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001409587a3. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(param_1 + 0x50))(param_1);
        return;
    }
    return;
}



void FUN_1409587b0(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    int iVar11;
    uint uVar12;
    int iVar13;
    uint uVar14;
    longlong in_GS_OFFSET;
    undefined auStack200 [32];
    int local_a8;
    undefined local_98 [96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    local_a8 = *(int *)(param_1 + 0x8c);
    iVar9 = 0;
    bVar6 = false;
    if ((*(int *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0xb0) == 0)) {
        if ((*(code **)(param_1 + 0x48) == (code *)0x0) ||
            (iVar7 = (**(code **)(param_1 + 0x48))(), iVar7 == 0)) {
            if (*(code **)(param_1 + 0x58) != (code *)0x0) {
                (**(code **)(param_1 + 0x58))(param_1);
            }
        }
        else {
            uVar14 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xf4);
            if (((uVar14 == 0) && (*(int *)(param_1 + 0x108) == 0)) &&
                ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x20) & 0x80) != 0)) {
                *(undefined4 *)(param_1 + 0x108) = 1;
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x20);
                *puVar1 = *puVar1 & 0xffffff7f;
                *(undefined4 *)(param_1 + 0x84) = 1;
                FUN_1409580a0(*(undefined8 *)(param_1 + 200),
                              (ulonglong)
                                      ((**(uint **)(*(longlong *)(param_1 + 0x38) + 0x1b0) & 0xfffffffe) - 0x20) +
                              *(longlong *)(param_1 + 0xc0));
                lVar3 = *(longlong *)(in_GS_OFFSET + 8);
                plVar4 = *(longlong **)(param_1 + 200);
                uVar2 = *(undefined4 *)(lVar3 + -4);
                *(undefined4 *)(lVar3 + -4) = 1;
                if (plVar4 != (longlong *)0x0) {
                    bVar6 = true;
                    iVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,local_98,0x20);
                    if (iVar7 < 0) {
                        bVar6 = false;
                    }
                }
                *(undefined4 *)(lVar3 + -4) = uVar2;
                if (!bVar6) {
                    *(undefined4 *)(param_1 + 0x80) = 1;
                }
                *(undefined4 *)(param_1 + 0x84) = 0;
            }
            if ((*(uint *)(param_1 + 0xf8) < 0x20000) || (uVar14 == 0)) {
                *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xac);
            }
            else {
                uVar12 = 0x20000;
                if (uVar14 < 0x20000) {
                    uVar12 = uVar14;
                }
                if (*(code **)(param_1 + 0x68) == (code *)0x0) {
                    iVar7 = 0;
                }
                else {
                    iVar7 = (**(code **)(param_1 + 0x68))();
                }
                uVar10 = *(uint *)(param_1 + 0xf4) & 0x1ffff;
                if ((uVar12 < uVar10) || (uVar12 == uVar14)) {
                    uVar10 = 0;
                }
                else if (uVar10 != 0) {
                    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
                        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + uVar10;
                    }
                    else {
                        (**(code **)(param_1 + 0x78))(param_1 + 0xf0,uVar10);
                    }
                }
                iVar13 = uVar12 - uVar10;
                if (*(int *)(param_1 + 0x108) != 0) {
                    puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x20);
                    *puVar1 = *puVar1 & 0xffffff7f;
                    *(undefined4 *)(param_1 + 0x108) = 0;
                }
                *(undefined4 *)(param_1 + 0x84) = 1;
                lVar3 = *(longlong *)(param_1 + 0x100);
                lVar5 = *(longlong *)(in_GS_OFFSET + 8);
                plVar4 = *(longlong **)(param_1 + 200);
                uVar2 = *(undefined4 *)(lVar5 + -4);
                *(undefined4 *)(lVar5 + -4) = 1;
                iVar11 = 0;
                if ((plVar4 != (longlong *)0x0) &&
                    (iVar8 = (**(code **)(*plVar4 + 0x40))(plVar4,lVar3 + (ulonglong)uVar10,iVar13),
                            iVar11 = iVar13, iVar8 < 0)) {
                    iVar11 = 0;
                }
                *(undefined4 *)(lVar5 + -4) = uVar2;
                *(undefined4 *)(param_1 + 0x84) = 0;
                if (*(code **)(param_1 + 0x60) != (code *)0x0) {
                    (**(code **)(param_1 + 0x60))(param_1,iVar11,iVar7);
                }
                if (iVar11 != iVar13) {
                    *(undefined4 *)(param_1 + 0x80) = 1;
                }
                if (iVar11 != 0) {
                    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + iVar11;
                    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + iVar11;
                    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 0x20000;
                    if (*(ulonglong *)(param_1 + 0xe0) <= *(ulonglong *)(param_1 + 0x100)) {
                        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xd8);
                    }
                    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
                        *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) - iVar11;
                    }
                    else {
                        (**(code **)(param_1 + 0x78))(param_1 + 0xf8,-iVar11);
                    }
                    puVar1 = (uint *)(param_1 + 0xac);
                    if (*(code **)(param_1 + 0x78) == (code *)0x0) {
                        *puVar1 = *puVar1 + iVar11;
                    }
                    else {
                        (**(code **)(param_1 + 0x78))(puVar1,iVar11);
                    }
                    if (*(uint *)(param_1 + 0xa4) < *puVar1) {
                        *(uint *)(param_1 + 0xa4) = *puVar1;
                    }
                    if (*(code **)(param_1 + 0x68) != (code *)0x0) {
                        iVar9 = (**(code **)(param_1 + 0x68))();
                    }
                    iVar9 = iVar9 - iVar7;
                    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar9;
                    if ((local_a8 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
                        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + iVar9;
                    }
                    else {
                        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + iVar9;
                    }
                }
            }
            if (*(code **)(param_1 + 0x50) != (code *)0x0) {
                (**(code **)(param_1 + 0x50))(param_1);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack200);
    return;
}