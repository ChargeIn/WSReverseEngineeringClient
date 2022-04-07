//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1405698c0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    FUN_1407e4830(param_2,0,0x28);
    lVar1 = FUN_140236e00();
    lVar2 = FUN_1402369c0();
    lVar3 = FUN_14023cfc0();
    if (((param_2 != (undefined4 *)0x0) && (lVar1 != 0)) && (lVar2 != 0)) {
        param_2[2] = *(undefined4 *)(lVar2 + 4);
        param_2[1] = *(undefined4 *)(lVar2 + 0x10);
        *param_2 = *(undefined4 *)(lVar2 + 0xc);
        param_2[3] = *(undefined4 *)(lVar2 + 8);
        param_2[4] = *(undefined4 *)(lVar2 + 0x14);
        param_2[5] = *(undefined4 *)(lVar1 + 0x34);
        if (lVar3 != 0) {
            param_2[6] = *(uint *)(lVar3 + 4) & 8;
            param_2[7] = *(uint *)(lVar3 + 4) & 0x20;
            param_2[8] = *(uint *)(lVar3 + 4) & 0x40;
            param_2[9] = *(uint *)(lVar3 + 4) & 0x80;
        }
    }
    return;
}



void FUN_140569980(longlong param_1)

{
    if (*(char *)(param_1 + 0x38) != '\0') {
        FUN_14018b900(*(undefined8 *)(param_1 + 0x40));
    }
    FUN_140195d70(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
    }
    if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68) = *(undefined8 *)(param_1 + 0x68);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
}



undefined8 FUN_140569a20(longlong param_1)

{
    if (((((*(byte *)(param_1 + 0x150) & 8) != 0) && ((*(byte *)(param_1 + 0x154) & 4) == 0)) &&
         ((*(byte *)(param_1 + 0x14c) & 0xc0) == 0)) &&
        ((*(int *)(param_1 + 0x1a8) == 0 && (*(int *)(param_1 + 0x1b0) == 0)))) {
        return 1;
    }
    return 0;
}



undefined8 * FUN_140569a60(undefined8 *param_1)

{
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 300;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    *param_1 = &PTR_LAB_140b6c7b0;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x84) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x8c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1f] = 1;
    param_1[0x22] = 1;
    param_1[0x1e] = 0;
    param_1[0x1f] = 1;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x22] = 1;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x13] = 0x3f8000003f800000;
    param_1[0x14] = 0x3f8000003f800000;
    *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    return param_1;
}



undefined8 FUN_140569bc0(undefined8 param_1,ulonglong param_2)

{
    FUN_140569c00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140569c00(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b6c7b0;
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9],0);
    }
    if (param_1[10] != 0) {
        FUN_14018b900(param_1[10],0);
    }
    if (param_1[0xc] != 0) {
        FUN_14018b900(param_1[0xc],0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd],0);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb],0);
    }
    lVar1 = param_1[0x25];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b783c0;
    return;
}



ulonglong FUN_140569c90(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = FUN_140569d30();
    uVar2 = uVar1;
    if (-1 < (int)uVar1) {
        if ((*(char *)(param_2 + 0x74) != '\0') || (*(int *)(param_2 + 0x70) != 0)) {
            FUN_14056aa20(param_1,*(undefined4 *)(param_2 + 0x70),*(char *)(param_2 + 0x74),
                          *(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x28));
        }
        if (*(char *)(param_2 + 0x80) != '\0') {
            FUN_14056aba0(param_1,*(char *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x88),
                          *(undefined4 *)(param_2 + 0x30));
        }
        uVar2 = uVar1 & 0xffffffff;
        if (*(char *)(param_2 + 0x90) != '\0') {
            FUN_14056ac90(param_1,*(char *)(param_2 + 0x90),*(undefined8 *)(param_2 + 0x98),
                          *(undefined4 *)(param_2 + 0x54));
        }
    }
    return uVar2;
}



undefined8 FUN_140569d30(longlong param_1,undefined8 *param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    uint *puVar5;
    uint *puVar6;

    if (((*(int *)((longlong)param_2 + 0x14) < 300) && (*(uint *)(param_2 + 3) != 0xffffffff)) &&
        ((*(int *)((longlong)param_2 + 0x14) != 0 || (*(uint *)(param_2 + 3) < 0x1f)))) {
        lVar4 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_2 + 2));
        *(longlong *)(param_1 + 0x40) = lVar4;
        if (lVar4 != 0) {
            *(undefined8 *)(param_1 + 0x70) = param_2[1];
            *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x1c);
            *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 4);
            *(uint *)(param_1 + 0x80) = (uint)*(byte *)(param_2 + 9);
            *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 8);
            *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x44);
            *(undefined8 *)(param_1 + 0xb0) = param_2[5];
            *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 6);
            *(undefined8 *)(param_1 + 0xe0) = param_2[7];
            *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x14);
            *(undefined8 *)(param_1 + 0xf0) = 0;
            *(undefined8 *)(param_1 + 0xf8) = 0xf;
            *(undefined8 *)(param_1 + 0x100) = 0;
            *(undefined8 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x110) = 0xf;
            *(undefined8 *)(param_1 + 0x118) = 0;
            if (*(int *)((longlong)param_2 + 0x4c) != 0) {
                puVar6 = (uint *)((longlong)param_2 + 0x5c);
                puVar5 = (uint *)(param_1 + 0x104);
                lVar4 = 2;
                do {
                    uVar1 = puVar6[-1];
                    if (uVar1 == 1) {
                        puVar5[-3] = 0xf;
                        *puVar5 = 0;
                        *(ulonglong *)(puVar5 + -5) = (ulonglong)*puVar6;
                        puVar5[-1] = puVar6[1];
                    }
                    else if (uVar1 == 2) {
                        uVar1 = puVar6[1];
                        *puVar5 = 0;
                        puVar5[-3] = uVar1;
                        uVar1 = *puVar6;
                        puVar5[-1] = 0;
                        *(ulonglong *)(puVar5 + -5) = (ulonglong)uVar1;
                    }
                    else if (uVar1 == 3) {
                        puVar5[-3] = 0xf;
                        *puVar5 = puVar6[1];
                        uVar1 = *puVar6;
                        puVar5[-1] = 0;
                        *(ulonglong *)(puVar5 + -5) = (ulonglong)uVar1;
                    }
                    puVar6 = puVar6 + 3;
                    puVar5 = puVar5 + 6;
                    lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
                iVar2 = *(int *)((longlong)param_2 + 0x4c);
                iVar3 = FUN_14018cdf0();
                *(int *)(param_1 + 0xec) = iVar3 + iVar2;
            }
            iVar2 = *(int *)(param_2 + 10);
            if (iVar2 != 0) {
                iVar3 = FUN_14018cdf0();
                *(int *)(param_1 + 0x120) = iVar3 + iVar2;
            }
            FUN_14056a430(param_1);
            *(undefined8 *)(param_1 + 0x18) = *param_2;
            *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x14);
            return 0;
        }
    }
    return 0x80004005;
}



ulonglong FUN_140569f10(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar3 = *(uint *)(param_1 + 0x84);
    iVar1 = 0x3f800000;
    if ((int)(uVar3 ^ 0x3f800000) < 0) {
        iVar1 = 0x40800000;
    }
    uVar4 = (int)(iVar1 - uVar3) >> 0x1f;
    if ((int)((iVar1 - uVar3 ^ uVar4) - uVar4) < 0x55) {
        return 0;
    }
    uVar2 = FUN_1403b5400(uVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    if ((uint)uVar2 == 0) {
        return uVar2;
    }
    fVar5 = *(float *)(param_1 + 0x84);
    iVar1 = 0;
    if ((int)fVar5 < 0) {
        iVar1 = -0x80000000;
    }
    uVar3 = iVar1 - (int)fVar5;
    if (0x54 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
        uVar3 = FUN_1403b5400(uVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                              *(undefined8 *)(param_1 + 0x40),
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (uVar3 != 0) {
            uVar3 = (uint)(longlong)((float)(ulonglong)uVar3 * fVar5 + 0.5);
            if (uVar3 == 0) {
                uVar3 = 1;
            }
            goto LAB_14056a010;
        }
    }
    uVar3 = 0;
    LAB_14056a010:
    return (ulonglong)(uVar3 < (uint)uVar2);
}



undefined8 FUN_14056a030(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x40) + 0x9c;
    }
    if (*(int *)(lVar1 + 0x80) != 0) {
        uVar2 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar1 + 0x80),*(undefined8 *)(DAT_140c65898 + 0x78)
        );
        return uVar2;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014056a1f3)

ulonglong FUN_14056a070(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined4 uVar6;
    bool bVar7;
    undefined8 in_stack_ffffffffffffff98;
    undefined4 uVar8;

    uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x40) + 0x9c;
    }
    if ((*(int *)(lVar2 + 0x80) != 0) &&
        (lVar3 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar2 + 0x80),
                               *(undefined8 *)(DAT_140c65898 + 0x78)), lVar2 = DAT_140c65898,
                lVar3 != 0)) {
        lVar4 = *(longlong *)(param_1 + 0x40);
        if (((*(uint *)(lVar4 + 0x154) & 0x400) == 0) || (*(int *)(lVar4 + 0x180) == 0)) {
            bVar7 = true;
        }
        else {
            bVar7 = *(int *)(param_1 + 0x20) == 0;
        }
        if (((*(uint *)(lVar4 + 0x154) & 0x200) != 0) || (bVar7)) {
            if (param_3 == 1) {
                if (*(int *)(*(longlong *)(lVar3 + 0x70) + 0x7c) != 6) {
                    return 0x5b;
                }
                lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0,param_4);
                if (lVar4 == 0) {
                    return 0x5a;
                }
                uVar6 = *(undefined4 *)(*(longlong *)(lVar2 + 0x78) + 8);
            }
            else {
                uVar6 = 0;
                if ((param_3 == 2) && (uVar6 = 0, param_4 != (undefined4 *)0x0)) {
                    uVar6 = *param_4;
                }
            }
            if (param_2 == 0) {
                FUN_14055bdc0(lVar2,*(undefined8 *)(lVar2 + 0x78),lVar3,1,CONCAT44(uVar8,uVar6));
                uVar1 = FUN_1403986f0();
                return (ulonglong)uVar1;
            }
            FUN_14055bdc0(lVar2,*(undefined8 *)(lVar2 + 0x78),lVar3,1,CONCAT44(uVar8,uVar6));
            uVar5 = FUN_1403986f0();
            return uVar5;
        }
    }
    return 4;
}



int FUN_14056a260(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int *piVar3;
    int iVar4;
    uint uVar5;

    lVar1 = *(longlong *)(param_1 + 0x48);
    iVar4 = 0;
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x40) + 8;
    }
    uVar5 = 8;
    if (*(uint *)(lVar1 + 0x130) < 8) {
        uVar5 = *(uint *)(lVar1 + 0x130);
    }
    if (uVar5 != 0) {
        piVar3 = (int *)(param_1 + 0xbc);
        uVar2 = (ulonglong)uVar5;
        do {
            if (param_2 == *piVar3) {
                iVar4 = iVar4 + 1;
            }
            piVar3 = piVar3 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return iVar4;
}



undefined8 FUN_14056a2b0(longlong param_1,int *param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    longlong lVar4;

    lVar4 = DAT_140c65898;
    iVar1 = FUN_1403a6930();
    if ((iVar1 == 0) ||
        (((*(int *)(param_1 + 0x20) == 0 && (*(int *)(param_1 + 0x24) - 0x11U < 4)) ||
          ((char)*(uint *)(param_1 + 0x80) < '\0')))) {
        return 0;
    }
    if ((param_3 == 0) ||
        (((*(uint *)(*(longlong *)(param_1 + 0x40) + 0x14c) & 0x40000) == 0 &&
          ((*(uint *)(param_1 + 0x80) & 0x40) == 0)))) {
        iVar1 = FUN_14056a3f0();
        if (iVar1 != 0) {
            iVar1 = FUN_140569a20(*(undefined8 *)(param_1 + 0x40));
            if (iVar1 == 0) {
                return 0;
            }
            iVar1 = FUN_14056b0a0(param_1);
            if (iVar1 == 0) {
                return 0;
            }
            uVar3 = 0;
            if (*(ulonglong *)(param_1 + 0x130) == 0) {
                return 0;
            }
            piVar2 = *(int **)(param_1 + 0x128);
            while ((*piVar2 != *param_2 || (*(longlong *)(piVar2 + 2) != *(longlong *)(param_2 + 2)))) {
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 4;
                if (*(ulonglong *)(param_1 + 0x130) <= uVar3) {
                    return 0;
                }
            }
            return 1;
        }
        lVar4 = *(longlong *)(lVar4 + 0x78);
        if ((*(int *)(*(longlong *)(param_1 + 0x40) + 0x1c8) != 0) &&
            (iVar1 = FUN_1403a69b0(), iVar1 == 0)) {
            return 0;
        }
        if (((*param_2 != 0) && (*(longlong *)(param_2 + 2) != 0)) && (lVar4 != 0)) {
            if ((*(int *)(lVar4 + 0x80) == 0x14) || (*(int *)(lVar4 + 0x80) == 0x17)) {
                iVar1 = *(int *)(lVar4 + 0x1a0);
            }
            else {
                iVar1 = 0;
            }
            if (*param_2 != iVar1) {
                return 0;
            }
        }
    }
    return 1;
}



uint FUN_14056a3f0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (((((*(byte *)(lVar1 + 0x150) & 8) == 0) && ((*(byte *)(lVar1 + 0x14c) & 0xc0) == 0)) &&
         (*(int *)(lVar1 + 0x1a8) == 0)) && ((*(uint *)(lVar1 + 0x154) & 0x80) != 0)) {
        return *(uint *)(param_1 + 0x80) & 1;
    }
    return 1;
}



void FUN_14056a430(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    byte *pbVar3;
    longlong lVar4;
    byte bVar5;
    int iVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined auStack536 [32];
    undefined8 local_1f8;
    undefined8 local_1f0;
    undefined **local_1e8;
    undefined8 local_1e0;
    LPVOID local_1d8;
    undefined8 local_1d0;
    undefined **local_1c8;
    undefined8 local_1c0;
    LPVOID local_1b8;
    undefined **local_1a8;
    undefined4 local_1a0;
    undefined8 local_198;
    undefined8 local_190;
    undefined8 local_188;
    undefined8 local_180;
    undefined8 local_178;
    undefined8 local_170;
    undefined8 local_168;
    undefined4 local_160;
    undefined local_158 [16];
    undefined4 local_148;
    longlong local_140;
    undefined8 local_138;
    undefined8 local_12c;
    undefined4 local_124;
    undefined8 local_120;
    undefined8 local_118;
    undefined8 local_110;
    undefined local_108 [16];
    undefined8 local_f8;
    undefined4 local_dc;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    longlong local_40;
    uint local_38;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    if (((((((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x14c) & 8) != 0) ||
            (*(int *)(param_1 + 0x90) != 0)) || (*(int *)(param_1 + 0x94) != 0)) ||
          ((*(longlong *)(param_1 + 0xb0) != 0 || (*(int *)(param_1 + 0xb8) != 0)))) ||
         ((*(int *)(param_1 + 0xdc) != 0 ||
           ((*(longlong *)(param_1 + 0xe0) != 0 || (*(int *)(param_1 + 0x124) != 0)))))) ||
        (*(int *)(param_1 + 0xe8) != 0)) {
        puVar10 = (undefined8 *)0x0;
        if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar7 = FUN_14018b280();
            puVar8 = puVar10;
            if (lVar7 != 0) {
                puVar8 = (undefined8 *)FUN_1400b52a0();
            }
            *(undefined8 **)(param_1 + 0x48) = puVar8;
        }
        if (*(longlong *)(param_1 + 0x50) == 0) {
            puVar9 = (undefined8 *)FUN_14018b280();
            puVar8 = puVar10;
            if (puVar9 != (undefined8 *)0x0) {
                FUN_1407e4830(puVar9,0,0x90);
                FUN_1407e4830(puVar9,0,400);
                FUN_1407e4830(puVar9,0,0x90);
                *puVar9 = 0xc5000000c5;
                puVar9[1] = 0xc5000000c5;
                puVar9[2] = 0xc5000000c5;
                puVar9[3] = 0xc5000000c5;
                puVar9[4] = 0xc5000000c5;
                puVar9[5] = 0xc5000000c5;
                puVar9[6] = 0xc5000000c5;
                *(undefined4 *)(puVar9 + 7) = 0xc5;
                puVar8 = puVar9;
            }
            *(undefined8 **)(param_1 + 0x50) = puVar8;
        }
        if (*(longlong *)(param_1 + 0x60) == 0) {
            puVar9 = (undefined8 *)FUN_14018b280();
            puVar8 = puVar10;
            if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = 0;
                puVar9[1] = 0;
                puVar8 = puVar9;
            }
            *(undefined8 **)(param_1 + 0x60) = puVar8;
        }
        if (*(longlong *)(param_1 + 0x68) == 0) {
            puVar9 = (undefined8 *)FUN_14018b280();
            puVar8 = puVar10;
            if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = 0;
                puVar8 = puVar9;
            }
            *(undefined8 **)(param_1 + 0x68) = puVar8;
        }
        if (*(longlong *)(param_1 + 0x58) == 0) {
            puVar8 = (undefined8 *)FUN_14018b280();
            if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
                *(undefined4 *)(puVar8 + 1) = 1;
                puVar10 = puVar8;
            }
            *(undefined8 **)(param_1 + 0x58) = puVar10;
        }
        lVar7 = *(longlong *)(param_1 + 0x48);
        FUN_1407e4830(lVar7,0,0x138);
        FUN_1407e4830((undefined8 *)(lVar7 + 0x94),0,0x90);
        *(undefined8 *)(lVar7 + 0x94) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0x9c) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0xa4) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0xac) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0xb4) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0xbc) = 0xc5000000c5;
        *(undefined8 *)(lVar7 + 0xc4) = 0xc5000000c5;
        *(undefined4 *)(lVar7 + 0xcc) = 0xc5;
        uVar1 = *(uint *)(param_1 + 0xdc);
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        *puVar10 = 0;
        puVar10[1] = 0;
        *(byte *)((longlong)puVar10 + 9) = (byte)uVar1 & 7;
        *(byte *)(puVar10 + 1) = (byte)(uVar1 >> 3) & 7;
        *(uint *)((longlong)puVar10 + 0xc) = uVar1 >> 6 & 1;
        *(byte *)puVar10 = (byte)(uVar1 >> 7) & 7;
        *(byte *)((longlong)puVar10 + 1) = (byte)(uVar1 >> 10) & 7;
        *(byte *)((longlong)puVar10 + 2) = (byte)(uVar1 >> 0xd) & 7;
        *(byte *)((longlong)puVar10 + 3) = (byte)(uVar1 >> 0x10) & 7;
        *(byte *)((longlong)puVar10 + 4) = (byte)(uVar1 >> 0x13) & 7;
        *(byte *)((longlong)puVar10 + 5) = (byte)(uVar1 >> 0x16) & 7;
        bVar5 = (byte)(uVar1 >> 0x18);
        *(byte *)((longlong)puVar10 + 6) = bVar5 >> 1 & 7;
        *(byte *)((longlong)puVar10 + 7) = bVar5 >> 4 & 7;
        uVar2 = *(ulonglong *)(param_1 + 0xe0);
        pbVar3 = *(byte **)(param_1 + 0x68);
        *pbVar3 = (byte)uVar2 & 0xf;
        *(ushort *)(pbVar3 + 2) = (ushort)(uVar2 >> 4) & 0x3ff;
        *(ushort *)(pbVar3 + 4) = (ushort)(uVar2 >> 0xe) & 0x3ff;
        *(ushort *)(pbVar3 + 6) = (ushort)(uVar2 >> 0x18) & 0x3ff;
        lVar7 = *(longlong *)(param_1 + 0xb0);
        lVar4 = *(longlong *)(param_1 + 0x40);
        puVar10 = *(undefined8 **)(param_1 + 0x58);
        if (lVar7 == 0) {
            *puVar10 = 0;
            *(undefined4 *)(puVar10 + 1) = 1;
            if ((lVar4 != 0) && (*(int *)(lVar4 + 0x140) - 1U < 2)) {
                *(undefined4 *)(puVar10 + 1) = 0;
            }
        }
        else {
            *(char *)puVar10 = (char)lVar7;
            *(char *)((longlong)puVar10 + 1) = (char)((ulonglong)lVar7 >> 8);
            *(char *)((longlong)puVar10 + 2) = (char)((ulonglong)lVar7 >> 0x10);
            *(char *)((longlong)puVar10 + 3) = (char)((ulonglong)lVar7 >> 0x18);
            *(char *)((longlong)puVar10 + 4) = (char)((ulonglong)lVar7 >> 0x20);
            *(char *)((longlong)puVar10 + 5) = (char)((ulonglong)lVar7 >> 0x28);
            *(char *)((longlong)puVar10 + 6) = (char)((ulonglong)lVar7 >> 0x30);
            *(uint *)(puVar10 + 1) = (uint)(byte)((ulonglong)lVar7 >> 0x38);
        }
        local_1a0 = 0;
        local_198 = 0;
        local_158 = ZEXT816(0);
        local_108 = ZEXT816(0);
        local_38 = (uint)(*(int *)(param_1 + 0x20) == 0);
        local_190 = 1;
        local_12c = 0;
        local_118 = 0;
        local_110 = 0;
        local_1a8 = &PTR_FUN_140b6c7a0;
        local_188 = 0;
        local_180 = 0;
        local_178 = 0;
        local_40 = DAT_140c65898;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_124 = 1;
        local_120 = 0;
        local_f8 = 0;
        local_dc = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        puVar10 = (undefined8 *)FUN_140445320(&local_1c8,*(undefined4 *)(param_1 + 0xe8));
        local_198 = *(undefined8 *)(param_1 + 0x40);
        local_1f0 = 0;
        local_190 = *puVar10;
        local_1f8 = 0;
        local_188 = puVar10[1];
        local_180 = puVar10[2];
        local_178 = puVar10[3];
        local_168 = CONCAT44(1,*(undefined4 *)(param_1 + 0x90));
        local_160 = *(undefined4 *)(param_1 + 0x94);
        local_158 = CONCAT88(*(undefined8 *)(param_1 + 0x58),param_1 + 0x98);
        local_170 = *(undefined8 *)(param_1 + 0x68);
        local_148 = *(undefined4 *)(param_1 + 0xb8);
        local_140 = param_1 + 0xbc;
        local_138 = *(undefined8 *)(param_1 + 0x60);
        iVar6 = FUN_14040c310(&local_1a8,*(undefined8 *)(param_1 + 0x48),DAT_140c658f0,
                              *(undefined8 *)(param_1 + 0x50));
        if (iVar6 == 0) {
            *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
        }
        else {
            local_1e0 = 0;
            local_1e8 = &PTR_LAB_140b5e648;
            local_1d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_1e8);
            local_1c8 = local_1e8;
            local_1d0 = 0x141e19018;
            local_1b8 = local_1d8;
            local_1c0 = local_1e0;
            iVar6 = FUN_1401971e0(&DAT_140c8af2c,0x1c,&local_1d0,&local_1c8);
            local_1e8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_1d8);
            if (iVar6 != 0) {
                DebugBreak();
            }
            FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
            *(undefined8 *)(param_1 + 0x48) = 0;
            FUN_14018b900(*(undefined8 *)(param_1 + 0x50),0);
            *(undefined8 *)(param_1 + 0x50) = 0;
            FUN_14018b900(*(undefined8 *)(param_1 + 0x60),0);
            *(undefined8 *)(param_1 + 0x60) = 0;
            FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
            *(undefined8 *)(param_1 + 0x68) = 0;
            FUN_14018b900(*(undefined8 *)(param_1 + 0x58),0);
            *(undefined8 *)(param_1 + 0x58) = 0;
        }
        *(undefined4 *)(param_1 + 0x124) = 0;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack536);
    return;
}



void FUN_14056aa20(longlong param_1,undefined4 param_2,ulonglong param_3,longlong param_4,
                   undefined8 param_5)

{
    undefined4 *puVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;

    if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar4 = FUN_14018b280(0x138);
        if (lVar4 != 0) {
            lVar4 = FUN_1400b52a0(lVar4);
        }
        *(longlong *)(param_1 + 0x48) = lVar4;
        FUN_1407e4830(lVar4);
    }
    uVar9 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = param_2;
    uVar7 = (uint)(param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x94) = uVar7;
    *(undefined8 *)(param_1 + 0xb0) = param_5;
    if (3 < (int)uVar7) {
        lVar6 = param_1 - param_4;
        uVar2 = (uVar7 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar2;
        uVar9 = uVar2 * 4;
        lVar4 = (ulonglong)uVar2 * 4;
        puVar5 = (undefined4 *)(param_4 + 4);
        do {
            puVar1 = puVar5 + 4;
            *(undefined4 *)(lVar6 + 0x84 + (longlong)puVar1) = puVar5[-1];
            *(undefined4 *)(lVar6 + 0x88 + (longlong)puVar1) = *puVar5;
            *(undefined4 *)(lVar6 + 0x8c + (longlong)puVar1) = puVar5[1];
            *(undefined4 *)(lVar6 + 0x90 + (longlong)puVar1) = puVar5[2];
            uVar8 = uVar8 - 1;
            puVar5 = puVar1;
        } while (uVar8 != 0);
    }
    if (uVar9 < uVar7) {
        uVar8 = (ulonglong)(uVar7 - uVar9);
        puVar5 = (undefined4 *)(param_4 + lVar4 * 4);
        do {
            *(undefined4 *)((longlong)puVar5 + (param_1 - param_4) + 0x98) = *puVar5;
            uVar8 = uVar8 - 1;
            puVar5 = puVar5 + 1;
        } while (uVar8 != 0);
    }
    if (uVar7 < 5) {
        puVar5 = (undefined4 *)(param_1 + ((param_3 & 0xffffffff) + 0x26) * 4);
        for (uVar8 = (ulonglong)(5 - uVar7); uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar5 = 0x3f800000;
            puVar5 = puVar5 + 1;
        }
    }
    *(undefined4 *)(param_1 + 0x124) = 1;
    iVar3 = FUN_14056a430(param_1);
    if (iVar3 < 0) {
        *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ItemModified",&DAT_1409ead24,param_1);
    }
    return;
}



void FUN_14056aba0(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar2 = FUN_14018b280(0x138,0);
        if (lVar2 != 0) {
            lVar2 = FUN_1400b52a0(lVar2);
        }
        *(longlong *)(param_1 + 0x48) = lVar2;
        FUN_1407e4830(lVar2,0,0x138);
    }
    *(uint *)(param_1 + 0xb8) = param_2;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    FUN_1407db590((undefined8 *)(param_1 + 0xbc),param_3,(ulonglong)param_2 << 2);
    *(undefined4 *)(param_1 + 0xdc) = param_4;
    *(undefined4 *)(param_1 + 0x124) = 1;
    iVar1 = FUN_14056a430(param_1);
    if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    else {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ItemModified",&DAT_1409ead24,param_1);
    }
    return;
}



void FUN_14056ac90(longlong param_1,uint param_2,undefined8 param_3,int param_4)

{
    longlong lVar1;
    int iVar2;

    FUN_1401bc800(param_1 + 0x128,param_2);
    FUN_1407db590(*(undefined8 *)(param_1 + 0x128),param_3,(ulonglong)param_2 << 4);
    iVar2 = FUN_14018cdf0();
    lVar1 = DAT_140c65898;
    *(int *)(param_1 + 0x138) = iVar2 + param_4;
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ItemModified",&DAT_1409ead24,param_1);
    return;
}



void FUN_14056ad30(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    int iVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    undefined auStack216 [32];
    undefined4 local_b8;
    longlong *local_b0;
    undefined8 local_a8;
    undefined4 local_98 [2];
    longlong local_90;
    longlong local_88;
    code *local_80;
    short local_78 [40];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    lVar6 = 0;
    if (*(longlong *)(param_1 + 0x70) == 0) {
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        puVar5 = (undefined2 *)FUN_14018b280(2,0);
        *(undefined2 **)(param_2 + 0x18) = puVar5 + 1;
        *(undefined2 **)(param_2 + 8) = puVar5;
        *(undefined2 **)(param_2 + 0x10) = puVar5;
        FUN_1407db590(puVar5,&DAT_1409f2a34,0);
        *(undefined2 **)(param_2 + 0x10) = puVar5;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
    }
    else {
        local_98[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
        local_a8 = 0;
        local_80 = FUN_140001b70;
        local_b0 = &local_88;
        local_b8 = 0x21;
        local_90 = *(longlong *)(param_1 + 0x70);
        local_88 = param_1;
        iVar4 = FUN_1403f82f0(DAT_140c65898,9,local_98,local_78);
        if (iVar4 == 0) {
            psVar8 = (short *)FUN_14034bdd0();
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            sVar2 = *psVar8;
            while (sVar2 != 0) {
                lVar6 = lVar6 + 1;
                sVar2 = psVar8[lVar6];
            }
            FUN_14001c1b0(param_2,psVar8,psVar8 + lVar6);
        }
        else {
            *(undefined8 *)(param_2 + 8) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            while (local_78[0] != 0) {
                lVar6 = lVar6 + 1;
                local_78[0] = local_78[lVar6];
            }
            lVar6 = lVar6 * 2 >> 1;
            uVar1 = lVar6 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar3 = uVar1 * 2;
                lVar7 = FUN_14018b280(lVar3,0);
                *(longlong *)(param_2 + 8) = lVar7;
                *(longlong *)(param_2 + 0x10) = lVar7;
                *(longlong *)(param_2 + 0x18) = lVar7 + lVar3;
            }
            lVar3 = *(longlong *)(param_2 + 8);
            lVar6 = lVar6 * 2;
            FUN_1407db590(lVar3,local_78,lVar6);
            puVar5 = (undefined2 *)(lVar6 + lVar3);
            *(undefined2 **)(param_2 + 0x10) = puVar5;
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack216);
    return;
}



undefined8 FUN_14056af20(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
    uint uVar1;
    undefined8 uVar2;

    if (((*(int *)(param_1 + 0x170) != 0) && ((*(byte *)(param_2 + 0x54) & 2) != 0)) &&
        (uVar1 = FUN_1403af9e0(*(longlong *)(param_1 + 0x168) + 0xa0,*param_2), 1 < uVar1)) {
        return 0;
    }
    uVar2 = FUN_14056afb0(*(undefined8 *)(param_1 + 0x168),param_2,*(undefined8 *)(param_1 + 0x10),
                          param_3,*(undefined8 *)(param_1 + 0xa0),param_4);
    return uVar2;
}



undefined8
FUN_14056afb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_1403b4710(param_1,param_2,0);
    if ((iVar1 == 0) && (iVar1 = FUN_1403b4710(param_1,param_3,param_4), iVar1 == 0)) {
        uVar2 = FUN_14040f1b0(param_2,param_3,param_4,param_5,param_6);
        return uVar2;
    }
    return 0;
}



void FUN_14056b030(longlong *param_1)

{
    undefined4 local_18 [2];
    undefined8 local_10;

    local_18[0] = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x68))(param_1,local_18,0);
    return;
}



int FUN_14056b0a0(longlong param_1)

{
    int iVar1;

    if (*(longlong *)(param_1 + 0x130) != 0) {
        iVar1 = FUN_14018cdf0();
        if (0 < *(int *)(param_1 + 0x138) - iVar1) {
            iVar1 = FUN_14018cdf0();
            return *(int *)(param_1 + 0x138) - iVar1;
        }
    }
    return 0;
}



undefined8 *
FUN_14056b0f0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
    undefined4 uVar1;
    undefined8 uVar2;

    uVar1 = *(undefined4 *)*param_2;
    *param_1 = &PTR_FUN_140b6cbd0;
    uVar2 = FUN_14018b280(0x18);
    param_1[2] = uVar2;
    *(undefined8 *)uVar2 = uVar2;
    *(undefined8 *)(param_1[2] + 8) = param_1[2];
    *(undefined4 *)(param_1 + 5) = uVar1;
    *param_1 = &PTR_FUN_140b6cae0;
    *(undefined4 *)(param_1 + 4) = param_5;
    param_1[6] = param_2;
    *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
    *(undefined4 *)(param_1 + 3) = 0;
    return param_1;
}



undefined8 FUN_14056b190(undefined8 param_1,ulonglong param_2)

{
    FUN_14056b1d0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14056b1d0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;

    *param_1 = &PTR_FUN_140b6cae0;
    plVar3 = *(longlong **)(longlong *)param_1[2];
    if (plVar3 != (longlong *)param_1[2]) {
        do {
            plVar1 = (longlong *)plVar3[2];
            (**(code **)(*plVar1 + 0x18))(plVar1);
            (**(code **)(*plVar1 + 8))(plVar1,1);
            plVar1 = (longlong *)plVar3[1];
            plVar2 = (longlong *)*plVar3;
            *plVar1 = (longlong)plVar2;
            plVar2[1] = (longlong)plVar1;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[2]);
    }
    FUN_140575b00(param_1);
    return;
}



bool FUN_14056b260(longlong param_1)

{
    longlong lVar1;

    switch(*(undefined4 *)(**(longlong **)(param_1 + 0x30) + 0xc)) {
        case 3:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x14:
        case 0x17:
        case 0x19:
        case 0x1a:
        case 0x1b:
            return true;
        case 5:
        case 6:
            lVar1 = FUN_140223380(*(undefined4 *)(**(longlong **)(param_1 + 0x30) + 0x14));
            if (lVar1 != 0) {
                return *(int *)(lVar1 + 0x10) - 1U < 2;
            }
    }
    return false;
}



void FUN_14056b2f0(longlong *param_1,int param_2)

{
    longlong *plVar1;

    if (param_2 == 0) {
        plVar1 = *(longlong **)(longlong *)param_1[2];
        if (plVar1 != (longlong *)param_1[2]) {
            do {
                (**(code **)(*(longlong *)plVar1[2] + 0x40))((longlong *)plVar1[2],0);
                plVar1 = (longlong *)*plVar1;
            } while (plVar1 != (longlong *)param_1[2]);
        }
        (**(code **)(*param_1 + 0x20))(param_1);
    }
    else {
        (**(code **)(*param_1 + 0x18))();
        plVar1 = *(longlong **)(longlong *)param_1[2];
        if (plVar1 != (longlong *)param_1[2]) {
            do {
                (**(code **)(*(longlong *)plVar1[2] + 0x40))((longlong *)plVar1[2],1);
                plVar1 = (longlong *)*plVar1;
            } while (plVar1 != (longlong *)param_1[2]);
            return;
        }
    }
    return;
}



void FUN_14056b380(longlong *param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 3) == 0) {
        iVar1 = (**(code **)(*param_1 + 0x38))();
        if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 3) = 1;
            (**(code **)(*param_1 + 0x88))(param_1,1);
            // WARNING: Could not recover jumptable at 0x00014056b3bc. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*param_1 + 0xa8))(param_1);
            return;
        }
    }
    return;
}



void FUN_14056b3d0(longlong *param_1)

{
    if (*(int *)(param_1 + 3) != 0) {
        *(undefined4 *)(param_1 + 3) = 0;
        (**(code **)(*param_1 + 0x90))(param_1,0);
        // WARNING: Could not recover jumptable at 0x00014056b3fc. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 0xb0))(param_1);
        return;
    }
    return;
}



uint FUN_14056b410(longlong *param_1)

{
    int iVar1;
    uint uVar2;

    iVar1 = (**(code **)(*param_1 + 0x38))();
    if (iVar1 != 0) {
        return 4;
    }
    switch(*(undefined4 *)(*(longlong *)param_1[6] + 0xc)) {
        case 0:
            iVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
            return (iVar1 != 0) + 2;
        default:
            return 3;
        case 2:
        case 0xe:
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            return (uVar2 & 1) * 2 | 1;
        case 4:
        case 5:
        case 6:
        case 7:
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            return uVar2 & 1 | 2;
        case 0xd:
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            return (uVar2 | 0xbfffffff) >> 0x1e;
        case 0x12:
            iVar1 = (**(code **)(*param_1 + 0xe0))(param_1);
            return (iVar1 != 0) + 2;
    }
}



void FUN_14056b530(longlong param_1)

{
    longlong lVar1;
    bool bVar2;

    lVar1 = DAT_140c65898;
    if ((DAT_140c65898 != 0) && (param_1 != 0)) {
        bVar2 = DAT_140c65b78 != 0;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        if (bVar2) {
            FUN_140575dd0();
            lVar1 = DAT_140c65898;
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PlayerPathMissionUpdate",&DAT_1409ed594,param_1);
        return;
    }
    return;
}



void FUN_14056b5a0(void)

{
    longlong lVar1;
    bool bVar2;

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        bVar2 = DAT_140c65b78 != 0;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        if (bVar2) {
            FUN_140575dd0();
            lVar1 = DAT_140c65898;
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
        return;
    }
    return;
}



void FUN_14056b600(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 uVar3;

    if (param_2 < param_3) {
        lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
        uVar2 = *(undefined8 *)(lVar1 + 400);
        FUN_1406eed00(uVar2,param_3 - param_2,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
        uVar3 = FUN_1400578c0(uVar2);
        FUN_1400ea3e0(lVar1,"PlayerPathScientistScanData",&DAT_1409ed89c,uVar3);
        FUN_1400579e0(uVar2);
    }
    return;
}



undefined8 FUN_14056b6d0(undefined8 param_1,ulonglong param_2)

{
    FUN_14056b710();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14056b710(undefined8 *param_1)

{
    longlong *plVar1;

    *param_1 = &PTR_LAB_140b6ca40;
    if (param_1[5] != 0) {
        for (plVar1 = *(longlong **)(DAT_140c65920 + 8); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[4]) {
            if (plVar1[9] == param_1[5]) {
                (**(code **)(*plVar1 + 8))();
                break;
            }
        }
    }
    FUN_140195d70(param_1 + 6);
    FUN_140195d70(param_1 + 6);
    *(undefined4 *)(param_1 + 6) = 0;
    if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[8] = param_1[9];
    }
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[9] = param_1[8];
    }
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = &PTR_FUN_140b6ca90;
    return;
}



float FUN_14056b7b0(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18));
        if (lVar1 != 0) {
            fVar2 = *(float *)(lVar1 + 0x11e0) -
                    *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0);
            fVar3 = *(float *)(lVar1 + 0x11e4) -
                    *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4);
            fVar4 = (float)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 4);
            fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + 0.0;
            if (fVar2 < fVar4 * fVar4) {
                if (fVar2 < 1e-05) {
                    return 0.0;
                }
                return SQRT(fVar2) / fVar4;
            }
        }
    }
    return 1.0;
}



