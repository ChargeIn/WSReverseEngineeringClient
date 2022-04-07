//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14037b1c0(longlong **param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                   undefined4 param_5,longlong **param_6)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined auVar3 [12];
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong **pplVar7;
    ulonglong uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    undefined4 uVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined auStack664 [32];
    undefined4 local_278;
    undefined4 local_270;
    undefined4 local_268;
    undefined4 local_260;
    longlong **local_258;
    longlong *local_248;
    longlong *local_240;
    float local_238;
    float fStack564;
    float fStack560;
    undefined4 uStack556;
    float local_228;
    float fStack548;
    float fStack544;
    undefined4 uStack540;
    float local_218;
    float fStack532;
    float fStack528;
    undefined4 uStack524;
    undefined local_208 [8];
    undefined4 uStack512;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined local_1d8 [16];
    undefined local_1c8 [16];
    undefined local_1b8 [16];
    undefined local_1a8 [16];
    undefined local_118 [16];
    undefined4 local_108;
    undefined4 local_104;
    undefined4 local_fc;
    undefined4 local_f8;
    undefined4 local_f4;
    undefined4 local_ec;
    undefined4 local_e8;
    longlong *local_d8;
    longlong *local_d0;
    ulonglong local_c8;

    local_c8 = DAT_140c0f7b0 ^ (ulonglong)auStack664;
    *param_1 = param_2;
    param_1[10] = *param_6;
    param_1[0xb] = param_6[1];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_6 + 2);
    param_1[0xd] = param_6[3];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_6 + 4);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_6 + 0x24);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_6 + 5);
    uVar12 = *(undefined4 *)((longlong)param_6 + 0x34);
    uVar27 = *(undefined4 *)(param_6 + 7);
    uVar28 = *(undefined4 *)((longlong)param_6 + 0x3c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_6 + 6);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar12;
    *(undefined4 *)(param_1 + 0x11) = uVar27;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar28;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_6 + 8);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_6 + 0x44);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_6 + 9);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_6 + 0x4c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_6 + 10);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_6 + 0x54);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_6 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_6 + 0x5c);
    uVar5 = 1;
    if (1 < *(uint *)(param_1 + 0x12)) {
        uVar5 = *(uint *)(param_1 + 0x12);
    }
    *(uint *)(param_1 + 0x12) = uVar5;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*param_1 + 0x6e);
    uVar12 = param_3[1];
    uVar27 = param_3[2];
    uVar28 = param_3[3];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar12;
    *(undefined4 *)(param_1 + 5) = uVar27;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar28;
    uVar12 = param_4[1];
    uVar27 = param_4[2];
    uVar28 = param_4[3];
    *(undefined4 *)(param_1 + 6) = *param_4;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar12;
    *(undefined4 *)(param_1 + 7) = uVar27;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar28;
    plVar2 = param_1[0xd];
    *(undefined4 *)(param_1 + 8) = param_5;
    uVar5 = *(uint *)(*param_1 + 0x14);
    uVar6 = (ulonglong)*(float *)((longlong)*param_1 + 0xa4);
    uVar8 = (ulonglong)uVar5;
    if (uVar5 < (uint)uVar6) {
        uVar8 = uVar6 & 0xffffffff;
    }
    local_240 = (longlong *)0x0;
    if ((plVar2 != (longlong *)0x0) && (*(short *)plVar2 != 0)) {
        local_258 = &local_240;
        local_260 = 0;
        local_268 = 0;
        local_270 = 0x15;
        local_278 = 1;
        iVar4 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,plVar2,uVar8,1);
        if (iVar4 < 0) goto LAB_14037b8ce;
    }
    fVar23 = *(float *)(param_1 + 0x13);
    uVar12 = *(undefined4 *)(param_1 + 8);
    fVar15 = _DAT_140c78410 * fVar23;
    fVar16 = fRam0000000140c78414 * fVar23;
    fVar17 = fRam0000000140c7841c * fVar23;
    fVar21 = _DAT_140c78430 * fVar23;
    fVar22 = fRam0000000140c78434 * fVar23;
    fVar23 = fRam0000000140c7843c * fVar23;
    uVar27 = 0x3f800000;
    uVar28 = 0x3f800000;
    uVar29 = 0x3f800000;
    uVar30 = 0x3f800000;
    fVar18 = _DAT_140c78420 * 1.0;
    fVar19 = fRam0000000140c78424 * 1.0;
    fVar20 = fRam0000000140c7842c * 1.0;
    fVar24 = _DAT_140c78440;
    fVar25 = fRam0000000140c78444;
    fVar14 = fRam0000000140c78448;
    fVar26 = fRam0000000140c7844c;
    fVar9 = (float)FUN_1408fe3d0(0);
    fVar10 = (float)FUN_1408fc950(0);
    fVar11 = (float)FUN_1408fe3d0(uVar12);
    fStack528 = (float)FUN_1408fc950(uVar12);
    uStack556 = 0;
    uStack540 = 0;
    uStack524 = 0;
    fStack560 = (float)((uint)fVar11 ^ 0x80000000);
    local_238 = fVar10 * fStack528;
    fStack564 = fVar9 * fStack528;
    local_228 = fVar10 * fVar11 * fVar9 - fVar9 * fVar10;
    fStack548 = fVar9 * fVar11 * fVar9 + fVar10 * fVar10;
    local_218 = fVar9 * fVar9 + fVar10 * fVar11 * fVar10;
    fStack544 = fStack528 * fVar9;
    fStack528 = fStack528 * fVar10;
    fStack532 = fVar9 * fVar11 * fVar10 - fVar10 * fVar9;
    plVar2 = param_1[10];
    fVar9 = fVar16 * local_228 + fVar15 * local_238 + local_218 * 0.0 + fVar17 * fVar24;
    fVar10 = fVar16 * fStack548 + fVar15 * fStack564 + fStack532 * 0.0 + fVar17 * fVar25;
    fVar11 = fVar16 * fStack544 + fVar15 * fStack560 + fStack528 * 0.0 + fVar17 * fVar14;
    fVar15 = fVar16 * 0.0 + fVar15 * 0.0 + 0.0 + fVar17 * fVar26;
    fVar16 = fVar19 * local_228 + fVar18 * local_238 + local_218 * 0.0 + fVar20 * fVar24;
    fVar17 = fVar19 * fStack548 + fVar18 * fStack564 + fStack532 * 0.0 + fVar20 * fVar25;
    fVar13 = fVar19 * fStack544 + fVar18 * fStack560 + fStack528 * 0.0 + fVar20 * fVar14;
    fVar18 = fVar19 * 0.0 + fVar18 * 0.0 + 0.0 + fVar20 * fVar26;
    fVar19 = fVar22 * local_228 + fVar21 * local_238 + local_218 * 0.0 + fVar23 * fVar24;
    fVar20 = fVar22 * fStack548 + fVar21 * fStack564 + fStack532 * 0.0 + fVar23 * fVar25;
    fVar14 = fVar22 * fStack544 + fVar21 * fStack560 + fStack528 * 0.0 + fVar23 * fVar14;
    fVar21 = fVar22 * 0.0 + fVar21 * 0.0 + 0.0 + fVar23 * fVar26;
    fVar23 = fVar25 * 0.0 + fVar24 * 0.0 + 0.0 + fVar26 * fVar26;
    auVar3 = *(undefined (*) [12])(param_1 + 4);
    _local_208 = CONCAT412(fVar23,auVar3);
    local_208._0_4_ = SUB124(auVar3,0);
    local_208._4_4_ = SUB124(auVar3 >> 0x20,0);
    uStack512 = SUB124(auVar3 >> 0x40,0);
    if ((plVar2 == (longlong *)0x0) || (*(short *)plVar2 == 0)) {
        LAB_14037b731:
        plVar2 = param_1[0xb];
        if ((plVar2 == (longlong *)0x0) || (*(short *)plVar2 == 0)) {
            LAB_14037b867:
            pplVar7 = (longlong **)(*param_1 + 0x25c);
            if (param_1[0x16] == (longlong *)0x0) {
                param_1[0x16] = (longlong *)pplVar7;
                pplVar1 = param_1 + 0x17;
                *pplVar1 = *pplVar7;
                *pplVar7 = (longlong *)param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[0x16] = (longlong)pplVar1;
                }
            }
            goto LAB_14037b8ce;
        }
        local_258 = &local_248;
        local_248 = (longlong *)0x0;
        local_260 = 0;
        local_268 = 0;
        local_270 = 0;
        local_278 = 1;
        iVar4 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,plVar2,uVar8,1);
        if (-1 < iVar4) {
            FUN_1407e4830(&local_1f8,0,0x130);
            local_108 = 0x3f800000;
            local_1d8 = CONCAT412(fVar15,CONCAT48(fVar11,CONCAT44(fVar10,fVar9)));
            local_104 = 0x3f800000;
            local_fc = 0x3f800000;
            local_1f8 = 0xbf000000;
            uStack500 = 0xbf000000;
            uStack496 = 0xbf000000;
            uStack492 = 0xbf000000;
            local_1e8 = 0x3f000000;
            uStack484 = 0x3f000000;
            uStack480 = 0x3f000000;
            uStack476 = 0x3f000000;
            local_1c8 = CONCAT412(fVar18,CONCAT48(fVar13,CONCAT44(fVar17,fVar16)));
            local_1b8 = CONCAT412(fVar21,CONCAT48(fVar14,CONCAT44(fVar20,fVar19)));
            local_1a8 = CONCAT412(fVar23,CONCAT48(uStack512,CONCAT44(local_208._4_4_,local_208._0_4_)));
            local_118 = CONCAT412(uVar30,CONCAT48(uVar29,CONCAT44(uVar28,uVar27)));
            if (local_240 == (longlong *)0x0) {
                local_fc = 0;
            }
            local_f8 = 0x3e800000;
            local_f4 = 0x3f000000;
            local_d8 = local_248;
            local_ec = 0x440;
            local_e8 = 0xc;
            local_d0 = local_240;
            iVar4 = (**(code **)(**param_1 + 0xe0))(*param_1,&local_1f8,param_1 + 2);
            if (-1 < iVar4) {
                if (local_248 != (longlong *)0x0) {
                    (**(code **)(*local_248 + 8))();
                }
                goto LAB_14037b867;
            }
        }
    }
    else {
        local_258 = &local_248;
        local_248 = (longlong *)0x0;
        local_260 = 0;
        local_268 = 0;
        local_270 = 0;
        local_278 = 1;
        iVar4 = (**(code **)(*DAT_140c65670 + 0x50))(DAT_140c65670,plVar2,uVar8,1);
        if (-1 < iVar4) {
            FUN_1407e4830(&local_1f8,0,0x130);
            local_108 = 0x3f800000;
            local_1d8 = CONCAT412(fVar15,CONCAT48(fVar11,CONCAT44(fVar10,fVar9)));
            local_104 = 0x3f800000;
            local_fc = 0x3f800000;
            local_1f8 = 0xbf000000;
            uStack500 = 0xbf000000;
            uStack496 = 0xbf000000;
            uStack492 = 0xbf000000;
            local_1e8 = 0x3f000000;
            uStack484 = 0x3f000000;
            uStack480 = 0x3f000000;
            uStack476 = 0x3f000000;
            local_1c8 = CONCAT412(fVar18,CONCAT48(fVar13,CONCAT44(fVar17,fVar16)));
            local_1b8 = CONCAT412(fVar21,CONCAT48(fVar14,CONCAT44(fVar20,fVar19)));
            local_1a8 = CONCAT412(fVar23,CONCAT48(uStack512,CONCAT44(local_208._4_4_,local_208._0_4_)));
            local_118 = CONCAT412(uVar30,CONCAT48(uVar29,CONCAT44(uVar28,uVar27)));
            if (local_240 == (longlong *)0x0) {
                local_fc = 0;
            }
            local_f8 = 0x3e800000;
            local_f4 = 0x3f000000;
            local_d8 = local_248;
            local_ec = 0x440;
            local_e8 = 3;
            local_d0 = local_240;
            iVar4 = (**(code **)(**param_1 + 0xe0))(*param_1,&local_1f8,param_1 + 1);
            if (-1 < iVar4) {
                if (local_248 != (longlong *)0x0) {
                    (**(code **)(*local_248 + 8))();
                }
                goto LAB_14037b731;
            }
        }
    }
    if (local_248 != (longlong *)0x0) {
        (**(code **)(*local_248 + 8))();
    }
    LAB_14037b8ce:
    if (local_240 != (longlong *)0x0) {
        (**(code **)(*local_240 + 8))();
    }
    FUN_1407db4f0(local_c8 ^ (ulonglong)auStack664);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14037b930(longlong *param_1)

{
    longlong lVar1;
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
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;

    uVar22 = *(undefined4 *)(param_1 + 8);
    fVar7 = (float)(ulonglong)(uint)(*(int *)(*param_1 + 0x370) - *(int *)(param_1 + 3));
    fVar34 = _DAT_140c78420 * 1.0;
    fVar35 = fRam0000000140c78424 * 1.0;
    fVar36 = fRam0000000140c7842c * 1.0;
    fVar8 = fVar7 * 0.001;
    fVar7 = fVar7 / (float)(ulonglong)*(uint *)(param_1 + 0x12);
    fVar42 = 1.0;
    fVar39 = *(float *)(param_1 + 4) + *(float *)(param_1 + 6) * fVar8;
    fVar40 = *(float *)((longlong)param_1 + 0x24) + *(float *)((longlong)param_1 + 0x34) * fVar8;
    fVar41 = *(float *)(param_1 + 5) + *(float *)(param_1 + 7) * fVar8;
    fVar13 = (*(float *)((longlong)param_1 + 0x9c) - *(float *)(param_1 + 0x13)) * fVar7 +
             *(float *)(param_1 + 0x13);
    fVar19 = fVar13 * *(float *)((longlong)param_1 + 0x94);
    fVar20 = (*(float *)(param_1 + 0x14) - *(float *)((longlong)param_1 + 0xa4)) * (1.0 - fVar7) +
             *(float *)((longlong)param_1 + 0xa4);
    fVar32 = _DAT_140c78410 * fVar13;
    fVar33 = fRam0000000140c78414 * fVar13;
    fVar13 = fRam0000000140c7841c * fVar13;
    fVar37 = _DAT_140c78430 * fVar19;
    fVar38 = fRam0000000140c78434 * fVar19;
    fVar19 = fRam0000000140c7843c * fVar19;
    fVar8 = _DAT_140c78440;
    fVar17 = fRam0000000140c78444;
    fVar12 = fRam0000000140c78448;
    fVar31 = fRam0000000140c7844c;
    fVar2 = (float)FUN_1408fe3d0(0);
    fVar3 = (float)FUN_1408fc950(0);
    fVar4 = (float)FUN_1408fe3d0(uVar22);
    fVar5 = (float)FUN_1408fc950(uVar22);
    fVar24 = (float)((uint)fVar4 ^ 0x80000000);
    fVar9 = fVar3 * fVar5;
    fVar14 = fVar2 * fVar5;
    fVar10 = fVar3 * fVar4 * fVar2 - fVar2 * fVar3;
    fVar15 = fVar2 * fVar4 * fVar2 + fVar3 * fVar3;
    fVar11 = fVar2 * fVar2 + fVar3 * fVar4 * fVar3;
    fVar6 = fVar5 * fVar2;
    fVar5 = fVar5 * fVar3;
    fVar21 = fVar2 * fVar4 * fVar3 - fVar3 * fVar2;
    fVar2 = fVar33 * fVar10 + fVar32 * fVar9 + fVar11 * 0.0 + fVar13 * fVar8;
    fVar16 = fVar33 * fVar15 + fVar32 * fVar14 + fVar21 * 0.0 + fVar13 * fVar17;
    fVar18 = fVar33 * fVar6 + fVar32 * fVar24 + fVar5 * 0.0 + fVar13 * fVar12;
    fVar33 = fVar33 * 0.0 + fVar32 * 0.0 + 0.0 + fVar13 * fVar31;
    fVar3 = fVar35 * fVar10 + fVar34 * fVar9 + fVar11 * 0.0 + fVar36 * fVar8;
    fVar13 = fVar35 * fVar15 + fVar34 * fVar14 + fVar21 * 0.0 + fVar36 * fVar17;
    fVar32 = fVar35 * fVar6 + fVar34 * fVar24 + fVar5 * 0.0 + fVar36 * fVar12;
    fVar34 = fVar35 * 0.0 + fVar34 * 0.0 + 0.0 + fVar36 * fVar31;
    fVar4 = fVar38 * fVar10 + fVar37 * fVar9 + fVar11 * 0.0 + fVar19 * fVar8;
    fVar9 = fVar38 * fVar15 + fVar37 * fVar14 + fVar21 * 0.0 + fVar19 * fVar17;
    fVar10 = fVar38 * fVar6 + fVar37 * fVar24 + fVar5 * 0.0 + fVar19 * fVar12;
    fVar11 = fVar38 * 0.0 + fVar37 * 0.0 + 0.0 + fVar19 * fVar31;
    fVar12 = (*(float *)(param_1 + 0xf) - *(float *)((longlong)param_1 + 0x74)) * fVar7 +
             *(float *)((longlong)param_1 + 0x74);
    fVar14 = fVar17 * 0.0 + fVar8 * 0.0 + 0.0 + fVar31 * fVar31;
    fVar5 = _DAT_140c78420 * fVar12;
    fVar6 = fRam0000000140c78424 * fVar12;
    fVar15 = fRam0000000140c7842c * fVar12;
    fVar35 = _DAT_140c78410 * fVar12;
    fVar36 = fRam0000000140c78414 * fVar12;
    fVar12 = fRam0000000140c7841c * fVar12;
    fVar19 = _DAT_140c78430 * 0.0;
    fVar21 = fRam0000000140c78434 * 0.0;
    fVar24 = fRam0000000140c7843c * 0.0;
    fVar37 = fRam0000000140c78414 * fVar5 + _DAT_140c78410 * fVar35 + fVar19 * 0.0 +
             fRam0000000140c7841c * fVar8;
    fVar38 = fRam0000000140c78414 * fVar6 + _DAT_140c78410 * fVar36 + fVar21 * 0.0 +
             fRam0000000140c7841c * fVar17;
    fVar23 = fRam0000000140c78414 * fVar15 + _DAT_140c78410 * fVar12 + fRam0000000140c78418 * fVar24 +
             fRam0000000140c7841c * fVar31;
    fVar25 = fRam0000000140c78424 * fVar5 + _DAT_140c78420 * fVar35 + fVar19 * 0.0 +
             fRam0000000140c7842c * fVar8;
    fVar26 = fRam0000000140c78424 * fVar6 + _DAT_140c78420 * fVar36 + fVar21 * 0.0 +
             fRam0000000140c7842c * fVar17;
    fVar27 = fRam0000000140c78424 * fVar15 + _DAT_140c78420 * fVar12 + fVar24 * 0.0 +
             fRam0000000140c7842c * fVar31;
    fVar28 = fRam0000000140c78434 * fVar5 + _DAT_140c78430 * fVar35 + fVar19 * 0.0 +
             fRam0000000140c7843c * fVar8;
    fVar29 = fRam0000000140c78434 * fVar6 + _DAT_140c78430 * fVar36 + fVar21 * 0.0 +
             fRam0000000140c7843c * fVar17;
    fVar30 = fRam0000000140c78434 * fVar15 + _DAT_140c78430 * fVar12 + fVar24 * 0.0 +
             fRam0000000140c7843c * fVar31;
    fVar19 = fVar5 * -0.5 + fVar35 * -0.5 + fVar19 * 0.0 + fVar8 * 1.0;
    fVar6 = fVar6 * -0.5 + fVar36 * -0.5 + fVar21 * 0.0 + fVar17 * 1.0;
    fVar31 = fVar15 * -0.5 + fVar12 * -0.5 + fVar24 * 0.0 + fVar31 * 1.0;
    fVar15 = fVar7 * *(float *)((longlong)param_1 + 0x84) + 0.5;
    fVar5 = fVar7 * *(float *)(param_1 + 0x10) + 0.5;
    fVar8 = fVar6 * _DAT_140c78420 + fVar19 * _DAT_140c78410 + _DAT_140c78430 * 0.0 + fVar31 * fVar5;
    fVar17 = fVar6 * fRam0000000140c78424 + fVar19 * fRam0000000140c78414 + fRam0000000140c78434 * 0.0
             + fVar31 * fVar15;
    fVar12 = fVar6 * fRam0000000140c78428 + fVar19 * fRam0000000140c78418 + fRam0000000140c78438 * 0.0
             + fVar31 * 0.0;
    fVar31 = fVar6 * fRam0000000140c7842c + fVar19 * fRam0000000140c7841c + fRam0000000140c7843c * 0.0
             + fVar31 * fVar42;
    fVar6 = fVar38 * _DAT_140c78420 + fVar37 * _DAT_140c78410 + _DAT_140c78430 * 0.0 + fVar23 * fVar5;
    fVar7 = fVar38 * fRam0000000140c78424 + fVar37 * fRam0000000140c78414 + fRam0000000140c78434 * 0.0
            + fVar23 * fVar15;
    fVar19 = fVar38 * fRam0000000140c78428 + fVar37 * fRam0000000140c78418 +
             fRam0000000140c78438 * 0.0 + fVar23 * 0.0;
    fVar21 = fVar38 * fRam0000000140c7842c + fVar37 * fRam0000000140c7841c +
             fRam0000000140c7843c * 0.0 + fVar23 * fVar42;
    fVar24 = fVar26 * _DAT_140c78420 + fVar25 * _DAT_140c78410 + _DAT_140c78430 * 0.0 + fVar27 * fVar5
            ;
    fVar35 = fVar26 * fRam0000000140c78424 + fVar25 * fRam0000000140c78414 +
             fRam0000000140c78434 * 0.0 + fVar27 * fVar15;
    fVar36 = fVar26 * fRam0000000140c78428 + fVar25 * fRam0000000140c78418 +
             fRam0000000140c78438 * 0.0 + fVar27 * 0.0;
    fVar37 = fVar26 * fRam0000000140c7842c + fVar25 * fRam0000000140c7841c +
             fRam0000000140c7843c * 0.0 + fVar27 * fVar42;
    fVar5 = fVar29 * _DAT_140c78420 + fVar28 * _DAT_140c78410 + _DAT_140c78430 * 0.0 + fVar30 * fVar5;
    fVar15 = fVar29 * fRam0000000140c78424 + fVar28 * fRam0000000140c78414 +
             fRam0000000140c78434 * 0.0 + fVar30 * fVar15;
    fVar38 = fVar29 * fRam0000000140c78428 + fVar28 * fRam0000000140c78418 +
             fRam0000000140c78438 * 0.0 + fVar30 * 0.0;
    fVar23 = fVar29 * fRam0000000140c7842c + fVar28 * fRam0000000140c7841c +
             fRam0000000140c7843c * 0.0 + fVar30 * fVar42;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        lVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        *(float *)(lVar1 + 0x20) = fVar2;
        *(float *)(lVar1 + 0x24) = fVar16;
        *(float *)(lVar1 + 0x28) = fVar18;
        *(float *)(lVar1 + 0x2c) = fVar33;
        *(float *)(lVar1 + 0x30) = fVar3;
        *(float *)(lVar1 + 0x34) = fVar13;
        *(float *)(lVar1 + 0x38) = fVar32;
        *(float *)(lVar1 + 0x3c) = fVar34;
        *(float *)(lVar1 + 0x40) = fVar4;
        *(float *)(lVar1 + 0x44) = fVar9;
        *(float *)(lVar1 + 0x48) = fVar10;
        *(float *)(lVar1 + 0x4c) = fVar11;
        *(undefined (*) [16])(lVar1 + 0x50) = CONCAT412(fVar14,CONCAT48(fVar41,CONCAT44(fVar40,fVar39)))
                ;
        *(undefined (*) [16])(lVar1 + 0xa0) = CONCAT412(fVar21,CONCAT48(fVar19,CONCAT44(fVar7,fVar6)));
        *(undefined (*) [16])(lVar1 + 0xb0) = CONCAT412(fVar37,CONCAT48(fVar36,CONCAT44(fVar35,fVar24)))
                ;
        *(undefined (*) [16])(lVar1 + 0xc0) = CONCAT412(fVar23,CONCAT48(fVar38,CONCAT44(fVar15,fVar5)));
        *(float *)(lVar1 + 0xd0) = fVar8;
        *(float *)(lVar1 + 0xd4) = fVar17;
        *(float *)(lVar1 + 0xd8) = fVar12;
        *(float *)(lVar1 + 0xdc) = fVar31;
        *(float *)(lVar1 + 0xf0) = fVar20;
        *(undefined4 *)(lVar1 + 0x100) = *(undefined4 *)(param_1 + 0x15);
        *(undefined4 *)(lVar1 + 0x104) = *(undefined4 *)((longlong)param_1 + 0xac);
        *(undefined4 *)(lVar1 + 0xfc) = *(undefined4 *)(param_1 + 0xe);
        (**(code **)(*(longlong *)param_1[1] + 0x30))();
    }
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        lVar1 = (**(code **)(*(longlong *)param_1[2] + 0x28))();
        *(undefined (*) [16])(lVar1 + 0x20) = CONCAT412(fVar33,CONCAT48(fVar18,CONCAT44(fVar16,fVar2)));
        *(undefined (*) [16])(lVar1 + 0x30) = CONCAT412(fVar34,CONCAT48(fVar32,CONCAT44(fVar13,fVar3)));
        *(undefined (*) [16])(lVar1 + 0x40) = CONCAT412(fVar11,CONCAT48(fVar10,CONCAT44(fVar9,fVar4)));
        *(undefined (*) [16])(lVar1 + 0x50) = CONCAT412(fVar14,CONCAT48(fVar41,CONCAT44(fVar40,fVar39)))
                ;
        *(undefined (*) [16])(lVar1 + 0xa0) = CONCAT412(fVar21,CONCAT48(fVar19,CONCAT44(fVar7,fVar6)));
        *(undefined (*) [16])(lVar1 + 0xb0) = CONCAT412(fVar37,CONCAT48(fVar36,CONCAT44(fVar35,fVar24)))
                ;
        *(undefined (*) [16])(lVar1 + 0xc0) = CONCAT412(fVar23,CONCAT48(fVar38,CONCAT44(fVar15,fVar5)));
        *(undefined (*) [16])(lVar1 + 0xd0) = CONCAT412(fVar31,CONCAT48(fVar12,CONCAT44(fVar17,fVar8)));
        *(float *)(lVar1 + 0xf0) = fVar20;
        *(undefined4 *)(lVar1 + 0x100) = *(undefined4 *)(param_1 + 0x15);
        *(undefined4 *)(lVar1 + 0x104) = *(undefined4 *)((longlong)param_1 + 0xac);
        *(undefined4 *)(lVar1 + 0xfc) = *(undefined4 *)(param_1 + 0xe);
        (**(code **)(*(longlong *)param_1[2] + 0x30))();
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_14037c090(longlong *param_1,longlong param_2)

{
    undefined8 uVar1;

    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *param_1 = param_2;
    *(int *)(param_2 + 0x870) = *(int *)(param_2 + 0x870) + 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x16] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x5e] = 0;
    param_1[0x61] = 0;
    param_1[0x6c] = 0;
    param_1[0x6e] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    FUN_1407e4830(param_1 + 0x40,0,0x80);
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
    param_1[0x7a] = 0;
    param_1[0x7c] = 0;
    param_1[0x7e] = 0;
    uVar1 = _DAT_140c79888;
    param_1[0x82] = 0;
    *(undefined8 *)((longlong)param_1 + 0x3fc) = uVar1;
    param_1[0x81] = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    return param_1;
}



void FUN_14037c2e0(longlong *param_1)

{
    int *piVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong **pplVar8;

    FUN_140383760();
    uVar7 = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    lVar4 = 4;
    pplVar8 = (longlong **)(param_1 + 0xb);
    lVar5 = 4;
    do {
        if (pplVar8[-4] != (longlong *)0x0) {
            (**(code **)(*pplVar8[-4] + 8))();
            pplVar8[-4] = (longlong *)0x0;
        }
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        if (pplVar8[4] != (longlong *)0x0) {
            (**(code **)(*pplVar8[4] + 8))();
            pplVar8[4] = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14] + 8))();
        param_1[0x14] = 0;
    }
    FUN_14018b900(param_1[0x13],0);
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x16] + 8))();
        param_1[0x16] = 0;
    }
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30] + 8))();
        param_1[0x30] = 0;
    }
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x31] + 8))();
        param_1[0x31] = 0;
    }
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x32] + 8))();
        param_1[0x32] = 0;
    }
    if ((longlong *)param_1[0x33] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x33] + 8))();
        param_1[0x33] = 0;
    }
    if ((longlong *)param_1[0x34] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x34] + 8))();
        param_1[0x34] = 0;
    }
    pplVar8 = (longlong **)(param_1 + 0x40);
    lVar5 = 0x10;
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pplVar8 = (longlong **)(param_1 + 0x54);
    lVar5 = 4;
    do {
        if (pplVar8[-4] != (longlong *)0x0) {
            (**(code **)(*pplVar8[-4] + 8))();
            pplVar8[-4] = (longlong *)0x0;
        }
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((longlong *)param_1[0x5e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x5e] + 8))();
        param_1[0x5e] = 0;
    }
    if ((longlong *)param_1[0x61] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x61] + 8))();
        param_1[0x61] = 0;
    }
    uVar6 = uVar7;
    if (param_1[0x6f] != 0) {
        do {
            plVar2 = *(longlong **)(param_1[0x70] + uVar6 * 8);
            piVar1 = (int *)((longlong)plVar2 + 0x41c);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                FUN_140377fe0(plVar2);
            }
            (**(code **)(*plVar2 + 8))(plVar2);
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_1[0x6f]);
    }
    FUN_14018b900(param_1[0x70],0);
    if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7a] + 8))();
        param_1[0x7a] = 0;
    }
    if ((longlong *)param_1[0x7c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7c] + 8))();
        param_1[0x7c] = 0;
    }
    if ((longlong *)param_1[0x7e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7e] + 8))();
        param_1[0x7e] = 0;
    }
    if (param_1[0x81] != 0) {
        do {
            lVar5 = param_1[0x82];
            plVar2 = *(longlong **)(lVar5 + uVar7 * 8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                *(undefined8 *)(lVar5 + uVar7 * 8) = 0;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_1[0x81]);
    }
    FUN_14018b900(param_1[0x82],0);
    pplVar8 = (longlong **)(param_1 + 0x8d);
    lVar5 = 4;
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((longlong *)param_1[0x91] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x91] + 8))();
        param_1[0x91] = 0;
    }
    if ((longlong *)param_1[0x92] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if ((longlong *)param_1[0x93] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x93] + 8))();
        param_1[0x93] = 0;
    }
    pplVar8 = (longlong **)(param_1 + 0x9c);
    do {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
            *pplVar8 = (longlong *)0x0;
        }
        pplVar8 = pplVar8 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if ((longlong *)param_1[0xa0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa0] + 8))();
        param_1[0xa0] = 0;
    }
    if ((longlong *)param_1[0xa1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa1] + 8))();
        param_1[0xa1] = 0;
    }
    FUN_140389c40(param_1);
    if (param_1[0xb5] != 0) {
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + -1;
    }
    if (param_1[0xb7] != 0) {
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + -1;
    }
    if (param_1[0xb9] != 0) {
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + -1;
    }
    *(int *)(*param_1 + 0x870) = *(int *)(*param_1 + 0x870) + -1;
    lVar4 = param_1[3];
    if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x20) != 0) {
            for (lVar5 = *(longlong *)(lVar4 + 0x30); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x18)) {
                lVar3 = *(longlong *)(lVar5 + 8);
                piVar1 = (int *)(lVar3 + 0x420);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    FUN_140367760(*(undefined8 *)(lVar3 + 0x10),lVar3);
                    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x18))();
                }
            }
        }
        *(undefined8 *)(lVar4 + 0x20) = 0;
        (**(code **)(*(longlong *)param_1[3] + 8))();
    }
    if ((longlong *)param_1[0xb9] != (longlong *)0x0) {
        *(longlong *)param_1[0xb9] = param_1[0xba];
    }
    if (param_1[0xba] != 0) {
        *(longlong *)(param_1[0xba] + 0x5c8) = param_1[0xb9];
    }
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    if ((longlong *)param_1[0xb7] != (longlong *)0x0) {
        *(longlong *)param_1[0xb7] = param_1[0xb8];
    }
    if (param_1[0xb8] != 0) {
        *(longlong *)(param_1[0xb8] + 0x5b8) = param_1[0xb7];
    }
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    if ((longlong *)param_1[0xb5] != (longlong *)0x0) {
        *(longlong *)param_1[0xb5] = param_1[0xb6];
    }
    if (param_1[0xb6] != 0) {
        *(longlong *)(param_1[0xb6] + 0x5a8) = param_1[0xb5];
    }
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
        *(longlong *)param_1[0xb3] = param_1[0xb4];
    }
    if (param_1[0xb4] != 0) {
        *(longlong *)(param_1[0xb4] + 0x598) = param_1[0xb3];
    }
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    if ((longlong *)param_1[0xb1] != (longlong *)0x0) {
        *(longlong *)param_1[0xb1] = param_1[0xb2];
    }
    if (param_1[0xb2] != 0) {
        *(longlong *)(param_1[0xb2] + 0x588) = param_1[0xb1];
    }
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    if ((longlong *)param_1[0xaf] != (longlong *)0x0) {
        *(longlong *)param_1[0xaf] = param_1[0xb0];
    }
    if (param_1[0xb0] != 0) {
        *(longlong *)(param_1[0xb0] + 0x578) = param_1[0xaf];
    }
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    if (param_1[0xae] != 0) {
        FUN_1401a4a00();
    }
    lVar4 = param_1[0xac];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0xaa];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    FUN_140195d70(param_1 + 0x37);
    *(undefined4 *)(param_1 + 0x37) = 0;
    if ((longlong *)param_1[0x39] != (longlong *)0x0) {
        *(longlong *)param_1[0x39] = param_1[0x3a];
    }
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
        *(longlong *)param_1[0x3a] = param_1[0x39];
    }
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    return;
}



undefined8 FUN_14037c910(longlong *param_1,int *param_2)

{
    longlong **pplVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong **pplVar7;
    float fVar8;
    float fVar9;

    *(int *)(param_1 + 1) = *param_2;
    *(int *)((longlong)param_1 + 0xc) = param_2[1];
    uVar5 = (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x90))
            (*(longlong **)(*param_1 + 0x18),param_2,param_1 + 2);
    if (-1 < (int)uVar5) {
        if ((((*param_2 < DAT_140c44530) || (DAT_140c44538 <= *param_2)) || (param_2[1] < DAT_140c44534)
            ) || (DAT_140c4453c <= param_2[1])) {
            uVar5 = 0x80070057;
        }
        else {
            uVar5 = FUN_14035bec0(*param_1,param_2);
            if (-1 < (int)uVar5) {
                FUN_14038f890(param_1[3],param_1);
                pplVar7 = (longlong **)(*param_1 + 0x8e8);
                param_1[4] = 0;
                param_1[5] = 0;
                *(undefined4 *)(param_1 + 0x62) = 0;
                if (param_1[0xb5] == 0) {
                    param_1[0xb5] = (longlong)pplVar7;
                    pplVar1 = (longlong **)(param_1 + 0xb6);
                    *pplVar1 = *pplVar7;
                    *pplVar7 = param_1;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[0xb5] = (longlong)pplVar1;
                    }
                }
                *(undefined4 *)(*param_1 + 0x8f0) = 0;
                *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
                pplVar7 = (longlong **)(*param_1 + 0x8f8);
                if (param_1[0xb7] == 0) {
                    param_1[0xb7] = (longlong)pplVar7;
                    pplVar1 = (longlong **)(param_1 + 0xb8);
                    *pplVar1 = *pplVar7;
                    *pplVar7 = param_1;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[0xb7] = (longlong)pplVar1;
                    }
                }
                *(undefined4 *)(*param_1 + 0x900) = 0;
                *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
                pplVar7 = (longlong **)(*param_1 + 0x908);
                if (param_1[0xb9] == 0) {
                    param_1[0xb9] = (longlong)pplVar7;
                    pplVar1 = (longlong **)(param_1 + 0xba);
                    *pplVar1 = *pplVar7;
                    *pplVar7 = param_1;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[0xb9] = (longlong)pplVar1;
                    }
                }
                *(undefined4 *)(*param_1 + 0x910) = 0;
                *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
                lVar6 = (**(code **)(*(longlong *)param_1[2] + 0x28))();
                uVar2 = *(undefined4 *)(lVar6 + 0x24);
                uVar3 = *(undefined4 *)(lVar6 + 0x28);
                uVar4 = *(undefined4 *)(lVar6 + 0x2c);
                *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar6 + 0x20);
                *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar2;
                *(undefined4 *)(param_1 + 0x95) = uVar3;
                *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar4;
                uVar2 = *(undefined4 *)(lVar6 + 0x34);
                uVar3 = *(undefined4 *)(lVar6 + 0x38);
                uVar4 = *(undefined4 *)(lVar6 + 0x3c);
                *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)(lVar6 + 0x30);
                *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar2;
                *(undefined4 *)(param_1 + 0x97) = uVar3;
                *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar4;
                *(undefined4 *)((longlong)param_1 + 0x4a4) = 0xc47a0000;
                *(undefined4 *)((longlong)param_1 + 0x4b4) = 0xc47a0000;
                fVar8 = *(float *)(param_1 + 0x96) - *(float *)(param_1 + 0x94);
                fVar9 = *(float *)((longlong)param_1 + 0x4b4) - *(float *)((longlong)param_1 + 0x4a4);
                *(undefined (*) [16])(param_1 + 0x98) =
                        CONCAT412((*(float *)((longlong)param_1 + 0x4ac) +
                                   *(float *)((longlong)param_1 + 0x4bc)) * 0.5,
                                  CONCAT48((*(float *)(param_1 + 0x95) + *(float *)(param_1 + 0x97)) * 0.5,
                                           CONCAT44((*(float *)((longlong)param_1 + 0x4a4) +
                                                     *(float *)((longlong)param_1 + 0x4b4)) * 0.5,
                                                    (*(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x96)) *
                                                    0.5)));
                *(float *)(param_1 + 0x9a) = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + 0.0) * 0.5;
                param_1[0x35] = 0x3f8000003f800000;
                *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
                uVar5 = 0;
            }
        }
    }
    return uVar5;
}



undefined8 FUN_14037cb70(longlong param_1)

{
    undefined8 uVar1;
    byte *pbVar2;
    longlong *local_res8 [4];

    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
        *(undefined8 *)(param_1 + 0x20) = 1;
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
        FUN_14037d790(param_1);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
        FUN_140383760(param_1);
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff7;
    }
    if ((*(byte *)(param_1 + 0x20) & 4) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                (*(longlong **)(param_1 + 0x10),0x15,local_res8);
        pbVar2 = (byte *)(**(code **)(*local_res8[0] + 0x18))();
        *(uint *)(param_1 + 0x460) = (uint)*pbVar2;
        (**(code **)(*local_res8[0] + 8))();
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
    }
    if ((*(byte *)(param_1 + 0x20) & 8) == 0) {
        FUN_1403828a0(param_1);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 8;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffff7fff;
    }
    return 1;
}



undefined8 FUN_14037cc30(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    uint uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    if ((*(byte *)((longlong)param_1 + 0x24) & 1) == 0) {
        if ((*(int *)(param_1 + 4) != 0xf) && (uVar3 = FUN_14037cb70(), (int)uVar3 == 0)) {
            return uVar3;
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 2) == 0) {
        FUN_14037f4a0(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffb | 2;
    }
    uVar11 = 0;
    if ((*(byte *)((longlong)param_1 + 0x24) & 4) == 0) {
        uVar9 = uVar11;
        if (param_1[0x6f] != 0) {
            do {
                plVar7 = *(longlong **)(param_1[0x70] + uVar9 * 8);
                iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < (ulonglong)param_1[0x6f]);
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffff7 | 4;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 8) == 0) {
        uVar9 = uVar11;
        if (param_1[0x6f] != 0) {
            do {
                lVar1 = *(longlong *)(param_1[0x70] + uVar9 * 8);
                if (*(int *)(lVar1 + 0x4c) != 0) {
                    if (*(longlong *)(lVar1 + 0x4a0) != 0) {
                        FUN_140378110(lVar1);
                        FUN_1403786a0(lVar1);
                        if (*(undefined8 **)(lVar1 + 0x4a0) != (undefined8 *)0x0) {
                            **(undefined8 **)(lVar1 + 0x4a0) = *(undefined8 *)(lVar1 + 0x4a8);
                        }
                        if (*(longlong *)(lVar1 + 0x4a8) != 0) {
                            *(undefined8 *)(*(longlong *)(lVar1 + 0x4a8) + 0x4a0) = *(undefined8 *)(lVar1 + 0x4a0)
                                    ;
                        }
                        *(undefined8 *)(lVar1 + 0x4a0) = 0;
                        *(undefined8 *)(lVar1 + 0x4a8) = 0;
                    }
                    uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x48))();
                    uVar10 = uVar11;
                    if (uVar4 != 0) {
                        do {
                            lVar5 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x50))
                                    (*(longlong **)(lVar1 + 0x30),uVar10);
                            if (lVar5 != 0) {
                                FUN_1403780a0(lVar5);
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < uVar4);
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < (ulonglong)param_1[0x6f]);
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffef | 8;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 0x10) == 0) {
        for (lVar1 = *(longlong *)(param_1[3] + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18))
        {
            iVar2 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))(*(longlong **)(lVar1 + 8),param_2);
            if (iVar2 == 0) {
                return 0;
            }
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffdf | 0x10;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 0x20) == 0) {
        FUN_14037f640(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x20;
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff7ff;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 0x40) == 0) {
        FUN_140380c10(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffff7f | 0x40;
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 0x80) == 0) {
        uVar9 = uVar11;
        if (param_1[0x81] != 0) {
            do {
                plVar7 = *(longlong **)(param_1[0x82] + uVar9 * 8);
                if ((plVar7 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2), iVar2 == 0)) {
                    return 0;
                }
                uVar9 = (ulonglong)((int)uVar9 + 1);
            } while (uVar9 < (ulonglong)param_1[0x81]);
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x80;
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffefff;
        if (param_1[3] != 0) {
            for (lVar1 = *(longlong *)(param_1[3] + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)
                    ) {
                lVar5 = *(longlong *)(lVar1 + 8);
                if (*(longlong *)(lVar5 + 0x68) == 0) {
                    plVar7 = (longlong *)(lVar5 + 0x70);
                    plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x10) + 0x1568);
                    *(longlong **)(lVar5 + 0x68) = plVar6;
                    *plVar7 = *plVar6;
                    *plVar6 = lVar5;
                    if (*plVar7 != 0) {
                        *(longlong **)(*plVar7 + 0x68) = plVar7;
                    }
                }
            }
        }
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x100) == 0) {
        FUN_140380ed0(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x100;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x200) == 0) {
        FUN_14037f190(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x200;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x400) == 0) {
        FUN_14037e910(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffbff;
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffe7ff | 0x400;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x800) == 0) {
        FUN_14037ea00(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x800;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x1000) == 0) {
        FUN_140381070(param_1);
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffdfff | 0x1000;
        FUN_140383760(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff5;
    }
    if ((*(uint *)((longlong)param_1 + 0x24) & 0x2000) == 0) {
        if ((*(uint *)(*param_1 + 0xe8) & 0x4000) != 0) {
            plVar7 = param_1 + 0x40;
            do {
                lVar1 = *plVar7;
                if (((lVar1 != 0) && (*(int *)(lVar1 + 0x1c) == 0)) &&
                    (iVar2 = FUN_1403746e0(lVar1,param_2), iVar2 == 0)) {
                    return 0;
                }
                uVar8 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar8;
                plVar7 = plVar7 + 1;
            } while (uVar8 < 0x10);
        }
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x2000;
    }
    if ((longlong *)param_1[0xb5] != (longlong *)0x0) {
        *(longlong *)param_1[0xb5] = param_1[0xb6];
    }
    if (param_1[0xb6] != 0) {
        *(longlong *)(param_1[0xb6] + 0x5a8) = param_1[0xb5];
    }
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + -1;
    return 1;
}



undefined8 FUN_14037d060(longlong *param_1,undefined8 param_2,int param_3)

{
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong **pplVar9;
    undefined4 local_28 [4];

    if ((*(byte *)(param_1 + 5) & 1) == 0) {
        if ((param_1[0xb5] != 0) && (uVar3 = FUN_14037cc30(), (int)uVar3 == 0)) {
            return uVar3;
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
    }
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
        FUN_14037e410(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
    }
    if ((*(byte *)(param_1 + 5) & 4) == 0) {
        FUN_14037eab0(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 4;
        FUN_140383760(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    }
    if ((*(byte *)(param_1 + 5) & 8) == 0) {
        FUN_14037ebe0(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 8;
        FUN_140383760(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    }
    if ((*(byte *)(param_1 + 5) & 0x10) == 0) {
        FUN_14037ed10(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10;
        FUN_140383760(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    }
    if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
        FUN_14037ee40(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x20;
    }
    if ((*(byte *)(param_1 + 5) & 0x40) == 0) {
        FUN_14037ef80(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
        FUN_140383760(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
    }
    if ((*(byte *)(param_1 + 5) & 0x80) == 0) {
        FUN_14037f250(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x80;
    }
    if ((*(uint *)(param_1 + 5) & 0x100) == 0) {
        FUN_14037f370(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x100;
    }
    uVar4 = 0;
    if ((*(uint *)(param_1 + 5) & 0x200) == 0) {
        uVar6 = 1;
        if (((*(byte *)(*param_1 + 0xe8) & 0x60) != 0) &&
            (lVar8 = *(longlong *)(param_1[3] + 0x30), lVar8 != 0)) {
            do {
                plVar7 = *(longlong **)(lVar8 + 8);
                if (param_3 == 0) {
                    local_28[0] = 0;
                    iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7,local_28);
                    if (iVar2 == 0) {
                        uVar6 = uVar4;
                    }
                }
                else {
                    iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
                    if (iVar2 == 0) {
                        return 0;
                    }
                }
                lVar8 = *(longlong *)(lVar8 + 0x18);
            } while (lVar8 != 0);
            if ((char)uVar6 == '\0') goto LAB_14037d1e3;
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x200;
    }
    LAB_14037d1e3:
    if ((*(uint *)(param_1 + 5) & 0x400) == 0) {
        if ((*(byte *)(*param_1 + 0xe8) & 4) != 0) {
            pplVar9 = (longlong **)(param_1 + 0xf);
            uVar6 = uVar4;
            do {
                plVar7 = pplVar9[-4];
                if ((plVar7 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2), iVar2 == 0)) {
                    return 0;
                }
                plVar7 = *pplVar9;
                if ((plVar7 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2), iVar2 == 0)) {
                    return 0;
                }
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                pplVar9 = pplVar9 + 1;
            } while (uVar5 < 4);
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x400;
    }
    if ((*(uint *)(param_1 + 5) & 0x800) == 0) {
        FUN_14037f750(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x800;
    }
    if ((*(uint *)(param_1 + 5) & 0x1000) == 0) {
        if (((*(byte *)(*param_1 + 0xe8) & 0x10) != 0) && (uVar6 = uVar4, param_1[0x81] != 0)) {
            do {
                plVar7 = *(longlong **)(param_1[0x82] + uVar6 * 8);
                if ((plVar7 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2), iVar2 == 0)) {
                    return 0;
                }
                uVar6 = (ulonglong)((int)uVar6 + 1);
            } while (uVar6 < (ulonglong)param_1[0x81]);
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x1000;
    }
    if ((*(uint *)(param_1 + 5) & 0x2000) == 0) {
        FUN_1403829c0(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x2000;
    }
    if ((*(uint *)(param_1 + 5) & 0x4000) == 0) {
        FUN_140382af0(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x4000;
    }
    if ((*(uint *)(param_1 + 5) & 0x8000) == 0) {
        if ((*(byte *)(*param_1 + 0xe8) & 0x10) != 0) {
            plVar7 = param_1 + 0x8d;
            do {
                lVar8 = *plVar7;
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == 0)) {
                    plVar1 = *(longlong **)(lVar8 + 0x50);
                    if (((plVar1 != (longlong *)0x0) &&
                         (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) ||
                        ((plVar1 = *(longlong **)(lVar8 + 0x58), plVar1 != (longlong *)0x0 &&
                                                                 (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)))) {
                        return 0;
                    }
                    *(undefined4 *)(lVar8 + 0x20) = 1;
                }
                uVar5 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar5;
                plVar7 = plVar7 + 1;
            } while (uVar5 < 4);
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x8000;
    }
    if ((*(uint *)(param_1 + 5) & 0x10000) == 0) {
        FUN_140382c20(param_1);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x10000;
    }
    if ((longlong *)param_1[0xb7] != (longlong *)0x0) {
        *(longlong *)param_1[0xb7] = param_1[0xb8];
    }
    if (param_1[0xb8] != 0) {
        *(longlong *)(param_1[0xb8] + 0x5b8) = param_1[0xb7];
    }
    param_1[0xb7] = 0;
    param_1[0xb8] = 0;
    *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + -1;
    return 1;
}



undefined8 FUN_14037d3e0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    uint uVar4;
    longlong **pplVar5;

    if (param_1[0xb9] == 0) {
        return 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 1) == 0) {
        if ((param_1[0xb7] != 0) && (uVar3 = FUN_14037d060(param_1,param_2,1), (int)uVar3 == 0)) {
            return uVar3;
        }
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 1;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 2) == 0) {
        FUN_140381180(param_1);
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffb | 2;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 4) == 0) {
        if ((*(uint *)(*param_1 + 0xe8) & 0x4000) != 0) {
            uVar4 = 0;
            pplVar5 = (longlong **)(param_1 + 0x54);
            do {
                plVar1 = pplVar5[-4];
                if ((plVar1 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) {
                    return 0;
                }
                plVar1 = *pplVar5;
                if ((plVar1 != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) {
                    return 0;
                }
                uVar4 = uVar4 + 1;
                pplVar5 = pplVar5 + 1;
            } while (uVar4 < 4);
        }
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 4;
    }
    if ((*(byte *)((longlong)param_1 + 0x2c) & 8) == 0) {
        iVar2 = FUN_140381300(param_1);
        if (iVar2 == 0) {
            return 0;
        }
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
    }
    if ((longlong *)param_1[0xb9] != (longlong *)0x0) {
        *(longlong *)param_1[0xb9] = param_1[0xba];
    }
    if (param_1[0xba] != 0) {
        *(longlong *)(param_1[0xba] + 0x5c8) = param_1[0xb9];
    }
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + -1;
    return 1;
}



void FUN_14037d540(longlong *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong **pplVar4;
    longlong lVar5;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 local_48 [2];
    longlong *local_40;
    undefined *local_38;
    undefined8 local_30;

    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x648) == 0) {
        lVar3 = (**(code **)(*(longlong *)param_1[2] + 0x28))();
        lVar1 = *param_1;
        auVar6 = minps(*(undefined (*) [16])(lVar5 + 0x390),*(undefined (*) [16])(lVar3 + 0x30));
        auVar6 = maxps(*(undefined (*) [16])(lVar3 + 0x20),auVar6);
        fVar7 = SUB164(auVar6,0) - *(float *)(lVar1 + 0x390);
        fVar8 = SUB164(auVar6 >> 0x20,0) - *(float *)(lVar1 + 0x394);
        fVar9 = SUB164(auVar6 >> 0x40,0) - *(float *)(lVar1 + 0x398);
        fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    }
    else {
        fVar7 = 1.0;
    }
    lVar5 = 4;
    pplVar4 = (longlong **)(param_1 + 0xb);
    do {
        if (pplVar4[-4] != (longlong *)0x0) {
            plVar2 = *pplVar4;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(*param_1 + 0x774));
            }
            plVar2 = pplVar4[4];
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(*param_1 + 0x774));
            }
            plVar2 = pplVar4[0x45];
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(*param_1 + 0x774));
            }
            if (pplVar4[0x49] != (longlong *)0x0) {
                (**(code **)(*pplVar4[0x49] + 0x30))();
            }
        }
        pplVar4 = pplVar4 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
        *(longlong *)param_1[0xb3] = param_1[0xb4];
    }
    if (param_1[0xb4] != 0) {
        *(longlong *)(param_1[0xb4] + 0x598) = param_1[0xb3];
    }
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    local_48[0] = 0;
    local_30 = 0;
    fVar7 = fVar7 * 250.0 * 0.03125;
    if (fVar7 <= 250.0) {
        fVar7 = 250.0;
    }
    local_38 = &LAB_140383720;
    if (8000.0 <= fVar7) {
        fVar7 = 8000.0;
    }
    local_40 = param_1;
    FUN_140195960(param_1 + 0x37,(longlong)fVar7,local_48,4);
    return;
}



void FUN_14037d790(longlong param_1)

{
    ushort uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    float *pfVar8;
    ushort *puVar9;
    float *pfVar10;
    undefined (*pauVar11) [16];
    undefined (*pauVar12) [16];
    undefined4 *puVar13;
    longlong lVar14;
    undefined4 *puVar15;
    float *pfVar16;
    longlong lVar17;
    float *pfVar18;
    undefined4 *puVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined auVar25 [12];
    undefined auVar26 [16];
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float local_res8;
    float fStackX12;
    longlong *local_res10;
    float local_res18;
    float fStackX28;

    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),0,&local_res10,1);
    lVar5 = (**(code **)(*local_res10 + 0x10))();
    lVar6 = (**(code **)(*local_res10 + 0x18))();
    fVar30 = DAT_140c41b9c;
    fVar29 = DAT_140c41b94;
    pfVar16 = (float *)&DAT_140dc16b0;
    lVar17 = 0x13;
    lVar6 = (lVar6 - *(int *)(lVar5 + 0x28)) - (longlong)*(int *)(lVar5 + 0x2c);
    do {
        lVar14 = 2;
        pfVar8 = pfVar16 + -0xe;
        puVar9 = (ushort *)(lVar6 + 4);
        do {
            pfVar8[-2] = (float)(uint)(puVar9[-2] & 0x7fff) * fVar30 - fVar29;
            pfVar8[-1] = (float)(uint)(puVar9[-1] & 0x7fff) * fVar30 - fVar29;
            *pfVar8 = (float)(uint)(*puVar9 & 0x7fff) * fVar30 - fVar29;
            pfVar8[1] = (float)(uint)(puVar9[1] & 0x7fff) * fVar30 - fVar29;
            pfVar8[2] = (float)(uint)(puVar9[2] & 0x7fff) * fVar30 - fVar29;
            pfVar8[3] = (float)(uint)(puVar9[3] & 0x7fff) * fVar30 - fVar29;
            pfVar8[4] = (float)(uint)(puVar9[4] & 0x7fff) * fVar30 - fVar29;
            pfVar8[5] = (float)(uint)(puVar9[5] & 0x7fff) * fVar30 - fVar29;
            lVar14 = lVar14 + -1;
            pfVar8 = pfVar8 + 8;
            puVar9 = puVar9 + 8;
        } while (lVar14 != 0);
        puVar9 = (ushort *)(lVar6 + 0x20);
        lVar14 = 3;
        pfVar8 = pfVar16;
        do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            *pfVar8 = (float)(uint)(uVar1 & 0x7fff) * fVar30 - fVar29;
            lVar14 = lVar14 + -1;
            pfVar8 = pfVar8 + 1;
        } while (lVar14 != 0);
        pfVar16 = pfVar16 + 0x13;
        lVar6 = lVar6 + *(int *)(lVar5 + 0x2c);
        lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    fVar29 = 1.0;
    fVar30 = 0.5;
    puVar13 = &DAT_140dc1c20;
    lVar5 = 0x12;
    puVar15 = &DAT_140dc1c20;
    puVar19 = &DAT_140dc1670;
    do {
        lVar17 = (longlong)(puVar19 + 0x13) - (longlong)puVar19;
        lVar14 = (longlong)puVar15 - (longlong)puVar19;
        lVar6 = 2;
        pfVar16 = (float *)(puVar19 + 1);
        pfVar8 = (float *)(puVar19 + 1);
        do {
            fVar20 = pfVar16[-1] - *(float *)(lVar17 + (longlong)pfVar8);
            fVar22 = *pfVar8 - *(float *)((longlong)pfVar16 + lVar17 + -4);
            fVar27 = 1.0 / (fVar20 * fVar20 + 1.0);
            fVar23 = 1.0 / (fVar22 * fVar22 + 1.0);
            fVar20 = *pfVar16;
            fVar22 = *(float *)(lVar17 + 4 + (longlong)pfVar8);
            fVar21 = fVar20 - *(float *)(lVar17 + 4 + (longlong)pfVar8);
            *(float *)((longlong)pfVar16 + lVar14 + -4) =
                    ((*pfVar8 + *(float *)((longlong)pfVar16 + lVar17 + -4)) * fVar23 +
                     (pfVar16[-1] + *(float *)(lVar17 + (longlong)pfVar8)) * fVar27) *
                    (0.5 / (fVar23 + fVar27));
            fVar23 = pfVar8[1] - *(float *)(lVar17 + (longlong)pfVar16);
            fVar28 = 1.0 / (fVar21 * fVar21 + 1.0);
            fVar24 = 1.0 / (fVar23 * fVar23 + 1.0);
            fVar21 = pfVar16[1];
            fVar23 = *(float *)(lVar17 + 8 + (longlong)pfVar8);
            fVar27 = fVar21 - *(float *)(lVar17 + 8 + (longlong)pfVar8);
            *(float *)(lVar14 + (longlong)pfVar16) =
                    ((pfVar8[1] + *(float *)(lVar17 + (longlong)pfVar16)) * fVar24 +
                     (fVar20 + fVar22) * fVar28) * (0.5 / (fVar24 + fVar28));
            fVar20 = pfVar8[2] - *(float *)(lVar17 + 4 + (longlong)pfVar16);
            fVar24 = 1.0 / (fVar27 * fVar27 + 1.0);
            fVar27 = 1.0 / (fVar20 * fVar20 + 1.0);
            fVar20 = pfVar16[2];
            fVar22 = fVar20 - *(float *)(lVar17 + 0xc + (longlong)pfVar8);
            *(float *)(lVar14 + 4 + (longlong)pfVar16) =
                    ((pfVar8[2] + *(float *)(lVar17 + 4 + (longlong)pfVar16)) * fVar27 +
                     (fVar21 + fVar23) * fVar24) * (0.5 / (fVar27 + fVar24));
            fVar24 = 1.0 / (fVar22 * fVar22 + 1.0);
            fVar22 = pfVar8[3] - *(float *)(lVar17 + 8 + (longlong)pfVar16);
            fVar27 = 1.0 / (fVar22 * fVar22 + 1.0);
            fVar22 = pfVar16[3];
            fVar21 = *(float *)(lVar17 + 0x10 + (longlong)pfVar8);
            fVar23 = fVar22 - *(float *)(lVar17 + 0x10 + (longlong)pfVar8);
            *(float *)(lVar14 + 8 + (longlong)pfVar16) =
                    ((pfVar8[3] + *(float *)(lVar17 + 8 + (longlong)pfVar16)) * fVar27 +
                     (fVar20 + *(float *)(lVar17 + 0xc + (longlong)pfVar8)) * fVar24) *
                    (0.5 / (fVar27 + fVar24));
            fVar20 = pfVar8[4] - *(float *)(lVar17 + 0xc + (longlong)pfVar16);
            fVar28 = 1.0 / (fVar23 * fVar23 + 1.0);
            fVar24 = 1.0 / (fVar20 * fVar20 + 1.0);
            fVar20 = pfVar16[4];
            fVar23 = *(float *)(lVar17 + 0x14 + (longlong)pfVar8);
            fVar27 = fVar20 - *(float *)(lVar17 + 0x14 + (longlong)pfVar8);
            *(float *)(lVar14 + 0xc + (longlong)pfVar16) =
                    ((pfVar8[4] + *(float *)(lVar17 + 0xc + (longlong)pfVar16)) * fVar24 +
                     (fVar22 + fVar21) * fVar28) * (0.5 / (fVar24 + fVar28));
            fVar22 = pfVar8[5] - *(float *)(lVar17 + 0x10 + (longlong)pfVar16);
            fVar28 = 1.0 / (fVar27 * fVar27 + 1.0);
            fVar24 = 1.0 / (fVar22 * fVar22 + 1.0);
            fVar22 = pfVar16[5];
            fVar21 = *(float *)(lVar17 + 0x18 + (longlong)pfVar8);
            fVar27 = fVar22 - *(float *)(lVar17 + 0x18 + (longlong)pfVar8);
            *(float *)((longlong)pfVar16 + lVar14 + 0x10) =
                    ((pfVar8[5] + *(float *)(lVar17 + 0x10 + (longlong)pfVar16)) * fVar24 +
                     (fVar20 + fVar23) * fVar28) * (0.5 / (fVar24 + fVar28));
            fVar20 = pfVar8[6] - *(float *)(lVar17 + 0x14 + (longlong)pfVar16);
            fVar28 = 1.0 / (fVar27 * fVar27 + 1.0);
            fVar24 = 1.0 / (fVar20 * fVar20 + 1.0);
            fVar20 = pfVar16[6];
            pfVar10 = pfVar16 + 9;
            pfVar18 = pfVar8 + 9;
            fVar23 = *(float *)(lVar17 + -8 + (longlong)pfVar18);
            fVar27 = fVar20 - *(float *)(lVar17 + -8 + (longlong)pfVar18);
            *(float *)((longlong)pfVar16 + lVar14 + 0x14) =
                    ((pfVar8[6] + *(float *)(lVar17 + 0x14 + (longlong)pfVar16)) * fVar24 +
                     (fVar22 + fVar21) * fVar28) * (0.5 / (fVar24 + fVar28));
            fVar22 = pfVar8[7] - *(float *)(lVar17 + -0xc + (longlong)pfVar10);
            fVar28 = 1.0 / (fVar27 * fVar27 + 1.0);
            fVar24 = 1.0 / (fVar22 * fVar22 + 1.0);
            fVar22 = pfVar16[7];
            fVar21 = *(float *)(lVar17 + -4 + (longlong)pfVar18);
            fVar27 = fVar22 - *(float *)(lVar17 + -4 + (longlong)pfVar18);
            *(float *)((longlong)pfVar16 + lVar14 + 0x18) =
                    ((pfVar8[7] + *(float *)(lVar17 + -0xc + (longlong)pfVar10)) * fVar24 +
                     (fVar20 + fVar23) * fVar28) * (0.5 / (fVar24 + fVar28));
            fVar20 = pfVar8[8] - *(float *)(lVar17 + -8 + (longlong)pfVar10);
            fVar23 = 1.0 / (fVar27 * fVar27 + 1.0);
            fVar20 = 1.0 / (fVar20 * fVar20 + 1.0);
            *(float *)((longlong)pfVar16 + lVar14 + 0x1c) =
                    ((pfVar8[8] + *(float *)(lVar17 + -8 + (longlong)pfVar10)) * fVar20 +
                     (fVar22 + fVar21) * fVar23) * (0.5 / (fVar20 + fVar23));
            lVar6 = lVar6 + -1;
            pfVar16 = pfVar10;
            pfVar8 = pfVar18;
        } while (lVar6 != 0);
        puVar15 = puVar15 + 0x12;
        lVar5 = lVar5 + -1;
        puVar19 = puVar19 + 0x13;
    } while (lVar5 != 0);
    if (*(longlong *)(param_1 + 0x98) == 0) {
        uVar7 = FUN_14018b280(0x2210,0);
        *(undefined8 *)(param_1 + 0x98) = uVar7;
    }
    fVar20 = DAT_140c44574;
    pfVar16 = *(float **)(param_1 + 0x98);
    puVar19 = &DAT_140dc16c0;
    lVar5 = 0x11;
    local_res8 = DAT_140c79888;
    fStackX12 = DAT_140c7988c;
    do {
        lVar6 = 0x11;
        pfVar8 = (float *)(puVar13 + 0x12);
        do {
            pfVar10 = pfVar16;
            fVar22 = pfVar8[1];
            pfVar16 = pfVar8 + 1;
            fVar21 = *(float *)((longlong)puVar19 + (-0x4c - (longlong)puVar13) + (longlong)pfVar16);
            if (fVar21 <= local_res8) {
                local_res8 = fVar21;
            }
            fVar21 = *(float *)((longlong)puVar19 + (-0x4c - (longlong)puVar13) + (longlong)pfVar16);
            if (fStackX12 <= fVar21) {
                fStackX12 = fVar21;
            }
            fVar21 = pfVar8[-0x11];
            fVar23 = *pfVar8;
            fVar27 = pfVar8[-0x12];
            pfVar10[1] = fVar20;
            fVar23 = ((fVar22 + fVar21) - (fVar23 + fVar27)) * -0.5;
            *pfVar10 = fVar23;
            fVar21 = ((*pfVar16 + *pfVar8) - (pfVar8[-0x11] + pfVar8[-0x12])) * -0.5;
            pfVar10[2] = fVar21;
            pfVar10[3] = *(float *)((longlong)puVar19 + (-0x4c - (longlong)puVar13) + (longlong)pfVar16);
            auVar26 = CONCAT124(CONCAT48(fVar21 * fVar21,CONCAT44(fVar20 * fVar20,fVar23 * fVar23)) >>
                                                                                                    0x20,fVar23 * fVar23 + fVar20 * fVar20 + 0.0) &
                      (undefined  [16])0xffffffffffffffff;
            auVar26 = rsqrtss(auVar26,auVar26);
            fVar22 = SUB164(auVar26,0);
            *pfVar10 = fVar22 * fVar23;
            pfVar10[1] = fVar22 * fVar20;
            pfVar10[2] = fVar22 * fVar21;
            lVar6 = lVar6 + -1;
            pfVar8 = pfVar16;
            pfVar16 = pfVar10 + 4;
        } while (lVar6 != 0);
        pfVar16 = pfVar10 + 0x44;
        puVar19 = puVar19 + 0x13;
        puVar13 = puVar13 + 0x12;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    pauVar11 = *(undefined (**) [16])(param_1 + 0x98);
    lVar5 = 0x10;
    do {
        lVar6 = 0x10;
        pfVar16 = (float *)(pauVar11[0x22] + 0xc);
        pauVar12 = pauVar11[0x11];
        do {
            pauVar11 = pauVar12[1];
            fVar20 = fVar29 / ((pfVar16[-0x84] - pfVar16[-4]) * (pfVar16[-0x84] - pfVar16[-4]) + fVar29);
            fVar21 = fVar29 / ((pfVar16[-0x88] - *pfVar16) * (pfVar16[-0x88] - *pfVar16) + fVar29);
            fVar22 = fVar30 / (fVar20 + fVar21);
            fVar21 = fVar22 * fVar21;
            fVar22 = fVar22 * fVar20;
            *pauVar12 = CONCAT412(fVar22 * (pfVar16[-0x84] + pfVar16[-4]) +
                                  fVar21 * (pfVar16[-0x88] + *pfVar16),
                                  CONCAT48(fVar22 * (pfVar16[-0x85] + pfVar16[-5]) +
                                           fVar21 * (pfVar16[-0x89] + pfVar16[-1]),
                                           CONCAT44(fVar22 * (pfVar16[-0x86] + pfVar16[-6]) +
                                                    fVar21 * (pfVar16[-0x8a] + pfVar16[-2]),
                                                    fVar22 * (pfVar16[-0x87] + pfVar16[-7]) +
                                                    fVar21 * (pfVar16[-0x8b] + pfVar16[-3]))));
            fVar20 = pfVar16[-0x45];
            fVar22 = pfVar16[-0x46];
            fVar21 = *(float *)*pauVar12;
            auVar26 = CONCAT124(CONCAT48(fVar20 * fVar20,CONCAT44(fVar22 * fVar22,fVar21 * fVar21)) >>
                                                                                                    0x20,fVar21 * fVar21 + fVar22 * fVar22 + 0.0) &
                      (undefined  [16])0xffffffffffffffff;
            auVar26 = rsqrtss(auVar26,auVar26);
            fVar23 = SUB164(auVar26,0);
            auVar25 = CONCAT48(fVar23 * fVar20,CONCAT44(fVar23 * fVar22,fVar23 * fVar21));
            *(float *)*pauVar12 = fVar23 * fVar21;
            *(float *)(*pauVar12 + 4) = fVar23 * fVar22;
            *(float *)(*pauVar12 + 8) = fVar23 * fVar20;
            lVar6 = lVar6 + -1;
            pfVar16 = pfVar16 + 4;
            pauVar12 = pauVar11;
        } while (lVar6 != 0);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    local_res18 = local_res8;
    fStackX28 = fStackX12;
    (**(code **)(*local_res10 + 8))
            (SUB128(auVar25 >> 0x20,0),0,SUB168(CONCAT412(fVar23 * 0.0,auVar25) >> 0x40,0));
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    uVar2 = *(undefined4 *)(lVar5 + 0x24);
    uVar3 = *(undefined4 *)(lVar5 + 0x28);
    uVar4 = *(undefined4 *)(lVar5 + 0x2c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar5 + 0x20);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    *(undefined4 *)(param_1 + 200) = uVar3;
    *(undefined4 *)(param_1 + 0xcc) = uVar4;
    uVar2 = *(undefined4 *)(lVar5 + 0x34);
    uVar3 = *(undefined4 *)(lVar5 + 0x38);
    uVar4 = *(undefined4 *)(lVar5 + 0x3c);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(lVar5 + 0x30);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    *(undefined4 *)(param_1 + 0xd8) = uVar3;
    *(undefined4 *)(param_1 + 0xdc) = uVar4;
    *(float *)(param_1 + 0xd4) = fStackX12;
    *(float *)(param_1 + 0xc4) = local_res8;
    fVar29 = *(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xc0);
    fVar20 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xc4);
    fVar22 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 200);
    *(undefined (*) [16])(param_1 + 0xe0) =
            CONCAT412((*(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0xdc)) * 0.5,
                      CONCAT48((*(float *)(param_1 + 200) + *(float *)(param_1 + 0xd8)) * 0.5,
                               CONCAT44((*(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xd4)) * 0.5,
                                        (*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xd0)) * 0.5))
            );
    *(float *)(param_1 + 0xf0) = SQRT(fVar29 * fVar29 + fVar20 * fVar20 + fVar22 * fVar22) * fVar30;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0xdc);
    fVar29 = *(float *)(param_1 + 0xc4);
    if (*(float *)(param_1 + 0x3fc) <= *(float *)(param_1 + 0xc4)) {
        fVar29 = *(float *)(param_1 + 0x3fc);
    }
    fVar20 = *(float *)(param_1 + 0xd4);
    if (*(float *)(param_1 + 0xd4) <= *(float *)(param_1 + 0x400)) {
        fVar20 = *(float *)(param_1 + 0x400);
    }
    *(float *)(param_1 + 0x104) = fVar29;
    *(float *)(param_1 + 0x114) = fVar20;
    fVar29 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x100);
    fVar20 = *(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104);
    fVar22 = *(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108);
    *(undefined (*) [16])(param_1 + 0x120) =
            CONCAT412((*(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x11c)) * 0.5,
                      CONCAT48((*(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x118)) * 0.5,
                               CONCAT44((*(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x114)) * 0.5
                                       ,(*(float *)(param_1 + 0x100) + *(float *)(param_1 + 0x110)) *
                                        0.5)));
    *(float *)(param_1 + 0x130) = SQRT(fVar29 * fVar29 + fVar20 * fVar20 + fVar22 * fVar22) * fVar30;
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0xdc);
    *(float *)(param_1 + 800) = *(float *)(param_1 + 800) - 1.0;
    *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) - 1.0;
    *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) - 1.0;
    *(float *)(param_1 + 0x32c) = *(float *)(param_1 + 0x32c) - 1.0;
    fVar29 = *(float *)(param_1 + 0x330) + 1.0;
    fVar20 = *(float *)(param_1 + 0x334) + 1.0;
    fVar22 = *(float *)(param_1 + 0x338) + 1.0;
    fVar21 = *(float *)(param_1 + 0x33c) + 1.0;
    *(float *)(param_1 + 0x330) = fVar29;
    *(float *)(param_1 + 0x334) = fVar20;
    *(float *)(param_1 + 0x338) = fVar22;
    *(float *)(param_1 + 0x33c) = fVar21;
    fVar23 = fVar29 - *(float *)(param_1 + 800);
    fVar27 = fVar20 - *(float *)(param_1 + 0x324);
    fVar24 = fVar22 - *(float *)(param_1 + 0x328);
    *(undefined (*) [16])(param_1 + 0x340) =
            CONCAT412((fVar21 + *(float *)(param_1 + 0x32c)) * 0.5,
                      CONCAT48((fVar22 + *(float *)(param_1 + 0x328)) * 0.5,
                               CONCAT44((fVar20 + *(float *)(param_1 + 0x324)) * 0.5,
                                        (fVar29 + *(float *)(param_1 + 800)) * 0.5)));
    *(float *)(param_1 + 0x350) = SQRT(fVar23 * fVar23 + fVar27 * fVar27 + fVar24 * fVar24) * fVar30;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined * FUN_14037e2d0(undefined *param_1,undefined (*param_2) [16])

{
    undefined4 uVar1;
    float fVar2;
    float fVar3;
    undefined8 uVar4;
    undefined auVar5 [16];
    undefined local_48 [4];
    undefined auStack68 [8];
    undefined4 uStack60;

    _auStack68 = SUB1612(CONCAT412(uStack60,CONCAT48(*(float *)(*param_2 + 8),_local_48)) >> 0x20,0) &
                 SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0);
    _local_48 = CONCAT124(_auStack68,*(float *)*param_2) & (undefined  [16])0xffffffff7fffffff;
    _local_48 = CONCAT88(stack0xffffffffffffffc0,CONCAT44(*(float *)(*param_2 + 4),local_48)) &
                (undefined  [16])0xffffffffffffffff;
    fVar2 = auStack68._0_4_ * 1.0 + local_48 * 1.0 + 0.0;
    auVar5 = divps(*param_2,CONCAT412(fVar2,CONCAT48(fVar2,CONCAT44(fVar2,fVar2))));
    uVar4 = SUB168(auVar5,0);
    if (*(float *)(*param_2 + 8) < 0.0) {
        fVar2 = 1.0;
        if (*(float *)(*param_2 + 4) < 0.0) {
            fVar3 = -1.0;
        }
        else {
            fVar3 = 1.0;
        }
        if (*(float *)*param_2 < 0.0) {
            fVar2 = -1.0;
        }
        auStack68._0_4_ = SUB164(auVar5 >> 0x20,0);
        local_48 = SUB164(auVar5,0);
        uVar1 = local_48;
        _auStack68 = SUB1612(auVar5 >> 0x20,0);
        _local_48 = CONCAT124(_auStack68,auStack68._0_4_) & (undefined  [16])0xffffffff7fffffff;
        _local_48 = CONCAT88(stack0xffffffffffffffc0,CONCAT44(uVar1,local_48)) &
                    (undefined  [16])0xffffffffffffffff;
        uVar4 = CONCAT44(fVar3 - auStack68._0_4_ * fVar3,fVar2 - local_48 * fVar2);
    }
    *param_1 = (char)(longlong)(((float)uVar4 * 0.5 + 0.5) * 255.0);
    param_1[1] = (char)(longlong)(((float)((ulonglong)uVar4 >> 0x20) * 0.5 + 0.5) * 255.0);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14037e410(longlong *param_1)

{
    short sVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    int *piVar5;
    longlong lVar6;
    ushort *puVar7;
    byte *pbVar8;
    short *psVar9;
    int *piVar10;
    short *psVar11;
    short *psVar12;
    uint uVar13;
    int *piVar14;
    ushort uVar15;
    ushort uVar16;
    short sVar17;
    ushort *puVar18;
    longlong lVar19;
    undefined4 uVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    longlong *local_res10;
    longlong *local_res20;
    longlong local_a8;

    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x14] + 8))();
        param_1[0x14] = 0;
    }
    plVar2 = (longlong *)param_1[0x16];
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
        param_1[0x16] = 0;
    }
    if ((*(byte *)(*param_1 + 0xe8) & 4) != 0) {
        uVar20 = 1;
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),0,0);
        if (-1 < iVar3) {
            plVar2 = *(longlong **)(param_1[0x14] + 0x20);
            piVar5 = (int *)(**(code **)(*plVar2 + 0x38))(plVar2,0,0);
            if (piVar5 != (int *)0x0) {
                (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0);
                lVar6 = (**(code **)(*local_res20 + 0x10))();
                puVar7 = (ushort *)(**(code **)(*local_res20 + 0x18))();
                (**(code **)(*(longlong *)param_1[2] + 0x28))();
                local_a8 = 0x11;
                piVar10 = piVar5;
                do {
                    lVar19 = 0x11;
                    puVar18 = puVar7;
                    do {
                        piVar14 = piVar10;
                        uVar16 = *puVar18;
                        if ((uVar16 & 0x8000) != 0) {
                            uVar20 = 0;
                        }
                        pbVar8 = (byte *)FUN_14037e2d0();
                        puVar18 = puVar18 + 1;
                        uVar15 = (ushort)pbVar8[1] * 0x100 + (ushort)*pbVar8;
                        *piVar14 = (uint)(byte)((uVar16 & 0x7fff) >> 8) * 0x1000000 +
                                   (uint)(byte)(uVar15 >> 8) * 0x100 + (uVar15 & 0xff) * 0x10000 +
                                   (uint)(byte)(uVar16 & 0x7fff);
                        lVar19 = lVar19 + -1;
                        piVar10 = piVar14 + 1;
                    } while (lVar19 != 0);
                    piVar10 = piVar14 + 0x11;
                    puVar7 = (ushort *)((longlong)puVar7 + (longlong)*(int *)(lVar6 + 0x2c));
                    local_a8 = local_a8 + -1;
                } while (local_a8 != 0);
                fVar22 = 0.5;
                local_a8 = 0x10;
                lVar6 = param_1[0x13];
                fVar21 = 1.0 / _DAT_140c4456c;
                fVar23 = DAT_140c44568;
                do {
                    lVar6 = lVar6 + 0x110;
                    lVar19 = 0x10;
                    piVar10 = piVar5 + 0x11;
                    do {
                        uVar4 = (uint)((fVar23 + *(float *)(lVar6 + 0xc)) * fVar21 + fVar22);
                        uVar13 = 0;
                        if ((-1 < (int)uVar4) && (uVar13 = 0x7f, (int)uVar4 < 0x8000)) {
                            uVar13 = (uint)((ulonglong)(uVar4 & 0xffff) >> 8);
                        }
                        pbVar8 = (byte *)FUN_14037e2d0();
                        piVar5 = piVar10 + 1;
                        lVar6 = lVar6 + 0x10;
                        uVar16 = (ushort)pbVar8[1] * 0x100 + (ushort)*pbVar8;
                        *piVar10 = (uVar13 >> 8) * 0x1000000 + (uint)(byte)(uVar16 >> 8) * 0x100 +
                                   (uVar16 & 0xff) * 0x10000 + (uVar13 & 0xff);
                        lVar19 = lVar19 + -1;
                        piVar10 = piVar5;
                    } while (lVar19 != 0);
                    local_a8 = local_a8 + -1;
                } while (local_a8 != 0);
                (**(code **)(*local_res20 + 8))();
                (**(code **)(*plVar2 + 0x40))();
            }
        }
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),1,uVar20,param_1 + 0x16);
        if (iVar3 < 0) {
            *(undefined4 *)(param_1 + 0x15) = 0;
        }
        else if (iVar3 == 1) {
            *(undefined4 *)(param_1 + 0x15) = 0xc00;
        }
        else {
            plVar2 = *(longlong **)(param_1[0x16] + 0x20);
            psVar9 = (short *)(**(code **)(*plVar2 + 0x38))(plVar2,0,0,2);
            if (psVar9 != (short *)0x0) {
                (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0);
                lVar6 = (**(code **)(*local_res10 + 0x10))();
                puVar7 = (ushort *)(**(code **)(*local_res10 + 0x18))();
                uVar13 = 0;
                psVar12 = psVar9;
                do {
                    uVar4 = 0;
                    psVar11 = psVar12;
                    puVar18 = puVar7;
                    do {
                        psVar12 = psVar11;
                        if ((*puVar18 & 0x8000) == 0) {
                            sVar17 = (short)uVar13 * 0x21 + (short)uVar4;
                            psVar12 = psVar11 + 0xc;
                            psVar11[1] = sVar17;
                            psVar11[5] = sVar17;
                            sVar1 = sVar17 + 0x11;
                            psVar11[4] = sVar17 + 1;
                            psVar11[0xb] = sVar17 + 1;
                            *psVar11 = sVar1;
                            psVar11[3] = sVar1;
                            psVar11[2] = sVar17 + 0x21;
                            psVar11[7] = sVar17 + 0x21;
                            psVar11[6] = sVar1;
                            psVar11[9] = sVar1;
                            psVar11[8] = sVar17 + 0x22;
                            psVar11[10] = sVar17 + 0x22;
                        }
                        uVar4 = uVar4 + 1;
                        puVar18 = puVar18 + 1;
                        psVar11 = psVar12;
                    } while (uVar4 < 0x10);
                    uVar13 = uVar13 + 1;
                    puVar7 = (ushort *)((longlong)puVar7 + (longlong)*(int *)(lVar6 + 0x2c));
                } while (uVar13 < 0x10);
                *(int *)(param_1 + 0x15) = (int)((longlong)psVar12 - (longlong)psVar9 >> 1);
                (**(code **)(*local_res10 + 8))();
                (**(code **)(*plVar2 + 0x40))(plVar2);
            }
        }
    }
    return;
}



void FUN_14037e910(undefined8 *param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong **pplVar4;
    longlong lVar5;
    undefined auStack104 [32];
    longlong *local_48;
    longlong *local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],1,&local_40);
    puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x18))();
    local_38 = *puVar3;
    local_30 = puVar3[1];
    (**(code **)(*local_40 + 8))();
    puVar3 = &local_38;
    pplVar4 = (longlong **)(param_1 + 7);
    lVar5 = 4;
    do {
        if ((*(int *)puVar3 == 0) ||
            (iVar2 = FUN_140354660(*param_1,*(int *)puVar3,&local_48), iVar2 < 0)) {
            local_48 = (longlong *)0x0;
        }
        plVar1 = local_48;
        if (*pplVar4 != (longlong *)0x0) {
            (**(code **)(**pplVar4 + 8))();
            *pplVar4 = (longlong *)0x0;
        }
        *pplVar4 = plVar1;
        pplVar4 = pplVar4 + 1;
        puVar3 = (undefined8 *)((longlong)puVar3 + 4);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



void FUN_14037ea00(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    longlong **pplVar4;
    longlong lVar5;
    longlong *local_res10;
    longlong *local_res18 [2];

    pplVar4 = (longlong **)(param_1 + 0x58);
    lVar5 = 4;
    do {
        if ((pplVar4[-4] == (longlong *)0x0) ||
            (iVar3 = FUN_140373190(pplVar4[-4],&local_res10,local_res18), iVar3 < 0)) {
            local_res10 = (longlong *)0x0;
            local_res18[0] = (longlong *)0x0;
        }
        plVar2 = local_res18[0];
        plVar1 = local_res10;
        if (*pplVar4 != (longlong *)0x0) {
            (**(code **)(**pplVar4 + 8))();
            *pplVar4 = (longlong *)0x0;
        }
        *pplVar4 = plVar1;
        if (pplVar4[4] != (longlong *)0x0) {
            (**(code **)(*pplVar4[4] + 8))();
            pplVar4[4] = (longlong *)0x0;
        }
        pplVar4[4] = plVar2;
        pplVar4 = pplVar4 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_14037d540(param_1);
    return;
}



void FUN_14037eab0(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30] + 8))();
        param_1[0x30] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 5) == 5) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x11);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),3,uVar2,param_1 + 0x30);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x11,&local_res8);
            lVar1 = *(longlong *)(param_1[0x30] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037ebe0(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x31] + 8))();
        param_1[0x31] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 5) == 5) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x12);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),4,uVar2,param_1 + 0x31);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x12,&local_res8);
            lVar1 = *(longlong *)(param_1[0x31] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037ed10(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x32] + 8))();
        param_1[0x32] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 5) == 5) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0xd);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),5,uVar2,param_1 + 0x32);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0xd,&local_res8);
            lVar1 = *(longlong *)(param_1[0x32] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xe;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037ee40(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x33] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x33] + 8))();
        param_1[0x33] = 0;
    }
    if ((((byte)*(undefined4 *)(*param_1 + 0xe8) & 5) == 5) &&
        ((*(uint *)(*param_1 + 0xec) & 0x1000) != 0)) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0xe);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),6,uVar2,param_1 + 0x33);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0xe,&local_res8);
            lVar1 = *(longlong *)(param_1[0x33] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037ef80(longlong *param_1)

{
    code *pcVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    longlong alStackX24 [2];
    undefined8 uStack16;

    uStack16 = 0x14037ef90;
    lVar7 = FUN_1407f0f60();
    lVar7 = -lVar7;
    *(ulonglong *)(&stack0x000010e8 + lVar7) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xfffffffffffffff8 + lVar7);
    if ((longlong *)param_1[0x34] != (longlong *)0x0) {
        pcVar1 = *(code **)(*(longlong *)param_1[0x34] + 8);
        *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037efba;
        (*pcVar1)();
        param_1[0x34] = 0;
    }
    if ((((byte)*(undefined4 *)(*param_1 + 0xe8) & 5) == 5) &&
        ((*(uint *)(*param_1 + 0xec) & 0x8000) != 0)) {
        plVar2 = (longlong *)param_1[2];
        pcVar1 = *(code **)(*plVar2 + 0x40);
        *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037eff8;
        uVar5 = (*pcVar1)(plVar2,0x10);
        uVar3 = *(undefined8 *)(*param_1 + 0x10);
        *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f013;
        iVar6 = FUN_140350a20(uVar3,10,uVar5,param_1 + 0x34);
        if ((-1 < iVar6) && (iVar6 != 1)) {
            plVar2 = (longlong *)param_1[2];
            *(undefined8 *)(&stack0x00000028 + lVar7) = 0;
            pcVar1 = *(code **)(*plVar2 + 0x48);
            *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f046;
            (*pcVar1)(plVar2,0x10,&stack0x00000028 + lVar7);
            lVar4 = *(longlong *)(param_1[0x34] + 0x20);
            pcVar1 = *(code **)(**(longlong **)(&stack0x00000028 + lVar7) + 0x10);
            *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f05c;
            lVar8 = (*pcVar1)();
            pcVar1 = *(code **)(**(longlong **)(&stack0x00000028 + lVar7) + 0x18);
            *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f06a;
            puVar9 = (undefined8 *)(*pcVar1)();
            puVar11 = (undefined8 *)(&stack0x00000058 + lVar7);
            do {
                puVar10 = puVar11;
                puVar11 = (undefined8 *)((longlong)puVar10 + 0x41);
                *puVar10 = *puVar9;
                puVar10[1] = puVar9[1];
                puVar10[2] = puVar9[2];
                puVar10[3] = puVar9[3];
                puVar10[4] = puVar9[4];
                puVar10[5] = puVar9[5];
                puVar10[6] = puVar9[6];
                puVar10[7] = puVar9[7];
                *(undefined *)(puVar10 + 8) = 0;
                puVar9 = (undefined8 *)((longlong)puVar9 + (longlong)*(int *)(lVar8 + 0x2c));
            } while (puVar11 < &stack0x00001098 + lVar7);
            *puVar11 = 0;
            *(undefined8 *)((longlong)puVar10 + 0x49) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x51) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x59) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x61) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x69) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x71) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x79) = 0;
            *(undefined *)((longlong)puVar10 + 0x81) = 0;
            uVar5 = *(undefined4 *)(lVar4 + 0x18);
            uVar3 = *(undefined8 *)(lVar4 + 0x10);
            *(undefined **)((longlong)alStackX24 + lVar7) = &stack0x00000030 + lVar7;
            *(undefined4 *)(&stack0x00000040 + lVar7) = 0x41;
            *(undefined4 *)(&stack0x00000044 + lVar7) = 0x41;
            *(undefined4 *)(&stack0x00000048 + lVar7) = 1;
            *(undefined4 *)(&stack0x0000004c + lVar7) = 6;
            *(undefined4 *)(&stack0x00000030 + lVar7) = 0x41;
            *(undefined4 *)(&stack0x00000034 + lVar7) = 0x1081;
            *(undefined4 *)(&stack0x00000038 + lVar7) = 0x1081;
            *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f157;
            FUN_140371d10(uVar3,uVar5,&stack0x00000058 + lVar7,&stack0x00000040 + lVar7);
            if (*(longlong **)(&stack0x00000028 + lVar7) != (longlong *)0x0) {
                pcVar1 = *(code **)(**(longlong **)(&stack0x00000028 + lVar7) + 8);
                *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f167;
                (*pcVar1)();
            }
        }
    }
    *(undefined8 *)((longlong)&uStack16 + lVar7) = 0x14037f177;
    FUN_1407db4f0(*(ulonglong *)(&stack0x000010e8 + lVar7) ^
                  (ulonglong)(&stack0xfffffffffffffff8 + lVar7));
    return;
}



void FUN_14037f190(undefined8 *param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong **pplVar5;
    longlong *local_res8;
    longlong *local_res10;

    local_res8 = (longlong *)0x0;
    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x1c,&local_res8);
    lVar3 = (**(code **)(*local_res8 + 0x18))();
    uVar4 = 0;
    pplVar5 = (longlong **)(param_1 + 0x9c);
    do {
        iVar2 = *(int *)(lVar3 + uVar4 * 4);
        if ((iVar2 == 0) || (iVar2 = FUN_140354530(*param_1,iVar2,&local_res10), iVar2 < 0)) {
            local_res10 = (longlong *)0x0;
        }
        plVar1 = local_res10;
        if (*pplVar5 != (longlong *)0x0) {
            (**(code **)(**pplVar5 + 8))();
        }
        uVar4 = uVar4 + 1;
        *pplVar5 = plVar1;
        pplVar5 = pplVar5 + 1;
    } while (uVar4 < 4);
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



void FUN_14037f250(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined8 local_10;

    if ((longlong *)param_1[0xa0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa0] + 8))();
        param_1[0xa0] = 0;
    }
    if ((*(byte *)(*param_1 + 0xec) & 1) != 0) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x1a);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),9,uVar2,param_1 + 0xa0);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x1a,&local_res8);
            lVar1 = *(longlong *)(param_1[0xa0] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x41;
            local_14 = 0x41;
            local_10 = 1;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x41;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037f370(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0xa1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xa1] + 8))();
        param_1[0xa1] = 0;
    }
    if ((*(byte *)(*param_1 + 0xec) & 2) != 0) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x22);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),8,uVar2,param_1 + 0xa1);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x22,&local_res8);
            lVar1 = *(longlong *)(param_1[0xa1] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x41;
            local_14 = 0x41;
            local_10 = 1;
            local_c = 7;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x41;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_14037f4a0(longlong **param_1)

{
    int *piVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong *local_res8;
    longlong local_res10;

    iVar3 = (**(code **)(*param_1[2] + 0x90))(param_1[2],&local_res8);
    if (-1 < iVar3) {
        plVar4 = (longlong *)(**(code **)(*local_res8 + 0x10))();
        plVar9 = (longlong *)0x0;
        plVar6 = plVar9;
        if (plVar4 != (longlong *)0x0) {
            uVar5 = SUB168(ZEXT816(8) * ZEXT816(plVar4),0);
            if (SUB168(ZEXT816(8) * ZEXT816(plVar4) >> 0x40,0) != 0) {
                uVar5 = 0xffffffffffffffff;
            }
            plVar6 = (longlong *)FUN_14018b280(uVar5,0);
        }
        FUN_1407e4830(plVar6,0,(longlong)plVar4 * 8);
        plVar7 = plVar9;
        plVar8 = plVar9;
        plVar10 = plVar9;
        if (plVar4 != (longlong *)0x0) {
            do {
                plVar7 = (longlong *)(**(code **)(*local_res8 + 0x18))(local_res8,plVar10);
                iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
                plVar7 = plVar8;
                if (iVar3 != 4) {
                    lVar2 = **param_1;
                    uVar5 = (**(code **)(*local_res8 + 0x18))(local_res8,plVar10);
                    iVar3 = (**(code **)(lVar2 + 0x130))(*param_1,uVar5,&local_res10);
                    if (-1 < iVar3) {
                        plVar7 = (longlong *)((longlong)plVar8 + 1);
                        plVar6[(longlong)plVar8] = local_res10;
                        iVar3 = *(int *)(local_res10 + 0x41c);
                        *(int *)(local_res10 + 0x41c) = iVar3 + 1;
                        if (iVar3 == 0) {
                            FUN_140377fe0();
                        }
                    }
                }
                plVar10 = (longlong *)((longlong)plVar10 + 1);
                plVar8 = plVar7;
            } while (plVar10 < plVar4);
        }
        if (param_1[0x6f] != (longlong *)0x0) {
            do {
                plVar4 = (longlong *)param_1[0x70][(longlong)plVar9];
                piVar1 = (int *)((longlong)plVar4 + 0x41c);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    FUN_140377fe0(plVar4);
                }
                (**(code **)(*plVar4 + 8))(plVar4);
                plVar9 = (longlong *)((longlong)plVar9 + 1);
            } while (plVar9 < param_1[0x6f]);
        }
        FUN_14018b900(param_1[0x70],0);
        param_1[0x70] = plVar6;
        param_1[0x6f] = plVar7;
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14037f640(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    char cVar2;
    undefined (*pauVar3) [16];
    longlong lVar4;
    undefined auVar5 [16];
    undefined auVar6 [16];
    undefined4 in_XMM6_Da;
    undefined4 uVar7;
    undefined4 in_XMM6_Db;
    undefined4 uVar8;
    undefined4 in_XMM6_Dc;
    undefined4 uVar9;
    undefined4 in_XMM6_Dd;
    undefined4 uVar10;
    undefined4 in_XMM7_Da;
    undefined4 uVar11;
    undefined4 in_XMM7_Db;
    undefined4 uVar12;
    undefined4 in_XMM7_Dc;
    undefined4 uVar13;
    undefined4 in_XMM7_Dd;
    undefined4 uVar14;
    undefined auVar15 [16];
    undefined auVar16 [16];

    uVar9 = uRam0000000140c798cc;
    uVar8 = uRam0000000140c798c8;
    uVar7 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x390) = _DAT_140c798c0;
    *(undefined4 *)(param_1 + 0x394) = uVar7;
    *(undefined4 *)(param_1 + 0x398) = uVar8;
    *(undefined4 *)(param_1 + 0x39c) = uVar9;
    uVar9 = uRam0000000140c798dc;
    uVar8 = uRam0000000140c798d8;
    uVar7 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x3a0) = _DAT_140c798d0;
    *(undefined4 *)(param_1 + 0x3a4) = uVar7;
    *(undefined4 *)(param_1 + 0x3a8) = uVar8;
    *(undefined4 *)(param_1 + 0x3ac) = uVar9;
    uVar9 = uRam0000000140c798cc;
    uVar8 = uRam0000000140c798c8;
    uVar7 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x3b0) = _DAT_140c798c0;
    *(undefined4 *)(param_1 + 0x3b4) = uVar7;
    *(undefined4 *)(param_1 + 0x3b8) = uVar8;
    *(undefined4 *)(param_1 + 0x3bc) = uVar9;
    uVar9 = uRam0000000140c798dc;
    uVar8 = uRam0000000140c798d8;
    uVar7 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x3c0) = _DAT_140c798d0;
    *(undefined4 *)(param_1 + 0x3c4) = uVar7;
    *(undefined4 *)(param_1 + 0x3c8) = uVar8;
    *(undefined4 *)(param_1 + 0x3cc) = uVar9;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (lVar4 != 0) {
        auVar16 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        auVar15 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        do {
            plVar1 = *(longlong **)(lVar4 + 8);
            pauVar3 = (undefined (*) [16])
                    (**(code **)(*plVar1 + 0x50))(plVar1,1,param_3,param_4,auVar15,auVar16);
            auVar5 = *pauVar3;
            uVar7 = SUB164(auVar5,0);
            uVar8 = SUB164(auVar5 >> 0x20,0);
            uVar9 = SUB164(auVar5 >> 0x40,0);
            uVar10 = SUB164(auVar5 >> 0x60,0);
            auVar6 = pauVar3[1];
            uVar11 = SUB164(auVar6,0);
            uVar12 = SUB164(auVar6 >> 0x20,0);
            uVar13 = SUB164(auVar6 >> 0x40,0);
            uVar14 = SUB164(auVar6 >> 0x60,0);
            auVar5 = minps(*(undefined (*) [16])(param_1 + 0x390),auVar5);
            auVar6 = maxps(*(undefined (*) [16])(param_1 + 0x3a0),auVar6);
            *(undefined (*) [16])(param_1 + 0x390) = auVar5;
            *(undefined (*) [16])(param_1 + 0x3a0) = auVar6;
            if (((longlong *)plVar1[3] != (longlong *)0x0) &&
                (cVar2 = (**(code **)(*(longlong *)plVar1[3] + 200))(SUB168(auVar5,0),SUB168(auVar6,0)),
                        -1 < cVar2)) {
                auVar5 = minps(*(undefined (*) [16])(param_1 + 0x3b0),
                               CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7))));
                auVar6 = maxps(*(undefined (*) [16])(param_1 + 0x3c0),
                               CONCAT412(uVar14,CONCAT48(uVar13,CONCAT44(uVar12,uVar11))));
                *(undefined (*) [16])(param_1 + 0x3b0) = auVar5;
                *(undefined (*) [16])(param_1 + 0x3c0) = auVar6;
            }
            lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != 0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14037f750(longlong *param_1)

{
    longlong **pplVar1;
    float *pfVar2;
    ushort uVar3;
    undefined2 uVar4;
    ushort uVar5;
    float *pfVar6;
    int iVar7;
    int iVar8;
    longlong *plVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong *plVar12;
    float *pfVar13;
    ulonglong uVar14;
    longlong lVar15;
    undefined8 *puVar16;
    ulonglong uVar17;
    undefined8 uVar18;
    undefined2 *puVar19;
    ushort *puVar20;
    float *pfVar21;
    float *pfVar22;
    uint *puVar23;
    undefined2 *puVar24;
    ushort *puVar25;
    uint uVar26;
    uint uVar27;
    ulonglong uVar28;
    ulonglong uVar29;
    ulonglong uVar30;
    char cVar31;
    uint *puVar32;
    uint uVar33;
    uint uVar34;
    short sVar35;
    ulonglong uVar36;
    float fVar37;
    undefined auVar38 [16];
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    undefined4 uVar45;
    undefined4 uVar46;
    undefined4 uVar47;
    undefined4 uVar48;
    undefined4 uVar49;
    undefined4 uVar50;
    undefined4 uVar51;
    undefined4 uVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    float fVar56;
    undefined auStack696 [32];
    longlong **local_298;
    uint local_288;
    uint local_284;
    ulonglong local_280;
    uint local_278;
    uint local_274;
    uint local_270;
    uint local_26c;
    longlong local_268;
    ushort *local_260;
    undefined8 local_258;
    uint local_250;
    undefined2 *local_248;
    uint local_240 [2];
    longlong *local_238;
    longlong local_230;
    float *local_228;
    longlong local_220;
    longlong **local_218;
    undefined local_208 [16];
    undefined4 local_1f8;
    undefined4 local_1f4;
    undefined4 local_1f0;
    undefined local_118 [8];
    undefined8 uStack272;
    float local_108;
    undefined local_f8 [12];
    float fStack236;
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined local_c8 [16];
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack696;
    pplVar1 = (longlong **)(param_1 + 0x7a);
    uVar28 = 0;
    local_238 = param_1;
    local_218 = pplVar1;
    if (*pplVar1 != (longlong *)0x0) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    *(undefined4 *)(param_1 + 0x7b) = 0;
    if ((longlong *)param_1[0x7c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7c] + 8))();
        param_1[0x7c] = 0;
    }
    *(undefined4 *)(param_1 + 0x7d) = 0;
    if ((longlong *)param_1[0x7e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7e] + 8))();
        param_1[0x7e] = 0;
    }
    *(undefined4 *)(param_1 + 0x7f) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3fc) = _DAT_140c79888;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_1 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_1 + 0x1a);
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_1 + 0x1b);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_1 + 0x1d);
    *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_1 + 0xec);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x1e);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_1 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_1 + 0x1a);
    *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)((longlong)param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_1 + 0x1b);
    *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_1 + 0xe4);
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_1 + 0x1d);
    *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_1 + 0xec);
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_1 + 0x1e);
    if (((*(byte *)(*param_1 + 0xe8) & 4) != 0) &&
        (lVar15 = *(longlong *)(param_1[3] + 0x30), lVar15 != 0)) {
        do {
            plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar15 + 8) + 0x158))();
            if ((plVar9 != (longlong *)0x0) &&
                (lVar10 = (**(code **)(*plVar9 + 0x130))(), uVar29 = uVar28, lVar10 != 0)) {
                do {
                    plVar11 = (longlong *)(**(code **)(*plVar9 + 0x138))(plVar9,uVar29);
                    plVar12 = (longlong *)(**(code **)*plVar11)(plVar11);
                    lVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
                    if ((*(byte *)(lVar10 + 0x30) & 1) == 0) {
                        plVar12 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11);
                        lVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
                        if ((*(byte *)(lVar10 + 0x30) & 1) != 0) goto LAB_14037f952;
                    }
                    else {
                        LAB_14037f952:
                        pfVar13 = (float *)(**(code **)(*plVar11 + 0x30))(plVar11);
                        if ((((*pfVar13 <= *(float *)(param_1 + 0x2a) && *(float *)(param_1 + 0x2a) != *pfVar13)
                              && (*(float *)(param_1 + 0x28) < pfVar13[4])) &&
                             (pfVar13[2] <= *(float *)(param_1 + 0x2b) &&
                              *(float *)(param_1 + 0x2b) != pfVar13[2])) &&
                            (*(float *)(param_1 + 0x29) < pfVar13[6])) {
                            fVar39 = *(float *)((longlong)param_1 + 0x144);
                            if (pfVar13[1] <= *(float *)((longlong)param_1 + 0x144)) {
                                fVar39 = pfVar13[1];
                            }
                            *(float *)((longlong)param_1 + 0x144) = fVar39;
                        }
                    }
                    uVar29 = uVar29 + 1;
                    uVar14 = (**(code **)(*plVar9 + 0x130))();
                } while (uVar29 < uVar14);
            }
            lVar15 = *(longlong *)(lVar15 + 0x18);
        } while (lVar15 != 0);
        fVar39 = 0.5;
        fVar53 = 0.5;
        fVar54 = 0.5;
        fVar55 = 0.5;
        fVar56 = 0.5;
        local_280 = local_280 & 0xffffffff00000000;
        fVar42 = 0.0;
        fVar40 = *(float *)(param_1 + 0x2a) - *(float *)(param_1 + 0x28);
        fVar41 = *(float *)((longlong)param_1 + 0x154) - *(float *)((longlong)param_1 + 0x144);
        *(undefined (*) [16])(param_1 + 0x2c) =
                CONCAT412((*(float *)((longlong)param_1 + 0x14c) + *(float *)((longlong)param_1 + 0x15c)) *
                          0.5,CONCAT48((*(float *)(param_1 + 0x29) + *(float *)(param_1 + 0x2b)) * 0.5,
                                       CONCAT44((*(float *)((longlong)param_1 + 0x144) +
                                                 *(float *)((longlong)param_1 + 0x154)) * 0.5,
                                                (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2a)) *
                                                0.5)));
        local_108 = SQRT(fVar40 * fVar40 + fVar41 * fVar41 + 0.0) * 0.5;
        *(float *)(param_1 + 0x2e) = local_108;
        puVar20 = local_260;
        do {
            uVar36 = 0;
            local_280._0_4_ = (uint)uVar28;
            local_268 = *(longlong *)(param_1[3] + 0x30);
            local_250 = 0;
            uVar29 = uVar36;
            puVar19 = local_248;
            uVar14 = uVar36;
            if (local_268 != 0) {
                do {
                    plVar9 = *(longlong **)(local_268 + 8);
                    pfVar13 = (float *)(**(code **)(*plVar9 + 0x38))(plVar9);
                    plVar11 = (longlong *)(**(code **)(*plVar9 + 0x150))(plVar9);
                    if (plVar11 != (longlong *)0x0) {
                        lVar15 = (**(code **)(*plVar11 + 0x28))();
                        if ((uint)local_280 != 0) {
                            uVar28 = 0;
                            if (*(int *)(lVar15 + 0x510) != 0) {
                                do {
                                    iVar8 = (int)uVar28;
                                    lVar10 = uVar28 * 0x10;
                                    uVar26 = iVar8 + 1;
                                    uVar28 = (ulonglong)uVar26;
                                    puVar16 = (undefined8 *)(lVar10 + *(longlong *)(lVar15 + 0x518));
                                    fVar40 = *(float *)((longlong)puVar16 + 4);
                                    *(undefined (*) [16])(local_228 + (ulonglong)(uint)(iVar8 + (int)uVar36) * 4) =
                                            CONCAT412(*(float *)puVar16 * pfVar13[3] + fVar40 * pfVar13[7] +
                                                      pfVar13[0xb] * 0.0 + pfVar13[0xf],
                                                      CONCAT48(*(float *)puVar16 * pfVar13[2] + fVar40 * pfVar13[6] +
                                                               pfVar13[10] * 0.0 + pfVar13[0xe],
                                                               CONCAT44((float)*puVar16 * pfVar13[1] +
                                                                        fVar40 * pfVar13[5] + pfVar13[9] * 0.0 +
                                                                        pfVar13[0xd],
                                                                        (float)*puVar16 * *pfVar13 + fVar40 * pfVar13[4]
                                                                        + pfVar13[8] * 0.0 + pfVar13[0xc])));
                                    puVar20 = local_260;
                                } while (uVar26 < *(uint *)(lVar15 + 0x510));
                            }
                            uVar28 = 0;
                            if (*(int *)(lVar15 + 0x520) != 0) {
                                do {
                                    lVar10 = uVar28 * 4;
                                    iVar8 = (int)uVar28;
                                    uVar26 = iVar8 + 1;
                                    uVar28 = (ulonglong)uVar26;
                                    puVar19[(uint)(iVar8 + (int)uVar29)] =
                                            *(short *)(*(longlong *)(lVar15 + 0x528) + lVar10) + (short)uVar36;
                                } while (uVar26 < *(uint *)(lVar15 + 0x520));
                            }
                            uVar28 = 0;
                            if (*(int *)(lVar15 + 0x530) != 0) {
                                do {
                                    lVar10 = uVar28 * 4;
                                    iVar8 = (int)uVar28;
                                    uVar26 = iVar8 + 1;
                                    uVar28 = (ulonglong)uVar26;
                                    puVar20[(uint)(iVar8 + (int)uVar14)] =
                                            *(short *)(*(longlong *)(lVar15 + 0x538) + lVar10) + (short)uVar36;
                                } while (uVar26 < *(uint *)(lVar15 + 0x530));
                            }
                        }
                        uVar36 = (ulonglong)(uint)((int)uVar36 + *(int *)(lVar15 + 0x510));
                        uVar29 = (ulonglong)(uint)((int)uVar29 + *(int *)(lVar15 + 0x520));
                        uVar14 = (ulonglong)(uint)((int)uVar14 + *(int *)(lVar15 + 0x530));
                    }
                    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x158))();
                    if (plVar9 != (longlong *)0x0) {
                        local_26c = 0;
                        lVar15 = (**(code **)(*plVar9 + 0x118))();
                        if (lVar15 != 0) {
                            uVar28 = 0;
                            do {
                                plVar11 = (longlong *)(**(code **)(*plVar9 + 0x120))(plVar9,uVar28);
                                lVar15 = (**(code **)(*plVar11 + 0x18))();
                                if ((uint)local_280 != 0) {
                                    uVar28 = 0;
                                    if (*(int *)(lVar15 + 0x150) != 0) {
                                        do {
                                            iVar8 = (int)uVar28;
                                            lVar10 = uVar28 * 0x10;
                                            uVar26 = iVar8 + 1;
                                            uVar28 = (ulonglong)uVar26;
                                            puVar16 = (undefined8 *)(lVar10 + *(longlong *)(lVar15 + 0x158));
                                            fVar40 = *(float *)((longlong)puVar16 + 4);
                                            *(undefined (*) [16])(local_228 + (ulonglong)(uint)(iVar8 + (int)uVar36) * 4)
                                                    = CONCAT412(*(float *)puVar16 * pfVar13[3] + fVar40 * pfVar13[7] +
                                                                pfVar13[0xb] * 0.0 + pfVar13[0xf],
                                                                CONCAT48(*(float *)puVar16 * pfVar13[2] + fVar40 * pfVar13[6]
                                                                         + pfVar13[10] * 0.0 + pfVar13[0xe],
                                                                         CONCAT44((float)*puVar16 * pfVar13[1] +
                                                                                  fVar40 * pfVar13[5] + pfVar13[9] * 0.0 +
                                                                                  pfVar13[0xd],
                                                                                  (float)*puVar16 * *pfVar13 +
                                                                                  fVar40 * pfVar13[4] + pfVar13[8] * 0.0 +
                                                                                  pfVar13[0xc])));
                                            puVar20 = local_260;
                                        } while (uVar26 < *(uint *)(lVar15 + 0x150));
                                    }
                                    uVar28 = 0;
                                    if (*(int *)(lVar15 + 0x160) != 0) {
                                        do {
                                            lVar10 = uVar28 * 2;
                                            iVar8 = (int)uVar28;
                                            uVar26 = iVar8 + 1;
                                            uVar28 = (ulonglong)uVar26;
                                            local_248[(uint)(iVar8 + (int)uVar29)] =
                                                    *(short *)(*(longlong *)(lVar15 + 0x168) + lVar10) + (short)uVar36;
                                            puVar20 = local_260;
                                        } while (uVar26 < *(uint *)(lVar15 + 0x160));
                                    }
                                    uVar28 = 0;
                                    if (*(int *)(lVar15 + 0x170) != 0) {
                                        do {
                                            lVar10 = uVar28 * 2;
                                            iVar8 = (int)uVar28;
                                            uVar26 = iVar8 + 1;
                                            uVar28 = (ulonglong)uVar26;
                                            puVar20[(uint)(iVar8 + (int)uVar14)] =
                                                    *(short *)(*(longlong *)(lVar15 + 0x178) + lVar10) + (short)uVar36;
                                        } while (uVar26 < *(uint *)(lVar15 + 0x170));
                                    }
                                }
                                uVar36 = (ulonglong)(uint)((int)uVar36 + *(int *)(lVar15 + 0x150));
                                uVar29 = (ulonglong)(uint)((int)uVar29 + *(int *)(lVar15 + 0x160));
                                uVar14 = (ulonglong)(uint)((int)uVar14 + *(int *)(lVar15 + 0x170));
                                local_26c = local_26c + 1;
                                uVar28 = (ulonglong)local_26c;
                                uVar17 = (**(code **)(*plVar9 + 0x118))();
                                puVar19 = local_248;
                            } while (uVar28 < uVar17);
                        }
                    }
                    local_268 = *(longlong *)(local_268 + 0x18);
                } while (local_268 != 0);
                local_250 = (uint)uVar14;
            }
            pfVar13 = local_228;
            puVar19 = local_248;
            if ((uint)local_280 == 0) {
                if ((int)uVar36 == 0) goto LAB_140380be5;
                uVar18 = SUB168(ZEXT816(0x10) * ZEXT816(uVar36),0);
                if (SUB168(ZEXT816(0x10) * ZEXT816(uVar36) >> 0x40,0) != 0) {
                    uVar18 = 0xffffffffffffffff;
                }
                pfVar13 = (float *)FUN_14018b280(uVar18,8);
                uVar18 = SUB168(ZEXT816(2) * ZEXT816(uVar29),0);
                if (SUB168(ZEXT816(2) * ZEXT816(uVar29) >> 0x40,0) != 0) {
                    uVar18 = 0xffffffffffffffff;
                }
                local_228 = pfVar13;
                puVar19 = (undefined2 *)FUN_14018b280(uVar18,8);
                uVar18 = SUB168(ZEXT816(2) * ZEXT816(uVar14),0);
                if (SUB168(ZEXT816(2) * ZEXT816(uVar14) >> 0x40,0) != 0) {
                    uVar18 = 0xffffffffffffffff;
                }
                local_248 = puVar19;
                puVar20 = (ushort *)FUN_14018b280(uVar18,8);
                local_260 = puVar20;
            }
            local_280._0_4_ = (uint)local_280 + 1;
            uVar28 = (ulonglong)(uint)local_280;
            local_280 = local_280 & 0xffffffff00000000 | (ulonglong)(uint)local_280;
            param_1 = local_238;
        } while ((uint)local_280 < 2);
        lVar15 = (**(code **)(*(longlong *)local_238[2] + 0x28))();
        local_208 = CONCAT88(local_208._8_8_,lVar15 + 0x20);
        local_26c = 0;
        _local_f8 = CONCAT412(*(undefined4 *)(lVar15 + 0x20),ZEXT812(CONCAT44(fVar42,0xbf800000)));
        local_e8 = (CONCAT412(*(undefined4 *)(lVar15 + 0x30),ZEXT812(CONCAT44(fVar42,0x3f800000))) ^
                    (undefined  [16])0x8000000000000000) & (undefined  [16])0xffffffffffffffff;
        local_d8 = CONCAT412(*(undefined4 *)(lVar15 + 0x28),
                             CONCAT48(0xbf800000,(ulonglong)(uint)fVar42 << 0x20));
        local_c8 = (CONCAT412(*(undefined4 *)(lVar15 + 0x38),
                              CONCAT48(0x3f800000,(ulonglong)(uint)fVar42 << 0x20)) ^
        (undefined  [16])0x8000000000000000) & (undefined  [16])0xffffffffffffffff;
        do {
            uVar26 = (uint)uVar14;
            uVar27 = (uint)uVar36;
            local_258 = uVar36;
            pfVar21 = (float *)FUN_14018b280();
            uVar28 = local_280;
            if (uVar27 != 0) {
                lVar15 = (ulonglong)local_26c * 0x10;
                fVar40 = *(float *)(local_f8 + lVar15);
                fVar41 = *(float *)(local_f8 + lVar15 + 4);
                fVar37 = *(float *)(local_f8 + lVar15 + 0xc);
                pfVar22 = pfVar21;
                uVar14 = local_258;
                do {
                    fVar43 = *pfVar13;
                    pfVar6 = pfVar13 + 1;
                    pfVar13 = pfVar13 + 4;
                    *pfVar22 = fVar43 * fVar40 + *pfVar6 * fVar41 + 0.0 + fVar37;
                    uVar14 = uVar14 - 1;
                    pfVar22 = pfVar22 + 1;
                } while (uVar14 != 0);
            }
            uVar34 = 0;
            local_280 = local_280 & 0xffffffff00000000;
            iVar8 = (int)uVar29;
            uVar29 = uVar36;
            if (iVar8 != 0) {
                puVar25 = puVar19 + 2;
                uVar14 = (ulonglong)((iVar8 - 1U) / 3 + 1);
                do {
                    cVar31 = (fVar42 < pfVar21[*puVar25]) + (fVar42 < pfVar21[puVar25[-1]]) +
                             (fVar42 < pfVar21[puVar25[-2]]);
                    if (cVar31 == '\0') {
                        uVar34 = uVar34 + 3;
                    }
                    else if (cVar31 == '\x01') {
                        uVar34 = uVar34 + 6;
                        uVar29 = (ulonglong)((int)uVar29 + 2);
                    }
                    else if (cVar31 == '\x02') {
                        uVar34 = uVar34 + 3;
                        uVar29 = (ulonglong)((int)uVar29 + 2);
                    }
                    puVar25 = puVar25 + 3;
                    uVar14 = uVar14 - 1;
                    puVar20 = local_260;
                } while (uVar14 != 0);
            }
            uVar33 = 0;
            if (uVar26 != 0) {
                uVar14 = (ulonglong)((uVar26 - 1 >> 1) + 1);
                do {
                    cVar31 = (fVar42 < pfVar21[puVar20[1]]) + (fVar42 < pfVar21[*puVar20]);
                    if (cVar31 == '\0') {
                        uVar33 = uVar33 + 2;
                    }
                    else if (cVar31 == '\x01') {
                        uVar33 = uVar33 + 2;
                        uVar29 = (ulonglong)((int)uVar29 + 1);
                    }
                    puVar20 = puVar20 + 2;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
                local_280 = uVar28 & 0xffffffff00000000 | (ulonglong)uVar33;
                puVar20 = local_260;
            }
            uVar18 = SUB168(ZEXT816(0x10) * ZEXT816(uVar29),0);
            if (SUB168(ZEXT816(0x10) * ZEXT816(uVar29) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            local_230 = FUN_14018b280(uVar18,8);
            uVar18 = SUB168(ZEXT816(2) * ZEXT416(uVar34),0);
            if (SUB168(ZEXT816(2) * ZEXT416(uVar34) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            local_220 = FUN_14018b280(uVar18,8);
            uVar18 = SUB168(ZEXT816(2) * ZEXT416((uint)local_280),0);
            if (SUB168(ZEXT816(2) * ZEXT416((uint)local_280) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            local_268 = FUN_14018b280(uVar18,8);
            pfVar13 = local_228;
            local_284 = 0;
            local_288 = 0;
            local_278 = uVar27;
            FUN_1407db590();
            if (iVar8 != 0) {
                local_280 = local_280 & 0xffffffff00000000 | (ulonglong)(uVar27 + 1);
                uVar14 = 1;
                puVar20 = puVar19 + 2;
                uVar26 = 5;
                local_258 = CONCAT44(local_258._4_4_,1);
                local_274 = 4;
                local_270 = 3;
                uVar29 = (ulonglong)((iVar8 - 1U) / 3 + 1);
                uVar28 = 2;
                do {
                    uVar3 = puVar20[-2];
                    fVar40 = pfVar21[uVar3];
                    _local_118 = ZEXT1012(CONCAT28(*puVar20,local_118));
                    local_118 = (ulonglong)CONCAT24(puVar20[-1],(uint)uVar3);
                    cVar31 = (fVar42 < pfVar21[*puVar20]) + (fVar42 < pfVar21[puVar20[-1]]) +
                             (fVar42 < fVar40);
                    iVar8 = (int)uVar28;
                    if (cVar31 == '\0') {
                        local_270 = local_270 + 3;
                        local_274 = local_274 + 3;
                        uVar26 = uVar26 + 3;
                        *(ushort *)(local_220 + (ulonglong)local_284 * 2) = uVar3;
                        *(undefined2 *)(local_220 + uVar14 * 2) = local_118._4_2_;
                        local_284 = local_284 + 3;
                        uVar14 = (ulonglong)((int)uVar14 + 3);
                        *(undefined2 *)(local_220 + uVar28 * 2) = (undefined2)uStack272;
                        uVar17 = (ulonglong)(iVar8 + 3);
                        LAB_1403804d4:
                        local_258 = local_258 & 0xffffffff00000000 | uVar14;
                    }
                    else {
                        sVar35 = (short)uVar36;
                        if (cVar31 == '\x01') {
                            uVar14 = 0;
                            if (fVar42 < fVar40) {
                                lVar15 = 0;
                                do {
                                    uVar14 = (ulonglong)*(uint *)((longlong)&DAT_140b65cd8 + lVar15);
                                    lVar15 = uVar14 * 4;
                                } while (fVar42 < pfVar21[*(uint *)(local_118 + lVar15)]);
                            }
                            lVar15 = uVar14 * 4;
                            fVar40 = pfVar21[*(uint *)(local_118 + lVar15)];
                            while (fVar40 <= fVar42) {
                                uVar14 = (ulonglong)*(uint *)((longlong)&DAT_140b65cd8 + lVar15);
                                lVar15 = uVar14 * 4;
                                fVar40 = pfVar21[*(uint *)(local_118 + lVar15)];
                            }
                            uVar30 = (ulonglong)*(uint *)(local_118 + uVar14 * 4);
                            fVar40 = pfVar21[uVar30] /
                                     (pfVar21[uVar30] -
                                      pfVar21[*(uint *)(local_118 + (ulonglong)(uint)(&DAT_140b65cd8)[uVar14] * 4)]
                                     );
                            pfVar22 = pfVar13 + (ulonglong)
                                                *(uint *)(local_118 +
                                                          (ulonglong)(uint)(&DAT_140b65cd8)[uVar14] * 4) * 4;
                            pfVar6 = pfVar13 + uVar30 * 4;
                            pfVar2 = pfVar13 + uVar30 * 4;
                            *(undefined (*) [16])(local_230 + uVar36 * 0x10) =
                                    CONCAT412(fVar40 * (pfVar22[3] - pfVar6[3]) + pfVar2[3],
                                              CONCAT48(fVar40 * (pfVar22[2] - pfVar6[2]) + pfVar2[2],
                                                       CONCAT44(fVar40 * (pfVar22[1] - pfVar6[1]) + pfVar2[1],
                                                                fVar40 * (*pfVar22 - *pfVar6) + *pfVar2)));
                            uVar17 = (ulonglong)local_284;
                            local_284 = local_284 + 6;
                            pfVar22 = pfVar13 + (ulonglong)
                                                *(uint *)(local_118 +
                                                          (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4) * 4;
                            fVar40 = pfVar21[uVar30] /
                                     (pfVar21[uVar30] -
                                      pfVar21[*(uint *)(local_118 + (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4)]
                                     );
                            pfVar6 = pfVar13 + uVar30 * 4;
                            pfVar2 = pfVar13 + uVar30 * 4;
                            *(undefined (*) [16])(local_230 + (local_280 & 0xffffffff) * 0x10) =
                                    CONCAT412(fVar40 * (pfVar22[3] - pfVar6[3]) + pfVar2[3],
                                              CONCAT48(fVar40 * (pfVar22[2] - pfVar6[2]) + pfVar2[2],
                                                       CONCAT44(fVar40 * (pfVar22[1] - pfVar6[1]) + pfVar2[1],
                                                                fVar40 * (*pfVar22 - *pfVar6) + *pfVar2)));
                            *(undefined2 *)(local_220 + uVar17 * 2) =
                                    *(undefined2 *)(local_118 + (ulonglong)(uint)(&DAT_140b65cd8)[uVar14] * 4);
                            uVar4 = *(undefined2 *)(local_118 + (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4);
                            *(short *)(local_220 + (ulonglong)local_270 * 2) = sVar35;
                            local_270 = local_270 + 6;
                            *(undefined2 *)(local_220 + (local_258 & 0xffffffff) * 2) = uVar4;
                            *(short *)(local_220 + uVar28 * 2) = sVar35;
                            uVar17 = (ulonglong)(iVar8 + 6);
                            *(undefined2 *)(local_220 + (ulonglong)local_274 * 2) =
                                    *(undefined2 *)(local_118 + (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4);
                            uVar28 = (ulonglong)uVar26;
                            local_274 = local_274 + 6;
                            uVar14 = (ulonglong)((int)local_258 + 6);
                            uVar36 = (ulonglong)((int)uVar36 + 2);
                            uVar26 = uVar26 + 6;
                            local_280 = local_280 & 0xffffffff00000000 | (ulonglong)((uint)local_280 + 2);
                            *(short *)(local_220 + uVar28 * 2) = sVar35 + 1;
                            goto LAB_1403804d4;
                        }
                        uVar17 = uVar28;
                        if (cVar31 == '\x02') {
                            uVar14 = 0;
                            if (fVar42 < fVar40) {
                                lVar15 = 0;
                                do {
                                    uVar14 = (ulonglong)*(uint *)((longlong)&DAT_140b65cd8 + lVar15);
                                    lVar15 = uVar14 * 4;
                                } while (fVar42 < pfVar21[*(uint *)(local_118 + lVar15)]);
                            }
                            uVar30 = (ulonglong)*(uint *)(local_118 + uVar14 * 4);
                            local_270 = local_270 + 3;
                            local_274 = local_274 + 3;
                            uVar26 = uVar26 + 3;
                            pfVar22 = pfVar13 + (ulonglong)
                                                *(uint *)(local_118 +
                                                          (ulonglong)(uint)(&DAT_140b65cd8)[uVar14] * 4) * 4;
                            fVar40 = pfVar21[uVar30] /
                                     (pfVar21[uVar30] -
                                      pfVar21[*(uint *)(local_118 + (ulonglong)(uint)(&DAT_140b65cd8)[uVar14] * 4)]
                                     );
                            pfVar6 = pfVar13 + uVar30 * 4;
                            pfVar2 = pfVar13 + uVar30 * 4;
                            *(undefined (*) [16])(local_230 + uVar36 * 0x10) =
                                    CONCAT412(fVar40 * (pfVar22[3] - pfVar6[3]) + pfVar2[3],
                                              CONCAT48(fVar40 * (pfVar22[2] - pfVar6[2]) + pfVar2[2],
                                                       CONCAT44(fVar40 * (pfVar22[1] - pfVar6[1]) + pfVar2[1],
                                                                fVar40 * (*pfVar22 - *pfVar6) + *pfVar2)));
                            uVar17 = (ulonglong)local_284;
                            local_284 = local_284 + 3;
                            pfVar22 = pfVar13 + (ulonglong)
                                                *(uint *)(local_118 +
                                                          (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4) * 4;
                            fVar40 = pfVar21[uVar30] /
                                     (pfVar21[uVar30] -
                                      pfVar21[*(uint *)(local_118 + (ulonglong)(uint)(&DAT_140b65ce8)[uVar14] * 4)]
                                     );
                            pfVar6 = pfVar13 + uVar30 * 4;
                            pfVar2 = pfVar13 + uVar30 * 4;
                            *(undefined (*) [16])(local_230 + (local_280 & 0xffffffff) * 0x10) =
                                    CONCAT412(fVar40 * (pfVar22[3] - pfVar6[3]) + pfVar2[3],
                                              CONCAT48(fVar40 * (pfVar22[2] - pfVar6[2]) + pfVar2[2],
                                                       CONCAT44(fVar40 * (pfVar22[1] - pfVar6[1]) + pfVar2[1],
                                                                fVar40 * (*pfVar22 - *pfVar6) + *pfVar2)));
                            *(undefined2 *)(local_220 + uVar17 * 2) = *(undefined2 *)(local_118 + uVar14 * 4);
                            *(short *)(local_220 + (local_258 & 0xffffffff) * 2) = sVar35;
                            uVar14 = (ulonglong)((int)local_258 + 3);
                            uVar36 = (ulonglong)((int)uVar36 + 2);
                            uVar17 = (ulonglong)(iVar8 + 3);
                            *(short *)(local_220 + uVar28 * 2) = sVar35 + 1;
                            local_280 = local_280 & 0xffffffff00000000 | (ulonglong)((uint)local_280 + 2);
                            goto LAB_1403804d4;
                        }
                    }
                    puVar20 = puVar20 + 3;
                    uVar29 = uVar29 - 1;
                    uVar28 = uVar17;
                } while (uVar29 != 0);
                local_278 = (uint)uVar36;
                puVar20 = local_260;
                puVar19 = local_248;
                uVar26 = local_250;
            }
            puVar25 = puVar20;
            if (uVar26 != 0) {
                uVar29 = 1;
                uVar28 = (ulonglong)((uVar26 - 1 >> 1) + 1);
                uVar26 = local_288;
                do {
                    uVar3 = *puVar20;
                    uVar5 = puVar20[1];
                    local_240[0] = (uint)uVar3;
                    local_240[1] = (uint)uVar5;
                    cVar31 = (fVar42 < pfVar21[(uint)uVar5]) + (fVar42 < pfVar21[uVar3]);
                    if (cVar31 == '\0') {
                        *(ushort *)(local_268 + (ulonglong)uVar26 * 2) = uVar3;
                        *(ushort *)(local_268 + uVar29 * 2) = uVar5;
                        LAB_140380643:
                        uVar26 = uVar26 + 2;
                        uVar29 = (ulonglong)((int)uVar29 + 2);
                        local_288 = uVar26;
                    }
                    else if (cVar31 == '\x01') {
                        uVar14 = 0;
                        if (fVar42 < pfVar21[uVar3]) {
                            lVar15 = 0;
                            do {
                                uVar14 = (ulonglong)*(uint *)((longlong)&DAT_140b65cd8 + lVar15);
                                lVar15 = uVar14 * 4;
                                uVar26 = local_288;
                            } while (fVar42 < pfVar21[local_240[uVar14]]);
                        }
                        uVar36 = (ulonglong)local_240[uVar14];
                        pfVar22 = pfVar13 + (ulonglong)local_240[1 - (int)uVar14] * 4;
                        fVar40 = pfVar21[uVar36] / (pfVar21[uVar36] - pfVar21[local_240[1 - (int)uVar14]]);
                        pfVar6 = pfVar13 + uVar36 * 4;
                        pfVar2 = pfVar13 + uVar36 * 4;
                        *(undefined (*) [16])((ulonglong)local_278 * 0x10 + local_230) =
                                CONCAT412(fVar40 * (pfVar22[3] - pfVar6[3]) + pfVar2[3],
                                          CONCAT48(fVar40 * (pfVar22[2] - pfVar6[2]) + pfVar2[2],
                                                   CONCAT44(fVar40 * (pfVar22[1] - pfVar6[1]) + pfVar2[1],
                                                            fVar40 * (*pfVar22 - *pfVar6) + *pfVar2)));
                        *(undefined2 *)(local_268 + (ulonglong)uVar26 * 2) = *(undefined2 *)(local_240 + uVar14)
                                ;
                        *(short *)(local_268 + uVar29 * 2) = (short)local_278;
                        local_278 = local_278 + 1;
                        goto LAB_140380643;
                    }
                    puVar20 = puVar20 + 2;
                    uVar28 = uVar28 - 1;
                    puVar25 = local_260;
                    puVar19 = local_248;
                } while (uVar28 != 0);
            }
            FUN_14018b900(pfVar21,0);
            uVar18 = SUB168(ZEXT816(4) * ZEXT416(local_278),0);
            if (SUB168(ZEXT816(4) * ZEXT416(local_278) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            puVar23 = (uint *)FUN_14018b280(uVar18,8);
            FUN_1407e4830(puVar23,0xff);
            uVar36 = 0;
            FUN_14018b900(puVar19,0);
            uVar29 = (ulonglong)local_284;
            uVar28 = (ulonglong)local_284;
            uVar18 = SUB168(ZEXT816(2) * ZEXT816(uVar28),0);
            if (SUB168(ZEXT816(2) * ZEXT816(uVar28) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            puVar19 = (undefined2 *)FUN_14018b280(uVar18,8);
            if (local_284 != 0) {
                puVar24 = puVar19;
                do {
                    uVar3 = *(ushort *)((local_220 - (longlong)puVar19) + (longlong)puVar24);
                    if (puVar23[uVar3] == 0xffffffff) {
                        puVar23[uVar3] = (uint)uVar36;
                        uVar36 = (ulonglong)((uint)uVar36 + 1);
                    }
                    *puVar24 = *(undefined2 *)(puVar23 + uVar3);
                    uVar28 = uVar28 - 1;
                    puVar24 = puVar24 + 1;
                } while (uVar28 != 0);
            }
            local_248 = puVar19;
            FUN_14018b900(puVar25,0);
            local_280 = (ulonglong)local_288;
            uVar14 = (ulonglong)local_288;
            local_250 = local_288;
            uVar18 = SUB168(ZEXT816(2) * ZEXT416(local_288),0);
            if (SUB168(ZEXT816(2) * ZEXT416(local_288) >> 0x40,0) != 0) {
                uVar18 = 0xffffffffffffffff;
            }
            puVar20 = (ushort *)FUN_14018b280(uVar18,8);
            if (local_288 != 0) {
                puVar25 = puVar20;
                uVar28 = local_280;
                do {
                    uVar3 = *(ushort *)((local_268 - (longlong)puVar20) + (longlong)puVar25);
                    if (puVar23[uVar3] == 0xffffffff) {
                        puVar23[uVar3] = (uint)uVar36;
                        uVar36 = (ulonglong)((uint)uVar36 + 1);
                    }
                    *puVar25 = *(ushort *)(puVar23 + uVar3);
                    uVar28 = uVar28 - 1;
                    puVar25 = puVar25 + 1;
                    pfVar13 = local_228;
                } while (uVar28 != 0);
            }
            local_260 = puVar20;
            FUN_14018b900(pfVar13,0);
            iVar8 = (int)uVar36;
            pfVar13 = (float *)FUN_14018b280();
            uVar28 = 0;
            puVar32 = puVar23;
            if (local_278 != 0) {
                do {
                    if (*puVar32 != 0xffffffff) {
                        *(undefined (*) [16])(pfVar13 + (ulonglong)*puVar32 * 4) =
                                *(undefined (*) [16])(local_230 + uVar28 * 0x10);
                    }
                    uVar26 = (int)uVar28 + 1;
                    uVar28 = (ulonglong)uVar26;
                    puVar32 = puVar32 + 1;
                } while (uVar26 < local_278);
            }
            local_228 = pfVar13;
            FUN_14018b900(local_230,0);
            FUN_14018b900(local_220,0);
            FUN_14018b900(local_268,0);
            FUN_14018b900(puVar23,0);
            pplVar1 = local_218;
            uVar27 = local_284;
            uVar26 = local_288;
            local_26c = local_26c + 1;
        } while (local_26c < 4);
        if (((local_284 != 0) || (local_288 != 0)) &&
            ((iVar7 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,iVar8 * 0x18,1,local_218),
                    -1 < iVar7 &&
                    (puVar16 = (undefined8 *)(**(code **)(**pplVar1 + 0x38))(*pplVar1,0,0,2), plVar9 = local_238
                            , puVar16 != (undefined8 *)0x0)))) {
            if (iVar8 != 0) {
                uVar45 = 0x3f800000;
                uVar46 = 0x3f800000;
                uVar47 = 0x3f800000;
                uVar48 = 0x3f800000;
                uVar49 = 0;
                uVar50 = 0;
                uVar51 = 0;
                uVar52 = 0;
                fVar37 = 1.0 / DAT_140c44578;
                pfVar21 = pfVar13;
                fVar40 = fVar37;
                fVar41 = fVar37;
                fVar42 = fVar37;
                do {
                    auVar38 = minps(CONCAT412((pfVar21[2] - local_208._0_8_[2]) * fVar42,
                                              CONCAT48((*pfVar21 - *local_208._0_8_) * fVar41,
                                                       CONCAT44((pfVar21[2] - local_208._0_8_[2]) * fVar40,
                                                                (*pfVar21 - *local_208._0_8_) * fVar37))),
                                    CONCAT412(uVar48,CONCAT48(uVar47,CONCAT44(uVar46,uVar45))));
                    _local_118 = maxps(CONCAT412(uVar52,CONCAT48(uVar51,CONCAT44(uVar50,uVar49))),auVar38);
                    FUN_140387000(SUB168(_local_118,0),SUB168(auVar38,0),plVar9,local_118,&local_1f8,2);
                    uVar18 = CONCAT44(pfVar21[2] - *(float *)(plVar9 + 0x19),
                                      *pfVar21 - *(float *)(plVar9 + 0x18));
                    local_208 = CONCAT412(pfVar21[2] - *(float *)(plVar9 + 0x19),
                                          CONCAT48(*pfVar21 - *(float *)(plVar9 + 0x18),uVar18));
                    *puVar16 = uVar18;
                    fVar43 = pfVar21[1];
                    *(undefined4 *)(puVar16 + 1) = local_1f8;
                    *(undefined4 *)((longlong)puVar16 + 0xc) = local_1f4;
                    *(undefined4 *)(puVar16 + 2) = local_1f0;
                    *(float *)((longlong)puVar16 + 0x14) = fVar43;
                    fVar43 = *(float *)((longlong)plVar9 + 0x3fc);
                    if (pfVar21[1] <= *(float *)((longlong)plVar9 + 0x3fc)) {
                        fVar43 = pfVar21[1];
                    }
                    fVar44 = *(float *)(plVar9 + 0x80);
                    if (*(float *)(plVar9 + 0x80) <= pfVar21[1]) {
                        fVar44 = pfVar21[1];
                    }
                    local_268 = CONCAT44(fVar44,fVar43);
                    *(longlong *)((longlong)plVar9 + 0x3fc) = local_268;
                    uVar36 = uVar36 - 1;
                    puVar16 = puVar16 + 3;
                    puVar20 = local_260;
                    pfVar21 = pfVar21 + 4;
                    puVar19 = local_248;
                    uVar27 = local_284;
                    uVar26 = local_288;
                } while (uVar36 != 0);
            }
            (**(code **)(**local_218 + 0x40))();
            *(int *)(local_238 + 0x7b) = iVar8;
        }
        plVar9 = local_238;
        FUN_14018b900(pfVar13,0);
        if (uVar27 != 0) {
            pplVar1 = (longlong **)(plVar9 + 0x7c);
            local_298 = pplVar1;
            iVar8 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,uVar27 * 2,0,1);
            if ((-1 < iVar8) && (lVar15 = (**(code **)(**pplVar1 + 0x38))(*pplVar1,0,0,2), lVar15 != 0)) {
                FUN_1407db590(lVar15,puVar19,uVar27 * 2);
                (**(code **)(**pplVar1 + 0x40))();
                *(uint *)(plVar9 + 0x7d) = uVar27;
            }
        }
        FUN_14018b900(puVar19,0);
        if (uVar26 != 0) {
            pplVar1 = (longlong **)(plVar9 + 0x7e);
            local_298 = pplVar1;
            iVar8 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,uVar26 * 2,0,1);
            if ((-1 < iVar8) && (lVar15 = (**(code **)(**pplVar1 + 0x38))(*pplVar1,0,0,2), lVar15 != 0)) {
                FUN_1407db590(lVar15,puVar20,uVar26 * 2);
                (**(code **)(**pplVar1 + 0x40))();
                *(uint *)(plVar9 + 0x7f) = uVar26;
            }
        }
        FUN_14018b900(puVar20,0);
        *(undefined4 *)(plVar9 + 0x20) = *(undefined4 *)(plVar9 + 0x18);
        *(undefined4 *)((longlong)plVar9 + 0x104) = *(undefined4 *)((longlong)plVar9 + 0xc4);
        *(undefined4 *)(plVar9 + 0x21) = *(undefined4 *)(plVar9 + 0x19);
        *(undefined4 *)((longlong)plVar9 + 0x10c) = *(undefined4 *)((longlong)plVar9 + 0xcc);
        *(undefined4 *)(plVar9 + 0x22) = *(undefined4 *)(plVar9 + 0x1a);
        *(undefined4 *)((longlong)plVar9 + 0x114) = *(undefined4 *)((longlong)plVar9 + 0xd4);
        *(undefined4 *)(plVar9 + 0x23) = *(undefined4 *)(plVar9 + 0x1b);
        *(undefined4 *)((longlong)plVar9 + 0x11c) = *(undefined4 *)((longlong)plVar9 + 0xdc);
        fVar40 = *(float *)((longlong)plVar9 + 0xc4);
        if (*(float *)((longlong)plVar9 + 0x3fc) <= *(float *)((longlong)plVar9 + 0xc4)) {
            fVar40 = *(float *)((longlong)plVar9 + 0x3fc);
        }
        fVar41 = *(float *)((longlong)plVar9 + 0xd4);
        if (*(float *)((longlong)plVar9 + 0xd4) <= *(float *)(plVar9 + 0x80)) {
            fVar41 = *(float *)(plVar9 + 0x80);
        }
        *(float *)((longlong)plVar9 + 0x104) = fVar40;
        *(float *)((longlong)plVar9 + 0x114) = fVar41;
        fVar40 = *(float *)(plVar9 + 0x22) - *(float *)(plVar9 + 0x20);
        fVar41 = *(float *)((longlong)plVar9 + 0x114) - *(float *)((longlong)plVar9 + 0x104);
        *(undefined (*) [16])(plVar9 + 0x24) =
                CONCAT412((*(float *)((longlong)plVar9 + 0x10c) + *(float *)((longlong)plVar9 + 0x11c)) *
                          fVar55,CONCAT48((*(float *)(plVar9 + 0x21) + *(float *)(plVar9 + 0x23)) * fVar54,
                                          CONCAT44((*(float *)((longlong)plVar9 + 0x104) +
                                                    *(float *)((longlong)plVar9 + 0x114)) * fVar53,
                                                   (*(float *)(plVar9 + 0x20) + *(float *)(plVar9 + 0x22))
                                                   * fVar39)));
        local_108 = SQRT(fVar40 * fVar40 + fVar41 * fVar41 + 0.0) * fVar56;
        *(float *)(plVar9 + 0x26) = local_108;
    }
    LAB_140380be5:
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack696);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140380c10(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    longlong *plVar8;
    longlong *plVar9;
    undefined (*pauVar10) [16];
    longlong *plVar11;
    longlong *plVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    longlong *local_res8;

    plVar12 = (longlong *)0x0;
    plVar8 = plVar12;
    if (param_1[0x81] != 0) {
        do {
            lVar1 = param_1[0x82];
            plVar11 = *(longlong **)(lVar1 + (longlong)plVar8 * 8);
            if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 8))();
                *(undefined8 *)(lVar1 + (longlong)plVar8 * 8) = 0;
            }
            plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
        } while (plVar8 < (longlong *)param_1[0x81]);
    }
    FUN_14018b900(param_1[0x82],0);
    param_1[0x82] = 0;
    param_1[0x81] = 0;
    uVar4 = uRam0000000140c798cc;
    uVar3 = uRam0000000140c798c8;
    uVar2 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x84) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0x424) = uVar2;
    *(undefined4 *)(param_1 + 0x85) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x42c) = uVar4;
    *(undefined (*) [16])(param_1 + 0x86) = _DAT_140c798d0;
    uVar4 = uRam0000000140c783dc;
    uVar3 = uRam0000000140c783d8;
    uVar2 = uRam0000000140c783d4;
    *(undefined4 *)(param_1 + 0x88) = _DAT_140c783d0;
    *(undefined4 *)((longlong)param_1 + 0x444) = uVar2;
    *(undefined4 *)(param_1 + 0x89) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x44c) = uVar4;
    *(undefined4 *)(param_1 + 0x8a) = DAT_140c783e0;
    if (((*(byte *)(*param_1 + 0xe8) & 0x10) != 0) &&
        (iVar5 = (**(code **)(*(longlong *)param_1[2] + 0xa8))((longlong *)param_1[2],&local_res8),
                -1 < iVar5)) {
        uVar6 = (**(code **)(*local_res8 + 0x10))();
        param_1[0x81] = uVar6;
        plVar8 = plVar12;
        if (uVar6 != 0) {
            uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
            if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
                uVar7 = 0xffffffffffffffff;
            }
            plVar8 = (longlong *)FUN_14018b280(uVar7,0);
        }
        param_1[0x82] = (longlong)plVar8;
        FUN_1407e4830(plVar8,0,param_1[0x81] << 3);
        plVar8 = plVar12;
        if (param_1[0x81] != 0) {
            do {
                uVar7 = (**(code **)(*local_res8 + 0x18))(local_res8,plVar8);
                plVar9 = (longlong *)FUN_14018b280(0xf0,0);
                plVar11 = plVar12;
                if (plVar9 != (longlong *)0x0) {
                    *plVar9 = (longlong)&PTR_LAB_140b66020;
                    plVar9[0x1a] = 0;
                    plVar9[0x1b] = 0;
                    plVar9[0x1c] = 0;
                    plVar9[0x1d] = 0;
                    *(undefined4 *)(plVar9 + 1) = 1;
                    plVar9[2] = (longlong)param_1;
                    plVar9[3] = 0;
                    plVar9[5] = 0;
                    plVar9[6] = 0;
                    plVar9[7] = 0;
                    plVar9[8] = 0;
                    plVar9[9] = 0;
                    plVar9[10] = 0;
                    plVar9[0xb] = 0;
                    plVar9[0xc] = 0;
                    plVar11 = plVar9;
                }
                iVar5 = FUN_140392d60(plVar11,uVar7);
                if (iVar5 < 0) {
                    (**(code **)(*plVar11 + 8))();
                }
                else {
                    *(longlong **)(param_1[0x82] + (longlong)plVar8 * 8) = plVar11;
                    pauVar10 = (undefined (*) [16])(**(code **)(*plVar11 + 0x50))(plVar11,0);
                    auVar13 = minps(*(undefined (*) [16])(param_1 + 0x84),*pauVar10);
                    auVar14 = maxps(*(undefined (*) [16])(param_1 + 0x86),pauVar10[1]);
                    *(undefined (*) [16])(param_1 + 0x84) = auVar13;
                    *(undefined (*) [16])(param_1 + 0x86) = auVar14;
                }
                plVar8 = (longlong *)(ulonglong)((int)plVar8 + 1);
            } while (plVar8 < (longlong *)param_1[0x81]);
        }
        fVar15 = *(float *)(param_1 + 0x86) - *(float *)(param_1 + 0x84);
        fVar16 = *(float *)((longlong)param_1 + 0x434) - *(float *)((longlong)param_1 + 0x424);
        *(undefined (*) [16])(param_1 + 0x88) =
                CONCAT412((*(float *)((longlong)param_1 + 0x42c) + *(float *)((longlong)param_1 + 0x43c)) *
                          0.5,CONCAT48((*(float *)(param_1 + 0x85) + *(float *)(param_1 + 0x87)) * 0.5,
                                       CONCAT44((*(float *)((longlong)param_1 + 0x424) +
                                                 *(float *)((longlong)param_1 + 0x434)) * 0.5,
                                                (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x86)) *
                                                0.5)));
        lVar1 = *local_res8;
        *(float *)(param_1 + 0x8a) = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + 0.0) * 0.5;
        (**(code **)(lVar1 + 8))();
    }
    return;
}



void FUN_140380ed0(longlong param_1)

{
    undefined (*pauVar1) [16];
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    int *piVar6;
    longlong lVar7;
    uint *puVar8;
    uint uVar9;
    ulonglong uVar10;
    undefined (*pauVar11) [16];
    ulonglong uVar12;
    ulonglong uVar13;
    longlong *local_res8;

    uVar13 = 0;
    local_res8 = (longlong *)0x0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
            (*(longlong **)(param_1 + 0x10),&local_res8);
    if (-1 < iVar3) {
        uVar4 = (**(code **)(*local_res8 + 0x10))();
        uVar10 = uVar13;
        uVar12 = uVar13;
        if (uVar4 != 0) {
            do {
                plVar5 = (longlong *)(**(code **)(*local_res8 + 0x18))(local_res8,uVar10);
                piVar6 = (int *)(**(code **)(*plVar5 + 0x10))(plVar5);
                uVar10 = uVar10 + 1;
                uVar12 = uVar12 + (*piVar6 * 2 - 2);
            } while (uVar10 < uVar4);
        }
        FUN_140115d60(param_1 + 0x550,uVar12);
        FUN_1402626b0(param_1 + 0x560,uVar12);
        pauVar11 = *(undefined (**) [16])(param_1 + 0x560);
        if (uVar4 != 0) {
            do {
                plVar5 = (longlong *)(**(code **)(*local_res8 + 0x18))(local_res8,uVar13);
                lVar7 = (**(code **)(*plVar5 + 0x18))(plVar5);
                puVar8 = (uint *)(**(code **)(*plVar5 + 0x10))();
                uVar9 = 1;
                uVar2 = *puVar8;
                if (1 < (ulonglong)uVar2) {
                    uVar10 = 1;
                    do {
                        uVar12 = (ulonglong)(uVar9 - 1);
                        uVar9 = uVar9 + 1;
                        *pauVar11 = ZEXT1216(CONCAT48(*(undefined4 *)(lVar7 + 8 + uVar12 * 0xc),
                                                      CONCAT44(*(undefined4 *)(lVar7 + 4 + uVar12 * 0xc),
                                                               *(undefined4 *)(lVar7 + uVar12 * 0xc))));
                        pauVar1 = pauVar11[1];
                        pauVar11 = pauVar11[2];
                        *pauVar1 = ZEXT1216(CONCAT48(*(undefined4 *)(lVar7 + 8 + uVar10 * 0xc),
                                                     CONCAT44(*(undefined4 *)(lVar7 + 4 + uVar10 * 0xc),
                                                              *(undefined4 *)(lVar7 + uVar10 * 0xc))));
                        uVar10 = (ulonglong)uVar9;
                    } while ((ulonglong)uVar9 < (ulonglong)uVar2);
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < uVar4);
        }
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



void FUN_140381070(longlong *param_1)

{
    ulonglong uVar1;
    longlong **pplVar2;
    ulonglong uVar3;
    int *piVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *aplStack664 [59];
    undefined8 uStack192;
    undefined local_98 [128];

    if ((*(uint *)(*param_1 + 0xe8) & 0x4000) != 0) {
        uStack192 = 0x1403810b8;
        FUN_1407e4830(local_98,0,0x80);
        plVar6 = param_1 + 7;
        uVar3 = 0;
        do {
            if (*plVar6 != 0) {
                piVar4 = (int *)(*plVar6 + 0x78);
                uVar1 = 0;
                do {
                    if (*piVar4 != 0) {
                        uStack192 = 0x1403810eb;
                        FUN_140354790(*param_1,*piVar4,local_98 + (uVar3 + uVar1) * 8);
                    }
                    uVar1 = uVar1 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar1 < 4);
            }
            uVar3 = uVar3 + 4;
            plVar6 = plVar6 + 1;
        } while (uVar3 < 0x10);
        lVar5 = 0x10;
        pplVar2 = (longlong **)(param_1 + 0x40);
        do {
            if (*pplVar2 != (longlong *)0x0) {
                uStack192 = 0x140381130;
                (**(code **)(**pplVar2 + 8))();
                *pplVar2 = (longlong *)0x0;
            }
            *pplVar2 = *(longlong **)(((longlong)aplStack664 - (longlong)param_1) + (longlong)pplVar2);
            lVar5 = lVar5 + -1;
            pplVar2 = pplVar2 + 1;
        } while (lVar5 != 0);
    }
    return;
}



void FUN_140381180(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong **pplVar8;
    longlong *plVar9;
    float fVar10;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar11;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    longlong *local_res8;
    longlong *local_res10;
    undefined auVar12 [16];
    undefined auVar13 [16];

    if ((*(uint *)(*param_1 + 0xe8) & 0x4000) != 0) {
        pplVar8 = (longlong **)(param_1 + 0x54);
        plVar6 = param_1 + 0x5a;
        auVar13 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        auVar12 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        plVar9 = param_1 + 0x40;
        lVar7 = 4;
        do {
            lVar4 = 0;
            *(float *)plVar6 = DAT_140c44570;
            *(float *)(plVar6 + -2) = 0.0;
            if (*(int *)(param_1 + 0x62) != 0) {
                lVar5 = 4;
                plVar3 = plVar9;
                do {
                    lVar1 = *plVar3;
                    if (lVar1 != 0) {
                        *(uint *)(plVar6 + -2) = (uint)*(float *)(plVar6 + -2) | *(uint *)(lVar1 + 0x24);
                        fVar10 = (float)FUN_140374bf0();
                        fVar11 = *(float *)plVar6;
                        if (fVar10 <= *(float *)plVar6) {
                            fVar11 = fVar10;
                        }
                        *(float *)plVar6 = fVar11;
                        lVar4 = lVar1;
                    }
                    plVar3 = plVar3 + 1;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
            }
            local_res8 = (longlong *)0x0;
            local_res10 = (longlong *)0x0;
            if (lVar4 != 0) {
                FUN_1403748e0(lVar4,&local_res8,&local_res10,param_4,auVar12,auVar13);
            }
            plVar2 = local_res10;
            plVar3 = local_res8;
            if (pplVar8[-4] != (longlong *)0x0) {
                (**(code **)(*pplVar8[-4] + 8))();
                pplVar8[-4] = (longlong *)0x0;
            }
            pplVar8[-4] = plVar3;
            if (*pplVar8 != (longlong *)0x0) {
                (**(code **)(**pplVar8 + 8))();
                *pplVar8 = (longlong *)0x0;
            }
            *pplVar8 = plVar2;
            pplVar8 = pplVar8 + 1;
            plVar6 = (longlong *)((longlong)plVar6 + 4);
            plVar9 = plVar9 + 4;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        FUN_14037d540(param_1);
    }
    return;
}



undefined8 FUN_140381300(longlong *param_1)

{
    float *pfVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    undefined4 *puVar6;
    float fVar7;
    longlong lVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    int iVar12;
    DWORD DVar13;
    undefined8 uVar14;
    undefined8 *puVar15;
    HANDLE hObject;
    ulonglong uVar16;
    longlong *plVar17;
    longlong lVar18;
    uint uVar19;
    DWORD *pDVar21;
    uint uVar22;
    longlong lVar23;
    longlong lVar24;
    ulonglong uVar25;
    longlong local_res8;
    undefined local_res10 [8];
    undefined4 local_a8 [4];
    longlong *local_98;
    undefined *local_90;
    undefined4 local_88 [4];
    undefined local_78 [16];
    undefined4 local_68;
    undefined4 local_64;
    longlong *local_60;
    undefined *local_58;
    undefined8 local_50;
    undefined4 local_48;
    ulonglong uVar20;

    if (((*(uint *)(*param_1 + 0xe8) & 0x4000) == 0) || (*(int *)(param_1 + 0x62) == 0)) {
        return 1;
    }
    uVar16 = 0;
    local_a8[0] = 0;
    uVar14 = (**(code **)(*(longlong *)param_1[2] + 0x30))((longlong *)param_1[2],local_a8);
    if ((int)uVar14 == 0) {
        return uVar14;
    }
    plVar17 = (longlong *)param_1[0x6c];
    if (plVar17 == (longlong *)0x0) {
        FUN_14003d8f0(local_res10,*param_1 + 0x9d0);
        lVar18 = *(longlong *)(*param_1 + 0x9f8);
        if (lVar18 == 0) {
            FUN_14003d880(local_res10);
            return 0;
        }
        param_1[0x6e] = lVar18;
        if (*(undefined8 **)(lVar18 + 0x520) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar18 + 0x520) = *(undefined8 *)(lVar18 + 0x528);
        }
        if (*(longlong *)(lVar18 + 0x528) != 0) {
            *(undefined8 *)(*(longlong *)(lVar18 + 0x528) + 0x520) = *(undefined8 *)(lVar18 + 0x520);
        }
        *(undefined8 *)(lVar18 + 0x520) = 0;
        *(undefined8 *)(lVar18 + 0x528) = 0;
        FUN_14003d880(local_res10);
        if ((longlong *)param_1[0x5e] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x5e] + 8))();
            param_1[0x5e] = 0;
        }
        if ((longlong *)param_1[0x61] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x61] + 8))();
            param_1[0x61] = 0;
        }
        lVar18 = 0xc0;
        plVar17 = param_1 + 7;
        param_1[0x5c] = 0;
        param_1[0x5d] = 0;
        param_1[0x5f] = 0;
        param_1[0x60] = 0;
        lVar23 = 0x80;
        lVar24 = 4;
        *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(*param_1 + 0x98);
        do {
            lVar8 = *plVar17;
            if (lVar8 == 0) {
                *(undefined (*) [16])(lVar23 + param_1[0x6e]) = ZEXT816(0);
                local_78 = ZEXT816(0);
                *(undefined4 *)(lVar18 + param_1[0x6e]) = 0x3a83126f;
            }
            else {
                uVar11 = *(undefined4 *)(lVar8 + 0x24);
                uVar9 = *(undefined4 *)(lVar8 + 0x28);
                uVar10 = *(undefined4 *)(lVar8 + 0x2c);
                puVar6 = (undefined4 *)(lVar23 + param_1[0x6e]);
                *puVar6 = *(undefined4 *)(lVar8 + 0x20);
                puVar6[1] = uVar11;
                puVar6[2] = uVar9;
                puVar6[3] = uVar10;
                *(undefined4 *)(lVar18 + param_1[0x6e]) = *(undefined4 *)(lVar8 + 0x6c);
            }
            lVar23 = lVar23 + 0x10;
            plVar17 = plVar17 + 1;
            lVar18 = lVar18 + 4;
            lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        plVar17 = param_1 + 0x40;
        local_res8 = 0x10;
        uVar25 = uVar16;
        do {
            if (*plVar17 == 0) {
                *(undefined *)(param_1[0x6e] + 0x110 + uVar25) = 0;
            }
            else {
                *(undefined *)(param_1[0x6e] + 0x110 + uVar25) = 1;
                *(undefined4 *)(param_1[0x6e] + 0x114 + uVar25) = *(undefined4 *)(*plVar17 + 0x28);
                uVar11 = FUN_140374780(*plVar17);
                *(undefined4 *)(param_1[0x6e] + 0x118 + uVar25) = uVar11;
                lVar18 = uVar25 + 0x120;
                uVar20 = uVar16;
                do {
                    puVar15 = (undefined8 *)FUN_140374820(*plVar17);
                    lVar23 = param_1[0x6e];
                    if (*(undefined8 **)(lVar18 + lVar23) != puVar15) {
                        if (puVar15 != (undefined8 *)0x0) {
                            (**(code **)*puVar15)(puVar15);
                        }
                        if (*(longlong **)(lVar18 + lVar23) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(lVar18 + lVar23) + 8))();
                        }
                        *(undefined8 **)(lVar18 + lVar23) = puVar15;
                    }
                    uVar22 = (int)uVar20 + 1;
                    uVar20 = (ulonglong)uVar22;
                    lVar18 = lVar18 + 8;
                } while (uVar22 < 6);
            }
            plVar17 = plVar17 + 1;
            uVar25 = uVar25 + 0x40;
            local_res8 = local_res8 + -1;
        } while (local_res8 != 0);
        *(undefined4 *)(param_1[0x6e] + 0x20) = 0;
        FUN_1407e4830(param_1[0x6e] + 0x24,0,0x40);
        uVar25 = 0x24;
        plVar17 = param_1 + 0x40;
        do {
            lVar18 = *plVar17;
            if (lVar18 != 0) {
                fVar7 = *(float *)(lVar18 + 0x28);
                pfVar1 = (float *)(param_1[0x6e] + 0x20);
                if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
                    *(float *)(param_1[0x6e] + 0x20) = fVar7;
                }
                uVar22 = FUN_140374780(lVar18);
                uVar20 = uVar16;
                if (uVar22 != 0) {
                    do {
                        lVar23 = FUN_140374820(lVar18);
                        uVar19 = (int)uVar20 + 1;
                        uVar20 = (ulonglong)uVar19;
                        *(float *)(param_1[0x6e] + uVar25) =
                                *(float *)(lVar23 + 0x28) + *(float *)(param_1[0x6e] + uVar25);
                    } while (uVar19 < uVar22);
                }
            }
            uVar25 = uVar25 + 4;
            plVar17 = plVar17 + 1;
        } while (uVar25 < 100);
        local_90 = &DAT_140381970;
        local_58 = &DAT_140381970;
        local_68 = 0xc;
        local_64 = 2;
        local_50 = 0;
        local_48 = 1;
        local_98 = param_1;
        local_60 = param_1;
        iVar12 = FUN_14019dca0(&local_68,0,0,param_1 + 0x6c);
        if (-1 < iVar12) {
            return 0;
        }
        lVar18 = *param_1;
        pDVar21 = (DWORD *)(lVar18 + 0x9d0);
        DVar13 = GetCurrentThreadId();
        if (*pDVar21 == DVar13) {
            *(longlong *)(lVar18 + 0x9d8) = *(longlong *)(lVar18 + 0x9d8) + 1;
        }
        else {
            do {
                LOCK();
                puVar2 = (ulonglong *)(lVar18 + 0x9d8);
                uVar25 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar25 == 0) * (*puVar2 ^ 1);
                if (uVar25 == 0) {
                    *pDVar21 = DVar13;
                    goto LAB_140381704;
                }
                uVar16 = uVar16 + 1;
            } while (uVar16 < 0x400);
            FUN_14019fb60(pDVar21);
        }
        LAB_140381704:
        lVar23 = param_1[0x6e];
        plVar17 = (longlong *)(*param_1 + 0x9f8);
        if (*(longlong *)(lVar23 + 0x520) == 0) {
            *(longlong **)(lVar23 + 0x520) = plVar17;
            plVar3 = (longlong *)(lVar23 + 0x528);
            *plVar3 = *plVar17;
            *plVar17 = lVar23;
            if (*plVar3 != 0) {
                *(longlong **)(*plVar3 + 0x520) = plVar3;
            }
        }
        param_1[0x6e] = 0;
        if (1 < *(ulonglong *)(lVar18 + 0x9d8)) {
            *(longlong *)(lVar18 + 0x9d8) = *(longlong *)(lVar18 + 0x9d8) + -1;
            return 1;
        }
        *pDVar21 = 0;
        *(undefined8 *)(lVar18 + 0x9d8) = 0;
        if (*(longlong *)(lVar18 + 0x9e0) == 0) {
            return 1;
        }
        if (*(longlong *)(lVar18 + 0x9e8) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            puVar2 = (ulonglong *)(lVar18 + 0x9e8);
            uVar16 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar16 == 0) * (*puVar2 ^ (ulonglong)hObject);
            if (uVar16 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE *)(lVar18 + 0x9e8));
        return 1;
    }
    local_88[0] = 0;
    iVar12 = (**(code **)(*plVar17 + 0x20))(plVar17,local_88);
    if (iVar12 == 0) {
        return 0;
    }
    iVar12 = (**(code **)(*(longlong *)param_1[0x6c] + 0x28))((longlong *)param_1[0x6c],0);
    if (-1 < iVar12) {
        lVar18 = *(longlong *)(param_1[0x6e] + 0x18);
        if ((lVar18 != 0) && (*(longlong *)(param_1[0x6e] + 8) != 0)) {
            pplVar4 = (longlong **)(param_1 + 0x5e);
            iVar12 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,(int)lVar18 * 0x38,1,pplVar4);
            if (-1 < iVar12) {
                pplVar5 = (longlong **)(param_1 + 0x61);
                iVar12 = (**(code **)(*DAT_140c65670 + 0x40))
                        (DAT_140c65670,(int)*(undefined8 *)(param_1[0x6e] + 8) * 2,0,1,pplVar5);
                if ((-1 < iVar12) &&
                    (lVar18 = (**(code **)(**pplVar4 + 0x38))
                            (*pplVar4,0,(int)*(undefined8 *)(param_1[0x6e] + 0x18) * 0x38,2),
                            lVar18 != 0)) {
                    lVar23 = (**(code **)(**pplVar5 + 0x38))
                            (*pplVar5,0,(int)*(undefined8 *)(param_1[0x6e] + 8) * 2,2);
                    if (lVar23 != 0) {
                        FUN_1407db590(lVar18,*(undefined8 *)(param_1[0x6e] + 0x10),
                                      *(longlong *)(param_1[0x6e] + 0x18) * 0x38);
                        FUN_1407db590(lVar23,*(undefined8 *)param_1[0x6e],((undefined8 *)param_1[0x6e])[1] * 2);
                        (**(code **)(**pplVar4 + 0x40))();
                        (**(code **)(**pplVar5 + 0x40))();
                        goto LAB_14038192f;
                    }
                    (**(code **)(**pplVar4 + 0x40))();
                }
            }
            if (*pplVar4 != (longlong *)0x0) {
                (**(code **)(**pplVar4 + 8))();
                *pplVar4 = (longlong *)0x0;
            }
            if ((longlong *)param_1[0x61] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[0x61] + 8))();
                param_1[0x61] = 0;
            }
        }
    }
    LAB_14038192f:
    FUN_140383760(param_1);
    return 1;
}



void FUN_1403828a0(longlong *param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong **pplVar4;
    longlong lVar5;
    undefined auStack104 [32];
    longlong *local_48;
    longlong *local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 0x11) == 0x11) {
        (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x16,&local_40);
        puVar3 = (undefined8 *)(**(code **)(*local_40 + 0x18))();
        local_38 = *puVar3;
        local_30 = puVar3[1];
        (**(code **)(*local_40 + 8))();
        puVar3 = &local_38;
        pplVar4 = (longlong **)(param_1 + 0x8d);
        lVar5 = 4;
        do {
            if ((*(int *)puVar3 == 0) ||
                (iVar2 = FUN_140354aa0(*param_1,*(int *)puVar3,&local_48), iVar2 < 0)) {
                local_48 = (longlong *)0x0;
            }
            plVar1 = local_48;
            if (*pplVar4 != (longlong *)0x0) {
                (**(code **)(**pplVar4 + 8))();
                *pplVar4 = (longlong *)0x0;
            }
            *pplVar4 = plVar1;
            pplVar4 = pplVar4 + 1;
            puVar3 = (undefined8 *)((longlong)puVar3 + 4);
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
    return;
}



void FUN_1403829c0(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x91] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x91] + 8))();
        param_1[0x91] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 0x11) == 0x11) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x13);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),3,uVar2,param_1 + 0x91);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x13,&local_res8);
            lVar1 = *(longlong *)(param_1[0x91] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_140382af0(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x92] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 0x11) == 0x11) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x14);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),4,uVar2,param_1 + 0x92);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x14,&local_res8);
            lVar1 = *(longlong *)(param_1[0x92] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_140382c20(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *local_res8;
    int local_28;
    int local_24;
    int local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if ((longlong *)param_1[0x93] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x93] + 8))();
        param_1[0x93] = 0;
    }
    if (((byte)*(undefined4 *)(*param_1 + 0xe8) & 0x11) == 0x11) {
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],0x1f);
        iVar3 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),7,uVar2,param_1 + 0x93);
        if ((-1 < iVar3) && (iVar3 != 1)) {
            local_res8 = (longlong *)0x0;
            (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x1f,&local_res8);
            lVar1 = *(longlong *)(param_1[0x93] + 0x20);
            uVar4 = (**(code **)(*local_res8 + 0x18))();
            local_18 = 0x44;
            local_14 = 0x44;
            local_10 = 1;
            local_c = 0xd;
            lVar5 = (**(code **)(*local_res8 + 0x10))();
            local_28 = *(int *)(lVar5 + 0x2c);
            local_24 = local_28 * 0x11;
            local_20 = local_24;
            FUN_140371d10(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18),uVar4,&local_18,
                          &local_28);
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



void FUN_140382d50(longlong *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    ulonglong uVar3;

    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffe9600;
    FUN_140383760();
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff6;
    uVar3 = 0;
    if (param_1[0xb5] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb6);
        pplVar2 = (longlong **)(*param_1 + 0x8e8);
        param_1[0xb5] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb5] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x8f0) = 0;
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
    }
    if (param_1[0xb7] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb8);
        pplVar2 = (longlong **)(*param_1 + 0x8f8);
        param_1[0xb7] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb7] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x900) = 0;
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
    }
    if (param_1[0xb9] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    if (param_1[0x81] != 0) {
        do {
            if (*(longlong *)(param_1[0x82] + uVar3 * 8) != 0) {
                FUN_140393020();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[0x81]);
    }
    return;
}



void FUN_140382e90(longlong *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffffcf;
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe;
    if (param_1[0xb5] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb6);
        pplVar2 = (longlong **)(*param_1 + 0x8e8);
        param_1[0xb5] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb5] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x8f0) = 0;
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
    }
    if (param_1[0xb7] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb8);
        pplVar2 = (longlong **)(*param_1 + 0x8f8);
        param_1[0xb7] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb7] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x900) = 0;
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
    }
    if (param_1[0xb9] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    FUN_140389c40(param_1);
    return;
}



void FUN_140382f90(longlong *param_1,undefined8 *param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;

    (**(code **)*param_2)(param_2);
    (**(code **)(*(longlong *)param_1[2] + 8))();
    param_1[2] = (longlong)param_2;
    param_1[4] = 0;
    param_1[5] = 0;
    if (param_1[0xb5] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb6);
        pplVar2 = (longlong **)(*param_1 + 0x8e8);
        param_1[0xb5] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb5] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x8f0) = 0;
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
    }
    if (param_1[0xb7] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb8);
        pplVar2 = (longlong **)(*param_1 + 0x8f8);
        param_1[0xb7] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb7] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x900) = 0;
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
    }
    if (param_1[0xb9] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    FUN_140389c40(param_1);
    return;
}



void FUN_1403830c0(longlong *param_1,undefined4 param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;

    switch(param_2) {
        case 0:
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
            break;
        case 1:
            *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffbff;
            break;
        case 0xd:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffef;
            break;
        case 0xe:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffdf;
            break;
        case 0x10:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffbf;
            break;
        case 0x11:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffb;
            break;
        case 0x12:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffff7;
            break;
        case 0x13:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffdfff;
            break;
        case 0x14:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffbfff;
            break;
        case 0x15:
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
            break;
        case 0x16:
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
            break;
        case 0x1a:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffff7f;
            break;
        case 0x1b:
            FUN_140383760(param_1);
            *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
            break;
        case 0x1c:
            *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffdff;
            break;
        case 0x1f:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffeffff;
            break;
        case 0x22:
            *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffeff;
    }
    if (*(int *)(param_1 + 4) != 0xf) {
        *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffe;
    }
    if (*(int *)((longlong)param_1 + 0x24) != 0x3fff) {
        if (param_1[0xb5] == 0) {
            pplVar1 = (longlong **)(param_1 + 0xb6);
            pplVar2 = (longlong **)(*param_1 + 0x8e8);
            param_1[0xb5] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0xb5] = (longlong)pplVar1;
            }
            *(undefined4 *)(*param_1 + 0x8f0) = 0;
            *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
        }
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 5) != 0x1ffff) {
        if (param_1[0xb7] == 0) {
            pplVar1 = (longlong **)(param_1 + 0xb8);
            pplVar2 = (longlong **)(*param_1 + 0x8f8);
            param_1[0xb7] = (longlong)pplVar2;
            *pplVar1 = *pplVar2;
            *pplVar2 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0xb7] = (longlong)pplVar1;
            }
            *(undefined4 *)(*param_1 + 0x900) = 0;
            *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
        }
        *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe;
    }
    if ((*(int *)((longlong)param_1 + 0x2c) != 0xf) && (param_1[0xb9] == 0)) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    FUN_140389c40(param_1);
    return;
}



void FUN_140383310(longlong *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xfffffffd;
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe;
    if (param_1[0xb5] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb6);
        pplVar2 = (longlong **)(*param_1 + 0x8e8);
        param_1[0xb5] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb5] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x8f0) = 0;
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
    }
    if (param_1[0xb7] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb8);
        pplVar2 = (longlong **)(*param_1 + 0x8f8);
        param_1[0xb7] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb7] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x900) = 0;
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
    }
    if (param_1[0xb9] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    FUN_140389c40(param_1);
    return;
}



void FUN_140383610(longlong *param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;

    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) & 0xffffe7ff;
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffbfe;
    *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffffe;
    if (param_1[0xb5] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb6);
        pplVar2 = (longlong **)(*param_1 + 0x8e8);
        param_1[0xb5] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb5] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x8f0) = 0;
        *(int *)(*param_1 + 0x874) = *(int *)(*param_1 + 0x874) + 1;
    }
    if (param_1[0xb7] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xb8);
        pplVar2 = (longlong **)(*param_1 + 0x8f8);
        param_1[0xb7] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb7] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x900) = 0;
        *(int *)(*param_1 + 0x878) = *(int *)(*param_1 + 0x878) + 1;
    }
    if (param_1[0xb9] == 0) {
        pplVar1 = (longlong **)(param_1 + 0xba);
        pplVar2 = (longlong **)(*param_1 + 0x908);
        param_1[0xb9] = (longlong)pplVar2;
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[0xb9] = (longlong)pplVar1;
        }
        *(undefined4 *)(*param_1 + 0x910) = 0;
        *(int *)(*param_1 + 0x87c) = *(int *)(*param_1 + 0x87c) + 1;
    }
    FUN_140389c40(param_1);
    return;
}



void FUN_140383760(longlong *param_1)

{
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong *plVar8;
    DWORD *pDVar9;

    uVar7 = 0;
    if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x6c] + 0x68))();
        (**(code **)(*(longlong *)param_1[0x6c] + 0x20))();
        (**(code **)(*(longlong *)param_1[0x6c] + 8))();
        param_1[0x6c] = 0;
    }
    if (param_1[0x6e] != 0) {
        lVar3 = *param_1;
        pDVar9 = (DWORD *)(lVar3 + 0x9d0);
        DVar6 = GetCurrentThreadId();
        if (*pDVar9 == DVar6) {
            *(longlong *)(lVar3 + 0x9d8) = *(longlong *)(lVar3 + 0x9d8) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar3 + 0x9d8);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *pDVar9 = DVar6;
                    goto LAB_140383814;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar9);
        }
        LAB_140383814:
        lVar5 = param_1[0x6e];
        plVar8 = (longlong *)(*param_1 + 0x9f8);
        if (*(longlong *)(lVar5 + 0x520) == 0) {
            *(longlong **)(lVar5 + 0x520) = plVar8;
            plVar2 = (longlong *)(lVar5 + 0x528);
            *plVar2 = *plVar8;
            *plVar8 = lVar5;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x520) = plVar2;
            }
        }
        param_1[0x6e] = 0;
        if (1 < *(ulonglong *)(lVar3 + 0x9d8)) {
            *(longlong *)(lVar3 + 0x9d8) = *(longlong *)(lVar3 + 0x9d8) + -1;
            return;
        }
        *pDVar9 = 0;
        *(undefined8 *)(lVar3 + 0x9d8) = 0;
        if (*(longlong *)(lVar3 + 0x9e0) != 0) {
            if (*(longlong *)(lVar3 + 0x9e8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar3 + 0x9e8);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar3 + 0x9e8));
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_140383920(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5
        ,int param_6)

{
    float *pfVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined (*pauVar9) [16];
    int iVar10;
    longlong *plVar11;
    longlong lVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    float fVar15;
    float fVar16;
    undefined auVar17 [16];
    float fVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    float fVar23;
    undefined4 uVar24;
    float fVar25;
    undefined4 uVar26;
    float fVar27;
    undefined4 uVar28;
    float fVar29;
    undefined4 uVar30;
    float fVar31;
    int iStack0000000000000038;
    ulonglong in_stack_fffffffffffffef8;
    ulonglong uVar32;
    undefined local_f8 [8];
    undefined8 uStack240;
    undefined local_e8 [8];
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8 [4];
    float local_c8 [36];

    uVar32 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
    puVar6 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,9,uVar32);
    if (puVar6 != (undefined4 *)0x0) {
        uVar19 = *(undefined4 *)(param_1 + 0x18);
        uVar24 = *(undefined4 *)(param_1 + 0x19);
        *puVar6 = uVar19;
        puVar6[1] = uVar24;
        puVar6[2] = uVar19;
        puVar6[3] = uVar24;
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    uVar32 = uVar32 & 0xffffffff00000000;
    uVar7 = (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,400,1,5,uVar32);
    if (uVar7 == 0) goto LAB_1403842c9;
    uVar13 = 0;
    iStack0000000000000038 = param_6;
    plVar11 = param_1 + 0xb;
    fVar25 = 0.0;
    uVar26 = 0;
    fVar31 = 0.01;
    fVar15 = (float)(int)param_1[1];
    _local_f8 = ZEXT816(CONCAT44((float)*(int *)((longlong)param_1 + 0xc),fVar15));
    local_f8._4_4_ = SUB164(_local_f8 >> 0x20,0);
    uVar28 = 0;
    uVar30 = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar8 = uVar7;
    uVar14 = uVar13;
    fVar27 = local_f8._4_4_;
    fVar29 = fVar15;
    do {
        uVar5 = (uint)uVar8;
        lVar12 = plVar11[-4];
        if (lVar12 == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar13,0,0,0);
            uVar32 = 0;
            uVar8 = (**(code **)(*DAT_140c65670 + 0x160))();
        }
        else {
            iVar10 = *(int *)(lVar12 + 0x70);
            fVar18 = fVar29;
            uVar20 = uVar30;
            fVar23 = fVar27;
            uVar21 = uVar28;
            if (((iVar10 != 0) && (fVar23 = fVar25, uVar21 = uVar26, iVar10 != 1)) &&
                (fVar18 = fVar15, uVar20 = uVar19, fVar23 = local_f8._4_4_, uVar21 = uVar24, iVar10 == 2))
            {
                fVar18 = fVar27;
                uVar20 = uVar28;
                fVar23 = fVar25;
                uVar21 = uVar26;
            }
            uVar24 = uVar21;
            uVar19 = uVar20;
            fVar16 = DAT_140c44578 * *(float *)(lVar12 + 0x68);
            fVar18 = fVar18 * fVar16;
            fVar23 = fVar23 * fVar16;
            _local_f8 = CONCAT48(fVar16,local_f8);
            if (*(float *)(lVar12 + 0x40) != fVar25) {
                uVar5 = *(uint *)(*param_1 + 0x370) / *(uint *)(lVar12 + 0x50);
                fVar18 = fVar18 + (float)((ulonglong)*(uint *)(*param_1 + 0x370) %
                                          (ulonglong)*(uint *)(lVar12 + 0x50)) * *(float *)(lVar12 + 0x40);
            }
            if (*(float *)(lVar12 + 0x44) != fVar25) {
                uVar5 = *(uint *)(*param_1 + 0x370) / *(uint *)(lVar12 + 0x54);
                fVar23 = fVar23 + (float)((ulonglong)*(uint *)(*param_1 + 0x370) %
                                          (ulonglong)*(uint *)(lVar12 + 0x54)) * *(float *)(lVar12 + 0x44);
            }
            iVar10 = (int)fVar18;
            fVar15 = fVar18;
            if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar18)) {
                uVar5 = movmskps(uVar5,CONCAT88(SUB168(CONCAT412(uVar19,CONCAT48(uVar19,CONCAT44(uVar19,
                                                                                                 fVar18))) >> 0x40,0),
                                                (ulonglong)(uint)fVar18 | CONCAT44(uVar19,fVar18) << 0x20));
                uVar5 = uVar5 & 1;
                fVar15 = (float)(iVar10 - uVar5);
            }
            fVar15 = fVar18 - fVar15;
            iVar10 = (int)fVar23;
            local_f8._4_4_ = fVar23;
            if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar23)) {
                uVar5 = movmskps(uVar5,CONCAT88(SUB168(CONCAT412(uVar24,CONCAT48(uVar24,CONCAT44(uVar24,
                                                                                                 fVar23))) >> 0x40,0),
                                                (ulonglong)(uint)fVar23 | CONCAT44(uVar24,fVar23) << 0x20));
                local_f8._4_4_ = (float)(iVar10 - (uVar5 & 1));
            }
            local_f8._4_4_ = fVar23 - local_f8._4_4_;
            local_f8 = CONCAT44(local_f8._4_4_,fVar15);
            pfVar1 = (float *)(uVar7 + uVar13 * 0x10);
            *pfVar1 = fVar15;
            pfVar1[1] = local_f8._4_4_;
            pfVar1[2] = fVar16;
            pfVar1[3] = uStack240._4_4_;
            iVar10 = *(int *)(*param_1 + 0x32c);
            if ((iVar10 == 0) || (iVar10 == *(int *)(lVar12 + 0xc))) {
                (**(code **)(*DAT_140c65670 + 0x168))(DAT_140c65670,uVar13,*plVar11,0,uVar32);
            }
            else {
                uVar32 = 0;
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,uVar13,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168));
            }
            uVar20 = *(undefined4 *)(lVar12 + 0x34);
            uVar21 = *(undefined4 *)(lVar12 + 0x38);
            uVar22 = *(undefined4 *)(lVar12 + 0x3c);
            puVar6 = (undefined4 *)(uVar7 + (uVar13 + 4) * 0x10);
            *puVar6 = *(undefined4 *)(lVar12 + 0x30);
            puVar6[1] = uVar20;
            puVar6[2] = uVar21;
            puVar6[3] = uVar22;
            (**(code **)(*DAT_140c65670 + 0x168))();
            if (0 < param_5) {
                fVar18 = *(float *)(lVar12 + 0x60);
                *(undefined4 *)(local_e8 + uVar14) = *(undefined4 *)(lVar12 + 0x58);
                *(undefined4 *)((longlong)local_d8 + uVar14) = *(undefined4 *)(lVar12 + 0x5c);
                *(float *)((longlong)local_c8 + uVar14) = fVar18 * fVar31;
            }
            *(undefined4 *)(uVar7 + 0x80) = local_e8._0_4_;
            *(undefined4 *)(uVar7 + 0x84) = local_e8._4_4_;
            *(undefined4 *)(uVar7 + 0x88) = uStack224;
            *(undefined4 *)(uVar7 + 0x8c) = uStack220;
            *(undefined4 *)(uVar7 + 0x90) = local_d8[0];
            *(undefined4 *)(uVar7 + 0x94) = local_d8[1];
            *(undefined4 *)(uVar7 + 0x98) = local_d8[2];
            *(undefined4 *)(uVar7 + 0x9c) = local_d8[3];
            *(float *)(uVar7 + 0xa0) = local_c8[0];
            *(float *)(uVar7 + 0xa4) = local_c8[1];
            *(float *)(uVar7 + 0xa8) = local_c8[2];
            *(float *)(uVar7 + 0xac) = local_c8[3];
            *(undefined (*) [16])(uVar7 + 0xb0) =
                    CONCAT412(local_c8[3] * -0.5,
                              CONCAT48(local_c8[2] * -0.5,CONCAT44(local_c8[1] * -0.5,local_c8[0] * -0.5)));
            uVar5 = *(int *)((longlong)&DAT_140b65cb8 + uVar14) * (*(int *)(lVar12 + 0x70) + 1);
            uVar8 = (ulonglong)uVar5;
            param_6 = iStack0000000000000038 + uVar5;
            iStack0000000000000038 = param_6;
        }
        uVar5 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar5;
        plVar11 = plVar11 + 1;
        uVar14 = uVar14 + 4;
    } while (uVar5 < 4);
    if ((*(uint *)(*param_1 + 0x84) & 0x20000) == 0) {
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,8,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x30] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar12 = *(longlong *)(param_1[0x30] + 0x20);
        uVar19 = *(undefined4 *)(lVar12 + 0x24);
        uVar24 = *(undefined4 *)(lVar12 + 0x28);
        uVar26 = *(undefined4 *)(lVar12 + 0x2c);
        *(undefined4 *)(uVar7 + 0x120) = *(undefined4 *)(lVar12 + 0x20);
        *(undefined4 *)(uVar7 + 0x124) = uVar19;
        *(undefined4 *)(uVar7 + 0x128) = uVar24;
        *(undefined4 *)(uVar7 + 300) = uVar26;
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,9,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x31] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar12 = *(longlong *)(param_1[0x31] + 0x20);
        uVar19 = *(undefined4 *)(lVar12 + 0x24);
        uVar24 = *(undefined4 *)(lVar12 + 0x28);
        uVar26 = *(undefined4 *)(lVar12 + 0x2c);
        *(undefined4 *)(uVar7 + 0x130) = *(undefined4 *)(lVar12 + 0x20);
        *(undefined4 *)(uVar7 + 0x134) = uVar19;
        *(undefined4 *)(uVar7 + 0x138) = uVar24;
        *(undefined4 *)(uVar7 + 0x13c) = uVar26;
    }
    else {
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,8,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168));
        uVar19 = 0;
        uVar24 = 0;
        uVar26 = 0;
        uVar28 = 0;
        *(undefined (*) [16])(uVar7 + 0x120) = ZEXT816(0);
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,9,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x170),0,0);
        *(undefined (*) [16])(uVar7 + 0x130) =
                CONCAT412(uVar28,CONCAT48(uVar26,CONCAT44(uVar24,uVar19)));
    }
    (**(code **)(*DAT_140c65670 + 0x160))
            (DAT_140c65670,10,
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x32] + 0x20) + 0x10) + 0x20),0,0);
    lVar12 = *(longlong *)(param_1[0x32] + 0x20);
    uVar19 = *(undefined4 *)(lVar12 + 0x24);
    uVar24 = *(undefined4 *)(lVar12 + 0x28);
    uVar26 = *(undefined4 *)(lVar12 + 0x2c);
    *(undefined4 *)(uVar7 + 0x140) = *(undefined4 *)(lVar12 + 0x20);
    *(undefined4 *)(uVar7 + 0x144) = uVar19;
    *(undefined4 *)(uVar7 + 0x148) = uVar24;
    *(undefined4 *)(uVar7 + 0x14c) = uVar26;
    lVar12 = *param_1;
    if ((*(uint *)(lVar12 + 0x84) & 0x1809023) != 0) {
        uVar19 = 0x3f800000;
        uVar24 = 0x3f800000;
        uVar26 = 0x3f800000;
        uVar28 = 0x3f800000;
        uVar30 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        _local_f8 = CONCAT48(0x3f800000,0x3f8000003f800000);
        _local_f8 = CONCAT412(0x3f800000,_local_f8);
        _local_e8 = ZEXT816(0);
        auVar17 = ZEXT1216(ZEXT812(0));
        local_f8._0_4_ = uVar19;
        local_f8._4_4_ = (float)uVar24;
        uStack240._0_4_ = uVar26;
        uStack240._4_4_ = (float)uVar28;
        if (((*(uint *)(lVar12 + 0x84) & 0x20) != 0) &&
            ((*(longlong *)(lVar12 + 0x288) != 0 || (*(longlong *)(lVar12 + 0x290) != 0)))) {
            (**(code **)(lVar12 + 0x290))(*(undefined8 *)(lVar12 + 0x288),param_1[2],local_f8,local_e8);
            auVar17 = _local_e8;
        }
        *(undefined4 *)(uVar7 + 0xc0) = local_f8._0_4_;
        *(float *)(uVar7 + 0xc4) = local_f8._4_4_;
        *(undefined4 *)(uVar7 + 200) = (undefined4)uStack240;
        *(float *)(uVar7 + 0xcc) = uStack240._4_4_;
        *(undefined (*) [16])(uVar7 + 0xd0) = auVar17;
        if ((*(byte *)(*param_1 + 0x84) & 2) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xb,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
            *(undefined (*) [16])(uVar7 + 0x160) =
                    CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar30)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xb,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0xa1] + 0x20) + 0x10) + 0x20));
            lVar12 = *(longlong *)(param_1[0xa1] + 0x20);
            uVar2 = *(undefined4 *)(lVar12 + 0x24);
            uVar3 = *(undefined4 *)(lVar12 + 0x28);
            uVar4 = *(undefined4 *)(lVar12 + 0x2c);
            *(undefined4 *)(uVar7 + 0x160) = *(undefined4 *)(lVar12 + 0x20);
            *(undefined4 *)(uVar7 + 0x164) = uVar2;
            *(undefined4 *)(uVar7 + 0x168) = uVar3;
            *(undefined4 *)(uVar7 + 0x16c) = uVar4;
        }
        if ((*(byte *)(*param_1 + 0x84) & 1) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xc,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
            *(undefined (*) [16])(uVar7 + 0x150) =
                    CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar30)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xc,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0xa0] + 0x20) + 0x10) + 0x20));
            lVar12 = *(longlong *)(param_1[0xa0] + 0x20);
            uVar2 = *(undefined4 *)(lVar12 + 0x24);
            uVar3 = *(undefined4 *)(lVar12 + 0x28);
            uVar4 = *(undefined4 *)(lVar12 + 0x2c);
            *(undefined4 *)(uVar7 + 0x150) = *(undefined4 *)(lVar12 + 0x20);
            *(undefined4 *)(uVar7 + 0x154) = uVar2;
            *(undefined4 *)(uVar7 + 0x158) = uVar3;
            *(undefined4 *)(uVar7 + 0x15c) = uVar4;
        }
        if ((*(uint *)(*param_1 + 0x84) & 0x1000) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x170),0,0);
            *(undefined (*) [16])(uVar7 + 0x170) =
                    CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar30)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x33] + 0x20) + 0x10) + 0x20));
            *(undefined (*) [16])(uVar7 + 0x170) =
                    *(undefined (*) [16])(*(longlong *)(param_1[0x33] + 0x20) + 0x20);
        }
        uVar4 = uRam0000000140c7841c;
        uVar3 = uRam0000000140c78418;
        uVar2 = uRam0000000140c78414;
        uVar5 = *(uint *)(*param_1 + 0x84);
        if ((uVar5 >> 0x17 & 1) == 0) {
            if ((uVar5 >> 0x18 & 1) != 0) {
                pauVar9 = (undefined (*) [16])(uVar7 + 0xe0);
                plVar11 = param_1 + 0x9c;
                lVar12 = 4;
                do {
                    if (*plVar11 == 0) {
                        *pauVar9 = CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar30)));
                    }
                    else {
                        *pauVar9 = *(undefined (*) [16])(*plVar11 + 0x20);
                    }
                    plVar11 = plVar11 + 1;
                    pauVar9 = pauVar9[1];
                    lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                goto LAB_140384106;
            }
            if ((uVar5 >> 0xf & 1) == 0) {
                *(undefined8 *)(uVar7 + 0xe0) = 0;
                *(undefined8 *)(uVar7 + 0xe8) = 0;
                *(undefined8 *)(uVar7 + 0xf0) = 0;
                *(undefined8 *)(uVar7 + 0xf8) = 0;
                *(undefined8 *)(uVar7 + 0x100) = 0;
                *(undefined8 *)(uVar7 + 0x108) = 0;
                *(undefined8 *)(uVar7 + 0x110) = 0;
                *(undefined8 *)(uVar7 + 0x118) = 0;
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xe,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xf,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
                *(undefined (*) [16])(uVar7 + 0x180) =
                        CONCAT412(uVar22,CONCAT48(uVar21,CONCAT44(uVar20,uVar30)));
                goto LAB_1403842a9;
            }
            *(undefined4 *)(uVar7 + 0xe0) = _DAT_140c78410;
            *(undefined4 *)(uVar7 + 0xe4) = uVar2;
            *(undefined4 *)(uVar7 + 0xe8) = uVar3;
            *(undefined4 *)(uVar7 + 0xec) = uVar4;
            uVar26 = uRam0000000140c7842c;
            uVar24 = uRam0000000140c78428;
            uVar19 = uRam0000000140c78424;
            *(undefined4 *)(uVar7 + 0xf0) = _DAT_140c78420;
            *(undefined4 *)(uVar7 + 0xf4) = uVar19;
            *(undefined4 *)(uVar7 + 0xf8) = uVar24;
            *(undefined4 *)(uVar7 + 0xfc) = uVar26;
            uVar26 = uRam0000000140c7843c;
            uVar24 = uRam0000000140c78438;
            uVar19 = uRam0000000140c78434;
            *(undefined4 *)(uVar7 + 0x100) = _DAT_140c78430;
            *(undefined4 *)(uVar7 + 0x104) = uVar19;
            *(undefined4 *)(uVar7 + 0x108) = uVar24;
            *(undefined4 *)(uVar7 + 0x10c) = uVar26;
            uVar26 = uRam0000000140c7844c;
            uVar24 = uRam0000000140c78448;
            uVar19 = uRam0000000140c78444;
            *(undefined4 *)(uVar7 + 0x110) = _DAT_140c78440;
            *(undefined4 *)(uVar7 + 0x114) = uVar19;
            *(undefined4 *)(uVar7 + 0x118) = uVar24;
            *(undefined4 *)(uVar7 + 0x11c) = uVar26;
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x34] + 0x20) + 0x10) + 0x20));
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0xf,*(undefined8 *)(*param_1 + 800),0,0);
        }
        else {
            pauVar9 = (undefined (*) [16])(uVar7 + 0xe0);
            plVar11 = param_1 + 0x9c;
            lVar12 = 4;
            do {
                if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != *(int *)(*param_1 + 0x328))) {
                    *pauVar9 = CONCAT412(uRam0000000140c7844c,
                                         CONCAT48(uRam0000000140c78448,
                                                  CONCAT44(uRam0000000140c78444,_DAT_140c78440)));
                }
                else {
                    *pauVar9 = CONCAT412(uVar28,CONCAT48(uVar26,CONCAT44(uVar24,uVar19)));
                }
                plVar11 = plVar11 + 1;
                pauVar9 = pauVar9[1];
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            LAB_140384106:
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x34] + 0x20) + 0x10) + 0x20),0
                            ,0);
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xf,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x1f0),0,0);
        }
        lVar12 = *(longlong *)(param_1[0x34] + 0x20);
        uVar19 = *(undefined4 *)(lVar12 + 0x24);
        uVar24 = *(undefined4 *)(lVar12 + 0x28);
        uVar26 = *(undefined4 *)(lVar12 + 0x2c);
        *(undefined4 *)(uVar7 + 0x180) = *(undefined4 *)(lVar12 + 0x20);
        *(undefined4 *)(uVar7 + 0x184) = uVar19;
        *(undefined4 *)(uVar7 + 0x188) = uVar24;
        *(undefined4 *)(uVar7 + 0x18c) = uVar26;
    }
    LAB_1403842a9:
    (**(code **)(*DAT_140c65670 + 0x118))();
    LAB_1403842c9:
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x70),param_6);
    FUN_140384480(param_1,param_2,param_3,param_4);
    return 0;
}



undefined8 FUN_140384320(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined (*pauVar5) [16];
    undefined4 *puVar6;
    ulonglong in_stack_ffffffffffffffd8;
    ulonglong uVar7;

    uVar7 = in_stack_ffffffffffffffd8 & 0xffffffff00000000;
    pauVar5 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,9,uVar7);
    if (pauVar5 != (undefined (*) [16])0x0) {
        *pauVar5 = ZEXT1216(CONCAT48(*(uint *)(param_1 + 0x18),(ulonglong)*(uint *)(param_1 + 0x18)));
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    puVar6 = (undefined4 *)
            (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,0,0,uVar7 & 0xffffffff00000000);
    if (puVar6 != (undefined4 *)0x0) {
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,0,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x34] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar1 = *(longlong *)(param_1[0x34] + 0x20);
        uVar2 = *(undefined4 *)(lVar1 + 0x24);
        uVar3 = *(undefined4 *)(lVar1 + 0x28);
        uVar4 = *(undefined4 *)(lVar1 + 0x2c);
        *puVar6 = *(undefined4 *)(lVar1 + 0x20);
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(*param_1 + 800),0,0);
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x80),1);
    FUN_140384480(param_1,param_2,param_3,param_4);
    return 0;
}



undefined8 FUN_140384480(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined4 uVar1;

    if ((*(uint *)(*param_1 + 0x84) & 0x100000) == 0) {
        if (*(int *)(param_1 + 0x15) == 0) goto LAB_1403845e7;
        (**(code **)(*DAT_140c65670 + 0x140))();
        (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1[0x16] + 0x20));
        (**(code **)(*DAT_140c65670 + 0x130))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x78),4);
        (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1[0x14] + 0x20),4);
        uVar1 = *(undefined4 *)(param_1 + 0x15);
    }
    else {
        (**(code **)(*DAT_140c65670 + 0x140))();
        (**(code **)(*DAT_140c65670 + 0x138))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x1f8));
        (**(code **)(*DAT_140c65670 + 0x130))
                (DAT_140c65670,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x78),4,0);
        (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1[0x14] + 0x20),4,1);
        uVar1 = 0xc00;
    }
    (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3,0,uVar1,0,0x221,0,1);
    LAB_1403845e7:
    if (*(int *)(param_1 + 0x7d) != 0) {
        (**(code **)(*DAT_140c65670 + 0x140))(DAT_140c65670,param_2,param_4);
        (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,param_1[0x7c]);
        (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,param_1[0x7a],5);
        (**(code **)(*DAT_140c65670 + 0x290))
                (DAT_140c65670,3,0,*(undefined4 *)(param_1 + 0x7d),0,*(undefined4 *)(param_1 + 0x7b),0
                        ,1);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140384690(longlong *param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined (*pauVar4) [16];
    undefined (*pauVar5) [16];
    longlong *plVar6;
    char cVar7;
    longlong *plVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    longlong lVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    ulonglong in_stack_ffffffffffffff58;
    ulonglong uVar25;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined local_78 [8];
    undefined4 uStack112;
    undefined4 uStack108;

    if (*(int *)(param_1 + 0x62) == 0) {
        return 0;
    }
    if (param_1[0x5e] == 0) {
        return 0;
    }
    if (param_1[0x61] == 0) {
        return 0;
    }
    uVar10 = 0;
    lVar12 = 4;
    uVar25 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
    pauVar4 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xb0,1,4,uVar25)
            ;
    if (pauVar4 == (undefined (*) [16])0x0) goto LAB_140384bae;
    lVar9 = *param_1;
    if ((*(uint *)(lVar9 + 0x84) & 0x1809023) != 0) {
        uVar13 = 0x3f800000;
        uVar14 = 0x3f800000;
        uVar15 = 0x3f800000;
        uVar16 = 0x3f800000;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        local_88 = 0x3f800000;
        uStack132 = 0x3f800000;
        uStack128 = 0x3f800000;
        uStack124 = 0x3f800000;
        local_78._0_4_ = 0;
        local_78._4_4_ = 0;
        uStack112 = 0;
        uStack108 = 0;
        _local_78 = ZEXT816(0);
        uVar21 = uVar13;
        uVar22 = uVar14;
        uVar23 = uVar15;
        uVar24 = uVar16;
        if (((*(uint *)(lVar9 + 0x84) & 0x20) != 0) &&
            (iVar3 = FUN_1400f4750(lVar9 + 0x288), iVar3 != -1)) {
            (**(code **)(lVar9 + 0x290))(*(undefined8 *)(lVar9 + 0x288),param_1[2],&local_88,local_78);
            uVar21 = local_88;
            uVar22 = uStack132;
            uVar23 = uStack128;
            uVar24 = uStack124;
        }
        *pauVar4 = CONCAT412(uVar24,CONCAT48(uVar23,CONCAT44(uVar22,uVar21)));
        pauVar4[1] = CONCAT412(uStack108,CONCAT48(uStack112,CONCAT44(local_78._4_4_,local_78._0_4_)));
        if ((*(byte *)(*param_1 + 0x84) & 2) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xb,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
            pauVar4[8] = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xb,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0xa1] + 0x20) + 0x10) + 0x20));
            lVar9 = *(longlong *)(param_1[0xa1] + 0x20);
            uVar21 = *(undefined4 *)(lVar9 + 0x24);
            uVar22 = *(undefined4 *)(lVar9 + 0x28);
            uVar23 = *(undefined4 *)(lVar9 + 0x2c);
            *(undefined4 *)pauVar4[8] = *(undefined4 *)(lVar9 + 0x20);
            *(undefined4 *)(pauVar4[8] + 4) = uVar21;
            *(undefined4 *)(pauVar4[8] + 8) = uVar22;
            *(undefined4 *)(pauVar4[8] + 0xc) = uVar23;
        }
        if ((*(byte *)(*param_1 + 0x84) & 1) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xc,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
            pauVar4[7] = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xc,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0xa0] + 0x20) + 0x10) + 0x20));
            lVar9 = *(longlong *)(param_1[0xa0] + 0x20);
            uVar21 = *(undefined4 *)(lVar9 + 0x24);
            uVar22 = *(undefined4 *)(lVar9 + 0x28);
            uVar23 = *(undefined4 *)(lVar9 + 0x2c);
            *(undefined4 *)pauVar4[7] = *(undefined4 *)(lVar9 + 0x20);
            *(undefined4 *)(pauVar4[7] + 4) = uVar21;
            *(undefined4 *)(pauVar4[7] + 8) = uVar22;
            *(undefined4 *)(pauVar4[7] + 0xc) = uVar23;
        }
        if ((*(uint *)(*param_1 + 0x84) & 0x1000) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x170),0,0);
            pauVar4[9] = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x33] + 0x20) + 0x10) + 0x20));
            lVar9 = *(longlong *)(param_1[0x33] + 0x20);
            uVar21 = *(undefined4 *)(lVar9 + 0x24);
            uVar22 = *(undefined4 *)(lVar9 + 0x28);
            uVar23 = *(undefined4 *)(lVar9 + 0x2c);
            *(undefined4 *)pauVar4[9] = *(undefined4 *)(lVar9 + 0x20);
            *(undefined4 *)(pauVar4[9] + 4) = uVar21;
            *(undefined4 *)(pauVar4[9] + 8) = uVar22;
            *(undefined4 *)(pauVar4[9] + 0xc) = uVar23;
        }
        uVar23 = uRam0000000140c7841c;
        uVar22 = uRam0000000140c78418;
        uVar21 = uRam0000000140c78414;
        uVar11 = *(uint *)(*param_1 + 0x84);
        if ((uVar11 >> 0x17 & 1) == 0) {
            if ((uVar11 >> 0x18 & 1) != 0) {
                pauVar5 = pauVar4[2];
                plVar6 = param_1 + 0x9c;
                lVar9 = 4;
                do {
                    lVar2 = *plVar6;
                    if (lVar2 == 0) {
                        *pauVar5 = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
                    }
                    else {
                        uVar13 = *(undefined4 *)(lVar2 + 0x24);
                        uVar14 = *(undefined4 *)(lVar2 + 0x28);
                        uVar15 = *(undefined4 *)(lVar2 + 0x2c);
                        *(undefined4 *)*pauVar5 = *(undefined4 *)(lVar2 + 0x20);
                        *(undefined4 *)(*pauVar5 + 4) = uVar13;
                        *(undefined4 *)(*pauVar5 + 8) = uVar14;
                        *(undefined4 *)(*pauVar5 + 0xc) = uVar15;
                    }
                    plVar6 = plVar6 + 1;
                    pauVar5 = pauVar5[1];
                    lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
                goto LAB_1403849a1;
            }
            if ((uVar11 >> 0xf & 1) == 0) {
                *(undefined8 *)pauVar4[2] = 0;
                *(undefined8 *)(pauVar4[2] + 8) = 0;
                *(undefined8 *)pauVar4[3] = 0;
                *(undefined8 *)(pauVar4[3] + 8) = 0;
                *(undefined8 *)pauVar4[4] = 0;
                *(undefined8 *)(pauVar4[4] + 8) = 0;
                *(undefined8 *)pauVar4[5] = 0;
                *(undefined8 *)(pauVar4[5] + 8) = 0;
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xe,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,0xf,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x168),0,0);
                pauVar4[10] = CONCAT412(uVar20,CONCAT48(uVar19,CONCAT44(uVar18,uVar17)));
                goto LAB_140384b2d;
            }
            *(undefined4 *)pauVar4[2] = _DAT_140c78410;
            *(undefined4 *)(pauVar4[2] + 4) = uVar21;
            *(undefined4 *)(pauVar4[2] + 8) = uVar22;
            *(undefined4 *)(pauVar4[2] + 0xc) = uVar23;
            uVar15 = uRam0000000140c7842c;
            uVar14 = uRam0000000140c78428;
            uVar13 = uRam0000000140c78424;
            *(undefined4 *)pauVar4[3] = _DAT_140c78420;
            *(undefined4 *)(pauVar4[3] + 4) = uVar13;
            *(undefined4 *)(pauVar4[3] + 8) = uVar14;
            *(undefined4 *)(pauVar4[3] + 0xc) = uVar15;
            uVar15 = uRam0000000140c7843c;
            uVar14 = uRam0000000140c78438;
            uVar13 = uRam0000000140c78434;
            *(undefined4 *)pauVar4[4] = _DAT_140c78430;
            *(undefined4 *)(pauVar4[4] + 4) = uVar13;
            *(undefined4 *)(pauVar4[4] + 8) = uVar14;
            *(undefined4 *)(pauVar4[4] + 0xc) = uVar15;
            uVar15 = uRam0000000140c7844c;
            uVar14 = uRam0000000140c78448;
            uVar13 = uRam0000000140c78444;
            *(undefined4 *)pauVar4[5] = _DAT_140c78440;
            *(undefined4 *)(pauVar4[5] + 4) = uVar13;
            *(undefined4 *)(pauVar4[5] + 8) = uVar14;
            *(undefined4 *)(pauVar4[5] + 0xc) = uVar15;
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x34] + 0x20) + 0x10) + 0x20));
            (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0xf,*(undefined8 *)(*param_1 + 800),0,0);
        }
        else {
            pauVar5 = pauVar4[2];
            plVar6 = param_1 + 0x9c;
            lVar9 = 4;
            do {
                uVar23 = uRam0000000140c7844c;
                uVar22 = uRam0000000140c78448;
                uVar21 = uRam0000000140c78444;
                if ((*plVar6 == 0) || (*(int *)(*plVar6 + 0x18) != *(int *)(*param_1 + 0x328))) {
                    *(undefined4 *)*pauVar5 = _DAT_140c78440;
                    *(undefined4 *)(*pauVar5 + 4) = uVar21;
                    *(undefined4 *)(*pauVar5 + 8) = uVar22;
                    *(undefined4 *)(*pauVar5 + 0xc) = uVar23;
                }
                else {
                    *pauVar5 = CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
                }
                plVar6 = plVar6 + 1;
                pauVar5 = pauVar5[1];
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            LAB_1403849a1:
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x34] + 0x20) + 0x10) + 0x20),0
                            ,0);
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xf,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x1f0),0,0);
        }
        lVar9 = *(longlong *)(param_1[0x34] + 0x20);
        uVar13 = *(undefined4 *)(lVar9 + 0x24);
        uVar14 = *(undefined4 *)(lVar9 + 0x28);
        uVar15 = *(undefined4 *)(lVar9 + 0x2c);
        *(undefined4 *)pauVar4[10] = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)(pauVar4[10] + 4) = uVar13;
        *(undefined4 *)(pauVar4[10] + 8) = uVar14;
        *(undefined4 *)(pauVar4[10] + 0xc) = uVar15;
    }
    LAB_140384b2d:
    uVar25 = 0;
    if ((*(uint *)(*param_1 + 0x84) & 0x10000) == 0) {
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,10,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x32] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar9 = *(longlong *)(param_1[0x32] + 0x20);
        uVar13 = *(undefined4 *)(lVar9 + 0x20);
        uVar14 = *(undefined4 *)(lVar9 + 0x24);
        uVar15 = *(undefined4 *)(lVar9 + 0x28);
        uVar16 = *(undefined4 *)(lVar9 + 0x2c);
    }
    else {
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,10,*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x178));
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
    }
    pauVar4[6] = CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
    (**(code **)(*DAT_140c65670 + 0x118))();
    LAB_140384bae:
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,param_1[0x5e],0xd);
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,param_1[0x61]);
    plVar6 = param_1 + 0x54;
    plVar8 = param_1 + 0x5c;
    uVar11 = uVar10;
    do {
        iVar3 = *(int *)(plVar8 + 3);
        if (iVar3 != 0) {
            iVar1 = *(int *)plVar8;
            if ((*(byte *)(plVar8 + -4) & 2) == 0) {
                cVar7 = ((*(uint *)(*param_1 + 0x80) & 0x4000000) != 0) + '\x01';
            }
            else {
                cVar7 = '\0';
            }
            (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,cVar7);
            (**(code **)(*DAT_140c65670 + 0x168))(DAT_140c65670,0,plVar6[-4],0);
            (**(code **)(*DAT_140c65670 + 0x168))(DAT_140c65670,1,*plVar6);
            uVar25 = uVar25 & 0xffffffff00000000 | (ulonglong)uVar11;
            (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3,uVar10,iVar3,uVar25,iVar1,0,1);
            uVar10 = uVar10 + iVar3;
            uVar11 = uVar11 + iVar1;
        }
        plVar8 = (longlong *)((longlong)plVar8 + 4);
        plVar6 = plVar6 + 1;
        lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    return 0;
}



undefined8 FUN_140384d10(longlong param_1)

{
    undefined8 uVar1;
    ulonglong uVar2;

    (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,0);
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x408) != 0) {
        do {
            if ((*(longlong *)(*(longlong *)(param_1 + 0x410) + uVar2 * 8) != 0) &&
                (uVar1 = FUN_140393280(), (int)uVar1 < 0)) {
                return uVar1;
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(param_1 + 0x408));
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140384d90(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined (*pauVar5) [16];
    undefined8 *puVar6;
    uint uVar7;
    undefined (*pauVar9) [16];
    ulonglong uVar10;
    longlong *plVar11;
    undefined extraout_XMM0 [16];
    float fVar12;
    float fVar14;
    undefined in_XMM1 [16];
    undefined auVar13 [16];
    ulonglong in_stack_ffffffffffffffa8;
    undefined4 uVar15;
    undefined4 local_48 [4];
    undefined local_38 [8];
    undefined4 uStack48;
    undefined4 uStack44;
    ulonglong uVar8;

    uVar8 = 0;
    uVar10 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
    pauVar5 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xf0,1,5,uVar10)
            ;
    uVar15 = (undefined4)(uVar10 >> 0x20);
    if (pauVar5 != (undefined (*) [16])0x0) {
        lVar1 = *param_1;
        if ((*(uint *)(lVar1 + 0x84) & 0x9023) != 0) {
            _local_38 = in_XMM1 & (undefined  [16])0x0;
            local_48[0] = 0x3f800000;
            local_48[1] = 0x3f800000;
            local_48[2] = 0x3f800000;
            local_48[3] = 0x3f800000;
            if (((*(uint *)(lVar1 + 0x84) & 0x20) != 0) &&
                ((*(longlong *)(lVar1 + 0x298) != 0 || (*(longlong *)(lVar1 + 0x2a0) != 0)))) {
                (**(code **)(lVar1 + 0x2a0))(*(undefined8 *)(lVar1 + 0x298),param_1[2],local_48,local_38);
            }
            *(undefined4 *)pauVar5[10] = local_48[0];
            *(undefined4 *)(pauVar5[10] + 4) = local_48[1];
            *(undefined4 *)(pauVar5[10] + 8) = local_48[2];
            *(undefined4 *)(pauVar5[10] + 0xc) = local_48[3];
            pauVar5[0xb] = _local_38;
        }
        plVar11 = param_1 + 0x8d;
        pauVar9 = pauVar5;
        uVar10 = uVar8;
        do {
            lVar1 = *plVar11;
            if (lVar1 == 0) {
                (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar8,0,0,0);
                (**(code **)(*DAT_140c65670 + 0x160))();
                *(undefined4 *)(local_38 + uVar10) = 0;
                *pauVar9 = extraout_XMM0 & (undefined  [16])0x0;
                *(undefined4 *)((longlong)local_48 + uVar10) = 0;
                pauVar9[1] = extraout_XMM0 & (undefined  [16])0x0;
            }
            else {
                (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar8,*(undefined8 *)(lVar1 + 0x50));
                (**(code **)(*DAT_140c65670 + 0x160))();
                uVar15 = *(undefined4 *)(lVar1 + 0x84);
                uVar2 = *(undefined4 *)(lVar1 + 0x88);
                uVar3 = *(undefined4 *)(lVar1 + 0x8c);
                *(undefined4 *)*pauVar9 = *(undefined4 *)(lVar1 + 0x80);
                *(undefined4 *)(*pauVar9 + 4) = uVar15;
                *(undefined4 *)(*pauVar9 + 8) = uVar2;
                *(undefined4 *)(*pauVar9 + 0xc) = uVar3;
                uVar15 = *(undefined4 *)(lVar1 + 0x94);
                uVar2 = *(undefined4 *)(lVar1 + 0x98);
                uVar3 = *(undefined4 *)(lVar1 + 0x9c);
                *(undefined4 *)pauVar9[1] = *(undefined4 *)(lVar1 + 0x90);
                *(undefined4 *)(pauVar9[1] + 4) = uVar15;
                *(undefined4 *)(pauVar9[1] + 8) = uVar2;
                *(undefined4 *)(pauVar9[1] + 0xc) = uVar3;
                *(undefined4 *)(local_38 + uVar10) = *(undefined4 *)(lVar1 + 0x4c);
                *(undefined4 *)((longlong)local_48 + uVar10) = *(undefined4 *)(lVar1 + 0x48);
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            pauVar9 = pauVar9[2];
            plVar11 = plVar11 + 1;
            uVar10 = uVar10 + 4;
        } while (uVar7 < 4);
        *(undefined4 *)pauVar5[8] = local_38._0_4_;
        *(undefined4 *)(pauVar5[8] + 4) = local_38._4_4_;
        *(undefined4 *)(pauVar5[8] + 8) = uStack48;
        *(undefined4 *)(pauVar5[8] + 0xc) = uStack44;
        *(undefined4 *)pauVar5[9] = local_48[0];
        *(undefined4 *)(pauVar5[9] + 4) = local_48[1];
        *(undefined4 *)(pauVar5[9] + 8) = local_48[2];
        *(undefined4 *)(pauVar5[9] + 0xc) = local_48[3];
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,8,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x91] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar1 = *(longlong *)(param_1[0x91] + 0x20);
        uVar15 = *(undefined4 *)(lVar1 + 0x24);
        uVar2 = *(undefined4 *)(lVar1 + 0x28);
        uVar3 = *(undefined4 *)(lVar1 + 0x2c);
        *(undefined4 *)pauVar5[0xc] = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(pauVar5[0xc] + 4) = uVar15;
        *(undefined4 *)(pauVar5[0xc] + 8) = uVar2;
        *(undefined4 *)(pauVar5[0xc] + 0xc) = uVar3;
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,9,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x92] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar1 = *(longlong *)(param_1[0x92] + 0x20);
        uVar15 = 0;
        uVar2 = *(undefined4 *)(lVar1 + 0x24);
        uVar3 = *(undefined4 *)(lVar1 + 0x28);
        uVar4 = *(undefined4 *)(lVar1 + 0x2c);
        *(undefined4 *)pauVar5[0xd] = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(pauVar5[0xd] + 4) = uVar2;
        *(undefined4 *)(pauVar5[0xd] + 8) = uVar3;
        *(undefined4 *)(pauVar5[0xd] + 0xc) = uVar4;
        (**(code **)(*DAT_140c65670 + 0x160))
                (DAT_140c65670,0xf,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[0x93] + 0x20) + 0x10) + 0x20),0,0
                );
        lVar1 = *(longlong *)(param_1[0x93] + 0x20);
        uVar2 = *(undefined4 *)(lVar1 + 0x24);
        uVar3 = *(undefined4 *)(lVar1 + 0x28);
        uVar4 = *(undefined4 *)(lVar1 + 0x2c);
        *(undefined4 *)pauVar5[0xe] = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(pauVar5[0xe] + 4) = uVar2;
        *(undefined4 *)(pauVar5[0xe] + 8) = uVar3;
        *(undefined4 *)(pauVar5[0xe] + 0xc) = uVar4;
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    puVar6 = (undefined8 *)(**(code **)(*DAT_140c65670 + 0xe0))(DAT_140c65670,8,0x12,1);
    if (puVar6 != (undefined8 *)0x0) {
        auVar13 = divps(ZEXT816(CONCAT44((float)*(int *)((longlong)param_1 + 0xc),(float)(int)param_1[1]
        )),_DAT_140b7b490);
        fVar12 = (SUB164(auVar13,0) - 0.5) * 65536.0;
        fVar14 = (SUB164(auVar13 >> 0x20,0) - 0.5) * 65536.0;
        _local_38 = CONCAT412(fVar14,CONCAT48(fVar12,CONCAT44(fVar14,fVar12))) &
                    (undefined  [16])0xffffffffffffffff;
        *puVar6 = local_38;
        (**(code **)(*DAT_140c65670 + 0xe8))();
    }
    (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,4,0,4,CONCAT44(uVar15,1));
    return 0;
}



longlong *
FUN_140385130(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
              uint *param_5)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined4 uVar7;
    undefined4 local_28 [4];

    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if ((*(byte *)param_5 & 3) != 0) {
        if ((param_5[2] != 0) && (local_28[0] = 0xffffffff, *(int *)(param_1 + 4) != 0xf)) {
            FUN_14037cb70(param_1,local_28);
        }
        plVar6 = (longlong *)0x0;
        if (((byte)*(undefined4 *)(param_1 + 4) & 3) == 3) {
            param_5._0_4_ = *param_4;
            param_5._4_4_ = param_4[1];
            plVar4 = (longlong *)FUN_140385390(param_1,param_2,param_3,&param_5,param_5);
            if (plVar4 != (longlong *)0x0) {
                uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
                param_4[1] = uVar7;
                plVar6 = plVar4;
            }
        }
    }
    if ((*(byte *)param_5 & 4) != 0) {
        if ((param_5[2] != 0) && (local_28[0] = 0xffffffff, param_1[0xb5] != 0)) {
            FUN_14037cc30(param_1,local_28);
        }
        if (((*(byte *)((longlong)param_1 + 0x24) & 0x80) != 0) && (param_1[0x81] != 0)) {
            do {
                lVar2 = *(longlong *)(param_1[0x82] + (longlong)plVar5 * 8);
                if ((lVar2 != 0) &&
                    (plVar4 = (longlong *)(*param_1 + 0x10e8), *(longlong *)(lVar2 + 0xe0) == 0)) {
                    *(longlong **)(lVar2 + 0xe0) = plVar4;
                    plVar1 = (longlong *)(lVar2 + 0xe8);
                    *plVar1 = *plVar4;
                    *plVar4 = lVar2;
                    if (*plVar1 != 0) {
                        *(longlong **)(*plVar1 + 0xe0) = plVar1;
                    }
                }
                plVar5 = (longlong *)(ulonglong)((int)plVar5 + 1);
            } while (plVar5 < (longlong *)param_1[0x81]);
        }
    }
    if ((*param_5 & 0x7f8) != 0) {
        if ((param_5[2] != 0) && (local_28[0] = 0xffffffff, param_1[0xb5] != 0)) {
            FUN_14037cc30(param_1,local_28);
        }
        if ((*(byte *)((longlong)param_1 + 0x24) & 0x10) != 0) {
            for (lVar2 = *(longlong *)(param_1[3] + 0x30); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)
                    ) {
                lVar3 = *(longlong *)(lVar2 + 8);
                if (*(longlong *)(lVar3 + 0x4d0) == 0) {
                    plVar5 = (longlong *)(lVar3 + 0x4d8);
                    plVar4 = (longlong *)(*param_1 + 0x13c0);
                    *(longlong **)(lVar3 + 0x4d0) = plVar4;
                    *plVar5 = *plVar4;
                    *plVar4 = lVar3;
                    if (*plVar5 != 0) {
                        *(longlong **)(*plVar5 + 0x4d0) = plVar5;
                    }
                }
            }
        }
    }
    if ((*param_5 & 0xf800) != 0) {
        for (lVar2 = *(longlong *)(param_1[3] + 0x40); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18))
        {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (*(longlong *)(lVar3 + 0x450) == 0) {
                plVar5 = (longlong *)(lVar3 + 0x458);
                plVar4 = (longlong *)(*param_1 + 0x14b0);
                *(longlong **)(lVar3 + 0x450) = plVar4;
                *plVar5 = *plVar4;
                *plVar4 = lVar3;
                if (*plVar5 != 0) {
                    *(longlong **)(*plVar5 + 0x450) = plVar5;
                }
            }
        }
    }
    return plVar6;
}



// WARNING: Removing unreachable block (ram,0x0001403855b2)
// WARNING: Removing unreachable block (ram,0x0001403855ab)
// WARNING: Could not reconcile some variable overlaps

longlong FUN_140385390(longlong param_1,float *param_2,float *param_3,float *param_4,
                       undefined8 param_5)

{
    bool bVar1;
    undefined auVar2 [12];
    int iVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined auVar15 [16];
    undefined auVar16 [16];
    int local_res8;
    int local_res10;
    uint local_res18;
    uint local_res1c;
    longlong *local_res20;
    float local_b8;
    float local_b4;
    float local_b0;
    float local_ac;
    undefined local_a8 [16];
    undefined local_98 [16];

    fVar13 = param_3[1];
    fVar11 = param_2[1];
    fVar9 = *(float *)(param_1 + 0xc4) - 0.5;
    bVar1 = fVar13 * param_4[1] + fVar11 < fVar9;
    if (fVar9 <= fVar13 * *param_4 + fVar11) {
        if (bVar1) {
            param_4[1] = (fVar9 - fVar11) / fVar13;
        }
    }
    else {
        if (bVar1) {
            return 0;
        }
        *param_4 = (fVar9 - fVar11) / fVar13;
    }
    fVar13 = param_3[1];
    fVar11 = param_2[1];
    fVar9 = *(float *)(param_1 + 0xd4) + 0.5;
    bVar1 = fVar9 < fVar13 * param_4[1] + fVar11;
    if (fVar13 * *param_4 + fVar11 <= fVar9) {
        if (bVar1) {
            param_4[1] = (fVar9 - fVar11) / fVar13;
        }
    }
    else {
        if (bVar1) {
            return 0;
        }
        *param_4 = (fVar9 - fVar11) / fVar13;
    }
    fVar14 = *param_3 * 16.0;
    fVar13 = param_4[1];
    auVar16 = ZEXT416((uint)fVar13);
    fVar12 = (*param_2 - (float)*(int *)(param_1 + 8)) * 16.0;
    fVar10 = (param_2[2] - (float)*(int *)(param_1 + 0xc)) * 16.0;
    fVar9 = param_3[2] * 16.0;
    local_98 = ZEXT1216(CONCAT48(fVar10,CONCAT44(param_2[1],fVar12)));
    fVar11 = *param_4;
    auVar2 = CONCAT48(fVar9,CONCAT44(param_3[1],fVar14)) & (undefined  [12])0xffffffffffffffff;
    local_a8 = ZEXT1216(auVar2);
    uVar7 = (uint)(fVar13 * fVar14 + fVar12);
    fVar12 = fVar11 * fVar14 + fVar12;
    uVar8 = (uint)(fVar13 * fVar9 + fVar10);
    uVar6 = (uint)fVar12;
    local_res1c = 0;
    if ((int)uVar6 < 0) {
        uVar6 = 0;
    }
    else if (0xf < uVar6) {
        uVar6 = 0xf;
    }
    uVar5 = 0;
    if ((int)uVar7 < 0) {
        uVar7 = 0;
    }
    else if (0xf < uVar7) {
        uVar7 = 0xf;
    }
    if ((int)uVar8 < 0) {
        uVar8 = 0;
    }
    else if (0xf < uVar8) {
        uVar8 = 0xf;
    }
    local_res10 = -1;
    local_a8._0_4_ = SUB124(auVar2,0);
    if ((int)uVar6 < (int)uVar7) {
        local_res8 = 1;
        local_a8._0_4_ = 1.0 / local_a8._0_4_;
        auVar15 = ZEXT416((uint)(((float)(uVar6 + 1) - fVar12) * local_a8._0_4_ + fVar11)) &
                  (undefined  [16])0xffffffffffffffff;
    }
    else if ((int)uVar7 < (int)uVar6) {
        local_res8 = -1;
        local_a8._0_4_ = -1.0 / local_a8._0_4_;
        auVar15 = CONCAT124(SUB1612(CONCAT412(fVar11 * 0.0 + 0.0,
                                              CONCAT48(fVar11 * fVar9 + fVar10,
                                                       CONCAT44(fVar11 * param_3[1] + param_2[1],fVar12)
                                              )) >> 0x20,0),
                            (fVar12 - (float)uVar6) * local_a8._0_4_ + fVar11);
    }
    else {
        local_res8 = 0;
        auVar15 = ZEXT416((uint)fVar13);
        local_a8._0_4_ = 0.0;
    }
    local_a8._8_4_ = SUB164(local_a8 >> 0x40,0);
    if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
            local_a8._8_4_ = -1.0 / local_a8._8_4_;
            auVar16 = ZEXT416((uint)(local_a8._8_4_ * 0.0 + fVar11)) & (undefined  [16])0xffffffffffffffff
                    ;
        }
        else {
            local_a8._8_4_ = 0.0;
            local_res10 = 0;
        }
    }
    else {
        local_a8._8_4_ = 1.0 / local_a8._8_4_;
        local_res10 = 1;
        auVar16 = ZEXT416((uint)(local_a8._8_4_ * 1.0 + fVar11)) & (undefined  [16])0xffffffffffffffff;
    }
    local_res18 = uVar6;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),0,&local_res20,1);
    if (-1 < iVar3) {
        fVar13 = *param_4;
        if (fVar13 < param_4[1]) {
            do {
                fVar11 = SUB164(auVar15,0);
                fVar9 = SUB164(auVar16,0);
                if (fVar9 <= fVar11) {
                    local_b0 = fVar13;
                    local_ac = fVar9;
                    fVar13 = fVar9;
                    lVar4 = FUN_140385840(param_1,local_res20,&local_res18,local_98,local_a8,&local_b0,param_5
                    );
                    if (lVar4 != 0) goto LAB_140385827;
                    uVar5 = uVar5 + local_res10;
                    fVar11 = param_4[1];
                    local_res1c = uVar5;
                    if (uVar5 == uVar8) {
                        auVar16 = ZEXT416((uint)fVar11);
                    }
                    else {
                        auVar16 = ZEXT416((uint)(fVar13 + local_a8._8_4_));
                        if (fVar11 <= fVar13 + local_a8._8_4_) {
                            auVar16 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
                        }
                    }
                }
                else {
                    local_b8 = fVar13;
                    local_b4 = fVar11;
                    fVar13 = fVar11;
                    lVar4 = FUN_140385840(param_1,local_res20,&local_res18,local_98,local_a8,&local_b8,param_5
                    );
                    if (lVar4 != 0) {
                        LAB_140385827:
                        (**(code **)(*local_res20 + 8))();
                        return lVar4;
                    }
                    uVar6 = uVar6 + local_res8;
                    fVar11 = param_4[1];
                    local_res18 = uVar6;
                    if (uVar6 == uVar7) {
                        auVar15 = ZEXT416((uint)fVar11);
                    }
                    else {
                        auVar15 = ZEXT416((uint)(fVar13 + local_a8._0_4_));
                        if (fVar11 <= fVar13 + local_a8._0_4_) {
                            auVar15 = ZEXT416((uint)fVar11) & (undefined  [16])0xffffffffffffffff;
                        }
                    }
                }
            } while (fVar13 < fVar11);
        }
        (**(code **)(*local_res20 + 8))();
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 *
FUN_140385840(longlong param_1,longlong *param_2,int *param_3,float *param_4,float *param_5,
              float *param_6,uint *param_7)

{
    float *pfVar1;
    float *pfVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    bool bVar7;
    undefined auVar8 [12];
    byte bVar9;
    uint uVar10;
    longlong lVar11;
    undefined8 *puVar12;
    byte bVar13;
    longlong lVar14;
    longlong lVar15;
    byte bVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined4 uVar28;
    undefined auVar29 [16];
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fStack272;
    float fStack256;
    undefined local_f8 [16];
    undefined local_e8 [176];

    lVar11 = (**(code **)(*param_2 + 0x10))(param_2);
    iVar3 = *(int *)(lVar11 + 0x2c);
    iVar4 = *param_3;
    iVar5 = *(int *)(lVar11 + 0x28);
    iVar6 = param_3[1];
    lVar11 = (**(code **)(*param_2 + 0x18))(param_2);
    if (((*(byte *)param_7 & 2) == 0) &&
        ((*(ushort *)(lVar11 + (iVar3 * iVar6 + iVar4 * iVar5)) & 0x8000) != 0)) {
        return (undefined8 *)0x0;
    }
    uVar10 = param_3[1] * 0x21 + *param_3;
    lVar11 = *(longlong *)(param_1 + 0x98);
    uVar18 = (ulonglong)(uVar10 + 1);
    fVar40 = *(float *)(lVar11 + 0xc + (ulonglong)uVar10 * 0x10);
    uVar17 = (ulonglong)(uVar10 + 0x11);
    fVar42 = *(float *)(lVar11 + 0xc + uVar18 * 0x10);
    lVar14 = (ulonglong)(uVar10 + 0x21) * 0x10;
    fVar43 = *(float *)(lVar11 + 0xc + uVar17 * 0x10);
    fVar41 = *(float *)(lVar14 + 0xc + lVar11);
    lVar15 = (ulonglong)(uVar10 + 0x22) * 0x10;
    fVar33 = *(float *)(lVar15 + 0xc + lVar11);
    fVar34 = fVar41;
    if (fVar33 <= fVar41) {
        fVar34 = fVar33;
    }
    fVar30 = fVar40;
    if (fVar42 <= fVar40) {
        fVar30 = fVar42;
    }
    fVar21 = param_5[1];
    if (fVar34 <= fVar30) {
        fVar30 = fVar34;
    }
    fVar34 = param_4[1];
    fVar30 = fVar30 - 0.5;
    bVar7 = fVar21 * param_6[1] + fVar34 < fVar30;
    if (fVar30 <= fVar21 * *param_6 + fVar34) {
        if (bVar7) {
            param_6[1] = (fVar30 - fVar34) / fVar21;
        }
    }
    else {
        if (bVar7) {
            return (undefined8 *)0x0;
        }
        *param_6 = (fVar30 - fVar34) / fVar21;
    }
    fVar34 = param_5[1];
    fVar30 = param_4[1];
    fVar21 = fVar40;
    if (fVar40 <= fVar42) {
        fVar21 = fVar42;
    }
    fVar20 = fVar41;
    if (fVar41 <= fVar33) {
        fVar20 = fVar33;
    }
    if (fVar21 <= fVar20) {
        fVar21 = fVar20;
    }
    fVar21 = fVar21 + 0.5;
    bVar7 = fVar21 < fVar34 * param_6[1] + fVar30;
    if (fVar34 * *param_6 + fVar30 <= fVar21) {
        if (bVar7) {
            param_6[1] = (fVar21 - fVar30) / fVar34;
        }
    }
    else {
        if (bVar7) {
            return (undefined8 *)0x0;
        }
        *param_6 = (fVar21 - fVar30) / fVar34;
    }
    fVar34 = *param_6;
    fVar30 = param_6[1];
    fVar35 = *param_4 - (float)*param_3;
    fVar21 = param_4[1];
    fVar37 = param_5[1] + fVar21;
    fVar38 = param_5[2] + (param_4[2] - (float)param_3[1]);
    fVar20 = SUB164(ZEXT1216(CONCAT48(param_4[2] - (float)param_3[1],
                                      SUB128(CONCAT84(SUB168((ZEXT816(0) << 0x20) >> 0x40,0),fVar21),0
                                      ) << 0x20) & (undefined  [12])0xffffffffffffffff) >> 0x40,
                    0);
    fVar22 = fVar20 - fVar35;
    fVar31 = (fVar35 + fVar20) - 1.0;
    fStack272 = fVar38 - (*param_5 + fVar35);
    fVar32 = (*param_5 + fVar35 + fVar38) - 1.0;
    auVar8 = CONCAT48(fStack272,CONCAT44(fVar37,fVar32));
    fVar35 = fVar32 - fVar31;
    fVar38 = fVar37 - fVar21;
    fVar19 = 0.0 - fVar22;
    fVar20 = 0.0;
    local_e8._0_8_ = CONCAT44(fVar38,fVar35);
    local_e8._0_16_ = ZEXT1216(CONCAT48(fVar19,local_e8._0_8_));
    local_f8 = ZEXT1216(CONCAT48(fVar19,CONCAT44(fVar38,fVar35)));
    bVar16 = (0.0 <= fVar34 * fVar35 + fVar31) + (0.0 <= fVar34 * fVar19 + fVar22) * '\x02';
    if (fVar34 < fVar30) {
        fVar36 = fVar35;
        fVar23 = fVar19;
        do {
            bVar13 = 0;
            bVar9 = (0.0 <= fVar30 * fVar35 + fVar31) + (0.0 <= fVar30 * fVar19 + fVar22) * '\x02' ^
                    bVar16;
            fVar39 = fVar30;
            if (((bVar9 & 1) != 0) &&
                (fVar24 = (float)((uint)(fVar31 / fVar35) ^ 0x80000000), fVar24 < fVar30)) {
                bVar13 = 1;
                fVar39 = fVar24;
            }
            if ((bVar9 & 2) != 0) {
                fStack256 = SUB164(ZEXT1216(CONCAT48(fVar22,CONCAT44(fVar21,fVar31))) >> 0x40,0);
                fVar24 = (float)((uint)(fStack256 / fVar19) ^ 0x80000000);
                if (fVar24 < fVar39) {
                    bVar13 = 2;
                    fVar39 = fVar24;
                }
            }
            if (bVar16 == 0) {
                fVar23 = fVar42 - fVar43;
                LAB_140385c7b:
                fVar36 = fVar40 - fVar43;
                LAB_140385c83:
                fVar20 = (float)((uint)fVar43 ^ 0x80000000);
                fVar38 = 1.0;
                fStack272 = SUB164(ZEXT1216(auVar8) >> 0x40,0);
            }
            else {
                if (bVar16 == 1) {
                    fVar36 = fVar43 - fVar33;
                    fVar23 = fVar42 - fVar43;
                    goto LAB_140385c83;
                }
                if (bVar16 == 2) {
                    fVar23 = fVar43 - fVar41;
                    goto LAB_140385c7b;
                }
                if (bVar16 == 3) {
                    fVar36 = fVar43 - fVar33;
                    fVar23 = fVar43 - fVar41;
                    goto LAB_140385c83;
                }
            }
            if (((*param_7 & 2) != 0) ||
                (0.0 < fVar36 * fVar31 + fVar38 * fVar21 + fVar23 * fVar22 + fVar20)) {
                fVar24 = (fVar31 - fVar32) * fVar36;
                fVar25 = (fVar21 - fVar37) * fVar38;
                fVar26 = (0.0 - fStack272) * fVar23;
                fVar27 = fVar24 + fVar25 + fVar26;
                auVar29 = CONCAT124(SUB1612(CONCAT412(fVar20 * 0.0,CONCAT48(fVar26,CONCAT44(fVar25,fVar24)))
                                                    >> 0x20,0),fVar27);
                if (((1e-05 <= (float)((uint)fVar27 & 0x7fffffff)) &&
                     (((fVar27 = (fVar36 * fVar31 + fVar38 * fVar21 + fVar23 * fVar22 + fVar20) / fVar27,
                             0.0 <= fVar27 && (fVar27 <= 1.0)) && (fVar34 <= fVar27)))) && (fVar27 < fVar39)) {
                    puVar12 = (undefined8 *)FUN_14018b280(0x100,0);
                    if (puVar12 == (undefined8 *)0x0) {
                        puVar12 = (undefined8 *)0x0;
                    }
                    else {
                        *(float *)((longlong)puVar12 + 0xc) = fVar27;
                        *(undefined4 *)(puVar12 + 1) = 1;
                        puVar12[2] = 0;
                        puVar12[3] = 0;
                        *puVar12 = &PTR_LAB_140b65fc8;
                    }
                    if (param_7[1] == 0) {
                        return puVar12;
                    }
                    fVar40 = *param_5 * fVar27 + *param_4;
                    fVar42 = param_5[1] * fVar27 + param_4[1];
                    fVar43 = param_5[2] * fVar27 + param_4[2];
                    if ((param_7[1] & 1) != 0) {
                        *(float *)(puVar12 + 8) = fVar42;
                    }
                    if ((*(byte *)(param_7 + 1) & 2) == 0) goto LAB_140385f30;
                    lVar11 = *(longlong *)(param_1 + 0x98);
                    fVar31 = local_e8._0_4_ * fVar27 + fVar31;
                    fVar21 = local_e8._4_4_ * fVar27 + fVar21;
                    if (bVar16 == 0) {
                        pfVar1 = (float *)(lVar11 + uVar17 * 0x10);
                        fVar41 = *pfVar1;
                        fVar33 = pfVar1[1];
                        fVar34 = pfVar1[2];
                        fVar30 = pfVar1[3];
                        pfVar1 = (float *)(lVar11 + uVar18 * 0x10);
                        fVar20 = fVar41 - *pfVar1;
                        fVar35 = fVar33 - pfVar1[1];
                        fVar38 = fVar34 - pfVar1[2];
                        fVar19 = fVar30 - pfVar1[3];
                        LAB_140385ed9:
                        pfVar1 = (float *)(lVar11 + (ulonglong)uVar10 * 0x10);
                        fVar22 = fVar41 - *pfVar1;
                        fVar32 = fVar33 - pfVar1[1];
                        fVar37 = fVar34 - pfVar1[2];
                        fVar36 = fVar30 - pfVar1[3];
                    }
                    else if (bVar16 == 1) {
                        pfVar1 = (float *)(lVar11 + uVar17 * 0x10);
                        fVar41 = *pfVar1;
                        fVar33 = pfVar1[1];
                        fVar34 = pfVar1[2];
                        fVar30 = pfVar1[3];
                        pfVar1 = (float *)(lVar11 + lVar15);
                        pfVar2 = (float *)(lVar11 + uVar18 * 0x10);
                        fVar20 = fVar41 - *pfVar2;
                        fVar35 = fVar33 - pfVar2[1];
                        fVar38 = fVar34 - pfVar2[2];
                        fVar19 = fVar30 - pfVar2[3];
                        fVar22 = *pfVar1 - fVar41;
                        fVar32 = pfVar1[1] - fVar33;
                        fVar37 = pfVar1[2] - fVar34;
                        fVar36 = pfVar1[3] - fVar30;
                    }
                    else {
                        if (bVar16 == 2) {
                            pfVar1 = (float *)(lVar11 + uVar17 * 0x10);
                            fVar41 = *pfVar1;
                            fVar33 = pfVar1[1];
                            fVar34 = pfVar1[2];
                            fVar30 = pfVar1[3];
                            pfVar1 = (float *)(lVar11 + lVar14);
                            fVar20 = *pfVar1 - fVar41;
                            fVar35 = pfVar1[1] - fVar33;
                            fVar38 = pfVar1[2] - fVar34;
                            fVar19 = pfVar1[3] - fVar30;
                            goto LAB_140385ed9;
                        }
                        if (bVar16 != 3) goto LAB_140385f30;
                        pfVar1 = (float *)(lVar11 + uVar17 * 0x10);
                        fVar41 = *pfVar1;
                        fVar33 = pfVar1[1];
                        fVar34 = pfVar1[2];
                        fVar30 = pfVar1[3];
                        pfVar1 = (float *)(lVar11 + lVar14);
                        fVar20 = *pfVar1 - fVar41;
                        fVar35 = pfVar1[1] - fVar33;
                        fVar38 = pfVar1[2] - fVar34;
                        fVar19 = pfVar1[3] - fVar30;
                        pfVar1 = (float *)(lVar11 + lVar15);
                        fVar22 = *pfVar1 - fVar41;
                        fVar32 = pfVar1[1] - fVar33;
                        fVar37 = pfVar1[2] - fVar34;
                        fVar36 = pfVar1[3] - fVar30;
                    }
                    fVar20 = fVar20 * fVar21 + fVar22 * fVar31 + fVar41;
                    fVar33 = fVar35 * fVar21 + fVar32 * fVar31 + fVar33;
                    fVar34 = fVar38 * fVar21 + fVar37 * fVar31 + fVar34;
                    fVar30 = fVar19 * fVar21 + fVar36 * fVar31 + fVar30;
                    auVar29 = CONCAT124(SUB1612(CONCAT412(fVar30 * fVar30,
                                                          CONCAT48(fVar34 * fVar34,
                                                                   CONCAT44(fVar33 * fVar33,fVar20 * fVar20)))
                                                        >> 0x20,0),fVar20 * fVar20 + fVar33 * fVar33 + fVar34 * fVar34
                    );
                    auVar29 = rsqrtss(auVar29,auVar29);
                    fVar41 = SUB164(auVar29,0);
                    auVar29 = CONCAT412(fVar41 * fVar30,
                                        CONCAT48(fVar41 * fVar34,CONCAT44(fVar41 * fVar33,fVar41 * fVar20)));
                    *(undefined (*) [16])(puVar12 + 4) = auVar29;
                    LAB_140385f30:
                    uVar28 = SUB164(auVar29,0);
                    fVar41 = fVar40;
                    fVar33 = fVar43;
                    if ((*(byte *)(param_7 + 1) & 0xc) != 0) {
                        local_e8._0_8_ = CONCAT44(fVar43 * 0.0625,fVar40 * 0.0625);
                        local_e8._0_16_ = ZEXT816(local_e8._0_8_);
                        FUN_140387270(param_1,local_e8,puVar12 + 4);
                    }
                    if ((*(byte *)(param_7 + 1) & 0x10) != 0) {
                        local_e8._0_8_ = CONCAT44(fVar33 * 0.0625,fVar41 * 0.0625);
                        local_e8._0_16_ = ZEXT816(local_e8._0_8_);
                        FUN_140387600(param_1,local_e8,puVar12 + 4);
                    }
                    if ((*(byte *)(param_7 + 1) & 0x20) != 0) {
                        local_e8._0_16_ = ZEXT1216(CONCAT48(fVar41 * 0.0625,(ulonglong)(uint)(fVar41 * 0.0625)))
                                ;
                        FUN_140387780(param_1,local_e8,puVar12 + 4);
                    }
                    if ((param_7[1] & 0x1fc0) == 0) {
                        return puVar12;
                    }
                    local_f8 = CONCAT412(uVar28,CONCAT48(fVar43 * DAT_140c44574 + *(float *)(param_1 + 200),
                                                         CONCAT44(fVar42,fVar40 * DAT_140c44574 +
                                                                         *(float *)(param_1 + 0xc0)))) &
                               (undefined  [16])0xffffffffffffffff;
                    FUN_140387910(param_1,local_f8,puVar12 + 4);
                    if ((param_7[1] & 0x7e000) == 0) {
                        return puVar12;
                    }
                    FUN_140388a30(param_1,local_f8,puVar12 + 4);
                    return puVar12;
                }
            }
            bVar16 = bVar16 ^ bVar13;
            fVar34 = fVar39;
        } while (fVar39 < fVar30);
    }
    return (undefined8 *)0x0;
}



void FUN_140386040(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    (**(code **)*param_2)(param_2);
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar1 = lVar2 + 1;
    lVar3 = FUN_14018db00(*(undefined8 *)(param_1 + 0x48),lVar1,8);
    *(undefined8 **)(lVar3 + lVar2 * 8) = param_2;
    if (*(longlong *)(param_1 + 0x48) != lVar3) {
        FUN_1407db590(lVar3,*(longlong *)(param_1 + 0x48),*(longlong *)(param_1 + 0x50) << 3);
        lVar2 = *(longlong *)(param_1 + 0x48);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong *)(param_1 + 0x48) = lVar3;
    }
    *(longlong *)(param_1 + 0x50) = lVar1;
    return;
}



undefined8 FUN_1403860e0(undefined8 *param_1)

{
    ulonglong uVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    float fVar5;
    longlong *local_res8;
    undefined4 local_res10;
    undefined4 local_res14;

    uVar1 = param_1[10];
    if (uVar1 == 0) {
        return param_1[0xb];
    }
    FUN_14038a050(param_1,param_1[9],uVar1);
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            local_res14 = *(undefined4 *)(param_1 + 2);
            local_res8 = (longlong *)0x0;
            plVar2 = *(longlong **)(param_1[9] + uVar4 * 8);
            local_res10 = 0;
            iVar3 = (**(code **)(*plVar2 + 0x70))
                    (plVar2,*param_1,param_1[1],&local_res10,&local_res8,param_1 + 3);
            if (((iVar3 != 0) &&
                 (fVar5 = (float)(**(code **)(*local_res8 + 0x10))(), fVar5 < *(float *)(param_1 + 2))) &&
                (*(float *)(param_1 + 2) = fVar5, (longlong *)param_1[0xb] != local_res8)) {
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)*local_res8)();
                }
                plVar2 = (longlong *)param_1[0xb];
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 8))(plVar2);
                }
                param_1[0xb] = local_res8;
            }
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
        return param_1[0xb];
    }
    return param_1[0xb];
}



ulonglong FUN_140386220(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = (**(code **)(*param_1 + 0x50))(param_1,2);
    lVar2 = (**(code **)(*param_2 + 0x50))(param_2,2);
    if (*(float *)(lVar2 + 0x14) < *(float *)(lVar1 + 0x14)) {
        return 0xffffffff;
    }
    return (ulonglong)(*(float *)(lVar1 + 0x14) < *(float *)(lVar2 + 0x14));
}



// WARNING: Removing unreachable block (ram,0x000140386981)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140386280(longlong *param_1,float *param_2,float *param_3,uint param_4,longlong *param_5)

{
    ulonglong *puVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;
    DWORD DVar5;
    int iVar6;
    longlong lVar7;
    float *pfVar8;
    HANDLE pvVar9;
    longlong lVar10;
    longlong *plVar11;
    ulonglong uVar12;
    uint uVar13;
    int iVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    float fVar17;
    float fVar19;
    undefined auVar18 [16];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    undefined in_XMM7 [16];
    float fVar27;
    uint local_res8;
    int local_res10;
    int local_res14;
    float *local_res18;
    uint local_res20;
    undefined4 local_430;
    undefined4 local_42c;
    undefined4 local_428;
    undefined4 local_424;
    int local_420;
    int local_41c;
    float *local_418;
    undefined *local_410;
    float local_408;
    undefined4 local_400;
    uint local_3fc;
    undefined4 local_3f8;
    undefined8 local_3f0;
    undefined8 local_3e8;
    undefined4 local_3e0;
    undefined8 local_3d8;
    longlong local_3d0;
    ulonglong local_3c8;
    longlong *local_3c0;
    float local_3a8;
    float fStack932;
    float fStack928;
    float fStack924;
    undefined local_398 [16];
    undefined local_388 [16];
    undefined4 local_378 [4];
    undefined4 local_368 [4];
    undefined4 local_358 [4];
    undefined4 local_348;
    int *local_338;
    undefined4 *local_330;
    int *local_320;
    undefined4 *local_318;
    float local_308;
    float fStack772;
    float fStack768;
    float fStack764;
    float local_2f8;
    float fStack756;
    float fStack752;
    float fStack748;
    undefined local_2e8 [16];
    float local_2d8;
    float fStack724;
    float fStack720;
    float fStack716;
    undefined local_2c8 [16];
    float local_2b8;
    float fStack692;
    float fStack688;
    float fStack684;
    undefined local_2a8 [16];
    float local_298;
    float fStack660;
    float fStack656;
    float fStack652;
    undefined local_288 [16];
    float local_278;
    float fStack628;
    float fStack624;
    float fStack620;
    float local_268;
    float fStack612;
    float fStack608;
    float fStack604;
    float local_258;
    float fStack596;
    float fStack592;
    float fStack588;
    float local_248;
    float fStack580;
    float fStack576;
    float fStack572;
    float local_238;
    float fStack564;
    float fStack560;
    float fStack556;
    float local_228;
    float fStack548;
    float fStack544;
    float fStack540;
    float local_218;
    float fStack532;
    float fStack528;
    float fStack524;
    float local_208;
    float fStack516;
    float fStack512;
    float fStack508;
    float local_1f8;
    float fStack500;
    float fStack496;
    float fStack492;
    float local_1e8;
    float fStack484;
    float fStack480;
    float fStack476;
    float local_1d8;
    float fStack468;
    float fStack464;
    float fStack460;
    float local_1c8;
    float fStack452;
    float fStack448;
    float fStack444;
    float local_1b8;
    float fStack436;
    float fStack432;
    float fStack428;
    undefined local_1a8 [16];
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    undefined local_188 [16];
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
    float local_148;
    float fStack324;
    float fStack320;
    float fStack316;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    undefined local_128 [16];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    float local_c8;
    float fStack196;
    float fStack192;
    float fStack188;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;
    undefined local_a8 [16];
    float local_98;
    float fStack148;
    float fStack144;
    float fStack140;

    uVar15 = 0;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_1[0xb5] != 0) {
        lVar7 = *param_1;
        DVar5 = GetCurrentThreadId();
        uVar12 = uVar15;
        if (*(DWORD *)(lVar7 + 0x30) == DVar5) {
            *(longlong *)(lVar7 + 0x38) = *(longlong *)(lVar7 + 0x38) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar7 + 0x38);
                uVar16 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar16 == 0) * (*puVar1 ^ 1);
                if (uVar16 == 0) {
                    *(DWORD *)(lVar7 + 0x30) = DVar5;
                    goto LAB_140386326;
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 < 0x400);
            FUN_14019fb60(lVar7 + 0x30);
        }
        LAB_140386326:
        local_348 = 0xffffffff;
        if (param_1[0xb5] != 0) {
            FUN_14037cc30(param_1);
        }
        if (*(ulonglong *)(lVar7 + 0x38) < 2) {
            *(undefined4 *)(lVar7 + 0x30) = 0;
            *(undefined8 *)(lVar7 + 0x38) = 0;
            if (*(longlong *)(lVar7 + 0x40) != 0) {
                if (*(longlong *)(lVar7 + 0x48) == 0) {
                    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar7 + 0x48);
                    uVar12 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar9);
                    if (uVar12 != 0) {
                        CloseHandle(pvVar9);
                    }
                }
                SetEvent(*(HANDLE *)(lVar7 + 0x48));
            }
        }
        else {
            *(longlong *)(lVar7 + 0x38) = *(longlong *)(lVar7 + 0x38) + -1;
        }
    }
    fVar24 = 0.0;
    fVar27 = 1.0;
    local_398 = ZEXT1216(CONCAT48(param_2[2],CONCAT44(DAT_140c7aca4,*param_2)));
    local_res8 = param_4;
    if ((*(float *)((longlong)param_1 + 0xc4) < param_2[1] ||
         *(float *)((longlong)param_1 + 0xc4) == param_2[1]) &&
        (iVar6 = (**(code **)(*(longlong *)param_1[2] + 0x48))(), -1 < iVar6)) {
        local_d8 = *param_2;
        fStack212 = param_2[2];
        local_338 = &local_420;
        local_330 = &local_428;
        local_428 = 0x7ff;
        local_424 = 0x7ff;
        local_168 = 0x3f000000;
        uStack356 = 0x3f000000;
        uStack352 = 0x3f000000;
        uStack348 = 0x3f000000;
        local_2c8 = in_XMM7 & (undefined  [16])0x0;
        local_320 = &local_res10;
        local_318 = &local_430;
        local_b8 = local_d8 * DAT_140c44580;
        fStack180 = fStack212 * DAT_140c44580;
        fStack176 = local_d8 * DAT_140c44580;
        fStack172 = fStack212 * DAT_140c44580;
        local_98 = local_b8 + 0.5;
        fStack148 = fStack180 + 0.5;
        fStack144 = fStack176 + 0.5;
        fStack140 = fStack172 + 0.5;
        local_2e8 = _DAT_140b7b490;
        local_128 = minps(CONCAT412(fStack140 * SUB164(_DAT_140b7b490 >> 0x60,0),
                                    CONCAT48(fStack144 * SUB164(_DAT_140b7b490 >> 0x40,0),
                                             CONCAT44(fStack148 * SUB164(_DAT_140b7b490 >> 0x20,0),
                                                      local_98 * SUB164(_DAT_140b7b490,0)))),
                          _DAT_140b7b490);
        local_2a8 = maxps(local_2c8,local_128);
        local_420 = (int)SUB164(local_2a8,0);
        fStack932 = SUB164(local_2a8 >> 0x20,0);
        if (0x7ff < local_420) {
            local_420 = 0x7ff;
        }
        local_41c = (int)fStack932;
        if (0x7ff < local_41c) {
            local_41c = 0x7ff;
        }
        local_430 = 0xf;
        local_42c = 0xf;
        local_a8 = ZEXT816(CONCAT44((float)local_41c,(float)local_420));
        local_3a8 = SUB164(local_2a8,0) - (float)local_420;
        fStack932 = fStack932 - (float)local_41c;
        fStack928 = SUB164(local_2a8 >> 0x40,0) - 0.0;
        fStack924 = SUB164(local_2a8 >> 0x60,0) - 0.0;
        fVar26 = fStack932 * 16.0;
        auVar18 = CONCAT412(fStack924 * 16.0,
                            CONCAT48(fStack928 * 16.0,CONCAT44(fVar26,local_3a8 * 16.0)));
        local_res10 = (int)(local_3a8 * 16.0);
        local_res14 = (int)fVar26;
        if (0xf < local_res10) {
            local_res10 = 0xf;
        }
        if (0xf < local_res14) {
            local_res14 = 0xf;
        }
        local_288 = auVar18;
        local_1a8 = local_2a8;
        fStack208 = local_d8;
        fStack204 = fStack212;
        lVar7 = (**(code **)(_DAT_00000000 + 0x10))();
        fVar25 = SUB164(auVar18,0);
        iVar6 = *(int *)(lVar7 + 0x28) * local_res10;
        iVar14 = *(int *)(lVar7 + 0x2c) * local_res14;
        lVar7 = (**(code **)(_DAT_00000000 + 0x18))();
        if ((*(ushort *)(lVar7 + (iVar14 + iVar6)) & 0x8000) == 0) {
            uVar13 = local_res14 * 0x21 + local_res10;
            lVar7 = param_1[0x13];
            uVar12 = (ulonglong)uVar13;
            fVar25 = fVar25 - (float)local_res10;
            fVar26 = fVar26 - (float)local_res14;
            fVar19 = *(float *)(lVar7 + 0xc + uVar12 * 0x10);
            uVar16 = (ulonglong)(uVar13 + 0x22);
            local_188 = CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar26,fVar25)));
            fVar2 = *(float *)(lVar7 + 0xc + (ulonglong)(uVar13 + 0x11) * 0x10);
            fVar17 = fVar26 - fVar25;
            fVar3 = *(float *)(lVar7 + 0xc + uVar16 * 0x10);
            fVar25 = (fVar25 + fVar26) - fVar27;
            fVar26 = *(float *)(lVar7 + 0xc + (ulonglong)(uVar13 + 1) * 0x10);
            local_388 = CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar17,fVar25)));
            if (fVar24 <= fVar17) {
                if (fVar24 <= fVar25) {
                    fVar19 = fVar3 - fVar2;
                }
                else {
                    fVar19 = fVar2 - fVar19;
                }
                fVar26 = fVar19 * fVar25 + fVar2 +
                         (*(float *)(lVar7 + 0xc + (ulonglong)(uVar13 + 0x21) * 0x10) - fVar2) * fVar17;
            }
            else if (fVar24 <= fVar25) {
                fVar26 = (fVar3 - fVar2) * fVar25 + fVar2 + (fVar2 - fVar26) * fVar17;
            }
            else {
                fVar26 = (fVar2 - fVar19) * fVar25 + fVar2 + (fVar2 - fVar26) * fVar17;
            }
            fVar19 = param_2[1];
            if (fVar26 <= fVar19) {
                fVar27 = (fVar26 - fVar19) / (local_398._4_4_ - fVar19);
                if ((param_4 & 1) != 0) {
                    param_3[8] = fVar26;
                }
                if ((param_4 & 2) != 0) {
                    lVar7 = param_1[0x13];
                    pfVar8 = (float *)(lVar7 + (ulonglong)(uVar13 + 0x11) * 0x10);
                    fVar26 = *pfVar8;
                    fVar19 = pfVar8[1];
                    fVar2 = pfVar8[2];
                    fVar3 = pfVar8[3];
                    if (fVar24 <= fVar17) {
                        pfVar8 = (float *)(lVar7 + (ulonglong)(uVar13 + 0x21) * 0x10);
                        fVar20 = *pfVar8 - fVar26;
                        fVar21 = pfVar8[1] - fVar19;
                        fVar22 = pfVar8[2] - fVar2;
                        fVar23 = pfVar8[3] - fVar3;
                        if (fVar24 <= fVar25) {
                            pfVar8 = (float *)(lVar7 + uVar16 * 0x10);
                            local_198 = fVar20 * fVar17;
                            fStack404 = fVar21 * fVar17;
                            fStack400 = fVar22 * fVar17;
                            fStack396 = fVar23 * fVar17;
                            local_178 = *pfVar8 - fVar26;
                            fStack372 = pfVar8[1] - fVar19;
                            fStack368 = pfVar8[2] - fVar2;
                            fStack364 = pfVar8[3] - fVar3;
                            local_158 = local_178 * fVar25;
                            fStack340 = fStack372 * fVar25;
                            fStack336 = fStack368 * fVar25;
                            fStack332 = fStack364 * fVar25;
                            local_138 = local_158 + fVar26;
                            fStack308 = fStack340 + fVar19;
                            fStack304 = fStack336 + fVar2;
                            fStack300 = fStack332 + fVar3;
                            local_118 = local_198 + local_138;
                            fStack276 = fStack404 + fStack308;
                            fStack272 = fStack400 + fStack304;
                            fStack268 = fStack396 + fStack300;
                            auVar18 = CONCAT124(SUB1612(CONCAT412(fStack268 * fStack268,
                                                                  CONCAT48(fStack272 * fStack272,
                                                                           CONCAT44(fStack276 * fStack276,
                                                                                    local_118 * local_118))) >>
                                                                                                             0x20,0),
                                                local_118 * local_118 + fStack276 * fStack276 +
                                                fStack272 * fStack272);
                            auVar18 = rsqrtss(auVar18,auVar18);
                            fVar24 = SUB164(auVar18,0);
                            fVar26 = fVar24 * local_118;
                            fVar25 = fVar24 * fStack276;
                            fVar19 = fVar24 * fStack272;
                            fVar24 = fVar24 * fStack268;
                            local_1b8 = fVar20;
                            fStack436 = fVar21;
                            fStack432 = fVar22;
                            fStack428 = fVar23;
                            local_f8 = fVar26;
                            fStack244 = fVar25;
                            fStack240 = fVar19;
                            fStack236 = fVar24;
                        }
                        else {
                            local_278 = fVar20 * fVar17;
                            fStack628 = fVar21 * fVar17;
                            fStack624 = fVar22 * fVar17;
                            fStack620 = fVar23 * fVar17;
                            pfVar8 = (float *)(lVar7 + uVar12 * 0x10);
                            local_258 = fVar26 - *pfVar8;
                            fStack596 = fVar19 - pfVar8[1];
                            fStack592 = fVar2 - pfVar8[2];
                            fStack588 = fVar3 - pfVar8[3];
                            local_238 = local_258 * fVar25;
                            fStack564 = fStack596 * fVar25;
                            fStack560 = fStack592 * fVar25;
                            fStack556 = fStack588 * fVar25;
                            local_218 = local_238 + fVar26;
                            fStack532 = fStack564 + fVar19;
                            fStack528 = fStack560 + fVar2;
                            fStack524 = fStack556 + fVar3;
                            local_1f8 = local_278 + local_218;
                            fStack500 = fStack628 + fStack532;
                            fStack496 = fStack624 + fStack528;
                            fStack492 = fStack620 + fStack524;
                            auVar18 = CONCAT124(SUB1612(CONCAT412(fStack492 * fStack492,
                                                                  CONCAT48(fStack496 * fStack496,
                                                                           CONCAT44(fStack500 * fStack500,
                                                                                    local_1f8 * local_1f8))) >>
                                                                                                             0x20,0),
                                                local_1f8 * local_1f8 + fStack500 * fStack500 +
                                                fStack496 * fStack496);
                            auVar18 = rsqrtss(auVar18,auVar18);
                            fVar24 = SUB164(auVar18,0);
                            fVar26 = fVar24 * local_1f8;
                            fVar25 = fVar24 * fStack500;
                            fVar19 = fVar24 * fStack496;
                            fVar24 = fVar24 * fStack492;
                            local_298 = fVar20;
                            fStack660 = fVar21;
                            fStack656 = fVar22;
                            fStack652 = fVar23;
                            local_1d8 = fVar26;
                            fStack468 = fVar25;
                            fStack464 = fVar19;
                            fStack460 = fVar24;
                        }
                    }
                    else {
                        pfVar8 = (float *)(lVar7 + (ulonglong)(uVar13 + 1) * 0x10);
                        fVar20 = fVar26 - *pfVar8;
                        fVar21 = fVar19 - pfVar8[1];
                        fVar22 = fVar2 - pfVar8[2];
                        fVar23 = fVar3 - pfVar8[3];
                        if (fVar24 <= fVar25) {
                            pfVar8 = (float *)(lVar7 + uVar16 * 0x10);
                            local_1e8 = fVar20 * fVar17;
                            fStack484 = fVar21 * fVar17;
                            fStack480 = fVar22 * fVar17;
                            fStack476 = fVar23 * fVar17;
                            local_e8 = *pfVar8 - fVar26;
                            fStack228 = pfVar8[1] - fVar19;
                            fStack224 = pfVar8[2] - fVar2;
                            fStack220 = pfVar8[3] - fVar3;
                            local_1c8 = local_e8 * fVar25;
                            fStack452 = fStack228 * fVar25;
                            fStack448 = fStack224 * fVar25;
                            fStack444 = fStack220 * fVar25;
                            local_2f8 = local_1c8 + fVar26;
                            fStack756 = fStack452 + fVar19;
                            fStack752 = fStack448 + fVar2;
                            fStack748 = fStack444 + fVar3;
                            local_2d8 = local_1e8 + local_2f8;
                            fStack724 = fStack484 + fStack756;
                            fStack720 = fStack480 + fStack752;
                            fStack716 = fStack476 + fStack748;
                            auVar18 = CONCAT124(SUB1612(CONCAT412(fStack716 * fStack716,
                                                                  CONCAT48(fStack720 * fStack720,
                                                                           CONCAT44(fStack724 * fStack724,
                                                                                    local_2d8 * local_2d8))) >>
                                                                                                             0x20,0),
                                                local_2d8 * local_2d8 + fStack724 * fStack724 +
                                                fStack720 * fStack720);
                            auVar18 = rsqrtss(auVar18,auVar18);
                            fVar24 = SUB164(auVar18,0);
                            fVar26 = fVar24 * local_2d8;
                            fVar25 = fVar24 * fStack724;
                            fVar19 = fVar24 * fStack720;
                            fVar24 = fVar24 * fStack716;
                            local_2b8 = fVar26;
                            fStack692 = fVar25;
                            fStack688 = fVar19;
                            fStack684 = fVar24;
                            local_148 = fVar20;
                            fStack324 = fVar21;
                            fStack320 = fVar22;
                            fStack316 = fVar23;
                        }
                        else {
                            local_108 = fVar20 * fVar17;
                            fStack260 = fVar21 * fVar17;
                            fStack256 = fVar22 * fVar17;
                            fStack252 = fVar23 * fVar17;
                            pfVar8 = (float *)(lVar7 + uVar12 * 0x10);
                            local_248 = fVar26 - *pfVar8;
                            fStack580 = fVar19 - pfVar8[1];
                            fStack576 = fVar2 - pfVar8[2];
                            fStack572 = fVar3 - pfVar8[3];
                            local_308 = local_248 * fVar25;
                            fStack772 = fStack580 * fVar25;
                            fStack768 = fStack576 * fVar25;
                            fStack764 = fStack572 * fVar25;
                            local_228 = local_308 + fVar26;
                            fStack548 = fStack772 + fVar19;
                            fStack544 = fStack768 + fVar2;
                            fStack540 = fStack764 + fVar3;
                            local_c8 = local_108 + local_228;
                            fStack196 = fStack260 + fStack548;
                            fStack192 = fStack256 + fStack544;
                            fStack188 = fStack252 + fStack540;
                            auVar18 = CONCAT124(SUB1612(CONCAT412(fStack188 * fStack188,
                                                                  CONCAT48(fStack192 * fStack192,
                                                                           CONCAT44(fStack196 * fStack196,
                                                                                    local_c8 * local_c8))) >> 0x20
                                                        ,0),
                                                local_c8 * local_c8 + fStack196 * fStack196 +
                                                fStack192 * fStack192);
                            auVar18 = rsqrtss(auVar18,auVar18);
                            fVar24 = SUB164(auVar18,0);
                            fVar26 = fVar24 * local_c8;
                            fVar25 = fVar24 * fStack196;
                            fVar19 = fVar24 * fStack192;
                            fVar24 = fVar24 * fStack188;
                            local_268 = fVar20;
                            fStack612 = fVar21;
                            fStack608 = fVar22;
                            fStack604 = fVar23;
                            local_208 = fVar26;
                            fStack516 = fVar25;
                            fStack512 = fVar19;
                            fStack508 = fVar24;
                        }
                    }
                    *param_3 = fVar26;
                    param_3[1] = fVar25;
                    param_3[2] = fVar19;
                    param_3[3] = fVar24;
                }
                if ((param_4 & 0xc) != 0) {
                    FUN_140387270(param_1);
                }
                if ((param_4 & 0x10) != 0) {
                    FUN_140387600(param_1);
                }
                if ((param_4 >> 0x13 & 1) != 0) {
                    param_3[0xf] = 0.0;
                }
            }
        }
        if ((param_4 & 0x20) != 0) {
            FUN_140387780(param_1);
            local_res8 = param_4 & 0xffffffdf;
        }
    }
    local_410 = local_398;
    local_400 = 0x4041;
    local_3fc = param_4 & 0x8003f;
    local_3f8 = 0;
    local_3f0 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3c8 = 0;
    local_3d0 = 0;
    local_3c0 = (longlong *)0x0;
    local_418 = param_2;
    local_408 = fVar27;
    if (*(float *)((longlong)param_1 + 0x394) < param_2[1] ||
        *(float *)((longlong)param_1 + 0x394) == param_2[1]) {
        for (lVar7 = *(longlong *)(param_1[3] + 0x30); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x18))
        {
            // WARNING: Read-only address (ram,0x000140b7b490) is written
            plVar11 = *(longlong **)(lVar7 + 8);
            iVar6 = (**(code **)(*plVar11 + 0x120))();
            if ((iVar6 != 0) && (plVar11 != param_5)) {
                if (*(int *)((longlong)plVar11 + 0x4c) == 0) {
                    lVar4 = *param_1;
                    DVar5 = GetCurrentThreadId();
                    uVar12 = uVar15;
                    if (*(DWORD *)(lVar4 + 0x30) == DVar5) {
                        *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
                    }
                    else {
                        do {
                            LOCK();
                            puVar1 = (ulonglong *)(lVar4 + 0x38);
                            uVar16 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar16 == 0) * (*puVar1 ^ 1);
                            if (uVar16 == 0) {
                                *(DWORD *)(lVar4 + 0x30) = DVar5;
                                goto LAB_140386a78;
                            }
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < 0x400);
                        FUN_14019fb60(lVar4 + 0x30);
                    }
                    LAB_140386a78:
                    local_368[0] = 0xffffffff;
                    (**(code **)(*plVar11 + 0x20))(plVar11,local_368);
                    if (*(ulonglong *)(lVar4 + 0x38) < 2) {
                        *(undefined4 *)(lVar4 + 0x30) = 0;
                        *(undefined8 *)(lVar4 + 0x38) = 0;
                        if (*(longlong *)(lVar4 + 0x40) != 0) {
                            if (*(longlong *)(lVar4 + 0x48) == 0) {
                                pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                                LOCK();
                                puVar1 = (ulonglong *)(lVar4 + 0x48);
                                uVar12 = *puVar1;
                                *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar9);
                                if (uVar12 != 0) {
                                    CloseHandle(pvVar9);
                                }
                            }
                            SetEvent(*(HANDLE *)(lVar4 + 0x48));
                        }
                    }
                    else {
                        *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + -1;
                    }
                }
                pfVar8 = (float *)(**(code **)(*plVar11 + 0x50))(plVar11);
                fVar24 = *param_2;
                if ((((*pfVar8 <= fVar24) && (fVar24 < pfVar8[4] || fVar24 == pfVar8[4])) &&
                     (pfVar8[1] < param_2[1] || pfVar8[1] == param_2[1])) &&
                    ((fVar24 = param_2[2], pfVar8[2] <= fVar24 && (fVar24 < pfVar8[6] || fVar24 == pfVar8[6])
                    ))) {
                    FUN_140386040(&local_418);
                }
            }
        }
    }
    for (plVar11 = *(longlong **)(*param_1 + 0x1488); plVar11 != (longlong *)0x0;
         plVar11 = (longlong *)plVar11[0x81]) {
        // WARNING: Read-only address (ram,0x000140b7b490) is written
        iVar6 = (**(code **)(*plVar11 + 0x120))();
        if ((iVar6 != 0) && (plVar11 != param_5)) {
            if (plVar11[0x92] != 0) {
                lVar7 = *param_1;
                DVar5 = GetCurrentThreadId();
                uVar12 = uVar15;
                if (*(DWORD *)(lVar7 + 0x30) == DVar5) {
                    *(longlong *)(lVar7 + 0x38) = *(longlong *)(lVar7 + 0x38) + 1;
                }
                else {
                    do {
                        LOCK();
                        puVar1 = (ulonglong *)(lVar7 + 0x38);
                        uVar16 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar16 == 0) * (*puVar1 ^ 1);
                        if (uVar16 == 0) {
                            *(DWORD *)(lVar7 + 0x30) = DVar5;
                            goto LAB_140386bcc;
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < 0x400);
                    FUN_14019fb60(lVar7 + 0x30);
                }
                LAB_140386bcc:
                local_358[0] = 0xffffffff;
                (**(code **)(*plVar11 + 0x20))(plVar11,local_358);
                if (*(ulonglong *)(lVar7 + 0x38) < 2) {
                    *(undefined4 *)(lVar7 + 0x30) = 0;
                    *(undefined8 *)(lVar7 + 0x38) = 0;
                    if (*(longlong *)(lVar7 + 0x40) != 0) {
                        if (*(longlong *)(lVar7 + 0x48) == 0) {
                            pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                            LOCK();
                            puVar1 = (ulonglong *)(lVar7 + 0x48);
                            uVar12 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar9);
                            if (uVar12 != 0) {
                                CloseHandle(pvVar9);
                            }
                        }
                        SetEvent(*(HANDLE *)(lVar7 + 0x48));
                    }
                }
                else {
                    *(longlong *)(lVar7 + 0x38) = *(longlong *)(lVar7 + 0x38) + -1;
                }
            }
            pfVar8 = (float *)(**(code **)(*plVar11 + 0x50))(plVar11);
            fVar24 = *param_2;
            if ((((*pfVar8 <= fVar24) && (fVar24 < pfVar8[4] || fVar24 == pfVar8[4])) &&
                 (pfVar8[1] < param_2[1] || pfVar8[1] == param_2[1])) &&
                ((fVar24 = param_2[2], pfVar8[2] <= fVar24 && (fVar24 < pfVar8[6] || fVar24 == pfVar8[6])))
                    ) {
                FUN_140386040(&local_418);
            }
        }
    }
    // WARNING: Read-only address (ram,0x000140b7b490) is written
    lVar7 = *(longlong *)(param_1[3] + 0x40);
    do {
        if (lVar7 == 0) {
            plVar11 = (longlong *)FUN_1403860e0();
            if (plVar11 == (longlong *)0x0) {
                if (1.0 <= fVar27) {
                    if ((local_res8 & 1) != 0) {
                        param_3[8] = DAT_140c7aca4;
                    }
                    fVar26 = fRam0000000140c7787c;
                    fVar24 = fRam0000000140c77878;
                    fVar27 = fRam0000000140c77874;
                    if ((local_res8 & 2) != 0) {
                        *param_3 = _DAT_140c77870;
                        param_3[1] = fVar27;
                        param_3[2] = fVar24;
                        param_3[3] = fVar26;
                    }
                    if ((local_res8 & 4) != 0) {
                        *(undefined8 *)(param_3 + 9) = 0;
                        *(undefined8 *)(param_3 + 0xb) = 0;
                    }
                    if ((local_res8 & 8) != 0) {
                        *(undefined8 *)(param_3 + 4) = 0;
                        *(undefined8 *)(param_3 + 6) = 0;
                    }
                    if ((local_res8 & 0x10) != 0) {
                        param_3[0xd] = 1.0;
                    }
                    if ((local_res8 & 0x20) != 0) {
                        param_3[0xe] = 0.0;
                    }
                    if ((local_res8 >> 0x13 & 1) != 0) {
                        param_3[0xf] = 0.0;
                    }
                }
            }
            else {
                pfVar8 = (float *)(**(code **)(*plVar11 + 0x28))();
                if ((local_res20 & 1) != 0) {
                    param_3[8] = pfVar8[8];
                }
                if ((local_res20 & 2) != 0) {
                    fVar27 = pfVar8[1];
                    fVar24 = pfVar8[2];
                    fVar26 = pfVar8[3];
                    *param_3 = *pfVar8;
                    param_3[1] = fVar27;
                    param_3[2] = fVar24;
                    param_3[3] = fVar26;
                }
                if ((local_res20 & 4) != 0) {
                    param_3[9] = pfVar8[9];
                    param_3[10] = pfVar8[10];
                    param_3[0xb] = pfVar8[0xb];
                    param_3[0xc] = pfVar8[0xc];
                }
                if ((local_res20 & 8) != 0) {
                    fVar27 = pfVar8[5];
                    fVar24 = pfVar8[6];
                    fVar26 = pfVar8[7];
                    param_3[4] = pfVar8[4];
                    param_3[5] = fVar27;
                    param_3[6] = fVar24;
                    param_3[7] = fVar26;
                }
                if ((local_res20 & 0x10) != 0) {
                    param_3[0xd] = pfVar8[0xd];
                }
                if ((local_res20 & 0x20) != 0) {
                    param_3[0xe] = pfVar8[0xe];
                }
                if ((local_res20 >> 0x13 & 1) != 0) {
                    param_3[0xf] = pfVar8[0xf];
                }
            }
            uVar12 = local_3c8;
            if (local_3c8 != 0) {
                do {
                    (**(code **)(**(longlong **)(local_3d0 + uVar15 * 8) + 8))();
                    uVar15 = uVar15 + 1;
                } while (uVar15 < uVar12);
            }
            if (local_3c0 != (longlong *)0x0) {
                (**(code **)(*local_3c0 + 8))();
            }
            if (local_3d0 != 0) {
                (**(code **)(*(longlong *)(local_3d0 + -0x10) + 8))(local_3d0 + -0x10);
            }
            return;
        }
        plVar11 = *(longlong **)(lVar7 + 8);
        iVar6 = (**(code **)(*plVar11 + 0x120))();
        if ((iVar6 != 0) && (plVar11 != param_5)) {
            if (plVar11[0x92] != 0) {
                lVar4 = *param_1;
                DVar5 = GetCurrentThreadId();
                uVar12 = uVar15;
                if (*(DWORD *)(lVar4 + 0x30) == DVar5) {
                    *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
                }
                else {
                    do {
                        LOCK();
                        puVar1 = (ulonglong *)(lVar4 + 0x38);
                        uVar16 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar16 == 0) * (*puVar1 ^ 1);
                        if (uVar16 == 0) {
                            *(DWORD *)(lVar4 + 0x30) = DVar5;
                            goto LAB_140386d26;
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < 0x400);
                    FUN_14019fb60(lVar4 + 0x30);
                }
                LAB_140386d26:
                local_378[0] = 0xffffffff;
                (**(code **)(*plVar11 + 0x20))(plVar11,local_378);
                if (*(ulonglong *)(lVar4 + 0x38) < 2) {
                    *(undefined4 *)(lVar4 + 0x30) = 0;
                    *(undefined8 *)(lVar4 + 0x38) = 0;
                    if (*(longlong *)(lVar4 + 0x40) != 0) {
                        if (*(longlong *)(lVar4 + 0x48) == 0) {
                            pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                            LOCK();
                            puVar1 = (ulonglong *)(lVar4 + 0x48);
                            uVar12 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)pvVar9);
                            if (uVar12 != 0) {
                                CloseHandle(pvVar9);
                            }
                        }
                        SetEvent(*(HANDLE *)(lVar4 + 0x48));
                    }
                }
                else {
                    *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + -1;
                }
            }
            pfVar8 = (float *)(**(code **)(*plVar11 + 0x50))(plVar11);
            fVar24 = *param_2;
            if ((((*pfVar8 <= fVar24) && (fVar24 < pfVar8[4] || fVar24 == pfVar8[4])) &&
                 (pfVar8[1] < param_2[1] || pfVar8[1] == param_2[1])) &&
                ((fVar24 = param_2[2], pfVar8[2] <= fVar24 && (fVar24 < pfVar8[6] || fVar24 == pfVar8[6])))
                    ) {
                (**(code **)*plVar11)(plVar11);
                uVar12 = local_3c8;
                lVar10 = FUN_14018db00(local_3d0,local_3c8 + 1);
                *(longlong **)(lVar10 + uVar12 * 8) = plVar11;
                lVar4 = local_3d0;
                if ((local_3d0 != lVar10) && (FUN_1407db590(lVar10), lVar4 = lVar10, local_3d0 != 0)) {
                    (**(code **)(*(longlong *)(local_3d0 + -0x10) + 8))(local_3d0 + -0x10);
                }
                local_3d0 = lVar4;
                local_3c8 = uVar12 + 1;
            }
        }
        lVar7 = *(longlong *)(lVar7 + 0x18);
        param_3 = local_res18;
    } while( true );
}



void FUN_140387000(longlong param_1,float *param_2,float *param_3,ulonglong param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    longlong lVar4;
    int iVar5;
    float *pfVar6;
    int iVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;

    iVar7 = (int)(*param_2 * 16.0);
    iVar5 = (int)(param_2[1] * 16.0);
    if (0xf < iVar7) {
        iVar7 = 0xf;
    }
    if (0xf < iVar5) {
        iVar5 = 0xf;
    }
    fVar19 = *param_2 * 16.0 - (float)iVar7;
    uVar8 = iVar5 * 0x21 + iVar7;
    fVar15 = param_2[1] * 16.0 - (float)iVar5;
    fVar13 = fVar15 - fVar19;
    fVar15 = (fVar19 + fVar15) - 1.0;
    if ((param_4 & 1) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x98);
        fVar19 = *(float *)(lVar4 + 0xc + (ulonglong)uVar8 * 0x10);
        fVar1 = *(float *)(lVar4 + 0xc + (ulonglong)(uVar8 + 1) * 0x10);
        fVar2 = *(float *)(lVar4 + 0xc + (ulonglong)(uVar8 + 0x11) * 0x10);
        fVar3 = *(float *)(lVar4 + 0xc + (ulonglong)(uVar8 + 0x22) * 0x10);
        if (0.0 <= fVar13) {
            if (0.0 <= fVar15) {
                fVar19 = fVar3 - fVar2;
            }
            else {
                fVar19 = fVar2 - fVar19;
            }
            fVar19 = fVar19 * fVar15 + fVar2 +
                     (*(float *)(lVar4 + 0xc + (ulonglong)(uVar8 + 0x21) * 0x10) - fVar2) * fVar13;
        }
        else if (0.0 <= fVar15) {
            fVar19 = (fVar3 - fVar2) * fVar15 + fVar2 + (fVar2 - fVar1) * fVar13;
        }
        else {
            fVar19 = (fVar2 - fVar19) * fVar15 + fVar2 + (fVar2 - fVar1) * fVar13;
        }
        param_3[8] = fVar19;
    }
    if ((param_4 & 2) == 0) {
        return;
    }
    lVar4 = *(longlong *)(param_1 + 0x98);
    pfVar6 = (float *)((ulonglong)(uVar8 + 0x11) * 0x10 + lVar4);
    fVar19 = *pfVar6;
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    if (0.0 <= fVar13) {
        pfVar6 = (float *)(lVar4 + (ulonglong)(uVar8 + 0x21) * 0x10);
        fVar16 = (*pfVar6 - fVar19) * fVar13;
        fVar17 = (pfVar6[1] - fVar1) * fVar13;
        fVar18 = (pfVar6[2] - fVar2) * fVar13;
        fVar13 = (pfVar6[3] - fVar3) * fVar13;
        if (fVar15 < 0.0) {
            pfVar6 = (float *)(lVar4 + (ulonglong)uVar8 * 0x10);
            fVar9 = fVar19 - *pfVar6;
            fVar10 = fVar1 - pfVar6[1];
            fVar11 = fVar2 - pfVar6[2];
            fVar12 = fVar3 - pfVar6[3];
            goto LAB_140387214;
        }
    }
    else {
        pfVar6 = (float *)(lVar4 + (ulonglong)(uVar8 + 1) * 0x10);
        fVar16 = (fVar19 - *pfVar6) * fVar13;
        fVar17 = (fVar1 - pfVar6[1]) * fVar13;
        fVar18 = (fVar2 - pfVar6[2]) * fVar13;
        fVar13 = (fVar3 - pfVar6[3]) * fVar13;
        if (fVar15 < 0.0) {
            pfVar6 = (float *)(lVar4 + (ulonglong)uVar8 * 0x10);
            fVar9 = fVar19 - *pfVar6;
            fVar10 = fVar1 - pfVar6[1];
            fVar11 = fVar2 - pfVar6[2];
            fVar12 = fVar3 - pfVar6[3];
            goto LAB_140387214;
        }
    }
    pfVar6 = (float *)(lVar4 + (ulonglong)(uVar8 + 0x22) * 0x10);
    fVar9 = *pfVar6 - fVar19;
    fVar10 = pfVar6[1] - fVar1;
    fVar11 = pfVar6[2] - fVar2;
    fVar12 = pfVar6[3] - fVar3;
    LAB_140387214:
    fVar16 = fVar16 + fVar9 * fVar15 + fVar19;
    fVar17 = fVar17 + fVar10 * fVar15 + fVar1;
    fVar18 = fVar18 + fVar11 * fVar15 + fVar2;
    fVar13 = fVar13 + fVar12 * fVar15 + fVar3;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar13 * fVar13,
                                          CONCAT48(fVar18 * fVar18,
                                                   CONCAT44(fVar17 * fVar17,fVar16 * fVar16))) >> 0x20
            ,0),fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18);
    auVar14 = rsqrtss(auVar14,auVar14);
    fVar15 = SUB164(auVar14,0);
    *param_3 = fVar15 * fVar16;
    param_3[1] = fVar15 * fVar17;
    param_3[2] = fVar15 * fVar18;
    param_3[3] = fVar15 * fVar13;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140387270(longlong param_1,float *param_2,longlong param_3)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    float *pfVar7;
    float *pfVar8;
    int *piVar9;
    undefined4 *puVar10;
    uint uVar11;
    ulonglong uVar13;
    uint uVar14;
    ulonglong uVar15;
    undefined extraout_XMM0 [16];
    undefined auVar16 [16];
    float fVar17;
    float fVar18;
    float fVar19;
    undefined4 uVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    longlong *local_res8;
    longlong *local_res10;
    longlong *local_c8;
    float fStack192;
    float fStack188;
    int local_b8;
    int local_b4;
    undefined local_a8 [8];
    float fStack160;
    float fStack156;
    undefined local_98 [16];
    undefined local_88 [80];
    ulonglong uVar12;

    fVar21 = 1.0;
    fVar22 = 1.0;
    fVar23 = 1.0;
    uVar20 = 0x3f800000;
    local_b8 = (int)(*param_2 * 64.0);
    _local_a8 = CONCAT412(param_2[3] * 64.0,
                          CONCAT48(param_2[2] * 64.0,CONCAT44(param_2[1] * 64.0,*param_2 * 64.0)));
    if (0x3f < local_b8) {
        local_b8 = 0x3f;
    }
    local_b4 = (int)(param_2[1] * 64.0);
    if (0x3f < local_b4) {
        local_b4 = 0x3f;
    }
    uVar13 = 0;
    fStack192 = 1.0 - (param_2[2] * 64.0 - 0.0);
    fStack188 = 1.0 - (param_2[3] * 64.0 - 0.0);
    local_c8 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),1,&local_c8);
    lVar4 = (**(code **)(*local_c8 + 0x18))();
    local_res10 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),0x11,&local_res10,1);
    local_res8 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),0x12,&local_res8,1);
    plVar3 = local_res10;
    plVar2 = local_res8;
    lVar5 = (**(code **)(*local_res8 + 0x10))(local_res8);
    uVar6 = (**(code **)(*plVar2 + 0x18))(plVar2);
    pfVar7 = (float *)FUN_140250f60(local_98,uVar6,*(undefined4 *)(lVar5 + 0x2c),local_a8);
    lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
    pfVar8 = (float *)FUN_140250f60(local_88,uVar6,*(undefined4 *)(lVar5 + 0x2c),local_a8);
    if (0.5 < pfVar8[3] || pfVar8[3] == 0.5) {
        fVar17 = (*pfVar8 + *pfVar7 * 2.066667) - fVar21;
        fVar18 = (pfVar8[1] + pfVar7[1] * 2.032258) - fVar22;
        fVar19 = (pfVar8[2] + pfVar7[2] * 2.066667) - fVar23;
        local_a8 = CONCAT44(fVar18,fVar17);
        _local_a8 = CONCAT48(fVar19,local_a8);
        _local_a8 = CONCAT412(((1.0 - fVar17) - fVar18) - fVar19,_local_a8);
        auVar16 = maxps(ZEXT816(0),_local_a8);
        _local_a8 = minps(auVar16,CONCAT412(uVar20,CONCAT48(fVar23,CONCAT44(fVar22,fVar21))));
    }
    else {
        _local_a8 = extraout_XMM0 & (undefined  [16])0x0;
    }
    fVar22 = 0.0;
    puVar10 = (undefined4 *)local_a8;
    fVar21 = 0.0;
    lVar5 = 4;
    do {
        if (*(int *)((lVar4 - (longlong)local_a8) + (longlong)puVar10) == 0) {
            *puVar10 = 0;
        }
        puVar10 = puVar10 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fVar23 = 0.003921569;
    pfVar7 = (float *)local_a8;
    lVar4 = 4;
    do {
        fVar17 = *pfVar7;
        if (((fVar17 != fVar22) && (fVar21 = fVar21 + fVar17, DAT_140c65878 != 0)) &&
            (lVar5 = FUN_140350cd0(), lVar5 != 0)) {
            *pfVar7 = ((float)(uint)*(byte *)(lVar5 + 0x3b) * fVar23 * *(float *)(lVar5 + 0x10) +
                       *(float *)(lVar5 + 0x14)) * fVar17;
        }
        pfVar7 = pfVar7 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar15 = uVar13;
    if (fVar21 != fVar22) {
        pfVar7 = (float *)local_a8;
        lVar4 = 4;
        fVar21 = fVar21 / (local_a8._4_4_ * local_a8._4_4_ + fStack156 * fStack156 +
                           local_a8._0_4_ * local_a8._0_4_ + fStack160 * fStack160);
        local_a8 = CONCAT44(fVar21 * local_a8._4_4_ * local_a8._4_4_,
                            fVar21 * local_a8._0_4_ * local_a8._0_4_);
        _local_a8 = CONCAT48(fVar21 * fStack160 * fStack160,local_a8);
        _local_a8 = CONCAT412(fVar21 * fStack156 * fStack156,_local_a8);
        do {
            fVar21 = *pfVar7;
            if (((fVar21 != fVar22) && (DAT_140c65878 != 0)) &&
                ((lVar5 = FUN_140350cd0(), lVar5 != 0 && (iVar1 = *(int *)(lVar5 + 0x40), iVar1 != 0)))) {
                uVar14 = (uint)uVar15;
                uVar11 = 0;
                if (uVar14 != 0) {
                    piVar9 = (int *)(param_3 + 0x24);
                    uVar12 = uVar13;
                    do {
                        uVar11 = (uint)uVar12;
                        if (*piVar9 == iVar1) {
                            *(float *)(param_3 + 0x10 + uVar12 * 4) =
                                    fVar21 + *(float *)(param_3 + 0x10 + uVar12 * 4);
                            break;
                        }
                        uVar11 = uVar11 + 1;
                        uVar12 = (ulonglong)uVar11;
                        piVar9 = piVar9 + 1;
                    } while (uVar11 < uVar14);
                }
                if (uVar11 == uVar14) {
                    uVar15 = (ulonglong)(uVar14 + 1);
                    *(int *)(param_3 + 0x24 + (ulonglong)uVar11 * 4) = iVar1;
                    *(float *)(param_3 + 0x10 + (ulonglong)uVar11 * 4) = fVar21;
                }
            }
            pfVar7 = pfVar7 + 1;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    if ((uint)uVar15 < 4) {
        puVar10 = (undefined4 *)(param_3 + (uVar15 + 4) * 4);
        uVar13 = (ulonglong)(4 - (uint)uVar15);
        do {
            puVar10[5] = 0;
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
    }
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 8))();
    }
    if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 8))();
    }
    return;
}



void FUN_140387600(longlong *param_1,float *param_2,longlong param_3)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong *plVar3;
    DWORD DVar4;
    HANDLE hObject;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong *local_res8;
    undefined4 local_48 [4];
    undefined local_38 [16];
    undefined local_28 [16];

    if (param_1[0xb5] != 0) {
        lVar5 = *param_1;
        DVar4 = GetCurrentThreadId();
        if (*(DWORD *)(lVar5 + 0x30) == DVar4) {
            *(longlong *)(lVar5 + 0x38) = *(longlong *)(lVar5 + 0x38) + 1;
        }
        else {
            uVar7 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar5 + 0x38);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD *)(lVar5 + 0x30) = DVar4;
                    goto LAB_14038767a;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(lVar5 + 0x30,DVar4);
        }
        LAB_14038767a:
        local_48[0] = 0xffffffff;
        if (param_1[0xb5] != 0) {
            FUN_14037cc30(param_1,local_48);
        }
        if (*(ulonglong *)(lVar5 + 0x38) < 2) {
            *(undefined4 *)(lVar5 + 0x30) = 0;
            *(undefined8 *)(lVar5 + 0x38) = 0;
            if (*(longlong *)(lVar5 + 0x40) != 0) {
                if (*(longlong *)(lVar5 + 0x48) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar5 + 0x48);
                    uVar7 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar5 + 0x48));
            }
        }
        else {
            *(longlong *)(lVar5 + 0x38) = *(longlong *)(lVar5 + 0x38) + -1;
        }
    }
    local_res8 = (longlong *)0x0;
    local_38 = CONCAT412(param_2[3] * 64.0,
                         CONCAT48(param_2[2] * 64.0,CONCAT44(param_2[1] * 64.0,*param_2 * 64.0)));
    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0xd,&local_res8,1);
    plVar3 = local_res8;
    lVar5 = (**(code **)(*local_res8 + 0x10))(local_res8);
    uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = FUN_140251170(local_28,uVar6,*(undefined4 *)(lVar5 + 0x2c),local_38);
    *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(lVar5 + 0xc);
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



void FUN_140387780(longlong *param_1,float *param_2,longlong param_3)

{
    ulonglong *puVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    DWORD DVar7;
    HANDLE hObject;
    longlong lVar8;
    ulonglong uVar9;
    longlong *local_res8;
    undefined4 local_28 [4];

    if (param_1[0xb5] != 0) {
        lVar8 = *param_1;
        DVar7 = GetCurrentThreadId();
        if (*(DWORD *)(lVar8 + 0x30) == DVar7) {
            *(longlong *)(lVar8 + 0x38) = *(longlong *)(lVar8 + 0x38) + 1;
        }
        else {
            uVar9 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar8 + 0x38);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *)(lVar8 + 0x30) = DVar7;
                    goto LAB_1403877fc;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < 0x400);
            FUN_14019fb60(lVar8 + 0x30,DVar7);
        }
        LAB_1403877fc:
        local_28[0] = 0xffffffff;
        if (param_1[0xb5] != 0) {
            FUN_14037cc30(param_1,local_28);
        }
        if (*(ulonglong *)(lVar8 + 0x38) < 2) {
            *(undefined4 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            if (*(longlong *)(lVar8 + 0x40) != 0) {
                if (*(longlong *)(lVar8 + 0x48) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar8 + 0x48);
                    uVar9 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar9 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar9 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar8 + 0x48));
            }
        }
        else {
            *(longlong *)(lVar8 + 0x38) = *(longlong *)(lVar8 + 0x38) + -1;
        }
    }
    fVar5 = *param_2;
    fVar6 = param_2[1];
    local_res8 = (longlong *)0x0;
    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x10,&local_res8,1);
    lVar8 = (**(code **)(*local_res8 + 0x10))();
    iVar2 = *(int *)(lVar8 + 0x2c);
    iVar3 = *(int *)(lVar8 + 0x28);
    lVar8 = (**(code **)(*local_res8 + 0x18))();
    *(uint *)(param_3 + 0x38) =
            (uint)*(byte *)(lVar8 + (iVar2 * (int)(fVar6 * 64.0) + (int)(fVar5 * 64.0) * iVar3));
    if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 8))();
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140387910(longlong *param_1,float *param_2,longlong param_3,uint param_4)

{
    ulonglong *puVar1;
    byte bVar2;
    bool bVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    longlong lVar6;
    longlong *plVar7;
    uint *puVar8;
    uint *puVar9;
    undefined4 *puVar10;
    longlong lVar11;
    int iVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    byte *pbVar19;
    float *pfVar20;
    byte *pbVar21;
    int iVar22;
    uint *puVar23;
    longlong lVar24;
    uint uVar25;
    uint *puVar26;
    float fVar27;
    float fVar28;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined extraout_XMM0_01 [16];
    undefined extraout_XMM0_02 [16];
    undefined extraout_XMM0_03 [16];
    undefined extraout_XMM0_04 [16];
    undefined extraout_XMM0_05 [16];
    undefined in_XMM1 [16];
    undefined in_XMM2 [16];
    undefined auVar29 [16];
    undefined auVar30 [16];
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    undefined in_XMM4 [16];
    float fVar35;
    float fVar36;
    float fVar37;
    undefined4 uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    undefined4 uVar42;
    undefined4 uVar43;
    undefined4 uVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    longlong *local_188;
    longlong *local_180;
    longlong *local_178;
    int local_170;
    uint local_16c;
    undefined local_168 [8];
    float fStack352;
    float local_158;
    float fStack340;
    float fStack336;
    undefined4 uStack332;
    undefined local_148 [16];
    int local_138;
    int local_134;
    undefined local_128 [16];
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    undefined4 local_f8 [4];
    float local_e8;
    float fStack228;
    float fStack224;
    float fStack220;

    if (*(int *)(param_1 + 4) != 0xf) {
        lVar6 = *param_1;
        DVar4 = GetCurrentThreadId();
        if (*(DWORD *)(lVar6 + 0x30) == DVar4) {
            *(longlong *)(lVar6 + 0x38) = *(longlong *)(lVar6 + 0x38) + 1;
        }
        else {
            uVar13 = 0;
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar6 + 0x38);
                uVar14 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ 1);
                if (uVar14 == 0) {
                    *(DWORD *)(lVar6 + 0x30) = DVar4;
                    goto LAB_1403879a6;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0x400);
            FUN_14019fb60(lVar6 + 0x30);
        }
        LAB_1403879a6:
        local_f8[0] = 0xffffffff;
        if (*(int *)(param_1 + 4) != 0xf) {
            FUN_14037cb70(param_1,local_f8);
        }
        if (*(ulonglong *)(lVar6 + 0x38) < 2) {
            *(undefined4 *)(lVar6 + 0x30) = 0;
            *(undefined8 *)(lVar6 + 0x38) = 0;
            if (*(longlong *)(lVar6 + 0x40) != 0) {
                if (*(longlong *)(lVar6 + 0x48) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar6 + 0x48);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ (ulonglong)hObject);
                    if (uVar13 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE *)(lVar6 + 0x48));
            }
        }
        else {
            *(longlong *)(lVar6 + 0x38) = *(longlong *)(lVar6 + 0x38) + -1;
        }
    }
    puVar23 = (uint *)0x0;
    fVar47 = *(float *)((longlong)param_1 + 0xc4);
    auVar30 = ZEXT416((uint)fVar47);
    fVar39 = -3.402823e+38;
    fVar45 = -3.402823e+38;
    if (fVar47 < param_2[1] || fVar47 == param_2[1]) {
        local_180 = (longlong *)0x0;
        iVar5 = (**(code **)(*(longlong *)param_1[2] + 0xb0))((longlong *)param_1[2],&local_180);
        fVar47 = 0.003921569;
        fVar41 = 0.0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        auVar30 = extraout_XMM0;
        if ((-1 < iVar5) &&
            (lVar6 = (**(code **)(*local_180 + 0x10))(), auVar30 = extraout_XMM0_00, lVar6 != 0)) {
            fVar40 = -1e-05;
            fVar46 = 1.0;
            puVar8 = puVar23;
            fVar39 = fVar45;
            do {
                puVar26 = puVar8;
                plVar7 = (longlong *)(**(code **)(*local_180 + 0x18))(local_180,puVar26);
                local_e8 = *param_2;
                fStack228 = param_2[2];
                fStack224 = local_e8;
                fStack220 = fStack228;
                puVar8 = (uint *)(**(code **)(*plVar7 + 0x30))(plVar7,&local_e8);
                iVar5 = (int)puVar26;
                if (puVar8 == (uint *)0x0) {
                    LAB_140387d0b:
                    fVar45 = fVar39;
                    puVar26 = (uint *)((ulonglong)local_188 & 0xffffffff);
                }
                else {
                    lVar6 = (**(code **)(*plVar7 + 0x20))();
                    uVar14 = (ulonglong)puVar8[2];
                    uVar15 = (ulonglong)puVar8[1];
                    uVar13 = (ulonglong)*puVar8;
                    fVar45 = *(float *)(lVar6 + 8 + uVar13 * 0x48);
                    fVar27 = *(float *)(lVar6 + 4 + uVar13 * 0x48);
                    fVar28 = *(float *)(lVar6 + uVar13 * 0x48);
                    fVar31 = *(float *)(lVar6 + uVar14 * 0x48) - fVar28;
                    fVar33 = *(float *)(lVar6 + 4 + uVar14 * 0x48) - fVar27;
                    fVar34 = *(float *)(lVar6 + 8 + uVar14 * 0x48) - fVar45;
                    fVar35 = *(float *)(lVar6 + uVar15 * 0x48) - fVar28;
                    fVar36 = *(float *)(lVar6 + 4 + uVar15 * 0x48) - fVar27;
                    fVar37 = *(float *)(lVar6 + 8 + uVar15 * 0x48) - fVar45;
                    fVar32 = fVar34 * 1.0 - fVar33 * 0.0;
                    fVar34 = fVar31 * 0.0 - fVar34 * 0.0;
                    fVar33 = fVar33 * 0.0 - fVar31 * 1.0;
                    fVar31 = fVar35 * fVar32 + fVar36 * fVar34 + fVar37 * fVar33;
                    if ((fVar31 <= fVar40) || (1e-05 <= fVar31)) {
                        fVar28 = *param_2 - fVar28;
                        fVar27 = param_2[1] - fVar27;
                        fVar45 = param_2[2] - fVar45;
                        fVar32 = (fVar28 * fVar32 + fVar27 * fVar34 + fVar45 * fVar33) * (fVar46 / fVar31);
                        fStack340 = fVar32;
                        fVar28 = ((fVar27 * fVar37 - fVar45 * fVar36) * 0.0 +
                                  (fVar45 * fVar35 - fVar28 * 0.0) * 1.0 +
                                  (fVar28 * fVar36 - fVar27 * fVar35) * 0.0) * (fVar46 / fVar31);
                        fVar27 = (fVar46 - fVar32) - fVar28;
                        fStack336 = fVar28;
                        local_158 = fVar27;
                        uVar38 = uStack332;
                    }
                    else {
                        fVar27 = -1.0;
                        fVar32 = -1.0;
                        fVar28 = 3.0;
                        uVar38 = 0;
                    }
                    local_148 = CONCAT412(uVar38,CONCAT48(fVar28,CONCAT44(fVar32,fVar27)));
                    in_XMM4 = CONCAT412(uVar44,CONCAT48(uVar43,CONCAT44(uVar42,fVar41)));
                    lVar24 = 3;
                    pfVar20 = (float *)local_148;
                    do {
                        in_XMM1 = CONCAT412(uVar44,CONCAT48(uVar43,CONCAT44(uVar42,fVar41)));
                        in_XMM2 = CONCAT412(uVar42,ZEXT812(0)) & (undefined  [16])0xffffffffffffffff;
                        fVar45 = SUB164(in_XMM4,0) +
                                 *(float *)(lVar6 + 4 +
                                            (ulonglong)
                                            *(uint *)(((longlong)puVar8 - (longlong)local_148) +
                                                      (longlong)pfVar20) * 0x48) * *pfVar20;
                        in_XMM4 = CONCAT124(SUB1612(in_XMM4 >> 0x20,0),fVar45);
                        lVar24 = lVar24 + -1;
                        pfVar20 = pfVar20 + 1;
                    } while (lVar24 != 0);
                    if (fVar45 <= fVar39) goto LAB_140387d0b;
                    local_188 = (longlong *)((ulonglong)local_188 & 0xffffffff00000000 | (ulonglong)puVar26);
                    _local_168 = CONCAT412(uVar38,CONCAT48(fVar28,CONCAT44(fVar32,fVar27)));
                    puVar23 = puVar8;
                }
                puVar8 = (uint *)(ulonglong)(iVar5 + 1);
                puVar9 = (uint *)(**(code **)(*local_180 + 0x10))();
                fVar39 = fVar45;
            } while (puVar8 < puVar9);
            if (puVar23 == (uint *)0x0) {
                fVar39 = -3.402823e+38;
                auVar30 = extraout_XMM0_01;
            }
            else {
                plVar7 = (longlong *)(**(code **)(*local_180 + 0x18))(local_180,puVar26);
                puVar10 = (undefined4 *)(**(code **)(*plVar7 + 0x10))(plVar7);
                lVar6 = (**(code **)(*plVar7 + 0x20))();
                if ((param_4 & 0x40) != 0) {
                    *(float *)(param_3 + 0x90) = fVar45;
                }
                auVar30 = extraout_XMM0_02;
                if ((param_4 & 0x1080) != 0) {
                    lVar24 = 3;
                    *(undefined (*) [16])(param_3 + 0x40) = extraout_XMM0_02 & (undefined  [16])0x0;
                    pfVar20 = (float *)local_168;
                    do {
                        uVar13 = (ulonglong)
                                 *(uint *)(((longlong)puVar23 - (longlong)local_168) + (longlong)pfVar20);
                        fVar39 = *pfVar20;
                        fVar40 = *(float *)(param_3 + 0x40) + *(float *)(lVar6 + 0xc + uVar13 * 0x48) * fVar39;
                        fVar27 = *(float *)(param_3 + 0x44) + *(float *)(lVar6 + 0x10 + uVar13 * 0x48) * fVar39;
                        fVar28 = *(float *)(param_3 + 0x48) + *(float *)(lVar6 + 0x14 + uVar13 * 0x48) * fVar39;
                        fVar39 = *(float *)(param_3 + 0x4c) + fVar41 * fVar39;
                        *(undefined (*) [16])(param_3 + 0x40) =
                                CONCAT412(fVar39,CONCAT48(fVar28,CONCAT44(fVar27,fVar40)));
                        lVar24 = lVar24 + -1;
                        pfVar20 = pfVar20 + 1;
                    } while (lVar24 != 0);
                    fVar31 = fVar27 * fVar27;
                    fVar32 = fVar28 * fVar28;
                    auVar30 = ZEXT816(CONCAT44(fVar31,fVar31)) << 0x40 & (undefined  [16])0xffffffffffffffff;
                    in_XMM1 = CONCAT412(fVar32,CONCAT48(fVar32,CONCAT44(fVar32,fVar32)));
                    auVar29 = CONCAT124(SUB1612(CONCAT412(fVar39 * fVar39,
                                                          CONCAT48(fVar32,CONCAT44(fVar31,fVar40 * fVar40)))
                                                        >> 0x20,0),fVar40 * fVar40 + fVar31 + fVar32);
                    auVar29 = rsqrtss(auVar29,auVar29);
                    fVar31 = SUB164(auVar29,0);
                    in_XMM2 = CONCAT412(fVar31 * fVar39,
                                        CONCAT48(fVar31 * fVar28,CONCAT44(fVar31 * fVar27,fVar31 * fVar40)));
                    *(undefined (*) [16])(param_3 + 0x40) = in_XMM2;
                }
                if ((param_4 >> 8 & 1) != 0) {
                    *(undefined4 *)(param_3 + 0x94) = *puVar10;
                }
                if ((param_4 & 0x1200) != 0) {
                    *(undefined4 *)(param_3 + 0x98) = puVar10[1];
                    *(undefined4 *)(param_3 + 0x9c) = puVar10[2];
                    *(undefined4 *)(param_3 + 0xa0) = puVar10[3];
                    *(undefined4 *)(param_3 + 0xa4) = puVar10[4];
                }
                if ((param_4 & 0x1400) != 0) {
                    in_XMM4 = _local_168 & (undefined  [16])0xffffffff;
                    in_XMM2 = ZEXT416((uint)fStack352);
                    *(undefined4 *)(param_3 + 0x50) = 0;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x44 + (ulonglong)*puVar23 * 0x48) * fVar47 *
                             local_168._0_4_;
                    *(float *)(param_3 + 0x50) = fVar39;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x44 + (ulonglong)puVar23[1] * 0x48) * fVar47 *
                             local_168._4_4_ + fVar39;
                    *(float *)(param_3 + 0x50) = fVar39;
                    bVar2 = *(byte *)(lVar6 + 0x44 + (ulonglong)puVar23[2] * 0x48);
                    *(undefined4 *)(param_3 + 0x54) = 0;
                    *(float *)(param_3 + 0x50) = (float)(uint)bVar2 * fVar47 * fStack352 + fVar39;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x45 + (ulonglong)*puVar23 * 0x48) * fVar47 *
                             local_168._0_4_;
                    *(float *)(param_3 + 0x54) = fVar39;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x45 + (ulonglong)puVar23[1] * 0x48) * fVar47 *
                             local_168._4_4_ + fVar39;
                    *(float *)(param_3 + 0x54) = fVar39;
                    bVar2 = *(byte *)(lVar6 + 0x45 + (ulonglong)puVar23[2] * 0x48);
                    *(undefined4 *)(param_3 + 0x58) = 0;
                    *(float *)(param_3 + 0x54) = (float)(uint)bVar2 * fVar47 * fStack352 + fVar39;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x46 + (ulonglong)*puVar23 * 0x48) * fVar47 *
                             local_168._0_4_;
                    *(float *)(param_3 + 0x58) = fVar39;
                    fVar39 = (float)(uint)*(byte *)(lVar6 + 0x46 + (ulonglong)puVar23[1] * 0x48) * fVar47 *
                             local_168._4_4_ + fVar39;
                    *(float *)(param_3 + 0x58) = fVar39;
                    bVar2 = *(byte *)(lVar6 + 0x46 + (ulonglong)puVar23[2] * 0x48);
                    *(undefined4 *)(param_3 + 0x5c) = 0;
                    *(float *)(param_3 + 0x58) = (float)(uint)bVar2 * fVar47 * fStack352 + fVar39;
                    local_168._0_4_ =
                            (float)(uint)*(byte *)(lVar6 + 0x47 + (ulonglong)*puVar23 * 0x48) * fVar47 *
                            local_168._0_4_;
                    *(float *)(param_3 + 0x5c) = local_168._0_4_;
                    local_168._0_4_ =
                            (float)(uint)*(byte *)(lVar6 + 0x47 + (ulonglong)puVar23[1] * 0x48) * fVar47 *
                            local_168._4_4_ + local_168._0_4_;
                    in_XMM1 = ZEXT416((uint)local_168._0_4_) & (undefined  [16])0xffffffffffffffff;
                    *(float *)(param_3 + 0x5c) = local_168._0_4_;
                    local_168._0_4_ =
                            (float)(uint)*(byte *)(lVar6 + 0x47 + (ulonglong)puVar23[2] * 0x48) * fVar47 *
                            fStack352 + local_168._0_4_;
                    auVar30 = ZEXT416((uint)local_168._0_4_) & (undefined  [16])0xffffffffffffffff;
                    *(float *)(param_3 + 0x5c) = local_168._0_4_;
                }
                if ((param_4 & 0x1800) != 0) {
                    uVar25 = 2;
                    bVar3 = *(float *)(lVar6 + (ulonglong)*puVar23 * 0x48) <=
                            *(float *)(lVar6 + (ulonglong)puVar23[1] * 0x48);
                    uVar13 = (ulonglong)!bVar3;
                    uVar14 = (ulonglong)bVar3;
                    if (*(float *)(lVar6 + (ulonglong)puVar23[2] * 0x48) <
                        *(float *)(lVar6 + (ulonglong)puVar23[uVar13] * 0x48)) {
                        uVar13 = 2;
                        uVar25 = (uint)!bVar3;
                    }
                    if (*(float *)(lVar6 + (ulonglong)puVar23[uVar25] * 0x48) <
                        *(float *)(lVar6 + (ulonglong)puVar23[uVar14] * 0x48)) {
                        uVar14 = (ulonglong)uVar25;
                        uVar25 = (uint)bVar3;
                    }
                    uVar16 = (ulonglong)puVar23[uVar13];
                    uVar17 = (ulonglong)puVar23[uVar14];
                    uVar18 = (ulonglong)puVar23[uVar25];
                    fVar27 = *(float *)(lVar6 + uVar17 * 0x48) - *(float *)(lVar6 + uVar16 * 0x48);
                    fVar40 = fVar46 / (*(float *)(lVar6 + uVar18 * 0x48) - *(float *)(lVar6 + uVar16 * 0x48));
                    fVar39 = fVar46 / (((*(float *)(lVar6 + 8 + uVar18 * 0x48) -
                                         *(float *)(lVar6 + 8 + uVar16 * 0x48)) * fVar27 * fVar40 +
                                        *(float *)(lVar6 + 8 + uVar16 * 0x48)) -
                                       *(float *)(lVar6 + 8 + uVar17 * 0x48));
                    fVar28 = (((*(float *)(lVar6 + 0x30 + uVar18 * 0x48) -
                                *(float *)(lVar6 + 0x30 + uVar16 * 0x48)) * fVar27 * fVar40 +
                               *(float *)(lVar6 + 0x30 + uVar16 * 0x48)) -
                              *(float *)(lVar6 + 0x30 + uVar17 * 0x48)) * fVar39;
                    fVar39 = (((*(float *)(lVar6 + 0x34 + uVar18 * 0x48) -
                                *(float *)(lVar6 + 0x34 + uVar16 * 0x48)) * fVar27 * fVar40 +
                               *(float *)(lVar6 + 0x34 + uVar16 * 0x48)) -
                              *(float *)(lVar6 + 0x34 + uVar17 * 0x48)) * fVar39;
                    uVar15 = uVar14;
                    if (*(float *)(lVar6 + 8 + uVar17 * 0x48) < *(float *)(lVar6 + 8 + uVar16 * 0x48)) {
                        uVar15 = uVar13;
                        uVar13 = uVar14;
                    }
                    uVar14 = uVar13;
                    if (*(float *)(lVar6 + 8 + uVar18 * 0x48) <
                        *(float *)(lVar6 + 8 + (ulonglong)puVar23[uVar13] * 0x48)) {
                        uVar14 = (ulonglong)uVar25;
                        uVar25 = (uint)uVar13;
                    }
                    uVar13 = uVar15;
                    if (*(float *)(lVar6 + 8 + (ulonglong)puVar23[uVar25] * 0x48) <
                        *(float *)(lVar6 + 8 + (ulonglong)puVar23[uVar15] * 0x48)) {
                        uVar13 = (ulonglong)uVar25;
                        uVar25 = (uint)uVar15;
                    }
                    uVar14 = (ulonglong)puVar23[uVar14];
                    uVar13 = (ulonglong)puVar23[uVar13];
                    uVar15 = (ulonglong)puVar23[uVar25];
                    fVar40 = *(float *)(lVar6 + 0x30 + uVar14 * 0x48);
                    fVar27 = *(float *)(lVar6 + 0x34 + uVar14 * 0x48);
                    fVar31 = *(float *)(lVar6 + 8 + uVar14 * 0x48);
                    fVar32 = *(float *)(lVar6 + uVar14 * 0x48);
                    fVar34 = *(float *)(lVar6 + 8 + uVar13 * 0x48) - fVar31;
                    fVar35 = fVar46 / (*(float *)(lVar6 + 8 + uVar15 * 0x48) - fVar31);
                    fVar33 = fVar46 / (((*(float *)(lVar6 + uVar15 * 0x48) - fVar32) * fVar34 * fVar35 +
                                        fVar32) - *(float *)(lVar6 + uVar13 * 0x48));
                    fVar36 = (((*(float *)(lVar6 + 0x30 + uVar15 * 0x48) - fVar40) * fVar34 * fVar35 + fVar40)
                              - *(float *)(lVar6 + 0x30 + uVar13 * 0x48)) * fVar33;
                    fVar33 = (((*(float *)(lVar6 + 0x34 + uVar15 * 0x48) - fVar27) * fVar34 * fVar35 + fVar27)
                              - *(float *)(lVar6 + 0x34 + uVar13 * 0x48)) * fVar33;
                    auVar30 = ZEXT416((uint)(fVar27 - fVar32 * fVar33)) & (undefined  [16])0xffffffffffffffff;
                    fVar27 = SUB164(auVar30,0) - fVar31 * fVar39;
                    in_XMM4 = CONCAT124(SUB1612(auVar30 >> 0x20,0),fVar27);
                    in_XMM1 = CONCAT412(uVar44,CONCAT48(uVar43,CONCAT44(uVar42,fVar41)));
                    fVar40 = (fVar40 - fVar32 * fVar36) - fVar31 * fVar28;
                    auVar30 = ZEXT416(0) << 0x40;
                    in_XMM2 = CONCAT412(uVar42,ZEXT412((uint)fVar39)) & (undefined  [16])0xffffffffffffffff;
                    *(ulonglong *)(param_3 + 0x60) = CONCAT44(fVar28,fVar36);
                    *(longlong *)(param_3 + 0x68) =
                            SUB168(CONCAT412(fVar41,CONCAT48(fVar40,CONCAT44(fVar40,fVar36))) >> 0x40,0);
                    *(undefined (*) [16])(param_3 + 0x70) =
                            CONCAT88(SUB168(CONCAT412(fVar41,CONCAT48(fVar27,CONCAT44(fVar27,fVar33))) >> 0x40,0)
                                    ,CONCAT44(fVar39,fVar33));
                }
                if ((param_4 >> 0xc & 1) == 0) {
                    fVar39 = -3.402823e+38;
                }
                else {
                    fVar27 = 0.0;
                    fVar40 = 0.0;
                    pfVar20 = (float *)(param_3 + 0x50);
                    lVar6 = 4;
                    do {
                        if ((pfVar20[0x12] != 0.0) && (fVar41 != *pfVar20)) {
                            local_178 = (longlong *)0x0;
                            iVar5 = FUN_140354aa0(*param_1,pfVar20[0x12],&local_178);
                            if (-1 < iVar5) {
                                fVar27 = *(float *)(local_178 + 0xc) * *pfVar20 + fVar27;
                                fVar40 = *(float *)((longlong)local_178 + 100) * *pfVar20 + fVar40;
                            }
                            if (local_178 != (longlong *)0x0) {
                                (**(code **)(*local_178 + 8))();
                            }
                        }
                        pfVar20 = pfVar20 + 1;
                        lVar6 = lVar6 + -1;
                    } while (lVar6 != 0);
                    fVar39 = *(float *)(param_3 + 0x60) * *(float *)(param_3 + 0x74) -
                             *(float *)(param_3 + 100) * *(float *)(param_3 + 0x70);
                    fVar28 = fVar41;
                    if (1e-05 < (float)((uint)fVar39 & 0x7fffffff)) {
                        fVar28 = fVar46 / fVar39;
                    }
                    in_XMM1 = CONCAT412(uVar44,CONCAT48(uVar43,CONCAT44(uVar42,fVar41)));
                    *(undefined4 *)(param_3 + 0x84) = 0;
                    in_XMM4 = ZEXT816(CONCAT44(fVar28,fVar28)) << 0x40 & (undefined  [16])0xffffffffffffffff;
                    fVar39 = -3.402823e+38;
                    in_XMM2 = CONCAT412(uVar42,ZEXT812(0)) & (undefined  [16])0xffffffffffffffff;
                    *(float *)(param_3 + 0x80) =
                            *(float *)(param_3 + 0x74) * fVar28 * fVar27 +
                            (float)((uint)*(float *)(param_3 + 100) ^ 0x80000000) * fVar28 * fVar40;
                    fVar40 = *(float *)(param_3 + 0x60) * fVar28 * fVar40;
                    auVar30 = ZEXT816(CONCAT44(fVar40,fVar40)) << 0x40 & (undefined  [16])0xffffffffffffffff;
                    *(float *)(param_3 + 0x88) =
                            (float)((uint)*(float *)(param_3 + 0x70) ^ 0x80000000) * fVar28 * fVar27 + fVar40;
                }
            }
        }
        lVar6 = 4;
        if ((*(byte *)(param_1 + 0x8c) & 1) != 0) {
            auVar30 = ZEXT1216(ZEXT812(0xc47a0000));
            fVar40 = SUB124(ZEXT812(0xc47a0000),0);
            if (fVar45 < fVar40) {
                if ((param_4 & 0x40) != 0) {
                    *(undefined4 *)(param_3 + 0x90) = 0xc47a0000;
                }
                auVar29 = _DAT_140c77870;
                if ((param_4 & 0x1080) != 0) {
                    *(undefined (*) [16])(param_3 + 0x40) = _DAT_140c77870;
                    auVar30 = auVar29;
                }
                if ((param_4 >> 8 & 1) != 0) {
                    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(*(longlong *)(*param_1 + 0x12c8) + 0x18)
                            ;
                }
                if ((param_4 & 0x1200) != 0) {
                    puVar10 = (undefined4 *)(param_3 + 0x98);
                    plVar7 = param_1 + 0x8d;
                    lVar24 = 4;
                    do {
                        if (*plVar7 == 0) {
                            *puVar10 = 0;
                        }
                        else {
                            *puVar10 = *(undefined4 *)(*plVar7 + 0x18);
                        }
                        plVar7 = plVar7 + 1;
                        puVar10 = puVar10 + 1;
                        lVar24 = lVar24 + -1;
                    } while (lVar24 != 0);
                }
                if ((param_4 & 0x1400) != 0) {
                    uVar42 = 0;
                    uVar43 = 0;
                    uVar44 = 0;
                    uVar38 = 0;
                    local_188 = (longlong *)0x0;
                    auVar30 = minps(CONCAT412((param_2[2] * DAT_140c44580 + 0.5) * 2048.0,
                                              CONCAT48((*param_2 * DAT_140c44580 + 0.5) * 2048.0,
                                                       CONCAT44((param_2[2] * DAT_140c44580 + 0.5) * 2048.0,
                                                                (*param_2 * DAT_140c44580 + 0.5) * 2048.0))),
                                    _DAT_140b7b490);
                    auVar30 = maxps(in_XMM4 & (undefined  [16])0x0,auVar30);
                    local_138 = (int)SUB164(auVar30,0);
                    fVar45 = SUB164(auVar30 >> 0x20,0);
                    if (0x7ff < local_138) {
                        local_138 = 0x7ff;
                    }
                    local_134 = (int)fVar45;
                    if (0x7ff < local_134) {
                        local_134 = 0x7ff;
                    }
                    in_XMM2 = ZEXT416(0);
                    local_118 = (SUB164(auVar30,0) - (float)local_138) * 64.0;
                    fStack276 = (fVar45 - (float)local_134) * 64.0;
                    local_170 = (int)local_118;
                    local_16c = (uint)fStack276;
                    if (0x3f < local_170) {
                        local_170 = 0x3f;
                    }
                    if (0x3f < (int)local_16c) {
                        local_16c = 0x3f;
                    }
                    in_XMM1 = ZEXT416(local_16c);
                    local_118 = local_118 - (float)local_170;
                    fStack276 = fStack276 - (float)local_16c;
                    fStack272 = (SUB164(auVar30 >> 0x40,0) - 0.0) * 64.0 - 0.0;
                    fStack268 = (SUB164(auVar30 >> 0x60,0) - 0.0) * 64.0 - 0.0;
                    local_108 = 1.0 - local_118;
                    fStack260 = 1.0 - fStack276;
                    fStack256 = 1.0 - fStack272;
                    fStack252 = 1.0 - fStack268;
                    (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],0x1d,&local_188);
                    lVar24 = (**(code **)(*local_188 + 0x10))();
                    iVar12 = *(int *)(lVar24 + 0x28) * local_170;
                    iVar22 = *(int *)(lVar24 + 0x2c) * local_16c;
                    lVar11 = (**(code **)(*local_188 + 0x18))();
                    iVar5 = *(int *)(lVar24 + 0x2c);
                    *(undefined (*) [16])(param_3 + 0x50) =
                            CONCAT412(uVar38,CONCAT48(uVar44,CONCAT44(uVar43,uVar42)));
                    pbVar21 = (byte *)((iVar22 + iVar12) + lVar11);
                    pbVar19 = pbVar21 + iVar5;
                    auVar30 = extraout_XMM0_03;
                    if ((param_1[0x8d] != 0) && (*(int *)(param_1[0x8d] + 0x18) != 0)) {
                        fVar45 = SUB164(ZEXT416((uint)(float)(ulonglong)pbVar19[4]) &
                                (undefined  [16])0xffffffffffffffff,0) * fStack276 * local_118;
                        auVar30 = CONCAT124(SUB1612((ZEXT416((uint)(float)(ulonglong)pbVar19[4]) &
                                (undefined  [16])0xffffffffffffffff) >> 0x20,0),fVar45);
                        fVar45 = (SUB164(ZEXT416((uint)(float)(ulonglong)pbVar21[4]) &
                                (undefined  [16])0xffffffffffffffff,0) * fStack260 * local_118 +
                                                                       (float)(ulonglong)*pbVar21 * fStack260 * local_108 +
                                                                       (float)(ulonglong)*pbVar19 * fStack276 * local_108 + fVar45) * fVar47;
                        in_XMM1 = CONCAT124(SUB1612((ZEXT416((uint)(float)(ulonglong)pbVar21[4]) &
                                (undefined  [16])0xffffffffffffffff) >> 0x20,0),fVar45);
                        *(float *)(param_3 + 0x50) = fVar45;
                    }
                    if ((param_1[0x8e] != 0) && (*(int *)(param_1[0x8e] + 0x18) != 0)) {
                        fVar46 = (float)(uint)pbVar19[1] * fStack276 * local_108;
                        in_XMM1 = ZEXT416((uint)fVar46) & (undefined  [16])0xffffffffffffffff;
                        fVar45 = (float)(uint)pbVar19[5] * fStack276 * local_118;
                        auVar30 = ZEXT416((uint)fVar45) & (undefined  [16])0xffffffffffffffff;
                        fVar45 = ((float)(uint)pbVar21[5] * fStack260 * local_118 +
                                  (float)(uint)pbVar21[1] * fStack260 * local_108 + fVar46 + fVar45) * fVar47;
                        in_XMM2 = ZEXT416((uint)fVar45) & (undefined  [16])0xffffffffffffffff;
                        *(float *)(param_3 + 0x54) = fVar45;
                    }
                    if ((param_1[0x8f] != 0) && (*(int *)(param_1[0x8f] + 0x18) != 0)) {
                        fVar45 = (float)(uint)(*(ushort *)(pbVar19 + 6) & 0xff) * fStack276 * local_118;
                        auVar30 = ZEXT416((uint)fVar45) & (undefined  [16])0xffffffffffffffff;
                        fVar45 = ((float)(uint)(*(ushort *)(pbVar21 + 6) & 0xff) * fStack260 * local_118 +
                                  (float)(uint)(*(ushort *)(pbVar21 + 2) & 0xff) * fStack260 * local_108 +
                                  (float)(uint)(*(ushort *)(pbVar19 + 2) & 0xff) * fStack276 * local_108 +
                                  fVar45) * fVar47;
                        in_XMM1 = ZEXT416((uint)fVar45) & (undefined  [16])0xffffffffffffffff;
                        *(float *)(param_3 + 0x58) = fVar45;
                    }
                    if ((param_1[0x90] != 0) && (*(int *)(param_1[0x90] + 0x18) != 0)) {
                        fVar46 = (float)(uint)pbVar19[3] * fStack276 * local_108;
                        in_XMM1 = ZEXT416((uint)fVar46) & (undefined  [16])0xffffffffffffffff;
                        fVar45 = (float)(uint)pbVar19[7] * fStack276 * local_118;
                        auVar30 = ZEXT416((uint)fVar45) & (undefined  [16])0xffffffffffffffff;
                        fVar47 = ((float)(uint)pbVar21[7] * fStack260 * local_118 +
                                  (float)(uint)pbVar21[3] * fStack260 * local_108 + fVar46 + fVar45) * fVar47;
                        in_XMM2 = ZEXT416((uint)fVar47) & (undefined  [16])0xffffffffffffffff;
                        *(float *)(param_3 + 0x5c) = fVar47;
                    }
                    if (local_188 != (longlong *)0x0) {
                        (**(code **)(*local_188 + 8))();
                        auVar30 = extraout_XMM0_04;
                    }
                }
                auVar29 = _DAT_140c77860;
                if ((param_4 & 0x1800) != 0) {
                    *(undefined (*) [16])(param_3 + 0x60) = _DAT_140c77860;
                    in_XMM1 = _DAT_140c77870;
                    *(undefined (*) [16])(param_3 + 0x70) = _DAT_140c77870;
                    auVar30 = auVar29;
                }
                fVar45 = fVar40;
                if ((param_4 >> 0xc & 1) != 0) {
                    in_XMM2 = in_XMM2 & (undefined  [16])0x0;
                    pfVar20 = (float *)(param_3 + 0x50);
                    param_1 = param_1 + 0x8d;
                    local_128 = in_XMM2;
                    do {
                        lVar24 = *param_1;
                        if ((lVar24 != 0) && (fVar47 = *pfVar20, fVar47 != fVar41)) {
                            fVar40 = *(float *)(lVar24 + 0x60) * fVar47;
                            fVar46 = *(float *)(lVar24 + 100) * fVar47;
                            fVar27 = *(float *)(lVar24 + 0x68) * fVar47;
                            fVar47 = *(float *)(lVar24 + 0x6c) * fVar47;
                            in_XMM1 = CONCAT412(fVar47,CONCAT48(fVar27,CONCAT44(fVar46,fVar40)));
                            in_XMM2 = CONCAT412(fVar47 + SUB164(in_XMM2 >> 0x60,0),
                                                CONCAT48(fVar27 + SUB164(in_XMM2 >> 0x40,0),
                                                         CONCAT44(fVar46 + SUB164(in_XMM2 >> 0x20,0),
                                                                  fVar40 + SUB164(in_XMM2,0))));
                            local_128 = in_XMM2;
                        }
                        param_1 = param_1 + 1;
                        pfVar20 = pfVar20 + 1;
                        lVar6 = lVar6 + -1;
                    } while (lVar6 != 0);
                    auVar30 = ZEXT416(local_128._4_4_);
                    *(undefined (*) [16])(param_3 + 0x80) =
                            CONCAT88(SUB168(CONCAT412(SUB164(in_XMM1 >> 0x20,0),
                                                      CONCAT48(local_128._4_4_,SUB168(local_128,0))) >> 0x40,0),
                                     SUB168(local_128,0)) & (undefined  [16])0xffffffffffffffff;
                }
            }
        }
        if (local_180 != (longlong *)0x0) {
            (**(code **)(*local_180 + 8))();
            auVar30 = extraout_XMM0_05;
        }
        if (fVar45 != fVar39) {
            return;
        }
    }
    if ((param_4 & 0x40) != 0) {
        *(undefined4 *)(param_3 + 0x90) = 0xff7fffff;
    }
    auVar29 = _DAT_140c77870;
    if ((char)param_4 < '\0') {
        *(undefined (*) [16])(param_3 + 0x40) = _DAT_140c77870;
        auVar30 = auVar29;
    }
    if ((param_4 >> 8 & 1) != 0) {
        *(undefined4 *)(param_3 + 0x94) = 0;
    }
    if ((param_4 >> 9 & 1) != 0) {
        *(undefined8 *)(param_3 + 0x98) = 0;
        *(undefined8 *)(param_3 + 0xa0) = 0;
    }
    if ((param_4 >> 10 & 1) != 0) {
        *(undefined8 *)(param_3 + 0x50) = 0;
        *(undefined8 *)(param_3 + 0x58) = 0;
    }
    if ((param_4 >> 0xb & 1) != 0) {
        *(undefined8 *)(param_3 + 0x60) = 0;
        *(undefined8 *)(param_3 + 0x68) = 0;
        *(undefined8 *)(param_3 + 0x70) = 0;
        *(undefined8 *)(param_3 + 0x78) = 0;
    }
    if ((param_4 >> 0xc & 1) != 0) {
        *(undefined (*) [16])(param_3 + 0x80) = auVar30 & (undefined  [16])0x0;
    }
    // WARNING: Read-only address (ram,0x000140b7b490) is written
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140388a30(longlong *param_1,float *param_2,longlong param_3,uint param_4)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    int iVar6;
    HANDLE pvVar7;
    longlong *plVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    uint uVar11;
    float fVar12;
    undefined auVar13 [16];
    undefined in_XMM4 [16];
    undefined auStack312 [32];
    int local_118;
    int local_114;
    undefined4 local_110;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    undefined4 local_e8;
    undefined local_d8 [76];
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    uVar10 = 0;
    if (param_1[0xb5] != 0) {
        lVar2 = *param_1;
        DVar5 = GetCurrentThreadId();
        if (*(DWORD *)(lVar2 + 0x30) == DVar5) {
            *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 1;
        }
        else {
            do {
                LOCK();
                puVar1 = (ulonglong *)(lVar2 + 0x38);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD *)(lVar2 + 0x30) = DVar5;
                    goto LAB_140388ac6;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < 0x400);
            FUN_14019fb60();
        }
        LAB_140388ac6:
        local_e8 = 0xffffffff;
        if (param_1[0xb5] != 0) {
            FUN_14037cc30();
        }
        if (*(ulonglong *)(lVar2 + 0x38) < 2) {
            *(undefined4 *)(lVar2 + 0x30) = 0;
            *(undefined8 *)(lVar2 + 0x38) = 0;
            if (*(longlong *)(lVar2 + 0x40) != 0) {
                if (*(longlong *)(lVar2 + 0x48) == 0) {
                    pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    puVar1 = (ulonglong *)(lVar2 + 0x48);
                    uVar10 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong)pvVar7);
                    if (uVar10 != 0) {
                        CloseHandle(pvVar7);
                    }
                }
                SetEvent(*(HANDLE *)(lVar2 + 0x48));
            }
        }
        else {
            *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + -1;
        }
    }
    if ((param_4 >> 0xd & 1) != 0) {
        for (lVar2 = *(longlong *)(param_1[3] + 0x28); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18))
        {
            plVar8 = *(longlong **)(lVar2 + 8);
            iVar6 = (**(code **)(*(longlong *)plVar8[2] + 0x50))();
            if (iVar6 == 0) {
                lVar3 = *param_1;
                DVar5 = GetCurrentThreadId();
                if (*(DWORD *)(lVar3 + 0x30) == DVar5) {
                    *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + 1;
                }
                else {
                    uVar10 = 0;
                    do {
                        LOCK();
                        puVar1 = (ulonglong *)(lVar3 + 0x38);
                        uVar4 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                        if (uVar4 == 0) {
                            *(DWORD *)(lVar3 + 0x30) = DVar5;
                            goto LAB_140388bb6;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < 0x400);
                    FUN_14019fb60(lVar3 + 0x30);
                }
                LAB_140388bb6:
                local_110 = 0xffffffff;
                (**(code **)(*(longlong *)plVar8[2] + 0x58))();
                if (*(ulonglong *)(lVar3 + 0x38) < 2) {
                    *(undefined4 *)(lVar3 + 0x30) = 0;
                    *(undefined8 *)(lVar3 + 0x38) = 0;
                    if (*(longlong *)(lVar3 + 0x40) != 0) {
                        if (*(longlong *)(lVar3 + 0x48) == 0) {
                            pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                            LOCK();
                            puVar1 = (ulonglong *)(lVar3 + 0x48);
                            uVar10 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar10 == 0) * (*puVar1 ^ (ulonglong)pvVar7);
                            if (uVar10 != 0) {
                                CloseHandle(pvVar7);
                            }
                        }
                        SetEvent(*(HANDLE *)(lVar3 + 0x48));
                    }
                }
                else {
                    *(longlong *)(lVar3 + 0x38) = *(longlong *)(lVar3 + 0x38) + -1;
                }
            }
            iVar6 = (**(code **)(*plVar8 + 0x18))();
            if ((iVar6 == 0) && (iVar6 = (**(code **)(*plVar8 + 0x20))(), iVar6 != 0)) {
                if (*(int *)(param_3 + 0xa8) != 0) {
                    param_4 = param_4 & 0xffffdfff;
                }
                break;
            }
        }
    }
    uVar11 = 0;
    if ((param_4 & 0x1a000) != 0) {
        auVar13 = minps(CONCAT412((param_2[2] * DAT_140c44580 + 0.5) * 2048.0,
                                  CONCAT48((*param_2 * DAT_140c44580 + 0.5) * 2048.0,
                                           CONCAT44((param_2[2] * DAT_140c44580 + 0.5) * 2048.0,
                                                    (*param_2 * DAT_140c44580 + 0.5) * 2048.0))),
                        _DAT_140b7b490);
        auVar13 = maxps(in_XMM4 & (undefined  [16])0x0,auVar13);
        local_118 = (int)SUB164(auVar13,0);
        fStack244 = SUB164(auVar13 >> 0x20,0);
        if (0x7ff < local_118) {
            local_118 = 0x7ff;
        }
        local_114 = (int)fStack244;
        if (0x7ff < local_114) {
            local_114 = 0x7ff;
        }
        if ((param_4 & 0x2000) != 0) {
            uVar11 = 0x80;
        }
        local_f8 = SUB164(auVar13,0) - (float)local_118;
        fStack244 = fStack244 - (float)local_114;
        fStack240 = SUB164(auVar13 >> 0x40,0) - 0.0;
        fStack236 = SUB164(auVar13 >> 0x60,0) - 0.0;
        if ((param_4 & 0x8000) != 0) {
            uVar11 = uVar11 | 0x100;
        }
        if ((param_4 & 0x10000) != 0) {
            uVar11 = uVar11 | 0x200;
        }
        (**(code **)(*(longlong *)param_1[2] + 0xc0))((longlong *)param_1[2],&local_f8,local_d8,uVar11);
        if ((param_4 & 0x2000) != 0) {
            *(undefined4 *)(param_3 + 0xa8) = local_8c;
        }
        if ((param_4 & 0x8000) != 0) {
            *(undefined4 *)(param_3 + 0xd0) = local_88;
            *(undefined4 *)(param_3 + 0xd4) = uStack132;
            *(undefined4 *)(param_3 + 0xd8) = uStack128;
            *(undefined4 *)(param_3 + 0xdc) = uStack124;
        }
        if ((param_4 & 0x10000) != 0) {
            *(undefined4 *)(param_3 + 0xb0) = local_78;
            *(undefined4 *)(param_3 + 0xb4) = uStack116;
            *(undefined4 *)(param_3 + 0xb8) = uStack112;
            *(undefined4 *)(param_3 + 0xbc) = uStack108;
        }
    }
    if ((param_4 >> 0xe & 1) != 0) {
        plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x20))();
        if (plVar8 == (longlong *)0x0) {
            *(undefined4 *)(param_3 + 0xac) = 0;
        }
        else {
            puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x20))();
            *(undefined4 *)(param_3 + 0xac) = *puVar9;
        }
    }
    if ((param_4 >> 0x11 & 1) != 0) {
        fVar12 = *(float *)((longlong)param_1 + 0x394);
        if (*(float *)((longlong)param_1 + 0xc4) <= *(float *)((longlong)param_1 + 0x394)) {
            fVar12 = *(float *)((longlong)param_1 + 0xc4);
        }
        *(float *)(param_3 + 0xc0) = fVar12;
        fVar12 = *(float *)((longlong)param_1 + 0x3a4);
        if (*(float *)((longlong)param_1 + 0x3a4) <= *(float *)((longlong)param_1 + 0xd4)) {
            fVar12 = *(float *)((longlong)param_1 + 0xd4);
        }
        *(float *)(param_3 + 0xc4) = fVar12;
    }
    if ((param_4 >> 0x12 & 1) != 0) {
        fVar12 = *(float *)((longlong)param_1 + 0x3b4);
        if (*(float *)((longlong)param_1 + 0xc4) <= *(float *)((longlong)param_1 + 0x3b4)) {
            fVar12 = *(float *)((longlong)param_1 + 0xc4);
        }
        *(float *)(param_3 + 200) = fVar12;
        fVar12 = *(float *)((longlong)param_1 + 0x3c4);
        if (*(float *)((longlong)param_1 + 0x3c4) <= *(float *)((longlong)param_1 + 0xd4)) {
            fVar12 = *(float *)((longlong)param_1 + 0xd4);
        }
        *(float *)(param_3 + 0xcc) = fVar12;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack312);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140388e70(longlong param_1,undefined (*param_2) [16],ulonglong param_3,longlong param_4)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined4 *puVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    int iVar13;
    int iVar14;
    uint uVar15;
    uint uVar16;
    float fVar17;
    float fVar18;
    float fVar20;
    float fVar21;
    undefined auVar19 [16];
    float fVar22;
    undefined auVar23 [16];
    undefined local_198 [8];
    float fStack400;
    undefined4 uStack396;
    longlong local_188;
    undefined local_178 [8];
    float fStack368;
    undefined4 uStack364;
    undefined local_168 [8];
    float fStack352;
    undefined local_158 [8];
    float fStack336;
    undefined4 uStack332;
    int local_148;
    int local_144;
    int local_140;
    int local_13c;
    undefined local_138 [8];
    float fStack304;
    undefined4 uStack300;
    undefined local_128 [8];
    float fStack288;
    longlong *local_118 [2];
    undefined local_108 [8];
    float fStack256;
    float local_f8;
    float fStack244;
    float fStack240;
    float fStack236;
    longlong local_e8;

    if ((param_3 & 3) != 0) {
        _local_108 = CONCAT124(stack0xfffffffffffffefc,0xffffffff);
        if (*(int *)(param_1 + 0x20) != 0xf) {
            FUN_14037cb70();
        }
        auVar23 = minps(param_2[1],*(undefined (*) [16])(param_1 + 0xd0));
        auVar19 = maxps(*param_2,*(undefined (*) [16])(param_1 + 0xc0));
        if (SUB164(auVar19,0) <= SUB164(auVar23,0)) {
            if ((SUB164(auVar19 >> 0x20,0) <= SUB164(auVar23 >> 0x20,0)) &&
                (SUB164(auVar19 >> 0x40,0) <= SUB164(auVar23 >> 0x40,0))) {
                _local_138 = auVar19;
                _local_128 = auVar23;
                uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
                fStack236 = 1.0 / DAT_140c44574;
                fVar18 = (SUB164(auVar19,0) - *(float *)(uVar5 + 0x20)) * fStack236;
                fVar20 = (SUB164(auVar19 >> 0x20,0) - *(float *)(uVar5 + 0x24)) * fStack236;
                lVar7 = CONCAT44(fVar20,fVar18);
                fVar21 = (SUB164(auVar19 >> 0x40,0) - *(float *)(uVar5 + 0x28)) * fStack236;
                _local_108 = CONCAT412((SUB164(auVar19 >> 0x60,0) - *(float *)(uVar5 + 0x2c)) * fStack236,
                                       CONCAT48(fVar21,lVar7));
                local_f8 = (SUB164(auVar23,0) - *(float *)(uVar5 + 0x20)) * fStack236;
                fStack244 = (SUB164(auVar23 >> 0x20,0) - *(float *)(uVar5 + 0x24)) * fStack236;
                fStack240 = (SUB164(auVar23 >> 0x40,0) - *(float *)(uVar5 + 0x28)) * fStack236;
                fStack236 = (SUB164(auVar23 >> 0x60,0) - *(float *)(uVar5 + 0x2c)) * fStack236;
                iVar10 = (int)fVar18;
                auVar19 = _local_108;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar18)) {
                    uVar3 = movmskps((int)uVar5,
                                     CONCAT88(SUB168(CONCAT412(fVar20,CONCAT48(fVar20,lVar7)) >> 0x40,0),
                                              (ulonglong)(uint)fVar18 | lVar7 << 0x20));
                    uVar5 = (ulonglong)(uVar3 & 1);
                    auVar19 = ZEXT416((uint)(float)(iVar10 - (uVar3 & 1)));
                }
                uVar3 = (uint)uVar5;
                iVar10 = (int)fVar21;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar21)) {
                    uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(fVar21,fVar21)));
                    uVar3 = uVar3 & 1;
                    fVar21 = (float)(iVar10 - uVar3);
                }
                local_148 = (int)SUB164(auVar19,0);
                if ((int)SUB164(auVar19,0) < DAT_140c77760) {
                    local_148 = DAT_140c77760;
                }
                local_144 = (int)fVar21;
                if ((int)fVar21 < DAT_140c77764) {
                    local_144 = DAT_140c77764;
                }
                iVar10 = (int)local_f8;
                fVar21 = local_f8;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != local_f8)) {
                    uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(local_f8,local_f8)));
                    uVar3 = uVar3 & 1;
                    fVar21 = (float)(iVar10 - uVar3);
                }
                auVar19 = ZEXT416((uint)fStack240);
                iVar10 = (int)fStack240;
                local_140 = (int)fVar21 + 1;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fStack240)) {
                    uVar3 = movmskps(uVar3,ZEXT816(CONCAT44(fStack240,fStack240)));
                    auVar19 = ZEXT416((uint)(float)(iVar10 - (uVar3 & 1)));
                }
                local_13c = (int)SUB164(auVar19,0) + 1;
                if (0x10 < local_140) {
                    local_140 = 0x10;
                }
                if (0x10 < local_13c) {
                    local_13c = 0x10;
                }
                (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                        (*(longlong **)(param_1 + 0x10),0,local_118,1);
                lVar6 = (**(code **)(*local_118[0] + 0x10))();
                local_e8 = lVar6;
                lVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
                iVar10 = local_144 * 0x21;
                _local_108 = *(undefined (*) [16])(lVar7 + 0x20);
                lVar7 = (**(code **)(*local_118[0] + 0x18))();
                lVar7 = *(int *)(lVar6 + 0x2c) * local_144 + lVar7;
                local_188 = lVar7;
                if (local_144 < local_13c) {
                    fVar21 = fStack304;
                    fVar18 = local_138._4_4_;
                    fVar20 = local_138._0_4_;
                    iVar14 = local_148;
                    iVar4 = local_13c;
                    iVar13 = local_144;
                    do {
                        iVar2 = iVar14;
                        local_188 = lVar7;
                        if (iVar14 < local_140) {
                            do {
                                uVar3 = 0;
                                if (((*(ushort *)(lVar7 + (longlong)iVar14 * 2) & 0x8000) == 0) ||
                                    ((param_3 & 2) != 0)) {
                                    uVar1 = SUB164(auVar19,0);
                                    auVar19 = auVar19 & (undefined  [16])0x0;
                                    lVar7 = *(longlong *)(param_1 + 0x98);
                                    uVar11 = iVar10 + iVar14;
                                    fVar22 = (float)iVar13 * DAT_140c44574 + fStack256;
                                    local_108._0_4_ = (float)iVar14 * DAT_140c44574 + local_108._0_4_;
                                    _local_158 = CONCAT412(uVar1,CONCAT48(fVar22,CONCAT44(*(undefined4 *)
                                                                                                  (lVar7 + 0xc +
                                                                                                   (ulonglong)uVar11 * 0x10),
                                                                                          local_108._0_4_))) &
                                                 (undefined  [16])0xffffffffffffffff;
                                    _local_138 = CONCAT412(uVar1,CONCAT48(fVar22,CONCAT44(*(undefined4 *)
                                            (lVar7 + 0xc +
                                             (ulonglong)(uVar11 + 1) *
                                             0x10),local_108._0_4_ +
                                                   DAT_140c44574))) &
                                                 (undefined  [16])0xffffffffffffffff;
                                    fVar17 = DAT_140c44574 * 0.5 + local_108._0_4_;
                                    _local_198 = CONCAT412(uVar1,CONCAT48(DAT_140c44574 * 0.5 + fVar22,
                                                                          CONCAT44(*(undefined4 *)
                                                                                           (lVar7 + 0xc +
                                                                                            (ulonglong)(uVar11 + 0x11) * 0x10)
                                                                                  ,fVar17))) &
                                                 (undefined  [16])0xffffffffffffffff;
                                    _local_178 = CONCAT412(uVar1,CONCAT48(fVar22 + DAT_140c44574,
                                                                          CONCAT44(*(undefined4 *)
                                                                                           (lVar7 + 0xc +
                                                                                            (ulonglong)(uVar11 + 0x21) * 0x10)
                                                                                  ,local_108._0_4_))) &
                                                 (undefined  [16])0xffffffffffffffff;
                                    _local_168 = CONCAT412(uVar1,CONCAT48(fVar22 + DAT_140c44574,
                                                                          CONCAT44(*(undefined4 *)
                                                                                           (lVar7 + 0xc +
                                                                                            (ulonglong)(uVar11 + 0x22) * 0x10)
                                                                                  ,local_108._0_4_ + DAT_140c44574)))
                                                 & (undefined  [16])0xffffffffffffffff;
                                    if (fVar20 <= fVar17) {
                                        uVar11 = uVar3;
                                        if (local_128._0_4_ < fVar17) {
                                            uVar11 = 2;
                                        }
                                    }
                                    else {
                                        uVar11 = 1;
                                    }
                                    local_198._4_4_ = SUB164(_local_198 >> 0x20,0);
                                    if (fVar18 <= local_198._4_4_) {
                                        if (local_128._4_4_ < local_198._4_4_) {
                                            uVar11 = uVar11 | 8;
                                        }
                                    }
                                    else {
                                        uVar11 = uVar11 | 4;
                                    }
                                    fStack400 = SUB164(_local_198 >> 0x40,0);
                                    if (fVar21 <= fStack400) {
                                        if (fStack288 < fStack400) {
                                            uVar11 = uVar11 | 0x20;
                                        }
                                    }
                                    else {
                                        uVar11 = uVar11 | 0x10;
                                    }
                                    if (uVar11 == 0) {
                                        if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                                            (iVar4 = (**(code **)(param_4 + 0x28))
                                                    (local_198,local_158,local_178,
                                                     *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            puVar9[4] = local_158._0_4_;
                                            puVar9[5] = local_158._4_4_;
                                            puVar9[6] = fStack336;
                                            puVar9[7] = uStack332;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_178;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_178;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                                            (iVar4 = (**(code **)(param_4 + 0x28))
                                                    (local_198,local_138,local_158,
                                                     *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            puVar9[4] = local_138._0_4_;
                                            puVar9[5] = local_138._4_4_;
                                            puVar9[6] = fStack304;
                                            puVar9[7] = uStack300;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_158;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_158;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                                            (iVar4 = (**(code **)(param_4 + 0x28))
                                                    (local_198,local_178,local_168,
                                                     *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            puVar9[4] = local_178._0_4_;
                                            puVar9[5] = local_178._4_4_;
                                            puVar9[6] = fStack368;
                                            puVar9[7] = uStack364;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_168;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_168;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                                            (iVar4 = (**(code **)(param_4 + 0x28))
                                                    (local_198,local_168,local_138,
                                                     *(undefined8 *)(param_4 + 0x30)), lVar7 = local_188,
                                                    iVar4 != 0)) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            *(undefined (*) [16])(puVar9 + 4) = _local_168;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_138;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            lVar7 = local_188;
                                            auVar19 = _local_138;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                                lVar7 = local_188;
                                            }
                                        }
                                    }
                                    else {
                                        if (fVar20 <= local_158._0_4_) {
                                            uVar16 = uVar3;
                                            if (local_128._0_4_ < local_158._0_4_) {
                                                uVar16 = 2;
                                            }
                                        }
                                        else {
                                            uVar16 = 1;
                                        }
                                        local_158._4_4_ = SUB164(_local_158 >> 0x20,0);
                                        if (fVar18 <= local_158._4_4_) {
                                            if (local_128._4_4_ < local_158._4_4_) {
                                                uVar16 = uVar16 | 8;
                                            }
                                        }
                                        else {
                                            uVar16 = uVar16 | 4;
                                        }
                                        fStack336 = SUB164(_local_158 >> 0x40,0);
                                        if (fVar21 <= fStack336) {
                                            if (fStack288 < fStack336) {
                                                uVar16 = uVar16 | 0x20;
                                            }
                                        }
                                        else {
                                            uVar16 = uVar16 | 0x10;
                                        }
                                        if (fVar20 <= local_138._0_4_) {
                                            if (local_128._0_4_ < local_138._0_4_) {
                                                uVar3 = 2;
                                            }
                                        }
                                        else {
                                            uVar3 = 1;
                                        }
                                        local_138._4_4_ = SUB164(_local_138 >> 0x20,0);
                                        if (fVar18 <= local_138._4_4_) {
                                            if (local_128._4_4_ < local_138._4_4_) {
                                                uVar3 = uVar3 | 8;
                                            }
                                        }
                                        else {
                                            uVar3 = uVar3 | 4;
                                        }
                                        fStack304 = SUB164(_local_138 >> 0x40,0);
                                        if (fVar21 <= fStack304) {
                                            if (fStack288 < fStack304) {
                                                uVar3 = uVar3 | 0x20;
                                            }
                                        }
                                        else {
                                            uVar3 = uVar3 | 0x10;
                                        }
                                        if (fVar20 <= local_178._0_4_) {
                                            uVar15 = 0;
                                            if (local_128._0_4_ < local_178._0_4_) {
                                                uVar15 = 2;
                                            }
                                        }
                                        else {
                                            uVar15 = 1;
                                        }
                                        local_178._4_4_ = SUB164(_local_178 >> 0x20,0);
                                        if (fVar18 <= local_178._4_4_) {
                                            if (local_128._4_4_ < local_178._4_4_) {
                                                uVar15 = uVar15 | 8;
                                            }
                                        }
                                        else {
                                            uVar15 = uVar15 | 4;
                                        }
                                        fStack368 = SUB164(_local_178 >> 0x40,0);
                                        if (fVar21 <= fStack368) {
                                            if (fStack288 < fStack368) {
                                                uVar15 = uVar15 | 0x20;
                                            }
                                        }
                                        else {
                                            uVar15 = uVar15 | 0x10;
                                        }
                                        if (fVar20 <= local_168._0_4_) {
                                            uVar12 = 0;
                                            if (local_128._0_4_ < local_168._0_4_) {
                                                uVar12 = 2;
                                            }
                                        }
                                        else {
                                            uVar12 = 1;
                                        }
                                        local_168._4_4_ = SUB164(_local_168 >> 0x20,0);
                                        if (fVar18 <= local_168._4_4_) {
                                            if (local_128._4_4_ < local_168._4_4_) {
                                                uVar12 = uVar12 | 8;
                                            }
                                        }
                                        else {
                                            uVar12 = uVar12 | 4;
                                        }
                                        fStack352 = SUB164(_local_168 >> 0x40,0);
                                        if (fVar21 <= fStack352) {
                                            if (fStack288 < fStack352) {
                                                uVar12 = uVar12 | 0x20;
                                            }
                                        }
                                        else {
                                            uVar12 = uVar12 | 0x10;
                                        }
                                        if (((uVar11 & uVar15 & uVar16) == 0) &&
                                            ((*(code **)(param_4 + 0x28) == (code *)0x0 ||
                                              (iVar4 = (**(code **)(param_4 + 0x28))
                                                      (local_198,local_158,local_178,
                                                       *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)))) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            *(undefined (*) [16])(puVar9 + 4) = _local_158;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_178;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_178;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        if (((uVar11 & uVar3 & uVar16) == 0) &&
                                            ((*(code **)(param_4 + 0x28) == (code *)0x0 ||
                                              (iVar4 = (**(code **)(param_4 + 0x28))
                                                      (local_198,local_138,local_158,
                                                       *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)))) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            *(undefined (*) [16])(puVar9 + 4) = _local_138;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_158;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_158;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        if (((uVar11 & uVar12 & uVar15) == 0) &&
                                            ((*(code **)(param_4 + 0x28) == (code *)0x0 ||
                                              (iVar4 = (**(code **)(param_4 + 0x28))
                                                      (local_198,local_178,local_168,
                                                       *(undefined8 *)(param_4 + 0x30)), iVar4 != 0)))) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            *(undefined (*) [16])(puVar9 + 4) = _local_178;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_168;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            auVar19 = _local_168;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                            }
                                        }
                                        lVar7 = local_188;
                                        if (((uVar11 & uVar12 & uVar3) == 0) &&
                                            ((*(code **)(param_4 + 0x28) == (code *)0x0 ||
                                              (iVar4 = (**(code **)(param_4 + 0x28))
                                                      (local_198,local_168,local_138,
                                                       *(undefined8 *)(param_4 + 0x30)), lVar7 = local_188,
                                                      iVar4 != 0)))) {
                                            iVar4 = *(int *)(param_4 + 0x10);
                                            if (*(int *)(param_4 + 0xc) == iVar4) {
                                                if (iVar4 == 0) {
                                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                                }
                                                else {
                                                    *(int *)(param_4 + 0x10) = iVar4 * 2;
                                                }
                                                uVar8 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                                                      (ulonglong)*(uint *)(param_4 + 0x10) * 0x30);
                                                *(undefined8 *)(param_4 + 0x18) = uVar8;
                                            }
                                            puVar9 = (undefined4 *)
                                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                                     *(longlong *)(param_4 + 0x18));
                                            *puVar9 = local_198._0_4_;
                                            puVar9[1] = local_198._4_4_;
                                            puVar9[2] = fStack400;
                                            puVar9[3] = uStack396;
                                            *(undefined (*) [16])(puVar9 + 4) = _local_168;
                                            *(undefined (*) [16])(puVar9 + 8) = _local_138;
                                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                                            lVar7 = local_188;
                                            auVar19 = _local_138;
                                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                                FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                                                *(undefined8 *)(param_4 + 0x20) = 0;
                                                lVar7 = local_188;
                                            }
                                        }
                                    }
                                }
                                iVar14 = iVar14 + 1;
                                lVar6 = local_e8;
                                iVar2 = local_148;
                                iVar4 = local_13c;
                            } while (iVar14 < local_140);
                        }
                        iVar14 = iVar2;
                        iVar13 = iVar13 + 1;
                        iVar10 = iVar10 + 0x21;
                        lVar7 = lVar7 + *(int *)(lVar6 + 0x2c);
                        local_188 = lVar7;
                    } while (iVar13 < iVar4);
                }
                (**(code **)(*local_118[0] + 8))();
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140389a30(longlong param_1,undefined (*param_2) [16],ulonglong param_3,longlong param_4)

{
    int iVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    float fVar4;
    undefined auVar5 [16];
    float fVar6;
    undefined auVar7 [16];
    undefined local_48 [8];
    undefined4 uStack64;
    undefined4 uStack60;
    undefined local_38 [8];
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [8];
    undefined4 uStack32;
    undefined4 uStack28;
    undefined local_18 [8];
    undefined4 uStack16;
    undefined4 uStack12;

    if (((param_3 & 4) != 0) && ((*(byte *)(param_1 + 0x460) & 1) != 0)) {
        auVar7 = minps(param_2[1],*(undefined (*) [16])(param_1 + 0x4b0));
        auVar5 = maxps(*param_2,*(undefined (*) [16])(param_1 + 0x4a0));
        fVar4 = SUB164(auVar5,0);
        fVar6 = SUB164(auVar7,0);
        if ((fVar4 <= fVar6) && (SUB164(auVar5 >> 0x20,0) <= SUB164(auVar7 >> 0x20,0))) {
            _local_48 = ZEXT816(CONCAT44(0xc47a0000,fVar4));
            _local_28 = ZEXT816(CONCAT44(0xc47a0000,fVar4));
            _local_38 = ZEXT816(CONCAT44(0xc47a0000,fVar6));
            _local_18 = ZEXT816(CONCAT44(0xc47a0000,fVar6));
            if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                (iVar1 = (**(code **)(param_4 + 0x28))
                        (0,local_48,local_28,local_38,*(undefined8 *)(param_4 + 0x30)),
                        iVar1 != 0)) {
                iVar1 = *(int *)(param_4 + 0x10);
                if (*(int *)(param_4 + 0xc) == iVar1) {
                    if (iVar1 == 0) {
                        *(undefined4 *)(param_4 + 0x10) = 0x10;
                    }
                    else {
                        *(int *)(param_4 + 0x10) = iVar1 * 2;
                    }
                    uVar2 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                          (ulonglong)*(uint *)(param_4 + 0x10) * 0x30,8);
                    *(undefined8 *)(param_4 + 0x18) = uVar2;
                }
                puVar3 = (undefined4 *)
                        ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                         *(longlong *)(param_4 + 0x18));
                *puVar3 = local_48._0_4_;
                puVar3[1] = local_48._4_4_;
                puVar3[2] = uStack64;
                puVar3[3] = uStack60;
                puVar3[4] = local_28._0_4_;
                puVar3[5] = local_28._4_4_;
                puVar3[6] = uStack32;
                puVar3[7] = uStack28;
                puVar3[8] = local_38._0_4_;
                puVar3[9] = local_38._4_4_;
                puVar3[10] = uStack48;
                puVar3[0xb] = uStack44;
                *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                if (*(longlong *)(param_4 + 0x20) != 0) {
                    FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                    *(undefined8 *)(param_4 + 0x20) = 0;
                }
            }
            if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                (iVar1 = (**(code **)(param_4 + 0x28))
                        (local_48,local_38,local_18,*(undefined8 *)(param_4 + 0x30)), iVar1 != 0
                )) {
                iVar1 = *(int *)(param_4 + 0x10);
                if (*(int *)(param_4 + 0xc) == iVar1) {
                    if (iVar1 == 0) {
                        *(undefined4 *)(param_4 + 0x10) = 0x10;
                    }
                    else {
                        *(int *)(param_4 + 0x10) = iVar1 * 2;
                    }
                    uVar2 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18),
                                          (ulonglong)*(uint *)(param_4 + 0x10) * 0x30,8);
                    *(undefined8 *)(param_4 + 0x18) = uVar2;
                }
                puVar3 = (undefined4 *)
                        ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                         *(longlong *)(param_4 + 0x18));
                *puVar3 = local_48._0_4_;
                puVar3[1] = local_48._4_4_;
                puVar3[2] = uStack64;
                puVar3[3] = uStack60;
                puVar3[4] = local_38._0_4_;
                puVar3[5] = local_38._4_4_;
                puVar3[6] = uStack48;
                puVar3[7] = uStack44;
                puVar3[8] = local_18._0_4_;
                puVar3[9] = local_18._4_4_;
                puVar3[10] = uStack16;
                puVar3[0xb] = uStack12;
                *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                if (*(longlong *)(param_4 + 0x20) != 0) {
                    FUN_14018b900(*(longlong *)(param_4 + 0x20),0);
                    *(undefined8 *)(param_4 + 0x20) = 0;
                }
            }
        }
    }
    return;
}



void FUN_140389c40(longlong *param_1)

{
    ulonglong *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong *plVar8;

    lVar3 = *param_1;
    DVar6 = GetCurrentThreadId();
    uVar7 = 0;
    if (*(DWORD *)(lVar3 + 0x50) == DVar6) {
        *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x58) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar3 + 0x58);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD *)(lVar3 + 0x50) = DVar6;
                goto LAB_140389c9f;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(lVar3 + 0x50,DVar6);
    }
    LAB_140389c9f:
    lVar5 = param_1[0xae];
    while (lVar5 != 0) {
        if (*(longlong *)(*param_1 + 0x17d0) == lVar5) {
            *(undefined8 *)(*param_1 + 0x17d0) = *(undefined8 *)(lVar5 + 0x110);
        }
        lVar5 = param_1[0xae];
        if (*(undefined8 **)(lVar5 + 0x108) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar5 + 0x108) = *(undefined8 *)(lVar5 + 0x110);
        }
        if (*(longlong *)(lVar5 + 0x110) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x110) + 0x108) = *(undefined8 *)(lVar5 + 0x108);
        }
        *(undefined8 *)(lVar5 + 0x108) = 0;
        *(undefined8 *)(lVar5 + 0x110) = 0;
        lVar5 = param_1[0xae];
        plVar8 = (longlong *)(*param_1 + 0x17e8);
        if (*(longlong *)(lVar5 + 0x108) == 0) {
            *(longlong **)(lVar5 + 0x108) = plVar8;
            plVar2 = (longlong *)(lVar5 + 0x110);
            *plVar2 = *plVar8;
            *plVar8 = lVar5;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x108) = plVar2;
            }
        }
        FUN_1400b6120(*param_1 + 0x17f0,param_1[0xae]);
        lVar5 = param_1[0xae];
        if (*(undefined8 **)(lVar5 + 0x118) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar5 + 0x118) = *(undefined8 *)(lVar5 + 0x120);
        }
        if (*(longlong *)(lVar5 + 0x120) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x120) + 0x118) = *(undefined8 *)(lVar5 + 0x118);
        }
        *(undefined8 *)(lVar5 + 0x118) = 0;
        *(undefined8 *)(lVar5 + 0x120) = 0;
        lVar5 = param_1[0xae];
    }
    if (1 < *(ulonglong *)(lVar3 + 0x58)) {
        *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x58) + -1;
        return;
    }
    *(undefined4 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
        if (*(longlong *)(lVar3 + 0x68) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
            LOCK();
            puVar1 = (ulonglong *)(lVar3 + 0x68);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong)hObject);
            if (uVar7 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE *)(lVar3 + 0x68));
    }
    return;
}



void FUN_140389e30(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    ulonglong uVar5;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1);
        if (*param_1 != lVar2) {
            uVar5 = 0;
            if (param_1[1] != 0) {
                puVar4 = (undefined4 *)(lVar2 + 8);
                do {
                    if (puVar4 + -2 != (undefined4 *)0x0) {
                        puVar3 = (undefined4 *)((longlong)puVar4 + *param_1 + (-8 - lVar2));
                        puVar4[-2] = *puVar3;
                        puVar4[-1] = puVar3[1];
                        *puVar4 = puVar3[2];
                        puVar4[1] = puVar3[3];
                        *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar3 + 4);
                        *(undefined2 *)((longlong)puVar4 + 10) = *(undefined2 *)((longlong)puVar3 + 0x12);
                        puVar4[3] = puVar3[5];
                        *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(puVar3 + 6);
                        *(undefined2 *)((longlong)puVar4 + 0x12) = *(undefined2 *)((longlong)puVar3 + 0x1a);
                        puVar4[5] = puVar3[7];
                        *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(puVar3 + 8);
                        *(undefined2 *)((longlong)puVar4 + 0x1a) = *(undefined2 *)((longlong)puVar3 + 0x22);
                        puVar4[7] = puVar3[9];
                        puVar4[8] = puVar3[10];
                        puVar4[9] = puVar3[0xb];
                        puVar4[10] = puVar3[0xc];
                        puVar4[0xb] = puVar3[0xd];
                    }
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + 0xe;
                } while (uVar5 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_140389f50(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        if (*param_1 != lVar5) {
            uVar8 = 0;
            if (param_1[1] != 0) {
                puVar7 = (undefined4 *)(lVar5 + 0x20);
                do {
                    if (puVar7 + -8 != (undefined4 *)0x0) {
                        puVar6 = (undefined4 *)((longlong)puVar7 + *param_1 + (-0x20 - lVar5));
                        puVar7[-8] = *puVar6;
                        uVar2 = puVar6[5];
                        uVar3 = puVar6[6];
                        uVar4 = puVar6[7];
                        puVar7[-4] = puVar6[4];
                        puVar7[-3] = uVar2;
                        puVar7[-2] = uVar3;
                        puVar7[-1] = uVar4;
                        uVar2 = puVar6[9];
                        uVar3 = puVar6[10];
                        uVar4 = puVar6[0xb];
                        *puVar7 = puVar6[8];
                        puVar7[1] = uVar2;
                        puVar7[2] = uVar3;
                        puVar7[3] = uVar4;
                        puVar7[4] = puVar6[0xc];
                        *(undefined2 *)(puVar7 + 5) = *(undefined2 *)(puVar6 + 0xd);
                        uVar2 = puVar6[0x11];
                        uVar3 = puVar6[0x12];
                        uVar4 = puVar6[0x13];
                        puVar7[8] = puVar6[0x10];
                        puVar7[9] = uVar2;
                        puVar7[10] = uVar3;
                        puVar7[0xb] = uVar4;
                        uVar2 = puVar6[0x15];
                        uVar3 = puVar6[0x16];
                        uVar4 = puVar6[0x17];
                        puVar7[0xc] = puVar6[0x14];
                        puVar7[0xd] = uVar2;
                        puVar7[0xe] = uVar3;
                        puVar7[0xf] = uVar4;
                        puVar7[0x10] = puVar6[0x18];
                        puVar7[0x11] = puVar6[0x19];
                        puVar7[0x12] = puVar6[0x1a];
                        *(undefined8 *)(puVar7 + 0x14) = *(undefined8 *)(puVar6 + 0x1c);
                    }
                    uVar8 = uVar8 + 1;
                    puVar7 = puVar7 + 0x20;
                } while (uVar8 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_14038a050(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    if (param_3 == 2) {
        iVar3 = FUN_140386220(*param_2,param_2[1],0);
        if (0 < iVar3) {
            uVar1 = *param_2;
            *param_2 = param_2[1];
            param_2[1] = uVar1;
            return;
        }
    }
    else if (1 < param_3) {
        uVar4 = param_3 >> 1;
        if (uVar4 != 0) {
            uVar5 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                uVar2 = param_2[uVar4 - 1];
                uVar4 = uVar4 - 1;
                uVar5 = uVar5 - 2;
                uVar9 = uVar4;
                uVar10 = uVar5;
                while (uVar10 < param_3) {
                    uVar8 = param_2[uVar10];
                    uVar7 = uVar10 + 1;
                    uVar6 = uVar10;
                    if (uVar7 < param_3) {
                        uVar10 = param_2[uVar7];
                        iVar3 = FUN_140386220(uVar10,uVar8,0);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar8 < uVar10)))) {
                            uVar6 = uVar7;
                            uVar8 = uVar10;
                        }
                    }
                    iVar3 = FUN_140386220(uVar8,uVar2,0);
                    if ((iVar3 < 1) && ((iVar3 != 0 || (uVar8 <= uVar2)))) break;
                    param_2[uVar9] = uVar8;
                    uVar9 = uVar6;
                    uVar10 = uVar6 * 2 + 1;
                }
                param_2[uVar9] = uVar2;
            } while (uVar4 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            uVar5 = param_2[param_3];
            uVar4 = 1;
            uVar10 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    uVar9 = param_2[uVar4];
                    uVar2 = uVar4 + 1;
                    uVar7 = uVar4;
                    if (uVar2 < param_3) {
                        uVar4 = param_2[uVar2];
                        iVar3 = FUN_140386220(uVar4,uVar9,0);
                        if ((0 < iVar3) || ((iVar3 == 0 && (uVar9 < uVar4)))) {
                            uVar7 = uVar2;
                            uVar9 = uVar4;
                        }
                    }
                    iVar3 = FUN_140386220(uVar9,uVar5,0);
                    if ((iVar3 < 1) && ((iVar3 != 0 || (uVar9 <= uVar5)))) break;
                    param_2[uVar10] = uVar9;
                    uVar4 = uVar7 * 2 + 1;
                    uVar10 = uVar7;
                } while (uVar4 < param_3);
            }
            param_2[uVar10] = uVar5;
        }
    }
    return;
}



void FUN_14038a230(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x98);
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x90) = *(undefined8 *)(param_1 + 0x90);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70) = *(undefined8 *)(param_1 + 0x70);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14038a320(longlong *param_1,undefined8 *param_2)

{
    longlong **pplVar1;
    undefined8 uVar2;
    longlong **pplVar3;
    float fVar5;
    undefined auVar4 [16];

    *(int *)(param_1 + 1) = *(int *)param_2;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_2 + 4);
    uVar2 = (**(code **)(**(longlong **)(*param_1 + 0x20) + 0x90))();
    if (-1 < (int)uVar2) {
        auVar4 = divps(ZEXT816(CONCAT44((float)*(int *)((longlong)param_2 + 4),(float)(int)*param_2)),
                       _DAT_140b7b480);
        fVar5 = (SUB164(auVar4 >> 0x20,0) - 0.5) * 65536.0;
        *(undefined (*) [16])(param_1 + 6) =
                ZEXT1216(CONCAT48(fVar5,CONCAT44(fVar5,(SUB164(auVar4,0) - 0.5) * 65536.0))) &
                (undefined  [16])0xffffffffffffffff;
        auVar4 = divps(ZEXT816(CONCAT44((float)(DAT_140c77768._4_4_ + *(int *)((longlong)param_2 + 4)),
                                        (float)((int)DAT_140c77768 + *(int *)param_2))),_DAT_140b7b480);
        fVar5 = (SUB164(auVar4 >> 0x20,0) - 0.5) * 65536.0;
        *(undefined (*) [16])(param_1 + 8) =
                ZEXT1216(CONCAT48(fVar5,CONCAT44(fVar5,(SUB164(auVar4,0) - 0.5) * 65536.0))) &
                (undefined  [16])0xffffffffffffffff;
        pplVar3 = (longlong **)(*param_1 + 0x998);
        if (param_1[0x10] == 0) {
            param_1[0x10] = (longlong)pplVar3;
            pplVar1 = (longlong **)(param_1 + 0x11);
            *pplVar1 = *pplVar3;
            *pplVar3 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0x10] = (longlong)pplVar1;
            }
        }
        *(undefined4 *)(*param_1 + 0x9a0) = 0;
        pplVar3 = (longlong **)(*param_1 + 0x9a8);
        if (param_1[0x12] == 0) {
            param_1[0x12] = (longlong)pplVar3;
            pplVar1 = (longlong **)(param_1 + 0x13);
            *pplVar1 = *pplVar3;
            *pplVar3 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0x12] = (longlong)pplVar1;
            }
        }
        *(undefined4 *)(*param_1 + 0x9b0) = 0;
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_14038a4a0(longlong param_1)

{
    undefined8 uVar1;

    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if ((int)uVar1 == 0) {
        return uVar1;
    }
    FUN_14038a590(param_1);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80) = *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    return 1;
}



undefined8 FUN_14038a510(longlong param_1)

{
    undefined8 uVar1;

    if (*(longlong *)(param_1 + 0x80) != 0) {
        uVar1 = FUN_14038a4a0();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
    }
    FUN_14038a680(param_1);
    if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x98);
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x90) = *(undefined8 *)(param_1 + 0x90);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    return 1;
}



void FUN_14038a590(longlong param_1)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    float fVar3;
    float fVar4;
    longlong *local_res8;

    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
            (*(longlong **)(param_1 + 0x10),10,&local_res8);
    puVar2 = (undefined4 *)(**(code **)(*local_res8 + 0x18))();
    uVar1 = *puVar2;
    (**(code **)(*local_res8 + 8))();
    *(float *)(param_1 + 0x34) = (float)(uint)((ushort)uVar1 & 0x7fff) * DAT_140c41b9c - DAT_140c41b94
            ;
    *(float *)(param_1 + 0x44) =
            (float)(uint)((ushort)((uint)uVar1 >> 0x10) & 0x7fff) * DAT_140c41b9c - DAT_140c41b94;
    fVar3 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x34);
    *(undefined (*) [16])(param_1 + 0x50) =
            CONCAT412((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x4c)) * 0.5,
                      CONCAT48((*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x48)) * 0.5,
                               CONCAT44((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x44)) * 0.5,
                                        (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x40)) * 0.5))
            );
    *(float *)(param_1 + 0x60) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0) * 0.5;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038a680(longlong *param_1)

{
    longlong *plVar1;
    float fVar2;
    float fVar3;
    int iVar4;
    longlong lVar5;
    float *pfVar6;
    ushort *puVar7;
    longlong lVar8;
    longlong lVar9;
    float *pfVar10;
    float *pfVar11;
    longlong lVar12;
    float fVar13;
    float fVar14;
    longlong *local_res10;
    longlong *local_res18 [2];

    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    iVar4 = FUN_140350a20(*(undefined8 *)(*param_1 + 0x10),2,0,param_1 + 4);
    if (-1 < iVar4) {
        (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],9,&local_res10);
        lVar5 = (**(code **)(*local_res10 + 0x10))();
        (**(code **)(*(longlong *)param_1[2] + 0x48))((longlong *)param_1[2],10,local_res18);
        plVar1 = *(longlong **)(param_1[4] + 0x20);
        pfVar6 = (float *)(**(code **)(*plVar1 + 0x38))(plVar1,0,0,2);
        if (pfVar6 != (float *)0x0) {
            puVar7 = (ushort *)(**(code **)(*local_res18[0] + 0x18))();
            pfVar10 = pfVar6 + 0x23;
            lVar8 = 0x21;
            divps(ZEXT816(CONCAT44((float)*(int *)((longlong)param_1 + 0xc),(float)(int)param_1[1])),
                  _DAT_140b7b480);
            fVar13 = ((float)(uint)(*puVar7 & 0x7fff) * DAT_140c41b9c - DAT_140c41b94) - DAT_140c4458c;
            *pfVar6 = fVar13;
            pfVar11 = pfVar6;
            for (; pfVar11 = pfVar11 + 1, lVar8 != 0; lVar8 = lVar8 + -1) {
                *pfVar11 = fVar13;
            }
            pfVar6[0x22] = fVar13;
            fVar14 = fVar13;
            lVar8 = (**(code **)(*local_res10 + 0x18))();
            fVar3 = DAT_140c41b9c;
            fVar2 = DAT_140c41b94;
            lVar12 = 0x21;
            do {
                *pfVar10 = fVar14;
                lVar9 = 0xb;
                puVar7 = (ushort *)(lVar8 + 4);
                pfVar6 = pfVar10 + 1;
                do {
                    pfVar11 = pfVar6;
                    *pfVar11 = (float)(uint)(puVar7[-2] & 0x7fff) * fVar3 - fVar2;
                    pfVar11[1] = (float)(uint)(puVar7[-1] & 0x7fff) * fVar3 - fVar2;
                    pfVar11[2] = (float)(uint)(*puVar7 & 0x7fff) * fVar3 - fVar2;
                    lVar9 = lVar9 + -1;
                    puVar7 = puVar7 + 3;
                    pfVar6 = pfVar11 + 3;
                } while (lVar9 != 0);
                pfVar11[3] = fVar14;
                pfVar10 = pfVar11 + 4;
                lVar8 = lVar8 + *(int *)(lVar5 + 0x2c);
                lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
            *pfVar10 = fVar14;
            pfVar6 = pfVar11 + 5;
            for (lVar5 = 0x21; lVar5 != 0; lVar5 = lVar5 + -1) {
                *pfVar6 = fVar13;
                pfVar6 = pfVar6 + 1;
            }
            lVar5 = *plVar1;
            pfVar11[0x26] = fVar14;
            (**(code **)(lVar5 + 0x40))(plVar1);
        }
        if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 8))();
            local_res10 = (longlong *)0x0;
        }
        if (local_res18[0] != (longlong *)0x0) {
            (**(code **)(*local_res18[0] + 8))();
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14038aa40(undefined8 *param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    int iVar5;

    *param_1 = &PTR_LAB_140b65d10;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 9;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    *(undefined4 *)(param_1 + 0x6a) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x394) = 0;
    param_1[0x77] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0x73) = 1;
    iVar2 = (int)_DAT_140c784e0;
    iVar3 = (int)_DAT_140c784f0;
    iVar5 = (int)_DAT_140c784f4;
    *(int *)(param_1 + 0x74) = (int)_DAT_140c784e4;
    *(int *)((longlong)param_1 + 0x39c) = iVar2;
    *(int *)((longlong)param_1 + 0x3a4) = iVar3;
    *(int *)(param_1 + 0x75) = iVar5;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_1 + 0x39c);
    *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)((longlong)param_1 + 0x3a4);
    *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x75);
    param_1[0x76] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
    *(undefined (*) [16])(param_1 + 0x14) = ZEXT816(0);
    param_1[0x16] = 0x3f800000;
    param_1[0x17] = 0x3f800000;
    param_1[0x18] = 0;
    FUN_1407c2990(param_1 + 0x19,param_1[2] + 0x15c0,3);
    param_1[0x1c] = 1;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    iVar2 = *(int *)(param_2 + 0x350);
    plVar4 = (longlong *)(param_1[2] + 0x1480);
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    *(undefined4 *)(param_1 + 0x7d) = 1;
    *(int *)(param_1 + 0x78) = iVar2 + -1;
    *(undefined4 *)((longlong)param_1 + 0x3ec) = 1;
    if (param_1[0x7e] == 0) {
        param_1[0x7e] = plVar4;
        plVar1 = param_1 + 0x7f;
        *plVar1 = *plVar4;
        *plVar4 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x3f0) = plVar1;
        }
    }
    *(longlong *)(param_1[2] + 0x1478) = *(longlong *)(param_1[2] + 0x1478) + 1;
    return param_1;
}



void FUN_14038acf0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b65d10;
    if ((*(int *)((longlong)param_1 + 0xe4) != 0) && (param_1[0x92] == 0)) {
        FUN_140367870(param_1[2],param_1 + 0x30);
    }
    if ((undefined8 *)param_1[0x7e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x7e] = param_1[0x7f];
    }
    if (param_1[0x7f] != 0) {
        *(undefined8 *)(param_1[0x7f] + 0x3f0) = param_1[0x7e];
    }
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7a] + 8))();
        param_1[0x7a] = 0;
    }
    if ((longlong *)param_1[0x7b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x7b] + 8))();
        param_1[0x7b] = 0;
    }
    if (param_1[0x76] != 0) {
        FUN_1403762e0();
    }
    lVar1 = param_1[0x77];
    while (lVar1 != 0) {
        lVar1 = param_1[0x77];
        if (lVar1 != 0) {
            FUN_14038fdb0(lVar1);
            FUN_14018b900(lVar1,0);
        }
        lVar1 = param_1[0x77];
    }
    *(longlong *)(param_1[2] + 0x1478) = *(longlong *)(param_1[2] + 0x1478) + -1;
    if ((undefined8 *)param_1[0x94] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x94] = param_1[0x95];
    }
    if (param_1[0x95] != 0) {
        *(undefined8 *)(param_1[0x95] + 0x4a0) = param_1[0x94];
    }
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    if ((undefined8 *)param_1[0x92] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x92] = param_1[0x93];
    }
    if (param_1[0x93] != 0) {
        *(undefined8 *)(param_1[0x93] + 0x490) = param_1[0x92];
    }
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    if ((undefined8 *)param_1[0x90] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x90] = param_1[0x91];
    }
    if (param_1[0x91] != 0) {
        *(undefined8 *)(param_1[0x91] + 0x480) = param_1[0x90];
    }
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    if ((undefined8 *)param_1[0x8e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x8e] = param_1[0x8f];
    }
    if (param_1[0x8f] != 0) {
        *(undefined8 *)(param_1[0x8f] + 0x470) = param_1[0x8e];
    }
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    if ((undefined8 *)param_1[0x8c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x8c] = param_1[0x8d];
    }
    if (param_1[0x8d] != 0) {
        *(undefined8 *)(param_1[0x8d] + 0x460) = param_1[0x8c];
    }
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    if ((undefined8 *)param_1[0x8a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x8a] = param_1[0x8b];
    }
    if (param_1[0x8b] != 0) {
        *(undefined8 *)(param_1[0x8b] + 0x450) = param_1[0x8a];
    }
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    if ((undefined8 *)param_1[0x88] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x88] = param_1[0x89];
    }
    if (param_1[0x89] != 0) {
        *(undefined8 *)(param_1[0x89] + 0x440) = param_1[0x88];
    }
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    if ((undefined8 *)param_1[0x86] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x86] = param_1[0x87];
    }
    if (param_1[0x87] != 0) {
        *(undefined8 *)(param_1[0x87] + 0x430) = param_1[0x86];
    }
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    if ((undefined8 *)param_1[0x84] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x84] = param_1[0x85];
    }
    if (param_1[0x85] != 0) {
        *(undefined8 *)(param_1[0x85] + 0x420) = param_1[0x84];
    }
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    if ((undefined8 *)param_1[0x82] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x82] = param_1[0x83];
    }
    if (param_1[0x83] != 0) {
        *(undefined8 *)(param_1[0x83] + 0x410) = param_1[0x82];
    }
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    if ((undefined8 *)param_1[0x80] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x80] = param_1[0x81];
    }
    if (param_1[0x81] != 0) {
        *(undefined8 *)(param_1[0x81] + 0x400) = param_1[0x80];
    }
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    if ((undefined8 *)param_1[0x7e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x7e] = param_1[0x7f];
    }
    if (param_1[0x7f] != 0) {
        *(undefined8 *)(param_1[0x7f] + 0x3f0) = param_1[0x7e];
    }
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    if (param_1[0x77] != 0) {
        FUN_1401a4a00(param_1 + 0x77);
    }
    FUN_140195d70(param_1 + 0x6a);
    *(undefined4 *)(param_1 + 0x6a) = 0;
    if ((undefined8 *)param_1[0x6c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6c] = param_1[0x6d];
    }
    if ((undefined8 *)param_1[0x6d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6d] = param_1[0x6c];
    }
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    if (param_1[0x19] != 0) {
        FUN_1407c2b30(param_1[0x19],param_1[0x1b],*(undefined4 *)(param_1 + 0x1a),9);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_14038b170(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
              int param_5,undefined4 param_6,undefined4 param_7)

{
    longlong *plVar1;
    float *pfVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    longlong *plVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;

    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined8 **)(param_1 + 0x20) = param_4;
    if (param_4 != (undefined8 *)0x0) {
        (**(code **)*param_4)(param_4);
    }
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x3b0))();
        if (iVar5 == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))(*(longlong **)(param_1 + 0x20),param_3);
        }
    }
    uVar11 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(param_1 + 0x30) = *param_3;
    *(undefined4 *)(param_1 + 0x34) = uVar11;
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    uVar11 = param_3[5];
    uVar3 = param_3[6];
    uVar4 = param_3[7];
    *(undefined4 *)(param_1 + 0x40) = param_3[4];
    *(undefined4 *)(param_1 + 0x44) = uVar11;
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    uVar11 = param_3[9];
    uVar3 = param_3[10];
    uVar4 = param_3[0xb];
    *(undefined4 *)(param_1 + 0x50) = param_3[8];
    *(undefined4 *)(param_1 + 0x54) = uVar11;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar11 = param_3[0xd];
    uVar3 = param_3[0xe];
    uVar4 = param_3[0xf];
    *(undefined4 *)(param_1 + 0x60) = param_3[0xc];
    *(undefined4 *)(param_1 + 100) = uVar11;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    uVar11 = 0x3f800000;
    *(float *)(param_1 + 0x80) =
            1.0 / SQRT(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
                       *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) + 0.0);
    pfVar2 = *(float **)(param_3 + 0x10);
    if (pfVar2 == (float *)0x0) {
        fVar7 = *(float *)(param_1 + 0x60) + _DAT_140c77870;
        fVar8 = *(float *)(param_1 + 100) + fRam0000000140c77874;
        fVar9 = *(float *)(param_1 + 0x68) + fRam0000000140c77878;
        fVar10 = *(float *)(param_1 + 0x6c) + fRam0000000140c7787c;
    }
    else {
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
    }
    *(float *)(param_1 + 0x70) = fVar7;
    *(float *)(param_1 + 0x74) = fVar8;
    *(float *)(param_1 + 0x78) = fVar9;
    *(float *)(param_1 + 0x7c) = fVar10;
    *(int *)(param_1 + 0xec) = param_5;
    *(undefined4 *)(param_1 + 0xbc) = param_6;
    if (param_5 == 0) {
        uVar11 = 0;
    }
    *(undefined4 *)(param_1 + 0xf4) = uVar11;
    *(undefined4 *)(param_1 + 0xf0) = uVar11;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d0);
    *(undefined4 *)(param_1 + 0xe8) = param_7;
    if (*(longlong *)(param_1 + 0x490) == 0) {
        *(longlong **)(param_1 + 0x490) = plVar6;
        plVar1 = (longlong *)(param_1 + 0x498);
        *plVar1 = *plVar6;
        *plVar6 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x490) = plVar1;
        }
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d8);
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
        *(longlong **)(param_1 + 0x4a0) = plVar6;
        plVar1 = (longlong *)(param_1 + 0x4a8);
        *plVar1 = *plVar6;
        *plVar6 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x4a0) = plVar1;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_14038b300(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,int param_5
        ,undefined4 param_6)

{
    longlong *plVar1;
    float *pfVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong *plVar6;
    undefined8 uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined local_38 [16];
    undefined8 local_28;
    undefined8 local_20;

    *(undefined4 *)(param_1 + 0x18) = param_2;
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
    uVar7 = (**(code **)(*plVar6 + 0x28))(plVar6,param_4,param_1 + 0x20,0);
    if (-1 < (int)uVar7) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))(*(longlong **)(param_1 + 0x20),param_3);
        fVar12 = 1.0;
        local_38 = CONCAT88(0x3f800000,0x96);
        local_28 = 0;
        local_20 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x248))
                (*(longlong **)(param_1 + 0x20),0,local_38);
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        *(undefined4 *)(param_1 + 0x30) = *param_3;
        *(undefined4 *)(param_1 + 0x34) = uVar3;
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        *(undefined4 *)(param_1 + 0x3c) = uVar5;
        uVar3 = param_3[5];
        uVar4 = param_3[6];
        uVar5 = param_3[7];
        *(undefined4 *)(param_1 + 0x40) = param_3[4];
        *(undefined4 *)(param_1 + 0x44) = uVar3;
        *(undefined4 *)(param_1 + 0x48) = uVar4;
        *(undefined4 *)(param_1 + 0x4c) = uVar5;
        uVar3 = param_3[9];
        uVar4 = param_3[10];
        uVar5 = param_3[0xb];
        *(undefined4 *)(param_1 + 0x50) = param_3[8];
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        *(undefined4 *)(param_1 + 0x58) = uVar4;
        *(undefined4 *)(param_1 + 0x5c) = uVar5;
        uVar3 = param_3[0xd];
        uVar4 = param_3[0xe];
        uVar5 = param_3[0xf];
        *(undefined4 *)(param_1 + 0x60) = param_3[0xc];
        *(undefined4 *)(param_1 + 100) = uVar3;
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        *(undefined4 *)(param_1 + 0x6c) = uVar5;
        *(float *)(param_1 + 0x80) =
                fVar12 / SQRT(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
                              *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) + 0.0);
        pfVar2 = *(float **)(param_3 + 0x10);
        if (pfVar2 == (float *)0x0) {
            fVar8 = *(float *)(param_1 + 0x60) + _DAT_140c77870;
            fVar9 = *(float *)(param_1 + 100) + fRam0000000140c77874;
            fVar10 = *(float *)(param_1 + 0x68) + fRam0000000140c77878;
            fVar11 = *(float *)(param_1 + 0x6c) + fRam0000000140c7787c;
        }
        else {
            fVar8 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
        }
        *(float *)(param_1 + 0x70) = fVar8;
        *(float *)(param_1 + 0x74) = fVar9;
        *(float *)(param_1 + 0x78) = fVar10;
        *(float *)(param_1 + 0x7c) = fVar11;
        *(int *)(param_1 + 0xec) = param_5;
        *(undefined4 *)(param_1 + 0xbc) = param_6;
        if (param_5 == 0) {
            fVar12 = 0.0;
        }
        *(float *)(param_1 + 0xf4) = fVar12;
        *(float *)(param_1 + 0xf0) = fVar12;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d0);
        if (*(longlong *)(param_1 + 0x490) == 0) {
            *(longlong **)(param_1 + 0x490) = plVar6;
            plVar1 = (longlong *)(param_1 + 0x498);
            *plVar1 = *plVar6;
            *plVar6 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x490) = plVar1;
            }
        }
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d8);
        if (*(longlong *)(param_1 + 0x4a0) == 0) {
            *(longlong **)(param_1 + 0x4a0) = plVar6;
            plVar1 = (longlong *)(param_1 + 0x4a8);
            *plVar1 = *plVar6;
            *plVar6 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x4a0) = plVar1;
            }
        }
        uVar7 = 0;
    }
    return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038b4e0(longlong *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong *plVar7;
    float fVar8;
    float fVar9;

    plVar4 = (longlong *)(**(code **)(*param_1 + 0x148))();
    if (plVar4 != (longlong *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x488))(plVar4);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(param_1 + 0x40) = *puVar5;
        *(undefined4 *)((longlong)param_1 + 0x204) = uVar1;
        *(undefined4 *)(param_1 + 0x41) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x20c) = uVar3;
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *(undefined4 *)(param_1 + 0x42) = puVar5[4];
        *(undefined4 *)((longlong)param_1 + 0x214) = uVar1;
        *(undefined4 *)(param_1 + 0x43) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x21c) = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        *(undefined4 *)(param_1 + 0x44) = puVar5[8];
        *(undefined4 *)((longlong)param_1 + 0x224) = uVar1;
        *(undefined4 *)(param_1 + 0x45) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x22c) = uVar3;
        *(undefined4 *)(param_1 + 0x46) = puVar5[0xc];
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x4a0))(plVar4);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(param_1 + 0x48) = *puVar5;
        *(undefined4 *)((longlong)param_1 + 0x244) = uVar1;
        *(undefined4 *)(param_1 + 0x49) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x24c) = uVar3;
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *(undefined4 *)(param_1 + 0x4a) = puVar5[4];
        *(undefined4 *)((longlong)param_1 + 0x254) = uVar1;
        *(undefined4 *)(param_1 + 0x4b) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x25c) = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        *(undefined4 *)(param_1 + 0x4c) = puVar5[8];
        *(undefined4 *)((longlong)param_1 + 0x264) = uVar1;
        *(undefined4 *)(param_1 + 0x4d) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x26c) = uVar3;
        *(undefined4 *)(param_1 + 0x4e) = puVar5[0xc];
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x4b8))(plVar4);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(param_1 + 0x50) = *puVar5;
        *(undefined4 *)((longlong)param_1 + 0x284) = uVar1;
        *(undefined4 *)(param_1 + 0x51) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x28c) = uVar3;
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *(undefined4 *)(param_1 + 0x52) = puVar5[4];
        *(undefined4 *)((longlong)param_1 + 0x294) = uVar1;
        *(undefined4 *)(param_1 + 0x53) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x29c) = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        *(undefined4 *)(param_1 + 0x54) = puVar5[8];
        *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar1;
        *(undefined4 *)(param_1 + 0x55) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar3;
        *(undefined4 *)(param_1 + 0x56) = puVar5[0xc];
        puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x4c8))(plVar4);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *(undefined4 *)(param_1 + 0x58) = *puVar5;
        *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar1;
        *(undefined4 *)(param_1 + 0x59) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar3;
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *(undefined4 *)(param_1 + 0x5a) = puVar5[4];
        *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar1;
        *(undefined4 *)(param_1 + 0x5b) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        *(undefined4 *)(param_1 + 0x5c) = puVar5[8];
        *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar1;
        *(undefined4 *)(param_1 + 0x5d) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar3;
        *(undefined4 *)(param_1 + 0x5e) = puVar5[0xc];
        lVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,0x96,0);
        fVar8 = *(float *)(lVar6 + 0x30) - *(float *)(lVar6 + 0x20);
        fVar9 = *(float *)(lVar6 + 0x34) - *(float *)(lVar6 + 0x24);
        *(undefined (*) [16])(param_1 + 100) =
                CONCAT412((*(float *)(lVar6 + 0x2c) + *(float *)(lVar6 + 0x3c)) * 0.5,
                          CONCAT48((*(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x38)) * 0.5,
                                   CONCAT44((*(float *)(lVar6 + 0x24) + *(float *)(lVar6 + 0x34)) * 0.5,
                                            (*(float *)(lVar6 + 0x20) + *(float *)(lVar6 + 0x30)) * 0.5)));
        *(float *)(param_1 + 0x66) = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + 0.0) * 0.5;
        return;
    }
    lVar6 = 4;
    plVar4 = param_1 + 0x40;
    plVar7 = param_1 + 0x44;
    do {
        uVar3 = uRam0000000140c798ac;
        uVar2 = uRam0000000140c798a8;
        uVar1 = uRam0000000140c798a4;
        *(undefined4 *)plVar4 = _DAT_140c798a0;
        *(undefined4 *)((longlong)plVar4 + 4) = uVar1;
        *(undefined4 *)(plVar4 + 1) = uVar2;
        *(undefined4 *)((longlong)plVar4 + 0xc) = uVar3;
        uVar3 = uRam0000000140c798bc;
        uVar2 = uRam0000000140c798b8;
        uVar1 = uRam0000000140c798b4;
        *(undefined4 *)(plVar4 + 2) = _DAT_140c798b0;
        *(undefined4 *)((longlong)plVar4 + 0x14) = uVar1;
        *(undefined4 *)(plVar4 + 3) = uVar2;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uVar3;
        uVar3 = uRam0000000140c783dc;
        uVar2 = uRam0000000140c783d8;
        uVar1 = uRam0000000140c783d4;
        *(undefined4 *)plVar7 = _DAT_140c783d0;
        *(undefined4 *)((longlong)plVar7 + 4) = uVar1;
        *(undefined4 *)(plVar7 + 1) = uVar2;
        *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
        *(undefined4 *)(plVar7 + 2) = DAT_140c783e0;
        uVar3 = uRam0000000140c783dc;
        uVar2 = uRam0000000140c783d8;
        uVar1 = uRam0000000140c783d4;
        lVar6 = lVar6 + -1;
        plVar4 = plVar4 + 8;
        plVar7 = plVar7 + 8;
    } while (lVar6 != 0);
    *(undefined4 *)(param_1 + 100) = _DAT_140c783d0;
    *(undefined4 *)((longlong)param_1 + 0x324) = uVar1;
    *(undefined4 *)(param_1 + 0x65) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x32c) = uVar3;
    *(undefined4 *)(param_1 + 0x66) = DAT_140c783e0;
    return;
}
