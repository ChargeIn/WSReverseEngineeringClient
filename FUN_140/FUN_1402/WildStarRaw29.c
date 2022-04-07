//
// Created by flop on 04.04.22.
//
#include "../../include.h"

ulonglong FUN_1402f1d50(longlong param_1,int param_2)

{
    ulonglong uVar1;
    int iVar2;
    int iVar3;

    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if ((uVar1 == 0) || (iVar2 = *(int *)(uVar1 + 0xc) - *(int *)(uVar1 + 8), iVar2 == 0)) {
        return uVar1;
    }
    iVar3 = (int)((float)(param_2 - *(int *)(param_1 + 0x34)) * *(float *)(param_1 + 8)) +
            *(int *)(param_1 + 0xc);
    if ((*(byte *)(uVar1 + 2) & 1) == 0) {
        if (iVar3 < 0) {
            return uVar1;
        }
    }
    else {
        if (iVar3 < 0) {
            return (longlong)iVar3 / (longlong)iVar2 & 0xffffffff;
        }
        if (iVar2 < iVar3) {
            return (longlong)iVar3 / (longlong)iVar2 & 0xffffffff;
        }
    }
    return uVar1;
}



void FUN_1402f1e00(longlong param_1)

{
    longlong *plVar1;
    longlong **pplVar2;

    plVar1 = (longlong *)(param_1 + 8);
    if (*plVar1 != 0) {
        FUN_1402f1720();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1402f1ac0();
    }
    pplVar2 = *(longlong ***)(param_1 + 0x18);
    if (pplVar2 != (longlong **)0x0) {
        if (pplVar2 == (longlong **)0x0) goto LAB_1402f1e91;
        do {
            if ((longlong **)pplVar2[1] != (longlong **)0x0) {
                *pplVar2[1] = (longlong)pplVar2[2];
            }
            if (pplVar2[2] != (longlong *)0x0) {
                pplVar2[2][1] = (longlong)pplVar2[1];
            }
            pplVar2[1] = (longlong *)0x0;
            pplVar2[2] = (longlong *)0x0;
            if (*pplVar2 != (longlong *)0x0) {
                (**(code **)(**pplVar2 + 8))();
            }
            FUN_14018b900(pplVar2,0);
            LAB_1402f1e91:
            pplVar2 = *(longlong ***)(param_1 + 0x18);
        } while (pplVar2 != (longlong **)0x0);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1401a4a00(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1401a4a00((longlong *)(param_1 + 0x10));
    }
    if (*plVar1 == 0) {
        return;
    }
    FUN_1401a4a00(plVar1);
    return;
}



longlong ** FUN_1402f1ef0(longlong **param_1)

{
    if ((longlong **)param_1[1] != (longlong **)0x0) {
        *param_1[1] = (longlong)param_1[2];
    }
    if (param_1[2] != (longlong *)0x0) {
        param_1[2][1] = (longlong)param_1[1];
    }
    param_1[1] = (longlong *)0x0;
    param_1[2] = (longlong *)0x0;
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8
FUN_1402f1f50(float param_1,float param_2,undefined4 param_3,longlong param_4,undefined4 param_5,
              undefined8 param_6,undefined4 param_7)

{
    longlong lVar1;
    undefined8 uVar2;
    float fVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar5;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined auVar6 [16];
    undefined auVar7 [16];
    undefined auVar8 [16];

    lVar1 = *(longlong *)(param_4 + 8);
    auVar8 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar4 = 1.0;
    auVar7 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    auVar6 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    fVar5 = 1.0;
    do {
        if (lVar1 == 0) {
            LAB_1402f1fe9:
            lVar1 = *(longlong *)(param_4 + 0x10);
            fVar5 = fVar4;
            while( true ) {
                if (lVar1 == 0) {
                    return 0;
                }
                uVar2 = FUN_1402f1b20(lVar1,param_5,param_6,param_7);
                if ((int)uVar2 < 0) break;
                if ((*(longlong *)(lVar1 + 0x20) == 0) &&
                    (fVar5 < *(float *)(lVar1 + 0x48) || fVar5 == *(float *)(lVar1 + 0x48))) {
                    if (*(longlong *)(lVar1 + 0x58) != 0) {
                        FUN_1402f1ac0();
                    }
                    if (*(undefined8 **)(lVar1 + 0x50) != (undefined8 *)0x0) {
                        **(undefined8 **)(lVar1 + 0x50) = *(undefined8 *)(lVar1 + 0x58);
                    }
                    if (*(longlong *)(lVar1 + 0x58) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar1 + 0x58) + 0x50) = *(undefined8 *)(lVar1 + 0x50);
                    }
                    *(undefined8 *)(lVar1 + 0x50) = 0;
                    *(undefined8 *)(lVar1 + 0x58) = 0;
                    FUN_14018b900(lVar1,0);
                    return 0;
                }
                fVar3 = *(float *)(lVar1 + 0x48) * fVar4;
                fVar4 = fVar4 * (fVar5 - *(float *)(lVar1 + 0x48));
                *(float *)(lVar1 + 0x4c) = fVar3;
                lVar1 = *(longlong *)(lVar1 + 0x58);
            }
            return uVar2;
        }
        uVar2 = FUN_1402f1780(param_1,param_2,param_3,lVar1,param_5,param_6,param_7,auVar6,auVar7,auVar8
        );
        if ((int)uVar2 < 0) {
            return uVar2;
        }
        if ((*(longlong *)(lVar1 + 0x20) == 0) &&
            (fVar4 < *(float *)(lVar1 + 0x44) || fVar4 == *(float *)(lVar1 + 0x44))) {
            FUN_1402f1720(lVar1);
            goto LAB_1402f1fe9;
        }
        param_2 = fVar4 - *(float *)(lVar1 + 0x44);
        param_1 = *(float *)(lVar1 + 0x44) * fVar5;
        fVar5 = fVar5 * param_2;
        *(float *)(lVar1 + 0x48) = param_1;
        lVar1 = *(longlong *)(lVar1 + 0x60);
    } while( true );
}



void FUN_1402f20c0(longlong **param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    uint uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(int *)(param_1 + 2) != 0) {
        do {
            plVar1 = param_1[1];
            plVar2 = (longlong *)plVar1[uVar4];
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                plVar1[uVar4] = 0;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 2));
    }
    FUN_14018b900(param_1[1],0);
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    FUN_14018b900(param_1[3],0);
    FUN_14018b900(param_1[4],0);
    return;
}



undefined8 * FUN_1402f2170(undefined8 *param_1)

{
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined (*) [16])(param_1 + 8) = ZEXT816(0);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0x3f800000;
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
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2c] = &PTR_FUN_140b62ac0;
    param_1[0x2d] = 3;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    param_1[0x35] = 0;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1402f22e0(undefined8 *param_1)

{
    undefined4 uVar1;
    int *piVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;

    *param_1 = &PTR_LAB_140b63970;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[9] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x254) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3f800000;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    *(undefined (*) [16])(param_1 + 0x4e) = ZEXT816(0);
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    *(undefined (*) [16])(param_1 + 0x58) = ZEXT816(0);
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    param_1[0x85] = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    *(undefined4 *)(param_1 + 0x89) = 0;
    param_1[0x91] = 0;
    param_1[0x90] = 0;
    param_1[0x94] = 0;
    param_1[0x93] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0xb9] = 0;
    param_1[0xbb] = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
    param_1[0xd7] = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
    param_1[0xe3] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    uVar4 = uRam0000000140c7839c;
    uVar3 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 10) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0xb) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
    uVar4 = uRam0000000140c783ac;
    uVar3 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0xc) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0xd) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
    uVar4 = uRam0000000140c783bc;
    uVar3 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0xe) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0xf) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
    uVar4 = uRam0000000140c783cc;
    uVar3 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x10) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x11) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
    piVar2 = DAT_140c63750;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0x14) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x16) = ZEXT816(0);
    param_1[0x18] = 0;
    param_1[0x19] = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0x1e) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x24) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x20) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x26] = 0;
    *(undefined4 *)(param_1 + 0x27) = 0;
    *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x144) = 1;
    *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x5c] = 0;
    param_1[0x65] = 0;
    param_1[0x67] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x6a] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x84] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    *(undefined4 *)(param_1 + 0x96) = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = param_1;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(undefined4 *)((longlong)param_1 + 0x5a4) = 1;
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc6) = 0;
    *(undefined4 *)(param_1 + 0xd2) = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    param_1[0xd0] = 0;
    param_1[0xd1] = 0;
    iVar5 = DAT_140c41fc0;
    if (*piVar2 < DAT_140c41fc0) {
        iVar5 = *piVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_140c41fd0 + (longlong)iVar5 * 4);
    *(undefined4 *)(param_1 + 0xd9) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c4) = uVar1;
    iVar5 = DAT_140c42020;
    if (*piVar2 < DAT_140c42020) {
        iVar5 = *piVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_140c42030 + (longlong)iVar5 * 4);
    *(undefined4 *)(param_1 + 0xda) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6cc) = uVar1;
    iVar5 = DAT_140c42080;
    if (*piVar2 < DAT_140c42080) {
        iVar5 = *piVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_140c42090 + (longlong)iVar5 * 4);
    *(undefined4 *)(param_1 + 0xdb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6d4) = uVar1;
    iVar5 = DAT_140c420e0;
    if (*piVar2 < DAT_140c420e0) {
        iVar5 = *piVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_140c420f0 + (longlong)iVar5 * 4);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6dc) = uVar1;
    iVar5 = DAT_140c42140;
    if (*piVar2 < DAT_140c42140) {
        iVar5 = *piVar2;
    }
    uVar1 = *(undefined4 *)(&DAT_140c42150 + (longlong)iVar5 * 4);
    *(undefined4 *)(param_1 + 0xdd) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6e4) = uVar1;
    return param_1;
}



void FUN_1402f27b0(undefined8 *param_1)

{
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    DWORD DVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    HANDLE pvVar11;
    ulonglong uVar12;
    longlong *plVar13;
    uint uVar14;
    ulonglong uVar15;
    longlong **pplVar16;
    longlong lVar17;
    longlong lVar18;
    undefined8 *puVar19;
    undefined8 *local_res8;
    undefined8 local_res10;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    wchar_t *local_c8;
    LPVOID local_c0;
    undefined8 local_b8;
    undefined **local_b0;
    undefined8 local_a8;
    LPVOID local_a0;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    undefined8 local_40;

    uVar12 = 0;
    local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
    *param_1 = &PTR_LAB_140b63970;
    if ((param_1[7] != 0) && (param_1[2] == 0)) {
        local_b0 = &PTR_LAB_140b5e648;
        local_a8 = 0;
        local_a0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_b0);
        local_98 = local_b0;
        local_90 = local_a8;
        local_88 = local_a0;
        local_b8 = *(undefined8 *)(param_1[7] + 0x18);
        local_c8 = L"FileName";
        local_d0 = &PTR_LAB_140b5e648;
        local_c0 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_d0);
        local_50 = local_c8;
        local_d0 = &PTR_LAB_140b5e638;
        local_58 = &PTR_LAB_140b5e638;
        local_res8 = (undefined8 *)0x141deb9a0;
        local_48 = local_c0;
        local_40 = local_b8;
        iVar7 = FUN_140196f30(&DAT_140c8a600,6,&local_res8,&local_58,&local_98);
        local_d0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_c0);
        local_b0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_a0);
        if (iVar7 != 0) {
            DebugBreak();
        }
    }
    if (((*(byte *)(param_1 + 6) & 1) != 0) && (*(int *)(param_1[8] + 0x2b8) != 0)) {
        do {
            lVar17 = *(longlong *)(param_1[8] + 0x2c0) + uVar12 * 0x28;
            lVar18 = param_1[0x8d] + uVar12 * 0x28;
            uVar14 = 0;
            if (*(int *)(lVar17 + 0x18) != 0) {
                do {
                    uVar15 = (ulonglong)uVar14;
                    plVar13 = *(longlong **)(*(longlong *)(lVar18 + 8) + uVar15 * 8);
                    if ((plVar13 != (longlong *)0x0) &&
                        (lVar3 = *(longlong *)(lVar18 + 0x20), *(char *)(lVar3 + uVar15 * 0x14) != '\0')) {
                        *(undefined *)(lVar3 + uVar15 * 0x14) = 0;
                        (**(code **)(*plVar13 + 0x48))();
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < *(uint *)(lVar17 + 0x18));
            }
            uVar14 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_1[8] + 0x2b8));
    }
    uVar12 = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
        plVar13 = (longlong *)param_1[0x9a];
        *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
        for (; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[0x9c]) {
            (**(code **)(*plVar13 + 1000))(plVar13);
        }
    }
    pplVar16 = (longlong **)(param_1 + 0x9a);
    plVar13 = *pplVar16;
    while (plVar13 != (longlong *)0x0) {
        (**(code **)(**pplVar16 + 0x3a8))();
        plVar13 = *pplVar16;
    }
    lVar17 = param_1[9];
    while (lVar17 != 0) {
        if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
            (***(code ***)(undefined8 *)param_1[9])();
        }
        lVar17 = param_1[9];
    }
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[0x3e]);
    FUN_14018b900(param_1[0x3f]);
    FUN_14018b900(param_1[0x5c]);
    FUN_14018b900(param_1[0x65]);
    FUN_14018b900(param_1[0x67]);
    if (param_1[0x69] != 0) {
        FUN_1402f3520();
    }
    FUN_14018b900(param_1[0x68]);
    FUN_14018b900();
    uVar15 = uVar12;
    if (param_1[0x6e] != 0) {
        do {
            lVar17 = *(longlong *)(param_1[0x6d] + uVar15 * 8);
            if (lVar17 != 0) {
                FUN_1402f1e00(lVar17);
                FUN_14018b900();
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)param_1[0x6e]);
    }
    uVar15 = uVar12;
    if (*(int *)(param_1 + 0x71) != 0) {
        do {
            if (param_1[uVar15 + 0x72] != 0) {
                FUN_1402f1e00(param_1[uVar15 + 0x72]);
                FUN_14018b900();
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
        } while (uVar14 < *(uint *)(param_1 + 0x71));
    }
    if (param_1[0x30] != 0) {
        lVar17 = param_1[2];
        DVar8 = GetCurrentThreadId();
        uVar15 = uVar12;
        if (*(DWORD *)(lVar17 + 0x68) == DVar8) {
            *(longlong *)(lVar17 + 0x70) = *(longlong *)(lVar17 + 0x70) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar17 + 0x70);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *)(lVar17 + 0x68) = DVar8;
                    goto LAB_1402f2b7c;
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 < 0x400);
            FUN_14019fb60(lVar17 + 0x68);
        }
        LAB_1402f2b7c:
        if (param_1[0x30] != 0) {
            FUN_1403088b0(param_1[0x30],param_1 + 0x30);
        }
        if (*(ulonglong *)(lVar17 + 0x70) < 2) {
            *(undefined4 *)(lVar17 + 0x68) = 0;
            *(undefined8 *)(lVar17 + 0x70) = 0;
            if (*(longlong *)(lVar17 + 0x78) != 0) {
                if (*(longlong *)(lVar17 + 0x80) == 0) {
                    pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar17 + 0x80);
                    uVar15 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar15 == 0) * (*puVar1 ^ (ulonglong)pvVar11);
                    if (uVar15 != 0) {
                        CloseHandle(pvVar11);
                    }
                }
                SetEvent(*(HANDLE *)(lVar17 + 0x80));
            }
        }
        else {
            *(longlong *)(lVar17 + 0x70) = *(longlong *)(lVar17 + 0x70) + -1;
        }
    }
    FUN_14018b900(param_1[0x81],0);
    if (param_1[0x84] != 0) {
        FUN_1402f35b0();
    }
    lVar17 = param_1[0x8a];
    if (lVar17 != 0) {
        iVar7 = *(int *)(lVar17 + -0x10) + -1;
        if (-1 < iVar7) {
            pplVar16 = (longlong **)((longlong)*(int *)(lVar17 + -0x10) * 0x60 + 0x50 + lVar17);
            do {
                FUN_14018b900(pplVar16[-0x15],0);
                plVar13 = pplVar16[-0xc];
                if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 8))();
                }
                iVar7 = iVar7 + -1;
                pplVar16 = pplVar16 + -0xc;
            } while (-1 < iVar7);
        }
        FUN_14018b900(lVar17 + -0x10,0);
    }
    FUN_14018b900(param_1[0x8b],0);
    FUN_14018b900(param_1[0x8c],0);
    lVar17 = param_1[0x8d];
    if (lVar17 != 0) {
        iVar7 = *(int *)(lVar17 + -8);
        lVar18 = lVar17 + (longlong)iVar7 * 0x28;
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
            lVar18 = lVar18 + -0x28;
            FUN_1402f20c0(lVar18);
        }
        FUN_14018b900(lVar17 + -8);
    }
    if ((longlong *)param_1[0x8e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8e] + 8))();
        param_1[0x8e] = 0;
    }
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x8f] + 8))();
        param_1[0x8f] = 0;
    }
    uVar15 = uVar12;
    if (param_1[0x91] != 0) {
        do {
            puVar10 = *(undefined8 **)(param_1[0x90] + uVar15 * 8);
            if (puVar10 != (undefined8 *)0x0) {
                (**(code **)*puVar10)();
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)param_1[0x91]);
    }
    uVar15 = uVar12;
    if (param_1[0x94] != 0) {
        do {
            puVar10 = *(undefined8 **)(param_1[0x93] + uVar15 * 8);
            if (puVar10 != (undefined8 *)0x0) {
                (**(code **)*puVar10)();
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)param_1[0x94]);
    }
    FUN_14018b900();
    if (param_1[0xb2] != 0) {
        if (*(int *)(param_1[8] + 0x2f8) != 0) {
            do {
                lVar17 = param_1[0xb2];
                plVar13 = *(longlong **)(lVar17 + uVar12 * 8);
                if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 8))();
                    *(undefined8 *)(lVar17 + uVar12 * 8) = 0;
                }
                uVar14 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(param_1[8] + 0x2f8));
        }
        FUN_14018b900(param_1[0xb2]);
    }
    if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb3] + 8))();
        param_1[0xb3] = 0;
    }
    if (param_1[0xb7] != 0) {
        FUN_1402f3640();
    }
    lVar17 = param_1[0xb8];
    if (lVar17 != 0) {
        iVar7 = *(int *)(lVar17 + -8) + -1;
        if (-1 < iVar7) {
            plVar13 = (longlong *)((longlong)*(int *)(lVar17 + -8) * 0x88 + 0x10 + lVar17);
            do {
                plVar2 = plVar13 + -0x11;
                if ((longlong *)*plVar2 != (longlong *)0x0) {
                    *(longlong *)*plVar2 = plVar13[-0x10];
                }
                if (plVar13[-0x10] != 0) {
                    *(longlong *)(plVar13[-0x10] + 0x10) = *plVar2;
                }
                iVar7 = iVar7 + -1;
                *plVar2 = 0;
                plVar13[-0x10] = 0;
                plVar13 = plVar2;
            } while (-1 < iVar7);
        }
        FUN_14018b900(lVar17 + -8);
    }
    lVar17 = param_1[0xba];
    if (lVar17 != 0) {
        iVar7 = *(int *)(lVar17 + -8) + -1;
        if (-1 < iVar7) {
            puVar10 = (undefined8 *)((longlong)*(int *)(lVar17 + -8) * 0x30 + 0x20 + lVar17);
            do {
                puVar9 = puVar10 + -6;
                if ((undefined8 *)puVar10[-6] != (undefined8 *)0x0) {
                    *(undefined8 *)puVar10[-6] = puVar10[-5];
                }
                if (puVar10[-5] != 0) {
                    *(undefined8 *)(puVar10[-5] + 0x20) = *puVar9;
                }
                iVar7 = iVar7 + -1;
                *puVar9 = 0;
                puVar10[-5] = 0;
                puVar10 = puVar9;
            } while (-1 < iVar7);
        }
        FUN_14018b900(lVar17 + -8);
    }
    plVar13 = param_1 + 0xb9;
    lVar17 = *plVar13;
    while (lVar17 != 0) {
        lVar17 = *plVar13;
        if (*(undefined8 **)(lVar17 + 0x10) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        }
        if (*(longlong *)(lVar17 + 0x18) != 0) {
            *(undefined8 *)(*(longlong *)(lVar17 + 0x18) + 0x10) = *(undefined8 *)(lVar17 + 0x10);
        }
        *(undefined8 *)(lVar17 + 0x10) = 0;
        *(undefined8 *)(lVar17 + 0x18) = 0;
        lVar17 = *plVar13;
    }
    plVar13 = param_1 + 0xbb;
    lVar17 = *plVar13;
    while (lVar17 != 0) {
        lVar17 = *plVar13;
        if (*(undefined8 **)(lVar17 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar17 + 0x20) = *(undefined8 *)(lVar17 + 0x28);
        }
        if (*(longlong *)(lVar17 + 0x28) != 0) {
            *(undefined8 *)(*(longlong *)(lVar17 + 0x28) + 0x20) = *(undefined8 *)(lVar17 + 0x20);
        }
        *(undefined8 *)(lVar17 + 0x20) = 0;
        *(undefined8 *)(lVar17 + 0x28) = 0;
        lVar17 = *plVar13;
    }
    FUN_14018b900(param_1[0xd0]);
    FUN_14018b900();
    plVar13 = param_1 + 0xd4;
    lVar17 = *plVar13;
    while (lVar17 != 0) {
        lVar17 = *plVar13;
        if (lVar17 != 0) {
            if (*(undefined8 **)(lVar17 + 0x70) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar17 + 0x70) = *(undefined8 *)(lVar17 + 0x78);
            }
            if (*(longlong *)(lVar17 + 0x78) != 0) {
                *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x70) = *(undefined8 *)(lVar17 + 0x70);
            }
            *(undefined8 *)(lVar17 + 0x70) = 0;
            *(undefined8 *)(lVar17 + 0x78) = 0;
            *(undefined ***)(lVar17 + 0x28) = &PTR_FUN_140b62ac0;
            if (*(undefined8 **)(lVar17 + 0x48) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar17 + 0x48) = *(undefined8 *)(lVar17 + 0x50);
            }
            if (*(longlong *)(lVar17 + 0x50) != 0) {
                *(undefined8 *)(*(longlong *)(lVar17 + 0x50) + 0x20) = *(undefined8 *)(lVar17 + 0x48);
            }
            *(undefined8 *)(lVar17 + 0x48) = 0;
            *(undefined8 *)(lVar17 + 0x50) = 0;
            FUN_14018b900();
        }
        lVar17 = *plVar13;
    }
    plVar13 = param_1 + 0xd5;
    if (*plVar13 != 0) {
        if (param_1[0xe3] == 0) {
            bVar6 = false;
            bVar5 = true;
            puVar10 = (undefined8 *)FUN_14018b280();
            if (puVar10 != (undefined8 *)0x0) {
                puVar10[1] = 0;
                *puVar10 = &PTR_LAB_140b55060;
            }
            puVar10 = puVar10 + 2;
            *(undefined2 *)puVar10 = 0;
            puVar9 = local_res8;
            puVar19 = puVar10;
        }
        else {
            lVar17 = *(longlong *)(param_1[0xe3] + -8);
            bVar6 = true;
            bVar5 = false;
            puVar9 = (undefined8 *)FUN_14018b280(lVar17 * 2 + 0x12);
            if (puVar9 != (undefined8 *)0x0) {
                puVar9[1] = lVar17;
                *puVar9 = &PTR_LAB_140b55060;
            }
            puVar9 = puVar9 + 2;
            FUN_1407db590(puVar9,param_1[0xe3],lVar17 * 2);
            *(undefined2 *)((longlong)puVar9 + lVar17 * 2) = 0;
            puVar10 = local_res8;
            puVar19 = puVar9;
        }
        local_e0 = 0;
        local_e8 = &PTR_LAB_140b5e648;
        local_d8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_e8);
        local_78 = local_e8;
        local_res10 = 0x141deba20;
        local_70 = local_e0;
        local_68 = local_d8;
        iVar7 = FUN_1401971e0(&DAT_140c8a5fc,6,&local_res10,puVar19,&local_78);
        local_e8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_d8);
        if ((bVar5) && (puVar10 != (undefined8 *)0x0)) {
            (**(code **)(puVar10[-2] + 8))();
        }
        if ((bVar6) && (puVar9 != (undefined8 *)0x0)) {
            (**(code **)(puVar9[-2] + 8))();
        }
        if (iVar7 != 0) {
            DebugBreak();
        }
        lVar17 = *plVar13;
        while (lVar17 != 0) {
            FUN_140312ab0(param_1[2],*plVar13);
            lVar17 = *plVar13;
            if (*(undefined8 **)(lVar17 + 0x30) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar17 + 0x30) = *(undefined8 *)(lVar17 + 0x38);
            }
            if (*(longlong *)(lVar17 + 0x38) != 0) {
                *(undefined8 *)(*(longlong *)(lVar17 + 0x38) + 0x30) = *(undefined8 *)(lVar17 + 0x30);
            }
            *(undefined8 *)(lVar17 + 0x30) = 0;
            *(undefined8 *)(lVar17 + 0x38) = 0;
            lVar17 = *plVar13;
        }
    }
    if (param_1[3] != 0) {
        lVar17 = param_1[2];
        DVar8 = GetCurrentThreadId();
        if (*(DWORD *)(lVar17 + 0x28) == DVar8) {
            *(longlong *)(lVar17 + 0x30) = *(longlong *)(lVar17 + 0x30) + 1;
        }
        else {
            uVar12 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar17 + 0x30);
                uVar15 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar15 == 0) * (*puVar1 ^ 1);
                if (uVar15 == 0) {
                    *(DWORD *)(lVar17 + 0x28) = DVar8;
                    goto LAB_1402f3249;
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 < 0x400);
            FUN_14019fb60(lVar17 + 0x28);
        }
        LAB_1402f3249:
        if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[3] = param_1[4];
        }
        if (param_1[4] != 0) {
            *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
        }
        param_1[3] = 0;
        param_1[4] = 0;
        if (*(ulonglong *)(lVar17 + 0x30) < 2) {
            *(undefined4 *)(lVar17 + 0x28) = 0;
            *(undefined8 *)(lVar17 + 0x30) = 0;
            if (*(longlong *)(lVar17 + 0x38) != 0) {
                if (*(longlong *)(lVar17 + 0x40) == 0) {
                    pvVar11 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar17 + 0x40);
                    uVar12 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar11);
                    if (uVar12 != 0) {
                        CloseHandle(pvVar11);
                    }
                }
                SetEvent(*(HANDLE *)(lVar17 + 0x40));
            }
        }
        else {
            *(longlong *)(lVar17 + 0x30) = *(longlong *)(lVar17 + 0x30) + -1;
        }
    }
    lVar17 = param_1[0xe3];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    if ((longlong *)param_1[0xe2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xe2] + 8))();
    }
    if (param_1[0xe1] != 0) {
        CloseHandle((HANDLE)param_1[0xe1]);
    }
    if (*plVar13 != 0) {
        FUN_1401a4a00(plVar13);
    }
    if (param_1[0xd4] != 0) {
        FUN_1401a4a00(param_1 + 0xd4);
    }
    if (param_1[0xbb] != 0) {
        FUN_1401a4a00(param_1 + 0xbb);
    }
    if (param_1[0xb9] != 0) {
        FUN_1401a4a00(param_1 + 0xb9);
    }
    if ((undefined8 *)param_1[0x9b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x9b] = param_1[0x9c];
    }
    if (param_1[0x9c] != 0) {
        *(undefined8 *)(param_1[0x9c] + 0x4d8) = param_1[0x9b];
    }
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    if (param_1[0x9a] != 0) {
        FUN_1401a4a00(param_1 + 0x9a);
    }
    lVar17 = param_1[0x93];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    lVar17 = param_1[0x90];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    if ((longlong *)param_1[0x88] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x88] + 8))();
    }
    lVar17 = param_1[0x87];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    lVar17 = param_1[0x82];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    lVar17 = param_1[0x6f];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    lVar17 = param_1[0x6d];
    if (lVar17 != 0) {
        (**(code **)(*(longlong *)(lVar17 + -0x10) + 8))(lVar17 + -0x10);
    }
    if (param_1[0x30] != 0) {
        FUN_1403088b0();
    }
    if ((undefined8 *)param_1[0x2d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2d] = param_1[0x2e];
    }
    if (param_1[0x2e] != 0) {
        *(undefined8 *)(param_1[0x2e] + 0x168) = param_1[0x2d];
    }
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    if ((undefined8 *)param_1[0x2b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2b] = param_1[0x2c];
    }
    if (param_1[0x2c] != 0) {
        *(undefined8 *)(param_1[0x2c] + 0x158) = param_1[0x2b];
    }
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    if (param_1[9] != 0) {
        FUN_1401a4a00();
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}