void FUN_14056b870(longlong param_1)

{
    ulonglong uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined8 local_48;
    undefined *local_40;
    code *local_38;
    undefined8 local_30;

    puVar2 = (undefined4 *)FUN_14024b980(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10));
    if (puVar2 != (undefined4 *)0x0) {
        if ((*(int *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x28) == 0)) {
            fVar8 = 0.0;
            fVar6 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0) - (float)puVar2[3];
            fVar7 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4) - (float)puVar2[4];
            lVar3 = FUN_140200220(puVar2[5],0,0x214);
            if (lVar3 != 0) {
                fVar8 = *(float *)(lVar3 + 0x18);
            }
            if (fVar6 * fVar6 + fVar7 * fVar7 + 0.0 <= fVar8 * fVar8) {
                lVar3 = FUN_140248f00(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14));
                if (lVar3 == 0) {
                    return;
                }
                local_54 = **(undefined4 **)(param_1 + 0x10);
                local_50 = *puVar2;
                local_40 = &LAB_14056b9f0;
                lVar4 = 0;
                uVar1 = *(ulonglong *)(lVar3 + 0x18);
                local_58 = 0;
                if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
                    lVar4 = DAT_140c3fe68 + uVar1;
                }
                local_48 = param_1;
                uVar5 = FUN_140487160(uVar1,lVar4,&local_58,&local_48);
                *(undefined8 *)(param_1 + 0x28) = uVar5;
                return;
            }
        }
        local_38 = FUN_14056b870;
        local_48 = (ulonglong)local_48._4_4_ << 0x20;
        local_30 = 0;
        local_40 = (undefined *)param_1;
        FUN_140195960(param_1 + 0x30,1000,&local_48,4);
    }
    return;
}



void FUN_14056ba10(longlong **param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar5;
    undefined4 in_XMM7_Db;
    float fVar6;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar7 [16];
    undefined auVar8 [16];

    lVar2 = FUN_14024b980(*(undefined4 *)(**param_1 + 8));
    if ((lVar2 != 0) &&
        (lVar3 = FUN_1403d7bc0(DAT_140c65970,*(undefined4 *)(param_1 + 2)), lVar3 != 0)) {
        auVar8 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar4 = 0.0;
        auVar7 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        fVar5 = *param_2 - *(float *)(lVar2 + 0xc);
        fVar6 = param_2[1] - *(float *)(lVar2 + 0x10);
        if ((DAT_140dc3408 & 1) == 0) {
            DAT_140dc3408 = DAT_140dc3408 | 1;
            lVar2 = FUN_140200220(*(undefined4 *)(lVar2 + 0x14),0,0x431);
            DAT_140dc340c = fVar4;
            if (lVar2 != 0) {
                DAT_140dc340c = *(float *)(lVar2 + 0x18);
            }
        }
        if (((fVar5 * fVar5 + fVar6 * fVar6 + 0.0 <= DAT_140dc340c * DAT_140dc340c) &&
             (*(int *)(param_1 + 1) != 0)) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
            FUN_14056bb50(param_1,1);
            return;
        }
        plVar1 = param_1[3];
        while (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x28))(plVar1,1,1,param_4,auVar7,auVar8);
            plVar1 = param_1[3];
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14056bb50(longlong **param_1,int param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    float fVar7;
    undefined auStack552 [32];
    undefined8 local_208;
    undefined8 local_200;
    undefined *local_1f8;
    undefined4 local_1f0;
    longlong **local_1e8;
    undefined *local_1e0;
    undefined4 local_1d8;
    undefined local_1c8 [16];
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined local_188 [16];
    undefined local_178 [64];
    undefined local_138 [16];
    float local_128;
    float local_124;
    float local_120;
    undefined4 local_11c;
    float local_118;
    float local_114;
    float local_110;
    undefined4 local_10c;
    float local_108;
    float local_104;
    float local_100;
    undefined4 local_fc;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    float *local_e8;
    undefined4 *local_e0;
    ulonglong local_98;

    local_98 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    if (param_2 == 0) {
        plVar5 = param_1[3];
        while (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,1,1);
            plVar5 = param_1[3];
        }
    }
    else if (param_1[3] == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_140491c60(DAT_140c65968,*(undefined4 *)(param_1 + 2));
        if (plVar5 != (longlong *)0x0) {
            if (*(int *)(**param_1 + 0x18) == 0) {
                if (((*(int *)(*plVar5 + 0xc) != 0x1b) &&
                     ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0 ||
                       (iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar4 != 0xa7
                       )))) && ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0 ||
                                 (iVar4 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(),
                                         iVar4 != 0xa6)))) goto LAB_14056bf57;
                lVar6 = FUN_140200220();
                if (lVar6 == 0) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = *(int *)(lVar6 + 8);
                }
                if (iVar4 == 0) goto LAB_14056bf57;
            }
            local_208 = FUN_140248f00();
            lVar6 = FUN_14024b980(*(undefined4 *)(**param_1 + 8));
            if (lVar6 != 0) {
                local_1c8._0_12_ = *(undefined (*) [12])(lVar6 + 0xc);
            }
            fVar1 = *(float *)*(undefined (*) [16])(lVar6 + 0x18);
            local_11c = 0;
            local_10c = 0;
            local_fc = 0;
            local_1b8 = _DAT_140c78410;
            uStack436 = uRam0000000140c78414;
            uStack432 = uRam0000000140c78418;
            uStack428 = uRam0000000140c7841c;
            local_1a8 = _DAT_140c78420;
            uStack420 = uRam0000000140c78424;
            uStack416 = uRam0000000140c78428;
            uStack412 = uRam0000000140c7842c;
            local_198 = _DAT_140c78430;
            uStack404 = uRam0000000140c78434;
            uStack400 = uRam0000000140c78438;
            uStack396 = uRam0000000140c7843c;
            fVar2 = *(float *)(lVar6 + 0x24);
            fVar3 = *(float *)(lVar6 + 0x1c);
            local_138 = *(undefined (*) [16])(lVar6 + 0x18);
            local_188 = CONCAT412(0x3f800000,local_1c8._0_12_);
            fVar7 = fVar3 * 2.0;
            local_100 = 1.0 - fVar1 * fVar1 * 2.0;
            local_104 = fVar2 * fVar1 * 2.0;
            local_128 = (1.0 - fVar3 * fVar7) - 0.0;
            local_118 = fVar1 * fVar7 - fVar2 * 0.0;
            local_124 = fVar1 * fVar7 + fVar2 * 0.0;
            local_120 = fVar1 * 0.0 - fVar2 * fVar7;
            local_114 = local_100 - 0.0;
            local_108 = fVar1 * 0.0 + fVar2 * fVar7;
            local_100 = local_100 - fVar3 * fVar7;
            local_f8 = 0;
            uStack244 = 0;
            uStack240 = 0;
            uStack236 = 0x3f800000;
            local_110 = fVar3 * 0.0 + local_104;
            local_104 = fVar3 * 0.0 - local_104;
            local_e0 = &local_1b8;
            local_1c8 = CONCAT88(local_e0,&local_128);
            local_e8 = &local_128;
            FUN_1401afb10(&local_e8,local_178);
            local_1d8 = 0;
            local_1e0 = local_1c8;
            local_1f0 = 0;
            local_1c8 = ZEXT816(0);
            local_1f8 = local_178;
            local_200 = 0;
            local_1e8 = param_1 + 3;
            FUN_1405787d0();
        }
    }
    LAB_14056bf57:
    FUN_1407db4f0(local_98 ^ (ulonglong)auStack552);
    return;
}



void FUN_14056bf80(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;

    *(longlong **)(param_1 + 8) = param_2;
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
}



bool FUN_14056c170(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 0x78))(param_1,0x504d4550);
    if (lVar1 == 0) {
        return false;
    }
    return *(int *)(lVar1 + 0x18) != 0;
}



void FUN_14056c1a0(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    int local_res10 [6];

    local_res10[0] = (int)param_2;
    if ((local_res10[0] != 0) && (iVar1 = FUN_1403f8270(DAT_140c65898,param_2,0), iVar1 != 0)) {
        FUN_140003460(param_1,local_res10);
    }
    return;
}



undefined8 FUN_14056c1e0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    lVar1 = FUN_14024b980();
    lVar2 = FUN_14024b980(param_2);
    fVar4 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0);
    fVar5 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4);
    fVar6 = fVar4 - *(float *)(lVar2 + 0xc);
    fVar7 = fVar5 - *(float *)(lVar2 + 0x10);
    fVar4 = fVar4 - *(float *)(lVar1 + 0xc);
    fVar5 = fVar5 - *(float *)(lVar1 + 0x10);
    uVar3 = 1;
    if (SQRT(fVar4 * fVar4 + fVar5 * fVar5 + 0.0) - *(float *)(lVar1 + 4) <
        SQRT(fVar6 * fVar6 + fVar7 * fVar7 + 0.0) - *(float *)(lVar2 + 4)) {
        uVar3 = 0xffffffff;
    }
    return uVar3;
}



uint * FUN_14056c2b0(longlong *param_1)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    uint *local_18;
    undefined8 local_10;

    puVar3 = (uint *)0x0;
    local_10 = 0;
    local_18 = (uint *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x38))();
    puVar2 = puVar3;
    if (iVar1 == 0) {
        iVar1 = FUN_14056c320(param_1,&local_18,1);
        puVar2 = local_18;
        if (iVar1 != 0) {
            puVar3 = (uint *)(ulonglong)*local_18;
        }
    }
    if (puVar2 != (uint *)0x0) {
        (**(code **)(*(longlong *)(puVar2 + -4) + 8))(puVar2 + -4);
    }
    return puVar3;
}



// WARNING: Could not reconcile some variable overlaps

bool FUN_14056c320(longlong *param_1,undefined8 *param_2,int param_3)

{
    ulonglong uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    int *piVar12;
    uint *puVar13;
    longlong lVar14;
    undefined4 *puVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    ulonglong local_res20;
    int local_88 [2];
    ulonglong local_80;
    longlong local_78;
    ulonglong local_70;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;

    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
        return false;
    }
    uVar5 = 0;
    if (*(int *)(*(longlong *)param_1[6] + 0x50) != 0) {
        uVar2 = FUN_14056cff0(param_1,*(undefined4 *)(*(longlong *)param_1[6] + 0x50),0,0,0);
        local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
        if (uVar2 != 0) {
            FUN_140003460(param_2,&local_res20);
            return true;
        }
    }
    lVar7 = *(longlong *)param_1[6];
    puVar13 = (uint *)(lVar7 + 0x24);
    uVar11 = 0;
    uVar2 = 0;
    switch(*(int *)(lVar7 + 0xc)) {
        case 0:
            iVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
            if (iVar3 == 3) {
                puVar15 = (undefined4 *)(lVar7 + 0x28);
                lVar7 = 3;
                do {
                    FUN_14056c1a0(param_2,*puVar15);
                    puVar15 = puVar15 + 1;
                    lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
            }
            else {
                LAB_14056c448:
                FUN_14056c1a0(param_2,*puVar13);
            }
            break;
        case 2:
        case 0xe:
            uVar5 = (**(code **)(*param_1 + 0x58))(param_1);
            if ((uVar5 & 1) != 0) goto switchD_14056c3ec_caseD_8;
            break;
        case 3:
        case 0xf:
        case 0x1b:
            if (param_3 == 0) {
                lVar7 = FUN_140721ef0(IMAGE_DOS_HEADER_140000000.e_magic +
                                      (&switchD_14056c3ec::switchdataD_14056cf74)[*(int *)(lVar7 + 0xc)],
                                      *(undefined4 *)(lVar7 + 0x14));
                if ((lVar7 != 0) &&
                    (lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10),
                            lVar8 != *(longlong *)(lVar7 + 0x10))) {
                    do {
                        plVar6 = *(longlong **)(lVar8 + 0x28);
                        iVar3 = (**(code **)(*param_1 + 0x50))(param_1,*(undefined4 *)(plVar6 + 1));
                        if (iVar3 == 0) {
                            local_res20 = local_res20 & 0xffffffff00000000;
                            iVar3 = FUN_1403f8270(DAT_140c65898,*(undefined4 *)(*plVar6 + 8),0);
                            uVar11 = uVar2;
                            if (iVar3 != 0) {
                                uVar11 = *(uint *)(*plVar6 + 8);
                                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar11;
                            }
                            local_88[0] = FUN_14056cff0(param_1,*(undefined4 *)(*plVar6 + 0x14),&local_res20,1,0);
                            if ((local_88[0] != 0) || (uVar11 != 0)) {
                                FUN_140003460(param_2);
                            }
                        }
                        lVar9 = *(longlong *)(lVar8 + 0x18);
                        if (lVar9 == 0) {
                            lVar9 = *(longlong *)(lVar8 + 8);
                            if (lVar8 == *(longlong *)(lVar9 + 0x18)) {
                                do {
                                    lVar8 = lVar9;
                                    lVar9 = *(longlong *)(lVar8 + 8);
                                } while (lVar8 == *(longlong *)(lVar9 + 0x18));
                            }
                            if (*(longlong *)(lVar8 + 0x18) != lVar9) {
                                lVar8 = lVar9;
                            }
                        }
                        else {
                            for (lVar14 = *(longlong *)(lVar9 + 0x10); lVar8 = lVar9, lVar14 != 0;
                                 lVar14 = *(longlong *)(lVar14 + 0x10)) {
                                lVar9 = lVar14;
                            }
                        }
                    } while (lVar8 != *(longlong *)(lVar7 + 0x10));
                }
                goto LAB_14056cf3b;
            }
            iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
            if ((iVar3 == 0) && (plVar6 = (longlong *)FUN_14077cce0(param_1,0), plVar6 != (longlong *)0x0))
            {
                local_res20 = local_res20 & 0xffffffff00000000;
                iVar3 = FUN_1403f8270(DAT_140c65898,*(undefined4 *)(*plVar6 + 8),0);
                if (iVar3 != 0) {
                    uVar2 = *(uint *)(*plVar6 + 8);
                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                }
                local_88[0] = FUN_14056cff0(param_1,*(undefined4 *)(*plVar6 + 0x14),&local_res20,1,0);
                if (local_88[0] == 0) {
                    LAB_14056c723:
                    if (uVar2 != 0) {
                        FUN_140003460(param_2,&local_res20);
                    }
                }
                else {
                    FUN_140003460(param_2,local_88);
                }
            }
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            uVar5 = (**(code **)(*param_1 + 0x58))(param_1);
            if ((uVar5 & 1) == 0) goto LAB_14056c448;
            puVar15 = (undefined4 *)(lVar7 + 0x28);
            lVar7 = 3;
            do {
                FUN_14056c1a0(param_2,*puVar15);
                puVar15 = puVar15 + 1;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            break;
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0x11:
        case 0x13:
        case 0x16:
        case 0x1a:
        switchD_14056c3ec_caseD_8:
            lVar7 = 4;
            do {
                uVar2 = *puVar13;
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                if ((uVar2 != 0) && (iVar3 = FUN_1403f8270(DAT_140c65898,uVar2,0), iVar3 != 0)) {
                    FUN_140003460(param_2);
                }
                puVar13 = puVar13 + 1;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
            break;
        case 0xc:
            lVar7 = FUN_14021d600(*(undefined4 *)(lVar7 + 0x14));
            if (lVar7 != 0) {
                iVar3 = FUN_1403c92e0();
                if (iVar3 == 0) {
                    lVar7 = *(longlong *)(DAT_140c65978 + 0x30);
                    lVar8 = *(longlong *)(lVar7 + 8);
                    lVar9 = lVar8;
                    lVar14 = lVar7;
                    if (lVar8 != 0) {
                        do {
                            if (*(uint *)(*(longlong *)param_1[6] + 0x14) < *(uint *)(lVar9 + 0x20)) {
                                lVar10 = *(longlong *)(lVar9 + 0x10);
                                lVar14 = lVar9;
                            }
                            else {
                                lVar10 = *(longlong *)(lVar9 + 0x18);
                            }
                            lVar9 = lVar10;
                        } while (lVar10 != 0);
                        while (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x20) < *(uint *)(*(longlong *)param_1[6] + 0x14)) {
                                lVar8 = *(longlong *)(lVar8 + 0x18);
                            }
                            else {
                                lVar7 = lVar8;
                                lVar8 = *(longlong *)(lVar8 + 0x10);
                            }
                        }
                    }
                    while (lVar7 != lVar14) {
                        FUN_14056c1a0(param_2,*(undefined4 *)
                                (*(longlong *)(*(longlong *)(lVar7 + 0x28) + 8) + 0x18));
                        lVar8 = *(longlong *)(lVar7 + 0x18);
                        if (lVar8 == 0) {
                            lVar8 = *(longlong *)(lVar7 + 8);
                            if (lVar7 == *(longlong *)(lVar8 + 0x18)) {
                                do {
                                    lVar7 = lVar8;
                                    lVar8 = *(longlong *)(lVar7 + 8);
                                } while (lVar7 == *(longlong *)(lVar8 + 0x18));
                            }
                            if (*(longlong *)(lVar7 + 0x18) != lVar8) {
                                lVar7 = lVar8;
                            }
                        }
                        else {
                            for (lVar9 = *(longlong *)(lVar8 + 0x10); lVar7 = lVar8, lVar9 != 0;
                                 lVar9 = *(longlong *)(lVar9 + 0x10)) {
                                lVar8 = lVar9;
                            }
                        }
                    }
                }
                else {
                    lVar7 = 4;
                    do {
                        FUN_14056c1a0(param_2,*puVar13);
                        puVar13 = puVar13 + 1;
                        lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                }
            }
            break;
        case 0xd:
            uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
            if ((uVar2 >> 0x1e & 1) == 0) {
                lVar7 = 4;
                do {
                    FUN_14056c1a0(param_2,*puVar13);
                    puVar13 = puVar13 + 1;
                    lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
            }
            else {
                lVar7 = FUN_140721f50(*(longlong *)param_1[6],*(undefined4 *)(*(longlong *)param_1[6] + 0x14))
                        ;
                if ((lVar7 != 0) &&
                    ((int)(*(longlong *)(lVar7 + 0x20) - *(longlong *)(lVar7 + 0x18) >> 3) != 0)) {
                    do {
                        lVar8 = FUN_1407209f0(lVar7,uVar5);
                        if ((lVar8 != 0) && (iVar3 = (**(code **)(*param_1 + 0x50))(param_1), iVar3 == 0)) {
                            FUN_14056c1a0(param_2);
                        }
                        uVar2 = (int)uVar5 + 1;
                        uVar5 = (ulonglong)uVar2;
                    } while (uVar2 < (uint)(*(longlong *)(lVar7 + 0x20) - *(longlong *)(lVar7 + 0x18) >> 3));
                }
            }
            break;
        case 0x10:
        case 0x18:
            lVar7 = FUN_140220080(*(undefined4 *)(lVar7 + 0x14));
            if (((lVar7 != 0) && (lVar7 = FUN_1404a85e0(), local_78 = lVar7, lVar7 != 0)) &&
                ((lVar8 = *(longlong *)(DAT_140c65898 + 0x6490), lVar8 != 0 ||
                                                                 (lVar8 = *(longlong *)(DAT_140c65898 + 0x78), lVar8 != 0)))) {
                local_68 = *(undefined4 *)(lVar8 + 0x11e0);
                uStack100 = *(undefined4 *)(lVar8 + 0x11e4);
                uStack96 = *(undefined4 *)(lVar8 + 0x11e8);
                uStack92 = *(undefined4 *)(lVar8 + 0x11ec);
                plVar6 = *(longlong **)(DAT_140c65898 + 0x7248);
                if (plVar6 != (longlong *)0x0) {
                    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x1c8))(plVar6,&local_68);
                    if (plVar6 == (longlong *)0x0) {
                        LAB_14056cc00:
                        uVar2 = uVar11;
                    }
                    else {
                        iVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
                        uVar2 = 1;
                        if (iVar3 != 0) goto LAB_14056cc00;
                    }
                    if ((param_3 == 0) || (uVar2 == 0)) {
                        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10);
                        if (lVar8 != *(longlong *)(lVar7 + 8)) {
                            do {
                                iVar3 = FUN_1404a7f50(DAT_140c659b0,*(undefined4 *)**(undefined8 **)(lVar8 + 0x28));
                                if ((iVar3 == 0) && (lVar9 = **(longlong **)(lVar8 + 0x28), lVar9 != 0)) {
                                    local_res20 = local_res20 & 0xffffffff00000000;
                                    iVar3 = FUN_1403f8270(DAT_140c65898,*(undefined4 *)(lVar9 + 0x3c),0);
                                    uVar2 = uVar11;
                                    if (iVar3 != 0) {
                                        uVar2 = *(uint *)(lVar9 + 0x3c);
                                        local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                                    }
                                    local_88[0] = FUN_14056cff0(param_1,*(undefined4 *)(lVar9 + 0x40),&local_res20,1,0);
                                    if ((local_88[0] != 0) || (uVar2 != 0)) {
                                        FUN_140003460(param_2);
                                    }
                                }
                                lVar9 = *(longlong *)(lVar8 + 0x18);
                                if (lVar9 == 0) {
                                    lVar9 = *(longlong *)(lVar8 + 8);
                                    if (lVar8 == *(longlong *)(lVar9 + 0x18)) {
                                        do {
                                            lVar8 = lVar9;
                                            lVar9 = *(longlong *)(lVar8 + 8);
                                        } while (lVar8 == *(longlong *)(lVar9 + 0x18));
                                    }
                                    if (*(longlong *)(lVar8 + 0x18) != lVar9) {
                                        lVar8 = lVar9;
                                    }
                                }
                                else {
                                    for (lVar14 = *(longlong *)(lVar9 + 0x10); lVar8 = lVar9, lVar14 != 0;
                                         lVar14 = *(longlong *)(lVar14 + 0x10)) {
                                        lVar9 = lVar14;
                                    }
                                }
                            } while (lVar8 != *(longlong *)(lVar7 + 8));
                        }
                    }
                    else {
                        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10);
                        local_80 = 0;
                        uVar16 = uVar5;
                        if (lVar8 != *(longlong *)(lVar7 + 8)) {
                            do {
                                iVar3 = FUN_1404a7f50(DAT_140c659b0,*(undefined4 *)**(undefined8 **)(lVar8 + 0x28));
                                uVar5 = uVar16;
                                if ((iVar3 == 0) && (local_70 = **(ulonglong **)(lVar8 + 0x28), local_70 != 0)) {
                                    local_res20 = local_res20 & 0xffffffff00000000;
                                    iVar3 = FUN_1403f8270(DAT_140c65898,*(undefined4 *)(local_70 + 0x3c),0);
                                    uVar2 = uVar11;
                                    if (iVar3 != 0) {
                                        uVar2 = *(uint *)(local_70 + 0x3c);
                                        local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                                    }
                                    uVar4 = FUN_14056cff0(param_1,*(undefined4 *)(local_70 + 0x40),&local_res20,1,
                                                          local_88);
                                    uVar17 = local_80;
                                    local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar4;
                                    if (uVar4 == 0) {
                                        lVar7 = local_78;
                                        if (uVar2 != 0) {
                                            local_70 = local_80 + 1;
                                            local_res20 = FUN_14018db00(uVar16,local_70,4);
                                            *(uint *)(local_res20 + local_80 * 4) = uVar2;
                                            if ((uVar16 != local_res20) &&
                                                (FUN_1407db590(), uVar5 = local_res20, uVar16 != 0)) {
                                                (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
                                                uVar5 = local_res20;
                                            }
                                            local_80 = local_70;
                                            lVar7 = local_78;
                                        }
                                    }
                                    else if (local_88[0] == 0) {
                                        FUN_140003460(param_2);
                                        lVar7 = local_78;
                                    }
                                    else {
                                        local_80 = local_80 + 1;
                                        local_70 = FUN_14018db00(uVar16,local_80,4);
                                        *(undefined4 *)(local_70 + uVar17 * 4) = (undefined4)local_res20;
                                        lVar7 = local_78;
                                        if ((uVar16 != local_70) &&
                                            (FUN_1407db590(local_70), lVar7 = local_78, uVar5 = local_70, uVar16 != 0)) {
                                            (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
                                            lVar7 = local_78;
                                            uVar5 = local_70;
                                        }
                                    }
                                }
                                lVar9 = *(longlong *)(lVar8 + 0x18);
                                if (lVar9 == 0) {
                                    lVar9 = *(longlong *)(lVar8 + 8);
                                    if (lVar8 == *(longlong *)(lVar9 + 0x18)) {
                                        do {
                                            lVar8 = lVar9;
                                            lVar9 = *(longlong *)(lVar8 + 8);
                                        } while (lVar8 == *(longlong *)(lVar9 + 0x18));
                                    }
                                    if (*(longlong *)(lVar8 + 0x18) != lVar9) {
                                        lVar8 = lVar9;
                                    }
                                }
                                else {
                                    for (lVar14 = *(longlong *)(lVar9 + 0x10); lVar8 = lVar9, lVar14 != 0;
                                         lVar14 = *(longlong *)(lVar14 + 0x10)) {
                                        lVar9 = lVar14;
                                    }
                                }
                                uVar16 = uVar5;
                            } while (lVar8 != *(longlong *)(lVar7 + 8));
                        }
                        if (param_2[1] == 0) {
                            FUN_1400291a0(param_2,uVar5,local_80);
                        }
                        if (uVar5 != 0) {
                            (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
                        }
                    }
                }
            }
            break;
        case 0x12:
            lVar8 = (**(code **)(*param_1 + 0x78))(param_1,0x504d4550);
            if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x18) == 0) {
                    FUN_14056c1a0(param_2,*puVar13);
                }
                else {
                    puVar15 = (undefined4 *)(lVar7 + 0x28);
                    lVar7 = 3;
                    do {
                        FUN_14056c1a0(param_2,*puVar15);
                        puVar15 = puVar15 + 1;
                        lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                }
            }
            break;
        case 0x14:
            lVar7 = FUN_140220d40(*(undefined4 *)(lVar7 + 0x14));
            if (lVar7 != 0) {
                piVar12 = (int *)(lVar7 + 0x30);
                do {
                    if ((*piVar12 != 0) && (iVar3 = (**(code **)(*param_1 + 0x50))(param_1,uVar5), iVar3 == 0))
                    {
                        FUN_14056c1a0(param_2);
                    }
                    uVar2 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar2;
                    piVar12 = piVar12 + 1;
                } while (uVar2 < 8);
            }
            break;
        case 0x15:
            lVar8 = FUN_1403d2d60(IMAGE_DOS_HEADER_140000000.e_magic +
                                  (&switchD_14056c3ec::switchdataD_14056cf74)[*(int *)(lVar7 + 0xc)],
                                  *(undefined4 *)(lVar7 + 0x14));
            if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) == 0) {
                    FUN_14056c1a0(param_2,*puVar13);
                }
                else {
                    puVar15 = (undefined4 *)(lVar7 + 0x28);
                    lVar7 = 3;
                    do {
                        FUN_14056c1a0(param_2,*puVar15);
                        puVar15 = puVar15 + 1;
                        lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                }
            }
            break;
        case 0x17:
            lVar7 = FUN_140221180(*(undefined4 *)(lVar7 + 0x14));
            if (lVar7 != 0) {
                puVar13 = (uint *)(lVar7 + 0x2c);
                do {
                    iVar3 = (**(code **)(*param_1 + 0x50))(param_1,uVar5);
                    if (iVar3 == 0) {
                        local_res20 = local_res20 & 0xffffffff00000000;
                        iVar3 = FUN_1403f8270(DAT_140c65898,*puVar13,0);
                        uVar2 = uVar11;
                        if (iVar3 != 0) {
                            uVar2 = *puVar13;
                            local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                        }
                        local_88[0] = FUN_14056cff0(param_1,puVar13[0x14],&local_res20,1,0);
                        if ((local_88[0] != 0) || (uVar2 != 0)) {
                            FUN_140003460(param_2);
                        }
                    }
                    uVar2 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar2;
                    puVar13 = puVar13 + 1;
                } while (uVar2 < 10);
            }
            break;
        case 0x19:
            local_70 = FUN_140222b00(*(undefined4 *)(lVar7 + 0x14));
            if (local_70 != 0) {
                if (param_3 == 0) {
                    puVar13 = (uint *)(local_70 + 0x24);
                    do {
                        iVar3 = (**(code **)(*param_1 + 0x50))(param_1,uVar5);
                        if (((iVar3 == 0) && (*puVar13 != 0)) && (lVar7 = FUN_14024b980(), lVar7 != 0)) {
                            local_res20 = local_res20 & 0xffffffff00000000;
                            iVar3 = FUN_1403f8270(DAT_140c65898,*puVar13,0);
                            uVar11 = uVar2;
                            if (iVar3 != 0) {
                                uVar11 = *puVar13;
                                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar11;
                            }
                            local_88[0] = FUN_14056cff0(param_1,puVar13[8],&local_res20,1,0);
                            if ((local_88[0] != 0) || (uVar11 != 0)) {
                                FUN_140003460(param_2);
                            }
                        }
                        uVar11 = (int)uVar5 + 1;
                        uVar5 = (ulonglong)uVar11;
                        puVar13 = puVar13 + 1;
                    } while (uVar11 < 8);
                    goto LAB_14056cf3b;
                }
                fVar20 = 3.402823e+38;
                uVar16 = 0xffffffffffffffff;
                piVar12 = (int *)(local_70 + 0x24);
                fVar21 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
                fVar22 = *(float *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e4);
                uVar17 = uVar5;
                do {
                    iVar3 = (**(code **)(*param_1 + 0x50))(param_1,uVar5);
                    if (((iVar3 == 0) && (*piVar12 != 0)) &&
                        ((lVar7 = FUN_14024b980(), lVar7 != 0 &&
                                                   (fVar18 = fVar21 - *(float *)(lVar7 + 0xc), fVar19 = fVar22 - *(float *)(lVar7 + 0x10),
                                                    fVar18 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + 0.0) - *(float *)(lVar7 + 4),
                                                           fVar18 < fVar20)))) {
                        uVar16 = uVar17;
                        fVar20 = fVar18;
                    }
                    uVar1 = local_70;
                    uVar11 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar11;
                    uVar17 = uVar17 + 1;
                    piVar12 = piVar12 + 1;
                } while (uVar11 < 8);
                if (uVar16 != 0xffffffffffffffff) {
                    local_res20 = local_res20 & 0xffffffff00000000;
                    iVar3 = FUN_1403f8270(DAT_140c65898,*(undefined4 *)(local_70 + 0x24 + uVar16 * 4),0);
                    if (iVar3 != 0) {
                        uVar2 = *(uint *)(uVar1 + 0x24 + uVar16 * 4);
                        local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar2;
                    }
                    local_88[0] = FUN_14056cff0(param_1,*(undefined4 *)(uVar1 + 0x44 + uVar16 * 4),&local_res20,
                                                1,0);
                    if (local_88[0] == 0) goto LAB_14056c723;
                    FUN_140003460(param_2,local_88);
                }
            }
    }
    if (param_3 != 0) {
        FUN_1401c3280(FUN_14056c1e0,*param_2,param_2[1],0);
    }
    LAB_14056cf3b:
    return param_2[1] != 0;
}



undefined8
FUN_14056cff0(longlong *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong local_18;

    lVar1 = *(longlong *)(DAT_140c65928 + 8);
    local_18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_18 == lVar1) || (param_2 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar1;
    }
    if ((local_18 == lVar1) || (lVar1 = *(longlong *)(local_18 + 0x28), lVar1 == 0)) {
        uVar5 = 0;
    }
    else {
        iVar3 = (**(code **)(*param_1 + 0xd0))();
        uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
        uVar5 = FUN_140487e40(lVar1,uVar4,param_3,param_4,iVar3 != 3,0,param_5);
    }
    return uVar5;
}



ulonglong FUN_14056d0d0(longlong *param_1)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong *plVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;

    uVar7 = 0;
    lVar6 = *(longlong *)param_1[6];
    uVar3 = 0;
    switch(*(undefined4 *)(lVar6 + 0xc)) {
        case 2:
        case 4:
        case 7:
        case 0x13:
        case 0x15:
        case 0x18:
            uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
            return uVar3;
        case 3:
        case 0xd:
        case 0xf:
        case 0x14:
        case 0x17:
        case 0x19:
        case 0x1a:
        case 0x1b:
            uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
            return uVar3;
        case 5:
        case 6:
            lVar6 = FUN_140223380(*(undefined4 *)(lVar6 + 0x14));
            uVar3 = uVar7;
            if (lVar6 != 0) {
                iVar1 = *(int *)(lVar6 + 0x10);
                uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
                uVar3 = (ulonglong)uVar2;
                if (iVar1 != 0) {
                    uVar2 = (uVar2 - (uVar2 >> 2 & 0x9249249)) - (uVar2 >> 1 & 0x5b6db6db);
                    uVar2 = (uVar2 >> 3) + uVar2;
                    goto LAB_14056d28f;
                }
            }
            break;
        case 0xe:
            lVar6 = FUN_14021fc40(*(undefined4 *)(lVar6 + 0x14));
            uVar3 = uVar7;
            if (lVar6 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
                if (iVar1 != 0) {
                    return 100;
                }
                iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
                return (ulonglong)(uint)(iVar1 * 100) / (ulonglong)*(uint *)(lVar6 + 0x30);
            }
            break;
        case 0x10:
            iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
            if (iVar1 != 0) {
                return 100;
            }
            uVar3 = uVar7;
            if ((DAT_140c658f8 != 0) &&
                (plVar4 = (longlong *)
                        FUN_140448420(*(longlong *)param_1[6],
                                      *(undefined4 *)(*(longlong *)param_1[6] + 0x14)),
                        plVar4 != (longlong *)0x0)) {
                piVar5 = (int *)(**(code **)(*plVar4 + 0xa8))();
                if (piVar5[1] != 0) {
                    return (ulonglong)(uint)(*piVar5 * 100) / (ulonglong)(uint)piVar5[1];
                }
            }
            break;
        case 0x11:
            lVar6 = FUN_14021cd80(*(undefined4 *)(lVar6 + 0x14));
            uVar3 = uVar7;
            if (lVar6 != 0) {
                uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
                uVar2 = (uVar2 - (uVar2 >> 2 & 0x9249249)) - (uVar2 >> 1 & 0x5b6db6db);
                uVar2 = (uVar2 >> 3) + uVar2;
                LAB_14056d28f:
                return (ulonglong)((uVar2 & 0xc71c71c7) % 0x3f);
            }
            break;
        case 0x12:
            lVar6 = (**(code **)(*param_1 + 0x78))(param_1,0x504d4550);
            if (lVar6 != 0) {
                uVar3 = (ulonglong)*(uint *)(lVar6 + 0x1c);
            }
    }
    return uVar3;
}



ulonglong FUN_14056d330(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    int *piVar4;
    short *psVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;

    uVar7 = 0;
    uVar6 = 0;
    lVar1 = **(longlong **)(param_1 + 0x30);
    uVar8 = uVar7;
    switch(*(int *)(lVar1 + 0xc)) {
        case 2:
        case 0xe:
        case 0x10:
            return 100;
        case 3:
        case 0xf:
        case 0x1b:
            lVar1 = FUN_140721ef0(IMAGE_DOS_HEADER_140000000.e_magic +
                                  (&switchD_14056d36c::switchdataD_14056d624)[*(int *)(lVar1 + 0xc) + -2],
                                  *(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 0x18);
            }
            break;
        case 4:
            lVar1 = FUN_1402237c0(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 0xc);
            }
            break;
        case 5:
        case 6:
            lVar1 = FUN_140223380(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 0xc);
            }
            break;
        case 7:
            lVar1 = FUN_140224480(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 0xc);
            }
            break;
        case 0xd:
            lVar1 = FUN_140721f50(IMAGE_DOS_HEADER_140000000.e_magic +
                                  (&switchD_14056d36c::switchdataD_14056d624)[*(int *)(lVar1 + 0xc) + -2],
                                  *(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return *(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x18) >> 3 & 0xffffffff;
            }
            break;
        case 0x11:
            lVar1 = FUN_14021cd80(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 0xc);
            }
            break;
        case 0x12:
            lVar1 = FUN_14021e2c0(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(lVar1 + 8);
            }
            break;
        case 0x13:
            lVar1 = FUN_140432960(DAT_140c65960,*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                return (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + 0x20);
            }
            break;
        case 0x14:
            uVar2 = FUN_140220d40(*(undefined4 *)(lVar1 + 0x14));
            uVar3 = FUN_1405726f0(uVar2);
            return uVar3;
        case 0x15:
            lVar1 = FUN_140221e40(*(undefined4 *)(lVar1 + 0x14));
            goto LAB_14056d60a;
        case 0x17:
            piVar4 = (int *)FUN_140221180(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (piVar4 != (int *)0x0) {
                lVar1 = 10;
                do {
                    piVar4 = piVar4 + 1;
                    if (((*piVar4 != 0) && (psVar5 = (short *)FUN_14034bdd0(), psVar5 != (short *)0x0)) &&
                        (*psVar5 != 0)) {
                        uVar7 = uVar7 + 1;
                    }
                    lVar1 = lVar1 + -1;
                } while (lVar1 != 0);
                return (ulonglong)uVar7;
            }
            break;
        case 0x18:
            lVar1 = FUN_140220080(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 == 0) break;
            lVar1 = FUN_1404a85e0();
        LAB_14056d60a:
            uVar8 = uVar6;
            if (lVar1 != 0) {
                uVar8 = *(uint *)(lVar1 + 0x10);
            }
            break;
        case 0x19:
            piVar4 = (int *)FUN_140222b00(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (piVar4 != (int *)0x0) {
                lVar1 = 8;
                do {
                    piVar4 = piVar4 + 1;
                    if (((*piVar4 != 0) && (psVar5 = (short *)FUN_14034bdd0(), psVar5 != (short *)0x0)) &&
                        (*psVar5 != 0)) {
                        uVar7 = uVar7 + 1;
                    }
                    lVar1 = lVar1 + -1;
                } while (lVar1 != 0);
                return (ulonglong)uVar7;
            }
            break;
        case 0x1a:
            lVar1 = FUN_140222f40(*(undefined4 *)(lVar1 + 0x14));
            uVar8 = uVar6;
            if (lVar1 != 0) {
                uVar8 = (uint)(*(int *)(lVar1 + 4) != 0);
                if (*(int *)(lVar1 + 8) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0xc) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0x10) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0x14) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0x18) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0x1c) != 0) {
                    uVar8 = uVar8 + 1;
                }
                if (*(int *)(lVar1 + 0x20) != 0) {
                    return (ulonglong)(uVar8 + 1);
                }
            }
    }
    return (ulonglong)uVar8;
}



