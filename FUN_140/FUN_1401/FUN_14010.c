//
// Created by flop on 05.04.22.
//


// WARNING: Could not reconcile some variable overlaps

void FUN_140100010(longlong
                   param_1,
                   float *param_2,
                   float *param_3, undefined8
                   param_4,
                   char param_5
)

{
    int iVar1;
    int iVar2;
    float fVar3;
    uint uVar4;
    uint uVar5;
    undefined8 *puVar6;
    float *pfVar7;
    float *pfVar8;
    int iVar9;
    uint *puVar10;
    uint uVar11;
    int iVar12;
    float *pfVar13;
    uint uVar14;
    float in_XMM3_Da;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined auStack552[32];
    undefined8 local_208;
    undefined8 local_200;
    undefined4 local_1f8;
    uint local_1f0;
    uint local_1e8;
    longlong local_1d8;
    float fStack464;
    float fStack460;
    uint local_1c8;
    float *local_1c0[2];
    longlong local_1b0;
    undefined local_1a8[8];
    undefined8 uStack416;
    undefined local_198[8];
    undefined8 uStack400;
    float local_188;
    float local_184;
    float local_178;
    float local_174;
    undefined local_168[16];
    undefined local_158[16];
    undefined local_148[16];
    float local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined local_108[16];
    float afStack192[4];
    undefined8 uStack176;
    float local_a8;
    undefined4 uStack164;
    undefined8 uStack160;
    float local_98[6];
    ulonglong local_80;

    local_80 = DAT_140c0f7b0 ^ (ulonglong)
            auStack552;
    local_1b0 = FUN_1400fe680();
    if (local_1b0 != 0) {
        local_1c0[0] = (float *)((ulonglong)local_1c0[0] & 0xffffffff00000000);
        fVar15 = (*(float *) (param_1 + 0x54) - *(float *) (param_1 + 0x50)) * in_XMM3_Da +
                 *(float *) (param_1 + 0x50);
        fVar3 = fVar15;
        if ((int)fVar15 < 0) {
            fVar3 = (float) (0x80000000 - (int) fVar15);
        }
        uVar14 = 0;
        local_1c8 = (uint)(0x54 < (int) (((uint)
                                                  fVar3 ^ (int)fVar3 >> 0x1f) - ((int)fVar3 >> 0x1f)));
        if (local_1c8 != 0) {
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
            uStack176 = &local_1d8;
            uStack160 = 0;
            local_108 = ZEXT816(CONCAT44(uStack164, fVar15));
            fStack464 = (param_2[2] + param_2[6]) * 0.5;
            fStack460 = (param_2[3] + param_2[7]) * 0.5;
            local_1d8 = CONCAT44((param_2[1] + param_2[5]) * 0.5, (*param_2 + param_2[4]) * 0.5);
            local_118 = 1.0;
            uStack176.
                    _4_4_ = (undefined4)((ulonglong)
                                                 uStack176 >> 0x20);
            uStack276 = afStack192[3];
            uStack272 = (undefined4)
                    uStack176;
            uStack268 = uStack176._4_4_;
            afStack192[2] =
                    local_118;
            local_a8 = fVar15;
            FUN_1401b0840(&local_118, local_158
            );
            (**(code **)(*DAT_140c65680 + 0x58))();
        }
        if (*(char *)(param_1 + 0x60) == '\0') {
            pfVar7 = (float *) (param_1 + 0x20);
            puVar10 = (uint * )(param_1 + 8);
            local_200 = (undefined * )
                    ((ulonglong)
                             local_200 & 0xffffffff00000000 | (ulonglong)*(byte *)(param_1 + 0x3a));
            local_208.
                    _0_4_ = 1;
            local_1c0[0] =
                    pfVar7;
            FUN_1400ff280(puVar10, pfVar7, param_2, afStack192
                                                    + 2);
            local_200 = (undefined * )
                    ((ulonglong)
                             local_200 & 0xffffffff00000000 | (ulonglong)*(byte *)(param_1 + 0x39));
            local_208 = (float *) ((ulonglong)
                    local_208._4_4_ << 0x20);
            FUN_1400ff280(puVar10, pfVar7
            );
        }
        else {
            fStack464 = (float) (int) param_2[4];
            fStack460 = (float) (int) param_2[5];
            local_1d8 = CONCAT44((int) param_2[1], (int) *param_2);
            puVar6 = (undefined8 * )

                    FUN_14014e8d0();

            fStack464 = (float) (int) param_2[4];
            fStack460 = (float) (int) param_2[5];
            fVar18 = (float) (int) puVar6[1];
            fVar19 = (float) *(int *) ((longlong)
                                               puVar6 + 0xc);
            fVar20 = 0.0;
            fVar21 = 0.0;
            local_1d8 = CONCAT44((int) param_2[1], (int) *param_2);
            fVar3 = (float) (int) *puVar6;
            fVar15 = (float) *(int *) ((longlong)
                                               puVar6 + 4);
            fVar16 = 0.0;
            fVar17 = 0.0;
            puVar6 = (undefined8 * )
                    FUN_14014e8d0(0,param_1 + 0xd0,local_1c0,&local_1d8);
            pfVar7 = (float *) (param_1 + 0x20);
            puVar10 = (uint * )(param_1 + 8);
            local_200.
                    _0_4_ = (uint) * (byte * )(param_1 + 0x3a);
            local_208.
                    _0_4_ = 1;
            _local_198 = CONCAT412((0.0 - fVar21) * in_XMM3_Da + fVar21,
                                   CONCAT48((0.0 - fVar20) * in_XMM3_Da + fVar20,
                                            CONCAT44(((float) *(int *) ((longlong)
                                                                                puVar6 + 0xc) - fVar19) *
                                                     in_XMM3_Da + fVar19,
                                                     ((float)(int)puVar6[1] - fVar18) * in_XMM3_Da +
                                                     fVar18)));
            local_1a8 = CONCAT44(((float) *(int *) ((longlong)
                                                            puVar6 + 4) - fVar15) * in_XMM3_Da + fVar15,
                                 ((float)(int)*puVar6 - fVar3) * in_XMM3_Da + fVar3);
            _local_1a8 = CONCAT412((0.0 - fVar17) * in_XMM3_Da + fVar17,
                                   CONCAT48((0.0 - fVar16) * in_XMM3_Da + fVar16, local_1a8));
            local_1c0[0] =
                    pfVar7;
            FUN_1400ff280(puVar10, pfVar7, local_1a8, afStack192
                                                      + 2);
            local_200 = (undefined * )
                    CONCAT44(local_200
                                     ._4_4_,(uint)*(byte *)(param_1 + 0x39));
            local_208 = (float *) ((ulonglong)
                    local_208._4_4_ << 0x20);
            FUN_1400ff280(puVar10, pfVar7, local_1a8
            );
        }
        pfVar13 = (float *) (param_1 + 0x20);
        pfVar7 = *(float **) (DAT_140c63678 + 0x28);
        pfVar8 = pfVar7;
        if ((ulonglong)*(uint *)(param_1 + 0x5c) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            pfVar8 = pfVar7 + (ulonglong) * (uint * )(param_1 + 0x5c) * 8;
        }
        if ((ulonglong)*(uint *)(param_1 + 0x58) < *(ulonglong *)(DAT_140c63678 + 0x30)) {
            pfVar7 = pfVar7 + (ulonglong) * (uint * )(param_1 + 0x58) * 8;
        }
        local_168 = CONCAT412(param_3[3] * ((pfVar8[3] - pfVar7[3]) * in_XMM3_Da + pfVar7[3]),
                              CONCAT48(param_3[2] * ((pfVar8[2] - pfVar7[2]) * in_XMM3_Da + pfVar7[2]),
                                       CONCAT44(param_3[1] *
                                                ((pfVar8[1] - pfVar7[1]) * in_XMM3_Da + pfVar7[1]),
                                                *param_3 * ((*pfVar8 - *pfVar7) * in_XMM3_Da + *pfVar7))
                              ));
        if (*(char *)(param_1 + 0x38) == '\0') {
            local_1d8 = (longlong)
                                local_98 -
                        param_1;
            do {
                uVar11 = 0;
                if (*(char *)(param_1 + 0x39) == '\0') {
                    fVar3 = *pfVar13;
                    uVar4 = uVar14 + 1;
                }
                else {
                    fVar3 = *(float *) (param_1 + 0x20 + (ulonglong)(4 - uVar14) * 4);
                    uVar4 = 5 - uVar14;
                }
                iVar12 = *(int *) (param_1 + 0x20 + (ulonglong)
                                                            uVar4 * 4);
                if ((int)fVar3<iVar12) {
                    local_184 = *(float *) (local_1d8 + -0x20 + (longlong)
                            pfVar13);
                    local_1a8 = CONCAT44(local_184, local_1a8._0_4_);
                    local_174 = local_98[uVar14 + 1];
                    do {
                        if (((param_5 == '\0') || ((uVar14 & 0xfffffffb) == 0)) || ((uVar11 & 0xfffffffb) == 0))
                        {
                            if (*(byte *)(param_1 + 0x3a) == 0) {
                                uVar4 = *puVar10;
                                uVar5 = uVar11 + 1;
                            }
                            else {
                                uVar4 = *(uint * )(param_1 + 8 + (ulonglong)(4 - uVar11) * 4);
                                uVar5 = 5 - uVar11;
                            }
                            iVar1 = *(int *) (param_1 + 8 + (ulonglong)
                                                                    uVar5 * 4);
                            if ((int)uVar4<iVar1) {
                                local_188 = *(float *) (((longlong)
                                                                 afStack192 - param_1) + (longlong)puVar10);
                                _local_1a8 = CONCAT124(stack0xfffffffffffffe5c, local_188);
                                local_1e8 = (uint) * (byte * )(param_1 + 0x3a);
                                local_200 = local_168;
                                local_178 = afStack192[(ulonglong)(uVar11 + 1) + 2];
                                _local_198 = CONCAT124(stack0xfffffffffffffe6c,
                                                       ((float) (ulonglong)
                                                        * (uint * )(param_1 + 8 + (ulonglong)(uVar11 + 1) * 4)
                                                        + local_188) - (float) (ulonglong) * puVar10);
                                local_1f0 = (uint) * (byte * )(param_1 + 0x39);
                                local_1f8 = 1;
                                local_208 = &local_188;
                                local_148 = ZEXT816(CONCAT44((float) iVar12, (float) iVar1));
                                local_158 = ZEXT816(CONCAT44((float) (int) fVar3, (float) uVar4));
                                (**(code **)(*DAT_140c65680 + 0xe8))();
                            }
                        }
                        uVar11 = uVar11 + 1;
                        puVar10 = puVar10 + 1;
                        pfVar13 = local_1c0[0];
                    } while (uVar11 < 5);
                }
                pfVar13 = pfVar13 + 1;
                uVar14 = uVar14 + 1;
                puVar10 = (uint * )(param_1 + 8);
                local_1c0[0] =
                        pfVar13;
            } while (uVar14 < 5);
        }
        else {
            local_1d8 = param_1 - (longlong)
                    local_98;
            local_1c0[0] =
                    local_98;
            do {
                uVar11 = 0;
                if (*(char *)(param_1 + 0x39) == '\0') {
                    iVar12 = *(int *) (local_1d8 + 0x20 + (longlong)
                            local_1c0[0]);
                    uVar4 = uVar14 + 1;
                }
                else {
                    iVar12 = *(int *) (param_1 + 0x20 + (ulonglong)(4 - uVar14) * 4);
                    uVar4 = 5 - uVar14;
                }
                iVar1 = *(int *) (param_1 + 0x20 + (ulonglong)
                                                           uVar4 * 4);
                if (iVar12<iVar1) {
                    local_184 = *local_1c0[0];
                    local_174 = local_98[uVar14 + 1];
                    if (local_184<local_174) {
                        pfVar7 = afStack192 + 2;
                        do {
                            if (((param_5 == '\0') || ((uVar14 & 0xfffffffb) == 0)) ||
                                ((uVar11 & 0xfffffffb) == 0)) {
                                if (*(byte *)(param_1 + 0x3a) == 0) {
                                    iVar9 = *(int *) ((param_1 - (longlong)(afStack192 + 2)) + 8 + (longlong)
                                            pfVar7);
                                    uVar4 = uVar11 + 1;
                                }
                                else {
                                    iVar9 = *(int *) (param_1 + 8 + (ulonglong)(4 - uVar11) * 4);
                                    uVar4 = 5 - uVar11;
                                }
                                iVar2 = *(int *) (param_1 + 8 + (ulonglong)
                                                                        uVar4 * 4);
                                if (iVar9<iVar2) {
                                    local_188 = *pfVar7;
                                    local_178 = afStack192[(ulonglong)(uVar11 + 1) + 2];
                                    if (local_188<local_178) {
                                        local_1e8 = (uint) * (byte * )(param_1 + 0x3a);
                                        local_200 = local_168;
                                        local_1f0 = (uint) * (byte * )(param_1 + 0x39);
                                        local_1f8 = 1;
                                        local_208 = &local_188;
                                        _local_198 = ZEXT816(CONCAT44((float) iVar1, (float) iVar2));
                                        _local_1a8 = ZEXT816(CONCAT44((float) iVar12, (float) iVar9));
                                        (**(code **)(*DAT_140c65680 + 0xe8))();
                                    }
                                }
                            }
                            uVar11 = uVar11 + 1;
                            pfVar7 = pfVar7 + 1;
                        } while (uVar11 < 5);
                    }
                }
                local_1c0[0] = local_1c0[0] + 1;
                uVar14 = uVar14 + 1;
            } while (uVar14 < 5);
        }
        if (local_1c8 != 0) {
            (**(code **)(*DAT_140c65680 + 0x48))();
        }
    }
    FUN_1407db4f0(local_80
                  ^ (ulonglong)auStack552);
    return;
}


void FUN_1401007d0(undefined8 * param_1, undefined8
param_2)

{
    longlong lVar1;
    undefined auStack360[32];
    longlong *local_148[7];
    undefined4 local_10c;
    undefined4 local_f0;
    undefined4 local_ec;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)
            auStack360;
    *
            param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] =
            param_2;
    *
            param_1 = &PTR_LAB_140b56c68;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xfe;
    *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 2;
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_1400fe860(local_148);
    lVar1 = param_1[8];
    if (lVar1 == param_1[9]) {
        FUN_140109f90(param_1
                      + 6,lVar1,local_148);
    }
    else {
        if (lVar1 != 0) {
            FUN_1400feb20(lVar1, local_148
            );
        }
        param_1[8] = param_1[8] + 0x130;
    }
    *(undefined4 *)(param_1 + 0xe) =
            local_10c;
    if (local_148[0] != (longlong *)0x0) {
        (**(code **)(*local_148[0] + 8))();
    }
    FUN_1401429a0(DAT_140c63678, local_ec
    );
    FUN_1401429a0(DAT_140c63678, local_f0
    );
    FUN_1407db4f0(local_18
                  ^ (ulonglong)auStack360);
    return;
}


