//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404c5df0(longlong param_1,undefined4 *param_2,int param_3)

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
    undefined auStack376 [32];
    undefined local_158 [16];
    undefined4 local_148;
    undefined4 uStack324;
    undefined8 uStack320;
    undefined8 local_138;
    undefined8 uStack304;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined local_118 [16];
    undefined4 local_108 [16];
    undefined *local_c8;
    undefined4 *puStack192;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    longlong local_68 [2];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    local_138 = param_1 + 0x200;
    local_148 = 0x3f800000;
    uStack320 = 0;
    uStack304 = local_158;
    local_138._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    uStack304._4_4_ = (undefined4)((ulonglong)uStack304 >> 0x20);
    local_158 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x210));
    local_c8 = (undefined *)CONCAT44(uStack324,0x3f800000);
    puStack192 = (undefined4 *)0x0;
    local_b8 = (undefined4)local_138;
    uStack180 = local_138._4_4_;
    uStack176 = (undefined4)uStack304;
    uStack172 = uStack304._4_4_;
    FUN_1401b0590(&local_c8,&local_148);
    uVar3 = uRam0000000140c7841c;
    uVar2 = uRam0000000140c78418;
    uVar1 = uRam0000000140c78414;
    *param_2 = _DAT_140c78410;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar3 = uRam0000000140c7842c;
    uVar2 = uRam0000000140c78428;
    uVar1 = uRam0000000140c78424;
    param_2[4] = _DAT_140c78420;
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    uVar3 = uRam0000000140c7843c;
    uVar2 = uRam0000000140c78438;
    uVar1 = uRam0000000140c78434;
    param_2[8] = _DAT_140c78430;
    param_2[9] = uVar1;
    param_2[10] = uVar2;
    param_2[0xb] = uVar3;
    *(undefined (*) [16])(param_2 + 0xc) = CONCAT412(0x3f800000,SUB1612(local_118,0));
    if (param_3 == 0) {
        local_68[0] = param_1 + 0x220;
        FUN_1401afc20(local_68,local_58);
        local_c8 = local_58;
        local_158 = CONCAT88(param_2,local_c8);
        puStack192 = param_2;
        FUN_1401afb10(&local_c8,local_108);
        puVar9 = local_108;
    }
    else {
        local_118 = CONCAT412(0x3f800000,SUB1612(local_118,0));
        puVar9 = &local_148;
        local_148 = *param_2;
        uStack324 = param_2[1];
        uStack320 = *(undefined8 *)(param_2 + 2);
        local_138 = *(longlong *)(param_2 + 4);
        uStack304 = *(undefined **)(param_2 + 6);
        local_128 = param_2[8];
        uStack292 = param_2[9];
        uStack288 = param_2[10];
        uStack284 = param_2[0xb];
    }
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    uVar5 = puVar9[4];
    uVar6 = puVar9[5];
    uVar7 = puVar9[6];
    uVar8 = puVar9[7];
    *param_2 = *puVar9;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar1 = puVar9[8];
    uVar2 = puVar9[9];
    uVar3 = puVar9[10];
    uVar4 = puVar9[0xb];
    param_2[4] = uVar5;
    param_2[5] = uVar6;
    param_2[6] = uVar7;
    param_2[7] = uVar8;
    uVar5 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    uVar7 = puVar9[0xe];
    uVar8 = puVar9[0xf];
    param_2[8] = uVar1;
    param_2[9] = uVar2;
    param_2[10] = uVar3;
    param_2[0xb] = uVar4;
    param_2[0xc] = uVar5;
    param_2[0xd] = uVar6;
    param_2[0xe] = uVar7;
    param_2[0xf] = uVar8;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack376);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c5f90(longlong param_1,undefined4 *param_2,int param_3)

{
    undefined auStack376 [32];
    undefined local_158 [16];
    undefined4 local_148;
    undefined4 uStack324;
    undefined8 uStack320;
    undefined8 local_138;
    undefined8 uStack304;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
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
    undefined *local_c8;
    undefined4 *puStack192;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    longlong local_68 [2];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    local_138 = param_1 + 0x200;
    uStack320 = 0;
    uStack304 = local_158;
    local_148 = 0x3f800000;
    local_158 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x210));
    local_138._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    uStack304._4_4_ = (undefined4)((ulonglong)uStack304 >> 0x20);
    local_c8 = (undefined *)CONCAT44(uStack324,0x3f800000);
    puStack192 = (undefined4 *)0x0;
    local_b8 = (undefined4)local_138;
    uStack180 = local_138._4_4_;
    uStack176 = (undefined4)uStack304;
    uStack172 = uStack304._4_4_;
    FUN_1401b0590(&local_c8,&local_148);
    if (param_3 == 0) {
        local_68[0] = param_1 + 0x220;
        FUN_1401afc20(local_68,local_58);
        local_c8 = local_58;
        puStack192 = &local_148;
        local_158 = CONCAT88(puStack192,local_c8);
        FUN_1401afb10(&local_c8,&local_108);
    }
    else {
        local_108 = local_148;
        uStack260 = uStack324;
        uStack256 = (undefined4)uStack320;
        uStack252 = uStack320._4_4_;
        local_f8 = (undefined4)local_138;
        uStack244 = local_138._4_4_;
        uStack240 = (undefined4)uStack304;
        uStack236 = uStack304._4_4_;
        local_e8 = local_128;
        uStack228 = uStack292;
        uStack224 = uStack288;
        uStack220 = uStack284;
        local_d8 = local_118;
        uStack212 = uStack276;
        uStack208 = uStack272;
        uStack204 = uStack268;
    }
    *param_2 = local_108;
    param_2[1] = uStack260;
    param_2[2] = uStack256;
    param_2[3] = uStack252;
    param_2[4] = local_f8;
    param_2[5] = uStack244;
    param_2[6] = uStack240;
    param_2[7] = uStack236;
    param_2[8] = local_e8;
    param_2[9] = uStack228;
    param_2[10] = uStack224;
    param_2[0xb] = uStack220;
    param_2[0xc] = local_d8;
    param_2[0xd] = uStack212;
    param_2[0xe] = uStack208;
    param_2[0xf] = uStack204;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack376);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c60f0(longlong param_1,undefined4 *param_2,int param_3)

{
    undefined auStack376 [32];
    undefined local_158 [16];
    undefined4 local_148;
    undefined4 uStack324;
    undefined8 uStack320;
    undefined8 local_138;
    undefined8 uStack304;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
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
    undefined *local_c8;
    undefined4 *puStack192;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    longlong local_68 [2];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    local_138 = param_1 + 0x200;
    uStack320 = 0;
    local_148 = *(undefined4 *)(param_1 + 0x21c);
    uStack304 = local_158;
    local_158 = ZEXT1216(*(undefined (*) [12])(param_1 + 0x210));
    local_138._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
    uStack304._4_4_ = (undefined4)((ulonglong)uStack304 >> 0x20);
    local_c8 = (undefined *)CONCAT44(uStack324,local_148);
    puStack192 = (undefined4 *)0x0;
    local_b8 = (undefined4)local_138;
    uStack180 = local_138._4_4_;
    uStack176 = (undefined4)uStack304;
    uStack172 = uStack304._4_4_;
    FUN_1401b0590(&local_c8,&local_148);
    if (param_3 == 0) {
        local_68[0] = param_1 + 0x220;
        FUN_1401afc20(local_68,local_58);
        local_c8 = local_58;
        puStack192 = &local_148;
        local_158 = CONCAT88(puStack192,local_c8);
        FUN_1401afb10(&local_c8,&local_108);
    }
    else {
        local_108 = local_148;
        uStack260 = uStack324;
        uStack256 = (undefined4)uStack320;
        uStack252 = uStack320._4_4_;
        local_f8 = (undefined4)local_138;
        uStack244 = local_138._4_4_;
        uStack240 = (undefined4)uStack304;
        uStack236 = uStack304._4_4_;
        local_e8 = local_128;
        uStack228 = uStack292;
        uStack224 = uStack288;
        uStack220 = uStack284;
        local_d8 = local_118;
        uStack212 = uStack276;
        uStack208 = uStack272;
        uStack204 = uStack268;
    }
    *param_2 = local_108;
    param_2[1] = uStack260;
    param_2[2] = uStack256;
    param_2[3] = uStack252;
    param_2[4] = local_f8;
    param_2[5] = uStack244;
    param_2[6] = uStack240;
    param_2[7] = uStack236;
    param_2[8] = local_e8;
    param_2[9] = uStack228;
    param_2[10] = uStack224;
    param_2[0xb] = uStack220;
    param_2[0xc] = local_d8;
    param_2[0xd] = uStack212;
    param_2[0xe] = uStack208;
    param_2[0xf] = uStack204;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack376);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c6490(longlong param_1,undefined8 param_2,int param_3)

{
    undefined auStack648 [32];
    undefined local_268 [16];
    undefined4 local_258;
    undefined4 uStack596;
    undefined8 uStack592;
    undefined8 local_248;
    undefined8 uStack576;
    undefined local_218 [64];
    undefined local_1d8 [64];
    undefined local_198 [64];
    undefined local_158 [64];
    undefined4 *local_118;
    undefined *puStack272;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined *local_b8;
    undefined4 *local_b0;
    undefined4 local_a8 [16];
    longlong local_68 [2];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    local_248 = param_1 + 0x90;
    uStack592 = 0;
    local_258 = *(undefined4 *)(param_1 + 0xac);
    uStack576 = local_268;
    local_268 = ZEXT1216(*(undefined (*) [12])(param_1 + 0xa0));
    local_248._4_4_ = (undefined4)((ulonglong)local_248 >> 0x20);
    uStack576._4_4_ = (undefined4)((ulonglong)uStack576 >> 0x20);
    local_118 = (undefined4 *)CONCAT44(uStack596,local_258);
    puStack272 = (undefined *)0x0;
    local_108 = (undefined4)local_248;
    uStack260 = local_248._4_4_;
    uStack256 = (undefined4)uStack576;
    uStack252 = uStack576._4_4_;
    FUN_1401b0590(&local_118,&local_258);
    if (param_3 == 0) {
        local_118 = (undefined4 *)FUN_1404c27a0(param_1,local_158);
        FUN_1401afc20(&local_118,local_1d8);
        local_68[0] = param_1 + 0xb0;
        FUN_1401afc20(local_68,local_58);
        local_b8 = local_58;
        local_b0 = &local_258;
        local_268 = CONCAT88(local_b0,local_b8);
        FUN_1401afb10(&local_b8,local_a8);
        local_118 = local_a8;
        puStack272 = local_1d8;
    }
    else {
        local_118 = (undefined4 *)FUN_1404c27a0(param_1,local_198);
        FUN_1401afc20(&local_118,local_218);
        local_118 = &local_258;
        puStack272 = local_218;
    }
    local_268 = CONCAT88(puStack272,local_118);
    FUN_1401afb10(&local_118,param_2);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack648);
    return;
}



void FUN_1404c6650(undefined8 *param_1,undefined4 param_2)

{
    undefined4 local_28 [2];
    undefined8 *local_20;
    code *local_18;
    undefined8 local_10;

    if (param_1[0x58] == 0) {
        (**(code **)*param_1)();
        local_28[0] = 0;
        local_18 = FUN_1404c66d0;
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x56,100,local_28);
        *(undefined4 *)(param_1 + 0x5f) = 0;
        *(undefined4 *)((longlong)param_1 + 0x2fc) = param_2;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404c66d0(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    char *pcVar4;
    undefined *puVar5;
    uint uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined local_38 [16];
    undefined local_28 [16];

    if (param_1[0x24] == 0) {
        return;
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 == 0) {
        return;
    }
    fVar10 = 0.0;
    if (*(int *)(param_1 + 0x5f) == 0) {
        *(float *)(param_1 + 0x55) = *(float *)(param_1 + 0x55) + 0.15;
        uVar6 = FUN_1408fe3d0();
        fVar10 = 0.2 - (float)(uVar6 & 0x7fffffff) * 0.2;
        FUN_1404c6650(param_1,*(undefined4 *)((longlong)param_1 + 0x2fc));
    }
    lVar1 = *param_1;
    uVar3 = (**(code **)(*(longlong *)param_1[0x24] + 0x38))();
    iVar2 = (**(code **)(lVar1 + 0x128))(param_1,uVar3);
    if ((uint)(iVar2 == 0) != *(uint *)(param_1 + 0x51)) {
        *(uint *)(param_1 + 0x51) = (uint)(iVar2 == 0);
        iVar2 = *(int *)(param_1 + 0x10);
        if (((iVar2 - 5U & 0xfffffffa) == 0) && (iVar2 != 10)) {
            puVar5 = &DAT_1409ebd74;
            pcVar4 = "HousingFreePlaceDecorPlaced";
        }
        else {
            if (iVar2 != 7) goto LAB_1404c67d5;
            puVar5 = &DAT_1409ebe4c;
            pcVar4 = "HousingHookDecorPlaced";
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar4,puVar5,
                      *(undefined4 *)(param_1 + 0x3e));
    }
    LAB_1404c67d5:
    fVar9 = fVar10 * 0.1;
    fVar7 = fVar9;
    fVar8 = fVar10;
    if (*(int *)((longlong)param_1 + 0x2fc) != 0) {
        fVar7 = fVar10 + 0.3;
        fVar8 = fVar9;
    }
    local_28 = CONCAT412(0x3f800000,CONCAT48(fVar7,CONCAT44(fVar8,fVar8)));
    local_38._0_12_ = CONCAT48(fVar7,CONCAT44(fVar8,fVar8));
    local_38 = CONCAT412(0x3f800000,local_38._0_12_);
    if (*(int *)(param_1 + 0x5f) == 0) {
        if ((*(int *)((longlong)param_1 + 0x284) == 0) || (*(int *)(param_1 + 0x51) == 0)) {
            fVar10 = fVar10 + 0.3;
            if (1.0 <= fVar10) {
                fVar10 = 1.0;
            }
            local_38 = CONCAT412(0x3f800000,CONCAT48(fVar9,CONCAT44(fVar9,fVar10)));
            fVar8 = fVar9;
        }
    }
    else {
        local_38._0_12_ = ZEXT412(0);
        local_38 = CONCAT412(0x3f800000,local_38._0_12_);
        fVar8 = 0.0;
    }
    (**(code **)(*(longlong *)param_1[0x24] + 0xd8))
            (fVar8,0x3f800000,(longlong *)param_1[0x24],local_38);
    return;
}



undefined8 FUN_1404c68b0(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
        lVar1 = FUN_1404c7710(*(undefined8 *)(param_1 + 0x128));
        if (lVar1 != 0) {
            *param_2 = lVar1;
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1404c68f0(longlong *param_1,longlong **param_2)

{
    int iVar1;
    longlong *local_res10 [3];

    if (param_2 != (longlong **)0x0) {
        (**(code **)(*param_1 + 0xc0))(param_1,local_res10);
        if (local_res10[0] != (longlong *)0x0) {
            iVar1 = (**(code **)(*local_res10[0] + 0xb8))();
            if (iVar1 != 0) {
                (**(code **)(*local_res10[0] + 200))(local_res10[0],local_res10);
                return 0;
            }
        }
        *param_2 = local_res10[0];
    }
    return 0;
}



void FUN_1404c69f0(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong *plVar3;
    undefined local_48 [64];

    plVar3 = DAT_140c7dfc0;
    if (DAT_140c7dfc0 != DAT_140c7dfc8) {
        while (lVar1 = *plVar3, *(int *)(lVar1 + 0xbc) != *(int *)(param_1[0x25] + 0x14)) {
            plVar3 = plVar3 + 1;
            if (plVar3 == DAT_140c7dfc8) {
                return;
            }
        }
        if (lVar1 != 0) {
            (**(code **)(*param_1 + 0x90))(param_1,local_48,1);
            uVar2 = FUN_1405b0840(lVar1,local_48);
            *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
        }
    }
    return;
}



void FUN_1404c6a80(longlong param_1)

{
    longlong *plVar1;

    if (*(longlong *)(param_1 + 0x278) != 0) {
        if (*DAT_140c659f0 == 0) {
            FUN_1404c24b0();
        }
        if (*(longlong **)(param_1 + 0x120) == (longlong *)0x0) {
            FUN_1404c19c0(param_1);
            return;
        }
        plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x120) + 0x150))();
        (**(code **)*plVar1)(plVar1);
        (**(code **)(*plVar1 + 0x3a8))(plVar1);
        FUN_1404c2960(param_1);
        FUN_1404c19c0(param_1);
        (**(code **)(*plVar1 + 8))(plVar1);
    }
    return;
}



void FUN_1404c6b10(longlong param_1)

{
    undefined *puVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    int local_28 [2];
    longlong local_20;
    undefined local_18 [16];

    if (*(int *)(param_1 + 0x2a0) == 0) {
        puVar1 = &DAT_1409f08e4;
    }
    else {
        puVar1 = (undefined *)FUN_1404ca4f0();
        if (puVar1 == (undefined *)0x0) {
            return;
        }
    }
    plVar4 = *(longlong **)(param_1 + 0x260);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x268);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x278);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x270);
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898);
        if (lVar2 != 0) {
            plVar4 = *(longlong **)(lVar2 + 0x16e8);
            if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
            }
            plVar4 = *(longlong **)(lVar2 + 0xcc0);
            if (plVar4 != (longlong *)0x0) {
                plVar3 = (longlong *)(**(code **)(*plVar4 + 0x108))(plVar4,0);
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x328))(plVar3,puVar1,0);
                }
                plVar4 = (longlong *)(**(code **)(*plVar4 + 0x70))(plVar4,0x19);
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 0x328))(plVar4,puVar1,0);
                }
            }
        }
        local_28[0] = *(int *)(param_1 + 0x68);
        if (local_28[0] != 0) {
            local_20 = param_1;
            FUN_140055f80(DAT_140c659f8 + 0x100,local_18,local_28);
        }
    }
    return;
}



undefined8 *
FUN_1404c6c90(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
              undefined4 param_5)

{
    undefined8 uVar1;
    undefined *puVar2;

    uVar1 = *param_3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = uVar1;
    uVar1 = param_3[1];
    *(undefined4 *)(param_1 + 2) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
    *(undefined4 *)(param_1 + 5) = 4;
    param_1[4] = uVar1;
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    param_1[8] = 0;
    param_1[7] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xc] = 0;
    param_1[0xb] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xb] + 8) = 0;
    *(undefined8 *)(param_1[0xb] + 0x10) = param_1[0xb];
    *(undefined8 *)(param_1[0xb] + 0x18) = param_1[0xb];
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x10] = 0;
    param_1[0xf] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0xf] + 8) = 0;
    *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
    *(undefined8 *)(param_1[0xf] + 0x18) = param_1[0xf];
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = param_5;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    FUN_140019600(param_1 + 0x14);
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    return param_1;
}



void FUN_1404c6dc0(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong lVar5;
    longlong **pplVar6;
    longlong lVar7;
    longlong **pplVar8;
    undefined local_48 [8];
    longlong **local_40;
    longlong **local_38;
    longlong **local_30;

    if (*(int *)(param_1 + 5) < 2) {
        FUN_1404c7f20(param_1,2);
        FUN_1404c7f20(param_1,3);
    }
    pplVar8 = (longlong **)0x0;
    lVar7 = *(longlong *)(param_1[0xb] + 0x10);
    local_40 = (longlong **)0x0;
    local_38 = (longlong **)0x0;
    local_30 = (longlong **)0x0;
    pplVar6 = pplVar8;
    if (lVar7 != param_1[0xb]) {
        do {
            if (local_38 == pplVar6) {
                FUN_1400b9430(local_48,local_38);
                pplVar6 = local_30;
            }
            else {
                if (local_38 != (longlong **)0x0) {
                    *local_38 = *(longlong **)(lVar7 + 0x28);
                }
                local_38 = local_38 + 1;
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
        } while (lVar7 != param_1[0xb]);
    }
    pplVar4 = local_38;
    pplVar3 = local_40;
    FUN_140008410(param_1 + 6);
    FUN_140008410(param_1 + 10);
    FUN_140008410(param_1 + 0xe);
    for (pplVar6 = pplVar3; pplVar6 != pplVar4; pplVar6 = pplVar6 + 1) {
        plVar1 = *pplVar6;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1,1);
        }
    }
    if (pplVar3 != (longlong **)0x0) {
        FUN_14018b900(pplVar3,0);
    }
    if (param_1[0x1b] != 0) {
        lVar7 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar7 != 0) {
            FUN_1400083b0(param_1 + 0x19,*(undefined8 *)(lVar7 + 0x18));
            lVar5 = *(longlong *)(lVar7 + 0x10);
            FUN_14018b900(lVar7,0);
            lVar7 = lVar5;
        }
        *(longlong *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(longlong *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    FUN_14018b900(param_1[0x1a],0);
    if (param_1[0x15] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x16] + (longlong)pplVar8 * 8);
            lVar7 = *(longlong *)(param_1[0x16] + (longlong)pplVar8 * 8);
            while (lVar7 != 0) {
                lVar7 = *plVar1;
                *plVar1 = *(longlong *)(lVar7 + 8);
                FUN_14018b900(lVar7,0);
                lVar7 = *plVar1;
            }
            pplVar8 = (longlong **)((longlong)pplVar8 + 1);
        } while (pplVar8 < (longlong **)param_1[0x15]);
    }
    param_1[0x14] = 0;
    FUN_14018b900(param_1[0x16],0);
    param_1[0x16] = 0;
    if (param_1[0x12] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x10] != 0) {
        lVar7 = *(longlong *)(param_1[0xf] + 8);
        while (lVar7 != 0) {
            FUN_1400083b0(param_1 + 0xe,*(undefined8 *)(lVar7 + 0x18));
            lVar5 = *(longlong *)(lVar7 + 0x10);
            FUN_14018b900(lVar7,0);
            lVar7 = lVar5;
        }
        *(longlong *)(param_1[0xf] + 0x10) = param_1[0xf];
        *(undefined8 *)(param_1[0xf] + 8) = 0;
        *(longlong *)(param_1[0xf] + 0x18) = param_1[0xf];
        param_1[0x10] = 0;
    }
    FUN_14018b900(param_1[0xf],0);
    if (param_1[0xc] != 0) {
        lVar7 = *(longlong *)(param_1[0xb] + 8);
        while (lVar7 != 0) {
            FUN_1400083b0(param_1 + 10,*(undefined8 *)(lVar7 + 0x18));
            lVar5 = *(longlong *)(lVar7 + 0x10);
            FUN_14018b900(lVar7,0);
            lVar7 = lVar5;
        }
        *(longlong *)(param_1[0xb] + 0x10) = param_1[0xb];
        *(undefined8 *)(param_1[0xb] + 8) = 0;
        *(longlong *)(param_1[0xb] + 0x18) = param_1[0xb];
        param_1[0xc] = 0;
    }
    FUN_14018b900(param_1[0xb],0);
    if (param_1[8] != 0) {
        lVar7 = *(longlong *)(param_1[7] + 8);
        while (lVar7 != 0) {
            FUN_1400083b0(param_1 + 6,*(undefined8 *)(lVar7 + 0x18));
            lVar5 = *(longlong *)(lVar7 + 0x10);
            FUN_14018b900(lVar7,0);
            lVar7 = lVar5;
        }
        *(longlong *)(param_1[7] + 0x10) = param_1[7];
        *(undefined8 *)(param_1[7] + 8) = 0;
        *(longlong *)(param_1[7] + 0x18) = param_1[7];
        param_1[8] = 0;
    }
    FUN_14018b900(param_1[7],0);
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



undefined8 FUN_1404c7160(longlong param_1,longlong param_2,undefined4 *param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res10;

    if ((*(int *)(param_2 + 0x30) - 5U & 0xfffffffa) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x38);
        uVar1 = *(ulonglong *)(param_2 + 8);
        local_res10 = lVar3;
        lVar2 = *(longlong *)(lVar3 + 8);
        while (lVar2 != 0) {
            if (*(ulonglong *)(lVar2 + 0x20) < uVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (uVar1 < *(ulonglong *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        if ((((local_res10 != lVar3) && (lVar3 = *(longlong *)(local_res10 + 0x28), lVar3 != 0)) &&
             (*(ulonglong *)(lVar3 + 0x58) == uVar1)) &&
            (((*(int *)(lVar3 + 0x70) == *(int *)(param_2 + 0x20) &&
               (*(int *)(lVar3 + 0x6c) == *(int *)(param_2 + 0x1c))) &&
              ((*(int *)(lVar3 + 0x74) == *(int *)(param_2 + 0x24) &&
                ((*(int *)(lVar3 + 0x78) == *(int *)(param_2 + 0x28) &&
                  (*(int *)(lVar3 + 0x80) == *(int *)(param_2 + 0x30))))))))) {
            FUN_1404c78e0(param_1);
        }
    }
    lVar3 = FUN_1404c7ac0(param_1,param_2);
    if (lVar3 != 0) {
        if (((((*(int *)(lVar3 + 0x130) == 0) &&
               (*(longlong *)(lVar3 + 0x58) == *(longlong *)(param_2 + 8))) &&
              (*(int *)(lVar3 + 0x70) == *(int *)(param_2 + 0x20))) &&
             ((*(int *)(lVar3 + 0x6c) == *(int *)(param_2 + 0x1c) &&
               (*(int *)(lVar3 + 0x74) == *(int *)(param_2 + 0x24))))) &&
            ((*(int *)(lVar3 + 0x78) == *(int *)(param_2 + 0x28) &&
              (*(int *)(lVar3 + 0x80) == *(int *)(param_2 + 0x30))))) {
            *param_3 = *(undefined4 *)(lVar3 + 0x1f0);
            return 0;
        }
        FUN_1404c78e0(param_1);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 * FUN_1404c72b0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    longlong **pplVar5;
    ulonglong uVar6;
    longlong lVar7;
    int *piVar8;
    undefined4 uVar9;
    longlong *plVar10;
    ulonglong local_38;
    ulonglong local_30;
    uint local_28 [2];
    undefined8 local_20;

    plVar10 = (longlong *)0x0;
    local_38 = local_38 & 0xffffffff00000000;
    iVar4 = FUN_1404c7160(param_1,param_3,&local_38);
    if (iVar4 == 0) {
        goto LAB_1404c76b0;
    }
    switch(*(undefined4 *)(param_3 + 0x30)) {
        case 1:
        case 2:
        case 7:
            lVar7 = FUN_14018b280(0x350,0);
            if (lVar7 != 0) {
                plVar10 = (longlong *)FUN_1404c0060(lVar7,param_1,param_3,param_4);
            }
            break;
        case 3:
            plVar10 = (longlong *)FUN_14018b280(0x360,0);
            if (plVar10 == (longlong *)0x0) {
                LAB_1404c74d8:
                plVar10 = (longlong *)0x0;
            }
            else {
                FUN_1404c0060(plVar10,param_1,param_3,param_4);
                plVar10[0x6a] = 0;
                plVar10[0x6b] = 0;
                *plVar10 = (longlong)&PTR_LAB_140b6d010;
            }
            break;
        case 4:
            plVar10 = (longlong *)FUN_14018b280(0x3a0,0);
            if (plVar10 == (longlong *)0x0) goto LAB_1404c74d8;
            FUN_1404c0060(plVar10,param_1,param_3,param_4);
            *plVar10 = (longlong)&PTR_LAB_140b74530;
            plVar10[0x6a] = 0;
            plVar10[0x6b] = 0;
            lVar7 = FUN_140207d60();
            if ((lVar7 != 0) &&
                (((uVar1 = *(uint *)(lVar7 + 0x18), (uVar1 & 0x340) == 0 ||
                                                    (uVar1 == *(uint *)((longlong)plVar10 + 0x74))) && ((uVar1 & 0x342) != 0)))) {
                FUN_140724500();
            }
            break;
        case 5:
            plVar10 = (longlong *)FUN_14018b280(0x350,0);
            if (plVar10 == (longlong *)0x0) goto LAB_1404c74d8;
            FUN_1404c0060(plVar10,param_1,param_3,param_4);
            *plVar10 = (longlong)&PTR_LAB_140b68da0;
            break;
        case 6:
            plVar10 = (longlong *)FUN_14018b280(0x350,0);
            if (plVar10 == (longlong *)0x0) goto LAB_1404c74d8;
            FUN_1404c0060(plVar10,param_1,param_3,param_4);
            *plVar10 = (longlong)&PTR_LAB_140b68b20;
            break;
        case 9:
            plVar10 = (longlong *)FUN_14018b280(0x350,0);
            if (plVar10 == (longlong *)0x0) goto LAB_1404c74d8;
            FUN_1404c0060(plVar10,param_1,param_3,param_4);
            *plVar10 = (longlong)&PTR_LAB_140b68c60;
            break;
        case 10:
            plVar10 = (longlong *)FUN_14018b280(0x350,0);
            if (plVar10 == (longlong *)0x0) goto LAB_1404c74d8;
            FUN_1404c0060(plVar10,param_1,param_3,param_4);
            *plVar10 = (longlong)&PTR_LAB_140b6e290;
    }
    uVar2 = plVar10[0xb];
    if (uVar2 != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x38);
        local_38 = uVar3;
        uVar6 = *(ulonglong *)(uVar3 + 8);
        while (uVar6 != 0) {
            if (*(ulonglong *)(uVar6 + 0x20) < uVar2) {
                uVar6 = *(ulonglong *)(uVar6 + 0x18);
            }
            else {
                local_38 = uVar6;
                uVar6 = *(ulonglong *)(uVar6 + 0x10);
            }
        }
        if ((local_38 == uVar3) || (uVar2 < *(ulonglong *)(local_38 + 0x20))) {
            local_38 = uVar3;
        }
        if (local_38 == uVar3) {
            pplVar5 = (longlong **)FUN_1404cb3d0(param_1 + 0x30,plVar10 + 0xb);
            *pplVar5 = plVar10;
        }
    }
    uVar1 = *(uint *)(plVar10 + 0x3e);
    if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(param_1 + 0x58);
        local_38 = uVar2;
        uVar3 = *(ulonglong *)(uVar2 + 8);
        while (uVar3 != 0) {
            if (*(uint *)(uVar3 + 0x20) < uVar1) {
                uVar3 = *(ulonglong *)(uVar3 + 0x18);
            }
            else {
                local_38 = uVar3;
                uVar3 = *(ulonglong *)(uVar3 + 0x10);
            }
        }
        if ((local_38 == uVar2) || (uVar1 < *(uint *)(local_38 + 0x20))) {
            local_38 = uVar2;
        }
        uVar6 = uVar2;
        uVar3 = *(ulonglong *)(uVar2 + 8);
        if (local_38 == uVar2) {
            while (uVar3 != 0) {
                if (*(uint *)(uVar3 + 0x20) < uVar1) {
                    uVar3 = *(ulonglong *)(uVar3 + 0x18);
                }
                else {
                    uVar6 = uVar3;
                    uVar3 = *(ulonglong *)(uVar3 + 0x10);
                }
            }
            if ((uVar6 == uVar2) || (uVar1 < *(uint *)(uVar6 + 0x20))) {
                local_20 = 0;
                local_38 = uVar6;
                local_28[0] = uVar1;
                FUN_140055c60(param_1 + 0x50,&local_30,&local_38,local_28);
                uVar6 = local_30;
            }
            *(longlong **)(uVar6 + 0x28) = plVar10;
        }
    }
    uVar1 = *(uint *)(plVar10 + 0xd);
    if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(param_1 + 0x78);
        local_30 = uVar2;
        uVar3 = *(ulonglong *)(uVar2 + 8);
        while (uVar3 != 0) {
            if (*(uint *)(uVar3 + 0x20) < uVar1) {
                uVar3 = *(ulonglong *)(uVar3 + 0x18);
            }
            else {
                local_30 = uVar3;
                uVar3 = *(ulonglong *)(uVar3 + 0x10);
            }
        }
        if ((local_30 == uVar2) || (uVar1 < *(uint *)(local_30 + 0x20))) {
            local_30 = uVar2;
        }
        if (local_30 == uVar2) {
            pplVar5 = (longlong **)FUN_140055be0(param_1 + 0x70,plVar10 + 0xd);
            *pplVar5 = plVar10;
        }
    }
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 == 0) {
        LAB_1404c7666:
        uVar9 = 0;
        LAB_1404c7668:
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar9,*(undefined4 *)(param_1 + 0x14));
    }
    else {
        if (iVar4 == 1) {
            (**(code **)(*plVar10 + 0x18))(plVar10,0,*(undefined4 *)(param_1 + 0x14));
            uVar9 = *(undefined4 *)(param_1 + 0x28);
            goto LAB_1404c7668;
        }
        if (iVar4 == 2) goto LAB_1404c7666;
    }
    if ((((*(int *)(plVar10 + 0x10) - 5U & 0xfffffffa) == 0) &&
         (lVar7 = FUN_140203da0(*(undefined4 *)(plVar10 + 0xc)), lVar7 != 0)) &&
        (*(int *)(lVar7 + 0x2c) != 0)) {
        piVar8 = (int *)FUN_140032640(param_1 + 200,lVar7 + 0x2c);
        *piVar8 = *piVar8 + 1;
    }
    local_38._0_4_ = *(undefined4 *)(plVar10 + 0x3e);
    LAB_1404c76b0:
    *param_2 = (undefined4)local_38;
    return param_2;
}



undefined8 FUN_1404c7710(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x38);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(ulonglong *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(ulonglong *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(undefined8 *)(local_res8 + 0x28);
    }
    return 0;
}



undefined8 FUN_1404c7770(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x58);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 != lVar2) &&
        (plVar4 = *(longlong **)(local_res8 + 0x28), plVar4 != (longlong *)0x0)) {
        if (*(int *)(plVar4 + 0x26) != 0) {
            if (*(int *)((longlong)plVar4 + 0x134) != 0) {
                uVar1 = *(undefined4 *)(param_1 + 0x14);
                (**(code **)(*plVar4 + 0xf8))(plVar4,uVar1);
                (**(code **)(*plVar4 + 0x100))(plVar4,uVar1);
                FUN_1404c0da0(plVar4);
                (**(code **)(*plVar4 + 0xe8))(plVar4,uVar1);
                (**(code **)(*plVar4 + 0xf0))(plVar4,uVar1);
                return 0;
            }
            FUN_1404c78e0(param_1,plVar4);
        }
        return 0;
    }
    return 0x80004005;
}



undefined4 FUN_1404c7860(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x38);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(ulonglong *)(lVar2 + 0x20) < *(ulonglong *)(param_2 + 8)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        iVar3 = FUN_1404c78e0();
        uVar4 = 0x80004005;
        if (iVar3 != 0) {
            uVar4 = 0;
        }
        return uVar4;
    }
    return 0x80004005;
}