void FUN_14056d690(longlong param_1)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionComplete",&DAT_1409ecdcc,
                  *(undefined8 *)(param_1 + 0x30));
    FUN_14056f210(DAT_140c65970,param_1,6);
    FUN_140437a10(DAT_140c658d8,0x4b,0,0,0,0,1);
    *(undefined4 *)(param_1 + 0x38) = 1;
    return;
}



void FUN_14056d740(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionActivate",&DAT_1409eccac,
                  *(undefined8 *)(param_1 + 0x30));
    iVar1 = *(int *)(**(longlong **)(param_1 + 0x30) + 0xc);
    switch(iVar1) {
        case 0:
            lVar2 = FUN_140617410(IMAGE_DOS_HEADER_140000000.e_magic +
                                  (&switchD_14056d794::switchdataD_14056d82c)[iVar1],
                                  *(undefined4 *)(**(longlong **)(param_1 + 0x30) + 0x14));
            if (lVar2 == 0) {
                return;
            }
            iVar1 = *(int *)(*(longlong *)(lVar2 + 0x98) + 4);
            if (iVar1 == 4) {
                uVar3 = 0x52;
            }
            else {
                if (iVar1 < 5) {
                    return;
                }
                if (iVar1 < 7) {
                    uVar3 = 0x73;
                }
                else {
                    if (8 < iVar1) {
                        return;
                    }
                    uVar3 = 0x72;
                }
            }
            break;
        default:
            goto switchD_14056d794_caseD_1;
        case 3:
            uVar3 = 0x59;
            break;
        case 0xc:
            uVar3 = 0x5a;
            break;
        case 0xd:
            uVar3 = 0x5b;
            break;
        case 0xf:
            uVar3 = 0x58;
            break;
        case 0x12:
            uVar3 = 0x5c;
            break;
        case 0x14:
            uVar3 = 0x5e;
            break;
        case 0x15:
            uVar3 = 0x61;
    }
    FUN_140437a10(DAT_140c658d8,uVar3,0,0,0,0,1);
    switchD_14056d794_caseD_1:
    return;
}



void FUN_14056d8c0(longlong param_1,int param_2,int param_3)

{
    if ((param_2 != param_3) && (*(int *)(param_1 + 0x38) == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionAdvanced",&DAT_1409ed524
                ,*(undefined8 *)(param_1 + 0x30));
        *(undefined4 *)(param_1 + 0x38) = 0;
        return;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
}



void FUN_14056d920(longlong param_1,uint param_2,uint param_3)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = *(int *)(**(longlong **)(param_1 + 0x30) + 0xc);
    if ((iVar1 == 2) || (iVar1 == 0xe)) {
        if (((param_2 ^ param_3) & 1) == 0) {
            return;
        }
        if (((param_3 & 1) != 0) && ((param_3 & 2) == 0)) {
            FUN_14056f210(DAT_140c65970,param_1,1);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionUnlocked",
                          &DAT_1409ecd0c);
            FUN_140437a10(DAT_140c658d8,0x5d,0,0,0,0,1);
        }
    }
    if ((((param_2 ^ param_3) & 1) != 0) && ((param_3 & 1) != 0)) {
        iVar1 = *(int *)(**(longlong **)(param_1 + 0x30) + 0xc);
        if (iVar1 == 4) {
            uVar2 = 0x53;
        }
        else if (iVar1 == 5) {
            uVar2 = 0x55;
        }
        else if (iVar1 == 6) {
            uVar2 = 0x56;
        }
        else {
            if (iVar1 != 7) {
                return;
            }
            uVar2 = 0x54;
        }
        FUN_140437a10(DAT_140c658d8,uVar2,0,0,0,0,1);
    }
    return;
}



undefined8 * FUN_14056da50(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;
    uint **ppuVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    uint uVar9;
    undefined4 *puVar11;
    bool bVar12;
    longlong local_res8;
    longlong local_res18;
    longlong local_res20;
    longlong local_48 [2];
    ulonglong uVar10;

    FUN_1405729b0();
    *param_1 = &PTR_FUN_140b6c8f8;
    if (param_3 != 0) {
        uVar10 = 0;
        if (*(short *)(param_3 + 4) != 0) {
            do {
                puVar11 = (undefined4 *)(uVar10 * 0x10 + *(longlong *)(param_3 + 8));
                ppuVar5 = (uint **)FUN_140491c60(DAT_140c65968,*puVar11);
                if (ppuVar5 != (uint **)0x0) {
                    lVar6 = param_1[2];
                    puVar2 = *ppuVar5;
                    lVar4 = lVar6;
                    lVar3 = *(longlong *)(lVar6 + 8);
                    while (lVar3 != 0) {
                        if (*(uint *)(lVar3 + 0x20) < *puVar2) {
                            lVar3 = *(longlong *)(lVar3 + 0x18);
                        }
                        else {
                            lVar4 = lVar3;
                            lVar3 = *(longlong *)(lVar3 + 0x10);
                        }
                    }
                    if ((lVar4 == lVar6) || (*puVar2 < *(uint *)(lVar4 + 0x20))) {
                        local_res18 = lVar6;
                        plVar8 = &local_res18;
                    }
                    else {
                        local_res8 = lVar4;
                        plVar8 = &local_res8;
                    }
                    if (*plVar8 != lVar6) {
                        return param_1;
                    }
                    uVar9 = 0;
                    if (puVar2 != (uint *)0x0) {
                        uVar9 = puVar2[5];
                    }
                    if (puVar2[3] == 0x1b) {
                        lVar6 = FUN_14021d1c0();
                        LAB_14056db5a:
                        if (lVar6 != 0) {
                            uVar9 = *(uint *)(lVar6 + 4);
                        }
                    }
                    else if (puVar2[3] == 0x15) {
                        lVar6 = FUN_140221e40();
                        goto LAB_14056db5a;
                    }
                    lVar6 = param_1[6];
                    uVar1 = (*ppuVar5)[3];
                    lVar4 = lVar6;
                    lVar3 = *(longlong *)(lVar6 + 8);
                    while (lVar3 != 0) {
                        if (*(uint *)(lVar3 + 0x20) == uVar1) {
                            bVar12 = *(uint *)(lVar3 + 0x24) < uVar9;
                        }
                        else {
                            bVar12 = (int)*(uint *)(lVar3 + 0x20) < (int)uVar1;
                        }
                        if (bVar12) {
                            lVar3 = *(longlong *)(lVar3 + 0x18);
                        }
                        else {
                            lVar4 = lVar3;
                            lVar3 = *(longlong *)(lVar3 + 0x10);
                        }
                    }
                    if (lVar4 == lVar6) {
                        LAB_14056dbcf:
                        local_48[0] = lVar6;
                        plVar8 = local_48;
                    }
                    else {
                        if (uVar1 == *(uint *)(lVar4 + 0x20)) {
                            bVar12 = uVar9 < *(uint *)(lVar4 + 0x24);
                        }
                        else {
                            bVar12 = (int)uVar1 < (int)*(uint *)(lVar4 + 0x20);
                        }
                        if (bVar12) goto LAB_14056dbcf;
                        local_res20 = lVar4;
                        plVar8 = &local_res20;
                    }
                    if (*plVar8 != lVar6) {
                        return param_1;
                    }
                    puVar7 = (undefined8 *)FUN_14018b280(0x40);
                    if (puVar7 != (undefined8 *)0x0) {
                        FUN_14056b0f0(puVar7,ppuVar5,puVar11[1],puVar11[2],puVar11[3]);
                        *puVar7 = &PTR_FUN_140b6c950;
                        *(undefined4 *)(puVar7 + 7) = 0;
                    }
                    FUN_140573060(param_1);
                }
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(ushort *)(param_3 + 4));
        }
    }
    lVar6 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        bVar12 = DAT_140c65b78 != 0;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        if (bVar12) {
            FUN_140575dd0();
            lVar6 = DAT_140c65898;
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
    }
    return param_1;
}



undefined8 FUN_14056dca0(undefined8 param_1,ulonglong param_2)

{
    FUN_140572d90();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong * FUN_14056dce0(longlong param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    uint **ppuVar5;
    longlong *plVar6;
    bool bVar7;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < *param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 != lVar2) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        return (longlong *)0x0;
    }
    ppuVar5 = (uint **)FUN_140491c60(DAT_140c65968);
    if (ppuVar5 == (uint **)0x0) {
        return (longlong *)0x0;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar1 = **ppuVar5;
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
    if (local_res8 != lVar2) {
        return (longlong *)0x0;
    }
    uVar1 = (*ppuVar5)[3];
    uVar4 = FUN_140496390(ppuVar5);
    lVar2 = *(longlong *)(param_1 + 0x30);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) == uVar1) {
            bVar7 = *(uint *)(lVar3 + 0x24) < uVar4;
        }
        else {
            bVar7 = (int)*(uint *)(lVar3 + 0x20) < (int)uVar1;
        }
        if (bVar7) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if (local_res8 != lVar2) {
        if (uVar1 == *(uint *)(local_res8 + 0x20)) {
            bVar7 = uVar4 < *(uint *)(local_res8 + 0x24);
        }
        else {
            bVar7 = (int)uVar1 < (int)*(uint *)(local_res8 + 0x20);
        }
        if (!bVar7) goto LAB_14056de40;
    }
    local_res8 = lVar2;
    LAB_14056de40:
    if (local_res8 == lVar2) {
        plVar6 = (longlong *)FUN_14018b280(0x40);
        if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
        }
        else {
            FUN_14056b0f0(plVar6,ppuVar5,param_2[1],param_2[2],param_2[3]);
            *(undefined4 *)(plVar6 + 7) = 0;
            *plVar6 = (longlong)&PTR_FUN_140b6c950;
        }
        FUN_140573060(param_1,plVar6);
        if (*(int *)(param_1 + 0x50) != 0) {
            (**(code **)(*plVar6 + 0x18))(plVar6);
        }
    }
    else {
        plVar6 = (longlong *)0x0;
    }
    return plVar6;
}



undefined FUN_14056ded0(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    undefined uVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    char *pcVar8;
    undefined *puVar9;
    longlong local_res8;

    lVar6 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar6;
    lVar1 = *(longlong *)(lVar6 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < *param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar6) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    if ((local_res8 == lVar6) ||
        (plVar2 = *(longlong **)(local_res8 + 0x28), plVar2 == (longlong *)0x0)) {
        return false;
    }
    iVar4 = (**(code **)(*plVar2 + 0x38))();
    iVar5 = FUN_14079d700(plVar2,param_2[1],param_2[2],param_2[3],*(undefined4 *)(param_1 + 0x50));
    if (iVar5 == 0) {
        return false;
    }
    if (param_2[1] == 0) {
        return iVar4 == 0;
    }
    iVar5 = FUN_140573130(param_1,*(undefined8 *)(DAT_140c65898 + 0x78));
    if (iVar5 == 0) {
        if (iVar4 != 0) goto LAB_14056e025;
        lVar6 = plVar2[6];
        puVar9 = &DAT_1409ecdac;
        uVar7 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        pcVar8 = "PlayerPathMissionCompleteSound";
    }
    else {
        FUN_140437a10(DAT_140c658d8,0x4c,0,0,0,0,1);
        uVar7 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        lVar6 = FUN_140491bd0(DAT_140c65968,*(undefined4 *)(*(longlong *)plVar2[6] + 0x20));
        if (lVar6 == 0) goto LAB_14056e025;
        puVar9 = &DAT_1409ecd2c;
        pcVar8 = "PlayerPathRewardAvailable";
    }
    FUN_1400ea3e0(uVar7,pcVar8,puVar9,lVar6);
    LAB_14056e025:
    uVar3 = 2;
    if (iVar4 != 0) {
        uVar3 = 0;
    }
    return uVar3;
}



undefined8 * FUN_14056e070(undefined8 *param_1,undefined4 *param_2)

{
    longlong *plVar1;
    undefined *puVar2;
    longlong *plVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    uint uVar7;
    bool bVar8;
    undefined8 extraout_XMM0_Qa;

    lVar5 = DAT_140c65970;
    FUN_140572a50(param_1,*param_2);
    *param_1 = &PTR_FUN_140b6c8b8;
    puVar2 = (undefined *)FUN_14018b280(0x28);
    uVar7 = 0;
    param_1[0x11] = puVar2;
    param_1[0x12] = 0;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined8 *)(param_1[0x11] + 0x10) = param_1[0x11];
    *(undefined8 *)(param_1[0x11] + 0x18) = param_1[0x11];
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x16] = 0;
    param_1[0x15] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x15] + 8) = 0;
    *(undefined8 *)(param_1[0x15] + 0x10) = param_1[0x15];
    *(undefined8 *)(param_1[0x15] + 0x18) = param_1[0x15];
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x24) = 4;
    *(uint *)((longlong)param_1 + 0xc) = (uint)*(byte *)(param_2 + 5);
    if (param_1 != (undefined8 *)&DAT_ffffffffffffffd0) {
        FUN_1401e82f0(extraout_XMM0_Qa,param_2[6]);
    }
    puVar6 = param_1 + 4;
    do {
        *(undefined4 *)(puVar6 + -2) =
                *(undefined4 *)
                        ((longlong)param_2 + (longlong)((longlong)puVar6 + (-0x1c - (longlong)param_1)));
        plVar3 = (longlong *)FUN_140491d60();
        if (plVar3 == (longlong *)0x0) {
            uVar4 = *(undefined4 *)puVar6;
        }
        else {
            uVar4 = *(undefined4 *)(*plVar3 + 8);
        }
        uVar7 = uVar7 + 1;
        *(undefined4 *)puVar6 = uVar4;
        puVar6 = (undefined8 *)((longlong)puVar6 + 4);
    } while (uVar7 < 4);
    if (lVar5 != 0) {
        FUN_14056e480(lVar5);
        FUN_1404956e0(param_1 + 7,lVar5 + 0x38);
        FUN_140008410(lVar5 + 0x38);
    }
    plVar3 = *(longlong **)(DAT_140c65920 + 8);
    lVar5 = DAT_140c65898;
    while (plVar1 = plVar3, DAT_140c65898 = lVar5, plVar1 != (longlong *)0x0) {
        plVar3 = (longlong *)plVar1[4];
        if (*(int *)(plVar1 + 7) == 0) {
            (**(code **)(*plVar1 + 8))(plVar1);
            (**(code **)*plVar1)(plVar1,1);
            lVar5 = DAT_140c65898;
        }
    }
    if (lVar5 != 0) {
        bVar8 = DAT_140c65b78 != 0;
        *(undefined4 *)(lVar5 + 0x6f98) = 1;
        if (bVar8) {
            FUN_140575dd0();
            lVar5 = DAT_140c65898;
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
    }
    return param_1;
}



undefined8 FUN_14056e280(undefined8 param_1,ulonglong param_2)

{
    FUN_14056e2c0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14056e2c0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6c8b8;
    FUN_14056e380();
    FUN_14056e480(param_1);
    FUN_140195d70(param_1 + 0x1b);
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if ((undefined8 *)param_1[0x1d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1d] = param_1[0x1e];
    }
    if ((undefined8 *)param_1[0x1e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1e] = param_1[0x1d];
    }
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    lVar1 = param_1[0x19];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0x14);
    FUN_14018b900(param_1[0x15],0);
    FUN_140008410(param_1 + 0x10);
    FUN_14018b900(param_1[0x11],0);
    FUN_140575930(param_1);
    return;
}



void FUN_14056e380(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;

    FUN_14056e480();
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x40)) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x40));
    }
    FUN_140008410(param_1 + 0x38);
    FUN_140008410(param_1 + 0x80);
    FUN_140008410(param_1 + 0xa0);
    lVar4 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        bVar5 = DAT_140c65b78 != 0;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        if (bVar5) {
            FUN_140575dd0();
            lVar4 = DAT_140c65898;
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar4 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
    }
    return;
}



void FUN_14056e480(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    FUN_1405728b0();
    if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_140572fc0();
        *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
    }
    plVar1 = *(longlong **)(DAT_140c65920 + 8);
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[4];
        if (*(int *)(plVar2 + 7) == 0) {
            (**(code **)(*plVar2 + 8))(plVar2);
            (**(code **)*plVar2)(plVar2,1);
        }
    }
    FUN_140618300();
    FUN_140616eb0();
    return;
}



void FUN_14056e520(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;

    lVar1 = DAT_140c65970;
    lVar2 = FUN_140491bd0(DAT_140c65968);
    if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar1 + 0x40);
        local_res8 = lVar3;
        if (*(longlong *)(lVar3 + 8) != 0) {
            lVar6 = *(longlong *)(lVar3 + 8);
            do {
                if (*(uint *)(lVar6 + 0x20) < *param_2) {
                    lVar7 = *(longlong *)(lVar6 + 0x18);
                }
                else {
                    lVar7 = *(longlong *)(lVar6 + 0x10);
                    local_res8 = lVar6;
                }
                lVar6 = lVar7;
            } while (lVar7 != 0);
        }
        if ((local_res8 == lVar3) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if ((local_res8 != *(longlong *)(lVar1 + 0x40)) &&
            (puVar5 = *(undefined8 **)(local_res8 + 0x28), puVar5 != (undefined8 *)0x0)) {
            (**(code **)*puVar5)(puVar5,1);
        }
        lVar3 = FUN_14018b280(0x58);
        if (lVar3 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = FUN_14056da50(lVar3,lVar2,param_2);
        }
        puVar5 = (undefined8 *)FUN_140055be0(lVar1 + 0x38,param_2);
        *puVar5 = uVar4;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14056e610(undefined8 param_1,int *param_2)

{
    short *psVar1;
    undefined4 uVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    longlong *plVar7;
    undefined2 *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    ulonglong uVar12;
    undefined local_208 [8];
    longlong local_200;
    undefined2 *local_1f8;
    longlong local_1f0;
    undefined **local_1e8 [24];
    undefined local_128 [16];
    undefined2 *local_118;
    undefined **local_108 [24];
    undefined local_48 [16];
    undefined2 *local_38;

    plVar10 = DAT_140c65970;
    iVar4 = (**(code **)(*DAT_140c65970 + 0x18))(DAT_140c65970);
    uVar5 = (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar11 = (longlong)*(int *)(plVar10 + 1);
    *(int *)((longlong)plVar10 + lVar11 * 4 + 0x10) = *param_2;
    plVar7 = (longlong *)FUN_140491d60();
    if (plVar7 == (longlong *)0x0) {
        uVar2 = *(undefined4 *)((longlong)plVar10 + lVar11 * 4 + 0x20);
    }
    else {
        uVar2 = *(undefined4 *)(*plVar7 + 8);
    }
    *(undefined4 *)((longlong)plVar10 + lVar11 * 4 + 0x20) = uVar2;
    uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10);
    iVar4 = *param_2 - iVar4;
    FUN_1400b7090(local_108,0x26a7a);
    plVar10 = (longlong *)0x0;
    local_48 = extraout_XMM0 & (undefined  [16])0x0;
    local_38 = (undefined2 *)0x0;
    local_108[0] = &PTR_FUN_140b69230;
    puVar8 = (undefined2 *)FUN_14018b280(0x10,0);
    local_38 = puVar8 + 8;
    local_48 = CONCAT88(puVar8,puVar8);
    if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
    }
    plVar9 = (longlong *)FUN_14018b280(0x58);
    plVar7 = plVar10;
    if (plVar9 != (longlong *)0x0) {
        FUN_1400b6390(plVar9);
        *plVar9 = (longlong)&PTR_FUN_140b69300;
        *(int *)(plVar9 + 1) = iVar4;
        *(float *)((longlong)plVar9 + 0xc) = (float)iVar4;
        plVar7 = plVar9;
    }
    local_200 = 0;
    local_1f8 = (undefined2 *)0x0;
    local_1f0 = 0;
    do {
        psVar1 = &DAT_140b14ef6 + (longlong)plVar10;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
    } while (*psVar1 != 0);
    lVar11 = (longlong)plVar10 * 2 >> 1;
    uVar12 = lVar11 + 1;
    if (uVar12 < 0x7fffffffffffffff) {
        lVar3 = uVar12 * 2;
        local_1f8 = (undefined2 *)FUN_14018b280(lVar3,0);
        local_1f0 = (longlong)local_1f8 + lVar3;
    }
    lVar3 = (longlong)local_1f8;
    lVar11 = lVar11 * 2;
    local_200 = (longlong)local_1f8;
    FUN_1407db590(local_1f8,&DAT_140b14ef4,lVar11);
    local_1f8 = (undefined2 *)(lVar11 + lVar3);
    if (local_1f8 != (undefined2 *)0x0) {
        *local_1f8 = 0;
    }
    FUN_1400b7480(local_108,plVar7);
    (**(code **)(*plVar7 + 0x48))(plVar7,local_208);
    if (local_200 != 0) {
        FUN_14018b900(local_200,0);
    }
    lVar11 = FUN_1400b7660(local_108);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UpdatePathXp",&DAT_1409ebaf4,iVar4,
                  *(undefined8 *)(lVar11 + 8));
    if ((uVar5 < uVar6) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        FUN_1400b7090(local_1e8,0x26a7c);
        local_128 = extraout_XMM0_00 & (undefined  [16])0x0;
        plVar10 = (longlong *)0x0;
        local_1e8[0] = &PTR_FUN_140b69230;
        local_118 = (undefined2 *)0x0;
        puVar8 = (undefined2 *)FUN_14018b280(0x10);
        local_118 = puVar8 + 8;
        local_128 = CONCAT88(puVar8,puVar8);
        if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = 0;
        }
        plVar9 = (longlong *)FUN_14018b280(0x58);
        plVar7 = plVar10;
        if (plVar9 != (longlong *)0x0) {
            FUN_1400b6390(plVar9);
            *(uint *)(plVar9 + 1) = uVar6;
            *plVar9 = (longlong)&PTR_FUN_140b69300;
            *(float *)((longlong)plVar9 + 0xc) = (float)uVar6;
            plVar7 = plVar9;
        }
        local_200 = 0;
        local_1f8 = (undefined2 *)0x0;
        local_1f0 = 0;
        do {
            lVar11 = (longlong)plVar10 + 1;
            plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (L"level"[lVar11] != L'\0');
        lVar11 = (longlong)plVar10 * 2 >> 1;
        uVar12 = lVar11 + 1;
        if (uVar12 < 0x7fffffffffffffff) {
            lVar3 = uVar12 * 2;
            local_1f8 = (undefined2 *)FUN_14018b280(lVar3,0);
            local_1f0 = (longlong)local_1f8 + lVar3;
        }
        lVar3 = (longlong)local_1f8;
        lVar11 = lVar11 * 2;
        local_200 = (longlong)local_1f8;
        FUN_1407db590(local_1f8,L"level",lVar11);
        local_1f8 = (undefined2 *)(lVar3 + lVar11);
        if (local_1f8 != (undefined2 *)0x0) {
            *local_1f8 = 0;
        }
        FUN_1400b7480(local_1e8,plVar7);
        (**(code **)(*plVar7 + 0x48))(plVar7,local_208);
        if (local_200 != 0) {
            FUN_14018b900(local_200,0);
        }
        lVar11 = FUN_1400b7660(local_1e8);
        uVar12 = *(ulonglong *)(lVar11 + 8);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PathLevelUp",&DAT_1409ebadc,uVar6,uVar12)
                ;
        lVar11 = FUN_140491cf0(DAT_140c65968,*(undefined4 *)(DAT_140c65970 + 1),uVar6);
        if (lVar11 != 0) {
            for (plVar10 = *(longlong **)(lVar11 + 0x10); plVar10 != *(longlong **)(lVar11 + 0x18);
                 plVar10 = plVar10 + 1) {
                if ((*(int *)(*plVar10 + 4) == 0) && (*(int *)(*plVar10 + 0xc) != 0)) {
                    FUN_140437a10(DAT_140c658d8,0x181,0,0,uVar12 & 0xffffffff00000000,0,1);
                    break;
                }
            }
        }
        if (local_128._0_8_ != 0) {
            FUN_14018b900(local_128._0_8_,0);
        }
        FUN_1400b7390(local_1e8);
    }
    if (local_48._0_8_ != 0) {
        FUN_14018b900(local_48._0_8_,0);
    }
    FUN_1400b7390(local_108);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14056ed20(undefined8 param_1,uint *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined *puVar4;
    bool bVar5;
    bool bVar6;
    longlong lVar7;
    undefined *puVar8;
    byte bVar9;
    int iVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong lVar15;
    undefined4 uVar16;
    undefined *puVar17;
    uint uVar18;
    ulonglong uVar19;
    undefined8 uVar20;
    longlong local_res18;
    longlong local_res20;
    undefined *local_a8;
    undefined *local_a0;
    undefined local_98 [8];
    undefined *local_90;
    longlong local_88;
    uint local_78 [4];
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;

    lVar7 = DAT_140c65970;
    local_90 = (undefined *)FUN_14018b280(0x48);
    local_88 = 0;
    uVar20 = 1;
    *local_90 = 0;
    *(undefined8 *)(local_90 + 8) = 0;
    uVar19 = 0;
    *(undefined **)(local_90 + 0x10) = local_90;
    *(undefined **)(local_90 + 0x18) = local_90;
    bVar5 = true;
    bVar6 = false;
    if (*param_2 != 0) {
        do {
            puVar1 = (undefined4 *)(*(longlong *)(param_2 + 2) + uVar19 * 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64ec8 == 0) && (iVar10 = FUN_14021f160(), -1 < iVar10)) {
                    lVar11 = (**(code **)(*DAT_140c64e80 + 0x18))();
                    goto LAB_14056ee08;
                }
                LAB_14056f142:
                uVar20 = 0x80004005;
                goto LAB_14056f090;
            }
            lVar11 = (*DAT_140c63840)(&PTR_u_PathMission_140a6bda0,
                                      *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar19 * 0x18),
                                      DAT_140c63858);
            LAB_14056ee08:
            if (lVar11 == 0) goto LAB_14056f142;
            lVar2 = *(longlong *)(lVar7 + 0x40);
            lVar15 = lVar2;
            if (*(longlong *)(lVar2 + 8) != 0) {
                lVar12 = *(longlong *)(lVar2 + 8);
                do {
                    if (*(uint *)(lVar12 + 0x20) < *(uint *)(lVar11 + 0x20)) {
                        lVar13 = *(longlong *)(lVar12 + 0x18);
                    }
                    else {
                        lVar13 = *(longlong *)(lVar12 + 0x10);
                        lVar15 = lVar12;
                    }
                    lVar12 = lVar13;
                } while (lVar13 != 0);
            }
            if ((lVar15 == lVar2) || (*(uint *)(lVar11 + 0x20) < *(uint *)(lVar15 + 0x20))) {
                local_res20 = lVar2;
                plVar14 = &local_res20;
            }
            else {
                local_res18 = lVar15;
                plVar14 = &local_res18;
            }
            if (*plVar14 == lVar2) goto LAB_14056f090;
            if ((*(longlong *)(lVar7 + 0x58) == 0) ||
                (***(int ***)(*(longlong *)(lVar7 + 0x58) + 0x48) !=
                 ***(int ***)(*(longlong *)(*plVar14 + 0x28) + 0x48))) goto LAB_14056f090;
            if (bVar5) {
                iVar10 = *(int *)(lVar7 + 8);
                bVar5 = false;
                if (iVar10 == 0) {
                    uVar16 = 0x4e;
                }
                else if (iVar10 == 1) {
                    uVar16 = 0x5f;
                }
                else {
                    if (iVar10 != 3) goto LAB_14056eef8;
                    uVar16 = 0x57;
                }
                FUN_140437a10(DAT_140c658d8,uVar16,0,0,0,0,1);
            }
            LAB_14056eef8:
            plVar14 = (longlong *)FUN_14056dce0();
            if (plVar14 != (longlong *)0x0) {
                if (puVar1[1] == 0) {
                    uVar18 = puVar1[5];
                    if (uVar18 == 0) {
                        FUN_14056f210(lVar7,plVar14,*(undefined *)(puVar1 + 4));
                        if (((*(int *)(*(longlong *)plVar14[6] + 0xc) != 2) &&
                             (*(int *)(*(longlong *)plVar14[6] + 0xc) != 0xe)) ||
                            (bVar9 = (**(code **)(*plVar14 + 0x58))(plVar14), (bVar9 & 1) != 0)) {
                            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionUnlocked",
                                          &DAT_1409ecd0c,plVar14[6]);
                            bVar6 = true;
                        }
                    }
                    else {
                        puVar8 = *(undefined **)(local_90 + 8);
                        puVar17 = local_90;
                        while (puVar4 = puVar8, puVar4 != (undefined *)0x0) {
                            if (*(uint *)(puVar4 + 0x20) < uVar18) {
                                puVar8 = *(undefined **)(puVar4 + 0x18);
                            }
                            else {
                                puVar8 = *(undefined **)(puVar4 + 0x10);
                                puVar17 = puVar4;
                            }
                        }
                        if ((puVar17 == local_90) || (uVar18 < *(uint *)(puVar17 + 0x20))) {
                            local_68 = 0;
                            local_58 = 0;
                            local_78[0] = uVar18;
                            FUN_1407db590(0,0,0);
                            local_60 = 0;
                            local_a8 = puVar17;
                            FUN_140573420(local_98,&local_a0,&local_a8,local_78);
                            puVar17 = local_a0;
                        }
                        puVar3 = *(undefined4 **)(puVar17 + 0x38);
                        if (puVar3 == *(undefined4 **)(puVar17 + 0x40)) {
                            FUN_14017b140(puVar17 + 0x28,puVar3,puVar1);
                        }
                        else {
                            if (puVar3 != (undefined4 *)0x0) {
                                *puVar3 = *puVar1;
                            }
                            *(longlong *)(puVar17 + 0x38) = *(longlong *)(puVar17 + 0x38) + 4;
                        }
                    }
                }
                else {
                    (**(code **)(*plVar14 + 0x98))(plVar14);
                }
                FUN_140570340(lVar7);
                FUN_14056b530(plVar14[6]);
            }
            uVar18 = (int)uVar19 + 1;
            uVar19 = (ulonglong)uVar18;
        } while (uVar18 < *param_2);
        if (bVar6) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionUnlockedSound","");
        }
    }
    if (local_88 != 0) {
        FUN_14042d9b0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_98);
    }
    uVar20 = 0;
    LAB_14056f090:
    if (local_88 != 0) {
        lVar7 = *(longlong *)(local_90 + 8);
        while (lVar7 != 0) {
            FUN_1401de580(local_98,*(undefined8 *)(lVar7 + 0x18));
            lVar11 = *(longlong *)(lVar7 + 0x10);
            if (*(longlong *)(lVar7 + 0x30) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 0x30),0);
            }
            FUN_14018b900(lVar7,0);
            lVar7 = lVar11;
        }
        *(undefined **)(local_90 + 0x10) = local_90;
        *(undefined8 *)(local_90 + 8) = 0;
        *(undefined **)(local_90 + 0x18) = local_90;
        local_88 = 0;
    }
    FUN_14018b900(local_90,0);
    return uVar20;
}



undefined8 FUN_14056f150(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong local_res8;

    lVar1 = DAT_140c65970;
    lVar3 = FUN_14021f3c0(*param_2);
    if (lVar3 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x40);
        local_res8 = lVar1;
        if (*(longlong *)(lVar1 + 8) != 0) {
            lVar4 = *(longlong *)(lVar1 + 8);
            do {
                if (*(uint *)(lVar4 + 0x20) < *(uint *)(lVar3 + 0x20)) {
                    lVar5 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar5 = *(longlong *)(lVar4 + 0x10);
                    local_res8 = lVar4;
                }
                lVar4 = lVar5;
            } while (lVar5 != 0);
        }
        if ((local_res8 == lVar1) || (*(uint *)(lVar3 + 0x20) < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if (local_res8 != lVar1) {
            iVar2 = FUN_14056ded0(*(undefined8 *)(local_res8 + 0x28),param_2);
            if (iVar2 != 0) {
                uVar6 = FUN_140491c60(DAT_140c65968,*param_2);
                FUN_14056b530(uVar6);
            }
            return 0;
        }
    }
    return 0x80004005;
}



void FUN_14056f210(longlong param_1,longlong *param_2,int param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;

    if (param_2 == (longlong *)0x0) {
        return;
    }
    if (param_3 == 6) {
        lVar2 = *(longlong *)param_2[6];
        iVar4 = *(int *)(lVar2 + 0x40);
    }
    else {
        if (param_3 != 1) {
            return;
        }
        lVar2 = *(longlong *)param_2[6];
        iVar4 = *(int *)(lVar2 + 0x44);
    }
    if (iVar4 == 0) {
        return;
    }
    iVar4 = *(int *)(lVar2 + 0x4c);
    if (iVar4 != 0) {
        lVar2 = *param_2;
        goto LAB_14056f33c;
    }
    if ((*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) &&
        (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 == 0xa6)) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
            uVar3 = 0x1c7;
        }
        else if (iVar1 == 1) {
            uVar3 = 0x1c9;
        }
        else if (iVar1 == 2) {
            uVar3 = 0x1cb;
        }
        else {
            if (iVar1 != 3) goto LAB_14056f2d4;
            uVar3 = 0x1cd;
        }
        lVar2 = FUN_140200220(uVar3);
        if (lVar2 == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(int *)(lVar2 + 4);
        }
    }
    LAB_14056f2d4:
    if ((*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) &&
        (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 == 0xa7)) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
            uVar3 = 0x1c6;
        }
        else if (iVar1 == 1) {
            uVar3 = 0x1c8;
        }
        else if (iVar1 == 2) {
            uVar3 = 0x1ca;
        }
        else {
            if (iVar1 != 3) goto LAB_14056f332;
            uVar3 = 0x1cc;
        }
        lVar2 = FUN_140200220(uVar3);
        if (lVar2 == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(int *)(lVar2 + 4);
        }
    }
    LAB_14056f332:
    if (iVar4 == 0) {
        return;
    }
    lVar2 = *param_2;
    LAB_14056f33c:
    (**(code **)(lVar2 + 8))(param_2);
    FUN_14043bbc0();
    return;
}



undefined8 FUN_14056f370(undefined8 param_1,int param_2)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    wchar_t *pwVar9;
    undefined8 in_stack_ffffffffffffffa8;
    undefined4 uVar10;
    undefined4 local_48;
    int local_44;
    undefined4 local_40;
    undefined8 local_38;
    undefined *local_30;

    local_38 = DAT_140c65970;
    lVar6 = FUN_1403d7bc0(DAT_140c65970);
    if ((lVar6 != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        pwVar9 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
        iVar4 = FUN_14056c2b0(lVar6);
        if ((iVar4 == 0) || (lVar7 = FUN_14024b980(iVar4), lVar7 == 0)) {
            uVar8 = 0x80004005;
        }
        else {
            iVar5 = 0;
            uVar1 = *(uint *)(**(longlong **)(lVar6 + 0x30) + 0xc);
            if ((uVar1 < 0x1c) && ((0x8008008U >> (uVar1 & 0x1f) & 1) != 0)) {
                pwVar9 = (wchar_t *)FUN_14077cf00();
            }
            else {
                iVar5 = FUN_140485fa0(iVar4,0);
            }
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            local_48 = 0;
            local_40 = 0;
            plVar3 = *(longlong **)(DAT_140c65920 + 2);
            local_44 = param_2;
            while (plVar3 != (longlong *)0x0) {
                plVar2 = (longlong *)plVar3[4];
                if (((*(int *)((longlong)plVar3 + 0x3c) == param_2) && (*(int *)(plVar3 + 7) == 0)) &&
                    (*(int *)(plVar3 + 8) == 0)) {
                    (**(code **)(*plVar3 + 8))(plVar3);
                    (**(code **)*plVar3)(plVar3,1);
                }
                uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
                plVar3 = plVar2;
            }
            if (iVar5 == 0) {
                local_30 = &DAT_14056f850;
                if (*DAT_140c65920 != 0) {
                    FUN_140486dc0(DAT_140c65920,pwVar9,&local_48,&local_38,CONCAT44(uVar10,iVar4),0);
                }
            }
            else {
                local_30 = (undefined *)0x0;
                local_38 = 0;
                if (*DAT_140c65920 != 0) {
                    FUN_140486f10(DAT_140c65920,
                                  L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3"
                            ,*(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,&local_48,&local_38);
                }
            }
            uVar8 = 0;
        }
        return uVar8;
    }
    return 0x80004005;
}



undefined8 FUN_14056f550(undefined8 param_1,uint param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    uint local_res10 [2];

    if ((DAT_140dc3410 & 1) == 0) {
        DAT_140dc3410 = DAT_140dc3410 | 1;
        DAT_140dc341c = 0;
    }
    if (4 < (int)param_2) {
        return 1;
    }
    if ((*(uint *)(DAT_140c65970 + 0xc) >> (param_2 & 0x1f) & 1) != 0) {
        return 0xa2;
    }
    uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118);
    if (DAT_140dc341c == 0) {
        DAT_140dc341c = 1;
        lVar2 = FUN_140200220(0x93d);
        DAT_140dc3418 = 0;
        if (lVar2 != 0) {
            DAT_140dc3418 = *(uint *)(lVar2 + 4);
        }
    }
    if (DAT_140dc3418 <= uVar1) {
        local_res10[0] = param_2;
        FUN_1403f4900(DAT_140c65898,0x6bd,local_res10);
        return 0xa8;
    }
    return 0xa3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14056f650(undefined8 param_1,uint param_2,int param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 local_res8;
    _FILETIME local_res20;

    lVar3 = DAT_140c65970;
    if ((DAT_140dc3420 & 1) == 0) {
        DAT_140dc3420 = DAT_140dc3420 | 1;
        _DAT_140dc3430 = 0;
    }
    if ((DAT_140dc3420 & 2) == 0) {
        DAT_140dc3420 = DAT_140dc3420 | 2;
        _DAT_140dc3440 = 0;
    }
    if (param_2 == *(uint *)(DAT_140c65970 + 8)) {
        return 0;
    }
    if ((*(uint *)(DAT_140c65970 + 0xc) >> (param_2 & 0x1f) & 1) == 0) {
        return 0xa5;
    }
    local_res8 = param_1;
    GetSystemTimeAsFileTime(&local_res20);
    lVar5 = *(longlong *)(lVar3 + 0x30);
    if (_DAT_140dc3430 == 0) {
        _DAT_140dc3430 = 1;
        lVar4 = FUN_140200220(0x93e);
        if (lVar4 == 0) {
            DAT_140dc3428 = 0;
            goto LAB_14056f731;
        }
        DAT_140dc3428 = (ulonglong)*(uint *)(lVar4 + 4);
    }
    if ((ulonglong)((longlong)local_res20 - lVar5) / 10000000 < DAT_140dc3428) {
        if (param_3 == 0) {
            return 0xa6;
        }
        uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118);
        if (_DAT_140dc3440 == 0) {
            _DAT_140dc3440 = 1;
            lVar5 = FUN_140200220(0x93e);
            if (lVar5 == 0) {
                DAT_140dc3438 = 0;
                goto LAB_14056f731;
            }
            DAT_140dc3438 = (ulonglong)*(uint *)(lVar5 + 8);
        }
        if (uVar1 < DAT_140dc3438) {
            return 0xa4;
        }
    }
    LAB_14056f731:
    uVar2 = DAT_140c65898;
    *(uint *)(lVar3 + 0x120) = param_2;
    local_res8 = CONCAT44(param_3,param_2);
    FUN_1403f4900(uVar2,0x6b2,&local_res8);
    return 0xa7;
}



