//
// Created by flop on 04.04.22.
//
#include "../../include.h"



// WARNING: Could not reconcile some variable overlaps

int FUN_14039b340(longlong param_1,int param_2)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    bool bVar10;
    undefined4 local_res8 [2];
    int local_res18 [2];
    longlong local_res20;
    undefined8 in_stack_fffffffffffffeb8;
    uint uVar11;
    undefined8 in_stack_fffffffffffffec0;
    ulonglong uVar12;
    undefined8 local_128;
    longlong local_120;
    code *local_118;
    undefined8 local_110;
    int local_108;
    int local_104;
    undefined4 local_ec;
    undefined4 local_e4;
    undefined4 local_b0;

    uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
    uVar11 = (uint)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (lVar7 == 0) {
        return 0x1e;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1480) + 0x10);
    while( true ) {
        if (lVar5 == *(longlong *)(param_1 + 0x1480)) {
            return 1;
        }
        if (*(int *)(lVar5 + 0x20) == param_2) break;
        lVar6 = *(longlong *)(lVar5 + 0x18);
        if (lVar6 == 0) {
            lVar6 = *(longlong *)(lVar5 + 8);
            if (lVar5 == *(longlong *)(lVar6 + 0x18)) {
                do {
                    lVar5 = lVar6;
                    lVar6 = *(longlong *)(lVar5 + 8);
                } while (lVar5 == *(longlong *)(lVar6 + 0x18));
            }
            if (*(longlong *)(lVar5 + 0x18) != lVar6) {
                lVar5 = lVar6;
            }
        }
        else {
            for (lVar8 = *(longlong *)(lVar6 + 0x10); lVar5 = lVar6, lVar8 != 0;
                 lVar8 = *(longlong *)(lVar8 + 0x10)) {
                lVar6 = lVar8;
            }
        }
    }
    if (lVar5 == -0x20) {
        return 1;
    }
    lVar5 = FUN_1403acd90(DAT_140c65b70,param_2,lVar7);
    if (lVar5 == 0) {
        return 0x16;
    }
    iVar1 = FUN_1403a1630(param_1,*(undefined4 *)(*(longlong *)(lVar5 + 0x70) + 4),1);
    if (iVar1 == 0) {
        return 0xd;
    }
    local_res8[0] = 0;
    lVar6 = FUN_14055bdc0(param_1,lVar7,lVar5,0,(ulonglong)uVar11 << 0x20);
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 8);
    }
    FUN_1407e4830(&local_108,0,200);
    local_ec = *(undefined4 *)(lVar7 + 8);
    local_b0 = 1;
    local_108 = param_2;
    local_104 = param_2;
    if (*(int *)(*(longlong *)(lVar5 + 0x70) + 0x7c) != 4) {
        LAB_14039b4c1:
        if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) == 0) {
            local_res18[0] = 0;
            local_res20 = 0;
            iVar1 = FUN_1403988d0(param_1,&local_108,lVar5,0,local_res8,&local_res20,local_res18);
            if ((iVar1 == 0) || (iVar1 == 0x13d)) {
                local_128 = CONCAT44(param_2,*(undefined4 *)(local_res20 + 0x60));
                if (lVar6 == 0) {
                    local_120 = (ulonglong)*(uint *)(param_1 + 0x6d10) << 0x20;
                    uVar2 = *(undefined4 *)(param_1 + 0x6d14);
                    uVar4 = *(undefined4 *)(param_1 + 0x6d18);
                }
                else {
                    local_120 = CONCAT44(*(undefined4 *)(lVar6 + 0x11e0),*(undefined4 *)(lVar6 + 8));
                    uVar2 = *(undefined4 *)(lVar6 + 0x11e4);
                    uVar4 = *(undefined4 *)(lVar6 + 0x11e8);
                }
                local_118 = (code *)CONCAT44(uVar4,uVar2);
                FUN_1403f4900(param_1,0x9d,&local_128);
            }
            else {
                if (iVar1 == 0x69) {
                    FUN_1403d90d0(param_1,local_res8[0]);
                    iVar3 = FUN_1405597b0(param_1 + 0x70b0);
                    if (-1 < iVar3) {
                        iVar1 = 2;
                    }
                }
                else if (((*(uint *)(*(longlong *)(lVar5 + 0x70) + 0x10c) & 0x4000000) == 0) ||
                         ((iVar1 - 0x5bU & 0xfffffff7) != 0)) {
                    if (local_res18[0] != 0) {
                        *(undefined4 *)(param_1 + 0x6648) = 5;
                        *(int *)(param_1 + 0x6650) = param_2;
                        FUN_14039e400(param_1);
                    }
                }
                else {
                    *(longlong *)(param_1 + 0x6ce8) = lVar5;
                    local_120 = 0x500000000;
                    local_118 = (code *)0xffffffff0000012c;
                    *(undefined8 *)(param_1 + 0x6cf0) = 0x500000000;
                    local_110 = CONCAT44(local_110._4_4_,9);
                    *(undefined8 *)(param_1 + 0x6cf8) = 0xffffffff0000012c;
                    iVar1 = 3;
                    *(undefined8 *)(param_1 + 0x6d00) = local_110;
                }
                uVar9 = FUN_1403b5250(iVar1);
                FUN_1400035b0(0x18,3,0,uVar9);
            }
        }
        else {
            FUN_1403a2550();
            *(undefined4 *)(param_1 + 0x6648) = 5;
            *(int *)(param_1 + 0x6650) = param_2;
            local_128 = (ulonglong)local_128._4_4_ << 0x20;
            local_120 = FUN_14001c280(param_1);
            local_110 = 0;
            local_118 = FUN_14039ea90;
            uVar2 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
            FUN_140195960(param_1 + 0x6658,uVar2,&local_128,4);
            iVar1 = 2;
        }
        return iVar1;
    }
    iVar1 = FUN_1403a1600(param_1);
    if (iVar1 != 0) {
        FUN_1403a1510();
        goto LAB_14039b4c1;
    }
    if (param_2 == 0) {
        return 4;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
        bVar10 = true;
    }
    else {
        bVar10 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
    }
    lVar7 = 0;
    if (bVar10) {
        lVar7 = DAT_140c65898;
    }
    if (lVar7 == 0) {
        LAB_14039b5a4:
        lVar7 = FUN_1407a0fd0(DAT_140c65b70,param_2);
        if (lVar7 == 0) {
            return 4;
        }
    }
    else {
        lVar7 = FUN_1405a5b90(lVar7,param_2);
        if (lVar7 == 0) goto LAB_14039b5a4;
    }
    uVar9 = DAT_140c65b70;
    if (lVar6 != 0) {
        local_e4 = *(undefined4 *)(lVar6 + 8);
    }
    uVar12 = CONCAT44(uVar2,1);
    iVar1 = FUN_1403ae8c0(DAT_140c65b70,&local_108,0,0,DAT_140c659a0,uVar12);
    if (iVar1 == 0) {
        lVar7 = FUN_1403d90d0(DAT_140c65898,local_ec);
        lVar6 = FUN_1403d90d0(DAT_140c65898,local_e4);
        if (lVar7 == 0) {
            iVar1 = 0x1e;
        }
        else {
            lVar8 = FUN_1403acd90(uVar9,local_108);
            if (lVar8 == 0) {
                iVar1 = 4;
            }
            else {
                iVar3 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x168);
                if ((iVar3 != 0) &&
                    ((*(longlong *)(lVar8 + 0x40) == 0 ||
                      ((*(byte *)(*(longlong *)(lVar8 + 0x70) + 0x108) & 2) == 0)))) {
                    uVar12 = uVar12 & 0xffffffff00000000;
                    iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar7,iVar3,lVar6,0,uVar12);
                    if (iVar3 == 0) {
                        iVar1 = 0x97;
                        goto LAB_14039b6fc;
                    }
                }
                iVar3 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x16c);
                if (((iVar3 != 0) && (lVar6 != 0)) &&
                    (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                            (DAT_140c659a0,lVar6,iVar3,lVar7,0,uVar12 & 0xffffffff00000000),
                            iVar3 == 0)) {
                    iVar1 = 0x119;
                }
            }
        }
    }
    else if (iVar1 == 0x13d) {
        iVar1 = 0x13d;
    }
    LAB_14039b6fc:
    if ((iVar1 != 0) && (iVar1 != 0x13d)) {
        return iVar1;
    }
    *(longlong *)(param_1 + 0x6ce8) = lVar5;
    *(undefined8 *)(param_1 + 0x6cf0) = 0x500000000;
    local_110 = CONCAT44(local_110._4_4_,9);
    *(undefined8 *)(param_1 + 0x6cf8) = 0xffffffff0000012c;
    *(undefined8 *)(param_1 + 0x6d00) = local_110;
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_14039b930(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    undefined *puVar11;
    undefined *puVar12;
    undefined *puVar13;
    undefined *puVar14;
    bool bVar15;
    longlong local_res8;
    longlong local_res18;
    ulonglong uVar16;
    longlong local_58;
    undefined *local_50;
    undefined *local_48;

    lVar9 = *(longlong *)(param_1 + 0x78);
    if (lVar9 == 0) {
        return 0x1e;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1480) + 0x10);
    puVar12 = (undefined *)0x0;
    uVar4 = 4;
    local_res8 = 0;
    local_50 = (undefined *)0x0;
    local_58 = 0;
    if (lVar8 != *(longlong *)(param_1 + 0x1480)) {
        do {
            if (((param_2 >> (*(uint *)(lVar8 + 0x24) & 0x1f) & 1) != 0) && (*(int *)(lVar8 + 0x20) != 0))
            {
                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar9) {
                    bVar15 = true;
                }
                else {
                    bVar15 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar9;
                }
                puVar14 = (undefined *)0x0;
                if (bVar15) {
                    puVar14 = DAT_140c65898;
                }
                if (((puVar14 != (undefined *)0x0) && (lVar6 = FUN_1405a5b90(puVar14), lVar6 != 0)) ||
                    (lVar6 = FUN_1407a0fd0(), lVar6 != 0)) {
                    if ((*(uint *)(*(longlong *)(lVar6 + 0x70) + 0x7c) & 0xfffffffb) == 0) {
                        if (*(int *)(lVar8 + 0x24) == 1) {
                            lVar6 = FUN_1405a8a40();
                            LAB_14039bac0:
                            if ((lVar6 != 0) && (iVar5 = FUN_14054f480(lVar6), iVar5 == 0)) {
                                FUN_140003460();
                                goto LAB_14039ba6a;
                            }
                        }
                        else if (*(int *)(lVar8 + 0x24) == 2) {
                            lVar6 = FUN_1405a8ad0();
                            goto LAB_14039bac0;
                        }
                        lVar7 = FUN_14018db00(local_res8,puVar12 + 1,4);
                        *(undefined4 *)((longlong)puVar12 * 4 + lVar7) = *(undefined4 *)(lVar8 + 0x20);
                        lVar6 = local_res8;
                        if ((local_res8 != lVar7) && (FUN_1407db590(), lVar6 = lVar7, local_res8 != 0)) {
                            (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))();
                        }
                        local_res8 = lVar6;
                        puVar12 = puVar12 + 1;
                    }
                    else {
                        uVar4 = FUN_14039b340();
                        lVar6 = local_58;
                        if ((uVar4 == 0) || (uVar4 == 0x13d)) goto LAB_14039beb6;
                    }
                }
            }
            LAB_14039ba6a:
            lVar6 = *(longlong *)(lVar8 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar8 = lVar6;
                        lVar6 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar6) {
                    lVar8 = lVar6;
                }
            }
            else {
                for (lVar7 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar7 != 0;
                     lVar7 = *(longlong *)(lVar7 + 0x10)) {
                    lVar6 = lVar7;
                }
            }
        } while (lVar8 != *(longlong *)(param_1 + 0x1480));
    }
    puVar14 = local_50;
    lVar6 = local_58;
    puVar13 = (undefined *)0x0;
    puVar11 = puVar13;
    if (puVar12 != (undefined *)0x0) {
        do {
            uVar4 = FUN_14039b340(param_1);
            if ((uVar4 == 0) || (uVar4 == 0x13d)) goto LAB_14039beb6;
            puVar11 = puVar11 + 1;
        } while (puVar11 < puVar12);
    }
    puVar12 = puVar13;
    if (puVar14 != (undefined *)0x0) {
        do {
            uVar4 = FUN_14039b340(param_1);
            if ((uVar4 == 0) || (uVar4 == 0x13d)) goto LAB_14039beb6;
            puVar12 = puVar12 + 1;
        } while (puVar12 < puVar14);
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1480) + 0x10);
    if (lVar8 != *(longlong *)(param_1 + 0x1480)) {
        do {
            if (((param_2 >> (*(uint *)(lVar8 + 0x24) & 0x1f) & 1) != 0) &&
                (*(longlong *)(lVar8 + 0x30) != 0)) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + 0x148) = 1;
            }
            lVar7 = *(longlong *)(lVar8 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar8 = lVar7;
                        lVar7 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar7) {
                    lVar8 = lVar7;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar7 + 0x10); lVar8 = lVar7, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar7 = lVar3;
                }
            }
        } while (lVar8 != *(longlong *)(param_1 + 0x1480));
    }
    lVar8 = *(longlong *)(param_1 + 0x78);
    if (lVar8 == 0) {
        uVar4 = 0x1e;
        goto LAB_14039beb6;
    }
    uVar10 = 0;
    puVar12 = puVar13;
    if (*(longlong *)(param_1 + 0x1488) == 1) {
        uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1480) + 0x10) + 0x20);
        if (uVar10 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar9) {
                bVar15 = true;
            }
            else {
                bVar15 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar9;
            }
            if (bVar15) {
                puVar12 = DAT_140c65898;
            }
            if (puVar12 == (undefined *)0x0) {
                LAB_14039bd6a:
                lVar9 = FUN_1407a0fd0(DAT_140c65b70,uVar10);
                puVar12 = (undefined *)0x0;
                if (lVar9 == 0) goto LAB_14039bd8c;
            }
            else {
                lVar9 = *(longlong *)(puVar12 + 0x7d18);
                local_res18 = lVar9;
                lVar7 = *(longlong *)(lVar9 + 8);
                while (lVar7 != 0) {
                    if (*(uint *)(lVar7 + 0x20) < uVar10) {
                        lVar7 = *(longlong *)(lVar7 + 0x18);
                    }
                    else {
                        local_res18 = lVar7;
                        lVar7 = *(longlong *)(lVar7 + 0x10);
                    }
                }
                if ((local_res18 == lVar9) || (uVar10 < *(uint *)(local_res18 + 0x20))) {
                    local_res18 = lVar9;
                }
                if ((local_res18 == lVar9) || (*(longlong *)(local_res18 + 0x28) == 0)) goto LAB_14039bd6a;
            }
            puVar12 = (undefined *)FUN_14034bdd0();
        }
        LAB_14039bd8c:
        if (uVar4 != 4) {
            if (uVar4 < 0x14c) goto LAB_14039bd9d;
            goto LAB_14039be00;
        }
    }
    else {
        uVar4 = 0xe;
        LAB_14039bd9d:
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c64798 != 0) || (iVar5 = FUN_140236fe0(), iVar5 < 0)) goto LAB_14039be00;
            lVar9 = (**(code **)(*DAT_140c64bd0 + 0x18))(DAT_140c64bd0,uVar4);
        }
        else {
            lVar9 = (*DAT_140c63840)(&PTR_u_Spell4CastResult_140a6d150,uVar4,DAT_140c63858);
        }
        if (((lVar9 != 0) && (uVar16 = *(ulonglong *)(lVar9 + 8), uVar16 != 0)) &&
            (uVar16 <= DAT_140c3fe70)) {
            puVar13 = (undefined *)(DAT_140c3fe68 + uVar16);
        }
        LAB_14039be00:
        FUN_1400035b0(0x18,3,0,uVar10,puVar13);
        uVar1 = *(undefined4 *)(lVar8 + 8);
        puVar14 = &DAT_1409e7904;
        if (puVar12 != (undefined *)0x0) {
            puVar14 = puVar12;
        }
        puVar2 = *(uint **)((longlong)(int)uVar4 * 0xa0 + 8 + DAT_140c7df98);
        if (puVar2 != (uint *)0x0) {
            uVar16 = (ulonglong)puVar13 & 0xffffffff00000000 | (ulonglong)uVar10;
            FUN_1405648a0((longlong)(int)uVar4 * 0xa0,&local_58,uVar4,uVar1,uVar16);
            puVar12 = local_50;
            if (local_50 != local_48) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpellCastFailed","iiUUSS",puVar2[4],
                              uVar16 & 0xffffffff00000000 | (ulonglong)*puVar2,uVar1,uVar1,local_50,puVar14)
                        ;
            }
            if (puVar12 != (undefined *)0x0) {
                FUN_14018b900(puVar12,0);
            }
        }
    }
    uVar4 = 1;
    LAB_14039beb6:
    if (lVar6 != 0) {
        (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
    }
    if (local_res8 != 0) {
        (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14039bf20(longlong param_1,ulonglong param_2,undefined4 param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    bool bVar6;
    int local_res8 [2];
    undefined4 local_res10 [4];
    longlong local_res20;
    ulonglong local_138;
    undefined4 local_130;
    undefined4 local_128 [2];
    undefined8 local_120;
    code *local_118;
    undefined8 local_110;
    undefined local_108 [4];
    int local_104;
    undefined4 local_ec;
    undefined4 local_b0;

    param_2 = param_2 & 0xffffffff;
    if ((DAT_140dc21ac & 1) == 0) {
        DAT_140dc21ac = DAT_140dc21ac | 1;
        lVar3 = FUN_140200220(0x3f4);
        if (lVar3 == 0) {
            _DAT_140c8a690 = 0x6c40;
        }
        else {
            _DAT_140c8a690 = *(undefined4 *)(lVar3 + 4);
        }
        lVar3 = FUN_140200220(0x3f4);
        if (lVar3 == 0) {
            _DAT_140c8a694 = 0x6c41;
        }
        else {
            _DAT_140c8a694 = *(undefined4 *)(lVar3 + 8);
        }
        lVar3 = FUN_140200220(0x3f4);
        if (lVar3 == 0) {
            _DAT_140c8a698 = 0x6c42;
        }
        else {
            _DAT_140c8a698 = *(undefined4 *)(lVar3 + 0xc);
        }
    }
    lVar3 = *(longlong *)(param_1 + 0x78);
    local_104 = *(int *)(&DAT_140c8a690 + param_2 * 4);
    if (local_104 == 0) {
        return 4;
    }
    if (lVar3 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar3) {
            bVar6 = true;
        }
        else {
            bVar6 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar3;
        }
        lVar3 = 0;
        if (bVar6) {
            lVar3 = DAT_140c65898;
        }
        if ((lVar3 != 0) && (lVar3 = FUN_1405a5b90(lVar3,local_104), lVar3 != 0)) goto LAB_14039c02d;
    }
    lVar3 = FUN_1407a0fd0(DAT_140c65b70,local_104);
    LAB_14039c02d:
    if (lVar3 == 0) {
        return 4;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) == 0) {
        FUN_1407e4830(local_108,0,200);
        local_ec = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
        local_b0 = 1;
        local_res10[0] = 0;
        local_res20 = 0;
        iVar2 = FUN_1403988d0(param_1,local_108,lVar3,0,local_res10,&local_res20,local_res8);
        if ((iVar2 != 0) && (iVar2 != 0x13d)) {
            uVar4 = FUN_1403b5250(iVar2);
            iVar5 = 0;
            FUN_1400035b0(0x18,3,0,uVar4);
            if (local_res8[0] != iVar5) {
                *(undefined4 *)(param_1 + 0x6648) = 6;
                *(int *)(param_1 + 0x66a0) = (int)param_2;
                *(undefined4 *)(param_1 + 0x66a4) = param_3;
                FUN_14039e400(param_1);
                return iVar2;
            }
            return iVar2;
        }
        local_138 = (ulonglong)CONCAT14((char)param_2,*(undefined4 *)(local_res20 + 0x60));
        local_130 = param_3;
        FUN_1403f4900(param_1,0x99,&local_138);
        return iVar2;
    }
    FUN_1403a2550(param_1);
    *(undefined4 *)(param_1 + 0x6648) = 6;
    *(int *)(param_1 + 0x66a0) = (int)param_2;
    *(undefined4 *)(param_1 + 0x66a4) = param_3;
    local_128[0] = 0;
    local_120 = FUN_14001c280(param_1);
    local_110 = 0;
    local_118 = FUN_14039ea90;
    uVar1 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
    FUN_140195960(param_1 + 0x6658,uVar1,local_128,4);
    return 2;
}



int FUN_14039c1e0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    int iVar6;
    undefined4 local_res10 [2];
    int local_res18 [2];
    undefined8 local_res20;
    longlong local_128;
    undefined4 local_120 [2];
    undefined8 local_118;
    code *local_110;
    undefined8 local_108;
    undefined local_f8 [4];
    undefined4 local_f4;
    undefined4 local_dc;
    undefined4 local_a0;

    local_res10[0] = param_2;
    lVar3 = FUN_1403d90d0();
    if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
         (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x6c) != 0)) && (lVar3 = FUN_1401ed460(), lVar3 != 0))
    {
        lVar3 = *(longlong *)(param_1 + 0x78);
        lVar4 = FUN_140200220(0x1d8);
        local_f4 = 0;
        if (lVar4 != 0) {
            local_f4 = *(undefined4 *)(lVar4 + 4);
        }
        lVar4 = FUN_1403acd90(DAT_140c65b70,local_f4,lVar3);
        if (lVar4 == 0) {
            iVar1 = 4;
        }
        else if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) == 0) {
            FUN_1407e4830(local_f8,0,200);
            local_dc = *(undefined4 *)(lVar3 + 8);
            local_a0 = 1;
            local_128 = 0;
            iVar1 = FUN_1403988d0(param_1,local_f8,lVar4,0,local_res10,&local_128,local_res18);
            if ((iVar1 == 0) || (iVar1 == 0x13d)) {
                local_res20 = CONCAT44(*(undefined4 *)(local_128 + 0x158),*(undefined4 *)(local_128 + 0x60))
                        ;
                FUN_1403f4900(param_1,0x98,&local_res20);
            }
            else {
                uVar5 = FUN_1403b5250(iVar1);
                iVar6 = 0;
                FUN_1400035b0(0x18,3,0,uVar5);
                if (local_res18[0] == iVar6) {
                    FUN_1403a12a0(param_1,iVar1,lVar4,0);
                }
                else {
                    *(undefined4 *)(param_1 + 0x6648) = 2;
                    *(undefined4 *)(param_1 + 0x664c) = local_res10[0];
                    FUN_14039e400();
                }
            }
        }
        else {
            FUN_1403a2550(param_1);
            *(undefined4 *)(param_1 + 0x6648) = 2;
            *(undefined4 *)(param_1 + 0x664c) = param_2;
            local_120[0] = 0;
            local_118 = FUN_14001c280(param_1);
            local_108 = 0;
            local_110 = FUN_14039ea90;
            uVar2 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
            FUN_140195960(param_1 + 0x6658,uVar2,local_120,4);
            iVar1 = 2;
        }
        return iVar1;
    }
    return 0x1f;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_14039c430(longlong param_1,int param_2,undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 uVar6;
    undefined8 local_res8;
    undefined4 local_res18 [2];
    longlong local_res20;
    undefined4 local_108 [2];
    undefined8 local_100;
    code *local_f8;
    undefined8 local_f0;
    undefined local_e8 [4];
    int local_e4;
    undefined4 local_cc;
    undefined4 local_94;
    undefined4 local_90;

    uVar2 = 0;
    uVar6 = 0;
    if (*(longlong *)(param_1 + 0x6490) != 0) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108);
    }
    local_res18[0] = param_3;
    lVar3 = FUN_1403d90d0(param_1,uVar2);
    if (lVar3 == 0) {
        iVar1 = 0x1f;
    }
    else if (*(longlong *)(lVar3 + 0x18) == 0) {
        iVar1 = 0x5b;
    }
    else {
        FUN_14046c300(lVar3,1);
        if ((*(char *)(*(longlong *)(lVar3 + 0x1908) + 4) == '\0') ||
            (*(longlong *)(*(longlong *)(lVar3 + 0x1908) + 0x40) == 0)) {
            iVar1 = 100;
        }
        else {
            if ((param_2 == 0) && (param_2 = DAT_140dc21b4, (DAT_140dc21b0 & 1) == 0)) {
                DAT_140dc21b0 = DAT_140dc21b0 | 1;
                lVar3 = FUN_140200220(0x19e);
                if (lVar3 == 0) {
                    param_2 = 0;
                    DAT_140dc21b4 = 0;
                }
                else {
                    DAT_140dc21b4 = *(int *)(lVar3 + 4);
                    param_2 = DAT_140dc21b4;
                }
            }
            lVar3 = FUN_1403acd90(DAT_140c65b70,param_2,*(undefined8 *)(param_1 + 0x78));
            if (lVar3 == 0) {
                iVar1 = 4;
            }
            else {
                if ((*(int *)(*(longlong *)(lVar3 + 0x70) + 0x18) == 5) &&
                    (*(longlong **)(param_1 + 0x7188) != (longlong *)0x0)) {
                    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x7188) + 0x68))();
                    if (((*(int *)(lVar4 + 4) - 1U < 3) || (*(int *)(lVar4 + 4) == 7)) &&
                        ((uint)(DAT_140c636a8 - *(int *)(param_1 + 0x7190)) < 1000)) {
                        return 0x106;
                    }
                }
                if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) == 0) {
                    FUN_1407e4830(local_e8,0,200);
                    local_cc = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
                    local_94 = 1;
                    local_90 = 1;
                    local_res18[0] = 0;
                    local_res20 = 0;
                    local_e4 = param_2;
                    iVar1 = FUN_1403988d0(param_1,local_e8,lVar3,0,local_res18,&local_res20,&local_res8);
                    if ((iVar1 == 0) || (iVar1 == 0x13d)) {
                        local_res8 = CONCAT44(*(undefined4 *)(local_res20 + 0x158),
                                              *(undefined4 *)(local_res20 + 0x60));
                        FUN_1403f4900(param_1,0x97,&local_res8);
                    }
                    else {
                        uVar5 = FUN_1403b5250(iVar1);
                        FUN_1400035b0(0x18,3,0,uVar5);
                        if ((int)local_res8 != 0) {
                            *(undefined4 *)(param_1 + 0x6648) = 0;
                            if (*(longlong *)(param_1 + 0x6490) != 0) {
                                uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108);
                            }
                            *(undefined4 *)(param_1 + 0x664c) = uVar6;
                            *(int *)(param_1 + 0x6650) = param_2;
                            FUN_14039e400(param_1);
                        }
                    }
                }
                else {
                    FUN_1403a2550(param_1);
                    lVar3 = *(longlong *)(param_1 + 0x6490);
                    *(undefined4 *)(param_1 + 0x6648) = 0;
                    if (lVar3 != 0) {
                        uVar6 = *(undefined4 *)(lVar3 + 0x108);
                    }
                    *(undefined4 *)(param_1 + 0x664c) = uVar6;
                    *(int *)(param_1 + 0x6650) = param_2;
                    local_108[0] = 0;
                    local_100 = FUN_14001c280(param_1);
                    local_f0 = 0;
                    local_f8 = FUN_14039ea90;
                    uVar2 = FUN_1404720d0(lVar3);
                    FUN_140195960(param_1 + 0x6658,uVar2,local_108,4);
                    iVar1 = 2;
                }
            }
        }
    }
    return iVar1;
}



// WARNING: Removing unreachable block (ram,0x00014039c7d0)

void FUN_14039c720(undefined8 param_1,int param_2,int param_3,uint param_4)

{
    int **ppiVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong local_res8;
    undefined4 local_38 [2];
    int *local_30;
    undefined *local_28;
    undefined8 local_20;

    uVar4 = DAT_140c6664c;
    ppiVar1 = (int **)(DAT_140c65898 + 0x7178);
    for (local_30 = *ppiVar1; local_30 != (int *)0x0; local_30 = *(int **)(local_30 + 0x1a)) {
        if (((local_30[1] == param_3) && (*local_30 == param_2)) && (local_30[2] == param_4)) {
            local_30[4] = DAT_140c636a8;
            local_28 = &DAT_1407a0760;
            local_38[0] = 0;
            local_20 = 0;
            FUN_140195960(local_30 + 6,uVar4,local_38,4);
            return;
        }
    }
    uVar4 = 0;
    if (param_4 == 0) goto LAB_14039c85b;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_14039c841:
        lVar3 = FUN_1407a0fd0(DAT_140c65b70,param_4);
        if (lVar3 == 0) goto LAB_14039c85b;
    }
    else {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x7d18);
        local_res8 = lVar3;
        lVar2 = *(longlong *)(lVar3 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_4) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || (param_4 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if ((local_res8 == lVar3) || (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 == 0))
            goto LAB_14039c841;
    }
    uVar4 = *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 4);
    LAB_14039c85b:
    lVar3 = FUN_14018b280(0x70);
    if (lVar3 != 0) {
        FUN_1407a0610(lVar3,param_2,param_3,param_4,uVar4,ppiVar1);
    }
    return;
}



void FUN_14039c8a0(longlong param_1,longlong *param_2)

{
    short sVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    short *psVar9;
    undefined4 local_res10 [2];
    undefined8 local_f8;
    undefined4 local_f0;
    undefined local_e8 [8];
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    longlong local_28;

    if (param_2 == (longlong *)0x0) {
        return;
    }
    if (*(int *)(param_2[8] + 0x1b0) == 0) {
        return;
    }
    lVar4 = FUN_1405a8a40();
    iVar3 = FUN_140552550(lVar4,0xffffdfff);
    if (iVar3 == 0) {
        puVar2 = *(undefined4 **)(lVar4 + 8);
        if (((puVar2[3] & 0x800) != 0) && ((uint)puVar2[0x4b] < 4)) {
            iVar3 = FUN_1405fbc40(*DAT_140c65b80,*puVar2);
            if (iVar3 == 4) {
                local_res10[0] = **(undefined4 **)(lVar4 + 8);
                FUN_1403f4900(DAT_140c65898,0x365,local_res10);
                return;
            }
            local_f8 = 0;
            local_f0 = 0;
            puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
            local_f8 = *puVar5;
            local_f0 = **(undefined4 **)(lVar4 + 8);
            FUN_1403f4900(DAT_140c65898,0x35b,&local_f8);
            return;
        }
        puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
        if (DAT_140c7dc60 != 0) {
            FUN_1405548f0(&DAT_140c7dc60);
        }
        DAT_140c7dc64 = 0;
        DAT_140c7dc6c = *puVar5;
        DAT_140c7dc68 = 0;
        DAT_140c7dc74 = 0;
        FUN_1405546b0(&DAT_140c7dc60,0,0);
        return;
    }
    iVar3 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar4 + 8));
    if ((0 < iVar3) && ((iVar3 < 3 || (iVar3 == 3)))) {
        uVar6 = FUN_14034bdd0();
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),uVar6);
        return;
    }
    iVar3 = FUN_140552550(lVar4,0xffffffff);
    if (iVar3 == 3) {
        FUN_1404dde90(local_e8);
        lVar7 = FUN_14018b280(0x60);
        lVar4 = 0;
        lVar8 = lVar4;
        if (lVar7 != 0) {
            lVar8 = FUN_1404db7e0(lVar7,*(undefined8 *)(param_1 + 0x78));
        }
        FUN_1400b7480(local_e8,lVar8);
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) goto LAB_14039cb7f;
        sVar1 = *psVar9;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar9[lVar4];
        }
    }
    else if (iVar3 == 0xf) {
        FUN_1404dde90();
        lVar7 = FUN_14018b280(0x60);
        lVar4 = 0;
        lVar8 = lVar4;
        if (lVar7 != 0) {
            lVar8 = FUN_1404db7e0(lVar7,*(undefined8 *)(param_1 + 0x78));
        }
        FUN_1400b7480(local_e8,lVar8);
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) goto LAB_14039cb7f;
        sVar1 = *psVar9;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar9[lVar4];
        }
    }
    else {
        FUN_1404dde90();
        lVar7 = FUN_14018b280(0x60);
        lVar4 = 0;
        lVar8 = lVar4;
        if (lVar7 != 0) {
            lVar8 = FUN_1404db7e0(lVar7,*(undefined8 *)(param_1 + 0x78));
        }
        FUN_1400b7480(local_e8,lVar8);
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) {
            LAB_14039cb7f:
            if (local_d8 != local_d0) {
                *local_d8 = 0;
                local_d0 = local_d8;
            }
            goto LAB_14039cbbb;
        }
        sVar1 = *psVar9;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar9[lVar4];
        }
    }
    FUN_14001c480(local_e0,psVar9,psVar9 + lVar4);
    LAB_14039cbbb:
    lVar4 = FUN_1400b7660(local_e8);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),*(undefined8 *)(lVar4 + 8));
    if (local_28 != 0) {
        FUN_14018b900(local_28,0);
    }
    FUN_1400b7390(local_e8);
    return;
}



void FUN_14039cc30(longlong param_1,undefined4 param_2,uint param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        if ((((param_3 < 0x14c) && (lVar2 = FUN_140237240(param_3), lVar2 != 0)) &&
             (uVar1 = *(ulonglong *)(lVar2 + 8), uVar1 != 0)) && (uVar1 <= DAT_140c3fe70)) {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        else {
            lVar2 = 0;
        }
        FUN_1400035b0(0x18,3,0,param_2,lVar2);
        FUN_1404698a0(*(undefined8 *)(param_1 + 0x78));
        local_18 = CONCAT44(param_3,param_2);
        local_10 = 0;
        FUN_1403f4900(param_1,0x801,&local_18);
        return;
    }
    return;
}



void FUN_14039cce0(longlong param_1,undefined4 param_2,uint param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        if ((((param_3 < 0x14c) && (lVar2 = FUN_140237240(param_3), lVar2 != 0)) &&
             (uVar1 = *(ulonglong *)(lVar2 + 8), uVar1 != 0)) && (uVar1 <= DAT_140c3fe70)) {
            lVar2 = DAT_140c3fe68 + uVar1;
        }
        else {
            lVar2 = 0;
        }
        FUN_1400035b0(0x18,3,0,param_2,lVar2);
        FUN_1404698a0(*(undefined8 *)(param_1 + 0x78));
        local_18 = CONCAT44(param_3,param_2);
        local_10 = 1;
        FUN_1403f4900(param_1,0x801,&local_18);
        return;
    }
    return;
}



void FUN_14039cda0(ulonglong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong local_res8;

    lVar2 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (param_2 != (longlong *)0x0)) {
        iVar1 = *(int *)(*(longlong *)(param_2[0x27] + 0x70) + 0xf8);
        if (((iVar1 == 0xe) || (iVar1 == 0x24)) &&
            ((*(int *)(*(longlong *)(param_2[0x27] + 0x70) + 0x18) != 10 ||
              (*(int *)(param_2 + 0x2b) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))))) {
            local_res8 = param_1;
            (**(code **)(*param_2 + 8))(param_2);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)((longlong)param_2 + 0x5c);
            FUN_1403f4900(lVar2,0x802,&local_res8);
        }
    }
    return;
}



undefined8 FUN_14039ce20(undefined8 param_1,longlong *param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = DAT_140c65898;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7188);
    if (plVar1 == (longlong *)0x0) {
        if (param_2 == (longlong *)0x0) goto LAB_14039ce8e;
        lVar4 = (**(code **)(*param_2 + 0x68))();
        if (((*(int *)(lVar4 + 4) - 1U < 3) || (*(int *)(lVar4 + 4) == 7)) &&
            ((uint)(DAT_140c636a8 - *(int *)(lVar3 + 0x7190)) < 1000)) {
            return 0x80004005;
        }
    }
    else {
        if (param_2 == (longlong *)0x0) {
            LAB_14039ce8e:
            if (plVar1 == (longlong *)0x0) {
                return 0;
            }
        }
        else {
            (**(code **)(*plVar1 + 0x58))();
        }
        if (param_2 == (longlong *)0x0) goto LAB_14039cea0;
    }
    (**(code **)*param_2)(param_2);
    LAB_14039cea0:
    if (*(longlong **)(lVar3 + 0x7188) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x7188) + 8))();
        *(undefined8 *)(lVar3 + 0x7188) = 0;
    }
    iVar2 = DAT_140c636a8;
    *(longlong **)(lVar3 + 0x7188) = param_2;
    *(int *)(lVar3 + 0x7190) = iVar2;
    return 0;
}