undefined8 FUN_1401008f0(undefined8
                         param_1,
                         ulonglong param_2
)

{
    FUN_140100be0();

    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,
                      0);
    }
    return
            param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 *
FUN_140100930(undefined8 * param_1, undefined8
param_2,
              undefined8 param_3,
              short *param_4,
              undefined4
              param_5)

{
    undefined2 *puVar1;
    short sVar2;
    int iVar3;
    undefined2 *puVar4;
    undefined2 *puVar5;
    ulonglong *puVar6;
    undefined2 *puVar7;
    ulonglong uVar8;
    undefined2 *puVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong local_res8;
    ulonglong local_res10;
    ulonglong local_res18[2];
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    puVar9 = (undefined2 *) 0x0;
    *
            param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] =
            param_2;
    *
            param_1 = &PTR_LAB_140b56c68;
    param_1[4] = 0;
    param_1[5] =
            param_3;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xfe;
    if (param_4 == (short *)0x0) {
        local_70 = 0;
        local_78 = &PTR_LAB_140b5e648;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_78
        );
        local_58 = local_78;
        local_res8 = 0x141d15018;
        local_48 = local_68;
        local_50 = local_70;
        iVar3 = FUN_140196f30(&DAT_140c8a108, 0xd, &local_res8, &local_58);
        local_78 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_68
        );
        if (iVar3 != 0) {
            DebugBreak();

        }
    }
    else {
        sVar2 = *param_4;
        puVar4 = puVar9;
        while (sVar2 != 0) {
            puVar4 = (undefined2 * )((longlong)
                                             puVar4 + 1);
            sVar2 = param_4
            [(longlong)puVar4];
        }
        lVar10 = (longlong)
                         puVar4 * 2 >> 1;
        puVar4 = puVar9;
        if (lVar10 + 1U < 0x7fffffffffffffff) {
            puVar4 = (undefined2 *) FUN_14018b280((lVar10 + 1U) * 2, 0);
        }
        FUN_1407db590(puVar4, param_4, lVar10
                                       * 2);
        puVar1 = puVar4 + lVar10;
        if (puVar1 != (undefined2 *)0x0) {
            *
                    puVar1 = 0;
        }
        uVar11 = (longlong)
                         puVar1 - (longlong)puVar4 >> 1;
        puVar7 = puVar4;
        if (uVar11 != 0) {
            local_res8.
                    _0_4_ = CONCAT22(0x3a, (undefined2) local_res8);
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)(uint)
            local_res8;
            puVar5 = (undefined2 *) FUN_14002c8a0(puVar4, puVar1, (ulonglong)(uint)
            local_res8);
            if ((puVar5 != puVar1) &&
                (
                        uVar8 = (longlong)
                                        puVar5 - (longlong)puVar4 >> 1, uVar8 != 0xffffffffffffffff)) {
                local_res18[0] =
                        uVar8;
                local_res10 = uVar11;
                puVar6 = &local_res10;
                if (uVar8 <= uVar11) {
                    puVar6 = local_res18;
                }
                puVar1 = puVar4 + *puVar6;
                uVar11 = ((longlong)
                                  puVar1 - (longlong)puVar4 >> 1) + 1;
                puVar7 = puVar9;
                if (uVar11 < 0x7fffffffffffffff) {
                    puVar7 = (undefined2 *) FUN_14018b280(uVar11 * 2, 0);
                }
                puVar9 = puVar7;
                if (puVar4 != puVar1) {
                    do {
                        if (puVar9 != (undefined2 *)0x0) {
                            *
                                    puVar9 = *(undefined2 * )((longlong)
                                                                      puVar9 + ((longlong)puVar4 - (longlong)puVar7));
                        }
                        puVar9 = puVar9 + 1;
                    } while ((undefined2 *)((longlong)puVar9 + ((longlong)puVar4 - (longlong)puVar7)) !=
                             puVar1);
                }
                if (puVar9 != (undefined2 *)0x0) {
                    *
                            puVar9 = 0;
                }
                if (puVar4 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar4,
                                  0);
                }
            }
        }
        FUN_140100cd0(param_1, param_3, puVar7
        );
        if (puVar7 != (undefined2 *)0x0) {
            FUN_14018b900(puVar7,
                          0);
        }
    }
    *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 2;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 3) =
            param_5;
    return
            param_1;
}


void FUN_140100be0(undefined8 * param_1) {
    longlong lVar1;
    longlong * *pplVar2;
    longlong * *pplVar3;

    pplVar2 = (longlong * *)
            param_1[0xb];
    *param_1 = &PTR_LAB_140b56c68;
    if (pplVar2 != (longlong * *)param_1[0xc]) {
        do {
            if (*pplVar2 != (longlong * )0x0) {
                (**(code * *)(**pplVar2 + 8))();
                *pplVar2 = (longlong * )
                        0x0;
            }
            pplVar2 = pplVar2 + 1;
        } while (pplVar2 != (longlong * *)
                param_1[0xc]);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb], 0);
    }
    pplVar2 = (longlong * *)
            param_1[8];
    for (pplVar3 = (longlong * *)param_1[7]; pplVar3 != pplVar2;
         pplVar3 = pplVar3 + 0x26) {
        if (*pplVar3 != (longlong * )0x0) {
            (**(code * *)(**pplVar3 + 8))();
            *pplVar3 = (longlong * )
                    0x0;
        }
        FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong)
                                                              pplVar3 + 0x5c));
        FUN_1401429a0(DAT_140c63678);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    lVar1 = param_1[4];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b55048;
    return;
}


void FUN_140100cd0(longlong
                   param_1,
                   undefined8 param_2,
                   short *param_3
)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    short *psVar6;

    lVar2 = *(longlong * )(param_1 + 0x20);
    psVar6 = (short *) &DAT_1409d4c7c;
    if (param_3 != (short *)0x0) {
        psVar6 = param_3;
    }
    puVar4 = (undefined8 * )
            0x0;
    if (psVar6 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
        sVar1 = *psVar6;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 * )((longlong)
                                             puVar5 + 1);
            sVar1 = psVar6
            [(longlong)puVar5];
        }
        puVar3 = (undefined8 * )
                FUN_14018b280((longlong)
                                      puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] =
                    puVar5;
            *
                    puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4, psVar6, (longlong)
                                              puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x20) =
                puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *(undefined8 *)(param_1 + 0x28) =
            param_2;
    return;
}