undefined8 FUN_14056f800(undefined8 param_1,int *param_2)

{
    if (*param_2 != 0) {
        *(undefined4 *)(DAT_140c65970 + 0x120) = 4;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PathChangeResult",&DAT_1409eba9c,*param_2);
    return 0;
}



ulonglong FUN_14056f9f0(void)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    iVar1 = *(int *)(DAT_140c65970 + 8);
    if (iVar1 == 0) {
        FUN_14039b930(DAT_140c65898,1);
        uVar6 = 0;
    }
    else {
        if (iVar1 == 1) {
            uVar5 = FUN_1405700f0();
        }
        else if (iVar1 == 2) {
            uVar5 = FUN_140571200();
        }
        else {
            if (iVar1 != 3) {
                return 0x80004005;
            }
            uVar5 = FUN_14056fbe0();
        }
        uVar6 = uVar5 & 0xffffffff;
        if ((int)uVar5 < 0) {
            return uVar5;
        }
    }
    lVar3 = DAT_140c63628;
    if ((*(longlong **)(DAT_140c63628 + 0x2d0) != (longlong *)0x0) &&
        (*(longlong *)(DAT_140c63628 + 0x2e8) != 0)) {
        lVar2 = **(longlong **)(DAT_140c63628 + 0x2d0);
        uVar4 = FUN_1400518a0(DAT_140c63628,0x6e,1);
        (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar3 + 0x2d0),uVar4,0,0,0,0,0);
    }
    return uVar6;
}



void FUN_14056fad0(void)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;

    lVar1 = *(longlong *)(DAT_140c65970 + 0x58);
    if ((lVar1 != 0) &&
        (lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10),
                lVar6 != *(longlong *)(lVar1 + 0x10))) {
        do {
            plVar2 = *(longlong **)(lVar6 + 0x28);
            iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
            if (iVar4 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionActivate",
                              &DAT_1409eccac,plVar2[6]);
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
                for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar5 = lVar3;
                }
            }
        } while (lVar6 != *(longlong *)(lVar1 + 0x10));
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathRefresh",&DAT_1409d10ff);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_14056fbe0(longlong param_1)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    float *pfVar10;
    float *pfVar11;
    float *pfVar12;
    float *pfVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    ulonglong local_res10;
    undefined4 local_res18 [4];
    float local_a8;
    float local_a4;
    float local_a0;
    float local_9c;
    undefined local_98 [8];
    longlong local_90;
    float *local_88;
    float *local_80;

    lVar8 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar8 == 0) {
        return (float *)0x80004005;
    }
    fVar18 = 1.0;
    fVar17 = 0.0;
    fVar19 = *(float *)(lVar8 + 0x11e0);
    fVar20 = *(float *)(lVar8 + 0x11e4);
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
        (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10),
                lVar9 = *(longlong *)(lVar8 + 0x10), lVar9 != lVar8)) {
        do {
            plVar2 = *(longlong **)(lVar9 + 0x28);
            iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if (iVar5 == 0) {
                uVar1 = *(uint *)(*(longlong *)plVar2[6] + 0xc);
                if ((uVar1 < 0x1c) && ((0x8008008U >> (uVar1 & 0x1f) & 1) != 0)) {
                    iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
                    if (((iVar5 == 0) &&
                         (plVar7 = (longlong *)FUN_14077cce0(plVar2,local_res18), plVar7 != (longlong *)0x0))
                        && (lVar8 = FUN_14024b980(*(undefined4 *)(*plVar7 + 8)), lVar8 != 0)) {
                        fVar16 = *(float *)(lVar8 + 4);
                        fVar14 = *(float *)(lVar8 + 0xc) - fVar19;
                        fVar15 = *(float *)(lVar8 + 0x10) - fVar20;
                        fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + 0.0;
                        if ((fVar14 < fVar16 * fVar16 * fVar16 * fVar16) &&
                            ((fVar14 < 1e-05 || (_DAT_140c4b1e8 <= fVar18 - SQRT(fVar14) / fVar16)))) {
                            plVar7 = *(longlong **)(DAT_140c65920 + 8);
                            while (plVar3 = plVar7, plVar3 != (longlong *)0x0) {
                                plVar7 = (longlong *)plVar3[4];
                                if (*(int *)(plVar3 + 7) == 0) {
                                    (**(code **)(*plVar3 + 8))();
                                }
                            }
                            local_res10 = 0;
                            uVar6 = (**(code **)(*plVar2 + 8))(plVar2);
                            local_res10 = CONCAT44(local_res18[0],uVar6);
                            FUN_1403f4900(DAT_140c65898,0xf3,&local_res10);
                            return (float *)0x0;
                        }
                    }
                }
                else if ((uVar1 == 0x12) &&
                         ((lVar8 = (**(code **)(*plVar2 + 0x78))(plVar2,0x504d4550), lVar8 != 0 &&
                                                                                     (*(int *)(lVar8 + 0x24) != 0)))) {
                    local_res10 = local_res10 & 0xffffffff00000000 |
                                  (ulonglong)*(uint *)(*(longlong *)plVar2[6] + 0x14);
                    FUN_1403f4900(DAT_140c65898,0xf9,&local_res10);
                    return (float *)0x0;
                }
            }
            lVar8 = *(longlong *)(lVar9 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar9 = lVar8;
                        lVar8 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar8) {
                    lVar9 = lVar8;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar8 + 0x10); lVar9 = lVar8, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar8 = lVar4;
                }
            }
        } while (lVar9 != *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10));
    }
    pfVar12 = (float *)0x0;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    local_90 = 0;
    local_88 = (float *)0x0;
    local_80 = (float *)0x0;
    pfVar11 = pfVar12;
    if (lVar8 != *(longlong *)(param_1 + 0xa8)) {
        fVar16 = 0.5;
        pfVar13 = pfVar12;
        do {
            lVar9 = FUN_140722000();
            if (*(int *)(*(longlong *)(lVar9 + 0x10) + 8) == 2) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c63e98 != 0) || (iVar5 = FUN_14024b720(), iVar5 < 0)) goto LAB_14056ffff;
                    pfVar10 = (float *)(**(code **)(*DAT_140c65388 + 0x18))();
                }
                else {
                    pfVar10 = (float *)(*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,
                                                        *(undefined4 *)(lVar8 + 0x24),DAT_140c63858);
                }
                if (pfVar10 != (float *)0x0) {
                    local_a8 = fVar18 - SQRT((fVar19 - pfVar10[3]) * (fVar19 - pfVar10[3]) +
                                             (fVar20 - pfVar10[4]) * (fVar20 - pfVar10[4]) + 0.0) / pfVar10[1]
                            ;
                    if (local_a8 <= fVar16) {
                        local_a0 = 0.0;
                        if (fVar17 < local_a8) {
                            local_a0 = 1.401298e-45;
                        }
                    }
                    else {
                        local_a0 = 2.802597e-45;
                    }
                    local_a4 = *pfVar10;
                    local_9c = *(float *)(lVar8 + 0x20);
                    if (pfVar11 == pfVar13) {
                        FUN_1405737b0(local_98,pfVar11,&local_a8);
                        pfVar11 = local_88;
                        pfVar13 = local_80;
                    }
                    else {
                        if (pfVar11 != (float *)0x0) {
                            *pfVar11 = local_a8;
                            pfVar11[1] = local_a4;
                            pfVar11[2] = local_a0;
                            pfVar11[3] = local_9c;
                        }
                        local_88 = pfVar11 + 4;
                        pfVar11 = local_88;
                    }
                }
            }
            LAB_14056ffff:
            lVar9 = *(longlong *)(lVar8 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar8 = lVar9;
                        lVar9 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar9) {
                    lVar8 = lVar9;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar9 + 0x10); lVar8 = lVar9, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar9 = lVar4;
                }
            }
        } while (lVar8 != *(longlong *)(param_1 + 0xa8));
    }
    lVar8 = local_90;
    if (((longlong)pfVar11 - local_90 & 0xfffffffffffffff0U) == 0) {
        pfVar12 = (float *)0x80004005;
    }
    else {
        FUN_140573980(local_90,pfVar11);
        FUN_14039bf20(DAT_140c65898,*(undefined4 *)(lVar8 + 8),*(undefined4 *)(lVar8 + 0xc));
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    return pfVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405700f0(longlong param_1)

{
    float fVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    undefined4 uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 local_res10 [2];
    undefined8 local_res18 [2];

    lVar8 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar8 == 0) {
        return 0x80004005;
    }
    fVar13 = *(float *)(lVar8 + 0x11e0);
    fVar14 = *(float *)(lVar8 + 0x11e4);
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
        (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10),
                lVar9 = *(longlong *)(lVar8 + 0x10), lVar9 != lVar8)) {
        fVar12 = 1.0;
        do {
            plVar2 = *(longlong **)(lVar9 + 0x28);
            iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if (((((iVar5 == 0) && (*(uint *)(*(longlong *)plVar2[6] + 0xc) < 0x1c)) &&
                  ((0x8008008U >> (*(uint *)(*(longlong *)plVar2[6] + 0xc) & 0x1f) & 1) != 0)) &&
                 ((iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2), iVar5 == 0 &&
                                                                  (plVar7 = (longlong *)FUN_14077cce0(plVar2,local_res10), plVar7 != (longlong *)0x0)))) &&
                (lVar8 = FUN_14024b980(*(undefined4 *)(*plVar7 + 8)), lVar8 != 0)) {
                fVar1 = *(float *)(lVar8 + 4);
                fVar10 = *(float *)(lVar8 + 0xc) - fVar13;
                fVar11 = *(float *)(lVar8 + 0x10) - fVar14;
                fVar10 = fVar10 * fVar10 + fVar11 * fVar11 + 0.0;
                if ((fVar10 < fVar1 * fVar1 * fVar1 * fVar1) &&
                    ((fVar10 < 1e-05 || (_DAT_140c4b1e8 <= fVar12 - SQRT(fVar10) / fVar1)))) {
                    plVar7 = *(longlong **)(DAT_140c65920 + 8);
                    while (plVar3 = plVar7, plVar3 != (longlong *)0x0) {
                        plVar7 = (longlong *)plVar3[4];
                        if (*(int *)(plVar3 + 7) == 0) {
                            (**(code **)(*plVar3 + 8))();
                        }
                    }
                    local_res18[0] = 0;
                    uVar6 = (**(code **)(*plVar2 + 8))(plVar2);
                    local_res18[0] = CONCAT44(local_res10[0],uVar6);
                    FUN_1403f4900(DAT_140c65898,0xf3,local_res18);
                    return 0;
                }
            }
            lVar8 = *(longlong *)(lVar9 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar9 = lVar8;
                        lVar8 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar8) {
                    lVar9 = lVar8;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar8 + 0x10); lVar9 = lVar8, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar8 = lVar4;
                }
            }
        } while (lVar9 != *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10));
    }
    return 0x80004005;
}



void FUN_140570340(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    int iVar11;
    undefined4 uStack52;

    lVar6 = *(longlong *)param_2[6];
    if (((*(uint *)(lVar6 + 0xc) < 0x1c) && ((0x8008008U >> (*(uint *)(lVar6 + 0xc) & 0x1f) & 1) != 0)
        ) && (lVar6 = FUN_140721ef0(lVar6,*(undefined4 *)(lVar6 + 0x14)), lVar6 != 0)) {
        lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x10);
        iVar11 = 0;
        if (lVar10 != *(longlong *)(lVar6 + 0x10)) {
            do {
                uVar1 = *(undefined4 *)**(undefined8 **)(lVar10 + 0x28);
                puVar7 = (undefined8 *)FUN_14018b280(0x20);
                if (puVar7 == (undefined8 *)0x0) {
                    puVar7 = (undefined8 *)0x0;
                }
                else {
                    uVar4 = (**(code **)(*param_2 + 8))(param_2);
                    uVar2 = *(undefined8 *)(lVar10 + 0x28);
                    puVar7[3] = 0;
                    *puVar7 = uVar2;
                    *(int *)((longlong)puVar7 + 0xc) = iVar11;
                    *(undefined4 *)(puVar7 + 1) = 0;
                    *(undefined4 *)(puVar7 + 2) = uVar4;
                    *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
                }
                lVar9 = *(longlong *)(param_1 + 0xd0);
                lVar8 = FUN_14018db00(*(undefined8 *)(param_1 + 200),lVar9 + 1,0x10);
                *(ulonglong *)(lVar8 + lVar9 * 0x10) = CONCAT44(uStack52,uVar1);
                *(undefined8 **)(lVar8 + 8 + lVar9 * 0x10) = puVar7;
                if (*(longlong *)(param_1 + 200) != lVar8) {
                    FUN_1407db590(lVar8,*(longlong *)(param_1 + 200),*(longlong *)(param_1 + 0xd0) << 4);
                    lVar3 = *(longlong *)(param_1 + 200);
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    *(longlong *)(param_1 + 200) = lVar8;
                }
                *(longlong *)(param_1 + 0xd0) = lVar9 + 1;
                iVar5 = (**(code **)(*param_2 + 0x38))(param_2);
                if ((iVar5 == 0) &&
                    ((iVar5 = (**(code **)(*param_2 + 0x28))(param_2), iVar5 == 0 ||
                                                                       (iVar5 = (**(code **)(*param_2 + 0x50))(param_2), iVar5 == 0)))) {
                    if (*(int *)(puVar7 + 1) != 0) {
                        *(undefined4 *)(puVar7 + 1) = 0;
                    }
                }
                else if (*(int *)(puVar7 + 1) != 1) {
                    *(undefined4 *)(puVar7 + 1) = 1;
                }
                lVar9 = *(longlong *)(lVar10 + 0x18);
                iVar11 = iVar11 + 1;
                if (lVar9 == 0) {
                    lVar9 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                        do {
                            lVar10 = lVar9;
                            lVar9 = *(longlong *)(lVar10 + 8);
                        } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                    }
                    if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                        lVar10 = lVar9;
                    }
                }
                else {
                    for (lVar8 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar8 != 0;
                         lVar8 = *(longlong *)(lVar8 + 0x10)) {
                        lVar9 = lVar8;
                    }
                }
            } while (lVar10 != *(longlong *)(lVar6 + 0x10));
        }
        FUN_1405732a0(param_1 + 200);
    }
    return;
}



void FUN_140570570(undefined8 param_1,uint param_2,int param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c65970 + 0xd0) == 0) {
        return;
    }
    uVar5 = *(ulonglong *)(DAT_140c65970 + 0xd0);
    do {
        uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
        uVar1 = *(uint *)(*(longlong *)(DAT_140c65970 + 200) + uVar3 * 0x10);
        if (param_2 < uVar1) {
            uVar4 = uVar3 + 1;
            uVar3 = uVar5;
        }
        else if (param_2 <= uVar1) {
            lVar2 = *(longlong *)(*(longlong *)(DAT_140c65970 + 200) + 8 + uVar3 * 0x10);
            if (*(int *)(lVar2 + 8) == param_3) {
                return;
            }
            *(int *)(lVar2 + 8) = param_3;
            if (param_3 == 0) {
                return;
            }
            *(undefined4 *)(lVar2 + 0x14) = 1;
            return;
        }
        uVar5 = uVar3;
        if (uVar3 <= uVar4) {
            return;
        }
    } while( true );
}



wchar_t * FUN_140570600(int param_1)

{
    if ((DAT_140dc3448 & 1) == 0) {
        DAT_140dc3448 = DAT_140dc3448 | 1;
        DAT_140dc3450 = 0;
        DAT_140dc3454 = 4;
    }
    if ((DAT_140dc3450 <= param_1) && (param_1 < DAT_140dc3454)) {
        return (wchar_t *)(&PTR_u_soldier_140c39018)[param_1];
    }
    return L"nopath";
}



longlong * FUN_140570660(undefined8 param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar2 = DAT_140c65970;
    lVar9 = 0;
    if (*(longlong *)(DAT_140c65970 + 0x58) == 0) {
        param_2[1] = 0;
        *param_2 = 0;
        return param_2;
    }
    lVar5 = *(longlong *)(*(longlong *)(DAT_140c65970 + 0x58) + 0x10);
    lVar7 = *(longlong *)(lVar5 + 0x10);
    lVar8 = lVar9;
    lVar10 = lVar9;
    if (lVar7 != lVar5) {
        do {
            plVar1 = *(longlong **)(lVar7 + 0x28);
            iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
            lVar9 = lVar8;
            if ((((iVar3 != 0) && (iVar3 = (**(code **)(*plVar1 + 0xd0))(plVar1), iVar3 == 3)) &&
                 (*(int *)(*(longlong *)plVar1[6] + 0xc) == 7)) &&
                ((lVar5 = FUN_140224480(*(undefined4 *)(*(longlong *)plVar1[6] + 0x14)), lVar5 != 0 &&
                                                                                         (iVar3 = *(int *)(lVar5 + 0x10), iVar3 != 0)))) {
                uVar4 = (**(code **)(*plVar1 + 8))(plVar1);
                lVar6 = FUN_14018db00(lVar8,lVar10 + 1,0xc);
                lVar5 = lVar10 * 0xc;
                *(int *)(lVar5 + lVar6) = iVar3;
                *(undefined4 *)(lVar5 + 4 + lVar6) = 1;
                *(undefined4 *)(lVar5 + 8 + lVar6) = uVar4;
                if ((lVar8 != lVar6) && (FUN_1407db590(lVar6,lVar8), lVar9 = lVar6, lVar8 != 0)) {
                    (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
                }
                lVar10 = lVar10 + 1;
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
                for (lVar8 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar5 = lVar8;
                }
            }
            lVar8 = lVar9;
        } while (lVar7 != *(longlong *)(*(longlong *)(lVar2 + 0x58) + 0x10));
    }
    param_2[1] = lVar10;
    *param_2 = lVar9;
    return param_2;
}



byte FUN_140570810(undefined8 param_1,longlong param_2,longlong **param_3)

{
    longlong lVar1;
    byte bVar2;
    int iVar3;
    longlong *plVar4;
    int *piVar5;

    lVar1 = DAT_140c65970;
    if (((*(int *)(DAT_140c65970 + 8) != 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x18) == 0)
            ) {
        return 0;
    }
    if (*(longlong *)(DAT_140c65970 + 0x58) == 0) {
        plVar4 = (longlong *)FUN_1403d7bc0(DAT_140c65970);
        if (plVar4 == (longlong *)0x0) {
            return 0;
        }
        iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
        if (iVar3 == 0) {
            return 0;
        }
        return 2;
    }
    plVar4 = (longlong *)
            FUN_140489580(*(longlong *)(DAT_140c65970 + 0x58),
                          *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x148));
    if (param_3 != (longlong **)0x0) {
        *param_3 = plVar4;
    }
    if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_1403d7bc0(lVar1,*(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x148))
                ;
        if ((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar3 != 0))
        {
            return 2;
        }
        LAB_1405708f8:
        bVar2 = 0;
    }
    else {
        lVar1 = *(longlong *)plVar4[6];
        if (*(int *)(lVar1 + 0xc) == 0) {
            piVar5 = (int *)FUN_140617410(lVar1,*(undefined4 *)(lVar1 + 0x14));
            if (piVar5 == (int *)0x0) goto LAB_1405708f8;
            if (*piVar5 != 0) {
                if (*(int *)(*(longlong *)(piVar5 + 0x26) + 4) == 4) {
                    return (*piVar5 == 1) + 3;
                }
                return 3;
            }
            iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
            if (iVar3 == 0) {
                if (*(int *)(*(longlong *)(piVar5 + 0x26) + 4) != 4) {
                    return 1;
                }
                return 4;
            }
        }
        else {
            iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
            if (iVar3 == 0) {
                bVar2 = (**(code **)(*plVar4 + 0x58))(plVar4);
                return (bVar2 & 1) * '\x02' | 1;
            }
        }
        bVar2 = 2;
    }
    return bVar2;
}



undefined8 FUN_140570990(longlong param_1,longlong param_2,longlong **param_3,undefined8 param_4)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    longlong local_res8;

    lVar1 = DAT_140c65970;
    if (((((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 0)) && (param_2 != 0)) &&
         (((*(longlong *)(param_2 + 0x18) != 0 &&
            ((local_res8 = param_1,
                    plVar4 = (longlong *)FUN_140574200(DAT_140c65970,param_2,5,param_4,&local_res8),
                    plVar4 != (longlong *)0x0 ||
                    (plVar4 = (longlong *)FUN_140574200(lVar1,param_2,6,param_4,&local_res8),
                            plVar4 != (longlong *)0x0)))) &&
           (iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar2 == 0)))) &&
        (((*(int *)(*(longlong *)plVar4[6] + 8) == 0 &&
           (iVar2 = (**(code **)(*plVar4 + 0x58))(plVar4), lVar1 = local_res8, iVar2 == 1)) &&
          ((*(int *)(local_res8 + 0x10) == 0 ||
            ((((*(int *)(*(longlong *)plVar4[6] + 0xc) != 5 || (*(int *)(local_res8 + 0x10) != 2)) ||
               (uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4), uVar3 < *(uint *)(lVar1 + 0xc))) &&
              ((*(int *)(param_2 + 0x35f8) != -1 &&
                (iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4), iVar2 == 0)))))))))) {
        if (param_3 != (longlong **)0x0) {
            *param_3 = plVar4;
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_140570ab0(undefined8 param_1,longlong param_2,longlong **param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 uVar4;

    lVar1 = DAT_140c65970;
    if ((((DAT_140c65970 == 0) || (*(int *)(DAT_140c65970 + 8) != 0)) || (param_2 == 0)) ||
        ((*(longlong *)(param_2 + 0x18) == 0 || (*(longlong *)(DAT_140c65970 + 0x58) == 0)))) {
        return 0;
    }
    plVar3 = (longlong *)FUN_140573a30(DAT_140c65970);
    if (plVar3 == (longlong *)0x0) {
        LAB_140570b49:
        plVar3 = (longlong *)FUN_140573ba0(lVar1,param_2);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
            iVar2 = FUN_1404a1950();
            if (iVar2 != 0) {
                if (param_3 != (longlong **)0x0) {
                    *param_3 = plVar3;
                }
                goto LAB_140570b2f;
            }
        }
        uVar4 = 0;
    }
    else {
        (**(code **)(*plVar3 + 8))(plVar3);
        iVar2 = FUN_1404a1950();
        if (iVar2 == 0) goto LAB_140570b49;
        if (param_3 != (longlong **)0x0) {
            *param_3 = plVar3;
        }
        LAB_140570b2f:
        uVar4 = 1;
    }
    return uVar4;
}



void FUN_140570b90(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_18 [16];

    lVar2 = DAT_140c65970;
    lVar1 = FUN_140617410(param_1,*param_2);
    if (lVar1 != 0) {
        FUN_1400293c0(lVar2 + 0x60,local_18,param_2);
        FUN_1406163a0(lVar1,param_2);
        lVar2 = *(longlong *)(lVar2 + 0x58);
        if (lVar2 != 0) {
            lVar2 = FUN_140572e80(lVar2,*param_2,0);
            if (lVar2 != 0) {
                FUN_14056b530(*(undefined8 *)(lVar2 + 0x30));
            }
        }
    }
    return;
}



void FUN_140570c10(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_18 [16];

    lVar2 = DAT_140c65970;
    lVar1 = FUN_140617410(param_1,*param_2);
    if (lVar1 != 0) {
        FUN_1400293c0(lVar2 + 0x60,local_18,param_2);
        FUN_1406167b0(lVar1,param_2);
        lVar2 = *(longlong *)(lVar2 + 0x58);
        if (lVar2 != 0) {
            lVar2 = FUN_140572e80(lVar2,*param_2,0);
            if (lVar2 != 0) {
                FUN_14056b530(*(undefined8 *)(lVar2 + 0x30));
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140570c90(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 local_res8;
    undefined8 *in_stack_ffffffffffffff78;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    longlong *local_50;
    undefined4 local_48;
    undefined4 local_44;
    undefined8 local_40;
    undefined8 local_38;
    longlong *local_30;

    lVar4 = DAT_140c65970;
    if ((((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 2)) &&
         (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 != 0)) &&
        ((param_2 != 0 && (*(longlong *)(param_2 + 0x18) != 0)))) {
        iVar5 = DAT_140c4d460;
        if (*DAT_140c63750 < DAT_140c4d460) {
            iVar5 = *DAT_140c63750;
        }
        local_res8 = param_1;
        lVar6 = FUN_1402215c0(*(undefined4 *)(&DAT_140c4d470 + (longlong)iVar5 * 4));
        if (lVar6 != 0) {
            lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x180);
            lVar9 = *(longlong *)(lVar8 + 0x10);
            if (lVar9 != lVar8) {
                do {
                    puVar2 = *(undefined4 **)(lVar9 + 0x20);
                    if ((((puVar2 != (undefined4 *)0x0) && (*(int *)(param_2 + 0x3754) != 0)) &&
                         ((lVar8 = *(longlong *)(param_2 + 0x18), lVar8 != 0 &&
                                                                  (((*(longlong *)(lVar8 + 0x188) != 0 || (*(longlong *)(lVar8 + 0x1c8) != 0)) &&
                                                                    ((~(*(uint *)(param_2 + 0x3750) >> 1) & 1) != 0)))))) &&
                        (iVar5 = FUN_140574b70(lVar1,param_2,puVar2), iVar5 != 0)) {
                        if (param_4 != 0) {
                            local_60 = 0;
                            local_68 = 1;
                            FUN_140573d10(param_4,&local_68);
                        }
                        if (param_3 != 0) {
                            *(undefined *)(param_2 + 0x3264) = 1;
                            *(undefined *)(param_2 + 0x3267) = 1;
                        }
                    }
                    if (*(longlong *)(lVar4 + 0x58) != 0) {
                        uVar10 = 2;
                        if (puVar2[0xc] != 0) {
                            uVar10 = 0xe;
                        }
                        plVar7 = (longlong *)FUN_140572e80(*(longlong *)(lVar4 + 0x58),*puVar2,uVar10);
                        if (((plVar7 != (longlong *)0x0) &&
                             (iVar5 = (**(code **)(*plVar7 + 0x38))(plVar7), iVar5 == 0)) &&
                            (iVar5 = FUN_140573dc0(param_2,lVar1,puVar2,plVar7), iVar5 != 0)) {
                            if (param_4 != 0) {
                                local_58 = 0;
                                local_50 = plVar7;
                                FUN_140573d10(param_4,&local_58);
                            }
                            if (param_3 != 0) {
                                *(undefined *)(param_2 + 0x321c) = 1;
                                *(undefined *)(param_2 + 0x321f) = 1;
                            }
                        }
                        in_stack_ffffffffffffff78 = &local_res8;
                        iVar5 = FUN_140573e90(param_2,lVar1,puVar2,plVar7,in_stack_ffffffffffffff78,
                                              *(uint *)(lVar6 + 0x3c) & 1);
                        if (iVar5 != 0) {
                            if (param_4 != 0) {
                                local_40 = 0;
                                local_48 = 2;
                                local_44 = (undefined4)local_res8;
                                FUN_140573d10(param_4,&local_48);
                            }
                            if (param_3 != 0) {
                                lVar8 = (longlong)(int)(0x5a - (uint)(plVar7 != (longlong *)0x0));
                                *(undefined *)(param_2 + 0x1914 + lVar8 * 0x48) = 1;
                                *(undefined *)(param_2 + 0x1917 + lVar8 * 0x48) = 1;
                            }
                        }
                        iVar5 = FUN_1405740b0(param_2,lVar1,puVar2,plVar7);
                        if (iVar5 != 0) {
                            if (param_4 != 0) {
                                local_30 = (longlong *)0x0;
                                local_38 = 6;
                                FUN_140573d10(param_4);
                            }
                            if (param_3 != 0) {
                                lVar8 = (longlong)(int)(0x5a - (uint)(plVar7 != (longlong *)0x0));
                                *(undefined *)(param_2 + 0x1914 + lVar8 * 0x48) = 1;
                                *(undefined *)(param_2 + 0x1917 + lVar8 * 0x48) = 1;
                            }
                        }
                    }
                    lVar8 = *(longlong *)(lVar9 + 0x18);
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *)(lVar9 + 8);
                        if (lVar9 == *(longlong *)(lVar8 + 0x18)) {
                            do {
                                lVar9 = lVar8;
                                lVar8 = *(longlong *)(lVar9 + 8);
                            } while (lVar9 == *(longlong *)(lVar8 + 0x18));
                        }
                        if (*(longlong *)(lVar9 + 0x18) != lVar8) {
                            lVar9 = lVar8;
                        }
                    }
                    else {
                        for (lVar3 = *(longlong *)(lVar8 + 0x10); lVar9 = lVar8, lVar3 != 0;
                             lVar3 = *(longlong *)(lVar3 + 0x10)) {
                            lVar8 = lVar3;
                        }
                    }
                } while (lVar9 != *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x180));
            }
            if (*(longlong *)(lVar4 + 0x58) != 0) {
                lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1a0);
                lVar8 = *(longlong *)(lVar6 + 0x10);
                if (lVar8 != lVar6) {
                    do {
                        plVar7 = (longlong *)
                                FUN_140572e80(*(undefined8 *)(lVar4 + 0x58),**(undefined4 **)(lVar8 + 0x20),
                                              0x14);
                        if ((plVar7 != (longlong *)0x0) &&
                            (iVar5 = (**(code **)(*plVar7 + 0x38))(plVar7), iVar5 == 0)) {
                            if (param_4 != 0) {
                                local_38 = 3;
                                local_30 = plVar7;
                                FUN_140573d10(param_4);
                            }
                            if (param_3 != 0) {
                                *(undefined *)(param_2 + 0x321c) = 1;
                            }
                        }
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
                            for (lVar9 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar9 != 0;
                                 lVar9 = *(longlong *)(lVar9 + 0x10)) {
                                lVar6 = lVar9;
                            }
                        }
                    } while (lVar8 != *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1a0));
                }
                lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1c0);
                lVar8 = *(longlong *)(lVar6 + 0x10);
                if (lVar8 != lVar6) {
                    do {
                        puVar2 = *(undefined4 **)(lVar8 + 0x20);
                        plVar7 = (longlong *)FUN_140572e80(*(undefined8 *)(lVar4 + 0x58),*puVar2,0x17);
                        if ((plVar7 != (longlong *)0x0) && (iVar5 = (**(code **)(*plVar7 + 0x38))(), iVar5 == 0)
                                ) {
                            in_stack_ffffffffffffff78 =
                                    (undefined8 *)
                                            ((ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000 |
                                             (ulonglong)*(uint *)(lVar8 + 0x28));
                            iVar5 = FUN_140574160(param_2,lVar1,puVar2,plVar7,in_stack_ffffffffffffff78);
                            if (iVar5 != 0) {
                                if (param_4 != 0) {
                                    local_38 = 4;
                                    local_30 = plVar7;
                                    FUN_140573d10(param_4);
                                }
                                if (param_3 != 0) {
                                    *(undefined *)(param_2 + 0x321c) = 1;
                                    *(undefined *)(param_2 + 0x321f) = 1;
                                }
                            }
                        }
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
                            for (lVar9 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar9 != 0;
                                 lVar9 = *(longlong *)(lVar9 + 0x10)) {
                                lVar6 = lVar9;
                            }
                        }
                    } while (lVar8 != *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1c0));
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1405711b0(undefined8 param_1,undefined4 param_2)

{
    int iVar1;

    if (*(int *)(DAT_140c65970 + 8) != 2) {
        return 0x80004005;
    }
    iVar1 = DAT_140c4d460;
    if (*DAT_140c63750 < DAT_140c4d460) {
        iVar1 = *DAT_140c63750;
    }
    FUN_14002c690(&PTR_PTR_LAB_140c4d450,iVar1,param_2);
    return 0;
}



undefined8 FUN_140571200(longlong param_1)

{
    int iVar1;
    int iVar2;
    ulonglong local_res8 [4];

    if (*(int *)(param_1 + 0xc0) != 0) {
        local_res8[0] = local_res8[0] & 0xffffffffffffff00;
        FUN_1403f4900(DAT_140c65898,0x15f,local_res8);
        return 0;
    }
    iVar1 = *DAT_140c63750;
    iVar2 = DAT_140c4d460;
    if (iVar1 < DAT_140c4d460) {
        iVar2 = iVar1;
    }
    if (*(int *)(&DAT_140c4d470 + (longlong)iVar2 * 4) != 0) {
        iVar2 = DAT_140c4d460;
        if (iVar1 < DAT_140c4d460) {
            iVar2 = iVar1;
        }
        local_res8[0] = CONCAT44(1,*(undefined4 *)(&DAT_140c4d470 + (longlong)iVar2 * 4));
        FUN_1403f4900(DAT_140c65898,0x180,local_res8);
    }
    return 0;
}



undefined8 FUN_1405712a0(ulonglong param_1)

{
    int iVar1;
    ulonglong local_res8 [4];

    if (*(int *)(DAT_140c65970 + 8) == 2) {
        if (*(int *)(DAT_140c65970 + 0xc0) != 0) {
            local_res8[0] = param_1 & 0xffffffffffffff00;
            FUN_1403f4900(DAT_140c65898,0xf0,local_res8);
            return 0;
        }
        local_res8[0] = param_1;
        iVar1 = FUN_140571350();
        if (iVar1 != 0) {
            iVar1 = DAT_140c4d460;
            if (*DAT_140c63750 < DAT_140c4d460) {
                iVar1 = *DAT_140c63750;
            }
            local_res8[0] = (ulonglong)*(uint *)(&DAT_140c4d470 + (longlong)iVar1 * 4);
            FUN_1403f4900(DAT_140c65898,0x180,local_res8);
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_140571350(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    if ((*(int *)(param_1 + 8) == 2) &&
        ((*(int *)(param_1 + 0xc4) == 0 || (-1 < DAT_140c636a8 - *(int *)(param_1 + 0xc4))))) {
        if ((DAT_140dc3458 & 1) == 0) {
            DAT_140dc3458 = DAT_140dc3458 | 1;
            lVar2 = FUN_140200220(0x486);
            if (lVar2 == 0) {
                DAT_140dc345c = 0;
            }
            else {
                DAT_140dc345c = *(int *)(lVar2 + 4);
            }
        }
        if ((DAT_140dc345c == 0) ||
            (iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),DAT_140dc345c,0,0,0),
                    iVar1 != 0)) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140571400(undefined8 param_1,int param_2,ulonglong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;
    int iVar5;
    uint uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong local_res8;
    ulonglong in_stack_ffffffffffffff98;
    undefined4 local_48;
    int local_44;
    undefined4 local_40;
    undefined local_38 [16];

    uVar4 = DAT_140c65970;
    param_3 = param_3 & 0xffffffff;
    plVar7 = (longlong *)FUN_1403d7bc0(DAT_140c65970);
    if (((plVar7 == (longlong *)0x0) || (*(longlong *)(DAT_140c65898 + 0x6490) == 0)) ||
        (iVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7), iVar5 < 2)) {
        return 0x80004005;
    }
    uVar6 = (uint)param_3;
    iVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
    if (iVar5 != 0) {
        return 0x80004005;
    }
    lVar8 = *(longlong *)plVar7[6];
    iVar5 = *(int *)(lVar8 + 0xc);
    if (iVar5 == 0x14) {
        lVar8 = FUN_140220d40(*(undefined4 *)(lVar8 + 0x14));
        if (lVar8 == 0) {
            return 0x80004005;
        }
        if (7 < uVar6) {
            return 0x80004005;
        }
        uVar6 = *(uint *)(lVar8 + 0x30 + param_3 * 4);
    }
    else if (iVar5 == 0x17) {
        lVar8 = FUN_140221180(*(undefined4 *)(lVar8 + 0x14));
        if (lVar8 == 0) {
            return 0x80004005;
        }
        if (9 < uVar6) {
            return 0x80004005;
        }
        uVar6 = *(uint *)(lVar8 + 0x7c + param_3 * 4);
        lVar1 = *(longlong *)(DAT_140c65928 + 8);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar6) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar6 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if ((local_res8 == lVar1) || (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 == 0)) {
            uVar6 = *(uint *)(lVar8 + 0x2c + param_3 * 4);
        }
        else {
            iVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7);
            in_stack_ffffffffffffff98 =
                    in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(iVar5 != 3);
            uVar6 = FUN_140487e40(lVar1,0,lVar8 + (param_3 + 0xb) * 4,1,in_stack_ffffffffffffff98,0,0);
        }
    }
    else {
        if (iVar5 != 0x19) {
            return 0x80004005;
        }
        lVar8 = FUN_140222b00(*(undefined4 *)(lVar8 + 0x14));
        if (lVar8 == 0) {
            return 0x80004005;
        }
        if (7 < uVar6) {
            return 0x80004005;
        }
        uVar6 = *(uint *)(lVar8 + 0x44 + param_3 * 4);
        lVar1 = *(longlong *)(DAT_140c65928 + 8);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar6) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar6 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if ((local_res8 == lVar1) || (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 == 0)) {
            uVar6 = *(uint *)(lVar8 + 0x24 + param_3 * 4);
        }
        else {
            iVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7);
            in_stack_ffffffffffffff98 =
                    in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(iVar5 != 3);
            uVar6 = FUN_140487e40(lVar1,0,lVar8 + (param_3 + 9) * 4,1,in_stack_ffffffffffffff98,0,0);
        }
    }
    lVar8 = FUN_14024b980(uVar6);
    if (lVar8 == 0) {
        return 0x80004005;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = ZEXT1216(*(undefined (*) [12])(lVar8 + 0xc));
    plVar7 = *(longlong **)(DAT_140c65920 + 2);
    local_44 = param_2;
    while (plVar3 = plVar7, plVar3 != (longlong *)0x0) {
        plVar7 = (longlong *)plVar3[4];
        if (((*(int *)((longlong)plVar3 + 0x3c) == param_2) && (*(int *)(plVar3 + 7) == 0)) &&
            (*(int *)(plVar3 + 8) == 0)) {
            (**(code **)(*plVar3 + 8))(plVar3);
            (**(code **)*plVar3)(plVar3,1);
        }
    }
    iVar5 = FUN_140485fa0(uVar6,0);
    if (iVar5 == 0) {
        local_38 = CONCAT88(0x140571790,uVar4);
        if (*DAT_140c65920 != 0) {
            FUN_140486dc0(DAT_140c65920,
                          L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
                          &local_48,local_38,
                          in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)uVar6,0);
        }
    }
    else {
        local_38 = local_38 & (undefined  [16])0xffffffffffffffff;
        if (*DAT_140c65920 != 0) {
            FUN_140486f10(DAT_140c65920,
                          L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
                          *(longlong *)(DAT_140c65898 + 0x6490) + 0x11b0,&local_48,local_38);
        }
    }
    return 0;
}