void FUN_14039cee0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined auStack1288 [32];
    longlong local_4e8;
    longlong *local_4d8 [96];
    longlong local_1d8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack1288;
    FUN_14040fae0(local_4d8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x7d90) + 0x28);
    local_4e8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < *(uint *)(param_2 + 4)) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_4e8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_4e8 == lVar2) || (*(uint *)(param_2 + 4) < *(uint *)(local_4e8 + 0x20))) {
        local_4e8 = lVar2;
    }
    if (local_4e8 == lVar2) {
        lVar2 = 0;
    }
    else {
        lVar2 = local_4e8 + 0x28;
    }
    FUN_1404111e0(local_4d8,lVar2,1);
    FUN_140430e00(*(undefined8 *)(param_1 + 0x7340),*(undefined4 *)(param_2 + 4),local_4d8);
    if (local_4d8[0] != (longlong *)0x0) {
        (**(code **)(*local_4d8[0] + 8))();
        local_4d8[0] = (longlong *)0x0;
    }
    if (local_1d8 != 0) {
        FUN_14018b900(local_1d8,0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack1288);
    return;
}



void FUN_14039cff0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = DAT_140c65898;
    iVar2 = FUN_1403ad600(*(undefined8 *)(DAT_140c65898 + 0x78));
    lVar3 = DAT_140c65898;
    if (iVar2 != 0) {
        iVar2 = FUN_140396750(*(undefined8 *)(DAT_140c65898 + 0x7d90),param_2);
        if (iVar2 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PendingLootInteract",&DAT_1409ef4cc,param_2);
            return;
        }
        lVar3 = FUN_1403d90d0(lVar3,param_2);
        iVar2 = FUN_1403a6440(lVar1,lVar3);
        lVar1 = DAT_140c65898;
        if (iVar2 != 0) {
            if (*(int *)(lVar3 + 0x80) == 0x12) {
                lVar3 = FUN_1403967f0(*(undefined8 *)(DAT_140c65898 + 0x7d90),param_2);
                if (lVar3 == 0) {
                    return;
                }
                uVar4 = *(undefined4 *)(lVar3 + 4);
            }
            else {
                uVar4 = param_2;
                if (*(int *)(lVar3 + 0x80) != 1) {
                    return;
                }
            }
            local_10 = 0;
            local_18 = CONCAT44(param_2,uVar4);
            FUN_1403f4900(lVar1,0x14f,&local_18);
        }
    }
    return;
}



void FUN_14039d0f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = DAT_140c65898;
    iVar2 = FUN_1403ad600(*(undefined8 *)(DAT_140c65898 + 0x78));
    lVar4 = DAT_140c65898;
    if (iVar2 != 0) {
        iVar2 = FUN_140396750(*(undefined8 *)(DAT_140c65898 + 0x7d90),param_2);
        if (iVar2 == 0) {
            lVar4 = FUN_1403d90d0(lVar4,param_2);
            if (((lVar4 != 0) && (param_3 != 0)) && (iVar2 = FUN_1403a6440(lVar1,lVar4), iVar2 != 0)) {
                iVar2 = FUN_14046c580(lVar4,*(undefined8 *)(lVar1 + 0x6490));
                if (iVar2 == 0) {
                    local_10 = 0;
                    local_18 = CONCAT44(param_2,param_2);
                    FUN_1403f4900(DAT_140c65898,0x14f,&local_18);
                }
                else {
                    FUN_14055b0e0(lVar1,param_2);
                    iVar3 = FUN_14039c430(lVar1,iVar2);
                    if ((iVar3 != 0) && (iVar3 != 0x13d)) {
                        uVar5 = FUN_1403acd90(DAT_140c65b70,iVar2,*(undefined8 *)(lVar1 + 0x78));
                        FUN_1403a12a0(lVar1,iVar3,uVar5,0);
                    }
                }
            }
        }
        else {
            FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PendingLootInteract",&DAT_1409ef4cc,param_2);
        }
    }
    return;
}



undefined8 FUN_14039d230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar1 = *(longlong *)(param_1 + 0x6490);
    if (lVar1 != 0) {
        if ((DAT_140dc21b8 & 1) == 0) {
            DAT_140dc21b8 = DAT_140dc21b8 | 1;
            lVar2 = FUN_140200220(0x146);
            if (lVar2 == 0) {
                DAT_140dc21bc = 0x41200000;
            }
            else {
                DAT_140dc21bc = *(undefined4 *)(lVar2 + 0x18);
            }
        }
        uVar3 = FUN_1403ad690(lVar1,param_2,param_3,param_4,0);
        return uVar3;
    }
    return 0;
}



undefined8 FUN_14039d2c0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
    int *piVar1;
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    float fVar6;

    uVar3 = FUN_1403ad600(*(undefined8 *)(param_3 + 0x78));
    if ((int)uVar3 == 0) {
        return uVar3;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,param_4);
    if (lVar4 == 0) {
        return 0x80004005;
    }
    piVar1 = *(int **)(lVar4 + 0x1908);
    if ((*(char *)(piVar1 + 1) == '\0') || (*(longlong *)(piVar1 + 0x10) == 0)) {
        return 0;
    }
    if ((*piVar1 != 0x65) &&
        ((*(longlong **)(param_3 + 0x7188) == (longlong *)0x0 ||
          (iVar2 = (**(code **)(**(longlong **)(param_3 + 0x7188) + 0x70))(), iVar2 != param_4)))) {
        if (*piVar1 == 0x4d) {
            if (*(longlong *)(param_3 + 0x78) == 0) {
                uVar5 = 0x17;
            }
            else {
                uVar5 = *(undefined4 *)(*(longlong *)(param_3 + 0x78) + 0xdc);
            }
            FUN_1401f31e0(uVar5);
        }
        fVar6 = (float)piVar1[4];
        if (fVar6 <= 0.0) {
            fVar6 = 5.0;
        }
        iVar2 = FUN_1403ebe80(0,param_2,fVar6,param_3,lVar4);
        if (iVar2 == 0) {
            if (*(char *)((longlong)piVar1 + 9) == '\0') {
                uVar3 = 0x80004005;
            }
            else {
                uVar3 = FUN_1405592f0(param_3 + 0x70b0,lVar4,3);
            }
        }
        else {
            if ((*(code **)(piVar1 + 0x10) != (code *)0x0) &&
                (iVar2 = (**(code **)(piVar1 + 0x10))(lVar4), -1 < iVar2)) {
                if (*(char *)((longlong)piVar1 + 0xd) != '\0') {
                    FUN_1403dd1c0(param_3);
                }
                if ((*(longlong *)(lVar4 + 0x18) != 0) &&
                    (*(int *)(*(longlong *)(lVar4 + 0x18) + 0x170) != 0)) {
                    FUN_14049aa10(DAT_140c65990);
                }
                if (*(int *)(param_3 + 0x70b8) != 0) {
                    FUN_1405598d0(param_3 + 0x70b0);
                }
            }
            uVar3 = 0;
        }
        return uVar3;
    }
    return 0x80004005;
}



undefined8 FUN_14039d4a0(longlong param_1)

{
    int iVar1;
    int iVar2;
    undefined8 uVar3;
    undefined4 local_res8 [2];

    if (*(longlong *)(param_1 + 0x18) == 0) {
        return 0x80004005;
    }
    if (*(char *)(param_1 + 0x34ec) != '\0') {
        FUN_140437a10(DAT_140c658d8,0x15f,0,0,0,0,1);
    }
    iVar1 = FUN_14046c580(param_1,*(undefined8 *)(DAT_140c65898 + 0x78));
    if (iVar1 == 0) {
        local_res8[0] = *(undefined4 *)(param_1 + 8);
        FUN_1403f4900(DAT_140c65898,0xb3,local_res8);
    }
    else {
        FUN_14055b0e0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
        iVar2 = FUN_14039c430(DAT_140c65898,iVar1);
        if ((iVar2 != 0) && (iVar2 != 0x13d)) {
            uVar3 = FUN_1403acd90(DAT_140c65b70,iVar1,*(undefined8 *)(DAT_140c65898 + 0x6490));
            FUN_1403a12a0(DAT_140c65898,iVar2,uVar3,0);
            return 0;
        }
    }
    return 0;
}


undefined8 FUN_14039d5a0(longlong param_1,undefined4 *param_2)
{
    WindowHandlerFunction(DAT_140c65898,*(undefined4 *)(param_1 + 8),*param_2,1);
    return 0;
}



undefined8 FUN_14039d5d0(longlong param_1)

{
    FUN_14047a140();
    WindowHandlerFunction(DAT_140c65898,*(undefined4 *)(param_1 + 8),0x25);
    return 0;
}



undefined8 FUN_14039d620(longlong param_1)

{
    FUN_14039cff0(param_1,*(undefined4 *)(param_1 + 8));
    return 0;
}



undefined8 FUN_14039d640(longlong param_1)

{
    FUN_14039d0f0(param_1,*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
    return 0;
}



undefined8 FUN_14039d660(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    if (*(int *)(param_1 + 0x17ec) == 0) {
        return 0;
    }
    plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    while( true ) {
        if (plVar3 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            return 0x80004005;
        }
        lVar2 = *plVar3;
        if (*(int *)(lVar2 + 0x30) == 2) break;
        plVar3 = plVar3 + 1;
    }
    if (lVar2 == 0) {
        return 0x80004005;
    }
    uVar1 = *(uint *)(lVar2 + 0x110);
    uVar6 = 0;
    if (uVar1 == 0) {
        return 0;
    }
    while ((((*(longlong *)(lVar2 + 0xe8) == 0 || (uVar1 <= (uint)uVar6)) ||
             (lVar4 = uVar6 * 0xc0 + *(longlong *)(lVar2 + 0xe8), lVar4 == 0)) ||
            (*(int *)(lVar4 + 4) != *(int *)(param_1 + 0x17ec)))) {
        uVar5 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (uVar1 <= uVar5) {
            return 0;
        }
    }
    FUN_1404b6b30(lVar2,lVar2);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingContributionsOpen",&DAT_1409ebb54,
                  uVar6);
    return 0;
}



undefined8 FUN_14039d730(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1405b2f10(param_1,*(undefined8 *)(param_1 + 0x16f8));
    if (lVar1 != 0) {
        FUN_1405b2390(lVar1,*(longlong *)(lVar1 + 0x350) == *(longlong *)(param_1 + 0x16f8));
    }
    return 0;
}



undefined8 FUN_14039d770(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    if (*(int *)(param_1 + 0x17ec) == 0) {
        return 0;
    }
    plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    while( true ) {
        if (plVar3 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            return 0x80004005;
        }
        lVar2 = *plVar3;
        if (*(int *)(lVar2 + 0x30) == 2) break;
        plVar3 = plVar3 + 1;
    }
    if (lVar2 == 0) {
        return 0x80004005;
    }
    uVar1 = *(uint *)(lVar2 + 0x110);
    uVar6 = 0;
    if (uVar1 == 0) {
        return 0;
    }
    while ((((*(longlong *)(lVar2 + 0xe8) == 0 || (uVar1 <= (uint)uVar6)) ||
             (lVar4 = uVar6 * 0xc0 + *(longlong *)(lVar2 + 0xe8), lVar4 == 0)) ||
            (*(int *)(lVar4 + 4) != *(int *)(param_1 + 0x17ec)))) {
        uVar5 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (uVar1 <= uVar5) {
            return 0;
        }
    }
    FUN_1404b6b30(lVar2,lVar2);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingPropertyUpkeepOpen",&DAT_1409ebfc4,
                  uVar6);
    return 0;
}



undefined8 FUN_14039d840(longlong param_1)

{
    int iVar1;

    if ((DAT_140c65898 != 0) && (param_1 != 0)) {
        iVar1 = FUN_14039c1e0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
        if ((iVar1 == 0) || (iVar1 == 0x13d)) {
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_14039d890(void)

{
    FUN_140397ce0(DAT_140c65898);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14039daf0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    undefined4 *puVar5;
    uint uVar6;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar12;
    undefined auVar11 [16];
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 local_res8 [2];
    undefined4 local_48 [4];
    undefined local_38 [12];
    undefined4 uStack44;
    undefined4 *local_28;
    ulonglong uVar7;

    lVar4 = *(longlong *)(param_1 + 0x6490);
    param_2 = param_2 & 0xffffffff;
    if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x250) == 0)) &&
          (iVar3 = FUN_14045e6d0(lVar4), iVar3 == 0)) &&
         ((*(int *)(lVar4 + 0xd50) != 0 &&
           (lVar4 = FUN_1403d90d0(DAT_140c65898,param_2 & 0xffffffff), lVar4 != 0)))) &&
        (lVar1 = *(longlong *)(param_1 + 0x6490), lVar4 != lVar1)) {
        fVar13 = *(float *)(lVar4 + 0x11e0);
        fVar14 = *(float *)(lVar4 + 0x11e4);
        fVar16 = *(float *)(lVar4 + 0x11e8);
        fVar8 = *(float *)(lVar4 + 0x11ec);
        lVar4 = *(longlong *)(lVar1 + 0xf00);
        if (lVar4 != 0) {
            fVar15 = fVar14 * *(float *)(lVar4 + 0x1208);
            fVar17 = fVar14 * *(float *)(lVar4 + 0x120c);
            fVar8 = fVar13 * *(float *)(lVar4 + 0x11f4);
            fVar9 = fVar13 * *(float *)(lVar4 + 0x11f8);
            fVar10 = fVar13 * *(float *)(lVar4 + 0x11fc);
            fVar12 = fVar16 * *(float *)(lVar4 + 0x121c);
            fVar13 = fVar14 * *(float *)(lVar4 + 0x1200) + fVar13 * *(float *)(lVar4 + 0x11f0) +
                     fVar16 * *(float *)(lVar4 + 0x1210) + *(float *)(lVar4 + 0x1220);
            fVar14 = fVar14 * *(float *)(lVar4 + 0x1204) + fVar8 + fVar16 * *(float *)(lVar4 + 0x1214) +
                     *(float *)(lVar4 + 0x1224);
            fVar16 = fVar15 + fVar9 + fVar16 * *(float *)(lVar4 + 0x1218) + *(float *)(lVar4 + 0x1228);
            fVar8 = fVar17 + fVar10 + fVar12 + *(float *)(lVar4 + 0x122c);
        }
        fVar13 = fVar13 - *(float *)(lVar1 + 0xf70);
        fVar14 = fVar14 - *(float *)(lVar1 + 0xf74);
        fVar16 = fVar16 - *(float *)(lVar1 + 0xf78);
        fVar8 = fVar8 - *(float *)(lVar1 + 0xf7c);
        fVar9 = fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16;
        if (DAT_140c44798 <= fVar9) {
            auVar11 = rsqrtss(ZEXT416((uint)fVar9) & (undefined  [16])0xffffffffffffffff,
                              CONCAT412(fVar8 * fVar8,
                                        CONCAT48(fVar16 * fVar16,CONCAT44(fVar14 * fVar14,fVar9))));
            fVar10 = SUB164(auVar11,0);
            fVar9 = (fVar10 * fVar9 * fVar10 - 3.0) * fVar10 * -0.5;
            _local_38 = CONCAT412(fVar9 * fVar8,
                                  CONCAT48(fVar9 * fVar16,CONCAT44(fVar9 * fVar14,fVar9 * fVar13)));
            FUN_1401b3170(local_48,local_38);
            uVar7 = 0;
            puVar5 = (undefined4 *)FUN_14018c320(0,0x240,8);
            local_res8[0] = DAT_140c636a8;
            *puVar5 = 0xe;
            *(undefined8 *)(puVar5 + 3) = 0;
            puVar5[2] = local_48[0];
            puVar5[5] = 0;
            lVar4 = *(longlong *)(param_1 + 0x6490);
            _local_38 = CONCAT124(stack0xffffffffffffffcc,1);
            local_28 = puVar5;
            if ((*(int *)(lVar4 + 0xd50) != 0) || (*(int *)(lVar4 + 0x80) == 0x12)) {
                do {
                    iVar3 = FUN_1405b4ab0(lVar4,local_res8,puVar5 + uVar7 * 0x12,0,0);
                    uVar2 = local_res8[0];
                    if (iVar3 < 0) goto LAB_14039dd2e;
                    uVar6 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar6;
                } while (uVar6 == 0);
                FUN_1405b4f50(lVar4,local_res8[0]);
                FUN_1405b5070(lVar4,uVar2);
                FUN_1405b82a0(lVar4,uVar2);
                for (lVar4 = *(longlong *)(lVar4 + 0xf08); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0xf18))
                {
                    FUN_1405b4ef0(lVar4,uVar2);
                }
            }
            LAB_14039dd2e:
            FUN_14057a190(param_1,local_38);
            FUN_14079a4f0(local_38);
            FUN_14018b900(local_28,0);
        }
    }
    return;
}



void FUN_14039dd70(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;

    if (((((*(longlong *)(param_1 + 0x6490) != 0) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0x108), iVar1 != 0)) &&
          (lVar4 = FUN_1403d90d0(), lVar4 != 0)) &&
         ((iVar2 = *(int *)(lVar4 + 0x80), iVar2 != 0x14 && (iVar2 != 0x17)))) &&
        ((1 < iVar2 - 0x18U &&
          ((param_2 != 0 && ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x108) & 1) != 0)))))) {
        iVar2 = *DAT_140c63750;
        iVar3 = DAT_140c44d30;
        if (iVar2 < DAT_140c44d30) {
            iVar3 = iVar2;
        }
        if ((&DAT_140c44d40)[iVar3] == '\0') {
            iVar3 = DAT_140c44d70;
            if (iVar2 < DAT_140c44d70) {
                iVar3 = iVar2;
            }
            if ((&DAT_140c44d80)[iVar3] == '\0') {
                iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x7c);
                if ((iVar2 != 4) && (1 < iVar2 - 7U)) {
                    FUN_14046bb00(*(undefined8 *)(param_1 + 0x6490),iVar1,param_3,param_4);
                }
            }
            else {
                FUN_14039daf0(param_1,iVar1);
            }
        }
    }
    return;
}



longlong * FUN_14039de90(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 == (longlong *)0x0) {
        return plVar2;
    }
    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(plVar2 + 0x18));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if ((iVar1 != 0) && (*(int *)(plVar2 + 0x10) == 7)) {
            return plVar2;
        }
    }
    return (longlong *)0x0;
}



longlong * FUN_14039def0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 == (longlong *)0x0) {
        return plVar2;
    }
    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(plVar2 + 0x18));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if ((iVar1 != 0) && (*(int *)(plVar2 + 0x10) == 9)) {
            return plVar2;
        }
    }
    return (longlong *)0x0;
}



longlong * FUN_14039df50(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 == (longlong *)0x0) {
        return plVar2;
    }
    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(plVar2 + 0x18));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if ((iVar1 != 0) && (*(int *)(plVar2 + 0x10) == 3)) {
            return plVar2;
        }
    }
    return (longlong *)0x0;
}



longlong * FUN_14039dfb0(void)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = *(longlong **)(DAT_140c65898 + 0x78);
    if (plVar2 == (longlong *)0x0) {
        return plVar2;
    }
    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(plVar2 + 0x18));
    if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 != 0)) {
        return plVar2;
    }
    return (longlong *)0x0;
}



longlong FUN_14039e000(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 == 0) {
        return lVar1;
    }
    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0xc0));
    if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (iVar2 != 0) {
            return plVar3[0x17];
        }
    }
    return 0;
}



undefined8 FUN_14039e060(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x80) == 3)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14039e0a0(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x80) == 7)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14039e0e0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if (iVar1 != 0) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_14039e130(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))();
            if ((((iVar1 != 0) && (plVar2[0x17] != 0)) &&
                 (iVar1 = *(int *)(plVar2[0x17] + 4), (iVar1 - 2U & 0xfffffffa) == 0)) && (iVar1 != 6)) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_14039e1a0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if (((iVar1 != 0) && (plVar2[0x17] != 0)) && (*(int *)(plVar2[0x17] + 4) == 7)) {
                return 1;
            }
        }
    }
    return 0;
}



uint FUN_14039e210(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar1 = FUN_14047be40();
        if (iVar1 != 0) {
            return 1;
        }
    }
    lVar2 = FUN_14039e000(param_1);
    if (lVar2 == 0) {
        return 0;
    }
    return *(uint *)(lVar2 + 0x60) >> 0x12 & 1;
}



undefined8 FUN_14039e260(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;

    lVar1 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)) {
        iVar2 = FUN_1403ad600();
        if (iVar2 != 0) {
            iVar2 = FUN_14039e0e0(lVar1);
            if (iVar2 != 0) {
                iVar2 = FUN_14039e0a0(lVar1);
                if (iVar2 == 0) {
                    return 0x2b;
                }
            }
            if (param_2 != (longlong *)0x0) {
                iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
                if (iVar2 != 0) {
                    uVar5 = 0;
                    uVar6 = 0x40a00000;
                    iVar2 = FUN_14046c580(param_2,*(undefined8 *)(lVar1 + 0x6490));
                    uVar4 = extraout_XMM0_Da;
                    if (iVar2 != 0) {
                        lVar3 = FUN_1403acd90(DAT_140c65b70,iVar2,*(undefined8 *)(DAT_140c65898 + 0x6490));
                        uVar4 = extraout_XMM0_Da_00;
                        if (lVar3 != 0) {
                            uVar5 = FUN_1403ad860(DAT_140c65b70,iVar2,param_2);
                            uVar4 = FUN_1403ad8f0(DAT_140c65b70,iVar2,param_2);
                            uVar6 = uVar4;
                        }
                    }
                    uVar7 = 0x40400000;
                    iVar2 = FUN_1403ad690(uVar4,0x40400000,uVar5,uVar6,*(undefined8 *)(lVar1 + 0x6490),param_2
                    );
                    if (iVar2 == 0) {
                        return 0x33;
                    }
                    local_38 = *(undefined4 *)(param_2 + 1);
                    uStack52 = 3;
                    local_30 = 0;
                    FUN_1403f4900(DAT_140c65898,0x1b0,&local_38,param_4,uVar7);
                    return 0;
                }
            }
            return 0x2d;
        }
    }
    return 0x2c;
}



void FUN_14039e400(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined local_res8 [32];

    if (((*(longlong *)(param_1 + 0x78) != 0) &&
         (plVar2 = (longlong *)
                 FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0)),
                 plVar2 != (longlong *)0x0)) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 != 0)) {
        if (((*(longlong *)(param_1 + 0x78) != 0) &&
             (lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0)),
                     lVar3 != 0)) && (*(int *)(lVar3 + 0x80) == 9)) {
            return;
        }
        iVar1 = FUN_14039e1a0(param_1);
        lVar3 = DAT_140c65898;
        if ((iVar1 == 0) &&
            ((iVar1 = DAT_140c636a8 - *(int *)(param_1 + 0x66e4), iVar1 < 1 || (-1 < iVar1 + -3000)))) {
            *(undefined4 *)(DAT_140c65898 + 0x67b0) = 0;
            local_res8[0] = 0;
            FUN_1403f4900(lVar3,0x1af,local_res8);
            *(int *)(param_1 + 0x66e4) = DAT_140c636a8;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14039e4d0(longlong *param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined auVar5 [16];
    undefined auVar6 [16];
    int iVar7;
    longlong *plVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined (*pauVar11) [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    longlong *local_res8;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined local_b8 [8];
    undefined8 uStack176;
    undefined local_a8 [8];
    undefined8 uStack160;
    undefined local_98 [16];
    undefined local_88 [16];
    code *local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined4 local_48;
    undefined8 local_40;

    lVar4 = DAT_140c65898;
    if (param_2 == 0) {
        return;
    }
    if (param_2 != *(longlong *)(DAT_140c65898 + 0x78)) {
        return;
    }
    local_res8 = param_1;
    plVar8 = (longlong *)FUN_1403d90d0(DAT_140c65898);
    if ((plVar8 == (longlong *)0x0) || (iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8), iVar7 == 0)) {
        if (*(int *)(lVar4 + 0x7d88) != 0) {
            FUN_1403d90d0(DAT_140c65898);
            FUN_1403a0f80(lVar4);
        }
        if (*(int *)(lVar4 + 0x6648) < 0xb) {
            iVar7 = FUN_14039ee60(lVar4);
            if (iVar7 != 0) {
                *(undefined4 *)(lVar4 + 0x6d20) = 1;
            }
            local_88 = local_88 & (undefined  [16])0xffffffff00000000;
            uVar9 = FUN_14001c280(lVar4);
            local_88 = CONCAT88(uVar9,local_88._0_8_);
            local_70 = 0;
            local_78 = FUN_14039ea90;
            FUN_140195960(lVar4 + 0x6658,0,local_88,4);
        }
    }
    else if (*(int *)(lVar4 + 0x78d8) == 0) {
        if (*(int *)(lVar4 + 0x78ec) != 0) {
            *(undefined4 *)(lVar4 + 0x78ec) = 0;
        }
    }
    else {
        *(undefined4 *)(lVar4 + 0x78d8) = 0;
    }
    lVar10 = DAT_140c65898;
    *(int *)(lVar4 + 0x66e4) = DAT_140c636a8 + -3000;
    lVar10 = FUN_1403d90d0(lVar10);
    if (((lVar10 == 0) || (*(int *)(lVar10 + 0x80) != 7)) ||
        (*(longlong *)(*(longlong *)(lVar4 + 0x78) + 0x16e8) == 0)) {
        lVar10 = FUN_1403d90d0(DAT_140c65898);
        if (lVar10 == 0) {
            return;
        }
        if (*(int *)(lVar10 + 0x80) != 9) {
            return;
        }
        lVar10 = FUN_14047b6d0(*(undefined8 *)(lVar4 + 0x78));
        if (lVar10 == 0) {
            return;
        }
        if (*(longlong *)(lVar10 + 0xb8) == 0) {
            return;
        }
        iVar7 = *(int *)(*(longlong *)(lVar10 + 0xb8) + 100);
        if (iVar7 == 0) {
            return;
        }
        plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x78) + 0x1588);
        (**(code **)(*plVar8 + 0x10))(plVar8,iVar7,0,0,0,0,0);
        return;
    }
    iVar7 = FUN_14047be40();
    if ((iVar7 == 0) && (*(longlong **)(lVar4 + 0x6fc0) != (longlong *)0x0)) {
        pauVar11 = (undefined (*) [16])(**(code **)(**(longlong **)(lVar4 + 0x6fc0) + 0x18))();
        lVar10 = DAT_140c65898;
        uVar1 = *(undefined4 *)(DAT_140c65898 + 0x7014);
        uVar2 = *(undefined4 *)(DAT_140c65898 + 0x7018);
        uVar3 = *(undefined4 *)(DAT_140c65898 + 0x701c);
        uVar17 = *(undefined4 *)*pauVar11;
        uVar18 = *(undefined4 *)(*pauVar11 + 4);
        uVar19 = *(undefined4 *)(*pauVar11 + 8);
        uVar20 = *(undefined4 *)(*pauVar11 + 0xc);
        uVar21 = *(undefined4 *)pauVar11[1];
        uVar22 = *(undefined4 *)(pauVar11[1] + 4);
        uVar23 = *(undefined4 *)(pauVar11[1] + 8);
        uVar24 = *(undefined4 *)(pauVar11[1] + 0xc);
        *(undefined4 *)*pauVar11 = *(undefined4 *)(DAT_140c65898 + 0x7010);
        *(undefined4 *)(*pauVar11 + 4) = uVar1;
        *(undefined4 *)(*pauVar11 + 8) = uVar2;
        *(undefined4 *)(*pauVar11 + 0xc) = uVar3;
        uVar1 = *(undefined4 *)(lVar10 + 0x7024);
        uVar2 = *(undefined4 *)(lVar10 + 0x7028);
        uVar3 = *(undefined4 *)(lVar10 + 0x702c);
        *(undefined4 *)pauVar11[1] = *(undefined4 *)(lVar10 + 0x7020);
        *(undefined4 *)(pauVar11[1] + 4) = uVar1;
        *(undefined4 *)(pauVar11[1] + 8) = uVar2;
        *(undefined4 *)(pauVar11[1] + 0xc) = uVar3;
        iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x6fc0) + 0x30))();
        if (iVar7 != 0) {
            *pauVar11 = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
            pauVar11[1] = CONCAT412(uVar24,CONCAT48(uVar23,CONCAT44(uVar22,uVar21)));
            FUN_14039e400(lVar4);
            return;
        }
    }
    lVar10 = *(longlong *)(lVar4 + 0x78);
    local_68 = 0x4041;
    local_60 = 1;
    local_58 = 0;
    local_50 = 0;
    fVar13 = *(float *)(lVar10 + 0x11e0) +
             (*(float *)(DAT_140c65898 + 0x7000) + *(float *)(DAT_140c65898 + 0x6ff0)) * 0.5;
    fVar14 = *(float *)(lVar10 + 0x11e4) +
             (*(float *)(DAT_140c65898 + 0x7004) + *(float *)(DAT_140c65898 + 0x6ff4)) * 0.5;
    fVar15 = *(float *)(lVar10 + 0x11e8) +
             (*(float *)(DAT_140c65898 + 0x7008) + *(float *)(DAT_140c65898 + 0x6ff8)) * 0.5;
    fVar16 = *(float *)(lVar10 + 0x11ec) +
             (*(float *)(DAT_140c65898 + 0x700c) + *(float *)(DAT_140c65898 + 0x6ffc)) * 0.5;
    local_48 = 0;
    local_40 = 0;
    local_res10 = 0;
    local_res8 = (longlong *)0x0;
    local_res14 = 0x3f800000;
    local_88 = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
    fVar12 = (*(float *)(DAT_140c65898 + 0x7004) - *(float *)(DAT_140c65898 + 0x6ff4)) * 0.5;
    local_98 = CONCAT412((*(float *)(DAT_140c65898 + 0x700c) - *(float *)(DAT_140c65898 + 0x6ffc)) *
                         0.5,CONCAT48((*(float *)(DAT_140c65898 + 0x7008) -
                                       *(float *)(DAT_140c65898 + 0x6ff8)) * 0.5,
                                      CONCAT44(fVar12,(*(float *)(DAT_140c65898 + 0x7000) -
                                                       *(float *)(DAT_140c65898 + 0x6ff0)) * 0.5)));
    local_b8 = CONCAT44(fVar14 + fVar12 * 2.5,fVar13);
    local_a8 = CONCAT44(fVar14 + fVar12 * -0.5,fVar13);
    iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x7248) + 0x1a8))
            (*(longlong **)(lVar4 + 0x7248),local_a8,local_b8,&local_res10,&local_res8,
             &local_68);
    if (iVar7 == 0) {
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
            local_res8 = (longlong *)0x0;
        }
        local_68 = 0x4041;
        local_60 = 1;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        _local_a8 = CONCAT124(stack0xffffffffffffff5c,local_a8._0_4_ - local_98._0_4_);
        _local_b8 = CONCAT124(stack0xffffffffffffff4c,local_b8._0_4_ - local_98._0_4_);
        local_40 = 0;
        local_res10 = 0;
        local_res14 = 0x3f800000;
        iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x7248) + 0x1a8))
                (*(longlong **)(lVar4 + 0x7248),local_a8,local_b8,&local_res10,&local_res8,
                 &local_68);
        if (iVar7 == 0) {
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
                local_res8 = (longlong *)0x0;
            }
            local_68 = 0x4041;
            _local_a8 = CONCAT124(stack0xffffffffffffff5c,local_88._0_4_ + local_98._0_4_);
            _local_b8 = CONCAT124(stack0xffffffffffffff4c,local_88._0_4_ + local_98._0_4_);
            local_60 = 1;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = 0;
            local_res10 = 0;
            local_res14 = 0x3f800000;
            iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x7248) + 0x1a8))
                    (*(longlong **)(lVar4 + 0x7248),local_a8,local_b8,&local_res10,&local_res8,
                     &local_68);
            if (iVar7 == 0) {
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)(*local_res8 + 8))();
                    local_res8 = (longlong *)0x0;
                }
                auVar6 = _local_a8;
                auVar5 = _local_b8;
                local_68 = 0x4041;
                local_60 = 1;
                _local_a8 = CONCAT124(stack0xffffffffffffff5c,local_88._0_4_);
                _local_b8 = CONCAT124(stack0xffffffffffffff4c,local_88._0_4_);
                local_58 = 0;
                local_50 = 0;
                local_48 = 0;
                local_40 = 0;
                uStack160._4_4_ = SUB164(auVar6,0xc);
                _local_a8 = CONCAT48((float)uStack160 - local_98._8_4_,local_a8);
                uStack176._4_4_ = SUB164(auVar5,0xc);
                _local_b8 = CONCAT48((float)uStack176 - local_98._8_4_,local_b8);
                local_res10 = 0;
                local_res14 = 0x3f800000;
                iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x7248) + 0x1a8))
                        (*(longlong **)(lVar4 + 0x7248),local_a8,local_b8,&local_res10,&local_res8
                                ,&local_68);
                if (iVar7 == 0) {
                    if (local_res8 != (longlong *)0x0) {
                        (**(code **)(*local_res8 + 8))();
                        local_res8 = (longlong *)0x0;
                    }
                    _local_a8 = CONCAT48(local_88._8_4_ + local_98._8_4_,local_a8);
                    _local_b8 = CONCAT48(local_88._8_4_ + local_98._8_4_,local_b8);
                    local_68 = 0x4041;
                    local_60 = 1;
                    local_58 = 0;
                    local_50 = 0;
                    local_48 = 0;
                    local_40 = 0;
                    local_res10 = 0;
                    local_res14 = 0x3f800000;
                    iVar7 = (**(code **)(**(longlong **)(lVar4 + 0x7248) + 0x1a8))
                            (*(longlong **)(lVar4 + 0x7248),local_a8,local_b8,&local_res10,
                             &local_res8,&local_68);
                    if (iVar7 == 0) goto LAB_14039e9df;
                }
            }
        }
    }
    FUN_14039e400(lVar4);
    LAB_14039e9df:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



void FUN_14039ea90(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
        if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 != 0))
        {
            return;
        }
        if (*(int *)(param_1 + 0x6648) < 0xb) {
            FUN_14039eaf0(param_1);
            return;
        }
    }
    return;
}



