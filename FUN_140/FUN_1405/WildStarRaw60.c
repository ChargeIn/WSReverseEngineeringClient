//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140539860(undefined8 param_1,float param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    float fVar4;
    undefined4 uVar5;
    float fVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    uint local_40;

    fVar6 = 0.0;
    if ((0.0 < param_2) &&
        ((((*(longlong *)(param_3 + 0x71a8) != 0 || (*(longlong *)(param_3 + 0x71a0) != 0)) &&
           ((*(byte *)(DAT_140c65898 + 0x7b48) & 0x20) != 0)) &&
          ((*(uint *)(DAT_140c65678 + 0x40) & 0x2000) != 0)))) {
        if (*(int *)(param_3 + 0x749c) == 0) {
            param_2 = param_2 + *(float *)(param_3 + 0x74a4);
            *(float *)(param_3 + 0x74a4) = param_2;
            if (30.0 < param_2) {
                *(undefined4 *)(param_3 + 0x749c) = 1;
                *(undefined4 *)(param_3 + 0x74a4) = 0;
                *(undefined8 *)(param_3 + 0x74b8) = 0;
                *(undefined8 *)(param_3 + 0x74b0) = 0;
            }
        }
        else {
            *(longlong *)(param_3 + 0x74b8) = *(longlong *)(param_3 + 0x74b8) + 1;
            lVar2 = 0;
            fVar4 = param_2 * 1000.0;
            if ((9.223372e+18 <= fVar4) && (fVar4 = fVar4 - 9.223372e+18, fVar4 < 9.223372e+18)) {
                lVar2 = -0x8000000000000000;
            }
            *(longlong *)(param_3 + 0x74b0) = *(longlong *)(param_3 + 0x74b0) + (longlong)fVar4 + lVar2;
            if (*(int *)(param_3 + 0x749c) == 1) {
                param_2 = param_2 + *(float *)(param_3 + 0x74a4);
                *(float *)(param_3 + 0x74a4) = param_2;
                if (120.0 < param_2) {
                    *(undefined4 *)(param_3 + 0x749c) = 2;
                    *(undefined4 *)(param_3 + 0x74a4) = 0;
                }
            }
            else {
                plVar3 = *(longlong **)(param_3 + 0x71a8);
                plVar1 = plVar3;
                if (plVar3 == (longlong *)0x0) {
                    plVar1 = *(longlong **)(param_3 + 0x71a0);
                }
                uVar7 = *(undefined4 *)(plVar1 + 4);
                uVar8 = *(undefined4 *)((longlong)plVar1 + 0x24);
                uVar9 = *(undefined4 *)(plVar1 + 5);
                uVar10 = *(undefined4 *)((longlong)plVar1 + 0x2c);
                if (plVar3 == (longlong *)0x0) {
                    plVar3 = *(longlong **)(param_3 + 0x71a0);
                }
                uVar5 = (**(code **)(*plVar3 + 8))();
                if ((*(float *)(param_3 + 0x74d0) <= param_2 && param_2 != *(float *)(param_3 + 0x74d0)) ||
                    (*(int *)(param_3 + 0x74a8) == 0)) {
                    *(float *)(param_3 + 0x74d0) = param_2;
                    *(undefined (*) [16])(param_3 + 0x74c0) =
                            CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7)));
                    *(undefined4 *)(param_3 + 0x74d4) = uVar5;
                }
                *(int *)(param_3 + 0x74a8) = *(int *)(param_3 + 0x74a8) + 1;
                fVar4 = param_2 + *(float *)(param_3 + 0x74a4);
                param_2 = param_2 + *(float *)(param_3 + 0x74a0);
                *(float *)(param_3 + 0x74a4) = fVar4;
                *(float *)(param_3 + 0x74a0) = param_2;
                if (30.0 < param_2) {
                    local_50 = *(undefined8 *)(param_3 + 0x74c0);
                    local_48 = CONCAT44(*(undefined4 *)(param_3 + 0x74d4),*(undefined4 *)(param_3 + 0x74c8));
                    local_58 = CONCAT44((int)(longlong)(*(float *)(param_3 + 0x74d0) * 1000.0) * 2 |
                                        (uint)(DAT_140c1cf7c < fVar6),
                                        (int)(longlong)
                                                ((fVar4 * 1000.0) / (float)(ulonglong)*(uint *)(param_3 + 0x74a8)
                                                ) * 2 | (uint)(DAT_140c1b438 < fVar6));
                    local_40 = (int)(*(ulonglong *)(param_3 + 0x74b0) / *(ulonglong *)(param_3 + 0x74b8)) * 2
                               | (uint)(_DAT_140c1e45c < fVar6);
                    FUN_1403f4900(param_3,0x240,&local_58);
                    *(undefined8 *)(param_3 + 0x74a0) = 0;
                    *(undefined4 *)(param_3 + 0x74a8) = 0;
                }
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140539b50(undefined8 param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    uint uVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    longlong lVar13;
    undefined4 *puVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    undefined auStack1112 [32];
    undefined8 local_438;
    undefined8 local_430;
    undefined8 local_428;
    undefined8 local_420;
    undefined4 local_418 [206];
    uint local_e0;
    uint local_dc;
    uint local_d8;
    uint local_d4;
    uint local_c8;
    uint local_c4;
    uint local_c0;
    uint local_bc;
    uint local_b0;
    uint local_ac;
    uint local_a8;
    uint local_a4;
    uint local_98;
    uint local_94;
    uint local_90;
    uint local_8c;
    uint local_80;
    uint local_7c;
    uint local_78;
    uint local_74;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack1112;
    if ((DAT_140dc3300 & 1) == 0) {
        DAT_140dc3300 = DAT_140dc3300 | 1;
        DAT_140dc3308 = 15000;
        DAT_140dc330c = DAT_140c636a8;
        _DAT_140dc3310 = 0;
    }
    uVar10 = DAT_140c636a8 - DAT_140dc330c;
    if (DAT_140dc3308 < uVar10) {
        DAT_140dc330c = DAT_140c636a8;
        _DAT_140dc3310 = uVar10;
        puVar11 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x2d0))();
        if ((((uint)puVar11 | (uint)local_418) & 0xf) == 0) {
            lVar13 = 7;
            puVar9 = local_418;
            do {
                puVar14 = puVar9;
                puVar12 = puVar11;
                uVar1 = puVar12[1];
                uVar2 = puVar12[2];
                uVar3 = puVar12[3];
                uVar4 = puVar12[4];
                uVar5 = puVar12[5];
                uVar6 = puVar12[6];
                uVar7 = puVar12[7];
                *puVar14 = *puVar12;
                puVar14[1] = uVar1;
                puVar14[2] = uVar2;
                puVar14[3] = uVar3;
                uVar1 = puVar12[8];
                uVar2 = puVar12[9];
                uVar3 = puVar12[10];
                uVar8 = puVar12[0xb];
                puVar14[4] = uVar4;
                puVar14[5] = uVar5;
                puVar14[6] = uVar6;
                puVar14[7] = uVar7;
                uVar4 = puVar12[0xc];
                uVar5 = puVar12[0xd];
                uVar6 = puVar12[0xe];
                uVar7 = puVar12[0xf];
                puVar14[8] = uVar1;
                puVar14[9] = uVar2;
                puVar14[10] = uVar3;
                puVar14[0xb] = uVar8;
                uVar1 = puVar12[0x10];
                uVar2 = puVar12[0x11];
                uVar3 = puVar12[0x12];
                uVar8 = puVar12[0x13];
                puVar14[0xc] = uVar4;
                puVar14[0xd] = uVar5;
                puVar14[0xe] = uVar6;
                puVar14[0xf] = uVar7;
                uVar4 = puVar12[0x14];
                uVar5 = puVar12[0x15];
                uVar6 = puVar12[0x16];
                uVar7 = puVar12[0x17];
                puVar14[0x10] = uVar1;
                puVar14[0x11] = uVar2;
                puVar14[0x12] = uVar3;
                puVar14[0x13] = uVar8;
                uVar1 = puVar12[0x18];
                uVar2 = puVar12[0x19];
                uVar3 = puVar12[0x1a];
                uVar8 = puVar12[0x1b];
                puVar14[0x14] = uVar4;
                puVar14[0x15] = uVar5;
                puVar14[0x16] = uVar6;
                puVar14[0x17] = uVar7;
                uVar4 = puVar12[0x1c];
                uVar5 = puVar12[0x1d];
                uVar6 = puVar12[0x1e];
                uVar7 = puVar12[0x1f];
                puVar14[0x18] = uVar1;
                puVar14[0x19] = uVar2;
                puVar14[0x1a] = uVar3;
                puVar14[0x1b] = uVar8;
                puVar14[0x1c] = uVar4;
                puVar14[0x1d] = uVar5;
                puVar14[0x1e] = uVar6;
                puVar14[0x1f] = uVar7;
                lVar13 = lVar13 + -1;
                puVar11 = puVar12 + 0x20;
                puVar9 = puVar14 + 0x20;
            } while (lVar13 != 0);
            uVar1 = puVar12[0x21];
            uVar2 = puVar12[0x22];
            uVar3 = puVar12[0x23];
            uVar4 = puVar12[0x24];
            uVar5 = puVar12[0x25];
            uVar6 = puVar12[0x26];
            uVar7 = puVar12[0x27];
            puVar14[0x20] = puVar12[0x20];
            puVar14[0x21] = uVar1;
            puVar14[0x22] = uVar2;
            puVar14[0x23] = uVar3;
            uVar1 = puVar12[0x28];
            uVar2 = puVar12[0x29];
            uVar3 = puVar12[0x2a];
            uVar8 = puVar12[0x2b];
            puVar14[0x24] = uVar4;
            puVar14[0x25] = uVar5;
            puVar14[0x26] = uVar6;
            puVar14[0x27] = uVar7;
            puVar14[0x28] = uVar1;
            puVar14[0x29] = uVar2;
            puVar14[0x2a] = uVar3;
            puVar14[0x2b] = uVar8;
        }
        else {
            FUN_1407db590(local_418,puVar11,0x3b0);
        }
        fVar16 = (float)(ulonglong)local_e0 * 0.001 + (float)(ulonglong)local_c8 * 0.001 +
                 (float)(ulonglong)local_b0 * 0.001 + (float)(ulonglong)local_98 * 0.001 +
                 (float)(ulonglong)local_80 * 0.001;
        fVar17 = (float)(ulonglong)local_dc * 0.001 + (float)(ulonglong)local_c4 * 0.001 +
                 (float)(ulonglong)local_ac * 0.001 + (float)(ulonglong)local_94 * 0.001 +
                 (float)(ulonglong)local_7c * 0.001;
        fVar18 = (float)(ulonglong)local_d8 * 0.001 + (float)(ulonglong)local_c0 * 0.001 +
                 (float)(ulonglong)local_a8 * 0.001 + (float)(ulonglong)local_90 * 0.001 +
                 (float)(ulonglong)local_78 * 0.001;
        fVar19 = (float)(ulonglong)local_d4 * 0.0009765625 + (float)(ulonglong)local_bc * 0.0009765625 +
                 (float)(ulonglong)local_a4 * 0.0009765625 + (float)(ulonglong)local_8c * 0.0009765625 +
                 (float)(ulonglong)local_74 * 0.0009765625;
        if ((((1e+09 < DAT_140c8aee0) || (1e+09 < DAT_140c8aedc)) || (1e+09 < DAT_140c8aee8)) ||
            (1e+09 < DAT_140c8aee4)) {
            DAT_140c8aee0 = 0.0;
            DAT_140c8aedc = 0.0;
            DAT_140c8aee8 = 0.0;
            DAT_140c8aee4 = 0.0;
            DAT_140c8aef0 = 0;
        }
        DAT_140c8aef0 = DAT_140c8aef0 + 1;
        DAT_140c8aee0 = DAT_140c8aee0 + fVar16;
        DAT_140c8aedc = DAT_140c8aedc + fVar17;
        DAT_140c8aee8 = DAT_140c8aee8 + fVar18;
        DAT_140c8aee4 = DAT_140c8aee4 + fVar19;
        if ((DAT_140c8aef0 & 7) == 0) {
            fVar15 = (float)DAT_140c8aef0;
            if ((longlong)DAT_140c8aef0 < 0) {
                fVar15 = fVar15 + 1.844674e+19;
            }
            local_428 = CONCAT44(fVar17,fVar16);
            fVar15 = 1.0 / fVar15;
            local_420 = CONCAT44(fVar19,fVar18);
            local_438 = CONCAT44(fVar15 * DAT_140c8aedc,fVar15 * DAT_140c8aee0);
            local_430 = CONCAT44(fVar15 * DAT_140c8aee4,fVar15 * DAT_140c8aee8);
            FUN_1403f4900(param_1,0x23e,&local_438);
        }
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack1112);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14053a000(longlong param_1)

{
    ulonglong uVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    int iVar9;
    undefined8 local_18;
    undefined8 local_10;

    if ((((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7928) != 0)) &&
         ((*(byte *)(DAT_140c65898 + 0x7b48) & 0x20) != 0)) && (DAT_140c65808 != (longlong *)0x0)) {
        if ((DAT_140dc3314 & 1) == 0) {
            DAT_140dc3314 = DAT_140dc3314 | 1;
            _DAT_140dc3320 = 0;
            _DAT_140dc3318 = 60000;
            _DAT_140dc331c = DAT_140c636a8;
        }
        plVar8 = DAT_140c65808;
        iVar9 = DAT_140c636a8;
        if (_DAT_140c5a410 != 0) {
            uVar5 = (**(code **)(*DAT_140c65808 + 200))();
            plVar8 = DAT_140c65808;
            *(undefined8 *)(param_1 + 0x74d8) = uVar5;
            uVar5 = (**(code **)(*plVar8 + 0xc0))();
            plVar8 = DAT_140c65808;
            iVar9 = DAT_140c636a8;
            *(undefined8 *)(param_1 + 0x74e0) = uVar5;
            _DAT_140c5a410 = 0;
        }
        uVar2 = iVar9 - _DAT_140dc331c;
        if (_DAT_140dc3318 < uVar2) {
            _DAT_140dc331c = iVar9;
            _DAT_140dc3320 = uVar2;
            lVar6 = (**(code **)(*plVar8 + 200))();
            lVar7 = (**(code **)(*DAT_140c65808 + 0xc0))();
            uVar1 = (ulonglong)(DAT_140c636a8 - _DAT_140dc3320) / 60000;
            if ((int)uVar1 != 0) {
                local_18 = 0;
                local_10 = 0;
                uVar3 = (**(code **)(*DAT_140c65808 + 0x60))();
                iVar4 = (int)((ulonglong)(lVar6 - *(longlong *)(param_1 + 0x74d8)) / uVar1);
                iVar9 = -1;
                if (iVar4 != -1) {
                    iVar9 = iVar4;
                }
                iVar4 = 0;
                if (iVar9 != 0) {
                    iVar4 = iVar9;
                }
                local_18 = CONCAT44(iVar4,uVar3);
                iVar4 = (int)((ulonglong)(lVar7 - *(longlong *)(param_1 + 0x74e0)) / uVar1);
                iVar9 = -1;
                if (iVar4 != -1) {
                    iVar9 = iVar4;
                }
                iVar4 = 0;
                if (iVar9 != 0) {
                    iVar4 = iVar9;
                }
                local_10 = CONCAT44(*(int *)(DAT_140c65898 + 0x6f08) * 2 | (uint)(_DAT_140c63698 != 0),iVar4
                );
                FUN_1403f4900(param_1,0x23f,&local_18);
            }
            *(longlong *)(param_1 + 0x74d8) = lVar6;
            *(longlong *)(param_1 + 0x74e0) = lVar7;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14053a210(longlong param_1)

{
    float *pfVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    float fVar15;
    float fVar16;
    undefined auStack504 [32];
    longlong **local_1d8;
    undefined8 *local_1d0;
    undefined4 local_1c8;
    undefined4 local_1c0;
    longlong *local_1b8;
    undefined4 local_1b0;
    undefined4 local_1a8;
    undefined4 local_1a0;
    undefined4 local_198;
    undefined4 local_190;
    undefined8 local_188;
    undefined local_168 [8];
    undefined4 uStack352;
    undefined4 uStack348;
    int local_158;
    int local_154;
    undefined local_148 [4];
    undefined auStack324 [4];
    undefined8 uStack320;
    undefined8 local_138;
    undefined *puStack304;
    longlong *local_128 [2];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
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
    undefined8 local_b8;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined8 local_a8;
    undefined *puStack160;
    undefined4 local_98;
    undefined8 local_90;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    if (*(int *)(param_1 + 0x6d20) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x6490);
        local_f8 = _DAT_140c78390;
        uStack244 = uRam0000000140c78394;
        uStack240 = uRam0000000140c78398;
        uStack236 = uRam0000000140c7839c;
        local_e8 = _DAT_140c783a0;
        uStack228 = uRam0000000140c783a4;
        uStack224 = uRam0000000140c783a8;
        uStack220 = uRam0000000140c783ac;
        uVar11 = 0;
        uVar13 = 0;
        uVar12 = 0;
        local_d8 = _DAT_140c783b0;
        uStack212 = uRam0000000140c783b4;
        uStack208 = uRam0000000140c783b8;
        uStack204 = uRam0000000140c783bc;
        _local_168 = ZEXT816(0);
        local_c8 = _DAT_140c783c0;
        uStack196 = uRam0000000140c783c4;
        uStack192 = uRam0000000140c783c8;
        uStack188 = uRam0000000140c783cc;
        if (lVar3 != 0) {
            lVar10 = *(longlong *)(param_1 + 0x6ce8);
            if ((lVar10 == 0) ||
                ((iVar6 = *(int *)(*(longlong *)(lVar10 + 0x70) + 0x7c), iVar6 != 4 && (1 < iVar6 - 7U))))
            {
                uVar2 = *(undefined4 *)(lVar3 + 0x11e4);
                uVar4 = *(undefined4 *)(lVar3 + 0x11e8);
                uVar5 = *(undefined4 *)(lVar3 + 0x11ec);
                *(undefined4 *)(param_1 + 0x6d10) = *(undefined4 *)(lVar3 + 0x11e0);
                *(undefined4 *)(param_1 + 0x6d14) = uVar2;
                *(undefined4 *)(param_1 + 0x6d18) = uVar4;
                *(undefined4 *)(param_1 + 0x6d1c) = uVar5;
                uVar7 = uVar12;
            }
            else {
                uVar8 = (**(code **)(*DAT_140c65670 + 0x248))();
                _local_168 = *(undefined (*) [16])(lVar3 + 0x11e0);
                (**(code **)(**(longlong **)(param_1 + 0x7588) + 0xe0))
                        (*(longlong **)(param_1 + 0x7588),&local_158);
                lVar9 = *(longlong *)(param_1 + 0x71a8);
                if (lVar9 == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x71a0);
                }
                fVar16 = 0.0;
                _local_148 = ZEXT816(CONCAT44((float)local_154,(float)local_158));
                local_1d8 = (longlong **)uVar8;
                FUN_140251700(0,0,&local_118,local_148,lVar9 + 0xa0,lVar9 + 0x120);
                lVar9 = *(longlong *)(param_1 + 0x71a8);
                if (lVar9 == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x71a0);
                }
                _local_148 = CONCAT44((float)local_154,(float)local_158);
                local_138 = CONCAT44(fVar16,0x3f800000);
                local_1d8 = (longlong **)uVar8;
                FUN_140251700(&local_108,local_148,lVar9 + 0xa0,lVar9 + 0x120);
                local_1d0 = &local_b8;
                local_b8 = 0x4041;
                uStack176 = 0;
                local_1d8 = local_128;
                local_a8 = 0;
                puStack160 = (undefined *)0x0;
                local_98 = 0;
                local_90 = 0;
                uStack320 = uStack320 & 0xffffffff00000000;
                _local_148 = CONCAT88(uStack320,0x3f80000000000000);
                iVar6 = (**(code **)(**(longlong **)(param_1 + 0x7248) + 0x1a8))
                        (*(longlong **)(param_1 + 0x7248),&local_118,&local_108);
                if (iVar6 != 0) {
                    fVar15 = (float)(**(code **)(*local_128[0] + 0x10))();
                    fVar15 = fVar15 * 0.99;
                    _local_168 = CONCAT412((fStack252 - fStack268) * fVar15 + fStack268,
                                           CONCAT48((fStack256 - fStack272) * fVar15 + fStack272,
                                                    (longlong *)
                                                            CONCAT44((fStack260 - fStack276) * fVar15 + fStack276,
                                                                     (local_108 - local_118) * fVar15 + local_118)));
                    (**(code **)(*local_128[0] + 8))();
                }
                uVar14 = (uint)(iVar6 != 0);
                lVar9 = *(longlong *)(lVar3 + 0xd08);
                local_168._0_4_ = *(float *)(lVar3 + 0x11e0) - local_168._0_4_;
                local_168._4_4_ = *(float *)(lVar3 + 0x11e4) - local_168._4_4_;
                fVar15 = SQRT(local_168._0_4_ * local_168._0_4_ + local_168._4_4_ * local_168._4_4_ + 0.0);
                if (lVar9 == 0) {
                    lVar9 = FUN_14022d500(*(undefined4 *)(lVar3 + 0xd8));
                    if (lVar9 != 0) {
                        fVar16 = *(float *)(lVar9 + 0x28);
                    }
                }
                else {
                    fVar16 = (float)FUN_14047a940(lVar3);
                    fVar16 = fVar16 * *(float *)(lVar9 + 0x8c);
                }
                fVar16 = (float)((uint)(fVar15 - fVar16) & 0x7fffffff);
                uVar7 = uVar13;
                uVar13 = uVar14;
                if (lVar10 != 0) {
                    _auStack324 = SUB1612(_local_148 >> 0x20,0) &
                                  SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0);
                    local_138 = 0;
                    uVar2 = *(undefined4 *)(*(longlong *)(lVar10 + 0x48) + 4);
                    *(float *)(param_1 + 0x6d10) = local_168._0_4_;
                    *(float *)(param_1 + 0x6d14) = local_168._4_4_;
                    *(undefined4 *)(param_1 + 0x6d18) = uStack352;
                    *(undefined4 *)(param_1 + 0x6d1c) = uStack348;
                    _local_148 = CONCAT124(_auStack324,uVar2);
                    puStack304 = local_168;
                    local_b8 = CONCAT44(auStack324,uVar2);
                    uStack176 = (undefined4)uStack320;
                    uStack172 = uStack320._4_4_;
                    local_a8 = 0;
                    puStack160 = puStack304;
                    FUN_1401b0590(&local_b8,&local_f8);
                    uVar7 = uVar12;
                    if (((*(float *)(*(longlong *)(lVar10 + 0x70) + 0x6c) <= fVar16) &&
                         (pfVar1 = (float *)(*(longlong *)(lVar10 + 0x70) + 0x70),
                                 fVar16 < *pfVar1 || fVar16 == *pfVar1)) &&
                        (iVar6 = FUN_14047d830(lVar3,local_168), iVar6 != 0)) {
                        uVar7 = FUN_140565d40();
                    }
                }
            }
            lVar10 = *(longlong *)(param_1 + 0x6ce8);
            if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x68) != 0)) {
                lVar9 = *(longlong *)(param_1 + 0x6348);
                if (lVar9 == 0) {
                    if ((uVar13 != 0) && (*(longlong *)(lVar10 + 0x68) != 0)) {
                        do {
                            lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x60) + uVar11 * 8);
                            if ((*(byte *)(lVar9 + 0x44) & 0x40) == 0) {
                                if (*(int *)(lVar9 + 0x50) != 0) {
                                    local_1d0 = (undefined8 *)((ulonglong)local_1d0 & 0xffffffff00000000);
                                    local_1d8 = (longlong **)0x0;
                                    iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))
                                            (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),
                                             *(undefined4 *)
                                                     (*(longlong *)(*(longlong *)(lVar10 + 0x60) + uVar11 * 8) +
                                                      0x50));
                                    if (iVar6 == 0) goto LAB_14053a6ea;
                                }
                                if (((*(uint *)(*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x6ce8) + 0x60) + uVar11 * 8
                                        ) + 0x44) & 0x100) != 0) &&
                                    (lVar10 = FUN_14018b280(0x140,0), lVar10 != 0)) {
                                    lVar9 = *(longlong *)(param_1 + 0x6ce8);
                                    local_1c8 = *(undefined4 *)(lVar3 + 8);
                                    local_198 = *(undefined4 *)(*(longlong *)(lVar9 + 8) + 0x6c);
                                    local_188 = 0;
                                    local_190 = 0;
                                    local_1a0 = 0;
                                    local_1a8 = 0;
                                    local_1b0 = 1;
                                    local_1c0 = 0;
                                    local_1d0 = (undefined8 *)
                                            ((ulonglong)local_1d0 & 0xffffffff00000000 |
                                             (ulonglong)*(uint *)(lVar3 + 0x12c0));
                                    local_1d8 = (longlong **)local_168;
                                    local_1b8 = (longlong *)(param_1 + 0x6348);
                                    FUN_140549e10(lVar10,**(undefined4 **)(lVar9 + 0x70),
                                                  *(undefined8 *)(*(longlong *)(lVar9 + 0x60) + uVar11 * 8));
                                }
                            }
                            LAB_14053a6ea:
                            lVar10 = *(longlong *)(param_1 + 0x6ce8);
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(ulonglong *)(lVar10 + 0x68));
                    }
                }
                else {
                    do {
                        if (uVar13 == 0) {
                            FUN_14054d0f0(lVar9,1);
                        }
                        else {
                            *(uint *)(lVar9 + 0x88) = 2 - (uint)(uVar7 != 0);
                            uVar2 = *(undefined4 *)(lVar3 + 0x12c0);
                            *(float *)(lVar9 + 0x60) = local_168._0_4_;
                            *(float *)(lVar9 + 100) = local_168._4_4_;
                            *(undefined4 *)(lVar9 + 0x68) = uStack352;
                            *(undefined4 *)(lVar9 + 0x6c) = uStack348;
                            *(undefined4 *)(lVar9 + 0x70) = uVar2;
                        }
                        lVar9 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 != 0);
                }
            }
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack504);
    return;
}



void FUN_14053a750(void)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar2 = DAT_140c65a58;
    lVar3 = DAT_140c65898;
    uVar6 = 0;
    uVar1 = *(ulonglong *)(DAT_140c65898 + 0x7528);
    if (uVar1 != 0) {
        plVar4 = *(longlong **)(DAT_140c65898 + 0x7520);
        do {
            if (DAT_140c65a58 == *plVar4) {
                return;
            }
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 1;
        } while (uVar6 < uVar1);
    }
    lVar5 = FUN_14018db00(*(undefined8 *)(DAT_140c65898 + 0x7520),uVar1 + 1,8);
    *(longlong *)(lVar5 + uVar1 * 8) = lVar2;
    if (*(longlong *)(lVar3 + 0x7520) != lVar5) {
        FUN_1407db590(lVar5,*(longlong *)(lVar3 + 0x7520),*(longlong *)(lVar3 + 0x7528) << 3);
        lVar2 = *(longlong *)(lVar3 + 0x7520);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong *)(lVar3 + 0x7520) = lVar5;
    }
    *(ulonglong *)(lVar3 + 0x7528) = uVar1 + 1;
    return;
}



void FUN_14053a830(void)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong *plVar7;

    lVar2 = DAT_140c65898;
    uVar4 = 0;
    uVar1 = *(ulonglong *)(DAT_140c65898 + 0x7528);
    if (uVar1 == 0) {
        return;
    }
    plVar7 = *(longlong **)(DAT_140c65898 + 0x7520);
    while (DAT_140c65a58 != *plVar7) {
        uVar4 = uVar4 + 1;
        plVar7 = plVar7 + 1;
        if (uVar1 <= uVar4) {
            return;
        }
    }
    plVar7 = *(longlong **)(DAT_140c65898 + 0x7520) + uVar4;
    uVar1 = uVar1 - 1;
    FUN_1407db590(plVar7,plVar7 + 1,(uVar1 - uVar4) * 8);
    puVar6 = *(undefined8 **)(lVar2 + 0x7520);
    if (uVar1 == 0) goto LAB_14053a936;
    if (puVar6 == (undefined8 *)0x0) {
        lVar5 = uVar1 * 8 + 0x10;
        uVar4 = uVar1;
    }
    else {
        if (uVar1 < (ulonglong)puVar6[-1] || uVar1 == puVar6[-1]) goto LAB_14053a936;
        lVar5 = FUN_14018a3e0(uVar1 * 8 + 0x10);
        uVar4 = lVar5 - 0x10U >> 3;
        lVar5 = (lVar5 - 0x10U & 0xfffffffffffffff8) + 0x10;
        iVar3 = (**(code **)puVar6[-2])(puVar6 + -2,lVar5);
        if (iVar3 != 0) {
            puVar6[-1] = uVar4;
            goto LAB_14053a936;
        }
    }
    puVar6 = (undefined8 *)FUN_14018b280(lVar5,0);
    if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = uVar4;
        *puVar6 = &PTR_LAB_140b55060;
    }
    puVar6 = puVar6 + 2;
    LAB_14053a936:
    if (*(undefined8 **)(lVar2 + 0x7520) != puVar6) {
        FUN_1407db590(puVar6,*(undefined8 **)(lVar2 + 0x7520),uVar1 * 8);
        lVar5 = *(longlong *)(lVar2 + 0x7520);
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        *(undefined8 **)(lVar2 + 0x7520) = puVar6;
    }
    *(ulonglong *)(lVar2 + 0x7528) = uVar1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14053a990(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong *plVar9;
    int iVar10;
    longlong **pplVar11;
    int *piVar12;
    undefined8 extraout_XMM0_Qa;
    undefined8 uVar13;
    undefined *in_stack_ffffffffffffffa8;
    undefined local_48 [48];

    if (*(char *)(param_3 + 0x7328) != '\0') {
        puVar4 = (undefined2 *)FUN_14018b280(2);
        FUN_1407db590(puVar4,&DAT_1409f21c4,0);
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        FUN_14053b4a0(local_48,param_3);
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        *(undefined *)(param_3 + 0x7328) = 0;
        return;
    }
    if ((*(longlong *)(param_3 + 0x6490) != 0) &&
        ((iVar10 = *(int *)(*(longlong *)(param_3 + 0x6490) + 0x17e8),
                iVar10 != *(int *)(param_3 + 0x74ec) || (*(int *)(param_3 + 0x7580) != 0)))) {
        *(undefined4 *)(param_3 + 0x7580) = 0;
        lVar5 = FUN_14053b190();
        iVar2 = DAT_140c636a8;
        iVar3 = *(int *)(param_3 + 0x74ec);
        *(int *)(param_3 + 0x74ec) = iVar10;
        *(int *)(param_3 + 0x74e8) = iVar10;
        *(int *)(param_3 + 0x74f0) = iVar2;
        if (iVar3 != 0) {
            FUN_14043b3f0(iVar2,iVar10);
        }
        FUN_1405fa730();
        if (DAT_140c65b78 != 0) {
            FUN_140575dd0();
        }
        lVar6 = FUN_14053b190(param_3);
        if ((lVar5 != 0) && (lVar6 != 0)) {
            iVar2 = FUN_14018e220(lVar5,lVar6);
            if (iVar2 == 0) {
                FUN_14057a2c0(param_3);
                if (*(int *)(param_3 + 0x74e8) != 0) {
                    in_stack_ffffffffffffffa8 = &DAT_1409f224c;
                    FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"SubZoneChanged",&DAT_1409ecb14,
                                  *(int *)(param_3 + 0x74e8),&DAT_1409f224c);
                }
                *(undefined4 *)(param_3 + 0x74e8) = 0;
            }
        }
        param_1 = FUN_1404b5610();
        if (iVar10 != iVar3) {
            param_1 = FUN_14053adc0(param_3);
        }
    }
    if ((*(int *)(param_3 + 0x74e8) != 0) &&
        (((*(longlong *)(DAT_140c65898 + 0x71a8) == 0 ||
           ((*(longlong *)(param_3 + 0x7198) != 0 &&
             (*(int *)(*(longlong *)(param_3 + 0x7198) + 0x50) != 0)))) &&
          (0 < (DAT_140c636a8 - *(int *)(param_3 + 0x74f0)) + -500)))) {
        puVar7 = (undefined *)FUN_14053b190(param_3);
        param_1 = extraout_XMM0_Qa;
        if ((*(int *)(param_3 + 0x74e8) != 0) && (puVar7 != (undefined *)0x0)) {
            param_1 = FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"SubZoneChanged",&DAT_1409ecb14,
                                    *(int *)(param_3 + 0x74e8),puVar7);
            in_stack_ffffffffffffffa8 = puVar7;
        }
        *(undefined4 *)(param_3 + 0x74e8) = 0;
    }
    FUN_1400e74a0(param_1,param_2,*(undefined8 *)(param_3 + 0x7340));
    uVar13 = FUN_1406119e0(*(undefined8 *)(param_3 + 0x7368));
    FUN_140777e70(uVar13,param_2,*(undefined8 *)(param_3 + 0x7350));
    plVar8 = (longlong *)FUN_14054f210();
    (**(code **)(*plVar8 + 8))(plVar8);
    pplVar11 = (longlong **)&DAT_140c89d80;
    lVar5 = 0x24;
    do {
        if (*pplVar11 != (longlong *)0x0) {
            (**(code **)(**pplVar11 + 0x30))();
        }
        pplVar11 = pplVar11 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = (**(code **)(*DAT_140c65670 + 0x248))();
    if ((_DAT_140c8aed8 != *(int *)(lVar5 + 8)) || (_DAT_140c8aed4 != *(int *)(lVar5 + 0xc))) {
        lVar6 = *(longlong *)(param_3 + 0x7340);
        FUN_1400ea3e0(lVar6,"ResolutionChanged",&DAT_1409ec364,*(undefined4 *)(lVar6 + 0x50),
                      (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffff00000000 |
                      (ulonglong)*(uint *)(lVar6 + 0x54));
        _DAT_140c8aed8 = *(int *)(lVar5 + 8);
        _DAT_140c8aed4 = *(int *)(lVar5 + 0xc);
    }
    plVar8 = *(longlong **)(param_3 + 0x7540);
    if ((plVar8 != (longlong *)0x0) && ((*(byte *)((longlong)plVar8 + 0x1c) & 1) == 0)) {
        (**(code **)(*plVar8 + 8))();
        *(undefined8 *)(param_3 + 0x7540) = 0;
    }
    if (DAT_140c65c18 != 0) {
        FUN_140630580();
    }
    if ((*(longlong *)(param_3 + 0x7540) == 0) && (*(longlong *)(param_3 + 0x7538) != 0)) {
        plVar8 = *(longlong **)(param_3 + 30000);
        puVar1 = (undefined8 *)*plVar8;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)();
            if (*(longlong **)(param_3 + 0x7540) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_3 + 0x7540) + 8))();
            }
            *(longlong *)(param_3 + 0x7540) = *plVar8;
        }
        FUN_14053c1c0(param_3 + 30000);
        FUN_1400d42f0(*(undefined8 *)(param_3 + 0x7540),1,0);
    }
    if (*(int *)(param_3 + 0x732c) != 0) {
        *(undefined4 *)(param_3 + 0x732c) = 0;
        plVar8 = (longlong *)(param_3 + 0x10f0);
        piVar12 = (int *)(param_3 + 0x10c0);
        iVar10 = 0;
        do {
            if (*piVar12 == 1) {
                lVar5 = 2;
                plVar9 = plVar8;
                iVar3 = 0;
                do {
                    if (plVar9[-1] != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    if (*plVar9 != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    if (plVar9[1] != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    if (plVar9[2] != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    if (plVar9[3] != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    if (plVar9[4] != 0) {
                        iVar3 = iVar3 + 1;
                    }
                    plVar9 = plVar9 + 6;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
                FUN_1400ea3e0(*(undefined8 *)(param_3 + 0x7340),"ShowActionBarShortcut",&DAT_1409e98ac,
                              iVar10,1,iVar3);
            }
            iVar10 = iVar10 + 1;
            piVar12 = piVar12 + 1;
            plVar8 = plVar8 + 0xc;
        } while (iVar10 < 9);
    }
    return;
}



void FUN_14053adc0(longlong param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    uint uVar9;
    undefined4 uVar11;
    bool bVar12;
    ulonglong uVar10;

    if (*(longlong *)(param_1 + 0x6490) == 0) {
        return;
    }
    lVar4 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    uVar10 = 0;
    lVar6 = *(longlong *)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x30);
    uVar8 = uVar10;
    if (lVar6 != 0) {
        uVar8 = lVar6 + 8;
    }
    lVar6 = *(longlong *)(param_1 + 0x6490);
    iVar3 = *(int *)(param_1 + 0x74f4);
    iVar1 = *(int *)(lVar6 + 0x17e8);
    if (iVar3 == 0) {
        LAB_14053af2d:
        if ((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 8)) {
            if ((iVar3 == 0) ||
                ((lVar7 = FUN_1405b15c0(*(longlong *)(DAT_140c659f0 + 0x338),
                                        *(undefined4 *)(lVar6 + 0x17ec)), lVar7 == 0 ||
                                                                          (lVar6 = FUN_1405b15c0(*(undefined8 *)(DAT_140c659f0 + 0x338),
                                                                                                 *(undefined4 *)(lVar6 + 0x17ec)),
                                                                                  *(longlong *)(lVar6 + 0x10) != *(longlong *)(lVar4 + 0x10))))) {
                lVar6 = FUN_1405b16c0(*(undefined8 *)(DAT_140c659f0 + 0x338),iVar1,1);
                if ((lVar6 == 0) ||
                    (lVar6 = FUN_1405b16c0(*(undefined8 *)(DAT_140c659f0 + 0x338),iVar1,1),
                            *(longlong *)(lVar6 + 0x10) != *(longlong *)(lVar4 + 0x10))) {
                    lVar6 = FUN_1405b1510(&DAT_140c7dfb0);
                    if (lVar6 != 0) {
                        FUN_1405ad310(lVar6,1);
                    }
                    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HousingPanelControlClose","");
                    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"WarPartyBattleClose",&DAT_1409d0ea6);
                    return;
                }
                FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HousingPanelControlClose","");
                puVar5 = (undefined4 *)FUN_1402070a0(*(undefined4 *)(lVar4 + 0x40));
                if (puVar5 == (undefined4 *)0x0) {
                    return;
                }
                bVar12 = puVar5[7] != iVar1;
                iVar3 = FUN_1404b5980();
                if ((iVar3 == 1) && (lVar6 = FUN_1405b1510(&DAT_140c7dfb0), lVar6 != 0)) {
                    FUN_1405ad310(lVar6,4);
                }
            }
            else {
                FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HousingPanelControlClose","");
                uVar2 = FUN_140207050();
                if (uVar2 == 0) {
                    return;
                }
                while( true ) {
                    puVar5 = (undefined4 *)FUN_140207100();
                    if ((puVar5 != (undefined4 *)0x0) && (puVar5[7] == *(int *)(param_1 + 0x74f4))) break;
                    uVar9 = (int)uVar10 + 1;
                    uVar10 = (ulonglong)uVar9;
                    if (uVar2 <= uVar9) {
                        return;
                    }
                }
                iVar3 = FUN_1404b5980();
                if ((iVar3 == 1) && (lVar6 = FUN_1405b1510(&DAT_140c7dfb0), lVar6 != 0)) {
                    FUN_1405ad310(lVar6,4);
                }
                bVar12 = true;
            }
            uVar11 = *puVar5;
        }
        else {
            lVar6 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar6 != 0) {
                FUN_1405ad310(lVar6,4);
            }
            bVar12 = false;
            uVar11 = 0;
        }
    }
    else {
        if ((iVar3 == iVar1) && (lVar4 != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HousingPanelControlClose","");
            uVar2 = FUN_140207050();
            if (uVar2 == 0) {
                return;
            }
            while( true ) {
                puVar5 = (undefined4 *)FUN_140207100(uVar10);
                if ((puVar5 != (undefined4 *)0x0) && (puVar5[7] == iVar1)) break;
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
                if (uVar2 <= uVar9) {
                    return;
                }
            }
            lVar6 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar6 != 0) {
                iVar3 = *(int *)(lVar6 + 0xc0);
                goto LAB_14053aeb8;
            }
            LAB_14053aeba:
            lVar6 = FUN_1405b1510(&DAT_140c7dfb0);
            if (lVar6 != 0) {
                FUN_1405ad310(lVar6,4);
            }
        }
        else {
            if (((iVar3 == 0) || (iVar3 != iVar1)) || (uVar8 == 0)) goto LAB_14053af2d;
            uVar2 = FUN_140207050();
            if (uVar2 == 0) {
                return;
            }
            while( true ) {
                puVar5 = (undefined4 *)FUN_140207100(uVar10);
                if ((puVar5 != (undefined4 *)0x0) && (puVar5[7] == iVar1)) break;
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
                if (uVar2 <= uVar9) {
                    return;
                }
            }
            iVar3 = FUN_1404b5980();
            LAB_14053aeb8:
            if (iVar3 == 1) goto LAB_14053aeba;
        }
        uVar11 = *puVar5;
        bVar12 = false;
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"HousingPanelControlOpen",&DAT_1409ebf64,uVar11,
                  iVar1,bVar12);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

short * FUN_14053b190(longlong param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;
    bool bVar3;
    int iVar4;
    short *psVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    uint uVar9;
    undefined4 local_18 [2];
    longlong local_10;

    if ((*(longlong *)(param_1 + 0x7258) == 0) ||
        ((iVar4 = *(int *)(*(longlong *)(param_1 + 0x7258) + 0x14), iVar4 != 2 && (iVar4 != 5)))) {
        bVar3 = false;
    }
    else {
        bVar3 = true;
        if (*(longlong *)(param_1 + 0x6490) != 0) {
            uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x17ec);
            uVar2 = *(undefined8 *)(DAT_140c659f0 + 0x338);
            local_10 = FUN_1405b16c0(uVar2,*(undefined4 *)(param_1 + 0x74ec),1);
            if ((local_10 == 0) && (local_10 = FUN_1405b15c0(uVar2,uVar1), local_10 == 0)) {
                local_18[0] = 0;
                lVar6 = FUN_1404bc890(DAT_140c65898 + 0x7550,local_18);
                return *(short **)(lVar6 + 8);
            }
            psVar5 = (short *)FUN_1405b0240(local_10);
            return psVar5;
        }
    }
    uVar9 = *(uint *)(param_1 + 0x74ec);
    do {
        if (!bVar3) {
            for (puVar7 = *(undefined8 **)
                    (*(longlong *)(param_1 + 0x7560) +
                     ((ulonglong)uVar9 %
                      (ulonglong)
                              (*(longlong *)(param_1 + 0x7568) - *(longlong *)(param_1 + 0x7560) >> 3)) * 8);
                 puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
                if (*(uint *)(puVar7 + 1) == uVar9) {
                    if (puVar7 != (undefined8 *)0x0) goto LAB_14053b3a1;
                    break;
                }
            }
        }
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c64634 != 0) || (iVar4 = FUN_14024d920(), iVar4 < 0)) break;
            lVar6 = (**(code **)(*DAT_140c64270 + 0x18))();
        }
        else {
            lVar6 = (*DAT_140c63840)();
        }
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 4) != 0) {
            if ((bVar3) && (*(int *)(lVar6 + 8) == 0)) {
                for (puVar7 = *(undefined8 **)
                        (*(longlong *)(param_1 + 0x7560) +
                         (0U % (ulonglong)
                                 (*(longlong *)(param_1 + 0x7568) - *(longlong *)(param_1 + 0x7560) >> 3
                                 )) * 8); puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
                    if (*(int *)(puVar7 + 1) == 0) {
                        if (puVar7 != (undefined8 *)0x0) {
                            LAB_14053b3a1:
                            return (short *)puVar7[2];
                        }
                        break;
                    }
                }
            }
            psVar5 = (short *)FUN_14034bdd0();
            if ((psVar5 != (short *)0x0) && (lVar8 = 0, *psVar5 != 0)) {
                do {
                    lVar8 = lVar8 + 1;
                } while (psVar5[lVar8] != 0);
                if (lVar8 != 0) {
                    return psVar5;
                }
            }
        }
        uVar9 = *(uint *)(lVar6 + 8);
    } while (uVar9 != 0);
    return (short *)&DAT_1409f2234;
}



void FUN_14053b3c0(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong *plVar4;

    uVar3 = 0;
    uVar2 = *(longlong *)(param_1 + 0x7568) - *(longlong *)(param_1 + 0x7560) >> 3;
    if (uVar2 != 0) {
        plVar1 = *(longlong **)(param_1 + 0x7560);
        while (*plVar1 == 0) {
            uVar3 = uVar3 + 1;
            plVar1 = plVar1 + 1;
            if (uVar2 <= uVar3) {
                FUN_1403fc230(param_1 + 0x7550);
                return;
            }
        }
        plVar1 = (longlong *)(*(longlong **)(param_1 + 0x7560))[uVar3];
        if (plVar1 != (longlong *)0x0) {
            do {
                do {
                    plVar4 = plVar1;
                    FUN_14018b900(plVar4[2]);
                    plVar1 = (longlong *)*plVar4;
                } while (plVar1 != (longlong *)0x0);
                uVar2 = *(longlong *)(param_1 + 0x7568) - *(longlong *)(param_1 + 0x7560) >> 3;
                uVar3 = (ulonglong)*(uint *)(plVar4 + 1) % uVar2;
                do {
                    uVar3 = uVar3 + 1;
                    if (uVar2 <= uVar3) {
                        if (plVar1 == (longlong *)0x0) goto LAB_14053b46c;
                        break;
                    }
                    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7560) + uVar3 * 8);
                } while (plVar1 == (longlong *)0x0);
            } while( true );
        }
    }
    LAB_14053b46c:
    FUN_1403fc230(param_1 + 0x7550);
    return;
}



undefined8 FUN_14053b4a0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if ((DAT_140c886b8 != 0) && (*(int *)(DAT_140c886b8 + 4) != -1)) {
        *(int *)(DAT_140c886b8 + 4) = *(int *)(DAT_140c886b8 + 4) + 1;
    }
    FUN_1403fa730(param_2);
    FUN_140434900(*(undefined8 *)(param_2 + 0x7fe0));
    WindowHandlerFunction(param_2,0,0x65,1);
    if (DAT_140c63658 != 0) {
        FUN_1400fd770();
    }
    FUN_140539640(param_2,0);
    lVar1 = DAT_140c635f0;
    *(undefined8 *)(param_2 + 0x7338) = 0;
    FUN_14053c410(param_2 + 0x48,*(undefined8 *)(lVar1 + 0x16a0));
    FUN_140538fd0(param_2);
    FUN_1404050c0();
    FUN_140581620();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),&DAT_1409f40cc,FUN_14063fb10,0);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),&DAT_140b254b4,FUN_14063fb10,0);
    FUN_14063ae00();
    FUN_1403e7b20(param_2);
    *(undefined4 *)(param_2 + 0x732c) = 1;
    FUN_140434a00(*(undefined8 *)(param_2 + 0x7fe0));
    if ((DAT_140c886b8 != 0) && (*(int *)(DAT_140c886b8 + 4) != 0)) {
        *(int *)(DAT_140c886b8 + 4) = *(int *)(DAT_140c886b8 + 4) + -1;
    }
    return 0;
}



void FUN_14053b5c0(longlong param_1,int param_2,int param_3)

{
    if (param_3 < 0) {
        param_3 = *(int *)(param_1 + 0x747c);
    }
    if (param_2 == 0) {
        if (0 < param_3) {
            FUN_1400c3230(param_1 + 0x7428);
            goto LAB_14053b6c6;
        }
        if ((*(float *)(param_1 + 0x7440) == 0.0) && (*(float *)(param_1 + 0x7444) == 0.0))
            goto LAB_14053b6c6;
        *(undefined8 *)(param_1 + 0x7440) = 0;
        *(undefined4 *)(param_1 + 0x7438) = 0;
    }
    else {
        if (0 < param_3) {
            FUN_1400c3230(param_1 + 0x7428);
            goto LAB_14053b6c6;
        }
        if ((*(float *)(param_1 + 0x7440) == 1.0) && (*(float *)(param_1 + 0x7444) == 0.0))
            goto LAB_14053b6c6;
        *(undefined8 *)(param_1 + 0x7440) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x7438) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x7430) = DAT_140c636a8;
    LAB_14053b6c6:
    *(undefined4 *)(param_1 + 0x7448) = 1;
    *(undefined4 *)(param_1 + 0x744c) = 0x3f800000;
    *(int *)(param_1 + 0x7450) = param_2;
    return;
}



void FUN_14053b6f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong lVar3;

    lVar3 = DAT_140c65898;
    pplVar1 = (longlong **)(DAT_140c65898 + 0x7488);
    *(undefined4 *)(DAT_140c65898 + 0x7498) = param_3;
    plVar2 = *pplVar1;
    if (plVar2 == (longlong *)0x0) {
        lVar3 = FUN_1400e58c0(*(undefined8 *)(lVar3 + 0x7340),L"Subtitle");
        (**(code **)(*DAT_140c65680 + 0x28))
                (DAT_140c65680,*(undefined8 *)(lVar3 + 0x60),param_2,0xffffffffffffffff,pplVar1);
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014053b767. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,0xffffffffffffffff);
    return;
}



void FUN_14053b770(longlong param_1,int param_2)

{
    int iVar1;
    undefined4 local_res8 [2];
    undefined local_res10 [8];
    undefined local_res18 [8];
    undefined4 local_res20 [2];

    *(int *)(param_1 + 0x7400) = param_2;
    iVar1 = DAT_140c636a8;
    if (param_2 == 0) {
        if ((*(float *)(param_1 + 0x7420) != 0.0) || (*(float *)(param_1 + 0x7424) != 0.0)) {
            *(undefined8 *)(param_1 + 0x7420) = 0;
            *(undefined4 *)(param_1 + 0x7418) = 0;
            *(int *)(param_1 + 0x7410) = DAT_140c636a8;
        }
        local_res20[0] = 0;
        (**(code **)(*(longlong *)(param_1 + 0x7408) + 8))((longlong *)(param_1 + 0x7408),local_res20);
        return;
    }
    if (param_2 != 1) {
        if (param_2 != 2) {
            if (param_2 == 3) {
                (***(code ***)(param_1 + 0x7408))(param_1 + 0x7408);
                (**(code **)(*(longlong *)(param_1 + 0x7408) + 8))(param_1 + 0x7408,local_res10);
                FUN_1400f9c30(param_1 + 0x7408);
            }
            return;
        }
        if ((*(float *)(param_1 + 0x7420) != 1.0) || (*(float *)(param_1 + 0x7424) != 0.0)) {
            *(undefined8 *)(param_1 + 0x7420) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x7418) = 0x3f800000;
            *(int *)(param_1 + 0x7410) = iVar1;
        }
        local_res8[0] = 0x3f800000;
        (**(code **)(*(longlong *)(param_1 + 0x7408) + 8))((longlong *)(param_1 + 0x7408),local_res8);
        *(int *)(param_1 + 0x7454) = *(int *)(param_1 + 0x7470) + DAT_140c636a8;
        return;
    }
    FUN_1400f9c30(param_1 + 0x7408);
    (***(code ***)(param_1 + 0x7408))(param_1 + 0x7408);
    (**(code **)(*(longlong *)(param_1 + 0x7408) + 8))(param_1 + 0x7408,local_res18);
    return;
}



void FUN_14053b920(undefined8 param_1,int param_2,undefined4 *param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined local_res10 [24];

    lVar5 = DAT_140c65898;
    if (param_2 < 0) {
        *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
    }
    else {
        *(int *)(DAT_140c65898 + 0x7474) = param_2;
    }
    *(undefined4 *)(lVar5 + 0x7470) = 0x7fffffff;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    plVar1 = (longlong *)(lVar5 + 0x7408);
    *(undefined4 *)(lVar5 + 0x7460) = *param_3;
    *(undefined4 *)(lVar5 + 0x7464) = uVar2;
    *(undefined4 *)(lVar5 + 0x7468) = uVar3;
    *(undefined4 *)(lVar5 + 0x746c) = uVar4;
    *(undefined4 *)(lVar5 + 0x7400) = 1;
    FUN_1400f9c30(plVar1);
    (**(code **)*plVar1)();
    (**(code **)(*plVar1 + 8))(plVar1,local_res10);
    return;
}



void FUN_14053b9c0(undefined8 param_1,int param_2)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 local_res10 [6];

    lVar2 = DAT_140c65898;
    if (param_2 == 0) {
        plVar1 = (longlong *)(DAT_140c65898 + 0x7408);
        *(undefined4 *)(DAT_140c65898 + 0x7400) = 0;
        if ((*(float *)(lVar2 + 0x7420) != 0.0) || (*(float *)(lVar2 + 0x7424) != 0.0)) {
            *(undefined8 *)(lVar2 + 0x7420) = 0;
            *(undefined4 *)(lVar2 + 0x7418) = 0;
            *(undefined4 *)(lVar2 + 0x7410) = DAT_140c636a8;
        }
        local_res10[0] = 0;
        (**(code **)(*plVar1 + 8))(plVar1,local_res10);
        return;
    }
    if (param_2 < 0) {
        *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
    }
    else {
        *(int *)(DAT_140c65898 + 0x7474) = param_2;
    }
    *(undefined4 *)(lVar2 + 0x7400) = 3;
    (***(code ***)(lVar2 + 0x7408))(lVar2 + 0x7408);
    (**(code **)(*(longlong *)(lVar2 + 0x7408) + 8))(lVar2 + 0x7408,local_res10);
    FUN_1400f9c30(lVar2 + 0x7408);
    return;
}



void FUN_14053bab0(undefined8 param_1,int *param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong local_res8;
    ulonglong local_res10;
    ulonglong local_res18 [2];

    if (*param_2 < 300) {
        uVar3 = (uint)CONCAT41(*param_2,*(undefined *)(param_2 + 1)) & 0xffff;
    }
    else {
        uVar3 = 0xffffffff;
    }
    uVar1 = *(ulonglong *)(DAT_140c65898 + 0x73d8);
    local_res8 = uVar1;
    uVar2 = *(ulonglong *)(uVar1 + 8);
    while (uVar2 != 0) {
        if (*(uint *)(uVar2 + 0x20) < uVar3) {
            uVar2 = *(ulonglong *)(uVar2 + 0x18);
        }
        else {
            local_res8 = uVar2;
            uVar2 = *(ulonglong *)(uVar2 + 0x10);
        }
    }
    if ((local_res8 == uVar1) || (uVar3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = uVar1;
    }
    local_res10 = uVar1;
    uVar2 = *(ulonglong *)(uVar1 + 8);
    if (local_res8 != uVar1) {
        *(int *)(local_res8 + 0x24) = *(int *)(local_res8 + 0x24) + 1;
        return;
    }
    while (uVar2 != 0) {
        if (*(uint *)(uVar2 + 0x20) < uVar3) {
            uVar2 = *(ulonglong *)(uVar2 + 0x18);
        }
        else {
            local_res10 = uVar2;
            uVar2 = *(ulonglong *)(uVar2 + 0x10);
        }
    }
    if ((local_res10 == uVar1) || (uVar3 < *(uint *)(local_res10 + 0x20))) {
        local_res8 = (ulonglong)uVar3;
        FUN_140032b30(DAT_140c65898 + 0x73d0,local_res18,&local_res10,&local_res8);
        local_res10 = local_res18[0];
    }
    *(undefined4 *)(local_res10 + 0x24) = 1;
    return;
}



void FUN_14053bba0(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    if (*param_2 < 300) {
        uVar3 = (uint)CONCAT41(*param_2,*(undefined *)(param_2 + 1)) & 0xffff;
    }
    else {
        uVar3 = 0xffffffff;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x73d8);
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
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x24) != 0)) {
        *(int *)(local_res8 + 0x24) = *(int *)(local_res8 + 0x24) + -1;
    }
    return;
}



bool FUN_14053bc30(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    if (*param_2 < 300) {
        uVar3 = (uint)CONCAT41(*param_2,*(undefined *)(param_2 + 1)) & 0xffff;
    }
    else {
        uVar3 = 0xffffffff;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x73d8);
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
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(int *)(local_res8 + 0x24) != 0;
    }
    return false;
}



void FUN_14053bcc0(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined4 uVar7;
    ulonglong uVar8;
    bool bVar9;
    undefined4 local_res8 [4];
    int local_res18 [2];
    undefined8 local_res20;
    longlong local_118 [2];
    undefined local_108 [4];
    undefined4 local_104;
    undefined4 local_ec;
    undefined4 local_b0;

    lVar6 = *(longlong *)(param_1 + 0x78);
    local_118[0] = 0;
    iVar4 = FUN_14053bfc0();
    if (iVar4 == 0) {
        return;
    }
    if (lVar6 == 0) {
        LAB_14053bd3a:
        lVar6 = FUN_1407a0fd0(DAT_140c65b70);
    }
    else {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar6) {
            bVar9 = true;
        }
        else {
            bVar9 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar6;
        }
        lVar6 = 0;
        if (bVar9) {
            lVar6 = DAT_140c65898;
        }
        if ((lVar6 == 0) || (lVar6 = FUN_1405a5b90(lVar6,iVar4), lVar6 == 0)) goto LAB_14053bd3a;
    }
    if (lVar6 == 0) {
        return;
    }
    if (param_2 == 3) {
        lVar1 = *(longlong *)(param_1 + 0x78);
        if ((*(uint *)(*(longlong *)(lVar6 + 0x70) + 0x24) & 0xfffffffd) == 0) {
            for (lVar2 = *(longlong *)(lVar1 + 0x1608); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x88)) {
                if (((*(int *)(lVar2 + 4) == 0) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
                    (iVar4 = FUN_140195f70(lVar2 + 0x10), iVar4 != 0)) goto LAB_14053be5f;
            }
        }
        iVar4 = **(int **)(lVar6 + 0x70);
        for (lVar2 = *(longlong *)(lVar1 + 0x1608); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x88)) {
            if (((*(int *)(lVar2 + 4) == 1) && (iVar4 == *(int *)(lVar2 + 0xc))) &&
                ((*(longlong *)(lVar2 + 0x20) != 0 && (iVar5 = FUN_140195f70(lVar2 + 0x10), iVar5 != 0))))
                goto LAB_14053be5f;
        }
        if (*(longlong *)(lVar6 + 0x38) != 0) {
            uVar8 = 0;
            do {
                iVar4 = *(int *)(*(longlong *)(lVar6 + 0x38) + 4 + uVar8);
                if (iVar4 != 0) {
                    for (lVar2 = *(longlong *)(lVar1 + 0x1608); lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 0x88)) {
                        if (((*(int *)(lVar2 + 4) == 2) && (iVar4 == *(int *)(lVar2 + 0xc))) &&
                            ((*(longlong *)(lVar2 + 0x20) != 0 &&
                              (iVar5 = FUN_140195f70(lVar2 + 0x10), iVar5 != 0)))) goto LAB_14053be5f;
                    }
                }
                uVar8 = uVar8 + 4;
            } while (uVar8 < 0xc);
        }
    }
    LAB_14053bea6:
    if (lVar6 != 0) {
        local_res8[0] = 0;
        FUN_1407e4830(local_108,0,200);
        local_ec = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
        local_104 = **(undefined4 **)(lVar6 + 0x70);
        local_b0 = 1;
        iVar4 = FUN_1403988d0(param_1,local_108,lVar6,0,local_res8,local_118,local_res18);
        if ((iVar4 == 0) || (iVar4 == 0x13d)) {
            local_res20 = CONCAT44(*(undefined4 *)(local_118[0] + 0x60),param_2);
            FUN_1403f4900(DAT_140c65898,0x831,&local_res20);
        }
        else if (local_res18[0] == 0) {
            FUN_1403a12a0(param_1,iVar4,lVar6,0);
        }
        else {
            *(undefined4 *)(param_1 + 0x6648) = 10;
            *(int *)(param_1 + 0x66bc) = param_2;
            FUN_14039e400();
        }
    }
    return;
    LAB_14053be5f:
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar6 = FUN_140200220(0x3e2);
    if (lVar6 == 0) {
        uVar7 = 0xd0cf;
    }
    else {
        uVar7 = *(undefined4 *)(lVar6 + 8);
    }
    lVar6 = FUN_1403acd90(DAT_140c65b70,uVar7,uVar3);
    goto LAB_14053bea6;
}



undefined4 FUN_14053bfc0(undefined8 param_1,int param_2)

{
    longlong lVar1;

    if (param_2 == 1) {
        lVar1 = FUN_140200220(0x3cb);
        if (lVar1 == 0) {
            return 0xc2d9;
        }
    }
    else if (param_2 == 2) {
        lVar1 = FUN_140200220(0x3cc);
        if (lVar1 == 0) {
            return 0xc2da;
        }
    }
    else {
        if (param_2 != 3) {
            return 0;
        }
        lVar1 = FUN_140200220(0x3e2);
        if (lVar1 == 0) {
            return 0xcd61;
        }
    }
    return *(undefined4 *)(lVar1 + 4);
}



longlong FUN_14053c030(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = FUN_14053c2d0(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    lVar1 = *(longlong *)(param_1 + 0x10);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x70) {
        FUN_1403f6ee0(lVar2);
    }
    param_3 = param_3 - param_2;
    *(longlong *)(param_1 + 0x10) =
            *(longlong *)(param_1 + 0x10) +
            (SUB168(SEXT816(-0x4924924924924925) * SEXT816(param_3) >> 0x45,0) -
             (param_3 / -0x4ccccccccccccccc + (param_3 >> 0x3f))) * 0x70;
    return param_2;
}



void FUN_14053c0d0(longlong *param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    if (param_1[1] == 0) {
        lVar4 = FUN_14018db00(*param_1,0,8);
        uVar5 = 0;
        if (*param_1 != lVar4) {
            if (param_1[1] != 0) {
                do {
                    puVar1 = (undefined8 *)(lVar4 + uVar5 * 8);
                    if (puVar1 != (undefined8 *)0x0) {
                        lVar3 = *param_1;
                        *puVar1 = *(undefined8 *)(lVar3 + uVar5 * 8);
                        *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
                    }
                    plVar2 = *(longlong **)(*param_1 + uVar5 * 8);
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 8))();
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *param_1 = lVar4;
        }
    }
    else {
        uVar5 = 0;
        if (param_1[1] == 0) {
            param_1[1] = 0;
            return;
        }
        do {
            plVar2 = *(longlong **)(*param_1 + uVar5 * 8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)param_1[1]);
    }
    param_1[1] = 0;
    return;
}



void FUN_14053c1c0(longlong **param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;

    plVar2 = (longlong *)((longlong)param_1[1] + -1);
    if ((longlong *)**param_1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)**param_1 + 8))();
    }
    plVar3 = (longlong *)0x1;
    plVar4 = (longlong *)0x0;
    if ((longlong *)0x1 < param_1[1]) {
        do {
            plVar1 = *param_1 + (longlong)plVar3;
            if (plVar1 + -1 != (longlong *)0x0) {
                plVar1[-1] = *plVar1;
                *plVar1 = 0;
            }
            if ((longlong *)(*param_1)[(longlong)plVar3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)(*param_1)[(longlong)plVar3] + 8))();
            }
            plVar3 = (longlong *)((longlong)plVar3 + 1);
        } while (plVar3 < param_1[1]);
    }
    plVar3 = (longlong *)FUN_14018db00(*param_1,plVar2,8);
    if (*param_1 != plVar3) {
        if (plVar2 != (longlong *)0x0) {
            do {
                if (plVar3 + (longlong)plVar4 != (longlong *)0x0) {
                    plVar1 = *param_1;
                    plVar3[(longlong)plVar4] = plVar1[(longlong)plVar4];
                    plVar1[(longlong)plVar4] = 0;
                }
                if ((longlong *)(*param_1)[(longlong)plVar4] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)(*param_1)[(longlong)plVar4] + 8))();
                }
                plVar4 = (longlong *)((longlong)plVar4 + 1);
            } while (plVar4 < plVar2);
        }
        plVar4 = *param_1;
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(plVar4[-2] + 8))(plVar4 + -2);
        }
        *param_1 = plVar3;
    }
    param_1[1] = plVar2;
    return;
}



longlong FUN_14053c2d0(longlong param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    undefined2 *puVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong lVar6;

    for (lVar6 = (param_2 - param_1) / 0x70; 0 < lVar6; lVar6 = lVar6 + -1) {
        if (param_1 != param_3) {
            FUN_14001c480(param_3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        }
        pplVar5 = (longlong **)(param_3 + 0x20);
        lVar4 = 10;
        do {
            plVar1 = (longlong *)FUN_14018b280(0x30);
            plVar3 = (longlong *)0x0;
            if (plVar1 != (longlong *)0x0) {
                plVar3 = *(longlong **)((param_1 - param_3) + (longlong)pplVar5);
                plVar1[3] = 0;
                plVar1[4] = 0;
                plVar1[5] = 0;
                puVar2 = (undefined2 *)FUN_14018b280(0x10);
                plVar1[3] = (longlong)puVar2;
                plVar1[4] = (longlong)puVar2;
                plVar1[5] = (longlong)(puVar2 + 8);
                if (puVar2 != (undefined2 *)0x0) {
                    *puVar2 = 0;
                }
                if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)*plVar3)();
                }
                *plVar1 = *plVar3;
                *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(plVar3 + 1);
                plVar3 = plVar1;
            }
            *pplVar5 = plVar3;
            pplVar5 = pplVar5 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        param_1 = param_1 + 0x70;
        param_3 = param_3 + 0x70;
    }
    return param_3;
}



void FUN_14053c410(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x201,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



undefined8 * FUN_14053c500(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b6c608;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0x1eb8;
    DAT_140c1e71c = DAT_140c1e71c + 1;
    *(int *)(param_1 + 0xc) = DAT_140c1e71c;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    FUN_1407e4830(param_1 + 0xd,0,200);
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2b) = 0;
    *(undefined (*) [16])(param_1 + 0x2c) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined (*) [16])(param_1 + 0x30) = ZEXT816(0);
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
    param_1[0x36] = 0xffffffffffffffff;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x39] = 0;
    param_1[0x3b] = 0;
    param_1[0x3a] = 0;
    param_1[0x3d] = 0;
    param_1[0x3c] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x3f] = puVar1;
    param_1[0x40] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x3f] + 8) = 0;
    *(undefined8 *)(param_1[0x3f] + 0x10) = param_1[0x3f];
    *(undefined8 *)(param_1[0x3f] + 0x18) = param_1[0x3f];
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x4a] = 0;
    param_1[0x49] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x49] + 8) = 0;
    *(undefined8 *)(param_1[0x49] + 0x10) = param_1[0x49];
    *(undefined8 *)(param_1[0x49] + 0x18) = param_1[0x49];
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x51] = 0;
    param_1[0x50] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x50] + 8) = 0;
    *(undefined8 *)(param_1[0x50] + 0x10) = param_1[0x50];
    *(undefined8 *)(param_1[0x50] + 0x18) = param_1[0x50];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x55] = 0;
    param_1[0x54] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x54] + 8) = 0;
    *(undefined8 *)(param_1[0x54] + 0x10) = param_1[0x54];
    *(undefined8 *)(param_1[0x54] + 0x18) = param_1[0x54];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x59] = 0;
    param_1[0x58] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x58] + 8) = 0;
    *(undefined8 *)(param_1[0x58] + 0x10) = param_1[0x58];
    *(undefined8 *)(param_1[0x58] + 0x18) = param_1[0x58];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x5d] = 0;
    param_1[0x5c] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x5c] + 8) = 0;
    *(undefined8 *)(param_1[0x5c] + 0x10) = param_1[0x5c];
    *(undefined8 *)(param_1[0x5c] + 0x18) = param_1[0x5c];
    *(undefined4 *)(param_1 + 0x5f) = 1;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x344) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
    puVar1 = (undefined *)FUN_14018b280(0x40,0);
    param_1[0x6c] = 0;
    param_1[0x6b] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x6b] + 8) = 0;
    *(undefined8 *)(param_1[0x6b] + 0x10) = param_1[0x6b];
    *(undefined8 *)(param_1[0x6b] + 0x18) = param_1[0x6b];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x70] = 0;
    param_1[0x6f] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x6f] + 8) = 0;
    *(undefined8 *)(param_1[0x6f] + 0x10) = param_1[0x6f];
    *(undefined8 *)(param_1[0x6f] + 0x18) = param_1[0x6f];
    return param_1;
}



undefined8 FUN_14053c8a0(undefined8 param_1,ulonglong param_2)

{
    FUN_14053c8e0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14053c8e0(undefined8 *param_1)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined8 *puVar6;
    undefined4 uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    *param_1 = &PTR_FUN_140b6c608;
    lVar8 = FUN_1403d90d0(DAT_140c65898);
    lVar4 = DAT_140c65898;
    uVar10 = 0;
    if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x18a8) = 1;
        lVar2 = *(longlong *)(lVar4 + 0x78);
        if ((lVar2 != 0) && (*(int *)(lVar8 + 8) == *(int *)(lVar2 + 8))) {
            *(undefined4 *)(lVar4 + 0x6f98) = 1;
        }
    }
    FUN_14053ff40(param_1,0);
    pplVar1 = (longlong **)(param_1 + 0x39);
    plVar3 = *pplVar1;
    lVar4 = DAT_140c65898;
    while (DAT_140c65898 = lVar4, plVar3 != (longlong *)0x0) {
        FUN_140624200(*pplVar1);
        plVar3 = *pplVar1;
        if ((longlong *)*plVar3 != (longlong *)0x0) {
            *(longlong *)*plVar3 = plVar3[1];
        }
        if ((longlong *)plVar3[1] != (longlong *)0x0) {
            *(longlong *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        lVar4 = DAT_140c65898;
        plVar3 = *pplVar1;
    }
    if (param_1[0x42] != 0) {
        if (*(longlong *)(lVar4 + 0x7188) != 0) {
            if (*(longlong **)(lVar4 + 0x7188) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar4 + 0x7188) + 8))();
                *(undefined8 *)(lVar4 + 0x7188) = 0;
            }
            uVar7 = DAT_140c636a8;
            *(undefined8 *)(lVar4 + 0x7188) = 0;
            *(undefined4 *)(lVar4 + 0x7190) = uVar7;
        }
        if ((longlong *)param_1[0x42] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x42] + 8))();
            param_1[0x42] = 0;
        }
    }
    uVar9 = uVar10;
    if (param_1[0x3b] != 0) {
        do {
            lVar4 = *(longlong *)(param_1[0x3a] + uVar9 * 8);
            if (lVar4 != 0) {
                FUN_140195d70(lVar4 + 8);
                *(undefined4 *)(lVar4 + 8) = 0;
                if (*(undefined8 **)(lVar4 + 0x18) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x18) = *(undefined8 *)(lVar4 + 0x20);
                }
                if (*(undefined8 **)(lVar4 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x18);
                }
                *(undefined8 *)(lVar4 + 0x18) = 0;
                *(undefined8 *)(lVar4 + 0x20) = 0;
                FUN_14018b900(lVar4,0);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x3b]);
    }
    uVar9 = uVar10;
    if (param_1[0x3d] != 0) {
        do {
            puVar5 = *(undefined4 **)(param_1[0x3c] + uVar9 * 8);
            if (puVar5 != (undefined4 *)0x0) {
                FUN_140195d70(puVar5);
                *puVar5 = 0;
                if (*(undefined8 **)(puVar5 + 4) != (undefined8 *)0x0) {
                    **(undefined8 **)(puVar5 + 4) = *(undefined8 *)(puVar5 + 6);
                }
                if (*(undefined8 **)(puVar5 + 6) != (undefined8 *)0x0) {
                    **(undefined8 **)(puVar5 + 6) = *(undefined8 *)(puVar5 + 4);
                }
                *(undefined8 *)(puVar5 + 4) = 0;
                *(undefined8 *)(puVar5 + 6) = 0;
                FUN_14018b900(puVar5,0);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < (ulonglong)param_1[0x3d]);
    }
    if ((*(int *)(param_1 + 0x28) != 0) &&
        (puVar6 = (undefined8 *)param_1[0x27], puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
    }
    if (param_1[0x38] != 0) {
        do {
            lVar4 = *(longlong *)(param_1[0x37] + uVar10 * 8);
            if (lVar4 != 0) {
                FUN_140195d70(lVar4 + 0x10);
                *(undefined4 *)(lVar4 + 0x10) = 0;
                if (*(undefined8 **)(lVar4 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x28);
                }
                if (*(undefined8 **)(lVar4 + 0x28) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar4 + 0x28) = *(undefined8 *)(lVar4 + 0x20);
                }
                *(undefined8 *)(lVar4 + 0x20) = 0;
                *(undefined8 *)(lVar4 + 0x28) = 0;
                FUN_14018b900(lVar4,0);
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)param_1[0x38]);
    }
    param_1[0x38] = 0;
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
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 *)(param_1[8] + 0x38) = param_1[7];
    }
    param_1[7] = 0;
    param_1[8] = 0;
    if (param_1[0x70] != 0) {
        lVar4 = *(longlong *)(param_1[0x6f] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x6e,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x6f] + 0x10) = param_1[0x6f];
        *(undefined8 *)(param_1[0x6f] + 8) = 0;
        *(undefined8 *)(param_1[0x6f] + 0x18) = param_1[0x6f];
        param_1[0x70] = 0;
    }
    FUN_14018b900(param_1[0x6f],0);
    if (param_1[0x6c] != 0) {
        lVar4 = *(longlong *)(param_1[0x6b] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x6a,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x6b] + 0x10) = param_1[0x6b];
        *(undefined8 *)(param_1[0x6b] + 8) = 0;
        *(undefined8 *)(param_1[0x6b] + 0x18) = param_1[0x6b];
        param_1[0x6c] = 0;
    }
    FUN_14018b900(param_1[0x6b],0);
    FUN_140195d70(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((undefined8 *)param_1[0x62] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x62] = param_1[99];
    }
    if ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[99] = param_1[0x62];
    }
    param_1[0x62] = 0;
    param_1[99] = 0;
    if (param_1[0x5d] != 0) {
        lVar4 = *(longlong *)(param_1[0x5c] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x5b,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x5c] + 0x10) = param_1[0x5c];
        *(undefined8 *)(param_1[0x5c] + 8) = 0;
        *(undefined8 *)(param_1[0x5c] + 0x18) = param_1[0x5c];
        param_1[0x5d] = 0;
    }
    FUN_14018b900(param_1[0x5c],0);
    if (param_1[0x59] != 0) {
        lVar4 = *(longlong *)(param_1[0x58] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x57,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x58] + 0x10) = param_1[0x58];
        *(undefined8 *)(param_1[0x58] + 8) = 0;
        *(undefined8 *)(param_1[0x58] + 0x18) = param_1[0x58];
        param_1[0x59] = 0;
    }
    FUN_14018b900(param_1[0x58],0);
    if (param_1[0x55] != 0) {
        lVar4 = *(longlong *)(param_1[0x54] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x53,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x54] + 0x10) = param_1[0x54];
        *(undefined8 *)(param_1[0x54] + 8) = 0;
        *(undefined8 *)(param_1[0x54] + 0x18) = param_1[0x54];
        param_1[0x55] = 0;
    }
    FUN_14018b900(param_1[0x54],0);
    if (param_1[0x51] != 0) {
        lVar4 = *(longlong *)(param_1[0x50] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x4f,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x50] + 0x10) = param_1[0x50];
        *(undefined8 *)(param_1[0x50] + 8) = 0;
        *(undefined8 *)(param_1[0x50] + 0x18) = param_1[0x50];
        param_1[0x51] = 0;
    }
    FUN_14018b900(param_1[0x50],0);
    if (param_1[0x4e] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x4d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x4c] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x4a] != 0) {
        lVar4 = *(longlong *)(param_1[0x49] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x48,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x49] + 0x10) = param_1[0x49];
        *(undefined8 *)(param_1[0x49] + 8) = 0;
        *(undefined8 *)(param_1[0x49] + 0x18) = param_1[0x49];
        param_1[0x4a] = 0;
    }
    FUN_14018b900(param_1[0x49],0);
    if (param_1[0x47] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x46] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x45] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x44] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x43] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x40] != 0) {
        lVar4 = *(longlong *)(param_1[0x3f] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x3e,*(undefined8 *)(lVar4 + 0x18));
            lVar8 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar8;
        }
        *(undefined8 *)(param_1[0x3f] + 0x10) = param_1[0x3f];
        *(undefined8 *)(param_1[0x3f] + 8) = 0;
        *(undefined8 *)(param_1[0x3f] + 0x18) = param_1[0x3f];
        param_1[0x40] = 0;
    }
    FUN_14018b900(param_1[0x3f],0);
    lVar4 = param_1[0x3c];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x3a];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    if (*pplVar1 != (longlong *)0x0) {
        FUN_1401a4a00(pplVar1);
    }
    lVar4 = param_1[0x37];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    if (param_1[9] != 0) {
        FUN_1401a4a00(param_1 + 9);
    }
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 *)(param_1[8] + 0x38) = param_1[7];
    }
    param_1[7] = 0;
    param_1[8] = 0;
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
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



void FUN_14053d140(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_1403d90d0();
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x18a8) = 1;
        if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
            (*(int *)(lVar1 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
            *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        }
        lVar2 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x1600));
        if ((lVar2 == 0) && (*(longlong *)(DAT_140c65898 + 0x78) == lVar1)) {
            lVar2 = FUN_14039df50();
            if (lVar2 != 0) {
                lVar2 = FUN_1404695e0(lVar2);
            }
        }
        if (lVar2 == param_1) {
            FUN_1404698a0(lVar1);
        }
    }
    return;
}



undefined8 FUN_14053d1f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    int *piVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    int iVar11;
    uint uVar12;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;
    ulonglong uVar13;

    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x24);
    FUN_14053d550();
    uVar3 = DAT_140c636a8;
    uVar13 = 0;
    uVar4 = **(undefined4 **)(param_3 + 0x70);
    *(longlong *)(param_1 + 0x138) = param_3;
    *(undefined4 *)(param_1 + 0x194) = uVar3;
    *(undefined4 *)(param_1 + 0x130) = uVar4;
    *(undefined4 *)(param_1 + 0x140) = param_4;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x1c);
    if (*(longlong *)(param_3 + 0x50) == 0) {
        if ((((*(int *)(*(longlong *)(param_3 + 0x70) + 0x18) == 8) &&
              (plVar9 = *(longlong **)(param_3 + 0x58), plVar9 != (longlong *)0x0)) &&
             (*(int *)(*(longlong *)(param_3 + 0x70) + 0x1c) == 0)) && (plVar9[1] != 0)) {
            iVar11 = *(int *)(param_1 + 0x50);
            uVar10 = uVar13;
            do {
                uVar10 = uVar10 + 1;
                iVar11 = iVar11 + *(int *)(*plVar9 + -4 + uVar10 * 4);
                *(int *)(param_1 + 0x50) = iVar11;
                plVar9 = *(longlong **)(param_3 + 0x58);
            } while (uVar10 < (ulonglong)plVar9[1]);
        }
    }
    else {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(longlong *)(param_3 + 0x50) + 4);
    }
    lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0x24));
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != 0)) && (*(int *)(param_2 + 0x54) != 0)) {
        uVar4 = FUN_14054e340(*(undefined4 **)(param_3 + 0x70),**(undefined4 **)(param_3 + 0x70));
        *(undefined4 *)(param_1 + 0x50) = uVar4;
        *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0x138);
        piVar6 = (int *)FUN_1407a1680(DAT_140c65b70,**(undefined4 **)(lVar5 + 0x18));
        if (((piVar6 != (int *)0x0) && (*piVar6 != 0)) && (piVar6[10] != 0)) {
            *(int *)(param_1 + 0x348) = piVar6[10];
        }
    }
    if ((*(int *)(param_1 + 0x348) == 0) &&
        (iVar11 = *(int *)(*(longlong *)(param_3 + 8) + 0x1c), iVar11 != 0)) {
        *(int *)(param_1 + 0x348) = iVar11;
    }
    if ((*(short **)(param_1 + 0x198) == (short *)0x0) || (**(short **)(param_1 + 0x198) == 0)) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8);
        uVar7 = FUN_14034bdd0(lVar2,*(undefined4 *)(lVar2 + 0x10));
        *(undefined8 *)(param_1 + 0x198) = uVar7;
    }
    lVar2 = *(longlong *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    piVar6 = *(int **)(lVar2 + 0x50);
    if (piVar6 == (int *)0x0) {
        if (*(int *)(*(longlong *)(lVar2 + 0x70) + 0x18) == 8) {
            *(undefined4 *)(param_1 + 0x148) = 1;
            iVar11 = *(int *)(*(longlong *)(lVar2 + 0x58) + 8);
            *(int *)(param_1 + 0x1a0) = iVar11;
            if (iVar11 != 0) {
                do {
                    if ((*(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x58) + 0x10) + uVar13 * 4) & 0x200) !=
                        0) {
                        *(undefined4 *)(param_1 + 0x148) = 0;
                    }
                    uVar12 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar12;
                } while (uVar12 < *(uint *)(param_1 + 0x1a0));
            }
        }
    }
    else {
        *(uint *)(param_1 + 0x1a0) = (uint)((piVar6[1] - *piVar6) + piVar6[2]) / (uint)piVar6[2];
    }
    lVar8 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    lVar2 = DAT_140c65898;
    if (lVar8 != 0) {
        plVar9 = (longlong *)(lVar8 + 0x15c0);
        if (*(longlong *)(param_1 + 8) == 0) {
            *(longlong **)(param_1 + 8) = plVar9;
            plVar1 = (longlong *)(param_1 + 0x10);
            *plVar1 = *plVar9;
            *plVar9 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        *(undefined4 *)(lVar8 + 0x18a8) = 1;
        if ((*(longlong *)(lVar2 + 0x78) != 0) &&
            (*(int *)(lVar8 + 8) == *(int *)(*(longlong *)(lVar2 + 0x78) + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
    }
    if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x18a8) = 1;
        if ((*(longlong *)(lVar2 + 0x78) != 0) &&
            (*(int *)(lVar5 + 8) == *(int *)(*(longlong *)(lVar2 + 0x78) + 8))) {
            *(undefined4 *)(lVar2 + 0x6f98) = 1;
        }
    }
    FUN_140540430(param_1);
    if ((((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x108) & 0x4000) != 0) &&
         (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
        (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        FUN_14039daf0(DAT_140c65898,*(undefined4 *)(param_1 + 0x158));
    }
    local_28[0] = 0;
    local_18 = FUN_140546e60;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x300,0,local_28,4);
    return 0;
}



undefined4 * FUN_14053d550(undefined4 *param_1,undefined4 *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    param_1[0x20] = param_2[0x20];
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    param_1[0x28] = param_2[0x28];
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    return param_1;
}



void FUN_14053d680(longlong param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    if (param_2 != (int *)0x0) {
        iVar1 = *param_2;
        lVar3 = FUN_1403d90d0(DAT_140c65898,iVar1);
        if (lVar3 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x48);
            if (lVar5 != 0) {
                LAB_14053d6d0:
                if (*(int *)(lVar5 + 0x40) != iVar1) goto code_r0x00014053d6d5;
                FUN_1407188d0(lVar5,*(undefined2 *)((longlong)param_2 + 6));
                uVar7 = 0;
                uVar8 = uVar7;
                if (*(char *)(param_2 + 3) != '\0') {
                    do {
                        FUN_140718120(lVar5,*(longlong *)(param_2 + 4) + uVar7);
                        uVar8 = uVar8 + 1;
                        uVar7 = uVar7 + 0x50;
                    } while (uVar8 < *(byte *)(param_2 + 3));
                }
                FUN_1407180c0(lVar5);
                goto LAB_14053d78c;
            }
            LAB_14053d6de:
            puVar4 = (undefined8 *)FUN_14018b280(0x68);
            puVar6 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = 0;
                puVar4[1] = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[5] = 0;
                puVar4[7] = 0;
                *(undefined4 *)(puVar4 + 8) = 0;
                *(undefined4 *)((longlong)puVar4 + 0x44) = 0xffffffff;
                *(undefined4 *)(puVar4 + 9) = 0;
                *(undefined4 *)((longlong)puVar4 + 0x4c) = 0xffffffff;
                *(undefined4 *)(puVar4 + 10) = 0;
                *(undefined4 *)(puVar4 + 0xb) = 8;
                puVar4[0xc] = 0;
                puVar6 = puVar4;
            }
            iVar2 = FUN_140717990(puVar6,param_2,lVar3,param_1);
            if (iVar2 < 0) {
                if (puVar6 != (undefined8 *)0x0) {
                    FUN_1407177b0(puVar6);
                    FUN_14018b900(puVar6,0);
                }
            }
            else {
                LAB_14053d78c:
                if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                     (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) &&
                    (param_2[2] == 1)) {
                    FUN_14039c720(DAT_140c65898,6);
                }
                if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                     (iVar1 == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) && (param_2[2] == 1)) {
                    FUN_14039c720(DAT_140c65898,2,iVar1);
                }
            }
        }
    }
    return;
    code_r0x00014053d6d5:
    lVar5 = *(longlong *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_14053d6de;
    goto LAB_14053d6d0;
}



void FUN_14053d850(longlong param_1)

{
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    local_28[0] = 0;
    local_18 = FUN_140546e60;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x300,0,local_28,4);
    return;
}



void FUN_14053d890(longlong param_1,byte param_2,longlong param_3,byte param_4,longlong param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    longlong *plVar9;
    undefined4 *puVar10;
    byte bVar11;
    ulonglong uVar12;
    longlong local_58;
    longlong local_50;

    uVar12 = 0;
    if (param_2 != 0) {
        local_58 = param_1 + 0x350;
        do {
            puVar10 = (undefined4 *)(uVar12 * 0x1c + param_3);
            uVar1 = *puVar10;
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = puVar10[4];
            uVar6 = puVar10[5];
            uVar7 = puVar10[6];
            puVar10 = (undefined4 *)FUN_14054dd00();
            *puVar10 = uVar1;
            puVar10[1] = uVar2;
            puVar10[2] = uVar3;
            puVar10[3] = uVar4;
            puVar10[4] = uVar5;
            bVar11 = (char)uVar12 + 1;
            uVar12 = (ulonglong)bVar11;
            puVar10[5] = uVar6;
            puVar10[6] = uVar7;
        } while (bVar11 < param_2);
    }
    bVar11 = 0;
    if (param_4 != 0) {
        local_50 = param_1 + 0x370;
        do {
            plVar9 = (longlong *)(param_5 + (ulonglong)bVar11 * 0x20);
            uVar1 = *(undefined4 *)plVar9;
            uVar2 = *(undefined4 *)(plVar9 + 1);
            uVar3 = *(undefined4 *)((longlong)plVar9 + 0xc);
            uVar4 = *(undefined4 *)(plVar9 + 2);
            uVar5 = *(undefined4 *)((longlong)plVar9 + 0x14);
            uVar6 = *(undefined4 *)(plVar9 + 3);
            uVar7 = *(undefined4 *)((longlong)plVar9 + 0x1c);
            uVar8 = *(undefined4 *)((longlong)plVar9 + 4);
            local_58 = *plVar9;
            puVar10 = (undefined4 *)FUN_14054ddc0(local_50,&local_58);
            *puVar10 = uVar1;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
            puVar10[3] = uVar3;
            puVar10[4] = uVar4;
            bVar11 = bVar11 + 1;
            puVar10[5] = uVar5;
            puVar10[6] = uVar6;
            puVar10[7] = uVar7;
        } while (bVar11 < param_4);
    }
    return;
}



float FUN_14053da10(longlong param_1)

{
    longlong lVar1;
    uint uVar2;

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50);
    uVar2 = DAT_140c636a8 - *(int *)(param_1 + 0x194);
    if (lVar1 != 0) {
        return ((float)(ulonglong)uVar2 / (float)(ulonglong)*(uint *)(lVar1 + 4)) * 100.0;
    }
    if (*(uint *)(param_1 + 0x50) != 0) {
        return ((float)(ulonglong)uVar2 / (float)(ulonglong)*(uint *)(param_1 + 0x50)) * 100.0;
    }
    return 100.0;
}



void FUN_14053da80(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int iVar9;
    longlong lVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined4 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    int *piVar16;
    undefined8 *puVar17;
    undefined8 *puVar18;
    byte local_res18;
    longlong local_res20;

    puVar17 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x150) = param_3;
    puVar15 = puVar17;
    puVar18 = puVar17;
    if (*(int *)(param_2 + 0x14) != 0) {
        do {
            piVar16 = (int *)(*(longlong *)(param_2 + 0x18) + (longlong)puVar18);
            lVar10 = FUN_1403d90d0(DAT_140c65898);
            if (lVar10 != 0) {
                lVar12 = *(longlong *)(param_1 + 0x48);
                if (lVar12 != 0) {
                    do {
                        if (*(int *)(lVar12 + 0x40) == *piVar16) goto LAB_14053db85;
                        lVar12 = *(longlong *)(lVar12 + 0x28);
                    } while (lVar12 != 0);
                }
                puVar11 = (undefined8 *)FUN_14018b280(0x68);
                puVar14 = puVar17;
                if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    puVar11[4] = 0;
                    puVar11[5] = 0;
                    puVar11[7] = 0;
                    *(undefined4 *)(puVar11 + 8) = 0;
                    *(undefined4 *)((longlong)puVar11 + 0x44) = 0xffffffff;
                    *(undefined4 *)(puVar11 + 9) = 0;
                    *(undefined4 *)((longlong)puVar11 + 0x4c) = 0xffffffff;
                    *(undefined4 *)(puVar11 + 10) = 0;
                    *(undefined4 *)(puVar11 + 0xb) = 8;
                    puVar11[0xc] = 0;
                    puVar14 = puVar11;
                }
                iVar9 = FUN_140717990(puVar14,piVar16,lVar10,param_1);
                if ((iVar9 < 0) && (puVar14 != (undefined8 *)0x0)) {
                    FUN_1407177b0(puVar14);
                    FUN_14018b900(puVar14);
                }
            }
            LAB_14053db85:
            puVar15 = (undefined8 *)((longlong)puVar15 + 1);
            puVar18 = puVar18 + 3;
        } while (puVar15 < (undefined8 *)(ulonglong)*(uint *)(param_2 + 0x14));
    }
    if (*(char *)(param_2 + 0x20) != '\0') {
        local_res20 = 0;
        do {
            puVar13 = (undefined4 *)(*(longlong *)(param_2 + 0x28) + local_res20);
            uVar1 = *puVar13;
            uVar2 = puVar13[1];
            uVar3 = puVar13[2];
            uVar4 = puVar13[3];
            uVar5 = puVar13[4];
            uVar6 = puVar13[5];
            uVar7 = puVar13[6];
            puVar13 = (undefined4 *)FUN_14054dd00(param_1 + 0x350);
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
            puVar13[2] = uVar3;
            puVar13[3] = uVar4;
            puVar13[4] = uVar5;
            puVar13[5] = uVar6;
            local_res20 = local_res20 + 0x1c;
            puVar13[6] = uVar7;
            puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        } while (puVar17 < (undefined8 *)(ulonglong)*(byte *)(param_2 + 0x20));
    }
    local_res18 = 0;
    if (*(char *)(param_2 + 0x30) != '\0') {
        do {
            puVar13 = (undefined4 *)((ulonglong)local_res18 * 0x20 + *(longlong *)(param_2 + 0x38));
            uVar1 = *puVar13;
            uVar2 = puVar13[2];
            uVar3 = puVar13[3];
            uVar4 = puVar13[4];
            uVar5 = puVar13[5];
            uVar6 = puVar13[6];
            uVar7 = puVar13[7];
            uVar8 = puVar13[1];
            puVar13 = (undefined4 *)FUN_14054ddc0(param_1 + 0x370);
            *puVar13 = uVar1;
            puVar13[1] = uVar8;
            puVar13[2] = uVar2;
            puVar13[3] = uVar3;
            puVar13[4] = uVar4;
            puVar13[5] = uVar5;
            puVar13[6] = uVar6;
            puVar13[7] = uVar7;
            local_res18 = local_res18 + 1;
        } while (local_res18 < *(byte *)(param_2 + 0x30));
    }
    return;
}



void FUN_14053dd00(longlong param_1)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 local_38;
    int local_34;
    undefined4 local_30;
    undefined8 local_2c;
    code *local_20;
    longlong local_18;

    if (((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 5) &&
         (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (iVar4 = *(int *)(param_1 + 0x154), iVar4 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))
            ) {
        local_30 = *(undefined4 *)(param_1 + 0x158);
        local_2c = 0;
        pplVar2 = (longlong **)(param_1 + 0x210);
        local_38 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 8) + 0x30);
        local_20 = FUN_1405465a0;
        local_34 = iVar4;
        local_18 = param_1;
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
            *pplVar2 = (longlong *)0x0;
        }
        if (pplVar2 != (longlong **)0x0) {
            FUN_14077bd10(pplVar2,&local_38);
        }
    }
    lVar5 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x150) = 2;
    lVar5 = FUN_1403d90d0(lVar5,*(undefined4 *)(param_1 + 0x154));
    if (lVar5 == 0) {
        return;
    }
    iVar4 = FUN_1407a1820(*(undefined8 *)(param_1 + 0x138),param_1 + 0x68);
    if ((iVar4 != 0) || ((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0xbc) != 0)))) {
        FUN_1404697a0(lVar5,*(undefined4 *)(param_1 + 0x5c));
    }
    lVar6 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_1 + 0x5c));
    if (lVar6 != 0) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(lVar6 + 0x138) + 0x70) + 0x108) & 1) != 0) {
            if (lVar5 == *(longlong *)(DAT_140c65898 + 0x6490)) {
                FUN_14039dd70();
            }
            else {
                FUN_14046bb00(lVar5,*(undefined4 *)(param_1 + 0x158),*(int *)(lVar6 + 0x50) + 1000,0);
            }
        }
        if ((*(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x138) + 0x70) + 0x108) & 0x4000000) != 0) {
            plVar3 = (longlong *)(lVar5 + 0x15f8);
            if (*(longlong *)(param_1 + 0x18) == 0) {
                *(longlong **)(param_1 + 0x18) = plVar3;
                plVar1 = (longlong *)(param_1 + 0x20);
                *plVar1 = *plVar3;
                *plVar3 = param_1;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x18) = plVar1;
                }
            }
            FUN_140466e60(lVar5);
        }
    }
    FUN_140540c10(param_1);
    iVar4 = FUN_1403982a0(DAT_140c65898,1);
    if (*(int *)(param_1 + 0x130) != iVar4) {
        iVar4 = FUN_1403982a0(DAT_140c65898,0);
        if (*(int *)(param_1 + 0x130) != iVar4) {
            return;
        }
        iVar4 = DAT_140c45de0;
        if (*DAT_140c63750 < DAT_140c45de0) {
            iVar4 = *DAT_140c63750;
        }
        if (*(int *)(&DAT_140c45df0 + (longlong)iVar4 * 4) != 1) {
            return;
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SprintStateUpdated",&DAT_1409efb34,1);
    return;
}



void FUN_14053df40(longlong param_1,uint param_2)

{
    int iVar1;
    ulonglong uVar2;
    int *piVar3;
    int *piVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_18;
    uint local_10;

    if ((((param_2 < 0x14c) && (lVar5 = FUN_140237240(param_2), lVar5 != 0)) &&
         (uVar2 = *(ulonglong *)(lVar5 + 8), uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) {
        lVar5 = DAT_140c3fe68 + uVar2;
    }
    else {
        lVar5 = 0;
    }
    FUN_1400035b0(0x18,3,0,*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 0x5c),lVar5);
    *(uint *)(param_1 + 0x34c) = param_2;
    *(undefined4 *)(param_1 + 0x150) = 5;
    if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x58))();
        if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x210) + 8))();
            *(undefined8 *)(param_1 + 0x210) = 0;
        }
    }
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18);
    lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    if (((lVar5 != 0) && (iVar1 == 8)) &&
        ((*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x58) != 0 &&
          ((*(int *)(param_1 + 0x144) == 0 && (*(int *)(param_1 + 0x14c) != 0)))))) {
        FUN_14046b1e0(lVar5,*(longlong *)(param_1 + 0x138),param_1);
    }
    FUN_14053fd20(param_1);
    FUN_14053ff40(param_1,0);
    lVar6 = *(longlong *)(param_1 + 0x1c8);
    while (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 8);
        FUN_140624200();
    }
    if (lVar5 != 0) {
        lVar6 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar5 + 0x1600));
        if (((lVar6 == 0) && (*(longlong *)(DAT_140c65898 + 0x78) == lVar5)) &&
            (lVar7 = FUN_14039df50(), lVar6 = 0, lVar7 != 0)) {
            lVar6 = FUN_1404695e0();
        }
        if (((lVar6 == param_1) &&
             (iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18), iVar1 != 2))
            && (iVar1 != 7)) {
            FUN_1404698a0();
        }
    }
    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        piVar4 = *(int **)(DAT_140c65898 + 0x6cd0);
        local_18 = param_1;
        local_10 = param_2;
        while (piVar4 != (int *)0x0) {
            piVar3 = *(int **)(piVar4 + 10);
            *(undefined8 *)(piVar4 + 0xc) = 0;
            *(longlong **)(piVar4 + 0xe) = &local_18;
            if (*piVar4 == 0) {
                (**(code **)(piVar4 + 4))();
            }
            else if (*piVar4 == 1) {
                (**(code **)(piVar4 + 4))(*(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 6));
            }
            *(undefined8 *)(piVar4 + 0xc) = 0;
            *(undefined8 *)(piVar4 + 0xe) = 0;
            piVar4 = piVar3;
        }
        if (*(int *)(lVar5 + 0x1624) == 0) {
            *(undefined4 *)(lVar5 + 0x1620) = 0;
            FUN_140195d70(lVar5 + 0x1628);
        }
    }
    return;
}



void FUN_14053e1b0(longlong param_1,uint param_2,int param_3)

{
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;
    int *piVar4;
    bool bVar5;
    int *piVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong local_28;
    uint local_20;

    if ((((param_2 < 0x14c) && (lVar8 = FUN_140237240(param_2), lVar8 != 0)) &&
         (uVar2 = *(ulonglong *)(lVar8 + 8), uVar2 != 0)) && (uVar2 <= DAT_140c3fe70)) {
        lVar8 = DAT_140c3fe68 + uVar2;
    }
    else {
        lVar8 = 0;
    }
    FUN_1400035b0(0x18,3,0,*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 0x5c),lVar8);
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18);
    lVar8 = FUN_1403d90d0();
    if (lVar8 != 0) {
        if (((*(int *)(param_1 + 400) == 1) || (iVar1 == 1)) &&
            ((iVar1 - 1U < 2 && (*(int *)(param_1 + 0x144) == 0)))) {
            FUN_14046b1e0(lVar8);
        }
        if (((iVar1 == 8) && (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x58) != 0)) &&
            ((*(int *)(param_1 + 0x144) == 0 && (*(int *)(param_1 + 0x14c) != 0)))) {
            FUN_14046b1e0(lVar8);
        }
    }
    *(uint *)(param_1 + 0x34c) = param_2;
    *(undefined4 *)(param_1 + 0x150) = 5;
    if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x210) + 0x58))();
        if (*(longlong **)(param_1 + 0x210) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x210) + 8))();
            *(undefined8 *)(param_1 + 0x210) = 0;
        }
    }
    if (param_2 != 8) {
        FUN_14053fd20(param_1);
    }
    FUN_14053ff40();
    if (((((param_2 - 6 & 0xfffffffd) != 0) &&
          (iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18),
                  (iVar1 - 2U & 0xfffffffa) == 0)) && (iVar1 != 3)) &&
        (((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
           (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) &&
          ((iVar1 != 6 || ((param_3 != 0 && (param_3 != *(int *)(param_1 + 0x154))))))))) {
        iVar1 = *(int *)(param_1 + 0x70);
        if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0x130);
        }
        FUN_1403bef30(DAT_140c65898,iVar1,1);
        FUN_1403bdac0();
    }
    if (param_2 != 7) {
        plVar7 = *(longlong **)(param_1 + 0x1c8);
        while (plVar7 != (longlong *)0x0) {
            plVar3 = (longlong *)plVar7[1];
            bVar5 = true;
            if ((((*(byte *)(plVar7 + 0x70) & 2) != 0) || (*(int *)(plVar7 + 0x79) == 3)) ||
                (((*(int *)(plVar7 + 0x79) == 2 &&
                   ((((short *)plVar7[0x68] == (short *)0x0 || (*(short *)plVar7[0x68] == 0)) &&
                     ((short *)plVar7[0x6e] != (short *)0x0)))) &&
                  ((*(short *)plVar7[0x6e] != 0 && ((*(int *)(plVar7 + 0x78) + 1U & 0xfffffffe) == 0)))))) {
                bVar5 = false;
            }
            if ((param_2 == 0x22) || (!bVar5)) {
                FUN_140624200(plVar7);
            }
            if ((longlong *)*plVar7 != (longlong *)0x0) {
                *(longlong *)*plVar7 = plVar7[1];
            }
            if ((longlong *)plVar7[1] != (longlong *)0x0) {
                *(longlong *)plVar7[1] = *plVar7;
            }
            *plVar7 = 0;
            plVar7[1] = 0;
            plVar7 = plVar3;
        }
    }
    lVar9 = *(longlong *)(param_1 + 0x48);
    while (lVar9 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x48);
        if (lVar9 != 0) {
            FUN_1407177b0(lVar9);
            FUN_14018b900(lVar9,0);
        }
        lVar9 = *(longlong *)(param_1 + 0x48);
    }
    if (lVar8 != 0) {
        lVar9 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar8 + 0x1600));
        if (((lVar9 == 0) && (*(longlong *)(DAT_140c65898 + 0x78) == lVar8)) &&
            (lVar8 = FUN_14039df50(), lVar9 = 0, lVar8 != 0)) {
            lVar9 = FUN_1404695e0();
        }
        if (((lVar9 == param_1) &&
             (iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18), iVar1 != 2))
            && (iVar1 != 7)) {
            FUN_1404698a0();
        }
    }
    if ((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
        (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        piVar6 = *(int **)(DAT_140c65898 + 0x6cd8);
        local_28 = param_1;
        local_20 = param_2;
        while (piVar6 != (int *)0x0) {
            piVar4 = *(int **)(piVar6 + 10);
            *(undefined8 *)(piVar6 + 0xc) = 0;
            *(longlong **)(piVar6 + 0xe) = &local_28;
            if (*piVar6 == 0) {
                (**(code **)(piVar6 + 4))();
            }
            else if (*piVar6 == 1) {
                (**(code **)(piVar6 + 4))(*(undefined8 *)(piVar6 + 2),*(undefined8 *)(piVar6 + 6));
            }
            *(undefined8 *)(piVar6 + 0xc) = 0;
            *(undefined8 *)(piVar6 + 0xe) = 0;
            piVar6 = piVar4;
        }
    }
    return;
}



void FUN_14053e5a0(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    undefined8 uVar12;
    undefined8 *puVar13;
    byte bVar14;
    int iVar15;
    undefined4 uVar16;
    longlong lVar17;
    longlong lVar18;
    longlong lVar19;
    ulonglong uVar20;
    undefined4 *puVar21;
    longlong lVar22;
    longlong *plVar23;
    ulonglong uVar24;
    longlong lVar25;
    uint *puVar26;
    ulonglong uVar27;
    bool bVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    ulonglong local_res18;
    longlong local_88;
    longlong local_78;
    longlong lStack112;

    lVar17 = *(longlong *)(param_1 + 0x138);
    iVar1 = *(int *)(*(longlong *)(lVar17 + 0x70) + 0x18);
    uVar2 = *(uint *)(param_1 + 0x1b0);
    if (((((uVar2 != 0xffffffff) && (uVar2 < *(uint *)(param_1 + 0x1a0))) &&
          (*(longlong *)(lVar17 + 0x58) != 0)) &&
         ((iVar15 = *(int *)(*(longlong *)(lVar17 + 0x70) + 0x18), iVar15 == 8 ||
                                                                   ((((iVar15 - 1U & 0xfffffffd) == 0 && (*(longlong *)(lVar17 + 0x50) != 0)) &&
                                                                     ((*(uint *)(*(longlong *)(lVar17 + 0x50) + 0xc) & 1) != 0)))))) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(lVar17 + 0x58) + 0x10) + (ulonglong)uVar2 * 4) & 0x40)
         != 0)) {
        puVar11 = *(undefined8 **)(param_1 + 0x48);
        while (puVar11 != (undefined8 *)0x0) {
            puVar10 = (undefined8 *)puVar11[5];
            uVar2 = *(uint *)(param_1 + 0x1b0);
            (**(code **)(*(longlong *)puVar11[7] + 8))();
            puVar11 = (undefined8 *)*puVar11;
            while (puVar13 = puVar11, puVar11 = puVar10, puVar13 != (undefined8 *)0x0) {
                puVar11 = (undefined8 *)puVar13[4];
                if (((uVar2 != 0xffffffff) && (*(uint *)(puVar13[0x16] + 0x1c) != 0xffffffff)) &&
                    ((*(uint *)(puVar13[0x16] + 0x1c) >> (uVar2 & 0x1f) & 1) == 0)) {
                    (**(code **)*puVar13)();
                }
            }
        }
    }
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    *(undefined4 *)(param_1 + 0x150) = 3;
    *(uint *)(param_1 + 0x1b0) = (uint)*(byte *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 4);
    local_res18 = 0;
    if (*(char *)(param_2 + 0x20) != '\0') {
        local_78 = param_1 + 0x350;
        local_88 = 0;
        do {
            puVar21 = (undefined4 *)(*(longlong *)(param_2 + 0x28) + local_88);
            uVar16 = *puVar21;
            uVar3 = puVar21[1];
            uVar4 = puVar21[2];
            uVar5 = puVar21[3];
            uVar6 = puVar21[4];
            uVar7 = puVar21[5];
            uVar8 = puVar21[6];
            puVar21 = (undefined4 *)FUN_14054dd00(local_78);
            *puVar21 = uVar16;
            puVar21[1] = uVar3;
            puVar21[2] = uVar4;
            puVar21[3] = uVar5;
            puVar21[4] = uVar6;
            puVar21[5] = uVar7;
            local_res18 = local_res18 + 1;
            local_88 = local_88 + 0x1c;
            puVar21[6] = uVar8;
        } while (local_res18 < *(byte *)(param_2 + 0x20));
    }
    bVar14 = 0;
    if (*(char *)(param_2 + 0x30) != '\0') {
        local_78 = param_1 + 0x370;
        do {
            lVar17 = *(longlong *)(param_2 + 0x38);
            lVar22 = (ulonglong)bVar14 * 0x20;
            uVar16 = *(undefined4 *)(lVar22 + lVar17);
            uVar3 = *(undefined4 *)(lVar22 + 8 + lVar17);
            uVar4 = *(undefined4 *)(lVar22 + 0xc + lVar17);
            uVar5 = *(undefined4 *)(lVar22 + 0x10 + lVar17);
            uVar6 = *(undefined4 *)(lVar22 + 0x14 + lVar17);
            uVar7 = *(undefined4 *)(lVar22 + 0x18 + lVar17);
            uVar8 = *(undefined4 *)(lVar22 + 0x1c + lVar17);
            uVar9 = *(undefined4 *)(lVar22 + 4 + lVar17);
            puVar21 = (undefined4 *)FUN_14054ddc0(local_78);
            *puVar21 = uVar16;
            puVar21[1] = uVar9;
            puVar21[2] = uVar3;
            puVar21[3] = uVar4;
            puVar21[4] = uVar5;
            puVar21[5] = uVar6;
            puVar21[6] = uVar7;
            puVar21[7] = uVar8;
            bVar14 = bVar14 + 1;
        } while (bVar14 < *(byte *)(param_2 + 0x30));
    }
    if (iVar1 == 8) {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x58);
        if ((lVar17 != 0) && (uVar2 = *(uint *)(param_1 + 0x1b0), uVar2 < *(uint *)(param_1 + 0x1a0))) {
            if ((*(uint *)(*(longlong *)(lVar17 + 0x10) + (ulonglong)uVar2 * 4) & 0x200) != 0) {
                *(undefined4 *)(param_1 + 0x14c) = 1;
            }
            uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x58) + 0x10) +
                              (ulonglong)uVar2 * 4);
            if ((uVar2 >> 10 & 1) == 0) {
                if ((uVar2 & 4) != 0) {
                    lVar17 = *(longlong *)(param_1 + 0x228);
                    while (lVar17 != 0) {
                        (**(code **)(**(longlong **)(param_1 + 0x228) + 0x20))();
                        lVar17 = *(longlong *)(param_1 + 0x228);
                    }
                }
            }
            else {
                lVar17 = *(longlong *)(param_1 + 0x228);
                while (lVar17 != 0) {
                    (**(code **)(**(longlong **)(param_1 + 0x228) + 0x50))(*(longlong **)(param_1 + 0x228),0);
                    lVar17 = *(longlong *)(param_1 + 0x228);
                }
            }
        }
    }
    lVar17 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    fVar31 = 0.0;
    if (lVar17 != 0) {
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
        if ((((*(int *)(lVar22 + 0x2c) == 0) || (*(int *)(lVar22 + 0x1c) == 0)) ||
             (*(int *)(lVar22 + 0x18) - 1U < 3)) ||
            ((*(int *)(lVar22 + 0x18) - 7U < 2 || (*(int *)(param_1 + 0x70) != 0)))) {
            lVar22 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar17 + 0x1600));
            if ((lVar22 == 0) && (lVar19 = *(longlong *)(DAT_140c65898 + 0x78), lVar19 == lVar17)) {
                if ((((lVar19 == 0) ||
                      (plVar23 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar19 + 0xc0)),
                              plVar23 == (longlong *)0x0)) ||
                     (iVar15 = (**(code **)(*plVar23 + 0x20))(), iVar15 == 0)) ||
                    (*(int *)(plVar23 + 0x10) != 3)) {
                    lVar22 = 0;
                }
                else {
                    lVar22 = FUN_1404695e0();
                }
            }
            lVar19 = DAT_140c65898;
            if ((((lVar22 == param_1) && (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50) == 0)) &&
                 (iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18),
                         iVar15 != 2)) && ((iVar15 != 7 && (iVar15 != 8)))) goto LAB_14053ea0f;
        }
        else {
            LAB_14053ea0f:
            lVar19 = DAT_140c65898;
            if (*(int *)(lVar17 + 0x1600) != 0) {
                *(undefined4 *)(lVar17 + 0x1600) = 0;
                if (*(int *)(lVar17 + 0x1624) == 0) {
                    *(undefined4 *)(lVar17 + 0x1620) = 0;
                    FUN_140195d70(lVar17 + 0x1628);
                    lVar19 = DAT_140c65898;
                }
                plVar23 = *(longlong **)(lVar17 + 0x1588);
                if (plVar23 != (longlong *)0x0) {
                    uVar16 = FUN_1400518a0(DAT_140c63628,0x26,2);
                    (**(code **)(*plVar23 + 0x50))(plVar23,uVar16);
                    lVar19 = DAT_140c65898;
                }
            }
        }
        if ((*(longlong *)(lVar19 + 0x78) == lVar17) || (*(longlong *)(lVar19 + 0x6490) == lVar17)) {
            bVar14 = *(byte *)(lVar19 + 0x6dec);
            if ((*(longlong *)(lVar19 + 0x78) != 0) && (bVar14 < 4)) {
                uVar20 = 0;
                plVar23 = (longlong *)(lVar19 + 0xac0 + (ulonglong)bVar14 * 0x180);
                do {
                    if ((*plVar23 != 0) &&
                        (*(int *)(*plVar23 + 0x118) ==
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 4))) {
                        lVar22 = *(longlong *)(lVar19 + 0xac0 + ((ulonglong)bVar14 * 0x30 + uVar20) * 8);
                        if (lVar22 != 0) {
                            FUN_1405caa90(uVar20,param_1,lVar22 + 0x1a0);
                            FUN_1405caa90();
                        }
                        break;
                    }
                    uVar20 = uVar20 + 1;
                    plVar23 = plVar23 + 1;
                } while (uVar20 < 0x30);
            }
        }
    }
    FUN_140546e60(param_1);
    FUN_140546c40(param_1);
    uVar20 = 0;
    lVar22 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (((lVar22 != 0) && (*(int *)(param_1 + 0x154) == *(int *)(lVar22 + 8))) &&
        (*(char *)(param_2 + 0x14) != '\0')) {
        FUN_14039c720(lVar22,8,*(int *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x130));
    }
    if (lVar17 == 0) goto LAB_14053ec53;
    if ((*(uint *)(param_1 + 400) == 1) || (iVar1 == 1)) {
        iVar15 = *(int *)(param_1 + 0x144);
        lVar22 = *(longlong *)(param_1 + 0x138);
        if (iVar1 == 1) {
            if (*(uint *)(param_1 + 400) < *(uint *)(param_1 + 0x1a0)) goto LAB_14053ec53;
            goto LAB_14053ebf1;
        }
        if ((iVar1 == 2) || (iVar1 == 6)) goto LAB_14053ec00;
        if (iVar1 == 7) {
            if (*(int *)(*(longlong *)(lVar22 + 0x70) + 0x184) != 0) goto LAB_14053ec53;
            lVar22 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(param_1 + 0x70));
            LAB_14053ebf1:
            if (iVar15 == 0) {
                FUN_14046b1e0(lVar17,lVar22);
            }
            goto LAB_14053ec00;
        }
        if (iVar1 != 8) goto LAB_14053ebf1;
    }
    else {
        LAB_14053ec00:
        if (iVar1 != 8) goto LAB_14053ec53;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x58) != 0) &&
        (((*(uint *)(param_1 + 0x1b0) == 0 && (*(int *)(param_1 + 0x148) != 0)) ||
          ((*(int *)(param_1 + 0x1a0) - 1U <= *(uint *)(param_1 + 0x1b0) &&
            ((*(int *)(param_1 + 0x144) == 0 && (*(int *)(param_1 + 0x14c) != 0)))))))) {
        FUN_14046b1e0(lVar17);
    }
    LAB_14053ec53:
    *(undefined (*) [16])(param_1 + 0x180) = CONCAT412(fVar31,*(undefined (*) [12])(param_2 + 8));
    uVar24 = uVar20;
    uVar27 = uVar20;
    fVar32 = fVar31;
    if (*(char *)(param_2 + 0x14) != '\0') {
        do {
            puVar26 = (uint *)(*(longlong *)(param_2 + 0x18) + uVar27);
            uVar2 = *puVar26;
            lVar17 = FUN_1403d90d0(DAT_140c65898,uVar2);
            if (lVar17 != 0) {
                FUN_14053d680(param_1,puVar26);
                lVar22 = *(longlong *)(DAT_140c65898 + 0x6490);
                if ((((lVar22 != 0) && (uVar2 == *(uint *)(lVar22 + 8))) &&
                     ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) & 0x4000000)
                      == 0)) &&
                    ((*(int *)(lVar22 + 0x108) == 0 && (*(uint *)(param_1 + 0x154) != *(uint *)(lVar22 + 8)))
                    )) {
                    uVar24 = (ulonglong)*(uint *)(param_1 + 0x154);
                }
                iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x7c);
                if (((iVar1 - 2U < 3) || (iVar1 - 7U < 2)) &&
                    ((((lVar22 != 0 &&
                        (((*(int *)(lVar22 + 0x108) == 0 && (lVar22 != 0)) &&
                          (*(uint *)(param_1 + 0x154) == *(uint *)(lVar22 + 8))))) &&
                       (uVar2 != *(uint *)(param_1 + 0x154))) &&
                      ((fVar29 = *(float *)(lVar17 + 0x11e0) - *(float *)(lVar22 + 0x11e0),
                        fVar30 = *(float *)(lVar17 + 0x11e4) - *(float *)(lVar22 + 0x11e4),
                        fVar29 = fVar29 * fVar29 + fVar30 * fVar30 + 0.0, fVar31 == fVar32 || (fVar29 < fVar31)
                      ))))) {
                    uVar24 = (ulonglong)uVar2;
                    fVar31 = fVar29;
                }
            }
            uVar20 = uVar20 + 1;
            uVar27 = uVar27 + 0x18;
        } while (uVar20 < *(byte *)(param_2 + 0x14));
        if ((int)uVar24 != 0) {
            iVar1 = DAT_140c45ec0;
            if (*DAT_140c63750 < DAT_140c45ec0) {
                iVar1 = *DAT_140c63750;
            }
            if ((&DAT_140c45ed0)[iVar1] == '\0') {
                FUN_14055b0e0(DAT_140c65898,uVar24);
            }
        }
    }
    FUN_1405450f0(param_1);
    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x7c) == 5) {
        FUN_140546360();
    }
    else {
        FUN_140546060(param_1);
    }
    FUN_140541130(param_1);
    if ((((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x108) & 0x800) != 0) &&
         (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
        (*(int *)(param_1 + 0x154) == *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) {
        FUN_14039daf0();
    }
    uVar2 = *(uint *)(param_1 + 0x348);
    lVar17 = *(longlong *)(DAT_140c65b70 + 0x658);
    bVar28 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8;
    lVar22 = *(longlong *)(lVar17 + 8);
    lVar19 = lVar22;
    lVar25 = lVar17;
    if (lVar22 != 0) {
        do {
            if (bVar28) {
                if (*(int *)(lVar19 + 0x20) != 0) goto LAB_14053ef08;
                LAB_14053ef3a:
                lVar18 = *(longlong *)(lVar19 + 0x18);
            }
            else if (*(int *)(lVar19 + 0x20) == 0) {
                LAB_14053ef08:
                if ((*(uint *)(lVar19 + 0x24) <= uVar2) &&
                    ((*(uint *)(lVar19 + 0x24) < uVar2 ||
                      ((*(int *)(lVar19 + 0x28) < 8 &&
                        ((*(int *)(lVar19 + 0x28) < 7 ||
                          ((*(int *)(lVar19 + 0x2c) < 3 &&
                            ((*(int *)(lVar19 + 0x2c) < 2 || (*(int *)(lVar19 + 0x30) == 0))))))))))))
                    goto LAB_14053ef3a;
                lVar18 = *(longlong *)(lVar19 + 0x10);
                lVar25 = lVar19;
            }
            else {
                lVar18 = *(longlong *)(lVar19 + 0x10);
                lVar25 = lVar19;
            }
            lVar19 = lVar18;
        } while (lVar18 != 0);
        while (lVar22 != 0) {
            if (*(int *)(lVar22 + 0x20) == 0) {
                if (!bVar28) {
                    LAB_14053ef58:
                    if ((uVar2 <= *(uint *)(lVar22 + 0x24)) &&
                        ((uVar2 < *(uint *)(lVar22 + 0x24) ||
                          ((6 < *(int *)(lVar22 + 0x28) &&
                            ((7 < *(int *)(lVar22 + 0x28) || (1 < *(int *)(lVar22 + 0x2c)))))))))
                        goto LAB_14053ef79;
                }
                lVar22 = *(longlong *)(lVar22 + 0x18);
            }
            else {
                if (bVar28) goto LAB_14053ef58;
                LAB_14053ef79:
                lVar17 = lVar22;
                lVar22 = *(longlong *)(lVar22 + 0x10);
            }
        }
    }
    local_78 = lVar17;
    lStack112 = lVar25;
    for (lVar22 = *(longlong *)(param_1 + 0x1c8); lVar22 != 0; lVar22 = *(longlong *)(lVar22 + 8)) {
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        if (((char)*(uint *)(lVar22 + 0x380) < '\0') && ((*(uint *)(lVar22 + 0x380) >> 9 & 1) == 0)) {
            FUN_140622a40(lVar22);
            FUN_140621c30(lVar22);
            *(undefined4 *)(lVar22 + 0x260) = 1;
        }
        FUN_1406215d0(lVar22,uVar12);
        while (lVar17 != lVar25) {
            FUN_1400293c0(lVar22 + 0x620,&local_78,*(longlong *)(lVar17 + 0x38) + 0x18);
            lVar19 = *(longlong *)(lVar17 + 0x18);
            if (lVar19 == 0) {
                lVar19 = *(longlong *)(lVar17 + 8);
                if (lVar17 == *(longlong *)(lVar19 + 0x18)) {
                    do {
                        lVar17 = lVar19;
                        lVar19 = *(longlong *)(lVar17 + 8);
                    } while (lVar17 == *(longlong *)(lVar19 + 0x18));
                }
                if (*(longlong *)(lVar17 + 0x18) != lVar19) {
                    lVar17 = lVar19;
                }
            }
            else {
                for (lVar18 = *(longlong *)(lVar19 + 0x10); lVar17 = lVar19, lVar18 != 0;
                     lVar18 = *(longlong *)(lVar18 + 0x10)) {
                    lVar19 = lVar18;
                }
            }
        }
    }
    return;
}



void FUN_14053f340(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;

    lVar2 = *(longlong *)(param_1 + 0x48);
    if (lVar2 != 0) {
        while (*(int *)(lVar2 + 0x40) != *(int *)(param_2 + 8)) {
            lVar2 = *(longlong *)(lVar2 + 0x28);
            if (lVar2 == 0) {
                return;
            }
        }
        plVar3 = *(longlong **)(lVar2 + 8);
        if (plVar3 != (longlong *)0x0) {
            while (iVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), iVar1 != *(int *)(param_2 + 4)) {
                plVar3 = (longlong *)plVar3[2];
                if (plVar3 == (longlong *)0x0) {
                    return;
                }
            }
            uVar5 = 0;
            if (*(char *)(param_2 + 0xc) != '\0') {
                do {
                    (**(code **)(*plVar3 + 8))(plVar3,uVar5 * 0x38 + *(longlong *)(param_2 + 0x10),0);
                    uVar4 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar4;
                } while (uVar4 < *(byte *)(param_2 + 0xc));
            }
        }
    }
    return;
}



void FUN_14053f3f0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    int *piVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined **local_c8;
    undefined4 local_c0;
    undefined4 local_bc;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    int local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    int local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    int local_78;
    int local_74;
    undefined4 local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined local_40;
    undefined4 local_30;
    undefined4 local_2c;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;

    lVar5 = DAT_140c65b70;
    local_74 = *(int *)(param_2 + 0xc);
    local_78 = *(int *)(param_2 + 8);
    local_1c = 0;
    local_44 = *(undefined4 *)(param_2 + 0x34);
    uVar8 = 0;
    local_68 = *(undefined4 *)(param_2 + 0x10);
    local_64 = *(undefined4 *)(param_2 + 0x14);
    local_60 = *(undefined4 *)(param_2 + 0x18);
    local_40 = 0;
    local_5c = *(undefined4 *)(param_2 + 0x1c);
    local_58 = *(undefined4 *)(param_2 + 0x20);
    local_54 = *(undefined4 *)(param_2 + 0x24);
    local_70 = 8;
    local_50 = *(undefined4 *)(param_2 + 0x28);
    local_4c = 0;
    local_30 = *(undefined4 *)(param_1 + 0x130);
    local_48 = 2;
    local_2c = *(undefined4 *)(param_2 + 4);
    local_20 = 0;
    local_28 = *(undefined8 *)(param_1 + 0x198);
    lVar7 = *(longlong *)(DAT_140c65898 + 0x78);
    if (((((lVar7 == 0) || (*(int *)(lVar7 + 8) != local_74)) &&
          ((lVar3 = *(longlong *)(DAT_140c65898 + 0x6490), lVar3 == 0 ||
                                                           (*(int *)(lVar3 + 8) != local_74)))) && ((lVar7 == 0 || (*(int *)(lVar7 + 8) != local_78))))
        && ((lVar3 == 0 || (*(int *)(lVar3 + 8) != local_78)))) {
        if (lVar7 != 0) {
            uVar4 = *(ulonglong *)(lVar7 + 0x2c0);
            if (uVar4 != 0) {
                piVar6 = *(int **)(lVar7 + 0x2b8);
                uVar9 = uVar8;
                do {
                    if (*piVar6 == local_74) goto LAB_14053f527;
                    uVar9 = uVar9 + 1;
                    piVar6 = piVar6 + 1;
                } while (uVar9 < uVar4);
            }
            if (uVar4 != 0) {
                piVar6 = *(int **)(lVar7 + 0x2b8);
                uVar9 = uVar8;
                do {
                    if (*piVar6 == local_78) goto LAB_14053f527;
                    uVar9 = uVar9 + 1;
                    piVar6 = piVar6 + 1;
                } while (uVar9 < uVar4);
            }
        }
    }
    else {
        LAB_14053f527:
        lVar7 = FUN_14018b280(0xc0,0);
        if (lVar7 != 0) {
            uVar8 = FUN_140567380(lVar7,&local_78);
        }
        puVar2 = (ulonglong *)(lVar5 + 2000);
        if (*(longlong *)(uVar8 + 0x68) == 0) {
            *(ulonglong **)(uVar8 + 0x68) = puVar2;
            puVar1 = (ulonglong *)(uVar8 + 0x70);
            *puVar1 = *puVar2;
            *puVar2 = uVar8;
            if (*puVar1 != 0) {
                *(ulonglong **)(*puVar1 + 0x68) = puVar1;
            }
        }
        FUN_140563ad0(lVar5,uVar8);
    }
    local_c0 = *(undefined4 *)(param_2 + 0xc);
    local_9c = *(int *)(param_2 + 0x24);
    local_bc = 5;
    local_b8 = *(undefined4 *)(param_2 + 8);
    local_b0 = 2;
    local_c8 = &PTR_FUN_140b6f730;
    local_b4 = *(undefined4 *)(param_1 + 0x130);
    local_88 = 8;
    local_a8 = *(int *)(param_2 + 0x20) - local_9c;
    local_a4 = *(undefined4 *)(param_2 + 0x10);
    local_a0 = *(undefined4 *)(param_2 + 0x1c);
    local_98 = *(undefined4 *)(param_2 + 0x28);
    local_94 = *(undefined4 *)(param_2 + 0x18);
    local_90 = *(undefined4 *)(param_2 + 0x2c);
    local_8c = *(undefined4 *)(param_2 + 0x34);
    FUN_14060b2b0(&local_c8);
    return;
}



void FUN_14053fbf0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    if (lVar3 != 0) {
        if (*(longlong *)(param_1 + 8) == 0) {
            plVar2 = (longlong *)(lVar3 + 0x15c0);
            plVar1 = (longlong *)(param_1 + 0x10);
            *(longlong **)(param_1 + 8) = plVar2;
            *plVar1 = *plVar2;
            *plVar2 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 8) = plVar1;
            }
        }
        if (((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x108) & 0x4000000) != 0)
            && (*(longlong *)(param_1 + 0x18) == 0)) {
            plVar2 = (longlong *)(lVar3 + 0x15f8);
            plVar1 = (longlong *)(param_1 + 0x20);
            *(longlong **)(param_1 + 0x18) = plVar2;
            *plVar1 = *plVar2;
            *plVar2 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x18) = plVar1;
            }
            FUN_140466e60(lVar3);
            return;
        }
    }
    return;
}



bool FUN_14053fca0(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
    if (*(uint *)(lVar2 + 0x24) < 2) {
        iVar1 = *(int *)(lVar2 + 0x18);
        if (iVar1 == 7) {
            if ((((*(int *)(lVar2 + 0x18) - 2U & 0xfffffffa) == 0) && (*(int *)(lVar2 + 0x18) != 3)) &&
                (*(int *)(lVar2 + 0x184) == 0)) {
                return false;
            }
        }
        else if (iVar1 == 8) {
            if (*(int *)(param_1 + 0x148) != iVar1 + -8) {
                return *(int *)(param_1 + 400) == 0;
            }
            if (*(int *)(param_1 + 0x14c) == 0) {
                return true;
            }
            return false;
        }
        if (*(int *)(param_1 + 400) == 0) {
            return true;
        }
    }
    return false;
}



void FUN_14053fd20(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *local_res8;
    longlong *local_res10;
    longlong *local_res18 [2];

    pplVar2 = (longlong **)(param_1 + 0x228);
    local_res8 = *pplVar2;
    *pplVar2 = (longlong *)0x0;
    if (local_res8 != (longlong *)0x0) {
        local_res8[1] = (longlong)&local_res8;
        while (local_res8 != (longlong *)0x0) {
            if ((longlong *)local_res8[1] != (longlong *)0x0) {
                *(longlong *)local_res8[1] = local_res8[2];
            }
            pplVar1 = (longlong **)(local_res8 + 2);
            if (local_res8[2] != 0) {
                *(longlong *)(local_res8[2] + 8) = local_res8[1];
            }
            *pplVar1 = (longlong *)0x0;
            local_res8[1] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = local_res8;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[1] = (longlong)pplVar1;
            }
            (**(code **)(*local_res8 + 0x50))(local_res8,0);
        }
    }
    pplVar2 = (longlong **)(param_1 + 0x218);
    local_res10 = *pplVar2;
    *pplVar2 = (longlong *)0x0;
    if (local_res10 != (longlong *)0x0) {
        local_res10[1] = (longlong)&local_res10;
        while (local_res10 != (longlong *)0x0) {
            if ((longlong *)local_res10[1] != (longlong *)0x0) {
                *(longlong *)local_res10[1] = local_res10[2];
            }
            pplVar1 = (longlong **)(local_res10 + 2);
            if (local_res10[2] != 0) {
                *(longlong *)(local_res10[2] + 8) = local_res10[1];
            }
            *pplVar1 = (longlong *)0x0;
            local_res10[1] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = local_res10;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[1] = (longlong)pplVar1;
            }
            (**(code **)(*local_res10 + 0x50))(local_res10,0);
        }
    }
    pplVar2 = (longlong **)(param_1 + 0x230);
    local_res18[0] = *pplVar2;
    *pplVar2 = (longlong *)0x0;
    if (local_res18[0] != (longlong *)0x0) {
        local_res18[0][1] = (longlong)local_res18;
        while (plVar4 = local_res18[0], local_res18[0] = plVar4, plVar4 != (longlong *)0x0) {
            if ((longlong *)plVar4[1] != (longlong *)0x0) {
                *(longlong *)plVar4[1] = plVar4[2];
            }
            pplVar1 = (longlong **)(plVar4 + 2);
            if (plVar4[2] != 0) {
                *(longlong *)(plVar4[2] + 8) = plVar4[1];
            }
            *pplVar1 = (longlong *)0x0;
            plVar4[1] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[1] = (longlong)pplVar1;
            }
            lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if (*(int *)(lVar5 + 0x4c) != 0) {
                (**(code **)(*plVar4 + 0x50))(plVar4,0);
            }
        }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x238);
    while (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        puVar3 = *(undefined8 **)(param_1 + 0x238);
    }
    if (local_res18[0] != (longlong *)0x0) {
        FUN_1401a4a00(local_res18);
    }
    if (local_res10 != (longlong *)0x0) {
        FUN_1401a4a00(&local_res10);
    }
    if (local_res8 != (longlong *)0x0) {
        FUN_1401a4a00(&local_res8);
    }
    return;
}



void FUN_14053ff40(longlong param_1,undefined4 param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 0x220);
    while (lVar3 != 0) {
        FUN_140454090(*(undefined8 *)(param_1 + 0x220));
        lVar3 = *(longlong *)(param_1 + 0x220);
    }
    lVar3 = *(longlong *)(param_1 + 0x218);
    while (lVar3 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x218) + 0x20))();
        lVar3 = *(longlong *)(param_1 + 0x218);
    }
    lVar3 = *(longlong *)(param_1 + 0x228);
    while (lVar3 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x228) + 0x20))();
        lVar3 = *(longlong *)(param_1 + 0x228);
    }
    lVar3 = *(longlong *)(param_1 + 0x230);
    while (lVar3 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x230) + 0x20))();
        lVar3 = *(longlong *)(param_1 + 0x230);
    }
    lVar3 = *(longlong *)(param_1 + 0x238);
    while (lVar3 != 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x238);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
        lVar3 = *(longlong *)(param_1 + 0x238);
    }
    FUN_140546730(param_1,param_2);
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
        if (*(longlong *)(param_1 + 0x20) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x18);
        }
        uVar2 = DAT_140c65898;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        lVar3 = FUN_1403d90d0(uVar2,*(undefined4 *)(param_1 + 0x154));
        if (lVar3 != 0) {
            FUN_140466e60(lVar3);
        }
    }
    return;
}



void FUN_140540070(longlong param_1,int param_2,int param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    int iVar6;
    longlong lVar7;
    longlong *local_res20;
    longlong *local_38;
    longlong *local_30;

    if (param_2 != 0) {
        pplVar2 = (longlong **)(param_1 + 0x228);
        local_res20 = *pplVar2;
        *pplVar2 = (longlong *)0x0;
        if (local_res20 != (longlong *)0x0) {
            local_res20[1] = (longlong)&local_res20;
            while (plVar4 = local_res20, local_res20 = plVar4, plVar4 != (longlong *)0x0) {
                if ((longlong *)plVar4[1] != (longlong *)0x0) {
                    *(longlong *)plVar4[1] = plVar4[2];
                }
                pplVar1 = (longlong **)(plVar4 + 2);
                if (plVar4[2] != 0) {
                    *(longlong *)(plVar4[2] + 8) = plVar4[1];
                }
                *pplVar1 = (longlong *)0x0;
                plVar4[1] = (longlong)pplVar2;
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar4;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
                if (((param_3 == 0) ||
                     (lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4), *(int *)(lVar7 + 0x48) == 0)) &&
                    (iVar6 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar6 == param_2)) {
                    (**(code **)(*plVar4 + 0x50))(plVar4,0);
                }
            }
        }
        pplVar2 = (longlong **)(param_1 + 0x218);
        local_38 = *pplVar2;
        *pplVar2 = (longlong *)0x0;
        if (local_38 != (longlong *)0x0) {
            local_38[1] = (longlong)&local_38;
            while (plVar4 = local_38, local_38 = plVar4, plVar4 != (longlong *)0x0) {
                if ((longlong *)plVar4[1] != (longlong *)0x0) {
                    *(longlong *)plVar4[1] = plVar4[2];
                }
                pplVar1 = (longlong **)(plVar4 + 2);
                if (plVar4[2] != 0) {
                    *(longlong *)(plVar4[2] + 8) = plVar4[1];
                }
                *pplVar1 = (longlong *)0x0;
                plVar4[1] = (longlong)pplVar2;
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar4;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
                if (((param_3 == 0) ||
                     (lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4), *(int *)(lVar7 + 0x48) == 0)) &&
                    (iVar6 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar6 == param_2)) {
                    (**(code **)(*plVar4 + 0x50))(plVar4,0);
                }
            }
        }
        pplVar2 = (longlong **)(param_1 + 0x230);
        local_30 = *pplVar2;
        *pplVar2 = (longlong *)0x0;
        if (local_30 != (longlong *)0x0) {
            local_30[1] = (longlong)&local_30;
            while (plVar4 = local_30, local_30 = plVar4, plVar4 != (longlong *)0x0) {
                if ((longlong *)plVar4[1] != (longlong *)0x0) {
                    *(longlong *)plVar4[1] = plVar4[2];
                }
                pplVar1 = (longlong **)(plVar4 + 2);
                if (plVar4[2] != 0) {
                    *(longlong *)(plVar4[2] + 8) = plVar4[1];
                }
                *pplVar1 = (longlong *)0x0;
                plVar4[1] = (longlong)pplVar2;
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar4;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
                if (((param_3 == 0) ||
                     (lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4), *(int *)(lVar7 + 0x48) == 0)) &&
                    ((lVar7 = (**(code **)(*plVar4 + 0x10))(plVar4), *(int *)(lVar7 + 0x4c) != 0 &&
                                                                     (iVar6 = (**(code **)(*plVar4 + 0x38))(plVar4), iVar6 == param_2)))) {
                    (**(code **)(*plVar4 + 0x50))(plVar4,0);
                }
            }
        }
        puVar3 = *(undefined8 **)(param_1 + 0x238);
        while (puVar5 = puVar3, puVar5 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)puVar5[4];
            if (*(int *)((longlong)puVar5 + 0x2c) == param_2) {
                (**(code **)*puVar5)(puVar5,1);
            }
        }
        if (local_30 != (longlong *)0x0) {
            FUN_1401a4a00(&local_30);
        }
        if (local_38 != (longlong *)0x0) {
            FUN_1401a4a00(&local_38);
        }
        if (local_res20 != (longlong *)0x0) {
            FUN_1401a4a00(&local_res20);
        }
    }
    return;
}



undefined8 FUN_140540360(longlong param_1,int param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    if (param_2 == 0) {
        return 0;
    }
    for (plVar1 = *(longlong **)(param_1 + 0x228); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
        if (iVar3 == param_2) {
            return 1;
        }
    }
    for (plVar1 = *(longlong **)(param_1 + 0x218); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
        if (iVar3 == param_2) {
            return 1;
        }
    }
    for (plVar1 = *(longlong **)(param_1 + 0x230); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
        if (iVar3 == param_2) {
            return 1;
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x238);
    while( true ) {
        if (lVar2 == 0) {
            return 0;
        }
        if (*(int *)(lVar2 + 0x2c) == param_2) break;
        lVar2 = *(longlong *)(lVar2 + 0x20);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140540430(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    int iVar10;
    bool bVar11;
    undefined4 uVar12;
    uint local_res8;
    ulonglong local_res10;
    undefined local_98 [16];
    uint local_88;
    int iStack132;
    longlong lStack128;
    undefined4 local_78;
    uint local_68;
    undefined4 local_64;
    int *local_60;
    undefined *local_58;
    int *local_50;

    iStack132 = *(int *)(param_1 + 0x348);
    if (iStack132 != 0) {
        local_88 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
        lStack128 = 0;
        local_78 = 0;
        FUN_1405663f0(DAT_140c65b70 + 0x650,local_98);
        uVar12 = 0;
        while (local_98._0_8_ != local_98._8_8_) {
            lVar3 = *(longlong *)(local_98._0_8_ + 0x38);
            if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x10) & 0x100) == 0)) {
                FUN_140543630(param_1,0,lVar3,*(undefined4 *)(param_1 + 0x154),0,0,0,0,uVar12,0);
            }
            lVar3 = *(longlong *)(local_98._0_8_ + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(local_98._0_8_ + 8);
                if (local_98._0_8_ == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        local_98._0_8_ = lVar3;
                        lVar3 = *(longlong *)(local_98._0_8_ + 8);
                    } while (local_98._0_8_ == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(local_98._0_8_ + 0x18) != lVar3) {
                    local_98._0_8_ = lVar3;
                }
            }
            else {
                for (lVar7 = *(longlong *)(lVar3 + 0x10); local_98._0_8_ = lVar3, lVar7 != 0;
                     lVar7 = *(longlong *)(lVar7 + 0x10)) {
                    lVar3 = lVar7;
                }
            }
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
        uVar1 = *(uint *)(lVar3 + 0x7c);
        if (((uVar1 < 8) && ((0x85U >> (uVar1 & 0x1f) & 1) != 0)) ||
            ((*(int *)(lVar3 + 0x18) == 3 &&
              ((*(int *)(lVar3 + 0x9c) == 0 && ((uVar1 - 4 & 0xfffffffb) == 0)))))) {
            local_64 = *(undefined4 *)(param_1 + 0x348);
            local_68 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
            local_60 = (int *)0x1;
            local_58 = (undefined *)((ulonglong)local_58 & 0xffffffff00000000);
            FUN_1405663f0(DAT_140c65b70 + 0x650);
            lVar7 = lStack128;
            local_98 = CONCAT88(lStack128,CONCAT44(iStack132,local_88));
            lVar3 = CONCAT44(iStack132,local_88);
            while (lVar3 != lVar7) {
                if ((*(longlong *)(lVar3 + 0x38) != 0) &&
                    ((*(uint *)(*(longlong *)(lVar3 + 0x38) + 0x10) & 0x100) == 0)) {
                    FUN_140543630(param_1);
                }
                lVar4 = *(longlong *)(lVar3 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar3 + 8);
                    if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar3 = lVar4;
                            lVar4 = *(longlong *)(lVar3 + 8);
                        } while (lVar3 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar3 + 0x18) != lVar4) {
                        lVar3 = lVar4;
                    }
                }
                else {
                    for (lVar9 = *(longlong *)(lVar4 + 0x10); lVar3 = lVar4, lVar9 != 0;
                         lVar9 = *(longlong *)(lVar9 + 0x10)) {
                        lVar4 = lVar9;
                    }
                }
            }
        }
        local_res10 = 0;
        do {
            if (local_res10 != 2) {
                local_res8 = 0;
                do {
                    uVar1 = *(uint *)(param_1 + 0x348);
                    lVar3 = *(longlong *)(DAT_140c65b70 + 0x658);
                    bVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8;
                    lVar7 = *(longlong *)(lVar3 + 8);
                    iVar10 = (int)local_res10;
                    lVar4 = lVar7;
                    lVar9 = lVar3;
                    if (lVar7 != 0) {
                        do {
                            if (bVar11) {
                                if (*(int *)(lVar4 + 0x20) != 0) goto LAB_14054070a;
                                LAB_140540736:
                                lVar6 = *(longlong *)(lVar4 + 0x18);
                            }
                            else if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_14054070a:
                                if ((*(uint *)(lVar4 + 0x24) <= uVar1) &&
                                    ((*(uint *)(lVar4 + 0x24) < uVar1 ||
                                      ((*(int *)(lVar4 + 0x28) <= iVar10 &&
                                        ((*(int *)(lVar4 + 0x28) < iVar10 ||
                                          ((*(int *)(lVar4 + 0x2c) < 3 &&
                                            ((*(int *)(lVar4 + 0x2c) < 2 || (*(uint *)(lVar4 + 0x30) <= local_res8)))))))
                                      ))))) goto LAB_140540736;
                                lVar6 = *(longlong *)(lVar4 + 0x10);
                                lVar9 = lVar4;
                            }
                            else {
                                lVar6 = *(longlong *)(lVar4 + 0x10);
                                lVar9 = lVar4;
                            }
                            lVar4 = lVar6;
                        } while (lVar6 != 0);
                        while (lVar7 != 0) {
                            if (*(int *)(lVar7 + 0x20) == 0) {
                                if (!bVar11) {
                                    LAB_140540756:
                                    if ((uVar1 <= *(uint *)(lVar7 + 0x24)) &&
                                        ((uVar1 < *(uint *)(lVar7 + 0x24) ||
                                          ((iVar10 <= *(int *)(lVar7 + 0x28) &&
                                            ((iVar10 < *(int *)(lVar7 + 0x28) ||
                                              ((1 < *(int *)(lVar7 + 0x2c) &&
                                                ((2 < *(int *)(lVar7 + 0x2c) || (local_res8 <= *(uint *)(lVar7 + 0x30))))))
                                            ))))))) goto LAB_14054077f;
                                }
                                lVar7 = *(longlong *)(lVar7 + 0x18);
                            }
                            else {
                                if (bVar11) goto LAB_140540756;
                                LAB_14054077f:
                                lVar3 = lVar7;
                                lVar7 = *(longlong *)(lVar7 + 0x10);
                            }
                        }
                    }
                    local_88 = (uint)lVar3;
                    iStack132 = (int)((ulonglong)lVar3 >> 0x20);
                    local_98 = CONCAT88(lVar9,lVar3);
                    lStack128 = lVar9;
                    while (lVar3 != lVar9) {
                        lVar7 = *(longlong *)(lVar3 + 0x38);
                        if ((lVar7 != 0) && (uVar1 = *(uint *)(lVar7 + 0x84), uVar1 != 0)) {
                            uVar2 = FUN_140540b30(param_1,local_res8);
                            if ((uVar2 == 0) &&
                                (((*(int *)(lVar7 + 8) == 2 &&
                                   (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) != 8)) &&
                                  (*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50) == 0)))) {
                                uVar2 = *(uint *)(param_1 + 0x50);
                            }
                            iVar8 = 0;
                            if (uVar1 <= uVar2) {
                                iVar8 = uVar2 - uVar1;
                            }
                            piVar5 = (int *)FUN_14018b280(0x60);
                            local_50 = piVar5;
                            if (piVar5 != (int *)0x0) {
                                *(undefined8 *)(piVar5 + 8) = 0;
                                *(undefined8 *)(piVar5 + 10) = 0;
                                *(undefined8 *)(piVar5 + 0xe) = 0;
                                *(undefined8 *)(piVar5 + 0x10) = 0;
                                piVar5[4] = 0x544e5645;
                                piVar5[0x15] = 0;
                                local_50 = (int *)0x0;
                            }
                            local_58 = &LAB_14053c4f0;
                            local_68 = (uint)local_50;
                            local_60 = piVar5;
                            FUN_140195960(piVar5 + 4,iVar8,&local_68);
                            *piVar5 = iVar10;
                            piVar5[1] = local_res8;
                            *(longlong *)(piVar5 + 0x16) = param_1;
                            *(longlong *)(piVar5 + 2) = lVar7;
                            lVar4 = *(longlong *)(param_1 + 0x1c0);
                            lVar7 = lVar4 + 1;
                            lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0x1b8),lVar7);
                            *(int **)(lVar6 + lVar4 * 8) = piVar5;
                            if (*(longlong *)(param_1 + 0x1b8) != lVar6) {
                                FUN_1407db590(lVar6);
                                lVar4 = *(longlong *)(param_1 + 0x1b8);
                                if (lVar4 != 0) {
                                    (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                                }
                                *(longlong *)(param_1 + 0x1b8) = lVar6;
                            }
                            *(longlong *)(param_1 + 0x1c0) = lVar7;
                        }
                        lVar7 = *(longlong *)(lVar3 + 0x18);
                        if (lVar7 == 0) {
                            lVar7 = *(longlong *)(lVar3 + 8);
                            if (lVar3 == *(longlong *)(lVar7 + 0x18)) {
                                do {
                                    lVar3 = lVar7;
                                    lVar7 = *(longlong *)(lVar3 + 8);
                                } while (lVar3 == *(longlong *)(lVar7 + 0x18));
                            }
                            if (*(longlong *)(lVar3 + 0x18) != lVar7) {
                                lVar3 = lVar7;
                            }
                        }
                        else {
                            for (lVar4 = *(longlong *)(lVar7 + 0x10); lVar3 = lVar7, lVar4 != 0;
                                 lVar4 = *(longlong *)(lVar4 + 0x10)) {
                                lVar7 = lVar4;
                            }
                        }
                    }
                    local_res8 = local_res8 + 1;
                } while (local_res8 < 0x20);
            }
            local_res10 = local_res10 + 1;
        } while (local_res10 < 8);
    }
    return;
}



void FUN_1405409a0(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    undefined4 uVar5;

    iVar3 = *param_2;
    if (iVar3 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x154);
        uVar4 = *(undefined8 *)(param_2 + 2);
        iVar3 = 0;
        uVar1 = uVar5;
    }
    else if (iVar3 == 1) {
        uVar5 = *(undefined4 *)(param_1 + 0x154);
        uVar4 = *(undefined8 *)(param_2 + 2);
        iVar3 = 1;
        uVar1 = *(undefined4 *)(param_1 + 0x158);
    }
    else if (iVar3 == 3) {
        uVar5 = *(undefined4 *)(param_1 + 0x154);
        uVar4 = *(undefined8 *)(param_2 + 2);
        iVar3 = 3;
        uVar1 = uVar5;
    }
    else {
        if (iVar3 == 4) {
            FUN_1405428d0(param_1,*(undefined8 *)(param_2 + 2),2);
            return;
        }
        if (iVar3 == 5) {
            lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
            if (lVar2 == 0) {
                return;
            }
            uVar5 = *(undefined4 *)(param_1 + 0x154);
            uVar1 = *(undefined4 *)(lVar2 + 0xc0);
        }
        else {
            if (iVar3 != 6) {
                return;
            }
            lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
            if (lVar2 == 0) {
                return;
            }
            uVar1 = FUN_14045b6b0(lVar2);
            uVar5 = *(undefined4 *)(param_1 + 0x154);
        }
        iVar3 = *param_2;
        uVar4 = *(undefined8 *)(param_2 + 2);
    }
    FUN_140543630(param_1,iVar3,uVar4,uVar1,2,0,uVar5,0,0,0);
    return;
}



uint FUN_140540b30(longlong param_1,uint param_2)

{
    longlong lVar1;
    int **ppiVar2;
    uint uVar3;
    int *piVar4;
    ulonglong uVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    int *piVar10;

    piVar10 = (int *)(ulonglong)param_2;
    lVar1 = *(longlong *)(param_1 + 0x138);
    iVar6 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x18);
    if ((iVar6 == 1) || (iVar6 == 3)) {
        piVar10 = *(int **)(lVar1 + 0x50);
        if ((piVar10 != (int *)0x0) && ((*(byte *)(piVar10 + 3) & 1) != 0)) {
            uVar3 = piVar10[2] * param_2 + *piVar10;
            if ((uint)piVar10[1] < uVar3) {
                uVar3 = piVar10[1];
            }
            return uVar3;
        }
        return 0;
    }
    if (iVar6 != 8) {
        return 0;
    }
    ppiVar2 = *(int ***)(lVar1 + 0x58);
    if (ppiVar2 == (int **)0x0) {
        return 0;
    }
    if (*(uint *)(param_1 + 0x1a0) <= param_2) {
        return 0;
    }
    iVar6 = 0;
    if (ppiVar2[1] <= piVar10) {
        return 0;
    }
    iVar8 = 0;
    iVar9 = 0;
    piVar7 = (int *)0x0;
    if (1 < (longlong)piVar10 + 1U) {
        piVar4 = *ppiVar2;
        uVar5 = (longlong)piVar10 + 1U >> 1;
        piVar7 = (int *)((longlong)piVar10 + 1U & 0xfffffffffffffffe);
        do {
            iVar8 = iVar8 + *piVar4;
            iVar9 = iVar9 + piVar4[1];
            piVar4 = piVar4 + 2;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        if (piVar10 < piVar7) goto LAB_140540bcb;
    }
    iVar6 = (*ppiVar2)[(longlong)piVar7];
    LAB_140540bcb:
    return iVar6 + iVar9 + iVar8;
}



void FUN_140540c10(longlong param_1)

{
    longlong **pplVar1;
    uint uVar2;
    int iVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    bool bVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined4 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 uVar13;
    undefined4 uVar14;
    undefined auStack376 [32];
    undefined4 local_158;
    undefined4 local_150;
    undefined4 local_148;
    undefined8 local_140;
    undefined4 local_138;
    undefined4 local_130;
    longlong local_128;
    longlong lStack288;
    uint local_118;
    int iStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 uStack264;
    uint local_f8;
    undefined4 local_f4;
    undefined4 local_f0;
    undefined8 local_ec;
    undefined local_d8 [56];
    undefined8 local_a0;
    undefined8 local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    FUN_140546060();
    pplVar1 = (longlong **)(param_1 + 0x218);
    plVar5 = *pplVar1;
    while (plVar5 != (longlong *)0x0) {
        (**(code **)(**pplVar1 + 0x20))();
        plVar5 = *pplVar1;
    }
    lVar10 = *(longlong *)(param_1 + 0x220);
    while (lVar10 != 0) {
        FUN_140454090(*(undefined8 *)(param_1 + 0x220));
        lVar10 = *(longlong *)(param_1 + 0x220);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x238);
    while (puVar7 = puVar4, puVar7 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar7[4];
        if ((longlong **)puVar7[10] == pplVar1) {
            (**(code **)*puVar7)();
        }
    }
    lVar10 = FUN_1403d90d0();
    lVar11 = FUN_14023d840();
    uVar14 = 0;
    bVar6 = false;
    if ((((lVar10 != 0) && (lVar11 != 0)) && (*(int *)(lVar11 + 0x94) != 0)) &&
        (lVar10 = FUN_140248f00(), lVar10 != 0)) {
        uVar9 = FUN_1401ae6a0(0,0xffff);
        *(undefined4 *)(param_1 + 0x54) = uVar9;
        if (*(int *)(lVar10 + 0x28) != 0) {
            *(int *)(param_1 + 0x58) = *(int *)(lVar10 + 0x28);
        }
        if (*(int *)(lVar10 + 0x2c) != 0) {
            *(int *)(param_1 + 0x58) = *(int *)(lVar10 + 0x2c);
        }
        if (*(int *)(lVar10 + 0x30) != 0) {
            *(int *)(param_1 + 0x58) = *(int *)(lVar10 + 0x30);
        }
        FUN_1407e4830(local_d8,0,0xa0);
        local_158 = 0;
        FUN_1405620a0();
        local_130 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 1;
        local_158 = 1;
        local_138 = uVar14;
        FUN_140543630(param_1,0,local_d8,*(undefined4 *)(param_1 + 0x154));
        FUN_14018b900(local_a0);
        FUN_14018b900(local_48);
    }
    if (*(int *)(param_1 + 0x348) != 0) {
        local_118 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
        uStack272 = 0;
        uStack268 = 1;
        uStack264 = 0;
        iStack276 = *(int *)(param_1 + 0x348);
        FUN_1405663f0(DAT_140c65b70 + 0x650,&local_128,&local_118);
        while (local_128 != lStack288) {
            if (*(longlong *)(local_128 + 0x38) != 0) {
                local_130 = 0;
                local_140 = 0;
                local_148 = 0;
                local_150 = 0;
                local_158 = 1;
                local_138 = uVar14;
                FUN_140543630(param_1,0,*(longlong *)(local_128 + 0x38),*(undefined4 *)(param_1 + 0x154));
            }
            lVar10 = *(longlong *)(local_128 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(local_128 + 8);
                if (local_128 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        local_128 = lVar10;
                        lVar10 = *(longlong *)(local_128 + 8);
                    } while (local_128 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(local_128 + 0x18) != lVar10) {
                    local_128 = lVar10;
                }
            }
            else {
                for (lVar11 = *(longlong *)(lVar10 + 0x10); local_128 = lVar10, lVar11 != 0;
                     lVar11 = *(longlong *)(lVar11 + 0x10)) {
                    lVar10 = lVar11;
                }
            }
        }
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
        uVar2 = *(uint *)(lVar10 + 0x7c);
        if (((uVar2 < 8) && ((0x85U >> (uVar2 & 0x1f) & 1) != 0)) ||
            ((*(int *)(lVar10 + 0x18) == 3 &&
              ((*(int *)(lVar10 + 0x9c) == 0 && ((uVar2 - 4 & 0xfffffffb) == 0)))))) {
            bVar6 = true;
        }
        local_f4 = *(undefined4 *)(param_1 + 0x348);
        local_f8 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
        local_f0 = 1;
        local_ec = 1;
        FUN_1405663f0(DAT_140c65b70 + 0x650,&local_118,&local_f8);
        local_128 = CONCAT44(iStack276,local_118);
        lVar10 = CONCAT44(uStack268,uStack272);
        lVar11 = local_128;
        lStack288 = lVar10;
        while (lVar11 != lVar10) {
            if (*(longlong *)(lVar11 + 0x38) != 0) {
                if ((((bVar6) &&
                      (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70),
                              *(int *)(lVar12 + 0x18) != 3)) && (iVar3 = *(int *)(lVar12 + 0x7c), iVar3 != 4)) &&
                    (1 < iVar3 - 7U)) {
                    uVar9 = *(undefined4 *)(param_1 + 0x154);
                    uVar13 = 0;
                    local_148 = 0;
                }
                else {
                    local_148 = *(undefined4 *)(param_1 + 0x154);
                    uVar9 = *(undefined4 *)(param_1 + 0x158);
                    uVar13 = 1;
                }
                local_130 = 0;
                local_140 = 0;
                local_150 = 0;
                local_158 = 1;
                local_138 = uVar14;
                FUN_140543630(param_1,uVar13,*(longlong *)(lVar11 + 0x38),uVar9);
            }
            lVar12 = *(longlong *)(lVar11 + 0x18);
            if (lVar12 == 0) {
                lVar12 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar12 + 0x18)) {
                    do {
                        lVar11 = lVar12;
                        lVar12 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar12 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar12) {
                    lVar11 = lVar12;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar12 + 0x10); lVar11 = lVar12, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar12 = lVar8;
                }
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack376);
    return;
}



int FUN_1405410b0(int param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
    int iVar1;
    longlong local_38;
    longlong local_30;
    uint local_28;
    undefined4 local_24;
    undefined4 local_20;
    int local_1c;
    undefined4 local_18;

    local_24 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0x1c);
    local_28 = (uint)(*(int *)(*(longlong *)(param_3 + 0x70) + 0x18) == 8);
    local_20 = param_2;
    local_1c = param_1;
    local_18 = param_4;
    FUN_1405663f0(DAT_140c65b70 + 0x650,&local_38,&local_28);
    if ((local_38 != local_30) || (iVar1 = 2, param_1 != 4)) {
        iVar1 = param_1;
    }
    return iVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140541130(longlong param_1,int param_2,longlong param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    byte bVar4;
    uint uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    undefined auVar10 [16];
    undefined4 uVar11;
    longlong lVar12;
    longlong lVar13;
    longlong lVar14;
    longlong lVar15;
    longlong lVar16;
    int *piVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    uint uVar20;
    ulonglong uVar21;
    longlong lVar22;
    int iVar23;
    bool bVar24;
    undefined4 uVar25;
    longlong local_res8;
    undefined8 local_res20;
    undefined local_b8 [8];
    undefined8 uStack176;
    uint local_a8;
    uint local_98;
    undefined4 local_94;
    undefined4 local_90;
    int local_8c;
    uint local_88;
    undefined local_78 [16];
    longlong *local_68;
    int local_60;
    int local_5c;

    if (((*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50) == 0) &&
         (iVar23 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18), iVar23 != 3))
        && (iVar23 != 8)) {
        lVar12 = *(longlong *)(param_1 + 0x220);
        while (lVar12 != 0) {
            FUN_140454090(lVar12);
            lVar12 = *(longlong *)(param_1 + 0x220);
        }
        pplVar2 = (longlong **)(param_1 + 0x218);
        plVar6 = *pplVar2;
        while (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
            plVar6 = *pplVar2;
        }
        pplVar3 = (longlong **)(param_1 + 0x228);
        plVar6 = *pplVar3;
        while (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x20))();
            plVar6 = *pplVar3;
        }
        stack0xffffffffffffff4c = SUB1612(_local_b8 >> 0x20,0);
        local_res20._4_4_ = (uint)((ulonglong)local_res20 >> 0x20);
        puVar9 = *(undefined8 **)(param_1 + 0x238);
        while (puVar9 != (undefined8 *)0x0) {
            puVar7 = (undefined8 *)puVar9[4];
            if (((longlong **)puVar9[10] == pplVar2) || ((longlong **)puVar9[10] == pplVar3)) {
                (**(code **)*puVar9)(puVar9,1);
            }
            puVar9 = puVar7;
        }
    }
    else {
        pplVar2 = (longlong **)(param_1 + 0x218);
        local_res20 = *pplVar2;
        *pplVar2 = (longlong *)0x0;
        if (local_res20 != (longlong *)0x0) {
            local_res20[1] = (longlong)&local_res20;
            while (plVar6 = local_res20, local_res20 = plVar6, plVar6 != (longlong *)0x0) {
                if ((longlong *)plVar6[1] != (longlong *)0x0) {
                    *(longlong *)plVar6[1] = plVar6[2];
                }
                pplVar3 = (longlong **)(plVar6 + 2);
                if (plVar6[2] != 0) {
                    *(longlong *)(plVar6[2] + 8) = plVar6[1];
                }
                *pplVar3 = (longlong *)0x0;
                plVar6[1] = (longlong)pplVar2;
                *pplVar3 = *pplVar2;
                *pplVar2 = plVar6;
                if (*pplVar3 != (longlong *)0x0) {
                    (*pplVar3)[1] = (longlong)pplVar3;
                }
                lVar12 = (**(code **)(*plVar6 + 0x10))(plVar6);
                if (*(int *)(lVar12 + 4) == 0) {
                    (**(code **)(*plVar6 + 0x20))(plVar6);
                }
            }
        }
        pplVar3 = (longlong **)(param_1 + 0x228);
        local_68 = *pplVar3;
        *pplVar3 = (longlong *)0x0;
        if (local_68 != (longlong *)0x0) {
            local_68[1] = (longlong)&local_68;
            while (plVar6 = local_68, local_68 = plVar6, plVar6 != (longlong *)0x0) {
                if ((longlong *)plVar6[1] != (longlong *)0x0) {
                    *(longlong *)plVar6[1] = plVar6[2];
                }
                pplVar1 = (longlong **)(plVar6 + 2);
                if (plVar6[2] != 0) {
                    *(longlong *)(plVar6[2] + 8) = plVar6[1];
                }
                *pplVar1 = (longlong *)0x0;
                plVar6[1] = (longlong)pplVar3;
                *pplVar1 = *pplVar3;
                *pplVar3 = plVar6;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
                lVar12 = (**(code **)(*plVar6 + 0x10))(plVar6);
                if (*(int *)(lVar12 + 4) == 0) {
                    (**(code **)(*plVar6 + 0x20))(plVar6);
                }
            }
        }
        plVar6 = *(longlong **)(param_1 + 0x220);
        while (plVar6 != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[5];
            lVar12 = *plVar6;
            plVar6 = plVar8;
            if ((lVar12 == 0) || (*(int *)(lVar12 + 4) == 0)) {
                FUN_140454090();
            }
        }
        stack0xffffffffffffff4c = SUB1612(_local_b8 >> 0x20,0);
        puVar9 = *(undefined8 **)(param_1 + 0x238);
        while (puVar9 != (undefined8 *)0x0) {
            puVar7 = (undefined8 *)puVar9[4];
            if (((longlong **)puVar9[10] == pplVar2) || ((longlong **)puVar9[10] == pplVar3)) {
                (**(code **)*puVar9)(puVar9,1);
            }
            puVar9 = puVar7;
        }
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
        if ((((*(int *)(lVar12 + 0x18) != 8) && (1 < *(uint *)(param_1 + 0x1a0))) &&
             ((*(byte *)(lVar12 + 0x10c) & 0x20) == 0)) &&
            (*(uint *)(param_1 + 0x1a0) <= *(uint *)(param_1 + 400))) {
            if (local_68 != (longlong *)0x0) {
                FUN_1401a4a00(&local_68);
            }
            if (local_res20 == (longlong *)0x0) {
                return;
            }
            FUN_1401a4a00(&local_res20);
            return;
        }
        if (local_68 != (longlong *)0x0) {
            FUN_1401a4a00();
        }
        if (local_res20 != (longlong *)0x0) {
            FUN_1401a4a00();
        }
    }
    if (*(int *)(param_1 + 0x348) == 0) {
        return;
    }
    lVar12 = *(longlong *)(param_1 + 0x138);
    local_res20 = (longlong *)((ulonglong)local_res20._4_4_ << 0x20);
    uVar20 = 0;
    if (*(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8) {
        bVar4 = *(byte *)(param_3 + 0x50);
        local_res20 = (longlong *)CONCAT44(local_res20._4_4_,(uint)bVar4);
        if ((*(longlong *)(lVar12 + 0x58) == 0) ||
            (uVar20 = (uint)bVar4, *(uint *)(param_1 + 0x1a0) <= (uint)bVar4)) {
            local_res20 = (longlong *)((ulonglong)local_res20._4_4_ << 0x20);
            uVar20 = 0;
        }
    }
    _local_b8 = CONCAT124(stack0xffffffffffffff4c,
                          (uint)(*(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8));
    _local_b8 = ZEXT812(local_b8);
    local_b8 = local_b8 & 0xffffffff | (ulonglong)*(uint *)(*(longlong *)(lVar12 + 8) + 0x1c) << 0x20;
    _local_b8 = CONCAT412(param_2,_local_b8);
    local_a8 = uVar20;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_78,local_b8);
    if ((local_78._0_8_ != local_78._8_8_) || (iVar23 = 2, param_2 != 4)) {
        iVar23 = param_2;
    }
    _local_b8 = ZEXT812(local_b8);
    _local_b8 = CONCAT412(iVar23,_local_b8);
    local_b8 = CONCAT44(*(undefined4 *)(param_1 + 0x348),
                        (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18)
                               == 8));
    local_a8 = uVar20;
    local_60 = iVar23;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_78,local_b8);
    uVar25 = 0;
    lVar12 = SUB168(local_78,0);
    while (lVar12 != SUB168(local_78 >> 0x40,0)) {
        lVar13 = *(longlong *)(lVar12 + 0x38);
        if ((lVar13 != 0) && (*(int *)(lVar13 + 0x84) == 0)) {
            FUN_140543630(param_1,0,lVar13,*(undefined4 *)(param_1 + 0x154),iVar23,0,0,0,uVar25,0);
        }
        lVar13 = *(longlong *)(lVar12 + 0x18);
        if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar12 + 8);
            if (lVar12 == *(longlong *)(lVar13 + 0x18)) {
                do {
                    lVar12 = lVar13;
                    lVar13 = *(longlong *)(lVar12 + 8);
                } while (lVar12 == *(longlong *)(lVar13 + 0x18));
            }
            if (*(longlong *)(lVar12 + 0x18) != lVar13) {
                lVar12 = lVar13;
            }
        }
        else {
            for (lVar14 = *(longlong *)(lVar13 + 0x10); lVar12 = lVar13, lVar14 != 0;
                 lVar14 = *(longlong *)(lVar14 + 0x10)) {
                lVar13 = lVar14;
            }
        }
    }
    local_90 = 1;
    local_98 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
    local_94 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 8) + 0x1c);
    local_8c = param_2;
    local_88 = uVar20;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_b8,&local_98);
    if ((local_b8 != uStack176) || (local_8c = 2, param_2 != 4)) {
        local_8c = param_2;
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
    uVar5 = *(uint *)(lVar12 + 0x7c);
    if (((uVar5 < 8) && ((0x85U >> (uVar5 & 0x1f) & 1) != 0)) ||
        ((*(int *)(lVar12 + 0x18) == 3 &&
          ((*(int *)(lVar12 + 0x9c) == 0 && ((uVar5 - 4 & 0xfffffffb) == 0)))))) {
        bVar24 = true;
    }
    else {
        bVar24 = false;
    }
    local_94 = *(undefined4 *)(param_1 + 0x348);
    local_98 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
    local_90 = 1;
    local_88 = uVar20;
    local_5c = local_8c;
    FUN_1405663f0(DAT_140c65b70 + 0x650);
    auVar10 = _local_b8 >> 0x40;
    lVar12 = SUB168(_local_b8,0);
    local_78 = _local_b8;
    while (lVar12 != SUB168(auVar10,0)) {
        lVar13 = *(longlong *)(lVar12 + 0x38);
        if ((lVar13 != 0) && (*(int *)(lVar13 + 0x84) == 0)) {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
            if (((*(int *)(lVar14 + 0x18) == 3) ||
                 (((iVar23 = *(int *)(lVar14 + 0x7c), iVar23 == 4 || (iVar23 - 7U < 2)) || (bVar24)))) ||
                ((*(uint *)(lVar13 + 0x10) & 0x200) != 0)) {
                LAB_14054185d:
                FUN_140543630(param_1);
            }
            else {
                uVar21 = 0;
                if ((ulonglong)*(byte *)(param_3 + 0x14) != 0) {
                    piVar17 = *(int **)(param_3 + 0x18);
                    do {
                        if (*piVar17 == *(int *)(param_1 + 0x158)) goto LAB_14054185d;
                        uVar21 = uVar21 + 1;
                        piVar17 = piVar17 + 6;
                    } while (uVar21 < *(byte *)(param_3 + 0x14));
                }
            }
        }
        lVar13 = *(longlong *)(lVar12 + 0x18);
        if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar12 + 8);
            if (lVar12 == *(longlong *)(lVar13 + 0x18)) {
                do {
                    lVar12 = lVar13;
                    lVar13 = *(longlong *)(lVar12 + 8);
                } while (lVar12 == *(longlong *)(lVar13 + 0x18));
            }
            if (*(longlong *)(lVar12 + 0x18) != lVar13) {
                lVar12 = lVar13;
            }
        }
        else {
            for (lVar14 = *(longlong *)(lVar13 + 0x10); lVar12 = lVar13, lVar14 != 0;
                 lVar14 = *(longlong *)(lVar14 + 0x10)) {
                lVar13 = lVar14;
            }
        }
    }
    if ((param_2 - 2U & 0xfffffffd) == 0) {
        uVar20 = *(uint *)(param_1 + 0x348);
        lVar12 = *(longlong *)(DAT_140c65b70 + 0x658);
        bVar24 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8;
        lVar13 = *(longlong *)(lVar12 + 8);
        uStack176 = SUB168(_local_b8 >> 0x40,0);
        lVar14 = lVar13;
        local_b8 = lVar12;
        if (lVar13 != 0) {
            do {
                if (bVar24) {
                    if (*(int *)(lVar14 + 0x20) != 0) goto LAB_140541bab;
                    LAB_140541bd8:
                    lVar16 = *(longlong *)(lVar14 + 0x18);
                }
                else if (*(int *)(lVar14 + 0x20) == 0) {
                    LAB_140541bab:
                    if ((*(uint *)(lVar14 + 0x24) <= uVar20) &&
                        ((*(uint *)(lVar14 + 0x24) < uVar20 ||
                          ((*(int *)(lVar14 + 0x28) < 3 &&
                            ((*(int *)(lVar14 + 0x28) < 2 ||
                              ((*(int *)(lVar14 + 0x2c) < 5 &&
                                ((*(int *)(lVar14 + 0x2c) < 4 || (*(uint *)(lVar14 + 0x30) <= (uint)local_res20))))
                              )))))))) goto LAB_140541bd8;
                    lVar16 = *(longlong *)(lVar14 + 0x10);
                    local_b8 = lVar14;
                }
                else {
                    lVar16 = *(longlong *)(lVar14 + 0x10);
                    local_b8 = lVar14;
                }
                lVar14 = lVar16;
            } while (lVar16 != 0);
            while (lVar13 != 0) {
                if (*(int *)(lVar13 + 0x20) == 0) {
                    if (!bVar24) {
                        LAB_140541c02:
                        if ((uVar20 <= *(uint *)(lVar13 + 0x24)) &&
                            ((uVar20 < *(uint *)(lVar13 + 0x24) ||
                              ((1 < *(int *)(lVar13 + 0x28) &&
                                ((2 < *(int *)(lVar13 + 0x28) ||
                                  ((3 < *(int *)(lVar13 + 0x2c) &&
                                    ((4 < *(int *)(lVar13 + 0x2c) || ((uint)local_res20 <= *(uint *)(lVar13 + 0x30)))
                                    )))))))))) goto LAB_140541c2c;
                    }
                    lVar13 = *(longlong *)(lVar13 + 0x18);
                }
                else {
                    if (bVar24) goto LAB_140541c02;
                    LAB_140541c2c:
                    lVar12 = lVar13;
                    lVar13 = *(longlong *)(lVar13 + 0x10);
                }
            }
        }
        local_68._0_4_ = (uint)(lVar12 != local_b8);
        local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000 | (ulonglong)(uint)local_68);
        lVar13 = local_b8;
        if (lVar12 != local_b8) {
            do {
                uVar21 = 0;
                lVar14 = *(longlong *)(lVar12 + 0x38);
                if ((lVar14 != 0) && (*(int *)(lVar14 + 0x84) == 0)) {
                    if (((*(uint *)(lVar14 + 0x10) & 0x200) == 0) || (param_2 != 4)) {
                        uVar19 = uVar21;
                        if (*(char *)(param_3 + 0x14) != '\0') {
                            do {
                                lVar13 = *(longlong *)(param_1 + 0x48);
                                lVar14 = *(longlong *)(param_3 + 0x18);
                                if (lVar13 != 0) {
                                    do {
                                        if (*(int *)(uVar21 + lVar14) == *(int *)(lVar13 + 0x40)) {
                                            if (((*(byte *)(uVar21 + 5 + lVar14) & 4) != 0) &&
                                                (*(int *)(uVar21 + 8 + lVar14) == 1)) {
                                                FUN_140543630(param_1);
                                            }
                                            break;
                                        }
                                        lVar13 = *(longlong *)(lVar13 + 0x28);
                                    } while (lVar13 != 0);
                                }
                                uVar19 = uVar19 + 1;
                                uVar21 = uVar21 + 0x18;
                                lVar13 = local_b8;
                            } while (uVar19 < *(byte *)(param_3 + 0x14));
                        }
                    }
                    else {
                        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x358) + 0x10);
                        if (lVar14 != *(longlong *)(param_1 + 0x358)) {
                            do {
                                if ((*(byte *)(lVar14 + 0x28) & 4) != 0) {
                                    FUN_140543630(param_1);
                                }
                                lVar13 = *(longlong *)(lVar14 + 0x18);
                                if (lVar13 == 0) {
                                    lVar13 = *(longlong *)(lVar14 + 8);
                                    if (lVar14 == *(longlong *)(lVar13 + 0x18)) {
                                        do {
                                            lVar14 = lVar13;
                                            lVar13 = *(longlong *)(lVar14 + 8);
                                        } while (lVar14 == *(longlong *)(lVar13 + 0x18));
                                    }
                                    if (*(longlong *)(lVar14 + 0x18) != lVar13) {
                                        lVar14 = lVar13;
                                    }
                                }
                                else {
                                    for (lVar16 = *(longlong *)(lVar13 + 0x10); lVar14 = lVar13, lVar16 != 0;
                                         lVar16 = *(longlong *)(lVar16 + 0x10)) {
                                        lVar13 = lVar16;
                                    }
                                }
                                lVar13 = local_b8;
                            } while (lVar14 != *(longlong *)(param_1 + 0x358));
                        }
                    }
                }
                lVar14 = *(longlong *)(lVar12 + 0x18);
                if (lVar14 == 0) {
                    lVar14 = *(longlong *)(lVar12 + 8);
                    if (lVar12 == *(longlong *)(lVar14 + 0x18)) {
                        do {
                            lVar12 = lVar14;
                            lVar14 = *(longlong *)(lVar12 + 8);
                        } while (lVar12 == *(longlong *)(lVar14 + 0x18));
                    }
                    if (*(longlong *)(lVar12 + 0x18) != lVar14) {
                        lVar12 = lVar14;
                    }
                }
                else {
                    for (lVar16 = *(longlong *)(lVar14 + 0x10); lVar12 = lVar14, lVar16 != 0;
                         lVar16 = *(longlong *)(lVar16 + 0x10)) {
                        lVar14 = lVar16;
                    }
                }
            } while (lVar12 != lVar13);
        }
        uVar20 = *(uint *)(param_1 + 0x348);
        local_res8 = *(longlong *)(DAT_140c65b70 + 0x658);
        bVar24 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8;
        lVar12 = *(longlong *)(local_res8 + 8);
        uStack176 = local_res8;
        if (lVar12 != 0) {
            lVar13 = lVar12;
            do {
                if (bVar24) {
                    if (*(int *)(lVar13 + 0x20) != 0) goto LAB_140541ec2;
                    LAB_140541eef:
                    lVar14 = *(longlong *)(lVar13 + 0x18);
                }
                else if (*(int *)(lVar13 + 0x20) == 0) {
                    LAB_140541ec2:
                    if ((*(uint *)(lVar13 + 0x24) <= uVar20) &&
                        ((*(uint *)(lVar13 + 0x24) < uVar20 ||
                          ((*(int *)(lVar13 + 0x28) < 3 &&
                            ((*(int *)(lVar13 + 0x28) < 2 ||
                              ((*(int *)(lVar13 + 0x2c) < 3 &&
                                ((*(int *)(lVar13 + 0x2c) < 2 || (*(uint *)(lVar13 + 0x30) <= (uint)local_res20))))
                              )))))))) goto LAB_140541eef;
                    lVar14 = *(longlong *)(lVar13 + 0x10);
                    uStack176 = lVar13;
                }
                else {
                    lVar14 = *(longlong *)(lVar13 + 0x10);
                    uStack176 = lVar13;
                }
                lVar13 = lVar14;
            } while (lVar14 != 0);
            while (lVar12 != 0) {
                if (*(int *)(lVar12 + 0x20) == 0) {
                    if (!bVar24) {
                        LAB_140541f19:
                        if ((uVar20 <= *(uint *)(lVar12 + 0x24)) &&
                            ((uVar20 < *(uint *)(lVar12 + 0x24) ||
                              ((1 < *(int *)(lVar12 + 0x28) &&
                                ((2 < *(int *)(lVar12 + 0x28) ||
                                  ((1 < *(int *)(lVar12 + 0x2c) &&
                                    ((2 < *(int *)(lVar12 + 0x2c) || ((uint)local_res20 <= *(uint *)(lVar12 + 0x30)))
                                    )))))))))) goto LAB_140541f43;
                    }
                    lVar12 = *(longlong *)(lVar12 + 0x18);
                }
                else {
                    if (bVar24) goto LAB_140541f19;
                    LAB_140541f43:
                    local_res8 = lVar12;
                    lVar12 = *(longlong *)(lVar12 + 0x10);
                }
            }
        }
        _local_b8 = CONCAT88(uStack176,local_res8);
        if (local_res8 != uStack176) {
            do {
                uVar21 = 0;
                lVar12 = *(longlong *)(local_res8 + 0x38);
                if ((lVar12 != 0) && (*(int *)(lVar12 + 0x84) == 0)) {
                    if (((*(uint *)(lVar12 + 0x10) & 0x200) == 0) || (param_2 != 2)) {
                        uVar19 = uVar21;
                        if (*(char *)(param_3 + 0x14) != '\0') {
                            do {
                                lVar12 = *(longlong *)(param_1 + 0x48);
                                lVar13 = *(longlong *)(param_3 + 0x18);
                                if (lVar12 != 0) {
                                    do {
                                        if (*(int *)(uVar21 + lVar13) == *(int *)(lVar12 + 0x40)) {
                                            if (((*(byte *)(uVar21 + 5 + lVar13) & 4) != 0) &&
                                                (((uint)local_68 == 0 || (*(int *)(uVar21 + 8 + lVar13) != 1)))) {
                                                FUN_140543630(param_1);
                                            }
                                            break;
                                        }
                                        lVar12 = *(longlong *)(lVar12 + 0x28);
                                    } while (lVar12 != 0);
                                }
                                uVar19 = uVar19 + 1;
                                uVar21 = uVar21 + 0x18;
                            } while (uVar19 < *(byte *)(param_3 + 0x14));
                            goto LAB_14054210d;
                        }
                    }
                    else {
                        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x358) + 0x10);
                        if (lVar13 != *(longlong *)(param_1 + 0x358)) {
                            do {
                                if ((*(byte *)(lVar13 + 0x28) & 4) != 0) {
                                    FUN_140543630(param_1,2,lVar12,*(undefined4 *)(lVar13 + 0x24),2,0,
                                                  *(undefined4 *)(param_1 + 0x154),0,uVar25,
                                                  *(undefined4 *)(lVar13 + 0x3c));
                                }
                                lVar14 = *(longlong *)(lVar13 + 0x18);
                                if (lVar14 == 0) {
                                    lVar14 = *(longlong *)(lVar13 + 8);
                                    if (lVar13 == *(longlong *)(lVar14 + 0x18)) {
                                        do {
                                            lVar13 = lVar14;
                                            lVar14 = *(longlong *)(lVar13 + 8);
                                        } while (lVar13 == *(longlong *)(lVar14 + 0x18));
                                    }
                                    if (*(longlong *)(lVar13 + 0x18) != lVar14) {
                                        lVar13 = lVar14;
                                    }
                                }
                                else {
                                    for (lVar16 = *(longlong *)(lVar14 + 0x10); lVar13 = lVar14, lVar16 != 0;
                                         lVar16 = *(longlong *)(lVar16 + 0x10)) {
                                        lVar14 = lVar16;
                                    }
                                }
                            } while (lVar13 != *(longlong *)(param_1 + 0x358));
                            LAB_14054210d:
                        }
                    }
                }
                lVar12 = *(longlong *)(local_res8 + 0x18);
                if (lVar12 == 0) {
                    lVar12 = *(longlong *)(local_res8 + 8);
                    if (local_res8 == *(longlong *)(lVar12 + 0x18)) {
                        do {
                            local_res8 = lVar12;
                            lVar12 = *(longlong *)(local_res8 + 8);
                        } while (local_res8 == *(longlong *)(lVar12 + 0x18));
                    }
                    if (*(longlong *)(local_res8 + 0x18) != lVar12) {
                        local_res8 = lVar12;
                    }
                }
                else {
                    for (lVar13 = *(longlong *)(lVar12 + 0x10); local_res8 = lVar12, lVar13 != 0;
                         lVar13 = *(longlong *)(lVar13 + 0x10)) {
                        lVar12 = lVar13;
                    }
                }
            } while (local_res8 != uStack176);
        }
    }
    else {
        local_90 = 2;
        local_88 = (uint)local_res20;
        local_98 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
        local_94 = *(undefined4 *)(param_1 + 0x348);
        local_8c = param_2;
        FUN_1405663f0(DAT_140c65b70 + 0x650);
        local_res8 = SUB168(_local_b8,0);
        local_78 = _local_b8;
        local_78._8_8_ = SUB168(_local_b8 >> 0x40,0);
        if (local_res8 == local_78._8_8_) goto LAB_14054217f;
        do {
            lVar12 = *(longlong *)(local_res8 + 0x38);
            if ((lVar12 != 0) && (*(int *)(lVar12 + 0x84) == 0)) {
                if ((*(uint *)(lVar12 + 0x10) & 0x200) == 0) {
                    uVar19 = 0;
                    uVar21 = uVar19;
                    if (*(char *)(param_3 + 0x14) != '\0') {
                        do {
                            lVar12 = *(longlong *)(param_1 + 0x48);
                            if (lVar12 != 0) {
                                do {
                                    if (*(int *)(uVar19 + *(longlong *)(param_3 + 0x18)) == *(int *)(lVar12 + 0x40)) {
                                        if ((*(byte *)(uVar19 + 5 + *(longlong *)(param_3 + 0x18)) & 4) != 0) {
                                            FUN_140543630(param_1);
                                        }
                                        break;
                                    }
                                    lVar12 = *(longlong *)(lVar12 + 0x28);
                                } while (lVar12 != 0);
                            }
                            uVar21 = uVar21 + 1;
                            uVar19 = uVar19 + 0x18;
                        } while (uVar21 < *(byte *)(param_3 + 0x14));
                        goto LAB_140541ad4;
                    }
                }
                else {
                    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x358) + 0x10);
                    if (lVar12 != *(longlong *)(param_1 + 0x358)) {
                        do {
                            if ((*(byte *)(lVar12 + 0x28) & 4) != 0) {
                                FUN_140543630(param_1);
                            }
                            lVar13 = *(longlong *)(lVar12 + 0x18);
                            if (lVar13 == 0) {
                                lVar13 = *(longlong *)(lVar12 + 8);
                                if (lVar12 == *(longlong *)(lVar13 + 0x18)) {
                                    do {
                                        lVar12 = lVar13;
                                        lVar13 = *(longlong *)(lVar12 + 8);
                                    } while (lVar12 == *(longlong *)(lVar13 + 0x18));
                                }
                                if (*(longlong *)(lVar12 + 0x18) != lVar13) {
                                    lVar12 = lVar13;
                                }
                            }
                            else {
                                for (lVar14 = *(longlong *)(lVar13 + 0x10); lVar12 = lVar13, lVar14 != 0;
                                     lVar14 = *(longlong *)(lVar14 + 0x10)) {
                                    lVar13 = lVar14;
                                }
                            }
                        } while (lVar12 != *(longlong *)(param_1 + 0x358));
                        LAB_140541ad4:
                    }
                }
            }
            lVar12 = *(longlong *)(local_res8 + 0x18);
            if (lVar12 == 0) {
                lVar12 = *(longlong *)(local_res8 + 8);
                if (local_res8 == *(longlong *)(lVar12 + 0x18)) {
                    do {
                        local_res8 = lVar12;
                        lVar12 = *(longlong *)(local_res8 + 8);
                    } while (local_res8 == *(longlong *)(lVar12 + 0x18));
                }
                if (*(longlong *)(local_res8 + 0x18) != lVar12) {
                    local_res8 = lVar12;
                }
            }
            else {
                for (lVar13 = *(longlong *)(lVar12 + 0x10); local_res8 = lVar12, lVar13 != 0;
                     lVar13 = *(longlong *)(lVar13 + 0x10)) {
                    lVar12 = lVar13;
                }
            }
        } while (local_res8 != local_78._8_8_);
    }
    LAB_14054217f:
    lVar12 = *(longlong *)(param_1 + 0x138);
    lVar13 = *(longlong *)(DAT_140c65b70 + 0x658);
    bVar24 = *(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8;
    lVar14 = *(longlong *)(lVar13 + 8);
    uVar20 = *(uint *)(*(longlong *)(lVar12 + 8) + 0x1c);
    lVar16 = lVar14;
    lVar22 = lVar13;
    if (lVar14 != 0) {
        do {
            if (bVar24) {
                if (*(int *)(lVar16 + 0x20) != 0) goto LAB_1405421da;
                LAB_140542207:
                lVar15 = *(longlong *)(lVar16 + 0x18);
            }
            else if (*(int *)(lVar16 + 0x20) == 0) {
                LAB_1405421da:
                if ((*(uint *)(lVar16 + 0x24) <= uVar20) &&
                    ((*(uint *)(lVar16 + 0x24) < uVar20 ||
                      ((*(int *)(lVar16 + 0x28) < 4 &&
                        ((*(int *)(lVar16 + 0x28) < 3 ||
                          ((*(int *)(lVar16 + 0x2c) <= param_2 &&
                            ((*(int *)(lVar16 + 0x2c) < param_2 ||
                              (*(uint *)(lVar16 + 0x30) <= (uint)local_res20)))))))))))) goto LAB_140542207;
                lVar15 = *(longlong *)(lVar16 + 0x10);
                lVar22 = lVar16;
            }
            else {
                lVar15 = *(longlong *)(lVar16 + 0x10);
                lVar22 = lVar16;
            }
            lVar16 = lVar15;
        } while (lVar15 != 0);
        while (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x20) == 0) {
                if (!bVar24) {
                    LAB_140542229:
                    if ((uVar20 <= *(uint *)(lVar14 + 0x24)) &&
                        ((uVar20 < *(uint *)(lVar14 + 0x24) ||
                          ((2 < *(int *)(lVar14 + 0x28) &&
                            ((3 < *(int *)(lVar14 + 0x28) ||
                              ((param_2 <= *(int *)(lVar14 + 0x2c) &&
                                ((param_2 < *(int *)(lVar14 + 0x2c) ||
                                  ((uint)local_res20 <= *(uint *)(lVar14 + 0x30))))))))))))) goto LAB_140542253;
                }
                lVar14 = *(longlong *)(lVar14 + 0x18);
            }
            else {
                if (bVar24) goto LAB_140542229;
                LAB_140542253:
                lVar13 = lVar14;
                lVar14 = *(longlong *)(lVar14 + 0x10);
            }
        }
    }
    iVar23 = param_2;
    if ((lVar13 == lVar22) && (param_2 == 4)) {
        iVar23 = 2;
    }
    lVar13 = *(longlong *)(DAT_140c65b70 + 0x658);
    uVar20 = *(uint *)(param_1 + 0x348);
    bVar24 = *(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8;
    lVar12 = *(longlong *)(lVar13 + 8);
    lVar14 = lVar12;
    uStack176 = lVar13;
    if (lVar12 != 0) {
        do {
            if (bVar24) {
                if (*(int *)(lVar14 + 0x20) != 0) goto LAB_1405422ca;
                LAB_1405422f6:
                lVar16 = *(longlong *)(lVar14 + 0x18);
            }
            else if (*(int *)(lVar14 + 0x20) == 0) {
                LAB_1405422ca:
                if ((*(uint *)(lVar14 + 0x24) <= uVar20) &&
                    ((*(uint *)(lVar14 + 0x24) < uVar20 ||
                      ((*(int *)(lVar14 + 0x28) < 4 &&
                        ((*(int *)(lVar14 + 0x28) < 3 ||
                          ((*(int *)(lVar14 + 0x2c) <= iVar23 &&
                            ((*(int *)(lVar14 + 0x2c) < iVar23 || (*(uint *)(lVar14 + 0x30) <= (uint)local_res20)
                            ))))))))))) goto LAB_1405422f6;
                lVar16 = *(longlong *)(lVar14 + 0x10);
                uStack176 = lVar14;
            }
            else {
                lVar16 = *(longlong *)(lVar14 + 0x10);
                uStack176 = lVar14;
            }
            lVar14 = lVar16;
        } while (lVar16 != 0);
        while (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x20) == 0) {
                if (!bVar24) {
                    LAB_140542318:
                    if ((uVar20 <= *(uint *)(lVar12 + 0x24)) &&
                        ((uVar20 < *(uint *)(lVar12 + 0x24) ||
                          ((2 < *(int *)(lVar12 + 0x28) &&
                            ((3 < *(int *)(lVar12 + 0x28) ||
                              ((iVar23 <= *(int *)(lVar12 + 0x2c) &&
                                ((iVar23 < *(int *)(lVar12 + 0x2c) ||
                                  ((uint)local_res20 <= *(uint *)(lVar12 + 0x30))))))))))))) goto LAB_140542341;
                }
                lVar12 = *(longlong *)(lVar12 + 0x18);
            }
            else {
                if (bVar24) goto LAB_140542318;
                LAB_140542341:
                lVar13 = lVar12;
                lVar12 = *(longlong *)(lVar12 + 0x10);
            }
        }
    }
    uStack176._4_4_ = (undefined4)((ulonglong)uStack176 >> 0x20);
    local_78 = CONCAT412(uStack176._4_4_,CONCAT48((undefined4)uStack176,lVar13));
    local_b8 = lVar13;
    if (lVar13 != uStack176) {
        do {
            lVar12 = *(longlong *)(lVar13 + 0x38);
            if ((lVar12 != 0) && (*(int *)(lVar12 + 0x84) == 0)) {
                FUN_140543630(param_1,3,lVar12,*(undefined4 *)(param_1 + 0x154),iVar23,0,
                              *(undefined4 *)(param_1 + 0x154),0,uVar25,0);
            }
            lVar12 = *(longlong *)(lVar13 + 0x18);
            if (lVar12 == 0) {
                lVar12 = *(longlong *)(lVar13 + 8);
                if (lVar13 == *(longlong *)(lVar12 + 0x18)) {
                    do {
                        lVar13 = lVar12;
                        lVar12 = *(longlong *)(lVar13 + 8);
                    } while (lVar13 == *(longlong *)(lVar12 + 0x18));
                }
                if (*(longlong *)(lVar13 + 0x18) != lVar12) {
                    lVar13 = lVar12;
                }
            }
            else {
                for (lVar14 = *(longlong *)(lVar12 + 0x10); lVar13 = lVar12, lVar14 != 0;
                     lVar14 = *(longlong *)(lVar14 + 0x10)) {
                    lVar12 = lVar14;
                }
            }
        } while (lVar13 != local_78._8_8_);
    }
    lVar12 = *(longlong *)(param_1 + 0x138);
    lVar13 = *(longlong *)(DAT_140c65b70 + 0x658);
    bVar24 = *(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8;
    lVar14 = *(longlong *)(lVar13 + 8);
    uVar20 = *(uint *)(*(longlong *)(lVar12 + 8) + 0x1c);
    lVar16 = lVar14;
    lVar22 = lVar13;
    if (lVar14 != 0) {
        do {
            if (bVar24) {
                if (*(int *)(lVar16 + 0x20) != 0) goto LAB_14054246c;
                LAB_140542499:
                lVar15 = *(longlong *)(lVar16 + 0x18);
            }
            else if (*(int *)(lVar16 + 0x20) == 0) {
                LAB_14054246c:
                if ((*(uint *)(lVar16 + 0x24) <= uVar20) &&
                    ((*(uint *)(lVar16 + 0x24) < uVar20 ||
                      ((*(int *)(lVar16 + 0x28) < 5 &&
                        ((*(int *)(lVar16 + 0x28) < 4 ||
                          ((*(int *)(lVar16 + 0x2c) <= param_2 &&
                            ((*(int *)(lVar16 + 0x2c) < param_2 ||
                              (*(uint *)(lVar16 + 0x30) <= (uint)local_res20)))))))))))) goto LAB_140542499;
                lVar15 = *(longlong *)(lVar16 + 0x10);
                lVar22 = lVar16;
            }
            else {
                lVar15 = *(longlong *)(lVar16 + 0x10);
                lVar22 = lVar16;
            }
            lVar16 = lVar15;
        } while (lVar15 != 0);
        while (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x20) == 0) {
                if (!bVar24) {
                    LAB_1405424b9:
                    if ((uVar20 <= *(uint *)(lVar14 + 0x24)) &&
                        ((uVar20 < *(uint *)(lVar14 + 0x24) ||
                          ((3 < *(int *)(lVar14 + 0x28) &&
                            ((4 < *(int *)(lVar14 + 0x28) ||
                              ((param_2 <= *(int *)(lVar14 + 0x2c) &&
                                ((param_2 < *(int *)(lVar14 + 0x2c) ||
                                  ((uint)local_res20 <= *(uint *)(lVar14 + 0x30))))))))))))) goto LAB_1405424e3;
                }
                lVar14 = *(longlong *)(lVar14 + 0x18);
            }
            else {
                if (bVar24) goto LAB_1405424b9;
                LAB_1405424e3:
                lVar13 = lVar14;
                lVar14 = *(longlong *)(lVar14 + 0x10);
            }
        }
    }
    if ((lVar13 != lVar22) || (iVar23 = 2, param_2 != 4)) {
        iVar23 = param_2;
    }
    local_94 = *(undefined4 *)(param_1 + 0x348);
    local_98 = (uint)(*(int *)(*(longlong *)(lVar12 + 0x70) + 0x18) == 8);
    local_90 = 4;
    local_8c = iVar23;
    local_88 = (uint)local_res20;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_b8,&local_98);
    lVar13 = uStack176;
    lVar12 = local_b8;
    local_78._0_8_ = local_b8;
    local_78._8_8_ = uStack176;
    while (lVar12 != lVar13) {
        lVar14 = *(longlong *)(lVar12 + 0x38);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x84) == 0)) {
            FUN_1405428d0(param_1,lVar14,iVar23);
        }
        lVar14 = *(longlong *)(lVar12 + 0x18);
        if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar12 + 8);
            if (lVar12 == *(longlong *)(lVar14 + 0x18)) {
                do {
                    lVar12 = lVar14;
                    lVar14 = *(longlong *)(lVar12 + 8);
                } while (lVar12 == *(longlong *)(lVar14 + 0x18));
            }
            if (*(longlong *)(lVar12 + 0x18) != lVar14) {
                lVar12 = lVar14;
            }
        }
        else {
            for (lVar16 = *(longlong *)(lVar14 + 0x10); lVar12 = lVar14, lVar16 != 0;
                 lVar16 = *(longlong *)(lVar16 + 0x10)) {
                lVar14 = lVar16;
            }
        }
    }
    uVar11 = FUN_1405410b0(param_2,5,*(undefined8 *)(param_1 + 0x138),(uint)local_res20);
    local_98 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
    local_90 = 5;
    local_8c = local_60;
    local_94 = *(undefined4 *)(param_1 + 0x348);
    local_88 = (uint)local_res20;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_b8,&local_98);
    lVar13 = uStack176;
    lVar12 = local_b8;
    local_78._0_8_ = local_b8;
    local_78._8_8_ = uStack176;
    while (lVar12 != lVar13) {
        lVar14 = *(longlong *)(lVar12 + 0x38);
        if (((lVar14 != 0) && (*(int *)(lVar14 + 0x84) == 0)) && (lVar16 = FUN_1403d90d0(), lVar16 != 0)
                ) {
            FUN_140543630(param_1,5,lVar14,*(undefined4 *)(lVar16 + 0xc0),uVar11,0,
                          *(undefined4 *)(param_1 + 0x154),0,uVar25,0);
        }
        lVar14 = *(longlong *)(lVar12 + 0x18);
        if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar12 + 8);
            if (lVar12 == *(longlong *)(lVar14 + 0x18)) {
                do {
                    lVar12 = lVar14;
                    lVar14 = *(longlong *)(lVar12 + 8);
                } while (lVar12 == *(longlong *)(lVar14 + 0x18));
            }
            if (*(longlong *)(lVar12 + 0x18) != lVar14) {
                lVar12 = lVar14;
            }
        }
        else {
            for (lVar16 = *(longlong *)(lVar14 + 0x10); lVar12 = lVar14, lVar16 != 0;
                 lVar16 = *(longlong *)(lVar16 + 0x10)) {
                lVar14 = lVar16;
            }
        }
    }
    uVar11 = FUN_1405410b0(param_2,6,*(undefined8 *)(param_1 + 0x138),(uint)local_res20);
    uVar21 = 0;
    local_98 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) == 8);
    local_90 = 6;
    local_94 = *(undefined4 *)(param_1 + 0x348);
    local_8c = local_60;
    local_88 = (uint)local_res20;
    FUN_1405663f0(DAT_140c65b70 + 0x650,local_b8,&local_98);
    lVar13 = uStack176;
    local_78 = CONCAT88(uStack176,local_b8);
    lVar12 = local_b8;
    do {
        if (lVar12 == lVar13) {
            return;
        }
        lVar14 = *(longlong *)(lVar12 + 0x38);
        if (((lVar14 != 0) && (*(int *)(lVar14 + 0x84) == 0)) &&
            (lVar16 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154)), lVar16 != 0)) {
            uVar19 = uVar21;
            if (*(ulonglong *)(lVar16 + 0x198) != 0) {
                piVar17 = *(int **)(lVar16 + 400);
                uVar18 = uVar21;
                do {
                    if ((*piVar17 == 0) && (*(char *)(piVar17 + 1) == '\0')) {
                        uVar19 = (ulonglong)(uint)(*(int **)(lVar16 + 400))[uVar18 * 3 + 2];
                        break;
                    }
                    uVar18 = uVar18 + 1;
                    piVar17 = piVar17 + 3;
                } while (uVar18 < *(ulonglong *)(lVar16 + 0x198));
            }
            FUN_140543630(param_1,6,lVar14,uVar19,uVar11,0,*(undefined4 *)(param_1 + 0x154),0,uVar25,0);
        }
        lVar14 = *(longlong *)(lVar12 + 0x18);
        if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar12 + 8);
            if (lVar12 == *(longlong *)(lVar14 + 0x18)) {
                do {
                    lVar12 = lVar14;
                    lVar14 = *(longlong *)(lVar12 + 8);
                } while (lVar12 == *(longlong *)(lVar14 + 0x18));
            }
            if (*(longlong *)(lVar12 + 0x18) != lVar14) {
                lVar12 = lVar14;
            }
        }
        else {
            for (lVar16 = *(longlong *)(lVar14 + 0x10); lVar12 = lVar14, lVar16 != 0;
                 lVar16 = *(longlong *)(lVar16 + 0x10)) {
                lVar14 = lVar16;
            }
        }
    } while( true );
}



void FUN_1405428d0(longlong param_1,longlong param_2,undefined4 param_3)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    if (*(int *)(param_2 + 0x14) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x138);
        uVar5 = 0;
        if (*(longlong *)(lVar3 + 0x68) != 0) {
            do {
                piVar1 = *(int **)(*(longlong *)(lVar3 + 0x60) + uVar5 * 8);
                if ((*piVar1 == *(int *)(param_2 + 0x14)) &&
                    (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x378) + 0x10),
                            lVar3 != *(longlong *)(param_1 + 0x378))) {
                    do {
                        if (*(int *)(lVar3 + 0x28) == *piVar1) {
                            FUN_140543630(param_1,4,param_2,*(undefined4 *)(lVar3 + 0x2c),param_3,0,
                                          *(undefined4 *)(param_1 + 0x154),lVar3 + 0x34,
                                          *(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44));
                        }
                        lVar4 = *(longlong *)(lVar3 + 0x18);
                        if (lVar4 == 0) {
                            lVar4 = *(longlong *)(lVar3 + 8);
                            if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
                                do {
                                    lVar3 = lVar4;
                                    lVar4 = *(longlong *)(lVar3 + 8);
                                } while (lVar3 == *(longlong *)(lVar4 + 0x18));
                            }
                            if (*(longlong *)(lVar3 + 0x18) != lVar4) {
                                lVar3 = lVar4;
                            }
                        }
                        else {
                            for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar3 = lVar4, lVar2 != 0;
                                 lVar2 = *(longlong *)(lVar2 + 0x10)) {
                                lVar4 = lVar2;
                            }
                        }
                    } while (lVar3 != *(longlong *)(param_1 + 0x378));
                }
                lVar3 = *(longlong *)(param_1 + 0x138);
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(ulonglong *)(lVar3 + 0x68));
        }
    }
    return;
}



void FUN_140542a30(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 param_6)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    int iVar9;
    bool bVar10;
    ulonglong uVar11;

    puVar5 = (undefined8 *)FUN_14018b280(0xc0);
    puVar7 = (undefined8 *)0x0;
    puVar8 = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1407e4830(puVar5);
        *(int *)(puVar5 + 0x13) = param_3;
        puVar8 = puVar5;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if ((param_3 == *(int *)(param_1 + 0x154)) &&
        ((*(int *)(param_1 + 0xc0) != 0 || (*(int *)(lVar6 + 0xd58) != 0)))) {
        *(undefined4 *)(puVar8 + 0x16) = 4;
    }
    else {
        *(undefined4 *)(puVar8 + 0x16) = 5;
    }
    bVar10 = param_3 == *(int *)(param_1 + 0x154);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8);
    if (bVar10) {
        iVar9 = *(int *)(lVar6 + 0x14);
    }
    else {
        iVar9 = *(int *)(lVar6 + 0x18);
    }
    *(uint *)((longlong)puVar8 + 0xb4) = (uint)bVar10 + (DAT_140c38ae4 + iVar9 * 3) * 2;
    *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)((longlong)puVar8 + 0xa4) = 0x9c;
    uVar4 = FUN_140542e70(param_1,param_6,5);
    uVar3 = DAT_140c63628;
    *(undefined4 *)((longlong)puVar8 + 0xbc) = 1;
    *(undefined4 *)puVar8 = uVar4;
    uVar4 = FUN_1400518a0(uVar3,0x58,1);
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
    uVar4 = *(undefined4 *)puVar8;
    FUN_140578460();
    lVar6 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((lVar6 != 0) &&
        ((param_3 == *(int *)(lVar6 + 8) ||
          ((lVar6 != 0 && (*(int *)(param_1 + 0x154) == *(int *)(lVar6 + 8))))))) {
        puVar5 = (undefined8 *)FUN_14018b280(0xb0);
        puVar8 = puVar7;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1407e4830(puVar5,0,0xb0);
            puVar8 = puVar5;
        }
        FUN_1407e4830();
        *(undefined4 *)puVar8 = uVar4;
        *(undefined4 *)(puVar8 + 0x13) = param_4;
        *(int *)((longlong)puVar8 + 0x9c) = param_3;
        uVar4 = *(undefined4 *)(param_1 + 0x154);
        *(undefined4 *)((longlong)puVar8 + 0xa4) = 0x3030;
        *(undefined4 *)(puVar8 + 0x14) = uVar4;
        *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)(param_1 + 0x130);
        iVar9 = *(int *)(param_1 + 0x154);
        uVar11 = 0;
        FUN_1400035b0();
        if (((iVar9 == 0) || (lVar6 = FUN_1403d90d0(), lVar6 == 0)) ||
            (*(longlong *)(lVar6 + 0x16e8) != 0)) {
            FUN_1400035b0();
            DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
            if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
                DAT_140c8af30 = 1;
            }
            FUN_140577250();
            FUN_14018b900(puVar8,0);
        }
        else {
            puVar5 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar5 != (undefined8 *)0x0) {
                *puVar5 = puVar8;
                *(undefined4 *)(puVar5 + 1) = 0;
                *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[7] = 0;
                puVar7 = puVar5;
            }
            plVar2 = (longlong *)(lVar6 + 0x5b8);
            if (puVar7[2] == 0) {
                puVar7[2] = plVar2;
                plVar1 = puVar7 + 3;
                *plVar1 = *plVar2;
                *plVar2 = (longlong)puVar7;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            FUN_1400035b0(0x4b,3,0,iVar9,*(undefined4 *)(puVar8 + 5),uVar11 & 0xffffffff00000000,0,0);
        }
    }
    return;
}



undefined8 FUN_140542d90(longlong param_1,longlong param_2)

{
    byte bVar1;
    int iVar2;
    longlong lVar3;

    if ((param_2 != 0) && ((*(uint *)(param_2 + 0x44) & 0x140) == 0)) {
        if (*(int *)(param_1 + 0x150) == 2) {
            bVar1 = *(byte *)(param_2 + 0x58) & 4;
        }
        else {
            if (*(int *)(param_1 + 0x150) != 3) {
                return 0;
            }
            bVar1 = *(byte *)(param_2 + 0x58) & 8;
        }
        if (((bVar1 != 0) &&
             (lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154)), lVar3 != 0)) &&
            ((*(int *)(param_2 + 0x50) == 0 ||
              (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                      (DAT_140c659a0,lVar3,*(int *)(param_2 + 0x50),0,0,0), iVar2 != 0)))) {
            return 1;
        }
    }
    return 0;
}



int FUN_140542e20(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    bool bVar3;

    bVar3 = param_3 == *(int *)(param_1 + 0x154);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8);
    if (bVar3) {
        iVar2 = *(int *)(lVar1 + 0x14);
    }
    else {
        iVar2 = *(int *)(lVar1 + 0x18);
    }
    return (uint)bVar3 + (*(int *)(&DAT_140c38ac8 + (longlong)param_2 * 4) + iVar2 * 3) * 2;
}



int FUN_140542e70(longlong param_1,int param_2,int param_3,int param_4)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;

    if (param_3 == 0) {
        return param_2 + param_4;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    plVar6 = (longlong *)0x0;
    plVar5 = plVar6;
    if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x16e8);
    }
    if (lVar4 != 0) {
        uVar1 = FUN_140470540(lVar4,*(undefined4 *)(param_1 + 0x58));
        plVar6 = (longlong *)(ulonglong)uVar1;
    }
    iVar3 = 0;
    if (((plVar5 != (longlong *)0x0) &&
         (iVar2 = (**(code **)(*plVar5 + 0x198))(plVar5,plVar6), iVar2 != 0)) &&
        (iVar3 = (**(code **)(*plVar5 + 0x1b0))(plVar5,plVar6,*(undefined4 *)(param_1 + 0x54),param_3),
                iVar3 == -1)) {
        iVar3 = 0;
    }
    return iVar3 + param_2 + param_4;
}



undefined8 FUN_140542f80(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x80) != 0x14)) && (*(int *)(lVar3 + 0x80) != 0x17)) {
        return 1;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 != 0) {
        if (lVar3 == lVar1) {
            return 1;
        }
        for (lVar2 = *(longlong *)(param_1 + 0x48); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
            if (*(int *)(lVar2 + 0x40) == *(int *)(lVar1 + 8)) {
                return 1;
            }
        }
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar1 != 0) {
        if (lVar3 == lVar1) {
            return 1;
        }
        for (lVar3 = *(longlong *)(param_1 + 0x48); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
            if (*(int *)(lVar3 + 0x40) == *(int *)(lVar1 + 8)) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_140543030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    float fVar7;
    float fVar8;
    undefined4 in_XMM6_Da;
    float fVar9;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar10 [16];

    lVar5 = DAT_140c65898;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar1 == 0) {
        *(undefined4 *)(param_1 + 0x1a8) = 0x447a0000;
        return 0;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    iVar3 = *(int *)(lVar1 + 8);
    lVar4 = FUN_1403d90d0(lVar5,*(undefined4 *)(param_1 + 0x154));
    lVar2 = *(longlong *)(param_1 + 0x48);
    for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
        if (*(int *)(lVar5 + 0x40) == iVar3) goto LAB_1405430b0;
    }
    lVar5 = 0;
    LAB_1405430b0:
    if ((lVar4 == lVar1) ||
        (((lVar5 != 0 && (*(int *)(lVar5 + 0x40) == iVar3)) ||
          ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) & 0x400) != 0)))) {
        uVar6 = 1;
    }
    else {
        auVar10 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar9 = 1000.0;
        if (lVar4 != 0) {
            if ((*(int *)(lVar4 + 0x80) != 0x14) && (*(int *)(lVar4 + 0x80) != 0x17)) {
                return 1;
            }
            fVar9 = *(float *)(lVar4 + 0x11e0) - *(float *)(lVar1 + 0x11e0);
            fVar7 = *(float *)(lVar4 + 0x11e4) - *(float *)(lVar1 + 0x11e4);
            fVar9 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0;
        }
        for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
            lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x40),param_3,param_4,auVar10);
            if ((lVar5 != 0) &&
                (fVar7 = *(float *)(lVar5 + 0x11e0) - *(float *)(lVar1 + 0x11e0),
                 fVar8 = *(float *)(lVar5 + 0x11e4) - *(float *)(lVar1 + 0x11e4),
                 fVar7 = fVar7 * fVar7 + fVar8 * fVar8 + 0.0, fVar7 < fVar9)) {
                fVar9 = fVar7;
            }
        }
        *(float *)(param_1 + 0x1a8) = SQRT(fVar9) + *(float *)(param_1 + 0x1a8);
        if (lVar4 != 0) {
            iVar3 = FUN_14045a950(lVar4,iVar3);
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
            if (iVar3 == 2) {
                if ((*(uint *)(lVar1 + 0x10c) & 0x4000000) == 0) {
                    fVar9 = 15.0;
                }
                else {
                    fVar9 = 5.0;
                }
            }
            else if ((*(uint *)(lVar1 + 0x10c) & 0x4000000) == 0) {
                fVar9 = 0.0;
            }
            else {
                fVar9 = 10.0;
            }
            *(float *)(param_1 + 0x1a8) = fVar9 + *(float *)(param_1 + 0x1a8);
        }
        uVar6 = 0;
    }
    return uVar6;
}



void FUN_140543240(float param_1,float param_2,float param_3,longlong param_4)

{
    float fVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong lVar4;
    float fVar5;
    longlong lVar6;
    uint uVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined4 uVar8;

    fVar1 = *(float *)(param_4 + 0x1a4);
    if (*(int *)(param_4 + 0x1ac) == 0) {
        *(undefined4 *)(param_4 + 0x1ac) = 1;
    }
    else {
        param_1 = (fVar1 - param_2) * param_3 + param_2;
        *(float *)(param_4 + 0x1a4) = param_1;
        fVar5 = param_1;
        if ((int)((uint)param_2 ^ (uint)param_1) < 0) {
            fVar5 = (float)(-0x80000000 - (int)param_1);
        }
        uVar7 = (int)fVar5 - (int)param_2 >> 0x1f;
        if (0x54 < (int)(((int)fVar5 - (int)param_2 ^ uVar7) - uVar7)) goto LAB_1405432b0;
    }
    *(float *)(param_4 + 0x1a4) = param_2;
    LAB_1405432b0:
    if (fVar1 != *(float *)(param_4 + 0x1a4)) {
        for (plVar2 = *(longlong **)(param_4 + 0x218); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[2]) {
            lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
            param_1 = extraout_XMM0_Da;
            if (*(int *)(lVar6 + 0x30) - 5U < 2) {
                param_1 = (float)(**(code **)(*plVar2 + 0x58))
                        (extraout_XMM0_Da,*(undefined4 *)(param_4 + 0x1a4),plVar2);
            }
        }
        for (plVar2 = *(longlong **)(param_4 + 0x228); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[2]) {
            lVar6 = (**(code **)(*plVar2 + 0x10))();
            param_1 = extraout_XMM0_Da_00;
            if (*(int *)(lVar6 + 0x30) - 5U < 2) {
                param_1 = (float)(**(code **)(*plVar2 + 0x58))
                        (extraout_XMM0_Da_00,*(undefined4 *)(param_4 + 0x1a4),plVar2);
            }
        }
        for (plVar2 = *(longlong **)(param_4 + 0x230); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[2]) {
            lVar6 = (**(code **)(*plVar2 + 0x10))();
            param_1 = extraout_XMM0_Da_01;
            if (*(int *)(lVar6 + 0x30) - 5U < 2) {
                param_1 = (float)(**(code **)(*plVar2 + 0x58))
                        (extraout_XMM0_Da_01,*(undefined4 *)(param_4 + 0x1a4),plVar2);
            }
        }
        for (lVar6 = *(longlong *)(param_4 + 0x1c8); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 8)) {
            uVar8 = *(undefined4 *)(param_4 + 0x1a4);
            *(undefined4 *)(lVar6 + 0x29c) = uVar8;
            if (*(longlong **)(lVar6 + 0x70) != (longlong *)0x0) {
                param_1 = (float)(**(code **)(**(longlong **)(lVar6 + 0x70) + 0x98))(param_1,uVar8);
            }
            if (*(longlong **)(lVar6 + 0x78) != (longlong *)0x0) {
                param_1 = (float)(**(code **)(**(longlong **)(lVar6 + 0x78) + 0x98))(param_1,uVar8);
            }
            if (*(longlong **)(lVar6 + 0x80) != (longlong *)0x0) {
                param_1 = (float)(**(code **)(**(longlong **)(lVar6 + 0x80) + 0x98))(param_1,uVar8);
            }
            for (pplVar3 = *(longlong ***)(lVar6 + 0x88); pplVar3 != (longlong **)0x0;
                 pplVar3 = (longlong **)pplVar3[3]) {
                param_1 = (float)(**(code **)(**pplVar3 + 0x98))(param_1,uVar8);
            }
            for (lVar4 = *(longlong *)(lVar6 + 0x5c0); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
                param_1 = (float)FUN_140625a10(param_1,uVar8,lVar4);
            }
        }
        return;
    }
    return;
}



void FUN_1405432c0(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined4 uVar5;

    for (plVar1 = *(longlong **)(param_2 + 0x218); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
        param_1 = extraout_XMM0_Qa;
        if (*(int *)(lVar4 + 0x30) - 5U < 2) {
            param_1 = (**(code **)(*plVar1 + 0x58))
                    (extraout_XMM0_Qa,*(undefined4 *)(param_2 + 0x1a4),plVar1);
        }
    }
    for (plVar1 = *(longlong **)(param_2 + 0x228); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        lVar4 = (**(code **)(*plVar1 + 0x10))();
        param_1 = extraout_XMM0_Qa_00;
        if (*(int *)(lVar4 + 0x30) - 5U < 2) {
            param_1 = (**(code **)(*plVar1 + 0x58))
                    (extraout_XMM0_Qa_00,*(undefined4 *)(param_2 + 0x1a4),plVar1);
        }
    }
    for (plVar1 = *(longlong **)(param_2 + 0x230); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[2]) {
        lVar4 = (**(code **)(*plVar1 + 0x10))();
        param_1 = extraout_XMM0_Qa_01;
        if (*(int *)(lVar4 + 0x30) - 5U < 2) {
            param_1 = (**(code **)(*plVar1 + 0x58))
                    (extraout_XMM0_Qa_01,*(undefined4 *)(param_2 + 0x1a4),plVar1);
        }
    }
    for (lVar4 = *(longlong *)(param_2 + 0x1c8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
        uVar5 = *(undefined4 *)(param_2 + 0x1a4);
        *(undefined4 *)(lVar4 + 0x29c) = uVar5;
        if (*(longlong **)(lVar4 + 0x70) != (longlong *)0x0) {
            param_1 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x98))(param_1,uVar5);
        }
        if (*(longlong **)(lVar4 + 0x78) != (longlong *)0x0) {
            param_1 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x98))(param_1,uVar5);
        }
        if (*(longlong **)(lVar4 + 0x80) != (longlong *)0x0) {
            param_1 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x98))(param_1,uVar5);
        }
        for (pplVar2 = *(longlong ***)(lVar4 + 0x88); pplVar2 != (longlong **)0x0;
             pplVar2 = (longlong **)pplVar2[3]) {
            param_1 = (**(code **)(**pplVar2 + 0x98))(param_1,uVar5);
        }
        for (lVar3 = *(longlong *)(lVar4 + 0x5c0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
            param_1 = FUN_140625a10(param_1,uVar5,lVar3);
        }
    }
    return;
}



int FUN_140543460(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1f8);
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
        return *(int *)(local_res8 + 0x24);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
    if ((*(int *)(lVar1 + 0x38) == 0) && (*(int *)(lVar1 + 0x54) == 0)) {
        return 0;
    }
    lVar1 = FUN_140237680();
    if (lVar1 != 0) {
        if (((param_2 == 0) || (param_3 == 0)) || (param_2 == param_3)) {
            param_3 = *(uint *)(param_1 + 0x154);
            param_2 = *(uint *)(param_1 + 0x158);
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,param_2);
        if (lVar2 != 0) {
            lVar3 = FUN_1403d90d0(DAT_140c65898,param_3);
            if (lVar3 == 0) {
                if (*(int *)(lVar1 + 8) == 0) {
                    return *(int *)(lVar1 + 0x48) + (int)(longlong)*(float *)(lVar1 + 0x98);
                }
                return *(int *)(lVar1 + 0x48);
            }
            fVar6 = *(float *)(lVar2 + 0x11e0) - *(float *)(lVar3 + 0x11e0);
            fVar7 = *(float *)(lVar2 + 0x11e4) - *(float *)(lVar3 + 0x11e4);
            fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + 0.0);
            if (1e-05 <= fVar6) {
                if (*(uint *)(lVar1 + 0x5c) == 0) {
                    iVar5 = 0;
                }
                else {
                    iVar5 = (int)(longlong)
                            ((fVar6 / (float)(ulonglong)*(uint *)(lVar1 + 0x5c)) * 1000.0 +
                             (float)(ulonglong)
                             *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0xa4)
                            );
                }
                if (*(int *)(lVar1 + 8) == 0) {
                    iVar4 = (int)(longlong)*(float *)(lVar1 + 0x98);
                }
                else {
                    iVar4 = 0;
                }
                return *(int *)(lVar1 + 0x48) + iVar4 + iVar5;
            }
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140543630(longlong param_1,int param_2,longlong param_3,uint param_4,int param_5,
                   int param_6,undefined4 param_7,undefined4 *param_8,undefined8 param_9,
                   undefined4 param_10)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined4 uVar7;
    int iVar8;
    longlong lVar9;
    int *piVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    uint uVar15;
    longlong **pplVar16;
    uint extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    uint extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    uint extraout_XMM0_Da_03;
    undefined4 extraout_XMM0_Da_04;
    uint extraout_XMM0_Da_05;
    undefined4 extraout_XMM0_Da_06;
    undefined auVar17 [16];
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    uint uVar24;
    longlong **in_stack_ffffffffffffff68;
    ulonglong uVar25;
    longlong **pplVar26;
    undefined4 local_78;
    longlong *local_70;
    longlong local_68;

    lVar9 = FUN_1403d90d0(DAT_140c65898);
    puVar13 = (undefined8 *)0x0;
    uVar7 = 0;
    if ((((lVar9 != 0) && (1 < *(int *)(lVar9 + 0x54))) && (iVar6 = FUN_14045a950(), iVar6 == 0)) &&
        (*(longlong *)(lVar9 + 0xe0) != 0)) {
        piVar10 = (int *)(*(longlong *)(lVar9 + 0xe0) + 0x28);
        puVar14 = puVar13;
        do {
            if (piVar10[-3] == 0) break;
            if (piVar10[-3] == *(int *)(param_1 + 0x130)) {
                return;
            }
            if (*piVar10 == *(int *)(param_1 + 0x130)) {
                return;
            }
            uVar15 = (int)puVar14 + 1;
            puVar14 = (undefined8 *)(ulonglong)uVar15;
            piVar10 = piVar10 + 1;
        } while (uVar15 < 3);
    }
    if (*(int *)(param_3 + 0x2c) != 0) {
        in_stack_ffffffffffffff68 = (longlong **)0x0;
        iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))();
        if (iVar6 == 0) {
            return;
        }
    }
    if (((*(uint *)(param_3 + 0x10) & 0x4000) != 0) &&
        ((*(longlong *)(DAT_140c65898 + 0x78) == 0 ||
          (*(int *)(param_1 + 0x154) != *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))))) {
        if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
            return;
        }
        if (*(int *)(param_1 + 0x154) != *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8)) {
            return;
        }
    }
    FUN_1403d90d0(DAT_140c65898);
    if (*(int *)(param_3 + 0x30) != 0) {
        in_stack_ffffffffffffff68 = (longlong **)0x0;
        iVar6 = (**(code **)(*DAT_140c659a0 + 0x18))();
        if (iVar6 == 0) {
            return;
        }
    }
    if (((*(int *)(param_3 + 8) == 2) && ((*(uint *)(param_3 + 0x10) & 0x1000) != 0)) &&
        ((lVar9 != 0 && (lVar11 = *(longlong *)(lVar9 + 0x15c8), puVar14 = puVar13, lVar11 != 0)))) {
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x38) + 0x138) + 0x70) + 4) ==
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 4)) {
                puVar14 = (undefined8 *)(ulonglong)(uint)((int)puVar14 + *(int *)(lVar11 + 0x50));
            }
            lVar11 = *(longlong *)(lVar11 + 0x18);
        } while (lVar11 != 0);
        if (1 < (uint)puVar14) {
            FUN_140469b60();
        }
    }
    iVar6 = -1;
    local_70 = (longlong *)0x0;
    if (param_6 == 0) {
        if (((*(byte *)(param_3 + 0x34) & 4) != 0) ||
            (pplVar16 = (longlong **)(param_1 + 0x230), *(int *)(param_3 + 0x28) == -1)) {
            pplVar16 = (longlong **)(param_1 + 0x218);
        }
    }
    else {
        pplVar16 = (longlong **)(param_1 + 0x228);
    }
    if (((*(byte *)(param_3 + 0x34) & 4) != 0) || (*(int *)(param_3 + 0x28) == -1)) {
        local_70 = (longlong *)(param_1 + 0x220);
    }
    if ((*(byte *)(param_3 + 0x10) & 0x10) == 0) {
        local_78 = 0;
    }
    else {
        local_78 = FUN_140543460(param_1,param_4);
    }
    puVar14 = puVar13;
    pplVar26 = pplVar16;
    switch(*(undefined4 *)(param_3 + 0x20)) {
        case 0:
            if (lVar9 != 0) {
                lVar11 = FUN_14018b280(0xc0);
                if (lVar11 != 0) {
                    puVar13 = (undefined8 *)
                            FUN_14054ee30(lVar11,param_4,*(undefined4 *)(param_1 + 0x154),
                                          *(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                }
                uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                      local_78);
                *(undefined4 *)puVar13 = uVar7;
                if ((param_5 != 0) &&
                    (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                      (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                    iVar6 = *(int *)(param_3 + 0x28);
                }
                *(int *)((longlong)puVar13 + 4) = iVar6;
                *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
                if (((param_4 == *(uint *)(param_1 + 0x154)) &&
                     (((*(int *)(param_1 + 0xc0) != 0 || (*(int *)(lVar9 + 0xd58) != 0)) &&
                       ((*(uint *)(param_3 + 0x34) & 0x800) == 0)))) ||
                    ((*(uint *)(param_3 + 0x34) & 0x400) != 0)) {
                    *(undefined4 *)(puVar13 + 0x16) = 4;
                }
                else {
                    *(undefined4 *)(puVar13 + 0x16) = 5;
                }
                uVar7 = FUN_140542e20(param_1,param_5,param_4);
                *(undefined4 *)((longlong)puVar13 + 0xb4) = uVar7;
                *(undefined4 *)(puVar13 + 0x17) = *(undefined4 *)(param_1 + 0x54);
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
                *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
                FUN_140578460(lVar9,0);
            }
            break;
        case 1:
            puVar14 = (undefined8 *)FUN_14018b280(0xa0,0);
            if (puVar14 != (undefined8 *)0x0) {
                uVar7 = *(undefined4 *)(param_1 + 0x5c);
                FUN_1407e4830(puVar14,0,0xa0);
                FUN_14054e9f0(puVar14,uVar7,pplVar16,param_3);
                *(uint *)(puVar14 + 0x13) = param_4;
                puVar13 = puVar14;
            }
            uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                  local_78);
            *(undefined4 *)puVar13 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar13 + 4) = iVar6;
            *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
            *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
            FUN_140578460(lVar9,1,param_4,puVar13,
                          (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                          (ulonglong)*(uint *)(param_1 + 0x5c),pplVar16,local_70);
            break;
        case 2:
            if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                 (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) ||
                (((*(longlong *)(param_3 + 0x38) != 0 &&
                   (1e-05 < *(float *)(*(longlong *)(param_3 + 0x38) + 0x10))) ||
                  ((iVar8 = FUN_14039e0e0(DAT_140c65898), iVar8 != 0 &&
                                                          (*(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0) == param_4)))))) {
                puVar14 = (undefined8 *)FUN_14018b280(0xb8);
                if (puVar14 != (undefined8 *)0x0) {
                    uVar7 = *(undefined4 *)(param_1 + 0x5c);
                    FUN_1407e4830(puVar14,0,0xb8);
                    FUN_14054e9f0(puVar14,uVar7,pplVar16,param_3);
                    puVar13 = puVar14;
                }
                uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                      local_78);
                *(undefined4 *)puVar13 = uVar7;
                if ((param_5 != 0) &&
                    (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                      (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                    iVar6 = *(int *)(param_3 + 0x28);
                }
                *(int *)((longlong)puVar13 + 4) = iVar6;
                *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
                *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(param_3 + 0x40);
                uVar7 = FUN_140542e20(param_1,param_5,param_4);
                *(undefined4 *)(puVar13 + 0x16) = uVar7;
                fVar18 = 0.0;
                uVar7 = 0;
                fVar19 = fVar18;
                if (*(float **)(param_3 + 0x38) != (float *)0x0) {
                    fVar19 = **(float **)(param_3 + 0x38);
                }
                *(float *)((longlong)puVar13 + 0x9c) = fVar19;
                fVar19 = fVar18;
                if (*(longlong *)(param_3 + 0x38) != 0) {
                    fVar19 = *(float *)(*(longlong *)(param_3 + 0x38) + 4);
                }
                *(float *)(puVar13 + 0x14) = fVar19;
                fVar19 = fVar18;
                if (*(longlong *)(param_3 + 0x38) != 0) {
                    fVar19 = *(float *)(*(longlong *)(param_3 + 0x38) + 8);
                }
                *(int *)((longlong)puVar13 + 0xa4) = (int)(longlong)fVar19;
                if (*(longlong *)(param_3 + 0x38) != 0) {
                    uVar7 = *(undefined4 *)(*(longlong *)(param_3 + 0x38) + 0xc);
                }
                *(undefined4 *)(puVar13 + 0x15) = uVar7;
                if (*(longlong *)(param_3 + 0x38) != 0) {
                    fVar18 = *(float *)(*(longlong *)(param_3 + 0x38) + 0x10);
                }
                *(float *)((longlong)puVar13 + 0xac) = fVar18;
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
                *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
                FUN_140578460(lVar9,2);
            }
            break;
        case 3:
            if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                 (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) ||
                ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
                  (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))))) {
                puVar14 = (undefined8 *)FUN_14018b280(0xa8,0);
                if (puVar14 != (undefined8 *)0x0) {
                    fVar18 = 0.0;
                    if (*(float **)(param_3 + 0x38) == (float *)0x0) {
                        fVar19 = 0.0;
                    }
                    else {
                        fVar19 = **(float **)(param_3 + 0x38);
                    }
                    FUN_14054e9f0(puVar14,*(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                    *(int *)(puVar14 + 0x13) = (int)(longlong)fVar19;
                    fVar19 = fVar18;
                    if ((*(longlong *)(param_3 + 0x38) != 0) &&
                        (fVar20 = *(float *)(*(longlong *)(param_3 + 0x38) + 4), fVar20 != fVar18)) {
                        fVar19 = 1000.0 / fVar20;
                    }
                    *(float *)((longlong)puVar14 + 0x9c) = fVar19;
                    fVar19 = fVar18;
                    if (*(longlong *)(param_3 + 0x38) != 0) {
                        fVar19 = *(float *)(*(longlong *)(param_3 + 0x38) + 8);
                    }
                    *(int *)(puVar14 + 0x14) = (int)fVar19;
                    if (*(longlong *)(param_3 + 0x38) != 0) {
                        fVar18 = *(float *)(*(longlong *)(param_3 + 0x38) + 0xc);
                    }
                    *(int *)((longlong)puVar14 + 0xa4) = (int)fVar18;
                    puVar13 = puVar14;
                }
                uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                      local_78);
                *(undefined4 *)puVar13 = uVar7;
                if ((param_5 != 0) &&
                    (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                      (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                    iVar6 = *(int *)(param_3 + 0x28);
                }
                *(int *)((longlong)puVar13 + 4) = iVar6;
                *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
                *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
                FUN_140578460(lVar9,3,param_4,puVar13,
                              (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                              (ulonglong)*(uint *)(param_1 + 0x5c),pplVar16,local_70);
            }
            break;
        case 4:
            if (((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
                 (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8))) ||
                ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
                  (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))))) {
                puVar14 = (undefined8 *)FUN_14018b280(0xa0,0);
                if (puVar14 != (undefined8 *)0x0) {
                    if (*(float **)(param_3 + 0x38) == (float *)0x0) {
                        fVar18 = 0.0;
                    }
                    else {
                        fVar18 = **(float **)(param_3 + 0x38);
                    }
                    FUN_14054e9f0(puVar14,*(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                    *(int *)(puVar14 + 0x13) = (int)(longlong)fVar18;
                    puVar13 = puVar14;
                }
                uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                      local_78);
                *(undefined4 *)puVar13 = uVar7;
                if ((param_5 != 0) &&
                    (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                      (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                    iVar6 = *(int *)(param_3 + 0x28);
                }
                *(int *)((longlong)puVar13 + 4) = iVar6;
                *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
                *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
                FUN_140578460(lVar9,4,param_4,puVar13,
                              (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                              (ulonglong)*(uint *)(param_1 + 0x5c),pplVar16,local_70);
            }
            break;
        case 5:
            if (lVar9 != 0) {
                lVar9 = FUN_14018b280(0x100,0);
                if (lVar9 != 0) {
                    in_stack_ffffffffffffff68 = pplVar16;
                    puVar13 = (undefined8 *)
                            FUN_14054e950(lVar9,param_4,*(undefined4 *)(param_1 + 0x154),
                                          *(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                }
                uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                      local_78);
                *(undefined4 *)puVar13 = uVar7;
                if ((param_5 != 0) &&
                    (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                      (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                    iVar6 = *(int *)(param_3 + 0x28);
                }
                *(int *)((longlong)puVar13 + 4) = iVar6;
                *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
                *(undefined4 *)((longlong)puVar13 + 0xd4) = *(undefined4 *)(param_3 + 0x4c);
                *(undefined4 *)(puVar13 + 0x1b) = *(undefined4 *)(param_3 + 0x50);
                puVar13[0x13] = *(undefined8 *)(param_3 + 0x58);
                *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(param_3 + 0x60);
                *(undefined4 *)((longlong)puVar13 + 0xa4) = *(undefined4 *)(param_3 + 100);
                *(undefined4 *)(puVar13 + 0x15) = *(undefined4 *)(param_3 + 0x68);
                *(undefined4 *)((longlong)puVar13 + 0xac) = *(undefined4 *)(param_3 + 0x6c);
                *(undefined4 *)((longlong)puVar13 + 0xdc) = *(undefined4 *)(param_3 + 0x54);
                *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(param_3 + 0x40);
                if ((*(uint *)(param_3 + 0x10) & 0x20) == 0) {
                    uVar15 = (*(uint *)(param_3 + 0x10) & 0xff) >> 5 & 2;
                }
                else {
                    uVar15 = 1;
                }
                *(uint *)((longlong)puVar13 + 0xec) = uVar15;
                *(undefined4 *)(puVar13 + 0x1e) = param_7;
                *(undefined4 *)((longlong)puVar13 + 0xf4) = *(undefined4 *)(param_1 + 0x158);
                *(undefined4 *)(puVar13 + 0x1f) = *(undefined4 *)(param_3 + 0x98);
                *(uint *)((longlong)puVar13 + 0xe4) = *(uint *)(param_3 + 0x10) >> 7 & 1;
                *(uint *)(puVar13 + 0x1d) = *(uint *)(param_3 + 0x10) >> 10 & 1;
                uVar7 = *(undefined4 *)(param_3 + 0x74);
                uVar3 = *(undefined4 *)(param_3 + 0x78);
                uVar5 = *(undefined4 *)(param_3 + 0x7c);
                *(undefined4 *)(puVar13 + 0x16) = *(undefined4 *)(param_3 + 0x70);
                *(undefined4 *)((longlong)puVar13 + 0xb4) = uVar7;
                *(undefined4 *)(puVar13 + 0x17) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0xbc) = uVar5;
                *(undefined4 *)((longlong)puVar13 + 0xfc) = *(undefined4 *)(param_3 + 0x88);
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
                *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
                iVar6 = FUN_140578460(lVar9,5,param_4,puVar13,
                                      (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                                      (ulonglong)*(uint *)(param_1 + 0x5c),pplVar16,local_70);
                if (-1 < iVar6) {
                    plVar2 = *pplVar16;
                    FUN_1403f9c60();
                    (**(code **)(*plVar2 + 0x58))(plVar2);
                }
            }
            break;
        case 6:
            puVar14 = (undefined8 *)FUN_14018b280(400);
            if (puVar14 != (undefined8 *)0x0) {
                uVar7 = *(undefined4 *)(param_1 + 0x5c);
                FUN_1407e4830(puVar14,0,0xd0);
                FUN_1407e4830(puVar14,0,400);
                FUN_14054e9f0(puVar14,uVar7,pplVar16,param_3);
                *(uint *)(puVar14 + 0x19) = *(uint *)(param_3 + 0x34) & 1;
                puVar13 = puVar14;
            }
            uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                  local_78);
            *(undefined4 *)puVar13 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar13 + 4) = iVar6;
            *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_3 + 0x20);
            *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(param_3 + 0x40);
            uVar7 = *(undefined4 *)(param_3 + 0x74);
            uVar3 = *(undefined4 *)(param_3 + 0x78);
            uVar5 = *(undefined4 *)(param_3 + 0x7c);
            *(undefined4 *)(puVar13 + 0x16) = *(undefined4 *)(param_3 + 0x70);
            *(undefined4 *)((longlong)puVar13 + 0xb4) = uVar7;
            *(undefined4 *)(puVar13 + 0x17) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0xbc) = uVar5;
            *(undefined4 *)((longlong)puVar13 + 0x184) = *(undefined4 *)(param_3 + 0x88);
            FUN_1408fe3d0();
            uVar15 = extraout_XMM0_Da;
            FUN_1408fc950();
            uVar24 = 0x80000000;
            *(uint *)(puVar13 + 0x20) = uVar15;
            *(undefined4 *)((longlong)puVar13 + 0xe4) = 0;
            *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
            *(undefined4 *)(puVar13 + 0x1c) = extraout_XMM0_Da_00;
            *(undefined4 *)(puVar13 + 0x21) = extraout_XMM0_Da_00;
            *(undefined8 *)((longlong)puVar13 + 0xf4) = 0x3f800000;
            *(undefined4 *)((longlong)puVar13 + 0xfc) = 0;
            *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
            *(uint *)(puVar13 + 0x1d) = uVar15 ^ 0x80000000;
            *(undefined4 *)((longlong)puVar13 + 0x10c) = 0;
            uVar5 = uRam0000000140c7844c;
            uVar3 = uRam0000000140c78448;
            uVar7 = uRam0000000140c78444;
            *(undefined4 *)(puVar13 + 0x22) = _DAT_140c78440;
            *(undefined4 *)((longlong)puVar13 + 0x114) = uVar7;
            *(undefined4 *)(puVar13 + 0x23) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x11c) = uVar5;
            *(undefined4 *)(puVar13 + 0x22) = *(undefined4 *)(param_1 + 0x160);
            *(undefined4 *)((longlong)puVar13 + 0x114) = *(undefined4 *)(param_1 + 0x164);
            *(undefined4 *)(puVar13 + 0x23) = *(undefined4 *)(param_1 + 0x168);
            if (param_2 == 4) {
                if (param_8 == (undefined4 *)0x0) {
                    LAB_1405446bb:
                    FUN_14018b900(puVar13,0);
                    return;
                }
                *(undefined4 *)(puVar13 + 0x1a) = 0;
                *(undefined4 *)(puVar13 + 0x2c) = param_10;
                FUN_1408fe3d0();
                uVar15 = extraout_XMM0_Da_01;
                FUN_1408fc950();
                *(uint *)(puVar13 + 0x20) = uVar15;
                *(undefined4 *)((longlong)puVar13 + 0xe4) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xf4) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + 0xfc) = 0;
                *(undefined4 *)(puVar13 + 0x1c) = extraout_XMM0_Da_02;
                *(undefined4 *)(puVar13 + 0x21) = extraout_XMM0_Da_02;
                *(uint *)(puVar13 + 0x1d) = uVar15 ^ uVar24;
                *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
                *(undefined4 *)((longlong)puVar13 + 0x10c) = 0;
                uVar5 = uRam0000000140c7844c;
                uVar3 = uRam0000000140c78448;
                uVar7 = uRam0000000140c78444;
                *(undefined4 *)(puVar13 + 0x22) = _DAT_140c78440;
                *(undefined4 *)((longlong)puVar13 + 0x114) = uVar7;
                *(undefined4 *)(puVar13 + 0x23) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0x11c) = uVar5;
                *(undefined4 *)(puVar13 + 0x22) = *param_8;
                *(undefined4 *)((longlong)puVar13 + 0x114) = param_8[1];
                *(undefined4 *)(puVar13 + 0x23) = param_8[2];
            }
            else if (param_2 == 3) {
                *(undefined4 *)(puVar13 + 0x1a) = 0;
                FUN_1408fe3d0();
                uVar15 = extraout_XMM0_Da_03;
                FUN_1408fc950();
                *(uint *)(puVar13 + 0x20) = uVar15;
                *(undefined4 *)((longlong)puVar13 + 0xe4) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xf4) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + 0xfc) = 0;
                *(undefined4 *)(puVar13 + 0x1c) = extraout_XMM0_Da_04;
                *(undefined4 *)(puVar13 + 0x21) = extraout_XMM0_Da_04;
                *(uint *)(puVar13 + 0x1d) = uVar15 ^ uVar24;
                *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
                *(undefined4 *)((longlong)puVar13 + 0x10c) = 0;
                uVar5 = uRam0000000140c7844c;
                uVar3 = uRam0000000140c78448;
                uVar7 = uRam0000000140c78444;
                *(undefined4 *)(puVar13 + 0x22) = _DAT_140c78440;
                *(undefined4 *)((longlong)puVar13 + 0x114) = uVar7;
                *(undefined4 *)(puVar13 + 0x23) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0x11c) = uVar5;
                *(undefined4 *)(puVar13 + 0x22) = *(undefined4 *)(param_1 + 0x160);
                *(undefined4 *)((longlong)puVar13 + 0x114) = *(undefined4 *)(param_1 + 0x164);
                *(undefined4 *)(puVar13 + 0x23) = *(undefined4 *)(param_1 + 0x168);
            }
            else if ((*(uint *)(param_3 + 0x10) & 0x200) == 0) {
                iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x7c);
                if (((iVar6 == 4) || (iVar6 - 7U < 2)) && (param_2 == 1)) {
                    *(undefined4 *)(puVar13 + 0x1a) = 0;
                    if (lVar9 != 0) {
                        *(undefined4 *)(puVar13 + 0x1c) = *(undefined4 *)(lVar9 + 0x11b0);
                        *(undefined4 *)((longlong)puVar13 + 0xe4) = *(undefined4 *)(lVar9 + 0x11b4);
                        *(undefined4 *)(puVar13 + 0x1d) = *(undefined4 *)(lVar9 + 0x11b8);
                        *(undefined4 *)(puVar13 + 0x1e) = *(undefined4 *)(lVar9 + 0x11c0);
                        *(undefined4 *)((longlong)puVar13 + 0xf4) = *(undefined4 *)(lVar9 + 0x11c4);
                        *(undefined4 *)(puVar13 + 0x1f) = *(undefined4 *)(lVar9 + 0x11c8);
                        *(undefined4 *)(puVar13 + 0x20) = *(undefined4 *)(lVar9 + 0x11d0);
                        *(undefined4 *)((longlong)puVar13 + 0x104) = *(undefined4 *)(lVar9 + 0x11d4);
                        *(undefined4 *)(puVar13 + 0x21) = *(undefined4 *)(lVar9 + 0x11d8);
                    }
                }
                else {
                    *(undefined4 *)(puVar13 + 0x1a) = 1;
                    *(uint *)(puVar13 + 0x2c) = param_4;
                    *(undefined4 *)((longlong)puVar13 + 0x164) = *(undefined4 *)(param_3 + 0x54);
                    if ((*(uint *)(param_3 + 0x10) & 0x20) == 0) {
                        uVar15 = (*(uint *)(param_3 + 0x10) & 0xff) >> 5 & 2;
                    }
                    else {
                        uVar15 = 1;
                    }
                    *(uint *)((longlong)puVar13 + 0x17c) = uVar15;
                    *(undefined4 *)(puVar13 + 0x30) = *(undefined4 *)(param_3 + 0x98);
                }
            }
            else {
                lVar9 = *(longlong *)(param_1 + 0x358);
                local_68 = lVar9;
                lVar11 = *(longlong *)(lVar9 + 8);
                while (lVar11 != 0) {
                    if (*(uint *)(lVar11 + 0x20) < param_4) {
                        lVar11 = *(longlong *)(lVar11 + 0x18);
                    }
                    else {
                        local_68 = lVar11;
                        lVar11 = *(longlong *)(lVar11 + 0x10);
                    }
                }
                if ((local_68 == lVar9) || (param_4 < *(uint *)(local_68 + 0x20))) {
                    local_68 = lVar9;
                }
                if ((local_68 == *(longlong *)(param_1 + 0x358)) || (local_68 == -0x24)) goto LAB_1405446bb;
                *(undefined4 *)(puVar13 + 0x1a) = 0;
                FUN_1408fe3d0();
                uVar15 = extraout_XMM0_Da_05;
                FUN_1408fc950();
                *(uint *)(puVar13 + 0x20) = uVar15;
                *(undefined4 *)((longlong)puVar13 + 0xe4) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xec) = 0;
                *(undefined8 *)((longlong)puVar13 + 0xf4) = 0x3f800000;
                *(undefined4 *)((longlong)puVar13 + 0xfc) = 0;
                *(undefined4 *)(puVar13 + 0x1c) = extraout_XMM0_Da_06;
                *(undefined4 *)(puVar13 + 0x21) = extraout_XMM0_Da_06;
                *(uint *)(puVar13 + 0x1d) = uVar15 ^ uVar24;
                *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
                *(undefined4 *)((longlong)puVar13 + 0x10c) = 0;
                uVar5 = uRam0000000140c7844c;
                uVar3 = uRam0000000140c78448;
                uVar7 = uRam0000000140c78444;
                *(undefined4 *)(puVar13 + 0x22) = _DAT_140c78440;
                *(undefined4 *)((longlong)puVar13 + 0x114) = uVar7;
                *(undefined4 *)(puVar13 + 0x23) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0x11c) = uVar5;
                *(undefined4 *)(puVar13 + 0x22) = *(undefined4 *)(local_68 + 0x2c);
                *(undefined4 *)((longlong)puVar13 + 0x114) = *(undefined4 *)(local_68 + 0x30);
                *(undefined4 *)(puVar13 + 0x23) = *(undefined4 *)(local_68 + 0x34);
                *(undefined4 *)(puVar13 + 0x2c) = *(undefined4 *)(local_68 + 0x3c);
            }
            uVar7 = param_7;
            if ((char)*(uint *)(param_3 + 0x10) < '\0') {
                LAB_140544814:
                lVar9 = FUN_1403d90d0(DAT_140c65898,uVar7);
                if ((lVar9 != 0) &&
                    ((1e-05 < (float)((uint)(*(float *)(lVar9 + 0x11e0) - *(float *)(puVar13 + 0x22)) &
                                      0x7fffffff) ||
                      (1e-05 < (float)((uint)(*(float *)(lVar9 + 0x11e8) - *(float *)(puVar13 + 0x23)) &
                                       0x7fffffff))))) {
                    fVar20 = *(float *)(lVar9 + 0x11e0) - *(float *)(puVar13 + 0x22);
                    fVar21 = *(float *)(lVar9 + 0x11e4) - *(float *)((longlong)puVar13 + 0x114);
                    fVar22 = *(float *)(lVar9 + 0x11e8) - *(float *)(puVar13 + 0x23);
                    fVar23 = *(float *)(lVar9 + 0x11ec) - 0.0;
                    fVar18 = fVar21 * fVar21;
                    uVar25 = SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff)
                            << 0x20) >> 0x40,0),fVar18),0);
                    uVar4 = uVar25 & 0xffffffff;
                    fVar19 = fVar20 * fVar20 + (float)uVar4 + fVar22 * fVar22;
                    auVar17 = rsqrtss(CONCAT412(fVar18,CONCAT48(fVar18,uVar25 << 0x20 | uVar4)),
                                      CONCAT412(fVar23 * fVar23,
                                                CONCAT48(fVar22 * fVar22,CONCAT44(fVar18,fVar19))));
                    fVar18 = SUB164(auVar17,0);
                    fVar18 = (3.0 - fVar19 * fVar18 * fVar18) * 0.5 * fVar18;
                    if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                    }
                    *(float *)(puVar13 + 0x20) = fVar18 * fVar20;
                    *(float *)((longlong)puVar13 + 0x104) = fVar18 * fVar21;
                    *(float *)(puVar13 + 0x21) = fVar18 * fVar22;
                    fVar20 = *(float *)(puVar13 + 0x21) * 1.0 - *(float *)((longlong)puVar13 + 0x104) * 0.0;
                    fVar21 = *(float *)(puVar13 + 0x20) * 0.0 - *(float *)(puVar13 + 0x21) * 0.0;
                    fVar22 = *(float *)((longlong)puVar13 + 0x104) * 0.0 - *(float *)(puVar13 + 0x20) * 1.0;
                    fVar23 = *(float *)((longlong)puVar13 + 0x10c) * 0.0 -
                             *(float *)((longlong)puVar13 + 0x10c) * 0.0;
                    fVar18 = fVar21 * fVar21;
                    fVar19 = fVar20 * fVar20 + fVar18 + fVar22 * fVar22;
                    auVar17 = rsqrtss(CONCAT412(fVar18,CONCAT48(fVar18,CONCAT44(fVar18,fVar18))),
                                      CONCAT412(fVar23 * fVar23,
                                                CONCAT48(fVar22 * fVar22,CONCAT44(fVar18,fVar19))));
                    fVar18 = SUB164(auVar17,0);
                    fVar18 = (3.0 - fVar19 * fVar18 * fVar18) * 0.5 * fVar18;
                    if (fVar18 <= 0.0) {
                        fVar18 = 0.0;
                    }
                    *(float *)(puVar13 + 0x1c) = fVar18 * fVar20;
                    *(float *)((longlong)puVar13 + 0xe4) = fVar18 * fVar21;
                    *(float *)(puVar13 + 0x1d) = fVar18 * fVar22;
                    *(float *)(puVar13 + 0x1e) =
                            *(float *)(puVar13 + 0x1d) * *(float *)((longlong)puVar13 + 0x104) -
                            *(float *)((longlong)puVar13 + 0xe4) * *(float *)(puVar13 + 0x21);
                    *(float *)((longlong)puVar13 + 0xf4) =
                            *(float *)(puVar13 + 0x1c) * 0.0 -
                            *(float *)(puVar13 + 0x1d) * *(float *)(puVar13 + 0x20);
                    *(float *)(puVar13 + 0x1f) =
                            *(float *)((longlong)puVar13 + 0xe4) * *(float *)(puVar13 + 0x20) -
                            *(float *)(puVar13 + 0x1c) * *(float *)((longlong)puVar13 + 0x104);
                }
            }
            else if ((*(uint *)(param_3 + 0x10) >> 10 & 1) != 0) {
                uVar7 = *(undefined4 *)(param_1 + 0x158);
                goto LAB_140544814;
            }
            *(undefined4 *)((longlong)puVar13 + 0x174) = param_7;
            *(undefined4 *)(puVar13 + 0x2f) = *(undefined4 *)(param_1 + 0x158);
            *(uint *)((longlong)puVar13 + 0x16c) = *(uint *)(param_3 + 0x10) >> 7 & 1;
            *(uint *)(puVar13 + 0x2e) = *(uint *)(param_3 + 0x10) >> 10 & 1;
            puVar13[0x13] = *(undefined8 *)(param_3 + 0x58);
            *(undefined4 *)(puVar13 + 0x14) = *(undefined4 *)(param_3 + 0x60);
            *(undefined4 *)((longlong)puVar13 + 0xa4) = *(undefined4 *)(param_3 + 100);
            *(undefined4 *)(puVar13 + 0x15) = *(undefined4 *)(param_3 + 0x68);
            *(undefined4 *)((longlong)puVar13 + 0xac) = *(undefined4 *)(param_3 + 0x6c);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70);
            *(int *)(puVar13 + 10) = (*(int *)(lVar9 + 0x10c) << 0x17) >> 0x1f;
            iVar6 = FUN_140578460(lVar9,6,param_4,puVar13,
                                  (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                                  (ulonglong)*(uint *)(param_1 + 0x5c),pplVar16,local_70);
            if (-1 < iVar6) {
                plVar2 = *pplVar16;
                FUN_1403f9c60();
                (**(code **)(*plVar2 + 0x58))(plVar2);
            }
            break;
        case 7:
            puVar12 = (undefined8 *)FUN_14018b280(0xa0);
            if (puVar12 != (undefined8 *)0x0) {
                in_stack_ffffffffffffff68 = pplVar16;
                FUN_14054eb60(puVar12,param_4,*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x5c)
                        ,pplVar16,param_3);
                *(uint *)(puVar12 + 0x13) = param_4;
                puVar14 = puVar12;
            }
            uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                  local_78);
            *(undefined4 *)puVar14 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar14 + 4) = iVar6;
            *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(param_3 + 0x20);
            *(int *)(puVar14 + 10) =
                    (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) << 0x17) >> 0x1f;
            uVar15 = *(uint *)(param_1 + 0x5c);
            uVar25 = (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000;
            FUN_1400035b0();
            if (((param_4 == 0) || (lVar9 = FUN_1403d90d0(), lVar9 == 0)) ||
                (*(longlong *)(lVar9 + 0x16e8) != 0)) {
                FUN_1400035b0();
                uVar15 = DAT_140c8af30 + 1 & 0x3fffffff;
                if ((uVar15 == 0) || (DAT_140c8af30 = uVar15, uVar15 == 0x3fffffff)) {
                    DAT_140c8af30 = 1;
                }
                FUN_140576f90(uVar15,puVar14,pplVar16);
                FUN_14018b900(puVar14,0);
                return;
            }
            puVar12 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = puVar14;
                *(uint *)(puVar12 + 1) = uVar15;
                *(undefined4 *)((longlong)puVar12 + 0xc) = 7;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar13 = puVar12;
            }
            goto LAB_140544f98;
        case 8:
            puVar12 = (undefined8 *)FUN_14018b280();
            if (puVar12 != (undefined8 *)0x0) {
                uVar3 = *(undefined4 *)(param_1 + 0x5c);
                if (*(longlong *)(param_3 + 0x90) != 0) {
                    uVar7 = *(undefined4 *)(*(longlong *)(param_3 + 0x90) + 0x7c);
                }
                *(undefined4 *)(puVar12 + 0x13) = uVar7;
                FUN_14054e9f0(puVar12,uVar3,pplVar16,param_3);
                puVar14 = puVar12;
            }
            uVar7 = FUN_140542e70();
            *(undefined4 *)puVar14 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar14 + 4) = iVar6;
            *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(param_3 + 0x20);
            uVar15 = *(uint *)(param_1 + 0x5c);
            uVar25 = (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000;
            FUN_1400035b0();
            if (((param_4 == 0) || (lVar9 = FUN_1403d90d0(), lVar9 == 0)) ||
                (*(longlong *)(lVar9 + 0x16e8) != 0)) {
                FUN_1400035b0();
                DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
                if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
                    DAT_140c8af30 = 1;
                }
                if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                    (param_4 == *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 8))) {
                    FUN_1405770f0(DAT_140c65b78,puVar14,pplVar16);
                }
                FUN_14018b900(puVar14,0);
                return;
            }
            puVar12 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = puVar14;
                *(uint *)(puVar12 + 1) = uVar15;
                *(undefined4 *)((longlong)puVar12 + 0xc) = 8;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar13 = puVar12;
            }
            goto LAB_140544f98;
        case 9:
            puVar12 = (undefined8 *)FUN_14018b280(0xb0);
            if (puVar12 != (undefined8 *)0x0) {
                FUN_14054e9f0(puVar12,*(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                puVar14 = puVar12;
            }
            uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                  local_78);
            *(undefined4 *)puVar14 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar14 + 4) = iVar6;
            fVar18 = 0.0;
            fVar19 = 0.0;
            *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(param_3 + 0x20);
            if (*(float **)(param_3 + 0x38) != (float *)0x0) {
                fVar18 = **(float **)(param_3 + 0x38);
            }
            *(uint *)((longlong)puVar14 + 0x9c) = param_4;
            *(int *)(puVar14 + 0x13) = (int)(longlong)fVar18;
            *(undefined4 *)(puVar14 + 0x14) = *(undefined4 *)(param_1 + 0x154);
            if (*(longlong *)(param_3 + 0x38) != 0) {
                fVar19 = *(float *)(*(longlong *)(param_3 + 0x38) + 4);
            }
            *(int *)((longlong)puVar14 + 0xa4) = (int)(longlong)fVar19;
            *(undefined4 *)(puVar14 + 0x15) = *(undefined4 *)(param_1 + 0x130);
            *(int *)(puVar14 + 10) =
                    (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) << 0x17) >> 0x1f;
            uVar15 = *(uint *)(param_1 + 0x5c);
            uVar25 = (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000;
            FUN_1400035b0();
            if (((param_4 == 0) || (lVar9 = FUN_1403d90d0(), lVar9 == 0)) ||
                (*(longlong *)(lVar9 + 0x16e8) != 0)) {
                FUN_1400035b0();
                DAT_140c8af30 = DAT_140c8af30 + 1 & 0x3fffffff;
                if ((DAT_140c8af30 == 0) || (DAT_140c8af30 == 0x3fffffff)) {
                    DAT_140c8af30 = 1;
                }
                FUN_140577250();
                FUN_14018b900(puVar14,0);
                return;
            }
            puVar12 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = puVar14;
                *(uint *)(puVar12 + 1) = uVar15;
                *(undefined4 *)((longlong)puVar12 + 0xc) = 9;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar13 = puVar12;
            }
            goto LAB_140544f98;
        case 10:
            if (*(float **)(param_3 + 0x38) == (float *)0x0) {
                fVar18 = 0.0;
            }
            else {
                fVar18 = **(float **)(param_3 + 0x38);
            }
            lVar9 = FUN_140237680((longlong)fVar18);
            if (lVar9 != 0) {
                FUN_1405458e0(param_1,lVar9);
            }
            break;
        case 0xc:
            puVar12 = (undefined8 *)FUN_14018b280(0xa0);
            if (puVar12 != (undefined8 *)0x0) {
                FUN_14054e9f0(puVar12,*(undefined4 *)(param_1 + 0x5c),pplVar16,param_3);
                puVar14 = puVar12;
            }
            uVar7 = FUN_140542e70(param_1,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0xc),
                                  local_78);
            *(undefined4 *)puVar14 = uVar7;
            if ((param_5 != 0) &&
                (((param_5 != 1 || (iVar6 = *(int *)(param_1 + 0x50), iVar6 == 0)) ||
                  (((*(byte *)(param_3 + 0x34) & 4) == 0 && (*(int *)(param_3 + 0x28) != -1)))))) {
                iVar6 = *(int *)(param_3 + 0x28);
            }
            *(int *)((longlong)puVar14 + 4) = iVar6;
            uVar7 = *(undefined4 *)(param_3 + 0x20);
            *(uint *)(puVar14 + 0x13) = param_4;
            *(undefined4 *)(puVar14 + 6) = uVar7;
            *(int *)(puVar14 + 10) =
                    (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) << 0x17) >> 0x1f;
            uVar15 = *(uint *)(param_1 + 0x5c);
            uVar25 = (ulonglong)in_stack_ffffffffffffff68 & 0xffffffff00000000;
            FUN_1400035b0();
            if (((param_4 == 0) || (lVar9 = FUN_1403d90d0(), lVar9 == 0)) ||
                (*(longlong *)(lVar9 + 0x16e8) != 0)) {
                FUN_1400035b0();
                uVar15 = DAT_140c8af30 + 1 & 0x3fffffff;
                if ((uVar15 == 0) || (DAT_140c8af30 = uVar15, uVar15 == 0x3fffffff)) {
                    DAT_140c8af30 = 1;
                }
                FUN_140577510(uVar15,puVar14,pplVar16);
                FUN_14018b900(puVar14,0);
                return;
            }
            puVar12 = (undefined8 *)FUN_14018b280(0x40);
            if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = puVar14;
                *(uint *)(puVar12 + 1) = uVar15;
                *(undefined4 *)((longlong)puVar12 + 0xc) = 0xc;
                puVar12[2] = 0;
                puVar12[3] = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[6] = 0;
                puVar12[7] = 0;
                puVar13 = puVar12;
            }
        LAB_140544f98:
            plVar2 = (longlong *)(lVar9 + 0x5b8);
            if (puVar13[2] == 0) {
                puVar13[2] = plVar2;
                plVar1 = puVar13 + 3;
                *plVar1 = *plVar2;
                *plVar2 = (longlong)puVar13;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0x10) = plVar1;
                }
            }
            if ((local_70 != (longlong *)0x0) && (puVar13[6] == 0)) {
                puVar13[6] = local_70;
                plVar2 = puVar13 + 7;
                *plVar2 = *local_70;
                *local_70 = (longlong)puVar13;
                if (*plVar2 != 0) {
                    *(longlong **)(*plVar2 + 0x30) = plVar2;
                }
            }
            FUN_1400035b0(0x4b,3,0,param_4,uVar25 & 0xffffffff00000000 | (ulonglong)*(uint *)(puVar14 + 5),
                          (ulonglong)pplVar26 & 0xffffffff00000000 | (ulonglong)uVar15,pplVar16,local_70);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405450f0(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    char *pcVar5;
    undefined auVar6 [12];
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    char *pcVar15;
    undefined4 *puVar16;
    undefined4 *puVar17;
    undefined4 uVar18;
    undefined4 *puVar19;
    longlong lVar20;
    undefined4 *puVar21;
    char *pcVar22;
    char *pcVar23;
    undefined4 *puVar24;
    int iVar25;
    undefined4 uVar26;
    longlong lVar27;
    uint uVar28;
    bool bVar29;
    float fVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    float fVar33;
    float fVar34;
    ulonglong local_198;
    ulonglong local_190;
    undefined local_188 [16];
    undefined local_178 [16];
    undefined4 local_168 [19];
    int iStack284;
    uint local_118;
    float fStack208;

    lVar27 = 0;
    local_190 = 0;
    if (*(char *)(param_2 + 0x40) != '\0') {
        fVar34 = 1.0;
        do {
            lVar3 = *(longlong *)(param_2 + 0x48);
            iVar1 = *(int *)(param_1 + 0x158);
            iVar2 = *(int *)(lVar27 + 0x10 + lVar3);
            local_198 = 0x38;
            fVar30 = fVar34;
            do {
                bVar29 = false;
                if (DAT_140c63840 == (code *)0x0) {
                    fVar34 = fVar30;
                    if ((_DAT_140c64f14 == 0) && (iVar25 = FUN_140237420(), fVar34 = fVar30, -1 < iVar25)) {
                        puVar19 = (undefined4 *)(**(code **)(*DAT_140c64a28 + 0x18))();
                        goto LAB_1405451d7;
                    }
                }
                else {
                    puVar19 = (undefined4 *)(*DAT_140c63840)();
                    LAB_1405451d7:
                    fVar34 = fVar30;
                    if ((puVar19 != (undefined4 *)0x0) &&
                        ((puVar19[0x36] == 0xffffffff ||
                          (((uint)puVar19[0x36] >> (*(uint *)(param_1 + 0x1b0) & 0x1f) & 1) != 0)))) {
                        if (iVar2 == iVar1) {
                            if ((*(byte *)(puVar19 + 4) & 2) != 0) {
                                bVar29 = true;
                            }
                        }
                        else {
                            bVar29 = false;
                            if ((*(byte *)(puVar19 + 4) & 4) != 0) {
                                bVar29 = true;
                            }
                        }
                        iVar25 = puVar19[1];
                        if (*(int *)(lVar27 + 0x20 + lVar3) != 0) {
                            bVar29 = true;
                        }
                        if ((iVar25 == 1) || (iVar25 == 2)) {
                            bVar29 = false;
                        }
                        if ((((puVar19[0x14] & 0x800) == 0) ||
                             ((lVar20 = *(longlong *)(DAT_140c65898 + 0x78), lVar20 != 0 &&
                                                                             ((*(int *)(param_1 + 0x154) == *(int *)(lVar20 + 8) ||
                                                                               ((lVar20 != 0 && (*(int *)(lVar27 + 0x10 + lVar3) == *(int *)(lVar20 + 8)))))))))
                            && (bVar29)) {
                            if (puVar19[3] == 0) {
                                uVar26 = *(undefined4 *)(param_1 + 0x154);
                                uVar28 = *(uint *)(lVar27 + 0x10 + lVar3);
                                uVar18 = *(undefined4 *)(lVar27 + 0x1c + lVar3);
                                uVar31 = *(undefined4 *)(lVar27 + 0x18 + lVar3);
                                auVar6 = CONCAT48(*(undefined4 *)(lVar27 + 8 + lVar3),
                                                  CONCAT44(*(undefined4 *)(lVar27 + 4 + lVar3),
                                                           *(undefined4 *)(lVar27 + lVar3)));
                                uVar32 = *(undefined4 *)(lVar27 + 0x14 + lVar3);
                            }
                            else {
                                uVar26 = *(undefined4 *)(lVar27 + 0x10 + lVar3);
                                uVar28 = *(uint *)(param_1 + 0x154);
                                uVar18 = *(undefined4 *)(lVar27 + 8 + lVar3);
                                uVar31 = *(undefined4 *)(lVar27 + 4 + lVar3);
                                auVar6 = CONCAT48(*(undefined4 *)(lVar27 + 0x1c + lVar3),
                                                  CONCAT44(*(undefined4 *)(lVar27 + 0x18 + lVar3),
                                                           *(undefined4 *)(lVar27 + 0x14 + lVar3)));
                                uVar32 = *(undefined4 *)(lVar27 + lVar3);
                            }
                            local_178 = ZEXT1216(auVar6);
                            local_188 = ZEXT1216(CONCAT48(uVar18,CONCAT44(uVar31,uVar32)));
                            lVar20 = FUN_1403d90d0(DAT_140c65898,uVar26);
                            if (lVar20 != 0) {
                                fVar33 = *(float *)(lVar20 + 0xe8c);
                                fVar30 = (float)FUN_14047a940(lVar20);
                                fVar30 = fVar30 * fVar33;
                            }
                            if ((((uint)puVar19 | (uint)local_168) & 0xf) == 0) {
                                lVar20 = 1;
                                puVar16 = local_168;
                                puVar17 = puVar19;
                                do {
                                    puVar24 = puVar17;
                                    puVar21 = puVar16;
                                    uVar18 = puVar24[1];
                                    uVar31 = puVar24[2];
                                    uVar32 = puVar24[3];
                                    uVar7 = puVar24[4];
                                    uVar8 = puVar24[5];
                                    uVar9 = puVar24[6];
                                    uVar10 = puVar24[7];
                                    *puVar21 = *puVar24;
                                    puVar21[1] = uVar18;
                                    puVar21[2] = uVar31;
                                    puVar21[3] = uVar32;
                                    uVar18 = puVar24[8];
                                    uVar31 = puVar24[9];
                                    uVar32 = puVar24[10];
                                    uVar11 = puVar24[0xb];
                                    puVar21[4] = uVar7;
                                    puVar21[5] = uVar8;
                                    puVar21[6] = uVar9;
                                    puVar21[7] = uVar10;
                                    uVar7 = puVar24[0xc];
                                    uVar8 = puVar24[0xd];
                                    uVar9 = puVar24[0xe];
                                    uVar10 = puVar24[0xf];
                                    puVar21[8] = uVar18;
                                    puVar21[9] = uVar31;
                                    puVar21[10] = uVar32;
                                    puVar21[0xb] = uVar11;
                                    uVar18 = puVar24[0x10];
                                    uVar31 = puVar24[0x11];
                                    uVar32 = puVar24[0x12];
                                    uVar11 = puVar24[0x13];
                                    puVar21[0xc] = uVar7;
                                    puVar21[0xd] = uVar8;
                                    puVar21[0xe] = uVar9;
                                    puVar21[0xf] = uVar10;
                                    uVar7 = puVar24[0x14];
                                    uVar8 = puVar24[0x15];
                                    uVar9 = puVar24[0x16];
                                    uVar10 = puVar24[0x17];
                                    puVar21[0x10] = uVar18;
                                    puVar21[0x11] = uVar31;
                                    puVar21[0x12] = uVar32;
                                    puVar21[0x13] = uVar11;
                                    uVar18 = puVar24[0x18];
                                    uVar31 = puVar24[0x19];
                                    uVar32 = puVar24[0x1a];
                                    uVar11 = puVar24[0x1b];
                                    puVar21[0x14] = uVar7;
                                    puVar21[0x15] = uVar8;
                                    puVar21[0x16] = uVar9;
                                    puVar21[0x17] = uVar10;
                                    uVar7 = puVar24[0x1c];
                                    uVar8 = puVar24[0x1d];
                                    uVar9 = puVar24[0x1e];
                                    uVar10 = puVar24[0x1f];
                                    puVar21[0x18] = uVar18;
                                    puVar21[0x19] = uVar31;
                                    puVar21[0x1a] = uVar32;
                                    puVar21[0x1b] = uVar11;
                                    puVar21[0x1c] = uVar7;
                                    puVar21[0x1d] = uVar8;
                                    puVar21[0x1e] = uVar9;
                                    puVar21[0x1f] = uVar10;
                                    lVar20 = lVar20 + -1;
                                    puVar16 = puVar21 + 0x20;
                                    puVar17 = puVar24 + 0x20;
                                } while (lVar20 != 0);
                                uVar18 = puVar24[0x21];
                                uVar31 = puVar24[0x22];
                                uVar32 = puVar24[0x23];
                                uVar7 = puVar24[0x24];
                                uVar8 = puVar24[0x25];
                                uVar9 = puVar24[0x26];
                                uVar10 = puVar24[0x27];
                                uVar4 = *(undefined8 *)(puVar24 + 0x3c);
                                puVar21[0x20] = puVar24[0x20];
                                puVar21[0x21] = uVar18;
                                puVar21[0x22] = uVar31;
                                puVar21[0x23] = uVar32;
                                uVar18 = puVar24[0x28];
                                uVar31 = puVar24[0x29];
                                uVar32 = puVar24[0x2a];
                                uVar11 = puVar24[0x2b];
                                puVar21[0x24] = uVar7;
                                puVar21[0x25] = uVar8;
                                puVar21[0x26] = uVar9;
                                puVar21[0x27] = uVar10;
                                uVar7 = puVar24[0x2c];
                                uVar8 = puVar24[0x2d];
                                uVar9 = puVar24[0x2e];
                                uVar10 = puVar24[0x2f];
                                puVar21[0x28] = uVar18;
                                puVar21[0x29] = uVar31;
                                puVar21[0x2a] = uVar32;
                                puVar21[0x2b] = uVar11;
                                uVar11 = puVar24[0x30];
                                uVar12 = puVar24[0x31];
                                uVar13 = puVar24[0x32];
                                uVar14 = puVar24[0x33];
                                puVar21[0x2c] = uVar7;
                                puVar21[0x2d] = uVar8;
                                puVar21[0x2e] = uVar9;
                                puVar21[0x2f] = uVar10;
                                uVar18 = puVar24[0x34];
                                uVar31 = puVar24[0x35];
                                uVar32 = puVar24[0x36];
                                uVar7 = puVar24[0x37];
                                puVar21[0x30] = uVar11;
                                puVar21[0x31] = uVar12;
                                puVar21[0x32] = uVar13;
                                puVar21[0x33] = uVar14;
                                uVar8 = puVar24[0x38];
                                uVar9 = puVar24[0x39];
                                uVar10 = puVar24[0x3a];
                                uVar11 = puVar24[0x3b];
                                puVar21[0x34] = uVar18;
                                puVar21[0x35] = uVar31;
                                puVar21[0x36] = uVar32;
                                puVar21[0x37] = uVar7;
                                puVar21[0x38] = uVar8;
                                puVar21[0x39] = uVar9;
                                puVar21[0x3a] = uVar10;
                                puVar21[0x3b] = uVar11;
                                *(undefined8 *)(puVar21 + 0x3c) = uVar4;
                            }
                            else {
                                FUN_1407db590(local_168);
                            }
                            if ((iVar25 == 1) || (iVar25 == 3)) {
                                local_118 = local_118 | 8;
                            }
                            iVar25 = puVar19[0x12] + *(int *)(lVar27 + 0xc + lVar3);
                            fStack208 = (float)(ulonglong)
                                        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) +
                                                  0xa4);
                            if (iStack284 == 0) {
                                uVar18 = 0;
                            }
                            else {
                                uVar18 = FUN_140542e70(param_1,0,iStack284,0);
                            }
                            FUN_1406008c0(uVar18,local_168,iVar25,*(undefined4 *)(param_1 + 0x50),uVar18,uVar26,
                                          local_178,&DAT_140c78390,uVar28,local_188,fVar30,0,0,param_1 + 0x1c8,0,0
                            );
                            pcVar5 = *(char **)(param_1 + 0x1f8);
                            bVar29 = true;
                            pcVar15 = pcVar5;
                            pcVar23 = *(char **)(pcVar5 + 8);
                            while (pcVar23 != (char *)0x0) {
                                bVar29 = uVar28 < *(uint *)(pcVar23 + 0x20);
                                pcVar15 = pcVar23;
                                if (bVar29) {
                                    pcVar23 = *(char **)(pcVar23 + 0x10);
                                }
                                else {
                                    pcVar23 = *(char **)(pcVar23 + 0x18);
                                }
                            }
                            pcVar23 = pcVar15;
                            if (bVar29) {
                                if (pcVar15 != *(char **)(pcVar5 + 0x10)) {
                                    if ((*pcVar15 == '\0') && (*(char **)(*(longlong *)(pcVar15 + 8) + 8) == pcVar15))
                                    {
                                        pcVar23 = *(char **)(pcVar15 + 0x18);
                                    }
                                    else {
                                        pcVar23 = *(char **)(pcVar15 + 0x10);
                                        if (pcVar23 == (char *)0x0) {
                                            pcVar23 = *(char **)(pcVar15 + 8);
                                            pcVar22 = pcVar23;
                                            if (pcVar15 == *(char **)(pcVar23 + 0x10)) {
                                                do {
                                                    pcVar23 = *(char **)(pcVar22 + 8);
                                                    bVar29 = pcVar22 == *(char **)(pcVar23 + 0x10);
                                                    pcVar22 = pcVar23;
                                                } while (bVar29);
                                            }
                                        }
                                        else {
                                            for (pcVar22 = *(char **)(pcVar23 + 0x18); pcVar22 != (char *)0x0;
                                                 pcVar22 = *(char **)(pcVar22 + 0x18)) {
                                                pcVar23 = pcVar22;
                                            }
                                        }
                                    }
                                    goto LAB_14054567d;
                                }
                                if ((pcVar15 == pcVar5) || (uVar28 < *(uint *)(pcVar15 + 0x20))) goto LAB_1405455aa;
                                LAB_140545572:
                                lVar20 = FUN_14018b280(0x28);
                                if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar20 + 0x20) = CONCAT44(iVar25,uVar28);
                                }
                                *(longlong *)(pcVar15 + 0x18) = lVar20;
                                if (pcVar15 == *(char **)(*(longlong *)(param_1 + 0x1f8) + 0x18)) {
                                    *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x18) = lVar20;
                                }
                            }
                            else {
                                LAB_14054567d:
                                if (uVar28 <= *(uint *)(pcVar23 + 0x20)) goto LAB_1405456af;
                                if ((pcVar15 != pcVar5) && (*(uint *)(pcVar15 + 0x20) <= uVar28))
                                    goto LAB_140545572;
                                LAB_1405455aa:
                                lVar20 = FUN_14018b280(0x28);
                                if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar20 + 0x20) = CONCAT44(iVar25,uVar28);
                                }
                                *(longlong *)(pcVar15 + 0x10) = lVar20;
                                pcVar5 = *(char **)(param_1 + 0x1f8);
                                if (pcVar15 == pcVar5) {
                                    *(longlong *)(pcVar5 + 8) = lVar20;
                                    *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x18) = lVar20;
                                }
                                else if (pcVar15 == *(char **)(pcVar5 + 0x10)) {
                                    *(longlong *)(pcVar5 + 0x10) = lVar20;
                                }
                            }
                            *(char **)(lVar20 + 8) = pcVar15;
                            *(undefined8 *)(lVar20 + 0x10) = 0;
                            *(undefined8 *)(lVar20 + 0x18) = 0;
                            FUN_1400081c0();
                            *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + 1;
                        }
                    }
                }
                LAB_1405456af:
                local_198 = local_198 + 4;
                fVar30 = fVar34;
            } while (local_198 < 0x50);
            lVar27 = lVar27 + 0x24;
            local_190 = local_190 + 1;
        } while (local_190 < *(byte *)(param_2 + 0x40));
    }
    return;
}



undefined4 FUN_140545760(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
    int iVar1;
    bool bVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    uVar5 = 0;
    bVar2 = false;
    if (((*(byte *)(param_2 + 0x10) & 2) != 0) &&
        ((param_4 != 0 || (bVar2 = false, *(int *)(param_1 + 0x158) != *(int *)(param_3 + 8))))) {
        bVar2 = true;
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        if (lVar3 != 0) {
            local_38 = *(undefined4 *)(lVar3 + 0x11e0);
            uStack52 = *(undefined4 *)(lVar3 + 0x11e4);
            uStack48 = *(undefined4 *)(lVar3 + 0x11e8);
            uStack44 = *(undefined4 *)(lVar3 + 0x11ec);
            FUN_140545d40(param_1,*(undefined4 *)(param_3 + 8),param_3 + 0x11e0,
                          *(undefined4 *)(param_1 + 0x158),&local_38,param_2,0);
            uVar5 = 1;
        }
    }
    if ((*(byte *)(param_2 + 0x10) & 4) != 0) {
        for (lVar3 = *(longlong *)(param_1 + 0x48); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
            iVar1 = *(int *)(lVar3 + 0x40);
            lVar4 = FUN_1403d90d0(DAT_140c65898);
            if ((((lVar4 != 0) &&
                  ((iVar1 != *(int *)(param_1 + 0x154) ||
                    ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x10c) & 0x20000000)
                     != 0)))) && ((iVar1 != *(int *)(param_1 + 0x158) || (!bVar2)))) &&
                (iVar1 != *(int *)(param_3 + 8))) {
                local_38 = *(undefined4 *)(lVar4 + 0x11e0);
                uStack52 = *(undefined4 *)(lVar4 + 0x11e4);
                uStack48 = *(undefined4 *)(lVar4 + 0x11e8);
                uStack44 = *(undefined4 *)(lVar4 + 0x11ec);
                FUN_140545d40(param_1,*(int *)(param_3 + 8),param_3 + 0x11e0,iVar1,&local_38,param_2,0);
                uVar5 = 1;
            }
        }
    }
    return uVar5;
}



void FUN_1405458e0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    float *pfVar6;
    longlong lVar7;
    undefined4 uVar8;
    undefined *puVar9;
    undefined4 uVar10;
    float fVar11;
    float *pfVar12;
    undefined local_48 [16];
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    if ((*(int *)(param_2 + 4) - 1U < 3) &&
        ((*(uint *)(param_2 + 0xd8) == 0xffffffff ||
          ((*(uint *)(param_2 + 0xd8) >> (*(uint *)(param_1 + 0x1b0) & 0x1f) & 1) != 0)))) {
        lVar4 = 0;
        if ((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) == 1)) {
            lVar4 = FUN_1403d90d0();
        }
        uVar1 = *(uint *)(param_2 + 0x50);
        if ((uVar1 >> 0xc & 1) == 0) {
            if ((uVar1 >> 10 & 1) == 0) {
                if (*(uint *)(param_2 + 0xc) < 2) {
                    if (lVar4 != 0) {
                        if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
                            local_38 = *(undefined4 *)(lVar4 + 0x11e0);
                            uStack52 = *(undefined4 *)(lVar4 + 0x11e4);
                            uStack48 = *(undefined4 *)(lVar4 + 0x11e8);
                            uStack44 = *(undefined4 *)(lVar4 + 0x11ec);
                            FUN_140545d40(param_1,*(undefined4 *)(lVar4 + 8),(undefined4 *)(lVar4 + 0x11e0),
                                          *(undefined4 *)(param_1 + 0x154),&local_38,param_2,0);
                        }
                        FUN_140545760(param_1,param_2,lVar4,1);
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(param_1 + 0x48); lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x28)) {
                        iVar3 = *(int *)(lVar4 + 0x40);
                        lVar7 = FUN_1403d90d0(DAT_140c65898,iVar3);
                        if ((lVar7 != 0) && (iVar3 != *(int *)(param_1 + 0x158))) {
                            if (((*(byte *)(param_2 + 0x10) & 1) != 0) &&
                                (lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154)), lVar5 != 0)
                                    ) {
                                local_48 = *(undefined (*) [16])(lVar5 + 0x11e0);
                                FUN_140545d40(param_1,*(undefined4 *)(lVar7 + 8),lVar7 + 0x11e0,
                                              *(undefined4 *)(param_1 + 0x154),local_48,param_2,0);
                            }
                            if (((*(byte *)(param_2 + 0x10) & 2) != 0) &&
                                (lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x158)), lVar5 != 0)
                                    ) {
                                local_38 = *(undefined4 *)(lVar5 + 0x11e0);
                                uStack52 = *(undefined4 *)(lVar5 + 0x11e4);
                                uStack48 = *(undefined4 *)(lVar5 + 0x11e8);
                                uStack44 = *(undefined4 *)(lVar5 + 0x11ec);
                                FUN_140545d40(param_1,*(undefined4 *)(lVar7 + 8),lVar7 + 0x11e0,
                                              *(undefined4 *)(param_1 + 0x158),&local_38,param_2,0);
                            }
                        }
                    }
                }
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x48);
                if ((lVar7 != 0) && (lVar4 != 0)) {
                    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
                        if (((uVar1 & 0x40) != 0) &&
                            (iVar3 = FUN_140545760(param_1,param_2,lVar4,0), iVar3 != 0)) {
                            return;
                        }
                        fVar11 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x48) + 4);
                        pfVar6 = (float *)FUN_1405b44a0(lVar4,&local_38);
                        uVar8 = *(undefined4 *)(lVar4 + 8);
                        puVar9 = (undefined *)(lVar4 + 0x11e0);
                        pfVar12 = (float *)local_48;
                        uVar10 = 0;
                        local_48 = CONCAT412(*(float *)(lVar4 + 0x123c) + pfVar6[3] * fVar11,
                                             CONCAT48(*(float *)(lVar4 + 0x1238) + pfVar6[2] * fVar11,
                                                      CONCAT44(*(float *)(lVar4 + 0x1234) + pfVar6[1] * fVar11,
                                                               *(float *)(lVar4 + 0x1230) + *pfVar6 * fVar11)));
                    }
                    else {
                        fVar11 = *(float *)(lVar7 + 4);
                        pfVar6 = (float *)FUN_1405b44a0(lVar4,&local_38);
                        uVar10 = *(undefined4 *)(lVar4 + 8);
                        puVar9 = local_48;
                        pfVar12 = (float *)(lVar4 + 0x1230);
                        uVar8 = 0;
                        local_48 = CONCAT412(*(float *)(lVar4 + 0x123c) + pfVar6[3] * fVar11,
                                             CONCAT48(*(float *)(lVar4 + 0x1238) + pfVar6[2] * fVar11,
                                                      CONCAT44(*(float *)(lVar4 + 0x1234) + pfVar6[1] * fVar11,
                                                               *pfVar12 + *pfVar6 * fVar11)));
                    }
                    FUN_140545d40(param_1,uVar8,puVar9,uVar10,pfVar12,param_2,0);
                }
            }
        }
        else {
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x378) + 0x10);
            if (lVar7 != *(longlong *)(param_1 + 0x378)) {
                do {
                    if (((((*(byte *)(param_2 + 0x10) & *(byte *)(lVar7 + 0x30)) != 0) && (lVar4 != 0)) &&
                         ((*(int *)(param_2 + 0xdc) == 0 ||
                           (*(int *)(param_2 + 0xdc) == *(int *)(lVar7 + 0x28))))) &&
                        (lVar5 = FUN_140241c40(*(undefined4 *)(lVar7 + 0x28)), lVar5 != 0)) {
                        if (*(uint *)(lVar5 + 0x4c) != 0xffffffff) {
                            iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18);
                            if (((iVar3 == 8) ||
                                 ((((iVar3 - 1U & 0xfffffffd) == 0 &&
                                    (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50), lVar2 != 0)) &&
                                   ((*(uint *)(lVar2 + 0xc) & 1) != 0)))) &&
                                ((*(int *)(param_1 + 0x1b0) != -1 &&
                                  ((1 << ((byte)*(int *)(param_1 + 0x1b0) & 0x1f) & *(uint *)(lVar5 + 0x4c)) == 0)))
                                    ) goto LAB_140545a50;
                        }
                        local_48 = ZEXT1216(*(undefined (*) [12])(lVar7 + 0x34));
                        FUN_140545d40(param_1,*(undefined4 *)(lVar4 + 8),lVar4 + 0x11e0,0,local_48,param_2,
                                      *(undefined4 *)(lVar7 + 0x44));
                    }
                    LAB_140545a50:
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
                } while (lVar7 != *(longlong *)(param_1 + 0x378));
            }
        }
    }
    return;
}



void FUN_140545d40(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined4 *param_5,
                   undefined4 *param_6,undefined4 param_7)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 *puVar10;
    undefined4 *puVar11;
    undefined4 uVar12;
    int iVar13;
    longlong lVar14;
    undefined4 *puVar15;
    undefined4 *puVar16;
    float fVar17;
    float fVar18;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138 [19];
    int iStack236;
    uint local_e8;

    local_148 = *param_5;
    uStack324 = param_5[1];
    uStack320 = param_5[2];
    uStack316 = param_5[3];
    lVar14 = FUN_1403d90d0(DAT_140c65898,param_4);
    if (lVar14 != 0) {
        local_148 = *(undefined4 *)(lVar14 + 0x11e0);
        uStack324 = *(undefined4 *)(lVar14 + 0x11e4);
        uStack320 = *(undefined4 *)(lVar14 + 0x11e8);
        uStack316 = *(undefined4 *)(lVar14 + 0x11ec);
        param_7 = 0;
    }
    if ((((uint)param_6 | (uint)local_138) & 0xf) == 0) {
        lVar14 = 1;
        puVar10 = local_138;
        puVar11 = param_6;
        do {
            puVar16 = puVar11;
            puVar15 = puVar10;
            uVar12 = puVar16[1];
            uVar2 = puVar16[2];
            uVar3 = puVar16[3];
            uVar4 = puVar16[4];
            uVar5 = puVar16[5];
            uVar6 = puVar16[6];
            uVar7 = puVar16[7];
            *puVar15 = *puVar16;
            puVar15[1] = uVar12;
            puVar15[2] = uVar2;
            puVar15[3] = uVar3;
            uVar12 = puVar16[8];
            uVar2 = puVar16[9];
            uVar3 = puVar16[10];
            uVar8 = puVar16[0xb];
            puVar15[4] = uVar4;
            puVar15[5] = uVar5;
            puVar15[6] = uVar6;
            puVar15[7] = uVar7;
            uVar4 = puVar16[0xc];
            uVar5 = puVar16[0xd];
            uVar6 = puVar16[0xe];
            uVar7 = puVar16[0xf];
            puVar15[8] = uVar12;
            puVar15[9] = uVar2;
            puVar15[10] = uVar3;
            puVar15[0xb] = uVar8;
            uVar12 = puVar16[0x10];
            uVar2 = puVar16[0x11];
            uVar3 = puVar16[0x12];
            uVar8 = puVar16[0x13];
            puVar15[0xc] = uVar4;
            puVar15[0xd] = uVar5;
            puVar15[0xe] = uVar6;
            puVar15[0xf] = uVar7;
            uVar4 = puVar16[0x14];
            uVar5 = puVar16[0x15];
            uVar6 = puVar16[0x16];
            uVar7 = puVar16[0x17];
            puVar15[0x10] = uVar12;
            puVar15[0x11] = uVar2;
            puVar15[0x12] = uVar3;
            puVar15[0x13] = uVar8;
            uVar12 = puVar16[0x18];
            uVar2 = puVar16[0x19];
            uVar3 = puVar16[0x1a];
            uVar8 = puVar16[0x1b];
            puVar15[0x14] = uVar4;
            puVar15[0x15] = uVar5;
            puVar15[0x16] = uVar6;
            puVar15[0x17] = uVar7;
            uVar4 = puVar16[0x1c];
            uVar5 = puVar16[0x1d];
            uVar6 = puVar16[0x1e];
            uVar7 = puVar16[0x1f];
            puVar15[0x18] = uVar12;
            puVar15[0x19] = uVar2;
            puVar15[0x1a] = uVar3;
            puVar15[0x1b] = uVar8;
            puVar15[0x1c] = uVar4;
            puVar15[0x1d] = uVar5;
            puVar15[0x1e] = uVar6;
            puVar15[0x1f] = uVar7;
            lVar14 = lVar14 + -1;
            puVar10 = puVar15 + 0x20;
            puVar11 = puVar16 + 0x20;
        } while (lVar14 != 0);
        uVar12 = puVar16[0x21];
        uVar2 = puVar16[0x22];
        uVar3 = puVar16[0x23];
        uVar4 = puVar16[0x24];
        uVar5 = puVar16[0x25];
        uVar6 = puVar16[0x26];
        uVar7 = puVar16[0x27];
        uVar1 = *(undefined8 *)(puVar16 + 0x3c);
        puVar15[0x20] = puVar16[0x20];
        puVar15[0x21] = uVar12;
        puVar15[0x22] = uVar2;
        puVar15[0x23] = uVar3;
        uVar12 = puVar16[0x28];
        uVar2 = puVar16[0x29];
        uVar3 = puVar16[0x2a];
        uVar8 = puVar16[0x2b];
        puVar15[0x24] = uVar4;
        puVar15[0x25] = uVar5;
        puVar15[0x26] = uVar6;
        puVar15[0x27] = uVar7;
        uVar4 = puVar16[0x2c];
        uVar5 = puVar16[0x2d];
        uVar6 = puVar16[0x2e];
        uVar7 = puVar16[0x2f];
        puVar15[0x28] = uVar12;
        puVar15[0x29] = uVar2;
        puVar15[0x2a] = uVar3;
        puVar15[0x2b] = uVar8;
        uVar12 = puVar16[0x30];
        uVar2 = puVar16[0x31];
        uVar3 = puVar16[0x32];
        uVar8 = puVar16[0x33];
        puVar15[0x2c] = uVar4;
        puVar15[0x2d] = uVar5;
        puVar15[0x2e] = uVar6;
        puVar15[0x2f] = uVar7;
        uVar5 = puVar16[0x34];
        uVar6 = puVar16[0x35];
        uVar7 = puVar16[0x36];
        uVar9 = puVar16[0x37];
        puVar15[0x30] = uVar12;
        puVar15[0x31] = uVar2;
        puVar15[0x32] = uVar3;
        puVar15[0x33] = uVar8;
        uVar12 = puVar16[0x38];
        uVar2 = puVar16[0x39];
        uVar3 = puVar16[0x3a];
        uVar4 = puVar16[0x3b];
        puVar15[0x34] = uVar5;
        puVar15[0x35] = uVar6;
        puVar15[0x36] = uVar7;
        puVar15[0x37] = uVar9;
        puVar15[0x38] = uVar12;
        puVar15[0x39] = uVar2;
        puVar15[0x3a] = uVar3;
        puVar15[0x3b] = uVar4;
        *(undefined8 *)(puVar15 + 0x3c) = uVar1;
    }
    else {
        FUN_1407db590(local_138);
    }
    if ((param_6[1] - 1 & 0xfffffffd) == 0) {
        local_e8 = local_e8 | 8;
    }
    if (((param_6[0x14] & 0x800) == 0) ||
        ((lVar14 = *(longlong *)(DAT_140c65898 + 0x78), lVar14 != 0 &&
                                                        ((param_2 == *(int *)(lVar14 + 8) || ((lVar14 != 0 && (param_4 == *(int *)(lVar14 + 8)))))))))
    {
        fVar18 = 1.0;
        lVar14 = FUN_1403d90d0(DAT_140c65898,param_2);
        if (lVar14 != 0) {
            fVar17 = *(float *)(lVar14 + 0xe8c);
            fVar18 = (float)FUN_14047a940(lVar14);
            fVar18 = fVar18 * fVar17;
        }
        if (iStack236 == 0) {
            uVar12 = 0;
        }
        else {
            uVar12 = FUN_140542e70(param_1,0,iStack236,0);
        }
        iVar13 = FUN_1406008c0(&DAT_140c78390,local_138,0,*(undefined4 *)(param_1 + 0x50),uVar12,param_2
                ,param_3,&DAT_140c78390,param_4,&local_148,fVar18,0,0,
                               (undefined8 *)(param_1 + 0x1c8),0,param_7);
        if (-1 < iVar13) {
            uVar12 = FUN_1403f9c60();
            FUN_140625a10(uVar12,*(undefined4 *)(param_1 + 0x1a4),*(undefined8 *)(param_1 + 0x1c8));
        }
    }
    return;
}



void FUN_140545ff0(undefined8 param_1,longlong *param_2)

{
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    longlong *local_10;

    FUN_1405458e0(param_1,*param_2);
    local_18 = FUN_140545ff0;
    local_28[0] = 1;
    local_20 = param_1;
    local_10 = param_2;
    FUN_140195960(param_2 + 1,*(undefined4 *)(*param_2 + 0x58),local_28,4);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140546060(longlong param_1,int param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    undefined4 local_48 [2];
    longlong local_40;
    code *local_38;
    longlong *local_30;

    lVar4 = *(longlong *)(param_1 + 0x138);
    if ((((*(longlong *)(lVar4 + 0x50) == 0) && (*(int *)(*(longlong *)(lVar4 + 0x70) + 0x18) != 3))
         || (*(uint *)(param_1 + 0x1a0) < 2)) ||
        (((*(byte *)(*(longlong *)(lVar4 + 0x70) + 0x10c) & 0x20) != 0 ||
          (*(uint *)(param_1 + 400) < *(uint *)(param_1 + 0x1a0))))) {
        uVar10 = 0x54;
        do {
            plVar9 = (longlong *)0x0;
            uVar2 = *(undefined4 *)(uVar10 + *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70));
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64f14 == 0) && (iVar3 = FUN_140237420(), -1 < iVar3)) {
                    lVar4 = (**(code **)(*DAT_140c64a28 + 0x18))(DAT_140c64a28,uVar2);
                    goto LAB_140546138;
                }
            }
            else {
                lVar4 = (*DAT_140c63840)(&PTR_u_Spell4ClientMissile_140a6d188,uVar2,DAT_140c63858);
                LAB_140546138:
                if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == param_2)) {
                    if ((*(int *)(lVar4 + 4) != 1) &&
                        (((*(uint *)(lVar4 + 0x58) != 0 && (*(uint *)(lVar4 + 0x54) != 0)) &&
                          (*(uint *)(lVar4 + 0x58) < *(uint *)(lVar4 + 0x54))))) {
                        plVar5 = (longlong *)FUN_14018b280(0x50);
                        if (plVar5 != (longlong *)0x0) {
                            plVar5[3] = 0;
                            plVar5[4] = 0;
                            plVar5[6] = 0;
                            plVar5[7] = 0;
                            *(undefined4 *)(plVar5 + 1) = 0x544e5645;
                            *(undefined4 *)((longlong)plVar5 + 0x4c) = 0;
                            plVar9 = plVar5;
                        }
                        *plVar9 = lVar4;
                        local_48[0] = 1;
                        local_38 = FUN_140545ff0;
                        local_40 = param_1;
                        local_30 = plVar9;
                        FUN_140195960(plVar9 + 1,*(undefined4 *)(lVar4 + 0x58),local_48,4);
                        lVar8 = *(longlong *)(param_1 + 0x1d8);
                        lVar1 = lVar8 + 1;
                        lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0x1d0),lVar1,8);
                        *(longlong **)(lVar6 + lVar8 * 8) = plVar9;
                        if (*(longlong *)(param_1 + 0x1d0) != lVar6) {
                            FUN_1407db590(lVar6,*(longlong *)(param_1 + 0x1d0),*(longlong *)(param_1 + 0x1d8) << 3
                            );
                            lVar8 = *(longlong *)(param_1 + 0x1d0);
                            if (lVar8 != 0) {
                                (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
                            }
                            *(longlong *)(param_1 + 0x1d0) = lVar6;
                        }
                        *(longlong *)(param_1 + 0x1d8) = lVar1;
                        puVar7 = (undefined4 *)FUN_14018b280(0x48);
                        if (puVar7 != (undefined4 *)0x0) {
                            *(undefined8 *)(puVar7 + 4) = 0;
                            *(undefined8 *)(puVar7 + 6) = 0;
                            *(undefined8 *)(puVar7 + 10) = 0;
                            *(undefined8 *)(puVar7 + 0xc) = 0;
                            *puVar7 = 0x544e5645;
                            puVar7[0x11] = 0;
                        }
                        local_38 = (code *)&LAB_140546050;
                        local_48[0] = 1;
                        local_40 = param_1;
                        local_30 = plVar9;
                        FUN_140195960(puVar7,*(undefined4 *)(lVar4 + 0x54),local_48,4);
                        lVar1 = *(longlong *)(param_1 + 0x1e8);
                        lVar4 = lVar1 + 1;
                        lVar8 = FUN_14018db00(*(undefined8 *)(param_1 + 0x1e0),lVar4,8);
                        *(undefined4 **)(lVar8 + lVar1 * 8) = puVar7;
                        if (*(longlong *)(param_1 + 0x1e0) != lVar8) {
                            FUN_1407db590(lVar8,*(longlong *)(param_1 + 0x1e0),*(longlong *)(param_1 + 0x1e8) << 3
                            );
                            lVar1 = *(longlong *)(param_1 + 0x1e0);
                            if (lVar1 != 0) {
                                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                            }
                            *(longlong *)(param_1 + 0x1e0) = lVar8;
                        }
                        *(longlong *)(param_1 + 0x1e8) = lVar4;
                    }
                    FUN_1405458e0(param_1);
                }
            }
            uVar10 = uVar10 + 4;
        } while (uVar10 < 0x6c);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140546360(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x154));
    if ((lVar3 != 0) &&
        (lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x158)), lVar4 != 0)) {
        uVar7 = 0x54;
        do {
            uVar1 = *(undefined4 *)(uVar7 + *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70));
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64f14 != 0) {
                    return;
                }
                iVar2 = FUN_140237420();
                if (iVar2 < 0) {
                    return;
                }
                lVar5 = (**(code **)(*DAT_140c64a28 + 0x18))(DAT_140c64a28,uVar1);
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_Spell4ClientMissile_140a6d188,uVar1,DAT_140c63858);
            }
            lVar6 = lVar4;
            if (lVar5 == 0) {
                return;
            }
            while (lVar4 = lVar6, lVar4 != 0) {
                local_28 = *(undefined4 *)(lVar4 + 0x11e0);
                uStack36 = *(undefined4 *)(lVar4 + 0x11e4);
                uStack32 = *(undefined4 *)(lVar4 + 0x11e8);
                uStack28 = *(undefined4 *)(lVar4 + 0x11ec);
                FUN_140545d40(param_1,*(undefined4 *)(lVar3 + 8),lVar3 + 0x11e0,*(undefined4 *)(lVar4 + 8),
                              &local_28,lVar5,0);
                lVar6 = FUN_1405464d0(param_1);
                lVar3 = lVar4;
            }
            uVar7 = uVar7 + 4;
        } while (uVar7 < 0x6c);
    }
    return;
}



ulonglong FUN_1405464d0(longlong param_1,int param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    int local_res8 [2];

    lVar2 = DAT_140c65898;
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (lVar4 != 0) {
        do {
            local_res8[0] = *(int *)(lVar4 + 0x40);
            if ((local_res8[0] != *(int *)(param_1 + 0x158)) && (*(int *)(lVar4 + 0x44) == param_2)) {
                uVar5 = (**(code **)(DAT_140c65898 + 0x6f20))(local_res8);
                puVar1 = *(ulonglong **)
                        (*(longlong *)(lVar2 + 0x6f18) + (uVar5 % *(ulonglong *)(lVar2 + 0x6f10)) * 8);
                while( true ) {
                    if (puVar1 == (ulonglong *)0x0) {
                        return 0;
                    }
                    if ((uVar5 == *puVar1) &&
                        (iVar3 = (**(code **)(lVar2 + 0x6f28))(local_res8,puVar1 + 2), iVar3 != 0)) break;
                    puVar1 = (ulonglong *)puVar1[1];
                }
                if (puVar1 + 3 == (ulonglong *)0x0) {
                    return 0;
                }
                return puVar1[3];
            }
            lVar4 = *(longlong *)(lVar4 + 0x28);
        } while (lVar4 != 0);
    }
    return 0;
}



void FUN_1405465a0(undefined4 param_1,longlong param_2)

{
    undefined8 local_18;
    int local_10;

    local_18 = CONCAT44(param_1,*(undefined4 *)(param_2 + 0x5c));
    local_10 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x138) + 0x70) + 4) + 1;
    FUN_1403f4900(DAT_140c65898,0x805,&local_18);
    return;
}



void FUN_1405465f0(longlong param_1,undefined8 *param_2,int param_3)

{
    int iVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong **pplVar4;
    undefined4 uVar5;

    pplVar2 = (longlong **)*param_2;
    while (pplVar4 = pplVar2, pplVar4 != (longlong **)0x0) {
        pplVar2 = (longlong **)pplVar4[1];
        FUN_14054a2b0(pplVar4,0);
        FUN_1400ee810(param_1 + 0x240,pplVar4[6]);
        plVar3 = pplVar4[6];
        if ((((((*(byte *)(plVar3 + 0xb) & 0x10) == 0) && (*(int *)(pplVar4 + 0x10) == 0)) &&
              ((*(uint *)((longlong)plVar3 + 0x44) & 0x100) == 0)) &&
             ((*(int *)(plVar3 + 5) != 0 &&
               (((iVar1 = *(int *)(param_1 + 0x34c), iVar1 == 0 || (iVar1 - 7U < 2)) || (iVar1 == 0xb9))))
             )) && (param_3 == 0)) {
            if ((longlong **)*pplVar4 != (longlong **)0x0) {
                **pplVar4 = (longlong)pplVar4[1];
            }
            if ((longlong **)pplVar4[1] != (longlong **)0x0) {
                *pplVar4[1] = (longlong)*pplVar4;
            }
            *pplVar4 = (longlong *)0x0;
            pplVar4[1] = (longlong *)0x0;
        }
        else {
            if (pplVar4[0x20] != (longlong *)0x0) {
                FUN_1400ee810(pplVar4[0x20] + 0x48);
            }
            if ((longlong **)*pplVar4 != (longlong **)0x0) {
                **pplVar4 = (longlong)pplVar4[1];
            }
            if ((longlong **)pplVar4[1] != (longlong **)0x0) {
                *pplVar4[1] = (longlong)*pplVar4;
            }
            *pplVar4 = (longlong *)0x0;
            pplVar4[1] = (longlong *)0x0;
            pplVar4[0x20] = (longlong *)0x0;
            uVar5 = DAT_140c636a8;
            if (*(int *)((longlong)pplVar4 + 0x24) != 2) {
                *(undefined4 *)((longlong)pplVar4 + 0x24) = 2;
                *(undefined4 *)((longlong)pplVar4 + 0x4c) = uVar5;
            }
        }
    }
    return;
}



void FUN_140546730(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    FUN_140195d70(param_1 + 0x300);
    FUN_140008410(param_1 + 0x240);
    FUN_1405465f0(param_1,param_1 + 0x260,param_2);
    FUN_1405465f0(param_1,param_1 + 0x268,param_2);
    FUN_1405465f0(param_1,param_1 + 0x270,param_2);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x280)) {
        do {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
                FUN_1405465f0(param_1,*(longlong *)(lVar4 + 0x28),param_2);
                plVar1 = *(longlong **)(lVar4 + 0x28);
                if (plVar1 != (longlong *)0x0) {
                    if (*plVar1 != 0) {
                        FUN_1401a4a00(plVar1);
                    }
                    FUN_14018b900(plVar1,0);
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0x280));
    }
    FUN_140008410(param_1 + 0x278);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x2c0)) {
        do {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
                FUN_1405465f0(param_1,*(longlong *)(lVar4 + 0x28),param_2);
                plVar1 = *(longlong **)(lVar4 + 0x28);
                if (plVar1 != (longlong *)0x0) {
                    if (*plVar1 != 0) {
                        FUN_1401a4a00(plVar1);
                    }
                    FUN_14018b900(plVar1,0);
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0x2c0));
    }
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x2b8,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x10) = *(longlong *)(param_1 + 0x2c0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x18) = *(longlong *)(param_1 + 0x2c0);
        *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x2a0)) {
        do {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
                FUN_1405465f0(param_1,*(longlong *)(lVar4 + 0x28),param_2);
                plVar1 = *(longlong **)(lVar4 + 0x28);
                if (plVar1 != (longlong *)0x0) {
                    if (*plVar1 != 0) {
                        FUN_1401a4a00(plVar1);
                    }
                    FUN_14018b900(plVar1,0);
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0x2a0));
    }
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x298,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x10) = *(longlong *)(param_1 + 0x2a0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x18) = *(longlong *)(param_1 + 0x2a0);
        *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x2e0)) {
        do {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
                FUN_1405465f0(param_1,*(longlong *)(lVar4 + 0x28),param_2);
                plVar1 = *(longlong **)(lVar4 + 0x28);
                if (plVar1 != (longlong *)0x0) {
                    if (*plVar1 != 0) {
                        FUN_1401a4a00(plVar1);
                    }
                    FUN_14018b900(plVar1,0);
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0x2e0));
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x2d8,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x10) = *(longlong *)(param_1 + 0x2e0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x2e0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x18) = *(longlong *)(param_1 + 0x2e0);
        *(undefined8 *)(param_1 + 0x2e8) = 0;
    }
    return;
}



void FUN_140546b70(ulonglong param_1,longlong **param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 uVar3;
    ulonglong local_res8;

    plVar1 = *param_2;
    local_res8 = param_1;
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[1];
        if ((((*(int *)(plVar2 + 0x10) != 0) || ((*(uint *)(plVar2[6] + 0x44) & 0x100) != 0)) ||
             (*(int *)(plVar2[6] + 0x28) == 0)) && ((*(byte *)((uint *)plVar2[6] + 0x16) & 8) == 0)) {
            if (plVar2[0x20] != 0) {
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)plVar2[6];
                FUN_1400ee810(plVar2[0x20] + 0x240,&local_res8);
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
        }
    }
    return;
}



void FUN_140546c40(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x70) + 0x18) != 1) {
        FUN_140546b70(param_1,param_1 + 0x260);
        FUN_140546b70();
        FUN_140546b70();
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x280)) {
            do {
                FUN_140546b70();
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
            } while (lVar3 != *(longlong *)(param_1 + 0x280));
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x2c0)) {
            do {
                FUN_140546b70();
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
            } while (lVar3 != *(longlong *)(param_1 + 0x2c0));
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x2a0)) {
            do {
                FUN_140546b70();
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
            } while (lVar3 != *(longlong *)(param_1 + 0x2a0));
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
        if (lVar3 != *(longlong *)(param_1 + 0x2e0)) {
            do {
                FUN_140546b70();
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
            } while (lVar3 != *(longlong *)(param_1 + 0x2e0));
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140546e60(longlong *param_1)

{
    uint uVar1;
    uint uVar2;
    byte bVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    longlong **pplVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined *puVar15;
    longlong lVar16;
    int iVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint local_res8;
    int local_res10;
    ulonglong local_res20;
    uint *in_stack_fffffffffffffe18;
    uint *puVar22;
    undefined4 uVar23;
    longlong *in_stack_fffffffffffffe28;
    longlong *in_stack_fffffffffffffe38;
    longlong *in_stack_fffffffffffffe48;
    ulonglong in_stack_fffffffffffffe50;
    ulonglong local_170;
    longlong local_168;
    longlong local_160;
    longlong local_158;
    longlong local_150;
    longlong local_148;
    longlong local_140;
    undefined local_138 [16];
    code *local_128;
    undefined8 local_120;
    undefined local_118 [16];
    undefined local_108 [16];
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined local_c8 [16];
    undefined local_b8 [16];
    undefined local_a8 [16];
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [16];
    undefined local_58 [24];

    lVar16 = param_1[0x27];
    if (lVar16 != 0) {
        iVar17 = DAT_140c636a8 - *(int *)((longlong)param_1 + 0x194);
        local_170 = 0;
        if (*(longlong *)(lVar16 + 0x68) != 0) {
            do {
                puVar22 = *(uint **)(*(longlong *)(lVar16 + 0x60) + local_170 * 8);
                iVar4 = FUN_140542d90(param_1);
                if (iVar4 != 0) {
                    local_res10 = 0;
                    local_res8 = 0;
                    lVar16 = param_1[0x49];
                    lVar13 = lVar16;
                    if (*(longlong *)(lVar16 + 8) != 0) {
                        lVar7 = *(longlong *)(lVar16 + 8);
                        do {
                            if (*(uint *)(lVar7 + 0x20) < *puVar22) {
                                lVar8 = *(longlong *)(lVar7 + 0x18);
                            }
                            else {
                                lVar8 = *(longlong *)(lVar7 + 0x10);
                                lVar13 = lVar7;
                            }
                            lVar7 = lVar8;
                        } while (lVar8 != 0);
                    }
                    if ((lVar13 == lVar16) || (*puVar22 < *(uint *)(lVar13 + 0x20))) {
                        local_150 = lVar16;
                        plVar9 = &local_150;
                    }
                    else {
                        local_148 = lVar13;
                        plVar9 = &local_148;
                    }
                    if (*plVar9 == param_1[0x49]) {
                        uVar19 = puVar22[0x11];
                        if ((uVar19 >> 0xd & 1) == 0) {
                            uVar18 = puVar22[9];
                            if (((uVar18 == 0) || ((int)uVar18 <= iVar17)) &&
                                ((puVar22[10] == 0 || (iVar17 < (int)puVar22[10])))) {
                                local_res10 = iVar17 - uVar18;
                                goto LAB_140547051;
                            }
                        }
                        else {
                            iVar4 = *(int *)(param_1 + 0x36);
                            if (iVar4 != -1) {
                                uVar18 = puVar22[9];
                                if (uVar18 != 0) {
                                    uVar1 = puVar22[0x13];
                                    local_res10 = FUN_140540b30();
                                    if ((iVar17 < (int)(uVar18 + local_res10)) ||
                                        ((puVar22[10] != 0 && ((int)(puVar22[10] + local_res10) <= iVar17))))
                                        goto LAB_1405484f6;
                                    uVar2 = *(uint *)(param_1 + 0x34);
                                    local_res10 = (iVar17 - uVar18) - local_res10;
                                    uVar20 = iVar4 + 1;
                                    bVar3 = (byte)uVar20 & 0x1f;
                                    uVar18 = 1 << bVar3 | 1U >> 0x20 - bVar3;
                                    if (uVar20 < uVar2) {
                                        uVar21 = 0;
                                        do {
                                            if (uVar21 != 0) break;
                                            if ((uVar18 & uVar1) == 0) {
                                                local_res8 = FUN_140540b30(param_1);
                                                uVar21 = local_res8;
                                            }
                                            uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
                                            uVar20 = uVar20 + 1;
                                        } while (uVar20 < uVar2);
                                    }
                                }
                                LAB_140547051:
                                iVar4 = *(int *)(*(longlong *)(param_1[0x27] + 0x70) + 0x18);
                                if ((((iVar4 - 2U & 0xfffffffa) != 0) || (iVar4 == 3)) ||
                                    (iVar4 = FUN_1403bfb60(), iVar4 != 0)) {
                                    if ((uVar19 & 0x4000) == 0) {
                                        if ((uVar19 >> 0xc & 1) == 0) {
                                            if (((*(byte *)(puVar22 + 0x12) & 1) != 0) &&
                                                (lVar16 = FUN_1403d90d0(DAT_140c65898,
                                                                        *(undefined4 *)((longlong)param_1 + 0x154)),
                                                        lVar16 != 0)) {
                                                if ((puVar22[0x11] & 0x40000) == 0) {
                                                    if (puVar22[0x18] == 0) {
                                                        lVar16 = FUN_14018b280(0x140,8);
                                                        if (lVar16 != 0) {
                                                            uVar19 = *(uint *)((longlong)param_1 + 0x154);
                                                            lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                            in_stack_fffffffffffffe28 = param_1 + 0x4c;
                                                            uVar6 = (**(code **)(*param_1 + 8))();
                                                            uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                            in_stack_fffffffffffffe38 =
                                                                    (longlong *)
                                                                            ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                             (ulonglong)local_res8);
                                                            LAB_140547dbe:
                                                            in_stack_fffffffffffffe50 = 0;
                                                            in_stack_fffffffffffffe48 = param_1;
                                                            FUN_140549b90(lVar16,uVar6,puVar22,uVar19,
                                                                          (ulonglong)in_stack_fffffffffffffe18 &
                                                                          0xffffffff00000000 | (ulonglong)uVar19,local_res10,
                                                                          in_stack_fffffffffffffe28,0,in_stack_fffffffffffffe38,
                                                                          uVar23,param_1,0);
                                                        }
                                                    }
                                                    else {
                                                        plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                        if (*plVar9 == 0) {
                                                            puVar10 = (undefined8 *)FUN_14018b280(8);
                                                            if (puVar10 == (undefined8 *)0x0) {
                                                                puVar10 = (undefined8 *)0x0;
                                                            }
                                                            else {
                                                                *puVar10 = 0;
                                                            }
                                                            puVar11 = (undefined8 *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                            *puVar11 = puVar10;
                                                        }
                                                        lVar16 = FUN_14018b280(0x140,8);
                                                        if (lVar16 != 0) {
                                                            pplVar12 = (longlong **)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                            lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                            uVar19 = *(uint *)((longlong)param_1 + 0x154);
                                                            uVar6 = (**(code **)(*param_1 + 8))();
                                                            uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                            in_stack_fffffffffffffe38 =
                                                                    (longlong *)
                                                                            ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                             (ulonglong)local_res8);
                                                            in_stack_fffffffffffffe28 = *pplVar12;
                                                            goto LAB_140547dbe;
                                                        }
                                                    }
                                                }
                                                else {
                                                    lVar16 = FUN_14018b280(0x140,8);
                                                    if (lVar16 != 0) {
                                                        uVar19 = *(uint *)((longlong)param_1 + 0x154);
                                                        lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                        in_stack_fffffffffffffe28 = param_1 + 0x4e;
                                                        uVar6 = (**(code **)(*param_1 + 8))();
                                                        uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                        in_stack_fffffffffffffe38 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                         (ulonglong)local_res8);
                                                        goto LAB_140547dbe;
                                                    }
                                                }
                                                lVar16 = *(longlong *)(param_1[0x49] + 8);
                                                if (lVar16 != 0) {
                                                    do {
                                                        if (*puVar22 < *(uint *)(lVar16 + 0x20)) {
                                                            lVar16 = *(longlong *)(lVar16 + 0x10);
                                                        }
                                                        else {
                                                            lVar16 = *(longlong *)(lVar16 + 0x18);
                                                        }
                                                    } while (lVar16 != 0);
                                                }
                                                in_stack_fffffffffffffe18 = puVar22;
                                                FUN_140029d00(param_1 + 0x48,local_118);
                                            }
                                            if (((puVar22[0x12] == 0) || ((puVar22[0x12] & 2) != 0)) &&
                                                (lVar16 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x2b)),
                                                        lVar16 != 0)) {
                                                if ((puVar22[0x11] & 0x40000) == 0) {
                                                    if (puVar22[0x18] == 0) {
                                                        lVar16 = FUN_14018b280(0x140,8);
                                                        if (lVar16 != 0) {
                                                            in_stack_fffffffffffffe28 = param_1 + 0x4d;
                                                            lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                            uVar6 = (**(code **)(*param_1 + 8))();
                                                            uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                            in_stack_fffffffffffffe38 =
                                                                    (longlong *)
                                                                            ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                             (ulonglong)local_res8);
                                                            goto LAB_140547fd7;
                                                        }
                                                    }
                                                    else {
                                                        plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                        if (*plVar9 == 0) {
                                                            puVar10 = (undefined8 *)FUN_14018b280(8);
                                                            if (puVar10 == (undefined8 *)0x0) {
                                                                puVar10 = (undefined8 *)0x0;
                                                            }
                                                            else {
                                                                *puVar10 = 0;
                                                            }
                                                            puVar11 = (undefined8 *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                            *puVar11 = puVar10;
                                                        }
                                                        lVar16 = FUN_14018b280(0x140,8);
                                                        if (lVar16 != 0) {
                                                            pplVar12 = (longlong **)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                            lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                            uVar6 = (**(code **)(*param_1 + 8))();
                                                            uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                            in_stack_fffffffffffffe38 =
                                                                    (longlong *)
                                                                            ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                             (ulonglong)local_res8);
                                                            in_stack_fffffffffffffe28 = *pplVar12;
                                                            LAB_140547fd7:
                                                            in_stack_fffffffffffffe50 = 0;
                                                            in_stack_fffffffffffffe48 = param_1;
                                                            FUN_140549b90(lVar16,uVar6,puVar22,
                                                                          *(undefined4 *)((longlong)param_1 + 0x154),
                                                                          (ulonglong)in_stack_fffffffffffffe18 &
                                                                          0xffffffff00000000 |
                                                                          (ulonglong)*(uint *)(param_1 + 0x2b),local_res10,
                                                                          in_stack_fffffffffffffe28,0,in_stack_fffffffffffffe38,
                                                                          uVar23,param_1,0);
                                                        }
                                                    }
                                                }
                                                else {
                                                    lVar16 = FUN_14018b280(0x140,8);
                                                    if (lVar16 != 0) {
                                                        in_stack_fffffffffffffe28 = param_1 + 0x4e;
                                                        lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                        uVar6 = (**(code **)(*param_1 + 8))();
                                                        uVar23 = *(undefined4 *)(lVar13 + 0x6c);
                                                        in_stack_fffffffffffffe38 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                         (ulonglong)local_res8);
                                                        goto LAB_140547fd7;
                                                    }
                                                }
                                                lVar16 = *(longlong *)(param_1[0x49] + 8);
                                                if (lVar16 != 0) {
                                                    do {
                                                        if (*puVar22 < *(uint *)(lVar16 + 0x20)) {
                                                            lVar16 = *(longlong *)(lVar16 + 0x10);
                                                        }
                                                        else {
                                                            lVar16 = *(longlong *)(lVar16 + 0x18);
                                                        }
                                                    } while (lVar16 != 0);
                                                }
                                                in_stack_fffffffffffffe18 = puVar22;
                                                FUN_140029d00(param_1 + 0x48,local_d8);
                                            }
                                            if ((*(byte *)(puVar22 + 0x12) & 4) != 0) {
                                                for (lVar16 = param_1[9]; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x28)
                                                        ) {
                                                    if ((*(byte *)(lVar16 + 0x54) & 4) != 0) {
                                                        uVar19 = *(uint *)(lVar16 + 0x40);
                                                        local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar19;
                                                        if ((puVar22[0x11] & 0x40000) == 0) {
                                                            if (puVar22[0x18] == 0) {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x4f,&local_res20);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)FUN_140055be0(param_1 + 0x4f,&local_res20)
                                                                            ;
                                                                    *puVar11 = puVar10;
                                                                }
                                                                lVar13 = FUN_14018b280(0x140,8);
                                                                if (lVar13 != 0) {
                                                                    pplVar12 = (longlong **)FUN_140055be0(param_1 + 0x4f,&local_res20)
                                                                            ;
                                                                    lVar7 = *(longlong *)(param_1[0x27] + 8);
                                                                    uVar6 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar7 + 0x6c);
                                                                    in_stack_fffffffffffffe38 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                                     (ulonglong)local_res8);
                                                                    in_stack_fffffffffffffe28 = *pplVar12;
                                                                    goto LAB_14054826c;
                                                                }
                                                            }
                                                            else {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    *puVar11 = puVar10;
                                                                }
                                                                lVar13 = FUN_14018b280(0x140,8);
                                                                if (lVar13 != 0) {
                                                                    pplVar12 = (longlong **)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    lVar7 = *(longlong *)(param_1[0x27] + 8);
                                                                    uVar6 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar7 + 0x6c);
                                                                    in_stack_fffffffffffffe38 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                                     (ulonglong)local_res8);
                                                                    in_stack_fffffffffffffe28 = *pplVar12;
                                                                    LAB_14054826c:
                                                                    in_stack_fffffffffffffe50 = 0;
                                                                    in_stack_fffffffffffffe48 = param_1;
                                                                    FUN_140549b90(lVar13,uVar6,puVar22,
                                                                                  *(undefined4 *)((longlong)param_1 + 0x154),
                                                                                  (ulonglong)in_stack_fffffffffffffe18 &
                                                                                  0xffffffff00000000 | (ulonglong)uVar19,local_res10,
                                                                                  in_stack_fffffffffffffe28,0,
                                                                                  in_stack_fffffffffffffe38,uVar23,param_1,0);
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            lVar13 = FUN_14018b280(0x140,8);
                                                            if (lVar13 != 0) {
                                                                in_stack_fffffffffffffe28 = param_1 + 0x4e;
                                                                lVar7 = *(longlong *)(param_1[0x27] + 8);
                                                                uVar6 = (**(code **)(*param_1 + 8))();
                                                                uVar23 = *(undefined4 *)(lVar7 + 0x6c);
                                                                in_stack_fffffffffffffe38 =
                                                                        (longlong *)
                                                                                ((ulonglong)in_stack_fffffffffffffe38 & 0xffffffff00000000 |
                                                                                 (ulonglong)local_res8);
                                                                goto LAB_14054826c;
                                                            }
                                                        }
                                                        lVar13 = *(longlong *)(param_1[0x49] + 8);
                                                        if (lVar13 != 0) {
                                                            do {
                                                                if (*puVar22 < *(uint *)(lVar13 + 0x20)) {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x10);
                                                                }
                                                                else {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x18);
                                                                }
                                                            } while (lVar13 != 0);
                                                        }
                                                        in_stack_fffffffffffffe18 = puVar22;
                                                        FUN_140029d00(param_1 + 0x48,local_58);
                                                    }
                                                }
                                            }
                                            if ((*(byte *)(puVar22 + 0x12) & 8) != 0) {
                                                if ((puVar22[0x18] == 0) || ((puVar22[0x11] & 0x40000) != 0)) {
                                                    lVar16 = FUN_14018b280(0x140,8);
                                                    if (lVar16 != 0) {
                                                        in_stack_fffffffffffffe38 = param_1 + 0x4e;
                                                        lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                        iVar4 = *(int *)(*(longlong *)(param_1[0x27] + 0x70) + 0x18);
                                                        uVar5 = (**(code **)(*param_1 + 8))();
                                                        uVar23 = *(undefined4 *)(param_1 + 0x2e);
                                                        uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                        in_stack_fffffffffffffe50 =
                                                                in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                (ulonglong)local_res8;
                                                        in_stack_fffffffffffffe48 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                         (ulonglong)(iVar4 == 3));
                                                        in_stack_fffffffffffffe28 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                         (ulonglong)*(uint *)(param_1 + 0x2b));
                                                        goto LAB_1405484a6;
                                                    }
                                                }
                                                else {
                                                    plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                    if (*plVar9 == 0) {
                                                        puVar10 = (undefined8 *)FUN_14018b280(8);
                                                        if (puVar10 == (undefined8 *)0x0) {
                                                            puVar10 = (undefined8 *)0x0;
                                                        }
                                                        else {
                                                            *puVar10 = 0;
                                                        }
                                                        puVar11 = (undefined8 *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                        *puVar11 = puVar10;
                                                    }
                                                    lVar16 = FUN_14018b280(0x140,8);
                                                    if (lVar16 != 0) {
                                                        lVar13 = param_1[0x27];
                                                        iVar4 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x18);
                                                        pplVar12 = (longlong **)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                        lVar13 = *(longlong *)(lVar13 + 8);
                                                        uVar5 = (**(code **)(*param_1 + 8))();
                                                        uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                        uVar23 = *(undefined4 *)(param_1 + 0x2e);
                                                        in_stack_fffffffffffffe50 =
                                                                in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                (ulonglong)local_res8;
                                                        in_stack_fffffffffffffe38 = *pplVar12;
                                                        in_stack_fffffffffffffe48 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                         (ulonglong)(iVar4 == 3));
                                                        in_stack_fffffffffffffe28 =
                                                                (longlong *)
                                                                        ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                         (ulonglong)*(uint *)(param_1 + 0x2b));
                                                        LAB_1405484a6:
                                                        FUN_140549e10(lVar16,uVar5,puVar22,
                                                                      *(undefined4 *)((longlong)param_1 + 0x154),param_1 + 0x2c,
                                                                      uVar23,in_stack_fffffffffffffe28,local_res10,
                                                                      in_stack_fffffffffffffe38,0,in_stack_fffffffffffffe48,
                                                                      in_stack_fffffffffffffe50,uVar6,0,param_1);
                                                    }
                                                }
                                                lVar16 = *(longlong *)(param_1[0x49] + 8);
                                                if (lVar16 != 0) {
                                                    do {
                                                        if (*puVar22 < *(uint *)(lVar16 + 0x20)) {
                                                            lVar16 = *(longlong *)(lVar16 + 0x10);
                                                        }
                                                        else {
                                                            lVar16 = *(longlong *)(lVar16 + 0x18);
                                                        }
                                                    } while (lVar16 != 0);
                                                }
                                                FUN_140029d00(param_1 + 0x48,local_b8);
                                                in_stack_fffffffffffffe18 = puVar22;
                                            }
                                        }
                                        else {
                                            lVar16 = *(longlong *)(param_1[0x6b] + 0x10);
                                            if (lVar16 != param_1[0x6b]) {
                                                do {
                                                    if ((((puVar22[0x12] == 0) && ((*(byte *)(lVar16 + 0x28) & 2) != 0)) ||
                                                         ((*(byte *)(lVar16 + 0x28) & (byte)puVar22[0x12]) != 0)) &&
                                                        (lVar13 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar16 + 0x24)),
                                                                lVar13 != 0)) {
                                                        if ((puVar22[0x11] & 0x40000) == 0) {
                                                            if (puVar22[0x18] == 0) {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x53,lVar16 + 0x24);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)
                                                                            FUN_140055be0(param_1 + 0x53,lVar16 + 0x24);
                                                                    *puVar11 = puVar10;
                                                                }
                                                                local_res20 = FUN_14018b280(0x140,8);
                                                                if (local_res20 != 0) {
                                                                    lVar13 = param_1[0x27];
                                                                    iVar4 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x18);
                                                                    local_138 = ZEXT1216(*(undefined (*) [12])(lVar16 + 0x2c));
                                                                    pplVar12 = (longlong **)
                                                                            FUN_140055be0(param_1 + 0x53,lVar16 + 0x24);
                                                                    lVar13 = *(longlong *)(lVar13 + 8);
                                                                    uVar5 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                    uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                                    in_stack_fffffffffffffe50 =
                                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                            (ulonglong)local_res8;
                                                                    in_stack_fffffffffffffe38 = *pplVar12;
                                                                    in_stack_fffffffffffffe48 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                     (ulonglong)(iVar4 == 3));
                                                                    in_stack_fffffffffffffe28 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                     (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                    puVar15 = local_138;
                                                                    goto LAB_140547b2d;
                                                                }
                                                            }
                                                            else {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    *puVar11 = puVar10;
                                                                }
                                                                local_res20 = FUN_14018b280(0x140,8);
                                                                if (local_res20 != 0) {
                                                                    lVar13 = param_1[0x27];
                                                                    iVar4 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x18);
                                                                    local_68 = ZEXT1216(*(undefined (*) [12])(lVar16 + 0x2c));
                                                                    pplVar12 = (longlong **)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    lVar13 = *(longlong *)(lVar13 + 8);
                                                                    uVar5 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                    uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                                    in_stack_fffffffffffffe50 =
                                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                            (ulonglong)local_res8;
                                                                    in_stack_fffffffffffffe38 = *pplVar12;
                                                                    in_stack_fffffffffffffe48 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                     (ulonglong)(iVar4 == 3));
                                                                    in_stack_fffffffffffffe28 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                     (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                    puVar15 = local_68;
                                                                    LAB_140547b2d:
                                                                    FUN_140549e10(local_res20,uVar5,puVar22,
                                                                                  *(undefined4 *)((longlong)param_1 + 0x154),puVar15,
                                                                                  *(undefined4 *)(lVar16 + 0x38),
                                                                                  in_stack_fffffffffffffe28,local_res10,
                                                                                  in_stack_fffffffffffffe38,0,
                                                                                  in_stack_fffffffffffffe48,in_stack_fffffffffffffe50,
                                                                                  uVar6,uVar23,param_1);
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            local_res20 = FUN_14018b280(0x140,8);
                                                            if (local_res20 != 0) {
                                                                in_stack_fffffffffffffe38 = param_1 + 0x4e;
                                                                lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                                iVar4 = *(int *)(*(longlong *)(param_1[0x27] + 0x70) + 0x18);
                                                                local_88 = ZEXT1216(*(undefined (*) [12])(lVar16 + 0x2c));
                                                                uVar5 = (**(code **)(*param_1 + 8))(param_1);
                                                                uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                                in_stack_fffffffffffffe50 =
                                                                        in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                        (ulonglong)local_res8;
                                                                in_stack_fffffffffffffe48 =
                                                                        (longlong *)
                                                                                ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                 (ulonglong)(iVar4 == 3));
                                                                in_stack_fffffffffffffe28 =
                                                                        (longlong *)
                                                                                ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                 (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                puVar15 = local_88;
                                                                goto LAB_140547b2d;
                                                            }
                                                        }
                                                        lVar13 = *(longlong *)(param_1[0x49] + 8);
                                                        if (lVar13 != 0) {
                                                            do {
                                                                if (*puVar22 < *(uint *)(lVar13 + 0x20)) {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x10);
                                                                }
                                                                else {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x18);
                                                                }
                                                            } while (lVar13 != 0);
                                                        }
                                                        in_stack_fffffffffffffe18 = puVar22;
                                                        FUN_140029d00(param_1 + 0x48);
                                                    }
                                                    lVar13 = *(longlong *)(lVar16 + 0x18);
                                                    if (lVar13 == 0) {
                                                        lVar13 = *(longlong *)(lVar16 + 8);
                                                        if (lVar16 == *(longlong *)(lVar13 + 0x18)) {
                                                            do {
                                                                lVar16 = lVar13;
                                                                lVar13 = *(longlong *)(lVar16 + 8);
                                                            } while (lVar16 == *(longlong *)(lVar13 + 0x18));
                                                        }
                                                        if (*(longlong *)(lVar16 + 0x18) != lVar13) {
                                                            lVar16 = lVar13;
                                                        }
                                                    }
                                                    else {
                                                        for (lVar7 = *(longlong *)(lVar13 + 0x10); lVar16 = lVar13, lVar7 != 0;
                                                             lVar7 = *(longlong *)(lVar7 + 0x10)) {
                                                            lVar13 = lVar7;
                                                        }
                                                    }
                                                } while (lVar16 != param_1[0x6b]);
                                            }
                                        }
                                    }
                                    else {
                                        if ((*(byte *)(puVar22 + 0x12) & 8) != 0) {
                                            lVar16 = param_1[0x6f];
                                            uVar18 = *puVar22;
                                            lVar7 = lVar16;
                                            lVar13 = *(longlong *)(lVar16 + 8);
                                            while (lVar13 != 0) {
                                                if (*(uint *)(lVar13 + 0x20) < uVar18) {
                                                    lVar13 = *(longlong *)(lVar13 + 0x18);
                                                }
                                                else {
                                                    lVar7 = lVar13;
                                                    lVar13 = *(longlong *)(lVar13 + 0x10);
                                                }
                                            }
                                            if (((lVar7 == lVar16) || (uVar18 < *(uint *)(lVar7 + 0x20))) ||
                                                ((uVar18 <= *(uint *)(lVar7 + 0x20) && (*(int *)(lVar7 + 0x24) != 0)))) {
                                                local_160 = lVar16;
                                                plVar9 = &local_160;
                                            }
                                            else {
                                                local_168 = lVar7;
                                                plVar9 = &local_168;
                                            }
                                            lVar16 = *plVar9;
                                            if (lVar16 == param_1[0x6f]) goto LAB_1405484f6;
                                            if ((puVar22[0x18] == 0) || ((uVar19 >> 0x12 & 1) != 0)) {
                                                uVar14 = FUN_14018b280(0x140,8);
                                                if (uVar14 != 0) {
                                                    in_stack_fffffffffffffe38 = param_1 + 0x4e;
                                                    lVar13 = *(longlong *)(param_1[0x27] + 8);
                                                    iVar4 = *(int *)(*(longlong *)(param_1[0x27] + 0x70) + 0x18);
                                                    local_108 = ZEXT1216(*(undefined (*) [12])(lVar16 + 0x34));
                                                    uVar5 = (**(code **)(*param_1 + 8))(param_1);
                                                    uVar23 = *(undefined4 *)(lVar16 + 0x44);
                                                    uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                    in_stack_fffffffffffffe50 =
                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                            (ulonglong)local_res8;
                                                    in_stack_fffffffffffffe48 =
                                                            (longlong *)
                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                     (ulonglong)(iVar4 == 3));
                                                    in_stack_fffffffffffffe28 =
                                                            (longlong *)
                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                     (ulonglong)*(uint *)(param_1 + 0x2b));
                                                    puVar15 = local_108;
                                                    goto LAB_140547321;
                                                }
                                            }
                                            else {
                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                if (*plVar9 == 0) {
                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                    if (puVar10 == (undefined8 *)0x0) {
                                                        puVar10 = (undefined8 *)0x0;
                                                    }
                                                    else {
                                                        *puVar10 = 0;
                                                    }
                                                    puVar11 = (undefined8 *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                    *puVar11 = puVar10;
                                                }
                                                local_res20 = FUN_14018b280(0x140,8);
                                                if (local_res20 != 0) {
                                                    lVar13 = param_1[0x27];
                                                    iVar4 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x18);
                                                    local_78 = ZEXT1216(*(undefined (*) [12])(lVar16 + 0x34));
                                                    pplVar12 = (longlong **)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                    lVar13 = *(longlong *)(lVar13 + 8);
                                                    uVar5 = (**(code **)(*param_1 + 8))();
                                                    uVar23 = *(undefined4 *)(lVar16 + 0x44);
                                                    uVar6 = *(undefined4 *)(lVar13 + 0x6c);
                                                    in_stack_fffffffffffffe50 =
                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                            (ulonglong)local_res8;
                                                    in_stack_fffffffffffffe38 = *pplVar12;
                                                    in_stack_fffffffffffffe48 =
                                                            (longlong *)
                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                     (ulonglong)(iVar4 == 3));
                                                    in_stack_fffffffffffffe28 =
                                                            (longlong *)
                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                     (ulonglong)*(uint *)(param_1 + 0x2b));
                                                    puVar15 = local_78;
                                                    uVar14 = local_res20;
                                                    LAB_140547321:
                                                    FUN_140549e10(uVar14,uVar5,puVar22,
                                                                  *(undefined4 *)((longlong)param_1 + 0x154),puVar15,
                                                                  *(undefined4 *)(lVar16 + 0x40),in_stack_fffffffffffffe28,
                                                                  local_res10,in_stack_fffffffffffffe38,0,
                                                                  in_stack_fffffffffffffe48,in_stack_fffffffffffffe50,uVar6,
                                                                  uVar23,param_1);
                                                }
                                            }
                                            lVar16 = *(longlong *)(param_1[0x49] + 8);
                                            if (lVar16 != 0) {
                                                do {
                                                    if (*puVar22 < *(uint *)(lVar16 + 0x20)) {
                                                        lVar16 = *(longlong *)(lVar16 + 0x10);
                                                    }
                                                    else {
                                                        lVar16 = *(longlong *)(lVar16 + 0x18);
                                                    }
                                                } while (lVar16 != 0);
                                            }
                                            in_stack_fffffffffffffe18 = puVar22;
                                            FUN_140029d00(param_1 + 0x48);
                                        }
                                        lVar16 = *(longlong *)(param_1[0x6b] + 0x10);
                                        if (lVar16 != param_1[0x6b]) {
                                            do {
                                                if ((((puVar22[0x12] == 0) && ((*(byte *)(lVar16 + 0x28) & 2) != 0)) ||
                                                     ((*(byte *)(lVar16 + 0x28) & (byte)puVar22[0x12]) != 0)) &&
                                                    (lVar13 = FUN_1403d90d0(), lVar13 != 0)) {
                                                    lVar13 = param_1[0x6f];
                                                    uVar19 = *puVar22;
                                                    lVar8 = lVar13;
                                                    lVar7 = *(longlong *)(lVar13 + 8);
                                                    while (lVar7 != 0) {
                                                        if ((*(uint *)(lVar7 + 0x20) < uVar19) ||
                                                            ((*(uint *)(lVar7 + 0x20) <= uVar19 &&
                                                              (*(uint *)(lVar7 + 0x24) < *(uint *)(lVar16 + 0x24))))) {
                                                            lVar7 = *(longlong *)(lVar7 + 0x18);
                                                        }
                                                        else {
                                                            lVar8 = lVar7;
                                                            lVar7 = *(longlong *)(lVar7 + 0x10);
                                                        }
                                                    }
                                                    if (((lVar8 == lVar13) || (uVar19 < *(uint *)(lVar8 + 0x20))) ||
                                                        ((uVar19 <= *(uint *)(lVar8 + 0x20) &&
                                                          (*(uint *)(lVar16 + 0x24) < *(uint *)(lVar8 + 0x24))))) {
                                                        local_140 = lVar13;
                                                        plVar9 = &local_140;
                                                    }
                                                    else {
                                                        local_158 = lVar8;
                                                        plVar9 = &local_158;
                                                    }
                                                    lVar13 = *plVar9;
                                                    if (lVar13 != param_1[0x6f]) {
                                                        if ((puVar22[0x11] & 0x40000) == 0) {
                                                            if (puVar22[0x18] == 0) {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x57,lVar16 + 0x24);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)
                                                                            FUN_140055be0(param_1 + 0x57,lVar16 + 0x24);
                                                                    *puVar11 = puVar10;
                                                                }
                                                                local_res20 = FUN_14018b280(0x140,8);
                                                                if (local_res20 != 0) {
                                                                    lVar7 = param_1[0x27];
                                                                    iVar4 = *(int *)(*(longlong *)(lVar7 + 0x70) + 0x18);
                                                                    local_a8 = ZEXT1216(*(undefined (*) [12])(lVar13 + 0x34));
                                                                    pplVar12 = (longlong **)
                                                                            FUN_140055be0(param_1 + 0x57,lVar16 + 0x24);
                                                                    lVar7 = *(longlong *)(lVar7 + 8);
                                                                    uVar5 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                    uVar6 = *(undefined4 *)(lVar7 + 0x6c);
                                                                    in_stack_fffffffffffffe50 =
                                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                            (ulonglong)local_res8;
                                                                    in_stack_fffffffffffffe38 = *pplVar12;
                                                                    in_stack_fffffffffffffe48 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                     (ulonglong)(iVar4 == 3));
                                                                    in_stack_fffffffffffffe28 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                     (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                    puVar15 = local_a8;
                                                                    uVar14 = local_res20;
                                                                    goto LAB_140547734;
                                                                }
                                                            }
                                                            else {
                                                                plVar9 = (longlong *)FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                if (*plVar9 == 0) {
                                                                    puVar10 = (undefined8 *)FUN_14018b280(8);
                                                                    if (puVar10 == (undefined8 *)0x0) {
                                                                        puVar10 = (undefined8 *)0x0;
                                                                    }
                                                                    else {
                                                                        *puVar10 = 0;
                                                                    }
                                                                    puVar11 = (undefined8 *)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    *puVar11 = puVar10;
                                                                }
                                                                local_res20 = FUN_14018b280(0x140,8);
                                                                if (local_res20 != 0) {
                                                                    lVar7 = param_1[0x27];
                                                                    iVar4 = *(int *)(*(longlong *)(lVar7 + 0x70) + 0x18);
                                                                    local_c8 = ZEXT1216(*(undefined (*) [12])(lVar13 + 0x34));
                                                                    pplVar12 = (longlong **)
                                                                            FUN_140055be0(param_1 + 0x5b,puVar22 + 0x18);
                                                                    lVar7 = *(longlong *)(lVar7 + 8);
                                                                    uVar5 = (**(code **)(*param_1 + 8))();
                                                                    uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                    uVar6 = *(undefined4 *)(lVar7 + 0x6c);
                                                                    in_stack_fffffffffffffe50 =
                                                                            in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                            (ulonglong)local_res8;
                                                                    in_stack_fffffffffffffe38 = *pplVar12;
                                                                    in_stack_fffffffffffffe48 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                     (ulonglong)(iVar4 == 3));
                                                                    in_stack_fffffffffffffe28 =
                                                                            (longlong *)
                                                                                    ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                     (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                    puVar15 = local_c8;
                                                                    uVar14 = local_res20;
                                                                    LAB_140547734:
                                                                    FUN_140549e10(uVar14,uVar5,puVar22,
                                                                                  *(undefined4 *)((longlong)param_1 + 0x154),puVar15,
                                                                                  *(undefined4 *)(lVar13 + 0x40),
                                                                                  in_stack_fffffffffffffe28,local_res10,
                                                                                  in_stack_fffffffffffffe38,0,
                                                                                  in_stack_fffffffffffffe48,in_stack_fffffffffffffe50,
                                                                                  uVar6,uVar23,param_1);
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            uVar14 = FUN_14018b280(0x140,8);
                                                            if (uVar14 != 0) {
                                                                in_stack_fffffffffffffe38 = param_1 + 0x4e;
                                                                lVar7 = *(longlong *)(param_1[0x27] + 8);
                                                                iVar4 = *(int *)(*(longlong *)(param_1[0x27] + 0x70) + 0x18);
                                                                local_e8 = ZEXT1216(*(undefined (*) [12])(lVar13 + 0x34));
                                                                uVar5 = (**(code **)(*param_1 + 8))(param_1);
                                                                uVar23 = *(undefined4 *)(lVar16 + 0x3c);
                                                                uVar6 = *(undefined4 *)(lVar7 + 0x6c);
                                                                in_stack_fffffffffffffe50 =
                                                                        in_stack_fffffffffffffe50 & 0xffffffff00000000 |
                                                                        (ulonglong)local_res8;
                                                                in_stack_fffffffffffffe48 =
                                                                        (longlong *)
                                                                                ((ulonglong)in_stack_fffffffffffffe48 & 0xffffffff00000000 |
                                                                                 (ulonglong)(iVar4 == 3));
                                                                in_stack_fffffffffffffe28 =
                                                                        (longlong *)
                                                                                ((ulonglong)in_stack_fffffffffffffe28 & 0xffffffff00000000 |
                                                                                 (ulonglong)*(uint *)(lVar16 + 0x24));
                                                                puVar15 = local_e8;
                                                                goto LAB_140547734;
                                                            }
                                                        }
                                                        lVar13 = *(longlong *)(param_1[0x49] + 8);
                                                        if (lVar13 != 0) {
                                                            do {
                                                                if (*puVar22 < *(uint *)(lVar13 + 0x20)) {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x10);
                                                                }
                                                                else {
                                                                    lVar13 = *(longlong *)(lVar13 + 0x18);
                                                                }
                                                            } while (lVar13 != 0);
                                                        }
                                                        in_stack_fffffffffffffe18 = puVar22;
                                                        FUN_140029d00(param_1 + 0x48);
                                                    }
                                                }
                                                lVar13 = *(longlong *)(lVar16 + 0x18);
                                                if (lVar13 == 0) {
                                                    lVar13 = *(longlong *)(lVar16 + 8);
                                                    if (lVar16 == *(longlong *)(lVar13 + 0x18)) {
                                                        do {
                                                            lVar16 = lVar13;
                                                            lVar13 = *(longlong *)(lVar16 + 8);
                                                        } while (lVar16 == *(longlong *)(lVar13 + 0x18));
                                                    }
                                                    if (*(longlong *)(lVar16 + 0x18) != lVar13) {
                                                        lVar16 = lVar13;
                                                    }
                                                }
                                                else {
                                                    for (lVar7 = *(longlong *)(lVar13 + 0x10); lVar16 = lVar13, lVar7 != 0;
                                                         lVar7 = *(longlong *)(lVar7 + 0x10)) {
                                                        lVar13 = lVar7;
                                                    }
                                                }
                                            } while (lVar16 != param_1[0x6b]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                LAB_1405484f6:
                lVar16 = param_1[0x27];
                local_170 = local_170 + 1;
            } while (local_170 < *(ulonglong *)(lVar16 + 0x68));
        }
        local_128 = FUN_140546e60;
        local_138 = CONCAT88(param_1,local_138._0_8_) & (undefined  [16])0xffffffffffffffff;
        local_120 = 0;
        FUN_140195960(param_1 + 0x60,0,local_138,4);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140548590(longlong param_1)

{
    undefined auVar1 [12];
    undefined auVar2 [12];
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_88 [16];
    undefined local_78 [16];
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

    if (*(int *)(param_1 + 0x2f8) != 0) {
        FUN_1405488c0(*(undefined8 *)(param_1 + 0x260));
        FUN_1405488c0(*(undefined8 *)(param_1 + 0x268));
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x10);
        if (lVar5 != *(longlong *)(param_1 + 0x280)) {
            do {
                FUN_1405488c0(**(undefined8 **)(lVar5 + 0x28));
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
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(param_1 + 0x280));
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x10);
        if (lVar5 != *(longlong *)(param_1 + 0x2c0)) {
            do {
                FUN_1405488c0(**(undefined8 **)(lVar5 + 0x28));
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
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(param_1 + 0x2c0));
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x10);
        if (lVar5 != *(longlong *)(param_1 + 0x2a0)) {
            do {
                FUN_1405488c0(**(undefined8 **)(lVar5 + 0x28));
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
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(param_1 + 0x2a0));
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x10);
        if (lVar5 != *(longlong *)(param_1 + 0x2e0)) {
            do {
                FUN_1405488c0(**(undefined8 **)(lVar5 + 0x28));
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
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(param_1 + 0x2e0));
        }
        for (lVar5 = *(longlong *)(param_1 + 0x270); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
            local_68 = *(undefined (*) [16])(lVar5 + 0x90);
            auVar1 = *(undefined (*) [12])*(undefined (*) [16])(lVar5 + 0xa0);
            local_78 = *(undefined (*) [16])(lVar5 + 0xa0);
            auVar2 = *(undefined (*) [12])*(undefined (*) [16])(lVar5 + 0xb0);
            local_88 = *(undefined (*) [16])(lVar5 + 0xb0);
            if (*(int *)(*(longlong *)(lVar5 + 0x30) + 8) != 7) {
                local_88._0_4_ = SUB124(auVar2,0);
                local_78._0_4_ = SUB124(auVar1,0);
                local_88._8_4_ = SUB124(auVar2 >> 0x40,0);
                if (local_88._0_4_ <= local_88._8_4_) {
                    local_88._0_4_ = local_88._8_4_;
                }
                local_78._8_4_ = SUB124(auVar1 >> 0x40,0);
                if (local_78._8_4_ <= local_78._0_4_) {
                    local_78._0_4_ = local_78._8_4_;
                }
                local_78 = CONCAT412(local_78._0_4_,
                                     CONCAT48(local_78._0_4_,CONCAT44(local_78._0_4_,local_78._0_4_)));
                local_88 = CONCAT412(local_88._0_4_,
                                     CONCAT48(local_88._0_4_,CONCAT44(local_88._0_4_,local_88._0_4_)));
            }
            local_58 = *(undefined4 *)(lVar5 + 0xc0);
            uStack84 = *(undefined4 *)(lVar5 + 0xc4);
            uStack80 = *(undefined4 *)(lVar5 + 200);
            uStack76 = *(undefined4 *)(lVar5 + 0xcc);
            local_48 = *(undefined4 *)(lVar5 + 0xd0);
            uStack68 = *(undefined4 *)(lVar5 + 0xd4);
            uStack64 = *(undefined4 *)(lVar5 + 0xd8);
            uStack60 = *(undefined4 *)(lVar5 + 0xdc);
            local_38 = *(undefined4 *)(lVar5 + 0xe0);
            uStack52 = *(undefined4 *)(lVar5 + 0xe4);
            uStack48 = *(undefined4 *)(lVar5 + 0xe8);
            uStack44 = *(undefined4 *)(lVar5 + 0xec);
            local_28 = *(undefined4 *)(lVar5 + 0xf0);
            uStack36 = *(undefined4 *)(lVar5 + 0xf4);
            uStack32 = *(undefined4 *)(lVar5 + 0xf8);
            uStack28 = *(undefined4 *)(lVar5 + 0xfc);
            FUN_14054ca10(lVar5,local_68,local_78,local_88,&local_58,*(undefined4 *)(lVar5 + 0x48));
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405488c0(longlong param_1)

{
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    bool bVar5;
    uint uVar6;
    longlong lVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    undefined in_XMM7 [16];
    undefined auVar11 [16];
    undefined4 uVar12;
    float fVar13;
    undefined local_d8 [8];
    float fStack208;
    undefined local_c8 [16];
    float local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
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

    if (param_1 != 0) {
        local_88 = _DAT_140c783a0;
        uStack132 = uRam0000000140c783a4;
        uStack128 = uRam0000000140c783a8;
        uStack124 = uRam0000000140c783ac;
        local_c8 = CONCAT412(DAT_140c463a8,CONCAT48(DAT_140c463a8,CONCAT44(DAT_140c463a8,DAT_140c463a8))
        );
        _local_d8 = in_XMM7 & (undefined  [16])0x0;
        bVar5 = true;
        uVar6 = 0;
        local_98 = _DAT_140c78390;
        uStack148 = uRam0000000140c78394;
        uStack144 = uRam0000000140c78398;
        uStack140 = uRam0000000140c7839c;
        local_78 = _DAT_140c783b0;
        uStack116 = uRam0000000140c783b4;
        uStack112 = uRam0000000140c783b8;
        uStack108 = uRam0000000140c783bc;
        local_68 = _DAT_140c783c0;
        uStack100 = uRam0000000140c783c4;
        uStack96 = uRam0000000140c783c8;
        uStack92 = uRam0000000140c783cc;
        lVar7 = param_1;
        local_a8 = _local_d8;
        do {
            if (*(int *)(*(longlong *)(lVar7 + 0x30) + 8) != 7) {
                bVar5 = false;
            }
            uVar6 = uVar6 + 1;
            if (uVar6 == 1) {
                local_98 = *(undefined4 *)(lVar7 + 0xc0);
                uStack148 = *(undefined4 *)(lVar7 + 0xc4);
                uStack144 = *(undefined4 *)(lVar7 + 200);
                uStack140 = *(undefined4 *)(lVar7 + 0xcc);
                local_88 = *(undefined4 *)(lVar7 + 0xd0);
                uStack132 = *(undefined4 *)(lVar7 + 0xd4);
                uStack128 = *(undefined4 *)(lVar7 + 0xd8);
                uStack124 = *(undefined4 *)(lVar7 + 0xdc);
                local_78 = *(undefined4 *)(lVar7 + 0xe0);
                uStack116 = *(undefined4 *)(lVar7 + 0xe4);
                uStack112 = *(undefined4 *)(lVar7 + 0xe8);
                uStack108 = *(undefined4 *)(lVar7 + 0xec);
                local_68 = *(undefined4 *)(lVar7 + 0xf0);
                uStack100 = *(undefined4 *)(lVar7 + 0xf4);
                uStack96 = *(undefined4 *)(lVar7 + 0xf8);
                uStack92 = *(undefined4 *)(lVar7 + 0xfc);
            }
            pfVar1 = (float *)(lVar7 + 0x90);
            pfVar2 = (float *)(lVar7 + 0x94);
            pfVar3 = (float *)(lVar7 + 0x98);
            pfVar4 = (float *)(lVar7 + 0x9c);
            lVar7 = *(longlong *)(lVar7 + 8);
            local_a8 = CONCAT412(*pfVar4 + SUB164(local_a8 >> 0x60,0),
                                 CONCAT48(*pfVar3 + SUB164(local_a8 >> 0x40,0),
                                          CONCAT44(*pfVar2 + SUB164(local_a8 >> 0x20,0),
                                                   *pfVar1 + SUB164(local_a8,0))));
        } while (lVar7 != 0);
        iVar8 = DAT_140c636a8;
        if (uVar6 == 1) {
            fVar10 = *(float *)*(undefined (*) [16])(param_1 + 0xa0);
            _local_d8 = *(undefined (*) [16])(param_1 + 0xb0);
            local_c8._0_12_ = SUB1612(*(undefined (*) [16])(param_1 + 0xa0),0);
            if (*(int *)(param_1 + 0x48) - DAT_140c636a8 < 0) {
                iVar8 = *(int *)(param_1 + 0x48);
            }
        }
        else {
            uVar12 = 0x40000000;
            fVar10 = (float)(ulonglong)uVar6;
            uVar6 = 0x7fffffff;
            fVar13 = 0.5;
            auVar11 = divps(local_a8,CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))));
            lVar7 = param_1;
            local_a8 = auVar11;
            do {
                fVar10 = *(float *)(lVar7 + 0x90);
                if (*(float *)(lVar7 + 0xa0) <= local_c8._0_4_) {
                    local_c8._0_4_ = *(float *)(lVar7 + 0xa0);
                }
                if (0.0 <= local_c8._8_4_) {
                    local_c8._8_4_ = 0.0;
                }
                fVar9 = *(float *)(lVar7 + 0xb0);
                uStack180 = *(undefined4 *)(lVar7 + 0xb4);
                uStack176 = *(undefined4 *)(lVar7 + 0xb8);
                uStack172 = *(undefined4 *)(lVar7 + 0xbc);
                local_c8 = ZEXT1216(CONCAT48(local_c8._8_4_,(ulonglong)(uint)local_c8._0_4_));
                local_b8 = fVar9;
                if (*(int *)(*(longlong *)(lVar7 + 0x30) + 8) == 7) {
                    fVar9 = (float)FUN_14054da10(fVar9,0,uVar12,lVar7,0);
                    fVar9 = fVar9 * fVar13;
                }
                if (*(int *)(lVar7 + 0x48) - iVar8 < 0) {
                    iVar8 = *(int *)(lVar7 + 0x48);
                }
                lVar7 = *(longlong *)(lVar7 + 8);
                fVar9 = (float)((uint)(fVar10 - SUB164(auVar11,0)) & uVar6) + fVar9;
                if (local_d8._0_4_ <= fVar9) {
                    local_d8._0_4_ = fVar9;
                }
                fVar10 = fStack208;
                if (fStack208 <= 0.0) {
                    fVar10 = 0.0;
                }
                _local_d8 = ZEXT1216(CONCAT48(fVar10,(ulonglong)(uint)local_d8._0_4_));
            } while (lVar7 != 0);
        }
        if (local_c8._8_4_ <= local_c8._0_4_) {
            local_c8._0_4_ = local_c8._8_4_;
        }
        local_c8 = CONCAT412(local_c8._0_4_,
                             CONCAT48(local_c8._0_4_,CONCAT44(local_c8._0_4_,local_c8._0_4_)));
        if (bVar5) {
            _local_d8 = CONCAT124(stack0xffffffffffffff2c,DAT_140c463a8);
        }
        else {
            if (local_d8._0_4_ <= fStack208) {
                local_d8._0_4_ = fStack208;
            }
            _local_d8 = CONCAT412(local_d8._0_4_,
                                  CONCAT48(local_d8._0_4_,CONCAT44(local_d8._0_4_,local_d8._0_4_)));
        }
        do {
            fVar10 = (float)FUN_14054ca10(fVar10,param_1,local_a8,local_c8,local_d8,&local_98,iVar8);
            param_1 = *(longlong *)(param_1 + 8);
        } while (param_1 != 0);
    }
    return;
}



undefined8 FUN_140548bd0(longlong param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong local_res8;

    lVar8 = *(longlong *)(param_1 + 0x248);
    local_res8 = lVar8;
    if (*(longlong *)(lVar8 + 8) != 0) {
        lVar2 = *(longlong *)(lVar8 + 8);
        do {
            if (*(uint *)(lVar2 + 0x20) < *(uint *)param_2[6]) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar8) || (*(uint *)param_2[6] < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar8;
    }
    if (local_res8 != lVar8) {
        return 0x80004005;
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
        *(longlong *)*param_2 = param_2[1];
    }
    pplVar1 = (longlong **)(param_2 + 1);
    if ((longlong *)param_2[1] != (longlong *)0x0) {
        *(longlong *)param_2[1] = *param_2;
    }
    lVar8 = param_2[6];
    *param_2 = 0;
    *pplVar1 = (longlong *)0x0;
    if ((*(uint *)(lVar8 + 0x44) & 0x40000) == 0) {
        if (*(int *)(lVar8 + 0x60) == 0) {
            pplVar7 = (longlong **)(param_1 + 0x260);
        }
        else {
            plVar4 = (longlong *)FUN_140055be0(param_1 + 0x2d8,lVar8 + 0x60);
            if (*plVar4 == 0) {
                puVar5 = (undefined8 *)FUN_14018b280(8);
                if (puVar5 == (undefined8 *)0x0) {
                    puVar5 = (undefined8 *)0x0;
                }
                else {
                    *puVar5 = 0;
                }
                puVar6 = (undefined8 *)FUN_140055be0(param_1 + 0x2d8,param_2[6] + 0x60);
                *puVar6 = puVar5;
            }
            puVar5 = (undefined8 *)FUN_140055be0(param_1 + 0x2d8,param_2[6] + 0x60);
            pplVar7 = (longlong **)*puVar5;
            if (*param_2 != 0) goto LAB_140548d2b;
        }
    }
    else {
        pplVar7 = (longlong **)(param_1 + 0x270);
    }
    *param_2 = (longlong)pplVar7;
    *pplVar1 = *pplVar7;
    *pplVar7 = param_2;
    if (*pplVar1 != (longlong *)0x0) {
        **pplVar1 = (longlong)pplVar1;
    }
    LAB_140548d2b:
    FUN_14054a2b0(param_2,param_1);
    FUN_14054a370(param_2);
    lVar8 = *(longlong *)(param_1 + 0x248);
    lVar2 = *(longlong *)(lVar8 + 8);
    if (lVar2 != 0) {
        do {
            lVar8 = lVar2;
            if (*(uint *)param_2[6] < *(uint *)(lVar8 + 0x20)) {
                lVar2 = *(longlong *)(lVar8 + 0x10);
            }
            else {
                lVar2 = *(longlong *)(lVar8 + 0x18);
            }
        } while (lVar2 != 0);
    }
    FUN_140029d00(param_1 + 0x240,&local_res8,lVar2,lVar8,(uint *)param_2[6]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140548db0(void)

{
    wchar_t *pwVar1;
    int iVar2;
    wchar_t **ppwVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined extraout_XMM0 [16];
    undefined auVar7 [16];
    wchar_t *local_68 [4];
    wchar_t *local_48 [6];

    _DAT_140c7d7d0 = 0x3db0b0b1;
    uRam0000000140c7d7d4 = 0x3f51d1d2;
    uRam0000000140c7d7d8 = 0x3f800000;
    uRam0000000140c7d7dc = 0x3f800000;
    _DAT_140c7d7e0 = 0x3db0b0b1;
    uRam0000000140c7d7e4 = 0x3f51d1d2;
    uRam0000000140c7d7e8 = 0x3f800000;
    uRam0000000140c7d7ec = 0x3f800000;
    _DAT_140c7d7f0 = 0x3f800000;
    uRam0000000140c7d7f4 = 0x3e30b0b1;
    uRam0000000140c7d7f8 = 0x3dc8c8c9;
    uRam0000000140c7d7fc = 0x3f800000;
    _DAT_140c7d810 = 0x3f28a8a9;
    uRam0000000140c7d814 = 0x3f008081;
    uRam0000000140c7d818 = 0x3f008081;
    uRam0000000140c7d81c = 0x3f800000;
    _DAT_140c7d820 = 0x3f28a8a9;
    uRam0000000140c7d824 = 0x3f008081;
    uRam0000000140c7d828 = 0x3f008081;
    uRam0000000140c7d82c = 0x3f800000;
    _DAT_140c7d790 = 0x3f800000;
    uRam0000000140c7d794 = 0x3e30b0b1;
    uRam0000000140c7d798 = 0x3dc8c8c9;
    uRam0000000140c7d79c = 0x3f800000;
    _DAT_140c7d7a0 = 0x3f66e6e7;
    uRam0000000140c7d7a4 = 0x3e60e0e1;
    uRam0000000140c7d7a8 = 0x3f800000;
    uRam0000000140c7d7ac = 0x3f800000;
    _DAT_140c7d800 = 0x3f66e6e7;
    uRam0000000140c7d804 = 0x3e60e0e1;
    uRam0000000140c7d808 = 0x3f800000;
    uRam0000000140c7d80c = 0x3f800000;
    _DAT_140c7d7c0 = 0x3e50d0d1;
    uRam0000000140c7d7c4 = 0x3f58d8d9;
    uRam0000000140c7d7c8 = 0;
    uRam0000000140c7d7cc = 0x3f800000;
    _DAT_140c7d7b0 = 0x3f800000;
    uRam0000000140c7d7b4 = 0x3f189899;
    uRam0000000140c7d7b8 = 0x3e2cacad;
    uRam0000000140c7d7bc = 0x3f800000;
    _DAT_140c7d870 = 0x3e6ceced;
    uRam0000000140c7d874 = 0x3da0a0a1;
    uRam0000000140c7d878 = 0x3f2fafb0;
    uRam0000000140c7d87c = 0x3f800000;
    _DAT_140c7d880 = 0x3e6ceced;
    uRam0000000140c7d884 = 0x3da0a0a1;
    uRam0000000140c7d888 = 0x3f2fafb0;
    uRam0000000140c7d88c = 0x3f800000;
    _DAT_140c7d890 = 0x3f800000;
    uRam0000000140c7d894 = 0x3f018182;
    uRam0000000140c7d898 = 0;
    uRam0000000140c7d89c = 0x3f800000;
    _DAT_140c7d8b0 = 0x3f28a8a9;
    uRam0000000140c7d8b4 = 0x3f008081;
    uRam0000000140c7d8b8 = 0x3f008081;
    uRam0000000140c7d8bc = 0x3f800000;
    _DAT_140c7d8c0 = 0x3f28a8a9;
    uRam0000000140c7d8c4 = 0x3f008081;
    uRam0000000140c7d8c8 = 0x3f008081;
    uRam0000000140c7d8cc = 0x3f800000;
    _DAT_140c7d830 = 0x3f800000;
    uRam0000000140c7d834 = 0x3f018182;
    uRam0000000140c7d838 = 0;
    uRam0000000140c7d83c = 0x3f800000;
    _DAT_140c7d840 = 0x3f5cdcdd;
    uRam0000000140c7d844 = 0;
    uRam0000000140c7d848 = 0x3eaaaaab;
    uRam0000000140c7d84c = 0x3f800000;
    _DAT_140c7d8a0 = 0x3f5cdcdd;
    uRam0000000140c7d8a4 = 0;
    uRam0000000140c7d8a8 = 0x3eaaaaab;
    uRam0000000140c7d8ac = 0x3f800000;
    _DAT_140c7d860 = 0x3f008081;
    uRam0000000140c7d864 = 0x3f68e8e9;
    uRam0000000140c7d868 = 0;
    uRam0000000140c7d86c = 0x3f800000;
    _DAT_140c7d850 = 0;
    uRam0000000140c7d854 = 0x3f2aaaab;
    uRam0000000140c7d858 = 0x3ee4e4e5;
    uRam0000000140c7d85c = 0x3f800000;
    _DAT_140c7d910 = 0x3e30b0b1;
    uRam0000000140c7d914 = 0x3db8b8b9;
    uRam0000000140c7d918 = 0x3f31b1b2;
    uRam0000000140c7d91c = 0x3f800000;
    _DAT_140c7d920 = 0x3e30b0b1;
    uRam0000000140c7d924 = 0x3db8b8b9;
    uRam0000000140c7d928 = 0x3f31b1b2;
    uRam0000000140c7d92c = 0x3f800000;
    _DAT_140c7d930 = 0x3f800000;
    uRam0000000140c7d934 = 0x3f53d3d4;
    uRam0000000140c7d938 = 0;
    uRam0000000140c7d93c = 0x3f800000;
    _DAT_140c7d950 = 0x3f28a8a9;
    uRam0000000140c7d954 = 0x3f008081;
    uRam0000000140c7d958 = 0x3f008081;
    uRam0000000140c7d95c = 0x3f800000;
    _DAT_140c7d960 = 0x3f28a8a9;
    uRam0000000140c7d964 = 0x3f008081;
    uRam0000000140c7d968 = 0x3f008081;
    uRam0000000140c7d96c = 0x3f800000;
    _DAT_140c7d9d0 = 0x3f800000;
    uRam0000000140c7d9d4 = 0;
    uRam0000000140c7d9d8 = 0;
    uRam0000000140c7d9dc = 0x3f800000;
    _DAT_140c7d8d0 = 0x3f800000;
    uRam0000000140c7d8d4 = 0x3f53d3d4;
    uRam0000000140c7d8d8 = 0;
    uRam0000000140c7d8dc = 0x3f800000;
    _DAT_140c7d8e0 = 0;
    uRam0000000140c7d8e4 = 0x3f1e9e9f;
    uRam0000000140c7d8e8 = 0x3f0e8e8f;
    uRam0000000140c7d8ec = 0x3f800000;
    _DAT_140c7d940 = 0;
    uRam0000000140c7d944 = 0x3f1e9e9f;
    uRam0000000140c7d948 = 0x3f0e8e8f;
    uRam0000000140c7d94c = 0x3f800000;
    _DAT_140c7d8f0 = 0;
    uRam0000000140c7d8f4 = 0x3f33b3b4;
    uRam0000000140c7d8f8 = 0x3eb0b0b1;
    uRam0000000140c7d8fc = 0x3f800000;
    _DAT_140c7d900 = 0x3f800000;
    uRam0000000140c7d904 = 0;
    uRam0000000140c7d908 = 0;
    uRam0000000140c7d90c = 0x3f800000;
    _DAT_140c7d9b0 = 0x3e989899;
    uRam0000000140c7d9b4 = 0x3d808081;
    uRam0000000140c7d9b8 = 0x3f2eaeaf;
    uRam0000000140c7d9bc = 0x3f800000;
    _DAT_140c7d9c0 = 0x3e989899;
    uRam0000000140c7d9c4 = 0x3d808081;
    uRam0000000140c7d9c8 = 0x3f2eaeaf;
    uRam0000000140c7d9cc = 0x3f800000;
    _DAT_140c7d9f0 = 0x3f28a8a9;
    uRam0000000140c7d9f4 = 0x3f008081;
    uRam0000000140c7d9f8 = 0x3f008081;
    uRam0000000140c7d9fc = 0x3f800000;
    _DAT_140c7da00 = 0x3f28a8a9;
    uRam0000000140c7da04 = 0x3f008081;
    uRam0000000140c7da08 = 0x3f008081;
    uRam0000000140c7da0c = 0x3f800000;
    _DAT_140c7d970 = 0x3f800000;
    uRam0000000140c7d974 = 0;
    uRam0000000140c7d978 = 0;
    uRam0000000140c7d97c = 0x3f800000;
    _DAT_140c7d980 = 0x3f800000;
    uRam0000000140c7d984 = 0x3f109091;
    uRam0000000140c7d988 = 0;
    uRam0000000140c7d98c = 0x3f800000;
    _DAT_140c7d9e0 = 0x3f800000;
    uRam0000000140c7d9e4 = 0x3f109091;
    uRam0000000140c7d9e8 = 0;
    uRam0000000140c7d9ec = 0x3f800000;
    _DAT_140c7d9a0 = _DAT_140b7b0e0;
    _DAT_140c7d990 = 0x3f800000;
    uRam0000000140c7d994 = 0x3f61e1e2;
    uRam0000000140c7d998 = 0;
    uRam0000000140c7d99c = 0x3f800000;
    auVar7 = _DAT_140b7b0e0;
    FUN_140549270();
    _DAT_140c7d730 = extraout_XMM0 & (undefined  [16])0x0;
    _DAT_140c7d740 = auVar7 & (undefined  [16])0x0;
    local_48[0] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_000_ramp.tex";
    lVar5 = 0;
    _DAT_140c7d770 = 1;
    uRam0000000140c7d774 = 0;
    uRam0000000140c7d778 = 1;
    uRam0000000140c7d77c = 0;
    local_48[1] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_001_ramp.tex";
    ppwVar3 = local_48 + 3;
    _DAT_140c7d780 = 1;
    uRam0000000140c7d784 = 0;
    uRam0000000140c7d788 = 1;
    uRam0000000140c7d78c = 0;
    _DAT_140c7d6f0 = 0;
    _DAT_140c7d6f4 = 1;
    uRam0000000140c7d6f8 = 1;
    uRam0000000140c7d6fc = 2;
    local_48[2] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Cast_002_ramp.tex";
    _DAT_140c7d700 = 0;
    uRam0000000140c7d704 = 1;
    uRam0000000140c7d708 = 1;
    uRam0000000140c7d70c = 2;
    local_48[3] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_000_ramp.tex";
    lVar4 = 3;
    _DAT_140c7d750 = 1;
    uRam0000000140c7d754 = 1;
    uRam0000000140c7d758 = 1;
    uRam0000000140c7d75c = 3;
    local_48[4] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_001_ramp.tex";
    _DAT_140c7d760 = 1;
    uRam0000000140c7d764 = 1;
    uRam0000000140c7d768 = 1;
    uRam0000000140c7d76c = 3;
    _DAT_140c7d710 = 0;
    uRam0000000140c7d714 = 3;
    uRam0000000140c7d718 = 0;
    uRam0000000140c7d71c = 2;
    local_48[5] = L"Art\\FX\\Texture\\Telegraphs\\Ramps\\TelegraphsWave_Channel_002_ramp.tex";
    _DAT_140c7d720 = 0;
    uRam0000000140c7d724 = 3;
    uRam0000000140c7d728 = 0;
    uRam0000000140c7d72c = 2;
    local_68[0] = L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_000_Color.tex";
    local_68[1] = L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_001_Color.tex";
    local_68[2] = L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_Active_000_Color.tex";
    local_68[3] = L"Art\\FX\\Texture\\Telegraphs\\Tiles\\TelegraphsTile_Active_001_Color.tex";
    do {
        pwVar1 = ppwVar3[-3];
        iVar2 = (**(code **)(*DAT_140c65670 + 0x50))
                (DAT_140c65670,pwVar1,0,1,1,0,0,0,(longlong)&DAT_140c65b18 + lVar5);
        if (iVar2 < 0) {
            FUN_1400035b0(0x18,1,0,pwVar1,iVar2);
        }
        pwVar1 = *ppwVar3;
        iVar2 = (**(code **)(*DAT_140c65670 + 0x50))
                (DAT_140c65670,pwVar1,0,1,1,0,0,0,(longlong)&DAT_140c65b30 + lVar5);
        if (iVar2 < 0) {
            FUN_1400035b0(0x18,1,0,pwVar1,iVar2);
        }
        lVar5 = lVar5 + 8;
        ppwVar3 = ppwVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    ppwVar3 = local_68;
    puVar6 = &DAT_140c65b48;
    lVar4 = 2;
    do {
        lVar5 = 2;
        do {
            pwVar1 = *ppwVar3;
            iVar2 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,pwVar1,0,1,1,0x15,0,0,puVar6);
            if (iVar2 < 0) {
                FUN_1400035b0(0x18,1,0,pwVar1,iVar2);
            }
            puVar6 = puVar6 + 1;
            ppwVar3 = ppwVar3 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140549270(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;
    int iVar25;
    float fVar26;
    undefined8 uVar27;

    iVar1 = *DAT_140c63750;
    iVar3 = DAT_140c4aa20;
    if (iVar1 < DAT_140c4aa20) {
        iVar3 = iVar1;
    }
    iVar4 = DAT_140c4aa80;
    if (iVar1 < DAT_140c4aa80) {
        iVar4 = iVar1;
    }
    iVar5 = DAT_140c4aae0;
    if (iVar1 < DAT_140c4aae0) {
        iVar5 = iVar1;
    }
    iVar6 = DAT_140c4ab40;
    if (iVar1 < DAT_140c4ab40) {
        iVar6 = iVar1;
    }
    iVar7 = DAT_140c4aba0;
    if (iVar1 < DAT_140c4aba0) {
        iVar7 = iVar1;
    }
    iVar8 = DAT_140c4ac00;
    if (iVar1 < DAT_140c4ac00) {
        iVar8 = iVar1;
    }
    iVar9 = DAT_140c4ac60;
    if (iVar1 < DAT_140c4ac60) {
        iVar9 = iVar1;
    }
    iVar10 = DAT_140c4acc0;
    if (iVar1 < DAT_140c4acc0) {
        iVar10 = iVar1;
    }
    iVar11 = DAT_140c4ad20;
    if (iVar1 < DAT_140c4ad20) {
        iVar11 = iVar1;
    }
    iVar12 = DAT_140c4ad80;
    if (iVar1 < DAT_140c4ad80) {
        iVar12 = iVar1;
    }
    iVar13 = DAT_140c4ade0;
    if (iVar1 < DAT_140c4ade0) {
        iVar13 = iVar1;
    }
    iVar14 = DAT_140c4ae40;
    if (iVar1 < DAT_140c4ae40) {
        iVar14 = iVar1;
    }
    iVar15 = DAT_140c4aea0;
    if (iVar1 < DAT_140c4aea0) {
        iVar15 = iVar1;
    }
    iVar25 = DAT_140c4af00;
    if (iVar1 < DAT_140c4af00) {
        iVar25 = iVar1;
    }
    iVar16 = DAT_140c4af60;
    if (iVar1 < DAT_140c4af60) {
        iVar16 = iVar1;
    }
    iVar17 = DAT_140c4afc0;
    if (iVar1 < DAT_140c4afc0) {
        iVar17 = iVar1;
    }
    iVar18 = DAT_140c4b020;
    if (iVar1 < DAT_140c4b020) {
        iVar18 = iVar1;
    }
    iVar19 = DAT_140c4b080;
    if (iVar1 < DAT_140c4b080) {
        iVar19 = iVar1;
    }
    iVar20 = DAT_140c4b0e0;
    if (iVar1 < DAT_140c4b0e0) {
        iVar20 = iVar1;
    }
    iVar21 = DAT_140c4b140;
    if (iVar1 < DAT_140c4b140) {
        iVar21 = iVar1;
    }
    iVar22 = DAT_140c4b1a0;
    if (iVar1 < DAT_140c4b1a0) {
        iVar22 = iVar1;
    }
    iVar23 = DAT_140c4b200;
    if (iVar1 < DAT_140c4b200) {
        iVar23 = iVar1;
    }
    iVar24 = DAT_140c4b260;
    if (iVar1 < DAT_140c4b260) {
        iVar24 = iVar1;
    }
    iVar2 = DAT_140c4b2c0;
    if (iVar1 < DAT_140c4b2c0) {
        iVar2 = iVar1;
    }
    fVar26 = (float)(uint)(byte)(&DAT_140c4aaf0)[(longlong)iVar5 * 4];
    uVar27 = CONCAT44((float)(uint)(byte)(&DAT_140c4aa90)[(longlong)iVar4 * 4],
                      (float)(uint)(byte)(&DAT_140c4aa30)[(longlong)iVar3 * 4]);
    _DAT_140c7da60 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48(fVar26,CONCAT44(fVar26,(float)(uint)(byte)(&
                                                                                                        DAT_140c4aa30)[(longlong)iVar3 * 4]))) >> 0x40,0),
                           uVar27),_DAT_140b7b470);
    _DAT_140c7da50 = divps(CONCAT412(0x437f0000,CONCAT48(fVar26,uVar27)),_DAT_140b7b470);
    fVar26 = (float)(uint)(byte)(&DAT_140c4ac10)[(longlong)iVar8 * 4];
    uVar27 = CONCAT44((float)(uint)(byte)(&DAT_140c4abb0)[(longlong)iVar7 * 4],
                      (float)(uint)(byte)(&DAT_140c4ab50)[(longlong)iVar6 * 4]);
    _DAT_140c7daa0 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48(fVar26,CONCAT44(fVar26,(float)(uint)(byte)(&
                                                                                                        DAT_140c4ab50)[(longlong)iVar6 * 4]))) >> 0x40,0),
                           uVar27),_DAT_140b7b470);
    _DAT_140c7da90 = divps(CONCAT412(0x437f0000,CONCAT48(fVar26,uVar27)),_DAT_140b7b470);
    _DAT_140c7da10 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4ad30)
                                                     [(longlong)iVar11 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4ad30)
                                                              [(longlong)iVar11 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4ac70)
                                                              [(longlong)iVar9 * 4])))
                                          >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4acd0)[(longlong)iVar10 * 4],
                                    (float)(uint)(byte)(&DAT_140c4ac70)[(longlong)iVar9 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7da20 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4ae50)
                                                     [(longlong)iVar14 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4ae50)
                                                              [(longlong)iVar14 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4ad90)
                                                              [(longlong)iVar12 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4adf0)[(longlong)iVar13 * 4],
                                    (float)(uint)(byte)(&DAT_140c4ad90)[(longlong)iVar12 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7da70 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4af70)
                                                     [(longlong)iVar16 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4af70)
                                                              [(longlong)iVar16 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4aeb0)
                                                              [(longlong)iVar15 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4af10)[(longlong)iVar25 * 4],
                                    (float)(uint)(byte)(&DAT_140c4aeb0)[(longlong)iVar15 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7da80 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b090)
                                                     [(longlong)iVar19 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b090)
                                                              [(longlong)iVar19 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4afd0)
                                                              [(longlong)iVar17 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b030)[(longlong)iVar18 * 4],
                                    (float)(uint)(byte)(&DAT_140c4afd0)[(longlong)iVar17 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7da30 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b1b0)
                                                     [(longlong)iVar22 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b1b0)
                                                              [(longlong)iVar22 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b0f0)
                                                              [(longlong)iVar20 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b150)[(longlong)iVar21 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b0f0)[(longlong)iVar20 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7da40 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b2d0)
                                                     [(longlong)iVar2 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b2d0)
                                                              [(longlong)iVar2 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b210)
                                                              [(longlong)iVar23 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b270)[(longlong)iVar24 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b210)[(longlong)iVar23 * 4])),
                  _DAT_140b7b470);
    iVar1 = *DAT_140c63750;
    iVar3 = DAT_140c4b320;
    if (iVar1 < DAT_140c4b320) {
        iVar3 = iVar1;
    }
    iVar4 = DAT_140c4b380;
    if (iVar1 < DAT_140c4b380) {
        iVar4 = iVar1;
    }
    iVar5 = DAT_140c4b3e0;
    if (iVar1 < DAT_140c4b3e0) {
        iVar5 = iVar1;
    }
    iVar6 = DAT_140c4b440;
    if (iVar1 < DAT_140c4b440) {
        iVar6 = iVar1;
    }
    iVar7 = DAT_140c4b4a0;
    if (iVar1 < DAT_140c4b4a0) {
        iVar7 = iVar1;
    }
    iVar8 = DAT_140c4b500;
    if (iVar1 < DAT_140c4b500) {
        iVar8 = iVar1;
    }
    iVar9 = DAT_140c4b560;
    if (iVar1 < DAT_140c4b560) {
        iVar9 = iVar1;
    }
    iVar10 = DAT_140c4b5c0;
    if (iVar1 < DAT_140c4b5c0) {
        iVar10 = iVar1;
    }
    iVar11 = DAT_140c4b620;
    if (iVar1 < DAT_140c4b620) {
        iVar11 = iVar1;
    }
    iVar12 = DAT_140c4b680;
    if (iVar1 < DAT_140c4b680) {
        iVar12 = iVar1;
    }
    iVar13 = DAT_140c4b6e0;
    if (iVar1 < DAT_140c4b6e0) {
        iVar13 = iVar1;
    }
    iVar14 = DAT_140c4b760;
    if (iVar1 < DAT_140c4b760) {
        iVar14 = iVar1;
    }
    iVar15 = DAT_140c4b7c0;
    if (iVar1 < DAT_140c4b7c0) {
        iVar15 = iVar1;
    }
    iVar25 = DAT_140c4b820;
    if (iVar1 < DAT_140c4b820) {
        iVar25 = iVar1;
    }
    iVar16 = DAT_140c4b880;
    if (iVar1 < DAT_140c4b880) {
        iVar16 = iVar1;
    }
    iVar17 = DAT_140c4b8e0;
    if (iVar1 < DAT_140c4b8e0) {
        iVar17 = iVar1;
    }
    iVar18 = DAT_140c4b940;
    if (iVar1 < DAT_140c4b940) {
        iVar18 = iVar1;
    }
    iVar19 = DAT_140c4b9a0;
    if (iVar1 < DAT_140c4b9a0) {
        iVar19 = iVar1;
    }
    iVar20 = DAT_140c4ba00;
    if (iVar1 < DAT_140c4ba00) {
        iVar20 = iVar1;
    }
    iVar21 = DAT_140c4ba60;
    if (iVar1 < DAT_140c4ba60) {
        iVar21 = iVar1;
    }
    iVar22 = DAT_140c4bac0;
    if (iVar1 < DAT_140c4bac0) {
        iVar22 = iVar1;
    }
    iVar23 = DAT_140c4bb20;
    if (iVar1 < DAT_140c4bb20) {
        iVar23 = iVar1;
    }
    iVar24 = DAT_140c4bb80;
    if (iVar1 < DAT_140c4bb80) {
        iVar24 = iVar1;
    }
    iVar2 = DAT_140c4bbe0;
    if (iVar1 < DAT_140c4bbe0) {
        iVar2 = iVar1;
    }
    fVar26 = (float)(uint)(byte)(&DAT_140c4b3f0)[(longlong)iVar5 * 4];
    uVar27 = CONCAT44((float)(uint)(byte)(&DAT_140c4b390)[(longlong)iVar4 * 4],
                      (float)(uint)(byte)(&DAT_140c4b330)[(longlong)iVar3 * 4]);
    _DAT_140c7daf0 = divps(CONCAT412(0x437f0000,CONCAT48(fVar26,uVar27)),_DAT_140b7b470);
    _DAT_140c7db00 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48(fVar26,CONCAT44(fVar26,(float)(uint)(byte)(&
                                                                                                        DAT_140c4b330)[(longlong)iVar3 * 4]))) >> 0x40,0),
                           uVar27),_DAT_140b7b470);
    fVar26 = (float)(uint)(byte)(&DAT_140c4b510)[(longlong)iVar8 * 4];
    uVar27 = CONCAT44((float)(uint)(byte)(&DAT_140c4b4b0)[(longlong)iVar7 * 4],
                      (float)(uint)(byte)(&DAT_140c4b450)[(longlong)iVar6 * 4]);
    _DAT_140c7db40 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48(fVar26,CONCAT44(fVar26,(float)(uint)(byte)(&
                                                                                                        DAT_140c4b450)[(longlong)iVar6 * 4]))) >> 0x40,0),
                           uVar27),_DAT_140b7b470);
    _DAT_140c7db30 = divps(CONCAT412(0x437f0000,CONCAT48(fVar26,uVar27)),_DAT_140b7b470);
    _DAT_140c7dab0 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b630)
                                                     [(longlong)iVar11 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b630)
                                                              [(longlong)iVar11 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b570)
                                                              [(longlong)iVar9 * 4])))
                                          >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b5d0)[(longlong)iVar10 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b570)[(longlong)iVar9 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7dac0 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b770)
                                                     [(longlong)iVar14 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b770)
                                                              [(longlong)iVar14 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b690)
                                                              [(longlong)iVar12 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b6f0)[(longlong)iVar13 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b690)[(longlong)iVar12 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7db10 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b890)
                                                     [(longlong)iVar16 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b890)
                                                              [(longlong)iVar16 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b7d0)
                                                              [(longlong)iVar15 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b830)[(longlong)iVar25 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b7d0)[(longlong)iVar15 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7db20 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4b9b0)
                                                     [(longlong)iVar19 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4b9b0)
                                                              [(longlong)iVar19 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4b8f0)
                                                              [(longlong)iVar17 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4b950)[(longlong)iVar18 * 4],
                                    (float)(uint)(byte)(&DAT_140c4b8f0)[(longlong)iVar17 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7dad0 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4bad0)
                                                     [(longlong)iVar22 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4bad0)
                                                              [(longlong)iVar22 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4ba10)
                                                              [(longlong)iVar20 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4ba70)[(longlong)iVar21 * 4],
                                    (float)(uint)(byte)(&DAT_140c4ba10)[(longlong)iVar20 * 4])),
                  _DAT_140b7b470);
    _DAT_140c7dae0 =
            divps(CONCAT88(SUB168(CONCAT412(0x437f0000,
                                            CONCAT48((float)(uint)(byte)(&DAT_140c4bbf0)
                                                     [(longlong)iVar2 * 4],
                                                     CONCAT44((float)(uint)(byte)(&DAT_140c4bbf0)
                                                              [(longlong)iVar2 * 4],
                                                              (float)(uint)(byte)(&DAT_140c4bb30)
                                                              [(longlong)iVar23 * 4]))
                           ) >> 0x40,0),
                           CONCAT44((float)(uint)(byte)(&DAT_140c4bb90)[(longlong)iVar24 * 4],
                                    (float)(uint)(byte)(&DAT_140c4bb30)[(longlong)iVar23 * 4])),
                  _DAT_140b7b470);
    return;
}



void FUN_140549ab0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong lVar4;

    pplVar3 = (longlong **)&DAT_140c65b50;
    lVar2 = 2;
    do {
        if (pplVar3[-1] != (longlong *)0x0) {
            (**(code **)(*pplVar3[-1] + 8))();
            pplVar3[-1] = (longlong *)0x0;
        }
        pplVar3[-1] = (longlong *)0x0;
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
            *pplVar3 = (longlong *)0x0;
        }
        *pplVar3 = (longlong *)0x0;
        lVar4 = 3;
        lVar1 = 0;
        do {
            if (*(longlong **)((longlong)&DAT_140c65b18 + lVar1) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&DAT_140c65b18 + lVar1) + 8))();
                *(undefined8 *)((longlong)&DAT_140c65b18 + lVar1) = 0;
            }
            *(undefined8 *)((longlong)&DAT_140c65b18 + lVar1) = 0;
            if (*(longlong **)((longlong)&DAT_140c65b30 + lVar1) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&DAT_140c65b30 + lVar1) + 8))();
                *(undefined8 *)((longlong)&DAT_140c65b30 + lVar1) = 0;
            }
            *(undefined8 *)((longlong)&DAT_140c65b30 + lVar1) = 0;
            lVar1 = lVar1 + 8;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        pplVar3 = pplVar3 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_140549b90(longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
              undefined4 param_5,int param_6,longlong **param_7,undefined4 param_8,undefined4 param_9
        ,undefined4 param_10,longlong param_11,longlong param_12)

{
    longlong **pplVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    bool bVar11;

    lVar8 = 0;
    param_6 = DAT_140c636a8 - param_6;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = param_2;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = param_3;
    param_1[8] = 0;
    param_1[7] = 0;
    *(int *)(param_1 + 9) = param_6;
    *(int *)((longlong)param_1 + 0x4c) = param_6;
    *(int *)(param_1 + 10) = param_6;
    *(int *)((longlong)param_1 + 0x54) = param_6;
    *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0xb) = param_9;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xf) = param_5;
    *(undefined8 *)((longlong)param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x10) = param_8;
    pplVar9 = (longlong **)(param_1 + 1);
    *(undefined4 *)((longlong)param_1 + 0x8c) = param_10;
    *(undefined (*) [16])(param_1 + 0x12) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x14) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x16) = ZEXT816(0);
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x18) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
    *(undefined4 *)(param_1 + 0x19) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
    *(undefined4 *)(param_1 + 0x1b) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
    *(undefined4 *)(param_1 + 0x1d) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x1e) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
    *(undefined4 *)(param_1 + 0x1f) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
    param_1[0x21] = param_12;
    param_1[0x20] = param_11;
    lVar7 = DAT_140c65898;
    param_1[0x22] = 0;
    *(uint *)(param_1 + 0x25) = (uint)(param_11 == 0);
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 1;
    *(undefined8 *)((longlong)param_1 + 300) = 0;
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    lVar7 = FUN_1403d90d0(lVar7,*(undefined4 *)((longlong)param_1 + 0x74));
    uVar10 = (ulonglong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) != 0) {
        if (lVar7 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
                bVar11 = true;
            }
            else {
                bVar11 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
            }
            if (bVar11) {
                lVar8 = DAT_140c65898;
            }
            if (lVar8 != 0) {
                lVar8 = FUN_1405a5b90(lVar8,uVar10);
                if (lVar8 != 0) goto LAB_140549d2b;
            }
        }
        lVar8 = FUN_1407a0fd0(DAT_140c65b70,uVar10 & 0xffffffff);
    }
    LAB_140549d2b:
    param_1[0x23] = lVar8;
    FUN_14054a370(param_1);
    uVar2 = *(uint *)(param_1[6] + 0x44);
    if ((uVar2 >> 0x14 & 1) == 0) {
        if (((uVar2 >> 0x13 & 1) == 0) &&
            ((((uVar2 >> 0x18 & 1) != 0 || ((uVar2 >> 0x15 & 1) != 0)) ||
              (((uVar2 >> 0x16 & 1) == 0 && (*(int *)(param_1 + 0x24) != 2)))))) {
            iVar6 = FUN_14054ae10(param_1);
            if (iVar6 == 0) goto LAB_140549d7f;
        }
        *(undefined4 *)(param_1 + 0x26) = 1;
    }
    LAB_140549d7f:
    FUN_14054a160(param_1);
    if (*(int *)(param_1[6] + 8) == 3) {
        FUN_14054a160(param_1);
    }
    if ((param_7 != (longlong **)0x0) && (*param_1 == 0)) {
        *param_1 = (longlong)param_7;
        *pplVar9 = *param_7;
        *param_7 = param_1;
        if (*pplVar9 != (longlong *)0x0) {
            **pplVar9 = (longlong)pplVar9;
        }
    }
    pplVar9 = (longlong **)(DAT_140c65898 + 0x6340);
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar9;
        pplVar1 = (longlong **)(param_1 + 3);
        *pplVar1 = *pplVar9;
        *pplVar9 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[2] = (longlong)pplVar1;
        }
    }
    return param_1;
}



longlong *
FUN_140549e10(longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
              undefined4 *param_5,undefined4 param_6,undefined4 param_7,int param_8,
              longlong **param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,longlong param_15)

{
    longlong **pplVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    bool bVar11;

    lVar8 = 0;
    param_8 = DAT_140c636a8 - param_8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = param_2;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = param_3;
    param_1[8] = 0;
    param_1[7] = 0;
    *(int *)(param_1 + 9) = param_8;
    *(int *)((longlong)param_1 + 0x4c) = param_8;
    *(int *)(param_1 + 10) = param_8;
    *(int *)((longlong)param_1 + 0x54) = param_8;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
    *(undefined4 *)(param_1 + 0xb) = param_12;
    pplVar9 = (longlong **)(param_1 + 1);
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    *(undefined4 *)(param_1 + 0xc) = *param_5;
    *(undefined4 *)((longlong)param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0xd) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 0xf) = param_7;
    *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
    *(undefined4 *)(param_1 + 0xe) = param_6;
    *(undefined4 *)((longlong)param_1 + 0x7c) = param_14;
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)(param_1 + 0x10) = param_10;
    *(undefined4 *)((longlong)param_1 + 0x84) = param_11;
    *(undefined4 *)((longlong)param_1 + 0x8c) = param_13;
    *(undefined (*) [16])(param_1 + 0x12) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x14) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x16) = ZEXT816(0);
    param_1[0x21] = 0;
    param_1[0x20] = param_15;
    lVar7 = DAT_140c65898;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 1;
    *(undefined8 *)((longlong)param_1 + 300) = 0;
    *(uint *)(param_1 + 0x25) = (uint)(param_15 == 0);
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    lVar7 = FUN_1403d90d0(lVar7,*(undefined4 *)((longlong)param_1 + 0x74));
    uVar10 = (ulonglong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) != 0) {
        if (lVar7 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
                bVar11 = true;
            }
            else {
                bVar11 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
            }
            if (bVar11) {
                lVar8 = DAT_140c65898;
            }
            if (lVar8 != 0) {
                lVar8 = FUN_1405a5b90(lVar8,uVar10);
                if (lVar8 != 0) goto LAB_140549f9f;
            }
        }
        lVar8 = FUN_1407a0fd0(DAT_140c65b70,uVar10 & 0xffffffff);
    }
    LAB_140549f9f:
    param_1[0x23] = lVar8;
    FUN_14054a370(param_1);
    uVar2 = *(uint *)(param_1[6] + 0x44);
    if ((uVar2 >> 0x14 & 1) == 0) {
        if (((uVar2 >> 0x13 & 1) == 0) &&
            ((((uVar2 >> 0x18 & 1) != 0 || ((uVar2 >> 0x15 & 1) != 0)) ||
              (((uVar2 >> 0x16 & 1) == 0 && (*(int *)(param_1 + 0x24) != 2)))))) {
            iVar6 = FUN_14054ae10(param_1);
            if (iVar6 == 0) goto LAB_140549ff3;
        }
        *(undefined4 *)(param_1 + 0x26) = 1;
    }
    LAB_140549ff3:
    FUN_14054a160(param_1);
    if (*(int *)(param_1[6] + 8) == 3) {
        FUN_14054a160(param_1);
    }
    if ((param_9 != (longlong **)0x0) && (*param_1 == 0)) {
        *param_1 = (longlong)param_9;
        *pplVar9 = *param_9;
        *param_9 = param_1;
        if (*pplVar9 != (longlong *)0x0) {
            **pplVar9 = (longlong)pplVar9;
        }
    }
    pplVar9 = (longlong **)(DAT_140c65898 + 0x6340);
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar9;
        pplVar1 = (longlong **)(param_1 + 3);
        *pplVar1 = *pplVar9;
        *pplVar9 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[2] = (longlong)pplVar1;
        }
    }
    return param_1;
}



void FUN_14054a080(longlong *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (param_1[8] != 0) {
        do {
            lVar1 = param_1[7];
            plVar2 = *(longlong **)(lVar1 + uVar3 * 8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[8]);
    }
    param_1[8] = 0;
    param_1[0x20] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    lVar1 = param_1[7];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    if ((longlong *)*param_1 != (longlong *)0x0) {
        *(longlong *)*param_1 = param_1[1];
    }
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = *param_1;
    }
    param_1[1] = 0;
    *param_1 = 0;
    return;
}



void FUN_14054a160(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    undefined auStack808 [32];
    longlong *local_308 [2];
    undefined local_2f8 [720];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack808;
    FUN_1407e4830(local_2f8,0,0x2d0);
    local_308[0] = (longlong *)0x0;
    iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xd0))
            (*(longlong **)(DAT_140c65898 + 0x7248),local_2f8,local_308);
    if (-1 < iVar3) {
        lVar2 = *(longlong *)(param_1 + 0x40);
        lVar1 = lVar2 + 1;
        lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x38),lVar1,8);
        *(longlong **)(lVar4 + lVar2 * 8) = local_308[0];
        if (*(longlong *)(param_1 + 0x38) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x38),*(longlong *)(param_1 + 0x40) << 3);
            lVar2 = *(longlong *)(param_1 + 0x38);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(param_1 + 0x38) = lVar4;
        }
        *(longlong *)(param_1 + 0x40) = lVar1;
        iVar3 = FUN_14054b1b0(param_1,0);
        if ((iVar3 < 0) &&
            (FUN_140007270(param_1 + 0x38,*(longlong *)(param_1 + 0x40) + -1),
                    local_308[0] != (longlong *)0x0)) {
            (**(code **)(*local_308[0] + 8))();
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack808);
    return;
}



void FUN_14054a2b0(longlong param_1,undefined8 param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    bool bVar5;

    *(undefined8 *)(param_1 + 0x100) = param_2;
    lVar3 = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar2 = FUN_1403d90d0(DAT_140c65898);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x20);
    if (*(uint *)(param_1 + 0x20) != 0) {
        if (lVar2 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) == lVar2) {
                bVar5 = true;
            }
            else {
                bVar5 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar2;
            }
            if (bVar5) {
                lVar3 = DAT_140c65898;
            }
            if ((lVar3 != 0) && (lVar3 = FUN_1405a5b90(lVar3,uVar4), lVar3 != 0)) goto LAB_14054a342;
        }
        lVar3 = FUN_1407a0fd0(DAT_140c65b70,uVar4 & 0xffffffff);
    }
    LAB_14054a342:
    *(longlong *)(param_1 + 0x118) = lVar3;
    uVar1 = DAT_140c636a8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined4 *)(param_1 + 0x50) = uVar1;
    }
    return;
}



void FUN_14054a370(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    lVar1 = *(longlong *)(param_1 + 0x118);
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (lVar1 != 0) {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x18);
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
    if (iVar2 != 7) {
        if ((iVar2 - 1U < 3) || (iVar2 == 10)) {
            *(undefined4 *)(param_1 + 0x120) = 2;
        }
        else if (((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x70) + 0x1c) != 0)) || (iVar2 == 8))
        {
            *(undefined4 *)(param_1 + 0x120) = 1;
            return;
        }
        return;
    }
    *(undefined4 *)(param_1 + 0x120) = 3;
    iVar2 = FUN_140564fb0(7,*(undefined4 *)(param_1 + 0x20));
    if (0 < iVar2) {
        if (4 < iVar2) {
            iVar2 = 4;
        }
        *(int *)(param_1 + 0x124) = iVar2;
        return;
    }
    *(undefined4 *)(param_1 + 0x124) = 1;
    return;
}



undefined8 FUN_14054a430(longlong param_1)

{
    uint uVar1;

    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x44);
    if ((((uVar1 >> 0x18 & 1) == 0) && ((uVar1 >> 0x15 & 1) == 0)) &&
        (((uVar1 >> 0x16 & 1) != 0 || (*(int *)(param_1 + 0x120) == 2)))) {
        return 1;
    }
    return 0;
}