undefined8 FUN_1404c78e0(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res10 [3];

    if (param_2 == (longlong *)0x0) {
        return 0;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
        if (iVar1 == 1) {
            (**(code **)(*param_2 + 0x18))(param_2,2,*(undefined4 *)(param_1 + 0x14));
        }
        else if (iVar1 != 2) goto LAB_1404c7937;
    }
    (**(code **)(*param_2 + 0x18))(param_2,3,*(undefined4 *)(param_1 + 0x14));
    LAB_1404c7937:
    if ((((*(int *)(param_2 + 0x10) - 5U & 0xfffffffa) == 0) &&
         (lVar2 = FUN_140203da0(*(undefined4 *)(param_2 + 0xc)), lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x2c) != 0)) {
        piVar3 = (int *)FUN_140032640(param_1 + 200,lVar2 + 0x2c);
        *piVar3 = *piVar3 + -1;
    }
    lVar2 = *(longlong *)(param_1 + 0x58);
    local_res10[0] = lVar2;
    lVar4 = *(longlong *)(lVar2 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < *(uint *)(param_2 + 0x3e)) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res10[0] = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res10[0] == lVar2) || (*(uint *)(param_2 + 0x3e) < *(uint *)(local_res10[0] + 0x20))) {
        local_res10[0] = lVar2;
    }
    if (local_res10[0] != lVar2) {
        FUN_1404cb6c0(param_1 + 0x50,local_res10);
    }
    lVar2 = *(longlong *)(param_1 + 0x38);
    local_res10[0] = lVar2;
    if (*(longlong *)(lVar2 + 8) != 0) {
        lVar4 = *(longlong *)(lVar2 + 8);
        do {
            if (*(ulonglong *)(lVar4 + 0x20) < (ulonglong)param_2[0xb]) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res10[0] = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res10[0] == lVar2) || ((ulonglong)param_2[0xb] < *(ulonglong *)(local_res10[0] + 0x20))
            ) {
        local_res10[0] = lVar2;
    }
    if (local_res10[0] != lVar2) {
        FUN_1404cb5c0(param_1 + 0x30,local_res10);
    }
    lVar2 = *(longlong *)(param_1 + 0x78);
    local_res10[0] = lVar2;
    if (*(longlong *)(lVar2 + 8) != 0) {
        lVar4 = *(longlong *)(lVar2 + 8);
        do {
            if (*(uint *)(lVar4 + 0x20) < *(uint *)(param_2 + 0xd)) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res10[0] = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res10[0] == lVar2) || (*(uint *)(param_2 + 0xd) < *(uint *)(local_res10[0] + 0x20))) {
        local_res10[0] = lVar2;
    }
    if (local_res10[0] != lVar2) {
        FUN_1404cb8b0(param_1 + 0x70,local_res10);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
    return 1;
}



longlong FUN_1404c7ac0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x38);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar4 = *(longlong *)(lVar1 + 8);
        do {
            if (*(ulonglong *)(lVar4 + 0x20) < *(ulonglong *)(param_2 + 8)) {
                lVar3 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(longlong *)(local_res8 + 0x28);
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (lVar4 != lVar1) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if ((((*(int *)(param_2 + 0x30) == 4) || (*(longlong *)(lVar3 + 0x58) == 0)) ||
                 (*(longlong *)(lVar3 + 0x58) == *(longlong *)(param_2 + 8))) &&
                (((*(int *)(lVar3 + 0x70) == *(int *)(param_2 + 0x20) &&
                   (*(int *)(lVar3 + 0x74) == *(int *)(param_2 + 0x24))) &&
                  ((*(int *)(lVar3 + 0x78) == *(int *)(param_2 + 0x28) &&
                    (*(int *)(lVar3 + 0x80) == *(int *)(param_2 + 0x30))))))) {
                return lVar3;
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
        } while (lVar4 != lVar1);
    }
    return 0;
}



undefined8 FUN_1404c7bd0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x58);
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
    return 0;
}



void FUN_1404c7c30(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x58)) {
        do {
            if (*(int *)(*(longlong *)(lVar4 + 0x28) + 0x7c) == param_3) {
                plVar1 = *(longlong **)(param_2 + 0x10);
                if (plVar1 == *(longlong **)(param_2 + 0x18)) {
                    FUN_1400b9430(param_2,plVar1,lVar4 + 0x28);
                }
                else {
                    if (plVar1 != (longlong *)0x0) {
                        *plVar1 = *(longlong *)(lVar4 + 0x28);
                    }
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
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
        } while (lVar4 != *(longlong *)(param_1 + 0x58));
    }
    return;
}



void FUN_1404c7cf0(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x58)) {
        do {
            if (*(int *)(*(longlong *)(lVar4 + 0x28) + 0x80) == param_3) {
                plVar1 = *(longlong **)(param_2 + 0x10);
                if (plVar1 == *(longlong **)(param_2 + 0x18)) {
                    FUN_1400b9430(param_2,plVar1,lVar4 + 0x28);
                }
                else {
                    if (plVar1 != (longlong *)0x0) {
                        *plVar1 = *(longlong *)(lVar4 + 0x28);
                    }
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 8;
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
        } while (lVar4 != *(longlong *)(param_1 + 0x58));
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1404c7dd0(longlong param_1,int param_2,int param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    int *piVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    int local_res10 [2];

    local_res10[0] = param_2;
    if (param_2 != 2) {
        piVar4 = (int *)FUN_140032640(param_1 + 200,local_res10);
        return *piVar4;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    iVar7 = 0;
    if (lVar6 != *(longlong *)(param_1 + 0x58)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if ((*(int *)(lVar5 + 0x80) - 5U & 0xfffffffa) == 0) {
                uVar1 = *(undefined4 *)(lVar5 + 0x60);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c646a8 != 0) || (iVar2 = FUN_140203b40(), iVar2 < 0)) goto LAB_1404c7e8a;
                    lVar3 = (**(code **)(*DAT_140c65008 + 0x18))(DAT_140c65008,uVar1);
                }
                else {
                    lVar3 = (*DAT_140c63840)(&PTR_u_HousingDecorInfo_140a6a718,uVar1,DAT_140c63858);
                }
                if ((lVar3 != 0) && (*(int *)(lVar3 + 0x2c) == 2)) {
                    if (param_3 == 0) {
                        lVar5 = *(longlong *)(lVar5 + 0x30);
                    }
                    else {
                        lVar5 = *(longlong *)(lVar5 + 0x40);
                    }
                    if (lVar5 != 0) {
                        iVar7 = iVar7 + 1;
                    }
                }
            }
            LAB_1404c7e8a:
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
        } while (lVar6 != *(longlong *)(param_1 + 0x58));
    }
    return iVar7;
}



void FUN_1404c7f20(longlong param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x58)) {
        do {
            (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x18))
                    (*(longlong **)(lVar3 + 0x28),param_2,*(undefined4 *)(param_1 + 0x14));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x28) = param_2;
        return;
    }
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return;
}



void FUN_1404c7ff0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong local_res10;

    if ((param_2 != 0) && (param_3 != 0)) {
        plVar1 = (longlong *)(param_1 + 0xa0);
        local_res10 = param_2;
        if (*plVar1 == *(longlong *)(param_1 + 0xa8)) {
            FUN_1400290d0(plVar1);
        }
        uVar4 = (**(code **)(param_1 + 0xb8))(&local_res10);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0xb0) + (uVar4 % *(ulonglong *)(param_1 + 0xa8)) * 8);
        puVar5 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar5 != (ulonglong *)0x0) {
            puVar3 = *ppuVar2;
            *puVar5 = uVar4;
            puVar5[1] = (ulonglong)puVar3;
            puVar5[3] = param_3;
            puVar5[2] = local_res10;
        }
        *ppuVar2 = puVar5;
        *plVar1 = *plVar1 + 1;
    }
    return;
}



ulonglong FUN_1404c80a0(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong in_RAX;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong **ppuVar4;
    longlong local_res10;

    if (param_2 != 0) {
        local_res10 = param_2;
        uVar2 = (**(code **)(param_1 + 0xb8))(&local_res10);
        in_RAX = uVar2 / *(ulonglong *)(param_1 + 0xa8);
        uVar3 = uVar2 % *(ulonglong *)(param_1 + 0xa8);
        ppuVar4 = (ulonglong **)(*(longlong *)(param_1 + 0xb0) + uVar3 * 8);
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar3 * 8) != 0) {
            while ((uVar2 != **ppuVar4 ||
                    (in_RAX = (**(code **)(param_1 + 0xc0))(&local_res10,*ppuVar4 + 2), (int)in_RAX == 0)))
            {
                ppuVar4 = (ulonglong **)(*ppuVar4 + 1);
                if (*ppuVar4 == (ulonglong *)0x0) {
                    return in_RAX;
                }
            }
            puVar1 = *ppuVar4;
            *ppuVar4 = (ulonglong *)puVar1[1];
            in_RAX = FUN_14018b900(puVar1,0);
            *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -1;
        }
    }
    return in_RAX;
}



ulonglong FUN_1404c8160(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong local_res10;

    if (param_2 == 0) {
        return 0;
    }
    local_res10 = param_2;
    uVar3 = (**(code **)(param_1 + 0xb8))(&local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0xb0) + (uVar3 % *(ulonglong *)(param_1 + 0xa8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xc0))(&local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_1404c8200(longlong param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res20;
    longlong local_28;
    uint local_20 [2];
    undefined8 local_18;

    if (param_2 != 0) {
        if (*(int *)(param_3 + 0x68) != 0) {
            local_res20 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
            while (local_res20 != *(longlong *)(param_1 + 0x78)) {
                if (*(longlong *)(local_res20 + 0x28) == param_3) {
                    FUN_1404cb8b0(param_1 + 0x70,&local_res20);
                    break;
                }
                lVar2 = *(longlong *)(local_res20 + 0x18);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(local_res20 + 8);
                    if (local_res20 == *(longlong *)(lVar2 + 0x18)) {
                        do {
                            local_res20 = lVar2;
                            lVar2 = *(longlong *)(local_res20 + 8);
                        } while (local_res20 == *(longlong *)(lVar2 + 0x18));
                    }
                    if (*(longlong *)(local_res20 + 0x18) != lVar2) {
                        local_res20 = lVar2;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar2 + 0x10); local_res20 = lVar2, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar2 = lVar1;
                    }
                }
            }
        }
        lVar2 = *(longlong *)(param_1 + 0x78);
        local_res20 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res20 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res20 == lVar2) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_18 = 0;
            local_20[0] = param_2;
            FUN_140055c60(param_1 + 0x70,&local_28,&local_res20,local_20);
            local_res20 = local_28;
        }
        *(longlong *)(local_res20 + 0x28) = param_3;
    }
    return;
}



undefined8
FUN_1404c8320(undefined8 param_1,float param_2,float param_3,float param_4,longlong param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    longlong in_stack_00000028;

    lVar2 = *(longlong *)(*(longlong *)(param_5 + 0x58) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(param_5 + 0x58)) {
            return 1;
        }
        lVar3 = *(longlong *)(lVar2 + 0x28);
        if ((in_stack_00000028 != lVar3) &&
            (fVar4 = *(float *)(lVar3 + 0xa8) - param_4, fVar5 = *(float *)(lVar3 + 0xa0) - param_3,
                    fVar4 * fVar4 + fVar5 * fVar5 <= param_2 * param_2)) break;
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
    return 0;
}



undefined8 FUN_1404c83e0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *local_res8;

    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x58)) {
        do {
            plVar1 = *(longlong **)(lVar5 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                iVar3 = FUN_1404ca3f0();
                if (iVar3 == 0) {
                    FUN_1404b8280(DAT_140c659f0,*(undefined4 *)(plVar1 + 0x3e),1);
                }
                else {
                    iVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
                    if (-1 < iVar3) {
                        (**(code **)(*local_res8 + 0xd8))();
                    }
                }
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
        } while (lVar5 != *(longlong *)(param_1 + 0x58));
    }
    FUN_1404b95d0(DAT_140c659f0);
    return 0;
}



undefined8 FUN_1404c84e0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x78)) {
        do {
            if ((*(longlong *)(lVar3 + 0x28) != 0) && (*(int *)(*(longlong *)(lVar3 + 0x28) + 0x28c) != 0)
                    ) {
                FUN_1404c3b50();
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
        } while (lVar3 != *(longlong *)(param_1 + 0x78));
    }
    return 0;
}



undefined8 FUN_1404c8580(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;

    lVar1 = *param_1;
    if ((lVar1 != 0) && (param_2 != (longlong *)0x0)) {
        lVar5 = 0;
        for (plVar7 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10); lVar6 = lVar5,
                plVar7 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18); plVar7 = plVar7 + 1)
        {
            lVar6 = *plVar7;
            if (*(int *)(lVar6 + 0xbc) == *(int *)(lVar1 + 0x14)) {
                if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x118) == param_2[1])) {
                    puVar2 = (undefined8 *)*param_2;
                    *puVar2 = *(undefined8 *)(lVar1 + 0x18);
                    puVar2[1] = *(undefined8 *)(lVar1 + 0x20);
                    param_2[2] = param_2[1];
                    return 0;
                }
                break;
            }
        }
        lVar4 = FUN_1404c8160(lVar1,param_2[1]);
        lVar1 = DAT_140c7dfe0;
        if ((lVar4 == 0) || (puVar2 = *(undefined8 **)(lVar4 + 0x50), puVar2 == (undefined8 *)0x0)) {
            if (DAT_140c7dfe0 != 0) {
                lVar5 = *param_1;
                puVar2 = (undefined8 *)*param_2;
                *puVar2 = *(undefined8 *)(lVar5 + 0x18);
                puVar2[1] = *(undefined8 *)(lVar5 + 0x20);
                param_2[2] = *(longlong *)(lVar1 + 0x118);
                return 0;
            }
        }
        else {
            puVar3 = (undefined8 *)*param_2;
            *puVar3 = *puVar2;
            puVar3[1] = puVar2[1];
            if (lVar6 != 0) {
                lVar5 = *(longlong *)(lVar6 + 0x118);
            }
            param_2[2] = lVar5;
        }
    }
    return 1;
}



undefined8 FUN_1404c86b0(longlong *param_1,longlong **param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong *plVar4;
    longlong local_res8;

    lVar1 = *param_1;
    if ((lVar1 != 0) && (param_2 != (longlong **)0x0)) {
        for (plVar4 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
             plVar4 != *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18); plVar4 = plVar4 + 1)
        {
            lVar2 = *plVar4;
            if (*(int *)(lVar2 + 0xbc) == *(int *)(lVar1 + 0x14)) {
                if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x118) == *param_2)) {
                    param_2[1] = (longlong *)0x0;
                    return 0;
                }
                break;
            }
        }
        plVar4 = (longlong *)FUN_1404c8160(lVar1,*param_2);
        if ((plVar4 != (longlong *)0x0) && (plVar4[10] != 0)) {
            param_2[1] = plVar4;
            return 1;
        }
        lVar1 = *param_1;
        if (*param_2 != (longlong *)0x0) {
            uVar3 = (**(code **)(**param_2 + 0x30))();
            lVar1 = *(longlong *)(lVar1 + 0x78);
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
            if (((local_res8 != lVar1) &&
                 (plVar4 = *(longlong **)(local_res8 + 0x28), plVar4 != (longlong *)0x0)) &&
                (plVar4[10] != 0)) {
                param_2[1] = plVar4;
            }
        }
    }
    return 1;
}



undefined8 FUN_1404c87e0(longlong **param_1)

{
    longlong *plVar1;

    plVar1 = *param_1;
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            FUN_1401a4a00(plVar1);
        }
        FUN_14018b900(plVar1,0);
        *param_1 = (longlong *)0x0;
    }
    return 1;
}



undefined8 FUN_1404c8830(void)

{
    longlong lVar1;

    if (DAT_140c659f8 == 0) {
        lVar1 = FUN_14018b280(0x120,0);
        if (lVar1 == 0) {
            DAT_140c659f8 = 0;
        }
        else {
            DAT_140c659f8 = FUN_1404c89b0(lVar1);
        }
    }
    lVar1 = DAT_140c659f0;
    if (DAT_140c659f0 != 0) {
        *(undefined8 *)(DAT_140c659f0 + 0x290) = 0;
        *(code **)(lVar1 + 0x288) = FUN_1404ca0d0;
    }
    return 0;
}



void FUN_1404c88a0(longlong param_1)

{
    FUN_140008410(param_1 + 0x100);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x108),0);
    if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_14001a270(param_1 + 0xe0,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xe8),0);
    FUN_140019490(param_1 + 0xa0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xb0),0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_140019490(param_1 + 0x78);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x48);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x58),0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_140019490(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1404c89b0(longlong param_1)

{
    short sVar1;
    ulonglong uVar2;
    short *psVar3;
    uint uVar4;
    int iVar5;
    undefined *puVar6;
    undefined8 *puVar7;
    short **ppsVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    uint uVar12;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1400522f0();
    FUN_1400522f0(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_1404cb550(param_1 + 0x78);
    FUN_1404cb550(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0xfe;
    *(undefined8 *)(param_1 + 0xd4) = 1;
    puVar6 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined **)(param_1 + 0xe8) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) = *(longlong *)(param_1 + 0xe8);
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) = *(longlong *)(param_1 + 0xe8);
    puVar6 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined **)(param_1 + 0x108) = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x10) = *(longlong *)(param_1 + 0x108);
    *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x18) = *(longlong *)(param_1 + 0x108);
    FUN_140019490(param_1 + 0x20);
    FUN_140019490(param_1 + 0x48);
    uVar12 = 0;
    do {
        puVar10 = (undefined8 *)0x0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c6539c != 0) || (iVar5 = FUN_1401f44c0(), iVar5 < 0)) {
                return param_1;
            }
            uVar4 = (**(code **)(*DAT_140c65158 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)(&PTR_u_ColorShift_140a69a68,DAT_140c63858);
        }
        if (uVar4 <= uVar12) {
            return param_1;
        }
        if (DAT_140c63848 == (code *)0x0) {
            puVar7 = puVar10;
            if (_DAT_140c6539c == 0) {
                iVar5 = FUN_1401f44c0();
                if (iVar5 < 0) {
                    puVar7 = (undefined8 *)0x0;
                }
                else {
                    puVar7 = (undefined8 *)(**(code **)(*DAT_140c65158 + 0x20))(DAT_140c65158,uVar12);
                }
            }
        }
        else {
            puVar7 = (undefined8 *)(*DAT_140c63848)(&PTR_u_ColorShift_140a69a68,uVar12,DAT_140c63858);
        }
        uVar2 = puVar7[1];
        puVar7 = puVar10;
        if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
            puVar7 = (undefined8 *)(DAT_140c3fe68 + uVar2);
        }
        ppsVar8 = (short **)FUN_1400193e0(param_1 + 0xe0);
        psVar3 = *ppsVar8;
        if (puVar7 == (undefined8 *)0x0) {
            *ppsVar8 = (short *)0x0;
        }
        else {
            sVar1 = *(short *)puVar7;
            puVar11 = puVar10;
            while (sVar1 != 0) {
                puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                sVar1 = *(short *)((longlong)puVar7 + (longlong)puVar11 * 2);
            }
            puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar11 * 2 + 0x12,0);
            if (puVar9 != (undefined8 *)0x0) {
                puVar9[1] = puVar11;
                *puVar9 = &PTR_LAB_140b55060;
                puVar10 = puVar9;
            }
            puVar10 = puVar10 + 2;
            FUN_1407db590(puVar10,puVar7,(longlong)puVar11 * 2);
            *(short *)((longlong)puVar11 * 2 + (longlong)puVar10) = 0;
            *ppsVar8 = (short *)puVar10;
        }
        if (psVar3 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar3 + -8) + 8))(psVar3 + -8);
        }
        uVar12 = uVar12 + 1;
    } while( true );
}



void FUN_1404c8c20(void)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;

    lVar10 = DAT_140c659f8;
    uVar9 = 0;
    uVar8 = uVar9;
    if (*(longlong *)(DAT_140c659f8 + 0x28) != 0) {
        do {
            lVar4 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + uVar8 * 8);
            while (lVar6 = lVar4, lVar6 != 0) {
                lVar3 = *(longlong *)(lVar6 + 0x18);
                lVar4 = *(longlong *)(lVar6 + 8);
                if (lVar3 != 0) {
                    FUN_1404c6dc0(lVar3);
                    FUN_14018b900(lVar3,0);
                    *(undefined8 *)(lVar6 + 0x18) = 0;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(lVar10 + 0x28));
    }
    FUN_140019490(DAT_140c659f8 + 0x20);
    lVar4 = DAT_140c659f8;
    if (*(longlong *)(DAT_140c659f8 + 0x50) != 0) {
        do {
            lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x58) + uVar9 * 8);
            while (lVar3 = lVar6, lVar3 != 0) {
                lVar5 = *(longlong *)(lVar3 + 0x18);
                lVar6 = *(longlong *)(lVar3 + 8);
                if (lVar5 != 0) {
                    FUN_1404c6dc0(lVar5);
                    FUN_14018b900(lVar5,0);
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(lVar4 + 0x50));
    }
    FUN_140019490(DAT_140c659f8 + 0x48);
    FUN_1404cb4d0(lVar10 + 0x78);
    FUN_140019490(lVar10 + 0x78);
    FUN_1404cb4d0(lVar10 + 0xa0);
    FUN_140019490(lVar10 + 0xa0);
    plVar7 = *(longlong **)(DAT_140c659f8 + 8);
    lVar10 = DAT_140c659f8;
    if (plVar7 != *(longlong **)(DAT_140c659f8 + 0x10)) {
        plVar1 = plVar7 + 1;
        do {
            if ((*(int *)(*plVar7 + 4) == 1) && (lVar10 = *(longlong *)(*plVar7 + 8), lVar10 != 0)) {
                FUN_1404b5280(lVar10);
                FUN_14018b900(lVar10,0);
            }
            FUN_14018b900(*plVar7,0);
            plVar2 = (longlong *)(DAT_140c659f8 + 0x10);
            if (plVar1 != *(longlong **)(DAT_140c659f8 + 0x10)) {
                FUN_1407db590(plVar7,plVar1,
                              (longlong)*(longlong **)(DAT_140c659f8 + 0x10) - (longlong)plVar1 &
                              0xfffffffffffffff8);
            }
            lVar10 = DAT_140c659f8;
            *plVar2 = *plVar2 + -8;
        } while (plVar7 != *(longlong **)(lVar10 + 0x10));
    }
    lVar4 = *(longlong *)(lVar10 + 0x10);
    lVar6 = *(longlong *)(lVar10 + 8);
    FUN_1407db590(lVar6,lVar4,0);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + (lVar4 - lVar6 >> 3) * -8;
    return;
}



// WARNING: Could not reconcile some variable overlaps

bool FUN_1404c8e20(ulonglong *param_1,int param_2,undefined4 param_3,ulonglong **param_4,int param_5
)

{
    ulonglong **ppuVar1;
    ulonglong **ppuVar2;
    bool bVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    int iVar11;
    bool bVar12;
    ulonglong *local_res8;
    int local_res10;
    undefined4 local_res18 [2];
    ulonglong local_58;
    ulonglong local_50;
    ulonglong local_48;
    ulonglong local_40;

    lVar4 = DAT_140c659f8;
    puVar10 = (ulonglong *)0x0;
    bVar12 = false;
    bVar3 = false;
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18[0] = param_3;
    uVar6 = (**(code **)(DAT_140c659f8 + 0x38))(local_res18);
    iVar11 = param_5;
    for (puVar9 = *(ulonglong **)
            (*(longlong *)(lVar4 + 0x30) + (uVar6 % *(ulonglong *)(lVar4 + 0x28)) * 8);
         puVar8 = local_res8, param_5 = iVar11, puVar9 != (ulonglong *)0x0;
         puVar9 = (ulonglong *)puVar9[1]) {
        if ((uVar6 == *puVar9) &&
            (iVar5 = (**(code **)(lVar4 + 0x40))(local_res18), iVar11 = param_5, iVar5 != 0)) {
            puVar8 = local_res8;
            if (((ulonglong **)(puVar9 + 3) != (ulonglong **)0x0) &&
                (puVar8 = (ulonglong *)puVar9[3], bVar3 = false, bVar12 = false,
                        *(int *)((longlong)puVar8 + 0x14) == local_res10)) {
                FUN_1404c72b0(puVar8,&local_res8,param_4,param_5);
                bVar12 = (int)local_res8 != 0;
                bVar3 = true;
            }
            break;
        }
        iVar11 = param_5;
    }
    if ((iVar11 == 0) || (*(int *)(param_4 + 6) == 4)) {
        if (!bVar3) {
            uVar6 = (**(code **)(lVar4 + 0x60))(local_res18);
            iVar11 = local_res10;
            for (puVar9 = *(ulonglong **)
                    (*(longlong *)(lVar4 + 0x58) + (uVar6 % *(ulonglong *)(lVar4 + 0x50)) * 8);
                 local_res10 = iVar11, puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                if ((uVar6 == *puVar9) &&
                    (iVar5 = (**(code **)(lVar4 + 0x68))(local_res18), iVar11 = local_res10, iVar5 != 0)) {
                    if ((ulonglong **)(puVar9 + 3) != (ulonglong **)0x0) {
                        puVar8 = (ulonglong *)puVar9[3];
                        if (*(int *)((longlong)puVar8 + 0x14) == local_res10) goto LAB_1404c906d;
                        FUN_1400b6120(lVar4 + 0x48);
                        FUN_1404c6dc0(puVar8);
                        FUN_14018b900(puVar8);
                    }
                    break;
                }
                iVar11 = local_res10;
            }
            puVar9 = *param_4;
            if (puVar9 == (ulonglong *)0x0) {
                local_58 = local_58 & 0xffffffff00000000;
                local_50 = 0;
            }
            else {
                local_58 = *puVar9;
                local_50 = puVar9[1];
            }
            local_48 = local_58;
            local_40 = local_50;
            lVar7 = FUN_14018b280(0xe8);
            puVar8 = puVar10;
            if (lVar7 != 0) {
                *(int *)(lVar4 + 0xd8) = *(int *)(lVar4 + 0xd8) + 1;
                puVar8 = (ulonglong *)
                        FUN_1404c6c90(lVar7,local_res18[0],&local_48,iVar11,*(undefined4 *)(lVar4 + 0xd8));
            }
            if (*(longlong *)(lVar4 + 0x48) == *(longlong *)(lVar4 + 0x50)) {
                FUN_1400290d0(lVar4 + 0x48);
            }
            uVar6 = (**(code **)(lVar4 + 0x60))(local_res18);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(lVar4 + 0x58) + (uVar6 % *(ulonglong *)(lVar4 + 0x50)) * 8);
            puVar9 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar9 != (ulonglong *)0x0) {
                puVar10 = *ppuVar2;
                *puVar9 = uVar6;
                puVar9[1] = (ulonglong)puVar10;
                puVar9[3] = (ulonglong)puVar8;
                *(undefined4 *)(puVar9 + 2) = local_res18[0];
                puVar10 = puVar9;
            }
            *ppuVar2 = puVar10;
            *(longlong *)(lVar4 + 0x48) = *(longlong *)(lVar4 + 0x48) + 1;
            ppuVar2 = (ulonglong **)(lVar4 + 0x70);
            if (*puVar8 == 0) {
                *puVar8 = (ulonglong)ppuVar2;
                ppuVar1 = (ulonglong **)(puVar8 + 1);
                *ppuVar1 = *ppuVar2;
                *ppuVar2 = puVar8;
                if ((longlong **)*ppuVar1 != (longlong **)0x0) {
                    **ppuVar1 = (ulonglong)ppuVar1;
                }
            }
            LAB_1404c906d:
            FUN_1404c72b0(puVar8,&param_5,param_4,param_5);
            bVar12 = param_5 != 0;
        }
        FUN_1404ca720(lVar4,puVar8);
    }
    return bVar12;
}



bool FUN_1404c90c0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res18 [4];

    lVar2 = DAT_140c659f8;
    local_res18[0] = param_3;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res18);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar4 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1404c911f:
            uVar4 = (**(code **)(lVar2 + 0x60))(local_res18);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x58) + (uVar4 % *(ulonglong *)(lVar2 + 0x50)) * 8);
            while( true ) {
                if (puVar1 == (ulonglong *)0x0) {
                    return false;
                }
                if ((uVar4 == *puVar1) &&
                    (iVar3 = (**(code **)(lVar2 + 0x68))(local_res18,puVar1 + 2), iVar3 != 0)) break;
                puVar1 = (ulonglong *)puVar1[1];
            }
            if (puVar1 + 3 == (ulonglong *)0x0) {
                return false;
            }
            uVar4 = puVar1[3];
            if (*(int *)(uVar4 + 0x14) != param_2) {
                return false;
            }
            LAB_1404c916e:
            iVar3 = FUN_1404c7860(uVar4,param_4);
            return -1 < iVar3;
        }
        if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x40))(local_res18), iVar3 != 0)) {
            if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar4 = puVar1[3], *(int *)(uVar4 + 0x14) == param_2)
                    ) goto LAB_1404c916e;
            goto LAB_1404c911f;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined4 *
FUN_1404c91b0(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
              ulonglong **param_5)

{
    longlong **pplVar1;
    longlong **pplVar2;
    ulonglong **ppuVar3;
    ulonglong *puVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    ulonglong *puVar11;
    undefined4 *puVar12;
    undefined8 local_res8;
    undefined4 local_res20 [2];
    ulonglong local_48;
    ulonglong local_40;
    ulonglong local_38;
    ulonglong local_30;

    lVar8 = DAT_140c659f8;
    *param_2 = 0;
    local_res8 = param_1;
    local_res20[0] = param_4;
    uVar7 = (**(code **)(lVar8 + 0x38))(local_res20);
    for (puVar11 = *(ulonglong **)
            (*(longlong *)(lVar8 + 0x30) + (uVar7 % *(ulonglong *)(lVar8 + 0x28)) * 8);
         puVar11 != (ulonglong *)0x0; puVar11 = (ulonglong *)puVar11[1]) {
        if ((uVar7 == *puVar11) && (iVar5 = (**(code **)(lVar8 + 0x40))(local_res20), iVar5 != 0)) {
            if (puVar11 + 3 != (ulonglong *)0x0) {
                uVar7 = puVar11[3];
                iVar5 = *(int *)(uVar7 + 0x14);
                if (iVar5 == param_3) {
                    lVar8 = FUN_1404c7ac0(uVar7,param_5);
                    if (lVar8 != 0) {
                        FUN_1404c0ba0(lVar8,param_5,iVar5);
                        *param_2 = *(undefined4 *)(lVar8 + 0x1f0);
                        return param_2;
                    }
                    puVar12 = (undefined4 *)FUN_1404c72b0(uVar7,&local_res8,param_5,1);
                    *param_2 = *puVar12;
                    return param_2;
                }
            }
            break;
        }
    }
    uVar7 = (**(code **)(lVar8 + 0x38))(local_res20);
    for (puVar11 = *(ulonglong **)
            (*(longlong *)(lVar8 + 0x30) + (uVar7 % *(ulonglong *)(lVar8 + 0x28)) * 8);
         puVar11 != (ulonglong *)0x0; puVar11 = (ulonglong *)puVar11[1]) {
        if ((uVar7 == *puVar11) && (iVar5 = (**(code **)(lVar8 + 0x40))(local_res20), iVar5 != 0)) {
            if (puVar11 != (ulonglong *)&DAT_ffffffffffffffe8) {
                return param_2;
            }
            break;
        }
    }
    uVar7 = (**(code **)(lVar8 + 0x60))(local_res20);
    puVar11 = *(ulonglong **)
            (*(longlong *)(lVar8 + 0x58) + (uVar7 % *(ulonglong *)(lVar8 + 0x50)) * 8);
    do {
        if (puVar11 == (ulonglong *)0x0) {
            LAB_1404c9335:
            puVar11 = *param_5;
            if (puVar11 == (ulonglong *)0x0) {
                local_48 = local_48 & 0xffffffff00000000;
                local_40 = 0;
            }
            else {
                local_48 = *puVar11;
                local_40 = puVar11[1];
            }
            local_38 = local_48;
            local_30 = local_40;
            lVar9 = FUN_14018b280();
            if (lVar9 == 0) {
                plVar10 = (longlong *)0x0;
            }
            else {
                *(int *)(lVar8 + 0xd8) = *(int *)(lVar8 + 0xd8) + 1;
                plVar10 = (longlong *)
                        FUN_1404c6c90(lVar9,local_res20[0],&local_38,param_3,*(undefined4 *)(lVar8 + 0xd8)
                        );
            }
            if (*(longlong *)(lVar8 + 0x48) == *(longlong *)(lVar8 + 0x50)) {
                FUN_1400290d0(lVar8 + 0x48);
            }
            uVar7 = (**(code **)(lVar8 + 0x60))(local_res20);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(lVar8 + 0x58) + (uVar7 % *(ulonglong *)(lVar8 + 0x50)) * 8);
            puVar11 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar11 != (ulonglong *)0x0) {
                puVar4 = *ppuVar3;
                *puVar11 = uVar7;
                puVar11[1] = (ulonglong)puVar4;
                puVar11[3] = (ulonglong)plVar10;
                *(undefined4 *)(puVar11 + 2) = local_res20[0];
            }
            *ppuVar3 = puVar11;
            *(longlong *)(lVar8 + 0x48) = *(longlong *)(lVar8 + 0x48) + 1;
            pplVar1 = (longlong **)(lVar8 + 0x70);
            if (*plVar10 == 0) {
                *plVar10 = (longlong)pplVar1;
                pplVar2 = (longlong **)(plVar10 + 1);
                *pplVar2 = *pplVar1;
                *pplVar1 = plVar10;
                if ((longlong **)*pplVar2 != (longlong **)0x0) {
                    **pplVar2 = (longlong)pplVar2;
                }
            }
            lVar9 = FUN_1404c7ac0(plVar10,param_5);
            if (lVar9 == 0) {
                puVar12 = (undefined4 *)FUN_1404c72b0(plVar10,&local_res8,param_5,1);
                uVar6 = *puVar12;
            }
            else {
                FUN_1404c0ba0(lVar9,param_5,*(undefined4 *)((longlong)plVar10 + 0x14));
                uVar6 = *(undefined4 *)(lVar9 + 0x1f0);
            }
            *param_2 = uVar6;
            FUN_1404ca720(lVar8,plVar10);
            return param_2;
        }
        if ((uVar7 == *puVar11) && (iVar5 = (**(code **)(lVar8 + 0x68))(local_res20), iVar5 != 0)) {
            if (puVar11 != (ulonglong *)&DAT_ffffffffffffffe8) {
                return param_2;
            }
            goto LAB_1404c9335;
        }
        puVar11 = (ulonglong *)puVar11[1];
    } while( true );
}



undefined8 FUN_1404c94c0(undefined8 param_1,int param_2,uint param_3)

{
    longlong lVar1;
    uint uVar2;

    uVar2 = param_3 >> 0x18;
    if (uVar2 < *(uint *)(DAT_140c659f8 + 0xd8) || uVar2 == *(uint *)(DAT_140c659f8 + 0xd8)) {
        for (lVar1 = *(longlong *)(DAT_140c659f8 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8))
        {
            if (*(uint *)(lVar1 + 0x98) == uVar2) {
                if (lVar1 == 0) {
                    return 0x80004005;
                }
                if (*(int *)(lVar1 + 0x14) != param_2) {
                    return 0x80004005;
                }
                FUN_1404c7770(lVar1,param_3);
                return 0;
            }
        }
    }
    return 0x80004005;
}



