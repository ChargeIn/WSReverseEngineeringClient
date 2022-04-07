//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140579bf0(longlong *param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar2 = param_1[1];
    uVar8 = param_2 + 1;
    uVar1 = uVar2 - 1;
    if (uVar8 < uVar2) {
        lVar5 = uVar8 * 0x24;
        do {
            lVar7 = *param_1;
            puVar6 = (undefined4 *)(lVar7 + -0x24 + lVar5);
            if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = *(undefined4 *)(lVar5 + lVar7);
                puVar6[1] = *(undefined4 *)(lVar5 + 4 + lVar7);
                puVar6[2] = *(undefined4 *)(lVar5 + 8 + lVar7);
                puVar6[3] = *(undefined4 *)(lVar5 + 0xc + lVar7);
                puVar6[4] = *(undefined4 *)(lVar5 + 0x10 + lVar7);
                puVar6[5] = *(undefined4 *)(lVar5 + 0x14 + lVar7);
                puVar6[6] = *(undefined4 *)(lVar5 + 0x18 + lVar7);
                puVar6[7] = *(undefined4 *)(lVar5 + 0x1c + lVar7);
                puVar6[8] = *(undefined4 *)(lVar5 + 0x20 + lVar7);
            }
            uVar8 = uVar8 + 1;
            lVar5 = lVar5 + 0x24;
        } while (uVar8 < (ulonglong)param_1[1]);
    }
    lVar5 = FUN_14018db00(*param_1,uVar1,0x24);
    if (*param_1 != lVar5) {
        uVar8 = 0;
        if (3 < (longlong)uVar1) {
            lVar7 = -lVar5;
            lVar9 = (uVar2 - 5 >> 2) + 1;
            uVar8 = lVar9 * 4;
            puVar6 = (undefined4 *)(lVar5 + 0x44);
            do {
                if (puVar6 + -0x11 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)((longlong)puVar6 + *param_1 + lVar7 + -0x44);
                    puVar6[-0x11] = *puVar4;
                    puVar6[-0x10] = puVar4[1];
                    puVar6[-0xf] = puVar4[2];
                    puVar6[-0xe] = puVar4[3];
                    puVar6[-0xd] = puVar4[4];
                    puVar6[-0xc] = puVar4[5];
                    puVar6[-0xb] = puVar4[6];
                    puVar6[-10] = puVar4[7];
                    puVar6[-9] = puVar4[8];
                }
                if (puVar6 + -8 != (undefined4 *)0x0) {
                    lVar3 = *param_1;
                    puVar6[-8] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -0x20);
                    puVar6[-7] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -0x1c);
                    puVar6[-6] = *(undefined4 *)
                            ((longlong)puVar6 + (longlong)(&DAT_ffffffffffffffe8 + lVar3 + lVar7));
                    puVar6[-5] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -0x14);
                    puVar6[-4] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -0x10);
                    puVar6[-3] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -0xc);
                    puVar6[-2] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -8);
                    puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7 + -4);
                    *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar3 + lVar7);
                }
                if (puVar6 + 1 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)((longlong)puVar6 + *param_1 + (4 - lVar5));
                    puVar6[1] = *puVar4;
                    puVar6[2] = puVar4[1];
                    puVar6[3] = puVar4[2];
                    puVar6[4] = puVar4[3];
                    puVar6[5] = puVar4[4];
                    puVar6[6] = puVar4[5];
                    puVar6[7] = puVar4[6];
                    puVar6[8] = puVar4[7];
                    puVar6[9] = puVar4[8];
                }
                if (puVar6 + 10 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)((longlong)puVar6 + *param_1 + (0x28 - lVar5));
                    puVar6[10] = *puVar4;
                    puVar6[0xb] = puVar4[1];
                    puVar6[0xc] = puVar4[2];
                    puVar6[0xd] = puVar4[3];
                    puVar6[0xe] = puVar4[4];
                    puVar6[0xf] = puVar4[5];
                    puVar6[0x10] = puVar4[6];
                    puVar6[0x11] = puVar4[7];
                    puVar6[0x12] = puVar4[8];
                }
                puVar6 = puVar6 + 0x24;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
        }
        if (uVar8 < uVar1) {
            lVar7 = uVar1 - uVar8;
            puVar6 = (undefined4 *)(lVar5 + uVar8 * 0x24 + 0x20);
            do {
                if (puVar6 + -8 != (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)(*param_1 + (-0x20 - lVar5) + (longlong)puVar6);
                    puVar6[-8] = *puVar4;
                    puVar6[-7] = puVar4[1];
                    puVar6[-6] = puVar4[2];
                    puVar6[-5] = puVar4[3];
                    puVar6[-4] = puVar4[4];
                    puVar6[-3] = puVar4[5];
                    puVar6[-2] = puVar4[6];
                    puVar6[-1] = puVar4[7];
                    *puVar6 = puVar4[8];
                }
                puVar6 = puVar6 + 9;
                lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
        }
        lVar7 = *param_1;
        if (lVar7 != 0) {
            (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = uVar1;
    return;
}



longlong FUN_140579ed0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                       int param_5)

{
    FUN_1407e4830(param_1,0,0xd0);
    FUN_1407e4830(param_1,0,0x100);
    FUN_140579f60(param_1,param_3,param_4);
    *(undefined4 *)(param_1 + 0xd0) = param_2;
    *(uint *)(param_1 + 200) = *(uint *)(param_3 + 0x58) & 1;
    if (param_5 != 0) {
        *(undefined8 *)(param_1 + 0x54) = 0;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(undefined8 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
    }
    return param_1;
}



void FUN_140579f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 uVar1;

    FUN_1407e4830(param_1,0,0x98);
    if (param_2 != (undefined4 *)0x0) {
        *param_1 = param_2[2];
        if (param_3 == (undefined4 *)0x0) {
            param_3 = param_2;
        }
        param_1[1] = param_2[3];
        param_1[9] = param_2[0x25];
        param_1[0xc] = param_2[1];
        param_1[10] = *param_2;
        uVar1 = 0;
        if (param_3 != (undefined4 *)0x0) {
            uVar1 = *param_3;
        }
        param_1[0xb] = uVar1;
        if (((*(byte *)(param_2 + 0x16) & 4) != 0) || (param_2[3] == -1)) {
            param_1[3] = 1;
        }
        if ((*(byte *)(param_3 + 0x16) & 8) != 0) {
            param_1[6] = 1;
        }
        if ((param_3[0x16] & 0x2000) != 0) {
            param_1[7] = 1;
        }
        param_1[0xe] = param_2[0x16] & 0x10;
        param_1[0xf] = param_2[0x16] & 0x20;
        param_1[0x10] = param_2[0x16] & 0x40;
        param_1[0x11] = param_2[0x16] & 0x80;
        param_1[0x12] = param_2[0x16] & 0x100;
        param_1[0x13] = param_2[0x16] & 0x200;
        param_1[0x1b] = param_3[0x1d];
        param_1[0x15] = param_3[0x17];
        param_1[0x1c] = param_3[0x1e];
        param_1[0x16] = param_3[0x18];
        param_1[0x1d] = param_3[0x1f];
        param_1[0x17] = param_3[0x19];
        param_1[0x1e] = param_3[0x20];
        param_1[0x18] = param_3[0x1a];
        param_1[0x1f] = param_3[0x21];
        param_1[0x19] = param_3[0x1b];
        param_1[0x20] = param_3[0x22];
        param_1[0x1a] = param_3[0x1c];
        uVar1 = param_3[0x23];
        param_1[0x22] = 0;
        param_1[0x21] = uVar1;
        *(undefined8 *)(param_1 + 0x24) = 0;
    }
    return;
}



undefined8 FUN_14057a0b0(undefined8 param_1,ulonglong param_2)

{
    FUN_14057a0f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014057a154)

void FUN_14057a0f0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b6cc98;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



void FUN_14057a190(longlong param_1,uint *param_2)

{
    int iVar1;
    undefined4 *puVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    uint uVar6;

    if (*(longlong *)(param_1 + 0x7040) != 0) {
        iVar1 = DAT_140c636a8 + DAT_140c3a004 * 2;
        iVar3 = *(int *)(param_1 + 0x708c);
        if (*(int *)(param_1 + 0x7088) == iVar3) {
            if (iVar3 == 0) {
                uVar4 = 8;
            }
            else {
                uVar4 = (ulonglong)(uint)(iVar3 * 2);
            }
            *(int *)(param_1 + 0x708c) = (int)uVar4;
            uVar5 = FUN_14018c320(*(undefined8 *)(param_1 + 0x7098),uVar4 * 0x48,8);
            *(undefined8 *)(param_1 + 0x7098) = uVar5;
        }
        puVar2 = (undefined4 *)
                (*(longlong *)(param_1 + 0x7098) + (ulonglong)*(uint *)(param_1 + 0x7088) * 0x48);
        *(uint *)(param_1 + 0x7088) = *(uint *)(param_1 + 0x7088) + 1;
        *puVar2 = 0;
        puVar2[2] = iVar1;
        uVar6 = *(int *)(param_1 + 0x7088) + *param_2;
        if (*(uint *)(param_1 + 0x708c) <= uVar6 && uVar6 != *(uint *)(param_1 + 0x708c)) {
            uVar5 = FUN_14018c320(*(undefined8 *)(param_1 + 0x7098),(ulonglong)uVar6 * 0x48,8);
            *(uint *)(param_1 + 0x708c) = uVar6;
            *(undefined8 *)(param_1 + 0x7098) = uVar5;
        }
        FUN_1407db590(*(longlong *)(param_1 + 0x7098) + (ulonglong)*(uint *)(param_1 + 0x7088) * 0x48,
                      *(undefined8 *)(param_2 + 4),(ulonglong)*param_2 * 0x48);
        *(uint *)(param_1 + 0x7088) = uVar6;
        *param_2 = 0;
        param_2[2] = 0;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14057a2c0(longlong param_1)

{
    int iVar1;
    undefined8 local_res8;
    ulonglong local_48;
    undefined8 local_40;
    code *local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_18;

    if ((*(longlong *)(param_1 + 0x6490) != 0) &&
        (*(int *)(*(longlong *)(param_1 + 0x6490) + 0xd50) != 0)) {
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        FUN_140799e80(param_1 + 0x7088,&local_28);
        if ((*(int *)(*(longlong *)(param_1 + 0x6490) + 0xd50) != 0) && ((int)local_28 != 0)) {
            local_48 = CONCAT44((int)local_28,DAT_140c636a8);
            local_40 = local_18;
            FUN_1403f4900(DAT_140c65898,0x637,&local_48);
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0x17e8);
        if (iVar1 != *(int *)(param_1 + 0x7150)) {
            local_res8 = CONCAT44(iVar1,*(int *)(param_1 + 0x7150));
            FUN_1403f4900(param_1,0x63a,&local_res8);
            *(int *)(param_1 + 0x7150) = iVar1;
        }
        local_48 = local_48 & 0xffffffff00000000;
        local_40 = FUN_14001c280(param_1);
        local_30 = 0;
        local_38 = FUN_14057a2c0;
        FUN_140195960(param_1 + 0x7030,DAT_140c3a004,&local_48,4);
        FUN_14079a4f0(&local_28);
        FUN_14018b900(local_18,0);
        return;
    }
    FUN_14079a4f0(param_1 + 0x7088);
    FUN_140195d70(param_1 + 0x7030);
    return;
}



void FUN_14057a450(ulonglong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    uint uVar7;
    ulonglong local_res8;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;
    code *local_28;
    undefined8 local_20;
    ulonglong uVar8;

    lVar2 = DAT_140c65898;
    if (param_2 == *(longlong *)(DAT_140c65898 + 0x6490)) {
        *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0xd50) = 1;
        uVar8 = 0;
        *(undefined4 *)(*(longlong *)(lVar2 + 0x6490) + 0xd58) = 0;
        *(undefined8 *)(lVar2 + 0x6488) = 0;
        local_res8 = param_1;
        FUN_14079a4f0(lVar2 + 0x7088);
        local_38 = 0;
        uVar5 = FUN_14001c280(lVar2);
        local_30 = (undefined4)uVar5;
        uStack44 = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_20 = 0;
        local_28 = FUN_14057a2c0;
        FUN_140195960(lVar2 + 0x7030,DAT_140c3a004,&local_38,4);
        lVar1 = *(longlong *)(lVar2 + 0x6490);
        uStack52 = 8;
        local_30 = 0;
        puVar6 = (undefined4 *)FUN_14018c320(0,0x240,8);
        local_38 = 1;
        *puVar6 = 2;
        puVar6[2] = *(undefined4 *)(lVar1 + 0xf70);
        puVar6[3] = *(undefined4 *)(lVar1 + 0xf74);
        puVar6[4] = *(undefined4 *)(lVar1 + 0xf78);
        uVar7 = DAT_140c636a8;
        puVar6[5] = 0;
        lVar1 = *(longlong *)(lVar2 + 0x6490);
        local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar7;
        local_28 = (code *)puVar6;
        if ((*(int *)(lVar1 + 0xd50) != 0) || (*(int *)(lVar1 + 0x80) == 0x12)) {
            do {
                iVar4 = FUN_1405b4ab0(lVar1,&local_res8,puVar6 + uVar8 * 0x12,0,0);
                uVar3 = local_res8;
                if (iVar4 < 0) goto LAB_14057a5e6;
                uVar7 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar7;
            } while (uVar7 == 0);
            FUN_1405b4f50(lVar1,local_res8 & 0xffffffff);
            FUN_1405b5070(lVar1,uVar3 & 0xffffffff);
            FUN_1405b82a0(lVar1,uVar3 & 0xffffffff);
            for (lVar1 = *(longlong *)(lVar1 + 0xf08); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf18)) {
                FUN_1405b4ef0(lVar1,uVar3 & 0xffffffff);
            }
        }
        LAB_14057a5e6:
        FUN_14057a190(lVar2,&local_38);
        FUN_14079a4f0(&local_38);
        FUN_14018b900(local_28,0);
    }
    return;
}



undefined8 FUN_14057a630(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined4 local_res8 [2];
    undefined8 local_res18 [2];

    if (*(longlong *)(param_1 + 0x6490) != 0) {
        local_res8[0] = *param_2;
        FUN_1403f4900(DAT_140c65898,0x635,local_res8);
        uVar2 = *(ulonglong *)(param_1 + 0x6490);
        if (uVar2 != 0) {
            uVar2 = (ulonglong)*(uint *)(uVar2 + 0x108);
        }
        if (param_2[2] == (int)uVar2) {
            FUN_14055b0e0(param_1);
        }
        if (param_2[1] != 0) {
            FUN_1405b3cf0(*(undefined8 *)(param_1 + 0x6490));
        }
        if (((*(int *)(*(longlong *)(param_1 + 0x6490) + 0xd58) != 0) &&
             (*(longlong *)(param_1 + 0x78) != 0)) &&
            (param_2[2] == *(int *)(*(longlong *)(param_1 + 0x78) + 8))) {
            local_res18[0] = CONCAT44(*(undefined4 *)(param_1 + 0x7150),*(undefined4 *)(param_1 + 0x7150))
                    ;
            FUN_1403f4900(param_1,0x63a,local_res18);
        }
        if (*(int *)(*(longlong *)(param_1 + 0x6490) + 8) != param_2[2]) {
            lVar3 = FUN_1403d90d0();
            if (lVar3 == 0) {
                *(undefined4 *)(DAT_140c65898 + 0x6480) = param_2[2];
            }
            else {
                lVar1 = *(longlong *)(param_1 + 0x6490);
                *(undefined4 *)(lVar1 + 0xd50) = 0;
                FUN_1403968b0(lVar1,lVar3);
                *(undefined4 *)(DAT_140c65898 + 0x6480) = 0;
            }
        }
        lVar3 = *(longlong *)(param_1 + 0x6490);
        *(undefined4 *)(lVar3 + 0xd54) = 1;
        if ((*(int *)(lVar3 + 0xdf4) != 1) && (*(int *)(lVar3 + 0xd50) == 0)) {
            FUN_14057a450();
        }
        FUN_14055bac0(param_1);
    }
    return 0;
}



undefined8 FUN_14057a790(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x6490) == 0) {
        return 0x80004005;
    }
    FUN_14079a4f0(param_1 + 0x7088);
    FUN_140195d70(param_1 + 0x7030);
    FUN_1405b3cf0(*(undefined8 *)(param_1 + 0x6490),DAT_140c636a8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0xd5c) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0xd50) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0xd54) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0xd58) = 1;
    *(undefined8 *)(param_1 + 0x6488) = 0;
    return 0;
}



undefined8 FUN_14057a830(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined8 local_res10;

    lVar2 = FUN_1403d90d0(param_1,*param_2);
    uVar1 = DAT_140c636a8;
    if (lVar2 == 0) {
        local_res10 = 0x141e19560;
        FUN_1401a3130(5,2,&local_res10,*param_2);
        return 1;
    }
    if (*(int *)(lVar2 + 0xd50) == 0) {
        uVar5 = 0;
        *(undefined4 *)(lVar2 + 0xd58) = param_2[3];
        local_res10 = CONCAT44(local_res10._4_4_,uVar1);
        if (param_2[2] != 0) {
            FUN_1405b3cf0(lVar2,uVar1);
            *(undefined4 *)(lVar2 + 0xd5c) = 0;
        }
        FUN_14079ab90(lVar2 + 0xd5c,param_2[1],uVar1);
        if (*(int *)(lVar2 + 0xdf4) - 2U < 2) {
            FUN_14079aaa0(lVar2 + 0xdf0);
        }
        if (param_2[4] != 0) {
            do {
                uVar3 = FUN_1405b4ab0(lVar2,&local_res10,*(longlong *)(param_2 + 6) + uVar5 * 0x48,
                                      lVar2 + 0xd5c,lVar2 + 0xdf0);
                if ((int)uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < (uint)param_2[4]);
        }
        if (*(longlong *)(lVar2 + 0xe80) == 0) {
            *(undefined4 *)(lVar2 + 0xdf4) = 2;
            if ((*(longlong *)(lVar2 + 0xe48) != 0) || (*(longlong *)(lVar2 + 0xe50) != 0)) {
                FUN_140195960(lVar2 + 0xdf8,-(*(int *)(lVar2 + 0xdf0) != 0) & 0x96,lVar2 + 0xe40,4);
            }
        }
        else {
            *(undefined4 *)(lVar2 + 0xdf4) = 1;
        }
        FUN_1405b4f50(lVar2,uVar1);
        FUN_1405b5070(lVar2,uVar1);
        FUN_1405b82a0(lVar2,uVar1);
        for (lVar2 = *(longlong *)(lVar2 + 0xf08); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0xf18)) {
            FUN_1405b4ef0(lVar2,uVar1);
        }
        return 0;
    }
    return 0;
}



uint FUN_14057aa00(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;

    lVar1 = FUN_1401fcf20(*(undefined4 *)(param_1 + 4));
    uVar2 = 0;
    if (lVar1 == 0) {
        uVar4 = 0;
    }
    else {
        uVar4 = *(uint *)(lVar1 + 0xc);
    }
    lVar1 = FUN_1401fcf20(*(undefined4 *)(param_1 + 8));
    if (lVar1 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(uint *)(lVar1 + 0xc);
    }
    lVar1 = FUN_1401fcf20(*(undefined4 *)(param_1 + 0xc));
    if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0xc);
    }
    return ((uVar2 & 0x3ff | 0xfffff800) << 10 | uVar3 & 0x3ff) << 10 | uVar4 & 0x3ff;
}



undefined8 *
FUN_14057aa90(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
    longlong *plVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    plVar1 = param_1 + 0x14;
    *param_1 = &PTR_LAB_140b6cca0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 9) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    *plVar1 = 0;
    param_1[0x13] = param_2;
    *plVar1 = *param_2;
    *param_2 = (longlong)param_1;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x98) = plVar1;
    }
    param_1[8] = param_3;
    param_1[4] = *param_4;
    param_1[5] = param_4[1];
    param_1[6] = param_4[2];
    param_1[7] = param_4[3];
    FUN_14058fe80(param_1 + 2,param_4[3],*(undefined4 *)((longlong)param_4 + 0x14));
    param_1[0x12] = 0;
    return param_1;
}



undefined8 FUN_14057ab70(undefined8 param_1,ulonglong param_2)

{
    FUN_14057abb0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14057abb0(undefined8 *param_1)

{
    longlong lVar1;

    if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x13] = param_1[0x14];
    }
    if (param_1[0x14] != 0) {
        *(undefined8 *)(param_1[0x14] + 0x98) = param_1[0x13];
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    FUN_140195d70(param_1 + 9);
    *(undefined4 *)(param_1 + 9) = 0;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xb];
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_14057ac70(longlong param_1)

{
    longlong *plVar1;

    *(undefined8 *)(param_1 + 0x40) = 0;
    if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xa0);
    }
    plVar1 = (longlong *)(param_1 + 0xa0);
    if (*plVar1 != 0) {
        *(undefined8 *)(*plVar1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
    }
    *plVar1 = 0;
    *(longlong **)(param_1 + 0x98) = &DAT_140c7dde0;
    *plVar1 = DAT_140c7dde0;
    DAT_140c7dde0 = param_1;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x98) = plVar1;
    }
    FUN_140195d70(param_1 + 0x48);
    return;
}



undefined8 FUN_14057acf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    int iVar1;
    undefined8 *local_38;
    code *local_30;
    undefined4 local_28 [2];
    undefined8 *local_20;
    code *local_18;
    undefined8 local_10;

    local_30 = FUN_14057ae00;
    DAT_140c8af40 = DAT_140c8af40 + 1;
    local_28[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
    local_38 = param_1;
    local_20 = (undefined8 *)param_2;
    iVar1 = FUN_1403f82f0(DAT_140c65898,8,local_28,param_3,0x21,&local_38,DAT_140c8af40);
    if (iVar1 != 0) {
        return 1;
    }
    param_1[0x12] = param_1[0x12] + 1;
    if (param_1[0x12] == 1) {
        (**(code **)*param_1)();
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_14057add0;
        local_20 = param_1;
        FUN_140195960(param_1 + 9,60000,local_28,4);
    }
    return 0;
}



void FUN_14057add0(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14057dbd0(*(longlong *)(param_1 + 0x40),param_1 + 0x20,0);
    }
    FUN_14057ac70(param_1);
    return;
}



void FUN_14057ae00(longlong *param_1)

{
    longlong lVar1;

    if ((param_1[0x12] != 0) && (lVar1 = param_1[0x12] + -1, param_1[0x12] = lVar1, lVar1 == 0)) {
        if (param_1[8] != 0) {
            FUN_14057dbd0(param_1[8],param_1 + 4,0);
        }
        FUN_14057ac70(param_1);
        // WARNING: Could not recover jumptable at 0x00014057ae49. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*param_1 + 8))(param_1);
        return;
    }
    return;
}



undefined8 * FUN_14057ae60(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;

    *param_1 = 0;
    puVar2 = (undefined8 *)FUN_14018b280(0x12,0);
    puVar4 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_LAB_140b55060;
        puVar2[1] = 0;
        puVar4 = puVar2;
    }
    *(undefined2 *)(puVar4 + 2) = 0;
    plVar5 = param_1 + 3;
    param_1[1] = puVar4 + 2;
    param_1[2] = 0;
    *plVar5 = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x19] = 0;
    param_1[0x1c] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x2b] = 0;
    param_1[0x2d] = 0;
    param_1[0x30] = 0;
    param_1[0x32] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    puVar3 = (undefined *)FUN_14018b280(0x30);
    param_1[0x4a] = 0;
    param_1[0x49] = puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1[0x49] + 8) = 0;
    *(undefined8 *)(param_1[0x49] + 0x10) = param_1[0x49];
    *(undefined8 *)(param_1[0x49] + 0x18) = param_1[0x49];
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    *(undefined4 *)(param_1 + 0x50) = 300;
    param_1[0x52] = 0;
    param_1[0x51] = 0;
    FUN_140019600(param_1 + 0x53);
    param_1[0x58] = 0;
    *(undefined4 *)(param_1 + 0x59) = 300;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5a) = 0;
    puVar3 = (undefined *)FUN_14018b280(0x30);
    param_1[0x5d] = 0;
    param_1[0x5c] = puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1[0x5c] + 8) = 0;
    *(undefined8 *)(param_1[0x5c] + 0x10) = param_1[0x5c];
    *(undefined8 *)(param_1[0x5c] + 0x18) = param_1[0x5c];
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    param_1[100] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    puVar3 = (undefined *)FUN_14018b280(0x68);
    param_1[0x68] = puVar3;
    param_1[0x69] = 0;
    *puVar3 = 0;
    *(undefined8 *)(param_1[0x68] + 8) = 0;
    *(undefined8 *)(param_1[0x68] + 0x10) = param_1[0x68];
    *(undefined8 *)(param_1[0x68] + 0x18) = param_1[0x68];
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    FUN_1407e4830(param_1 + 0x35,0,0x30);
    lVar6 = 10;
    do {
        lVar1 = *plVar5;
        puVar2 = (undefined8 *)FUN_14018b280(0x12);
        puVar4 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = 0;
            puVar4 = puVar2;
        }
        *(undefined2 *)(puVar4 + 2) = 0;
        *plVar5 = (longlong)(puVar4 + 2);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))();
        }
        *(undefined4 *)(plVar5 + 1) = 0;
        plVar5[3] = 0;
        plVar5[4] = 0;
        plVar5 = plVar5 + 5;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14057b140(undefined8 *param_1)