undefined8 FUN_140571850(undefined8 param_1,longlong param_2,longlong **param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;

    lVar2 = DAT_140c65970;
    if ((((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) == 3)) && (param_2 != 0)) &&
        ((*(longlong *)(param_2 + 0x18) != 0 && (*(longlong *)(DAT_140c65970 + 0x58) != 0)))) {
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x1d8);
        if (((lVar7 != 0) &&
             (plVar5 = (longlong *)FUN_1404804a0(DAT_140c65970,**(undefined4 **)(lVar7 + 8),0xd),
                     plVar5 != (longlong *)0x0)) &&
            ((iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5), iVar3 == 0 &&
                                                             (uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5), (uVar4 >> 0x1e & 1) == 0)))) {
            if (param_3 != (longlong **)0x0) {
                *param_3 = plVar5;
            }
            return 0x22;
        }
        lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x88) + 0x10);
        if (lVar7 != *(longlong *)(lVar2 + 0x88)) {
            do {
                if (((((*(int *)(param_2 + 8) == *(int *)(lVar7 + 0x24)) &&
                       (lVar6 = FUN_140722000(), lVar6 != 0)) && (*(longlong *)(lVar6 + 0x18) != 0)) &&
                     ((plVar5 = (longlong *)
                             FUN_1404804a0(lVar2,**(undefined4 **)(*(longlong *)(lVar6 + 0x18) + 8),0xd),
                             plVar5 != (longlong *)0x0 &&
                             (iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5), iVar3 == 0)))) &&
                    ((uVar4 = (**(code **)(*plVar5 + 0x58))(plVar5), (uVar4 >> 0x1e & 1) != 0 &&
                                                                     (iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5), iVar3 == 0)))) {
                    if (param_3 != (longlong **)0x0) {
                        *param_3 = plVar5;
                    }
                    return 0x23;
                }
                lVar6 = *(longlong *)(lVar7 + 0x18);
                if (lVar6 == 0) {
                    lVar6 = *(longlong *)(lVar7 + 8);
                    if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                        do {
                            lVar7 = lVar6;
                            lVar6 = *(longlong *)(lVar7 + 8);
                        } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                    }
                    if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                        lVar7 = lVar6;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar6 = lVar1;
                    }
                }
            } while (lVar7 != *(longlong *)(lVar2 + 0x88));
        }
        iVar3 = FUN_14077d4e0(lVar2,param_2,0,param_3);
        if (iVar3 == 0) {
            if (((DAT_140c65970 == 0) || (*(int *)(DAT_140c65970 + 8) != 3)) ||
                ((*(longlong *)(param_2 + 0x18) == 0 ||
                  ((((plVar5 = (longlong *)FUN_140573630(lVar2,param_2), plVar5 == (longlong *)0x0 ||
                                                                         (iVar3 = (**(code **)(*plVar5 + 0x38))(plVar5), iVar3 != 0)) ||
                     (*(int *)(param_2 + 0x35f8) == -1)) ||
                    (iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5), iVar3 != 0)))))) {
                return 0x65;
            }
            if (param_3 != (longlong **)0x0) {
                *param_3 = plVar5;
            }
        }
        return 0x1f;
    }
    return 0x65;
}



undefined8 FUN_140571ac0(longlong param_1,longlong param_2,longlong **param_3)

{
    uint uVar1;
    uint *puVar2;
    int iVar3;
    longlong *plVar4;
    uint *puVar5;
    uint *puVar6;
    longlong lVar7;
    uint *puVar8;
    float fVar9;
    float fVar10;
    uint *local_res20;

    if ((((*(int *)(DAT_140c65970 + 8) != 3) || (param_2 == 0)) ||
         (*(longlong *)(param_2 + 0x18) == 0)) || (*(longlong *)(param_1 + 0x58) == 0)) {
        return 0;
    }
    iVar3 = FUN_14077d4e0(param_1,param_2,1,param_3);
    if (iVar3 != 0) {
        return 1;
    }
    if (((*(longlong *)(param_1 + 0x58) != 0) &&
         (plVar4 = (longlong *)FUN_140574380(param_1,param_2,&local_res20), plVar4 != (longlong *)0x0))
        && ((iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar3 == 0 && (local_res20[2] == 0)))) {
        puVar2 = *(uint **)(param_1 + 0xa8);
        puVar8 = puVar2;
        if (*(uint **)(puVar2 + 2) != (uint *)0x0) {
            puVar5 = *(uint **)(puVar2 + 2);
            do {
                if (puVar5[8] < *local_res20) {
                    puVar6 = *(uint **)(puVar5 + 6);
                }
                else {
                    puVar6 = *(uint **)(puVar5 + 4);
                    puVar8 = puVar5;
                }
                puVar5 = puVar6;
            } while (puVar6 != (uint *)0x0);
        }
        if ((puVar8 == puVar2) || (uVar1 = *local_res20, local_res20 = puVar8, uVar1 < puVar8[8])) {
            local_res20 = puVar2;
        }
        if (((local_res20 != puVar2) && (lVar7 = FUN_14024b980(local_res20[9]), lVar7 != 0)) &&
            (fVar9 = *(float *)(param_2 + 0x11e0) - *(float *)(lVar7 + 0xc),
                    fVar10 = *(float *)(param_2 + 0x11e4) - *(float *)(lVar7 + 0x10),
                    fVar9 * fVar9 + fVar10 * fVar10 + 0.0 < *(float *)(lVar7 + 4) * *(float *)(lVar7 + 4))) {
            if (param_3 != (longlong **)0x0) {
                *param_3 = plVar4;
            }
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140571c60(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined in_XMM6 [16];
    undefined auVar12 [16];
    float fVar13;
    undefined4 uVar14;
    longlong local_res8;
    undefined8 local_38;

    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
        return 0;
    }
    lVar4 = DAT_140c65970;
    lVar2 = FUN_140722000();
    if (lVar2 == 0) {
        return 0;
    }
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 8);
    fVar13 = 1.0;
    uVar14 = 0;
    fVar9 = 1.0;
    if (iVar1 == 0) {
        LAB_140571ded:
        lVar4 = *(longlong *)(lVar4 + 0xa8);
        lVar2 = *(longlong *)(lVar4 + 8);
        local_res8 = lVar4;
        while (lVar3 = lVar2, lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar2 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
        }
        if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar4;
        }
        if ((local_res8 != lVar4) &&
            (lVar4 = FUN_14024b980(*(undefined4 *)(local_res8 + 0x24)), lVar4 != 0)) {
            local_38 = *(undefined8 *)(lVar4 + 0xc);
            fVar9 = *(float *)(lVar4 + 4);
            LAB_140571e6c:
            fVar10 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0) - (float)local_38;
            fVar11 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4) -
                     (float)((ulonglong)local_38 >> 0x20);
            fVar13 = fVar13 - SQRT(fVar10 * fVar10 + fVar11 * fVar11 + 0.0) / fVar9;
            goto LAB_140571eac;
        }
    }
    else {
        if (iVar1 != 1) {
            if (iVar1 == 2) goto LAB_140571ded;
            goto LAB_140571e6c;
        }
        lVar4 = *(longlong *)(lVar4 + 0x88);
        uVar7 = 0;
        in_XMM6 = in_XMM6 & (undefined  [16])0x0;
        lVar3 = *(longlong *)(lVar4 + 8);
        lVar5 = lVar3;
        lVar8 = lVar4;
        if (lVar3 != 0) {
            do {
                if (param_2 < *(uint *)(lVar5 + 0x20)) {
                    lVar6 = *(longlong *)(lVar5 + 0x10);
                    lVar8 = lVar5;
                }
                else {
                    lVar6 = *(longlong *)(lVar5 + 0x18);
                }
                lVar5 = lVar6;
            } while (lVar6 != 0);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < param_2) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
        }
        if (lVar4 != lVar8) {
            do {
                lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar4 + 0x24));
                if (lVar3 != 0) {
                    uVar7 = uVar7 + 1;
                    in_XMM6 = CONCAT412(*(float *)(lVar3 + 0x11ec) + SUB164(in_XMM6 >> 0x60,0),
                                        CONCAT48(*(float *)(lVar3 + 0x11e8) + SUB164(in_XMM6 >> 0x40,0),
                                                 CONCAT44(*(float *)(lVar3 + 0x11e4) +
                                                          SUB164(in_XMM6 >> 0x20,0),
                                                          *(float *)(lVar3 + 0x11e0) + SUB164(in_XMM6,0))));
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
                    for (lVar5 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar5 != 0;
                         lVar5 = *(longlong *)(lVar5 + 0x10)) {
                        lVar3 = lVar5;
                    }
                }
            } while (lVar4 != lVar8);
            if (uVar7 != 0) {
                fVar9 = (float)(ulonglong)uVar7;
                auVar12 = divps(in_XMM6,CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))));
                local_38 = SUB168(auVar12,0);
                fVar9 = *(float *)(*(longlong *)(lVar2 + 0x10) + 0x14);
                goto LAB_140571e6c;
            }
        }
    }
    fVar13 = 0.0;
    uVar14 = 0;
    LAB_140571eac:
    return CONCAT44(uVar14,fVar13);
}



void FUN_140572030(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8 [4];

    local_res8[0] = *(longlong *)(DAT_140c65970 + 0x88);
    lVar2 = *(longlong *)(local_res8[0] + 8);
    lVar4 = local_res8[0];
    if (lVar2 != 0) {
        lVar1 = lVar2;
        do {
            if (*param_2 < *(uint *)(lVar1 + 0x20)) {
                lVar3 = *(longlong *)(lVar1 + 0x10);
                lVar4 = lVar1;
            }
            else {
                lVar3 = *(longlong *)(lVar1 + 0x18);
            }
            lVar1 = lVar3;
        } while (lVar3 != 0);
        if (lVar2 != 0) {
            do {
                if (*(uint *)(lVar2 + 0x20) < *param_2) {
                    lVar1 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                    local_res8[0] = lVar2;
                }
                lVar2 = lVar1;
            } while (lVar1 != 0);
        }
    }
    if (local_res8[0] != lVar4) {
        while (*(uint *)(local_res8[0] + 0x24) != param_2[1]) {
            lVar2 = *(longlong *)(local_res8[0] + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(local_res8[0] + 8);
                if (local_res8[0] == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        local_res8[0] = lVar2;
                        lVar2 = *(longlong *)(local_res8[0] + 8);
                    } while (local_res8[0] == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(local_res8[0] + 0x18) != lVar2) {
                    local_res8[0] = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); local_res8[0] = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
            if (local_res8[0] == lVar4) {
                return;
            }
        }
        FUN_140481f20(DAT_140c65970 + 0x80,local_res8);
    }
    return;
}



void FUN_140572120(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar2 = DAT_140c65970;
    local_res8 = param_1;
    FUN_140481460(DAT_140c65970 + 0x80);
    lVar1 = *(longlong *)(lVar2 + 0xa8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < *param_2) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        FUN_140481f20(lVar2 + 0xa0,&local_res8);
    }
    return;
}



longlong FUN_1405721c0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong local_res8;
    longlong local_res10;

    lVar4 = DAT_140c65970;
    local_res8 = param_1;
    if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
         (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) != 0)) &&
        (plVar6 = (longlong *)FUN_1403d90d0(DAT_140c65898), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 8))(plVar6);
        lVar7 = FUN_1403d3950();
        if (lVar7 != 0) goto LAB_14057224e;
    }
    lVar7 = FUN_1405744f0();
    if (lVar7 == 0) {
        return 0;
    }
    LAB_14057224e:
    uVar9 = 0;
    if (*(longlong *)(lVar7 + 0x78) != 0) {
        do {
            lVar8 = FUN_1403d83c0(lVar4,*(undefined4 *)
                                        **(undefined8 **)(*(longlong *)(lVar7 + 0x70) + uVar9 * 8));
            if (((lVar8 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x58), lVar2 != 0)) &&
                (***(int ***)(lVar2 + 0x48) == ***(int ***)(lVar8 + 0x48))) {
                lVar8 = *(longlong *)(lVar8 + 0x10);
                uVar1 = ***(uint ***)(*(longlong *)(lVar7 + 0x70) + uVar9 * 8);
                lVar3 = lVar8;
                lVar2 = *(longlong *)(lVar8 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar1) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar8) || (uVar1 < *(uint *)(lVar3 + 0x20))) {
                    local_res10 = lVar8;
                    plVar6 = &local_res10;
                }
                else {
                    local_res8 = lVar3;
                    plVar6 = &local_res8;
                }
                if (((*plVar6 != lVar8) && (lVar8 = *(longlong *)(*plVar6 + 0x28), lVar8 != 0)) &&
                    (iVar5 = FUN_1403d7c30(*(undefined8 *)(lVar8 + 0x30),
                                           *(undefined8 *)(DAT_140c65898 + 0x78),0), iVar5 != 0)) {
                    return lVar8;
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(lVar7 + 0x78));
    }
    return 0;
}



void FUN_140572360(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;

    plVar4 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (((plVar4 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4), iVar3 != 0))
        && (lVar5 = (**(code **)(*plVar4 + 0x80))(plVar4,0x504d4550), lVar5 != 0)) {
        uVar1 = param_2[1];
        *(undefined4 *)(lVar5 + 0x24) = 0;
        *(undefined4 *)(lVar5 + 0x18) = uVar1;
        if (*(longlong *)(lVar5 + 0x28) != 0) {
            for (plVar2 = *(longlong **)(DAT_140c65920 + 8); plVar2 != (longlong *)0x0;
                 plVar2 = (longlong *)plVar2[4]) {
                if (plVar2[9] == *(longlong *)(lVar5 + 0x28)) {
                    (**(code **)(*plVar2 + 8))();
                    break;
                }
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathExplorerPowerMapStarted",
                      &DAT_1409ed2cc,plVar4[6],param_2[1]);
    }
    return;
}



void FUN_140572430(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (iVar1 != 0) {
            lVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,0x504d4550);
            if (lVar3 != 0) {
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionAdvanced",
                              &DAT_1409ed524,plVar2[6]);
                return;
            }
        }
    }
    return;
}



void FUN_1405724b0(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (iVar1 != 0) {
            lVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,0x504d4550);
            if (lVar3 != 0) {
                *(undefined4 *)(lVar3 + 0x20) = 1;
                iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0xc);
                if (iVar1 == 0) {
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        iVar1 = 0;
                    }
                    else {
                        iVar1 = *(int *)(lVar3 + 4);
                    }
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathExplorerPowerMapWaiting",
                              &DAT_1409ed39c,plVar2[6],iVar1);
            }
        }
    }
    return;
}



void FUN_140572550(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;

    plVar2 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (iVar1 != 0) {
            lVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,0x504d4550);
            if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 0x18) = 0;
                *(undefined4 *)(lVar3 + 0x20) = 0;
                if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x14) != 0) &&
                    (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x10) != 0)) {
                    FUN_14056b870(lVar3);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathExplorerPowerMapFailed",
                              &DAT_1409ed374,plVar2[6]);
                return;
            }
        }
    }
    return;
}



void FUN_1405725f0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;

    plVar3 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (iVar2 != 0) {
            lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,0x504d4550);
            lVar1 = DAT_140c65898;
            if (lVar4 != 0) {
                *(undefined4 *)(lVar4 + 0x24) = 1;
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PlayerPathExplorerPowerMapEntered",
                              &DAT_1409ed364,plVar3[6]);
                return;
            }
        }
    }
    return;
}



void FUN_140572670(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;

    plVar3 = (longlong *)FUN_1404804a0(DAT_140c65970,*param_2,0x12);
    if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (iVar2 != 0) {
            lVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,0x504d4550);
            lVar1 = DAT_140c65898;
            if (lVar4 != 0) {
                *(undefined4 *)(lVar4 + 0x24) = 0;
                FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"PlayerPathExplorerPowerMapExited",
                              &DAT_1409ed34c,plVar3[6]);
                return;
            }
        }
    }
    return;
}



int FUN_1405726f0(longlong param_1)

{
    short *psVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;

    iVar4 = 0;
    if (param_1 == 0) {
        return 0;
    }
    lVar3 = 8;
    piVar2 = (int *)(param_1 + 0x10);
    do {
        if (*piVar2 != 0) {
            psVar1 = (short *)FUN_14034bdd0();
            if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
                iVar4 = iVar4 + 1;
            }
        }
        piVar2 = piVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return iVar4;
}



void FUN_1405727e0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar3 = 0;
        do {
            FUN_14056ba10(*(undefined8 *)(lVar3 + 8 + *(longlong *)(param_1 + 200)),lVar1 + 0x11e0);
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x10;
        } while (uVar2 < *(ulonglong *)(param_1 + 0xd0));
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        local_28[0] = 0;
        local_18 = FUN_1405727e0;
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0xd8,1000,local_28,4);
    }
    return;
}



void FUN_1405728b0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;

    FUN_140195d70(param_1 + 0xd8);
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar4 = 0;
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + 8 + lVar4);
            if (lVar1 != 0) {
                plVar2 = *(longlong **)(lVar1 + 0x18);
                while (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 0x28))(plVar2,0,1);
                    plVar2 = *(longlong **)(lVar1 + 0x18);
                }
                if (*(longlong *)(lVar1 + 0x18) != 0) {
                    FUN_1401a4a00(lVar1 + 0x18);
                }
                FUN_14018b900(lVar1);
            }
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0x10;
        } while (uVar3 < *(ulonglong *)(param_1 + 0xd0));
        *(undefined8 *)(param_1 + 0xd0) = 0;
        return;
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    return;
}



undefined8 * FUN_1405729b0(undefined8 *param_1,undefined8 param_2)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b6c8f8;
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
    param_1[9] = param_2;
    *(undefined4 *)(param_1 + 10) = 0;
    return param_1;
}



undefined8 * FUN_140572a50(undefined8 *param_1,undefined4 param_2)

{
    undefined *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    *param_1 = &PTR_FUN_140b6c8d8;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[8] = puVar1;
    param_1[9] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[8] + 8) = 0;
    *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
    *(undefined8 *)(param_1[8] + 0x18) = param_1[8];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xe] = 0;
    param_1[0xd] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xd] + 8) = 0;
    lVar3 = 4;
    *(undefined8 *)(param_1[0xd] + 0x10) = param_1[0xd];
    *(undefined8 *)(param_1[0xd] + 0x18) = param_1[0xd];
    *(undefined4 *)(param_1 + 1) = param_2;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    param_1[0xb] = 0;
    param_1[6] = 0;
    puVar2 = param_1 + 4;
    do {
        *(undefined4 *)(puVar2 + -2) = 0;
        *(undefined4 *)puVar2 = 0;
        puVar2 = (undefined8 *)((longlong)puVar2 + 4);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return param_1;
}



undefined8 FUN_140572b10(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1,0x504d5353);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x18,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[2] = param_2;
        *puVar2 = &PTR_LAB_140b6c870;
        (**(code **)(*param_1 + 0x60))(param_1);
        return 0;
    }
    (**(code **)(*param_1 + 0x60))(param_1,0);
    return 0;
}



undefined8 FUN_140572ba0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1,0x504d4553);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x18,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[2] = param_2;
        *puVar2 = &PTR_LAB_140b6c820;
        (**(code **)(*param_1 + 0x60))(param_1);
        return 0;
    }
    (**(code **)(*param_1 + 0x60))(param_1,0);
    return 0;
}



undefined8 FUN_140572c30(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1,0x504d4550);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x78,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[2] = param_2;
        *puVar2 = &PTR_LAB_140b6ca40;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        *(undefined4 *)(puVar2 + 6) = 0x544e5645;
        *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
        if ((*(int *)(puVar2[2] + 0x14) != 0) && (*(int *)(puVar2[2] + 0x10) != 0)) {
            FUN_14056b870(puVar2);
        }
    }
    (**(code **)(*param_1 + 0x60))(param_1,puVar2);
    return 0;
}



undefined8 FUN_140572d00(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1,0x504d4542);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        return 0;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x20,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[2] = param_2;
        *puVar2 = &PTR_LAB_140b6c900;
        (**(code **)(*param_1 + 0x60))(param_1);
        return 0;
    }
    (**(code **)(*param_1 + 0x60))(param_1,0);
    return 0;
}



void FUN_140572d90(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b6c8f8;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 5);
    FUN_140008410(param_1 + 5);
    FUN_14018b900(param_1[6],0);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_140572e80(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x30);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) == param_3) {
            bVar3 = *(uint *)(lVar2 + 0x24) < param_2;
        }
        else {
            bVar3 = *(int *)(lVar2 + 0x20) < param_3;
        }
        if (bVar3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if (local_res8 != lVar1) {
        if (param_3 == *(int *)(local_res8 + 0x20)) {
            bVar3 = param_2 < *(uint *)(local_res8 + 0x24);
        }
        else {
            bVar3 = param_3 < *(int *)(local_res8 + 0x20);
        }
        if (!bVar3) goto LAB_140572ee7;
    }
    local_res8 = lVar1;
    LAB_140572ee7:
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x28);
}



void FUN_140572f10(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(int *)(param_1 + 0x50) == 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x10)) {
            do {
                (**(code **)(**(longlong **)(lVar3 + 0x28) + 200))(*(longlong **)(lVar3 + 0x28),1);
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
            } while (lVar3 != *(longlong *)(param_1 + 0x10));
        }
        *(undefined4 *)(param_1 + 0x50) = 1;
    }
    return;
}



void FUN_140572fc0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(int *)(param_1 + 0x50) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x10)) {
            do {
                (**(code **)(**(longlong **)(lVar3 + 0x28) + 200))(*(longlong **)(lVar3 + 0x28),0);
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
            } while (lVar3 != *(longlong *)(param_1 + 0x10));
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
    }
    return;
}



void FUN_140573060(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;
    longlong local_res10;
    undefined8 local_28;
    longlong *local_20;
    undefined local_18 [16];

    uVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (uVar3 < *(uint *)(local_res8 + 0x20))) {
        local_28 = CONCAT44(local_28._4_4_,uVar3);
        local_20 = (longlong *)0x0;
        FUN_140055c60(param_1 + 8,&local_res10,&local_res8,&local_28);
        local_res8 = local_res10;
    }
    *(longlong **)(local_res8 + 0x28) = param_2;
    local_res8 = CONCAT44(*(undefined4 *)(*(longlong *)param_2[6] + 0x14),
                          *(undefined4 *)(*(longlong *)param_2[6] + 0xc));
    local_28 = local_res8;
    local_20 = param_2;
    FUN_140574e10(param_1 + 0x28,local_18,&local_28);
    return;
}



undefined8 FUN_140573130(longlong param_1,longlong param_2)

{
    uint uVar1;
    uint **ppuVar2;
    uint *puVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    longlong local_res8;
    longlong local_res18;

    plVar7 = (longlong *)FUN_140491bd0(DAT_140c65968,*(undefined4 *)**(undefined8 **)(param_1 + 0x48))
            ;
    if ((plVar7 == (longlong *)0x0) || (*(int *)(*plVar7 + 0x14) != *(int *)(param_2 + 0x3700))) {
        return 0;
    }
    lVar10 = *(longlong *)(plVar7[2] + 0x10);
    if (lVar10 != plVar7[2]) {
        do {
            ppuVar2 = *(uint ***)(lVar10 + 0x28);
            iVar6 = FUN_1403d7c30(ppuVar2,param_2,1);
            if ((iVar6 != 0) && (puVar3 = *ppuVar2, (*(byte *)(puVar3 + 0xd) & 0x40) == 0)) {
                lVar9 = *(longlong *)(param_1 + 0x10);
                uVar1 = *puVar3;
                lVar5 = lVar9;
                lVar4 = *(longlong *)(lVar9 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < uVar1) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((lVar5 == lVar9) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                    local_res18 = lVar9;
                    plVar8 = &local_res18;
                }
                else {
                    local_res8 = lVar5;
                    plVar8 = &local_res8;
                }
                if (((*plVar8 == lVar9) ||
                     (plVar8 = *(longlong **)(*plVar8 + 0x28), plVar8 == (longlong *)0x0)) ||
                    (iVar6 = (**(code **)(*plVar8 + 0x38))(), iVar6 == 0)) {
                    return 0;
                }
            }
            lVar9 = *(longlong *)(lVar10 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar10 = lVar9;
                        lVar9 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                    lVar10 = lVar9;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar9 = lVar4;
                }
            }
        } while (lVar10 != plVar7[2]);
    }
    return 1;
}



void FUN_1405732a0(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar2 = param_1[1];
    if (1 < uVar2) {
        local_28 = *param_1;
        uVar9 = 0;
        local_20 = &LAB_140572990;
        local_18 = 0;
        uVar4 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
            uVar4 = 0xffffffffffffffff;
        }
        local_10 = FUN_14018b280(uVar4,0);
        if (uVar2 != 0) {
            uVar6 = uVar9;
            if (1 < uVar2) {
                uVar5 = uVar9;
                do {
                    uVar6 = uVar5 + 2;
                    puVar1 = (ulonglong *)(local_10 + -0x10 + uVar6 * 8);
                    *puVar1 = uVar5;
                    puVar1[1] = uVar5 + 1;
                    uVar5 = uVar6;
                } while (uVar6 < uVar2 - ((uint)uVar2 & 1));
            }
            for (; uVar6 < uVar2; uVar6 = uVar6 + 1) {
                *(ulonglong *)(local_10 + uVar6 * 8) = uVar6;
            }
        }
        FUN_14001fec0(&LAB_14001fea0,local_10,uVar2,&local_28);
        lVar3 = param_1[1];
        if (lVar3 == 0) {
            puVar10 = (undefined8 *)0x0;
        }
        else {
            puVar7 = (undefined8 *)FUN_14018b280((lVar3 + 1) * 0x10,0);
            if (puVar7 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar7[1] = lVar3;
                puVar10 = puVar7 + 2;
                *puVar7 = &PTR_LAB_140b55060;
            }
        }
        puVar7 = puVar10;
        if (param_1[1] != 0) {
            do {
                uVar9 = uVar9 + 1;
                puVar8 = (undefined8 *)(*(longlong *)(local_10 + -8 + uVar9 * 8) * 0x10 + *param_1);
                *puVar7 = *puVar8;
                puVar7[1] = puVar8[1];
                puVar7 = puVar7 + 2;
            } while (uVar9 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar10;
        FUN_14018b900(local_10,0);
    }
    return;
}



longlong * FUN_140573420(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

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
            LAB_14057347a:
            plVar4 = (longlong *)FUN_140574880(param_1,local_18,param_4);
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
                        FUN_140029c50(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_140495ba0(uVar1,param_4);
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
                plVar4 = (longlong *)FUN_140574880(param_1,local_18,param_4);
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
            goto LAB_14057347a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140574790(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140574790();
    return param_2;
}



longlong FUN_140573630(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined **local_38;
    longlong local_30;

    bVar7 = false;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (((lVar1 == 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    if (lVar6 != *(longlong *)(lVar1 + 0x10)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if ((*(int *)(**(longlong **)(lVar5 + 0x30) + 0xc) == 0x11) &&
                (lVar4 = FUN_14021cd80(), lVar4 != 0)) {
                if (*(int *)(lVar4 + 4) == **(int **)(param_2 + 0x18)) {
                    LAB_140573700:
                    bVar2 = true;
                }
                else {
                    if (*(int *)(lVar4 + 8) != 0) {
                        bVar7 = true;
                        local_38 = &PTR_FUN_140b66440;
                        local_30 = param_2;
                        FUN_1403b4a10(&local_38);
                        iVar3 = FUN_1403b4a20(&local_38);
                        if (iVar3 == 0) goto LAB_140573700;
                    }
                    bVar2 = false;
                }
                if (bVar7) {
                    bVar7 = false;
                    local_38 = &PTR_FUN_140b66400;
                }
                if (bVar2) {
                    if (param_5 == (longlong *)0x0) {
                        return lVar5;
                    }
                    *param_5 = lVar4;
                    return lVar5;
                }
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
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar6 != *(longlong *)(lVar1 + 0x10));
    }
    return 0;
}



void FUN_1405737b0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    ulonglong uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    longlong lVar7;

    puVar6 = *(undefined4 **)(param_1 + 0x10);
    if (puVar6 == *(undefined4 **)(param_1 + 0x18)) {
        lVar7 = (longlong)puVar6 - *(longlong *)(param_1 + 8) >> 4;
        lVar4 = lVar7 * 2;
        if (lVar7 == 0) {
            lVar4 = 1;
        }
        uVar2 = FUN_14018a3e0(lVar4 << 4);
        puVar3 = (undefined4 *)FUN_14018b280(uVar2 & 0xfffffffffffffff0,0);
        puVar5 = puVar3;
        for (puVar6 = *(undefined4 **)(param_1 + 8); puVar6 != param_2; puVar6 = puVar6 + 4) {
            if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = *puVar6;
                puVar5[1] = puVar6[1];
                puVar5[2] = puVar6[2];
                puVar5[3] = puVar6[3];
            }
            puVar5 = puVar5 + 4;
        }
        if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *param_3;
            puVar5[1] = param_3[1];
            puVar5[2] = param_3[2];
            puVar5[3] = param_3[3];
        }
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        puVar6 = puVar5 + 4;
        if (param_2 != puVar1) {
            param_2 = (undefined4 *)((longlong)param_2 + (longlong)puVar6 + (-0x10 - (longlong)puVar5));
            do {
                if (puVar6 != (undefined4 *)0x0) {
                    *puVar6 = *param_2;
                    puVar6[1] = param_2[1];
                    puVar6[2] = param_2[2];
                    puVar6[3] = param_2[3];
                }
                param_2 = param_2 + 4;
                puVar6 = puVar6 + 4;
            } while (param_2 != puVar1);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(undefined4 **)(param_1 + 8) = puVar3;
        *(undefined4 **)(param_1 + 0x10) = puVar6;
        *(ulonglong *)(param_1 + 0x18) = (uVar2 & 0xfffffffffffffff0) + (longlong)puVar3;
        return;
    }
    if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = puVar6[-4];
        puVar6[1] = puVar6[-3];
        puVar6[2] = puVar6[-2];
        puVar6[3] = puVar6[-1];
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar7 = lVar4 - (longlong)param_2 >> 4;
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    for (; 0 < lVar7; lVar7 = lVar7 + -1) {
        puVar6[-4] = *(undefined4 *)(lVar4 + -0x10);
        puVar6[-3] = *(undefined4 *)(lVar4 + -0xc);
        puVar6[-2] = *(undefined4 *)(lVar4 + -8);
        puVar6[-1] = *(undefined4 *)(lVar4 + -4);
        lVar4 = lVar4 + -0x10;
        puVar6 = puVar6 + -4;
    }
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return;
}



void FUN_140573980(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 4;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_140574980();
        if (lVar2 < 0x11) {
            FUN_140574f40(param_1,param_2,&LAB_14056fbd0);
        }
        else {
            FUN_140574f40(param_1,param_1 + 0x100,&LAB_14056fbd0);
            FUN_1405752f0(param_1 + 0x100,param_2);
        }
    }
    return;
}



longlong FUN_140573a30(longlong param_1,longlong param_2)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    bool bVar8;
    undefined **local_38;
    longlong local_30;

    bVar8 = false;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (((lVar1 == 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    if (lVar7 != *(longlong *)(lVar1 + 0x10)) {
        do {
            lVar6 = *(longlong *)(lVar7 + 0x28);
            if ((*(int *)(**(longlong **)(lVar6 + 0x30) + 0xc) == 4) &&
                (lVar4 = FUN_1402237c0(), lVar4 != 0)) {
                if (*(int *)(lVar4 + 4) == **(int **)(param_2 + 0x18)) {
                    LAB_140573b00:
                    bVar2 = true;
                }
                else {
                    if (*(int *)(lVar4 + 8) != 0) {
                        bVar8 = true;
                        local_38 = &PTR_FUN_140b66440;
                        local_30 = param_2;
                        uVar5 = FUN_1403b4a10(&local_38);
                        iVar3 = FUN_1403b4a20(&local_38,uVar5);
                        if (iVar3 == 0) goto LAB_140573b00;
                    }
                    bVar2 = false;
                }
                if (bVar8) {
                    bVar8 = false;
                    local_38 = &PTR_FUN_140b66400;
                }
                if (bVar2) {
                    return lVar6;
                }
            }
            lVar6 = *(longlong *)(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar6 = lVar4;
                }
            }
        } while (lVar7 != *(longlong *)(lVar1 + 0x10));
    }
    return 0;
}



longlong FUN_140573ba0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    bool bVar8;
    undefined **local_38;
    longlong local_30;

    bVar8 = false;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (((lVar1 == 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    if (lVar7 != *(longlong *)(lVar1 + 0x10)) {
        do {
            lVar6 = *(longlong *)(lVar7 + 0x28);
            if ((*(int *)(**(longlong **)(lVar6 + 0x30) + 0xc) == 7) &&
                (lVar4 = FUN_140224480(), lVar4 != 0)) {
                if (*(int *)(lVar4 + 4) == **(int **)(param_2 + 0x18)) {
                    LAB_140573c70:
                    bVar2 = true;
                }
                else {
                    if (*(int *)(lVar4 + 8) != 0) {
                        bVar8 = true;
                        local_38 = &PTR_FUN_140b66440;
                        local_30 = param_2;
                        uVar5 = FUN_1403b4a10(&local_38);
                        iVar3 = FUN_1403b4a20(&local_38,uVar5);
                        if (iVar3 == 0) goto LAB_140573c70;
                    }
                    bVar2 = false;
                }
                if (bVar8) {
                    bVar8 = false;
                    local_38 = &PTR_FUN_140b66400;
                }
                if (bVar2) {
                    return lVar6;
                }
            }
            lVar6 = *(longlong *)(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar6 = lVar4;
                }
            }
        } while (lVar7 != *(longlong *)(lVar1 + 0x10));
    }
    return 0;
}



longlong FUN_140573d10(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1,0x10);
    *(undefined8 *)(lVar3 + lVar1 * 0x10) = *param_2;
    *(undefined8 *)(lVar3 + 8 + lVar1 * 0x10) = param_2[1];
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,param_1[1] << 4);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined8 FUN_140573dc0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
    longlong lVar1;
    int iVar2;

    if (((((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
           ((iVar2 = FUN_140574c20(param_2), iVar2 != 0 && (param_4 != (longlong *)0x0)))) &&
          ((iVar2 = (**(code **)(*param_4 + 0x38))(param_4), iVar2 == 0 &&
                                                             ((*(int *)(param_1 + 0x3754) != 0 && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)))))
         ) && ((*(longlong *)(lVar1 + 0x188) != 0 || (*(longlong *)(lVar1 + 0x1c8) != 0)))) &&
        ((~*(uint *)(param_1 + 0x3750) & 1) != 0)) {
        if (*(int *)(param_3 + 0x30) == 0) {
            return 1;
        }
        if ((-1 < *(int *)(param_1 + 0x35f8)) &&
            (iVar2 = (**(code **)(*param_4 + 0x50))(param_4), iVar2 == 0)) {
            return 1;
        }
    }
    return 0;
}



undefined8
FUN_140573e90(float param_1,undefined8 param_2,longlong param_3,longlong param_4,longlong param_5_00
        ,longlong *param_6_00,int *param_5,int param_6)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float fVar6;

    if ((((((param_4 == 0) || (param_5_00 == 0)) || (*(int *)(param_5_00 + 0x20) == 0)) ||
          ((*(int *)(param_3 + 0x3754) == 0 || (lVar5 = *(longlong *)(param_3 + 0x18), lVar5 == 0))))
         || ((*(longlong *)(lVar5 + 0x188) == 0 && (*(longlong *)(lVar5 + 0x1c8) == 0)))) ||
        ((~(*(uint *)(param_3 + 0x3750) >> 2) & 1) == 0)) {
        return 0;
    }
    if ((param_6_00 == (longlong *)0x0) &&
        ((*(int *)(param_5_00 + 0x14) != 0 || (*(int *)(param_5_00 + 0x1c) != 0)))) {
        uVar4 = FUN_140574b70(param_4,param_3);
        param_1 = extraout_XMM0_Da_00;
        if ((int)uVar4 == 0) {
            return uVar4;
        }
    }
    else if (((*(int *)(param_5_00 + 0x10) != 0) || (*(int *)(param_5_00 + 0x18) != 0)) &&
             (iVar1 = FUN_140574c20(param_4,param_3), param_1 = extraout_XMM0_Da, iVar1 == 0)) {
        return 0;
    }
    fVar6 = 1.0;
    if ((param_6 == 0) && (param_6_00 != (longlong *)0x0)) {
        lVar5 = *(longlong *)param_6_00[6];
        iVar1 = *(int *)(lVar5 + 0xc);
        if (iVar1 == 2) {
            lVar5 = FUN_14021fc40(*(undefined4 *)(lVar5 + 0x14));
            if (lVar5 == 0) {
                return 0;
            }
            if (*(int *)(lVar5 + 0x30) != 0) {
                return 0;
            }
            iVar1 = (**(code **)(*param_6_00 + 0x38))(param_6_00);
            param_1 = extraout_XMM0_Da_03;
            if (iVar1 == 0) {
                uVar2 = (**(code **)(*param_6_00 + 0x40))(param_6_00);
                fVar6 = (float)(ulonglong)uVar2 * 0.01;
                param_1 = extraout_XMM0_Da_04;
            }
        }
        else {
            if (iVar1 == 0xe) {
                lVar5 = FUN_14021fc40(*(undefined4 *)(lVar5 + 0x14));
                if (lVar5 == 0) {
                    return 0;
                }
                if (*(int *)(lVar5 + 0x30) == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(*param_6_00 + 0x38))(param_6_00);
                param_1 = extraout_XMM0_Da_02;
                if (iVar1 != 0) goto LAB_140573fd5;
                uVar3 = (**(code **)(*param_6_00 + 0x48))(param_6_00);
                uVar2 = *(uint *)(lVar5 + 0x30);
            }
            else {
                if (iVar1 != 0x14) goto LAB_140573fd5;
                lVar5 = FUN_140220d40(*(undefined4 *)(lVar5 + 0x14));
                if (lVar5 == 0) {
                    return 0;
                }
                uVar2 = FUN_1405726f0(lVar5);
                if (uVar2 == 0) {
                    return 0;
                }
                iVar1 = (**(code **)(*param_6_00 + 0x38))(param_6_00);
                param_1 = extraout_XMM0_Da_01;
                if (iVar1 != 0) goto LAB_140573fd5;
                uVar3 = (**(code **)(*param_6_00 + 0x48))(param_6_00);
            }
            param_1 = (float)(ulonglong)uVar2;
            fVar6 = (float)(ulonglong)uVar3 / param_1;
        }
    }
    LAB_140573fd5:
    iVar1 = FUN_140574cf0(param_1,param_2,fVar6,param_3,param_5_00);
    if (iVar1 == 0) {
        return 0;
    }
    if (param_5 != (int *)0x0) {
        *param_5 = iVar1;
    }
    return 1;
}



undefined8 FUN_1405740b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    int iVar2;

    if ((((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
          ((*(int *)(param_3 + 0x38) != 0 && (*(int *)(param_1 + 0x3754) != 0)))) &&
         ((lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0 &&
                                                  ((*(longlong *)(lVar1 + 0x188) != 0 || (*(longlong *)(lVar1 + 0x1c8) != 0)))))) &&
        ((~(*(uint *)(param_1 + 0x3750) >> 4) & 1) != 0)) {
        if ((param_4 == 0) && ((*(int *)(param_3 + 0x14) != 0 || (*(int *)(param_3 + 0x1c) != 0)))) {
            iVar2 = FUN_140574b70(param_2,param_1);
        }
        else {
            if ((*(int *)(param_3 + 0x10) == 0) && (*(int *)(param_3 + 0x18) == 0)) {
                return 1;
            }
            iVar2 = FUN_140574c20(param_2,param_1);
        }
        if (iVar2 != 0) {
            return 1;
        }
    }
    return 0;
}



bool FUN_140574160(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                   undefined4 param_5)

{
    longlong lVar1;
    int iVar2;

    if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != (longlong *)0x0)) {
        iVar2 = (**(code **)(*param_4 + 0x38))(param_4);
        if ((((iVar2 == 0) && (*(int *)(param_1 + 0x3754) != 0)) &&
             ((lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0 &&
                                                      ((*(longlong *)(lVar1 + 0x188) != 0 || (*(longlong *)(lVar1 + 0x1c8) != 0)))))) &&
            ((~(*(uint *)(param_1 + 0x3750) >> 3) & 1) != 0)) {
            iVar2 = (**(code **)(*param_4 + 0x50))(param_4,param_5);
            return iVar2 == 0;
        }
    }
    return false;
}