void FUN_1404c9520(undefined8 param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined8 local_res8;

    lVar5 = DAT_140c659f8;
    uVar3 = 0;
    local_res8 = param_1;
    if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
        *(undefined8 *)(lVar5 + 200) = 0;
    }
    if (param_2 == (longlong *)0x0) {
        lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar5 != 0) {
            FUN_1405afe10(lVar5);
        }
    }
    else {
        local_res8 = 0;
        iVar1 = (**(code **)(*param_2 + 0xd0))(param_2,&local_res8);
        if (iVar1 < 0) {
            lVar2 = FUN_14018b280(0x130,0);
            if (lVar2 != 0) {
                uVar3 = FUN_1404bdcc0(lVar2,param_2);
            }
        }
        else {
            lVar2 = FUN_14018b280(0x140,0);
            if (lVar2 != 0) {
                uVar3 = FUN_1404bea60(lVar2,param_2);
            }
        }
        *(undefined8 *)(lVar5 + 200) = uVar3;
        lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc0) != 4)) {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 200) + 0x70))();
            (**(code **)(*plVar4 + 0x78))(plVar4,*(undefined4 *)(lVar5 + 0xd0));
            plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 200) + 0x70))();
            uVar6 = *(undefined4 *)(lVar5 + 0xd4);
        }
        else {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 200) + 0x70))();
            (**(code **)(*plVar4 + 0x78))(plVar4,0x20);
            plVar4 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 200) + 0x70))();
            uVar6 = 1;
        }
        (**(code **)(*plVar4 + 0x58))(plVar4,uVar6);
        lVar5 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar5 != 0) {
            FUN_1405af260(lVar5);
        }
        if (*(int *)((longlong)param_2 + 0x28c) != 0) {
            FUN_1404c3b50(param_2);
            return;
        }
    }
    return;
}



undefined8 FUN_1404c96c0(undefined8 param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong **pplVar6;
    undefined4 uVar7;
    ulonglong uVar8;

    lVar4 = DAT_140c659f8;
    if ((param_2 == (longlong *)0x0) || (*(longlong **)(DAT_140c659f8 + 200) == (longlong *)0x0)) {
        return 0x80004005;
    }
    lVar2 = (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x68))();
    if ((lVar2 == 1) &&
        (plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 0x98))(),
                lVar2 = DAT_140c659f8, plVar3 == param_2)) {
        if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
            *(undefined8 *)(lVar2 + 200) = 0;
        }
        lVar4 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar4 != 0) {
            FUN_1405afe10(lVar4);
            return 0;
        }
    }
    else {
        uVar5 = (**(code **)(**(longlong **)(lVar4 + 200) + 0x68))();
        if (1 < uVar5) {
            uVar5 = 0;
            plVar3 = *(longlong **)(DAT_140c659f8 + 200);
            if (plVar3[0x27] != 0) {
                pplVar6 = (longlong **)plVar3[0x26];
                uVar8 = uVar5;
                do {
                    if (*pplVar6 == param_2) {
                        FUN_140007270(plVar3 + 0x26);
                        (**(code **)(*param_2 + 0x68))(param_2);
                        break;
                    }
                    uVar8 = uVar8 + 1;
                    pplVar6 = pplVar6 + 1;
                } while (uVar8 < (ulonglong)plVar3[0x27]);
            }
            lVar2 = (**(code **)(*plVar3 + 0x68))(plVar3);
            if ((lVar2 == 1) &&
                (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x98))(plVar3), plVar3 != (longlong *)0x0)) {
                (**(code **)*plVar3)(plVar3);
                if (*(longlong **)(lVar4 + 200) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar4 + 200) + 8))();
                    *(undefined8 *)(lVar4 + 200) = 0;
                }
                lVar2 = FUN_14018b280(0x130,0);
                if (lVar2 != 0) {
                    uVar5 = FUN_1404bdcc0(lVar2,plVar3);
                }
                *(ulonglong *)(lVar4 + 200) = uVar5;
                (**(code **)(*plVar3 + 8))(plVar3);
                iVar1 = FUN_1404b5980();
                if (iVar1 == 4) {
                    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 200) + 0x70))();
                    (**(code **)(*plVar3 + 0x78))(plVar3,0x20);
                    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 200) + 0x70))();
                    uVar7 = 1;
                }
                else {
                    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 200) + 0x70))();
                    (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined4 *)(lVar4 + 0xd0));
                    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 200) + 0x70))();
                    uVar7 = *(undefined4 *)(lVar4 + 0xd4);
                }
                (**(code **)(*plVar3 + 0x58))(plVar3,uVar7);
            }
        }
    }
    return 0;
}



void FUN_1404c98f0(undefined8 param_1,undefined4 param_2)

{
    longlong **pplVar1;
    longlong *plVar2;

    pplVar1 = (longlong **)(DAT_140c659f8 + 200);
    *(undefined4 *)(DAT_140c659f8 + 0xd0) = param_2;
    if (*pplVar1 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(**pplVar1 + 0x70))();
        // WARNING: Could not recover jumptable at 0x0001404c9924. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
        return;
    }
    return;
}



undefined8 FUN_1404c9930(undefined8 param_1,undefined4 param_2,int param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c659f8;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar4 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1404c998e:
            uVar4 = (**(code **)(lVar2 + 0x60))(local_res10);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x58) + (uVar4 % *(ulonglong *)(lVar2 + 0x50)) * 8);
            while( true ) {
                if (puVar1 == (ulonglong *)0x0) {
                    return 0x80004005;
                }
                if ((uVar4 == *puVar1) &&
                    (iVar3 = (**(code **)(lVar2 + 0x68))(local_res10,puVar1 + 2), iVar3 != 0)) break;
                puVar1 = (ulonglong *)puVar1[1];
            }
            if (puVar1 + 3 == (ulonglong *)0x0) {
                return 0x80004005;
            }
            if (*(int *)(puVar1[3] + 0x14) != param_3) {
                return 0x80004005;
            }
            LAB_1404c99de:
            uVar5 = FUN_1404c83e0();
            return uVar5;
        }
        if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x40))(local_res10), iVar3 != 0)) {
            if ((puVar1 + 3 != (ulonglong *)0x0) && (*(int *)(puVar1[3] + 0x14) == param_3))
                goto LAB_1404c99de;
            goto LAB_1404c998e;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1404c9a10(undefined8 param_1,undefined4 param_2,int param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c659f8;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar4 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1404c9a6e:
            uVar4 = (**(code **)(lVar2 + 0x60))(local_res10);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x58) + (uVar4 % *(ulonglong *)(lVar2 + 0x50)) * 8);
            while( true ) {
                if (puVar1 == (ulonglong *)0x0) {
                    return 0x80004005;
                }
                if ((uVar4 == *puVar1) &&
                    (iVar3 = (**(code **)(lVar2 + 0x68))(local_res10,puVar1 + 2), iVar3 != 0)) break;
                puVar1 = (ulonglong *)puVar1[1];
            }
            if (puVar1 + 3 == (ulonglong *)0x0) {
                return 0x80004005;
            }
            if (*(int *)(puVar1[3] + 0x14) != param_3) {
                return 0x80004005;
            }
            LAB_1404c9abe:
            uVar5 = FUN_1404c84e0();
            return uVar5;
        }
        if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x40))(local_res10), iVar3 != 0)) {
            if ((puVar1 + 3 != (ulonglong *)0x0) && (*(int *)(puVar1[3] + 0x14) == param_3))
                goto LAB_1404c9abe;
            goto LAB_1404c9a6e;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



ulonglong FUN_1404c9af0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                        uint param_5)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined4 local_res20 [2];

    lVar2 = DAT_140c659f8;
    local_res20[0] = param_4;
    uVar3 = (**(code **)(DAT_140c659f8 + 0x38))(local_res20);
    uVar4 = uVar3 / *(ulonglong *)(lVar2 + 0x28);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar3 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (uVar4 = (**(code **)(lVar2 + 0x40))(local_res20,puVar1 + 2), (int)uVar4 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return uVar4;
    }
    uVar4 = puVar1[3];
    if (*(uint *)(uVar4 + 0x14) != param_5) {
        return (ulonglong)param_5;
    }
    uVar4 = FUN_1404c7cf0(uVar4,param_2,param_3);
    return uVar4;
}



longlong FUN_1404c9b90(ulonglong param_1,uint param_2)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong *puVar6;
    ulonglong local_res8;
    uint local_res10;

    lVar3 = DAT_140c659f8;
    uVar4 = param_2 >> 0x18;
    if ((uVar4 < *(uint *)(DAT_140c659f8 + 0xd8) || uVar4 == *(uint *)(DAT_140c659f8 + 0xd8)) &&
        (lVar5 = *(longlong *)(DAT_140c659f8 + 0x70), lVar5 != 0)) {
        while (*(uint *)(lVar5 + 0x98) != uVar4) {
            lVar5 = *(longlong *)(lVar5 + 8);
            if (lVar5 == 0) {
                return 0;
            }
        }
        if (lVar5 != 0) {
            local_res8 = param_1 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar5 + 0x10);
            local_res10 = param_2;
            uVar2 = (**(code **)(DAT_140c659f8 + 0x38))(&local_res8);
            puVar6 = *(ulonglong **)
                    (*(longlong *)(lVar3 + 0x30) + (uVar2 % *(ulonglong *)(lVar3 + 0x28)) * 8);
            if (puVar6 != (ulonglong *)0x0) {
                while ((uVar2 != *puVar6 ||
                        (iVar1 = (**(code **)(lVar3 + 0x40))(&local_res8,puVar6 + 2), iVar1 == 0))) {
                    puVar6 = (ulonglong *)puVar6[1];
                    if (puVar6 == (ulonglong *)0x0) {
                        return 0;
                    }
                }
                if ((puVar6 != (ulonglong *)&DAT_ffffffffffffffe8) &&
                    (lVar3 = FUN_1404c7bd0(lVar5,local_res10), lVar3 != 0)) {
                    return lVar3;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1404c9c70(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c659f8;
    if (param_4 == 0) {
        return 0;
    }
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar4 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x40))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar4 = puVar1[3];
    if (*(int *)(uVar4 + 0x14) != param_3) {
        return 0;
    }
    uVar5 = FUN_1404c78e0(uVar4,param_4);
    return uVar5;
}



ulonglong FUN_1404c9d20(undefined8 param_1,int param_2,undefined4 param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined4 local_res18 [4];

    lVar2 = DAT_140c659f8;
    local_res18[0] = param_3;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res18);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x30) + (uVar4 % *(ulonglong *)(lVar2 + 0x28)) * 8)
            ;
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1404c9d7e:
            uVar4 = (**(code **)(lVar2 + 0x60))(local_res18);
            uVar5 = uVar4 / *(ulonglong *)(lVar2 + 0x50);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x58) + (uVar4 % *(ulonglong *)(lVar2 + 0x50)) * 8);
            while( true ) {
                if (puVar1 == (ulonglong *)0x0) {
                    return uVar5;
                }
                if ((uVar4 == *puVar1) &&
                    (uVar5 = (**(code **)(lVar2 + 0x68))(local_res18,puVar1 + 2), (int)uVar5 != 0)) break;
                puVar1 = (ulonglong *)puVar1[1];
            }
            if (puVar1 + 3 == (ulonglong *)0x0) {
                return uVar5;
            }
            uVar4 = puVar1[3];
            if (*(int *)(uVar4 + 0x14) != param_2) {
                return uVar5;
            }
            lVar6 = lVar2 + 0x48;
            LAB_1404c9de8:
            FUN_1400b6120(lVar6,local_res18);
            FUN_1404c6dc0(uVar4);
            uVar4 = FUN_14018b900(uVar4,0);
            *(int *)(lVar2 + 0xd8) = *(int *)(lVar2 + 0xd8) + -1;
            return uVar4;
        }
        if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x40))(local_res18), iVar3 != 0)) {
            if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar4 = puVar1[3], *(int *)(uVar4 + 0x14) == param_2)
                    ) {
                lVar6 = lVar2 + 0x20;
                goto LAB_1404c9de8;
            }
            goto LAB_1404c9d7e;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



longlong FUN_1404c9e20(ulonglong param_1,int param_2,ulonglong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong *puVar10;
    uint uVar11;
    ulonglong uVar12;
    ulonglong local_res8;
    longlong local_res20;
    longlong local_38 [2];

    lVar4 = DAT_140c659f8;
    plVar8 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    while( true ) {
        if (plVar8 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            return 0;
        }
        lVar1 = *plVar8;
        if (*(int *)(lVar1 + 0xbc) == param_2) break;
        plVar8 = plVar8 + 1;
    }
    if (lVar1 == 0) {
        return 0;
    }
    uVar5 = *(uint *)(lVar1 + 0x110);
    uVar12 = 0;
    local_res8 = param_1;
    if (uVar5 != 0) {
        do {
            if ((*(longlong *)(lVar1 + 0xe8) == 0) || (uVar5 <= (uint)uVar12)) {
                lVar9 = 0;
            }
            else {
                lVar9 = uVar12 * 0xc0 + *(longlong *)(lVar1 + 0xe8);
            }
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar9 + 4);
            uVar7 = (**(code **)(lVar4 + 0x38))(&local_res8);
            for (puVar10 = *(ulonglong **)
                    (*(longlong *)(lVar4 + 0x30) + (uVar7 % *(ulonglong *)(lVar4 + 0x28)) * 8);
                 puVar10 != (ulonglong *)0x0; puVar10 = (ulonglong *)puVar10[1]) {
                if ((uVar7 == *puVar10) && (iVar6 = (**(code **)(lVar4 + 0x40))(&local_res8), iVar6 != 0)) {
                    puVar10 = puVar10 + 3;
                    if (puVar10 != (ulonglong *)0x0) goto LAB_1404c9f6e;
                    break;
                }
            }
            uVar7 = (**(code **)(lVar4 + 0x60))(&local_res8);
            for (puVar10 = *(ulonglong **)
                    (*(longlong *)(lVar4 + 0x58) + (uVar7 % *(ulonglong *)(lVar4 + 0x50)) * 8);
                 puVar10 != (ulonglong *)0x0; puVar10 = (ulonglong *)puVar10[1]) {
                if ((uVar7 == *puVar10) &&
                    (iVar6 = (**(code **)(lVar4 + 0x68))(&local_res8,puVar10 + 2), iVar6 != 0)) {
                    puVar10 = puVar10 + 3;
                    if (puVar10 != (ulonglong *)0x0) {
                        LAB_1404c9f6e:
                        lVar9 = *(longlong *)(*puVar10 + 0x38);
                        lVar3 = lVar9;
                        lVar2 = *(longlong *)(lVar9 + 8);
                        while (lVar2 != 0) {
                            if (*(ulonglong *)(lVar2 + 0x20) < param_3) {
                                lVar2 = *(longlong *)(lVar2 + 0x18);
                            }
                            else {
                                lVar3 = lVar2;
                                lVar2 = *(longlong *)(lVar2 + 0x10);
                            }
                        }
                        if ((lVar3 == lVar9) || (param_3 < *(ulonglong *)(lVar3 + 0x20))) {
                            local_38[0] = lVar9;
                            plVar8 = local_38;
                        }
                        else {
                            plVar8 = &local_res20;
                            local_res20 = lVar3;
                        }
                        if (((*plVar8 != lVar9) && (lVar9 = *(longlong *)(*plVar8 + 0x28), lVar9 != 0)) &&
                            (*(int *)(*puVar10 + 0x14) == param_2)) {
                            return lVar9;
                        }
                    }
                    break;
                }
            }
            uVar5 = *(uint *)(lVar1 + 0x110);
            uVar11 = (uint)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
        } while (uVar11 < uVar5);
    }
    return 0;
}



undefined8
FUN_1404ca000(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
              undefined4 param_5)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong *puVar5;
    undefined4 local_res10 [2];

    lVar1 = DAT_140c659f8;
    local_res10[0] = param_2;
    uVar3 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
    puVar5 = *(ulonglong **)(*(longlong *)(lVar1 + 0x30) + (uVar3 % *(ulonglong *)(lVar1 + 0x28)) * 8)
            ;
    do {
        if (puVar5 == (ulonglong *)0x0) {
            LAB_1404ca066:
            uVar3 = (**(code **)(lVar1 + 0x60))(local_res10);
            puVar5 = *(ulonglong **)
                    (*(longlong *)(lVar1 + 0x58) + (uVar3 % *(ulonglong *)(lVar1 + 0x50)) * 8);
            while( true ) {
                if (puVar5 == (ulonglong *)0x0) {
                    return 0;
                }
                if ((uVar3 == *puVar5) &&
                    (iVar2 = (**(code **)(lVar1 + 0x68))(local_res10,puVar5 + 2), iVar2 != 0)) break;
                puVar5 = (ulonglong *)puVar5[1];
            }
            puVar5 = puVar5 + 3;
            if (puVar5 == (ulonglong *)0x0) {
                return 0;
            }
            LAB_1404ca0bf:
            uVar4 = FUN_1404c7dd0(*puVar5,param_4,param_5);
            return uVar4;
        }
        if ((uVar3 == *puVar5) && (iVar2 = (**(code **)(lVar1 + 0x40))(local_res10), iVar2 != 0)) {
            puVar5 = puVar5 + 3;
            if (puVar5 != (ulonglong *)0x0) goto LAB_1404ca0bf;
            goto LAB_1404ca066;
        }
        puVar5 = (ulonglong *)puVar5[1];
    } while( true );
}



ulonglong * FUN_1404ca0d0(undefined4 param_1,ulonglong param_2,int param_3,longlong param_4)

{
    ulonglong **ppuVar1;
    undefined8 *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    undefined4 local_res8 [2];
    ulonglong local_38 [2];

    lVar6 = DAT_140c659f8;
    local_res8[0] = param_1;
    if (param_3 == 0) {
        uVar4 = (**(code **)(DAT_140c659f8 + 0x60))(local_res8);
        for (puVar8 = *(ulonglong **)
                (*(longlong *)(lVar6 + 0x58) + (uVar4 % *(ulonglong *)(lVar6 + 0x50)) * 8);
             puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
            if ((uVar4 == *puVar8) && (iVar3 = (**(code **)(lVar6 + 0x68))(local_res8), iVar3 != 0)) {
                if (puVar8 + 3 != (ulonglong *)0x0) {
                    uVar4 = puVar8[3];
                    FUN_1400b6120(DAT_140c659f8 + 0x48);
                    lVar6 = DAT_140c659f8;
                    if (*(longlong *)(DAT_140c659f8 + 0x20) == *(longlong *)(DAT_140c659f8 + 0x28)) {
                        FUN_1400290d0(DAT_140c659f8 + 0x20);
                    }
                    uVar5 = (**(code **)(lVar6 + 0x38))(local_res8);
                    ppuVar1 = (ulonglong **)
                            (*(longlong *)(lVar6 + 0x30) + (uVar5 % *(ulonglong *)(lVar6 + 0x28)) * 8);
                    puVar8 = (ulonglong *)FUN_14018b280(0x20);
                    if (puVar8 != (ulonglong *)0x0) {
                        puVar9 = *ppuVar1;
                        *puVar8 = uVar5;
                        puVar8[1] = (ulonglong)puVar9;
                        puVar8[3] = uVar4;
                        *(undefined4 *)(puVar8 + 2) = local_res8[0];
                    }
                    *ppuVar1 = puVar8;
                    *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + 1;
                }
                break;
            }
        }
        lVar6 = FUN_1405b15c0(&DAT_140c7dfb0);
        if ((lVar6 != 0) &&
            (puVar2 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(lVar6 + 0x118) != puVar2)) {
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2);
            }
            if (*(longlong **)(lVar6 + 0x118) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 0x118) + 8))();
            }
            *(undefined8 **)(lVar6 + 0x118) = puVar2;
        }
    }
    lVar6 = DAT_140c659f8;
    uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    for (puVar8 = *(ulonglong **)
            (*(longlong *)(lVar6 + 0x30) + (uVar4 % *(ulonglong *)(lVar6 + 0x28)) * 8);
         puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
        if ((uVar4 == *puVar8) && (iVar3 = (**(code **)(lVar6 + 0x40))(), iVar3 != 0)) {
            if (puVar8 + 3 != (ulonglong *)0x0) {
                puVar8 = (ulonglong *)FUN_1404c7f20(puVar8[3]);
                if (param_3 != 1) goto LAB_1404ca2b5;
                if (param_2 == 0) {
                    return puVar8;
                }
                FUN_1404b5280(param_2);
                goto LAB_1404ca3c9;
            }
            break;
        }
    }
    puVar7 = (undefined4 *)FUN_14018b280();
    if (puVar7 != (undefined4 *)0x0) {
        puVar7[1] = param_3;
        *(ulonglong *)(puVar7 + 2) = param_2;
        *puVar7 = local_res8[0];
    }
    puVar8 = (ulonglong *)FUN_1404ca680();
    LAB_1404ca2b5:
    lVar6 = DAT_140c659f8;
    if (param_3 == 3) {
        uVar4 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
        puVar8 = (ulonglong *)(uVar4 / *(ulonglong *)(lVar6 + 0x28));
        puVar9 = *(ulonglong **)
                (*(longlong *)(lVar6 + 0x30) + (uVar4 % *(ulonglong *)(lVar6 + 0x28)) * 8);
        if (puVar9 != (ulonglong *)0x0) {
            while ((uVar4 != *puVar9 ||
                    (puVar8 = (ulonglong *)(**(code **)(lVar6 + 0x40))(local_res8,puVar9 + 2),
                            (int)puVar8 == 0))) {
                puVar9 = (ulonglong *)puVar9[1];
                if (puVar9 == (ulonglong *)0x0) {
                    return puVar8;
                }
            }
            if (puVar9 + 3 != (ulonglong *)0x0) {
                param_2 = puVar9[3];
                local_38[0] = param_2;
                FUN_1400b6120(DAT_140c659f8 + 0x20);
                lVar6 = DAT_140c659f8;
                uVar4 = (**(code **)(DAT_140c659f8 + 0x60))(local_res8);
                puVar8 = (ulonglong *)(uVar4 / *(ulonglong *)(lVar6 + 0x50));
                for (puVar9 = *(ulonglong **)
                        (*(longlong *)(lVar6 + 0x58) + (uVar4 % *(ulonglong *)(lVar6 + 0x50)) * 8);
                     puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                    if ((uVar4 == *puVar9) &&
                        (puVar8 = (ulonglong *)(**(code **)(lVar6 + 0x68))(local_res8,puVar9 + 2),
                                (int)puVar8 != 0)) {
                        puVar8 = puVar9 + 3;
                        if (puVar8 != (ulonglong *)0x0) goto LAB_1404ca3bc;
                        break;
                    }
                }
                if (param_4 == 0) {
                    puVar8 = (ulonglong *)FUN_1400b6080(DAT_140c659f8 + 0x48,local_res8,local_38);
                    return puVar8;
                }
                LAB_1404ca3bc:
                if (param_2 != 0) {
                    FUN_1404c6dc0(param_2);
                    LAB_1404ca3c9:
                    puVar8 = (ulonglong *)FUN_14018b900(param_2,0);
                }
            }
        }
    }
    return puVar8;
}



undefined4 FUN_1404ca3f0(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = param_2 & 0xffffffff;
    if (param_4 == 0) {
        return 1;
    }
    if (param_4 == *(longlong *)(param_3 + 0x58)) {
        return 0;
    }
    lVar1 = FUN_1404c9e20(param_1,param_2,param_4);
    lVar2 = param_3;
    while ((lVar1 != 0 && (lVar2 != lVar1))) {
        lVar3 = param_4;
        if (lVar2 != param_3) {
            lVar3 = *(longlong *)(lVar2 + 0xf0);
        }
        lVar2 = FUN_1404c9e20(param_1,uVar4,lVar3);
        lVar3 = param_4;
        if (lVar1 != param_3) {
            lVar3 = *(longlong *)(lVar1 + 0xf0);
        }
        lVar1 = FUN_1404c9e20(param_1,uVar4,lVar3);
        if (lVar1 != 0) {
            lVar3 = param_4;
            if (lVar1 != param_3) {
                lVar3 = *(longlong *)(lVar1 + 0xf0);
            }
            lVar1 = FUN_1404c9e20(param_1,uVar4,lVar3);
        }
        if (lVar2 == 0) {
            return 1;
        }
    }
    if (lVar2 == 0) {
        return 1;
    }
    if (lVar1 == 0) {
        return 1;
    }
    if (lVar2 != lVar1) {
        return 1;
    }
    return 0;
}



undefined8 FUN_1404ca4f0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659f8 + 0xe8);
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
    return 0;
}



void FUN_1404ca550(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c659f8 + 0x108);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < *(uint *)(param_2 + 8)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*(uint *)(param_2 + 8) < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        FUN_1404c07b0(*(undefined8 *)(local_res8 + 0x28));
        return;
    }
    return;
}



void FUN_1404ca5d0(longlong param_1,int param_2)

{
    int *piVar1;
    longlong lVar2;
    int **ppiVar3;
    int **ppiVar4;

    ppiVar3 = *(int ***)(param_1 + 8);
    if (ppiVar3 != *(int ***)(param_1 + 0x10)) {
        ppiVar4 = ppiVar3 + 1;
        do {
            piVar1 = *ppiVar3;
            if (*piVar1 == param_2) {
                if ((piVar1[1] == 1) && (lVar2 = *(longlong *)(piVar1 + 2), lVar2 != 0)) {
                    FUN_1404b5280(lVar2);
                    FUN_14018b900(lVar2,0);
                }
                FUN_14018b900(*ppiVar3,0);
                if (ppiVar4 != *(int ***)(param_1 + 0x10)) {
                    FUN_1407db590(ppiVar3,ppiVar4,
                                  (longlong)*(int ***)(param_1 + 0x10) - (longlong)ppiVar4 &
                                  0xfffffffffffffff8);
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
            }
            else {
                ppiVar3 = ppiVar3 + 1;
                ppiVar4 = ppiVar4 + 1;
            }
        } while (ppiVar3 != *(int ***)(param_1 + 0x10));
    }
    return;
}



void FUN_1404ca680(undefined8 param_1,undefined4 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined4 *local_res10 [3];

    lVar2 = DAT_140c659f8;
    if (param_2 != (undefined4 *)0x0) {
        local_res10[0] = param_2;
        if (param_2[1] == 0) {
            FUN_1404ca5d0(DAT_140c659f8,*param_2);
        }
        else if (param_2[1] == 3) {
            FUN_1404ca5d0(DAT_140c659f8,*param_2);
            FUN_14018b900(param_2,0);
            return;
        }
        puVar1 = *(undefined8 **)(lVar2 + 0x10);
        if (puVar1 != *(undefined8 **)(lVar2 + 0x18)) {
            if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = param_2;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 8;
            return;
        }
        FUN_1400b9430(lVar2,puVar1,local_res10);
    }
    return;
}



void FUN_1404ca720(longlong param_1,longlong param_2)

{
    int *piVar1;
    int **ppiVar2;
    int **ppiVar3;

    ppiVar2 = *(int ***)(param_1 + 8);
    if (ppiVar2 != *(int ***)(param_1 + 0x10)) {
        ppiVar3 = ppiVar2 + 1;
        do {
            piVar1 = *ppiVar2;
            if (*piVar1 == *(int *)(param_2 + 0x10)) {
                FUN_1404ca0d0(*piVar1,*(undefined8 *)(piVar1 + 2),piVar1[1],0);
                FUN_14018b900(*ppiVar2,0);
                if (ppiVar3 != *(int ***)(param_1 + 0x10)) {
                    FUN_1407db590(ppiVar2,ppiVar3);
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
            }
            else {
                ppiVar2 = ppiVar2 + 1;
                ppiVar3 = ppiVar3 + 1;
            }
        } while (ppiVar2 != *(int ***)(param_1 + 0x10));
    }
    return;
}



void FUN_1404ca7c0(longlong *param_1,int *param_2,longlong param_3,longlong *param_4)

{
    undefined8 uVar1;
    int iVar2;
    uint *puVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    ulonglong uVar11;
    bool bVar12;
    float fVar13;
    float fVar14;
    float fVar16;
    undefined auVar15 [16];
    float fVar17;
    longlong *local_res8;
    longlong local_res10;
    longlong local_res18;
    undefined local_a8 [16];
    undefined local_98 [16];
    undefined4 local_88;
    undefined8 local_84;
    undefined8 local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined8 local_60;

    uVar1 = DAT_140c659f8;
    local_res8 = param_1;
    local_res18 = param_3;
    if (*(longlong **)(param_3 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_3 + 0x40) + 8))();
        *(undefined8 *)(param_3 + 0x40) = 0;
    }
    *(undefined4 *)(param_3 + 0x50) = 0;
    puVar3 = (uint *)(**(code **)(*DAT_140c65670 + 0x248))();
    lVar9 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar9 == 0) {
        lVar9 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar8 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar8 == 0) {
        lVar8 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar17 = 1.0;
    fVar14 = (((float)*param_2 - (float)(ulonglong)*puVar3) / (float)(ulonglong)puVar3[2]) * 2.0 - 1.0
            ;
    fVar13 = 1.0 - (((float)param_2[1] - (float)(ulonglong)puVar3[1]) / (float)(ulonglong)puVar3[3]) *
                   2.0;
    fVar16 = fVar13 * *(float *)(lVar9 + 0x13c) + fVar14 * *(float *)(lVar9 + 300) +
             *(float *)(lVar9 + 0x14c) * 0.0 + *(float *)(lVar9 + 0x15c);
    auVar15 = divps(CONCAT412(fVar16,CONCAT48(fVar13 * *(float *)(lVar9 + 0x138) +
                                              fVar14 * *(float *)(lVar9 + 0x128) +
                                              *(float *)(lVar9 + 0x148) * 0.0 +
                                              *(float *)(lVar9 + 0x158),
                                              CONCAT44(fVar13 * *(float *)(lVar9 + 0x134) +
                                                       fVar14 * *(float *)(lVar9 + 0x124) +
                                                       *(float *)(lVar9 + 0x144) * 0.0 +
                                                       *(float *)(lVar9 + 0x154),
                                                       fVar13 * *(float *)(lVar9 + 0x130) +
                                                       fVar14 * *(float *)(lVar9 + 0x120) +
                                                       *(float *)(lVar9 + 0x140) * 0.0 +
                                                       *(float *)(lVar9 + 0x150)))),
                    CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))));
    fVar14 = SUB164(auVar15 >> 0x20,0);
    fVar16 = SUB164(auVar15 >> 0x40,0);
    fVar13 = SUB164(auVar15,0);
    local_98 = CONCAT412(fVar14 * *(float *)(lVar8 + 0xbc) + fVar13 * *(float *)(lVar8 + 0xac) +
                         fVar16 * *(float *)(lVar8 + 0xcc) + *(float *)(lVar8 + 0xdc),
                         CONCAT48(fVar14 * *(float *)(lVar8 + 0xb8) +
                                  fVar13 * *(float *)(lVar8 + 0xa8) + fVar16 * *(float *)(lVar8 + 200)
                                  + *(float *)(lVar8 + 0xd8),
                                  CONCAT44(fVar14 * *(float *)(lVar8 + 0xb4) +
                                           fVar13 * *(float *)(lVar8 + 0xa4) +
                                           fVar16 * *(float *)(lVar8 + 0xc4) +
                                           *(float *)(lVar8 + 0xd4),
                                           fVar14 * *(float *)(lVar8 + 0xb0) +
                                           fVar13 * *(float *)(lVar8 + 0xa0) +
                                           fVar16 * *(float *)(lVar8 + 0xc0) +
                                           *(float *)(lVar8 + 0xd0))));
    lVar9 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar9 == 0) {
        lVar9 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar8 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar8 == 0) {
        lVar8 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    plVar10 = (longlong *)0x0;
    local_88 = 0x1009;
    local_84 = 0x6002;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_res10 = 0x3f80000000000000;
    fVar14 = (((float)*param_2 - (float)(ulonglong)*puVar3) / (float)(ulonglong)puVar3[2]) * 2.0 - 1.0
            ;
    fVar13 = 1.0 - (((float)param_2[1] - (float)(ulonglong)puVar3[1]) / (float)(ulonglong)puVar3[3]) *
                   2.0;
    fVar16 = fVar13 * *(float *)(lVar9 + 0x13c) + fVar14 * *(float *)(lVar9 + 300) +
             *(float *)(lVar9 + 0x14c) * 0.0 + *(float *)(lVar9 + 0x15c);
    auVar15 = divps(CONCAT412(fVar16,CONCAT48(fVar13 * *(float *)(lVar9 + 0x138) +
                                              fVar14 * *(float *)(lVar9 + 0x128) +
                                              *(float *)(lVar9 + 0x148) * 0.0 +
                                              *(float *)(lVar9 + 0x158),
                                              CONCAT44(fVar13 * *(float *)(lVar9 + 0x134) +
                                                       fVar14 * *(float *)(lVar9 + 0x124) +
                                                       *(float *)(lVar9 + 0x144) * 0.0 +
                                                       *(float *)(lVar9 + 0x154),
                                                       fVar13 * *(float *)(lVar9 + 0x130) +
                                                       fVar14 * *(float *)(lVar9 + 0x120) +
                                                       *(float *)(lVar9 + 0x140) * 0.0 +
                                                       *(float *)(lVar9 + 0x150)))),
                    CONCAT412(fVar16,CONCAT48(fVar16,CONCAT44(fVar16,fVar16))));
    fVar14 = SUB164(auVar15 >> 0x20,0);
    fVar16 = SUB164(auVar15 >> 0x40,0);
    fVar13 = SUB164(auVar15,0);
    local_res8 = (longlong *)0x0;
    local_a8 = CONCAT412(fVar14 * *(float *)(lVar8 + 0xbc) + fVar13 * *(float *)(lVar8 + 0xac) +
                         fVar16 * *(float *)(lVar8 + 0xcc) + *(float *)(lVar8 + 0xdc),
                         CONCAT48(fVar14 * *(float *)(lVar8 + 0xb8) +
                                  fVar13 * *(float *)(lVar8 + 0xa8) + fVar16 * *(float *)(lVar8 + 200)
                                  + *(float *)(lVar8 + 0xd8),
                                  CONCAT44(fVar14 * *(float *)(lVar8 + 0xb4) +
                                           fVar13 * *(float *)(lVar8 + 0xa4) +
                                           fVar16 * *(float *)(lVar8 + 0xc4) +
                                           *(float *)(lVar8 + 0xd4),
                                           fVar14 * *(float *)(lVar8 + 0xb0) +
                                           fVar13 * *(float *)(lVar8 + 0xa0) +
                                           fVar16 * *(float *)(lVar8 + 0xc0) +
                                           *(float *)(lVar8 + 0xd0))));
    iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x1b0))
            (*(longlong **)(DAT_140c65898 + 0x7248),local_98,local_a8,&local_res10,
             &local_res8,&local_88);
    if (-1 < iVar2) {
        uVar4 = (**(code **)(*local_res8 + 0x10))();
        uVar11 = 0;
        if (uVar4 != 0) {
            do {
                plVar5 = (longlong *)(**(code **)(*local_res8 + 0x18))(local_res8,uVar11);
                fVar13 = (float)(**(code **)(*plVar5 + 0x10))(plVar5);
                if ((fVar13 < fVar17) &&
                    ((plVar6 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5), plVar6 != param_4 ||
                                                                                  (param_4 == (longlong *)0x0)))) {
                    plVar7 = (longlong *)FUN_1404cb280(uVar1,plVar6);
                    if (plVar7 == (longlong *)0x0) {
                        if (plVar6 != (longlong *)0x0) {
                            iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
                            bVar12 = iVar2 == 0;
                            LAB_1404cac13:
                            if (bVar12) goto LAB_1404cac24;
                        }
                    }
                    else {
                        if ((param_4 != (longlong *)0x0) && ((longlong *)plVar7[0x24] == param_4))
                            goto LAB_1404cac24;
                        local_res10 = 0;
                        iVar2 = (**(code **)(*plVar7 + 0xc0))(plVar7,&local_res10);
                        if (-1 < iVar2) {
                            bVar12 = *(longlong **)(local_res10 + 0x120) == param_4;
                            goto LAB_1404cac13;
                        }
                    }
                    fVar17 = (float)(**(code **)(*plVar5 + 0x10))(plVar5);
                    plVar10 = plVar5;
                }
                LAB_1404cac24:
                lVar9 = local_res18;
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar4);
            if (plVar10 != (longlong *)0x0) {
                lVar8 = (**(code **)(*plVar10 + 0x28))();
                *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar8 + 0xa8);
                lVar8 = (**(code **)(*plVar10 + 0x28))();
                *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(lVar8 + 0xac);
                plVar5 = (longlong *)(**(code **)(*plVar10 + 0x18))(plVar10);
                if ((plVar5 == (longlong *)0x0) ||
                    ((iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5), iVar2 != 1 &&
                                                                     (iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5), iVar2 != 0)))) {
                    lVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
                    lVar8 = FUN_1405b15c0(&DAT_140c7dfb0,*(undefined4 *)(lVar8 + 0xac));
                    if ((lVar8 == 0) || (plVar5 = *(longlong **)(lVar8 + 0x118), plVar5 == (longlong *)0x0)) {
                        lVar8 = FUN_1405b1510(&DAT_140c7dfb0);
                        if (lVar8 != 0) {
                            plVar5 = *(longlong **)(lVar8 + 0x118);
                        }
                        if (plVar5 == (longlong *)0x0) goto LAB_1404cad74;
                    }
                    if (*(longlong **)(lVar9 + 0x40) != plVar5) {
                        if (plVar5 != (longlong *)0x0) {
                            (**(code **)*plVar5)(plVar5);
                        }
                        if (*(longlong **)(lVar9 + 0x40) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(lVar9 + 0x40) + 8))();
                        }
                        *(longlong **)(lVar9 + 0x40) = plVar5;
                    }
                }
                else if (*(longlong **)(lVar9 + 0x40) != plVar5) {
                    (**(code **)*plVar5)(plVar5);
                    if (*(longlong **)(lVar9 + 0x40) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar9 + 0x40) + 8))();
                    }
                    *(longlong **)(lVar9 + 0x40) = plVar5;
                }
                FUN_1404cadc0();
                *(undefined4 *)(lVar9 + 0x50) = 1;
            }
        }
    }
    LAB_1404cad74:
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404cadc0(undefined8 param_1,longlong *param_2,float *param_3,float *param_4,
                   longlong *param_5,float *param_6)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float *pfVar4;
    longlong lVar5;
    longlong *plVar6;
    float extraout_XMM0_Da;
    uint extraout_XMM0_Da_00;
    uint extraout_XMM0_Da_01;
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    undefined auVar10 [16];
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    pfVar4 = (float *)(**(code **)(*param_2 + 0x28))(param_2);
    (**(code **)(*param_2 + 0x10))(param_2);
    fVar8 = *param_4;
    fVar9 = param_4[1];
    fVar11 = param_4[2];
    fVar12 = *param_3;
    fVar13 = param_3[1];
    fVar14 = param_3[2];
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    param_6[0xb] = 0.0;
    param_6[7] = 0.0;
    param_6[3] = 0.0;
    param_6[0xf] = 1.0;
    param_6[0xc] = (fVar8 - fVar12) * extraout_XMM0_Da + fVar1;
    param_6[0xd] = (fVar9 - fVar13) * extraout_XMM0_Da + fVar2;
    param_6[0xe] = (fVar11 - fVar14) * extraout_XMM0_Da + fVar3;
    fVar8 = _DAT_140c77870;
    fVar9 = fRam0000000140c77874;
    fVar11 = fRam0000000140c77878;
    if (param_5 != (longlong *)0x0) {
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar11 = pfVar4[2];
    }
    param_6[4] = fVar8;
    param_6[5] = fVar9;
    param_6[6] = fVar11;
    if ((param_5 == (longlong *)0x0) ||
        (lVar5 = (**(code **)(*param_5 + 0x38))(param_5),
                0.7071068 <=
                (float)((uint)(*(float *)(lVar5 + 0x10) * *pfVar4 + *(float *)(lVar5 + 0x14) * pfVar4[1] +
                               *(float *)(lVar5 + 0x18) * pfVar4[2]) & 0x7fffffff))) {
        plVar6 = *(longlong **)(DAT_140c65898 + 0x71a8);
        if (plVar6 == (longlong *)0x0) {
            plVar6 = *(longlong **)(DAT_140c65898 + 0x71a0);
        }
        (**(code **)(*plVar6 + 8))();
        FUN_1408fe3d0();
        fVar8 = (float)(extraout_XMM0_Da_00 ^ 0x80000000);
        FUN_1408fc950();
        fVar11 = param_6[6] * 0.0 - param_6[5] * (float)(extraout_XMM0_Da_01 ^ 0x80000000);
        fVar12 = param_6[4] * (float)(extraout_XMM0_Da_01 ^ 0x80000000) - param_6[6] * fVar8;
        fVar13 = param_6[5] * fVar8 - param_6[4] * 0.0;
        fVar14 = param_6[7] * 0.0 - param_6[7] * 0.0;
        fVar8 = fVar12 * fVar12;
        fVar9 = fVar11 * fVar11 + fVar8 + fVar13 * fVar13;
        auVar7 = rsqrtss(CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))),
                         CONCAT124(SUB1612(CONCAT412(fVar14 * fVar14,
                                                     CONCAT48(fVar13 * fVar13,
                                                              CONCAT44(fVar8,fVar11 * fVar11))) >> 0x20,
                                           0),fVar9));
        fVar8 = SUB164(auVar7,0);
        fVar8 = (3.0 - fVar9 * fVar8 * fVar8) * 0.5 * fVar8;
        if (fVar8 <= 0.0) {
            fVar8 = 0.0;
        }
        *param_6 = fVar8 * fVar11;
        param_6[1] = fVar8 * fVar12;
        param_6[2] = fVar8 * fVar13;
    }
    else {
        lVar5 = (**(code **)(*param_5 + 0x38))(param_5);
        fVar11 = param_6[6] * *(float *)(lVar5 + 0x14) - param_6[5] * *(float *)(lVar5 + 0x18);
        fVar12 = param_6[4] * *(float *)(lVar5 + 0x18) - param_6[6] * *(float *)(lVar5 + 0x10);
        fVar13 = param_6[5] * *(float *)(lVar5 + 0x10) - param_6[4] * *(float *)(lVar5 + 0x14);
        fVar14 = param_6[7] * *(float *)(lVar5 + 0x1c) - param_6[7] * *(float *)(lVar5 + 0x1c);
        fVar8 = fVar12 * fVar12;
        fVar9 = fVar11 * fVar11 + fVar8 + fVar13 * fVar13;
        auVar7 = rsqrtss(CONCAT412(fVar8,CONCAT48(fVar8,CONCAT44(fVar8,fVar8))),
                         CONCAT124(SUB1612(CONCAT412(fVar14 * fVar14,
                                                     CONCAT48(fVar13 * fVar13,
                                                              CONCAT44(fVar8,fVar11 * fVar11))) >> 0x20,
                                           0),fVar9));
        fVar8 = SUB164(auVar7,0);
        fVar8 = (3.0 - fVar9 * fVar8 * fVar8) * 0.5 * fVar8;
        if (fVar8 <= 0.0) {
            fVar8 = 0.0;
        }
        *param_6 = fVar8 * fVar11;
        param_6[1] = fVar8 * fVar12;
        param_6[2] = fVar8 * fVar13;
        fVar9 = fRam0000000140c77868;
        fVar8 = fRam0000000140c77864;
        auVar10 = ZEXT416((uint)(*param_6 * *param_6)) & (undefined  [16])0xffffffffffffffff;
        auVar7 = ZEXT416((uint)(param_6[2] * param_6[2])) & (undefined  [16])0xffffffffffffffff;
        auVar7 = sqrtps(auVar7,CONCAT124(SUB1612(auVar10 >> 0x20,0),
                                         SUB164(auVar10,0) + param_6[1] * param_6[1] + SUB164(auVar7,0))
        );
        if (SUB164(auVar7,0) == 0.0) {
            *param_6 = _DAT_140c77860;
            param_6[1] = fVar8;
            param_6[2] = fVar9;
        }
    }
    param_6[8] = param_6[6] * param_6[1] - param_6[5] * param_6[2];
    param_6[9] = param_6[4] * param_6[2] - param_6[6] * *param_6;
    param_6[10] = param_6[5] * *param_6 - param_6[4] * param_6[1];
    return;
}