longlong FUN_1402f3520(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;

    iVar2 = *(int *)(param_1 + -0x10) + -1;
    if (-1 < iVar2) {
        plVar3 = (longlong *)((longlong)*(int *)(param_1 + -0x10) * 0x160 + 0x10 + param_1);
        do {
            FUN_14018b900(plVar3[-0x2d],0);
            lVar1 = plVar3[-0x2c];
            if (lVar1 != 0) {
                if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
                }
                FUN_14018b900(lVar1,0);
            }
            iVar2 = iVar2 + -1;
            plVar3 = plVar3 + -0x2c;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -0x10,0);
    return param_1 + -0x10;
}



longlong FUN_1402f35b0(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined *)(param_1 + 0x10 + (longlong)*(int *)(param_1 + -8) * 0x18);
        do {
            if (*(longlong **)(&DAT_ffffffffffffffe8 + (longlong)puVar2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(&DAT_ffffffffffffffe8 + (longlong)puVar2) + 8))();
            }
            lVar1 = *(longlong *)(puVar2 + -0x20);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            if (*(longlong **)(puVar2 + -0x28) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar2 + -0x28) + 8))();
            }
            iVar3 = iVar3 + -1;
            puVar2 = &DAT_ffffffffffffffe8 + (longlong)puVar2;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



longlong FUN_1402f3640(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -0x10) + -1;
    if (-1 < iVar3) {
        plVar2 = (longlong *)((longlong)*(int *)(param_1 + -0x10) * 0x1b0 + 0x180 + param_1);
        do {
            plVar1 = plVar2 + -0x36;
            if ((longlong *)plVar2[-0x31] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar2[-0x31] + 8))();
            }
            plVar2[-0x3a] = (longlong)&PTR_FUN_140b62ac0;
            if ((longlong *)*plVar1 != (longlong *)0x0) {
                *(longlong *)*plVar1 = plVar2[-0x35];
            }
            if (plVar2[-0x35] != 0) {
                *(longlong *)(plVar2[-0x35] + 0x20) = *plVar1;
            }
            iVar3 = iVar3 + -1;
            *plVar1 = 0;
            plVar2[-0x35] = 0;
            plVar2 = plVar1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -0x10,0);
    return param_1 + -0x10;
}



longlong FUN_1402f3700(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70) = *(undefined8 *)(param_1 + 0x70);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined ***)(param_1 + 0x28) = &PTR_FUN_140b62ac0;
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x50);
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x20) = *(undefined8 *)(param_1 + 0x48);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_14018b900(param_1);
    return param_1;
}



undefined8
FUN_1402f3780(longlong param_1,short *param_2,longlong param_3,undefined8 *param_4,
              undefined4 param_5)