undefined8 FUN_140100da0(longlong
                         param_1,
                         undefined8 param_2
)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
        return 1;
    }
    uVar4 = 0;
    uVar5 = uVar4;
    if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
        do {
            if ((*(longlong *)(*(longlong *)(param_1 + 0x58) + uVar5 * 8) != 0) &&
                (
                        cVar2 = FUN_140100da0(*(undefined8 * )(*(longlong * )(param_1 + 0x58) + uVar5 * 8), param_2),
                                cVar2
                                == '\0')) {
                return 0;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)
                );
    }
    lVar3 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
    lVar1 = lVar3 >> 0x3f;
    if (lVar3 / 0x130 + lVar1 != lVar1) {
        do {
            lVar1 = *(longlong * )(uVar4 * 0x130 + *(longlong * )(param_1 + 0x38));
            if ((*(char *)(lVar1 + 0x40) == '\0') && (
                    cVar2 = FUN_1400fe1f0(lVar1, param_2), cVar2
                                                           == '\0')
                    ) {
                return 0;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < (ulonglong)
                ((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x130));
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
    return 1;
}


int FUN_140100ec0(longlong
                  param_1,
                  longlong param_2
)

{
    longlong lVar1;

    lVar1 = *(longlong * )(param_1 + 0x40);
    if (lVar1 == *(longlong *)(param_1 + 0x48)) {
        FUN_140109f90(param_1
                      + 0x30,lVar1,param_2);
    }
    else {
        if (lVar1 != 0) {
            FUN_1400feb20(lVar1);
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x130;
    }
    *(float *)(param_1 + 0x70) = *(float *)(param_2 + 0x3c) + *(float *)(param_1 + 0x70);
    return (int)((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x130) + -1;
}


void FUN_140100f50(longlong
                   param_1,
                   undefined8 param_2, undefined8
                   param_3,
                   undefined4 *param_4,
                   float param_5, undefined
                   param_6,
                   undefined8 param_7, undefined8
                   param_8,
                   undefined8 param_9, undefined
                   param_10,
                   undefined param_11, undefined4
                   param_12,
                   undefined4 param_13
)

{
    longlong lVar1;
    undefined auStack472[32];
    float local_1b8;
    undefined local_1b0;
    undefined8 local_1a8;
    undefined8 local_1a0;
    undefined8 local_198;
    undefined local_190;
    undefined local_188;
    undefined4 local_180;
    undefined4 local_178;
    undefined4 local_168;
    undefined4 local_164;
    undefined4 local_160;
    undefined4 local_15c;
    longlong *local_158[11];
    undefined4 local_100;
    undefined4 local_fc;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)
            auStack472;
    local_168 = *param_4;
    local_178 = param_13;
    local_180 = param_12;
    local_164 = param_4[1];
    local_160 = param_4[2];
    local_15c = param_4[3];
    local_188 = param_11;
    local_190 = param_10;
    local_198 = param_9;
    local_1a0 = param_8;
    local_1a8 = param_7;
    local_1b0 = param_6;
    local_1b8 = param_5;
    FUN_1400fe940(local_158, param_2, param_3, &local_168
    );
    lVar1 = *(longlong * )(param_1 + 0x40);
    if (lVar1 == *(longlong *)(param_1 + 0x48)) {
        FUN_140109f90(param_1
                      + 0x30,lVar1,local_158);
    }
    else {
        if (lVar1 != 0) {
            FUN_1400feb20(lVar1, local_158
            );
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x130;
    }
    lVar1 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
    *(float *)(param_1 + 0x70) = param_5 + *(float *)(param_1 + 0x70);
    if (local_158[0] != (longlong *)0x0) {
        (**(code **)(*local_158[0] + 8))(local_158[0],lVar1 / 0x26 + (lVar1 >> 0x3f));
    }
    FUN_1401429a0(DAT_140c63678, local_fc
    );
    FUN_1401429a0(DAT_140c63678, local_100
    );
    FUN_1407db4f0(local_28
                  ^ (ulonglong)auStack472);
    return;
}


longlong FUN_140101180(longlong
                       param_1,
                       undefined8 param_2,
                       float *param_3
)

{
    float fVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    float fVar6;
    undefined4 uVar9;
    ulonglong uVar7;
    undefined in_XMM1[16];
    float fVar10;
    undefined auVar8[16];

    fVar10 = SUB164(in_XMM1, 0);
    uVar9 = SUB164(in_XMM1 >> 0x20, 0);
    lVar5 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
    iVar4 = (int) (lVar5 / 0x130);
    if ((iVar4 != 0) && (
            fVar1 = *(float *) (param_1 + 0x70), fVar1
                                                 != 0.0)) {
        if (fVar1<fVar10) {
            if (((*(byte *)(param_1 + 0x74) & 2) == 0) || (iVar4 < 1)) {
                if (fVar1 <= fVar10) {
                    fVar10 = fVar1;
                }
            }
            else {
                fVar6 = fVar10 / fVar1;
                auVar8 = CONCAT124(SUB1612(in_XMM1 >> 0x20, 0), fVar6);
                iVar3 = (int) fVar6;
                if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
                    uVar7 = SUB168(auVar8, 0);
                    uVar2 = movmskps((uint)((ulonglong)
                                                    lVar5 >> 0x3f),
                                     CONCAT88(SUB168(CONCAT412(uVar9, CONCAT48(uVar9, uVar7)) >> 0x40, 0),
                                              uVar7
                                              & 0xffffffff | uVar7 << 0x20));
                    auVar8 = ZEXT416((uint)(float)(iVar3 - (uVar2 & 1)));
                }
                fVar10 = fVar10 - SUB164(auVar8, 0) * fVar1;
            }
        }
        iVar3 = 0;
        if (0 < iVar4) {
            lVar5 = *(longlong * )(param_1 + 0x38);
            do {
                fVar1 = *(float *) (lVar5 + 0x3c);
                if (fVar10 <= fVar1) {
                    if (param_3 == (float *)0x0) {
                        return
                                lVar5;
                    }
                    *
                            param_3 = fVar10 / fVar1;
                    return
                            lVar5;
                }
                iVar3 = iVar3 + 1;
                lVar5 = lVar5 + 0x130;
                fVar10 = fVar10 - fVar1;
            } while (iVar3<iVar4);
        }
        return (longlong)(iVar4 + -1) * 0x130 + *(longlong *)(param_1 + 0x38);
    }
    return 0;
}


longlong FUN_140101260(longlong
                       param_1,
                       undefined8 param_2,
                       float *param_3
)

{
    float fVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    int iVar5;
    float fVar6;
    undefined4 uVar9;
    ulonglong uVar7;
    undefined in_XMM1[16];
    float fVar10;
    undefined auVar8[16];

    fVar1 = *(float *) (param_1 + 0x70);
    fVar10 = SUB164(in_XMM1, 0);
    uVar9 = SUB164(in_XMM1 >> 0x20, 0);
    if (fVar1 == 0.0) {
        return 0;
    }
    if (fVar1<fVar10) {
        if ((*(byte *)(param_1 + 0x74) & 2) != 0) {
            lVar4 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
            uVar2 = (uint)((ulonglong)
                                   lVar4 >> 0x20);
            iVar5 = (int) uVar2 >> 0x1f;
            iVar3 = (int) (lVar4 / 0x130) + iVar5;
            if (iVar3 != iVar5 && -1 < iVar3 - iVar5) {
                fVar6 = fVar10 / fVar1;
                auVar8 = CONCAT124(SUB1612(in_XMM1 >> 0x20, 0), fVar6);
                iVar3 = (int) fVar6;
                if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
                    uVar7 = SUB168(auVar8, 0);
                    uVar2 = movmskps(uVar2 >> 0x1f,
                                     CONCAT88(SUB168(CONCAT412(uVar9, CONCAT48(uVar9, uVar7)) >> 0x40, 0),
                                              uVar7 & 0xffffffff | uVar7 << 0x20));
                    auVar8 = ZEXT416((uint)(float)(iVar3 - (uVar2 & 1)));
                }
                fVar10 = fVar10 - SUB164(auVar8, 0) * fVar1;
                goto
                        LAB_1401012f4;
            }
        }
        if (fVar1 <= fVar10) {
            fVar10 = fVar1;
        }
    }
    LAB_1401012f4:
    iVar5 = 0;
    iVar3 = (int) ((*(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38)) / 0x130);
    if (0 < iVar3) {
        lVar4 = *(longlong * )(param_1 + 0x38);
        do {
            fVar1 = *(float *) (lVar4 + 0x3c);
            if (fVar10 <= fVar1) {
                if (param_3 == (float *)0x0) {
                    return
                            lVar4;
                }
                *
                        param_3 = fVar10 / fVar1;
                return
                        lVar4;
            }
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 0x130;
            fVar10 = fVar10 - fVar1;
        } while (iVar5<iVar3);
    }
    if (param_3 != (float *)0x0) {
        *
                param_3 = 1.0;
    }
    return (longlong)(iVar3 + -1) * 0x130 + *(longlong *)(param_1 + 0x38);
}


ulonglong FUN_140101370(longlong
                        param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = *(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58) >> 3;
    if (uVar2 == 0) {
        lVar3 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
        lVar1 = lVar3 >> 0x3f;
        uVar2 = (ulonglong)(lVar3 / 0x130 + lVar1 != lVar1);
    }
    return
            uVar2;
}


void FUN_1401013c0(longlong
                   param_1)

{
    longlong **pplVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    float *pfVar6;
    int iVar7;
    float fVar8;

    lVar4 = *(longlong * )(param_1 + 0x40);
    lVar5 = lVar4 - *(longlong * )(param_1 + 0x38);
    iVar2 = (int) (lVar5 >> 0x3f);
    iVar3 = (int) (lVar5 / 0x130) + iVar2;
    if (iVar3 != iVar2 && -1 < iVar3 - iVar2) {
        lVar5 = *(longlong * )(param_1 + 0x38) + 0x130;
        if (lVar5 != lVar4) {
            FUN_14010aa70(lVar5, lVar4
            );
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -0x130;
        pplVar1 = *(longlong * **)(param_1 + 0x40);
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *
                    pplVar1 = (longlong * )
                    0x0;
        }
        FUN_1401429a0(DAT_140c63678, *(undefined4
                                       *)((longlong)pplVar1 + 0x5c));
        FUN_1401429a0(DAT_140c63678, *(undefined4
                                       *)(pplVar1 + 0xb));
    }
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    lVar4 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
    iVar2 = (int) (lVar4 >> 0x3f);
    iVar3 = (int) (lVar4 / 0x130) + iVar2;
    if (iVar3 != iVar2 && -1 < iVar3 - iVar2) {
        fVar8 = 0.0;
        pfVar6 = (float *) (*(longlong * )(param_1 + 0x38) + 0x3c);
        do {
            fVar8 = fVar8 + *pfVar6;
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 0x4c;
            *(float *)(param_1 + 0x70) =
                    fVar8;
        } while (

                iVar7<(int)

                        ((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x130));
    }
    return;
}


undefined8 *FUN_140101470(longlong
                          param_1,
                          undefined8 *param_2
)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined local_res8[16];

    *
            param_2 = 0;
    iVar4 = 0;
    lVar5 = 0;
    iVar1 = FUN_140101370();
    if (0 < iVar1) {
        do {
            if (lVar5 < 0) {
                lVar3 = 0;
                LAB_1401014c5:
                if (lVar3 != param_1) {
                    if (lVar5 < 0) {
                        lVar3 = 0;
                    }
                    else {
                        lVar3 = param_1;
                        if (

                                iVar4<(int)

                                        (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                            lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                        }
                    }
                    piVar2 = (int *) FUN_140101470(lVar3, local_res8);
                    iVar1 = *(int *) param_2;
                    if (*(int *)param_2 < *piVar2) {
                        iVar1 = *piVar2;
                    }
                    *(int *)
                            param_2 = iVar1;
                    lVar3 = FUN_140101470();
                    iVar1 = *(int *) ((longlong)
                                              param_2 + 4);
                    if (*(int *)((longlong)param_2 + 4) < *(int *)(lVar3 + 4)) {
                        iVar1 = *(int *) (lVar3 + 4);
                    }
                    *(int *)((longlong)param_2 + 4) =
                            iVar1;
                }
            }
            else if (

                    iVar4<(int)

                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                goto
                        LAB_1401014c5;
            }
            iVar4 = iVar4 + 1;
            lVar5 = lVar5 + 1;
            iVar1 = FUN_140101370();
        } while (iVar4<iVar1);
    }
    lVar5 = *(longlong * )(param_1 + 0x38);
    lVar3 = *(longlong * )(param_1 + 0x40);
    if (lVar5 != lVar3) {
        iVar1 = *(int *) ((longlong)
                                  param_2 + 4);
        do {
            if (*(int *)param_2 < *(int *)(lVar5 + 0x40)) {
                *(int *)
                        param_2 = *(int *) (lVar5 + 0x40);
            }
            if (*(int *)(lVar5 + 0x44) !=
                iVar1 &&iVar1
                        <= *(int *)(lVar5 + 0x44)) {
                iVar1 = *(int *) (lVar5 + 0x44);
            }
            lVar5 = lVar5 + 0x130;
        } while (lVar5 != lVar3);
        *(int *)((longlong)param_2 + 4) =
                iVar1;
    }
    return
            param_2;
}


undefined8 *FUN_1401015b0(longlong
                          param_1,
                          undefined8 *param_2
)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined local_res8[16];

    *
            param_2 = 0;
    iVar4 = 0;
    lVar5 = 0;
    iVar1 = FUN_140101370();
    if (0 < iVar1) {
        do {
            if (lVar5 < 0) {
                lVar3 = 0;
                LAB_140101605:
                if (lVar3 != param_1) {
                    if (lVar5 < 0) {
                        lVar3 = 0;
                    }
                    else {
                        lVar3 = param_1;
                        if (

                                iVar4<(int)

                                        (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                            lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                        }
                    }
                    piVar2 = (int *) FUN_1401015b0(lVar3, local_res8);
                    iVar1 = *(int *) param_2;
                    if (*(int *)param_2 < *piVar2) {
                        iVar1 = *piVar2;
                    }
                    *(int *)
                            param_2 = iVar1;
                    lVar3 = FUN_1401015b0();
                    iVar1 = *(int *) ((longlong)
                                              param_2 + 4);
                    if (*(int *)((longlong)param_2 + 4) < *(int *)(lVar3 + 4)) {
                        iVar1 = *(int *) (lVar3 + 4);
                    }
                    *(int *)((longlong)param_2 + 4) =
                            iVar1;
                }
            }
            else if (

                    iVar4<(int)

                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                goto
                        LAB_140101605;
            }
            iVar4 = iVar4 + 1;
            lVar5 = lVar5 + 1;
            iVar1 = FUN_140101370();
        } while (iVar4<iVar1);
    }
    lVar5 = *(longlong * )(param_1 + 0x38);
    lVar3 = *(longlong * )(param_1 + 0x40);
    if (lVar5 != lVar3) {
        iVar1 = *(int *) ((longlong)
                                  param_2 + 4);
        do {
            if (*(int *)(lVar5 + 0x40) != *(int *)param_2 && *(int *)param_2 <= *(int *)(lVar5 + 0x40)) {
                *(int *)
                        param_2 =
                        (((*(int *) (lVar5 + 0x1c) - *(int *) (lVar5 + 0x18)) - *(int *) (lVar5 + 0x10)) -
                         *(int *) (lVar5 + 8)) + *(int *) (lVar5 + 0x14) + *(int *) (lVar5 + 0xc);
            }
            if (*(int *)(lVar5 + 0x44) !=
                iVar1 &&iVar1
                        <= *(int *)(lVar5 + 0x44)) {
                iVar1 = (((*(int *) (lVar5 + 0x34) - *(int *) (lVar5 + 0x30)) - *(int *) (lVar5 + 0x28)) -
                         *(int *) (lVar5 + 0x20)) + *(int *) (lVar5 + 0x2c) + *(int *) (lVar5 + 0x24);
            }
            lVar5 = lVar5 + 0x130;
        } while (lVar5 != lVar3);
        *(int *)((longlong)param_2 + 4) =
                iVar1;
    }
    return
            param_2;
}


void FUN_140101710(longlong
                   param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = *(longlong * )(param_1 + 0x40);
    lVar1 = *(longlong * )(param_1 + 0x38);
    uVar3 = FUN_14010aa70(lVar4, lVar4, lVar1);
    FUN_14010a3e0(uVar3, *(undefined8
                           *)(param_1 + 0x40));
    uVar5 = 0;
    lVar4 = SUB168(SEXT816(-0x6bca1af286bca1b) * SEXT816(lVar4 - lVar1) >> 0x40, 0);
    *(longlong *)(param_1 + 0x40) =
            *(longlong *)(param_1 + 0x40) + ((lVar4 >> 3) - (lVar4 >> 0x3f)) * 0x130;
    if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
        do {
            lVar4 = *(longlong * )(param_1 + 0x58);
            plVar2 = *(longlong * *)(lVar4 + uVar5 * 8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)
                );
    }
    lVar4 = *(longlong * )(param_1 + 0x60);
    lVar1 = *(longlong * )(param_1 + 0x58);
    FUN_1407db590(lVar1, lVar4,
                  0);
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (lVar4 - lVar1 >> 3) * -8;
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140101810(longlong
                   param_1,
                   longlong param_2
)

{
    longlong *plVar1;
    byte bVar2;
    short sVar3;
    wchar_t wVar4;
    undefined4 uVar5;
    undefined2 *puVar6;
    char cVar7;
    short sVar11;
    short sVar12;
    short sVar13;
    ulonglong uVar14;
    unkbyte10 Var15;
    undefined auVar16[12];
    undefined auVar17[14];
    short sVar18;
    undefined6 uVar19;
    ulonglong uVar20;
    int iVar21;
    longlong lVar22;
    undefined8 *puVar23;
    undefined8 uVar24;
    undefined8 *puVar25;
    undefined2 *puVar26;
    undefined2 **ppuVar27;
    undefined2 *puVar28;
    undefined *puVar29;
    ulonglong uVar30;
    undefined2 *puVar31;
    undefined (*pauVar32)[16];
    longlong lVar33;
    undefined8 *puVar34;
    longlong lVar35;
    longlong lVar36;
    ulonglong uVar37;
    undefined8 *puVar38;
    wchar_t *pwVar39;
    short *psVar40;
    undefined4 uVar41;
    undefined2 *puVar42;
    longlong *plVar43;
    undefined **ppuVar44;
    undefined4 *puVar45;
    uint uVar47;
    int iVar48;
    undefined auVar46[16];
    int iVar49;
    char cVar50;
    char cVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    undefined4 uVar55;
    undefined4 uVar56;
    undefined4 uVar57;
    undefined4 uVar58;
    undefined4 uVar59;
    undefined4 uVar60;
    undefined4 uVar61;
    undefined4 uVar62;
    float fVar63;
    float fVar64;
    float fVar65;
    float fVar66;
    float fVar67;
    float fVar68;
    float fVar69;
    float fVar70;
    undefined auStack824[32];
    undefined2 *local_318;
    int local_310;
    longlong local_308;
    longlong local_300;
    undefined local_2f8[8];
    longlong local_2f0;
    undefined2 *local_2e8;
    longlong local_2e0;
    longlong local_2d8;
    longlong *local_2d0;
    undefined2 *local_2c8;
    undefined local_2c0[8];
    longlong local_2b8;
    undefined local_2a0[8];
    longlong local_298;
    undefined4 local_280[4];
    undefined4 local_270;
    undefined4 local_26c;
    undefined4 local_268[4];
    undefined4 local_258;
    undefined4 local_254;
    short local_248[200];
    ulonglong local_b8;
    char cVar8;
    char cVar9;
    char cVar10;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)
            auStack824;
    bVar2 = *(byte * )(param_1 + 0x74);
    puVar6 = *(undefined2 * *)(param_1 + 0x20);
    local_308 = param_2;
    local_2d8 = param_1;
    lVar22 = FUN_1401a6c70(param_2, &DAT_140a31790);
    puVar26 = &DAT_140b7b704;
    if (puVar6 != (undefined2 *)0x0) {
        puVar26 = puVar6;
    }
    FUN_1401a4c50(lVar22
                  + 0x20,puVar26);
    lVar22 = FUN_1401a6c70(param_2, L"Cycle");
    FUN_1401a4c20(local_248,
                  200,&DAT_1409e41f4,bVar2 >> 1 & 1);
    FUN_1401a4c50(lVar22
                  + 0x20,local_248);
    local_310 = 0;
    local_300 = 0;
    if (0 < (int)((*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x130)) {
        fVar54 = 360.0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        uVar58 = 0;
        fVar53 = 0.0;
        uVar59 = 0x3f800000;
        uVar60 = 0x3f800000;
        uVar61 = 0x3f800000;
        uVar62 = 0x3f800000;
        fVar63 = 255.0;
        fVar64 = 255.0;
        fVar65 = 255.0;
        fVar66 = 255.0;
        fVar67 = 0.5;
        fVar68 = 0.5;
        fVar69 = 0.5;
        fVar70 = 0.5;
        do {
            puVar25 = (undefined8 * )
                    0x0;
            lVar22 = *(longlong * )(param_2 + 8);
            plVar1 = (longlong * )(lVar22 + 0x80);
            plVar43 = (longlong * )(local_300 * 0x130 + *(longlong * )(param_1 + 0x38));
            local_2d0 = plVar43;
            puVar23 = (undefined8 * )(**(code * *)(*plVar1 + 0x10))(plVar1);
            puVar38 = puVar25;
            if (puVar23 != (undefined8 *)0x0) {
                puVar23[1] =
                        lVar22;
                puVar23[2] = 0;
                *(undefined4 *)(puVar23 + 3) = 0;
                puVar23[4] = 0;
                puVar23[5] = 0;
                puVar23[6] = 0;
                puVar23[7] = 0;
                puVar23[8] = 0;
                puVar23[9] = 0;
                puVar23[10] = 0;
                *(undefined4 *)(puVar23 + 0xb) = 0;
                *
                        puVar23 = &PTR_FUN_140b5eba0;
                puVar23[0xc] = 0;
                puVar38 = puVar23;
            }
            puVar38[10] =
                    plVar1;
            if ((*(uint *)(puVar38 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar38[4],
                              0);
            }
            *(undefined4 *)(puVar38 + 3) = 0;
            puVar38[4] = 0;
            puVar38[5] = 0;
            puVar23 = puVar25;
            do {
                puVar34 = puVar23;
                puVar23 = (undefined8 * )((longlong)
                                                  puVar34 + 1);
            } while (L"Frame"[(longlong)puVar23] != L'\0');
            auVar46 = ZEXT816(2) * ZEXT816((longlong)
                                                   puVar34 + 2);
            uVar24 = SUB168(auVar46, 0);
            if (
                    SUB168(auVar46
                                   >> 0x40,0) != 0) {
                uVar24 = 0xffffffffffffffff;
            }
            uVar24 = FUN_14018b280(uVar24, 0);
            puVar38[4] =
                    uVar24;
            FUN_1407db590(uVar24,
                          L"Frame",(longlong)puVar23 * 2 + 2);
            *(undefined4 *)(puVar38 + 3) = 0x200;
            puVar38[5] = puVar38[4] + (longlong)puVar23 * 2;
            if ((*plVar43 == 0) || (
                    pwVar39 = *(wchar_t **) (*plVar43 + 0x28), pwVar39
                                                               == (wchar_t *)0x0))
            {
                pwVar39 = L"< No Texture Selected >";
            }
            wVar4 = *pwVar39;
            local_318 = (undefined2 *) 0x0;
            while (wVar4 != L'\0') {
                puVar25 = (undefined8 * )((longlong)
                                                  puVar25 + 1);
                wVar4 = pwVar39
                [(longlong)puVar25];
            }
            lVar22 = (longlong)
                             puVar25 * 2 >> 1;
            if (lVar22 + 1U < 0x7fffffffffffffff) {
                local_318 = (undefined2 *) FUN_14018b280((lVar22 + 1U) * 2, 0);
            }
            puVar6 = local_318;
            FUN_1407db590(local_318, pwVar39, lVar22
                                              * 2);
            puVar6 = puVar6 + lVar22;
            if (puVar6 != (undefined2 *)0x0) {
                *
                        puVar6 = 0;
            }
            local_2f0 = 0;
            local_2e0 = 0;
            psVar40 = (short *) &DAT_1409d4c0c;
            if (*(short **)(DAT_140c63650 + 0x310) != (short *)0x0) {
                psVar40 = *(short **) (DAT_140c63650 + 0x310);
            }
            lVar22 = 0;
            sVar3 = *psVar40;
            while (sVar3 != 0) {
                lVar22 = lVar22 + 1;
                sVar3 = psVar40[lVar22];
            }
            lVar22 = lVar22 * 2 >> 1;
            uVar30 = lVar22 + 1;
            if (uVar30 < 0x7fffffffffffffff) {
                lVar35 = uVar30 * 2;
                local_2f0 = FUN_14018b280(lVar35, 0);
                local_2e0 = local_2f0 + lVar35;
            }
            lVar35 = local_2f0;
            lVar22 = lVar22 * 2;
            FUN_1407db590(local_2f0, psVar40, lVar22
            );
            local_2e8 = (undefined2 * )(lVar35 + lVar22);
            puVar28 = (undefined2 *) 0x0;
            puVar26 = puVar28;
            if (local_2e8 != (undefined2 *)0x0) {
                *
                        local_2e8 = 0;
            }
            do {
                psVar40 = &DAT_1409d4c26 + (longlong)
                        puVar26;
                puVar26 = (undefined2 * )((longlong)
                                                  puVar26 + 1);
            } while (*psVar40 != 0);
            FUN_14001c310(local_2f8, &DAT_1409d4c24, &DAT_1409d4c24
                                                     + (longlong)puVar26 * 2);
            puVar26 = local_318;
            lVar22 = (longlong)
                             local_2e8 - local_2f0 >> 1;
            iVar21 = FUN_14018e3e0(local_318, local_2f0, lVar22);
            puVar42 = puVar26;
            if (iVar21 == 0) {
                local_2c8 = (undefined2 *) 0xffffffffffffffff;
                local_318 = (undefined2 * )(((longlong)
                                                     puVar6 - (longlong)puVar26 >> 1) - lVar22);
                ppuVar27 = &local_318;
                if (local_318 == (undefined2 *)0xffffffffffffffff) {
                    ppuVar27 = &local_2c8;
                }
                puVar6 = puVar26 + lVar22;
                puVar42 = puVar26 + (longlong) * ppuVar27 + lVar22;
                uVar30 = ((longlong)
                                  puVar42 - (longlong)puVar6 >> 1) + 1;
                if (uVar30 < 0x7fffffffffffffff) {
                    puVar28 = (undefined2 *) FUN_14018b280(uVar30 * 2, 0);
                }
                puVar31 = puVar28;
                if (puVar6 != puVar42) {
                    do {
                        if (puVar31 != (undefined2 *)0x0) {
                            *
                                    puVar31 = *(undefined2 * )(((longlong)
                                                                        puVar6 - (longlong)puVar28) + (longlong)puVar31);
                        }
                        puVar31 = puVar31 + 1;
                    } while ((undefined2 *)(((longlong)puVar6 - (longlong)puVar28) + (longlong)puVar31) !=
                             puVar42);
                }
                if (puVar31 != (undefined2 *)0x0) {
                    *
                            puVar31 = 0;
                }
                puVar42 = puVar28;
                local_318 = puVar28;
                if (puVar26 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar26,
                                  0);
                }
            }
            lVar22 = FUN_1401a6c70(puVar38, L"Texture");
            FUN_1401a4c50(lVar22
                          + 0x20,puVar42);
            local_268[0] = *(undefined4 *)(plVar43 + 1);
            puVar45 = local_268;
            local_268[1] = *(undefined4 *)((longlong)plVar43 + 0xc);
            ppuVar44 = &PTR_DAT_140a1ac20;
            local_268[2] = *(undefined4 *)(plVar43 + 2);
            local_268[3] = *(undefined4 *)((longlong)plVar43 + 0x14);
            local_258 = *(undefined4 * )(plVar43 + 3);
            local_254 = *(undefined4 * )((longlong)
                                                 plVar43 + 0x1c);
            local_280[0] = *(undefined4 *)(plVar43 + 4);
            local_280[1] = *(undefined4 *)((longlong)plVar43 + 0x24);
            local_280[2] = *(undefined4 *)(plVar43 + 5);
            local_280[3] = *(undefined4 *)((longlong)plVar43 + 0x2c);
            local_270 = *(undefined4 * )(plVar43 + 6);
            local_26c = *(undefined4 * )((longlong)
                                                 plVar43 + 0x34);
            do {
                lVar22 = FUN_1401a6c70(puVar38, *ppuVar44);
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,*puVar45);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                lVar35 = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar35 = lVar35 + 1;
                    sVar3 = local_248[lVar35];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar35 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar35
                                                 * 2 + 2);
                plVar1 = local_2d0;
                ppuVar44 = ppuVar44 + 1;
                puVar45 = puVar45 + 1;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar35 * 2;
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
            } while ((longlong)ppuVar44 < 0x140a1ac50);
            puVar45 = local_280;
            ppuVar44 = &PTR_DAT_140a1abd0;
            do {
                lVar22 = FUN_1401a6c70(puVar38, *ppuVar44);
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,*puVar45);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                lVar35 = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar35 = lVar35 + 1;
                    sVar3 = local_248[lVar35];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar35 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar35
                                                 * 2 + 2);
                puVar6 = local_318;
                ppuVar44 = ppuVar44 + 1;
                puVar45 = puVar45 + 1;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar35 * 2;
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
            } while ((longlong)ppuVar44 < 0x140a1ac00);
            if (*(char *)(plVar1 + 7) != '\0') {
                lVar22 = FUN_1401a6c70(puVar38, L"Stretchy");
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,1);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                lVar35 = 0;
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar35 = lVar35 + 1;
                    sVar3 = local_248[lVar35];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar35 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar35
                                                 * 2 + 2);
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar35 * 2;
            }
            lVar22 = 0;
            uVar5 = *(undefined4 * )(plVar1 + 9);
            lVar35 = FUN_1401a6c70(puVar38, L"HotspotX");
            FUN_1401a4c20(local_248,
                          200,&DAT_1409e41f4,uVar5);
            if ((*(uint *)(lVar35 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8
                                *)(lVar35 + 0x28),0);
            }
            *(undefined4 *)(lVar35 + 0x20) = 0;
            *(undefined8 *)(lVar35 + 0x28) = 0;
            *(undefined8 *)(lVar35 + 0x30) = 0;
            lVar36 = lVar22;
            sVar3 = local_248[0];
            while (sVar3 != 0) {
                lVar36 = lVar36 + 1;
                sVar3 = local_248[lVar36];
            }
            auVar46 = ZEXT816(2) * ZEXT816(lVar36 + 1);
            uVar24 = SUB168(auVar46, 0);
            if (
                    SUB168(auVar46
                                   >> 0x40,0) != 0) {
                uVar24 = 0xffffffffffffffff;
            }
            uVar24 = FUN_14018b280(uVar24, 0);
            *(undefined8 *)(lVar35 + 0x28) =
                    uVar24;
            FUN_1407db590(uVar24, local_248, lVar36
                                             * 2 + 2);
            *(undefined4 *)(lVar35 + 0x20) = 0x200;
            *(longlong *)(lVar35 + 0x30) = *(longlong *)(lVar35 + 0x28) + lVar36 * 2;
            uVar47 = *(uint * )((longlong)
                                        plVar1 + 0x4c);
            lVar35 = FUN_1401a6c70(puVar38, L"HotspotY");
            uVar30 = (ulonglong)
                    uVar47;
            FUN_1401a4c20(local_248,
                          200,&DAT_1409e41f4,uVar30);
            if ((*(uint *)(lVar35 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8
                                *)(lVar35 + 0x28),0);
            }
            *(undefined4 *)(lVar35 + 0x20) = 0;
            *(undefined8 *)(lVar35 + 0x28) = 0;
            *(undefined8 *)(lVar35 + 0x30) = 0;
            sVar3 = local_248[0];
            while (sVar3 != 0) {
                lVar22 = lVar22 + 1;
                sVar3 = local_248[lVar22];
            }
            auVar46 = ZEXT816(2) * ZEXT816(lVar22 + 1);
            uVar24 = SUB168(auVar46, 0);
            if (
                    SUB168(auVar46
                                   >> 0x40,0) != 0) {
                uVar24 = 0xffffffffffffffff;
            }
            uVar24 = FUN_14018b280(uVar24, 0);
            *(undefined8 *)(lVar35 + 0x28) =
                    uVar24;
            FUN_1407db590(uVar24, local_248, lVar22
                                             * 2 + 2);
            *(undefined4 *)(lVar35 + 0x20) = 0x200;
            *(longlong *)(lVar35 + 0x30) = *(longlong *)(lVar35 + 0x28) + lVar22 * 2;
            FUN_14018efa0(local_2a0,
                          L"%.3f",(double)*(float *)((longlong)plVar1 + 0x3c));
            FUN_1401a6c70(puVar38,
                          L"Duration");
            lVar35 = local_298;

            FUN_1401a4c50();

            lVar22 = DAT_140c63678;
            uVar37 = (ulonglong) * (uint * )(plVar1 + 0xb);
            if (uVar37 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
                uVar30 = *(ulonglong * )(DAT_140c63678 + 0x28);
                lVar36 = (ulonglong) * (uint * )(plVar1 + 0xb) * 0x20;
                iVar21 = *(int *) (lVar36 + 0x10 + uVar30);
                if (iVar21 - 1U < 0xfffffffe) {
                    *(int *)(lVar36 + 0x10 + uVar30) = iVar21 + 1;
                }
                if (*(ulonglong *)(lVar22 + 0x30) <= uVar37) goto
                            LAB_140102151;
                pauVar32 = (undefined(*)[16])(uVar37 * 0x20 + *(longlong * )(lVar22 + 0x28));
            }
            else {
                LAB_140102151:
                pauVar32 = *(undefined(**)[16])(lVar22 + 0x28);
            }
            auVar46 = maxps(CONCAT412(uVar58, CONCAT48(uVar57, CONCAT44(uVar56, uVar55))), *pauVar32);
            auVar46 = minps(auVar46, CONCAT412(uVar62, CONCAT48(uVar61, CONCAT44(uVar60, uVar59))));
            iVar21 = (int) (SUB164(auVar46, 0) * fVar63 + fVar67);
            uVar47 = (uint)(SUB164(auVar46 >> 0x20, 0) * fVar64 + fVar68);
            iVar48 = (int) (SUB164(auVar46 >> 0x40, 0) * fVar65 + fVar69);
            iVar49 = (int) (SUB164(auVar46 >> 0x60, 0) * fVar66 + fVar70);
            cVar50 = (char) ((uint)
                    iVar21 >> 0x10);
            cVar51 = (char) ((uint)
                    iVar49 >> 0x10);
            uVar20 = (ulonglong)
                    CONCAT16((char)(uVar47 >> 0x10),
                             CONCAT15((char)(uVar47 >> 8),CONCAT14((char)uVar47,iVar48)));
            uVar14 = ((ulonglong)
                              uVar47 & 0xff000000) << 0x20 |
                     uVar20;
            Var15 = CONCAT19((char) ((uint)
                    iVar21 >> 8),CONCAT18((char)iVar21,uVar14));
            auVar16 = CONCAT111((char) ((uint)
                                        iVar21 >> 0x18),
                                CONCAT110(cVar50, Var15
                                ));
            auVar17 = CONCAT113((char) ((uint)
                    iVar49 >> 8),CONCAT112((char)iVar49,auVar16));
            sVar3 = (short) iVar48;
            cVar7 = (0 < sVar3) * (sVar3 < 0xff) * (char) iVar48 - (0xff < sVar3);
            sVar3 = (short) (uVar20 >> 0x10);
            sVar11 = (short) (uVar20 >> 0x20);
            cVar8 = (0 < sVar11) * (sVar11 < 0xff) * (char) (uVar20 >> 0x20) - (0xff < sVar11);
            sVar11 = (short) (uVar14 >> 0x30);
            sVar12 = (short) ((unkuint10) Var15 >> 0x40);
            cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char) iVar21 - (0xff < sVar12);
            sVar12 = SUB122(auVar16 >> 0x50, 0);
            sVar13 = SUB142(auVar17 >> 0x60, 0);
            cVar10 = (0 < sVar13) * (sVar13 < 0xff) * (char) iVar49 - (0xff < sVar13);
            sVar13 = SUB162(CONCAT115((char) ((uint)
                                              iVar49 >> 0x18),
                                      CONCAT114(cVar51, auVar17
                                      )) >> 0x70,0);
            sVar18 = CONCAT11((0 < sVar3) * (sVar3 < 0xff) * (char) (uVar20 >> 0x10) - (0xff < sVar3), cVar7
            );
            uVar5 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char) (uVar20 >> 0x30) - (0xff < sVar11),
                             CONCAT12(cVar8, sVar18));
            uVar19 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar50 - (0xff < sVar12),
                              CONCAT14(cVar9, uVar5));
            sVar3 = (short) ((uint)
                    uVar5 >> 0x10);
            sVar11 = (short) ((uint6) uVar19 >> 0x20);
            sVar12 = (short) (CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar51 - (0xff < sVar13),
                                       CONCAT16(cVar10, uVar19)) >> 0x30);
            FUN_14018efa0(local_2c0, &DAT_1409d585c,
                          CONCAT13((0 < sVar12) * (sVar12 < 0xff) * cVar10 - (0xff < sVar12),
                                   CONCAT12((0 < sVar11) * (sVar11 < 0xff) * cVar9 - (0xff < sVar11),
                                            CONCAT11((0 < sVar3) * (sVar3 < 0xff) * cVar8 - (0xff < sVar3),
                                                     (0 < sVar18) * (sVar18 < 0xff) * cVar7 -
                                                     (0xff < sVar18))))
            );
            FUN_1401429a0(DAT_140c63678, uVar37
            );
            FUN_1401a6c70(puVar38,
                          L"StartColor");
            lVar36 = local_2b8;

            FUN_1401a4c50();

            lVar22 = DAT_140c63678;
            uVar37 = (ulonglong) * (uint * )((longlong)
                                                     plVar1 + 0x5c);
            if (uVar37 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
                uVar30 = *(ulonglong * )(DAT_140c63678 + 0x28);
                lVar33 = (ulonglong) * (uint * )((longlong)
                                                         plVar1 + 0x5c) * 0x20;
                iVar21 = *(int *) (lVar33 + 0x10 + uVar30);
                if (iVar21 - 1U < 0xfffffffe) {
                    *(int *)(lVar33 + 0x10 + uVar30) = iVar21 + 1;
                }
                if (*(ulonglong *)(lVar22 + 0x30) <= uVar37) goto
                            LAB_140102200;
                pauVar32 = (undefined(*)[16])(uVar37 * 0x20 + *(longlong * )(lVar22 + 0x28));
            }
            else {
                LAB_140102200:
                pauVar32 = *(undefined(**)[16])(lVar22 + 0x28);
            }
            uVar41 = (undefined4)(uVar30 >> 0x20);
            auVar46 = maxps(CONCAT412(uVar58, CONCAT48(uVar57, CONCAT44(uVar56, uVar55))), *pauVar32);
            auVar46 = minps(auVar46, CONCAT412(uVar62, CONCAT48(uVar61, CONCAT44(uVar60, uVar59))));
            iVar21 = (int) (SUB164(auVar46, 0) * fVar63 + fVar67);
            uVar47 = (uint)(SUB164(auVar46 >> 0x20, 0) * fVar64 + fVar68);
            iVar48 = (int) (SUB164(auVar46 >> 0x40, 0) * fVar65 + fVar69);
            iVar49 = (int) (SUB164(auVar46 >> 0x60, 0) * fVar66 + fVar70);
            cVar50 = (char) ((uint)
                    iVar21 >> 0x10);
            cVar51 = (char) ((uint)
                    iVar49 >> 0x10);
            uVar14 = (ulonglong)
                    CONCAT16((char)(uVar47 >> 0x10),
                             CONCAT15((char)(uVar47 >> 8),CONCAT14((char)uVar47,iVar48)));
            uVar30 = ((ulonglong)
                              uVar47 & 0xff000000) << 0x20 |
                     uVar14;
            Var15 = CONCAT19((char) ((uint)
                    iVar21 >> 8),CONCAT18((char)iVar21,uVar30));
            auVar16 = CONCAT111((char) ((uint)
                                        iVar21 >> 0x18),
                                CONCAT110(cVar50, Var15
                                ));
            auVar17 = CONCAT113((char) ((uint)
                    iVar49 >> 8),CONCAT112((char)iVar49,auVar16));
            sVar3 = (short) iVar48;
            cVar7 = (0 < sVar3) * (sVar3 < 0xff) * (char) iVar48 - (0xff < sVar3);
            sVar3 = (short) (uVar14 >> 0x10);
            sVar11 = (short) (uVar14 >> 0x20);
            cVar8 = (0 < sVar11) * (sVar11 < 0xff) * (char) (uVar14 >> 0x20) - (0xff < sVar11);
            sVar11 = (short) (uVar30 >> 0x30);
            sVar12 = (short) ((unkuint10) Var15 >> 0x40);
            cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char) iVar21 - (0xff < sVar12);
            sVar12 = SUB122(auVar16 >> 0x50, 0);
            sVar13 = SUB142(auVar17 >> 0x60, 0);
            cVar10 = (0 < sVar13) * (sVar13 < 0xff) * (char) iVar49 - (0xff < sVar13);
            sVar13 = SUB162(CONCAT115((char) ((uint)
                                              iVar49 >> 0x18),
                                      CONCAT114(cVar51, auVar17
                                      )) >> 0x70,0);
            sVar18 = CONCAT11((0 < sVar3) * (sVar3 < 0xff) * (char) (uVar14 >> 0x10) - (0xff < sVar3), cVar7
            );
            uVar5 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char) (uVar14 >> 0x30) - (0xff < sVar11),
                             CONCAT12(cVar8, sVar18));
            uVar19 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar50 - (0xff < sVar12),
                              CONCAT14(cVar9, uVar5));
            sVar3 = (short) ((uint)
                    uVar5 >> 0x10);
            sVar11 = (short) ((uint6) uVar19 >> 0x20);
            sVar12 = (short) (CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar51 - (0xff < sVar13),
                                       CONCAT16(cVar10, uVar19)) >> 0x30);
            puVar29 = (undefined * )
                    FUN_14018efa0(local_2a0, &DAT_1409d5884,
                                  CONCAT13((0 < sVar12) * (sVar12 < 0xff) * cVar10 - (0xff < sVar12),
                                           CONCAT12((0 < sVar11) * (sVar11 < 0xff) * cVar9 -
                                                    (0xff < sVar11),
                                                    CONCAT11((0 < sVar3) * (sVar3 < 0xff) * cVar8 -
                                                             (0xff < sVar3),
                                                             (0 < sVar18) * (sVar18 < 0xff) * cVar7 -
                                                             (0xff < sVar18))))
                    );
            if (puVar29 != local_2c0) {
                FUN_14001c480(local_2c0, *(undefined8
                                           *)(puVar29 + 8),*(undefined8 *)(puVar29 + 0x10));
                lVar36 = local_2b8;
            }
            if (local_298 != 0) {
                FUN_14018b900(local_298,
                              0);
            }
            FUN_1401429a0(DAT_140c63678, uVar37
            );
            lVar22 = FUN_1401a6c70(puVar38, L"EndColor");
            FUN_1401a4c50(lVar22
                          + 0x20,lVar36);
            if (*(char *)((longlong)plVar1 + 0x39) != '\0') {
                lVar22 = FUN_1401a6c70(puVar38, &DAT_140a1a908);
                uVar41 = 0;
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,1);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                lVar33 = 0;
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar33 = lVar33 + 1;
                    sVar3 = local_248[lVar33];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar33 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar33
                                                 * 2 + 2);
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar33 * 2;
            }
            if (*(char *)((longlong)plVar1 + 0x3a) != '\0') {
                lVar22 = FUN_1401a6c70(puVar38, &DAT_140a1a918);
                uVar41 = 0;
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,1);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                lVar33 = 0;
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar33 = lVar33 + 1;
                    sVar3 = local_248[lVar33];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar33 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar33
                                                 * 2 + 2);
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar33 * 2;
            }
            if (fVar53 < *(float *)(plVar1 + 10)) {
                fVar52 = (*(float *) (plVar1 + 10) / _DAT_140c3c248) * fVar54;
                lVar22 = FUN_1401a6c70(puVar38, L"StartOrientation");
                uVar24 = CONCAT44(uVar41, (int) fVar52);
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,uVar24);
                uVar41 = (undefined4)((ulonglong)
                                              uVar24 >> 0x20);
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                lVar33 = 0;
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar33 = lVar33 + 1;
                    sVar3 = local_248[lVar33];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar33 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar33
                                                 * 2 + 2);
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar33 * 2;
            }
            if (fVar53 < *(float *)((longlong)plVar1 + 0x54)) {
                fVar52 = (*(float *) ((longlong)
                                              plVar1 + 0x54) / _DAT_140c3c248) *
                         fVar54;
                lVar22 = FUN_1401a6c70(puVar38, L"EndOrientation");
                FUN_1401a4c20(local_248,
                              200,&DAT_1409e41f4,
                              CONCAT44(uVar41,
                                       (int)fVar52));
                if ((*(uint *)(lVar22 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8
                                    *)(lVar22 + 0x28),0);
                }
                lVar33 = 0;
                *(undefined4 *)(lVar22 + 0x20) = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x30) = 0;
                sVar3 = local_248[0];
                while (sVar3 != 0) {
                    lVar33 = lVar33 + 1;
                    sVar3 = local_248[lVar33];
                }
                auVar46 = ZEXT816(2) * ZEXT816(lVar33 + 1);
                uVar24 = SUB168(auVar46, 0);
                if (
                        SUB168(auVar46
                                       >> 0x40,0) != 0) {
                    uVar24 = 0xffffffffffffffff;
                }
                uVar24 = FUN_14018b280(uVar24, 0);
                *(undefined8 *)(lVar22 + 0x28) =
                        uVar24;
                FUN_1407db590(uVar24, local_248, lVar33
                                                 * 2 + 2);
                *(undefined4 *)(lVar22 + 0x20) = 0x200;
                *(longlong *)(lVar22 + 0x30) = *(longlong *)(lVar22 + 0x28) + lVar33 * 2;
            }
            param_2 = local_308;
            if (puVar38[1] == *(longlong *)(local_308 + 8)) {
                lVar22 = puVar38[2];
                if (lVar22 == 0) {
                    (**(code **)(*(longlong *)puVar38[10] + 0x20))();
                }
                else {
                    if (puVar38 == *(undefined8 **)(lVar22 + 0x30)) {
                        *(undefined8 *)(lVar22 + 0x30) = (*(undefined8 **)(lVar22 + 0x30))[9];
                    }
                    if (puVar38 == *(undefined8 **)(lVar22 + 0x38)) {
                        *(undefined8 *)(lVar22 + 0x38) = (*(undefined8 **)(lVar22 + 0x38))[8];
                    }
                    if (puVar38[8] != 0) {
                        *(undefined8 *)(puVar38[8] + 0x48) = puVar38[9];
                    }
                    if (puVar38[9] != 0) {
                        *(undefined8 *)(puVar38[9] + 0x40) = puVar38[8];
                    }
                    puVar38[2] = 0;
                }
                if (*(longlong *)(param_2 + 0x38) == 0) {
                    *(undefined8 **)(param_2 + 0x38) =
                            puVar38;
                    *(undefined8 **)(param_2 + 0x30) =
                            puVar38;
                    puVar38[8] = 0;
                }
                else {
                    *(undefined8 **)(*(longlong *)(param_2 + 0x38) + 0x48) =
                            puVar38;
                    puVar38[8] = *(undefined8 *)(param_2 + 0x38);
                    *(undefined8 **)(param_2 + 0x38) =
                            puVar38;
                }
                puVar38[9] = 0;
                puVar38[2] =
                        param_2;
            }
            if (lVar36 != 0) {
                FUN_14018b900(lVar36,
                              0);
            }
            if (lVar35 != 0) {
                FUN_14018b900(lVar35,
                              0);
            }
            if (local_2f0 != 0) {
                FUN_14018b900(local_2f0,
                              0);
            }
            if (puVar6 != (undefined2 *)0x0) {
                FUN_14018b900(puVar6,
                              0);
            }
            local_310 = local_310 + 1;
            local_300 = local_300 + 1;
            param_1 = local_2d8;
        } while (

                local_310<
                (int)

                        ((*(longlong *)(local_2d8 + 0x40) - *(longlong *)(local_2d8 + 0x38)) / 0x130));
    }
    FUN_1407db4f0(local_b8
                  ^ (ulonglong)auStack824);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140102760(longlong
                   param_1,
                   undefined8 param_2
)