undefined8 *
FUN_1404cb140(undefined8 param_1,undefined8 *param_2,longlong param_3,ulonglong *param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined4 local_38;
    undefined4 uStack52;
    ulonglong local_30;
    undefined8 *local_28;
    longlong local_20;
    ulonglong local_18;

    uVar6 = 0;
    local_38 = 0;
    local_30 = 0;
    *param_4 = 0;
    lVar2 = DAT_140c659f8;
    uVar7 = uVar6;
    if (param_3 != 0) {
        local_28 = (undefined8 *)&local_38;
        local_20 = param_3;
        local_18 = 0;
        uVar5 = uVar6;
        if (*(longlong *)(DAT_140c659f8 + 0x28) != 0) {
            do {
                lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + uVar6 * 8);
                uVar7 = local_30;
                uVar5 = local_18;
                while (local_30 = uVar7, local_18 = uVar5, lVar3 != 0) {
                    lVar1 = *(longlong *)(lVar3 + 8);
                    iVar4 = FUN_1404c8580(lVar3 + 0x18,&local_28);
                    uVar5 = local_18;
                    uVar7 = local_30;
                    lVar3 = lVar1;
                    if (iVar4 == 0) goto LAB_1404cb1eb;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(ulonglong *)(lVar2 + 0x28));
        }
        LAB_1404cb1eb:
        lVar2 = local_28[1];
        *param_4 = uVar5;
        lVar3 = DAT_140c7dfe0;
        if ((lVar2 != 0) || (uVar5 != 0)) {
            *param_2 = *local_28;
            param_2[1] = local_28[1];
            return param_2;
        }
        if ((DAT_140c7dfe0 != 0) &&
            (uVar6 = *(ulonglong *)(DAT_140c7dfe0 + 0x118), *param_4 = uVar6, uVar6 != 0)) {
            *param_2 = *(undefined8 *)(lVar3 + 8);
            param_2[1] = *(undefined8 *)(lVar3 + 0x10);
            return param_2;
        }
    }
    *param_2 = CONCAT44(uStack52,local_38);
    param_2[1] = uVar7;
    return param_2;
}



undefined8 FUN_1404cb280(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong local_18;
    undefined8 local_10;

    uVar4 = 0;
    local_10 = 0;
    if ((param_2 != 0) && (local_18 = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + uVar4 * 8);
            while (lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                iVar3 = FUN_1404c86b0(lVar2 + 0x18,&local_18);
                lVar2 = lVar1;
                if (iVar3 == 0) {
                    return local_10;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 0x28));
        return local_10;
    }
    return 0;
}



void FUN_1404cb310(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    for (lVar1 = *(longlong *)(DAT_140c659f8 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
        if ((*(int *)(lVar1 + 0x14) == param_2) &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x10),
                    lVar4 != *(longlong *)(lVar1 + 0x58))) {
            do {
                if (*(longlong *)(lVar4 + 0x28) != 0) {
                    FUN_1404c6a80();
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
            } while (lVar4 != *(longlong *)(lVar1 + 0x58));
        }
    }
    return;
}



longlong FUN_1404cb3d0(longlong param_1,ulonglong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8 [2];
    longlong local_res18 [2];
    ulonglong local_18;
    undefined8 local_10;

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
        local_18 = *param_2;
        local_10 = 0;
        FUN_1400edd00(param_1,local_res18,local_res8,&local_18);
        local_res8[0] = local_res18[0];
    }
    return local_res8[0] + 0x28;
}



ulonglong * FUN_1404cb460(longlong param_1,undefined8 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;

    uVar3 = (**(code **)(param_1 + 0x18))(param_2);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x10) + (uVar3 % *(ulonglong *)(param_1 + 8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return (ulonglong *)0x0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x20))(param_2,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    return puVar1 + 4;
}



undefined8 FUN_1404cb4d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            while (lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                iVar3 = FUN_1404c87e0(lVar2 + 0x20,0);
                lVar2 = lVar1;
                if (iVar3 == 0) {
                    return 0;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



undefined8 * FUN_1404cb550(undefined8 *param_1)

{
    undefined auVar1 [16];
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    *param_1 = 0;
    uVar4 = 8;
    uVar2 = FUN_1401a40c0();
    param_1[1] = uVar2;
    auVar1 = ZEXT816(uVar4 & 0xffffffff) * ZEXT816(uVar2);
    uVar3 = SUB168(auVar1,0);
    if (SUB168(auVar1 >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    uVar3 = FUN_14018b280(uVar3,0);
    param_1[2] = uVar3;
    FUN_1407e4830(uVar3,0,param_1[1] << 3);
    param_1[3] = &LAB_1404bc720;
    param_1[4] = &LAB_1404bc740;
    return param_1;
}



void FUN_1404cb5c0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad18,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404cb686. Too many branches
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



void FUN_1404cb6c0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad20,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404cb786. Too many branches
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



longlong FUN_1404cb7c0(longlong param_1,uint *param_2)

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
    FUN_1404cb9b0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1404cb8b0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad1c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404cb976. Too many branches
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



void FUN_1404cb9b0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1404cb8b0(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



undefined8 FUN_1404cbaf0(void)

{
    int iVar1;
    longlong lVar2;
    undefined *puVar3;

    if (DAT_140c65a00 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x90,0);
    if (lVar2 == 0) {
        DAT_140c65a00 = 0;
    }
    else {
        puVar3 = (undefined *)FUN_14018b280(0x30);
        DAT_140c65a00 = lVar2;
        *(undefined **)(lVar2 + 8) = puVar3;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *puVar3 = 0;
        *(undefined8 *)(*(longlong *)(lVar2 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10) = *(longlong *)(lVar2 + 8);
        *(longlong *)(*(longlong *)(lVar2 + 8) + 0x18) = *(longlong *)(lVar2 + 8);
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x68) = 0;
        *(undefined8 *)(lVar2 + 0x70) = 0;
        *(undefined4 *)(lVar2 + 0x40) = 0x544e5645;
        *(undefined4 *)(lVar2 + 0x84) = 0;
    }
    iVar1 = FUN_1404cbc60();
    if (iVar1 < 0) {
        FUN_1404cbed0();
        if (DAT_140c65a00 != 0) {
            FUN_1404cbbe0();
        }
        DAT_140c65a00 = 0;
        return 0x80004005;
    }
    return 0;
}



longlong FUN_1404cbbe0(longlong param_1)

{
    FUN_140195d70(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    }
    if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_14018b900();
    }
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    FUN_14018b900(param_1,0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404cbc60(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    longlong local_res8;
    longlong local_res10;
    undefined4 local_38 [2];
    ulonglong local_30;
    undefined local_28 [16];

    lVar2 = DAT_140c65a00;
    uVar13 = 0;
    uVar4 = 0;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        uVar3 = uVar4;
        if ((_DAT_140c63cf0 == 0) && (iVar5 = FUN_140201d80(), -1 < iVar5)) {
            uVar3 = (**(code **)(*DAT_140c63ba8 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_GossipSet_140a6a590,DAT_140c63858);
    }
    uVar15 = uVar13;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63cf0 == 0) && (iVar5 = FUN_140201d80(), -1 < iVar5)) {
                    puVar6 = (undefined4 *)(**(code **)(*DAT_140c63ba8 + 0x20))(DAT_140c63ba8,uVar15);
                    goto LAB_1404cbd18;
                }
            }
            else {
                puVar6 = (undefined4 *)(*DAT_140c63848)(&PTR_u_GossipSet_140a6a590,uVar15,DAT_140c63858);
                LAB_1404cbd18:
                if (puVar6 != (undefined4 *)0x0) {
                    uVar7 = FUN_14018b280(0x98,0);
                    local_30 = uVar13;
                    if (uVar7 != 0) {
                        *(undefined8 *)(uVar7 + 8) = 0;
                        *(undefined8 *)(uVar7 + 0x10) = 0;
                        *(undefined8 *)(uVar7 + 0x18) = 0;
                        *(undefined8 *)(uVar7 + 0x28) = 0;
                        *(undefined8 *)(uVar7 + 0x30) = 0;
                        *(undefined8 *)(uVar7 + 0x38) = 0;
                        *(undefined4 *)(uVar7 + 0x40) = 0;
                        *(undefined4 **)(uVar7 + 0x48) = puVar6;
                        *(undefined8 *)(uVar7 + 0x60) = 0;
                        *(undefined8 *)(uVar7 + 0x68) = 0;
                        *(undefined8 *)(uVar7 + 0x78) = 0;
                        *(undefined8 *)(uVar7 + 0x80) = 0;
                        *(undefined4 *)(uVar7 + 0x50) = 0x544e5645;
                        *(undefined4 *)(uVar7 + 0x94) = 0;
                        local_30 = uVar7;
                    }
                    local_38[0] = *puVar6;
                    FUN_140055f80(lVar2,local_28,local_38);
                }
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
        } while (uVar14 < uVar3);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64744 == 0) && (iVar5 = FUN_140201940(), -1 < iVar5)) {
            uVar4 = (**(code **)(*DAT_140c63ed8 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_GossipEntry_140a6a558,DAT_140c63858);
    }
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64744 == 0) && (iVar5 = FUN_140201940(), -1 < iVar5)) {
                    lVar8 = (**(code **)(*DAT_140c63ed8 + 0x20))(DAT_140c63ed8,uVar13);
                    goto LAB_1404cbe45;
                }
            }
            else {
                lVar8 = (*DAT_140c63848)(&PTR_u_GossipEntry_140a6a558,uVar13,DAT_140c63858);
                LAB_1404cbe45:
                if (lVar8 != 0) {
                    lVar1 = *(longlong *)(lVar2 + 8);
                    lVar11 = lVar1;
                    if (*(longlong *)(lVar1 + 8) != 0) {
                        lVar9 = *(longlong *)(lVar1 + 8);
                        do {
                            if (*(uint *)(lVar9 + 0x20) < *(uint *)(lVar8 + 4)) {
                                lVar10 = *(longlong *)(lVar9 + 0x18);
                            }
                            else {
                                lVar10 = *(longlong *)(lVar9 + 0x10);
                                lVar11 = lVar9;
                            }
                            lVar9 = lVar10;
                        } while (lVar10 != 0);
                    }
                    if ((lVar11 == lVar1) || (*(uint *)(lVar8 + 4) < *(uint *)(lVar11 + 0x20))) {
                        local_res10 = lVar1;
                        plVar12 = &local_res10;
                    }
                    else {
                        local_res8 = lVar11;
                        plVar12 = &local_res8;
                    }
                    if (*plVar12 != lVar1) {
                        FUN_140722c90(*(undefined8 *)(*plVar12 + 0x28));
                    }
                }
            }
            uVar3 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar3;
        } while (uVar3 < uVar4);
    }
    return 0;
}



void FUN_1404cbed0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar4 = DAT_140c65a00;
    lVar6 = *(longlong *)(*(longlong *)(DAT_140c65a00 + 8) + 0x10);
    if (lVar6 != *(longlong *)(DAT_140c65a00 + 8)) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            if (lVar5 != 0) {
                FUN_140195d70(lVar5 + 0x50);
                *(undefined4 *)(lVar5 + 0x50) = 0;
                if (*(undefined8 **)(lVar5 + 0x60) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 0x60) = *(undefined8 *)(lVar5 + 0x68);
                }
                if (*(undefined8 **)(lVar5 + 0x68) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar5 + 0x68) = *(undefined8 *)(lVar5 + 0x60);
                }
                *(undefined8 *)(lVar5 + 0x60) = 0;
                *(undefined8 *)(lVar5 + 0x68) = 0;
                if (*(longlong *)(lVar5 + 0x28) != 0) {
                    FUN_14018b900(*(longlong *)(lVar5 + 0x28),0);
                }
                lVar1 = *(longlong *)(lVar5 + 0x10);
                for (lVar7 = *(longlong *)(lVar5 + 8); lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
                    if (*(longlong *)(lVar7 + 0x10) != 0) {
                        lVar3 = *(longlong *)(*(longlong *)(lVar7 + 8) + 8);
                        while (lVar3 != 0) {
                            FUN_1400083b0(lVar7);
                            lVar2 = *(longlong *)(lVar3 + 0x10);
                            FUN_14018b900(lVar3,0);
                            lVar3 = lVar2;
                        }
                        *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10) = *(longlong *)(lVar7 + 8);
                        *(undefined8 *)(*(longlong *)(lVar7 + 8) + 8) = 0;
                        *(longlong *)(*(longlong *)(lVar7 + 8) + 0x18) = *(longlong *)(lVar7 + 8);
                        *(undefined8 *)(lVar7 + 0x10) = 0;
                    }
                    FUN_14018b900(*(undefined8 *)(lVar7 + 8),0);
                }
                if (*(longlong *)(lVar5 + 8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar5 + 8),0);
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
                for (lVar1 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar5 = lVar1;
                }
            }
        } while (lVar6 != *(longlong *)(lVar4 + 8));
    }
    FUN_140008410(lVar4);
    return;
}



undefined8 FUN_1404cc070(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c65a00 + 8);
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



void FUN_1404cc0d0(void)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    double dVar4;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    local_20 = DAT_140c65a00;
    lVar3 = *(longlong *)(DAT_140c65a00 + 0x28);
    lVar1 = *(longlong *)(DAT_140c65a00 + 0x30);
    if (lVar3 != lVar1) {
        dVar4 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        if (*(longlong *)
                (*(longlong *)(local_20 + 0x28) +
                 (longlong)(int)(dVar4 * ((double)((int)(lVar1 - lVar3 >> 3) + -1) + 1.0)) * 8) != 0) {
            FUN_14047a1f0();
        }
        lVar3 = *(longlong *)(local_20 + 0x30);
        lVar1 = *(longlong *)(local_20 + 0x28);
        FUN_1407db590(lVar1,lVar3,0);
        uVar2 = DAT_140dc31a0;
        *(longlong *)(local_20 + 0x30) = *(longlong *)(local_20 + 0x30) + (lVar3 - lVar1 >> 3) * -8;
        if ((uVar2 & 1) == 0) {
            DAT_140dc31a0 = uVar2 | 1;
            lVar3 = FUN_140200220(0x1f6);
            if (lVar3 == 0) {
                DAT_140dc31a4 = 0;
            }
            else {
                DAT_140dc31a4 = *(undefined4 *)(lVar3 + 4);
            }
        }
        local_28[0] = 0;
        local_18 = FUN_140001b70;
        local_10 = 0;
        FUN_140195960(local_20 + 0x40,DAT_140dc31a4,local_28,4);
    }
    return;
}



int FUN_1404cc1f0(void)

{
    int iVar1;
    longlong *plVar2;
    undefined *puVar3;

    if (DAT_140c65a08 != (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_14018b280(0x108,0);
    if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        *plVar2 = (longlong)&PTR_LAB_140b78380;
        puVar3 = (undefined *)FUN_14018b280(0x30);
        plVar2[3] = 0;
        plVar2[2] = (longlong)puVar3;
        *puVar3 = 0;
        *(undefined8 *)(plVar2[2] + 8) = 0;
        *(longlong *)(plVar2[2] + 0x10) = plVar2[2];
        *(longlong *)(plVar2[2] + 0x18) = plVar2[2];
        *plVar2 = (longlong)&PTR_FUN_140b68ee0;
        FUN_1407e4830(plVar2 + 5,0,0xe0);
    }
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (iVar1 < 0) {
        (**(code **)*plVar2)(plVar2,1);
        return iVar1;
    }
    DAT_140c65a08 = plVar2;
    return 0;
}



undefined8 FUN_1404cc2d0(undefined8 param_1,ulonglong param_2)

{
    FUN_1404cc310();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001404cc443)
// WARNING: Removing unreachable block (ram,0x0001404cc450)
// WARNING: Removing unreachable block (ram,0x0001404cc472)

void FUN_1404cc310(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;

    plVar4 = param_1 + 5;
    lVar5 = 0x1c;
    *param_1 = &PTR_FUN_140b68ee0;
    do {
        puVar1 = (undefined8 *)*plVar4;
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
        *plVar4 = 0;
        plVar4 = plVar4 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *param_1 = &PTR_LAB_140b78380;
    lVar5 = *(longlong *)(param_1[2] + 0x10);
    if (lVar5 != param_1[2]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar5 + 0x28),0);
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
        } while (lVar5 != param_1[2]);
    }
    if (param_1[3] != 0) {
        lVar5 = *(longlong *)(param_1[2] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
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

undefined8 FUN_1404cc4b0(longlong param_1)

{
    ulonglong uVar1;
    char *pcVar2;
    char *pcVar3;
    uint uVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    char *pcVar11;
    char *pcVar12;
    undefined8 *puVar13;
    uint uVar14;
    uint **ppuVar15;
    undefined8 *puVar16;
    bool bVar17;
    undefined4 uStack36;

    puVar16 = (undefined8 *)0x0;
    uVar4 = 0;
    puVar13 = puVar16;
    ppuVar15 = (uint **)(param_1 + 0x28);
    do {
        if (DAT_140c63848 == (code *)0x0) {
            puVar6 = puVar16;
            if (_DAT_140c64470 == 0) {
                iVar5 = FUN_1401eefc0();
                if (iVar5 < 0) {
                    puVar6 = (undefined8 *)0x0;
                }
                else {
                    puVar6 = (undefined8 *)(**(code **)(*DAT_140c645b8 + 0x20))(DAT_140c645b8,puVar13);
                }
            }
        }
        else {
            puVar6 = (undefined8 *)(*DAT_140c63848)(&PTR_u_CCStates_140a69608,puVar13);
        }
        puVar7 = (undefined8 *)FUN_14018b280(0x38);
        puVar10 = puVar16;
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 0x1c;
            *(uint *)(puVar7 + 2) = 0;
            *(undefined8 *)((longlong)puVar7 + 0x14) = 0x3f800000;
            *puVar7 = &PTR_FUN_140b68f20;
            puVar7[4] = 0;
            *(uint *)(puVar7 + 5) = 0;
            *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
            *(uint *)((longlong)puVar7 + 0x34) = 0;
            puVar10 = puVar7;
        }
        *(uint *)(puVar10 + 1) = (uint)puVar13;
        *(uint *)(puVar10 + 2) = *(uint *)((longlong)puVar6 + 4);
        *(uint *)((longlong)puVar10 + 0xc) = *(uint *)(puVar6 + 1);
        *(uint *)(puVar10 + 3) = *(uint *)((longlong)puVar6 + 0x24);
        uVar1 = puVar6[2];
        puVar7 = puVar16;
        if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
            puVar7 = (undefined8 *)(uVar1 + DAT_140c3fe68);
        }
        puVar8 = (undefined8 *)&DAT_1409f0a4c;
        if (puVar7 != (undefined8 *)0x0) {
            puVar8 = puVar7;
        }
        uVar14 = (uint)puVar13 + 1;
        puVar13 = (undefined8 *)(ulonglong)uVar14;
        puVar10[4] = puVar8;
        *(uint *)(puVar10 + 5) = *(uint *)((longlong)puVar6 + 0xc);
        *(uint *)((longlong)puVar10 + 0x2c) = *(uint *)(puVar6 + 3);
        *(uint *)(puVar10 + 6) = *(uint *)((longlong)puVar6 + 0x1c);
        *(uint *)((longlong)puVar10 + 0x34) = *(uint *)(puVar6 + 4);
        *ppuVar15 = (uint *)puVar10;
        ppuVar15 = ppuVar15 + 1;
    } while (uVar14 < 0x1c);
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c643dc == 0) && (iVar5 = FUN_1401ee740(), -1 < iVar5)) {
            uVar4 = (**(code **)(*DAT_140c64090 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_CCStateAdditionalData_140a69598);
    }
    puVar13 = puVar16;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar6 = puVar16;
                if (_DAT_140c643dc == 0) {
                    iVar5 = FUN_1401ee740();
                    if (iVar5 < 0) {
                        puVar6 = (undefined8 *)0x0;
                    }
                    else {
                        puVar6 = (undefined8 *)(**(code **)(*DAT_140c64090 + 0x20))();
                    }
                }
            }
            else {
                puVar6 = (undefined8 *)(*DAT_140c63848)(&PTR_u_CCStateAdditionalData_140a69598);
            }
            if (*(uint *)((longlong)puVar6 + 4) < 0x1c) {
                puVar7 = (undefined8 *)FUN_14018b280(0x30);
                puVar10 = puVar16;
                if (puVar7 != (undefined8 *)0x0) {
                    FUN_1407e4830(puVar7);
                    *(uint *)((longlong)puVar7 + 4) = 0x1c;
                    puVar10 = puVar7;
                }
                *(uint *)puVar10 = *(uint *)puVar6;
                *(uint *)((longlong)puVar10 + 4) = *(uint *)((longlong)puVar6 + 4);
                *(uint *)(puVar10 + 1) = *(uint *)(puVar6 + 1);
                *(uint *)((longlong)puVar10 + 0x1c) = *(uint *)((longlong)puVar6 + 0x1c);
                *(uint *)((longlong)puVar10 + 0xc) = *(uint *)((longlong)puVar6 + 0xc);
                *(uint *)(puVar10 + 4) = *(uint *)(puVar6 + 4);
                *(uint *)(puVar10 + 2) = *(uint *)(puVar6 + 2);
                *(uint *)((longlong)puVar10 + 0x24) = *(uint *)((longlong)puVar6 + 0x24);
                *(uint *)((longlong)puVar10 + 0x14) = *(uint *)((longlong)puVar6 + 0x14);
                *(uint *)(puVar10 + 5) = *(uint *)(puVar6 + 5);
                *(uint *)(puVar10 + 3) = *(uint *)(puVar6 + 3);
                *(uint *)((longlong)puVar10 + 0x2c) = *(uint *)((longlong)puVar6 + 0x2c);
                pcVar2 = *(char **)(param_1 + 0x10);
                uVar14 = *(uint *)puVar6;
                bVar17 = true;
                pcVar3 = pcVar2;
                pcVar12 = *(char **)(pcVar2 + 8);
                while (pcVar12 != (char *)0x0) {
                    bVar17 = uVar14 < *(uint *)(pcVar12 + 0x20);
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
                        goto LAB_1404cc7ad;
                    }
                }
                else {
                    LAB_1404cc7ad:
                    if (uVar14 <= *(uint *)(pcVar12 + 0x20)) goto LAB_1404cc85f;
                }
                if ((pcVar3 == pcVar2) || (uVar14 < *(uint *)(pcVar3 + 0x20))) {
                    lVar9 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack36,uVar14);
                        *(undefined8 **)(lVar9 + 0x28) = puVar10;
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar9;
                    pcVar2 = *(char **)(param_1 + 0x10);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar9;
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar9;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar9;
                    }
                }
                else {
                    lVar9 = FUN_14018b280(0x30);
                    if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                        *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack36,uVar14);
                        *(undefined8 **)(lVar9 + 0x28) = puVar10;
                    }
                    *(longlong *)(pcVar3 + 0x18) = lVar9;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 0x10) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = lVar9;
                    }
                }
                *(char **)(lVar9 + 8) = pcVar3;
                *(undefined8 *)(lVar9 + 0x10) = 0;
                *(undefined8 *)(lVar9 + 0x18) = 0;
                FUN_1400081c0();
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
            }
            LAB_1404cc85f:
            uVar14 = (int)puVar13 + 1;
            puVar13 = (undefined8 *)(ulonglong)uVar14;
        } while (uVar14 < uVar4);
    }
    if (DAT_140c63850 == (code *)0x0) {
        if ((_DAT_140c64470 != 0) || (_DAT_140c64470 = 1, DAT_140c645b8 == (longlong *)0x0))
            goto LAB_1404cc8d2;
        (**(code **)(*DAT_140c645b8 + 8))();
        DAT_140c645b8 = (longlong *)0x0;
    }
    else {
        (*DAT_140c63850)(&PTR_u_CCStates_140a69608,DAT_140c63858);
    }
    if (DAT_140c63850 != (code *)0x0) {
        (*DAT_140c63850)(&PTR_u_CCStateAdditionalData_140a69598,DAT_140c63858);
        return 0;
    }
    LAB_1404cc8d2:
    if ((_DAT_140c643dc == 0) && (_DAT_140c643dc = 1, DAT_140c64090 != (longlong *)0x0)) {
        (**(code **)(*DAT_140c64090 + 8))();
        DAT_140c64090 = (longlong *)0x0;
    }
    return 0;
}



undefined8 FUN_1404cc920(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(DAT_140c65a08 + 0x10);
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



int FUN_1404ccaa0(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (DAT_140c65a10 != (longlong *)0x0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x50);
    if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
    }
    else {
        plVar3 = (longlong *)FUN_1404ccb30(lVar2);
    }
    iVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar1 < 0) {
        (**(code **)*plVar3)(plVar3,1);
        return iVar1;
    }
    DAT_140c65a10 = plVar3;
    return 0;
}



undefined8 * FUN_1404ccb30(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b68f28;
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
    *(undefined4 *)(param_1 + 9) = 0x7fffffff;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
    return param_1;
}



void FUN_1404ccc00(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b68f28;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
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
        } while (lVar3 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 5);
    FUN_140008410(param_1 + 5);
    FUN_14018b900(param_1[6],0);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    *param_1 = &PTR_FUN_140b65720;
    return;
}



int FUN_1404cd230(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    ulonglong uVar8;

    lVar3 = FUN_1403d90d0(DAT_140c65898);
    lVar4 = FUN_1403d90d0(DAT_140c65898,param_3);
    if (((lVar3 != 0) && (lVar4 != 0)) &&
        (((*(int *)(lVar3 + 0x80) != 0x14 && (*(int *)(lVar3 + 0x80) != 0x17)) ||
          ((*(int *)(lVar4 + 0x80) != 0x14 && (*(int *)(lVar4 + 0x80) != 0x17)))))) {
        uVar1 = *(uint *)(lVar3 + 0x24);
        uVar7 = *(uint *)(lVar4 + 0x24) & 8;
        if ((DAT_140dc31a8 & 1) == 0) {
            DAT_140dc31a8 = DAT_140dc31a8 | 1;
            lVar5 = FUN_140200220();
            DAT_140dc31ac = 0;
            if (lVar5 != 0) {
                DAT_140dc31ac = *(int *)(lVar5 + 4);
            }
        }
        if ((DAT_140dc31a8 & 2) == 0) {
            DAT_140dc31a8 = DAT_140dc31a8 | 2;
            lVar5 = FUN_140200220();
            DAT_140dc31b0 = 0;
            if (lVar5 != 0) {
                DAT_140dc31b0 = *(int *)(lVar5 + 4);
            }
        }
        uVar8 = (ulonglong)DAT_140dc31a8;
        if ((((*(int *)(lVar3 + 0x80) == 0x14) || (*(int *)(lVar3 + 0x80) == 0x17)) ||
             (*(int *)(lVar4 + 0x80) == 0x14)) || (iVar2 = DAT_140dc31ac, *(int *)(lVar4 + 0x80) == 0x17)
                ) {
            iVar2 = DAT_140dc31b0;
        }
        if ((uVar1 & 8) == 0) {
            if (uVar7 == 0) {
                iVar6 = *(int *)(lVar4 + 0x3c);
                if (iVar6 == 0) {
                    iVar6 = *(int *)(lVar4 + 0x38);
                }
                iVar2 = *(int *)(lVar3 + 0x3c);
                if (iVar2 == 0) {
                    iVar2 = *(int *)(lVar3 + 0x38);
                }
                iVar6 = iVar6 - iVar2;
                if ((param_4 != 0) && (*(longlong *)(lVar4 + 0x18) != 0)) {
                    iVar2 = FUN_14045ba60();
                    iVar6 = iVar6 + iVar2;
                }
                if ((uVar8 & 4) == 0) {
                    DAT_140dc31a8 = (uint)uVar8 | 4;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        uVar8 = (ulonglong)DAT_140dc31a8;
                        DAT_140dc31b4 = -7;
                    }
                    else {
                        DAT_140dc31b4 = *(int *)(lVar3 + 4);
                        uVar8 = (ulonglong)DAT_140dc31a8;
                    }
                }
                if ((uVar8 & 8) == 0) {
                    DAT_140dc31a8 = (uint)uVar8 | 8;
                    lVar3 = FUN_140200220();
                    if (lVar3 == 0) {
                        DAT_140dc31b8 = 7;
                    }
                    else {
                        DAT_140dc31b8 = *(int *)(lVar3 + 4);
                    }
                }
                iVar2 = DAT_140dc31b4;
                if ((DAT_140dc31b4 <= iVar6) && (iVar2 = iVar6, DAT_140dc31b8 < iVar6)) {
                    iVar2 = DAT_140dc31b8;
                }
            }
        }
        else if (uVar7 == 0) {
            iVar2 = -iVar2;
        }
        else {
            iVar2 = 0;
        }
        return iVar2;
    }
    return 0;
}