void FUN_14039eaf0(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    int *piVar7;
    ulonglong local_18;
    undefined4 local_10;

    piVar7 = DAT_140c63750;
    if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
    }
    switch(*param_2) {
        case 0:
            *param_2 = 0xb;
            iVar2 = DAT_140c45ec0;
            if (*piVar7 < DAT_140c45ec0) {
                iVar2 = *piVar7;
            }
            if ((&DAT_140c45ed0)[iVar2] == '\0') {
                lVar5 = *(longlong *)(param_1 + 0x78);
                if (*(int *)(lVar5 + 0x108) != param_2[1]) {
                    *(undefined4 *)(lVar5 + 0x108) = param_2[1];
                    uVar1 = FUN_14045a950(lVar5);
                    *(undefined4 *)(lVar5 + 0x10c) = uVar1;
                }
            }
            iVar2 = FUN_14039c430(param_1,param_2[2]);
            break;
        case 1:
            *param_2 = 0xb;
            plVar4 = (longlong *)FUN_1403ac780(param_1 + 0xa0,param_2 + 0x18);
            if (plVar4 == (longlong *)0x0) {
                return;
            }
            lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
            if (lVar5 != *(longlong *)(param_2 + 0x1a)) {
                return;
            }
            iVar2 = FUN_1403998e0(param_1,param_2 + 0x18,0,0);
            if (iVar2 == 0) {
                return;
            }
            if (iVar2 == 0x13d) {
                return;
            }
            lVar5 = FUN_14056a030(plVar4);
            if (lVar5 == 0) {
                return;
            }
            uVar3 = FUN_14056a030(plVar4);
            FUN_1403a12a0(param_1,iVar2,uVar3,0);
            return;
        case 2:
            *param_2 = 0xb;
            FUN_14039c1e0(param_1,param_2[1]);
            return;
        case 3:
            *param_2 = 0xb;
            iVar2 = FUN_14039ac90(param_1,*(undefined8 *)(param_1 + 0x78),param_2[0x1c],param_2[0x16],
                                  param_2[2]);
            break;
        case 4:
            uVar6 = (ulonglong)(uint)param_2[0x16];
            *param_2 = 0xb;
            if (*(ulonglong *)(param_1 + 0xa98) <= uVar6) {
                return;
            }
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa90) + uVar6 * 8);
            if (lVar5 == 0) {
                return;
            }
            iVar2 = FUN_14039a040(param_1,uVar6,0,0,param_2[1],0);
            if (iVar2 == 0) {
                return;
            }
            if (iVar2 == 0x13d) {
                return;
            }
            uVar3 = FUN_1405a4b80(lVar5,1);
            FUN_1403a12a0(param_1,iVar2,uVar3,0);
            return;
        case 5:
            *param_2 = 0xb;
            iVar2 = FUN_14039b340(param_1,param_2[2]);
            break;
        case 6:
            *param_2 = 0xb;
            FUN_14039bf20(param_1,param_2[0x16],param_2[0x17]);
            return;
        case 7:
            *param_2 = 0xb;
            FUN_140397850(param_1,0,0);
            return;
        case 8:
            *param_2 = 0xb;
            FUN_140397ce0();
            return;
        case 9:
            uVar6 = 0;
            if (*(ulonglong *)(param_1 + 0x6370) != 0) {
                piVar7 = *(int **)(param_1 + 0x6368);
                do {
                    if (*piVar7 == *(int *)(param_1 + 0x6650)) {
                        return;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 1;
                } while (uVar6 < *(ulonglong *)(param_1 + 0x6370));
            }
            *param_2 = 0xb;
            local_18 = (ulonglong)*(ushort *)(param_1 + 0x66a0);
            local_10 = 1;
            local_18 = local_18 | (ulonglong)*(uint *)(param_1 + 0x664c) << 0x20;
            FUN_1403f4900(param_1,0x4db,&local_18);
            FUN_140003460(param_1 + 0x6368,param_1 + 0x6650);
            return;
        case 10:
            *param_2 = 0xb;
            FUN_14053bcc0(param_1,param_2[0x1d]);
            return;
        default:
            goto LAB_14039ed3d;
    }
    if ((iVar2 != 0) && (iVar2 != 0x13d)) {
        uVar3 = FUN_1403acd90(DAT_140c65b70,param_2[2],*(undefined8 *)(param_1 + 0x78));
        FUN_1403a12a0(param_1,iVar2,uVar3,0);
        return;
    }
    LAB_14039ed3d:
    return;
}



undefined8 FUN_14039ee60(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;

    iVar1 = *(int *)(param_1 + 0x6648);
    lVar2 = 0;
    if (10 < iVar1) {
        return 0;
    }
    if (iVar1 == 1) {
        plVar3 = (longlong *)FUN_1403ac780(param_1 + 0xa0,param_1 + 0x66a8);
        if ((plVar3 != (longlong *)0x0) &&
            (lVar4 = (**(code **)(*plVar3 + 0x30))(), lVar4 == *(longlong *)(param_1 + 0x66b0))) {
            lVar2 = FUN_14056a030();
        }
        LAB_14039eee2:
        if (((ulonglong)*(uint *)(param_1 + 0x66a0) < *(ulonglong *)(param_1 + 0xa98)) &&
            (lVar4 = *(longlong *)
                    (*(longlong *)(param_1 + 0xa90) + (ulonglong)*(uint *)(param_1 + 0x66a0) * 8),
                    lVar4 != 0)) {
            lVar2 = FUN_1405a4b80(lVar4,1);
        }
    }
    else {
        if (iVar1 != 3) {
            if (iVar1 == 4) goto LAB_14039eee2;
            if (iVar1 != 5) {
                return 0;
            }
        }
        lVar2 = FUN_1405a5b90(param_1,*(undefined4 *)(param_1 + 0x6650));
    }
    if ((lVar2 != 0) &&
        ((iVar1 = *(int *)(*(longlong *)(lVar2 + 0x70) + 0x7c), iVar1 == 4 || (iVar1 - 7U < 2)))) {
        return 1;
    }
    return 0;
}



undefined8 FUN_14039ef50(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 uVar4;

    if (param_2 == 1) {
        iVar1 = FUN_14039e1a0();
        uVar3 = 0x1a5;
    }
    else if (param_2 == 2) {
        iVar1 = FUN_14039e1a0();
        uVar3 = 0x1a6;
    }
    else if (param_2 == 3) {
        iVar1 = FUN_14039e1a0();
        uVar3 = 0x1a3;
    }
    else {
        if (param_2 != 4) {
            return 0;
        }
        iVar1 = FUN_14039e1a0();
        uVar3 = 0x1a4;
    }
    uVar4 = 0;
    lVar2 = FUN_140200220(uVar3);
    if (lVar2 != 0) {
        uVar4 = *(undefined4 *)(lVar2 + 4 + (longlong)(int)(uint)(iVar1 != 0) * 4);
    }
    uVar3 = FUN_1403acd90(DAT_140c65b70,uVar4,*(undefined8 *)(param_1 + 0x78));
    return uVar3;
}



void FUN_14039eff0(longlong param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined8 uVar10;
    ulonglong uVar11;
    int iVar12;
    bool bVar13;
    int local_res8;
    int local_res20 [2];
    ulonglong in_stack_fffffffffffffef0;
    uint local_108 [7];
    undefined4 local_ec;
    undefined4 local_e4;
    undefined4 local_b0;

    if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
    }
    if (*(longlong *)(param_1 + 0x6490) == 0) {
        return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0xd50) == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x78d8) != 0) {
        return;
    }
    if (*(int *)(param_1 + 0x75d8) != 0) {
        return;
    }
    iVar3 = 0;
    iVar12 = 0;
    local_res8 = 0;
    iVar4 = 0;
    if ((*(int *)(param_1 + 31000) == 0) &&
        ((*(longlong *)(param_1 + 0x7198) == 0 ||
          (*(int *)(*(longlong *)(param_1 + 0x7198) + 0x50) == 0)))) {
        iVar2 = FUN_14039e1a0();
        local_res20[0] = param_2;
        if ((iVar2 != 0) || (param_3 == 0)) goto LAB_14039f165;
        iVar2 = FUN_1404dacf0(param_1);
        if (iVar2 == 0) {
            iVar2 = FUN_1404dad90(param_1);
            if (iVar2 != 0) {
                iVar3 = 4;
                local_res8 = 4;
                local_res20[0] = 4;
            }
        }
        else {
            iVar2 = FUN_1404dad90(param_1);
            if (iVar2 == 0) {
                iVar3 = 3;
                local_res8 = 3;
                local_res20[0] = 3;
            }
        }
        if ((((DAT_140c89aa0 == 0) && (iVar2 = FUN_1404daac0(param_1), iVar2 == 0)) &&
             (*(int *)(param_1 + 0x70b8) == 0)) &&
            (((iVar2 = FUN_1404daf50(param_1), iVar2 == 0 || (iVar2 = FUN_1404daeb0(param_1), iVar2 == 0)
              ) || (iVar2 = FUN_14055a260(param_1 + 0x7330), iVar2 != 0)))) {
            iVar2 = FUN_1404dab80(param_1);
            iVar12 = 0;
            if (iVar2 != 0) {
                iVar12 = 2;
                local_res20[0] = iVar12;
            }
        }
        else {
            iVar2 = FUN_1404dab80(param_1);
            if (iVar2 == 0) {
                iVar12 = 1;
                local_res20[0] = iVar12;
            }
        }
        if ((iVar3 == 0) && (iVar12 == 0)) goto LAB_14039f165;
    }
    else {
        local_res20[0] = 1;
        LAB_14039f165:
        iVar12 = local_res20[0];
        local_res8 = iVar12;
        local_res20[0] = iVar12;
    }
    if (((*(longlong *)(param_1 + 0x78) != 0) && (lVar5 = *(longlong *)(param_1 + 0x6490), lVar5 != 0)
        ) && (iVar3 = FUN_14045e630(lVar5), iVar3 != 0)) {
        if (*(longlong *)(lVar5 + 0x358) == 0) {
            return;
        }
        if (*(longlong *)(lVar5 + 0x4c8) != 0) {
            return;
        }
        if (param_3 != 0) {
            FUN_14039f600(param_1,local_res20[0]);
            return;
        }
        FUN_14039f600(param_1,param_2);
        return;
    }
    iVar3 = FUN_14039e1a0(param_1);
    if (iVar3 == 0) {
        if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1088) != 0) {
            return;
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x6490) + 0x1070) & 0x100) == 0) {
            return;
        }
    }
    else if (param_2 - 1U < 2) {
        return;
    }
    if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x78d8) = 0;
        return;
    }
    lVar5 = FUN_14039ef50(param_1);
    if (lVar5 == 0) {
        return;
    }
    if (*(longlong *)(param_1 + 0x7928) == 0) {
        LAB_14039f40b:
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"DashCastSuccess","");
        uVar1 = DAT_140c636a8;
        *(undefined8 *)(param_1 + 0x78d8) = 1;
        *(undefined4 *)(param_1 + 0x78e0) = uVar1;
        *(int *)(param_1 + 0x78e8) = iVar12;
        *(int *)(param_1 + 0x78e4) = local_res8;
        if (iVar4 != 0x13d) {
            FUN_14046afc0(*(undefined8 *)(param_1 + 0x78),lVar5,0);
        }
        FUN_1403f4900(param_1,0xde,local_res20);
        if ((DAT_140dc21c0 & 1) == 0) {
            DAT_140dc21c0 = DAT_140dc21c0 | 1;
            lVar5 = FUN_140200220();
            if (lVar5 == 0) {
                DAT_140dc21c4 = 0;
            }
            else {
                DAT_140dc21c4 = *(undefined4 *)(lVar5 + 4);
            }
        }
        puVar9 = (undefined4 *)FUN_14023d840(DAT_140dc21c4);
        if (puVar9 != (undefined4 *)0x0) {
            lVar5 = 0x24;
            do {
                puVar9 = puVar9 + 1;
                lVar7 = FUN_14023d400(*puVar9);
                if ((lVar7 != 0) && (lVar6 = FUN_140248f00(), lVar6 != 0)) {
                    uVar10 = FUN_140248f00(*(undefined4 *)(lVar7 + 0x14));
                    FUN_140578770(*(longlong *)(param_1 + 0x6490),
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 8),lVar6,uVar10,0,0);
                }
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
    }
    else {
        FUN_1407e4830(local_108,0,200);
        lVar7 = *(longlong *)(param_1 + 0x78);
        local_108[0] = **(uint **)(lVar5 + 0x70);
        uVar11 = (ulonglong)local_108[0];
        local_ec = *(undefined4 *)(lVar7 + 8);
        local_b0 = 1;
        if (local_108[0] == 0) {
            LAB_14039f4b0:
            iVar4 = 4;
        }
        else {
            if (lVar7 == 0) {
                LAB_14039f2c0:
                lVar6 = FUN_1407a0fd0(DAT_140c65b70,uVar11 & 0xffffffff);
                if (lVar6 == 0) goto LAB_14039f4b0;
            }
            else {
                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
                    bVar13 = true;
                }
                else {
                    bVar13 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
                }
                lVar6 = 0;
                if (bVar13) {
                    lVar6 = DAT_140c65898;
                }
                if ((lVar6 == 0) || (lVar6 = FUN_1405a5b90(lVar6,local_108[0]), lVar6 == 0))
                    goto LAB_14039f2c0;
            }
            uVar10 = DAT_140c65b70;
            if (lVar7 != 0) {
                local_e4 = *(undefined4 *)(lVar7 + 8);
            }
            in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffff00000000;
            iVar4 = FUN_1403ae8c0(DAT_140c65b70,local_108,0,0,DAT_140c659a0,in_stack_fffffffffffffef0);
            if ((iVar4 == 0) || (iVar4 == 0x13d)) {
                lVar7 = FUN_1403d90d0(DAT_140c65898);
                lVar6 = FUN_1403d90d0(DAT_140c65898);
                if (lVar7 == 0) {
                    iVar4 = 0x1e;
                }
                else {
                    lVar8 = FUN_1403acd90(uVar10);
                    if (lVar8 == 0) {
                        iVar4 = 4;
                    }
                    else {
                        if ((*(int *)(*(longlong *)(lVar8 + 0x70) + 0x168) != 0) &&
                            ((*(longlong *)(lVar8 + 0x40) == 0 ||
                              ((*(byte *)(*(longlong *)(lVar8 + 0x70) + 0x108) & 2) == 0)))) {
                            in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffff00000000;
                            iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))();
                            if (iVar3 == 0) {
                                iVar4 = 0x97;
                                goto LAB_14039f3fb;
                            }
                        }
                        iVar3 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x16c);
                        if (((iVar3 != 0) && (lVar6 != 0)) &&
                            (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                                    (DAT_140c659a0,lVar6,iVar3,lVar7,0,
                                     in_stack_fffffffffffffef0 & 0xffffffff00000000), iVar3 == 0)) {
                            iVar4 = 0x119;
                        }
                    }
                }
            }
            LAB_14039f3fb:
            if ((iVar4 == 0) || (iVar4 == 0x13d)) goto LAB_14039f40b;
        }
        FUN_1403a12a0(param_1,iVar4,lVar5,0);
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"DashCastFail","");
    }
    return;
}



undefined8 FUN_14039f590(longlong param_1,int param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 uVar3;

    if (param_2 == 1) {
        uVar2 = 0x1df;
    }
    else if (param_2 == 2) {
        uVar2 = 0x1e0;
    }
    else if (param_2 == 3) {
        uVar2 = 0x1dd;
    }
    else {
        if (param_2 != 4) {
            return 0;
        }
        uVar2 = 0x1de;
    }
    lVar1 = FUN_140200220(uVar2);
    if (lVar1 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(undefined4 *)(lVar1 + 4);
    }
    uVar2 = FUN_1403acd90(DAT_140c65b70,uVar3,*(undefined8 *)(param_1 + 0x78));
    return uVar2;
}



void FUN_14039f600(longlong param_1,int param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    bool bVar9;
    int local_res8 [2];
    int local_f8 [7];
    undefined4 local_dc;
    undefined4 local_d4;
    undefined4 local_a0;

    if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
    }
    if (*(longlong *)(param_1 + 0x6490) == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x78ec) != 0) {
        return;
    }
    if (*(int *)(param_1 + 0x75d8) != 0) {
        return;
    }
    if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x78ec) = 0;
        return;
    }
    lVar5 = FUN_14039f590();
    if (lVar5 == 0) {
        return;
    }
    FUN_1407e4830();
    lVar7 = *(longlong *)(param_1 + 0x78);
    local_dc = *(undefined4 *)(lVar7 + 8);
    local_a0 = 1;
    local_f8[0] = **(int **)(lVar5 + 0x70);
    if (local_f8[0] == 0) {
        return;
    }
    if (lVar7 == 0) {
        LAB_14039f701:
        lVar6 = FUN_1407a0fd0(DAT_140c65b70);
        if (lVar6 == 0) {
            return;
        }
    }
    else {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
            bVar9 = true;
        }
        else {
            bVar9 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
        }
        lVar6 = 0;
        if (bVar9) {
            lVar6 = DAT_140c65898;
        }
        if ((lVar6 == 0) || (lVar6 = FUN_1405a5b90(), lVar6 == 0)) goto LAB_14039f701;
    }
    uVar2 = DAT_140c65b70;
    if (lVar7 != 0) {
        local_d4 = *(undefined4 *)(lVar7 + 8);
    }
    iVar3 = FUN_1403ae8c0(DAT_140c65b70,local_f8,0,0,DAT_140c659a0,1);
    if (iVar3 == 0) {
        lVar7 = FUN_1403d90d0(DAT_140c65898,local_dc);
        lVar6 = FUN_1403d90d0(DAT_140c65898,local_d4);
        if (lVar7 == 0) {
            return;
        }
        lVar8 = FUN_1403acd90(uVar2,local_f8[0]);
        if (lVar8 == 0) {
            return;
        }
        iVar4 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x168);
        if ((iVar4 != 0) &&
            (((*(longlong *)(lVar8 + 0x40) == 0 ||
               ((*(byte *)(*(longlong *)(lVar8 + 0x70) + 0x108) & 2) == 0)) &&
              (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar7,iVar4,lVar6,0,0),
                      iVar4 == 0)))) {
            return;
        }
        iVar4 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x16c);
        if (((iVar4 != 0) && (lVar6 != 0)) &&
            (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar6,iVar4,lVar7,0,0),
                    iVar4 == 0)) {
            return;
        }
    }
    else if (iVar3 == 0x13d) {
        iVar3 = 0x13d;
        goto LAB_14039f85d;
    }
    if (iVar3 != 0) {
        return;
    }
    LAB_14039f85d:
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (((lVar7 == 0) || (lVar6 = *(longlong *)(param_1 + 0x6490), lVar6 == 0)) ||
        ((iVar4 = FUN_14045e630(lVar6), iVar4 == 0 ||
                                        ((*(longlong *)(lVar6 + 0x358) != 0 && (*(longlong *)(lVar6 + 0x4c8) == 0)))))) {
        uVar1 = DAT_140c636a8;
        *(undefined8 *)(param_1 + 0x78ec) = 1;
        *(int *)(param_1 + 0x78f8) = param_2;
        *(undefined4 *)(param_1 + 0x78f4) = uVar1;
        if (iVar3 != 0x13d) {
            FUN_14046afc0(lVar7,lVar5,0);
        }
        local_res8[0] = param_2;
        FUN_1403f4900(param_1,0x15c,local_res8);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14039f920(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x78))(*(longlong **)(param_1 + 0x7588),0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xb8))();
    if (iVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x7588) + 0x198))();
    }
    *(undefined4 *)(param_1 + 0x78d8) = 0;
    *(undefined4 *)(param_1 + 0x78ec) = 0;
    *(undefined8 *)(param_1 + 0x78fc) = 0;
    *(undefined8 *)(param_1 + 0x7904) = 0;
    *(undefined8 *)(param_1 + 0x790c) = 0;
    *(undefined4 *)(param_1 + 0x75dc) = 0;
    FUN_140195d70(param_1 + 0x7608);
    *(undefined4 *)(param_1 + 0x75e0) = 0;
    FUN_140195d70(param_1 + 0x7650);
    *(undefined4 *)(param_1 + 0x75e4) = 0;
    FUN_140195d70(param_1 + 0x7698);
    *(undefined4 *)(param_1 + 0x75e8) = 0;
    FUN_140195d70(param_1 + 0x76e0);
    *(undefined4 *)(param_1 + 0x75ec) = 0;
    FUN_140195d70(param_1 + 0x7728);
    *(undefined4 *)(param_1 + 0x75f0) = 0;
    FUN_140195d70(param_1 + 0x7770);
    *(undefined4 *)(param_1 + 0x75f4) = 0;
    FUN_140195d70(param_1 + 0x77b8);
    if (*(int *)(param_1 + 0x6388) != 0) {
        *(byte *)(param_1 + 0x63a4) = *(byte *)(param_1 + 0x63a4) | 1;
    }
    *(undefined4 *)(param_1 + 0x75f8) = 0;
    FUN_140195d70(param_1 + 0x7800);
    if (*(int *)(param_1 + 0x6388) != 0) {
        *(byte *)(param_1 + 0x63a4) = *(byte *)(param_1 + 0x63a4) | 2;
    }
    *(undefined4 *)(param_1 + 0x75fc) = 0;
    FUN_140195d70(param_1 + 0x7848);
    if (*(int *)(param_1 + 0x6388) != 0) {
        *(byte *)(param_1 + 0x63a4) = *(byte *)(param_1 + 0x63a4) | 4;
    }
    *(undefined4 *)(param_1 + 0x7600) = 0;
    uVar2 = FUN_140195d70(param_1 + 0x7890);
    if (*(int *)(param_1 + 0x6388) != 0) {
        *(byte *)(param_1 + 0x63a4) = *(byte *)(param_1 + 0x63a4) | 8;
    }
    if ((*(int *)(param_1 + 0x78d8) == 0) && (*(int *)(param_1 + 0x78ec) == 0)) {
        if ((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x6490) != 0)) {
            iVar1 = FUN_14045e630();
            uVar2 = extraout_XMM0_Qa;
            if (iVar1 != 0) goto LAB_14039fab8;
        }
        *(undefined4 *)(param_1 + 0x75d8) = 0;
        _DAT_140c89a90 = 0;
        if (*(longlong *)(param_1 + 0x78) != 0) {
            uVar2 = FUN_1404695e0();
        }
    }
    LAB_14039fab8:
    DAT_140c89aa0 = 0;
    *(undefined4 *)(param_1 + 0x70b4) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x70b8) = 0;
    *(undefined4 *)(param_1 + 0x70f0) = 0;
    *(undefined4 *)(param_1 + 0x70c0) = 0;
    *(undefined4 *)(param_1 + 0x70f8) = 300;
    *(undefined8 *)(param_1 + 0x70fc) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x7104) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7130) = 0;
    if (*(longlong **)(param_1 + 0x7140) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7140) + 0x98))(uVar2,0);
    }
    return;
}



void FUN_1403a0980(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    short *psVar5;
    undefined4 uVar6;
    bool bVar7;

    lVar3 = 0;
    if (*(longlong **)(param_1 + 0x6828) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x6828) + 8))();
        *(undefined8 *)(param_1 + 0x6828) = 0;
    }
    if ((DAT_140dc21c8 & 1) == 0) {
        DAT_140dc21c8 = DAT_140dc21c8 | 1;
        lVar1 = FUN_140200220(0x43c);
        if (lVar1 == 0) {
            DAT_140dc21cc = 0x19f8;
        }
        else {
            DAT_140dc21cc = *(int *)(lVar1 + 4);
        }
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (DAT_140dc21cc == 0) {
        *(undefined4 *)(param_1 + 0x6830) = 0;
        return;
    }
    if (lVar1 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar1) {
            bVar7 = true;
        }
        else {
            bVar7 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar1;
        }
        lVar1 = lVar3;
        if (bVar7) {
            lVar1 = DAT_140c65898;
        }
        if ((lVar1 != 0) && (lVar1 = FUN_1405a5b90(), lVar1 != 0)) goto LAB_1403a0a4c;
    }
    lVar1 = FUN_1407a0fd0(DAT_140c65b70);
    LAB_1403a0a4c:
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
        lVar2 = FUN_14018b280(0x60);
        if (lVar2 != 0) {
            lVar3 = FUN_140453d90(lVar2);
        }
        *(longlong *)(param_1 + 0x6828) = lVar3;
        uVar4 = FUN_1405645b0();
        *(undefined8 *)(*(longlong *)(param_1 + 0x6828) + 0x38) = uVar4;
        psVar5 = *(short **)(*(longlong *)(param_1 + 0x6828) + 0x38);
        if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
            *(wchar_t **)(*(longlong *)(param_1 + 0x6828) + 0x38) = L"UI_Temp_Quest";
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x1c) = 1;
        lVar3 = *(longlong *)(param_1 + 0x6828);
        *(int *)(lVar3 + 0x50) = DAT_140dc21cc;
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x54) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x14) = 9;
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x20) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x24) = 0xffffffff;
        uVar6 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x24);
        psVar5 = (short *)FUN_14034bdd0(lVar3,uVar6);
        if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
            uVar6 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x20);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x6830) = 0;
        return;
    }
    *(undefined4 *)(param_1 + 0x6830) = 0;
    return;
}



void FUN_1403a0b80(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;

    if ((*(longlong *)(param_1 + 0x6828) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
        if (*(int *)(param_1 + 0x6830) != 0) {
            if (*(int *)(*(longlong *)(param_1 + 0x6828) + 0x54) ==
                *(int *)(*(longlong *)(param_1 + 0x78) + 8)) {
                return;
            }
            FUN_1403a0c50(param_1);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x6828) + 0x54) =
                *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
        lVar2 = *(longlong *)(param_1 + 0x6828);
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x15f0);
        if (*(longlong *)(lVar2 + 0x28) == 0) {
            *(longlong **)(lVar2 + 0x28) = plVar4;
            plVar1 = (longlong *)(lVar2 + 0x30);
            *plVar1 = *plVar4;
            *plVar4 = lVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x28) = plVar1;
            }
        }
        lVar2 = FUN_1405bbbb0();
        if (lVar2 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x6828);
            uVar3 = FUN_1405bbbb0();
            FUN_1405bbc70(uVar3,*(undefined4 *)(lVar2 + 0x54),lVar2);
        }
        *(undefined4 *)(param_1 + 0x6830) = 1;
    }
    return;
}



void FUN_1403a0c50(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    bool bVar3;

    if (*(int *)(param_1 + 0x6830) == 0) {
        return;
    }
    lVar1 = *(longlong *)(param_1 + 0x6828);
    if (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x30);
        }
        if (*(longlong *)(lVar1 + 0x30) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        }
        bVar3 = DAT_140c65b88 == 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        if (bVar3) {
            lVar1 = FUN_14018b280(0x48);
            if (lVar1 == 0) {
                DAT_140c65b88 = 0;
                *(undefined4 *)(param_1 + 0x6830) = 0;
                return;
            }
            DAT_140c65b88 = FUN_1405b92d0(lVar1);
            if (DAT_140c65b88 == 0) goto LAB_1403a0cf2;
        }
        lVar1 = *(longlong *)(param_1 + 0x6828);
        uVar2 = FUN_1405bbbb0();
        FUN_1405bbef0(uVar2,*(undefined4 *)(lVar1 + 0x54),lVar1);
    }
    LAB_1403a0cf2:
    *(undefined4 *)(param_1 + 0x6830) = 0;
    return;
}



undefined4 FUN_1403a0d20(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x66c8);
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
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined4 *)(local_res8 + 0x24);
}



undefined8 FUN_1403a0d80(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong local_res8;

    lVar2 = DAT_140c65898;
    lVar3 = *(longlong *)(DAT_140c65898 + 0x66c8);
    local_res8 = lVar3;
    lVar1 = *(longlong *)(lVar3 + 8);
    while (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x20) < 0x2c) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (0x2c < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if (local_res8 == lVar3) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(undefined4 *)(local_res8 + 0x24);
    }
    lVar3 = FUN_1403d90d0(DAT_140c65898,uVar4);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
        (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x44) != 0)) {
        FUN_14039e400(DAT_140c65898);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"InvokeCraftingWindow",&DAT_1409e9f14,
                      *(undefined4 *)(lVar3 + 8));
        WindowHandlerFunction(lVar2,*(undefined4 *)(lVar3 + 8),0x2c);
        return 0;
    }
    return 3;
}



undefined8 FUN_1403a0e80(longlong param_1,longlong param_2)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    int *piVar5;
    longlong *plVar6;
    int iVar7;
    longlong local_res8;
    longlong local_res10;
    ulonglong uVar8;

    local_res8 = param_1;
    uVar8 = 0;
    iVar7 = 0;
    uVar2 = *(ulonglong *)(DAT_140c65898 + 0x16a0);
    if (uVar2 != 0) {
        if (uVar2 == 0) goto LAB_1403a0f51;
        do {
            iVar7 = (int)uVar8;
            lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar8 * 8);
            if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) != 0)) {
                local_res10 = *(longlong *)(DAT_140c65b90 + 0x10);
                local_res8 = local_res10;
                lVar4 = *(longlong *)(local_res10 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < *(uint *)(lVar3 + 8)) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        local_res8 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((local_res8 == local_res10) || (*(uint *)(lVar3 + 8) < *(uint *)(local_res8 + 0x20))) {
                    plVar6 = &local_res10;
                }
                else {
                    plVar6 = &local_res8;
                }
                if ((((*plVar6 != local_res10) && (piVar5 = *(int **)(*plVar6 + 0x28), piVar5 != (int *)0x0)
                     ) && (((piVar5[4] & 4U) != 0 || ((piVar5[4] & 8U) != 0)))) &&
                    ((iVar1 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x44), iVar1 == -1 ||
                                                                              (iVar1 == *piVar5)))) {
                    return 1;
                }
            }
            LAB_1403a0f51:
            uVar8 = (ulonglong)(iVar7 + 1);
        } while (uVar8 < uVar2);
    }
    return 0;
}



undefined8 FUN_1403a0f80(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    ulonglong local_res8;

    FUN_14055b0e0(DAT_140c65898,0);
    lVar3 = *(longlong *)(param_1 + 0x6490);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x250) == 0)) {
        iVar2 = FUN_14045e630(lVar3);
        if (((iVar2 == 0) &&
             (((*(int *)(lVar3 + 0xd50) != 0 && (*(int *)(lVar3 + 0x1304) != 0)) && (param_2 != 0)))) &&
            (plVar1 = *(longlong **)(param_2 + 0x16e8), plVar1 != (longlong *)0x0)) {
            iVar2 = (**(code **)(*plVar1 + 0x350))(plVar1,0xc1);
            if (iVar2 != 0) {
                iVar2 = FUN_14047bfd0();
                if (iVar2 != 0) {
                    FUN_14039e400(param_1);
                    *(undefined4 *)(param_1 + 0x7d88) = *(undefined4 *)(param_2 + 8);
                    return 0;
                }
                *(undefined4 *)(param_1 + 0x7d88) = 0;
                local_res8 = (ulonglong)*(uint *)(param_2 + 8);
                FUN_1403f4900(param_1,0x14e,&local_res8);
                return 0;
            }
        }
    }
    return 1;
}



void FUN_1403a1090(undefined8 param_1,uint param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];
    uint local_18;
    undefined8 local_14;
    undefined4 local_c;

    uVar1 = *param_3;
    uVar2 = param_3[1];
    lVar3 = *(longlong *)(DAT_140c65898 + 0x67c0);
    local_res8 = lVar3;
    lVar4 = *(longlong *)(lVar3 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < param_2) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_14 = 0;
        local_c = 0;
        local_18 = param_2;
        FUN_1403ae630(DAT_140c65898 + 0x67b8,local_res18,&local_res8,&local_18);
        local_res8 = local_res18[0];
    }
    *(undefined4 *)(local_res8 + 0x24) = uVar1;
    *(undefined4 *)(local_res8 + 0x28) = uVar2;
    *(undefined4 *)(local_res8 + 0x2c) = 0;
    return;
}



uint FUN_1403a1140(void)

{
    longlong lVar1;

    if ((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 9)) {
        return 0;
    }
    if (((*(int *)(DAT_140c65b98 + 0x10c) - 1U < 2) || (*(int *)(DAT_140c65b98 + 0x10c) == 8)) &&
        (*(int *)(DAT_140c65b98 + 0x108) != 0)) {
        lVar1 = FUN_140215240();
        if (lVar1 != 0) {
            lVar1 = FUN_140214e00(*(undefined4 *)(lVar1 + 0x10));
            if (lVar1 != 0) {
                return ~(*(uint *)(lVar1 + 0x10) >> 1) & 1;
            }
        }
    }
    return 1;
}



undefined8 FUN_1403a11c0(void)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = DAT_140c65b98;
    if (*(int *)(DAT_140c65b98 + 0x108) != 0) {
        lVar2 = FUN_140215240();
        if (lVar2 != 0) {
            lVar2 = FUN_140214e00(*(undefined4 *)(lVar2 + 0x10));
            if (lVar2 != 0) {
                if (*(int *)(lVar1 + 0x114) == 1) {
                    if ((*(byte *)(lVar2 + 0x10) & 0x40) != 0) {
                        return 0;
                    }
                }
                else if ((*(int *)(lVar1 + 0x114) == 2) && ((*(byte *)(lVar2 + 0x10) & 4) != 0)) {
                    return 0;
                }
            }
        }
    }
    return 1;
}



uint FUN_1403a1230(void)

{
    longlong lVar1;

    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x2ac) != 0)) {
        return 0;
    }
    if (*(int *)(DAT_140c65b98 + 0x108) != 0) {
        lVar1 = FUN_140215240();
        if (lVar1 != 0) {
            lVar1 = FUN_140214e00(*(undefined4 *)(lVar1 + 0x10));
            if (lVar1 != 0) {
                return ~(*(uint *)(lVar1 + 0x10) >> 4) & 1;
            }
        }
    }
    return 1;
}



void FUN_1403a12a0(longlong param_1,int param_2,longlong param_3,int param_4)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    uint *puVar5;
    int iVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined *puVar10;
    ulonglong in_stack_ffffffffffffffa0;
    ulonglong in_stack_ffffffffffffffa8;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    if ((((param_3 != 0) && (param_2 != 0)) && (param_2 != 0x13d)) &&
        (lVar3 = *(longlong *)(param_1 + 0x78), lVar3 != 0)) {
        iVar6 = FUN_1405a4d90();
        if (((iVar6 == 0) || (((*(undefined4 **)(param_3 + 0x70))[0x42] & 0x20000000) == 0)) ||
            (1 < param_2 - 0xfU)) {
            uVar8 = FUN_1403b5250();
            FUN_1400035b0();
            if ((param_4 != 0) ||
                ((1 < param_2 - 2U &&
                  (((param_2 - 0x43U & 0xfffffffd) != 0 || (iVar6 = FUN_14047bfd0(), iVar6 == 0)))))) {
                iVar6 = (*(undefined4 **)(param_3 + 0x70))[6];
                if (((iVar6 - 2U & 0xfffffffa) == 0) &&
                    ((iVar6 != 3 &&
                      (lVar9 = FUN_1403c1f50(param_1,**(undefined4 **)(param_3 + 0x70),
                                             *(undefined *)(param_1 + 0x6dec)), lVar9 != 0)))) {
                    FUN_1403bdac0(DAT_140c65898);
                    FUN_1405ca990();
                    FUN_1405ca990();
                }
                if ((*(longlong *)(param_1 + 0x6490) != 0) &&
                    (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6490) + 0x1588),
                            plVar4 != (longlong *)0x0)) {
                    uVar7 = FUN_1400518a0(DAT_140c63628,0x11,1,0,uVar8);
                    in_stack_ffffffffffffffa8 = 0;
                    in_stack_ffffffffffffffa0 = 0;
                    uVar8 = 0;
                    (**(code **)(*plVar4 + 0x10))(plVar4,uVar7,0,0,0,0,0);
                }
                uVar1 = *(uint *)(lVar3 + 8);
                uVar2 = **(uint **)(param_3 + 0x70);
                if (*(longlong *)(param_3 + 8) == 0) {
                    puVar10 = &DAT_1409e7924;
                }
                else {
                    puVar10 = (undefined *)FUN_14034bdd0();
                }
                puVar5 = *(uint **)((longlong)param_2 * 0xa0 + 8 + DAT_140c7df98);
                if (puVar5 != (uint *)0x0) {
                    uVar8 = uVar8 & 0xffffffff00000000 | (ulonglong)uVar2;
                    FUN_1405648a0((longlong)param_2 * 0xa0,local_38,param_2,uVar1,uVar8);
                    if (local_30 != local_28) {
                        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpellCastFailed","iiUUSS",
                                      puVar5[4],uVar8 & 0xffffffff00000000 | (ulonglong)*puVar5,
                                      in_stack_ffffffffffffffa0 & 0xffffffff00000000 | (ulonglong)uVar1,
                                      in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong)uVar1,local_30
                                ,puVar10);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30,0);
                    }
                }
            }
        }
        else {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpellCastWithServiceToken",
                          &DAT_1409eae6c,**(undefined4 **)(param_3 + 0x70));
        }
    }
    return;
}