{
    uint *puVar1;
    code *pcVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 *puVar11;
    int iVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    float fVar15;
    longlong local_res8;
    longlong local_res10;

    if (DAT_140c658a0 != 0) {
        iVar12 = *(int *)(param_1 + 2);
        if (iVar12 == 1) {
            FUN_1404041e0(param_1,0xf,*param_1);
        }
        else if (iVar12 != 2) {
            if (iVar12 == 3) {
                FUN_1404041e0(param_1,0x1d,*param_1);
            }
            else if (iVar12 != 7) goto LAB_14057b1c2;
        }
        FUN_1404041e0();
    }
    LAB_14057b1c2:
    uVar14 = param_1[0x66];
    uVar9 = 0;
    uVar13 = uVar9;
    if (uVar14 != 0) {
        do {
            lVar10 = *(longlong *)(param_1[0x65] + uVar13 * 8);
            if (lVar10 != 0) {
                lVar6 = *(longlong *)(lVar10 + 0x48);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                lVar6 = *(longlong *)(lVar10 + 0x10);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                FUN_14018b900(lVar10);
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
    }
    param_1[0x66] = 0;
    uVar14 = param_1[0x4f];
    uVar13 = uVar9;
    if (uVar14 != 0) {
        do {
            lVar10 = *(longlong *)(param_1[0x4e] + uVar13 * 8);
            if (lVar10 != 0) {
                lVar6 = *(longlong *)(lVar10 + 0x18);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                uVar7 = uVar9;
                if (*(longlong *)(lVar10 + 0x10) != 0) {
                    do {
                        plVar5 = *(longlong **)(*(longlong *)(lVar10 + 8) + uVar7 * 8);
                        if (plVar5 != (longlong *)0x0) {
                            (**(code **)(*plVar5 + 8))();
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(ulonglong *)(lVar10 + 0x10));
                }
                lVar6 = *(longlong *)(lVar10 + 8);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                FUN_14018b900(lVar10);
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < uVar14);
    }
    lVar10 = DAT_140c65c28;
    if (DAT_140c65c28 != 0) {
        lVar6 = *(longlong *)(*(longlong *)(DAT_140c65c28 + 0x70) + 0x10);
        if (lVar6 != *(longlong *)(DAT_140c65c28 + 0x70)) {
            do {
                lVar8 = *(longlong *)(lVar6 + 0x18);
                if (lVar8 == 0) {
                    lVar4 = *(longlong *)(lVar6 + 8);
                    lVar8 = lVar6;
                    if (lVar6 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar8 = lVar4;
                            lVar4 = *(longlong *)(lVar8 + 8);
                        } while (lVar8 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar8 + 0x18) != lVar4) {
                        lVar8 = lVar4;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar8 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10))
                    {
                        lVar8 = lVar4;
                    }
                }
                puVar11 = *(undefined8 **)(lVar6 + 0x28);
                if ((*(byte *)(*(longlong *)puVar11[5] + 0xc) & 4) != 0) {
                    if (puVar11 != (undefined8 *)0x0) {
                        (**(code **)*puVar11)(puVar11,1);
                    }
                    local_res8 = lVar6;
                    FUN_140645210(lVar10 + 0x68);
                }
                lVar6 = lVar8;
            } while (lVar8 != *(longlong *)(lVar10 + 0x70));
        }
        lVar6 = DAT_140c65c28;
        pcVar2 = DAT_140c63838;
        *(undefined8 *)(lVar10 + 0x108) = 0;
        if (pcVar2 == (code *)0x0) {
            uVar3 = 0;
            if ((_DAT_140c64944 == 0) && (iVar12 = FUN_1401e9240(), -1 < iVar12)) {
                uVar3 = (**(code **)(*DAT_140c64218 + 0x28))();
            }
        }
        else {
            uVar3 = (*pcVar2)(&PTR_u_Achievement_140a69138);
        }
        if (uVar3 != 0) {
            uVar14 = (ulonglong)uVar3;
            fVar15 = 0.0;
            do {
                puVar1 = *(uint **)(uVar9 + *(longlong *)(lVar6 + 0x18));
                if (((*(byte *)(puVar1 + 3) & 4) != 0) && ((float)puVar1[8] <= fVar15)) {
                    lVar10 = *(longlong *)(lVar6 + 0x70);
                    uVar3 = *puVar1;
                    lVar4 = lVar10;
                    lVar8 = *(longlong *)(lVar10 + 8);
                    while (lVar8 != 0) {
                        if (*(uint *)(lVar8 + 0x20) < uVar3) {
                            lVar8 = *(longlong *)(lVar8 + 0x18);
                        }
                        else {
                            lVar4 = lVar8;
                            lVar8 = *(longlong *)(lVar8 + 0x10);
                        }
                    }
                    if ((lVar4 == lVar10) || (uVar3 < *(uint *)(lVar4 + 0x20))) {
                        local_res10 = lVar10;
                        plVar5 = &local_res10;
                    }
                    else {
                        local_res8 = lVar4;
                        plVar5 = &local_res8;
                    }
                    if ((*plVar5 == lVar10) || (*(longlong *)(*plVar5 + 0x28) == 0)) {
                        FUN_140643f00(lVar6,uVar3,0,0,0,1,0);
                    }
                }
                uVar9 = uVar9 + 0x30;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
    }
    lVar10 = param_1[0x6b];
    while (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x40) = 0;
        if (*(undefined8 **)(lVar10 + 0x98) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar10 + 0x98) = *(undefined8 *)(lVar10 + 0xa0);
        }
        plVar5 = (longlong *)(lVar10 + 0xa0);
        if (*plVar5 != 0) {
            *(undefined8 *)(*plVar5 + 0x98) = *(undefined8 *)(lVar10 + 0x98);
        }
        *plVar5 = 0;
        *(longlong **)(lVar10 + 0x98) = &DAT_140c7dde0;
        *plVar5 = DAT_140c7dde0;
        DAT_140c7dde0 = lVar10;
        if (*plVar5 != 0) {
            *(longlong **)(*plVar5 + 0x98) = plVar5;
        }
        FUN_140195d70(lVar10 + 0x48);
        lVar10 = param_1[0x6b];
    }
    lVar10 = *(longlong *)(param_1[0x5c] + 0x10);
    if (lVar10 != param_1[0x5c]) {
        do {
            puVar11 = *(undefined8 **)(lVar10 + 0x28);
            if (puVar11 != (undefined8 *)0x0) {
                (**(code **)*puVar11)(puVar11,1);
            }
            lVar6 = *(longlong *)(lVar10 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar10 = lVar6;
                        lVar6 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar6) {
                    lVar10 = lVar6;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar6 + 0x10); lVar10 = lVar6, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar6 = lVar8;
                }
            }
        } while (lVar10 != param_1[0x5c]);
    }
    lVar10 = param_1[0x6c];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    if (param_1[0x6b] != 0) {
        FUN_1401a4a00(param_1 + 0x6b);
    }
    if (param_1[0x69] != 0) {
        lVar10 = *(longlong *)(param_1[0x68] + 8);
        while (lVar10 != 0) {
            FUN_1400083b0(param_1 + 0x67,*(undefined8 *)(lVar10 + 0x18));
            lVar6 = *(longlong *)(lVar10 + 0x10);
            FUN_14018b900(lVar10,0);
            lVar10 = lVar6;
        }
        *(undefined8 *)(param_1[0x68] + 0x10) = param_1[0x68];
        *(undefined8 *)(param_1[0x68] + 8) = 0;
        *(undefined8 *)(param_1[0x68] + 0x18) = param_1[0x68];
        param_1[0x69] = 0;
    }
    FUN_14018b900(param_1[0x68],0);
    lVar10 = param_1[0x65];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    if (param_1[0x5d] != 0) {
        lVar10 = *(longlong *)(param_1[0x5c] + 8);
        while (lVar10 != 0) {
            FUN_1400083b0(param_1 + 0x5b,*(undefined8 *)(lVar10 + 0x18));
            lVar6 = *(longlong *)(lVar10 + 0x10);
            FUN_14018b900(lVar10,0);
            lVar10 = lVar6;
        }
        *(undefined8 *)(param_1[0x5c] + 0x10) = param_1[0x5c];
        *(undefined8 *)(param_1[0x5c] + 8) = 0;
        *(undefined8 *)(param_1[0x5c] + 0x18) = param_1[0x5c];
        param_1[0x5d] = 0;
    }
    FUN_14018b900(param_1[0x5c],0);
    FUN_14058fbc0(param_1 + 0x53);
    FUN_14018b900(param_1[0x55],0);
    param_1[0x55] = 0;
    lVar10 = param_1[0x51];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    lVar10 = param_1[0x4e];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    if (param_1[0x4a] != 0) {
        lVar10 = *(longlong *)(param_1[0x49] + 8);
        while (lVar10 != 0) {
            FUN_1400083b0(param_1 + 0x48,*(undefined8 *)(lVar10 + 0x18));
            lVar6 = *(longlong *)(lVar10 + 0x10);
            FUN_14018b900(lVar10,0);
            lVar10 = lVar6;
        }
        *(undefined8 *)(param_1[0x49] + 0x10) = param_1[0x49];
        *(undefined8 *)(param_1[0x49] + 8) = 0;
        *(undefined8 *)(param_1[0x49] + 0x18) = param_1[0x49];
        param_1[0x4a] = 0;
    }
    FUN_14018b900(param_1[0x49],0);
    lVar10 = param_1[0x45];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    lVar10 = param_1[0x44];
    if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    }
    puVar11 = param_1 + 0x35;
    iVar12 = 9;
    do {
        lVar10 = puVar11[-5];
        puVar11 = puVar11 + -5;
        if (lVar10 != 0) {
            (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
        }
        iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    lVar10 = param_1[1];
    if (lVar10 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014057b7e3. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
    return;
}



longlong FUN_14057b7f0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14057b840(longlong *param_1,_FILETIME param_2,longlong *param_3,longlong *param_4,
                   undefined4 param_5)

{
    undefined8 *puVar1;
    short sVar2;
    int iVar3;
    int iVar4;
    longlong *plVar5;
    _FILETIME _Var6;
    ulonglong uVar7;
    int iVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined2 *puVar12;
    undefined8 uVar13;
    longlong *plVar14;
    undefined8 *puVar15;
    longlong *plVar16;
    longlong *plVar17;
    undefined8 *puVar18;
    uint uVar19;
    longlong lVar20;
    _FILETIME _Var21;
    longlong **pplVar22;
    longlong **pplVar23;
    short *psVar24;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    _FILETIME local_res10;
    longlong *local_res18;
    longlong *local_res20;
    longlong *local_188;
    ulonglong local_180;
    longlong local_178;
    undefined **local_158 [2];
    undefined8 local_148;
    undefined local_130 [8];
    _FILETIME *local_128;
    _FILETIME *local_120;
    _FILETIME *local_118;
    _FILETIME local_110;
    int local_108;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_98 [16];
    undefined2 *local_88;

    *param_1 = *(longlong *)param_2;
    psVar24 = *(short **)((longlong)param_2 + 8);
    lVar20 = param_1[1];
    puVar15 = (undefined8 *)0x0;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (psVar24 == (short *)0x0) {
        param_1[1] = 0;
    }
    else {
        sVar2 = *psVar24;
        puVar18 = puVar15;
        while (sVar2 != 0) {
            puVar18 = (undefined8 *)((longlong)puVar18 + 1);
            sVar2 = psVar24[(longlong)puVar18];
        }
        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar18 * 2 + 0x12,0);
        puVar10 = puVar15;
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_LAB_140b55060;
            puVar9[1] = puVar18;
            puVar10 = puVar9;
        }
        puVar10 = puVar10 + 2;
        FUN_1407db590(puVar10);
        *(undefined2 *)((longlong)puVar18 * 2 + (longlong)puVar10) = 0;
        param_1[1] = (longlong)puVar10;
    }
    _Var21 = local_res10;
    if (lVar20 != 0) {
        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)_Var21 + 0x14);
    lVar20 = (longlong)_Var21 - (longlong)param_1;
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)_Var21 + 0x10);
    local_180 = 10;
    pplVar22 = (longlong **)(param_1 + 3);
    do {
        psVar24 = (short *)&DAT_1409f2bd4;
        if (*(short **)(lVar20 + (longlong)pplVar22) != (short *)0x0) {
            psVar24 = *(short **)(lVar20 + (longlong)pplVar22);
        }
        local_188 = *pplVar22;
        if (psVar24 == (short *)0x0) {
            *pplVar22 = (longlong *)0x0;
        }
        else {
            sVar2 = *psVar24;
            puVar18 = puVar15;
            while (sVar2 != 0) {
                puVar18 = (undefined8 *)((longlong)puVar18 + 1);
                sVar2 = psVar24[(longlong)puVar18];
            }
            puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar18 * 2 + 0x12,0);
            puVar10 = puVar15;
            if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = &PTR_LAB_140b55060;
                puVar9[1] = puVar18;
                puVar10 = puVar9;
            }
            plVar5 = puVar10 + 2;
            FUN_1407db590(plVar5);
            *(undefined2 *)((longlong)puVar18 * 2 + (longlong)plVar5) = 0;
            *pplVar22 = plVar5;
        }
        uVar7 = local_180;
        if (local_188 != (longlong *)0x0) {
            (**(code **)(local_188[-2] + 8))(local_188 + -2);
        }
        _Var21 = local_res10;
        pplVar23 = pplVar22 + 5;
        local_180 = uVar7 - 1;
        *(undefined4 *)(pplVar22 + 1) = *(undefined4 *)(lVar20 + 8 + (longlong)pplVar22);
        pplVar22[2] = *(longlong **)(&DAT_ffffffffffffffe8 + lVar20 + (longlong)pplVar23);
        pplVar22[3] = *(longlong **)(lVar20 + -0x10 + (longlong)pplVar23);
        pplVar22[4] = *(longlong **)(lVar20 + -8 + (longlong)pplVar23);
        pplVar22 = pplVar23;
    } while (local_180 != 0);
    *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)((longlong)local_res10 + 0x1a8);
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)local_res10 + 0x1ac);
    *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)((longlong)local_res10 + 0x1b0);
    *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)local_res10 + 0x1b4);
    *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)((longlong)local_res10 + 0x1b8);
    *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)local_res10 + 0x1bc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)local_res10 + 0x1c0);
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)local_res10 + 0x1c4);
    *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)((longlong)local_res10 + 0x1c8);
    *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)local_res10 + 0x1cc);
    *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)((longlong)local_res10 + 0x1d0);
    *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)((longlong)local_res10 + 0x1d4);
    param_1[0x3b] = (ulonglong)*(uint *)((longlong)local_res10 + 0x1d8);
    param_1[0x3c] = (ulonglong)*(uint *)((longlong)local_res10 + 0x1dc);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)((longlong)local_res10 + 0x1e0);
    *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)((longlong)local_res10 + 0x1e4);
    param_1[0x3e] = *(longlong *)((longlong)local_res10 + 0x1e8);
    *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)local_res10 + 0x1f0);
    *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)local_res10 + 0x280);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((longlong)local_res10 + 0x27c);
    *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)local_res10 + 0x284);
    *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)((longlong)local_res10 + 0x288);
    *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)((longlong)local_res10 + 0x278);
    if (param_1 != (longlong *)0xfffffffffffffdc8) {
        FUN_1401e82f0();
    }
    local_180 = local_180 & 0xffffffff00000000;
    param_1[0x4c] = *local_res20;
    param_1[0x4d] = local_res20[6];
    puVar18 = puVar15;
    if (*(int *)((longlong)_Var21 + 500) != 0) {
        do {
            if (9 < (uint)puVar18) break;
            puVar10 = (undefined8 *)param_1[0x4f];
            while (puVar10 <= puVar18) {
                puVar10 = (undefined8 *)FUN_14018b280(0x28);
                puVar9 = puVar15;
                if (puVar10 != (undefined8 *)0x0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar8 = FUN_1401fffc0(), -1 < iVar8)) {
                            lVar20 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x284);
                            goto LAB_14057bc4d;
                        }
                        LAB_14057bc57:
                        iVar8 = 0x40;
                    }
                    else {
                        lVar20 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x284,DAT_140c63858);
                        LAB_14057bc4d:
                        if (lVar20 == 0) goto LAB_14057bc57;
                        iVar8 = *(int *)(lVar20 + 4);
                    }
                    lVar20 = (longlong)iVar8;
                    *(undefined4 *)puVar10 = 0;
                    puVar10[2] = lVar20;
                    if (iVar8 != 0) {
                        puVar9 = (undefined8 *)FUN_14018b280(lVar20 * 8 + 0x10,0);
                        if (puVar9 == (undefined8 *)0x0) {
                            puVar9 = (undefined8 *)&DAT_00000010;
                        }
                        else {
                            *puVar9 = &PTR_LAB_140b55060;
                            puVar9[1] = lVar20;
                            puVar9 = puVar9 + 2;
                        }
                    }
                    puVar10[1] = puVar9;
                    puVar9 = puVar15;
                    if (puVar10[2] != 0) {
                        do {
                            puVar1 = (undefined8 *)(puVar10[1] + (longlong)puVar9 * 8);
                            if (puVar1 != (undefined8 *)0x0) {
                                *puVar1 = 0;
                            }
                            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                        } while (puVar9 < (undefined8 *)puVar10[2]);
                    }
                    puVar10[3] = 0;
                    *(undefined4 *)(puVar10 + 4) = 0;
                    puVar9 = puVar10;
                }
                lVar20 = param_1[0x4f];
                puVar10 = (undefined8 *)(lVar20 + 1);
                lVar11 = FUN_14018db00(param_1[0x4e],puVar10);
                *(undefined8 **)(lVar11 + lVar20 * 8) = puVar9;
                if (param_1[0x4e] != lVar11) {
                    FUN_1407db590(lVar11);
                    if (param_1[0x4e] != 0) {
                        (**(code **)(*(longlong *)(param_1[0x4e] + -0x10) + 8))();
                    }
                    param_1[0x4e] = lVar11;
                }
                param_1[0x4f] = (longlong)puVar10;
            }
            psVar24 = (short *)((longlong *)((longlong)local_res10 + 0x1f8))[(longlong)puVar18];
            lVar20 = *(longlong *)(param_1[0x4e] + (longlong)puVar18 * 8);
            lVar11 = *(longlong *)(lVar20 + 0x18);
            if (psVar24 == (short *)0x0) {
                *(undefined8 *)(lVar20 + 0x18) = 0;
            }
            else {
                sVar2 = *psVar24;
                puVar18 = puVar15;
                while (sVar2 != 0) {
                    puVar18 = (undefined8 *)((longlong)puVar18 + 1);
                    sVar2 = psVar24[(longlong)puVar18];
                }
                puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar18 * 2 + 0x12,0);
                puVar10 = puVar15;
                if (puVar9 != (undefined8 *)0x0) {
                    puVar9[1] = puVar18;
                    *puVar9 = &PTR_LAB_140b55060;
                    puVar10 = puVar9;
                }
                puVar10 = puVar10 + 2;
                FUN_1407db590(puVar10);
                *(undefined2 *)((longlong)puVar10 + (longlong)puVar18 * 2) = 0;
                *(undefined8 **)(lVar20 + 0x18) = puVar10;
            }
            if (lVar11 != 0) {
                (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
            }
            uVar19 = (int)local_180 + 1;
            *(undefined4 *)(*(longlong *)(param_1[0x4e] + (local_180 & 0xffffffff) * 8) + 0x20) =
                    *(undefined4 *)((longlong)local_res20 + (local_180 & 0xffffffff) * 4 + 8);
            local_180 = local_180 & 0xffffffff00000000 | (ulonglong)uVar19;
            puVar18 = (undefined8 *)(ulonglong)uVar19;
            _Var21 = local_res10;
        } while (uVar19 < *(uint *)((longlong)local_res10 + 500));
    }
    iVar8 = *(int *)(param_1 + 2);
    *(undefined4 *)(param_1 + 0x5f) = 2;
    if (iVar8 == 1) {
        *(undefined4 *)(param_1 + 0x5f) = 0xf;
        FUN_140403e90(0,0xf,*param_1,param_1[1]);
        FUN_1400b7090(local_158,0x9cb88);
        local_98 = extraout_XMM0_00 & (undefined  [16])0x0;
        local_158[0] = &PTR_FUN_140b69230;
        local_88 = (undefined2 *)0x0;
        puVar12 = (undefined2 *)FUN_14018b280(0x10);
        local_98 = CONCAT88(puVar12,puVar12);
        local_88 = puVar12 + 8;
        if (puVar12 != (undefined2 *)0x0) {
            *puVar12 = 0;
        }
        lVar20 = FUN_14018b280(0x60);
        if (lVar20 == 0) {
            local_res10 = (_FILETIME)0x0;
        }
        else {
            local_res10 = (_FILETIME)FUN_1404ddb40(lVar20,param_1[1]);
        }
        iVar8 = local_108;
        _Var6 = local_res10;
        if (local_128 == local_120) {
            local_110 = local_res10;
        }
        local_108 = local_108 + 1;
        lVar20 = *(longlong *)local_res10;
        uVar13 = FUN_14018efa0(&local_180,&DAT_1409d2fa4,iVar8);
        (**(code **)(lVar20 + 0x48))(_Var6,uVar13);
        if (local_178 != 0) {
            FUN_14018b900(local_178,0);
        }
        if (local_120 == local_118) {
            FUN_1400b9430(local_130,local_120,&local_res10);
        }
        else {
            if (local_120 != (_FILETIME *)0x0) {
                *local_120 = _Var6;
            }
            local_120 = local_120 + 1;
        }
        if (local_f8 != local_f0) {
            *local_f8 = 0;
            local_f0 = local_f8;
        }
        if (DAT_140c63648 != (undefined8 *)0x0) {
            local_res10 = (_FILETIME)0x0;
            (**(code **)*DAT_140c63648)(DAT_140c63648,local_148,local_158,&local_res10);
            if (local_res10 == (_FILETIME)0x0) {
                if (local_f8 == local_f0) goto LAB_14057c233;
                *local_f8 = 0;
                local_f0 = local_f8;
            }
            else {
                sVar2 = *(short *)local_res10;
                puVar18 = puVar15;
                while (sVar2 != 0) {
                    puVar18 = (undefined8 *)((longlong)puVar18 + 1);
                    sVar2 = *(short *)((longlong)local_res10 + (longlong)puVar18 * 2);
                }
                FUN_14001c480(local_100,local_res10,(short *)((longlong)local_res10 + (longlong)puVar18 * 2)
                );
            }
            if (local_res10 != (_FILETIME)0x0) {
                (**(code **)(*(longlong *)((longlong)local_res10 + -0x10) + 8))
                        ((longlong *)((longlong)local_res10 + -0x10));
            }
        }
    }
    else {
        if (iVar8 == 2) {
            *(undefined4 *)(param_1 + 0x5f) = 0x11;
            FUN_140403e90();
            goto LAB_14057c256;
        }
        if (iVar8 != 3) {
            if (iVar8 == 7) {
                *(undefined4 *)(param_1 + 0x5f) = 0x2f;
                FUN_140403e90();
            }
            goto LAB_14057c256;
        }
        *(undefined4 *)(param_1 + 0x5f) = 0x1d;
        FUN_140403e90(0,0x1d,*param_1,param_1[1]);
        FUN_1400b7090(local_158,0x9cb88);
        local_98 = extraout_XMM0 & (undefined  [16])0x0;
        local_158[0] = &PTR_FUN_140b69230;
        local_88 = (undefined2 *)0x0;
        puVar12 = (undefined2 *)FUN_14018b280(0x10);
        local_98 = CONCAT88(puVar12,puVar12);
        local_88 = puVar12 + 8;
        if (puVar12 != (undefined2 *)0x0) {
            *puVar12 = 0;
        }
        lVar20 = FUN_14018b280(0x60);
        if (lVar20 == 0) {
            local_res10 = (_FILETIME)0x0;
        }
        else {
            local_res10 = (_FILETIME)FUN_1404ddb40(lVar20,param_1[1]);
        }
        iVar8 = local_108;
        _Var6 = local_res10;
        if (local_128 == local_120) {
            local_110 = local_res10;
        }
        local_108 = local_108 + 1;
        lVar20 = *(longlong *)local_res10;
        uVar13 = FUN_14018efa0(&local_180,&DAT_1409d2fa4,iVar8);
        (**(code **)(lVar20 + 0x48))(_Var6,uVar13);
        if (local_178 != 0) {
            FUN_14018b900(local_178,0);
        }
        if (local_120 == local_118) {
            FUN_1400b9430(local_130,local_120,&local_res10);
        }
        else {
            if (local_120 != (_FILETIME *)0x0) {
                *local_120 = _Var6;
            }
            local_120 = local_120 + 1;
        }
        if (local_f8 != local_f0) {
            *local_f8 = 0;
            local_f0 = local_f8;
        }
        if (DAT_140c63648 != (undefined8 *)0x0) {
            local_res10 = (_FILETIME)0x0;
            (**(code **)*DAT_140c63648)(DAT_140c63648,local_148,local_158,&local_res10);
            if (local_res10 == (_FILETIME)0x0) {
                if (local_f8 == local_f0) goto LAB_14057c233;
                *local_f8 = 0;
                local_f0 = local_f8;
            }
            else {
                sVar2 = *(short *)local_res10;
                puVar18 = puVar15;
                while (sVar2 != 0) {
                    puVar18 = (undefined8 *)((longlong)puVar18 + 1);
                    sVar2 = *(short *)((longlong)local_res10 + (longlong)puVar18 * 2);
                }
                FUN_14001c480(local_100,local_res10,(short *)((longlong)local_res10 + (longlong)puVar18 * 2)
                );
            }
            if (local_res10 != (_FILETIME)0x0) {
                (**(code **)(*(longlong *)((longlong)local_res10 + -0x10) + 8))
                        ((longlong *)((longlong)local_res10 + -0x10));
            }
        }
    }
    LAB_14057c233:
    FUN_140403e90();
    if (local_98._0_8_ != 0) {
        FUN_14018b900();
    }
    FUN_1400b7390(local_158);
    LAB_14057c256:
    fVar25 = 0.0;
    *(undefined4 *)(param_1 + 0x60) = param_5;
    *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)(local_res18 + 2);
    iVar8 = *(int *)((longlong)local_res18 + 0x34);
    *(int *)((longlong)param_1 + 0x30c) = iVar8;
    iVar3 = *(int *)((longlong)local_res18 + 0x3c);
    *(int *)(param_1 + 0x62) = iVar3;
    iVar4 = *(int *)(local_res18 + 7);
    *(int *)(param_1 + 0x61) = iVar4;
    uVar19 = *(int *)(param_1 + 0x40) + *(int *)((longlong)param_1 + 0x1fc) +
             *(int *)((longlong)param_1 + 0x204);
    if (uVar19 != 0) {
        fVar25 = (float)(ulonglong)(uint)(iVar4 + iVar8 + iVar3) / (float)(ulonglong)uVar19;
    }
    *(float *)((longlong)param_1 + 0x314) = fVar25;
    param_1[99] = *local_res18;
    param_1[100] = local_res18[1];
    param_1[0x42] = *(longlong *)((longlong)_Var21 + 0x248);
    param_1[0x43] = *(longlong *)((longlong)_Var21 + 0x250);
    if (param_1[0x4a] != 0) {
        lVar20 = *(longlong *)(param_1[0x49] + 8);
        while (lVar20 != 0) {
            FUN_1400083b0(param_1 + 0x48);
            lVar11 = *(longlong *)(lVar20 + 0x10);
            FUN_14018b900(lVar20);
            lVar20 = lVar11;
        }
        *(longlong *)(param_1[0x49] + 0x10) = param_1[0x49];
        *(undefined8 *)(param_1[0x49] + 8) = 0;
        *(longlong *)(param_1[0x49] + 0x18) = param_1[0x49];
        param_1[0x4a] = 0;
    }
    if (*(int *)((longlong)_Var21 + 600) != 0) {
        fVar25 = 9.223372e+18;
        fVar28 = 8.64e+11;
        puVar18 = puVar15;
        do {
            fVar27 = *(float *)(*(longlong *)((longlong)_Var21 + 0x260) + 4 + (longlong)puVar18 * 8);
            GetSystemTimeAsFileTime(&local_res10);
            lVar20 = 0;
            fVar26 = (fVar27 - (float)(int)fVar27) * fVar28;
            if ((fVar25 <= fVar26) && (fVar26 = fVar26 - fVar25, fVar26 < fVar25)) {
                lVar20 = -0x8000000000000000;
            }
            if (fVar25 <= fVar27) {
                fVar27 = fVar27 - fVar25;
            }
            lVar11 = (longlong)fVar26 + lVar20 + (longlong)local_res10;
            plVar5 = (longlong *)param_1[0x49];
            lVar20 = *(longlong *)((longlong)_Var21 + 0x260);
            plVar14 = plVar5;
            if ((longlong *)plVar5[1] != (longlong *)0x0) {
                plVar16 = (longlong *)plVar5[1];
                do {
                    if (*(uint *)(plVar16 + 4) < *(uint *)(lVar20 + (longlong)puVar18 * 8)) {
                        plVar17 = (longlong *)plVar16[3];
                    }
                    else {
                        plVar17 = (longlong *)plVar16[2];
                        plVar14 = plVar16;
                    }
                    plVar16 = plVar17;
                } while (plVar17 != (longlong *)0x0);
            }
            if ((plVar14 == plVar5) ||
                (*(uint *)(lVar20 + (longlong)puVar18 * 8) < *(uint *)(plVar14 + 4))) {
                local_180 = local_180 & 0xffffffff00000000 |
                            (ulonglong)*(uint *)(lVar20 + (longlong)puVar18 * 8);
                local_178 = 0;
                local_res20 = plVar14;
                FUN_140055c60(param_1 + 0x48,&local_188,&local_res20,&local_180);
                plVar14 = local_188;
            }
            plVar14[5] = (longlong)fVar27 * 864000000000 + lVar11;
            puVar18 = (undefined8 *)((longlong)puVar18 + 1);
        } while (puVar18 < (undefined8 *)(ulonglong)*(uint *)((longlong)_Var21 + 600));
    }
    psVar24 = *(short **)((longlong)_Var21 + 0x268);
    lVar20 = param_1[0x44];
    if (psVar24 == (short *)0x0) {
        param_1[0x44] = 0;
    }
    else {
        sVar2 = *psVar24;
        puVar18 = puVar15;
        while (sVar2 != 0) {
            puVar18 = (undefined8 *)((longlong)puVar18 + 1);
            sVar2 = psVar24[(longlong)puVar18];
        }
        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar18 * 2 + 0x12,0);
        puVar10 = puVar15;
        if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = puVar18;
            *puVar9 = &PTR_LAB_140b55060;
            puVar10 = puVar9;
        }
        puVar10 = puVar10 + 2;
        FUN_1407db590(puVar10,psVar24,(longlong)puVar18 * 2);
        *(undefined2 *)((longlong)puVar10 + (longlong)puVar18 * 2) = 0;
        param_1[0x44] = (longlong)puVar10;
    }
    if (lVar20 != 0) {
        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
    }
    psVar24 = *(short **)((longlong)_Var21 + 0x270);
    lVar20 = param_1[0x45];
    if (psVar24 == (short *)0x0) {
        param_1[0x45] = 0;
    }
    else {
        sVar2 = *psVar24;
        puVar18 = puVar15;
        while (sVar2 != 0) {
            puVar18 = (undefined8 *)((longlong)puVar18 + 1);
            sVar2 = psVar24[(longlong)puVar18];
        }
        puVar10 = (undefined8 *)FUN_14018b280((longlong)puVar18 * 2 + 0x12,0);
        if (puVar10 != (undefined8 *)0x0) {
            puVar10[1] = puVar18;
            *puVar10 = &PTR_LAB_140b55060;
            puVar15 = puVar10;
        }
        puVar15 = puVar15 + 2;
        FUN_1407db590(puVar15,psVar24,(longlong)puVar18 * 2);
        *(undefined2 *)((longlong)puVar15 + (longlong)puVar18 * 2) = 0;
        param_1[0x45] = (longlong)puVar15;
    }
    if (lVar20 != 0) {
        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
    }
    FUN_140580d70(param_1,local_res18);
    return;
}