{
    DWORD *pDVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    short sVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;
    DWORD DVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    HANDLE hObject;
    undefined8 *puVar11;
    longlong *plVar12;
    undefined8 *puVar13;

    puVar11 = (undefined8 *)0x0;
    lVar5 = *(longlong *)(param_1 + 0x718);
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x718) = 0;
    }
    else {
        sVar4 = *param_2;
        puVar13 = puVar11;
        while (sVar4 != 0) {
            puVar13 = (undefined8 *)((longlong)puVar13 + 1);
            sVar4 = param_2[(longlong)puVar13];
        }
        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
        puVar10 = puVar11;
        if (puVar9 != (undefined8 *)0x0) {
            puVar9[1] = puVar13;
            *puVar9 = &PTR_LAB_140b55060;
            puVar10 = puVar9;
        }
        puVar10 = puVar10 + 2;
        FUN_1407db590(puVar10,param_2,(longlong)puVar13 * 2);
        *(undefined2 *)((longlong)puVar13 * 2 + (longlong)puVar10) = 0;
        *(undefined8 **)(param_1 + 0x718) = puVar10;
    }
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    *(longlong *)(param_1 + 0x10) = param_3;
    *(undefined8 **)(param_1 + 0x38) = param_4;
    (**(code **)*param_4)(param_4);
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x28) = param_5;
    pDVar1 = (DWORD *)(param_3 + 0x28);
    *(int *)(param_1 + 0x574) = *(int *)(lVar5 + 0xdc) + -1;
    *(int *)(param_1 + 0x578) = *(int *)(lVar5 + 0xe0) + -3;
    iVar7 = *(int *)(lVar5 + 0xd0);
    *(undefined4 *)(param_1 + 0x580) = 0;
    iVar7 = iVar7 + -1;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x5ac) = iVar7;
    *(int *)(param_1 + 0x57c) = iVar7;
    *(undefined8 *)(param_1 + 0x35c) = 0xbf800000bf800000;
    DVar8 = GetCurrentThreadId();
    if (*pDVar1 == DVar8) {
        *(longlong *)(param_3 + 0x30) = *(longlong *)(param_3 + 0x30) + 1;
    }
    else {
        do {
            LOCK();
            puVar3 = (ulonglong *)(param_3 + 0x30);
            uVar6 = *puVar3;
            *puVar3 = *puVar3 ^ (ulonglong)(uVar6 == 0) * (*puVar3 ^ 1);
            if (uVar6 == 0) {
                *pDVar1 = DVar8;
                goto LAB_1402f3907;
            }
            puVar11 = (undefined8 *)((longlong)puVar11 + 1);
        } while (puVar11 < &DAT_00000400);
        FUN_14019fb60(pDVar1);
    }
    LAB_1402f3907:
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x88);
    if (*(longlong *)(param_1 + 0x18) == 0) {
        *(longlong **)(param_1 + 0x18) = plVar12;
        plVar2 = (longlong *)(param_1 + 0x20);
        *plVar2 = *plVar12;
        *plVar12 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x18) = plVar2;
        }
    }
    if (1 < *(ulonglong *)(param_3 + 0x30)) {
        *(longlong *)(param_3 + 0x30) = *(longlong *)(param_3 + 0x30) + -1;
        return 0;
    }
    *pDVar1 = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    if (*(longlong *)(param_3 + 0x38) != 0) {
        if (*(longlong *)(param_3 + 0x40) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            puVar3 = (ulonglong *)(param_3 + 0x40);
            uVar6 = *puVar3;
            *puVar3 = *puVar3 ^ (ulonglong)(uVar6 == 0) * (*puVar3 ^ (ulonglong)hObject);
            if (uVar6 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE *)(param_3 + 0x40));
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402f39e0(longlong *param_1)

{
    longlong **pplVar1;
    char cVar2;
    ushort uVar3;
    undefined auVar4 [16];
    double dVar5;
    undefined8 uVar6;
    longlong lVar7;
    ulonglong uVar8;
    uint *puVar9;
    undefined *puVar10;
    undefined *puVar11;
    undefined *puVar12;
    undefined8 *puVar13;
    int *piVar14;
    longlong *plVar15;
    longlong *plVar16;
    longlong *plVar17;
    undefined *puVar18;
    undefined8 *puVar19;
    uint *puVar20;
    longlong lVar21;
    longlong *plVar22;
    int iVar23;
    uint uVar24;
    undefined (*pauVar25) [16];
    int *piVar26;
    longlong *plVar27;
    int iVar28;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    undefined4 uVar34;
    float fVar35;
    undefined4 uVar36;
    undefined4 uVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    float fVar40;
    undefined4 uVar41;
    undefined4 uVar42;
    undefined4 uVar43;
    undefined8 local_res8;
    undefined4 local_res10;
    longlong *local_res18;
    undefined **local_1b8;
    undefined8 local_1b0;
    LPVOID local_1a8;
    undefined **local_1a0;
    wchar_t *local_198;
    LPVOID local_190;
    undefined8 local_188;
    undefined **local_180;
    undefined8 uStack376;
    undefined8 local_170;
    int iStack360;
    undefined4 uStack356;
    undefined **local_158;
    undefined8 local_150;
    LPVOID local_148;
    undefined **local_138;
    wchar_t *local_130;
    LPVOID local_128;
    undefined8 local_120;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    int iStack256;
    undefined4 uStack252;
    undefined local_f8 [16];
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    float local_88;
    float local_68;

    puVar18 = (undefined *)0x0;
    for (lVar7 = param_1[0x9a]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x4e0)) {
        uVar24 = *(uint *)(lVar7 + 0x4b0);
        puVar11 = puVar18;
        if ((uVar24 != 0) && (lVar21 = param_1[8], uVar24 < *(uint *)(lVar21 + 0x270))) {
            uVar3 = *(ushort *)(*(longlong *)(lVar21 + 0x278) + (longlong)(int)uVar24 * 2);
            if ((uint)uVar3 < *(uint *)(lVar21 + 0x260)) {
                puVar11 = (undefined *)(*(longlong *)(lVar21 + 0x268) + (ulonglong)uVar3 * 4);
            }
            else {
                puVar11 = (undefined *)0x0;
            }
        }
        *(undefined **)(lVar7 + 0x4b8) = puVar11;
    }
    uVar24 = *(uint *)(param_1[7] + 200);
    auVar4 = ZEXT816(0x158) * ZEXT416(uVar24);
    uVar6 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    lVar7 = FUN_14018b280(uVar6,0);
    if (lVar7 == 0) {
        lVar7 = 0;
    }
    else {
        iVar23 = uVar24 - 1;
        if (-1 < iVar23) {
            lVar21 = lVar7 + 0x108;
            do {
                FUN_1400037c0(&DAT_ffffffffffffffb0 + lVar21,0x14,4,&LAB_140306720);
                FUN_1400037c0();
                *(undefined8 *)(lVar21 + -0xa0) = 0;
                *(undefined4 *)(lVar21 + -0x98) = 0;
                *(undefined4 *)(lVar21 + -0x54) = 0;
                lVar21 = lVar21 + 0x158;
                iVar23 = iVar23 + -1;
            } while (-1 < iVar23);
        }
    }
    lVar21 = param_1[7];
    param_1[0x65] = lVar7;
    if (*(int *)(param_1[8] + 0x180) == 0) {
        lVar7 = *(longlong *)(lVar21 + 0x10) + 0x6a0;
    }
    else {
        lVar7 = (ulonglong)**(uint **)(lVar21 + 0xd0) * 0x158 + lVar7;
    }
    param_1[0x66] = lVar7;
    puVar11 = puVar18;
    if (*(int *)(lVar21 + 200) != 0) {
        do {
            uVar24 = (int)puVar11 + 1;
            *(longlong *)((longlong)puVar11 * 0x158 + param_1[0x65]) =
                    (longlong)puVar11 * 0xc4 + *(longlong *)(param_1[7] + 0xc0);
            puVar11 = (undefined *)(ulonglong)uVar24;
        } while (uVar24 < *(uint *)(param_1[7] + 200));
    }
    if (*(uint *)(param_1[8] + 0x180) != 0) {
        auVar4 = ZEXT816(0x40) * ZEXT416(*(uint *)(param_1[8] + 0x180));
        uVar6 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6,0);
        param_1[0x67] = lVar7;
        uVar24 = *(uint *)(param_1[8] + 0x180);
        uVar8 = SUB168(ZEXT816(0x160) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x160) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar7 = uVar8 + 0x10;
        if (0xffffffffffffffef < uVar8) {
            lVar7 = -1;
        }
        puVar9 = (uint *)FUN_14018b280(lVar7,0);
        if (puVar9 == (uint *)0x0) {
            puVar20 = (uint *)0x0;
        }
        else {
            puVar20 = puVar9 + 4;
            *puVar9 = uVar24;
            while (uVar24 = uVar24 - 1, -1 < (int)uVar24) {
                FUN_1402f1300();
            }
        }
        param_1[0x69] = (longlong)puVar20;
        lVar7 = FUN_14018b280();
        param_1[0x68] = lVar7;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0x180) != 0) {
            do {
                uVar24 = (int)puVar11 + 1;
                *(ulonglong *)((longlong)puVar11 * 0x160 + param_1[0x69]) =
                        (ulonglong)*(uint *)(*(longlong *)(param_1[7] + 0xd0) + (longlong)puVar11 * 4) * 0x158
                        + param_1[0x65];
                puVar11 = (undefined *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x180));
        }
    }
    *(undefined4 *)(param_1 + 0x6b) = 0;
    if (*(uint *)(param_1[8] + 0xf0) != 0) {
        auVar4 = ZEXT816(0x60) * ZEXT416(*(uint *)(param_1[8] + 0xf0));
        uVar6 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6,0);
        param_1[0x3e] = lVar7;
        iVar23 = *(int *)(param_1[8] + 0xf0);
        puVar10 = (undefined *)FUN_14018b280();
        puVar11 = puVar18;
        if ((puVar10 != (undefined *)0x0) && (iVar23 = iVar23 + -1, puVar11 = puVar10, -1 < iVar23)) {
            puVar13 = (undefined8 *)(puVar10 + 0x40);
            do {
                *(undefined4 *)(puVar13 + -6) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + -0x2c) = 0x3f800000;
                *(undefined4 *)(puVar13 + -5) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + -0x24) = 0x3f800000;
                iVar23 = iVar23 + -1;
                puVar13[-4] = 0;
                puVar13[-3] = 0;
                *(undefined (*) [16])(puVar13 + -2) = ZEXT816(0);
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13[2] = 0x3f800000;
                local_c8 = 0x3f800000;
                uStack196 = 0x3f800000;
                uStack192 = 0x3f800000;
                uStack188 = 0x3f800000;
                local_d8 = ZEXT816(0);
                local_f8 = ZEXT816(0);
                puVar13[3] = 0;
                puVar13[4] = 0;
                puVar13[5] = 0;
                puVar13[6] = 0;
                puVar13[7] = 0x3f800000;
                puVar13[8] = 0;
                *(undefined4 *)(puVar13 + 9) = 0;
                *(undefined *)((longlong)puVar13 + 0x4c) = 1;
                puVar13[10] = 0;
                puVar13[0xb] = 0;
                *(undefined (*) [16])(puVar13 + 0xc) = ZEXT816(0);
                puVar13[0xe] = 0;
                puVar13[0xf] = 0;
                puVar13 = puVar13 + 0x18;
            } while (-1 < iVar23);
        }
        param_1[0x3f] = (longlong)puVar11;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0xf0) != 0) {
            do {
                lVar21 = (longlong)puVar11 * 0xb8;
                *(undefined2 *)((longlong)puVar11 * 0x60 + 0x36 + param_1[0x3e]) =
                        *(undefined2 *)(lVar21 + *(longlong *)(param_1[8] + 0xf8));
                lVar7 = (longlong)puVar11 * 0xc0;
                uVar24 = (int)puVar11 + 1;
                puVar11 = (undefined *)(ulonglong)uVar24;
                *(undefined8 *)(lVar7 + param_1[0x3f]) =
                        *(undefined8 *)
                                ((ulonglong)*(ushort *)(*(longlong *)(param_1[8] + 0xf8) + 4 + lVar21) * 0x160 +
                                 param_1[0x69]);
            } while (uVar24 < *(uint *)(param_1[8] + 0xf0));
        }
    }
    iVar23 = *(int *)(param_1[8] + 0x328);
    if (iVar23 != 0) {
        puVar10 = (undefined *)FUN_14018b280();
        puVar11 = puVar18;
        if ((puVar10 != (undefined *)0x0) && (iVar23 = iVar23 + -1, puVar11 = puVar10, -1 < iVar23)) {
            puVar13 = (undefined8 *)(puVar10 + 8);
            do {
                iVar23 = iVar23 + -1;
                *puVar13 = 0;
                puVar13[1] = 0;
                *(undefined4 *)(puVar13 + 2) = 0;
                puVar13 = puVar13 + 4;
            } while (-1 < iVar23);
        }
        param_1[0x5c] = (longlong)puVar11;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0x328) != 0) {
            do {
                lVar21 = (longlong)puVar11 * 0x20;
                lVar7 = (longlong)puVar11 * 0x38;
                uVar24 = (int)puVar11 + 1;
                puVar11 = (undefined *)(ulonglong)uVar24;
                *(undefined8 *)(lVar21 + param_1[0x5c]) =
                        *(undefined8 *)
                                ((ulonglong)*(ushort *)(lVar7 + 2 + *(longlong *)(param_1[8] + 0x330)) * 0x160 +
                                 param_1[0x69]);
            } while (uVar24 < *(uint *)(param_1[8] + 0x328));
        }
    }
    lVar7 = param_1[8];
    if (*(ushort *)(lVar7 + 0x348) == 0xffff) {
        param_1[0x5d] = 0;
    }
    else {
        param_1[0x5d] = *(longlong *)((ulonglong)*(ushort *)(lVar7 + 0x348) * 0x160 + param_1[0x69]);
    }
    if (*(ushort *)(lVar7 + 0x368) == 0xffff) {
        param_1[0x61] = 0;
    }
    else {
        param_1[0x61] = *(longlong *)((ulonglong)*(ushort *)(lVar7 + 0x368) * 0x160 + param_1[0x69]);
    }
    iVar23 = *(int *)(lVar7 + 0x1e0);
    if (iVar23 != 0) {
        puVar10 = (undefined *)FUN_14018b280();
        puVar11 = puVar18;
        if ((puVar10 != (undefined *)0x0) && (iVar23 = iVar23 + -1, puVar11 = puVar10, -1 < iVar23)) {
            puVar13 = (undefined8 *)(puVar10 + 0x30);
            do {
                *(undefined4 *)(puVar13 + -4) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + -0x1c) = 0x3f800000;
                *(undefined4 *)(puVar13 + -3) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + -0x14) = 0x3f800000;
                iVar23 = iVar23 + -1;
                puVar13[-2] = 0;
                puVar13[-1] = 0;
                *puVar13 = 0;
                local_b8 = 0x3f800000;
                uStack180 = 0x3f800000;
                uStack176 = 0x3f800000;
                uStack172 = 0x3f800000;
                local_e8 = ZEXT816(0);
                puVar13[1] = 0;
                puVar13[2] = 0;
                puVar13[3] = 0;
                uStack156 = uRam0000000140c7845c;
                uStack160 = uRam0000000140c78458;
                uStack164 = uRam0000000140c78454;
                local_a8 = _DAT_140c78450;
                *(undefined4 *)(puVar13 + 4) = _DAT_140c78450;
                *(undefined4 *)((longlong)puVar13 + 0x24) = uStack164;
                *(undefined4 *)(puVar13 + 5) = uStack160;
                *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack156;
                puVar13[6] = 0;
                puVar13[7] = 0;
                puVar13[8] = 0;
                puVar13[9] = 0;
                puVar13[10] = 0;
                puVar13[0xb] = 0;
                *(undefined (*) [16])(puVar13 + 0xc) = ZEXT816(0);
                puVar13[0xe] = 0;
                puVar13[0xf] = 0;
                puVar13[0x10] = 0;
                puVar13[0x11] = 0;
                puVar13[0x12] = 0;
                puVar13[0x13] = 0;
                puVar13 = puVar13 + 0x22;
            } while (-1 < iVar23);
        }
        param_1[0x6a] = (longlong)puVar11;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0x1e0) != 0) {
            do {
                uVar24 = (int)puVar11 + 1;
                *(undefined8 *)((longlong)puVar11 * 0x110 + param_1[0x6a]) =
                        *(undefined8 *)
                                ((ulonglong)*(uint *)((longlong)puVar11 * 0x98 + *(longlong *)(param_1[8] + 0x1e8)) *
                                 0x160 + param_1[0x69]);
                puVar11 = (undefined *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x1e0));
        }
    }
    iVar23 = *(int *)(param_1[8] + 0x200);
    if (iVar23 != 0) {
        puVar12 = (undefined *)FUN_14018b280();
        puVar10 = puVar18;
        puVar11 = puVar12;
        if (puVar12 != (undefined *)0x0) {
            while (iVar23 = iVar23 + -1, puVar10 = puVar12, -1 < iVar23) {
                *puVar11 = 1;
                *(undefined8 *)(puVar11 + 4) = 0;
                *(undefined8 *)(puVar11 + 0xc) = 0;
                puVar11 = puVar11 + 0x14;
            }
        }
        param_1[0x81] = (longlong)puVar10;
    }
    pplVar1 = (longlong **)(param_1 + 0x98);
    plVar15 = *pplVar1;
    plVar22 = param_1;
    while ((plVar15 != (longlong *)0x0 && (*(int *)(plVar22 + 0x96) == 0))) {
        plVar22 = *pplVar1;
        pplVar1 = (longlong **)(plVar22 + 0x98);
        plVar15 = *pplVar1;
    }
    if ((*(uint *)(plVar22 + 6) & 8) != 0) {
        *(uint *)(plVar22 + 6) = *(uint *)(plVar22 + 6) & 0xfffffff7;
        for (lVar7 = plVar22[0x98]; (lVar7 != 0 && ((*(uint *)(lVar7 + 0x30) & 4) != 0));
             lVar7 = *(longlong *)(lVar7 + 0x4c0)) {
            *(uint *)(lVar7 + 0x30) = *(uint *)(lVar7 + 0x30) & 0xfffffffb;
        }
        if ((*(uint *)((longlong)plVar22 + 0x34) & 1) != 0) {
            *(uint *)((longlong)plVar22 + 0x34) = *(uint *)((longlong)plVar22 + 0x34) & 0xfffffffe;
            for (lVar7 = plVar22[0x98]; (lVar7 != 0 && ((*(uint *)(lVar7 + 0x34) & 0x20) != 0));
                 lVar7 = *(longlong *)(lVar7 + 0x4c0)) {
                *(uint *)(lVar7 + 0x34) = *(uint *)(lVar7 + 0x34) & 0xffffffdf;
            }
        }
    }
    for (lVar7 = plVar22[0x9a]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x4e0)) {
        if (*(int *)(lVar7 + 0x4b0) == 0) {
            FUN_1402f5e70();
        }
    }
    uVar24 = *(uint *)(param_1[8] + 0x1c0);
    if (uVar24 != 0) {
        uVar8 = SUB168(ZEXT816(0x18) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x18) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar7 = uVar8 + 8;
        if (0xfffffffffffffff7 < uVar8) {
            lVar7 = -1;
        }
        puVar13 = (undefined8 *)FUN_14018b280(lVar7,0);
        if (puVar13 == (undefined8 *)0x0) {
            puVar19 = (undefined8 *)0x0;
        }
        else {
            *(uint *)puVar13 = uVar24;
            puVar19 = puVar13 + 1;
            while (uVar24 = uVar24 - 1, -1 < (int)uVar24) {
                puVar13[1] = 0;
                puVar13[2] = 0;
                puVar13[3] = 0;
                puVar13 = puVar13 + 3;
            }
        }
        param_1[0x84] = (longlong)puVar19;
    }
    iVar23 = *(int *)(param_1[8] + 0x1f0);
    if (iVar23 != 0) {
        piVar14 = (int *)FUN_14018b280();
        if (piVar14 == (int *)0x0) {
            piVar26 = (int *)0x0;
        }
        else {
            iVar28 = iVar23 + -1;
            *piVar14 = iVar23;
            piVar26 = piVar14 + 4;
            if (-1 < iVar28) {
                uVar34 = 0x3f800000;
                uVar36 = 0x3f800000;
                uVar37 = 0x3f800000;
                uVar38 = 0x3f800000;
                uVar41 = 0;
                uVar42 = 0;
                uVar43 = 0;
                pauVar25 = (undefined (*) [16])(piVar14 + 0xc);
                uVar29 = extraout_XMM0_Da;
                uVar39 = 0;
                do {
                    FUN_1400037c0(uVar29,pauVar25[-1],0x10,2,FUN_14001c280);
                    uVar29 = uVar39;
                    FUN_1400037c0();
                    iVar28 = iVar28 + -1;
                    *(undefined8 *)pauVar25[3] = 0;
                    *(undefined8 *)((longlong)pauVar25[-2] + 8) = 0;
                    *pauVar25 = CONCAT412(uVar38,CONCAT48(uVar37,CONCAT44(uVar36,uVar34)));
                    pauVar25[-1] = CONCAT412(uVar38,CONCAT48(uVar37,CONCAT44(uVar36,uVar34)));
                    pauVar25[2] = CONCAT412(uVar43,CONCAT48(uVar42,CONCAT44(uVar41,uVar29)));
                    pauVar25[1] = CONCAT412(uVar43,CONCAT48(uVar42,CONCAT44(uVar41,uVar29)));
                    pauVar25 = pauVar25[6];
                    uVar39 = uVar29;
                } while (-1 < iVar28);
            }
        }
        param_1[0x8a] = (longlong)piVar26;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0x1f0) != 0) {
            do {
                puVar9 = (uint *)((longlong)puVar11 * 0x30 + *(longlong *)(param_1[8] + 0x1f8));
                puVar13 = (undefined8 *)((longlong)puVar11 * 0x60 + param_1[0x8a]);
                *puVar13 = *(undefined8 *)((ulonglong)*puVar9 * 0x160 + param_1[0x69]);
                uVar24 = puVar9[8];
                puVar12 = (undefined *)FUN_14018b280();
                puVar10 = puVar18;
                if ((puVar12 != (undefined *)0x0) && (iVar23 = uVar24 - 1, puVar10 = puVar12, -1 < iVar23))
                {
                    puVar12 = puVar12 + 0x2c;
                    do {
                        *(undefined8 *)(puVar12 + -0x2c) = 0x3f800000;
                        iVar23 = iVar23 + -1;
                        *(undefined8 *)(puVar12 + -0x24) = 0;
                        *(undefined4 *)(puVar12 + -0x1c) = 0;
                        *(undefined8 *)(puVar12 + -0x18) = 0x3f800000;
                        *(undefined8 *)(puVar12 + -0x10) = 0;
                        *(undefined4 *)(puVar12 + -8) = 0;
                        *(undefined8 *)(puVar12 + -4) = 0x3f800000;
                        *(undefined8 *)(puVar12 + 4) = 0;
                        *(undefined8 *)(puVar12 + 0xc) = 0;
                        *(undefined8 *)(puVar12 + 0x14) = 0;
                        *(undefined8 *)(puVar12 + 0x1c) = 0;
                        *(undefined8 *)(puVar12 + 0x24) = 0;
                        *(undefined8 *)(puVar12 + 0x2c) = 0;
                        *(undefined4 *)(puVar12 + 0x34) = 0;
                        *(undefined8 *)(puVar12 + 0x38) = 0x3f800000;
                        *(undefined8 *)(puVar12 + 0x40) = 0;
                        *(undefined8 *)(puVar12 + 0x48) = 0;
                        *(undefined8 *)(puVar12 + 0x50) = 0;
                        *(undefined8 *)(puVar12 + 0x58) = 0;
                        *(undefined8 *)(puVar12 + 0x60) = 0;
                        *(undefined8 *)(puVar12 + 0x68) = 0;
                        *(undefined8 *)(puVar12 + 0x70) = 0;
                        *(undefined8 *)(puVar12 + 0x78) = 0;
                        *(undefined8 *)(puVar12 + 0x80) = 0;
                        *(undefined4 *)(puVar12 + 0x94) = 0x3f800000;
                        *(undefined4 *)(puVar12 + 0x98) = 0x3f800000;
                        *(undefined4 *)(puVar12 + 0x9c) = 0x3f800000;
                        *(undefined4 *)(puVar12 + 0xa0) = 0x3f800000;
                        *(undefined8 *)(puVar12 + 0xa4) = 0;
                        *(undefined8 *)(puVar12 + 0xac) = 0;
                        puVar12 = puVar12 + 0xe0;
                    } while (-1 < iVar23);
                }
                puVar13[1] = puVar10;
                uVar24 = (int)puVar11 + 1;
                puVar11 = (undefined *)(ulonglong)uVar24;
                *(undefined *)(puVar13 + 0xb) = *(undefined *)(puVar9 + 6);
                *(undefined *)((longlong)puVar13 + 0x59) = *(undefined *)(puVar9 + 7);
            } while (uVar24 < *(uint *)(param_1[8] + 0x1f0));
        }
    }
    fVar40 = 0.0;
    fVar35 = 0.0;
    if (*(uint *)(param_1[8] + 0x2c8) == 0) {
        LAB_1402f4572:
        uVar37 = uRam0000000140c798ac;
        uVar36 = uRam0000000140c798a8;
        uVar34 = uRam0000000140c798a4;
        if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
            *(undefined4 *)(param_1 + 200) = _DAT_140c798a0;
            *(undefined4 *)((longlong)param_1 + 0x644) = uVar34;
            *(undefined4 *)(param_1 + 0xc9) = uVar36;
            *(undefined4 *)((longlong)param_1 + 0x64c) = uVar37;
            uVar37 = uRam0000000140c798bc;
            uVar36 = uRam0000000140c798b8;
            uVar34 = uRam0000000140c798b4;
            *(undefined4 *)(param_1 + 0xca) = _DAT_140c798b0;
            *(undefined4 *)((longlong)param_1 + 0x654) = uVar34;
            *(undefined4 *)(param_1 + 0xcb) = uVar36;
            *(undefined4 *)((longlong)param_1 + 0x65c) = uVar37;
            uVar37 = uRam0000000140c783dc;
            uVar36 = uRam0000000140c783d8;
            uVar34 = uRam0000000140c783d4;
            *(undefined4 *)(param_1 + 0xcc) = _DAT_140c783d0;
            *(undefined4 *)((longlong)param_1 + 0x664) = uVar34;
            *(undefined4 *)(param_1 + 0xcd) = uVar36;
            *(undefined4 *)((longlong)param_1 + 0x66c) = uVar37;
            *(undefined4 *)(param_1 + 0xce) = DAT_140c783e0;
            goto LAB_1402f464c;
        }
    }
    else {
        auVar4 = ZEXT816(4) * ZEXT416(*(uint *)(param_1[8] + 0x2c8));
        uVar6 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6);
        param_1[0x8b] = lVar7;
        lVar7 = FUN_14018b280();
        param_1[0x8c] = lVar7;
        puVar11 = puVar18;
        if (*(int *)(param_1[8] + 0x2c8) == 0) goto LAB_1402f4572;
        do {
            *(undefined4 *)(param_1[0x8b] + (longlong)puVar11 * 4) =
                    *(undefined4 *)(*(longlong *)(param_1[8] + 0x2d0) + 4 + (longlong)puVar11 * 8);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64ca4 == 0) && (iVar23 = FUN_1402338a0(), -1 < iVar23)) {
                    lVar7 = (**(code **)(*DAT_140c63d88 + 0x18))();
                    goto LAB_1402f4529;
                }
                LAB_1402f4550:
                *(undefined4 *)(param_1[0x8c] + (longlong)puVar11 * 4) = 0;
            }
            else {
                lVar7 = (*DAT_140c63840)();
                LAB_1402f4529:
                if (lVar7 == 0) goto LAB_1402f4550;
                fVar30 = *(float *)(lVar7 + 0x14);
                *(undefined4 *)(param_1[0x8c] + (longlong)puVar11 * 4) = *(undefined4 *)(lVar7 + 0x38);
                if (fVar35 <= fVar30) {
                    fVar35 = fVar30;
                }
            }
            uVar24 = (int)puVar11 + 1;
            puVar11 = (undefined *)(ulonglong)uVar24;
        } while (uVar24 < *(uint *)(param_1[8] + 0x2c8));
        if (fVar35 == fVar40) goto LAB_1402f4572;
    }
    lVar7 = param_1[8];
    fVar35 = fVar35 * 1.1;
    *(undefined (*) [16])(param_1 + 200) =
            CONCAT412(*(float *)(lVar7 + 0x41c) - fVar35,
                      CONCAT48(*(float *)(lVar7 + 0x418) - fVar35,
                               CONCAT44(*(float *)(lVar7 + 0x414) - fVar35,
                                        *(float *)(lVar7 + 0x410) - fVar35)));
    lVar7 = param_1[8];
    fVar40 = *(float *)(lVar7 + 0x420) + fVar35;
    fVar30 = *(float *)(lVar7 + 0x424) + fVar35;
    fVar31 = *(float *)(lVar7 + 0x428) + fVar35;
    fVar35 = *(float *)(lVar7 + 0x42c) + fVar35;
    *(undefined (*) [16])(param_1 + 0xca) = CONCAT412(fVar35,CONCAT48(fVar31,CONCAT44(fVar30,fVar40)))
            ;
    fVar32 = fVar40 - *(float *)(param_1 + 200);
    fVar33 = fVar30 - *(float *)((longlong)param_1 + 0x644);
    *(undefined (*) [16])(param_1 + 0xcc) =
            CONCAT412((*(float *)((longlong)param_1 + 0x64c) + fVar35) * 0.5,
                      CONCAT48((*(float *)(param_1 + 0xc9) + fVar31) * 0.5,
                               CONCAT44((*(float *)((longlong)param_1 + 0x644) + fVar30) * 0.5,
                                        (*(float *)(param_1 + 200) + fVar40) * 0.5)));
    local_88 = SQRT(fVar32 * fVar32 + fVar33 * fVar33 + 0.0) * 0.5;
    *(float *)(param_1 + 0xce) = local_88;
    local_68 = local_88;
    LAB_1402f464c:
    uVar24 = *(uint *)(param_1[8] + 0x2b8);
    if (uVar24 != 0) {
        uVar8 = SUB168(ZEXT816(0x28) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x28) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar7 = uVar8 + 8;
        if (0xfffffffffffffff7 < uVar8) {
            lVar7 = -1;
        }
        puVar9 = (uint *)FUN_14018b280(lVar7,0);
        if (puVar9 == (uint *)0x0) {
            puVar20 = (uint *)0x0;
        }
        else {
            iVar23 = uVar24 - 1;
            *puVar9 = uVar24;
            puVar20 = puVar9 + 2;
            if (-1 < iVar23) {
                puVar9 = puVar9 + 6;
                do {
                    iVar23 = iVar23 + -1;
                    *(undefined8 *)(puVar9 + -4) = 0;
                    *(undefined8 *)(puVar9 + -2) = 0;
                    *puVar9 = 0;
                    *(undefined8 *)(puVar9 + 2) = 0;
                    *(undefined8 *)(puVar9 + 4) = 0;
                    puVar9 = puVar9 + 10;
                } while (-1 < iVar23);
            }
        }
        param_1[0x8d] = (longlong)puVar20;
        if (*(int *)(param_1[8] + 0x2b8) != 0) {
            do {
                uVar24 = 0;
                lVar7 = *(longlong *)(param_1[8] + 0x2c0);
                pplVar1 = (longlong **)(param_1[0x8d] + (longlong)puVar18 * 0x28);
                iVar23 = (**(code **)(*DAT_140c65848 + 0x28))();
                if (iVar23 < 0) {
                    local_1b0 = 0;
                    local_1b8 = &PTR_LAB_140b5e648;
                    local_1a8 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_1b8);
                    local_158 = local_1b8;
                    local_150 = local_1b0;
                    local_180 = &PTR_LAB_140b5e648;
                    uStack376 = L"Result";
                    local_148 = local_1a8;
                    local_170 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_180);
                    local_180 = &PTR_LAB_140b5e640;
                    local_108 = (undefined4)local_170;
                    uStack260 = local_170._4_4_;
                    uStack252 = uStack356;
                    local_118 = 0x40b5e640;
                    uStack276 = 1;
                    uStack272 = (undefined4)uStack376;
                    uStack268 = uStack376._4_4_;
                    uVar6 = *(undefined8 *)(param_1[7] + 0x18);
                    local_1a0 = &PTR_LAB_140b5e648;
                    local_198 = L"FileName";
                    iStack360 = iVar23;
                    iStack256 = iVar23;
                    local_190 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720,&local_1a0);
                    local_130 = local_198;
                    local_1a0 = &PTR_LAB_140b5e638;
                    local_138 = &PTR_LAB_140b5e638;
                    local_res8 = 0x141deb9e0;
                    local_128 = local_190;
                    local_188 = uVar6;
                    local_120 = uVar6;
                    iVar23 = FUN_1401971e0(&DAT_140c8a5f8,6,&local_res8,&local_138,&local_118,&local_158);
                    local_1a0 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_190);
                    local_180 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_170);
                    local_1b8 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720,local_1a8);
                    if (iVar23 != 0) {
                        DebugBreak();
                    }
                }
                if (*(int *)(param_1[8] + 0x2e8) != 0) {
                    do {
                        (**(code **)(**pplVar1 + 0x48))();
                        uVar24 = uVar24 + 1;
                    } while (uVar24 < *(uint *)(param_1[8] + 0x2e8));
                }
                iVar23 = *(int *)(lVar7 + 8 + (longlong)puVar18 * 0x28);
                if (iVar23 != 0) {
                    plVar15 = (longlong *)FUN_14018b280();
                    if (plVar15 == (longlong *)0x0) {
                        plVar15 = (longlong *)0x0;
                    }
                    else if (-1 < iVar23 + -1) {
                        FUN_1407e4830();
                    }
                    pplVar1[3] = plVar15;
                }
                uVar24 = *(uint *)(lVar7 + 0x18 + (longlong)puVar18 * 0x28);
                if (uVar24 != 0) {
                    uVar6 = SUB168(ZEXT816(0x14) * ZEXT416(uVar24),0);
                    if (SUB168(ZEXT816(0x14) * ZEXT416(uVar24) >> 0x40,0) != 0) {
                        uVar6 = 0xffffffffffffffff;
                    }
                    plVar15 = (longlong *)FUN_14018b280(uVar6,0);
                    if (plVar15 == (longlong *)0x0) {
                        plVar15 = (longlong *)0x0;
                    }
                    else if (-1 < (int)(uVar24 - 1)) {
                        FUN_1407e4830(plVar15,0);
                    }
                    pplVar1[4] = plVar15;
                    plVar15 = (longlong *)FUN_14018b280();
                    pplVar1[1] = plVar15;
                    *(undefined4 *)(pplVar1 + 2) = *(undefined4 *)(lVar7 + 0x18 + (longlong)puVar18 * 0x28);
                    FUN_1407e4830();
                }
                uVar24 = (int)puVar18 + 1;
                puVar18 = (undefined *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x2b8));
        }
    }
    plVar15 = (longlong *)0x0;
    uVar24 = *(uint *)(param_1[8] + 0x308);
    if (uVar24 != 0) {
        uVar6 = SUB168(ZEXT816(0x48) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x48) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        plVar16 = (longlong *)FUN_14018b280(uVar6);
        plVar22 = plVar15;
        if ((plVar16 != (longlong *)0x0) && (iVar23 = uVar24 - 1, plVar22 = plVar16, -1 < iVar23)) {
            puVar18 = (undefined *)((longlong)plVar16 + 0x1c);
            do {
                iVar23 = iVar23 + -1;
                *(undefined8 *)(puVar18 + -0x14) = 0;
                *(undefined8 *)(puVar18 + -0xc) = 0;
                *(undefined8 *)(puVar18 + -4) = 0;
                *(undefined8 *)(puVar18 + 4) = 0;
                *(undefined8 *)(puVar18 + 0xc) = 0;
                *(undefined8 *)(puVar18 + 0x14) = 0;
                *(undefined8 *)(puVar18 + 0x1c) = 0;
                *(undefined4 *)(puVar18 + 0x24) = 0;
                puVar18 = puVar18 + 0x48;
            } while (-1 < iVar23);
        }
        param_1[0xb1] = (longlong)plVar22;
        plVar22 = plVar15;
        if (*(int *)(param_1[8] + 0x308) != 0) {
            do {
                uVar24 = (int)plVar22 + 1;
                *(undefined8 *)(param_1[0xb1] + (longlong)plVar22 * 0x48) =
                        *(undefined8 *)
                                ((ulonglong)*(ushort *)(*(longlong *)(param_1[8] + 0x310) + (longlong)plVar22 * 0x50)
                                 * 0x160 + param_1[0x69]);
                plVar22 = (longlong *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x308));
        }
    }
    if (*(uint *)(param_1[8] + 0x2f8) != 0) {
        auVar4 = ZEXT816(8) * ZEXT416(*(uint *)(param_1[8] + 0x2f8));
        uVar6 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6);
        param_1[0xb2] = lVar7;
        FUN_1407e4830();
        plVar22 = plVar15;
        if (*(int *)(param_1[8] + 0x2f8) != 0) {
            do {
                lVar7 = (longlong)plVar22 * 0xa0 + *(longlong *)(param_1[8] + 0x300);
                iVar23 = *(int *)(lVar7 + 4);
                plVar16 = plVar15;
                if (iVar23 == 0) {
                    cVar2 = **(char **)(lVar7 + 0x90);
                    if (cVar2 != '\0') {
                        if (cVar2 == '\x01') {
                            lVar7 = FUN_14018b280(0x5a0,0);
                            if (lVar7 != 0) {
                                plVar16 = (longlong *)FUN_140319e40(lVar7);
                            }
                            goto LAB_1402f4c18;
                        }
                        if (cVar2 != '\x02') goto LAB_1402f4c46;
                    }
                    lVar7 = FUN_14018b280(0x590,0);
                    if (lVar7 != 0) {
                        plVar16 = (longlong *)FUN_140312ff0(lVar7);
                    }
                    LAB_1402f4c18:
                    iVar23 = (**(code **)(*plVar16 + 0x18))(plVar16);
                    if (iVar23 < 0) {
                        (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                    else {
                        *(longlong **)(param_1[0xb2] + (longlong)plVar22 * 8) = plVar16;
                    }
                }
                else if (iVar23 == 1) {
                    lVar7 = FUN_14018b280(0x6b0,0);
                    if (lVar7 != 0) {
                        plVar16 = (longlong *)FUN_14031ce90(lVar7);
                    }
                    goto LAB_1402f4c18;
                }
                LAB_1402f4c46:
                if (((*(longlong *)(param_1[0xb2] + (longlong)plVar22 * 8) != 0) &&
                     (*(int *)(param_1 + 0xb4) != 0)) && (*(int *)((longlong)param_1 + 0x5a4) != 0)) {
                    (**(code **)(**(longlong **)(param_1[0xb2] + (longlong)plVar22 * 8) + 0x40))();
                }
                uVar24 = (int)plVar22 + 1;
                plVar22 = (longlong *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x2f8));
        }
        if (*(longlong **)(param_1[2] + 0x1e8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1[2] + 0x1e8) + 0xf0))();
        }
    }
    iVar23 = *(int *)(param_1[8] + 0x318);
    if (iVar23 != 0) {
        piVar14 = (int *)FUN_14018b280();
        if (piVar14 == (int *)0x0) {
            piVar26 = (int *)0x0;
        }
        else {
            piVar26 = piVar14 + 4;
            *piVar14 = iVar23;
            while (iVar23 = iVar23 + -1, -1 < iVar23) {
                FUN_1402f2170();
            }
        }
        param_1[0xb7] = (longlong)piVar26;
        if ((*(longlong *)(param_1[2] + 0x1e8) != 0) &&
            (plVar22 = plVar15, *(int *)(param_1[8] + 0x318) != 0)) {
            do {
                (**(code **)(**(longlong **)(param_1[2] + 0x1e8) + 0xe8))();
                uVar24 = (int)plVar22 + 1;
                plVar22 = (longlong *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x318));
        }
    }
    uVar24 = *(uint *)(param_1[8] + 0x560);
    if (uVar24 != 0) {
        uVar8 = SUB168(ZEXT816(0x88) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x88) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar7 = uVar8 + 8;
        if (0xfffffffffffffff7 < uVar8) {
            lVar7 = -1;
        }
        puVar9 = (uint *)FUN_14018b280(lVar7,0);
        if (puVar9 == (uint *)0x0) {
            puVar20 = (uint *)0x0;
        }
        else {
            iVar23 = uVar24 - 1;
            *puVar9 = uVar24;
            puVar20 = puVar9 + 2;
            if (-1 < iVar23) {
                puVar13 = (undefined8 *)(puVar9 + 6);
                do {
                    iVar23 = iVar23 + -1;
                    *puVar13 = 0;
                    puVar13[1] = 0;
                    puVar13[2] = 0;
                    puVar13[3] = 0;
                    puVar13[4] = 0;
                    puVar13[5] = 0;
                    puVar13[6] = 0;
                    puVar13[7] = 0;
                    puVar13[8] = 0;
                    puVar13[9] = 0;
                    puVar13[10] = 0;
                    puVar13[0xb] = 0;
                    puVar13[0xc] = 0;
                    puVar13[0xd] = 0;
                    *(undefined4 *)(puVar13 + 0xe) = 0;
                    puVar13 = puVar13 + 0x11;
                } while (-1 < iVar23);
            }
        }
        param_1[0xb8] = (longlong)puVar20;
        if (*(int *)(param_1[8] + 0x560) != 0) {
            local_res8 = CONCAT44(local_res8._4_4_,0x100);
            local_res10 = 1;
            plVar22 = plVar15;
            do {
                uVar24 = (int)plVar22 + 1;
                plVar16 = (longlong *)((longlong)plVar22 * 0x88 + param_1[0xb8]);
                lVar7 = *(longlong *)(param_1[8] + 0x568);
                *(undefined4 *)(plVar16 + 4) = 0;
                *(undefined2 *)((longlong)plVar16 + 0x34) = 0;
                *(undefined4 *)(plVar16 + 9) = 0xff7f7f7f;
                *(undefined4 *)((longlong)plVar16 + 0x5c) = 0x100;
                *(undefined4 *)(plVar16 + 0xe) = 1;
                *plVar16 = (longlong)plVar22 * 0xa0 + lVar7;
                plVar22 = (longlong *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x560));
        }
    }
    uVar24 = *(uint *)(param_1[8] + 0x570);
    if (uVar24 != 0) {
        uVar8 = SUB168(ZEXT816(0x30) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x30) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        lVar7 = uVar8 + 8;
        if (0xfffffffffffffff7 < uVar8) {
            lVar7 = -1;
        }
        puVar9 = (uint *)FUN_14018b280(lVar7,0);
        if (puVar9 == (uint *)0x0) {
            puVar20 = (uint *)0x0;
        }
        else {
            iVar23 = uVar24 - 1;
            *puVar9 = uVar24;
            puVar20 = puVar9 + 2;
            if (-1 < iVar23) {
                puVar13 = (undefined8 *)(puVar9 + 4);
                do {
                    iVar23 = iVar23 + -1;
                    *puVar13 = 0;
                    puVar13[1] = 0;
                    *(undefined4 *)(puVar13 + 2) = 0;
                    puVar13[3] = 0;
                    puVar13[4] = 0;
                    puVar13 = puVar13 + 6;
                } while (-1 < iVar23);
            }
        }
        param_1[0xba] = (longlong)puVar20;
        plVar22 = plVar15;
        if (*(int *)(param_1[8] + 0x570) != 0) {
            do {
                uVar24 = (int)plVar22 + 1;
                *(longlong *)(param_1[0xba] + (longlong)plVar22 * 0x30) =
                        (longlong)plVar22 * 0x20 + *(longlong *)(param_1[8] + 0x578);
                plVar22 = (longlong *)(ulonglong)uVar24;
            } while (uVar24 < *(uint *)(param_1[8] + 0x570));
        }
    }
    uVar24 = *(uint *)(param_1[8] + 0x540);
    if (uVar24 != 0) {
        uVar6 = SUB168(ZEXT816(0x80) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x80) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        plVar16 = (longlong *)FUN_14018b280(uVar6);
        plVar22 = plVar15;
        if ((plVar16 != (longlong *)0x0) && (iVar23 = uVar24 - 1, plVar22 = plVar16, -1 < iVar23)) {
            plVar16 = plVar16 + 8;
            do {
                iVar23 = iVar23 + -1;
                plVar16[-8] = 0;
                plVar16[-7] = 0;
                *(undefined4 *)(plVar16 + -6) = 0;
                plVar16[-4] = 0;
                plVar16[-3] = 0;
                plVar16[-2] = 0;
                plVar16[-1] = 0;
                *plVar16 = 0;
                plVar16[1] = 0;
                plVar16[2] = 0;
                plVar16[3] = 0;
                plVar16[4] = 0;
                plVar16[5] = 0;
                plVar16[6] = 0;
                plVar16[7] = 0;
                plVar16 = plVar16 + 0x10;
            } while (-1 < iVar23);
        }
        param_1[0xd0] = (longlong)plVar22;
    }
    uVar24 = *(uint *)(param_1[8] + 0x588);
    if (uVar24 != 0) {
        uVar6 = SUB168(ZEXT816(0x14) * ZEXT416(uVar24),0);
        if (SUB168(ZEXT816(0x14) * ZEXT416(uVar24) >> 0x40,0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6,0);
        if (lVar7 == 0) {
            lVar7 = 0;
        }
        else if (-1 < (int)(uVar24 - 1)) {
            FUN_1407e4830(lVar7,0,(ulonglong)uVar24 * 0x14);
        }
        param_1[0xd1] = lVar7;
    }
    fVar35 = *(float *)(param_1[8] + 0x5e0);
    fVar40 = *(float *)(param_1[8] + 0x5d8);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)((longlong)param_1 + 0x6c4) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x5e4);
    fVar40 = *(float *)(param_1[8] + 0x5dc);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)(param_1 + 0xd9) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x5f0);
    fVar40 = *(float *)(param_1[8] + 0x5e8);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)((longlong)param_1 + 0x6cc) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x5f4);
    fVar40 = *(float *)(param_1[8] + 0x5ec);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)(param_1 + 0xda) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x600);
    fVar40 = *(float *)(param_1[8] + 0x5f8);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)((longlong)param_1 + 0x6d4) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x604);
    fVar40 = *(float *)(param_1[8] + 0x5fc);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)(param_1 + 0xdb) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x610);
    fVar40 = *(float *)(param_1[8] + 0x608);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)((longlong)param_1 + 0x6dc) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x614);
    fVar40 = *(float *)(param_1[8] + 0x60c);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)(param_1 + 0xdc) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x620);
    fVar40 = *(float *)(param_1[8] + 0x618);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    *(float *)((longlong)param_1 + 0x6e4) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    fVar35 = *(float *)(param_1[8] + 0x624);
    fVar40 = *(float *)(param_1[8] + 0x61c);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x28))();
    *(float *)(param_1 + 0xdd) = (float)(dVar5 * (double)(fVar35 - fVar40)) + fVar40;
    plVar22 = plVar15;
    do {
        lVar7 = param_1[8];
        uVar8 = (ulonglong)*(int *)(plVar22 + 0x2815e283);
        if (((uVar8 < *(uint *)(lVar7 + 0x210)) &&
             (uVar3 = *(ushort *)(*(longlong *)(lVar7 + 0x218) + uVar8 * 2), uVar3 != 0xffff)) &&
            ((*(byte *)(*(longlong *)(lVar7 + 0x208) + 2 + (ulonglong)uVar3 * 4) & 1) != 0)) {
            (**(code **)(*param_1 + 0x2d8))(param_1,uVar8,1);
        }
        plVar22 = (longlong *)((longlong)plVar22 + 4);
        plVar16 = plVar15;
        plVar27 = plVar15;
    } while (plVar22 < &DAT_00000010);
    do {
        if ((*(int *)((longlong)plVar16 + param_1[8] + 0x20) != 0) ||
            (*(int *)((longlong)plVar16 + param_1[8] + 0x90) != 0)) {
            plVar17 = (longlong *)FUN_14018b280(0x20);
            plVar22 = plVar15;
            if (plVar17 != (longlong *)0x0) {
                plVar17[1] = 0;
                plVar17[2] = 0;
                plVar17[3] = 0;
                *(int *)plVar17 = (int)plVar27;
                plVar22 = plVar17;
            }
            param_1[(ulonglong)*(uint *)(param_1 + 0x71) + 0x72] = (longlong)plVar22;
            *(int *)(param_1 + 0x71) = *(int *)(param_1 + 0x71) + 1;
            if (*(int *)((longlong)plVar16 + param_1[8] + 0x20) != 0) {
                FUN_1402f9480();
            }
            if (*(int *)((longlong)plVar16 + param_1[8] + 0x90) != 0) {
                FUN_1402f96a0();
            }
        }
        uVar24 = (int)plVar27 + 1;
        plVar16 = plVar16 + 3;
        plVar27 = (longlong *)(ulonglong)uVar24;
    } while (uVar24 < 4);
    local_res18 = (longlong *)0x0;
    if (param_1[9] != 0) {
        do {
            plVar15 = (longlong *)param_1[9];
            if ((longlong *)plVar15[2] != (longlong *)0x0) {
                *(longlong *)plVar15[2] = plVar15[3];
            }
            pplVar1 = (longlong **)(plVar15 + 3);
            if (plVar15[3] != 0) {
                *(longlong *)(plVar15[3] + 0x10) = plVar15[2];
            }
            *pplVar1 = (longlong *)0x0;
            plVar15[2] = (longlong)&local_res18;
            *pplVar1 = local_res18;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[2] = (longlong)pplVar1;
            }
            local_res18 = plVar15;
        } while (param_1[9] != 0);
        while ((local_res18 != (longlong *)0x0 &&
                ((**(code **)(*local_res18 + 8))(local_res18), local_res18 != (longlong *)0x0))) {
            (**(code **)*local_res18)(local_res18,1);
        }
    }
    return;
}