longlong FUN_140574200(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                       longlong *param_5)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined **local_38;
    longlong local_30;

    bVar7 = false;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (((lVar1 == 0) || (param_2 == 0)) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10);
    if (lVar6 != *(longlong *)(lVar1 + 0x10)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if ((*(int *)(**(longlong **)(lVar5 + 0x30) + 0xc) == param_3) &&
                (lVar4 = FUN_140223380(), lVar4 != 0)) {
                if (*(int *)(lVar4 + 4) == **(int **)(param_2 + 0x18)) {
                    LAB_1405742d7:
                    bVar2 = true;
                }
                else {
                    if (*(int *)(lVar4 + 8) != 0) {
                        bVar7 = true;
                        local_38 = &PTR_FUN_140b66440;
                        local_30 = param_2;
                        FUN_1403b4a10(&local_38);
                        iVar3 = FUN_1403b4a20(&local_38);
                        if (iVar3 == 0) goto LAB_1405742d7;
                    }
                    bVar2 = false;
                }
                if (bVar7) {
                    bVar7 = false;
                    local_38 = &PTR_FUN_140b66400;
                }
                if (bVar2) {
                    if (param_5 == (longlong *)0x0) {
                        return lVar5;
                    }
                    *param_5 = lVar4;
                    return lVar5;
                }
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
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar6 != *(longlong *)(lVar1 + 0x10));
    }
    return 0;
}



longlong FUN_140574380(longlong param_1,longlong param_2,longlong *param_3)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined **local_38;
    longlong local_30;

    bVar7 = false;
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar5 = *(longlong *)(lVar1 + 0x10);
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if (lVar6 != lVar5) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if ((*(int *)(**(longlong **)(lVar5 + 0x30) + 0xc) == 0xd) &&
                (lVar4 = FUN_14021e700(), lVar4 != 0)) {
                if (*(int *)(lVar4 + 0xc) == **(int **)(param_2 + 0x18)) {
                    LAB_140574447:
                    bVar2 = true;
                }
                else {
                    if (*(int *)(lVar4 + 0x10) != 0) {
                        bVar7 = true;
                        local_38 = &PTR_FUN_140b66440;
                        local_30 = param_2;
                        FUN_1403b4a10(&local_38);
                        iVar3 = FUN_1403b4a20(&local_38);
                        if (iVar3 == 0) goto LAB_140574447;
                    }
                    bVar2 = false;
                }
                if (bVar7) {
                    bVar7 = false;
                    local_38 = &PTR_FUN_140b66400;
                }
                if (bVar2) {
                    if (param_3 == (longlong *)0x0) {
                        return lVar5;
                    }
                    *param_3 = lVar4;
                    return lVar5;
                }
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
                for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar5 = lVar4;
                }
            }
        } while (lVar6 != *(longlong *)(lVar1 + 0x10));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405744f0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
    uint uVar1;
    undefined8 uVar2;
    int iVar3;
    uint *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong local_res8;

    lVar9 = *(longlong *)(DAT_140c65960 + 0x10);
    local_res8 = lVar9;
    for (lVar5 = *(longlong *)(lVar9 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
        local_res8 = lVar5;
    }
    if ((local_res8 == lVar9) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar9;
    }
    if ((local_res8 != lVar9) && (local_res8 != -0x28)) {
        puVar4 = (uint *)FUN_14024db80(param_2);
        while( true ) {
            while( true ) {
                if (puVar4 == (uint *)0x0) {
                    return 0;
                }
                lVar9 = *(longlong *)(local_res8 + 0x50);
                lVar5 = *(longlong *)(lVar9 + 8);
                lVar8 = lVar9;
                if (lVar5 != 0) {
                    lVar6 = lVar5;
                    do {
                        if (*(uint *)(lVar6 + 0x20) < *puVar4) {
                            lVar7 = *(longlong *)(lVar6 + 0x18);
                        }
                        else {
                            lVar7 = *(longlong *)(lVar6 + 0x10);
                            lVar8 = lVar6;
                        }
                        lVar6 = lVar7;
                    } while (lVar7 != 0);
                    if (lVar5 != 0) {
                        do {
                            if (*puVar4 < *(uint *)(lVar5 + 0x20)) {
                                lVar6 = *(longlong *)(lVar5 + 0x10);
                                lVar9 = lVar5;
                            }
                            else {
                                lVar6 = *(longlong *)(lVar5 + 0x18);
                            }
                            lVar5 = lVar6;
                        } while (lVar6 != 0);
                    }
                }
                while (lVar8 != lVar9) {
                    uVar2 = *(undefined8 *)(lVar8 + 0x28);
                    iVar3 = FUN_1405746c0(uVar2,param_3);
                    if (iVar3 != 0) {
                        return uVar2;
                    }
                    lVar5 = *(longlong *)(lVar8 + 0x18);
                    if (lVar5 == 0) {
                        lVar5 = *(longlong *)(lVar8 + 8);
                        if (lVar8 == *(longlong *)(lVar5 + 0x18)) {
                            do {
                                lVar8 = lVar5;
                                lVar5 = *(longlong *)(lVar8 + 8);
                            } while (lVar8 == *(longlong *)(lVar5 + 0x18));
                        }
                        if (*(longlong *)(lVar8 + 0x18) != lVar5) {
                            lVar8 = lVar5;
                        }
                    }
                    else {
                        for (lVar6 = *(longlong *)(lVar5 + 0x10); lVar8 = lVar5, lVar6 != 0;
                             lVar6 = *(longlong *)(lVar6 + 0x10)) {
                            lVar5 = lVar6;
                        }
                    }
                }
                uVar1 = puVar4[2];
                if (DAT_140c63840 == (code *)0x0) break;
                puVar4 = (uint *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,uVar1,DAT_140c63858);
            }
            if (_DAT_140c64634 != 0) break;
            iVar3 = FUN_14024d920();
            if (iVar3 < 0) {
                return 0;
            }
            puVar4 = (uint *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar1);
        }
        return 0;
    }
    return 0;
}



undefined8 FUN_1405746c0(longlong *param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    if (param_2 != 0) {
        if ((*(byte *)(param_1[1] + 0x24) & 1) != 0) {
            uVar2 = FUN_1403d6400();
            return uVar2;
        }
        if ((((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_2)) &&
             (DAT_140c65970 != 0)) &&
            ((*(int *)(DAT_140c65970 + 8) == 1 && (iVar1 = (**(code **)(*param_1 + 8))(), iVar1 == 0))))
        {
            uVar3 = 0;
            if (param_1[0xf] != 0) {
                do {
                    iVar1 = FUN_1403d7c30(*(undefined8 *)(param_1[0xe] + uVar3 * 8),param_2,0);
                    if (iVar1 != 0) {
                        return 1;
                    }
                    uVar3 = (ulonglong)((int)uVar3 + 1);
                } while (uVar3 < (ulonglong)param_1[0xf]);
            }
            return 0;
        }
    }
    return 0;
}



longlong *
FUN_140574790(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_140029c50(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_140495ba0(param_1,param_5);
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



char ** FUN_140574880(longlong param_1,char **param_2,uint *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405748de;
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
    LAB_1405748de:
    ppcVar1 = (char **)FUN_140574790(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140574980(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
                   code *param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    char cVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined auStack120 [32];
    code *local_58;
    undefined4 *local_48;
    longlong local_40;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    uVar6 = (longlong)param_2 - (longlong)param_1;
    local_48 = param_2;
    do {
        if ((longlong)(uVar6 & 0xfffffffffffffff0) < 0x101) {
            LAB_140574b57:
            FUN_1407db4f0(local_28 ^ (ulonglong)auStack120);
            return;
        }
        if (param_4 == 0) {
            local_58 = param_5;
            FUN_140575210(param_1,local_48,local_48);
            goto LAB_140574b57;
        }
        puVar9 = local_48 + -4;
        local_40 = param_4 + -1;
        puVar7 = param_1 + (((longlong)local_48 - (longlong)param_1 >> 4) -
                            ((longlong)local_48 - (longlong)param_1 >> 0x3f) >> 1) * 4;
        cVar5 = (*param_5)(param_1,puVar7);
        if (cVar5 == '\0') {
            cVar5 = (*param_5)(param_1,puVar9);
            puVar8 = param_1;
            if (cVar5 == '\0') {
                cVar5 = (*param_5)(puVar7,puVar9);
                goto LAB_140574a40;
            }
        }
        else {
            cVar5 = (*param_5)(puVar7);
            puVar8 = puVar7;
            if (cVar5 == '\0') {
                cVar5 = (*param_5)(param_1,puVar9);
                puVar7 = param_1;
                LAB_140574a40:
                puVar8 = puVar7;
                if (cVar5 != '\0') {
                    puVar8 = puVar9;
                }
            }
        }
        local_38 = *puVar8;
        local_34 = puVar8[1];
        local_30 = puVar8[2];
        local_2c = puVar8[3];
        puVar9 = local_48;
        puVar7 = param_1;
        while( true ) {
            cVar5 = (*param_5)(puVar7,&local_38);
            puVar8 = puVar7;
            while (cVar5 != '\0') {
                puVar8 = puVar8 + 4;
                cVar5 = (*param_5)(puVar8,&local_38);
            }
            cVar5 = (*param_5)();
            while (puVar9 = puVar9 + -4, cVar5 != '\0') {
                cVar5 = (*param_5)();
            }
            if (puVar9 <= puVar8) break;
            uVar1 = *puVar8;
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *puVar8 = *puVar9;
            puVar7 = puVar8 + 4;
            puVar8[1] = puVar9[1];
            puVar8[2] = puVar9[2];
            puVar8[3] = puVar9[3];
            *puVar9 = uVar1;
            puVar9[1] = uVar2;
            puVar9[2] = uVar3;
            puVar9[3] = uVar4;
        }
        local_58 = param_5;
        FUN_140574980(puVar8,local_48,0,local_40);
        uVar6 = (longlong)puVar8 - (longlong)param_1;
        local_48 = puVar8;
        param_4 = local_40;
    } while( true );
}



undefined8 FUN_140574b70(longlong param_1,longlong param_2,longlong param_3)

{
    undefined8 uVar1;

    if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_3 + 0x14) != 0)) {
        uVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,param_1,*(int *)(param_3 + 0x14),param_2,0,0);
        if ((int)uVar1 != 0) {
            if (*(int *)(param_3 + 0x1c) == 0) {
                uVar1 = 1;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,param_2,*(int *)(param_3 + 0x1c),param_1,0,0);
            }
        }
        return uVar1;
    }
    return 0;
}



undefined8 FUN_140574c20(longlong param_1,longlong param_2,longlong param_3)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    undefined8 uVar4;

    if ((param_1 == 0) || (param_2 == 0)) {
        return 0;
    }
    if (*(int *)(param_3 + 0x10) == 0) {
        LAB_140574c88:
        bVar1 = true;
    }
    else {
        bVar1 = false;
        iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,param_1,*(int *)(param_3 + 0x10),param_2,0,0);
        if (iVar3 != 0) goto LAB_140574c88;
    }
    bVar2 = false;
    if (*(int *)(param_3 + 0x18) != 0) {
        iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                (DAT_140c659a0,param_2,*(int *)(param_3 + 0x18),param_1,0,0);
        if (iVar3 == 0) goto LAB_140574cb9;
    }
    bVar2 = true;
    LAB_140574cb9:
    if ((!bVar1) || (uVar4 = 1, !bVar2)) {
        uVar4 = 0;
    }
    return uVar4;
}



int FUN_140574cf0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                  longlong param_5)

{
    longlong *plVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    uint uVar6;
    int *piVar7;
    uint uVar8;

    piVar7 = (int *)(param_5 + 0x20);
    uVar6 = 0;
    uVar8 = 0;
    piVar5 = piVar7;
    do {
        if (*piVar5 == 0) break;
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 1;
    } while (uVar8 < 4);
    if ((uVar8 != 0) && (0.0 <= param_3)) {
        uVar2 = *(uint *)(param_5 + 4) & 0x100;
        if (1.0 <= param_3) {
            LAB_140574d49:
            return *piVar7;
        }
        if (uVar8 == 1) {
            if (uVar2 == 0) goto LAB_140574d49;
        }
        else if (uVar2 == 0) {
            uVar2 = (uVar8 - 1) - (int)(longlong)((float)(ulonglong)(uVar8 - 1) * param_3);
            if (uVar2 < uVar8) {
                if (uVar2 != 0) {
                    do {
                        iVar4 = *piVar7;
                        for (plVar1 = *(longlong **)(param_4 + 0x15c0); plVar1 != (longlong *)0x0;
                             plVar1 = (longlong *)plVar1[2]) {
                            iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
                            if (iVar3 == iVar4) {
                                return 0;
                            }
                        }
                        uVar6 = uVar6 + 1;
                        piVar7 = piVar7 + 1;
                    } while (uVar6 < uVar2);
                }
                iVar4 = *(int *)(param_5 + 0x20 + (ulonglong)uVar2 * 4);
            }
            else {
                iVar4 = 0;
            }
            return iVar4;
        }
    }
    return 0;
}



char ** FUN_140574e10(longlong param_1,char **param_2,int *param_3)

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
            if (*param_3 == *(int *)(pcVar5 + 0x20)) {
                bVar6 = (uint)param_3[1] < *(uint *)(pcVar5 + 0x24);
            }
            else {
                bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            }
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140574e80;
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
    if (*(int *)(pcVar3 + 0x20) == *param_3) {
        bVar6 = *(uint *)(pcVar3 + 0x24) < (uint)param_3[1];
    }
    else {
        bVar6 = *(int *)(pcVar3 + 0x20) < *param_3;
    }
    if (!bVar6) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140574e80:
    ppcVar1 = (char **)FUN_1405750f0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140574f40(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    char cVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined auStack120 [32];
    longlong local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    ulonglong local_40;

    if (param_1 != param_2) {
        local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
        puVar1 = param_1 + 4;
        if (puVar1 != param_2) {
            lVar7 = 0x10 - (longlong)param_1;
            puVar8 = param_1;
            puVar9 = puVar1;
            local_58 = lVar7;
            do {
                local_50 = *puVar9;
                local_4c = puVar9[1];
                local_48 = puVar9[2];
                local_44 = puVar9[3];
                cVar5 = (*param_3)(&local_50,param_1);
                if (cVar5 == '\0') {
                    cVar5 = (*param_3)(&local_50,puVar8);
                    puVar4 = puVar8;
                    puVar3 = puVar9;
                    lVar7 = local_58;
                    while (puVar2 = puVar4, local_58 = lVar7, cVar5 != '\0') {
                        *puVar3 = *puVar2;
                        puVar3[1] = puVar2[1];
                        puVar3[2] = puVar2[2];
                        puVar3[3] = puVar2[3];
                        cVar5 = (*param_3)(&local_50,puVar2 + -4);
                        puVar4 = puVar2 + -4;
                        puVar3 = puVar2;
                        lVar7 = local_58;
                    }
                    *puVar3 = local_50;
                    puVar3[1] = local_4c;
                    puVar3[2] = local_48;
                    puVar3[3] = local_44;
                }
                else {
                    puVar3 = (undefined4 *)(lVar7 + (longlong)puVar8 + (longlong)puVar1);
                    for (lVar6 = lVar7 + (longlong)puVar8 >> 4; 0 < lVar6; lVar6 = lVar6 + -1) {
                        puVar3[-4] = puVar3[-8];
                        puVar3[-3] = puVar3[-7];
                        puVar3[-2] = puVar3[-6];
                        puVar3[-1] = puVar3[-5];
                        puVar3 = puVar3 + -4;
                    }
                    *param_1 = local_50;
                    param_1[1] = local_4c;
                    param_1[2] = local_48;
                    param_1[3] = local_44;
                }
                puVar9 = puVar9 + 4;
                puVar8 = puVar8 + 4;
            } while (puVar9 != param_2);
        }
        FUN_1407db4f0(local_40 ^ (ulonglong)auStack120);
    }
    return;
}



longlong *
FUN_1405750f0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if (*(int *)param_5 == *(int *)(param_4 + 0x20)) {
            bVar3 = *(uint *)((longlong)param_5 + 4) < *(uint *)(param_4 + 0x24);
        }
        else {
            bVar3 = *(int *)param_5 < *(int *)(param_4 + 0x20);
        }
        if (!bVar3) {
            lVar2 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1405751c0;
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
    LAB_1405751c0:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



void FUN_140575210(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                   code *param_5)

{
    char cVar1;
    undefined4 *puVar2;
    undefined auStack104 [32];
    code *local_48;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    FUN_1405754a0(param_1,param_2,param_5);
    puVar2 = param_2;
    if (param_2 < param_3) {
        do {
            cVar1 = (*param_5)(puVar2,param_1);
            if (cVar1 != '\0') {
                local_38 = *puVar2;
                local_34 = puVar2[1];
                local_30 = puVar2[2];
                local_2c = puVar2[3];
                *puVar2 = *param_1;
                local_48 = param_5;
                puVar2[1] = param_1[1];
                puVar2[2] = param_1[2];
                puVar2[3] = param_1[3];
                FUN_140575620(param_1,0,(longlong)param_2 - (longlong)param_1 >> 4,&local_38);
            }
            puVar2 = puVar2 + 4;
        } while (puVar2 < param_3);
    }
    FUN_1405753d0(param_1,param_2,param_5);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



void FUN_1405752f0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,code *param_4)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    char cVar4;
    undefined auStack88 [32];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    if (param_1 != param_2) {
        local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
        do {
            local_38 = *param_1;
            local_34 = param_1[1];
            local_30 = param_1[2];
            local_2c = param_1[3];
            cVar4 = (*param_4)(&local_38,param_1 + -4);
            puVar3 = param_1 + -4;
            puVar2 = param_1;
            while (puVar1 = puVar3, cVar4 != '\0') {
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                puVar2[2] = puVar1[2];
                puVar2[3] = puVar1[3];
                cVar4 = (*param_4)(&local_38,puVar1 + -4);
                puVar3 = puVar1 + -4;
                puVar2 = puVar1;
            }
            param_1 = param_1 + 4;
            *puVar2 = local_38;
            puVar2[1] = local_34;
            puVar2[2] = local_30;
            puVar2[3] = local_2c;
        } while (param_1 != param_2);
        FUN_1407db4f0(local_28 ^ (ulonglong)auStack88);
    }
    return;
}



void FUN_1405753d0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
    ulonglong uVar1;
    undefined4 *puVar2;
    undefined auStack104 [32];
    undefined8 local_48;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    uVar1 = param_2 - (longlong)param_1;
    if (0x10 < (longlong)(uVar1 & 0xfffffffffffffff0)) {
        puVar2 = (undefined4 *)(param_2 + -0x10);
        do {
            local_38 = *puVar2;
            local_34 = puVar2[1];
            local_30 = puVar2[2];
            local_2c = puVar2[3];
            *puVar2 = *param_1;
            puVar2[1] = param_1[1];
            puVar2[2] = param_1[2];
            puVar2[3] = param_1[3];
            local_48 = param_3;
            FUN_140575620(param_1,0,(longlong)(uVar1 - 0x10) >> 4,&local_38);
            puVar2 = puVar2 + -4;
            uVar1 = (longlong)puVar2 + (0x10 - (longlong)param_1);
        } while (0x10 < (longlong)(uVar1 & 0xfffffffffffffff0));
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



void FUN_1405754a0(longlong param_1,longlong param_2,code *param_3)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined auStack136 [32];
    code *local_68;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    lVar9 = param_2 - param_1 >> 4;
    if (1 < lVar9) {
        lVar2 = (lVar9 + -2) / 2;
        lVar7 = lVar2 * 2 + 2;
        puVar8 = (undefined4 *)(lVar2 * 0x10 + param_1);
        while( true ) {
            local_58 = *puVar8;
            local_50 = puVar8[2];
            local_54 = puVar8[1];
            local_4c = puVar8[3];
            lVar6 = lVar2;
            for (lVar5 = lVar7; lVar5 < lVar9; lVar5 = lVar5 * 2 + 2) {
                lVar3 = lVar5 * 0x10 + param_1;
                cVar1 = (*param_3)(lVar3,lVar3 + -0x10);
                if (cVar1 != '\0') {
                    lVar5 = lVar5 + -1;
                }
                puVar4 = (undefined4 *)(lVar5 * 0x10 + param_1);
                *(undefined4 *)(param_1 + lVar6 * 0x10) = *puVar4;
                *(undefined4 *)(param_1 + 4 + lVar6 * 0x10) = puVar4[1];
                *(undefined4 *)(param_1 + 8 + lVar6 * 0x10) = puVar4[2];
                *(undefined4 *)(param_1 + 0xc + lVar6 * 0x10) = puVar4[3];
                lVar6 = lVar5;
            }
            if (lVar5 == lVar9) {
                lVar3 = lVar5 * 0x10 + param_1;
                *(undefined4 *)(param_1 + lVar6 * 0x10) = *(undefined4 *)(lVar3 + -0x10);
                *(undefined4 *)(param_1 + 4 + lVar6 * 0x10) = *(undefined4 *)(lVar3 + -0xc);
                *(undefined4 *)(param_1 + 8 + lVar6 * 0x10) = *(undefined4 *)(lVar3 + -8);
                *(undefined4 *)(param_1 + 0xc + lVar6 * 0x10) = *(undefined4 *)(lVar3 + -4);
                lVar6 = lVar5 + -1;
            }
            local_68 = param_3;
            FUN_140575720(param_1,lVar6,lVar2,&local_58);
            if (lVar2 == 0) break;
            lVar2 = lVar2 + -1;
            puVar8 = puVar8 + -4;
            lVar7 = lVar7 + -2;
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack136);
    return;
}



void FUN_140575620(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   code *param_5)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;

    lVar1 = param_2 * 2;
    lVar6 = param_2;
    while (lVar5 = lVar1 + 2, lVar5 < param_3) {
        lVar3 = lVar5 * 0x10 + param_1;
        cVar2 = (*param_5)(lVar3,lVar3 + -0x10);
        if (cVar2 != '\0') {
            lVar5 = lVar1 + 1;
        }
        puVar4 = (undefined4 *)(lVar5 * 0x10 + param_1);
        *(undefined4 *)(param_1 + lVar6 * 0x10) = *puVar4;
        *(undefined4 *)(param_1 + 4 + lVar6 * 0x10) = puVar4[1];
        *(undefined4 *)(param_1 + 8 + lVar6 * 0x10) = puVar4[2];
        *(undefined4 *)(param_1 + 0xc + lVar6 * 0x10) = puVar4[3];
        lVar6 = lVar5;
        lVar1 = lVar5 * 2;
    }
    if (lVar5 == param_3) {
        lVar5 = lVar5 * 0x10 + param_1;
        *(undefined4 *)(param_1 + lVar6 * 0x10) = *(undefined4 *)(lVar5 + -0x10);
        *(undefined4 *)(param_1 + 4 + lVar6 * 0x10) = *(undefined4 *)(lVar5 + -0xc);
        *(undefined4 *)(param_1 + 8 + lVar6 * 0x10) = *(undefined4 *)(lVar5 + -8);
        *(undefined4 *)(param_1 + 0xc + lVar6 * 0x10) = *(undefined4 *)(lVar5 + -4);
        lVar6 = lVar1 + 1;
    }
    FUN_140575720(param_1,lVar6,param_2,param_4);
    return;
}



void FUN_140575720(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                   code *param_5)

{
    longlong lVar1;
    char cVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar1 = param_2 + -1;
    if (param_3 < param_2) {
        do {
            lVar4 = lVar1 / 2;
            puVar3 = (undefined4 *)(lVar4 * 0x10 + param_1);
            cVar2 = (*param_5)(puVar3,param_4);
            if (cVar2 == '\0') break;
            *(undefined4 *)(param_1 + param_2 * 0x10) = *puVar3;
            *(undefined4 *)(param_1 + 4 + param_2 * 0x10) = puVar3[1];
            *(undefined4 *)(param_1 + 8 + param_2 * 0x10) = puVar3[2];
            *(undefined4 *)(param_1 + 0xc + param_2 * 0x10) = puVar3[3];
            lVar1 = lVar4 + -1;
            param_2 = lVar4;
        } while (param_3 < lVar4);
    }
    *(undefined4 *)(param_1 + param_2 * 0x10) = *param_4;
    *(undefined4 *)(param_1 + 4 + param_2 * 0x10) = param_4[1];
    *(undefined4 *)(param_1 + 8 + param_2 * 0x10) = param_4[2];
    *(undefined4 *)(param_1 + 0xc + param_2 * 0x10) = param_4[3];
    return;
}



undefined8 * FUN_140575820(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6ca90;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405758b0(undefined8 param_1,ulonglong param_2)

{
    FUN_140575930();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140575930(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b6c8d8;
    lVar4 = *(longlong *)(param_1[8] + 0x10);
    if (lVar4 != param_1[8]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != param_1[8]);
    }
    FUN_140008410(param_1 + 7);
    param_1[0xb] = 0;
    FUN_140008410(param_1 + 0xc);
    FUN_14018b900(param_1[0xd],0);
    FUN_140008410(param_1 + 7);
    FUN_14018b900(param_1[8],0);
    return;
}



undefined8 FUN_140575a30(undefined8 param_1,ulonglong param_2)

{
    FUN_140575b00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140575b00(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b6cbd0;
    plVar2 = *(longlong **)(longlong *)param_1[2];
    if (plVar2 != (longlong *)param_1[2]) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)param_1[2]);
    }
    *(undefined8 *)param_1[2] = param_1[2];
    *(undefined8 *)(param_1[2] + 8) = param_1[2];
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_140575b60(void)

{
    undefined8 *puVar1;
    undefined *puVar2;

    if (DAT_140c65b78 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)FUN_14018b280(0x30);
        if (puVar1 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)0x0;
        }
        else {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar2 = (undefined *)FUN_14018b280(0x28);
            puVar1[4] = 0;
            puVar1[3] = puVar2;
            *puVar2 = 0;
            *(undefined8 *)(puVar1[3] + 8) = 0;
            *(undefined8 *)(puVar1[3] + 0x10) = puVar1[3];
            *(undefined8 *)(puVar1[3] + 0x18) = puVar1[3];
        }
        DAT_140c65b78 = puVar1;
        FUN_140575c50(puVar1);
    }
    return 0;
}



longlong * FUN_140575bf0(longlong *param_1)

{
    FUN_140575c50();
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    if (param_1[1] != 0) {
        FUN_1401a4a00(param_1 + 1);
    }
    if (*param_1 != 0) {
        FUN_1401a4a00(param_1);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



void FUN_140575c50(longlong **param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *local_res8;

    local_res8 = *param_1;
    *param_1 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[3] = (longlong)&local_res8;
        while (local_res8 != (longlong *)0x0) {
            if ((longlong *)local_res8[3] != (longlong *)0x0) {
                *(longlong *)local_res8[3] = local_res8[4];
            }
            pplVar1 = (longlong **)(local_res8 + 4);
            if (local_res8[4] != 0) {
                *(longlong *)(local_res8[4] + 0x18) = local_res8[3];
            }
            *pplVar1 = (longlong *)0x0;
            local_res8[3] = (longlong)param_1;
            *pplVar1 = *param_1;
            *param_1 = local_res8;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
            (**(code **)(*local_res8 + 0x28))(local_res8,1,1);
        }
    }
    plVar2 = param_1[1];
    while (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,1);
        plVar2 = param_1[1];
    }
    FUN_1407199a0();
    if (local_res8 != (longlong *)0x0) {
        FUN_1401a4a00(&local_res8);
    }
    return;
}