undefined8 FUN_14057c650(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    uVar2 = uVar1;
    if (*(int *)(param_2 + 0x10) != 0) {
        do {
            FUN_140580d70(param_1,*(longlong *)(param_2 + 0x18) + uVar1);
            uVar2 = uVar2 + 1;
            uVar1 = uVar1 + 0x50;
        } while (uVar2 < *(uint *)(param_2 + 0x10));
    }
    if (*(int *)(param_2 + 0x20) != 0) {
        FUN_140427560(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1);
        *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x20);
    }
    return 0;
}



undefined8 FUN_14057c6e0(undefined8 *param_1,longlong param_2)

{
    short sVar1;
    int iVar2;
    short *psVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    psVar3 = *(short **)(param_2 + 0x10);
    puVar6 = (undefined8 *)0x0;
    lVar4 = param_1[1];
    if (psVar3 == (short *)0x0) {
        param_1[1] = 0;
    }
    else {
        sVar1 = *psVar3;
        puVar7 = puVar6;
        while (sVar1 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar1 = psVar3[(longlong)puVar7];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = puVar7;
            *puVar5 = &PTR_LAB_140b55060;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar3,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
        param_1[1] = puVar6;
    }
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))();
    }
    iVar2 = *(int *)(param_1 + 2);
    if (iVar2 == 1) {
        FUN_140404090(0,0xf,*param_1,param_1[1]);
    }
    else if (iVar2 != 2) {
        if (iVar2 == 3) {
            FUN_140404090(0,0x1d,*param_1,param_1[1]);
        }
        else if (iVar2 != 7) goto LAB_14057c7f9;
    }
    FUN_140404090();
    LAB_14057c7f9:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildName",&DAT_1409ea944,param_1);
    return 0;
}



undefined8 FUN_14057c830(longlong param_1,longlong param_2)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    short *psVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong lVar10;

    param_2 = param_2 - param_1;
    lVar10 = 10;
    plVar8 = (longlong *)(param_1 + 0x18);
    do {
        puVar5 = (undefined8 *)0x0;
        psVar2 = *(short **)(param_2 + -8 + (longlong)plVar8);
        lVar3 = *plVar8;
        psVar7 = (short *)&DAT_1409f2ba4;
        if (psVar2 != (short *)0x0) {
            psVar7 = psVar2;
        }
        if (psVar7 == (short *)0x0) {
            *plVar8 = 0;
        }
        else {
            sVar1 = *psVar7;
            puVar6 = puVar5;
            while (sVar1 != 0) {
                puVar6 = (undefined8 *)((longlong)puVar6 + 1);
                sVar1 = psVar7[(longlong)puVar6];
            }
            puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_LAB_140b55060;
                puVar4[1] = puVar6;
                puVar5 = puVar4;
            }
            puVar5 = puVar5 + 2;
            FUN_1407db590(puVar5,psVar7,(longlong)puVar6 * 2);
            *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
            *plVar8 = (longlong)puVar5;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        plVar9 = plVar8 + 5;
        *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(param_2 + (longlong)plVar8);
        plVar8[2] = *(longlong *)(param_2 + -0x20 + (longlong)plVar9);
        plVar8[3] = *(longlong *)(&DAT_ffffffffffffffe8 + param_2 + (longlong)plVar9);
        plVar8[4] = *(longlong *)(param_2 + -0x10 + (longlong)plVar9);
        lVar10 = lVar10 + -1;
        plVar8 = plVar9;
    } while (lVar10 != 0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildRankChange",&DAT_1409ea894,param_1);
    return 0;
}



undefined8 FUN_14057cc70(longlong param_1,longlong param_2)

{
    longlong lVar1;

    *(ulonglong *)(param_1 + 0x1d8) = (ulonglong)*(ushort *)(param_2 + 0x60);
    *(ulonglong *)(param_1 + 0x1e0) = (ulonglong)*(ushort *)(param_2 + 0x62);
    lVar1 = FUN_140580d70();
    if (lVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildMemberChange",&DAT_1409ea3d4,param_1
        );
        return 0;
    }
    FUN_1404276f0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1,lVar1);
    return 0;
}



undefined8 FUN_14057cce0(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined4 local_14;

    uVar1 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x1e8) = uVar1;
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x1ec) = uVar4;
    local_28 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1f0) = local_28;
    iVar2 = *(int *)(param_2 + 0x20) - *(int *)(param_1 + 0x1f8);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_2 + 0x20);
    local_1c = 0;
    local_14 = 0;
    puVar3 = &local_28;
    local_20 = 1;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildInfluenceAndMoney",&DAT_140b009ec,
                  param_1,uVar1,puVar3,uVar4);
    if (iVar2 != 0) {
        FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x1020);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildWarCoinsChanged",&DAT_1409ea5e4,
                      param_1,iVar2,puVar3,uVar4);
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x00014057cf27)

undefined8 FUN_14057cdc0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    longlong lVar9;
    int iVar10;
    ulonglong uVar11;
    ulonglong local_res20;
    undefined8 in_stack_ffffffffffffff88;
    undefined4 uVar12;
    longlong local_58;

    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    iVar10 = 200;
    if (*(int *)(param_1 + 0x10) == 1) {
        iVar10 = 100;
    }
    iVar10 = *(int *)(param_2 + 0x10) - iVar10;
    if (((iVar10 < 0) || (*(int *)(param_1 + 0x278) <= iVar10)) ||
        (puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x270) + (longlong)iVar10 * 8),
                puVar3 == (undefined4 *)0x0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildResult",&DAT_140b009a0,param_1,0,0,
                      0x40);
        return 0;
    }
    uVar11 = (ulonglong)*(uint *)(param_2 + 0x14);
    if (uVar11 != 0) {
        plVar1 = (longlong *)(param_1 + 0x298);
        local_58 = 0;
        do {
            lVar9 = *(longlong *)(param_2 + 0x18) + local_58;
            uVar4 = (**(code **)(param_1 + 0x2b0))(lVar9);
            for (puVar6 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x2a8) + (uVar4 % *(ulonglong *)(param_1 + 0x2a0)) * 8
                    ); puVar6 != (ulonglong *)0x0; puVar6 = (ulonglong *)puVar6[1]) {
                if ((uVar4 == *puVar6) && (iVar10 = (**(code **)(param_1 + 0x2b8))(lVar9), iVar10 != 0)) {
                    if (puVar6 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_14057cff7;
                    break;
                }
            }
            lVar5 = FUN_14018b280(0x140,0);
            puVar6 = (ulonglong *)0x0;
            if (lVar5 != 0) {
                puVar6 = (ulonglong *)FUN_140569a60(lVar5);
            }
            iVar10 = FUN_140569c90(puVar6);
            if (iVar10 < 0) {
                if (puVar6 != (ulonglong *)0x0) {
                    (**(code **)(*puVar6 + 8))(puVar6);
                }
            }
            else {
                if (*(ulonglong *)(puVar3 + 4) <= (ulonglong)*(uint *)(lVar9 + 0x18) &&
                    (ulonglong)*(uint *)(lVar9 + 0x18) != *(ulonglong *)(puVar3 + 4)) {
                    do {
                        FUN_14058fdb0(puVar3 + 2);
                    } while (*(ulonglong *)(puVar3 + 4) <= (ulonglong)*(uint *)(lVar9 + 0x18) &&
                             (ulonglong)*(uint *)(lVar9 + 0x18) != *(ulonglong *)(puVar3 + 4));
                }
                local_res20 = (**(code **)(*puVar6 + 0x30))(puVar6);
                if (*plVar1 == *(longlong *)(param_1 + 0x2a0)) {
                    FUN_1400290d0(plVar1);
                }
                uVar4 = (**(code **)(param_1 + 0x2b0))(&local_res20);
                ppuVar2 = (ulonglong **)
                        (*(longlong *)(param_1 + 0x2a8) + (uVar4 % *(ulonglong *)(param_1 + 0x2a0)) * 8);
                puVar7 = (ulonglong *)FUN_14018b280();
                puVar8 = (ulonglong *)0x0;
                if (puVar7 != (ulonglong *)0x0) {
                    puVar8 = *ppuVar2;
                    *puVar7 = uVar4;
                    puVar7[1] = (ulonglong)puVar8;
                    puVar7[2] = local_res20;
                    puVar7[3] = (ulonglong)puVar6;
                    (**(code **)*puVar6)();
                    puVar8 = puVar7;
                }
                *ppuVar2 = puVar8;
                *plVar1 = *plVar1 + 1;
                ppuVar2 = (ulonglong **)(*(longlong *)(puVar3 + 2) + (ulonglong)*(uint *)(lVar9 + 0x18) * 8)
                        ;
                if (*(ulonglong **)(*(longlong *)(puVar3 + 2) + (ulonglong)*(uint *)(lVar9 + 0x18) * 8) !=
                    puVar6) {
                    (**(code **)*puVar6)(puVar6);
                    puVar8 = *ppuVar2;
                    if (puVar8 != (ulonglong *)0x0) {
                        (**(code **)(*puVar8 + 8))();
                    }
                    *ppuVar2 = puVar6;
                }
                (**(code **)(*puVar6 + 8))(puVar6);
            }
            LAB_14057cff7:
            uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
            local_58 = local_58 + 0xa8;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    lVar9 = DAT_140c65898;
    *puVar3 = 1;
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x10);
    iVar10 = 200;
    if (*(int *)(param_1 + 0x10) == 1) {
        iVar10 = 100;
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar9 + 0x7340),"GuildBankTab",&DAT_1409ea5cc,param_1,
                  CONCAT44(uVar12,(*(int *)(param_2 + 0x10) - iVar10) + 1));
    return 0;
}



undefined8 FUN_14057d0f0(longlong param_1,longlong param_2)

{
    ulonglong uVar1;

    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    FUN_14004eed0(param_1 + 0x288,*(undefined4 *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x10) != 0) {
        do {
            uVar1 = uVar1 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x288) + -8 + uVar1 * 8) =
                    *(undefined8 *)(*(longlong *)(param_2 + 0x18) + -8 + uVar1 * 8);
        } while (uVar1 < *(uint *)(param_2 + 0x10));
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"WarPartyBossTokensUpdated",&DAT_1409ea85c,
                  param_1);
    return 0;
}



undefined8 FUN_14057d190(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    longlong **pplVar3;
    longlong lVar4;
    ulonglong *puVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong *puVar10;
    ulonglong local_res8;

    plVar1 = (longlong *)(param_1 + 0x298);
    uVar7 = (**(code **)(param_1 + 0x2b0))(param_2 + 0x10);
    puVar10 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x2a8) + (uVar7 % *(ulonglong *)(param_1 + 0x2a0)) * 8);
    do {
        if (puVar10 == (ulonglong *)0x0) {
            LAB_14057d1fc:
            iVar6 = 200;
            if (*(int *)(param_1 + 0x10) == 1) {
                iVar6 = 100;
            }
            iVar6 = *(int *)(param_2 + 0x24) - iVar6;
            if (((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x278))) &&
                (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar6 * 8), lVar4 != 0))
            {
                lVar8 = FUN_14018b280(0x140,0);
                if (lVar8 == 0) {
                    plVar9 = (longlong *)0x0;
                }
                else {
                    plVar9 = (longlong *)FUN_140569a60(lVar8);
                }
                iVar6 = FUN_140569c90(plVar9);
                if (-1 < iVar6) {
                    local_res8 = (**(code **)(*plVar9 + 0x30))(plVar9);
                    if (*plVar1 == *(longlong *)(param_1 + 0x2a0)) {
                        FUN_1400290d0(plVar1);
                    }
                    uVar7 = (**(code **)(param_1 + 0x2b0))(&local_res8);
                    ppuVar2 = (ulonglong **)
                            (*(longlong *)(param_1 + 0x2a8) + (uVar7 % *(ulonglong *)(param_1 + 0x2a0)) * 8)
                            ;
                    puVar10 = (ulonglong *)FUN_14018b280();
                    if (puVar10 == (ulonglong *)0x0) {
                        puVar10 = (ulonglong *)0x0;
                    }
                    else {
                        puVar5 = *ppuVar2;
                        *puVar10 = uVar7;
                        puVar10[1] = (ulonglong)puVar5;
                        puVar10[2] = local_res8;
                        puVar10[3] = (ulonglong)plVar9;
                        (**(code **)*plVar9)();
                    }
                    *ppuVar2 = puVar10;
                    *plVar1 = *plVar1 + 1;
                    lVar4 = *(longlong *)(lVar4 + 8);
                    pplVar3 = (longlong **)(lVar4 + (ulonglong)*(uint *)(param_2 + 0x28) * 8);
                    if (*(longlong **)(lVar4 + (ulonglong)*(uint *)(param_2 + 0x28) * 8) != plVar9) {
                        (**(code **)*plVar9)(plVar9);
                        plVar1 = *pplVar3;
                        if (plVar1 != (longlong *)0x0) {
                            (**(code **)(*plVar1 + 8))();
                        }
                        *pplVar3 = plVar9;
                    }
                    FUN_1404277d0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1,plVar9,0);
                }
                if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                }
            }
            return 0;
        }
        if ((uVar7 == *puVar10) &&
            (iVar6 = (**(code **)(param_1 + 0x2b8))(param_2 + 0x10,puVar10 + 2), iVar6 != 0)) {
            if (puVar10 != (ulonglong *)&DAT_ffffffffffffffe8) {
                return 0;
            }
            goto LAB_14057d1fc;
        }
        puVar10 = (ulonglong *)puVar10[1];
    } while( true );
}



undefined8 FUN_14057d370(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    int iVar5;
    ulonglong uVar6;
    int *piVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong **ppuVar10;
    longlong *local_res8;
    undefined local_res10 [4];
    uint local_res14;

    plVar1 = (longlong *)(param_1 + 0x298);
    local_res8 = (longlong *)0x0;
    iVar5 = FUN_14058f720(plVar1,(longlong *)(param_2 + 0x10),&local_res8);
    plVar4 = local_res8;
    if (iVar5 != 0) {
        local_res8 = (longlong *)(**(code **)(*local_res8 + 0x30))(local_res8);
        uVar6 = (**(code **)(param_1 + 0x2b0))(&local_res8);
        uVar9 = uVar6 % *(ulonglong *)(param_1 + 0x2a0);
        ppuVar10 = (ulonglong **)(*(longlong *)(param_1 + 0x2a8) + uVar9 * 8);
        puVar3 = *(ulonglong **)(*(longlong *)(param_1 + 0x2a8) + uVar9 * 8);
        while (puVar3 != (ulonglong *)0x0) {
            if ((uVar6 == **ppuVar10) &&
                (iVar5 = (**(code **)(param_1 + 0x2b8))(&local_res8,*ppuVar10 + 2), iVar5 != 0)) {
                puVar3 = *ppuVar10;
                *ppuVar10 = (ulonglong *)puVar3[1];
                if ((longlong *)puVar3[3] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)puVar3[3] + 8))();
                }
                FUN_14018b900(puVar3,0);
                *plVar1 = *plVar1 + -1;
                break;
            }
            ppuVar10 = (ulonglong **)(*ppuVar10 + 1);
            puVar3 = *ppuVar10;
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
        piVar7 = (int *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
        iVar5 = 200;
        if (*(int *)(param_1 + 0x10) == 1) {
            iVar5 = 100;
        }
        iVar5 = *piVar7 - iVar5;
        if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x278))) &&
             (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar5 * 8), lVar2 != 0))
            && (((local_res14 < *(uint *)(lVar2 + 0x10) &&
                  (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + (ulonglong)local_res14 * 8),
                          plVar1 != (longlong *)0x0)) &&
                 (lVar8 = (**(code **)(*plVar1 + 0x30))(), lVar8 == *(longlong *)(param_2 + 0x10))))) {
            lVar2 = *(longlong *)(lVar2 + 8);
            plVar1 = *(longlong **)(lVar2 + (ulonglong)local_res14 * 8);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))();
                *(undefined8 *)(lVar2 + (ulonglong)local_res14 * 8) = 0;
            }
        }
        FUN_1404277d0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1,plVar4,1);
    }
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    return 0;
}



undefined8 FUN_14057d530(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong *local_res8;

    local_res8 = (longlong *)0x0;
    iVar3 = FUN_14058f720(param_1 + 0x298,param_2 + 0x10,&local_res8);
    plVar2 = local_res8;
    lVar1 = DAT_140c65898;
    if (iVar3 != 0) {
        *(undefined4 *)(local_res8 + 0xf) = *(undefined4 *)(param_2 + 0x18);
        FUN_1404277d0(*(undefined8 *)(lVar1 + 0x7340),param_1,local_res8,0);
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    return 0;
}



undefined8 FUN_14057d880(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined4 *puVar3;

    uVar1 = *(ulonglong *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x40);
    uVar2 = 0;
    if (uVar1 != 0) {
        puVar3 = (undefined4 *)(param_2 + 0x18);
        do {
            if (9 < uVar2) break;
            uVar2 = uVar2 + 1;
            *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + -8 + uVar2 * 8) + 0x20) =
                    *puVar3;
            puVar3 = puVar3 + 1;
        } while (uVar2 < uVar1);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildBankWithdraw",&DAT_1409ea734);
    return 0;
}



undefined8 FUN_14057d900(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;

    if (param_1 + 0x210 != 0) {
        uVar2 = (ulonglong)(*(uint *)(param_2 + 0x10) >> 6);
        if (uVar2 < 2) {
            puVar1 = (ulonglong *)(param_1 + 0x210 + uVar2 * 8);
            *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(param_2 + 0x10) & 0x3f);
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildPerkUnlocked",&DAT_1409ea6ec,param_1,
                  *(undefined4 *)(param_2 + 0x10));
    return 0;
}



undefined8 FUN_14057d970(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_res8;

    local_res8 = 0;
    FUN_1401e82f0(param_1,*(undefined4 *)(param_3 + 0x14),&local_res8);
    puVar2 = (undefined8 *)FUN_140055be0(param_2 + 0x240,param_3 + 0x10);
    lVar1 = DAT_140c65898;
    *puVar2 = local_res8;
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"GuildPerkActivated",&DAT_1409ea6c4,param_2,
                  *(undefined4 *)(param_3 + 0x10));
    return 0;
}



void FUN_14057dbd0(longlong param_1,longlong param_2,int param_3)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    int iVar9;
    longlong lVar10;
    wchar_t *pwVar11;
    ulonglong uVar12;
    longlong *plVar13;
    undefined8 extraout_XMM0_Qa;
    float fVar14;
    uint uVar15;
    undefined auStack392 [32];
    undefined4 local_168;
    undefined local_158 [8];
    longlong local_150;
    undefined8 local_148;
    ulonglong local_138;
    undefined **local_130;
    undefined4 local_128;
    longlong local_120;
    undefined4 local_118;
    longlong local_110;
    undefined **local_108;
    undefined4 local_100;
    longlong local_f8;
    undefined4 local_f0;
    undefined8 local_e8;
    undefined4 local_e0;
    undefined8 local_d8;
    undefined4 local_d0;
    undefined8 local_c8;
    undefined4 local_c0;
    undefined2 local_b8 [40];
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    local_110 = param_1;
    lVar3 = FUN_14018b280(0xa8,0);
    plVar13 = (longlong *)0x0;
    plVar4 = plVar13;
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_14057aa90(lVar3,param_1 + 0x358,param_1,param_2);
    }
    if (*(int *)(param_2 + 0x10) == 0) {
        if ((param_3 != 0) && (FUN_140008410(param_1 + 0x338), *(int *)(param_2 + 0x14) != 0)) {
            do {
                lVar7 = (longlong)plVar13 * 0x38;
                puVar8 = (undefined8 *)FUN_14058f7e0(param_1 + 0x338,*(longlong *)(param_2 + 0x18) + lVar7);
                lVar3 = *(longlong *)(param_2 + 0x18);
                *puVar8 = *(undefined8 *)(lVar3 + lVar7);
                puVar8[1] = *(undefined8 *)(lVar3 + 8 + lVar7);
                puVar8[2] = *(undefined8 *)(lVar3 + 0x10 + lVar7);
                puVar8[3] = *(undefined8 *)(lVar3 + 0x18 + lVar7);
                puVar8[4] = *(undefined8 *)(lVar3 + 0x20 + lVar7);
                puVar8[5] = *(undefined8 *)(lVar3 + 0x28 + lVar7);
                puVar8[6] = *(undefined8 *)(lVar3 + 0x30 + lVar7);
                if (puVar8 != (undefined8 *)0xffffffffffffffc8) {
                    FUN_1401e82f0(extraout_XMM0_Qa,
                                  *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x30 + lVar7));
                }
                if (*(int *)(*(longlong *)(param_2 + 0x18) + 8 + lVar7) - 3U < 3) {
                    FUN_14057acf0(plVar4,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10 + lVar7),
                                  local_b8);
                }
                uVar15 = (int)plVar13 + 1;
                plVar13 = (longlong *)(ulonglong)uVar15;
            } while (uVar15 < *(uint *)(param_2 + 0x14));
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildEventLogChange",&DAT_1409ea76c,
                      param_1);
    }
    else {
        local_f0 = 1;
        lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_108 = &PTR_FUN_140b569f0;
        local_f8 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar8 = *(undefined8 **)(lVar3 + 0x10);
        uVar5 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar5;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        local_100 = FUN_1400578c0(lVar3);
        local_138 = 0;
        if (*(int *)(param_2 + 0x14) != 0) {
            uVar15 = 0x80000000;
            do {
                uVar12 = local_138;
                local_b8[0] = 0;
                FUN_14057acf0(plVar4,*(undefined8 *)
                        (*(longlong *)(param_2 + 0x18) + 0x10 + (longlong)plVar13),local_b8);
                if (plVar4[0x12] == 0) {
                    local_118 = 1;
                    lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
                    local_130 = &PTR_FUN_140b569f0;
                    local_120 = lVar3;
                    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar3);
                    }
                    puVar8 = *(undefined8 **)(lVar3 + 0x10);
                    uVar5 = FUN_14005c1b0(lVar3,0,0);
                    *(undefined4 *)(puVar8 + 1) = 5;
                    *puVar8 = uVar5;
                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                    uVar2 = FUN_1400578c0(lVar3);
                    local_128 = uVar2;
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar2);
                    puVar8 = *(undefined8 **)(lVar3 + 0x10);
                    *puVar8 = *puVar6;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                    FUN_1400f0870(lVar3,puVar8,L"strName",local_b8);
                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
                    puVar8 = *(undefined8 **)(lVar3 + 0x10);
                    fVar14 = (float)(*(uint *)(*(longlong *)(param_2 + 0x18) + 0x30 + (longlong)plVar13) ^
                                     uVar15);
                    puVar6 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar2);
                    *puVar8 = *puVar6;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_158,L"fOccuredAgoDays");
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
                        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
                        FUN_140058710(lVar3);
                    }
                    if (local_150 != 0) {
                        FUN_14018b900(local_150,0);
                    }
                    pdVar1 = *(double **)(lVar3 + 0x10);
                    *(undefined4 *)(pdVar1 + 1) = 3;
                    *pdVar1 = (double)fVar14;
                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                    uVar5 = FUN_1400580e0(lVar3,0xfffffffd);
                    FUN_14005ea50(lVar3,uVar5,*(longlong *)(lVar3 + 0x10) + -0x20,
                                  *(longlong *)(lVar3 + 0x10) + -0x10);
                    *(longlong *)(lVar3 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
                    lVar7 = *(longlong *)(param_2 + 0x18);
                    iVar9 = *(int *)(lVar7 + 8 + (longlong)plVar13);
                    puVar8 = *(undefined8 **)(lVar3 + 0x10);
                    if (iVar9 - 1000U < 1000) {
                        if (iVar9 == 1000) {
                            uVar5 = *(undefined8 *)(lVar7 + 0x20 + (longlong)plVar13);
                            local_150 = 1;
                            local_148 = 0;
                            puVar8 = (undefined8 *)FUN_140059170(lVar3,0x18);
                            *puVar8 = uVar5;
                            puVar8[1] = local_150;
                            puVar8[2] = 0;
                            lVar7 = *(longlong *)(lVar3 + 0x20);
                            local_c8 = FUN_140062650(lVar3,"Game.Money",10);
                            local_c0 = 4;
                            FUN_14005e8e0(lVar3,lVar7 + 0xa0,&local_c8,*(undefined8 *)(lVar3 + 0x10));
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                            FUN_140058bf0(lVar3,0xfffffffe);
                            FUN_1400fb540(&local_130,L"uMoneyDeposit");
                        }
                        else {
                            if (iVar9 != 0x3e9) goto LAB_14057e1ff;
                            uVar5 = *(undefined8 *)(lVar7 + 0x20 + (longlong)plVar13);
                            local_150 = 1;
                            local_148 = 0;
                            puVar8 = (undefined8 *)FUN_140059170(lVar3,0x18);
                            *puVar8 = uVar5;
                            puVar8[1] = local_150;
                            puVar8[2] = 0;
                            lVar7 = *(longlong *)(lVar3 + 0x20);
                            local_d8 = FUN_140062650(lVar3,"Game.Money",10);
                            local_d0 = 4;
                            FUN_14005e8e0(lVar3,lVar7 + 0xa0,&local_d8,*(undefined8 *)(lVar3 + 0x10));
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                            FUN_140058bf0(lVar3,0xfffffffe);
                            FUN_1400fb540(&local_130,L"uMoneyWithdraw");
                        }
                        LAB_14057e1fa:
                        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
                    }
                    else {
                        if (iVar9 == 2000) {
                            uVar5 = *(undefined8 *)(lVar7 + 0x20 + (longlong)plVar13);
                            local_150 = 1;
                            local_148 = 0;
                            puVar8 = (undefined8 *)FUN_140059170(lVar3,0x18);
                            *puVar8 = uVar5;
                            puVar8[1] = local_150;
                            puVar8[2] = 0;
                            lVar7 = *(longlong *)(lVar3 + 0x20);
                            local_e8 = FUN_140062650(lVar3,"Game.Money",10);
                            local_e0 = 4;
                            FUN_14005e8e0(lVar3,lVar7 + 0xa0,&local_e8,*(undefined8 *)(lVar3 + 0x10));
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                            FUN_140058bf0(lVar3,0xfffffffe);
                            FUN_1400fb540(&local_130,L"uRepairWithdraw");
                            goto LAB_14057e1fa;
                        }
                        if (99999 < iVar9) {
                            iVar9 = (iVar9 + -100000) % 1000;
                            puVar6 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar2);
                            *puVar8 = *puVar6;
                            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar3);
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
                            if (iVar9 == 0) {
                                uVar5 = FUN_1400b5df0(DAT_140c658f0,
                                                      *(undefined4 *)
                                                              (*(longlong *)(param_2 + 0x18) + 0x18 + (longlong)plVar13),0)
                                        ;
                                iVar9 = FUN_140415c70(lVar3,uVar5);
                                if (iVar9 != 0) {
                                    FUN_1400fb540(&local_130,L"uItemDeposit");
                                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
                                }
                                uVar12 = (ulonglong)
                                         *(uint *)(*(longlong *)(param_2 + 0x18) + 0x20 + (longlong)plVar13);
                                puVar8 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar2);
                                pwVar11 = L"nStack";
                            }
                            else {
                                if (iVar9 != 1) goto LAB_14057e1ff;
                                uVar5 = FUN_1400b5df0(DAT_140c658f0,
                                                      *(undefined4 *)
                                                              (*(longlong *)(param_2 + 0x18) + 0x18 + (longlong)plVar13),0)
                                        ;
                                iVar9 = FUN_140415c70(lVar3,uVar5);
                                if (iVar9 != 0) {
                                    FUN_1400fb540(&local_130,L"uItemWithdraw");
                                    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
                                }
                                uVar12 = (ulonglong)
                                         *(uint *)(*(longlong *)(param_2 + 0x18) + 0x20 + (longlong)plVar13);
                                puVar8 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar2);
                                pwVar11 = L"nStack";
                            }
                            puVar6 = *(undefined8 **)(lVar3 + 0x10);
                            *puVar6 = *puVar8;
                            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
                            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar3,puVar6,pwVar11,uVar12 & 0xffffffff);
                            goto LAB_14057e1fa;
                        }
                    }
                    LAB_14057e1ff:
                    FUN_1400fb1d0(&local_108,uVar2);
                    FUN_1400579e0(lVar3);
                    uVar12 = local_138;
                }
                local_138 = uVar12 + 1;
                plVar13 = plVar13 + 7;
                lVar3 = local_f8;
                param_1 = local_110;
            } while (local_138 < *(uint *)(param_2 + 0x14));
        }
        if (plVar4[0x12] == 0) {
            local_168 = local_100;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildBankLog",&DAT_1409ea9fc,param_1);
        }
        if (lVar3 != 0) {
            FUN_1400579e0(lVar3);
        }
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack392);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14057e3c0(longlong param_1,longlong param_2)