undefined8 * FUN_1404cd470(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b68f50;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    FUN_1403fb7c0();
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    FUN_1403fb7c0();
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    FUN_1403fb7c0();
    return param_1;
}



undefined8 FUN_1404cd500(undefined8 param_1,ulonglong param_2)

{
    FUN_1404cd540();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404cd540(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b68f50;
    FUN_1404ce030();
    if (param_1[0x17] != 0) {
        FUN_14018b900(param_1[0x17],0);
    }
    FUN_1404ce030(param_1 + 0xf);
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11],0);
    }
    FUN_1404ce030(param_1 + 9);
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb],0);
    }
    if (param_1[6] != 0) {
        FUN_14018b900(param_1[6],0);
    }
    if (param_1[2] != 0) {
        FUN_14018b900(param_1[2],0);
    }
    return;
}



uint FUN_1404cd5e0(longlong param_1)

{
    undefined8 uVar1;
    undefined8 uVar2;
    uint uVar3;

    uVar1 = FUN_14034bdd0(param_1,*(undefined4 *)(param_1 + 0xb0));
    uVar2 = FUN_14034bdd0();
    uVar3 = FUN_14018e2c0(uVar1,uVar2);
    return uVar3 & 0xffffff00 | (uint)((int)uVar3 < 0);
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404cd630(longlong *param_1)

{
    undefined8 *puVar1;
    uint uVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined4 *puVar7;
    ulonglong uVar8;
    uint uVar9;
    undefined4 *puVar10;
    longlong **pplVar11;
    longlong **pplVar12;
    undefined4 *puVar13;
    undefined auStack680 [32];
    undefined8 local_288;
    undefined8 uStack640;
    undefined4 *local_278 [2];
    undefined4 local_268;
    undefined4 uStack612;
    undefined4 uStack608;
    undefined4 uStack604;
    undefined4 local_258 [4];
    undefined8 local_248;
    undefined8 local_240;
    undefined8 local_238;
    undefined local_228 [8];
    undefined local_220 [148];
    undefined4 local_18c [85];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack680;
    if (param_1[6] != param_1[7]) goto LAB_1404cde43;
    puVar13 = (undefined4 *)0x0;
    uVar2 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (DAT_140c649fc == 0) {
            iVar3 = FUN_140209480();
            if (iVar3 < 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = (**(code **)(*DAT_140c640e8 + 0x28))();
            }
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_Item2_140a6abb0,DAT_140c63858);
    }
    puVar7 = puVar13;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar4 = puVar13;
                if (DAT_140c649fc == 0) {
                    iVar3 = FUN_140209480();
                    if (iVar3 < 0) {
                        puVar4 = (undefined4 *)0x0;
                    }
                    else {
                        puVar4 = (undefined4 *)(**(code **)(*DAT_140c640e8 + 0x20))(DAT_140c640e8,puVar7);
                    }
                }
            }
            else {
                puVar4 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Item2_140a6abb0,puVar7,DAT_140c63858);
            }
            local_278[0] = puVar4;
            if ((puVar4 != (undefined4 *)0x0) && (lVar5 = FUN_14034bdd0(), lVar5 != 0)) {
                FUN_1400b52a0(local_220);
                FUN_1407e4830(local_228,0,0x1f0);
                FUN_1407e4830(local_220,0,0x138);
                FUN_1407e4830(local_18c,0,0x90);
                puVar10 = local_18c;
                for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
                    *puVar10 = 0xc5;
                    puVar10 = puVar10 + 1;
                }
                lVar5 = FUN_1400b5df0(DAT_140c658f0,*puVar4,local_228);
                if ((lVar5 != 0) && (iVar3 = (**(code **)(*param_1 + 8))(param_1), iVar3 != 0)) {
                    local_258[0] = puVar4[9];
                    local_248 = 0;
                    local_238 = 0;
                    FUN_1407db590(0,0,0);
                    local_240 = 0;
                    lVar5 = FUN_1404cde70(param_1 + 0x15,local_258);
                    puVar1 = *(undefined8 **)(lVar5 + 0x18);
                    if (puVar1 == *(undefined8 **)(lVar5 + 0x20)) {
                        FUN_14010a1c0(lVar5 + 8,puVar1,local_278);
                        puVar4 = local_278[0];
                    }
                    else {
                        if (puVar1 != (undefined8 *)0x0) {
                            *puVar1 = puVar4;
                        }
                        *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 8;
                    }
                    puVar1 = (undefined8 *)param_1[3];
                    if (puVar1 == (undefined8 *)param_1[4]) {
                        FUN_14010a1c0(param_1 + 1,puVar1,local_278);
                    }
                    else {
                        if (puVar1 != (undefined8 *)0x0) {
                            *puVar1 = puVar4;
                        }
                        param_1[3] = param_1[3] + 8;
                    }
                }
            }
            uVar9 = (int)puVar7 + 1;
            puVar7 = (undefined4 *)(ulonglong)uVar9;
        } while (uVar9 < uVar2);
    }
    FUN_1404ce100(param_1[2],param_1[3]);
    puVar7 = (undefined4 *)(param_1[0x18] - param_1[0x17] >> 3);
    if (puVar7 != (undefined4 *)0x0) {
        plVar6 = (longlong *)param_1[0x17];
        puVar4 = puVar13;
        do {
            if (*plVar6 != 0) {
                local_288 = (longlong **)((longlong *)param_1[0x17])[(longlong)puVar4];
                uStack640 = param_1 + 0x15;
                pplVar12 = local_288;
                goto joined_r0x0001404cd8be;
            }
            puVar4 = (undefined4 *)((longlong)puVar4 + 1);
            plVar6 = plVar6 + 1;
        } while (puVar4 < puVar7);
    }
    goto LAB_1404cda66;
    joined_r0x0001404cdab7:
    if (pplVar12 != (longlong **)0x0) {
        while( true ) {
            pplVar11 = pplVar12;
            if (DAT_140c63840 == (code *)0x0) {
                puVar7 = puVar13;
                if (_DAT_140c63eb4 == 0) {
                    iVar3 = FUN_1402098c0();
                    if (iVar3 < 0) {
                        puVar7 = (undefined4 *)0x0;
                    }
                    else {
                        puVar7 = (undefined4 *)(**(code **)(*DAT_140c64e00 + 0x18))();
                    }
                }
            }
            else {
                puVar7 = (undefined4 *)
                        (*DAT_140c63840)(&PTR_u_Item2Category_140a6abe8,*(undefined4 *)(pplVar11 + 1),
                                         DAT_140c63858);
            }
            local_278[0] = puVar7;
            if ((puVar7 == (undefined4 *)0x0) || (lVar5 = FUN_14034bdd0(), lVar5 == 0)) break;
            FUN_1404ce1f0(pplVar11[3],pplVar11[4]);
            local_258[0] = puVar7[0xc];
            local_248 = 0;
            local_238 = 0;
            FUN_1407db590(0,0,0);
            local_240 = 0;
            lVar5 = FUN_1404cde70(param_1 + 9,local_258);
            puVar1 = *(undefined8 **)(lVar5 + 0x18);
            if (puVar1 == *(undefined8 **)(lVar5 + 0x20)) {
                FUN_14010a1c0();
            }
            else {
                if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = puVar7;
                }
                *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 8;
            }
            local_288 = (longlong **)*pplVar11;
            pplVar12 = local_288;
            if (local_288 == (longlong **)0x0) {
                uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0x12] - param_1[0x11] >> 3)
                        ;
                do {
                    uVar8 = uVar8 + 1;
                    pplVar12 = local_288;
                    if ((ulonglong)(param_1[0x12] - param_1[0x11] >> 3) <= uVar8) goto joined_r0x0001404cdab7;
                    local_288 = *(longlong ***)(param_1[0x11] + uVar8 * 8);
                    pplVar12 = local_288;
                } while (local_288 == (longlong **)0x0);
            }
        }
        pplVar12 = (longlong **)*pplVar11;
        if (pplVar12 == (longlong **)0x0) {
            uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0x12] - param_1[0x11] >> 3);
            do {
                uVar8 = uVar8 + 1;
                if ((ulonglong)(param_1[0x12] - param_1[0x11] >> 3) <= uVar8) break;
                pplVar12 = *(longlong ***)(param_1[0x11] + uVar8 * 8);
            } while (pplVar12 == (longlong **)0x0);
        }
        local_268 = (undefined4)local_288;
        uStack612 = local_288._4_4_;
        uStack608 = (undefined4)uStack640;
        uStack604 = uStack640._4_4_;
        local_288 = pplVar12;
        FUN_1404cdf50(param_1 + 0xf);
        goto joined_r0x0001404cdab7;
    }
    goto LAB_1404cdc56;
    joined_r0x0001404cdca7:
    if (pplVar12 != (longlong **)0x0) {
        while( true ) {
            pplVar11 = pplVar12;
            if (DAT_140c63840 == (code *)0x0) {
                puVar7 = puVar13;
                if (_DAT_140c63a54 == 0) {
                    iVar3 = FUN_140209d00();
                    if (iVar3 < 0) {
                        puVar7 = (undefined4 *)0x0;
                    }
                    else {
                        puVar7 = (undefined4 *)(**(code **)(*DAT_140c65060 + 0x18))();
                    }
                }
            }
            else {
                puVar7 = (undefined4 *)
                        (*DAT_140c63840)(&PTR_u_Item2Family_140a6ac20,*(undefined4 *)(pplVar11 + 1),
                                         DAT_140c63858);
            }
            local_278[0] = puVar7;
            if ((puVar7 == (undefined4 *)0x0) || (lVar5 = FUN_14034bdd0(), lVar5 == 0)) break;
            FUN_1404ce1f0(pplVar11[3],pplVar11[4]);
            puVar1 = (undefined8 *)param_1[7];
            if (puVar1 == (undefined8 *)param_1[8]) {
                FUN_14010a1c0(param_1 + 5,puVar1,local_278);
            }
            else {
                if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = puVar7;
                }
                param_1[7] = param_1[7] + 8;
            }
            local_288 = (longlong **)*pplVar11;
            pplVar12 = local_288;
            if (local_288 == (longlong **)0x0) {
                uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0xc] - param_1[0xb] >> 3);
                do {
                    uVar8 = uVar8 + 1;
                    pplVar12 = local_288;
                    if ((ulonglong)(param_1[0xc] - param_1[0xb] >> 3) <= uVar8) goto joined_r0x0001404cdca7;
                    local_288 = *(longlong ***)(param_1[0xb] + uVar8 * 8);
                    pplVar12 = local_288;
                } while (local_288 == (longlong **)0x0);
            }
        }
        pplVar12 = (longlong **)*pplVar11;
        if (pplVar12 == (longlong **)0x0) {
            uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0xc] - param_1[0xb] >> 3);
            do {
                uVar8 = uVar8 + 1;
                if ((ulonglong)(param_1[0xc] - param_1[0xb] >> 3) <= uVar8) break;
                pplVar12 = *(longlong ***)(param_1[0xb] + uVar8 * 8);
            } while (pplVar12 == (longlong **)0x0);
        }
        local_268 = (undefined4)local_288;
        uStack612 = local_288._4_4_;
        uStack608 = (undefined4)uStack640;
        uStack604 = uStack640._4_4_;
        local_288 = pplVar12;
        FUN_1404cdf50(param_1 + 9);
        goto joined_r0x0001404cdca7;
    }
    goto LAB_1404cde16;
    joined_r0x0001404cd8be:
    if (pplVar12 != (longlong **)0x0) {
        while( true ) {
            pplVar11 = pplVar12;
            if (DAT_140c63840 == (code *)0x0) {
                puVar7 = puVar13;
                if (_DAT_140c650d4 == 0) {
                    iVar3 = FUN_14020a140();
                    if (iVar3 < 0) {
                        puVar7 = (undefined4 *)0x0;
                    }
                    else {
                        puVar7 = (undefined4 *)(**(code **)(*DAT_140c64ac8 + 0x18))();
                    }
                }
            }
            else {
                puVar7 = (undefined4 *)
                        (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58,*(undefined4 *)(pplVar11 + 1),
                                         DAT_140c63858);
            }
            local_278[0] = puVar7;
            if ((puVar7 == (undefined4 *)0x0) || (lVar5 = FUN_14034bdd0(), lVar5 == 0)) break;
            FUN_1404ce100(pplVar11[3],pplVar11[4]);
            local_258[0] = puVar7[8];
            local_248 = 0;
            local_238 = 0;
            FUN_1407db590(0,0,0);
            local_240 = 0;
            lVar5 = FUN_1404cde70(param_1 + 0xf,local_258);
            puVar1 = *(undefined8 **)(lVar5 + 0x18);
            if (puVar1 == *(undefined8 **)(lVar5 + 0x20)) {
                FUN_14010a1c0();
            }
            else {
                if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = puVar7;
                }
                *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 8;
            }
            local_288 = (longlong **)*pplVar11;
            pplVar12 = local_288;
            if (local_288 == (longlong **)0x0) {
                uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0x18] - param_1[0x17] >> 3)
                        ;
                do {
                    uVar8 = uVar8 + 1;
                    pplVar12 = local_288;
                    if ((ulonglong)(param_1[0x18] - param_1[0x17] >> 3) <= uVar8) goto joined_r0x0001404cd8be;
                    local_288 = *(longlong ***)(param_1[0x17] + uVar8 * 8);
                    pplVar12 = local_288;
                } while (local_288 == (longlong **)0x0);
            }
        }
        pplVar12 = (longlong **)*pplVar11;
        if (pplVar12 == (longlong **)0x0) {
            uVar8 = (ulonglong)*(uint *)(pplVar11 + 1) % (ulonglong)(param_1[0x18] - param_1[0x17] >> 3);
            do {
                uVar8 = uVar8 + 1;
                if ((ulonglong)(param_1[0x18] - param_1[0x17] >> 3) <= uVar8) break;
                pplVar12 = *(longlong ***)(param_1[0x17] + uVar8 * 8);
            } while (pplVar12 == (longlong **)0x0);
        }
        local_268 = (undefined4)local_288;
        uStack612 = local_288._4_4_;
        uStack608 = (undefined4)uStack640;
        uStack604 = uStack640._4_4_;
        local_288 = pplVar12;
        FUN_1404cdf50(param_1 + 0x15);
        goto joined_r0x0001404cd8be;
    }
    LAB_1404cda66:
    puVar7 = (undefined4 *)(param_1[0x12] - param_1[0x11] >> 3);
    if (puVar7 != (undefined4 *)0x0) {
        plVar6 = (longlong *)param_1[0x11];
        puVar4 = puVar13;
        do {
            if (*plVar6 != 0) {
                local_288 = (longlong **)((longlong *)param_1[0x11])[(longlong)puVar4];
                uStack640 = param_1 + 0xf;
                pplVar12 = local_288;
                goto joined_r0x0001404cdab7;
            }
            puVar4 = (undefined4 *)((longlong)puVar4 + 1);
            plVar6 = plVar6 + 1;
        } while (puVar4 < puVar7);
    }
    LAB_1404cdc56:
    puVar7 = (undefined4 *)(param_1[0xc] - param_1[0xb] >> 3);
    if (puVar7 != (undefined4 *)0x0) {
        plVar6 = (longlong *)param_1[0xb];
        puVar4 = puVar13;
        do {
            if (*plVar6 != 0) {
                local_288 = (longlong **)((longlong *)param_1[0xb])[(longlong)puVar4];
                uStack640 = param_1 + 9;
                pplVar12 = local_288;
                goto joined_r0x0001404cdca7;
            }
            puVar4 = (undefined4 *)((longlong)puVar4 + 1);
            plVar6 = plVar6 + 1;
        } while (puVar4 < puVar7);
    }
    LAB_1404cde16:
    FUN_1404ce1f0(param_1[6],param_1[7]);
    LAB_1404cde43:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack680);
    return;
}



undefined8 * FUN_1404cde70(longlong param_1,uint *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    FUN_14043f640();
    lVar1 = ((ulonglong)*param_2 %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    puVar3 = puVar2;
    while( true ) {
        if (puVar3 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)FUN_14018b280();
            puVar3 = puVar4 + 1;
            *puVar4 = 0;
            if (puVar3 != (undefined8 *)0x0) {
                *(uint *)puVar3 = *param_2;
                FUN_1401ddfd0(puVar4 + 2,param_2 + 2);
            }
            *puVar4 = puVar2;
            *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10)) = puVar4;
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
            return puVar3;
        }
        if (*(uint *)(puVar3 + 1) == *param_2) break;
        puVar3 = (undefined8 *)*puVar3;
    }
    return puVar3 + 1;
}



void FUN_1404cdf50(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
        uVar3 = (ulonglong)*(uint *)(puVar1 + 1) %
                (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
        if (puVar5 == puVar1) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) = *puVar5;
            if (puVar5[3] != 0) {
                FUN_14018b900(puVar5[3],0);
            }
            FUN_14018b900(puVar5,0);
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
            return;
        }
        puVar2 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
            while (puVar4 = puVar2, puVar4 != puVar1) {
                puVar2 = (undefined8 *)*puVar4;
                puVar5 = puVar4;
                if ((undefined8 *)*puVar4 == (undefined8 *)0x0) {
                    return;
                }
            }
            *puVar5 = *puVar4;
            if (puVar4[3] != 0) {
                FUN_14018b900(puVar4[3],0);
            }
            FUN_14018b900(puVar4,0);
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        }
    }
    return;
}



void FUN_1404ce030(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3 != 0) {
        do {
            puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (puVar2 != (undefined8 *)0x0) {
                puVar1 = (undefined8 *)*puVar2;
                if (puVar2[3] != 0) {
                    FUN_14018b900(puVar2[3],0);
                }
                FUN_14018b900(puVar2,0);
                puVar2 = puVar1;
            }
            uVar3 = uVar3 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + uVar3 * 8) = 0;
        } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)
                );
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



void FUN_1404ce100(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 3;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_14043a3d0();
        if (lVar2 < 0x11) {
            FUN_14043a560(param_1,param_2,FUN_1404cd5e0);
        }
        else {
            FUN_14043a560(param_1,param_1 + 0x80,FUN_1404cd5e0);
            FUN_14043a780(param_1 + 0x80,param_2);
        }
    }
    return;
}



uint FUN_1404ce1b0(longlong param_1)

{
    undefined8 uVar1;
    undefined8 uVar2;
    uint uVar3;

    uVar1 = FUN_14034bdd0(param_1,*(undefined4 *)(param_1 + 4));
    uVar2 = FUN_14034bdd0();
    uVar3 = FUN_14018e2c0(uVar1,uVar2);
    return uVar3 & 0xffffff00 | (uint)((int)uVar3 < 0);
}



void FUN_1404ce1f0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 3;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_14043a3d0();
        if (lVar2 < 0x11) {
            FUN_14043a560(param_1,param_2,FUN_1404ce1b0);
        }
        else {
            FUN_14043a560(param_1,param_1 + 0x80,FUN_1404ce1b0);
            FUN_14043a780(param_1 + 0x80,param_2);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404ce2a0(undefined8 param_1)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar5 = 0;
    uVar6 = uVar5;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c65364 != 0) || (iVar2 = FUN_140224aa0(), iVar2 < 0)) {
                LAB_1404ce392:
                do {
                    if (DAT_140c63838 == (code *)0x0) {
                        if ((_DAT_140c63c24 != 0) || (iVar2 = FUN_140221360(), iVar2 < 0)) {
                            return 0;
                        }
                        uVar1 = (**(code **)(*DAT_140c640a0 + 0x28))();
                    }
                    else {
                        uVar1 = (*DAT_140c63838)(&PTR_u_PathScientistScanBotProfile_140a6bf60,DAT_140c63858);
                    }
                    uVar4 = (uint)uVar5;
                    if (uVar1 <= uVar4) {
                        return 0;
                    }
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c63c24 == 0) && (iVar2 = FUN_140221360(), -1 < iVar2)) {
                            (**(code **)(*DAT_140c640a0 + 0x20))(DAT_140c640a0,uVar5);
                        }
                        uVar5 = (ulonglong)(uVar4 + 1);
                    }
                    else {
                        (*DAT_140c63848)(&PTR_u_PathScientistScanBotProfile_140a6bf60,uVar5,DAT_140c63858);
                        uVar5 = (ulonglong)(uVar4 + 1);
                    }
                } while( true );
            }
            uVar1 = (**(code **)(*DAT_140c64a38 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_PetFlair_140a6c238);
        }
        if (uVar1 <= (uint)uVar6) goto LAB_1404ce392;
        if (DAT_140c63848 == (code *)0x0) {
            uVar3 = uVar5;
            if (_DAT_140c65364 == 0) {
                iVar2 = FUN_140224aa0();
                if (iVar2 < 0) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = (**(code **)(*DAT_140c64a38 + 0x20))();
                }
            }
        }
        else {
            uVar3 = (*DAT_140c63848)(&PTR_u_PetFlair_140a6c238,uVar6,DAT_140c63858);
        }
        FUN_1404ce560(param_1,*(undefined4 *)(uVar3 + 4),uVar3);
        if (*(int *)(uVar3 + 8) != 0) {
            FUN_1404ce560(param_1,*(int *)(uVar3 + 8),uVar3);
        }
        uVar6 = (ulonglong)((uint)uVar6 + 1);
    } while( true );
}



uint FUN_1404ce430(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;
    int *piVar2;
    uint uVar3;

    if (param_2 == 0) {
        return 1;
    }
    if (((param_2 - 1U < 2) && (param_3 != 0)) && (lVar1 = FUN_1407a0fd0(), lVar1 != 0)) {
        uVar3 = 0;
        if (*(uint *)(lVar1 + 0x28) != 0) {
            piVar2 = (int *)(*(longlong *)(lVar1 + 0x30) + 0x10);
            do {
                if (*piVar2 == 0x24) {
                    lVar1 = FUN_1404835c0(DAT_140c65918,
                                          *(undefined4 *)
                                                  ((ulonglong)uVar3 * 0xa8 + 0x40 + *(longlong *)(lVar1 + 0x30)));
                    if (lVar1 == 0) {
                        return 0;
                    }
                    lVar1 = FUN_140248240(*(undefined4 *)(lVar1 + 0x174));
                    if (lVar1 == 0) {
                        return 0;
                    }
                    return ~(*(uint *)(lVar1 + 0x60) >> 0xe) & 1;
                }
                uVar3 = uVar3 + 1;
                piVar2 = piVar2 + 0x2a;
            } while (uVar3 < *(uint *)(lVar1 + 0x28));
        }
    }
    return 0;
}



void FUN_1404ce4e0(void)

{
    longlong *plVar1;
    undefined *puVar2;

    plVar1 = (longlong *)FUN_14018b280(0x28);
    if (plVar1 == (longlong *)0x0) {
        plVar1 = (longlong *)0x0;
    }
    else {
        *plVar1 = (longlong)&PTR_LAB_140b68f60;
        puVar2 = (undefined *)FUN_14018b280(0x30);
        plVar1[3] = 0;
        plVar1[2] = (longlong)puVar2;
        *puVar2 = 0;
        *(undefined8 *)(plVar1[2] + 8) = 0;
        *(longlong *)(plVar1[2] + 0x10) = plVar1[2];
        *(longlong *)(plVar1[2] + 0x18) = plVar1[2];
        *plVar1 = (longlong)&PTR_LAB_140b68f98;
    }
    // WARNING: Could not recover jumptable at 0x0001404ce557. Too many branches
    // WARNING: Treating indirect jump as call
    DAT_140c65a18 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
}



undefined8 FUN_1404ce560(longlong *param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res20;
    longlong local_28;
    uint local_20 [2];
    undefined8 local_18;

    if ((0x1ff < param_2) || (param_3 == 0)) {
        return 0x80070057;
    }
    lVar1 = param_1[2];
    lVar2 = *(longlong *)(lVar1 + 8);
    local_res20 = lVar1;
    lVar3 = lVar2;
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res20 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
        local_res20 = lVar1;
    }
    lVar3 = lVar1;
    if ((local_res20 != lVar1) && (*(longlong *)(local_res20 + 0x28) != 0)) {
        (**(code **)(*param_1 + 0x30))(param_1,*(longlong *)(local_res20 + 0x28));
        (**(code **)(*param_1 + 0x30))(param_1,param_3);
        return 0x80004005;
    }
    while (local_res20 = lVar3, lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
            lVar3 = local_res20;
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
        local_18 = 0;
        local_20[0] = param_2;
        FUN_140055c60(param_1 + 1,&local_28,&local_res20,local_20);
        local_res20 = local_28;
    }
    *(longlong *)(local_res20 + 0x28) = param_3;
    return 0;
}



undefined8 FUN_1404ce700(undefined8 param_1,ulonglong param_2)

{
    FUN_1404ce740();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404ce740(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong lVar4;
    ulonglong uVar5;

    pplVar3 = (longlong **)(param_1 + 1);
    uVar5 = 0;
    *param_1 = &PTR_FUN_140b68fd0;
    if ((*pplVar3)[1] != 0) {
        do {
            FUN_14018b900(*(undefined8 *)(**pplVar3 + uVar5 * 8),0);
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)(*pplVar3)[1]);
    }
    lVar4 = 3;
    do {
        plVar1 = *pplVar3;
        if (plVar1 != (longlong *)0x0) {
            lVar2 = *plVar1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(plVar1,0);
        }
        pplVar3 = pplVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404ce7d0(longlong param_1)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    int iVar11;
    undefined8 *puVar12;
    undefined4 *puVar13;
    longlong lVar14;

    puVar10 = (undefined8 *)(param_1 + 8);
    lVar14 = 3;
    puVar12 = (undefined8 *)0x0;
    do {
        puVar5 = (undefined8 *)FUN_14018b280(0x10);
        puVar6 = puVar12;
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = 0;
            *puVar5 = 0;
            puVar6 = puVar5;
        }
        *puVar10 = puVar6;
        puVar10 = puVar10 + 1;
        lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    do {
        puVar13 = (undefined4 *)0x0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((DAT_140c63a50 != 0) || (iVar11 = FUN_14024e1a0(), iVar11 < 0)) {
                LAB_1404ceac8:
                if (DAT_140c63850 == (code *)0x0) {
                    if ((DAT_140c63a50 == 0) && (DAT_140c63a50 = 1, DAT_140c64f98 != (longlong *)0x0)) {
                        (**(code **)(*DAT_140c64f98 + 8))();
                        DAT_140c64f98 = (longlong *)0x0;
                    }
                    return 0;
                }
                (*DAT_140c63850)(&PTR_u_ZoneCompletion_140a6e458,DAT_140c63858);
                return 0;
            }
            uVar4 = (**(code **)(*DAT_140c64f98 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)();
        }
        if (uVar4 <= (uint)puVar12) goto LAB_1404ceac8;
        if (DAT_140c63848 == (code *)0x0) {
            puVar7 = puVar13;
            if ((DAT_140c63a50 == 0) && (iVar11 = FUN_14024e1a0(), -1 < iVar11)) {
                puVar7 = (undefined4 *)(**(code **)(*DAT_140c64f98 + 0x20))();
            }
        }
        else {
            puVar7 = (undefined4 *)(*DAT_140c63848)(&PTR_u_ZoneCompletion_140a6e458,puVar12,DAT_140c63858)
                    ;
        }
        puVar8 = (undefined4 *)FUN_14018b280();
        if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = puVar7[1];
            puVar8[2] = puVar7[2];
            puVar8[10] = puVar7[9];
            *(undefined8 *)(puVar8 + 3) = 0;
            *(undefined8 *)(puVar8 + 5) = 0;
            *(undefined8 *)(puVar8 + 7) = 0;
            puVar8[9] = 0;
            puVar8[3] = puVar7[3];
            puVar8[4] = puVar7[4];
            puVar8[5] = puVar7[5];
            puVar8[7] = puVar7[6];
            puVar8[8] = puVar7[7];
            puVar8[9] = puVar7[8];
            uVar1 = *puVar8;
            puVar13 = puVar8;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65370 == 0) && (iVar11 = FUN_140212560(), -1 < iVar11)) {
                    lVar14 = (**(code **)(*DAT_140c63bd0 + 0x18))(DAT_140c63bd0,uVar1);
                    goto LAB_1404ce972;
                }
            }
            else {
                lVar14 = (*DAT_140c63840)(&PTR_u_MapZone_140a6b320,uVar1,DAT_140c63858);
                LAB_1404ce972:
                if (lVar14 != 0) {
                    puVar8[1] = *(undefined4 *)(lVar14 + 0x30);
                    goto LAB_1404ce987;
                }
            }
            puVar8[1] = 0;
        }
        LAB_1404ce987:
        plVar2 = *(longlong **)(param_1 + 8);
        lVar3 = plVar2[1];
        lVar14 = lVar3 + 1;
        iVar11 = puVar13[9] + puVar13[8] + puVar13[7] + puVar13[6] + puVar13[5] + puVar13[4] +
                 puVar13[3];
        lVar9 = FUN_14018db00(*plVar2,lVar14,8);
        *(undefined4 **)(lVar9 + lVar3 * 8) = puVar13;
        if (*plVar2 != lVar9) {
            FUN_1407db590(lVar9,*plVar2,plVar2[1] << 3);
            lVar3 = *plVar2;
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *plVar2 = lVar9;
        }
        plVar2[1] = lVar14;
        if ((puVar13[2] & 0xfffffffd) == 0) {
            plVar2 = *(longlong **)(param_1 + 0x18);
            lVar3 = plVar2[1];
            lVar14 = lVar3 + 1;
            lVar9 = FUN_14018db00(*plVar2,lVar14,8);
            *(undefined4 **)(lVar9 + lVar3 * 8) = puVar13;
            if (*plVar2 != lVar9) {
                FUN_1407db590(lVar9,*plVar2,plVar2[1] << 3);
                lVar3 = *plVar2;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                *plVar2 = lVar9;
            }
            plVar2[1] = lVar14;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar11;
        }
        if ((uint)puVar13[2] < 2) {
            plVar2 = *(longlong **)(param_1 + 0x10);
            lVar3 = plVar2[1];
            lVar14 = lVar3 + 1;
            lVar9 = FUN_14018db00(*plVar2,lVar14,8);
            *(undefined4 **)(lVar9 + lVar3 * 8) = puVar13;
            if (*plVar2 != lVar9) {
                FUN_1407db590(lVar9,*plVar2,plVar2[1] << 3);
                lVar3 = *plVar2;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                *plVar2 = lVar9;
            }
            plVar2[1] = lVar14;
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar11;
        }
        puVar12 = (undefined8 *)(ulonglong)((uint)puVar12 + 1);
    } while( true );
}



undefined8 FUN_1404ceb40(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c65a20 == (longlong *)0x0) {
        lVar2 = FUN_14018b280(0x90,0);
        if (lVar2 == 0) {
            DAT_140c65a20 = (longlong *)0x0;
        }
        else {
            DAT_140c65a20 = (longlong *)FUN_1404cebc0(lVar2);
        }
        iVar1 = (**(code **)(*DAT_140c65a20 + 8))();
        if (iVar1 < 0) {
            if (DAT_140c65a20 != (longlong *)0x0) {
                (**(code **)*DAT_140c65a20)(DAT_140c65a20,1);
            }
            DAT_140c65a20 = (longlong *)0x0;
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 * FUN_1404cebc0(undefined8 *param_1)

{
    undefined *puVar1;
    undefined8 uVar2;

    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = &PTR_LAB_140b68fe0;
    puVar1 = (undefined *)FUN_14018b280();
    param_1[7] = puVar1;
    param_1[8] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    *(undefined4 *)(param_1 + 0x11) = 0;
    uVar2 = FUN_14034bdd0(0,0x6f3ca);
    param_1[10] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0xb] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0xc] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0xd] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0xe] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0xf] = uVar2;
    uVar2 = FUN_14034bdd0();
    param_1[0x10] = uVar2;
    return param_1;
}



undefined8 FUN_1404cecf0(void)

{
    int iVar1;
    undefined8 uVar2;

    iVar1 = FUN_1404ce7d0();
    uVar2 = 0;
    if (iVar1 < 0) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



void FUN_1404ced10(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x38)) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = 0;
                FUN_14018b900(puVar1,0);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x38));
    }
    FUN_140008410(param_1 + 0x30);
    return;
}