void FUN_1403a1510(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined4 local_res8 [2];

    *(undefined4 *)(param_1 + 0x6cf4) = 6;
    *(undefined8 *)(param_1 + 0x6ce8) = 0;
    *(undefined4 *)(param_1 + 0x6cf0) = 0;
    *(undefined4 *)(param_1 + 0x6cf8) = 300;
    *(undefined4 *)(param_1 + 0x6cfc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6d00) = 9;
    *(undefined4 *)(param_1 + 0x6d20) = 0;
    lVar1 = *(longlong *)(param_1 + 0x6348);
    while (lVar1 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x6348);
        if (plVar2[0x20] != 0) {
            local_res8[0] = *(undefined4 *)plVar2[6];
            FUN_1400ee810(plVar2[0x20] + 0x240,local_res8);
        }
        if ((longlong *)*plVar2 != (longlong *)0x0) {
            *(longlong *)*plVar2 = plVar2[1];
        }
        if ((longlong *)plVar2[1] != (longlong *)0x0) {
            *(longlong *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[0x20] = 0;
        uVar3 = DAT_140c636a8;
        if (*(int *)((longlong)plVar2 + 0x24) != 2) {
            *(undefined4 *)((longlong)plVar2 + 0x24) = 2;
            *(undefined4 *)((longlong)plVar2 + 0x4c) = uVar3;
        }
        lVar1 = *(longlong *)(param_1 + 0x6348);
    }
    return;
}



undefined8 FUN_1403a1600(longlong param_1)

{
    int iVar1;

    if ((*(longlong *)(param_1 + 0x6ce8) != 0) &&
        ((iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x6ce8) + 0x70) + 0x7c), iVar1 == 4 ||
                                                                                          (iVar1 - 7U < 2)))) {
        return 1;
    }
    return 0;
}



undefined8 FUN_1403a1630(longlong param_1,uint param_2,int param_3)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;
    uint uVar4;
    uint *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong local_res8;
    uint local_48 [2];
    uint *local_40;
    undefined4 local_38 [2];
    uint *local_30;
    undefined *local_28;
    undefined8 local_20;

    lVar7 = *(longlong *)(param_1 + 0x6d30);
    local_res8 = lVar7;
    lVar2 = *(longlong *)(lVar7 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar7) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar7;
    }
    if (local_res8 == lVar7) {
        puVar5 = (uint *)FUN_14018b280(0x80);
        local_40 = (uint *)0x0;
        if (puVar5 != (uint *)0x0) {
            *puVar5 = 0;
            *(undefined8 *)(puVar5 + 6) = 0;
            *(undefined8 *)(puVar5 + 8) = 0;
            *(undefined8 *)(puVar5 + 0xc) = 0;
            *(undefined8 *)(puVar5 + 0xe) = 0;
            puVar5[2] = 0x544e5645;
            puVar5[0x13] = 0x18;
            *(undefined8 *)(puVar5 + 0x16) = 0;
            *(undefined8 *)(puVar5 + 0x18) = 0;
            *(undefined8 *)(puVar5 + 0x1c) = 0;
            puVar5[0x1e] = 0;
            local_40 = puVar5;
        }
        local_40[0x1c] = param_2;
        *local_40 = (uint)(param_3 != 0);
        uVar6 = FUN_14001c280(param_1);
        local_40[0x14] = 1;
        *(undefined8 *)(local_40 + 0x16) = uVar6;
        uVar4 = DAT_140dc21d0;
        *(undefined **)(local_40 + 0x18) = &DAT_1403a1840;
        *(uint **)(local_40 + 0x1a) = local_40;
        if ((uVar4 & 1) == 0) {
            DAT_140dc21d0 = uVar4 | 1;
            lVar7 = FUN_140200220(0x472);
            if (lVar7 == 0) {
                DAT_140dc21d4 = 0x96;
            }
            else {
                DAT_140dc21d4 = *(undefined4 *)(lVar7 + 4);
            }
        }
        local_38[0] = 0;
        local_28 = &LAB_1407a0180;
        local_20 = 0;
        local_30 = local_40;
        FUN_140195960(local_40 + 2,DAT_140dc21d4,local_38,4);
        local_48[0] = param_2;
        FUN_140055f80(param_1 + 0x6d28,local_38,local_48);
    }
    else {
        piVar3 = *(int **)(local_res8 + 0x28);
        iVar1 = *piVar3;
        if (param_3 == 0) {
            if (iVar1 != 0) {
                if (iVar1 == 1) {
                    *piVar3 = 2;
                }
                else if (iVar1 != 2) {
                    return 1;
                }
            }
            return 0;
        }
        if (iVar1 == 0) {
            *piVar3 = 1;
        }
        else {
            if (iVar1 == 1) {
                return 0;
            }
            if (iVar1 == 2) {
                *piVar3 = 1;
                return 0;
            }
        }
    }
    return 1;
}



longlong FUN_1403a1940(longlong param_1)

{
    FUN_140195d70(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_14018b900(param_1);
    return param_1;
}



void FUN_1403a19a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6d30) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x6d30)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_140195d70(lVar2 + 8);
                *(undefined4 *)(lVar2 + 8) = 0;
                if (*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
                }
                if (*(undefined8 **)(lVar2 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x18);
                }
                *(undefined8 *)(lVar2 + 0x18) = 0;
                *(undefined8 *)(lVar2 + 0x20) = 0;
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
        } while (lVar3 != *(longlong *)(param_1 + 0x6d30));
    }
    FUN_140008410(param_1 + 0x6d28);
    return;
}



void FUN_1403a1aa0(longlong param_1)

{
    int iVar1;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    if (*(int *)(param_1 + 0x7450) == 0) {
        iVar1 = FUN_14055a260(param_1 + 0x7330);
        if ((iVar1 == 0) &&
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xb8))(), iVar1 != 0)) {
            return;
        }
        local_38 = 4;
        local_34 = 1;
        local_30 = FUN_14001c280(param_1);
        local_20 = 0;
        local_18 = 1;
        local_28 = FUN_1403a1b40;
        FUN_14019dca0(&local_38,0,0,param_1 + 0x6ce0);
    }
    return;
}



void FUN_1403a1b40(longlong param_1)

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
    int iVar14;
    undefined4 uVar15;
    longlong *plVar16;
    longlong *plVar17;
    longlong lVar18;
    longlong lVar19;
    longlong lVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined auVar24 [16];
    undefined4 uVar28;
    longlong *local_res8;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined4 local_88;
    undefined8 local_84;
    code *local_78;
    longlong local_70;
    undefined4 local_68;
    undefined8 local_60;

    lVar19 = *(longlong *)(param_1 + 0x71a8);
    lVar20 = lVar19;
    lVar18 = lVar19;
    if (lVar19 == 0) {
        lVar20 = *(longlong *)(param_1 + 0x71a0);
        lVar18 = *(longlong *)(param_1 + 0x71a0);
    }
    fVar22 = (((float)*(int *)(param_1 + 0x7594) - (float)(ulonglong)*(uint *)(lVar18 + 0x1e0)) /
              (float)(ulonglong)*(uint *)(lVar18 + 0x1e8)) * 2.0 - 1.0;
    fVar21 = 1.0 - (((float)*(int *)(param_1 + 0x7598) - (float)(ulonglong)*(uint *)(lVar18 + 0x1e4))
                    / (float)(ulonglong)*(uint *)(lVar18 + 0x1ec)) * 2.0;
    fVar27 = fVar21 * *(float *)(lVar18 + 0x13c) + fVar22 * *(float *)(lVar18 + 300) +
             *(float *)(lVar18 + 0x14c) * 0.0 + *(float *)(lVar18 + 0x15c);
    auVar24 = divps(CONCAT412(fVar27,CONCAT48(fVar21 * *(float *)(lVar18 + 0x138) +
                                              fVar22 * *(float *)(lVar18 + 0x128) +
                                              *(float *)(lVar18 + 0x148) * 0.0 +
                                              *(float *)(lVar18 + 0x158),
                                              CONCAT44(fVar21 * *(float *)(lVar18 + 0x134) +
                                                       fVar22 * *(float *)(lVar18 + 0x124) +
                                                       *(float *)(lVar18 + 0x144) * 0.0 +
                                                       *(float *)(lVar18 + 0x154),
                                                       fVar21 * *(float *)(lVar18 + 0x130) +
                                                       fVar22 * *(float *)(lVar18 + 0x120) +
                                                       *(float *)(lVar18 + 0x140) * 0.0 +
                                                       *(float *)(lVar18 + 0x150)))),
                    CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(fVar27,fVar27))));
    fVar22 = SUB164(auVar24 >> 0x20,0);
    fVar27 = SUB164(auVar24 >> 0x40,0);
    fVar21 = SUB164(auVar24,0);
    local_98 = CONCAT412(fVar22 * *(float *)(lVar20 + 0xbc) + fVar21 * *(float *)(lVar20 + 0xac) +
                         fVar27 * *(float *)(lVar20 + 0xcc) + *(float *)(lVar20 + 0xdc),
                         CONCAT48(fVar22 * *(float *)(lVar20 + 0xb8) +
                                  fVar21 * *(float *)(lVar20 + 0xa8) +
                                  fVar27 * *(float *)(lVar20 + 200) + *(float *)(lVar20 + 0xd8),
                                  CONCAT44(fVar22 * *(float *)(lVar20 + 0xb4) +
                                           fVar21 * *(float *)(lVar20 + 0xa4) +
                                           fVar27 * *(float *)(lVar20 + 0xc4) +
                                           *(float *)(lVar20 + 0xd4),
                                           fVar22 * *(float *)(lVar20 + 0xb0) +
                                           fVar21 * *(float *)(lVar20 + 0xa0) +
                                           fVar27 * *(float *)(lVar20 + 0xc0) +
                                           *(float *)(lVar20 + 0xd0))));
    lVar18 = lVar19;
    if (lVar19 == 0) {
        lVar19 = *(longlong *)(param_1 + 0x71a0);
        lVar18 = *(longlong *)(param_1 + 0x71a0);
    }
    fVar21 = (((float)*(int *)(param_1 + 0x7594) - (float)(ulonglong)*(uint *)(lVar18 + 0x1e0)) /
              (float)(ulonglong)*(uint *)(lVar18 + 0x1e8)) * 2.0 - 1.0;
    fVar27 = 1.0 - (((float)*(int *)(param_1 + 0x7598) - (float)(ulonglong)*(uint *)(lVar18 + 0x1e4))
                    / (float)(ulonglong)*(uint *)(lVar18 + 0x1ec)) * 2.0;
    uVar28 = 0x3e800000;
    fVar22 = fVar27 * *(float *)(lVar18 + 0x13c) + fVar21 * *(float *)(lVar18 + 300) +
             *(float *)(lVar18 + 0x14c) * 0.0 + *(float *)(lVar18 + 0x15c);
    auVar24 = divps(CONCAT412(fVar22,CONCAT48(fVar27 * *(float *)(lVar18 + 0x138) +
                                              fVar21 * *(float *)(lVar18 + 0x128) +
                                              *(float *)(lVar18 + 0x148) * 0.0 +
                                              *(float *)(lVar18 + 0x158),
                                              CONCAT44(fVar27 * *(float *)(lVar18 + 0x134) +
                                                       fVar21 * *(float *)(lVar18 + 0x124) +
                                                       *(float *)(lVar18 + 0x144) * 0.0 +
                                                       *(float *)(lVar18 + 0x154),
                                                       fVar27 * *(float *)(lVar18 + 0x130) +
                                                       fVar21 * *(float *)(lVar18 + 0x120) +
                                                       *(float *)(lVar18 + 0x140) * 0.0 +
                                                       *(float *)(lVar18 + 0x150)))),
                    CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))));
    fVar25 = SUB164(auVar24 >> 0x20,0);
    fVar26 = SUB164(auVar24 >> 0x40,0);
    fVar23 = SUB164(auVar24,0);
    fVar21 = *(float *)(lVar19 + 0xb0);
    fVar22 = *(float *)(lVar19 + 0xb4);
    fVar27 = *(float *)(lVar19 + 0xb8);
    fVar1 = *(float *)(lVar19 + 0xbc);
    fVar2 = *(float *)(lVar19 + 0xa0);
    fVar3 = *(float *)(lVar19 + 0xa4);
    fVar4 = *(float *)(lVar19 + 0xa8);
    fVar5 = *(float *)(lVar19 + 0xac);
    fVar6 = *(float *)(lVar19 + 0xc0);
    fVar7 = *(float *)(lVar19 + 0xc4);
    fVar8 = *(float *)(lVar19 + 200);
    fVar9 = *(float *)(lVar19 + 0xcc);
    fVar10 = *(float *)(lVar19 + 0xd0);
    fVar11 = *(float *)(lVar19 + 0xd4);
    fVar12 = *(float *)(lVar19 + 0xd8);
    fVar13 = *(float *)(lVar19 + 0xdc);
    local_res10 = 0;
    local_res14 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x64dc) = 0;
    local_a8 = CONCAT412(fVar25 * fVar1 + fVar23 * fVar5 + fVar26 * fVar9 + fVar13,
                         CONCAT48(fVar25 * fVar27 + fVar23 * fVar4 + fVar26 * fVar8 + fVar12,
                                  CONCAT44(fVar25 * fVar22 + fVar23 * fVar3 + fVar26 * fVar7 + fVar11,
                                           fVar25 * fVar21 + fVar23 * fVar2 + fVar26 * fVar6 + fVar10)
                         ));
    do {
        if (*(int *)(param_1 + 0x64c4) != 0) {
            return;
        }
        local_res8 = (longlong *)0x0;
        local_68 = uVar28;
        if (*(int *)(param_1 + 0x64dc) == 0) {
            local_68 = 0;
        }
        local_88 = 0x1011;
        if (*(int *)(param_1 + 0x64dc) != 0) {
            local_88 = 0x1000;
        }
        local_84 = 0;
        local_78 = FUN_1403a2440;
        local_60 = 0;
        local_70 = param_1;
        iVar14 = (**(code **)(**(longlong **)(param_1 + 0x7248) + 0x1a8))
                (*(longlong **)(param_1 + 0x7248),local_98,local_a8,&local_res10,&local_res8,
                 &local_88);
        if (iVar14 != 0) {
            local_res14 = (**(code **)(*local_res8 + 0x10))();
            plVar16 = (longlong *)(**(code **)(*local_res8 + 0x20))();
            if ((plVar16 != (longlong *)0x0) ||
                (plVar16 = (longlong *)(**(code **)(*local_res8 + 0x18))(), plVar16 != (longlong *)0x0)) {
                uVar15 = (**(code **)(*plVar16 + 0x30))(plVar16);
                *(undefined4 *)(param_1 + 0x64c4) = uVar15;
                *(undefined4 *)(param_1 + 0x64d4) = *(undefined4 *)(param_1 + 0x7594);
                *(undefined4 *)(param_1 + 0x64d8) = *(undefined4 *)(param_1 + 0x7598);
                iVar14 = (**(code **)(*plVar16 + 0x18))(plVar16);
                if (iVar14 == 1) {
                    iVar14 = FUN_1403a2290(param_1,*(undefined4 *)(param_1 + 0x64c4));
                    if (iVar14 == 0) {
                        *(undefined4 *)(param_1 + 0x64c4) = 0;
                    }
                    plVar17 = (longlong *)(**(code **)(*plVar16 + 0x148))(plVar16);
                    if (plVar17 != (longlong *)0x0) {
                        uVar15 = (**(code **)(*plVar17 + 0xd8))(plVar17);
                        *(undefined4 *)(param_1 + 0x64cc) = uVar15;
                        lVar19 = *plVar17;
                        lVar18 = (**(code **)(*plVar16 + 0x140))(plVar16);
                        iVar14 = (**(code **)(lVar19 + 0x188))
                                (plVar17,6,*(uint *)(lVar18 + 4) & 0xffffff,param_1 + 0x64d0);
                        if (iVar14 == 0) {
                            uVar15 = (**(code **)(*plVar17 + 0x148))(plVar17);
                            *(undefined4 *)(param_1 + 0x64d0) = uVar15;
                        }
                    }
                }
            }
        }
        if (local_res8 != (longlong *)0x0) {
            (**(code **)(*local_res8 + 8))();
        }
        *(int *)(param_1 + 0x64dc) = *(int *)(param_1 + 0x64dc) + 1;
    } while (*(uint *)(param_1 + 0x64dc) < 2);
    return;
}



void FUN_1403a2060(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_5c;
    undefined8 local_54;
    undefined4 local_4c;
    undefined8 local_48;
    undefined4 local_40;
    undefined8 local_3c;
    undefined8 local_34;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    plVar1 = *(longlong **)(param_1 + 0x6ce0);
    if (plVar1 != (longlong *)0x0) {
        local_68 = CONCAT44(local_68._4_4_,0xffffffff);
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_68);
        if (*(longlong **)(param_1 + 0x6ce0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x6ce0) + 8))();
            *(undefined8 *)(param_1 + 0x6ce0) = 0;
        }
    }
    if (*(int *)(param_1 + 0x64c4) != *(int *)(param_1 + 0x64c8)) {
        if (*(longlong *)(param_1 + 0x7340) != 0) {
            FUN_1400ea3e0(*(longlong *)(param_1 + 0x7340),"MouseOverUnitChanged",&DAT_1409ee004,
                          *(undefined4 *)(DAT_140c65898 + 0x64c4));
        }
        FUN_1403971c0();
    }
    iVar4 = *(int *)(param_1 + 0x64e0);
    iVar3 = 0;
    iVar2 = *(int *)(param_1 + 0x64c4);
    if (((*(int *)(param_1 + 0x64c4) == 0) &&
         (iVar2 = *(int *)(param_1 + 0x6728), *(int *)(param_1 + 0x6728) == 0)) &&
        (iVar2 = iVar3, *(longlong *)(param_1 + 0x6490) != 0)) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0x108);
    }
    *(int *)(param_1 + 0x64e0) = iVar2;
    if ((((iVar4 != iVar2) && (iVar2 != 0)) && (lVar5 = FUN_1403d90d0(param_1,iVar2), lVar5 != 0)) &&
        (((*(longlong *)(lVar5 + 0x18) != 0 || (*(int *)(lVar5 + 0x80) == 0x14)) ||
          (*(int *)(lVar5 + 0x80) == 0x17)))) {
        lVar7 = *(longlong *)(param_1 + 0x78);
        if (lVar7 == 0) {
            iVar3 = 1;
        }
        else {
            iVar4 = FUN_14045bed0(lVar5,*(undefined4 *)(lVar7 + 8));
            if (iVar4 == 0) {
                iVar3 = FUN_14045a950(lVar7,*(undefined4 *)(param_1 + 0x64e0));
            }
        }
        if (iVar3 == 0) {
            local_28 = 0x4c9;
            local_1c = 0;
            local_14 = 3;
            local_c = 0;
            puVar6 = &local_28;
            local_20 = 0x3f800000;
        }
        else if (iVar3 == 1) {
            local_48 = 0x4cb;
            local_3c = 0;
            local_34 = 3;
            local_2c = 0;
            puVar6 = &local_48;
            local_40 = 0x3f800000;
        }
        else {
            if (iVar3 != 2) {
                return;
            }
            local_68 = 0x4ca;
            local_5c = 0;
            local_54 = 3;
            local_4c = 0;
            puVar6 = &local_68;
            local_60 = 0x3f800000;
        }
        (**(code **)(**(longlong **)(param_1 + 0x64e8) + 0x248))
                (*(longlong **)(param_1 + 0x64e8),0,puVar6);
    }
    return;
}



ulonglong FUN_1403a2250(undefined8 param_1,longlong param_2,longlong param_3)

{
    float fVar1;
    float fVar2;

    if ((param_2 != 0) && (param_3 != 0)) {
        fVar1 = *(float *)(param_2 + 0x11e0) - *(float *)(param_3 + 0x11e0);
        fVar2 = *(float *)(param_2 + 0x11e4) - *(float *)(param_3 + 0x11e4);
        fVar2 = fVar2 * fVar2;
        return CONCAT44(fVar2,SQRT(fVar1 * fVar1 + fVar2 + 0.0));
    }
    return (ulonglong)DAT_140c447f8;
}



undefined8 FUN_1403a2290(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;

    if (param_2 == 0) {
        return 0;
    }
    lVar2 = FUN_1403d90d0();
    if ((((lVar2 != 0) &&
          ((*(longlong *)(param_1 + 0x6490) == 0 ||
            (param_2 != *(int *)(*(longlong *)(param_1 + 0x6490) + 8))))) &&
         ((*(longlong *)(param_1 + 0x78) == 0 ||
           (param_2 != *(int *)(*(longlong *)(param_1 + 0x78) + 8))))) &&
        ((lVar3 = FUN_1405b3f90(lVar2), *(longlong *)(lVar3 + 0x16f0) != 0 ||
                                        (*(longlong *)(lVar3 + 0x16f8) != 0)))) {
        lVar3 = FUN_1405b3f90(lVar2);
        plVar4 = *(longlong **)(lVar3 + 0x16f0);
        if (plVar4 == (longlong *)0x0) {
            plVar4 = *(longlong **)(lVar3 + 0x16f8);
        }
        iVar1 = (**(code **)(*plVar4 + 0x100))();
        if (iVar1 != 0) {
            if (((*(longlong *)(lVar2 + 0x18) == 0) && (*(int *)(lVar2 + 0x80) != 0x14)) &&
                (*(int *)(lVar2 + 0x80) != 0x17)) {
                LAB_1403a23e7:
                if ((*(int *)(param_1 + 0x64dc) != 0) && (param_2 == *(int *)(param_1 + 0x64c8))) {
                    return 2;
                }
                return 1;
            }
            iVar1 = FUN_14046c6a0(lVar2);
            if (iVar1 == 0) {
                if ((DAT_140dc21d8 & 1) == 0) {
                    DAT_140dc21d8 = DAT_140dc21d8 | 1;
                    lVar3 = FUN_140200220(0x303);
                    if (lVar3 == 0) {
                        DAT_140dc21dc = 1;
                    }
                    else {
                        DAT_140dc21dc = *(int *)(lVar3 + 4);
                    }
                }
                if (((DAT_140dc21dc != 0) || (*(int *)(lVar2 + 0x54) < 2)) ||
                    ((lVar3 = *(longlong *)(param_1 + 0x78), lVar3 == 0 ||
                                                             ((iVar1 = FUN_14045bed0(lVar2,*(undefined4 *)(lVar3 + 8)), iVar1 == 0 &&
                                                                                                                        (iVar1 = FUN_14045a950(lVar3,param_2), iVar1 != 0)))))) goto LAB_1403a23e7;
            }
        }
    }
    return 0;
}



void FUN_1403a2440(longlong *param_1)

{
    undefined4 uVar1;

    uVar1 = (**(code **)(*param_1 + 0x30))();
    FUN_1403a2290(DAT_140c65898,uVar1);
    return;
}



bool FUN_1403a2460(undefined8 param_1,float param_2,int param_3,undefined8 param_4,float *param_5,
                   int param_6)

{
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;

    iVar1 = *DAT_140c63750;
    iVar2 = DAT_140c44b20;
    if (iVar1 < DAT_140c44b20) {
        iVar2 = iVar1;
    }
    fVar3 = *(float *)(&DAT_140c44b30 + (longlong)iVar2 * 4);
    iVar2 = DAT_140c44b80;
    if (iVar1 < DAT_140c44b80) {
        iVar2 = iVar1;
    }
    fVar4 = *(float *)(&DAT_140c44b90 + (longlong)iVar2 * 4);
    if (param_6 != 0) {
        iVar2 = DAT_140c44c10;
        if (iVar1 < DAT_140c44c10) {
            iVar2 = iVar1;
        }
        fVar4 = fVar4 * *(float *)(&DAT_140c44c20 + (longlong)iVar2 * 4);
        fVar3 = fVar3 * *(float *)(&DAT_140c44c20 + (longlong)iVar2 * 4);
    }
    if (param_3 == 0) {
        if (fVar4 == 0.0) {
            *param_5 = 0.0;
        }
        else {
            *param_5 = *param_5 - param_2 / fVar4;
        }
    }
    else if (fVar3 == 0.0) {
        *param_5 = 1.0;
    }
    else {
        *param_5 = param_2 / fVar3 + *param_5;
    }
    fVar3 = *param_5;
    if (1.0 <= fVar3) {
        fVar3 = 1.0;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
        fVar4 = fVar3;
    }
    *param_5 = fVar4;
    return 0.0 < fVar4;
}



void FUN_1403a2550(longlong param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;

    if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
        uStack28 = 0;
        local_18 = 0;
        local_28 = 0;
        local_20 = 0;
        FUN_1404739b0(*(longlong *)(param_1 + 0x6490),0,0,0,0,0);
        FUN_1403f4900(param_1,0x37e,&local_28);
    }
    return;
}


/*
Unable to decompile 'FUN_1403a25c0'
Cause: Exception while decompiling 1403a25c0: process: timeout

*/


undefined8 FUN_1403a6440(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 uVar4;

    if (((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x78))) &&
        (*(longlong *)(param_1 + 0x6490) != 0)) {
        uVar4 = 0;
        iVar2 = FUN_1403ad690();
        if (iVar2 != 0) {
            uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7d90);
            iVar2 = FUN_140396750(uVar1,*(undefined4 *)(param_2 + 8),param_3,param_4,uVar4);
            if (iVar2 == 0) {
                lVar3 = FUN_1403967f0(uVar1,*(undefined4 *)(param_2 + 8));
                if (((lVar3 != 0) && (*(int *)(lVar3 + 0x44) != 0)) ||
                    ((*(int *)(param_2 + 0x80) == 1 || (*(int *)(param_2 + 0x80) == 8)))) {
                    return 1;
                }
            }
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1403a64f0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    lVar1 = DAT_140c65898;
    if ((((((param_2 != 0) && (lVar3 = *(longlong *)(DAT_140c65898 + 0x78), param_2 != lVar3)) &&
           (lVar3 != 0)) && ((*(int *)(lVar3 + 0x250) == 0 && (*(int *)(param_2 + 0x80) == 0x12)))) &&
         ((lVar3 = FUN_1403967f0(*(undefined8 *)(DAT_140c65898 + 0x7d90),*(undefined4 *)(param_2 + 8)),
                 lVar3 != 0 &&
                 ((*(longlong *)(lVar3 + 0x30) == 0 || ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 8) & 1) == 0)
                 ))))) && ((*(int *)(lVar3 + 0x48) == 0 && (*(int *)(lVar3 + 0x4c) != 0)))) {
        if ((*(int *)(lVar3 + 0xc) != 2) && (iVar2 = FUN_14039d230(lVar1,param_2), iVar2 == 0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1403a6590(undefined8 param_1,uint param_2,longlong param_3)

{
    undefined4 uVar1;
    int *piVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    float fVar6;
    float fVar7;
    uint local_res10 [6];

    if (*(longlong *)(param_3 + 0x6490) == 0) {
        return 0;
    }
    if (*(longlong *)(param_3 + 0x78) == 0) {
        return 0;
    }
    piVar2 = *(int **)(param_3 + 0x6718);
    local_res10[0] = param_2;
    if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        if (iVar3 == *(int *)(*(longlong *)(param_3 + 0x78) + 8)) {
            iVar3 = piVar2[2];
        }
        uVar4 = FUN_1403d90d0(param_3,iVar3);
        iVar3 = FUN_1403ada10(*(undefined8 *)(param_3 + 0x78),uVar4);
        if (iVar3 != 0) {
            local_res10[0] = local_res10[0] & 0xffffff00;
            FUN_1403f4900(param_3,399,local_res10);
        }
    }
    if (((((*(byte *)(*(longlong *)(param_3 + 0x6490) + 0x1070) & 2) != 0) &&
          (FUN_14045bf30(*(longlong *)(param_3 + 0x6490),0,0), *(int *)(param_3 + 0x7ed4) != 0)) &&
         (lVar5 = FUN_14024b980(), lVar5 != 0)) &&
        (fVar6 = *(float *)(lVar5 + 0xc) - *(float *)(*(longlong *)(param_3 + 0x6490) + 0x11e0),
                fVar7 = *(float *)(lVar5 + 0x10) - *(float *)(*(longlong *)(param_3 + 0x6490) + 0x11e4),
                fVar6 * fVar6 + fVar7 * fVar7 + 0.0 <= *(float *)(lVar5 + 4) * *(float *)(lVar5 + 4))) {
        uVar1 = *(undefined4 *)(param_3 + 0x7ed0);
        *(undefined8 *)(param_3 + 0x7ed0) = 0;
        FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"CityDirectionClear",&DAT_1409ee954,uVar1);
    }
    if ((*(int *)(param_3 + 0x78d8) != 0) &&
        ((((*(longlong *)(param_3 + 0x78) != 0 && (*(longlong *)(param_3 + 0x6490) != 0)) &&
           (iVar3 = FUN_14045e630(), iVar3 != 0)) ||
          (*(int *)(*(longlong *)(param_3 + 0x6490) + 0xd50) == 0)))) {
        *(undefined4 *)(param_3 + 0x78d8) = 0;
    }
    if (((*(longlong *)(param_3 + 0x78) != 0) &&
         (lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_3 + 0x78) + 0xc0)),
                 lVar5 != 0)) && (*(int *)(lVar5 + 0x80) == 7)) {
        lVar5 = FUN_14039e000(param_3);
        if (lVar5 != 0) {
            if ((*(uint *)(lVar5 + 0x60) & 0x400) == 0) {
                return 0;
            }
            iVar3 = FUN_1403c95e0(param_3,*(undefined4 *)(lVar5 + 4));
            if (iVar3 != 0) {
                return 0;
            }
        }
        FUN_14039e400(param_3);
    }
    return 0;
}



void FUN_1403a6770(undefined8 param_1,int param_2)

{
    undefined8 uVar1;

    switch(param_2) {
        case 0x1b:
            uVar1 = 0x8045f;
            break;
        default:
            uVar1 = 4000;
            break;
        case 0x1f:
            uVar1 = 0xfa5;
            break;
        case 0x23:
            uVar1 = 0x8db4f;
            break;
        case 0x27:
            uVar1 = 0xfa1;
            break;
        case 0x28:
            uVar1 = 0xfa2;
            break;
        case 0x2a:
            uVar1 = 0xfa3;
            break;
        case 0x3f:
            uVar1 = 0x1f7c3;
            break;
        case 0x48:
            uVar1 = 0x2dec6;
            break;
        case 0x84:
            uVar1 = 0x8fbca;
            break;
        case 0x9c:
            uVar1 = 0xb2a5f;
    }
    uVar1 = FUN_14034bdd0(IMAGE_DOS_HEADER_140000000.e_magic +
                          (&switchD_1403a679d::switchdataD_1403a6820)
                          [(&switchD_1403a679d::switchdataD_1403a6850)[param_2 + -0x1b]],uVar1);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericError",&DAT_1409eef4c,param_2,uVar1)
            ;
    return;
}



undefined8 FUN_1403a68e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    lVar1 = *(longlong *)(param_1 + 0x6718);
    if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x18) != (longlong *)0x0)) {
        uVar3 = 0;
        if (*(ulonglong *)(lVar1 + 0x20) != 0) {
            plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10);
            do {
                if (*plVar2 == param_2) {
                    return 1;
                }
                uVar3 = uVar3 + 1;
                plVar2 = plVar2 + 10;
            } while (uVar3 < *(ulonglong *)(lVar1 + 0x20));
        }
    }
    return 0;
}



bool FUN_1403a6930(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1c00);
    iVar4 = 0;
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0xe) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) < 0xf)) &&
        ((*(int *)(lVar3 + 0x20) < 0xe || (*(int *)(lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        iVar4 = *(int *)(local_res8 + 0x34);
    }
    return iVar4 != 0;
}



bool FUN_1403a69b0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x1c00);
    iVar4 = 0;
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0xc) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) < 0xd)) &&
        ((*(int *)(lVar3 + 0x20) < 0xc || (*(int *)(lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        iVar4 = *(int *)(local_res8 + 0x34);
    }
    return iVar4 != 0;
}



undefined8 FUN_1403a6a40(ulonglong param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong local_res8;

    lVar1 = DAT_140c65898;
    local_res8 = param_1;
    lVar3 = FUN_1403d90d0(DAT_140c65898);
    if ((lVar3 == 0) || (*(int *)(lVar3 + 0x80) != 0x14)) {
        uVar4 = 3;
    }
    else {
        iVar2 = FUN_1403a6930(lVar1);
        if (iVar2 == 0) {
            return 0x13;
        }
        uVar4 = FUN_1403ad990(*(undefined8 *)(lVar1 + 0x78));
        if ((int)uVar4 == 0) {
            puVar5 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = 0;
                puVar5[1] = 0;
                *(undefined4 *)(puVar5 + 2) = 0;
                puVar5[4] = 0;
                puVar5[3] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                *(undefined4 *)(puVar5 + 7) = 0;
            }
            *(undefined8 **)(lVar1 + 0x6718) = puVar5;
            iVar2 = *(int *)(*(longlong *)(lVar1 + 0x78) + 8);
            if ((iVar2 != 0) && (param_2 != 0)) {
                *(int *)puVar5 = iVar2;
                *(uint *)(puVar5 + 1) = param_2;
                FUN_1405598d0(lVar1 + 0x70b0);
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)param_2;
                FUN_1403f4900(lVar1,0x192,&local_res8);
                return 0;
            }
            return 1;
        }
    }
    return uVar4;
}



undefined8 FUN_1403a6b50(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 local_res18;

    plVar3 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0);
    if (plVar3 == (longlong *)0x0) {
        return 0x80004005;
    }
    iVar2 = **(int **)(param_1 + 0x6718);
    if (iVar2 == *(int *)(*(longlong *)(param_1 + 0x78) + 8)) {
        iVar2 = (*(int **)(param_1 + 0x6718))[2];
    }
    lVar4 = FUN_1403d90d0(param_1,iVar2);
    if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
        uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
        iVar2 = FUN_1403adc30(*(undefined8 *)(param_1 + 0x6718),uVar1,uVar5,plVar3,lVar4 + 0x1a0);
        if (iVar2 == 0) {
            local_res18 = 0;
            local_res18 = (**(code **)(*plVar3 + 0x30))(plVar3);
            FUN_1403f4900(param_1,0x18d,&local_res18);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1403a6c50(undefined8 param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int *piVar3;
    undefined8 local_res8 [4];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6718);
    if (lVar1 != 0) {
        uVar2 = 0;
        if (*(ulonglong *)(lVar1 + 0x20) != 0) {
            piVar3 = *(int **)(lVar1 + 0x18);
            do {
                if (*piVar3 == param_2) {
                    if (piVar3 == (int *)0x0) {
                        return 0x80004005;
                    }
                    if (piVar3[1] != *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8)) {
                        return 0x80004005;
                    }
                    local_res8[0] = *(undefined8 *)(piVar3 + 4);
                    FUN_1403f4900(DAT_140c65898,0x194,local_res8);
                    return 0;
                }
                uVar2 = uVar2 + 1;
                piVar3 = piVar3 + 0x14;
            } while (uVar2 < *(ulonglong *)(lVar1 + 0x20));
        }
    }
    return 0x80004005;
}



undefined8 FUN_1403a6ce0(ulonglong param_1,ulonglong param_2)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined8 uVar7;
    int iVar8;
    int iVar9;
    ulonglong local_res8;

    lVar3 = DAT_140c65898;
    piVar2 = *(int **)(DAT_140c65898 + 0x6718);
    if (piVar2 == (int *)0x0) {
        return 0x80004005;
    }
    iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
    iVar9 = 0;
    if (iVar1 == *piVar2) {
        uVar5 = *(ulonglong *)(piVar2 + 10);
    }
    else if (iVar1 == piVar2[2]) {
        uVar5 = *(ulonglong *)(piVar2 + 0xc);
    }
    else {
        uVar5 = 0;
    }
    param_2 = param_2 & 0xffffffff;
    if (param_2 == uVar5) {
        LAB_1403a6ddf:
        uVar7 = 0;
    }
    else {
        if (param_2 < *(ulonglong *)(DAT_140c65898 + 0x15f8) ||
            param_2 == *(ulonglong *)(DAT_140c65898 + 0x15f8)) {
            local_res8 = param_1;
            iVar4 = FUN_1403b5040(DAT_140c65898);
            if ((iVar4 == 0) ||
                (param_2 < *(ulonglong *)(lVar3 + 0x1670) || param_2 == *(ulonglong *)(lVar3 + 0x1670))) {
                iVar4 = 0;
                if (iVar1 == *piVar2) {
                    iVar8 = piVar2[2];
                }
                else {
                    iVar8 = 0;
                    if (iVar1 == piVar2[2]) {
                        iVar8 = *piVar2;
                    }
                }
                lVar6 = FUN_1403d90d0(lVar3,iVar8);
                if (lVar6 != 0) {
                    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x80);
                    if ((iVar1 == 0x14) || (iVar1 == 0x17)) {
                        iVar4 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x1a0);
                    }
                    if ((*(int *)(lVar6 + 0x80) == 0x14) || (*(int *)(lVar6 + 0x80) == 0x17)) {
                        iVar9 = *(int *)(lVar6 + 0x1a0);
                    }
                    if (iVar4 == iVar9) {
                        local_res8 = param_2;
                        FUN_1403f4900(lVar3,0x197,&local_res8);
                        goto LAB_1403a6ddf;
                    }
                }
            }
        }
        uVar7 = 0x80004005;
    }
    return uVar7;
}