{
    undefined4 uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    longlong lVar5;
    undefined8 uVar6;
    wchar_t *pwVar7;
    longlong lVar8;
    short *psVar9;
    undefined4 *puVar10;
    uint uVar11;
    int iVar12;
    int iVar13;
    undefined8 *puVar14;
    wchar_t *pwVar15;
    longlong lVar16;
    short *psVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    byte bVar22;
    float fVar23;
    float fVar24;
    undefined auStack1000[32];
    wchar_t *local_3c8;
    undefined2 *local_3c0;
    undefined8 *local_3b8;
    uint *local_3b0;
    uint *local_3a8;
    undefined local_3a0;
    undefined local_398;
    float local_390;
    float local_388;
    float local_378[2];
    undefined8 local_370;
    longlong local_368;
    uint local_360;
    uint local_35c;
    uint local_358;
    int local_354;
    int local_350;
    float local_34c;
    float local_348[2];
    undefined8 local_340;
    int local_338;
    int local_334;
    undefined8 local_330;
    int local_328;
    undefined8 local_320;
    int local_318[2];
    longlong local_310;
    longlong local_308;
    int local_300;
    int local_2fc;
    int local_2f8;
    int local_2f4;
    longlong *local_2e8;
    undefined8 local_2e0;
    undefined8 local_2d8;
    undefined8 local_2d0;
    int local_2c8;
    undefined4 uStack708;
    undefined4 uStack704;
    undefined4 uStack700;
    undefined8 local_2b8;
    undefined local_2b0;
    undefined local_2af;
    undefined local_2ae;
    float local_2ac;
    int local_2a8;
    int local_2a4;
    undefined4 local_2a0;
    undefined4 local_29c;
    float local_298;
    float local_294;
    uint local_290;
    uint local_28c;
    undefined local_288;
    undefined8 local_268[4];
    undefined4 auStack584[4];
    undefined4 auStack568[4];
    undefined4 local_228;
    undefined8 local_208[4];
    undefined4 auStack488[4];
    undefined4 auStack472[4];
    undefined4 local_1c8;
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
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 uStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined local_f8[96];
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 uStack120;
    undefined8 local_70;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)
            auStack1000;
    local_318[0] = 1;
    local_310 = param_1;
    lVar5 = FUN_1401a6b80(param_2, L"Cycle");
    if (lVar5 != 0) {
        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
        FUN_1407df428(uVar6, &DAT_1409e4114, local_318
        );
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfd;
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | (local_318[0] != 0) * '\x02';
    if ((*(int *)(param_1 + 0x18) == 0) &&
        (
                lVar5 = FUN_1401a5ae0(param_2), local_368 = lVar5, lVar5
                                                                   != 0)) {
        fVar24 = 0.002777778;
        do {
            uVar20 = 0;
            lVar16 = *(longlong * )(lVar5 + 0x60);
            local_368 = lVar5;
            if (lVar16 != 0) {
                while( true ) {
                    pwVar15 = L"Texture";
                    pwVar7 = (wchar_t *) FUN_1401a4f40();
                    if (pwVar7 == L"Texture") break;
                    uVar18 = uVar20;
                    if (*pwVar7 == L'\0') {
                        LAB_1401028c3:
                        if (*pwVar15 == L'\0') break;
                    }
                    else {
                        do {
                            uVar11 = (uint)
                                    uVar18;
                            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < (int)uVar11))
                                break;
                            pwVar7 = pwVar7 + 1;
                            pwVar15 = pwVar15 + 1;
                            uVar11 = uVar11 + 1;
                            uVar18 = (ulonglong)
                                    uVar11;
                        } while (*pwVar7 != L'\0');
                        if (uVar11 == 0x7fffffff) break;
                        if (*pwVar7 == L'\0') goto
                                    LAB_1401028c3;
                    }
                    lVar16 = *(longlong * )(lVar16 + 0x38);
                    if (lVar16 == 0) goto
                                LAB_14010395f;
                }
                if ((lVar16 == 0) || (
                        local_308 = FUN_1401a4f40(lVar16 + 0x20), local_308
                                                                  == 0))
                    goto
                            LAB_14010395f;
                local_98 = 0;
                local_90 = 0;
                local_88 = 0;
                local_80 = 0;
                uStack120 = 0;
                local_70 = 0;
                lVar16 = -4;
                uVar18 = uVar20;
                uVar19 = uVar20;
                uVar21 = uVar20;
                do {
                    lVar8 = FUN_1401a6b80(lVar5, *(undefined8 * )((longlong) & PTR_DAT_140a1ac20 + uVar21));
                    if (lVar8 != 0) {
                        uVar6 = FUN_1401a4f40(lVar8 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e4114, (longlong)
                                                             &local_98 + uVar18);
                    }
                    lVar8 = FUN_1401a6b80();
                    if (lVar8 != 0) {
                        uVar6 = FUN_1401a4f40(lVar8 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e4114, (longlong)
                                                             &local_80 + uVar18);
                    }
                    if (0 < (int)uVar19) {
                        if (*(int *)((longlong)&local_98 + lVar16 + 4) == 0) {
                            *(undefined4 *)((longlong)&local_98 + lVar16 + 4) =
                                    *(undefined4 *)((longlong)&local_98 + lVar16);
                        }
                        if (*(int *)((longlong)&local_80 + lVar16 + 4) == 0) {
                            *(undefined4 *)((longlong)&local_80 + lVar16 + 4) =
                                    *(undefined4 *)((longlong)&local_80 + lVar16);
                        }
                    }
                    uVar11 = (int) uVar19 + 1;
                    uVar19 = (ulonglong)
                            uVar11;
                    uVar18 = uVar18 + 4;
                    uVar21 = uVar21 + 8;
                    lVar16 = lVar16 + 4;
                } while ((int)uVar11 < 6);
                lVar16 = *(longlong * )(lVar5 + 0x60);
                bVar2 = false;
                bVar3 = false;
                bVar4 = false;
                local_340 = 0;
                local_330 = 0;
                local_320 = 0;
                local_370 = 0;
                for (; lVar16 != 0;
                       lVar16 = *(longlong * )(lVar16 + 0x38)
                        ) {
                    psVar17 = &DAT_140a31d78;
                    psVar9 = (short *) FUN_1401a4f40(lVar16 + 8);
                    if (psVar9 == &DAT_140a31d78) {
                        LAB_140102aac:
                        if (lVar16 != 0) {
                            uVar6 = FUN_1401a4f40(lVar16 + 0x20);
                            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_340);
                            if (iVar12 == 1) {
                                lVar16 = *(longlong * )(lVar5 + 0x60);
                                goto
                                        joined_r0x000140102ae1;
                            }
                        }
                        break;
                    }
                    uVar18 = uVar20;
                    if (*psVar9 == 0) {
                        LAB_140102a98:
                        if (*psVar17 == 0) goto
                                    LAB_140102aac;
                    }
                    else {
                        do {
                            uVar11 = (uint)
                                    uVar18;
                            if (((*psVar17 == 0) || (*psVar9 != *psVar17)) || (0x7ffffffe < (int)uVar11)) break;
                            psVar9 = psVar9 + 1;
                            psVar17 = psVar17 + 1;
                            uVar11 = uVar11 + 1;
                            uVar18 = (ulonglong)
                                    uVar11;
                        } while (*psVar9 != 0);
                        if (uVar11 == 0x7fffffff) goto
                                    LAB_140102aac;
                        if (*psVar9 == 0) goto
                                    LAB_140102a98;
                    }
                }
                LAB_140102b89:
                for (
                        lVar16 = *(longlong * )(lVar5 + 0x60);
                        lVar16 != 0;
                        lVar16 = *(longlong * )(lVar16 + 0x38)
                        ) {
                    pwVar15 = L"Right";
                    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar16 + 8);
                    if (pwVar7 == L"Right") {
                        LAB_140102c0c:
                        if (lVar16 != 0) {
                            uVar6 = FUN_1401a4f40(lVar16 + 0x20);
                            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_330);
                            if (iVar12 == 1) {
                                lVar16 = *(longlong * )(lVar5 + 0x60);
                                goto
                                        joined_r0x000140102c41;
                            }
                        }
                        break;
                    }
                    uVar18 = uVar20;
                    if (*pwVar7 == L'\0') {
                        LAB_140102bf8:
                        if (*pwVar15 == L'\0') goto
                                    LAB_140102c0c;
                    }
                    else {
                        do {
                            uVar11 = (uint)
                                    uVar18;
                            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < (int)uVar11))
                                break;
                            pwVar7 = pwVar7 + 1;
                            pwVar15 = pwVar15 + 1;
                            uVar11 = uVar11 + 1;
                            uVar18 = (ulonglong)
                                    uVar11;
                        } while (*pwVar7 != L'\0');
                        if (uVar11 == 0x7fffffff) goto
                                    LAB_140102c0c;
                        if (*pwVar7 == L'\0') goto
                                    LAB_140102bf8;
                    }
                }
                LAB_140102cea:
                for (
                        lVar16 = *(longlong * )(lVar5 + 0x60);
                        lVar16 != 0;
                        lVar16 = *(longlong * )(lVar16 + 0x38)
                        ) {
                    pwVar15 = L"Width";
                    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar16 + 8);
                    if (pwVar7 == L"Width") {
                        LAB_140102d6c:
                        if (lVar16 != 0) {
                            uVar6 = FUN_1401a4f40(lVar16 + 0x20);
                            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_320);
                            if (iVar12 == 1) {
                                lVar5 = *(longlong * )(lVar5 + 0x60);
                                goto
                                        joined_r0x000140102da1;
                            }
                        }
                        break;
                    }
                    uVar18 = uVar20;
                    if (*pwVar7 == L'\0') {
                        LAB_140102d58:
                        if (*pwVar15 == L'\0') goto
                                    LAB_140102d6c;
                    }
                    else {
                        do {
                            uVar11 = (uint)
                                    uVar18;
                            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < (int)uVar11))
                                break;
                            pwVar7 = pwVar7 + 1;
                            pwVar15 = pwVar15 + 1;
                            uVar11 = uVar11 + 1;
                            uVar18 = (ulonglong)
                                    uVar11;
                        } while (*pwVar7 != L'\0');
                        if (uVar11 == 0x7fffffff) goto
                                    LAB_140102d6c;
                        if (*pwVar7 == L'\0') goto
                                    LAB_140102d58;
                    }
                }
                LAB_140102e45:
                if ((bVar2) && ((bVar3 || (bVar4)))) {
                    bVar22 = 1;
                }
                else {
                    bVar22 = 0;
                }
                local_320.
                        _0_4_ = (int) local_330;
                local_320.
                        _4_4_ = local_330._4_4_;
                if ((bVar2) && (bVar4)) {
                    local_320.
                            _0_4_ = (int) local_320 + (int) local_340;
                    local_340.
                            _0_4_ = (int) local_340 + DAT_140c77760;
                    local_320.
                            _4_4_ = local_320._4_4_ + local_340._4_4_;
                    local_340.
                            _4_4_ = local_340._4_4_ + DAT_140c77764;
                }
                local_328 = (int) local_330;
                local_338 = local_330._4_4_;
                for (
                        lVar5 = *(longlong * )(local_368 + 0x60);
                        lVar5 != 0;
                        lVar5 = *(longlong * )(lVar5 + 0x38)
                        ) {
                    pwVar15 = L"HotspotX";
                    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
                    if (pwVar7 == L"HotspotX") {
                        LAB_140102fb6:
                        if (lVar5 == 0) break;
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_370);
                        if (iVar12 != 1) break;
                        lVar5 = *(longlong * )(local_368 + 0x60);
                        goto
                                joined_r0x000140102ff0;
                    }
                    iVar12 = 0;
                    if (*pwVar7 != L'\0') {
                        do {
                            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
                            pwVar7 = pwVar7 + 1;
                            pwVar15 = pwVar15 + 1;
                            iVar12 = iVar12 + 1;
                        } while (*pwVar7 != L'\0');
                        if (iVar12 == 0x7fffffff) goto
                                    LAB_140102fb6;
                    }
                    if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) goto
                                LAB_140102fb6;
                }
                LAB_140102f21:
                local_370 = 0;
                LAB_140102f28:
                local_34c = 1.0;
                lVar5 = *(longlong * )(local_368 + 0x60);
                if (lVar5 != 0) {
                    while( true ) {
                        pwVar15 = L"Duration";
                        pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
                        if (pwVar7 == L"Duration") break;
                        iVar12 = 0;
                        if (*pwVar7 != L'\0') {
                            do {
                                if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
                                pwVar7 = pwVar7 + 1;
                                pwVar15 = pwVar15 + 1;
                                iVar12 = iVar12 + 1;
                            } while (*pwVar7 != L'\0');
                            if (iVar12 == 0x7fffffff) break;
                        }
                        if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) break;
                        lVar5 = *(longlong * )(lVar5 + 0x38);
                        if (lVar5 == 0) goto
                                    LAB_140103115;
                    }
                    if (lVar5 != 0) {
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e441c, &local_34c
                        );
                    }
                }
                LAB_140103115:
                lVar5 = local_368;
                FUN_1400f66f0(&local_35c, local_368,
                              L"StartColor");
                FUN_1400f66f0(&local_358, lVar5,
                              L"EndColor");
                lVar5 = *(longlong * )(lVar5 + 0x60);
                local_360 = 0;
                for (; lVar5 != 0;
                       lVar5 = *(longlong * )(lVar5 + 0x38)
                        ) {
                    pwVar15 = L"Stretchy";
                    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
                    if (pwVar7 == L"Stretchy") {
                        LAB_1401031c7:
                        if (lVar5 == 0) break;
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_360);
                        if (iVar12 != 1) break;
                        goto
                                LAB_1401031f4;
                    }
                    iVar12 = 0;
                    if (*pwVar7 != L'\0') {
                        do {
                            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
                            pwVar7 = pwVar7 + 1;
                            pwVar15 = pwVar15 + 1;
                            iVar12 = iVar12 + 1;
                        } while (*pwVar7 != L'\0');
                        if (iVar12 == 0x7fffffff) goto
                                    LAB_1401031c7;
                    }
                    if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) goto
                                LAB_1401031c7;
                }
                local_360 = (uint)
                        bVar22;
                LAB_1401031f4:
                local_350 = 0;
                lVar5 = *(longlong * )(local_368 + 0x60);
                if (lVar5 != 0) {
                    while( true ) {
                        psVar17 = &DAT_140a1a908;
                        psVar9 = (short *) FUN_1401a4f40(lVar5 + 8);
                        if (psVar9 == &DAT_140a1a908) break;
                        iVar12 = 0;
                        if (*psVar9 != 0) {
                            do {
                                if (((*psVar17 == 0) || (*psVar9 != *psVar17)) || (0x7ffffffe < iVar12)) break;
                                psVar9 = psVar9 + 1;
                                psVar17 = psVar17 + 1;
                                iVar12 = iVar12 + 1;
                            } while (*psVar9 != 0);
                            if (iVar12 == 0x7fffffff) break;
                        }
                        if ((*psVar9 == 0) && (*psVar17 == 0)) break;
                        lVar5 = *(longlong * )(lVar5 + 0x38);
                        if (lVar5 == 0) goto
                                    LAB_140103298;
                    }
                    if (lVar5 != 0) {
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e4114, &local_350
                        );
                    }
                }
                LAB_140103298:
                local_354 = 0;
                lVar5 = *(longlong * )(local_368 + 0x60);
                if (lVar5 != 0) {
                    while( true ) {
                        psVar17 = &DAT_140a1a918;
                        psVar9 = (short *) FUN_1401a4f40(lVar5 + 8);
                        if (psVar9 == &DAT_140a1a918) break;
                        iVar12 = 0;
                        if (*psVar9 != 0) {
                            do {
                                if (((*psVar17 == 0) || (*psVar9 != *psVar17)) || (0x7ffffffe < iVar12)) break;
                                psVar9 = psVar9 + 1;
                                psVar17 = psVar17 + 1;
                                iVar12 = iVar12 + 1;
                            } while (*psVar9 != 0);
                            if (iVar12 == 0x7fffffff) break;
                        }
                        if ((*psVar9 == 0) && (*psVar17 == 0)) break;
                        lVar5 = *(longlong * )(lVar5 + 0x38);
                        if (lVar5 == 0) goto
                                    LAB_140103338;
                    }
                    if (lVar5 != 0) {
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e4114, &local_354
                        );
                    }
                }
                LAB_140103338:
                local_378[0] = 0.0;
                lVar5 = *(longlong * )(local_368 + 0x60);
                if (lVar5 != 0) {
                    while( true ) {
                        pwVar15 = L"StartOrientation";
                        pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
                        if (pwVar7 == L"StartOrientation") break;
                        iVar12 = 0;
                        if (*pwVar7 != L'\0') {
                            do {
                                if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
                                pwVar7 = pwVar7 + 1;
                                pwVar15 = pwVar15 + 1;
                                iVar12 = iVar12 + 1;
                            } while (*pwVar7 != L'\0');
                            if (iVar12 == 0x7fffffff) break;
                        }
                        if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) break;
                        lVar5 = *(longlong * )(lVar5 + 0x38);
                        if (lVar5 == 0) goto
                                    LAB_1401033e9;
                    }
                    if (lVar5 != 0) {
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e441c, local_378
                        );
                    }
                }
                LAB_1401033e9:
                local_348[0] = 0.0;
                lVar5 = *(longlong * )(local_368 + 0x60);
                local_378[0] = local_378[0] *
                               _DAT_140c3c248 *fVar24;
                if (lVar5 != 0) {
                    while( true ) {
                        pwVar15 = L"EndOrientation";
                        pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
                        if (pwVar7 == L"EndOrientation") break;
                        iVar12 = 0;
                        if (*pwVar7 != L'\0') {
                            do {
                                if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
                                pwVar7 = pwVar7 + 1;
                                pwVar15 = pwVar15 + 1;
                                iVar12 = iVar12 + 1;
                            } while (*pwVar7 != L'\0');
                            if (iVar12 == 0x7fffffff) break;
                        }
                        if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) break;
                        lVar5 = *(longlong * )(lVar5 + 0x38);
                        if (lVar5 == 0) goto
                                    LAB_1401034ae;
                    }
                    if (lVar5 != 0) {
                        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
                        FUN_1407df428(uVar6, &DAT_1409e441c, local_348
                        );
                    }
                }
                LAB_1401034ae:
                lVar16 = local_310;
                lVar5 = DAT_140c63678;
                local_348[0] = local_348[0] *
                               _DAT_140c3c248 *fVar24;
                if (bVar22 == 0) {
                    uVar20 = (ulonglong)
                            local_35c;
                    local_2a0 = (int) local_370;
                    local_2ac = local_34c;
                    local_2b0 = local_360 != 0;
                    uVar6 = *(undefined8 * )(local_310 + 0x10);
                    local_2af = local_350 != 0;
                    local_2e8 = (longlong * )
                            0x0;
                    local_2ae = local_354 != 0;
                    local_29c = local_370._4_4_;
                    local_290 = local_35c;
                    if (uVar20 < *(ulonglong *)(DAT_140c63678 + 0x30)) {
                        iVar12 = *(int *) ((ulonglong)
                                                   local_35c * 0x20 + 0x10 +
                                           *(longlong *)(DAT_140c63678 + 0x28));
                        if (iVar12 - 1U < 0xfffffffe) {
                            *(int *)((ulonglong)local_35c * 0x20 + 0x10 + *(longlong *)(DAT_140c63678 + 0x28)) =
                                    iVar12 + 1;
                        }
                    }
                    uVar18 = (ulonglong)
                            local_358;
                    local_28c = local_358;
                    if (uVar18 < *(ulonglong *)(lVar5 + 0x30)) {
                        lVar5 = *(longlong * )(lVar5 + 0x28);
                        iVar12 = *(int *) ((ulonglong)
                                                   local_358 * 0x20 + 0x10 + lVar5);
                        if (iVar12 - 1U < 0xfffffffe) {
                            *(int *)((ulonglong)local_358 * 0x20 + 0x10 + lVar5) = iVar12 + 1;
                        }
                    }
                    local_288 = 0;
                    local_228 = 0;
                    puVar14 = local_268;
                    lVar5 = 0;
                    do {
                        uVar1 = *(undefined4 * )((longlong) & DAT_140a1b148 + lVar5);
                        *(undefined4 *)((longlong)auStack568 + lVar5) = 0;
                        lVar8 = lVar5 + 4;
                        *(undefined4 *)((longlong)auStack584 + lVar5) =
                                uVar1;
                        *
                                puVar14 = 0;
                        puVar14 = puVar14 + 1;
                        lVar5 = lVar8;
                    } while (lVar8 < 0x10);
                    local_1c8 = 0;
                    puVar14 = local_208;
                    lVar5 = 0;
                    do {
                        uVar1 = *(undefined4 * )((longlong) & DAT_140a1b148 + lVar5);
                        *(undefined4 *)((longlong)auStack472 + lVar5) = 0;
                        lVar8 = lVar5 + 4;
                        *(undefined4 *)((longlong)auStack488 + lVar5) =
                                uVar1;
                        *
                                puVar14 = 0;
                        puVar14 = puVar14 + 1;
                        lVar5 = lVar8;
                    } while (lVar8 < 0x10);
                    local_2e0 = local_98;
                    local_2c8 = (int) local_80;
                    uStack708 = local_80._4_4_;
                    uStack704 = (undefined4)
                            uStack120;
                    uStack700 = uStack120._4_4_;
                    local_2d8 = local_90;
                    local_2b8 = local_70;
                    local_2d0 = local_88;
                    local_2a8 = (int) ((ulonglong)
                            local_88 >> 0x20) - (int)
                                        local_98;
                    local_2a4 = (int) ((ulonglong)
                            local_70 >> 0x20) - (int)
                                        local_80;
                    fVar23 = local_34c;
                    local_298 = local_378[0];
                    local_294 = local_348[0];
                    FUN_140108f00(uVar6, local_308
                    );
                    lVar5 = *(longlong * )(lVar16 + 0x40);
                    if (lVar5 == *(longlong *)(lVar16 + 0x48)) {
                        FUN_140109f90(lVar16
                                      + 0x30,lVar5,&local_2e8);
                    }
                    else {
                        if (lVar5 != 0) {
                            FUN_1400feb20(lVar5, &local_2e8
                            );
                        }
                        *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 0x130;
                    }
                    *(float *)(lVar16 + 0x70) = fVar23 + *(float *)(lVar16 + 0x70);
                    lVar5 = *(longlong * )(lVar16 + 0x40) - *(longlong * )(lVar16 + 0x38);
                    lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
                    iVar12 = ((int) (lVar5 >> 3) - (int) (lVar5 >> 0x3f)) + -1;
                    if (local_2e8 != (longlong *)0x0) {
                        (**(code **)(*local_2e8 + 8))();
                    }
                    FUN_1401429a0(DAT_140c63678);
                    FUN_1401429a0(DAT_140c63678);
                }
                else {
                    local_398 = local_354 != 0;
                    local_3a0 = local_350 != 0;
                    local_3a8 = &local_358;
                    local_3b0 = &local_35c;
                    local_3b8 = &local_370;
                    local_3c0 = (undefined2 * )
                            ((ulonglong)
                                     local_3c0 & 0xffffffffffffff00 | (ulonglong)(local_360 != 0));
                    local_3c8 = (wchar_t *)
                            ((ulonglong)
                                     local_3c8 & 0xffffffff00000000 | (ulonglong)(uint)local_34c);
                    local_390 = local_378[0];
                    local_388 = local_348[0];
                    local_300 = (int) local_340;
                    local_2fc = local_340._4_4_;
                    local_2f8 = (int) local_320;
                    local_2f4 = local_320._4_4_;
                    iVar12 = FUN_140100f50(local_310, *(undefined8 * )(local_310 + 0x10), local_308);
                    uVar20 = (ulonglong)
                            local_35c;
                    uVar18 = (ulonglong)
                            local_358;
                }
                lVar5 = local_368;
                local_334 = 0;
                lVar8 = *(longlong * )(local_368 + 0x60);
                if (lVar8 != 0) {
                    while( true ) {
                        pwVar15 = L"UseAnchors";
                        pwVar7 = (wchar_t *) FUN_1401a4f40(lVar8 + 8);
                        if (pwVar7 == L"UseAnchors") break;
                        iVar13 = 0;
                        if (*pwVar7 != L'\0') {
                            do {
                                if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar13)) break;
                                pwVar7 = pwVar7 + 1;
                                pwVar15 = pwVar15 + 1;
                                iVar13 = iVar13 + 1;
                            } while (*pwVar7 != L'\0');
                            if (iVar13 == 0x7fffffff) break;
                        }
                        if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) break;
                        lVar8 = *(longlong * )(lVar8 + 0x38);
                        if (lVar8 == 0) goto
                                    LAB_140103932;
                    }
                    if (lVar8 != 0) {
                        uVar6 = FUN_1401a4f40(lVar8 + 0x20);
                        iVar13 = FUN_1407df428(uVar6, &DAT_1409e4114, &local_334);
                        if ((iVar13 == 1) && (local_334 != 0)) {
                            local_3c8 = L"Start";
                            puVar10 = (undefined4 * )
                                    FUN_1400d45e0(local_f8,
                                                  0,0,lVar5);
                            local_158 = *puVar10;
                            uStack340 = puVar10[1];
                            uStack336 = puVar10[2];
                            uStack332 = puVar10[3];
                            local_138 = puVar10[8];
                            uStack308 = puVar10[9];
                            uStack304 = puVar10[10];
                            uStack300 = puVar10[0xb];
                            local_148 = puVar10[4];
                            uStack324 = puVar10[5];
                            uStack320 = puVar10[6];
                            uStack316 = puVar10[7];
                            local_128 = puVar10[0xc];
                            uStack292 = puVar10[0xd];
                            uStack288 = puVar10[0xe];
                            uStack284 = puVar10[0xf];
                            local_118 = puVar10[0x10];
                            uStack276 = puVar10[0x11];
                            uStack272 = puVar10[0x12];
                            uStack268 = puVar10[0x13];
                            local_108 = puVar10[0x14];
                            local_3c8 = (wchar_t *) &DAT_140a1aab8;
                            puVar10 = (undefined4 * )
                                    FUN_1400d45e0(local_f8,
                                                  0,0,lVar5);
                            local_1b8 = *puVar10;
                            uStack436 = puVar10[1];
                            uStack432 = puVar10[2];
                            uStack428 = puVar10[3];
                            local_198 = puVar10[8];
                            uStack404 = puVar10[9];
                            uStack400 = puVar10[10];
                            uStack396 = puVar10[0xb];
                            local_1a8 = puVar10[4];
                            uStack420 = puVar10[5];
                            uStack416 = puVar10[6];
                            uStack412 = puVar10[7];
                            local_188 = puVar10[0xc];
                            uStack388 = puVar10[0xd];
                            uStack384 = puVar10[0xe];
                            uStack380 = puVar10[0xf];
                            local_178 = puVar10[0x10];
                            uStack372 = puVar10[0x11];
                            uStack368 = puVar10[0x12];
                            uStack364 = puVar10[0x13];
                            local_168 = puVar10[0x14];
                            FUN_1400fd890((longlong)
                                                  iVar12 * 0x130 + *(longlong *)(lVar16 + 0x38));
                        }
                    }
                }
                LAB_140103932:
                FUN_1401429a0(DAT_140c63678, uVar18
                );
                FUN_1401429a0(DAT_140c63678, uVar20
                );
            }
            LAB_14010395f:
            lVar5 = FUN_1401a5bc0(lVar5);
            local_368 = lVar5;
        } while (lVar5 != 0);
    }
    FUN_1407db4f0(local_68
                  ^ (ulonglong)auStack1000);
    return;
    joined_r0x000140102ae1:
    if (lVar16 == 0) goto
                LAB_140102b89;
    psVar17 = &DAT_140a31da8;
    psVar9 = (short *) FUN_1401a4f40(lVar16 + 8);
    if (psVar9 == &DAT_140a31da8) {
        LAB_140102b59:
        if (lVar16 != 0) {
            uVar6 = FUN_1401a4f40(lVar16 + 0x20);
            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, (longlong) & local_340 + 4);
            bVar2 = false;
            if (iVar12 == 1) {
                bVar2 = true;
            }
        }
        goto
                LAB_140102b89;
    }
    uVar18 = uVar20;
    if (*psVar9 == 0) {
        LAB_140102b48:
        if (*psVar17 == 0) goto
                    LAB_140102b59;
    }
    else {
        do {
            uVar11 = (uint)
                    uVar18;
            if (((*psVar17 == 0) || (*psVar9 != *psVar17)) || (0x7ffffffe < (int)uVar11)) break;
            psVar9 = psVar9 + 1;
            psVar17 = psVar17 + 1;
            uVar11 = uVar11 + 1;
            uVar18 = (ulonglong)
                    uVar11;
        } while (*psVar9 != 0);
        if (uVar11 == 0x7fffffff) goto
                    LAB_140102b59;
        if (*psVar9 == 0) goto
                    LAB_140102b48;
    }
    lVar16 = *(longlong * )(lVar16 + 0x38);
    goto
            joined_r0x000140102ae1;
    joined_r0x000140102c41:
    if (lVar16 == 0) goto
                LAB_140102cea;
    pwVar15 = L"Bottom";
    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar16 + 8);
    if (pwVar7 == L"Bottom") {
        LAB_140102cb9:
        if (lVar16 != 0) {
            uVar6 = FUN_1401a4f40(lVar16 + 0x20);
            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, (longlong) & local_330 + 4);
            bVar3 = false;
            if (iVar12 == 1) {
                bVar3 = true;
            }
        }
        goto
                LAB_140102cea;
    }
    uVar18 = uVar20;
    if (*pwVar7 == L'\0') {
        LAB_140102ca8:
        if (*pwVar15 == L'\0') goto
                    LAB_140102cb9;
    }
    else {
        do {
            uVar11 = (uint)
                    uVar18;
            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < (int)uVar11)) break;
            pwVar7 = pwVar7 + 1;
            pwVar15 = pwVar15 + 1;
            uVar11 = uVar11 + 1;
            uVar18 = (ulonglong)
                    uVar11;
        } while (*pwVar7 != L'\0');
        if (uVar11 == 0x7fffffff) goto
                    LAB_140102cb9;
        if (*pwVar7 == L'\0') goto
                    LAB_140102ca8;
    }
    lVar16 = *(longlong * )(lVar16 + 0x38);
    goto
            joined_r0x000140102c41;
    joined_r0x000140102da1:
    if (lVar5 == 0) goto
                LAB_140102e45;
    pwVar15 = L"Height";
    pwVar7 = (wchar_t *) FUN_1401a4f40();
    if (pwVar7 == L"Height") {
        LAB_140102e14:
        if (lVar5 != 0) {
            uVar6 = FUN_1401a4f40(lVar5 + 0x20);
            iVar12 = FUN_1407df428(uVar6, &DAT_1409e4114, (longlong) & local_320 + 4);
            bVar4 = false;
            if (iVar12 == 1) {
                bVar4 = true;
            }
        }
        goto
                LAB_140102e45;
    }
    uVar18 = uVar20;
    if (*pwVar7 == L'\0') {
        LAB_140102e03:
        if (*pwVar15 == L'\0') goto
                    LAB_140102e14;
    }
    else {
        do {
            uVar11 = (uint)
                    uVar18;
            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < (int)uVar11)) break;
            pwVar7 = pwVar7 + 1;
            pwVar15 = pwVar15 + 1;
            uVar11 = uVar11 + 1;
            uVar18 = (ulonglong)
                    uVar11;
        } while (*pwVar7 != L'\0');
        if (uVar11 == 0x7fffffff) goto
                    LAB_140102e14;
        if (*pwVar7 == L'\0') goto
                    LAB_140102e03;
    }
    lVar5 = *(longlong * )(lVar5 + 0x38);
    goto
            joined_r0x000140102da1;
    joined_r0x000140102ff0:
    if (lVar5 == 0) goto
                LAB_140102f21;
    pwVar15 = L"HotspotY";
    pwVar7 = (wchar_t *) FUN_1401a4f40(lVar5 + 8);
    if (pwVar7 == L"HotspotY") {
        LAB_14010306a:
        if (lVar5 == 0) goto
                    LAB_140102f21;
        uVar6 = FUN_1401a4f40(lVar5 + 0x20);
        iVar12 = FUN_1407df428(uVar6);
        if (iVar12 != 1) goto
                    LAB_140102f21;
        if ((4000 < (int)local_370 + 2000U) || (4000 < local_370._4_4_ + 2000)) {
            local_3c0 = &DAT_140b7b704;
            if (*(undefined2 **)(local_310 + 0x20) != (undefined2 *)0x0) {
                local_3c0 = *(undefined2 * *)(local_310 + 0x20);
            }
            local_3c8 = (wchar_t *)
                    ((ulonglong)
                             local_3c8 & 0xffffffff00000000 | (ulonglong)local_370._4_4_);
            FUN_1400035b0(0xd);
        }
        goto
                LAB_140102f28;
    }
    iVar12 = 0;
    if (*pwVar7 != L'\0') {
        do {
            if (((*pwVar15 == L'\0') || (*pwVar7 != *pwVar15)) || (0x7ffffffe < iVar12)) break;
            pwVar7 = pwVar7 + 1;
            pwVar15 = pwVar15 + 1;
            iVar12 = iVar12 + 1;
        } while (*pwVar7 != L'\0');
        if (iVar12 == 0x7fffffff) goto
                    LAB_14010306a;
    }
    if ((*pwVar7 == L'\0') && (*pwVar15 == L'\0')) goto
                LAB_14010306a;
    lVar5 = *(longlong * )(lVar5 + 0x38);
    goto
            joined_r0x000140102ff0;
}