void FUN_1402f5c20(longlong param_1,uint param_2)

{
    longlong lVar1;

    if ((param_2 & *(uint *)(param_1 + 0x30)) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x4c0);
        *(uint *)(param_1 + 0x30) = ~param_2 & *(uint *)(param_1 + 0x30);
        for (; (lVar1 != 0 && ((*(uint *)(lVar1 + 0x30) & 4) != 0));
               lVar1 = *(longlong *)(lVar1 + 0x4c0)) {
            *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) & 0xfffffffb;
        }
        if ((*(uint *)(param_1 + 0x34) & 1) != 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
            for (lVar1 = *(longlong *)(param_1 + 0x4c0);
                 (lVar1 != 0 && ((*(uint *)(lVar1 + 0x34) & 0x20) != 0));
                 lVar1 = *(longlong *)(lVar1 + 0x4c0)) {
                *(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) & 0xffffffdf;
            }
        }
    }
    return;
}



void FUN_1402f5ca0(longlong param_1,uint param_2)

{
    longlong lVar1;

    if ((param_2 & *(uint *)(param_1 + 0x34)) != 0) {
        *(uint *)(param_1 + 0x34) = ~param_2 & *(uint *)(param_1 + 0x34);
        for (lVar1 = *(longlong *)(param_1 + 0x4c0);
             (lVar1 != 0 && ((*(uint *)(lVar1 + 0x34) & 0x20) != 0));
             lVar1 = *(longlong *)(lVar1 + 0x4c0)) {
            *(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) & 0xffffffdf;
        }
    }
    return;
}



void FUN_1402f5ce0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    if ((*(uint *)(param_1 + 0x580) & 2) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x4d0);
        *(uint *)(param_1 + 0x584) = *(uint *)(param_1 + 0x584) & 0xfffffffd;
        *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) & 0xfffffffd;
        for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x4e0)) {
            if ((*(uint *)(lVar2 + 0x580) & 2) != 0) {
                lVar1 = *(longlong *)(lVar2 + 0x4d0);
                *(uint *)(lVar2 + 0x584) = *(uint *)(lVar2 + 0x584) & 0xfffffffd;
                *(uint *)(lVar2 + 0x580) = *(uint *)(lVar2 + 0x580) & 0xfffffffd;
                for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
                    FUN_1402f5da0();
                }
            }
        }
        for (lVar2 = *(longlong *)(param_1 + 0x4c0);
             (lVar2 != 0 && ((*(uint *)(lVar2 + 0x584) & 2) != 0)); lVar2 = *(longlong *)(lVar2 + 0x4c0))
        {
            *(uint *)(lVar2 + 0x584) = *(uint *)(lVar2 + 0x584) & 0xfffffffd;
        }
    }
    return;
}



void FUN_1402f5da0(longlong param_1)

{
    longlong lVar1;

    if ((*(uint *)(param_1 + 0x580) & 2) != 0) {
        *(uint *)(param_1 + 0x584) = *(uint *)(param_1 + 0x584) & 0xfffffffd;
        lVar1 = *(longlong *)(param_1 + 0x4d0);
        *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) & 0xfffffffd;
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            FUN_1402f5da0(lVar1);
        }
    }
    return;
}



void FUN_1402f5df0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    if ((*(byte *)(param_1 + 0x30) & 8) != 0) {
        plVar1 = (longlong *)(param_1 + 0x4c0);
        lVar2 = *plVar1;
        while ((lVar2 != 0 && (*(int *)(param_1 + 0x4b0) == 0))) {
            param_1 = *plVar1;
            plVar1 = (longlong *)(param_1 + 0x4c0);
            lVar2 = *plVar1;
        }
        FUN_1402f5c20(param_1,8);
        for (lVar2 = *(longlong *)(param_1 + 0x4d0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x4e0)) {
            if (*(int *)(lVar2 + 0x4b0) == 0) {
                FUN_1402f5e70(lVar2);
            }
        }
    }
    return;
}



void FUN_1402f5e70(longlong param_1)

{
    longlong lVar1;

    FUN_1402f5c20(param_1,8);
    for (lVar1 = *(longlong *)(param_1 + 0x4d0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
        if (*(int *)(lVar1 + 0x4b0) == 0) {
            FUN_1402f5e70(lVar1);
        }
    }
    return;
}



undefined8 FUN_1402f5ec0(longlong *param_1,longlong *param_2)

{
    int iVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x18))(param_1,local_18,0);
    if (param_1[0x8e] != 0) {
        iVar1 = FUN_140300dd0(param_1,8);
        if (-1 < iVar1) {
            *param_2 = param_1[8];
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1[0x8e] + 0x30);
            param_2[2] = *(longlong *)(param_1[0x8e] + 0x40);
            param_2[3] = *(longlong *)(param_1[7] + 0xa0);
            param_2[4] = param_1[0x8f];
            param_2[5] = param_1[0x67];
            return 0;
        }
    }
    *param_2 = param_1[8];
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    return 0;
}



longlong FUN_1402f5f80(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8];
}



void FUN_1402f5fc0(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    float fVar5;

    iVar4 = FUN_1407e6af0(param_1 + 0x50,param_2,0x40);
    if (iVar4 != 0) {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *(undefined4 *)(param_1 + 0x50) = *param_2;
        *(undefined4 *)(param_1 + 0x54) = uVar1;
        *(undefined4 *)(param_1 + 0x58) = uVar2;
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        uVar1 = param_2[5];
        uVar2 = param_2[6];
        uVar3 = param_2[7];
        *(undefined4 *)(param_1 + 0x60) = param_2[4];
        *(undefined4 *)(param_1 + 100) = uVar1;
        *(undefined4 *)(param_1 + 0x68) = uVar2;
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
        uVar1 = param_2[9];
        uVar2 = param_2[10];
        uVar3 = param_2[0xb];
        *(undefined4 *)(param_1 + 0x70) = param_2[8];
        *(undefined4 *)(param_1 + 0x74) = uVar1;
        *(undefined4 *)(param_1 + 0x78) = uVar2;
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
        uVar1 = param_2[0xd];
        uVar2 = param_2[0xe];
        uVar3 = param_2[0xf];
        *(undefined4 *)(param_1 + 0x80) = param_2[0xc];
        *(undefined4 *)(param_1 + 0x84) = uVar1;
        *(undefined4 *)(param_1 + 0x88) = uVar2;
        *(undefined4 *)(param_1 + 0x8c) = uVar3;
        *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) & 0xfffffff7;
        fVar5 = SQRT(*(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) +
                     *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54) + 0.0);
        *(float *)(param_1 + 0x90) = fVar5;
        *(float *)(param_1 + 0x94) = 1.0 / fVar5;
    }
    return;
}



void FUN_1402f6200(longlong param_1,int *param_2)

{
    longlong *plVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 local_18;
    undefined4 local_14;
    float local_10;

    if ((*(int *)(param_1 + 0x428) == *param_2) && ((float)param_2[1] == *(float *)(param_1 + 0x42c)))
    {
        uVar2 = *(uint *)(param_1 + 0x430);
        if ((int)(param_2[2] ^ uVar2) < 0) {
            uVar2 = 0x80000000 - uVar2;
        }
        uVar2 = uVar2 - param_2[2];
        uVar3 = (int)uVar2 >> 0x1f;
        if ((int)((uVar2 ^ uVar3) - uVar3) < 0x55) {
            return;
        }
    }
    *(int *)(param_1 + 0x428) = *param_2;
    *(int *)(param_1 + 0x42c) = param_2[1];
    *(int *)(param_1 + 0x430) = param_2[2];
    if (((*(byte *)(param_1 + 0x30) & 1) != 0) &&
        (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 0x40) + 0x1c0) != 0)) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x420) + 0x10 + uVar4 * 0x18);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x30))();
            }
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x1c0));
    }
    for (plVar1 = *(longlong **)(param_1 + 0x4d0); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[0x9c]) {
        local_18 = *(undefined4 *)(param_1 + 0x428);
        local_14 = *(undefined4 *)(param_1 + 0x42c);
        local_10 = *(float *)((longlong)plVar1 + 0x94) * *(float *)(param_1 + 0x430);
        (**(code **)(*plVar1 + 0xf0))(plVar1,&local_18);
    }
    return;
}



void FUN_1402f63a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong)param_2;
    if ((*(longlong *)(param_1 + 0x4c0) == 0) && (*(uint *)(param_1 + 0x698) != param_2)) {
        lVar1 = *(longlong *)(param_1 + 0x4d0);
        *(uint *)(param_1 + 0x698) = param_2;
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            lVar1 = FUN_1402f63f0(lVar1,uVar2 & 0xffffffff);
        }
    }
    return;
}



void FUN_1402f63f0(longlong param_1,int param_2)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x698) != param_2) {
        lVar1 = *(longlong *)(param_1 + 0x4d0);
        *(int *)(param_1 + 0x698) = param_2;
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            FUN_1402f63f0(lVar1,param_2);
        }
    }
    return;
}



void FUN_1402f6470(longlong param_1,int param_2)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x720) != param_2) {
        lVar1 = *(longlong *)(param_1 + 0x4d0);
        *(int *)(param_1 + 0x720) = param_2;
        for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            FUN_1402f6470(lVar1,param_2);
        }
    }
    return;
}



void FUN_1402f6600(longlong param_1,int param_2)

{
    longlong lVar1;

    if ((*(longlong *)(param_1 + 0x4c0) == 0) && (*(int *)(param_1 + 0x140) != param_2)) {
        *(int *)(param_1 + 0x140) = param_2;
        if (param_2 == 0) {
            FUN_1402faf90();
        }
        for (lVar1 = *(longlong *)(param_1 + 0x4d0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            FUN_1402f6670(lVar1,*(undefined4 *)(param_1 + 0x140));
        }
    }
    return;
}



void FUN_1402f6670(longlong param_1,int param_2)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x140) != param_2) {
        *(int *)(param_1 + 0x140) = param_2;
        if (param_2 == 0) {
            FUN_1402faf90();
        }
        for (lVar1 = *(longlong *)(param_1 + 0x4d0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
            FUN_1402f6670(lVar1,*(undefined4 *)(param_1 + 0x140));
        }
    }
    return;
}



void FUN_1402f6700(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;

    if ((*(longlong *)(param_1 + 0x468) != 0) &&
        (uVar3 = 0, *(int *)(*(longlong *)(param_1 + 0x40) + 0x2b8) != 0)) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + uVar3 * 0x28);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x2b8));
    }
    return;
}



void FUN_1402f6790(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
    longlong *plVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if ((*(longlong *)(param_4 + 0x468) != 0) &&
        (uVar3 = 0, *(int *)(*(longlong *)(param_4 + 0x40) + 0x2b8) != 0)) {
        do {
            plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x468) + uVar3 * 0x28);
            if (plVar1 != (longlong *)0x0) {
                param_1 = (**(code **)(*plVar1 + 0x50))
                        (param_1,param_2,param_3,plVar1,param_5,param_6,param_7,auVar4);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(*(longlong *)(param_4 + 0x40) + 0x2b8));
    }
    return;
}



void FUN_1402f6c40(longlong *param_1,int param_2,uint param_3)

{
    ushort uVar1;
    short sVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint *puVar12;
    ulonglong uVar13;
    short *psVar14;
    short *psVar15;
    undefined auStack232 [32];
    undefined4 local_c8;
    uint local_b8 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_c8 = 0xffffffff;
    (**(code **)(*param_1 + 0x578))();
    uVar10 = 0;
    lVar3 = *(longlong *)(param_1[7] + 0xb8);
    uVar9 = 0;
    uVar7 = *(uint *)(lVar3 + 0x20);
    if (uVar7 != 0) {
        do {
            uVar4 = (uVar7 - uVar9 >> 1) + uVar9;
            uVar6 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)uVar4 * 2);
            if ((int)uVar6 <= param_2) {
                if (param_2 <= (int)uVar6) {
                    uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)uVar4 * 2);
                    goto LAB_1402f6cd9;
                }
                uVar9 = uVar4 + 1;
                uVar4 = uVar7;
            }
            uVar7 = uVar4;
        } while (uVar9 < uVar7);
    }
    uVar1 = *(ushort *)(lVar3 + 0x1c);
    LAB_1402f6cd9:
    uVar11 = (ulonglong)uVar1;
    uVar13 = 0;
    lVar3 = *(longlong *)(param_1[8] + 0x18);
    uVar7 = *(uint *)(param_1[8] + 0x10);
    psVar15 = (short *)(uVar11 * 0x70 + lVar3);
    sVar2 = *psVar15;
    uVar8 = uVar11;
    psVar14 = psVar15;
    if (uVar1 < uVar7) {
        do {
            if ((0x1f < (uint)uVar13) || (*psVar14 != sVar2)) break;
            uVar9 = *(uint *)(psVar14 + 0xc);
            uVar4 = *(uint *)(psVar14 + 0xe);
            if (uVar9 == uVar4) {
                LAB_1402f6d48:
                local_b8[uVar13] = (uint)uVar8;
                uVar13 = (ulonglong)((uint)uVar13 + 1);
            }
            else {
                uVar6 = *(uint *)(param_1[2] + 0x1f0);
                if (uVar9 < uVar4) {
                    if ((uVar9 <= uVar6) && (uVar6 < uVar4)) goto LAB_1402f6d48;
                }
                else if ((uVar6 < uVar4) || (uVar9 <= uVar6)) goto LAB_1402f6d48;
            }
            uVar9 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar9;
            psVar14 = psVar14 + 0x38;
        } while (uVar9 < uVar7);
        if ((int)uVar13 == 0) {
            uVar8 = uVar13;
            if (uVar7 <= uVar1) goto LAB_1402f6df6;
            do {
                uVar13 = uVar8;
                if ((0x1f < (uint)uVar8) || (*psVar15 != sVar2)) break;
                psVar15 = psVar15 + 0x38;
                uVar13 = (ulonglong)((uint)uVar8 + 1);
                local_b8[uVar8] = (uint)uVar11;
                uVar9 = (uint)uVar11 + 1;
                uVar11 = (ulonglong)uVar9;
                uVar8 = uVar13;
            } while (uVar9 < uVar7);
        }
        uVar7 = (uint)uVar13;
        if (1 < uVar7) {
            iVar5 = 0;
            if (uVar7 != 0) {
                puVar12 = local_b8;
                iVar5 = 0;
                do {
                    uVar9 = *puVar12;
                    puVar12 = puVar12 + 1;
                    iVar5 = iVar5 + (uint)*(ushort *)((ulonglong)uVar9 * 0x70 + 8 + lVar3);
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            if ((iVar5 != 0) && (uVar9 = iVar5 * (param_3 & 0xffff) >> 0x10, uVar7 != 0)) {
                puVar12 = local_b8;
                do {
                    uVar4 = (uint)*(ushort *)((ulonglong)*puVar12 * 0x70 + 8 + lVar3);
                    if (uVar9 < uVar4) break;
                    uVar10 = uVar10 + 1;
                    uVar9 = uVar9 - uVar4;
                    puVar12 = puVar12 + 1;
                } while (uVar10 < uVar7);
            }
        }
    }
    LAB_1402f6df6:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



undefined8 FUN_1402f6e40(longlong *param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    lVar1 = *(longlong *)(param_1[7] + 0xb8);
    if (param_2 != 0x96) {
        uVar2 = FUN_1402ea550(lVar1,param_2);
        if (uVar2 == *(ushort *)(lVar1 + 0x1c)) {
            return 0;
        }
    }
    return 1;
}



undefined8 FUN_1402f6eb0(longlong *param_1,int param_2)

{
    ushort uVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    (**(code **)(*param_1 + 0x578))();
    uVar6 = 0;
    lVar2 = *(longlong *)(param_1[7] + 0xb8);
    uVar4 = *(uint *)(lVar2 + 0x20);
    if (uVar4 != 0) {
        do {
            uVar3 = (uVar4 - uVar6 >> 1) + uVar6;
            uVar5 = (uint)*(ushort *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)uVar3 * 2);
            if ((int)uVar5 <= param_2) {
                if (param_2 <= (int)uVar5) {
                    uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)uVar3 * 2);
                    goto LAB_1402f6f19;
                }
                uVar6 = uVar3 + 1;
                uVar3 = uVar4;
            }
            uVar4 = uVar3;
        } while (uVar6 < uVar4);
    }
    uVar1 = *(ushort *)(lVar2 + 0x1c);
    LAB_1402f6f19:
    uVar4 = uVar1 + 1;
    if ((uVar4 < *(uint *)(param_1[8] + 0x10)) &&
        (lVar2 = *(longlong *)(param_1[8] + 0x18),
                *(short *)((ulonglong)(uint)uVar1 * 0x70 + lVar2) ==
    *(short *)((ulonglong)uVar4 * 0x70 + lVar2))) {
        return 1;
    }
    return 0;
}



longlong FUN_1402f6f70(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
    uint uVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    uVar1 = FUN_1402f6c40(param_1,param_2,param_3);
    return (ulonglong)uVar1 * 0x70 + *(longlong *)(param_1[7] + 0x90);
}