undefined8 FUN_1403a6e00(ulonglong param_1)

{
    longlong lVar1;
    ulonglong local_res8 [4];

    lVar1 = DAT_140c65898;
    if (*(longlong *)(DAT_140c65898 + 0x6718) == 0) {
        return 0x80004005;
    }
    local_res8[0] = param_1 & 0xffffffffffffff00;
    FUN_1403f4900(DAT_140c65898,400,local_res8);
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"P2PTradeCommit","");
    return 0;
}



undefined8 FUN_1403a6f10(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    lVar1 = *(longlong *)(param_1 + 0x6718);
    if (lVar1 != 0) {
        if ((*(int *)(lVar1 + 0x10) != 0) &&
            ((*(int *)(lVar1 + 4) == 0 || (*(int *)(lVar1 + 0xc) == 0)))) {
            uVar3 = 0;
            if (*(ulonglong *)(lVar1 + 0x20) != 0) {
                plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10);
                do {
                    if (*plVar2 == *param_2) {
                        *(undefined4 *)(lVar1 + 4) = 0;
                        *(undefined4 *)(lVar1 + 0xc) = 0;
                        FUN_14079ad50(lVar1 + 0x18);
                        break;
                    }
                    uVar3 = uVar3 + 1;
                    plVar2 = plVar2 + 10;
                } while (uVar3 < *(ulonglong *)(lVar1 + 0x20));
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"P2PTradeChange",&DAT_1409d1277);
    }
    return 0;
}



undefined8 FUN_1403a6fa0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    int iVar6;
    undefined2 *puVar7;
    ulonglong in_stack_ffffffffffffffe0;

    switch(*param_2) {
        case 0:
        case 1:
        case 2:
        case 4:
        case 5:
        case 10:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
            goto LAB_1403a70eb;
        case 3:
            if (*(longlong *)(param_1 + 0x6718) == 0) {
                return 0;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x6718) + 0x10) = 1;
            break;
        case 6:
            if (*(longlong *)(param_1 + 0x6718) == 0) {
                return 0;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x6718) + 4) = 1;
            break;
        case 7:
            if (*(longlong *)(param_1 + 0x6718) == 0) {
                return 0;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x6718) + 4) = 0;
            break;
        case 8:
            if (*(longlong *)(param_1 + 0x6718) == 0) {
                return 0;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x6718) + 0xc) = 1;
            break;
        case 9:
            if (*(longlong *)(param_1 + 0x6718) == 0) {
                return 0;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x6718) + 0xc) = 0;
            break;
        case 0xb:
            piVar2 = *(int **)(param_1 + 0x6718);
            if (piVar2 != (int *)0x0) {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 8);
                if (iVar1 == *piVar2) {
                    iVar6 = piVar2[2];
                }
                else {
                    iVar6 = 0;
                    if (iVar1 == piVar2[2]) {
                        iVar6 = *piVar2;
                    }
                }
                lVar4 = FUN_1403d90d0(param_1,iVar6);
                if (lVar4 != 0) {
                    puVar7 = &DAT_140b7b704;
                    if (*(undefined2 **)(lVar4 + 0x10) != (undefined2 *)0x0) {
                        puVar7 = *(undefined2 **)(lVar4 + 0x10);
                    }
                    FUN_1405e2530(DAT_140c65898 + 0x6838,lVar4 + 0x1a0,puVar7,*(undefined4 *)(lVar4 + 0x38),
                                  *(undefined4 *)(lVar4 + 0xdc),
                                  in_stack_ffffffffffffffe0 & 0xffffffff00000000 |
                                  (ulonglong)*(uint *)(lVar4 + 0x3700),*(undefined4 *)(lVar4 + 0x38));
                }
            }
        LAB_1403a70eb:
            uVar5 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"P2PTradeResult",&DAT_1409ee9d4,*param_2);
    if (param_2[1] != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"P2PCancelTrade",&DAT_1409ee9e4,*param_2);
        lVar4 = *(longlong *)(param_1 + 0x6718);
        if (lVar4 != 0) {
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(lVar4,0);
        }
        *(undefined8 *)(param_1 + 0x6718) = 0;
    }
    return 0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1403a7c50(void)

{
    undefined *puVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined *puVar8;
    uint uVar9;
    undefined *puVar10;
    longlong lVar11;
    uint *puVar12;
    longlong lVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    float fVar18;
    undefined4 uVar19;
    undefined local_78 [8];
    undefined *local_70;
    longlong local_68;

    lVar2 = DAT_140c65898;
    if ((*(int *)(DAT_140c65898 + 0x558) == 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        return (ulonglong)*(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xd4c);
    }
    local_70 = (undefined *)FUN_14018b280(0x28);
    lVar11 = 0xc;
    local_68 = 0;
    *local_70 = 0;
    lVar13 = 0xc;
    *(undefined8 *)(local_70 + 8) = 0;
    *(undefined **)(local_70 + 0x10) = local_70;
    *(undefined **)(local_70 + 0x18) = local_70;
    do {
        FUN_1403addd0();
        lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar16 = 0.0;
    uVar17 = 0;
    puVar12 = &DAT_140af5268;
    fVar18 = 0.0;
    uVar19 = 0;
    fVar15 = 0.0;
    do {
        iVar4 = 0;
        if ((*puVar12 < *(uint *)(lVar2 + 0xa4)) &&
            (lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)*puVar12 * 8), lVar13 != 0))
        {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6559c != 0) || (iVar3 = FUN_14020e540(), iVar3 < 0)) goto LAB_1403a7e06;
                lVar5 = (**(code **)(*DAT_140c648e8 + 0x18))();
            }
            else {
                lVar5 = (*DAT_140c63840)();
            }
            if (lVar5 != 0) {
                FUN_1403aded0();
                lVar6 = *(longlong *)(lVar13 + 0x48);
                fVar14 = *(float *)(lVar5 + 0x18) * *(float *)(lVar5 + 0x14);
                fVar15 = fVar15 + fVar14;
                if (lVar6 == 0) {
                    lVar6 = *(longlong *)(lVar13 + 0x40) + 8;
                }
                fVar18 = fVar18 + (float)(ulonglong)*(uint *)(lVar6 + 0xc) * fVar14;
            }
        }
        LAB_1403a7e06:
        puVar12 = puVar12 + 1;
        lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar10 = *(undefined **)(local_70 + 0x10);
    puVar8 = local_70;
    if (puVar10 != local_70) {
        do {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6559c == 0) && (iVar3 = FUN_14020e540(), puVar8 = local_70, -1 < iVar3)) {
                    lVar11 = (**(code **)(*DAT_140c648e8 + 0x18))();
                    goto LAB_1403a7e84;
                }
            }
            else {
                lVar11 = (*DAT_140c63840)();
                LAB_1403a7e84:
                puVar8 = local_70;
                if (lVar11 != 0) {
                    uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x78) + 0x3c);
                    if (uVar9 == 0) {
                        uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x78) + 0x38);
                    }
                    if (*(uint *)(lVar11 + 0x24) < uVar9 || *(uint *)(lVar11 + 0x24) == uVar9) {
                        fVar15 = fVar15 + *(float *)(lVar11 + 0x18) * *(float *)(lVar11 + 0x14);
                    }
                }
            }
            puVar7 = *(undefined **)(puVar10 + 0x18);
            if (puVar7 == (undefined *)0x0) {
                puVar7 = *(undefined **)(puVar10 + 8);
                if (puVar10 == *(undefined **)(puVar7 + 0x18)) {
                    do {
                        puVar10 = puVar7;
                        puVar7 = *(undefined **)(puVar10 + 8);
                    } while (puVar10 == *(undefined **)(puVar7 + 0x18));
                }
                if (*(undefined **)(puVar10 + 0x18) != puVar7) {
                    puVar10 = puVar7;
                }
            }
            else {
                for (puVar1 = *(undefined **)(puVar7 + 0x10); puVar10 = puVar7, puVar1 != (undefined *)0x0;
                     puVar1 = *(undefined **)(puVar1 + 0x10)) {
                    puVar7 = puVar1;
                }
            }
        } while (puVar10 != puVar8);
    }
    if ((int)fVar15 < 0) {
        iVar4 = -0x80000000;
    }
    uVar9 = iVar4 - (int)fVar15 >> 0x1f;
    if (0x54 < (int)((iVar4 - (int)fVar15 ^ uVar9) - uVar9)) {
        fVar16 = fVar18 / fVar15;
        uVar17 = uVar19;
    }
    if (*(longlong *)(lVar2 + 0x78) != 0) {
        *(float *)(*(longlong *)(lVar2 + 0x78) + 0xd4c) = fVar16;
        *(undefined4 *)(lVar2 + 0x558) = 0;
        puVar8 = local_70;
    }
    if (local_68 != 0) {
        lVar2 = *(longlong *)(puVar8 + 8);
        puVar10 = puVar8;
        puVar8 = local_70;
        while (local_70 = puVar8, lVar2 != 0) {
            FUN_1400083b0(local_78,*(undefined8 *)(lVar2 + 0x18));
            lVar11 = *(longlong *)(lVar2 + 0x10);
            FUN_14018b900(lVar2,0);
            lVar2 = lVar11;
            puVar10 = local_70;
            puVar8 = local_70;
        }
        *(undefined **)(puVar10 + 0x10) = puVar10;
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined **)(puVar8 + 0x18) = puVar8;
        local_68 = 0;
    }
    FUN_14018b900(puVar8,0);
    return CONCAT44(uVar17,fVar16);
}



undefined4 FUN_1403a8000(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x6fa8) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(DAT_140c65898 + 0x6fa8)) {
            return 0;
        }
        if (**(int **)(lVar2 + 0x28) == param_2) break;
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



void FUN_1403a8080(void)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined8 in_R9;
    longlong lVar10;
    ulonglong uVar11;
    longlong lVar12;
    undefined4 in_XMM6_Da;
    undefined4 uVar13;
    undefined4 in_XMM6_Db;
    undefined4 uVar14;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 uVar15;
    undefined4 in_XMM7_Db;
    undefined4 uVar16;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar17 [16];
    undefined auVar18 [16];

    lVar1 = DAT_140c65898;
    uVar11 = 0;
    lVar12 = 4;
    auVar18 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar17 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    puVar8 = (undefined4 *)(DAT_140c65898 + 0x6378);
    lVar10 = 4;
    uVar4 = uVar11;
    uVar7 = uVar11;
    do {
        uVar3 = FUN_14018db00(uVar4,uVar7 + 1,4,in_R9,auVar17,auVar18);
        *(undefined4 *)(uVar7 * 4 + uVar3) = *puVar8;
        uVar5 = uVar4;
        if ((uVar4 != uVar3) && (FUN_1407db590(uVar3,uVar4), uVar5 = uVar3, uVar4 != 0)) {
            (**(code **)(*(longlong *)(uVar4 - 0x10) + 8))(uVar4 - 0x10);
        }
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
        lVar10 = lVar10 + -1;
        uVar4 = uVar5;
    } while (lVar10 != 0);
    uVar13 = 0;
    uVar14 = 0x3df00000;
    uVar15 = 0;
    uVar16 = 0x3ff00000;
    uVar6 = 3;
    do {
        uVar2 = (**(code **)(DAT_140c77890 + 0x18))();
        uVar4 = (ulonglong)
                ((double)(ulonglong)uVar2 * (double)CONCAT44(uVar14,uVar13) *
                 ((double)(ulonglong)uVar6 + (double)CONCAT44(uVar16,uVar15)));
        uVar2 = (uint)uVar4;
        uVar4 = uVar4 & 0xffffffff;
        *(undefined4 *)(lVar1 + 0x6378 + uVar11 * 4) = *(undefined4 *)(uVar5 + uVar4 * 4);
        if (uVar2 < uVar6) {
            puVar8 = (undefined4 *)(uVar5 + (ulonglong)(uVar2 + 1) * 4);
            puVar9 = (undefined4 *)(uVar5 + uVar4 * 4);
            for (uVar7 = (ulonglong)(uVar6 - uVar2); uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
            }
        }
        uVar6 = uVar6 - 1;
        lVar12 = lVar12 + -1;
        uVar11 = (ulonglong)((int)uVar11 + 1);
    } while (lVar12 != 0);
    if (uVar5 != 0) {
        (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
    }
    return;
}



void FUN_1403a81e0(undefined8 param_1,ulonglong param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    uint uVar5;
    float fVar6;
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    undefined8 local_10;

    uVar3 = DAT_140dc2218;
    lVar1 = DAT_140c65898;
    param_2 = param_2 & 0xffffffff;
    if (*(int *)(DAT_140c65898 + 0x6388) != 0) {
        *(int *)(DAT_140c65898 + 0x638c) = (int)param_2;
        if ((uVar3 & 1) == 0) {
            DAT_140dc2218 = uVar3 | 1;
            lVar4 = FUN_140200220(0x454);
            uVar3 = DAT_140dc2218;
            if (lVar4 == 0) {
                DAT_140dc221c = 100;
            }
            else {
                DAT_140dc221c = *(uint *)(lVar4 + 4);
            }
        }
        if ((uVar3 & 2) == 0) {
            DAT_140dc2218 = uVar3 | 2;
            lVar4 = FUN_140200220(0x454);
            if (lVar4 == 0) {
                DAT_140dc2220 = 0.8;
            }
            else {
                DAT_140dc2220 = *(float *)(lVar4 + 0x18);
            }
        }
        uVar2 = DAT_140dc221c;
        fVar6 = 1.0 - DAT_140dc2220;
        *(int *)(lVar1 + 0x6390) = (int)(param_2 / DAT_140dc221c);
        uVar5 = (int)param_2 - (int)(longlong)(fVar6 * (float)param_2);
        uVar3 = uVar5 / uVar2;
        local_28[0] = 0;
        *(uint *)(lVar1 + 0x6394) = uVar3;
        *(uint *)(lVar1 + 0x63a0) = uVar3;
        local_20 = FUN_14001c280(lVar1,(ulonglong)uVar5 % (ulonglong)uVar2);
        local_10 = 0;
        local_18 = FUN_1403a84d0;
        FUN_140195960(lVar1 + 0x63b0,uVar2,local_28,4);
        *(undefined4 *)(lVar1 + 0x63a8) = DAT_140c636a8;
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ActivateCCStateStun",&DAT_1409e9cc4,
                      *(undefined4 *)(lVar1 + 0x6388));
    }
    return;
}



undefined8 FUN_1403a8420(void)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;

    lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x2d8) != 0)) &&
        (lVar5 = **(longlong **)(lVar3 + 0x2d0), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x1c);
        iVar2 = *(int *)(lVar5 + 0x18);
        for (lVar5 = *(longlong *)(lVar3 + 0x15d0); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar5 + 0x50) + 0x5c) == iVar2)) &&
                ((iVar1 == 0 || (*(int *)(lVar5 + 100) == iVar1)))) goto LAB_1403a84b4;
        }
        for (lVar5 = *(longlong *)(lVar3 + 0x15d8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
            if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar5 + 0x50) + 0x5c) == iVar2)) &&
                ((iVar1 == 0 || (*(int *)(lVar5 + 100) == iVar1)))) {
                LAB_1403a84b4:
                if (lVar5 == 0) {
                    return 0;
                }
                if (*(longlong *)(lVar5 + 0xd0) == 0) {
                    return 0;
                }
                uVar4 = FUN_140195f70(lVar5 + 0xc0);
                return uVar4;
            }
        }
    }
    return 0;
}



void FUN_1403a84d0(longlong param_1)

{
    byte bVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    undefined8 uVar6;
    bool bVar7;
    undefined2 local_res8 [4];
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    undefined8 local_10;

    if (*(int *)(param_1 + 0x6388) == 0) {
        return;
    }
    if (*(uint *)(param_1 + 0x63a0) <= *(uint *)(param_1 + 0x639c)) {
        return;
    }
    *(undefined *)(param_1 + 0x63a6) = *(undefined *)(param_1 + 0x63a5);
    *(undefined *)(param_1 + 0x63a5) = 0;
    if (*(int *)(param_1 + 0x75f4) != 0) {
        *(undefined *)(param_1 + 0x63a5) = 1;
    }
    if (*(int *)(param_1 + 0x75f8) != 0) {
        *(byte *)(param_1 + 0x63a5) = *(byte *)(param_1 + 0x63a5) | 2;
    }
    if (*(int *)(param_1 + 0x75fc) != 0) {
        *(byte *)(param_1 + 0x63a5) = *(byte *)(param_1 + 0x63a5) | 4;
    }
    if (*(int *)(param_1 + 0x7600) != 0) {
        *(byte *)(param_1 + 0x63a5) = *(byte *)(param_1 + 0x63a5) | 8;
    }
    if ((DAT_140dc2224 & 1) == 0) {
        DAT_140dc2224 = DAT_140dc2224 | 1;
        lVar4 = FUN_140200220();
        if (lVar4 == 0) {
            DAT_140dc2228 = 100;
        }
        else {
            DAT_140dc2228 = *(int *)(lVar4 + 4);
        }
    }
    uVar2 = *(uint *)(param_1 + 0x6388);
    bVar1 = *(byte *)(param_1 + 0x63a5);
    bVar7 = (uVar2 & *(byte *)(param_1 + 0x63a4)) == 0;
    if ((((uint)*(byte *)(param_1 + 0x63a4) & ~uVar2) == 0) && (((uint)bVar1 & ~uVar2) == 0)) {
        if (bVar1 == 0) {
            if (bVar7) goto LAB_1403a85ca;
        }
        else if ((bVar7) && ((uVar2 & bVar1) == 0)) goto LAB_1403a8645;
        *(int *)(param_1 + 0x639c) = *(int *)(param_1 + 0x639c) + 1;
        uVar6 = 1;
    }
    else {
        LAB_1403a85ca:
        *(int *)(param_1 + 0x6398) = *(int *)(param_1 + 0x6398) + 1;
        uVar2 = *(uint *)(param_1 + 0x6390);
        if (uVar2 <= *(uint *)(param_1 + 0x6398)) {
            return;
        }
        iVar3 = (int)(longlong)
                ((float)(ulonglong)*(uint *)(param_1 + 0x6394) /
                 ((float)(ulonglong)uVar2 / (float)(ulonglong)(uVar2 - *(uint *)(param_1 + 0x6398)))
                );
        *(int *)(param_1 + 0x63a0) = iVar3;
        if (iVar3 == 0) {
            return;
        }
        uVar6 = 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"StunVGPressed",&DAT_1409e9c8c,uVar6);
    LAB_1403a8645:
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"UpdateCCStateStun",&DAT_1409e9c9c,
                  (double)((float)(ulonglong)*(uint *)(param_1 + 0x639c) /
                           (float)(ulonglong)*(uint *)(param_1 + 0x63a0)));
    if ((*(char *)(param_1 + 0x63a6) != *(char *)(param_1 + 0x63a5)) ||
        (*(char *)(param_1 + 0x63a4) != '\0')) {
        local_res8[0] = CONCAT11(*(char *)(param_1 + 0x63a5),*(undefined *)(param_1 + 0x63a4));
        FUN_1403f4900(param_1,0xc3,local_res8);
    }
    *(undefined *)(param_1 + 0x63a4) = 0;
    if (*(uint *)(param_1 + 0x639c) < *(uint *)(param_1 + 0x63a0)) {
        local_28[0] = 0;
        iVar5 = DAT_140dc2228 * 2 - DAT_140c636a8;
        iVar3 = *(int *)(param_1 + 0x63a8);
        local_20 = FUN_14001c280(param_1);
        local_10 = 0;
        local_18 = FUN_1403a84d0;
        FUN_140195960(param_1 + 0x63b0,iVar5 + iVar3,local_28,4);
        *(int *)(param_1 + 0x63a8) = DAT_140c636a8;
    }
    return;
}



void FUN_1403a8770(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x7e90) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x7e90)) {
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
        } while (lVar3 != *(longlong *)(param_1 + 0x7e90));
    }
    FUN_140008410(param_1 + 0x7e88);
    return;
}



int * FUN_1403a8810(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    longlong local_res8;
    undefined8 local_28;
    int *local_20;
    undefined local_18 [16];

    local_res8 = *(longlong *)(param_1 + 0x7e90);
    lVar2 = local_res8;
    lVar1 = *(longlong *)(local_res8 + 8);
    while (lVar1 != 0) {
        if ((*(int *)(lVar1 + 0x20) < param_2) ||
            ((*(int *)(lVar1 + 0x20) <= param_2 && (*(uint *)(lVar1 + 0x24) < param_3)))) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            lVar2 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if (((lVar2 != local_res8) && (*(int *)(lVar2 + 0x20) <= param_2)) &&
        ((*(int *)(lVar2 + 0x20) < param_2 || (*(uint *)(lVar2 + 0x24) <= param_3)))) {
        local_res8 = lVar2;
    }
    if (local_res8 != *(longlong *)(param_1 + 0x7e90)) {
        return *(int **)(local_res8 + 0x28);
    }
    piVar3 = (int *)FUN_14018b280(0x50);
    if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
    }
    else {
        FUN_1407e4830(piVar3,0,0x50);
    }
    local_res8 = CONCAT44(param_3,param_2);
    local_28 = local_res8;
    *piVar3 = param_2;
    piVar3[1] = param_3;
    local_20 = piVar3;
    FUN_1403ae510(param_1 + 0x7e88,local_18,&local_28);
    return piVar3;
}



undefined8 FUN_1403a8920(longlong param_1,byte *param_2)

{
    int *piVar1;
    uint uVar2;
    uint *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined4 *puVar11;
    ulonglong uVar12;
    undefined4 *puVar13;
    short *psVar14;
    uint uVar15;
    uint uVar16;
    byte *local_res8;
    longlong local_res20;
    longlong local_b8;
    uint local_b0 [2];
    undefined8 local_a8;
    undefined8 local_a0;
    longlong local_98;
    undefined4 *local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    longlong local_60 [4];

    FUN_140008410(param_1 + 0x7ea8);
    uVar15 = 0;
    local_res8 = param_2;
    do {
        uVar16 = 0;
        do {
            uVar12 = 0;
            if ((*local_res8 & (byte)(1 << (7U - (char)uVar16 & 0x1f))) != 0) {
                lVar9 = *(longlong *)(DAT_140c65a18 + 0x10);
                lVar6 = lVar9;
                lVar8 = *(longlong *)(lVar9 + 8);
                while (lVar8 != 0) {
                    if (*(uint *)(lVar8 + 0x20) < uVar15 + uVar16) {
                        lVar8 = *(longlong *)(lVar8 + 0x18);
                    }
                    else {
                        lVar6 = lVar8;
                        lVar8 = *(longlong *)(lVar8 + 0x10);
                    }
                }
                if ((lVar6 == lVar9) || (uVar15 + uVar16 < *(uint *)(lVar6 + 0x20))) {
                    local_78 = lVar9;
                    plVar10 = &local_78;
                }
                else {
                    plVar10 = &local_res20;
                    local_res20 = lVar6;
                }
                if ((*plVar10 != *(longlong *)(DAT_140c65a18 + 0x10)) &&
                    (puVar3 = *(uint **)(*plVar10 + 0x28), puVar3 != (uint *)0x0)) {
                    uVar2 = puVar3[3];
                    lVar9 = param_1 + 0x7e68;
                    LAB_1403a8a10:
                    lVar8 = *(longlong *)(param_1 + 0x7e70);
                    lVar4 = lVar8;
                    lVar6 = *(longlong *)(lVar8 + 8);
                    while (lVar6 != 0) {
                        if (*(int *)(lVar6 + 0x20) < (int)uVar2) {
                            lVar6 = *(longlong *)(lVar6 + 0x18);
                        }
                        else {
                            lVar4 = lVar6;
                            lVar6 = *(longlong *)(lVar6 + 0x10);
                        }
                    }
                    if ((lVar4 == lVar8) || ((int)uVar2 < *(int *)(lVar4 + 0x20))) {
                        local_a0 = 0;
                        local_a8 = 0;
                        local_b8 = lVar4;
                        local_b0[0] = uVar2;
                        FUN_1403ae300(lVar9,&local_68);
                        lVar4 = local_68;
                    }
                    lVar8 = *(longlong *)(param_1 + 0x7e70);
                    if (uVar12 < *(ulonglong *)(lVar4 + 0x30)) {
                        lVar4 = lVar8;
                        lVar6 = *(longlong *)(lVar8 + 8);
                        while (lVar6 != 0) {
                            if (*(int *)(lVar6 + 0x20) < (int)uVar2) {
                                lVar6 = *(longlong *)(lVar6 + 0x18);
                            }
                            else {
                                lVar4 = lVar6;
                                lVar6 = *(longlong *)(lVar6 + 0x10);
                            }
                        }
                        if ((lVar4 == lVar8) || ((int)uVar2 < *(int *)(lVar4 + 0x20))) {
                            local_a0 = 0;
                            local_a8 = 0;
                            local_b8 = lVar4;
                            local_b0[0] = uVar2;
                            FUN_1403ae300(lVar9,&local_70);
                            lVar4 = local_70;
                        }
                        if (*(uint *)(*(longlong *)(lVar4 + 0x28) + uVar12 * 4) != *puVar3)
                            goto code_r0x0001403a8ad5;
                    }
                    else {
                        lVar4 = lVar8;
                        lVar6 = *(longlong *)(lVar8 + 8);
                        while (lVar6 != 0) {
                            if (*(int *)(lVar6 + 0x20) < (int)uVar2) {
                                lVar6 = *(longlong *)(lVar6 + 0x18);
                            }
                            else {
                                lVar4 = lVar6;
                                lVar6 = *(longlong *)(lVar6 + 0x10);
                            }
                        }
                        if ((lVar4 == lVar8) || ((int)uVar2 < *(int *)(lVar4 + 0x20))) {
                            local_a0 = 0;
                            local_a8 = 0;
                            local_b8 = lVar4;
                            local_b0[0] = uVar2;
                            FUN_1403ae300(lVar9,&local_88,&local_b8,local_b0);
                            lVar4 = local_88;
                        }
                        FUN_140003460(lVar4 + 0x28,puVar3);
                    }
                    lVar9 = *(longlong *)(param_1 + 0x7eb0);
                    lVar8 = *(longlong *)(lVar9 + 8);
                    lVar6 = lVar9;
                    if (lVar8 != 0) {
                        lVar4 = lVar8;
                        do {
                            if (*(uint *)(lVar4 + 0x20) < *puVar3) {
                                lVar5 = *(longlong *)(lVar4 + 0x18);
                            }
                            else {
                                lVar5 = *(longlong *)(lVar4 + 0x10);
                                lVar6 = lVar4;
                            }
                            lVar4 = lVar5;
                        } while (lVar5 != 0);
                    }
                    if ((lVar6 == lVar9) || (*puVar3 < *(uint *)(lVar6 + 0x20))) {
                        local_60[0] = lVar9;
                        plVar10 = local_60;
                    }
                    else {
                        local_80 = lVar6;
                        plVar10 = &local_80;
                    }
                    if (*plVar10 == lVar9) {
                        lVar6 = lVar9;
                        if (lVar8 != 0) {
                            do {
                                if (*(uint *)(lVar8 + 0x20) < *puVar3) {
                                    lVar4 = *(longlong *)(lVar8 + 0x18);
                                }
                                else {
                                    lVar4 = *(longlong *)(lVar8 + 0x10);
                                    lVar6 = lVar8;
                                }
                                lVar8 = lVar4;
                            } while (lVar4 != 0);
                        }
                        if ((lVar6 == lVar9) || (*puVar3 < *(uint *)(lVar6 + 0x20))) {
                            local_b8 = lVar6;
                            FUN_140032b30(param_1 + 0x7ea8,&local_98,&local_b8);
                            lVar6 = local_98;
                        }
                        *(undefined4 *)(lVar6 + 0x24) = 1;
                    }
                    else {
                        piVar1 = (int *)(*plVar10 + 0x24);
                        *piVar1 = *piVar1 + 1;
                    }
                }
            }
            uVar16 = uVar16 + 1;
        } while (uVar16 < 8);
        local_res8 = local_res8 + 1;
        uVar15 = uVar15 + 8;
    } while (uVar15 < 0x200);
    FUN_1403a8770(param_1);
    puVar11 = (undefined4 *)0x0;
    if (*(int *)(param_2 + 0x40) != 0) {
        do {
            plVar10 = (longlong *)((longlong)puVar11 * 0x20 + *(longlong *)(param_2 + 0x48));
            puVar7 = (undefined4 *)FUN_14018b280(0x50);
            puVar13 = (undefined4 *)0x0;
            if (puVar7 != (undefined4 *)0x0) {
                FUN_1407e4830(puVar7,0,0x50);
                puVar13 = puVar7;
            }
            puVar7 = puVar13 + 2;
            lVar9 = 0x20;
            *puVar13 = *(undefined4 *)plVar10;
            puVar13[1] = *(undefined4 *)((longlong)plVar10 + 4);
            psVar14 = (short *)plVar10[1];
            do {
                if ((lVar9 == -0x7fffffde) || (*psVar14 == 0)) {
                    if (lVar9 != 0) goto LAB_1403a8ce0;
                    break;
                }
                *(short *)puVar7 = *psVar14;
                puVar7 = (undefined4 *)((longlong)puVar7 + 2);
                psVar14 = psVar14 + 1;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            puVar7 = (undefined4 *)((longlong)puVar7 + -2);
            LAB_1403a8ce0:
            *(short *)puVar7 = 0;
            *(undefined2 *)(puVar13 + 0x12) = *(undefined2 *)(plVar10 + 2);
            *(undefined2 *)((longlong)puVar13 + 0x4a) = *(undefined2 *)((longlong)plVar10 + 0x14);
            *(undefined2 *)(puVar13 + 0x13) = *(undefined2 *)(plVar10 + 3);
            *(undefined2 *)((longlong)puVar13 + 0x4e) = *(undefined2 *)((longlong)plVar10 + 0x1c);
            local_98 = *plVar10;
            local_90 = puVar13;
            FUN_1403ae510();
            uVar15 = (int)puVar11 + 1;
            puVar11 = (undefined4 *)(ulonglong)uVar15;
        } while (uVar15 < *(uint *)(param_2 + 0x40));
    }
    return 0;
    code_r0x0001403a8ad5:
    uVar12 = uVar12 + 1;
    goto LAB_1403a8a10;
}



undefined8 FUN_1403a8d60(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    short *psVar2;
    longlong lVar3;
    short *psVar4;

    lVar1 = FUN_1403a8810(param_1,*param_2,param_2[1]);
    lVar3 = 0x20;
    *(undefined2 *)(lVar1 + 0x48) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)(lVar1 + 0x4a) = *(undefined2 *)(param_2 + 5);
    *(undefined2 *)(lVar1 + 0x4c) = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)(lVar1 + 0x4e) = *(undefined2 *)(param_2 + 7);
    psVar4 = *(short **)(param_2 + 2);
    psVar2 = (short *)(lVar1 + 8);
    while ((lVar3 != -0x7fffffde && (*psVar4 != 0))) {
        *psVar2 = *psVar4;
        psVar2 = psVar2 + 1;
        psVar4 = psVar4 + 1;
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) {
            LAB_1403a8dd0:
            psVar2 = psVar2 + -1;
            LAB_1403a8dd4:
            *psVar2 = 0;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PetCustomizationUpdated",&DAT_1409ec114
                    ,lVar1);
            return 0;
        }
    }
    if (lVar3 != 0) goto LAB_1403a8dd4;
    goto LAB_1403a8dd0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1403a9340(longlong param_1,undefined4 *param_2)

{
    short sVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined8 *puVar5;
    short *psVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_1407a0fd0(DAT_140c65b70,*param_2);
    FUN_1400b6f30(&local_e8);
    local_28 = ZEXT816(0);
    puVar7 = (undefined8 *)0x0;
    local_e8 = &PTR_FUN_140b69230;
    local_18 = (undefined2 *)0x0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    local_18 = puVar4 + 8;
    local_28 = CONCAT88(puVar4,puVar4);
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    puVar5 = (undefined8 *)FUN_14018b280(0x60);
    puVar9 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x10);
        FUN_1400b6390(puVar5);
        *puVar5 = &PTR_FUN_140b69170;
        *(undefined4 *)(puVar5 + 0xb) = 1;
        FUN_1400b6d70(puVar5,L"name",uVar2);
        puVar9 = puVar5;
    }
    FUN_1400b7480(&local_e8,puVar9);
    psVar6 = (short *)FUN_14034bdd0();
    if (psVar6 == (short *)0x0) {
        if (local_d8 != local_d0) {
            *local_d8 = 0;
            local_d0 = local_d8;
        }
    }
    else {
        sVar1 = *psVar6;
        while (sVar1 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar1 = psVar6[(longlong)puVar7];
        }
        FUN_14001c480(local_e0,psVar6,psVar6 + (longlong)puVar7);
    }
    uVar8 = FUN_14034bdd0();
    lVar3 = FUN_1400b7660(&local_e8);
    FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar3 + 8),0,uVar8);
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"MountUnlocked",&DAT_1409ee6ac,*param_2);
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(&local_e8);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1403a9510(longlong param_1,undefined4 *param_2)

{
    short sVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined8 *puVar5;
    short *psVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined **local_e8;
    undefined local_e0 [8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28 [16];
    undefined2 *local_18;

    lVar3 = FUN_1407a0fd0(DAT_140c65b70,*param_2);
    FUN_1400b6f30(&local_e8);
    local_28 = ZEXT816(0);
    puVar7 = (undefined8 *)0x0;
    local_e8 = &PTR_FUN_140b69230;
    local_18 = (undefined2 *)0x0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    local_18 = puVar4 + 8;
    local_28 = CONCAT88(puVar4,puVar4);
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    puVar5 = (undefined8 *)FUN_14018b280(0x60);
    puVar9 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x10);
        FUN_1400b6390(puVar5);
        *puVar5 = &PTR_FUN_140b69170;
        *(undefined4 *)(puVar5 + 0xb) = 1;
        FUN_1400b6d70(puVar5,L"name",uVar2);
        puVar9 = puVar5;
    }
    FUN_1400b7480(&local_e8,puVar9);
    psVar6 = (short *)FUN_14034bdd0();
    if (psVar6 == (short *)0x0) {
        if (local_d8 != local_d0) {
            *local_d8 = 0;
            local_d0 = local_d8;
        }
    }
    else {
        sVar1 = *psVar6;
        while (sVar1 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar1 = psVar6[(longlong)puVar7];
        }
        FUN_14001c480(local_e0,psVar6,psVar6 + (longlong)puVar7);
    }
    uVar8 = FUN_14034bdd0();
    lVar3 = FUN_1400b7660(&local_e8);
    FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar3 + 8),0,uVar8);
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"VanityPetUnlocked",&DAT_1409ee714,*param_2);
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(&local_e8);
    return 0;
}



undefined8 FUN_1403a96e0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x7e78) != 0) {
        FUN_14001a270(param_1 + 0x7e68,*(undefined8 *)(*(longlong *)(param_1 + 0x7e70) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0x7e70) + 0x10) = *(longlong *)(param_1 + 0x7e70);
        *(undefined8 *)(*(longlong *)(param_1 + 0x7e70) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x7e70) + 0x18) = *(longlong *)(param_1 + 0x7e70);
        *(undefined8 *)(param_1 + 0x7e78) = 0;
    }
    FUN_140008410(param_1 + 0x7ea8);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PetFlairCleared","");
    return 0;
}