{
    int iVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar5;
    undefined auStack232 [32];
    undefined4 local_c8;
    longlong *local_c0;
    undefined8 local_b8;
    undefined4 local_a8 [2];
    undefined8 local_a0;
    longlong local_98;
    undefined *local_90;
    undefined8 local_88;
    undefined8 uStack128;
    undefined8 local_78;
    undefined8 uStack112;
    undefined8 local_68;
    undefined8 uStack96;
    undefined8 local_58;
    undefined8 uStack80;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_88 = 0;
    uStack128 = 0;
    local_78 = 0;
    uStack112 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_58 = 0;
    uStack80 = 0;
    puVar2 = (undefined4 *)FUN_14058f7e0(param_1 + 0x338,param_2 + 0x10);
    *puVar2 = (undefined4)local_88;
    puVar2[1] = local_88._4_4_;
    puVar2[2] = (undefined4)uStack128;
    puVar2[3] = uStack128._4_4_;
    puVar2[4] = (undefined4)local_78;
    puVar2[5] = local_78._4_4_;
    puVar2[6] = (undefined4)uStack112;
    puVar2[7] = uStack112._4_4_;
    puVar2[8] = (undefined4)local_68;
    puVar2[9] = local_68._4_4_;
    puVar2[10] = (undefined4)uStack96;
    puVar2[0xb] = uStack96._4_4_;
    puVar2[0xc] = (undefined4)local_58;
    puVar2[0xd] = local_58._4_4_;
    puVar2[0xe] = (undefined4)uStack80;
    puVar2[0xf] = uStack80._4_4_;
    puVar3 = (undefined8 *)FUN_14058f7e0(param_1 + 0x338,param_2 + 0x10);
    *puVar3 = *(undefined8 *)(param_2 + 0x10);
    puVar3[1] = *(undefined8 *)(param_2 + 0x18);
    puVar3[2] = *(undefined8 *)(param_2 + 0x20);
    puVar3[3] = *(undefined8 *)(param_2 + 0x28);
    puVar3[4] = *(undefined8 *)(param_2 + 0x30);
    puVar3[5] = *(undefined8 *)(param_2 + 0x38);
    puVar3[6] = *(undefined8 *)(param_2 + 0x40);
    uVar5 = *(undefined4 *)(param_2 + 0x40);
    lVar4 = FUN_14058f7e0(param_1 + 0x338,param_2 + 0x10);
    if (lVar4 != -0x38) {
        FUN_1401e82f0(extraout_XMM0_Da,uVar5);
    }
    if (*(int *)(param_2 + 0x18) - 3U < 2) {
        local_b8 = 0;
        local_a8[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
        local_a0 = *(undefined8 *)(param_2 + 0x20);
        local_90 = &LAB_140581230;
        local_c0 = &local_98;
        local_c8 = 0x21;
        local_98 = param_1;
        iVar1 = FUN_1403f82f0(DAT_140c65898,8,local_a8,&local_88);
        if (iVar1 == 0) goto LAB_14057e54b;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildEventLogChange",&DAT_1409ea76c,param_1
    );
    LAB_14057e54b:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



void FUN_14057e670(undefined8 *param_1,undefined8 *param_2)

{
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 uStack100;
    undefined8 uStack96;
    undefined8 local_58;
    undefined8 uStack80;
    undefined8 local_48;
    undefined8 uStack64;
    undefined8 local_38;
    undefined8 uStack48;
    undefined8 local_28;
    undefined8 uStack32;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    local_48 = 0;
    uStack64 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uStack32 = 0;
    local_68 = *(undefined4 *)(DAT_140c635f0 + 0x1680);
    uStack96 = *param_1;
    local_58 = CONCAT44(uStack100,local_68);
    uStack80 = uStack96;
    if (param_2 == (undefined8 *)0x0) {
        FUN_1407e4830(&local_48,0,0x30);
    }
    else {
        local_48 = *param_2;
        uStack64 = param_2[1];
        local_38 = param_2[2];
        uStack48 = param_2[3];
        local_28 = param_2[4];
        uStack32 = param_2[5];
    }
    FUN_1403f4900(DAT_140c65898,0x4a6,&local_58);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack136);
    return;
}



void FUN_14057e730(undefined8 *param_1)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 1;
    local_18 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057e7b0(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 8;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057e830(undefined8 *param_1)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if (*(int *)((longlong)param_1 + 0x2fc) == 0) {
        local_30 = *param_1;
        local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
        local_10 = 0xb;
        local_18 = 0;
        local_28 = 0;
        local_20 = 0;
        FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
        return;
    }
    FUN_140427560(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1);
    return;
}



void FUN_14057e8d0(undefined8 *param_1)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 10;
    local_18 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057e950(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 6;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057e9d0(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 7;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ea50(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 2;
    local_28 = (ulonglong)param_2;
    local_20 = 0;
    local_18 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ead0(undefined8 *param_1,uint param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 3;
    local_18 = 0;
    local_28 = (ulonglong)param_2;
    local_20 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057eb50(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 4;
    local_18 = 0;
    local_28 = (ulonglong)param_2;
    local_20 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ebd0(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0xf;
    local_28 = (ulonglong)param_2;
    local_20 = 0;
    local_18 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ec50(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 9;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ecd0(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 5;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ed50(undefined8 *param_1,int param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_20 = (longlong)param_2;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 5;
    local_18 = 0;
    local_28 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057edd0(undefined8 *param_1)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x10;
    local_18 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057ee50(undefined8 *param_1,uint param_2)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uStack52;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    lVar2 = DAT_140c65898;
    iVar3 = 200;
    if (*(int *)(param_1 + 2) == 1) {
        iVar3 = 100;
    }
    iVar3 = param_2 - iVar3;
    if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x4f))) &&
         (piVar1 = *(int **)(param_1[0x4e] + (longlong)iVar3 * 8), piVar1 != (int *)0x0)) &&
        (*piVar1 != 0)) {
        *(uint *)(param_1 + 0x50) = param_2;
        FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"GuildBankTab",&DAT_1409ea5cc,param_1,iVar3 + 1);
        return;
    }
    local_18 = (ulonglong)param_2;
    local_20 = *param_1;
    local_28 = CONCAT44(uStack52,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    FUN_1403f4900(DAT_140c65898,0x477,&local_28);
    return;
}



void FUN_14057ef20(undefined8 *param_1)

{
    undefined4 local_18 [2];
    undefined8 uStack16;

    if (*(int *)(param_1 + 2) == 3) {
        if (param_1[0x52] != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"WarPartyBossTokensUpdated",
                          &DAT_1409ea85c,param_1);
            return;
        }
        local_18[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
        uStack16 = *param_1;
        FUN_1403f4900(DAT_140c65898,0x956,local_18);
    }
    return;
}



void FUN_14057efa0(undefined8 *param_1)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x20;
    local_18 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057f020(undefined8 *param_1,int param_2,int param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_20 = (longlong)(param_3 * 1000 + param_2);
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_30 = *param_1;
    local_10 = 0x1f;
    local_18 = 0;
    local_28 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057f0b0(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                   int param_5)

{
    longlong *plVar1;
    bool bVar2;
    bool bVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    longlong **pplVar7;
    undefined *puVar8;
    longlong *plVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong *local_res8;
    undefined8 *local_res10;
    uint local_res18;
    longlong *local_res20;
    undefined4 uVar15;
    undefined4 uStack148;
    undefined8 local_88;
    undefined8 uStack128;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 local_60;
    undefined4 uStack92;
    uint local_58;
    int iStack84;
    ulonglong local_50;

    local_res18 = param_3;
    local_res10 = param_2;
    lVar12 = 0;
    uVar15 = 0;
    local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
    iVar6 = 200;
    if (*(int *)(param_1 + 2) == 1) {
        iVar6 = 100;
    }
    iVar5 = *(int *)param_2 - iVar6;
    lVar11 = lVar12;
    if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x4f))) {
        lVar11 = *(longlong *)(param_1[0x4e] + (longlong)iVar5 * 8);
    }
    iVar6 = *(int *)param_4 - iVar6;
    if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x4f))) {
        lVar12 = *(longlong *)(param_1[0x4e] + (longlong)iVar6 * 8);
    }
    if ((lVar11 == 0) || (*(uint *)(lVar11 + 0x10) <= *(uint *)((longlong)param_2 + 4))) {
        bVar3 = false;
        bVar2 = true;
        local_res8 = (longlong *)0x0;
        pplVar7 = &local_res8;
    }
    else {
        bVar3 = true;
        bVar2 = false;
        local_res20 = *(longlong **)
                (*(longlong *)(lVar11 + 8) + (ulonglong)*(uint *)((longlong)param_2 + 4) * 8);
        if (local_res20 != (longlong *)0x0) {
            (**(code **)*local_res20)();
        }
        pplVar7 = &local_res20;
    }
    plVar14 = *pplVar7;
    *pplVar7 = (longlong *)0x0;
    if ((bVar2) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))();
    }
    if ((bVar3) && (local_res20 != (longlong *)0x0)) {
        (**(code **)(*local_res20 + 8))();
    }
    if (((param_5 == 0) && (lVar12 != 0)) &&
        (*(uint *)((longlong)param_4 + 4) < *(uint *)(lVar12 + 0x10))) {
        bVar3 = true;
        bVar2 = false;
        local_res20 = *(longlong **)
                (*(longlong *)(lVar12 + 8) + (ulonglong)*(uint *)((longlong)param_4 + 4) * 8);
        if (local_res20 != (longlong *)0x0) {
            (**(code **)*local_res20)();
        }
        pplVar7 = &local_res20;
    }
    else {
        bVar3 = false;
        bVar2 = true;
        local_res8 = (longlong *)0x0;
        pplVar7 = &local_res8;
    }
    plVar1 = *pplVar7;
    *pplVar7 = (longlong *)0x0;
    if ((bVar2) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))();
    }
    if ((bVar3) && (local_res20 != (longlong *)0x0)) {
        (**(code **)(*local_res20 + 8))();
    }
    puVar4 = local_res10;
    lVar12 = DAT_140c65898;
    iVar6 = *(int *)local_res10;
    plVar13 = plVar14;
    if ((iVar6 - 100U < 200) && (iVar5 = *(int *)param_4, iVar5 - 100U < 200)) {
        if (plVar14 == (longlong *)0x0) {
            puVar8 = &DAT_1409f2e04;
            uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        }
        else if (*(int *)(param_1 + 2) == 1) {
            if ((iVar6 - 100U < 100) && (iVar5 - 100U < 100)) {
                LAB_14057f2de:
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                uStack100 = 0;
                local_60 = 0;
                uStack92 = 0;
                local_58 = 0;
                iStack84 = 0;
                uStack128 = *param_1;
                local_88 = CONCAT44(uStack148,*(undefined4 *)(DAT_140c635f0 + 0x1680));
                local_78 = (**(code **)(*plVar14 + 0x30))(plVar14);
                uVar10 = *puVar4;
                local_68 = (undefined4)uVar10;
                uStack100 = (undefined4)((ulonglong)uVar10 >> 0x20);
                if (plVar1 == (longlong *)0x0) {
                    local_70 = 0;
                }
                else {
                    local_70 = (**(code **)(*plVar1 + 0x30))(plVar1);
                }
                local_60 = (undefined4)*param_4;
                uStack92 = (undefined4)((ulonglong)*param_4 >> 0x20);
                local_58 = local_res18;
                FUN_1403f4900(DAT_140c65898,0x471,&local_88);
                goto LAB_14057f66c;
            }
            puVar8 = &DAT_1409f2de4;
            uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        }
        else if (*(int *)(param_1 + 2) == 3) {
            if ((iVar6 - 200U < 100) && (iVar5 - 200U < 100)) goto LAB_14057f2de;
            puVar8 = &DAT_1409f2e84;
            uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        }
        else {
            puVar8 = &DAT_1409f2e2c;
            uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        }
        LAB_14057f577:
        uVar15 = 0x44;
        plVar14 = plVar13;
    }
    else {
        if ((iVar6 - 100U < 200) && (*(int *)param_4 == 1)) {
            if (plVar14 == (longlong *)0x0) {
                puVar8 = &DAT_1409f2d44;
                uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            }
            else if (*(int *)(param_1 + 2) == 1) {
                if (iVar6 - 100U < 100) {
                    LAB_14057f42f:
                    local_78 = 0;
                    local_70 = 0;
                    local_68 = 0;
                    uStack100 = 0;
                    local_60 = 0;
                    uStack92 = 0;
                    local_58 = 0;
                    iStack84 = 0;
                    local_50 = 0;
                    uStack128 = *param_1;
                    local_88 = CONCAT44(uStack148,*(undefined4 *)(DAT_140c635f0 + 0x1680));
                    local_78 = (**(code **)(*plVar14 + 0x30))();
                    if (plVar1 == (longlong *)0x0) {
                        local_70 = 0;
                    }
                    else {
                        local_70 = (**(code **)(*plVar1 + 0x30))();
                    }
                    uStack100 = (undefined4)*param_4;
                    local_60 = (undefined4)((ulonglong)*param_4 >> 0x20);
                    uVar10 = *puVar4;
                    uStack92 = (undefined4)uVar10;
                    local_58 = (uint)((ulonglong)uVar10 >> 0x20);
                    local_50 = local_50 & 0xffffffff00000000 | (ulonglong)local_res18;
                    local_68 = *(undefined4 *)plVar14[8];
                    LAB_14057f620:
                    iStack84 = param_5;
                    FUN_1403f4900(DAT_140c65898,0x473,&local_88);
                    goto LAB_14057f66c;
                }
                puVar8 = &DAT_1409f2d2c;
                uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            }
            else if (*(int *)(param_1 + 2) == 3) {
                if (iVar6 - 200U < 100) goto LAB_14057f42f;
                puVar8 = &DAT_1409f2dbc;
                uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            }
            else {
                puVar8 = &DAT_1409f2d94;
                uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            }
            goto LAB_14057f577;
        }
        if ((iVar6 == 1) && (*(int *)param_4 - 100U < 200)) {
            plVar9 = (longlong *)FUN_1403ac780(DAT_140c65898 + 0xa0,local_res10);
            if (plVar14 != plVar9) {
                if (plVar9 != (longlong *)0x0) {
                    (**(code **)*plVar9)();
                    lVar12 = DAT_140c65898;
                }
                plVar13 = plVar9;
                if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 8))();
                    lVar12 = DAT_140c65898;
                }
            }
            if (plVar13 == (longlong *)0x0) {
                puVar8 = &DAT_1409f2c8c;
            }
            else if (*(int *)(param_1 + 2) == 1) {
                if (*(int *)param_4 - 100U < 100) {
                    LAB_14057f58d:
                    local_78 = 0;
                    local_70 = 0;
                    local_68 = 0;
                    uStack100 = 0;
                    local_60 = 0;
                    uStack92 = 0;
                    local_58 = 0;
                    iStack84 = 0;
                    local_50 = 0;
                    uStack128 = *param_1;
                    local_88 = CONCAT44(uStack148,*(undefined4 *)(DAT_140c635f0 + 0x1680));
                    if (plVar1 == (longlong *)0x0) {
                        local_78 = 0;
                    }
                    else {
                        local_78 = (**(code **)(*plVar1 + 0x30))(plVar1);
                    }
                    local_70 = (**(code **)(*plVar13 + 0x30))(plVar13);
                    if (plVar1 != (longlong *)0x0) {
                        uVar15 = *(undefined4 *)plVar1[8];
                    }
                    uStack100 = (undefined4)*param_4;
                    local_60 = (undefined4)((ulonglong)*param_4 >> 0x20);
                    uStack92 = (undefined4)*local_res10;
                    local_58 = (uint)((ulonglong)*local_res10 >> 0x20);
                    local_50 = local_50 & 0xffffffff00000000 | (ulonglong)local_res18;
                    local_68 = uVar15;
                    goto LAB_14057f620;
                }
                puVar8 = &DAT_1409f2c44;
            }
            else if (*(int *)(param_1 + 2) == 3) {
                if (*(int *)param_4 - 200U < 100) goto LAB_14057f58d;
                puVar8 = &DAT_1409f2ccc;
            }
            else {
                puVar8 = &DAT_1409f2cac;
            }
            uVar10 = *(undefined8 *)(lVar12 + 0x7340);
            goto LAB_14057f577;
        }
        uVar15 = 0x40;
        uVar10 = *(undefined8 *)(DAT_140c65898 + 0x7340);
        puVar8 = (undefined *)0x0;
    }
    FUN_1400ea3e0(uVar10,"GuildResult",&DAT_140b009a0,param_1,puVar8,0,uVar15);
    plVar13 = plVar14;
    LAB_14057f66c:
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13);
    }
    return;
}



void FUN_14057f6a0(longlong param_1,longlong *param_2,undefined4 param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    undefined local_res8 [8];

    if (param_2 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined4 *)(param_1 + 0x2c8) = 300;
        *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2d0) = param_3;
        return;
    }
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
    *(undefined8 *)(param_1 + 0x2c0) = uVar1;
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res8);
    uVar1 = *puVar2;
    *(undefined4 *)(param_1 + 0x2d0) = param_3;
    *(undefined8 *)(param_1 + 0x2c8) = uVar1;
    return;
}



void FUN_14057f730(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;
    int *piVar4;
    longlong *plVar5;
    longlong *local_res8;
    undefined8 in_stack_ffffffffffffffc8;
    uint uVar6;

    uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
    local_res8 = (longlong *)0x0;
    iVar2 = FUN_14058f720(param_1 + 0x298,param_1 + 0x2c0,&local_res8);
    plVar5 = local_res8;
    if ((iVar2 == 0) &&
        (plVar3 = (longlong *)FUN_1403acbb0(DAT_140c65898 + 0xa0,*(undefined8 *)(param_1 + 0x2c0)),
         plVar1 = local_res8, plVar5 = local_res8, local_res8 != plVar3)) {
        if (plVar3 != (longlong *)0x0) {
            (**(code **)*plVar3)(plVar3);
        }
        plVar5 = plVar3;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
        }
    }
    if (((plVar5 == (longlong *)0x0) ||
         (piVar4 = (int *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_res8),
                 *piVar4 != *(int *)(param_1 + 0x2c8))) || (piVar4[1] != *(int *)(param_1 + 0x2cc))) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildResult",&DAT_140b009a0,param_1,0,0,
                      0x45);
    }
    else {
        FUN_14057f0b0(param_1,param_1 + 0x2c8,*(undefined4 *)(param_1 + 0x2d0),param_2,
                      (ulonglong)uVar6 << 0x20);
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined4 *)(param_1 + 0x2c8) = 300;
        *(undefined4 *)(param_1 + 0x2cc) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x2d0) = 0;
    }
    if (plVar5 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014057f889. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar5 + 8))(plVar5);
    return;
}