void FUN_140575d20(undefined8 param_1,undefined4 param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *local_res8;

    pplVar2 = DAT_140c65b78;
    local_res8 = *DAT_140c65b78;
    *DAT_140c65b78 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[3] = (longlong)&local_res8;
        while (local_res8 != (longlong *)0x0) {
            if ((longlong *)local_res8[3] != (longlong *)0x0) {
                *(longlong *)local_res8[3] = local_res8[4];
            }
            pplVar1 = (longlong **)(local_res8 + 4);
            if (local_res8[4] != 0) {
                *(longlong *)(local_res8[4] + 0x18) = local_res8[3];
            }
            *pplVar1 = (longlong *)0x0;
            local_res8[3] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = local_res8;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
            param_1 = (**(code **)(*local_res8 + 8))(param_1,param_2);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140575dd0(void)

{
    longlong **pplVar1;
    longlong **pplVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong *plVar7;
    undefined *puVar8;
    undefined4 uVar9;
    int iVar10;
    undefined4 uVar11;
    undefined8 uVar12;
    longlong lVar13;
    longlong lVar14;
    longlong *plVar15;
    longlong lVar16;
    code **ppcVar17;
    undefined *puVar18;
    longlong *plVar19;
    undefined *puVar20;
    longlong **pplVar21;
    longlong *plVar22;
    longlong *local_res20;
    ulonglong in_stack_fffffffffffffed0;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined local_b8 [8];
    undefined *local_b0;
    undefined8 local_a8;
    undefined local_98 [88];

    pplVar21 = DAT_140c65b78;
    local_res20 = *DAT_140c65b78;
    *DAT_140c65b78 = (longlong *)0x0;
    if (local_res20 != (longlong *)0x0) {
        local_res20[3] = (longlong)&local_res20;
    }
    local_b0 = (undefined *)FUN_14018b280(0x28);
    local_a8 = 0;
    *local_b0 = 0;
    *(undefined8 *)(local_b0 + 8) = 0;
    *(undefined **)(local_b0 + 0x10) = local_b0;
    *(undefined **)(local_b0 + 0x18) = local_b0;
    while (plVar19 = local_res20, local_res20 = plVar19, plVar19 != (longlong *)0x0) {
        if ((longlong *)plVar19[3] != (longlong *)0x0) {
            *(longlong *)plVar19[3] = plVar19[4];
        }
        pplVar2 = (longlong **)(plVar19 + 4);
        if (plVar19[4] != 0) {
            *(longlong *)(plVar19[4] + 0x18) = plVar19[3];
        }
        *pplVar2 = (longlong *)0x0;
        plVar19[3] = (longlong)pplVar21;
        *pplVar2 = *pplVar21;
        *pplVar21 = plVar19;
        if (*pplVar2 != (longlong *)0x0) {
            (*pplVar2)[3] = (longlong)pplVar2;
        }
        uVar9 = (**(code **)(*plVar19 + 0x38))(plVar19);
        uVar12 = FUN_1403d90d0(DAT_140c65898,uVar9);
        lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
        if ((*(int *)(lVar13 + 0x28) != 0) &&
            (lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19), *(int *)(lVar13 + 0x24) != 0)) {
            lVar13 = *DAT_140c659a0;
            lVar14 = (**(code **)(*plVar19 + 0x10))(plVar19);
            in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffff00000000;
            iVar10 = (**(code **)(lVar13 + 0x18))
                    (DAT_140c659a0,uVar12,*(undefined4 *)(lVar14 + 0x24),0,0,
                     in_stack_fffffffffffffed0);
            if (iVar10 == 0) {
                iVar10 = (**(code **)(*plVar19 + 0x48))(plVar19);
                if (iVar10 != 0) {
                    pplVar2 = pplVar21 + 1;
                    for (plVar15 = pplVar21[1]; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[4])
                    {
                        lVar13 = (**(code **)(*plVar19 + 0x10))();
                        if ((((*(int *)(lVar13 + 0x20) == *(int *)(plVar15 + 5)) &&
                              (lVar13 = (**(code **)(*plVar19 + 0x10))(),
                                      *(int *)(lVar13 + 0x28) == *(int *)(plVar15 + 6))) &&
                             (iVar10 = (**(code **)(*plVar19 + 0x38))(plVar19),
                                     iVar10 == *(int *)((longlong)plVar15 + 0x2c))) &&
                            (lVar13 = (**(code **)(*plVar19 + 0x10))(),
                                    *(int *)(lVar13 + 0x88) == *(int *)((longlong)plVar15 + 0x4c))) goto LAB_1405761ac;
                    }
                    local_98._0_16_ = ZEXT816(local_98._8_8_) << 0x40;
                    local_d8 = 0;
                    lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                    uVar9 = *(undefined4 *)(lVar13 + 0x20);
                    uVar11 = (**(code **)(*plVar19 + 0x38))(plVar19);
                    lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                    uVar3 = *(undefined4 *)(lVar13 + 8);
                    lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                    uVar4 = *(undefined4 *)(lVar13 + 0x28);
                    lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                    uVar5 = *(undefined4 *)(lVar13 + 0x2c);
                    lVar13 = (**(code **)(*plVar19 + 0x40))(plVar19);
                    if (lVar13 == 0) {
                        uStack220 = 0;
                        uStack224 = 0;
                    }
                    else {
                        lVar13 = (**(code **)(*plVar19 + 0x40))(plVar19);
                        uStack224 = *(undefined4 *)(lVar13 + 0x30);
                        uStack220 = *(undefined4 *)(lVar13 + 0x34);
                        local_d8 = *(undefined4 *)(lVar13 + 0x38);
                    }
                    plVar15 = (longlong *)FUN_14018b280(0x58);
                    if (plVar15 == (longlong *)0x0) {
                        plVar15 = (longlong *)0x0;
                    }
                    else {
                        lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                        lVar13 = *(longlong *)(lVar13 + 0x90);
                        lVar14 = (**(code **)(*plVar19 + 0x10))();
                        uVar6 = *(undefined4 *)(lVar14 + 0x88);
                        *plVar15 = (longlong)&PTR_FUN_140b6cc98;
                        plVar15[1] = 0;
                        plVar15[2] = 0;
                        plVar15[3] = 0;
                        plVar15[4] = 0;
                        *(undefined4 *)(plVar15 + 5) = uVar9;
                        *(undefined4 *)(plVar15 + 6) = uVar4;
                        *(undefined4 *)((longlong)plVar15 + 0x2c) = uVar11;
                        *(undefined4 *)((longlong)plVar15 + 0x34) = uVar5;
                        *(int *)(plVar15 + 7) = SUB164(local_98._0_16_,0);
                        *(undefined4 *)((longlong)plVar15 + 0x3c) = uVar3;
                        *(undefined4 *)(plVar15 + 8) = uStack224;
                        *(undefined4 *)((longlong)plVar15 + 0x44) = uStack220;
                        *(undefined4 *)(plVar15 + 9) = local_d8;
                        *(undefined4 *)((longlong)plVar15 + 0x4c) = uVar6;
                        plVar15[10] = lVar13;
                    }
                    if (plVar15[3] == 0) {
                        plVar15[3] = (longlong)pplVar2;
                        pplVar1 = (longlong **)(plVar15 + 4);
                        *pplVar1 = *pplVar2;
                        *pplVar2 = plVar15;
                        if (*pplVar1 != (longlong *)0x0) {
                            (*pplVar1)[3] = (longlong)pplVar1;
                        }
                    }
                    lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                    if ((*(int *)(lVar13 + 0x88) != 0) &&
                        (lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19), *(longlong *)(lVar13 + 0x90) != 0))
                    {
                        lVar13 = (**(code **)(*plVar19 + 0x10))(plVar19);
                        lVar13 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar13 + 0x88));
                        if ((lVar13 != 0) && (pplVar2 = (longlong **)(lVar13 + 0x238), plVar15[1] == 0)) {
                            plVar15[1] = (longlong)pplVar2;
                            pplVar1 = (longlong **)(plVar15 + 2);
                            *pplVar1 = *pplVar2;
                            *pplVar2 = plVar15;
                            if (*pplVar1 != (longlong *)0x0) {
                                (*pplVar1)[1] = (longlong)pplVar1;
                            }
                        }
                    }
                    FUN_1400293c0(local_b8);
                }
                LAB_1405761ac:
                (**(code **)(*plVar19 + 0x28))(plVar19);
            }
        }
    }
    plVar19 = pplVar21[1];
    joined_r0x0001405761e8:
    while( true ) {
        plVar15 = plVar19;
        if (plVar15 == (longlong *)0x0) {
            puVar20 = *(undefined **)(local_b0 + 0x10);
            if (puVar20 != local_b0) {
                do {
                    lVar13 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(puVar20 + 0x20));
                    if (lVar13 != 0) {
                        FUN_140469eb0(lVar13);
                    }
                    puVar18 = *(undefined **)(puVar20 + 0x18);
                    if (puVar18 == (undefined *)0x0) {
                        puVar18 = *(undefined **)(puVar20 + 8);
                        if (puVar20 == *(undefined **)(puVar18 + 0x18)) {
                            do {
                                puVar20 = puVar18;
                                puVar18 = *(undefined **)(puVar20 + 8);
                            } while (puVar20 == *(undefined **)(puVar18 + 0x18));
                        }
                        if (*(undefined **)(puVar20 + 0x18) != puVar18) {
                            puVar20 = puVar18;
                        }
                    }
                    else {
                        for (puVar8 = *(undefined **)(puVar18 + 0x10); puVar20 = puVar18,
                                puVar8 != (undefined *)0x0; puVar8 = *(undefined **)(puVar8 + 0x10)) {
                            puVar18 = puVar8;
                        }
                    }
                } while (puVar20 != local_b0);
            }
            FUN_140008410(local_b8);
            FUN_14018b900(local_b0,0);
            if (local_res20 != (longlong *)0x0) {
                FUN_1401a4a00(&local_res20);
            }
            return;
        }
        lVar13 = 0;
        if (DAT_140c63840 == (code *)0x0) {
            lVar14 = lVar13;
            if ((_DAT_140c64c04 == 0) && (iVar10 = FUN_140248ca0(), -1 < iVar10)) {
                lVar14 = (**(code **)(*DAT_140c63b40 + 0x18))();
            }
        }
        else {
            lVar14 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8);
        }
        lVar16 = FUN_1403d90d0(DAT_140c65898);
        if (*(int *)((longlong)plVar15 + 0x4c) != 0) {
            lVar13 = FUN_140561c30(DAT_140c65b70);
        }
        if (((lVar14 == 0) ||
             ((*(int *)((longlong)plVar15 + 0x2c) != 0 &&
               ((lVar16 == 0 || (*(longlong *)(lVar16 + 0x16e8) == 0)))))) ||
            ((*(int *)((longlong)plVar15 + 0x4c) != 0 && (lVar13 == 0)))) goto LAB_14057649f;
        if ((*(int *)(lVar14 + 0x94) == 0) ||
            (iVar10 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar10 != 0)) break;
        plVar19 = (longlong *)plVar15[4];
    }
    FUN_1400293c0();
    plVar19 = (longlong *)plVar15[4];
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64c04 == 0) && (iVar10 = FUN_140248ca0(), -1 < iVar10)) {
            (**(code **)(*DAT_140c63b40 + 0x18))();
        }
    }
    else {
        (*DAT_140c63840)();
    }
    local_98._0_16_ = ZEXT816(0);
    if ((*(int *)(plVar15 + 7) != 0) && (lVar14 = FUN_14023d400(), lVar14 != 0)) {
        local_98._0_16_ = ZEXT1216(*(undefined (*) [12])(lVar14 + 0x6c));
    }
    if (lVar13 == 0) {
        pplVar21 = (longlong **)0x0;
    }
    else {
        pplVar21 = (longlong **)plVar15[10];
    }
    if ((*(int *)((longlong)plVar15 + 0x2c) != 0) && (pplVar21 == (longlong **)0x0)) {
        pplVar21 = (longlong **)(lVar16 + 0x588);
    }
    plVar22 = (longlong *)0x0;
    if (pplVar21 != (longlong **)0x0) {
        plVar22 = *pplVar21;
    }
    FUN_1405787d0();
    if ((((lVar13 != 0) && (plVar15[10] != 0)) && (plVar7 = *pplVar21, plVar7 != (longlong *)0x0)) &&
        ((plVar7 != plVar22 &&
          (lVar13 = (**(code **)(*plVar7 + 0x10))(plVar7), *(int *)(lVar13 + 0x30) - 5U < 2)))) {
        (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    ppcVar17 = (code **)*plVar15;
    goto LAB_1405764ae;
    LAB_14057649f:
    plVar19 = (longlong *)plVar15[4];
    if (plVar15 != (longlong *)0x0) {
        ppcVar17 = (code **)*plVar15;
        LAB_1405764ae:
        (**ppcVar17)(plVar15);
    }
    goto joined_r0x0001405761e8;
}



int FUN_1405765a0(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;

    pplVar2 = DAT_140c65b78;
    lVar4 = FUN_14018b280(0x218,8);
    if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
    }
    else {
        plVar5 = (longlong *)FUN_14071a210(lVar4);
    }
    iVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
    if (iVar3 < 0) {
        (**(code **)*plVar5)(plVar5,1);
    }
    else {
        if (plVar5[3] == 0) {
            plVar5[3] = (longlong)pplVar2;
            pplVar1 = (longlong **)(plVar5 + 4);
            *pplVar1 = *pplVar2;
            *pplVar2 = plVar5;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
        }
        if ((param_3 != (longlong **)0x0) && (plVar5[1] == 0)) {
            plVar5[1] = (longlong)param_3;
            pplVar2 = (longlong **)(plVar5 + 2);
            *pplVar2 = *param_3;
            *param_3 = plVar5;
            if (*pplVar2 != (longlong *)0x0) {
                (*pplVar2)[1] = (longlong)pplVar2;
            }
        }
    }
    return iVar3;
}



ulonglong FUN_140576670(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(400,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_FUN_140b743f0;
        puVar3[0x1c] = 0;
        *(undefined4 *)(puVar3 + 0x1d) = 0;
        FUN_1407e4830(puVar3 + 0x1e,0,0xa0);
    }
    uVar4 = FUN_14071b080(puVar3,param_2);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_3 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_3;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_3;
            *param_3 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



int FUN_1405767d0(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    float fVar7;
    float fVar8;

    uVar1 = DAT_140c65b78;
    puVar6 = (undefined8 *)0x0;
    if (*(float *)(param_3 + 0xac) <= 1e-05) {
        if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
             (param_2 == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) ||
            ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
              (((plVar4 = (longlong *)
                      FUN_1403d90d0(DAT_140c65898,
                                    *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)),
                      plVar4 != (longlong *)0x0 && (iVar2 = (**(code **)(*plVar4 + 0x20))(plVar4), iVar2 != 0))
                && (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0) == param_2))))))
            goto LAB_1405768e7;
    }
    else {
        lVar5 = *(longlong *)(DAT_140c65898 + 0x6490);
        lVar3 = FUN_1403d90d0();
        if (((lVar5 != 0) && (lVar3 != 0)) &&
            ((fVar7 = *(float *)(lVar5 + 0x11e0) - *(float *)(lVar3 + 0x11e0),
              fVar8 = *(float *)(lVar5 + 0x11e4) - *(float *)(lVar3 + 0x11e4),
              fVar7 = fVar7 * fVar7 + fVar8 * fVar8 + 0.0,
                    *(float *)(param_3 + 0xa8) * *(float *)(param_3 + 0xa8) <= fVar7 &&
                    (fVar7 < *(float *)(param_3 + 0xac) * *(float *)(param_3 + 0xac))))) {
            LAB_1405768e7:
            lVar5 = FUN_14018b280(0x1b8,8);
            if (lVar5 != 0) {
                puVar6 = (undefined8 *)FUN_14071b260(lVar5);
            }
            iVar2 = FUN_14071b3b0(puVar6,param_3);
            if (iVar2 < 0) {
                if (puVar6 == (undefined8 *)0x0) {
                    return iVar2;
                }
                (**(code **)*puVar6)(puVar6,1);
                return iVar2;
            }
            FUN_140579a40(uVar1,puVar6,param_4);
            return iVar2;
        }
    }
    return -0x7fffbffb;
}



ulonglong FUN_140576950(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(0x188,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_FUN_140b74250;
        FUN_1407e4830(puVar3 + 0x1c,0,0xa8);
    }
    uVar4 = FUN_14071bb50(puVar3,param_2);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_3 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_3;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_3;
            *param_3 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



ulonglong FUN_140576aa0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    puVar2 = (undefined8 *)FUN_14018b280(0x180,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
        *(undefined4 *)(puVar2 + 7) = 0x544e5645;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0x544e5645;
        puVar2[0x1a] = 0;
        *puVar2 = &PTR_FUN_140b742b0;
        FUN_1407e4830(puVar2 + 0x1c,0,0xa0);
    }
    uVar3 = FUN_14071bd20(puVar2,param_2);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 < 0) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
            uVar3 = uVar4;
        }
    }
    else {
        if (puVar2[3] == 0) {
            puVar2[3] = param_1;
            plVar1 = puVar2 + 4;
            *plVar1 = *param_1;
            *param_1 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar3 = uVar4;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
    }
    return uVar3;
}



int FUN_140576bf0(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong *plVar4;

    pplVar2 = DAT_140c65b78;
    plVar4 = (longlong *)FUN_14018b280(0x260,8);
    if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        FUN_14071be70(plVar4);
        *plVar4 = (longlong)&PTR_FUN_140b741a0;
        FUN_1407e4830(plVar4 + 0x2c,0,0xd0);
        FUN_1407e4830(plVar4 + 0x2c,0,0x100);
    }
    FUN_14071ca20(plVar4 + 0x2c,param_2);
    (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined4 *)((longlong)plVar4 + 0x25c));
    iVar3 = FUN_14071c0b0(plVar4,plVar4 + 0x2c);
    if (iVar3 < 0) {
        (**(code **)*plVar4)(plVar4,1);
    }
    else {
        if (plVar4[3] == 0) {
            plVar4[3] = (longlong)pplVar2;
            pplVar1 = (longlong **)(plVar4 + 4);
            *pplVar1 = *pplVar2;
            *pplVar2 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
        }
        if ((param_3 != (longlong **)0x0) && (plVar4[1] == 0)) {
            plVar4[1] = (longlong)param_3;
            pplVar2 = (longlong **)(plVar4 + 2);
            *pplVar2 = *param_3;
            *param_3 = plVar4;
            if (*pplVar2 != (longlong *)0x0) {
                (*pplVar2)[1] = (longlong)pplVar2;
            }
        }
    }
    return iVar3;
}



ulonglong FUN_140576d20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        longlong *param_5)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    puVar2 = (undefined8 *)FUN_14018b280(0x270,0);
    if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar4 = puVar2;
        FUN_14071be70(puVar2);
        FUN_1407e4830(puVar4 + 0x2c,0,0xd0);
        FUN_1407e4830(puVar2 + 0x2c,0,0x100);
        *puVar2 = &PTR_FUN_140b740f0;
        puVar2[0x4c] = 0;
        puVar2[0x4d] = 0;
    }
    uVar3 = FUN_14071e0f0(puVar2,param_2,param_3,param_4);
    uVar5 = uVar3 & 0xffffffff;
    if ((int)uVar3 < 0) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
            uVar3 = uVar5;
        }
    }
    else {
        if (puVar2[3] == 0) {
            puVar2[3] = param_1;
            plVar1 = puVar2 + 4;
            *plVar1 = *param_1;
            *param_1 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar3 = uVar5;
        if ((param_5 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_5;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_5;
            *param_5 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
    }
    return uVar3;
}



int FUN_140576e50(undefined8 param_1,undefined8 param_2,longlong **param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong *plVar4;

    pplVar2 = DAT_140c65b78;
    plVar4 = (longlong *)FUN_14018b280(0x300,8);
    if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        FUN_14071be70(plVar4);
        *plVar4 = (longlong)&PTR_LAB_140b74060;
        FUN_1407e4830(plVar4 + 0x2c,0,0xd0);
        FUN_1407e4830(plVar4 + 0x2c,0,400);
        plVar4[0x5e] = 0;
    }
    FUN_14071e280(plVar4 + 0x2c,param_2);
    (**(code **)(*plVar4 + 0x60))(plVar4,*(undefined4 *)((longlong)plVar4 + 0x2e4));
    (**(code **)(*plVar4 + 0x80))(plVar4);
    iVar3 = FUN_14071c0b0(plVar4,plVar4 + 0x2c);
    if (iVar3 < 0) {
        (**(code **)*plVar4)(plVar4,1);
    }
    else {
        if (plVar4[3] == 0) {
            plVar4[3] = (longlong)pplVar2;
            pplVar1 = (longlong **)(plVar4 + 4);
            *pplVar1 = *pplVar2;
            *pplVar2 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
        }
        if ((param_3 != (longlong **)0x0) && (plVar4[1] == 0)) {
            plVar4[1] = (longlong)param_3;
            pplVar2 = (longlong **)(plVar4 + 2);
            *pplVar2 = *param_3;
            *param_3 = plVar4;
            if (*pplVar2 != (longlong *)0x0) {
                (*pplVar2)[1] = (longlong)pplVar2;
            }
        }
    }
    return iVar3;
}



ulonglong FUN_140576f90(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(0x180,8);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_FUN_140b73fa0;
        FUN_1407e4830(puVar3 + 0x1c,0,0xa0);
    }
    uVar4 = FUN_14071f9b0(puVar3,param_2);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_3 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_3;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_3;
            *param_3 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



ulonglong FUN_1405770f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    puVar2 = (undefined8 *)FUN_14018b280(0x188,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        *(undefined4 *)(puVar2 + 7) = 0x544e5645;
        *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x15] = 0;
        puVar2[0x16] = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0x544e5645;
        *(undefined8 *)((longlong)puVar2 + 0xc4) = 0;
        puVar2[0x1a] = 0;
        *puVar2 = &PTR_LAB_140b74000;
        puVar2[0x1c] = 0;
        FUN_1407e4830(puVar2 + 0x1d,0,0xa0);
    }
    uVar3 = FUN_14071fad0(puVar2,param_2);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 < 0) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
            uVar3 = uVar4;
        }
    }
    else {
        if (puVar2[3] == 0) {
            puVar2[3] = param_1;
            plVar1 = puVar2 + 4;
            *plVar1 = *param_1;
            *param_1 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar3 = uVar4;
        if ((param_3 != (longlong *)0x0) && (puVar2[1] == 0)) {
            puVar2[1] = param_3;
            plVar1 = puVar2 + 2;
            *plVar1 = *param_3;
            *param_3 = (longlong)puVar2;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
    }
    return uVar3;
}



ulonglong FUN_140577250(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(400,8);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_LAB_140b73e80;
        FUN_1407e4830(puVar3 + 0x1c,0,0xb0);
    }
    uVar4 = FUN_14071fcd0(puVar3,param_3);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_4 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_4;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_4;
            *param_4 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



ulonglong FUN_1405773b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(0x188,8);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_FUN_140b73ee0;
        FUN_1407e4830(puVar3 + 0x1c,0,0xa8);
    }
    uVar4 = FUN_14071bb50(puVar3,param_3);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_4 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_4;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_4;
            *param_4 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