undefined8
FUN_1403a9770(undefined8 param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ushort *puVar6;

    if ((param_5 != 0) && (iVar1 = FUN_1403a99d0(param_1,param_5), iVar1 == 0)) {
        return 0;
    }
    iVar1 = (**(code **)(*DAT_140c65a18 + 0x28))(DAT_140c65a18,param_2,param_3);
    if (iVar1 == 0) {
        return 0;
    }
    if (param_2 == 0) {
        lVar3 = FUN_1402215c0();
        if (lVar3 == 0) {
            return 0;
        }
        lVar4 = FUN_140224d00();
        if (param_5 == 0) {
            if (lVar4 == 0) {
                if (*(uint *)(lVar3 + 0x40) <= param_4 && param_4 != *(uint *)(lVar3 + 0x40)) {
                    return 0;
                }
                if (3 < param_4) {
                    return 0;
                }
                return 1;
            }
        }
        else if (lVar4 == 0) {
            return 0;
        }
        if ((*(int *)(lVar4 + 0xc) == 1) && (param_4 != 0)) {
            return 0;
        }
        if (*(int *)(lVar4 + 0xc) != 0) {
            return 1;
        }
        if (2 < param_4 - 1) {
            return 1;
        }
        lVar4 = FUN_1403a8810(DAT_140c65898,0,param_3);
        uVar5 = *(int *)(lVar3 + 0x40) + 1;
        uVar2 = 4;
        if (uVar5 < 4) {
            uVar2 = uVar5;
        }
        uVar5 = 1;
        if (uVar2 < 2) {
            return 1;
        }
        puVar6 = (ushort *)(lVar4 + 0x4a);
        while ((*puVar6 != param_5 || (param_4 == uVar5))) {
            uVar5 = uVar5 + 1;
            puVar6 = puVar6 + 1;
            if (uVar2 <= uVar5) {
                return 1;
            }
        }
        return 0;
    }
    if (1 < param_2 - 1U) {
        return 0;
    }
    lVar3 = FUN_140224d00();
    if (param_5 == 0) {
        if (lVar3 == 0) {
            return 1;
        }
    }
    else if (lVar3 == 0) {
        return 0;
    }
    switch(*(undefined4 *)(lVar3 + 0xc)) {
        case 2:
        case 5:
            break;
        case 3:
        case 6:
            param_4 = param_4 - 1;
            break;
        case 4:
        case 7:
            if (param_4 - 2 < 2) {
                lVar3 = FUN_1403a8810(DAT_140c65898,param_2,param_3);
                if (lVar3 == 0) {
                    return 1;
                }
                if (*(ushort *)(lVar3 + 0x4c + (ulonglong)(param_4 == 2) * 2) != param_5) {
                    return 1;
                }
                uVar2 = FUN_1403a9c40(DAT_140c65898,param_5);
                if (1 < uVar2) {
                    return 1;
                }
            }
        default:
            goto switchD_1403a97fc_caseD_6;
    }
    if (param_4 == 0) {
        return 1;
    }
    switchD_1403a97fc_caseD_6:
    return 0;
}



undefined8
FUN_1403a9940(undefined8 param_1,undefined4 param_2,undefined4 param_3,ushort param_4,uint param_5)

{
    undefined8 uVar1;
    undefined8 uVar2;
    undefined8 local_18;
    ulonglong local_10;

    uVar1 = DAT_140c65898;
    uVar2 = FUN_1403a9770(DAT_140c65898);
    if ((int)uVar2 != 0) {
        local_18 = CONCAT44(param_3,param_2);
        local_10 = (ulonglong)param_4;
        local_10 = local_10 | (ulonglong)param_5 << 0x20;
        FUN_1403f4900(uVar1,0x7ed,&local_18);
        uVar2 = 1;
    }
    return uVar2;
}



undefined8 FUN_1403a99d0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    ulonglong uVar6;
    longlong local_res18;

    lVar3 = FUN_140224d00(param_2);
    if (lVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x7e70);
        local_res18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x20) < *(int *)(lVar3 + 0xc)) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res18 == lVar1) || (*(int *)(lVar3 + 0xc) < *(int *)(local_res18 + 0x20))) {
            local_res18 = lVar1;
        }
        if (local_res18 != lVar1) {
            uVar6 = 0;
            if (*(ulonglong *)(local_res18 + 0x30) != 0) {
                piVar5 = *(int **)(local_res18 + 0x28);
                do {
                    if (*piVar5 == param_2) {
                        if (*(int *)(lVar3 + 0x20) == 0) {
                            return 1;
                        }
                        uVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
                                (DAT_140c659a0,*(undefined8 *)(param_1 + 0x78),*(int *)(lVar3 + 0x20),
                                 0,0,0);
                        return uVar4;
                    }
                    uVar6 = uVar6 + 1;
                    piVar5 = piVar5 + 1;
                } while (uVar6 < *(ulonglong *)(local_res18 + 0x30));
            }
        }
    }
    return 0;
}



undefined8
FUN_1403a9ab0(undefined8 param_1,int param_2,undefined4 param_3,int param_4,longlong *param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    undefined4 local_res10 [2];

    if (param_2 == 0) {
        lVar3 = FUN_1402215c0(param_3);
        if (lVar3 != 0) {
            if (param_4 == 0) {
                uVar5 = 0;
                if (*(int *)(lVar3 + 0x40) != 0) {
                    do {
                        lVar2 = param_5[1];
                        lVar1 = lVar2 + 1;
                        lVar4 = FUN_14018db00(*param_5,lVar1,4);
                        uVar5 = uVar5 + 1;
                        *(uint *)(lVar4 + lVar2 * 4) = uVar5;
                        if (*param_5 != lVar4) {
                            FUN_1407db590(lVar4,*param_5,param_5[1] << 2);
                            lVar2 = *param_5;
                            if (lVar2 != 0) {
                                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                            }
                            *param_5 = lVar4;
                        }
                        param_5[1] = lVar1;
                    } while (uVar5 < *(uint *)(lVar3 + 0x40));
                }
                return 1;
            }
            if (param_4 == 1) goto switchD_1403a9aef_caseD_2;
        }
    }
    else if (param_2 - 1U < 2) {
        switch(param_4) {
            case 2:
            case 5:
            switchD_1403a9aef_caseD_2:
                local_res10[0] = 0;
                FUN_140003460(param_5,local_res10);
                return 1;
            case 3:
            case 6:
                local_res10[0] = 1;
                FUN_140003460(param_5,local_res10);
                return 1;
            case 4:
            case 7:
                local_res10[0] = 2;
                FUN_140003460(param_5,local_res10);
                local_res10[0] = 3;
                FUN_140003460(param_5,local_res10);
                return 1;
        }
    }
    return 0;
}



undefined4 FUN_1403a9c40(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar2 = FUN_140224d00(param_2);
    if (lVar2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x7eb0);
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
        if (local_res18 != lVar2) {
            return *(undefined4 *)(local_res18 + 0x24);
        }
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001403a9d01)

undefined8 FUN_1403a9cd0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    int *piVar4;
    ulonglong uVar5;

    lVar1 = DAT_140c65898;
    if ((param_2 != 0) &&
        ((((uVar5 = 0, *(longlong *)(DAT_140c65898 + 0x78) != 0 && (DAT_140c65898 != 0)) &&
           (lVar3 = FUN_1405a5b90(DAT_140c65898), lVar3 != 0)) ||
          (lVar3 = FUN_1407a0fd0(DAT_140c65b70), lVar3 != 0)))) {
        piVar4 = (int *)(*(longlong *)(lVar3 + 0x70) + 0x198);
        do {
            if (*piVar4 == 5) {
                iVar2 = FUN_1403bb170(lVar1,*(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 4));
                if (iVar2 == 0) {
                    return 0x80004005;
                }
                *(int *)(lVar1 + 0x7f6c) = param_2;
                return 0;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 1;
        } while (uVar5 < 5);
    }
    return 0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403a9da0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    uint uVar7;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64084 == 0) {
            iVar4 = FUN_1401f2b40();
            if (iVar4 < 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(*DAT_140c64540 + 0x28))();
            }
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_CityDirection_140a69918,DAT_140c63858);
    }
    uVar7 = 0;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64084 == 0) {
                    iVar4 = FUN_1401f2b40();
                    if (iVar4 < 0) {
                        uVar5 = 0;
                    }
                    else {
                        uVar5 = (**(code **)(*DAT_140c64540 + 0x20))(DAT_140c64540,uVar7);
                    }
                }
                else {
                    uVar5 = 0;
                }
            }
            else {
                uVar5 = (*DAT_140c63848)(&PTR_u_CityDirection_140a69918,uVar7,DAT_140c63858);
            }
            iVar4 = FUN_1403c9450();
            if (iVar4 != 0) {
                lVar2 = param_3[1];
                lVar1 = lVar2 + 1;
                lVar6 = FUN_14018db00(*param_3,lVar1);
                *(undefined8 *)(lVar6 + lVar2 * 8) = uVar5;
                if (*param_3 != lVar6) {
                    FUN_1407db590(lVar6);
                    lVar2 = *param_3;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *param_3 = lVar6;
                }
                param_3[1] = lVar1;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
    }
    return;
}



undefined8 FUN_1403a9f00(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    float fVar8;
    float fVar9;
    undefined4 in_XMM6_Da;
    float fVar10;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar11 [16];

    lVar1 = DAT_140c65898;
    if ((*(int *)(DAT_140c65898 + 0x6640) == 0) || (*(int *)(DAT_140c65898 + 0x6644) != 0x51)) {
        return 0;
    }
    lVar3 = FUN_1401f2da0(param_2);
    if (lVar3 != 0) {
        iVar2 = FUN_1403c9450();
        if (iVar2 != 0) {
            auVar11 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
            fVar10 = 0.0;
            puVar7 = (undefined4 *)0x0;
            puVar6 = (undefined4 *)(lVar3 + 0x10);
            lVar5 = 4;
            do {
                puVar4 = (undefined4 *)FUN_14024b980(*puVar6);
                if (puVar4 != (undefined4 *)0x0) {
                    fVar8 = *(float *)(*(longlong *)(lVar1 + 0x78) + 0x11e0) - (float)puVar4[3];
                    fVar9 = *(float *)(*(longlong *)(lVar1 + 0x78) + 0x11e4) - (float)puVar4[4];
                    fVar8 = fVar8 * fVar8 + fVar9 * fVar9 + 0.0;
                    if ((puVar7 == (undefined4 *)0x0) || (fVar8 < fVar10)) {
                        puVar7 = puVar4;
                        fVar10 = fVar8;
                    }
                }
                puVar6 = puVar6 + 1;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (puVar7 == (undefined4 *)0x0) {
                return 0;
            }
            iVar2 = *(int *)(lVar1 + 0x7ed0);
            if (iVar2 != 0) {
                *(undefined8 *)(lVar1 + 0x7ed0) = 0;
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"CityDirectionClear",&DAT_1409ee954,iVar2,
                              auVar11);
            }
            *(undefined4 *)(lVar1 + 0x7ed0) = param_2;
            *(undefined4 *)(lVar1 + 0x7ed4) = *puVar7;
            FUN_14042f9d0(*(undefined8 *)(lVar1 + 0x7340),lVar3,puVar7);
            WindowHandlerFunction(lVar1,0,0x65,1);
            return 1;
        }
    }
    return 0;
}



void FUN_1403aa0a0(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    int *piVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 in_stack_ffffffffffffffc8;
    uint uVar5;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_18;
    code *local_10;

    uVar5 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    if ((*(longlong *)(param_2 + 0x6490) != 0) && (*(int *)(param_2 + 0x7ef4) != 0)) {
        for (plVar1 = *(longlong **)(DAT_140c65920 + 2); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[4]) {
            if (plVar1[9] == *(longlong *)(param_2 + 0x7ef8)) {
                (**(code **)(*plVar1 + 8))(plVar1);
                param_1 = (**(code **)*plVar1)(plVar1,1);
                break;
            }
        }
        piVar2 = DAT_140c65920;
        uVar4 = 0;
        local_28 = 8;
        local_20 = 0;
        iVar3 = FUN_1404860d0(param_1,0x40a00000,0x41200000,param_2 + 0x7ee0);
        local_10 = FUN_1403aa1e0;
        if (iVar3 == 0) {
            local_18 = FUN_14001c280(param_2);
            if (*piVar2 != 0) {
                uVar4 = FUN_140486dc0(piVar2,
                                      L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3"
                        ,&local_28,&local_18,(ulonglong)uVar5 << 0x20,0);
            }
        }
        else {
            local_18 = FUN_14001c280(param_2);
            if (*piVar2 != 0) {
                uVar4 = FUN_140486f10(piVar2,
                                      L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                        ,*(longlong *)(param_2 + 0x6490) + 0x11b0,&local_28,&local_18);
            }
        }
        *(undefined8 *)(param_2 + 0x7ef8) = uVar4;
    }
    return;
}



void FUN_1403aa1e0(longlong param_1,longlong *param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    float fVar4;
    float local_38;
    float fStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    float local_28;
    float fStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    ulonglong local_18;
    undefined8 uStack16;

    if ((param_3 != 0) || (*(int *)(param_2 + 0xc) != 0)) {
        *(undefined8 *)(param_1 + 0x7ef8) = 0;
        return;
    }
    if ((*(longlong *)(param_1 + 0x6490) != 0) && (*(int *)(param_1 + 0x7ef4) != 0)) {
        local_38 = *(float *)(param_1 + 0x7ee0);
        uStack48 = *(undefined4 *)(param_1 + 0x7ee8);
        uStack44 = *(undefined4 *)(param_1 + 0x7eec);
        fStack52 = *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e4);
        uVar3 = 0;
        lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
        fVar4 = *(float *)(ulonglong *)(lVar1 + 0x11e0);
        local_18 = *(ulonglong *)(lVar1 + 0x11e0);
        uStack16 = *(undefined8 *)(lVar1 + 0x11e8);
        fStack36 = fStack52;
        local_28 = local_38;
        uStack32 = uStack48;
        uStack28 = uStack44;
        if ((float)((uint)(*(float *)(lVar1 + 0x11e4) - fStack52) & 0x7fffffff) <= 10.0) {
            fStack36 = 0.0;
            local_18 = (ulonglong)(uint)fVar4;
            fVar4 = local_38 - fVar4;
            if (fVar4 * fVar4 + 0.0 + 0.0 <= 25.0) {
                uStack16 = 0;
                local_18 = 0;
                if (*DAT_140c65920 != 0) {
                    uVar3 = FUN_140486f10(DAT_140c65920,
                                          L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                            ,*(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,param_2 + 7,
                                          &local_18);
                }
                (**(code **)(*param_2 + 8))(param_2);
                *(undefined8 *)(param_1 + 0x7ef8) = uVar3;
                return;
            }
        }
        if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
            (iVar2 = FUN_140486340(param_2,&local_38), -1 < iVar2)) {
            return;
        }
        (**(code **)(*param_2 + 8))(param_2);
        *(undefined8 *)(param_1 + 0x7ef8) = 0;
        return;
    }
    (**(code **)(*param_2 + 8))(param_2);
    *(undefined8 *)(param_1 + 0x7ef8) = 0;
    return;
}



void FUN_1403aa3a0(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    int *piVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 in_stack_ffffffffffffffc8;
    uint uVar5;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_18;
    code *local_10;

    uVar5 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    if ((*(longlong *)(param_2 + 0x6490) != 0) && (*(int *)(param_2 + 0x7f14) != 0)) {
        for (plVar1 = *(longlong **)(DAT_140c65920 + 2); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[4]) {
            if (plVar1[9] == *(longlong *)(param_2 + 0x7f18)) {
                (**(code **)(*plVar1 + 8))(plVar1);
                param_1 = (**(code **)*plVar1)(plVar1,1);
                break;
            }
        }
        piVar2 = DAT_140c65920;
        uVar4 = 0;
        local_28 = 9;
        local_20 = 0;
        iVar3 = FUN_1404860d0(param_1,*(undefined4 *)(param_2 + 0x7f10),0x41200000,param_2 + 0x7f00);
        local_10 = FUN_1403aa4e0;
        if (iVar3 == 0) {
            local_18 = FUN_14001c280(param_2);
            if (*piVar2 != 0) {
                uVar4 = FUN_140486dc0(piVar2,
                                      L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3"
                        ,&local_28,&local_18,(ulonglong)uVar5 << 0x20,0);
            }
        }
        else {
            local_18 = FUN_14001c280(param_2);
            if (*piVar2 != 0) {
                uVar4 = FUN_140486f10(piVar2,
                                      L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                        ,*(longlong *)(param_2 + 0x6490) + 0x11b0,&local_28,&local_18);
            }
        }
        *(undefined8 *)(param_2 + 0x7f18) = uVar4;
    }
    return;
}



void FUN_1403aa4e0(longlong param_1,longlong *param_2,int param_3)

{
    int iVar1;
    undefined8 uVar2;
    longlong *plVar3;
    undefined8 local_18;
    undefined8 uStack16;

    if ((param_3 != 0) || (*(int *)(param_2 + 0xc) != 0)) {
        *(undefined8 *)(param_1 + 0x7f18) = 0;
        return;
    }
    if ((*(longlong *)(param_1 + 0x6490) != 0) && (*(int *)(param_1 + 0x7f14) != 0)) {
        local_18 = *(undefined8 *)(param_1 + 0x7f00);
        uStack16 = *(undefined8 *)(param_1 + 0x7f08);
        plVar3 = param_2;
        iVar1 = FUN_1404860d0(*(undefined4 *)(undefined8 *)(param_1 + 0x7f00),
                              *(undefined4 *)(param_1 + 0x7f10),0x41200000,&local_18);
        if (iVar1 != 0) {
            uVar2 = 0;
            uStack16 = 0;
            local_18 = 0;
            if (*DAT_140c65920 != 0) {
                uVar2 = FUN_140486f10(DAT_140c65920,
                                      L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                        ,*(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,plVar3 + 7,&local_18);
            }
            (**(code **)(*param_2 + 8))(param_2);
            *(undefined8 *)(param_1 + 0x7f18) = uVar2;
            return;
        }
        if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
            (iVar1 = FUN_140486340(param_2,&local_18), -1 < iVar1)) {
            return;
        }
        (**(code **)(*param_2 + 8))(param_2);
        *(undefined8 *)(param_1 + 0x7f18) = 0;
        return;
    }
    (**(code **)(*param_2 + 8))(param_2);
    *(undefined8 *)(param_1 + 0x7f18) = 0;
    return;
}



undefined8 FUN_1403aa630(longlong param_1,undefined8 *param_2)

{
    *(undefined8 *)(param_1 + 0x7f80) = *param_2;
    *(undefined8 *)(param_1 + 0x7f88) = param_2[1];
    *(undefined8 *)(param_1 + 0x7f90) = param_2[2];
    if (*(longlong *)(param_1 + 0x7fa8) != 0) {
        FUN_140195d70(param_1 + 0x7f98);
    }
    FUN_1403aa680(param_1);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403aa680(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    short *psVar3;
    short *in_stack_ffffffffffffffc8;
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    undefined8 local_10;

    if ((*(int *)(DAT_140c635f0 + 0x1708) == 1) && (*(int *)(param_1 + 0x7f80) != 0)) {
        if ((DAT_140dc222c & 1) == 0) {
            DAT_140dc222c = DAT_140dc222c | 1;
            DAT_140dc2234 = 0;
        }
        if ((DAT_140dc222c & 2) == 0) {
            DAT_140dc222c = DAT_140dc222c | 2;
            _DAT_140dc223c = 0;
        }
        if ((DAT_140dc222c & 4) == 0) {
            DAT_140dc222c = DAT_140dc222c | 4;
            if (DAT_140dc2234 == 0) {
                DAT_140dc2234 = 1;
                lVar2 = FUN_140200220();
                if (lVar2 == 0) {
                    DAT_140dc2230 = 0;
                }
                else {
                    DAT_140dc2230 = *(int *)(lVar2 + 4);
                }
            }
            _DAT_140dc2240 = DAT_140dc2230 * 0x3c;
        }
        if ((DAT_140dc222c & 8) == 0) {
            DAT_140dc222c = DAT_140dc222c | 8;
            if (_DAT_140dc223c == 0) {
                _DAT_140dc223c = 1;
                lVar2 = FUN_140200220(0x4b8);
                if (lVar2 == 0) {
                    DAT_140dc2238 = 0;
                }
                else {
                    DAT_140dc2238 = *(int *)(lVar2 + 8);
                }
            }
            _DAT_140dc2244 = DAT_140dc2238 * 0x3c;
        }
        if ((((*(int *)(param_1 + 0x7f84) == 1) &&
              (iVar1 = FUN_1403b4f80(param_1), (uint)(iVar1 - _DAT_140dc2240) < _DAT_140dc2244)) &&
             (psVar3 = (short *)FUN_14034bdd0(), DAT_140c658a0 != 0)) &&
            ((psVar3 != (short *)0x0 && (*psVar3 != 0)))) {
            FUN_140003890(DAT_140c658a0,2,0,psVar3,
                          (ulonglong)in_stack_ffffffffffffffc8 & 0xffffffff00000000,0);
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HealthyGamingUpdate",&DAT_1409efa0c,
                          *(undefined4 *)(param_1 + 0x7f84),psVar3);
            in_stack_ffffffffffffffc8 = psVar3;
        }
        psVar3 = (short *)FUN_1403aaab0(param_1);
        if (((DAT_140c658a0 != 0) && (psVar3 != (short *)0x0)) && (*psVar3 != 0)) {
            FUN_140003890(DAT_140c658a0,2,0,psVar3,
                          (ulonglong)in_stack_ffffffffffffffc8 & 0xffffffff00000000,0);
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HealthyGamingUpdate",&DAT_1409efa0c,
                          *(undefined4 *)(param_1 + 0x7f84),psVar3);
        }
        iVar1 = FUN_1403aa9a0(param_1);
        if (iVar1 * 1000 != 0) {
            local_28[0] = 0;
            local_20 = FUN_14001c280(param_1);
            local_10 = 0;
            local_18 = FUN_1403aa680;
            FUN_140195960(param_1 + 0x7f98,iVar1 * 1000,local_28,4);
        }
    }
    return;
}



undefined8 FUN_1403aa8e0(longlong param_1,int *param_2)

{
    int *piVar1;
    ulonglong uVar2;

    if (param_2[2] == 0) {
        uVar2 = 0;
        if (*(ulonglong *)(param_1 + 0x7ff0) == 0) {
            return 0;
        }
        piVar1 = *(int **)(param_1 + 0x7fe8);
        while (*piVar1 != *param_2) {
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
            if (*(ulonglong *)(param_1 + 0x7ff0) <= uVar2) {
                return 0;
            }
        }
        FUN_1401c2f20(param_1 + 0x7fe8);
    }
    else {
        uVar2 = 0;
        if (*(ulonglong *)(param_1 + 0x7ff0) != 0) {
            piVar1 = *(int **)(param_1 + 0x7fe8);
            do {
                if (*piVar1 == *param_2) {
                    return 0;
                }
                uVar2 = uVar2 + 1;
                piVar1 = piVar1 + 1;
            } while (uVar2 < *(ulonglong *)(param_1 + 0x7ff0));
        }
        FUN_140003460((int **)(param_1 + 0x7fe8),param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"DisabledGameplaySystemNotification",
                  &DAT_1409efb4c,*param_2,param_2[2]);
    return 0;
}



int FUN_1403aa9a0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;

    if ((DAT_140dc2248 & 1) == 0) {
        DAT_140dc2248 = DAT_140dc2248 | 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            iVar1 = 0x3c;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        DAT_140dc224c = iVar1 * 0x3c;
    }
    if ((DAT_140dc2248 & 2) == 0) {
        DAT_140dc2248 = DAT_140dc2248 | 2;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            iVar1 = 0x1e;
        }
        else {
            iVar1 = *(int *)(lVar2 + 8);
        }
        DAT_140dc2250 = iVar1 * 0x3c;
    }
    if ((DAT_140dc2248 & 4) == 0) {
        DAT_140dc2248 = DAT_140dc2248 | 4;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            DAT_140dc2254 = 900;
        }
        else {
            DAT_140dc2254 = *(int *)(lVar2 + 0xc) * 0x3c;
        }
    }
    iVar1 = *(int *)(param_1 + 0x7f84);
    uVar4 = DAT_140dc224c;
    if (((iVar1 != 0) && (uVar4 = DAT_140dc2250, iVar1 != 1)) && (uVar4 = DAT_140dc2254, iVar1 != 2))
    {
        return 0;
    }
    uVar3 = FUN_1403b4f80(param_1);
    return uVar4 - (int)((uVar3 & 0xffffffff) % (ulonglong)uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1403aaab0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined *puVar3;
    ulonglong uVar4;

    if ((DAT_140dc2258 & 1) == 0) {
        DAT_140dc2258 = DAT_140dc2258 | 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            _DAT_140dc225c = 0xb4;
        }
        else {
            _DAT_140dc225c = *(int *)(lVar2 + 4);
        }
        _DAT_140dc225c = _DAT_140dc225c * 0x3c;
    }
    if ((DAT_140dc2258 & 2) == 0) {
        DAT_140dc2258 = DAT_140dc2258 | 2;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            iVar1 = 0x3c;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        DAT_140dc2260 = iVar1 * 0x3c;
    }
    iVar1 = *(int *)(param_1 + 0x7f84);
    if (iVar1 == 0) {
        uVar4 = FUN_1403b4f80(param_1);
        iVar1 = (int)((uVar4 & 0xffffffff) / (ulonglong)DAT_140dc2260);
        if (iVar1 == 1) {
            puVar3 = (undefined *)FUN_14034bdd0();
            return puVar3;
        }
        if (iVar1 != 2) {
            return &DAT_1409e799c;
        }
    }
    else {
        if (iVar1 == 1) {
            puVar3 = (undefined *)FUN_14034bdd0(0,0xa6094);
            return puVar3;
        }
        if (iVar1 == 2) {
            puVar3 = (undefined *)FUN_14034bdd0(0,0xa6095);
            return puVar3;
        }
    }
    puVar3 = (undefined *)FUN_14034bdd0();
    return puVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403aaba0(longlong param_1,longlong *param_2,int param_3)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    uint uVar12;
    undefined4 uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    bool bVar16;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    longlong local_90;
    undefined8 local_88;
    longlong local_80 [2];
    undefined8 local_70;
    undefined8 local_68;

    uVar14 = 0;
    uVar15 = uVar14;
    if (param_2[1] != 0) {
        do {
            lVar8 = *param_2;
            local_88 = 0;
            local_90 = 0;
            local_a8 = CONCAT44(*(undefined4 *)(uVar14 + 4 + lVar8),*(undefined4 *)(uVar14 + lVar8));
            local_a0 = local_70;
            local_98 = local_68;
            FUN_1403ae0e0(param_1,local_80,&local_a8);
            if (local_90 != 0) {
                (**(code **)(*(longlong *)(local_90 + -0x10) + 8))();
            }
            lVar10 = local_80[0];
            *(undefined4 *)(local_80[0] + 0x28) = *(undefined4 *)(uVar14 + lVar8);
            *(undefined4 *)(local_80[0] + 0x2c) = *(undefined4 *)(uVar14 + 4 + lVar8);
            *(undefined4 *)(local_80[0] + 0x30) = *(undefined4 *)(uVar14 + 0x10 + lVar8);
            iVar1 = *(int *)(uVar14 + 0x1c + lVar8);
            iVar2 = *(int *)(uVar14 + 8 + lVar8);
            uVar3 = *(undefined4 *)(uVar14 + 0xc + lVar8);
            iVar4 = *(int *)(uVar14 + 0x10 + lVar8);
            if (iVar1 == 0) {
                if (iVar4 == 0) {
                    uVar6 = *(uint *)(uVar14 + 0x14 + lVar8);
                    uVar11 = 0;
                    LAB_1403aaceb:
                    if ((int)(uVar11 ^ uVar6) < 0) {
                        uVar6 = 0x80000000 - uVar6;
                    }
                    uVar12 = (int)(uVar6 - uVar11) >> 0x1f;
                    bVar16 = (int)((uVar6 - uVar11 ^ uVar12) - uVar12) < 0x55;
                    LAB_1403aad0b:
                    if (bVar16) goto LAB_1403aadfa;
                }
                else {
                    if (iVar4 == 1) {
                        bVar16 = *(int *)(uVar14 + 0x14 + lVar8) == 0;
                        goto LAB_1403aad0b;
                    }
                    if (iVar4 == 2) {
                        uVar6 = *(uint *)(uVar14 + 0x14 + lVar8);
                        uVar11 = 0x3f800000;
                        goto LAB_1403aaceb;
                    }
                }
                uVar13 = *(undefined4 *)(uVar14 + 0x14 + lVar8);
                LAB_1403aad82:
                lVar8 = *(longlong *)(lVar10 + 0x40);
                lVar9 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x38),lVar8 + 1,0x10);
                *(int *)(lVar9 + lVar8 * 0x10) = iVar2;
                *(undefined4 *)(lVar9 + 4 + lVar8 * 0x10) = uVar3;
                *(int *)(lVar9 + 8 + lVar8 * 0x10) = iVar4;
                *(undefined4 *)(lVar9 + 0xc + lVar8 * 0x10) = uVar13;
                if (*(longlong *)(lVar10 + 0x38) != lVar9) {
                    FUN_1407db590(lVar9,*(longlong *)(lVar10 + 0x38),*(longlong *)(lVar10 + 0x40) << 4);
                    lVar5 = *(longlong *)(lVar10 + 0x38);
                    if (lVar5 != 0) {
                        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
                    }
                    *(longlong *)(lVar10 + 0x38) = lVar9;
                }
                *(longlong *)(lVar10 + 0x40) = lVar8 + 1;
            }
            else if (param_3 != 0) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c63f1c != 0) || (iVar7 = FUN_1401fddc0(), iVar7 < 0)) goto LAB_1403aadfa;
                    lVar8 = (**(code **)(*DAT_140c64018 + 0x18))(DAT_140c64018,iVar1);
                }
                else {
                    lVar8 = (*DAT_140c63840)(&PTR_u_Entitlement_140a6a248,iVar1,DAT_140c63858);
                }
                if ((lVar8 != 0) && (iVar2 != 7)) {
                    uVar13 = *(undefined4 *)(lVar8 + 4);
                    goto LAB_1403aad82;
                }
            }
            LAB_1403aadfa:
            uVar15 = uVar15 + 1;
            uVar14 = uVar14 + 0x20;
        } while (uVar15 < (ulonglong)param_2[1]);
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar8 != *(longlong *)(param_1 + 8)) {
        do {
            FUN_1403aaec0(lVar8 + 0x28);
            lVar10 = *(longlong *)(lVar8 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar8 = lVar10;
                        lVar10 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar10) {
                    lVar8 = lVar10;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar10 + 0x10); lVar8 = lVar10, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar10 = lVar9;
                }
            }
        } while (lVar8 != *(longlong *)(param_1 + 8));
    }
    return;
}



void FUN_1403aaec0(undefined4 *param_1)

{
    int iVar1;
    float *pfVar2;
    longlong lVar3;
    int *piVar4;
    float fVar5;
    float fVar6;
    undefined8 local_res8 [4];

    iVar1 = param_1[2];
    if (iVar1 == 0) {
        lVar3 = *(longlong *)(param_1 + 6);
        param_1[3] = 0x3f800000;
        if (lVar3 != 0) {
            fVar5 = 1.0;
            pfVar2 = (float *)(*(longlong *)(param_1 + 4) + 0xc);
            do {
                fVar5 = fVar5 + *pfVar2;
                pfVar2 = pfVar2 + 4;
                param_1[3] = fVar5;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
        }
    }
    else {
        if (iVar1 == 1) {
            lVar3 = *(longlong *)(param_1 + 6);
            iVar1 = 0;
            param_1[3] = 0;
            if (lVar3 == 0) {
                return;
            }
            piVar4 = (int *)(*(longlong *)(param_1 + 4) + 0xc);
            do {
                iVar1 = iVar1 + *piVar4;
                piVar4 = piVar4 + 4;
                param_1[3] = iVar1;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            return;
        }
        if (iVar1 != 2) {
            local_res8[0] = 0x141defee0;
            FUN_1401a3130(0x7a,0,local_res8,iVar1,*param_1);
            return;
        }
        lVar3 = *(longlong *)(param_1 + 6);
        param_1[3] = 0x3f800000;
        if (lVar3 != 0) {
            fVar5 = 1.0;
            pfVar2 = (float *)(*(longlong *)(param_1 + 4) + 0xc);
            do {
                fVar5 = fVar5 * *pfVar2;
                pfVar2 = pfVar2 + 4;
                param_1[3] = fVar5;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            fVar6 = 0.0;
            if (0.0 <= fVar5) {
                fVar6 = fVar5;
            }
            param_1[3] = fVar6;
            return;
        }
    }
    fVar5 = 0.0;
    if (0.0 <= (float)param_1[3]) {
        fVar5 = (float)param_1[3];
    }
    param_1[3] = fVar5;
    return;
}



void FUN_1403aafe0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    double *pdVar4;
    int iVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    double dVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    longlong local_res20;
    int local_b8;
    int iStack180;
    ulonglong local_b0;
    undefined **local_a8;
    undefined4 local_a0;
    undefined4 uStack156;
    longlong local_98;
    undefined4 local_90;
    undefined local_88 [8];
    longlong local_80;

    lVar10 = *(longlong *)(param_2 + 0x10);
    iVar2 = *(int *)(param_1 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar9 = *(undefined8 **)(lVar10 + 0x10);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    FUN_1400f06f0();
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (iVar2 == 0) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        fVar14 = *(float *)(param_1 + 0xc);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar9 = *(undefined8 **)(lVar10 + 0x10);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar7 = FUN_14018f0e0(&local_a8,L"nValue");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
            LAB_1403ab1a9:
            FUN_140058710(lVar10);
        }
        LAB_1403ab1b1:
        if (CONCAT44(uStack156,local_a0) != 0) {
            FUN_14018b900(CONCAT44(uStack156,local_a0),0);
        }
        pdVar4 = *(double **)(lVar10 + 0x10);
        *pdVar4 = (double)fVar14;
        *(undefined4 *)(pdVar4 + 1) = 3;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    }
    else {
        if (iVar2 != 1) {
            if (iVar2 != 2) goto LAB_1403ab20e;
            lVar10 = *(longlong *)(param_2 + 0x10);
            fVar14 = *(float *)(param_1 + 0xc);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar9 = *(undefined8 **)(lVar10 + 0x10);
            *puVar9 = *puVar6;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar10 = *(longlong *)(param_2 + 0x10);
            lVar7 = FUN_14018f0e0(&local_a8,L"nValue");
            if (*(longlong *)(lVar7 + 8) != 0) {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
                goto LAB_1403ab1a9;
            }
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            goto LAB_1403ab1b1;
        }
        lVar10 = *(longlong *)(param_2 + 0x10);
        uVar12 = (ulonglong)*(uint *)(param_1 + 0xc);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar9 = *(undefined8 **)(lVar10 + 0x10);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar9,L"nValue",uVar12 & 0xffffffff);
    }
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    LAB_1403ab20e:
    lVar10 = *(longlong *)(param_2 + 0x10);
    local_90 = 1;
    local_a8 = &PTR_FUN_140b569f0;
    local_98 = lVar10;
    if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar10);
    }
    puVar9 = *(undefined8 **)(lVar10 + 0x10);
    uVar8 = FUN_14005c1b0(lVar10,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar8;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    local_a0 = FUN_1400578c0(lVar10);
    local_b0 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar15 = 0;
        uVar16 = 0;
        local_res20 = 0;
        do {
            lVar10 = *(longlong *)(param_2 + 0x10);
            if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar10);
            }
            puVar9 = *(undefined8 **)(lVar10 + 0x10);
            uVar8 = FUN_14005c1b0(lVar10,0,0);
            *(undefined4 *)(puVar9 + 1) = 5;
            *puVar9 = uVar8;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar10);
            iVar3 = *(int *)(local_res20 + *(longlong *)(param_1 + 0x10));
            lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar7 + 0x38)) {
                puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
            }
            else {
                dVar13 = (double)iVar5;
                if (dVar13 == (double)CONCAT44(uVar16,uVar15)) {
                    puVar9 = *(undefined8 **)(lVar7 + 0x20);
                }
                else {
                    iStack180 = (int)((ulonglong)dVar13 >> 0x20);
                    local_b8 = SUB84(dVar13,0);
                    puVar9 = (undefined8 *)
                            (*(longlong *)(lVar7 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack180 + local_b8) %
                              (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_1403ab37d;
                    puVar9 = (undefined8 *)puVar9[4];
                } while (puVar9 != (undefined8 *)0x0);
                puVar9 = &DAT_140a12138;
            }
            LAB_1403ab37d:
            puVar6 = *(undefined8 **)(lVar10 + 0x10);
            *puVar6 = *puVar9;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_88,L"eOwnerType");
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar7 + lVar11) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar9 = *(undefined8 **)(lVar10 + 0x10);
                uVar8 = FUN_140062650(lVar10,lVar7,lVar11);
                *(undefined4 *)(puVar9 + 1) = 4;
                *puVar9 = uVar8;
            }
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            if (local_80 != 0) {
                FUN_14018b900(local_80,0);
            }
            pdVar4 = *(double **)(lVar10 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
            lVar7 = *(longlong *)(lVar10 + 0x10);
            *(undefined **)(lVar10 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
            iVar3 = *(int *)(local_res20 + 4 + *(longlong *)(param_1 + 0x10));
            lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar11 + 0x38)) {
                puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
            }
            else {
                dVar13 = (double)iVar5;
                if (dVar13 == (double)CONCAT44(uVar16,uVar15)) {
                    puVar9 = *(undefined8 **)(lVar11 + 0x20);
                }
                else {
                    iStack180 = (int)((ulonglong)dVar13 >> 0x20);
                    local_b8 = SUB84(dVar13,0);
                    puVar9 = (undefined8 *)
                            (*(longlong *)(lVar11 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack180 + local_b8) %
                              (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar9 + 3) == 3) && (dVar13 == (double)puVar9[2])) goto LAB_1403ab4f4;
                    puVar9 = (undefined8 *)puVar9[4];
                } while (puVar9 != (undefined8 *)0x0);
                puVar9 = &DAT_140a12138;
            }
            LAB_1403ab4f4:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar9;
            *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_88,L"nOwnerId");
            lVar7 = *(longlong *)(lVar7 + 8);
            if (lVar7 == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar7 + lVar11) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar9 = *(undefined8 **)(lVar10 + 0x10);
                uVar8 = FUN_140062650(lVar10,lVar7,lVar11);
                *(undefined4 *)(puVar9 + 1) = 4;
                *puVar9 = uVar8;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            }
            if (local_80 != 0) {
                FUN_14018b900(local_80,0);
            }
            pdVar4 = *(double **)(lVar10 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar3;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
            puVar9 = (undefined8 *)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
            *(undefined8 **)(lVar10 + 0x10) = puVar9;
            if (iVar2 == 0) {
                fVar14 = *(float *)(local_res20 + 0xc + *(longlong *)(param_1 + 0x10));
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),iVar5);
                *puVar9 = *puVar6;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar7 = FUN_14018f0e0(local_88,L"nValue");
                if (*(longlong *)(lVar7 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar11 = -1;
                    do {
                        lVar11 = lVar11 + 1;
                    } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
                    LAB_1403ab71a:
                    FUN_140058710(lVar10);
                }
                LAB_1403ab722:
                if (local_80 != 0) {
                    FUN_14018b900(local_80,0);
                }
                pdVar4 = *(double **)(lVar10 + 0x10);
                *pdVar4 = (double)fVar14;
                *(undefined4 *)(pdVar4 + 1) = 3;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                *(longlong *)(lVar10 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
            }
            else if (iVar2 == 1) {
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),iVar5);
                *puVar9 = *puVar6;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
            }
            else if (iVar2 == 2) {
                fVar14 = *(float *)(local_res20 + 0xc + *(longlong *)(param_1 + 0x10));
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),iVar5);
                *puVar9 = *puVar6;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar7 = FUN_14018f0e0(local_88,L"nValue");
                if (*(longlong *)(lVar7 + 8) != 0) {
                    lVar11 = -1;
                    do {
                        lVar11 = lVar11 + 1;
                    } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar11) != '\0');
                    goto LAB_1403ab71a;
                }
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                goto LAB_1403ab722;
            }
            FUN_1400fb1d0(&local_a8,iVar5);
            FUN_1400579e0(lVar10);
            local_res20 = local_res20 + 0x10;
            local_b0 = local_b0 + 1;
            lVar10 = local_98;
        } while (local_b0 < *(ulonglong *)(param_1 + 0x18));
    }
    FUN_1400fb2a0(param_2,L"tModifiers",local_a0);
    if (lVar10 != 0) {
        FUN_1400579e0(lVar10);
    }
    return;
}