int FUN_1402f6fd0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint uVar7;
    uint *puVar8;
    longlong lVar9;

    (**(code **)(*param_1 + 0x578))();
    uVar3 = FUN_1402f6c40();
    lVar2 = param_1[8];
    uVar7 = 0;
    uVar1 = *(uint *)(lVar2 + 0x290);
    lVar6 = (ulonglong)uVar3 * 0x70 + *(longlong *)(lVar2 + 0x18);
    uVar3 = uVar1;
    if (uVar1 != 0) {
        do {
            uVar4 = uVar3 + uVar7 >> 1;
            if (*(uint *)(*(longlong *)(lVar2 + 0x298) + (ulonglong)uVar4 * 4) < *(uint *)(lVar6 + 0xc)) {
                uVar7 = uVar4 + 1;
                uVar4 = uVar3;
            }
            uVar3 = uVar4;
        } while (uVar7 < uVar3);
    }
    if (uVar3 < uVar1) {
        lVar9 = (ulonglong)uVar3 * 2;
        puVar8 = (uint *)(*(longlong *)(lVar2 + 0x298) + (ulonglong)uVar3 * 4);
        do {
            if (*(uint *)(lVar6 + 0x10) <= *puVar8) {
                return -1;
            }
            uVar5 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x2a0) + lVar9);
            if ((*(short *)(*(longlong *)(lVar2 + 0x288) + uVar5 * 8) == 0) &&
                (*(int *)(*(longlong *)(lVar2 + 0x288) + 4 + uVar5 * 8) == param_4)) {
                return *(int *)(*(longlong *)(lVar2 + 0x298) + (ulonglong)uVar3 * 4) - *(int *)(lVar6 + 0xc)
                        ;
            }
            uVar3 = uVar3 + 1;
            puVar8 = puVar8 + 1;
            lVar9 = lVar9 + 2;
        } while (uVar3 < uVar1);
    }
    return -1;
}



void FUN_1402f7130(longlong *param_1,uint param_2,uint param_3)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint *puVar8;
    uint uVar9;
    longlong lVar10;
    int iVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    undefined auStack232 [32];
    undefined4 local_c8;
    uint local_b8 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_c8 = 0xffffffff;
    (**(code **)(*param_1 + 0x578))();
    lVar3 = param_1[8];
    uVar5 = FUN_140327080();
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar14 = (ulonglong)uVar5;
    if (uVar5 < uVar12) {
        uVar15 = 0;
        lVar13 = uVar14 * 0x30;
        uVar5 = 0;
        uVar7 = uVar14;
        lVar10 = lVar13;
        do {
            if ((0x1f < uVar5) ||
                (lVar4 = *(longlong *)(lVar3 + 0x88), *(ushort *)(lVar4 + lVar10) != param_2)) break;
            uVar9 = *(uint *)(lVar4 + 0x14 + lVar10);
            uVar1 = *(uint *)(lVar4 + 0x18 + lVar10);
            if (uVar9 == uVar1) {
                LAB_1402f7205:
                uVar6 = (ulonglong)uVar5;
                uVar5 = uVar5 + 1;
                local_b8[uVar6] = (uint)uVar7;
            }
            else {
                uVar2 = *(uint *)(param_1[2] + 0x1f0);
                if (uVar9 < uVar1) {
                    if ((uVar9 <= uVar2) && (uVar2 < uVar1)) goto LAB_1402f7205;
                }
                else if ((uVar2 < uVar1) || (uVar9 <= uVar2)) goto LAB_1402f7205;
            }
            uVar9 = (uint)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
            lVar10 = lVar10 + 0x30;
        } while (uVar9 < uVar12);
        if (uVar5 == 0) {
            do {
                if ((0x1f < uVar5) || (*(ushort *)(*(longlong *)(lVar3 + 0x88) + lVar13) != param_2)) break;
                uVar7 = (ulonglong)uVar5;
                lVar13 = lVar13 + 0x30;
                uVar5 = uVar5 + 1;
                local_b8[uVar7] = (uint)uVar14;
                uVar9 = (uint)uVar14 + 1;
                uVar14 = (ulonglong)uVar9;
            } while (uVar9 < uVar12);
        }
        if (1 < uVar5) {
            iVar11 = 0;
            if (uVar5 != 0) {
                puVar8 = local_b8;
                uVar14 = (ulonglong)uVar5;
                do {
                    uVar12 = *puVar8;
                    puVar8 = puVar8 + 1;
                    iVar11 = iVar11 + (uint)*(ushort *)
                            (*(longlong *)(lVar3 + 0x88) + 4 + (ulonglong)uVar12 * 0x30);
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            if ((iVar11 != 0) && (uVar12 = iVar11 * (param_3 & 0xffff) >> 0x10, uVar5 != 0)) {
                puVar8 = local_b8;
                do {
                    uVar9 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x88) + 4 + (ulonglong)*puVar8 * 0x30);
                    if (uVar12 < uVar9) break;
                    uVar15 = uVar15 + 1;
                    uVar12 = uVar12 - uVar9;
                    puVar8 = puVar8 + 1;
                } while (uVar15 < uVar5);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



bool FUN_1402f7320(longlong *param_1,undefined4 param_2)

{
    uint uVar1;
    longlong lVar2;
    undefined4 local_18 [4];

    lVar2 = FUN_14021a300(param_2);
    if (lVar2 == 0) {
        return false;
    }
    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    lVar2 = param_1[8];
    uVar1 = FUN_140327080(lVar2,param_2);
    return uVar1 < *(uint *)(lVar2 + 0x80);
}



longlong FUN_1402f7390(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
    uint uVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    uVar1 = FUN_1402f7130(param_1,param_2,param_3);
    return (ulonglong)uVar1 * 0x20 + *(longlong *)(param_1[7] + 0x98);
}



bool FUN_1402f73f0(longlong *param_1,uint param_2)

{
    uint uVar1;
    undefined4 local_18 [4];

    uVar1 = 0xffffffff;
    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    if (param_2 == 0) {
        uVar1 = 0;
    }
    else if (param_2 < *(uint *)(param_1[8] + 400)) {
        uVar1 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
    }
    return uVar1 < *(uint *)(param_1[8] + 0x180);
}



void FUN_1402f74e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    undefined auStack152 [32];
    undefined8 local_78;
    longlong local_70;
    undefined8 local_68;
    longlong local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    local_70 = param_1[2] + 0x130;
    local_78 = (**(code **)(*param_1 + 0x1d8))();
    local_68 = local_78;
    local_60 = local_70;
    FUN_1401afb10(&local_68,param_3);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack152);
    return;
}



void FUN_1402f7570(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 param_4)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 local_18 [4];

    local_18[0] = 0;
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar1 == 0) {
        lVar3 = FUN_14018b280(0x80,0);
        if (lVar3 != 0) {
            FUN_1402eff50(lVar3,param_1,(longlong)(int)param_2 & 0xffffffff,param_3,param_4);
        }
    }
    else {
        if (param_2 == 0) {
            uVar2 = 0;
        }
        else if (param_2 < *(uint *)(param_1[8] + 400)) {
            uVar2 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
        }
        else {
            uVar2 = 0xffffffff;
        }
        puVar4 = *(undefined4 **)(param_1[0x69] + 0x10 + (ulonglong)uVar2 * 0x160);
        if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)FUN_14018b280(0x50,0);
            if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
            }
            else {
                *puVar4 = 0;
                *(undefined8 *)(puVar4 + 2) = 0;
            }
            *(undefined4 **)(param_1[0x69] + 0x10 + (ulonglong)uVar2 * 0x160) = puVar4;
            lVar3 = param_1[0x98];
            *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + 1;
            for (; (lVar3 != 0 && (*(uint *)(lVar3 + 0x134) < *(uint *)((longlong)param_1 + 0x134)));
                   lVar3 = *(longlong *)(lVar3 + 0x4c0)) {
                *(uint *)(lVar3 + 0x134) = *(uint *)((longlong)param_1 + 0x134);
            }
            *(int *)(param_1 + 0x6b) = *(int *)(param_1 + 0x6b) + 1;
        }
        *puVar4 = 1;
        if (*(undefined8 **)(puVar4 + 2) != param_3) {
            if (param_3 != (undefined8 *)0x0) {
                (**(code **)*param_3)(param_3);
            }
            if (*(longlong **)(puVar4 + 2) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar4 + 2) + 8))();
            }
            *(undefined8 **)(puVar4 + 2) = param_3;
        }
        puVar4[1] = param_4;
    }
    return;
}



void FUN_1402f76e0(longlong *param_1,uint param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    uint uVar8;
    undefined4 local_18 [4];

    puVar7 = (undefined4 *)0x0;
    uVar8 = 0;
    local_18[0] = 0;
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar4 == 0) {
        lVar5 = FUN_14018b280(0x80,0);
        if (lVar5 != 0) {
            FUN_1402f0000(lVar5,param_1,(longlong)(int)param_2 & 0xffffffff,param_3);
        }
    }
    else {
        if (param_2 != 0) {
            if (param_2 < *(uint *)(param_1[8] + 400)) {
                uVar8 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
            }
            else {
                uVar8 = 0xffffffff;
            }
        }
        puVar6 = *(undefined4 **)((ulonglong)uVar8 * 0x160 + 0x10 + param_1[0x69]);
        if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)FUN_14018b280(0x50,0);
            if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                *(undefined8 *)(puVar6 + 2) = 0;
                puVar7 = puVar6;
            }
            *(undefined4 **)((ulonglong)uVar8 * 0x160 + 0x10 + param_1[0x69]) = puVar7;
            lVar5 = param_1[0x98];
            *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + 1;
            for (; (lVar5 != 0 && (*(uint *)(lVar5 + 0x134) < *(uint *)((longlong)param_1 + 0x134)));
                   lVar5 = *(longlong *)(lVar5 + 0x4c0)) {
                *(uint *)(lVar5 + 0x134) = *(uint *)((longlong)param_1 + 0x134);
            }
            *(int *)(param_1 + 0x6b) = *(int *)(param_1 + 0x6b) + 1;
            puVar6 = puVar7;
        }
        *puVar6 = 2;
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar6[4] = *param_3;
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = param_3[5];
        uVar2 = param_3[6];
        uVar3 = param_3[7];
        puVar6[8] = param_3[4];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
        uVar1 = param_3[9];
        uVar2 = param_3[10];
        uVar3 = param_3[0xb];
        puVar6[0xc] = param_3[8];
        puVar6[0xd] = uVar1;
        puVar6[0xe] = uVar2;
        puVar6[0xf] = uVar3;
        uVar1 = param_3[0xd];
        uVar2 = param_3[0xe];
        uVar3 = param_3[0xf];
        puVar6[0x10] = param_3[0xc];
        puVar6[0x11] = uVar1;
        puVar6[0x12] = uVar2;
        puVar6[0x13] = uVar3;
        if (*(longlong **)(puVar6 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(puVar6 + 2) + 8))();
            *(undefined8 *)(puVar6 + 2) = 0;
        }
    }
    return;
}



void FUN_1402f7850(longlong *param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    undefined8 *puVar5;
    undefined4 local_18 [4];

    local_18[0] = 0;
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar3 == 0) {
        puVar5 = (undefined8 *)FUN_14018b280(0x28,0);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_FUN_140b64078;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[1] = param_1;
            param_1 = param_1 + 9;
            if (puVar5[2] == 0) {
                puVar5[2] = param_1;
                plVar1 = puVar5 + 3;
                *plVar1 = *param_1;
                *param_1 = (longlong)puVar5;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            *(uint *)(puVar5 + 4) = param_2;
            *puVar5 = &PTR_FUN_140b63fa8;
            return;
        }
    }
    else {
        if (param_2 == 0) {
            uVar4 = 0;
        }
        else if (param_2 < *(uint *)(param_1[8] + 400)) {
            uVar4 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
        }
        else {
            uVar4 = 0xffffffff;
        }
        lVar2 = *(longlong *)(param_1[0x69] + 0x10 + (ulonglong)uVar4 * 0x160);
        if (lVar2 != 0) {
            if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 8) + 8))();
            }
            FUN_14018b900(lVar2,0);
            *(undefined8 *)(param_1[0x69] + 0x10 + (ulonglong)uVar4 * 0x160) = 0;
            plVar1 = param_1 + 0x6b;
            *(int *)plVar1 = *(int *)plVar1 + -1;
            if (*(int *)plVar1 == 0) {
                *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + -1;
            }
        }
    }
    return;
}



undefined (*) [16] FUN_1402f7980(longlong *param_1,undefined (*param_2) [16],uint param_3)

{
ushort uVar1;
int iVar2;
undefined (*pauVar3) [12];
ulonglong uVar4;
undefined4 local_18 [4];

uVar4 = (ulonglong)(int)param_3;
local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18);
if ((param_3 == 0) ||
((param_3 < *(uint *)(param_1[8] + 400) &&
(uVar1 = *(ushort *)(*(longlong *)(param_1[8] + 0x198) + uVar4 * 2), uVar4 = (ulonglong)uVar1,
        uVar1 != 0xffffffff)))) {
iVar2 = FUN_140300dd0(param_1,2);
if ((-1 < iVar2) &&
(uVar1 = *(ushort *)((uVar4 & 0xffffffff) * 0x160 + 6 + *(longlong *)(param_1[8] + 0x188)),
(uint)uVar1 < *(uint *)(param_1[8] + 0xf0))) {
pauVar3 = (undefined (*) [12])((ulonglong)uVar1 * 0x60 + param_1[0x3e]);
*param_2 = CONCAT412(*(undefined4 *)(pauVar3[2] + 8),*pauVar3);
return param_2;
}
}
*(undefined4 *)*param_2 = 0x3f800000;
*(undefined4 *)(*param_2 + 4) = 0x3f800000;
*(undefined4 *)(*param_2 + 8) = 0x3f800000;
*(undefined4 *)(*param_2 + 0xc) = 0x3f800000;
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402f7b20(longlong *param_1,uint param_2,float *param_3)

{
longlong *plVar1;
float fVar2;
float fVar3;
float fVar4;
uint uVar5;
uint uVar6;
uint uVar7;
int iVar8;
undefined8 *puVar9;
uint *puVar10;
uint uVar11;
uint *puVar12;
undefined4 local_18 [4];

puVar12 = (uint *)0x0;
local_18[0] = 0;
iVar8 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if (iVar8 == 0) {
puVar9 = (undefined8 *)FUN_14018b280(0x40,0);
if (puVar9 != (undefined8 *)0x0) {
*puVar9 = &PTR_FUN_140b64078;
puVar9[2] = 0;
puVar9[3] = 0;
puVar9[1] = param_1;
param_1 = param_1 + 9;
if (puVar9[2] == 0) {
puVar9[2] = param_1;
plVar1 = puVar9 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar9;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
*(uint *)(puVar9 + 4) = param_2;
*puVar9 = &PTR_FUN_140b63f98;
fVar2 = param_3[1];
fVar3 = param_3[2];
fVar4 = param_3[3];
*(float *)(puVar9 + 6) = *param_3;
*(float *)((longlong)puVar9 + 0x34) = fVar2;
*(float *)(puVar9 + 7) = fVar3;
*(float *)((longlong)puVar9 + 0x3c) = fVar4;
}
}
else {
uVar11 = 0;
if (param_2 != 0) {
if (param_2 < *(uint *)(param_1[8] + 400)) {
uVar11 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
}
else {
uVar11 = 0xffffffff;
}
}
if (uVar11 < *(uint *)(param_1[8] + 0x180)) {
puVar10 = *(uint **)((ulonglong)uVar11 * 0x160 + 8 + param_1[0x69]);
if (puVar10 == (uint *)0x0) {
puVar10 = (uint *)FUN_14018b280(0x40);
if (puVar10 != (uint *)0x0) {
*puVar10 = 0;
puVar10[4] = 0x3f800000;
puVar10[5] = 0x3f800000;
puVar10[6] = 0x3f800000;
puVar10[7] = 0x3f800000;
uVar7 = uRam0000000140c7845c;
uVar6 = uRam0000000140c78458;
uVar5 = uRam0000000140c78454;
puVar10[8] = _DAT_140c78450;
puVar10[9] = uVar5;
puVar10[10] = uVar6;
puVar10[0xb] = uVar7;
*(undefined (*) [16])(puVar10 + 0xc) = ZEXT816(0);
puVar12 = puVar10;
}
*(uint **)((ulonglong)uVar11 * 0x160 + 8 + param_1[0x69]) = puVar12;
puVar10 = puVar12;
}
*puVar10 = *puVar10 | 1;
*(undefined (*) [16])(puVar10 + 4) =
CONCAT412(param_3[3] + 1.0,
CONCAT48(param_3[2] + 1.0,CONCAT44(param_3[1] + 1.0,*param_3 + 1.0)));
}
}
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402f7c80(longlong *param_1,uint param_2,float *param_3)

{
longlong *plVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
uint uVar6;
uint uVar7;
uint uVar8;
int iVar9;
undefined8 *puVar10;
uint *puVar11;
uint uVar12;
uint *puVar13;
undefined auVar14 [16];
float fVar15;
float fVar16;
float fVar17;
undefined4 local_18 [4];

puVar13 = (uint *)0x0;
local_18[0] = 0;
iVar9 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if (iVar9 == 0) {
puVar10 = (undefined8 *)FUN_14018b280(0x40,0);
if (puVar10 != (undefined8 *)0x0) {
*puVar10 = &PTR_FUN_140b64078;
puVar10[2] = 0;
puVar10[3] = 0;
puVar10[1] = param_1;
param_1 = param_1 + 9;
if (puVar10[2] == 0) {
puVar10[2] = param_1;
plVar1 = puVar10 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar10;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
*(uint *)(puVar10 + 4) = param_2;
*puVar10 = &PTR_FUN_140b63f38;
fVar2 = param_3[1];
fVar3 = param_3[2];
fVar4 = param_3[3];
*(float *)(puVar10 + 6) = *param_3;
*(float *)((longlong)puVar10 + 0x34) = fVar2;
*(float *)(puVar10 + 7) = fVar3;
*(float *)((longlong)puVar10 + 0x3c) = fVar4;
}
}
else {
uVar12 = 0;
if (param_2 != 0) {
if (param_2 < *(uint *)(param_1[8] + 400)) {
uVar12 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
}
else {
uVar12 = 0xffffffff;
}
}
if (uVar12 < *(uint *)(param_1[8] + 0x180)) {
puVar11 = *(uint **)((ulonglong)uVar12 * 0x160 + 8 + param_1[0x69]);
if (puVar11 == (uint *)0x0) {
puVar11 = (uint *)FUN_14018b280(0x40);
if (puVar11 != (uint *)0x0) {
*puVar11 = 0;
puVar11[4] = 0x3f800000;
puVar11[5] = 0x3f800000;
puVar11[6] = 0x3f800000;
puVar11[7] = 0x3f800000;
uVar8 = uRam0000000140c7845c;
uVar7 = uRam0000000140c78458;
uVar6 = uRam0000000140c78454;
puVar11[8] = _DAT_140c78450;
puVar11[9] = uVar6;
puVar11[10] = uVar7;
puVar11[0xb] = uVar8;
*(undefined (*) [16])(puVar11 + 0xc) = ZEXT816(0);
puVar13 = puVar11;
}
*(uint **)((ulonglong)uVar12 * 0x160 + 8 + param_1[0x69]) = puVar13;
puVar11 = puVar13;
}
*puVar11 = *puVar11 | 2;
fVar2 = *param_3;
fVar3 = param_3[1];
fVar4 = param_3[2];
fVar5 = param_3[3];
fVar15 = fVar2 * fVar2 + fVar4 * fVar4;
fVar16 = fVar3 * fVar3 + fVar5 * fVar5;
fVar17 = fVar5 * fVar5 + fVar3 * fVar3;
auVar14 = rsqrtss(ZEXT1216(CONCAT48(fVar17,CONCAT44(fVar15,fVar16))),
                  CONCAT412(fVar17 + 0.0,
                            CONCAT48(fVar4 * fVar4 + fVar2 * fVar2 + fVar17,
                                     CONCAT44(fVar16 + fVar15,fVar15 + fVar16))));
fVar17 = SUB164(auVar14,0);
fVar17 = (3.0 - (fVar15 + fVar16) * fVar17 * fVar17) * 0.5 * fVar17;
if (fVar17 <= 0.0) {
fVar17 = 0.0;
}
*(undefined (*) [16])(puVar11 + 8) =
CONCAT412(fVar17 * fVar5,CONCAT48(fVar17 * fVar4,CONCAT44(fVar17 * fVar3,fVar17 * fVar2))
);
}
}
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402f7e20(longlong *param_1,uint param_2,uint *param_3)

{
uint **ppuVar1;
uint uVar2;
uint uVar3;
uint uVar4;
int iVar5;
undefined8 *puVar6;
uint uVar7;
undefined8 *puVar8;
uint **ppuVar9;
undefined4 local_18 [4];

puVar8 = (undefined8 *)0x0;
local_18[0] = 0;
iVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if (iVar5 == 0) {
puVar6 = (undefined8 *)FUN_14018b280(0x40,0);
if (puVar6 == (undefined8 *)0x0) {
return;
}
*puVar6 = &PTR_FUN_140b64078;
puVar6[2] = 0;
puVar6[3] = 0;
puVar6[1] = param_1;
ppuVar9 = (uint **)(param_1 + 9);
if (puVar6[2] == 0) {
puVar6[2] = ppuVar9;
ppuVar1 = (uint **)(puVar6 + 3);
*ppuVar1 = *ppuVar9;
*ppuVar9 = (uint *)puVar6;
if (*ppuVar1 != (uint *)0x0) {
*(uint ***)(*ppuVar1 + 4) = ppuVar1;
}
}
*(uint *)(puVar6 + 4) = param_2;
*puVar6 = &PTR_FUN_140b63f28;
}
else {
uVar7 = 0;
if (param_2 != 0) {
if (param_2 < *(uint *)(param_1[8] + 400)) {
uVar7 = (uint)*(ushort *)(*(longlong *)(param_1[8] + 0x198) + (longlong)(int)param_2 * 2);
}
else {
uVar7 = 0xffffffff;
}
}
if (*(uint *)(param_1[8] + 0x180) <= uVar7) {
return;
}
puVar6 = *(undefined8 **)((ulonglong)uVar7 * 0x160 + 8 + param_1[0x69]);
if (puVar6 == (undefined8 *)0x0) {
puVar6 = (undefined8 *)FUN_14018b280(0x40);
if (puVar6 != (undefined8 *)0x0) {
*(uint *)puVar6 = 0;
*(uint *)(puVar6 + 2) = 0x3f800000;
*(uint *)((longlong)puVar6 + 0x14) = 0x3f800000;
*(uint *)(puVar6 + 3) = 0x3f800000;
*(uint *)((longlong)puVar6 + 0x1c) = 0x3f800000;
uVar4 = uRam0000000140c7845c;
uVar3 = uRam0000000140c78458;
uVar2 = uRam0000000140c78454;
*(uint *)(puVar6 + 4) = _DAT_140c78450;
*(uint *)((longlong)puVar6 + 0x24) = uVar2;
*(uint *)(puVar6 + 5) = uVar3;
*(uint *)((longlong)puVar6 + 0x2c) = uVar4;
*(undefined (*) [16])(puVar6 + 6) = ZEXT816(0);
puVar8 = puVar6;
}
*(undefined8 **)((ulonglong)uVar7 * 0x160 + 8 + param_1[0x69]) = puVar8;
puVar6 = puVar8;
}
*(uint *)puVar6 = *(uint *)puVar6 | 4;
}
uVar7 = param_3[1];
uVar2 = param_3[2];
uVar3 = param_3[3];
*(uint *)(puVar6 + 6) = *param_3;
*(uint *)((longlong)puVar6 + 0x34) = uVar7;
*(uint *)(puVar6 + 7) = uVar2;
*(uint *)((longlong)puVar6 + 0x3c) = uVar3;
return;
}



void FUN_1402f8810(longlong *param_1,uint param_2,undefined4 *param_3)

{
ulonglong uVar1;
undefined4 *puVar2;
undefined8 local_28;

local_28 = CONCAT44(local_28._4_4_,0xffffffff);
(**(code **)(*param_1 + 0x10))(param_1,&local_28,0);
if ((((ulonglong)param_2 < (ulonglong)param_1[0x70]) &&
(uVar1 = *(ulonglong *)(param_1[0x6f] + (ulonglong)param_2 * 8),
        uVar1 < (ulonglong)param_1[0x6e])) &&
(puVar2 = *(undefined4 **)(*(longlong *)(param_1[0x6d] + uVar1 * 8) + 8),
        puVar2 != (undefined4 *)0x0)) {
*param_3 = *puVar2;
param_3[1] = puVar2[1];
param_3[2] = puVar2[2];
param_3[3] = puVar2[3];
param_3[4] = puVar2[4];
param_3[5] = puVar2[5];
param_3[6] = puVar2[6];
param_3[7] = puVar2[7];
param_3[3] = (int)((float)(*(int *)(param_1[2] + 0xd0) - puVar2[0xc]) * (float)puVar2[2]) +
puVar2[3];
return;
}
*param_3 = 0;
param_3[1] = 0;
param_3[2] = 0x3f800000;
param_3[3] = 0;
param_3[4] = 0;
param_3[5] = 0;
param_3[6] = 0;
param_3[7] = 0;
return;
}



void FUN_1402f8f70(longlong *param_1,uint param_2,undefined4 *param_3)

{
ulonglong uVar1;
undefined4 *puVar2;
undefined8 local_28;

local_28 = CONCAT44(local_28._4_4_,0xffffffff);
(**(code **)(*param_1 + 0x10))(param_1,&local_28,0);
if ((((ulonglong)param_2 < (ulonglong)param_1[0x70]) &&
(uVar1 = *(ulonglong *)(param_1[0x6f] + (ulonglong)param_2 * 8),
        uVar1 < (ulonglong)param_1[0x6e])) &&
(puVar2 = *(undefined4 **)(*(longlong *)(param_1[0x6d] + uVar1 * 8) + 0x10),
        puVar2 != (undefined4 *)0x0)) {
*param_3 = *puVar2;
param_3[1] = puVar2[1];
param_3[2] = puVar2[2];
param_3[3] = puVar2[3];
param_3[4] = puVar2[4];
param_3[5] = puVar2[5];
param_3[6] = puVar2[6];
param_3[3] = (int)((float)(*(int *)(param_1[2] + 0xd0) - puVar2[0xd]) * (float)puVar2[2]) +
puVar2[3];
return;
}
*param_3 = 0;
param_3[1] = 0;
param_3[2] = 0x3f800000;
param_3[3] = 0;
param_3[4] = 0;
param_3[5] = 0;
param_3[6] = 0;
return;
}



undefined4 FUN_1402f90a0(longlong *param_1,uint param_2)

{
ulonglong uVar1;
longlong lVar2;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if ((((ulonglong)param_2 < (ulonglong)param_1[0x70]) &&
(uVar1 = *(ulonglong *)(param_1[0x6f] + (ulonglong)param_2 * 8),
        uVar1 < (ulonglong)param_1[0x6e])) &&
(lVar2 = *(longlong *)(*(longlong *)(param_1[0x6d] + uVar1 * 8) + 8), lVar2 != 0)) {
return *(undefined4 *)(lVar2 + 0x2c);
}
return 1;
}



undefined4 FUN_1402f9120(longlong *param_1,uint param_2)

{
ulonglong uVar1;
longlong lVar2;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if ((((ulonglong)param_2 < (ulonglong)param_1[0x70]) &&
(uVar1 = *(ulonglong *)(param_1[0x6f] + (ulonglong)param_2 * 8),
        uVar1 < (ulonglong)param_1[0x6e])) &&
(lVar2 = *(longlong *)(*(longlong *)(param_1[0x6d] + uVar1 * 8) + 0x10), lVar2 != 0)) {
return *(undefined4 *)(lVar2 + 0x30);
}
return 1;
}



void FUN_1402f91a0(longlong *param_1,longlong param_2,ulonglong param_3)

{
int iVar1;
longlong lVar2;
ulonglong uVar3;
ulonglong uVar4;
ulonglong uVar5;
undefined4 local_38 [4];
undefined8 local_28;
undefined4 local_20;
undefined8 local_1c;
undefined8 local_14;
undefined4 local_c;

uVar5 = 0;
local_38[0] = 0;
iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,0);
if (iVar1 == 0) {
lVar2 = FUN_14018b280(0x30,0);
if (lVar2 != 0) {
FUN_1402ef570(lVar2,param_1,param_2,param_3);
}
}
else {
local_28 = 0;
local_1c = 0;
local_14 = 0;
local_c = 0;
local_20 = 0x3f800000;
uVar4 = uVar5;
if (param_1[0x6e] != 0) {
do {
iVar1 = **(int **)(param_1[0x6d] + uVar4 * 8);
uVar3 = uVar5;
if (param_3 != 0) {
do {
if (iVar1 == *(int *)(param_2 + uVar3 * 4)) break;
uVar3 = (ulonglong)((int)uVar3 + 1);
} while (uVar3 < param_3);
}
if (uVar3 == param_3) {
(**(code **)(*param_1 + 0x248))(param_1,iVar1,&local_28);
}
uVar4 = uVar4 + 1;
} while (uVar4 < (ulonglong)param_1[0x6e]);
}
}
return;
}



void FUN_1402f92b0(longlong *param_1,longlong param_2,ulonglong param_3)

{
int iVar1;
longlong lVar2;
ulonglong uVar3;
ulonglong uVar4;
ulonglong uVar5;
undefined4 local_38 [4];
undefined8 local_28;
undefined4 local_20;
undefined4 local_1c;
undefined4 local_18;
undefined8 local_14;

uVar5 = 0;
local_38[0] = 0;
iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,0);
if (iVar1 == 0) {
lVar2 = FUN_14018b280(0x30,0);
if (lVar2 != 0) {
FUN_1402ef6c0(lVar2,param_1,param_2,param_3);
}
}
else {
local_28 = 0;
local_1c = 0;
local_14 = 0;
local_20 = 0x3f800000;
local_18 = 0;
uVar4 = uVar5;
if (param_1[0x6e] != 0) {
do {
iVar1 = **(int **)(param_1[0x6d] + uVar4 * 8);
uVar3 = uVar5;
if (param_3 != 0) {
do {
if (iVar1 == *(int *)(param_2 + uVar3 * 4)) break;
uVar3 = (ulonglong)((int)uVar3 + 1);
} while (uVar3 < param_3);
}
if (uVar3 == param_3) {
(**(code **)(*param_1 + 600))(param_1,iVar1,&local_28);
}
uVar4 = uVar4 + 1;
} while (uVar4 < (ulonglong)param_1[0x6e]);
}
}
return;
}



void FUN_1402f9480(longlong param_1,uint *param_2)

{
longlong *plVar1;
longlong *plVar2;
undefined4 uVar3;
int iVar4;
uint uVar5;
undefined4 *puVar6;
longlong lVar7;
undefined4 *puVar8;
int iVar9;
uint uVar10;
double dVar11;

uVar3 = *(undefined4 *)(&DAT_140b63958 + (ulonglong)*param_2 * 4);
puVar8 = (undefined4 *)0x0;
iVar9 = 0;
if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
dVar11 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
iVar9 = (int)(dVar11 * 65536.0);
}
uVar5 = FUN_1402f6c40(param_1,uVar3,iVar9);
if (uVar5 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
puVar6 = (undefined4 *)FUN_14018b280(0x68);
if (puVar6 != (undefined4 *)0x0) {
puVar6[7] = 0;
*(undefined8 *)(puVar6 + 0x16) = 0;
*(undefined8 *)(puVar6 + 0x18) = 0;
puVar8 = puVar6;
}
puVar8[10] = uVar5;
*puVar8 = uVar3;
puVar8[1] = iVar9;
plVar1 = (longlong *)(param_2 + 2);
puVar8[2] = 0x3f800000;
puVar8[3] = 0;
puVar8[4] = 0;
puVar8[5] = 4;
puVar8[6] = 0;
puVar8[7] = 0;
lVar7 = (ulonglong)uVar5 * 0x70 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
puVar8[0xb] = 0;
*(longlong *)(puVar8 + 8) = lVar7;
if (*plVar1 == 0) {
uVar5 = 0;
}
else {
uVar5 = (uint)*(ushort *)(lVar7 + 10);
}
uVar10 = *(int *)(lVar7 + 0x10) - *(int *)(lVar7 + 0xc);
if ((uVar10 == 0) || (*(float *)(lVar7 + 0x14) == 0.0)) {
puVar8[5] = puVar8[5] & 0xfffffffb;
}
if ((uVar10 != 0) && (*plVar1 == 0)) {
puVar8[3] = (uint)puVar8[1] % uVar10;
}
iVar9 = puVar8[3];
puVar8[0xc] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
puVar8[0xd] = (*(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) - iVar9) + uVar10;
puVar8[0xe] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xd0);
puVar8[0x10] = iVar9;
puVar8[0xf] = iVar4 + uVar5;
if (lVar7 != 0) {
puVar8[0x10] = *(int *)(lVar7 + 0xc) + iVar9;
}
puVar8[0x11] = 0;
if ((*plVar1 != 0) && (*(longlong *)(*plVar1 + 0x60) != 0)) {
FUN_1402f1720();
}
if (*(longlong *)(puVar8 + 0x16) == 0) {
*(longlong **)(puVar8 + 0x16) = plVar1;
plVar2 = (longlong *)(puVar8 + 0x18);
*plVar2 = *plVar1;
*plVar1 = (longlong)puVar8;
if (*plVar2 != 0) {
*(longlong **)(*plVar2 + 0x58) = plVar2;
}
}
}
return;
}