undefined8 FUN_1401039e0(longlong
                         param_1,
                         undefined8 param_2, undefined8
                         param_3)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 local_res8[2];
    undefined8 local_res10;

    lVar4 = *(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38);
    lVar3 = lVar4 / 0x130;
    local_res10 = param_2;
    if ((int)lVar3 == 0) {
        iVar2 = 0;
        lVar3 = 0;
        if (0 < (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
            do {
                if (0 < lVar3) {
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
                }
                if (lVar3 < 0) {
                    lVar4 = 0;
                }
                else {
                    lVar4 = param_1;
                    if (

                            iVar2<(int)

                                    (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                        lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar3 * 8);
                    }
                }
                FUN_1401039e0(lVar4, local_res10, param_3
                );
                iVar2 = iVar2 + 1;
                lVar3 = lVar3 + 1;
            } while (

                    iVar2<(int)

                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
        }
    }
    else {
        local_res8[0] = 0;
        lVar3 = FUN_140101260(0, in_XMM3_Da, param_1, lVar3, local_res8, lVar4,
                              CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)))
        );
        if (lVar3 == 0) {
            return 0x8007000d;
        }
        uVar1 = FUN_1400ffec0(lVar3, local_res10, param_3);
        if ((int)uVar1 < 0) {
            return
                    uVar1;
        }
    }
    return 0;
}


