//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_14046e5f0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    ulonglong uVar5;
    bool bVar6;
    bool bVar7;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    uVar5 = 0;
    if ((iVar1 != 0) && ((param_1[0x17] == 0 || (*(int *)(param_1[0x17] + 4) != 5)))) {
        return 0x64e;
    }
    if (*(int *)(param_1 + 0x10) == 0x1b) {
        return 0xa5;
    }
    iVar1 = *(int *)(param_1 + 0x37);
    if (iVar1 == 3) {
        return 0x457;
    }
    if (iVar1 == 4) {
        return 0x45a;
    }
    if (iVar1 == 5) {
        return 0x45d;
    }
    if (iVar1 == 0xb) {
        return 0x1a13;
    }
    if (param_1[0x27] != 0) {
        lVar2 = FUN_1403dec00(DAT_140c65898,param_1);
        if ((lVar2 != 0) &&
            (bVar6 = uVar5 <= *(ulonglong *)(lVar2 + 0x18), bVar7 = *(ulonglong *)(lVar2 + 0x18) != uVar5
                    , uVar5 = uVar5 & 0xffffffff, bVar6 && bVar7)) {
            uVar5 = 1;
        }
    }
    iVar1 = *(int *)(param_1 + 0x211);
    if (iVar1 != 1) {
        iVar4 = (int)uVar5;
        if (iVar1 == 2) {
            uVar3 = 0x26d;
            if (iVar4 != 0) {
                uVar3 = 0x6af;
            }
            return uVar3;
        }
        if (iVar1 != 3) {
            uVar3 = 0xa5;
            if (iVar4 != 0) {
                uVar3 = 0x60b;
            }
            return uVar3;
        }
        uVar3 = 0x754;
        if (iVar4 != 0) {
            uVar3 = 0x75e;
        }
        return uVar3;
    }
    return 0x2b4;
}



int FUN_14046e720(longlong param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    bool bVar10;
    longlong local_res8;

    uVar9 = 0;
    *param_2 = 0;
    *param_4 = 1;
    iVar4 = *(int *)(param_1 + 0x1b8);
    *param_3 = 0;
    if (iVar4 == 0xd) {
        if (DAT_140c4df20 != 0) {
            do {
                lVar5 = *(longlong *)(DAT_140c4df18 + uVar9 * 8);
                if ((lVar5 != 0) && (*(int *)(lVar5 + 0x68) == *(int *)(param_1 + 8))) {
                    if (lVar5 == 0) {
                        return 0x96;
                    }
                    lVar5 = FUN_1402052e0(*(undefined2 *)(lVar5 + 0x66));
                    if (lVar5 == 0) {
                        return 0x96;
                    }
                    piVar6 = (int *)FUN_14021a740(*(undefined4 *)(lVar5 + 0x14));
                    if (piVar6 == (int *)0x0) {
                        return 0x96;
                    }
                    return *piVar6;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < DAT_140c4df20);
        }
        return 0x96;
    }
    iVar4 = *(int *)(param_1 + 0x35d0);
    if (iVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0x1c0);
        if (iVar1 == iVar4) {
            return iVar4;
        }
        lVar5 = *(longlong *)(DAT_140c7cf48 + 8);
        lVar7 = lVar5;
        local_res8 = DAT_140c7cf48;
        if (lVar5 == 0) {
            LAB_14046e833:
            local_res8 = DAT_140c7cf48;
        }
        else {
            do {
                iVar2 = *(int *)(lVar7 + 0x20);
                bVar10 = SBORROW4(iVar2,iVar1);
                iVar3 = iVar2 - iVar1;
                if (iVar2 == iVar1) {
                    bVar10 = SBORROW4(*(int *)(lVar7 + 0x24),iVar4);
                    iVar3 = *(int *)(lVar7 + 0x24) - iVar4;
                }
                if (bVar10 == iVar3 < 0) {
                    lVar8 = *(longlong *)(lVar7 + 0x10);
                    local_res8 = lVar7;
                }
                else {
                    lVar8 = *(longlong *)(lVar7 + 0x18);
                }
                lVar7 = lVar8;
            } while (lVar8 != 0);
            if (local_res8 == DAT_140c7cf48) goto LAB_14046e833;
            iVar2 = *(int *)(local_res8 + 0x20);
            bVar10 = SBORROW4(iVar1,iVar2);
            iVar3 = iVar1 - iVar2;
            if (iVar1 == iVar2) {
                bVar10 = SBORROW4(iVar4,*(int *)(local_res8 + 0x24));
                iVar3 = iVar4 - *(int *)(local_res8 + 0x24);
            }
            if (bVar10 != iVar3 < 0) goto LAB_14046e833;
        }
        if (local_res8 != DAT_140c7cf48) {
            return *(int *)(local_res8 + 0x28);
        }
        local_res8 = DAT_140c7cf48;
        if (lVar5 != 0) {
            do {
                bVar10 = *(int *)(lVar5 + 0x20) < 0;
                if (*(int *)(lVar5 + 0x20) == 0) {
                    bVar10 = *(int *)(lVar5 + 0x24) < iVar4;
                }
                if (bVar10) {
                    lVar7 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar7 = *(longlong *)(lVar5 + 0x10);
                    local_res8 = lVar5;
                }
                lVar5 = lVar7;
            } while (lVar7 != 0);
            if (local_res8 != DAT_140c7cf48) {
                if (*(int *)(local_res8 + 0x20) == 0) {
                    bVar10 = iVar4 < *(int *)(local_res8 + 0x24);
                }
                else {
                    bVar10 = 0 < *(int *)(local_res8 + 0x20);
                }
                if (!bVar10) goto LAB_14046e8a4;
            }
        }
        local_res8 = DAT_140c7cf48;
        LAB_14046e8a4:
        if ((local_res8 != DAT_140c7cf48) && (iVar1 != *(int *)(local_res8 + 0x28))) {
            return *(int *)(local_res8 + 0x28);
        }
        return iVar4;
    }
    if (*(int *)(param_1 + 0x1c4) != 0) {
        iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x38))();
        *param_2 = iVar4 + *(int *)(param_1 + 0x1c8);
    }
    switch(*(undefined4 *)(param_1 + 0x1b8)) {
        case 0:
            *param_4 = 2;
            iVar4 = *(int *)(param_1 + 0x1bc);
            if (iVar4 == 1) {
                return 0x5bc;
            }
            if (iVar4 == 2) {
                return 0x273;
            }
            if (iVar4 == 6) {
                return 0x1d9;
            }
            if (iVar4 == 10) {
                return 0x335;
            }
        default:
        switchD_14046e910_caseD_c:
            *param_2 = 0;
            *param_4 = 2;
            if (*(int *)(param_1 + 0x1088) == 0) {
                if (*(int *)(param_1 + 0x131c) == 2) {
                    return 0x270;
                }
            }
            else if ((*(int *)(param_1 + 0x1088) == 2) && (*(int *)(param_1 + 0x131c) == 0)) {
                return 0x26f;
            }
            *param_4 = 1;
            if (((*(int *)(param_1 + 0x2ac) == 0) && (*(int *)(param_1 + 0x1354) == 0)) &&
                ((*(int *)(param_1 + 0x80) != 0x14 || (iVar4 = FUN_140482370(param_1), iVar4 == 0)))) {
                iVar4 = 0x96;
                if (1 < *(int *)(param_1 + 0x54)) {
                    iVar4 = 0x160a;
                }
            }
            else {
                iVar4 = 0x97;
            }
            break;
        case 1:
            *param_4 = 2;
            if (*(int *)(param_1 + 0x1bc) == 0) {
                iVar4 = 0x5bd;
            }
            else if (*(int *)(param_1 + 0x1bc) == 2) {
                iVar4 = 0x5bf;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x5bb;
            }
            break;
        case 2:
            *param_4 = 0x2b;
            if (*(int *)(param_1 + 0x1bc) == 0) {
                iVar4 = 0x272;
            }
            else if (*(int *)(param_1 + 0x1bc) == 1) {
                iVar4 = 0x5be;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x271;
            }
            break;
        case 3:
            *param_4 = 1;
            iVar4 = *(int *)(param_1 + 0x1bc);
            if (iVar4 == 4) {
                iVar4 = 0x458;
            }
            else if (iVar4 == 5) {
                iVar4 = 0x45b;
            }
            else if (iVar4 == 0xb) {
                iVar4 = 0x1a10;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x45e;
            }
            break;
        case 4:
            *param_4 = 1;
            iVar4 = *(int *)(param_1 + 0x1bc);
            if (iVar4 == 3) {
                iVar4 = 0x455;
            }
            else if (iVar4 == 5) {
                iVar4 = 0x45c;
            }
            else if (iVar4 == 0xb) {
                iVar4 = 0x1a11;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x460;
            }
            break;
        case 5:
            *param_4 = 1;
            iVar4 = *(int *)(param_1 + 0x1bc);
            if (iVar4 == 3) {
                iVar4 = 0x456;
            }
            else if (iVar4 == 4) {
                iVar4 = 0x459;
            }
            else if (iVar4 == 0xb) {
                iVar4 = 0x1a12;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x462;
            }
            break;
        case 6:
            *param_4 = 2;
            if (*(int *)(param_1 + 0x1bc) == 0) {
                iVar4 = 0x1d7;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x1d8;
            }
            break;
        case 7:
            *param_4 = 1;
            if ((*(int *)(param_1 + 0x1cc) != 0) && (lVar5 = FUN_1401fdbe0(), lVar5 != 0)) {
                uVar9 = (ulonglong)*(uint *)(param_1 + 0x1cc);
                iVar4 = FUN_1403deec0();
                if (iVar4 == 0) {
                    if (*(int *)(param_1 + 0x1e0) != 0) {
                        FUN_140474400(param_1,uVar9 & 0xffffffff,0);
                    }
                    iVar4 = *(int *)(lVar5 + 0x54);
                    *param_3 = 1;
                    return iVar4;
                }
                return *(int *)(local_res8 + 0x10);
            }
            goto switchD_14046e910_caseD_c;
        case 8:
            *param_4 = 4;
            *param_3 = 1;
            iVar4 = 0x680;
            break;
        case 9:
            *param_4 = 4;
            *param_3 = 1;
            iVar4 = 0x4bd;
            break;
        case 10:
            *param_4 = 1;
            if ((*(int *)(param_1 + 0x1bc) == 0) || (*(int *)(param_1 + 0x1bc) == 7)) {
                iVar4 = 0x333;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x336;
            }
            break;
        case 0xb:
            *param_4 = 1;
            iVar4 = *(int *)(param_1 + 0x1bc);
            if (iVar4 == 3) {
                iVar4 = 0x1a0b;
            }
            else if (iVar4 == 4) {
                iVar4 = 0x1a0c;
            }
            else if (iVar4 == 5) {
                iVar4 = 0x1a0d;
            }
            else {
                *param_3 = 1;
                iVar4 = 0x1a0e;
            }
    }
    return iVar4;
}



int FUN_14046ecc0(longlong param_1)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x138c);
    if (iVar1 == 0) {
        if (1 < *(int *)(param_1 + 0x54)) {
            iVar1 = *(int *)(param_1 + 0x1320);
            if (-1 < iVar1) {
                if (iVar1 < 2) {
                    return (*(int *)(param_1 + 0x12fc) != 0) + 0x160b;
                }
                if (iVar1 == 3) {
                    return 0x1e74;
                }
                if ((iVar1 != 4) && (iVar1 == 5)) {
                    return 0x1e75;
                }
            }
            return 0x160b;
        }
        if ((((*(int *)(param_1 + 0x2ac) == 0) && (*(int *)(param_1 + 0x1354) == 0)) &&
             ((*(uint *)(param_1 + 0x142c) & 4) != 0)) && ((*(uint *)(param_1 + 0x142c) & 0x10) != 0)) {
            iVar1 = *(int *)(param_1 + 0x1320);
            if (-1 < iVar1) {
                if (iVar1 < 2) {
                    return (*(int *)(param_1 + 0x12fc) != 0) + 0x99;
                }
                if (iVar1 == 3) {
                    iVar1 = 0x99;
                    if (*(int *)(param_1 + 0x1344) == 0x25) {
                        iVar1 = 0x1eab;
                    }
                    return iVar1;
                }
                if ((iVar1 != 4) && (iVar1 == 5)) {
                    iVar1 = 0x11a;
                    if (*(int *)(param_1 + 0x1344) == 0x25) {
                        iVar1 = 0x15ee;
                    }
                    return iVar1;
                }
            }
            iVar1 = 0x98;
            if (*(int *)(param_1 + 0x1344) == 0x25) {
                iVar1 = 0x635;
            }
            return iVar1;
        }
        iVar1 = *(int *)(param_1 + 0x1320);
        if (-1 < iVar1) {
            if (iVar1 < 2) {
                return (*(int *)(param_1 + 0x12fc) != 0) + 0x1df7;
            }
            if (iVar1 == 3) {
                return 0x1df7;
            }
            if ((iVar1 != 4) && (iVar1 == 5)) {
                return 0x1df6;
            }
        }
        iVar1 = 0x1df5;
    }
    return iVar1;
}



undefined8 FUN_14046ee00(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar2 != 0))
        && (lVar1 = plVar3[0x17], lVar1 != 0)) {
        if (*(int *)(lVar1 + 4) == 5) {
            return 0x1da8;
        }
        if (lVar1 != 0) {
            switch(*(undefined4 *)(lVar1 + 4)) {
                case 0:
                    iVar2 = FUN_14047bba0(param_1);
                    if (iVar2 != 0) {
                        if (iVar2 == 1) {
                            return 0x62a;
                        }
                        if (iVar2 == 2) {
                            return 0x62c;
                        }
                    }
                    break;
                case 1:
                case 3:
                    return 0x766;
                case 6:
                    return 0x1e23;
                case 8:
                    return 0x1e9d;
                case 9:
                    return 0xa7;
            }
        }
    }
    return 0x62b;
}



undefined8 FUN_14046ef40(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar2 != 0))
        && (lVar1 = plVar3[0x17], lVar1 != 0)) {
        if (*(int *)(lVar1 + 4) == 5) {
            return 0x1da8;
        }
        if (lVar1 != 0) {
            switch(*(undefined4 *)(lVar1 + 4)) {
                case 0:
                    iVar2 = FUN_14047bba0(param_1);
                    if (iVar2 != 0) {
                        if (iVar2 == 1) {
                            return 0x649;
                        }
                        if (iVar2 == 2) {
                            return 0x64a;
                        }
                    }
                    break;
                case 1:
                case 3:
                    return 0x766;
                case 6:
                    return 0x1e23;
                case 8:
                    return 0x1e9d;
                case 9:
                    return 0xa6;
            }
        }
    }
    return 0x648;
}



undefined8 FUN_14046f080(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar2 != 0))
        && (lVar1 = plVar3[0x17], lVar1 != 0)) {
        if (*(int *)(lVar1 + 4) == 5) {
            return 0x1da8;
        }
        if (lVar1 != 0) {
            switch(*(undefined4 *)(lVar1 + 4)) {
                case 0:
                    iVar2 = FUN_14047bba0(param_1);
                    if (iVar2 != 0) {
                        if (iVar2 == 1) {
                            return 0x62d;
                        }
                        if (iVar2 == 2) {
                            return 0x62f;
                        }
                    }
                    break;
                case 1:
                case 3:
                    return 0x766;
                case 6:
                    return 0x1e23;
                case 8:
                    return 0x1e9d;
                case 9:
                    return 0xa7;
            }
        }
    }
    return 0x62e;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14046f1c0(longlong *param_1)

{
    float *pfVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    LPVOID pvVar5;
    longlong lVar6;
    int iVar7;
    undefined *puVar8;
    longlong *plVar9;
    undefined8 uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
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
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    float fVar27;
    uint uVar28;
    float fVar29;
    uint uVar30;
    undefined8 local_res8;
    undefined8 local_108;
    undefined8 local_100;
    undefined8 local_f8;
    undefined local_e8 [16];
    float local_d8;
    uint uStack212;
    undefined4 uStack208;

    plVar9 = (longlong *)param_1[0x2dd];
    if (plVar9 == (longlong *)0x0) {
        return;
    }
    if (*(int *)(param_1 + 0x267) != 0) {
        return;
    }
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    fVar22 = 1.0;
    fVar27 = 0.0;
    uVar12 = 2;
    uVar11 = 0x11;
    fVar23 = *(float *)(param_1 + 0x259) + *(float *)(param_1 + 0x25e);
    uVar30 = 0x80000000;
    uVar28 = 0x7fffffff;
    fVar29 = 0.5;
    uVar13 = 0;
    if (*(int *)((longlong)param_1 + 0x1354) == 0) {
        if (*(int *)(param_1 + 0x26b) != 0) {
            local_e8._8_8_ = 0x3f800000;
            local_d8 = 0.0;
            uStack212 = 0;
            uStack208 = 0;
            (**(code **)(*plVar9 + 600))(plVar9,2,local_e8);
            local_e8._0_8_ = (undefined **)0x0;
            local_e8._8_8_ = 0x3f800000;
            local_d8 = 0.0;
            uStack212 = 0;
            uStack208 = 0;
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],3,local_e8);
            local_e8 = ZEXT816(0x3f800000) << 0x40;
            local_d8 = 0.0;
            uStack212 = 0;
            uVar10 = 4;
            goto LAB_14046fcb7;
        }
    }
    else {
        fVar21 = 3.0;
        fVar23 = 0.0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        if (*(int *)(param_1 + 0x26b) == 0) {
            *(undefined4 *)(param_1 + 0x26e) = *(undefined4 *)(param_1 + 0x26c);
            *(undefined4 *)((longlong)param_1 + 0x1374) = *(undefined4 *)((longlong)param_1 + 0x1364);
            *(undefined4 *)(param_1 + 0x26f) = *(undefined4 *)(param_1 + 0x26d);
            *(undefined4 *)((longlong)param_1 + 0x137c) = *(undefined4 *)((longlong)param_1 + 0x136c);
        }
        else {
            FUN_1408fc7f0();
            fVar17 = (*(float *)(param_1 + 0x26e) - *(float *)(param_1 + 0x26c)) * extraout_XMM0_Da +
                     *(float *)(param_1 + 0x26c);
            fVar18 = (*(float *)((longlong)param_1 + 0x1374) - *(float *)((longlong)param_1 + 0x1364)) *
                     extraout_XMM0_Da + *(float *)((longlong)param_1 + 0x1364);
            fVar19 = (*(float *)(param_1 + 0x26f) - *(float *)(param_1 + 0x26d)) * extraout_XMM0_Da +
                     *(float *)(param_1 + 0x26d);
            fVar20 = (*(float *)((longlong)param_1 + 0x137c) - *(float *)((longlong)param_1 + 0x136c)) *
                     extraout_XMM0_Da + *(float *)((longlong)param_1 + 0x136c);
            fVar15 = fVar18 * fVar18;
            fVar16 = fVar17 * fVar17 + fVar15 + fVar19 * fVar19;
            auVar14 = rsqrtss(CONCAT412(fVar15,CONCAT48(fVar15,CONCAT44(fVar15,fVar15))),
                              CONCAT412(fVar20 * fVar20,CONCAT48(fVar19 * fVar19,CONCAT44(fVar15,fVar16)))
            );
            fVar15 = SUB164(auVar14,0);
            fVar15 = (fVar21 - fVar16 * fVar15 * fVar15) * fVar29 * fVar15;
            if (fVar15 <= 0.0) {
                fVar15 = 0.0;
            }
            *(undefined (*) [16])(param_1 + 0x26e) =
                    CONCAT412(fVar15 * fVar20,
                              CONCAT48(fVar15 * fVar19,CONCAT44(fVar15 * fVar18,fVar15 * fVar17)));
        }
        fVar15 = *(float *)(param_1 + 0x26e);
        fVar16 = *(float *)((longlong)param_1 + 0x1374);
        fVar17 = fVar16 * *(float *)(param_1 + 0x252) + fVar15 * *(float *)(param_1 + 0x250) +
                 *(float *)(param_1 + 0x254) * 0.0;
        fVar18 = fVar16 * *(float *)((longlong)param_1 + 0x1294) +
                 fVar15 * *(float *)((longlong)param_1 + 0x1284) +
                 *(float *)((longlong)param_1 + 0x12a4) * 0.0;
        fVar19 = fVar16 * *(float *)(param_1 + 0x253) + fVar15 * *(float *)(param_1 + 0x251) +
                 *(float *)(param_1 + 0x255) * 0.0;
        fVar20 = fVar16 * *(float *)((longlong)param_1 + 0x129c) +
                 fVar15 * *(float *)((longlong)param_1 + 0x128c) +
                 *(float *)((longlong)param_1 + 0x12ac) * 0.0;
        fVar15 = fVar18 * fVar18;
        fVar16 = fVar17 * fVar17 + fVar15 + 0.0;
        auVar14 = rsqrtss(CONCAT412(fVar15,CONCAT48(fVar15,CONCAT44(fVar15,fVar15))),
                          CONCAT412(fVar20 * fVar20,CONCAT48(fVar19 * fVar19,CONCAT44(fVar15,fVar16))));
        fVar15 = SUB164(auVar14,0);
        fVar15 = (fVar21 - fVar16 * fVar15 * fVar15) * fVar29 * fVar15;
        if (fVar15 <= 0.0) {
            fVar15 = 0.0;
        }
        local_e8 = CONCAT412(fVar15 * fVar20,
                             CONCAT48(fVar15 * fVar19,CONCAT44(fVar15 * fVar18,fVar15 * fVar17)));
        uVar2 = FUN_1401b3170(&local_108,local_e8);
        fVar15 = (((float)local_108 - *(float *)(param_1 + 0x25e)) + 3.141593) * 0.1591549;
        iVar7 = (int)fVar15;
        fVar21 = fVar15;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != fVar15)) {
            uVar3 = movmskps(uVar2,ZEXT816(CONCAT44(fVar15,fVar15)));
            fVar21 = (float)(iVar7 - (uVar3 & 1));
        }
        fVar21 = (fVar15 - fVar21) * 6.283185 - 3.141593;
        if (*(int *)((longlong)param_1 + 0x135c) == 0) {
            iVar7 = FUN_140467e40(param_1);
            if (iVar7 == 4) {
                if (fVar21 <= fVar27) {
                    local_res8._0_4_ = (float)((uint)fVar21 & uVar28) / (DAT_140c3b438 * 0.005555556 * 90.0);
                    if (fVar22 <= (float)local_res8) {
                        local_res8._0_4_ = fVar22;
                    }
                }
                else {
                    local_res8._0_4_ = (float)((uint)fVar21 & uVar28) / (DAT_140c3b438 * 0.005555556 * 60.0);
                    if (fVar22 <= (float)local_res8) {
                        local_res8._0_4_ = fVar22;
                    }
                }
            }
            else if (iVar7 == 5) {
                LAB_14046f66e:
                local_res8._0_4_ = (float)((uint)fVar21 & uVar28) / (DAT_140c3b438 * 0.005555556 * 135.0);
                if (fVar22 <= (float)local_res8) {
                    local_res8._0_4_ = fVar22;
                }
            }
            else {
                if (iVar7 != 7) {
                    if (iVar7 == 8) goto LAB_14046f66e;
                    if (iVar7 != 10) {
                        goto LAB_14046f6e0;
                    }
                }
                local_res8._0_4_ = (float)((uint)fVar21 & uVar28) / (DAT_140c3b438 * 0.005555556 * 90.0);
                if (fVar22 <= (float)local_res8) {
                    local_res8._0_4_ = fVar22;
                }
            }
            LAB_14046f6e0:
            fVar15 = fVar22 - (float)local_res8;
            fVar29 = (float)((uint)local_108._4_4_ & uVar28) / (DAT_140c3b438 * 0.005555556 * 45.0);
            if (fVar22 <= fVar29) {
                fVar29 = fVar22;
            }
            fVar16 = fVar22 - fVar29;
            uVar3 = uVar11;
            if (fVar27 <= fVar21) {
                if (fVar27 <= local_108._4_4_) {
                    iVar7 = FUN_140467e40(param_1);
                    if (iVar7 == 4) {
                        uVar4 = 0x14;
                        uVar13 = 0x15;
                    }
                    else if (iVar7 == 5) {
                        uVar4 = 0x45;
                        uVar13 = 0x47;
                        uVar3 = 0x43;
                    }
                    else if (iVar7 == 7) {
                        uVar4 = 0xee;
                        uVar13 = 0xf0;
                        uVar3 = 0xec;
                    }
                    else if (iVar7 == 8) {
                        uVar4 = 0x5e;
                        uVar13 = 0x60;
                        uVar3 = 0x5c;
                    }
                    else {
                        if (iVar7 != 10) {
                            local_e8._8_8_ = SUB168(local_e8 >> 0x40,0);
                            local_e8._0_8_ = &PTR_LAB_140b5e648;
                            pvVar5 = TlsGetValue(DAT_140c63720);
                            local_d8 = SUB84(pvVar5,0);
                            uStack212 = (uint)((ulonglong)pvVar5 >> 0x20);
                            TlsSetValue(DAT_140c63720,local_e8);
                            local_res8 = 0x141e02c90;
                            local_108 = local_e8._0_8_;
                            local_f8 = CONCAT44(uStack212,local_d8);
                            local_100 = local_e8._8_8_;
                            uVar2 = FUN_140467e40(param_1);
                            puVar8 = &DAT_140c8acdc;
                            goto LAB_14046fabc;
                        }
                        uVar4 = 0xd5;
                        uVar13 = 0xd6;
                        uVar3 = 0xd2;
                    }
                }
                else {
                    iVar7 = FUN_140467e40();
                    if (iVar7 == 4) {
                        uVar4 = 0x14;
                        uVar13 = 0x17;
                        uVar3 = 0x12;
                    }
                    else if (iVar7 == 5) {
                        uVar4 = 0x45;
                        uVar13 = 0x49;
                        uVar3 = 0x44;
                    }
                    else if (iVar7 == 7) {
                        uVar4 = 0xee;
                        uVar13 = 0xf2;
                        uVar3 = 0xed;
                    }
                    else if (iVar7 == 8) {
                        uVar4 = 0x5e;
                        uVar13 = 0x62;
                        uVar3 = 0x5d;
                    }
                    else {
                        if (iVar7 != 10) {
                            local_e8._8_8_ = SUB168(local_e8 >> 0x40,0);
                            local_e8._0_8_ = &PTR_LAB_140b5e648;
                            pvVar5 = TlsGetValue(DAT_140c63720);
                            local_d8 = SUB84(pvVar5,0);
                            uStack212 = (uint)((ulonglong)pvVar5 >> 0x20);
                            TlsSetValue(DAT_140c63720,local_e8);
                            local_res8 = 0x141e02d20;
                            local_108 = local_e8._0_8_;
                            local_f8 = CONCAT44(uStack212,local_d8);
                            local_100 = local_e8._8_8_;
                            uVar2 = FUN_140467e40(param_1);
                            puVar8 = &DAT_140c8acd4;
                            goto LAB_14046fabc;
                        }
                        uVar4 = 0xd5;
                        uVar13 = 0xd8;
                        uVar3 = 0xd3;
                    }
                }
            }
            else if (fVar27 <= local_108._4_4_) {
                iVar7 = FUN_140467e40();
                if (iVar7 == 4) {
                    uVar4 = 0x13;
                    uVar13 = 0x16;
                }
                else if (iVar7 == 5) {
                    uVar4 = 0x46;
                    uVar13 = 0x48;
                    uVar3 = 0x43;
                }
                else if (iVar7 == 7) {
                    uVar4 = 0xef;
                    uVar13 = 0xf1;
                    uVar3 = 0xec;
                }
                else if (iVar7 == 8) {
                    uVar4 = 0x5f;
                    uVar13 = 0x61;
                    uVar3 = 0x5c;
                }
                else {
                    if (iVar7 != 10) {
                        local_e8._8_8_ = SUB168(local_e8 >> 0x40,0);
                        local_e8._0_8_ = &PTR_LAB_140b5e648;
                        pvVar5 = TlsGetValue(DAT_140c63720);
                        local_d8 = SUB84(pvVar5,0);
                        uStack212 = (uint)((ulonglong)pvVar5 >> 0x20);
                        TlsSetValue(DAT_140c63720,local_e8);
                        local_res8 = 0x141e02da0;
                        local_108 = local_e8._0_8_;
                        local_f8 = CONCAT44(uStack212,local_d8);
                        local_100 = local_e8._8_8_;
                        uVar2 = FUN_140467e40(param_1);
                        puVar8 = &DAT_140c8acd0;
                        goto LAB_14046fabc;
                    }
                    uVar4 = 0xd4;
                    uVar13 = 0xd7;
                    uVar3 = 0xd2;
                }
            }
            else {
                iVar7 = FUN_140467e40();
                if (iVar7 == 4) {
                    uVar4 = 0x13;
                    uVar13 = 0x18;
                    uVar3 = 0x12;
                }
                else if (iVar7 == 5) {
                    uVar4 = 0x46;
                    uVar13 = 0x4a;
                    uVar3 = 0x44;
                }
                else if (iVar7 == 7) {
                    uVar4 = 0xef;
                    uVar13 = 0xf3;
                    uVar3 = 0xed;
                }
                else if (iVar7 == 8) {
                    uVar4 = 0x5f;
                    uVar13 = 99;
                    uVar3 = 0x5d;
                }
                else if (iVar7 == 10) {
                    uVar4 = 0xd4;
                    uVar13 = 0xd9;
                    uVar3 = 0xd3;
                }
                else {
                    local_e8._8_8_ = SUB168(local_e8 >> 0x40,0);
                    local_e8._0_8_ = &PTR_LAB_140b5e648;
                    pvVar5 = TlsGetValue(DAT_140c63720);
                    local_d8 = SUB84(pvVar5,0);
                    uStack212 = (uint)((ulonglong)pvVar5 >> 0x20);
                    TlsSetValue(DAT_140c63720,local_e8);
                    local_res8 = 0x141e02a40;
                    local_108 = local_e8._0_8_;
                    local_f8 = CONCAT44(uStack212,local_d8);
                    local_100 = local_e8._8_8_;
                    uVar2 = FUN_140467e40(param_1);
                    puVar8 = &DAT_140c8acd8;
                    LAB_14046fabc:
                    iVar7 = FUN_1401971e0(puVar8,0x16,&local_res8,uVar2,&local_108);
                    local_e8 = CONCAT88(local_e8._8_8_,0x140b5e648);
                    TlsSetValue(DAT_140c63720,(LPVOID)CONCAT44(uStack212,local_d8));
                    if (iVar7 != 0) {
                        DebugBreak();
                    }
                    uVar4 = 0;
                    uVar3 = uVar13;
                }
            }
            local_d8 = fVar16 * (float)local_res8;
            local_e8._0_8_ = (undefined **)(ulonglong)uVar4;
            local_e8 = CONCAT88(0x3f800000,local_e8._0_8_);
            uStack208 = 0;
            uVar4 = uVar11;
            if (*(int *)(param_1 + 0x26b) == 0) {
                uVar4 = uVar12;
            }
            uStack212 = uVar4;
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],2,local_e8);
            local_d8 = fVar29 * fVar15;
            local_e8._0_8_ = (undefined **)(ulonglong)uVar3;
            local_e8 = CONCAT88(0x3f800000,local_e8._0_8_);
            uStack208 = 0;
            uStack212 = uVar4;
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],3,local_e8);
            local_d8 = fVar29 * (float)local_res8;
            local_e8._0_8_ = (undefined **)(ulonglong)uVar13;
            local_e8._8_8_ = 0x3f800000;
            uStack208 = 0;
            uStack212 = uVar4;
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],4,local_e8);
            fVar29 = 0.5;
        }
        else {
            if (param_1[3] != 0) {
                if ((DAT_140dc2ed0 & 1) == 0) {
                    DAT_140dc2ed0 = DAT_140dc2ed0 | 1;
                    DAT_140dc2ed4 = DAT_140c3b438 * 0.005555556 * 180.0;
                }
                if ((DAT_140dc2ed0 & 2) == 0) {
                    DAT_140dc2ed0 = DAT_140dc2ed0 | 2;
                    DAT_140dc2ed8 = DAT_140c3b438 * 0.005555556 * 40.0;
                }
                if ((DAT_140dc2ed0 & 4) == 0) {
                    DAT_140dc2ed0 = DAT_140dc2ed0 | 4;
                    DAT_140dc2edc = DAT_140c3b438 * 0.005555556 * 30.0;
                }
                pfVar1 = *(float **)(param_1[3] + 200);
                fVar15 = DAT_140dc2ed4;
                if (*pfVar1 != fVar27) {
                    fVar15 = DAT_140c3b438 * 0.005555556 * *pfVar1;
                }
                fVar16 = DAT_140dc2ed8;
                if (pfVar1[1] != fVar27) {
                    fVar16 = DAT_140c3b438 * 0.005555556 * pfVar1[1];
                }
                fVar17 = DAT_140dc2edc;
                if (pfVar1[2] != fVar27) {
                    fVar17 = DAT_140c3b438 * 0.005555556 * pfVar1[2];
                }
                fVar18 = fVar21;
                if (fVar15 <= fVar21) {
                    fVar18 = fVar15;
                }
                fVar21 = local_108._4_4_;
                if (fVar16 <= local_108._4_4_) {
                    fVar21 = fVar16;
                }
                local_108._4_4_ = (float)((uint)fVar17 ^ uVar30);
                if ((float)((uint)fVar17 ^ uVar30) <= fVar21) {
                    local_108._4_4_ = fVar21;
                }
                fVar21 = (float)((uint)fVar15 ^ uVar30);
                if ((float)((uint)fVar15 ^ uVar30) <= fVar18) {
                    fVar21 = fVar18;
                }
            }
            local_e8._0_12_ = ZEXT812(0xa6);
            local_d8 = 1.0;
            uStack212 = 0x13;
            uStack208 = 0;
            local_e8 = CONCAT412((int)(longlong)(1000.0 - fVar21 * 1000.0 * 0.3183099),local_e8._0_12_);
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],2,local_e8);
            local_e8._0_12_ = ZEXT812(0xa7);
            local_d8 = 1.0;
            uStack212 = 0x13;
            uVar10 = 3;
            local_e8 = CONCAT412((int)(longlong)(500.0 - local_108._4_4_ * 500.0 * 0.6366197),
                                 local_e8._0_12_);
            LAB_14046fcb7:
            uStack208 = 0;
            (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],uVar10,local_e8);
        }
    }
    *(undefined4 *)(param_1 + 0x26b) = *(undefined4 *)((longlong)param_1 + 0x1354);
    if (*(float *)(param_1 + 0x25e) == 0.7853982) {
        local_e8._0_8_ = (undefined **)0xfa;
        local_d8 = 1.0;
        uStack212 = 0x11;
    }
    else if (*(float *)(param_1 + 0x25e) == -0.7853982) {
        local_e8._0_8_ = (undefined **)0xfb;
        local_d8 = 1.0;
        uStack212 = 0x11;
    }
    else {
        local_e8._0_8_ = (undefined **)0x0;
        local_d8 = 0.0;
        uStack212 = 0;
    }
    uStack208 = 0;
    local_e8 = CONCAT88(0x3f800000,local_e8._0_8_);
    (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],10,local_e8);
    if (*(int *)((longlong)param_1 + 0x12e4) != 0) {
        if ((((float)((uint)fVar23 & uVar28) <= 1e-05) ||
             (((char)*(uint *)(param_1 + 0x20e) < '\0' && ((*(uint *)(param_1 + 0x20e) & 2) != 0)))) ||
            ((iVar7 = (**(code **)(*param_1 + 0x20))(param_1), iVar7 != 0 &&
                                                               ((*(byte *)(param_1 + 0x20e) & 2) != 0)))) {
            local_e8._0_8_ = (undefined **)0x0;
            local_d8 = 0.0;
            uStack212 = 1;
        }
        else {
            iVar7 = FUN_14047bba0(param_1);
            if (iVar7 < 0) {
                LAB_14046fdef:
                uVar13 = 3;
            }
            else if (iVar7 < 3) {
                uVar12 = 0x70;
                uVar13 = 0x71;
            }
            else if (iVar7 == 3) {
                uVar12 = 0xa4;
                uVar13 = 0xa5;
            }
            else if (iVar7 == 5) {
                uVar12 = 0x102;
                uVar13 = 0x103;
            }
            else {
                if (iVar7 != 6) goto LAB_14046fdef;
                uVar12 = 0x10b;
                uVar13 = 0x10c;
            }
            if (fVar23 <= fVar27) {
                uVar13 = 0x10;
                if (-1.570796 < fVar23) {
                    (**(code **)(*(longlong *)param_1[0x2dd] + 0x260))((longlong *)param_1[0x2dd],1,local_e8);
                    uVar13 = 0x10;
                    if (local_e8._0_4_ != uVar12) {
                        uVar13 = uVar11;
                    }
                }
                local_e8._0_8_ = (undefined **)(ulonglong)uVar12;
                auVar14 = CONCAT412(uVar26,CONCAT48(uVar25,CONCAT44(uVar24,fVar23 * -0.6366197)));
                if (fVar22 <= fVar23 * -0.6366197) {
                    auVar14 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar22);
                }
                local_d8 = SUB164(auVar14,0);
                uStack212 = uVar13;
            }
            else {
                uVar12 = 0x10;
                if (fVar23 < 1.570796) {
                    (**(code **)(*(longlong *)param_1[0x2dd] + 0x260))((longlong *)param_1[0x2dd],1,local_e8);
                    uVar12 = 0x10;
                    if (local_e8._0_4_ != uVar13) {
                        uVar12 = uVar11;
                    }
                }
                local_e8._0_8_ = (undefined **)(ulonglong)uVar13;
                auVar14 = CONCAT412(uVar26,CONCAT48(uVar25,CONCAT44(uVar24,fVar23 * 0.6366197)));
                if (fVar22 <= fVar23 * 0.6366197) {
                    auVar14 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar22);
                }
                local_d8 = SUB164(auVar14,0);
                uStack212 = uVar12;
            }
        }
        uStack208 = 0;
        local_e8 = CONCAT88(0x3f800000,local_e8._0_8_);
        (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],1,local_e8);
    }
    if (*(float *)(param_1 + 0x265) <= 1e-05) {
        if (*(float *)(param_1 + 0x265) < -1e-05) {
            iVar7 = FUN_14047be40(param_1);
            if (iVar7 == 0) {
                iVar7 = FUN_14047bf00(param_1);
                if (iVar7 == 0) {
                    iVar7 = FUN_14047c120(param_1);
                    if ((iVar7 == 0) &&
                        (((*(uint *)(param_1 + 0x20e) & 0x80) != 0 ||
                          (*(int *)((longlong)param_1 + 0x36e4) != 0)))) {
                        if (((*(uint *)(param_1 + 0x20e) & 0x80) == 0) ||
                            (*(int *)((longlong)param_1 + 0x36e4) != 0)) goto LAB_14047008f;
                        uVar12 = 0x65;
                    }
                    else {
                        uVar12 = 6;
                    }
                }
                else {
                    uVar12 = 0xfe;
                }
            }
            else {
                uVar12 = 0xf5;
            }
            goto LAB_14046fffa;
        }
        LAB_14047008f:
        local_e8 = ZEXT816(0x3f800000) << 0x40;
        local_d8 = 0.0;
        uStack212 = 1;
        uStack208 = 0;
        (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],5,local_e8);
    }
    else {
        iVar7 = FUN_14047be40(param_1);
        if (iVar7 == 0) {
            iVar7 = FUN_14047bf00(param_1);
            if (iVar7 == 0) {
                iVar7 = FUN_14047c120(param_1);
                if ((iVar7 == 0) &&
                    (((*(uint *)(param_1 + 0x20e) & 0x80) != 0 || (*(int *)((longlong)param_1 + 0x36e4) != 0)
                    ))) {
                    if (((*(uint *)(param_1 + 0x20e) & 0x80) == 0) ||
                        (*(int *)((longlong)param_1 + 0x36e4) != 0)) goto LAB_14047008f;
                    uVar12 = 0x66;
                }
                else {
                    uVar12 = 7;
                }
            }
            else {
                uVar12 = 0xff;
            }
        }
        else {
            uVar12 = 0xf6;
        }
        LAB_14046fffa:
        local_e8._0_8_ = (undefined **)(ulonglong)uVar12;
        local_e8 = CONCAT88(0x3f800000,local_e8._0_8_);
        uStack212 = 0x11;
        uStack208 = 0;
        local_d8 = (float)(*(uint *)(param_1 + 0x265) & uVar28);
        (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],5,local_e8);
        uVar24 = FUN_1400518a0(DAT_140c63628,0x7c,2);
        plVar9 = (longlong *)param_1[0x2b1];
        if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x50))(plVar9,uVar24);
        }
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar24);
    }
    iVar7 = FUN_14047bf00(param_1);
    if (((iVar7 == 0) || (param_1[0x1e0] == 0)) || (*(longlong *)(param_1[0x1e0] + 0x16e8) == 0)) {
        if (*(int *)((longlong)param_1 + 0x12f4) == 0) goto LAB_1404703f3;
        iVar7 = FUN_14047bd80(param_1);
        if (((iVar7 == 0) || (param_1[0x1e0] == 0)) ||
            ((*(longlong *)(param_1[0x1e0] + 0x16e8) == 0 || (iVar7 = FUN_14047d370(param_1), iVar7 == 0)
            ))) goto LAB_140470199;
        lVar6 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c8))((longlong *)param_1[0x2dd],0x6c);
        local_e8._0_12_ = ZEXT812(0x6c);
        local_d8 = 1.0;
        uStack212 = 0x13;
        uVar10 = 6;
        local_e8 = CONCAT412((int)(longlong)
                ((*(float *)(param_1 + 0x263) + fVar22) * fVar29 *
                 (float)(ulonglong)*(uint *)(lVar6 + 8)),local_e8._0_12_);
        LAB_1404701ba:
        plVar9 = (longlong *)param_1[0x2dd];
    }
    else if (*(int *)((longlong)param_1 + 0x12f4) == 0) {
        LAB_1404703f3:
        if (((param_1[0x17] == 0) || (*(int *)(param_1[0x17] + 4) != 5)) &&
            (iVar7 = FUN_14047c120(param_1), iVar7 == 0)) goto LAB_1404701cf;
        auVar14 = ZEXT416((uint)(*(float *)((longlong)param_1 + 0x1104) * 0.6366197)) &
                  (undefined  [16])0xffffffffffffffff;
        if (fVar22 <= SUB164(auVar14,0)) {
            auVar14 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar22);
        }
        local_d8 = -1.0;
        if (-1.0 <= SUB164(auVar14,0)) {
            local_d8 = SUB164(auVar14,0);
        }
        if ((float)((uint)local_d8 & uVar28) <= 1e-05) {
            local_e8._0_8_ = (undefined **)0x0;
            local_d8 = 0.0;
            uStack212 = 1;
        }
        else {
            uStack212 = 0x11;
            if (local_d8 <= fVar27) {
                local_d8 = (float)((uint)local_d8 ^ uVar30);
                local_e8._0_8_ = (undefined **)0xf9;
            }
            else {
                local_e8._0_8_ = (undefined **)0xf8;
            }
        }
        local_e8._8_8_ = 0x3f800000;
        uStack208 = 0;
        (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],6,local_e8);
        uVar10 = 1;
        auVar14 = ZEXT416((uint)(*(float *)(param_1 + 0x221) * 0.3183099)) &
                  (undefined  [16])0xffffffffffffffff;
        if (fVar22 <= SUB164(auVar14,0)) {
            auVar14 = CONCAT124(SUB1612(auVar14 >> 0x20,0),fVar22);
        }
        local_d8 = fVar27;
        if (fVar27 <= SUB164(auVar14,0)) {
            local_d8 = SUB164(auVar14,0);
        }
        if ((float)((uint)local_d8 & uVar28) <= 1e-05) goto LAB_14047019e;
        plVar9 = (longlong *)param_1[0x2dd];
        uStack212 = 0x11;
        if (local_d8 <= fVar27) {
            local_d8 = (float)((uint)local_d8 ^ uVar30);
            local_e8 = CONCAT88(0x3f800000,3);
        }
        else {
            local_e8 = CONCAT88(0x3f800000,2);
        }
    }
    else {
        FUN_1408fd190();
        fVar23 = extraout_XMM0_Da_00 * 0.3183099;
        if (fVar22 <= extraout_XMM0_Da_00 * 0.3183099) {
            fVar23 = fVar22;
        }
        local_d8 = -1.0;
        if (-1.0 <= fVar23) {
            local_d8 = fVar23;
        }
        if ((float)((uint)local_d8 & uVar28) <= 1e-05) {
            LAB_140470199:
            uVar10 = 6;
            LAB_14047019e:
            local_e8 = ZEXT816(0x3f800000) << 0x40;
            local_d8 = 0.0;
            uStack212 = 1;
            goto LAB_1404701ba;
        }
        plVar9 = (longlong *)param_1[0x2dd];
        uStack212 = 0x11;
        uVar10 = 6;
        if (local_d8 <= fVar27) {
            local_d8 = (float)((uint)local_d8 ^ uVar30);
            local_e8 = CONCAT88(0x3f800000,0x101);
        }
        else {
            local_e8 = CONCAT88(0x3f800000,0x100);
        }
    }
    uStack208 = 0;
    (**(code **)(*plVar9 + 600))(plVar9,uVar10,local_e8);
    LAB_1404701cf:
    if (((param_1[0x198] != 0) && (param_1[0x2de] != 0)) &&
        ((lVar6 = FUN_1405b3f90(param_1), *(longlong *)(lVar6 + 0x16f0) != 0 ||
                                          (*(longlong *)(lVar6 + 0x16f8) != 0)))) {
        lVar6 = FUN_1405b3f90(param_1);
        plVar9 = *(longlong **)(lVar6 + 0x16f0);
        if (plVar9 == (longlong *)0x0) {
            plVar9 = *(longlong **)(lVar6 + 0x16f8);
        }
        iVar7 = (**(code **)(*plVar9 + 0x100))();
        if (iVar7 != 0) {
            (**(code **)(*(longlong *)param_1[0x198] + 0x158))();
            (**(code **)(*(longlong *)param_1[0x198] + 0x160))((longlong *)param_1[0x198],0);
        }
    }
    return;
}



void FUN_140470540(longlong param_1,undefined4 param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    if ((*(int *)(param_1 + 0x1b8) == 10) || (*(int *)(param_1 + 0x1bc) == 10)) {
        uVar4 = 1;
    }
    else {
        uVar4 = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1088);
    uVar2 = FUN_140467e40();
    uVar3 = FUN_14047bba0(param_1);
    FUN_1401db470(param_2,uVar1,uVar3,uVar2,uVar4,0);
    return;
}



void FUN_1404705d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    if ((*(int *)(param_1 + 0x1b8) == 10) || (*(int *)(param_1 + 0x1bc) == 10)) {
        uVar3 = 1;
    }
    else {
        uVar3 = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1088);
    uVar2 = FUN_14047bba0();
    FUN_1401db470(param_2,uVar1,uVar2,param_3,uVar3,param_4);
    return;
}



void FUN_140470650(longlong param_1,int param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    uint uVar6;
    int local_48;
    undefined4 local_44;
    longlong local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;

    if (param_2 == 0) {
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0();
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xfffffffe;
    }
    else {
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0();
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | 0x3f;
    }
    uVar6 = *(uint *)(param_1 + 0x142c);
    if (((uVar1 & 0xfffffff6) == 0) && (uVar1 != 1)) {
        param_3 = 1;
        uVar6 = 0x3f;
    }
    if (*(uint *)(param_1 + 0x1428) != uVar6) {
        if (uVar6 == 0x3f) {
            if (((param_3 == 0) && (*(longlong *)(param_1 + 0x16e8) != 0)) &&
                ((*(int *)(param_1 + 0x1b8) == 0 &&
                  (((*(int *)(param_1 + 0x1bc) == 0 && (iVar2 = FUN_140470540(param_1,0x1a34), iVar2 != 0))
                    && (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                          (*(longlong **)(param_1 + 0x16e8),iVar2), iVar3 != 0)))))) {
                local_44 = FUN_1401ae6a0(0,0xffff);
                lVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),iVar2,local_44);
                uVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                        (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x39);
                uVar1 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                        (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x37);
                if (uVar4 < uVar1) {
                    uVar1 = uVar4;
                }
                uVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                        (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x38);
                if (uVar4 == 0xffffffff) {
                    uVar4 = *(uint *)(lVar5 + 0x14) >> 1;
                }
                if (uVar1 == 0xffffffff) {
                    uVar1 = uVar4;
                }
                if (*(uint *)(lVar5 + 0x14) < uVar1) {
                    uVar1 = *(uint *)(lVar5 + 0x14);
                }
                local_48 = 0;
                local_38 = 0x40471db0;
                uStack52 = 1;
                local_30 = 0;
                uStack44 = 0;
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1430,uVar1,&local_48,4);
                if (*(uint *)(lVar5 + 0x14) < uVar4) {
                    uVar4 = *(uint *)(lVar5 + 0x14);
                }
                local_48 = 0;
                local_38 = 0x40471e00;
                uStack52 = 1;
                local_30 = 0;
                uStack44 = 0;
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1478,uVar4,&local_48,4);
                local_40 = 0x3f800000;
                local_38 = 0x21;
                uStack52 = 2;
                local_30 = 0;
                uStack44 = 0;
                local_48 = iVar2;
                (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                        (*(longlong **)(param_1 + 0x16e8),6,&local_48);
            }
            else {
                FUN_140195d70(param_1 + 0x1430);
                FUN_140195d70(param_1 + 0x1478);
                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),3,3);
                *(undefined4 *)(param_1 + 0x14c0) = 1;
                if (*(longlong *)(param_1 + 0x16e8) != 0) {
                    FUN_140471ef0(param_1,1,1);
                    FUN_140471ef0(param_1,1);
                }
            }
        }
        else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
            if ((((param_3 == 0) && (*(longlong *)(param_1 + 0x16e8) != 0)) &&
                 (*(int *)(param_1 + 0x1b8) == 0)) &&
                (((*(int *)(param_1 + 0x1bc) == 0 &&
                   (iVar2 = FUN_1404705d0(param_1,(*(int *)(param_1 + 0x2ac) != 0) + 0x1a35,uVar1,0),
                           iVar2 != 0)) &&
                  (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                          (*(longlong **)(param_1 + 0x16e8),iVar2), iVar3 != 0)))) {
                local_44 = FUN_1401ae6a0(0);
                lVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),iVar2,local_44);
                uVar1 = *(uint *)(lVar5 + 0x18);
                local_48 = 0;
                local_38 = 0x40471e50;
                uStack52 = 1;
                local_30 = 0;
                uStack44 = 0;
                if (*(uint *)(lVar5 + 0x14) < uVar1) {
                    uVar1 = *(uint *)(lVar5 + 0x14);
                }
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1430,uVar1,&local_48,4);
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (*(uint *)(lVar5 + 0x14) < uVar1) {
                    uVar1 = *(uint *)(lVar5 + 0x14);
                }
                local_48 = 0;
                local_38 = 0x40471ea0;
                uStack52 = 1;
                local_30 = 0;
                uStack44 = 0;
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1478,uVar1,&local_48,4);
                local_40 = 0x3f800000;
                local_38 = 0x21;
                uStack52 = 2;
                local_30 = 0;
                uStack44 = 0;
                local_48 = iVar2;
                (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                        (*(longlong **)(param_1 + 0x16e8),6,&local_48);
            }
            else {
                local_48 = 0;
                local_38 = 0x40471e50;
                uStack52 = 1;
                local_30 = 0;
                uStack44 = 0;
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1430,0x96,&local_48,4);
                local_38 = 0x40471ea0;
                uStack52 = 1;
                local_48 = 0;
                local_30 = 0;
                uStack44 = 0;
                local_40 = param_1;
                FUN_140195960(param_1 + 0x1478,0x96,&local_48,4);
            }
            *(undefined4 *)(param_1 + 0x14c0) = 1;
        }
        if ((uVar6 & 4) != 0) {
            FUN_140195d70(param_1 + 0x1398);
        }
        if ((uVar6 & 0x10) != 0) {
            FUN_140195d70(param_1 + 0x13e0);
        }
        *(uint *)(param_1 + 0x1428) = uVar6;
        return;
    }
    return;
}



void FUN_140470b20(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;

    if (*(int *)(param_1 + 0x36e4) != 0) {
        plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if (iVar1 != 0) {
                uVar3 = 1;
                goto LAB_140470b5f;
            }
        }
    }
    uVar3 = 0;
    LAB_140470b5f:
    plVar2 = *(longlong **)(param_1 + 0xcc0);
    if (plVar2 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140470b73. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar2 + 0xc0))(plVar2,uVar3);
        return;
    }
    return;
}



void FUN_140470b80(longlong param_1,int param_2,int param_3)

{
    uint uVar1;
    uint uVar2;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (param_2 == 0) {
        if (param_3 == 0) {
            local_28[0] = 0;
            local_18 = (code *)&DAT_140470d80;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x1398,2000,local_28,4);
            return;
        }
        FUN_140195d70(param_1 + 0x1398);
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0(param_1);
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | 5;
    }
    else {
        FUN_140195d70(param_1 + 0x1398);
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0(param_1);
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xfffffffb;
    }
    uVar2 = *(uint *)(param_1 + 0x142c);
    if (((uVar1 & 0xfffffff6) == 0) && (uVar1 != 1)) {
        uVar2 = 0x3f;
    }
    if (*(uint *)(param_1 + 0x1428) != uVar2) {
        if (uVar2 == 0x3f) {
            FUN_140195d70(param_1 + 0x1430);
            FUN_140195d70(param_1 + 0x1478);
            (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),3,3);
            *(undefined4 *)(param_1 + 0x14c0) = 1;
            if (*(longlong *)(param_1 + 0x16e8) != 0) {
                FUN_140471ef0(param_1,1,1);
                FUN_140471ef0(param_1,1,0);
            }
        }
        else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
            local_28[0] = 0;
            local_18 = FUN_140471e50;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x1430,0x96,local_28,4);
            local_18 = FUN_140471ea0;
            local_28[0] = 0;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x1478,0x96,local_28,4);
            *(undefined4 *)(param_1 + 0x14c0) = 1;
        }
        if ((uVar2 & 4) != 0) {
            FUN_140195d70(param_1 + 0x1398);
        }
        if ((uVar2 & 0x10) != 0) {
            FUN_140195d70(param_1 + 0x13e0);
        }
        *(uint *)(param_1 + 0x1428) = uVar2;
    }
    return;
}



void FUN_140471230(longlong param_1,int param_2,int param_3)

{
    uint uVar1;
    uint uVar2;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (param_2 == 0) {
        if (param_3 == 0) {
            local_28[0] = 0;
            local_18 = (code *)&DAT_140471430;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x13e0,2000,local_28,4);
            return;
        }
        FUN_140195d70(param_1 + 0x13e0);
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0(param_1);
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | 0x11;
    }
    else {
        FUN_140195d70(param_1 + 0x13e0);
        if (*(longlong *)(param_1 + 0xcc0) == 0) {
            return;
        }
        uVar1 = FUN_140467ed0(param_1);
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xffffffef;
    }
    uVar2 = *(uint *)(param_1 + 0x142c);
    if (((uVar1 & 0xfffffff6) == 0) && (uVar1 != 1)) {
        uVar2 = 0x3f;
    }
    if (*(uint *)(param_1 + 0x1428) != uVar2) {
        if (uVar2 == 0x3f) {
            FUN_140195d70(param_1 + 0x1430);
            FUN_140195d70(param_1 + 0x1478);
            (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),3,3);
            *(undefined4 *)(param_1 + 0x14c0) = 1;
            if (*(longlong *)(param_1 + 0x16e8) != 0) {
                FUN_140471ef0(param_1,1,1);
                FUN_140471ef0(param_1,1,0);
            }
        }
        else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
            local_28[0] = 0;
            local_18 = FUN_140471e50;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x1430,0x96,local_28,4);
            local_18 = FUN_140471ea0;
            local_28[0] = 0;
            local_10 = 0;
            local_20 = param_1;
            FUN_140195960(param_1 + 0x1478,0x96,local_28,4);
            *(undefined4 *)(param_1 + 0x14c0) = 1;
        }
        if ((uVar2 & 4) != 0) {
            FUN_140195d70(param_1 + 0x1398);
        }
        if ((uVar2 & 0x10) != 0) {
            FUN_140195d70(param_1 + 0x13e0);
        }
        *(uint *)(param_1 + 0x1428) = uVar2;
    }
    return;
}



void FUN_1404718e0(longlong param_1,uint param_2,uint param_3,int param_4,int param_5)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    uint uVar6;
    int local_48;
    undefined4 local_44;
    longlong local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;

    if (*(longlong *)(param_1 + 0xcc0) != 0) {
        uVar1 = FUN_140467ed0();
        uVar6 = ~param_3 & *(uint *)(param_1 + 0x142c) | param_2 & param_3;
        *(uint *)(param_1 + 0x142c) = uVar6;
        if (((uVar1 & 0xfffffff6) == 0) && (uVar1 != 1)) {
            param_4 = 1;
            uVar6 = 0x3f;
        }
        if ((*(uint *)(param_1 + 0x1428) != uVar6) || (param_5 != 0)) {
            if (uVar6 == 0x3f) {
                if (((param_4 == 0) && (*(longlong *)(param_1 + 0x16e8) != 0)) &&
                    ((*(int *)(param_1 + 0x1b8) == 0 &&
                      (((*(int *)(param_1 + 0x1bc) == 0 && (iVar2 = FUN_140470540(param_1,0x1a34), iVar2 != 0)
                        ) && (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                              (*(longlong **)(param_1 + 0x16e8),iVar2), iVar3 != 0)))))) {
                    local_44 = FUN_1401ae6a0(0,0xffff);
                    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                            (*(longlong **)(param_1 + 0x16e8),iVar2,local_44);
                    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x39);
                    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x37);
                    if (uVar4 < uVar1) {
                        uVar1 = uVar4;
                    }
                    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar2,local_44,0x38);
                    if (uVar4 == 0xffffffff) {
                        uVar4 = *(uint *)(lVar5 + 0x14) >> 1;
                    }
                    if (uVar1 == 0xffffffff) {
                        uVar1 = uVar4;
                    }
                    if (*(uint *)(lVar5 + 0x14) < uVar1) {
                        uVar1 = *(uint *)(lVar5 + 0x14);
                    }
                    local_48 = 0;
                    local_38 = 0x40471db0;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,uVar1,&local_48,4);
                    if (*(uint *)(lVar5 + 0x14) < uVar4) {
                        uVar4 = *(uint *)(lVar5 + 0x14);
                    }
                    local_48 = 0;
                    local_38 = 0x40471e00;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,uVar4,&local_48,4);
                    local_40 = 0x3f800000;
                    local_38 = 0x21;
                    uStack52 = 2;
                    local_30 = 0;
                    uStack44 = 0;
                    local_48 = iVar2;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                            (*(longlong **)(param_1 + 0x16e8),6,&local_48);
                }
                else {
                    FUN_140195d70(param_1 + 0x1430);
                    FUN_140195d70(param_1 + 0x1478);
                    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))
                            (*(longlong **)(param_1 + 0xcc0),3,3);
                    *(undefined4 *)(param_1 + 0x14c0) = 1;
                    if (*(longlong *)(param_1 + 0x16e8) != 0) {
                        FUN_140471ef0(param_1,1,1);
                        FUN_140471ef0(param_1,1);
                    }
                }
            }
            else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
                if ((((param_4 == 0) && (*(longlong *)(param_1 + 0x16e8) != 0)) &&
                     (*(int *)(param_1 + 0x1b8) == 0)) &&
                    (((*(int *)(param_1 + 0x1bc) == 0 &&
                       (iVar2 = FUN_1404705d0(param_1,(*(int *)(param_1 + 0x2ac) != 0) + 0x1a35,uVar1,0),
                               iVar2 != 0)) &&
                      (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                              (*(longlong **)(param_1 + 0x16e8),iVar2), iVar3 != 0)))) {
                    local_44 = FUN_1401ae6a0(0);
                    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                            (*(longlong **)(param_1 + 0x16e8),iVar2,local_44);
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    local_48 = 0;
                    local_38 = 0x40471e50;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    if (*(uint *)(lVar5 + 0x14) < uVar1) {
                        uVar1 = *(uint *)(lVar5 + 0x14);
                    }
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,uVar1,&local_48,4);
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (*(uint *)(lVar5 + 0x14) < uVar1) {
                        uVar1 = *(uint *)(lVar5 + 0x14);
                    }
                    local_48 = 0;
                    local_38 = 0x40471ea0;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,uVar1,&local_48,4);
                    local_40 = 0x3f800000;
                    local_38 = 0x21;
                    uStack52 = 2;
                    local_30 = 0;
                    uStack44 = 0;
                    local_48 = iVar2;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                            (*(longlong **)(param_1 + 0x16e8),6,&local_48);
                }
                else {
                    local_48 = 0;
                    local_38 = 0x40471e50;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,0x96,&local_48,4);
                    local_38 = 0x40471ea0;
                    uStack52 = 1;
                    local_48 = 0;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,0x96,&local_48,4);
                }
                *(undefined4 *)(param_1 + 0x14c0) = 1;
            }
            if ((uVar6 & 4) != 0) {
                FUN_140195d70(param_1 + 0x1398);
            }
            if ((uVar6 & 0x10) != 0) {
                FUN_140195d70(param_1 + 0x13e0);
            }
            *(uint *)(param_1 + 0x1428) = uVar6;
        }
    }
    return;
}



void FUN_140471db0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),1,1);
    if (*(longlong *)(param_1 + 0x16e8) != 0) {
        FUN_140471ef0(param_1,1,1);
        return;
    }
    return;
}



void FUN_140471e00(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),2,2);
    if (*(longlong *)(param_1 + 0x16e8) != 0) {
        FUN_140471ef0(param_1,1);
    }
    *(undefined4 *)(param_1 + 0x14c0) = 1;
    return;
}



void FUN_140471e50(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),0,1);
    if (*(longlong *)(param_1 + 0x16e8) != 0) {
        FUN_140471ef0(param_1,0,1);
        return;
    }
    return;
}



void FUN_140471ea0(longlong param_1)

{
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),0,2);
    if (*(longlong *)(param_1 + 0x16e8) != 0) {
        FUN_140471ef0(param_1,0,0);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140471ef0(longlong param_1,int param_2,int param_3)

{
    undefined8 uVar1;
    int iVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined8 local_34;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_20 = 0x3f800000;
    local_40 = 0x3f800000;
    local_38 = 0;
    local_28 = 0;
    local_18 = 0;
    local_10 = 0;
    local_48 = 0;
    local_34 = 0;
    if (param_3 == 0) {
        uVar4 = 3;
        uVar5 = 9;
        if (*(longlong *)(param_1 + 0xcc0) == 0) goto LAB_140472064;
        uVar1 = uVar5;
        if (param_2 == 0) {
            iVar2 = FUN_140467ed0();
            if (0 < iVar2) {
                if (iVar2 < 4) {
                    uVar3 = 0xa4;
                    local_18 = CONCAT44(local_18._4_4_,6);
                }
                else if (iVar2 == 4) {
                    uVar3 = 0x465;
                    local_18 = CONCAT44(local_18._4_4_,6);
                }
                else {
                    if (iVar2 == 5) {
                        local_18 = CONCAT44(local_18._4_4_,6);
                        goto LAB_140472040;
                    }
                    if (iVar2 != 7) goto LAB_140471f81;
                    uVar3 = 0x1d64;
                    local_18 = CONCAT44(local_18._4_4_,6);
                }
                goto LAB_140472045;
            }
        }
        else {
            iVar2 = FUN_140467ed0();
            if (iVar2 == 6) {
                local_48 = CONCAT44(local_48._4_4_,0xce);
                local_38 = 0x3f800000;
                local_34 = CONCAT44(8,(undefined4)local_34);
            }
        }
        LAB_140471f81:
        uVar5 = uVar1;
        if ((uint)local_28 == 0) goto LAB_140472064;
    }
    else {
        uVar4 = 2;
        uVar5 = 8;
        if (*(longlong *)(param_1 + 0xcc0) == 0) goto LAB_140472064;
        if (param_2 != 0) {
            iVar2 = FUN_140467ed0();
            uVar1 = uVar5;
            if (iVar2 == 6) {
                local_48 = CONCAT44(local_48._4_4_,0xcd);
                local_38 = 0x3f800000;
                local_34 = CONCAT44(7,(undefined4)local_34);
                uVar1 = 8;
            }
            goto LAB_140471f81;
        }
        iVar2 = FUN_140467ed0();
        if (iVar2 == 5) {
            local_18 = CONCAT44(local_18._4_4_,5);
            LAB_140472040:
            uVar3 = 0x464;
        }
        else {
            uVar1 = 8;
            if (iVar2 != 7) goto LAB_140471f81;
            uVar3 = 0x1d64;
            local_18 = CONCAT44(local_18._4_4_,5);
        }
        LAB_140472045:
        local_28 = local_28 & 0xffffffff00000000 | (ulonglong)uVar3;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))();
    if (iVar2 == 0) {
        local_28._0_4_ = 0;
    }
    local_28 = local_28 & 0xffffffff00000000 | (ulonglong)(uint)local_28;
    LAB_140472064:
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
            (*(longlong **)(param_1 + 0x16e8),uVar4,&local_28);
    if ((uint)local_48 != 0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1c0))();
        if (iVar2 == 0) {
            local_48._0_4_ = 0;
        }
        local_48 = local_48 & 0xffffffff00000000 | (ulonglong)(uint)local_48;
    }
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 600))
            (*(longlong **)(param_1 + 0x16e8),uVar5,&local_48);
    return;
}



undefined4 FUN_1404720d0(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    double dVar6;

    iVar1 = *(int *)(param_1 + 0x1bc);
    uVar5 = 0x14;
    if (iVar1 == 1) {
        uVar4 = 0x5bc;
    }
    else if (iVar1 == 2) {
        uVar4 = 0x273;
    }
    else if (iVar1 == 6) {
        uVar4 = 0x1d9;
    }
    else {
        if (iVar1 != 10) {
            return 0x14;
        }
        uVar4 = 0x335;
    }
    iVar1 = FUN_140470540(param_1,uVar4);
    if ((iVar1 != 0) &&
        (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                (*(longlong **)(param_1 + 0x16e8),iVar1), iVar2 != 0)) {
        dVar6 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                (*(longlong **)(param_1 + 0x16e8),iVar1,(int)(dVar6 * 65536.0));
        uVar5 = 0x14;
        if (0x14 < *(uint *)(lVar3 + 0x14)) {
            uVar5 = *(undefined4 *)(lVar3 + 0x14);
        }
    }
    return uVar5;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

void FUN_140472190(longlong *param_1,uint param_2,undefined4 *param_3,int param_4,undefined8 param_5
        ,longlong param_6)

{
    bool bVar1;
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    undefined8 local_78;
    undefined4 local_70;
    undefined8 local_6c;
    undefined8 local_64;
    undefined4 local_5c;
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_4c;
    undefined8 local_44;
    undefined4 local_3c;
    undefined8 local_38;
    longlong local_30;
    undefined *local_28;
    undefined8 local_20;

    uVar4 = (ulonglong)param_2;
    bVar1 = false;
    *(undefined4 *)(param_6 + 0x1e8 + uVar4 * 4) = 0;
    if (param_4 != 0) {
        if (1 < param_2 - 4) {
            return;
        }
        if (param_2 == 4) {
            plVar2 = *(longlong **)(param_6 + 0x15e0);
        }
        else {
            if (param_2 != 5) goto LAB_1404723e0;
            plVar2 = *(longlong **)(param_6 + 0x15e8);
        }
        if ((plVar2 != (longlong *)0x0) && (*(int *)((longlong)plVar2 + 0x1a4) != 0)) {
            *(undefined4 *)((longlong)plVar2 + 0x1a4) = 0;
            if (*(int *)(plVar2 + 0x35) == 2) {
                (**(code **)(*plVar2 + 0x50))(plVar2,1);
            }
            else if ((*(int *)(plVar2 + 0x3f) == 0) || (*(int *)((longlong)plVar2 + 0x1fc) != 0)) {
                (**(code **)(*plVar2 + 0x50))(plVar2,1);
            }
        }
        goto LAB_1404723e0;
    }
    switch(uVar4) {
        case 0:
            FUN_14046cdc0(param_6,1);
            break;
        case 4:
        case 5:
            if (param_2 == 4) {
                plVar2 = *(longlong **)(param_6 + 0x15e0);
                LAB_140472328:
                if (plVar2 == (longlong *)0x0) goto LAB_140472396;
                *(undefined4 *)((longlong)plVar2 + 0x1a4) = 1;
                if (*(int *)(plVar2 + 0x35) == 2) {
                    LAB_140472386:
                    (**(code **)(*plVar2 + 0x50))(plVar2,0);
                    bVar1 = true;
                }
                else if ((*(int *)(plVar2 + 0x3f) == 0) || (*(int *)((longlong)plVar2 + 0x1fc) != 0)) {
                    if (*(int *)((longlong)plVar2 + 0x18c) == 0) goto LAB_140472386;
                    FUN_14071a6e0(plVar2,2,1);
                    bVar1 = true;
                }
                else {
                    FUN_14071a6e0(plVar2,1,1);
                    bVar1 = true;
                }
            }
            else {
                if (param_2 == 5) {
                    plVar2 = *(longlong **)(param_6 + 0x15e8);
                    goto LAB_140472328;
                }
                LAB_140472396:
                FUN_14046c8e0(param_6,param_2,0,0,0x3f800000,0,1,1);
            }
            FUN_14046cdc0(param_6,0,param_3[4]);
            if (!bVar1) {
                return;
            }
        LAB_1404723e0:
            local_3c = 0;
            (**(code **)(**(longlong **)(param_6 + 0x16e8) + 0x250))
                    (*(longlong **)(param_6 + 0x16e8),uVar4,&local_58);
            if ((int)local_58 != 0) {
                return;
            }
            if (param_2 != 4) {
                if (param_2 != 5) {
                    return;
                }
                local_38._0_4_ = 0;
                local_28 = &DAT_140471430;
                local_30 = param_6;
                local_20 = 0;
                FUN_140195960(param_6 + 0x13e0,2000,&local_38,4);
                return;
            }
            local_38._0_4_ = 0;
            local_28 = &DAT_140470d80;
            local_30 = param_6;
            local_20 = 0;
            FUN_140195960(param_6 + 0x1398,2000,&local_38,4);
            return;
        case 6:
            local_58 = 0;
            local_4c = 0;
            local_44 = 0;
            local_3c = 0;
            puVar5 = &local_58;
            local_50 = 0x3f800000;
            uVar3 = 6;
            goto LAB_1404724b2;
        case 7:
            local_78 = 0;
            local_70 = 0x3f800000;
            local_6c = 0;
            local_64 = 0;
            local_5c = 0;
            (**(code **)(*param_1 + 0x248))(param_1,7,&local_78);
            *(undefined4 *)(param_6 + 0x12d4) = 0;
            *(undefined4 *)(param_6 + 0x1310) = 0;
            FUN_14046cdc0(param_6,0,param_3[4]);
            break;
        case 9:
            local_38._4_4_ = FUN_1401ae6a0(0,0xffff);
            local_38._0_4_ = *param_3;
            local_30 = 0x3f800000;
            local_28 = (undefined *)0x2d;
            local_20 = 0;
            puVar5 = &local_38;
            uVar3 = 9;
        LAB_1404724b2:
            (**(code **)(*param_1 + 0x248))(param_1,uVar3,puVar5);
    }
    return;
}



void FUN_140472510(longlong *param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
                   longlong param_6)

{
    undefined4 uVar1;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined8 local_14;

    if (param_4 == 0) {
        if (param_2 == 7) {
            uVar1 = 7;
        }
        else {
            if (param_2 != 0xb) {
                return;
            }
            *(undefined4 *)(param_6 + 0x35cc) = 0;
            uVar1 = 0xb;
        }
        local_14 = 0;
        local_1c = 0;
        local_28 = 0;
        local_20 = 0x3f800000;
        local_18 = 0;
        (**(code **)(*param_1 + 600))(param_1,uVar1,&local_28);
    }
    return;
}



void FUN_140472590(undefined8 param_1,uint param_2,undefined4 param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6,longlong param_7)

{
    if (param_7 != 0) {
        FUN_140472700(param_7,param_1,param_2,param_3,param_4);
        switch(param_3) {
            case 1:
            case 0x1d:
            case 0x1e:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
                if (*(float *)(param_7 + 0x1760) < *(float *)(param_7 + 0x17d0)) {
                    if (*(int *)(param_7 + 0x1320) == 4) {
                        FUN_1405b8bd0(param_7,DAT_140c636a8,param_4 + 0x30,4,0x3f800000);
                    }
                    else {
                        FUN_1405b8bd0(param_7,DAT_140c636a8,param_4 + 0x30,2,0x3f800000);
                    }
                }
                break;
            case 0x40:
            case 0x41:
            case 0x42:
                FUN_140472bf0(param_7,param_3);
                break;
            case 0x5a:
                *(undefined4 *)(param_7 + 0x1e8 + (ulonglong)param_2 * 4) = 1;
                break;
            case 0x5b:
                FUN_14047f210(param_7,param_4 + 0x30,0,0);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140472700(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4,
                   longlong param_5)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;
    undefined8 uVar7;
    uint *puVar8;
    longlong *plVar9;
    longlong lVar10;
    ulonglong uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined auStack632 [32];
    longlong **local_258;
    undefined4 *local_250;
    longlong *local_248;
    longlong local_240;
    longlong local_238;
    undefined8 local_230;
    undefined8 local_228;
    ulonglong local_220;
    ulonglong local_218;
    undefined4 local_210;
    undefined4 local_20c;
    undefined4 local_208;
    longlong local_200;
    longlong *local_1f8;
    undefined4 local_1e8;
    float fStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    float fStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined8 local_1c4;
    undefined8 local_1b8;
    undefined8 local_1b0;
    undefined4 local_1a8;
    undefined8 local_1a0;
    uint local_198 [7];
    undefined4 local_17c;
    undefined local_178 [32];
    float local_158;
    float local_e8;
    ulonglong local_98;

    local_98 = DAT_140c0f7b0 ^ (ulonglong)auStack632;
    plVar9 = *(longlong **)(DAT_140c65898 + 0x7248);
    local_200 = param_5;
    local_210 = param_3;
    local_1f8 = param_2;
    if ((plVar9 == (longlong *)0x0) ||
        (lVar4 = *(longlong *)(DAT_140c7e598 + 8), lVar10 = DAT_140c7e598,
                *(longlong *)(DAT_140c7e598 + 8) == 0)) goto LAB_140472bc3;
    do {
        if (*(int *)(lVar4 + 0x20) < (int)param_4) {
            lVar3 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            lVar3 = *(longlong *)(lVar4 + 0x10);
            lVar10 = lVar4;
        }
        lVar4 = lVar3;
    } while (lVar3 != 0);
    if ((lVar10 == DAT_140c7e598) || ((int)param_4 < *(int *)(lVar10 + 0x20))) goto LAB_140472bc3;
    lVar4 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar4 == 0) {
        lVar4 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar13 = *(float *)(param_5 + 0x34) * *(float *)(lVar4 + 0x70) +
             *(float *)(param_5 + 0x30) * *(float *)(lVar4 + 0x60) + *(float *)(lVar4 + 0x80) * 0.0 +
             *(float *)(lVar4 + 0x90);
    fVar14 = *(float *)(param_5 + 0x34) * *(float *)(lVar4 + 0x74) +
             *(float *)(param_5 + 0x30) * *(float *)(lVar4 + 100) + *(float *)(lVar4 + 0x84) * 0.0 +
             *(float *)(lVar4 + 0x94);
    fVar13 = SQRT(fVar13 * fVar13 + fVar14 * fVar14 + 0.0);
    lVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
    if (*(float *)(lVar4 + 0x14) + 16.0 < fVar13) goto LAB_140472bc3;
    local_1e8 = *(undefined4 *)(param_5 + 0x30);
    uStack480 = *(undefined4 *)(param_5 + 0x38);
    uStack476 = *(undefined4 *)(param_5 + 0x3c);
    fStack468 = *(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4);
    local_228 = 0;
    local_218 = 0;
    fStack484 = *(float *)(param_5 + 0x34) - fStack468;
    fStack468 = *(float *)(param_5 + 0x34) + fStack468;
    fVar15 = 1.0;
    fVar14 = 0.0;
    local_250 = &local_1c8;
    fVar13 = (float)(DAT_140c45978 ^ 0x80000000);
    local_238 = (ulonglong)(uint)fVar13 << 0x20;
    local_258 = &local_248;
    local_248 = (longlong *)0x0;
    local_230 = CONCAT44(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 8));
    local_240 = param_5;
    local_220 = (ulonglong)param_4;
    local_1c8 = 0x8009;
    local_1c4 = 0xc;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_20c = 0;
    local_208 = 0x3f800000;
    local_1d8 = local_1e8;
    uStack464 = uStack480;
    uStack460 = uStack476;
    iVar2 = (**(code **)(*plVar9 + 0x1b0))(plVar9,&local_1d8,&local_1e8,&local_20c);
    if (iVar2 < 0) {
        LAB_140472a08:
    }
    else {
        uVar5 = (**(code **)(*local_248 + 0x10))();
        uVar11 = 0;
        if (uVar5 == 0) goto LAB_140472a08;
        fVar16 = fVar15;
        do {
            plVar6 = (longlong *)(**(code **)(*local_248 + 0x18))(local_248,uVar11);
            fVar12 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
            if (fVar12 < fVar15) {
                uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6);
                puVar8 = (uint *)FUN_140472cd0(uVar7);
                if (puVar8 == (uint *)0x0) {
                    fVar15 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
                    local_228._4_4_ = 0;
                }
                else {
                    if (*puVar8 == 0x16) goto LAB_1404729ef;
                    fVar15 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
                    local_228._4_4_ = *puVar8;
                }
                local_228 = local_228 & 0xffffffff | (ulonglong)local_228._4_4_ << 0x20;
            }
            LAB_1404729ef:
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
        param_5 = local_200;
        if (fVar15 < fVar16) {
            fVar14 = fVar15;
        }
    }
    if (local_228._4_4_ == 0) {
        local_228._4_4_ = *(uint *)(param_1 + 0x1334);
        local_228 = local_228 & 0xffffffff | (ulonglong)local_228._4_4_ << 0x20;
    }
    else {
        *(uint *)(param_1 + 0x1334) = local_228._4_4_;
    }
    local_17c = 0;
    (**(code **)(*local_1f8 + 0x250))(local_1f8,local_210,local_198);
    local_220 = local_220 & 0xffffffff | (ulonglong)local_198[0] << 0x20;
    local_258 = (longlong **)0x0;
    iVar2 = (**(code **)(*plVar9 + 0x1b8))(plVar9,param_5 + 0x30,local_178,0x41);
    if (iVar2 == 0) {
        local_158 = (float)local_238;
    }
    else {
        local_238 = CONCAT44(local_e8,local_158);
        fVar13 = local_e8;
    }
    if (param_1 == *(longlong *)(DAT_140c65898 + 0x6490)) {
        if ((DAT_140dc2ee0 & 1) == 0) {
            DAT_140dc2ee0 = DAT_140dc2ee0 | 1;
            FUN_1401ad620(&DAT_140dc2ef0,L"Footstep Material");
        }
        FUN_1401ada40(&DAT_140dc2ef0,local_228._4_4_);
    }
    if ((local_158 < fVar13) &&
        (*(float *)(param_5 + 0x34) <= fVar14 + fVar13 && fVar14 + fVar13 != *(float *)(param_5 + 0x34)
        )) {
        if (*(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4) * 0.5 <= fVar13 - local_158) {
            local_218._0_4_ = (uint)local_218 | 6;
        }
        else {
            local_218._0_4_ = (uint)local_218 | 3;
        }
        local_218 = local_218 & 0xffffffff00000000 | (ulonglong)(uint)local_218;
    }
    if (*(longlong *)(param_1 + 0xd08) == 0) {
    }
    else {
        local_228._0_4_ = *(uint *)(*(longlong *)(param_1 + 0xd08) + 0xb0);
        local_228 = local_228 & 0xffffffff00000000 | (ulonglong)(uint)local_228;
    }
    plVar9 = *(longlong **)(param_1 + 0xcc0);
    if (plVar9 != (longlong *)0x0) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x40))(plVar9,5);
        if (*plVar9 != 0) {
            uVar1 = *(uint *)(*plVar9 + 0xec);
            if (uVar1 != 0) {
                local_228._0_4_ = uVar1;
            }
            local_228 = local_228 & 0xffffffff00000000 | (ulonglong)(uint)local_228;
        }
    }
    if (DAT_140c7e570 != 0) {
        FUN_14062f9d0(&local_240);
    }
    if (local_248 != (longlong *)0x0) {
        (**(code **)(*local_248 + 8))();
    }
    LAB_140472bc3:
    FUN_1407db4f0(local_98 ^ (ulonglong)auStack632);
    return;
}



void FUN_140472bf0(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 local_28;
    undefined4 local_24;
    undefined8 local_20;
    undefined4 local_18;
    undefined8 local_14;

    lVar1 = *(longlong *)(param_1 + 0xf08);
    do {
        if (lVar1 == 0) {
            return;
        }
        if ((((*(longlong *)(lVar1 + 0x16e8) != 0) &&
              (plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0xc0)),
                      plVar3 != (longlong *)0x0)) && (iVar2 = (**(code **)(*plVar3 + 0x20))(), iVar2 != 0)) &&
            (*(int *)(lVar1 + 0xc4) < 3)) {
            if (param_2 == 0x40) {
                local_28 = 0x6d;
            }
            else if (param_2 == 0x41) {
                local_28 = 0x6e;
            }
            else {
                if (param_2 != 0x42) goto LAB_140472ca9;
                local_28 = 0x6f;
            }
            local_24 = 0;
            local_20 = 0x3f800000;
            local_18 = 0x3f800000;
            local_14 = 3;
            (**(code **)(**(longlong **)(lVar1 + 0x16e8) + 600))
                    (*(longlong **)(lVar1 + 0x16e8),7,&local_28);
        }
        LAB_140472ca9:
        lVar1 = *(longlong *)(lVar1 + 0xf18);
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140472cd0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    float *pfVar5;
    uint uVar6;
    ulonglong uVar7;

    if ((param_1 == 0) || (*(int *)(param_1 + 0x24) == 0)) {
        return 0;
    }
    uVar3 = 0;
    pfVar5 = (float *)(param_1 + 0x14);
    uVar7 = 1;
    uVar4 = uVar3;
    do {
        if (pfVar5[5] == 0.0) break;
        if (*(float *)(param_1 + 0x10 + uVar4 * 4) < *pfVar5) {
            uVar4 = uVar7;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        pfVar5 = pfVar5 + 1;
    } while (uVar6 < 4);
    uVar1 = *(undefined4 *)(param_1 + 0x24 + uVar4 * 4);
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64210 == 0) && (iVar2 = FUN_140216da0(), -1 < iVar2)) {
            uVar3 = (**(code **)(*DAT_140c64fa8 + 0x18))(DAT_140c64fa8,uVar1);
        }
    }
    else {
        uVar3 = (*DAT_140c63840)(&PTR_u_MaterialType_140a6b6d8,uVar1,DAT_140c63858);
    }
    return uVar3;
}



void FUN_140472d80(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    *(undefined4 *)(param_1 + 0x1590) = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar2 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(lVar2 + 0x2c);
        }
    }
    else {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
        *(int *)(param_1 + 0x1590) = iVar1;
        if ((iVar1 == 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
            *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 4);
        }
    }
    plVar3 = *(longlong **)(param_1 + 0xcc0);
    if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,0x14);
        if (*plVar3 != 0) {
            *(undefined4 *)(param_1 + 0x1590) = *(undefined4 *)(*plVar3 + 0xe8);
        }
    }
    return;
}



void FUN_140472e10(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    *(undefined4 *)(param_1 + 0x1594) = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar2 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(lVar2 + 0x30);
        }
    }
    else {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x118);
        *(int *)(param_1 + 0x1594) = iVar1;
        if ((iVar1 == 0) && (*(longlong *)(param_1 + 0xd0) != 0)) {
            *(undefined4 *)(param_1 + 0x1594) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 8);
        }
    }
    plVar3 = *(longlong **)(param_1 + 0xcc0);
    if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3,1);
        if ((*plVar3 != 0) && (iVar1 = *(int *)(*plVar3 + 0xe8), iVar1 != 0)) {
            *(int *)(param_1 + 0x1594) = iVar1;
        }
    }
    return;
}



undefined8 FUN_140472ed0(longlong param_1,undefined4 param_2)

{
    int iVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140211280(param_2);
    if (lVar2 == 0) {
        return 0;
    }
    if (((((*(uint *)(lVar2 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0) ||
          (*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (iVar3 = *(int *)(lVar2 + 8), iVar3 == 0)) &&
        (iVar3 = *(int *)(lVar2 + 4), iVar3 == 0)) {
        return 0;
    }
    if ((*(longlong *)(param_1 + 0x1598) == 0) && (iVar1 = FUN_1407129a0(param_1 + 0x1598), iVar1 < 0)
            ) {
        return 1;
    }
    FUN_140712c00(*(undefined8 *)(param_1 + 0x1598),iVar3,&LAB_140472eb0,0);
    return 1;
}



void FUN_140472f70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    int *piVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    longlong lVar11;
    int iVar12;
    undefined extraout_var [12];
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 in_XMM9_Da;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined4 in_XMM10_Da;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;

    if (param_1[0x2b1] == 0) {
        return;
    }
    lVar7 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_1 + 0x2c0),param_3,param_4,
                          CONCAT412(in_XMM11_Dd,
                                    CONCAT48(in_XMM11_Dc,CONCAT44(in_XMM11_Db,in_XMM11_Da))),
                          CONCAT412(in_XMM10_Dd,
                                    CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da))),
                          CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da))));
    if ((lVar7 != 0) ||
        (((*(longlong **)(DAT_140c65898 + 0x78) == param_1 && (lVar7 = FUN_14039df50(), lVar7 != 0)) &&
          (lVar7 = FUN_1404695e0(lVar7), lVar7 != 0)))) {
        plVar1 = (longlong *)param_1[0x2b1];
        uVar4 = FUN_1400518a0(DAT_140c63628,0x26,2);
        lVar11 = *plVar1;
        uVar10 = (ulonglong)uVar4;
        FUN_14053da10(lVar7);
        (**(code **)(lVar11 + 0x50))(plVar1,uVar10 & 0xffffffff);
    }
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x40))(param_1);
        (**(code **)(*param_1 + 0x48))(param_1);
    }
    plVar1 = (longlong *)param_1[0x2b1];
    uVar6 = FUN_1400518a0(DAT_140c63628,0x75,2);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
    if (DAT_140c65898 == 0) {
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x74,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x84,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x78,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x79,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        if (param_1[0x2dd] == 0) goto LAB_1404737b3;
        uVar6 = FUN_1400518a0(DAT_140c63628,0x74,2);
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        uVar6 = FUN_1400518a0(DAT_140c63628,0x84,2);
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        uVar6 = FUN_1400518a0(DAT_140c63628,0x78,2);
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        uVar6 = FUN_1400518a0(DAT_140c63628,0x79,2);
    }
    else {
        lVar7 = *(longlong *)(DAT_140c65898 + 0x6490);
        uVar10 = 0;
        iVar5 = 0;
        iVar12 = iVar5;
        if (lVar7 != 0) {
            iVar12 = *(int *)(lVar7 + 8);
        }
        lVar11 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar11 != 0) {
            iVar5 = *(int *)(lVar11 + 8);
        }
        switch(*(undefined4 *)(param_1 + 0x10)) {
            case 0:
            case 0xd:
            case 0x18:
            case 0x19:
                FUN_14062d3f0();
                lVar2 = *(longlong *)(DAT_140c65898 + 0x6490);
                if ((*(int *)((longlong)param_1 + 0x2ac) != 0) &&
                    ((*(int *)(param_1 + 0x21) == iVar12 || (*(int *)(param_1 + 0x21) == iVar5)))) {
                    iVar5 = *(int *)((longlong)param_1 + 0x3c);
                    if (iVar5 == 0) {
                        iVar5 = *(int *)(param_1 + 7);
                    }
                    lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
                    iVar12 = 0;
                    if (lVar3 == 0) {
                        if ((lVar2 != 0) && (iVar12 = *(int *)(lVar2 + 0x3c), iVar12 == 0)) {
                            iVar12 = *(int *)(lVar2 + 0x38);
                        }
                    }
                    else {
                        iVar12 = *(int *)(lVar3 + 0x3c);
                        if (iVar12 == 0) {
                            iVar12 = *(int *)(lVar3 + 0x38);
                        }
                    }
                    iVar5 = (**(code **)(*DAT_140c65a10 + 0x10))(DAT_140c65a10,iVar12,iVar5);
                    if ((*(int *)(DAT_140c65898 + 0x7a10) == 10) || (*(int *)(DAT_140c65898 + 0x7a10) < iVar5))
                    {
                        *(int *)(DAT_140c65898 + 0x7a10) = iVar5;
                    }
                }
                break;
            case 3:
            case 7:
            case 9:
            case 0x14:
                iVar5 = FUN_14045a950();
                if (iVar5 != 0) {
                    FUN_14045a950();
                }
        }
        if (lVar7 != 0) {
            if (*(ulonglong *)(lVar7 + 0x2c0) != 0) {
                piVar8 = *(int **)(lVar7 + 0x2b8);
                uVar9 = uVar10;
                do {
                    if (*piVar8 == *(int *)(param_1 + 1)) break;
                    uVar9 = uVar9 + 1;
                    piVar8 = piVar8 + 1;
                } while (uVar9 < *(ulonglong *)(lVar7 + 0x2c0));
            }
        }
        if (lVar11 != 0) {
            if (*(ulonglong *)(lVar11 + 0x2c0) != 0) {
                piVar8 = *(int **)(lVar11 + 0x2b8);
                do {
                    if (*piVar8 == *(int *)(param_1 + 1)) break;
                    uVar10 = uVar10 + 1;
                    piVar8 = piVar8 + 1;
                } while (uVar10 < *(ulonglong *)(lVar11 + 0x2c0));
            }
        }
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x7d,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x74,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        if (param_1[0x2dd] != 0) {
            uVar6 = FUN_1400518a0(DAT_140c63628,0x74,2);
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        }
        (**(code **)(*DAT_140c65848 + 0x68))();
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x78,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        if (param_1[0x2dd] != 0) {
            uVar6 = FUN_1400518a0(DAT_140c63628,0x78,2);
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        }
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar7 == 0) {
            lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        fVar13 = *(float *)(param_1 + 0x23c) - *(float *)(lVar7 + 0xd0);
        fVar14 = *(float *)((longlong)param_1 + 0x11e4) - *(float *)(lVar7 + 0xd4);
        fVar15 = *(float *)(param_1 + 0x23d) - *(float *)(lVar7 + 0xd8);
        fVar16 = *(float *)((longlong)param_1 + 0x11ec) - *(float *)(lVar7 + 0xdc);
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar7 == 0) {
            lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        if (lVar7 != 0) {
            fVar14 = fVar14 * fVar14;
            rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,CONCAT44(fVar14,fVar14))),
                    CONCAT412(fVar16 * fVar16,
                              CONCAT48(fVar15 * fVar15,CONCAT44(fVar14,fVar13 * fVar13 + fVar14 + 0.0))));
            (**(code **)(*DAT_140c65848 + 0x68))();
        }
        FUN_1407ddb6c();
        plVar1 = (longlong *)param_1[0x2b1];
        uVar6 = FUN_1400518a0(DAT_140c63628,0x79,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        if (param_1[0x2dd] != 0) {
            uVar6 = FUN_1400518a0(DAT_140c63628,0x79,2);
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
        }
        lVar7 = (**(code **)(*DAT_140c65848 + 0x68))();
        plVar1 = (longlong *)param_1[0x2b1];
        fVar15 = *(float *)(param_1 + 0x23c) - *(float *)(lVar7 + 0x30);
        fVar14 = *(float *)((longlong)param_1 + 0x11e4) - *(float *)(lVar7 + 0x34);
        fVar13 = *(float *)(param_1 + 0x23d) - *(float *)(lVar7 + 0x38);
        fVar16 = *(float *)((longlong)param_1 + 0x11ec) - *(float *)(lVar7 + 0x3c);
        fVar14 = fVar14 * fVar14;
        fVar13 = fVar13 * fVar13;
        uVar10 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar14),0);
        uVar9 = uVar10 & 0xffffffff;
        rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,uVar10 << 0x20 | uVar9)),
                CONCAT412(fVar16 * fVar16,
                          CONCAT48(fVar13,CONCAT44(fVar14,fVar15 * fVar15 + (float)uVar9 + fVar13))));
        uVar6 = FUN_1400518a0(DAT_140c63628,0x84,2);
        (**(code **)(*plVar1 + 0x50))(plVar1,uVar6);
        if (param_1[0x2dd] == 0) goto LAB_1404737b3;
        uVar6 = FUN_1400518a0(DAT_140c63628,0x84,2);
    }
    (**(code **)(*(longlong *)param_1[0x2dd] + 0x178))((longlong *)param_1[0x2dd],uVar6);
    LAB_1404737b3:
    if ((param_1[3] != 0) && (param_1[0x2dd] != 0)) {
        iVar5 = *(int *)(param_1[3] + 0x11c);
        if ((iVar5 == 0) && (param_1[0x1a] != 0)) {
            iVar5 = *(int *)(param_1[0x1a] + 0x18);
        }
        if (*(int *)(param_1 + 0x2b4) != iVar5) {
            lVar7 = FUN_1402358c0(iVar5);
            if (lVar7 != 0) {
                (**(code **)(*(longlong *)param_1[0x2b1] + 0x48))
                        ((longlong *)param_1[0x2b1],*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 4))
                        ;
                (**(code **)(*(longlong *)param_1[0x2dd] + 0x170))
                        ((longlong *)param_1[0x2dd],*(undefined4 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 4))
                        ;
            }
            *(int *)(param_1 + 0x2b4) = iVar5;
        }
    }
    return;
}



undefined8 FUN_140473890(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    if (*(longlong *)(param_1 + 0x18) != 0) {
        puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x128);
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar2 == 0) {
            uVar6 = 0x11;
            uVar5 = 0x17;
            uVar4 = 3;
        }
        else {
            uVar6 = *(undefined4 *)(lVar2 + 0xd8);
            uVar5 = *(undefined4 *)(lVar2 + 0xdc);
            uVar4 = *(undefined4 *)(lVar2 + 0x34);
        }
        uVar3 = FUN_140612f70(DAT_140c65898,*puVar1,puVar1[1],*(undefined4 *)(param_1 + 0x35fc),uVar4,
                              uVar5,uVar6);
        if ((int)uVar3 != 0) {
            *(int *)(param_1 + 0x35fc) = (int)uVar3;
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_140473920(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    if (*(longlong *)(param_1 + 0x18) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x128);
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar2 == 0) {
            uVar6 = 0x11;
            uVar5 = 0x17;
            uVar4 = 3;
        }
        else {
            uVar6 = *(undefined4 *)(lVar2 + 0xd8);
            uVar5 = *(undefined4 *)(lVar2 + 0xdc);
            uVar4 = *(undefined4 *)(lVar2 + 0x34);
        }
        uVar3 = FUN_140612f70(DAT_140c65898,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                              *(undefined4 *)(param_1 + 0x3600),uVar4,uVar5,uVar6);
        if ((int)uVar3 != 0) {
            *(int *)(param_1 + 0x3600) = (int)uVar3;
            return uVar3;
        }
    }
    return 0;
}



void FUN_1404739b0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,int param_5,
                   uint param_6)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    int *piVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    ulonglong uVar13;
    undefined4 uVar14;
    undefined2 *puVar15;
    bool bVar16;
    ulonglong local_138;
    longlong local_130;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 local_120;
    undefined4 uStack284;
    longlong local_118;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined local_108 [16];
    longlong local_f8;
    longlong local_f0;
    longlong local_d8;
    longlong local_d0;
    longlong local_48;

    if (param_2 == 0) {
        plVar6 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
        if ((plVar6 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar2 != 0))
        {
            return;
        }
        FUN_14045bf30(param_1,0,0);
        return;
    }
    lVar7 = FUN_1401fdbe0(param_2);
    if (lVar7 == 0) {
        return;
    }
    if ((*(int *)(lVar7 + 0x38) != 0) && (iVar2 = FUN_14047be00(param_1), iVar2 != 0)) {
        return;
    }
    lVar8 = FUN_1403d90d0(DAT_140c65898);
    lVar10 = *(longlong *)(DAT_140c65898 + 0x78);
    local_118 = lVar10;
    if ((*(int *)(lVar7 + 0x2c) != 0) && (*(int *)(param_1 + 0x1428) != 0x3f)) {
        FUN_140470650(param_1,1,1);
    }
    if ((*(int *)(lVar7 + 0x38) == 0) ||
        (((*(int *)(lVar7 + 0x3c) == *(int *)(param_1 + 0x1b8) &&
           (param_2 == *(int *)(param_1 + 0x1cc))) ||
          (FUN_14045bf30(param_1,*(int *)(lVar7 + 0x3c),param_2), *(int *)(param_1 + 0x1d0) == param_2))
        )) {
        FUN_140474400(param_1,param_2,1);
    }
    if (param_5 == 0) {
        iVar2 = *(int *)(lVar7 + 0xc);
    }
    else if (lVar8 == 0) {
        iVar2 = *(int *)(lVar7 + 0x4c);
    }
    else if (lVar8 == param_1) {
        iVar2 = *(int *)(lVar7 + 0x28);
    }
    else {
        iVar2 = *(int *)(lVar7 + 0x1c);
    }
    uVar3 = FUN_140470540(param_1,iVar2);
    *(undefined4 *)(param_1 + 0x1d8) = uVar3;
    if ((iVar2 != 0) &&
        ((((*(int *)(lVar7 + 0x38) == 0 || (*(int *)(lVar7 + 0x3c) == 0)) ||
           ((*(int *)(lVar7 + 0x3c) == 7 && (iVar2 != *(int *)(lVar7 + 0x54))))) &&
          (*(longlong *)(param_1 + 0x16e8) != 0)))) {
        uVar3 = FUN_140470540(param_1,iVar2);
        piVar9 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                (*(longlong **)(param_1 + 0x16e8),uVar3,param_4);
        lVar10 = local_118;
        if (*piVar9 != 0x96) {
            iVar1 = *(int *)(param_1 + 0x1428);
            FUN_140470b80(param_1,~piVar9[2] & 1,piVar9[2] & 8);
            if ((*(int *)(param_1 + 0x1428) == 0x3f) != (iVar1 == 0x3f)) {
                uVar3 = FUN_140470540(param_1,iVar2);
                piVar9 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),uVar3,param_4);
                if (*piVar9 == 0x96) {
                    uVar5 = *(uint *)(param_1 + 0x1428);
                    lVar10 = local_118;
                    if (*(longlong *)(param_1 + 0xcc0) != 0) {
                        uVar4 = FUN_140467ed0();
                        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xfffffffb;
                        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | ~uVar5 & 4;
                        uVar5 = *(uint *)(param_1 + 0x142c);
                        if (((uVar4 & 0xfffffff6) == 0) && (uVar4 != 1)) {
                            uVar5 = 0x3f;
                        }
                        lVar10 = local_118;
                        if (*(uint *)(param_1 + 0x1428) != uVar5) {
                            if (uVar5 == 0x3f) {
                                FUN_140195d70(param_1 + 0x1430);
                                FUN_140195d70(param_1 + 0x1478);
                                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))
                                        (*(longlong **)(param_1 + 0xcc0),3,3);
                                *(undefined4 *)(param_1 + 0x14c0) = 1;
                                if (*(longlong *)(param_1 + 0x16e8) != 0) {
                                    FUN_140471ef0(param_1,1,1);
                                    FUN_140471ef0(param_1,1,0);
                                }
                            }
                            else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
                                local_138 = local_138 & 0xffffffff00000000;
                                local_128 = 0x40471e50;
                                uStack292 = 1;
                                local_120 = 0;
                                uStack284 = 0;
                                local_130 = param_1;
                                FUN_140195960(param_1 + 0x1430,0x96,&local_138,4);
                                local_128 = 0x40471ea0;
                                uStack292 = 1;
                                local_138 = local_138 & 0xffffffff00000000;
                                local_120 = 0;
                                uStack284 = 0;
                                local_130 = param_1;
                                FUN_140195960(param_1 + 0x1478,0x96,&local_138,4);
                                *(undefined4 *)(param_1 + 0x14c0) = 1;
                            }
                            if ((uVar5 & 4) != 0) {
                                FUN_140195d70();
                            }
                            if ((uVar5 & 0x10) != 0) {
                                FUN_140195d70();
                            }
                            *(uint *)(param_1 + 0x1428) = uVar5;
                            lVar10 = local_118;
                        }
                    }
                    goto LAB_140473ee0;
                }
            }
            uVar13 = (ulonglong)piVar9[4];
            if (*piVar9 == iVar2) {
                if (uVar13 < 8) {
                    uVar14 = *(undefined4 *)(&DAT_140b670f0 + uVar13 * 4);
                }
                else {
                    uVar14 = 9;
                }
            }
            else if (uVar13 < 8) {
                uVar14 = *(undefined4 *)(&DAT_140b67110 + uVar13 * 4);
            }
            else {
                uVar14 = 0xd;
            }
            lVar10 = FUN_1404695e0(param_1);
            if ((((*(int *)(param_1 + 0x12e0) != 0) && (*(float *)(param_1 + 0x12d4) == 0.0)) &&
                 (1e-05 < (float)(*(uint *)(param_1 + 0x12c8) & 0x7fffffff))) &&
                (((*(int *)(param_1 + 0x1354) == 0 || ((*(byte *)(piVar9 + 1) & 2) != 0)) ||
                  ((lVar10 != 0 &&
                    ((*(uint *)(*(longlong *)(*(longlong *)(lVar10 + 0x138) + 0x70) + 0x108) & 0x400000) != 0
                    )))))) {
                *(undefined4 *)(param_1 + 0x1310) = 1;
                *(undefined4 *)(param_1 + 0x12d4) = 0x3e19999a;
                local_138 = 0;
                local_130 = 0x3f800000;
                local_128 = 0;
                uStack292 = 0;
                local_120 = 0;
                uStack284 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                        (*(longlong **)(param_1 + 0x16e8),7,&local_138);
            }
            local_138 = CONCAT44(param_4,uVar3);
            local_130 = 0x3f800000;
            uStack292 = 2;
            local_120 = 0;
            uStack284 = 0;
            local_128 = uVar14;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),4,&local_138);
            plVar6 = *(longlong **)(param_1 + 0x15e0);
            lVar10 = local_118;
            if (((plVar6 != (longlong *)0x0) && (*(int *)((longlong)plVar6 + 0x1a4) != 0)) &&
                ((*(undefined4 *)((longlong)plVar6 + 0x1a4) = 0, *(int *)(plVar6 + 0x35) == 2 ||
                                                                 ((*(int *)(plVar6 + 0x3f) == 0 || (*(int *)((longlong)plVar6 + 0x1fc) != 0)))))) {
                (**(code **)(*plVar6 + 0x50))(plVar6,1);
                lVar10 = local_118;
            }
        }
    }
    LAB_140473ee0:
    plVar6 = (longlong *)(param_1 + 0x1a0);
    if ((*(int *)plVar6 != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
        uVar5 = FUN_1405e2410(DAT_140c65ba0,plVar6,1);
        param_6 = param_6 | uVar5;
    }
    if (param_6 == 0) {
        FUN_1404dde90(local_108);
        lVar11 = FUN_14018b280(0x60);
        if (lVar11 == 0) {
            plVar12 = (longlong *)0x0;
        }
        else {
            plVar12 = (longlong *)FUN_1404db7e0(lVar11,param_1);
        }
        lVar11 = 0;
        local_130 = 0;
        local_128 = 0;
        uStack292 = 0;
        local_120 = 0;
        uStack284 = 0;
        do {
            lVar11 = lVar11 + 1;
        } while (*(short *)(&DAT_140b0a7c8 + lVar11 * 2) != 0);
        FUN_14001c1b0(&local_138,&DAT_140b0a7c8,&DAT_140b0a7c8 + lVar11 * 2);
        FUN_1400b7480(local_108,plVar12);
        (**(code **)(*plVar12 + 0x48))(plVar12,&local_138);
        if (local_130 != 0) {
            FUN_14018b900(local_130,0);
        }
        if (param_5 == 0) {
            if (lVar10 == param_1) {
                FUN_1400b75f0(local_108,*(undefined4 *)(lVar7 + 8));
            }
            else {
                FUN_1400b75f0(local_108,*(undefined4 *)(lVar7 + 4));
            }
        }
        else if (lVar8 == 0) {
            if (lVar10 == param_1) {
                FUN_1400b75f0(local_108,*(undefined4 *)(lVar7 + 0x48));
            }
            else {
                FUN_1400b75f0(local_108,*(undefined4 *)(lVar7 + 0x44));
            }
        }
        else {
            lVar11 = FUN_14018b280(0x60);
            if (lVar8 == param_1) {
                if (lVar11 == 0) {
                    plVar12 = (longlong *)0x0;
                }
                else {
                    plVar12 = (longlong *)FUN_1404db7e0(lVar11,lVar8);
                }
                lVar8 = 0;
                local_130 = 0;
                local_128 = 0;
                uStack292 = 0;
                local_120 = 0;
                uStack284 = 0;
                do {
                    lVar8 = lVar8 + 1;
                } while (L"target"[lVar8] != L'\0');
                FUN_14001c1b0(&local_138,L"target",L"target" + lVar8);
                FUN_1400b7480(local_108,plVar12);
                (**(code **)(*plVar12 + 0x48))(plVar12,&local_138);
                if (local_130 != 0) {
                    FUN_14018b900(local_130,0);
                }
                if (lVar10 == param_1) {
                    uVar3 = *(undefined4 *)(lVar7 + 0x24);
                }
                else {
                    uVar3 = *(undefined4 *)(lVar7 + 0x20);
                }
            }
            else {
                if (lVar11 == 0) {
                    plVar12 = (longlong *)0x0;
                }
                else {
                    plVar12 = (longlong *)FUN_1404db7e0(lVar11,lVar8);
                }
                lVar11 = 0;
                local_130 = 0;
                local_128 = 0;
                uStack292 = 0;
                local_120 = 0;
                uStack284 = 0;
                do {
                    lVar11 = lVar11 + 1;
                } while (L"target"[lVar11] != L'\0');
                FUN_14001c1b0(&local_138,L"target",L"target" + lVar11);
                FUN_1400b7480(local_108,plVar12);
                (**(code **)(*plVar12 + 0x48))(plVar12,&local_138);
                if (local_130 != 0) {
                    FUN_14018b900(local_130,0);
                }
                if (lVar10 == param_1) {
                    uVar3 = *(undefined4 *)(lVar7 + 0x18);
                }
                else if (lVar10 == lVar8) {
                    uVar3 = *(undefined4 *)(lVar7 + 0x14);
                }
                else {
                    uVar3 = *(undefined4 *)(lVar7 + 0x10);
                }
            }
            FUN_1400b75f0(local_108,uVar3);
        }
        if ((local_f8 != local_f0) && (local_d8 != local_d0)) {
            if ((lVar10 == param_1) || ((*(int *)plVar6 == 0 || (*(longlong *)(param_1 + 0x1a8) == 0)))) {
                lVar7 = FUN_1400b7660(local_108);
                FUN_140474b80(param_1,0x1b,*(undefined8 *)(lVar7 + 8));
            }
            else {
                local_118 = *plVar6;
                uStack272 = *(undefined4 *)(param_1 + 0x1a8);
                uStack268 = *(undefined4 *)(param_1 + 0x1ac);
                lVar7 = FUN_1400b7660(local_108);
                puVar15 = &DAT_140b7b704;
                if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
                    puVar15 = *(undefined2 **)(param_1 + 0x10);
                }
                uVar3 = FUN_140405ac0(DAT_140c658a0,&local_118,puVar15,*(undefined8 *)(lVar7 + 8));
                local_138 = 0;
                local_130 = 0;
                local_128 = 0;
                uStack292 = 0;
                local_120 = 0;
                uStack284 = 0;
                lVar7 = FUN_1400b7660(local_108);
                local_138 = *(ulonglong *)(lVar7 + 8);
                bVar16 = false;
                if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                    bVar16 = *(int *)(param_1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
                }
                puVar15 = &DAT_140b7b704;
                if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
                    puVar15 = *(undefined2 **)(param_1 + 0x10);
                }
                FUN_1404045c0(DAT_140c658a0,0x1b,0,*(undefined4 *)(param_1 + 8),puVar15,0,0,&local_138,
                              bVar16,0,0,0,uVar3,*(undefined *)(param_1 + 0x1b2));
            }
        }
        if (local_48 != 0) {
            FUN_14018b900(local_48,0);
        }
        FUN_1400b7390(local_108);
    }
    return;
}



void FUN_1404742e0(longlong param_1)

{
    longlong *plVar1;
    undefined8 local_48;
    undefined4 local_40;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;
    int local_28 [7];
    undefined4 local_c;

    if ((*(int *)(param_1 + 0x1d8) != 0) &&
        (plVar1 = *(longlong **)(param_1 + 0x16e8), plVar1 != (longlong *)0x0)) {
        local_c = 0;
        (**(code **)(*plVar1 + 0x250))(plVar1,4,local_28);
        if ((local_28[0] == *(int *)(param_1 + 0x1d8)) && (*(longlong *)(param_1 + 0x16e8) != 0)) {
            local_48 = (ulonglong)local_48._4_4_ << 0x20;
            local_38 = 0x40470d80;
            uStack52 = 1;
            local_40 = (undefined4)param_1;
            uStack60 = (undefined4)((ulonglong)param_1 >> 0x20);
            local_30 = 0;
            uStack44 = 0;
            FUN_140195960(param_1 + 0x1398,2000,&local_48,4);
            local_48 = 0;
            local_40 = 0x3f800000;
            uStack60 = 0;
            local_38 = 0;
            uStack52 = 0;
            local_30 = 0;
            uStack44 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),4,&local_48);
            plVar1 = *(longlong **)(param_1 + 0x15e0);
            if (((plVar1 != (longlong *)0x0) && (*(int *)((longlong)plVar1 + 0x1a4) != 0)) &&
                ((*(undefined4 *)((longlong)plVar1 + 0x1a4) = 0, *(int *)(plVar1 + 0x35) == 2 ||
                                                                 ((*(int *)(plVar1 + 0x3f) == 0 || (*(int *)((longlong)plVar1 + 0x1fc) != 0)))))) {
                (**(code **)(*plVar1 + 0x50))(plVar1,1);
            }
        }
    }
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    return;
}



void FUN_140474400(longlong param_1,int param_2,int param_3)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    ulonglong local_40;
    LPVOID local_38;
    undefined8 local_30;
    undefined4 local_28;

    lVar3 = FUN_1401fdbe0();
    uVar2 = 0;
    if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x38) == 0) goto LAB_14047445d;
        if ((*(byte *)(lVar3 + 0x5c) & 1) != 0) {
            *(undefined4 *)(param_1 + 0x1314) = 1;
            goto LAB_14047445d;
        }
        if (*(int *)(lVar3 + 0x38) == 0) goto LAB_14047445d;
    }
    *(undefined4 *)(param_1 + 0x1314) = 0;
    LAB_14047445d:
    if ((((lVar3 == 0) || (*(int *)(lVar3 + 0x38) != 0)) && (*(int *)(param_1 + 0x1d4) != 0)) &&
        ((param_3 != 0 || (*(int *)(param_1 + 0x1dc) != param_2)))) {
        if (*(int *)(param_1 + 0x1dc) != 0) {
            lVar4 = FUN_1401fdbe0();
            lVar4 = FUN_140248f00(*(undefined4 *)(lVar4 + 0x58));
            if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x58) & 0x200) != 0)) {
                FUN_1404742e0(param_1);
            }
        }
        FUN_140578050(DAT_140c65b78,*(undefined4 *)(param_1 + 0x1d4),1);
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x58) != 0)) && (param_2 != *(int *)(param_1 + 0x1dc))) {
        if (*(int *)(lVar3 + 0x38) == 0) {
            lVar4 = FUN_140248f00();
            if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x58) & 4) != 0)) {
                local_60 = 0;
                local_68 = &PTR_LAB_140b5e648;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_68);
                local_48 = local_68;
                local_res8 = 0x141e02730;
                local_40 = local_60;
                local_38 = local_58;
                iVar1 = FUN_1401971e0(&DAT_140c8accc,0x16,&local_res8,param_2,&local_48);
                local_68 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_58);
                if (iVar1 == 0) {
                    return;
                }
                DebugBreak();
                return;
            }
        }
        else {
            if ((*(int *)(param_1 + 0x1b8) == 7) &&
                (iVar1 = FUN_1403deec0(*(int *)(lVar3 + 0x58),*(undefined4 *)(param_1 + 0x1bc),
                                       *(undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1cc),
                                       &local_res8), iVar1 != 0)) {
                *(undefined4 *)(param_1 + 0x1e0) = 1;
                return;
            }
            uVar2 = FUN_140579a90();
            *(int *)(param_1 + 0x1dc) = param_2;
            *(undefined4 *)(param_1 + 0x1d4) = uVar2;
        }
        local_30 = 0;
        local_28 = 0;
        local_48 = (undefined **)CONCAT44(*(undefined4 *)(param_1 + 8),uVar2);
        local_40 = (ulonglong)*(uint *)(lVar3 + 0x58);
        local_38 = (LPVOID)0x0;
        FUN_140577660(DAT_140c65b78,&local_48);
    }
    return;
}



void FUN_140474660(longlong param_1,int param_2)

{
    bool bVar1;
    undefined4 uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    int *piVar8;
    uint uVar9;
    int local_48;
    undefined4 local_44;
    longlong local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;

    uVar9 = 8;
    if ((((param_2 != 0) && (lVar7 = FUN_1401fdbe0(param_2), lVar7 != 0)) &&
         (*(int *)(lVar7 + 0x38) != 0)) &&
        (((*(longlong **)(param_1 + 0x16e8) != (longlong *)0x0 && (*(int *)(lVar7 + 0x3c) == 7)) &&
          (*(int *)(lVar7 + 0x54) != 0)))) {
        lVar7 = **(longlong **)(param_1 + 0x16e8);
        uVar2 = FUN_140470540(param_1);
        piVar8 = (int *)(**(code **)(lVar7 + 0x1a8))(*(undefined8 *)(param_1 + 0x16e8),uVar2,0);
        if ((*piVar8 != 0x96) && (uVar9 = 8, (*(byte *)(piVar8 + 2) & 1) == 0)) {
            uVar9 = 0;
        }
    }
    if (*(longlong *)(param_1 + 0xcc0) != 0) {
        uVar3 = FUN_140467ed0();
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xfffffff7;
        *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | uVar9;
        uVar9 = *(uint *)(param_1 + 0x142c);
        bVar1 = false;
        if (((uVar3 & 0xfffffff6) == 0) && (bVar1 = false, uVar3 != 1)) {
            bVar1 = true;
            uVar9 = 0x3f;
        }
        if (*(uint *)(param_1 + 0x1428) != uVar9) {
            if (uVar9 == 0x3f) {
                if (((bVar1) || (*(longlong *)(param_1 + 0x16e8) == 0)) ||
                    ((*(int *)(param_1 + 0x1b8) != 0 ||
                      (((*(int *)(param_1 + 0x1bc) != 0 || (iVar4 = FUN_140470540(param_1,0x1a34), iVar4 == 0)
                        ) || (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                              (*(longlong **)(param_1 + 0x16e8),iVar4), iVar5 == 0)))))) {
                    FUN_140195d70(param_1 + 0x1430);
                    FUN_140195d70(param_1 + 0x1478);
                    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))
                            (*(longlong **)(param_1 + 0xcc0),3,3);
                    *(undefined4 *)(param_1 + 0x14c0) = 1;
                    if (*(longlong *)(param_1 + 0x16e8) != 0) {
                        FUN_140471ef0(param_1,1,1);
                        FUN_140471ef0(param_1,1);
                    }
                }
                else {
                    local_44 = FUN_1401ae6a0(0,0xffff);
                    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                            (*(longlong **)(param_1 + 0x16e8),iVar4,local_44);
                    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar4,local_44,0x39);
                    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar4,local_44,0x37);
                    if (uVar6 < uVar3) {
                        uVar3 = uVar6;
                    }
                    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                            (*(longlong **)(param_1 + 0x16e8),iVar4,local_44,0x38);
                    if (uVar6 == 0xffffffff) {
                        uVar6 = *(uint *)(lVar7 + 0x14) >> 1;
                    }
                    if (uVar3 == 0xffffffff) {
                        uVar3 = uVar6;
                    }
                    local_48 = 0;
                    local_30 = 0;
                    uStack44 = 0;
                    if (*(uint *)(lVar7 + 0x14) < uVar3) {
                        uVar3 = *(uint *)(lVar7 + 0x14);
                    }
                    local_38 = 0x40471db0;
                    uStack52 = 1;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,uVar3,&local_48,4);
                    if (*(uint *)(lVar7 + 0x14) < uVar6) {
                        uVar6 = *(uint *)(lVar7 + 0x14);
                    }
                    local_48 = 0;
                    local_38 = 0x40471e00;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,uVar6,&local_48,4);
                    local_40 = 0x3f800000;
                    local_38 = 0x21;
                    uStack52 = 2;
                    local_30 = 0;
                    uStack44 = 0;
                    local_48 = iVar4;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                            (*(longlong **)(param_1 + 0x16e8),6,&local_48);
                }
            }
            else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
                if ((((bVar1) || (*(longlong *)(param_1 + 0x16e8) == 0)) || (*(int *)(param_1 + 0x1b8) != 0)
                    ) || (((*(int *)(param_1 + 0x1bc) != 0 ||
                            (iVar4 = FUN_1404705d0(param_1,(*(int *)(param_1 + 0x2ac) != 0) + 0x1a35,uVar3,0)
                                    , iVar4 == 0)) ||
                           (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                                   (*(longlong **)(param_1 + 0x16e8),iVar4), iVar5 == 0)))) {
                    local_48 = 0;
                    local_38 = 0x40471e50;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,0x96,&local_48,4);
                    local_38 = 0x40471ea0;
                    uStack52 = 1;
                    local_48 = 0;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,0x96,&local_48,4);
                }
                else {
                    local_44 = FUN_1401ae6a0(0);
                    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                            (*(longlong **)(param_1 + 0x16e8),iVar4,local_44);
                    uVar3 = *(uint *)(lVar7 + 0x18);
                    local_48 = 0;
                    local_38 = 0x40471e50;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    if (*(uint *)(lVar7 + 0x14) < uVar3) {
                        uVar3 = *(uint *)(lVar7 + 0x14);
                    }
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1430,uVar3,&local_48,4);
                    uVar3 = *(uint *)(lVar7 + 0x18);
                    if (*(uint *)(lVar7 + 0x14) < uVar3) {
                        uVar3 = *(uint *)(lVar7 + 0x14);
                    }
                    local_48 = 0;
                    local_38 = 0x40471ea0;
                    uStack52 = 1;
                    local_30 = 0;
                    uStack44 = 0;
                    local_40 = param_1;
                    FUN_140195960(param_1 + 0x1478,uVar3,&local_48,4);
                    local_40 = 0x3f800000;
                    local_38 = 0x21;
                    uStack52 = 2;
                    local_30 = 0;
                    uStack44 = 0;
                    local_48 = iVar4;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                            (*(longlong **)(param_1 + 0x16e8),6,&local_48);
                }
                *(undefined4 *)(param_1 + 0x14c0) = 1;
            }
            if ((uVar9 & 4) != 0) {
                FUN_140195d70(param_1 + 0x1398);
            }
            if ((uVar9 & 0x10) != 0) {
                FUN_140195d70(param_1 + 0x13e0);
            }
            *(uint *)(param_1 + 0x1428) = uVar9;
        }
    }
    return;
}



void FUN_140474b80(longlong param_1,undefined8 param_2,longlong param_3)

{
    undefined2 *puVar1;

    if (param_3 != 0) {
        puVar1 = &DAT_140b7b704;
        if (*(undefined2 **)(param_1 + 0x10) != (undefined2 *)0x0) {
            puVar1 = *(undefined2 **)(param_1 + 0x10);
        }
        FUN_140003890(DAT_140c658a0,param_2,0,param_3,*(undefined4 *)(param_1 + 8),puVar1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 *
FUN_140474bc0(undefined4 *param_1,short *param_2,longlong *param_3,undefined4 param_4,
              undefined4 param_5)

{
    short sVar1;
    undefined8 uVar2;
    char cVar3;
    short sVar7;
    short sVar8;
    short sVar9;
    ulonglong uVar10;
    unkbyte10 Var11;
    undefined auVar12 [12];
    undefined auVar13 [14];
    short sVar14;
    undefined4 uVar15;
    undefined6 uVar16;
    uint uVar17;
    uint uVar18;
    ulonglong uVar19;
    longlong lVar20;
    longlong lVar21;
    undefined8 *puVar22;
    int iVar23;
    uint uVar25;
    int iVar26;
    undefined extraout_XMM0 [16];
    undefined auVar24 [16];
    int iVar27;
    undefined in_XMM1_Ba;
    undefined in_XMM1_Bb;
    undefined in_XMM1_Bc;
    undefined in_XMM1_Bd;
    undefined in_XMM1_Be;
    undefined in_XMM1_Bf;
    undefined in_XMM1_Bg;
    undefined in_XMM1_Bh;
    undefined in_XMM1_Bi;
    undefined in_XMM1_Bj;
    undefined in_XMM1_Bk;
    char cVar28;
    undefined in_XMM1_Bl;
    undefined in_XMM1_Bm;
    undefined in_XMM1_Bn;
    undefined in_XMM1_Bo;
    char cVar29;
    undefined in_XMM1_Bp;
    longlong local_res8;
    char cVar4;
    char cVar5;
    char cVar6;

    lVar21 = 0;
    *param_1 = param_4;
    param_1[1] = param_5;
    uVar25 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
             CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
    uVar17 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
             CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
    uVar18 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
             CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
    *(undefined (*) [16])(param_1 + 4) =
            CONCAT115((char)(uVar18 >> 0x18),
                      CONCAT114((char)(uVar18 >> 0x10),
                                CONCAT113((char)(uVar18 >> 8),
                                          CONCAT112((char)uVar18,
                                                    CONCAT111((char)(uVar17 >> 0x18),
                                                              CONCAT110((char)(uVar17 >> 0x10),
                                                                        CONCAT19((char)(uVar17 >> 8),
                                                                                 CONCAT18((char)uVar17,
                                                                                          CONCAT17((char)
                                                                                                           (uVar25 >> 0x18),
                                                                                                   CONCAT16((char)(uVar25 >> 0x10),
                                                                                                            CONCAT15((char)(uVar25 >> 8),
                                                                                                                     CONCAT14((char)uVar25,
                                                                                                                              CONCAT13(in_XMM1_Bd,
                                                                                                                                       CONCAT12(
                                                                                                                                               in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
                                                                                                                              CONCAT13(in_XMM1_Bd,
                                                                                                                                       CONCAT12(in_XMM1_Bc,
                                                                                                                                                CONCAT11(in_XMM1_Bb,in_XMM1_Ba))
                                                                                                                              )))))))))))));
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    sVar1 = *param_2;
    lVar20 = lVar21;
    while (sVar1 != 0) {
        lVar20 = lVar20 + 1;
        sVar1 = param_2[lVar20];
    }
    *(longlong *)(param_1 + 2) = lVar20;
    lVar20 = FUN_14018b280(0x360,8);
    if (lVar20 != 0) {
        lVar21 = FUN_14013feb0(lVar20,*(undefined8 *)(DAT_140c65898 + 0x7340));
    }
    *(longlong *)(param_1 + 8) = lVar21;
    FUN_140141100();
    iVar23 = DAT_140c47670;
    if (*DAT_140c63750 < DAT_140c47670) {
        iVar23 = *DAT_140c63750;
    }
    auVar24 = maxps(extraout_XMM0 & (undefined  [16])0x0,
                    *(undefined (*) [16])(&DAT_140c47680 + (longlong)iVar23 * 0x10));
    auVar24 = minps(auVar24,_DAT_140b7b240);
    iVar23 = (int)(SUB164(auVar24,0) * 255.0 + 0.5);
    uVar25 = (uint)(SUB164(auVar24 >> 0x20,0) * 255.0 + 0.5);
    iVar26 = (int)(SUB164(auVar24 >> 0x40,0) * 255.0 + 0.5);
    iVar27 = (int)(SUB164(auVar24 >> 0x60,0) * 255.0 + 0.5);
    cVar28 = (char)((uint)iVar23 >> 0x10);
    cVar29 = (char)((uint)iVar27 >> 0x10);
    uVar19 = (ulonglong)
            CONCAT16((char)(uVar25 >> 0x10),
                     CONCAT15((char)(uVar25 >> 8),CONCAT14((char)uVar25,iVar26)));
    uVar10 = ((ulonglong)uVar25 & 0xff000000) << 0x20 | uVar19;
    Var11 = CONCAT19((char)((uint)iVar23 >> 8),CONCAT18((char)iVar23,uVar10));
    auVar12 = CONCAT111((char)((uint)iVar23 >> 0x18),CONCAT110(cVar28,Var11));
    auVar13 = CONCAT113((char)((uint)iVar27 >> 8),CONCAT112((char)iVar27,auVar12));
    sVar1 = (short)iVar26;
    cVar3 = (0 < sVar1) * (sVar1 < 0xff) * (char)iVar26 - (0xff < sVar1);
    sVar1 = (short)(uVar19 >> 0x10);
    sVar7 = (short)(uVar19 >> 0x20);
    cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char)(uVar19 >> 0x20) - (0xff < sVar7);
    sVar7 = (short)(uVar10 >> 0x30);
    sVar8 = (short)((unkuint10)Var11 >> 0x40);
    cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar23 - (0xff < sVar8);
    sVar8 = SUB122(auVar12 >> 0x50,0);
    sVar9 = SUB142(auVar13 >> 0x60,0);
    cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar27 - (0xff < sVar9);
    sVar9 = SUB162(CONCAT115((char)((uint)iVar27 >> 0x18),CONCAT114(cVar29,auVar13)) >> 0x70,0);
    sVar14 = CONCAT11((0 < sVar1) * (sVar1 < 0xff) * (char)(uVar19 >> 0x10) - (0xff < sVar1),cVar3);
    uVar15 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char)(uVar19 >> 0x30) - (0xff < sVar7),
                      CONCAT12(cVar4,sVar14));
    uVar16 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar28 - (0xff < sVar8),CONCAT14(cVar5,uVar15));
    sVar1 = (short)((uint)uVar15 >> 0x10);
    sVar7 = (short)((uint6)uVar16 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar29 - (0xff < sVar9),
                             CONCAT16(cVar6,uVar16)) >> 0x30);
    puVar22 = (undefined8 *)
            FUN_14018d540(&local_res8,&DAT_140b034e4,
                          CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                                   CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 - (0xff < sVar7),
                                            CONCAT11((0 < sVar1) * (sVar1 < 0xff) * cVar4 -
                                                     (0xff < sVar1),
                                                     (0 < sVar14) * (sVar14 < 0xff) * cVar3 -
                                                     (0xff < sVar14)))));
    uVar2 = *puVar22;
    puVar22 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
    FUN_140141600(*(undefined8 *)(param_1 + 8),param_2,*puVar22,uVar2);
    if (local_res8 != 0) {
        (**(code **)(*(longlong *)(local_res8 + -0x10) + 8))(local_res8 + -0x10);
    }
    return param_1;
}



undefined4 * FUN_140474d20(undefined4 *param_1,longlong *param_2,undefined4 param_3)

{
    longlong *plVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar7;
    undefined4 in_XMM3_Da;

    param_1[1] = in_XMM3_Da;
    *param_1 = param_3;
    uVar5 = 0;
    *(undefined (*) [16])(param_1 + 4) = ZEXT816(0);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    lVar4 = FUN_14018b280(0x360,8);
    uVar7 = extraout_XMM0_Da;
    if (lVar4 != 0) {
        uVar5 = FUN_14013feb0(lVar4,*(undefined8 *)(DAT_140c65898 + 0x7340));
        uVar7 = extraout_XMM0_Da_00;
    }
    piVar3 = DAT_140c63750;
    *(undefined8 *)(param_1 + 8) = uVar5;
    iVar2 = DAT_140c48100;
    if (*piVar3 < DAT_140c48100) {
        iVar2 = *piVar3;
    }
    FUN_140141100(uVar7,*(undefined4 *)(&DAT_140c48110 + (longlong)iVar2 * 4),uVar5);
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    lVar4 = *(longlong *)(param_1 + 8);
    plVar1 = (longlong *)(lVar4 + 0x18);
    if (plVar1 != plVar6) {
        (**(code **)(*plVar1 + 0x78))(plVar1,0);
        FUN_1401a7460(plVar1,plVar6);
    }
    FUN_1401411c0(lVar4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x348);
    return param_1;
}



undefined4 * FUN_140474e10(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_14001c1b0(param_1 + 2,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    uVar1 = param_2[0x19];
    uVar2 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    if (*(undefined8 **)(param_1 + 0xe) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(param_1 + 0xe))();
    }
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(param_1 + 0x10))();
    }
    return param_1;
}



undefined4 * FUN_140474ec0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    if (param_1 != param_2) {
        if (*(undefined8 **)(param_2 + 0xe) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(param_2 + 0xe))();
        }
        if (*(undefined8 **)(param_2 + 0x10) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(param_2 + 0x10))();
        }
        if (*(longlong **)(param_1 + 0xe) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xe) + 8))();
            *(undefined8 *)(param_1 + 0xe) = 0;
        }
        if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
            *(undefined8 *)(param_1 + 0x10) = 0;
        }
        *param_1 = *param_2;
        if (param_2 + 2 != param_1 + 2) {
            FUN_14001c480(param_1 + 2,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
        }
        param_1[10] = param_2[10];
        param_1[0xb] = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        param_1[0x12] = param_2[0x12];
        param_1[0x13] = param_2[0x13];
        param_1[0x15] = param_2[0x15];
        uVar1 = param_2[0x19];
        uVar2 = param_2[0x1a];
        uVar3 = param_2[0x1b];
        param_1[0x18] = param_2[0x18];
        param_1[0x19] = uVar1;
        param_1[0x1a] = uVar2;
        param_1[0x1b] = uVar3;
        param_1[0x16] = param_2[0x16];
        param_1[0x14] = param_2[0x14];
    }
    return param_1;
}



void FUN_140474fa0(longlong param_1)

{
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,param_1);
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
        *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x10),0);
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_140475020(longlong param_1,float *param_2,longlong param_3,undefined4 param_4,
                      float param_5,float param_6)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    float *pfVar4;
    longlong lVar5;
    longlong lVar6;
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
    undefined local_98 [16];
    undefined local_88 [112];

    fVar7 = (float)(**(code **)(**(longlong **)(param_3 + 0x40) + 0x78))();
    lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
    fVar14 = _DAT_140c78410 * fVar7;
    fVar15 = fRam0000000140c78414 * fVar7;
    fVar17 = _DAT_140c78430 * fVar7;
    fVar18 = fRam0000000140c78434 * fVar7;
    fVar16 = _DAT_140c78420 * fVar7;
    fVar7 = fRam0000000140c78424 * fVar7;
    if (lVar6 == 0) {
        lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar9 = _DAT_140c78440;
    fVar11 = fRam0000000140c78444;
    lVar3 = (**(code **)(*DAT_140c65670 + 0x248))();
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x350))
            (*(longlong **)(param_1 + 0x16e8),param_4);
    fVar13 = *(float *)(param_3 + 0x2c);
    if (iVar2 == 0) {
        lVar5 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar5 == 0) {
            lVar5 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        fVar10 = *(float *)(param_3 + 0x28) +
                 *(float *)(param_1 + 0x1234) * *(float *)(lVar5 + 0x70) +
                 *(float *)(param_1 + 0x1230) * *(float *)(lVar5 + 0x60) +
                 *(float *)(param_1 + 0x1238) * *(float *)(lVar5 + 0x80) + *(float *)(lVar5 + 0x90);
        fVar13 = fVar13 + *(float *)(param_1 + 0x1234) * *(float *)(lVar5 + 0x74) +
                 *(float *)(param_1 + 0x1230) * *(float *)(lVar5 + 100) +
                 *(float *)(param_1 + 0x1238) * *(float *)(lVar5 + 0x84) +
                 *(float *)(lVar5 + 0x94);
        pfVar4 = (float *)(**(code **)(**(longlong **)(param_3 + 0x40) + 0x88))
                (*(longlong **)(param_3 + 0x40),local_88);
        fVar8 = (*pfVar4 + fVar10) * fVar14;
        fVar10 = (*pfVar4 + fVar10) * fVar15;
        fVar14 = (pfVar4[1] + fVar13) * fVar16;
        fVar15 = (pfVar4[1] + fVar13) * fVar7;
    }
    else {
        fVar12 = *(float *)(param_3 + 0x28);
        pfVar4 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x358))
                (*(longlong **)(param_1 + 0x16e8),local_98,param_4,0);
        fVar12 = *pfVar4 + fVar12;
        fVar13 = pfVar4[1] + fVar13;
        pfVar4 = (float *)(**(code **)(**(longlong **)(param_3 + 0x40) + 0x88))
                (*(longlong **)(param_3 + 0x40),local_88);
        fVar8 = (pfVar4[1] + fVar13) * fVar16;
        fVar10 = (pfVar4[1] + fVar13) * fVar7;
        fVar14 = (*pfVar4 + fVar12) * fVar14;
        fVar15 = (*pfVar4 + fVar12) * fVar15;
    }
    fVar9 = fVar8 + fVar14 + fVar17 * 0.0 + fVar9;
    fVar11 = fVar10 + fVar15 + fVar18 * 0.0 + fVar11;
    fVar7 = *(float *)(lVar6 + 0xf4);
    fVar14 = *(float *)(lVar6 + 0xe4);
    fVar15 = *(float *)(lVar6 + 0x104);
    fVar16 = *(float *)(lVar6 + 0x114);
    fVar17 = 1.0 / (fVar11 * *(float *)(lVar6 + 0xfc) + fVar9 * *(float *)(lVar6 + 0xec) +
                    *(float *)(lVar6 + 0x10c) * 0.0 + *(float *)(lVar6 + 0x11c));
    uVar1 = *(uint *)(lVar3 + 0xc);
    fVar18 = (float)(int)(((fVar11 * *(float *)(lVar6 + 0xf0) + fVar9 * *(float *)(lVar6 + 0xe0) +
                            *(float *)(lVar6 + 0x100) * 0.0 + *(float *)(lVar6 + 0x110)) * 0.5 *
                           fVar17 + 0.5) * (float)(ulonglong)*(uint *)(lVar3 + 8) + 0.5) -
             param_5 * 0.5;
    *param_2 = fVar18;
    fVar7 = (float)(int)((0.5 - (fVar11 * fVar7 + fVar9 * fVar14 + fVar15 * 0.0 + fVar16) * 0.5 *
                                fVar17) * (float)(ulonglong)uVar1 + 0.5) - param_6;
    param_2[4] = fVar18 + param_5;
    param_2[1] = fVar7;
    param_2[5] = fVar7 + param_6;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140475370(longlong param_1,undefined4 param_2,longlong param_3,int param_4)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    uint6 uVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    float *pfVar9;
    undefined8 *puVar10;
    undefined (*pauVar11) [16];
    int *piVar12;
    longlong lVar13;
    longlong *plVar14;
    int iVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    int iVar19;
    longlong *plVar20;
    undefined8 *puVar21;
    int iVar22;
    ulonglong uVar23;
    float fVar24;
    float fVar25;
    ushort uVar29;
    undefined auVar26 [16];
    undefined8 uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    uint uVar37;
    undefined auVar38 [16];
    undefined4 uVar39;
    undefined4 uVar40;
    undefined4 uVar41;
    undefined4 uVar42;
    int local_res8;
    int local_resc;
    undefined4 local_res10 [2];
    undefined *in_stack_fffffffffffffe68;
    ulonglong in_stack_fffffffffffffe70;
    undefined *in_stack_fffffffffffffe78;
    undefined local_178 [8];
    undefined8 uStack368;
    undefined local_168 [8];
    ulonglong uStack352;
    undefined local_158 [8];
    undefined8 uStack336;
    undefined local_148 [8];
    float fStack320;
    float fStack316;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    int local_128 [4];
    longlong local_118;
    float local_100;
    float fStack252;
    float local_f8;
    longlong *local_f0;
    longlong *local_e8;
    int local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [16];
    undefined local_a8 [112];
    undefined auVar27 [16];
    undefined auVar28 [16];

    local_res10[0] = param_2;
    FUN_140474e10(local_128,param_3);
    auVar38 = ZEXT416((uint)(float)(DAT_140c636a8 - local_128[0]));
    uVar4 = (**(code **)(*local_e8 + 0x30))();
    auVar38 = CONCAT124(SUB1612(auVar38 >> 0x20,0),SUB164(auVar38,0) / (float)(ulonglong)uVar4);
    uVar7 = (**(code **)(*local_e8 + 0x60))();
    lVar8 = (**(code **)(*DAT_140c65670 + 0x248))();
    plVar14 = *(longlong **)(param_1 + 0x16e8);
    uVar4 = 0;
    if (plVar14 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar14 + 0x350))(plVar14,param_2);
        if (iVar5 == 0) {
            lVar13 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            fVar24 = *(float *)(param_1 + 0x1234) * *(float *)(lVar13 + 0x70) +
                     *(float *)(param_1 + 0x1230) * *(float *)(lVar13 + 0x60) +
                     *(float *)(param_1 + 0x1238) * *(float *)(lVar13 + 0x80) + *(float *)(lVar13 + 0x90);
            fVar25 = *(float *)(param_1 + 0x1234) * *(float *)(lVar13 + 0x74) +
                     *(float *)(param_1 + 0x1230) * *(float *)(lVar13 + 100) +
                     *(float *)(param_1 + 0x1238) * *(float *)(lVar13 + 0x84) + *(float *)(lVar13 + 0x94);
        }
        else {
            pfVar9 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x358))
                    (*(longlong **)(param_1 + 0x16e8),local_178,param_2,0);
            fVar24 = *pfVar9;
            fVar25 = pfVar9[1];
        }
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x350))();
        if (iVar5 == 0) {
            lVar13 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            uVar30 = CONCAT44(*(float *)(param_1 + 0x1234) * *(float *)(lVar13 + 0x74) +
                              *(float *)(param_1 + 0x1230) * *(float *)(lVar13 + 100) +
                              *(float *)(param_1 + 0x1238) * *(float *)(lVar13 + 0x84) +
                              *(float *)(lVar13 + 0x94),
                              *(float *)(param_1 + 0x1234) * *(float *)(lVar13 + 0x70) +
                              *(float *)(param_1 + 0x1230) * *(float *)(lVar13 + 0x60) +
                              *(float *)(param_1 + 0x1238) * *(float *)(lVar13 + 0x80) +
                              *(float *)(lVar13 + 0x90));
        }
        else {
            puVar10 = (undefined8 *)
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x358))
                    (*(longlong **)(param_1 + 0x16e8),local_178,1);
            uVar30 = *puVar10;
        }
        local_res10[0] = 1;
        local_100 = local_100 + (fVar24 - (float)uVar30);
        fStack252 = fStack252 + (fVar25 - (float)((ulonglong)uVar30 >> 0x20));
        local_f8 = local_f8 + 0.0;
        if (local_e0 < 0) {
            if (local_f0 == (longlong *)0x0) {
                in_stack_fffffffffffffe78 = local_178;
                local_138 = _DAT_140c784f0;
                fStack308 = _DAT_140c784f4;
                fStack304 = fRam0000000140c784f8;
                fStack300 = fRam0000000140c784fc;
                _local_148 = _DAT_140c784e0;
                in_stack_fffffffffffffe68 = local_148;
                in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x505);
                auVar28 = CONCAT97((unkuint9)
                                           SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(SUB153
                                                                                                                      (CONCAT213(SUB152(CONCAT114(SUB161(_DAT_140b7b6f0
                                                                                                                                                                 >> 0x38,0),
                                                                                                                                                  ZEXT1314(SUB1613(
                                                                                                                                                          _DAT_140b7b6f0,0))) >> 0x68,0),
                                                                                                                                 CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30,0),
                                                                                                                                           SUB1612(_DAT_140b7b6f0,0))) >> 0x60,0),
                                                                                                              ZEXT1112(SUB1611(_DAT_140b7b6f0,0))) >> 0x58,0),
                                                                                             CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28,0),
                                                                                                       SUB1610(_DAT_140b7b6f0,0))) >> 0x50,0),
                                                                            (unkuint10)SUB169(_DAT_140b7b6f0,0)) >> 0x48,0),
                                                           CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20,0),
                                                                    SUB168(_DAT_140b7b6f0,0))) >> 0x40,0) << 8,
                                   (SUB167(_DAT_140b7b6f0,0) >> 0x18) << 0x30);
                auVar27 = CONCAT115(ZEXT1011(SUB1610(auVar28 >> 0x30,0)) << 8,
                                    (SUB165(_DAT_140b7b6f0,0) >> 0x10) << 0x20);
                auVar26 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar27 >> 0x20,0)) << 8,
                                                      (SUB163(_DAT_140b7b6f0,0) >> 8) << 0x10) >> 0x10,0),
                                    SUB162(_DAT_140b7b6f0,0)) & (undefined  [16])0xffffffffffff00ff;
                uVar29 = SUB162(auVar28 >> 0x30,0);
                uVar3 = CONCAT42(SUB144(CONCAT212(uVar29,ZEXT1012(SUB1610(auVar26,0))) >> 0x50,0),
                                 SUB162(auVar27 >> 0x20,0));
                local_178 = CONCAT44((float)SUB164(CONCAT106((unkuint10)uVar3 << 0x10,
                                                             (SUB166(auVar26,0) >> 0x10) << 0x20) >> 0x20,0)
                                     * 0.003921569,(float)(int)uVar3 * 0.003921569);
                _local_178 = CONCAT48((float)(SUB164(auVar26,0) & 0xffff) * 0.003921569,local_178);
                _local_178 = CONCAT412((float)(uint)uVar29 * 0.003921569,_local_178);
                (**(code **)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680,uVar7,local_118,0xffffffffffffffff,in_stack_fffffffffffffe68,
                         in_stack_fffffffffffffe70,in_stack_fffffffffffffe78,1);
            }
            else {
                FUN_140141100();
                pfVar9 = (float *)FUN_140141910();
                _local_168 = ZEXT816(uStack352) << 0x40;
                local_138 = (float)(int)*pfVar9;
                fStack308 = (float)(int)pfVar9[1];
                local_158 = CONCAT44(fStack308,local_138);
                _local_148 = ZEXT816(uStack352) << 0x40;
                fStack304 = (float)uStack336;
                fStack300 = uStack336._4_4_;
            }
        }
        else {
            pauVar11 = (undefined (*) [16])FUN_1404778c0(local_b8,local_e0,local_118,local_dc);
            _local_148 = *pauVar11;
            local_138 = *(float *)pauVar11[1];
            fStack308 = *(float *)(pauVar11[1] + 4);
            fStack304 = *(float *)(pauVar11[1] + 8);
            fStack300 = *(float *)(pauVar11[1] + 0xc);
        }
        uVar18 = (ulonglong)in_stack_fffffffffffffe78 & 0xffffffff00000000 |
                 (ulonglong)SUB164(auVar38,0);
        uVar16 = in_stack_fffffffffffffe70 & 0xffffffff00000000 |
                 (ulonglong)(uint)(fStack308 - local_148._4_4_);
        uVar17 = (ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000 |
                 (ulonglong)(uint)(local_138 - local_148._0_4_);
        pauVar11 = (undefined (*) [16])FUN_140475020(param_1,local_b8,local_128,1,uVar17,uVar16,uVar18);
        _local_168 = *pauVar11;
        _local_158 = pauVar11[1];
        if ((param_4 != 0) &&
            (iVar5 = (**(code **)(**(longlong **)(param_3 + 0x40) + 0x10))(), iVar5 != 0)) {
            puVar10 = (undefined8 *)(**(code **)(*local_e8 + 0x18))(local_e8,local_178);
            uVar23 = 0;
            uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xc88);
            fVar24 = (float)(*(uint *)(lVar8 + 8) >> 1);
            fVar25 = (float)(*(uint *)(lVar8 + 0xc) >> 1);
            fVar31 = local_148._0_4_ + (float)(int)*puVar10 + fVar24;
            fVar32 = local_148._4_4_ + (float)*(int *)((longlong)puVar10 + 4) + fVar25;
            fVar33 = fStack320 + 0.0 + 0.0;
            fVar34 = fStack316 + 0.0 + 0.0;
            fVar24 = local_138 + (float)(int)*puVar10 + fVar24;
            fVar25 = fStack308 + (float)*(int *)((longlong)puVar10 + 4) + fVar25;
            fVar35 = fStack304 + 0.0 + 0.0;
            fVar36 = fStack300 + 0.0 + 0.0;
            _local_168 = CONCAT412(fVar34,CONCAT48(fVar33,CONCAT44(fVar32,fVar31)));
            local_158 = CONCAT44(fVar25,fVar24);
            _local_158 = CONCAT412(fVar36,CONCAT48(fVar35,local_158));
            local_b8 = CONCAT412(fVar34,CONCAT48(fVar33,CONCAT44(fVar32,fVar31)));
            local_a8._0_16_ = CONCAT412(fVar36,CONCAT48(fVar35,CONCAT44(fVar25,fVar24)));
            auVar26 = ZEXT816(0) & (undefined  [16])0x0;
            if (uVar1 != 0) {
                plVar14 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xc80);
                plVar20 = plVar14;
                do {
                    for (puVar10 = (undefined8 *)**(undefined8 **)(*plVar20 + 0x38);
                         puVar10 != *(undefined8 **)(*plVar20 + 0x38); puVar10 = (undefined8 *)*puVar10) {
                        if (puVar10[2] == 0) {
                            FUN_140157910(plVar14[uVar23],local_178);
                            auVar26 = _local_178;
                            goto LAB_1404757cf;
                        }
                    }
                    uVar23 = uVar23 + 1;
                    plVar20 = plVar20 + 1;
                } while (uVar23 < uVar1);
            }
            LAB_1404757cf:
            _local_178 = auVar26;
            local_res8 = (int)local_178._0_4_;
            local_resc = (int)local_178._4_4_;
            piVar12 = (int *)(**(code **)(*local_e8 + 0x18))(local_e8,local_178);
            local_res8 = local_res8 + *piVar12;
            local_resc = local_resc + piVar12[1];
            (**(code **)(*local_e8 + 0x20))(local_e8,&local_res8);
        }
        lVar13 = FUN_1404802d0(param_1 + 0x1838,local_res10);
        if ((longlong *)**(longlong **)(lVar13 + 8) == *(longlong **)(lVar13 + 8)) {
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x3f8))();
        }
        else {
            iVar5 = (**(code **)(**(longlong **)(param_3 + 0x40) + 0x10))();
            if (iVar5 == 0) {
                uVar39 = 0;
                uVar40 = 0;
                uVar41 = 0;
                uVar42 = 0;
                LAB_1404758c1:
                (**(code **)(*local_e8 + 0xa0))();
                (**(code **)(*local_e8 + 0x98))();
                uVar18 = uVar18 & 0xffffffff00000000;
                uVar16 = uVar16 & 0xffffffff00000000;
                uVar17 = uVar17 & 0xffffffff00000000;
                pauVar11 = (undefined (*) [16])FUN_140475020(param_1);
                uVar37 = SUB164(auVar38,0);
                _local_168 = *pauVar11;
                _local_158 = pauVar11[1];
                local_a8._0_16_ =
                        minps(_local_158,
                              ZEXT816(CONCAT44((float)*(int *)(lVar8 + 0xc),
                                               (float)(int)*(undefined8 *)(lVar8 + 8))));
                local_b8 = maxps(_local_168,CONCAT412(uVar42,CONCAT48(uVar41,CONCAT44(uVar40,uVar39))));
                if (SUB164(local_b8,0) < SUB164(local_a8._0_16_,0)) {
                    local_b8._4_4_ = SUB164(local_b8 >> 0x20,0);
                    local_a8._4_4_ = SUB164(local_a8._0_16_ >> 0x20,0);
                    if (local_b8._4_4_ < local_a8._4_4_) {
                        local_158._4_4_ = SUB164(_local_158 >> 0x20,0);
                        local_168._4_4_ = SUB164(_local_168 >> 0x20,0);
                        piVar12 = DAT_140c7cf78;
                        do {
                            uVar37 = SUB164(auVar38,0);
                            if (piVar12 == DAT_140c7cf80) break;
                            iVar5 = (**(code **)(*local_e8 + 0x90))();
                            if (iVar5 != 2) {
                                iVar6 = (int)local_158._0_4_;
                                iVar15 = (int)local_158._4_4_;
                                iVar19 = (int)local_168._0_4_;
                                _local_178 = CONCAT48(iVar6,local_178);
                                _local_178 = CONCAT412(iVar15,_local_178);
                                iVar22 = (int)local_168._4_4_;
                                local_178 = CONCAT44(iVar22,iVar19);
                                iVar5 = piVar12[2];
                                if (iVar6 < piVar12[2]) {
                                    iVar5 = iVar6;
                                }
                                iVar6 = piVar12[3];
                                if (iVar15 < piVar12[3]) {
                                    iVar6 = iVar15;
                                }
                                iVar15 = *piVar12;
                                if (*piVar12 < iVar19) {
                                    iVar15 = iVar19;
                                }
                                iVar19 = piVar12[1];
                                if (piVar12[1] < iVar22) {
                                    iVar19 = iVar22;
                                }
                                if ((iVar15 < iVar5) && (iVar19 < iVar6)) goto LAB_140475a29;
                            }
                            piVar12 = piVar12 + 4;
                        } while( true );
                    }
                }
                goto LAB_140475b1e;
            }
        }
    }
    LAB_140475bc7:
    lVar8 = param_1 + 0x1838;
    lVar13 = FUN_1404802d0(lVar8,local_res10);
    lVar13 = *(longlong *)(lVar13 + 8);
    plVar14 = (longlong *)FUN_14018b280(0x80,0);
    uVar18 = 0;
    iVar5 = 0;
    if (plVar14 + 2 != (longlong *)0x0) {
        *(int *)(plVar14 + 2) = local_128[0];
        plVar14[4] = 0;
        plVar14[5] = 0;
        plVar14[6] = 0;
        FUN_14001c1b0(plVar14 + 3,local_118);
        *(float *)(plVar14 + 7) = local_100;
        *(float *)((longlong)plVar14 + 0x3c) = fStack252;
        *(float *)(plVar14 + 8) = local_f8;
        plVar14[9] = (longlong)local_f0;
        plVar14[10] = (longlong)local_e8;
        *(int *)(plVar14 + 0xb) = local_e0;
        *(undefined4 *)((longlong)plVar14 + 0x5c) = local_dc;
        *(undefined4 *)(plVar14 + 0xc) = local_d8;
        *(undefined4 *)((longlong)plVar14 + 100) = local_d4;
        *(undefined4 *)(plVar14 + 0xd) = local_d0;
        *(undefined4 *)(plVar14 + 0xe) = local_c8;
        *(undefined4 *)((longlong)plVar14 + 0x74) = uStack196;
        *(undefined4 *)(plVar14 + 0xf) = uStack192;
        *(undefined4 *)((longlong)plVar14 + 0x7c) = uStack188;
        if ((undefined8 *)plVar14[9] != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)plVar14[9])();
        }
        if ((undefined8 *)plVar14[10] != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)plVar14[10])();
        }
    }
    *plVar14 = lVar13;
    plVar14[1] = *(longlong *)(lVar13 + 8);
    **(longlong ***)(lVar13 + 8) = plVar14;
    *(longlong **)(lVar13 + 8) = plVar14;
    piVar12 = DAT_140c7cf80;
    local_178 = CONCAT44((int)local_168._4_4_,(int)local_168._0_4_);
    _local_178 = CONCAT48((int)local_158._0_4_,local_178);
    _local_178 = CONCAT412((int)local_158._4_4_,_local_178);
    if (DAT_140c7cf80 == _DAT_140c7cf88) {
        FUN_14015c990(&DAT_140c7cf70);
    }
    else {
        if (DAT_140c7cf80 != (int *)0x0) {
            *DAT_140c7cf80 = (int)local_168._0_4_;
            piVar12[1] = (int)local_168._4_4_;
            piVar12[2] = (int)local_158._0_4_;
            piVar12[3] = (int)local_158._4_4_;
        }
        DAT_140c7cf80 = DAT_140c7cf80 + 4;
    }
    lVar13 = FUN_1404802d0(lVar8,local_res10);
    FUN_140476990(param_1,*(longlong *)(*(longlong *)(lVar13 + 8) + 8) + 0x10);
    puVar10 = (undefined8 *)*DAT_140c7cf68;
    uVar16 = uVar18;
    for (puVar2 = puVar10; puVar2 != DAT_140c7cf68; puVar2 = (undefined8 *)*puVar2) {
        uVar16 = uVar16 + 1;
    }
    puVar2 = puVar10;
    uVar17 = uVar18;
    iVar6 = iVar5;
    if (DAT_140c1e6c4 < uVar16) {
        for (; puVar2 != DAT_140c7cf68; puVar2 = (undefined8 *)*puVar2) {
            uVar17 = uVar17 + 1;
            iVar6 = (int)uVar17;
        }
        if (0 < (int)(iVar6 - DAT_140c1e6c4)) {
            uVar16 = (ulonglong)(iVar6 - DAT_140c1e6c4);
            do {
                (**(code **)(**(longlong **)(puVar10[2] + 0x40) + 0xa8))();
                puVar10 = (undefined8 *)*puVar10;
                uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
        }
    }
    puVar21 = *(undefined8 **)(param_1 + 0x1868);
    puVar2 = (undefined8 *)*puVar21;
    uVar16 = uVar18;
    for (puVar10 = puVar2; puVar10 != puVar21; puVar10 = (undefined8 *)*puVar10) {
        uVar16 = uVar16 + 1;
    }
    if (DAT_140c1e6a4 < uVar16) {
        for (; puVar2 != puVar21; puVar2 = (undefined8 *)*puVar2) {
            uVar18 = uVar18 + 1;
            iVar5 = (int)uVar18;
        }
        puVar21 = (undefined8 *)*puVar21;
        if (0 < (int)(iVar5 - DAT_140c1e6a4)) {
            uVar18 = (ulonglong)(iVar5 - DAT_140c1e6a4);
            do {
                (**(code **)(**(longlong **)(puVar21[2] + 0x40) + 0xa8))();
                puVar21 = (undefined8 *)*puVar21;
                uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
        }
    }
    lVar8 = FUN_1404802d0(lVar8,local_res10);
    lVar8 = *(longlong *)(*(longlong *)(lVar8 + 8) + 8);
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_128);
    }
    if (local_f0 != (longlong *)0x0) {
        (**(code **)(*local_f0 + 8))();
        local_f0 = (longlong *)0x0;
    }
    if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 8))();
        local_e8 = (longlong *)0x0;
    }
    if (local_118 != 0) {
        FUN_14018b900(local_118,0);
    }
    return lVar8 + 0x10;
    LAB_140475a29:
    iVar5 = (**(code **)(*local_e8 + 0x90))();
    uVar37 = SUB164(auVar38,0);
    if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x1858) == 0) {
            local_100 = local_100 + 0.25;
            fStack252 = fStack252 + 0.0;
            local_f8 = local_f8 + 0.0;
        }
        else {
            local_100 = local_100 - 0.25;
            fStack252 = fStack252 - 0.0;
            local_f8 = local_f8 - 0.0;
        }
    }
    else if (*(int *)(param_1 + 0x1858) == 0) {
        local_100 = local_100 + 0.0;
        fStack252 = fStack252 + 0.25;
        local_f8 = local_f8 + 0.0;
    }
    else {
        local_100 = local_100 - 0.0;
        fStack252 = fStack252 - 0.25;
        local_f8 = local_f8 - 0.0;
    }
    uVar4 = uVar4 + 1;
    if (0x32 < uVar4) goto LAB_140475b1e;
    goto LAB_1404758c1;
    LAB_140475b1e:
    pauVar11 = (undefined (*) [16])
            FUN_140475020(param_1,local_b8,local_128,1,
                          uVar17 & 0xffffffff00000000 |
                          (ulonglong)(uint)(local_138 - local_148._0_4_),
                          uVar16 & 0xffffffff00000000 |
                          (ulonglong)(uint)(fStack308 - local_148._4_4_),
                          uVar18 & 0xffffffff00000000 | (ulonglong)uVar37);
    _local_168 = *pauVar11;
    _local_158 = pauVar11[1];
    _local_178 = _local_178 & (undefined  [16])0x0;
    if ((CONCAT44(fStack252,local_100) != 0) || (local_f8 != (float)uStack368)) {
        *(uint *)(param_1 + 0x1858) = (uint)(*(int *)(param_1 + 0x1858) == 0);
    }
    goto LAB_140475bc7;
}



void FUN_140475ef0(ulonglong param_1,undefined8 param_2,uint param_3)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    float fVar6;
    float in_XMM3_Da;
    undefined *in_stack_ffffffffffffffc8;
    ulonglong in_stack_ffffffffffffffd0;

    plVar5 = *(longlong **)(param_1 + 0x16e8);
    if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1828) == 0)) {
        in_stack_ffffffffffffffc8 = &DAT_140476bc0;
        in_stack_ffffffffffffffd0 = param_1;
        (**(code **)(*plVar5 + 0x3f8))(plVar5,1,0x19,FUN_140476a20,&DAT_140476bc0,param_1);
    }
    lVar4 = 0;
    if (param_3 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1828);
        while (lVar3 != 0) {
            lVar3 = *(longlong *)(param_1 + 0x1828);
            if (lVar3 != 0) {
                if (*(longlong **)(lVar3 + 0x20) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar3 + 0x20) + 8))();
                    *(undefined8 *)(lVar3 + 0x20) = 0;
                }
                if (*(undefined8 **)(lVar3 + 0x28) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar3 + 0x28) = *(undefined8 *)(lVar3 + 0x30);
                }
                if (*(longlong *)(lVar3 + 0x30) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x28) = *(undefined8 *)(lVar3 + 0x28);
                }
                *(undefined8 *)(lVar3 + 0x28) = 0;
                *(undefined8 *)(lVar3 + 0x30) = 0;
                FUN_14018b900();
            }
            lVar3 = *(longlong *)(param_1 + 0x1828);
        }
        *(undefined8 *)(param_1 + 0x1830) = 0;
    }
    lVar3 = FUN_14018b280();
    if (lVar3 != 0) {
        fVar6 = in_XMM3_Da;
        if (in_XMM3_Da <= 0.0) {
            iVar2 = DAT_140c47540;
            if (*DAT_140c63750 < DAT_140c47540) {
                iVar2 = *DAT_140c63750;
            }
            fVar6 = *(float *)(&DAT_140c47550 + (longlong)iVar2 * 4);
        }
        lVar4 = FUN_140474bc0(lVar3,param_2,*(undefined8 *)(DAT_140c65898 + 0x7b60),DAT_140c636a8,
                              (ulonglong)in_stack_ffffffffffffffc8 & 0xffffffff00000000 |
                              (ulonglong)(uint)fVar6);
    }
    plVar5 = (longlong *)(param_1 + 0x1828);
    if (*plVar5 == 0) {
        if (*(longlong *)(lVar4 + 0x28) != 0) goto LAB_140476086;
    }
    else {
        if (*(longlong *)(lVar4 + 0x28) != 0) goto LAB_140476086;
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1830) + 0x30);
    }
    *(longlong **)(lVar4 + 0x28) = plVar5;
    plVar1 = (longlong *)(lVar4 + 0x30);
    *plVar1 = *plVar5;
    *plVar5 = lVar4;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x28) = plVar1;
    }
    LAB_140476086:
    lVar3 = DAT_140c65898;
    *(longlong *)(param_1 + 0x1830) = lVar4;
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"UnitTextBubbleCreate",&DAT_140b01228,
                  *(undefined4 *)(param_1 + 8),param_2,
                  in_stack_ffffffffffffffd0 & 0xffffffff00000000 | (ulonglong)param_3,
                  (double)in_XMM3_Da);
    return;
}



void FUN_1404760f0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong in_stack_ffffffffffffffe0;
    undefined4 uVar5;

    plVar1 = *(longlong **)(param_1 + 0x16e8);
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1828) == 0)) {
        in_stack_ffffffffffffffe0 = param_1;
        (**(code **)(*plVar1 + 0x3f8))(plVar1,1,0x19,FUN_140476a20,&DAT_140476bc0,param_1);
    }
    uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
    plVar1 = (longlong *)(param_1 + 0x1828);
    lVar3 = 0;
    lVar2 = *plVar1;
    while (lVar2 != 0) {
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))();
                *(undefined8 *)(lVar2 + 0x20) = 0;
            }
            if (*(undefined8 **)(lVar2 + 0x28) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar2 + 0x28) = *(undefined8 *)(lVar2 + 0x30);
            }
            if (*(longlong *)(lVar2 + 0x30) != 0) {
                *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x28) = *(undefined8 *)(lVar2 + 0x28);
            }
            *(undefined8 *)(lVar2 + 0x28) = 0;
            *(undefined8 *)(lVar2 + 0x30) = 0;
            FUN_14018b900(lVar2);
        }
        uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
        lVar2 = *plVar1;
    }
    *(undefined8 *)(param_1 + 0x1830) = 0;
    lVar2 = FUN_14018b280(0x40);
    if (lVar2 != 0) {
        lVar3 = FUN_140474d20(lVar2,param_2,DAT_140c636a8);
    }
    if (*plVar1 == 0) {
        if (*(longlong *)(lVar3 + 0x28) == 0) {
            *(longlong **)(lVar3 + 0x28) = plVar1;
            plVar4 = (longlong *)(lVar3 + 0x30);
            *plVar4 = *plVar1;
            *plVar1 = lVar3;
            if (*plVar4 != 0) {
                *(longlong **)(*plVar4 + 0x28) = plVar4;
            }
        }
    }
    else if (*(longlong *)(lVar3 + 0x28) == 0) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1830) + 0x30);
        plVar1 = (longlong *)(lVar3 + 0x30);
        *(longlong **)(lVar3 + 0x28) = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = lVar3;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x28) = plVar1;
        }
    }
    lVar2 = DAT_140c65898;
    *(longlong *)(param_1 + 0x1830) = lVar3;
    FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"UnitTextBubbleCreate",&DAT_140b01228,
                  *(undefined4 *)(param_1 + 8),&DAT_140b080c0,CONCAT44(uVar5,1),0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404762c0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    ulonglong uVar15;
    longlong **pplVar16;
    longlong **pplVar17;
    longlong *plVar18;
    longlong **pplVar19;
    int *piVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    longlong *plVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    undefined auVar30 [16];
    ulonglong local_res18;

    iVar9 = DAT_140c636a8;
    iVar14 = *DAT_140c63750;
    piVar20 = *(int **)(param_1 + 0x1828);
    iVar10 = DAT_140c473c0;
    if (iVar14 < DAT_140c473c0) {
        iVar10 = iVar14;
    }
    iVar11 = DAT_140c47420;
    if (iVar14 < DAT_140c47420) {
        iVar11 = iVar14;
    }
    iVar12 = DAT_140c474e0;
    if (iVar14 < DAT_140c474e0) {
        iVar12 = iVar14;
    }
    iVar13 = DAT_140c47480;
    if (iVar14 < DAT_140c47480) {
        iVar13 = iVar14;
    }
    if (piVar20 != (int *)0x0) {
        fVar26 = 1.844674e+19;
        fVar29 = 0.0;
        auVar30 = ZEXT416((uint)(float)(*(int *)(&DAT_140c47430 + (longlong)iVar11 * 4) -
                                        *(int *)(&DAT_140c473d0 + (longlong)iVar10 * 4)));
        fVar27 = 1.0;
        fVar28 = 1.0 / ((float)(ulonglong)*(uint *)(&DAT_140c474f0 + (longlong)iVar12 * 4) -
                        (float)(ulonglong)*(uint *)(&DAT_140c47490 + (longlong)iVar13 * 4));
        iVar14 = DAT_140c475a0;
        do {
            iVar10 = *DAT_140c63750;
            fVar24 = (float)*(longlong *)(piVar20 + 2);
            if (*(longlong *)(piVar20 + 2) < 0) {
                fVar24 = fVar24 + fVar26;
            }
            iVar11 = DAT_140c47480;
            if (iVar10 < DAT_140c47480) {
                iVar11 = iVar10;
            }
            iVar12 = DAT_140c473c0;
            if (iVar10 < DAT_140c473c0) {
                iVar12 = iVar10;
            }
            fVar24 = (fVar24 - (float)(ulonglong)*(uint *)(&DAT_140c47490 + (longlong)iVar11 * 4)) *
                     fVar28;
            if (fVar27 <= fVar24) {
                fVar24 = fVar27;
            }
            fVar25 = fVar29;
            if (fVar29 <= fVar24) {
                fVar25 = fVar24;
            }
            iVar11 = iVar14;
            if (iVar10 < iVar14) {
                iVar11 = iVar10;
            }
            iVar13 = iVar14;
            if (iVar10 < iVar14) {
                iVar13 = iVar10;
            }
            if ((((iVar9 - (int)(longlong)
                    ((float)(ulonglong)*(uint *)(&DAT_140c473d0 + (longlong)iVar12 * 4) +
                     SUB164(auVar30,0) * fVar25)) -
                  *(int *)(&DAT_140c475b0 + (longlong)iVar11 * 4)) -
                 *(int *)(&DAT_140c475b0 + (longlong)iVar13 * 4)) - *piVar20 < 1) break;
            if (piVar20 != (int *)0x0) {
                if (*(longlong **)(piVar20 + 8) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(piVar20 + 8) + 8))();
                    *(undefined8 *)(piVar20 + 8) = 0;
                }
                if (*(undefined8 **)(piVar20 + 10) != (undefined8 *)0x0) {
                    **(undefined8 **)(piVar20 + 10) = *(undefined8 *)(piVar20 + 0xc);
                }
                if (*(longlong *)(piVar20 + 0xc) != 0) {
                    *(undefined8 *)(*(longlong *)(piVar20 + 0xc) + 0x28) = *(undefined8 *)(piVar20 + 10);
                }
                *(undefined8 *)(piVar20 + 10) = 0;
                *(undefined8 *)(piVar20 + 0xc) = 0;
                FUN_14018b900(piVar20);
                iVar14 = DAT_140c475a0;
            }
            if (*(int **)(param_1 + 0x1828) == (int *)0x0) {
                plVar23 = *(longlong **)(param_1 + 0x16e8);
                if (plVar23 != (longlong *)0x0) {
                    (**(code **)(*plVar23 + 0x400))(plVar23,1,0x19,FUN_140476a20,&DAT_140476bc0,param_1);
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340));
                    iVar14 = DAT_140c475a0;
                }
            }
            else {
                **(int **)(param_1 + 0x1828) = iVar9;
                iVar14 = DAT_140c475a0;
            }
            piVar20 = *(int **)(param_1 + 0x1828);
        } while (piVar20 != (int *)0x0);
    }
    uVar21 = *(ulonglong *)(*(ulonglong *)(param_1 + 0x1840) + 0x10);
    pplVar19 = DAT_140c7cf68;
    if (uVar21 != *(ulonglong *)(param_1 + 0x1840)) {
        do {
            uVar22 = *(ulonglong *)(uVar21 + 0x18);
            if (uVar22 == 0) {
                uVar15 = *(ulonglong *)(uVar21 + 8);
                uVar22 = uVar21;
                if (uVar21 == *(ulonglong *)(uVar15 + 0x18)) {
                    do {
                        uVar22 = uVar15;
                        uVar15 = *(ulonglong *)(uVar22 + 8);
                    } while (uVar22 == *(ulonglong *)(uVar15 + 0x18));
                }
                if (*(ulonglong *)(uVar22 + 0x18) != uVar15) {
                    uVar22 = uVar15;
                }
            }
            else {
                for (uVar15 = *(ulonglong *)(uVar22 + 0x10); uVar15 != 0;
                     uVar15 = *(ulonglong *)(uVar15 + 0x10)) {
                    uVar22 = uVar15;
                }
            }
            local_res18._0_4_ = *(uint *)(uVar21 + 0x20);
            plVar23 = (longlong *)**(longlong **)(uVar21 + 0x30);
            local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)(uint)local_res18;
            if (plVar23 != *(longlong **)(uVar21 + 0x30)) {
                do {
                    pplVar17 = (longlong **)(plVar23 + 10);
                    plVar1 = plVar23 + 2;
                    plVar23 = (longlong *)*plVar23;
                    if (*pplVar17 == (longlong *)0x0) {
                        pplVar17 = (longlong **)*pplVar19;
                        pplVar16 = pplVar17;
                        if (pplVar17 != pplVar19) {
                            do {
                                pplVar16 = (longlong **)*pplVar16;
                            } while (pplVar16 != pplVar19);
                            if (pplVar17 != pplVar19) {
                                do {
                                    pplVar16 = (longlong **)*pplVar17;
                                    if (plVar1 == pplVar17[2]) {
                                        plVar18 = pplVar17[1];
                                        *plVar18 = (longlong)pplVar16;
                                        pplVar16[1] = plVar18;
                                        FUN_14018b900(pplVar17,0);
                                        pplVar19 = DAT_140c7cf68;
                                    }
                                    pplVar17 = pplVar16;
                                } while (pplVar16 != pplVar19);
                            }
                        }
                        plVar18 = (longlong *)**(longlong **)(param_1 + 0x1868);
                        if (plVar18 != *(longlong **)(param_1 + 0x1868)) {
                            do {
                                plVar2 = (longlong *)*plVar18;
                                if (plVar1 == (longlong *)plVar18[2]) {
                                    plVar3 = (longlong *)plVar18[1];
                                    *plVar3 = (longlong)plVar2;
                                    plVar2[1] = (longlong)plVar3;
                                    FUN_14018b900(plVar18,0);
                                }
                                plVar18 = plVar2;
                                pplVar19 = DAT_140c7cf68;
                            } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x1868));
                        }
                        puVar4 = *(undefined8 **)(uVar21 + 0x30);
                        puVar5 = (undefined8 *)*puVar4;
                        lVar8 = DAT_140c65898;
                        while (puVar7 = puVar5, DAT_140c65898 = lVar8, puVar7 != puVar4) {
                            puVar5 = (undefined8 *)*puVar7;
                            pplVar19 = DAT_140c7cf68;
                            if (puVar7 + 2 == plVar1) {
                                puVar6 = (undefined8 *)puVar7[1];
                                *puVar6 = puVar5;
                                puVar5[1] = puVar6;
                                if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x7340) != 0)) {
                                    FUN_1400ea3e0(*(longlong *)(lVar8 + 0x7340),"MessageFinished",&DAT_1409eb834,
                                                  puVar7 + 2);
                                }
                                if ((longlong *)puVar7[9] != (longlong *)0x0) {
                                    (**(code **)(*(longlong *)puVar7[9] + 8))();
                                    puVar7[9] = 0;
                                }
                                if ((longlong *)puVar7[10] != (longlong *)0x0) {
                                    (**(code **)(*(longlong *)puVar7[10] + 8))();
                                    puVar7[10] = 0;
                                }
                                if (puVar7[4] != 0) {
                                    FUN_14018b900(puVar7[4],0);
                                }
                                FUN_14018b900(puVar7,0);
                                pplVar19 = DAT_140c7cf68;
                                lVar8 = DAT_140c65898;
                            }
                        }
                    }
                    else {
                        iVar14 = (**(code **)(**pplVar17 + 0x30))();
                        pplVar19 = DAT_140c7cf68;
                        if (0 < (iVar9 - *(int *)plVar1) - iVar14) {
                            pplVar17 = (longlong **)*DAT_140c7cf68;
                            pplVar16 = pplVar17;
                            if (pplVar17 != DAT_140c7cf68) {
                                do {
                                    pplVar16 = (longlong **)*pplVar16;
                                } while (pplVar16 != DAT_140c7cf68);
                                if (pplVar17 != DAT_140c7cf68) {
                                    do {
                                        pplVar16 = (longlong **)*pplVar17;
                                        if (plVar1 == pplVar17[2]) {
                                            pplVar19 = (longlong **)pplVar17[1];
                                            *pplVar19 = (longlong *)pplVar16;
                                            pplVar16[1] = (longlong *)pplVar19;
                                            FUN_14018b900(pplVar17,0);
                                            pplVar19 = DAT_140c7cf68;
                                        }
                                        pplVar17 = pplVar16;
                                    } while (pplVar16 != pplVar19);
                                }
                            }
                            plVar18 = (longlong *)**(longlong **)(param_1 + 0x1868);
                            if (plVar18 != *(longlong **)(param_1 + 0x1868)) {
                                do {
                                    plVar2 = (longlong *)*plVar18;
                                    if (plVar1 == (longlong *)plVar18[2]) {
                                        plVar3 = (longlong *)plVar18[1];
                                        *plVar3 = (longlong)plVar2;
                                        plVar2[1] = (longlong)plVar3;
                                        FUN_14018b900(plVar18,0);
                                    }
                                    plVar18 = plVar2;
                                    pplVar19 = DAT_140c7cf68;
                                } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x1868));
                            }
                            puVar4 = *(undefined8 **)(uVar21 + 0x30);
                            puVar5 = (undefined8 *)*puVar4;
                            lVar8 = DAT_140c65898;
                            while (puVar7 = puVar5, DAT_140c65898 = lVar8, puVar7 != puVar4) {
                                puVar5 = (undefined8 *)*puVar7;
                                pplVar19 = DAT_140c7cf68;
                                if (puVar7 + 2 == plVar1) {
                                    puVar6 = (undefined8 *)puVar7[1];
                                    *puVar6 = puVar5;
                                    puVar5[1] = puVar6;
                                    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x7340) != 0)) {
                                        FUN_1400ea3e0(*(longlong *)(lVar8 + 0x7340),"MessageFinished",&DAT_1409eb834,
                                                      puVar7 + 2);
                                    }
                                    if ((longlong *)puVar7[9] != (longlong *)0x0) {
                                        (**(code **)(*(longlong *)puVar7[9] + 8))();
                                        puVar7[9] = 0;
                                    }
                                    if ((longlong *)puVar7[10] != (longlong *)0x0) {
                                        (**(code **)(*(longlong *)puVar7[10] + 8))();
                                        puVar7[10] = 0;
                                    }
                                    if (puVar7[4] != 0) {
                                        FUN_14018b900(puVar7[4],0);
                                    }
                                    FUN_14018b900(puVar7,0);
                                    pplVar19 = DAT_140c7cf68;
                                    lVar8 = DAT_140c65898;
                                }
                            }
                        }
                    }
                } while (plVar23 != (longlong *)*(longlong *)(uVar21 + 0x30));
            }
            if ((longlong *)**(longlong **)(uVar21 + 0x30) == *(longlong **)(uVar21 + 0x30)) {
                plVar23 = *(longlong **)(param_1 + 0x16e8);
                if (plVar23 != (longlong *)0x0) {
                    (**(code **)(*plVar23 + 0x400))
                            (plVar23,1,(uint)local_res18,FUN_140477460,FUN_140477a10,param_1);
                }
                local_res18 = uVar21;
                FUN_1404817b0(param_1 + 0x1838,&local_res18);
                pplVar19 = DAT_140c7cf68;
            }
            uVar21 = uVar22;
        } while (uVar22 != *(ulonglong *)(param_1 + 0x1840));
    }
    return;
}



void FUN_140476990(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = DAT_140c7cf68;
    plVar2 = (longlong *)FUN_14018b280(0x18);
    if (plVar2 + 2 != (longlong *)0x0) {
        plVar2[2] = param_2;
    }
    *plVar2 = lVar1;
    plVar2[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar2;
    *(longlong **)(lVar1 + 8) = plVar2;
    lVar1 = *(longlong *)(param_1 + 0x1868);
    plVar2 = (longlong *)FUN_14018b280(0x18);
    if (plVar2 + 2 != (longlong *)0x0) {
        plVar2[2] = param_2;
    }
    *plVar2 = lVar1;
    plVar2[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar2;
    *(longlong **)(lVar1 + 8) = plVar2;
    return;
}



undefined8 FUN_140476a20(longlong *param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 local_18 [4];

    iVar2 = *DAT_140c63750;
    iVar1 = DAT_140c47300;
    if (iVar2 < DAT_140c47300) {
        iVar1 = iVar2;
    }
    if ((&DAT_140c47310)[iVar1] == '\0') {
        return 0;
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar3 == 0) {
        return 0;
    }
    if (*(int *)(param_3 + 0x80) != 0x14) {
        iVar1 = DAT_140c47340;
        if (iVar2 < DAT_140c47340) {
            iVar1 = iVar2;
        }
        if ((&DAT_140c47350)[iVar1] == '\0') {
            return 0;
        }
        if (*(int *)(param_3 + 0x80) != 0x14) goto LAB_140476ac0;
    }
    iVar1 = DAT_140c47380;
    if (iVar2 < DAT_140c47380) {
        iVar1 = iVar2;
    }
    if ((&DAT_140c47390)[iVar1] == '\0') {
        return 0;
    }
    LAB_140476ac0:
    local_18[0] = 0;
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_18,0);
    if (((iVar2 != 0) && (*(longlong *)(param_3 + 0x1828) != 0)) && (*(int *)(param_3 + 0x54) < 2)) {
        fVar6 = *(float *)(*(longlong *)(param_3 + 0x1828) + 4);
        fVar6 = fVar6 * fVar6;
        fVar4 = *(float *)(lVar3 + 0x11e0) - *(float *)(param_3 + 0x11e0);
        fVar5 = *(float *)(lVar3 + 0x11e4) - *(float *)(param_3 + 0x11e4);
        if (fVar6 < fVar4 * fVar4 + fVar5 * fVar5 + 0.0) {
            lVar3 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            fVar4 = *(float *)(lVar3 + 0x20) - *(float *)(param_3 + 0x11e0);
            fVar5 = *(float *)(lVar3 + 0x24) - *(float *)(param_3 + 0x11e4);
            if (fVar6 < fVar4 * fVar4 + fVar5 * fVar5 + 0.0) {
                return 0;
            }
        }
        if (((*(longlong *)(DAT_140c65898 + 0x71a8) == 0) ||
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x71a8) + 0x2b8) == 0)) ||
            ((*(longlong *)(DAT_140c65898 + 0x7198) == 0 ||
              (*(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x34) == 0)))) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140477460(longlong *param_1,int param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    undefined4 local_18 [4];

    iVar1 = DAT_140c477d0;
    if (*DAT_140c63750 < DAT_140c477d0) {
        iVar1 = *DAT_140c63750;
    }
    if ((&DAT_140c477e0)[iVar1] == '\0') {
        return 0;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar2 != 0) {
        local_18[0] = 0;
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
        if ((iVar1 != 0) &&
            ((param_2 == 0 || (iVar1 = (**(code **)(*param_1 + 0x350))(param_1,param_2), iVar1 != 0)))) {
            if ((DAT_140dc3060 & 1) == 0) {
                DAT_140dc3060 = DAT_140dc3060 | 1;
                DAT_140dc3064 = 2500.0;
            }
            fVar3 = *(float *)(lVar2 + 0x11e0) - *(float *)(param_3 + 0x11e0);
            fVar4 = *(float *)(lVar2 + 0x11e4) - *(float *)(param_3 + 0x11e4);
            if (DAT_140dc3064 < fVar3 * fVar3 + fVar4 * fVar4 + 0.0) {
                lVar2 = *(longlong *)(DAT_140c65898 + 0x71a8);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(DAT_140c65898 + 0x71a0);
                }
                fVar3 = *(float *)(lVar2 + 0x20) - *(float *)(param_3 + 0x11e0);
                fVar4 = *(float *)(lVar2 + 0x24) - *(float *)(param_3 + 0x11e4);
                if (DAT_140dc3064 < fVar3 * fVar3 + fVar4 * fVar4 + 0.0) {
                    return 0;
                }
            }
            if ((((*(longlong *)(DAT_140c65898 + 0x71a8) == 0) ||
                  (*(int *)(*(longlong *)(DAT_140c65898 + 0x71a8) + 0x2b8) == 0)) ||
                 (*(longlong *)(DAT_140c65898 + 0x7198) == 0)) ||
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x34) == 0)) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_1404775f0(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    float *pfVar8;
    longlong lVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 uStack76;

    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x350))
            (*(longlong **)(param_1 + 0x16e8),0x19);
    if (iVar7 == 0) {
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x350))();
        if (iVar7 == 0) {
            lVar9 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            fVar10 = *(float *)(param_1 + 0x11e4) * *(float *)(lVar9 + 0xb0) +
                     *(float *)(param_1 + 0x11e0) * *(float *)(lVar9 + 0xa0) +
                     *(float *)(lVar9 + 0xc0) * 0.0 + *(float *)(lVar9 + 0xd0);
            fVar12 = *(float *)(param_1 + 0x11e4) * *(float *)(lVar9 + 0xb4) +
                     *(float *)(param_1 + 0x11e0) * *(float *)(lVar9 + 0xa4) +
                     *(float *)(lVar9 + 0xc4) * 0.0 + *(float *)(lVar9 + 0xd4);
        }
        else {
            pfVar8 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x358))();
            fVar10 = *pfVar8;
            fVar12 = pfVar8[1];
        }
    }
    else {
        pfVar8 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x358))();
        fVar10 = *pfVar8;
        fVar12 = pfVar8[1];
    }
    iVar7 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x50);
    iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0x54);
    lVar9 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar9 == 0) {
        lVar9 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar3 = *(float *)(lVar9 + 0xf8);
    fVar4 = *(float *)(lVar9 + 0xe8);
    fVar5 = *(float *)(lVar9 + 0x108);
    fVar6 = *(float *)(lVar9 + 0x118);
    fVar14 = fVar12 * *(float *)(lVar9 + 0xfc) + fVar10 * *(float *)(lVar9 + 0xec) +
             *(float *)(lVar9 + 0x10c) * 0.0 + *(float *)(lVar9 + 0x11c);
    iVar2 = iVar7;
    if (iVar7 < iVar1) {
        iVar2 = iVar1;
    }
    fVar15 = (float)iVar2 * 0.0005;
    fVar11 = 1.0 / fVar14;
    fVar13 = ((fVar12 * *(float *)(lVar9 + 0xf0) + fVar10 * *(float *)(lVar9 + 0xe0) +
               *(float *)(lVar9 + 0x100) * 0.0 + *(float *)(lVar9 + 0x110)) * 0.5 * fVar11 + 0.5) *
             (float)iVar7;
    fVar16 = (0.5 - (fVar12 * *(float *)(lVar9 + 0xf4) + fVar10 * *(float *)(lVar9 + 0xe4) +
                     *(float *)(lVar9 + 0x104) * 0.0 + *(float *)(lVar9 + 0x114)) * 0.5 * fVar11) *
             (float)iVar1;
    if (((*(byte *)(param_1 + 0x1070) & 2) == 0) &&
        (*(float *)(param_1 + 0x1120) * *(float *)(param_1 + 0x1120) +
         *(float *)(param_1 + 0x1124) * *(float *)(param_1 + 0x1124) + 0.0 < 1e-05)) {
        lVar9 = *(longlong *)(DAT_140c65898 + 0x71a8);
        if (lVar9 == 0) {
            lVar9 = *(longlong *)(DAT_140c65898 + 0x71a0);
        }
        if (*(int *)(lVar9 + 0x204) != 0) {
            fVar14 = (float)((uint)fVar14 & 0x7fffffff);
            if (iVar7 < iVar1) {
                iVar7 = iVar1;
            }
            if (5.0 <= fVar14) {
                fVar14 = 5.0;
            }
            fVar15 = 0.5;
            if (0.5 <= fVar14) {
                fVar15 = fVar14;
            }
            fVar15 = ((float)iVar7 * 0.0025) / fVar15;
        }
    }
    if ((fVar15 < (float)((uint)(fVar13 - *(float *)(param_1 + 0x1890)) & 0x7fffffff)) ||
        (fVar15 < (float)((uint)(fVar16 - *(float *)(param_1 + 0x1894)) & 0x7fffffff))) {
        *(float *)(param_1 + 0x1890) = fVar13;
        *(float *)(param_1 + 0x1894) = fVar16;
        *(float *)(param_1 + 0x1898) = fVar11 * (fVar12 * fVar3 + fVar10 * fVar4 + fVar5 * 0.0 + fVar6);
        *(undefined4 *)(param_1 + 0x189c) = uStack76;
    }
    fVar10 = *(float *)(param_1 + 0x1894);
    fVar12 = *(float *)(param_1 + 0x1898);
    *param_2 = (int)*(float *)(param_1 + 0x1890);
    param_2[1] = (int)fVar10;
    param_2[2] = (int)fVar12;
    return 1;
}



undefined8 * FUN_1404778c0(undefined8 *param_1,int param_2,longlong param_3,int param_4)

{
    ushort uVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    int iVar8;
    undefined8 *puVar9;
    longlong lVar10;
    int iVar11;
    uint uVar12;
    int local_48;
    int iStack68;

    if ((param_2 < 0) &&
        ((int)((*(longlong *)(DAT_140c65898 + 0x7cc0) - *(longlong *)(DAT_140c65898 + 0x7cb8)) / 0x70)
         <= param_2)) {
        lVar10 = 0;
    }
    else {
        lVar10 = (longlong)param_2 * 0x70 + *(longlong *)(DAT_140c65898 + 0x7cb8);
    }
    iVar8 = 0;
    iVar6 = 0;
    iVar5 = 0;
    uVar12 = 0;
    puVar9 = param_1;
    lVar2 = FUN_14018e200();
    if (lVar2 != 0) {
        uVar7 = 0;
        iVar4 = 0;
        do {
            uVar1 = *(ushort *)(param_3 + uVar7 * 2);
            iVar11 = iVar4;
            if ((ushort)(uVar1 - 0x30) < 10) {
                FUN_140109840(*(undefined8 *)(lVar10 + -0x160 + (ulonglong)uVar1 * 8),&local_48);
                iVar11 = local_48;
                if (uVar12 != 0) {
                    iVar5 = iVar5 + param_4;
                    iVar11 = iVar4;
                }
                iVar4 = local_48;
                lVar2 = FUN_14018e200(param_3);
                if (uVar7 == lVar2 - 1U) {
                    if (iVar5 < 0) {
                        iVar8 = iVar11 - iVar5;
                    }
                    else {
                        iVar8 = iVar4 + iVar5;
                    }
                }
                else {
                    iVar5 = iVar5 + iVar4;
                }
                if (iVar6 < iStack68) {
                    iVar6 = iStack68;
                }
            }
            uVar12 = uVar12 + 1;
            uVar7 = (ulonglong)uVar12;
            uVar3 = FUN_14018e200();
            puVar9 = param_1;
            iVar4 = iVar11;
        } while (uVar7 < uVar3);
    }
    *puVar9 = 0;
    *(float *)(puVar9 + 2) = (float)iVar8;
    *(float *)((longlong)puVar9 + 0x14) = (float)iVar6;
    return puVar9;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140477a10(longlong *param_1,int param_2,ulonglong param_3)

{
    longlong **pplVar1;
    short sVar2;
    short *psVar3;
    uint6 uVar4;
    longlong **pplVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined4 *puVar12;
    undefined8 uVar13;
    undefined (*pauVar14) [16];
    undefined2 *puVar15;
    longlong *plVar16;
    longlong *plVar17;
    float *pfVar18;
    undefined8 *puVar19;
    longlong lVar20;
    longlong *plVar21;
    undefined *puVar22;
    undefined *puVar23;
    longlong **pplVar24;
    ulonglong uVar25;
    float extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    undefined4 extraout_XMM0_Da_06;
    undefined extraout_XMM0 [16];
    float fVar26;
    ushort uVar30;
    undefined auVar27 [16];
    undefined4 uVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    undefined4 uVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    undefined4 uVar45;
    undefined4 uVar46;
    undefined4 uVar47;
    undefined4 uVar48;
    float fVar49;
    float fVar50;
    undefined4 uVar51;
    undefined4 uVar52;
    undefined4 uVar53;
    undefined4 uVar54;
    int local_res10 [2];
    ulonglong local_res18;
    undefined *local_res20;
    float *in_stack_fffffffffffffca0;
    undefined local_338 [4];
    undefined auStack820 [4];
    undefined8 uStack816;
    undefined local_328 [4];
    undefined auStack804 [4];
    undefined8 uStack800;
    undefined4 local_318;
    int local_314;
    undefined local_308 [8];
    undefined8 uStack768;
    undefined8 local_2f8;
    undefined8 uStack752;
    longlong *local_2e8;
    longlong *local_2e0;
    undefined local_2d8 [8];
    undefined2 *local_2d0;
    undefined local_2c8 [16];
    undefined8 local_2b8;
    float local_2b0;
    float local_2ac;
    undefined4 local_2a8;
    undefined4 local_2a4;
    undefined4 local_298;
    undefined4 uStack660;
    undefined4 uStack656;
    undefined4 uStack652;
    undefined local_288 [16];
    undefined local_268 [16];
    undefined local_258 [16];
    longlong local_248;
    float local_238;
    float fStack564;
    float fStack560;
    float fStack556;
    ulonglong local_228;
    float local_218;
    float fStack532;
    float fStack528;
    float fStack524;
    longlong local_208;
    ulonglong local_200;
    undefined local_1f8 [8];
    undefined *local_1f0;
    longlong local_1e8;
    undefined local_1d8 [4];
    undefined4 local_1d4;
    undefined4 local_1d0;
    undefined4 local_1cc;
    undefined local_1c8 [16];
    longlong local_1b8 [2];
    float local_1a8;
    float fStack420;
    float local_198;
    float fStack404;
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    float local_148;
    float fStack324;
    float fStack320;
    float fStack316;
    undefined local_138 [16];
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined local_118 [16];
    undefined local_108 [16];
    undefined local_f8 [184];
    undefined auVar28 [16];
    undefined auVar29 [16];

    local_200 = *(ulonglong *)(DAT_140c65898 + 0x6490);
    local_314 = DAT_140c636a8;
    local_res10[0] = param_2;
    local_res18 = param_3;
    lVar9 = (**(code **)(*DAT_140c65670 + 0x248))();
    lVar20 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar20 == 0) {
        lVar20 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    iVar8 = DAT_140c463c0;
    if (*DAT_140c63750 < DAT_140c463c0) {
        iVar8 = *DAT_140c63750;
    }
    local_228 = (ulonglong)
            ((float)(ulonglong)*(uint *)(lVar9 + 8) /
             *(float *)(&DAT_140c463d0 + (longlong)iVar8 * 4));
    uVar25 = (ulonglong)
            ((float)(ulonglong)*(uint *)(lVar9 + 0xc) /
             *(float *)(&DAT_140c463d0 + (longlong)iVar8 * 4));
    local_208 = lVar20;
    local_1f0 = (undefined *)FUN_14018b280();
    local_1e8 = 0;
    *local_1f0 = 0;
    lVar9 = param_3 + 0x1838;
    *(undefined8 *)(local_1f0 + 8) = 0;
    *(undefined **)(local_1f0 + 0x10) = local_1f0;
    *(undefined **)(local_1f0 + 0x18) = local_1f0;
    local_248 = lVar9;
    lVar10 = FUN_1404802d0(lVar9,local_res10);
    lVar10 = *(longlong *)(lVar10 + 8);
    lVar11 = FUN_1404802d0(lVar9,local_res10);
    fVar50 = 0.5;
    if (lVar10 != **(longlong **)(lVar11 + 8)) {
        do {
            lVar10 = *(longlong *)(lVar10 + 8);
            if (*(longlong **)(lVar10 + 0x50) != (longlong *)0x0) {
                iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x30))();
                iVar8 = *(int *)(lVar10 + 0x10);
                iVar7 = (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x10))();
                if (iVar7 == 0) {
                    if (param_2 != 0) {
                        (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x30))();
                        plVar17 = (longlong *)(**(code **)(**(longlong **)(lVar10 + 0x50) + 0x60))();
                        (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x78))();
                        local_res20 = (undefined *)
                                ((ulonglong)local_res20 & 0xffffffff00000000 |
                                 (ulonglong)(uint)extraout_XMM0_Da);
                        fVar40 = _DAT_140c78410 * extraout_XMM0_Da;
                        fVar42 = fRam0000000140c78414 * extraout_XMM0_Da;
                        local_148 = _DAT_140c78420 * extraout_XMM0_Da;
                        fStack324 = fRam0000000140c78424 * extraout_XMM0_Da;
                        fStack320 = fRam0000000140c78428 * extraout_XMM0_Da;
                        fStack316 = fRam0000000140c7842c * extraout_XMM0_Da;
                        local_138 = CONCAT412(fRam0000000140c7843c * extraout_XMM0_Da,
                                              CONCAT48(fRam0000000140c78438 * extraout_XMM0_Da,
                                                       CONCAT44(fRam0000000140c78434 * extraout_XMM0_Da,
                                                                _DAT_140c78430 * extraout_XMM0_Da)));
                        local_128 = _DAT_140c78440;
                        uStack292 = uRam0000000140c78444;
                        uStack288 = uRam0000000140c78448;
                        uStack284 = uRam0000000140c7844c;
                        fVar36 = extraout_XMM0_Da;
                        (**(code **)(*param_1 + 0x358))(param_1,&local_198);
                        (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x88))();
                        fVar49 = *(float *)(lVar10 + 0x38) + local_198 + local_1a8;
                        fVar44 = *(float *)(lVar10 + 0x3c) + fStack404 + fStack420;
                        if (*(int *)(lVar10 + 0x58) < 0) {
                            if (*(longlong *)(lVar10 + 0x48) == 0) {
                                in_stack_fffffffffffffca0 =
                                        (float *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffca0 >> 0x20),1);
                                local_2f8 = (longlong **)CONCAT44(_DAT_140c784f4,_DAT_140c784f0);
                                uStack752 = (longlong **)CONCAT44(uRam0000000140c784fc,uRam0000000140c784f8);
                                _local_308 = _DAT_140c784e0;
                                auVar29 = CONCAT97((unkuint9)
                                                           SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(
                                                                                                                     CONCAT312(SUB153(CONCAT213(SUB152(CONCAT114(SUB161
                                                                                                                                                                         (_DAT_140b7b6f0 >> 0x38,0),
                                                                                                                                                                 ZEXT1314(SUB1613(_DAT_140b7b6f0,0))) >> 0x68,0),
                                                                                                                                                CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30,0),
                                                                                                                                                          SUB1612(_DAT_140b7b6f0,0))) >> 0x60,0),
                                                                                                                               ZEXT1112(SUB1611(_DAT_140b7b6f0,0))) >> 0x58,0),
                                                                                                             CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28,0),
                                                                                                                       SUB1610(_DAT_140b7b6f0,0))) >> 0x50,0),
                                                                                            (unkuint10)SUB169(_DAT_140b7b6f0,0)) >> 0x48,0),
                                                                           CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20,0),
                                                                                    SUB168(_DAT_140b7b6f0,0))) >> 0x40,0) <<
                                                                                                                          8,(SUB167(_DAT_140b7b6f0,0) >> 0x18) << 0x30);
                                auVar28 = CONCAT115(ZEXT1011(SUB1610(auVar29 >> 0x30,0)) << 8,
                                                    (SUB165(_DAT_140b7b6f0,0) >> 0x10) << 0x20);
                                auVar27 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar28 >> 0x20,0)) << 8,
                                                                      (SUB163(_DAT_140b7b6f0,0) >> 8) << 0x10) >>
                                                                                                               0x10,0),SUB162(_DAT_140b7b6f0,0)) &
                                          (undefined  [16])0xffffffffffff00ff;
                                uVar30 = SUB162(auVar29 >> 0x30,0);
                                uVar4 = CONCAT42(SUB144(CONCAT212(uVar30,ZEXT1012(SUB1610(auVar27,0))) >> 0x50,0),
                                                 SUB162(auVar28 >> 0x20,0));
                                local_168 = (float)(int)uVar4 * 0.003921569;
                                fStack356 = (float)SUB164(CONCAT106((unkuint10)uVar4 << 0x10,
                                                                    (SUB166(auVar27,0) >> 0x10) << 0x20) >> 0x20,0)
                                            * 0.003921569;
                                fStack352 = (float)(SUB164(auVar27,0) & 0xffff) * 0.003921569;
                                fStack348 = (float)(uint)uVar30 * 0.003921569;
                                (**(code **)(*DAT_140c65680 + 0x108))();
                            }
                            else {
                                FUN_140141100();
                                FUN_140141910(*(undefined8 *)(lVar10 + 0x48));
                                _local_308 = extraout_XMM0 & (undefined  [16])0x0;
                                local_2f8 = (longlong **)CONCAT44(uStack388,local_188);
                                uStack752 = (longlong **)CONCAT44(uStack380,uStack384);
                            }
                        }
                        else {
                            pauVar14 = (undefined (*) [16])FUN_1404778c0(&local_158);
                            _local_308 = *pauVar14;
                            local_2f8 = *(longlong ***)pauVar14[1];
                            uStack752 = *(longlong ***)(pauVar14[1] + 8);
                        }
                        fVar35 = 1.0;
                        fVar43 = fVar44 * *(float *)(lVar20 + 0xf0) + fVar49 * *(float *)(lVar20 + 0xe0) +
                                 *(float *)(lVar20 + 0x100) * 0.0 + *(float *)(lVar20 + 0x110);
                        fVar32 = fVar44 * *(float *)(lVar20 + 0xf4) + fVar49 * *(float *)(lVar20 + 0xe4) +
                                 *(float *)(lVar20 + 0x104) * 0.0 + *(float *)(lVar20 + 0x114);
                        fVar26 = fVar44 * *(float *)(lVar20 + 0xfc) + fVar49 * *(float *)(lVar20 + 0xec) +
                                 *(float *)(lVar20 + 0x10c) * 0.0 + *(float *)(lVar20 + 0x11c);
                        local_1c8 = CONCAT412(fVar26,CONCAT48(fVar44 * *(float *)(lVar20 + 0xf8) +
                                                              fVar49 * *(float *)(lVar20 + 0xe8) +
                                                              *(float *)(lVar20 + 0x108) * 0.0 +
                                                              *(float *)(lVar20 + 0x118),CONCAT44(fVar32,fVar43)
                        ));
                        fVar26 = 1.0 / fVar26;
                        fVar49 = (fVar43 * fVar50 * fVar26 + fVar50) * (float)(local_228 & 0xffffffff);
                        fVar44 = (fVar50 - fVar32 * fVar50 * fVar26) * (float)(uVar25 & 0xffffffff);
                        (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x80))();
                        if (*(int *)(lVar10 + 0x58) < 0) {
                            _local_338 = ZEXT1216(_auStack820) << 0x20;
                            _local_338 = SUB128(CONCAT84(uStack816,local_308._4_4_),0) << 0x20;
                            _local_338 = CONCAT48((undefined4)uStack768,_local_338);
                            _local_338 = CONCAT412(uStack768._4_4_,_local_338);
                            _local_328 = ZEXT1216(_auStack804) << 0x20;
                            _local_328 = SUB128(CONCAT84(uStack800,local_2f8._4_4_),0) << 0x20;
                            _local_328 = CONCAT48((undefined4)uStack752,_local_328);
                            _local_328 = CONCAT412(uStack752._4_4_,_local_328);
                            fVar36 = (fVar49 + 0.5) - ((float)local_2f8 - local_308._0_4_) * 0.5;
                            fVar50 = (fVar44 + 0.5) - (local_2f8._4_4_ - local_308._4_4_);
                            local_328 = ((float)local_2f8 - local_308._0_4_) + fVar36;
                            auStack804 = (local_2f8._4_4_ - local_308._4_4_) + fVar50;
                            _local_338 = CONCAT44(fVar50,fVar36);
                            fVar43 = (float)SUB164(ZEXT1016((unkuint10)0 << 0x40) >> 0x40,0) * 0.003921569;
                            local_318 = extraout_XMM0_Da_00;
                            if (*(longlong *)(lVar10 + 0x48) == 0) {
                                local_158 = fVar43;
                                fStack340 = 0.0;
                                fStack336 = 0.0;
                                fStack332 = 0.0;
                                (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x70))();
                                fVar43 = 1.0;
                                fVar32 = 1.0;
                                fVar33 = extraout_XMM0_Da_03;
                                pfVar18 = (float *)(**(code **)(**(longlong **)(lVar10 + 0x50) + 0x50))
                                        (*(longlong **)(lVar10 + 0x50),local_118);
                                lVar11 = DAT_140c65898;
                                psVar3 = *(short **)(lVar10 + 0x20);
                                lVar20 = 0;
                                local_218 = *pfVar18 * fVar43;
                                fStack532 = pfVar18[1] * fVar35;
                                fStack528 = pfVar18[2] * fVar32;
                                fStack524 = pfVar18[3] * fVar33;
                                local_2e8 = (longlong *)0x0;
                                local_2d0 = (undefined2 *)0x0;
                                local_2c8 = ZEXT816(0);
                                fVar40 = SQRT(fVar40 * fVar40 + fVar42 * fVar42 + 0.0);
                                fVar26 = local_1c8._8_4_ * local_res20._0_4_ * fVar26;
                                local_2e0 = plVar17;
                                if (*(int *)(lVar10 + 0x60) == 0) {
                                    sVar2 = *psVar3;
                                    while (sVar2 != 0) {
                                        lVar20 = lVar20 + 1;
                                        sVar2 = psVar3[lVar20];
                                    }
                                    FUN_14001c1b0(local_2d8);
                                    plVar17 = local_2e0;
                                    local_2b8 = 0;
                                    local_288 = _local_328;
                                    local_2a8 = local_318;
                                    local_2a4 = 1;
                                    local_298 = local_338;
                                    uStack660 = auStack820;
                                    uStack656 = (float)uStack816;
                                    uStack652 = uStack816._4_4_;
                                    local_268._0_8_ = CONCAT44(fStack532,local_218);
                                    local_268._0_12_ = CONCAT48(fStack528,local_268._0_8_);
                                    local_268 = CONCAT412(fStack524,local_268._0_12_);
                                    local_258._0_8_ = CONCAT44(fStack340,local_158);
                                    local_258._0_12_ = CONCAT48(fStack336,local_258._0_8_);
                                    local_258 = CONCAT412(fStack332,local_258._0_12_);
                                    local_2b0 = fVar40;
                                    local_2ac = fVar26;
                                    if (local_2e0 != (longlong *)0x0) {
                                        (**(code **)*local_2e0)(local_2e0);
                                    }
                                    lVar20 = *(longlong *)(lVar11 + 0x7c78);
                                    plVar21 = (longlong *)FUN_14018b280(0xb0,0);
                                    if (plVar21 + 2 != (longlong *)0x0) {
                                        FUN_1403f4ad0(plVar21 + 2,&local_2e8);
                                        plVar17 = local_2e0;
                                    }
                                    *plVar21 = lVar20;
                                    plVar21[1] = *(longlong *)(lVar20 + 8);
                                    **(longlong ***)(lVar20 + 8) = plVar21;
                                    *(longlong **)(lVar20 + 8) = plVar21;
                                    if (plVar17 != (longlong *)0x0) {
                                        (**(code **)(*plVar17 + 8))(plVar17);
                                    }
                                    if (local_2e8 != (longlong *)0x0) {
                                        (**(code **)(*local_2e8 + 8))();
                                    }
                                    if (local_2d0 != (undefined2 *)0x0) {
                                        FUN_14018b900(local_2d0,0);
                                    }
                                }
                                else {
                                    sVar2 = *psVar3;
                                    while (sVar2 != 0) {
                                        lVar20 = lVar20 + 1;
                                        sVar2 = psVar3[lVar20];
                                    }
                                    FUN_14001c1b0(local_2d8);
                                    plVar17 = local_2e0;
                                    local_2b8 = 0;
                                    local_288 = _local_328;
                                    local_2a8 = local_318;
                                    local_2a4 = 1;
                                    local_298 = local_338;
                                    uStack660 = auStack820;
                                    uStack656 = (float)uStack816;
                                    uStack652 = uStack816._4_4_;
                                    local_268._0_8_ = CONCAT44(fStack532,local_218);
                                    local_268._0_12_ = CONCAT48(fStack528,local_268._0_8_);
                                    local_268 = CONCAT412(fStack524,local_268._0_12_);
                                    local_258._0_8_ = CONCAT44(fStack340,local_158);
                                    local_258._0_12_ = CONCAT48(fStack336,local_258._0_8_);
                                    local_258 = CONCAT412(fStack332,local_258._0_12_);
                                    local_2b0 = fVar40;
                                    local_2ac = fVar26;
                                    if (local_2e0 != (longlong *)0x0) {
                                        (**(code **)*local_2e0)(local_2e0);
                                    }
                                    lVar20 = *(longlong *)(lVar11 + 0x7c88);
                                    plVar21 = (longlong *)FUN_14018b280(0xb0,0);
                                    if (plVar21 + 2 != (longlong *)0x0) {
                                        FUN_1403f4ad0(plVar21 + 2,&local_2e8);
                                        plVar17 = local_2e0;
                                    }
                                    *plVar21 = lVar20;
                                    plVar21[1] = *(longlong *)(lVar20 + 8);
                                    **(longlong ***)(lVar20 + 8) = plVar21;
                                    *(longlong **)(lVar20 + 8) = plVar21;
                                    if (plVar17 != (longlong *)0x0) {
                                        (**(code **)(*plVar17 + 8))(plVar17);
                                    }
                                    if (local_2e8 != (longlong *)0x0) {
                                        (**(code **)(*local_2e8 + 8))();
                                    }
                                    if (local_2d0 != (undefined2 *)0x0) {
                                        FUN_14018b900(local_2d0,0);
                                    }
                                }
                            }
                            else {
                                local_218 = fVar43;
                                fStack532 = 0.0;
                                fStack528 = 0.0;
                                fStack524 = 0.0;
                                (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x70))();
                                lVar20 = DAT_140c65898;
                                plVar17 = *(longlong **)(lVar10 + 0x48);
                                auVar27 = CONCAT88(SUB168(CONCAT412(extraout_XMM0_Da_02,
                                                                    CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),
                                                                             SUB168(_DAT_140b7a4c0,0))) >> 0x40,0),
                                                   SUB168(_DAT_140b7a4c0,0) & 0xffffffff |
                                                   (ulonglong)(uint)fVar35 << 0x20);
                                local_2e0 = (longlong *)0x0;
                                fVar40 = SQRT(fVar40 * fVar40 + fVar42 * fVar42 + 0.0);
                                fVar26 = local_1c8._8_4_ * local_res20._0_4_ * fVar26;
                                local_2e8 = plVar17;
                                if (*(int *)(lVar10 + 0x60) == 0) {
                                    puVar15 = (undefined2 *)FUN_14018b280(0x10);
                                    local_2c8 = CONCAT88(puVar15 + 8,puVar15);
                                    if (puVar15 != (undefined2 *)0x0) {
                                        *puVar15 = 0;
                                    }
                                    local_2b8 = 0;
                                    local_2a4 = 1;
                                    local_2a8 = local_318;
                                    local_288 = _local_328;
                                    local_298 = local_338;
                                    uStack660 = auStack820;
                                    uStack656 = (float)uStack816;
                                    uStack652 = uStack816._4_4_;
                                    local_258._0_8_ = CONCAT44(fStack532,local_218);
                                    local_258._0_12_ = CONCAT48(fStack528,local_258._0_8_);
                                    local_258 = CONCAT412(fStack524,local_258._0_12_);
                                    local_2d0 = puVar15;
                                    local_2b0 = fVar40;
                                    local_2ac = fVar26;
                                    local_268 = auVar27;
                                    if (plVar17 != (longlong *)0x0) {
                                        (**(code **)*plVar17)(plVar17);
                                    }
                                    lVar20 = *(longlong *)(lVar20 + 0x7c78);
                                }
                                else {
                                    puVar15 = (undefined2 *)FUN_14018b280(0x10);
                                    local_2c8 = CONCAT88(puVar15 + 8,puVar15);
                                    if (puVar15 != (undefined2 *)0x0) {
                                        *puVar15 = 0;
                                    }
                                    local_2b8 = 0;
                                    local_2a4 = 1;
                                    local_2a8 = local_318;
                                    local_288 = _local_328;
                                    local_298 = local_338;
                                    uStack660 = auStack820;
                                    uStack656 = (float)uStack816;
                                    uStack652 = uStack816._4_4_;
                                    local_258._0_8_ = CONCAT44(fStack532,local_218);
                                    local_258._0_12_ = CONCAT48(fStack528,local_258._0_8_);
                                    local_258 = CONCAT412(fStack524,local_258._0_12_);
                                    local_2d0 = puVar15;
                                    local_2b0 = fVar40;
                                    local_2ac = fVar26;
                                    local_268 = auVar27;
                                    if (plVar17 != (longlong *)0x0) {
                                        (**(code **)*plVar17)(plVar17);
                                    }
                                    lVar20 = *(longlong *)(lVar20 + 0x7c88);
                                }
                                plVar16 = (longlong *)FUN_14018b280(0xb0,0);
                                plVar21 = (longlong *)0x0;
                                if (plVar16 + 2 != (longlong *)0x0) {
                                    FUN_1403f4ad0(plVar16 + 2,&local_2e8);
                                    plVar21 = local_2e0;
                                    plVar17 = local_2e8;
                                    puVar15 = local_2d0;
                                }
                                *plVar16 = lVar20;
                                plVar16[1] = *(longlong *)(lVar20 + 8);
                                **(longlong ***)(lVar20 + 8) = plVar16;
                                *(longlong **)(lVar20 + 8) = plVar16;
                                if (plVar21 != (longlong *)0x0) {
                                    (**(code **)(*plVar21 + 8))();
                                }
                                if (plVar17 != (longlong *)0x0) {
                                    (**(code **)(*plVar17 + 8))();
                                }
                                if (puVar15 != (undefined2 *)0x0) {
                                    FUN_14018b900(puVar15,0);
                                }
                                lVar9 = local_248;
                            }
                        }
                        else {
                            _local_328 = ZEXT1216(_auStack804) << 0x20;
                            _local_328 = SUB128(CONCAT84(uStack800,local_2f8._4_4_),0) << 0x20;
                            _local_328 = CONCAT48((undefined4)uStack752,_local_328);
                            _local_328 = CONCAT412(uStack752._4_4_,_local_328);
                            _local_338 = ZEXT1216(_auStack820) << 0x20;
                            _local_338 = SUB128(CONCAT84(uStack816,local_308._4_4_),0) << 0x20;
                            _local_338 = CONCAT48((undefined4)uStack768,_local_338);
                            _local_338 = CONCAT412(uStack768._4_4_,_local_338);
                            iVar6 = (int)(((float)local_2f8 - local_308._0_4_) * fVar36 + fVar50);
                            iVar8 = (int)((local_2f8._4_4_ - local_308._4_4_) * fVar36 + fVar50);
                            fVar50 = fVar49 - (float)(iVar6 / 2);
                            fVar36 = fVar44 - (float)(iVar8 / 2);
                            _local_338 = CONCAT44(fVar36,fVar50);
                            _local_328 = CONCAT44((float)iVar8 + fVar36,(float)iVar6 + fVar50);
                            (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x70))();
                            fVar50 = 1.0;
                            fVar36 = 1.0;
                            fVar40 = extraout_XMM0_Da_01;
                            pfVar18 = (float *)(**(code **)(**(longlong **)(lVar10 + 0x50) + 0x50))
                                    (*(longlong **)(lVar10 + 0x50),local_108);
                            local_178 = *pfVar18 * fVar50;
                            fStack372 = pfVar18[1] * fVar35;
                            fStack368 = pfVar18[2] * fVar36;
                            fStack364 = pfVar18[3] * fVar40;
                            in_stack_fffffffffffffca0 = &local_178;
                            FUN_1403f5e40();
                            fVar50 = auStack820;
                            fVar36 = local_338;
                        }
                        pfVar18 = DAT_140c7cf80;
                        fStack560 = (float)(int)local_328;
                        fStack556 = (float)(int)auStack804;
                        local_238 = (float)(int)fVar36;
                        fStack564 = (float)(int)fVar50;
                        if (DAT_140c7cf80 == _DAT_140c7cf88) {
                            FUN_14015c990();
                        }
                        else {
                            if (DAT_140c7cf80 != (float *)0x0) {
                                *DAT_140c7cf80 = local_238;
                                pfVar18[1] = fStack564;
                                pfVar18[2] = fStack560;
                                pfVar18[3] = fStack556;
                            }
                            DAT_140c7cf80 = DAT_140c7cf80 + 4;
                        }
                        auVar28 = _local_328;
                        auVar27 = _local_338;
                        iVar8 = *(int *)(lVar10 + 100);
                        fVar50 = 0.5;
                        if (-1 < iVar8) {
                            lVar20 = *(longlong *)(DAT_140c65898 + 0x7c48);
                            lVar11 = *(longlong *)(DAT_140c65898 + 0x7ca8);
                            iVar7 = (int)(((float)local_2f8 - local_308._0_4_) * local_res20._0_4_ + 0.5);
                            iVar6 = (int)((local_2f8._4_4_ - local_308._4_4_) * local_res20._0_4_ + 0.5);
                            fVar49 = fVar49 - (float)(iVar7 / 2);
                            fVar44 = fVar44 - (float)(iVar6 / 2);
                            local_res20._0_4_ = (float)*(int *)(lVar10 + 0x68) * local_res20._0_4_;
                            fVar40 = fVar49 - local_res20._0_4_;
                            fVar42 = fVar44 - local_res20._0_4_;
                            fVar36 = (float)iVar7 + fVar49 + local_res20._0_4_;
                            local_res20._0_4_ = (float)iVar6 + fVar44 + local_res20._0_4_;
                            uVar31 = *(undefined4 *)(lVar10 + 0x70);
                            uVar45 = *(undefined4 *)(lVar10 + 0x74);
                            uVar46 = *(undefined4 *)(lVar10 + 0x78);
                            uVar47 = *(undefined4 *)(lVar10 + 0x7c);
                            _local_328 = CONCAT44(local_res20._0_4_,fVar36);
                            _local_338 = CONCAT44(fVar42,fVar40);
                            uStack816._0_4_ = SUB164(auVar27,8);
                            uStack816._4_4_ = SUB164(auVar27,0xc);
                            uStack800._0_4_ = SUB164(auVar28,8);
                            uStack800._4_4_ = SUB164(auVar28,0xc);
                            plVar17 = (longlong *)FUN_14018b280(0x50);
                            if ((undefined (*) [16])(plVar17 + 2) != (undefined (*) [16])0x0) {
                                plVar17[8] = (longlong)iVar8 * 0x30 + lVar20;
                                *(undefined (*) [16])(plVar17 + 2) =
                                        CONCAT412(uStack816._4_4_,CONCAT48((float)uStack816,CONCAT44(fVar42,fVar40)));
                                *(undefined (*) [16])(plVar17 + 4) =
                                        CONCAT412(uStack800._4_4_,
                                                  CONCAT48((float)uStack800,CONCAT44(local_res20._0_4_,fVar36)));
                                *(undefined (*) [16])(plVar17 + 6) =
                                        CONCAT412(uVar47,CONCAT48(uVar46,CONCAT44(uVar45,uVar31)));
                            }
                            *plVar17 = lVar11;
                            plVar17[1] = *(longlong *)(lVar11 + 8);
                            **(longlong ***)(lVar11 + 8) = plVar17;
                            *(longlong **)(lVar11 + 8) = plVar17;
                        }
                    }
                }
                else {
                    (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x78))();
                    puVar12 = (undefined4 *)
                            (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x88))
                            (*(longlong **)(lVar10 + 0x50),local_f8);
                    local_1d4 = *puVar12;
                    local_1d0 = puVar12[1];
                    local_1cc = puVar12[2];
                    lVar11 = FUN_1403fb0a0(local_1f8,local_1d8);
                    FUN_1401529e0(lVar11,local_1b8);
                    lVar20 = local_1b8[0];
                    if (local_1b8[0] != *(longlong *)(lVar11 + 8)) {
                        iVar7 = (**(code **)(**(longlong **)(local_1b8[0] + 0x80) + 0x30))();
                        if ((uint)(iVar6 + iVar8) <= (uint)(iVar7 + *(int *)(lVar20 + 0x40)))
                            goto LAB_140477cb9;
                        iVar8 = (**(code **)(**(longlong **)(lVar10 + 0x50) + 0x38))();
                        *(int *)(lVar10 + 0x10) = local_314 - iVar8;
                    }
                    uVar13 = FUN_1403fb300(lVar11,lVar10 + 0x18);
                    FUN_140474ec0(uVar13,lVar10 + 0x10);
                }
            }
            LAB_140477cb9:
            lVar11 = FUN_1404802d0(lVar9,local_res10);
            param_3 = local_res18;
            lVar20 = local_208;
            param_2 = local_res10[0];
        } while (lVar10 != **(longlong **)(lVar11 + 8));
    }
    fVar36 = 1.0;
    if ((local_200 == param_3) && (local_1e8 != 0)) {
        fVar49 = 1.0;
        (**(code **)(*DAT_140c65680 + 0x38))();
        local_res20 = *(undefined **)(local_1f0 + 0x10);
        if (local_res20 != local_1f0) {
            do {
                puVar23 = local_res20;
                uStack768 = (longlong **)0x0;
                _local_308 = _local_308 & (undefined  [16])0xffffffffffffffff;
                local_2f8 = (longlong **)0x0;
                uStack752 = (longlong **)0x0;
                if (local_1e8 != 0) {
                    FUN_1403fb510(local_308);
                }
                lVar20 = *(longlong *)(*(longlong *)(puVar23 + 0x38) + 0x10);
                if (lVar20 != *(longlong *)(puVar23 + 0x38)) {
                    do {
                        pplVar24 = local_2f8;
                        if (local_2f8 == uStack752) {
                            FUN_1403fdf10(local_308);
                        }
                        else {
                            if (local_2f8 != (longlong **)0x0) {
                                FUN_140474e10(local_2f8);
                            }
                            local_2f8 = pplVar24 + 0xe;
                        }
                        lVar9 = *(longlong *)(lVar20 + 0x18);
                        if (lVar9 == 0) {
                            lVar9 = *(longlong *)(lVar20 + 8);
                            if (lVar20 == *(longlong *)(lVar9 + 0x18)) {
                                do {
                                    lVar20 = lVar9;
                                    lVar9 = *(longlong *)(lVar20 + 8);
                                } while (lVar20 == *(longlong *)(lVar9 + 0x18));
                            }
                            if (*(longlong *)(lVar20 + 0x18) != lVar9) {
                                lVar20 = lVar9;
                            }
                        }
                        else {
                            for (lVar10 = *(longlong *)(lVar9 + 0x10); lVar20 = lVar9, lVar10 != 0;
                                 lVar10 = *(longlong *)(lVar10 + 0x10)) {
                                lVar9 = lVar10;
                            }
                        }
                    } while (lVar20 != *(longlong *)(puVar23 + 0x38));
                }
                pplVar24 = local_2f8;
                if (uStack768 != local_2f8) {
                    lVar20 = ((longlong)local_2f8 - (longlong)uStack768) / 0x70;
                    for (lVar9 = lVar20; lVar9 != 1; lVar9 = lVar9 >> 1) {
                    }
                    FUN_1403ff250(uStack768,local_2f8);
                    if (lVar20 < 0x11) {
                        FUN_1403ff6d0(uStack768,pplVar24,&LAB_140400de0);
                    }
                    else {
                        FUN_1403ff6d0(uStack768,uStack768 + 0xe0,&LAB_140400de0);
                        FUN_1403ffe90(uStack768 + 0xe0);
                    }
                }
                fVar44 = 0.0;
                pplVar5 = uStack768;
                if (pplVar24 != uStack768) {
                    fVar35 = 0.0;
                    iVar8 = (int)uVar25;
                    uVar51 = 0;
                    uVar52 = 0;
                    uVar53 = 0;
                    uVar54 = 0;
                    fVar33 = (float)(int)local_228 * fVar50;
                    auVar27 = ZEXT416((uint)fVar33) & (undefined  [16])0xffffffffffffffff;
                    fVar26 = (float)iVar8 * 0.25;
                    fVar32 = (float)iVar8 * fVar50;
                    auVar28 = ZEXT416((uint)(float)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2));
                    uVar31 = 0;
                    fVar43 = 0.0;
                    uVar45 = 0;
                    uVar46 = 0;
                    uVar47 = 0;
                    uVar48 = 0;
                    pplVar24 = pplVar24 + -6;
                    fVar40 = fVar33;
                    fVar42 = fVar35;
                    do {
                        uVar41 = (undefined4)((ulonglong)in_stack_fffffffffffffca0 >> 0x20);
                        fVar34 = SUB164(auVar27 >> 0x20,0);
                        (**(code **)(**pplVar24 + 0x30))();
                        plVar17 = (longlong *)(**(code **)(**pplVar24 + 0x60))();
                        (**(code **)(**pplVar24 + 0x70))();
                        fVar37 = 1.0;
                        fVar38 = 1.0;
                        fVar39 = extraout_XMM0_Da_04;
                        pfVar18 = (float *)(**(code **)(**pplVar24 + 0x58))();
                        local_238 = *pfVar18 * fVar37;
                        fStack564 = pfVar18[1] * fVar36;
                        fStack560 = pfVar18[2] * fVar38;
                        fStack556 = pfVar18[3] * fVar39;
                        (**(code **)(**pplVar24 + 0x78))();
                        fVar49 = fVar49 * extraout_XMM0_Da_05;
                        puVar19 = (undefined8 *)(**(code **)(**pplVar24 + 0x18))(*pplVar24,&local_200);
                        fVar36 = (float)(int)*puVar19;
                        fVar37 = (float)*(int *)((longlong)puVar19 + 4);
                        fVar38 = 0.0;
                        fVar39 = 0.0;
                        (**(code **)(**pplVar24 + 0x80))(0);
                        _local_338 = CONCAT412(uVar54,CONCAT48(uVar53,CONCAT44(uVar52,uVar51)));
                        _local_328 = CONCAT412(uVar31,CONCAT48(fVar35,CONCAT44(fVar26,fVar33)));
                        in_stack_fffffffffffffca0 = (float *)CONCAT44(uVar41,1);
                        uVar41 = extraout_XMM0_Da_06;
                        (**(code **)(*DAT_140c65680 + 0x108))
                                (DAT_140c65680,plVar17,pplVar24[-6],0xffffffffffffffff,local_338,0x500,
                                 &local_238,in_stack_fffffffffffffca0);
                        fVar36 = (fVar40 - (local_328 - local_338) * fVar50) + fVar36 + 0.0;
                        fVar37 = fVar44 + (fVar32 - (auStack804 - auStack820) * fVar50) + fVar37;
                        fVar34 = fVar34 + (fVar42 - 0.0) + fVar38;
                        fVar38 = (fVar43 - 0.0) + fVar39 + 0.0;
                        auVar27 = CONCAT412(fVar38,CONCAT48(fVar34,CONCAT44(fVar37,fVar36)));
                        _local_338 = CONCAT44(auStack820 + fVar37,local_338 + fVar36);
                        _local_338 = CONCAT48((float)uStack816 + fVar34,_local_338);
                        _local_338 = CONCAT412(uStack816._4_4_ + fVar38,_local_338);
                        _local_328 = CONCAT44(auStack804 + fVar37,local_328 + fVar36);
                        _local_328 = CONCAT48((float)uStack800 + fVar34,_local_328);
                        _local_328 = CONCAT412(uStack800._4_4_ + fVar38,_local_328);
                        lVar20 = (**(code **)(*DAT_140c65670 + 0x248))();
                        local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar20 + 0xc);
                        lVar20 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"ActionBarsLeft");
                        iVar8 = *(int *)(lVar20 + 0x24);
                        lVar20 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"ActionBarsRight")
                                ;
                        iVar6 = *(int *)(lVar20 + 0x24);
                        lVar9 = FUN_14014e670(*(longlong *)(DAT_140c65898 + 0x7340) + 0xa58,L"CenterTextBottom")
                                ;
                        lVar20 = DAT_140c65898;
                        local_res18._0_4_ = *(int *)(lVar9 + 0x24);
                        if ((((float)iVar6 <= local_338) || (local_338 <= (float)iVar8)) &&
                            (((float)iVar6 <= local_328 || (local_328 <= (float)iVar8)))) {
                        }
                        fVar36 = (float)(int)local_res18;
                        local_2c8 = ZEXT416((uint)fVar36);
                        if (fVar36 < auStack804) {
                            fVar44 = fVar36 - auStack804;
                            local_2c8 = ZEXT416((uint)(auStack820 + fVar44)) & (undefined  [16])0xffffffffffffffff
                                    ;
                            _local_338 = CONCAT88(uStack816,CONCAT44(auStack820 + fVar44,local_338));
                            _local_328 = CONCAT44(auStack804 + fVar44,local_328);
                        }
                        plVar21 = pplVar24[-6];
                        local_2c8 = local_2c8 & (undefined  [16])0x0;
                        local_2e8 = (longlong *)0x0;
                        local_2d0 = (undefined2 *)0x0;
                        local_2e0 = plVar17;
                        if (*(int *)(pplVar24 + 2) == 0) {
                            sVar2 = *(short *)plVar21;
                            lVar9 = 0;
                            while (sVar2 != 0) {
                                lVar9 = lVar9 + 1;
                                sVar2 = *(short *)((longlong)plVar21 + lVar9 * 2);
                            }
                            FUN_14001c1b0(local_2d8,plVar21,(short *)((longlong)plVar21 + lVar9 * 2));
                            plVar17 = local_2e0;
                            local_2b8 = 0;
                            local_2b0 = 0.0;
                            local_2a4 = 1;
                            local_298 = local_338;
                            uStack660 = auStack820;
                            uStack656 = (float)uStack816;
                            uStack652 = uStack816._4_4_;
                            local_288 = _local_328;
                            local_268._0_8_ = CONCAT44(fStack564,local_238);
                            local_268._0_12_ = CONCAT48(fStack560,local_268._0_8_);
                            local_268 = CONCAT412(fStack556,local_268._0_12_);
                            local_258 = CONCAT412(uVar48,CONCAT48(uVar47,CONCAT44(uVar46,uVar45)));
                            local_2ac = fVar49;
                            local_2a8 = uVar41;
                            if (local_2e0 != (longlong *)0x0) {
                                (**(code **)*local_2e0)(local_2e0);
                            }
                            lVar20 = *(longlong *)(lVar20 + 0x7c78);
                        }
                        else {
                            sVar2 = *(short *)plVar21;
                            lVar9 = 0;
                            while (sVar2 != 0) {
                                lVar9 = lVar9 + 1;
                                sVar2 = *(short *)((longlong)plVar21 + lVar9 * 2);
                            }
                            FUN_14001c1b0(local_2d8,plVar21,(short *)((longlong)plVar21 + lVar9 * 2));
                            plVar17 = local_2e0;
                            local_2b8 = 0;
                            local_2b0 = 0.0;
                            local_2a4 = 1;
                            local_298 = local_338;
                            uStack660 = auStack820;
                            uStack656 = (float)uStack816;
                            uStack652 = uStack816._4_4_;
                            local_288 = _local_328;
                            local_268._0_8_ = CONCAT44(fStack564,local_238);
                            local_268._0_12_ = CONCAT48(fStack560,local_268._0_8_);
                            local_268 = CONCAT412(fStack556,local_268._0_12_);
                            local_258 = CONCAT412(uVar48,CONCAT48(uVar47,CONCAT44(uVar46,uVar45)));
                            local_2ac = fVar49;
                            local_2a8 = uVar41;
                            if (local_2e0 != (longlong *)0x0) {
                                (**(code **)*local_2e0)(local_2e0);
                            }
                            lVar20 = *(longlong *)(lVar20 + 0x7c88);
                        }
                        plVar21 = (longlong *)FUN_14018b280(0xb0,0);
                        if (plVar21 + 2 != (longlong *)0x0) {
                            FUN_1403f4ad0(plVar21 + 2,&local_2e8);
                            plVar17 = local_2e0;
                        }
                        *plVar21 = lVar20;
                        plVar21[1] = *(longlong *)(lVar20 + 8);
                        **(longlong ***)(lVar20 + 8) = plVar21;
                        *(longlong **)(lVar20 + 8) = plVar21;
                        if (plVar17 != (longlong *)0x0) {
                            (**(code **)(*plVar17 + 8))(plVar17);
                        }
                        if (local_2e8 != (longlong *)0x0) {
                            (**(code **)(*local_2e8 + 8))();
                        }
                        if (local_2d0 != (undefined2 *)0x0) {
                            FUN_14018b900(local_2d0,0);
                        }
                        fVar44 = fVar44 - (auStack804 - auStack820);
                        if (SUB164(auVar28,0) < fVar44) break;
                        fVar36 = 1.0;
                        pplVar1 = pplVar24 + -8;
                        pplVar24 = pplVar24 + -0xe;
                    } while (pplVar1 != uStack768);
                    fVar36 = 1.0;
                    puVar23 = local_res20;
                    pplVar24 = local_2f8;
                }
                for (; pplVar5 != pplVar24; pplVar5 = pplVar5 + 0xe) {
                    FUN_140474fa0(pplVar5);
                }
                if (uStack768 != (longlong **)0x0) {
                    FUN_14018b900(uStack768,0);
                }
                local_res20 = *(undefined **)(puVar23 + 0x18);
                if (local_res20 == (undefined *)0x0) {
                    puVar22 = *(undefined **)(puVar23 + 8);
                    if (puVar23 == *(undefined **)(puVar22 + 0x18)) {
                        do {
                            puVar23 = puVar22;
                            puVar22 = *(undefined **)(puVar23 + 8);
                        } while (puVar23 == *(undefined **)(puVar22 + 0x18));
                    }
                    local_res20 = puVar23;
                    if (*(undefined **)(puVar23 + 0x18) != puVar22) {
                        local_res20 = puVar22;
                    }
                }
                else {
                    for (puVar23 = *(undefined **)(local_res20 + 0x10); puVar23 != (undefined *)0x0;
                         puVar23 = *(undefined **)(puVar23 + 0x10)) {
                        local_res20 = puVar23;
                    }
                }
            } while (local_res20 != local_1f0);
        }
        (**(code **)(*DAT_140c65680 + 0x128))();
    }
    FUN_1403fb2b0(local_1f8);
    return;
}



ulonglong FUN_140478fd0(longlong param_1,int param_2)

{
    uint *puVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined *puVar7;
    undefined8 local_38;
    undefined4 local_30;
    undefined8 local_2c;
    undefined8 local_24;
    undefined4 local_1c;

    uVar6 = 0;
    if ((DAT_140c65970 == 0) || (iVar4 = *(int *)(DAT_140c65970 + 8), 3 < iVar4)) {
        FUN_140479200();
        return 0;
    }
    if (param_2 == 0) {
        puVar1 = *(uint **)(param_1 + 0x1908);
        if ((*(char *)(puVar1 + 1) == '\0') || (*(char *)((longlong)puVar1 + 0xb) == '\0')) {
            FUN_140479200();
            return 0;
        }
        uVar6 = FUN_1407e6af0((undefined8 *)(param_1 + 0x18b8),puVar1,0x48);
        if ((int)uVar6 == 0) {
            return uVar6;
        }
        puVar7 = *(undefined **)(*(longlong *)(param_1 + 0x18) + 0x100);
        if ((puVar7 == (undefined *)0x0) &&
            (puVar7 = *(undefined **)(puVar1 + 6), *(char *)(puVar1 + 3) != '\0')) {
            if ((*puVar1 < 0x3f) && ((0x4e38000000000000U >> ((longlong)(int)*puVar1 & 0x3fU) & 1) != 0))
            {
                puVar7 = (&PTR_u_UI_Interface_Overheads_UI_CRB_Ov_140b03988)[iVar4];
            }
            else {
                puVar7 = (&PTR_u_UI_Interface_Overheads_UI_CRB_Ov_140b03968)[iVar4];
            }
        }
        FUN_140479200(param_1);
        if (puVar7 == (undefined *)0x0) {
            return 0;
        }
        uVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                (*(longlong **)(DAT_140c65898 + 0x7250),puVar7,param_1 + 0x18b0,0);
        uVar6 = (ulonglong)uVar5;
        if ((int)uVar5 < 0) {
            return uVar6;
        }
        puVar2 = *(undefined8 **)(param_1 + 0x1908);
        local_38 = 0x96;
        local_2c = 0;
        local_24 = 0;
        local_30 = 0x3f800000;
        *(undefined8 *)(param_1 + 0x18b8) = *puVar2;
        local_1c = 0;
        *(undefined8 *)(param_1 + 0x18c0) = puVar2[1];
        *(undefined8 *)(param_1 + 0x18c8) = puVar2[2];
        *(undefined8 *)(param_1 + 0x18d0) = puVar2[3];
        *(undefined8 *)(param_1 + 0x18d8) = puVar2[4];
        *(undefined8 *)(param_1 + 0x18e0) = puVar2[5];
        *(undefined8 *)(param_1 + 0x18e8) = puVar2[6];
        *(undefined8 *)(param_1 + 0x18f0) = puVar2[7];
        *(undefined8 *)(param_1 + 0x18f8) = puVar2[8];
        (**(code **)(**(longlong **)(param_1 + 0x18b0) + 0x248))
                (*(longlong **)(param_1 + 0x18b0),0,&local_38);
    }
    else {
        if (*(longlong **)(param_1 + 0x18b0) == (longlong *)0x0) {
            return 0;
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x18b0) + 0x3b0))();
        if (iVar4 != 0) {
            return 0;
        }
    }
    plVar3 = *(longlong **)(param_1 + 0x16e8);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x380))(plVar3,1,*(undefined8 *)(param_1 + 0x18b0));
    }
    return uVar6;
}



void FUN_140479200(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined8 *)(param_1 + 0x18d8) = 0;
    *(undefined8 *)(param_1 + 0x18e0) = 0;
    *(undefined8 *)(param_1 + 0x18e8) = 0;
    *(undefined8 *)(param_1 + 0x18f0) = 0;
    *(undefined8 *)(param_1 + 0x18f8) = 0;
    if (*(longlong **)(param_1 + 0x18b0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x18b0) + 0x3a8))();
        if (*(longlong **)(param_1 + 0x18b0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x18b0) + 8))();
            *(undefined8 *)(param_1 + 0x18b0) = 0;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitActivationTypeChanged",&DAT_1409edc54
                ,*(undefined4 *)(param_1 + 8));
        return;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x0001404796c3)

void FUN_140479560(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    int *piVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    uint uVar9;
    longlong *plVar10;
    longlong local_res8;
    longlong local_18;
    longlong local_10;

    FUN_14046c4d0();
    lVar1 = DAT_140c65898;
    param_1[0x321] = (longlong)(param_1 + 0x6af);
    lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x7d90) + 0x28);
    lVar8 = lVar6;
    lVar3 = *(longlong *)(lVar6 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_1 + 1)) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            lVar8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((lVar8 == lVar6) || (local_res8 = lVar8, *(uint *)(param_1 + 1) < *(uint *)(lVar8 + 0x20))) {
        local_res8 = lVar6;
    }
    if (((((local_res8 != lVar6) && (local_res8 != -0x28)) && (*(int *)(local_res8 + 0x6c) != 0)) &&
         ((*(int *)(local_res8 + 0x34) != 2 && (*(int *)(local_res8 + 0x70) == 0)))) &&
        ((lVar8 = *(longlong *)(local_res8 + 0x58), lVar8 == 0 || ((*(byte *)(lVar8 + 8) & 2) == 0))))
    {
        *(undefined *)((longlong)param_1 + 0x2b14) = 1;
    }
    lVar6 = *(longlong *)(lVar1 + 0x78);
    if (lVar6 == 0) {
        return;
    }
    if (DAT_140c65970 == 0) {
        return;
    }
    if (*(int *)(param_1 + 0x10) == 0x14) {
        iVar2 = FUN_14045a950(lVar6,*(undefined4 *)(param_1 + 1));
        if (iVar2 != 2) {
            return;
        }
        if (*(int *)(param_1 + 0x4a) == 0) {
            return;
        }
        if ((*(byte *)(DAT_140c65898 + 0x1b6c) & 4) == 0) {
            return;
        }
        if (*(int *)(DAT_140c65898 + 0x1b84) != 0) {
            return;
        }
        *(undefined *)((longlong)param_1 + 0x2ebc) = 1;
        return;
    }
    if (param_1[3] == 0) {
        return;
    }
    if (*(int *)(DAT_140c65970 + 8) == 2) {
        FUN_140570c90(lVar8,param_1);
    }
    plVar7 = (longlong *)0x0;
    iVar2 = FUN_1405a92c0(param_1);
    if (iVar2 != 0) {
        *(undefined *)((longlong)param_1 + 0x3414) = 1;
    }
    if (((*(uint *)(param_1 + 5) >> 0x14 & 1) != 0) || ((*(uint *)(param_1 + 5) >> 0x15 & 1) != 0)) {
        *(undefined *)((longlong)param_1 + 0x3534) = 1;
    }
    iVar2 = FUN_140482450(param_1);
    if (iVar2 != 0) {
        return;
    }
    if ((*(uint *)(param_1 + 5) & 0x4000) != 0) {
        return;
    }
    if (*(int *)(param_1 + 800) == 1) {
        return;
    }
    if (*(int *)(DAT_140c65970 + 8) == 1) {
        lVar3 = FUN_140480840();
        if (lVar3 == 0) {
            if (*(longlong **)(lVar6 + 0x110) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 0x110) + 0x18))();
            }
            lVar3 = FUN_1404808f0();
            if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
                piVar5 = (int *)(*(longlong *)(lVar3 + 8) + 0x24);
                plVar4 = plVar7;
                do {
                    if (*(int *)param_1[3] == *piVar5) {
                        plVar10 = (longlong *)
                                          (ulonglong)*(uint *)(*(longlong *)(lVar3 + 8) + 0x30 + (longlong)plVar4 * 4);
                        break;
                    }
                    uVar9 = (int)plVar4 + 1;
                    plVar4 = (longlong *)(ulonglong)uVar9;
                    piVar5 = piVar5 + 1;
                    plVar10 = plVar7;
                } while (uVar9 < 3);
                iVar2 = FUN_140480790(lVar3,*(undefined8 *)(DAT_140c65898 + 0x78),plVar10);
                if (iVar2 == 0) goto LAB_1404797e3;
            }
        }
        else if ((*(int *)(lVar3 + 0x10) == 0) || (iVar2 = FUN_140480700(lVar3), iVar2 != 0)) {
            LAB_1404797e3:
            *(undefined *)((longlong)param_1 + 0x20f4) = 1;
        }
        lVar3 = FUN_1403d3950();
        if ((lVar3 != 0) &&
            (*(undefined *)((longlong)param_1 + 0x2184) = 1,
                    (*(byte *)(*(longlong *)(lVar3 + 8) + 0x24) & 1) != 0)) {
            *(undefined *)((longlong)param_1 + 0x218c) = 0;
        }
    }
    if (*(int *)(DAT_140c65970 + 8) == 0) {
        if (*(int *)(param_1[3] + 0x148) == 0) {
            iVar2 = FUN_140570990();
            if (iVar2 != 0) goto LAB_14047985c;
        }
        else {
            iVar2 = FUN_140570810();
            if (iVar2 == 1) {
                LAB_14047985c:
                *(undefined *)((longlong)param_1 + 0x2214) = 1;
            }
            else if (iVar2 == 4) {
                *(undefined *)((longlong)param_1 + 0x225c) = 1;
            }
        }
    }
    if (*(int *)(DAT_140c65970 + 8) == 3) {
        if ((*(byte *)((longlong)param_1 + 0x2c) & 0x20) == 0) {
            iVar2 = FUN_140722830();
            if (iVar2 == 2) {
                *(undefined *)((longlong)param_1 + 0x19a4) = 1;
            }
            iVar2 = FUN_140571850();
            if (iVar2 != 0x65) {
                *(undefined *)((longlong)param_1 + (longlong)iVar2 * 0x48 + 0x1914) = 1;
            }
        }
        else {
            *(undefined *)((longlong)param_1 + 0x22a4) = 1;
        }
    }
    if ((((*(int *)(DAT_140c65970 + 8) == 2) && (*(int *)(param_1[3] + 0x78) != 0)) &&
         (plVar4 = (longlong *)FUN_1404804a0(), plVar4 != (longlong *)0x0)) &&
        (iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar2 == 0)) {
        *(undefined *)((longlong)param_1 + 0x213c) = 1;
    }
    if ((*(int *)(param_1 + 0x10) == 0x24) &&
        (((*(int *)(param_1 + 0x26) != 0 ||
           ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
             (*(int *)((longlong)param_1 + 0x124) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))))
          ) || (iVar2 = FUN_14045bd30(param_1), iVar2 == 0)))) {
        *(undefined *)((longlong)param_1 + 0x195c) = 1;
    }
    iVar2 = FUN_14046c6a0(param_1);
    if (iVar2 != 0) {
        return;
    }
    FUN_1405a8d40();
    iVar2 = FUN_1405fc800(*DAT_140c65b80,param_1);
    if (iVar2 != 0) {
        *(undefined *)((longlong)param_1 + 0x237c) = 1;
    }
    iVar2 = FUN_1405fc900(*DAT_140c65b80,param_1);
    if (iVar2 != 0) {
        *(undefined *)((longlong)param_1 + 0x240c) = 1;
    }
    FUN_1405f5860();
    if ((*(int *)(param_1[3] + 0x130) != 0) && (*(longlong *)(DAT_140c65898 + 0x7188) != 0)) {
        *(undefined *)((longlong)param_1 + 0x1be4) = 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 0x10) != 0) {
        *(undefined *)((longlong)param_1 + 0x24e4) = 1;
    }
    if ((*(int *)(param_1[3] + 0x40) != 0) && (9 < *(uint *)(lVar6 + 0x38))) {
        *(undefined *)((longlong)param_1 + 0x252c) = 1;
    }
    if (((*(int *)(param_1[3] + 0x44) != 0) && (iVar2 = FUN_1403a0e80(), iVar2 != 0)) &&
        (9 < *(uint *)(lVar6 + 0x38))) {
        *(undefined *)((longlong)param_1 + 0x2574) = 1;
    }
    if ((*(int *)((longlong)param_1 + 0x36d4) != 0) &&
        ((*(int *)(param_1 + 0x6da) == 0 ||
          (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar2 != 0)))) {
        *(undefined *)((longlong)param_1 + 0x26dc) = 1;
    }
    if ((param_1[3] != 0) && (*(int *)(param_1[3] + 0x74) != 0)) {
        iVar2 = FUN_14047aaa0(param_1);
        if (iVar2 == 0) {
            iVar2 = FUN_14047ab20(param_1);
            if (iVar2 == 0) {
                iVar2 = FUN_1404ad9b0(DAT_140c659d0);
                if ((iVar2 == 0) && (iVar2 = FUN_1404adb70(DAT_140c659d0), iVar2 != 0)) {
                    *(undefined *)((longlong)param_1 + 0x264c) = 1;
                }
                else {
                    iVar2 = FUN_1404adb70(DAT_140c659d0);
                    if (iVar2 != 0) {
                        *(undefined *)((longlong)param_1 + 0x2694) = 1;
                    }
                }
            }
            else {
                *(undefined *)((longlong)param_1 + 0x2604) = 1;
            }
        }
        else {
            *(undefined *)((longlong)param_1 + 0x25bc) = 1;
        }
    }
    if ((*(int *)(param_1[3] + 0x70) != 0) &&
        (plVar4 = (longlong *)FUN_1403ac530(), plVar4 != (longlong *)0x0)) {
        if (*(int *)(plVar4 + 5) == 0) {
            if ((*(byte *)(*plVar4 + 4) & 1) == 0) {
                *(undefined *)((longlong)param_1 + 0x2454) = 1;
            }
            else if (*(int *)(DAT_140c65970 + 8) == 1) {
                *(undefined *)((longlong)param_1 + 0x2454) = 1;
            }
        }
        else if (((*(int *)(plVar4 + 5) - 1U & 0xfffffffd) == 0) &&
                 (((*(byte *)(*plVar4 + 4) & 1) == 0 || (*(int *)(DAT_140c65970 + 8) == 1)))) {
            *(undefined *)((longlong)param_1 + 0x249c) = 1;
        }
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 2) != 0) {
        *(undefined *)((longlong)param_1 + 0x1a7c) = 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 4) != 0) {
        *(undefined *)((longlong)param_1 + 0x1ac4) = 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 8) != 0) {
        *(undefined *)((longlong)param_1 + 0x1b0c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x2000) != 0) {
        *(undefined *)((longlong)param_1 + 0x1b54) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x4000) != 0) {
        *(undefined *)((longlong)param_1 + 0x1b9c) = 1;
    }
    iVar2 = FUN_140480580((undefined4 *)param_1[3],*(undefined4 *)param_1[3]);
    if (iVar2 != 0) {
        *(undefined *)((longlong)param_1 + 0x1fd4) = 1;
    }
    iVar2 = FUN_140722930();
    if (iVar2 != 0x65) {
        *(undefined *)((longlong)param_1 + (longlong)iVar2 * 0x48 + 0x1914) = 1;
    }
    lVar6 = DAT_140c65970;
    if (*(int *)(DAT_140c65970 + 8) == 1) {
        if ((*(byte *)((longlong)param_1 + 0x2c) & 0x40) != 0) {
            *(undefined *)((longlong)param_1 + 0x2064) = 1;
            *(undefined *)((longlong)param_1 + 0x206c) = 1;
            *(undefined *)((longlong)param_1 + 0x2067) = 1;
        }
        if ((*(uint *)((longlong)param_1 + 0x2c) & 0x10000) != 0) {
            *(undefined *)((longlong)param_1 + 0x2de4) = 1;
        }
    }
    if ((((*(int *)(lVar6 + 8) != 0) || (*(int *)(param_1[3] + 0x148) != 0)) || (param_1[3] == 0)) ||
        (*(longlong *)(lVar6 + 0x58) == 0)) goto LAB_140479c50;
    plVar4 = (longlong *)FUN_140573a30(lVar6,param_1);
    if (plVar4 == (longlong *)0x0) {
        LAB_140479c25:
        plVar4 = (longlong *)FUN_140573ba0(lVar6,param_1);
        if (plVar4 == (longlong *)0x0) goto LAB_140479c50;
        (**(code **)(*plVar4 + 8))(plVar4);
        iVar2 = FUN_1404a1950();
        if (iVar2 == 0) goto LAB_140479c50;
    }
    else {
        (**(code **)(*plVar4 + 8))(plVar4);
        iVar2 = FUN_1404a1950();
        if (iVar2 == 0) goto LAB_140479c25;
    }
    *(undefined *)((longlong)param_1 + 0x3384) = 1;
    LAB_140479c50:
    if (*(int *)(param_1[3] + 4) == 8) {
        *(undefined *)((longlong)param_1 + 0x2064) = 1;
    }
    if (*(int *)(param_1 + 0x10) == 1) {
        *(undefined *)((longlong)param_1 + 0x2b14) = 1;
    }
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          ((iVar2 = FUN_14039e0e0(), iVar2 == 0 || (iVar2 = FUN_14039e0a0(), iVar2 != 0)))) &&
         (iVar2 = (**(code **)(*param_1 + 0x20))(), iVar2 != 0)) &&
        ((iVar2 = FUN_14047b5c0(), iVar2 != 0 && (*(int *)(param_1 + 0x10) != 7)))) {
        if ((longlong *)param_1[0x33] != (longlong *)0x0) {
            piVar5 = (int *)(param_1[0x32] + 8);
            plVar4 = plVar7;
            do {
                if (*piVar5 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8)) goto LAB_140479d0e;
                plVar4 = (longlong *)((longlong)plVar4 + 1);
                piVar5 = piVar5 + 3;
            } while (plVar4 < (longlong *)param_1[0x33]);
        }
        *(undefined *)((longlong)param_1 + 0x20ac) = 1;
        *(bool *)(param_1 + 0x416) = *(int *)(param_1 + 800) == 2;
    }
    LAB_140479d0e:
    if (((*(int *)(param_1[3] + 0x14c) != 0) && (lVar6 = FUN_1402092a0(), lVar6 != 0)) &&
        ((*(int *)(lVar6 + 0x14) - 1U & 0xfffffffd) == 0)) {
        *(undefined *)((longlong)param_1 + 0x2334) = 1;
    }
    iVar2 = FUN_14046c580(param_1);
    if (((iVar2 != 0) && ((*(uint *)((longlong)param_1 + 0x2c) & 0x800) == 0)) &&
        ((*(int *)(param_1[3] + 0x7c) == 0 && (*(int *)(param_1[3] + 0x80) == 0)))) {
        *(undefined *)((longlong)param_1 + 0x2724) = 1;
    }
    if (*(int *)(param_1[3] + 0xa0) != 0) {
        FUN_1405a8b30();
    }
    if (((*(int *)(param_1[3] + 0x9c) != 0) &&
         (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar2 != 0)) &&
        ((*(uint *)((longlong)param_1 + 0x2c) & 0x800) == 0)) {
        *(undefined *)((longlong)param_1 + 0x240c) = 1;
    }
    plVar4 = plVar7;
    if (*(int *)(param_1[3] + 0x7c) != 0) {
        plVar4 = (longlong *)FUN_1404a7eb0(DAT_140c659b0);
    }
    if (*(int *)(param_1[3] + 0x80) != 0) {
        plVar7 = (longlong *)FUN_1404a7f00(DAT_140c659b0);
    }
    if ((((plVar4 != (longlong *)0x0) || (plVar7 != (longlong *)0x0)) &&
         (iVar2 = FUN_1404a8180(), lVar6 = DAT_140c65970, iVar2 == 0)) &&
        (((*(undefined *)((longlong)param_1 + 0x23c4) = 1, *(int *)(lVar6 + 8) == 2 &&
                                                           (plVar4 != (longlong *)0x0)) && (*(int *)(*plVar4 + 4) == 0)))) {
        *(undefined *)((longlong)param_1 + 0x23cc) = 1;
    }
    if ((*(int *)(param_1[3] + 0x6c) != 0) && (iVar2 = FUN_14045b830(param_1), iVar2 != 0)) {
        *(undefined *)((longlong)param_1 + 0x1a34) = 1;
    }
    if ((*(uint *)(param_1 + 5) & 0x20000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2b5c) = 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 1) != 0) {
        *(undefined *)((longlong)param_1 + 0x2ba4) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x10000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2bec) = 1;
    }
    if (*(int *)(param_1[3] + 4) == 0xc) {
        *(undefined *)((longlong)param_1 + 0x2c34) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x1000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2c7c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x100) != 0) {
        *(undefined *)((longlong)param_1 + 0x2cc4) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x200) != 0) {
        *(undefined *)((longlong)param_1 + 0x2d0c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x8000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2d54) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x80000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2d9c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x400000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2f4c) = 1;
    }
    lVar6 = DAT_140c65898;
    if (((*(uint *)((longlong)param_1 + 0x2c) & 0x20000) != 0) &&
        ((~(*(uint *)(DAT_140c65898 + 0x7f68) >> 1) & 1) != 0)) {
        *(undefined *)((longlong)param_1 + 0x2e2c) = 1;
    }
    if (((*(uint *)((longlong)param_1 + 0x2c) & 0x40000) != 0) &&
        ((~*(uint *)(lVar6 + 0x7f68) & 1) != 0)) {
        *(undefined *)((longlong)param_1 + 0x2e74) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x200000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2f04) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x100000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2f94) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x4000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x30b4) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x8000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x30fc) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x10000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x2bec) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x20000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x3144) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x40000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x318c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x800000) != 0) {
        local_10 = 0;
        local_18 = 0;
        FUN_1403a9da0(lVar6,*(undefined4 *)(param_1 + 0x2fd),&local_18);
        if (local_10 == 0) {
            (**(code **)(*param_1 + 8))(param_1);
        }
        else {
            *(undefined *)((longlong)param_1 + 0x2fdc) = 1;
        }
        if (local_18 != 0) {
            (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
        }
    }
    if ((*(int *)(param_1 + 0x10) == 5) && (*(int *)(param_1[3] + 0xa8) != 0)) {
        *(undefined *)((longlong)param_1 + 0x306c) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x80000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x34ec) = 1;
    }
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x1000000) != 0) {
        *(undefined *)((longlong)param_1 + 0x31d4) = 1;
    }
    return;
}



void FUN_14047a060(longlong param_1)

{
    int iVar1;
    int iVar2;
    char *pcVar3;
    uint uVar4;
    ulonglong uVar5;

    *(longlong *)(param_1 + 0x1908) = param_1 + 0x3578;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        iVar1 = *(int *)(param_1 + 0x250);
        iVar2 = FUN_14045a950();
        uVar5 = 0;
        pcVar3 = (char *)(param_1 + 0x1914);
        do {
            if (*pcVar3 != '\0') {
                if (((iVar1 == 0) || (pcVar3[1] != '\0')) && ((0 < iVar2 || (pcVar3[2] != '\0')))) {
                    *(ulonglong *)(param_1 + 0x1908) = param_1 + (uVar5 * 9 + 0x322) * 8;
                    break;
                }
                *pcVar3 = '\0';
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            pcVar3 = pcVar3 + 0x48;
        } while (uVar4 < 0x66);
        if ((**(int **)(param_1 + 0x1908) != 0x65) &&
            ((*(int *)(param_1 + 0x1e4) != 0 || (*(int *)(param_1 + 0x2ac) != 0)))) {
            *(undefined *)(param_1 + 0x1914) = 1;
            *(longlong *)(param_1 + 0x1908) = param_1 + 0x1910;
        }
    }
    return;
}



void FUN_14047a140(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    float fVar3;

    if ((DAT_140dc3068 & 1) == 0) {
        DAT_140dc3068 = DAT_140dc3068 | 1;
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            DAT_140dc306c = 3000.0;
        }
        else {
            DAT_140dc306c = (float)*(int *)(lVar2 + 4);
        }
    }
    lVar1 = DAT_140c65898;
    fVar3 = DAT_140dc306c * 0.001;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    *(float *)(param_1 + 0x3608) = fVar3;
    lVar2 = *(longlong *)(lVar1 + 0x78);
    if ((lVar2 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar2 + 8))) {
        *(undefined4 *)(lVar1 + 0x6f98) = 1;
    }
    return;
}



void FUN_14047a1f0(longlong param_1)

{
    longlong lVar1;
    undefined2 *puVar2;
    short sVar3;
    int iVar4;
    undefined4 uVar5;
    uint uVar6;
    longlong lVar7;
    short *psVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    int *piVar12;
    ulonglong uVar13;
    uint uVar14;
    undefined4 local_128;
    undefined4 local_124;
    longlong local_120;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 local_110;
    undefined4 uStack268;
    undefined local_108 [8];
    undefined local_100 [184];
    longlong local_48;

    if ((((*(longlong *)(param_1 + 0x18) != 0) &&
          (*(int *)(*(longlong *)(param_1 + 0x18) + 0xd8) != 0)) &&
         (lVar7 = FUN_1404cc070(), lVar7 != 0)) && (iVar4 = FUN_140722ed0(lVar7,param_1), iVar4 != 0))
    {
        psVar8 = (short *)FUN_14034bdd0();
        plVar11 = (longlong *)0x0;
        if (psVar8 != (short *)0x0) {
            FUN_1404dde90(local_108);
            lVar9 = FUN_14018b280(0x60);
            plVar10 = plVar11;
            if (lVar9 != 0) {
                plVar10 = (longlong *)FUN_1404db7e0(lVar9,param_1);
            }
            local_120 = 0;
            local_118 = 0;
            uStack276 = 0;
            local_110 = 0;
            uStack268 = 0;
            do {
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar11 * 2) != 0);
            lVar9 = (longlong)plVar11 * 2 >> 1;
            uVar13 = lVar9 + 1;
            if (uVar13 < 0x7fffffffffffffff) {
                lVar1 = uVar13 * 2;
                local_120 = FUN_14018b280(lVar1,0);
                local_118 = (undefined4)local_120;
                uStack276 = (undefined4)((ulonglong)local_120 >> 0x20);
                lVar1 = local_120 + lVar1;
                local_110 = (undefined4)lVar1;
                uStack268 = (undefined4)((ulonglong)lVar1 >> 0x20);
            }
            lVar1 = local_120;
            lVar9 = lVar9 * 2;
            FUN_1407db590(local_120,&DAT_140b0a7c8,lVar9);
            puVar2 = (undefined2 *)(lVar9 + lVar1);
            plVar11 = (longlong *)0x0;
            local_118 = SUB84(puVar2,0);
            uStack276 = (undefined4)((ulonglong)puVar2 >> 0x20);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            FUN_1400b7480(local_108,plVar10);
            (**(code **)(*plVar10 + 0x48))(plVar10,&local_128);
            if (local_120 != 0) {
                FUN_14018b900(local_120,0);
            }
            lVar9 = FUN_14018b280(0x60);
            plVar10 = plVar11;
            if (lVar9 != 0) {
                plVar10 = (longlong *)FUN_1404db7e0(lVar9,*(undefined8 *)(DAT_140c65898 + 0x78));
            }
            local_120 = 0;
            local_118 = 0;
            uStack276 = 0;
            local_110 = 0;
            uStack268 = 0;
            do {
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            } while (L"target"[(longlong)plVar11] != L'\0');
            lVar9 = (longlong)plVar11 * 2 >> 1;
            uVar13 = lVar9 + 1;
            if (uVar13 < 0x7fffffffffffffff) {
                lVar1 = uVar13 * 2;
                local_120 = FUN_14018b280(lVar1,0);
                local_118 = (undefined4)local_120;
                uStack276 = (undefined4)((ulonglong)local_120 >> 0x20);
                lVar1 = local_120 + lVar1;
                local_110 = (undefined4)lVar1;
                uStack268 = (undefined4)((ulonglong)lVar1 >> 0x20);
            }
            lVar1 = local_120;
            lVar9 = lVar9 * 2;
            FUN_1407db590(local_120,L"target",lVar9);
            puVar2 = (undefined2 *)(lVar9 + lVar1);
            lVar9 = 0;
            local_118 = SUB84(puVar2,0);
            uStack276 = (undefined4)((ulonglong)puVar2 >> 0x20);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            FUN_1400b7480(local_108,plVar10);
            (**(code **)(*plVar10 + 0x48))(plVar10,&local_128);
            if (local_120 != 0) {
                FUN_14018b900(local_120,0);
            }
            sVar3 = *psVar8;
            while (sVar3 != 0) {
                lVar9 = lVar9 + 1;
                sVar3 = psVar8[lVar9];
            }
            FUN_14001c480(local_100,psVar8,psVar8 + lVar9);
            if ((DAT_140dc3070 & 1) == 0) {
                DAT_140dc3070 = DAT_140dc3070 | 1;
                lVar9 = FUN_140200220(500);
                if (lVar9 == 0) {
                    DAT_140dc3074 = 0;
                }
                else {
                    DAT_140dc3074 = *(undefined4 *)(lVar9 + 0x18);
                }
            }
            lVar9 = FUN_1400b7660(local_108);
            FUN_140475ef0(param_1,*(undefined8 *)(lVar9 + 8),1);
            if (local_48 != 0) {
                FUN_14018b900(local_48,0);
            }
            FUN_1400b7390(local_108);
        }
        FUN_140472ed0(param_1,iVar4);
        if ((((*(byte *)(param_1 + 0x1070) & 2) == 0) && (*(int *)(param_1 + 0x2ac) == 0)) &&
            (((*(byte *)(*(longlong *)(lVar7 + 0x48) + 4) & 2) != 0 &&
              ((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x90) & 0x10000) == 0)))) {
            FUN_1405b9210(param_1,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8),5000);
            FUN_140470650(param_1,1,1);
            local_124 = FUN_1401ae6a0(0,0xffff);
            if (*(longlong *)(param_1 + 0x16e8) != 0) {
                uVar5 = FUN_140470540(param_1,0x116);
                piVar12 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),uVar5,local_124);
                if (*piVar12 != 0x96) {
                    iVar4 = *(int *)(param_1 + 0x1428);
                    FUN_140471230(param_1,~piVar12[2] & 1,piVar12[2] & 8);
                    if ((*(int *)(param_1 + 0x1428) == 0x3f) != (iVar4 == 0x3f)) {
                        uVar5 = FUN_140470540(param_1,0x116);
                        piVar12 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                                (*(longlong **)(param_1 + 0x16e8),uVar5,local_124);
                        if (*piVar12 == 0x96) {
                            uVar14 = *(uint *)(param_1 + 0x1428);
                            if (*(longlong *)(param_1 + 0xcc0) == 0) {
                                return;
                            }
                            uVar6 = FUN_140467ed0(param_1);
                            *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xffffffef;
                            *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | ~uVar14 & 0x10;
                            uVar14 = *(uint *)(param_1 + 0x142c);
                            if (((uVar6 & 0xfffffff6) == 0) && (uVar6 != 1)) {
                                uVar14 = 0x3f;
                            }
                            if (*(uint *)(param_1 + 0x1428) == uVar14) {
                                return;
                            }
                            if (uVar14 == 0x3f) {
                                FUN_140195d70(param_1 + 0x1430);
                                FUN_140195d70(param_1 + 0x1478);
                                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))
                                        (*(longlong **)(param_1 + 0xcc0),3,3);
                                *(undefined4 *)(param_1 + 0x14c0) = 1;
                                if (*(longlong *)(param_1 + 0x16e8) != 0) {
                                    FUN_140471ef0(param_1,1,1);
                                    FUN_140471ef0(param_1,1,0);
                                }
                            }
                            else if (*(uint *)(param_1 + 0x1428) == 0x3f) {
                                local_128 = 0;
                                local_118 = 0x40471e50;
                                uStack276 = 1;
                                local_110 = 0;
                                uStack268 = 0;
                                local_120 = param_1;
                                FUN_140195960(param_1 + 0x1430,0x96,&local_128,4);
                                local_118 = 0x40471ea0;
                                uStack276 = 1;
                                local_128 = 0;
                                local_110 = 0;
                                uStack268 = 0;
                                local_120 = param_1;
                                FUN_140195960(param_1 + 0x1478,0x96,&local_128,4);
                                *(undefined4 *)(param_1 + 0x14c0) = 1;
                            }
                            if ((uVar14 & 4) != 0) {
                                FUN_140195d70(param_1 + 0x1398);
                            }
                            if ((uVar14 & 0x10) != 0) {
                                FUN_140195d70(param_1 + 0x13e0);
                            }
                            *(uint *)(param_1 + 0x1428) = uVar14;
                            return;
                        }
                    }
                    uVar13 = (ulonglong)piVar12[4];
                    if (*piVar12 == 0x116) {
                        if (uVar13 < 8) {
                            local_118 = *(undefined4 *)(&DAT_140b670f0 + uVar13 * 4);
                        }
                        else {
                            local_118 = 9;
                        }
                    }
                    else if (uVar13 < 8) {
                        local_118 = *(undefined4 *)(&DAT_140b67110 + uVar13 * 4);
                    }
                    else {
                        local_118 = 0xd;
                    }
                    local_120 = 0x3f800000;
                    uStack276 = 2;
                    local_110 = 0;
                    uStack268 = 0;
                    local_128 = uVar5;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                            (*(longlong **)(param_1 + 0x16e8),5,&local_128);
                    if (*(longlong *)(param_1 + 0x15e8) != 0) {
                        FUN_14071a9f0(*(longlong *)(param_1 + 0x15e8),1);
                    }
                }
            }
        }
    }
    return;
}



int FUN_14047a890(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    iVar1 = *(int *)(param_1 + 0x360c);
    if (iVar1 == 0) {
        if (((*(longlong *)(param_1 + 0x18) != 0) &&
             (*(int *)(*(longlong *)(param_1 + 0x18) + 0xa8) != 0)) && (*(int *)(param_1 + 0x214) == 0))
        {
            lVar2 = FUN_140244b00();
            if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
                lVar3 = FUN_140246480();
                if (lVar3 != 0) {
                    uVar4 = 0;
                    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
                        do {
                            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar4 * 8) + 8) ==
                                *(int *)(lVar3 + 4)) {
                                lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar4 * 8);
                                if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) != 0)) {
                                    return *(int *)(lVar2 + 0xc);
                                }
                                break;
                            }
                            uVar4 = (ulonglong)((int)uVar4 + 1);
                        } while (uVar4 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
                    }
                }
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}



ulonglong FUN_14047a940(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
    longlong *plVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 in_XMM6_Da;
    float fVar7;
    undefined4 in_XMM6_Db;
    undefined4 uVar8;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    plVar1 = *(longlong **)(param_1 + 0xcc0);
    if (plVar1 == (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x18) == 0) {
            return 0x3f800000;
        }
        return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0x68);
    }
    fVar7 = 1.0;
    uVar8 = 0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
        uVar6 = 0;
        if (*(ulonglong *)(param_1 + 0x198) != 0) {
            param_4 = *(int **)(param_1 + 400);
            piVar2 = param_4;
            uVar5 = uVar6;
            do {
                if ((*piVar2 == 0) && (*(char *)(piVar2 + 1) == '\0')) {
                    uVar6 = (ulonglong)(uint)param_4[uVar5 * 3 + 2];
                    break;
                }
                uVar5 = uVar5 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar5 < *(ulonglong *)(param_1 + 0x198));
        }
        lVar3 = FUN_1403d90d0(DAT_140c65898,uVar6,uVar6,param_4,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (lVar3 == 0) {
            if (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0x60) & 0x2000) == 0) ||
                (*(longlong *)(param_1 + 0x198) == 0)) goto LAB_14047aa4c;
            lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 400) + 8));
        }
        else if ((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0x60) & 0x8000) != 0) goto LAB_14047aa4c;
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0xf00) == param_1)) &&
            (lVar4 = FUN_14022d500(*(undefined4 *)(lVar3 + 0xd8)), lVar4 != 0)) {
            if (*(int *)(lVar3 + 0x34) == 0) {
                fVar7 = *(float *)(lVar4 + 0x70);
                uVar8 = 0;
            }
            else {
                fVar7 = *(float *)(lVar4 + 0x74);
                uVar8 = 0;
            }
        }
    }
    LAB_14047aa4c:
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    return CONCAT44(uVar8,fVar7 * *(float *)(lVar3 + 0x18));
}



bool FUN_14047aaa0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    if ((*(longlong *)(param_1 + 0x18) != 0) &&
        (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x74), uVar1 != 0)) {
        lVar2 = *(longlong *)(DAT_140c659d0 + 0x10);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if ((local_res8 != lVar2) && (*(longlong **)(local_res8 + 0x28) != (longlong *)0x0)) {
            return *(int *)(**(longlong **)(local_res8 + 0x28) + 0x10) == 1;
        }
    }
    return false;
}



bool FUN_14047ab20(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    if ((*(longlong *)(param_1 + 0x18) != 0) &&
        (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x74), uVar1 != 0)) {
        lVar2 = *(longlong *)(DAT_140c659d0 + 0x10);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if ((local_res8 != lVar2) && (*(longlong **)(local_res8 + 0x28) != (longlong *)0x0)) {
            return (*(byte *)(**(longlong **)(local_res8 + 0x28) + 0xc) & 4) != 0;
        }
    }
    return false;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14047aba0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong *puVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    float fVar14;
    undefined auStack472 [40];
    ulonglong local_1b0;
    ulonglong local_1a8;
    ulonglong local_1a0;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    longlong local_188;
    undefined8 local_180;
    undefined8 local_178;
    ulonglong local_170;
    ulonglong local_168;
    ulonglong local_160;
    longlong local_158;
    undefined8 local_150;
    undefined8 local_148;
    undefined4 local_138;
    undefined4 local_134;
    undefined4 local_130;
    ulonglong local_128;
    undefined4 local_120;
    undefined4 local_11c;
    undefined4 local_118;
    undefined8 local_108;
    undefined4 local_100;
    ulonglong local_b0;
    ulonglong local_a8;
    ulonglong local_a0;
    longlong local_98;
    undefined8 local_90;
    undefined8 local_88;
    ulonglong local_80;
    undefined8 local_78;
    undefined8 local_70;
    longlong local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    FUN_1403b8ce0(&local_138);
    FUN_1407e4830(&local_138,0,0x100);
    iVar1 = param_2[1];
    if (iVar1 == 0) {
        lVar4 = FUN_1400b5df0(DAT_140c658f0,param_2[2],0);
        if (lVar4 == 0) goto LAB_14047b134;
        uVar13 = *(ulonglong *)(lVar4 + 0x1e8);
        local_120 = *(undefined4 *)(lVar4 + 0x1e0);
        local_118 = *(undefined4 *)(lVar4 + 0x1ac);
        local_128 = uVar13;
        local_1a0 = 0;
        local_198 = 1;
        uStack404 = 0;
        uStack400 = 0;
        uStack396 = 0;
        lVar11 = lVar4 - (longlong)&local_1a0;
        local_188 = 0;
        local_180 = 1;
        local_178 = 0;
        puVar7 = &local_1a0;
        piVar8 = param_2 + 0xd;
        lVar12 = 2;
        do {
            iVar1 = *piVar8;
            if (iVar1 == 0) {
                *puVar7 = *(ulonglong *)(lVar11 + 0x30 + (longlong)puVar7);
                puVar7[1] = *(ulonglong *)(lVar11 + 0x38 + (longlong)puVar7);
                uVar5 = *(ulonglong *)(lVar11 + 0x40 + (longlong)puVar7);
            }
            else {
                iVar9 = 0;
                iVar10 = iVar9;
                if (iVar1 == 3) {
                    iVar10 = piVar8[2];
                }
                if (iVar1 == 1) {
                    iVar9 = piVar8[2];
                }
                if (iVar1 == 2) {
                    uVar6 = piVar8[2];
                }
                else {
                    uVar6 = 0xf;
                }
                local_1b0 = (ulonglong)uVar6;
                *puVar7 = (ulonglong)(uint)piVar8[1];
                puVar7[1] = local_1b0;
                local_1a8 = CONCAT44(iVar10,iVar9);
                uVar5 = local_1a8;
            }
            puVar7[2] = uVar5;
            puVar7 = puVar7 + 3;
            piVar8 = piVar8 + 3;
            lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        local_a8 = CONCAT44(uStack404,local_198);
        uVar5 = CONCAT44(uStack396,uStack400);
        local_68 = *(longlong *)(lVar4 + 0x78);
        local_80 = *(ulonglong *)(lVar4 + 0x60);
        local_90 = local_180;
        local_78 = *(undefined8 *)(lVar4 + 0x68);
        local_70 = *(undefined8 *)(lVar4 + 0x70);
        local_88 = local_178;
        local_60 = *(undefined8 *)(lVar4 + 0x80);
        local_58 = *(undefined8 *)(lVar4 + 0x88);
        local_50 = *(undefined4 *)(lVar4 + 0x1dc);
        local_b0 = local_1a0;
        local_a0 = uVar5;
        local_98 = local_188;
    }
    else if (iVar1 == 4) {
        lVar4 = FUN_1403acd90(DAT_140c65b70,param_2[2],param_1);
        if (lVar4 == 0) goto LAB_14047b134;
        puVar3 = *(ulonglong **)(lVar4 + 8);
        uVar5 = 0;
        local_118 = 1;
        uVar13 = *puVar3;
        local_120 = 0;
        local_170 = 0;
        local_168 = 1;
        local_160 = 0;
        local_158 = 0;
        local_150 = 1;
        local_148 = 0;
        puVar7 = &local_170;
        piVar8 = param_2 + 0xd;
        lVar11 = 2;
        local_128 = uVar13;
        do {
            iVar1 = *piVar8;
            if (iVar1 == 0) {
                local_198 = 1;
                uStack404 = 0;
                uStack400 = 0;
                uStack396 = 0;
                *puVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x70) + 400);
                puVar7[1] = 1;
                local_1a8 = uVar5;
            }
            else {
                iVar9 = 0;
                if (iVar1 == 3) {
                    iVar9 = piVar8[2];
                }
                iVar10 = 0;
                if (iVar1 == 1) {
                    iVar10 = piVar8[2];
                }
                if (iVar1 == 2) {
                    uVar6 = piVar8[2];
                }
                else {
                    uVar6 = 0xf;
                }
                local_1b0 = (ulonglong)uVar6;
                *puVar7 = (ulonglong)(uint)piVar8[1];
                puVar7[1] = local_1b0;
                local_1a8 = CONCAT44(iVar9,iVar10);
            }
            puVar7[2] = local_1a8;
            puVar7 = puVar7 + 3;
            piVar8 = piVar8 + 3;
            lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        local_90 = local_150;
        local_a8 = local_168;
        local_1b0 = 1;
        local_88 = local_148;
        local_60 = 1;
        local_50 = *(undefined4 *)(puVar3 + 2);
        local_a0 = local_160;
        local_1a8 = 0;
        local_78 = 1;
        local_70 = 0;
        local_68 = 0;
        local_58 = 0;
        local_80 = uVar5;
        local_b0 = local_170;
        local_98 = local_158;
    }
    else {
        if ((iVar1 != 5) || (lVar4 = FUN_1401fa4a0(param_2[2]), lVar4 == 0)) goto LAB_14047b134;
        uVar2 = *(ulonglong *)(lVar4 + 0x18);
        uVar5 = 0;
        uVar13 = uVar5;
        if (uVar2 != 0) {
            if (DAT_140c3fe70 < uVar2) {
                uVar13 = 0;
            }
            else {
                uVar13 = DAT_140c3fe68 + uVar2;
            }
        }
        local_a8 = (ulonglong)(uint)param_2[3];
        local_90 = 1;
        local_78 = 1;
        local_198 = 1;
        uStack404 = 0;
        local_60 = 1;
        local_50 = *(undefined4 *)(lVar4 + 0x10);
        local_120 = 0;
        local_118 = 1;
        local_98 = 0;
        local_88 = 0;
        uStack400 = 0;
        uStack396 = 0;
        local_70 = 0;
        local_68 = 0;
        local_58 = 0;
        local_80 = uVar5;
        local_b0 = (ulonglong)(uint)param_2[6];
        local_128 = uVar13;
        local_a0 = 0;
    }
    if (uVar13 != 0) {
        local_134 = param_2[1];
        local_130 = param_2[2];
        local_138 = *param_2;
        local_11c = param_2[4];
        local_4c = param_2[5];
        local_48 = param_2[7];
        local_44 = param_2[8];
        local_108 = *(undefined8 *)(param_2 + 10);
        local_100 = param_2[0xc];
        if ((int)local_a8 == 1) {
            lVar4 = 0;
            fVar14 = (float)local_b0 * *(float *)(param_1 + 0x36dc);
            if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
                lVar4 = -0x8000000000000000;
            }
            local_b0 = (longlong)fVar14 + lVar4;
        }
        if ((int)local_90 == 1) {
            lVar4 = 0;
            fVar14 = (float)local_98 * *(float *)(param_1 + 0x36dc);
            if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
                lVar4 = -0x8000000000000000;
            }
            local_98 = (longlong)fVar14 + lVar4;
        }
        if ((int)local_78 == 1) {
            lVar4 = 0;
            fVar14 = (float)local_80 * *(float *)(param_1 + 0x36e0);
            if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
                lVar4 = -0x8000000000000000;
            }
            local_80 = (longlong)fVar14 + lVar4;
        }
        if ((int)local_60 == 1) {
            lVar4 = 0;
            fVar14 = (float)local_68 * *(float *)(param_1 + 0x36e0);
            if ((9.223372e+18 <= fVar14) && (fVar14 = fVar14 - 9.223372e+18, fVar14 < 9.223372e+18)) {
                lVar4 = -0x8000000000000000;
            }
            local_68 = (longlong)fVar14 + lVar4;
        }
        FUN_1403d3040(param_1 + 14000,&local_138,uVar5);
    }
    LAB_14047b134:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack472);
    return;
}



undefined8 FUN_14047b160(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    int *piVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    ulonglong local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    int local_40;
    undefined4 uStack60;
    int local_38;
    int iStack52;

    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x36b8) == 0) {
        return 0x80004005;
    }
    while (*param_2 != *(int *)(uVar3 * 0x100 + *(longlong *)(param_1 + 14000))) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        if (*(ulonglong *)(param_1 + 0x36b8) <= uVar3) {
            return 0x80004005;
        }
    }
    lVar6 = uVar3 * 0x100 + *(longlong *)(param_1 + 14000);
    if (lVar6 != 0) {
        if ((param_2[4] == 0) && (param_2[1] == 0)) {
            FUN_1403d3150(param_1 + 14000);
            return 0;
        }
        *(int *)(lVar6 + 8) = param_2[2];
        if (*(int *)(lVar6 + 4) != 0) {
            return 0x80004005;
        }
        lVar2 = FUN_1400b5df0(DAT_140c658f0,param_2[2]);
        if (lVar2 != 0) {
            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar2 + 0x1e8);
            local_78 = 0;
            *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar2 + 0x1e0);
            local_70 = 1;
            *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar2 + 0x1ac);
            local_68 = 0;
            local_60 = 0;
            local_58 = 1;
            local_50 = 0;
            lVar8 = lVar2 - (longlong)&local_78;
            puVar4 = &local_78;
            piVar5 = param_2 + 0xd;
            lVar7 = 2;
            do {
                iVar1 = *piVar5;
                if (iVar1 == 0) {
                    *puVar4 = *(ulonglong *)(lVar8 + 0x30 + (longlong)puVar4);
                    puVar4[1] = *(ulonglong *)(lVar8 + 0x38 + (longlong)puVar4);
                    uVar3 = *(ulonglong *)(lVar8 + 0x40 + (longlong)puVar4);
                }
                else {
                    iStack52 = 0;
                    if (iVar1 == 3) {
                        iStack52 = piVar5[2];
                    }
                    local_38 = 0;
                    if (iVar1 == 1) {
                        local_38 = piVar5[2];
                    }
                    if (iVar1 == 2) {
                        local_40 = piVar5[2];
                    }
                    else {
                        local_40 = 0xf;
                    }
                    uStack60 = 0;
                    *puVar4 = (ulonglong)(uint)piVar5[1];
                    puVar4[1] = CONCAT44(uStack60,local_40);
                    uVar3 = CONCAT44(iStack52,local_38);
                }
                puVar4[2] = uVar3;
                puVar4 = puVar4 + 3;
                piVar5 = piVar5 + 3;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            *(ulonglong *)(lVar6 + 0x88) = local_78;
            *(undefined8 *)(lVar6 + 0x90) = local_70;
            *(undefined8 *)(lVar6 + 0x98) = local_68;
            *(undefined8 *)(lVar6 + 0xa0) = local_60;
            *(undefined8 *)(lVar6 + 0xa8) = local_58;
            *(undefined8 *)(lVar6 + 0xb0) = local_50;
            *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(lVar2 + 0x60);
            *(undefined8 *)(lVar6 + 0xc0) = *(undefined8 *)(lVar2 + 0x68);
            *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(lVar2 + 0x70);
            *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(lVar2 + 0x78);
            *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(lVar2 + 0x80);
            *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar2 + 0x88);
            *(undefined4 *)(lVar6 + 0xe8) = *(undefined4 *)(lVar2 + 0x1dc);
            *(int *)(lVar6 + 0xec) = param_2[5];
            if (*(longlong *)(lVar6 + 0x10) != 0) {
                *(int *)(lVar6 + 0x1c) = param_2[4];
                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(param_2 + 10);
                *(int *)(lVar6 + 0x38) = param_2[0xc];
                fVar10 = *(float *)(param_1 + 0x36dc);
                fVar11 = *(float *)(param_1 + 0x36e0);
                if ((int)local_70 == 1) {
                    lVar2 = 0;
                    fVar9 = (float)*(longlong *)(lVar6 + 0x88) * fVar10;
                    if ((9.223372e+18 <= fVar9) && (fVar9 = fVar9 - 9.223372e+18, fVar9 < 9.223372e+18)) {
                        lVar2 = -0x8000000000000000;
                    }
                    *(longlong *)(lVar6 + 0x88) = (longlong)fVar9 + lVar2;
                }
                if (*(int *)(lVar6 + 0xa8) == 1) {
                    lVar2 = 0;
                    fVar10 = (float)*(longlong *)(lVar6 + 0xa0) * fVar10;
                    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
                        lVar2 = -0x8000000000000000;
                    }
                    *(longlong *)(lVar6 + 0xa0) = (longlong)fVar10 + lVar2;
                }
                if (*(int *)(lVar6 + 0xc0) == 1) {
                    lVar2 = 0;
                    fVar10 = (float)*(longlong *)(lVar6 + 0xb8) * fVar11;
                    if ((9.223372e+18 <= fVar10) && (fVar10 = fVar10 - 9.223372e+18, fVar10 < 9.223372e+18)) {
                        lVar2 = -0x8000000000000000;
                    }
                    *(longlong *)(lVar6 + 0xb8) = (longlong)fVar10 + lVar2;
                }
                if (*(int *)(lVar6 + 0xd8) == 1) {
                    lVar2 = 0;
                    fVar11 = (float)*(longlong *)(lVar6 + 0xd0) * fVar11;
                    if ((9.223372e+18 <= fVar11) && (fVar11 = fVar11 - 9.223372e+18, fVar11 < 9.223372e+18)) {
                        lVar2 = -0x8000000000000000;
                    }
                    *(longlong *)(lVar6 + 0xd0) = (longlong)fVar11 + lVar2;
                }
                return 0;
            }
        }
        return 0x80004005;
    }
    return 0x80004005;
}



undefined8 FUN_14047b500(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;

    lVar2 = *(longlong *)(param_1 + 0x36c8);
    uVar3 = *param_2;
    lVar1 = lVar2 + 1;
    lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x36c0),lVar1,8);
    *(undefined8 *)(lVar4 + lVar2 * 8) = uVar3;
    if (*(longlong *)(param_1 + 0x36c0) != lVar4) {
        FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x36c0),*(longlong *)(param_1 + 0x36c8) << 3);
        lVar2 = *(longlong *)(param_1 + 0x36c0);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong *)(param_1 + 0x36c0) = lVar4;
    }
    *(longlong *)(param_1 + 0x36c8) = lVar1;
    return 0;
}



bool FUN_14047b5c0(longlong param_1)

{
    longlong lVar1;
    int *piVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;

    lVar1 = *(longlong *)(param_1 + 0xb8);
    if (lVar1 == 0) {
        return false;
    }
    lVar6 = *(longlong *)(param_1 + 0x198);
    uVar7 = 0;
    uVar3 = 0;
    if (lVar6 != 0) {
        piVar2 = *(int **)(param_1 + 400);
        lVar5 = lVar6;
        uVar3 = uVar7;
        do {
            if (*piVar2 == 0) {
                uVar3 = uVar3 + 1;
            }
            piVar2 = piVar2 + 3;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    if (*(uint *)(lVar1 + 8) <= uVar3) {
        uVar4 = 0;
        uVar3 = uVar4;
        if (lVar6 != 0) {
            piVar2 = *(int **)(param_1 + 400);
            lVar5 = lVar6;
            uVar3 = uVar7;
            do {
                if (*piVar2 == 1) {
                    uVar3 = uVar3 + 1;
                }
                piVar2 = piVar2 + 3;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        if (*(uint *)(lVar1 + 0x14) <= uVar3) {
            if (lVar6 != 0) {
                piVar2 = *(int **)(param_1 + 400);
                uVar4 = uVar7;
                do {
                    if (*piVar2 == 2) {
                        uVar4 = uVar4 + 1;
                    }
                    piVar2 = piVar2 + 3;
                    lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
            }
            return uVar4 < *(uint *)(lVar1 + 0x30);
        }
    }
    return true;
}



void FUN_14047b670(longlong param_1)

{
    int *piVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x198) != 0) {
        piVar1 = *(int **)(param_1 + 400);
        uVar2 = uVar3;
        do {
            if ((*piVar1 == 0) && (*(char *)(piVar1 + 1) == '\0')) {
                uVar3 = (ulonglong)(uint)(*(int **)(param_1 + 400))[uVar2 * 3 + 2];
                break;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 3;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x198));
    }
    FUN_1403d90d0(DAT_140c65898,uVar3);
    return;
}



longlong * FUN_14047b6d0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (iVar1 != 0) {
            return plVar2;
        }
    }
    return (longlong *)0x0;
}



undefined8 FUN_14047b820(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x198) != 0) {
        piVar3 = *(int **)(param_1 + 400);
        do {
            if ((*piVar3 == param_2[1]) && (*(char *)(piVar3 + 1) == *(char *)(param_2 + 2))) {
                if ((*(int **)(param_1 + 400))[uVar4 * 3 + 2] != 0) {
                    return 0;
                }
                break;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < *(ulonglong *)(param_1 + 0x198));
    }
    FUN_140480d00(param_1 + 400,param_2 + 1);
    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    if ((*(longlong *)(lVar2 + 0x78) != 0) &&
        (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(lVar2 + 0x78) + 8))) {
        *(undefined4 *)(lVar2 + 0x6f98) = 1;
    }
    if ((param_2[1] == 0) || ((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0x60) & 0x2000) != 0)) {
        *(undefined4 *)(param_1 + 0xd00) = 1;
    }
    lVar2 = FUN_1403d90d0(lVar2,param_2[3]);
    if (lVar2 != 0) {
        FUN_140470650(lVar2,1,1);
        lVar1 = DAT_140c65898;
        *(undefined4 *)(lVar2 + 0x18a8) = 1;
        if ((*(longlong *)(lVar1 + 0x78) != 0) &&
            (*(int *)(lVar2 + 8) == *(int *)(*(longlong *)(lVar1 + 0x78) + 8))) {
            *(undefined4 *)(lVar1 + 0x6f98) = 1;
        }
        *(undefined4 *)(lVar2 + 0xc0) = *param_2;
        *(undefined4 *)(lVar2 + 0xc4) = param_2[1];
        *(uint *)(lVar2 + 200) = (uint)*(byte *)(param_2 + 2);
        FUN_14039e4d0(lVar1,lVar2);
        if (lVar2 == *(longlong *)(DAT_140c65898 + 0x78)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Mount",&DAT_1409ee6c4,1);
        }
    }
    return 0;
}



undefined8 FUN_14047b9b0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    undefined **local_38;
    int local_30;
    undefined4 local_2c;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_18;

    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x198) != 0) {
        piVar3 = (int *)(*(longlong *)(param_1 + 400) + 8);
        while (*piVar3 != param_2) {
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
            if (*(ulonglong *)(param_1 + 0x198) <= uVar4) {
                return 0;
            }
        }
        if ((*(int *)(*(longlong *)(param_1 + 400) + uVar4 * 0xc) == 0) ||
            ((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0x60) & 0x2000) != 0)) {
            *(undefined4 *)(param_1 + 0xd00) = 1;
        }
        FUN_140480db0();
        lVar2 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if (lVar1 != 0) {
            if (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8)) {
                *(undefined4 *)(lVar2 + 0x6f98) = 1;
            }
            if ((lVar1 != 0) && (param_2 == *(int *)(lVar1 + 8))) {
                local_2c = 0x19;
                local_24 = 0;
                local_38 = &PTR_FUN_140b6f4f0;
                local_20 = 8;
                local_18 = 1;
                local_30 = param_2;
                local_28 = param_2;
                FUN_14060b2b0(&local_38);
            }
        }
    }
    return 0;
}



undefined8 FUN_14047bac0(longlong param_1)

{
    longlong lVar1;

    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar1 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 3;
    FUN_14039e4d0(lVar1,param_1);
    if (param_1 == *(longlong *)(DAT_140c65898 + 0x78)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Mount",&DAT_1409ee6c4,0);
    }
    return 0;
}



undefined8 FUN_14047bb50(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if ((iVar1 != 0) && (*(int *)(param_1 + 0xc4) < 3)) {
            return 1;
        }
    }
    return 0;
}



undefined4 FUN_14047bba0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    ulonglong uVar5;

    plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar4 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
        if (((iVar3 != 0) && (plVar4[3] != 0)) && (lVar2 = plVar4[0x17], lVar2 != 0)) {
            iVar3 = *(int *)(param_1 + 0xc4);
            uVar1 = *(uint *)(param_1 + 200);
            uVar5 = (ulonglong)uVar1;
            if (iVar3 == 0) {
                if (uVar1 < *(uint *)(lVar2 + 8)) {
                    return *(undefined4 *)(lVar2 + 0xc + uVar5 * 4);
                }
            }
            else if (iVar3 == 1) {
                if (uVar1 < *(uint *)(lVar2 + 0x14)) {
                    return *(undefined4 *)(lVar2 + 0x18 + uVar5 * 4);
                }
            }
            else if ((iVar3 == 2) && (uVar1 < *(uint *)(lVar2 + 0x30))) {
                return *(undefined4 *)(lVar2 + 0x34 + uVar5 * 4);
            }
            return 0;
        }
    }
    return 7;
}



undefined4 FUN_14047bc60(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (((((plVar3 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar2 != 0))
          && ((iVar2 = (**(code **)(*plVar3 + 0x20))(), iVar2 == 0 ||
                                                        ((plVar3[0x17] == 0 || (*(int *)(plVar3[0x17] + 4) != 6)))))) && (plVar3[3] != 0)) &&
        (plVar3[0x17] != 0)) {
        uVar1 = *(uint *)(param_1 + 200);
        if (*(int *)(plVar3 + 0x10) == 7) {
            if ((*(int *)(param_1 + 0xc4) == 0) && (uVar1 == 0)) {
                return 0x42;
            }
        }
        else if (*(int *)(param_1 + 0xc4) == 0) {
            if (uVar1 == 0) {
                plVar3 = (longlong *)plVar3[0x2dd];
                if (plVar3 == (longlong *)0x0) {
                    return 0x42;
                }
                iVar2 = (**(code **)(*plVar3 + 0x350))(plVar3,0x13);
                if (iVar2 == 0) {
                    return 0x42;
                }
                return 0x13;
            }
        }
        else if ((*(int *)(param_1 + 0xc4) == 1) && (uVar1 < 6)) {
            return *(undefined4 *)(&DAT_140b670d8 + (ulonglong)uVar1 * 4);
        }
    }
    return 0;
}



undefined8 FUN_14047bd80(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x80) == 7)) {
        return 1;
    }
    return 0;
}



undefined8 FUN_14047bdc0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x80) == 9)) {
        return 1;
    }
    return 0;
}



undefined8 FUN_14047be00(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (iVar1 != 0) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14047be40(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (((iVar1 != 0) && (plVar2[0x17] != 0)) && (*(int *)(plVar2[0x17] + 4) == 4)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14047bea0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (((iVar1 != 0) && (plVar2[0x17] != 0)) && (*(int *)(plVar2[0x17] + 4) == 9)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14047bf00(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (((iVar1 != 0) && (plVar2[0x17] != 0)) && (*(int *)(plVar2[0x17] + 4) == 6)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14047bf60(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (((iVar2 != 0) && (lVar1 = plVar3[0x17], lVar1 != 0)) &&
            ((((*(int *)(lVar1 + 4) - 4U & 0xfffffffc) == 0 && (*(int *)(lVar1 + 4) != 5)) ||
              ((*(uint *)(lVar1 + 0x60) & 0x80000) != 0)))) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14047bfd0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (param_1 == *(longlong *)(DAT_140c65898 + 0x78)) {
        plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if ((iVar1 != 0) && (*(int *)(plVar2 + 0x10) != 9)) {
                iVar1 = FUN_14047c120(plVar2);
                if ((iVar1 == 0) &&
                    (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == *(int *)(param_1 + 0xc0))) {
                    return 1;
                }
            }
        }
    }
    return 0;
}



ulonglong FUN_14047c060(longlong *param_1)

{
    ulonglong uVar1;

    uVar1 = (**(code **)(*param_1 + 0x20))();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    uVar1 = 0;
    if (param_1[0x17] != 0) {
        uVar1 = (ulonglong)(*(int *)(param_1[0x17] + 4) == 4);
    }
    return uVar1;
}



ulonglong FUN_14047c0a0(longlong *param_1)

{
    ulonglong uVar1;

    uVar1 = (**(code **)(*param_1 + 0x20))();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    uVar1 = 0;
    if (param_1[0x17] != 0) {
        uVar1 = (ulonglong)(*(int *)(param_1[0x17] + 4) == 9);
    }
    return uVar1;
}



ulonglong FUN_14047c0e0(longlong *param_1)

{
    ulonglong uVar1;

    uVar1 = (**(code **)(*param_1 + 0x20))();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    uVar1 = 0;
    if (param_1[0x17] != 0) {
        uVar1 = (ulonglong)(*(int *)(param_1[0x17] + 4) == 6);
    }
    return uVar1;
}



ulonglong FUN_14047c120(longlong *param_1)

{
    ulonglong uVar1;

    uVar1 = (**(code **)(*param_1 + 0x20))();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    uVar1 = 0;
    if (param_1[0x17] != 0) {
        uVar1 = (ulonglong)(*(int *)(param_1[0x17] + 4) == 7);
    }
    return uVar1;
}



uint FUN_14047c160(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if ((iVar1 != 0) && (param_1[0x17] != 0)) {
        return *(uint *)(param_1[0x17] + 0x60) & 0x800;
    }
    return 0;
}



void FUN_14047c1a0(longlong param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;
    int local_res10 [6];

    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x2c0) != 0) {
        piVar1 = *(int **)(param_1 + 0x2b8);
        do {
            if (*piVar1 == param_2) {
                return;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x2c0));
    }
    local_res10[0] = param_2;
    FUN_140003460((int **)(param_1 + 0x2b8),local_res10);
    return;
}



undefined8 FUN_14047c1e0(longlong param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x2c0) != 0) {
        piVar1 = *(int **)(param_1 + 0x2b8);
        do {
            if (*piVar1 == param_2) {
                return 1;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < *(ulonglong *)(param_1 + 0x2c0));
    }
    return 0;
}



void FUN_14047c210(longlong param_1,int param_2)

{
    int iVar1;
    undefined8 local_res18 [2];
    undefined **local_48;
    longlong local_40;
    LPVOID local_38;
    undefined **local_28;
    longlong local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        *(undefined8 *)(param_1 + 0xd08) = 0;
    }
    else {
        local_40 = FUN_1401f8b20(param_2);
        *(longlong *)(param_1 + 0xd08) = local_40;
        if (local_40 == 0) {
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res18[0] = 0x141e026d0;
            local_20 = local_40;
            local_18 = local_38;
            iVar1 = FUN_1401971e0(&DAT_140c8acc4,5,local_res18,param_2,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar1 != 0) {
                // WARNING: Could not recover jumptable at 0x00014047c2f3. Too many branches
                // WARNING: Treating indirect jump as call
                DebugBreak();
                return;
            }
        }
    }
    return;
}



void FUN_14047c320(longlong param_1,int param_2)

{
    int iVar1;
    undefined8 local_res18 [2];
    undefined **local_48;
    longlong local_40;
    LPVOID local_38;
    undefined **local_28;
    longlong local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        *(undefined8 *)(param_1 + 0xd10) = 0;
    }
    else {
        local_40 = FUN_1401f93a0(param_2);
        *(longlong *)(param_1 + 0xd10) = local_40;
        if (local_40 == 0) {
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_res18[0] = 0x141e028d8;
            local_20 = local_40;
            local_18 = local_38;
            iVar1 = FUN_1401971e0(&DAT_140c8acc8,5,local_res18,param_2,&local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar1 != 0) {
                // WARNING: Could not recover jumptable at 0x00014047c403. Too many branches
                // WARNING: Treating indirect jump as call
                DebugBreak();
                return;
            }
        }
    }
    return;
}



undefined8 FUN_14047c430(longlong param_1)

{
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_1)) {
        return DAT_140c65970;
    }
    return 0;
}



undefined4 FUN_14047c450(longlong param_1)

{
    longlong *plVar1;

    if (((DAT_140c65898 != 0) && (DAT_140c65970 != (longlong *)0x0)) &&
        (*(longlong *)(DAT_140c65898 + 0x78) == param_1)) {
        (**(code **)(*DAT_140c65970 + 0x18))();
        plVar1 = (longlong *)FUN_140491d60();
        if (plVar1 != (longlong *)0x0) {
            return *(undefined4 *)(*plVar1 + 8);
        }
    }
    return 1;
}



void FUN_14047c4b0(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    short sVar2;
    undefined4 uVar3;
    short *psVar4;
    undefined4 *puVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined2 *puVar10;
    uint uVar11;
    undefined4 local_58 [2];
    longlong local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined2 *local_38;

    FUN_14013cf80(param_1 + 0x3708,*(undefined8 *)(param_1 + 0x3710),*(undefined8 *)(param_1 + 0x3718)
    );
    uVar9 = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
        do {
            lVar8 = 0;
            psVar4 = *(short **)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
            local_50 = 0;
            local_40 = (undefined2 *)0x0;
            sVar2 = *psVar4;
            while (sVar2 != 0) {
                lVar8 = lVar8 + 1;
                sVar2 = psVar4[lVar8];
            }
            lVar8 = lVar8 * 2 >> 1;
            uVar1 = lVar8 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar6 = uVar1 * 2;
                local_50 = FUN_14018b280(lVar6,0);
                local_40 = (undefined2 *)(lVar6 + local_50);
            }
            lVar6 = local_50;
            lVar8 = lVar8 * 2;
            FUN_1407db590(local_50,psVar4,lVar8);
            local_48 = (undefined2 *)(lVar8 + lVar6);
            if (local_48 != (undefined2 *)0x0) {
                *local_48 = 0;
            }
            lVar8 = *(longlong *)(param_1 + 0x3718);
            if (lVar8 == *(longlong *)(param_1 + 0x3720)) {
                FUN_1400f8cf0(param_1 + 0x3708,lVar8,local_58);
            }
            else {
                if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 8) = 0;
                    *(undefined8 *)(lVar8 + 0x10) = 0;
                    *(undefined8 *)(lVar8 + 0x18) = 0;
                    FUN_14001c1b0();
                }
                *(longlong *)(param_1 + 0x3718) = *(longlong *)(param_1 + 0x3718) + 0x20;
            }
            if (lVar6 != 0) {
                FUN_14018b900();
            }
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_2 + 0xc));
    }
    uVar9 = 0;
    iVar7 = -1;
    if (*(int *)(param_2 + 8) != -1) {
        iVar7 = DAT_140c636a8 + *(int *)(param_2 + 8);
    }
    *(int *)(param_1 + 0x3704) = iVar7;
    *(undefined4 *)(param_1 + 0x3728) = *(undefined4 *)(param_2 + 4);
    FUN_1404803f0(param_1 + 0x3730,*(undefined8 *)(param_1 + 0x3738),*(undefined8 *)(param_1 + 0x3740)
    );
    if (*(int *)(param_2 + 0x18) != 0) {
        do {
            psVar4 = *(short **)(*(longlong *)(param_2 + 0x20) + uVar9 * 0x10);
            uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 8 + uVar9 * 0x10);
            local_48 = (undefined2 *)FUN_14018b280(0x10);
            local_38 = local_48 + 8;
            if (local_48 != (undefined2 *)0x0) {
                *local_48 = 0;
            }
            local_58[0] = uVar3;
            local_40 = local_48;
            if (psVar4 != (short *)0x0) {
                sVar2 = *psVar4;
                lVar8 = 0;
                while (sVar2 != 0) {
                    lVar8 = lVar8 + 1;
                    sVar2 = psVar4[lVar8];
                }
                FUN_14001c480(&local_50,psVar4,psVar4 + lVar8);
            }
            puVar10 = local_48;
            puVar5 = *(undefined4 **)(param_1 + 0x3740);
            if (puVar5 == *(undefined4 **)(param_1 + 0x3748)) {
                FUN_140481240(param_1 + 0x3730,puVar5,local_58);
                puVar10 = local_48;
            }
            else {
                if (puVar5 != (undefined4 *)0x0) {
                    *puVar5 = local_58[0];
                    *(undefined8 *)(puVar5 + 4) = 0;
                    *(undefined8 *)(puVar5 + 6) = 0;
                    *(undefined8 *)(puVar5 + 8) = 0;
                    FUN_14001c1b0(puVar5 + 2,local_48,local_40);
                }
                *(longlong *)(param_1 + 0x3740) = *(longlong *)(param_1 + 0x3740) + 0x28;
            }
            if (puVar10 != (undefined2 *)0x0) {
                FUN_14018b900();
            }
            uVar11 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)(param_2 + 0x18));
    }
    return;
}



void FUN_14047c750(longlong param_1,int param_2)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    ulonglong uVar7;
    bool bVar8;
    undefined8 uVar9;
    undefined4 uVar10;
    ulonglong in_stack_ffffffffffffffa0;
    undefined8 local_58;
    undefined8 local_50;
    longlong local_48;
    ulonglong local_40;

    if (((((*(longlong *)(param_1 + 0xf8) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x150), lVar4 != 0)) && (param_2 < 7)
         ) && ((iVar5 = *(int *)(lVar4 + 0x10), iVar5 == 0 ||
                                                (iVar5 = (**(code **)(*DAT_140c659a0 + 0x18))
                                                        (DAT_140c659a0,0,iVar5,0,0,
                                                         in_stack_ffffffffffffffa0 & 0xffffffff00000000), iVar5 != 0)))) &&
        (((*(int *)(param_1 + 0x250) == 0 && (*(int *)(param_1 + 0x254) == 0)) || (param_2 == 1)))) {
        uVar3 = **(undefined4 **)(*(longlong *)(param_1 + 0xf8) + 0x150);
        puVar1 = (undefined4 *)(DAT_140c65918 + 0x48);
        puVar2 = (undefined8 *)(DAT_140c65918 + 0x40);
        uVar10 = *puVar1;
        uVar9 = *puVar2;
        if (param_2 == 1) {
            FUN_140482a00(&local_58,uVar3,0,1,uVar9,uVar10);
            uVar7 = 0;
            if (local_40 != 0) {
                plVar6 = (longlong *)(local_48 + 0x20);
                do {
                    if (*(int *)((longlong)plVar6 + -0x14) != 0) break;
                    if (*plVar6 != 0) goto LAB_14047c8c4;
                    uVar7 = uVar7 + 1;
                    plVar6 = plVar6 + 6;
                } while (uVar7 < local_40);
            }
            iVar5 = 1;
            uVar10 = *puVar1;
            bVar8 = true;
            uVar9 = *puVar2;
        }
        else {
            bVar8 = *(int *)(param_1 + 0x2ac) != 0;
            iVar5 = param_2;
        }
        FUN_140482a00(&local_58,uVar3,bVar8,iVar5,uVar9,uVar10);
        LAB_14047c8c4:
        uVar7 = 0;
        if (local_40 != 0) {
            plVar6 = (longlong *)(local_48 + 0x20);
            do {
                if (*(int *)((longlong)plVar6 + -0x14) != 0) break;
                if (*plVar6 != 0) goto LAB_14047c9f2;
                uVar7 = uVar7 + 1;
                plVar6 = plVar6 + 6;
            } while (uVar7 < local_40);
        }
        FUN_140482a00(&local_58,uVar3,2,param_2,*puVar2,*puVar1);
        uVar7 = 0;
        if (local_40 != 0) {
            plVar6 = (longlong *)(local_48 + 0x20);
            do {
                if (*(int *)((longlong)plVar6 + -0x14) != 0) break;
                if (*plVar6 != 0) goto LAB_14047c9f2;
                uVar7 = uVar7 + 1;
                plVar6 = plVar6 + 6;
            } while (uVar7 < local_40);
        }
        FUN_140482a00(&local_58,uVar3,*(int *)(param_1 + 0x2ac) != 0,6,*puVar2,*puVar1);
        uVar7 = 0;
        if (local_40 != 0) {
            plVar6 = (longlong *)(local_48 + 0x20);
            do {
                if (*(int *)((longlong)plVar6 + -0x14) != 0) break;
                if (*plVar6 != 0) goto LAB_14047c9f2;
                uVar7 = uVar7 + 1;
                plVar6 = plVar6 + 6;
            } while (uVar7 < local_40);
        }
        FUN_140482a00(&local_58,uVar3,2,6,*puVar2,*puVar1);
        LAB_14047c9f2:
        if (((*(longlong *)(param_1 + 0x14e0) == 0) || ((int)local_58 != *(int *)(param_1 + 0x14c8))) ||
            (((int)((ulonglong)local_58 >> 0x20) != *(int *)(param_1 + 0x14cc) ||
              ((int)local_50 != *(int *)(param_1 + 0x14d0))))) {
            FUN_140195d70(param_1 + 0x1540);
            FUN_140195d70(param_1 + 0x14f8);
            lVar4 = *(longlong *)(param_1 + 0x590);
            *(undefined8 *)(param_1 + 0x14c8) = local_58;
            *(undefined8 *)(param_1 + 0x14d0) = local_50;
            *(longlong *)(param_1 + 0x14d8) = local_48;
            *(undefined4 *)(param_1 + 0x14c4) = 0;
            *(ulonglong *)(param_1 + 0x14e0) = local_40;
            while (lVar4 != 0) {
                (**(code **)(**(longlong **)(param_1 + 0x590) + 0x20))();
                lVar4 = *(longlong *)(param_1 + 0x590);
            }
            FUN_14047cab0(param_1);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14047cab0(longlong param_1)

{
    uint *puVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong in_stack_ffffffffffffff80;
    undefined local_48 [16];
    code *local_38;
    undefined8 local_30;

    uVar2 = *(ulonglong *)(param_1 + 0x14e0);
    if (uVar2 != 0) {
        uVar8 = 0;
        uVar7 = uVar8;
        if (uVar2 != 0) {
            uVar5 = uVar2;
            do {
                uVar4 = (uVar5 - uVar7 >> 1) + uVar7;
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x14d8) + 0xc + uVar4 * 0x30);
                if (*puVar1 <= *(uint *)(param_1 + 0x14c4) && *(uint *)(param_1 + 0x14c4) != *puVar1) {
                    uVar7 = uVar4 + 1;
                    uVar4 = uVar5;
                }
                uVar5 = uVar4;
            } while (uVar7 < uVar4);
        }
        if (uVar7 != uVar2) {
            lVar9 = uVar7 * 0x30;
            *(undefined4 *)(param_1 + 0x14e8) = 0;
            *(undefined4 *)(param_1 + 0x14c4) =
                    *(undefined4 *)(lVar9 + 0xc + *(longlong *)(param_1 + 0x14d8));
            for (; uVar7 < uVar2; uVar7 = uVar7 + 1) {
                lVar6 = *(longlong *)(param_1 + 0x14d8) + lVar9;
                if (*(int *)(lVar6 + 0xc) != *(int *)(param_1 + 0x14c4)) break;
                if (*(int *)(lVar6 + 0x28) == 0) {
                    LAB_14047cbc6:
                    if ((uint)uVar8 <= *(uint *)(lVar6 + 0x10)) {
                        uVar8 = (ulonglong)*(uint *)(lVar6 + 0x10);
                        *(undefined4 *)(param_1 + 0x14e8) = *(undefined4 *)(lVar6 + 0x14);
                        *(undefined4 *)(param_1 + 0x14ec) = *(undefined4 *)(lVar6 + 0x18);
                        *(undefined4 *)(param_1 + 0x14f0) = *(undefined4 *)(lVar6 + 0x1c);
                    }
                    if (*(longlong *)(lVar6 + 0x20) != 0) {
                        if (*(longlong *)(param_1 + 0x16e8) == 0) {
                            FUN_140033260(param_1 + 0x5a8);
                        }
                        else {
                            local_48 = ZEXT816(0);
                            in_stack_ffffffffffffff80 = 0;
                            FUN_1405787d0();
                        }
                    }
                }
                else {
                    in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffffff00000000;
                    iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                            (DAT_140c659a0,0,*(int *)(lVar6 + 0x28),0,0,in_stack_ffffffffffffff80);
                    if (iVar3 != 0) goto LAB_14047cbc6;
                }
                lVar9 = lVar9 + 0x30;
            }
            iVar3 = *(int *)(param_1 + 0x14e8);
            if (iVar3 == 0) {
                local_38 = (code *)&LAB_14047cd20;
            }
            else if (iVar3 == 1) {
                local_38 = (code *)&LAB_14047cdd0;
            }
            else if (iVar3 == 2) {
                local_38 = FUN_14047cdf0;
            }
            else if (iVar3 == 3) {
                local_38 = FUN_14047ce20;
            }
            else if (iVar3 == 4) {
                local_38 = FUN_14047ce70;
            }
            else {
                if (iVar3 != 5) {
                    return;
                }
                local_38 = FUN_14047ced0;
            }
            local_48 = CONCAT88(param_1,local_48._0_8_) & (undefined  [16])0xffffffffffffffff;
            local_30 = 0;
            FUN_140195960(param_1 + 0x1540,uVar8,local_48,4);
        }
    }
    return;
}



void FUN_14047cdf0(longlong param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_1401ae6f0(*(undefined4 *)(param_1 + 0x14ec),*(undefined4 *)(param_1 + 0x14f0));
    *(undefined4 *)(param_1 + 0x14c4) = uVar1;
    FUN_14047cab0(param_1);
    return;
}



void FUN_14047ce20(longlong param_1)

{
    undefined4 uVar1;
    double dVar2;

    dVar2 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
    if ((uint)(int)(dVar2 * 101.0) < 0x32) {
        uVar1 = *(undefined4 *)(param_1 + 0x14f0);
    }
    else {
        uVar1 = *(undefined4 *)(param_1 + 0x14ec);
    }
    *(undefined4 *)(param_1 + 0x14c4) = uVar1;
    FUN_14047cab0(param_1);
    return;
}



void FUN_14047ce70(longlong param_1)

{
    undefined4 uVar1;
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    uVar1 = FUN_1401ae6f0(*(undefined4 *)(param_1 + 0x14ec));
    local_18 = &LAB_14047cd20;
    local_28[0] = 0;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x1540,uVar1,local_28,4);
    return;
}



void FUN_14047ced0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    *(undefined4 *)(param_1 + 0x14c4) = 0;
    uVar1 = FUN_1401ae6f0(*(undefined4 *)(param_1 + 0x14ec),*(undefined4 *)(param_1 + 0x14f0));
    local_18 = FUN_14047cab0;
    local_28[0] = 0;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x1540,uVar1,local_28,4);
    return;
}



void FUN_14047cf40(longlong param_1,int param_2)

{
    ulonglong uVar1;
    short sVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    uint uVar6;
    int *piVar7;
    longlong *plVar8;
    short *psVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong lVar14;
    float fVar15;
    undefined local_128 [8];
    longlong local_120;
    undefined2 *local_118;
    longlong local_110;
    undefined local_108 [8];
    undefined local_100 [184];
    longlong local_48;

    if (*(longlong *)(param_1 + 0x18) == 0) {
        return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x18) + 0xdc) == 0) {
        return;
    }
    if (2 < param_2) {
        return;
    }
    if (((*(int *)(param_1 + 0x250) != 0) || (*(int *)(param_1 + 0x254) != 0)) && (param_2 != 1)) {
        return;
    }
    piVar7 = (int *)FUN_1401f7e60();
    if (piVar7 == (int *)0x0) {
        return;
    }
    plVar12 = (longlong *)0x0;
    fVar15 = (float)FUN_1401ae760(0,0x42c80000);
    plVar11 = plVar12;
    if (param_2 == 0) {
        if ((float)piVar7[5] <= fVar15 && fVar15 != (float)piVar7[5]) {
            return;
        }
        lVar14 = 4;
        plVar10 = plVar12;
        do {
            piVar7 = piVar7 + 1;
            iVar3 = *piVar7;
            plVar13 = plVar10;
            if (iVar3 != 0) {
                plVar8 = (longlong *)FUN_14018db00(plVar10,(longlong)plVar11 + 1,4);
                *(int *)((longlong)plVar11 * 4 + (longlong)plVar8) = iVar3;
                if ((plVar10 != plVar8) &&
                    (FUN_1407db590(plVar8,plVar10), plVar13 = plVar8, plVar10 != (longlong *)0x0)) {
                    (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
                }
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            }
            lVar14 = lVar14 + -1;
            plVar10 = plVar13;
        } while (lVar14 != 0);
    }
    else if (param_2 == 1) {
        if ((float)piVar7[10] <= fVar15 && fVar15 != (float)piVar7[10]) {
            return;
        }
        piVar7 = piVar7 + 6;
        lVar14 = 4;
        plVar10 = plVar12;
        do {
            iVar3 = *piVar7;
            plVar13 = plVar10;
            if (iVar3 != 0) {
                plVar8 = (longlong *)FUN_14018db00(plVar10,(longlong)plVar11 + 1,4);
                *(int *)((longlong)plVar11 * 4 + (longlong)plVar8) = iVar3;
                if ((plVar10 != plVar8) &&
                    (FUN_1407db590(plVar8,plVar10), plVar13 = plVar8, plVar10 != (longlong *)0x0)) {
                    (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
                }
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            }
            piVar7 = piVar7 + 1;
            lVar14 = lVar14 + -1;
            plVar10 = plVar13;
        } while (lVar14 != 0);
    }
    else {
        plVar13 = plVar12;
        if (param_2 != 2) goto LAB_14047d31e;
        if ((float)piVar7[0xf] <= fVar15 && fVar15 != (float)piVar7[0xf]) {
            return;
        }
        piVar7 = piVar7 + 0xb;
        lVar14 = 4;
        plVar10 = plVar12;
        do {
            iVar3 = *piVar7;
            plVar13 = plVar10;
            if (iVar3 != 0) {
                plVar8 = (longlong *)FUN_14018db00(plVar10,(longlong)plVar11 + 1,4);
                *(int *)((longlong)plVar11 * 4 + (longlong)plVar8) = iVar3;
                if ((plVar10 != plVar8) &&
                    (FUN_1407db590(plVar8,plVar10), plVar13 = plVar8, plVar10 != (longlong *)0x0)) {
                    (**(code **)(plVar10[-2] + 8))(plVar10 + -2);
                }
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            }
            piVar7 = piVar7 + 1;
            lVar14 = lVar14 + -1;
            plVar10 = plVar13;
        } while (lVar14 != 0);
    }
    if ((int)plVar11 != 0) {
        uVar6 = FUN_1401ae6f0(0,(int)plVar11 + -1);
        uVar4 = *(undefined4 *)((longlong)plVar13 + (ulonglong)uVar6 * 4);
        psVar9 = (short *)FUN_14034bdd0();
        if ((psVar9 != (short *)0x0) && (plVar11 = plVar12, *psVar9 != 0)) {
            do {
                plVar11 = (longlong *)((longlong)plVar11 + 1);
            } while (psVar9[(longlong)plVar11] != 0);
            if (plVar11 != (longlong *)0x0) {
                FUN_1404dde90(local_108);
                lVar14 = FUN_14018b280(0x60);
                plVar11 = plVar12;
                if (lVar14 != 0) {
                    plVar11 = (longlong *)FUN_1404db7e0(lVar14,param_1);
                }
                local_120 = 0;
                local_118 = (undefined2 *)0x0;
                local_110 = 0;
                plVar10 = plVar12;
                do {
                    plVar10 = (longlong *)((longlong)plVar10 + 1);
                } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar10 * 2) != 0);
                lVar14 = (longlong)plVar10 * 2 >> 1;
                uVar1 = lVar14 + 1;
                if (uVar1 < 0x7fffffffffffffff) {
                    lVar5 = uVar1 * 2;
                    local_118 = (undefined2 *)FUN_14018b280(lVar5,0);
                    local_110 = (longlong)local_118 + lVar5;
                }
                lVar5 = (longlong)local_118;
                lVar14 = lVar14 * 2;
                local_120 = (longlong)local_118;
                FUN_1407db590(local_118,&DAT_140b0a7c8,lVar14);
                local_118 = (undefined2 *)(lVar5 + lVar14);
                if (local_118 != (undefined2 *)0x0) {
                    *local_118 = 0;
                }
                FUN_1400b7480(local_108,plVar11);
                (**(code **)(*plVar11 + 0x48))(plVar11,local_128);
                if (local_120 != 0) {
                    FUN_14018b900(local_120,0);
                }
                sVar2 = *psVar9;
                while (sVar2 != 0) {
                    plVar12 = (longlong *)((longlong)plVar12 + 1);
                    sVar2 = psVar9[(longlong)plVar12];
                }
                FUN_14001c480(local_100,psVar9,psVar9 + (longlong)plVar12);
                lVar14 = FUN_1400b7660(local_108);
                FUN_140475ef0(param_1,*(undefined8 *)(lVar14 + 8),1);
                FUN_140472ed0(param_1,uVar4);
                if (local_48 != 0) {
                    FUN_14018b900(local_48,0);
                }
                FUN_1400b7390(local_108);
            }
        }
    }
    LAB_14047d31e:
    if (plVar13 != (longlong *)0x0) {
        (**(code **)(plVar13[-2] + 8))(plVar13 + -2);
    }
    return;
}



undefined8 FUN_14047d370(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (((iVar1 != 0) && (plVar2[0x17] != 0)) && (*(int *)(plVar2[0x17] + 4) == 0)) {
            return 1;
        }
    }
    return 0;
}



ulonglong FUN_14047d3d0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 == 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18));
        if (lVar2 != 0) {
            uVar3 = FUN_14047d3d0(lVar2);
            return uVar3;
        }
    }
    else if (param_1[0x17] != 0) {
        return (ulonglong)*(uint *)(param_1[0x17] + 0x6c);
    }
    return 0;
}



ulonglong FUN_14047d430(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 == 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18));
        if (lVar2 != 0) {
            uVar3 = FUN_14047d430(lVar2);
            return uVar3;
        }
    }
    else if (param_1[0x17] != 0) {
        return (ulonglong)*(uint *)(param_1[0x17] + 0x70);
    }
    return 0;
}



ulonglong FUN_14047d490(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 == 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18));
        if (lVar2 != 0) {
            uVar3 = FUN_14047d490(lVar2);
            return uVar3;
        }
    }
    else if (param_1[0x17] != 0) {
        return (ulonglong)*(uint *)(param_1[0x17] + 0x74);
    }
    return 0;
}



ulonglong FUN_14047d4f0(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    iVar1 = (**(code **)(*param_1 + 0x20))();
    if (iVar1 == 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18));
        if (lVar2 != 0) {
            uVar3 = FUN_14047d4f0(lVar2);
            return uVar3;
        }
    }
    else if (param_1[0x17] != 0) {
        return (ulonglong)*(uint *)(param_1[0x17] + 0x78);
    }
    return 0;
}



bool FUN_14047d550(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    float fVar6;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar7;
    undefined4 in_XMM7_Db;
    float fVar8;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar9 [16];
    undefined auVar10 [16];

    if (param_2 == 0) {
        return false;
    }
    lVar2 = *(longlong *)(param_1 + 0xd08);
    auVar10 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar5 = *(float *)(param_1 + 0x11e0);
    fVar6 = *(float *)(param_1 + 0x11e4);
    auVar9 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    fVar7 = *(float *)(param_2 + 0x11e0);
    fVar8 = *(float *)(param_2 + 0x11e4);
    if (lVar2 == 0) {
        lVar2 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        if (lVar2 == 0) {
            fVar3 = 0.0;
        }
        else {
            fVar3 = *(float *)(lVar2 + 0x28);
        }
    }
    else {
        fVar3 = (float)FUN_14047a940();
        fVar3 = fVar3 * *(float *)(lVar2 + 0x8c);
    }
    fVar4 = 2.0;
    if (2.0 <= fVar3) {
        fVar4 = fVar3;
    }
    if (fVar4 * fVar4 < (fVar5 - fVar7) * (fVar5 - fVar7) + (fVar6 - fVar8) * (fVar6 - fVar8) + 0.0) {
        iVar1 = FUN_14047d670(param_1,param_2,2,param_4,auVar9,auVar10);
        if (iVar1 == 0) {
            iVar1 = FUN_14047d670(param_1,param_2,4,param_4,auVar9,auVar10);
            if (iVar1 == 0) {
                iVar1 = FUN_14047d670(param_1,param_2,8,param_4,auVar9,auVar10);
                return iVar1 != 0;
            }
        }
    }
    return true;
}



undefined8 FUN_14047d670(longlong param_1,longlong param_2,undefined4 param_3)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    float fVar6;
    float fVar7;
    longlong *local_res20;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_78;
    float fStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined local_68 [16];
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined8 local_30;

    plVar4 = *(longlong **)(DAT_140c65898 + 0x7248);
    if (plVar4 == (longlong *)0x0) {
        LAB_14047d7ed:
        uVar5 = 0;
    }
    else {
        lVar3 = *(longlong *)(param_1 + 0xd08);
        local_78 = *(undefined4 *)(param_1 + 0x11e0);
        fStack116 = *(float *)(param_1 + 0x11e4);
        uStack112 = *(undefined4 *)(param_1 + 0x11e8);
        uStack108 = *(undefined4 *)(param_1 + 0x11ec);
        fVar7 = 0.0;
        if (lVar3 == 0) {
            lVar3 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
            if (lVar3 != 0) {
                fVar7 = *(float *)(lVar3 + 0x28);
            }
        }
        else {
            fVar7 = (float)FUN_14047a940();
            fVar7 = fVar7 * *(float *)(lVar3 + 0x8c);
        }
        fVar6 = 2.0;
        if (2.0 <= fVar7) {
            fVar6 = fVar7;
        }
        fStack116 = fStack116 + fVar6;
        FUN_14047daa0(param_2,local_68,&local_78,param_3);
        local_res20 = (longlong *)0x0;
        local_50 = 0;
        local_84 = 0x3f800000;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_88 = 0;
        local_58 = 0x4041;
        iVar1 = (**(code **)(*plVar4 + 0x1a8))
                (plVar4,&local_78,local_68,&local_88,&local_res20,&local_58);
        if (iVar1 != 0) {
            plVar4 = (longlong *)(**(code **)(*local_res20 + 0x18))();
            if (plVar4 == (longlong *)0x0) {
                LAB_14047d7da:
                if (local_res20 != (longlong *)0x0) {
                    (**(code **)(*local_res20 + 8))();
                }
                goto LAB_14047d7ed;
            }
            iVar1 = *(int *)(param_2 + 8);
            iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
            if (iVar2 != iVar1) {
                iVar1 = *(int *)(param_1 + 8);
                iVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
                if (iVar2 != iVar1) goto LAB_14047d7da;
            }
        }
        if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 8))();
        }
        uVar5 = 1;
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14047d830(longlong param_1,float *param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    float fVar5;
    float fVar6;
    longlong *local_res18;
    longlong *local_res20;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_78;
    float fStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined local_68 [16];
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined8 local_30;

    plVar1 = *(longlong **)(DAT_140c65898 + 0x7248);
    if ((plVar1 == (longlong *)0x0) ||
        (*param_2 * *param_2 + param_2[1] * param_2[1] + 0.0 <= _DAT_140c45918)) {
        LAB_14047da59:
        uVar4 = 0;
    }
    else {
        lVar3 = *(longlong *)(param_1 + 0xd08);
        local_78 = *(undefined4 *)(param_1 + 0x11e0);
        fStack116 = *(float *)(param_1 + 0x11e4);
        uStack112 = *(undefined4 *)(param_1 + 0x11e8);
        uStack108 = *(undefined4 *)(param_1 + 0x11ec);
        fVar6 = 0.0;
        if (lVar3 == 0) {
            lVar3 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
            if (lVar3 != 0) {
                fVar6 = *(float *)(lVar3 + 0x28);
            }
        }
        else {
            fVar6 = (float)FUN_14047a940();
            fVar6 = fVar6 * *(float *)(lVar3 + 0x8c);
        }
        fVar5 = 2.0;
        if (2.0 <= fVar6) {
            fVar5 = fVar6;
        }
        fStack116 = fStack116 + fVar5;
        local_res20 = (longlong *)0x0;
        local_58 = 0x4041;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_88 = 0;
        local_84 = 0x3f800000;
        iVar2 = (**(code **)(*plVar1 + 0x1a8))
                (plVar1,&local_78,param_2,&local_88,&local_res20,&local_58);
        if (iVar2 != 0) {
            lVar3 = (**(code **)(*local_res20 + 0x18))();
            if ((lVar3 == 0) ||
                (fVar6 = *param_2 - *(float *)(param_1 + 0x11e0),
                        fVar5 = param_2[1] - *(float *)(param_1 + 0x11e4),
                        _DAT_140c45918 <= fVar6 * fVar6 + fVar5 * fVar5 + 0.0)) {
                local_68 = CONCAT412(param_2[3] + 0.0,
                                     CONCAT48(param_2[2] + 0.0,CONCAT44(param_2[1] + 1.0,*param_2 + 0.0)));
                local_res18 = (longlong *)0x0;
                local_58 = 0x4041;
                local_50 = 0;
                local_48 = 0;
                local_40 = 0;
                local_38 = 0;
                local_30 = 0;
                local_88 = 0;
                local_84 = 0x3f800000;
                iVar2 = (**(code **)(*plVar1 + 0x1a8))
                        (plVar1,&local_78,local_68,&local_88,&local_res18,&local_58);
                if (iVar2 != 0) {
                    lVar3 = (**(code **)(*local_res18 + 0x18))();
                    if ((lVar3 == 0) ||
                        (local_68._0_4_ = local_68._0_4_ - *(float *)(param_1 + 0x11e0),
                                local_68._4_4_ = local_68._4_4_ - *(float *)(param_1 + 0x11e4),
                                _DAT_140c45918 <=
                                local_68._0_4_ * local_68._0_4_ + local_68._4_4_ * local_68._4_4_ + 0.0)) {
                        if (local_res18 != (longlong *)0x0) {
                            (**(code **)(*local_res18 + 8))();
                        }
                        if (local_res20 != (longlong *)0x0) {
                            (**(code **)(*local_res20 + 8))();
                        }
                        goto LAB_14047da59;
                    }
                }
                if (local_res18 != (longlong *)0x0) {
                    (**(code **)(*local_res18 + 8))();
                }
            }
        }
        if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 8))();
        }
        uVar4 = 1;
    }
    return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

float * FUN_14047daa0(longlong param_1,float *param_2,float *param_3,int param_4)

{
    undefined auVar1 [12];
    float fVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar7;
    undefined auVar6 [16];
    float fVar8;
    float fVar9;
    undefined local_18 [8];
    float fStack16;
    float fStack12;

    lVar3 = *(longlong *)(param_1 + 0xd08);
    auVar1 = *(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x11e0);
    auVar6 = *(undefined (*) [16])(param_1 + 0x11e0);
    if (lVar3 == 0) {
        lVar3 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        if (lVar3 == 0) {
            fVar4 = 0.0;
        }
        else {
            fVar4 = *(float *)(lVar3 + 0x28);
        }
    }
    else {
        fVar4 = (float)FUN_14047a940();
        fVar4 = fVar4 * *(float *)(lVar3 + 0x8c);
    }
    fVar8 = 2.0;
    if (2.0 <= fVar4) {
        fVar8 = fVar4;
    }
    local_18._4_4_ = SUB124(auVar1 >> 0x20,0);
    fVar9 = fVar8 * 2.0 * 0.3333333;
    local_18._0_4_ = SUB124(auVar1,0);
    fVar4 = local_18._0_4_;
    fStack16 = SUB164(auVar6 >> 0x40,0);
    fStack12 = SUB164(auVar6 >> 0x60,0);
    fVar2 = fStack12;
    if (param_4 == 2) {
        local_18._0_4_ = *param_3 - local_18._0_4_;
        auVar6 = CONCAT124((ZEXT412((uint)(local_18._0_4_ * 0.0)) << 0x40) >> 0x20,
                           local_18._0_4_ * local_18._0_4_ + 0.0) & (undefined  [16])0xffffffffffffffff;
        auVar6 = rsqrtss(auVar6,auVar6);
        local_18._0_4_ = SUB164(auVar6,0) * local_18._0_4_;
        fVar7 = SUB164(auVar6,0) * 0.0;
        fVar5 = SUB164(ZEXT1216(CONCAT48(fVar7,CONCAT44(fVar7,local_18._0_4_))) >> 0x40,0);
        fStack12 = fVar7;
    }
    else if (param_4 == 4) {
        local_18._0_4_ = *param_3 - local_18._0_4_;
        auVar6 = CONCAT124((ZEXT412((uint)(local_18._0_4_ * 0.0)) << 0x40) >> 0x20,
                           local_18._0_4_ * local_18._0_4_ + 0.0) & (undefined  [16])0xffffffffffffffff;
        auVar6 = rsqrtss(auVar6,auVar6);
        local_18._0_4_ = SUB164(auVar6,0) * local_18._0_4_;
        fVar7 = SUB164(auVar6,0) * 0.0;
        fVar5 = (float)((uint)local_18._0_4_ ^ 0x80000000);
        _local_18 = ZEXT1216(CONCAT48(fVar7,CONCAT44(fVar7,local_18._0_4_)) >> 0x20) << 0x20;
        local_18._0_4_ = 0.0;
    }
    else {
        if (param_4 != 8) {
            *param_2 = local_18._0_4_;
            param_2[1] = local_18._4_4_ + fVar8;
            param_2[2] = fStack16;
            param_2[3] = fStack12;
            return param_2;
        }
        local_18._0_4_ = *param_3 - local_18._0_4_;
        auVar6 = CONCAT124((ZEXT412((uint)(local_18._0_4_ * 0.0)) << 0x40) >> 0x20,
                           local_18._0_4_ * local_18._0_4_ + 0.0) & (undefined  [16])0xffffffffffffffff;
        auVar6 = rsqrtss(auVar6,auVar6);
        fVar5 = SUB164(auVar6,0) * local_18._0_4_;
        fVar7 = SUB164(auVar6,0) * 0.0;
        local_18._0_4_ = -0.0;
        fStack12 = fVar7;
    }
    *param_2 = local_18._0_4_ * fVar9 + fVar4;
    param_2[1] = fVar7 * fVar9 + local_18._4_4_ + fVar8;
    param_2[2] = fVar5 * fVar9 + fStack16;
    param_2[3] = fStack12 * fVar9 + fVar2;
    return param_2;
}



longlong FUN_14047dca0(longlong param_1)

{
    if (((*(int *)(param_1 + 0x80) != 0x14) && (*(int *)(param_1 + 0x80) != 0x17)) &&
        ((param_1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x2b0)), param_1 == 0 ||
                                                                                   ((*(int *)(param_1 + 0x80) != 0x14 && (*(int *)(param_1 + 0x80) != 0x17)))))) {
        return 0;
    }
    return param_1;
}



void FUN_14047e920(longlong param_1,undefined4 param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined4 local_res8 [2];
    undefined4 local_res10 [2];
    undefined local_18 [16];

    local_res10[0] = param_2;
    FUN_1400293c0(param_1 + 0x3778,local_18,local_res10);
    plVar2 = (longlong *)(**(code **)(*DAT_140c65980 + 0x30))(DAT_140c65980,param_2,0);
    if (plVar2 != (longlong *)0x0) {
        local_res8[0] = *(undefined4 *)(param_1 + 8);
        FUN_1400293c0(plVar2 + 0x13,local_18,local_res8);
        iVar1 = (**(code **)(*plVar2 + 0xf8))(plVar2);
        if (iVar1 == 0) {
            return;
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PublicEventUnitUpdate",&DAT_1409ed124,
                  *(undefined4 *)(param_1 + 8));
    return;
}



undefined8 FUN_14047ea60(ulonglong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    wchar_t *pwVar4;
    float fVar5;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    float local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    ulonglong local_18;
    undefined *puStack16;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        return 0;
    }
    local_34 = *(undefined4 *)(param_1 + 8);
    uVar3 = 0;
    local_38 = 6;
    local_30 = 0;
    if (*(longlong *)(param_1 + 0x3798) != 0) {
        for (plVar1 = *(longlong **)(DAT_140c65920 + 2); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[4]) {
            if (plVar1[9] == *(longlong *)(param_1 + 0x3798)) {
                (**(code **)(*plVar1 + 8))(plVar1);
                (**(code **)*plVar1)(plVar1,1);
                break;
            }
        }
    }
    local_28 = *(float *)(param_1 + 0x11e0);
    uStack32 = *(undefined4 *)(param_1 + 0x11e8);
    uStack28 = *(undefined4 *)(param_1 + 0x11ec);
    uStack36 = 0;
    fVar5 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
    puStack16 = *(undefined **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e8);
    local_18 = (ulonglong)(uint)fVar5;
    fVar5 = local_28 - fVar5;
    if ((64.0 < fVar5 * fVar5 + 0.0 + 0.0) || (iVar2 = FUN_14047ee80(param_1), iVar2 != 0)) {
        puStack16 = &DAT_14047ebd0;
        if (*DAT_140c65920 == 0) goto LAB_14047ebbb;
        pwVar4 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
    }
    else {
        puStack16 = &LAB_14047ee40;
        if (*DAT_140c65920 == 0) goto LAB_14047ebbb;
        pwVar4 = L"Art\\FX\\Model\\Props\\Alert_LightningBolt\\Alert_LightningBolt.m3";
    }
    local_18 = param_1;
    uVar3 = FUN_140486dc0(DAT_140c65920,pwVar4,&local_38,&local_18,0,0);
    LAB_14047ebbb:
    *(undefined8 *)(param_1 + 0x3798) = uVar3;
    return uVar3;
}



void FUN_14047ecf0(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    ulonglong uVar7;
    undefined4 *puVar8;
    undefined auStack104 [32];
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_38 [4];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    uVar2 = *(undefined4 *)(param_1 + 0x11b4);
    uVar3 = *(undefined4 *)(param_1 + 0x11b8);
    uVar4 = *(undefined4 *)(param_1 + 0x11bc);
    *param_2 = *(undefined4 *)(param_1 + 0x11b0);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x11c4);
    uVar3 = *(undefined4 *)(param_1 + 0x11c8);
    uVar4 = *(undefined4 *)(param_1 + 0x11cc);
    param_2[4] = *(undefined4 *)(param_1 + 0x11c0);
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x11d4);
    uVar3 = *(undefined4 *)(param_1 + 0x11d8);
    uVar4 = *(undefined4 *)(param_1 + 0x11dc);
    param_2[8] = *(undefined4 *)(param_1 + 0x11d0);
    param_2[9] = uVar2;
    param_2[10] = uVar3;
    param_2[0xb] = uVar4;
    uVar2 = *(undefined4 *)(param_1 + 0x11e4);
    uVar3 = *(undefined4 *)(param_1 + 0x11e8);
    uVar4 = *(undefined4 *)(param_1 + 0x11ec);
    param_2[0xc] = *(undefined4 *)(param_1 + 0x11e0);
    param_2[0xd] = uVar2;
    param_2[0xe] = uVar3;
    param_2[0xf] = uVar4;
    param_2[0xd] = (float)param_2[0xd] + 2.2;
    plVar1 = *(longlong **)(param_1 + 0x16e8);
    if (plVar1 != (longlong *)0x0) {
        if (*(int *)(param_1 + 0x80) == 0x1b) {
            (**(code **)(*plVar1 + 0x368))(plVar1,0xe,local_38);
            param_2[0xc] = local_38[0];
            param_2[0xd] = local_38[1];
            param_2[0xe] = local_38[2];
        }
        else {
            local_38[0] = 0xf;
            puVar8 = local_38;
            local_38[1] = 1;
            local_38[2] = 0x19;
            uVar7 = 0;
            do {
                iVar5 = (**(code **)(*plVar1 + 0x350))(plVar1,*puVar8);
                if (iVar5 != 0) {
                    (**(code **)(*plVar1 + 0x368))(plVar1,local_38[uVar7],&local_48,0);
                    param_2[0xc] = local_48;
                    param_2[0xd] = local_44;
                    param_2[0xe] = local_40;
                    break;
                }
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
                puVar8 = puVar8 + 1;
            } while (uVar6 < 3);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



undefined8 FUN_14047ee80(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined local_18 [16];

    lVar3 = *(longlong *)(param_1 + 0xf00);
    if (((lVar3 == 0) || ((*(int *)(lVar3 + 0x80) - 3U & 0xfffffff9) != 0)) ||
        (*(int *)(lVar3 + 0x80) == 5)) {
        lVar3 = param_1;
    }
    if (lVar3 == 0) {
        return 0;
    }
    plVar4 = *(longlong **)(lVar3 + 0x16f0);
    if ((plVar4 == (longlong *)0x0) &&
        (plVar4 = *(longlong **)(lVar3 + 0x16f8), plVar4 == (longlong *)0x0)) {
        return 0;
    }
    uVar6 = 1;
    iVar1 = (**(code **)(*plVar4 + 0x108))(plVar4,0,1,1);
    if (iVar1 == 0) {
        iVar1 = (**(code **)(*plVar4 + 0x100))(plVar4);
        if (iVar1 != 0) {
            lVar5 = *(longlong *)(DAT_140c65898 + 0x71a8);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(DAT_140c65898 + 0x71a0);
            }
            uVar2 = FUN_1403d8b90();
            lVar3 = FUN_140251620(local_18,lVar3 + 0x11e0,uVar2,lVar5 + 0x1e0);
            if (0.0 < *(float *)(lVar3 + 8) || *(float *)(lVar3 + 8) == 0.0) {
                uVar6 = 0;
            }
        }
    }
    return uVar6;
}



void FUN_14047ef70(longlong param_1,int param_2)

{
    ulonglong uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    int *piVar6;

    uVar1 = *(ulonglong *)(param_1 + 0x3620);
    uVar3 = 0;
    if (uVar1 == 0) {
        return;
    }
    piVar6 = *(int **)(param_1 + 0x3618);
    while (*piVar6 != param_2) {
        uVar3 = uVar3 + 1;
        piVar6 = piVar6 + 1;
        if (uVar1 <= uVar3) {
            return;
        }
    }
    uVar1 = uVar1 - 1;
    piVar6 = *(int **)(param_1 + 0x3618) + uVar3;
    FUN_1407db590(piVar6,piVar6 + 1,(uVar1 - uVar3) * 4);
    puVar5 = *(undefined8 **)(param_1 + 0x3618);
    if (uVar1 == 0) goto LAB_14047f06b;
    if (puVar5 == (undefined8 *)0x0) {
        lVar4 = uVar1 * 4 + 0x10;
        uVar3 = uVar1;
    }
    else {
        if (uVar1 < (ulonglong)puVar5[-1] || uVar1 == puVar5[-1]) goto LAB_14047f06b;
        lVar4 = FUN_14018a3e0(uVar1 * 4 + 0x10);
        uVar3 = lVar4 - 0x10U >> 2;
        lVar4 = (lVar4 - 0x10U & 0xfffffffffffffffc) + 0x10;
        iVar2 = (**(code **)puVar5[-2])(puVar5 + -2,lVar4);
        if (iVar2 != 0) {
            puVar5[-1] = uVar3;
            goto LAB_14047f06b;
        }
    }
    puVar5 = (undefined8 *)FUN_14018b280(lVar4,0);
    if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = uVar3;
        *puVar5 = &PTR_LAB_140b55060;
    }
    puVar5 = puVar5 + 2;
    LAB_14047f06b:
    if (*(undefined8 **)(param_1 + 0x3618) != puVar5) {
        FUN_1407db590(puVar5,*(undefined8 **)(param_1 + 0x3618),uVar1 * 4);
        lVar4 = *(longlong *)(param_1 + 0x3618);
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *(undefined8 **)(param_1 + 0x3618) = puVar5;
    }
    *(ulonglong *)(param_1 + 0x3620) = uVar1;
    return;
}



void FUN_14047f0c0(longlong param_1,undefined4 *param_2,uint param_3)

{
    longlong lVar1;
    ulonglong local_78;
    undefined8 local_70;
    undefined4 *local_68;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined8 local_18;

    local_78 = CONCAT44(param_2[2],*param_2);
    local_70 = CONCAT44(param_2[1],param_2[3]);
    local_68 = (undefined4 *)((ulonglong)local_68 & 0xffffffff00000000 | (ulonglong)param_3);
    lVar1 = FUN_140481060(param_1 + 0x3628,&local_78);
    if (param_3 == 0) {
        if (*(int *)(param_1 + 0x364c) != 0) {
            FUN_14047f210(param_1,param_1 + 0x11e0,0,0);
        }
    }
    else {
        DAT_140c6588c = DAT_140c6588c + 1;
        *(uint *)(lVar1 * 0x14 + *(longlong *)(param_1 + 0x3628)) = DAT_140c6588c | 0xc0000000;
        uStack84 = param_2[1];
        uStack80 = param_2[2];
        uStack76 = param_2[3];
        local_48 = param_2[4];
        uStack68 = param_2[5];
        uStack64 = param_2[6];
        uStack60 = param_2[7];
        local_38 = param_2[8];
        uStack52 = param_2[9];
        uStack48 = param_2[10];
        uStack44 = param_2[0xb];
        local_28 = param_2[0xc];
        uStack36 = param_2[0xd];
        uStack32 = param_2[0xe];
        uStack28 = param_2[0xf];
        local_78 = (ulonglong)*(uint *)(param_1 + 8);
        local_70 = 0x100000001;
        local_18 = *(undefined8 *)(param_2 + 0x10);
        local_58 = *(undefined4 *)(lVar1 * 0x14 + *(longlong *)(param_1 + 0x3628));
        local_68 = &local_58;
        FUN_1405fe2f0(*(undefined8 *)(DAT_140c65898 + 0x7d90),&local_78);
    }
    return;
}



void FUN_14047f210(longlong param_1,float *param_2,int param_3,int param_4)

{
    float *pfVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    double dVar5;
    double dVar6;
    int *piVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    undefined4 uVar11;
    ulonglong uVar12;
    int iVar13;
    ulonglong uVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    float fVar19;
    undefined auVar20 [16];
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    ulonglong local_res8;
    ulonglong local_c8;
    ulonglong local_c0;

    if ((param_3 == 0) && (param_4 == 0)) {
        *(undefined4 *)(param_1 + 0x364c) = 1;
    }
    if (*(longlong *)(param_1 + 0x3630) == 0) {
        return;
    }
    iVar8 = FUN_14018cdf0();
    uVar17 = *(ulonglong *)(param_1 + 0x3630);
    uVar18 = 0;
    uVar12 = FUN_14018db00(0,uVar17,4);
    piVar7 = DAT_140c63750;
    uVar16 = uVar18;
    if (uVar12 != 0) {
        uVar16 = uVar12;
    }
    uVar12 = uVar18;
    if (uVar17 != 0) {
        do {
            iVar13 = DAT_140c47fa0;
            if (*piVar7 < DAT_140c47fa0) {
                iVar13 = *piVar7;
            }
            uVar14 = uVar12 + 1;
            *(int *)((uVar16 - 4) + uVar14 * 4) =
                    *(int *)(&DAT_140c47fb0 + (longlong)iVar13 * 4) * (int)uVar12 + iVar8;
            uVar12 = uVar14;
        } while (uVar14 < uVar17);
    }
    fVar19 = (float)*(longlong *)(param_1 + 0x3630);
    if (*(longlong *)(param_1 + 0x3630) < 0) {
        fVar19 = fVar19 + 1.844674e+19;
    }
    iVar8 = DAT_140c48000;
    if (*piVar7 < DAT_140c48000) {
        iVar8 = *piVar7;
    }
    fVar19 = DAT_140c45af8 / fVar19;
    local_c8 = uVar16;
    local_c0 = uVar17;
    if (((&DAT_140c48010)[iVar8] == '\0') && (lVar2 = *(longlong *)(DAT_140c65898 + 0x78), lVar2 != 0)
            ) {
        fVar22 = *(float *)(lVar2 + 0x11e0) - *param_2;
        fVar23 = *(float *)(lVar2 + 0x11e4) - param_2[1];
        fVar24 = *(float *)(lVar2 + 0x11e8) - param_2[2];
        fVar25 = *(float *)(lVar2 + 0x11ec) - param_2[3];
        if (DAT_140c45a98 < fVar22 * fVar22 + fVar23 * fVar23 + 0.0) {
            fVar23 = fVar23 * fVar23;
            fVar21 = fVar22 * fVar22 + fVar23 + 0.0;
            auVar20 = rsqrtss(CONCAT412(fVar23,CONCAT48(fVar23,CONCAT44(fVar23,fVar23))),
                              CONCAT412(fVar25 * fVar25,CONCAT48(fVar24 * fVar24,CONCAT44(fVar23,fVar21)))
            );
            fVar23 = SUB164(auVar20,0);
            fVar23 = (3.0 - fVar21 * fVar23 * fVar23) * 0.5 * fVar23;
            if (fVar23 <= 0.0) {
                fVar23 = 0.0;
            }
            fVar23 = (float)FUN_1408fd190((uint)(fVar23 * fVar22) ^ 0x80000000);
            goto LAB_14047f411;
        }
    }
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    fVar23 = (float)(dVar5 * 6.283185482025146);
    LAB_14047f411:
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x3630) != 0) {
        uVar27 = 0;
        uVar28 = 0x3df00000;
        uVar29 = 0;
        uVar30 = 0x3ff00000;
        fVar22 = 1.256637;
        uVar31 = 0x3af93420;
        uVar32 = 0x400e28c7;
        do {
            FUN_140481120((longlong *)(param_1 + 0x3638),*(longlong *)(param_1 + 0x3640) + 1);
            lVar2 = *(longlong *)(param_1 + 0x3628);
            lVar3 = *(longlong *)(param_1 + 0x3638);
            lVar15 = *(longlong *)(param_1 + 0x3640) * 0x40;
            *(undefined4 *)(lVar15 + -0x40 + lVar3) = *(undefined4 *)(lVar2 + uVar18);
            *(undefined4 *)(lVar15 + -0x3c + lVar3) = *(undefined4 *)(lVar2 + 4 + uVar18);
            *(undefined4 *)(lVar15 + -0x38 + lVar3) = *(undefined4 *)(lVar2 + 8 + uVar18);
            *(undefined4 *)(lVar15 + -0x34 + lVar3) = *(undefined4 *)(lVar2 + 0xc + uVar18);
            *(undefined4 *)(&DAT_ffffffffffffffd0 + lVar3 + lVar15) =
                    *(undefined4 *)(lVar2 + 0x10 + uVar18);
            if (*(int *)(param_1 + 0x80) == 5) {
                dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))();
                fVar24 = (float)(dVar5 * (double)CONCAT44(uVar32,uVar31)) + fVar22;
            }
            else {
                fVar24 = fVar23 + fVar19;
                fVar23 = fVar24;
            }
            iVar8 = DAT_140c48040;
            if (*DAT_140c63750 < DAT_140c48040) {
                iVar8 = *DAT_140c63750;
            }
            fVar25 = *(float *)(&DAT_140c48050 + (longlong)iVar8 * 4);
            dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))();
            piVar7 = DAT_140c63750;
            *(float *)(lVar15 + -0x10 + lVar3) = (float)(dVar5 * (double)fVar25) + fVar24;
            fVar24 = param_2[1];
            fVar25 = param_2[2];
            fVar21 = param_2[3];
            pfVar1 = (float *)(lVar15 + -0x20 + lVar3);
            *pfVar1 = *param_2;
            pfVar1[1] = fVar24;
            pfVar1[2] = fVar25;
            pfVar1[3] = fVar21;
            iVar8 = *piVar7;
            iVar13 = DAT_140c47fa0;
            if (iVar8 < DAT_140c47fa0) {
                iVar13 = iVar8;
            }
            if (*(int *)(&DAT_140c47fb0 + (longlong)iVar13 * 4) == 0) {
                iVar13 = DAT_140c47f40;
                if (iVar8 < DAT_140c47f40) {
                    iVar13 = iVar8;
                }
                uVar9 = *(uint *)(&DAT_140c47f50 + (longlong)iVar13 * 4);
                iVar13 = DAT_140c47ee0;
                if (iVar8 < DAT_140c47ee0) {
                    iVar13 = iVar8;
                }
                uVar11 = SUB84((double)(ulonglong)*(uint *)(&DAT_140c47ef0 + (longlong)iVar13 * 4),0);
                uVar26 = (undefined4)
                        ((ulonglong)(double)(ulonglong)*(uint *)(&DAT_140c47ef0 + (longlong)iVar13 * 4) >>
                                                                                                        0x20);
                uVar10 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
                dVar5 = (double)CONCAT44(uVar28,uVar27);
                dVar6 = (double)CONCAT44(uVar30,uVar29);
                iVar8 = FUN_14018cdf0();
                *(int *)(lVar15 + -0xc + lVar3) =
                        iVar8 + (int)(longlong)
                                ((double)(ulonglong)uVar10 * dVar5 *
                                 (((double)(ulonglong)uVar9 - (double)CONCAT44(uVar26,uVar11)) + dVar6) +
                                 (double)CONCAT44(uVar26,uVar11));
            }
            else {
                uVar9 = (**(code **)(DAT_140c77890 + 0x18))();
                *(undefined4 *)(lVar15 + -0xc + lVar3) =
                        *(undefined4 *)
                                (uVar16 + ((longlong)
                                                   ((double)(ulonglong)uVar9 * (double)CONCAT44(uVar28,uVar27) *
                                                    ((double)(ulonglong)((int)uVar17 - 1) + (double)CONCAT44(uVar30,uVar29))) &
                                           0xffffffffU) * 4);
                FUN_1401c2f20(&local_c8);
                uVar16 = local_c8;
                uVar17 = local_c0;
            }
            *(undefined4 *)(lVar15 + -8 + lVar3) = 0;
            plVar4 = *(longlong **)(param_1 + 0x1588);
            lVar2 = *plVar4;
            uVar11 = FUN_140615dd0();
            (**(code **)(lVar2 + 0x10))(plVar4,uVar11,0,0,0,0,0);
            local_res8 = local_res8 + 1;
            uVar18 = uVar18 + 0x14;
        } while (local_res8 < *(ulonglong *)(param_1 + 0x3630));
    }
    *(undefined8 *)(param_1 + 0x3630) = 0;
    if (uVar16 != 0) {
        (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
    }
    return;
}



void FUN_14047f770(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined4 *puVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    undefined4 extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined auVar17 [16];
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined auStack776 [32];
    undefined4 local_2e8 [2];
    undefined4 local_2e0 [2];
    longlong local_2d8 [2];
    float local_2c8;
    float fStack708;
    float fStack700;
    longlong local_2b8 [2];
    undefined local_2a8 [16];
    undefined local_298 [16];
    undefined4 local_288;
    undefined4 local_284;
    int local_280;
    undefined4 local_27c;
    undefined4 local_278;
    undefined4 local_274;
    byte local_208;
    undefined4 local_1f8;
    undefined2 local_1f4;
    undefined4 *local_1f0;
    undefined4 local_170;
    undefined4 local_168 [2];
    undefined4 local_160;
    undefined4 local_15c;
    undefined4 local_158;
    undefined4 local_154;
    undefined4 local_120;
    undefined4 local_118;
    undefined4 local_114;
    undefined4 local_110;
    undefined4 local_10c;
    undefined4 local_d8;
    undefined local_d0 [4];
    undefined4 local_cc;
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack776;
    if (*(longlong *)(param_1 + 0x3640) != 0) {
        iVar4 = FUN_14018cdf0();
        puVar13 = (undefined8 *)0x0;
        if (*(longlong *)(param_1 + 0x3640) != 0) {
            fVar20 = 3.0;
            fVar21 = 0.5;
            puVar12 = puVar13;
            puVar14 = puVar13;
            puVar15 = (undefined8 *)0x1;
            do {
                lVar10 = *(longlong *)(param_1 + 0x3638);
                puVar16 = puVar15;
                if ((*(int *)(lVar10 + 0x38 + (longlong)puVar12) == 0) &&
                    (puVar16 = puVar13, *(int *)(lVar10 + 0x34 + (longlong)puVar12) - iVar4 < 1)) {
                    lVar6 = FUN_1403d90d0(DAT_140c65898);
                    if (lVar6 == 0) {
                        lVar6 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
                        lVar3 = lVar6;
                        lVar2 = *(longlong *)(lVar6 + 8);
                        while (lVar2 != 0) {
                            if (*(uint *)(lVar2 + 0x20) < *(uint *)(lVar10 + (longlong)puVar12)) {
                                lVar2 = *(longlong *)(lVar2 + 0x18);
                            }
                            else {
                                lVar3 = lVar2;
                                lVar2 = *(longlong *)(lVar2 + 0x10);
                            }
                        }
                        if ((lVar3 == lVar6) ||
                            (*(uint *)(lVar10 + (longlong)puVar12) < *(uint *)(lVar3 + 0x20))) {
                            local_2b8[0] = lVar6;
                            plVar7 = local_2b8;
                        }
                        else {
                            local_2d8[0] = lVar3;
                            plVar7 = local_2d8;
                        }
                        if ((*plVar7 != lVar6) && (*plVar7 != -0x28)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x3638) + 0x38 + (longlong)puVar12) = 1;
                            FUN_1407e4830(&local_288,0);
                            local_288 = *(undefined4 *)(lVar10 + (longlong)puVar12);
                            local_208 = local_208 | 1;
                            local_284 = 0x12;
                            local_1f8 = FUN_14018cdf0();
                            lVar6 = *(longlong *)(param_1 + 0x3638);
                            local_168[0] = 2;
                            local_120 = 0xe;
                            local_d8 = 0x16;
                            local_160 = *(undefined4 *)(lVar6 + 0x20 + (longlong)puVar12);
                            local_15c = *(undefined4 *)(lVar6 + 0x24 + (longlong)puVar12);
                            local_2e0[0] = 0x3f800000;
                            local_158 = *(undefined4 *)(lVar6 + 0x28 + (longlong)puVar12);
                            local_154 = 0;
                            local_10c = 0;
                            FUN_140482270(local_d0,local_2e0);
                            local_cc = 0;
                            iVar5 = *(int *)(lVar10 + 0xc + (longlong)puVar12);
                            if (iVar5 == 0) {
                                uVar1 = *(undefined4 *)(lVar10 + 4 + (longlong)puVar12);
                                LAB_14047f9bf:
                                lVar6 = FUN_1400b5df0(DAT_140c658f0,uVar1);
                                if (lVar6 != 0) {
                                    FUN_140453960();
                                    local_2e8[0] = extraout_XMM0_Da;
                                    FUN_140482270(local_d0,local_2e8);
                                }
                            }
                            else if ((iVar5 == 8) &&
                                     (lVar6 = FUN_1401e8c20(*(undefined4 *)(lVar10 + 4 + (longlong)puVar12)),
                                             lVar6 != 0)) {
                                uVar1 = *(undefined4 *)(lVar6 + 8);
                                goto LAB_14047f9bf;
                            }
                            FUN_1408fe3d0();
                            fStack708 = 0.0;
                            local_2c8 = extraout_XMM0_Da_00;
                            FUN_1408fc950();
                            fVar18 = fStack708 * fStack708;
                            fVar19 = local_2c8 * local_2c8 + fVar18 + 0.0;
                            auVar17 = rsqrtss(CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))),
                                              CONCAT412(fStack700 * fStack700,
                                                        CONCAT48(extraout_XMM0_Da_01 * extraout_XMM0_Da_01,
                                                                 CONCAT44(fVar18,fVar19))));
                            fVar18 = SUB164(auVar17,0);
                            fVar18 = (fVar20 - fVar19 * fVar18 * fVar18) * fVar21 * fVar18;
                            if (fVar18 <= 0.0) {
                                fVar18 = 0.0;
                            }
                            local_2a8 = CONCAT412(fVar18 * fStack700,
                                                  CONCAT48(fVar18 * extraout_XMM0_Da_01,
                                                           CONCAT44(fVar18 * fStack708,fVar18 * local_2c8)));
                            puVar8 = (undefined4 *)FUN_1401b3170(local_298);
                            local_118 = *puVar8;
                            local_114 = puVar8[1];
                            local_110 = puVar8[2];
                            local_1f4 = 3;
                            local_1f0 = local_168;
                            local_280 = 0x4468;
                            local_274 = *(undefined4 *)(lVar10 + 0xc + (longlong)puVar12);
                            local_27c = *(undefined4 *)(lVar10 + 4 + (longlong)puVar12);
                            local_278 = *(undefined4 *)(lVar10 + 8 + (longlong)puVar12);
                            local_280 = FUN_1403da850();
                            lVar10 = DAT_140c65918;
                            if (local_280 == 0) {
                                local_280 = 0x4468;
                            }
                            lVar6 = FUN_1404835c0(DAT_140c65918,local_280);
                            if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
                                uVar9 = FUN_140484600(lVar10 + 0x50);
                                puVar8 = (undefined4 *)FUN_1404846c0(uVar9);
                                if (puVar8 != (undefined4 *)0x0) {
                                    local_170 = *puVar8;
                                }
                            }
                            lVar10 = FUN_14018b280(0x37b0,8);
                            puVar11 = puVar13;
                            if (lVar10 != 0) {
                                puVar11 = (undefined8 *)FUN_140454380(lVar10);
                            }
                            iVar5 = FUN_140456960(puVar11);
                            if (iVar5 < 0) {
                                puVar16 = puVar15;
                                if (puVar11 != (undefined8 *)0x0) {
                                    (**(code **)*puVar11)(puVar11);
                                }
                            }
                            else {
                                *(undefined4 *)(puVar11 + 0x6c2) = *(undefined4 *)(param_1 + 8);
                                local_2e8[0] = local_288;
                                FUN_140003460(param_1 + 0x3618);
                                puVar16 = puVar15;
                            }
                            goto LAB_14047fbab;
                        }
                    }
                    *(undefined4 *)(*(longlong *)(param_1 + 0x3638) + 0x38 + (longlong)puVar12) = 1;
                    puVar16 = puVar15;
                }
                LAB_14047fbab:
                puVar14 = (undefined8 *)((longlong)puVar14 + 1);
                puVar12 = puVar12 + 8;
                puVar15 = puVar16;
            } while (puVar14 < *(undefined8 **)(param_1 + 0x3640));
            if ((int)puVar16 == 0) goto LAB_14047fc26;
        }
        *(undefined8 *)(param_1 + 0x3640) = 0;
    }
    LAB_14047fc26:
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack776);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14047fc40(longlong param_1,int param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    float fVar11;
    uint extraout_XMM0_Da;
    undefined extraout_var [12];
    undefined extraout_var_00 [12];
    undefined auVar13 [12];
    undefined auVar12 [16];
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    uint uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined auStack600 [32];
    ulonglong local_238;
    undefined4 local_230;
    undefined4 local_228;
    undefined2 local_224;
    uint local_220;
    ulonglong local_21c;
    undefined4 *local_210;
    ulonglong local_208;
    undefined4 local_200;
    uint uStack508;
    undefined4 local_1f8;
    undefined local_1e8 [16];
    undefined local_1d8 [4];
    undefined4 local_1d4;
    uint local_1d0;
    undefined4 local_1cc;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b4;
    undefined4 local_1ac;
    undefined local_1a8 [16];
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    undefined local_168 [4];
    float fStack356;
    undefined local_158 [16];
    undefined local_148 [16];
    undefined local_138 [16];
    undefined local_128 [16];
    ulonglong local_118;
    undefined8 uStack272;
    undefined local_108 [64];
    undefined *local_c8;
    undefined *local_c0;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack600;
    if (*(int *)(param_1 + 0x37a0) != param_2) {
        if (param_2 == 0) {
            if (((*(int *)(param_1 + 0x37a0) != 0) && (*(int *)(param_1 + 0x1cc) != 0)) &&
                (*(longlong *)(DAT_140c65898 + 0x6490) == param_1)) {
                FUN_1403a2550();
            }
            *(undefined4 *)(param_1 + 0x37a0) = 0;
        }
        else {
            *(int *)(param_1 + 0x37a0) = param_2;
            lVar5 = FUN_1403d90d0(DAT_140c65898);
            if ((((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 0x16e8), plVar1 != (longlong *)0x0)) &&
                 (iVar3 = (**(code **)(*plVar1 + 0x350))(plVar1,0xc1), iVar3 != 0)) &&
                (*(longlong *)(DAT_140c65898 + 0x6490) == param_1)) {
                (**(code **)(**(longlong **)(lVar5 + 0x16e8) + 0x378))
                        (*(longlong **)(lVar5 + 0x16e8),0xc1,&local_198,0);
                fVar11 = (float)((uint)(fStack356 - *(float *)(lVar5 + 0x11e4)) & 0x7fffffff);
                if (fVar11 < 1.2) {
                    if (fVar11 < 1.0) {
                        if (fVar11 < 0.8) {
                            uVar4 = 0x16e;
                            if (0.6 <= fVar11) {
                                uVar4 = 0x16f;
                            }
                        }
                        else {
                            uVar4 = 0x170;
                        }
                    }
                    else {
                        uVar4 = 0x171;
                    }
                }
                else {
                    uVar4 = 0x172;
                }
                uVar8 = 0;
                local_21c = 8;
                local_210 = (undefined4 *)FUN_14018c320(0,0x240,8);
                *local_210 = 1;
                local_220 = 1;
                local_210[2] = 0;
                FUN_14079a5d0(&local_220,local_168,0);
                fVar11 = 0.0;
                uVar19 = 0;
                uVar20 = 0;
                uVar21 = 0;
                local_1e8 = ZEXT816(0);
                FUN_1401c9800(&local_228,local_1e8);
                uVar18 = local_220;
                uVar10 = (ulonglong)local_220;
                if (local_220 == (uint)local_21c) {
                    if ((uint)local_21c == 0) {
                        local_21c._0_4_ = 8;
                    }
                    else {
                        local_21c._0_4_ = (uint)local_21c * 2;
                    }
                    local_21c = local_21c & 0xffffffff00000000 | (ulonglong)(uint)local_21c;
                    local_210 = (undefined4 *)FUN_14018c320(local_210,(ulonglong)(uint)local_21c * 0x48,8);
                }
                local_1e8 = CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar19,fVar11)));
                local_210[uVar10 * 0x12] = 8;
                local_210[uVar10 * 0x12 + 2] = local_228;
                *(undefined2 *)(local_210 + uVar10 * 0x12 + 3) = local_224;
                local_210[uVar10 * 0x12 + 4] = 0;
                uVar9 = uVar18 + 1;
                uVar10 = (ulonglong)uVar9;
                puVar6 = local_210;
                FUN_1401c9800(&local_228,local_1e8);
                auVar13 = extraout_var;
                if (uVar9 == (uint)local_21c) {
                    if ((uint)local_21c == 0) {
                        local_21c._0_4_ = 8;
                    }
                    else {
                        local_21c._0_4_ = (uint)local_21c * 2;
                    }
                    local_21c = local_21c & 0xffffffff00000000 | (ulonglong)(uint)local_21c;
                    puVar6 = (undefined4 *)FUN_14018c320(puVar6,(ulonglong)(uint)local_21c * 0x48,8);
                    auVar13 = extraout_var_00;
                    local_210 = puVar6;
                }
                local_220 = uVar18 + 2;
                puVar6[uVar10 * 0x12] = 0xb;
                puVar6[uVar10 * 0x12 + 2] = local_228;
                *(undefined2 *)(puVar6 + uVar10 * 0x12 + 3) = local_224;
                puVar6[uVar10 * 0x12 + 4] = 0;
                uVar19 = SUB164(_DAT_140c78440,0);
                uVar18 = SUB164(_DAT_140c78440 >> 0x20,0);
                uVar20 = SUB164(_DAT_140c78440 >> 0x40,0);
                uVar21 = SUB164(_DAT_140c78440 >> 0x60,0);
                fVar14 = fStack372 * fStack372;
                uVar10 = SUB128(CONCAT84(SUB168((ZEXT1216(auVar13) << 0x20) >> 0x40,0),fVar14),0);
                uVar2 = uVar10 & 0xffffffff;
                fVar15 = local_178 * local_178 + (float)uVar2 + 0.0;
                auVar12 = rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,uVar10 << 0x20 | uVar2)),
                                  CONCAT412(fStack364 * fStack364,
                                            CONCAT48(fStack368 * fStack368,CONCAT44(fVar14,fVar15))));
                fVar14 = SUB164(auVar12,0);
                fVar14 = (3.0 - fVar15 * fVar14 * fVar14) * 0.5 * fVar14;
                if (fVar14 <= fVar11) {
                    fVar14 = fVar11;
                }
                fVar15 = fStack388 * fStack388;
                fVar16 = local_188 * local_188 + fVar15 + 0.0;
                auVar12 = rsqrtss(CONCAT412(fVar15,CONCAT48(fVar15,CONCAT44(fVar15,fVar15))),
                                  CONCAT412(fStack380 * fStack380,
                                            CONCAT48(fStack384 * fStack384,CONCAT44(fVar15,fVar16))));
                fVar15 = SUB164(auVar12,0);
                fVar15 = (3.0 - fVar16 * fVar15 * fVar15) * 0.5 * fVar15;
                if (fVar15 <= fVar11) {
                    fVar15 = fVar11;
                }
                fVar16 = fStack404 * fStack404;
                fVar17 = local_198 * local_198 + fVar16 + 0.0;
                auVar12 = rsqrtss(CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))),
                                  CONCAT412(fStack396 * fStack396,
                                            CONCAT48(fStack400 * fStack400,CONCAT44(fVar16,fVar17))));
                fVar16 = SUB164(auVar12,0);
                fVar16 = (3.0 - fVar17 * fVar16 * fVar16) * 0.5 * fVar16;
                if (fVar16 <= fVar11) {
                    fVar16 = fVar11;
                }
                local_148 = ZEXT816(CONCAT44(fVar16 * fStack404,fVar16 * local_198));
                local_138 = ZEXT816(CONCAT44(fVar15 * fStack388,fVar15 * local_188));
                local_128 = ZEXT816(CONCAT44(fVar14 * fStack372,fVar14 * local_178));
                uStack272 = SUB168(CONCAT412(0x3f800000,ZEXT812(0)) >> 0x40,0);
                local_118 = SUB168(_DAT_140c78440,0) & 0xffffffff | (ulonglong)uVar18 << 0x20;
                FUN_1408fe3d0();
                local_1d0 = extraout_XMM0_Da;
                FUN_1408fc950();
                local_c8 = local_148;
                local_c0 = local_1d8;
                local_1a8 = CONCAT412(uVar21,CONCAT48(uVar20,CONCAT44(uVar18,uVar19)));
                local_1d0 = local_1d0 ^ 0x80000000;
                local_1e8 = CONCAT88(local_c0,local_c8);
                local_1d4 = 0;
                local_1c8 = 0;
                uStack452 = 0x3f800000;
                uStack448 = 0;
                uStack444 = 0;
                local_1cc = 0;
                local_1b4 = 0;
                local_1ac = 0;
                FUN_1401afb10(&local_c8,local_108);
                uVar7 = FUN_1401b2ed0(local_158,local_108);
                FUN_14079a780(&local_220,uVar7,0);
                puVar6 = local_210;
                uVar18 = local_220;
                local_228 = DAT_140c636a8;
                if ((*(int *)(param_1 + 0xd50) != 0) || (*(int *)(param_1 + 0x80) == 0x12)) {
                    if (local_220 != 0) {
                        do {
                            local_238 = 0;
                            iVar3 = FUN_1405b4ab0(param_1,&local_228,puVar6 + uVar8 * 0x12,0);
                            if (iVar3 < 0) goto LAB_1404801ff;
                            uVar9 = (int)uVar8 + 1;
                            uVar8 = (ulonglong)uVar9;
                        } while (uVar9 < uVar18);
                    }
                    uVar19 = local_228;
                    FUN_1405b4f50(param_1,local_228);
                    FUN_1405b5070(param_1,uVar19);
                    FUN_1405b82a0(param_1,uVar19);
                    for (lVar5 = *(longlong *)(param_1 + 0xf08); lVar5 != 0;
                         lVar5 = *(longlong *)(lVar5 + 0xf18)) {
                        FUN_1405b4ef0(lVar5,uVar19);
                    }
                }
                LAB_1404801ff:
                FUN_14057a190(DAT_140c65898,&local_220);
                uStack508 = 0;
                local_1f8 = 0;
                local_208 = (ulonglong)uVar4;
                local_200 = 0;
                uVar4 = FUN_1401ae6a0(0);
                local_230 = 1;
                local_238 = local_238 & 0xffffffff00000000 | (ulonglong)uStack508;
                uVar8 = local_208 & 0xffffffff;
                local_208 = local_208 & 0xffffffff | (ulonglong)uVar4 << 0x20;
                local_1f8 = 1;
                FUN_1404739b0(param_1,uVar8,local_200,uVar4);
                FUN_1403f4900(DAT_140c65898,0x37e,&local_208);
                FUN_14079a4f0(&local_220);
                FUN_14018b900(local_210,0);
            }
        }
    }
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack600);
    return;
}



longlong FUN_1404802d0(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res18 [2];
    undefined local_48 [8];
    undefined8 *local_40;
    int local_38 [2];
    undefined local_30 [8];
    longlong *local_28;

    lVar1 = *(longlong *)(param_1 + 8);
    lVar5 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar5 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((lVar5 == lVar1) || (*param_2 < *(int *)(lVar5 + 0x20))) {
        puVar4 = (undefined8 *)FUN_14018b280(0x80);
        *puVar4 = puVar4;
        puVar4[1] = puVar4;
        local_38[0] = *param_2;
        local_40 = puVar4;
        local_28 = (longlong *)FUN_14018b280(0x80,0);
        *local_28 = (longlong)local_28;
        local_28[1] = (longlong)local_28;
        local_res8 = *local_28;
        FUN_140481e00(local_res8,&local_res8,*puVar4,puVar4);
        local_res8 = lVar5;
        FUN_1404815c0(param_1,local_res18,&local_res8,local_38);
        FUN_1403fe250(local_30);
        FUN_14018b900(local_28,0);
        FUN_1403fe250(local_48);
        FUN_14018b900(puVar4,0);
        lVar5 = local_res18[0];
    }
    return lVar5 + 0x28;
}