void FUN_1402f96a0(longlong param_1,uint *param_2)

{
longlong *plVar1;
longlong *plVar2;
undefined4 uVar3;
int iVar4;
uint uVar5;
undefined4 *puVar6;
longlong lVar7;
undefined4 *puVar8;
int iVar9;
uint uVar10;
double dVar11;

uVar3 = *(undefined4 *)(&DAT_140b63948 + (ulonglong)*param_2 * 4);
puVar8 = (undefined4 *)0x0;
iVar9 = 0;
if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
dVar11 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
iVar9 = (int)(dVar11 * 65536.0);
}
uVar5 = FUN_1402f7130(param_1,uVar3,iVar9);
if (uVar5 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x80)) {
puVar6 = (undefined4 *)FUN_14018b280(0x60);
if (puVar6 != (undefined4 *)0x0) {
*(undefined8 *)(puVar6 + 0x14) = 0;
*(undefined8 *)(puVar6 + 0x16) = 0;
puVar8 = puVar6;
}
puVar8[10] = uVar5;
plVar1 = (longlong *)(param_2 + 4);
*puVar8 = uVar3;
puVar8[1] = iVar9;
puVar8[2] = 0x3f800000;
puVar8[3] = 0;
puVar8[4] = 0x3f800000;
puVar8[5] = 4;
puVar8[6] = 0;
lVar7 = (ulonglong)uVar5 * 0x30 + *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x88);
*(undefined8 *)(puVar8 + 0xb) = 0;
*(longlong *)(puVar8 + 8) = lVar7;
if (*plVar1 == 0) {
uVar5 = 0;
}
else {
uVar5 = (uint)*(ushort *)(lVar7 + 6);
}
uVar10 = *(int *)(lVar7 + 0xc) - *(int *)(lVar7 + 8);
if ((uVar10 == 0) || (*(float *)(lVar7 + 0x10) != 0.0)) {
puVar8[5] = puVar8[5] & 0xfffffffb;
}
if ((uVar10 != 0) && (*plVar1 == 0)) {
puVar8[3] = (uint)puVar8[1] % uVar10;
}
iVar9 = puVar8[3];
puVar8[0xd] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
puVar8[0xe] = (*(int *)(*(longlong *)(param_1 + 0x10) + 0xd0) - iVar9) + uVar10;
puVar8[0xf] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xd0);
iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xd0);
puVar8[0x11] = iVar9;
puVar8[0x10] = iVar4 + uVar5;
if (lVar7 != 0) {
puVar8[0x11] = *(int *)(lVar7 + 8) + iVar9;
}
puVar8[0x12] = 0;
if ((*plVar1 != 0) && (*(longlong *)(*plVar1 + 0x58) != 0)) {
FUN_1402f1ac0();
}
if (*(longlong *)(puVar8 + 0x14) == 0) {
*(longlong **)(puVar8 + 0x14) = plVar1;
plVar2 = (longlong *)(puVar8 + 0x16);
*plVar2 = *plVar1;
*plVar1 = (longlong)puVar8;
if (*plVar2 != 0) {
*(longlong **)(*plVar2 + 0x50) = plVar2;
}
}
}
return;
}



bool FUN_1402f98b0(longlong *param_1,uint param_2)

{
longlong lVar1;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x578))(param_1,local_18);
lVar1 = param_1[8];
if (*(uint *)(lVar1 + 0x210) <= param_2) {
return false;
}
return (uint)*(ushort *)(*(longlong *)(lVar1 + 0x218) + (longlong)(int)param_2 * 2) <
*(uint *)(lVar1 + 0x200);
}



undefined2 FUN_1402f9920(longlong *param_1,uint param_2)

{
ushort uVar1;
longlong lVar2;

(**(code **)(*param_1 + 0x578))();
lVar2 = param_1[8];
if ((param_2 < *(uint *)(lVar2 + 0x210)) &&
(uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x218) + (longlong)(int)param_2 * 2),
(uint)uVar1 < *(uint *)(lVar2 + 0x200))) {
return *(undefined2 *)(*(longlong *)(lVar2 + 0x208) + 2 + (ulonglong)uVar1 * 4);
}
return 0;
}



void FUN_1402f9990(longlong *param_1,int param_2,int param_3)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
ulonglong uVar4;
bool bVar5;
undefined4 local_18 [4];

local_18[0] = 0;
iVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if (iVar2 == 0) {
puVar3 = (undefined8 *)FUN_14018b280(0x28,0);
if (puVar3 != (undefined8 *)0x0) {
*puVar3 = &PTR_FUN_140b64078;
puVar3[2] = 0;
puVar3[3] = 0;
puVar3[1] = param_1;
param_1 = param_1 + 9;
if (puVar3[2] == 0) {
puVar3[2] = param_1;
plVar1 = puVar3 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar3;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
*(int *)(puVar3 + 4) = param_2;
*(int *)((longlong)puVar3 + 0x24) = param_3;
*puVar3 = &PTR_FUN_140b63fd8;
}
}
else {
uVar4 = (ulonglong)(longlong)param_2 >> 3;
if (uVar4 < (ulonglong)param_1[0x83]) {
bVar5 = (*(byte *)(param_1[0x82] + uVar4) & '\x01' << ((byte)param_2 & 7)) != 0;
}
else {
bVar5 = false;
}
if ((param_3 == 0) != !bVar5) {
FUN_1407b0810(param_1 + 0x82,(longlong)param_2,param_3);
FUN_1402f5df0(param_1);
}
}
return;
}



void FUN_1402f9aa0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 local_18 [4];

    uVar6 = 0;
    local_18[0] = 0;
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar2 == 0) {
        puVar3 = (undefined8 *)FUN_14018b280(0x20,0);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b64078;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[1] = param_1;
            param_1 = param_1 + 9;
            if (puVar3[2] == 0) {
                puVar3[2] = param_1;
                plVar1 = puVar3 + 3;
                *plVar1 = *param_1;
                *param_1 = (longlong)puVar3;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            *puVar3 = &PTR_FUN_140b64048;
            return;
        }
    }
    else {
        lVar4 = param_1[8];
        if (*(int *)(lVar4 + 0x200) != 0) {
            do {
                if ((*(byte *)(*(longlong *)(lVar4 + 0x208) + 2 + uVar6 * 4) & 1) != 0) {
                    (**(code **)(*param_1 + 0x2d8))
                            (param_1,*(undefined2 *)(*(longlong *)(lVar4 + 0x208) + uVar6 * 4),1);
                }
                lVar4 = param_1[8];
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(lVar4 + 0x200));
        }
    }
    return;
}



void FUN_1402f9b90(longlong *param_1)

{
    longlong *plVar1;
    ushort uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    undefined4 local_18 [4];

    uVar7 = 0;
    local_18[0] = 0;
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar3 == 0) {
        puVar4 = (undefined8 *)FUN_14018b280(0x20,0);
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_FUN_140b64078;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[1] = param_1;
            param_1 = param_1 + 9;
            if (puVar4[2] == 0) {
                puVar4[2] = param_1;
                plVar1 = puVar4 + 3;
                *plVar1 = *param_1;
                *param_1 = (longlong)puVar4;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            *puVar4 = &PTR_FUN_140b64038;
            return;
        }
    }
    else {
        lVar5 = param_1[8];
        uVar6 = uVar7;
        if (*(int *)(lVar5 + 0x200) != 0) {
            do {
                (**(code **)(*param_1 + 0x2d8))
                        (param_1,*(undefined2 *)(*(longlong *)(lVar5 + 0x208) + uVar6 * 4),0);
                lVar5 = param_1[8];
                uVar8 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar5 + 0x200));
        }
        do {
            lVar5 = param_1[8];
            uVar6 = (ulonglong)*(int *)((longlong)&DAT_140af1418 + uVar7);
            if (((uVar6 < *(uint *)(lVar5 + 0x210)) &&
                 (uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0x218) + uVar6 * 2), uVar2 != 0xffff)) &&
                ((*(byte *)(*(longlong *)(lVar5 + 0x208) + 2 + (ulonglong)uVar2 * 4) & 1) != 0)) {
                (**(code **)(*param_1 + 0x2d8))(param_1,uVar6,1);
            }
            uVar7 = uVar7 + 4;
        } while (uVar7 < 0x10);
    }
    return;
}



bool FUN_1402f9cf0(longlong *param_1,int param_2)

{
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if ((ulonglong)param_1[0x83] <= (ulonglong)(longlong)param_2 >> 3) {
return false;
}
return (*(byte *)(((ulonglong)(longlong)param_2 >> 3) + param_1[0x82]) &
'\x01' << ((byte)param_2 & 7)) != 0;
}



void FUN_1402f9d70(longlong param_1)

{
undefined auStack472 [32];
undefined local_1b8 [416];
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
if ((*(byte *)(param_1 + 0x30) & 8) == 0) {
FUN_1407e4830(local_1b8,0,0x19c);
FUN_1402f9e00(param_1,local_1b8,param_1 + 0x410);
FUN_1402f9f10(param_1,local_1b8,param_1 + 0x410);
}
FUN_1407db4f0(local_18 ^ (ulonglong)auStack472);
return;
}



void FUN_1402f9e00(longlong param_1,longlong param_2,longlong *param_3)

{
uint *puVar1;
ushort uVar2;
ushort uVar3;
uint uVar4;
uint uVar5;
longlong lVar6;
longlong lVar7;
ushort *puVar8;
ulonglong uVar9;
ulonglong uVar10;

if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x40);
uVar4 = *(uint *)(lVar6 + 0x80);
if (uVar4 != 0) {
lVar7 = *(longlong *)(param_1 + 0x40);
uVar5 = *(uint *)(lVar7 + 0x200);
puVar8 = (ushort *)(*(longlong *)(lVar6 + 0x88) + 0x1e);
uVar10 = (ulonglong)uVar4;
do {
if (*puVar8 < uVar5) {
uVar2 = *(ushort *)(*(longlong *)(lVar7 + 0x208) + (ulonglong)(uint)*puVar8 * 4);
uVar9 = (ulonglong)(uVar2 >> 3);
if ((uVar9 < (ulonglong)param_3[1]) &&
((*(byte *)(*param_3 + uVar9) & '\x01' << ((byte)uVar2 & 7)) != 0)) goto LAB_1402f9e9b;
}
else {
LAB_1402f9e9b:
uVar2 = puVar8[2];
if ((uVar2 != 0) && ((*(byte *)(puVar8 + 3) & 1) == 0)) {
uVar3 = puVar8[4];
puVar1 = (uint *)(param_2 + (ulonglong)uVar2 * 4);
if (*puVar1 < (uint)uVar3 || *puVar1 == (uint)uVar3) {
*(uint *)(param_2 + (ulonglong)uVar2 * 4) = (uint)uVar3;
}
}
}
puVar8 = puVar8 + 0x38;
uVar10 = uVar10 - 1;
} while (uVar10 != 0);
}
for (lVar6 = *(longlong *)(param_1 + 0x4d0); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x4e0)) {
if (*(int *)(lVar6 + 0x4b0) == 0) {
FUN_1402f9e00(lVar6,param_2,param_3);
}
}
}
return;
}



void FUN_1402f9f10(longlong param_1,longlong param_2,longlong *param_3)

{
uint *puVar1;
ushort uVar2;
longlong lVar3;
longlong *plVar4;
undefined auVar5 [16];
int iVar6;
undefined8 uVar7;
longlong lVar8;
ulonglong uVar9;
longlong lVar10;
uint uVar11;
ulonglong uVar12;
ulonglong uVar13;
longlong *local_res20;

if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x40);
uVar9 = 0;
auVar5 = ZEXT816(4) * ZEXT416(*(uint *)(lVar3 + 0x80));
uVar7 = SUB168(auVar5,0);
if (SUB168(auVar5 >> 0x40,0) != 0) {
uVar7 = 0xffffffffffffffff;
}
lVar8 = FUN_14018b280(uVar7,0);
uVar12 = 0;
if (*(int *)(lVar3 + 0x80) != 0) {
do {
lVar10 = uVar12 * 0x70 + *(longlong *)(lVar3 + 0x88);
if ((*(byte *)(lVar10 + 0x38) & 10) != 10) {
if ((uint)*(ushort *)(lVar10 + 0x1e) < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x200)) {
uVar2 = *(ushort *)
        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x208) +
         (ulonglong)*(ushort *)(lVar10 + 0x1e) * 4);
uVar13 = (ulonglong)(uVar2 >> 3);
if (((ulonglong)param_3[1] <= uVar13) ||
((*(byte *)(*param_3 + uVar13) & '\x01' << ((byte)uVar2 & 7)) == 0))
goto LAB_1402fa00c;
}
if ((*(ushort *)(lVar10 + 0x22) == 0) ||
(puVar1 = (uint *)(param_2 + (ulonglong)*(ushort *)(lVar10 + 0x22) * 4),
        *puVar1 < (uint)*(ushort *)(lVar10 + 0x26) ||
*puVar1 == (uint)*(ushort *)(lVar10 + 0x26))) {
*(int *)(lVar8 + uVar9 * 4) = (int)uVar12;
uVar9 = (ulonglong)((int)uVar9 + 1);
}
}
LAB_1402fa00c:
uVar11 = (int)uVar12 + 1;
uVar12 = (ulonglong)uVar11;
} while (uVar11 < *(uint *)(lVar3 + 0x80));
}
iVar6 = FUN_14030e7b0(*(undefined8 *)(param_1 + 0x38),uVar9,lVar8,&local_res20);
if (-1 < iVar6) {
plVar4 = *(longlong **)(param_1 + 0x470);
*(longlong **)(param_1 + 0x470) = local_res20;
if (plVar4 != (longlong *)0x0) {
(**(code **)(*plVar4 + 8))();
}
}
FUN_14018b900(lVar8,0);
*(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
if ((*(uint *)(param_1 + 0x34) & 0xe) != 0) {
*(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffff1;
for (lVar3 = *(longlong *)(param_1 + 0x4c0);
(lVar3 != 0 && ((*(uint *)(lVar3 + 0x34) & 0x20) != 0));
lVar3 = *(longlong *)(lVar3 + 0x4c0)) {
*(uint *)(lVar3 + 0x34) = *(uint *)(lVar3 + 0x34) & 0xffffffdf;
}
}
for (lVar3 = *(longlong *)(param_1 + 0x4d0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x4e0)) {
if (*(int *)(lVar3 + 0x4b0) == 0) {
FUN_1402f9f10(lVar3,param_2,param_3);
}
}
}
return;
}



ulonglong FUN_1402fa0e0(longlong *param_1)

{
    ulonglong uVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    uVar1 = param_1[0x8e];
    if (uVar1 != 0) {
        return (ulonglong)*(uint *)(uVar1 + 0x58);
    }
    return uVar1;
}



undefined8 * FUN_1402fa120(longlong param_1)

{
longlong lVar1;
longlong lVar2;
undefined8 *puVar3;
longlong lVar4;

if (*(ulonglong *)(param_1 + 0x4a0) <= *(ulonglong *)(param_1 + 0x4a8)) {
puVar3 = (undefined8 *)FUN_14018b280(0x48);
if (puVar3 != (undefined8 *)0x0) {
puVar3[4] = 0;
puVar3[5] = 0;
*puVar3 = &PTR_FUN_140b62ac0;
puVar3[1] = 3;
*(undefined4 *)(puVar3 + 2) = 0;
puVar3[3] = 0;
puVar3[6] = 0;
puVar3[7] = 0;
puVar3[8] = 0;
}
lVar2 = *(longlong *)(param_1 + 0x4a0);
lVar1 = lVar2 + 1;
lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x498),lVar1,8);
*(undefined8 **)(lVar4 + lVar2 * 8) = puVar3;
if (*(longlong *)(param_1 + 0x498) != lVar4) {
FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x498),*(longlong *)(param_1 + 0x4a0) << 3);
lVar2 = *(longlong *)(param_1 + 0x498);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
*(longlong *)(param_1 + 0x498) = lVar4;
}
*(longlong *)(param_1 + 0x4a0) = lVar1;
*(longlong *)(param_1 + 0x4a8) = *(longlong *)(param_1 + 0x4a8) + 1;
return puVar3;
}
puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x498) + *(ulonglong *)(param_1 + 0x4a8) * 8);
*(longlong *)(param_1 + 0x4a8) = *(longlong *)(param_1 + 0x4a8) + 1;
return puVar3;
}