void FUN_14057f8a0(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x15;
    local_28 = 0;
    local_20 = 1;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057f920(undefined8 *param_1,int param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_20 = (longlong)param_2;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x16;
    local_28 = 0;
    local_18 = param_3;
    FUN_1403f4900(DAT_140c65898,0x4b3,&local_38);
    return;
}



void FUN_14057f9a0(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x17;
    local_18 = 0;
    local_28 = (ulonglong)param_2;
    local_20 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fa20(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x18;
    local_18 = 0;
    local_28 = (ulonglong)param_2;
    local_20 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057faa0(undefined8 *param_1,uint param_2,undefined8 param_3)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x1e;
    local_18 = 0;
    local_28 = (ulonglong)param_2;
    local_20 = param_3;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fb20(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack52;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    local_20 = *param_1;
    local_28 = CONCAT44(uStack52,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_18 = param_2;
    FUN_1403f4900(DAT_140c65898,0x4a8,&local_28);
    return;
}



void FUN_14057fb80(undefined8 *param_1,uint param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_20 = (ulonglong)param_2;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x19;
    local_18 = 0;
    local_28 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fc00(undefined8 *param_1,uint param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_20 = (ulonglong)param_2;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x1a;
    local_18 = 0;
    local_28 = 0;
    FUN_1403f4900(DAT_140c65898,0x4b2,&local_38);
    return;
}



void FUN_14057fc80(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x1b;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fd00(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x1c;
    local_28 = 0;
    local_20 = 0;
    local_18 = param_2;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fd80(undefined8 *param_1,uint param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_20 = (ulonglong)param_2;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_10 = 0x1d;
    local_18 = 0;
    local_28 = 0;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fe00(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    local_30 = *param_1;
    local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
    local_20 = CONCAT44(param_3,param_2);
    local_10 = 0x24;
    local_18 = 0;
    local_28 = (ulonglong)param_4;
    FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    return;
}



void FUN_14057fe90(undefined8 *param_1,uint param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    undefined8 local_10;

    if (*(int *)(param_1 + 2) == 7) {
        local_30 = *param_1;
        local_20 = (ulonglong)param_2;
        local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
        local_10 = 0x29;
        local_18 = 0;
        local_28 = 0;
        FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    }
    return;
}



void FUN_14057ff10(undefined8 *param_1,undefined8 param_2)

{
    undefined4 uStack68;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    if (*(int *)(param_1 + 2) == 7) {
        local_30 = *param_1;
        local_38 = CONCAT44(uStack68,*(undefined4 *)(DAT_140c635f0 + 0x1680));
        local_10 = 0x2a;
        local_28 = 0;
        local_20 = 0;
        local_18 = param_2;
        FUN_1403f4740(DAT_140c65898,0x4b1,&local_38);
    }
    return;
}



uint * FUN_14057ff90(longlong param_1,uint *param_2)

{
    ulonglong uVar1;
    uint *puVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar3 = *param_2;
    uVar4 = *(ulonglong *)(param_2 + 2);
    uVar1 = *(ulonglong *)(param_1 + 0x330);
    uVar5 = 0;
    uVar6 = uVar5;
    uVar7 = uVar1;
    if (uVar1 != 0) {
        do {
            uVar5 = (uVar7 - uVar6 >> 1) + uVar6;
            puVar2 = *(uint **)(*(longlong *)(param_1 + 0x328) + uVar5 * 8);
            if ((uVar3 == *puVar2) && (uVar4 == *(ulonglong *)(puVar2 + 2))) break;
            uVar8 = uVar5;
            if ((*puVar2 <= uVar3) && ((*puVar2 < uVar3 || (*(ulonglong *)(puVar2 + 2) <= uVar4)))) {
                uVar6 = uVar5 + 1;
                uVar8 = uVar7;
            }
            uVar5 = uVar6;
            uVar6 = uVar5;
            uVar7 = uVar8;
        } while (uVar5 < uVar8);
    }
    if (((uVar5 < uVar1) &&
         (puVar2 = *(uint **)(*(longlong *)(param_1 + 0x328) + uVar5 * 8), *puVar2 == uVar3)) &&
        (*(ulonglong *)(puVar2 + 2) == uVar4)) {
        return puVar2;
    }
    return (uint *)0x0;
}



longlong FUN_140580040(ulonglong *param_1)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    uVar1 = *(uint *)(param_1 + 0x5f);
    uVar3 = *param_1;
    uVar4 = DAT_140c658a0[1];
    uVar6 = 0;
    uVar8 = uVar6;
    uVar9 = uVar4;
    if (uVar4 != 0) {
        do {
            uVar6 = (uVar9 - uVar8 >> 1) + uVar8;
            lVar7 = *(longlong *)(*DAT_140c658a0 + uVar6 * 8);
            uVar2 = **(uint **)(lVar7 + 8);
            if (uVar2 < uVar1) {
                LAB_14058009e:
                uVar8 = uVar6 + 1;
                uVar10 = uVar9;
            }
            else {
                uVar10 = uVar6;
                if (uVar2 <= uVar1) {
                    uVar5 = *(ulonglong *)(lVar7 + 0x10);
                    if (uVar5 < uVar3) goto LAB_14058009e;
                    if (uVar5 <= uVar3) break;
                }
            }
            uVar6 = uVar8;
            uVar8 = uVar6;
            uVar9 = uVar10;
        } while (uVar6 < uVar10);
    }
    if (((uVar4 <= uVar6) ||
         (lVar7 = *(longlong *)(*DAT_140c658a0 + uVar6 * 8), **(uint **)(lVar7 + 8) != uVar1)) ||
        (*(ulonglong *)(lVar7 + 0x10) != uVar3)) {
        lVar7 = 0;
    }
    return lVar7;
}



undefined8 * FUN_1405800e0(longlong param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong local_res8;
    longlong local_res18;
    uint local_18 [2];
    undefined8 local_10;

    if (*(int *)(param_1 + 0x10) != 3) {
        return (undefined8 *)0x0;
    }
    lVar3 = *(longlong *)(param_1 + 0x2e0);
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
    if (local_res8 != *(longlong *)(param_1 + 0x2e0)) {
        return *(undefined8 **)(local_res8 + 0x28);
    }
    iVar2 = FUN_140444550(DAT_140c658f0,param_2);
    if (((iVar2 == 0) || (lVar3 = FUN_1402096e0(param_2), lVar3 == 0)) ||
        (*(int *)(lVar3 + 0x74) == 0)) {
        return (undefined8 *)0x0;
    }
    lVar3 = FUN_14018b280(0x210,0);
    if (lVar3 == 0) {
        puVar4 = (undefined8 *)0x0;
    }
    else {
        puVar4 = (undefined8 *)FUN_1405c7150(lVar3,1);
    }
    iVar2 = FUN_1405c7ad0(puVar4,param_2,1);
    if (iVar2 < 0) {
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
        }
        return (undefined8 *)0x0;
    }
    lVar3 = *(longlong *)(param_1 + 0x2e0);
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
        local_10 = 0;
        local_18[0] = param_2;
        FUN_140055c60(param_1 + 0x2d8,&local_res18,&local_res8,local_18);
        local_res8 = local_res18;
    }
    *(undefined8 **)(local_res8 + 0x28) = puVar4;
    return puVar4;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140580280(longlong param_1,longlong param_2,uint *param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined2 *puVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    ulonglong uVar13;
    uint *puVar14;
    longlong lVar15;
    longlong lVar16;
    bool bVar17;
    ulonglong local_res18;
    undefined **local_148;
    undefined4 local_140;
    undefined4 uStack316;
    longlong local_138;
    undefined4 local_130;
    undefined local_128 [8];
    longlong local_120;
    undefined **local_108 [24];
    undefined local_48 [16];
    undefined2 *local_38;

    if (param_3 == (uint *)0x0) {
        return;
    }
    if (*(int *)(param_1 + 0x10) != 1) {
        return;
    }
    lVar16 = *(longlong *)(param_2 + 0x10);
    uVar13 = (ulonglong)*param_3;
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"idPerk",uVar13 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar6 = FUN_14034bdd0();
    lVar16 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strTitle",uVar6);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    FUN_1400b7090(local_108,param_3[2]);
    lVar16 = 0;
    local_108[0] = &PTR_FUN_140b69230;
    local_48 = ZEXT816(0);
    local_38 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)FUN_14018b280(0x10);
    local_38 = puVar7 + 8;
    local_48 = CONCAT88(puVar7,puVar7);
    if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
    }
    lVar8 = FUN_1400b7660(local_108);
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(lVar8 + 8);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strDescription",uVar6);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar13 = *(ulonglong *)(param_3 + 4);
    if ((uVar13 != 0) && (uVar13 <= DAT_140c3fe70)) {
        lVar16 = DAT_140c3fe68 + uVar13;
    }
    lVar9 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strSprite",lVar16);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar16 = *(longlong *)(param_2 + 0x10);
    uVar13 = (ulonglong)param_3[8];
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPurchaseInfluenceCost",uVar13 & 0xffffffff
    );
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar16 = *(longlong *)(param_2 + 0x10);
    uVar13 = (ulonglong)param_3[9];
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nActivateInfluenceCost",uVar13 & 0xffffffff
    );
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (param_3[10] != 0) {
        local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)param_3[10];
        iVar4 = FUN_1403d3470();
        if (iVar4 != 0) {
            FUN_1400fb540();
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    if (param_1 + 0x210 != 0) {
        uVar13 = (ulonglong)(*param_3 >> 6);
        if (uVar13 < 2) {
            bVar17 = (*(ulonglong *)(param_1 + 0x210 + uVar13 * 8) >> ((byte)*param_3 & 0x3f) & 1) != 0;
            goto LAB_140580575;
        }
    }
    bVar17 = false;
    LAB_140580575:
    lVar16 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_2 + 0x10);
    lVar9 = FUN_14018f0e0(&local_148,L"bIsUnlocked");
    lVar8 = -1;
    if (*(longlong *)(lVar9 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    }
    else {
        lVar15 = -1;
        do {
            lVar15 = lVar15 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar15) != '\0');
        FUN_140058710(lVar16);
    }
    if (CONCAT44(uStack316,local_140) != 0) {
        FUN_14018b900(CONCAT44(uStack316,local_140),0);
    }
    puVar14 = *(uint **)(lVar16 + 0x10);
    puVar14[2] = 1;
    *puVar14 = (uint)bVar17;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar16,0xfffffffd);
    FUN_14005ea50(lVar16,uVar6,*(longlong *)(lVar16 + 0x10) + -0x20,
                  *(longlong *)(lVar16 + 0x10) + -0x10);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar16 = *(longlong *)(param_2 + 0x10);
    local_148 = &PTR_FUN_140b569f0;
    local_130 = 1;
    local_138 = lVar16;
    if (*(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar16);
    }
    puVar2 = *(undefined8 **)(lVar16 + 0x10);
    uVar6 = FUN_14005c1b0(lVar16,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    local_140 = FUN_1400578c0(lVar16);
    puVar14 = param_3 + 0xb;
    lVar16 = 3;
    do {
        FUN_1400fa9e0(&local_148,*puVar14);
        puVar14 = puVar14 + 1;
        lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FUN_1400fb2a0(param_2,L"arRequiredIds",local_140);
    uVar13 = *(ulonglong *)(param_1 + 0x248);
    local_res18 = uVar13;
    if (*(ulonglong *)(uVar13 + 8) != 0) {
        uVar10 = *(ulonglong *)(uVar13 + 8);
        do {
            if (*(uint *)(uVar10 + 0x20) < *param_3) {
                uVar11 = *(ulonglong *)(uVar10 + 0x18);
            }
            else {
                uVar11 = *(ulonglong *)(uVar10 + 0x10);
                local_res18 = uVar10;
            }
            uVar10 = uVar11;
        } while (uVar11 != 0);
    }
    if ((local_res18 == uVar13) || (*param_3 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = uVar13;
    }
    if ((local_res18 != uVar13) && (iVar4 = FUN_1401e83a0(&local_res18), -1 < iVar4)) {
        lVar16 = *(longlong *)(param_2 + 0x10);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar16 + 0x10);
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
        lVar16 = *(longlong *)(param_2 + 0x10);
        lVar9 = FUN_14018f0e0(local_128,L"fDurationInDays");
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
            *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
        }
        else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar9 + lVar8) != '\0');
            FUN_140058710(lVar16,lVar9,lVar8);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        pdVar3 = *(double **)(lVar16 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)(float)local_res18;
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar16,0xfffffffd);
        FUN_14005ea50(lVar16,uVar6,*(longlong *)(lVar16 + 0x10) + -0x20,
                      *(longlong *)(lVar16 + 0x10) + -0x10);
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if (param_3[0xe] != 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        uVar12 = FUN_140643e20(DAT_140c65c28);
        iVar4 = FUN_1404332a0(uVar6,uVar12);
        if (iVar4 != 0) {
            FUN_1400fb540(param_2,L"achRequired");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    if (local_138 != 0) {
        FUN_1400579e0();
    }
    if (local_48._0_8_ != 0) {
        FUN_14018b900(local_48._0_8_,0);
    }
    FUN_1400b7390(local_108);
    return;
}



void FUN_1405808c0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    int iVar9;
    undefined8 uVar10;
    ulonglong uVar11;
    float fVar12;
    float local_res8 [2];
    undefined local_38 [8];
    longlong local_30;

    FUN_1401f31e0(*(undefined4 *)(param_1 + 0x1c));
    uVar4 = FUN_14034bdd0();
    fVar12 = 0.0;
    local_res8[0] = 0.0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1401e83a0(local_res8);
        if (fVar12 <= local_res8[0]) {
            fVar12 = 1e-06;
        }
        else {
            fVar12 = (float)((uint)local_res8[0] ^ 0x80000000);
        }
    }
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strName",uVar10);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    iVar9 = *(int *)(param_1 + 0x18);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nRank",iVar9 + 1);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strClass",uVar4);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x1c);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eClass",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x24);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"ePathType",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x28);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nLevel",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar6 = FUN_14018f0e0(local_38,L"fLastOnline");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    }
    else {
        lVar7 = -1;
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar7) != '\0');
        FUN_140058710(lVar8);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    pdVar3 = *(double **)(lVar8 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar12;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar8,0xfffffffd);
    FUN_14005ea50(lVar8,uVar4,*(longlong *)(lVar8 + 0x10) + -0x20,*(longlong *)(lVar8 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x38);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPvPWins",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x3c);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPvPLosses",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x3c);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPvPDraws",uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strNote",uVar4);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x50);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar5;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nCommunityReservedPlotIndex",
                  uVar11 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



undefined8 * FUN_140580d70(longlong param_1,undefined8 *param_2)

{
    short sVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    short *psVar5;
    uint *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    uint uVar15;
    float fVar16;
    float fVar17;

    fVar17 = 0.0;
    if ((*(int *)param_2 == *(int *)(param_1 + 0x318)) && (param_2[1] == *(longlong *)(param_1 + 800))
            ) {
        *(int *)(param_1 + 0x304) = *(int *)(param_2 + 2);
        *(uint *)(param_1 + 0x37c) = *(uint *)(param_2 + 9) & 2;
        iVar2 = *(int *)((longlong)param_2 + 0x34);
        *(int *)(param_1 + 0x30c) = iVar2;
        iVar3 = *(int *)(param_2 + 7);
        *(int *)(param_1 + 0x308) = iVar3;
        iVar4 = *(int *)((longlong)param_2 + 0x3c);
        *(int *)(param_1 + 0x310) = iVar4;
        uVar15 = *(int *)(param_1 + 0x204) + *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x1fc);
        if (uVar15 == 0) {
            fVar16 = 0.0;
        }
        else {
            fVar16 = (float)(ulonglong)(uint)(iVar4 + iVar3 + iVar2) / (float)(ulonglong)uVar15;
        }
        *(float *)(param_1 + 0x314) = fVar16;
    }
    puVar8 = (undefined8 *)FUN_14018b280(0x58);
    puVar13 = (undefined8 *)0x0;
    puVar14 = puVar13;
    if (puVar8 != (undefined8 *)0x0) {
        *(uint *)puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[9] = 0;
        puVar14 = puVar8;
    }
    *puVar14 = *param_2;
    puVar14[1] = param_2[1];
    *(uint *)(puVar14 + 3) = *(uint *)(param_2 + 2);
    psVar5 = (short *)param_2[3];
    lVar11 = puVar14[2];
    if (psVar5 == (short *)0x0) {
        puVar14[2] = 0;
    }
    else {
        sVar1 = *psVar5;
        puVar8 = puVar13;
        while (sVar1 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar1 = psVar5[(longlong)puVar8];
        }
        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        puVar10 = puVar13;
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_LAB_140b55060;
            puVar9[1] = puVar8;
            puVar10 = puVar9;
        }
        puVar10 = puVar10 + 2;
        FUN_1407db590(puVar10,psVar5);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar10) = 0;
        puVar14[2] = puVar10;
    }
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    *(uint *)(puVar14 + 4) = *(uint *)(param_2 + 4);
    *(uint *)((longlong)puVar14 + 0x1c) = *(uint *)((longlong)param_2 + 0x24);
    *(uint *)((longlong)puVar14 + 0x24) = *(uint *)(param_2 + 5);
    *(uint *)(puVar14 + 5) = *(uint *)((longlong)param_2 + 0x2c);
    *(uint *)(puVar14 + 7) = *(uint *)((longlong)param_2 + 0x34);
    *(uint *)((longlong)puVar14 + 0x3c) = *(uint *)(param_2 + 7);
    *(uint *)(puVar14 + 8) = *(uint *)((longlong)param_2 + 0x3c);
    psVar5 = (short *)param_2[8];
    lVar11 = puVar14[9];
    if (psVar5 == (short *)0x0) {
        puVar14[9] = 0;
    }
    else {
        sVar1 = *psVar5;
        puVar8 = puVar13;
        while (sVar1 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar1 = psVar5[(longlong)puVar8];
        }
        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        puVar10 = puVar13;
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_LAB_140b55060;
            puVar9[1] = puVar8;
            puVar10 = puVar9;
        }
        puVar10 = puVar10 + 2;
        FUN_1407db590(puVar10,psVar5);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar10) = 0;
        puVar14[9] = puVar10;
    }
    if (lVar11 != 0) {
        (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
    }
    *(uint *)(puVar14 + 10) = *(uint *)((longlong)param_2 + 0x4c);
    if (*(float *)(param_2 + 6) == fVar17) {
        puVar14[6] = 0;
    }
    else if (puVar14 != (undefined8 *)&DAT_ffffffffffffffd0) {
        FUN_1401e82f0();
    }
    puVar8 = *(undefined8 **)(param_1 + 0x330);
    lVar11 = *(longlong *)(param_1 + 0x328);
    if (puVar8 != (undefined8 *)0x0) {
        uVar15 = *(uint *)puVar14;
        puVar10 = puVar8;
        puVar9 = puVar13;
        do {
            puVar12 = (undefined8 *)
                    (((ulonglong)((longlong)puVar10 - (longlong)puVar9) >> 1) + (longlong)puVar9);
            puVar6 = *(uint **)(lVar11 + (longlong)puVar12 * 8);
            if ((uVar15 == *puVar6) && (puVar13 = puVar12, puVar14[1] == *(longlong *)(puVar6 + 2)))
                break;
            puVar13 = puVar9;
            if ((*puVar6 <= uVar15) &&
                ((*puVar6 < uVar15 || (*(ulonglong *)(puVar6 + 2) <= (ulonglong)puVar14[1])))) {
                puVar13 = (undefined8 *)((longlong)puVar12 + 1);
                puVar12 = puVar10;
            }
            puVar10 = puVar12;
            puVar9 = puVar13;
        } while (puVar13 < puVar12);
    }
    if (puVar13 < puVar8) {
        lVar7 = (longlong)puVar13 * 8;
        puVar6 = *(uint **)(lVar7 + lVar11);
        if ((*puVar6 == *(uint *)puVar14) && (*(longlong *)(puVar6 + 2) == puVar14[1])) {
            if (puVar6 != (uint *)0x0) {
                FUN_14057b7f0();
            }
            *(undefined8 **)(lVar7 + *(longlong *)(param_1 + 0x328)) = puVar14;
        }
        else {
            lVar11 = FUN_14018db00(lVar11,(longlong)puVar8 + 1,8);
            FUN_1407db590(lVar11 + 8 + lVar7,*(longlong *)(param_1 + 0x328) + lVar7,
                          (*(longlong *)(param_1 + 0x330) - (longlong)puVar13) * 8);
            *(undefined8 **)(lVar7 + lVar11) = puVar14;
            if (*(longlong *)(param_1 + 0x328) != lVar11) {
                FUN_1407db590(lVar11,*(longlong *)(param_1 + 0x328),lVar7);
                lVar7 = *(longlong *)(param_1 + 0x328);
                if (lVar7 != 0) {
                    (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                }
                *(longlong *)(param_1 + 0x328) = lVar11;
            }
            *(longlong *)(param_1 + 0x330) = (longlong)puVar8 + 1;
        }
    }
    else {
        lVar11 = FUN_14018db00(lVar11,(longlong)puVar8 + 1,8);
        *(undefined8 **)(lVar11 + (longlong)puVar8 * 8) = puVar14;
        if (*(longlong *)(param_1 + 0x328) != lVar11) {
            FUN_1407db590(lVar11,*(longlong *)(param_1 + 0x328),*(longlong *)(param_1 + 0x330) << 3);
            lVar7 = *(longlong *)(param_1 + 0x328);
            if (lVar7 != 0) {
                (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
            }
            *(longlong *)(param_1 + 0x328) = lVar11;
        }
        *(longlong *)(param_1 + 0x330) = (longlong)puVar8 + 1;
    }
    return puVar14;
}



void FUN_140581160(longlong param_1,uint *param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    uVar4 = *param_2;
    uVar5 = *(ulonglong *)(param_2 + 2);
    uVar1 = *(ulonglong *)(param_1 + 0x330);
    lVar2 = *(longlong *)(param_1 + 0x328);
    uVar6 = 0;
    uVar8 = uVar6;
    uVar9 = uVar1;
    if (uVar1 != 0) {
        do {
            uVar7 = (uVar9 - uVar6 >> 1) + uVar6;
            puVar3 = *(uint **)(lVar2 + uVar7 * 8);
            if ((uVar4 == *puVar3) && (uVar8 = uVar7, uVar5 == *(ulonglong *)(puVar3 + 2))) break;
            if ((*puVar3 <= uVar4) && ((*puVar3 < uVar4 || (*(ulonglong *)(puVar3 + 2) <= uVar5)))) {
                uVar6 = uVar7 + 1;
                uVar7 = uVar9;
            }
            uVar8 = uVar6;
            uVar9 = uVar7;
        } while (uVar6 < uVar7);
    }
    if (((uVar8 < uVar1) && (puVar3 = *(uint **)(lVar2 + uVar8 * 8), *puVar3 == uVar4)) &&
        (*(ulonglong *)(puVar3 + 2) == uVar5)) {
        if (puVar3 != (uint *)0x0) {
            FUN_14057b7f0(puVar3);
        }
        FUN_140007270((longlong *)(param_1 + 0x328),uVar8);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_140581260(void)

{
    DAT_140c7dde0 = 0;
    DAT_140c7de20 = 0;
    _DAT_140c7de30 = ZEXT816(0);
    DAT_140c7de18 = 0;
    _DAT_140c7de28 = 0;
    DAT_140c7de40 = 0;
    DAT_140c7de48 = 0;
    DAT_140c7de58 = (undefined *)FUN_14018b280(0x80,0);
    _DAT_140c7de60 = 0;
    *DAT_140c7de58 = 0;
    *(undefined8 *)(DAT_140c7de58 + 8) = 0;
    *(undefined **)(DAT_140c7de58 + 0x10) = DAT_140c7de58;
    *(undefined **)(DAT_140c7de58 + 0x18) = DAT_140c7de58;
    _DAT_140c7de98 = 0;
    _DAT_140c7de80 = ZEXT816(0);
    _DAT_140c7dea0 = 0;
    _DAT_140c7de70 = 0x544e5645;
    _DAT_140c7deb4 = 0;
    DAT_140c7dec8 = 0;
    DAT_140c7ded0 = 0;
    _DAT_140c7dee0 = 0;
    _DAT_140c7dee8 = 0;
    _DAT_140c7deb8 = 0x544e5645;
    _DAT_140c7defc = 0;
    FUN_1407e4830(&DAT_140c7dde8,0,0x30);
    return &DAT_140c7dde0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140581350(void)

{
    FUN_140582460();
    FUN_140195d70(&DAT_140c7deb8);
    _DAT_140c7deb8 = 0;
    if (DAT_140c7dec8 != (longlong **)0x0) {
        *DAT_140c7dec8 = DAT_140c7ded0;
    }
    if (DAT_140c7ded0 != (longlong *)0x0) {
        *DAT_140c7ded0 = (longlong)DAT_140c7dec8;
    }
    DAT_140c7dec8 = (longlong **)0x0;
    DAT_140c7ded0 = (longlong *)0x0;
    FUN_140195d70(&DAT_140c7de70);
    _DAT_140c7de70 = 0;
    if (DAT_140c7de80 != (longlong **)0x0) {
        *DAT_140c7de80 = DAT_140c7de88;
    }
    if (DAT_140c7de88 != (longlong *)0x0) {
        *DAT_140c7de88 = (longlong)DAT_140c7de80;
    }
    _DAT_140c7de80 = ZEXT816(0);
    if (_DAT_140c7de60 != 0) {
        FUN_140590610(&DAT_140c7de50,*(undefined8 *)(DAT_140c7de58 + 8));
        *(longlong *)(DAT_140c7de58 + 0x10) = DAT_140c7de58;
        *(undefined8 *)(DAT_140c7de58 + 8) = 0;
        *(longlong *)(DAT_140c7de58 + 0x18) = DAT_140c7de58;
        _DAT_140c7de60 = 0;
    }
    FUN_14018b900(DAT_140c7de58,0);
    if (DAT_140c7de40 != 0) {
        (**(code **)(*(longlong *)(DAT_140c7de40 + -0x10) + 8))(DAT_140c7de40 + -0x10);
    }
    if (DAT_140c7de38 != 0) {
        (**(code **)(*(longlong *)(DAT_140c7de38 + -0x10) + 8))(DAT_140c7de38 + -0x10);
    }
    if (DAT_140c7de18 != 0) {
        (**(code **)(*(longlong *)(DAT_140c7de18 + -0x10) + 8))(DAT_140c7de18 + -0x10);
    }
    if (DAT_140c7dde0 != 0) {
        FUN_1401a4a00(&DAT_140c7dde0);
        return;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405814b0(void)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar6 = 0;
    uVar5 = 0;
    _DAT_140c7de28 = 1;
    if (DAT_140c7de30 == (longlong *)0x0) {
        plVar1 = (longlong *)FUN_14018b280(0x10);
        if (plVar1 == (longlong *)0x0) {
            DAT_140c7de30 = (longlong *)0x0;
        }
        else {
            plVar1[1] = 8;
            puVar2 = (undefined8 *)FUN_14018b280(0x30);
            DAT_140c7de30 = plVar1;
            if (puVar2 == (undefined8 *)0x0) {
                *plVar1 = 0x10;
            }
            else {
                *puVar2 = &PTR_FUN_140b5f110;
                *plVar1 = (longlong)(puVar2 + 2);
            }
        }
    }
    *(undefined4 *)*DAT_140c7de30 = 0;
    lVar3 = FUN_140200220(0x2f5);
    uVar4 = uVar6;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 4) = uVar4;
    lVar3 = FUN_140200220(0x2f6);
    uVar4 = uVar6;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 8) = uVar4;
    lVar3 = FUN_140200220(0x2f7);
    uVar4 = uVar6;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 0xc) = uVar4;
    lVar3 = FUN_140200220(0x2f8);
    uVar4 = uVar6;
    if (lVar3 != 0) {
        uVar4 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 0x10) = uVar4;
    lVar3 = FUN_140200220(0x2f9);
    if (lVar3 != 0) {
        uVar6 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 0x14) = uVar6;
    lVar3 = FUN_140200220(0x2fa);
    if (lVar3 != 0) {
        uVar5 = *(undefined4 *)(lVar3 + 4);
    }
    *(undefined4 *)(*DAT_140c7de30 + 0x18) = uVar5;
    *(undefined4 *)(*DAT_140c7de30 + 0x1c) = 0xffffffff;
    FUN_140581620();
    return 0;
}



void FUN_140581620(undefined8 param_1)

{
    undefined8 uVar1;

    uVar1 = FUN_14034bdd0(param_1,0x3ab6a);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140584ba0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140584bd0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140584c00,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140584f20,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405851e0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140585270,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405852f0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140585380,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140585410,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_1405856c0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140585970,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140586010,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405862c0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140586350,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_140586670,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405866f0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_1405867a0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140586ae0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140586e20,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140587180,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140587210,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140587500,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140587950,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140587c30,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140587f10,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140588210,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_1405885b0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_140588950,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_140588c20,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140588cc0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140588dc0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405890e0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589380,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589520,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589760,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589900,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589aa0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589d00,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140589f60,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058a570,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058a7d0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058a970,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058ac50,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058ae90,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058b030,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058b4e0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058b920,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058bc40,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058bf00,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058bf90,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058c010,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058c0a0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058c130,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058c3e0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058c690,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058cd30,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058cfe0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058d070,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058d390,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058d410,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058d4c0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058d800,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058db40,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058dea0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058df30,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058e220,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058e670,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058e950,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&DAT_14058ec50,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058ef20,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140001b70,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058efc0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058f0c0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058f150,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_14058f1d0,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058f260,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058f570,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058f600,&DAT_140c7dde0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_14058f690,&DAT_140c7dde0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140582460(void)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    ulonglong uVar4;

    uVar2 = DAT_140c7de20;
    uVar4 = 0;
    _DAT_140c7de28 = 1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
            if (lVar1 != 0) {
                FUN_14057b140(lVar1);
                FUN_14018b900(lVar1,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
    }
    plVar3 = DAT_140c7de30;
    DAT_140c7de20 = 0;
    if (DAT_140c7de30 != (longlong *)0x0) {
        lVar1 = *DAT_140c7de30;
        if (lVar1 != 0) {
            (***(code ***)(lVar1 + -0x10))(lVar1 + -0x10);
        }
        FUN_14018b900(plVar3,0);
    }
    DAT_140c7de30 = (longlong *)0x0;
    while (DAT_140c7dde0 != (longlong *)0x0) {
        (**(code **)(*DAT_140c7dde0 + 0x10))(DAT_140c7dde0,1);
    }
    if (DAT_140c7de80 != 0) {
        FUN_140195d70(&DAT_140c7de70);
    }
    if (DAT_140c7dec8 != 0) {
        FUN_140195d70(&DAT_140c7deb8);
        return;
    }
    return;
}



undefined8 FUN_140582560(undefined8 param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined4 uVar4;

    lVar2 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar2 == 0) {
        uVar4 = *(undefined4 *)(param_2 + 0x20);
        iVar1 = *(int *)(param_2 + 0x10);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        lVar2 = 0;
    }
    else {
        uVar4 = *(undefined4 *)(param_2 + 0x20);
        iVar1 = *(int *)(param_2 + 0x10);
        uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildResult",&DAT_140b009a0,lVar2,uVar3,
                  iVar1 + 1,uVar4);
    return 0;
}



undefined8 FUN_1405825e0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildFlags",&DAT_1409ea8cc,lVar1);
    }
    return 0;
}



undefined8 FUN_140582630(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(ulonglong *)(lVar1 + 0x1d8) = (ulonglong)*(ushort *)(param_2 + 0x20);
        *(ulonglong *)(lVar1 + 0x1e0) = (ulonglong)*(ushort *)(param_2 + 0x22);
        FUN_140581160(lVar1,param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildMemberChange",&DAT_1409ea3d4,lVar1);
    }
    return 0;
}



undefined8 FUN_1405826b0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x1fc) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(lVar1 + 0x200) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(lVar1 + 0x204) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(lVar1 + 0x208) = *(undefined4 *)(param_2 + 0x1c);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildPvp",&DAT_1409ea70c,lVar1);
    }
    return 0;
}



undefined8 FUN_140582720(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        FUN_14048fc60(lVar1 + 0x240,param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildPerkDeactivated",&DAT_1409ea7dc,
                      lVar1,*(undefined4 *)(param_2 + 0x10));
    }
    return 0;
}



undefined8 FUN_140582790(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        FUN_140590120(lVar1 + 0x338,param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildEventLogChange",&DAT_1409ea76c,lVar1
        );
    }
    return 0;
}



undefined8 FUN_1405827f0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x370) = *(undefined8 *)(param_2 + 0x10);
        *(undefined4 *)(lVar1 + 0x378) = *(undefined4 *)(param_2 + 0x18);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RecruitmentDemands",&DAT_1409eaa54,lVar1)
                ;
    }
    return 0;
}



undefined8 FUN_140582850(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x36c) = *(undefined4 *)(param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RecruitmentMinLevel",&DAT_1409eaa34,lVar1
        );
    }
    return 0;
}



undefined8 FUN_1405828a0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x368) = *(undefined4 *)(param_2 + 0x10);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildClassification",&DAT_1409eaa14,lVar1
        );
    }
    return 0;
}



void FUN_140582d30(longlong *param_1)

{
    longlong lVar1;

    lVar1 = param_1[7];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[5] != 0) {
        FUN_140590310(param_1 + 3,*(undefined8 *)(param_1[4] + 8));
        *(longlong *)(param_1[4] + 0x10) = param_1[4];
        *(undefined8 *)(param_1[4] + 8) = 0;
        *(longlong *)(param_1[4] + 0x18) = param_1[4];
        param_1[5] = 0;
    }
    FUN_14018b900(param_1[4],0);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    return;
}



longlong * FUN_140582dd0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar1 = *param_1;
    if (*param_2 == 0) {
        *param_1 = 0;
    }
    else {
        lVar2 = *(longlong *)(*param_2 + -8);
        puVar3 = (undefined8 *)FUN_14018b280(lVar2 * 2 + 0x12,0);
        puVar5 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = lVar2;
            puVar5 = puVar3;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,*param_2,lVar2 * 2);
        *(undefined2 *)(lVar2 * 2 + (longlong)puVar5) = 0;
        *param_1 = (longlong)puVar5;
    }
    puVar5 = (undefined8 *)0x0;
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[1];
    if (param_2[1] == 0) {
        param_1[1] = 0;
    }
    else {
        lVar2 = *(longlong *)(param_2[1] + -8);
        puVar4 = (undefined8 *)FUN_14018b280(lVar2 * 2 + 0x12,0);
        puVar3 = puVar5;
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_140b55060;
            puVar4[1] = lVar2;
            puVar3 = puVar4;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2[1],lVar2 * 2);
        *(undefined2 *)(lVar2 * 2 + (longlong)puVar3) = 0;
        param_1[1] = (longlong)puVar3;
    }
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    FUN_140590380(param_1 + 3,param_2 + 3);
    lVar1 = param_1[7];
    if (param_2[7] == 0) {
        param_1[7] = 0;
    }
    else {
        lVar2 = *(longlong *)(param_2[7] + -8);
        puVar3 = (undefined8 *)FUN_14018b280(lVar2 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = lVar2;
            puVar5 = puVar3;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,param_2[7],lVar2 * 2);
        *(undefined2 *)(lVar2 * 2 + (longlong)puVar5) = 0;
        param_1[7] = (longlong)puVar5;
    }
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    return param_1;
}