ulonglong FUN_140577510(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    plVar2 = DAT_140c65b78;
    puVar3 = (undefined8 *)FUN_14018b280(0x180,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x7c) = 0;
        *(undefined4 *)(puVar3 + 7) = 0x544e5645;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)((longlong)puVar3 + 0xc4) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0x544e5645;
        puVar3[0x1a] = 0;
        *puVar3 = &PTR_FUN_140b73f40;
        FUN_1407e4830(puVar3 + 0x1c,0,0xa0);
    }
    uVar4 = FUN_14071f9b0(puVar3,param_2);
    uVar5 = uVar4 & 0xffffffff;
    if ((int)uVar4 < 0) {
        if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
            uVar4 = uVar5;
        }
    }
    else {
        if (puVar3[3] == 0) {
            puVar3[3] = plVar2;
            plVar1 = puVar3 + 4;
            *plVar1 = *plVar2;
            *plVar2 = (longlong)puVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        uVar4 = uVar5;
        if ((param_3 != (longlong *)0x0) && (puVar3[1] == 0)) {
            puVar3[1] = param_3;
            plVar2 = puVar3 + 2;
            *plVar2 = *param_3;
            *param_3 = (longlong)puVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 8) = plVar2;
            }
        }
    }
    return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140577660(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 in_stack_ffffffffffffff60;
    uint uVar8;
    undefined local_68 [16];
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

    uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    lVar4 = FUN_140248f00();
    if (lVar4 == 0) {
        return 0;
    }
    FUN_140248f00();
    local_68 = ZEXT816(0);
    if ((param_2[4] != 0) && (lVar5 = FUN_14023d400(), lVar5 != 0)) {
        local_68 = ZEXT1216(*(undefined (*) [12])(lVar5 + 0x6c));
    }
    local_58 = _DAT_140c78390;
    uStack84 = uRam0000000140c78394;
    uStack80 = uRam0000000140c78398;
    uStack76 = uRam0000000140c7839c;
    local_48 = _DAT_140c783a0;
    uStack68 = uRam0000000140c783a4;
    uStack64 = uRam0000000140c783a8;
    uStack60 = uRam0000000140c783ac;
    local_38 = _DAT_140c783b0;
    uStack52 = uRam0000000140c783b4;
    uStack48 = uRam0000000140c783b8;
    uStack44 = uRam0000000140c783bc;
    local_28 = _DAT_140c783c0;
    uStack36 = uRam0000000140c783c4;
    uStack32 = uRam0000000140c783c8;
    uStack28 = uRam0000000140c783cc;
    if (param_2[1] == 0) {
        local_28 = param_2[6];
        uStack36 = param_2[7];
        uStack32 = param_2[8];
    }
    else {
        lVar5 = FUN_1403d90d0(DAT_140c65898);
        if (lVar5 == 0) {
            return 0;
        }
        if (*(longlong *)(lVar5 + 0x16e8) == 0) {
            FUN_140579ac0(lVar5 + 0x598,param_2);
            FUN_1400293c0(param_1 + 0x10,local_68,param_2 + 1);
            return 0;
        }
        puVar7 = (undefined8 *)0x0;
        if ((*(int *)(lVar4 + 0x94) != 0) &&
            (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,lVar5,*(int *)(lVar4 + 0x94),0,0,(ulonglong)uVar8 << 0x20),
                    iVar3 == 0)) {
            puVar6 = (undefined8 *)FUN_14018b280(0x58,0);
            if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = &PTR_FUN_140b6cc98;
                puVar6[1] = 0;
                puVar6[2] = 0;
                puVar6[3] = 0;
                puVar6[4] = 0;
                *(undefined4 *)(puVar6 + 5) = *param_2;
                *(undefined4 *)((longlong)puVar6 + 0x2c) = param_2[1];
                *(undefined4 *)(puVar6 + 6) = param_2[2];
                *(undefined4 *)((longlong)puVar6 + 0x34) = param_2[3];
                *(undefined4 *)(puVar6 + 7) = param_2[4];
                *(undefined4 *)((longlong)puVar6 + 0x3c) = param_2[5];
                *(undefined4 *)(puVar6 + 8) = param_2[6];
                *(undefined4 *)((longlong)puVar6 + 0x44) = param_2[7];
                *(undefined4 *)(puVar6 + 9) = param_2[8];
                *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
                puVar6[10] = 0;
                puVar7 = puVar6;
            }
            plVar1 = (longlong *)(param_1 + 8);
            if (puVar7[3] != 0) {
                return 0;
            }
            puVar7[3] = plVar1;
            plVar2 = puVar7 + 4;
            *plVar2 = *plVar1;
            *plVar1 = (longlong)puVar7;
            if (*plVar2 == 0) {
                return 0;
            }
            *(longlong **)(*plVar2 + 0x18) = plVar2;
            return 0;
        }
        local_28 = *(undefined4 *)(lVar5 + 0x11e0);
        uStack36 = *(undefined4 *)(lVar5 + 0x11e4);
        uStack32 = *(undefined4 *)(lVar5 + 0x11e8);
    }
    FUN_1405787d0();
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140577920(undefined8 param_1,uint *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined4 *puVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong uVar10;

    lVar2 = DAT_140c65b78;
    uVar10 = 0;
    if (*param_2 != 0) {
        lVar9 = 0;
        do {
            puVar7 = (undefined4 *)(*(longlong *)(param_2 + 2) + lVar9);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c04 == 0) && (iVar3 = FUN_140248ca0(), -1 < iVar3)) {
                    lVar4 = (**(code **)(*DAT_140c63b40 + 0x18))();
                    goto LAB_1405779c3;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)();
                LAB_1405779c3:
                if (lVar4 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64c04 == 0) && (iVar3 = FUN_140248ca0(), -1 < iVar3)) {
                            (**(code **)(*DAT_140c63b40 + 0x18))();
                        }
                    }
                    else {
                        (*DAT_140c63840)();
                    }
                    if (puVar7[4] != 0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64c94 == 0) && (iVar3 = FUN_14023d1a0(), -1 < iVar3)) {
                                (**(code **)(*DAT_140c64fe8 + 0x18))();
                            }
                        }
                        else {
                            (*DAT_140c63840)();
                        }
                    }
                    if (puVar7[1] == 0) {
                        LAB_140577ca8:
                        FUN_1405787d0();
                    }
                    else {
                        lVar5 = FUN_1403d90d0(DAT_140c65898);
                        if (lVar5 != 0) {
                            if (*(longlong *)(lVar5 + 0x16e8) == 0) {
                                FUN_140579ac0(lVar5 + 0x598,puVar7);
                                FUN_1400293c0(lVar2 + 0x10);
                            }
                            else {
                                if ((*(int *)(lVar4 + 0x94) == 0) ||
                                    (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar3 != 0)) goto LAB_140577ca8;
                                puVar6 = (undefined8 *)FUN_14018b280(0x58,0);
                                if (puVar6 == (undefined8 *)0x0) {
                                    puVar6 = (undefined8 *)0x0;
                                }
                                else {
                                    *puVar6 = &PTR_FUN_140b6cc98;
                                    puVar6[1] = 0;
                                    puVar6[2] = 0;
                                    puVar6[3] = 0;
                                    puVar6[4] = 0;
                                    *(undefined4 *)(puVar6 + 5) = *puVar7;
                                    *(undefined4 *)((longlong)puVar6 + 0x2c) = puVar7[1];
                                    *(undefined4 *)(puVar6 + 6) = puVar7[2];
                                    *(undefined4 *)((longlong)puVar6 + 0x34) = puVar7[3];
                                    *(undefined4 *)(puVar6 + 7) = puVar7[4];
                                    *(undefined4 *)((longlong)puVar6 + 0x3c) = puVar7[5];
                                    *(undefined4 *)(puVar6 + 8) = puVar7[6];
                                    *(undefined4 *)((longlong)puVar6 + 0x44) = puVar7[7];
                                    *(undefined4 *)(puVar6 + 9) = puVar7[8];
                                    *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
                                    puVar6[10] = 0;
                                }
                                plVar8 = (longlong *)(lVar2 + 8);
                                if (puVar6[3] == 0) {
                                    puVar6[3] = plVar8;
                                    plVar1 = puVar6 + 4;
                                    *plVar1 = *plVar8;
                                    *plVar8 = (longlong)puVar6;
                                    if (*plVar1 != 0) {
                                        *(longlong **)(*plVar1 + 0x18) = plVar1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 0x24;
        } while (uVar10 < *param_2);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140577d20(undefined8 param_1,undefined4 *param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    undefined8 *puVar11;
    longlong *plVar12;
    ulonglong uVar13;
    uint uVar14;
    undefined8 local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    undefined8 local_d0;
    undefined4 local_c8;
    undefined4 local_c0;
    undefined4 local_bc;
    longlong local_b8;
    undefined8 local_b0;
    undefined local_a8 [16];
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;

    local_b8 = DAT_140c65b78;
    puVar7 = (undefined4 *)FUN_14023d840(param_2[1]);
    if ((puVar7 != (undefined4 *)0x0) && (lVar8 = FUN_1403d90d0(DAT_140c65898), lVar8 != 0)) {
        uVar14 = 0;
        uVar13 = 0;
        do {
            puVar7 = puVar7 + 1;
            if ((uint)param_2[3] <= (uint)uVar13) {
                return 0;
            }
            puVar9 = (undefined4 *)FUN_14023d400(*puVar7);
            if ((puVar9 != (undefined4 *)0x0) &&
                (puVar10 = (undefined4 *)FUN_140248f00(), puVar10 != (undefined4 *)0x0)) {
                local_b0 = FUN_140248f00(puVar9[5]);
                local_d0 = 0;
                local_c8 = 0;
                uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar13 * 4);
                uVar3 = *param_2;
                local_e8 = CONCAT44(uVar3,uVar2);
                local_c0 = param_2[2];
                uVar4 = *puVar10;
                uVar5 = puVar9[5];
                local_e0 = CONCAT44(uVar5,uVar4);
                local_bc = *puVar9;
                uVar13 = (ulonglong)((uint)uVar13 + 1);
                local_d8 = CONCAT44(local_c0,local_bc);
                if (*(longlong *)(lVar8 + 0x16e8) == 0) {
                    FUN_140579ac0(lVar8 + 0x598,&local_e8);
                    FUN_1400293c0();
                }
                else if ((puVar10[0x25] == 0) ||
                         (iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar6 != 0)) {
                    local_68 = *(undefined4 *)(lVar8 + 0x11e0);
                    local_88 = _DAT_140c783a0;
                    uStack132 = uRam0000000140c783a4;
                    uStack128 = uRam0000000140c783a8;
                    uStack124 = uRam0000000140c783ac;
                    local_98 = _DAT_140c78390;
                    uStack148 = uRam0000000140c78394;
                    uStack144 = uRam0000000140c78398;
                    uStack140 = uRam0000000140c7839c;
                    uStack92 = uRam0000000140c783cc;
                    uStack100 = *(undefined4 *)(lVar8 + 0x11e4);
                    uStack96 = *(undefined4 *)(lVar8 + 0x11e8);
                    local_78 = _DAT_140c783b0;
                    uStack116 = uRam0000000140c783b4;
                    uStack112 = uRam0000000140c783b8;
                    uStack108 = uRam0000000140c783bc;
                    local_a8 = ZEXT1216(*(undefined (*) [12])(puVar9 + 0x1b));
                    FUN_1405787d0();
                }
                else {
                    puVar11 = (undefined8 *)FUN_14018b280(0x58);
                    if (puVar11 == (undefined8 *)0x0) {
                        puVar11 = (undefined8 *)0x0;
                    }
                    else {
                        *puVar11 = &PTR_FUN_140b6cc98;
                        puVar11[1] = 0;
                        puVar11[2] = 0;
                        puVar11[3] = 0;
                        puVar11[4] = 0;
                        *(undefined4 *)(puVar11 + 6) = uVar4;
                        *(undefined4 *)(puVar11 + 5) = uVar2;
                        *(undefined4 *)((longlong)puVar11 + 0x34) = uVar5;
                        *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar3;
                        *(undefined4 *)(puVar11 + 7) = local_bc;
                        *(undefined4 *)((longlong)puVar11 + 0x3c) = local_c0;
                        *(undefined4 *)(puVar11 + 8) = (undefined4)local_d0;
                        *(undefined4 *)((longlong)puVar11 + 0x44) = local_d0._4_4_;
                        *(undefined4 *)(puVar11 + 9) = local_c8;
                        *(undefined4 *)((longlong)puVar11 + 0x4c) = 0;
                        puVar11[10] = 0;
                    }
                    plVar12 = (longlong *)(local_b8 + 8);
                    if (puVar11[3] == 0) {
                        puVar11[3] = plVar12;
                        plVar1 = puVar11 + 4;
                        *plVar1 = *plVar12;
                        *plVar12 = (longlong)puVar11;
                        if (*plVar1 != 0) {
                            *(longlong **)(*plVar1 + 0x18) = plVar1;
                        }
                    }
                }
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < 0x24);
    }
    return 0;
}



undefined8 FUN_140578050(longlong **param_1,int param_2,int param_3)

{
    bool bVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong *plVar6;

    plVar6 = *param_1;
    do {
        bVar1 = false;
        if (plVar6 == (longlong *)0x0) {
            LAB_1405780b4:
            plVar6 = (longlong *)param_1[3][2];
            if (plVar6 != param_1[3]) {
                do {
                    lVar3 = FUN_1403d90d0();
                    if (lVar3 != 0) {
                        uVar5 = 0;
                        if (*(ulonglong *)(lVar3 + 0x5a0) != 0) {
                            do {
                                if (param_2 == *(int *)(*(longlong *)(lVar3 + 0x598) + uVar5 * 0x24)) {
                                    FUN_140579bf0((longlong *)(lVar3 + 0x598));
                                    bVar1 = true;
                                    break;
                                }
                                uVar5 = (ulonglong)((int)uVar5 + 1);
                            } while (uVar5 < *(ulonglong *)(lVar3 + 0x5a0));
                        }
                    }
                    plVar4 = (longlong *)plVar6[3];
                    if (plVar4 == (longlong *)0x0) {
                        plVar4 = (longlong *)plVar6[1];
                        if (plVar6 == (longlong *)plVar4[3]) {
                            do {
                                plVar6 = plVar4;
                                plVar4 = (longlong *)plVar6[1];
                            } while (plVar6 == (longlong *)plVar4[3]);
                        }
                        if ((longlong *)plVar6[3] != plVar4) {
                            plVar6 = plVar4;
                        }
                    }
                    else {
                        for (plVar2 = (longlong *)plVar4[2]; plVar6 = plVar4, plVar2 != (longlong *)0x0;
                             plVar2 = (longlong *)plVar2[2]) {
                            plVar4 = plVar2;
                        }
                    }
                } while (plVar6 != param_1[3]);
            }
            if (!bVar1) {
                plVar6 = param_1[1];
                while (plVar4 = plVar6, plVar4 != (longlong *)0x0) {
                    plVar6 = (longlong *)plVar4[4];
                    if (*(int *)(plVar4 + 5) == param_2) {
                        (**(code **)*plVar4)(plVar4,1);
                    }
                }
            }
            return 0;
        }
        if (*(int *)(plVar6 + 0x1b) == param_2) {
            if ((param_3 == 0) ||
                (lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6), *(int *)(lVar3 + 0x4c) == 0)) {
                (**(code **)(*plVar6 + 0x20))(plVar6);
            }
            else {
                (**(code **)(*plVar6 + 0x50))(plVar6);
            }
            bVar1 = true;
            goto LAB_1405780b4;
        }
        plVar6 = (longlong *)plVar6[4];
    } while( true );
}



undefined8 FUN_1405781d0(undefined8 param_1,uint *param_2)

{
    bool bVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    pplVar3 = DAT_140c65b78;
    uVar8 = 0;
    if (*param_2 != 0) {
        do {
            plVar6 = *pplVar3;
            bVar1 = false;
            if (plVar6 != (longlong *)0x0) {
                do {
                    if (*(int *)(plVar6 + 0x1b) == *(int *)(*(longlong *)(param_2 + 2) + uVar8 * 4)) {
                        (**(code **)(*plVar6 + 0x20))();
                        bVar1 = true;
                        break;
                    }
                    plVar6 = (longlong *)plVar6[4];
                } while (plVar6 != (longlong *)0x0);
            }
            plVar6 = (longlong *)pplVar3[3][2];
            if (plVar6 != pplVar3[3]) {
                do {
                    lVar4 = FUN_1403d90d0();
                    if (lVar4 != 0) {
                        uVar7 = 0;
                        if (*(ulonglong *)(lVar4 + 0x5a0) != 0) {
                            do {
                                if (*(int *)(*(longlong *)(param_2 + 2) + uVar8 * 4) ==
                                    *(int *)(*(longlong *)(lVar4 + 0x598) + uVar7 * 0x24)) {
                                    FUN_140579bf0((longlong *)(lVar4 + 0x598));
                                    bVar1 = true;
                                    break;
                                }
                                uVar7 = (ulonglong)((int)uVar7 + 1);
                            } while (uVar7 < *(ulonglong *)(lVar4 + 0x5a0));
                        }
                    }
                    plVar5 = (longlong *)plVar6[3];
                    if (plVar5 == (longlong *)0x0) {
                        plVar5 = (longlong *)plVar6[1];
                        if (plVar6 == (longlong *)plVar5[3]) {
                            do {
                                plVar6 = plVar5;
                                plVar5 = (longlong *)plVar6[1];
                            } while (plVar6 == (longlong *)plVar5[3]);
                        }
                        if ((longlong *)plVar6[3] != plVar5) {
                            plVar6 = plVar5;
                        }
                    }
                    else {
                        for (plVar2 = (longlong *)plVar5[2]; plVar6 = plVar5, plVar2 != (longlong *)0x0;
                             plVar2 = (longlong *)plVar2[2]) {
                            plVar5 = plVar2;
                        }
                    }
                } while (plVar6 != pplVar3[3]);
            }
            if (!bVar1) {
                plVar6 = pplVar3[1];
                while (plVar5 = plVar6, plVar5 != (longlong *)0x0) {
                    plVar6 = (longlong *)plVar5[4];
                    if (*(int *)(plVar5 + 5) == *(int *)(*(longlong *)(param_2 + 2) + uVar8 * 4)) {
                        (**(code **)*plVar5)();
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *param_2);
    }
    return 0;
}



undefined8 FUN_140578350(undefined8 param_1,int *param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong **pplVar4;
    int iVar5;
    longlong *local_res8;

    pplVar4 = DAT_140c65b78;
    local_res8 = *DAT_140c65b78;
    *DAT_140c65b78 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[3] = (longlong)&local_res8;
        while (plVar2 = local_res8, local_res8 = plVar2, plVar2 != (longlong *)0x0) {
            if ((longlong *)plVar2[3] != (longlong *)0x0) {
                *(longlong *)plVar2[3] = plVar2[4];
            }
            pplVar1 = (longlong **)(plVar2 + 4);
            if (plVar2[4] != 0) {
                *(longlong *)(plVar2[4] + 0x18) = plVar2[3];
            }
            *pplVar1 = (longlong *)0x0;
            plVar2[3] = (longlong)pplVar4;
            *pplVar1 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
            iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if (iVar5 == *param_2) {
                (**(code **)(*plVar2 + 0x20))(plVar2);
            }
        }
    }
    plVar2 = pplVar4[1];
    while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[4];
        if (*(int *)((longlong)plVar3 + 0x2c) == *param_2) {
            (**(code **)*plVar3)(plVar3,1);
        }
    }
    if (local_res8 != (longlong *)0x0) {
        FUN_1401a4a00(&local_res8);
    }
    return 0;
}



undefined4
FUN_140578460(undefined8 param_1,int param_2,int param_3,longlong param_4,uint param_5,
              ulonglong param_6,longlong **param_7)

{
    longlong **pplVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    char *pcVar5;
    int iVar6;
    longlong **pplVar7;
    undefined4 uVar8;
    ulonglong uVar9;

    iVar6 = param_3;
    uVar9 = param_6;
    FUN_1400035b0();
    if (((iVar6 == 0) || (lVar3 = FUN_1403d90d0(), lVar3 == 0)) ||
        (*(longlong *)(lVar3 + 0x16e8) != 0)) {
        uVar8 = *(undefined4 *)(param_4 + 0x28);
        uVar9 = param_6;
        FUN_1400035b0();
        DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
        if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
            DAT_140c8af30 = 1;
        }
        uVar2 = 0x80004005;
        pcVar5 = IMAGE_DOS_HEADER_140000000.e_magic +
                 (&switchD_14057861d::switchdataD_140578730)[param_2];
        switch(param_2) {
            case 0:
                uVar2 = FUN_1405765a0(pcVar5,param_4,param_6);
                break;
            case 1:
                uVar2 = FUN_140576670(pcVar5,param_4,param_6);
                break;
            case 2:
                uVar2 = FUN_1405767d0(pcVar5,param_3,param_4,param_6);
                break;
            case 3:
                uVar2 = FUN_140576950(pcVar5,param_4,param_6);
                break;
            case 4:
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (param_3 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                    uVar2 = FUN_140576aa0(DAT_140c65b78,param_4,param_6);
                }
                break;
            case 5:
                uVar2 = FUN_140576bf0(pcVar5,param_4,param_6);
                break;
            case 6:
                uVar2 = FUN_140576e50(pcVar5,param_4,param_6);
                break;
            case 7:
                uVar2 = FUN_140576f90(pcVar5,param_4,param_6);
                break;
            case 8:
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (param_3 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                    uVar2 = FUN_1405770f0(DAT_140c65b78,param_4,param_6);
                }
                break;
            case 9:
                uVar2 = FUN_140577250(pcVar5,&IMAGE_DOS_HEADER_140000000,param_4,param_6,uVar8,uVar9,param_7);
                break;
            case 0xc:
                uVar2 = FUN_140577510(pcVar5,param_4,param_6);
        }
        FUN_14018b900(param_4,0);
    }
    else {
        plVar4 = (longlong *)FUN_14018b280(0x40);
        if (plVar4 != (longlong *)0x0) {
            *plVar4 = param_4;
            *(uint *)(plVar4 + 1) = param_5;
            *(int *)((longlong)plVar4 + 0xc) = param_2;
            plVar4[2] = 0;
            plVar4[3] = 0;
            plVar4[4] = 0;
            plVar4[5] = 0;
            plVar4[6] = 0;
            plVar4[7] = 0;
        }
        pplVar7 = (longlong **)(lVar3 + 0x5b8);
        if (plVar4[2] == 0) {
            plVar4[2] = (longlong)pplVar7;
            pplVar1 = (longlong **)(plVar4 + 3);
            *pplVar1 = *pplVar7;
            *pplVar7 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[2] = (longlong)pplVar1;
            }
        }
        if ((param_7 != (longlong **)0x0) && (plVar4[6] == 0)) {
            plVar4[6] = (longlong)param_7;
            pplVar7 = (longlong **)(plVar4 + 7);
            *pplVar7 = *param_7;
            *param_7 = plVar4;
            if (*pplVar7 != (longlong *)0x0) {
                (*pplVar7)[6] = (longlong)pplVar7;
            }
        }
        FUN_1400035b0(0x4b,3,0,param_3,*(undefined4 *)(param_4 + 0x28),
                      uVar9 & 0xffffffff00000000 | (ulonglong)param_5,param_6,param_7);
        uVar2 = 0x8000000a;
    }
    return uVar2;
}



void FUN_140578770(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    undefined local_18 [16];

    local_18 = ZEXT816(0);
    FUN_1405787d0(0,0,param_2,param_4,param_3,param_4,param_5,0,param_6,local_18,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405787d0(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined4 *param_7,undefined4 param_8,
                   undefined8 param_9,undefined4 *param_10,undefined4 param_11)

{
    float fVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    char *pcVar7;
    ulonglong uVar8;
    undefined auStack536 [32];
    undefined8 local_1f8;
    undefined4 local_1f0;
    undefined4 *local_1e8;
    undefined4 local_1d8;
    undefined4 local_1d4;
    undefined4 local_1b8;
    undefined4 local_188;
    undefined4 local_150;
    undefined8 local_148;
    undefined8 local_140;
    uint local_138;
    float local_134;
    float local_130;
    float local_12c;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    uint uStack284;
    undefined4 local_118;
    uint local_110;
    uint local_108;
    undefined4 local_104;
    undefined4 local_100;
    undefined4 local_fc;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    uint local_78;
    int local_74;
    undefined4 local_54;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    local_1e8 = param_10;
    uVar5 = FUN_1403d90d0(DAT_140c65898,param_3);
    uVar8 = 0;
    if (*(int *)(param_5 + 0x94) != 0) {
        local_1f0 = 0;
        local_1f8 = 0;
        iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,uVar5,*(int *)(param_5 + 0x94),0);
        if (iVar3 == 0) goto switchD_140578886_caseD_a;
    }
    pcVar7 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_140578886::switchdataD_140578ef0)[*(uint *)(param_5 + 4)];
    switch(*(uint *)(param_5 + 4)) {
        case 0:
            lVar6 = FUN_1403d90d0(DAT_140c65898,param_3);
            if (lVar6 != 0) {
                FUN_140579f60(&local_1d8,param_5,param_6);
                local_134 = *(float *)(param_5 + 0x28);
                local_130 = *(float *)(param_5 + 0x2c);
                local_140 = (ulonglong)param_3;
                local_12c = *(float *)(param_5 + 0x30);
                uVar4 = *(uint *)(param_5 + 0x58);
                uStack284 = ~(uVar4 >> 0xc) & 1;
                if (((*(int *)(lVar6 + 0xd58) != 0) && ((uVar4 >> 0xb & 1) == 0)) ||
                    (local_128 = 5, (uVar4 >> 10 & 1) != 0)) {
                    local_128 = 4;
                }
                uStack292 = *(undefined4 *)(param_5 + 0x24);
                local_1b8 = param_2;
                uStack288 = FUN_1401ae6a0(0,0xffff);
                local_188 = param_11;
                local_148 = param_9;
                local_150 = param_8;
                FUN_1405765a0();
            }
            break;
        case 1:
            FUN_1407e4830(&local_1d8,0,0xa0);
            FUN_140579f60(&local_1d8,param_5,param_6);
            local_188 = param_11;
            local_140 = CONCAT44(local_140._4_4_,param_3);
            local_148 = param_9;
            local_150 = param_8;
            local_1b8 = param_2;
            FUN_140576670();
            break;
        case 2:
            iVar3 = FUN_140396850(pcVar7,param_3);
            if ((iVar3 != 0) || (1e-05 < *(float *)(param_5 + 0x54))) {
                FUN_1407e4830(&local_1d8,0,0xb8);
                FUN_140579f60(&local_1d8,param_5,param_6);
                local_138 = *(uint *)(param_5 + 0x48);
                local_130 = *(float *)(param_5 + 0x50);
                local_140 = CONCAT44(*(undefined4 *)(param_5 + 0x44),*(undefined4 *)(param_5 + 0x28));
                local_128 = *(undefined4 *)(param_5 + 0x24);
                local_12c = *(float *)(param_5 + 0x54);
                local_148 = param_9;
                local_134 = (float)(longlong)*(float *)(param_5 + 0x4c);
                local_188 = param_11;
                local_150 = param_8;
                local_1b8 = param_2;
                FUN_1405767d0();
            }
            break;
        case 3:
            iVar3 = FUN_140396850(pcVar7,param_3);
            if (iVar3 != 0) {
                fVar1 = *(float *)(param_5 + 0x44);
                FUN_140579f60(&local_1d8,param_5,param_6);
                local_140 = (longlong)fVar1 & 0xffffffff;
                if (*(float *)(param_5 + 0x48) != 0.0) {
                    local_140 = local_140 | (ulonglong)(uint)(1000.0 / *(float *)(param_5 + 0x48)) << 0x20;
                }
                local_138 = (uint)*(float *)(param_5 + 0x4c);
                local_148 = param_9;
                local_134 = (float)(int)*(float *)(param_5 + 0x50);
                local_188 = param_11;
                local_150 = param_8;
                local_1b8 = param_2;
                FUN_140576950();
            }
            break;
        case 4:
            iVar3 = FUN_140396850(pcVar7,param_3);
            if (iVar3 != 0) {
                fVar1 = *(float *)(param_5 + 0x44);
                FUN_140579f60(&local_1d8,param_5,param_6);
                local_140 = local_140 & 0xffffffff00000000 | (longlong)fVar1 & 0xffffffffU;
                local_188 = param_11;
                local_150 = param_8;
                local_148 = param_9;
                local_1b8 = param_2;
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (param_3 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                    FUN_140576aa0(DAT_140c65b78,&local_1d8,param_9);
                }
            }
            break;
        case 5:
            lVar6 = FUN_1403d90d0(DAT_140c65898,param_3);
            if (lVar6 != 0) {
                FUN_1407e4830(&local_1d8,0,0x100);
                FUN_140579f60(&local_1d8,param_5,param_6);
                uVar2 = *(ulonglong *)(param_5 + 0x18);
                local_110 = *(uint *)(param_5 + 0x58) & 1;
                local_104 = *(undefined4 *)(param_5 + 0x10);
                local_100 = *(undefined4 *)(param_5 + 0x14);
                if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                    uVar8 = DAT_140c3fe68 + uVar2;
                }
                local_fc = *(undefined4 *)(param_5 + 0x20);
                local_138 = *(uint *)(param_5 + 0x34);
                local_118 = *(undefined4 *)(param_5 + 0x28);
                local_130 = DAT_140c3b438 * 0.005555556;
                uStack220 = *(undefined4 *)(param_5 + 0x98);
                local_12c = local_130 * *(float *)(param_5 + 0x40);
                local_134 = local_130 * *(float *)(param_5 + 0x38);
                local_130 = local_130 * *(float *)(param_5 + 0x3c);
                local_128 = *param_10;
                uStack292 = param_10[1];
                uStack288 = param_10[2];
                uStack284 = param_10[3];
                local_188 = param_11;
                local_148 = param_9;
                local_150 = param_8;
                local_1b8 = param_2;
                local_140 = uVar8;
                local_108 = param_3;
                FUN_140576bf0(uVar2,&local_1d8,param_9);
            }
            break;
        case 6:
            if (param_7 != (undefined4 *)0x0) {
                FUN_1407e4830(&local_1d8,0,400);
                FUN_140579f60(&local_1d8,param_5,param_6);
                local_110 = *(uint *)(param_5 + 0x58) & 1;
                if ((*(int *)(param_5 + 0x20) == 0) || (param_3 == 0)) {
                    local_108 = 0;
                }
                else {
                    local_108 = 1;
                    local_78 = param_3;
                    local_74 = *(int *)(param_5 + 0x20);
                }
                local_f8 = *param_7;
                uStack244 = param_7[1];
                uStack240 = param_7[2];
                uStack236 = param_7[3];
                local_e8 = param_7[4];
                uStack228 = param_7[5];
                uStack224 = param_7[6];
                uStack220 = param_7[7];
                uVar2 = *(ulonglong *)(param_5 + 0x18);
                local_d8 = param_7[8];
                uStack212 = param_7[9];
                uStack208 = param_7[10];
                uStack204 = param_7[0xb];
                local_c8 = param_7[0xc];
                uStack196 = param_7[0xd];
                uStack192 = param_7[0xe];
                uStack188 = param_7[0xf];
                if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                    uVar8 = DAT_140c3fe68 + uVar2;
                }
                local_118 = *(undefined4 *)(param_5 + 0x28);
                local_138 = *(uint *)(param_5 + 0x34);
                local_54 = *(undefined4 *)(param_5 + 0x98);
                local_130 = DAT_140c3b438 * 0.005555556;
                local_12c = local_130 * *(float *)(param_5 + 0x40);
                local_134 = local_130 * *(float *)(param_5 + 0x38);
                local_130 = local_130 * *(float *)(param_5 + 0x3c);
                local_148 = param_9;
                local_128 = *local_1e8;
                uStack292 = local_1e8[1];
                uStack288 = local_1e8[2];
                uStack284 = local_1e8[3];
                local_188 = param_11;
                local_150 = param_8;
                local_1b8 = param_2;
                local_140 = uVar8;
                FUN_140576e50(uVar2,&local_1d8,param_9);
            }
            break;
        case 7:
            FUN_140579f60(&local_1d8,param_5,param_6);
            local_1d8 = *(undefined4 *)(param_5 + 8);
            local_1d4 = *(undefined4 *)(param_5 + 0xc);
            local_140 = local_140 & 0xffffffff00000000 | (ulonglong)param_3;
            local_188 = param_11;
            local_150 = param_8;
            local_148 = param_9;
            local_1b8 = param_2;
            FUN_140576f90();
            break;
        case 8:
            if (param_6 == 0) {
                uVar4 = *(uint *)(param_5 + 0x90);
            }
            else {
                uVar4 = *(uint *)(param_6 + 0x90);
            }
            local_140 = local_140 & 0xffffffff00000000 | (ulonglong)uVar4;
            FUN_140579f60(&local_1d8,param_5,param_6);
            local_150 = param_8;
            local_148 = param_9;
            local_1b8 = param_2;
            if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                (param_3 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                FUN_1405770f0(DAT_140c65b78,&local_1d8,param_9);
            }
            break;
        case 9:
            FUN_140579f60(&local_1d8,param_5,param_6);
            local_140 = (longlong)*(float *)(param_5 + 0x44) & 0xffffffffU | (ulonglong)param_3 << 0x20;
            local_134 = (float)(longlong)*(float *)(param_5 + 0x48);
            local_148 = param_9;
            local_130 = (float)(longlong)*(float *)(param_5 + 0x4c);
            local_188 = param_11;
            local_150 = param_8;
            local_1b8 = param_2;
            local_138 = param_3;
            FUN_140577250();
            break;
        case 0xc:
            FUN_140579f60(&local_1d8,param_5,param_6);
            local_188 = param_11;
            local_140 = local_140 & 0xffffffff00000000 | (ulonglong)param_3;
            local_148 = param_9;
            local_150 = param_8;
            FUN_140577510();
    }
    switchD_140578886_caseD_a:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack536);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140578f30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    uint uVar9;
    longlong *plVar10;
    longlong local_res20;
    ulonglong uStack216;
    undefined8 uStack208;
    undefined8 uStack200;
    undefined8 uStack192;
    undefined4 uStack184;
    undefined8 uStack176;
    undefined8 uStack168;
    undefined auStack152 [16];
    undefined4 uStack136;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 uStack120;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 uStack104;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 uStack88;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;

    lVar5 = FUN_14023d840(param_2);
    if ((lVar5 != 0) && (lVar5 = FUN_1403d90d0(DAT_140c65898), lVar5 != 0)) {
        local_res20 = 0x24;
        do {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c94 == 0) && (iVar4 = FUN_14023d1a0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c64fe8 + 0x18))();
                    goto LAB_140578ffd;
                }
            }
            else {
                lVar6 = (*DAT_140c63840)(&PTR_u_Spell4Visual_140a6d658);
                LAB_140578ffd:
                if ((lVar6 != 0) &&
                    (puVar7 = (undefined4 *)FUN_140248f00(*(undefined4 *)(lVar6 + 0x10)),
                            puVar7 != (undefined4 *)0x0)) {
                    uStack176 = FUN_140248f00(*(undefined4 *)(lVar6 + 0x14));
                    DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
                    uStack168 = 0;
                    uStack192 = 0;
                    uStack184 = 0;
                    if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
                        DAT_140c8af30 = 1;
                    }
                    uVar2 = *(undefined4 *)(lVar6 + 0x14);
                    uVar9 = DAT_140c8af30 | 0x80000000;
                    uVar3 = *puVar7;
                    uStack216 = CONCAT44(param_3,DAT_140c8af30) | 0x80000000;
                    uStack200 = 0;
                    uStack208 = CONCAT44(uVar2,uVar3);
                    if (*(longlong *)(lVar5 + 0x16e8) == 0) {
                        FUN_140579ac0(lVar5 + 0x598,&uStack216);
                        FUN_1400293c0(param_1 + 0x10);
                    }
                    else if ((puVar7[0x25] == 0) ||
                             (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar4 != 0)) {
                        uStack88 = *(undefined4 *)(lVar5 + 0x11e0);
                        uStack120 = _DAT_140c783a0;
                        uStack116 = uRam0000000140c783a4;
                        uStack112 = uRam0000000140c783a8;
                        uStack108 = uRam0000000140c783ac;
                        uStack136 = _DAT_140c78390;
                        uStack132 = uRam0000000140c78394;
                        uStack128 = uRam0000000140c78398;
                        uStack124 = uRam0000000140c7839c;
                        uStack76 = uRam0000000140c783cc;
                        uStack84 = *(undefined4 *)(lVar5 + 0x11e4);
                        uStack80 = *(undefined4 *)(lVar5 + 0x11e8);
                        uStack104 = _DAT_140c783b0;
                        uStack100 = uRam0000000140c783b4;
                        uStack96 = uRam0000000140c783b8;
                        uStack92 = uRam0000000140c783bc;
                        auStack152 = ZEXT1216(*(undefined (*) [12])(lVar6 + 0x6c));
                        FUN_1405787d0();
                    }
                    else {
                        puVar8 = (undefined8 *)FUN_14018b280(0x58);
                        if (puVar8 == (undefined8 *)0x0) {
                            puVar8 = (undefined8 *)0x0;
                        }
                        else {
                            *puVar8 = &PTR_FUN_140b6cc98;
                            puVar8[1] = 0;
                            puVar8[2] = 0;
                            puVar8[3] = 0;
                            puVar8[4] = 0;
                            *(undefined4 *)((longlong)puVar8 + 0x2c) = param_3;
                            *(uint *)(puVar8 + 5) = uVar9;
                            *(undefined4 *)(puVar8 + 6) = uVar3;
                            *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
                            *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
                            *(int *)(puVar8 + 7) = (int)uStack168;
                            *(undefined4 *)(puVar8 + 8) = (undefined4)uStack192;
                            *(undefined4 *)((longlong)puVar8 + 0x44) = uStack192._4_4_;
                            *(undefined4 *)(puVar8 + 9) = uStack184;
                            *(undefined4 *)((longlong)puVar8 + 0x4c) = 0;
                            puVar8[10] = 0;
                        }
                        plVar10 = (longlong *)(param_1 + 8);
                        if (puVar8[3] == 0) {
                            puVar8[3] = plVar10;
                            plVar1 = puVar8 + 4;
                            *plVar1 = *plVar10;
                            *plVar10 = (longlong)puVar8;
                            if (*plVar1 != 0) {
                                *(longlong **)(*plVar1 + 0x18) = plVar1;
                            }
                        }
                    }
                }
            }
            local_res20 = local_res20 + -1;
        } while (local_res20 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14057903d(void)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    int iVar12;
    undefined8 uVar13;
    ulonglong in_RAX;
    undefined8 *puVar14;
    uint unaff_EBX;
    longlong unaff_RBP;
    undefined4 *unaff_RSI;
    longlong unaff_RDI;
    longlong *plVar15;
    longlong unaff_R14;
    undefined4 unaff_R15D;
    undefined in_ZF;
    ulonglong uStack0000000000000060;
    undefined8 uStack0000000000000068;
    ulonglong uStack0000000000000070;
    undefined4 uStack0000000000000078;
    ulonglong uStack0000000000000078_00;
    undefined4 uStack000000000000007c;

    do {
        DAT_140c8af30 = unaff_EBX;
        *(int *)(unaff_RBP + -0x80) = (int)in_RAX;
        if (((bool)in_ZF) || (unaff_EBX == 0x3fffffff)) {
            unaff_EBX = 1;
            DAT_140c8af30 = 1;
        }
        uVar2 = *(undefined4 *)(unaff_RDI + 0x14);
        uVar3 = *unaff_RSI;
        uStack0000000000000060 = CONCAT44(unaff_R15D,unaff_EBX) | 0x80000000;
        uStack0000000000000070 = in_RAX & 0xffffffff;
        uStack0000000000000068 = CONCAT44(uVar2,uVar3);
        uStack0000000000000078_00 = in_RAX;
        if (*(ulonglong *)(unaff_R14 + 0x16e8) == in_RAX) {
            FUN_140579ac0(unaff_R14 + 0x598,&stack0x00000060);
            FUN_1400293c0(*(longlong *)(unaff_RBP + 0x40) + 0x10);
            LAB_1405790c2:
            unaff_R15D = *(undefined4 *)(unaff_RBP + 0x50);
        }
        else if ((unaff_RSI[0x25] == 0) ||
                 (iVar12 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar12 != 0)) {
            uVar9 = uRam0000000140c783ac;
            uVar8 = uRam0000000140c783a8;
            uVar7 = uRam0000000140c783a4;
            uVar6 = uRam0000000140c7839c;
            uVar5 = uRam0000000140c78398;
            uVar4 = uRam0000000140c78394;
            uVar3 = _DAT_140c78390;
            uVar2 = *(undefined4 *)(unaff_R14 + 0x11e0);
            uVar13 = *(undefined8 *)(unaff_RDI + 0x6c);
            unaff_R15D = *(undefined4 *)(unaff_RBP + 0x50);
            *(undefined4 *)(unaff_RBP + -0x40) = _DAT_140c783a0;
            *(undefined4 *)(unaff_RBP + -0x3c) = uVar7;
            *(undefined4 *)(unaff_RBP + -0x38) = uVar8;
            *(undefined4 *)(unaff_RBP + -0x34) = uVar9;
            uVar11 = uRam0000000140c783cc;
            uVar10 = uRam0000000140c783c8;
            uVar9 = uRam0000000140c783c4;
            uVar8 = _DAT_140c783c0;
            *(undefined4 *)(&DAT_ffffffffffffffb0 + unaff_RBP) = uVar3;
            *(undefined4 *)(unaff_RBP + -0x4c) = uVar4;
            *(undefined4 *)(unaff_RBP + -0x48) = uVar5;
            *(undefined4 *)(unaff_RBP + -0x44) = uVar6;
            uVar7 = uRam0000000140c783bc;
            uVar6 = uRam0000000140c783b8;
            uVar5 = uRam0000000140c783b4;
            uVar4 = _DAT_140c783b0;
            *(undefined4 *)(unaff_RBP + -0x20) = uVar8;
            *(undefined4 *)(unaff_RBP + -0x1c) = uVar9;
            *(undefined4 *)(&DAT_ffffffffffffffe8 + unaff_RBP) = uVar10;
            *(undefined4 *)(unaff_RBP + -0x14) = uVar11;
            *(undefined4 *)(unaff_RBP + -0x20) = uVar2;
            *(undefined4 *)(unaff_RBP + -0x1c) = *(undefined4 *)(unaff_R14 + 0x11e4);
            uVar3 = *(undefined4 *)(unaff_R14 + 0x11e8);
            *(undefined4 *)(&DAT_ffffffffffffffd0 + unaff_RBP) = uVar4;
            *(undefined4 *)(unaff_RBP + -0x2c) = uVar5;
            *(undefined4 *)(unaff_RBP + -0x28) = uVar6;
            *(undefined4 *)(unaff_RBP + -0x24) = uVar7;
            uVar2 = *(undefined4 *)(unaff_RDI + 0x74);
            *(undefined4 *)(&DAT_ffffffffffffffe8 + unaff_RBP) = uVar3;
            *(undefined (*) [16])(&DAT_ffffffffffffffa0 + unaff_RBP) = ZEXT1216(CONCAT48(uVar2,uVar13));
            FUN_1405787d0();
        }
        else {
            puVar14 = (undefined8 *)FUN_14018b280(0x58);
            if (puVar14 == (undefined8 *)0x0) {
                puVar14 = (undefined8 *)0x0;
            }
            else {
                *puVar14 = &PTR_FUN_140b6cc98;
                uVar4 = *(undefined4 *)(unaff_RBP + 0x50);
                puVar14[1] = 0;
                puVar14[2] = 0;
                puVar14[3] = 0;
                puVar14[4] = 0;
                *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
                uVar13 = *(undefined8 *)(&DAT_ffffffffffffff90 + unaff_RBP);
                *(uint *)(puVar14 + 5) = unaff_EBX | 0x80000000;
                *(undefined4 *)(puVar14 + 6) = uVar3;
                *(undefined4 *)((longlong)puVar14 + 0x34) = uVar2;
                *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
                *(int *)(puVar14 + 7) = (int)uVar13;
                *(undefined4 *)(puVar14 + 8) = uStack0000000000000078;
                uVar2 = *(undefined4 *)(unaff_RBP + -0x80);
                *(undefined4 *)((longlong)puVar14 + 0x44) = uStack000000000000007c;
                *(undefined4 *)(puVar14 + 9) = uVar2;
                *(undefined4 *)((longlong)puVar14 + 0x4c) = 0;
                puVar14[10] = 0;
            }
            plVar15 = (longlong *)(*(longlong *)(unaff_RBP + 0x40) + 8);
            if (puVar14[3] != 0) goto LAB_1405790c2;
            unaff_R15D = *(undefined4 *)(unaff_RBP + 0x50);
            puVar14[3] = plVar15;
            plVar1 = puVar14 + 4;
            *plVar1 = *plVar15;
            *plVar15 = (longlong)puVar14;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
        }
        LAB_1405790c6:
        do {
            plVar15 = (longlong *)(unaff_RBP + 0x58);
            *plVar15 = *plVar15 + -1;
            if (*plVar15 == 0) {
                return;
            }
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c94 != 0) || (iVar12 = FUN_14023d1a0(), iVar12 < 0)) goto LAB_1405790c6;
                unaff_RDI = (**(code **)(*DAT_140c64fe8 + 0x18))();
            }
            else {
                unaff_RDI = (*DAT_140c63840)(&PTR_u_Spell4Visual_140a6d658);
            }
        } while ((unaff_RDI == 0) ||
                 (unaff_RSI = (undefined4 *)FUN_140248f00(*(undefined4 *)(unaff_RDI + 0x10)),
                         unaff_RSI == (undefined4 *)0x0));
        uVar13 = FUN_140248f00(*(undefined4 *)(unaff_RDI + 0x14));
        *(undefined8 *)(unaff_RBP + -0x78) = uVar13;
        in_RAX = 0;
        unaff_EBX = DAT_140c8af30 + 1 & 0x3fffffff;
        in_ZF = unaff_EBX == 0;
        *(undefined8 *)(&DAT_ffffffffffffff90 + unaff_RBP) = 0;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405792a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    float fVar11;
    undefined auStack424 [32];
    undefined8 local_188;
    undefined4 local_180;
    undefined8 local_178;
    undefined8 local_170;
    undefined local_168 [32];
    uint local_148;
    undefined4 local_118;
    longlong local_d0;
    undefined4 local_c8;
    float local_c4;
    float local_c0;
    float local_bc;
    undefined local_b8 [16];
    undefined4 local_a8;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_6c;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    local_170 = param_6;
    local_178 = DAT_140c65b78;
    lVar3 = FUN_14023d840(param_2);
    if (lVar3 != 0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        fVar11 = 0.005555556;
        lVar6 = 0x24;
        do {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c94 == 0) && (iVar2 = FUN_14023d1a0(), -1 < iVar2)) {
                    lVar4 = (**(code **)(*DAT_140c64fe8 + 0x18))();
                    goto LAB_14057939b;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)(&PTR_u_Spell4Visual_140a6d658);
                LAB_14057939b:
                if (lVar4 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64c04 != 0) || (iVar2 = FUN_140248ca0(), iVar2 < 0)) goto LAB_14057959e;
                        lVar5 = (**(code **)(*DAT_140c63b40 + 0x18))();
                    }
                    else {
                        lVar5 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8);
                    }
                    if (lVar5 != 0) {
                        if (*(int *)(lVar5 + 0x94) == 0) {
                            LAB_14057943a:
                            if ((*(int *)(lVar5 + 4) == 5) &&
                                (((*(byte *)(lVar5 + 0x58) & 4) != 0 || (*(int *)(lVar5 + 0xc) == -1)))) {
                                uVar9 = *(undefined4 *)(lVar4 + 0x74);
                                uVar8 = *(undefined4 *)(lVar4 + 0x70);
                                uVar7 = *(undefined4 *)(lVar4 + 0x6c);
                                local_188 = CONCAT44(local_188._4_4_,1);
                                uVar10 = 0;
                                FUN_140579ed0(local_168,param_3,lVar5,0);
                                DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
                                if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
                                    DAT_140c8af30 = 1;
                                }
                                uVar1 = *(ulonglong *)(lVar5 + 0x18);
                                local_148 = DAT_140c8af30 | 0x80000000;
                                local_94 = *(undefined4 *)(lVar5 + 0x10);
                                local_90 = *(undefined4 *)(lVar5 + 0x14);
                                if (uVar1 == 0) {
                                    local_d0 = 0;
                                }
                                else if (DAT_140c3fe70 < uVar1) {
                                    local_d0 = 0;
                                }
                                else {
                                    local_d0 = DAT_140c3fe68 + uVar1;
                                }
                                local_c8 = *(undefined4 *)(lVar5 + 0x34);
                                local_8c = *(undefined4 *)(lVar5 + 0x20);
                                local_b8 = CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7)));
                                local_c0 = DAT_140c3b438 * fVar11;
                                local_a8 = *(undefined4 *)(lVar5 + 0x28);
                                local_c4 = local_c0 * *(float *)(lVar5 + 0x38);
                                local_bc = local_c0 * *(float *)(lVar5 + 0x40);
                                local_6c = *(undefined4 *)(lVar5 + 0x98);
                                local_c0 = local_c0 * *(float *)(lVar5 + 0x3c);
                                local_188 = local_170;
                                local_118 = 0;
                                local_98 = param_3;
                                FUN_140576d20(local_178);
                            }
                        }
                        else if (lVar3 != 0) {
                            local_180 = 0;
                            local_188 = 0;
                            iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))();
                            if (iVar2 != 0) goto LAB_14057943a;
                        }
                    }
                }
            }
            LAB_14057959e:
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack424);
    return;
}



void FUN_140579600(ulonglong param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    longlong **pplVar8;
    longlong **pplVar9;
    undefined8 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    ulonglong local_res8;
    undefined local_48 [16];

    lVar5 = DAT_140c65b78;
    pplVar9 = (longlong **)0x0;
    pplVar8 = pplVar9;
    local_res8 = param_1;
    if (*(longlong *)(param_2 + 0x5a0) != 0) {
        do {
            FUN_140577660(lVar5);
            pplVar8 = (longlong **)((longlong)pplVar8 + 1);
        } while (pplVar8 < *(longlong ***)(param_2 + 0x5a0));
    }
    uVar1 = *(undefined4 *)(param_2 + 8);
    if (*(longlong *)(param_2 + 0x5b0) != 0) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        pplVar8 = pplVar9;
        do {
            local_48 = CONCAT412(uVar14,CONCAT48(uVar13,CONCAT44(uVar12,uVar11)));
            FUN_1405787d0(local_48,0,uVar1);
            pplVar8 = (longlong **)((longlong)pplVar8 + 1);
        } while (pplVar8 < *(longlong ***)(param_2 + 0x5b0));
    }
    puVar3 = *(undefined8 **)(param_2 + 0x5b8);
    while (puVar3 != (undefined8 *)0x0) {
        if ((undefined8 *)puVar3[2] != (undefined8 *)0x0) {
            *(undefined8 *)puVar3[2] = puVar3[3];
        }
        if (puVar3[3] != 0) {
            *(undefined8 *)(puVar3[3] + 0x10) = puVar3[2];
        }
        puVar3[2] = 0;
        puVar3[3] = 0;
        if ((undefined8 *)puVar3[6] != (undefined8 *)0x0) {
            *(undefined8 *)puVar3[6] = puVar3[7];
        }
        if (puVar3[7] != 0) {
            *(undefined8 *)(puVar3[7] + 0x30) = puVar3[6];
        }
        puVar3[6] = 0;
        puVar3[7] = 0;
        lVar7 = FUN_140561c30(DAT_140c65b70);
        pplVar8 = pplVar9;
        if (lVar7 != 0) {
            pplVar8 = (longlong **)(lVar7 + 0x218);
        }
        iVar2 = *(int *)((longlong)puVar3 + 0xc);
        iVar6 = FUN_140578460();
        if (((-1 < iVar6) && (lVar7 != 0)) && (iVar2 - 5U < 2)) {
            plVar4 = *pplVar8;
            uVar10 = FUN_1403f9c60();
            (**(code **)(*plVar4 + 0x58))(uVar10,*(undefined4 *)(lVar7 + 0x1a4),plVar4);
        }
        *puVar3 = 0;
        FUN_140453f90(puVar3);
        FUN_14018b900(puVar3);
        puVar3 = *(undefined8 **)(param_2 + 0x5b8);
    }
    if ((*(longlong *)(param_2 + 0x18) != 0) &&
        (iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x168), iVar2 != 0)) {
        FUN_140578f30(lVar5,iVar2,uVar1);
    }
    *(undefined8 *)(param_2 + 0x5a0) = 0;
    *(undefined8 *)(param_2 + 0x5b0) = 0;
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_2 + 8);
    FUN_1400ee810(lVar5 + 0x10,&local_res8);
    return;
}



void FUN_140579860(undefined8 param_1,int param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong **pplVar4;
    int iVar5;
    longlong lVar6;
    longlong *local_res8;

    pplVar4 = DAT_140c65b78;
    local_res8 = *DAT_140c65b78;
    *DAT_140c65b78 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[3] = (longlong)&local_res8;
        while (plVar2 = local_res8, local_res8 = plVar2, plVar2 != (longlong *)0x0) {
            if ((longlong *)plVar2[3] != (longlong *)0x0) {
                *(longlong *)plVar2[3] = plVar2[4];
            }
            pplVar1 = (longlong **)(plVar2 + 4);
            if (plVar2[4] != 0) {
                *(longlong *)(plVar2[4] + 0x18) = plVar2[3];
            }
            *pplVar1 = (longlong *)0x0;
            plVar2[3] = (longlong)pplVar4;
            *pplVar1 = *pplVar4;
            *pplVar4 = plVar2;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
            iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if ((iVar5 == param_2) &&
                (lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2), *(int *)(lVar6 + 0x48) == 0)) {
                (**(code **)(*plVar2 + 0x50))(plVar2,0);
            }
        }
    }
    plVar2 = pplVar4[1];
    while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[4];
        if (*(int *)((longlong)plVar3 + 0x2c) == param_2) {
            (**(code **)*plVar3)(plVar3,1);
        }
    }
    if (local_res8 != (longlong *)0x0) {
        FUN_1401a4a00(&local_res8);
    }
    return;
}



void FUN_140579980(undefined8 param_1,int param_2)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    int iVar4;
    longlong *local_res8;

    pplVar3 = DAT_140c65b78;
    local_res8 = *DAT_140c65b78;
    *DAT_140c65b78 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[3] = (longlong)&local_res8;
        while (plVar2 = local_res8, plVar2 != (longlong *)0x0) {
            if ((longlong *)plVar2[3] != (longlong *)0x0) {
                *(longlong *)plVar2[3] = plVar2[4];
            }
            pplVar1 = (longlong **)(plVar2 + 4);
            if (plVar2[4] != 0) {
                *(longlong *)(plVar2[4] + 0x18) = plVar2[3];
            }
            *pplVar1 = (longlong *)0x0;
            plVar2[3] = (longlong)pplVar3;
            *pplVar1 = *pplVar3;
            *pplVar3 = plVar2;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[3] = (longlong)pplVar1;
            }
            local_res8 = plVar2;
            iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
            if (iVar4 == param_2) {
                (**(code **)(*plVar2 + 0x30))(plVar2);
            }
        }
    }
    return;
}



void FUN_140579a40(longlong *param_1,longlong param_2,longlong *param_3)

{
    longlong *plVar1;

    if (*(longlong *)(param_2 + 0x18) == 0) {
        *(longlong **)(param_2 + 0x18) = param_1;
        plVar1 = (longlong *)(param_2 + 0x20);
        *plVar1 = *param_1;
        *param_1 = param_2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x18) = plVar1;
        }
    }
    if ((param_3 != (longlong *)0x0) && (*(longlong *)(param_2 + 8) == 0)) {
        *(longlong **)(param_2 + 8) = param_3;
        plVar1 = (longlong *)(param_2 + 0x10);
        *plVar1 = *param_3;
        *param_3 = param_2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 8) = plVar1;
        }
    }
    return;
}



uint FUN_140579a90(void)

{
    DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
    if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
        DAT_140c8af30 = 1;
    }
    return DAT_140c8af30 | 0x80000000;
}



longlong FUN_140579ac0(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1);
    puVar5 = (undefined4 *)(lVar3 + lVar1 * 0x24);
    if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *param_2;
        puVar5[1] = param_2[1];
        puVar5[2] = param_2[2];
        puVar5[3] = param_2[3];
        puVar5[4] = param_2[4];
        puVar5[5] = param_2[5];
        puVar5[6] = param_2[6];
        puVar5[7] = param_2[7];
        puVar5[8] = param_2[8];
    }
    if (*param_1 != lVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar5 = (undefined4 *)(lVar3 + 0x20);
            do {
                if (puVar5 + -8 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)((longlong)puVar5 + *param_1 + (-0x20 - lVar3));
                    puVar5[-8] = *puVar4;
                    puVar5[-7] = puVar4[1];
                    puVar5[-6] = puVar4[2];
                    puVar5[-5] = puVar4[3];
                    puVar5[-4] = puVar4[4];
                    puVar5[-3] = puVar4[5];
                    puVar5[-2] = puVar4[6];
                    puVar5[-1] = puVar4[7];
                    *puVar5 = puVar4[8];
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 9;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}