undefined8 * FUN_1402fa240(longlong param_1)

{
longlong lVar1;
longlong lVar2;
undefined8 *puVar3;
longlong lVar4;

if (*(ulonglong *)(param_1 + 0x488) <= *(ulonglong *)(param_1 + 0x490)) {
puVar3 = (undefined8 *)FUN_14018b280(0x60);
if (puVar3 != (undefined8 *)0x0) {
puVar3[4] = 0;
puVar3[5] = 0;
*puVar3 = &PTR_FUN_140b62ac0;
puVar3[1] = 3;
*(undefined4 *)(puVar3 + 2) = 0;
puVar3[3] = 0;
puVar3[6] = 0;
puVar3[7] = 0;
puVar3[8] = 0;
puVar3[9] = 0;
puVar3[10] = 0;
*(undefined4 *)(puVar3 + 0xb) = 0;
}
lVar2 = *(longlong *)(param_1 + 0x488);
lVar1 = lVar2 + 1;
lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x480),lVar1,8);
*(undefined8 **)(lVar4 + lVar2 * 8) = puVar3;
if (*(longlong *)(param_1 + 0x480) != lVar4) {
FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x480),*(longlong *)(param_1 + 0x488) << 3);
lVar2 = *(longlong *)(param_1 + 0x480);
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
*(longlong *)(param_1 + 0x480) = lVar4;
}
*(longlong *)(param_1 + 0x488) = lVar1;
*(longlong *)(param_1 + 0x490) = *(longlong *)(param_1 + 0x490) + 1;
return puVar3;
}
puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x480) + *(ulonglong *)(param_1 + 0x490) * 8);
*(longlong *)(param_1 + 0x490) = *(longlong *)(param_1 + 0x490) + 1;
return puVar3;
}



bool FUN_1402fa370(longlong *param_1,uint param_2)

{
longlong lVar1;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x578))(param_1,local_18);
lVar1 = param_1[8];
if (*(uint *)(lVar1 + 0x1d0) <= param_2) {
return false;
}
return (uint)*(ushort *)(*(longlong *)(lVar1 + 0x1d8) + (longlong)(int)param_2 * 2) <
*(uint *)(lVar1 + 0x1c0);
}



void FUN_1402fa570(longlong *param_1,uint param_2,undefined8 *param_3)

{
ushort uVar1;
longlong lVar2;
longlong *plVar3;
int iVar4;
undefined8 *puVar5;
undefined4 local_18 [4];

iVar4 = (**(code **)(*param_1 + 0x3f0))();
if (iVar4 == 0) {
local_18[0] = 0;
iVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_18);
if (iVar4 == 0) {
puVar5 = (undefined8 *)FUN_14018b280(0x30,0);
if (puVar5 != (undefined8 *)0x0) {
*puVar5 = &PTR_FUN_140b64078;
puVar5[2] = 0;
puVar5[3] = 0;
puVar5[1] = param_1;
param_1 = param_1 + 9;
if (puVar5[2] == 0) {
puVar5[2] = param_1;
plVar3 = puVar5 + 3;
*plVar3 = *param_1;
*param_1 = (longlong)puVar5;
if (*plVar3 != 0) {
*(longlong **)(*plVar3 + 0x10) = plVar3;
}
}
*(uint *)(puVar5 + 4) = param_2;
puVar5[5] = param_3;
*puVar5 = &PTR_FUN_140b64018;
if (param_3 != (undefined8 *)0x0) {
(**(code **)*param_3)(param_3);
}
}
}
else {
lVar2 = param_1[8];
if ((param_2 < *(uint *)(lVar2 + 0x1d0)) &&
(uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x1d8) + (longlong)(int)param_2 * 2),
(uint)uVar1 < *(uint *)(lVar2 + 0x1c0))) {
puVar5 = (undefined8 *)(param_1[0x84] + (ulonglong)uVar1 * 0x18);
plVar3 = *(longlong **)(param_1[0x84] + (ulonglong)uVar1 * 0x18);
if (plVar3 != (longlong *)0x0) {
(**(code **)(*plVar3 + 8))();
*puVar5 = 0;
}
lVar2 = puVar5[1];
puVar5[1] = 0;
if (lVar2 != 0) {
(**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
}
if (param_3 != (undefined8 *)0x0) {
(**(code **)(*DAT_140c65670 + 0x80))(DAT_140c65670,param_3,puVar5);
}
if ((longlong *)puVar5[2] != (longlong *)0x0) {
(**(code **)(*(longlong *)puVar5[2] + 8))();
puVar5[2] = 0;
}
FUN_1402f5ca0(param_1,0xc);
}
}
}
return;
}



undefined4 FUN_1402fa9e0(longlong *param_1,uint param_2)

{
longlong lVar1;
uint uVar2;

(**(code **)(*param_1 + 0x578))();
lVar1 = param_1[8];
if ((param_2 < *(uint *)(lVar1 + 0x1d0)) &&
(uVar2 = (uint)*(ushort *)(*(longlong *)(lVar1 + 0x1d8) + (longlong)(int)param_2 * 2),
uVar2 < *(uint *)(lVar1 + 0x1c0))) {
return *(undefined4 *)((ulonglong)uVar2 * 0x20 + 8 + *(longlong *)(lVar1 + 0x1c8));
}
return DAT_140c41f68;
}



void FUN_1402faa60(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
longlong lVar1;
int iVar2;

iVar2 = (**(code **)(*param_1 + 0x3f0))();
if (iVar2 == 0) {
lVar1 = param_1[0x87];
param_1[0x87] = 0;
if (lVar1 != 0) {
(**(code **)(*(longlong *)(lVar1 + -0x10) + 8))();
}
if ((undefined8 *)param_1[0x88] != param_2) {
if (param_2 != (undefined8 *)0x0) {
(**(code **)*param_2)(param_2);
}
if ((longlong *)param_1[0x88] != (longlong *)0x0) {
(**(code **)(*(longlong *)param_1[0x88] + 8))();
}
param_1[0x88] = (longlong)param_2;
}
*(undefined4 *)(param_1 + 0x89) = param_3;
if ((*(uint *)((longlong)param_1 + 0x34) & 8) != 0) {
*(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xfffffff7;
for (lVar1 = param_1[0x98]; (lVar1 != 0 && ((*(uint *)(lVar1 + 0x34) & 0x20) != 0));
lVar1 = *(longlong *)(lVar1 + 0x4c0)) {
*(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) & 0xffffffdf;
}
}
}
return;
}



void FUN_1402fab30(longlong *param_1,short *param_2,undefined4 param_3)

{
longlong *plVar1;
short sVar2;
longlong lVar3;
int iVar4;
undefined8 *puVar5;
undefined8 *puVar6;
undefined8 *puVar7;
undefined4 local_28 [4];

puVar5 = (undefined8 *)0x0;
local_28[0] = 0;
iVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_28,0);
if (iVar4 == 0) {
puVar5 = (undefined8 *)FUN_14018b280(0x30,0);
if (puVar5 != (undefined8 *)0x0) {
*puVar5 = &PTR_FUN_140b64078;
puVar5[2] = 0;
puVar5[3] = 0;
puVar5[1] = param_1;
param_1 = param_1 + 9;
if (puVar5[2] == 0) {
puVar5[2] = param_1;
plVar1 = puVar5 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar5;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
puVar5[4] = param_2;
*(undefined4 *)(puVar5 + 5) = param_3;
*puVar5 = &PTR_FUN_140b63f48;
return;
}
}
else {
iVar4 = (**(code **)(*param_1 + 0x3f0))(param_1);
if (iVar4 == 0) {
lVar3 = param_1[0x87];
if (param_2 == (short *)0x0) {
param_1[0x87] = 0;
}
else {
sVar2 = *param_2;
puVar7 = puVar5;
while (sVar2 != 0) {
puVar7 = (undefined8 *)((longlong)puVar7 + 1);
sVar2 = param_2[(longlong)puVar7];
}
puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
if (puVar6 != (undefined8 *)0x0) {
puVar6[1] = puVar7;
*puVar6 = &PTR_LAB_140b55060;
puVar5 = puVar6;
}
puVar5 = puVar5 + 2;
FUN_1407db590(puVar5,param_2,(longlong)puVar7 * 2);
*(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar5) = 0;
param_1[0x87] = (longlong)puVar5;
}
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
if ((longlong *)param_1[0x88] != (longlong *)0x0) {
(**(code **)(*(longlong *)param_1[0x88] + 8))();
param_1[0x88] = 0;
}
*(undefined4 *)(param_1 + 0x89) = param_3;
if ((*(uint *)((longlong)param_1 + 0x34) & 0xc) != 0) {
*(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) & 0xfffffff3;
for (lVar3 = param_1[0x98]; (lVar3 != 0 && ((*(uint *)(lVar3 + 0x34) & 0x20) != 0));
lVar3 = *(longlong *)(lVar3 + 0x4c0)) {
*(uint *)(lVar3 + 0x34) = *(uint *)(lVar3 + 0x34) & 0xffffffdf;
}
}
}
}
return;
}



bool FUN_1402facf0(longlong *param_1,uint param_2)

{
longlong lVar1;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x578))(param_1,local_18);
lVar1 = param_1[8];
if (*(uint *)(lVar1 + 0x2d8) <= param_2) {
return false;
}
return (uint)*(ushort *)(*(longlong *)(lVar1 + 0x2e0) + (ulonglong)param_2 * 2) <
*(uint *)(lVar1 + 0x2c8);
}



void FUN_1402fad60(longlong *param_1,uint param_2,int param_3)

{
longlong *plVar1;
ushort uVar2;
longlong lVar3;
int iVar4;
undefined8 *puVar5;
undefined4 local_18 [4];

local_18[0] = 0;
iVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_18);
if (iVar4 == 0) {
puVar5 = (undefined8 *)FUN_14018b280(0x28,0);
if (puVar5 != (undefined8 *)0x0) {
*puVar5 = &PTR_FUN_140b64078;
puVar5[2] = 0;
puVar5[3] = 0;
puVar5[1] = param_1;
param_1 = param_1 + 9;
if (puVar5[2] == 0) {
puVar5[2] = param_1;
plVar1 = puVar5 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar5;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
*(uint *)(puVar5 + 4) = param_2;
*(int *)((longlong)puVar5 + 0x24) = param_3;
*puVar5 = &PTR_FUN_140b63f68;
return;
}
}
else {
lVar3 = param_1[8];
if (((param_2 < *(uint *)(lVar3 + 0x2d8)) &&
(uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x2e0) + (ulonglong)param_2 * 2),
(uint)uVar2 < *(uint *)(lVar3 + 0x2c8))) &&
(*(int *)(param_1[0x8b] + (ulonglong)uVar2 * 4) != param_3)) {
*(int *)(param_1[0x8b] + (ulonglong)uVar2 * 4) = param_3;
FUN_1402f5c20(param_1,2);
}
}
return;
}



void FUN_1402faf90(longlong param_1,int param_2)

{
longlong **pplVar1;
longlong *plVar2;
uint uVar3;
ulonglong uVar4;
ulonglong uVar5;
longlong lVar6;

if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
lVar6 = *(longlong *)(param_1 + 0x40);
uVar5 = 0;
if (*(int *)(lVar6 + 0x2b8) != 0) {
do {
uVar4 = 0;
lVar6 = *(longlong *)(lVar6 + 0x2c0) + uVar5 * 0x28;
pplVar1 = (longlong **)(*(longlong *)(param_1 + 0x468) + uVar5 * 0x28);
if (*(int *)(lVar6 + 0x18) != 0) {
do {
plVar2 = (longlong *)pplVar1[1][uVar4];
if ((plVar2 != (longlong *)0x0) &&
(*(char *)((longlong)pplVar1[4] + uVar4 * 0x14) != '\0')) {
*(undefined *)((longlong)pplVar1[4] + uVar4 * 0x14) = 0;
(**(code **)(*plVar2 + 0x48))();
}
uVar3 = (int)uVar4 + 1;
uVar4 = (ulonglong)uVar3;
} while (uVar3 < *(uint *)(lVar6 + 0x18));
}
if ((*pplVar1 != (longlong *)0x0) && (param_2 == 0)) {
(**(code **)(**pplVar1 + 0x30))();
}
lVar6 = *(longlong *)(param_1 + 0x40);
uVar3 = (int)uVar5 + 1;
uVar5 = (ulonglong)uVar3;
} while (uVar3 < *(uint *)(lVar6 + 0x2b8));
}
}
return;
}



bool FUN_1402fb070(longlong *param_1,uint param_2)

{
ushort uVar1;
longlong lVar2;
longlong lVar3;

(**(code **)(*param_1 + 0x578))();
lVar3 = 0;
if (((param_2 != 0) && (lVar2 = param_1[8], param_2 < *(uint *)(lVar2 + 0x270))) &&
(uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)param_2 * 2),
(uint)uVar1 < *(uint *)(lVar2 + 0x260))) {
lVar3 = *(longlong *)(lVar2 + 0x268) + (ulonglong)uVar1 * 4;
}
return lVar3 != 0;
}



undefined (*) [16]
FUN_1402fb0f0(longlong *param_1,undefined (*param_2) [16],uint param_3,int param_4)

{
undefined4 *puVar1;
ushort uVar2;
longlong lVar3;
undefined *puVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined4 uVar7;
undefined4 uVar8;
undefined8 local_res8;
undefined4 local_28 [4];

local_28[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_28,0);
if ((((param_3 == 0) || (lVar3 = param_1[8], *(uint *)(lVar3 + 0x270) <= param_3)) ||
(uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x278) + (longlong)(int)param_3 * 2),
*(uint *)(lVar3 + 0x260) <= (uint)uVar2)) ||
(lVar3 = *(longlong *)(lVar3 + 0x268) + (ulonglong)uVar2 * 4, lVar3 == 0)) {
lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
if (lVar3 == 0) {
puVar4 = &DAT_1409e63f4;
}
else {
puVar4 = (undefined *)(**(code **)(*param_1 + 0x30))(param_1);
}
local_res8 = 0x141deb910;
FUN_1401a3130(6,0,&local_res8,param_3,puVar4);
uVar5 = 0;
uVar6 = 0;
uVar7 = 0;
uVar8 = 0;
}
else {
if ((param_4 != 0) || (*(int *)(param_1 + 0xaf) - *(int *)(param_1[2] + 0xe0) < 0)) {
FUN_140300dd0(param_1,8);
}
puVar1 = (undefined4 *)((ulonglong)*(ushort *)(lVar3 + 2) * 0x40 + 0x30 + param_1[0x67]);
uVar5 = *puVar1;
uVar6 = puVar1[1];
uVar7 = puVar1[2];
uVar8 = puVar1[3];
}
*param_2 = CONCAT412(uVar8,CONCAT48(uVar7,CONCAT44(uVar6,uVar5)));
return param_2;
}



undefined8 FUN_1402fb200(longlong param_1,uint param_2,undefined4 *param_3)

{
undefined4 *puVar1;
ushort uVar2;
longlong lVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;

if (((((*(uint *)(param_1 + 0x30) & 0xfffffffb) == 0xb) &&
(-3 < *(int *)(param_1 + 0x578) - *(int *)(*(longlong *)(param_1 + 0x10) + 0xe0))) &&
(param_2 != 0)) &&
(((lVar3 = *(longlong *)(param_1 + 0x40), param_2 < *(uint *)(lVar3 + 0x270) &&
(uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x278) + (longlong)(int)param_2 * 2),
(uint)uVar2 < *(uint *)(lVar3 + 0x260))) &&
(lVar3 = *(longlong *)(lVar3 + 0x268) + (ulonglong)uVar2 * 4, lVar3 != 0)))) {
puVar1 = (undefined4 *)
        ((ulonglong)*(ushort *)(lVar3 + 2) * 0x40 + 0x30 + *(longlong *)(param_1 + 0x338));
uVar4 = puVar1[1];
uVar5 = puVar1[2];
uVar6 = puVar1[3];
*param_3 = *puVar1;
param_3[1] = uVar4;
param_3[2] = uVar5;
param_3[3] = uVar6;
return 1;
}
return 0;
}



void FUN_1402fb2a0(longlong *param_1,undefined4 param_2,undefined (*param_3) [16])

{
longlong lVar1;
float fVar2;
float fVar3;
float *pfVar4;
undefined local_18 [16];

lVar1 = param_1[2];
pfVar4 = (float *)(**(code **)(*param_1 + 0x358))(param_1,local_18,param_2);
fVar2 = *pfVar4;
fVar3 = pfVar4[1];
*param_3 = CONCAT412(fVar3 * *(float *)(lVar1 + 0x14c) + fVar2 * *(float *)(lVar1 + 0x13c) +
                     *(float *)(lVar1 + 0x15c) * 0.0 + *(float *)(lVar1 + 0x16c),
                     CONCAT48(fVar3 * *(float *)(lVar1 + 0x148) +
                              fVar2 * *(float *)(lVar1 + 0x138) + *(float *)(lVar1 + 0x158) * 0.0
                              + *(float *)(lVar1 + 0x168),
                              CONCAT44(fVar3 * *(float *)(lVar1 + 0x144) +
                                       fVar2 * *(float *)(lVar1 + 0x134) +
                                       *(float *)(lVar1 + 0x154) * 0.0 + *(float *)(lVar1 + 0x164)
                                      ,fVar3 * *(float *)(lVar1 + 0x140) +
                                       fVar2 * *(float *)(lVar1 + 0x130) +
                                       *(float *)(lVar1 + 0x150) * 0.0 +
                                       *(float *)(lVar1 + 0x160))));
return;
}



undefined * FUN_1402fb310(longlong *param_1,uint param_2,int param_3)

{
ushort uVar1;
undefined *puVar2;
longlong lVar3;
undefined8 local_res8;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if ((((param_2 == 0) || (lVar3 = param_1[8], *(uint *)(lVar3 + 0x270) <= param_2)) ||
(uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x278) + (longlong)(int)param_2 * 2),
*(uint *)(lVar3 + 0x260) <= (uint)uVar1)) ||
(lVar3 = *(longlong *)(lVar3 + 0x268) + (ulonglong)uVar1 * 4, lVar3 == 0)) {
lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
if (lVar3 == 0) {
puVar2 = &DAT_1409e640c;
}
else {
puVar2 = (undefined *)(**(code **)(*param_1 + 0x30))(param_1);
}
local_res8 = 0x141deb980;
FUN_1401a3130(6,0,&local_res8,param_2,puVar2);
puVar2 = &DAT_140c78390;
}
else {
if ((param_3 != 0) || (*(int *)(param_1 + 0xaf) - *(int *)(param_1[2] + 0xe0) < 0)) {
FUN_140300dd0(param_1,8);
}
puVar2 = (undefined *)((ulonglong)*(ushort *)(lVar3 + 2) * 0x40 + param_1[0x67]);
}
return puVar2;
}



void FUN_1402fb490(longlong param_1,undefined8 param_2)

{
longlong lVar1;

lVar1 = *(longlong *)(param_1 + 0x4d0);
*(undefined8 *)(param_1 + 0x4c8) = param_2;
for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x4e0)) {
FUN_1402fb490(lVar1,*(undefined8 *)(param_1 + 0x4c8));
}
return;
}



void FUN_1402fb4e0(longlong *param_1,uint param_2,longlong *param_3)

{
longlong *plVar1;
longlong **pplVar2;
longlong **pplVar3;
ushort uVar4;
int iVar5;
ulonglong uVar6;
longlong lVar7;
longlong *plVar8;
longlong *plVar9;
ulonglong uVar10;
undefined4 local_18;
undefined4 local_14;
float local_10;

iVar5 = (**(code **)(*param_1 + 0x3f0))();
if (iVar5 == 0) {
if ((longlong *)param_3[0x2b] != (longlong *)0x0) {
*(longlong *)param_3[0x2b] = param_3[0x2c];
}
if (param_3[0x2c] != 0) {
*(longlong *)(param_3[0x2c] + 0x158) = param_3[0x2b];
}
uVar10 = 0;
param_3[0x2b] = 0;
param_3[0x2c] = 0;
if ((longlong *)param_3[0x2d] != (longlong *)0x0) {
*(longlong *)param_3[0x2d] = param_3[0x2e];
}
if (param_3[0x2e] != 0) {
*(longlong *)(param_3[0x2e] + 0x168) = param_3[0x2d];
}
param_3[0x2d] = 0;
param_3[0x2e] = 0;
(**(code **)(*param_3 + 0x160))(param_3,*(undefined4 *)(param_1 + 0x28));
local_18 = *(undefined4 *)(param_1 + 0x85);
local_14 = *(undefined4 *)((longlong)param_1 + 0x42c);
local_10 = *(float *)(param_1 + 0x86) * *(float *)((longlong)param_3 + 0x94);
(**(code **)(*param_3 + 0xf0))(param_3,&local_18);
*(uint *)(param_3 + 0x96) = param_2;
local_18 = 0;
iVar5 = (**(code **)(*param_1 + 0x10))(param_1,&local_18);
uVar6 = uVar10;
if ((((iVar5 != 0) && (param_2 != 0)) &&
(lVar7 = param_1[8], param_2 < *(uint *)(lVar7 + 0x270))) &&
(uVar4 = *(ushort *)(*(longlong *)(lVar7 + 0x278) + (longlong)(int)param_2 * 2),
(uint)uVar4 < *(uint *)(lVar7 + 0x260))) {
uVar6 = *(longlong *)(lVar7 + 0x268) + (ulonglong)uVar4 * 4;
}
param_3[0x97] = uVar6;
plVar1 = param_1 + 0x99;
param_3[0x98] = (longlong)param_1;
param_3[0x99] = *plVar1;
for (lVar7 = param_3[0x9a]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x4e0)) {
lVar7 = FUN_1402fb490(lVar7,param_3[0x99]);
}
pplVar2 = (longlong **)(param_1 + 0x9a);
if (param_3[0x9b] == 0) {
param_3[0x9b] = (longlong)pplVar2;
pplVar3 = (longlong **)(param_3 + 0x9c);
*pplVar3 = *pplVar2;
*pplVar2 = param_3;
if (*pplVar3 != (longlong *)0x0) {
(*pplVar3)[0x9b] = (longlong)pplVar3;
}
}
(**(code **)*param_3)(param_3);
local_18 = 0;
iVar5 = (**(code **)(*param_3 + 0x10))(param_3,&local_18,0);
plVar8 = param_1;
if ((iVar5 != 0) && (*(int *)(param_3[8] + 0x2f8) != 0)) {
do {
plVar9 = *(longlong **)(param_3[0xb2] + uVar10 * 8);
(**(code **)(*plVar9 + 0x78))(plVar9,1);
uVar10 = uVar10 + 1;
} while (uVar10 < *(uint *)(param_3[8] + 0x2f8));
}
do {
plVar9 = param_1;
if ((*(uint *)(plVar8 + 6) & 4) == 0) break;
*(uint *)(plVar8 + 6) = *(uint *)(plVar8 + 6) & 0xfffffffb;
pplVar2 = (longlong **)(plVar8 + 0x98);
plVar8 = *pplVar2;
} while (*pplVar2 != (longlong *)0x0);
do {
if ((*(uint *)((longlong)plVar9 + 0x34) & 0x20) == 0) break;
*(uint *)((longlong)plVar9 + 0x34) = *(uint *)((longlong)plVar9 + 0x34) & 0xffffffdf;
pplVar2 = (longlong **)(plVar9 + 0x98);
plVar9 = *pplVar2;
} while (*pplVar2 != (longlong *)0x0);
do {
if (*(uint *)((longlong)param_3 + 0x134) <= *(uint *)((longlong)param_1 + 0x134)) break;
*(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_3 + 0x134);
param_1 = (longlong *)param_1[0x98];
} while (param_1 != (longlong *)0x0);
lVar7 = *(longlong *)(*plVar1 + 0x4c8);
if (*(int *)(lVar7 + 0x720) != 0) {
*(undefined4 *)(lVar7 + 0x720) = 0;
for (lVar7 = *(longlong *)(lVar7 + 0x4d0); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x4e0)) {
lVar7 = FUN_1402f6470(lVar7,0);
}
}
}
return;
}