undefined8 FUN_1404cedc0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    undefined4 local_28 [2];
    longlong *local_20;
    undefined local_18 [16];

    if (*(longlong *)(DAT_140c65a20 + 0x40) != 0) {
        return 1;
    }
    if (param_2 == 0xa6) {
        plVar2 = *(longlong **)(DAT_140c65a20 + 0x18);
    }
    else {
        if (param_2 != 0xa7) {
            return 0x80004005;
        }
        plVar2 = *(longlong **)(DAT_140c65a20 + 0x10);
    }
    if (plVar2 == (longlong *)0x0) {
        return 0x80004005;
    }
    uVar3 = 0;
    if (plVar2[1] != 0) {
        lVar1 = DAT_140c65a20 + 0x30;
        do {
            local_20 = (longlong *)FUN_14018b280(0x28);
            if (local_20 != (longlong *)0x0) {
                *local_20 = *(longlong *)(*plVar2 + uVar3 * 8);
                local_20[1] = 0;
                local_20[2] = 0;
                local_20[3] = 0;
                *(undefined4 *)(local_20 + 4) = 0;
            }
            local_28[0] = *(undefined4 *)(*local_20 + 4);
            FUN_140055f80(lVar1,local_18,local_28);
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)plVar2[1]);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404ceea0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    longlong *plVar5;
    uint *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong local_res8;
    longlong local_res18 [2];

    lVar2 = DAT_140c65a20;
    if ((DAT_140c658f8 != 0) &&
        (local_res8 = param_1, plVar5 = (longlong *)FUN_140448420(), plVar5 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        puVar6 = (uint *)FUN_14024db80(uVar3);
        if (puVar6 != (uint *)0x0) {
            lVar10 = *(longlong *)(lVar2 + 0x38);
            local_res8 = lVar10;
            if (*(longlong *)(lVar10 + 8) != 0) {
                lVar7 = *(longlong *)(lVar10 + 8);
                do {
                    if (*(uint *)(lVar7 + 0x20) < *puVar6) {
                        lVar8 = *(longlong *)(lVar7 + 0x18);
                    }
                    else {
                        lVar8 = *(longlong *)(lVar7 + 0x10);
                        local_res8 = lVar7;
                    }
                    lVar7 = lVar8;
                } while (lVar8 != 0);
            }
            if ((local_res8 == lVar10) || (*puVar6 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar10;
            }
            lVar10 = local_res8;
            if (local_res8 == lVar10) {
                do {
                    uVar1 = puVar6[2];
                    if (DAT_140c63840 == (code *)0x0) {
                        if (_DAT_140c64634 != 0) {
                            return 0;
                        }
                        iVar4 = FUN_14024d920();
                        if (iVar4 < 0) {
                            return 0;
                        }
                        puVar6 = (uint *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar1);
                    }
                    else {
                        puVar6 = (uint *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,uVar1,DAT_140c63858);
                    }
                    if (puVar6 == (uint *)0x0) {
                        return 0;
                    }
                    lVar7 = *(longlong *)(lVar2 + 0x38);
                    lVar10 = lVar7;
                    if (*(longlong *)(lVar7 + 8) != 0) {
                        lVar8 = *(longlong *)(lVar7 + 8);
                        do {
                            if (*(uint *)(lVar8 + 0x20) < *puVar6) {
                                lVar9 = *(longlong *)(lVar8 + 0x18);
                            }
                            else {
                                lVar9 = *(longlong *)(lVar8 + 0x10);
                                lVar10 = lVar8;
                            }
                            lVar8 = lVar9;
                        } while (lVar9 != 0);
                    }
                    if ((lVar10 == lVar7) || (*puVar6 < *(uint *)(lVar10 + 0x20))) {
                        local_res18[0] = lVar7;
                        plVar5 = local_res18;
                    }
                    else {
                        local_res8 = lVar10;
                        plVar5 = &local_res8;
                    }
                    lVar10 = *plVar5;
                } while (lVar10 == lVar7);
            }
            return *(undefined8 *)(lVar10 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_1404cf010(undefined8 param_1,uint param_2,uint param_3,int param_4)

{
    int *piVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    int iVar11;
    longlong local_res8;

    lVar5 = DAT_140c65a20;
    lVar10 = (longlong)(int)param_2;
    if (6 < param_2) {
        return 0x80070057;
    }
    lVar7 = *(longlong *)(DAT_140c65a20 + 0x38);
    local_res8 = lVar7;
    lVar9 = *(longlong *)(lVar7 + 8);
    while (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x20) < param_3) {
            lVar9 = *(longlong *)(lVar9 + 0x18);
        }
        else {
            local_res8 = lVar9;
            lVar9 = *(longlong *)(lVar9 + 0x10);
        }
    }
    if ((local_res8 == lVar7) || (param_3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar7;
    }
    if (local_res8 == lVar7) {
        lVar9 = *(longlong *)(lVar7 + 0x10);
        if (lVar9 != lVar7) {
            do {
                iVar6 = FUN_1403c9450();
                if (iVar6 != 0) {
                    plVar8 = *(longlong **)(lVar9 + 0x28);
                    goto LAB_1404cf137;
                }
                lVar7 = *(longlong *)(lVar9 + 0x18);
                if (lVar7 == 0) {
                    lVar7 = *(longlong *)(lVar9 + 8);
                    if (lVar9 == *(longlong *)(lVar7 + 0x18)) {
                        do {
                            lVar9 = lVar7;
                            lVar7 = *(longlong *)(lVar9 + 8);
                        } while (lVar9 == *(longlong *)(lVar7 + 0x18));
                    }
                    if (*(longlong *)(lVar9 + 0x18) != lVar7) {
                        lVar9 = lVar7;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar7 + 0x10); lVar9 = lVar7, lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x10)) {
                        lVar7 = lVar4;
                    }
                }
            } while (lVar9 != *(longlong *)(lVar5 + 0x38));
        }
    }
    else {
        plVar8 = *(longlong **)(local_res8 + 0x28);
        LAB_1404cf137:
        if (plVar8 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)plVar8 + lVar10 * 4 + 8);
            uVar3 = *(uint *)(*plVar8 + 0xc + lVar10 * 4);
            if (uVar3 <= uVar2) {
                return 1;
            }
            iVar11 = uVar3 - uVar2;
            iVar6 = 1;
            if (iVar11 == 0) {
                iVar6 = iVar11;
            }
            *(uint *)((longlong)plVar8 + lVar10 * 4 + 8) = iVar6 + uVar2;
            if (param_4 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ZoneCompletionUpdated",&DAT_1409ef504
                        ,*(undefined4 *)*plVar8);
            }
            piVar1 = (int *)(lVar5 + 0x88);
            *piVar1 = *piVar1 + 1;
            return 0;
        }
    }
    return 0x80004005;
}



ulonglong FUN_1404cf1a0(void)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    ulonglong in_RAX;
    ulonglong uVar6;
    longlong lVar7;
    longlong *plVar8;
    uint *puVar9;
    undefined8 *puVar10;
    uint7 uVar11;
    byte bVar12;
    uint uVar13;
    longlong lVar14;
    uint uVar15;
    uint uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined local_58 [8];
    undefined8 local_50;

    lVar2 = DAT_140c65a20;
    if (DAT_140c65970 == 0) {
        return in_RAX & 0xffffffffffffff00;
    }
    uVar6 = DAT_140c65898;
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        uVar6 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
        if ((int)uVar6 == 0xa6) {
            uVar15 = *(uint *)(lVar2 + 0x28);
        }
        else {
            if ((int)uVar6 != 0xa7) goto LAB_1404cf4d6;
            uVar15 = *(uint *)(lVar2 + 0x24);
        }
        if (uVar15 != 0) {
            uVar16 = *(uint *)(lVar2 + 0x88);
            if ((DAT_140dc31bc & 1) == 0) {
                DAT_140dc31bc = DAT_140dc31bc | 1;
                lVar7 = FUN_140200220();
                if (lVar7 == 0) {
                    uVar3 = 5;
                }
                else {
                    uVar3 = *(uint *)(lVar7 + 4);
                    if ((int)uVar3 < 1) {
                        DAT_140dc31c0 = 0;
                        goto LAB_1404cf26c;
                    }
                }
                uVar13 = 0xffffffff;
                if (uVar3 != 0xffffffff) {
                    uVar13 = uVar3;
                }
                DAT_140dc31c0 = 0;
                if (uVar13 != 0) {
                    DAT_140dc31c0 = uVar13;
                }
            }
            LAB_1404cf26c:
            lVar7 = *(longlong *)(lVar2 + 0x38);
            lVar14 = *(longlong *)(lVar7 + 0x10);
            if (lVar14 != lVar7) {
                fVar20 = 1.0;
                fVar19 = 0.0;
                do {
                    if ((DAT_140c658f8 != 0) &&
                        (plVar8 = (longlong *)
                                FUN_140448420((undefined4 *)**(undefined8 **)(lVar14 + 0x28),
                                              *(undefined4 *)**(undefined8 **)(lVar14 + 0x28)),
                                plVar8 != (longlong *)0x0)) {
                        uVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
                        if ((uVar6 & 1) == 0) {
                            puVar9 = (uint *)(**(code **)(*plVar8 + 0xa8))();
                            fVar18 = fVar19;
                            if (puVar9[1] != 0) {
                                fVar17 = (float)(ulonglong)*puVar9 / (float)(ulonglong)puVar9[1];
                                if (fVar20 <= fVar17) {
                                    fVar17 = fVar20;
                                }
                                if (fVar19 <= fVar17) {
                                    fVar18 = fVar17;
                                }
                            }
                            if (fVar19 < (float)(ulonglong)DAT_140dc31c0 * fVar18) {
                                iVar4 = (int)(longlong)((float)(ulonglong)DAT_140dc31c0 * fVar18);
                                iVar5 = -1;
                                if (iVar4 != -1) {
                                    iVar5 = iVar4;
                                }
                                iVar4 = 0;
                                if (iVar5 != 0) {
                                    iVar4 = iVar5;
                                }
                            }
                            else {
                                iVar4 = 0;
                            }
                            uVar16 = uVar16 + iVar4;
                            uVar15 = uVar15 + DAT_140dc31c0;
                        }
                        (**(code **)(*plVar8 + 0x30))(plVar8);
                        puVar10 = (undefined8 *)FUN_140491a20();
                        if (puVar10 != (undefined8 *)0x0) {
                            iVar5 = FUN_1404a1aa0((undefined4 *)*puVar10,*(undefined4 *)*puVar10,0);
                            uVar16 = uVar16 + iVar5;
                            lVar7 = FUN_1404cf4f0(puVar10);
                            iVar5 = -1;
                            if (*(int *)(lVar7 + 0x10) != -1) {
                                iVar5 = *(int *)(lVar7 + 0x10);
                            }
                            iVar4 = 0;
                            if (iVar5 != 0) {
                                iVar4 = iVar5;
                            }
                            uVar15 = uVar15 + iVar4;
                            FUN_140008410(local_58);
                            FUN_14018b900(local_50);
                        }
                    }
                    lVar1 = *(longlong *)(lVar14 + 0x18);
                    if (lVar1 == 0) {
                        lVar7 = *(longlong *)(lVar14 + 8);
                        if (lVar14 == *(longlong *)(lVar7 + 0x18)) {
                            do {
                                lVar14 = lVar7;
                                lVar7 = *(longlong *)(lVar14 + 8);
                            } while (lVar14 == *(longlong *)(lVar7 + 0x18));
                        }
                        if (*(longlong *)(lVar14 + 0x18) != lVar7) {
                            lVar14 = lVar7;
                        }
                    }
                    else {
                        for (lVar7 = *(longlong *)(lVar1 + 0x10); lVar14 = lVar1, lVar7 != 0;
                             lVar7 = *(longlong *)(lVar7 + 0x10)) {
                            lVar1 = lVar7;
                        }
                    }
                } while (lVar14 != *(longlong *)(lVar2 + 0x38));
            }
            uVar11 = (uint7)((ulonglong)lVar7 >> 8);
            if (uVar16 == uVar15) {
                return CONCAT71(uVar11,100);
            }
            if (uVar16 == 0) {
                return (ulonglong)uVar11 << 8;
            }
            uVar6 = (ulonglong)(((float)(ulonglong)uVar16 / (float)(ulonglong)uVar15) * 100.0);
            bVar12 = (byte)uVar6;
            if (bVar12 == 0) {
                return CONCAT71((uint7)(uint3)(uVar15 >> 8),1);
            }
            uVar6 = uVar6 & 0xff;
            if (99 < bVar12) {
                uVar6 = 99;
            }
            return uVar6;
        }
    }
    LAB_1404cf4d6:
    return uVar6 & 0xffffffffffffff00;
}



longlong FUN_1404cf4f0(longlong param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    undefined *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong local_res8;
    longlong local_res10;
    uint local_28 [2];
    undefined8 local_20;

    puVar4 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_2 + 8) = puVar4;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *puVar4 = 0;
    *(undefined8 *)(*(longlong *)(param_2 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = *(longlong *)(param_2 + 8);
    *(longlong *)(*(longlong *)(param_2 + 8) + 0x18) = *(longlong *)(param_2 + 8);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar7 != *(longlong *)(param_1 + 0x10)) {
        do {
            iVar3 = FUN_1403d7c30(*(undefined8 *)(lVar7 + 0x28),param_3,0);
            if ((iVar3 != 0) && ((*(byte *)(**(uint ***)(lVar7 + 0x28) + 0xd) & 0x40) == 0)) {
                lVar6 = *(longlong *)(param_2 + 8);
                uVar1 = ***(uint ***)(lVar7 + 0x28);
                lVar5 = lVar6;
                lVar2 = *(longlong *)(lVar6 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar1) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar5 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar5 == lVar6) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
                    local_20 = 0;
                    local_res8 = lVar5;
                    local_28[0] = uVar1;
                    FUN_140055c60(param_2,&local_res10,&local_res8,local_28);
                    lVar5 = local_res10;
                }
                *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
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
                for (lVar2 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar7 != *(longlong *)(param_1 + 0x10));
    }
    return param_2;
}



undefined8 FUN_1404cf650(void)

{
    undefined8 *puVar1;
    int iVar2;

    if (DAT_140c65a28 != (undefined8 *)0x0) {
        return 0;
    }
    DAT_140c65a28 = (undefined8 *)FUN_14018b280(0xa0,0);
    if (DAT_140c65a28 == (undefined8 *)0x0) {
        DAT_140c65a28 = (undefined8 *)0x0;
    }
    else {
        *DAT_140c65a28 = 0;
        DAT_140c65a28[3] = 0;
        DAT_140c65a28[4] = 0;
        DAT_140c65a28[6] = 0;
        DAT_140c65a28[7] = 0;
        *(undefined4 *)(DAT_140c65a28 + 1) = 0x544e5645;
        *(undefined4 *)((longlong)DAT_140c65a28 + 0x4c) = 0x16;
        DAT_140c65a28[0xc] = 0;
        DAT_140c65a28[0xd] = 0;
        DAT_140c65a28[0xf] = 0;
        DAT_140c65a28[0x10] = 0;
        *(undefined4 *)(DAT_140c65a28 + 10) = 0x544e5645;
        *(undefined8 *)((longlong)DAT_140c65a28 + 0x94) = 0x16;
        *(undefined4 *)((longlong)DAT_140c65a28 + 0x9c) = 0;
    }
    iVar2 = FUN_1404cf880();
    puVar1 = DAT_140c65a28;
    if (iVar2 < 0) {
        if (DAT_140c65a28 != (undefined8 *)0x0) {
            FUN_1404cf7a0(DAT_140c65a28);
            FUN_14018b900(puVar1,0);
        }
        DAT_140c65a28 = (undefined8 *)0x0;
        return 0x80004005;
    }
    return 0;
}



void FUN_1404cf7a0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar1 = *param_1;
    uVar3 = 0;
    if (lVar1 != 0) {
        uVar4 = uVar3;
        if (*(longlong *)(lVar1 + 0x10) != 0) {
            do {
                uVar3 = uVar3 + 1;
                **(undefined8 **)(uVar4 + *(longlong *)(lVar1 + 8)) = 0;
                uVar4 = uVar4 + 0x10;
            } while (uVar3 < *(ulonglong *)(lVar1 + 0x10));
        }
        lVar2 = *(longlong *)(lVar1 + 8);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(lVar1,0);
    }
    FUN_140195d70(param_1 + 10);
    *(undefined4 *)(param_1 + 10) = 0;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        *(longlong *)param_1[0xc] = param_1[0xd];
    }
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
        *(longlong *)param_1[0xd] = param_1[0xc];
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    FUN_140195d70(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        *(longlong *)param_1[3] = param_1[4];
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}



undefined8 FUN_1404cf880(void)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong lVar4;

    puVar1 = DAT_140c65a28;
    puVar3 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[2] = 0;
        puVar3[1] = 0;
        *puVar3 = &LAB_1404cf730;
        FUN_1404cfcc0();
        puVar3[3] = 0;
    }
    *puVar1 = puVar3;
    lVar4 = FUN_140200220(0x491);
    if (lVar4 == 0) {
        uVar2 = 500;
    }
    else {
        uVar2 = *(undefined4 *)(lVar4 + 4);
    }
    *(undefined4 *)(puVar1 + 0x13) = uVar2;
    lVar4 = FUN_140200220(0x491);
    if (lVar4 != 0) {
        *(undefined4 *)((longlong)puVar1 + 0x9c) = *(undefined4 *)(lVar4 + 8);
        return 0;
    }
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 30000;
    return 0;
}



void FUN_1404cf930(longlong param_1)

{
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_140195d70();
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_1404cf990;
        local_20 = param_1;
        FUN_140195960(param_1 + 8,*(undefined4 *)(param_1 + 0x98),local_28,4);
    }
    return;
}



void FUN_1404cf990(longlong *param_1)

{
    uint uVar1;
    bool bVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined4 local_28 [2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 0x10) != 0) {
        plVar4 = (longlong *)0x0;
        if (*(longlong *)(lVar3 + 0x10) != 0) goto LAB_1404cf9ce;
        while( true ) {
            if ((*(int *)(plVar4 + 5) == 0) &&
                (((plVar4[2] == 0 || (uVar1 = *(uint *)(plVar4[2] + 8), uVar1 == 0)) ||
                  ((uint)(DAT_140c636a8 - *(int *)(plVar4 + 3)) <= uVar1)))) {
                local_28[0] = 0;
                local_18 = FUN_1404cf930;
                local_10 = 0;
                local_20 = param_1;
                FUN_140195960(param_1 + 10,*(undefined4 *)((longlong)param_1 + 0x9c),local_28,4);
                bVar2 = false;
            }
            else {
                bVar2 = true;
            }
            if (*plVar4 != 0) {
                FUN_1403d6480();
            }
            if ((code *)plVar4[4] != (code *)0x0) {
                (*(code *)plVar4[4])();
            }
            if ((!bVar2) || (lVar3 = *param_1, *(longlong *)(lVar3 + 0x10) == 0)) break;
            LAB_1404cf9ce:
            plVar4 = **(longlong ***)(lVar3 + 8);
        }
    }
    return;
}



void FUN_1404cfa80(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong local_res10 [3];

    plVar2 = DAT_140c65a28;
    lVar1 = *(longlong *)(*DAT_140c65a28 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = DAT_140c636a8;
    local_res10[0] = param_2;
    FUN_1404cfc10(*plVar2,param_2,local_res10);
    if ((lVar1 == 0) && (plVar2[0xc] == 0)) {
        FUN_1404cf990(plVar2);
    }
    return;
}



void FUN_1404cfae0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = DAT_140c65a28;
    if (DAT_140c65a28[0xc] != 0) {
        FUN_140195d70(DAT_140c65a28 + 10);
    }
    if (plVar3[3] != 0) {
        FUN_140195d70(plVar3 + 1);
    }
    lVar1 = *plVar3;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    while (lVar2 != 0) {
        lVar2 = **(longlong **)(lVar1 + 8);
        FUN_1404cfb60(lVar1);
        if (lVar2 != 0) {
            *(undefined4 *)(lVar2 + 0x28) = 1;
            if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
                (**(code **)(lVar2 + 0x20))(lVar2);
            }
        }
        lVar1 = *plVar3;
        lVar2 = *(longlong *)(lVar1 + 0x10);
    }
    return;
}



undefined8 * FUN_1404cfb60(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;

    if (*(longlong *)(param_1 + 0x10) == 0) {
        return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    *puVar1 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10) + -1;
    if (lVar2 != 0) {
        puVar1 = *(undefined8 **)(param_1 + 8);
        *puVar1 = puVar1[lVar2 * 2];
        puVar1[1] = puVar1[lVar2 * 2 + 1];
        FUN_1403d8090(param_1 + 8);
        puVar1 = (undefined8 *)**(longlong **)(param_1 + 8);
        puVar1[1] = 0;
        FUN_1403d7f70(param_1,puVar1);
        return puVar1;
    }
    FUN_1403d8090(param_1 + 8,0);
    return puVar1;
}



void FUN_1404cfc10(longlong param_1,longlong *param_2,undefined8 *param_3)

{
    int iVar1;
    longlong lVar2;
    longlong *local_18;
    undefined8 local_10;

    if (*param_2 == 0) {
        *param_2 = param_1;
        local_10 = *param_3;
    }
    else {
        if (*param_2 == param_1) {
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + param_2[1] * 0x10) = *param_3;
            iVar1 = FUN_1403d7e90(param_1,param_2);
            if (iVar1 != 0) {
                return;
            }
            FUN_1403d7f70(param_1,param_2);
            return;
        }
        FUN_1403d6480();
        *param_2 = param_1;
        local_10 = *param_3;
    }
    local_18 = param_2;
    lVar2 = FUN_1404cfd50(param_1 + 8,&local_18);
    param_2[1] = lVar2;
    FUN_1403d7e90(param_1,param_2);
    return;
}



void FUN_1404cfcc0(longlong *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (param_1[1] != 0) {
        param_1[1] = 0;
    }
    puVar2 = (undefined8 *)FUN_14018dbc0(*param_1,0,0x10);
    if ((undefined8 *)*param_1 != puVar2) {
        if (param_1[1] != 0) {
            puVar3 = puVar2;
            do {
                if (puVar3 != (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
                    *puVar3 = *puVar4;
                    puVar3[1] = puVar4[1];
                }
                uVar5 = uVar5 + 1;
                puVar3 = puVar3 + 2;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = (longlong)puVar2;
    }
    return;
}



longlong FUN_1404cfd50(longlong *param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = puVar3 + lVar1 * 2;
    if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
    }
    if ((undefined8 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar5 = (undefined8 *)((longlong)puVar4 + (*param_1 - (longlong)puVar3));
                    *puVar4 = *puVar5;
                    puVar4[1] = puVar5[1];
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 2;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



int FUN_1404d0230(void)

{
    int iVar1;
    longlong *plVar2;

    if (DAT_140c65a30 != (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_14018b280(0x48);
    if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        FUN_14079ae70(plVar2);
        *plVar2 = (longlong)&PTR_FUN_140b68ff0;
    }
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (iVar1 < 0) {
        (**(code **)*plVar2)(plVar2,1);
        return iVar1;
    }
    DAT_140c65a30 = plVar2;
    return 0;
}



undefined8 * FUN_1404d02c0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b68ff0;
    FUN_14079af40();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong FUN_1404d0310(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_68 [8];
    undefined *local_60;
    longlong local_58;
    int local_48 [2];
    undefined local_40 [8];
    longlong local_38;
    longlong local_30;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(int *)(local_res8 + 0x20))) {
        local_60 = (undefined *)FUN_14018b280(0x48);
        local_58 = 0;
        *local_60 = 0;
        *(undefined8 *)(local_60 + 8) = 0;
        *(undefined **)(local_60 + 0x10) = local_60;
        *(undefined **)(local_60 + 0x18) = local_60;
        local_48[0] = *param_2;
        FUN_1404d0570(local_40,local_68);
        FUN_1404d0760(param_1,&local_res18,&local_res8,local_48);
        if (local_30 != 0) {
            FUN_140032150(local_40,*(undefined8 *)(local_38 + 8));
            *(longlong *)(local_38 + 0x10) = local_38;
            *(undefined8 *)(local_38 + 8) = 0;
            *(longlong *)(local_38 + 0x18) = local_38;
            local_30 = 0;
        }
        FUN_14018b900(local_38,0);
        if (local_58 != 0) {
            FUN_140032150(local_68,*(undefined8 *)(local_60 + 8));
            *(undefined **)(local_60 + 0x10) = local_60;
            *(undefined8 *)(local_60 + 8) = 0;
            *(undefined **)(local_60 + 0x18) = local_60;
            local_58 = 0;
        }
        FUN_14018b900(local_60,0);
        local_res8 = local_res18;
    }
    return local_res8 + 0x28;
}



longlong FUN_1404d0460(longlong param_1,int *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;
    int local_38 [2];
    undefined local_30 [8];
    undefined8 local_28;

    lVar1 = *(longlong *)(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar2 = *(longlong *)(lVar1 + 8);
        do {
            if (*(int *)(lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(int *)(local_res8 + 0x20))) {
        local_50 = (undefined *)FUN_14018b280();
        local_48 = 0;
        *local_50 = 0;
        *(undefined8 *)(local_50 + 8) = 0;
        *(undefined **)(local_50 + 0x10) = local_50;
        *(undefined **)(local_50 + 0x18) = local_50;
        local_38[0] = *param_2;
        FUN_14048b2a0(local_30,local_58);
        FUN_1404d0970(param_1,&local_res18,&local_res8,local_38);
        FUN_140008410(local_30);
        FUN_14018b900(local_28,0);
        FUN_140008410(local_58);
        FUN_14018b900(local_50,0);
        local_res8 = local_res18;
    }
    return local_res8 + 0x28;
}



longlong FUN_1404d0570(longlong param_1,longlong param_2)

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
        uVar4 = FUN_1404d0640(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



undefined * FUN_1404d0640(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280(0x48);
    if ((undefined4 *)(puVar2 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        FUN_14048b2a0(puVar2 + 0x28,param_2 + 0x28);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *puVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_1404d0640(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x48);
        if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
            FUN_14048b2a0(puVar4 + 0x28,puVar6 + 0x28);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_1404d0640(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



longlong * FUN_1404d0760(longlong param_1,longlong *param_2,char **param_3,int *param_4)

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
            LAB_1404d07ba:
            plVar4 = (longlong *)FUN_1404d0c70(param_1,local_18,param_4);
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
                    lVar5 = FUN_14018b280(0x48);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        FUN_1404d0570(lVar5 + 0x28,param_4 + 2);
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
                    lVar5 = FUN_1404d0f60(iVar1,param_4);
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
                plVar4 = (longlong *)FUN_1404d0c70(param_1,local_18,param_4);
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
            goto LAB_1404d07ba;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404d0b80(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404d0b80();
    return param_2;
}



longlong * FUN_1404d0970(longlong param_1,longlong *param_2,char **param_3,int *param_4)

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
            LAB_1404d09ca:
            plVar4 = (longlong *)FUN_1404d0e60(param_1,local_18,param_4);
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
                    lVar5 = FUN_14018b280(0x48);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
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
                    lVar5 = FUN_1404a9f20(iVar1,param_4);
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
                plVar4 = (longlong *)FUN_1404d0e60(param_1,local_18,param_4);
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
            goto LAB_1404d09ca;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404d0d70(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404d0d70();
    return param_2;
}



longlong *
FUN_1404d0b80(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_1404d0570(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_1404d0f60(param_1,param_5);
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



char ** FUN_1404d0c70(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404d0cce;
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
    LAB_1404d0cce:
    ppcVar1 = (char **)FUN_1404d0b80(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_1404d0d70(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
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



char ** FUN_1404d0e60(longlong param_1,char **param_2,int *param_3)

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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404d0ebe;
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
    LAB_1404d0ebe:
    ppcVar1 = (char **)FUN_1404d0d70(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_1404d0f60(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1404d0570(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



undefined8 FUN_1404d0ff0(void)

{
    undefined8 *puVar1;
    undefined *puVar2;

    if (DAT_140c65a38 != (undefined8 *)0x0) {
        return 0;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0xe0,0);
    if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
    }
    else {
        FUN_1404d1130(puVar1);
        *puVar1 = &PTR_FUN_140b69020;
        puVar2 = (undefined *)FUN_14018b280(0x30);
        puVar1[0x15] = 0;
        puVar1[0x14] = puVar2;
        *puVar2 = 0;
        *(undefined8 *)(puVar1[0x14] + 8) = 0;
        *(undefined8 *)(puVar1[0x14] + 0x10) = puVar1[0x14];
        *(undefined8 *)(puVar1[0x14] + 0x18) = puVar1[0x14];
    }
    DAT_140c65a38 = puVar1;
    FUN_1404d25c0(puVar1);
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return 0;
}



undefined8 * FUN_1404d10c0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b69020;
    FUN_1404d1570();
    FUN_140008410(param_1 + 0x13);
    FUN_14018b900(param_1[0x14],0);
    FUN_1404d22f0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1404d1130(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b69030;
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
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    return param_1;
}



undefined8 FUN_1404d11f0(undefined8 param_1,ulonglong param_2)

{
    FUN_1404d22f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1404d1230(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong local_res8;
    longlong local_res18;

    if (*(longlong *)(param_1 + 8) == 0) {
        return 0x80004005;
    }
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
        do {
            lVar2 = *(longlong *)(DAT_140c65a38 + 0x30);
            uVar6 = *(uint *)(*(longlong *)(param_2 + 0x18) + uVar7 * 4);
            lVar3 = lVar2;
            lVar1 = *(longlong *)(lVar2 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < uVar6) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar3 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((lVar3 == lVar2) || (uVar6 < *(uint *)(lVar3 + 0x20))) {
                local_res18 = lVar2;
                plVar4 = &local_res18;
            }
            else {
                local_res8 = lVar3;
                plVar4 = &local_res8;
            }
            if ((*plVar4 == lVar2) || (lVar2 = *(longlong *)(*plVar4 + 0x28), lVar2 == 0)) {
                return 0x80004005;
            }
            lVar3 = *(longlong *)(param_1 + 0x18);
            lVar1 = lVar3 + 1;
            lVar5 = FUN_14018db00(*(undefined8 *)(param_1 + 0x10),lVar1,8);
            *(longlong *)(lVar5 + lVar3 * 8) = lVar2;
            if (*(longlong *)(param_1 + 0x10) != lVar5) {
                FUN_1407db590(lVar5,*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) << 3);
                if (*(longlong *)(param_1 + 0x10) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 8))();
                }
                *(longlong *)(param_1 + 0x10) = lVar5;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            *(longlong *)(param_1 + 0x18) = lVar1;
        } while (uVar6 < *(uint *)(param_2 + 0xc));
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
    return 0;
}



void FUN_1404d13a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    uint uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 local_18;
    int local_14;
    undefined4 local_10;

    uVar1 = *(uint *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RewardTrackUpdated",&DAT_1409ef9a4,
                  *(undefined8 *)(param_1 + 8));
    if ((uVar1 < *(uint *)(param_1 + 0x24)) &&
        (puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 8), puVar2[1] != 2)) {
        local_10 = *puVar2;
        local_14 = *(uint *)(param_1 + 0x24) - uVar1;
        local_18 = 1;
        FUN_1404283d0(*(undefined8 *)(DAT_140c65898 + 0x7340),&local_18);
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x7fe0);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) && (*(int *)(lVar3 + 0x28) != 4)) {
        for (lVar4 = *(longlong *)(lVar3 + 0x20); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
            if (*(int *)(lVar4 + 0x28) != 4) {
                return;
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x60),"RewardTrackUpdated",&DAT_1409efcfc,
                      *(undefined8 *)(param_1 + 8));
    }
    return;
}



void FUN_1404d1490(longlong param_1,ulonglong param_2,ulonglong param_3)

{
    ulonglong uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined8 local_res20;

    uVar6 = (undefined4)(param_3 & 0xffffffff);
    iVar2 = FUN_1404d2240();
    if (iVar2 == 0) {
        FUN_1403cc530(DAT_140c65898,0x8b);
        return;
    }
    uVar4 = 0xffffffff;
    if (*(int *)(param_1 + 0x18) != -1) {
        uVar4 = *(uint *)(param_1 + 0x18);
    }
    uVar3 = 0;
    if (uVar4 != 0) {
        uVar3 = uVar4;
    }
    if ((uint)(param_2 & 0xffffffff) < uVar3) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
    }
    else {
        lVar5 = 0;
    }
    uVar1 = *(ulonglong *)(lVar5 + 0x18);
    if (uVar1 == 0) {
        uVar6 = 0xffffffff;
    }
    else if (uVar1 == 1) {
        uVar6 = 0;
    }
    else if (uVar1 <= (param_3 & 0xffffffff)) {
        FUN_1403cc530(DAT_140c65898,0x8c);
        return;
    }
    local_res20 = CONCAT44(uVar6,**(undefined4 **)(lVar5 + 8));
    FUN_1403f4900(DAT_140c65898,0x7ce,&local_res20);
    return;
}



void FUN_1404d1570(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0xa0)) {
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
        } while (lVar4 != *(longlong *)(param_1 + 0xa0));
    }
    FUN_140008410(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    return;
}



undefined8 FUN_1404d1640(undefined8 param_1,uint *param_2)

{
    undefined8 uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = DAT_140c65a38;
    FUN_1404d1570(DAT_140c65a38);
    uVar3 = 0;
    if (*param_2 != 0) {
        do {
            FUN_1404d16d0(uVar1,*(longlong *)(param_2 + 2) + uVar3 * 0x28,1);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"RewardTracksLoaded","");
    return 0;
}



undefined8 FUN_1404d16d0(longlong param_1,uint *param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong local_res8;
    uint local_48 [2];
    undefined8 *local_40;
    undefined local_38 [16];

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
        lVar3 = *(longlong *)(lVar1 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < *param_2) {
                lVar6 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar6 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar6;
        } while (lVar6 != 0);
    }
    if ((local_res8 == lVar1) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) &&
        (lVar1 = *(longlong *)(local_res8 + 0x28), *(int *)(*(longlong *)(lVar1 + 8) + 4) < 6)) {
        lVar3 = *(longlong *)(param_1 + 0xa0);
        local_res8 = lVar3;
        if (*(longlong *)(lVar3 + 8) != 0) {
            lVar6 = *(longlong *)(lVar3 + 8);
            do {
                if (*(uint *)(lVar6 + 0x20) < *param_2) {
                    lVar4 = *(longlong *)(lVar6 + 0x18);
                }
                else {
                    lVar4 = *(longlong *)(lVar6 + 0x10);
                    local_res8 = lVar6;
                }
                lVar6 = lVar4;
            } while (lVar4 != 0);
        }
        if ((local_res8 == lVar3) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        puVar8 = (undefined8 *)0x0;
        if (local_res8 == lVar3) {
            puVar5 = (undefined8 *)FUN_14018b280(0x30);
            puVar7 = puVar8;
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = lVar1;
                puVar5[3] = 0;
                puVar5[2] = 0;
                puVar5[4] = 0;
                *(undefined4 *)(puVar5 + 5) = 0;
                *puVar5 = &PTR_LAB_140b69028;
                puVar7 = puVar5;
            }
            local_48[0] = *param_2;
            local_40 = puVar7;
            FUN_140055f80(param_1 + 0x98,local_38,local_48);
        }
        else {
            puVar7 = *(undefined8 **)(local_res8 + 0x28);
        }
        iVar2 = FUN_1404d1230(puVar7,param_2);
        if (iVar2 < 0) {
            if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
            }
            FUN_1404d2cb0(param_1 + 0x98,param_2);
        }
        else {
            lVar6 = (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4);
            lVar3 = *(longlong *)(param_1 + 0xb8 + lVar6 * 8);
            if (param_2[8] != 0) {
                if (lVar3 != 0) {
                    puVar8 = *(undefined8 **)(lVar3 + 8);
                }
                *(undefined8 **)(param_1 + 0xb8 + lVar6 * 8) = puVar7;
                if (param_3 == 0) {
                    FUN_1404318f0(*(undefined8 *)(DAT_140c65898 + 0x7340),lVar1,puVar8);
                    if (((*(longlong *)(DAT_140c65898 + 0x7fe0) != 0) &&
                         (*(longlong *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x18) != 0)) &&
                        (iVar2 = FUN_1400480b0(), iVar2 != 0)) {
                        FUN_140435810();
                    }
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1404d18e0(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined4 uVar7;
    longlong local_res8;

    lVar1 = DAT_140c65a38;
    lVar2 = *(longlong *)(DAT_140c65a38 + 0xa0);
    local_res8 = lVar2;
    if (*(longlong *)(lVar2 + 8) != 0) {
        lVar4 = *(longlong *)(lVar2 + 8);
        do {
            if (*(uint *)(lVar4 + 0x20) < *param_2) {
                lVar5 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                lVar5 = *(longlong *)(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 == lVar2) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        lVar2 = *(longlong *)(local_res8 + 0x28);
        FUN_1404d13a0(lVar2,param_2[2],param_2[1],param_2[3]);
        lVar5 = DAT_140c65898;
        lVar1 = lVar1 + (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 8) + 4) * 8;
        lVar4 = *(longlong *)(lVar1 + 0xb8);
        if ((param_2[4] != 0) &&
            ((lVar4 == 0 || (**(uint **)(*(longlong *)(lVar4 + 8) + 8) != *param_2)))) {
            uVar6 = 0;
            if (lVar4 != 0) {
                uVar6 = *(undefined8 *)(lVar4 + 8);
            }
            *(longlong *)(lVar1 + 0xb8) = lVar2;
            lVar1 = *(longlong *)(lVar2 + 8);
            if (lVar1 == 0) {
                uVar7 = 5;
            }
            else {
                uVar7 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 4);
            }
            FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"RewardTrackActive",&DAT_1409ef984,uVar7,lVar1,
                          uVar6);
            if (((*(longlong *)(DAT_140c65898 + 0x7fe0) != 0) &&
                 (*(longlong *)(*(longlong *)(DAT_140c65898 + 0x7fe0) + 0x18) != 0)) &&
                (iVar3 = FUN_1400480b0(), iVar3 != 0)) {
                FUN_140435810();
            }
        }
    }
    return 0;
}



undefined8 FUN_1404d1a40(longlong param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong local_res8;

    uVar2 = *param_2;
    if (uVar2 == 0) {
        local_res8 = param_1;
        FUN_1404d1570(DAT_140c65a38);
        return 0;
    }
    lVar1 = DAT_140c65a38 + 0x98;
    lVar3 = *(longlong *)(DAT_140c65a38 + 0xa0);
    local_res8 = lVar3;
    lVar4 = *(longlong *)(lVar3 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < uVar2) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    lVar3 = local_res8;
    if (local_res8 != *(longlong *)(DAT_140c65a38 + 0xa0)) {
        *(undefined8 *)
                (DAT_140c65a38 + 0xb8 +
                 (longlong)*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(local_res8 + 0x28) + 8) + 8) + 4)
                 * 8) = 0;
        puVar5 = *(undefined8 **)(local_res8 + 0x28);
        if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
        }
        local_res8 = lVar3;
        FUN_1404d2da0(lVar1,&local_res8);
    }
    return 0;
}



undefined8 FUN_1404d1b20(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0xa0);
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



undefined8 * FUN_1404d1b80(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;

    lVar2 = DAT_140c65a38;
    param_2[1] = 0;
    *param_2 = 0;
    lVar4 = *(longlong *)(lVar2 + 0x10);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (lVar5 != lVar4) {
        do {
            iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 8) + 8);
            if ((iVar3 == 0) ||
                (iVar3 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),iVar3,0,0,0),
                        iVar3 != 0)) {
                FUN_140033260(param_2,lVar5 + 0x28);
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
                for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar4 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(lVar2 + 0x10));
    }
    return param_2;
}



longlong * FUN_1404d1c80(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;

    lVar5 = DAT_140c65a38;
    param_2[1] = 0;
    plVar6 = (longlong *)(lVar5 + 0xb8);
    *param_2 = 0;
    lVar5 = 5;
    do {
        if (*plVar6 != 0) {
            lVar2 = param_2[1];
            uVar3 = *(undefined8 *)(*plVar6 + 8);
            lVar1 = lVar2 + 1;
            lVar4 = FUN_14018db00(*param_2,lVar1,8);
            *(undefined8 *)(lVar4 + lVar2 * 8) = uVar3;
            lVar2 = *param_2;
            if (lVar2 != lVar4) {
                FUN_1407db590(lVar4,lVar2,param_2[1] << 3);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                *param_2 = lVar4;
            }
            param_2[1] = lVar1;
        }
        plVar6 = plVar6 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return param_2;
}



undefined8 FUN_1404d1d50(longlong param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;

    lVar3 = *(longlong *)(param_1 + 0x10);
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
    if ((((local_res8 != lVar3) && (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 != 0)) &&
         ((iVar2 = *(int *)(*(longlong *)(lVar3 + 8) + 8), iVar2 == 0 ||
                                                           (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                                                                   (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),iVar2,0,0,0),
                                                                   iVar2 != 0)))) &&
        ((((*(byte *)(*(longlong *)(lVar3 + 8) + 0x54) & 1) == 0 || (*(longlong *)(lVar3 + 0x20) == 0))
          || ((lVar3 = FUN_1404d1b20(param_1,**(undefined4 **)(*(longlong *)(lVar3 + 0x20) + 8)),
                lVar3 != 0 && (*(int *)(lVar3 + 0x28) != 0)))))) {
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404d1e40(ulonglong param_1,uint param_2)

{
    short sVar1;
    int *piVar2;
    longlong lVar3;
    int *piVar4;
    int iVar5;
    undefined2 *puVar6;
    longlong lVar7;
    longlong lVar8;
    short *psVar9;
    longlong lVar10;
    ulonglong local_res8;
    longlong local_res18;
    undefined **local_f8;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_38 [16];
    undefined2 *local_28;

    lVar3 = DAT_140c65a38;
    local_res8 = param_1;
    FUN_1400b6f30(&local_f8);
    lVar10 = 0;
    local_28 = (undefined2 *)0x0;
    local_38 = ZEXT816(0);
    local_f8 = &PTR_FUN_140b69230;
    puVar6 = (undefined2 *)FUN_14018b280(0x10,0);
    local_28 = puVar6 + 8;
    local_38 = CONCAT88(puVar6,puVar6);
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    lVar7 = FUN_14018b280(0x60);
    lVar8 = lVar10;
    if (lVar7 != 0) {
        lVar8 = FUN_1404db7e0(lVar7,*(undefined8 *)(DAT_140c65898 + 0x78));
    }
    FUN_1400b7480(&local_f8,lVar8);
    lVar8 = *(longlong *)(lVar3 + 0x10);
    local_res18 = lVar8;
    lVar7 = *(longlong *)(lVar8 + 8);
    while (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x20) < param_2) {
            lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
            local_res18 = lVar7;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        }
    }
    if ((local_res18 == lVar8) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar8;
    }
    if (local_res18 == lVar8) {
        FUN_1403cc530(DAT_140c65898,0x8d);
        goto LAB_1404d204f;
    }
    lVar8 = *(longlong *)(local_res18 + 0x28);
    iVar5 = FUN_1404d1d50(lVar3,param_2);
    if (iVar5 == 0) {
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) goto LAB_1404d1fb6;
        sVar1 = *psVar9;
        while (sVar1 != 0) {
            lVar10 = lVar10 + 1;
            sVar1 = psVar9[lVar10];
        }
        LAB_1404d1fe0:
        FUN_14001c480(local_f0,psVar9,psVar9 + lVar10);
    }
    else {
        piVar2 = *(int **)(lVar8 + 8);
        lVar3 = *(longlong *)(lVar3 + 0xb8 + (longlong)piVar2[1] * 8);
        if ((lVar3 == 0) || (piVar4 = *(int **)(*(longlong *)(lVar3 + 8) + 8), *piVar4 != *piVar2)) {
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)param_2;
            FUN_1403f4900(DAT_140c65898,1999,&local_res8);
            goto LAB_1404d204f;
        }
        psVar9 = (short *)FUN_14034bdd0(piVar4,0xa0ef0);
        if (psVar9 != (short *)0x0) {
            sVar1 = *psVar9;
            while (sVar1 != 0) {
                lVar10 = lVar10 + 1;
                sVar1 = psVar9[lVar10];
            }
            goto LAB_1404d1fe0;
        }
        LAB_1404d1fb6:
        if (local_e8 != local_e0) {
            *local_e8 = 0;
            local_e0 = local_e8;
        }
    }
    lVar10 = FUN_1400b7660(&local_f8);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GenericFloater",&DAT_1409eeefc,
                  *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 8),*(undefined8 *)(lVar10 + 8)
    );
    LAB_1404d204f:
    if (local_38._0_8_ != 0) {
        FUN_14018b900(local_38._0_8_,0);
    }
    FUN_1400b7390(&local_f8);
    return;
}



undefined8 * FUN_1404d2090(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b69008;
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1404d20e0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b69010;
    FUN_1403fbac0();
    lVar1 = param_1[5];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1404d2150(longlong param_1,longlong param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;
    byte bVar7;
    ulonglong uVar8;

    if (param_2 == 0) {
        return 0x80004005;
    }
    *(longlong *)(param_1 + 8) = param_2;
    uVar8 = 0;
    uVar6 = 0;
    do {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 8) + 0x28 + uVar8 * 4);
        if (uVar2 == 0) break;
        if (uVar2 < uVar6) goto LAB_1404d220d;
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar1 = lVar3 + 1;
        lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x10),lVar1,4);
        *(uint *)(lVar4 + lVar3 * 4) = uVar2;
        if (*(longlong *)(param_1 + 0x10) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) << 2);
            if (*(longlong *)(param_1 + 0x10) != 0) {
                (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 8))();
            }
            *(longlong *)(param_1 + 0x10) = lVar4;
        }
        bVar7 = (char)uVar8 + 1;
        uVar8 = (ulonglong)bVar7;
        *(longlong *)(param_1 + 0x18) = lVar1;
        uVar6 = uVar2;
    } while (bVar7 < 10);
    if (*(longlong *)(param_1 + 0x18) == 0) {
        LAB_1404d220d:
        uVar5 = 0x80004005;
    }
    else {
        FUN_1403fc6f0(param_1 + 0x38);
        uVar5 = 0;
    }
    return uVar5;
}