undefined8 FUN_140103b20(ulonglong
                         param_1,
                         float *param_2, undefined8
                         param_3)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar8;
    undefined4 local_78[2];
    float *local_70;
    undefined8 local_68;
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    float local_48;
    float local_44;
    ulonglong uVar7;

    lVar1 = (*(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38)) / 0x130;
    local_70 = param_2;
    local_68 = param_3;
    if ((int)lVar1 == 0) {
        uVar5 = 0;
        uVar7 = uVar5;
        uVar8 = uVar5;
        if (0 < (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
            do {
                if (0 < (longlong)uVar8) {
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1,local_68);
                }
                uVar4 = uVar5;
                if ((-1 < (longlong)uVar8) &&
                    (
                            uVar4 = param_1,
                                    (int)

                                            uVar7<(int)

                                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)))
                {
                    uVar4 = *(ulonglong * )(*(longlong * )(param_1 + 0x58) + uVar8 * 8);
                }
                FUN_140103b20(uVar4, local_70, local_68
                );
                uVar6 = (int) uVar7 + 1;
                uVar7 = (ulonglong)
                        uVar6;
                uVar8 = uVar8 + 1;
            } while ((int)

                             uVar6<
                     (int)

                             (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
        }
    }
    else {
        local_78[0] = 0;
        plVar2 = (longlong * )
                FUN_140101260(param_1, lVar1, local_78
                );
        if (plVar2 == (longlong *)0x0) {
            return 0x8007000d;
        }
        local_58 = *local_70 - (float) (int) plVar2[9];
        fStack84 = local_70[1] - (float) *(int *) ((longlong)
                                                           plVar2 + 0x4c);
        fStack80 = local_70[2] - 0.0;
        fStack76 = local_70[3] - 0.0;
        local_48 = (float) *(int *) (plVar2 + 8) + local_58;
        local_44 = (float) *(int *) ((longlong)
                                             plVar2 + 0x44) +
                   fStack84;
        if ((*plVar2 != 0) && (
                uVar3 = FUN_140100010(plVar2, &local_58, local_68),
                        (int)uVar3 < 0)) {
            return
                    uVar3;
        }
    }
    return 0;
}