undefined8 FUN_1405838b0(undefined8 param_1,longlong param_2)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong local_res8;

    if (*(longlong *)(DAT_140c7de58 + 8) != 0) {
        lVar3 = *(longlong *)(DAT_140c7de58 + 8);
        local_res8 = DAT_140c7de58;
        do {
            if (*(ulonglong *)(lVar3 + 0x20) < *(ulonglong *)(param_2 + 8)) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
        if ((local_res8 != DAT_140c7de58) &&
            (*(ulonglong *)(local_res8 + 0x20) <= *(ulonglong *)(param_2 + 8))) goto LAB_140583903;
    }
    local_res8 = DAT_140c7de58;
    LAB_140583903:
    if (local_res8 != DAT_140c7de58) {
        psVar2 = *(short **)(param_2 + 0x10);
        lVar3 = *(longlong *)(local_res8 + 0x60);
        puVar6 = (undefined8 *)0x0;
        if (psVar2 == (short *)0x0) {
            *(undefined8 *)(local_res8 + 0x60) = 0;
        }
        else {
            sVar1 = *psVar2;
            puVar7 = puVar6;
            while (sVar1 != 0) {
                puVar7 = (undefined8 *)((longlong)puVar7 + 1);
                sVar1 = psVar2[(longlong)puVar7];
            }
            puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = puVar7;
                *puVar5 = &PTR_LAB_140b55060;
                puVar6 = puVar5;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6,psVar2,(longlong)puVar7 * 2);
            *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
            *(undefined8 **)(local_res8 + 0x60) = puVar6;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        lVar3 = DAT_140c65898;
        *(undefined4 *)(local_res8 + 0x68) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(local_res8 + 0x6c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(local_res8 + 0x70) = *(undefined4 *)(param_2 + 0x20);
        *(undefined8 *)(local_res8 + 0x74) = *(undefined8 *)(param_2 + 0x24);
        *(undefined4 *)(local_res8 + 0x7c) = *(undefined4 *)(param_2 + 0x2c);
        FUN_140427870(*(undefined8 *)(lVar3 + 0x7340),*(undefined8 *)(param_2 + 8));
    }
    return 0;
}



undefined8 FUN_140583a20(undefined8 param_1,short **param_2)

{
    short sVar1;
    undefined4 uVar2;
    longlong lVar3;
    short *psVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_30 = 0xfffffffe;
    local_28 = lVar3;
    if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar3);
    }
    puVar9 = *(undefined8 **)(lVar3 + 0x10);
    uVar6 = FUN_14005c1b0(lVar3,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar6;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    local_30 = FUN_1400578c0(lVar3);
    uVar2 = *(undefined4 *)(param_2 + 2);
    iVar5 = (*(code *)local_38[1])(&local_38);
    if (iVar5 != 0) {
        FUN_1400fafe0(&local_38,uVar2,&PTR_u_bTax_140c39558,4);
    }
    lVar3 = (longlong)DAT_140c7de38;
    psVar4 = *param_2;
    puVar9 = (undefined8 *)0x0;
    if (psVar4 == (short *)0x0) {
        DAT_140c7de38 = (undefined8 *)0x0;
    }
    else {
        sVar1 = *psVar4;
        puVar10 = puVar9;
        while (sVar1 != 0) {
            puVar10 = (undefined8 *)((longlong)puVar10 + 1);
            sVar1 = psVar4[(longlong)puVar10];
        }
        puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar10 * 2 + 0x12,0);
        puVar8 = puVar9;
        if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_LAB_140b55060;
            puVar7[1] = puVar10;
            puVar8 = puVar7;
        }
        puVar8 = puVar8 + 2;
        FUN_1407db590(puVar8,psVar4,(longlong)puVar10 * 2);
        *(undefined2 *)((longlong)puVar10 * 2 + (longlong)puVar8) = 0;
        DAT_140c7de38 = puVar8;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = (longlong)DAT_140c7de40;
    DAT_140c7de48 = param_2[3];
    psVar4 = param_2[1];
    if (psVar4 == (short *)0x0) {
        DAT_140c7de40 = (undefined8 *)0x0;
    }
    else {
        sVar1 = *psVar4;
        puVar10 = puVar9;
        while (sVar1 != 0) {
            puVar10 = (undefined8 *)((longlong)puVar10 + 1);
            sVar1 = psVar4[(longlong)puVar10];
        }
        puVar8 = (undefined8 *)FUN_14018b280((longlong)puVar10 * 2 + 0x12,0);
        if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &PTR_LAB_140b55060;
            puVar8[1] = puVar10;
            puVar9 = puVar8;
        }
        puVar9 = puVar9 + 2;
        FUN_1407db590(puVar9,psVar4,(longlong)puVar10 * 2);
        *(undefined2 *)((longlong)puVar10 * 2 + (longlong)puVar9) = 0;
        DAT_140c7de40 = puVar9;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildInvite",&DAT_140b009a8,param_2[1],
                  *param_2,*(undefined4 *)((longlong)param_2 + 0x14),local_30);
    local_38 = &PTR_FUN_140b56a08;
    if (local_28 != 0) {
        FUN_1400579e0();
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140583ca0(undefined8 param_1,uint *param_2)

{
    ulonglong uVar1;
    ulonglong *puVar2;
    short *psVar3;
    undefined *puVar4;
    undefined *puVar5;
    longlong lVar6;
    char *pcVar7;
    undefined *puVar8;
    char *pcVar9;
    char *pcVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    longlong lVar14;
    undefined *puVar15;
    uint uVar16;
    ulonglong uVar17;
    char *pcVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    bool bVar22;
    undefined local_78 [16];
    undefined local_68 [8];
    char *local_60;
    longlong local_58;
    undefined local_48 [8];
    undefined *local_40;
    longlong local_38;

    local_60 = (char *)FUN_14018b280(0x28);
    uVar20 = 0;
    local_58 = 0;
    *local_60 = '\0';
    *(undefined8 *)(local_60 + 8) = 0;
    *(char **)(local_60 + 0x10) = local_60;
    *(char **)(local_60 + 0x18) = local_60;
    local_40 = (undefined *)FUN_14018b280(0x28);
    local_38 = 0;
    *local_40 = 0;
    *(undefined8 *)(local_40 + 8) = 0;
    *(undefined **)(local_40 + 0x10) = local_40;
    *(undefined **)(local_40 + 0x18) = local_40;
    uVar17 = DAT_140c7de20;
    pcVar18 = local_60;
    uVar21 = uVar20;
    if (DAT_140c7de20 != 0) {
        do {
            bVar22 = true;
            uVar12 = **(ulonglong **)(DAT_140c7de18 + uVar21 * 8);
            pcVar10 = *(char **)(pcVar18 + 8);
            pcVar7 = pcVar18;
            while (pcVar10 != (char *)0x0) {
                bVar22 = uVar12 < *(ulonglong *)(pcVar10 + 0x20);
                pcVar7 = pcVar10;
                if (bVar22) {
                    pcVar10 = *(char **)(pcVar10 + 0x10);
                }
                else {
                    pcVar10 = *(char **)(pcVar10 + 0x18);
                }
            }
            pcVar10 = pcVar7;
            if (bVar22) {
                if (pcVar7 != *(char **)(pcVar18 + 0x10)) {
                    if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
                        pcVar10 = *(char **)(pcVar7 + 0x18);
                    }
                    else {
                        pcVar10 = *(char **)(pcVar7 + 0x10);
                        if (pcVar10 == (char *)0x0) {
                            pcVar10 = *(char **)(pcVar7 + 8);
                            pcVar9 = pcVar10;
                            if (pcVar7 == *(char **)(pcVar10 + 0x10)) {
                                do {
                                    pcVar10 = *(char **)(pcVar9 + 8);
                                    bVar22 = pcVar9 == *(char **)(pcVar10 + 0x10);
                                    pcVar9 = pcVar10;
                                } while (bVar22);
                            }
                        }
                        else {
                            for (pcVar9 = *(char **)(pcVar10 + 0x18); pcVar9 != (char *)0x0;
                                 pcVar9 = *(char **)(pcVar9 + 0x18)) {
                                pcVar10 = pcVar9;
                            }
                        }
                    }
                    goto LAB_140583ddd;
                }
                LAB_140583de7:
                if ((pcVar7 == pcVar18) || (uVar12 < *(ulonglong *)(pcVar7 + 0x20))) {
                    lVar6 = FUN_14018b280(0x28);
                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                        *(ulonglong *)(lVar6 + 0x20) = uVar12;
                    }
                    *(longlong *)(pcVar7 + 0x10) = lVar6;
                    if (pcVar7 == local_60) {
                        *(longlong *)(local_60 + 8) = lVar6;
                        *(longlong *)(local_60 + 0x18) = lVar6;
                    }
                    else if (pcVar7 == *(char **)(local_60 + 0x10)) {
                        *(longlong *)(local_60 + 0x10) = lVar6;
                    }
                }
                else {
                    lVar6 = FUN_14018b280(0x28);
                    if ((ulonglong *)(lVar6 + 0x20) != (ulonglong *)0x0) {
                        *(ulonglong *)(lVar6 + 0x20) = uVar12;
                    }
                    *(longlong *)(pcVar7 + 0x18) = lVar6;
                    if (pcVar7 == *(char **)(local_60 + 0x18)) {
                        *(longlong *)(local_60 + 0x18) = lVar6;
                    }
                }
                *(char **)(lVar6 + 8) = pcVar7;
                *(undefined8 *)(lVar6 + 0x10) = 0;
                *(undefined8 *)(lVar6 + 0x18) = 0;
                FUN_1400081c0(lVar6,local_60 + 8);
                local_58 = local_58 + 1;
                pcVar18 = local_60;
            }
            else {
                LAB_140583ddd:
                if (*(ulonglong *)(pcVar10 + 0x20) < uVar12) goto LAB_140583de7;
            }
            uVar21 = uVar21 + 1;
        } while (uVar21 < uVar17);
    }
    uVar17 = uVar20;
    if (*param_2 != 0) {
        do {
            uVar16 = (uint)uVar17;
            lVar14 = uVar17 * 0x298;
            lVar6 = FUN_140007910(local_68,*(longlong *)(param_2 + 2) + lVar14);
            if (lVar6 == 0) {
                FUN_140007810(local_48,local_78,*(longlong *)(param_2 + 2) + lVar14);
            }
            FUN_1405848f0(uVar16 == param_2[1],*(longlong *)(param_2 + 2) + lVar14,
                          uVar17 * 0x50 + *(longlong *)(param_2 + 4),
                          uVar17 * 0x38 + *(longlong *)(param_2 + 6),uVar16 == param_2[1]);
            uVar17 = (ulonglong)(uVar16 + 1);
            pcVar18 = local_60;
        } while (uVar16 + 1 < *param_2);
    }
    pcVar10 = *(char **)(pcVar18 + 0x10);
    while (pcVar10 != pcVar18) {
        FUN_140584b00();
        pcVar7 = *(char **)(pcVar10 + 0x18);
        if (pcVar7 == (char *)0x0) {
            pcVar7 = *(char **)(pcVar10 + 8);
            if (pcVar10 == *(char **)(pcVar7 + 0x18)) {
                do {
                    pcVar10 = pcVar7;
                    pcVar7 = *(char **)(pcVar10 + 8);
                } while (pcVar10 == *(char **)(pcVar7 + 0x18));
            }
            if (*(char **)(pcVar10 + 0x18) != pcVar7) {
                pcVar10 = pcVar7;
            }
        }
        else {
            for (pcVar9 = *(char **)(pcVar7 + 0x10); pcVar10 = pcVar7, pcVar9 != (char *)0x0;
                 pcVar9 = *(char **)(pcVar9 + 0x10)) {
                pcVar7 = pcVar9;
            }
        }
    }
    _DAT_140c7de28 = 0;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildChange","");
    puVar5 = local_40;
    puVar15 = *(undefined **)(local_40 + 0x10);
    lVar6 = DAT_140c7de18;
    uVar17 = DAT_140c7de20;
    do {
        if (puVar15 == puVar5) {
            if (local_38 != 0) {
                lVar6 = *(longlong *)(local_40 + 8);
                while (lVar6 != 0) {
                    FUN_1400083b0(local_48,*(undefined8 *)(lVar6 + 0x18));
                    lVar14 = *(longlong *)(lVar6 + 0x10);
                    FUN_14018b900(lVar6,0);
                    lVar6 = lVar14;
                }
                *(undefined **)(local_40 + 0x10) = local_40;
                *(undefined8 *)(local_40 + 8) = 0;
                *(undefined **)(local_40 + 0x18) = local_40;
                local_38 = 0;
            }
            FUN_14018b900(local_40,0);
            if (local_58 != 0) {
                lVar6 = *(longlong *)(local_60 + 8);
                while (lVar6 != 0) {
                    FUN_1400083b0(local_68,*(undefined8 *)(lVar6 + 0x18));
                    lVar14 = *(longlong *)(lVar6 + 0x10);
                    FUN_14018b900(lVar6,0);
                    lVar6 = lVar14;
                }
                *(char **)(local_60 + 0x10) = local_60;
                *(undefined8 *)(local_60 + 8) = 0;
                *(char **)(local_60 + 0x18) = local_60;
                local_58 = 0;
            }
            FUN_14018b900(local_60,0);
            return 0;
        }
        uVar21 = *(ulonglong *)(puVar15 + 0x20);
        uVar12 = uVar20;
        uVar13 = uVar20;
        uVar19 = uVar17;
        if (uVar17 != 0) {
            do {
                uVar11 = (uVar19 - uVar13 >> 1) + uVar13;
                uVar1 = **(ulonglong **)(lVar6 + uVar11 * 8);
                uVar12 = uVar11;
                if (uVar21 == uVar1) break;
                uVar12 = uVar13;
                if (uVar21 <= uVar1) {
                    uVar12 = uVar11 + 1;
                    uVar11 = uVar19;
                }
                uVar13 = uVar12;
                uVar19 = uVar11;
            } while (uVar12 < uVar11);
        }
        if ((((uVar12 < uVar17) && (puVar2 = *(ulonglong **)(lVar6 + uVar12 * 8), uVar21 == *puVar2)) &&
             (puVar2 != (ulonglong *)0x0)) &&
            ((psVar3 = (short *)puVar2[0x44], psVar3 != (short *)0x0 && (uVar21 = uVar20, *psVar3 != 0)))
                ) {
            do {
                uVar21 = uVar21 + 1;
            } while (psVar3[uVar21] != 0);
            if (uVar21 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildMessageOfTheDay",&DAT_1409ea7b4,
                              puVar2);
                uVar17 = DAT_140c7de20;
                lVar6 = DAT_140c7de18;
            }
        }
        puVar8 = *(undefined **)(puVar15 + 0x18);
        if (puVar8 == (undefined *)0x0) {
            puVar8 = *(undefined **)(puVar15 + 8);
            if (puVar15 == *(undefined **)(puVar8 + 0x18)) {
                do {
                    puVar15 = puVar8;
                    puVar8 = *(undefined **)(puVar15 + 8);
                } while (puVar15 == *(undefined **)(puVar8 + 0x18));
            }
            if (*(undefined **)(puVar15 + 0x18) != puVar8) {
                puVar15 = puVar8;
            }
        }
        else {
            for (puVar4 = *(undefined **)(puVar8 + 0x10); puVar15 = puVar8, puVar4 != (undefined *)0x0;
                 puVar4 = *(undefined **)(puVar4 + 0x10)) {
                puVar8 = puVar4;
            }
        }
    } while( true );
}



undefined8 FUN_140584190(undefined8 param_1,longlong param_2)

{
    short *psVar1;
    longlong lVar2;
    longlong lVar3;

    FUN_1405848f0(param_1,param_2,param_2 + 0x298,param_2 + 0x2e8,*(undefined4 *)(param_2 + 800));
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildChange","");
    lVar2 = FUN_1405845f0();
    if (((lVar2 != 0) && (psVar1 = *(short **)(lVar2 + 0x220), psVar1 != (short *)0x0)) &&
        (lVar3 = 0, *psVar1 != 0)) {
        do {
            lVar3 = lVar3 + 1;
        } while (psVar1[lVar3] != 0);
        if (lVar3 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildMessageOfTheDay",&DAT_1409ea7b4,
                          lVar2);
        }
    }
    return 0;
}



undefined8 FUN_140584240(undefined8 param_1,undefined4 *param_2)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0(DAT_140c65898,*param_2);
    if (lVar3 != 0) {
        cVar1 = *(char *)(param_2 + 1);
        lVar2 = *(longlong *)(param_2 + 2);
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        if ((cVar1 != '\0') && (lVar2 != 0)) {
            FUN_1403705b0(lVar3 + 0xa0);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitMemberOfGuildChange",&DAT_1409edca4,
                      *param_2);
    }
    return 0;
}



undefined8 FUN_1405842c0(undefined8 param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar3 = DAT_140c7de20;
    uVar5 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            plVar2 = *(longlong **)(DAT_140c7de18 + uVar5 * 8);
            iVar1 = *(int *)(plVar2 + 0x60);
            uVar4 = (uint)(*(longlong *)(param_2 + 8) == *plVar2);
            *(uint *)(plVar2 + 0x60) = uVar4;
            if ((uVar4 != 0) && (iVar1 == 0)) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildNameplateChange",&DAT_1409ea6a4,
                              *(undefined8 *)(DAT_140c7de18 + uVar5 * 8));
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
    }
    return 0;
}



void FUN_140584360(undefined8 param_1,int param_2,short *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    longlong lVar1;
    undefined4 uVar2;
    bool bVar3;
    undefined auStack232 [32];
    short *local_c8;
    undefined4 local_c0;
    undefined4 local_b8;
    undefined4 local_a8 [2];
    int local_a0;
    short *local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    lVar1 = 0;
    uVar2 = 0;
    if (*param_3 != 0) {
        do {
            lVar1 = lVar1 + 1;
        } while (param_3[lVar1] != 0);
        if (lVar1 != 0) {
            FUN_1407e4830(local_a8,0,0x68);
            local_88 = param_5;
            local_80 = param_6;
            if (param_2 == 1) {
                bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x46;
                LAB_140584415:
                if (bVar3) {
                    uVar2 = *(undefined4 *)(DAT_140c65898 + 0x6640);
                }
            }
            else {
                if (param_2 == 3) {
                    bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x47;
                    goto LAB_140584415;
                }
                if (param_2 == 7) {
                    bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x54;
                    goto LAB_140584415;
                }
            }
            local_a8[0] = uVar2;
            local_a0 = param_2;
            local_98 = param_3;
            local_90 = param_4;
            FUN_1403f4900(DAT_140c65898,0x481,local_a8);
            goto LAB_140584467;
        }
    }
    local_b8 = 3;
    local_c0 = 0;
    local_c8 = param_3;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildResult",&DAT_140b009a0,0);
    LAB_140584467:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



void FUN_140584490(undefined8 param_1,int param_2,undefined4 *param_3,short *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
    longlong lVar1;
    undefined4 uVar2;
    bool bVar3;
    undefined auStack248 [32];
    short *local_d8;
    undefined4 local_d0;
    undefined4 local_c8;
    undefined4 local_b8 [2];
    int local_b0;
    short *local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
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
    undefined4 local_58;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    lVar1 = 0;
    uVar2 = 0;
    if (*param_4 != 0) {
        do {
            lVar1 = lVar1 + 1;
        } while (param_4[lVar1] != 0);
        if (lVar1 != 0) {
            FUN_1407e4830(local_b8,0,0x68);
            local_88 = *param_3;
            uStack132 = param_3[1];
            uStack128 = param_3[2];
            uStack124 = param_3[3];
            local_78 = param_3[4];
            uStack116 = param_3[5];
            uStack112 = param_3[6];
            uStack108 = param_3[7];
            local_a0 = param_5;
            local_68 = param_3[8];
            uStack100 = param_3[9];
            uStack96 = param_3[10];
            uStack92 = param_3[0xb];
            local_98 = param_6;
            local_90 = param_7;
            local_58 = param_8;
            if (param_2 == 1) {
                bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x46;
                LAB_14058457a:
                if (bVar3) {
                    uVar2 = *(undefined4 *)(DAT_140c65898 + 0x6640);
                }
            }
            else {
                if (param_2 == 3) {
                    bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x47;
                    goto LAB_14058457a;
                }
                if (param_2 == 7) {
                    bVar3 = *(int *)(DAT_140c65898 + 0x6644) == 0x54;
                    goto LAB_14058457a;
                }
            }
            local_b8[0] = uVar2;
            local_b0 = param_2;
            local_a8 = param_4;
            FUN_1403f4900(DAT_140c65898,0x481,local_b8);
            goto LAB_1405845cc;
        }
    }
    local_c8 = 3;
    local_d0 = 0;
    local_d8 = param_4;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GuildResult",&DAT_140b009a0,0);
    LAB_1405845cc:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
    return;
}



ulonglong * FUN_1405845f0(undefined8 param_1,ulonglong param_2)

{
    ulonglong uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar3 = 0;
    uVar4 = uVar3;
    uVar5 = DAT_140c7de20;
    if (DAT_140c7de20 != 0) {
        do {
            uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
            uVar1 = **(ulonglong **)(DAT_140c7de18 + uVar3 * 8);
            if (param_2 == uVar1) break;
            uVar6 = uVar3;
            if (param_2 <= uVar1) {
                uVar4 = uVar3 + 1;
                uVar6 = uVar5;
            }
            uVar3 = uVar4;
            uVar4 = uVar3;
            uVar5 = uVar6;
        } while (uVar3 < uVar6);
    }
    if ((uVar3 < DAT_140c7de20) &&
        (puVar2 = *(ulonglong **)(DAT_140c7de18 + uVar3 * 8), param_2 == *puVar2)) {
        return puVar2;
    }
    return (ulonglong *)0x0;
}



longlong FUN_140584660(void)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                return lVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    return 0;
}



longlong FUN_140584690(void)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                return lVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    return 0;
}



longlong FUN_1405846c0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == param_2) {
                return lVar1;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    return 0;
}



undefined8 FUN_1405846f0(void)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar3 = FUN_140404300(DAT_140c658a0);
    uVar2 = DAT_140c7de20;
    lVar1 = DAT_140c7de18;
    if (lVar3 == 0) {
        return 0;
    }
    uVar5 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar4 = FUN_140580040(*(undefined8 *)(lVar1 + uVar5 * 8));
            if (lVar4 == lVar3) {
                return *(undefined8 *)(lVar1 + uVar5 * 8);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
    }
    return 0;
}



void FUN_140584770(undefined8 param_1)

{
    FUN_1405847a0(param_1,0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RecruitmentUnsubscribed",&DAT_1409d0eb7);
    return;
}



void FUN_1405847a0(longlong param_1,int param_2)

{
    int local_res10 [6];
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (param_2 != 0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
            return;
        }
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_140584770;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x90,120000,local_28,4);
    }
    local_res10[0] = param_2;
    FUN_1403f4740(DAT_140c65898,0x76f,local_res10);
    return;
}



undefined8 FUN_140584840(undefined8 param_1,undefined8 param_2)

{
    undefined8 local_38;
    undefined8 uStack48;
    undefined4 local_28;
    undefined4 uStack36;
    undefined8 *puStack32;
    undefined *local_18;
    undefined8 local_10;

    if (DAT_140c7dec8 != 0) {
        return 0;
    }
    puStack32 = &DAT_140c7dde0;
    local_28 = 0;
    local_10 = 0;
    local_18 = &LAB_140584810;
    FUN_140195960(&DAT_140c7deb8,1000,&local_28,4);
    local_28 = *(undefined4 *)(DAT_140c635f0 + 0x1680);
    local_38 = CONCAT44(uStack36,local_28);
    uStack48 = param_2;
    puStack32 = (undefined8 *)param_2;
    FUN_1403f4740(DAT_140c65898,0x76e,&local_38);
    return 1;
}



ulonglong FUN_1405848f0(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                        undefined4 param_5)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    uVar3 = 0;
    uVar7 = uVar3;
    if (DAT_140c7de20 != 0) {
        uVar9 = uVar3;
        uVar8 = DAT_140c7de20;
        do {
            uVar6 = (uVar8 - uVar9 >> 1) + uVar9;
            uVar1 = **(ulonglong **)(DAT_140c7de18 + uVar6 * 8);
            uVar7 = uVar6;
            if (*param_2 == uVar1) break;
            if (*param_2 <= uVar1) {
                uVar9 = uVar6 + 1;
                uVar6 = uVar8;
            }
            uVar7 = uVar9;
            uVar8 = uVar6;
        } while (uVar9 < uVar6);
    }
    if (uVar7 < DAT_140c7de20) {
        lVar2 = uVar7 * 8;
        lVar4 = DAT_140c7de18;
        uVar9 = DAT_140c7de20;
        if (*param_2 != **(ulonglong **)(lVar2 + DAT_140c7de18)) {
            lVar4 = FUN_14018b280(0x380,0);
            if (lVar4 != 0) {
                uVar3 = FUN_14057ae60(lVar4);
            }
            uVar9 = DAT_140c7de20 + 1;
            lVar5 = FUN_14018db00(DAT_140c7de18,uVar9,8);
            FUN_1407db590(lVar5 + 8 + lVar2,DAT_140c7de18 + lVar2,(DAT_140c7de20 - uVar7) * 8);
            *(ulonglong *)(lVar2 + lVar5) = uVar3;
            lVar4 = DAT_140c7de18;
            if ((DAT_140c7de18 != lVar5) &&
                (FUN_1407db590(lVar5,DAT_140c7de18,lVar2), lVar4 = lVar5, DAT_140c7de18 != 0)) {
                (**(code **)(*(longlong *)(DAT_140c7de18 + -0x10) + 8))();
            }
        }
    }
    else {
        lVar2 = FUN_14018b280(0x380,0);
        if (lVar2 != 0) {
            uVar3 = FUN_14057ae60(lVar2);
        }
        uVar7 = DAT_140c7de20;
        uVar9 = DAT_140c7de20 + 1;
        lVar2 = FUN_14018db00(DAT_140c7de18,uVar9,8);
        *(ulonglong *)(lVar2 + uVar7 * 8) = uVar3;
        lVar4 = DAT_140c7de18;
        if ((DAT_140c7de18 != lVar2) &&
            (FUN_1407db590(lVar2,DAT_140c7de18,DAT_140c7de20 * 8), lVar4 = lVar2, DAT_140c7de18 != 0)) {
            (**(code **)(*(longlong *)(DAT_140c7de18 + -0x10) + 8))();
        }
    }
    DAT_140c7de20 = uVar9;
    DAT_140c7de18 = lVar4;
    FUN_14057b840(*(undefined8 *)(DAT_140c7de18 + uVar7 * 8),param_2,param_3,param_4,param_5);
    return uVar7;
}



void FUN_140584b00(undefined8 param_1,ulonglong param_2)

{
    ulonglong uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar3 = 0;
    uVar5 = uVar3;
    uVar6 = DAT_140c7de20;
    if (DAT_140c7de20 != 0) {
        do {
            uVar4 = (uVar6 - uVar3 >> 1) + uVar3;
            uVar1 = **(ulonglong **)(DAT_140c7de18 + uVar4 * 8);
            uVar5 = uVar4;
            if (param_2 == uVar1) break;
            if (param_2 <= uVar1) {
                uVar3 = uVar4 + 1;
                uVar4 = uVar6;
            }
            uVar5 = uVar3;
            uVar6 = uVar4;
        } while (uVar3 < uVar4);
    }
    if ((uVar5 < DAT_140c7de20) &&
        (puVar2 = *(ulonglong **)(DAT_140c7de18 + uVar5 * 8), param_2 == *puVar2)) {
        if (puVar2 != (ulonglong *)0x0) {
            FUN_14057b140(puVar2);
            FUN_14018b900(puVar2,0);
        }
        FUN_140007270(&DAT_140c7de18,uVar5);
    }
    return;
}