bool FUN_1404d2240(longlong param_1,uint param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;

    lVar1 = *(longlong *)(param_1 + 8);
    uVar5 = (ulonglong)param_2;
    if (lVar1 == 0) {
        return false;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar4 = 0xffffffff;
    if (uVar3 != 0xffffffff) {
        uVar4 = uVar3;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
        uVar2 = uVar4;
    }
    if ((param_2 < uVar2) && (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) != 0)) {
        uVar4 = 0xffffffff;
        if (uVar3 != 0xffffffff) {
            uVar4 = uVar3;
        }
        uVar3 = 0;
        if (uVar4 != 0) {
            uVar3 = uVar4;
        }
        if ((uVar3 <= param_2) || ((*(uint *)(param_1 + 0x20) >> (param_2 & 0x1f) & 1) == 0)) {
            if (uVar5 < *(ulonglong *)(lVar1 + 0x18)) {
                return *(uint *)(*(longlong *)(lVar1 + 0x10) + uVar5 * 4) <= *(uint *)(param_1 + 0x24);
            }
            return true;
        }
    }
    return false;
}



void FUN_1404d22f0(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int iVar5;

    *param_1 = &PTR_FUN_140b69030;
    lVar3 = *(longlong *)(param_1[2] + 0x10);
    if (lVar3 != param_1[2]) {
        do {
            puVar4 = *(undefined8 **)(lVar3 + 0x28);
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
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
    lVar3 = *(longlong *)(param_1[6] + 0x10);
    if (lVar3 != param_1[6]) {
        do {
            puVar4 = *(undefined8 **)(lVar3 + 0x28);
            if (puVar4 != (undefined8 *)0x0) {
                (**(code **)*puVar4)(puVar4,1);
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
        } while (lVar3 != param_1[6]);
    }
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
    puVar4 = param_1 + 0x13;
    iVar5 = 4;
    do {
        lVar3 = puVar4[-2];
        puVar4 = puVar4 + -2;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404d25c0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    char *pcVar3;
    uint *puVar4;
    ulonglong uVar5;
    char *pcVar6;
    uint uVar7;
    int iVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    longlong *plVar14;
    longlong lVar15;
    ulonglong *puVar16;
    longlong lVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    char *pcVar20;
    char *pcVar21;
    longlong lVar22;
    longlong *plVar23;
    uint uVar24;
    bool bVar25;
    ulonglong local_res10;
    ulonglong local_res18;
    ulonglong local_res20;
    uint local_68;
    undefined4 uStack100;
    longlong *local_60;
    undefined local_58 [24];

    uVar24 = 0;
    do {
        plVar23 = (longlong *)0x0;
        plVar9 = plVar23;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64cac != 0) || (iVar8 = FUN_1402309e0(), iVar8 < 0)) break;
            uVar7 = (**(code **)(*DAT_140c64718 + 0x28))();
        }
        else {
            uVar7 = (*DAT_140c63838)(&PTR_u_RewardTrack_140a6cc10);
        }
        if (uVar7 <= uVar24) break;
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c64cac == 0) && (iVar8 = FUN_1402309e0(), -1 < iVar8)) {
                plVar9 = (longlong *)(**(code **)(*DAT_140c64718 + 0x20))(DAT_140c64718,uVar24);
            }
        }
        else {
            plVar9 = (longlong *)(*DAT_140c63848)(&PTR_u_RewardTrack_140a6cc10,uVar24,DAT_140c63858);
        }
        plVar10 = (longlong *)FUN_14018b280(0x48);
        if (plVar10 != (longlong *)0x0) {
            plVar10[1] = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
            plVar10[4] = 0;
            plVar10[6] = 0;
            plVar10[5] = 0;
            plVar10[8] = 0;
            plVar10[7] = 0;
            *plVar10 = (longlong)&PTR_FUN_140b69010;
            plVar23 = plVar10;
        }
        iVar8 = (**(code **)(*plVar23 + 8))(plVar23,plVar9);
        if (iVar8 < 0) {
            (**(code **)*plVar23)(plVar23);
            uVar24 = uVar24 + 1;
        }
        else {
            local_68 = *(uint *)plVar9;
            local_60 = plVar23;
            FUN_140055f80(param_1 + 8,local_58,&local_68);
            lVar22 = (longlong)*(int *)(plVar23[1] + 4) * 0x10 + param_1;
            lVar1 = *(longlong *)(lVar22 + 0x50);
            lVar15 = lVar1 + 1;
            lVar11 = FUN_14018db00(*(undefined8 *)(lVar22 + 0x48),lVar15,8);
            *(longlong **)(lVar11 + lVar1 * 8) = plVar23;
            if (*(longlong *)(lVar22 + 0x48) != lVar11) {
                FUN_1407db590(lVar11,*(longlong *)(lVar22 + 0x48),*(longlong *)(lVar22 + 0x50) << 3);
                lVar1 = *(longlong *)(lVar22 + 0x48);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                *(longlong *)(lVar22 + 0x48) = lVar11;
            }
            *(longlong *)(lVar22 + 0x50) = lVar15;
            uVar24 = uVar24 + 1;
        }
    } while( true );
    LAB_1404d2790:
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64c80 != 0) || (iVar8 = FUN_140230e20(), iVar8 < 0)) goto LAB_1404d2a7e;
        uVar24 = (**(code **)(*DAT_140c64d60 + 0x28))();
    }
    else {
        uVar24 = (*DAT_140c63838)(&PTR_u_RewardTrackRewards_140a6cc48);
    }
    uVar7 = (uint)plVar9;
    if (uVar24 <= uVar7) goto LAB_1404d2a7e;
    if (DAT_140c63848 == (code *)0x0) {
        plVar9 = plVar23;
        if ((_DAT_140c64c80 == 0) && (iVar8 = FUN_140230e20(), -1 < iVar8)) {
            plVar9 = (longlong *)(**(code **)(*DAT_140c64d60 + 0x20))();
        }
    }
    else {
        plVar9 = (longlong *)(*DAT_140c63848)(&PTR_u_RewardTrackRewards_140a6cc48,plVar9,DAT_140c63858);
    }
    uVar18 = *(ulonglong *)(param_1 + 0x10);
    uVar19 = uVar18;
    if (*(ulonglong *)(uVar18 + 8) != 0) {
        uVar12 = *(ulonglong *)(uVar18 + 8);
        do {
            if (*(uint *)(uVar12 + 0x20) < *(uint *)((longlong)plVar9 + 4)) {
                uVar13 = *(ulonglong *)(uVar12 + 0x18);
            }
            else {
                uVar13 = *(ulonglong *)(uVar12 + 0x10);
                uVar19 = uVar12;
            }
            uVar12 = uVar13;
        } while (uVar13 != 0);
    }
    if ((uVar19 == uVar18) || (*(uint *)((longlong)plVar9 + 4) < *(uint *)(uVar19 + 0x20))) {
        local_res18 = uVar18;
        puVar16 = &local_res18;
    }
    else {
        local_res10 = uVar19;
        puVar16 = &local_res10;
    }
    if (*puVar16 == uVar18) {
        LAB_1404d2a6f:
        plVar9 = (longlong *)(ulonglong)(uVar7 + 1);
    }
    else {
        uVar2 = *(undefined8 *)(*puVar16 + 0x28);
        plVar14 = (longlong *)FUN_14018b280(0x20);
        plVar10 = plVar23;
        if (plVar14 != (longlong *)0x0) {
            plVar14[1] = 0;
            plVar14[3] = 0;
            plVar14[2] = 0;
            *plVar14 = (longlong)&PTR_FUN_140b69008;
            plVar10 = plVar14;
        }
        iVar8 = FUN_1404d3050(plVar10);
        if (iVar8 < 0) {
            if (plVar10 == (longlong *)0x0) goto LAB_1404d2a6f;
            (**(code **)*plVar10)(plVar10);
            plVar9 = (longlong *)(ulonglong)(uVar7 + 1);
        }
        else {
            FUN_1404d2ea0(uVar2,plVar10);
            pcVar3 = *(char **)(param_1 + 0x30);
            local_68 = *(uint *)plVar9;
            bVar25 = true;
            pcVar6 = pcVar3;
            pcVar21 = *(char **)(pcVar3 + 8);
            while (pcVar21 != (char *)0x0) {
                bVar25 = local_68 < *(uint *)(pcVar21 + 0x20);
                pcVar6 = pcVar21;
                if (bVar25) {
                    pcVar21 = *(char **)(pcVar21 + 0x10);
                }
                else {
                    pcVar21 = *(char **)(pcVar21 + 0x18);
                }
            }
            pcVar21 = pcVar6;
            local_60 = plVar10;
            if (!bVar25) {
                LAB_1404d29bd:
                if (*(uint *)(pcVar21 + 0x20) < local_68) {
                    if ((pcVar6 == pcVar3) || (local_68 < *(uint *)(pcVar6 + 0x20))) {
                        lVar15 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack100,local_68);
                            *(longlong **)(lVar15 + 0x28) = plVar10;
                        }
                        *(longlong *)(pcVar6 + 0x10) = lVar15;
                        pcVar3 = *(char **)(param_1 + 0x30);
                        if (pcVar6 == pcVar3) {
                            *(longlong *)(pcVar3 + 8) = lVar15;
                            *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = lVar15;
                        }
                        else if (pcVar6 == *(char **)(pcVar3 + 0x10)) {
                            *(longlong *)(pcVar3 + 0x10) = lVar15;
                        }
                    }
                    else {
                        lVar15 = FUN_14018b280(0x30);
                        if ((undefined8 *)(lVar15 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar15 + 0x20) = CONCAT44(uStack100,local_68);
                            *(longlong **)(lVar15 + 0x28) = plVar10;
                        }
                        *(longlong *)(pcVar6 + 0x18) = lVar15;
                        if (pcVar6 == *(char **)(*(longlong *)(param_1 + 0x30) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = lVar15;
                        }
                    }
                    *(char **)(lVar15 + 8) = pcVar6;
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                    *(undefined8 *)(lVar15 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
                }
                goto LAB_1404d2a6f;
            }
            if (pcVar6 != *(char **)(pcVar3 + 0x10)) {
                if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                    pcVar21 = *(char **)(pcVar6 + 0x18);
                }
                else {
                    pcVar21 = *(char **)(pcVar6 + 0x10);
                    if (pcVar21 == (char *)0x0) {
                        pcVar21 = *(char **)(pcVar6 + 8);
                        pcVar20 = pcVar21;
                        if (pcVar6 == *(char **)(pcVar21 + 0x10)) {
                            do {
                                pcVar21 = *(char **)(pcVar20 + 8);
                                bVar25 = pcVar20 == *(char **)(pcVar21 + 0x10);
                                pcVar20 = pcVar21;
                            } while (bVar25);
                        }
                    }
                    else {
                        for (pcVar20 = *(char **)(pcVar21 + 0x18); pcVar20 != (char *)0x0;
                             pcVar20 = *(char **)(pcVar20 + 0x18)) {
                            pcVar21 = pcVar20;
                        }
                    }
                }
                goto LAB_1404d29bd;
            }
            FUN_140055e80(param_1 + 0x28,&local_res20,0,pcVar6,&local_68);
            plVar9 = (longlong *)(ulonglong)(uVar7 + 1);
        }
    }
    goto LAB_1404d2790;
    LAB_1404d2a7e:
    uVar18 = *(ulonglong *)(param_1 + 0x10);
    uVar19 = *(ulonglong *)(uVar18 + 0x10);
    if (uVar19 == uVar18) {
        return 0;
    }
    LAB_1404d2a90:
    lVar15 = *(longlong *)(uVar19 + 0x28);
    puVar4 = *(uint **)(lVar15 + 8);
    uVar24 = puVar4[0x14];
    if (uVar24 != 0) {
        uVar12 = *(ulonglong *)(param_1 + 0x10);
        uVar5 = uVar12;
        uVar13 = *(ulonglong *)(uVar12 + 8);
        while (uVar13 != 0) {
            if (*(uint *)(uVar13 + 0x20) < uVar24) {
                uVar13 = *(ulonglong *)(uVar13 + 0x18);
            }
            else {
                uVar5 = uVar13;
                uVar13 = *(ulonglong *)(uVar13 + 0x10);
            }
        }
        if ((uVar5 == uVar12) || (uVar24 < *(uint *)(uVar5 + 0x20))) {
            local_res20 = uVar12;
            puVar16 = &local_res20;
        }
        else {
            local_res18 = uVar5;
            puVar16 = &local_res18;
        }
        if ((*puVar16 == uVar18) || (lVar1 = *(longlong *)(*puVar16 + 0x28), lVar1 == 0)) {
            local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)*puVar4;
            FUN_1404d2f60(param_1 + 8,&local_res10);
            lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(uVar19 + 0x28) + 8) + 4);
            plVar9 = *(longlong **)(param_1 + 0x50 + lVar15 * 0x10);
            if (plVar9 != (longlong *)0x0) {
                plVar10 = *(longlong **)(param_1 + 0x48 + lVar15 * 0x10);
                plVar14 = plVar23;
                do {
                    if (*plVar10 == *(longlong *)(uVar19 + 0x28)) goto LAB_1404d2c18;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                    plVar10 = plVar10 + 1;
                } while (plVar14 < plVar9);
            }
        }
        else {
            if ((((*(byte *)(*(longlong *)(lVar1 + 8) + 0x54) & 1) == 0) ||
                 (*(longlong *)(lVar1 + 0x30) == 0)) || (**(longlong **)(lVar1 + 0x28) == 0)) {
                lVar22 = *(longlong *)(lVar1 + 0x30);
                lVar11 = lVar22 + 1;
                lVar17 = FUN_14018db00(*(undefined8 *)(lVar1 + 0x28),lVar11,8);
                *(longlong *)(lVar17 + lVar22 * 8) = lVar15;
                if (*(longlong *)(lVar1 + 0x28) != lVar17) {
                    FUN_1407db590(lVar17,*(longlong *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x30) << 3);
                    lVar15 = *(longlong *)(lVar1 + 0x28);
                    if (lVar15 != 0) {
                        (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
                    }
                    *(longlong *)(lVar1 + 0x28) = lVar17;
                }
                *(longlong *)(lVar1 + 0x30) = lVar11;
                *(longlong *)(*(longlong *)(uVar19 + 0x28) + 0x20) = lVar1;
                goto LAB_1404d2c38;
            }
            local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)*puVar4;
            FUN_1404d2f60(param_1 + 8,&local_res10);
            lVar15 = (longlong)*(int *)(*(longlong *)(*(longlong *)(uVar19 + 0x28) + 8) + 4);
            plVar9 = *(longlong **)(param_1 + 0x50 + lVar15 * 0x10);
            if (plVar9 != (longlong *)0x0) {
                plVar10 = *(longlong **)(param_1 + 0x48 + lVar15 * 0x10);
                plVar14 = plVar23;
                do {
                    if (*plVar10 == *(longlong *)(uVar19 + 0x28)) goto LAB_1404d2c18;
                    plVar14 = (longlong *)((longlong)plVar14 + 1);
                    plVar10 = plVar10 + 1;
                } while (plVar14 < plVar9);
            }
        }
        goto LAB_1404d2c25;
    }
    goto LAB_1404d2c38;
    LAB_1404d2c18:
    FUN_140007270(param_1 + (lVar15 * 2 + 9) * 8);
    LAB_1404d2c25:
    if (*(undefined8 **)(uVar19 + 0x28) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(uVar19 + 0x28))();
    }
    LAB_1404d2c38:
    uVar18 = *(ulonglong *)(uVar19 + 0x18);
    if (uVar18 == 0) {
        uVar18 = *(ulonglong *)(uVar19 + 8);
        if (uVar19 == *(ulonglong *)(uVar18 + 0x18)) {
            do {
                uVar19 = uVar18;
                uVar18 = *(ulonglong *)(uVar19 + 8);
            } while (uVar19 == *(ulonglong *)(uVar18 + 0x18));
        }
        if (*(ulonglong *)(uVar19 + 0x18) != uVar18) {
            uVar19 = uVar18;
        }
    }
    else {
        for (uVar12 = *(ulonglong *)(uVar18 + 0x10); uVar19 = uVar18, uVar12 != 0;
             uVar12 = *(ulonglong *)(uVar12 + 0x10)) {
            uVar18 = uVar12;
        }
    }
    uVar18 = *(ulonglong *)(param_1 + 0x10);
    if (uVar19 == uVar18) {
        return 0;
    }
    goto LAB_1404d2a90;
}



longlong FUN_1404d2cb0(longlong param_1,uint *param_2)

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
    FUN_1404d31b0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1404d2da0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad50,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404d2e66. Too many branches
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



void FUN_1404d2ea0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res10;

    uVar1 = 1;
    lVar4 = *(longlong *)(param_1 + 0x18) + -1;
    local_res10 = param_2;
    if (lVar4 != 0) {
        lVar3 = 0;
        lVar2 = lVar4;
        do {
            if (((*(uint *)(*(longlong *)(param_2 + 8) + 8) & uVar1) != 0) &&
                ((*(byte *)(*(longlong *)(param_2 + 8) + 0x10) & 1) == 0)) {
                FUN_140033260(*(longlong *)(param_1 + 0x38) + lVar3,&local_res10);
            }
            uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
            lVar3 = lVar3 + 0x10;
            lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
    }
    if (((*(uint *)(*(longlong *)(param_2 + 8) + 8) & 1 << ((byte)lVar4 & 0x1f)) != 0) &&
        ((*(byte *)(*(longlong *)(param_2 + 8) + 0x10) & 1) != 0)) {
        FUN_140033260(lVar4 * 0x10 + *(longlong *)(param_1 + 0x38),&local_res10);
    }
    return;
}



longlong FUN_1404d2f60(longlong param_1,uint *param_2)

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
    FUN_1404d3290(param_1,local_res18,&local_res8);
    return lVar4;
}



undefined8 FUN_1404d3050(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    byte bVar8;
    ulonglong uVar9;

    if (param_2 == 0) {
        return 0x80004005;
    }
    *(longlong *)(param_1 + 8) = param_2;
    uVar9 = 0;
    do {
        lVar4 = *(longlong *)(param_1 + 8);
        iVar1 = *(int *)(lVar4 + 0x1c + uVar9 * 4);
        if (((1 < iVar1) || (iVar2 = *(int *)(lVar4 + 0x28 + uVar9 * 4), iVar2 == 0)) ||
            (uVar3 = *(uint *)(lVar4 + 0x34 + uVar9 * 4), uVar3 == 0)) break;
        if ((iVar1 == 1) && (1 < uVar3)) goto LAB_1404d3164;
        lVar4 = *(longlong *)(param_1 + 0x18);
        lVar6 = FUN_14018db00(*(undefined8 *)(param_1 + 0x10),lVar4 + 1,0xc);
        *(int *)(lVar6 + lVar4 * 0xc) = iVar1;
        *(int *)(lVar6 + 4 + lVar4 * 0xc) = iVar2;
        *(uint *)(lVar6 + 8 + lVar4 * 0xc) = uVar3;
        if (*(longlong *)(param_1 + 0x10) != lVar6) {
            FUN_1407db590(lVar6,*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18) * 0xc);
            lVar5 = *(longlong *)(param_1 + 0x10);
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *(longlong *)(param_1 + 0x10) = lVar6;
        }
        bVar8 = (char)uVar9 + 1;
        uVar9 = (ulonglong)bVar8;
        *(longlong *)(param_1 + 0x18) = lVar4 + 1;
    } while (bVar8 < 3);
    if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x10) & 4) == 0) ||
        (*(ulonglong *)(param_1 + 0x18) < 2)) {
        uVar7 = 0;
        if (*(longlong *)(param_1 + 0x18) == 0) {
            uVar7 = 0x80004005;
        }
    }
    else {
        LAB_1404d3164:
        uVar7 = 0x80004005;
    }
    return uVar7;
}



void FUN_1404d31b0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1404d2da0(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_1404d3290(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1404d3370(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_1404d3370(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8ad54,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404d3436. Too many branches
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



undefined8 * FUN_1404d3470(undefined8 *param_1,undefined8 *param_2)

{
    short sVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *local_48;

    puVar6 = (undefined8 *)0x0;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    psVar2 = (short *)param_2[3];
    if (psVar2 == (short *)0x0) {
        param_1[3] = 0;
    }
    else {
        sVar1 = *psVar2;
        puVar5 = puVar6;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = psVar2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        puVar7 = puVar6;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar5;
            puVar7 = puVar3;
        }
        puVar7 = puVar7 + 2;
        FUN_1407db590(puVar7,psVar2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar7) = 0;
        param_1[3] = puVar7;
    }
    param_1[5] = 0;
    param_1[4] = 0;
    puVar5 = puVar6;
    puVar7 = puVar6;
    if (*(int *)(param_2 + 4) == 0) {
        return param_1;
    }
    do {
        psVar2 = *(short **)(param_2[5] + (longlong)puVar5);
        if (psVar2 == (short *)0x0) {
            local_48 = (undefined8 *)0x0;
        }
        else {
            sVar1 = *psVar2;
            puVar3 = puVar6;
            while (sVar1 != 0) {
                puVar3 = (undefined8 *)((longlong)puVar3 + 1);
                sVar1 = psVar2[(longlong)puVar3];
            }
            puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar3 * 2 + 0x12,0);
            local_48 = puVar6;
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_LAB_140b55060;
                puVar4[1] = puVar3;
                local_48 = puVar4;
            }
            local_48 = local_48 + 2;
            FUN_1407db590(local_48,psVar2,(longlong)puVar3 * 2);
            *(undefined2 *)((longlong)puVar3 * 2 + (longlong)local_48) = 0;
        }
        FUN_1404d4c70(param_1 + 4);
        if (local_48 != (undefined8 *)0x0) {
            (**(code **)(local_48[-2] + 8))(local_48 + -2);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        puVar5 = puVar5 + 2;
    } while (puVar7 < (undefined8 *)(ulonglong)*(uint *)(param_2 + 4));
    return param_1;
}



undefined8 * FUN_1404d3630(undefined8 *param_1,undefined8 *param_2)

{
    short sVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *local_48;

    puVar8 = (undefined8 *)0x0;
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 4);
    psVar2 = (short *)param_2[5];
    if (psVar2 == (short *)0x0) {
        param_1[6] = 0;
    }
    else {
        sVar1 = *psVar2;
        puVar7 = puVar8;
        while (sVar1 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar1 = psVar2[(longlong)puVar7];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        puVar4 = puVar8;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar7;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,psVar2,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar4) = 0;
        param_1[6] = puVar4;
    }
    param_1[8] = 0;
    param_1[7] = 0;
    lVar5 = FUN_140215240(*(undefined4 *)(param_1 + 2));
    if (lVar5 != 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar5 + 0x14);
    }
    puVar7 = puVar8;
    puVar4 = puVar8;
    if (*(int *)(param_2 + 6) == 0) {
        return param_1;
    }
    do {
        psVar2 = *(short **)(param_2[7] + (longlong)puVar4);
        if (psVar2 == (short *)0x0) {
            local_48 = (undefined8 *)0x0;
        }
        else {
            sVar1 = *psVar2;
            puVar3 = puVar8;
            while (sVar1 != 0) {
                puVar3 = (undefined8 *)((longlong)puVar3 + 1);
                sVar1 = psVar2[(longlong)puVar3];
            }
            puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar3 * 2 + 0x12,0);
            local_48 = puVar8;
            if (puVar6 != (undefined8 *)0x0) {
                *puVar6 = &PTR_LAB_140b55060;
                puVar6[1] = puVar3;
                local_48 = puVar6;
            }
            local_48 = local_48 + 2;
            FUN_1407db590(local_48,psVar2,(longlong)puVar3 * 2);
            *(undefined2 *)((longlong)puVar3 * 2 + (longlong)local_48) = 0;
        }
        FUN_1404d4c70(param_1 + 7);
        if (local_48 != (undefined8 *)0x0) {
            (**(code **)(local_48[-2] + 8))(local_48 + -2);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        puVar4 = puVar4 + 2;
    } while (puVar7 < (undefined8 *)(ulonglong)*(uint *)(param_2 + 6));
    return param_1;
}



undefined8 FUN_1404d3820(longlong param_1)

{
    _FILETIME local_res8 [4];

    if ((*(int *)(param_1 + 8) < 10) && (*(longlong *)(param_1 + 0x10) != 0)) {
        GetSystemTimeAsFileTime(local_res8);
        if ((ulonglong)local_res8[0] <= *(longlong *)(param_1 + 0x10) + 36000000000U) {
            return 0;
        }
    }
    return 1;
}