undefined8
FUN_140103cf0(longlong
              param_1,
              undefined8 param_2, undefined8
              param_3,
              undefined param_4,
              undefined4
              param_5)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined4 local_res8[2];
    undefined8 local_res10;
    undefined8 local_res18;

    lVar5 = (*(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38)) / 0x130;
    local_res10 = param_2;
    local_res18 = param_3;
    if ((int)lVar5 == 0) {
        iVar4 = 0;
        lVar5 = 0;
        if (0 < (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
            do {
                if (0 < lVar5) {
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1,local_res18);
                }
                if (lVar5 < 0) {
                    lVar3 = 0;
                }
                else {
                    lVar3 = param_1;
                    if (

                            iVar4<(int)

                                    (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                    }
                }
                FUN_140103cf0(lVar3, local_res10, local_res18, param_4, param_5
                );
                iVar4 = iVar4 + 1;
                lVar5 = lVar5 + 1;
            } while (

                    iVar4<(int)

                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
        }
    }
    else {
        local_res8[0] = 0;
        plVar1 = (longlong * )
                FUN_140101260(0,param_5,param_1,lVar5,local_res8);
        if (plVar1 == (longlong *)0x0) {
            return 0x8007000d;
        }
        if ((*plVar1 != 0) && (
                uVar2 = FUN_1400fff90(plVar1, local_res10, local_res18),
                        (int)uVar2 < 0)) {
            return
                    uVar2;
        }
    }
    return 0;
}


undefined8
FUN_140103e60(longlong
              param_1,
              undefined8 param_2, undefined8
              param_3,
              ulonglong param_4,
              undefined4
              param_5)

{
    longlong *plVar1;
    undefined8 uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 local_44;
    undefined8 local_40;

    lVar5 = (*(longlong * )(param_1 + 0x40) - *(longlong * )(param_1 + 0x38)) / 0x130;
    local_40 = param_3;
    if ((int)lVar5 == 0) {
        iVar4 = 0;
        lVar5 = 0;
        uVar6 = param_4;
        if (0 < (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
            do {
                if (0 < lVar5) {
                    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1,local_40,uVar6);
                    uVar6 = param_4 & 0xff;
                }
                if (lVar5 < 0) {
                    lVar3 = 0;
                }
                else {
                    lVar3 = param_1;
                    if (

                            iVar4<(int)

                                    (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)) {
                        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x58) + lVar5 * 8);
                    }
                }
                FUN_140103e60(lVar3, param_2, local_40, uVar6, param_5
                );
                uVar6 = param_4 & 0xff;
                iVar4 = iVar4 + 1;
                lVar5 = lVar5 + 1;
            } while (

                    iVar4<(int)

                            (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
        }
    }
    else {
        local_44 = 0;
        plVar1 = (longlong * )
                FUN_140101260(0,param_5,param_1,lVar5,&local_44);
        if (plVar1 == (longlong *)0x0) {
            return 0x8007000d;
        }
        if ((*plVar1 != 0) && (
                uVar2 = FUN_140100010(plVar1, param_2, local_40),
                        (int)uVar2 < 0)) {
            return
                    uVar2;
        }
    }
    return 0;
}


undefined8 *FUN_140103fd0(undefined8 * param_1, undefined8
param_2,
                          short *param_3
)

{
    short sVar1;
    undefined2 *puVar2;
    longlong lVar3;

    lVar3 = 0;
    *
            param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] =
            param_2;
    *
            param_1 = &PTR_LAB_140b56c50;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[4] =
            puVar2;
    param_1[5] =
            puVar2;
    param_1[6] = puVar2 + 8;
    if (puVar2 != (undefined2 *)0x0) {
        *
                puVar2 = 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    sVar1 = *param_3;
    while (sVar1 != 0) {
        lVar3 = lVar3 + 1;
        sVar1 = param_3[lVar3];
    }
    FUN_14001c480(param_1
                  + 3,param_3,param_3 + lVar3);
    return
            param_1;
}


undefined8 *FUN_140104090(undefined8 * param_1, ulonglong
param_2)

{
    *
            param_1 = &PTR_LAB_140b56c50;

    FUN_140104100();

    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8],
                      0);
    }
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4],
                      0);
    }
    *
            param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,
                      0);
    }
    return
            param_1;
}


