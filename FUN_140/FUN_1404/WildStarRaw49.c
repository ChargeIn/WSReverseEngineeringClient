//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14045b940(longlong param_1,short *param_2)

{
    undefined auVar1 [16];
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;

    if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x90),0);
    }
    lVar4 = 0;
    if (*param_2 != 0) {
        do {
            lVar4 = lVar4 + 1;
        } while (param_2[lVar4] != 0);
        lVar2 = 0;
        if (lVar4 != 0) {
            do {
                lVar4 = lVar2;
                lVar2 = lVar4 + 1;
            } while (param_2[lVar4 + 1] != 0);
            auVar1 = ZEXT816(2) * ZEXT816(lVar4 + 2U);
            uVar3 = SUB168(auVar1,0);
            if (SUB168(auVar1 >> 0x40,0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            uVar3 = FUN_14018b280(uVar3,0);
            FUN_1407db590(uVar3,param_2,(lVar4 + 2U) * 2);
            *(undefined8 *)(param_1 + 0x90) = uVar3;
            return;
        }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    return;
}



void FUN_14045ba00(longlong param_1)

{
    if ((*(uint *)(param_1 + 0x28) & 0x100) != 0) {
        *(undefined4 *)(param_1 + 0x1348) = 1;
        *(undefined4 *)(param_1 + 0x40) = 0;
        FUN_1407e4830(param_1 + 0x21c,0,0x2c);
        return;
    }
    *(undefined4 *)(param_1 + 0x1348) = 0;
    return;
}



uint FUN_14045ba60(longlong param_1)

{
    ulonglong uVar1;
    int iVar2;

    if (*(longlong *)(param_1 + 0x100) == 0) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
            return (uint)*(byte *)(*(longlong *)(param_1 + 0x18) + 0x158);
        }
        return 1;
    }
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 < 1) {
        return 0;
    }
    if (0x18 < iVar2) {
        return 5;
    }
    iVar2 = iVar2 + -1;
    uVar1 = (longlong)iVar2 / 6 + ((longlong)iVar2 >> 0x3f) & 0xffffffff;
    return iVar2 + ((int)uVar1 + (int)(uVar1 >> 0x1f)) * -6;
}



undefined4 * FUN_14045bac0(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    undefined *puVar7;
    longlong lVar8;

    if (*(int *)(param_1 + 0x80) == 0) {
        if (*(int *)(param_1 + 0x250) != 0) {
            iVar5 = DAT_140c46c40;
            if (*DAT_140c63750 < DAT_140c46c40) {
                iVar5 = *DAT_140c63750;
            }
            lVar8 = (longlong)iVar5 * 0x10;
            uVar2 = *(undefined4 *)(lVar8 + 0x140c46c54);
            uVar3 = *(undefined4 *)(lVar8 + 0x140c46c58);
            uVar4 = *(undefined4 *)(lVar8 + 0x140c46c5c);
            *param_2 = *(undefined4 *)(&DAT_140c46c50 + lVar8);
            param_2[1] = uVar2;
            param_2[2] = uVar3;
            param_2[3] = uVar4;
            return param_2;
        }
        if ((*(int *)(param_1 + 0x130) != 0) ||
            ((lVar8 = *(longlong *)(DAT_140c65898 + 0x78), lVar8 != 0 &&
                                                           ((*(int *)(param_1 + 0x124) == *(int *)(lVar8 + 8) ||
                                                             ((*(longlong *)(param_1 + 0x128) != 0 &&
                                                               (*(longlong *)(&DAT_000018a0 + lVar8) == *(longlong *)(param_1 + 0x128))))))))) {
            iVar5 = DAT_140c46b80;
            if (*DAT_140c63750 < DAT_140c46b80) {
                iVar5 = *DAT_140c63750;
            }
            lVar8 = (longlong)iVar5 * 0x10;
            uVar2 = *(undefined4 *)(lVar8 + 0x140c46b94);
            uVar3 = *(undefined4 *)(lVar8 + 0x140c46b98);
            uVar4 = *(undefined4 *)(lVar8 + 0x140c46b9c);
            *param_2 = *(undefined4 *)(&DAT_140c46b90 + lVar8);
            param_2[1] = uVar2;
            param_2[2] = uVar3;
            param_2[3] = uVar4;
            return param_2;
        }
        iVar5 = FUN_14045bd30();
        if ((iVar5 != 0) && (iVar5 = FUN_140482450(), iVar5 != 0)) {
            iVar5 = DAT_140c47000;
            if (*DAT_140c63750 < DAT_140c47000) {
                iVar5 = *DAT_140c63750;
            }
            lVar8 = (longlong)iVar5;
            puVar7 = &DAT_140c47010;
            goto LAB_14045bcad;
        }
    }
    lVar8 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar8 == 0) {
        LAB_14045bc8a:
        iVar5 = *DAT_140c63750;
    }
    else {
        iVar5 = FUN_14045a950(lVar8,*(undefined4 *)(param_1 + 8));
        if (iVar5 == 0) {
            iVar5 = *DAT_140c63750;
            LAB_14045bc68:
            iVar6 = DAT_140c46b80;
            if (iVar5 < DAT_140c46b80) {
                iVar6 = iVar5;
            }
            lVar8 = (longlong)iVar6;
            puVar7 = &DAT_140c46b90;
            goto LAB_14045bcad;
        }
        if (iVar5 != 1) {
            if (iVar5 == 2) {
                lVar8 = FUN_140605340(DAT_140c65898 + 0x6c10,param_1 + 0x1a0);
                iVar5 = *DAT_140c63750;
                if (lVar8 == 0) {
                    iVar6 = DAT_140c46ac0;
                    if (iVar5 < DAT_140c46ac0) {
                        iVar6 = iVar5;
                    }
                    lVar8 = (longlong)iVar6;
                    puVar7 = &DAT_140c46ad0;
                }
                else {
                    iVar6 = DAT_140c47180;
                    if (iVar5 < DAT_140c47180) {
                        iVar6 = iVar5;
                    }
                    lVar8 = (longlong)iVar6;
                    puVar7 = &DAT_140c47190;
                }
                goto LAB_14045bcad;
            }
            goto LAB_14045bc8a;
        }
        iVar5 = *DAT_140c63750;
        if (*(int *)(param_1 + 0x108) == *(int *)(lVar8 + 8)) goto LAB_14045bc68;
    }
    iVar6 = DAT_140c46a00;
    if (iVar5 < DAT_140c46a00) {
        iVar6 = iVar5;
    }
    lVar8 = (longlong)iVar6;
    puVar7 = &DAT_140c46a10;
    LAB_14045bcad:
    puVar1 = (undefined4 *)(puVar7 + lVar8 * 0x10);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    return param_2;
}



void FUN_14045bcd0(longlong param_1,int param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    *(int *)(param_1 + 0x124) = param_2;
    *(longlong *)(param_1 + 0x128) = param_3;
    if ((param_2 == 0) && (param_3 == 0)) {
        *(undefined4 *)(param_1 + 0x130) = 0;
    }
    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x78);
    if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
        *(undefined4 *)(lVar2 + 0x6f98) = 1;
    }
    return;
}



ulonglong FUN_14045bd30(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = *(ulonglong *)(param_1 + 0x18);
    if (uVar2 == 0) {
        return uVar2;
    }
    if ((*(uint *)(uVar2 + 0x90) & 0x400) == 0) {
        if ((DAT_140dc2908 & 1) == 0) {
            DAT_140dc2908 = DAT_140dc2908 | 1;
            lVar3 = FUN_140200220(0x3bd);
            if (lVar3 == 0) {
                DAT_140dc290c = 6;
            }
            else {
                DAT_140dc290c = *(int *)(lVar3 + 4);
            }
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x14);
        if ((0x18 < iVar1) || (iVar1 <= DAT_140dc290c)) {
            return (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x18) + 4) == 5);
        }
    }
    return 1;
}



void FUN_14045bdc0(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;
    char *pcVar5;
    uint uVar6;
    uint uVar7;
    undefined *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint local_res10 [2];

    uVar9 = 0;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    uVar7 = 0;
    uVar6 = uVar7;
    local_res10[0] = param_2;
    if (lVar1 == 0) goto LAB_14045be75;
    uVar7 = *(uint *)(lVar1 + 8);
    uVar6 = *(uint *)(lVar1 + 0x108);
    lVar10 = DAT_140c65898;
    if (param_2 == uVar7) {
        if (((*(uint *)(param_1 + 0x108) == uVar7) || (param_3 == 0)) ||
            (uVar6 == *(uint *)(param_1 + 8))) goto LAB_14045be75;
        if (lVar1 != 0) {
            uVar9 = (ulonglong)uVar6;
        }
        puVar8 = &DAT_1409edfa4;
        pcVar5 = "TargetedByUnit";
    }
    else {
        if (*(uint *)(param_1 + 0x108) != uVar7) goto LAB_14045be75;
        lVar4 = param_1;
        iVar3 = FUN_14045bed0(param_1,uVar7);
        if ((iVar3 == 0) || (uVar6 != *(uint *)(lVar4 + 8))) goto LAB_14045be75;
        if (lVar1 != 0) {
            uVar9 = (ulonglong)uVar6;
        }
        puVar8 = &DAT_1409ee6dc;
        pcVar5 = "UnTargetedByUnit";
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar10 + 0x7340),pcVar5,puVar8,uVar9 & 0xffffffff);
    LAB_14045be75:
    if (param_3 == 0) {
        FUN_140481460(param_1 + 0x148,local_res10);
    }
    else {
        piVar2 = (int *)FUN_140032640();
        *piVar2 = param_3;
    }
    if (((lVar1 != 0) && (param_2 == uVar7)) && (uVar6 == *(uint *)(param_1 + 8))) {
        FUN_14055bac0(DAT_140c65898);
    }
    return;
}



undefined4 FUN_14045bed0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x150);
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
        return *(undefined4 *)(local_res8 + 0x24);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14045bf30(longlong param_1,int param_2,int param_3)

{
    bool bVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    uint uVar6;
    longlong lVar7;
    uint uVar8;
    undefined8 local_res20;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined8 local_58;
    longlong local_50;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 local_40;
    undefined4 uStack60;

    if (0xd < param_2) {
        local_78 = &PTR_LAB_140b5e648;
        local_70 = 0;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_78);
        local_58 = local_78;
        local_res20 = 0x141e022c8;
        local_48 = SUB84(local_68,0);
        uStack68 = (undefined4)((ulonglong)local_68 >> 0x20);
        local_50 = local_70;
        iVar2 = FUN_1401971e0(&DAT_140c8ac68,5,&local_res20,&local_58);
        local_78 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_68);
        if (iVar2 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    if ((*(int *)(param_1 + 0x1b8) == param_2) && (*(int *)(param_1 + 0x1cc) == param_3)) {
        return 0;
    }
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1b8);
    iVar2 = *(int *)(param_1 + 0x1cc);
    *(int *)(param_1 + 0x1b8) = param_2;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(int *)(param_1 + 0x1cc) = param_3;
    *(int *)(param_1 + 0x1d0) = iVar2;
    if (param_3 == iVar2) {
        return 0;
    }
    FUN_140474400(param_1,param_3,0);
    if (param_3 != 0) {
        FUN_140474660(param_1,param_3);
        return 0;
    }
    if (*(longlong *)(param_1 + 0xcc0) == 0) {
        return 0;
    }
    uVar3 = FUN_140467ed0();
    *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | 8;
    uVar8 = *(uint *)(param_1 + 0x142c);
    bVar1 = false;
    if (((uVar3 & 0xfffffff6) == 0) && (bVar1 = false, uVar3 != 1)) {
        bVar1 = true;
        uVar8 = 0x3f;
    }
    if (*(uint *)(param_1 + 0x1428) == uVar8) {
        return 0;
    }
    if (uVar8 == 0x3f) {
        if (((bVar1) || (*(longlong *)(param_1 + 0x16e8) == 0)) ||
            ((*(int *)(param_1 + 0x1b8) != 0 ||
              (((*(int *)(param_1 + 0x1bc) != 0 || (iVar2 = FUN_140470540(param_1,0x1a34), iVar2 == 0)) ||
                (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                        (*(longlong **)(param_1 + 0x16e8),iVar2), iVar4 == 0)))))) {
            FUN_140195d70(param_1 + 0x1430);
            FUN_140195d70(param_1 + 0x1478);
            (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xa8))(*(longlong **)(param_1 + 0xcc0),3,3);
            *(undefined4 *)(param_1 + 0x14c0) = 1;
            if (*(longlong *)(param_1 + 0x16e8) != 0) {
                FUN_140471ef0(param_1,1,1);
                FUN_140471ef0(param_1,1);
            }
        }
        else {
            uVar5 = FUN_1401ae6a0(0,0xffff);
            lVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                    (*(longlong **)(param_1 + 0x16e8),iVar2,uVar5);
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                    (*(longlong **)(param_1 + 0x16e8),iVar2,uVar5,0x39);
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                    (*(longlong **)(param_1 + 0x16e8),iVar2,uVar5,0x37);
            if (uVar6 < uVar3) {
                uVar3 = uVar6;
            }
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                    (*(longlong **)(param_1 + 0x16e8),iVar2,uVar5,0x38);
            if (uVar6 == 0xffffffff) {
                uVar6 = *(uint *)(lVar7 + 0x14) >> 1;
            }
            if (uVar3 == 0xffffffff) {
                uVar3 = uVar6;
            }
            local_58._0_4_ = 0;
            if (*(uint *)(lVar7 + 0x14) < uVar3) {
                uVar3 = *(uint *)(lVar7 + 0x14);
            }
            local_48 = 0x40471db0;
            uStack68 = 1;
            local_40 = 0;
            uStack60 = 0;
            local_50 = param_1;
            FUN_140195960(param_1 + 0x1430,uVar3,&local_58,4);
            if (*(uint *)(lVar7 + 0x14) < uVar6) {
                uVar6 = *(uint *)(lVar7 + 0x14);
            }
            local_58 = (undefined **)((ulonglong)local_58._4_4_ << 0x20);
            local_48 = 0x40471e00;
            uStack68 = 1;
            local_40 = 0;
            uStack60 = 0;
            local_50 = param_1;
            FUN_140195960(param_1 + 0x1478,uVar6,&local_58,4);
            local_58 = (undefined **)CONCAT44(uVar5,iVar2);
            local_50 = 0x3f800000;
            local_48 = 0x21;
            uStack68 = 2;
            local_40 = 0;
            uStack60 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),6,&local_58);
        }
        goto LAB_14045c4b2;
    }
    if (*(uint *)(param_1 + 0x1428) != 0x3f) goto LAB_14045c4b2;
    if ((((bVar1) || (*(longlong *)(param_1 + 0x16e8) == 0)) || (*(int *)(param_1 + 0x1b8) != 0)) ||
        ((*(int *)(param_1 + 0x1bc) != 0 ||
          (iVar2 = FUN_1404705d0(param_1,(*(int *)(param_1 + 0x2ac) != 0) + 0x1a35,uVar3,0), iVar2 == 0)
        ))) {
        LAB_14045c444:
        local_58 = (undefined **)((ulonglong)local_58 & 0xffffffff00000000);
        local_48 = 0x40471e50;
        uStack68 = 1;
        local_40 = 0;
        uStack60 = 0;
        local_50 = param_1;
        FUN_140195960(param_1 + 0x1430,0x96,&local_58,4);
        local_48 = 0x40471ea0;
        uStack68 = 1;
        local_58 = (undefined **)((ulonglong)local_58 & 0xffffffff00000000);
        local_40 = 0;
        uStack60 = 0;
        local_50 = param_1;
        FUN_140195960(param_1 + 0x1478,0x96,&local_58,4);
    }
    else {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x198))
                (*(longlong **)(param_1 + 0x16e8),iVar2);
        if (iVar4 == 0) goto LAB_14045c444;
        uVar5 = FUN_1401ae6a0(0);
        lVar7 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                (*(longlong **)(param_1 + 0x16e8),iVar2,uVar5);
        uVar3 = *(uint *)(lVar7 + 0x18);
        local_58._0_4_ = 0;
        local_48 = 0x40471e50;
        uStack68 = 1;
        local_40 = 0;
        uStack60 = 0;
        if (*(uint *)(lVar7 + 0x14) < uVar3) {
            uVar3 = *(uint *)(lVar7 + 0x14);
        }
        local_50 = param_1;
        FUN_140195960(param_1 + 0x1430,uVar3,&local_58,4);
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (*(uint *)(lVar7 + 0x14) < uVar3) {
            uVar3 = *(uint *)(lVar7 + 0x14);
        }
        local_58 = (undefined **)((ulonglong)local_58._4_4_ << 0x20);
        local_48 = 0x40471ea0;
        uStack68 = 1;
        local_40 = 0;
        uStack60 = 0;
        local_50 = param_1;
        FUN_140195960(param_1 + 0x1478,uVar3,&local_58,4);
        local_58 = (undefined **)CONCAT44(uVar5,iVar2);
        local_50 = 0x3f800000;
        local_48 = 0x21;
        uStack68 = 2;
        local_40 = 0;
        uStack60 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                (*(longlong **)(param_1 + 0x16e8),6,&local_58);
    }
    *(undefined4 *)(param_1 + 0x14c0) = 1;
    LAB_14045c4b2:
    if ((uVar8 & 4) != 0) {
        FUN_140195d70(param_1 + 0x1398);
    }
    if ((uVar8 & 0x10) != 0) {
        FUN_140195d70(param_1 + 0x13e0);
    }
    *(uint *)(param_1 + 0x1428) = uVar8;
    return 0;
}



void FUN_14045d310(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    int *piVar4;
    uint *puVar5;
    longlong lVar6;
    uint uVar7;
    uint *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    longlong lVar13;
    int *piVar14;
    undefined8 *puVar15;
    int *piVar16;
    longlong *plVar17;
    uint *puVar18;
    ulonglong uVar19;
    longlong lVar20;
    longlong local_res10;
    undefined auStack168 [32];
    ulonglong local_88;
    longlong *local_80;
    undefined4 local_78;
    ulonglong local_68;
    int local_60;
    longlong local_58;
    undefined8 local_50;
    undefined4 local_48;
    ulonglong local_40;

    uVar19 = (ulonglong)*(int *)(param_2 + 4);
    if (0x1b < *(int *)(param_2 + 4)) {
        return;
    }
    local_40 = 0x14045d353;
    FUN_1400035b0(0x33,3,0,(&PTR_u_Stun_140c38870)[uVar19]);
    lVar20 = *(longlong *)(param_1 + 0x498);
    local_res10 = lVar20;
    lVar13 = *(longlong *)(lVar20 + 8);
    while (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x20) < (int)uVar19) {
            lVar13 = *(longlong *)(lVar13 + 0x18);
        }
        else {
            local_res10 = lVar13;
            lVar13 = *(longlong *)(lVar13 + 0x10);
        }
    }
    if ((local_res10 == lVar20) || ((int)uVar19 < *(int *)(local_res10 + 0x20))) {
        local_res10 = lVar20;
    }
    if (local_res10 != lVar20) {
        piVar16 = (int *)0x0;
        piVar4 = (*(int ***)(local_res10 + 0x28))[1];
        if (piVar4 != (int *)0x0) {
            iVar1 = *(int *)(param_2 + 8);
            piVar14 = **(int ***)(local_res10 + 0x28);
            do {
                if (*piVar14 == iVar1) {
                    plVar17 = *(longlong **)(param_1 + 0x15d0);
                    goto joined_r0x00014045d3e9;
                }
                piVar16 = (int *)((longlong)piVar16 + 1);
                piVar14 = piVar14 + 1;
            } while (piVar16 < piVar4);
        }
    }
    FUN_14045d890(param_1,uVar19 & 0xffffffff,*(undefined4 *)(param_2 + 8));
    return;
    joined_r0x00014045d3e9:
    if (plVar17 == (longlong *)0x0) goto LAB_14045d402;
    if ((iVar1 == 0) || (*(int *)((longlong)plVar17 + 100) == iVar1)) goto LAB_14045d424;
    plVar17 = (longlong *)plVar17[6];
    goto joined_r0x00014045d3e9;
    code_r0x00014045d554:
    puVar18 = (uint *)((longlong)puVar18 + 1);
    puVar8 = puVar8 + 1;
    if (puVar5 <= puVar18) goto LAB_14045d560;
    goto LAB_14045d550;
    LAB_14045d402:
    for (plVar17 = *(longlong **)(param_1 + 0x15d8); plVar17 != (longlong *)0x0;
         plVar17 = (longlong *)plVar17[8]) {
        if ((iVar1 == 0) || (*(int *)((longlong)plVar17 + 100) == iVar1)) goto LAB_14045d424;
    }
    plVar17 = (longlong *)0x0;
    LAB_14045d424:
    if (plVar17 != (longlong *)0x0) {
        local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
        iVar1 = *(int *)(plVar17 + 0x2a);
        lVar20 = (longlong)iVar1;
        local_60 = iVar1;
        if (((iVar1 < 0x1c) &&
             (local_58 = *(longlong *)(DAT_140c65a08 + 0x28 + lVar20 * 8), local_58 != 0)) &&
            (lVar13 = plVar17[10], lVar13 != 0)) {
            local_78 = *(undefined4 *)(param_1 + 8);
            uVar7 = *(uint *)((longlong)plVar17 + 100);
            uVar2 = *(uint *)(lVar13 + 0x5c);
            local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000 | (ulonglong)uVar7);
            local_88 = local_88 & 0xffffffff00000000 | (ulonglong)uVar2;
            FUN_1400035b0(0x33,3,0,(&PTR_u_Stun_140c38870)[lVar20]);
            uVar19 = *(ulonglong *)(param_1 + 0x498);
            local_68 = uVar19;
            uVar11 = *(ulonglong *)(uVar19 + 8);
            while (uVar11 != 0) {
                if (*(int *)(uVar11 + 0x20) < iVar1) {
                    uVar11 = *(ulonglong *)(uVar11 + 0x18);
                }
                else {
                    local_68 = uVar11;
                    uVar11 = *(ulonglong *)(uVar11 + 0x10);
                }
            }
            if ((local_68 == uVar19) || (iVar1 < *(int *)(local_68 + 0x20))) {
                local_68 = uVar19;
            }
            if (local_68 != uVar19) {
                puVar18 = (uint *)0x0;
                puVar5 = (*(uint ***)(local_68 + 0x28))[1];
                if (puVar5 != (uint *)0x0) {
                    puVar8 = **(uint ***)(local_68 + 0x28);
                    LAB_14045d550:
                    if (*puVar8 != uVar7) goto code_r0x00014045d554;
                    FUN_1401c2f20();
                    puVar9 = (undefined8 *)FUN_14018b280();
                    puVar15 = (undefined8 *)0x0;
                    if (puVar9 != (undefined8 *)0x0) {
                        puVar9[1] = 0x1c;
                        puVar9[2] = 0;
                        puVar9[3] = 0;
                        puVar9[4] = 0;
                        *(undefined4 *)(puVar9 + 5) = 0;
                        *puVar9 = &PTR_LAB_140b66fc8;
                        puVar9[6] = 0;
                        puVar9[7] = 0;
                        puVar9[8] = 0;
                        puVar15 = puVar9;
                    }
                    *(int *)(puVar15 + 1) = iVar1;
                    *(uint *)(puVar15 + 3) = uVar2;
                    uVar3 = *(undefined4 *)((longlong)plVar17 + 0xbc);
                    *(uint *)((longlong)puVar15 + 0x1c) = uVar7;
                    *(undefined4 *)(puVar15 + 5) = uVar3;
                    puVar15[4] = *(undefined8 *)(lVar13 + 0x138);
                    local_48 = 0;
                    local_50 = 0;
                    uVar7 = (**(code **)(*plVar17 + 0x20))();
                    lVar13 = plVar17[0x16];
                    local_68 = local_68 & 0xffffffff00000000 | (ulonglong)uVar7;
                    if (lVar13 != 0) {
                        *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(lVar13 + 0x5c);
                        local_50 = *(undefined8 *)(lVar13 + 0x50);
                        local_48 = *(undefined4 *)(lVar13 + 0x58);
                    }
                    lVar20 = lVar20 + 0x2d;
                    lVar6 = *(longlong *)(param_1 + 8 + lVar20 * 0x10);
                    lVar13 = lVar6 + 1;
                    lVar10 = FUN_14018db00(*(undefined8 *)(param_1 + lVar20 * 0x10),lVar13,8);
                    *(undefined8 **)(lVar10 + lVar6 * 8) = puVar15;
                    lVar6 = *(longlong *)(param_1 + lVar20 * 0x10);
                    if (lVar6 != lVar10) {
                        FUN_1407db590(lVar10,lVar6,*(longlong *)(param_1 + 8 + lVar20 * 0x10) << 3);
                        lVar6 = *(longlong *)(param_1 + lVar20 * 0x10);
                        if (lVar6 != 0) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                        }
                        *(longlong *)(param_1 + lVar20 * 0x10) = lVar10;
                    }
                    *(longlong *)(param_1 + 8 + lVar20 * 0x10) = lVar13;
                    FUN_14046c2c0();
                    lVar20 = local_58;
                    plVar17 = puVar15 + 6;
                    uVar19 = 0;
                    do {
                        uVar11 = 0;
                        if (*(int *)(lVar20 + uVar19 * 4 + 0x2c) != 0) {
                            uVar11 = FUN_140248f00();
                        }
                        if (*(int *)((longlong)&local_50 + uVar19 * 4) != 0) {
                            uVar11 = FUN_140248f00();
                        }
                        if ((uVar11 != 0) && (*plVar17 == 0)) {
                            local_88 = 0;
                            local_80 = plVar17;
                            FUN_140578770();
                        }
                        uVar11 = local_68;
                        uVar19 = uVar19 + 1;
                        plVar17 = plVar17 + 1;
                    } while (uVar19 < 3);
                    FUN_1403d90d0(DAT_140c65898,local_68 & 0xffffffff);
                    FUN_14045de60(param_1,puVar15);
                    lVar20 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
                    iVar1 = local_60;
                    if ((lVar20 != 0) && (*(int *)(lVar20 + 0x80) == 7)) {
                        FUN_1403d90d0(DAT_140c65898,uVar11 & 0xffffffff);
                        uVar12 = FUN_14047b6d0(param_1);
                        FUN_14045de60(uVar12,puVar15);
                    }
                    local_88 = local_88 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 8);
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ApplyCCState",&DAT_1409e9c14,iVar1)
                            ;
                    if ((iVar1 == 0x17) &&
                        (lVar20 = *(longlong *)(DAT_140c65898 + 0x78), lVar13 = FUN_14047dca0(param_1),
                                lVar13 == lVar20)) {
                        local_78 = 1;
                        local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
                        local_88 = local_88 & 0xffffffff00000000;
                        FUN_140437a10(DAT_140c658d8,0x183,0,0);
                    }
                    goto LAB_14045d58b;
                }
            }
            LAB_14045d560:
            FUN_14045d890(param_1,iVar1,uVar7);
        }
        LAB_14045d58b:
        FUN_1407db4f0(local_40 ^ (ulonglong)auStack168);
    }
    return;
}



void FUN_14045d890(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    int **ppiVar3;
    int *piVar4;
    int **ppiVar5;
    int **ppiVar6;
    longlong local_res8;
    int local_res18 [2];
    int local_38 [2];
    int **local_30;
    undefined local_28 [16];

    local_res18[0] = param_3;
    FUN_1400035b0(0x33,3,0,(&PTR_u_Stun_140c38870)[param_2],param_3,*(undefined4 *)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 0x498);
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
    ppiVar5 = (int **)0x0;
    if (local_res8 == *(longlong *)(param_1 + 0x498)) {
        ppiVar3 = (int **)FUN_14018b280(0x10,0);
        ppiVar6 = ppiVar5;
        if (ppiVar3 != (int **)0x0) {
            ppiVar3[1] = (int *)0x0;
            *ppiVar3 = (int *)0x0;
            ppiVar6 = ppiVar3;
        }
        local_38[0] = param_2;
        local_30 = ppiVar6;
        FUN_14004f4f0(param_1 + 0x490,local_28,local_38);
    }
    else {
        ppiVar6 = *(int ***)(local_res8 + 0x28);
    }
    if ((int **)ppiVar6[1] != (int **)0x0) {
        piVar4 = *ppiVar6;
        do {
            if (*piVar4 == param_3) {
                return;
            }
            ppiVar5 = (int **)((longlong)ppiVar5 + 1);
            piVar4 = piVar4 + 1;
        } while (ppiVar5 < ppiVar6[1]);
    }
    FUN_140003460(ppiVar6,local_res18);
    return;
}



void FUN_14045d9c0(longlong param_1,longlong param_2,int param_3)

{
    int iVar1;
    int **ppiVar2;
    undefined8 *puVar3;
    bool bVar4;
    int iVar5;
    int *piVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    int *piVar10;
    longlong **pplVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong local_res8;

    lVar13 = (longlong)param_3;
    piVar10 = (int *)0x0;
    FUN_1400035b0(0x33,3,0,(&PTR_u_Stun_140c38870)[lVar13],*(undefined4 *)(param_2 + 8),
                  *(undefined4 *)(param_1 + 8));
    lVar7 = *(longlong *)(param_1 + 0x498);
    local_res8 = lVar7;
    lVar9 = *(longlong *)(lVar7 + 8);
    while (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x20) < param_3) {
            lVar9 = *(longlong *)(lVar9 + 0x18);
        }
        else {
            local_res8 = lVar9;
            lVar9 = *(longlong *)(lVar9 + 0x10);
        }
    }
    if ((local_res8 == lVar7) || (param_3 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar7;
    }
    if (local_res8 != lVar7) {
        ppiVar2 = *(int ***)(local_res8 + 0x28);
        if (*(int *)(param_2 + 0xc) == 0) {
            ppiVar2[1] = piVar10;
        }
        else {
            piVar10 = (int *)0x0;
            if (ppiVar2[1] != (int *)0x0) {
                piVar6 = *ppiVar2;
                do {
                    if (*piVar6 == *(int *)(param_2 + 0xc)) {
                        FUN_1401c2f20();
                        break;
                    }
                    piVar10 = (int *)((longlong)piVar10 + 1);
                    piVar6 = piVar6 + 1;
                } while (piVar10 < ppiVar2[1]);
            }
        }
    }
    lVar7 = DAT_140c65898;
    if (*(longlong *)(param_1 + 0x2d8 + lVar13 * 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x18a8) = 1;
        lVar9 = *(longlong *)(lVar7 + 0x78);
        if ((lVar9 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar9 + 8))) {
            *(undefined4 *)(lVar7 + 0x6f98) = 1;
        }
        FUN_14045e1d0(param_1);
        lVar7 = FUN_1403d90d0(DAT_140c65898);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x80) == 7)) {
            plVar8 = (longlong *)FUN_1403d90d0(DAT_140c65898);
            if ((plVar8 == (longlong *)0x0) || (iVar5 = (**(code **)(*plVar8 + 0x20))(plVar8), iVar5 == 0)
                    ) {
                plVar8 = (longlong *)0x0;
            }
            FUN_14045e1d0(plVar8);
        }
        uVar12 = 0;
        if (*(longlong *)(param_1 + 0x2d8 + lVar13 * 0x10) != 0) {
            plVar8 = (longlong *)((lVar13 + 0x2d) * 0x10 + param_1);
            LAB_14045db60:
            lVar7 = *(longlong *)(*plVar8 + uVar12 * 8);
            iVar5 = *(int *)(lVar7 + 0x18);
            iVar1 = *(int *)(lVar7 + 0x1c);
            if (((*(int *)(param_2 + 8) == 0) || (iVar5 == *(int *)(param_2 + 8))) &&
                ((*(int *)(param_2 + 0xc) == 0 || (*(int *)(param_2 + 0xc) == iVar1)))) {
                for (lVar9 = *(longlong *)(param_1 + 0x15d0); lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x30)) {
                    if (((iVar5 == 0) || (*(int *)(*(longlong *)(lVar9 + 0x50) + 0x5c) == iVar5)) &&
                        ((iVar1 == 0 || (*(int *)(lVar9 + 100) == iVar1)))) goto LAB_14045dc10;
                }
                for (lVar9 = *(longlong *)(param_1 + 0x15d8); lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x40)) {
                    if (((iVar5 == 0) || (*(int *)(*(longlong *)(lVar9 + 0x50) + 0x5c) == iVar5)) &&
                        ((iVar1 == 0 || (*(int *)(lVar9 + 100) == iVar1)))) goto LAB_14045dc10;
                }
                lVar9 = 0;
                goto LAB_14045dbf3;
            }
            uVar12 = uVar12 + 1;
            goto LAB_14045dca1;
        }
        LAB_14045dcbb:
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RemoveCCState",&DAT_1409e9bec,param_3,
                      *(undefined4 *)(param_1 + 8));
    }
    return;
    LAB_14045dc10:
    if ((lVar9 == 0) || (*(int *)(*(longlong *)(lVar9 + 0xb0) + 0x10) == 4)) {
        LAB_14045dbf3:
        if (((*(int *)(param_2 + 0x10) == 0) || (lVar9 == 0)) || ((*(byte *)(lVar9 + 0x154) & 4) == 0))
        {
            if (((*(uint *)(param_1 + 0x1070) & 0x18000) == 0) &&
                ((*(uint *)(param_1 + 0x1070) >> 0x11 & 1) == 0)) {
                bVar4 = false;
            }
            else {
                bVar4 = true;
            }
            pplVar11 = (longlong **)(lVar7 + 0x30);
            lVar7 = 3;
            do {
                if (*pplVar11 != (longlong *)0x0) {
                    lVar9 = **pplVar11;
                    if (bVar4) {
                        (**(code **)(lVar9 + 0x28))();
                    }
                    else {
                        (**(code **)(lVar9 + 0x20))();
                    }
                }
                pplVar11 = pplVar11 + 1;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            puVar3 = *(undefined8 **)(*plVar8 + uVar12 * 8);
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
            *(undefined8 *)(*plVar8 + uVar12 * 8) = 0;
            FUN_140007270(plVar8);
        }
        else {
            uVar12 = uVar12 + 1;
        }
    }
    else {
        uVar12 = uVar12 + 1;
    }
    LAB_14045dca1:
    if (*(ulonglong *)(param_1 + 0x2d8 + lVar13 * 0x10) <= uVar12) goto LAB_14045dcbb;
    goto LAB_14045db60;
}



void FUN_14045dd00(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong local_28;
    undefined8 local_20;
    undefined4 local_18;

    uVar4 = 0;
    do {
        local_28 = uVar4 << 0x20;
        local_20 = 0;
        local_18 = 0;
        if ((int)uVar4 < 0x1c) {
            FUN_14045d9c0(param_1,&local_28,uVar4 & 0xffffffff);
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x1c);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x498)) {
        do {
            plVar1 = *(longlong **)(lVar5 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar5 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar5 = lVar3;
                        lVar3 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar3) {
                    lVar5 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar5 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar5 != *(longlong *)(param_1 + 0x498));
    }
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0x490,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x10) = *(longlong *)(param_1 + 0x498);
        *(undefined8 *)(*(longlong *)(param_1 + 0x498) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x18) = *(longlong *)(param_1 + 0x498);
        *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
    return;
}



void FUN_14045de60(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 8);
        uVar6 = *(undefined4 *)(param_2 + 0x1c);
        uVar5 = *(undefined4 *)(param_2 + 0x18);
        FUN_1400035b0();
        lVar3 = FUN_1404cc920();
        if ((*(int *)(param_1 + 0x80) != 0x14) && (*(int *)(param_1 + 0x80) != 0x17)) {
            FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x2b0));
        }
        switch(*(undefined4 *)(param_2 + 8)) {
            case 0:
                iVar2 = FUN_140396880();
                if (iVar2 != 0) {
                    FUN_1403a81e0();
                }
                break;
            case 3:
            case 0x18:
                if ((((*(int *)(param_1 + 0x80) != 0x14) && (*(int *)(param_1 + 0x80) != 0x17)) &&
                     (*(longlong *)(param_1 + 0x18) != 0)) &&
                    (iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x144), iVar2 != 0)) {
                    *(int *)(param_1 + 0x504) = iVar2;
                    plVar1 = *(longlong **)(param_1 + 0xcc0);
                    if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0x50))(plVar1,0x14,0,0,uVar5,uVar6,uVar7);
                        *(undefined4 *)(param_1 + 0xf4) = 1;
                        FUN_1404718e0(param_1,0,0,1,1);
                        FUN_140472d80(param_1);
                    }
                }
                break;
            case 8:
                if ((DAT_140dc2910 & 2) == 0) {
                    DAT_140dc2910 = DAT_140dc2910 | 2;
                    lVar4 = FUN_140200220(0x266);
                    if (lVar4 == 0) {
                        DAT_140dc2918 = 0xfa;
                    }
                    else {
                        DAT_140dc2918 = *(int *)(lVar4 + 4);
                    }
                }
                iVar2 = DAT_140dc2918;
                if (lVar3 != 0) {
                    iVar2 = *(int *)(lVar3 + 8);
                }
                if (*(longlong *)(param_1 + 0x4c8) != 0) {
                    FUN_140195d70(param_1 + 0x4b8);
                }
                if (iVar2 != 0) {
                    local_28[0] = 0;
                    local_18 = FUN_140001b70;
                    local_10 = 0;
                    local_20 = param_1;
                    FUN_140195960(param_1 + 0x4b8,iVar2,local_28,4);
                }
                break;
            case 0xb:
                iVar2 = FUN_140396880();
                if (iVar2 != 0) {
                    FUN_1403a8080();
                }
                break;
            case 0xf:
                iVar2 = FUN_140396880();
                if (iVar2 != 0) {
                    if ((DAT_140dc2910 & 1) == 0) {
                        DAT_140dc2910 = DAT_140dc2910 | 1;
                        lVar4 = FUN_140200220(0x267);
                        if (lVar4 == 0) {
                            DAT_140dc2914 = 2;
                        }
                        else {
                            DAT_140dc2914 = *(int *)(lVar4 + 4);
                        }
                    }
                    iVar2 = DAT_140dc2914;
                    if (lVar3 != 0) {
                        iVar2 = *(int *)(lVar3 + 8);
                    }
                    *(int *)(param_1 + 0x500) = iVar2;
                    if (iVar2 != 0) {
                        FUN_1403eb430(DAT_140c65898,iVar2,*(undefined4 *)(param_2 + 0x28),0,0);
                    }
                }
                break;
            case 0x14:
                if ((DAT_140dc2910 & 4) == 0) {
                    DAT_140dc2910 = DAT_140dc2910 | 4;
                    lVar4 = FUN_140200220(0x3dc);
                    if (lVar4 == 0) {
                        DAT_140dc291c = 0x41200000;
                    }
                    else {
                        DAT_140dc291c = *(undefined4 *)(lVar4 + 0x18);
                    }
                }
                *(undefined4 *)(param_1 + 0x508) = DAT_140dc291c;
                if ((lVar3 != 0) && (*(float *)(lVar3 + 0x1c) != 0.0)) {
                    *(float *)(param_1 + 0x508) = *(float *)(lVar3 + 0x1c);
                }
        }
    }
    return;
}



void FUN_14045e1d0(longlong param_1,uint param_2)

{
    IMAGE_DOS_HEADER *pIVar1;

    if ((*(int *)(param_1 + 0x80) != 0x14) && (*(int *)(param_1 + 0x80) != 0x17)) {
        FUN_1403d90d0();
    }
    pIVar1 = &IMAGE_DOS_HEADER_140000000;
    FUN_1400035b0();
    if (0x18 < param_2) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014045e264. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code *)(pIVar1->e_magic +
               *(uint *)(pIVar1[0x8bc7].e_res_4_ +
                         (ulonglong)
                         *(byte *)((longlong)pIVar1[0x8bc7].e_res2_10_ + (longlong)(int)param_2) * 2 +
                                                                                                 -6)))
    (pIVar1->e_magic +
     *(uint *)(pIVar1[0x8bc7].e_res_4_ +
               (ulonglong)
               *(byte *)((longlong)pIVar1[0x8bc7].e_res2_10_ + (longlong)(int)param_2) * 2 +
                                                                                       -6));
    return;
}



ulonglong FUN_14045e3d0(longlong param_1,int param_2)

{
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong *plVar8;

    if (0x1b < param_2) {
        return 0;
    }
    uVar6 = 0;
    uVar3 = *(ulonglong *)(param_1 + 0x2d8 + (longlong)param_2 * 0x10);
    if (uVar3 == 0) {
        return 0;
    }
    plVar8 = *(longlong **)(param_1 + ((longlong)param_2 + 0x2d) * 0x10);
    uVar7 = uVar6;
    LAB_14045e430:
    iVar1 = *(int *)(*plVar8 + 0x1c);
    iVar2 = *(int *)(*plVar8 + 0x18);
    for (lVar5 = *(longlong *)(param_1 + 0x15d0); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar5 + 0x50) + 0x5c) == iVar2)) &&
            ((iVar1 == 0 || (*(int *)(lVar5 + 100) == iVar1)))) goto LAB_14045e493;
    }
    for (lVar5 = *(longlong *)(param_1 + 0x15d8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x40)) {
        if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar5 + 0x50) + 0x5c) == iVar2)) &&
            ((iVar1 == 0 || (*(int *)(lVar5 + 100) == iVar1)))) goto LAB_14045e493;
    }
    goto LAB_14045e498;
    LAB_14045e493:
    if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0xd0) != 0) {
            uVar4 = FUN_140195f70(lVar5 + 0xc0);
            uVar6 = (ulonglong)uVar4;
        }
        return uVar6;
    }
    LAB_14045e498:
    uVar7 = uVar7 + 1;
    plVar8 = plVar8 + 1;
    if (uVar3 <= uVar7) {
        return 0;
    }
    goto LAB_14045e430;
}



undefined4 FUN_14045e4f0(longlong param_1,int param_2)

{
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;

    if (0x1b < param_2) {
        return 0;
    }
    uVar5 = 0;
    uVar3 = *(ulonglong *)(param_1 + 0x2d8 + (longlong)param_2 * 0x10);
    if (uVar3 == 0) {
        return 0;
    }
    plVar6 = *(longlong **)(param_1 + ((longlong)param_2 + 0x2d) * 0x10);
    LAB_14045e540:
    iVar1 = *(int *)(*plVar6 + 0x1c);
    iVar2 = *(int *)(*plVar6 + 0x18);
    for (lVar4 = *(longlong *)(param_1 + 0x15d0); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar4 + 0x50) + 0x5c) == iVar2)) &&
            ((iVar1 == 0 || (*(int *)(lVar4 + 100) == iVar1)))) goto LAB_14045e5a3;
    }
    for (lVar4 = *(longlong *)(param_1 + 0x15d8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x40)) {
        if (((iVar2 == 0) || (*(int *)(*(longlong *)(lVar4 + 0x50) + 0x5c) == iVar2)) &&
            ((iVar1 == 0 || (*(int *)(lVar4 + 100) == iVar1)))) goto LAB_14045e5a3;
    }
    goto LAB_14045e5a8;
    LAB_14045e5a3:
    if (lVar4 != 0) {
        return *(undefined4 *)(lVar4 + 0xbc);
    }
    LAB_14045e5a8:
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
    if (uVar3 <= uVar5) {
        return 0;
    }
    goto LAB_14045e540;
}



undefined8 FUN_14045e5e0(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar1 = 0;
    plVar3 = (longlong *)(DAT_140c65a08 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x2d8);
    do {
        if (*plVar2 != 0) {
            if ((int)uVar1 < 0x1c) {
                lVar4 = *plVar3;
            }
            else {
                lVar4 = 0;
            }
            if ((*(byte *)(lVar4 + 0x10) & 4) != 0) {
                return 1;
            }
        }
        uVar1 = uVar1 + 1;
        plVar3 = plVar3 + 1;
        plVar2 = plVar2 + 2;
        if (0x1b < uVar1) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_14045e630(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar1 = 0;
    plVar3 = (longlong *)(DAT_140c65a08 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x2d8);
    do {
        if (*plVar2 != 0) {
            if ((int)uVar1 < 0x1c) {
                lVar4 = *plVar3;
            }
            else {
                lVar4 = 0;
            }
            if ((*(byte *)(lVar4 + 0x10) & 2) != 0) {
                return 1;
            }
        }
        uVar1 = uVar1 + 1;
        plVar3 = plVar3 + 1;
        plVar2 = plVar2 + 2;
        if (0x1b < uVar1) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_14045e680(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar1 = 0;
    plVar3 = (longlong *)(DAT_140c65a08 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x2d8);
    do {
        if (*plVar2 != 0) {
            if ((int)uVar1 < 0x1c) {
                lVar4 = *plVar3;
            }
            else {
                lVar4 = 0;
            }
            if ((*(byte *)(lVar4 + 0x10) & 0x40) != 0) {
                return 1;
            }
        }
        uVar1 = uVar1 + 1;
        plVar3 = plVar3 + 1;
        plVar2 = plVar2 + 2;
        if (0x1b < uVar1) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_14045e6d0(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;

    uVar1 = 0;
    plVar3 = (longlong *)(DAT_140c65a08 + 0x28);
    plVar2 = (longlong *)(param_1 + 0x2d8);
    do {
        if (*plVar2 != 0) {
            if ((int)uVar1 < 0x1c) {
                lVar4 = *plVar3;
            }
            else {
                lVar4 = 0;
            }
            if ((*(byte *)(lVar4 + 0x10) & 0x10) != 0) {
                return 1;
            }
        }
        uVar1 = uVar1 + 1;
        plVar3 = plVar3 + 1;
        plVar2 = plVar2 + 2;
        if (0x1b < uVar1) {
            return 0;
        }
    } while( true );
}



int FUN_14045e720(longlong param_1)

{
    if ((int)*(float *)(param_1 + 0x724) == -1) {
        return -1;
    }
    return (int)*(float *)(param_1 + 0xc94) + (int)*(float *)(param_1 + 0x724);
}



void FUN_14045e740(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined **local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined **local_18;
    undefined4 local_10;
    undefined4 local_c;

    FUN_140579860(param_1,*(undefined4 *)(param_1 + 8));
    FUN_14045ec90(param_1,param_2);
    lVar4 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    if ((*(longlong *)(lVar4 + 0x78) != 0) &&
        (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(lVar4 + 0x78) + 8))) {
        *(undefined4 *)(lVar4 + 0x6f98) = 1;
    }
    lVar3 = *(longlong *)(lVar4 + 0x6490);
    if (((lVar3 != 0) &&
         ((lVar2 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar3 + 0x1600)), lVar2 != 0 ||
                                                                                 (((lVar4 = DAT_140c65898, *(longlong *)(DAT_140c65898 + 0x78) == lVar3 &&
                                                                                                           (lVar3 = FUN_14039df50(DAT_140c65898), lVar4 = DAT_140c65898, lVar3 != 0)) &&
                                                                                   (lVar2 = FUN_1404695e0(lVar3), lVar4 = DAT_140c65898, lVar2 != 0)))))) &&
        (lVar4 = DAT_140c65898, *(int *)(lVar2 + 0x158) == *(int *)(param_1 + 8))) {
        FUN_14039cce0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x5c),6);
        lVar4 = DAT_140c65898;
    }
    if (*(int *)(param_1 + 0xd50) != 0) {
        if ((DAT_140dc2920 & 1) == 0) {
            DAT_140dc2920 = DAT_140dc2920 | 1;
            lVar4 = FUN_140200220(0x142);
            if (lVar4 == 0) {
                DAT_140dc2924 = 5000;
            }
            else {
                DAT_140dc2924 = *(undefined4 *)(lVar4 + 4);
            }
        }
        FUN_1403eac90();
        lVar4 = DAT_140c65898;
    }
    if (*(longlong *)(lVar4 + 0x78) == param_1) {
        if (param_2 == 0) {
            local_18 = &PTR_FUN_140b6f490;
            local_c = 0x17;
            local_10 = *(undefined4 *)(param_1 + 8);
            iVar1 = FUN_14060af20(&local_18);
            if (((iVar1 != 0) && (lVar4 = FUN_1403d90d0(DAT_140c65898,local_10), lVar4 != 0)) &&
                (lVar4 = FUN_14047dca0(lVar4), lVar4 != 0)) {
                FUN_14060afe0(&local_18,local_10);
            }
            lVar4 = DAT_140c65898;
            if (*(longlong *)(DAT_140c65898 + 0x6490) != *(longlong *)(DAT_140c65898 + 0x78)) {
                *(longlong *)(DAT_140c65898 + 0x6490) = *(longlong *)(DAT_140c65898 + 0x78);
                *(undefined8 *)(lVar4 + 0x6488) = 0;
            }
            if (DAT_140c65b78 != 0) {
                FUN_140575dd0();
                lVar4 = DAT_140c65898;
            }
            FUN_14055b0e0(lVar4,0);
        }
        else {
            local_28 = &PTR_FUN_140b6f460;
            local_1c = 0x16;
            local_20 = *(undefined4 *)(param_1 + 8);
            iVar1 = FUN_14060af20(&local_28);
            if (((iVar1 != 0) && (lVar4 = FUN_1403d90d0(DAT_140c65898,local_20), lVar4 != 0)) &&
                (lVar4 = FUN_14047dca0(lVar4), lVar4 != 0)) {
                FUN_14060afe0(&local_28,local_20);
            }
            FUN_140437a10(DAT_140c658d8,0x121,0,0,0,0,1);
            WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        }
        FUN_1405f9e30(DAT_140c65ba8,DAT_140c65ba8 + 0xc0,param_2);
        if (DAT_140c65b78 != 0) {
            FUN_140575dd0();
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14045e9e0(longlong *param_1,ulonglong param_2,int param_3)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined8 local_78;
    undefined8 local_70;
    float local_68;
    undefined8 local_64;
    undefined8 local_5c;
    undefined8 local_54;
    undefined8 local_4c;
    undefined8 local_44;

    fVar5 = 0.01;
    if ((DAT_140dc2928 & 1) == 0) {
        DAT_140dc2928 = DAT_140dc2928 | 1;
        lVar4 = FUN_140200220(0x3ba);
        if (lVar4 == 0) {
            _DAT_140dc292c = 10.0;
        }
        else {
            _DAT_140dc292c = *(float *)(lVar4 + 0x18);
        }
        _DAT_140dc292c = _DAT_140dc292c * fVar5;
    }
    if ((DAT_140dc2928 & 2) == 0) {
        DAT_140dc2928 = DAT_140dc2928 | 2;
        lVar4 = FUN_140200220(0x3ba);
        if (lVar4 == 0) {
            _DAT_140dc2930 = 67.0;
        }
        else {
            _DAT_140dc2930 = *(float *)(lVar4 + 0x1c);
        }
        _DAT_140dc2930 = _DAT_140dc2930 * fVar5;
    }
    if ((DAT_140dc2928 & 4) == 0) {
        DAT_140dc2928 = DAT_140dc2928 | 4;
        lVar4 = FUN_140200220(0x3ba);
        if (lVar4 == 0) {
            fVar6 = 33.0;
        }
        else {
            fVar6 = *(float *)(lVar4 + 0x20);
        }
        DAT_140dc2934 = fVar6 * fVar5;
    }
    fVar6 = (float)(param_2 & 0xffffffff);
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = fVar6 / ((float)(ulonglong)uVar2 * _DAT_140dc292c);
    fVar5 = fVar6;
    if ((fVar6 < 1.0) && (fVar5 = fVar6 * _DAT_140dc2930, fVar6 * _DAT_140dc2930 < DAT_140dc2934)) {
        fVar5 = DAT_140dc2934;
    }
    fVar7 = 1.0;
    fVar6 = *(float *)((longlong)param_1 + 0x35cc);
    if (*(float *)((longlong)param_1 + 0x35cc) <= fVar5) {
        fVar6 = fVar5;
    }
    if (1.0 <= fVar6) {
        fVar6 = 1.0;
    }
    if (((*(float *)((longlong)param_1 + 0x35cc) <= fVar6 &&
          fVar6 != *(float *)((longlong)param_1 + 0x35cc)) &&
         (*(float *)((longlong)param_1 + 0x35cc) = fVar6, *(int *)(param_1 + 0x25f) != 0)) &&
        (1e-05 < fVar6)) {
        local_78 = 0xfc;
        local_70 = 0x3f800000;
        local_64 = 3;
        local_68 = fVar6;
        (**(code **)(*(longlong *)param_1[0x2dd] + 600))((longlong *)param_1[0x2dd],0xb,&local_78);
    }
    lVar4 = DAT_140c65898;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x78);
    if (param_1 == plVar1) {
        fVar6 = *(float *)(param_1 + 0x6b9);
        if (*(float *)(param_1 + 0x6b9) <= fVar5) {
            fVar6 = fVar5;
        }
        if (fVar7 <= fVar6) {
            fVar6 = fVar7;
        }
        *(float *)(param_1 + 0x6b9) = fVar6;
        plVar1 = *(longlong **)(lVar4 + 0x71b8);
        if (fVar5 < 1.0) {
            iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x1e25);
            if (iVar3 == 0) {
                return;
            }
            local_5c = 0x1e25;
        }
        else {
            iVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,0x1e26);
            if (iVar3 == 0) {
                return;
            }
            local_5c = 0x1e26;
        }
        plVar1 = *(longlong **)(lVar4 + 0x71b8);
        local_54 = 0x3f800000;
        local_4c = 0;
        local_44 = 0;
        (**(code **)(*plVar1 + 0x248))(plVar1,5,&local_5c);
    }
    else if ((plVar1 != (longlong *)0x0) && (param_3 == *(int *)(plVar1 + 1))) {
        fVar6 = *(float *)(param_1 + 0x6b9);
        if (*(float *)(param_1 + 0x6b9) <= fVar5) {
            fVar6 = fVar5;
        }
        if (fVar7 <= fVar6) {
            fVar6 = fVar7;
        }
        *(float *)(param_1 + 0x6b9) = fVar6;
    }
    return;
}



void FUN_14045ec90(longlong param_1,int param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    if ((((param_2 == 0) || (0x24 < *(uint *)(param_1 + 0x80))) ||
         ((0x1042ce5d12U >> ((longlong)(int)*(uint *)(param_1 + 0x80) & 0x3fU) & 1) == 0)) &&
        (*(int *)(param_1 + 0x250) != param_2)) {
        *(int *)(param_1 + 0x254) = param_2;
        *(int *)(param_1 + 0x250) = param_2;
        if (param_2 != 0) {
            if (*(longlong *)(param_1 + 0x3798) != 0) {
                for (plVar1 = *(longlong **)(DAT_140c65920 + 8); plVar1 != (longlong *)0x0;
                     plVar1 = (longlong *)plVar1[4]) {
                    if (plVar1[9] == *(longlong *)(param_1 + 0x3798)) {
                        (**(code **)(*plVar1 + 8))();
                        break;
                    }
                }
                *(undefined8 *)(param_1 + 0x3798) = 0;
            }
            FUN_14055afc0();
            FUN_14045dd00(param_1);
        }
        *(uint *)(param_1 + 0x1348) = (uint)(*(int *)(param_1 + 0x250) != 0);
        FUN_14046c300(param_1,1);
        if (*(int *)(param_1 + 0x250) != 0) {
            lVar3 = FUN_1404695e0(param_1);
            if (lVar3 != 0) {
                FUN_140540070(lVar3,*(undefined4 *)(param_1 + 8),param_2);
                FUN_1404698a0(param_1);
            }
            lVar3 = *(longlong *)(param_1 + 0x15c0);
            while (lVar3 != 0) {
                lVar2 = *(longlong *)(lVar3 + 0x10);
                FUN_140540070(lVar3,*(undefined4 *)(param_1 + 8),param_2);
                lVar3 = lVar2;
            }
            if (*(int *)(param_1 + 0xd50) != 0) {
                FUN_1403bf1a0();
                FUN_140640f60();
            }
        }
    }
    return;
}



void FUN_14045edd0(longlong param_1)

{
    longlong lVar1;
    undefined2 *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined local_48 [8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;
    undefined local_28 [8];
    longlong local_20;

    puVar2 = (undefined2 *)FUN_14018b280(0x10);
    uVar7 = 0;
    local_30 = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_40 = puVar2;
    local_38 = puVar2;
    uVar3 = FUN_14034bdd0();
    puVar4 = (undefined *)FUN_14018efa0(local_28,L"%s %d",uVar3,*(undefined4 *)(param_1 + 0x38));
    if (puVar4 != local_48) {
        FUN_14001c480(local_48,*(undefined8 *)(puVar4 + 8),*(undefined8 *)(puVar4 + 0x10));
        puVar2 = local_40;
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    lVar1 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar5 = *(longlong *)(lVar1 + 0x78);
    if ((lVar5 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar5 + 8))) {
        *(undefined4 *)(lVar1 + 0x6f98) = 1;
    }
    FUN_1405fccb0(*DAT_140c65b80);
    FUN_14043b4e0();
    uVar6 = 0;
    if (param_1 == *(longlong *)(DAT_140c65898 + 0x78)) {
        lVar5 = FUN_14024dfc0(*(undefined4 *)(param_1 + 0x38));
        if (lVar5 != 0) {
            uVar7 = *(undefined4 *)(lVar5 + 0x10);
            uVar6 = *(undefined4 *)(lVar5 + 0xc);
        }
        FUN_1403c9e60();
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerLevelChange",&DAT_1409ecb84,
                  *(undefined4 *)(param_1 + 0x38),uVar7,uVar6);
    FUN_1403c9c00();
    if (puVar2 != (undefined2 *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14045f080(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    undefined *puVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong lVar10;
    undefined (*pauVar11) [16];
    float *pfVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    uint uVar15;
    undefined8 uVar16;
    float fVar17;
    float fVar18;
    undefined4 uVar19;
    undefined4 extraout_XMM0_Da;
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    float fVar26;
    undefined4 uVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    undefined8 local_res8;
    undefined4 local_res10;
    ulonglong in_stack_fffffffffffffe60;
    uint local_168;
    uint uStack356;
    undefined4 local_160;
    undefined4 uStack348;
    undefined *local_158;
    ulonglong local_150;
    undefined local_148 [8];
    float fStack320;
    float fStack316;
    undefined local_138 [16];
    undefined *local_128;
    undefined8 local_120;
    undefined local_118 [8];
    float fStack272;
    float fStack268;
    undefined **local_108;
    longlong local_100;
    int local_f8;
    undefined4 local_f4;
    undefined4 local_f0;
    float local_e8 [4];
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined8 local_c8;
    undefined4 local_c0;
    undefined8 local_b8;
    undefined local_a8 [8];
    float fStack160;
    float fStack156;

    if ((((*(uint *)(param_1 + 8) & 0xc0000000) == 0x40000000) &&
         (*(longlong *)(DAT_140c65898 + 0x7198) != 0)) && (lVar8 = FUN_1405cce50(), lVar8 != 0)) {
        if (*(undefined8 **)(lVar8 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x28);
        }
        if (*(longlong *)(lVar8 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 0x20) = *(undefined8 *)(lVar8 + 0x20);
        }
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        FUN_1406015c0();
    }
    if ((*(longlong *)(param_1 + 0xf8) != 0) &&
        (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x150), lVar8 != 0)) {
        if (*(int *)(lVar8 + 0x10) != 0) {
            in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffff00000000;
            iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))();
            if (iVar6 == 0) goto LAB_14045f3b2;
        }
        lVar8 = DAT_140c65918;
        if ((*(int *)(param_1 + 0x250) == 0) && (*(int *)(param_1 + 0x254) == 0)) {
            in_stack_fffffffffffffe60 = (ulonglong)*(uint *)(DAT_140c65918 + 0x48);
            uVar22 = **(undefined4 **)(*(longlong *)(param_1 + 0xf8) + 0x150);
            FUN_140482a00(&local_168,uVar22,*(int *)(param_1 + 0x2ac) != 0,0,
                          *(undefined8 *)(DAT_140c65918 + 0x40),in_stack_fffffffffffffe60);
            uVar13 = CONCAT44(uStack356,local_168);
            uVar16 = CONCAT44(uStack348,local_160);
            uVar14 = 0;
            if (local_150 != 0) {
                plVar9 = (longlong *)(local_158 + 0x20);
                do {
                    if (*(int *)((longlong)plVar9 + -0x14) != 0) break;
                    if (*plVar9 != 0) goto LAB_14045f319;
                    uVar14 = uVar14 + 1;
                    plVar9 = plVar9 + 6;
                } while (uVar14 < local_150);
            }
            in_stack_fffffffffffffe60 = (ulonglong)*(uint *)(lVar8 + 0x48);
            FUN_140482a00(&local_168,uVar22,2,0,*(undefined8 *)(lVar8 + 0x40),in_stack_fffffffffffffe60);
            uVar13 = CONCAT44(uStack356,local_168);
            uVar16 = CONCAT44(uStack348,local_160);
            uVar14 = 0;
            if (local_150 != 0) {
                plVar9 = (longlong *)(local_158 + 0x20);
                do {
                    if (*(int *)((longlong)plVar9 + -0x14) != 0) break;
                    if (*plVar9 != 0) goto LAB_14045f319;
                    uVar14 = uVar14 + 1;
                    plVar9 = plVar9 + 6;
                } while (uVar14 < local_150);
            }
            in_stack_fffffffffffffe60 = (ulonglong)*(uint *)(lVar8 + 0x48);
            FUN_140482a00(&local_168,uVar22,*(int *)(param_1 + 0x2ac) != 0,6,*(undefined8 *)(lVar8 + 0x40)
                    ,in_stack_fffffffffffffe60);
            uVar13 = CONCAT44(uStack356,local_168);
            uVar16 = CONCAT44(uStack348,local_160);
            uVar14 = 0;
            if (local_150 != 0) {
                plVar9 = (longlong *)(local_158 + 0x20);
                do {
                    if (*(int *)((longlong)plVar9 + -0x14) != 0) break;
                    if (*plVar9 != 0) goto LAB_14045f319;
                    uVar14 = uVar14 + 1;
                    plVar9 = plVar9 + 6;
                } while (uVar14 < local_150);
            }
            in_stack_fffffffffffffe60 = (ulonglong)*(uint *)(lVar8 + 0x48);
            FUN_140482a00(&local_168,uVar22,2,6,*(undefined8 *)(lVar8 + 0x40),in_stack_fffffffffffffe60);
            uVar13 = CONCAT44(uStack356,local_168);
            uVar16 = CONCAT44(uStack348,local_160);
            LAB_14045f319:
            uVar14 = local_150;
            puVar5 = local_158;
            if ((((*(longlong *)(param_1 + 0x14e0) == 0) || ((int)uVar13 != *(int *)(param_1 + 0x14c8)))
                 || ((int)((ulonglong)uVar13 >> 0x20) != *(int *)(param_1 + 0x14cc))) ||
                ((int)uVar16 != *(int *)(param_1 + 0x14d0))) {
                FUN_140195d70(param_1 + 0x1540);
                FUN_140195d70(param_1 + 0x14f8);
                *(undefined8 *)(param_1 + 0x14c8) = uVar13;
                *(undefined8 *)(param_1 + 0x14d0) = uVar16;
                *(undefined **)(param_1 + 0x14d8) = puVar5;
                *(undefined4 *)(param_1 + 0x14c4) = 0;
                *(ulonglong *)(param_1 + 0x14e0) = uVar14;
                lVar8 = *(longlong *)(param_1 + 0x590);
                while (lVar8 != 0) {
                    (**(code **)(**(longlong **)(param_1 + 0x590) + 0x20))();
                    lVar8 = *(longlong *)(param_1 + 0x590);
                }
                FUN_14047cab0(param_1);
            }
        }
    }
    LAB_14045f3b2:
    plVar9 = (longlong *)0x0;
    plVar1 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_res8 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    while (plVar2 != (longlong *)0x0) {
        if (*(uint *)(plVar2 + 4) < *(uint *)(param_1 + 8)) {
            plVar2 = (longlong *)plVar2[3];
        }
        else {
            local_res8 = plVar2;
            plVar2 = (longlong *)plVar2[2];
        }
    }
    if ((local_res8 == plVar1) || (*(uint *)(param_1 + 8) < *(uint *)(local_res8 + 4))) {
        local_res8 = plVar1;
    }
    if (((local_res8 == plVar1) || (plVar9 = local_res8 + 5, plVar9 == (longlong *)0x0)) &&
        (*(int *)(param_1 + 0x80) == 0x12)) {
        local_168 = 0;
        local_160 = (undefined4)param_1;
        uStack348 = (undefined4)((ulonglong)param_1 >> 0x20);
        local_158 = &LAB_14045ef50;
        local_150 = 0;
        FUN_140195960(param_1 + 0x3650,0,&local_168,4);
    }
    if ((*(int *)(param_1 + 0x3648) != 0) && (plVar9 != (longlong *)0x0)) {
        FUN_14045bf30();
        iVar6 = *DAT_140c63750;
        if (*(int *)(plVar9 + 9) == 0) {
            iVar7 = DAT_140c47c70;
            if (iVar6 < DAT_140c47c70) {
                iVar7 = iVar6;
            }
            uVar22 = FUN_1401ae6f0(*(undefined4 *)(&DAT_140c47c80 + (longlong)iVar7 * 4));
        }
        else {
            iVar7 = DAT_140c47d30;
            if (iVar6 < DAT_140c47d30) {
                iVar7 = iVar6;
            }
            uVar22 = *(undefined4 *)(&DAT_140c47d40 + (longlong)iVar7 * 4);
        }
        local_138 = CONCAT88(param_1,local_138._4_8_ << 0x20);
        local_128 = &LAB_14045ef50;
        local_120 = 0;
        FUN_140195960(param_1 + 0x3650,uVar22,local_138);
        *(undefined4 *)(param_1 + 0x3648) = 0;
        if (*(longlong *)(param_1 + 0x16e8) == 0) {
            return;
        }
        lVar8 = FUN_1403d90d0();
        fVar31 = 0.0;
        fVar17 = fVar31;
        if (lVar8 != 0) {
            lVar10 = *(longlong *)(lVar8 + 0xd08);
            if (lVar10 == 0) {
                lVar10 = FUN_14022d500();
                fVar17 = fVar31;
                if (lVar10 != 0) {
                    fVar17 = *(float *)(lVar10 + 0x28);
                }
            }
            else {
                fVar17 = (float)FUN_14047a940();
                fVar17 = fVar17 * *(float *)(lVar10 + 0x8c);
            }
        }
        if (((lVar8 != 0) && (*(int *)(lVar8 + 0x36a8) != 0)) && (lVar8 = FUN_1403d90d0(), lVar8 != 0))
        {
            lVar8 = *(longlong *)(lVar8 + 0xd08);
            if (lVar8 == 0) {
                lVar8 = FUN_14022d500();
                fVar17 = fVar31;
                if (lVar8 != 0) {
                    fVar17 = *(float *)(lVar8 + 0x28);
                }
            }
            else {
                fVar17 = (float)FUN_14047a940();
                fVar17 = fVar17 * *(float *)(lVar8 + 0x8c);
            }
        }
        local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)(uint)fVar17);
        local_res10 = 0;
        iVar6 = 0;
        if ((int)fVar17 < 0) {
            iVar6 = -0x80000000;
        }
        uVar15 = iVar6 - (int)fVar17 >> 0x1f;
        if ((int)((iVar6 - (int)fVar17 ^ uVar15) - uVar15) < 0x55) {
            iVar6 = DAT_140c47d90;
            if (*DAT_140c63750 < DAT_140c47d90) {
                iVar6 = *DAT_140c63750;
            }
            fVar17 = *(float *)(&DAT_140c47da0 + (longlong)iVar6 * 4);
        }
        pauVar11 = (undefined (*) [16])(**(code **)(**(longlong **)(DAT_140c65898 + 0x6fe0) + 0x18))();
        FUN_1407e4830(pauVar11,0,0xc0);
        pfVar12 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x50))();
        fVar28 = SQRT(*pfVar12 * *pfVar12 + pfVar12[1] * pfVar12[1] + 0.0);
        pfVar12 = (float *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x4c0))();
        lVar8 = DAT_140c65898;
        fVar30 = pfVar12[4];
        fVar18 = pfVar12[5];
        fVar21 = pfVar12[6];
        fVar23 = pfVar12[7];
        *pauVar11 = CONCAT412(pfVar12[3] * fVar28,
                              CONCAT48(pfVar12[2] * fVar28,
                                       CONCAT44(pfVar12[1] * fVar28,*pfVar12 * fVar28)));
        pauVar11[1] = CONCAT412(fVar23 * fVar28,
                                CONCAT48(fVar21 * fVar28,CONCAT44(fVar18 * fVar28,fVar30 * fVar28)));
        lVar8 = (**(code **)(**(longlong **)(lVar8 + 0x6fe0) + 0x20))();
        local_res8 = (longlong *)lVar8;
        FUN_1407e4830(lVar8,0,0x80);
        fVar30 = DAT_140c3b438 * 0.005555556;
        iVar6 = DAT_140c47c10;
        if (*DAT_140c63750 < DAT_140c47c10) {
            iVar6 = *DAT_140c63750;
        }
        *(undefined (*) [16])(lVar8 + 0x10) =
                CONCAT412(fVar31,ZEXT412(*(uint *)(&DAT_140c47c20 + (longlong)iVar6 * 4) ^ 0x80000000) <<
                                                                                                       0x20);
        fVar18 = (float)FUN_1408fd8a4(fVar30 * 50.0);
        *(float *)(lVar8 + 0x30) = fVar18;
        fVar30 = (float)FUN_1408fd8a4(fVar30 * 45.0);
        lVar10 = DAT_140c65898;
        if (fVar18 <= fVar30) {
            fVar30 = fVar18;
        }
        *(float *)(lVar8 + 0x34) = fVar30;
        _local_148 = *(undefined (*) [16])(param_1 + 0x11e0);
        fVar21 = *(float *)(param_1 + 0x1140) * fVar17 +
                 *(float *)*(undefined (*) [16])(param_1 + 0x11e0);
        fVar23 = *(float *)(param_1 + 0x1144) * fVar17 + *(float *)(param_1 + 0x11e4);
        fVar28 = *(float *)(param_1 + 0x1148) * fVar17 + *(float *)(param_1 + 0x11e8);
        fVar26 = *(float *)(param_1 + 0x114c) * fVar17 + *(float *)(param_1 + 0x11ec);
        pauVar11[2] = CONCAT412(fVar26,CONCAT48(fVar28,CONCAT44(fVar23,fVar21)));
        fVar18 = (float)(**(code **)(**(longlong **)(lVar10 + 0x6fe0) + 0x48))
                (*(longlong **)(lVar10 + 0x6fe0),local_148);
        fVar30 = 1.0;
        fVar29 = 0.99;
        if (fVar18 < 1.0) {
            fVar18 = fVar18 * 0.99;
            fVar17 = fVar18 * (local_148._0_4_ - fVar21) + fVar21;
            fVar20 = fVar18 * (local_148._4_4_ - fVar23) + fVar23;
            fVar21 = fVar21 - fVar17;
            fVar23 = fVar23 - fVar20;
            _local_148 = CONCAT412(fVar18 * (fStack316 - fVar26) + fVar26,
                                   CONCAT48(fVar18 * (fStack320 - fVar28) + fVar28,CONCAT44(fVar20,fVar17)
                                   ));
            fVar17 = SQRT(fVar21 * fVar21 + fVar23 * fVar23 + 0.0);
        }
        lVar8 = *(longlong *)(param_1 + 0xd08);
        if (lVar8 == 0) {
            lVar8 = FUN_14022d500();
            if (lVar8 != 0) {
                fVar31 = *(float *)(lVar8 + 0x28);
            }
        }
        else {
            fVar31 = (float)FUN_14047a940();
            fVar31 = fVar31 * *(float *)(lVar8 + 0x8c);
        }
        fVar17 = fVar17 + fVar31;
        if (*(int *)(plVar9 + 9) == 0) {
            local_d0 = DAT_140c47db8;
            local_f4 = DAT_140c47d94;
            local_e8[0] = _DAT_140c47da0;
            local_e8[1] = (float)uRam0000000140c47da4;
            local_e8[2] = (float)uRam0000000140c47da8;
            local_e8[3] = (float)uRam0000000140c47dac;
            local_d4 = DAT_140c47db4;
            local_100 = DAT_140c47d88;
            local_f8 = DAT_140c47d90;
            local_cc = DAT_140c47dbc;
            local_f0 = DAT_140c47d98;
            local_d8 = DAT_140c47db0;
            local_c8 = DAT_140c47dc0;
            local_c0 = DAT_140c47dc8;
            local_b8 = DAT_140c47dd0;
            iVar6 = DAT_140c47d90;
            if (*DAT_140c63750 < DAT_140c47d90) {
                iVar6 = *DAT_140c63750;
            }
            if (fVar17 <= local_e8[iVar6]) {
                fVar17 = local_e8[iVar6];
            }
            local_108 = &PTR_LAB_140b5e6e8;
            if (DAT_140c47d88 != 0) {
                FUN_14019d990(DAT_140c63750 + 2,&local_100);
            }
            iVar6 = *DAT_140c63750;
            iVar7 = DAT_140c47df0;
            if (iVar6 < DAT_140c47df0) {
                iVar7 = iVar6;
            }
            iVar3 = DAT_140c47d90;
            if (iVar6 < DAT_140c47d90) {
                iVar3 = iVar6;
            }
            fVar17 = (float)FUN_1401ae760(fVar17,(*(float *)(&DAT_140c47e00 + (longlong)iVar7 * 4) -
                                                  *(float *)(&DAT_140c47da0 + (longlong)iVar3 * 4)) +
                                                 fVar17);
        }
        else {
            local_d0 = DAT_140c47ea8;
            local_f4 = DAT_140c47e84;
            local_e8[0] = _DAT_140c47e90;
            local_e8[1] = (float)uRam0000000140c47e94;
            local_e8[2] = (float)uRam0000000140c47e98;
            local_e8[3] = (float)uRam0000000140c47e9c;
            local_d4 = DAT_140c47ea4;
            local_f8 = DAT_140c47e80;
            iVar6 = DAT_140c47e80;
            if (*DAT_140c63750 < DAT_140c47e80) {
                iVar6 = *DAT_140c63750;
            }
            local_cc = DAT_140c47eac;
            local_f0 = DAT_140c47e88;
            local_100 = DAT_140c47e78;
            local_d8 = DAT_140c47ea0;
            local_c8 = DAT_140c47eb0;
            local_c0 = DAT_140c47eb8;
            local_b8 = DAT_140c47ec0;
            if (fVar17 <= local_e8[iVar6]) {
                fVar17 = local_e8[iVar6];
            }
            local_108 = &PTR_LAB_140b5e6e8;
            if (DAT_140c47e78 != 0) {
                FUN_14019d990(DAT_140c63750 + 2,&local_100);
            }
        }
        lVar8 = DAT_140c65898;
        local_148._0_4_ = *(float *)(param_1 + 0x1140) * fVar17 + local_148._0_4_;
        local_148._4_4_ = *(float *)(param_1 + 0x1144) * fVar17 + local_148._4_4_;
        fStack320 = *(float *)(param_1 + 0x1148) * fVar17 + fStack320;
        fStack316 = *(float *)(param_1 + 0x114c) * fVar17 + fStack316;
        _local_118 = CONCAT412(fStack316,CONCAT48(fStack320,CONCAT44(local_148._4_4_,local_148._0_4_)));
        _local_a8 = CONCAT412(*(float *)((longlong)local_res8 + 0x1c) * 0.5 + fStack316,
                              CONCAT48(*(float *)((longlong)local_res8 + 0x18) * 0.5 + fStack320,
                                       CONCAT44(*(float *)((longlong)local_res8 + 0x14) * 0.5 +
                                                local_148._4_4_,
                                                *(float *)((longlong)local_res8 + 0x10) * 0.5 +
                                                local_148._0_4_)));
        pauVar11[2] = CONCAT412(fStack316,CONCAT48(fStack320,CONCAT44(local_148._4_4_,local_148._0_4_)))
                ;
        fVar17 = (float)(**(code **)(**(longlong **)(lVar8 + 0x6fe0) + 0x48))
                (*(longlong **)(lVar8 + 0x6fe0),local_a8,0x41);
        lVar8 = DAT_140c65898;
        if (fVar17 < fVar30) {
            fVar17 = fVar17 * fVar29;
            _local_118 = CONCAT412(fVar17 * (fStack156 - fStack268) + fStack268,
                                   CONCAT48(fVar17 * (fStack160 - fStack272) + fStack272,
                                            CONCAT44(fVar17 * (local_a8._4_4_ - local_118._4_4_) +
                                                     local_118._4_4_,
                                                     fVar17 * (local_a8._0_4_ - local_118._0_4_) +
                                                     local_118._0_4_)));
        }
        *(float *)pauVar11[2] = local_148._0_4_;
        *(float *)(pauVar11[2] + 4) = local_148._4_4_;
        *(float *)(pauVar11[2] + 8) = fStack320;
        *(float *)(pauVar11[2] + 0xc) = fStack316;
        iVar6 = (**(code **)(**(longlong **)(lVar8 + 0x6fe0) + 0x38))
                (*(longlong **)(lVar8 + 0x6fe0),local_118);
        if (iVar6 != 0) {
            _local_118 = pauVar11[2];
        }
        *(float *)pauVar11[2] = local_148._0_4_;
        *(float *)(pauVar11[2] + 4) = local_148._4_4_;
        *(float *)(pauVar11[2] + 8) = fStack320;
        *(float *)(pauVar11[2] + 0xc) = fStack316;
        local_168 = 0;
        uStack356 = 8;
        local_160 = 0;
        local_158 = (undefined *)0x0;
        local_158 = (undefined *)FUN_14018c320(0,0x240,8);
        uVar14 = (ulonglong)local_168;
        local_168 = local_168 + 1;
        *(undefined4 *)(local_158 + uVar14 * 0x48) = 1;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 8) = 0;
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x6fe0) + 0x40))
                (*(longlong **)(DAT_140c65898 + 0x6fe0),local_118,1,uVar22,&local_168,
                 in_stack_fffffffffffffe60 & 0xffffffff00000000 | (ulonglong)DAT_140c636a8);
        uVar22 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar27 = 0;
        local_138 = ZEXT816(0);
        FUN_1401c9800(&local_res8,local_138);
        if (local_168 == uStack356) {
            if (uStack356 == 0) {
                uVar14 = 8;
            }
            else {
                uVar14 = (ulonglong)(uStack356 * 2);
            }
            uStack356 = (uint)uVar14;
            local_158 = (undefined *)FUN_14018c320(local_158,uVar14 * 0x48,8);
        }
        uVar14 = (ulonglong)local_168;
        local_168 = local_168 + 1;
        local_138 = CONCAT412(uVar27,CONCAT48(uVar25,CONCAT44(uVar24,uVar22)));
        *(undefined4 *)(local_158 + uVar14 * 0x48) = 8;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 8) = (undefined4)local_res8;
        *(undefined2 *)(local_158 + uVar14 * 0x48 + 0xc) = local_res8._4_2_;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 0x10) = 0;
        FUN_1401c9800(&local_res8,local_138);
        if (local_168 == uStack356) {
            if (uStack356 == 0) {
                uVar14 = 8;
            }
            else {
                uVar14 = (ulonglong)(uStack356 * 2);
            }
            uStack356 = (uint)uVar14;
            local_158 = (undefined *)FUN_14018c320(local_158,uVar14 * 0x48,8);
        }
        uVar14 = (ulonglong)local_168;
        local_168 = local_168 + 1;
        *(undefined4 *)(local_158 + uVar14 * 0x48) = 0xb;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 8) = (undefined4)local_res8;
        *(undefined2 *)(local_158 + uVar14 * 0x48 + 0xc) = local_res8._4_2_;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 0x10) = 0;
        uVar13 = FUN_1401b3170(local_138,param_1 + 0x1140);
        uVar19 = FUN_14079a780(&local_168,uVar13,0);
        if (local_168 == uStack356) {
            if (uStack356 == 0) {
                uVar14 = 8;
            }
            else {
                uVar14 = (ulonglong)(uStack356 * 2);
            }
            uStack356 = (uint)uVar14;
            local_158 = (undefined *)FUN_14018c320(local_158,uVar14 * 0x48,8);
            uVar19 = extraout_XMM0_Da;
        }
        uVar14 = (ulonglong)local_168;
        local_168 = local_168 + 1;
        *(undefined4 *)(local_158 + uVar14 * 0x48) = 0x1b;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 8) = 0;
        if (plVar9[2] == 0) {
            if (plVar9[5] == 0) {
                uVar15 = 0;
                if (*(int *)((longlong)plVar9 + 0xc) == 9) {
                    if (*(int *)(plVar9 + 1) == 6) {
                        uVar15 = 7;
                    }
                    else {
                        uVar15 = 4;
                        if (*(int *)(plVar9 + 1) != 9) {
                            uVar15 = 0;
                        }
                    }
                }
            }
            else {
                uVar15 = *(uint *)(plVar9[5] + 0x1c);
            }
        }
        else {
            uVar15 = *(uint *)(plVar9[2] + 0x158);
        }
        if ((*(int *)((longlong)plVar9 + 0x24) != 0) && (*(byte *)((longlong)plVar9 + 0x26) != 0)) {
            uVar15 = (uint)*(byte *)((longlong)plVar9 + 0x26);
        }
        if ((uVar15 != 0) && ((int)uVar15 < *(int *)(DAT_140c658f0 + 0x168))) {
            fVar30 = *(float *)(*(longlong *)(DAT_140c658f0 + 0x160) + (longlong)(int)uVar15 * 4);
        }
        FUN_1401c96d0(uVar19,fVar30,&local_res8);
        if (local_168 == uStack356) {
            if (uStack356 == 0) {
                uVar14 = 8;
            }
            else {
                uVar14 = (ulonglong)(uStack356 * 2);
            }
            uStack356 = (uint)uVar14;
            local_158 = (undefined *)FUN_14018c320(local_158,uVar14 * 0x48,8);
        }
        uVar4 = DAT_140c636a8;
        uVar14 = (ulonglong)local_168;
        local_168 = local_168 + 1;
        *(undefined4 *)(local_158 + uVar14 * 0x48) = 0x16;
        *(undefined2 *)(local_158 + uVar14 * 0x48 + 8) = (undefined2)local_res8;
        *(undefined4 *)(local_158 + uVar14 * 0x48 + 0xc) = 0;
        FUN_1405b3b80(param_1,&local_168,uVar4,0,param_1 + 0xdf0);
        uVar19 = 0x3600;
        lVar8 = FUN_14020ce20(uVar15);
        if (lVar8 != 0) {
            uVar19 = *(undefined4 *)(lVar8 + 0x14);
        }
        if ((plVar9[2] == 0) || (*(int *)(plVar9[2] + 0x140) != 0x18)) {
            if ((plVar9[5] != 0) && (uVar15 == 0)) {
                uVar19 = 0x3c00;
            }
        }
        else {
            uVar19 = 0x3c00;
        }
        lVar8 = FUN_140248f00(uVar19);
        if (lVar8 != 0) {
            local_138 = CONCAT412(uVar27,CONCAT48(uVar25,CONCAT44(uVar24,uVar22)));
            FUN_1405787d0(local_138,0,*(undefined4 *)(param_1 + 8));
        }
        FUN_1403da9c0();
        local_res8 = (longlong *)0x0;
        FUN_1402d9b70(1,local_138,&local_res8);
        plVar9 = local_res8;
        (**(code **)(**(longlong **)(param_1 + 0x3698) + 0x180))();
        if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 8))(plVar9);
        }
        FUN_14079a4f0(&local_168);
        FUN_14018b900(local_158);
    }
    if (*(int *)(param_1 + 0x1cc) != 0) {
        FUN_140474660(param_1);
    }
    return;
}



void FUN_14045ffd0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;

    lVar1 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x38) = param_2;
    if ((*(longlong *)(lVar1 + 0x78) == param_1) && (*(longlong *)(lVar1 + 0x6d90) != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"StanceChanged","");
        lVar1 = DAT_140c65898;
    }
    if ((*(longlong *)(lVar1 + 0x78) != 0) &&
        (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(lVar1 + 0x78) + 8))) {
        FUN_1403cdbf0(lVar1);
        lVar1 = DAT_140c65898;
        *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"UnitLevelChanged",&DAT_1409ee04c,
                  *(undefined4 *)(param_1 + 8));
    return;
}



void FUN_140460070(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;

    lVar1 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    if ((*(longlong *)(lVar1 + 0x78) != 0) &&
        (uVar2 = 0, *(int *)(param_1 + 8) == *(int *)(*(longlong *)(lVar1 + 0x78) + 8))) {
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0xa4) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0xa4));
        }
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0xbc) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 200) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0xbc));
        }
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0xd4) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0xe0) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0xd4));
        }
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0xec) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0xf8) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0xec));
        }
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0x104) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0x110) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0x104));
        }
        uVar4 = uVar2;
        if (*(int *)(lVar1 + 0x11c) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0x128) + uVar4 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0x11c));
        }
        if (*(int *)(lVar1 + 0x134) != 0) {
            do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0x140) + uVar2 * 8) != 0) {
                    FUN_14056a430();
                }
                uVar3 = (int)uVar2 + 1;
                uVar2 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(lVar1 + 0x134));
        }
        *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitLevelChanged",&DAT_1409ee04c,
                  *(undefined4 *)(param_1 + 8));
    return;
}



undefined8 FUN_140460250(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 uVar4;
    uint uVar5;

    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
        uVar4 = 0;
        if ((*(byte *)(lVar1 + 0x90) & 8) != 0) {
            lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
            uVar3 = 0;
            uVar5 = uVar3;
            if ((lVar2 != 0) && (uVar5 = *(uint *)(lVar2 + 0x3c), *(uint *)(lVar2 + 0x3c) == 0)) {
                uVar5 = *(uint *)(lVar2 + 0x38);
            }
            if (*(ushort *)(lVar1 + 0xb0) <= uVar5) {
                if ((lVar2 != 0) && (uVar3 = *(uint *)(lVar2 + 0x3c), uVar3 == 0)) {
                    uVar3 = *(uint *)(lVar2 + 0x38);
                }
                if (uVar3 <= *(ushort *)(lVar1 + 0xb2)) {
                    uVar4 = 1;
                }
            }
        }
        return uVar4;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1404602f0(void)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2938 & 1) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 1;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc293c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc293c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2938 & 2) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 2;
        lVar1 = FUN_140200220(0x4d5);
        _DAT_140dc2940 = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2940 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2938 & 4) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 4;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc2944 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2944 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2938 & 8) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 8;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc2948 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2948 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2938 & 0x10) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 0x10;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc294c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc294c = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2938 & 0x20) == 0) {
        DAT_140dc2938 = DAT_140dc2938 | 0x20;
        lVar1 = FUN_140200220(0x4d5);
        if (lVar1 == 0) {
            DAT_140dc2950 = 1;
        }
        else {
            DAT_140dc2950 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_1404539a0();
    lVar1 = FUN_140200220(0x58);
    if (lVar1 == 0) {
        uVar2 = 500;
    }
    else {
        uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404604d0(void)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2954 & 1) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 1;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc2958 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2958 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2954 & 2) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 2;
        lVar1 = FUN_140200220(0x4d5);
        _DAT_140dc295c = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc295c = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2954 & 4) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 4;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc2960 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2960 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2954 & 8) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 8;
        lVar1 = FUN_140200220(0x4d5);
        DAT_140dc2964 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2964 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2954 & 0x10) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 0x10;
        lVar1 = FUN_140200220(0x4d5);
        _DAT_140dc2968 = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2968 = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2954 & 0x20) == 0) {
        DAT_140dc2954 = DAT_140dc2954 | 0x20;
        lVar1 = FUN_140200220(0x4d5);
        if (lVar1 == 0) {
            DAT_140dc296c = 1;
        }
        else {
            DAT_140dc296c = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453a80();
    return;
}



void FUN_140460670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2970 & 1) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 1;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2974 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2974 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2970 & 2) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 2;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2978 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2978 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2970 & 4) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 4;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc297c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc297c = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2970 & 8) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 8;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2980 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2980 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2970 & 0x10) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 0x10;
        lVar1 = FUN_140200220(0x4d8);
        if (lVar1 == 0) {
            DAT_140dc2984 = 1;
        }
        else {
            DAT_140dc2984 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2970 & 0x20) == 0) {
        DAT_140dc2970 = DAT_140dc2970 | 0x20;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2988 = 1;
        if (lVar1 != 0) {
            DAT_140dc2988 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2978,DAT_140dc2974,param_3,DAT_140dc297c);
    return;
}



void FUN_140460850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc298c & 1) == 0) {
        DAT_140dc298c = DAT_140dc298c | 1;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2990 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2990 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc298c & 2) == 0) {
        DAT_140dc298c = DAT_140dc298c | 2;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2994 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2994 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc298c & 4) == 0) {
        DAT_140dc298c = DAT_140dc298c | 4;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc2998 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2998 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc298c & 8) == 0) {
        DAT_140dc298c = DAT_140dc298c | 8;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc299c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc299c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc298c & 0x10) == 0) {
        DAT_140dc298c = DAT_140dc298c | 0x10;
        lVar1 = FUN_140200220(0x4d8);
        if (lVar1 == 0) {
            DAT_140dc29a0 = 1;
        }
        else {
            DAT_140dc29a0 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc298c & 0x20) == 0) {
        DAT_140dc298c = DAT_140dc298c | 0x20;
        lVar1 = FUN_140200220(0x4d8);
        DAT_140dc29a4 = 1;
        if (lVar1 != 0) {
            DAT_140dc29a4 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2994,DAT_140dc2990,param_3,DAT_140dc2998);
    return;
}



void FUN_140460a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc29a8 & 1) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 1;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29ac = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29ac = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc29a8 & 2) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 2;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29b0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29b0 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc29a8 & 4) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 4;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29b4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29b4 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc29a8 & 8) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 8;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29b8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29b8 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc29a8 & 0x10) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 0x10;
        lVar1 = FUN_140200220(0x4f6);
        if (lVar1 == 0) {
            DAT_140dc29bc = 1;
        }
        else {
            DAT_140dc29bc = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc29a8 & 0x20) == 0) {
        DAT_140dc29a8 = DAT_140dc29a8 | 0x20;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29c0 = 1;
        if (lVar1 != 0) {
            DAT_140dc29c0 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc29b0,DAT_140dc29ac,param_3,DAT_140dc29b4);
    return;
}



void FUN_140460c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc29c4 & 1) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 1;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29c8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29c8 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc29c4 & 2) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 2;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29cc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29cc = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc29c4 & 4) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 4;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29d0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29d0 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc29c4 & 8) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 8;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29d4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29d4 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc29c4 & 0x10) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 0x10;
        lVar1 = FUN_140200220(0x4f6);
        if (lVar1 == 0) {
            DAT_140dc29d8 = 1;
        }
        else {
            DAT_140dc29d8 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc29c4 & 0x20) == 0) {
        DAT_140dc29c4 = DAT_140dc29c4 | 0x20;
        lVar1 = FUN_140200220(0x4f6);
        DAT_140dc29dc = 1;
        if (lVar1 != 0) {
            DAT_140dc29dc = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc29cc,DAT_140dc29c8,param_3,DAT_140dc29d0);
    return;
}



void FUN_140460df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc29e0 & 1) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 1;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc29e4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29e4 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc29e0 & 2) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 2;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc29e8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29e8 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc29e0 & 4) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 4;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc29ec = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29ec = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc29e0 & 8) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 8;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc29f0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc29f0 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc29e0 & 0x10) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 0x10;
        lVar1 = FUN_140200220(0x4da);
        if (lVar1 == 0) {
            DAT_140dc29f4 = 1;
        }
        else {
            DAT_140dc29f4 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc29e0 & 0x20) == 0) {
        DAT_140dc29e0 = DAT_140dc29e0 | 0x20;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc29f8 = 1;
        if (lVar1 != 0) {
            DAT_140dc29f8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc29e8,DAT_140dc29e4,param_3,DAT_140dc29ec);
    return;
}



void FUN_140460fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc29fc & 1) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 1;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc2a00 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a00 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc29fc & 2) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 2;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc2a04 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a04 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc29fc & 4) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 4;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc2a08 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a08 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc29fc & 8) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 8;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc2a0c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a0c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc29fc & 0x10) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 0x10;
        lVar1 = FUN_140200220(0x4da);
        if (lVar1 == 0) {
            DAT_140dc2a10 = 1;
        }
        else {
            DAT_140dc2a10 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc29fc & 0x20) == 0) {
        DAT_140dc29fc = DAT_140dc29fc | 0x20;
        lVar1 = FUN_140200220(0x4da);
        DAT_140dc2a14 = 1;
        if (lVar1 != 0) {
            DAT_140dc2a14 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2a04,DAT_140dc2a00,param_3,DAT_140dc2a08);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404611b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2a18 & 1) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 1;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a1c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a1c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2a18 & 2) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 2;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a20 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a20 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2a18 & 4) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 4;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a24 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a24 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2a18 & 8) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 8;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a28 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a28 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2a18 & 0x10) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 0x10;
        lVar1 = FUN_140200220(0x4dc);
        _DAT_140dc2a2c = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2a2c = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2a18 & 0x20) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 0x20;
        lVar1 = FUN_140200220(0x4dc);
        if (lVar1 == 0) {
            DAT_140dc2a30 = 1;
        }
        else {
            DAT_140dc2a30 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2a18 & 0x40) == 0) {
        DAT_140dc2a18 = DAT_140dc2a18 | 0x40;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a34 = 1;
        if (lVar1 != 0) {
            DAT_140dc2a34 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2a20,DAT_140dc2a1c,param_3,DAT_140dc2a24);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404613d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2a38 & 1) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 1;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a3c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a3c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2a38 & 2) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 2;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a40 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a40 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2a38 & 4) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 4;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a44 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a44 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2a38 & 8) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 8;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a48 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a48 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2a38 & 0x10) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 0x10;
        lVar1 = FUN_140200220(0x4dc);
        _DAT_140dc2a4c = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2a4c = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2a38 & 0x20) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 0x20;
        lVar1 = FUN_140200220(0x4dc);
        if (lVar1 == 0) {
            DAT_140dc2a50 = 1;
        }
        else {
            DAT_140dc2a50 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2a38 & 0x40) == 0) {
        DAT_140dc2a38 = DAT_140dc2a38 | 0x40;
        lVar1 = FUN_140200220(0x4dc);
        DAT_140dc2a54 = 1;
        if (lVar1 != 0) {
            DAT_140dc2a54 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2a40,DAT_140dc2a3c,param_3,DAT_140dc2a44);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404615f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2a58 & 1) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 1;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a5c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a5c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2a58 & 2) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 2;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a60 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a60 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2a58 & 4) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 4;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a64 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a64 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2a58 & 8) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 8;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a68 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a68 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2a58 & 0x10) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 0x10;
        lVar1 = FUN_140200220(0x4f7);
        _DAT_140dc2a6c = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2a6c = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2a58 & 0x20) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 0x20;
        lVar1 = FUN_140200220(0x4f7);
        if (lVar1 == 0) {
            DAT_140dc2a70 = 1;
        }
        else {
            DAT_140dc2a70 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2a58 & 0x40) == 0) {
        DAT_140dc2a58 = DAT_140dc2a58 | 0x40;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a74 = 1;
        if (lVar1 != 0) {
            DAT_140dc2a74 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2a60,DAT_140dc2a5c,param_3,DAT_140dc2a64);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140461810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2a78 & 1) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 1;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a7c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a7c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2a78 & 2) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 2;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a80 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a80 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2a78 & 4) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 4;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a84 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a84 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2a78 & 8) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 8;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a88 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a88 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2a78 & 0x10) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 0x10;
        lVar1 = FUN_140200220(0x4f7);
        _DAT_140dc2a8c = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2a8c = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2a78 & 0x20) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 0x20;
        lVar1 = FUN_140200220(0x4f7);
        if (lVar1 == 0) {
            DAT_140dc2a90 = 1;
        }
        else {
            DAT_140dc2a90 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2a78 & 0x40) == 0) {
        DAT_140dc2a78 = DAT_140dc2a78 | 0x40;
        lVar1 = FUN_140200220(0x4f7);
        DAT_140dc2a94 = 1;
        if (lVar1 != 0) {
            DAT_140dc2a94 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2a80,DAT_140dc2a7c,param_3,DAT_140dc2a84);
    return;
}



void FUN_140461a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2a98 & 1) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 1;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2a9c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2a9c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2a98 & 2) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 2;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2aa0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2aa0 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2a98 & 4) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 4;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2aa4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2aa4 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2a98 & 8) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 8;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2aa8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2aa8 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2a98 & 0x10) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 0x10;
        lVar1 = FUN_140200220(0x4dd);
        if (lVar1 == 0) {
            DAT_140dc2aac = 1;
        }
        else {
            DAT_140dc2aac = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2a98 & 0x20) == 0) {
        DAT_140dc2a98 = DAT_140dc2a98 | 0x20;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2ab0 = 1;
        if (lVar1 != 0) {
            DAT_140dc2ab0 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2aa0,DAT_140dc2a9c,param_3,DAT_140dc2aa4);
    return;
}



void FUN_140461c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2ab4 & 1) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 1;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2ab8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ab8 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2ab4 & 2) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 2;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2abc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2abc = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2ab4 & 4) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 4;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2ac0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ac0 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2ab4 & 8) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 8;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2ac4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ac4 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2ab4 & 0x10) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 0x10;
        lVar1 = FUN_140200220(0x4dd);
        if (lVar1 == 0) {
            DAT_140dc2ac8 = 1;
        }
        else {
            DAT_140dc2ac8 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2ab4 & 0x20) == 0) {
        DAT_140dc2ab4 = DAT_140dc2ab4 | 0x20;
        lVar1 = FUN_140200220(0x4dd);
        DAT_140dc2acc = 1;
        if (lVar1 != 0) {
            DAT_140dc2acc = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2abc,DAT_140dc2ab8,param_3,DAT_140dc2ac0);
    return;
}



void FUN_140461df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2ad0 & 1) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 1;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2ad4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ad4 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2ad0 & 2) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 2;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2ad8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ad8 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2ad0 & 4) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 4;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2adc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2adc = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2ad0 & 8) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 8;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2ae0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ae0 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2ad0 & 0x10) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 0x10;
        lVar1 = FUN_140200220(0x4f5);
        if (lVar1 == 0) {
            DAT_140dc2ae4 = 1;
        }
        else {
            DAT_140dc2ae4 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2ad0 & 0x20) == 0) {
        DAT_140dc2ad0 = DAT_140dc2ad0 | 0x20;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2ae8 = 1;
        if (lVar1 != 0) {
            DAT_140dc2ae8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2ad8,DAT_140dc2ad4,param_3,DAT_140dc2adc);
    return;
}



void FUN_140461fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2aec & 1) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 1;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2af0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2af0 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2aec & 2) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 2;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2af4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2af4 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2aec & 4) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 4;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2af8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2af8 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2aec & 8) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 8;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2afc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2afc = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2aec & 0x10) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 0x10;
        lVar1 = FUN_140200220(0x4f5);
        if (lVar1 == 0) {
            DAT_140dc2b00 = 1;
        }
        else {
            DAT_140dc2b00 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2aec & 0x20) == 0) {
        DAT_140dc2aec = DAT_140dc2aec | 0x20;
        lVar1 = FUN_140200220(0x4f5);
        DAT_140dc2b04 = 1;
        if (lVar1 != 0) {
            DAT_140dc2b04 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2af4,DAT_140dc2af0,param_3,DAT_140dc2af8);
    return;
}



void FUN_1404621b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2b08 & 1) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 1;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b0c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b0c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2b08 & 2) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 2;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b10 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b10 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2b08 & 4) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 4;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b14 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b14 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2b08 & 8) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 8;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b18 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b18 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2b08 & 0x10) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 0x10;
        lVar1 = FUN_140200220(0x4f8);
        if (lVar1 == 0) {
            DAT_140dc2b1c = 1;
        }
        else {
            DAT_140dc2b1c = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2b08 & 0x20) == 0) {
        DAT_140dc2b08 = DAT_140dc2b08 | 0x20;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b20 = 1;
        if (lVar1 != 0) {
            DAT_140dc2b20 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2b10,DAT_140dc2b0c,param_3,DAT_140dc2b14);
    return;
}



void FUN_140462390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2b24 & 1) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 1;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b28 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b28 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2b24 & 2) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 2;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b2c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b2c = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2b24 & 4) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 4;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b30 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b30 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2b24 & 8) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 8;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b34 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b34 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2b24 & 0x10) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 0x10;
        lVar1 = FUN_140200220(0x4f8);
        if (lVar1 == 0) {
            DAT_140dc2b38 = 1;
        }
        else {
            DAT_140dc2b38 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2b24 & 0x20) == 0) {
        DAT_140dc2b24 = DAT_140dc2b24 | 0x20;
        lVar1 = FUN_140200220(0x4f8);
        DAT_140dc2b3c = 1;
        if (lVar1 != 0) {
            DAT_140dc2b3c = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2b2c,DAT_140dc2b28,param_3,DAT_140dc2b30);
    return;
}



void FUN_140462570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2b40 & 1) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 1;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b44 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b44 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2b40 & 2) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 2;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b48 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b48 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2b40 & 4) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 4;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b4c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b4c = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2b40 & 8) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 8;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b50 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b50 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2b40 & 0x10) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 0x10;
        lVar1 = FUN_140200220(0x4d9);
        if (lVar1 == 0) {
            DAT_140dc2b54 = 1;
        }
        else {
            DAT_140dc2b54 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2b40 & 0x20) == 0) {
        DAT_140dc2b40 = DAT_140dc2b40 | 0x20;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b58 = 1;
        if (lVar1 != 0) {
            DAT_140dc2b58 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2b48,DAT_140dc2b44,param_3,DAT_140dc2b4c);
    return;
}



void FUN_140462750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2b5c & 1) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 1;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b60 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b60 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2b5c & 2) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 2;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b64 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b64 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2b5c & 4) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 4;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b68 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b68 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2b5c & 8) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 8;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b6c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2b6c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2b5c & 0x10) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 0x10;
        lVar1 = FUN_140200220(0x4d9);
        if (lVar1 == 0) {
            DAT_140dc2b70 = 1;
        }
        else {
            DAT_140dc2b70 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2b5c & 0x20) == 0) {
        DAT_140dc2b5c = DAT_140dc2b5c | 0x20;
        lVar1 = FUN_140200220(0x4d9);
        DAT_140dc2b74 = 1;
        if (lVar1 != 0) {
            DAT_140dc2b74 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2b64,DAT_140dc2b60,param_3,DAT_140dc2b68);
    return;
}



undefined8 FUN_140462930(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;

    fVar2 = *(float *)(param_1 + 0x6dc);
    uVar3 = 0;
    lVar1 = FUN_140200220(0x4f2);
    if (lVar1 != 0) {
        return CONCAT44(uVar3,fVar2 * *(float *)(lVar1 + 0x18));
    }
    return CONCAT44(uVar3,fVar2 * 0.25);
}



undefined8 FUN_140462980(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;

    fVar2 = *(float *)(param_1 + 0x6e4);
    uVar3 = 0;
    lVar1 = FUN_140200220(0x4f2);
    if (lVar1 != 0) {
        return CONCAT44(uVar3,fVar2 * *(float *)(lVar1 + 0x1c));
    }
    return CONCAT44(uVar3,fVar2 * 0.25);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1404629d0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;

    if ((DAT_140dc2b78 & 1) == 0) {
        DAT_140dc2b78 = DAT_140dc2b78 | 1;
        lVar2 = FUN_140200220(0x2c8);
        if (lVar2 == 0) {
            _DAT_140dc2b7c = 70.0;
        }
        else {
            _DAT_140dc2b7c = *(float *)(lVar2 + 0x18);
        }
    }
    if ((DAT_140dc2b78 & 2) == 0) {
        DAT_140dc2b78 = DAT_140dc2b78 | 2;
        lVar2 = FUN_140200220(0x2c8);
        if (lVar2 == 0) {
            DAT_140dc2b80 = 100.0;
        }
        else {
            DAT_140dc2b80 = *(float *)(lVar2 + 0x1c);
        }
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
    }
    return (float)(ulonglong)uVar1 * _DAT_140dc2b7c + DAT_140dc2b80;
}



float FUN_140462a90(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar4 = *(float *)(param_1 + 0x9fc);
    lVar1 = FUN_140200220(0x4f3);
    if (lVar1 == 0) {
        fVar3 = 0.5;
    }
    else {
        fVar3 = *(float *)(lVar1 + 0x1c);
    }
    fVar2 = (float)FUN_140462af0(param_1);
    return fVar2 * fVar3 + fVar4;
}



void FUN_140462af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    longlong lVar1;
    undefined4 uVar2;

    if ((*(float *)(param_4 + 0xab4) != 0.0) || (*(float *)(param_4 + 0x784) != 0.0)) {
        uVar2 = 0x3f000000;
        if ((DAT_140dc2b84 & 1) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 1;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2b88 = uVar2;
            if (lVar1 != 0) {
                DAT_140dc2b88 = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if ((DAT_140dc2b84 & 2) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 2;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2b8c = uVar2;
            if (lVar1 != 0) {
                DAT_140dc2b8c = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2b84 & 4) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 4;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2b90 = uVar2;
            if (lVar1 != 0) {
                DAT_140dc2b90 = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2b84 & 8) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 8;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2b94 = uVar2;
            if (lVar1 != 0) {
                DAT_140dc2b94 = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2b84 & 0x10) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 0x10;
            lVar1 = FUN_140200220(0x4db);
            if (lVar1 == 0) {
                DAT_140dc2b98 = 1;
            }
            else {
                DAT_140dc2b98 = *(undefined4 *)(lVar1 + 4);
            }
        }
        if ((DAT_140dc2b84 & 0x20) == 0) {
            DAT_140dc2b84 = DAT_140dc2b84 | 0x20;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2b9c = 1;
            if (lVar1 != 0) {
                DAT_140dc2b9c = *(undefined4 *)(lVar1 + 8);
            }
        }
        FUN_140453b60(DAT_140dc2b8c,DAT_140dc2b88,param_3,DAT_140dc2b90);
    }
    return;
}



undefined8 FUN_140462cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 uVar3;

    if ((*(float *)(param_4 + 0xab4) == 0.0) && (*(float *)(param_4 + 0x784) == 0.0)) {
        uVar2 = 0;
    }
    else {
        uVar3 = 0x3f000000;
        if ((DAT_140dc2ba0 & 1) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 1;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2ba4 = uVar3;
            if (lVar1 != 0) {
                DAT_140dc2ba4 = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if ((DAT_140dc2ba0 & 2) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 2;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2ba8 = uVar3;
            if (lVar1 != 0) {
                DAT_140dc2ba8 = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2ba0 & 4) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 4;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2bac = uVar3;
            if (lVar1 != 0) {
                DAT_140dc2bac = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2ba0 & 8) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 8;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2bb0 = uVar3;
            if (lVar1 != 0) {
                DAT_140dc2bb0 = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2ba0 & 0x10) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 0x10;
            lVar1 = FUN_140200220(0x4db);
            if (lVar1 == 0) {
                DAT_140dc2bb4 = 1;
            }
            else {
                DAT_140dc2bb4 = *(undefined4 *)(lVar1 + 4);
            }
        }
        if ((DAT_140dc2ba0 & 0x20) == 0) {
            DAT_140dc2ba0 = DAT_140dc2ba0 | 0x20;
            lVar1 = FUN_140200220(0x4db);
            DAT_140dc2bb8 = 1;
            if (lVar1 != 0) {
                DAT_140dc2bb8 = *(undefined4 *)(lVar1 + 8);
            }
        }
        uVar2 = FUN_140453c50(DAT_140dc2ba8,DAT_140dc2ba4,param_3,DAT_140dc2bac);
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_140462ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;
    float fVar4;

    uVar3 = 0x3f000000;
    if ((DAT_140dc2bbc & 1) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 1;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bc0 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2bc0 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2bbc & 2) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 2;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bc4 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2bc4 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2bbc & 4) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 4;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bc8 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2bc8 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2bbc & 8) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 8;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bcc = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2bcc = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2bbc & 0x10) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 0x10;
        lVar1 = FUN_140200220(0x4ce);
        _DAT_140dc2bd0 = uVar3;
        if (lVar1 != 0) {
            _DAT_140dc2bd0 = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2bbc & 0x20) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 0x20;
        lVar1 = FUN_140200220(0x4ce);
        if (lVar1 == 0) {
            DAT_140dc2bd4 = 1;
        }
        else {
            DAT_140dc2bd4 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2bbc & 0x40) == 0) {
        DAT_140dc2bbc = DAT_140dc2bbc | 0x40;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bd8 = 1;
        if (lVar1 != 0) {
            DAT_140dc2bd8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    fVar2 = (float)FUN_140453b60(DAT_140dc2bc4,DAT_140dc2bc0,param_3,DAT_140dc2bc8);
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
        fVar4 = fVar2;
    }
    return fVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140463120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2bdc & 1) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 1;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2be0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2be0 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2bdc & 2) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 2;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2be4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2be4 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2bdc & 4) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 4;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2be8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2be8 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2bdc & 8) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 8;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bec = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2bec = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2bdc & 0x10) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 0x10;
        lVar1 = FUN_140200220(0x4ce);
        _DAT_140dc2bf0 = uVar2;
        if (lVar1 != 0) {
            _DAT_140dc2bf0 = *(undefined4 *)(lVar1 + 0x28);
        }
    }
    if ((DAT_140dc2bdc & 0x20) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 0x20;
        lVar1 = FUN_140200220(0x4ce);
        if (lVar1 == 0) {
            DAT_140dc2bf4 = 1;
        }
        else {
            DAT_140dc2bf4 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2bdc & 0x40) == 0) {
        DAT_140dc2bdc = DAT_140dc2bdc | 0x40;
        lVar1 = FUN_140200220(0x4ce);
        DAT_140dc2bf8 = 1;
        if (lVar1 != 0) {
            DAT_140dc2bf8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2be4,DAT_140dc2be0,param_3,DAT_140dc2be8);
    return;
}



void FUN_140463340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2bfc & 1) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 1;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c00 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c00 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2bfc & 2) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 2;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c04 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c04 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2bfc & 4) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 4;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c08 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c08 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2bfc & 8) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 8;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c0c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c0c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2bfc & 0x10) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 0x10;
        lVar1 = FUN_140200220(0x4d3);
        if (lVar1 == 0) {
            DAT_140dc2c10 = 1;
        }
        else {
            DAT_140dc2c10 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2bfc & 0x20) == 0) {
        DAT_140dc2bfc = DAT_140dc2bfc | 0x20;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c14 = 1;
        if (lVar1 != 0) {
            DAT_140dc2c14 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2c04,DAT_140dc2c00,param_3,DAT_140dc2c08);
    return;
}



void FUN_140463520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2c18 & 1) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 1;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c1c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c1c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2c18 & 2) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 2;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c20 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c20 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2c18 & 4) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 4;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c24 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c24 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2c18 & 8) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 8;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c28 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c28 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2c18 & 0x10) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 0x10;
        lVar1 = FUN_140200220(0x4d3);
        if (lVar1 == 0) {
            DAT_140dc2c2c = 1;
        }
        else {
            DAT_140dc2c2c = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2c18 & 0x20) == 0) {
        DAT_140dc2c18 = DAT_140dc2c18 | 0x20;
        lVar1 = FUN_140200220(0x4d3);
        DAT_140dc2c30 = 1;
        if (lVar1 != 0) {
            DAT_140dc2c30 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2c20,DAT_140dc2c1c,param_3,DAT_140dc2c24);
    return;
}



void FUN_140463700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2c34 & 1) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 1;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c38 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c38 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2c34 & 2) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 2;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c3c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c3c = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2c34 & 4) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 4;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c40 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c40 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2c34 & 8) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 8;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c44 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c44 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2c34 & 0x10) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 0x10;
        lVar1 = FUN_140200220(0x4cf);
        if (lVar1 == 0) {
            DAT_140dc2c48 = 1;
        }
        else {
            DAT_140dc2c48 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2c34 & 0x20) == 0) {
        DAT_140dc2c34 = DAT_140dc2c34 | 0x20;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c4c = 1;
        if (lVar1 != 0) {
            DAT_140dc2c4c = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2c3c,DAT_140dc2c38,param_3,DAT_140dc2c40);
    return;
}



void FUN_1404638e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2c50 & 1) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 1;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c54 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c54 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2c50 & 2) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 2;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c58 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c58 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2c50 & 4) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 4;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c5c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c5c = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2c50 & 8) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 8;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c60 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c60 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2c50 & 0x10) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 0x10;
        lVar1 = FUN_140200220(0x4cf);
        if (lVar1 == 0) {
            DAT_140dc2c64 = 1;
        }
        else {
            DAT_140dc2c64 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2c50 & 0x20) == 0) {
        DAT_140dc2c50 = DAT_140dc2c50 | 0x20;
        lVar1 = FUN_140200220(0x4cf);
        DAT_140dc2c68 = 1;
        if (lVar1 != 0) {
            DAT_140dc2c68 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2c58,DAT_140dc2c54,param_3,DAT_140dc2c5c);
    return;
}



void FUN_140463ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2c6c & 1) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 1;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c70 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c70 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2c6c & 2) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 2;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c74 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c74 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2c6c & 4) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 4;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c78 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c78 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2c6c & 8) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 8;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c7c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c7c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2c6c & 0x10) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 0x10;
        lVar1 = FUN_140200220(0x4d4);
        if (lVar1 == 0) {
            DAT_140dc2c80 = 1;
        }
        else {
            DAT_140dc2c80 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2c6c & 0x20) == 0) {
        DAT_140dc2c6c = DAT_140dc2c6c | 0x20;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c84 = 1;
        if (lVar1 != 0) {
            DAT_140dc2c84 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2c74,DAT_140dc2c70,param_3,DAT_140dc2c78);
    return;
}



void FUN_140463ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2c88 & 1) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 1;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c8c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c8c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2c88 & 2) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 2;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c90 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c90 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2c88 & 4) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 4;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c94 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c94 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2c88 & 8) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 8;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2c98 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2c98 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2c88 & 0x10) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 0x10;
        lVar1 = FUN_140200220(0x4d4);
        if (lVar1 == 0) {
            DAT_140dc2c9c = 1;
        }
        else {
            DAT_140dc2c9c = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2c88 & 0x20) == 0) {
        DAT_140dc2c88 = DAT_140dc2c88 | 0x20;
        lVar1 = FUN_140200220(0x4d4);
        DAT_140dc2ca0 = 1;
        if (lVar1 != 0) {
            DAT_140dc2ca0 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2c90,DAT_140dc2c8c,param_3,DAT_140dc2c94);
    return;
}



void FUN_140463e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2ca4 & 1) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 1;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2ca8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ca8 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2ca4 & 2) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 2;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cac = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cac = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2ca4 & 4) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 4;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cb0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cb0 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2ca4 & 8) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 8;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cb4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cb4 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2ca4 & 0x10) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 0x10;
        lVar1 = FUN_140200220(0x4d0);
        if (lVar1 == 0) {
            DAT_140dc2cb8 = 1;
        }
        else {
            DAT_140dc2cb8 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2ca4 & 0x20) == 0) {
        DAT_140dc2ca4 = DAT_140dc2ca4 | 0x20;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cbc = 1;
        if (lVar1 != 0) {
            DAT_140dc2cbc = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2cac,DAT_140dc2ca8,param_3,DAT_140dc2cb0);
    return;
}



void FUN_140464060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2cc0 & 1) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 1;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cc4 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cc4 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2cc0 & 2) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 2;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cc8 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cc8 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2cc0 & 4) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 4;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2ccc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2ccc = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2cc0 & 8) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 8;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cd0 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cd0 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2cc0 & 0x10) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 0x10;
        lVar1 = FUN_140200220(0x4d0);
        if (lVar1 == 0) {
            DAT_140dc2cd4 = 1;
        }
        else {
            DAT_140dc2cd4 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2cc0 & 0x20) == 0) {
        DAT_140dc2cc0 = DAT_140dc2cc0 | 0x20;
        lVar1 = FUN_140200220(0x4d0);
        DAT_140dc2cd8 = 1;
        if (lVar1 != 0) {
            DAT_140dc2cd8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2cc8,DAT_140dc2cc4,param_3,DAT_140dc2ccc);
    return;
}



float FUN_140464240(void)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;
    float fVar4;

    uVar3 = 0x3f000000;
    if ((DAT_140dc2cdc & 1) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 1;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2ce0 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2ce0 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2cdc & 2) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 2;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2ce4 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2ce4 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2cdc & 4) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 4;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2ce8 = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2ce8 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2cdc & 8) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 8;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2cec = uVar3;
        if (lVar1 != 0) {
            DAT_140dc2cec = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2cdc & 0x10) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 0x10;
        lVar1 = FUN_140200220(0x4d2);
        if (lVar1 == 0) {
            DAT_140dc2cf0 = 1;
        }
        else {
            DAT_140dc2cf0 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2cdc & 0x20) == 0) {
        DAT_140dc2cdc = DAT_140dc2cdc | 0x20;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2cf4 = 1;
        if (lVar1 != 0) {
            DAT_140dc2cf4 = *(undefined4 *)(lVar1 + 8);
        }
    }
    fVar2 = (float)FUN_140453b60(DAT_140dc2ce4,DAT_140dc2ce0);
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
        fVar4 = fVar2;
    }
    return fVar4;
}



void FUN_140464430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2cf8 & 1) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 1;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2cfc = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2cfc = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2cf8 & 2) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 2;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2d00 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2d00 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2cf8 & 4) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 4;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2d04 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2d04 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2cf8 & 8) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 8;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2d08 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2d08 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2cf8 & 0x10) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 0x10;
        lVar1 = FUN_140200220(0x4d2);
        if (lVar1 == 0) {
            DAT_140dc2d0c = 1;
        }
        else {
            DAT_140dc2d0c = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2cf8 & 0x20) == 0) {
        DAT_140dc2cf8 = DAT_140dc2cf8 | 0x20;
        lVar1 = FUN_140200220(0x4d2);
        DAT_140dc2d10 = 1;
        if (lVar1 != 0) {
            DAT_140dc2d10 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2d00,DAT_140dc2cfc,param_3,DAT_140dc2d04);
    return;
}



float FUN_140464600(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar4 = 0.35;
    if ((DAT_140dc2d14 & 1) == 0) {
        DAT_140dc2d14 = DAT_140dc2d14 | 1;
        lVar1 = FUN_140200220(0x47a);
        DAT_140dc2d18 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d18 = *(float *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2d14 & 2) == 0) {
        DAT_140dc2d14 = DAT_140dc2d14 | 2;
        lVar1 = FUN_140200220(0x47b);
        DAT_140dc2d1c = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d1c = *(float *)(lVar1 + 0x18);
        }
    }
    fVar4 = 1.0;
    if ((DAT_140dc2d14 & 4) == 0) {
        DAT_140dc2d14 = DAT_140dc2d14 | 4;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d20 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d20 = *(float *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2d14 & 8) == 0) {
        DAT_140dc2d14 = DAT_140dc2d14 | 8;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d24 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d24 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar2 = (float)(**(code **)(*param_1 + 0xa8))(param_1,0,param_3,param_4,auVar5);
    fVar4 = DAT_140dc2d20;
    fVar3 = DAT_140dc2d18;
    if (param_2 != 0) {
        fVar4 = DAT_140dc2d24;
        fVar3 = DAT_140dc2d1c;
    }
    return ((fVar4 - fVar3) - (float)((uint)(fVar3 * fVar2) ^ 0x80000000)) +
           *(float *)((longlong)param_1 + 0xaf4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_140464750(longlong *param_1,int param_2)

{
    longlong lVar1;
    float fVar2;
    float fVar3;

    fVar3 = 0.35;
    if ((DAT_140dc2d28 & 1) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 1;
        lVar1 = FUN_140200220(0x47a);
        _DAT_140dc2d2c = fVar3;
        if (lVar1 != 0) {
            _DAT_140dc2d2c = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar2 = 0.0;
    if ((DAT_140dc2d28 & 2) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 2;
        lVar1 = FUN_140200220(0x47a);
        DAT_140dc2d30 = fVar2;
        if (lVar1 != 0) {
            DAT_140dc2d30 = *(float *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2d28 & 4) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 4;
        lVar1 = FUN_140200220(0x47b);
        _DAT_140dc2d34 = fVar3;
        if (lVar1 != 0) {
            _DAT_140dc2d34 = *(float *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2d28 & 8) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 8;
        lVar1 = FUN_140200220(0x47b);
        DAT_140dc2d38 = fVar2;
        if (lVar1 != 0) {
            DAT_140dc2d38 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar3 = 1.0;
    if ((DAT_140dc2d28 & 0x10) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 0x10;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d3c = fVar3;
        if (lVar1 != 0) {
            DAT_140dc2d3c = *(float *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2d28 & 0x20) == 0) {
        DAT_140dc2d28 = DAT_140dc2d28 | 0x20;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d40 = fVar3;
        if (lVar1 != 0) {
            DAT_140dc2d40 = *(float *)(lVar1 + 0x24);
        }
    }
    fVar3 = (float)(**(code **)(*param_1 + 0xa8))(param_1,0);
    if (param_2 == 0) {
        fVar2 = DAT_140dc2d3c - _DAT_140dc2d2c;
        fVar3 = (DAT_140dc2d30 - fVar3) * _DAT_140dc2d2c;
    }
    else {
        fVar2 = DAT_140dc2d40 - _DAT_140dc2d34;
        fVar3 = (DAT_140dc2d38 - fVar3) * _DAT_140dc2d34;
    }
    return (fVar2 - fVar3) + *(float *)((longlong)param_1 + 0xaf4);
}



float FUN_140464930(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar4 = 0.35;
    if ((DAT_140dc2d44 & 1) == 0) {
        DAT_140dc2d44 = DAT_140dc2d44 | 1;
        lVar1 = FUN_140200220(0x47a);
        DAT_140dc2d48 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d48 = *(float *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2d44 & 2) == 0) {
        DAT_140dc2d44 = DAT_140dc2d44 | 2;
        lVar1 = FUN_140200220(0x47b);
        DAT_140dc2d4c = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d4c = *(float *)(lVar1 + 0x18);
        }
    }
    fVar4 = 1.0;
    if ((DAT_140dc2d44 & 4) == 0) {
        DAT_140dc2d44 = DAT_140dc2d44 | 4;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d50 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d50 = *(float *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2d44 & 8) == 0) {
        DAT_140dc2d44 = DAT_140dc2d44 | 8;
        lVar1 = FUN_140200220(0x47c);
        DAT_140dc2d54 = fVar4;
        if (lVar1 != 0) {
            DAT_140dc2d54 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar2 = (float)(**(code **)(*param_1 + 0xa8))(param_1,1,param_3,param_4,auVar5);
    fVar4 = DAT_140dc2d50;
    fVar3 = DAT_140dc2d48;
    if (param_2 != 0) {
        fVar4 = DAT_140dc2d54;
        fVar3 = DAT_140dc2d4c;
    }
    return ((fVar4 - fVar3) - fVar3 * fVar2) - *(float *)((longlong)param_1 + 0xafc);
}



void FUN_140464a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    uVar4 = 0x3f000000;
    if (param_5 == 0) {
        if ((DAT_140dc2d58 & 0x40) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x40;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2d74 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d74 = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if (-1 < (char)DAT_140dc2d58) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x80;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2d78 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d78 = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2d58 >> 8 & 1) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x100;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2d7c = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d7c = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2d58 >> 9 & 1) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x200;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2d80 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d80 = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2d58 >> 10 & 1) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x400;
            lVar1 = FUN_140200220(0x4d6);
            if (lVar1 == 0) {
                DAT_140dc2d84 = 1;
            }
            else {
                DAT_140dc2d84 = *(undefined4 *)(lVar1 + 4);
            }
        }
        uVar4 = DAT_140dc2d78;
        uVar2 = DAT_140dc2d74;
        uVar3 = DAT_140dc2d7c;
        if ((DAT_140dc2d58 >> 0xb & 1) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x800;
            lVar1 = FUN_140200220(0x4d6);
            uVar4 = DAT_140dc2d78;
            uVar2 = DAT_140dc2d74;
            uVar3 = DAT_140dc2d7c;
            DAT_140dc2d88 = 1;
            if (lVar1 != 0) {
                DAT_140dc2d88 = *(undefined4 *)(lVar1 + 8);
            }
        }
    }
    else {
        if ((DAT_140dc2d58 & 1) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 1;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d5c = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d5c = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if ((DAT_140dc2d58 & 2) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 2;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d60 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d60 = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2d58 & 4) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 4;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d64 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d64 = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2d58 & 8) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 8;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d68 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d68 = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2d58 & 0x10) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x10;
            lVar1 = FUN_140200220(0x4d7);
            if (lVar1 == 0) {
                DAT_140dc2d6c = 1;
            }
            else {
                DAT_140dc2d6c = *(undefined4 *)(lVar1 + 4);
            }
        }
        uVar4 = DAT_140dc2d60;
        uVar2 = DAT_140dc2d5c;
        uVar3 = DAT_140dc2d64;
        if ((DAT_140dc2d58 & 0x20) == 0) {
            DAT_140dc2d58 = DAT_140dc2d58 | 0x20;
            lVar1 = FUN_140200220(0x4d7);
            uVar4 = DAT_140dc2d60;
            uVar2 = DAT_140dc2d5c;
            uVar3 = DAT_140dc2d64;
            DAT_140dc2d70 = 1;
            if (lVar1 != 0) {
                DAT_140dc2d70 = *(undefined4 *)(lVar1 + 8);
            }
        }
    }
    FUN_140453b60(uVar4,uVar2,param_3,uVar3);
    return;
}



void FUN_140464de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    uVar4 = 0x3f000000;
    if (param_5 == 0) {
        if ((DAT_140dc2d8c & 0x40) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x40;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2da8 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2da8 = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if (-1 < (char)DAT_140dc2d8c) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x80;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2dac = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2dac = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2d8c >> 8 & 1) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x100;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2db0 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2db0 = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2d8c >> 9 & 1) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x200;
            lVar1 = FUN_140200220(0x4d6);
            DAT_140dc2db4 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2db4 = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2d8c >> 10 & 1) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x400;
            lVar1 = FUN_140200220(0x4d6);
            if (lVar1 == 0) {
                DAT_140dc2db8 = 1;
            }
            else {
                DAT_140dc2db8 = *(undefined4 *)(lVar1 + 4);
            }
        }
        uVar4 = DAT_140dc2dac;
        uVar2 = DAT_140dc2da8;
        uVar3 = DAT_140dc2db0;
        if ((DAT_140dc2d8c >> 0xb & 1) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x800;
            lVar1 = FUN_140200220(0x4d6);
            uVar4 = DAT_140dc2dac;
            uVar2 = DAT_140dc2da8;
            uVar3 = DAT_140dc2db0;
            DAT_140dc2dbc = 1;
            if (lVar1 != 0) {
                DAT_140dc2dbc = *(undefined4 *)(lVar1 + 8);
            }
        }
    }
    else {
        if ((DAT_140dc2d8c & 1) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 1;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d90 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d90 = *(undefined4 *)(lVar1 + 0x18);
            }
        }
        if ((DAT_140dc2d8c & 2) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 2;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d94 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d94 = *(undefined4 *)(lVar1 + 0x1c);
            }
        }
        if ((DAT_140dc2d8c & 4) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 4;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d98 = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d98 = *(undefined4 *)(lVar1 + 0x20);
            }
        }
        if ((DAT_140dc2d8c & 8) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 8;
            lVar1 = FUN_140200220(0x4d7);
            DAT_140dc2d9c = uVar4;
            if (lVar1 != 0) {
                DAT_140dc2d9c = *(undefined4 *)(lVar1 + 0x24);
            }
        }
        if ((DAT_140dc2d8c & 0x10) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x10;
            lVar1 = FUN_140200220(0x4d7);
            if (lVar1 == 0) {
                DAT_140dc2da0 = 1;
            }
            else {
                DAT_140dc2da0 = *(undefined4 *)(lVar1 + 4);
            }
        }
        uVar4 = DAT_140dc2d94;
        uVar2 = DAT_140dc2d90;
        uVar3 = DAT_140dc2d98;
        if ((DAT_140dc2d8c & 0x20) == 0) {
            DAT_140dc2d8c = DAT_140dc2d8c | 0x20;
            lVar1 = FUN_140200220(0x4d7);
            uVar4 = DAT_140dc2d94;
            uVar2 = DAT_140dc2d90;
            uVar3 = DAT_140dc2d98;
            DAT_140dc2da4 = 1;
            if (lVar1 != 0) {
                DAT_140dc2da4 = *(undefined4 *)(lVar1 + 8);
            }
        }
    }
    FUN_140453c50(uVar4,uVar2,param_3,uVar3);
    return;
}



void FUN_140465160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2dc0 & 1) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 1;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dc4 = 0x3f000000;
        }
        else {
            DAT_140dc2dc4 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2dc0 & 2) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 2;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dc8 = 0x3f800000;
        }
        else {
            DAT_140dc2dc8 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2dc0 & 4) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 4;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dcc = 0x42c80000;
        }
        else {
            DAT_140dc2dcc = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2dc0 & 8) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 8;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dd0 = 0;
        }
        else {
            DAT_140dc2dd0 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2dc0 & 0x10) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 0x10;
        uVar2 = FUN_140200220(0x94a);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2dd4 = (undefined4)uVar2;
    }
    if ((DAT_140dc2dc0 & 0x20) == 0) {
        DAT_140dc2dc0 = DAT_140dc2dc0 | 0x20;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dd8 = 1;
        }
        else {
            DAT_140dc2dd8 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2dc8,DAT_140dc2dc4,param_3,DAT_140dc2dcc);
    return;
}



void FUN_140465330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2ddc & 1) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 1;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2de0 = 0x3f000000;
        }
        else {
            DAT_140dc2de0 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2ddc & 2) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 2;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2de4 = 0x3f800000;
        }
        else {
            DAT_140dc2de4 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2ddc & 4) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 4;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2de8 = 0x42c80000;
        }
        else {
            DAT_140dc2de8 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2ddc & 8) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 8;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2dec = 0;
        }
        else {
            DAT_140dc2dec = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2ddc & 0x10) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 0x10;
        uVar2 = FUN_140200220(0x94a);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2df0 = (undefined4)uVar2;
    }
    if ((DAT_140dc2ddc & 0x20) == 0) {
        DAT_140dc2ddc = DAT_140dc2ddc | 0x20;
        lVar1 = FUN_140200220(0x94a);
        if (lVar1 == 0) {
            DAT_140dc2df4 = 1;
        }
        else {
            DAT_140dc2df4 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2de4,DAT_140dc2de0,param_3,DAT_140dc2de8);
    return;
}



void FUN_140465500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2df8 & 1) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 1;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2dfc = 0x3f000000;
        }
        else {
            DAT_140dc2dfc = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2df8 & 2) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 2;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e00 = 0x3f800000;
        }
        else {
            DAT_140dc2e00 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2df8 & 4) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 4;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e04 = 0x42c80000;
        }
        else {
            DAT_140dc2e04 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2df8 & 8) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 8;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e08 = 0;
        }
        else {
            DAT_140dc2e08 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2df8 & 0x10) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 0x10;
        uVar2 = FUN_140200220(0x94b);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2e0c = (undefined4)uVar2;
    }
    if ((DAT_140dc2df8 & 0x20) == 0) {
        DAT_140dc2df8 = DAT_140dc2df8 | 0x20;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e10 = 1;
        }
        else {
            DAT_140dc2e10 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2e00,DAT_140dc2dfc,param_3,DAT_140dc2e04);
    return;
}



void FUN_1404656d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2e14 & 1) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 1;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e18 = 0x3f000000;
        }
        else {
            DAT_140dc2e18 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2e14 & 2) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 2;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e1c = 0x3f800000;
        }
        else {
            DAT_140dc2e1c = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2e14 & 4) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 4;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e20 = 0x42c80000;
        }
        else {
            DAT_140dc2e20 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2e14 & 8) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 8;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e24 = 0;
        }
        else {
            DAT_140dc2e24 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2e14 & 0x10) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 0x10;
        uVar2 = FUN_140200220(0x94b);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2e28 = (undefined4)uVar2;
    }
    if ((DAT_140dc2e14 & 0x20) == 0) {
        DAT_140dc2e14 = DAT_140dc2e14 | 0x20;
        lVar1 = FUN_140200220(0x94b);
        if (lVar1 == 0) {
            DAT_140dc2e2c = 1;
        }
        else {
            DAT_140dc2e2c = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2e1c,DAT_140dc2e18,param_3,DAT_140dc2e20);
    return;
}



void FUN_1404658a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2e30 & 1) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 1;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e34 = 0x3f000000;
        }
        else {
            DAT_140dc2e34 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2e30 & 2) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 2;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e38 = 0x3f800000;
        }
        else {
            DAT_140dc2e38 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2e30 & 4) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 4;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e3c = 0x42c80000;
        }
        else {
            DAT_140dc2e3c = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2e30 & 8) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 8;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e40 = 0;
        }
        else {
            DAT_140dc2e40 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2e30 & 0x10) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 0x10;
        uVar2 = FUN_140200220(0x94c);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2e44 = (undefined4)uVar2;
    }
    if ((DAT_140dc2e30 & 0x20) == 0) {
        DAT_140dc2e30 = DAT_140dc2e30 | 0x20;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e48 = 1;
        }
        else {
            DAT_140dc2e48 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2e38,DAT_140dc2e34,param_3,DAT_140dc2e3c);
    return;
}



void FUN_140465a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    ulonglong uVar2;

    if ((DAT_140dc2e4c & 1) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 1;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e50 = 0x3f000000;
        }
        else {
            DAT_140dc2e50 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2e4c & 2) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 2;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e54 = 0x3f800000;
        }
        else {
            DAT_140dc2e54 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2e4c & 4) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 4;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e58 = 0x42c80000;
        }
        else {
            DAT_140dc2e58 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2e4c & 8) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 8;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e5c = 0;
        }
        else {
            DAT_140dc2e5c = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2e4c & 0x10) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 0x10;
        uVar2 = FUN_140200220(0x94c);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 4);
        }
        DAT_140dc2e60 = (undefined4)uVar2;
    }
    if ((DAT_140dc2e4c & 0x20) == 0) {
        DAT_140dc2e4c = DAT_140dc2e4c | 0x20;
        lVar1 = FUN_140200220(0x94c);
        if (lVar1 == 0) {
            DAT_140dc2e64 = 1;
        }
        else {
            DAT_140dc2e64 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2e54,DAT_140dc2e50,param_3,DAT_140dc2e58);
    return;
}



void FUN_140465c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2e68 & 1) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 1;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e6c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e6c = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2e68 & 2) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 2;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e70 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e70 = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2e68 & 4) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 4;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e74 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e74 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2e68 & 8) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 8;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e78 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e78 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2e68 & 0x10) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 0x10;
        lVar1 = FUN_140200220(0x4d1);
        if (lVar1 == 0) {
            DAT_140dc2e7c = 1;
        }
        else {
            DAT_140dc2e7c = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2e68 & 0x20) == 0) {
        DAT_140dc2e68 = DAT_140dc2e68 | 0x20;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e80 = 1;
        if (lVar1 != 0) {
            DAT_140dc2e80 = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453b60(DAT_140dc2e70,DAT_140dc2e6c,param_3,DAT_140dc2e74);
    return;
}



void FUN_140465e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined4 uVar2;

    uVar2 = 0x3f000000;
    if ((DAT_140dc2e84 & 1) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 1;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e88 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e88 = *(undefined4 *)(lVar1 + 0x18);
        }
    }
    if ((DAT_140dc2e84 & 2) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 2;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e8c = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e8c = *(undefined4 *)(lVar1 + 0x1c);
        }
    }
    if ((DAT_140dc2e84 & 4) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 4;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e90 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e90 = *(undefined4 *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2e84 & 8) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 8;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e94 = uVar2;
        if (lVar1 != 0) {
            DAT_140dc2e94 = *(undefined4 *)(lVar1 + 0x24);
        }
    }
    if ((DAT_140dc2e84 & 0x10) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 0x10;
        lVar1 = FUN_140200220(0x4d1);
        if (lVar1 == 0) {
            DAT_140dc2e98 = 1;
        }
        else {
            DAT_140dc2e98 = *(undefined4 *)(lVar1 + 4);
        }
    }
    if ((DAT_140dc2e84 & 0x20) == 0) {
        DAT_140dc2e84 = DAT_140dc2e84 | 0x20;
        lVar1 = FUN_140200220(0x4d1);
        DAT_140dc2e9c = 1;
        if (lVar1 != 0) {
            DAT_140dc2e9c = *(undefined4 *)(lVar1 + 8);
        }
    }
    FUN_140453c50(DAT_140dc2e8c,DAT_140dc2e88,param_3,DAT_140dc2e90);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140466000(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    fVar3 = 0.5;
    fVar4 = *(float *)(param_1 + 0x7c4);
    if ((DAT_140dc2ea0 & 1) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 1;
        lVar2 = FUN_140200220(0x4fa);
        DAT_140dc2ea4 = fVar3;
        if (lVar2 != 0) {
            DAT_140dc2ea4 = *(float *)(lVar2 + 0x18);
        }
    }
    if ((DAT_140dc2ea0 & 2) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 2;
        lVar2 = FUN_140200220(0x4fa);
        _DAT_140dc2ea8 = fVar3;
        if (lVar2 != 0) {
            _DAT_140dc2ea8 = *(float *)(lVar2 + 0x1c);
        }
    }
    if ((DAT_140dc2ea0 & 4) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 4;
        lVar2 = FUN_140200220(0x4fa);
        DAT_140dc2eac = fVar3;
        if (lVar2 != 0) {
            DAT_140dc2eac = *(float *)(lVar2 + 0x20);
        }
    }
    if ((DAT_140dc2ea0 & 8) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 8;
        lVar2 = FUN_140200220(0x4fa);
        DAT_140dc2eb0 = fVar3;
        if (lVar2 != 0) {
            DAT_140dc2eb0 = *(float *)(lVar2 + 0x24);
        }
    }
    if ((DAT_140dc2ea0 & 0x10) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 0x10;
        lVar2 = FUN_140200220(0x4fa);
        if (lVar2 == 0) {
            DAT_140dc2eb4 = 1;
        }
        else {
            DAT_140dc2eb4 = *(int *)(lVar2 + 4);
        }
    }
    if ((DAT_140dc2ea0 & 0x20) == 0) {
        DAT_140dc2ea0 = DAT_140dc2ea0 | 0x20;
        lVar2 = FUN_140200220(0x4fa);
        DAT_140dc2eb8 = 1;
        if (lVar2 != 0) {
            DAT_140dc2eb8 = *(undefined4 *)(lVar2 + 8);
        }
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 == 0) {
        uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((DAT_140dc2eac - (float)DAT_140dc2eb4) /
        ((DAT_140dc2ea4 / (float)(ulonglong)uVar1) * _DAT_140dc2ea8) <= fVar4) {
        FUN_1408fc950();
    }
    return;
}



undefined FUN_140466260(undefined8 param_1)

{
    longlong lVar1;
    float fVar2;

    if ((DAT_140dc2ebc & 1) == 0) {
        DAT_140dc2ebc = DAT_140dc2ebc | 1;
        lVar1 = FUN_140200220(0x4fa);
        if (lVar1 == 0) {
            DAT_140dc2ec0 = 0.5;
        }
        else {
            DAT_140dc2ec0 = *(float *)(lVar1 + 0x20);
        }
    }
    if ((DAT_140dc2ebc & 2) == 0) {
        DAT_140dc2ebc = DAT_140dc2ebc | 2;
        lVar1 = FUN_140200220(0x4fa);
        if (lVar1 == 0) {
            DAT_140dc2ec4 = 1;
        }
        else {
            DAT_140dc2ec4 = *(int *)(lVar1 + 8);
        }
    }
    fVar2 = (float)FUN_140466000(param_1);
    if (1.0 - (float)DAT_140dc2ec4 * 0.01 < fVar2) {
        return fVar2 <= 1.0 - DAT_140dc2ec0 * 0.01;
    }
    return 2;
}



undefined4 FUN_140466340(longlong param_1,int param_2)

{
    if (10 < param_2) {
        return 0;
    }
    return *(undefined4 *)(param_1 + 0x21c + (longlong)param_2 * 4);
}



undefined4 FUN_140466360(longlong param_1,undefined4 param_2)

{
    switch(param_2) {
        case 0:
            return *(undefined4 *)(param_1 + 0x60c);
        case 1:
            return *(undefined4 *)(param_1 + 0x614);
        case 2:
            return *(undefined4 *)(param_1 + 0x61c);
        case 3:
            return *(undefined4 *)(param_1 + 0x624);
        case 4:
            return *(undefined4 *)(param_1 + 0x62c);
        case 5:
            return *(undefined4 *)(param_1 + 0x634);
        case 6:
            return *(undefined4 *)(param_1 + 0x63c);
        case 7:
            return *(undefined4 *)(param_1 + 0x6f4);
        case 8:
            return *(undefined4 *)(param_1 + 0x754);
        case 9:
            return *(undefined4 *)(param_1 + 0x764);
        case 10:
            return *(undefined4 *)(param_1 + 0x774);
        default:
            return 0;
    }
}



void FUN_140466490(undefined8 param_1,float param_2,longlong param_3)

{
    undefined8 uVar1;
    float fVar2;

    *(float *)(param_3 + 0x44) = param_2;
    if (*(int *)(param_3 + 0xd50) != 0) {
        uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        fVar2 = (float)(**(code **)(**(longlong **)(DAT_140c65898 + 0x78) + 0x60))();
        FUN_1400ea3e0(uVar1,"BreathChanged",&DAT_1409ebcf4,(longlong)param_2,(double)fVar2,0,0);
    }
    return;
}



ulonglong FUN_140466520(longlong *param_1,int param_2)

{
    uint uVar1;
    ulonglong uVar2;
    longlong *plVar3;
    bool bVar4;

    uVar2 = (ulonglong)(param_2 + -1);
    switch(param_2) {
        case 1:
            uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
            return (ulonglong)uVar1;
        case 2:
            // WARNING: Could not recover jumptable at 0x00014046657e. Too many branches
            // WARNING: Treating indirect jump as call
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            return uVar2;
        case 3:
            uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
            return (ulonglong)uVar1;
        default:
            if (*(longlong **)(DAT_140c65898 + 0x78) != param_1) {
                return DAT_140c65898;
            }
            if (*(longlong **)(DAT_140c65898 + 0x6d90) == (longlong *)0x0) {
                return DAT_140c65898;
            }
            uVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x60))();
            if (10 < (int)uVar2) {
                return uVar2;
            }
            return (longlong)(int)uVar2;
        case 5:
            return uVar2;
        case 6:
            return uVar2;
        case 7:
            return uVar2;
        case 8:
            return uVar2;
        case 9:
            return uVar2;
        case 10:
            return uVar2;
        case 0xb:
            return uVar2;
        case 0xf:
            return uVar2;
        case 0x10:
            return uVar2;
        case 0x14:
            return uVar2;
        case 0x15:
            uVar1 = (**(code **)(*param_1 + 0x88))(param_1);
            return (ulonglong)uVar1;
        case 0x16:
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
            if (plVar3 == (longlong *)0x0) {
                return 0;
            }
            uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
            bVar4 = (int)uVar2 == 0;
            break;
        case 0x17:
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
            if (plVar3 == (longlong *)0x0) {
                return 0;
            }
            uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
            bVar4 = (int)uVar2 == 1;
            break;
        case 0x18:
            plVar3 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0);
            if (plVar3 == (longlong *)0x0) {
                return 0;
            }
            uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
            bVar4 = (int)uVar2 == 2;
            break;
        case 0x1b:
            return uVar2;
        case 0x1c:
            return uVar2;
        case 0x1d:
            return uVar2;
    }
    if (!bVar4) {
        return uVar2;
    }
    uVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    return (ulonglong)uVar1;
}



ulonglong FUN_1404667c0(longlong *param_1,int param_2)

{
    uint uVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    longlong *plVar4;
    bool bVar5;

    uVar3 = (ulonglong)(param_2 + -1);
    switch(param_2) {
        case 1:
            uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
            return (ulonglong)uVar1;
        case 2:
            // WARNING: Could not recover jumptable at 0x00014046681e. Too many branches
            // WARNING: Treating indirect jump as call
            uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
            return uVar3;
        case 3:
            uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
            return (ulonglong)uVar1;
        default:
            if (*(longlong **)(DAT_140c65898 + 0x78) != param_1) {
                return DAT_140c65898;
            }
            if (*(longlong **)(DAT_140c65898 + 0x6d90) == (longlong *)0x0) {
                return DAT_140c65898;
            }
            uVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x60))();
            uVar3 = FUN_140466360(param_1,uVar2);
            return uVar3;
        case 5:
            return uVar3;
        case 6:
            return uVar3;
        case 7:
            return uVar3;
        case 8:
            return uVar3;
        case 9:
            return uVar3;
        case 10:
            return uVar3;
        case 0xb:
            return uVar3;
        case 0xf:
            return uVar3;
        case 0x10:
            return uVar3;
        case 0x14:
            if ((int)*(float *)((longlong)param_1 + 0x724) != -1) {
                return (ulonglong)
                        (uint)((int)*(float *)((longlong)param_1 + 0xc94) +
                               (int)*(float *)((longlong)param_1 + 0x724));
            }
            return 0xffffffff;
        case 0x15:
            uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
            return (ulonglong)uVar1;
        case 0x16:
            plVar4 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
            if (plVar4 == (longlong *)0x0) {
                return 0;
            }
            uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
            bVar5 = (int)uVar3 == 0;
            break;
        case 0x17:
            plVar4 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
            if (plVar4 == (longlong *)0x0) {
                return 0;
            }
            uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
            bVar5 = (int)uVar3 == 1;
            break;
        case 0x18:
            plVar4 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0);
            if (plVar4 == (longlong *)0x0) {
                return 0;
            }
            uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
            bVar5 = (int)uVar3 == 2;
            break;
        case 0x1b:
            return uVar3;
        case 0x1c:
            return uVar3;
        case 0x1d:
            return uVar3;
    }
    if (!bVar5) {
        return uVar3;
    }
    uVar1 = (**(code **)(*plVar4 + 0x80))(plVar4);
    return (ulonglong)uVar1;
}



undefined4 FUN_140466a70(longlong param_1,uint param_2)

{
    if (param_2 < 0xc5) {
        return *(undefined4 *)(param_1 + 0x5c4 + (longlong)(int)param_2 * 8);
    }
    return 0;
}



undefined8 FUN_140466a90(longlong param_1,int *param_2)

{
    int iVar1;
    undefined8 local_res10 [3];
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    iVar1 = *param_2;
    if (0xc4 < iVar1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res10[0] = 0x141e02448;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8ac64,5,local_res10,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    *(int *)(param_1 + 0x5c0 + (longlong)iVar1 * 8) = param_2[1];
    *(int *)(param_1 + 0x5c4 + (longlong)iVar1 * 8) = param_2[2];
    return 0;
}



undefined8 FUN_140466b90(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;

    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    if (*(int *)(*(longlong *)(param_2 + 0x18) + 0xa8) == 0) {
        return 1;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == param_1) {
        lVar2 = FUN_140244b00();
        uVar3 = 0;
        if (((lVar2 == 0) || (*(int *)(lVar2 + 8) == 0)) ||
            (iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar1 != 0)) {
            if ((*(int *)(param_2 + 0x172c) != 0) && (lVar2 = FUN_1405b15c0(&DAT_140c7dfb0), lVar2 != 0))
            {
                lVar2 = FUN_140200220(0x365);
                if (lVar2 != 0) {
                    uVar3 = *(undefined4 *)(lVar2 + 4);
                }
                iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,param_1,uVar3,param_2,0,0);
                if (iVar1 == 0) {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140466ca0(longlong param_1,int param_2)

{
    undefined8 uVar1;

    if (*(longlong **)(param_1 + 0xcc0) != (longlong *)0x0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x48))();
        if ((int)uVar1 < 0) {
            return uVar1;
        }
        *(undefined4 *)(param_1 + 0xf4) = 1;
        if (param_2 == 0x14) {
            FUN_1404718e0(param_1,0,0,1,1);
            FUN_140472d80(param_1);
            return 0;
        }
        if (param_2 == 1) {
            FUN_140472e10(param_1);
        }
    }
    return 0;
}



undefined8 FUN_140466d20(longlong param_1,int param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (*(longlong **)(param_1 + 0xcc0) == (longlong *)0x0) {
        return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x50))();
    *(undefined4 *)(param_1 + 0xf4) = 1;
    if (param_2 == 0x14) {
        FUN_1404718e0(param_1,0,0,1,1);
        FUN_140472d80(param_1);
        return 0;
    }
    if (param_2 == 1) {
        FUN_140472e10(param_1);
        return 0;
    }
    if (param_2 == 0x38) {
        plVar2 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x70))
                (*(longlong **)(param_1 + 0xcc0),0x38,0);
        if (plVar2 == (longlong *)0x0) {
            return 0;
        }
        if ((*(longlong **)(param_1 + 0x110) == (longlong *)0x0) ||
            (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x18))(), iVar1 != 0xa7)) {
            if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
                return 0;
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x18))();
            if (iVar1 != 0xa6) {
                return 0;
            }
            local_24 = FUN_1401ae6f0(0,0xffffffff);
            local_28 = 0x460;
        }
        else {
            local_24 = FUN_1401ae6f0(0,0xffffffff);
            local_28 = 0x45e;
        }
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        local_20 = 0x3f800000;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_28);
        return 0;
    }
    return 0;
}



void FUN_140466e60(longlong param_1)

{
    uint uVar1;
    uint uVar2;

    uVar1 = (uint)(*(longlong *)(param_1 + 0x15f8) != 0);
    if (*(longlong **)(param_1 + 0xcc0) != (longlong *)0x0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xb8))();
        if (uVar1 != uVar2) {
            FUN_140470650(param_1,1,1);
            (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xb0))(*(longlong **)(param_1 + 0xcc0),uVar1);
        }
    }
    return;
}



void FUN_140466ec0(undefined8 param_1,undefined8 param_2,longlong param_3,wchar_t **param_4)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    wchar_t *pwVar6;
    uint uVar7;
    undefined8 uVar9;
    wchar_t *pwVar8;

    uVar9 = FUN_1407e4830(param_4,0,0xf0);
    *(undefined4 *)(param_4 + 3) = 0x3f800000;
    if (*(int *)(param_3 + 0x80) == 0x12) {
        *(undefined4 *)(param_4 + 3) = 0x3f800000;
        *param_4 = L"Art\\Icon\\Animation\\Default\\Icon_Animation_Default_000.m3";
        *(undefined8 *)((longlong)param_4 + 0xc) = 0;
    }
    else if (*(longlong *)(param_3 + 0xd20) == 0) {
        if (*(longlong *)(param_3 + 0xd08) == 0) {
            pwVar6 = (wchar_t *)0x0;
            *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)(param_3 + 0xd8);
            *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_3 + 0x34);
            if ((*(int *)(param_3 + 0xdc) == 1) || (uVar2 = 0, *(int *)(param_3 + 0xdc) - 10U < 3)) {
                uVar2 = 1;
            }
            *(undefined4 *)((longlong)param_4 + 0x14) = uVar2;
            if (((((*(uint *)(param_3 + 8) & 0xc0000000) == 0x40000000) &&
                  (*(longlong *)(DAT_140c65898 + 0x7198) != 0)) &&
                 (iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x14), iVar1 != 0)) &&
                (uVar3 = FUN_1401f2910(), pwVar8 = pwVar6, uVar3 != 0)) {
                do {
                    lVar4 = FUN_1401f29c0();
                    if ((*(int *)(lVar4 + 4) == iVar1) && (*(int *)(lVar4 + 8) == *(int *)(param_3 + 0xd8))) {
                        if (*(int *)(param_3 + 0x34) == 0) {
                            uVar5 = *(ulonglong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(param_3 + 0x34) != 1) break;
                            uVar5 = *(ulonglong *)(lVar4 + 0x18);
                        }
                        if ((uVar5 != 0) && (uVar5 <= DAT_140c3fe70)) {
                            pwVar6 = (wchar_t *)(DAT_140c3fe68 + uVar5);
                        }
                        *param_4 = pwVar6;
                        break;
                    }
                    uVar7 = (int)pwVar8 + 1;
                    pwVar8 = (wchar_t *)(ulonglong)uVar7;
                } while (uVar7 < uVar3);
            }
        }
        else if (*(longlong *)(param_3 + 0x18) == 0) {
            FUN_1401dab50(uVar9,param_2,0x3f800000,param_4);
        }
        else {
            FUN_1401dab50(uVar9,param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x68),param_4);
        }
    }
    else {
        *(undefined4 *)(param_4 + 3) = 0x3f800000;
        *(undefined8 *)((longlong)param_4 + 0xc) = 0;
        *param_4 = *(wchar_t **)(param_3 + 0xd20);
    }
    if (*(int *)(param_3 + 0x80) == 7) {
        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == *(int *)(param_3 + 0x2b0))) ||
            ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
              (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == *(int *)(param_3 + 0x2b0))))) {
            *(undefined4 *)(param_4 + 0x15) = 1;
        }
    }
    return;
}



void FUN_1404670b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined8 uVar10;
    int *piVar11;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined auStack312 [32];
    undefined8 local_118;
    undefined8 local_110;
    undefined8 local_108;
    undefined4 local_100;
    undefined local_fc [64];
    undefined8 local_bc;
    undefined8 local_b4;
    undefined8 local_ac;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined4 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined4 local_30;
    ulonglong local_28;
    ulonglong uVar9;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    if ((param_3[3] == 0) || (iVar3 = *(int *)(param_3[3] + 0x164), iVar3 == 0)) {
        iVar3 = (**(code **)(*param_3 + 0x20))();
        if ((((iVar3 != 0) && (param_3[0x17] != 0)) && (uVar9 = 0, *(int *)(param_3[0x17] + 4) == 4)) &&
            (param_3[0x33] != 0)) {
            FUN_14045b6b0(param_3);
            lVar6 = FUN_1403d90d0(DAT_140c65898);
            if (((lVar6 == 0) && (param_3[0x17] != 0)) &&
                ((*(uint *)(param_3[0x17] + 0x60) & 0x2000) != 0)) {
                if (param_3[0x33] == 0) {
                    lVar6 = 0;
                }
                else {
                    lVar6 = FUN_1403d90d0(DAT_140c65898);
                }
            }
            pplVar1 = (longlong **)(param_3 + 0x199);
            if (*pplVar1 == (longlong *)0x0) {
                if (((lVar6 != 0) &&
                     (lVar8 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar6 + 0xcc),lVar6), lVar8 != 0))
                    && (*(uint *)(lVar8 + 0x28) != 0)) {
                    lVar2 = *(longlong *)(lVar8 + 0x30);
                    piVar11 = (int *)(lVar2 + 0x10);
                    do {
                        if (*piVar11 == 0x24) {
                            if (((*(int *)(uVar9 * 0xa8 + 0x4c + lVar2) != 0) ||
                                 (*(int *)(uVar9 * 0xa8 + 0x40 + lVar2) != 0)) &&
                                (lVar8 = FUN_1404845c0(DAT_140c65918), lVar8 != 0)) {
                                FUN_1401dab50(extraout_XMM0_Qa_00,param_2,0x3f800000,&local_118,lVar8);
                                FUN_1401db2a0(*(undefined8 *)(DAT_140c65898 + 0x7250),&local_118,pplVar1);
                                param_3[0x19a] = 0;
                                if (*pplVar1 != (longlong *)0x0) goto LAB_14046739c;
                            }
                            break;
                        }
                        uVar4 = (int)uVar9 + 1;
                        uVar9 = (ulonglong)uVar4;
                        piVar11 = piVar11 + 0x2a;
                    } while (uVar4 < *(uint *)(lVar8 + 0x28));
                }
            }
            else {
                LAB_14046739c:
                if (((lVar6 != 0) && (*(longlong **)(lVar6 + 0xcc0) != (longlong *)0x0)) &&
                    ((*(int *)(param_3 + 0x19a) != *(int *)(lVar6 + 8) ||
                      (iVar3 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x20))(),
                              *(int *)((longlong)param_3 + 0xcd4) != iVar3)))) {
                    lVar8 = **pplVar1;
                    uVar10 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x40))
                            (*(longlong **)(lVar6 + 0xcc0),0x41);
                    (**(code **)(lVar8 + 0x48))(*pplVar1,0x41,uVar10);
                    lVar8 = **pplVar1;
                    uVar10 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x40))
                            (*(longlong **)(lVar6 + 0xcc0),0x42);
                    (**(code **)(lVar8 + 0x48))(*pplVar1,0x42,uVar10);
                    lVar8 = **pplVar1;
                    uVar10 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x40))
                            (*(longlong **)(lVar6 + 0xcc0),0x43);
                    (**(code **)(lVar8 + 0x48))(*pplVar1,0x43,uVar10);
                    lVar8 = **pplVar1;
                    uVar10 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x40))
                            (*(longlong **)(lVar6 + 0xcc0),0x44);
                    (**(code **)(lVar8 + 0x48))(*pplVar1,0x44,uVar10);
                    lVar8 = **pplVar1;
                    uVar10 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x40))
                            (*(longlong **)(lVar6 + 0xcc0),0x45);
                    (**(code **)(lVar8 + 0x48))(*pplVar1,0x45,uVar10);
                    *(undefined4 *)(param_3 + 0x19a) = *(undefined4 *)(lVar6 + 8);
                    uVar5 = (**(code **)(**(longlong **)(lVar6 + 0xcc0) + 0x20))();
                    *(undefined4 *)((longlong)param_3 + 0xcd4) = uVar5;
                }
            }
        }
    }
    else if (param_3[0x199] == 0) {
        plVar7 = (longlong *)0x0;
        local_108 = 2;
        local_100 = 0x3f800000;
        local_118 = 0;
        local_110 = 0;
        FUN_1407e4830(local_fc,0,0x40);
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_bc = 0;
        local_b4 = 0;
        local_ac = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        lVar6 = FUN_1401f8b20(iVar3);
        if (lVar6 != 0) {
            FUN_1401dab50(extraout_XMM0_Qa,param_2,0x3f800000,&local_118,lVar6);
        }
        uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7250);
        lVar6 = FUN_14018b280(0xc80,0);
        if (lVar6 != 0) {
            plVar7 = (longlong *)FUN_1401df340(lVar6);
        }
        iVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar10,&local_118);
        if (iVar3 < 0) {
            (**(code **)(*plVar7 + 0x168))(plVar7,1);
        }
        else {
            param_3[0x199] = (longlong)plVar7;
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack312);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404674c0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong *plVar6;
    int *piVar7;
    int *piVar8;
    undefined8 uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined auStack344 [32];
    undefined4 local_138;
    undefined8 local_128;
    undefined8 local_120;
    undefined8 local_118;
    undefined4 local_110;
    undefined local_10c [64];
    undefined8 local_cc;
    undefined8 local_c4;
    undefined8 local_bc;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined4 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined4 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    plVar6 = (longlong *)0x0;
    local_110 = 0x3f800000;
    local_128 = 0;
    local_120 = 0;
    local_118 = 2;
    FUN_1407e4830(local_10c,0,0x40);
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_140466ec0(param_1,&local_128);
    plVar10 = *(longlong **)(param_1 + 0xcc0);
    if (plVar10 == (longlong *)0x0) {
        uVar9 = *(undefined8 *)(DAT_140c65898 + 0x7250);
        lVar5 = FUN_14018b280(0xc80,0);
        if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_1401df340(lVar5);
        }
        iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,uVar9);
        if (iVar2 < 0) {
            (**(code **)(*plVar6 + 0x168))(plVar6,1);
            goto LAB_140467972;
        }
        *(longlong **)(param_1 + 0xcc0) = plVar6;
    }
    else {
        iVar2 = (**(code **)(*plVar10 + 0x18))(plVar10,*(undefined8 *)(DAT_140c65898 + 0x7250));
        if (iVar2 < 0) goto LAB_140467972;
    }
    uVar12 = 0;
    uVar11 = uVar12;
    uVar13 = uVar12;
    if (((*(int *)(param_1 + 0x80) != 0x12) && (*(longlong *)(param_1 + 0xd20) == 0)) &&
        (lVar5 = *(longlong *)(param_1 + 0xd08), uVar11 = 0, uVar13 = 0, lVar5 != 0)) {
        uVar13 = lVar5 + 0xc0;
        piVar7 = (int *)(lVar5 + 0xc4);
        uVar11 = uVar12;
        do {
            if (piVar7[-1] == 0) break;
            if (*piVar7 == 0) {
                uVar11 = uVar11 + 1;
                break;
            }
            if (piVar7[1] == 0) {
                uVar11 = uVar11 + 2;
                break;
            }
            if (piVar7[2] == 0) {
                uVar11 = uVar11 + 3;
                break;
            }
            if (piVar7[3] == 0) {
                uVar11 = uVar11 + 4;
                break;
            }
            uVar11 = uVar11 + 5;
            piVar7 = piVar7 + 5;
        } while (uVar11 < 0x14);
    }
    if (uVar11 != 0) {
        do {
            uVar1 = *(undefined4 *)(uVar13 + uVar12 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64f64 == 0) && (iVar2 = FUN_14020bac0(), -1 < iVar2)) {
                    lVar5 = (**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,uVar1);
                    goto LAB_1404676d9;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8);
                LAB_1404676d9:
                if (lVar5 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c650d4 != 0) || (iVar2 = FUN_14020a140(), iVar2 < 0)) goto LAB_14046773b;
                        lVar5 = (**(code **)(*DAT_140c64ac8 + 0x18))();
                    }
                    else {
                        lVar5 = (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58);
                    }
                    if (lVar5 != 0) {
                        FUN_140466d20(param_1,*(undefined4 *)(lVar5 + 8),uVar1,0);
                    }
                }
            }
            LAB_14046773b:
            uVar12 = (ulonglong)((int)uVar12 + 1);
        } while (uVar12 < uVar11);
    }
    uVar13 = 0;
    if (*(longlong *)(param_1 + 0xd10) != 0) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0xd10) + 4);
        piVar8 = piVar7;
        uVar11 = uVar13;
        do {
            if (*piVar8 == 0) break;
            uVar11 = uVar11 + 1;
            piVar8 = piVar8 + 1;
        } while (uVar11 < 6);
        if (uVar11 != 0) {
            do {
                iVar2 = piVar7[uVar13];
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64f64 == 0) && (iVar3 = FUN_14020bac0(), -1 < iVar3)) {
                        lVar5 = (**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,iVar2);
                        goto LAB_1404677e1;
                    }
                }
                else {
                    lVar5 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8);
                    LAB_1404677e1:
                    if (lVar5 != 0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c650d4 != 0) || (iVar3 = FUN_14020a140(), iVar3 < 0)) goto LAB_1404678aa;
                            lVar5 = (**(code **)(*DAT_140c64ac8 + 0x18))();
                        }
                        else {
                            lVar5 = (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58);
                        }
                        if (lVar5 != 0) {
                            uVar1 = *(undefined4 *)(lVar5 + 8);
                            if (DAT_140c63840 == (code *)0x0) {
                                if (_DAT_140c63da4 == 0) {
                                    iVar3 = FUN_14020b680();
                                    if (iVar3 < 0) {
                                        uVar9 = 0;
                                    }
                                    else {
                                        uVar9 = (**(code **)(*DAT_140c64ba8 + 0x18))();
                                    }
                                }
                                else {
                                    uVar9 = 0;
                                }
                            }
                            else {
                                uVar9 = (*DAT_140c63840)(&PTR_u_ItemColorSet_140a6ad70);
                            }
                            uVar4 = FUN_1401dc0d0(uVar9);
                            FUN_140466d20(param_1,uVar1,iVar2,uVar4);
                        }
                    }
                }
                LAB_1404678aa:
                uVar13 = (ulonglong)((int)uVar13 + 1);
            } while (uVar13 < uVar11);
        }
    }
    if (((*(longlong *)(param_1 + 0x18) != 0) &&
         (iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x144), iVar2 != 0)) &&
        (plVar10 = *(longlong **)(param_1 + 0xcc0), plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x50))(plVar10,0x14,iVar2,0);
        *(undefined4 *)(param_1 + 0xf4) = 1;
        local_138 = 1;
        FUN_1404718e0(param_1,0,0,1);
        FUN_140472d80(param_1);
    }
    if (((*(int *)(param_1 + 0x36e4) == 0) ||
         (plVar10 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0)),
                 plVar10 == (longlong *)0x0)) ||
        (iVar2 = (**(code **)(*plVar10 + 0x20))(plVar10), uVar9 = 1, iVar2 == 0)) {
        uVar9 = 0;
    }
    plVar10 = *(longlong **)(param_1 + 0xcc0);
    if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0xc0))(plVar10,uVar9);
    }
    LAB_140467972:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack344);
    return;
}



undefined8 FUN_140467990(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    float *pfVar9;
    longlong lVar10;
    float fVar11;
    float fVar12;
    undefined4 local_48;
    float local_44;
    undefined local_38 [16];
    undefined local_28 [16];
    undefined4 local_18;

    if (*(longlong *)(param_1 + 0xcc0) == 0) {
        return 0;
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0xd18) != 0) {
        uVar6 = FUN_1404674c0();
        if ((int)uVar6 < 0) {
            return uVar6;
        }
        *(undefined4 *)(param_1 + 0xd18) = 0;
    }
    if ((*param_2 != 0) && (iVar3 = FUN_14001c520(), iVar3 != 0)) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x100))();
        iVar4 = (int)uVar6;
        if (iVar4 < 0) {
            return uVar6;
        }
    }
    if (iVar4 == 0x200a0002) {
        plVar8 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x110))
                (*(longlong **)(param_1 + 0xcc0),0);
        lVar7 = (**(code **)(*plVar8 + 0x490))(plVar8);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        uVar1 = *(undefined4 *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x2c);
        *(undefined4 *)(param_1 + 0xce0) = *(undefined4 *)(lVar7 + 0x20);
        *(undefined4 *)(param_1 + 0xce4) = uVar5;
        *(undefined4 *)(param_1 + 0xce8) = uVar1;
        *(undefined4 *)(param_1 + 0xcec) = uVar2;
        *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(lVar7 + 0x30);
    }
    else if (iVar4 == 0x200a0004) {
        (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x118))(*(longlong **)(param_1 + 0xcc0),0);
        FUN_140467f50(param_1);
    }
    if ((((*(int *)(param_1 + 0xf4) != 0) &&
          (*(undefined4 *)(param_1 + 0xf4) = 0,
                  *(longlong *)(param_1 + 0xd30) != *(longlong *)(param_1 + 0xd38))) &&
         (*(int *)(param_1 + 0xf0) == 0)) &&
        ((*(int *)(param_1 + 0xec) == *(int *)(param_1 + 0x34) &&
          (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8))))) {
        plVar8 = *(longlong **)(param_1 + 0xcc0);
        lVar7 = *plVar8;
        uVar6 = FUN_1400323e0();
        (**(code **)(lVar7 + 0x138))(plVar8,param_1 + 0xd28,uVar6);
    }
    if (*(longlong **)(param_1 + 0x16f0) == (longlong *)0x0) goto LAB_140467d3b;
    if ((*(uint *)(param_1 + 8) & 0xc0000000) != 0x40000000) {
        plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x16f0) + 0x10))();
        lVar7 = **(longlong **)(param_1 + 0xcc0);
        uVar6 = (**(code **)(*plVar8 + 0x1d0))(plVar8,&local_48,param_1 + 0xce0,param_1 + 0x11b0);
        (**(code **)(lVar7 + 0x38))(*(undefined8 *)(param_1 + 0xcc0),uVar6);
        goto LAB_140467d3b;
    }
    plVar8 = *(longlong **)(param_1 + 0xcc0);
    local_28 = *(undefined (*) [16])(param_1 + 0xce0);
    local_18 = *(undefined4 *)(param_1 + 0xcf0);
    if ((plVar8 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar8 + 0x110))(plVar8,0), lVar7 != 0))
    {
        plVar8 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x110))
                (*(longlong **)(param_1 + 0xcc0),0);
        iVar4 = (**(code **)(*plVar8 + 0x1b8))(plVar8);
        if (iVar4 != 0) {
            plVar8 = (longlong *)
                    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x110))
                    (*(longlong **)(param_1 + 0xcc0),0);
            iVar4 = (**(code **)(*plVar8 + 0x350))(plVar8,0x2e);
            lVar7 = **(longlong **)(param_1 + 0xcc0);
            if (iVar4 == 0) {
                plVar8 = (longlong *)(**(code **)(lVar7 + 0x110))(*(longlong **)(param_1 + 0xcc0),0);
                iVar4 = (**(code **)(*plVar8 + 0x350))(plVar8,0x15);
                if (iVar4 == 0) goto LAB_140467cab;
                plVar8 = (longlong *)
                        (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x110))
                        (*(longlong **)(param_1 + 0xcc0),0);
                lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
                }
                uVar6 = 0x15;
            }
            else {
                plVar8 = (longlong *)(**(code **)(lVar7 + 0x110))();
                lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
                }
                uVar6 = 0x2e;
            }
            pfVar9 = (float *)(**(code **)(*plVar8 + 0x358))(plVar8,local_38,uVar6,0);
            fVar11 = pfVar9[1] * *(float *)(lVar7 + 0xb0) + *pfVar9 * *(float *)(lVar7 + 0xa0) +
                     *(float *)(lVar7 + 0xc0) * 0.0 + *(float *)(lVar7 + 0xd0);
            fVar12 = pfVar9[1] * *(float *)(lVar7 + 0xb4) + *pfVar9 * *(float *)(lVar7 + 0xa4) +
                     *(float *)(lVar7 + 0xc4) * 0.0 + *(float *)(lVar7 + 0xd4);
            local_28 = CONCAT412(fVar12 * *(float *)(param_1 + 0x120c) +
                                 fVar11 * *(float *)(param_1 + 0x11fc) +
                                 *(float *)(param_1 + 0x121c) * 0.0 + *(float *)(param_1 + 0x122c),
                                 CONCAT48(fVar12 * *(float *)(param_1 + 0x1208) +
                                          fVar11 * *(float *)(param_1 + 0x11f8) +
                                          *(float *)(param_1 + 0x1218) * 0.0 +
                                          *(float *)(param_1 + 0x1228),
                                          CONCAT44(fVar12 * *(float *)(param_1 + 0x1204) +
                                                   fVar11 * *(float *)(param_1 + 0x11f4) +
                                                   *(float *)(param_1 + 0x1214) * 0.0 +
                                                   *(float *)(param_1 + 0x1224),
                                                   fVar12 * *(float *)(param_1 + 0x1200) +
                                                   fVar11 * *(float *)(param_1 + 0x11f0) +
                                                   *(float *)(param_1 + 0x1210) * 0.0 +
                                                   *(float *)(param_1 + 0x1220))));
        }
    }
    LAB_140467cab:
    plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x16f0) + 0x10))();
    (**(code **)(*plVar8 + 0x1d0))(plVar8,&local_48,local_28,param_1 + 0x11b0);
    local_44 = local_44 + *(float *)(param_1 + 0xcd8);
    (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0x38))(*(longlong **)(param_1 + 0xcc0),&local_48);
    LAB_140467d3b:
    if (*(int *)(param_1 + 0xd00) == 0) {
        return 0;
    }
    uVar5 = FUN_14045b6b0(param_1);
    lVar7 = FUN_1403d90d0(DAT_140c65898,uVar5);
    if ((lVar7 != 0) ||
        ((((*(longlong *)(param_1 + 0xb8) != 0 &&
            ((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0x60) & 0x2000) != 0)) &&
           (*(longlong *)(param_1 + 0x198) != 0)) &&
          (lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 400) + 8)),
                  lVar7 != 0)))) {
        plVar8 = *(longlong **)(param_1 + 0x16e8);
        if (plVar8 == (longlong *)0x0) {
            return 0;
        }
        local_48 = 0;
        iVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_48,0);
        if (iVar4 == 0) {
            return 0;
        }
        lVar10 = FUN_14022d500();
        if ((lVar10 != 0) &&
            (((*(int *)(lVar7 + 0x34) == 1 && (iVar4 = *(int *)(lVar10 + 0x88), 0 < iVar4)) ||
              ((*(int *)(lVar7 + 0x34) == 0 && (iVar4 = *(int *)(lVar10 + 0x84), 0 < iVar4)))))) {
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x2d8))
                    (*(longlong **)(param_1 + 0x16e8),iVar4,1);
        }
    }
    *(undefined4 *)(param_1 + 0xd00) = 0;
    return 0;
}



int FUN_140467e40(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;

    iVar3 = 0;
    plVar4 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if ((plVar4 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4), iVar2 != 0)) {
        return 0;
    }
    if (*(longlong **)(param_1 + 0xcc0) != (longlong *)0x0) {
        lVar1 = **(longlong **)(param_1 + 0xcc0);
        if (*(int *)(param_1 + 0x1428) == 0x3f) {
            iVar3 = (**(code **)(lVar1 + 0xd0))();
        }
        else {
            iVar3 = (**(code **)(lVar1 + 0xd8))();
        }
        if (iVar3 != 0) {
            return iVar3;
        }
    }
    if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) == 1))
    {
        iVar3 = 8;
    }
    return iVar3;
}



ulonglong FUN_140467ed0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xc0));
    if ((plVar2 == (longlong *)0x0) || (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0)) {
        if (*(longlong **)(param_1 + 0xcc0) != (longlong *)0x0) {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0xcc0) + 0xd8))();
            uVar4 = uVar3 & 0xffffffff;
            if ((int)uVar3 != 0) {
                return uVar3;
            }
        }
        if ((*(longlong *)(param_1 + 0xe0) != 0) &&
            (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) == 1)) {
            uVar4 = 8;
        }
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140467f50(longlong *param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;
    int *piVar10;
    longlong *plVar11;
    longlong **pplVar12;
    ulonglong uVar13;
    longlong *plVar14;
    longlong **pplVar15;
    wchar_t *pwVar16;
    undefined8 uVar17;
    wchar_t *pwVar18;
    uint uVar19;
    ulonglong *puVar20;
    ulonglong uVar21;
    int iVar22;
    longlong *plVar23;
    longlong lVar24;
    bool bVar25;
    float fVar26;
    float fVar27;
    double dVar28;
    longlong local_res8;
    longlong *local_res10;
    ulonglong local_88;
    longlong *local_80;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 local_70;
    undefined4 uStack108;

    plVar23 = (longlong *)param_1[0x2dd];
    if (param_2 == plVar23) {
        return;
    }
    local_res10 = plVar23;
    if (plVar23 != (longlong *)0x0) {
        (**(code **)(*plVar23 + 0x288))(plVar23,0,0);
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x298))((longlong *)param_1[0x2dd],0,0);
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x2a8))((longlong *)param_1[0x2dd],0,0);
        if (param_1[0x305] != 0) {
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x400))
                    ((longlong *)param_1[0x2dd],1,0x19,FUN_140476a20,&DAT_140476bc0,param_1);
        }
        lVar8 = *(longlong *)(param_1[0x308] + 0x10);
        pplVar15 = DAT_140c7cf68;
        if (lVar8 != param_1[0x308]) {
            do {
                uVar6 = *(undefined4 *)(lVar8 + 0x20);
                plVar23 = (longlong *)**(longlong **)(lVar8 + 0x30);
                if (plVar23 != *(longlong **)(lVar8 + 0x30)) {
                    do {
                        pplVar12 = (longlong **)*pplVar15;
                        pplVar7 = pplVar12;
                        if (pplVar12 != pplVar15) {
                            do {
                                pplVar7 = (longlong **)*pplVar7;
                            } while (pplVar7 != pplVar15);
                            if (pplVar12 != pplVar15) {
                                do {
                                    pplVar7 = (longlong **)*pplVar12;
                                    if (plVar23 + 2 == pplVar12[2]) {
                                        pplVar15 = (longlong **)pplVar12[1];
                                        *pplVar15 = (longlong *)pplVar7;
                                        pplVar7[1] = (longlong *)pplVar15;
                                        FUN_14018b900(pplVar12,0);
                                        pplVar15 = DAT_140c7cf68;
                                    }
                                    pplVar12 = pplVar7;
                                } while (pplVar7 != pplVar15);
                            }
                        }
                        plVar23 = (longlong *)*plVar23;
                    } while (plVar23 != (longlong *)*(longlong *)(lVar8 + 0x30));
                }
                if ((longlong *)**(longlong **)(lVar8 + 0x30) != *(longlong **)(lVar8 + 0x30)) {
                    (**(code **)(*(longlong *)param_1[0x2dd] + 0x400))
                            ((longlong *)param_1[0x2dd],1,uVar6,FUN_140477460,FUN_140477a10,param_1);
                    pplVar15 = DAT_140c7cf68;
                }
                lVar24 = *(longlong *)(lVar8 + 0x18);
                if (lVar24 == 0) {
                    lVar24 = *(longlong *)(lVar8 + 8);
                    if (lVar8 == *(longlong *)(lVar24 + 0x18)) {
                        do {
                            lVar8 = lVar24;
                            lVar24 = *(longlong *)(lVar8 + 8);
                        } while (lVar8 == *(longlong *)(lVar24 + 0x18));
                    }
                    if (*(longlong *)(lVar8 + 0x18) != lVar24) {
                        lVar8 = lVar24;
                    }
                }
                else {
                    for (lVar9 = *(longlong *)(lVar24 + 0x10); lVar8 = lVar24, lVar9 != 0;
                         lVar9 = *(longlong *)(lVar9 + 0x10)) {
                        lVar24 = lVar9;
                    }
                }
                plVar23 = local_res10;
            } while (lVar8 != param_1[0x308]);
        }
        if ((longlong *)param_1[0x316] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x316] + 0x3a8))();
        }
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x3a8))();
        (**(code **)(*(longlong *)param_1[0x2dd] + 8))();
    }
    pplVar15 = (longlong **)(param_1 + 0x6d3);
    pwVar18 = (wchar_t *)0x0;
    if (*pplVar15 != (longlong *)0x0) {
        if (*pplVar15 != (longlong *)0x0) {
            (**(code **)(**pplVar15 + 8))();
            *pplVar15 = (longlong *)0x0;
        }
        *pplVar15 = (longlong *)0x0;
    }
    pplVar12 = (longlong **)(param_1 + 0x6d4);
    if (*pplVar12 != (longlong *)0x0) {
        if (*pplVar12 != (longlong *)0x0) {
            (**(code **)(**pplVar12 + 8))();
            *pplVar12 = (longlong *)0x0;
        }
        *pplVar12 = (longlong *)0x0;
    }
    param_1[0x2dd] = (longlong)param_2;
    if (param_2 == (longlong *)0x0) goto LAB_140469189;
    (**(code **)(*param_2 + 0x188))(param_2,*(int *)(param_1 + 0x267) != 0);
    (**(code **)(*(longlong *)param_1[0x2dd] + 0x288))
            ((longlong *)param_1[0x2dd],FUN_140472190,param_1);
    (**(code **)(*(longlong *)param_1[0x2dd] + 0x298))
            ((longlong *)param_1[0x2dd],FUN_140472510,param_1);
    (**(code **)(*(longlong *)param_1[0x2dd] + 0x2a8))
            ((longlong *)param_1[0x2dd],FUN_140472590,param_1);
    if (param_1[0x305] != 0) {
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x3f8))
                ((longlong *)param_1[0x2dd],1,0x19,FUN_140476a20,&DAT_140476bc0,param_1);
    }
    lVar8 = *(longlong *)(param_1[0x308] + 0x10);
    if (lVar8 != param_1[0x308]) {
        do {
            if ((longlong *)**(longlong **)(lVar8 + 0x30) != *(longlong **)(lVar8 + 0x30)) {
                (**(code **)(*(longlong *)param_1[0x2dd] + 0x3f8))
                        ((longlong *)param_1[0x2dd],1,*(undefined4 *)(lVar8 + 0x20),FUN_140477460,
                         FUN_140477a10,param_1);
            }
            lVar24 = *(longlong *)(lVar8 + 0x18);
            if (lVar24 == 0) {
                lVar24 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar24 + 0x18)) {
                    do {
                        lVar8 = lVar24;
                        lVar24 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar24 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar24) {
                    lVar8 = lVar24;
                }
            }
            else {
                for (lVar9 = *(longlong *)(lVar24 + 0x10); lVar8 = lVar24, lVar9 != 0;
                     lVar9 = *(longlong *)(lVar9 + 0x10)) {
                    lVar24 = lVar9;
                }
            }
        } while (lVar8 != param_1[0x308]);
    }
    if ((param_1[0x316] != 0) && (*(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x18) == 0)) {
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x380))();
    }
    if ((*(int *)(param_1 + 0x10) == 0x12) && (param_1[0x1a1] != 0)) {
        if (*pplVar15 == (longlong *)0x0) {
            uVar13 = *(ulonglong *)(param_1[0x1a1] + 8);
            pwVar16 = pwVar18;
            if ((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) {
                pwVar16 = (wchar_t *)(DAT_140c3fe68 + uVar13);
            }
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),pwVar16,pplVar15,0);
            if (-1 < iVar3) goto LAB_1404683c3;
        }
        else {
            LAB_1404683c3:
            local_88 = 0x96;
            local_80 = (longlong *)0x3f800000;
            local_78 = 0;
            uStack116 = 0;
            local_70 = 0;
            uStack108 = 0;
            (**(code **)(**pplVar15 + 0x248))(*pplVar15,0,&local_88);
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x380))((longlong *)param_1[0x2dd],0xa8,*pplVar15);
        }
        lVar2 = DAT_140c65898;
        uVar19 = *(uint *)(param_1 + 1);
        lVar8 = *(longlong *)(DAT_140c65898 + 0x7d90);
        lVar24 = *(longlong *)(lVar8 + 0x48);
        local_res8 = lVar24;
        lVar9 = *(longlong *)(lVar24 + 8);
        while (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x20) < uVar19) {
                lVar9 = *(longlong *)(lVar9 + 0x18);
            }
            else {
                local_res8 = lVar9;
                lVar9 = *(longlong *)(lVar9 + 0x10);
            }
        }
        if ((local_res8 == lVar24) || (uVar19 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar24;
        }
        if (local_res8 == lVar24) {
            lVar24 = *(longlong *)(lVar8 + 0x68);
            local_res8 = lVar24;
            lVar9 = *(longlong *)(lVar24 + 8);
            while (lVar9 != 0) {
                if (*(uint *)(lVar9 + 0x20) < uVar19) {
                    lVar9 = *(longlong *)(lVar9 + 0x18);
                }
                else {
                    local_res8 = lVar9;
                    lVar9 = *(longlong *)(lVar9 + 0x10);
                }
            }
            if ((local_res8 == lVar24) || (uVar19 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar24;
            }
            if (local_res8 == lVar24) {
                lVar8 = FUN_1403967f0(lVar8);
                if ((((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) &&
                     (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x1b0) != 0)) &&
                    ((*pplVar12 != (longlong *)0x0 ||
                      (iVar3 = (**(code **)(**(longlong **)(lVar2 + 0x7250) + 0x28))
                              (*(longlong **)(lVar2 + 0x7250),
                               L"Art\\Icon\\Attachment\\QuestBang\\Icon_Attachment_QuestBang_000.m3"
                                      ,pplVar12,0), -1 < iVar3)))) {
                    local_88 = 0x96;
                    local_80 = (longlong *)0x3f800000;
                    local_78 = 0;
                    uStack116 = 0;
                    local_70 = 0;
                    uStack108 = 0;
                    (**(code **)(**pplVar12 + 0x248))(*pplVar12,0,&local_88);
                    uVar17 = 0x16;
                    goto LAB_14046885a;
                }
                goto LAB_14046886d;
            }
        }
        if (*pplVar12 == (longlong *)0x0) {
            lVar8 = *(longlong *)(lVar8 + 0x28);
            local_res8 = lVar8;
            lVar24 = *(longlong *)(lVar8 + 8);
            while (lVar24 != 0) {
                if (*(uint *)(lVar24 + 0x20) < uVar19) {
                    lVar24 = *(longlong *)(lVar24 + 0x18);
                }
                else {
                    local_res8 = lVar24;
                    lVar24 = *(longlong *)(lVar24 + 0x10);
                }
            }
            if ((local_res8 == lVar8) || (uVar19 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar8;
            }
            if (((local_res8 == lVar8) || (local_res8 == -0x28)) ||
                (*(longlong *)(local_res8 + 0x38) == 0)) {
                uVar6 = 2;
            }
            else {
                uVar6 = *(undefined4 *)(*(longlong *)(local_res8 + 0x38) + 0x158);
            }
            lVar8 = FUN_14020ce20(uVar6);
            if (lVar8 == 0) {
                LAB_1404685d2:
                pwVar18 = L"Art\\Icon\\Attachment\\Dice\\Icon_Attachment_Dice_000.m3";
            }
            else {
                uVar13 = *(ulonglong *)(lVar8 + 0x30);
                if ((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) {
                    pwVar18 = (wchar_t *)(DAT_140c3fe68 + uVar13);
                }
                if ((pwVar18 == (wchar_t *)0x0) || (*pwVar18 == L'\0')) goto LAB_1404685d2;
            }
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),pwVar18,pplVar12,0);
            if (iVar3 < 0) {
                *pplVar12 = (longlong *)0x0;
            }
        }
        plVar14 = *pplVar12;
        if (plVar14 != (longlong *)0x0) {
            local_88 = 0x96;
            local_80 = (longlong *)0x3f800000;
            local_78 = 0;
            uStack116 = 0;
            local_70 = 0;
            uStack108 = 0;
            (**(code **)(*plVar14 + 0x248))(plVar14,0,&local_88);
            uVar17 = 0x16;
            LAB_14046885a:
            (**(code **)(*(longlong *)param_1[0x2dd] + 0x380))
                    ((longlong *)param_1[0x2dd],uVar17,*pplVar12);
        }
    }
    else if ((*(int *)(param_1 + 0x10) == 0x1f) &&
             ((*(int *)(param_1 + 0x1a9) != 0 && (lVar8 = FUN_14020bd20(), lVar8 != 0)))) {
        if (*pplVar12 == (longlong *)0x0) {
            uVar13 = *(ulonglong *)(lVar8 + 0x18);
            if ((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) {
                pwVar18 = (wchar_t *)(DAT_140c3fe68 + uVar13);
            }
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),pwVar18,pplVar12,0);
            if (iVar3 < 0) goto LAB_14046886d;
        }
        puVar20 = (ulonglong *)(lVar8 + 0x28);
        lVar24 = 2;
        do {
            uVar13 = *puVar20;
            if ((((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) &&
                 ((short *)(DAT_140c3fe68 + uVar13) != (short *)0x0)) &&
                (*(short *)(DAT_140c3fe68 + uVar13) != 0)) {
                (**(code **)(**pplVar12 + 0x310))();
            }
            puVar20 = puVar20 + 1;
            lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        piVar10 = (int *)(lVar8 + 0xd8);
        lVar24 = 4;
        do {
            iVar3 = *piVar10;
            if ((iVar3 != 0) && (iVar3 < 0xca)) {
                (**(code **)(**pplVar12 + 0x2d8))(*pplVar12,iVar3,1);
            }
            piVar10 = piVar10 + 1;
            lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 0;
        local_88 = 0x96;
        local_80 = (longlong *)0x3f800000;
        local_78 = 0;
        uStack116 = 0;
        local_70 = 0;
        uStack108 = 0;
        (**(code **)(**pplVar12 + 0x248))(*pplVar12,0,&local_88);
        uVar6 = *(undefined4 *)(lVar8 + 0x104);
        if (DAT_140c63840 == (code *)0x0) {
            lVar9 = lVar24;
            if ((_DAT_140c655ec == 0) && (iVar3 = FUN_1402160e0(), -1 < iVar3)) {
                lVar9 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar6);
            }
        }
        else {
            lVar9 = (*DAT_140c63840)(&PTR_u_MaterialData_140a6b630,uVar6,DAT_140c63858);
        }
        uVar6 = *(undefined4 *)(lVar8 + 0x108);
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c655ec == 0) {
                iVar3 = FUN_1402160e0();
                if (iVar3 < 0) {
                    lVar24 = 0;
                }
                else {
                    lVar24 = (**(code **)(*DAT_140c63a78 + 0x18))(DAT_140c63a78,uVar6);
                }
            }
        }
        else {
            lVar24 = (*DAT_140c63840)(&PTR_u_MaterialData_140a6b630,uVar6,DAT_140c63858);
        }
        fVar27 = -1.0;
        fVar26 = -1.0;
        if (lVar9 != 0) {
            fVar27 = (float)(ulonglong)*(uint *)(lVar9 + 4);
        }
        if (lVar24 != 0) {
            fVar26 = (float)(ulonglong)*(uint *)(lVar24 + 4);
        }
        local_res8 = CONCAT44(fVar26,fVar27);
        (**(code **)(**pplVar12 + 0x120))(*pplVar12,&local_res8);
        uVar17 = 0x15;
        goto LAB_14046885a;
    }
    LAB_14046886d:
    uVar13 = 0;
    if (param_1[0x2de] != 0) {
        uVar21 = 1000;
        if (*(char *)(param_1 + 0x36) != '\0') {
            uVar21 = uVar13;
        }
        if (*(int *)(param_1 + 0x55) != 0) {
            iVar3 = (**(code **)(*param_1 + 0x20))();
            iVar22 = 0x536;
            if (((((iVar3 == 0) || (param_1[0x17] == 0)) ||
                  ((*(uint *)(param_1[0x17] + 0x60) & 0x100000) == 0)) ||
                 ((plVar14 = (longlong *)param_1[0x2dd], plVar14 == (longlong *)0x0 ||
                                                         (iVar3 = (**(code **)(*plVar14 + 0x198))(plVar14,0x536), iVar3 == 0)))) ||
                ((param_1[3] != 0 && ((*(uint *)(param_1 + 5) & 0x800) != 0)))) {
                if ((int)uVar21 != 0) {
                    lVar8 = param_1[3];
                    if (lVar8 != 0) {
                        if (((*(uint *)(param_1 + 5) & 0x800) != 0) && (*(int *)(param_1 + 0x10) != 0x12))
                            goto LAB_140468d5d;
                        if ((lVar8 != 0) &&
                            ((*(int *)(param_1 + 0x10) != 4 && (*(int *)(param_1 + 0x10) != 0x1e)))) {
                            piVar10 = (int *)(*(longlong *)(lVar8 + 0xd0) + 0x14);
                            do {
                                if (*piVar10 != 0) goto LAB_14046896c;
                                uVar13 = uVar13 + 1;
                                piVar10 = piVar10 + 1;
                            } while (uVar13 < 5);
                        }
                    }
                    if (*(int *)(param_1 + 0x10) == 1) {
                        LAB_14046896c:
                        iVar22 = 0x452;
                    }
                    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))
                            ((longlong *)param_1[0x2dd],iVar22);
                    if (iVar3 != 0) {
                        dVar28 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
                        iVar3 = (int)(dVar28 * 65536.0);
                        if (param_1[0x2dd] != 0) {
                            if (iVar22 == 0) {
                                local_88 = local_88 & 0xffffffff00000000;
                                local_78 = 0x40470d80;
                                uStack116 = 1;
                                local_70 = 0;
                                uStack108 = 0;
                                local_80 = param_1;
                                FUN_140195960(param_1 + 0x273,2000,&local_88,4);
                                local_88 = 0;
                                local_78 = 0;
                                uStack116 = 0;
                            }
                            else {
                                uVar6 = FUN_140470540(param_1,iVar22);
                                piVar10 = (int *)(**(code **)(*(longlong *)param_1[0x2dd] + 0x1a8))
                                        ((longlong *)param_1[0x2dd],uVar6,iVar3);
                                if (*piVar10 == 0x96) goto LAB_140468d51;
                                iVar1 = *(int *)(param_1 + 0x285);
                                FUN_140470b80(param_1,~piVar10[2] & 1,piVar10[2] & 8);
                                if ((*(int *)(param_1 + 0x285) == 0x3f) != (iVar1 == 0x3f)) {
                                    uVar6 = FUN_140470540(param_1,iVar22);
                                    piVar10 = (int *)(**(code **)(*(longlong *)param_1[0x2dd] + 0x1a8))
                                            ((longlong *)param_1[0x2dd],uVar6,iVar3);
                                    if (*piVar10 == 0x96) {
                                        uVar19 = *(uint *)(param_1 + 0x285);
                                        if (param_1[0x198] != 0) {
                                            uVar4 = FUN_140467ed0(param_1);
                                            *(uint *)((longlong)param_1 + 0x142c) =
                                                    *(uint *)((longlong)param_1 + 0x142c) & 0xfffffffb;
                                            *(uint *)((longlong)param_1 + 0x142c) =
                                                    *(uint *)((longlong)param_1 + 0x142c) | ~uVar19 & 4;
                                            uVar19 = *(uint *)((longlong)param_1 + 0x142c);
                                            if (((uVar4 & 0xfffffff6) == 0) && (uVar4 != 1)) {
                                                uVar19 = 0x3f;
                                            }
                                            if (*(uint *)(param_1 + 0x285) != uVar19) {
                                                if (uVar19 == 0x3f) {
                                                    FUN_140195d70(param_1 + 0x286);
                                                    FUN_140195d70(param_1 + 0x28f);
                                                    (**(code **)(*(longlong *)param_1[0x198] + 0xa8))
                                                            ((longlong *)param_1[0x198],3,3);
                                                    *(undefined4 *)(param_1 + 0x298) = 1;
                                                    if (param_1[0x2dd] != 0) {
                                                        FUN_140471ef0(param_1,1,1);
                                                        FUN_140471ef0(param_1,1,0);
                                                    }
                                                }
                                                else if (*(uint *)(param_1 + 0x285) == 0x3f) {
                                                    local_88 = local_88 & 0xffffffff00000000;
                                                    local_78 = 0x40471e50;
                                                    uStack116 = 1;
                                                    local_70 = 0;
                                                    uStack108 = 0;
                                                    local_80 = param_1;
                                                    FUN_140195960(param_1 + 0x286,0x96,&local_88,4);
                                                    local_78 = 0x40471ea0;
                                                    uStack116 = 1;
                                                    local_88 = local_88 & 0xffffffff00000000;
                                                    local_70 = 0;
                                                    uStack108 = 0;
                                                    local_80 = param_1;
                                                    FUN_140195960(param_1 + 0x28f,0x96,&local_88,4);
                                                    *(undefined4 *)(param_1 + 0x298) = 1;
                                                }
                                                if ((uVar19 & 4) != 0) {
                                                    FUN_140195d70(param_1 + 0x273);
                                                }
                                                if ((uVar19 & 0x10) != 0) {
                                                    FUN_140195d70(param_1 + 0x27c);
                                                }
                                                *(uint *)(param_1 + 0x285) = uVar19;
                                            }
                                        }
                                        goto LAB_140468d51;
                                    }
                                }
                                uVar13 = (ulonglong)piVar10[4];
                                if (*piVar10 == iVar22) {
                                    if (uVar13 < 8) {
                                        uVar5 = *(undefined4 *)(&DAT_140b670f0 + uVar13 * 4);
                                    }
                                    else {
                                        uVar5 = 9;
                                    }
                                }
                                else if (uVar13 < 8) {
                                    uVar5 = *(undefined4 *)(&DAT_140b67110 + uVar13 * 4);
                                }
                                else {
                                    uVar5 = 0xd;
                                }
                                lVar8 = FUN_1404695e0(param_1);
                                if ((((*(int *)(param_1 + 0x25c) != 0) &&
                                      (*(float *)((longlong)param_1 + 0x12d4) == 0.0)) &&
                                     (1e-05 < (float)(*(uint *)(param_1 + 0x259) & 0x7fffffff))) &&
                                    (((*(int *)((longlong)param_1 + 0x1354) == 0 ||
                                       ((*(byte *)(piVar10 + 1) & 2) != 0)) ||
                                      ((lVar8 != 0 &&
                                        ((*(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x138) + 0x70) + 0x108) &
                                          0x400000) != 0)))))) {
                                    *(undefined4 *)(param_1 + 0x262) = 1;
                                    *(undefined4 *)((longlong)param_1 + 0x12d4) = 0x3e19999a;
                                    local_88 = 0;
                                    local_80 = (longlong *)0x3f800000;
                                    local_78 = 0;
                                    uStack116 = 0;
                                    local_70 = 0;
                                    uStack108 = 0;
                                    (**(code **)(*(longlong *)param_1[0x2dd] + 0x248))
                                            ((longlong *)param_1[0x2dd],7,&local_88);
                                }
                                local_88 = CONCAT44(iVar3,uVar6);
                                uStack116 = 2;
                                local_78 = uVar5;
                            }
                            uStack108 = 0;
                            local_70 = 0;
                            local_80 = (longlong *)0x3f800000;
                            (**(code **)(*(longlong *)param_1[0x2dd] + 0x248))
                                    ((longlong *)param_1[0x2dd],4,&local_88);
                            if (param_1[700] != 0) {
                                FUN_14071a9f0(param_1[700],1);
                            }
                        }
                        LAB_140468d51:
                        uVar21 = 0x96;
                        plVar23 = local_res10;
                    }
                }
            }
            else {
                *(undefined4 *)((longlong)param_1 + 0x1344) = 0x2a;
            }
        }
        LAB_140468d5d:
        *(undefined4 *)(param_1 + 0x55) = 0;
        if (plVar23 == (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x2de] + 0x170))((longlong *)param_1[0x2de],uVar21);
        }
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0xa6);
    uVar6 = 0;
    if (iVar3 == 0) {
        LAB_140468db2:
        uVar5 = uVar6;
    }
    else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0xa7);
        uVar5 = 1;
        if (iVar3 == 0) goto LAB_140468db2;
    }
    *(undefined4 *)((longlong)param_1 + 0x12dc) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x25e);
    if (iVar3 == 0) {
        LAB_140468df3:
        uVar5 = uVar6;
    }
    else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x25f);
        uVar5 = 1;
        if (iVar3 == 0) goto LAB_140468df3;
    }
    *(undefined4 *)(param_1 + 0x25c) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],2);
    if (iVar3 == 0) {
        LAB_140468e34:
        uVar5 = uVar6;
    }
    else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],3);
        uVar5 = 1;
        if (iVar3 == 0) goto LAB_140468e34;
    }
    *(undefined4 *)((longlong)param_1 + 0x12e4) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x1d78);
    if (iVar3 == 0) {
        LAB_140468e75:
        uVar5 = uVar6;
    }
    else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x1d79);
        uVar5 = 1;
        if (iVar3 == 0) goto LAB_140468e75;
    }
    *(undefined4 *)(param_1 + 0x25d) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],0xfa);
    if (iVar3 == 0) {
        LAB_140468eb6:
        uVar5 = uVar6;
    }
    else {
        iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],0xfb);
        uVar5 = 1;
        if (iVar3 == 0) goto LAB_140468eb6;
    }
    *(undefined4 *)((longlong)param_1 + 0x12ec) = uVar5;
    uVar5 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],0x6c);
    *(undefined4 *)((longlong)param_1 + 0x12f4) = uVar5;
    uVar5 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],0xfc);
    *(undefined4 *)(param_1 + 0x25f) = uVar5;
    uVar5 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x9a);
    *(undefined4 *)((longlong)param_1 + 0x12fc) = uVar5;
    uVar5 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x22c);
    *(undefined4 *)(param_1 + 0x260) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x1c0))((longlong *)param_1[0x2dd],0xa6);
    if ((iVar3 == 0) || (uVar5 = 1, *(int *)(param_1 + 0x10) != 0xd)) {
        uVar5 = uVar6;
    }
    *(undefined4 *)((longlong)param_1 + 0x135c) = uVar5;
    iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x1e1b);
    if ((iVar3 != 0) ||
        (iVar3 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x1e1a),
                iVar3 != 0)) {
        uVar6 = 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x1304) = uVar6;
    uVar6 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x198))((longlong *)param_1[0x2dd],0x1526);
    *(undefined4 *)(param_1 + 0x261) = uVar6;
    fVar26 = (float)(**(code **)(*(longlong *)param_1[0x2dd] + 0x4d0))();
    if (fVar26 <= 0.5) {
        fVar26 = 0.5;
    }
    *(float *)(param_1 + 0xae) = fVar26;
    lVar8 = FUN_14022d500(*(undefined4 *)(param_1 + 0x1b));
    if (lVar8 == 0) {
        uVar6 = (**(code **)(*(longlong *)param_1[0x2dd] + 0x4d8))();
        *(undefined4 *)((longlong)param_1 + 0x574) = uVar6;
    }
    else {
        dVar28 = (double)*(float *)(lVar8 + 0x5c) * 1.8;
        uVar6 = SUB84(dVar28,0);
        uVar5 = (undefined4)((ulonglong)dVar28 >> 0x20);
        fVar26 = (float)(**(code **)(*(longlong *)param_1[0x2dd] + 0x4d8))();
        if ((float)(double)CONCAT44(uVar5,uVar6) <= fVar26) {
            fVar26 = (float)(double)CONCAT44(uVar5,uVar6);
        }
        *(float *)((longlong)param_1 + 0x574) = fVar26;
    }
    if (param_1[0x2df] != 0) {
        local_88 = 0;
        local_80 = (longlong *)0x3f800000;
        local_78 = 0;
        uStack116 = 0;
        local_70 = 0;
        uStack108 = 0;
        (**(code **)(*(longlong *)param_1[0x2dd] + 0x248))((longlong *)param_1[0x2dd],0,&local_88);
    }
    if (param_1[0x198] != 0) {
        bVar25 = *(int *)(param_1 + 0x285) == 0x3f;
        FUN_140471ef0(param_1,bVar25,1);
        FUN_140471ef0(param_1,bVar25,0);
        (**(code **)(*(longlong *)param_1[0x198] + 0xa8))((longlong *)param_1[0x198],-bVar25 & 3,3);
        FUN_140195d70(param_1 + 0x286);
        FUN_140195d70(param_1 + 0x28f);
        if ((param_1[0x1a6] != param_1[0x1a7]) && (*(int *)(param_1 + 0x1e) == 0)) {
            uVar19 = *(uint *)((longlong)param_1 + 0x34);
            if (*(uint *)((longlong)param_1 + 0xec) == uVar19) {
                uVar4 = *(uint *)(param_1 + 0x1b);
                if (*(uint *)(param_1 + 0x1d) == uVar4) {
                    lVar8 = DAT_140c658e8;
                    if ((uVar4 < 0x11) && (uVar19 < 3)) {
                        lVar8 = (longlong)(int)uVar19 * 0x50 +
                                               *(longlong *)
                                                       ((longlong)(int)uVar4 * 0x20 + 8 + *(longlong *)(DAT_140c658e8 + 0x58));
                    }
                    (**(code **)(*(longlong *)param_1[0x198] + 0x138))
                            ((longlong *)param_1[0x198],param_1 + 0x1a5,lVar8);
                }
            }
        }
    }
    (***(code ***)param_1[0x2dd])();
    LAB_140469189:
    plVar14 = (longlong *)param_1[0x2de];
    if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x150))(plVar14,param_1[0x2dd]);
    }
    plVar14 = (longlong *)param_1[0x2de];
    plVar11 = plVar14;
    if (plVar14 == (longlong *)0x0) {
        plVar11 = (longlong *)param_1[0x2df];
    }
    if (plVar11 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0x268) = 0x3f800000;
    }
    else {
        if (plVar14 == (longlong *)0x0) {
            plVar14 = (longlong *)param_1[0x2df];
        }
        lVar8 = (**(code **)(*plVar14 + 0x48))(plVar14,1);
        fVar27 = *(float *)(lVar8 + 0x30) * 2.0;
        fVar26 = 1.0;
        if (1.0 <= fVar27) {
            fVar26 = fVar27;
        }
        *(float *)(param_1 + 0x268) = fVar26;
    }
    *(undefined4 *)((longlong)param_1 + 0x134c) = 2;
    FUN_14046cdc0(param_1,1);
    lVar8 = param_1[0x1e1];
    *(undefined4 *)((longlong)param_1 + 0x36e4) = 0;
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0xf18)) {
        *(undefined4 *)(lVar8 + 0x36e4) = 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        FUN_1406015c0(*(longlong *)(DAT_140c65898 + 0x6c50),param_1);
    }
    if (param_1[0x2dd] != 0) {
        FUN_140579600();
    }
    if ((plVar23 == (longlong *)0x0) && (param_1[0x2dd] != 0)) {
        FUN_14045f080(param_1);
    }
    return;
}



void FUN_1404692d0(longlong param_1,uint param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;

    lVar5 = *(longlong *)(param_1 + 0x15f0);
    if (lVar5 != 0) {
        do {
            uVar3 = *(uint *)(lVar5 + 0x14) & param_2;
            if ((((param_2 & 3) == 0) || ((uVar3 & 3) != 0)) &&
                (((param_2 & 0x7c) == 0 || ((uVar3 & 0x7c) != 0)))) {
                lVar2 = param_3[1];
                lVar1 = lVar2 + 1;
                lVar4 = FUN_14018db00(*param_3,lVar1,8);
                *(longlong *)(lVar4 + lVar2 * 8) = lVar5;
                if (*param_3 != lVar4) {
                    FUN_1407db590(lVar4,*param_3,param_3[1] << 3);
                    lVar2 = *param_3;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *param_3 = lVar4;
                }
                param_3[1] = lVar1;
            }
            lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
    }
    return;
}



longlong FUN_1404693c0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;

    lVar1 = *(longlong *)(param_1 + 0x15f0);
    lVar3 = DAT_140c65b70;
    do {
        if (lVar1 == 0) {
            DAT_140c65b70 = lVar3;
            return 0;
        }
        DAT_140c65b70 = lVar3;
        if (*(int *)(lVar1 + 0x50) == param_2) {
            uVar5 = (**(code **)(lVar3 + 0x7b8))();
            for (puVar2 = *(ulonglong **)
                    (*(longlong *)(lVar3 + 0x7b0) + (uVar5 % *(ulonglong *)(lVar3 + 0x7a8)) * 8);
                 puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                if ((uVar5 == *puVar2) && (iVar4 = (**(code **)(lVar3 + 0x7c0))(), iVar4 != 0)) {
                    if ((puVar2 + 3 != (ulonglong *)0x0) &&
                        ((uVar5 = puVar2[3], uVar5 != 0 && (param_3 == *(int *)(uVar5 + 0x154))))) {
                        return lVar1;
                    }
                    break;
                }
            }
        }
        lVar1 = *(longlong *)(lVar1 + 0x30);
        lVar3 = DAT_140c65b70;
    } while( true );
}



void FUN_1404694a0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_1404693c0();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x1c) < 1)) &&
        (lVar1 = *(longlong *)(lVar2 + 0x48), lVar1 != 0)) {
        joined_r0x0001404694d1:
        lVar1 = lVar1 + -1;
        if (-1 < lVar1) {
            lVar3 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar2 + 0x40) + lVar1 * 4));
            if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
                do {
                    if (*(int *)(lVar3 + 0x40) == *(int *)(param_1 + 8)) {
                        FUN_140717fa0();
                        break;
                    }
                    lVar3 = *(longlong *)(lVar3 + 0x28);
                } while (lVar3 != 0);
            }
            goto joined_r0x0001404694d1;
        }
    }
    return;
}



bool FUN_140469530(longlong param_1)

{
    bool bVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_1 + 0x1600));
    if (lVar3 == 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == param_1) {
            lVar3 = FUN_14039df50();
            if (lVar3 != 0) {
                lVar3 = FUN_1404695e0(lVar3);
                if (lVar3 != 0) goto LAB_1404695b0;
            }
            if (*(longlong *)(DAT_140c65898 + 0x78) == param_1) {
                lVar3 = FUN_14039df50();
                if (lVar3 != 0) {
                    iVar2 = FUN_140469530(lVar3);
                    if (iVar2 != 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    LAB_1404695b0:
    bVar1 = false;
    if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x138) + 0x70) + 0x2c) != 0) {
        bVar1 = 0 < (*(int *)(lVar3 + 0x194) + *(int *)(lVar3 + 0x50)) - DAT_140c636a8;
    }
    return bVar1;
}



void FUN_1404695e0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_1 + 0x1600));
    if ((lVar1 == 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_1)) {
        lVar1 = FUN_14039df50();
        if (lVar1 != 0) {
            FUN_1404695e0(lVar1);
            return;
        }
    }
    return;
}



void FUN_140469650(undefined8 param_1,float param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    float fVar8;
    float fVar9;

    piVar4 = DAT_140c63750;
    lVar2 = *(longlong *)(param_3 + 0x16c0);
    lVar5 = *(longlong *)(lVar2 + 0x10);
    while (lVar5 != lVar2) {
        lVar7 = *(longlong *)(lVar5 + 0x28);
        if (lVar7 != 0) {
            fVar8 = *(float *)(lVar7 + 0x14);
            fVar9 = *(float *)(lVar7 + 0x18);
            *(float *)(lVar7 + 0xc) = param_2 * *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0xc);
            iVar1 = *piVar4;
            if (fVar9 <= fVar8) {
                iVar6 = DAT_140c478d0;
                if (iVar1 < DAT_140c478d0) {
                    iVar6 = iVar1;
                }
                fVar9 = fVar8 - fVar9;
                if (param_2 * *(float *)(&DAT_140c478e0 + (longlong)iVar6 * 4) < fVar9) {
                    iVar6 = DAT_140c478d0;
                    if (iVar1 < DAT_140c478d0) {
                        iVar6 = iVar1;
                    }
                    fVar9 = param_2 * *(float *)(&DAT_140c478e0 + (longlong)iVar6 * 4);
                }
                fVar8 = fVar8 - fVar9;
            }
            else {
                fVar9 = fVar9 - fVar8;
                iVar6 = DAT_140c478d0;
                if (iVar1 < DAT_140c478d0) {
                    iVar6 = iVar1;
                }
                if (param_2 * *(float *)(&DAT_140c478e0 + (longlong)iVar6 * 4) < fVar9) {
                    iVar6 = DAT_140c478d0;
                    if (iVar1 < DAT_140c478d0) {
                        iVar6 = iVar1;
                    }
                    fVar9 = param_2 * *(float *)(&DAT_140c478e0 + (longlong)iVar6 * 4);
                }
                fVar8 = fVar8 + fVar9;
            }
            *(float *)(lVar7 + 0x14) = fVar8;
        }
        lVar7 = *(longlong *)(lVar5 + 0x18);
        if (lVar7 == 0) {
            lVar7 = *(longlong *)(lVar5 + 8);
            if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                do {
                    lVar5 = lVar7;
                    lVar7 = *(longlong *)(lVar5 + 8);
                } while (lVar5 == *(longlong *)(lVar7 + 0x18));
            }
            if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                lVar5 = lVar7;
            }
        }
        else {
            for (lVar3 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar3 != 0;
                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                lVar7 = lVar3;
            }
        }
    }
    return;
}



void FUN_1404697a0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 extraout_XMM0_Da;

    if (param_4 != *(int *)(param_3 + 0x1600)) {
        while (*(int *)(param_3 + 0x1600) = param_4, param_4 != 0) {
            lVar3 = FUN_140561c30(DAT_140c65b70);
            if (lVar3 != 0) {
                plVar1 = *(longlong **)(param_3 + 0x1588);
                if (plVar1 == (longlong *)0x0) {
                    return;
                }
                uVar2 = FUN_1400518a0(DAT_140c63628,0x26,2);
                lVar5 = *plVar1;
                uVar4 = (ulonglong)uVar2;
                uVar6 = FUN_14053da10(lVar3);
                // WARNING: Could not recover jumptable at 0x00014046983b. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code **)(lVar5 + 0x50))(uVar6,param_2,uVar6,plVar1,uVar4 & 0xffffffff);
                return;
            }
            param_4 = 0;
            if (*(int *)(param_3 + 0x1600) == 0) {
                return;
            }
        }
        if (*(int *)(param_3 + 0x1624) == 0) {
            *(undefined4 *)(param_3 + 0x1620) = 0;
            FUN_140195d70(param_3 + 0x1628);
        }
        plVar1 = *(longlong **)(param_3 + 0x1588);
        if (plVar1 != (longlong *)0x0) {
            uVar6 = FUN_1400518a0(DAT_140c63628,0x26,2);
            (**(code **)(*plVar1 + 0x50))(extraout_XMM0_Da,param_2,0,plVar1,uVar6);
        }
    }
    return;
}



void FUN_1404698a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined8 extraout_XMM0_Qa;

    if (*(int *)(param_3 + 0x1600) != 0) {
        *(undefined4 *)(param_3 + 0x1600) = 0;
        if (*(int *)(param_3 + 0x1624) == 0) {
            *(undefined4 *)(param_3 + 0x1620) = 0;
            FUN_140195d70(param_3 + 0x1628);
        }
        plVar1 = *(longlong **)(param_3 + 0x1588);
        if (plVar1 != (longlong *)0x0) {
            uVar2 = FUN_1400518a0(DAT_140c63628,0x26,2);
            // WARNING: Could not recover jumptable at 0x000140469907. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 0x50))(extraout_XMM0_Qa,param_2,0,plVar1,uVar2);
            return;
        }
    }
    return;
}



longlong * FUN_140469920(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    while( true ) {
        if (lVar1 == 0) {
            return (longlong *)0x0;
        }
        plVar2 = *(longlong **)(lVar1 + 0x38);
        iVar3 = (**(code **)(*plVar2 + 8))(plVar2);
        if ((iVar3 == param_2) || (*(int *)((longlong)plVar2 + 0x6c) == param_2)) break;
        lVar1 = *(longlong *)(lVar1 + 0x18);
    }
    return plVar2;
}



undefined8 FUN_140469990(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    while( true ) {
        if (lVar1 == 0) {
            return 0;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
        if (iVar2 == param_2) break;
        lVar1 = *(longlong *)(lVar1 + 0x18);
    }
    return 1;
}



undefined8 FUN_1404699f0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    int iVar2;

    if (param_2 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x15c8);
    while( true ) {
        if (lVar1 == 0) {
            return 0;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
        if ((iVar2 == param_3) && (*(int *)(*(longlong *)(lVar1 + 0x38) + 0x154) == param_2)) break;
        lVar1 = *(longlong *)(lVar1 + 0x18);
    }
    return 1;
}



undefined8 FUN_140469a70(longlong param_1,int param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    do {
        if (lVar1 == 0) {
            return 0;
        }
        if (*(int *)((longlong)*(longlong **)(lVar1 + 0x38) + 0x154) == param_2) {
            lVar2 = *DAT_140c65b70;
            uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
            iVar4 = (**(code **)(lVar2 + 0x38))(DAT_140c65b70,uVar3,param_3);
            if (iVar4 != 0) {
                return 1;
            }
        }
        lVar1 = *(longlong *)(lVar1 + 0x18);
    } while( true );
}



longlong FUN_140469b00(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    int iVar2;

    lVar1 = *(longlong *)(param_1 + 0x15c8);
    while( true ) {
        if (lVar1 == 0) {
            return 0;
        }
        iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
        if ((iVar2 == param_2) && (*(int *)(*(longlong *)(lVar1 + 0x38) + 0x84) == param_3)) break;
        lVar1 = *(longlong *)(lVar1 + 0x18);
    }
    return *(longlong *)(lVar1 + 0x38);
}



undefined8 FUN_140469b60(longlong param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    int iVar8;
    longlong lVar9;
    longlong *local_res20;
    longlong *local_58;
    longlong *local_50;
    longlong local_48;

    for (local_48 = *(longlong *)(param_1 + 0x15c8); local_48 != 0;
         local_48 = *(longlong *)(local_48 + 0x18)) {
        lVar4 = *(longlong *)(local_48 + 0x38);
        if ((*(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x138) + 0x70) + 4) == param_2) &&
            (iVar3 = *(int *)(param_1 + 8), iVar3 != 0)) {
            pplVar2 = (longlong **)(lVar4 + 0x228);
            local_res20 = *pplVar2;
            *pplVar2 = (longlong *)0x0;
            if (local_res20 != (longlong *)0x0) {
                local_res20[1] = (longlong)&local_res20;
                while (plVar6 = local_res20, local_res20 = plVar6, plVar6 != (longlong *)0x0) {
                    if ((longlong *)plVar6[1] != (longlong *)0x0) {
                        *(longlong *)plVar6[1] = plVar6[2];
                    }
                    pplVar1 = (longlong **)(plVar6 + 2);
                    if (plVar6[2] != 0) {
                        *(longlong *)(plVar6[2] + 8) = plVar6[1];
                    }
                    *pplVar1 = (longlong *)0x0;
                    plVar6[1] = (longlong)pplVar2;
                    *pplVar1 = *pplVar2;
                    *pplVar2 = plVar6;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[1] = (longlong)pplVar1;
                    }
                    iVar8 = (**(code **)(*plVar6 + 0x38))(plVar6);
                    if ((iVar8 == iVar3) &&
                        (lVar9 = (**(code **)(*plVar6 + 0x10))(plVar6), *(int *)(lVar9 + 0x28) == param_3)) {
                        (**(code **)(*plVar6 + 0x50))(plVar6,0);
                    }
                }
            }
            pplVar2 = (longlong **)(lVar4 + 0x218);
            local_58 = *pplVar2;
            *pplVar2 = (longlong *)0x0;
            if (local_58 != (longlong *)0x0) {
                local_58[1] = (longlong)&local_58;
                while (plVar6 = local_58, local_58 = plVar6, plVar6 != (longlong *)0x0) {
                    if ((longlong *)plVar6[1] != (longlong *)0x0) {
                        *(longlong *)plVar6[1] = plVar6[2];
                    }
                    pplVar1 = (longlong **)(plVar6 + 2);
                    if (plVar6[2] != 0) {
                        *(longlong *)(plVar6[2] + 8) = plVar6[1];
                    }
                    *pplVar1 = (longlong *)0x0;
                    plVar6[1] = (longlong)pplVar2;
                    *pplVar1 = *pplVar2;
                    *pplVar2 = plVar6;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[1] = (longlong)pplVar1;
                    }
                    iVar8 = (**(code **)(*plVar6 + 0x38))(plVar6);
                    if ((iVar8 == iVar3) &&
                        (lVar9 = (**(code **)(*plVar6 + 0x10))(plVar6), *(int *)(lVar9 + 0x28) == param_3)) {
                        (**(code **)(*plVar6 + 0x50))(plVar6,0);
                    }
                }
            }
            pplVar2 = (longlong **)(lVar4 + 0x230);
            local_50 = *pplVar2;
            *pplVar2 = (longlong *)0x0;
            if (local_50 != (longlong *)0x0) {
                local_50[1] = (longlong)&local_50;
                while (plVar6 = local_50, local_50 = plVar6, plVar6 != (longlong *)0x0) {
                    if ((longlong *)plVar6[1] != (longlong *)0x0) {
                        *(longlong *)plVar6[1] = plVar6[2];
                    }
                    pplVar1 = (longlong **)(plVar6 + 2);
                    if (plVar6[2] != 0) {
                        *(longlong *)(plVar6[2] + 8) = plVar6[1];
                    }
                    *pplVar1 = (longlong *)0x0;
                    plVar6[1] = (longlong)pplVar2;
                    *pplVar1 = *pplVar2;
                    *pplVar2 = plVar6;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[1] = (longlong)pplVar1;
                    }
                    lVar9 = (**(code **)(*plVar6 + 0x10))(plVar6);
                    if (((*(int *)(lVar9 + 0x4c) != 0) &&
                         (iVar8 = (**(code **)(*plVar6 + 0x38))(plVar6), iVar8 == iVar3)) &&
                        (lVar9 = (**(code **)(*plVar6 + 0x10))(plVar6), *(int *)(lVar9 + 0x28) == param_3)) {
                        (**(code **)(*plVar6 + 0x50))(plVar6,0);
                    }
                }
            }
            puVar5 = *(undefined8 **)(lVar4 + 0x238);
            while (puVar7 = puVar5, puVar7 != (undefined8 *)0x0) {
                puVar5 = (undefined8 *)puVar7[4];
                if ((*(int *)((longlong)puVar7 + 0x2c) == iVar3) && (*(int *)(puVar7 + 6) == param_3)) {
                    (**(code **)*puVar7)(puVar7,1);
                }
            }
            if (local_50 != (longlong *)0x0) {
                FUN_1401a4a00(&local_50);
            }
            if (local_58 != (longlong *)0x0) {
                FUN_1401a4a00(&local_58);
            }
            if (local_res20 != (longlong *)0x0) {
                FUN_1401a4a00(&local_res20);
            }
        }
    }
    return 0;
}



void FUN_140469eb0(longlong param_1)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined8 *puVar12;
    int local_res8 [2];
    undefined8 *local_res10;
    undefined local_res18 [16];

    lVar11 = *(longlong *)(param_1 + 0x15b8);
    if (lVar11 != 0) {
        do {
            puVar12 = (undefined8 *)0x0;
            if (*(longlong *)(lVar11 + 0x890) != 0) {
                puVar12 = *(undefined8 **)(*(longlong *)(lVar11 + 0x890) + 0x10);
            }
            if (puVar12 != (undefined8 *)0x0) {
                if ((*(longlong **)(lVar11 + 0x918) != (longlong *)0x0) &&
                    (iVar6 = (**(code **)(**(longlong **)(lVar11 + 0x918) + 0x18))(), 0 < iVar6)) {
                    (**(code **)(**(longlong **)(lVar11 + 0x918) + 0x70))();
                }
                plVar1 = (longlong *)(lVar11 + 0x8b8);
                FUN_1405005b0(plVar1);
                FUN_140019490(plVar1);
                if (puVar12[3] == 0) {
                    local_res8[0] = 0;
                }
                else {
                    local_res8[0] = *(int *)(puVar12[3] + 0x168);
                    if (local_res8[0] != 0) {
                        uVar7 = (**(code **)(lVar11 + 0x8d0))(local_res8);
                        for (puVar9 = *(ulonglong **)
                                (*(longlong *)(lVar11 + 0x8c8) +
                                 (uVar7 % *(ulonglong *)(lVar11 + 0x8c0)) * 8); puVar9 != (ulonglong *)0x0
                                ; puVar9 = (ulonglong *)puVar9[1]) {
                            if ((uVar7 == *puVar9) &&
                                (iVar6 = (**(code **)(lVar11 + 0x8d8))(local_res8), iVar6 != 0)) {
                                if (puVar9 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_14046a02f;
                                break;
                            }
                        }
                        puVar8 = (undefined8 *)FUN_14018b280(8);
                        puVar10 = (undefined8 *)0x0;
                        if (puVar8 != (undefined8 *)0x0) {
                            *puVar8 = 0;
                            puVar10 = puVar8;
                        }
                        if (*plVar1 == *(longlong *)(lVar11 + 0x8c0)) {
                            FUN_1400290d0(plVar1);
                        }
                        uVar7 = (**(code **)(lVar11 + 0x8d0))(local_res8);
                        ppuVar2 = (ulonglong **)
                                (*(longlong *)(lVar11 + 0x8c8) + (uVar7 % *(ulonglong *)(lVar11 + 0x8c0)) * 8)
                                ;
                        puVar9 = (ulonglong *)FUN_14018b280(0x20);
                        if (puVar9 == (ulonglong *)0x0) {
                            *ppuVar2 = (ulonglong *)0x0;
                            *plVar1 = *plVar1 + 1;
                        }
                        else {
                            puVar3 = *ppuVar2;
                            *puVar9 = uVar7;
                            puVar9[1] = (ulonglong)puVar3;
                            puVar9[3] = (ulonglong)puVar10;
                            *(int *)(puVar9 + 2) = local_res8[0];
                            *ppuVar2 = puVar9;
                            *plVar1 = *plVar1 + 1;
                        }
                    }
                }
                LAB_14046a02f:
                for (lVar4 = puVar12[0x2b9]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
                    if ((((*(longlong *)(lVar4 + 0x38) != 0) &&
                          (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x138), lVar5 != 0)) &&
                         (*(longlong *)(lVar5 + 8) != 0)) &&
                        (((*(int *)(*(longlong *)(lVar5 + 8) + 0x1c) != 0 &&
                           (iVar6 = FUN_140540360(), iVar6 != 0)) &&
                          (iVar6 = FUN_1402dd480(plVar1,*(longlong *)(lVar5 + 8) + 0x1c,local_res18), iVar6 == 0
                          )))) {
                        local_res10 = (undefined8 *)FUN_14018b280(8,0);
                        if (local_res10 == (undefined8 *)0x0) {
                            local_res10 = (undefined8 *)0x0;
                        }
                        else {
                            *local_res10 = 0;
                        }
                        FUN_1400b6080(plVar1,*(longlong *)(lVar5 + 8) + 0x1c,&local_res10);
                    }
                }
                *(undefined4 *)(lVar11 + 0x8b0) = 0;
            }
            lVar11 = *(longlong *)(lVar11 + 0x408);
        } while (lVar11 != 0);
    }
    return;
}



int FUN_14046a110(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    int iVar3;

    if (param_2 == 0) {
        return 0;
    }
    iVar3 = 0;
    for (lVar1 = *(longlong *)(param_1 + 0x15c8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
        iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x38) + 8))();
        if ((iVar2 == param_3) && (*(int *)(*(longlong *)(lVar1 + 0x38) + 0x154) == param_2)) {
            iVar3 = iVar3 + *(int *)(lVar1 + 0x50);
        }
    }
    return iVar3;
}



undefined8 FUN_14046a190(longlong param_1,int param_2,int param_3)

{
    longlong *plVar1;
    int iVar2;

    if (param_2 == 0) {
        return 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x15d0);
    while( true ) {
        if (plVar1 == (longlong *)0x0) {
            return 0;
        }
        iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
        if ((iVar2 == param_3) && (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1), iVar2 == param_2))
            break;
        plVar1 = (longlong *)plVar1[6];
    }
    return 1;
}



undefined8 FUN_14046a210(longlong param_1)

{
    longlong *plVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    int *piVar6;
    longlong lVar7;

    lVar4 = (**(code **)(*DAT_140c65b70 + 0x40))();
    if (*(longlong *)(lVar4 + 8) != *(longlong *)(lVar4 + 0x10)) {
        for (plVar1 = *(longlong **)(param_1 + 0x15d0); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[6]) {
            iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
            piVar2 = *(int **)(lVar4 + 0x10);
            piVar5 = *(int **)(lVar4 + 8);
            for (lVar7 = (longlong)piVar2 - (longlong)piVar5 >> 4; piVar6 = piVar5, 0 < lVar7;
                 lVar7 = lVar7 + -1) {
                if ((((*piVar5 == iVar3) || (piVar6 = piVar5 + 1, piVar5[1] == iVar3)) ||
                     (piVar6 = piVar5 + 2, piVar5[2] == iVar3)) || (piVar6 = piVar5 + 3, piVar5[3] == iVar3))
                    goto LAB_14046a2c8;
                piVar5 = piVar5 + 4;
            }
            lVar7 = (longlong)piVar2 - (longlong)piVar5 >> 2;
            if (lVar7 == 1) {
                LAB_14046a2c1:
                piVar6 = piVar5;
                if (*piVar5 != iVar3) {
                    LAB_14046a2c5:
                    piVar6 = piVar2;
                }
            }
            else if (lVar7 == 2) {
                LAB_14046a2b9:
                piVar6 = piVar5;
                if (*piVar5 != iVar3) {
                    piVar5 = piVar5 + 1;
                    goto LAB_14046a2c1;
                }
            }
            else {
                if (lVar7 != 3) goto LAB_14046a2c5;
                if (*piVar5 != iVar3) {
                    piVar5 = piVar5 + 1;
                    goto LAB_14046a2b9;
                }
            }
            LAB_14046a2c8:
            if (piVar6 != piVar2) {
                return 1;
            }
        }
    }
    return 0;
}



longlong * FUN_14046a300(longlong param_1,int param_2,int param_3,int param_4)

{
    longlong *plVar1;
    int iVar2;

    for (plVar1 = *(longlong **)(param_1 + 0x15d0); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[6]) {
        if (((param_2 == 0) || (iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1), iVar2 == param_2)) &&
            ((param_3 == 0 || (*(int *)(plVar1[10] + 0x5c) == param_3)))) {
            if (param_4 == 0) {
                return plVar1;
            }
            if (*(int *)((longlong)plVar1 + 100) == param_4) {
                return plVar1;
            }
        }
    }
    plVar1 = *(longlong **)(param_1 + 0x15d8);
    do {
        if (plVar1 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        if (((param_2 == 0) || (iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1), iVar2 == param_2)) &&
            ((param_3 == 0 || (*(int *)(plVar1[10] + 0x5c) == param_3)))) {
            if (param_4 == 0) {
                return plVar1;
            }
            if (*(int *)((longlong)plVar1 + 100) == param_4) {
                return plVar1;
            }
        }
        plVar1 = (longlong *)plVar1[8];
    } while( true );
}



void FUN_14046a3d0(longlong param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    bool bVar7;
    undefined4 local_38 [2];
    undefined4 *local_30;
    code *local_28;
    undefined8 local_20;

    local_30 = *(undefined4 **)(longlong *)(param_1 + 0x1608);
    while( true ) {
        if (local_30 == (undefined4 *)0x0) {
            if (param_5 != 0) {
                lVar3 = FUN_14018b280(0x90,0);
                lVar4 = 0;
                if (lVar3 != 0) {
                    lVar4 = FUN_1407a01c0(lVar3,param_2,param_3,param_4,param_5,(longlong *)(param_1 + 0x1608)
                    );
                }
                lVar3 = DAT_140c65898;
                bVar7 = true;
                if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                     (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) ||
                    ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
                      (*(int *)(param_1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))))) {
                    *(undefined4 *)(lVar4 + 0x60) = 1;
                    *(longlong *)(lVar4 + 0x68) = param_1;
                    *(undefined **)(lVar4 + 0x70) = &DAT_14046b720;
                    *(longlong *)(lVar4 + 0x78) = lVar4;
                }
                if ((lVar4 != 0) && (uVar6 = (ulonglong)*(uint *)(lVar4 + 8), *(uint *)(lVar4 + 8) != 0)) {
                    if (*(longlong *)(lVar3 + 0x78) != param_1) {
                        bVar7 = *(longlong *)(lVar3 + 0x6490) == param_1;
                    }
                    lVar5 = 0;
                    if (bVar7) {
                        lVar5 = lVar3;
                    }
                    if (((lVar5 != 0) && (lVar3 = FUN_1405a5b90(lVar5,uVar6), lVar3 != 0)) ||
                        (lVar3 = FUN_1407a0fd0(DAT_140c65b70,uVar6 & 0xffffffff), lVar3 != 0)) {
                        uVar2 = FUN_14046a810(param_1,lVar3,lVar4);
                        uVar2 = FUN_14046a890(param_1,lVar3,uVar2);
                        FUN_1407a0320(lVar4,uVar2);
                    }
                }
            }
            return;
        }
        if ((((param_2 == local_30[1]) && ((param_4 == local_30[3] || (param_2 == 0)))) &&
             (*(longlong *)(local_30 + 8) != 0)) && (iVar1 = FUN_140195f70(local_30 + 4), iVar1 != 0))
            break;
        local_30 = *(undefined4 **)(local_30 + 0x22);
    }
    if (param_5 != 0) {
        if ((local_30[1] == 0) && (iVar1 = FUN_140195f70(local_30 + 4), param_5 < iVar1)) {
            return;
        }
        if (*(longlong *)(local_30 + 8) != 0) {
            FUN_140195d70(local_30 + 4);
        }
        *local_30 = DAT_140c636a8;
        local_30[0x16] = param_5;
        local_28 = FUN_1407a0390;
        local_38[0] = 0;
        local_20 = 0;
        FUN_140195960(local_30 + 4,param_5,local_38,4);
        return;
    }
    FUN_1407a0390(local_30);
    return;
}



longlong FUN_14046a5f0(longlong param_1,int param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((*(longlong *)(DAT_140c65898 + 0x78) == param_1) &&
        (plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar1 != (longlong *)0x0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) {
            uVar3 = 0;
        }
        else {
            uVar3 = FUN_1403d90d0();
        }
        param_2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1,uVar3,0);
    }
    lVar2 = *(longlong *)(param_1 + 0x1608);
    while( true ) {
        if (lVar2 == 0) {
            return 0;
        }
        if ((*(int *)(lVar2 + 4) == 1) && (*(int *)(lVar2 + 8) == param_2)) break;
        lVar2 = *(longlong *)(lVar2 + 0x88);
    }
    return lVar2;
}



undefined8 FUN_14046a690(longlong param_1,int param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((*(longlong *)(DAT_140c65898 + 0x78) == param_1) &&
        (plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar1 != (longlong *)0x0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) {
            uVar3 = 0;
        }
        else {
            uVar3 = FUN_1403d90d0();
        }
        param_2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1,uVar3,0);
    }
    lVar2 = *(longlong *)(param_1 + 0x1608);
    while( true ) {
        if (lVar2 == 0) {
            return 0;
        }
        if ((((param_3 == 0) || (*(int *)(param_3 + 8) != *(int *)(lVar2 + 4))) ||
             (*(int *)(param_3 + 4) != *(int *)(lVar2 + 0xc))) &&
            ((*(int *)(lVar2 + 8) == param_2 || (*(int *)(lVar2 + 4) == 0)))) break;
        lVar2 = *(longlong *)(lVar2 + 0x88);
    }
    return 1;
}



ulonglong FUN_14046a760(longlong param_1,int param_2,uint param_3)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    int **ppiVar4;
    ulonglong uVar5;
    longlong lVar6;

    lVar6 = *(longlong *)(param_1 + 0x1618);
    uVar5 = (ulonglong)param_3;
    if (lVar6 == 0) {
        return (ulonglong)param_3;
    }
    ppiVar4 = *(int ***)(param_1 + 0x1610);
    do {
        piVar2 = *ppiVar4;
        if ((*piVar2 == 3) && (param_2 == piVar2[1])) {
            iVar1 = piVar2[2];
            if (iVar1 == 0) {
                uVar3 = (uint)(longlong)((float)(ulonglong)param_3 * (float)piVar2[3]);
                if (param_3 < uVar3) {
                    uVar3 = param_3;
                }
                uVar5 = (ulonglong)uVar3;
            }
            else if (iVar1 == 1) {
                uVar5 = (ulonglong)((float)(uVar5 & 0xffffffff) * (float)piVar2[3]);
            }
            else if (iVar1 == 2) {
                uVar5 = (ulonglong)(uint)((int)uVar5 + (int)(longlong)(float)piVar2[3]);
            }
            else if (iVar1 == 3) {
                uVar5 = (ulonglong)(float)piVar2[3];
            }
        }
        ppiVar4 = ppiVar4 + 1;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    return uVar5 & 0xffffffff;
}



ulonglong FUN_14046a810(longlong param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 != 0) && (*(uint **)(param_2 + 0x38) != (uint *)0x0)) {
        if (param_3 != 0) {
            uVar2 = FUN_140195f70(param_3 + 0x10);
            return uVar2;
        }
        uVar2 = (ulonglong)**(uint **)(param_2 + 0x38);
        iVar1 = FUN_1404823c0(param_2);
        if (iVar1 != 0) {
            uVar2 = (ulonglong)((float)uVar2 * *(float *)(param_1 + 0xa04));
        }
        return uVar2 & 0xffffffff;
    }
    return 0;
}



ulonglong FUN_14046a890(longlong param_1,longlong param_2,uint param_3)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    uVar9 = (ulonglong)param_3;
    if (*(longlong *)(param_1 + 0x1618) == 0) {
        return uVar9;
    }
    uVar8 = 0;
    uVar7 = uVar9;
    if (*(longlong *)(param_1 + 0x1618) != 0) {
        do {
            piVar1 = *(int **)(*(longlong *)(param_1 + 0x1610) + uVar8 * 8);
            iVar3 = *piVar1;
            if (iVar3 == 0) {
                if (*(int *)(*(longlong *)(param_2 + 0x70) + 4) == piVar1[1]) goto LAB_14046a965;
            }
            else if (iVar3 == 1) {
                if (**(int **)(param_2 + 0x70) == piVar1[1]) goto LAB_14046a965;
            }
            else if (iVar3 == 2) {
                iVar3 = (**(code **)(*DAT_140c65b70 + 0x38))
                        (DAT_140c65b70,**(undefined4 **)(param_2 + 0x70),
                         *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x1610) + uVar8 * 8) + 4));
                if (iVar3 != 0) goto LAB_14046a965;
            }
            else if (iVar3 == 3) {
                piVar5 = *(int **)(param_2 + 0x38);
                uVar6 = 0;
                do {
                    piVar5 = piVar5 + 1;
                    if (*piVar5 == piVar1[1]) goto LAB_14046a965;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 3);
            }
            else {
                LAB_14046a965:
                lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1610) + uVar8 * 8);
                iVar3 = *(int *)(lVar2 + 8);
                if (iVar3 == 0) {
                    uVar4 = (uint)(longlong)((float)uVar9 * *(float *)(lVar2 + 0xc));
                    if (param_3 < uVar4) {
                        uVar4 = param_3;
                    }
                    LAB_14046a9d0:
                    uVar7 = (ulonglong)uVar4;
                }
                else if (iVar3 == 1) {
                    uVar7 = (ulonglong)((float)(uVar7 & 0xffffffff) * *(float *)(lVar2 + 0xc));
                }
                else if (iVar3 == 2) {
                    uVar4 = (int)*(float *)(lVar2 + 0xc) + (int)uVar7;
                    if (-1 < (int)uVar4) {
                        if (0x7fffffff < (int)uVar4) {
                            uVar4 = 0x7fffffff;
                        }
                        goto LAB_14046a9d0;
                    }
                    uVar7 = 0;
                }
                else if (iVar3 == 3) {
                    uVar7 = (ulonglong)*(float *)(lVar2 + 0xc);
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0x1618));
    }
    return uVar7 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14046aa00(longlong param_1,int param_2,int param_3)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    DWORD DVar3;
    longlong lVar4;
    HANDLE hObject;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res20;

    lVar7 = *(longlong *)(param_1 + 0x1608);
    if (lVar7 == 0) {
        return;
    }
    while ((param_2 != *(int *)(lVar7 + 4) || ((param_3 != *(int *)(lVar7 + 0xc) && (param_2 != 0)))))
    {
        lVar7 = *(longlong *)(lVar7 + 0x88);
        if (lVar7 == 0) {
            return;
        }
    }
    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0x21);
        }
        else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(&local_res8);
    local_res8 = local_res8 - _DAT_140c87988;
    if ((DAT_140dc4f10 & 1) == 0) {
        DAT_140dc4f10 = DAT_140dc4f10 | 1;
        FUN_1407dd89c();
    }
    lVar6 = DAT_140c63760;
    if (DAT_140dc4f18 == 0) {
        DVar3 = GetCurrentThreadId();
        if (*(DWORD *)(lVar6 + 0x10) == DVar3) {
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + 1;
        }
        else {
            uVar5 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar6 + 0x18);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD *)(lVar6 + 0x10) = DVar3;
                    goto LAB_14046ab06;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x400);
            FUN_14019fb60(lVar6 + 0x10);
        }
        LAB_14046ab06:
        lVar4 = DAT_140dc4f18;
        if ((DAT_140dc4f18 == 0) && (lVar4 = FUN_14018b280(0x80,0), lVar4 != 0)) {
            lVar4 = FUN_14019e5d0(lVar4);
        }
        DAT_140dc4f18 = lVar4;
        if (*(ulonglong *)(lVar6 + 0x18) < 2) {
            *(undefined4 *)(lVar6 + 0x10) = 0;
            *(undefined8 *)(lVar6 + 0x18) = 0;
            if (*(longlong *)(lVar6 + 0x20) != 0) {
                if (*(longlong *)(lVar6 + 0x28) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar6 + 0x28);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar5 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar6 + 0x28));
            }
        }
        else {
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + -1;
        }
        lVar6 = DAT_140dc4f18;
        if (DAT_140dc4f18 == 0) goto LAB_14046aba5;
    }
    lVar6 = DAT_140dc4f18;
    FUN_14019e8f0(DAT_140dc4f18);
    LAB_14046aba5:
    if (*(longlong *)(lVar7 + 0x20) != 0) {
        FUN_140195d70(lVar7 + 0x10);
    }
    if (*(undefined8 **)(lVar7 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar7 + 0x80) = *(undefined8 *)(lVar7 + 0x88);
    }
    if (*(longlong *)(lVar7 + 0x88) != 0) {
        *(undefined8 *)(*(longlong *)(lVar7 + 0x88) + 0x80) = *(undefined8 *)(lVar7 + 0x80);
    }
    *(undefined8 *)(lVar7 + 0x80) = 0;
    *(undefined8 *)(lVar7 + 0x88) = 0;
    if ((*(longlong *)(lVar7 + 0x68) != 0) || (*(longlong *)(lVar7 + 0x70) != 0)) {
        if (*(int *)(lVar7 + 0x60) == 0) {
            (**(code **)(lVar7 + 0x70))(*(undefined8 *)(lVar7 + 0x68));
        }
        else if (*(int *)(lVar7 + 0x60) == 1) {
            (**(code **)(lVar7 + 0x70))(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x78));
        }
    }
    FUN_1407a0290(lVar7);
    FUN_14018b900(lVar7,0);
    if (lVar6 != 0) {
        FUN_14019ea00(lVar6);
    }
    QueryPerformanceCounter(&local_res20);
    if (_DAT_140c796cc == 0) {
        if (30000 < (uint)(DAT_140c636a8 - _DAT_140c785b0)) {
            _DAT_140c796cc = 1;
            return;
        }
        FUN_1401c5100(L"H Spell_Misc",0x21,(local_res20 - local_res8) - _DAT_140c87988,1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14046acc0(longlong param_1,undefined8 param_2,int param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    longlong lVar6;
    ulonglong uVar7;
    HANDLE hObject;
    longlong lVar8;
    LARGE_INTEGER local_res8;
    LARGE_INTEGER local_res20;

    if (*(longlong *)(param_1 + 0x1608) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x1608);
        do {
            lVar2 = *(longlong *)(lVar8 + 0x88);
            if (*(int *)(lVar8 + 8) != param_3) {
                if (_DAT_140c796cc == 0) {
                    if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
                        FUN_1401c4fb0(0x21);
                    }
                    else {
                        _DAT_140c796cc = 1;
                    }
                }
                QueryPerformanceCounter(&local_res8);
                if ((DAT_140dc4f10 & 1) == 0) {
                    DAT_140dc4f10 = DAT_140dc4f10 | 1;
                    FUN_1407dd89c();
                }
                lVar4 = DAT_140c63760;
                if (DAT_140dc4f18 == 0) {
                    DVar5 = GetCurrentThreadId();
                    uVar7 = 0;
                    if (*(DWORD *)(lVar4 + 0x10) == DVar5) {
                        *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + 1;
                    }
                    else {
                        do {
                            LOCK();
                            puVar1 = (ulonglong *)(lVar4 + 0x18);
                            uVar3 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                            if (uVar3 == 0) {
                                *(DWORD *)(lVar4 + 0x10) = DVar5;
                                goto LAB_14046adcc;
                            }
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < 0x400);
                        FUN_14019fb60(lVar4 + 0x10);
                    }
                    LAB_14046adcc:
                    uVar7 = DAT_140dc4f18;
                    if ((DAT_140dc4f18 == 0) && (lVar6 = FUN_14018b280(0x80), uVar7 = 0, lVar6 != 0)) {
                        uVar7 = FUN_14019e5d0(lVar6);
                    }
                    DAT_140dc4f18 = uVar7;
                    if (*(ulonglong *)(lVar4 + 0x18) < 2) {
                        *(undefined4 *)(lVar4 + 0x10) = 0;
                        *(undefined8 *)(lVar4 + 0x18) = 0;
                        if (*(longlong *)(lVar4 + 0x20) != 0) {
                            if (*(longlong *)(lVar4 + 0x28) == 0) {
                                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                                LOCK();
                                puVar1 = (ulonglong *)(lVar4 + 0x28);
                                uVar7 = *puVar1;
                                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                                if (uVar7 != 0) {
                                    CloseHandle(hObject);
                                }
                            }
                            SetEvent(*(HANDLE *)(lVar4 + 0x28));
                        }
                    }
                    else {
                        *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar4 + 0x18) + -1;
                    }
                    uVar7 = DAT_140dc4f18;
                    if (DAT_140dc4f18 != 0) goto LAB_14046ae65;
                }
                else {
                    LAB_14046ae65:
                    uVar7 = DAT_140dc4f18;
                    FUN_14019e8f0(DAT_140dc4f18);
                }
                if (*(longlong *)(lVar8 + 0x20) != 0) {
                    FUN_140195d70(lVar8 + 0x10);
                }
                if (*(undefined8 **)(lVar8 + 0x80) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar8 + 0x80) = *(undefined8 *)(lVar8 + 0x88);
                }
                if (*(longlong *)(lVar8 + 0x88) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar8 + 0x88) + 0x80) = *(undefined8 *)(lVar8 + 0x80);
                }
                *(undefined8 *)(lVar8 + 0x80) = 0;
                *(undefined8 *)(lVar8 + 0x88) = 0;
                if ((*(longlong *)(lVar8 + 0x68) != 0) || (*(longlong *)(lVar8 + 0x70) != 0)) {
                    if (*(int *)(lVar8 + 0x60) == 0) {
                        (**(code **)(lVar8 + 0x70))();
                    }
                    else if (*(int *)(lVar8 + 0x60) == 1) {
                        (**(code **)(lVar8 + 0x70))();
                    }
                }
                FUN_1407a0290(lVar8);
                FUN_14018b900(lVar8);
                if (uVar7 != 0) {
                    FUN_14019ea00(uVar7);
                }
                QueryPerformanceCounter(&local_res20);
                if (_DAT_140c796cc == 0) {
                    if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
                        FUN_1401c5100(L"H Spell_Misc");
                    }
                    else {
                        _DAT_140c796cc = 1;
                    }
                }
            }
            lVar8 = lVar2;
        } while (lVar2 != 0);
    }
    return;
}



void FUN_14046afc0(longlong param_1,longlong param_2,longlong param_3)

{
    int *piVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 local_res10;
    undefined **local_48;
    undefined4 *local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined4 *local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        return;
    }
    if (param_3 != 0) {
        piVar1 = *(int **)(param_2 + 0x70);
        iVar3 = piVar1[6];
        if (((iVar3 - 2U & 0xfffffffa) == 0) && (iVar3 != 3)) {
            iVar5 = *(int *)(param_3 + 0x6c);
            if (iVar5 == 0) {
                iVar5 = *piVar1;
            }
            if (iVar3 == 2) {
                if (piVar1[0x61] == 0) {
                    return;
                }
            }
            else if (iVar3 == 6) {
                iVar5 = *piVar1;
            }
            else if ((iVar3 == 7) && (piVar1[0x61] == 0)) {
                if (*(longlong *)(DAT_140c65898 + 0x78) != param_1) {
                    return;
                }
                iVar3 = FUN_1403bf9d0(param_1,*piVar1);
                if (iVar3 == 0) {
                    return;
                }
            }
            param_2 = FUN_1403acd90(DAT_140c65b70,iVar5,param_1);
            if (param_2 == 0) {
                return;
            }
            goto LAB_14046b0a8;
        }
    }
    if ((*(longlong *)(DAT_140c65898 + 0x78) == param_1) &&
        (plVar2 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar2 != (longlong *)0x0)) {
        param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1,param_3);
    }
    LAB_14046b0a8:
    if ((*(uint *)(*(longlong *)(param_2 + 0x70) + 0x24) < 2) &&
        (iVar3 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x28), iVar3 != 0)) {
        local_40 = (undefined4 *)FUN_14023dc80(iVar3);
        if (local_40 == (undefined4 *)0x0) {
            local_48 = &PTR_LAB_140b5e648;
            local_38 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_48);
            local_28 = local_48;
            local_20 = local_40;
            local_res10 = 0x141e02b50;
            local_18 = local_38;
            iVar3 = FUN_1401971e0(&DAT_140c8ace0,5,&local_res10,**(undefined4 **)(param_2 + 0x70),iVar3,
                                  &local_28);
            local_48 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_38);
            if (iVar3 != 0) {
                DebugBreak();
            }
        }
        else {
            uVar4 = FUN_14046a760(param_1,iVar3,local_40[1]);
            FUN_14046a3d0(param_1,0,0,*local_40,uVar4);
        }
    }
    return;
}



void FUN_14046b1e0(longlong param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint *puVar10;
    float fVar11;
    undefined8 local_res20;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    if ((param_2 != 0) &&
        (((param_3 == 0 || (*(int *)(param_3 + 400) != 0)) &&
          (puVar2 = *(uint **)(param_2 + 0x38), puVar2 != (uint *)0x0)))) {
        iVar5 = **(int **)(param_2 + 0x70);
        for (lVar3 = *(longlong *)(param_1 + 0x1608); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x88)) {
            if (*(int *)(lVar3 + 8) == iVar5) {
                return;
            }
        }
        if ((param_3 == 0) || (uVar8 = *(uint *)(param_3 + 0x1b4), uVar8 == 0xffffffff)) {
            if (puVar2 == (uint *)0x0) {
                uVar8 = 0;
            }
            else {
                uVar8 = *puVar2;
                iVar4 = FUN_1404823c0(param_2);
                if (iVar4 != 0) {
                    uVar8 = (uint)(longlong)((float)(ulonglong)uVar8 * *(float *)(param_1 + 0xa04));
                }
            }
        }
        FUN_14046a3d0(param_1,1,iVar5,iVar5,uVar8);
        uVar9 = 0;
        puVar10 = puVar2;
        do {
            puVar10 = puVar10 + 1;
            if (*puVar10 != 0) {
                puVar6 = (undefined4 *)FUN_14023dc80();
                if (puVar6 == (undefined4 *)0x0) {
                    local_70 = 0;
                    local_78 = &PTR_LAB_140b5e648;
                    local_68 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_78);
                    local_res20 = 0x141e02ab0;
                    local_58 = local_78;
                    local_50 = local_70;
                    local_48 = local_68;
                    iVar5 = FUN_1401971e0(&DAT_140c8ace4,5,&local_res20,iVar5,puVar2[uVar9 + 1],&local_58);
                    local_78 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_68);
                    if (iVar5 == 0) {
                        return;
                    }
                    DebugBreak();
                    return;
                }
                uVar1 = puVar6[1];
                iVar4 = FUN_1404823c0(param_2);
                uVar7 = uVar1;
                if ((iVar4 != 0) && (uVar7 = uVar8, uVar1 != 0)) {
                    fVar11 = (float)FUN_140466a70(param_1,0x88);
                    uVar7 = (uint)(longlong)(fVar11 * (float)(ulonglong)uVar1);
                }
                FUN_14046a3d0(param_1,2,iVar5,*puVar6,uVar7);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 3);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14046b440(longlong param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    longlong lVar7;
    LARGE_INTEGER local_res8;
    LARGE_INTEGER local_res10;

    lVar7 = *(longlong *)(param_1 + 0x1608);
    if (lVar7 != 0) {
        do {
            if (_DAT_140c796cc == 0) {
                if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
                    FUN_1401c4fb0(0x21);
                }
                else {
                    _DAT_140c796cc = 1;
                }
            }
            QueryPerformanceCounter(&local_res8);
            if ((DAT_140dc4f10 & 1) == 0) {
                DAT_140dc4f10 = DAT_140dc4f10 | 1;
                FUN_1407dd89c();
            }
            lVar3 = DAT_140c63760;
            if (DAT_140dc4f18 == 0) {
                DVar4 = GetCurrentThreadId();
                uVar6 = 0;
                if (*(DWORD *)(lVar3 + 0x10) == DVar4) {
                    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
                }
                else {
                    do {
                        LOCK();
                        puVar1 = (ulonglong *)(lVar3 + 0x18);
                        uVar2 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                        if (uVar2 == 0) {
                            *(DWORD *)(lVar3 + 0x10) = DVar4;
                            goto LAB_14046b536;
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < 0x400);
                    FUN_14019fb60(lVar3 + 0x10);
                }
                LAB_14046b536:
                uVar6 = DAT_140dc4f18;
                if ((DAT_140dc4f18 == 0) && (lVar5 = FUN_14018b280(0x80), uVar6 = 0, lVar5 != 0)) {
                    uVar6 = FUN_14019e5d0(lVar5);
                }
                DAT_140dc4f18 = uVar6;
                if (*(ulonglong *)(lVar3 + 0x18) < 2) {
                    *(undefined4 *)(lVar3 + 0x10) = 0;
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                    if (*(longlong *)(lVar3 + 0x20) != 0) {
                        if (*(longlong *)(lVar3 + 0x28) == 0) {
                            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                            LOCK();
                            puVar1 = (ulonglong *)(lVar3 + 0x28);
                            uVar6 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                            if (uVar6 != 0) {
                                CloseHandle(hObject);
                            }
                        }
                        SetEvent(*(HANDLE *)(lVar3 + 0x28));
                    }
                }
                else {
                    *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + -1;
                }
                uVar6 = DAT_140dc4f18;
                if (DAT_140dc4f18 != 0) goto LAB_14046b5cf;
            }
            else {
                LAB_14046b5cf:
                uVar6 = DAT_140dc4f18;
                FUN_14019e8f0(DAT_140dc4f18);
            }
            if (*(longlong *)(lVar7 + 0x20) != 0) {
                FUN_140195d70(lVar7 + 0x10);
            }
            if (*(undefined8 **)(lVar7 + 0x80) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar7 + 0x80) = *(undefined8 *)(lVar7 + 0x88);
            }
            if (*(longlong *)(lVar7 + 0x88) != 0) {
                *(undefined8 *)(*(longlong *)(lVar7 + 0x88) + 0x80) = *(undefined8 *)(lVar7 + 0x80);
            }
            *(undefined8 *)(lVar7 + 0x80) = 0;
            *(undefined8 *)(lVar7 + 0x88) = 0;
            if ((*(longlong *)(lVar7 + 0x68) != 0) || (*(longlong *)(lVar7 + 0x70) != 0)) {
                if (*(int *)(lVar7 + 0x60) == 0) {
                    (**(code **)(lVar7 + 0x70))();
                }
                else if (*(int *)(lVar7 + 0x60) == 1) {
                    (**(code **)(lVar7 + 0x70))();
                }
            }
            FUN_1407a0290(lVar7);
            FUN_14018b900(lVar7);
            if (uVar6 != 0) {
                FUN_14019ea00(uVar6);
            }
            QueryPerformanceCounter(&local_res10);
            if (_DAT_140c796cc == 0) {
                if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
                    FUN_1401c5100(L"H Spell_Misc");
                }
                else {
                    _DAT_140c796cc = 1;
                }
            }
            lVar7 = *(longlong *)(param_1 + 0x1608);
        } while (lVar7 != 0);
    }
    return;
}



void FUN_14046b7f0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    if ((param_2 != 0) && (param_3 != 0)) {
        if ((*(int *)(param_3 + 0xbc) != 0) ||
            ((*(longlong *)(param_3 + 0xb0) != 0 &&
              ((*(byte *)(*(longlong *)(param_3 + 0xb0) + 0x3c) & 2) != 0)))) {
            lVar3 = *(longlong *)(param_1 + 0x1618);
            lVar1 = lVar3 + 1;
            lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x1610),lVar1,8);
            *(longlong *)(lVar4 + lVar3 * 8) = param_2;
            if (*(longlong *)(param_1 + 0x1610) != lVar4) {
                FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x1610),*(longlong *)(param_1 + 0x1618) << 3);
                lVar3 = *(longlong *)(param_1 + 0x1610);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                *(longlong *)(param_1 + 0x1610) = lVar4;
            }
            *(longlong *)(param_1 + 0x1618) = lVar1;
        }
        FUN_14046b920(param_1,param_2);
        iVar2 = *(int *)(param_1 + 8);
        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
             (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == iVar2)) ||
            ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
              (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == iVar2)))) {
            FUN_1405a7380(iVar2,param_2,param_3);
        }
    }
    return;
}



void FUN_14046b920(longlong param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    int *piVar4;
    ulonglong uVar5;
    bool bVar6;

    if (param_2 != (int *)0x0) {
        for (lVar1 = *(longlong *)(param_1 + 0x1608); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x88)) {
            if ((*(int *)(lVar1 + 4) != 3) && (*(int *)(lVar1 + 8) != 0)) {
                if (*(longlong *)(DAT_140c65898 + 0x78) == param_1) {
                    bVar6 = true;
                }
                else {
                    bVar6 = *(longlong *)(DAT_140c65898 + 0x6490) == param_1;
                }
                lVar3 = 0;
                if (bVar6) {
                    lVar3 = DAT_140c65898;
                }
                if ((((lVar3 != 0) && (lVar3 = FUN_1405a5b90(), lVar3 != 0)) ||
                     (lVar3 = FUN_1407a0fd0(), lVar3 != 0)) && (*(longlong *)(lVar3 + 0x38) != 0)) {
                    FUN_140195f70();
                    iVar2 = *param_2;
                    if (iVar2 == 0) {
                        if (*(int *)(*(longlong *)(lVar3 + 0x70) + 4) == param_2[1]) goto LAB_14046ba60;
                    }
                    else if (iVar2 == 1) {
                        if (**(int **)(lVar3 + 0x70) == param_2[1]) goto LAB_14046ba60;
                    }
                    else if (iVar2 == 2) {
                        iVar2 = (**(code **)(*DAT_140c65b70 + 0x38))
                                (DAT_140c65b70,**(undefined4 **)(lVar3 + 0x70),param_2[1]);
                        if (iVar2 != 0) goto LAB_14046ba60;
                    }
                    else if (iVar2 == 3) {
                        piVar4 = *(int **)(lVar3 + 0x38);
                        uVar5 = 0;
                        do {
                            piVar4 = piVar4 + 1;
                            if (*piVar4 == param_2[1]) goto LAB_14046ba60;
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < 3);
                    }
                    else {
                        LAB_14046ba60:
                        FUN_1407a0320();
                    }
                }
            }
        }
    }
    return;
}



void FUN_14046bb00(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    uint uVar5;
    undefined4 local_res18 [4];
    undefined4 local_58;
    undefined8 local_54;
    undefined4 *local_48;
    undefined4 local_40 [2];
    longlong local_38;
    undefined *local_30;
    undefined8 local_28;
    ulonglong uVar6;

    if ((((((param_3 != 0) && (*(int *)(param_1 + 0xd50) != 0)) &&
           (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
          ((*(longlong *)(DAT_140c65898 + 0x78) == 0 ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) != param_2)))) &&
         ((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) != param_2 &&
           ((lVar3 = FUN_1403d90d0(DAT_140c65898,param_2), lVar3 != 0 &&
                                                           (iVar2 = *(int *)(lVar3 + 0x80), iVar2 != 0x14)))))) &&
        ((iVar2 != 0x17 && (1 < iVar2 - 0x18U)))) {
        uVar6 = 0;
        *(int *)(param_1 + 0x1620) = param_2;
        *(undefined4 *)(param_1 + 0x1624) = param_4;
        local_54 = 8;
        puVar4 = (undefined4 *)FUN_14018c320(0,0x240,8);
        local_res18[0] = DAT_140c636a8;
        *puVar4 = 0x12;
        puVar4[2] = param_2;
        puVar4[3] = 1;
        local_58 = 1;
        local_48 = puVar4;
        if ((*(int *)(param_1 + 0xd50) != 0) || (*(int *)(param_1 + 0x80) == 0x12)) {
            do {
                iVar2 = FUN_1405b4ab0(param_1,local_res18,puVar4 + uVar6 * 0x12,0,0);
                uVar1 = local_res18[0];
                if (iVar2 < 0) goto LAB_14046bc86;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 == 0);
            FUN_1405b4f50(param_1,local_res18[0]);
            FUN_1405b5070(param_1,uVar1);
            FUN_1405b82a0(param_1,uVar1);
            for (lVar3 = *(longlong *)(param_1 + 0xf08); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0xf18))
            {
                FUN_1405b4ef0(lVar3,uVar1);
            }
        }
        LAB_14046bc86:
        FUN_14057a190(DAT_140c65898,&local_58);
        if (param_3 == -1) {
            FUN_140195d70(param_1 + 0x1628);
        }
        else {
            local_40[0] = 0;
            local_30 = &LAB_140469630;
            local_28 = 0;
            local_38 = param_1;
            FUN_140195960(param_1 + 0x1628,param_3,local_40,4);
        }
        FUN_14079a4f0(&local_58);
        FUN_14018b900(local_48,0);
    }
    return;
}



void FUN_14046bd10(longlong param_1,int param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    uint uVar5;
    undefined4 local_res8 [2];
    undefined4 local_28;
    undefined8 local_24;
    undefined4 *local_18;
    ulonglong uVar6;

    if ((((*(int *)(param_1 + 0xd50) != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
         ((*(longlong *)(DAT_140c65898 + 0x78) == 0 ||
           (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) != param_2)))) &&
        ((((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) != param_2 &&
            (lVar3 = FUN_1403d90d0(DAT_140c65898,param_2), lVar3 != 0)) &&
           (iVar2 = *(int *)(lVar3 + 0x80), iVar2 != 0x14)) && ((iVar2 != 0x17 && (1 < iVar2 - 0x18U))))
        )) {
        uVar6 = 0;
        *(int *)(param_1 + 0x1620) = param_2;
        local_24 = 8;
        puVar4 = (undefined4 *)FUN_14018c320(0,0x240,8);
        local_res8[0] = DAT_140c636a8;
        *puVar4 = 0x12;
        puVar4[2] = param_2;
        puVar4[3] = 1;
        local_28 = 1;
        local_18 = puVar4;
        if ((*(int *)(param_1 + 0xd50) != 0) || (*(int *)(param_1 + 0x80) == 0x12)) {
            do {
                iVar2 = FUN_1405b4ab0(param_1,local_res8,puVar4 + uVar6 * 0x12,0,0);
                uVar1 = local_res8[0];
                if (iVar2 < 0) goto LAB_14046be76;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 == 0);
            FUN_1405b4f50(param_1,local_res8[0]);
            FUN_1405b5070(param_1,uVar1);
            FUN_1405b82a0(param_1,uVar1);
            for (lVar3 = *(longlong *)(param_1 + 0xf08); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0xf18))
            {
                FUN_1405b4ef0(lVar3,uVar1);
            }
        }
        LAB_14046be76:
        FUN_14057a190(DAT_140c65898,&local_28);
        FUN_14079a4f0(&local_28);
        FUN_14018b900(local_18,0);
    }
    return;
}



undefined8 * FUN_14046bec0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong local_res8;
    uint local_res10 [2];
    longlong local_res18 [2];

    local_res10[0] = param_2;
    while( true ) {
        lVar4 = *(longlong *)(param_1 + 0x16c0);
        lVar2 = lVar4;
        lVar1 = *(longlong *)(lVar4 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < local_res10[0]) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar2 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((lVar2 == lVar4) || (local_res10[0] < *(uint *)(lVar2 + 0x20))) {
            local_res18[0] = lVar4;
            plVar3 = local_res18;
        }
        else {
            local_res8 = lVar2;
            plVar3 = &local_res8;
        }
        lVar4 = *plVar3;
        if ((lVar4 != *(longlong *)(param_1 + 0x16c0)) && (*(longlong *)(lVar4 + 0x28) != 0)) break;
        if ((local_res10[0] < 0x46) && (lVar4 = FUN_140217880(local_res10[0]), lVar4 != 0)) {
            puVar5 = (undefined8 *)FUN_14018b280(0x28);
            if (puVar5 == (undefined8 *)0x0) {
                puVar5 = (undefined8 *)0x0;
            }
            else {
                *puVar5 = 0;
                puVar5[1] = 0;
                *(undefined4 *)((longlong)puVar5 + 0x14) = 0x3f800000;
                *(undefined4 *)(puVar5 + 3) = 0x3f800000;
                *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x3f800000;
                *(undefined4 *)(puVar5 + 4) = 0x3f800000;
            }
            *(undefined4 *)((longlong)puVar5 + 0x14) = 0x3f800000;
            *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar4 + 8);
            *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)(lVar4 + 0x10);
            *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(lVar4 + 0xc);
            puVar6 = (undefined8 *)FUN_140055be0(param_1 + 0x16b8,local_res10);
            *puVar6 = puVar5;
            return puVar5;
        }
        local_res10[0] = 0;
    }
    return *(undefined8 **)(lVar4 + 0x28);
}



void FUN_14046bfe0(longlong param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong local_res20;

    if (param_3 < 0x46) {
        lVar2 = *(longlong *)(param_1 + 0x16c0);
        local_res20 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_3) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res20 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res20 == lVar2) || (param_3 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar2;
        }
        plVar5 = (longlong *)0x0;
        if ((local_res20 == *(longlong *)(param_1 + 0x16c0)) ||
            (plVar3 = *(longlong **)(local_res20 + 0x28),
                    *(longlong **)(local_res20 + 0x28) == (longlong *)0x0)) {
            lVar2 = FUN_140217880(param_3);
            if (lVar2 == 0) {
                return;
            }
            plVar3 = (longlong *)FUN_14018b280(0x28);
            if (plVar3 != (longlong *)0x0) {
                *plVar3 = 0;
                plVar3[1] = 0;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 0x3f800000;
                *(undefined4 *)(plVar3 + 3) = 0x3f800000;
                *(undefined4 *)((longlong)plVar3 + 0x1c) = 0x3f800000;
                *(undefined4 *)(plVar3 + 4) = 0x3f800000;
                plVar5 = plVar3;
            }
            *(undefined4 *)((longlong)plVar5 + 0x14) = 0x3f800000;
            *(undefined4 *)(plVar5 + 2) = *(undefined4 *)(lVar2 + 8);
            *(undefined4 *)((longlong)plVar5 + 0x1c) = *(undefined4 *)(lVar2 + 0x10);
            *(undefined4 *)(plVar5 + 4) = *(undefined4 *)(lVar2 + 0xc);
            pplVar4 = (longlong **)FUN_140055be0(param_1 + 0x16b8);
            *pplVar4 = plVar5;
            plVar3 = plVar5;
        }
        lVar2 = *plVar3;
        *(int *)(plVar3 + 1) = *(int *)(plVar3 + 1) + 1;
        *(float *)(plVar3 + 3) = *(float *)((longlong)plVar3 + 0x1c) * *(float *)(plVar3 + 3);
        *(float *)(plVar3 + 2) = *(float *)(plVar3 + 4) * *(float *)(plVar3 + 2);
        for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            *(int *)(lVar2 + 0x5c8) = *(int *)(lVar2 + 0x5c8) + 1;
            if (*(uint *)(plVar3 + 1) == 0) {
                *(undefined4 *)(lVar2 + 0x5d0) = 0;
            }
            else {
                *(float *)(lVar2 + 0x5d0) =
                        ((float)(ulonglong)*(uint *)(lVar2 + 0x5c8) * 6.283185) /
                        (float)(ulonglong)*(uint *)(plVar3 + 1);
            }
        }
        if (*(longlong *)(param_2 + 0x10) == 0) {
            *(longlong **)(param_2 + 0x10) = plVar3;
            plVar5 = (longlong *)(param_2 + 0x18);
            *plVar5 = *plVar3;
            *plVar3 = param_2;
            if (*plVar5 != 0) {
                *(longlong **)(*plVar5 + 0x10) = plVar5;
            }
        }
    }
    return;
}



void FUN_14046c2c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x18a8) = 1;
    lVar1 = *(longlong *)(lVar2 + 0x78);
    if ((lVar1 != 0) && (*(int *)(param_1 + 8) == *(int *)(lVar1 + 8))) {
        *(undefined4 *)(lVar2 + 0x6f98) = 1;
    }
    return;
}



void FUN_14046c300(longlong param_1,int param_2,int param_3)

{
    uint uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    longlong *plVar13;
    undefined4 *puVar14;
    char cVar15;
    longlong lVar16;
    bool bVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    float local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [16];

    if ((param_2 != 0) || (*(int *)(param_1 + 0x18a8) != 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x1908);
        puVar11 = (undefined4 *)(param_1 + 0x1910);
        iVar9 = 0;
        local_58 = *puVar2;
        uStack84 = puVar2[1];
        uStack80 = puVar2[2];
        uStack76 = puVar2[3];
        local_48 = puVar2[4];
        uStack68 = puVar2[5];
        uStack64 = puVar2[6];
        uStack60 = puVar2[7];
        local_38 = (float)puVar2[8];
        uStack52 = puVar2[9];
        uStack48 = puVar2[10];
        uStack44 = puVar2[0xb];
        local_28 = *(undefined (*) [16])(puVar2 + 0xc);
        *(undefined4 *)(param_1 + 0x18a8) = 0;
        if (((ulonglong)puVar11 & 0xf) == 0) {
            lVar10 = 0x39;
            puVar2 = &DAT_140c48150;
            do {
                puVar14 = puVar2;
                puVar12 = puVar11;
                uVar4 = puVar14[1];
                uVar5 = puVar14[2];
                uVar6 = puVar14[3];
                *puVar12 = *puVar14;
                puVar12[1] = uVar4;
                puVar12[2] = uVar5;
                puVar12[3] = uVar6;
                uVar4 = puVar14[5];
                uVar5 = puVar14[6];
                uVar6 = puVar14[7];
                puVar12[4] = puVar14[4];
                puVar12[5] = uVar4;
                puVar12[6] = uVar5;
                puVar12[7] = uVar6;
                uVar4 = puVar14[9];
                uVar5 = puVar14[10];
                uVar6 = puVar14[0xb];
                puVar12[8] = puVar14[8];
                puVar12[9] = uVar4;
                puVar12[10] = uVar5;
                puVar12[0xb] = uVar6;
                uVar4 = puVar14[0xd];
                uVar5 = puVar14[0xe];
                uVar6 = puVar14[0xf];
                puVar12[0xc] = puVar14[0xc];
                puVar12[0xd] = uVar4;
                puVar12[0xe] = uVar5;
                puVar12[0xf] = uVar6;
                uVar4 = puVar14[0x11];
                uVar5 = puVar14[0x12];
                uVar6 = puVar14[0x13];
                puVar12[0x10] = puVar14[0x10];
                puVar12[0x11] = uVar4;
                puVar12[0x12] = uVar5;
                puVar12[0x13] = uVar6;
                uVar4 = puVar14[0x15];
                uVar5 = puVar14[0x16];
                uVar6 = puVar14[0x17];
                puVar12[0x14] = puVar14[0x14];
                puVar12[0x15] = uVar4;
                puVar12[0x16] = uVar5;
                puVar12[0x17] = uVar6;
                uVar4 = puVar14[0x19];
                uVar5 = puVar14[0x1a];
                uVar6 = puVar14[0x1b];
                puVar12[0x18] = puVar14[0x18];
                puVar12[0x19] = uVar4;
                puVar12[0x1a] = uVar5;
                puVar12[0x1b] = uVar6;
                uVar4 = puVar14[0x1d];
                uVar5 = puVar14[0x1e];
                uVar6 = puVar14[0x1f];
                puVar12[0x1c] = puVar14[0x1c];
                puVar12[0x1d] = uVar4;
                puVar12[0x1e] = uVar5;
                puVar12[0x1f] = uVar6;
                lVar10 = lVar10 + -1;
                puVar11 = puVar12 + 0x20;
                puVar2 = puVar14 + 0x20;
            } while (lVar10 != 0);
            uVar4 = puVar14[0x21];
            uVar5 = puVar14[0x22];
            uVar6 = puVar14[0x23];
            puVar12[0x20] = puVar14[0x20];
            puVar12[0x21] = uVar4;
            puVar12[0x22] = uVar5;
            puVar12[0x23] = uVar6;
            uVar4 = puVar14[0x25];
            uVar5 = puVar14[0x26];
            uVar6 = puVar14[0x27];
            puVar12[0x24] = puVar14[0x24];
            puVar12[0x25] = uVar4;
            puVar12[0x26] = uVar5;
            puVar12[0x27] = uVar6;
            uVar4 = puVar14[0x29];
            uVar5 = puVar14[0x2a];
            uVar6 = puVar14[0x2b];
            puVar12[0x28] = puVar14[0x28];
            puVar12[0x29] = uVar4;
            puVar12[0x2a] = uVar5;
            puVar12[0x2b] = uVar6;
        }
        else {
            FUN_1407db590(puVar11,&DAT_140c48150,0x1cb0);
        }
        iVar7 = FUN_14046c700();
        if (iVar7 != *(int *)(param_1 + 0x35d0)) {
            *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x35d0);
            *(int *)(param_1 + 0x35d0) = iVar7;
        }
        FUN_140479560(param_1);
        FUN_14047a060(param_1);
        FUN_140478fd0(param_1,1);
        if ((param_3 == 0) &&
            (iVar7 = FUN_1407e6af0(&local_58,*(undefined8 *)(param_1 + 0x1908),0x48), iVar7 != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitActivationTypeChanged",
                          &DAT_1409edc54,*(undefined4 *)(param_1 + 8));
            if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
                iVar9 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
            }
            if (iVar9 == *(int *)(param_1 + 8)) {
                FUN_14042e1b0(*(undefined8 *)(DAT_140c65898 + 0x7340));
            }
        }
    }
    FUN_140478fd0(param_1,0);
    lVar10 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar10 == 0) {
        return;
    }
    if (DAT_140c65970 == 0) {
        return;
    }
    iVar9 = *(int *)(DAT_140c65970 + 8);
    if (3 < iVar9) {
        return;
    }
    lVar3 = *(longlong *)(param_1 + 0x1908);
    fVar20 = 3.402823e+38;
    iVar7 = 2;
    lVar16 = DAT_140c65898;
    cVar15 = '\0';
    if (((*(char *)(lVar3 + 4) != '\0') && (iVar8 = FUN_14046c6a0(), cVar15 = '\0', iVar8 == 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x2c), (uVar1 >> 10 & 1) == 0)) {
        cVar15 = *(char *)(lVar3 + 7);
        if ((*(char *)(lVar3 + 0xc) == '\0') && (-1 < (char)uVar1)) {
            if ((&DAT_00002334)[param_1] == '\0') {
                if (*(char *)(param_1 + 0x23c4) == '\0') {
                    if (*(char *)(param_1 + 0x34ec) == '\0') goto LAB_14047938a;
                    iVar7 = 0xc;
                }
                else {
                    iVar7 = 0xb;
                }
            }
            else {
                iVar7 = 9;
            }
        }
        else if ((iVar9 != 1) || (iVar7 = 7, (uVar1 >> 0x10 & 1) == 0)) {
            iVar7 = iVar9 + 3;
        }
        cVar15 = '\x01';
    }
    LAB_14047938a:
    if (((*(char *)(lVar3 + 4) != '\0') && (iVar8 = FUN_14046c6a0(param_1), iVar8 == 0)) &&
        ((iVar9 == 2 && ((*(uint *)(param_1 + 0x2c) & 0x400) == 0)))) {
        if ((*(char *)(param_1 + 0x321c) == '\0') || (*(char *)(param_1 + 0x321f) == '\0')) {
            if ((*(char *)(param_1 + 0x3264) == '\0') || (*(char *)(param_1 + 0x3267) == '\0'))
                goto LAB_1404793de;
            iVar7 = 8;
        }
        else {
            iVar7 = 5;
        }
        cVar15 = '\x01';
    }
    LAB_1404793de:
    if ((((param_1 != lVar10) && (*(char *)(lVar3 + 4) != '\0')) &&
         (*(char *)(param_1 + 0x2ebc) != '\0')) &&
        (((*(longlong *)(lVar16 + 0x6490) == 0 ||
           (*(int *)(*(longlong *)(lVar16 + 0x6490) + 0x2ac) == 0)) &&
          (((*(byte *)(lVar16 + 0x1b6c) & 4) != 0 && (*(int *)(lVar16 + 0x1b84) == 0)))))) {
        cVar15 = '\x01';
        iVar7 = 10;
    }
    if (*(char *)(lVar3 + 8) == '\0') {
        *(undefined4 *)(param_1 + 0x35c0) = 0;
    }
    else if (*(int *)(param_1 + 0x35c0) == 0) {
        *(undefined8 *)(param_1 + 0x35c0) = 1;
    }
    bVar17 = cVar15 == '\0';
    if (!bVar17) {
        if ((*(longlong *)(param_1 + 0x18) == 0) ||
            (fVar20 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x16c), fVar20 <= DAT_140c45a98 - 1.0))
        {
            fVar20 = *(float *)(lVar3 + 0x34);
        }
        if ((((fVar20 <= DAT_140c45a98) ||
              (fVar18 = *(float *)(lVar10 + 0x11e0) - *(float *)(param_1 + 0x11e0),
                      fVar19 = *(float *)(lVar10 + 0x11e4) - *(float *)(param_1 + 0x11e4),
                      fVar20 * fVar20 <= fVar18 * fVar18 + fVar19 * fVar19 + 0.0)) ||
             ((plVar13 = *(longlong **)(param_1 + 0x16f0), plVar13 == (longlong *)0x0 &&
                                                           (plVar13 = *(longlong **)(param_1 + 0x16f8), plVar13 == (longlong *)0x0)))) ||
            (iVar9 = (**(code **)(*plVar13 + 0x108))(plVar13,0,1), lVar16 = DAT_140c65898, iVar9 == 1)) {
            cVar15 = '\0';
        }
        else if ((((*(longlong *)(DAT_140c65898 + 0x71a8) != 0) &&
                   (*(int *)(*(longlong *)(DAT_140c65898 + 0x71a8) + 0x2b8) != 0)) &&
                  (*(longlong *)(DAT_140c65898 + 0x7198) != 0)) &&
                 (*(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x50) == 0)) {
            cVar15 = '\0';
        }
        bVar17 = cVar15 == '\0';
    }
    local_38 = fVar20;
    FUN_140608850(*(undefined8 *)(lVar16 + 0x73f8),*(undefined4 *)(param_1 + 8),!bVar17,iVar7);
    return;
}



void FUN_14046c4d0(longlong param_1)

{
    int iVar1;

    *(undefined4 *)(param_1 + 0x1900) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + 0xa0) != 0) {
            iVar1 = FUN_1405a8b30(param_1,param_1);
            if (iVar1 == 0x65) {
                *(undefined4 *)(param_1 + 0x1900) = 1;
                return;
            }
            *(undefined4 *)(param_1 + 0x1900) = 2;
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9c);
        if (iVar1 != 0) {
            iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),iVar1,param_1,0,0);
            *(uint *)(param_1 + 0x1900) = (iVar1 != 0) + 1;
        }
    }
    return;
}



undefined4 FUN_14046c580(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    undefined4 uVar5;
    ulonglong uVar4;

    lVar2 = FUN_140200220(0x19e);
    uVar4 = 0;
    uVar5 = 0;
    if (lVar2 != 0) {
        uVar5 = *(undefined4 *)(lVar2 + 4);
    }
    if (((*(int *)(param_1 + 0x80) == 0x14) &&
         (lVar2 = FUN_1401f31e0(*(undefined4 *)(param_2 + 0xdc)), lVar2 != 0)) &&
        (iVar1 = FUN_14045a950(param_1), iVar1 != 0)) {
        uVar5 = *(undefined4 *)(lVar2 + 0x54);
    }
    else {
        lVar2 = *(longlong *)(param_1 + 0x18);
        if (lVar2 != 0) {
            if ((*(int *)(lVar2 + 0x6c) == 0) && (*(int *)(lVar2 + 0x148) == 0)) {
                lVar2 = 0x10;
                do {
                    if ((*(int *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0)) == 0) ||
                        (iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar1 != 0)) {
                        return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0) + uVar4 * 4);
                    }
                    uVar3 = (int)uVar4 + 1;
                    uVar4 = (ulonglong)uVar3;
                    lVar2 = lVar2 + 4;
                } while (uVar3 < 4);
            }
            else {
                uVar5 = 0;
            }
        }
    }
    return uVar5;
}



undefined8 FUN_14046c6a0(longlong param_1)

{
    ulonglong uVar1;

    if (*(int *)(param_1 + 0x1900) != 2) {
        if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
            if ((*(int *)(param_1 + 0x80) == 0x1e) && (*(int *)(param_1 + 0x1b8) != 3)) {
                return 1;
            }
        }
        else {
            uVar1 = 0;
            while (*(char *)(param_1 + 0x1914 +
                             (ulonglong)*(uint *)((longlong)&DAT_140c593f0 + uVar1) * 0x48) == '\0') {
                uVar1 = uVar1 + 4;
                if (0x2b < uVar1) {
                    return 1;
                }
            }
        }
    }
    return 0;
}



undefined4 FUN_14046c700(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    bool bVar7;

    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
        uVar1 = *(uint *)(param_1 + 0x80);
        if ((uVar1 != 4) && (uVar1 != 0x1e)) {
            uVar5 = (ulonglong)uVar1;
            if ((*(int *)(lVar3 + 0x148) == 0) ||
                ((uVar5 = DAT_140c65970, DAT_140c65970 == 0 || (*(int *)(DAT_140c65970 + 8) != 0)))) {
                if ((*(int *)(lVar3 + 0x7c) == 0) && (*(int *)(lVar3 + 0x80) == 0)) {
                    lVar6 = 0;
                    if (*(int *)(lVar3 + 0x6c) != 0) {
                        uVar4 = 0x45e;
                        if (*(int *)(DAT_140c65898 + 0x1694) == *(int *)(lVar3 + 0x6c)) {
                            uVar4 = 0x460;
                        }
                        return uVar4;
                    }
                    uVar5 = 0x14;
                    do {
                        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd0);
                        if (*(int *)(uVar5 + lVar3) == 0) {
                            if (*(int *)((uVar5 - 0x14) + lVar3) != 0) {
                                return *(undefined4 *)(lVar3 + lVar6 * 4);
                            }
                        }
                        else {
                            iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                                    (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),
                                     *(int *)(uVar5 + lVar3),param_1,0,0);
                            if (iVar2 != 0) {
                                return *(undefined4 *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd0) + lVar6 * 4);
                            }
                        }
                        uVar5 = uVar5 + 4;
                        lVar6 = lVar6 + 1;
                    } while (uVar5 < 0x28);
                    return 0;
                }
                iVar2 = FUN_1404a8180(uVar5,param_1);
                uVar4 = 0x460;
                if (iVar2 != 0) {
                    uVar4 = 0x45e;
                }
                return uVar4;
            }
            lVar3 = FUN_1403d7bc0(DAT_140c65970,*(undefined4 *)(lVar3 + 0x148));
            uVar4 = 0;
            bVar7 = false;
            if (lVar3 != 0) {
                bVar7 = *(int *)(**(longlong **)(lVar3 + 0x30) + 0xc) == 0;
            }
            iVar2 = FUN_140570810();
            if (bVar7) {
                if (iVar2 == 2) {
                    uVar4 = 0x45e;
                }
                return uVar4;
            }
            uVar4 = 0x460;
            if (iVar2 == 3) {
                uVar4 = 0x462;
            }
            return uVar4;
        }
    }
    return 0;
}



undefined8
FUN_14046c8e0(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,int param_7,int param_8)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    longlong lVar8;
    undefined *puVar9;
    ulonglong uVar10;
    longlong *plVar11;
    uint uVar12;
    undefined4 uVar13;
    ulonglong local_48;
    undefined4 local_40;
    undefined4 uStack60;
    undefined4 local_38;
    uint uStack52;
    undefined4 local_30;
    undefined4 uStack44;

    uVar3 = uStack60;
    uVar13 = local_40;
    if ((*(longlong *)(param_1 + 0x16e8) == 0) || (1 < param_2 - 4U)) {
        return 0;
    }
    local_40 = (undefined4)param_1;
    uVar2 = local_40;
    uStack60 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar4 = uStack60;
    if (param_3 != 0) {
        local_40 = uVar13;
        uStack60 = uVar3;
        iVar5 = param_3;
        if (param_8 != 0) {
            iVar5 = FUN_140470540(param_1,param_3);
        }
        piVar7 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                (*(longlong **)(param_1 + 0x16e8),iVar5,param_4);
        if (*piVar7 == 0x96) {
            return 0;
        }
        iVar1 = *(int *)(param_1 + 0x1428);
        if (param_2 == 4) {
            FUN_140470b80(param_1,~piVar7[2] & 1,piVar7[2] & 8);
        }
        else if (param_2 == 5) {
            FUN_140471230(param_1,~piVar7[2] & 1,piVar7[2] & 8);
        }
        if ((*(int *)(param_1 + 0x1428) == 0x3f) != (iVar1 == 0x3f)) {
            iVar5 = FUN_140470540(param_1,param_3);
            piVar7 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                    (*(longlong **)(param_1 + 0x16e8),iVar5,param_4);
            if (*piVar7 == 0x96) {
                if (param_2 == 4) {
                    uVar12 = ~*(uint *)(param_1 + 0x1428) & 4;
                    if (*(longlong *)(param_1 + 0xcc0) == 0) {
                        return 0;
                    }
                    uVar6 = FUN_140467ed0(param_1);
                    *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xfffffffb;
                }
                else {
                    if (param_2 != 5) {
                        return 0;
                    }
                    uVar12 = ~*(uint *)(param_1 + 0x1428) & 0x10;
                    if (*(longlong *)(param_1 + 0xcc0) == 0) {
                        return 0;
                    }
                    uVar6 = FUN_140467ed0(param_1);
                    *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) & 0xffffffef;
                }
                *(uint *)(param_1 + 0x142c) = *(uint *)(param_1 + 0x142c) | uVar12;
                uVar12 = *(uint *)(param_1 + 0x142c);
                if (((uVar6 & 0xfffffff6) == 0) && (uVar6 != 1)) {
                    uVar12 = 0x3f;
                }
                if (*(uint *)(param_1 + 0x1428) != uVar12) {
                    if (uVar12 == 0x3f) {
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
                        local_48 = local_48 & 0xffffffff00000000;
                        local_38 = 0x40471e50;
                        uStack52 = 1;
                        local_30 = 0;
                        uStack44 = 0;
                        local_40 = uVar2;
                        uStack60 = uVar4;
                        FUN_140195960(param_1 + 0x1430,0x96,&local_48,4);
                        local_38 = 0x40471ea0;
                        uStack52 = 1;
                        local_48 = local_48 & 0xffffffff00000000;
                        local_30 = 0;
                        uStack44 = 0;
                        local_40 = uVar2;
                        uStack60 = uVar4;
                        FUN_140195960(param_1 + 0x1478,0x96,&local_48,4);
                        *(undefined4 *)(param_1 + 0x14c0) = 1;
                    }
                    if ((uVar12 & 4) != 0) {
                        FUN_140195d70(param_1 + 0x1398);
                    }
                    if ((uVar12 & 0x10) != 0) {
                        FUN_140195d70(param_1 + 0x13e0);
                    }
                    *(uint *)(param_1 + 0x1428) = uVar12;
                }
                return 0;
            }
        }
        uVar10 = (ulonglong)piVar7[4];
        if (*piVar7 == param_3) {
            if (uVar10 < 8) {
                uVar13 = *(undefined4 *)(&DAT_140b670f0 + uVar10 * 4);
            }
            else {
                uVar13 = 9;
            }
        }
        else if (uVar10 < 8) {
            uVar13 = *(undefined4 *)(&DAT_140b67110 + uVar10 * 4);
        }
        else {
            uVar13 = 0xd;
        }
        if (((((param_2 == 4) && (lVar8 = FUN_1404695e0(param_1), *(int *)(param_1 + 0x12e0) != 0)) &&
              (*(float *)(param_1 + 0x12d4) == 0.0)) &&
             (1e-05 < (float)(*(uint *)(param_1 + 0x12c8) & 0x7fffffff))) &&
            (((*(int *)(param_1 + 0x1354) == 0 || ((*(byte *)(piVar7 + 1) & 2) != 0)) ||
              ((lVar8 != 0 &&
                ((*(uint *)(*(longlong *)(*(longlong *)(lVar8 + 0x138) + 0x70) + 0x108) & 0x400000) != 0)))
            ))) {
            *(undefined4 *)(param_1 + 0x1310) = 1;
            *(undefined4 *)(param_1 + 0x12d4) = 0x3e19999a;
            local_48 = 0;
            uStack60 = 0;
            local_38 = 0;
            local_40 = 0x3f800000;
            uStack52 = 0;
            local_30 = 0;
            uStack44 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),7,&local_48);
        }
        local_48 = CONCAT44(param_4,iVar5);
        uStack52 = -(uint)(param_7 != 0) & 2;
        local_30 = param_6;
        local_38 = uVar13;
        goto LAB_14046cd29;
    }
    if (param_2 == 4) {
        puVar9 = &DAT_140470d80;
        lVar8 = param_1 + 0x1398;
        LAB_14046ccf2:
        local_48 = local_48 & 0xffffffff00000000;
        local_38 = SUB84(puVar9,0);
        uStack52 = (uint)((ulonglong)puVar9 >> 0x20);
        local_30 = 0;
        uStack44 = 0;
        FUN_140195960(lVar8,2000,&local_48,4);
    }
    else if (param_2 == 5) {
        puVar9 = &DAT_140471430;
        lVar8 = param_1 + 0x13e0;
        goto LAB_14046ccf2;
    }
    param_5 = 0x3f800000;
    local_48 = 0;
    local_38 = 0;
    uStack52 = 0;
    local_30 = 0;
    LAB_14046cd29:
    uStack60 = 0;
    uStack44 = 0;
    local_40 = param_5;
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
            (*(longlong **)(param_1 + 0x16e8),param_2,&local_48);
    if (param_2 == 4) {
        plVar11 = *(longlong **)(param_1 + 0x15e0);
    }
    else {
        if (param_2 != 5) {
            return 1;
        }
        plVar11 = *(longlong **)(param_1 + 0x15e8);
    }
    if (((plVar11 != (longlong *)0x0) && (*(int *)((longlong)plVar11 + 0x1a4) != 0)) &&
        ((*(undefined4 *)((longlong)plVar11 + 0x1a4) = 0, *(int *)(plVar11 + 0x35) == 2 ||
                                                          ((*(int *)(plVar11 + 0x3f) == 0 || (*(int *)((longlong)plVar11 + 0x1fc) != 0)))))) {
        (**(code **)(*plVar11 + 0x50))(plVar11,1);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14046cdc0(longlong param_1,int param_2,int param_3)

{
    double dVar1;
    byte bVar2;
    int iVar3;
    undefined4 uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    undefined4 uVar9;
    int *piVar10;
    longlong lVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong *plVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    char cVar17;
    uint uVar18;
    bool bVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined auVar24 [16];
    float fVar25;
    float fVar26;
    float fVar27;
    int local_res8 [2];
    uint local_res20 [2];
    int local_e8;
    int local_e4;
    undefined8 local_e0;
    int local_d8;
    uint local_d4;
    ulonglong local_d0;
    undefined8 local_c8;
    undefined8 uStack192;
    float local_b8;
    undefined4 uStack180;
    undefined4 local_b0;
    undefined4 uStack172;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined local_88 [4];
    undefined auStack132 [4];
    undefined8 uStack128;
    float local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    longlong local_60;

    uStack128 = _local_88;
    if (*(longlong *)(param_1 + 0x16e8) == 0) {
        return;
    }
    uVar4 = FUN_14047be40();
    *(undefined4 *)(param_1 + 0x1390) = uVar4;
    uVar15 = 0;
    uVar18 = 0;
    if (*(int *)(param_1 + 0x1348) != *(int *)(param_1 + 0x134c)) {
        if (*(int *)(param_1 + 0x1348) == 1) {
            local_c8 = 0;
            uStack192 = 0;
            local_b8 = 0.0;
            uStack180 = 0;
            local_b0 = 0;
            uStack172 = 0;
            uVar5 = *(uint *)(param_1 + 5000);
            if (uVar5 == 0) {
                uVar5 = FUN_14046e5f0(param_1);
            }
            local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)uVar5;
            uVar5 = FUN_1401ae6a0(0,0xffff);
            uVar12 = local_c8 & 0xffffffff;
            local_c8 = local_c8 & 0xffffffff | (ulonglong)uVar5 << 0x20;
            piVar10 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                    (*(longlong **)(param_1 + 0x16e8),uVar12,uVar5);
            if (((*piVar10 == 0x96) && ((float)local_c8 != 2.101948e-43)) &&
                ((float)local_c8 != 2.312142e-43)) {
                local_c8 = CONCAT44(local_c8._4_4_,0xa5);
                piVar10 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),0xa5,local_c8._4_4_);
            }
            if ((*(int *)(param_1 + 5000) == 0) && (*(int *)(param_1 + 0x134c) != 0)) {
                uStack192 = (ulonglong)(uint)piVar10[5] << 0x20 | 0x3f800000;
            }
            else {
                uStack192 = 0x3f800000;
            }
            local_b8 = 5.605194e-45;
            *(int *)(param_1 + 0x1380) = piVar10[3];
            *(undefined4 *)(param_1 + 0x1384) = 0;
            *(undefined4 *)(param_1 + 0x1344) = 0x27;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),1,&local_c8);
            iVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1b0))
                    (*(longlong **)(param_1 + 0x16e8),local_c8 & 0xffffffff,local_c8._4_4_);
            if (iVar6 == -1) {
                FUN_14047f210(param_1,param_1 + 0x11e0,0);
            }
            if (*(int *)(param_1 + 0x134c) == 0) {
                FUN_14003d8f0(local_res8,DAT_140c65898 + 0x6f38);
                FUN_14047c750(param_1,1);
                FUN_14047cf40(param_1);
                FUN_14003d880(local_res8);
            }
        }
        else {
            local_c8 = 0;
            uStack192 = 0x3f800000;
            local_b8 = 0.0;
            uStack180 = 0;
            local_b0 = 0;
            uStack172 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),1,&local_c8);
            param_2 = 1;
        }
        *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_1 + 0x1348);
    }
    *(undefined4 *)(param_1 + 0x1354) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x188))();
    if ((*(int *)(param_1 + 0x1d8) != 0) &&
        (((*(byte *)(param_1 + 0x1070) & 0x40) != 0 || (*(int *)(param_1 + 0x2ac) != 0)))) {
        FUN_1404742e0(param_1);
    }
    if (*(int *)(param_1 + 0x1348) != 0) {
        return;
    }
    if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0x131c) = *(undefined4 *)(param_1 + 0x1088);
        if ((*(int *)(param_1 + 0x35d0) != 0) || (*(int *)(param_1 + 0x1c0) != 0)) {
            *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x35d0);
        }
        *(undefined4 *)(param_1 + 0x1c4) = 0;
        *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1cc);
        *(undefined4 *)(param_1 + 0x1394) = *(undefined4 *)(param_1 + 0x1390);
    }
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x60))();
    iVar6 = *(int *)(param_1 + 0x1390);
    uVar5 = *(uint *)(param_1 + 0x1344);
    if ((iVar6 == 0) || (local_60 = *(longlong *)(param_1 + 0xf00), local_60 == 0)) {
        local_60 = param_1;
    }
    if (uVar5 == 0x2a) {
        *(undefined4 *)(param_1 + 0x1344) = 0x2b;
        goto switchD_14046d5ba_caseD_27;
    }
    if ((uVar5 == 0x2b) && (param_2 == 0)) {
        *(undefined4 *)(param_1 + 0x1344) = 0x2b;
        goto switchD_14046d5ba_caseD_27;
    }
    iVar8 = *(int *)(param_1 + 0x80);
    if ((((iVar8 == 0x1b) || (iVar8 == 0x12)) ||
         ((*(longlong *)(param_1 + 0xb8) != 0 && (*(int *)(*(longlong *)(param_1 + 0xb8) + 4) == 5))))
        || (iVar8 == 0xb)) goto switchD_14046d5ba_caseD_c;
    if ((*(int *)(param_1 + 0x36e4) != 0) && (iVar6 == 0)) {
        lVar11 = *(longlong *)(param_1 + 0xf00);
        if ((lVar11 == 0) ||
            (((*(byte *)(lVar11 + 0x1070) & 2) == 0 || (bVar2 = 1, *(int *)(lVar11 + 0x1320) < 3)))) {
            bVar2 = 0;
        }
        if (uVar5 == 1) {
            if (param_2 != 0) goto LAB_14046d1e7;
            *(undefined4 *)(param_1 + 0x1344) = 1;
        }
        else if (uVar5 == 2) {
            LAB_14046d1e7:
            *(uint *)(param_1 + 0x1344) = -(uint)bVar2 & 2;
        }
        else {
            iVar6 = FUN_14047bea0();
            if (iVar6 == 0) {
                *(uint *)(param_1 + 0x1344) = (uint)bVar2;
            }
            else {
                *(uint *)(param_1 + 0x1344) = (uint)(*(int *)(param_1 + 0x1344) != 0);
            }
        }
        goto switchD_14046d5ba_caseD_27;
    }
    uVar7 = *(uint *)(local_60 + 0x1070);
    cVar17 = (char)uVar7;
    if ((uVar7 & 0x3000) != 0) {
        if ((uVar5 != 6) && (uVar5 != 0xb)) {
            uVar4 = 6;
            if ((*(uint *)(param_1 + 0x1070) & 0x2000) != 0) {
                uVar4 = 0xb;
            }
            *(undefined4 *)(param_1 + 0x1344) = uVar4;
        }
        goto switchD_14046d5ba_caseD_27;
    }
    if ((uVar7 & 0x18000) != 0) {
        if ((uVar5 - 0x10 & 0xfffffffd) != 0) {
            *(uint *)(param_1 + 0x1344) = (*(uint *)(param_1 + 0x1070) & 0x10000 | 0x80000) >> 0xf;
        }
        goto switchD_14046d5ba_caseD_27;
    }
    if ((uVar7 >> 0xb & 1) != 0) {
        if (uVar5 == 5) {
            *(int *)(param_1 + 0x1394) = iVar6;
            *(undefined4 *)(param_1 + 0x1344) = 0x14;
        }
        else if (uVar5 == 0x14) {
            if (param_2 != 0) {
                *(undefined4 *)(param_1 + 0x1344) = 0x15;
            }
        }
        else if (uVar5 != 0x15) {
            *(undefined4 *)(param_1 + 0x1344) = 0x14;
        }
        goto switchD_14046d5ba_caseD_27;
    }
    if ((uVar7 & 0x40) != 0) {
        if (uVar5 == 5) {
            *(int *)(param_1 + 0x1394) = iVar6;
            *(undefined4 *)(param_1 + 0x1344) = 0x16;
        }
        else if (uVar5 == 0x16) {
            if (param_2 != 0) {
                *(undefined4 *)(param_1 + 0x1344) = 0x17;
            }
        }
        else if (uVar5 != 0x17) {
            *(undefined4 *)(param_1 + 0x1344) = 0x16;
        }
        goto switchD_14046d5ba_caseD_27;
    }
    if (iVar6 != 0) {
        if ((*(int *)(param_1 + 0x1394) != 0) || (*(int *)(param_1 + 0x1308) == 0)) {
            if (iVar6 == 0) goto LAB_14046d353;
            goto LAB_14046d36b;
        }
        *(undefined4 *)(param_1 + 0x1344) = 4;
        *(int *)(param_1 + 0x1394) = iVar6;
        goto switchD_14046d5ba_caseD_27;
    }
    LAB_14046d353:
    if (*(int *)(param_1 + 0x1394) != 0) {
        *(undefined4 *)(param_1 + 0x1344) = 5;
        goto switchD_14046d5ba_caseD_27;
    }
    LAB_14046d36b:
    if ((uVar5 < 3) || ((uVar5 == 3 && (param_2 == 0)))) {
        *(undefined4 *)(param_1 + 0x1344) = 3;
        goto switchD_14046d5ba_caseD_27;
    }
    if (((uVar7 & 8) != 0) && (-1 < cVar17)) {
        if (uVar5 == 0x15) {
            bVar19 = param_2 == 0;
        }
        else {
            bVar19 = uVar5 == 0x29;
        }
        if (!bVar19) {
            *(undefined4 *)(param_1 + 0x1344) = 0x29;
        }
        goto switchD_14046d5ba_caseD_27;
    }
    iVar8 = FUN_14045e630();
    if (iVar8 != 0) goto switchD_14046d5ba_caseD_c;
    if (*(int *)(param_1 + 0x1320) < 3) {
        if (1 < *(int *)(param_1 + 0x1320)) {
            if ((cVar17 < '\0') && (iVar6 = FUN_14047c120(), iVar6 == 0)) {
                switchD_14046d5ba_caseD_c:
                *(undefined4 *)(param_1 + 0x1344) = 0x27;
            }
            else {
                switch(*(undefined4 *)(param_1 + 0x1344)) {
                    case 3:
                    case 5:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x29:
                        iVar6 = FUN_140482370();
                        if (iVar6 == 0) {
                            *(uint *)(param_1 + 0x1344) = (1 < *(int *)(param_1 + 0x54)) + 0x18;
                        }
                        else {
                            *(undefined4 *)(param_1 + 0x1344) = 0x1a;
                        }
                        break;
                    case 4:
                    case 9:
                    case 10:
                    case 0xe:
                    case 0xf:
                    case 0x11:
                    case 0x13:
                    case 0x18:
                    case 0x19:
                    case 0x1a:
                    case 0x28:
                        if ((param_2 != 0) || (param_3 != 0)) goto switchD_14046d5ba_caseD_c;
                        break;
                    case 6:
                        iVar6 = FUN_140482370();
                        *(uint *)(param_1 + 0x1344) = (iVar6 != 0) + 9;
                        break;
                    case 7:
                    case 8:
                    case 0x1b:
                    case 0x1c:
                    case 0x1d:
                    case 0x1e:
                    case 0x1f:
                    case 0x20:
                    case 0x21:
                    case 0x22:
                    case 0x23:
                    case 0x24:
                    case 0x25:
                    case 0x26:
                        *(undefined4 *)(param_1 + 0x1344) = 0x28;
                        *(undefined4 *)(param_1 + 0x1c4) = 0;
                        *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1b8);
                        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1cc);
                        break;
                    case 0xb:
                        iVar6 = FUN_140482370();
                        *(uint *)(param_1 + 0x1344) = (iVar6 != 0) + 0xe;
                        break;
                    default:
                        goto switchD_14046d5ba_caseD_c;
                    case 0x10:
                        *(undefined4 *)(param_1 + 0x1344) = 0x11;
                        break;
                    case 0x12:
                        *(undefined4 *)(param_1 + 0x1344) = 0x13;
                        break;
                    case 0x27:
                        break;
                }
            }
            goto switchD_14046d5ba_caseD_27;
        }
        if (cVar17 < '\0') {
            switchD_14046d517_caseD_4:
            *(undefined4 *)(param_1 + 0x1344) = 0x26;
        }
        else {
            switch(uVar5) {
                case 3:
                case 5:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x29:
                    if (iVar6 != 0) goto switchD_14046d517_caseD_4;
                    if (*(int *)(param_1 + 0x54) < 2) {
                        iVar6 = FUN_140482370(param_1);
                        uVar4 = 0x21;
                        if (iVar6 != 0) {
                            uVar4 = 0x23;
                        }
                        *(undefined4 *)(param_1 + 0x1344) = uVar4;
                    }
                    else {
                        *(undefined4 *)(param_1 + 0x1344) = 0x22;
                    }
                    break;
                default:
                    goto switchD_14046d517_caseD_4;
                case 0xb:
                    iVar6 = FUN_140482370();
                    *(uint *)(param_1 + 0x1344) = (iVar6 != 0) + 0xc;
                    break;
                case 0xc:
                case 0xd:
                case 0x21:
                case 0x22:
                case 0x23:
                    if (param_2 != 0) goto switchD_14046d517_caseD_4;
                    break;
                case 0x26:
                    break;
            }
        }
        goto switchD_14046d5ba_caseD_27;
    }
    if ((cVar17 < '\0') && (iVar6 = FUN_14047c120(), iVar6 == 0)) goto switchD_14046d403_caseD_4;
    switch(*(undefined4 *)(param_1 + 0x1344)) {
        case 3:
        case 5:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x29:
            if (*(int *)(param_1 + 0x1320) < 5) {
                if (*(int *)(param_1 + 0x1320) < 4) goto switchD_14046d403_caseD_4;
                if (*(int *)(param_1 + 0x54) < 2) {
                    iVar6 = FUN_140482370(param_1);
                    uVar4 = 0x1b;
                    if (iVar6 != 0) {
                        uVar4 = 0x1d;
                    }
                    *(undefined4 *)(param_1 + 0x1344) = uVar4;
                }
                else {
                    *(undefined4 *)(param_1 + 0x1344) = 0x1c;
                }
            }
            else if (*(int *)(param_1 + 0x54) < 2) {
                iVar6 = FUN_140482370(param_1);
                uVar4 = 0x1e;
                if (iVar6 != 0) {
                    uVar4 = 0x20;
                }
                *(undefined4 *)(param_1 + 0x1344) = uVar4;
            }
            else {
                *(undefined4 *)(param_1 + 0x1344) = 0x1f;
            }
            break;
        default:
            goto switchD_14046d403_caseD_4;
        case 6:
            if (*(int *)(param_1 + 0x1320) < 4) goto switchD_14046d403_caseD_4;
            iVar6 = FUN_140482370();
            *(uint *)(param_1 + 0x1344) = (iVar6 != 0) + 7;
            break;
        case 7:
        case 8:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
            if ((param_2 == 0) && (3 < *(int *)(param_1 + 0x1320))) {
                LAB_14046d40a:
                if (*(int *)(param_1 + 0x138c) == 0) break;
            }
            goto switchD_14046d403_caseD_4;
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x13:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x26:
        case 0x27:
        case 0x28:
            *(undefined4 *)(param_1 + 0x1344) = 0x25;
            break;
        case 0x24:
            break;
        case 0x25:
            if (param_2 == 0) goto LAB_14046d40a;
        switchD_14046d403_caseD_4:
            *(undefined4 *)(param_1 + 0x1344) = 0x24;
    }
    switchD_14046d5ba_caseD_27:
    iVar6 = *(int *)(param_1 + 0x1344);
    local_res8[0] = 0;
    switch(iVar6) {
        case 9:
        case 10:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x13:
        case 0x27:
        case 0x28:
            local_res8[0] = 1;
    }
    local_res20[0] = (uint)(iVar6 - 0x10U < 4);
    lVar11 = FUN_1404695e0();
    _local_88 = CONCAT88(uStack128,lVar11);
    fVar27 = 0.0;
    if (lVar11 == 0) {
        uVar12 = uVar15;
        if (((*(longlong *)(DAT_140c65898 + 0x78) == param_1) && (*(int *)(DAT_140c65898 + 0x6360) != 0)
            ) && (uVar12 = 0, *(int *)(DAT_140c65898 + 0x6364) != 0)) {
            uVar12 = FUN_1403acd90(DAT_140c65b70,*(int *)(DAT_140c65898 + 0x6364),param_1);
            goto LAB_14046d738;
        }
        LAB_14046d75f:
        if ((*(int *)(param_1 + 0x135c) != 0) || (*(int *)(param_1 + 0x1620) != 0)) goto LAB_14046d775;
    }
    else {
        uVar12 = *(ulonglong *)(lVar11 + 0x138);
        LAB_14046d738:
        if (((uVar12 == 0) || ((*(uint *)(*(longlong *)(uVar12 + 0x70) + 0x108) & 0x400000) != 0)) ||
            ((uVar7 = *(uint *)(*(longlong *)(uVar12 + 0x70) + 0x7c), 8 < uVar7 ||
                                                                      ((0x12aU >> (uVar7 & 0x1f) & 1) == 0)))) goto LAB_14046d75f;
        LAB_14046d775:
        if ((9 < iVar6 - 6U) && (local_res20[0] == 0)) {
            if ((*(int *)(param_1 + 0x135c) != 0) && (*(int *)(param_1 + 0x1358) == 0)) {
                *(undefined4 *)(param_1 + 0x1370) = *(undefined4 *)(param_1 + 0x1140);
                *(undefined4 *)(param_1 + 0x1374) = *(undefined4 *)(param_1 + 0x1144);
                *(undefined4 *)(param_1 + 0x1378) = *(undefined4 *)(param_1 + 0x1148);
                *(undefined4 *)(param_1 + 0x137c) = *(undefined4 *)(param_1 + 0x114c);
                *(undefined4 *)(param_1 + 0x1358) = 1;
            }
            uVar7 = FUN_140467e40(param_1);
            if ((((*(int *)(param_1 + 0x135c) != 0) ||
                  ((uVar7 < 0xb && ((0x5b0U >> (uVar7 & 0x1f) & 1) != 0)))) &&
                 (lVar11 = FUN_1403d90d0(DAT_140c65898), lVar11 != 0)) &&
                (((*(int *)(param_1 + 0x10c) != 2 && ((*(byte *)(lVar11 + 0x24) & 1) == 0)) &&
                  ((*(longlong *)(lVar11 + 0x18) == 0 || (iVar6 = FUN_140466b90(param_1), iVar6 != 0)))))) {
                iVar6 = *(int *)(param_1 + 0x135c);
                if (iVar6 == 0) {
                    LAB_14046d870:
                    if (*(float *)(param_1 + 0x1140) *
                        (*(float *)(lVar11 + 0x11e0) - *(float *)(param_1 + 0x11e0)) +
                        *(float *)(param_1 + 0x1144) *
                        (*(float *)(lVar11 + 0x11e4) - *(float *)(param_1 + 0x11e4)) + 0.0 <= fVar27)
                        goto LAB_14046da99;
                    LAB_14046d8a9:
                    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x360))
                            (*(longlong **)(param_1 + 0x16e8),8,local_88);
                    if (iVar6 == 0) {
                        fVar20 = *(float *)(param_1 + 0x1230);
                        fVar21 = *(float *)(param_1 + 0x1234);
                        fVar22 = *(float *)(param_1 + 0x1238);
                        fVar23 = *(float *)(param_1 + 0x123c);
                    }
                    else {
                        lVar13 = *(longlong *)(DAT_140c65898 + 0x71a8);
                        if (lVar13 == 0) {
                            lVar13 = *(longlong *)(DAT_140c65898 + 0x71a0);
                        }
                        fVar20 = *(float *)(param_1 + 0x11c0);
                        fVar21 = *(float *)(param_1 + 0x11c4);
                        fVar22 = *(float *)(param_1 + 0x11c8);
                        fVar23 = *(float *)(param_1 + 0x11cc);
                        fVar25 = fVar21 * fVar21;
                        fVar26 = fVar20 * fVar20 + fVar25 + 0.0;
                        auVar24 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                                          CONCAT412(fVar23 * fVar23,
                                                    CONCAT48(fVar22 * fVar22,CONCAT44(fVar25,fVar26))));
                        fVar25 = SUB164(auVar24,0);
                        fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
                        if (fVar25 <= 0.0) {
                            fVar25 = 0.0;
                        }
                        fVar26 = ((auStack132 * *(float *)(lVar13 + 0xb4) + local_88 * *(float *)(lVar13 + 0xa4)
                                   + *(float *)(lVar13 + 0xc4) * 0.0 + *(float *)(lVar13 + 0xd4)) -
                                  *(float *)(param_1 + 0x11e4)) * fVar25 * fVar21 +
                                 ((auStack132 * *(float *)(lVar13 + 0xb0) + local_88 * *(float *)(lVar13 + 0xa0)
                                   + *(float *)(lVar13 + 0xc0) * 0.0 + *(float *)(lVar13 + 0xd0)) -
                                  *(float *)(param_1 + 0x11e0)) * fVar25 * fVar20 + 0.0;
                        fVar20 = fVar26 * fVar25 * fVar20 + *(float *)(param_1 + 0x11e0);
                        fVar21 = fVar26 * fVar25 * fVar21 + *(float *)(param_1 + 0x11e4);
                        fVar22 = fVar26 * fVar25 * fVar22 + *(float *)(param_1 + 0x11e8);
                        fVar23 = fVar26 * fVar25 * fVar23 + *(float *)(param_1 + 0x11ec);
                    }
                    plVar14 = *(longlong **)(lVar11 + 0x16e8);
                    _local_88 = CONCAT412(fVar23,CONCAT48(fVar22,CONCAT44(fVar21,fVar20)));
                    if ((plVar14 == (longlong *)0x0) ||
                        (iVar6 = (**(code **)(*plVar14 + 0x360))(plVar14,8,&local_c8), iVar6 == 0)) {
                        fVar20 = *(float *)(lVar11 + 0x1230);
                        fVar21 = *(float *)(lVar11 + 0x1234);
                        fVar22 = *(float *)(lVar11 + 0x1238);
                        fVar23 = *(float *)(lVar11 + 0x123c);
                    }
                    else {
                        lVar11 = *(longlong *)(DAT_140c65898 + 0x71a8);
                        if (lVar11 == 0) {
                            lVar11 = *(longlong *)(DAT_140c65898 + 0x71a0);
                        }
                        fVar20 = local_c8._4_4_ * *(float *)(lVar11 + 0xb0) +
                                 (float)local_c8 * *(float *)(lVar11 + 0xa0) +
                                 (float)uStack192 * *(float *)(lVar11 + 0xc0) + *(float *)(lVar11 + 0xd0);
                        fVar21 = local_c8._4_4_ * *(float *)(lVar11 + 0xb4) +
                                 (float)local_c8 * *(float *)(lVar11 + 0xa4) +
                                 (float)uStack192 * *(float *)(lVar11 + 0xc4) + *(float *)(lVar11 + 0xd4);
                        fVar22 = local_c8._4_4_ * *(float *)(lVar11 + 0xb8) +
                                 (float)local_c8 * *(float *)(lVar11 + 0xa8) +
                                 (float)uStack192 * *(float *)(lVar11 + 200) + *(float *)(lVar11 + 0xd8);
                        fVar23 = local_c8._4_4_ * *(float *)(lVar11 + 0xbc) +
                                 (float)local_c8 * *(float *)(lVar11 + 0xac) +
                                 (float)uStack192 * *(float *)(lVar11 + 0xcc) + *(float *)(lVar11 + 0xdc);
                    }
                    fVar20 = fVar20 - local_88;
                    fVar21 = fVar21 - auStack132;
                    fVar22 = fVar22 - (float)uStack128;
                    fVar23 = fVar23 - uStack128._4_4_;
                    fVar25 = fVar21 * fVar21;
                    fVar26 = fVar20 * fVar20 + fVar25 + 0.0;
                    auVar24 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                                      CONCAT412(fVar23 * fVar23,
                                                CONCAT48(fVar22 * fVar22,CONCAT44(fVar25,fVar26))));
                    fVar25 = SUB164(auVar24,0);
                    fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
                    if (fVar25 <= 0.0) {
                        fVar25 = 0.0;
                    }
                    *(undefined (*) [16])(param_1 + 0x1360) =
                            CONCAT412(fVar25 * fVar23,
                                      CONCAT48(fVar25 * fVar22,CONCAT44(fVar25 * fVar21,fVar25 * fVar20)));
                }
                else if ((((_local_88 == 0) || ((*(byte *)(*(longlong *)(uVar12 + 0x70) + 0x108) & 1) != 0))
                          && (iVar8 = FUN_14045e6d0(param_1), iVar8 == 0)) &&
                         (iVar8 = FUN_14045ae10(param_1), iVar8 == 0)) {
                    if (iVar6 == 0) goto LAB_14046d870;
                    goto LAB_14046d8a9;
                }
                *(undefined4 *)(param_1 + 0x1354) = 1;
            }
            LAB_14046da99:
            if (((*(int *)(param_1 + 0x135c) != 0) && (*(int *)(param_1 + 0x1354) == 0)) &&
                (fVar20 = *(float *)(param_1 + 0x1370) - *(float *)(param_1 + 0x1140),
                        fVar21 = *(float *)(param_1 + 0x1374) - *(float *)(param_1 + 0x1144),
                        DAT_140c3c7a8 <= fVar20 * fVar20 + fVar21 * fVar21 + 0.0)) {
                *(undefined4 *)(param_1 + 0x1354) = 1;
                *(undefined4 *)(param_1 + 0x1360) = *(undefined4 *)(param_1 + 0x1140);
                *(undefined4 *)(param_1 + 0x1364) = *(undefined4 *)(param_1 + 0x1144);
                *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1148);
                *(undefined4 *)(param_1 + 0x136c) = *(undefined4 *)(param_1 + 0x114c);
            }
        }
    }
    local_d0 = (ulonglong)(uint)local_d0;
    dVar1 = (double)(**(code **)(DAT_140c77890 + 0x30))();
    local_e0 = 0x3f800000;
    local_d0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_e4 = (int)(dVar1 * 65536.0);
    local_res20[0] = 0;
    if ((DAT_140dc2ec8 & 1) == 0) {
        DAT_140dc2ec8 = DAT_140dc2ec8 | 1;
        lVar11 = FUN_140200220();
        DAT_140dc2ecc = uVar18;
        if (lVar11 != 0) {
            DAT_140dc2ecc = *(uint *)(lVar11 + 4);
        }
        uVar15 = (ulonglong)local_d4;
    }
    switch(*(undefined4 *)(param_1 + 0x1344)) {
        case 0:
            local_e8 = FUN_14046ee00(param_1);
            break;
        case 1:
            local_e8 = FUN_14046ef40(param_1);
            break;
        case 2:
            local_e8 = FUN_14046f080(param_1);
            break;
        case 3:
            local_e8 = 0x64b;
            break;
        case 4:
            local_e8 = 0x1526;
            *(undefined4 *)(param_1 + 0x14c0) = 0;
            break;
        case 5:
            local_e8 = 0x1527;
            break;
        case 6:
            local_e8 = 0x1cff;
            break;
        case 7:
            local_e8 = 0x1d02;
            break;
        case 8:
            local_e8 = 0x1dfa;
            break;
        case 9:
            local_e8 = 0x1d00;
            break;
        case 10:
            local_e8 = 0x1d01;
            break;
        case 0xb:
            local_e8 = 0x1d03;
            break;
        case 0xc:
            local_e8 = 0x1d06;
            break;
        case 0xd:
            local_e8 = 0x1dfb;
            break;
        case 0xe:
            local_e8 = 0x1d04;
            break;
        case 0xf:
            local_e8 = 0x1d05;
            break;
        case 0x10:
            local_e8 = 0x19fc;
            break;
        case 0x11:
            local_e8 = 0x19fd;
            break;
        case 0x12:
            local_e8 = 0x19f6;
            break;
        case 0x13:
            local_e8 = 0x19f9;
            break;
        case 0x14:
            local_e8 = 0x1560;
            if (uVar5 != 0x14) {
                local_d4 = (uint)uVar15 | 3;
            }
            break;
        case 0x15:
        case 0x17:
        case 0x29:
            local_e8 = 0xa7;
            break;
        case 0x16:
            local_e8 = 0xa6;
            break;
        case 0x18:
            local_e8 = 0x9f;
            break;
        case 0x19:
            local_e8 = 0x1e7a;
            break;
        case 0x1a:
            local_e8 = 0xa0;
            break;
        case 0x1b:
            local_e8 = 0x10a;
            break;
        case 0x1c:
            local_e8 = 0x1e7b;
            break;
        case 0x1d:
        case 0x20:
            local_e8 = 0x1df9;
            break;
        case 0x1e:
            local_e8 = 0x1eac;
            break;
        case 0x1f:
            local_e8 = 0x1eb7;
            break;
        case 0x21:
            local_e8 = 0x1e7d;
            break;
        case 0x22:
            local_e8 = 0x1e7c;
            break;
        case 0x23:
            local_e8 = 0x1e99;
            break;
        case 0x24:
        case 0x25:
        case 0x26:
            local_e8 = FUN_14046ecc0(param_1);
            break;
        case 0x27:
            local_e8 = FUN_14046e720(param_1,(longlong)&local_e0 + 4,local_res20);
            break;
        case 0x28:
            local_e8 = FUN_14046e720(param_1,(longlong)&local_e0 + 4,local_res20);
            if (local_e8 == 0x96) {
                if (*(int *)(param_1 + 0x1390) == 0) {
                    if (*(int *)(param_1 + 0x1300) == 0) {
                        local_d0 = local_d0 & 0xffffffff | (ulonglong)DAT_140dc2ecc << 0x20;
                    }
                    else {
                        local_e8 = 0x22c;
                    }
                }
                else {
                    local_e8 = 0x152b;
                }
            }
            break;
        case 0x2b:
            local_e8 = 0x536;
    }
    uVar4 = FUN_140467e40(param_1);
    local_68 = uVar4;
    if (*(int *)(param_1 + 0x1354) == 0) {
        if (*(int *)(param_1 + 0x1358) != 0) {
            _local_88 = CONCAT88(0x3f800000,SUB168(_local_88,0));
            local_78 = 0.0;
            uStack116 = 0;
            uStack112 = 0;
            uStack108 = 0;
            puVar16 = (undefined8 *)local_88;
            goto LAB_14046deb2;
        }
    }
    else if (*(int *)(param_1 + 0x135c) == 0) {
        if ((((local_e8 == 0xa0) || (local_e8 == 0x1d05)) || (local_e8 == 0x1df5)) ||
            (local_e8 - 0x1df7U < 4)) {
            local_a8 = 0;
            local_a0 = 0x3f800000;
            local_98 = 0;
            local_90 = 0;
            puVar16 = &local_a8;
        }
        else {
            local_c8 = 0;
            uStack192 = 0x3f800000;
            local_b8 = 0.0;
            uStack180 = 0;
            local_b0 = 0;
            uStack172 = 0;
            uVar5 = FUN_14046e720(param_1,(longlong)&uStack192 + 4,local_88);
            local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)uVar5;
            uVar5 = FUN_1404705d0(param_1,uVar5,uVar4);
            local_b8 = 5.044674e-44;
            puVar16 = &local_c8;
            local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong)uVar5;
        }
        LAB_14046deb2:
        (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                (*(longlong **)(param_1 + 0x16e8),8,puVar16);
    }
    plVar14 = (longlong *)FUN_1403d90d0(DAT_140c65898);
    if ((((plVar14 != (longlong *)0x0) && (iVar6 = (**(code **)(*plVar14 + 0x20))(), iVar6 != 0)) &&
         ((plVar14[0x17] != 0 &&
           ((*(longlong *)(param_1 + 0xf00) != 0 && (uVar5 = *(uint *)(plVar14[0x17] + 4), uVar5 < 9))))
         )) && ((0x10aU >> (uVar5 & 0x1f) & 1) != 0)) {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0xf00) + 0x1328);
        if (fVar27 <= fVar20) {
            uVar4 = 0xa5;
            if (uVar5 == 8) {
                uVar4 = 0x10c;
            }
            _local_88 = ZEXT816(0x3f800000) << 0x40;
            uStack116 = 0x11;
            uStack112 = 0;
            puVar16 = (undefined8 *)local_88;
            _local_88 = CONCAT124(_auStack132,uVar4);
            local_78 = fVar20;
        }
        else {
            uVar7 = 0xa4;
            if (uVar5 == 8) {
                uVar7 = 0x10b;
            }
            uStack192 = 0x3f800000;
            uStack180 = 0x11;
            local_b0 = 0;
            local_c8 = (ulonglong)uVar7;
            puVar16 = &local_c8;
            local_b8 = fVar20;
        }
        (**(code **)(**(longlong **)(param_1 + 0x16e8) + 600))
                (*(longlong **)(param_1 + 0x16e8),5,puVar16);
        FUN_1400518a0(DAT_140c63628,0x7c,2);
        if (*(longlong **)(param_1 + 0x1588) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x1588) + 0x50))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x178))();
    }
    iVar6 = local_e8;
    if ((*(int *)(param_1 + 0x1b8) == 10) || (*(int *)(param_1 + 0x1bc) == 10)) {
        uVar18 = 1;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1088);
    uVar9 = FUN_14047bba0(param_1);
    local_e8 = FUN_1401db470(iVar6,uVar4,uVar9,local_68,uVar18,local_88);
    piVar10 = (int *)(**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
            (*(longlong **)(param_1 + 0x16e8),local_e8,local_e4);
    iVar8 = local_res8[0];
    iVar3 = 0x2b;
    if (((*(uint *)(local_60 + 0x1070) & 0x3000) == 0) &&
        ((*(uint *)(local_60 + 0x1070) & 0x18000) == 0)) {
        if (local_res8[0] == 0) {
            local_d8 = 2;
            if ((*(int *)(param_1 + 0x1344) == 0x26) && (*(int *)(param_1 + 0x12fc) == 0)) {
                local_e0 = CONCAT44(local_e0._4_4_,0xbf800000);
            }
            iVar3 = local_d8;
            if ((fVar27 != (float)piVar10[7]) && (local_d4 = 4, param_2 == 0)) {
                local_d4 = 0xc;
            }
        }
        else {
            if (local_d8 == 0) {
                local_d8 = 1;
            }
            else {
                iVar3 = local_d8;
                if (local_d8 != 1) goto LAB_14046e11a;
            }
            iVar3 = local_d8;
            if ((*(int *)(param_1 + 0x1088) == 1) && (piVar10[3] == 1)) {
                iVar3 = 2;
            }
        }
    }
    LAB_14046e11a:
    local_d8 = iVar3;
    if ((((float)local_e8 != local_88) && ((float)*piVar10 != local_88)) && (*piVar10 != 0x96)) {
        if (local_d8 == 1) {
            local_d8 = 0x22;
        }
        else if (local_d8 == 2) {
            local_d8 = 0x23;
        }
    }
    if (*(int *)(param_1 + 0x14c0) != 0) {
        local_d4 = local_d4 | 8;
        *(undefined4 *)(param_1 + 0x14c0) = 0;
    }
    if ((param_3 != 0) &&
        ((((param_3 - 9U & 0xfffffffd) == 0 || (local_d8 == 1)) || (local_d8 == 0x22)))) {
        local_d4 = local_d4 | 3;
    }
    if (((local_e0._4_4_ == 0) || (local_res20[0] == 0)) || (piVar10[5] == 0)) {
        local_e0 = local_e0 & 0xffffffff;
    }
    else {
        local_e0 = local_e0 & 0xffffffff | (ulonglong)(local_e0._4_4_ % (uint)piVar10[5]) << 0x20;
    }
    if (*(int *)(param_1 + 0x1c4) != 0) {
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + piVar10[5];
    }
    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
            (*(longlong **)(param_1 + 0x16e8),0,&local_e8);
    *(int *)(param_1 + 0x1380) = piVar10[3];
    *(uint *)(param_1 + 0x1384) = piVar10[1] & 0x10;
    if (*(int *)(param_1 + 0x12e0) != 0) {
        fVar20 = (float)(*(uint *)(param_1 + 0x12c8) & 0x7fffffff);
        if (fVar27 == *(float *)(param_1 + 0x12d4)) {
            *(undefined4 *)(param_1 + 0x1310) = 0;
        }
        if ((1.570796 < fVar20) || (2.0 < *(float *)(param_1 + 0x12d8))) {
            *(undefined4 *)(param_1 + 0x1310) = 1;
        }
        if (((((*(int *)(param_1 + 0x1314) != 0) || (fVar20 < 1e-05)) || (iVar8 == 0)) ||
             ((*(int *)(param_1 + 0x36e4) != 0 || (lVar11 = FUN_1404695e0(param_1), lVar11 != 0)))) ||
            ((*(longlong *)(DAT_140c65898 + 0x6490) == param_1 && (*(int *)(DAT_140c65898 + 0x6360) != 0)
            ))) {
            *(undefined4 *)(param_1 + 0x1310) = 0;
        }
        if (*(int *)(param_1 + 0x1310) == 0) {
            local_a8 = 0;
            local_a0 = 0x3f800000;
            local_98 = 0;
            local_90 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                    (*(longlong **)(param_1 + 0x16e8),7,&local_a8);
            *(undefined4 *)(param_1 + 0x12d4) = 0;
        }
        else if (fVar27 == *(float *)(param_1 + 0x12d4)) {
            if ((*(int *)(param_1 + 0x1088) == 0) && (iVar8 = FUN_140482370(param_1), iVar8 == 0)) {
                iVar8 = (fVar27 < *(float *)(param_1 + 0x12c8) || fVar27 == *(float *)(param_1 + 0x12c8)) +
                        0x25e;
                uVar4 = FUN_1401ae6a0(0,0xffff);
                lVar11 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x1a8))
                        (*(longlong **)(param_1 + 0x16e8),iVar8,uVar4);
                local_a8 = CONCAT44(uVar4,iVar8);
                local_a0 = 0x3f800000;
                local_98 = 0xe;
                local_90 = 0;
                *(float *)(param_1 + 0x12d4) = (float)(ulonglong)*(uint *)(lVar11 + 0x14) * 0.001;
                (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                        (*(longlong **)(param_1 + 0x16e8),7,&local_a8);
            }
            else {
                local_a8 = 0;
                local_a0 = 0x3f800000;
                local_98 = 0;
                local_90 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))
                        (*(longlong **)(param_1 + 0x16e8),7,&local_a8);
                *(undefined4 *)(param_1 + 0x12d4) = 0x3e19999a;
            }
        }
    }
    if (((*(int *)(param_1 + 0x80) == 4) || (*(int *)(param_1 + 0x80) == 0x1e)) &&
        (plVar14 = *(longlong **)(param_1 + 0x16f8), plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x128))(plVar14,*(int *)(param_1 + 0x1b8) == 3);
    }
    plVar14 = *(longlong **)(param_1 + 0x16f0);
    if ((plVar14 != (longlong *)0x0) ||
        (plVar14 = *(longlong **)(param_1 + 0x16f8), plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x130))(plVar14,iVar6);
    }
    return;
}