void FUN_1402fb7e0(longlong *param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    ulonglong uVar7;
    undefined4 local_18;
    undefined4 local_14;
    float local_10;

    iVar3 = (**(code **)(*param_1 + 0x3f0))();
    if (iVar3 == 0) {
        if ((longlong *)param_2[0x2b] != (longlong *)0x0) {
            *(longlong *)param_2[0x2b] = param_2[0x2c];
        }
        if (param_2[0x2c] != 0) {
            *(longlong *)(param_2[0x2c] + 0x158) = param_2[0x2b];
        }
        uVar7 = 0;
        param_2[0x2b] = 0;
        param_2[0x2c] = 0;
        if ((longlong *)param_2[0x2d] != (longlong *)0x0) {
            *(longlong *)param_2[0x2d] = param_2[0x2e];
        }
        if (param_2[0x2e] != 0) {
            *(longlong *)(param_2[0x2e] + 0x168) = param_2[0x2d];
        }
        param_2[0x2d] = 0;
        param_2[0x2e] = 0;
        (**(code **)(*param_2 + 0x160))(param_2,*(undefined4 *)(param_1 + 0x28));
        local_18 = *(undefined4 *)(param_1 + 0x85);
        local_14 = *(undefined4 *)((longlong)param_1 + 0x42c);
        local_10 = *(float *)(param_1 + 0x86) * *(float *)((longlong)param_2 + 0x94);
        (**(code **)(*param_2 + 0xf0))(param_2,&local_18);
        *(undefined4 *)(param_2 + 0x96) = 0;
        param_2[0x97] = 0;
        param_2[0x98] = (longlong)param_1;
        param_2[0x99] = param_1[0x99];
        for (lVar4 = param_2[0x9a]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x4e0)) {
            lVar4 = FUN_1402fb490(lVar4,param_2[0x99]);
        }
        pplVar1 = (longlong **)(param_1 + 0x9a);
        if (param_2[0x9b] == 0) {
            param_2[0x9b] = (longlong)pplVar1;
            pplVar2 = (longlong **)(param_2 + 0x9c);
            *pplVar2 = *pplVar1;
            *pplVar1 = param_2;
            if (*pplVar2 != (longlong *)0x0) {
                (*pplVar2)[0x9b] = (longlong)pplVar2;
            }
        }
        (**(code **)*param_2)(param_2);
        local_18 = 0;
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2,&local_18,0);
        plVar5 = param_1;
        if ((iVar3 != 0) && (*(int *)(param_2[8] + 0x2f8) != 0)) {
            do {
                plVar6 = *(longlong **)(param_2[0xb2] + uVar7 * 8);
                (**(code **)(*plVar6 + 0x78))(plVar6,1);
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_2[8] + 0x2f8));
        }
        do {
            plVar6 = param_1;
            if ((*(uint *)(plVar5 + 6) & 4) == 0) break;
            *(uint *)(plVar5 + 6) = *(uint *)(plVar5 + 6) & 0xfffffffb;
            pplVar1 = (longlong **)(plVar5 + 0x98);
            plVar5 = *pplVar1;
        } while (*pplVar1 != (longlong *)0x0);
        do {
            if ((*(uint *)((longlong)plVar6 + 0x34) & 0x20) == 0) break;
            *(uint *)((longlong)plVar6 + 0x34) = *(uint *)((longlong)plVar6 + 0x34) & 0xffffffdf;
            pplVar1 = (longlong **)(plVar6 + 0x98);
            plVar6 = *pplVar1;
        } while (*pplVar1 != (longlong *)0x0);
        FUN_1402f5df0(param_1);
    }
    return;
}



void FUN_1402fba10(longlong param_1,int param_2)

{
longlong *plVar1;
longlong *plVar2;

plVar1 = *(longlong **)(param_1 + 0x4d0);
while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
plVar1 = (longlong *)plVar2[0x9c];
if (*(int *)(plVar2 + 0x96) == param_2) {
(**(code **)(*plVar2 + 0x3a8))();
}
}
return;
}



void FUN_1402fba60(longlong param_1)

{
longlong *plVar1;
longlong *plVar2;

plVar1 = *(longlong **)(param_1 + 0x4d0);
while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
plVar1 = (longlong *)plVar2[0x9c];
if (*(int *)(plVar2 + 0x96) != 0) {
(**(code **)(*plVar2 + 0x3a8))();
}
}
return;
}



void FUN_1402fbab0(longlong param_1)

{
longlong *plVar1;
longlong *plVar2;

plVar1 = *(longlong **)(param_1 + 0x4d0);
while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
plVar1 = (longlong *)plVar2[0x9c];
if (*(int *)(plVar2 + 0x96) == 0) {
(**(code **)(*plVar2 + 0x3a8))();
}
}
return;
}



void FUN_1402fbb00(longlong *param_1)

{
    uint *puVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined4 local_18 [4];

    if ((param_1[0x98] != 0) &&
        ((iVar5 = (**(code **)(*param_1 + 0x3f0))(), iVar5 == 0 ||
                                                     (iVar5 = (**(code **)(*(longlong *)param_1[0x98] + 0x3f0))(), iVar5 == 0)))) {
        FUN_1402f5df0();
        uVar7 = 0;
        lVar6 = *(longlong *)(param_1[0x99] + 0x4c8);
        if (*(int *)(lVar6 + 0x720) != 0) {
            *(undefined4 *)(lVar6 + 0x720) = 0;
            for (lVar6 = *(longlong *)(lVar6 + 0x4d0); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x4e0)) {
                lVar6 = FUN_1402f6470(lVar6,0);
            }
        }
        for (lVar6 = param_1[0x98]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x4c0)) {
            lVar2 = *(longlong *)(lVar6 + 0x4d0);
            uVar4 = (uint)(*(int *)(lVar6 + 0x358) != 0);
            while (lVar2 != 0) {
                puVar1 = (uint *)(lVar2 + 0x134);
                lVar2 = *(longlong *)(lVar2 + 0x4e0);
                if (uVar4 <= *puVar1) {
                    uVar4 = *puVar1;
                }
            }
            if (*(uint *)(lVar6 + 0x134) == uVar4) break;
            *(uint *)(lVar6 + 0x134) = uVar4;
        }
        lVar6 = param_1[0x9a];
        *(undefined4 *)(param_1 + 0x96) = 0;
        param_1[0x97] = 0;
        param_1[0x98] = 0;
        param_1[0x99] = (longlong)param_1;
        for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x4e0)) {
            lVar6 = FUN_1402fb490(lVar6,param_1[0x99]);
        }
        local_18[0] = 0;
        iVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
        if ((iVar5 != 0) && (*(int *)(param_1[8] + 0x2f8) != 0)) {
            do {
                plVar3 = *(longlong **)(param_1[0xb2] + uVar7 * 8);
                (**(code **)(*plVar3 + 0x78))(plVar3,1);
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1[8] + 0x2f8));
        }
        if ((longlong *)param_1[0x9b] != (longlong *)0x0) {
            *(longlong *)param_1[0x9b] = param_1[0x9c];
        }
        if (param_1[0x9c] != 0) {
            *(longlong *)(param_1[0x9c] + 0x4d8) = param_1[0x9b];
        }
        param_1[0x9b] = 0;
        param_1[0x9c] = 0;
        (**(code **)(*param_1 + 8))(param_1);
    }
    return;
}



void FUN_1402fbd00(longlong param_1,undefined8 *param_2)

{
if (*(undefined8 **)(param_1 + 0x4c0) != (undefined8 *)0x0) {
(**(code **)**(undefined8 **)(param_1 + 0x4c0))();
*param_2 = *(undefined8 *)(param_1 + 0x4c0);
return;
}
*param_2 = 0;
return;
}



void FUN_1402fbe00(longlong param_1,int param_2)

{
longlong *plVar1;

if (*(int *)(param_1 + 0x14c) != param_2) {
plVar1 = *(longlong **)(param_1 + 0x4d0);
*(int *)(param_1 + 0x14c) = param_2;
for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0x9c]) {
(**(code **)(*plVar1 + 1000))(plVar1,param_2);
}
}
return;
}



undefined8
        FUN_1402fbe60(longlong *param_1,undefined4 param_2,uint param_3,undefined8 param_4,
undefined8 param_5,undefined8 param_6)

{
ushort uVar1;
longlong lVar2;
int iVar3;
undefined8 *puVar4;
undefined8 uVar5;
undefined4 *puVar6;
undefined4 *puVar7;
longlong *plVar8;
undefined4 local_28 [4];

puVar7 = (undefined4 *)0x0;
local_28[0] = 0;
iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_28,0);
if (iVar3 == 0) {
puVar4 = (undefined8 *)FUN_14018b280(0x40,0);
if (puVar4 != (undefined8 *)0x0) {
*puVar4 = &PTR_FUN_140b64078;
puVar4[2] = 0;
puVar4[3] = 0;
puVar4[1] = param_1;
param_1 = param_1 + 9;
if (puVar4[2] == 0) {
puVar4[2] = param_1;
plVar8 = puVar4 + 3;
*plVar8 = *param_1;
*param_1 = (longlong)puVar4;
if (*plVar8 != 0) {
*(longlong **)(*plVar8 + 0x10) = plVar8;
}
}
*(undefined4 *)(puVar4 + 4) = param_2;
*(uint *)((longlong)puVar4 + 0x24) = param_3;
*puVar4 = &PTR_FUN_140b63f18;
puVar4[5] = param_4;
puVar4[6] = param_5;
puVar4[7] = param_6;
}
uVar5 = 1;
}
else {
lVar2 = param_1[8];
plVar8 = param_1 + 0x32;
if ((param_3 < *(uint *)(lVar2 + 0x270)) &&
(uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x278) + (longlong)(int)param_3 * 2),
(uint)uVar1 < *(uint *)(lVar2 + 0x260))) {
plVar8 = (longlong *)
        ((ulonglong)
         *(ushort *)
                 ((ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x268) + 2 + (ulonglong)uVar1 * 4) *
                  0x160 + 6 + *(longlong *)(lVar2 + 0x188)) * 0x60 + param_1[0x3e]);
}
puVar6 = (undefined4 *)FUN_14018b280(0x80,0);
if (puVar6 != (undefined4 *)0x0) {
*puVar6 = param_2;
puVar6[1] = param_3;
*(undefined8 *)(puVar6 + 6) = param_5;
*(longlong **)(puVar6 + 2) = plVar8;
*(undefined8 *)(puVar6 + 8) = param_6;
*(undefined8 *)(puVar6 + 4) = param_4;
*(undefined8 *)(puVar6 + 0x12) = 0;
*(undefined8 *)(puVar6 + 0x14) = 0;
*(undefined8 *)(puVar6 + 0xc) = 3;
puVar6[0xe] = 0;
*(undefined8 *)(puVar6 + 0x10) = 0;
*(undefined8 *)(puVar6 + 0x16) = 0;
*(undefined8 *)(puVar6 + 0x18) = 0;
*(undefined8 *)(puVar6 + 0x1a) = 0;
*(undefined ***)(puVar6 + 10) = &PTR_FUN_140b62ac0;
*(undefined8 *)(puVar6 + 0x1c) = 0;
*(undefined8 *)(puVar6 + 0x1e) = 0;
puVar7 = puVar6;
}
param_1 = param_1 + 0xd4;
if (*(longlong *)(puVar7 + 0x1c) == 0) {
*(longlong **)(puVar7 + 0x1c) = param_1;
plVar8 = (longlong *)(puVar7 + 0x1e);
*plVar8 = *param_1;
*param_1 = (longlong)puVar7;
if (*plVar8 != 0) {
*(longlong **)(*plVar8 + 0x70) = plVar8;
}
}
uVar5 = 0;
}
return uVar5;
}



undefined8
        FUN_1402fc030(longlong *param_1,int param_2,int param_3,longlong param_4,longlong param_5,
        longlong param_6)

{
longlong *plVar1;
int *piVar2;
int iVar3;
undefined8 *puVar4;
undefined8 uVar5;
undefined4 local_18 [4];

local_18[0] = 0;
iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
if (iVar3 == 0) {
puVar4 = (undefined8 *)FUN_14018b280(0x40,0);
if (puVar4 != (undefined8 *)0x0) {
*puVar4 = &PTR_FUN_140b64078;
puVar4[2] = 0;
puVar4[3] = 0;
puVar4[1] = param_1;
param_1 = param_1 + 9;
if (puVar4[2] == 0) {
puVar4[2] = param_1;
plVar1 = puVar4 + 3;
*plVar1 = *param_1;
*param_1 = (longlong)puVar4;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x10) = plVar1;
}
}
*(int *)(puVar4 + 4) = param_2;
*(int *)((longlong)puVar4 + 0x24) = param_3;
*puVar4 = &PTR_FUN_140b63f08;
puVar4[5] = param_4;
puVar4[6] = param_5;
puVar4[7] = param_6;
}
uVar5 = 1;
}
else {
for (piVar2 = (int *)param_1[0xd4]; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0x1e)) {
if ((((*piVar2 == param_2) && (piVar2[1] == param_3)) &&
(*(longlong *)(piVar2 + 4) == param_4)) &&
((*(longlong *)(piVar2 + 6) == param_5 && (*(longlong *)(piVar2 + 8) == param_6)))) {
FUN_1402f3700();
return 0;
}
}
uVar5 = 0x80070490;
}
return uVar5;
}



void FUN_1402fc150(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined4 local_18 [4];

    local_18[0] = 0;
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    if (iVar3 == 0) {
        puVar4 = (undefined8 *)FUN_14018b280(0x20,0);
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_FUN_140b64078;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[1] = param_1;
            param_1 = param_1 + 9;
            if (puVar4[2] == 0) {
                puVar4[2] = param_1;
                plVar1 = puVar4 + 3;
                *plVar1 = *param_1;
                *param_1 = (longlong)puVar4;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            *puVar4 = &PTR_FUN_140b63f58;
            return;
        }
    }
    else {
        lVar2 = param_1[0xd4];
        while (lVar2 != 0) {
            FUN_1402f3700(lVar2);
            lVar2 = param_1[0xd4];
        }
    }
    return;
}



undefined4 FUN_1402fc210(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return *(undefined4 *)(param_1[8] + 0x318);
}



bool FUN_1402fc4e0(longlong *param_1,uint param_2)

{
longlong lVar1;
undefined4 local_18 [4];

if ((param_2 != 0) && ((int)param_2 < 0x3d)) {
local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x578))(param_1,local_18);
lVar1 = param_1[8];
if (param_2 < *(uint *)(lVar1 + 0x338)) {
return (uint)*(ushort *)(*(longlong *)(lVar1 + 0x340) + (longlong)(int)param_2 * 2) <
*(uint *)(lVar1 + 0x328);
}
}
return false;
}



void FUN_1402fc550(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4,
uint param_5_00,undefined8 param_6_00,undefined4 *param_7_00,longlong *param_5,
longlong param_6,longlong param_7,float *param_8)

{
ushort uVar1;
int iVar2;
longlong lVar3;
longlong lVar4;
float fVar5;
float fVar6;
float fVar7;
undefined4 uVar8;
float fVar9;
undefined auStack344 [32];
undefined8 local_138;
undefined *local_130;
undefined local_128 [64];
longlong local_e8;
undefined *local_e0;
ulonglong local_98;

local_98 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
if ((param_5_00 != 0) && ((int)param_5_00 < 0x3d)) {
local_138 = CONCAT44(local_138._4_4_,0xffffffff);
(**(code **)(*param_4 + 0x10))(param_4,&local_138);
lVar3 = param_4[8];
if (param_5_00 < *(uint *)(lVar3 + 0x338)) {
uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x340) + (longlong)(int)param_5_00 * 2);
if (((uint)uVar1 < *(uint *)(lVar3 + 0x328)) &&
(iVar2 = FUN_140300dd0(param_4,0xc), -1 < iVar2)) {
lVar4 = (ulonglong)uVar1 * 0x20 + param_4[0x5c];
lVar3 = (ulonglong)(uint)uVar1 * 0x38 + *(longlong *)(param_4[8] + 0x330);
if (param_5 != (longlong *)0x0) {
local_138 = *(longlong *)(lVar3 + 0x2c);
*param_5 = local_138;
}
if (param_6 != 0) {
local_e8 = (ulonglong)*(ushort *)(lVar3 + 2) * 0x40 + param_4[0x67];
FUN_1401afc20(&local_e8,local_128);
local_138 = param_4[2] + 0xf0;
local_130 = local_128;
local_e8 = local_138;
local_e0 = local_130;
FUN_1401afb10(&local_e8,param_6);
}
if (param_7 != 0) {
local_138 = (ulonglong)*(ushort *)(lVar3 + 2) * 0x40 + param_4[0x67];
local_130 = (undefined *)(param_4[2] + 0x130);
local_e8 = local_138;
local_e0 = local_130;
FUN_1401afb10(&local_e8,param_7);
}
if (*(int *)(lVar3 + 4) == 0) {
if (param_8 != (float *)0x0) {
uVar8 = 0;
fVar7 = *(float *)(lVar4 + 8) * 0.5;
fVar6 = *(float *)(lVar3 + 0x2c);
fVar9 = *(float *)(lVar3 + 0x30);
fVar5 = (float)FUN_1408fc950(fVar7);
fVar7 = (float)FUN_1408fe3d0(CONCAT44(uVar8,fVar7));
*(undefined8 *)(param_8 + 1) = 0;
*(undefined8 *)(param_8 + 3) = 0;
*(undefined8 *)(param_8 + 6) = 0;
*(undefined8 *)(param_8 + 8) = 0;
param_8[0xb] = -1.0;
*(undefined8 *)(param_8 + 0xc) = 0;
fVar9 = fVar9 / (fVar6 - fVar9);
param_8[5] = fVar5 / fVar7;
param_8[0xf] = 0.0;
param_8[10] = fVar9;
*param_8 = (fVar5 / fVar7) / param_3;
param_8[0xe] = fVar9 * fVar6;
}
if (param_7_00 != (undefined4 *)0x0) {
*param_7_00 = *(undefined4 *)(lVar4 + 8);
}
}
else {
if (param_8 != (float *)0x0) {
fVar6 = *(float *)(lVar3 + 0x28);
fVar9 = *(float *)(lVar3 + 0x2c);
fVar5 = *(float *)(lVar3 + 0x30);
*(undefined8 *)(param_8 + 1) = 0;
*(undefined8 *)(param_8 + 3) = 0;
*(undefined8 *)(param_8 + 6) = 0;
*(undefined8 *)(param_8 + 8) = 0;
*(undefined8 *)(param_8 + 0xb) = 0;
param_8[0xd] = 0.0;
param_8[0xf] = 1.0;
*param_8 = 2.0 / (fVar6 / param_3);
param_8[5] = 2.0 / fVar6;
fVar6 = 1.0 / (fVar9 - fVar5);
param_8[10] = fVar6;
param_8[0xe] = fVar6 * fVar9;
}
if (param_7_00 != (undefined4 *)0x0) {
*param_7_00 = 0;
}
}
}
}
}
FUN_1407db4f0(local_98 ^ (ulonglong)auStack344);
return;
}



bool FUN_1402fc8c0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    return param_1[0x5d] != 0;
}



undefined4 FUN_1402fc900(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    FUN_140300dd0(param_1,4);
    return *(undefined4 *)(param_1 + 0x5e);
}



bool FUN_1402fc940(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    return param_1[0x61] != 0;
}



undefined4 FUN_1402fc980(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    FUN_140300dd0(param_1,4);
    return *(undefined4 *)(param_1 + 0x62);
}



void FUN_1402fc9c0(longlong param_1)

{
longlong *plVar1;
uint uVar2;
ulonglong uVar3;

if ((((*(int *)(param_1 + 0x5a0) == 0) &&
(*(undefined4 *)(param_1 + 0x5a0) = 1, *(longlong *)(param_1 + 0x590) != 0)) &&
(*(int *)(param_1 + 0x5a4) != 0)) &&
(uVar3 = 0, *(int *)(*(longlong *)(param_1 + 0x40) + 0x2f8) != 0)) {
do {
plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x590) + uVar3 * 8);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x40))(plVar1,0xffffffff);
}
uVar2 = (int)uVar3 + 1;
uVar3 = (ulonglong)uVar2;
} while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x2f8));
}
return;
}



void FUN_1402fca50(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;

    if (*(int *)(param_1 + 0xb4) != 0) {
        lVar1 = param_1[2];
        *(undefined4 *)(param_1 + 0xb4) = 0;
        iVar2 = (**(code **)(*param_1 + 0x480))();
        iVar2 = *(int *)(lVar1 + 0xd0) + iVar2;
        *(int *)((longlong)param_1 + 0x3f4) = iVar2;
        if (iVar2 == *(int *)(lVar1 + 0xd0)) {
            puVar3 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar3 == (undefined8 *)0x0) {
                puVar3 = (undefined8 *)0x0;
            }
            else {
                FUN_1403272b0(puVar3,*(undefined4 *)((longlong)param_1 + 0x3f4),param_1,1);
                *puVar3 = &PTR_FUN_140b644d8;
            }
            FUN_1403129a0(param_1[2],puVar3);
            *(undefined4 *)(param_1 + 0x7e) = 1;
            return;
        }
        FUN_140306300(param_1);
    }
    return;
}



void FUN_1402fcb10(longlong param_1,int param_2)

{
longlong *plVar1;
uint uVar2;
ulonglong uVar3;

if ((((*(int *)(param_1 + 0x5a4) != param_2) &&
(*(int *)(param_1 + 0x5a4) = param_2, *(longlong *)(param_1 + 0x590) != 0)) &&
(*(int *)(param_1 + 0x5a0) != 0)) &&
((param_2 != 0 && (uVar3 = 0, *(int *)(*(longlong *)(param_1 + 0x40) + 0x2f8) != 0)))) {
do {
plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x590) + uVar3 * 8);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x40))(plVar1,0xffffffff);
}
uVar2 = (int)uVar3 + 1;
uVar3 = (ulonglong)uVar2;
} while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x2f8));
}
return;
}



ulonglong FUN_1402fcc50(longlong param_1)

{
longlong *plVar1;
uint uVar2;
ulonglong uVar3;
ulonglong uVar4;

uVar3 = 0;
if (*(longlong *)(param_1 + 0x590) == 0) {
return 0;
}
uVar4 = uVar3;
if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x2f8) != 0) {
do {
plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x590) + uVar3 * 8);
if ((plVar1 != (longlong *)0x0) &&
(uVar2 = (**(code **)(*plVar1 + 0x70))(), (uint)uVar4 < uVar2)) {
uVar4 = (ulonglong)uVar2;
}
uVar2 = (int)uVar3 + 1;
uVar3 = (ulonglong)uVar2;
} while (uVar2 < *(uint *)(*(longlong *)(param_1 + 0x40) + 0x2f8));
}
return uVar4;
}



longlong FUN_1402fccd0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x390;
}



longlong FUN_1402fcd00(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x3d0;
}



longlong FUN_1402fce70(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x410;
}



longlong FUN_1402fcea0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x450;
}



longlong FUN_1402fd010(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x4b0;
}



longlong FUN_1402fd040(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return param_1[8] + 0x4f0;
}



longlong * FUN_1402fd070(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18,0);
    return param_1 + 200;
}



undefined4 FUN_1402fd0a0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return *(undefined4 *)(param_1[8] + 0x388);
}



undefined4 FUN_1402fd0e0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x578))(param_1,local_18);
    return *(undefined4 *)(param_1[8] + 0x38c);
}



uint FUN_1402fd120(longlong *param_1,uint param_2)

{
longlong lVar1;
uint uVar2;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x10))(param_1,local_18,0);
lVar1 = param_1[8];
if (*(uint *)(lVar1 + 0x550) <= param_2) {
return 0xffffffff;
}
uVar2 = (uint)*(ushort *)(*(longlong *)(lVar1 + 0x558) + (longlong)(int)param_2 * 2);
if (*(uint *)(lVar1 + 0x540) <= uVar2) {
uVar2 = 0xffffffff;
}
return uVar2;
}



undefined4 FUN_1402fd1b0(longlong param_1)

{
uint uVar1;

uVar1 = FUN_1402fd120();
if (uVar1 == 0xffffffff) {
return 0;
}
FUN_140300dd0(param_1,0x80);
return *(undefined4 *)((ulonglong)uVar1 * 0x80 + *(longlong *)(param_1 + 0x680));
}



undefined (*) [16] FUN_1402fd210(longlong param_1,undefined (*param_2) [16],undefined4 param_3)

{
undefined4 *puVar1;
uint uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;

uVar2 = FUN_1402fd120(param_1,param_3);
if (uVar2 == 0xffffffff) {
uVar3 = 0;
uVar4 = 0;
uVar5 = 0;
uVar6 = 0;
}
else {
FUN_140300dd0(param_1,0x80);
puVar1 = (undefined4 *)((ulonglong)uVar2 * 0x80 + 0x20 + *(longlong *)(param_1 + 0x680));
uVar3 = *puVar1;
uVar4 = puVar1[1];
uVar5 = puVar1[2];
uVar6 = puVar1[3];
}
*param_2 = CONCAT412(uVar6,CONCAT48(uVar5,CONCAT44(uVar4,uVar3)));
return param_2;
}