void FUN_140104100(longlong
                   param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar4 = *(longlong * *)(param_1 + 0x40);
    DAT_140c63660 = 1;
    if (plVar4 != *(longlong **)(param_1 + 0x48)) {
        do {
            puVar1 = (undefined8 * ) * plVar4;
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            plVar4 = plVar4 + 1;
        } while (plVar4 != *(longlong **)(param_1 + 0x48));
    }
    lVar2 = *(longlong * )(param_1 + 0x48);
    lVar3 = *(longlong * )(param_1 + 0x40);
    FUN_1407db590(lVar3, lVar2,
                  0);
    DAT_140c63660 = 0;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + (lVar2 - lVar3 >> 3) * -8;
    return;
}


longlong FUN_140104190(longlong
                       param_1,
                       longlong param_2
)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;

    if (param_2 == 0) {
        return 0;
    }
    plVar4 = *(longlong * *)(param_1 + 0x40);
    plVar1 = *(longlong * *)(param_1 + 0x48);
    while( true ) {
        if (plVar4 == plVar1) {
            return 0;
        }
        plVar2 = *(longlong * *)(*plVar4 + 0x28);
        plVar3 = (longlong * )
                FUN_14010a540(*(undefined8
                                *)(*plVar4 + 0x20),plVar2,param_2);
        if ((plVar3 != plVar2) && (*plVar3 != 0)) break;
        plVar4 = plVar4 + 1;
    }
    return *
            plVar3;
}


void FUN_140104210(longlong
                   param_1,
                   undefined8 param_2
)

{
    longlong **pplVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *local_res18[2];

    local_res18[0] = (longlong *)FUN_14018b280(0x38);
    if (local_res18[0] != (longlong *)0x0) {
        local_res18[0][1] =
                param_1;
        *(undefined4 *)(local_res18[0] + 2) = 0;
        *(undefined *)((longlong)local_res18[0] + 0x14) = 0;
        local_res18[0][4] = 0;
        local_res18[0][5] = 0;
        local_res18[0][6] = 0;
        *local_res18[0] = (longlong)&
                          PTR_FUN_140b56b90;
    }
    (**(code **)(*local_res18[0] + 0x28))(local_res18[0],param_2);
    (**(code **)(*local_res18[0] + 0x38))(local_res18[0]);
    if (((0 < (int)(local_res18[0][5] - local_res18[0][4] >> 3)) &&
         (
                 lVar4 = *(longlong * )
                         local_res18[0][4], lVar4 != 0)) &&
        (
                lVar4 = *(longlong * )(lVar4 + 0x40) - *(longlong * )(lVar4 + 0x38),
                iVar3 = (int) (lVar4 >> 0x3f), iVar2 = (int) (lVar4 / 0x130) + iVar3,
                        iVar2
                        != iVar3 && -1 < iVar2 - iVar3)) {
        pplVar1 = *(longlong * **)(param_1 + 0x48);
        if (pplVar1 == *(longlong ***)(param_1 + 0x50)) {
            FUN_1400b9430(param_1
                          + 0x38,pplVar1,local_res18);
            return;
        }
        if (pplVar1 != (longlong **)0x0) {
            *
                    pplVar1 = local_res18[0];
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
        return;
    }
// WARNING: Could not recover jumptable at 0x00014010431a. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)*local_res18[0])(local_res18[0],1);
    return;
}


void FUN_140104320(longlong
                   param_1,
                   undefined8 param_2
)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *local_res8;

    lVar2 = FUN_14018b280(0x88, 0);
    if (lVar2 == 0) {
        local_res8 = (longlong * )
                0x0;
    }
    else {
        local_res8 = (longlong * )
                FUN_140106f80(lVar2, param_1
                );
    }
    (**(code **)(*local_res8 + 0x28))(local_res8,param_2);
    (**(code **)(*local_res8 + 0x38))(local_res8);
    pplVar1 = *(longlong * **)(param_1 + 0x48);
    if (pplVar1 != *(longlong ***)(param_1 + 0x50)) {
        if (pplVar1 != (longlong **)0x0) {
            *
                    pplVar1 = local_res8;
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
        return;
    }
    FUN_1400b9430(param_1
                  + 0x38,pplVar1,&local_res8);
    return;
}


void FUN_1401043c0(longlong
                   param_1,
                   undefined8 param_2
)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *local_res8;

    lVar2 = FUN_14018b280(0x298, 0);
    if (lVar2 == 0) {
        local_res8 = (longlong * )
                0x0;
    }
    else {
        local_res8 = (longlong * )
                FUN_140107b70(lVar2, param_1
                );
    }
    (**(code **)(*local_res8 + 0x28))(local_res8,param_2);
    (**(code **)(*local_res8 + 0x38))(local_res8);
    pplVar1 = *(longlong * **)(param_1 + 0x48);
    if (pplVar1 != *(longlong ***)(param_1 + 0x50)) {
        if (pplVar1 != (longlong **)0x0) {
            *
                    pplVar1 = local_res8;
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
        return;
    }
    FUN_1400b9430(param_1
                  + 0x38,pplVar1,&local_res8);
    return;
}


void FUN_140104460(longlong
                   param_1,
                   undefined8 param_2
)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *local_res8;

    lVar2 = FUN_14018b280(0xb8, 0);
    if (lVar2 == 0) {
        local_res8 = (longlong * )
                0x0;
    }
    else {
        local_res8 = (longlong * )
                FUN_140104e80(lVar2, param_1
                );
    }
    (**(code **)(*local_res8 + 0x28))(local_res8,param_2);
    (**(code **)(*local_res8 + 0x38))(local_res8);
    pplVar1 = *(longlong * **)(param_1 + 0x48);
    if (pplVar1 != *(longlong ***)(param_1 + 0x50)) {
        if (pplVar1 != (longlong **)0x0) {
            *
                    pplVar1 = local_res8;
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
        return;
    }
    FUN_1400b9430(param_1
                  + 0x38,pplVar1,&local_res8);
    return;
}


void FUN_140104500(longlong
                   param_1,
                   undefined8 param_2
)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *local_res8;

    lVar2 = FUN_14018b280(0x80, 0);
    if (lVar2 == 0) {
        local_res8 = (longlong * )
                0x0;
    }
    else {
        local_res8 = (longlong * )
                FUN_140106650(lVar2, param_1
                );
    }
    (**(code **)(*local_res8 + 0x28))(local_res8,param_2);
    (**(code **)(*local_res8 + 0x38))(local_res8);
    pplVar1 = *(longlong * **)(param_1 + 0x48);
    if (pplVar1 != *(longlong ***)(param_1 + 0x50)) {
        if (pplVar1 != (longlong **)0x0) {
            *
                    pplVar1 = local_res8;
        }
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
        return;
    }
    FUN_1400b9430(param_1
                  + 0x38,pplVar1,&local_res8);
    return;
}