void FUN_1403ab820(undefined8 param_1,byte *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint uVar7;
    ulonglong uVar8;
    undefined4 local_res10;
    undefined4 uStackX20;
    undefined local_c8 [8];
    undefined *local_c0;
    undefined8 local_b8;
    undefined local_a8 [8];
    longlong local_a0;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    longlong local_70;
    undefined8 local_68;
    longlong local_60 [2];
    undefined8 local_50;
    undefined8 local_48;

    local_c0 = (undefined *)FUN_14018b280(0x28);
    uVar5 = 0;
    local_b8 = 0;
    *local_c0 = 0;
    *(undefined8 *)(local_c0 + 8) = 0;
    *(undefined **)(local_c0 + 0x10) = local_c0;
    *(undefined **)(local_c0 + 0x18) = local_c0;
    if (*param_2 != 0) {
        do {
            lVar6 = uVar5 * 0x20;
            local_res10 = *(undefined4 *)(*(longlong *)(param_2 + 8) + lVar6);
            uStackX20 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4 + lVar6);
            FUN_1403adfc0(local_c8,local_a8,&local_res10);
            local_88 = CONCAT44(uStackX20,local_res10);
            local_80 = local_50;
            local_68 = 0;
            local_70 = 0;
            local_78 = local_48;
            FUN_1403ae0e0(param_1,local_60,&local_88);
            if (local_70 != 0) {
                (**(code **)(*(longlong *)(local_70 + -0x10) + 8))(local_70 + -0x10);
            }
            lVar1 = local_60[0];
            puVar3 = (undefined4 *)(*(longlong *)(param_2 + 8) + lVar6);
            *(undefined4 *)(local_60[0] + 0x28) = *puVar3;
            *(undefined4 *)(local_60[0] + 0x2c) = puVar3[1];
            *(undefined4 *)(local_60[0] + 0x30) = puVar3[2];
            *(undefined4 *)(local_60[0] + 0x34) = puVar3[3];
            uVar8 = (ulonglong)*(byte *)(lVar6 + 0x10 + *(longlong *)(param_2 + 8));
            if (*(ulonglong *)(local_60[0] + 0x40) < uVar8 || *(ulonglong *)(local_60[0] + 0x40) == uVar8)
            {
                lVar2 = FUN_14018db00(*(undefined8 *)(local_60[0] + 0x38),uVar8,0x10);
                if (*(longlong *)(lVar1 + 0x38) != lVar2) {
                    FUN_1407db590(lVar2,*(longlong *)(lVar1 + 0x38),*(longlong *)(lVar1 + 0x40) << 4);
                    lVar4 = *(longlong *)(lVar1 + 0x38);
                    if (lVar4 != 0) {
                        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                    *(longlong *)(lVar1 + 0x38) = lVar2;
                }
            }
            *(ulonglong *)(lVar1 + 0x40) = uVar8;
            uVar8 = 0;
            lVar2 = *(longlong *)(param_2 + 8) + lVar6;
            if (*(char *)(lVar2 + 0x10) != '\0') {
                do {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                    lVar4 = uVar8 * 0x10;
                    uVar7 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar7;
                    puVar3 = (undefined4 *)(*(longlong *)(lVar1 + 0x38) + lVar4);
                    *puVar3 = *(undefined4 *)(lVar2 + lVar4);
                    puVar3[1] = *(undefined4 *)(lVar2 + 4 + lVar4);
                    puVar3[2] = *(undefined4 *)(lVar2 + 8 + lVar4);
                    puVar3[3] = *(undefined4 *)(lVar2 + 0xc + lVar4);
                    lVar2 = *(longlong *)(param_2 + 8) + lVar6;
                } while (uVar7 < *(byte *)(lVar2 + 0x10));
            }
            uVar7 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar7;
        } while (uVar7 < *param_2);
    }
    FUN_140030c70(local_a8,local_c8);
    lVar6 = *(longlong *)(DAT_140c65898 + 0x7340);
    if (*(longlong *)(lVar6 + 0x17c0) == 0) {
        FUN_140433a70(lVar6 + 0x17b0,local_a8);
    }
    else {
        FUN_140433f70(lVar6 + 0x17b0,*(undefined8 *)(local_a0 + 0x10),local_a0);
    }
    FUN_1400a8020(lVar6 + 0x12c8);
    FUN_140008410(local_a8);
    FUN_14018b900(local_a0,0);
    FUN_140008410(local_c8);
    FUN_14018b900(local_c0,0);
    return;
}



void FUN_1403abab0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    param_2[1] = 0;
    lVar2 = FUN_14018dbc0(*param_2,*(undefined8 *)(param_1 + 0x10),8);
    if (*param_2 != lVar2) {
        FUN_1407db590(lVar2,*param_2,param_2[1] << 3);
        lVar3 = *param_2;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_2 = lVar2;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar2 != *(longlong *)(param_1 + 8)) {
        do {
            FUN_140033260(param_2,lVar2 + 0x20);
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
        } while (lVar2 != *(longlong *)(param_1 + 8));
    }
    return;
}



longlong FUN_1403abb90(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x20) < param_2) ||
            ((*(int *)(lVar2 + 0x20) <= param_2 && (*(uint *)(lVar2 + 0x24) < param_3)))) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) <= param_2)) &&
        ((*(int *)(lVar3 + 0x20) < param_2 || (*(uint *)(lVar3 + 0x24) <= param_3)))) {
        local_res8 = lVar3;
    }
    if (local_res8 != lVar1) {
        return local_res8 + 0x28;
    }
    return 0;
}



void FUN_1403abc00(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined local_28 [8];
    longlong local_20;

    lVar5 = FUN_1403abb90();
    if (lVar5 != 0) {
        FUN_1403aafe0(lVar5,param_4);
        return;
    }
    lVar5 = FUN_14022f2c0(param_2 & 0xffffffff);
    if (lVar5 == 0) {
        return;
    }
    iVar2 = *(int *)(lVar5 + 8);
    if (iVar2 == 0) {
        lVar5 = *(longlong *)(param_4 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_4 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_4 + 0x10),puVar3,L"eValueType",0);
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar5 = *(longlong *)(param_4 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_4 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        lVar5 = *(longlong *)(param_4 + 0x10);
        lVar7 = FUN_14018f0e0(local_28,L"nValue");
        if (*(longlong *)(lVar7 + 8) != 0) {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            goto LAB_1403abe4a;
        }
        LAB_1403abe25:
        *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 8) = 0;
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        LAB_1403abe52:
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = 0x3ff0000000000000;
        *(undefined4 *)(puVar3 + 1) = 3;
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar5,0xfffffffd);
        FUN_14005ea50(lVar5,uVar8,*(longlong *)(lVar5 + 0x10) + -0x20,
                      *(longlong *)(lVar5 + 0x10) + -0x10);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + -0x20;
    }
    else {
        if (iVar2 != 1) {
            if (iVar2 != 2) goto LAB_1403abeb2;
            lVar5 = *(longlong *)(param_4 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_4 + 8));
            puVar3 = *(undefined8 **)(lVar5 + 0x10);
            *puVar3 = *puVar6;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            FUN_1400f06f0(*(undefined8 *)(param_4 + 0x10),puVar3,L"eValueType",2);
            plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
            lVar5 = *(longlong *)(param_4 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_4 + 8));
            puVar3 = *(undefined8 **)(lVar5 + 0x10);
            *puVar3 = *puVar6;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
            lVar5 = *(longlong *)(param_4 + 0x10);
            lVar7 = FUN_14018f0e0(local_28,L"nValue");
            if (*(longlong *)(lVar7 + 8) == 0) goto LAB_1403abe25;
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            LAB_1403abe4a:
            FUN_140058710(lVar5);
            goto LAB_1403abe52;
        }
        lVar5 = *(longlong *)(param_4 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_4 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_4 + 0x10),puVar3,L"eValueType",1);
        plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar5 = *(longlong *)(param_4 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                              *(undefined4 *)(param_4 + 8));
        puVar3 = *(undefined8 **)(lVar5 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_4 + 0x10),puVar3,L"nValue",0);
    }
    plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    LAB_1403abeb2:
    lVar5 = *(longlong *)(param_4 + 0x10);
    if (*(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar5);
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x10);
    uVar8 = FUN_14005c1b0(lVar5,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar8;
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar5);
    FUN_1400fb2a0(param_4,L"tModifiers",uVar4);
    FUN_1400579e0(lVar5);
    return;
}



undefined8 FUN_1403abf30(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    float extraout_XMM0_Da;

    lVar2 = FUN_14022f2c0();
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_4 + 0x10) + 8) = 0;
        goto LAB_1403abf9c;
    }
    iVar1 = *(int *)(lVar2 + 8);
    if (iVar1 == 0) {
        LAB_1403abf77:
        pdVar3 = *(double **)(param_4 + 0x10);
        FUN_1403ac060(param_1,param_2,param_3);
        *pdVar3 = (double)extraout_XMM0_Da;
    }
    else {
        if (iVar1 != 1) {
            if (iVar1 != 2) {
                return 1;
            }
            goto LAB_1403abf77;
        }
        pdVar3 = *(double **)(param_4 + 0x10);
        iVar1 = FUN_1403abfe0(param_1,param_2,param_3);
        *pdVar3 = (double)iVar1;
    }
    *(undefined4 *)(pdVar3 + 1) = 3;
    LAB_1403abf9c:
    *(longlong *)(param_4 + 0x10) = *(longlong *)(param_4 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_1403abfe0(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x20) < param_2) ||
            ((*(int *)(lVar2 + 0x20) <= param_2 && (*(uint *)(lVar2 + 0x24) < param_3)))) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) <= param_2)) &&
        ((*(int *)(lVar3 + 0x20) < param_2 || (*(uint *)(lVar3 + 0x24) <= param_3)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        return *(undefined4 *)(local_res8 + 0x34);
    }
    return 0;
}



undefined4 FUN_1403ac060(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 8);
    uVar4 = 0x3f800000;
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x20) < param_2) ||
            ((*(int *)(lVar2 + 0x20) <= param_2 && (*(uint *)(lVar2 + 0x24) < param_3)))) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) <= param_2)) &&
        ((*(int *)(lVar3 + 0x20) < param_2 || (*(uint *)(lVar3 + 0x24) <= param_3)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) &&
        ((*(int *)(local_res8 + 0x30) == 0 || (*(int *)(local_res8 + 0x30) == 2)))) {
        uVar4 = *(undefined4 *)(local_res8 + 0x34);
    }
    return uVar4;
}



ulonglong FUN_1403ac0e0(longlong param_1,undefined8 param_2,uint param_3,ulonglong param_4,
                        ulonglong param_5)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    int *piVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    float fVar9;

    uVar4 = param_5;
    if ((param_5 != 0) && (param_5 < param_4)) {
        lVar6 = *(longlong *)(param_1 + 8);
        lVar7 = lVar6;
        lVar8 = *(longlong *)(lVar6 + 8);
        while (lVar8 != 0) {
            if ((*(int *)(lVar8 + 0x20) < 0x27) ||
                ((*(int *)(lVar8 + 0x20) < 0x28 && (*(uint *)(lVar8 + 0x24) < param_3)))) {
                lVar8 = *(longlong *)(lVar8 + 0x18);
            }
            else {
                lVar7 = lVar8;
                lVar8 = *(longlong *)(lVar8 + 0x10);
            }
        }
        param_5 = lVar6;
        if (((lVar7 != lVar6) && (*(int *)(lVar7 + 0x20) < 0x28)) &&
            ((*(int *)(lVar7 + 0x20) < 0x27 || (*(uint *)(lVar7 + 0x24) <= param_3)))) {
            param_5 = lVar7;
        }
        if (param_5 != lVar6) {
            iVar1 = *(int *)(param_5 + 0x30);
            uVar3 = 0;
            if (iVar1 == 0) {
                uVar2 = *(ulonglong *)(param_5 + 0x40);
                lVar6 = param_4 - uVar4;
                uVar4 = uVar3;
                if (3 < (longlong)uVar2) {
                    piVar5 = (int *)(*(longlong *)(param_5 + 0x38) + 0x10);
                    lVar8 = (uVar2 - 4 >> 2) + 1;
                    uVar4 = lVar8 * 4;
                    do {
                        if (piVar5[-4] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[-1];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (*piVar5 == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[3];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (piVar5[4] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[7];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (piVar5[8] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[0xb];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        piVar5 = piVar5 + 0x10;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
                if (uVar4 < uVar2) {
                    piVar5 = (int *)(uVar4 * 0x10 + *(longlong *)(param_5 + 0x38));
                    lVar8 = uVar2 - uVar4;
                    do {
                        if (*piVar5 == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[3];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        piVar5 = piVar5 + 4;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
            }
            else if (iVar1 == 1) {
                lVar6 = *(longlong *)(param_5 + 0x40);
                if (lVar6 != 0) {
                    piVar5 = *(int **)(param_5 + 0x38);
                    do {
                        if (*piVar5 == 10) {
                            uVar3 = uVar3 + (uint)piVar5[3];
                        }
                        piVar5 = piVar5 + 4;
                        lVar6 = lVar6 + -1;
                    } while (lVar6 != 0);
                }
            }
            else if (iVar1 == 2) {
                uVar2 = *(ulonglong *)(param_5 + 0x40);
                lVar6 = param_4 - uVar4;
                uVar4 = uVar3;
                if (3 < (longlong)uVar2) {
                    piVar5 = (int *)(*(longlong *)(param_5 + 0x38) + 0x10);
                    lVar8 = (uVar2 - 4 >> 2) + 1;
                    uVar4 = lVar8 * 4;
                    do {
                        if (piVar5[-4] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[-1];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (*piVar5 == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[3];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (piVar5[4] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[7];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        if (piVar5[8] == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[0xb];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        piVar5 = piVar5 + 0x10;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
                if (uVar4 < uVar2) {
                    piVar5 = (int *)(uVar4 * 0x10 + *(longlong *)(param_5 + 0x38));
                    lVar8 = uVar2 - uVar4;
                    do {
                        if (*piVar5 == 10) {
                            fVar9 = (float)lVar6;
                            if (lVar6 < 0) {
                                fVar9 = fVar9 + 1.844674e+19;
                            }
                            fVar9 = fVar9 * (float)piVar5[3];
                            lVar7 = 0;
                            if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                                lVar7 = -0x8000000000000000;
                            }
                            uVar3 = uVar3 + (longlong)fVar9 + lVar7;
                        }
                        piVar5 = piVar5 + 4;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
            }
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_1403ac530(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c659c8 + 0x10);
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



undefined8 FUN_1403ac590(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    uint uVar4;

    uVar3 = 0;
    if (((param_2 & 1) != 0) && (*(uint *)(param_1 + 4) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x10);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 4));
    }
    if (((param_2 & 2) != 0) && (*(uint *)(param_1 + 0x1c) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x28);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x1c));
    }
    if (((((param_2 & 6) != 0) && (lVar1 = FUN_1400b5df0(), lVar1 != 0)) &&
         (*(uint *)(lVar1 + 0x1c8) != 0)) &&
        (*(short *)(param_1 + 0xa8 + (ulonglong)*(uint *)(lVar1 + 0x1c8) * 2) != 0)) {
        return 1;
    }
    if (((param_2 & 4) != 0) && (*(uint *)(param_1 + 0x34) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x40);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x34));
    }
    if (((param_2 >> 10 & 1) != 0) && (*(uint *)(param_1 + 0x4c) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x58);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x4c));
    }
    if (((param_2 & 0x20) != 0) && (*(uint *)(param_1 + 100) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x70);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 100));
    }
    if (((param_2 >> 8 & 1) != 0) && (*(uint *)(param_1 + 0x7c) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0x88);
        uVar4 = uVar3;
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar4 = uVar4 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x7c));
    }
    if (((param_2 >> 9 & 1) != 0) && (*(uint *)(param_1 + 0x94) != 0)) {
        plVar2 = *(longlong **)(param_1 + 0xa0);
        do {
            if ((*plVar2 != 0) && (**(int **)(*plVar2 + 0x40) == param_3)) {
                return 1;
            }
            uVar3 = uVar3 + 1;
            plVar2 = plVar2 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x94));
    }
    return 0;
}



undefined8 FUN_1403ac780(longlong param_1,int *param_2)

{
    int iVar1;

    iVar1 = *param_2;
    if (iVar1 == 0) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 4)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if (iVar1 == 1) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 0x1c)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if (iVar1 == 2) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 0x34)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if (iVar1 == 10) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 0x4c)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if (iVar1 == 5) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 100)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if (iVar1 == 8) {
        if ((uint)param_2[1] < *(uint *)(param_1 + 0x7c)) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uint)param_2[1] * 8);
        }
    }
    else if ((iVar1 == 9) && ((uint)param_2[1] < *(uint *)(param_1 + 0x94))) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uint)param_2[1] * 8);
    }
    return 0;
}



int FUN_1403ac840(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    int iVar8;

    iVar6 = 0;
    iVar5 = 0;
    if (((param_2 & 1) != 0) && (*(uint *)(param_1 + 4) != 0)) {
        plVar4 = *(longlong **)(param_1 + 0x10);
        uVar7 = (ulonglong)*(uint *)(param_1 + 4);
        do {
            lVar1 = *plVar4;
            if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                iVar8 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar8 = *(int *)(lVar1 + 0x78);
                }
                iVar5 = iVar5 + iVar8;
            }
            plVar4 = plVar4 + 1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    if ((param_2 & 2) != 0) {
        iVar8 = 0;
        if (*(uint *)(param_1 + 0x1c) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x28);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x1c);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar2 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar2 = *(int *)(lVar1 + 0x78);
                    }
                    iVar8 = iVar8 + iVar2;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar8;
    }
    if ((param_2 & 0x42) != 0) {
        lVar1 = FUN_1400b5df0(DAT_140c658f0,param_3);
        if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x1c8) == 0)) {
            uVar3 = 0;
        }
        else {
            uVar3 = (uint)*(ushort *)(param_1 + 0xa8 + (ulonglong)*(uint *)(lVar1 + 0x1c8) * 2);
        }
        iVar5 = iVar5 + uVar3;
    }
    if ((param_2 & 4) != 0) {
        iVar8 = 0;
        if (*(uint *)(param_1 + 0x34) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x40);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x34);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar2 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar2 = *(int *)(lVar1 + 0x78);
                    }
                    iVar8 = iVar8 + iVar2;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar8;
    }
    if ((param_2 >> 10 & 1) != 0) {
        iVar8 = 0;
        if (*(uint *)(param_1 + 0x4c) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x58);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar2 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar2 = *(int *)(lVar1 + 0x78);
                    }
                    iVar8 = iVar8 + iVar2;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar8;
    }
    if ((param_2 & 0x20) != 0) {
        iVar8 = 0;
        if (*(uint *)(param_1 + 100) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x70);
            uVar7 = (ulonglong)*(uint *)(param_1 + 100);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar2 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar2 = *(int *)(lVar1 + 0x78);
                    }
                    iVar8 = iVar8 + iVar2;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar8;
    }
    if ((param_2 >> 8 & 1) != 0) {
        iVar8 = 0;
        if (*(uint *)(param_1 + 0x7c) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x88);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x7c);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar2 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar2 = *(int *)(lVar1 + 0x78);
                    }
                    iVar8 = iVar8 + iVar2;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar8;
    }
    if ((param_2 >> 9 & 1) != 0) {
        if (*(uint *)(param_1 + 0x94) != 0) {
            plVar4 = *(longlong **)(param_1 + 0xa0);
            uVar7 = (ulonglong)*(uint *)(param_1 + 0x94);
            do {
                lVar1 = *plVar4;
                if ((lVar1 != 0) && (**(int **)(lVar1 + 0x40) == param_3)) {
                    iVar8 = 1;
                    if (*(int *)(lVar1 + 0x78) != 0) {
                        iVar8 = *(int *)(lVar1 + 0x78);
                    }
                    iVar6 = iVar6 + iVar8;
                }
                plVar4 = plVar4 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar5 = iVar5 + iVar6;
    }
    return iVar5;
}



undefined8 FUN_1403acab0(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    iVar1 = *param_2;
    if (iVar1 == 0) {
        uVar4 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 4) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x10);
    }
    else if (iVar1 == 1) {
        uVar4 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x1c) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x28);
    }
    else if (iVar1 == 2) {
        uVar4 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x34) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x40);
    }
    else if (iVar1 == 10) {
        uVar4 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 0x4c) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x58);
    }
    else if (iVar1 == 5) {
        uVar4 = (ulonglong)(uint)param_2[1];
        if (*(uint *)(param_1 + 100) <= (uint)param_2[1]) {
            return 0;
        }
        lVar2 = *(longlong *)(param_1 + 0x70);
    }
    else {
        if ((iVar1 == 6) && ((uint)param_2[1] < 0x200)) {
            lVar2 = FUN_140244f40(param_2[1]);
            if (lVar2 == 0) {
                return 0;
            }
            uVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar2 + 4),0);
            return uVar3;
        }
        if (iVar1 == 8) {
            uVar4 = (ulonglong)(uint)param_2[1];
            if (*(uint *)(param_1 + 0x7c) <= (uint)param_2[1]) {
                return 0;
            }
            lVar2 = *(longlong *)(param_1 + 0x88);
        }
        else {
            if (iVar1 != 9) {
                return 0;
            }
            uVar4 = (ulonglong)(uint)param_2[1];
            if (*(uint *)(param_1 + 0x94) <= (uint)param_2[1]) {
                return 0;
            }
            lVar2 = *(longlong *)(param_1 + 0xa0);
        }
    }
    lVar2 = *(longlong *)(lVar2 + uVar4 * 8);
    if (lVar2 == 0) {
        return 0;
    }
    return *(undefined8 *)(lVar2 + 0x40);
}



longlong * FUN_1403acbb0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            if ((plVar2 != (longlong *)0x0) &&
                (lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2), lVar1 == param_2)) {
                return plVar2;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 4));
    }
    plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x18,param_2);
    if ((((plVar2 == (longlong *)0x0) &&
          (plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x30,param_2), plVar2 == (longlong *)0x0)) &&
         (plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x48,param_2), plVar2 == (longlong *)0x0)) &&
        ((plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x60,param_2), plVar2 == (longlong *)0x0 &&
                                                                      (plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x78,param_2), plVar2 == (longlong *)0x0)))) {
        plVar2 = (longlong *)FUN_1403ae860(param_1 + 0x90,param_2);
    }
    return plVar2;
}



void FUN_1403acc80(longlong param_1,longlong param_2,undefined4 *param_3)

{
    byte bVar1;
    longlong lVar2;
    byte bVar3;
    longlong *plVar4;
    ulonglong uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;

    lVar2 = *(longlong *)(param_2 + 0x40);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x154) & 0x100) == 0)) {
        return;
    }
    uVar9 = 0;
    bVar1 = *(byte *)(lVar2 + 0x1a0);
    *param_3 = 0;
    uVar8 = 0x60;
    uVar10 = 0;
    uVar6 = 0x11;
    do {
        if ((*(uint *)(param_1 + 4) <= uVar6) ||
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 8), lVar2 == 0)) {
            param_3[1] = uVar6;
            return;
        }
        lVar2 = *(longlong *)(lVar2 + 0x40);
        uVar7 = *(uint *)(lVar2 + 0x154) & 0x100;
        if (uVar7 == 0) {
            bVar3 = 0;
        }
        else {
            bVar3 = *(byte *)(lVar2 + 0x1a0);
        }
        if (bVar3 < uVar8) {
            if (uVar7 == 0) {
                bVar3 = 0;
            }
            else {
                bVar3 = *(byte *)(lVar2 + 0x1a0);
            }
            uVar8 = (uint)bVar3;
            uVar10 = uVar6;
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < 0x15);
    if (bVar1 < uVar8) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x24);
        if (*(uint *)(param_1 + 0x24) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x28);
            do {
                if (*plVar4 == 0) {
                    uVar9 = uVar9 + 1;
                }
                plVar4 = plVar4 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (uVar9 < uVar8 - bVar1) {
            return;
        }
    }
    param_3[1] = uVar10;
    return;
}



longlong FUN_1403acd90(undefined8 param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    bool bVar2;

    if (param_2 == 0) {
        return 0;
    }
    if (param_3 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == param_3) {
            bVar2 = true;
        }
        else {
            bVar2 = *(longlong *)(DAT_140c65898 + 0x6490) == param_3;
        }
        lVar1 = 0;
        if (bVar2) {
            lVar1 = DAT_140c65898;
        }
        if ((lVar1 != 0) && (lVar1 = FUN_1405a5b90(), lVar1 != 0)) {
            return lVar1;
        }
    }
    lVar1 = FUN_1407a0fd0(param_1);
    return lVar1;
}



ulonglong FUN_1403ace00(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int **param_4,
                        undefined8 param_5,int param_6)

{
    undefined8 uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int *piVar7;
    int *piVar8;
    ulonglong uVar9;
    undefined8 local_res8;

    uVar1 = DAT_140c65b70;
    local_res8 = param_1;
    uVar3 = FUN_1403ae8c0(DAT_140c65b70);
    iVar2 = (int)uVar3;
    uVar9 = uVar3 & 0xffffffff;
    if ((iVar2 == 0) || (iVar2 == 0x13d)) {
        if (((param_6 != 0) && (iVar2 == 0x13d)) &&
            ((param_4 == (int **)0x0 || (*(int *)((longlong)param_4 + 0x14) == 0)))) {
            return 0x13d;
        }
        lVar4 = FUN_1403d90d0(DAT_140c65898,param_2[7]);
        lVar5 = FUN_1403d90d0(DAT_140c65898,param_2[9]);
        if (lVar4 == 0) {
            uVar3 = 0x1e;
        }
        else {
            lVar6 = FUN_1403acd90(uVar1,*param_2);
            if (lVar6 == 0) {
                uVar3 = 4;
            }
            else {
                piVar8 = (int *)0x0;
                iVar2 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x168);
                if ((iVar2 == 0) ||
                    (((*(longlong *)(lVar6 + 0x40) != 0 &&
                       ((*(byte *)(*(longlong *)(lVar6 + 0x70) + 0x108) & 2) != 0)) ||
                      (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar4,iVar2,lVar5,0,0),
                              iVar2 != 0)))) {
                    iVar2 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x16c);
                    uVar3 = uVar9;
                    if (((iVar2 != 0) && (lVar5 != 0)) &&
                        (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar5,iVar2,lVar4,0,0),
                                iVar2 == 0)) {
                        if (param_4 != (int **)0x0) {
                            local_res8 = CONCAT44(local_res8._4_4_,0x119);
                            *(undefined4 *)(param_4 + 2) = 0x119;
                            *(undefined4 *)(param_4 + 3) = 1;
                            if (param_4[1] != (int *)0x0) {
                                piVar7 = *param_4;
                                do {
                                    if (*piVar7 == 0x119) goto LAB_1403acff7;
                                    if (0x119 < *piVar7) break;
                                    piVar8 = (int *)((longlong)piVar8 + 1);
                                    piVar7 = piVar7 + 1;
                                } while (piVar8 < param_4[1]);
                            }
                            FUN_1401c2e70(param_4,piVar8,&local_res8);
                        }
                        LAB_1403acff7:
                        uVar3 = 0x119;
                    }
                }
                else {
                    if (param_4 != (int **)0x0) {
                        local_res8 = CONCAT44(local_res8._4_4_,0x97);
                        *(undefined4 *)(param_4 + 2) = 0x97;
                        *(undefined4 *)(param_4 + 3) = 1;
                        if (param_4[1] != (int *)0x0) {
                            piVar7 = *param_4;
                            do {
                                if (*piVar7 == 0x97) goto LAB_1403acf5e;
                                if (0x97 < *piVar7) break;
                                piVar8 = (int *)((longlong)piVar8 + 1);
                                piVar7 = piVar7 + 1;
                            } while (piVar8 < param_4[1]);
                        }
                        FUN_1401c2e70(param_4,piVar8,&local_res8);
                    }
                    LAB_1403acf5e:
                    uVar3 = 0x97;
                }
            }
        }
    }
    return uVar3;
}



// WARNING: Removing unreachable block (ram,0x0001403ad09e)
// WARNING: Removing unreachable block (ram,0x0001403ad0a6)
// WARNING: Removing unreachable block (ram,0x0001403ad0ab)
// WARNING: Removing unreachable block (ram,0x0001403ad0b4)
// WARNING: Removing unreachable block (ram,0x0001403ad0b7)
// WARNING: Removing unreachable block (ram,0x0001403ad0bf)
// WARNING: Removing unreachable block (ram,0x0001403ad0d4)

undefined4 FUN_1403ad020(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
    if (param_2 == (undefined4 *)0x0) {
        return 6;
    }
    if (param_3 == (undefined4 *)0x0) {
        param_3 = param_2 + 2;
    }
    if ((param_2[0x53] & 0x100) == 0) {
        FUN_1404aa7d0(param_1,param_2[0x51],*param_2,param_3[1]);
        return 0x48;
    }
    return 0x48;
}



undefined8
FUN_1403ad100(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,int param_5,
              int param_6)