undefined8 * FUN_1404d3870(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b690d0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1404d38b0(void)

{
    int iVar1;

    if (DAT_140c65a40 == (undefined8 *)0x0) {
        DAT_140c65a40 = (undefined8 *)FUN_14018b280();
        if (DAT_140c65a40 == (undefined8 *)0x0) {
            DAT_140c65a40 = (undefined8 *)0x0;
        }
        else {
            *DAT_140c65a40 = 0;
            DAT_140c65a40[1] = 0;
            DAT_140c65a40[2] = 0;
            DAT_140c65a40[3] = 0;
            DAT_140c65a40[4] = 0;
            DAT_140c65a40[5] = 0;
            DAT_140c65a40[6] = 0;
            DAT_140c65a40[7] = 0;
            DAT_140c65a40[8] = 0;
            DAT_140c65a40[9] = 0;
        }
        iVar1 = FUN_1404d3990();
        if (iVar1 < 0) {
            FUN_1404d3930();
            return 0x80004005;
        }
    }
    return 0;
}



undefined8 FUN_1404d3930(void)

{
    undefined8 *puVar1;
    longlong lVar2;
    ulonglong uVar3;

    lVar2 = DAT_140c65a40;
    if (DAT_140c65a40 != 0) {
        uVar3 = 0;
        do {
            puVar1 = *(undefined8 **)(lVar2 + uVar3 * 8);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 10);
        FUN_14018b900(lVar2,0);
        DAT_140c65a40 = 0;
    }
    return 0;
}



undefined8 FUN_1404d3990(void)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    undefined *puVar4;
    int iVar5;
    ulonglong uVar6;

    lVar1 = DAT_140c65a40;
    uVar6 = 0;
    do {
        iVar5 = (int)uVar6;
        switch(iVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                plVar3 = (longlong *)FUN_14018b280(0x18);
                if (plVar3 == (longlong *)0x0) {
                    return 0x80004005;
                }
                *(undefined4 *)(plVar3 + 1) = 10;
                *plVar3 = (longlong)&PTR_FUN_140b690a0;
                goto LAB_1404d3ac0;
            case 7:
                plVar3 = (longlong *)FUN_14018b280(0x40);
                if (plVar3 == (longlong *)0x0) {
                    return 0x80004005;
                }
                *(undefined4 *)(plVar3 + 2) = 1;
                *(undefined4 *)((longlong)plVar3 + 0x14) = 0xe;
                plVar3[3] = 10;
                goto LAB_1404d3a89;
            case 8:
                plVar3 = (longlong *)FUN_14018b280(0x40);
                if (plVar3 == (longlong *)0x0) {
                    return 0x80004005;
                }
                plVar3[3] = 0xb;
                break;
            case 9:
                plVar3 = (longlong *)FUN_14018b280(0x40);
                if (plVar3 == (longlong *)0x0) {
                    return 0x80004005;
                }
                *(undefined4 *)(plVar3 + 3) = 0xb;
                *(undefined4 *)((longlong)plVar3 + 0x1c) = 1;
                break;
            default:
                goto switchD_1404d39e6_caseD_a;
        }
        *(undefined4 *)((longlong)plVar3 + 0x14) = 0xf;
        *(undefined4 *)(plVar3 + 2) = 8;
        LAB_1404d3a89:
        *(undefined4 *)(plVar3 + 1) = 10;
        *plVar3 = (longlong)&PTR_FUN_140b69080;
        puVar4 = (undefined *)FUN_14018b280(0x30);
        plVar3[5] = (longlong)puVar4;
        plVar3[6] = 0;
        *puVar4 = 0;
        *(undefined8 *)(plVar3[5] + 8) = 0;
        *(longlong *)(plVar3[5] + 0x10) = plVar3[5];
        *(longlong *)(plVar3[5] + 0x18) = plVar3[5];
        LAB_1404d3ac0:
        if ((plVar3 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar3 + 8))(), iVar2 < 0)) {
            switchD_1404d39e6_caseD_a:
            return 0x80004005;
        }
        uVar6 = uVar6 + 1;
        *(longlong **)(lVar1 + (longlong)iVar5 * 8) = plVar3;
        if (9 < uVar6) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_1404d3b40(_FILETIME param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    _FILETIME local_res8;
    int local_res10;
    undefined8 local_28;
    undefined4 local_20;

    if (9 < param_2) {
        return 0;
    }
    pplVar1 = (longlong **)(DAT_140c65a40 + (longlong)param_2 * 8);
    plVar2 = *pplVar1;
    local_res8 = param_1;
    uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3,param_4);
    if ((int)uVar4 == 0) {
        return uVar4;
    }
    plVar2 = *pplVar1;
    lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4);
    GetSystemTimeAsFileTime(&local_res8);
    if ((ulonglong)((longlong)local_res8 - *(longlong *)(lVar5 + 0x18)) < 50000000) {
        LAB_1404d3c13:
        uVar4 = 0;
    }
    else {
        GetSystemTimeAsFileTime(&local_res8);
        *(_FILETIME *)(lVar5 + 0x18) = local_res8;
        if (param_2 == 0) {
            local_res10 = 0;
            iVar3 = local_res10;
            LAB_1404d3c1f:
            local_res10 = iVar3;
            uVar4 = 0x799;
            puVar6 = (undefined8 *)&local_res10;
        }
        else {
            if (param_2 < 1) goto LAB_1404d3c13;
            iVar3 = param_2;
            if (param_2 < 7) goto LAB_1404d3c1f;
            if (9 < param_2) goto LAB_1404d3c13;
            puVar6 = &local_28;
            uVar4 = 0x79a;
            local_28 = CONCAT44(param_3,param_2);
            local_20 = param_4;
        }
        FUN_140016010(DAT_140c635f0,uVar4,puVar6);
        uVar4 = 1;
    }
    return uVar4;
}



undefined8 FUN_1404d3c50(undefined8 param_1,int *param_2)

{
    longlong *plVar1;
    longlong lVar2;

    if (9 < *param_2) {
        return 0x80070057;
    }
    plVar1 = *(longlong **)(DAT_140c65a40 + (longlong)*param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0,0);
        if (lVar2 != 0) {
            FUN_1404d4400(lVar2,param_2);
        }
    }
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"LeaderboardUpdate",&DAT_1409ef95c,
                      *param_2);
    }
    return 0;
}



undefined8 FUN_1404d3cd0(undefined8 param_1,int *param_2)

{
    longlong *plVar1;
    longlong lVar2;

    if (9 < *param_2) {
        return 0x80070057;
    }
    plVar1 = *(longlong **)(DAT_140c65a40 + (longlong)*param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2[1],param_2[2]);
        if (lVar2 != 0) {
            FUN_1404d4510(lVar2,param_2);
            if (DAT_140c65898 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"LeaderboardUpdate",&DAT_1409ef95c,
                              *param_2);
            }
        }
    }
    return 0;
}



undefined8 * FUN_1404d3d50(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_140b690a0;
    FUN_14018b900(param_1[2],0);
    *param_1 = &PTR_FUN_140b690d0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1404d3da0(longlong param_1,int param_2)

{
    undefined8 *puVar1;

    *(int *)(param_1 + 8) = param_2;
    if ((param_2 == 0) || (param_2 - 1U < 6)) {
        puVar1 = (undefined8 *)FUN_14018b280(0x30);
        if (puVar1 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar1 + 1) = 10;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *puVar1 = &PTR_LAB_140b690c0;
            puVar1[4] = 0;
            puVar1[5] = 0;
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,param_2);
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_1404d3e40(undefined8 param_1,ulonglong param_2)

{
    FUN_1404d3e80();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404d3e80(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b69080;
    lVar4 = *(longlong *)(param_1[5] + 0x10);
    if (lVar4 != param_1[5]) {
        do {
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x18))(plVar1,1);
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
        } while (lVar4 != param_1[5]);
    }
    FUN_140008410(param_1 + 4);
    FUN_140008410(param_1 + 4);
    FUN_14018b900(param_1[5],0);
    *param_1 = &PTR_FUN_140b690d0;
    return;
}



ulonglong FUN_1404d41c0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong local_res8;
    undefined4 local_38 [2];
    longlong *local_30;
    undefined local_28 [16];

    lVar6 = *(longlong *)(param_1 + 0x28);
    local_res8 = lVar6;
    if (*(longlong *)(lVar6 + 8) != 0) {
        lVar3 = *(longlong *)(lVar6 + 8);
        do {
            if (*(uint *)(lVar3 + 0x20) < *(uint *)(param_2 + 0x14)) {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                local_res8 = lVar3;
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
    }
    if ((local_res8 == lVar6) || (*(uint *)(param_2 + 0x14) < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    if (local_res8 == *(longlong *)(param_1 + 0x28)) {
        iVar1 = *(int *)(param_1 + 8);
        if ((((iVar1 == 7) || (iVar1 == 8)) || (iVar1 == 9)) &&
            ((lVar6 = FUN_14018b280(0x68), lVar6 != 0 &&
                                           (local_30 = (longlong *)FUN_1404d4700(lVar6,param_1,param_2), local_30 != (longlong *)0x0)))
                ) {
            uVar5 = (**(code **)*local_30)(local_30,*(undefined4 *)(param_1 + 8));
            if ((int)uVar5 < 0) {
                return uVar5;
            }
            uVar2 = FUN_1404d4880(local_30,param_2,param_3,param_4);
            if (-1 < (int)uVar2) {
                local_38[0] = *(undefined4 *)(param_2 + 0x14);
                FUN_140055f80(param_1 + 0x20,local_28,local_38);
                return (ulonglong)uVar2;
            }
            (**(code **)(*local_30 + 0x18))(local_30,1);
            return (ulonglong)uVar2;
        }
    }
    else if (*(longlong *)(local_res8 + 0x28) != 0) {
        uVar5 = FUN_1404d4880();
        return uVar5;
    }
    return 0x80004005;
}



void FUN_1404d43b0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001404d43df. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
        return;
    }
    return;
}



void FUN_1404d4400(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined local_58 [24];
    longlong local_40;
    longlong *local_38;
    longlong local_30;

    *(undefined4 *)(param_1 + 8) = *param_2;
    FUN_1404d4e30();
    uVar4 = 0;
    uVar6 = uVar4;
    if (param_2[4] != 0) {
        do {
            FUN_1404d3470(local_58,*(longlong *)(param_2 + 6) + uVar6);
            FUN_1404d4d40(param_1 + 0x20,local_58);
            plVar2 = local_38;
            plVar3 = local_38;
            for (lVar5 = local_30; lVar5 != 0; lVar5 = lVar5 + -1) {
                lVar1 = *plVar3;
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                plVar3 = plVar3 + 2;
            }
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(plVar2[-2] + 8))(plVar2 + -2);
            }
            if (local_40 != 0) {
                (**(code **)(*(longlong *)(local_40 + -0x10) + 8))(local_40 + -0x10);
            }
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + 0x30;
        } while (uVar4 < (uint)param_2[4]);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    return;
}



void FUN_1404d4510(longlong *param_1,int *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong local_res10;
    undefined local_90 [48];
    longlong local_60;
    undefined local_58 [24];

    if (*(int *)(param_1 + 1) == *param_2) {
        plVar1 = param_1 + 4;
        FUN_1404d5050(plVar1);
        iVar5 = (**(code **)(*param_1 + 0x10))();
        uVar7 = 0;
        if (param_2[6] != 0) {
            local_res10 = 0;
            uVar9 = uVar7;
            do {
                FUN_1404d3630(local_90,*(longlong *)(param_2 + 8) + uVar9);
                FUN_1404d4f60(plVar1,local_90);
                FUN_1403fbac0(local_58);
                if (local_60 != 0) {
                    (**(code **)(*(longlong *)(local_60 + -0x10) + 8))(local_60 + -0x10);
                }
                if (iVar5 != 0) {
                    lVar8 = *plVar1 + local_res10;
                    FUN_1404d4b30(lVar8 + 0x38);
                    plVar2 = *(longlong **)(lVar8 + 0x38);
                    lVar3 = *plVar2;
                    if (*(longlong *)(lVar8 + 0x30) == 0) {
                        *plVar2 = 0;
                    }
                    else {
                        lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + -8);
                        puVar6 = (undefined8 *)FUN_14018b280(lVar4 * 2 + 0x12,0);
                        if (puVar6 != (undefined8 *)0x0) {
                            puVar6[1] = lVar4;
                            *puVar6 = &PTR_LAB_140b55060;
                        }
                        puVar6 = puVar6 + 2;
                        FUN_1407db590(puVar6,*(undefined8 *)(lVar8 + 0x30),lVar4 * 2);
                        *(undefined2 *)(lVar4 * 2 + (longlong)puVar6) = 0;
                        *plVar2 = (longlong)puVar6;
                    }
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    *(undefined4 *)(*(longlong *)(lVar8 + 0x38) + 8) = *(undefined4 *)(lVar8 + 8);
                }
                local_res10 = local_res10 + 0x48;
                uVar7 = uVar7 + 1;
                uVar9 = uVar9 + 0x40;
            } while (uVar7 < (uint)param_2[6]);
        }
        param_1[2] = *(longlong *)(param_2 + 4);
    }
    return;
}



undefined8 * FUN_1404d4700(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    undefined4 uVar1;
    undefined *puVar2;

    *(undefined4 *)(param_1 + 1) = 10;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = param_2;
    *param_1 = &PTR_LAB_140b69058;
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 7) = uVar1;
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    return param_1;
}



undefined8 FUN_1404d4780(undefined8 param_1,ulonglong param_2)

{
    FUN_1404d47c0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404d47c0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_LAB_140b69058;
    lVar4 = *(longlong *)(param_1[10] + 0x10);
    if (lVar4 != param_1[10]) {
        do {
            plVar1 = *(longlong **)(lVar4 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x18))(plVar1,1);
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
        } while (lVar4 != param_1[10]);
    }
    FUN_140008410(param_1 + 9);
    FUN_140008410(param_1 + 9);
    FUN_14018b900(param_1[10],0);
    FUN_1404d4ec0(param_1 + 4);
    return;
}



undefined8 FUN_1404d4880(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    uint local_res18;
    uint local_48 [2];
    undefined8 *local_40;
    undefined local_38 [16];

    if (*(uint *)(param_1 + 0x3c) < param_3) {
        *(uint *)(param_1 + 0x3c) = param_3;
    }
    if (*(uint *)(param_1 + 0x40) < param_4) {
        *(uint *)(param_1 + 0x40) = param_4;
    }
    if (param_3 <= param_4) {
        do {
            puVar2 = (undefined8 *)FUN_14018b280();
            puVar4 = (undefined8 *)0x0;
            if (puVar2 != (undefined8 *)0x0) {
                *(undefined4 *)(puVar2 + 1) = 10;
                puVar2[2] = 0;
                puVar2[3] = 0;
                puVar2[5] = 0;
                puVar2[4] = 0;
                puVar2[6] = param_1;
                *puVar2 = &PTR_LAB_140b69038;
                puVar2[9] = 0;
                puVar2[8] = 0;
                uVar1 = *param_2;
                *(uint *)((longlong)puVar2 + 0x3c) = param_3;
                *(undefined4 *)(puVar2 + 7) = uVar1;
                puVar4 = puVar2;
            }
            local_res18 = (*(uint *)(*(longlong *)(param_1 + 0x30) + 0x1c) & 3) << 0x18 |
                          (param_3 & 0xff) << 0x10 | local_res18 & 0xfc000000 | (uint)*(ushort *)param_2;
            local_48[0] = local_res18;
            local_40 = puVar4;
            FUN_1404d50e0(param_1 + 0x48,local_38,local_48);
            uVar3 = (**(code **)*puVar4)();
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            param_3 = param_3 + 1;
        } while (param_3 <= param_4);
    }
    return 0;
}



longlong FUN_1404d49c0(longlong param_1,ushort param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res20;

    if (param_3 == -1) {
        return param_1;
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x1c) & 3;
    local_res20 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if ((((*(uint *)(lVar2 + 0x20) & 0xffff) < (uint)param_2) ||
             (*(byte *)(lVar2 + 0x22) < (byte)param_3)) ||
            ((int)((*(uint *)(lVar2 + 0x20) & 0xff000000) * 0x40) < (int)(uVar3 << 0x1e))) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res20 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if (((local_res20 == lVar1) || (param_2 < (ushort)*(uint *)(local_res20 + 0x20))) ||
        (((byte)param_3 < *(byte *)(local_res20 + 0x22) ||
          ((int)(uVar3 << 0x1e) < (int)((*(uint *)(local_res20 + 0x20) & 0xff000000) * 0x40))))) {
        local_res20 = lVar1;
    }
    if (local_res20 == *(longlong *)(param_1 + 0x50)) {
        return param_1;
    }
    return *(longlong *)(local_res20 + 0x28);
}



undefined8 * FUN_1404d4ad0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b69038;
    FUN_1404d4ec0();
    FUN_1404d4ec0(param_1 + 4);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404d4b30(longlong *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if ((ulonglong)param_1[1] < 2) {
        puVar2 = (undefined8 *)FUN_14018db00(*param_1,1,0x10);
        uVar5 = 0;
        if (param_1[1] == 0) {
            lVar4 = 1;
            puVar3 = puVar2;
            do {
                if (puVar3 != (undefined8 *)0x0) {
                    *puVar3 = 0;
                    *(undefined4 *)(puVar3 + 1) = 0x17;
                }
                puVar3 = puVar3 + 2;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
        if ((undefined8 *)*param_1 != puVar2) {
            uVar6 = uVar5;
            if (param_1[1] != 0) {
                do {
                    if (uVar6 + (longlong)puVar2 != 0) {
                        FUN_1404d5250(uVar6 + (longlong)puVar2,*param_1 + uVar6);
                    }
                    lVar4 = *(longlong *)(uVar6 + *param_1);
                    if (lVar4 != 0) {
                        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                    uVar5 = uVar5 + 1;
                    uVar6 = uVar6 + 0x10;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
            lVar4 = *param_1;
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *param_1 = (longlong)puVar2;
        }
    }
    else {
        uVar5 = 1;
        if ((ulonglong)param_1[1] < 2) {
            param_1[1] = 1;
            return;
        }
        lVar4 = 0x10;
        do {
            lVar1 = *(longlong *)(lVar4 + *param_1);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar5 = uVar5 + 1;
            lVar4 = lVar4 + 0x10;
        } while (uVar5 < (ulonglong)param_1[1]);
    }
    param_1[1] = 1;
    return;
}



longlong FUN_1404d4c70(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    lVar2 = FUN_14018db00(*param_1,lVar1 + 1,0x10);
    lVar3 = lVar1 * 0x10 + lVar2;
    if (lVar3 != 0) {
        FUN_1404d5250(lVar3,param_2);
    }
    if (*param_1 != lVar2) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar2 != 0) {
                    FUN_1404d5250(uVar4 + lVar2,*param_1 + uVar4);
                }
                lVar3 = *(longlong *)(uVar4 + *param_1);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x10;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_1404d4d40(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    lVar2 = FUN_14018db00(*param_1,lVar1 + 1,0x30);
    lVar3 = lVar1 * 0x30 + lVar2;
    if (lVar3 != 0) {
        FUN_1404d52f0(lVar3,param_2);
    }
    if (*param_1 != lVar2) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar2 != 0) {
                    FUN_1404d52f0(uVar4 + lVar2,*param_1 + uVar4);
                }
                lVar3 = *param_1;
                FUN_1403fbac0(lVar3 + 0x20 + uVar4);
                lVar3 = *(longlong *)(lVar3 + 0x18 + uVar4);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x30;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_1404d4e30(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = 0;
    if (param_1[1] != 0) {
        lVar3 = 0;
        do {
            lVar1 = *param_1;
            FUN_1403fbac0(lVar1 + 0x20 + lVar3);
            lVar1 = *(longlong *)(lVar1 + 0x18 + lVar3);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x30;
        } while (uVar2 < (ulonglong)param_1[1]);
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}



void FUN_1404d4ec0(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            FUN_1403fbac0(lVar1 + 0x38 + uVar3);
            lVar1 = *(longlong *)(lVar1 + 0x30 + uVar3);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x48;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001404d4f49. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



longlong FUN_1404d4f60(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    lVar2 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar2 + 1,0x48);
    lVar1 = lVar3 + lVar2 * 0x48;
    if (lVar1 != 0) {
        FUN_1404d53c0(lVar1,param_2);
    }
    if (*param_1 != lVar3) {
        uVar4 = 0;
        uVar5 = uVar4;
        if (param_1[1] != 0) {
            do {
                if (uVar4 + lVar3 != 0) {
                    FUN_1404d53c0(uVar4 + lVar3,*param_1 + uVar4);
                }
                lVar1 = *param_1;
                FUN_1403fbac0(lVar1 + 0x38 + uVar4);
                lVar1 = *(longlong *)(lVar1 + 0x30 + uVar4);
                if (lVar1 != 0) {
                    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                }
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x48;
            } while (uVar5 < (ulonglong)param_1[1]);
        }
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar2 + 1;
    return lVar2;
}



void FUN_1404d5050(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = 0;
    if (param_1[1] != 0) {
        lVar3 = 0;
        do {
            lVar1 = *param_1;
            FUN_1403fbac0(lVar1 + 0x38 + lVar3);
            lVar1 = *(longlong *)(lVar1 + 0x30 + lVar3);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x48;
        } while (uVar2 < (ulonglong)param_1[1]);
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}



char ** FUN_1404d50e0(longlong param_1,char **param_2,uint *param_3)

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
            if ((*param_3 & 0xffff) < (*(uint *)(pcVar5 + 0x20) & 0xffff)) {
                bVar6 = true;
            }
            else if (*(byte *)((longlong)param_3 + 2) < (byte)pcVar5[0x22]) {
                bVar6 = true;
            }
            else {
                bVar6 = (int)((*param_3 & 0xff000000) * 0x40) <
                        (int)((*(uint *)(pcVar5 + 0x20) & 0xff000000) * 0x40);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404d5218;
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
    if ((((ushort)*param_3 <= (ushort)*(uint *)(pcVar3 + 0x20)) &&
         (*(byte *)((longlong)param_3 + 2) <= (byte)pcVar3[0x22])) &&
        ((int)((*param_3 & 0xff000000) * 0x40) <= (int)((*(uint *)(pcVar3 + 0x20) & 0xff000000) * 0x40)
        )) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1404d5218:
    ppcVar1 = (char **)FUN_1404d5560(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong * FUN_1404d5250(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    if (*param_2 == 0) {
        *param_1 = 0;
    }
    else {
        lVar1 = *(longlong *)(*param_2 + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,*param_2,lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        *param_1 = (longlong)puVar3;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    return param_1;
}



undefined8 * FUN_1404d52f0(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    if (param_2[3] == 0) {
        param_1[3] = 0;
    }
    else {
        lVar1 = *(longlong *)(param_2[3] + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2[3],lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        param_1[3] = puVar3;
    }
    FUN_1404d54b0(param_1 + 4,param_2 + 4);
    return param_1;
}



undefined8 * FUN_1404d53c0(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    if (param_2[6] == 0) {
        param_1[6] = 0;
    }
    else {
        lVar1 = *(longlong *)(param_2[6] + -8);
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 2 + 0x12,0);
        puVar3 = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = lVar1;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2[6],lVar1 * 2);
        *(undefined2 *)(lVar1 * 2 + (longlong)puVar3) = 0;
        param_1[6] = puVar3;
    }
    FUN_1404d54b0(param_1 + 7,param_2 + 7);
    return param_1;
}



longlong * FUN_1404d54b0(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

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
    uVar4 = 0;
    *param_1 = (longlong)puVar3;
    uVar5 = uVar4;
    if (param_1[1] != 0) {
        do {
            if (*param_1 + uVar5 != 0) {
                FUN_1404d5250(*param_1 + uVar5,*param_2 + uVar5);
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x10;
        } while (uVar4 < (ulonglong)param_1[1]);
    }
    return param_1;
}



longlong *
FUN_1404d5560(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if (((ushort)*(uint *)(param_4 + 0x20) <= (ushort)*(uint *)param_5) &&
            ((*(byte *)(param_4 + 0x22) <= *(byte *)((longlong)param_5 + 2) &&
              ((int)((*(uint *)(param_4 + 0x20) & 0xff000000) * 0x40) <=
               (int)((*(uint *)param_5 & 0xff000000) * 0x40))))) {
            lVar2 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1404d5642;
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
    LAB_1404d5642:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



void FUN_1404d56b0(undefined8 *param_1)

{
    float fVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined auStack488 [32];
    undefined4 *local_1c8;
    undefined4 *local_1c0;
    undefined4 *local_1b8;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 *local_e8;
    undefined4 *local_e0;
    undefined4 *local_d8;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack488;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 1;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *param_1 = &PTR_LAB_140b690f0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x19] = 0;
    FUN_1407e4830(param_1 + 0x1a,0,0x310);
    local_1c8 = &local_188;
    uVar2 = 0x3f400000;
    uVar3 = 0x3f400000;
    uVar4 = 0x3f400000;
    uVar5 = 0x3f800000;
    local_1c0 = &local_198;
    uVar6 = 0x3f800000;
    uVar7 = 0x3f666666;
    uVar8 = 0x3f4ccccd;
    uVar9 = 0x3f800000;
    local_1a8 = 0;
    uStack420 = 0x3f800000;
    uStack416 = 0;
    uStack412 = 0;
    local_1b8 = &local_1a8;
    *(undefined4 *)(param_1 + 0x7c) = 6;
    local_198 = 0x3e8a3d71;
    uStack404 = 0x3e8a3d71;
    uStack400 = 0x3e8a3d71;
    uStack396 = 0x3f800000;
    local_188 = 0x3ee4dd2f;
    uStack388 = 0x3ee4dd2f;
    uStack384 = 0x3ee4dd2f;
    uStack380 = 0x3f800000;
    param_1[0x7d] = 0;
    local_e8 = local_1c8;
    local_e0 = local_1c0;
    local_d8 = local_1b8;
    FUN_1401aefa0(&local_e8,&local_178);
    *(undefined4 *)(param_1 + 0x1a) = local_178;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uStack372;
    *(undefined4 *)(param_1 + 0x1b) = uStack368;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uStack364;
    *(undefined4 *)(param_1 + 0x1c) = local_168;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uStack356;
    *(undefined4 *)(param_1 + 0x1d) = uStack352;
    *(undefined4 *)((longlong)param_1 + 0xec) = uStack348;
    *(undefined4 *)(param_1 + 0x1e) = local_158;
    *(undefined4 *)(param_1 + 0x20) = local_148;
    *(undefined4 *)((longlong)param_1 + 0x104) = uStack324;
    *(undefined4 *)(param_1 + 0x21) = uStack320;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uStack316;
    *(undefined4 *)(param_1 + 0x22) = local_138;
    *(undefined4 *)((longlong)param_1 + 0x114) = uStack308;
    *(undefined4 *)(param_1 + 0x23) = uStack304;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uStack300;
    *(undefined4 *)(param_1 + 0x24) = local_128;
    *(undefined4 *)(param_1 + 0x26) = local_118;
    *(undefined4 *)((longlong)param_1 + 0x134) = uStack276;
    *(undefined4 *)(param_1 + 0x27) = uStack272;
    *(undefined4 *)((longlong)param_1 + 0x13c) = uStack268;
    fVar1 = DAT_140c3b438;
    *(undefined4 *)(param_1 + 0x28) = local_108;
    *(undefined4 *)((longlong)param_1 + 0x144) = uStack260;
    *(undefined4 *)(param_1 + 0x29) = uStack256;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uStack252;
    *(undefined4 *)(param_1 + 0x2a) = local_f8;
    *(undefined (*) [16])(param_1 + 0x2c) = CONCAT412(uVar5,CONCAT48(uVar4,CONCAT44(uVar3,uVar2)));
    *(undefined (*) [16])(param_1 + 0x2e) = CONCAT412(uVar9,CONCAT48(uVar8,CONCAT44(uVar7,uVar6)));
    *(undefined4 *)(param_1 + 0x70) = 0x41800000;
    uVar2 = FUN_1408fe3d0(fVar1 * 0.005555556 * 24.75);
    *(undefined (*) [16])(param_1 + 0x30) = ZEXT1216(CONCAT48(0x3f000000,CONCAT44(uVar2,0x3f000000)));
    *(undefined4 *)(param_1 + 0x71) = 0x42c80000;
    *(undefined4 *)((longlong)param_1 + 0x38c) = 0x43160000;
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack488);
    return;
}



undefined8 FUN_1404d5900(undefined8 param_1,ulonglong param_2)

{
    FUN_1404d5940();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404d5940(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;

    lVar1 = param_1[0x19];
    *param_1 = &PTR_LAB_140b690f0;
    if (lVar1 != 0) {
        FUN_1407269a0(lVar1);
        FUN_14018b900(lVar1,0);
    }
    if ((longlong *)param_1[0x7d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7d] + 8))();
        param_1[0x7d] = 0;
    }
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    lVar1 = DAT_140c63628;
    if ((*(longlong **)(DAT_140c63628 + 0x2e0) != (longlong *)0x0) &&
        (*(longlong *)(DAT_140c63628 + 0x2e8) != 0)) {
        lVar2 = **(longlong **)(DAT_140c63628 + 0x2e0);
        uVar3 = FUN_1400518a0(DAT_140c63628,0x80,1);
        (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar1 + 0x2e0),uVar3,0,0,0,0,0);
    }
    if (DAT_140c65a48 == param_1) {
        DAT_140c65a48 = (undefined8 *)0x0;
    }
    FUN_140195d70(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x12] = param_1[0x13];
    }
    if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x13] = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    lVar1 = param_1[0xe];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b559d0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



undefined8 FUN_1404d5ae0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)param_1[0xc];
    *(undefined4 *)((longlong)param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 5) = 0;
    if (plVar1 != (longlong *)0x0) {
        if (plVar1[3] == 0) {
            FUN_140048100(param_1,plVar1,1);
            if ((longlong *)param_1[0xc] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xc] + 8))();
                param_1[0xc] = 0;
            }
            if ((longlong *)param_1[0xb] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xb] + 8))();
                param_1[0xb] = 0;
            }
        }
        else {
            (**(code **)(*plVar1 + 8))(plVar1);
            param_1[0xc] = 0;
            if ((longlong *)param_1[0xb] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0xb] + 8))();
                param_1[0xb] = 0;
            }
            *(undefined4 *)(param_1 + 5) = 4;
            if ((longlong *)param_1[3] != (longlong *)0x0) {
                *(longlong *)param_1[3] = param_1[4];
                if (param_1[4] != 0) {
                    *(longlong *)(param_1[4] + 0x18) = param_1[3];
                }
                param_1[3] = 0;
                param_1[4] = 0;
                (**(code **)(*param_1 + 8))(param_1);
                return 0;
            }
        }
    }
    return 0;
}



undefined8 FUN_1404d5c40(longlong param_1)

{
    undefined8 uVar1;

    if (*(int *)(param_1 + 0x4c) == 0) {
        uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x600) + 0x20))();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
        *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    return 1;
}



void FUN_1404d6040(longlong param_1,HWND param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
    longlong lVar1;

    if (((param_3 - 0xff < 7) && ((0x67U >> (param_3 - 0xff & 0x1f) & 1) != 0)) ||
        (param_3 - 0x200 < 0xe)) {
        FUN_1405df340(DAT_140c65898 + 0x6838);
    }
    lVar1 = FUN_140728bd0(*(undefined8 *)(param_1 + 200),param_2,param_3,param_4,param_5);
    if (lVar1 != 0) {
        DefWindowProcW(param_2,param_3,param_4,param_5);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404d60f0(longlong param_1,int param_2,int param_3,int *param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    undefined8 uVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;
    longlong lVar11;
    int local_res8 [2];
    longlong local_48 [6];

    lVar10 = DAT_140c635f0;
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
        (param_2 == *(int *)(*(longlong *)(param_1 + 0x58) + 0x98))) {
        if (param_3 == 0x3cf) {
            if (*(longlong *)(param_1 + 200) != 0) {
                uVar7 = FUN_1407290a0(*(longlong *)(param_1 + 200),param_4);
                return uVar7;
            }
        }
        else if (param_3 == 0x3d0) {
            if (*(longlong *)(param_1 + 200) != 0) {
                uVar7 = FUN_1407291f0(*(longlong *)(param_1 + 200),param_4);
                return uVar7;
            }
        }
        else if (param_3 == 0x3d1) {
            lVar2 = *(longlong *)(param_1 + 200);
            if (lVar2 != 0) {
                *(undefined4 *)(lVar2 + 0x18) = 0xffffffff;
                piVar3 = DAT_140c63750;
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(*(longlong *)(lVar10 + 0x15d0) + 0xf8);
                iVar4 = DAT_140c546f0;
                if (*piVar3 < DAT_140c546f0) {
                    iVar4 = *piVar3;
                }
                if ((&DAT_140c54700)[iVar4] == '\0') {
                    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(*(longlong *)(lVar10 + 0x15d0) + 0xf0);
                }
                else {
                    *(undefined8 *)(lVar2 + 0x50) = 0;
                }
                if (*(int *)(lVar2 + 0x14) == 1) {
                    if ((*param_4 == 0) || (*param_4 == 3)) {
                        FUN_14072a9f0(lVar2);
                        *(undefined4 *)(lVar2 + 0x10) = 1;
                    }
                }
                else if ((*(int *)(lVar2 + 0x14) == 5) && (*param_4 == 3)) {
                    FUN_14072a9f0();
                    if (_DAT_140c4b548 != 0) {
                        FUN_14072afa0(lVar2,&DAT_140c4b548);
                    }
                    lVar11 = 0;
                    lVar10 = 3;
                    local_48[0] = 0;
                    local_48[1] = 0;
                    local_48[2] = 0;
                    local_48[3] = 0;
                    local_48[4] = 0;
                    local_48[5] = 0;
                    do {
                        lVar8 = FUN_1401e8c20();
                        if (lVar8 != 0) {
                            local_res8[0] = *(int *)(lVar8 + 0x48);
                            if (local_res8[0] == 0) {
                                uVar7 = 0;
                            }
                            else {
                                uVar7 = FUN_140484600(DAT_140c65918 + 0x50,local_res8);
                                uVar7 = FUN_1404846c0(uVar7);
                            }
                            uVar1 = *(undefined4 *)(lVar8 + 8);
                            *(undefined8 *)((longlong)local_48 + lVar11) = uVar7;
                            uVar7 = FUN_1400b5df0(DAT_140c658f0,uVar1,0);
                            *(undefined8 *)((longlong)local_48 + lVar11 + 0x18) = uVar7;
                        }
                        if (*(longlong *)((longlong)local_48 + lVar11) == 0) {
                            *(undefined8 *)((longlong)local_48 + lVar11) = *(undefined8 *)(lVar2 + 0x4b0);
                        }
                        lVar11 = lVar11 + 8;
                        lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                    if (*(int *)(lVar2 + 0x20) == 2) {
                        FUN_14078a400(*(undefined8 *)(lVar2 + 0x4f8));
                    }
                    if (*(int *)(lVar2 + 0x24) == 2) {
                        FUN_14078a400(*(longlong *)(lVar2 + 0x4f8) + 0x98);
                    }
                    if (*(int *)(lVar2 + 0x28) == 2) {
                        FUN_14078a400(*(longlong *)(lVar2 + 0x4f8) + 0x130);
                    }
                    iVar4 = FUN_14078a1a0(*(undefined8 *)(lVar2 + 0x4f8),local_48[0],local_48[3],1);
                    if ((-1 < iVar4) &&
                        (iVar4 = FUN_14078a1a0(*(longlong *)(lVar2 + 0x4f8) + 0x98,local_48[1],local_48[4],1),
                                -1 < iVar4)) {
                        iVar4 = FUN_14078a1a0(*(longlong *)(lVar2 + 0x4f8) + 0x130,local_48[2],local_48[5],1);
                    }
                    *(undefined4 *)(lVar2 + 0x4ec) = 0;
                    if (-1 < iVar4) {
                        *(undefined4 *)(lVar2 + 0x14) = 6;
                        return 0;
                    }
                    FUN_140729d70();
                    piVar3 = DAT_140c63750;
                    iVar4 = DAT_140c636a8;
                    *(undefined4 *)(lVar2 + 0x14) = 4;
                    iVar5 = DAT_140c54730;
                    if (*piVar3 < DAT_140c54730) {
                        iVar5 = *piVar3;
                    }
                    uVar9 = iVar4 + *(int *)(&DAT_140c54740 + (longlong)iVar5 * 4);
                    uVar6 = *(uint *)(lVar2 + 0x4a8);
                    if (uVar6 != 0xffffffff) {
                        if (uVar6 < uVar9) {
                            uVar6 = uVar9;
                        }
                        *(uint *)(lVar2 + 0x4a8) = uVar6;
                        return 0;
                    }
                    *(uint *)(lVar2 + 0x4a8) = uVar9;
                    return 0;
                }
                return 0;
            }
        }
        else if ((param_3 == 0x3d2) && (*(longlong *)(param_1 + 200) != 0)) {
            uVar7 = FUN_1407292a0(*(longlong *)(param_1 + 200),param_4);
            return uVar7;
        }
        if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
            local_48[3] = 0x1404d619e;
            uVar7 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))();
            if ((int)uVar7 != 1) {
                return uVar7;
            }
        }
    }
    return 1;
}