void FUN_140584ba0(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 1;
    FUN_1403f4740(DAT_140c65898,0x490,local_res18);
    return;
}



void FUN_140584bd0(void)

{
    undefined4 local_res18 [4];

    local_res18[0] = 0;
    FUN_1403f4740(DAT_140c65898,0x490,local_res18);
    return;
}



void FUN_140584c00(longlong param_1)

{
    short sVar1;
    short *psVar2;
    undefined2 *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 in_stack_ffffffffffffff68;
    undefined local_88 [8];
    longlong local_80;
    undefined2 *local_78;
    longlong local_70;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    lVar9 = 0;
    local_80 = 0;
    local_70 = 0;
    lVar7 = lVar9;
    do {
        psVar2 = &DAT_140b1f312 + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar2 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar6 = lVar7 + 1;
    if (uVar6 < 0x7fffffffffffffff) {
        lVar5 = uVar6 * 2;
        local_80 = FUN_14018b280(lVar5,0);
        local_70 = lVar5 + local_80;
    }
    lVar5 = local_80;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_80,&DAT_140b1f310,lVar7);
    local_78 = (undefined2 *)(lVar7 + lVar5);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_60 = (undefined2 *)0x0;
    local_50 = (undefined2 *)0x0;
    sVar1 = *psVar2;
    lVar7 = lVar9;
    while (sVar1 != 0) {
        lVar7 = lVar7 + 1;
        sVar1 = psVar2[lVar7];
    }
    lVar7 = lVar7 * 2 >> 1;
    uVar6 = lVar7 + 1;
    if (uVar6 < 0x7fffffffffffffff) {
        local_60 = (undefined2 *)FUN_14018b280(uVar6 * 2,0);
        local_50 = local_60 + uVar6;
    }
    puVar3 = local_60;
    FUN_1407db590(local_60,psVar2,lVar7 * 2);
    local_58 = puVar3 + lVar7;
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    uVar6 = CONCAT62((int6)((ulonglong)in_stack_ffffffffffffff68 >> 0x10),0x5c);
    FUN_14018f570(local_48,local_68,local_88,0x22,uVar6);
    if (puVar3 != (undefined2 *)0x0) {
        FUN_14018b900(puVar3,0);
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    uVar8 = local_38 - local_40 >> 5;
    lVar7 = local_40;
    if (uVar8 < 2) {
        uVar4 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar4,uVar6 & 0xffffffff00000000,0);
    }
    else {
        local_60 = (undefined2 *)FUN_14018b280(0x10);
        local_50 = local_60 + 8;
        if (local_60 != (undefined2 *)0x0) {
            *local_60 = 0;
        }
        uVar6 = 1;
        local_58 = local_60;
        if (1 < uVar8) {
            do {
                FUN_14001c310(local_68,*(undefined8 *)(uVar6 * 0x20 + 8 + local_40),
                              *(undefined8 *)(uVar6 * 0x20 + 0x10 + local_40));
                lVar5 = lVar9;
                if (uVar6 != uVar8 - 1) {
                    do {
                        psVar2 = &DAT_1409f2e9e + lVar5;
                        lVar5 = lVar5 + 1;
                    } while (*psVar2 != 0);
                    FUN_14001c310(local_68,&DAT_1409f2e9c,&DAT_1409f2e9c + lVar5 * 2);
                }
                uVar6 = (ulonglong)((int)uVar6 + 1);
            } while (uVar6 < uVar8);
        }
        puVar3 = local_60;
        FUN_14034bdd0();
        FUN_14034bdd0();
        FUN_14034bdd0();
        FUN_140584360();
        if (puVar3 != (undefined2 *)0x0) {
            FUN_14018b900(puVar3,0);
        }
    }
    for (; lVar7 != local_38; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return;
}



void FUN_1405851e0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e7b0(lVar1);
                        return;
                    }
                    uVar3 = 0x1b9ab;
                    goto LAB_140585217;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x1bdc8;
    LAB_140585217:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_140585270(longlong param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    uVar1 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            param_1 = *(longlong *)(DAT_140c7de18 + uVar1 * 8);
            if (*(int *)(param_1 + 0x10) == 1) {
                if (param_1 != 0) {
                    FUN_14057e8d0();
                    return;
                }
                break;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < DAT_140c7de20);
    }
    uVar2 = FUN_14034bdd0(param_1,0x1bdc8);
    FUN_140003890(DAT_140c658a0,2,0,uVar2,0,0);
    return;
}



void FUN_1405852f0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e950(lVar1);
                        return;
                    }
                    uVar3 = 0x1b9ac;
                    goto LAB_140585327;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x1bdc8;
    LAB_140585327:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_140585380(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e9d0(lVar1);
                        return;
                    }
                    uVar3 = 0x1b9ad;
                    goto LAB_1405853b7;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x1bdc8;
    LAB_1405853b7:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_1405862c0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057ec50(lVar1);
                        return;
                    }
                    uVar3 = 0x1b9b1;
                    goto LAB_1405862f7;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x1bdc8;
    LAB_1405862f7:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_1405866f0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    int iVar6;

    uVar4 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar2 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
            if (*(int *)(lVar2 + 0x10) == 1) {
                if (lVar2 != 0) {
                    iVar1 = *(int *)(lVar2 + 0x10);
                    iVar3 = FUN_14018e820(*(undefined8 *)(param_1 + 8));
                    iVar6 = 200;
                    if (iVar1 == 1) {
                        iVar6 = 100;
                    }
                    FUN_14057ee50(lVar2,iVar6 + iVar3 + -1);
                    return;
                }
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < DAT_140c7de20);
    }
    uVar5 = FUN_14034bdd0(param_1,0x1bdc8);
    FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
    return;
}



void FUN_140587180(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057f8a0(lVar1);
                        return;
                    }
                    uVar3 = 0x49d90;
                    goto LAB_1405871b7;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x1bdc8;
    LAB_1405871b7:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_140588cc0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
            if (*(int *)(lVar1 + 0x10) == 1) {
                if (lVar1 != 0) {
                    uVar3 = FUN_14034bdd0(param_1,0x4fc7e);
                    iVar2 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar3);
                    if (iVar2 == 0) {
                        FUN_14057fd80(lVar1,*(uint *)(lVar1 + 0x14) | 1);
                        return;
                    }
                    uVar3 = FUN_14034bdd0();
                    iVar2 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar3);
                    if (iVar2 == 0) {
                        FUN_14057fd80(lVar1,*(uint *)(lVar1 + 0x14) & 0xfffffffe);
                        return;
                    }
                }
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < DAT_140c7de20);
    }
    uVar3 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_140588dc0(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    undefined2 *puVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 in_stack_ffffffffffffff68;
    undefined local_88 [8];
    longlong local_80;
    undefined2 *local_78;
    longlong local_70;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    uVar10 = 0;
    local_80 = 0;
    local_70 = 0;
    uVar5 = uVar10;
    do {
        psVar2 = &DAT_140b1f39a + uVar5;
        uVar5 = uVar5 + 1;
    } while (*psVar2 != 0);
    lVar9 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar9 + 1;
    if (uVar5 < 0x7fffffffffffffff) {
        lVar3 = uVar5 * 2;
        local_80 = FUN_14018b280(lVar3,0);
        local_70 = lVar3 + local_80;
    }
    lVar3 = local_80;
    lVar9 = lVar9 * 2;
    FUN_1407db590(local_80,&DAT_140b1f398,lVar9);
    local_78 = (undefined2 *)(lVar9 + lVar3);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_60 = (undefined2 *)0x0;
    local_50 = (undefined2 *)0x0;
    sVar1 = *psVar2;
    uVar5 = uVar10;
    while (sVar1 != 0) {
        uVar5 = uVar5 + 1;
        sVar1 = psVar2[uVar5];
    }
    lVar9 = (longlong)(uVar5 * 2) >> 1;
    uVar5 = lVar9 + 1;
    if (uVar5 < 0x7fffffffffffffff) {
        local_60 = (undefined2 *)FUN_14018b280(uVar5 * 2,0);
        local_50 = local_60 + uVar5;
    }
    puVar4 = local_60;
    FUN_1407db590(local_60,psVar2,lVar9 * 2);
    local_58 = puVar4 + lVar9;
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    uVar5 = CONCAT62((int6)((ulonglong)in_stack_ffffffffffffff68 >> 0x10),0x5c);
    FUN_14018f570(local_48,local_68,local_88,0x22,uVar5);
    if (puVar4 != (undefined2 *)0x0) {
        FUN_14018b900(puVar4,0);
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    uVar8 = local_38 - local_40 >> 5;
    lVar9 = local_40;
    if (uVar8 == 0) {
        uVar6 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar6,uVar5 & 0xffffffff00000000,0);
    }
    else {
        local_60 = (undefined2 *)FUN_14018b280(0x10);
        local_50 = local_60 + 8;
        if (local_60 != (undefined2 *)0x0) {
            *local_60 = 0;
        }
        local_58 = local_60;
        if (uVar8 != 0) {
            uVar5 = uVar10;
            do {
                FUN_14001c310(local_68,*(undefined8 *)(uVar5 * 0x20 + 8 + local_40),
                              *(undefined8 *)(uVar5 * 0x20 + 0x10 + local_40));
                uVar7 = uVar10;
                if (uVar5 != uVar8 - 1) {
                    do {
                        psVar2 = &DAT_1409f2ede + uVar7;
                        uVar7 = uVar7 + 1;
                    } while (*psVar2 != 0);
                    FUN_14001c310(local_68,&DAT_1409f2edc,&DAT_1409f2edc + uVar7 * 2);
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < uVar8);
        }
        puVar4 = local_60;
        FUN_14034bdd0();
        FUN_14034bdd0();
        FUN_14034bdd0();
        FUN_140584360();
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
    }
    for (; lVar9 != local_38; lVar9 = lVar9 + 0x20) {
        if (*(longlong *)(lVar9 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar9 + 8),0);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return;
}



void FUN_1405890e0(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar9;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar9 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar8 = lVar5;
    do {
        psVar2 = &DAT_140b1f35a + lVar8;
        lVar8 = lVar8 + 1;
    } while (*psVar2 != 0);
    lVar8 = lVar8 * 2 >> 1;
    uVar7 = lVar8 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar3 = uVar7 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_70,&DAT_140b1f358,lVar8);
    local_68 = (undefined2 *)(lVar8 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar2[lVar5];
    }
    lVar8 = lVar5 * 2 >> 1;
    uVar7 = lVar8 + 1;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar5 = uVar7 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = lVar5 + local_50;
    }
    lVar5 = local_50;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_50,psVar2,lVar8);
    local_48 = (undefined2 *)(lVar8 + lVar5);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar9,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    uVar7 = local_28 - local_30 >> 5;
    if ((uVar7 == 0) || (lVar8 = FUN_1405846f0(), lVar8 == 0)) {
        uVar6 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar6,0,0);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
        goto LAB_140589340;
    }
    lVar5 = local_30;
    if (uVar7 < 2) {
        LAB_1405892f5:
        uVar6 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar6,0,0);
    }
    else {
        uVar6 = FUN_14034bdd0();
        iVar4 = FUN_14018e2c0(*(undefined8 *)(local_30 + 0x28),uVar6);
        if (iVar4 != 0) goto LAB_1405892f5;
        FUN_14057e730(lVar8);
    }
    for (; lVar5 != local_28; lVar5 = lVar5 + 0x20) {
        if (*(longlong *)(lVar5 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar5 + 8),0);
        }
    }
    LAB_140589340:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_140589380(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong local_res18;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_68;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if ((local_90 != local_88) && (local_70 != local_68)) {
        local_res18 = local_90;
        uVar6 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar6 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar6 == *puVar1) &&
                (iVar5 = (**(code **)(lVar2 + 0x30))(&local_res18,puVar1 + 2), uVar4 = DAT_140c7de20,
                 lVar3 = DAT_140c7de18, iVar5 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) &&
                    ((uVar6 = puVar1[3], uVar6 != 0 && (uVar9 = 0, DAT_140c7de20 != 0)))) goto LAB_140589450;
                break;
            }
        }
    }
    goto LAB_140589485;
    while (uVar9 = uVar9 + 1, uVar9 < uVar4) {
        LAB_140589450:
        uVar7 = FUN_140580040(*(undefined8 *)(lVar3 + uVar9 * 8));
        if (uVar7 == uVar6) {
            lVar2 = *(longlong *)(lVar3 + uVar9 * 8);
            if (lVar2 != 0) {
                FUN_14057e7b0(lVar2,local_70);
                goto LAB_1405894b1;
            }
            break;
        }
    }
    LAB_140589485:
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    LAB_1405894b1:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140589520(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar8;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar5;
    do {
        psVar3 = &DAT_140b1f37a + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140b1f378,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar7 = lVar5 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = lVar5 + local_50;
    }
    lVar5 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar3,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar5);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar8,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if ((local_28 - local_30 >> 5 == 0) || (lVar7 = FUN_1405846f0(), lVar7 == 0)) {
        uVar6 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar6,0,0);
        for (lVar7 = local_30; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
            if (*(longlong *)(lVar7 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 8),0);
            }
        }
    }
    else {
        FUN_14057e8d0(lVar7);
        for (lVar7 = local_30; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
            if (*(longlong *)(lVar7 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 8),0);
            }
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_140589760(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong local_res18;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_68;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if ((local_90 != local_88) && (local_70 != local_68)) {
        local_res18 = local_90;
        uVar6 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar6 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar6 == *puVar1) &&
                (iVar5 = (**(code **)(lVar2 + 0x30))(&local_res18,puVar1 + 2), uVar4 = DAT_140c7de20,
                 lVar3 = DAT_140c7de18, iVar5 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) &&
                    ((uVar6 = puVar1[3], uVar6 != 0 && (uVar9 = 0, DAT_140c7de20 != 0)))) goto LAB_140589830;
                break;
            }
        }
    }
    goto LAB_140589865;
    while (uVar9 = uVar9 + 1, uVar9 < uVar4) {
        LAB_140589830:
        uVar7 = FUN_140580040(*(undefined8 *)(lVar3 + uVar9 * 8));
        if (uVar7 == uVar6) {
            lVar2 = *(longlong *)(lVar3 + uVar9 * 8);
            if (lVar2 != 0) {
                FUN_14057e950(lVar2,local_70);
                goto LAB_140589891;
            }
            break;
        }
    }
    LAB_140589865:
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    LAB_140589891:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140589900(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong local_res18;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_68;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if ((local_90 != local_88) && (local_70 != local_68)) {
        local_res18 = local_90;
        uVar6 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar6 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar6 == *puVar1) &&
                (iVar5 = (**(code **)(lVar2 + 0x30))(&local_res18,puVar1 + 2), uVar4 = DAT_140c7de20,
                 lVar3 = DAT_140c7de18, iVar5 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) &&
                    ((uVar6 = puVar1[3], uVar6 != 0 && (uVar9 = 0, DAT_140c7de20 != 0)))) goto LAB_1405899d0;
                break;
            }
        }
    }
    goto LAB_140589a05;
    while (uVar9 = uVar9 + 1, uVar9 < uVar4) {
        LAB_1405899d0:
        uVar7 = FUN_140580040(*(undefined8 *)(lVar3 + uVar9 * 8));
        if (uVar7 == uVar6) {
            lVar2 = *(longlong *)(lVar3 + uVar9 * 8);
            if (lVar2 != 0) {
                FUN_14057e9d0(lVar2,local_70);
                goto LAB_140589a31;
            }
            break;
        }
    }
    LAB_140589a05:
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    LAB_140589a31:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140589aa0(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar9;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar9 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar6 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar8 = lVar6;
    do {
        psVar3 = &DAT_140b1f36a + lVar8;
        lVar8 = lVar8 + 1;
    } while (*psVar3 != 0);
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_70,&DAT_140b1f368,lVar8);
    local_68 = (undefined2 *)(lVar8 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar6 = lVar6 + 1;
        sVar2 = psVar3[lVar6];
    }
    lVar8 = lVar6 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar6,0);
        local_40 = lVar6 + local_50;
    }
    lVar6 = local_50;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_50,psVar3,lVar8);
    local_48 = (undefined2 *)(lVar8 + lVar6);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar9,0x5c));
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if (((ulonglong)(local_28 - local_30 >> 5) < 3) || (lVar8 = FUN_1405846f0(), lVar8 == 0)) {
        uVar7 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar7,0,0);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
        if (local_30 == 0) {
            return;
        }
    }
    else {
        uVar7 = *(undefined8 *)(local_30 + 0x48);
        iVar5 = FUN_14018e820(*(undefined8 *)(local_30 + 0x28));
        FUN_14057ea50(lVar8,iVar5 + -1,uVar7);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
    }
    FUN_14018b900(local_30,0);
    return;
}



void FUN_140589d00(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar9;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar9 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar6 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar8 = lVar6;
    do {
        psVar3 = &DAT_140b1f49a + lVar8;
        lVar8 = lVar8 + 1;
    } while (*psVar3 != 0);
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_70,&DAT_140b1f498,lVar8);
    local_68 = (undefined2 *)(lVar8 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar6 = lVar6 + 1;
        sVar2 = psVar3[lVar6];
    }
    lVar8 = lVar6 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar6,0);
        local_40 = lVar6 + local_50;
    }
    lVar6 = local_50;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_50,psVar3,lVar8);
    local_48 = (undefined2 *)(lVar8 + lVar6);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar9,0x5c));
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if (((ulonglong)(local_28 - local_30 >> 5) < 2) || (lVar8 = FUN_1405846f0(), lVar8 == 0)) {
        uVar7 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar7,0,0);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
        if (local_30 == 0) {
            return;
        }
    }
    else {
        iVar5 = FUN_14018e820(*(undefined8 *)(local_30 + 0x28));
        FUN_14057ead0(lVar8,iVar5 + -1);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
    }
    FUN_14018b900(local_30,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140589f60(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    short sVar3;
    undefined4 uVar4;
    uint uVar5;
    int iVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined4 *puVar10;
    short *psVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined2 *puVar14;
    longlong lVar15;
    uint uVar16;
    undefined8 *puVar17;
    uint uVar18;
    longlong lVar19;
    undefined8 *puVar20;
    longlong lVar21;
    uint local_res8;
    undefined8 *local_res20;
    undefined4 in_stack_fffffffffffffe78;
    undefined2 uVar22;
    undefined local_178 [8];
    longlong local_170;
    undefined2 *local_168;
    longlong local_160;
    undefined local_158 [8];
    longlong local_150;
    undefined2 *local_148;
    longlong local_140;
    undefined local_138 [8];
    longlong local_130;
    longlong local_128;
    undefined **local_118 [24];
    undefined local_58 [16];
    undefined2 *local_48;

    uVar22 = (undefined2)((uint)in_stack_fffffffffffffe78 >> 0x10);
    puVar13 = (undefined8 *)0x0;
    local_150 = 0;
    local_140 = 0;
    puVar7 = puVar13;
    do {
        psVar11 = &DAT_140b1f48a + (longlong)puVar7;
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
    } while (*psVar11 != 0);
    lVar19 = (longlong)puVar7 * 2 >> 1;
    uVar1 = lVar19 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar15 = uVar1 * 2;
        local_150 = FUN_14018b280(lVar15,0);
        local_140 = lVar15 + local_150;
    }
    lVar15 = local_150;
    lVar19 = lVar19 * 2;
    FUN_1407db590(local_150,&DAT_140b1f488,lVar19);
    local_148 = (undefined2 *)(lVar19 + lVar15);
    if (local_148 != (undefined2 *)0x0) {
        *local_148 = 0;
    }
    psVar11 = *(short **)(param_1 + 8);
    local_170 = 0;
    local_160 = 0;
    sVar3 = *psVar11;
    puVar7 = puVar13;
    while (sVar3 != 0) {
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        sVar3 = psVar11[(longlong)puVar7];
    }
    lVar19 = (longlong)puVar7 * 2 >> 1;
    uVar1 = lVar19 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar21 = uVar1 * 2;
        local_170 = FUN_14018b280(lVar21,0);
        local_160 = lVar21 + local_170;
    }
    lVar21 = local_170;
    lVar19 = lVar19 * 2;
    FUN_1407db590(local_170,psVar11,lVar19);
    local_168 = (undefined2 *)(lVar19 + lVar21);
    if (local_168 != (undefined2 *)0x0) {
        *local_168 = 0;
    }
    FUN_14018f570(local_138,local_178,local_158,0x22,CONCAT22(uVar22,0x5c));
    if (lVar21 != 0) {
        FUN_14018b900(lVar21,0);
    }
    if (lVar15 != 0) {
        FUN_14018b900(lVar15,0);
    }
    lVar21 = local_128;
    lVar15 = local_130;
    lVar19 = lVar15;
    if ((ulonglong)(local_128 - local_130 >> 5) < 3) {
        LAB_14058a222:
        puVar7 = (undefined8 *)0x1;
        local_res8 = 0;
        local_res20 = (undefined8 *)0x1;
        if (DAT_140c63838 == (code *)0x0) {
            puVar17 = puVar13;
            if ((_DAT_140c63bb0 == 0) &&
                (iVar6 = FUN_1402021c0(), puVar17 = (undefined8 *)0x0, -1 < iVar6)) {
                uVar5 = (**(code **)(*DAT_140c648c8 + 0x28))();
                goto LAB_14058a27f;
            }
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_GuildPermission_140a6a5c8,DAT_140c63858);
            LAB_14058a27f:
            puVar17 = puVar13;
            puVar20 = puVar13;
            if (uVar5 != 0) {
                do {
                    puVar17 = (undefined8 *)0x0;
                    uVar18 = (uint)puVar20;
                    lVar19 = FUN_140202480();
                    uVar16 = *(uint *)(lVar19 + 0x1c);
                    if ((uVar16 == 0) || ((uVar16 & 4) != 0)) {
                        if ((int)puVar7 == 0) {
                            if (puVar13 != (undefined8 *)0x0) {
                                puVar17 = (undefined8 *)puVar13[-1];
                            }
                            lVar19 = 0;
                            do {
                                psVar11 = &DAT_140b1f4ba + lVar19;
                                lVar19 = lVar19 + 1;
                            } while (*psVar11 != 0);
                            puVar20 = (undefined8 *)FUN_14018d140(puVar13,lVar19 + (longlong)puVar17);
                            FUN_1407db590((longlong)puVar20 + (longlong)puVar17 * 2,&DAT_140b1f4b8,lVar19 * 2);
                            lVar15 = 0;
                            *(undefined2 *)((longlong)puVar20 + (lVar19 + (longlong)puVar17) * 2) = 0;
                            if ((puVar13 != puVar20) && (puVar13 != (undefined8 *)0x0)) {
                                (**(code **)(puVar13[-2] + 8))();
                            }
                            psVar11 = (short *)FUN_14034bdd0();
                            puVar13 = puVar20;
                            puVar7 = local_res20;
                            uVar18 = local_res8;
                            if (psVar11 != (short *)0x0) {
                                if (puVar20 != (undefined8 *)0x0) {
                                    lVar15 = puVar20[-1];
                                }
                                lVar19 = 0;
                                sVar3 = *psVar11;
                                while (sVar3 != 0) {
                                    lVar19 = lVar19 + 1;
                                    sVar3 = psVar11[lVar19];
                                }
                                puVar13 = (undefined8 *)FUN_14018d140(puVar20,lVar19 + lVar15);
                                FUN_1407db590((longlong)puVar13 + lVar15 * 2,psVar11,lVar19 * 2);
                                *(undefined2 *)((longlong)puVar13 + (lVar19 + lVar15) * 2) = 0;
                                if ((puVar20 != puVar13) && (puVar20 != (undefined8 *)0x0)) {
                                    (**(code **)(puVar20[-2] + 8))();
                                }
                            }
                        }
                        else {
                            psVar11 = (short *)FUN_14034bdd0(uVar16,*(undefined4 *)(lVar19 + 0x18));
                            puVar7 = puVar17;
                            if (psVar11 != (short *)0x0) {
                                sVar3 = *psVar11;
                                puVar20 = puVar17;
                                while (sVar3 != 0) {
                                    puVar20 = (undefined8 *)((longlong)puVar20 + 1);
                                    sVar3 = psVar11[(longlong)puVar20];
                                }
                                puVar12 = (undefined8 *)FUN_14018b280((longlong)puVar20 * 2 + 0x12,0);
                                if (puVar12 != (undefined8 *)0x0) {
                                    puVar12[1] = puVar20;
                                    *puVar12 = &PTR_LAB_140b55060;
                                    puVar7 = puVar12;
                                }
                                puVar7 = puVar7 + 2;
                                FUN_1407db590(puVar7,psVar11,(longlong)puVar20 * 2);
                                *(undefined2 *)((longlong)puVar20 * 2 + (longlong)puVar7) = 0;
                                uVar18 = local_res8;
                            }
                            if (puVar13 != (undefined8 *)0x0) {
                                (**(code **)(puVar13[-2] + 8))();
                            }
                            local_res20 = (undefined8 *)0x0;
                            puVar13 = puVar7;
                            puVar7 = puVar17;
                        }
                    }
                    local_res8 = uVar18 + 1;
                    puVar17 = puVar13;
                    puVar20 = (undefined8 *)(ulonglong)local_res8;
                    lVar19 = local_130;
                    lVar21 = local_128;
                } while (local_res8 < uVar5);
            }
        }
        uVar9 = 0;
        FUN_1400b7090(local_118,0x1b9b0);
        local_118[0] = &PTR_FUN_140b69230;
        local_48 = (undefined2 *)0x0;
        local_58 = ZEXT816(0);
        puVar14 = (undefined2 *)FUN_14018b280(0x10);
        local_58 = CONCAT88(puVar14,puVar14);
        local_48 = puVar14 + 8;
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        lVar15 = FUN_14018b280(0x60);
        if (lVar15 != 0) {
            uVar9 = FUN_1404ddb40(lVar15,puVar17);
        }
        FUN_1400b7480(local_118,uVar9);
        lVar15 = FUN_1400b7660(local_118);
        FUN_140003890(DAT_140c658a0,2,0,*(undefined8 *)(lVar15 + 8),0,0);
        if (local_58._0_8_ != 0) {
            FUN_14018b900(local_58._0_8_,0);
        }
        FUN_1400b7390(local_118);
        lVar15 = lVar19;
        if (puVar17 != (undefined8 *)0x0) {
            (**(code **)(puVar17[-2] + 8))(puVar17 + -2);
        }
    }
    else {
        lVar8 = FUN_1405846f0();
        if (lVar8 != 0) {
            uVar9 = *(undefined8 *)(lVar15 + 0x48);
            uVar5 = FUN_1402023d0();
            puVar7 = puVar13;
            if (uVar5 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c63bb0 == 0) && (iVar6 = FUN_1402021c0(), -1 < iVar6)) {
                            (**(code **)(*DAT_140c648c8 + 0x20))(DAT_140c648c8,puVar7);
                        }
                    }
                    else {
                        (*DAT_140c63848)(&PTR_u_GuildPermission_140a6a5c8,puVar7,DAT_140c63858);
                    }
                    FUN_14034bdd0();
                    iVar6 = FUN_14018e2c0(uVar9);
                } while ((iVar6 != 0) &&
                         (uVar16 = (int)puVar7 + 1, puVar7 = (undefined8 *)(ulonglong)uVar16, uVar16 < uVar5)
                );
                if (0x1f < (uint)puVar7) goto LAB_14058a222;
            }
            iVar6 = FUN_14018e820(*(undefined8 *)(lVar15 + 0x28));
            if (((ulonglong)(longlong)(iVar6 + -1) < 10) &&
                (lVar2 = lVar8 + ((longlong)(iVar6 + -1) * 5 + 3) * 8, lVar2 != 0)) {
                puVar10 = (undefined4 *)FUN_140202480(puVar7);
                uVar5 = *(uint *)(lVar2 + 8);
                uVar4 = *puVar10;
                iVar6 = FUN_14018e820(*(undefined8 *)(lVar15 + 0x28));
                FUN_14057eb50(lVar8,iVar6 + -1,(ulonglong)uVar5 ^ 1 << ((byte)uVar4 & 0x3f));
                for (; lVar19 != lVar21; lVar19 = lVar19 + 0x20) {
                    if (*(longlong *)(lVar19 + 8) != 0) {
                        FUN_14018b900(*(longlong *)(lVar19 + 8),0);
                    }
                }
                goto LAB_14058a53e;
            }
            goto LAB_14058a222;
        }
        uVar9 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar9,0,0);
    }
    for (; lVar19 != lVar21; lVar19 = lVar19 + 0x20) {
        if (*(longlong *)(lVar19 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar19 + 8),0);
        }
    }
    if (lVar15 == 0) {
        return;
    }
    LAB_14058a53e:
    FUN_14018b900(lVar15,0);
    return;
}