{
    byte bVar1;
    int iVar2;
    uint *puVar3;
    int *piVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 uVar8;
    uint uVar9;
    uint uVar10;
    undefined4 *puVar11;
    undefined local_res10 [8];

    puVar3 = (uint *)(**(code **)(*param_2 + 0x20))();
    uVar9 = *param_4;
    if ((((((*puVar3 == uVar9) && (puVar3[1] == param_4[1])) || (299 < (int)uVar9)) ||
          (param_4[1] == 0xffffffff)) || ((uVar9 == 0 && (0x1e < param_4[1])))) ||
        ((param_3 != (longlong *)0x0 &&
          ((puVar3 = (uint *)(**(code **)(*param_3 + 0x20))(param_3,local_res10), *puVar3 != *param_4 ||
                                                                                  (puVar3[1] != param_4[1])))))) {
        return 1;
    }
    if (((*(longlong *)(param_1 + 0x6490) != 0) &&
         (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x2ac) != 0)) &&
        ((piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res10), *piVar4 == 0 ||
                                                                               (*param_4 == 0)))) {
        return 0x3f;
    }
    piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
    if (((((*piVar4 == 2) ||
           (((piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res10), *piVar4 == 0 &&
                                                                                   (piVar4[1] - 0x15U < 10)) || (*param_4 == 2)))) ||
          ((*param_4 == 0 && (param_4[1] - 0x15 < 10)))) && (param_5 == 0)) ||
        (((piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2,local_res10), *piVar4 == 10 ||
                                                                                (*param_4 == 10)) && (param_6 == 0)))) {
        return 2;
    }
    if ((*param_4 == 1) && (*(uint *)(param_1 + 0xbc) <= param_4[1])) {
        return 1;
    }
    for (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar5 != 0;
         lVar5 = *(longlong *)(lVar5 + 0x88)) {
        if ((((*(int *)(lVar5 + 4) == 3) && (*(int *)(lVar5 + 0xc) == 0x309)) &&
             (*(longlong *)(lVar5 + 0x20) != 0)) && (iVar2 = FUN_140195f70(lVar5 + 0x10), iVar2 != 0)) {
            return 2;
        }
    }
    if (((*param_4 & 0xfffffff6) == 0) && (*param_4 != 1)) {
        puVar3 = (uint *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
        if (((*puVar3 & 0xfffffff6) == 0) && (*puVar3 != 1)) goto LAB_1403ad3ea;
        piVar4 = (int *)param_2[8];
        if (((*(byte *)(piVar4 + 0x54) & 2) == 0) ||
            (((param_3 != (longlong *)0x0 && (*(int *)param_3[8] == *piVar4)) ||
              (iVar2 = FUN_1403ac840(param_1 + 0xa0,1,*piVar4), iVar2 == 0)))) {
            lVar5 = param_2[9];
            lVar7 = lVar5;
            if (lVar5 == 0) {
                lVar7 = param_2[8] + 8;
            }
            uVar9 = 0;
            if (lVar5 == 0) {
                lVar5 = param_2[8] + 8;
            }
            uVar10 = 8;
            if (*(uint *)(lVar5 + 0x130) < 8) {
                uVar10 = *(uint *)(lVar5 + 0x130);
            }
            if (uVar10 != 0) {
                bVar1 = *(byte *)(lVar7 + 0x134);
                puVar11 = (undefined4 *)((longlong)param_2 + 0xbc);
                do {
                    if ((bVar1 >> (uVar9 & 0x1f) & 1) != 0) {
                        if (uVar9 < 8) {
                            uVar8 = *puVar11;
                        }
                        else {
                            uVar8 = 0;
                        }
                        if (((param_3 == (longlong *)0x0) || (iVar2 = FUN_14056a260(param_3,uVar8), iVar2 == 0))
                            && (iVar2 = FUN_1403af9e0(param_1 + 0xa0), iVar2 != 0)) goto LAB_1403ad537;
                    }
                    uVar9 = uVar9 + 1;
                    puVar11 = puVar11 + 1;
                } while (uVar9 < uVar10);
            }
            goto LAB_1403ad3ea;
        }
        LAB_1403ad537:
        uVar6 = 0x1e;
    }
    else {
        LAB_1403ad3ea:
        uVar6 = FUN_1403aecd0(param_1,param_2,param_3,param_4);
        if ((int)uVar6 != 0) {
            return uVar6;
        }
        if (param_3 == (longlong *)0x0) {
            return uVar6;
        }
        if (((*param_4 & 0xfffffff6) != 0) || (*param_4 == 1)) {
            puVar3 = (uint *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
            if (((*puVar3 & 0xfffffff6) == 0) && (*puVar3 != 1)) {
                if ((((*(byte *)((int *)param_3[8] + 0x54) & 2) != 0) &&
                     (*(int *)param_3[8] != *(int *)param_2[8])) &&
                    (iVar2 = FUN_1403ac840(param_1 + 0xa0,1), iVar2 != 0)) goto LAB_1403ad537;
                lVar5 = param_3[9];
                lVar7 = lVar5;
                if (lVar5 == 0) {
                    lVar7 = param_3[8] + 8;
                }
                uVar9 = 0;
                if (lVar5 == 0) {
                    lVar5 = param_3[8] + 8;
                }
                uVar10 = 8;
                if (*(uint *)(lVar5 + 0x130) < 8) {
                    uVar10 = *(uint *)(lVar5 + 0x130);
                }
                if (uVar10 != 0) {
                    bVar1 = *(byte *)(lVar7 + 0x134);
                    puVar11 = (undefined4 *)((longlong)param_3 + 0xbc);
                    do {
                        if ((bVar1 >> (uVar9 & 0x1f) & 1) != 0) {
                            if (uVar9 < 8) {
                                uVar8 = *puVar11;
                            }
                            else {
                                uVar8 = 0;
                            }
                            iVar2 = FUN_14056a260(param_2,uVar8);
                            if ((iVar2 == 0) && (iVar2 = FUN_1403af9e0(param_1 + 0xa0), iVar2 != 0))
                                goto LAB_1403ad537;
                        }
                        uVar9 = uVar9 + 1;
                        puVar11 = puVar11 + 1;
                    } while (uVar9 < uVar10);
                }
            }
        }
        uVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_res10);
        uVar6 = FUN_1403aecd0(param_1,param_3,param_2,uVar6);
    }
    return uVar6;
}



undefined4 FUN_1403ad540(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
    int iVar1;

    if (param_3 != 0) {
        if ((*(longlong *)(param_3 + 0x18) != 0) && (iVar1 = FUN_140466b90(param_2,param_3), iVar1 == 0)
                ) {
            return 0xb5;
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x110) & 0x10) == 0) {
            iVar1 = FUN_14045a950(param_2,*(undefined4 *)(param_3 + 8));
            if ((param_4 == 0) && (iVar1 != 2)) {
                if (iVar1 == 0) {
                    if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x110) & 1) == 0) {
                        return 99;
                    }
                }
                else if ((iVar1 == 1) &&
                         ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x10c) & 0x4000000) != 0)) {
                    return 99;
                }
            }
            else if ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x10c) & 0x80000000) == 0) {
                return 99;
            }
        }
    }
    return 0;
}



undefined8 FUN_1403ad600(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    longlong *plVar4;

    if (param_1 != 0) {
        uVar3 = 0;
        plVar1 = (longlong *)(param_1 + 0x2d8);
        plVar4 = (longlong *)(DAT_140c65a08 + 0x28);
        do {
            if (*plVar1 != 0) {
                if ((int)uVar3 < 0x1c) {
                    lVar2 = *plVar4;
                }
                else {
                    lVar2 = 0;
                }
                if ((*(byte *)(lVar2 + 0x10) & 4) != 0) {
                    return 0;
                }
            }
            uVar3 = uVar3 + 1;
            plVar4 = plVar4 + 1;
            plVar1 = plVar1 + 2;
        } while (uVar3 < 0x1c);
        if ((*(int *)(param_1 + 0x250) == 0) &&
            ((lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0)), lVar2 == 0 ||
                                                                                    (*(int *)(lVar2 + 0x80) != 9)))) {
            return 1;
        }
    }
    return 0;
}



bool FUN_1403ad690(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   longlong param_5_00,longlong param_6,undefined8 param_7,undefined8 param_8,
                   float param_5)

{
    bool bVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if ((param_5_00 == 0) || (param_6 == 0)) {
        bVar1 = false;
    }
    else {
        lVar2 = *(longlong *)(param_5_00 + 0xd08);
        fVar7 = 0.0;
        if (lVar2 == 0) {
            lVar2 = FUN_14022d500(*(undefined4 *)(param_5_00 + 0xd8));
            fVar3 = fVar7;
            if (lVar2 != 0) {
                fVar3 = *(float *)(lVar2 + 0x28);
            }
        }
        else {
            fVar3 = (float)FUN_14047a940();
            fVar3 = fVar3 * *(float *)(lVar2 + 0x8c);
        }
        lVar2 = *(longlong *)(param_6 + 0xd08);
        if (lVar2 == 0) {
            lVar2 = FUN_14022d500(*(undefined4 *)(param_6 + 0xd8));
            fVar4 = fVar7;
            if (lVar2 != 0) {
                fVar4 = *(float *)(lVar2 + 0x28);
            }
        }
        else {
            fVar4 = (float)FUN_14047a940(param_6);
            fVar4 = fVar4 * *(float *)(lVar2 + 0x8c);
        }
        fVar5 = *(float *)(param_6 + 0x11e0) - *(float *)(param_5_00 + 0x11e0);
        fVar6 = (*(float *)(param_6 + 0x11e4) - *(float *)(param_6 + 0x1324)) -
                (*(float *)(param_5_00 + 0x11e4) - *(float *)(param_5_00 + 0x1324));
        fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0);
        if (fVar7 < param_3) {
            fVar6 = (fVar5 - fVar4) - fVar3;
            if (fVar6 < fVar7) {
                fVar6 = fVar7;
            }
            fVar8 = param_3;
            if ((param_5 != fVar7) && (fVar8 = fVar7, param_5 < param_3)) {
                fVar8 = param_3 - param_5;
            }
            if (fVar6 < fVar8) {
                return false;
            }
        }
        fVar3 = (fVar5 - fVar4) - fVar3;
        if (fVar3 < fVar7) {
            fVar3 = fVar7;
        }
        if ((param_5 != fVar7) && (param_4 != fVar7)) {
            param_4 = param_4 + param_5;
        }
        bVar1 = fVar3 <= param_4;
    }
    return bVar1;
}



int FUN_1403ad860(undefined8 param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    int *piVar2;

    if (param_2 != 0) {
        lVar1 = FUN_1403acd90();
        if (lVar1 != 0) {
            if ((param_3 != 0) && (*(undefined4 **)(param_3 + 0x18) != (undefined4 *)0x0)) {
                piVar2 = (int *)FUN_1407a1680(param_1,**(undefined4 **)(param_3 + 0x18),param_2);
                if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
                    return piVar2[8];
                }
            }
            return *(int *)(*(longlong *)(lVar1 + 0x70) + 0x6c);
        }
    }
    return 0;
}



float FUN_1403ad8f0(undefined8 param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    int *piVar2;

    if (param_2 != 0) {
        lVar1 = FUN_1403acd90();
        if (lVar1 != 0) {
            if ((param_3 != 0) && (*(undefined4 **)(param_3 + 0x18) != (undefined4 *)0x0)) {
                piVar2 = (int *)FUN_1407a1680(param_1,**(undefined4 **)(param_3 + 0x18),param_2);
                if ((piVar2 != (int *)0x0) && ((*piVar2 != 0 && ((float)piVar2[9] != 0.0)))) {
                    return (float)piVar2[9];
                }
            }
            return *(float *)(*(longlong *)(lVar1 + 0x70) + 0x70);
        }
    }
    return 0.0;
}



undefined8 FUN_1403ad990(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_1 == 0) {
        return 2;
    }
    if (param_2 == 0) {
        return 3;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((lVar1 != 0) &&
        (((*(int *)(param_1 + 8) == *(int *)(lVar1 + 8) && (*(longlong *)(DAT_140c65898 + 0x6718) != 0)
          ) || ((lVar1 != 0 &&
                 ((*(int *)(param_2 + 8) == *(int *)(lVar1 + 8) &&
                   (*(longlong *)(DAT_140c65898 + 0x6718) != 0)))))))) {
        return 4;
    }
    uVar2 = FUN_1403ada10(param_1,param_2);
    return uVar2;
}



undefined4 FUN_1403ada10(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    if (param_1 == 0) {
        return 2;
    }
    if (param_2 == 0) {
        return 3;
    }
    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (((((lVar2 != 0) && (*(int *)(lVar2 + 0x80) == 9)) ||
          ((lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0)), lVar2 != 0 &&
                                                                                  (*(int *)(lVar2 + 0x80) == 3)))) || (iVar1 = FUN_14047bdc0(param_2), iVar1 != 0)) ||
        ((lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0xc0)), lVar2 != 0 &&
                                                                                (*(int *)(lVar2 + 0x80) == 3)))) {
        return 7;
    }
    lVar2 = *(longlong *)(param_1 + 0xd08);
    fVar4 = *(float *)(param_1 + 0x11e0) - *(float *)(param_2 + 0x11e0);
    fVar5 = *(float *)(param_1 + 0x11e4) - *(float *)(param_2 + 0x11e4);
    fVar6 = 0.0;
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + 0.0);
    if (lVar2 == 0) {
        lVar2 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        fVar5 = fVar6;
        if (lVar2 != 0) {
            fVar5 = *(float *)(lVar2 + 0x28);
        }
    }
    else {
        fVar5 = (float)FUN_14047a940(param_1);
        fVar5 = fVar5 * *(float *)(lVar2 + 0x8c);
    }
    lVar2 = *(longlong *)(param_2 + 0xd08);
    if (lVar2 == 0) {
        lVar2 = FUN_14022d500(*(undefined4 *)(param_2 + 0xd8));
        fVar3 = fVar6;
        if (lVar2 != 0) {
            fVar3 = *(float *)(lVar2 + 0x28);
        }
    }
    else {
        fVar3 = (float)FUN_14047a940(param_2);
        fVar3 = fVar3 * *(float *)(lVar2 + 0x8c);
    }
    fVar5 = (fVar4 - fVar3) - fVar5;
    if ((fVar6 <= fVar5) && (6.0 < fVar5)) {
        return 8;
    }
    if ((*(int *)(param_1 + 0x2ac) != 0) || (*(int *)(param_2 + 0x2ac) != 0)) {
        return 10;
    }
    if ((*(int *)(param_1 + 0x250) == 0) && (*(int *)(param_2 + 0x250) == 0)) {
        return 0;
    }
    return 0xb;
}



undefined4
FUN_1403adc30(longlong param_1,int param_2,longlong param_3,longlong *param_4,undefined8 param_5)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (param_4 == (longlong *)0x0) {
        return 0xf;
    }
    iVar1 = (**(code **)(*param_4 + 0x68))(param_4,param_5,0);
    if (iVar1 == 0) {
        return 0x11;
    }
    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x20) != 0) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        uVar4 = uVar3;
        do {
            if (*(int *)((longlong)plVar2 + -0xc) == param_2) {
                if (*plVar2 == param_3) {
                    return 0xd;
                }
                uVar4 = (ulonglong)((int)uVar4 + 1);
            }
            uVar3 = uVar3 + 1;
            plVar2 = plVar2 + 10;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x20));
        if (7 < (uint)uVar4) {
            return 0x15;
        }
    }
    return 0;
}



undefined4
FUN_1403add00(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
              longlong param_5,undefined8 param_6,undefined8 param_7)

{
    int iVar1;
    undefined4 uVar2;

    if (param_4 == 0) {
        return 0x3a;
    }
    if (param_5 == 0) {
        return 0x3b;
    }
    iVar1 = FUN_14045e5e0();
    if (iVar1 != 0) {
        return 0x3c;
    }
    iVar1 = FUN_14045e5e0(param_5);
    if (iVar1 != 0) {
        return 0x3d;
    }
    iVar1 = FUN_1403ad690(0x40400000,param_2,0,param_3,param_4,param_5,param_6,param_7,0x40400000);
    if (iVar1 == 0) {
        return 0x11;
    }
    iVar1 = FUN_14045a950(param_4,*(undefined4 *)(param_5 + 8));
    uVar2 = 0;
    if (iVar1 < 1) {
        uVar2 = 0x3e;
    }
    return uVar2;
}



char ** FUN_1403addd0(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403ade2e;
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
    LAB_1403ade2e:
    ppcVar1 = (char **)FUN_1403aefb0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_1403aded0(longlong param_1,int *param_2)

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
    FUN_1403af0a0(param_1,local_res18,&local_res8);
    return lVar4;
}



char ** FUN_1403adfc0(longlong param_1,char **param_2,int *param_3)

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
            if ((*param_3 < *(int *)(pcVar5 + 0x20)) ||
                ((*param_3 <= *(int *)(pcVar5 + 0x20) && ((uint)param_3[1] < *(uint *)(pcVar5 + 0x24))))) {
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403ae0a9;
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
    if ((*param_3 <= *(int *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(int *)(pcVar3 + 0x20) || ((uint)param_3[1] <= *(uint *)(pcVar3 + 0x24))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403ae0a9:
    ppcVar1 = (char **)FUN_1403af200(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



char ** FUN_1403ae0e0(longlong param_1,char **param_2,int *param_3)

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
            if ((*param_3 < *(int *)(pcVar5 + 0x20)) ||
                ((*param_3 <= *(int *)(pcVar5 + 0x20) && ((uint)param_3[1] < *(uint *)(pcVar5 + 0x24))))) {
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403ae1c9;
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
    if ((*param_3 <= *(int *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(int *)(pcVar3 + 0x20) || ((uint)param_3[1] <= *(uint *)(pcVar3 + 0x24))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403ae1c9:
    ppcVar1 = (char **)FUN_1403af300(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_1403ae200(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a68c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403ae2c6. Too many branches
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



longlong * FUN_1403ae300(longlong param_1,longlong *param_2,char **param_3,int *param_4)

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
            LAB_1403ae35a:
            plVar4 = (longlong *)FUN_1403af510(param_1,local_18,param_4);
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
                        FUN_1403b4f00(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_1403af9a0(iVar1,param_4);
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
                plVar4 = (longlong *)FUN_1403af510(param_1,local_18,param_4);
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
            goto LAB_1403ae35a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403af420(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403af420();
    return param_2;
}



char ** FUN_1403ae510(longlong param_1,char **param_2,int *param_3)

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
            if ((*param_3 < *(int *)(pcVar5 + 0x20)) ||
                ((*param_3 <= *(int *)(pcVar5 + 0x20) && ((uint)param_3[1] < *(uint *)(pcVar5 + 0x24))))) {
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403ae5f9;
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
    if ((*param_3 <= *(int *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(int *)(pcVar3 + 0x20) || ((uint)param_3[1] <= *(uint *)(pcVar3 + 0x24))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1403ae5f9:
    ppcVar1 = (char **)FUN_1403af610(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong * FUN_1403ae630(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    char *pcVar1;
    char *pcVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar2 + 0x20) <= *param_4)) {
            LAB_1403ae68a:
            plVar3 = (longlong *)FUN_1403af840(param_1,local_18,param_4);
            *param_2 = *plVar3;
            return param_2;
        }
    }
    else {
        if (pcVar2 == pcVar1) {
            pcVar2 = *(char **)(pcVar1 + 0x18);
            if (*(uint *)(pcVar2 + 0x20) < *param_4) {
                if ((pcVar2 == pcVar1) || (*param_4 < *(uint *)(pcVar2 + 0x20))) {
                    lVar4 = FUN_14018b280(0x30);
                    if ((uint *)(lVar4 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar4 + 0x20) = *param_4;
                        *(uint *)(lVar4 + 0x24) = param_4[1];
                        *(uint *)(lVar4 + 0x28) = param_4[2];
                        *(uint *)(lVar4 + 0x2c) = param_4[3];
                    }
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
                    lVar4 = FUN_14018b280();
                    if ((uint *)(lVar4 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar4 + 0x20) = *param_4;
                        *(uint *)(lVar4 + 0x24) = param_4[1];
                        *(uint *)(lVar4 + 0x28) = param_4[2];
                        *(uint *)(lVar4 + 0x2c) = param_4[3];
                    }
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
            }
            else {
                plVar3 = (longlong *)FUN_1403af840(param_1,local_18,param_4);
                *param_2 = *plVar3;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar4 = *(longlong *)(pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(pcVar2 + 8);
                lVar5 = lVar4;
                if (pcVar2 == *(char **)(lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *)(lVar5 + 8);
                        bVar6 = lVar5 == *(longlong *)(lVar4 + 0x10);
                        lVar5 = lVar4;
                    } while (bVar6);
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar4 + 0x18); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
                    lVar4 = lVar5;
                }
            }
        }
        if ((*param_4 <= *(uint *)(lVar4 + 0x20)) || (*(uint *)(pcVar2 + 0x20) <= *param_4))
            goto LAB_1403ae68a;
        if (*(longlong *)(lVar4 + 0x18) == 0) {
            FUN_1403af720(param_1,param_2,0,lVar4,param_4);
            return param_2;
        }
    }
    FUN_1403af720();
    return param_2;
}



longlong * FUN_1403ae860(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            if ((plVar1 != (longlong *)0x0) &&
                (lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1), lVar2 == param_2)) {
                return plVar1;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 4));
    }
    return (longlong *)0x0;
}



ulonglong FUN_1403ae8c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,uint **param_4,
                        undefined8 param_5,undefined4 param_6)

{
    uint uVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    uint *puVar9;
    ulonglong uVar10;
    uint *puVar11;
    bool bVar12;
    uint local_res10 [2];
    undefined8 local_res18;
    uint *local_res20;

    puVar11 = (uint *)0x0;
    bVar2 = false;
    if ((param_4 == (uint **)0x0) || (*(int *)((longlong)param_4 + 0x14) == 0)) {
        bVar2 = true;
    }
    local_res18 = param_3;
    lVar5 = FUN_1403d90d0(DAT_140c65898,param_2[7]);
    if (lVar5 == 0) {
        if (param_4 != (uint **)0x0) {
            local_res10[0] = 0x1e;
            *(undefined4 *)(param_4 + 2) = 0x1e;
            *(undefined4 *)(param_4 + 3) = 1;
            if (param_4[1] != (uint *)0x0) {
                puVar9 = *param_4;
                do {
                    if (*puVar9 == 0x1e) {
                        return 0x1e;
                    }
                    if (0x1e < (int)*puVar9) break;
                    puVar11 = (uint *)((longlong)puVar11 + 1);
                    puVar9 = puVar9 + 1;
                } while (puVar11 < param_4[1]);
            }
            FUN_1401c2e70(param_4,puVar11,local_res10);
        }
        return 0x1e;
    }
    lVar6 = FUN_1403acd90(param_1,*param_2,lVar5);
    if (lVar6 == 0) {
        if (param_4 != (uint **)0x0) {
            local_res10[0] = 4;
            *(undefined4 *)(param_4 + 2) = 4;
            *(undefined4 *)(param_4 + 3) = 1;
            if (param_4[1] != (uint *)0x0) {
                puVar9 = *param_4;
                do {
                    if (*puVar9 == 4) {
                        return 4;
                    }
                    if (4 < (int)*puVar9) break;
                    puVar11 = (uint *)((longlong)puVar11 + 1);
                    puVar9 = puVar9 + 1;
                } while (puVar11 < param_4[1]);
            }
            FUN_1401c2e70(param_4,puVar11,local_res10);
        }
        return 4;
    }
    lVar7 = FUN_1403d90d0(DAT_140c65898,param_2[9]);
    if (*(longlong *)(DAT_140c65898 + 0x1e) == lVar5) {
        bVar12 = true;
    }
    else {
        bVar12 = *(longlong *)(DAT_140c65898 + 0x1924) == lVar5;
    }
    local_res20 = puVar11;
    if (bVar12) {
        local_res20 = DAT_140c65898;
    }
    uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x70) + 0x7c);
    if ((uVar3 < 9) && ((0x12aU >> (uVar3 & 0x1f) & 1) != 0)) {
        if ((*(int *)(*(longlong *)(lVar6 + 0x70) + 0x18) == 3) && (lVar7 == 0)) {
            lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar5 + 0x108));
            if (lVar8 != 0) goto LAB_1403aeb3a;
            if (param_4 != (uint **)0x0) {
                local_res10[0] = 0x5b;
                *(undefined4 *)(param_4 + 2) = 0x5b;
                *(undefined4 *)(param_4 + 3) = 1;
                if (param_4[1] != (uint *)0x0) {
                    puVar9 = *param_4;
                    do {
                        if (*puVar9 == 0x5b) goto LAB_1403aeb30;
                        if (0x5b < (int)*puVar9) break;
                        puVar11 = (uint *)((longlong)puVar11 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar11 < param_4[1]);
                }
                FUN_1401c2e70(param_4,puVar11,local_res10);
                return 0x5b;
            }
        }
        else {
            if (param_2[9] != 0) goto LAB_1403aeb3a;
            if (param_4 != (uint **)0x0) {
                local_res10[0] = 0x5b;
                *(undefined4 *)(param_4 + 2) = 0x5b;
                *(undefined4 *)(param_4 + 3) = 1;
                if (param_4[1] != (uint *)0x0) {
                    puVar9 = *param_4;
                    do {
                        if (*puVar9 == 0x5b) goto LAB_1403aeb30;
                        if (0x5b < (int)*puVar9) break;
                        puVar11 = (uint *)((longlong)puVar11 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar11 < param_4[1]);
                }
                FUN_1401c2e70(param_4,puVar11,local_res10);
            }
        }
        LAB_1403aeb30:
        uVar10 = 0x5b;
    }
    else {
        LAB_1403aeb3a:
        uVar3 = FUN_1403afa70(lVar6,lVar5,lVar7);
        if ((uVar3 != 0) && (uVar3 != 0x13d)) {
            if (param_4 != (uint **)0x0) {
                *(uint *)(param_4 + 2) = uVar3;
                *(undefined4 *)(param_4 + 3) = 1;
                local_res10[0] = uVar3;
                if (param_4[1] != (uint *)0x0) {
                    puVar9 = *param_4;
                    do {
                        uVar1 = *puVar9;
                        if (uVar1 == uVar3) goto LAB_1403aeba4;
                        if (uVar1 != uVar3 && (int)uVar3 <= (int)uVar1) break;
                        puVar11 = (uint *)((longlong)puVar11 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar11 < param_4[1]);
                }
                FUN_1401c2e70(param_4,puVar11,local_res10);
            }
            LAB_1403aeba4:
            if (bVar2) {
                return (ulonglong)uVar3;
            }
        }
        if ((*(int *)(*(longlong *)(lVar6 + 0x70) + 0x7c) - 7U < 2) &&
            ((float)param_2[0xd] * (float)param_2[0xd] + (float)param_2[0xe] * (float)param_2[0xe] +
             (float)param_2[0xf] * (float)param_2[0xf] == 0.0)) {
            if (param_4 != (uint **)0x0) {
                FUN_1403b51f0(param_4,0xae);
            }
            if (bVar2) {
                return 0xae;
            }
        }
        puVar11 = local_res20;
        uVar10 = FUN_1403afb10(param_1,param_2,lVar6,lVar5,local_res20,local_res18,lVar7,param_4,param_5
                ,param_6);
        iVar4 = (int)uVar10;
        if (((iVar4 == 0) || (iVar4 == 0x13d)) || (!bVar2)) {
            uVar10 = FUN_1403b0880(param_1,param_2,lVar6,lVar5,puVar11,lVar7,param_4);
            if (((((int)uVar10 == 0) || ((int)uVar10 == 0x13d)) || (!bVar2)) &&
                (uVar10 = uVar10 & 0xffffffff, iVar4 == 0x13d)) {
                uVar10 = 0x13d;
            }
        }
    }
    return uVar10;
}



undefined8 FUN_1403aecd0(longlong param_1,longlong *param_2,longlong param_3,uint *param_4)

{
    longlong lVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    undefined4 local_18 [2];
    undefined8 local_10;

    lVar4 = (**(code **)(*param_2 + 0x30))();
    lVar1 = *(longlong *)(param_1 + 0x6718);
    if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x18) != (longlong *)0x0)) {
        uVar7 = 0;
        if (*(ulonglong *)(lVar1 + 0x20) != 0) {
            plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10);
            do {
                if (*plVar5 == lVar4) {
                    return 2;
                }
                uVar7 = uVar7 + 1;
                plVar5 = plVar5 + 10;
            } while (uVar7 < *(ulonglong *)(lVar1 + 0x20));
        }
    }
    if (*(int *)(param_2 + 4) == 0) {
        if ((*(int *)((longlong)param_2 + 0x24) - 0x11U < 4) &&
            ((*param_4 != 0 || (3 < param_4[1] - 0x11)))) {
            if (param_3 == 0) {
                uVar9 = 0;
            }
            else if ((*(uint *)(*(longlong *)(param_3 + 0x40) + 0x154) & 0x100) == 0) {
                uVar9 = 0;
            }
            else {
                uVar9 = (uint)*(byte *)(*(longlong *)(param_3 + 0x40) + 0x1a0);
            }
            lVar1 = param_2[8];
            uVar8 = *(uint *)(lVar1 + 0x154) & 0x100;
            if (uVar8 == 0) {
                bVar2 = 0;
            }
            else {
                bVar2 = *(byte *)(lVar1 + 0x1a0);
            }
            if (uVar9 < bVar2) {
                if (uVar8 == 0) {
                    bVar2 = 0;
                }
                else {
                    bVar2 = *(byte *)(lVar1 + 0x1a0);
                }
                uVar7 = (ulonglong)*(uint *)(param_1 + 0xc4);
                uVar8 = 0;
                if (*(uint *)(param_1 + 0xc4) == 0) {
                    return 0x23;
                }
                plVar5 = *(longlong **)(param_1 + 200);
                do {
                    if (*plVar5 == 0) {
                        uVar8 = uVar8 + 1;
                    }
                    plVar5 = plVar5 + 1;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                if (uVar8 <= bVar2 - uVar9) {
                    return 0x23;
                }
            }
        }
        if ((*(int *)((longlong)param_2 + 0x24) - 0x15U < 10) &&
            ((*param_4 != 0 || (9 < param_4[1] - 0x15)))) {
            if (param_3 == 0) {
                uVar9 = 0;
            }
            else if ((*(uint *)(*(longlong *)(param_3 + 0x40) + 0x154) & 0x100) == 0) {
                uVar9 = 0;
            }
            else {
                uVar9 = (uint)*(byte *)(*(longlong *)(param_3 + 0x40) + 0x1a0);
            }
            lVar1 = param_2[8];
            uVar8 = *(uint *)(lVar1 + 0x154) & 0x100;
            if (uVar8 == 0) {
                bVar2 = 0;
            }
            else {
                bVar2 = *(byte *)(lVar1 + 0x1a0);
            }
            if (uVar9 < bVar2) {
                if (uVar8 == 0) {
                    bVar2 = 0;
                }
                else {
                    bVar2 = *(byte *)(lVar1 + 0x1a0);
                }
                uVar9 = bVar2 - uVar9;
                if ((param_3 == 0) && (*param_4 == 2)) {
                    uVar9 = uVar9 + 1;
                }
                uVar7 = (ulonglong)*(uint *)(param_1 + 0xdc);
                uVar8 = 0;
                if (*(uint *)(param_1 + 0xdc) != 0) {
                    plVar5 = *(longlong **)(param_1 + 0xe0);
                    do {
                        if (*plVar5 == 0) {
                            uVar8 = uVar8 + 1;
                        }
                        plVar5 = plVar5 + 1;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                if (uVar8 < uVar9) {
                    return 0x23;
                }
            }
        }
    }
    uVar9 = *param_4;
    if ((uVar9 & 0xfffffff6) == 0) {
        if (uVar9 == 1) {
            LAB_1403aef23:
            if (*(uint *)(param_1 + 0xc4) <= param_4[1] && param_4[1] != *(uint *)(param_1 + 0xc4)) {
                return 0x25;
            }
        }
        else {
            uVar6 = FUN_1403b11b0(param_1,param_2,param_4);
            if ((int)uVar6 != 0) {
                return uVar6;
            }
        }
    }
    else {
        if (uVar9 == 1) goto LAB_1403aef23;
        if (uVar9 == 2) {
            if (*(uint *)(param_1 + 0xdc) <= param_4[1] && param_4[1] != *(uint *)(param_1 + 0xdc)) {
                return 0x25;
            }
        }
        else if ((uVar9 == 10) &&
                 (*(uint *)(param_1 + 0xf4) <= param_4[1] && param_4[1] != *(uint *)(param_1 + 0xf4))) {
            return 0x25;
        }
    }
    if ((*param_4 - 100 < 200) && (iVar3 = (**(code **)(*param_2 + 0x60))(param_2), iVar3 == 0)) {
        LAB_1403aef17:
        uVar6 = 0x20;
    }
    else {
        if (*param_4 == 10) {
            local_18[0] = 0;
            local_10 = 0;
            iVar3 = (**(code **)(*param_2 + 0x68))(param_2,local_18,1);
            if (iVar3 == 0) goto LAB_1403aef17;
        }
        uVar6 = 0;
    }
    return uVar6;
}



longlong *
FUN_1403aefb0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x28);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
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
        lVar2 = FUN_14018b280();
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
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



void FUN_1403af0a0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1403b13c0(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



undefined8 * FUN_1403af180(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 == 0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280((lVar1 + 1) * 0x10,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar2[1] = lVar1;
            puVar3 = puVar2 + 2;
            *puVar2 = &PTR_LAB_140b55060;
        }
    }
    *param_1 = puVar3;
    FUN_1407db590(puVar3,*param_2,param_1[1] << 4);
    return param_1;
}



longlong *
FUN_1403af200(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(int *)(param_4 + 0x20) <= *(int *)param_5) &&
            ((*(int *)(param_4 + 0x20) < *(int *)param_5 ||
              (*(uint *)(param_4 + 0x24) <= *(uint *)((longlong)param_5 + 4))))) {
            lVar2 = FUN_14018b280(0x28);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1403af2ba;
        }
    }
    lVar2 = FUN_14018b280(0x28);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
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
    LAB_1403af2ba:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



longlong *
FUN_1403af300(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        iVar1 = *(int *)(param_4 + 0x20);
        if ((iVar1 <= *(int *)param_5) &&
            ((iVar1 < *(int *)param_5 || (*(uint *)(param_4 + 0x24) <= *(uint *)((longlong)param_5 + 4)))
            )) {
            lVar3 = FUN_1403af940(iVar1,param_5);
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_1403af3d6;
        }
    }
    lVar3 = FUN_14018b280(0x48);
    if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = *param_5;
        *(int *)(lVar3 + 0x28) = *(int *)(param_5 + 1);
        *(int *)(lVar3 + 0x2c) = *(int *)((longlong)param_5 + 0xc);
        *(int *)(lVar3 + 0x30) = *(int *)(param_5 + 2);
        *(int *)(lVar3 + 0x34) = *(int *)((longlong)param_5 + 0x14);
        FUN_1403af180(lVar3 + 0x38,param_5 + 3);
    }
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar2 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar2) {
        *(longlong *)(lVar2 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar2 + 0x10)) {
        *(longlong *)(lVar2 + 0x10) = lVar3;
    }
    LAB_1403af3d6:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



longlong *
FUN_1403af420(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_1403b4f00(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1403af9a0(param_1,param_5);
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



char ** FUN_1403af510(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403af56e;
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
    LAB_1403af56e:
    ppcVar1 = (char **)FUN_1403af420(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_1403af610(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(int *)(param_4 + 0x20) <= *(int *)param_5) &&
            ((*(int *)(param_4 + 0x20) < *(int *)param_5 ||
              (*(uint *)(param_4 + 0x24) <= *(uint *)((longlong)param_5 + 4))))) {
            lVar2 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1403af6da;
        }
    }
    lVar2 = FUN_14018b280(0x30);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
        *(undefined8 *)(lVar2 + 0x28) = param_5[1];
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
    LAB_1403af6da:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



longlong *
FUN_1403af720(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
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
    }
    else {
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
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_1403af840(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1403af89e;
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
    LAB_1403af89e:
    ppcVar1 = (char **)FUN_1403af720(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_1403af940(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x48);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 1);
        *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x14);
        FUN_1403af180(lVar1 + 0x38,param_2 + 3);
    }
    return lVar1;
}



longlong FUN_1403af9a0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1403b4f00(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



int FUN_1403af9e0(longlong param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    int *piVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    int iVar9;

    iVar9 = 0;
    if (*(uint *)(param_1 + 4) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x10);
        uVar6 = (ulonglong)*(uint *)(param_1 + 4);
        do {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
                lVar3 = *(longlong *)(lVar1 + 0x48);
                iVar5 = 0;
                if (lVar3 == 0) {
                    lVar3 = *(longlong *)(lVar1 + 0x40) + 8;
                }
                uVar2 = 8;
                if (*(uint *)(lVar3 + 0x130) < 8) {
                    uVar2 = *(uint *)(lVar3 + 0x130);
                }
                uVar7 = (ulonglong)uVar2;
                if (uVar2 != 0) {
                    piVar4 = (int *)(lVar1 + 0xbc);
                    do {
                        if (param_2 == *piVar4) {
                            iVar5 = iVar5 + 1;
                        }
                        piVar4 = piVar4 + 1;
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                iVar9 = iVar9 + iVar5;
            }
            plVar8 = plVar8 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return iVar9;
}



undefined8 FUN_1403afa70(longlong param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    longlong lVar2;

    if (param_2 == param_3) {
        lVar2 = *(longlong *)(param_1 + 0x70);
        uVar1 = *(uint *)(lVar2 + 0x7c);
        if ((((7 < uVar1) || ((0x85U >> (uVar1 & 0x1f) & 1) == 0)) &&
             ((*(int *)(lVar2 + 0x18) != 3 ||
               ((*(int *)(lVar2 + 0x9c) != 0 || ((uVar1 - 4 & 0xfffffffb) != 0)))))) &&
            ((*(uint *)(lVar2 + 0x10c) & 0x10000000) == 0)) {
            return 0x20;
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (((*(uint *)(lVar2 + 0x10c) & 0x40000000) != 0) &&
        ((((uVar1 = *(uint *)(lVar2 + 0x7c), uVar1 < 8 && ((0x85U >> (uVar1 & 0x1f) & 1) != 0)) ||
           ((*(int *)(lVar2 + 0x18) == 3 &&
             ((*(int *)(lVar2 + 0x9c) == 0 && ((uVar1 - 4 & 0xfffffffb) == 0)))))) &&
          (*(int *)(param_2 + 0x108) == 0)))) {
        return 0x1f;
    }
    return 0;
}