void FUN_14058a570(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar9;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar9 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar6 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar8 = lVar6;
    do {
        psVar3 = &DAT_140b1f4aa + lVar8;
        lVar8 = lVar8 + 1;
    } while (*psVar3 != 0);
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_70,&DAT_140b1f4a8,lVar8);
    local_68 = (undefined2 *)(lVar8 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar6 = lVar6 + 1;
        sVar2 = psVar3[lVar6];
    }
    lVar8 = lVar6 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar6,0);
        local_40 = lVar6 + local_50;
    }
    lVar6 = local_50;
    lVar8 = lVar8 * 2;
    FUN_1407db590(local_50,psVar3,lVar8);
    local_48 = (undefined2 *)(lVar8 + lVar6);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar9,0x5c));
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if (((ulonglong)(local_28 - local_30 >> 5) < 3) || (lVar8 = FUN_1405846f0(), lVar8 == 0)) {
        uVar7 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar7,0,0);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
        if (local_30 == 0) {
            return;
        }
    }
    else {
        uVar7 = *(undefined8 *)(local_30 + 0x48);
        iVar5 = FUN_14018e820(*(undefined8 *)(local_30 + 0x28));
        FUN_14057ebd0(lVar8,iVar5 + -1,uVar7);
        for (lVar8 = local_30; lVar8 != local_28; lVar8 = lVar8 + 0x20) {
            if (*(longlong *)(lVar8 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar8 + 8),0);
            }
        }
    }
    FUN_14018b900(local_30,0);
    return;
}



void FUN_14058a7d0(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong local_res18;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_68;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if ((local_90 != local_88) && (local_70 != local_68)) {
        local_res18 = local_90;
        uVar6 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar6 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar6 == *puVar1) &&
                (iVar5 = (**(code **)(lVar2 + 0x30))(&local_res18,puVar1 + 2), uVar4 = DAT_140c7de20,
                 lVar3 = DAT_140c7de18, iVar5 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) &&
                    ((uVar6 = puVar1[3], uVar6 != 0 && (uVar9 = 0, DAT_140c7de20 != 0)))) goto LAB_14058a8a0;
                break;
            }
        }
    }
    goto LAB_14058a8d5;
    while (uVar9 = uVar9 + 1, uVar9 < uVar4) {
        LAB_14058a8a0:
        uVar7 = FUN_140580040(*(undefined8 *)(lVar3 + uVar9 * 8));
        if (uVar7 == uVar6) {
            lVar2 = *(longlong *)(lVar3 + uVar9 * 8);
            if (lVar2 != 0) {
                FUN_14057ec50(lVar2,local_70);
                goto LAB_14058a901;
            }
            break;
        }
    }
    LAB_14058a8d5:
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    LAB_14058a901:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_14058a970(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar11;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar11 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar10 = lVar5;
    do {
        psVar2 = &DAT_140b1f45a + lVar10;
        lVar10 = lVar10 + 1;
    } while (*psVar2 != 0);
    lVar10 = lVar10 * 2 >> 1;
    uVar9 = lVar10 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar6 = uVar9 * 2;
        local_70 = FUN_14018b280(lVar6,0);
        local_60 = local_70 + lVar6;
    }
    lVar6 = local_70;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_70,&DAT_140b1f458,lVar10);
    local_68 = (undefined2 *)(lVar6 + lVar10);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar2[lVar5];
    }
    lVar10 = lVar5 * 2 >> 1;
    uVar9 = lVar10 + 1;
    if (uVar9 < 0x7fffffffffffffff) {
        lVar5 = uVar9 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = local_50 + lVar5;
    }
    lVar5 = local_50;
    lVar10 = lVar10 * 2;
    FUN_1407db590(local_50,psVar2,lVar10);
    local_48 = (undefined2 *)(lVar5 + lVar10);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar11,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    lVar5 = local_30;
    uVar9 = local_28 - local_30 >> 5;
    lVar10 = lVar5;
    if ((1 < uVar9) && (lVar6 = FUN_1405846f0(), lVar6 != 0)) {
        if (uVar9 == 2) {
            uVar8 = *(undefined8 *)(lVar5 + 0x28);
            uVar7 = FUN_14034bdd0();
            iVar4 = FUN_14018e2c0(uVar8,uVar7);
            if (iVar4 == 0) {
                FUN_14057ed50(lVar6,1);
                goto joined_r0x00014058abf6;
            }
            uVar7 = FUN_14034bdd0();
            iVar4 = FUN_14018e2c0(uVar8,uVar7);
            if (iVar4 == 0) {
                FUN_14057ed50(lVar6,0);
                goto joined_r0x00014058abf6;
            }
        }
        else if (uVar9 == 3) {
            uVar8 = FUN_1400eec00(local_38,lVar5 + 0x20,&DAT_1409f300c);
            FUN_1400422a0(local_58,uVar8,lVar5 + 0x40);
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            lVar3 = local_50;
            FUN_14057ecd0(lVar6,local_50);
            if (lVar3 != 0) {
                FUN_14018b900(lVar3,0);
            }
            goto joined_r0x00014058abf6;
        }
    }
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    joined_r0x00014058abf6:
    for (; lVar10 != local_28; lVar10 = lVar10 + 0x20) {
        if (*(longlong *)(lVar10 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar10 + 8),0);
        }
    }
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    return;
}



void FUN_14058ac50(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar8;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar5;
    do {
        psVar3 = &DAT_140b1f47a + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140b1f478,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar7 = lVar5 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = lVar5 + local_50;
    }
    lVar5 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar3,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar5);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,local_78,0x22,CONCAT22(uVar8,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if ((local_28 - local_30 >> 5 == 0) || (lVar7 = FUN_1405846f0(), lVar7 == 0)) {
        uVar6 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar6,0,0);
        for (lVar7 = local_30; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
            if (*(longlong *)(lVar7 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 8),0);
            }
        }
    }
    else {
        FUN_14057edd0(lVar7);
        for (lVar7 = local_30; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
            if (*(longlong *)(lVar7 + 8) != 0) {
                FUN_14018b900(*(longlong *)(lVar7 + 8),0);
            }
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_14058ae90(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    longlong local_res18;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_68;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if ((local_90 != local_88) && (local_70 != local_68)) {
        local_res18 = local_90;
        uVar6 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar6 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar6 == *puVar1) &&
                (iVar5 = (**(code **)(lVar2 + 0x30))(&local_res18,puVar1 + 2), uVar4 = DAT_140c7de20,
                 lVar3 = DAT_140c7de18, iVar5 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) &&
                    ((uVar6 = puVar1[3], uVar6 != 0 && (uVar9 = 0, DAT_140c7de20 != 0)))) goto LAB_14058af60;
                break;
            }
        }
    }
    goto LAB_14058af95;
    while (uVar9 = uVar9 + 1, uVar9 < uVar4) {
        LAB_14058af60:
        uVar7 = FUN_140580040(*(undefined8 *)(lVar3 + uVar9 * 8));
        if (uVar7 == uVar6) {
            lVar2 = *(longlong *)(lVar3 + uVar9 * 8);
            if (lVar2 != 0) {
                FUN_14057f8a0(lVar2,local_70);
                goto LAB_14058afc1;
            }
            break;
        }
    }
    LAB_14058af95:
    uVar8 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar8,0,0);
    LAB_14058afc1:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_14058b030(longlong param_1)

{
    short sVar1;
    short *psVar2;
    ulonglong *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined2 *puVar6;
    ulonglong uVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    undefined2 *puVar10;
    undefined2 *puVar11;
    int iVar12;
    ulonglong uVar13;
    undefined8 uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    longlong lVar17;
    undefined2 *local_res8;
    undefined4 in_stack_ffffffffffffff58;
    undefined2 uVar18;
    undefined4 local_98;
    undefined4 uStack148;
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined local_78 [8];
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined8 local_58;
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined *local_38;
    undefined8 local_30;

    uVar18 = (undefined2)((uint)in_stack_ffffffffffffff58 >> 0x10);
    uVar16 = 0;
    local_90 = (undefined2 *)0x0;
    local_80 = (undefined2 *)0x0;
    uVar13 = uVar16;
    do {
        psVar2 = &DAT_140b1f46a + uVar13;
        uVar13 = uVar13 + 1;
    } while (*psVar2 != 0);
    lVar17 = (longlong)(uVar13 * 2) >> 1;
    uVar13 = lVar17 + 1;
    if (uVar13 < 0x7fffffffffffffff) {
        local_90 = (undefined2 *)FUN_14018b280(uVar13 * 2,0);
        local_80 = local_90 + uVar13;
    }
    puVar6 = local_90;
    FUN_1407db590(local_90,&DAT_140b1f468,lVar17 * 2);
    local_88 = puVar6 + lVar17;
    if (local_88 != (undefined2 *)0x0) {
        *local_88 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_70 = 0;
    local_60 = 0;
    sVar1 = *psVar2;
    uVar13 = uVar16;
    while (sVar1 != 0) {
        uVar13 = uVar13 + 1;
        sVar1 = psVar2[uVar13];
    }
    lVar17 = (longlong)(uVar13 * 2) >> 1;
    uVar13 = lVar17 + 1;
    if (uVar13 < 0x7fffffffffffffff) {
        lVar5 = uVar13 * 2;
        local_70 = FUN_14018b280(lVar5,0);
        local_60 = lVar5 + local_70;
    }
    lVar5 = local_70;
    lVar17 = lVar17 * 2;
    FUN_1407db590(local_70,psVar2,lVar17);
    local_68 = (undefined2 *)(lVar17 + lVar5);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018f570(&local_58,local_78,&local_98,0x22,CONCAT22(uVar18,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (puVar6 != (undefined2 *)0x0) {
        FUN_14018b900(puVar6,0);
    }
    puVar11 = local_48;
    puVar9 = local_50;
    puVar6 = puVar9;
    if (((longlong)local_48 - (longlong)local_50 & 0xffffffffffffffe0U) == 0) {
        uVar14 = FUN_14034bdd0();
        FUN_140003890(DAT_140c658a0,2,0,uVar14,0,0);
        goto joined_r0x00014058b3ac;
    }
    local_50 = (undefined2 *)FUN_14018b280(0x10);
    local_40 = local_50 + 8;
    if (local_50 != (undefined2 *)0x0) {
        *local_50 = 0;
    }
    local_48 = local_50;
    local_90 = (undefined2 *)FUN_14018b280(0x10);
    local_80 = local_90 + 8;
    if (local_90 != (undefined2 *)0x0) {
        *local_90 = 0;
    }
    local_70 = 0;
    local_60 = 0;
    uVar13 = uVar16;
    do {
        psVar2 = &DAT_140b1f42a + uVar13;
        uVar13 = uVar13 + 1;
    } while (*psVar2 != 0);
    lVar17 = (longlong)(uVar13 * 2) >> 1;
    uVar13 = lVar17 + 1;
    local_88 = local_90;
    if (uVar13 < 0x7fffffffffffffff) {
        lVar5 = uVar13 * 2;
        local_70 = FUN_14018b280(lVar5,0);
        local_60 = lVar5 + local_70;
    }
    lVar5 = local_70;
    lVar17 = lVar17 * 2;
    FUN_1407db590(local_70,&DAT_140b1f428,lVar17);
    local_68 = (undefined2 *)(lVar17 + lVar5);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    FUN_14018fbd0(param_1,&local_58,&local_98,local_78);
    if (lVar5 != 0) {
        FUN_14018b900(lVar5);
    }
    puVar10 = local_50;
    lVar17 = DAT_140c658a0;
    local_res8 = local_50;
    uVar13 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res8);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar17 + 0x20) + (uVar13 % *(ulonglong *)(lVar17 + 0x18)) * 8);
         puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar13 == *puVar3) &&
            (iVar12 = (**(code **)(lVar17 + 0x30))(&local_res8,puVar3 + 2), uVar7 = DAT_140c7de20,
             lVar5 = DAT_140c7de18, iVar12 != 0)) {
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                ((uVar13 = puVar3[3], uVar13 != 0 && (DAT_140c7de20 != 0)))) goto LAB_14058b340;
            break;
        }
    }
    goto LAB_14058b35d;
    while (uVar16 = uVar16 + 1, uVar16 < uVar7) {
        LAB_14058b340:
        uVar15 = FUN_140580040();
        puVar8 = local_90;
        if (uVar15 == uVar13) {
            puVar4 = *(undefined8 **)(lVar5 + uVar16 * 8);
            if (puVar4 != (undefined8 *)0x0) {
                if (((longlong)local_88 - (longlong)local_90 & 0xfffffffffffffffeU) == 0) {
                    local_30 = 0x1b;
                    local_98 = *(undefined4 *)(DAT_140c635f0 + 0x1680);
                    local_50 = (undefined2 *)*puVar4;
                    local_58 = CONCAT44(uStack148,local_98);
                    local_38 = &DAT_1409f2fdc;
                    local_48 = (undefined2 *)0x0;
                    local_40 = (undefined2 *)0x0;
                    FUN_1403f4740(DAT_140c65898,0x4b1,&local_58);
                }
                else {
                    FUN_14057fc80(puVar4,local_90);
                }
                if (puVar8 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar8,0);
                }
                if (puVar10 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar10,0);
                }
                for (; puVar6 != puVar11; puVar6 = puVar6 + 0x10) {
                    if (*(longlong *)(puVar6 + 4) != 0) {
                        FUN_14018b900(*(longlong *)(puVar6 + 4),0);
                    }
                }
                goto LAB_14058b3c9;
            }
            break;
        }
    }
    LAB_14058b35d:
    uVar14 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar14,0,0);
    if (local_90 != (undefined2 *)0x0) {
        FUN_14018b900(local_90,0);
    }
    if (puVar10 != (undefined2 *)0x0) {
        FUN_14018b900(puVar10,0);
    }
    joined_r0x00014058b3ac:
    for (; puVar6 != puVar11; puVar6 = puVar6 + 0x10) {
        if (*(longlong *)(puVar6 + 4) != 0) {
            FUN_14018b900(*(longlong *)(puVar6 + 4),0);
        }
    }
    LAB_14058b3c9:
    if (puVar9 != (undefined2 *)0x0) {
        FUN_14018b900(puVar9,0);
    }
    return;
}



void FUN_14058bf00(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e7b0(lVar1);
                        return;
                    }
                    uVar3 = 0x44fd3;
                    goto LAB_14058bf37;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x44fd1;
    LAB_14058bf37:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058bf90(longlong param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    uVar1 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            param_1 = *(longlong *)(DAT_140c7de18 + uVar1 * 8);
            if (*(int *)(param_1 + 0x10) == 3) {
                if (param_1 != 0) {
                    FUN_14057e8d0();
                    return;
                }
                break;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < DAT_140c7de20);
    }
    uVar2 = FUN_14034bdd0(param_1,0x44fd1);
    FUN_140003890(DAT_140c658a0,2,0,uVar2,0,0);
    return;
}



void FUN_14058c010(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e950(lVar1);
                        return;
                    }
                    uVar3 = 0x44fd4;
                    goto LAB_14058c047;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x44fd1;
    LAB_14058c047:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058c0a0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057e9d0(lVar1);
                        return;
                    }
                    uVar3 = 0x44fd5;
                    goto LAB_14058c0d7;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x44fd1;
    LAB_14058c0d7:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058cfe0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057ec50(lVar1);
                        return;
                    }
                    uVar3 = 0x44fd7;
                    goto LAB_14058d017;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x44fd1;
    LAB_14058d017:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058d410(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    int iVar6;

    uVar4 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar2 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
            if (*(int *)(lVar2 + 0x10) == 3) {
                if (lVar2 != 0) {
                    iVar1 = *(int *)(lVar2 + 0x10);
                    iVar3 = FUN_14018e820(*(undefined8 *)(param_1 + 8));
                    iVar6 = 200;
                    if (iVar1 == 1) {
                        iVar6 = 100;
                    }
                    FUN_14057ee50(lVar2,iVar6 + iVar3 + -1);
                    return;
                }
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < DAT_140c7de20);
    }
    uVar5 = FUN_14034bdd0(param_1,0x44fd1);
    FUN_140003890(DAT_140c658a0,2,0,uVar5,0,0);
    return;
}



void FUN_14058dea0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    uVar2 = 0;
    lVar1 = param_1;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (lVar1 != 0) {
                    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) !=
                        0) {
                        FUN_14057f8a0(lVar1);
                        return;
                    }
                    uVar3 = 0x49d92;
                    goto LAB_14058ded7;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            lVar1 = param_1;
        } while (uVar2 < DAT_140c7de20);
    }
    uVar3 = 0x44fd1;
    LAB_14058ded7:
    uVar3 = FUN_14034bdd0(lVar1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058efc0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    if ((*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) & 0xfffffffffffffffeU) == 0) {
        uVar3 = FUN_14034bdd0(param_1,0x996d0);
        FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
        return;
    }
    uVar4 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar4 * 8);
            if (*(int *)(lVar1 + 0x10) == 7) {
                if (lVar1 != 0) {
                    uVar3 = FUN_14034bdd0(uVar4,0x20d55);
                    iVar2 = FUN_14018e2c0(*(undefined8 *)(param_1 + 8),uVar3);
                    if (iVar2 == 0) {
                        FUN_14057e730(lVar1);
                        return;
                    }
                }
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < DAT_140c7de20);
    }
    uVar3 = FUN_14034bdd0();
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058f0c0(ulonglong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    plVar1 = (longlong *)(param_1 + 8);
    if ((*(longlong *)(param_1 + 0x10) - *plVar1 & 0xfffffffffffffffeU) == 0) {
        uVar3 = 0x996d7;
    }
    else {
        param_1 = 0;
        uVar2 = param_1;
        if (DAT_140c7de20 != 0) {
            do {
                param_1 = *(ulonglong *)(DAT_140c7de18 + uVar2 * 8);
                if (*(int *)(param_1 + 0x10) == 7) {
                    if (param_1 != 0) {
                        FUN_14057e7b0(param_1,*plVar1);
                        return;
                    }
                    break;
                }
                param_1 = uVar2 + 1;
                uVar2 = param_1;
            } while (param_1 < DAT_140c7de20);
        }
        uVar3 = 0x99713;
    }
    uVar3 = FUN_14034bdd0(param_1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



void FUN_14058f1d0(ulonglong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined8 uVar3;

    plVar1 = (longlong *)(param_1 + 8);
    if ((*(longlong *)(param_1 + 0x10) - *plVar1 & 0xfffffffffffffffeU) == 0) {
        uVar3 = 0x996dc;
    }
    else {
        param_1 = 0;
        uVar2 = param_1;
        if (DAT_140c7de20 != 0) {
            do {
                param_1 = *(ulonglong *)(DAT_140c7de18 + uVar2 * 8);
                if (*(int *)(param_1 + 0x10) == 7) {
                    if (param_1 != 0) {
                        FUN_14057ec50(param_1,*plVar1);
                        return;
                    }
                    break;
                }
                param_1 = uVar2 + 1;
                uVar2 = param_1;
            } while (param_1 < DAT_140c7de20);
        }
        uVar3 = 0x99713;
    }
    uVar3 = FUN_14034bdd0(param_1,uVar3);
    FUN_140003890(DAT_140c658a0,2,0,uVar3,0,0);
    return;
}



undefined8 FUN_14058f720(longlong param_1,undefined8 param_2,longlong **param_3)

{
    ulonglong *puVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    longlong **pplVar5;

    uVar4 = (**(code **)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar4 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x20))(param_2,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    pplVar5 = (longlong **)(puVar1 + 3);
    if (pplVar5 == (longlong **)0x0) {
        return 0;
    }
    if ((param_3 != (longlong **)0x0) && (plVar2 = *pplVar5, *param_3 != plVar2)) {
        if (plVar2 != (longlong *)0x0) {
            (**(code **)*plVar2)();
        }
        if (*param_3 != (longlong *)0x0) {
            (**(code **)(**param_3 + 8))();
        }
        *param_3 = *pplVar5;
    }
    return 1;
}



longlong FUN_14058f7e0(longlong param_1,ulonglong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8 [2];
    longlong local_res18 [2];
    ulonglong local_58;
    undefined4 local_50;
    undefined4 uStack76;
    undefined4 uStack72;
    undefined4 uStack68;
    undefined4 local_40;
    undefined4 uStack60;
    undefined4 uStack56;
    undefined4 uStack52;
    undefined4 local_30;
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 uStack36;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8[0] = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(ulonglong *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8[0] = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8[0] == lVar1) || (*param_2 < *(ulonglong *)(local_res8[0] + 0x20))) {
        local_50 = 0;
        uStack76 = 0;
        uStack72 = 0;
        uStack68 = 0;
        local_58 = *param_2;
        local_40 = 0;
        uStack60 = 0;
        uStack56 = 0;
        uStack52 = 0;
        local_30 = 0;
        uStack44 = 0;
        uStack40 = 0;
        uStack36 = 0;
        local_20 = 0;
        uStack28 = 0;
        uStack24 = 0;
        uStack20 = 0;
        FUN_14058ff30(param_1,local_res18,local_res8,&local_58);
        local_res8[0] = local_res18[0];
    }
    return local_res8[0] + 0x28;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14058f8a0(longlong param_1,ulonglong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack280 [32];
    undefined local_f8 [8];
    longlong local_f0;
    undefined local_e8 [24];
    undefined local_d0 [8];
    undefined *local_c8;
    longlong local_c0;
    longlong local_b0;
    ulonglong local_88;
    undefined local_80 [88];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    lVar1 = *(longlong *)(param_1 + 8);
    lVar4 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(ulonglong *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar4 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((lVar4 == lVar1) || (*param_2 < *(ulonglong *)(lVar4 + 0x20))) {
        local_e8._0_16_ = ZEXT816(0);
        local_c8 = (undefined *)FUN_14018b280(0x28);
        local_c0 = 0;
        *local_c8 = 0;
        *(undefined8 *)(local_c8 + 8) = 0;
        *(undefined **)(local_c8 + 0x10) = local_c8;
        *(undefined **)(local_c8 + 0x18) = local_c8;
        local_88 = *param_2;
        local_b0 = 0;
        FUN_14058fa40(local_80,local_e8);
        local_f0 = lVar4;
        FUN_140590670(param_1,local_f8,&local_f0,&local_88);
        FUN_140582d30(local_80);
        if (local_b0 != 0) {
            (**(code **)(*(longlong *)(local_b0 + -0x10) + 8))(local_b0 + -0x10);
        }
        if (local_c0 != 0) {
            FUN_140590310(local_d0,*(undefined8 *)(local_c8 + 8));
            *(undefined **)(local_c8 + 0x10) = local_c8;
            *(undefined8 *)(local_c8 + 8) = 0;
            *(undefined **)(local_c8 + 0x18) = local_c8;
            local_c0 = 0;
        }
        FUN_14018b900(local_c8,0);
        if (local_e8._8_8_ != 0) {
            (**(code **)(*(longlong *)(local_e8._8_8_ + -0x10) + 8))(local_e8._8_8_ + -0x10);
        }
        if (local_e8._0_8_ != 0) {
            (**(code **)(*(longlong *)(local_e8._0_8_ + -0x10) + 8))(local_e8._0_8_ + -0x10);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack280);
    return;
}



longlong * FUN_14058fa40(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    if (*param_2 == 0) {
        *param_1 = 0;
    }
    else {
        lVar1 = *(longlong *)(*param_2 + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar4 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
            puVar4 = puVar2;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,*param_2,lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar4) = 0;
        *param_1 = (longlong)puVar4;
    }
    puVar4 = (undefined8 *)0x0;
    if (param_2[1] == 0) {
        param_1[1] = 0;
    }
    else {
        lVar1 = *(longlong *)(param_2[1] + -8);
        puVar3 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar2 = puVar4;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = lVar1;
            puVar2 = puVar3;
        }
        puVar2 = puVar2 + 2;
        FUN_1407db590(puVar2,param_2[1],lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar2) = 0;
        param_1[1] = (longlong)puVar2;
    }
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    FUN_14058fc50(param_1 + 3,param_2 + 3);
    if (param_2[7] == 0) {
        param_1[7] = 0;
    }
    else {
        lVar1 = *(longlong *)(param_2[7] + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = lVar1;
            puVar4 = puVar2;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2[7],lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar4) = 0;
        param_1[7] = (longlong)puVar4;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    return param_1;
}



void FUN_14058fbc0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong *)(param_1[2] + uVar3 * 8);
            lVar2 = *(longlong *)(param_1[2] + uVar3 * 8);
            while (lVar2 != 0) {
                lVar2 = *plVar1;
                *plVar1 = *(longlong *)(lVar2 + 8);
                if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar2 + 0x18) + 8))();
                }
                FUN_14018b900(lVar2,0);
                lVar2 = *plVar1;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



longlong FUN_14058fc50(longlong param_1,longlong param_2)

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
        uVar4 = FUN_140590210(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



longlong * FUN_14058fd20(longlong *param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    param_1[1] = param_2;
    if (param_2 == 0) {
        puVar2 = (undefined8 *)0x0;
    }
    else {
        puVar1 = (undefined8 *)FUN_14018b280(param_2 * 8 + 0x10,0);
        if (puVar1 == (undefined8 *)0x0) {
            puVar2 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar1[1] = param_2;
            puVar2 = puVar1 + 2;
            *puVar1 = &PTR_LAB_140b55060;
        }
    }
    uVar3 = 0;
    *param_1 = (longlong)puVar2;
    if (param_1[1] != 0) {
        do {
            puVar2 = (undefined8 *)(*param_1 + uVar3 * 8);
            if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    return param_1;
}



longlong FUN_14058fdb0(longlong *param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar2 = param_1[1];
    lVar5 = FUN_14018db00(*param_1,lVar2 + 1,8);
    uVar6 = 0;
    puVar1 = (undefined8 *)(lVar5 + lVar2 * 8);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_2;
        *param_2 = 0;
    }
    if (*param_1 != lVar5) {
        if (param_1[1] != 0) {
            do {
                puVar1 = (undefined8 *)(lVar5 + uVar6 * 8);
                if (puVar1 != (undefined8 *)0x0) {
                    lVar3 = *param_1;
                    *puVar1 = *(undefined8 *)(lVar3 + uVar6 * 8);
                    *(undefined8 *)(lVar3 + uVar6 * 8) = 0;
                }
                plVar4 = *(longlong **)(*param_1 + uVar6 * 8);
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 8))();
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar5;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



longlong FUN_14058fe80(longlong *param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = param_1[1];
    if (param_3 != 0) {
        lVar3 = FUN_14018db00(*param_1,lVar1 + param_3,0x38);
        FUN_1407db590(lVar1 * 0x38 + lVar3,param_2,param_3 * 0x38);
        if (*param_1 != lVar3) {
            FUN_1407db590(lVar3,*param_1,param_1[1] * 0x38);
            lVar2 = *param_1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *param_1 = lVar3;
        }
        param_1[1] = lVar1 + param_3;
    }
    return lVar1;
}

