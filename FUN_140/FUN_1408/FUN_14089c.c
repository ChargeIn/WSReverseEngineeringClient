//
// Created by flop on 05.04.22.
//


void FUN_1408c59d0(longlong param_1,undefined (*param_2) [16],uint param_3)

{
    float fVar1;
    float fVar2;
    undefined *puVar3;
    uint uVar4;
    uint uVar5;
    undefined (*pauVar6) [16];
    undefined (*pauVar7) [16];
    byte bVar8;
    float *pfVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float local_88;
    float local_78;
    float local_68;
    float local_58;

    if ((*(char *)(*(longlong *)(param_1 + 0x148) + 0x98) != '\0') &&
        (bVar8 = 0, *(char *)(param_1 + 0x128) != '\0')) {
        do {
            pfVar9 = (float *)((ulonglong)bVar8 * 0xc0 + *(longlong *)(param_1 + 0x138));
            if (pfVar9[0x2c] == 2.802597e-45) {
                pauVar6 = param_2;
                uVar5 = param_3;
                if (((ulonglong)param_2 & 0xf) != 0) {
                    uVar4 = 0x10 - ((uint)param_2 & 0xf) >> 2;
                    if (uVar4 < param_3) {
                        uVar5 = uVar4;
                    }
                    FUN_1408a8bf0(pfVar9,param_2,(ulonglong)uVar5,0);
                    pauVar6 = (undefined (*) [16])(*param_2 + (ulonglong)uVar5 * 4);
                    uVar5 = param_3 - uVar5;
                }
                fVar17 = pfVar9[0x28];
                local_78 = pfVar9[0x29];
                local_68 = pfVar9[0x2a];
                local_58 = pfVar9[0x2b];
                puVar3 = *pauVar6;
                local_88 = fVar17;
                if (pauVar6 < (undefined (*) [16])(puVar3 + (ulonglong)(uVar5 - (uVar5 & 3)) * 4)) {
                    do {
                        fVar1 = *(float *)*pauVar6;
                        fVar2 = *(float *)(*pauVar6 + 4);
                        local_88 = *(float *)(*pauVar6 + 0xc);
                        pauVar7 = pauVar6[1];
                        fVar13 = pfVar9[0x14] * local_78;
                        fVar14 = pfVar9[0x15] * local_78;
                        fVar15 = pfVar9[0x16] * local_78;
                        fVar16 = pfVar9[0x17] * local_78;
                        fVar10 = pfVar9[0x18] * local_68;
                        fVar11 = pfVar9[0x19] * local_68;
                        fVar12 = pfVar9[0x1a] * local_68;
                        local_78 = 0.0;
                        local_68 = local_58 * pfVar9[0x1f] + pfVar9[0x1b] * local_68 + pfVar9[7] * 0.0 +
                                   pfVar9[3] * local_88 + fVar16 + pfVar9[0x13] * fVar17 +
                                   fVar1 * pfVar9[0xf] + fVar2 * pfVar9[0xb];
                        *pauVar6 = CONCAT412(local_68,CONCAT48(local_58 * pfVar9[0x1e] + fVar12 +
                                                               pfVar9[6] * 0.0 +
                                                               pfVar9[2] * *(float *)(*pauVar6 + 8) +
                                                               fVar15 + pfVar9[0x12] * fVar17 +
                                                               fVar1 * pfVar9[0xe] + fVar2 * pfVar9[10],
                                                               CONCAT44(local_58 * pfVar9[0x1d] + fVar11 +
                                                                        pfVar9[5] * 0.0 +
                                                                        pfVar9[1] * fVar2 +
                                                                        fVar14 + pfVar9[0x11] * fVar17 +
                                                                        fVar1 * pfVar9[0xd] + fVar2 * pfVar9[9],
                                                                        local_58 * pfVar9[0x1c] + fVar10 +
                                                                        pfVar9[4] * 0.0 +
                                                                        *pfVar9 * fVar1 +
                                                                        fVar13 + pfVar9[0x10] * fVar17 +
                                                                        fVar1 * pfVar9[0xc] + fVar2 * pfVar9[8])
                        ));
                        local_58 = 0.0;
                        pauVar6 = pauVar7;
                        fVar17 = local_88;
                    } while (pauVar7 < (undefined (*) [16])(puVar3 + (ulonglong)(uVar5 - (uVar5 & 3)) * 4));
                    local_58 = 0.0;
                    local_78 = 0.0;
                }
                pfVar9[0x28] = local_88;
                pfVar9[0x29] = local_78;
                pfVar9[0x2a] = local_68;
                pfVar9[0x2b] = local_58;
                if ((uVar5 & 3) != 0) {
                    FUN_1408a8bf0();
                }
            }
            bVar8 = bVar8 + 1;
        } while (bVar8 < *(byte *)(param_1 + 0x128));
    }
    return;
}



undefined4 FUN_1408c5c90(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    byte bVar6;
    longlong *plVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    uint uVar11;
    float fVar12;
    undefined in_XMM9 [16];
    undefined in_XMM10 [16];
    uint local_res8;
    longlong local_res20;
    longlong local_d8 [19];

    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 8))
            (*(longlong **)(param_1 + 0x150),(ulonglong)(*(byte *)(param_1 + 300) + 4) << 10
            );
    if (lVar3 == 0) {
        return 0x34;
    }
    lVar1 = lVar3 + 0x400;
    local_d8[0] = lVar3 + 0x800;
    local_d8[1] = lVar3 + 0xc00;
    lVar10 = 0;
    local_res20 = 0;
    if (*(char *)(param_1 + 300) != '\0') {
        local_res20 = lVar3 + 0x1400;
        lVar10 = lVar3 + 0x1000;
    }
    fVar12 = *(float *)(param_1 + 0x164) * 0.005555556 * 0.292894 + 0.707106;
    fVar12 = 1.0 - fVar12 * fVar12;
    if (0.0 < fVar12) {
        sqrtps(in_XMM9,ZEXT416((uint)fVar12));
    }
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x148) + 0x14) * 0.005555556 * 0.292894 + 0.707106;
    fVar12 = 1.0 - fVar12 * fVar12;
    if (0.0 < fVar12) {
        sqrtps(in_XMM10 & (undefined  [16])0x0,ZEXT416((uint)fVar12));
    }
    local_res8 = 0;
    for (uVar4 = (uint)*(ushort *)((longlong)param_2 + 0x12); uVar4 != 0; uVar4 = uVar4 - uVar2) {
        uVar2 = 0x100;
        if (uVar4 < 0x100) {
            uVar2 = uVar4;
        }
        FUN_1408c5760(param_1,param_2,lVar3,uVar2,local_res8);
        if (*(int *)(param_1 + 200) == 0) {
            FUN_1407db590(lVar1,lVar3,uVar2 * 4);
        }
        else {
            FUN_1408cac30(param_1 + 200,lVar3,lVar1);
        }
        if (*(int *)(param_1 + 0xb0) != 0) {
            FUN_1408cab40((int *)(param_1 + 0xb0),lVar3,uVar2);
        }
        if (((*(char *)(param_1 + 300) != '\0') &&
             (FUN_1408ca160(*(undefined8 *)(param_1 + 0x140),lVar3,lVar10,local_res20,uVar2),
                     *(char *)(*(longlong *)(param_1 + 0x148) + 0x98) != '\0')) &&
            (bVar6 = 0, *(char *)(param_1 + 0x128) != '\0')) {
            do {
                lVar5 = (ulonglong)bVar6 * 0xc0 + *(longlong *)(param_1 + 0x138);
                if (*(int *)(lVar5 + 0xb0) == 1) {
                    FUN_1408a8970(lVar5,lVar10,uVar2);
                    FUN_1408a8970((longlong)(int)(bVar6 + 1) * 0xc0 + *(longlong *)(param_1 + 0x138),
                            local_res20);
                    bVar6 = bVar6 + 1;
                }
                bVar6 = bVar6 + 1;
            } while (bVar6 < *(byte *)(param_1 + 0x128));
        }
        lVar5 = param_1 + 8;
        lVar9 = 4;
        do {
            FUN_1408ca650(lVar5,lVar1,uVar2);
            lVar5 = lVar5 + 0x18;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        FUN_1408c59d0(param_1,lVar1,uVar2);
        FUN_1407e4830(lVar3 + 0x800,0,0x800);
        uVar11 = 0;
        if (*(int *)(param_1 + 0x120) != 0) {
            do {
                FUN_1408cab40(*(longlong *)(param_1 + 0x130) + 0x90 + (ulonglong)uVar11 * 0xa8,lVar1,uVar2);
                FUN_1408caef0(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar11 * 0xa8,lVar1);
                uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(param_1 + 0x120));
        }
        plVar7 = local_d8;
        lVar5 = param_1 + 0x68;
        lVar9 = 2;
        do {
            FUN_1408aae50(lVar5,*plVar7,uVar2);
            lVar5 = lVar5 + 0xc;
            plVar7 = plVar7 + 1;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar8 = 0;
        uVar11 = *(uint *)(param_2 + 1);
        if ((uVar11 & 1) != 0) {
            lVar5 = *param_2 + (ulonglong)local_res8 * 4;
            FUN_1408cbd10(lVar5,lVar3 + 0x800,lVar3 + 0xc00);
            if (*(char *)(param_1 + 300) != '\0') {
                FUN_1408cbd10(lVar5,lVar10,local_res20);
            }
            uVar8 = 1;
        }
        if ((uVar11 & 2) != 0) {
            lVar5 = *param_2 + (*(ushort *)(param_2 + 2) * uVar8 + (ulonglong)local_res8) * 4;
            FUN_1408cbd10(lVar5,lVar3 + 0x800,lVar3 + 0xc00);
            if (*(char *)(param_1 + 300) != '\0') {
                FUN_1408cbd10(lVar5,lVar10,local_res20);
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        }
        if ((uVar11 & 4) != 0) {
            lVar5 = *param_2 + (*(ushort *)(param_2 + 2) * uVar8 + (ulonglong)local_res8) * 4;
            FUN_1408cbd10(lVar5,lVar3 + 0x800,lVar3 + 0xc00);
            if (*(char *)(param_1 + 300) != '\0') {
                FUN_1408cbd10(lVar5,lVar10,local_res20);
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        }
        if ((uVar11 & 8) != 0) {
            FUN_1408cbd10(*param_2 + (*(ushort *)(param_2 + 2) * uVar8 + (ulonglong)local_res8) * 4,
                          lVar3 + 0x800,lVar3 + 0xc00);
        }
        lVar5 = *(longlong *)(param_1 + 0x148);
        *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar5 + 0x4c);
        *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x50);
        *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar5 + 0x54);
        local_res8 = local_res8 + uVar2;
        *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar5 + 0x48);
    }
    (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))(*(longlong **)(param_1 + 0x150),lVar3);
    return 1;
}



undefined4 FUN_1408c64e0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    byte bVar7;
    longlong lVar8;
    longlong *plVar9;
    byte bVar10;
    ulonglong uVar11;
    uint uVar12;
    float fVar13;
    undefined in_XMM9 [16];
    undefined in_XMM10 [16];
    uint local_res8;
    uint local_res20;
    longlong local_118;
    longlong local_110;
    ulonglong local_108;
    longlong local_e8 [21];

    uVar2 = *(uint *)(param_2 + 1);
    bVar10 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x99) != '\0') {
        bVar10 = -((uVar2 & 0x30) != 0) & 2;
    }
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 8))();
    if (lVar4 != 0) {
        uVar5 = 0;
        lVar1 = lVar4 + 0x400;
        local_e8[0] = lVar4 + 0x800;
        local_e8[1] = lVar4 + 0xc00;
        local_e8[2] = lVar4 + 0x1000;
        local_e8[3] = lVar4 + 0x1400;
        local_110 = 0;
        local_108 = 0;
        local_118 = 0;
        uVar11 = uVar5;
        if (*(char *)(param_1 + 300) != '\0') {
            local_110 = lVar4 + 0x1c00;
            uVar11 = lVar4 + 0x1800;
            if (bVar10 == 2) {
                local_108 = lVar4 + 0x2000;
                local_118 = lVar4 + 0x2400;
            }
        }
        fVar13 = *(float *)(param_1 + 0x164) * 0.005555556 * 0.292894 + 0.707106;
        fVar13 = 1.0 - fVar13 * fVar13;
        if (0.0 < fVar13) {
            sqrtps(in_XMM10,ZEXT416((uint)fVar13));
        }
        fVar13 = *(float *)(*(longlong *)(param_1 + 0x148) + 0x14) * 0.005555556 * 0.292894 + 0.707106;
        fVar13 = 1.0 - fVar13 * fVar13;
        if (0.0 < fVar13) {
            sqrtps(in_XMM9 & (undefined  [16])0x0,ZEXT416((uint)fVar13));
        }
        if ((uVar2 & 0x30) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x3c) = 0x3f800000;
            *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x40) = 0x3f800000;
        }
        local_res8 = 0;
        local_res20 = (uint)*(ushort *)((longlong)param_2 + 0x12);
        if (local_res20 != 0) {
            do {
                uVar3 = 0x100;
                if (local_res20 < 0x100) {
                    uVar3 = local_res20;
                }
                FUN_1408c5760(param_1,param_2,lVar4,uVar3,(int)uVar5);
                if (*(int *)(param_1 + 200) == 0) {
                    FUN_1407db590(lVar1,lVar4,uVar3 * 4);
                }
                else {
                    FUN_1408cac30(param_1 + 200,lVar4,lVar1);
                }
                if (*(int *)(param_1 + 0xb0) != 0) {
                    FUN_1408cab40((int *)(param_1 + 0xb0),lVar4,uVar3);
                }
                lVar8 = local_118;
                uVar5 = local_108;
                if (*(char *)(param_1 + 300) != '\0') {
                    FUN_1408ca160(*(undefined8 *)(param_1 + 0x140),lVar4,uVar11,local_110,uVar3);
                    if ((*(char *)(*(longlong *)(param_1 + 0x148) + 0x98) != '\0') &&
                        (bVar7 = 0, *(char *)(param_1 + 0x128) != '\0')) {
                        do {
                            lVar6 = (ulonglong)bVar7 * 0xc0 + *(longlong *)(param_1 + 0x138);
                            if (*(int *)(lVar6 + 0xb0) == 1) {
                                FUN_1408a8970(lVar6,uVar11,uVar3);
                                FUN_1408a8970((longlong)(int)(bVar7 + 1) * 0xc0 + *(longlong *)(param_1 + 0x138),
                                        local_110);
                                bVar7 = bVar7 + 1;
                            }
                            bVar7 = bVar7 + 1;
                        } while (bVar7 < *(byte *)(param_1 + 0x128));
                    }
                    if ((bVar10 == 2) && (lVar8 = local_110, uVar5 = uVar11, *(int *)(param_1 + 0xe0) != 0)) {
                        FUN_1408cac30((int *)(param_1 + 0xe0),uVar11,local_108);
                        FUN_1408cac30(param_1 + 0xf8,local_110,local_118);
                        lVar8 = local_118;
                        uVar5 = local_108;
                    }
                }
                local_108 = uVar5;
                local_118 = lVar8;
                lVar8 = param_1 + 8;
                lVar6 = 4;
                do {
                    FUN_1408ca650(lVar8,lVar1,uVar3);
                    lVar8 = lVar8 + 0x18;
                    lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
                FUN_1408c59d0(param_1,lVar1,uVar3);
                FUN_1407e4830(lVar4 + 0x800,0,0x1000);
                uVar12 = 0;
                if (*(int *)(param_1 + 0x120) != 0) {
                    do {
                        FUN_1408cab40(*(longlong *)(param_1 + 0x130) + 0x90 + (ulonglong)uVar12 * 0xa8,lVar1,
                                      uVar3);
                        FUN_1408cb140(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar12 * 0xa8,lVar1,
                                      local_e8[uVar12 & 1],local_e8[(uVar12 & 1) + 2],uVar3);
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(uint *)(param_1 + 0x120));
                }
                plVar9 = local_e8;
                lVar8 = param_1 + 0x68;
                lVar6 = 4;
                do {
                    FUN_1408aae50(lVar8,*plVar9,uVar3);
                    lVar8 = lVar8 + 0xc;
                    plVar9 = plVar9 + 1;
                    lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
                uVar12 = 0;
                if ((uVar2 & 1) != 0) {
                    lVar8 = *param_2 + (ulonglong)local_res8 * 4;
                    FUN_1408cbd10(lVar8,lVar4 + 0x800,lVar4 + 0xc00);
                    if (*(char *)(param_1 + 300) != '\0') {
                        FUN_1408cbd10(lVar8,uVar11,local_110);
                    }
                    uVar12 = 1;
                }
                if ((uVar2 & 2) != 0) {
                    lVar8 = *param_2 +
                            ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar12 + (ulonglong)local_res8)
                            * 4;
                    FUN_1408cbd10(lVar8,lVar4 + 0x800,lVar4 + 0xc00);
                    if (*(char *)(param_1 + 300) != '\0') {
                        FUN_1408cbd10(lVar8,uVar11,local_110);
                    }
                    uVar12 = uVar12 + 1;
                }
                if ((uVar2 & 4) != 0) {
                    FUN_1408cbd10(*param_2 +
                                  ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar12 +
                                   (ulonglong)local_res8) * 4,lVar4 + 0x1000,lVar4 + 0x1400);
                    uVar12 = uVar12 + 1;
                }
                if ((uVar2 & 0x10) != 0) {
                    lVar8 = *param_2 +
                            ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar12 + (ulonglong)local_res8)
                            * 4;
                    FUN_1408cbd10(lVar8,lVar4 + 0x1000,lVar4 + 0x1400);
                    if (*(char *)(param_1 + 300) != '\0') {
                        FUN_1408cbd10(lVar8,local_108,local_118);
                    }
                    uVar12 = uVar12 + 1;
                }
                if ((uVar2 & 0x20) != 0) {
                    lVar8 = *param_2 +
                            ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar12 + (ulonglong)local_res8)
                            * 4;
                    FUN_1408cbd10(lVar8,lVar4 + 0x1000,lVar4 + 0x1400);
                    if (*(char *)(param_1 + 300) != '\0') {
                        FUN_1408cbd10(lVar8,local_108,local_118);
                    }
                    uVar12 = uVar12 + 1;
                }
                if ((uVar2 & 8) != 0) {
                    FUN_1408cbd10(*param_2 +
                                  ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar12 +
                                   (ulonglong)local_res8) * 4,lVar4 + 0x1000,lVar4 + 0x1400);
                }
                lVar8 = *(longlong *)(param_1 + 0x148);
                *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar8 + 0x4c);
                *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar8 + 0x50);
                *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar8 + 0x54);
                *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(lVar8 + 0x3c);
                *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar8 + 0x44);
                *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar8 + 0x40);
                local_res8 = local_res8 + uVar3;
                uVar5 = (ulonglong)local_res8;
                *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar8 + 0x48);
                local_res20 = local_res20 - uVar3;
            } while (local_res20 != 0);
        }
        (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))(*(longlong **)(param_1 + 0x150),lVar4);
        return 1;
    }
    return 0x34;
}



undefined4 FUN_1408c70b0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    byte bVar6;
    ulonglong *puVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    float fVar12;
    undefined in_XMM9 [16];
    undefined in_XMM10 [16];
    uint local_res8;
    uint local_res18;
    ulonglong in_stack_fffffffffffffeb8;
    longlong local_110;
    longlong local_108;
    longlong local_100;
    ulonglong local_f8 [4];
    longlong local_d8;
    longlong local_d0;

    uVar2 = *(uint *)(param_2 + 1);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x150) + 8))();
    if (lVar4 != 0) {
        lVar1 = lVar4 + 0x400;
        local_f8[0] = lVar4 + 0x800;
        local_f8[1] = lVar4 + 0xc00;
        local_f8[2] = lVar4 + 0x1000;
        local_f8[3] = lVar4 + 0x1400;
        lVar9 = 0;
        local_d8 = lVar4 + 0x1800;
        local_100 = 0;
        local_d0 = lVar4 + 0x1c00;
        local_108 = 0;
        local_110 = 0;
        if (*(char *)(param_1 + 300) != '\0') {
            local_100 = lVar4 + 0x2400;
            local_108 = lVar4 + 0x2800;
            local_110 = lVar4 + 0x2c00;
            lVar9 = lVar4 + 0x2000;
        }
        fVar12 = *(float *)(param_1 + 0x164) * 0.005555556 * 0.292894 + 0.707106;
        fVar12 = 1.0 - fVar12 * fVar12;
        if (0.0 < fVar12) {
            sqrtps(in_XMM10,ZEXT416((uint)fVar12));
        }
        fVar12 = *(float *)(*(longlong *)(param_1 + 0x148) + 0x14) * 0.005555556 * 0.292894 + 0.707106;
        fVar12 = 1.0 - fVar12 * fVar12;
        if (0.0 < fVar12) {
            sqrtps(in_XMM9 & (undefined  [16])0x0,ZEXT416((uint)fVar12));
        }
        local_res8 = 0;
        local_res18 = (uint)*(ushort *)((longlong)param_2 + 0x12);
        if (local_res18 != 0) {
            do {
                in_stack_fffffffffffffeb8 =
                        in_stack_fffffffffffffeb8 & 0xffffffff00000000 | (ulonglong)local_res8;
                uVar3 = 0x100;
                if (local_res18 < 0x100) {
                    uVar3 = local_res18;
                }
                FUN_1408c5760(param_1,param_2,lVar4,uVar3,in_stack_fffffffffffffeb8);
                if (*(int *)(param_1 + 200) == 0) {
                    FUN_1407db590(lVar1,lVar4,uVar3 * 4);
                }
                else {
                    FUN_1408cac30(param_1 + 200,lVar4,lVar1);
                }
                if (*(int *)(param_1 + 0xb0) != 0) {
                    FUN_1408cab40(param_1 + 0xb0,lVar4,uVar3);
                }
                lVar5 = local_110;
                lVar8 = local_108;
                if (*(char *)(param_1 + 300) != '\0') {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408ca160(*(undefined8 *)(param_1 + 0x140),lVar4,lVar9);
                    if ((*(char *)(*(longlong *)(param_1 + 0x148) + 0x98) != '\0') &&
                        (bVar6 = 0, *(char *)(param_1 + 0x128) != '\0')) {
                        do {
                            lVar5 = (ulonglong)bVar6 * 0xc0 + *(longlong *)(param_1 + 0x138);
                            if (*(int *)(lVar5 + 0xb0) == 1) {
                                FUN_1408a8970(lVar5,lVar9,uVar3);
                                FUN_1408a8970((longlong)(int)(bVar6 + 1) * 0xc0 + *(longlong *)(param_1 + 0x138),
                                        local_100);
                                bVar6 = bVar6 + 1;
                            }
                            bVar6 = bVar6 + 1;
                        } while (bVar6 < *(byte *)(param_1 + 0x128));
                    }
                    lVar5 = local_100;
                    lVar8 = lVar9;
                    if (*(int *)(param_1 + 0xe0) != 0) {
                        FUN_1408cac30((int *)(param_1 + 0xe0),lVar9,local_108);
                        FUN_1408cac30(param_1 + 0xf8,local_100,local_110);
                        lVar5 = local_110;
                        lVar8 = local_108;
                    }
                }
                local_108 = lVar8;
                local_110 = lVar5;
                lVar5 = param_1 + 8;
                lVar8 = 4;
                do {
                    FUN_1408ca650(lVar5,lVar1,uVar3);
                    lVar5 = lVar5 + 0x18;
                    lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
                FUN_1408c59d0(param_1,lVar1,uVar3);
                FUN_1407e4830(lVar4 + 0x800,0,0x1800);
                uVar10 = 0;
                if (*(int *)(param_1 + 0x120) != 0) {
                    do {
                        FUN_1408cab40(*(longlong *)(param_1 + 0x130) + 0x90 + (ulonglong)uVar10 * 0xa8,lVar1,
                                      uVar3);
                        in_stack_fffffffffffffeb8 = local_f8[(uVar10 & 1) + 4];
                        FUN_1408cb3c0(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar10 * 0xa8,lVar1);
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < *(uint *)(param_1 + 0x120));
                }
                puVar7 = local_f8;
                lVar5 = param_1 + 0x68;
                lVar8 = 6;
                do {
                    FUN_1408aae50(lVar5,*puVar7,uVar3);
                    lVar5 = lVar5 + 0xc;
                    puVar7 = puVar7 + 1;
                    lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
                uVar11 = (ulonglong)local_res8;
                lVar5 = *param_2 + uVar11 * 4;
                in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                FUN_1408cbd10(lVar5,lVar4 + 0x800,lVar4 + 0xc00);
                if (*(char *)(param_1 + 300) != '\0') {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(lVar5,lVar9,local_100);
                }
                lVar5 = *param_2 + (*(ushort *)(param_2 + 2) + uVar11) * 4;
                in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                FUN_1408cbd10(lVar5,lVar4 + 0x800,lVar4 + 0xc00);
                if (*(char *)(param_1 + 300) != '\0') {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(lVar5,lVar9,local_100);
                }
                lVar5 = 2;
                if ((uVar2 & 4) != 0) {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(*param_2 + (uVar11 + (ulonglong)*(ushort *)(param_2 + 2) * 2) * 4,
                                  lVar4 + 0x1000,lVar4 + 0x1400);
                    lVar5 = 3;
                }
                lVar8 = *param_2 + ((ulonglong)*(ushort *)(param_2 + 2) * lVar5 + uVar11) * 4;
                in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                FUN_1408cbd10(lVar8,lVar4 + 0x1800,lVar4 + 0x1c00);
                if (*(char *)(param_1 + 300) != '\0') {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(lVar8,local_108,local_110);
                }
                lVar8 = *param_2 +
                        ((ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)((int)lVar5 + 1) + uVar11) * 4;
                in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                FUN_1408cbd10(lVar8,lVar4 + 0x1800,lVar4 + 0x1c00);
                if (*(char *)(param_1 + 300) != '\0') {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(lVar8,local_108,local_110);
                }
                if ((uVar2 & 8) != 0) {
                    in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
                    FUN_1408cbd10(*param_2 +
                                  ((ulonglong)((int)lVar5 + 2) * (ulonglong)*(ushort *)(param_2 + 2) + uVar11)
                                  * 4,lVar4 + 0x1000,lVar4 + 0x1400);
                }
                lVar5 = *(longlong *)(param_1 + 0x148);
                *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar5 + 0x4c);
                *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x50);
                *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(lVar5 + 0x54);
                *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(lVar5 + 0x3c);
                *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(lVar5 + 0x44);
                *(undefined4 *)(param_1 + 400) = *(undefined4 *)(lVar5 + 0x40);
                *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(lVar5 + 0x48);
                local_res8 = local_res8 + uVar3;
                local_res18 = local_res18 - uVar3;
            } while (local_res18 != 0);
        }
        (**(code **)(**(longlong **)(param_1 + 0x150) + 0x10))(*(longlong **)(param_1 + 0x150),lVar4);
        return 1;
    }
    return 0x34;
}



void FUN_1408c7bf0(float param_1,float param_2,undefined8 param_3,undefined8 param_4,uint param_5_00
        ,float *param_6,longlong param_5)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    float *pfVar7;
    uint uVar8;
    ulonglong uVar9;
    uint uVar10;
    longlong lVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    uVar10 = 0;
    uVar1 = 0x6b4cc7;
    lVar11 = 0;
    fVar13 = (param_6[1] - *param_6) * 0.01 * param_1 + *param_6;
    fVar14 = ((param_6[4] - param_6[3]) * 0.01 * param_2 + param_6[3]) * fVar13;
    fVar13 = (fVar13 - fVar14) + fVar13;
    if (3 < (int)param_5_00) {
        uVar8 = 2;
        fVar15 = fVar13 - fVar14;
        lVar11 = (ulonglong)((param_5_00 - 4 >> 2) + 1) << 2;
        fVar16 = 1.0 / (float)(ulonglong)(param_5_00 - 1);
        pfVar7 = (float *)(param_5 + 8);
        do {
            uVar9 = (ulonglong)uVar8;
            uVar4 = (ulonglong)uVar10;
            uVar5 = uVar8 - 1;
            uVar10 = uVar10 + 4;
            uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
            uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
            uVar3 = uVar2 * 0xbb38435 + 0x3619636b;
            fVar12 = (float)uVar4 * fVar15 * fVar16 + fVar14;
            pfVar7[-2] = param_6[2] * 0.01 * fVar12 * (float)(ulonglong)uVar1 * 2.328306e-10 + fVar12;
            uVar6 = uVar8 + 1;
            uVar8 = uVar8 + 4;
            fVar12 = (float)(ulonglong)uVar5 * fVar15 * fVar16 + fVar14;
            pfVar7[-1] = param_6[2] * 0.01 * fVar12 * (float)(ulonglong)uVar2 * 2.328306e-10 + fVar12;
            uVar1 = uVar3 * 0xbb38435 + 0x3619636b;
            fVar12 = (float)uVar9 * fVar15 * fVar16 + fVar14;
            *pfVar7 = param_6[2] * 0.01 * fVar12 * (float)(ulonglong)uVar3 * 2.328306e-10 + fVar12;
            fVar12 = (float)(ulonglong)uVar6 * fVar15 * fVar16 + fVar14;
            pfVar7[1] = param_6[2] * 0.01 * fVar12 * (float)(ulonglong)uVar1 * 2.328306e-10 + fVar12;
            pfVar7 = pfVar7 + 4;
        } while (uVar10 < param_5_00 - 3);
    }
    if (uVar10 < param_5_00) {
        pfVar7 = (float *)(param_5 + lVar11 * 4);
        do {
            uVar4 = (ulonglong)uVar10;
            uVar10 = uVar10 + 1;
            uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
            fVar15 = (float)uVar4 * (fVar13 - fVar14) * (1.0 / (float)(ulonglong)(param_5_00 - 1)) +
                     fVar14;
            *pfVar7 = param_6[2] * 0.01 * fVar15 * (float)(ulonglong)uVar1 * 2.328306e-10 + fVar15;
            pfVar7 = pfVar7 + 1;
        } while (uVar10 < param_5_00);
    }
    FUN_1408ff070(param_5,param_5_00,4,&LAB_1408c7bc0);
    return;
}



void FUN_1408c7ee0(uint param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    float *pfVar6;
    longlong lVar7;
    uint uVar8;
    float fVar9;
    float fVar10;

    lVar7 = 0;
    uVar8 = 0;
    uVar3 = 0x1bc0f99;
    if (3 < (int)param_1) {
        uVar4 = (param_1 - 4 >> 2) + 1;
        uVar5 = (ulonglong)uVar4;
        uVar8 = uVar4 * 4;
        lVar7 = (ulonglong)uVar4 * 4;
        fVar10 = 1.0 / (float)(ulonglong)param_1;
        pfVar6 = (float *)(param_3 + 8);
        do {
            fVar9 = fVar10 * *(float *)(param_2 + 0x24);
            uVar4 = uVar3 * 0xbb38435 + 0x3619636b;
            uVar1 = uVar4 * 0xbb38435 + 0x3619636b;
            uVar2 = uVar1 * 0xbb38435 + 0x3619636b;
            uVar3 = uVar2 * 0xbb38435 + 0x3619636b;
            pfVar6[-2] = *(float *)(param_2 + 0x28) * 0.01 * fVar9 *
                         (float)(ulonglong)uVar4 * 2.328306e-10 + fVar9;
            fVar9 = fVar10 * *(float *)(param_2 + 0x24);
            pfVar6[-1] = *(float *)(param_2 + 0x28) * 0.01 * fVar9 *
                         (float)(ulonglong)uVar1 * 2.328306e-10 + fVar9;
            fVar9 = fVar10 * *(float *)(param_2 + 0x24);
            *pfVar6 = *(float *)(param_2 + 0x28) * 0.01 * fVar9 * (float)(ulonglong)uVar2 * 2.328306e-10 +
                      fVar9;
            fVar9 = fVar10 * *(float *)(param_2 + 0x24);
            pfVar6[1] = *(float *)(param_2 + 0x28) * 0.01 * fVar9 * (float)(ulonglong)uVar3 * 2.328306e-10
                        + fVar9;
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
    }
    if (uVar8 < param_1) {
        uVar5 = (ulonglong)(param_1 - uVar8);
        pfVar6 = (float *)(param_3 + lVar7 * 4);
        do {
            fVar10 = (1.0 / (float)(ulonglong)param_1) * *(float *)(param_2 + 0x24);
            uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
            *pfVar6 = *(float *)(param_2 + 0x28) * 0.01 * fVar10 * (float)(ulonglong)uVar3 * 2.328306e-10
                      + fVar10;
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 1;
        } while (uVar5 != 0);
    }
    return;
}



void FUN_1408c80e0(uint param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    float *pfVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint uVar7;
    float fVar8;
    float fVar9;

    fVar9 = *(float *)(param_2 + 0x18);
    lVar5 = 0;
    uVar7 = 0;
    uVar1 = 0x2ee007;
    if (3 < (int)param_1) {
        uVar3 = (param_1 - 4 >> 2) + 1;
        uVar6 = (ulonglong)uVar3;
        uVar7 = uVar3 * 4;
        lVar5 = (ulonglong)uVar3 * 4;
        pfVar4 = (float *)(param_3 + 8);
        do {
            uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
            fVar8 = fVar9 * *(float *)(param_2 + 0x14) * 0.01;
            uVar3 = uVar1 * 0xbb38435 + 0x3619636b;
            uVar2 = uVar3 * 0xbb38435 + 0x3619636b;
            pfVar4[-2] = *(float *)(param_2 + 0x1c) * 0.01 * fVar9 *
                         (float)(ulonglong)uVar1 * 2.328306e-10 + fVar9;
            fVar9 = fVar8 * *(float *)(param_2 + 0x14) * 0.01;
            uVar1 = uVar2 * 0xbb38435 + 0x3619636b;
            pfVar4[-1] = *(float *)(param_2 + 0x1c) * 0.01 * fVar8 *
                         (float)(ulonglong)uVar3 * 2.328306e-10 + fVar8;
            fVar8 = fVar9 * *(float *)(param_2 + 0x14) * 0.01;
            *pfVar4 = *(float *)(param_2 + 0x1c) * 0.01 * fVar9 * (float)(ulonglong)uVar2 * 2.328306e-10 +
                      fVar9;
            fVar9 = fVar8 * *(float *)(param_2 + 0x14) * 0.01;
            pfVar4[1] = *(float *)(param_2 + 0x1c) * 0.01 * fVar8 * (float)(ulonglong)uVar1 * 2.328306e-10
                        + fVar8;
            uVar6 = uVar6 - 1;
            pfVar4 = pfVar4 + 4;
        } while (uVar6 != 0);
    }
    if (uVar7 < param_1) {
        uVar6 = (ulonglong)(param_1 - uVar7);
        pfVar4 = (float *)(param_3 + lVar5 * 4);
        do {
            fVar8 = *(float *)(param_2 + 0x14);
            uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
            *pfVar4 = *(float *)(param_2 + 0x1c) * 0.01 * fVar9 * (float)(ulonglong)uVar1 * 2.328306e-10 +
                      fVar9;
            uVar6 = uVar6 - 1;
            pfVar4 = pfVar4 + 1;
            fVar9 = fVar9 * fVar8 * 0.01;
        } while (uVar6 != 0);
    }
    FUN_1408ff070(param_3,param_1,4,&LAB_1408c7bc0);
    return;
}



void FUN_1408c8350(longlong param_1,ulonglong param_2,uint param_3,uint *param_4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;
    int iVar6;
    uint *puVar7;
    undefined in_XMM1 [16];

    if (param_3 != 0) {
        uVar5 = 0;
        puVar7 = param_4;
        do {
            uVar4 = (ulonglong)
                    (*(float *)((param_1 - (longlong)param_4) + (longlong)puVar7) * 0.001 *
                     (float)(param_2 & 0xffffffff));
            uVar3 = (uint)uVar4;
            *puVar7 = uVar3;
            if (uVar5 == 0) {
                if ((uVar4 & 1) == 0) {
                    *puVar7 = uVar3 + 1;
                }
                in_XMM1 = sqrtpd(in_XMM1,ZEXT816((ulonglong)(double)(ulonglong)*puVar7));
                iVar6 = (int)SUB168(in_XMM1,0) + 1;
                while( true ) {
                    uVar4 = 3;
                    if (3 < iVar6) {
                        uVar3 = *puVar7;
                        do {
                            if ((int)((ulonglong)uVar3 % uVar4) == 0) goto LAB_1408c83fb;
                            uVar1 = (int)uVar4 + 2;
                            uVar4 = (ulonglong)uVar1;
                        } while ((int)uVar1 < iVar6);
                    }
                    uVar3 = *puVar7;
                    if (uVar3 != 0) break;
                    LAB_1408c83fb:
                    *puVar7 = uVar3 + 2;
                }
            }
            else {
                uVar1 = param_4[uVar5 - 1];
                if ((uVar4 & 1) == 0) {
                    *puVar7 = uVar3 + 1;
                }
                in_XMM1 = sqrtpd(in_XMM1,ZEXT816((ulonglong)(double)(ulonglong)*puVar7));
                iVar6 = (int)SUB168(in_XMM1,0) + 1;
                while( true ) {
                    uVar4 = 3;
                    if (3 < iVar6) {
                        uVar3 = *puVar7;
                        do {
                            if ((int)((ulonglong)uVar3 % uVar4) == 0) goto LAB_1408c845b;
                            uVar2 = (int)uVar4 + 2;
                            uVar4 = (ulonglong)uVar2;
                        } while ((int)uVar2 < iVar6);
                    }
                    uVar3 = *puVar7;
                    if (uVar3 != uVar1) break;
                    LAB_1408c845b:
                    *puVar7 = uVar3 + 2;
                }
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
        } while (uVar5 < param_3);
    }
    return;
}



undefined4 * FUN_1408c8490(undefined4 *param_1)

{
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[0xc] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x12] = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    param_1[0x2a] = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    param_1[0x2e] = 0;
    param_1[0x30] = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    param_1[0x34] = 0;
    param_1[0x36] = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    param_1[0x3a] = 0;
    param_1[0x3c] = 0;
    *(undefined8 *)(param_1 + 0x3e) = 0;
    param_1[0x40] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0xffffffff;
    return param_1;
}



void FUN_1408c8580(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_2 + 0x120) != 0) {
        do {
            param_1 = FUN_1408cb660(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x148) + 8),
                                    *(undefined4 *)(*(longlong *)(param_2 + 0x148) + 0xc),
                                    (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_2 + 0x130),param_3,
                                    param_4,*(undefined4 *)(param_2 + 0x124));
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 0x120));
    }
    return;
}



void FUN_1408c85f0(longlong param_1)

{
    longlong lVar1;
    float fVar2;

    lVar1 = *(longlong *)(param_1 + 0x148);
    fVar2 = *(float *)(lVar1 + 0x10) * 0.01 * 0.61803 * 4.0 - 1.85409;
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    else if (0.61803 <= fVar2) {
        fVar2 = 0.61803;
    }
    *(float *)(param_1 + 0x1c) = fVar2;
    fVar2 = *(float *)(lVar1 + 0x10) * 0.01 * 0.61803 * 4.0 - 1.23606;
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    else if (0.61803 <= fVar2) {
        fVar2 = 0.61803;
    }
    *(float *)(param_1 + 0x34) = fVar2;
    fVar2 = *(float *)(lVar1 + 0x10) * 0.01 * 0.61803 * 4.0 - 0.61803;
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    else if (0.61803 <= fVar2) {
        fVar2 = 0.61803;
    }
    *(float *)(param_1 + 0x4c) = fVar2;
    fVar2 = *(float *)(lVar1 + 0x10) * 0.01 * 0.61803 * 4.0;
    if (0.0 < fVar2) {
        if (0.61803 <= fVar2) {
            *(undefined4 *)(param_1 + 100) = 0x3f1e3737;
            return;
        }
        *(float *)(param_1 + 100) = fVar2;
        return;
    }
    *(undefined4 *)(param_1 + 100) = 0;
    return;
}



void FUN_1408c86d0(longlong param_1,undefined8 param_2)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 *puVar4;
    undefined local_68 [16];
    undefined4 local_58 [20];

    FUN_1408c80e0(4,*(longlong *)(param_1 + 0x148) + 0x9c,local_68);
    FUN_1408c8350(local_68,*(undefined4 *)(param_1 + 0x124),4,local_58);
    uVar3 = 0;
    puVar4 = local_58;
    do {
        iVar1 = FUN_1408ca560(param_1 + (uVar3 * 3 + 1) * 8,param_2,*puVar4);
        if (iVar1 != 1) {
            return;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        puVar4 = puVar4 + 1;
    } while (uVar2 < 4);
    return;
}



undefined8 FUN_1408c8800(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    float fVar4;
    float fVar5;

    if (*(char *)(param_1 + 300) != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x148);
        fVar4 = (float)FUN_1408fbfc0(0x40000000,*(float *)(lVar1 + 100) * 0.01);
        uVar2 = (ulonglong)*(uint *)(lVar1 + 0x5c);
        fVar5 = fVar4 * *(float *)(&PTR_DAT_1409b0c80)[uVar2 * 5];
        if (fVar4 * *(float *)(&PTR_DAT_1409b0c90)[uVar2 * 5] <=
            fVar4 * *(float *)(&PTR_DAT_1409b0c80)[uVar2 * 5]) {
            fVar5 = fVar4 * *(float *)(&PTR_DAT_1409b0c90)[uVar2 * 5];
        }
        uVar2 = (ulonglong)((float)(ulonglong)*(uint *)(param_1 + 0x124) * fVar5 * 0.001);
        if ((int)uVar2 != 0) {
            uVar3 = FUN_1408caa70(param_1 + 0xb0,param_2,uVar2 & 0xffffffff);
            return uVar3;
        }
    }
    return 1;
}



undefined8 FUN_1408c88d0(longlong param_1,undefined8 param_2,uint param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;

    if ((*(char *)(param_1 + 300) != '\0') &&
        (uVar2 = (ulonglong)
                (*(float *)(*(longlong *)(param_1 + 0x148) + 0x68) * 0.001 *
                 (float)(ulonglong)*(uint *)(param_1 + 0x124)), (int)uVar2 != 0)) {
        if (((param_3 & 0x10) != 0) &&
            (uVar1 = FUN_1408caa70(param_1 + 0xe0,param_2,uVar2 & 0xffffffff), (int)uVar1 != 1)) {
            return uVar1;
        }
        if (((param_3 & 0x20) != 0) &&
            (uVar1 = FUN_1408caa70(param_1 + 0xf8,param_2,uVar2 & 0xffffffff), (int)uVar1 != 1)) {
            return uVar1;
        }
    }
    return 1;
}



undefined4 FUN_1408c8980(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    undefined8 extraout_XMM0_Qa;
    undefined8 uVar3;

    uVar1 = 1;
    if (*(char *)(param_3 + 300) != '\0') {
        puVar2 = (undefined4 *)(**(code **)(*param_4 + 8))(param_4,800);
        uVar3 = extraout_XMM0_Qa;
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            *(undefined8 *)(puVar2 + 2) = 0;
            puVar2[4] = 0;
            *(undefined8 *)(puVar2 + 0xc5) = 0;
            FUN_1407e4830(puVar2 + 5,0,0x100);
            FUN_1407e4830(puVar2 + 0x45,0,0x100);
            FUN_1407e4830(puVar2 + 0x85,0,0x80);
            uVar3 = FUN_1407e4830(puVar2 + 0xa5,0,0x80);
        }
        *(undefined4 **)(param_3 + 0x140) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
            uVar1 = 0x34;
        }
        else {
            uVar1 = FUN_1408c9e00(uVar3,param_2,*(undefined4 *)(*(longlong *)(param_3 + 0x148) + 100),
                                  puVar2,param_4);
        }
    }
    return uVar1;
}



undefined8 FUN_1408c8ab0(longlong param_1,longlong *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined8 uVar4;
    uint uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined in_XMM1 [16];
    undefined auVar15 [16];
    undefined *puVar16;
    float local_398 [16];
    undefined4 auStack856 [16];
    undefined4 local_318 [64];
    undefined local_218 [256];
    undefined4 local_118 [64];

    lVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 0x120) * 0xa8);
    *(longlong *)(param_1 + 0x130) = lVar2;
    if (lVar2 == 0) {
        return 0x34;
    }
    uVar8 = 0;
    uVar7 = uVar8;
    if (*(int *)(param_1 + 0x120) != 0) {
        do {
            puVar3 = (undefined4 *)(uVar7 * 0xa8 + *(longlong *)(param_1 + 0x130));
            if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = 0;
                *(undefined8 *)(puVar3 + 2) = 0;
                puVar3[4] = 0;
                puVar3[6] = 0;
                *(undefined8 *)(puVar3 + 8) = 0;
                puVar3[10] = 0;
                puVar3[0xc] = 0;
                *(undefined8 *)(puVar3 + 0xe) = 0;
                puVar3[0x10] = 0;
                puVar3[0x12] = 0;
                *(undefined8 *)(puVar3 + 0x14) = 0;
                puVar3[0x16] = 0;
                *(undefined8 *)(puVar3 + 0x18) = 0;
                *(undefined8 *)(puVar3 + 0x1a) = 0;
                *(undefined8 *)(puVar3 + 0x1c) = 0;
                *(undefined8 *)(puVar3 + 0x1e) = 0;
                *(undefined8 *)(puVar3 + 0x20) = 0;
                *(undefined8 *)(puVar3 + 0x22) = 0;
                puVar3[0x24] = 0;
                *(undefined8 *)(puVar3 + 0x26) = 0;
                puVar3[0x28] = 0;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(param_1 + 0x120));
    }
    *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
    if (1 < *(uint *)(param_1 + 0x120)) {
        auVar15 = sqrtps(in_XMM1,ZEXT416((uint)(float)(ulonglong)*(uint *)(param_1 + 0x120)));
        *(float *)(param_1 + 0x11c) = 1.0 / SUB164(auVar15,0);
    }
    puVar16 = local_218;
    FUN_1408c7bf0(*(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x6c));
    FUN_1408c8350(local_218,*(undefined4 *)(param_1 + 0x124),*(int *)(param_1 + 0x120) << 2,local_318,
                  puVar16);
    uVar5 = *(uint *)(param_1 + 0x120);
    uVar7 = (ulonglong)uVar5;
    if (uVar5 != 0) {
        uVar10 = uVar5 * 3;
        uVar12 = uVar5 * 2;
        puVar3 = local_318;
        puVar6 = local_118 + 2;
        uVar9 = uVar7;
        uVar14 = uVar7;
        do {
            uVar13 = (ulonglong)uVar12;
            uVar11 = (ulonglong)uVar10;
            uVar1 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar6[-2] = uVar1;
            puVar6[-1] = local_318[uVar14];
            uVar12 = uVar12 + 1;
            *puVar6 = local_318[uVar13];
            uVar10 = uVar10 + 1;
            puVar6[1] = local_318[uVar11];
            uVar9 = uVar9 - 1;
            puVar6 = puVar6 + 4;
            uVar14 = (ulonglong)((int)uVar14 + 1);
        } while (uVar9 != 0);
    }
    FUN_1408c7ee0(uVar7,*(longlong *)(param_1 + 0x148) + 0x9c,local_398);
    if (uVar5 != 0) {
        uVar10 = *(uint *)(param_1 + 0x124);
        uVar9 = uVar8;
        do {
            *(int *)((longlong)auStack856 + uVar9) =
                    (int)(longlong)
                            (*(float *)((longlong)local_398 + uVar9) * 0.001 * (float)(ulonglong)uVar10);
            uVar7 = uVar7 - 1;
            uVar9 = uVar9 + 4;
        } while (uVar7 != 0);
    }
    uVar7 = uVar8;
    if (uVar5 != 0) {
        do {
            uVar4 = FUN_1408cad10(*(longlong *)(param_1 + 0x130) + uVar8 * 0xa8,param_2,local_118 + uVar7)
                    ;
            if ((int)uVar4 != 1) {
                return uVar4;
            }
            uVar4 = FUN_1408caa70(*(longlong *)(param_1 + 0x130) + 0x90 + uVar8 * 0xa8,param_2,
                                  auStack856[uVar8]);
            if ((int)uVar4 != 1) {
                return uVar4;
            }
            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar5;
            uVar7 = (ulonglong)((int)uVar7 + 4);
        } while (uVar5 < *(uint *)(param_1 + 0x120));
    }
    return 1;
}



undefined8 FUN_1408c8dc0(longlong param_1,undefined8 param_2)

{
    ulonglong uVar1;
    undefined8 uVar2;

    uVar1 = (ulonglong)
            (*(float *)(*(longlong *)(param_1 + 0x148) + 0x60) * 0.001 *
             (float)(ulonglong)*(uint *)(param_1 + 0x124));
    if ((int)uVar1 != 0) {
        uVar2 = FUN_1408caa70(param_1 + 200,param_2,uVar1 & 0xffffffff);
        return uVar2;
    }
    return 1;
}



undefined8 FUN_1408c8e10(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 extraout_XMM0_Qa;
    undefined8 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;

    lVar5 = 0;
    uVar4 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x98) != '\0') {
        *(undefined *)(param_1 + 0x129) = 0;
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x80);
        if (iVar1 == 1) {
            uVar4 = (uint)*(byte *)(param_1 + 300);
        }
        else {
            uVar4 = 0;
            if (iVar1 - 2U < 2) {
                uVar4 = 1;
            }
        }
        *(char *)(param_1 + 0x12a) = (char)uVar4;
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x88);
        if (iVar1 == 1) {
            uVar4 = uVar4 + *(byte *)(param_1 + 300);
        }
        else if (iVar1 - 2U < 2) {
            uVar4 = uVar4 + 1;
        }
        *(char *)(param_1 + 299) = (char)uVar4;
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x90);
        if (iVar1 == 1) {
            uVar4 = uVar4 + *(byte *)(param_1 + 300);
        }
        else if (iVar1 - 2U < 2) {
            uVar4 = uVar4 + 1;
        }
    }
    *(char *)(param_1 + 0x128) = (char)uVar4;
    if (uVar4 != 0) {
        uVar3 = (ulonglong)uVar4;
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 8))
                (*(longlong **)(param_1 + 0x150),uVar3 * 0xc0);
        *(longlong *)(param_1 + 0x138) = lVar2;
        if (lVar2 == 0) {
            return 0x34;
        }
        if (uVar4 != 0) {
            uVar8 = 0x3f800000;
            uVar7 = 0;
            uVar6 = extraout_XMM0_Qa;
            do {
                lVar2 = *(longlong *)(param_1 + 0x138) + lVar5;
                if (lVar2 != 0) {
                    *(undefined8 *)(lVar2 + 0xa0) = 0;
                    *(undefined8 *)(lVar2 + 0xa8) = 0;
                    uVar6 = FUN_1408a8e90(uVar6,uVar8,uVar7,uVar7);
                }
                lVar5 = lVar5 + 0xc0;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }
    FUN_1408c4920(param_1);
    FUN_1408c4a80(param_1);
    FUN_1408c4be0(param_1);
    return 1;
}



void FUN_1408c8fa0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,200);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1570;
        return;
    }
    return;
}



undefined8 * FUN_1408c91c0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,200);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1570;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)((longlong)puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(param_1 + 0x58);
        *(undefined *)(puVar1 + 0xb) = 1;
        *(undefined4 *)((longlong)puVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
        *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)((longlong)puVar1 + 100) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)((longlong)puVar1 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)((longlong)puVar1 + 0x74) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)((longlong)puVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(puVar1 + 0x10) = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)((longlong)puVar1 + 0x84) = *(undefined4 *)(param_1 + 0x84);
        *(undefined4 *)(puVar1 + 0x11) = *(undefined4 *)(param_1 + 0x88);
        *(undefined4 *)((longlong)puVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
        *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(param_1 + 0x90);
        *(undefined4 *)((longlong)puVar1 + 0x94) = *(undefined4 *)(param_1 + 0x94);
        *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(param_1 + 0x98);
        *(undefined *)((longlong)puVar1 + 0x9a) = 1;
        *(undefined4 *)((longlong)puVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
        *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
        *(undefined4 *)((longlong)puVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(puVar1 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)((longlong)puVar1 + 0xac) = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(puVar1 + 0x16) = *(undefined4 *)(param_1 + 0xb0);
        *(undefined4 *)((longlong)puVar1 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(puVar1 + 0x17) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)((longlong)puVar1 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
        *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)((longlong)puVar1 + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408c9200(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    if (param_4 == 0) {
        uVar6 = 0x41200000;
        *(undefined4 *)(param_1 + 1) = 0x3f99999a;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x40100000;
        *(undefined4 *)(param_1 + 2) = 0x42c80000;
        *(undefined8 *)((longlong)param_1 + 0x14) = 0x43340000;
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0x42c80000;
        param_1[4] = 0x3f800000;
        *(undefined4 *)(param_1 + 5) = 0x447a0000;
        *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x34) = 0x461c4000;
        *(undefined4 *)(param_1 + 7) = 0x3f800000;
        uVar2 = FUN_1408fbfc0(0x41200000,0);
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
        *(undefined4 *)(param_1 + 8) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
        uVar3 = FUN_1408fbfc0(uVar6,0xc099999a);
        *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
        *(undefined4 *)(param_1 + 9) = uVar3;
        uVar4 = FUN_1408fbfc0(uVar6,0xbf800000);
        *(undefined4 *)(param_1 + 10) = uVar4;
        uVar5 = FUN_1408fbfc0(uVar6,0xbf933333);
        uVar6 = DAT_140c13224;
        uVar4 = DAT_140c13210;
        *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
        *(undefined4 *)(param_1 + 0xf) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
        *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
        *(undefined4 *)(param_1 + 0x14) = DAT_140c13214;
        uVar4 = DAT_140c13218;
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0x17;
        *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
        uVar4 = DAT_140c1321c;
        param_1[0xc] = 0x41c80000;
        *(undefined4 *)(param_1 + 0x15) = uVar4;
        uVar4 = DAT_140c13220;
        *(undefined4 *)(param_1 + 0xd) = 0x42200000;
        *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
        *(undefined4 *)(param_1 + 0x16) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0xb4) = DAT_140c13228;
        uVar4 = DAT_140c1322c;
        *(undefined2 *)(param_1 + 0x13) = 0x100;
        *(undefined4 *)(param_1 + 0x17) = uVar4;
        uVar4 = DAT_140c13230;
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42a00000;
        *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
        uVar4 = DAT_140c13234;
        *(undefined4 *)(param_1 + 0xe) = 0x42c80000;
        *(undefined4 *)(param_1 + 0x18) = uVar4;
        uVar4 = DAT_140c13238;
        *(undefined4 *)((longlong)param_1 + 0x74) = 8;
        param_1[0x10] = 3;
        *(undefined4 *)(param_1 + 0x11) = 3;
        *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
        *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
        *(undefined4 *)(param_1 + 0x12) = 3;
        *(undefined4 *)((longlong)param_1 + 0x94) = 2;
        *(undefined *)(param_1 + 0xb) = 1;
        *(undefined *)((longlong)param_1 + 0x9a) = 1;
        return 1;
    }
    // WARNING: Could not recover jumptable at 0x0001408c9413. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
    return uVar1;
}



undefined8 FUN_1408c9420(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408c9460(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    float fVar3;

    uVar2 = 0x41200000;
    *(undefined4 *)(param_1 + 8) = *param_2;
    fVar3 = 0.05;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    *(undefined4 *)(param_1 + 0x14) = param_2[3];
    *(undefined4 *)(param_1 + 0x18) = param_2[4];
    *(undefined4 *)(param_1 + 0x1c) = param_2[5];
    *(undefined4 *)(param_1 + 0x20) = param_2[6];
    *(undefined4 *)(param_1 + 0x24) = param_2[7];
    *(undefined4 *)(param_1 + 0x28) = param_2[8];
    *(undefined4 *)(param_1 + 0x2c) = param_2[9];
    *(undefined4 *)(param_1 + 0x30) = param_2[10];
    *(undefined4 *)(param_1 + 0x34) = param_2[0xb];
    *(undefined4 *)(param_1 + 0x38) = param_2[0xc];
    uVar1 = FUN_1408fbfc0(0x41200000,(float)param_2[0xd] * 0.05);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0xe] * fVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0xf] * fVar3);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0x10] * fVar3);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0x11] * fVar3);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0x12] * fVar3);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,((float)param_2[0x13] - 3.0) * fVar3);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined *)(param_1 + 0x99) = *(undefined *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x51);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x55);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x59);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x5d);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x61);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x65);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x69);
    *(undefined *)(param_1 + 0x98) = *(undefined *)((longlong)param_2 + 0x6d);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x6e);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x72);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x76);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x7a);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x7e);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x82);
    uVar1 = FUN_1408fbfc0(uVar2,*(float *)((longlong)param_2 + 0x86) * fVar3);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,*(float *)((longlong)param_2 + 0x8a) * fVar3);
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x8e);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0x92);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x96);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0x9a);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x9e);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xa2);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xa6);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xaa);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xae);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 0xb2);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xb6);
    *(undefined *)(param_1 + 0x58) = 1;
    *(undefined *)(param_1 + 0x9a) = 1;
    return 1;
}



undefined4 FUN_1408c9740(longlong param_1,undefined2 param_2,float *param_3)

{
    char cVar1;
    float fVar2;
    undefined4 uVar3;

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    switch(param_2) {
        case 0:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x5c) = fVar2;
            return 1;
        case 1:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x60) = fVar2;
            return 1;
        case 2:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 100) = fVar2;
            return 1;
        case 3:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x68) = fVar2;
            return 1;
        case 4:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(bool *)(param_1 + 0x99) = cVar1 != '\0';
            return 1;
        case 10:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 8) = fVar2;
            return 1;
        case 0xb:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0xc) = fVar2;
            return 1;
        case 0xc:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x6c) = fVar2;
            return 1;
        case 0xd:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x70) = fVar2;
            return 1;
        case 0xe:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x74) = fVar2;
            return 1;
        case 0xf:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x10) = fVar2;
            return 1;
        case 0x10:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x14) = fVar2;
            return 1;
        case 0x14:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(bool *)(param_1 + 0x98) = cVar1 != '\0';
            return 1;
        case 0x15:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x80) = fVar2;
            return 1;
        case 0x16:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x84) = fVar2;
            return 1;
        case 0x17:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x18) = fVar2;
            return 1;
        case 0x18:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x1c) = fVar2;
            return 1;
        case 0x19:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x20) = fVar2;
            return 1;
        case 0x1a:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x88) = fVar2;
            return 1;
        case 0x1b:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x8c) = fVar2;
            return 1;
        case 0x1c:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x24) = fVar2;
            return 1;
        case 0x1d:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x28) = fVar2;
            return 1;
        case 0x1e:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x2c) = fVar2;
            return 1;
        case 0x1f:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x90) = fVar2;
            return 1;
        case 0x20:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x9a) = 1;
            *(float *)(param_1 + 0x94) = fVar2;
            return 1;
        case 0x21:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x30) = fVar2;
            return 1;
        case 0x22:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x34) = fVar2;
            return 1;
        case 0x23:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x58) = 1;
            *(float *)(param_1 + 0x38) = fVar2;
            return 1;
        case 0x28:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x9a) = 1;
            *(undefined4 *)(param_1 + 0x78) = uVar3;
            return 1;
        case 0x29:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x9a) = 1;
            *(undefined4 *)(param_1 + 0x7c) = uVar3;
            return 1;
        case 0x32:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x3c) = uVar3;
            return 1;
        case 0x33:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x40) = uVar3;
            return 1;
        case 0x34:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x44) = uVar3;
            return 1;
        case 0x35:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x48) = uVar3;
            return 1;
        case 0x3c:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x4c) = uVar3;
            return 1;
        case 0x3d:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x50) = uVar3;
            return 1;
        case 0x3e:
            uVar3 = FUN_1408fbfc0(0x41200000,(*param_3 - 3.0) * 0.05);
            *(undefined *)(param_1 + 0x58) = 1;
            *(undefined4 *)(param_1 + 0x54) = uVar3;
            return 1;
        case 100:
            *(float *)(param_1 + 0x9c) = *param_3;
            return 1;
        case 0x65:
            *(float *)(param_1 + 0xa0) = *param_3;
            return 1;
        case 0x66:
            *(float *)(param_1 + 0xa4) = *param_3;
            return 1;
        case 0x67:
            *(float *)(param_1 + 0xa8) = *param_3;
            return 1;
        case 0x68:
            *(float *)(param_1 + 0xac) = *param_3;
            return 1;
        case 0x69:
            *(float *)(param_1 + 0xb0) = *param_3;
            return 1;
        case 0x6a:
            *(float *)(param_1 + 0xb4) = *param_3;
            return 1;
        case 0x6b:
            *(float *)(param_1 + 0xb8) = *param_3;
            return 1;
        case 0x6c:
            *(float *)(param_1 + 0xbc) = *param_3;
            return 1;
        case 0x6d:
            *(float *)(param_1 + 0xc0) = *param_3;
            return 1;
        case 0x6e:
            *(float *)(param_1 + 0xc4) = *param_3;
    }
    return 1;
}



undefined8
FUN_1408c9e00(undefined8 param_1,undefined8 param_2,float param_3,uint *param_4,longlong *param_5_00
        ,undefined8 param_6_00,float *param_7_00,float *param_5,uint param_6,uint param_7,
              uint param_8)

{
    ushort uVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 uVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ushort uVar10;
    ushort uVar11;
    ushort uVar12;
    ushort uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;

    if ((param_6 - 1 < 0x40) && (param_7 - 1 < 0x40)) {
        fVar14 = (float)FUN_1408fbfc0(0x40000000,param_3 * 0.01);
        fVar16 = *param_7_00;
        if (*param_5 <= *param_7_00) {
            fVar16 = *param_5;
        }
        fVar16 = fVar16 * fVar14;
        fVar15 = param_7_00[(ulonglong)(param_6 - 1) * 2];
        if (param_7_00[(ulonglong)(param_6 - 1) * 2] <= param_5[(ulonglong)(param_7 - 1) * 2]) {
            fVar15 = param_5[(ulonglong)(param_7 - 1) * 2];
        }
        fVar18 = 0.001;
        fVar17 = (float)(ulonglong)param_8;
        uVar6 = (uint)(longlong)((fVar15 * fVar14 - fVar16) * 0.001 * fVar17);
        if (uVar6 < 4) {
            uVar6 = 4;
        }
        else if (0xffff < uVar6) {
            return 2;
        }
        *param_4 = uVar6 & 0xfffc;
        lVar3 = (**(code **)(*param_5_00 + 8))(param_5_00);
        *(longlong *)(param_4 + 2) = lVar3;
        if (lVar3 == 0) {
            uVar4 = 0x34;
        }
        else {
            uVar9 = 0xffffffff;
            uVar11 = 0;
            *(undefined2 *)(param_4 + 0xc5) = 0;
            uVar10 = uVar11;
            uVar13 = uVar11;
            uVar12 = uVar11;
            uVar6 = 0xffffffff;
            if (param_6 != 0) {
                do {
                    uVar2 = *param_4;
                    uVar5 = (uint)(longlong)
                                    ((fVar14 * param_7_00[(ulonglong)uVar12 * 2] - fVar16) * fVar18 * fVar17) &
                            0xfffffffc;
                    if (uVar2 <= uVar5) {
                        uVar5 = uVar2 - 4;
                    }
                    if (uVar5 != uVar6) {
                        uVar7 = (ulonglong)uVar10;
                        *(short *)((longlong)param_4 + uVar7 * 2 + 0x214) = (short)uVar2 - (short)uVar5;
                        if (uVar5 == 0) {
                            *(undefined2 *)((longlong)param_4 + uVar7 * 2 + 0x214) = 0;
                        }
                        param_4[uVar7 + 5] = (uint)param_7_00[(ulonglong)uVar12 * 2 + 1];
                        uVar1 = *(ushort *)((longlong)param_4 + uVar7 * 2 + 0x214);
                        if (uVar13 < uVar1) {
                            *(ushort *)(param_4 + 0xc5) = uVar10;
                            uVar13 = uVar1;
                        }
                        uVar10 = uVar10 + 1;
                    }
                    uVar12 = uVar12 + 1;
                    uVar6 = uVar5;
                } while (uVar12 < param_6);
            }
            *(ushort *)(param_4 + 0xc6) = uVar10;
            uVar10 = 0;
            *(undefined2 *)((longlong)param_4 + 0x316) = 0;
            uVar7 = 0;
            if (param_7 != 0) {
                do {
                    uVar5 = *param_4;
                    uVar6 = (uint)(longlong)((fVar14 * param_5[uVar7 * 2] - fVar16) * fVar18 * fVar17) &
                            0xfffffffc;
                    if (uVar5 <= uVar6) {
                        uVar6 = uVar5 - 4;
                    }
                    if (uVar6 != uVar9) {
                        uVar8 = (ulonglong)uVar11;
                        *(short *)((longlong)param_4 + uVar8 * 2 + 0x294) = (short)uVar5 - (short)uVar6;
                        if (uVar6 == 0) {
                            *(undefined2 *)((longlong)param_4 + uVar8 * 2 + 0x294) = 0;
                        }
                        param_4[uVar8 + 0x45] = (uint)param_5[uVar7 * 2 + 1];
                        uVar13 = *(ushort *)((longlong)param_4 + uVar8 * 2 + 0x294);
                        if (uVar10 < uVar13) {
                            *(ushort *)((longlong)param_4 + 0x316) = uVar11;
                            uVar10 = uVar13;
                        }
                        uVar11 = uVar11 + 1;
                    }
                    uVar13 = (short)uVar7 + 1;
                    uVar7 = (ulonglong)uVar13;
                    uVar9 = uVar6;
                } while (uVar13 < param_7);
            }
            param_4[4] = 0;
            *(ushort *)((longlong)param_4 + 0x31a) = uVar11;
            uVar4 = 1;
        }
    }
    else {
        uVar4 = 2;
    }
    return uVar4;
}



void FUN_1408ca0f0(undefined4 *param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 2) = 0;
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



void FUN_1408ca130(uint *param_1)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 2),0,(ulonglong)*param_1 << 2);
        return;
    }
    return;
}



void FUN_1408ca160(uint *param_1,undefined4 *param_2,undefined (*param_3) [16],
                   undefined (*param_4) [16],uint param_5)

{
    undefined4 *puVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    ushort uVar11;
    longlong lVar12;
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
    float fVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    uint uVar32;
    uint uVar33;
    ulonglong uVar34;
    ushort uVar35;
    uint uVar36;
    float *pfVar37;
    ulonglong uVar38;
    uint *puVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    undefined (*local_res18) [16];
    undefined (*local_res20) [16];

    lVar12 = *(longlong *)(param_1 + 2);
    uVar35 = *(ushort *)((longlong)param_1 + 0x31a);
    if (*(ushort *)(param_1 + 0xc6) < *(ushort *)((longlong)param_1 + 0x31a)) {
        uVar35 = *(ushort *)(param_1 + 0xc6);
    }
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_5 != 0) {
        do {
            uVar32 = *param_1;
            uVar33 = uVar32 - *(ushort *)
                    ((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 0xc5) * 2 + 0x214);
            uVar36 = uVar32 - *(ushort *)
                    ((longlong)param_1 +
                     (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294);
            if (uVar33 < uVar36) {
                uVar36 = uVar33;
            }
            if (uVar32 - param_1[4] < uVar36) {
                uVar36 = uVar32 - param_1[4];
            }
            if (param_5 < uVar36) {
                uVar36 = param_5;
            }
            if (3 < uVar36) {
                uVar34 = (ulonglong)(uVar36 >> 2);
                do {
                    uVar32 = 0;
                    uVar33 = param_1[4];
                    uVar28 = *param_2;
                    uVar29 = param_2[1];
                    uVar30 = param_2[2];
                    uVar31 = param_2[3];
                    param_2 = param_2 + 4;
                    fVar44 = 0.0;
                    fVar45 = 0.0;
                    fVar46 = 0.0;
                    fVar47 = 0.0;
                    fVar40 = 0.0;
                    fVar41 = 0.0;
                    fVar42 = 0.0;
                    fVar43 = 0.0;
                    puVar1 = (undefined4 *)(lVar12 + (ulonglong)uVar33 * 4);
                    *puVar1 = uVar28;
                    puVar1[1] = uVar29;
                    puVar1[2] = uVar30;
                    puVar1[3] = uVar31;
                    param_1[4] = uVar33 + 4;
                    if ((uVar35 & 0xfffc) != 0) {
                        uVar32 = ((uVar35 & 0xfffffffc) - 1 >> 2) + 1;
                        uVar38 = (ulonglong)uVar32;
                        uVar32 = uVar32 * 4;
                        pfVar37 = (float *)(param_1 + 7);
                        puVar39 = param_1 + 0x86;
                        do {
                            fVar6 = pfVar37[-2];
                            pfVar2 = (float *)(lVar12 + (ulonglong)*(ushort *)(puVar39 + -1) * 4);
                            fVar7 = pfVar37[-1];
                            pfVar3 = (float *)(lVar12 + (ulonglong)*(ushort *)((longlong)puVar39 + -2) * 4);
                            fVar8 = *pfVar37;
                            pfVar4 = (float *)(lVar12 + (ulonglong)*(ushort *)puVar39 * 4);
                            fVar9 = pfVar37[1];
                            pfVar5 = (float *)(lVar12 + (ulonglong)*(ushort *)((longlong)puVar39 + 2) * 4);
                            fVar10 = pfVar37[0x3e];
                            fVar44 = fVar44 + *pfVar2 * fVar6 + *pfVar3 * fVar7 + *pfVar4 * fVar8 +
                                     *pfVar5 * fVar9;
                            fVar45 = fVar45 + pfVar2[1] * fVar6 + pfVar3[1] * fVar7 + pfVar4[1] * fVar8 +
                                     pfVar5[1] * fVar9;
                            fVar46 = fVar46 + pfVar2[2] * fVar6 + pfVar3[2] * fVar7 + pfVar4[2] * fVar8 +
                                     pfVar5[2] * fVar9;
                            fVar47 = fVar47 + pfVar2[3] * fVar6 + pfVar3[3] * fVar7 + pfVar4[3] * fVar8 +
                                     pfVar5[3] * fVar9;
                            pfVar2 = (float *)(lVar12 + (ulonglong)*(ushort *)(puVar39 + 0x1f) * 4);
                            fVar9 = *pfVar2;
                            fVar13 = pfVar2[1];
                            fVar14 = pfVar2[2];
                            fVar15 = pfVar2[3];
                            fVar6 = pfVar37[0x3f];
                            pfVar2 = (float *)(lVar12 + (ulonglong)*(ushort *)((longlong)puVar39 + 0x7e) * 4);
                            fVar16 = *pfVar2;
                            fVar17 = pfVar2[1];
                            fVar18 = pfVar2[2];
                            fVar19 = pfVar2[3];
                            fVar7 = pfVar37[0x40];
                            pfVar2 = (float *)(lVar12 + (ulonglong)*(ushort *)(puVar39 + 0x20) * 4);
                            fVar20 = *pfVar2;
                            fVar21 = pfVar2[1];
                            fVar22 = pfVar2[2];
                            fVar23 = pfVar2[3];
                            fVar8 = pfVar37[0x41];
                            *(ushort *)(puVar39 + -1) = *(ushort *)(puVar39 + -1) + 4;
                            *(ushort *)((longlong)puVar39 + -2) = *(ushort *)((longlong)puVar39 + -2) + 4;
                            *(ushort *)puVar39 = *(ushort *)puVar39 + 4;
                            *(ushort *)((longlong)puVar39 + 2) = *(ushort *)((longlong)puVar39 + 2) + 4;
                            *(ushort *)(puVar39 + 0x1f) = *(ushort *)(puVar39 + 0x1f) + 4;
                            *(ushort *)((longlong)puVar39 + 0x7e) = *(ushort *)((longlong)puVar39 + 0x7e) + 4;
                            pfVar2 = (float *)(lVar12 + (ulonglong)*(ushort *)((longlong)puVar39 + 0x82) * 4);
                            fVar24 = *pfVar2;
                            fVar25 = pfVar2[1];
                            fVar26 = pfVar2[2];
                            fVar27 = pfVar2[3];
                            *(ushort *)(puVar39 + 0x20) = *(ushort *)(puVar39 + 0x20) + 4;
                            fVar40 = fVar40 + fVar9 * fVar10 + fVar16 * fVar6 + fVar20 * fVar7 + fVar24 * fVar8;
                            fVar41 = fVar41 + fVar13 * fVar10 + fVar17 * fVar6 + fVar21 * fVar7 + fVar25 * fVar8;
                            fVar42 = fVar42 + fVar14 * fVar10 + fVar18 * fVar6 + fVar22 * fVar7 + fVar26 * fVar8;
                            fVar43 = fVar43 + fVar15 * fVar10 + fVar19 * fVar6 + fVar23 * fVar7 + fVar27 * fVar8;
                            *(ushort *)((longlong)puVar39 + 0x82) = *(ushort *)((longlong)puVar39 + 0x82) + 4;
                            uVar38 = uVar38 - 1;
                            param_3 = local_res18;
                            param_4 = local_res20;
                            pfVar37 = pfVar37 + 4;
                            puVar39 = puVar39 + 2;
                        } while (uVar38 != 0);
                    }
                    uVar33 = uVar32;
                    if (uVar32 < *(ushort *)(param_1 + 0xc6)) {
                        do {
                            uVar38 = (ulonglong)uVar33;
                            uVar33 = uVar33 + 1;
                            uVar11 = *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x214);
                            fVar6 = (float)param_1[uVar38 + 5];
                            pfVar37 = (float *)(lVar12 + (ulonglong)uVar11 * 4);
                            fVar7 = *pfVar37;
                            fVar8 = pfVar37[1];
                            fVar9 = pfVar37[2];
                            fVar10 = pfVar37[3];
                            *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x214) = uVar11 + 4;
                            fVar44 = fVar44 + fVar7 * fVar6;
                            fVar45 = fVar45 + fVar8 * fVar6;
                            fVar46 = fVar46 + fVar9 * fVar6;
                            fVar47 = fVar47 + fVar10 * fVar6;
                        } while (uVar33 < *(ushort *)(param_1 + 0xc6));
                    }
                    if (uVar32 < *(ushort *)((longlong)param_1 + 0x31a)) {
                        do {
                            uVar38 = (ulonglong)uVar32;
                            uVar32 = uVar32 + 1;
                            uVar11 = *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x294);
                            fVar6 = (float)param_1[uVar38 + 0x45];
                            pfVar37 = (float *)(lVar12 + (ulonglong)uVar11 * 4);
                            fVar7 = *pfVar37;
                            fVar8 = pfVar37[1];
                            fVar9 = pfVar37[2];
                            fVar10 = pfVar37[3];
                            *(ushort *)((longlong)param_1 + uVar38 * 2 + 0x294) = uVar11 + 4;
                            fVar40 = fVar40 + fVar7 * fVar6;
                            fVar41 = fVar41 + fVar8 * fVar6;
                            fVar42 = fVar42 + fVar9 * fVar6;
                            fVar43 = fVar43 + fVar10 * fVar6;
                        } while (uVar32 < *(ushort *)((longlong)param_1 + 0x31a));
                    }
                    *param_3 = CONCAT412(fVar47,CONCAT48(fVar46,CONCAT44(fVar45,fVar44)));
                    param_3 = param_3[1];
                    *param_4 = CONCAT412(fVar43,CONCAT48(fVar42,CONCAT44(fVar41,fVar40)));
                    param_4 = param_4[1];
                    uVar34 = uVar34 - 1;
                    local_res18 = param_3;
                    local_res20 = param_4;
                } while (uVar34 != 0);
            }
            if ((uint)*(ushort *)((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 0xc5) * 2 + 0x214)
                == *param_1) {
                *(undefined2 *)((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 0xc5) * 2 + 0x214) = 0;
                *(short *)(param_1 + 0xc5) =
                        (short)((ulonglong)(ushort)(*(short *)(param_1 + 0xc5) + 1) %
                                (ulonglong)(longlong)(int)(uint)*(ushort *)(param_1 + 0xc6));
            }
            if ((uint)*(ushort *)
                    ((longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294)
                == *param_1) {
                *(undefined2 *)
                        ((longlong)param_1 + (ulonglong)*(ushort *)((longlong)param_1 + 0x316) * 2 + 0x294) = 0;
                *(short *)((longlong)param_1 + 0x316) =
                        (short)((ulonglong)(ushort)(*(short *)((longlong)param_1 + 0x316) + 1) %
                                (ulonglong)(longlong)(int)(uint)*(ushort *)((longlong)param_1 + 0x31a));
            }
            if (param_1[4] == *param_1) {
                param_1[4] = 0;
            }
            param_5 = param_5 - uVar36;
        } while (param_5 != 0);
    }
    return;
}



undefined8 FUN_1408ca560(undefined4 *param_1,longlong *param_2,uint param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined4 in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar2 = (ulonglong)param_3;
    if (param_3 == 0) {
        uVar2 = 1;
    }
    *param_1 = (int)uVar2;
    lVar1 = (**(code **)(*param_2 + 8))
            (param_2,uVar2 << 3,uVar2,param_2,
             CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    param_1[5] = in_XMM3_Da;
    param_1[4] = 0;
    return 1;
}



void FUN_1408ca5e0(undefined4 *param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 2) = 0;
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



void FUN_1408ca620(uint *param_1)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 2),0,(ulonglong)*param_1 << 3);
        return;
    }
    return;
}



void FUN_1408ca650(int *param_1,float *param_2,uint param_3)

{
    float fVar1;
    float fVar2;
    int iVar3;
    float *pfVar4;
    uint uVar5;
    ulonglong uVar6;
    float *pfVar7;
    uint uVar8;
    float *pfVar9;
    float *pfVar10;
    int iVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    iVar11 = param_1[4];
    iVar3 = *param_1;
    pfVar4 = *(float **)(param_1 + 2);
    uVar8 = iVar3 - iVar11;
    pfVar10 = pfVar4 + (uint)(iVar11 * 2);
    if (uVar8 <= param_3) {
        do {
            uVar5 = 0;
            if (param_3 < uVar8) {
                uVar8 = param_3;
            }
            if (3 < (int)uVar8) {
                fVar1 = (float)param_1[5];
                uVar5 = (uVar8 - 4 >> 2) + 1;
                uVar6 = (ulonglong)uVar5;
                uVar5 = uVar5 * 4;
                pfVar7 = param_2;
                pfVar9 = pfVar10;
                do {
                    fVar13 = *pfVar9;
                    fVar12 = *pfVar7;
                    fVar14 = pfVar7[1];
                    pfVar10 = pfVar9 + 8;
                    param_2 = pfVar7 + 4;
                    *pfVar9 = fVar12;
                    fVar13 = (fVar12 - pfVar9[1]) * fVar1 + fVar13;
                    pfVar9[1] = fVar13;
                    fVar12 = pfVar9[2];
                    pfVar9[2] = fVar14;
                    fVar2 = pfVar9[3];
                    *pfVar7 = fVar13;
                    fVar13 = pfVar7[2];
                    fVar12 = (fVar14 - fVar2) * fVar1 + fVar12;
                    pfVar9[3] = fVar12;
                    fVar14 = pfVar9[4];
                    pfVar9[4] = fVar13;
                    fVar2 = pfVar9[5];
                    pfVar7[1] = fVar12;
                    fVar12 = pfVar7[3];
                    fVar14 = (fVar13 - fVar2) * fVar1 + fVar14;
                    pfVar9[5] = fVar14;
                    fVar13 = pfVar9[6];
                    pfVar9[6] = fVar12;
                    fVar2 = pfVar9[7];
                    pfVar7[2] = fVar14;
                    fVar13 = (fVar12 - fVar2) * fVar1 + fVar13;
                    pfVar9[7] = fVar13;
                    pfVar7[3] = fVar13;
                    uVar6 = uVar6 - 1;
                    pfVar7 = param_2;
                    pfVar9 = pfVar10;
                } while (uVar6 != 0);
            }
            if (uVar5 < uVar8) {
                fVar1 = (float)param_1[5];
                uVar6 = (ulonglong)(uVar8 - uVar5);
                pfVar7 = param_2;
                pfVar9 = pfVar10;
                do {
                    fVar13 = *pfVar7;
                    fVar12 = *pfVar9;
                    pfVar10 = pfVar9 + 2;
                    param_2 = pfVar7 + 1;
                    *pfVar9 = fVar13;
                    fVar12 = (fVar13 - pfVar9[1]) * fVar1 + fVar12;
                    pfVar9[1] = fVar12;
                    *pfVar7 = fVar12;
                    uVar6 = uVar6 - 1;
                    pfVar7 = param_2;
                    pfVar9 = pfVar10;
                } while (uVar6 != 0);
            }
            iVar11 = iVar11 + uVar8;
            param_1[4] = iVar11;
            if (iVar11 == iVar3) {
                iVar11 = 0;
                param_1[4] = 0;
                pfVar10 = pfVar4;
            }
            param_3 = param_3 - uVar8;
            uVar8 = iVar3 - iVar11;
        } while (param_3 != 0);
        return;
    }
    if (param_3 != 0) {
        fVar1 = (float)param_1[5];
        uVar8 = param_3;
        do {
            fVar13 = *param_2;
            fVar12 = *pfVar10;
            *pfVar10 = fVar13;
            fVar12 = (fVar13 - pfVar10[1]) * fVar1 + fVar12;
            pfVar10[1] = fVar12;
            *param_2 = fVar12;
            uVar8 = uVar8 - 1;
            param_2 = param_2 + 1;
            pfVar10 = pfVar10 + 2;
        } while (uVar8 != 0);
    }
    param_1[4] = iVar11 + param_3;
    return;
}



void FUN_1408ca850(int *param_1,float *param_2,float *param_3,uint param_4)

{
    float fVar1;
    float fVar2;
    int iVar3;
    float *pfVar4;
    uint uVar5;
    ulonglong uVar6;
    float *pfVar7;
    int iVar8;
    float *pfVar9;
    uint uVar10;
    float *pfVar11;
    float *pfVar12;
    float fVar13;
    float fVar14;
    float fVar15;

    iVar8 = param_1[4];
    iVar3 = *param_1;
    pfVar4 = *(float **)(param_1 + 2);
    uVar10 = iVar3 - iVar8;
    pfVar12 = pfVar4 + (uint)(iVar8 * 2);
    if (uVar10 <= param_4) {
        if (param_4 != 0) {
            do {
                uVar5 = 0;
                if (param_4 < uVar10) {
                    uVar10 = param_4;
                }
                if (3 < (int)uVar10) {
                    fVar1 = (float)param_1[5];
                    uVar5 = (uVar10 - 4 >> 2) + 1;
                    uVar6 = (ulonglong)uVar5;
                    uVar5 = uVar5 * 4;
                    pfVar7 = param_2;
                    pfVar9 = param_3;
                    pfVar11 = pfVar12;
                    do {
                        fVar13 = *pfVar11;
                        fVar15 = *pfVar7;
                        fVar14 = pfVar7[1];
                        pfVar12 = pfVar11 + 8;
                        param_3 = pfVar9 + 4;
                        param_2 = pfVar7 + 4;
                        *pfVar11 = fVar15;
                        fVar13 = (fVar15 - pfVar11[1]) * fVar1 + fVar13;
                        pfVar11[1] = fVar13;
                        fVar15 = pfVar11[2];
                        pfVar11[2] = fVar14;
                        fVar2 = pfVar11[3];
                        *pfVar9 = fVar13;
                        fVar13 = pfVar7[2];
                        fVar15 = (fVar14 - fVar2) * fVar1 + fVar15;
                        pfVar11[3] = fVar15;
                        fVar14 = pfVar11[4];
                        pfVar11[4] = fVar13;
                        fVar2 = pfVar11[5];
                        pfVar9[1] = fVar15;
                        fVar15 = pfVar7[3];
                        fVar14 = (fVar13 - fVar2) * fVar1 + fVar14;
                        pfVar11[5] = fVar14;
                        fVar13 = pfVar11[6];
                        pfVar11[6] = fVar15;
                        fVar2 = pfVar11[7];
                        pfVar9[2] = fVar14;
                        fVar13 = (fVar15 - fVar2) * fVar1 + fVar13;
                        pfVar11[7] = fVar13;
                        pfVar9[3] = fVar13;
                        uVar6 = uVar6 - 1;
                        pfVar7 = param_2;
                        pfVar9 = param_3;
                        pfVar11 = pfVar12;
                    } while (uVar6 != 0);
                }
                if (uVar5 < uVar10) {
                    fVar1 = (float)param_1[5];
                    uVar6 = (ulonglong)(uVar10 - uVar5);
                    pfVar7 = param_3;
                    pfVar9 = pfVar12;
                    do {
                        fVar13 = *pfVar9;
                        fVar15 = *param_2;
                        pfVar12 = pfVar9 + 2;
                        param_3 = pfVar7 + 1;
                        param_2 = param_2 + 1;
                        *pfVar9 = fVar15;
                        fVar13 = (fVar15 - pfVar9[1]) * fVar1 + fVar13;
                        pfVar9[1] = fVar13;
                        *pfVar7 = fVar13;
                        uVar6 = uVar6 - 1;
                        pfVar7 = param_3;
                        pfVar9 = pfVar12;
                    } while (uVar6 != 0);
                }
                iVar8 = iVar8 + uVar10;
                param_1[4] = iVar8;
                if (iVar8 == iVar3) {
                    iVar8 = 0;
                    param_1[4] = 0;
                    pfVar12 = pfVar4;
                }
                param_4 = param_4 - uVar10;
                uVar10 = iVar3 - iVar8;
            } while (param_4 != 0);
        }
        return;
    }
    if (param_4 != 0) {
        fVar1 = (float)param_1[5];
        uVar10 = param_4;
        do {
            fVar13 = *pfVar12;
            fVar15 = *param_2;
            param_2 = param_2 + 1;
            *pfVar12 = fVar15;
            fVar13 = (fVar15 - pfVar12[1]) * fVar1 + fVar13;
            pfVar12[1] = fVar13;
            *param_3 = fVar13;
            uVar10 = uVar10 - 1;
            param_3 = param_3 + 1;
            pfVar12 = pfVar12 + 2;
        } while (uVar10 != 0);
    }
    param_1[4] = iVar8 + param_4;
    return;
}



undefined8 FUN_1408caa70(uint *param_1,longlong *param_2,uint param_3)

{
    longlong lVar1;

    if (param_3 < 4) {
        param_3 = 4;
    }
    *param_1 = param_3;
    lVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    param_1[4] = 0;
    return 1;
}



void FUN_1408caad0(undefined4 *param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *(undefined8 *)(param_1 + 2) = 0;
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



void FUN_1408cab10(int *param_1)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 2),0,*param_1 << 2);
        return;
    }
    return;
}



void FUN_1408cab40(uint *param_1,undefined4 *param_2,uint param_3)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar8 = param_1[4];
    uVar9 = (ulonglong)uVar8;
    uVar3 = *param_1;
    puVar2 = *(undefined4 **)(param_1 + 2);
    puVar6 = puVar2 + uVar9;
    uVar7 = uVar3 - uVar8;
    if (uVar7 <= param_3) {
        if (param_3 != 0) {
            do {
                if (param_3 < uVar7) {
                    uVar7 = param_3;
                }
                if (uVar7 != 0) {
                    uVar4 = (ulonglong)uVar7;
                    puVar5 = puVar6;
                    do {
                        uVar1 = *puVar5;
                        puVar6 = puVar5 + 1;
                        *puVar5 = *param_2;
                        *param_2 = uVar1;
                        param_2 = param_2 + 1;
                        uVar4 = uVar4 - 1;
                        puVar5 = puVar6;
                    } while (uVar4 != 0);
                }
                uVar8 = (int)uVar9 + uVar7;
                uVar9 = (ulonglong)uVar8;
                if (uVar8 == uVar3) {
                    uVar9 = 0;
                    puVar6 = puVar2;
                }
                param_3 = param_3 - uVar7;
                uVar7 = uVar3 - (uint)uVar9;
            } while (param_3 != 0);
            param_1[4] = (uint)uVar9;
        }
        return;
    }
    uVar3 = param_3;
    if (param_3 != 0) {
        do {
            uVar1 = *puVar6;
            *puVar6 = *param_2;
            *param_2 = uVar1;
            param_2 = param_2 + 1;
            uVar3 = uVar3 - 1;
            puVar6 = puVar6 + 1;
        } while (uVar3 != 0);
    }
    param_1[4] = uVar8 + param_3;
    return;
}



void FUN_1408cac30(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    uint uVar9;

    uVar4 = param_1[4];
    uVar5 = (ulonglong)uVar4;
    uVar2 = *param_1;
    puVar6 = *(undefined4 **)(param_1 + 2);
    puVar8 = puVar6 + uVar5;
    uVar9 = uVar2 - uVar4;
    if (param_4 < uVar9) {
        if (param_4 != 0) {
            puVar6 = puVar8;
            uVar2 = param_4;
            do {
                uVar1 = *puVar6;
                *puVar6 = *(undefined4 *)(((longlong)param_2 - (longlong)puVar8) + (longlong)puVar6);
                *param_3 = uVar1;
                param_3 = param_3 + 1;
                uVar2 = uVar2 - 1;
                puVar6 = puVar6 + 1;
            } while (uVar2 != 0);
        }
        param_1[4] = uVar4 + param_4;
    }
    else if (param_4 != 0) {
        do {
            if (param_4 < uVar9) {
                uVar9 = param_4;
            }
            if (uVar9 != 0) {
                uVar3 = (ulonglong)uVar9;
                puVar7 = puVar8;
                do {
                    uVar1 = *puVar7;
                    puVar8 = puVar7 + 1;
                    *puVar7 = *param_2;
                    *param_3 = uVar1;
                    param_2 = param_2 + 1;
                    param_3 = param_3 + 1;
                    uVar3 = uVar3 - 1;
                    puVar7 = puVar8;
                } while (uVar3 != 0);
            }
            uVar4 = (int)uVar5 + uVar9;
            uVar5 = (ulonglong)uVar4;
            if (uVar4 == uVar2) {
                uVar5 = 0;
                puVar8 = puVar6;
            }
            param_4 = param_4 - uVar9;
            uVar9 = uVar2 - (uint)uVar5;
        } while (param_4 != 0);
        param_1[4] = (uint)uVar5;
    }
    return;
}



undefined8
FUN_1408cad10(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              longlong param_5_00,undefined8 param_6_00,undefined4 *param_7,undefined8 param_8,
              undefined4 param_5,undefined4 param_6)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 extraout_XMM0_Da;
    undefined4 uVar3;

    uVar2 = FUN_1408cb710(param_1,param_4,param_5,param_7[3],param_6_00,param_7,param_6);
    uVar1 = FUN_1408caa70(param_5_00,param_6_00,*param_7);
    if ((int)uVar1 == 1) {
        uVar1 = FUN_1408caa70(param_5_00 + 0x18,param_6_00,param_7[1]);
        if ((int)uVar1 == 1) {
            uVar1 = FUN_1408caa70(param_5_00 + 0x30,param_6_00,param_7[2]);
            if ((int)uVar1 == 1) {
                uVar1 = FUN_1408caa70(param_5_00 + 0x48,param_6_00,param_7[3]);
                if ((int)uVar1 == 1) {
                    uVar3 = FUN_1408cb7f0(extraout_XMM0_Da,param_4,uVar2,param_5_00 + 0x60);
                    uVar3 = FUN_1408cb7f0(uVar3,param_4,uVar2,param_5_00 + 0x6c);
                    uVar3 = FUN_1408cb7f0(uVar3,param_4,uVar2,param_5_00 + 0x78);
                    FUN_1408cb7f0(uVar3,param_4,uVar2,param_5_00 + 0x84);
                    uVar1 = 1;
                }
            }
        }
    }
    return uVar1;
}



void FUN_1408cae50(longlong param_1,undefined8 param_2)

{
    FUN_1408caad0();
    FUN_1408caad0(param_1 + 0x18,param_2);
    FUN_1408caad0(param_1 + 0x30,param_2);
    FUN_1408caad0(param_1 + 0x48,param_2);
    return;
}



void FUN_1408caea0(longlong param_1)

{
    FUN_1408cab10();
    FUN_1408cab10(param_1 + 0x18);
    FUN_1408cab10(param_1 + 0x30);
    FUN_1408cab10(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
}



void FUN_1408caef0(uint *param_1,float *param_2,float *param_3,uint param_4)

{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    uVar4 = param_1[4];
    uVar7 = param_1[10];
    uVar6 = param_1[0x10];
    fVar11 = (float)param_1[0x18];
    fVar12 = (float)param_1[0x1b];
    fVar13 = (float)param_1[0x1e];
    uVar5 = param_1[0x16];
    fVar14 = (float)param_1[0x21];
    if (param_4 != 0) {
        uVar8 = (ulonglong)param_4;
        do {
            lVar2 = *(longlong *)(param_1 + 2);
            uVar3 = uVar4 + 1;
            fVar11 = *(float *)(lVar2 + (ulonglong)uVar4 * 4) * (float)param_1[0x19] -
                     fVar11 * (float)param_1[0x1a];
            fVar12 = *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 4) * (float)param_1[0x1c]
                     - fVar12 * (float)param_1[0x1d];
            fVar13 = *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)uVar6 * 4) *
                     (float)param_1[0x1f] - fVar13 * (float)param_1[0x20];
            fVar14 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)uVar5 * 4) *
                     (float)param_1[0x22] - fVar14 * (float)param_1[0x23];
            fVar10 = (fVar12 + fVar11 + fVar13 + fVar14) * -0.5;
            *param_3 = (((fVar11 - fVar12) + fVar13) - fVar14) + *param_3;
            fVar1 = *param_2;
            *(float *)(lVar2 + (ulonglong)uVar4 * 4) = fVar12 + fVar10 + fVar1;
            uVar9 = 0;
            uVar4 = uVar3;
            if (uVar3 == *param_1) {
                uVar4 = uVar9;
            }
            uVar3 = uVar7 + 1;
            *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7 * 4) = fVar13 + fVar10 + fVar1;
            uVar7 = uVar3;
            if (uVar3 == param_1[6]) {
                uVar7 = uVar9;
            }
            uVar3 = uVar6 + 1;
            *(float *)(*(longlong *)(param_1 + 0xe) + (ulonglong)uVar6 * 4) = fVar14 + fVar10 + fVar1;
            uVar6 = uVar3;
            if (uVar3 == param_1[0xc]) {
                uVar6 = uVar9;
            }
            uVar3 = uVar5 + 1;
            *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)uVar5 * 4) = fVar11 + fVar10 + fVar1;
            uVar5 = uVar3;
            if (uVar3 == param_1[0x12]) {
                uVar5 = 0;
            }
            uVar8 = uVar8 - 1;
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
        } while (uVar8 != 0);
    }
    param_1[0x18] = (uint)fVar11;
    param_1[0x1b] = (uint)fVar12;
    param_1[4] = uVar4;
    param_1[0x1e] = (uint)fVar13;
    param_1[0x21] = (uint)fVar14;
    param_1[10] = uVar7;
    param_1[0x10] = uVar6;
    param_1[0x16] = uVar5;
    return;
}



void FUN_1408cb140(uint *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;

    uVar4 = param_1[4];
    uVar7 = param_1[10];
    fVar12 = (float)param_1[0x1e];
    fVar13 = (float)param_1[0x21];
    fVar14 = (float)param_1[0x18];
    uVar6 = param_1[0x10];
    uVar5 = param_1[0x16];
    fVar15 = (float)param_1[0x1b];
    if (param_5 != 0) {
        uVar10 = (ulonglong)param_5;
        do {
            lVar2 = *(longlong *)(param_1 + 2);
            uVar8 = (ulonglong)uVar7;
            uVar9 = (ulonglong)uVar6;
            uVar3 = uVar4 + 1;
            fVar14 = *(float *)(lVar2 + (ulonglong)uVar4 * 4) * (float)param_1[0x19] -
                     fVar14 * (float)param_1[0x1a];
            fVar15 = *(float *)(*(longlong *)(param_1 + 8) + uVar8 * 4) * (float)param_1[0x1c] -
                     fVar15 * (float)param_1[0x1d];
            fVar12 = *(float *)(*(longlong *)(param_1 + 0xe) + uVar9 * 4) * (float)param_1[0x1f] -
                     fVar12 * (float)param_1[0x20];
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)uVar5 * 4) *
                     (float)param_1[0x22] - fVar13 * (float)param_1[0x23];
            *param_3 = (((fVar14 - fVar15) + fVar12) - fVar13) + *param_3;
            fVar11 = (fVar15 + fVar14 + fVar12 + fVar13) * -0.5;
            *param_4 = (((fVar15 + fVar14) - fVar12) - fVar13) + *param_4;
            fVar1 = *param_2;
            *(float *)(lVar2 + (ulonglong)uVar4 * 4) = fVar15 + fVar11 + fVar1;
            uVar4 = uVar3;
            if (uVar3 == *param_1) {
                uVar4 = 0;
            }
            uVar7 = uVar7 + 1;
            *(float *)(*(longlong *)(param_1 + 8) + uVar8 * 4) = fVar12 + fVar11 + fVar1;
            if (uVar7 == param_1[6]) {
                uVar7 = 0;
            }
            uVar6 = uVar6 + 1;
            *(float *)(*(longlong *)(param_1 + 0xe) + uVar9 * 4) = fVar13 + fVar11 + fVar1;
            if (uVar6 == param_1[0xc]) {
                uVar6 = 0;
            }
            *(float *)(*(longlong *)(param_1 + 0x14) + (ulonglong)uVar5 * 4) = fVar14 + fVar11 + fVar1;
            uVar5 = uVar5 + 1;
            if (uVar5 == param_1[0x12]) {
                uVar5 = 0;
            }
            uVar10 = uVar10 - 1;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
        } while (uVar10 != 0);
    }
    param_1[0x18] = (uint)fVar14;
    param_1[0x1b] = (uint)fVar15;
    param_1[0x1e] = (uint)fVar12;
    param_1[4] = uVar4;
    param_1[0x16] = uVar5;
    param_1[10] = uVar7;
    param_1[0x10] = uVar6;
    param_1[0x21] = (uint)fVar13;
    return;
}



void FUN_1408cb3c0(uint *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   uint param_6)

{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    float *pfVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    uVar4 = param_1[4];
    uVar7 = param_1[10];
    fVar13 = (float)param_1[0x1e];
    fVar14 = (float)param_1[0x21];
    fVar15 = (float)param_1[0x18];
    uVar6 = param_1[0x10];
    uVar5 = param_1[0x16];
    fVar16 = (float)param_1[0x1b];
    pfVar11 = param_5;
    param_5 = (float *)(ulonglong)param_6;
    if (param_6 != 0) {
        do {
            lVar2 = *(longlong *)(param_1 + 2);
            uVar8 = (ulonglong)uVar7;
            uVar9 = (ulonglong)uVar6;
            uVar10 = (ulonglong)uVar5;
            uVar3 = uVar4 + 1;
            fVar15 = *(float *)(lVar2 + (ulonglong)uVar4 * 4) * (float)param_1[0x19] -
                     fVar15 * (float)param_1[0x1a];
            fVar16 = *(float *)(*(longlong *)(param_1 + 8) + uVar8 * 4) * (float)param_1[0x1c] -
                     fVar16 * (float)param_1[0x1d];
            fVar13 = *(float *)(*(longlong *)(param_1 + 0xe) + uVar9 * 4) * (float)param_1[0x1f] -
                     fVar13 * (float)param_1[0x20];
            fVar14 = *(float *)(*(longlong *)(param_1 + 0x14) + uVar10 * 4) * (float)param_1[0x22] -
                     fVar14 * (float)param_1[0x23];
            fVar1 = *param_3;
            *pfVar11 = ((fVar15 - fVar16) - fVar13) + fVar14 + *pfVar11;
            *param_3 = (((fVar15 - fVar16) + fVar13) - fVar14) + fVar1;
            fVar12 = (fVar16 + fVar15 + fVar13 + fVar14) * -0.5;
            *param_4 = (((fVar16 + fVar15) - fVar13) - fVar14) + *param_4;
            fVar1 = *param_2;
            *(float *)(lVar2 + (ulonglong)uVar4 * 4) = fVar16 + fVar12 + fVar1;
            uVar4 = uVar3;
            if (uVar3 == *param_1) {
                uVar4 = 0;
            }
            uVar7 = uVar7 + 1;
            *(float *)(*(longlong *)(param_1 + 8) + uVar8 * 4) = fVar13 + fVar12 + fVar1;
            if (uVar7 == param_1[6]) {
                uVar7 = 0;
            }
            uVar6 = uVar6 + 1;
            *(float *)(*(longlong *)(param_1 + 0xe) + uVar9 * 4) = fVar14 + fVar12 + fVar1;
            if (uVar6 == param_1[0xc]) {
                uVar6 = 0;
            }
            uVar5 = uVar5 + 1;
            *(float *)(*(longlong *)(param_1 + 0x14) + uVar10 * 4) = fVar15 + fVar12 + fVar1;
            if (uVar5 == param_1[0x12]) {
                uVar5 = 0;
            }
            param_5 = (float *)((longlong)param_5 - 1);
            pfVar11 = pfVar11 + 1;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
        } while (param_5 != (float *)0x0);
    }
    param_1[0x18] = (uint)fVar15;
    param_1[0x1b] = (uint)fVar16;
    param_1[0x1e] = (uint)fVar13;
    param_1[4] = uVar4;
    param_1[0x10] = uVar6;
    param_1[0x16] = uVar5;
    param_1[10] = uVar7;
    param_1[0x21] = (uint)fVar14;
    return;
}



void FUN_1408cb660(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6)

{
    undefined4 uVar1;
    undefined4 uVar2;

    uVar1 = FUN_1408cb710(param_3[0x12]);
    uVar2 = FUN_1408cb7f0(uVar1,param_2,uVar1,param_3 + 0x18,param_4,param_5,param_6,*param_3);
    uVar2 = FUN_1408cb7f0(uVar2,param_2,uVar1,param_3 + 0x1b,param_4,param_5,param_6,param_3[6]);
    uVar2 = FUN_1408cb7f0(uVar2,param_2,uVar1,param_3 + 0x1e,param_4,param_5,param_6,param_3[0xc]);
    FUN_1408cb7f0(uVar2,param_2,uVar1,param_3 + 0x21,param_4,param_5,param_6,param_3[0x12]);
    return;
}



void FUN_1408cb710(undefined8 param_1,undefined8 param_2,float param_3)

{
    double dVar1;
    double extraout_XMM0_Qa;
    undefined extraout_XMM0 [16];
    double dVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;

    uVar5 = 0;
    uVar6 = 0x3ff00000;
    uVar7 = 0;
    uVar8 = 0;
    dVar1 = 1.0 - (double)param_3 * (double)param_3;
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    FUN_1408ffa00();
    FUN_1408ff6e0();
    uVar9 = SUB84(extraout_XMM0_Qa * 20.0,0);
    uVar10 = (undefined4)((ulonglong)(extraout_XMM0_Qa * 20.0) >> 0x20);
    FUN_1408ff420();
    dVar1 = (double)CONCAT44(uVar10,uVar9) * SUB168(extraout_XMM0,0) * 0.0125;
    dVar2 = dVar1 * (double)CONCAT44(uVar4,uVar3);
    if ((double)CONCAT44(uVar6,uVar5) <= dVar2 && dVar2 != (double)CONCAT44(uVar6,uVar5)) {
        dVar1 = (double)CONCAT44(uVar6,uVar5) / dVar1;
        uVar3 = SUB84(dVar1,0);
        uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    sqrtpd(extraout_XMM0,
           CONCAT412(uVar8,CONCAT48(uVar7,(double)CONCAT44(uVar6,uVar5) -
                                          (double)CONCAT44(uVar4,uVar3))));
    return;
}



void FUN_1408cb7f0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4)

{
    undefined4 uVar1;
    undefined8 uVar2;
    undefined4 uVar4;
    double dVar3;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;

    uVar2 = FUN_1408ffa00(0x4024000000000000);
    uVar5 = SUB84((double)param_3,0);
    uVar6 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    uVar1 = (undefined4)uVar2;
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    dVar3 = (double)FUN_1408ff6e0();
    uVar7 = SUB84(dVar3 * 20.0,0);
    uVar8 = (undefined4)((ulonglong)(dVar3 * 20.0) >> 0x20);
    dVar3 = (double)FUN_1408ff420(0x4024000000000000);
    dVar3 = (double)CONCAT44(uVar8,uVar7) * dVar3 * 0.0125 *
            (1.0 - (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5));
    uVar5 = SUB84(dVar3,0);
    uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (0.999 < dVar3) {
        uVar5 = 0xd916872b;
        uVar6 = 0x3feff7ce;
    }
    *(float *)(param_4 + 4) =
            (float)((1.0 - (double)CONCAT44(uVar6,uVar5)) * (double)CONCAT44(uVar4,uVar1));
    *(float *)(param_4 + 8) = (float)(double)(CONCAT44(uVar6,uVar5) ^ 0x8000000000000000);
    return;
}



void FUN_1408cb8f0(longlong *param_1,int param_2,ulonglong param_3,float *param_4,uint param_5,
                   float param_6,float param_7)

{
    ushort uVar1;
    longlong lVar2;
    float *pfVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined in_XMM8 [16];
    undefined auVar10 [16];

    if (1.0 < param_7) {
        param_7 = 1.0;
    }
    if (1.0 < param_6) {
        param_6 = 1.0;
    }
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    if ((param_5 & 1) != 0) {
        fVar7 = 1.0;
    }
    if ((param_5 & 2) != 0) {
        fVar7 = fVar7 + 1.0;
    }
    if ((param_5 & 0x10) != 0) {
        fVar7 = fVar7 + 1.0;
    }
    if ((param_5 & 0x20) != 0) {
        fVar7 = fVar7 + 1.0;
    }
    if ((param_5 & 4) != 0) {
        fVar8 = param_6 * param_6;
    }
    if ((param_5 & 8) != 0) {
        fVar9 = param_7 * param_7;
    }
    auVar10 = sqrtps(in_XMM8,ZEXT416((uint)(1.0 / (fVar8 + fVar7 + fVar9))));
    fVar7 = SUB164(auVar10,0);
    FUN_1407e4830(param_4,0);
    uVar6 = 0;
    uVar5 = 1;
    if (param_5 != 0) {
        do {
            if (((param_5 & uVar5) != 0) || (param_5 == 8)) {
                fVar8 = fVar7;
                if ((uVar5 & 4) != 0) {
                    fVar8 = fVar7 * param_6;
                }
                if (param_5 == 8) {
                    param_5 = 0;
                    fVar8 = fVar8 * param_7;
                }
                else if ((uVar5 & 8) != 0) goto LAB_1408cba39;
                if (param_2 != 0) {
                    uVar1 = *(ushort *)(param_1 + 2);
                    lVar2 = *param_1;
                    pfVar3 = param_4;
                    iVar4 = param_2;
                    do {
                        *pfVar3 = fVar8 * *(float *)(((uVar1 * uVar6 + (param_3 & 0xffffffff)) * 4 -
                                                      (longlong)param_4) + lVar2 + -4 + (longlong)(pfVar3 + 1)) +
                                  *pfVar3;
                        iVar4 = iVar4 + -1;
                        pfVar3 = pfVar3 + 1;
                    } while (iVar4 != 0);
                }
                param_5 = param_5 & ~uVar5;
                uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            LAB_1408cba39:
            uVar5 = uVar5 * 2;
        } while (param_5 != 0);
    }
    return;
}



void FUN_1408cba70(float *param_1,float *param_2,float *param_3,undefined (*param_4) [16],
                   float param_5,float param_6,float param_7,float param_8,float param_9,
                   float param_10,uint param_11)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    undefined *puVar7;
    longlong lVar8;
    float *pfVar9;
    undefined (*pauVar10) [16];
    undefined (*pauVar11) [16];
    float *pfVar12;
    float *pfVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;

    if (((param_6 == param_5) && (param_8 == param_7)) && (param_10 == param_9)) {
        if (param_4 < (undefined (*) [16])(*param_4 + (ulonglong)param_11 * 4)) {
            pauVar10 = param_4;
            pfVar9 = param_2;
            do {
                pfVar12 = (float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar9);
                fVar14 = *pfVar9;
                pfVar4 = pfVar9 + 1;
                pfVar5 = pfVar9 + 2;
                pfVar6 = pfVar9 + 3;
                pauVar11 = pauVar10[1];
                pfVar9 = pfVar9 + 4;
                pfVar13 = (float *)((longlong)param_3 + (-0x10 - (longlong)param_2) + (longlong)pfVar9);
                *pauVar10 = CONCAT412(pfVar12[3] * param_5 + *pfVar6 * param_7 + pfVar13[3] * param_9,
                                      CONCAT48(pfVar12[2] * param_5 + *pfVar5 * param_7 +
                                               pfVar13[2] * param_9,
                                               CONCAT44(pfVar12[1] * param_5 + *pfVar4 * param_7 +
                                                        pfVar13[1] * param_9,
                                                        *pfVar12 * param_5 + fVar14 * param_7 +
                                                        *pfVar13 * param_9)));
                pauVar10 = pauVar11;
            } while (pauVar11 < (undefined (*) [16])(*param_4 + (ulonglong)param_11 * 4));
            return;
        }
    }
    else {
        pauVar10 = (undefined (*) [16])(*param_4 + (ulonglong)param_11 * 4);
        fVar14 = 1.0 / (float)(ulonglong)param_11;
        fVar22 = (param_6 - param_5) * fVar14;
        fVar21 = (param_8 - param_7) * fVar14;
        fVar14 = (param_10 - param_9) * fVar14;
        if (param_4 < pauVar10) {
            lVar8 = (longlong)pauVar10 + (3 - (longlong)param_4);
            if (3 < (longlong)(lVar8 + (ulonglong)((uint)(lVar8 >> 0x3f) & 3)) >> 2) {
                pfVar9 = param_3;
                pauVar11 = param_4;
                pfVar12 = param_2;
                pfVar13 = param_1;
                do {
                    param_4 = pauVar11[1];
                    param_1 = pfVar13 + 4;
                    param_2 = pfVar12 + 4;
                    param_3 = pfVar9 + 4;
                    fVar17 = param_7 + fVar21 + fVar21;
                    fVar1 = pfVar12[1];
                    fVar2 = pfVar9[1];
                    *(float *)*pauVar11 = param_5 * *pfVar13 + param_7 * *pfVar12 + param_9 * *pfVar9;
                    fVar15 = param_9 + fVar14 + fVar14;
                    fVar19 = param_5 + fVar22 + fVar22;
                    fVar18 = fVar17 + fVar21;
                    fVar3 = pfVar12[2];
                    *(float *)(*pauVar11 + 4) =
                            (param_5 + fVar22) * pfVar13[1] + (param_7 + fVar21) * fVar1 +
                            (param_9 + fVar14) * fVar2;
                    fVar16 = fVar15 + fVar14;
                    fVar20 = fVar19 + fVar22;
                    param_7 = fVar18 + fVar21;
                    fVar1 = pfVar12[3];
                    fVar2 = pfVar9[3];
                    *(float *)(*pauVar11 + 8) = fVar19 * pfVar13[2] + fVar17 * fVar3 + fVar15 * pfVar9[2];
                    param_9 = fVar16 + fVar14;
                    param_5 = fVar20 + fVar22;
                    *(float *)(*pauVar11 + 0xc) = fVar20 * pfVar13[3] + fVar18 * fVar1 + fVar16 * fVar2;
                    pfVar9 = param_3;
                    pauVar11 = param_4;
                    pfVar12 = param_2;
                    pfVar13 = param_1;
                } while ((longlong)param_4 < (longlong)(pauVar10[-1] + 4));
            }
            if (param_4 < pauVar10) {
                pfVar9 = param_3;
                do {
                    puVar7 = *param_4;
                    pfVar12 = pfVar9 + 1;
                    *(float *)*param_4 =
                            param_7 * *(float *)((longlong)param_2 + (-4 - (longlong)param_3) + (longlong)pfVar12
                            ) +
                            param_5 * *(float *)((longlong)param_1 + (-4 - (longlong)param_3) + (longlong)pfVar12
                            ) + param_9 * *pfVar9;
                    pfVar9 = pfVar12;
                    param_4 = (undefined (*) [16])(puVar7 + 4);
                    param_9 = param_9 + fVar14;
                    param_7 = param_7 + fVar21;
                    param_5 = param_5 + fVar22;
                } while ((undefined (*) [16])(puVar7 + 4) < pauVar10);
            }
        }
    }
    return;
}



void FUN_1408cbd10(undefined (*param_1) [16],float *param_2,float *param_3,undefined8 param_4,
                   float param_5,float param_6,float param_7,float param_8,float param_9,
                   uint param_10)

{
    float fVar1;
    undefined *puVar2;
    longlong lVar3;
    float *pfVar4;
    undefined (*pauVar5) [16];
    undefined (*pauVar6) [16];
    float *pfVar7;
    float fVar8;
    float in_XMM3_Da;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    if (((param_5 == in_XMM3_Da) && (param_7 == param_6)) && (param_9 == param_8)) {
        if (param_1 < (undefined (*) [16])(*param_1 + (ulonglong)param_10 * 4)) {
            pauVar5 = param_1;
            do {
                pfVar4 = (float *)(((longlong)param_2 - (longlong)param_1) + (longlong)pauVar5);
                pauVar6 = pauVar5[1];
                pfVar7 = (float *)((longlong)param_3 + (-0x10 - (longlong)param_1) + (longlong)pauVar6);
                *pauVar5 = CONCAT412(pfVar4[3] * param_6 + *(float *)(*pauVar5 + 0xc) * in_XMM3_Da +
                                     pfVar7[3] * param_8,
                                     CONCAT48(pfVar4[2] * param_6 + *(float *)(*pauVar5 + 8) * in_XMM3_Da +
                                              pfVar7[2] * param_8,
                                              CONCAT44(pfVar4[1] * param_6 +
                                                       *(float *)(*pauVar5 + 4) * in_XMM3_Da +
                                                       pfVar7[1] * param_8,
                                                       *pfVar4 * param_6 + *(float *)*pauVar5 * in_XMM3_Da +
                                                       *pfVar7 * param_8)));
                pauVar5 = pauVar6;
            } while (pauVar6 < (undefined (*) [16])(*param_1 + (ulonglong)param_10 * 4));
            return;
        }
    }
    else {
        pauVar5 = (undefined (*) [16])(*param_1 + (ulonglong)param_10 * 4);
        fVar8 = 1.0 / (float)(ulonglong)param_10;
        fVar16 = (param_5 - in_XMM3_Da) * fVar8;
        fVar15 = (param_7 - param_6) * fVar8;
        fVar8 = (param_9 - param_8) * fVar8;
        if (param_1 < pauVar5) {
            lVar3 = (longlong)pauVar5 + (3 - (longlong)param_1);
            if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
                pfVar4 = param_3;
                pauVar6 = param_1;
                pfVar7 = param_2;
                do {
                    param_1 = pauVar6[1];
                    param_2 = pfVar7 + 4;
                    param_3 = pfVar4 + 4;
                    fVar9 = in_XMM3_Da + fVar16 + fVar16;
                    fVar1 = *(float *)(*pauVar6 + 4);
                    fVar12 = pfVar4[1];
                    *(float *)*pauVar6 =
                            in_XMM3_Da * *(float *)*pauVar6 + param_6 * *pfVar7 + param_8 * *pfVar4;
                    fVar11 = param_8 + fVar8 + fVar8;
                    fVar13 = param_6 + fVar15 + fVar15;
                    fVar10 = fVar9 + fVar16;
                    *(float *)(*pauVar6 + 4) =
                            (param_6 + fVar15) * pfVar7[1] + (in_XMM3_Da + fVar16) * fVar1 +
                            (param_8 + fVar8) * fVar12;
                    fVar12 = fVar11 + fVar8;
                    fVar14 = fVar13 + fVar15;
                    in_XMM3_Da = fVar10 + fVar16;
                    fVar1 = pfVar4[3];
                    *(float *)(*pauVar6 + 8) =
                            fVar13 * pfVar7[2] + fVar9 * *(float *)(*pauVar6 + 8) + fVar11 * pfVar4[2];
                    param_8 = fVar12 + fVar8;
                    param_6 = fVar14 + fVar15;
                    *(float *)(*pauVar6 + 0xc) =
                            fVar14 * pfVar7[3] + fVar10 * *(float *)(*pauVar6 + 0xc) + fVar12 * fVar1;
                    pfVar4 = param_3;
                    pauVar6 = param_1;
                    pfVar7 = param_2;
                } while ((longlong)param_1 < (longlong)(pauVar5[-1] + 4));
            }
            if (param_1 < pauVar5) {
                pfVar4 = param_3;
                do {
                    puVar2 = *param_1;
                    *(float *)*param_1 =
                            param_6 * *(float *)((longlong)param_2 + (-4 - (longlong)param_3) +
                                                 (longlong)(pfVar4 + 1)) + in_XMM3_Da * *(float *)*param_1 +
                            param_8 * *pfVar4;
                    pfVar4 = pfVar4 + 1;
                    param_1 = (undefined (*) [16])(puVar2 + 4);
                    in_XMM3_Da = in_XMM3_Da + fVar16;
                    param_8 = param_8 + fVar8;
                    param_6 = param_6 + fVar15;
                } while ((undefined (*) [16])(puVar2 + 4) < pauVar5);
            }
        }
    }
    return;
}



undefined8 * FUN_1408cbf90(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_1409b15d0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1408cc6b0();
    return param_1;
}



undefined8
FUN_1408cbff0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
              undefined4 *param_5)

{
    byte *pbVar1;
    float *pfVar2;
    undefined uVar3;
    ushort uVar4;
    undefined8 uVar5;
    float fVar6;

    *(undefined8 *)(param_1 + 8) = param_4;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x3ec) = *param_5;
    uVar3 = (**(code **)(*param_3 + 0x90))(param_3);
    *(undefined *)(param_1 + 0x3f5) = uVar3;
    uVar4 = (**(code **)(*param_3 + 0x10))(param_3);
    pfVar2 = (float *)(param_1 + 0x360);
    *(uint *)(param_1 + 0x3f0) = (uint)uVar4;
    FUN_1408cce70(*(undefined8 *)(param_1 + 8),pfVar2);
    if (*(char *)(param_1 + 0x3f5) != '\0') {
        *(undefined4 *)(param_1 + 0x390) = 0;
    }
    if (*(char *)(param_1 + 0x39c) == '\0') {
        *(undefined4 *)(param_1 + 0x364) = 0;
        *(undefined4 *)(param_1 + 0x370) = 0;
    }
    if (*(char *)(param_1 + 0x39d) == '\0') {
        *(undefined4 *)(param_1 + 0x368) = 0;
        *(undefined4 *)(param_1 + 0x374) = 0;
    }
    fVar6 = (float)(ulonglong)*(uint *)(param_1 + 0x3f0) /
            (float)(ulonglong)*(uint *)(param_1 + 0x3ec);
    if (*pfVar2 <= fVar6 && fVar6 != *pfVar2) {
        *pfVar2 = fVar6;
    }
    if (*(float *)(param_1 + 0x36c) <= fVar6 && fVar6 != *(float *)(param_1 + 0x36c)) {
        *(float *)(param_1 + 0x36c) = fVar6;
    }
    *(undefined *)(param_1 + 0x3f4) = 1;
    *(float *)(param_1 + 0x3a0) = *pfVar2;
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x374);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x378);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x37c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x380);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 900);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x388);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x39c);
    param_5._0_4_ = *pfVar2;
    param_5._4_4_ = *(undefined4 *)(param_1 + 0x36c);
    uVar5 = FUN_1408ccf70(param_1 + 0x20,param_2,&param_5,*(undefined4 *)(param_1 + 0x3ec));
    if ((int)uVar5 == 1) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 9);
        *pbVar1 = *pbVar1 & 0xfb;
        uVar5 = FUN_1408ccf70(param_1 + 0x1c0,param_2,&param_5,*(undefined4 *)(param_1 + 0x3ec));
        if ((int)uVar5 == 1) {
            pbVar1 = (byte *)(*(longlong *)(param_1 + 8) + 9);
            *pbVar1 = *pbVar1 & 0xbf;
            uVar5 = 1;
        }
    }
    return uVar5;
}



undefined8 FUN_1408cc1d0(undefined8 *param_1,longlong *param_2)

{
    FUN_1408cd0d0(param_1 + 4);
    FUN_1408cd0d0(param_1 + 0x38,param_2);
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408cc230(longlong param_1)

{
    FUN_1408cd110(param_1 + 0x20);
    FUN_1408cd110(param_1 + 0x1c0);
    return 1;
}



void FUN_1408cc280(longlong param_1,longlong param_2)

{
    float *pfVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    float fVar5;
    float local_res8;
    undefined4 local_resc;

    pfVar1 = (float *)(param_1 + 0x360);
    FUN_1408cce70(*(undefined8 *)(param_1 + 8),pfVar1);
    if (*(char *)(param_1 + 0x3f5) != '\0') {
        *(undefined4 *)(param_1 + 0x390) = 0;
    }
    if (*(char *)(param_1 + 0x39c) == '\0') {
        *(undefined4 *)(param_1 + 0x364) = 0;
        *(undefined4 *)(param_1 + 0x370) = 0;
    }
    if (*(char *)(param_1 + 0x39d) == '\0') {
        *(undefined4 *)(param_1 + 0x368) = 0;
        *(undefined4 *)(param_1 + 0x374) = 0;
    }
    fVar5 = (float)(ulonglong)*(uint *)(param_1 + 0x3f0) /
            (float)(ulonglong)*(uint *)(param_1 + 0x3ec);
    if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
        *pfVar1 = fVar5;
    }
    if (*(float *)(param_1 + 0x36c) <= fVar5 && fVar5 != *(float *)(param_1 + 0x36c)) {
        *(float *)(param_1 + 0x36c) = fVar5;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    if (((((*(byte *)(lVar4 + 8) & 1) != 0) || ((*(byte *)(lVar4 + 8) & 2) != 0)) ||
         (bVar2 = *(byte *)(lVar4 + 9), (bVar2 & 4) != 0)) ||
        ((((bVar2 & 8) != 0 || ((bVar2 & 0x10) != 0)) ||
          (((bVar2 & 0x40) != 0 || (((bVar2 & 0x80) != 0 || ((*(byte *)(lVar4 + 10) & 1) != 0)))))))) {
        FUN_1408cc470();
    }
    bVar2 = *(byte *)(*(longlong *)(param_1 + 8) + 9);
    if (((bVar2 & 0x40) != 0) || ((bVar2 & 4) != 0)) {
        local_res8 = *pfVar1;
        local_resc = *(undefined4 *)(param_1 + 0x36c);
        FUN_1408cd0d0(param_1 + 0x20,*(undefined8 *)(param_1 + 0x10));
        iVar3 = FUN_1408ccf70(param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),&local_res8,
                              *(undefined4 *)(param_1 + 0x3ec));
        if (iVar3 != 1) {
            return;
        }
        FUN_1408cd110(param_1 + 0x20);
        FUN_1408cd0d0(param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x10));
        iVar3 = FUN_1408ccf70(param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x10),&local_res8,
                              *(undefined4 *)(param_1 + 0x3ec));
        if (iVar3 != 1) {
            return;
        }
        FUN_1408cd110(param_1 + 0x1c0);
    }
    lVar4 = *(longlong *)(param_1 + 8);
    bVar2 = *(byte *)(lVar4 + 8);
    if (((((bVar2 & 0x20) == 0) && ((bVar2 & 0x40) == 0)) && ((bVar2 & 0x80) == 0)) &&
        ((*(byte *)(lVar4 + 9) & 1) == 0)) {
        *(undefined *)(param_1 + 0x3f4) = 0;
    }
    else {
        *(undefined *)(param_1 + 0x3f4) = 1;
    }
    *(undefined2 *)(lVar4 + 8) = 0;
    *(undefined *)(lVar4 + 10) = 0;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
            (*(longlong **)(param_1 + 0x10),
             (longlong)(int)((uint)*(ushort *)(param_2 + 0x10) << 2) << 2);
    if (lVar4 != 0) {
        FUN_1408cd650(param_2,param_1 + 0x20,lVar4);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),lVar4);
    }
    return;
}



void FUN_1408cc470(longlong param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar7 = -60.0;
    fVar6 = -0.1;
    if (*(char *)(param_1 + 0x39c) == '\0') {
        fVar1 = *(float *)(param_1 + 0x360);
        fVar2 = *(float *)(param_1 + 0x36c);
        fVar5 = fVar2;
        if (fVar2 < fVar1) {
            fVar5 = fVar1;
        }
    }
    else {
        fVar1 = (float)FUN_1408fdc10(*(undefined4 *)(param_1 + 0x364));
        fVar2 = fVar1 * 20.0;
        if (fVar6 <= fVar1 * 20.0) {
            fVar2 = fVar6;
        }
        fVar1 = *(float *)(param_1 + 0x360);
        fVar5 = (fVar7 / fVar2) * fVar1;
        fVar2 = (float)FUN_1408fdc10(*(undefined4 *)(param_1 + 0x370));
        fVar3 = fVar2 * 20.0;
        if (fVar6 <= fVar2 * 20.0) {
            fVar3 = fVar6;
        }
        fVar2 = *(float *)(param_1 + 0x36c);
        fVar3 = (fVar7 / fVar3) * fVar2;
        if (fVar5 <= fVar3) {
            fVar5 = fVar3;
        }
    }
    if (*(char *)(param_1 + 0x39d) != '\0') {
        fVar4 = (float)FUN_1408fdc10(*(float *)(param_1 + 0x374) * *(float *)(param_1 + 0x368));
        fVar3 = fVar4 * 20.0;
        if (fVar6 <= fVar4 * 20.0) {
            fVar3 = fVar6;
        }
        if (*(char *)(param_1 + 0x39c) == '\0') {
            fVar6 = 1.0;
        }
        else {
            fVar6 = 2.0;
        }
        fVar5 = fVar5 + (fVar2 + fVar1) * fVar6 * (fVar7 / fVar3);
    }
    if (60.0 <= fVar5) {
        fVar5 = 60.0;
    }
    *(int *)(param_1 + 1000) = (int)(longlong)((float)(ulonglong)*(uint *)(param_1 + 0x3ec) * fVar5);
    return;
}



undefined8 * FUN_1408cc660(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x400);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = 0;
        *puVar1 = &PTR_LAB_1409b15d0;
        puVar1[2] = 0;
        FUN_1408cc6b0(puVar1 + 4);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



longlong FUN_1408cc6b0(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = 1;
    lVar2 = param_1;
    do {
        FUN_1408cc810(lVar2);
        lVar2 = lVar2 + 0x1a0;
        iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    *(undefined4 *)(param_1 + 0x340) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x344) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x348) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x34c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x350) = 0x3e800000;
    *(undefined8 *)(param_1 + 0x354) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x364) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x368) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(undefined2 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x374) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x380) = 0x3f000000;
    *(undefined4 *)(param_1 + 900) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x388) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x38c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x390) = 0x3e800000;
    *(undefined8 *)(param_1 + 0x394) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3a8) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x3ac) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x39c) = 0;
    *(undefined2 *)(param_1 + 0x3bc) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x3b4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
    return param_1;
}



longlong FUN_1408cc810(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    iVar4 = 1;
    lVar1 = param_2 + 0xc;
    iVar2 = 1;
    do {
        iVar2 = iVar2 + -1;
        *(undefined8 *)(lVar1 + -4) = 0;
        *(undefined4 *)(lVar1 + 4) = 0;
        *(undefined8 *)(lVar1 + -0xc) = 0;
        lVar1 = lVar1 + 0x18;
    } while (-1 < iVar2);
    uVar6 = 0x3f800000;
    puVar3 = (undefined8 *)(param_2 + 0xd8);
    uVar5 = 0;
    do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        param_1 = FUN_1408a8e90(param_1,uVar6,uVar5,uVar5,puVar3 + -0x15);
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 0x16;
    } while (-1 < iVar4);
    return param_2;
}



undefined8 * FUN_1408cca60(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1618;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined *)((longlong)puVar1 + 10) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f000000;
        *(undefined4 *)(puVar1 + 2) = 0x3e800000;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3e800000;
        *(undefined4 *)(puVar1 + 3) = 0x3f000000;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3e800000;
        puVar1[4] = 0x3e800000;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
        *(undefined4 *)(puVar1 + 6) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0x447a0000;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined2 *)(puVar1 + 9) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
        puVar1[8] = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)((longlong)puVar1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
        *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *(undefined *)((longlong)puVar1 + 10) = 0xff;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408ccad0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408ccb10(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    float fVar3;

    uVar2 = 0x41200000;
    *(undefined4 *)(param_1 + 0x24) = *param_2;
    fVar3 = 0.05;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    uVar1 = FUN_1408fbfc0(0x41200000,(float)param_2[2] * 0.05);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[3] * fVar3);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = param_2[4];
    *(undefined4 *)(param_1 + 0x18) = param_2[5];
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[6] * fVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[7] * fVar3);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = param_2[8];
    *(undefined4 *)(param_1 + 0x30) = param_2[9];
    *(undefined4 *)(param_1 + 0x34) = param_2[10];
    *(undefined4 *)(param_1 + 0x38) = param_2[0xb];
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0xc] * fVar3);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = FUN_1408fbfc0(uVar2,(float)param_2[0xd] * fVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    *(undefined4 *)(param_1 + 0x44) = param_2[0xe];
    *(undefined *)(param_1 + 0x48) = *(undefined *)(param_2 + 0xf);
    *(undefined *)(param_1 + 0x49) = *(undefined *)((longlong)param_2 + 0x3d);
    *(undefined2 *)(param_1 + 8) = 0xffff;
    *(undefined *)(param_1 + 10) = 0xff;
    return 1;
}



undefined8 FUN_1408ccc50(longlong param_1,short param_2,float *param_3)

{
    byte *pbVar1;
    uint uVar2;
    undefined4 uVar3;

    switch(param_2) {
        case 0:
            if (*param_3 == 0.0) {
                *(undefined *)(param_1 + 0x49) = 0;
            }
            else {
                *(undefined *)(param_1 + 0x49) = 1;
            }
            break;
        case 1:
            if (*param_3 == 0.0) {
                *(undefined *)(param_1 + 0x48) = 0;
            }
            else {
                *(undefined *)(param_1 + 0x48) = 1;
            }
            break;
        case 2:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x3c) = uVar3;
            break;
        case 3:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x40) = uVar3;
            break;
        case 4:
            *(float *)(param_1 + 0x44) = *param_3;
            break;
        case 5:
            *(int *)(param_1 + 0x2c) = (int)(longlong)*param_3;
            break;
        case 6:
            *(float *)(param_1 + 0x30) = *param_3;
            break;
        case 7:
            *(float *)(param_1 + 0x34) = *param_3;
            break;
        case 8:
            *(float *)(param_1 + 0x38) = *param_3;
            break;
        case 9:
            *(float *)(param_1 + 0x24) = *param_3;
            break;
        case 10:
            *(float *)(param_1 + 0xc) = *param_3;
            break;
        case 0xb:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x10) = uVar3;
            break;
        case 0xc:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x14) = uVar3;
            break;
        case 0xd:
            *(float *)(param_1 + 0x28) = *param_3;
            break;
        case 0xe:
            *(float *)(param_1 + 0x18) = *param_3;
            break;
        case 0xf:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x1c) = uVar3;
            break;
        case 0x10:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x20) = uVar3;
            break;
        default:
            return 0x1f;
    }
    uVar2 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
    pbVar1 = (byte *)((ulonglong)uVar2 + 8 + param_1);
    *pbVar1 = *pbVar1 | '\x01' << ((char)param_2 + (char)uVar2 * -8 & 0x1fU);
    return 1;
}



void FUN_1408cce70(longlong param_1,undefined4 *param_2)

{
    *param_2 = *(undefined4 *)(param_1 + 0xc);
    param_2[1] = *(undefined4 *)(param_1 + 0x10);
    param_2[2] = *(undefined4 *)(param_1 + 0x14);
    param_2[3] = *(undefined4 *)(param_1 + 0x18);
    param_2[4] = *(undefined4 *)(param_1 + 0x1c);
    param_2[5] = *(undefined4 *)(param_1 + 0x20);
    param_2[6] = *(undefined4 *)(param_1 + 0x24);
    param_2[7] = *(undefined4 *)(param_1 + 0x28);
    param_2[8] = *(undefined4 *)(param_1 + 0x2c);
    param_2[9] = *(undefined4 *)(param_1 + 0x30);
    param_2[10] = *(undefined4 *)(param_1 + 0x34);
    param_2[0xb] = *(undefined4 *)(param_1 + 0x38);
    param_2[0xc] = *(undefined4 *)(param_1 + 0x3c);
    param_2[0xd] = *(undefined4 *)(param_1 + 0x40);
    param_2[0xe] = *(undefined4 *)(param_1 + 0x44);
    param_2[0xf] = *(undefined4 *)(param_1 + 0x48);
    return;
}



undefined8 * FUN_1408ccee0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x50);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1618;
        *(undefined2 *)(puVar1 + 1) = 0;
        *(undefined *)((longlong)puVar1 + 10) = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0x3f000000;
        *(undefined4 *)(puVar1 + 2) = 0x3e800000;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3e800000;
        *(undefined4 *)(puVar1 + 3) = 0x3f000000;
        *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x3e800000;
        puVar1[4] = 0x3e800000;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
        *(undefined4 *)(puVar1 + 6) = 0x3f800000;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0x447a0000;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
        *(undefined4 *)(puVar1 + 5) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
        puVar1[8] = 0x3f800000;
        *(undefined2 *)(puVar1 + 9) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408ccf70(longlong param_1,longlong *param_2,float *param_3,uint param_4)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    float fVar7;
    undefined4 uVar10;
    undefined auVar9 [16];
    undefined auVar8 [16];

    *(uint *)(param_1 + 400) = param_4;
    auVar9 = ZEXT416((uint)(float)(ulonglong)param_4) & (undefined  [16])0xffffffffffffffff;
    fVar7 = SUB164(auVar9,0) * *param_3;
    auVar8 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar7);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar4 = (int)fVar7;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar7)) {
        uVar1 = movmskps(param_4,CONCAT88(SUB168(auVar9 >> 0x40,0),
                                          SUB168(auVar8,0) | SUB168(auVar8,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        auVar8 = ZEXT416((uint)(float)(iVar4 - (uVar1 & 1)));
    }
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = (int)(longlong)SUB164(auVar8,0) + 3U & 0xfffffffc;
    uVar2 = (ulonglong)uVar1;
    *(uint *)(param_1 + 8) = uVar1;
    if (uVar1 != 0) {
        uVar5 = 0;
        do {
            uVar2 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 8) << 2);
            *(ulonglong *)(param_1 + uVar5 * 8) = uVar2;
            if (uVar2 == 0) {
                return 0x34;
            }
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x10));
    }
    fVar7 = SUB164(auVar9,0) * param_3[1];
    auVar8 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar7);
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar4 = (int)fVar7;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar7)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar5 = SUB168(auVar8,0);
        uVar1 = movmskps((int)uVar2,
                         CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar5)) >> 0x40,0),
                                  uVar5 & 0xffffffff | uVar5 << 0x20));
        auVar8 = ZEXT416((uint)(float)(iVar4 - (uVar1 & 1)));
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar1 = (int)(longlong)SUB164(auVar8,0) + 3U & 0xfffffffc;
    *(uint *)(param_1 + 0x20) = uVar1;
    if (uVar1 != 0) {
        do {
            lVar3 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*(uint *)(param_1 + 0x20) << 2);
            *(longlong *)(param_1 + 0x18 + uVar6 * 8) = lVar3;
            if (lVar3 == 0) {
                return 0x34;
            }
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 0x28));
    }
    return 1;
}



void FUN_1408cd0d0(longlong param_1,undefined8 param_2)

{
    FUN_1408c3b60();
    FUN_1408c3b60(param_1 + 0x18,param_2);
    return;
}



void FUN_1408cd110(longlong param_1)

{
    FUN_1408c3af0();
    FUN_1408c3af0(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    return;
}



ulonglong FUN_1408cd160(float **param_1,undefined (**param_2) [16],float **param_3,ulonglong param_4
        ,longlong param_5,int *param_6,char param_7)

{
    undefined (*pauVar1) [16];
    float fVar2;
    ushort uVar3;
    uint uVar4;
    uint uVar5;
    undefined (*pauVar6) [16];
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
    float fVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    float **ppfVar31;
    float **ppfVar32;
    uint uVar33;
    longlong lVar34;
    undefined (*pauVar35) [16];
    undefined (*pauVar36) [16];
    float **ppfVar37;
    undefined (*pauVar38) [16];
    undefined (*pauVar39) [16];
    uint uVar40;
    float *pfVar41;
    float **ppfVar42;
    uint uVar43;
    ulonglong uVar44;
    uint uVar45;
    ulonglong uVar46;
    uint uVar47;
    float *pfVar48;
    float *pfVar49;
    float *pfVar50;
    float *pfVar51;
    ulonglong uVar52;
    uint uVar53;
    float *pfVar54;
    float fVar55;
    float fVar56;
    float fVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float fVar62;
    float fVar63;
    float fVar64;
    float fVar65;
    float fVar66;
    float fVar67;
    float fVar68;
    float fVar69;
    float fVar70;
    float fVar71;
    float fVar72;
    float fVar73;
    float fVar74;
    float fVar75;
    undefined4 in_XMM6_Da;
    float fVar76;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar77;
    float fVar78;
    undefined4 in_XMM7_Db;
    float fVar79;
    undefined4 in_XMM7_Dc;
    float fVar80;
    undefined4 in_XMM7_Dd;
    float fVar81;
    undefined4 in_XMM8_Da;
    float fVar82;
    float fVar83;
    undefined4 in_XMM8_Db;
    float fVar84;
    undefined4 in_XMM8_Dc;
    float fVar85;
    float fVar86;
    undefined4 in_XMM8_Dd;
    float fVar87;
    undefined4 in_XMM9_Da;
    float fVar88;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined4 in_XMM10_Da;
    float fVar89;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    float fVar90;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;
    undefined4 in_XMM12_Da;
    float fVar91;
    undefined4 in_XMM12_Db;
    undefined4 in_XMM12_Dc;
    undefined4 in_XMM12_Dd;

    uVar4 = *(uint *)(param_1 + 1);
    pauVar6 = *param_2;
    fVar72 = *(float *)(param_4 + 4);
    uVar3 = *(ushort *)((longlong)param_2 + 0x12);
    pfVar49 = *param_3;
    uVar5 = *(uint *)(param_1 + 4);
    uVar44 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    uVar46 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    fVar70 = 1.0 / (float)(ulonglong)uVar3;
    uVar53 = uVar5 - *(uint *)((longlong)param_1 + 0x24);
    uVar33 = uVar4 - *(uint *)((longlong)param_1 + 0xc);
    pfVar54 = *param_1 + uVar44;
    if (uVar33 < uVar53) {
        uVar53 = uVar33;
    }
    pfVar41 = param_1[3] + uVar46;
    pauVar1 = (undefined (*) [16])(*pauVar6 + (ulonglong)*(ushort *)(param_2 + 2) * 4);
    pfVar51 = pfVar49 + *(ushort *)(param_3 + 2);
    fVar67 = (*(float *)(param_5 + 4) - fVar72) * fVar70;
    fVar55 = fVar67 + fVar72;
    fVar76 = *(float *)(param_4 + 0x10);
    fVar88 = fVar67 * 4.0;
    fVar56 = fVar55 + fVar67;
    fVar67 = fVar56 + fVar67;
    fVar68 = (*(float *)(param_5 + 0x10) - fVar76) * fVar70;
    fVar57 = fVar68 + fVar76;
    fVar78 = *(float *)(param_4 + 8);
    fVar89 = fVar68 * 4.0;
    fVar58 = fVar57 + fVar68;
    fVar68 = fVar58 + fVar68;
    fVar69 = (*(float *)(param_5 + 8) - fVar78) * fVar70;
    fVar90 = fVar69 * 4.0;
    fVar59 = fVar69 + fVar78;
    fVar2 = *(float *)(param_4 + 0x14);
    uVar33 = (uint)uVar3;
    fVar60 = fVar59 + fVar69;
    fVar69 = fVar60 + fVar69;
    fVar70 = (*(float *)(param_5 + 0x14) - fVar2) * fVar70;
    fVar61 = fVar70 + fVar2;
    fVar91 = fVar70 * 4.0;
    fVar62 = fVar61 + fVar70;
    fVar70 = fVar62 + fVar70;
    pauVar36 = pauVar6;
    pauVar39 = pauVar1;
    fVar83 = fVar2;
    fVar86 = fVar62;
    while (uVar33 != 0) {
        if (uVar33 < uVar53) {
            uVar53 = uVar33;
        }
        uVar52 = (ulonglong)(uVar53 >> 2);
        pauVar35 = pauVar36;
        pauVar38 = pauVar39;
        pfVar48 = pfVar49;
        pfVar50 = pfVar51;
        fVar71 = fVar72;
        fVar73 = fVar55;
        fVar74 = fVar56;
        fVar75 = fVar67;
        fVar77 = fVar78;
        fVar79 = fVar59;
        fVar80 = fVar60;
        fVar81 = fVar69;
        fVar82 = fVar83;
        fVar84 = fVar61;
        fVar85 = fVar86;
        fVar87 = fVar70;
        if (uVar53 >> 2 != 0) {
            do {
                fVar7 = *pfVar41;
                fVar8 = pfVar41[1];
                fVar9 = pfVar41[2];
                fVar10 = pfVar41[3];
                fVar11 = *pfVar54;
                fVar12 = pfVar54[1];
                fVar13 = pfVar54[2];
                fVar14 = pfVar54[3];
                pauVar39 = pauVar38[1];
                pfVar54 = pfVar54 + 4;
                pfVar41 = pfVar41 + 4;
                pfVar49 = pfVar48 + 4;
                pfVar51 = pfVar50 + 4;
                pauVar36 = pauVar35[1];
                fVar83 = fVar82 + fVar91;
                fVar61 = fVar84 + fVar91;
                fVar86 = fVar85 + fVar91;
                fVar70 = fVar87 + fVar91;
                *pfVar48 = fVar11;
                pfVar48[1] = fVar12;
                pfVar48[2] = fVar13;
                pfVar48[3] = fVar14;
                fVar15 = *(float *)*pauVar35;
                fVar16 = *(float *)(*pauVar35 + 4);
                fVar17 = *(float *)(*pauVar35 + 8);
                fVar18 = *(float *)(*pauVar35 + 0xc);
                fVar72 = fVar71 + fVar88;
                fVar55 = fVar73 + fVar88;
                fVar56 = fVar74 + fVar88;
                fVar67 = fVar75 + fVar88;
                fVar78 = fVar77 + fVar90;
                fVar59 = fVar79 + fVar90;
                fVar60 = fVar80 + fVar90;
                fVar69 = fVar81 + fVar90;
                *pfVar50 = fVar7;
                pfVar50[1] = fVar8;
                pfVar50[2] = fVar9;
                pfVar50[3] = fVar10;
                fVar19 = *(float *)*pauVar38;
                fVar20 = *(float *)(*pauVar38 + 4);
                fVar21 = *(float *)(*pauVar38 + 8);
                fVar22 = *(float *)(*pauVar38 + 0xc);
                fVar63 = fVar76 * fVar7;
                fVar64 = fVar57 * fVar8;
                fVar65 = fVar58 * fVar9;
                fVar66 = fVar68 * fVar10;
                *pauVar35 = CONCAT412(fVar87 * fVar10 + fVar18 + fVar75 * fVar14,
                                      CONCAT48(fVar85 * fVar9 + fVar17 + fVar74 * fVar13,
                                               CONCAT44(fVar84 * fVar8 + fVar16 + fVar73 * fVar12,
                                                        fVar82 * fVar7 + fVar15 + fVar71 * fVar11)));
                fVar76 = fVar76 + fVar89;
                fVar57 = fVar57 + fVar89;
                fVar58 = fVar58 + fVar89;
                fVar68 = fVar68 + fVar89;
                *pauVar38 = CONCAT412(fVar81 * fVar14 + fVar22 + fVar66,
                                      CONCAT48(fVar80 * fVar13 + fVar21 + fVar65,
                                               CONCAT44(fVar79 * fVar12 + fVar20 + fVar64,
                                                        fVar77 * fVar11 + fVar19 + fVar63)));
                uVar52 = uVar52 - 1;
                pauVar35 = pauVar36;
                pauVar38 = pauVar39;
                pfVar48 = pfVar49;
                pfVar50 = pfVar51;
                fVar71 = fVar72;
                fVar73 = fVar55;
                fVar74 = fVar56;
                fVar75 = fVar67;
                fVar77 = fVar78;
                fVar79 = fVar59;
                fVar80 = fVar60;
                fVar81 = fVar69;
                fVar82 = fVar83;
                fVar84 = fVar61;
                fVar85 = fVar86;
                fVar87 = fVar70;
            } while (uVar52 != 0);
        }
        uVar43 = (int)uVar44 + uVar53;
        uVar44 = (ulonglong)uVar43;
        uVar45 = (int)uVar46 + uVar53;
        uVar46 = (ulonglong)uVar45;
        if (uVar43 == uVar4) {
            pfVar54 = *param_1;
            uVar44 = 0;
        }
        param_4 = (ulonglong)uVar5;
        if (uVar45 == uVar5) {
            pfVar41 = param_1[3];
            uVar46 = 0;
        }
        uVar33 = uVar33 - uVar53;
        uVar53 = uVar5 - (int)uVar46;
        uVar43 = uVar4 - (int)uVar44;
        if (uVar43 < uVar53) {
            uVar53 = uVar43;
        }
    }
    uVar53 = (uint)uVar3;
    if (*param_6 != 0) {
        if (param_7 != '\0') {
            ppfVar32 = param_1 + 6;
            FUN_1408a81d0(param_6[3],param_6[1],(float)(ulonglong)*(uint *)(param_1 + 0x32),param_6[2],
                          ppfVar32,*param_6 + -1,pfVar51,param_4,param_6[1],param_6[3],fVar2,fVar62,
                          CONCAT412(in_XMM12_Dd,CONCAT48(in_XMM12_Dc,CONCAT44(in_XMM12_Db,in_XMM12_Da))),
                          CONCAT412(in_XMM11_Dd,CONCAT48(in_XMM11_Dc,CONCAT44(in_XMM11_Db,in_XMM11_Da))),
                          CONCAT412(in_XMM10_Dd,CONCAT48(in_XMM10_Dc,CONCAT44(in_XMM10_Db,in_XMM10_Da))),
                          CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da))),
                          CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da))),
                          CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
            ppfVar31 = param_1 + 0x1c;
            if ((((uint)ppfVar32 | (uint)ppfVar31) & 0xf) == 0) {
                lVar34 = 1;
                do {
                    ppfVar42 = ppfVar32;
                    ppfVar37 = ppfVar31;
                    uVar23 = *(undefined4 *)((longlong)ppfVar42 + 4);
                    uVar24 = *(undefined4 *)(ppfVar42 + 1);
                    uVar25 = *(undefined4 *)((longlong)ppfVar42 + 0xc);
                    uVar26 = *(undefined4 *)(ppfVar42 + 2);
                    uVar27 = *(undefined4 *)((longlong)ppfVar42 + 0x14);
                    uVar28 = *(undefined4 *)(ppfVar42 + 3);
                    uVar29 = *(undefined4 *)((longlong)ppfVar42 + 0x1c);
                    *(undefined4 *)ppfVar37 = *(undefined4 *)ppfVar42;
                    *(undefined4 *)((longlong)ppfVar37 + 4) = uVar23;
                    *(undefined4 *)(ppfVar37 + 1) = uVar24;
                    *(undefined4 *)((longlong)ppfVar37 + 0xc) = uVar25;
                    uVar23 = *(undefined4 *)(ppfVar42 + 4);
                    uVar24 = *(undefined4 *)((longlong)ppfVar42 + 0x24);
                    uVar25 = *(undefined4 *)(ppfVar42 + 5);
                    uVar30 = *(undefined4 *)((longlong)ppfVar42 + 0x2c);
                    *(undefined4 *)(ppfVar37 + 2) = uVar26;
                    *(undefined4 *)((longlong)ppfVar37 + 0x14) = uVar27;
                    *(undefined4 *)(ppfVar37 + 3) = uVar28;
                    *(undefined4 *)((longlong)ppfVar37 + 0x1c) = uVar29;
                    uVar26 = *(undefined4 *)(ppfVar42 + 6);
                    uVar27 = *(undefined4 *)((longlong)ppfVar42 + 0x34);
                    uVar28 = *(undefined4 *)(ppfVar42 + 7);
                    uVar29 = *(undefined4 *)((longlong)ppfVar42 + 0x3c);
                    *(undefined4 *)(ppfVar37 + 4) = uVar23;
                    *(undefined4 *)((longlong)ppfVar37 + 0x24) = uVar24;
                    *(undefined4 *)(ppfVar37 + 5) = uVar25;
                    *(undefined4 *)((longlong)ppfVar37 + 0x2c) = uVar30;
                    uVar23 = *(undefined4 *)(ppfVar42 + 8);
                    uVar24 = *(undefined4 *)((longlong)ppfVar42 + 0x44);
                    uVar25 = *(undefined4 *)(ppfVar42 + 9);
                    uVar30 = *(undefined4 *)((longlong)ppfVar42 + 0x4c);
                    *(undefined4 *)(ppfVar37 + 6) = uVar26;
                    *(undefined4 *)((longlong)ppfVar37 + 0x34) = uVar27;
                    *(undefined4 *)(ppfVar37 + 7) = uVar28;
                    *(undefined4 *)((longlong)ppfVar37 + 0x3c) = uVar29;
                    uVar26 = *(undefined4 *)(ppfVar42 + 10);
                    uVar27 = *(undefined4 *)((longlong)ppfVar42 + 0x54);
                    uVar28 = *(undefined4 *)(ppfVar42 + 0xb);
                    uVar29 = *(undefined4 *)((longlong)ppfVar42 + 0x5c);
                    *(undefined4 *)(ppfVar37 + 8) = uVar23;
                    *(undefined4 *)((longlong)ppfVar37 + 0x44) = uVar24;
                    *(undefined4 *)(ppfVar37 + 9) = uVar25;
                    *(undefined4 *)((longlong)ppfVar37 + 0x4c) = uVar30;
                    uVar23 = *(undefined4 *)(ppfVar42 + 0xc);
                    uVar24 = *(undefined4 *)((longlong)ppfVar42 + 100);
                    uVar25 = *(undefined4 *)(ppfVar42 + 0xd);
                    uVar30 = *(undefined4 *)((longlong)ppfVar42 + 0x6c);
                    *(undefined4 *)(ppfVar37 + 10) = uVar26;
                    *(undefined4 *)((longlong)ppfVar37 + 0x54) = uVar27;
                    *(undefined4 *)(ppfVar37 + 0xb) = uVar28;
                    *(undefined4 *)((longlong)ppfVar37 + 0x5c) = uVar29;
                    uVar26 = *(undefined4 *)(ppfVar42 + 0xe);
                    uVar27 = *(undefined4 *)((longlong)ppfVar42 + 0x74);
                    uVar28 = *(undefined4 *)(ppfVar42 + 0xf);
                    uVar29 = *(undefined4 *)((longlong)ppfVar42 + 0x7c);
                    *(undefined4 *)(ppfVar37 + 0xc) = uVar23;
                    *(undefined4 *)((longlong)ppfVar37 + 100) = uVar24;
                    *(undefined4 *)(ppfVar37 + 0xd) = uVar25;
                    *(undefined4 *)((longlong)ppfVar37 + 0x6c) = uVar30;
                    *(undefined4 *)(ppfVar37 + 0xe) = uVar26;
                    *(undefined4 *)((longlong)ppfVar37 + 0x74) = uVar27;
                    *(undefined4 *)(ppfVar37 + 0xf) = uVar28;
                    *(undefined4 *)((longlong)ppfVar37 + 0x7c) = uVar29;
                    lVar34 = lVar34 + -1;
                    ppfVar31 = ppfVar37 + 0x10;
                    ppfVar32 = ppfVar42 + 0x10;
                } while (lVar34 != 0);
                uVar23 = *(undefined4 *)((longlong)ppfVar42 + 0x84);
                uVar24 = *(undefined4 *)(ppfVar42 + 0x11);
                uVar25 = *(undefined4 *)((longlong)ppfVar42 + 0x8c);
                uVar26 = *(undefined4 *)(ppfVar42 + 0x12);
                uVar27 = *(undefined4 *)((longlong)ppfVar42 + 0x94);
                uVar28 = *(undefined4 *)(ppfVar42 + 0x13);
                uVar29 = *(undefined4 *)((longlong)ppfVar42 + 0x9c);
                *(undefined4 *)(ppfVar37 + 0x10) = *(undefined4 *)(ppfVar42 + 0x10);
                *(undefined4 *)((longlong)ppfVar37 + 0x84) = uVar23;
                *(undefined4 *)(ppfVar37 + 0x11) = uVar24;
                *(undefined4 *)((longlong)ppfVar37 + 0x8c) = uVar25;
                *(undefined4 *)(ppfVar37 + 0x12) = uVar26;
                *(undefined4 *)((longlong)ppfVar37 + 0x94) = uVar27;
                *(undefined4 *)(ppfVar37 + 0x13) = uVar28;
                *(undefined4 *)((longlong)ppfVar37 + 0x9c) = uVar29;
            }
            else {
                FUN_1407db590(ppfVar31,ppfVar32,0xa0);
            }
        }
        FUN_1408a8970(param_1 + 6,pauVar6,(uint)uVar3,0);
        FUN_1408a8970(param_1 + 0x1c,pauVar1,uVar53,0);
    }
    uVar33 = *(uint *)((longlong)param_1 + 0xc);
    uVar43 = *(uint *)((longlong)param_1 + 0x24);
    uVar47 = uVar4 - uVar33;
    uVar40 = uVar5 - uVar43;
    uVar45 = uVar47;
    if (uVar53 < uVar47) {
        uVar45 = uVar53;
    }
    FUN_1407db590(*param_1 + uVar33,pauVar6,uVar45 << 2);
    if (uVar47 < uVar53) {
        FUN_1407db590(*param_1,*pauVar6 + (ulonglong)uVar47 * 4,(uVar53 - uVar47) * 4);
    }
    uVar45 = uVar40;
    if (uVar53 < uVar40) {
        uVar45 = uVar53;
    }
    FUN_1407db590(param_1[3] + uVar43,pauVar1,uVar45 << 2);
    if (uVar40 < uVar53) {
        FUN_1407db590(param_1[3],*pauVar1 + (ulonglong)uVar40 * 4,(uVar3 - uVar40) * 4);
    }
    *(uint *)((longlong)param_1 + 0xc) = (uVar3 + uVar33) % uVar4;
    *(uint *)((longlong)param_1 + 0x24) = (uVar43 + uVar3) % uVar5;
    return (ulonglong)(uVar43 + uVar3) / (ulonglong)uVar5;
}



void FUN_1408cd650(longlong *param_1,longlong param_2,longlong param_3)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    ushort uVar4;
    int iVar5;
    double dVar6;
    double dVar7;
    uint uVar8;
    uint uVar9;
    int iVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    uint uVar14;
    ulonglong uVar15;
    int iVar16;
    ulonglong uVar17;
    double dVar18;
    undefined extraout_XMM0 [16];
    undefined auVar19 [16];
    float fVar20;
    float fVar21;
    undefined4 *puVar22;
    uint in_stack_ffffffffffffff28;
    longlong local_b8;
    undefined4 local_b0;
    ushort local_a8;
    ushort local_a6;
    longlong local_a0;
    undefined4 local_98;
    ushort local_90;
    ushort local_8e;

    FUN_1408a1640(param_2 + 0x3c0,param_1,*(undefined4 *)(param_2 + 0x3c8));
    uVar4 = *(ushort *)((longlong)param_1 + 0x12);
    if (uVar4 == 0) {
        return;
    }
    uVar8 = *(uint *)(param_1 + 1);
    iVar10 = 0;
    iVar16 = 0;
    if ((uVar8 & 8) != 0) {
        for (; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
            iVar10 = iVar10 + 1;
        }
        lVar11 = *param_1 + (ulonglong)(iVar10 - 1) * (ulonglong)*(ushort *)(param_1 + 2) * 4;
        if ((lVar11 != 0) && (*(char *)(param_2 + 0x3d5) != '\0')) {
            FUN_1407e4830(lVar11,0,(uint)uVar4 * 4);
        }
    }
    uVar8 = *(uint *)(param_1 + 1);
    if (uVar8 == 8) {
        return;
    }
    local_b8 = param_3 + (ulonglong)((uint)uVar4 + (uint)uVar4) * 4;
    local_98 = 3;
    local_b0 = 3;
    uVar13 = uVar8 & 0xfffffff7;
    iVar10 = iVar16;
    for (uVar9 = uVar13; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
        iVar10 = iVar10 + 1;
    }
    iVar5 = *(int *)(param_2 + 0x358);
    uVar9 = 0x3f34fdf4;
    local_a8 = uVar4;
    local_a6 = uVar4;
    local_a0 = param_3;
    local_90 = uVar4;
    local_8e = uVar4;
    if (iVar5 == 0) {
        LAB_1408cd819:
        lVar11 = *param_1;
        LAB_1408cd81c:
        FUN_1407db590(param_3,lVar11,(uint)uVar4 * 4);
    }
    else {
        if (iVar5 == 1) {
            if (((uVar8 & 1) == 0) || ((uVar8 & 4) == 0)) {
                lVar11 = 0;
            }
            else {
                lVar11 = 2;
            }
            lVar11 = *param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar11 * 4;
            goto LAB_1408cd81c;
        }
        if (iVar5 == 2) {
            if (((uVar8 & 1) == 0) || ((uVar8 & 4) == 0)) goto LAB_1408cd819;
            in_stack_ffffffffffffff28 = 0x3f34fdf4;
            FUN_1408a5de0(*param_1,*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,param_3);
        }
        else if (iVar5 == 3) {
            FUN_1407e4830(param_3,0,(uint)uVar4 * 4);
        }
    }
    lVar11 = local_a0 + (ulonglong)local_90 * 4;
    iVar5 = *(int *)(param_2 + 0x35c);
    if (iVar5 == 0) {
        LAB_1408cd8b0:
        iVar10 = (uint)uVar4 * 4;
        if ((uVar8 & 2) == 0) {
            lVar12 = *param_1;
        }
        else {
            lVar12 = *param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 4;
        }
        LAB_1408cd90f:
        FUN_1407db590(lVar11,lVar12,iVar10);
    }
    else {
        if (iVar5 == 1) {
            if (((uVar8 & 2) == 0) || ((uVar8 & 4) == 0)) {
                uVar17 = (ulonglong)(iVar10 - 1U);
                if (1 < iVar10 - 1U) {
                    uVar17 = 1;
                }
            }
            else {
                uVar17 = 2;
            }
            iVar10 = (uint)uVar4 * 4;
            lVar12 = *param_1 + *(ushort *)(param_1 + 2) * uVar17 * 4;
            goto LAB_1408cd90f;
        }
        if (iVar5 == 2) {
            if (((uVar8 & 2) == 0) || ((uVar8 & 4) == 0)) goto LAB_1408cd8b0;
            FUN_1408a5de0(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 4,
                          *param_1 + (ulonglong)*(ushort *)(param_1 + 2) * 8,lVar11);
            in_stack_ffffffffffffff28 = uVar9;
        }
        else if (iVar5 == 3) {
            FUN_1407e4830(lVar11,0,(uint)uVar4 * 4);
        }
    }
    uVar17 = param_2 + 0x360;
    puVar1 = (undefined4 *)(param_2 + 0x380);
    uVar9 = in_stack_ffffffffffffff28 & 0xffffff00 | (uint)*(byte *)(param_2 + 0x3d4);
    puVar2 = (undefined4 *)(param_2 + 0x340);
    puVar22 = puVar2;
    FUN_1408cd160(param_2,&local_a0,&local_b8,puVar1,puVar2,uVar17,uVar9);
    lVar12 = local_b8;
    fVar20 = 1.0;
    fVar21 = 1.0;
    if ((uVar8 & 0x10) != 0) {
        dVar6 = (double)(float)((ulonglong)(double)*(float *)(param_2 + 0x378) >> 0x20);
        dVar18 = ((double)*(float *)(param_2 + 0x378) + 100.0) * 0.005;
        sqrtpd(extraout_XMM0,CONCAT412((int)((ulonglong)dVar6 >> 0x20),CONCAT48(SUB84(dVar6,0),dVar18)))
                ;
        dVar7 = (double)(float)((ulonglong)(double)*(float *)(param_2 + 0x3b8) >> 0x20);
        dVar6 = ((double)*(float *)(param_2 + 0x3b8) + 100.0) * 0.005;
        dVar18 = SQRT(1.0 - dVar18);
        fVar20 = (float)dVar18;
        auVar19 = sqrtpd(ZEXT816((ulonglong)dVar18),
                         CONCAT412((int)((ulonglong)dVar7 >> 0x20),CONCAT48(SUB84(dVar7,0),dVar6)));
        auVar19 = sqrtpd(auVar19,ZEXT816((ulonglong)(1.0 - dVar6)));
        fVar21 = (float)SUB168(auVar19,0);
    }
    lVar3 = local_b8 + (ulonglong)local_a8 * 4;
    uVar14 = (uint)uVar4;
    if (uVar13 == 4) {
        uVar9 = *(uint *)(param_2 + 0x374);
        uVar17 = uVar17 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_2 + 0x3b4);
        puVar22 = (undefined4 *)
                ((ulonglong)puVar22 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_2 + 0x370));
        FUN_1408cbd10(*param_1,local_b8,lVar3);
    }
    else if ((uVar8 & 1) != 0) {
        uVar17 = uVar17 & 0xffffffff00000000;
        uVar15 = (ulonglong)puVar22 & 0xffffffff00000000;
        FUN_1408a6050(*param_1,local_b8);
        uVar17 = uVar17 & 0xffffffff00000000 | (ulonglong)(uint)(fVar21 * *(float *)(param_2 + 0x374));
        puVar22 = (undefined4 *)
                (uVar15 & 0xffffffff00000000 | (ulonglong)(uint)(fVar20 * *(float *)(param_2 + 0x3b4))
                );
        FUN_1408a6050();
        uVar9 = uVar14;
    }
    if (((uVar8 & 0x10) == 0) || ((uVar8 & 0x20) == 0)) goto LAB_1408cdcc8;
    iVar10 = *(int *)(param_2 + 0x358);
    uVar15 = (ulonglong)(uVar13 >> 2) & 0xffffffffffffff01 | 2;
    uVar14 = (uint)uVar15;
    if (iVar10 == 0) {
        LAB_1408cdb5e:
        FUN_1407db590(param_3,*param_1 +
                              (ulonglong)*(ushort *)(param_1 + 2) * ((ulonglong)(uVar13 >> 2) & 1 | 2) *
                              4,(uint)uVar4 * 4,uVar15,puVar22,uVar17,uVar9);
    }
    else if (iVar10 == 1) {
        LAB_1408cdb45:
        FUN_1407e4830(param_3,0,(uint)uVar4 * 4);
    }
    else {
        if (iVar10 == 2) goto LAB_1408cdb5e;
        if (iVar10 == 3) goto LAB_1408cdb45;
    }
    iVar10 = *(int *)(param_2 + 0x35c);
    if (iVar10 == 0) {
        LAB_1408cdbb8:
        FUN_1407db590(lVar11,*param_1 +
                             (ulonglong)((uVar14 & 0xff) + 1) * (ulonglong)*(ushort *)(param_1 + 2) * 4,
                      (uint)uVar4 * 4,uVar15,puVar22,uVar17,uVar9);
    }
    else if (iVar10 == 1) {
        LAB_1408cdba4:
        FUN_1407e4830(lVar11,0,(uint)uVar4 * 4);
    }
    else {
        if (iVar10 == 2) goto LAB_1408cdbb8;
        if (iVar10 == 3) goto LAB_1408cdba4;
    }
    FUN_1408cd160(param_2 + 0x1a0,&local_a0,&local_b8,puVar1,puVar2,param_2 + 0x360,
                  uVar9 & 0xffffff00 | (uint)*(byte *)(param_2 + 0x3d4));
    FUN_1408a6050(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)(uVar14 & 0xff) * 4,
                  lVar12);
    FUN_1408a6050(*param_1 +
                  (ulonglong)((uVar14 & 0xff) + 1) * (ulonglong)*(ushort *)(param_1 + 2) * 4,lVar3);
    LAB_1408cdcc8:
    if (((uVar8 & 4) != 0) && (uVar13 != 4)) {
        if (*(float *)(param_2 + 0x370) == *(float *)(param_2 + 0x3b0)) {
            FUN_1408cdf80();
        }
        else {
            FUN_1408cde30();
        }
    }
    uVar8 = *(uint *)(param_1 + 1);
    if ((uVar8 & 8) != 0) {
        for (; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
            iVar16 = iVar16 + 1;
        }
        if (*param_1 + (ulonglong)(iVar16 - 1) * (ulonglong)*(ushort *)(param_1 + 2) * 4 != 0) {
            if (*(float *)(param_2 + 0x370) == *(float *)(param_2 + 0x3b0)) {
                FUN_1408cdf80();
            }
            else {
                FUN_1408cde30();
            }
        }
    }
    *puVar1 = *puVar2;
    *(undefined4 *)(param_2 + 900) = *(undefined4 *)(param_2 + 0x344);
    *(undefined4 *)(param_2 + 0x388) = *(undefined4 *)(param_2 + 0x348);
    *(undefined4 *)(param_2 + 0x38c) = *(undefined4 *)(param_2 + 0x34c);
    *(undefined4 *)(param_2 + 0x390) = *(undefined4 *)(param_2 + 0x350);
    *(undefined4 *)(param_2 + 0x394) = *(undefined4 *)(param_2 + 0x354);
    *(undefined4 *)(param_2 + 0x398) = *(undefined4 *)(param_2 + 0x358);
    *(undefined4 *)(param_2 + 0x39c) = *(undefined4 *)(param_2 + 0x35c);
    *(undefined4 *)(param_2 + 0x3a0) = *(undefined4 *)(param_2 + 0x360);
    *(undefined4 *)(param_2 + 0x3a4) = *(undefined4 *)(param_2 + 0x364);
    *(undefined4 *)(param_2 + 0x3a8) = *(undefined4 *)(param_2 + 0x368);
    *(undefined4 *)(param_2 + 0x3ac) = *(undefined4 *)(param_2 + 0x36c);
    *(undefined4 *)(param_2 + 0x3b0) = *(undefined4 *)(param_2 + 0x370);
    *(undefined4 *)(param_2 + 0x3b4) = *(undefined4 *)(param_2 + 0x374);
    *(undefined4 *)(param_2 + 0x3b8) = *(undefined4 *)(param_2 + 0x378);
    *(undefined4 *)(param_2 + 0x3bc) = *(undefined4 *)(param_2 + 0x37c);
    return;
}



void FUN_1408cde30(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
    undefined (*pauVar1) [16];
    undefined *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pauVar1 = (undefined (*) [16])(*param_4 + (ulonglong)param_7 * 4);
    puVar2 = *param_4;
    fVar10 = (param_3 - param_2) / (float)(ulonglong)(param_7 & 0xfffffffc);
    fVar12 = fVar10 * 4.0;
    fVar5 = fVar10 + param_2;
    fVar6 = fVar5 + fVar10;
    fVar10 = fVar6 + fVar10;
    pauVar4 = param_4;
    fVar11 = param_2;
    if (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4)) {
        do {
            param_4 = pauVar4[1];
            fVar7 = *(float *)(*pauVar4 + 4) * fVar5;
            fVar8 = *(float *)(*pauVar4 + 8) * fVar6;
            fVar9 = *(float *)(*pauVar4 + 0xc) * fVar10;
            fVar5 = fVar5 + fVar12;
            fVar6 = fVar6 + fVar12;
            fVar10 = fVar10 + fVar12;
            *pauVar4 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,*(float *)*pauVar4 * fVar11)));
            pauVar4 = param_4;
            fVar11 = fVar11 + fVar12;
        } while (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4));
    }
    if (param_4 < pauVar1) {
        lVar3 = (longlong)pauVar1 + (3 - (longlong)param_4);
        fVar11 = (param_3 - param_2) / (float)(ulonglong)param_7;
        if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
            pauVar4 = param_4;
            do {
                param_4 = pauVar4[1];
                *(float *)*pauVar4 = param_2 * *(float *)*pauVar4;
                fVar5 = param_2 + fVar11 + fVar11;
                *(float *)(*pauVar4 + 4) = (param_2 + fVar11) * *(float *)(*pauVar4 + 4);
                fVar6 = fVar5 + fVar11;
                *(float *)(*pauVar4 + 8) = fVar5 * *(float *)(*pauVar4 + 8);
                param_2 = fVar6 + fVar11;
                *(float *)(*pauVar4 + 0xc) = fVar6 * *(float *)(*pauVar4 + 0xc);
                pauVar4 = param_4;
            } while ((longlong)param_4 < (longlong)(pauVar1[-1] + 4));
        }
        for (; param_4 < pauVar1; param_4 = (undefined (*) [16])(*param_4 + 4)) {
            *(float *)*param_4 = param_2 * *(float *)*param_4;
            param_2 = param_2 + fVar11;
        }
    }
    return;
}



void FUN_1408cdf80(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];

    if (param_2 != 1.0) {
        puVar3 = *param_3;
        pauVar1 = (undefined (*) [16])(*param_3 + (ulonglong)param_5 * 4);
        pauVar5 = param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4)) {
            do {
                param_3 = pauVar5[1];
                *pauVar5 = CONCAT412(*(float *)(*pauVar5 + 0xc) * param_2,
                                     CONCAT48(*(float *)(*pauVar5 + 8) * param_2,
                                              CONCAT44(*(float *)(*pauVar5 + 4) * param_2,
                                                       *(float *)*pauVar5 * param_2)));
                pauVar5 = param_3;
            } while (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4));
        }
        if (param_3 < pauVar1) {
            lVar4 = (longlong)pauVar1 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar5 = param_3;
                do {
                    param_3 = pauVar5[1];
                    fVar2 = *(float *)(*pauVar5 + 4);
                    *(float *)*pauVar5 = param_2 * *(float *)*pauVar5;
                    *(float *)(*pauVar5 + 4) = param_2 * fVar2;
                    *(float *)(*pauVar5 + 8) = param_2 * *(float *)(*pauVar5 + 8);
                    *(float *)(*pauVar5 + 0xc) = param_2 * *(float *)(*pauVar5 + 0xc);
                    pauVar5 = param_3;
                } while ((longlong)param_3 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_3 < pauVar1; param_3 = (undefined (*) [16])(*param_3 + 4)) {
                *(float *)*param_3 = param_2 * *(float *)*param_3;
            }
        }
    }
    return;
}



undefined8 * FUN_1408ce070(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x348);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1660;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x800;
        *(undefined4 *)(puVar1 + 4) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x24) = 0x3f800000;
        puVar1[5] = 0x800;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
        FUN_1408ac600(puVar1 + 9);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408ce0e0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409b1660;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x800;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
    param_1[5] = 0x800;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
    FUN_1408ac600();
    return param_1;
}



void FUN_1408ce140(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409b1660;
    FUN_1408ac800();
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



void FUN_1408ce180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    float fVar4;

    *(undefined8 *)(param_1 + 8) = param_4;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    iVar3 = 0;
    for (uVar2 = param_5[1] & 0x3ffff; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    *(undefined4 *)(param_1 + 0x3c) = *param_5;
    FUN_1408ced00(param_4,param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    iVar1 = rand();
    iVar3 = 0;
    fVar4 = (float)((uint)*(float *)(param_1 + 0x20) ^ 0x80000000);
    *(float *)(param_1 + 0x40) =
            (float)(ulonglong)(iVar1 * 0x343fd + 0x269ec3) * 2.328306e-10 *
            (*(float *)(param_1 + 0x20) - fVar4) + fVar4;
    for (uVar2 = param_5[1] & 0x3ffff; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        iVar3 = iVar3 + 1;
    }
    FUN_1408ac810(param_1 + 0x48,param_2,iVar3,*param_5,*(undefined4 *)(param_1 + 0x18),1);
    *(undefined2 *)(param_1 + 0x338) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
    return;
}



undefined8 FUN_1408ce2b0(undefined8 *param_1,longlong *param_2)

{
    FUN_1408aca90(param_1 + 9);
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408ce300(longlong param_1)

{
    FUN_1408acbb0(param_1 + 0x48);
    return 1;
}



void FUN_1408ce340(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
    int iVar1;
    longlong lVar2;
    bool bVar3;
    undefined4 uVar4;
    float fVar5;
    float fVar6;

    *(undefined4 *)(param_1 + 0x340) = 0;
    FUN_1408ced00(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x28)) {
        FUN_1408aca90(param_1 + 0x48,*(undefined8 *)(param_1 + 0x10));
        iVar1 = FUN_1408ac810(param_1 + 0x48,*(undefined8 *)(param_1 + 0x10),
                              *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                              *(undefined4 *)(param_1 + 0x18),1);
        if (iVar1 != 1) {
            FUN_1408ce520(param_1,param_2,param_3,param_4);
            return;
        }
        FUN_1408acbb0(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    }
    fVar5 = 1600.0;
    fVar6 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1c);
    if (((1600.0 <= fVar6) || (fVar5 = 25.0, fVar6 <= 25.0)) || (fVar5 = fVar6, fVar6 != 100.0)) {
        *(undefined2 *)(param_1 + 0x338) = 0;
    }
    else {
        if (*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x2c) != 100.0) {
            *(undefined2 *)(param_1 + 0x338) = 0x100;
        }
        if (*(char *)(param_1 + 0x339) != '\0') {
            *(char *)(param_1 + 0x338) = *(char *)(param_1 + 0x338) + '\x01';
        }
    }
    bVar3 = *(char *)(param_1 + 0x338) == '\b';
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
            (*(longlong **)(param_1 + 0x10),*(int *)(param_1 + 0x328) << 2);
    if (lVar2 == 0) {
        FUN_1408ce520(param_1);
    }
    else {
        FUN_1408acc80(param_1 + 0x48,param_2,param_3,param_4,fVar5,bVar3,lVar2);
        if (bVar3) {
            *(undefined2 *)(param_1 + 0x338) = 0;
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                (*(longlong **)(param_1 + 0x10),lVar2);
        if ((*(int *)(param_4 + 0xc) == 0x2d) || (*(int *)(param_4 + 0xc) == 0x11)) {
            FUN_1408ce940(uVar4,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x24),param_4);
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
            *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
        }
    }
    return;
}



void FUN_1408ce520(undefined8 param_1,longlong *param_2,uint param_3,longlong *param_4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar5 = 0;
    uVar1 = 0;
    uVar8 = *(uint *)(param_2 + 1);
    uVar9 = uVar5;
    uVar7 = uVar1;
    for (uVar2 = uVar8; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar7 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar7;
    }
    uVar2 = *(uint *)(param_4 + 1);
    uVar9 = uVar5;
    uVar3 = uVar2;
    if (uVar2 != 0) {
        do {
            uVar6 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar6;
            uVar3 = uVar3 & uVar3 - 1;
        } while (uVar3 != 0);
        uVar9 = uVar5;
        if (uVar7 < uVar6) {
            for (; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
                uVar1 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar1;
            }
            goto LAB_1408ce59c;
        }
    }
    uVar1 = 0;
    uVar9 = uVar5;
    for (; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar1;
    }
    LAB_1408ce59c:
    uVar8 = (uint)*(ushort *)(param_4 + 2) - (uint)*(ushort *)((longlong)param_4 + 0x12);
    if ((int)(uint)*(ushort *)((longlong)param_2 + 0x12) < (int)uVar8) {
        uVar8 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    }
    if (uVar1 != 0) {
        uVar9 = (ulonglong)uVar1;
        do {
            FUN_1407db590(*param_4 +
                          (*(ushort *)(param_4 + 2) * uVar5 +
                           (ulonglong)*(ushort *)((longlong)param_4 + 0x12)) * 4,
                          *param_2 + (*(ushort *)(param_2 + 2) * uVar5 + (ulonglong)param_3) * 4,uVar8 * 4
            );
            uVar5 = uVar5 + 1;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    *(short *)((longlong)param_4 + 0x12) = *(short *)((longlong)param_4 + 0x12) + (short)uVar8;
    *(short *)((longlong)param_2 + 0x12) = *(short *)((longlong)param_2 + 0x12) - (short)uVar8;
    if ((*(int *)((longlong)param_2 + 0xc) == 0x11) && (*(short *)((longlong)param_2 + 0x12) == 0)) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0x11;
        return;
    }
    uVar4 = 0x2b;
    if (*(short *)((longlong)param_4 + 0x12) == *(short *)(param_4 + 2)) {
        uVar4 = 0x2d;
    }
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar4;
    return;
}



undefined8 FUN_1408ce670(longlong param_1,uint *param_2)

{
    float fVar1;
    float fVar2;

    if (*param_2 == 0) {
        return 0x11;
    }
    FUN_1408ced00(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
    fVar1 = 1600.0;
    fVar2 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1c);
    if ((1600.0 <= fVar2) || (fVar1 = 25.0, fVar2 <= 25.0)) {
        fVar2 = fVar1;
    }
    fVar1 = *(float *)(param_1 + 0x340);
    fVar2 = ((float)(ulonglong)*param_2 * 100.0) / fVar2 + fVar1;
    *(float *)(param_1 + 0x340) = fVar2;
    *param_2 = (uint)(longlong)(fVar2 - fVar1);
    return 0x2d;
}



void FUN_1408ce720(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
    undefined (*pauVar1) [16];
    undefined *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pauVar1 = (undefined (*) [16])(*param_4 + (ulonglong)param_7 * 4);
    puVar2 = *param_4;
    fVar10 = (param_3 - param_2) / (float)(ulonglong)(param_7 & 0xfffffffc);
    fVar12 = fVar10 * 4.0;
    fVar5 = fVar10 + param_2;
    fVar6 = fVar5 + fVar10;
    fVar10 = fVar6 + fVar10;
    pauVar4 = param_4;
    fVar11 = param_2;
    if (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4)) {
        do {
            param_4 = pauVar4[1];
            fVar7 = *(float *)(*pauVar4 + 4) * fVar5;
            fVar8 = *(float *)(*pauVar4 + 8) * fVar6;
            fVar9 = *(float *)(*pauVar4 + 0xc) * fVar10;
            fVar5 = fVar5 + fVar12;
            fVar6 = fVar6 + fVar12;
            fVar10 = fVar10 + fVar12;
            *pauVar4 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,*(float *)*pauVar4 * fVar11)));
            pauVar4 = param_4;
            fVar11 = fVar11 + fVar12;
        } while (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4));
    }
    if (param_4 < pauVar1) {
        lVar3 = (longlong)pauVar1 + (3 - (longlong)param_4);
        fVar11 = (param_3 - param_2) / (float)(ulonglong)param_7;
        if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
            pauVar4 = param_4;
            do {
                param_4 = pauVar4[1];
                *(float *)*pauVar4 = param_2 * *(float *)*pauVar4;
                fVar5 = param_2 + fVar11 + fVar11;
                *(float *)(*pauVar4 + 4) = (param_2 + fVar11) * *(float *)(*pauVar4 + 4);
                fVar6 = fVar5 + fVar11;
                *(float *)(*pauVar4 + 8) = fVar5 * *(float *)(*pauVar4 + 8);
                param_2 = fVar6 + fVar11;
                *(float *)(*pauVar4 + 0xc) = fVar6 * *(float *)(*pauVar4 + 0xc);
                pauVar4 = param_4;
            } while ((longlong)param_4 < (longlong)(pauVar1[-1] + 4));
        }
        for (; param_4 < pauVar1; param_4 = (undefined (*) [16])(*param_4 + 4)) {
            *(float *)*param_4 = param_2 * *(float *)*param_4;
            param_2 = param_2 + fVar11;
        }
    }
    return;
}



void FUN_1408ce870(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];

    if (param_2 != 1.0) {
        puVar3 = *param_3;
        pauVar1 = (undefined (*) [16])(*param_3 + (ulonglong)param_5 * 4);
        pauVar5 = param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4)) {
            do {
                param_3 = pauVar5[1];
                *pauVar5 = CONCAT412(*(float *)(*pauVar5 + 0xc) * param_2,
                                     CONCAT48(*(float *)(*pauVar5 + 8) * param_2,
                                              CONCAT44(*(float *)(*pauVar5 + 4) * param_2,
                                                       *(float *)*pauVar5 * param_2)));
                pauVar5 = param_3;
            } while (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4));
        }
        if (param_3 < pauVar1) {
            lVar4 = (longlong)pauVar1 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar5 = param_3;
                do {
                    param_3 = pauVar5[1];
                    fVar2 = *(float *)(*pauVar5 + 4);
                    *(float *)*pauVar5 = param_2 * *(float *)*pauVar5;
                    *(float *)(*pauVar5 + 4) = param_2 * fVar2;
                    *(float *)(*pauVar5 + 8) = param_2 * *(float *)(*pauVar5 + 8);
                    *(float *)(*pauVar5 + 0xc) = param_2 * *(float *)(*pauVar5 + 0xc);
                    pauVar5 = param_3;
                } while ((longlong)param_3 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_3 < pauVar1; param_3 = (undefined (*) [16])(*param_3 + 4)) {
                *(float *)*param_3 = param_2 * *(float *)*param_3;
            }
        }
    }
    return;
}



void FUN_1408ce940(undefined8 param_1,float param_2,float param_3,longlong *param_4,
                   undefined8 param_5,undefined8 param_6,char param_7)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    uVar1 = uVar3;
    for (uVar2 = *(uint *)(param_4 + 1); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
        uVar1 = (ulonglong)((int)uVar1 + 1);
    }
    if ((param_7 == '\0') && ((*(uint *)(param_4 + 1) & 8) != 0)) {
        uVar1 = (ulonglong)((int)uVar1 - 1);
    }
    if (param_3 == param_2) {
        if ((int)uVar1 != 0) {
            do {
                param_1 = FUN_1408ce870(param_1,param_2,*param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
                uVar3 = uVar3 + 1;
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
    }
    else if ((int)uVar1 != 0) {
        do {
            param_1 = FUN_1408ce720(param_1,param_2,param_3,
                                    *param_4 + *(ushort *)(param_4 + 2) * uVar3 * 4);
            uVar3 = uVar3 + 1;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    return;
}



undefined8 * FUN_1408cea10(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409b1660;
    FUN_1408ac800();
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1408cea60(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x18);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b16b0;
        puVar1[1] = 0x800;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
        return;
    }
    return;
}



undefined8 * FUN_1408ceb40(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,0x18);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b16b0;
        puVar1[1] = 0x800;
        *(undefined4 *)(puVar1 + 2) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408cebe0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408cec20(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;

    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0xc) = param_2[1];
    *(undefined4 *)(param_1 + 0x10) = param_2[2];
    uVar1 = FUN_1408fbfc0(0x41200000,(float)param_2[3] * 0.05);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    return 1;
}



int FUN_1408cec70(longlong param_1,short param_2,float *param_3)

{
    int iVar1;
    undefined4 uVar2;

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    iVar1 = (int)param_2;
    if (param_2 == 0) {
        *(float *)(param_1 + 8) = *param_3;
    }
    else {
        if (iVar1 == 1) {
            *(float *)(param_1 + 0xc) = *param_3;
            return 1;
        }
        if (iVar1 + -2 == 0) {
            uVar2 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
            return 1;
        }
        if (iVar1 == 3) {
            *(float *)(param_1 + 0x10) = *param_3;
            return iVar1 + -2;
        }
    }
    return 1;
}



void FUN_1408ced00(longlong param_1,undefined4 *param_2)

{
    *param_2 = *(undefined4 *)(param_1 + 8);
    param_2[1] = *(undefined4 *)(param_1 + 0xc);
    param_2[2] = *(undefined4 *)(param_1 + 0x10);
    param_2[3] = *(undefined4 *)(param_1 + 0x14);
    return;
}



undefined8 * FUN_1408ced60(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x108);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409b16f0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xbc) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x104) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
        *(undefined8 *)((longlong)puVar1 + 100) = 0;
        *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8
FUN_1408ceed0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
              undefined4 *param_5)

{
    undefined4 uVar1;
    uint uVar2;

    *(longlong *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_4 + 0x24);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_4 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_4 + 0x2c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x30);
    FUN_1408d1800(param_4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x40);
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar2 = param_5[1] & 0x3ffff;
    if ((*(char *)(param_1 + 0x40) == '\0') && (((byte)uVar2 & 7) == 7)) {
        uVar2 = param_5[1] & 0x3fffb;
    }
    if (*(char *)(param_1 + 0x41) == '\0') {
        uVar2 = uVar2 & 0xfffffff7;
    }
    FUN_1408d1290(param_1 + 0x74,uVar2,*(undefined4 *)(param_1 + 0x70),param_1 + 0x1c);
    return 1;
}



undefined8 FUN_1408cefe0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



void FUN_1408cf050(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    bool bVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar6;
    ulonglong uVar5;

    if (*(int *)(param_1 + 0x104) != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 8);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0xc);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x10);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x14);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x18);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x24);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x2c);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 0x30);
        FUN_1408d1800();
        if ((*(char *)(param_1 + 0x42) != '\0') &&
            ((*(char *)(param_1 + 0x6d) != *(char *)(param_1 + 0x41) ||
              (*(char *)(param_1 + 0x6c) != *(char *)(param_1 + 0x40))))) {
            uVar3 = *(uint *)(param_2 + 1);
            if ((*(char *)(param_1 + 0x40) == '\0') && (((byte)uVar3 & 7) == 7)) {
                uVar3 = uVar3 & 0xfffffffb;
            }
            if (*(char *)(param_1 + 0x41) == '\0') {
                uVar3 = uVar3 & 0xfffffff7;
            }
            FUN_1408d1290(param_1 + 0x74,uVar3,*(undefined4 *)(param_1 + 0x70),param_1 + 0x1c);
        }
        if (*(char *)(param_1 + 0x3c) != '\0') {
            FUN_1408d0ff0(param_1 + 0x74,*(undefined4 *)(param_1 + 0x70),param_1 + 0x1c);
        }
        uVar3 = *(uint *)(param_2 + 1);
        if (*(char *)(param_1 + 0x41) == '\0') {
            uVar3 = uVar3 & 0xfffffff7;
        }
        if ((*(char *)(param_1 + 0x40) == '\0') && (((byte)uVar3 & 7) == 7)) {
            bVar2 = true;
        }
        else {
            bVar2 = false;
        }
        uVar6 = 0;
        uVar4 = 0;
        uVar5 = uVar6;
        for (; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        }
        if (uVar4 != 0) {
            do {
                if ((!bVar2) || ((int)uVar6 != 2)) {
                    FUN_1408cf350(param_1 + 0x74 + uVar6 * 0x18,
                                  *param_2 + *(ushort *)(param_2 + 2) * uVar6 * 4);
                }
                uVar3 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar3;
            } while (uVar3 < uVar4);
        }
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x40);
    }
    return;
}



void FUN_1408cf350(float *param_1,float *param_2,ulonglong param_3,undefined8 param_4,float param_5,
                   float param_6,float *param_7)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    uint uVar6;
    longlong lVar7;
    float *pfVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    float *pfVar12;
    float *pfVar13;
    float extraout_XMM0_Da;
    float fVar14;
    float fVar15;
    undefined auVar16 [16];
    float in_XMM3_Da;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    undefined auVar17 [16];

    fVar2 = param_1[5];
    fVar25 = param_1[3];
    fVar3 = param_1[4];
    fVar15 = *param_1;
    fVar4 = param_1[2];
    fVar5 = param_1[1];
    param_3 = param_3 & 0xffffffff;
    pfVar1 = param_2 + param_3;
    fVar29 = (in_XMM3_Da - param_5) / (float)param_3;
    fVar28 = fVar3;
    if (fVar3 <= 1e-08) {
        fVar28 = 1e-08;
    }
    iVar11 = (int)param_3;
    if (fVar2 == 0.0) {
        if (param_2 < pfVar1) {
            fVar14 = 1.0 / fVar28;
            do {
                auVar16 = ZEXT416((uint)(1.570796 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar18 = SUB164(auVar16,0) * fVar14;
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar18);
                iVar9 = (int)fVar18;
                if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar18)) {
                    uVar6 = movmskps((int)register0x00000020,
                                     CONCAT88(SUB168(auVar16 >> 0x40,0),
                                              SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar9 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                pfVar13 = pfVar1;
                if (param_2 + iVar9 < pfVar1) {
                    pfVar13 = param_2 + iVar9;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    pfVar8 = (float *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)pfVar8) {
                        pfVar8 = pfVar13 + -3;
                        pfVar12 = param_2;
                        do {
                            fVar25 = fVar25 + fVar28;
                            param_5 = param_5 + fVar29;
                            fVar18 = fVar25 * fVar25;
                            fVar26 = fVar25 + fVar28;
                            fVar20 = fVar26 * fVar26;
                            fVar21 = param_5 + fVar29;
                            fVar23 = param_7[1] + *param_7 + param_7[1];
                            *pfVar12 = (((((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) * fVar18 +
                                          0.9999966) * fVar25 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                       (param_7[1] + *param_7) * *pfVar12;
                            fVar19 = param_7[1] + fVar23;
                            fVar27 = fVar26 + fVar28;
                            fVar18 = fVar27 * fVar27;
                            fVar22 = fVar21 + fVar29;
                            fVar25 = pfVar12[1];
                            fVar24 = param_7[1] + fVar19;
                            *param_7 = fVar24;
                            pfVar12[1] = (((((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) * fVar20
                                            + 0.9999966) * fVar26 + 1.0) * 0.5 * fVar21 + (1.0 - fVar21)) * fVar23
                                         * fVar25;
                            fVar25 = fVar27 + fVar28;
                            fVar20 = fVar25 * fVar25;
                            param_5 = fVar22 + fVar29;
                            pfVar12[2] = (((((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) * fVar18
                                            + 0.9999966) * fVar27 + 1.0) * 0.5 * fVar22 + (1.0 - fVar22)) * fVar19
                                         * pfVar12[2];
                            param_2 = pfVar12 + 4;
                            pfVar12[3] = (((((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) * fVar20
                                            + 0.9999966) * fVar25 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                         fVar24 * pfVar12[3];
                            pfVar12 = param_2;
                        } while ((longlong)param_2 < (longlong)pfVar8);
                    }
                    iVar9 = (int)pfVar8;
                    for (; param_2 < pfVar13; param_2 = param_2 + 1) {
                        fVar25 = fVar25 + fVar28;
                        fVar18 = *param_7;
                        param_5 = param_5 + fVar29;
                        fVar20 = fVar25 * fVar25;
                        *param_7 = param_7[1] + fVar18;
                        *param_2 = (((((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) * fVar20 +
                                      0.9999966) * fVar25 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                   (param_7[1] + fVar18) * *param_2;
                    }
                }
                auVar16 = ZEXT416((uint)(3.141593 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar18 = SUB164(auVar16,0) * fVar14;
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar18);
                iVar10 = (int)fVar18;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar18)) {
                    uVar6 = movmskps(iVar9,CONCAT88(SUB168(auVar16 >> 0x40,0),
                                                    SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                           (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar10 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                pfVar13 = pfVar1;
                if (param_2 + iVar9 < pfVar1) {
                    pfVar13 = param_2 + iVar9;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    pfVar8 = (float *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)pfVar8) {
                        pfVar8 = pfVar13 + -3;
                        pfVar12 = param_2;
                        do {
                            fVar23 = 3.141593 - (fVar25 + fVar28);
                            param_5 = param_5 + fVar29;
                            fVar18 = fVar23 * fVar23;
                            fVar25 = fVar25 + fVar28 + fVar28;
                            fVar24 = 3.141593 - fVar25;
                            fVar25 = fVar25 + fVar28;
                            fVar20 = fVar24 * fVar24;
                            fVar22 = param_5 + fVar29;
                            fVar19 = param_7[1] + *param_7 + param_7[1];
                            *pfVar12 = (((((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) * fVar18 +
                                          0.9999966) * fVar23 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                       (param_7[1] + *param_7) * *pfVar12;
                            fVar21 = param_7[1] + fVar19;
                            fVar23 = 3.141593 - fVar25;
                            fVar25 = fVar25 + fVar28;
                            fVar18 = fVar23 * fVar23;
                            fVar26 = fVar22 + fVar29;
                            pfVar12[1] = (((((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) * fVar20
                                            + 0.9999966) * fVar24 + 1.0) * 0.5 * fVar22 + (1.0 - fVar22)) * fVar19
                                         * pfVar12[1];
                            fVar20 = 3.141593 - fVar25;
                            param_5 = fVar26 + fVar29;
                            pfVar12[2] = (((((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) * fVar18
                                            + 0.9999966) * fVar23 + 1.0) * 0.5 * fVar26 + (1.0 - fVar26)) * fVar21
                                         * pfVar12[2];
                            param_2 = pfVar12 + 4;
                            fVar21 = param_7[1] + fVar21;
                            fVar18 = fVar20 * fVar20;
                            *param_7 = fVar21;
                            pfVar12[3] = (((((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) * fVar18
                                            + 0.9999966) * fVar20 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                         fVar21 * pfVar12[3];
                            pfVar12 = param_2;
                        } while ((longlong)param_2 < (longlong)pfVar8);
                    }
                    iVar9 = (int)pfVar8;
                    for (; param_2 < pfVar13; param_2 = param_2 + 1) {
                        fVar25 = fVar25 + fVar28;
                        fVar18 = *param_7;
                        fVar23 = 3.141593 - fVar25;
                        param_5 = param_5 + fVar29;
                        fVar20 = fVar23 * fVar23;
                        *param_7 = param_7[1] + fVar18;
                        *param_2 = (((((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) * fVar20 +
                                      0.9999966) * fVar23 + 1.0) * 0.5 * param_5 + (1.0 - param_5)) *
                                   (param_7[1] + fVar18) * *param_2;
                    }
                }
                auVar16 = ZEXT416((uint)(4.712389 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar18 = SUB164(auVar16,0) * fVar14;
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar18);
                iVar10 = (int)fVar18;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar18)) {
                    uVar6 = movmskps(iVar9,CONCAT88(SUB168(auVar16 >> 0x40,0),
                                                    SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                           (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar10 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                pfVar13 = pfVar1;
                if (param_2 + iVar9 < pfVar1) {
                    pfVar13 = param_2 + iVar9;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    pfVar8 = (float *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)pfVar8) {
                        pfVar8 = pfVar13 + -3;
                        pfVar12 = param_2;
                        do {
                            fVar20 = (fVar25 + fVar28) - 3.141593;
                            fVar18 = fVar20 * fVar20;
                            param_5 = param_5 + fVar29;
                            fVar23 = fVar25 + fVar28 + fVar28;
                            fVar25 = fVar23 + fVar28;
                            fVar23 = fVar23 - 3.141593;
                            fVar21 = param_5 + fVar29;
                            fVar24 = param_7[1] + *param_7 + param_7[1];
                            fVar19 = param_7[1] + fVar24;
                            *pfVar12 = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5)) *
                                       (param_7[1] + *param_7) * *pfVar12;
                            fVar18 = fVar23 * fVar23;
                            fVar20 = fVar25 - 3.141593;
                            param_5 = fVar21 + fVar29;
                            pfVar12[1] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                  fVar18 + 0.9999966) * fVar23) * 0.5 * fVar21 + (1.0 - fVar21)) *
                                         fVar24 * pfVar12[1];
                            fVar18 = fVar20 * fVar20;
                            pfVar12[2] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                  fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5))
                                         * fVar19 * pfVar12[2];
                            fVar25 = fVar25 + fVar28;
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar12 + 4;
                            fVar20 = fVar25 - 3.141593;
                            fVar19 = param_7[1] + fVar19;
                            fVar18 = fVar20 * fVar20;
                            *param_7 = fVar19;
                            pfVar12[3] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                  fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5))
                                         * fVar19 * pfVar12[3];
                            pfVar12 = param_2;
                        } while ((longlong)param_2 < (longlong)pfVar8);
                    }
                    iVar9 = (int)pfVar8;
                    for (; param_2 < pfVar13; param_2 = param_2 + 1) {
                        fVar25 = fVar25 + fVar28;
                        fVar18 = *param_7;
                        fVar23 = fVar25 - 3.141593;
                        fVar20 = fVar23 * fVar23;
                        param_5 = param_5 + fVar29;
                        *param_7 = param_7[1] + fVar18;
                        *param_2 = ((1.0 - (((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) *
                                            fVar20 + 0.9999966) * fVar23) * 0.5 * param_5 + (1.0 - param_5)) *
                                   (param_7[1] + fVar18) * *param_2;
                    }
                }
                auVar16 = ZEXT416((uint)(6.283185 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar18 = SUB164(auVar16,0) * fVar14;
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar18);
                iVar10 = (int)fVar18;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar18)) {
                    uVar6 = movmskps(iVar9,CONCAT88(SUB168(auVar16 >> 0x40,0),
                                                    SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                           (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar10 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                register0x00000020 = (BADSPACEBASE *)(longlong)iVar9;
                pfVar13 = pfVar1;
                if (param_2 + (longlong)register0x00000020 < pfVar1) {
                    pfVar13 = param_2 + (longlong)register0x00000020;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    register0x00000020 =
                            (BADSPACEBASE *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)register0x00000020) {
                        register0x00000020 = (BADSPACEBASE *)(pfVar13 + -3);
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            fVar20 = 6.283185 - (fVar25 + fVar28);
                            fVar25 = fVar25 + fVar28 + fVar28;
                            fVar18 = fVar20 * fVar20;
                            fVar23 = 6.283185 - fVar25;
                            fVar25 = fVar25 + fVar28;
                            fVar21 = param_5 + fVar29;
                            fVar24 = param_7[1] + *param_7 + param_7[1];
                            fVar19 = param_7[1] + fVar24;
                            *pfVar8 = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                               fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5)) *
                                      (param_7[1] + *param_7) * *pfVar8;
                            fVar18 = fVar23 * fVar23;
                            fVar20 = 6.283185 - fVar25;
                            param_5 = fVar21 + fVar29;
                            pfVar8[1] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                 fVar18 + 0.9999966) * fVar23) * 0.5 * fVar21 + (1.0 - fVar21)) *
                                        fVar24 * pfVar8[1];
                            fVar18 = fVar20 * fVar20;
                            pfVar8[2] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                 fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5))
                                        * fVar19 * pfVar8[2];
                            fVar25 = fVar25 + fVar28;
                            param_2 = pfVar8 + 4;
                            fVar20 = 6.283185 - fVar25;
                            fVar19 = param_7[1] + fVar19;
                            fVar18 = fVar20 * fVar20;
                            param_5 = param_5 + fVar29;
                            *param_7 = fVar19;
                            pfVar8[3] = ((1.0 - (((0.008306325 - fVar18 * 0.0001836365) * fVar18 - 0.1666483) *
                                                 fVar18 + 0.9999966) * fVar20) * 0.5 * param_5 + (1.0 - param_5))
                                        * fVar19 * pfVar8[3];
                            pfVar8 = param_2;
                        } while ((longlong)param_2 < (longlong)register0x00000020);
                    }
                    for (; param_2 < pfVar13; param_2 = param_2 + 1) {
                        fVar25 = fVar25 + fVar28;
                        fVar18 = *param_7;
                        fVar23 = 6.283185 - fVar25;
                        param_5 = param_5 + fVar29;
                        fVar20 = fVar23 * fVar23;
                        *param_7 = param_7[1] + fVar18;
                        *param_2 = ((1.0 - (((0.008306325 - fVar20 * 0.0001836365) * fVar20 - 0.1666483) *
                                            fVar20 + 0.9999966) * fVar23) * 0.5 * param_5 + (1.0 - param_5)) *
                                   (param_7[1] + fVar18) * *param_2;
                    }
                }
                if (6.283185 <= fVar25) {
                    fVar25 = fVar25 + -6.283185;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 1.401298e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar16 = ZEXT416((uint)(0.5 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
                iVar9 = (int)fVar14;
                if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
                    uVar6 = movmskps((int)register0x00000020,
                                     CONCAT88(SUB168(auVar16 >> 0x40,0),
                                              SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar9 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                pfVar13 = pfVar1;
                if (param_2 + iVar9 < pfVar1) {
                    pfVar13 = param_2 + iVar9;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    pfVar8 = (float *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)pfVar8) {
                        fVar14 = param_7[1];
                        pfVar8 = pfVar13 + -3;
                        pfVar12 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar12 + 4;
                            fVar23 = fVar25 + fVar28 + fVar28;
                            fVar15 = (fVar25 + fVar28) * 2.0 * param_5 * fVar5 - fVar15 * fVar4;
                            fVar20 = param_5 + fVar29;
                            fVar24 = fVar23 + fVar28;
                            fVar18 = fVar14 + *param_7 + fVar14;
                            *pfVar12 = ((1.0 - param_5) + fVar15) * (fVar14 + *param_7) * *pfVar12;
                            fVar25 = fVar24 + fVar28;
                            fVar15 = fVar23 * 2.0 * fVar20 * fVar5 - fVar4 * fVar15;
                            fVar23 = fVar20 + fVar29;
                            pfVar12[1] = ((1.0 - fVar20) + fVar15) * fVar18 * pfVar12[1];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar24 * 2.0 * fVar23 * fVar5 - fVar4 * fVar15;
                            param_5 = fVar23 + fVar29;
                            pfVar12[2] = ((1.0 - fVar23) + fVar15) * fVar18 * pfVar12[2];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar25 * 2.0 * param_5 * fVar5 - fVar4 * fVar15;
                            *param_7 = fVar18;
                            pfVar12[3] = ((1.0 - param_5) + fVar15) * fVar18 * pfVar12[3];
                            pfVar12 = param_2;
                        } while ((longlong)param_2 < (longlong)pfVar8);
                    }
                    iVar9 = (int)pfVar8;
                    if (param_2 < pfVar13) {
                        fVar14 = param_7[1];
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            fVar25 = fVar25 + fVar28;
                            param_2 = pfVar8 + 1;
                            fVar18 = *param_7;
                            fVar15 = fVar25 * 2.0 * param_5 * fVar5 - fVar15 * fVar4;
                            *param_7 = fVar14 + fVar18;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                            pfVar8 = param_2;
                        } while (param_2 < pfVar13);
                    }
                }
                auVar16 = ZEXT416((uint)(1.0 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
                iVar10 = (int)fVar14;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar14)) {
                    uVar6 = movmskps(iVar9,CONCAT88(SUB168(auVar16 >> 0x40,0),
                                                    SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                           (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar10 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                register0x00000020 = (BADSPACEBASE *)(longlong)iVar9;
                pfVar13 = pfVar1;
                if (param_2 + (longlong)register0x00000020 < pfVar1) {
                    pfVar13 = param_2 + (longlong)register0x00000020;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    register0x00000020 =
                            (BADSPACEBASE *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)register0x00000020) {
                        fVar14 = param_7[1];
                        register0x00000020 = (BADSPACEBASE *)(pfVar13 + -3);
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar8 + 4;
                            fVar23 = fVar25 + fVar28 + fVar28;
                            fVar15 = (1.0 - (fVar25 + fVar28)) * 2.0 * param_5 * fVar5 - fVar15 * fVar4;
                            fVar20 = param_5 + fVar29;
                            fVar24 = fVar23 + fVar28;
                            fVar18 = fVar14 + *param_7 + fVar14;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + *param_7) * *pfVar8;
                            fVar25 = fVar24 + fVar28;
                            fVar15 = (1.0 - fVar23) * 2.0 * fVar20 * fVar5 - fVar4 * fVar15;
                            fVar23 = fVar20 + fVar29;
                            pfVar8[1] = ((1.0 - fVar20) + fVar15) * fVar18 * pfVar8[1];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = (1.0 - fVar24) * 2.0 * fVar23 * fVar5 - fVar4 * fVar15;
                            param_5 = fVar23 + fVar29;
                            pfVar8[2] = ((1.0 - fVar23) + fVar15) * fVar18 * pfVar8[2];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = (1.0 - fVar25) * 2.0 * param_5 * fVar5 - fVar4 * fVar15;
                            *param_7 = fVar18;
                            pfVar8[3] = ((1.0 - param_5) + fVar15) * fVar18 * pfVar8[3];
                            pfVar8 = param_2;
                        } while ((longlong)param_2 < (longlong)register0x00000020);
                    }
                    if (param_2 < pfVar13) {
                        fVar14 = param_7[1];
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            fVar25 = fVar25 + fVar28;
                            param_2 = pfVar8 + 1;
                            fVar18 = *param_7;
                            fVar15 = (1.0 - fVar25) * 2.0 * param_5 * fVar5 - fVar15 * fVar4;
                            *param_7 = fVar14 + fVar18;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                            pfVar8 = param_2;
                        } while (param_2 < pfVar13);
                    }
                }
                if (1.0 <= fVar25) {
                    fVar25 = fVar25 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 2.802597e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar16 = ZEXT416((uint)(param_6 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
                iVar9 = (int)fVar14;
                if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
                    uVar6 = movmskps((int)register0x00000020,
                                     CONCAT88(SUB168(auVar16 >> 0x40,0),
                                              SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar9 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                pfVar13 = pfVar1;
                if (param_2 + iVar9 < pfVar1) {
                    pfVar13 = param_2 + iVar9;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    pfVar8 = (float *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)pfVar8) {
                        fVar14 = param_7[1];
                        pfVar8 = pfVar13 + -3;
                        pfVar12 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar12 + 4;
                            fVar15 = fVar5 * param_5 - fVar15 * fVar4;
                            fVar20 = param_5 + fVar29;
                            fVar18 = fVar14 + *param_7 + fVar14;
                            *pfVar12 = ((1.0 - param_5) + fVar15) * (fVar14 + *param_7) * *pfVar12;
                            fVar25 = fVar25 + fVar28 + fVar28 + fVar28 + fVar28;
                            fVar15 = fVar5 * fVar20 - fVar4 * fVar15;
                            fVar23 = fVar20 + fVar29;
                            pfVar12[1] = ((1.0 - fVar20) + fVar15) * fVar18 * pfVar12[1];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar5 * fVar23 - fVar4 * fVar15;
                            param_5 = fVar23 + fVar29;
                            pfVar12[2] = ((1.0 - fVar23) + fVar15) * fVar18 * pfVar12[2];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar5 * param_5 - fVar4 * fVar15;
                            *param_7 = fVar18;
                            pfVar12[3] = ((1.0 - param_5) + fVar15) * fVar18 * pfVar12[3];
                            pfVar12 = param_2;
                        } while ((longlong)param_2 < (longlong)pfVar8);
                    }
                    iVar9 = (int)pfVar8;
                    if (param_2 < pfVar13) {
                        fVar14 = param_7[1];
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar8 + 1;
                            fVar25 = fVar25 + fVar28;
                            fVar18 = *param_7;
                            fVar15 = fVar5 * param_5 - fVar15 * fVar4;
                            *param_7 = fVar14 + fVar18;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                            pfVar8 = param_2;
                        } while (param_2 < pfVar13);
                    }
                }
                auVar16 = ZEXT416((uint)(1.0 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
                iVar10 = (int)fVar14;
                if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar14)) {
                    uVar6 = movmskps(iVar9,CONCAT88(SUB168(auVar16 >> 0x40,0),
                                                    SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                           (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar10 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                register0x00000020 = (BADSPACEBASE *)(longlong)iVar9;
                pfVar13 = pfVar1;
                if (param_2 + (longlong)register0x00000020 < pfVar1) {
                    pfVar13 = param_2 + (longlong)register0x00000020;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    register0x00000020 =
                            (BADSPACEBASE *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)register0x00000020) {
                        fVar14 = param_7[1];
                        register0x00000020 = (BADSPACEBASE *)(pfVar13 + -3);
                        fVar18 = fVar5 * 0.0;
                        pfVar8 = param_2;
                        do {
                            fVar15 = fVar18 - fVar15 * fVar4;
                            param_2 = pfVar8 + 4;
                            fVar23 = param_5 + fVar29 + fVar29;
                            fVar20 = fVar14 + *param_7 + fVar14;
                            *pfVar8 = ((1.0 - (param_5 + fVar29)) + fVar15) * (fVar14 + *param_7) * *pfVar8;
                            fVar15 = fVar18 - fVar4 * fVar15;
                            fVar25 = fVar25 + fVar28 + fVar28 + fVar28 + fVar28;
                            fVar24 = fVar23 + fVar29;
                            pfVar8[1] = ((1.0 - fVar23) + fVar15) * fVar20 * pfVar8[1];
                            fVar20 = fVar14 + fVar20;
                            fVar15 = fVar18 - fVar4 * fVar15;
                            param_5 = fVar24 + fVar29;
                            pfVar8[2] = ((1.0 - fVar24) + fVar15) * fVar20 * pfVar8[2];
                            fVar20 = fVar14 + fVar20;
                            fVar15 = fVar18 - fVar4 * fVar15;
                            *param_7 = fVar20;
                            pfVar8[3] = ((1.0 - param_5) + fVar15) * fVar20 * pfVar8[3];
                            pfVar8 = param_2;
                        } while ((longlong)param_2 < (longlong)register0x00000020);
                    }
                    if (param_2 < pfVar13) {
                        fVar14 = param_7[1];
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar8 + 1;
                            fVar25 = fVar25 + fVar28;
                            fVar18 = *param_7;
                            fVar15 = fVar5 * 0.0 - fVar15 * fVar4;
                            *param_7 = fVar14 + fVar18;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                            pfVar8 = param_2;
                        } while (param_2 < pfVar13);
                    }
                }
                if (1.0 <= fVar25) {
                    fVar25 = fVar25 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if (fVar2 == 4.203895e-45) {
        if (param_2 < pfVar1) {
            do {
                auVar16 = ZEXT416((uint)(1.0 - fVar25)) & (undefined  [16])0xffffffffffffffff;
                fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
                auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
                iVar9 = (int)fVar14;
                if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
                    uVar6 = movmskps((int)register0x00000020,
                                     CONCAT88(SUB168(auVar16 >> 0x40,0),
                                              SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar17 = ZEXT416((uint)(float)(iVar9 + (uVar6 & 1 ^ 1)));
                }
                iVar9 = (int)SUB164(auVar17,0);
                if (iVar9 < 0) {
                    iVar9 = -1;
                }
                else if (iVar11 < iVar9) {
                    iVar9 = iVar11;
                }
                register0x00000020 = (BADSPACEBASE *)(longlong)iVar9;
                pfVar13 = pfVar1;
                if (param_2 + (longlong)register0x00000020 < pfVar1) {
                    pfVar13 = param_2 + (longlong)register0x00000020;
                }
                if (param_2 < pfVar13) {
                    lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                    register0x00000020 =
                            (BADSPACEBASE *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                    if (3 < (longlong)register0x00000020) {
                        fVar14 = param_7[1];
                        register0x00000020 = (BADSPACEBASE *)(pfVar13 + -3);
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            param_2 = pfVar8 + 4;
                            fVar23 = fVar25 + fVar28 + fVar28;
                            fVar15 = (fVar25 + fVar28) * param_5 * fVar5 - fVar15 * fVar4;
                            fVar20 = param_5 + fVar29;
                            fVar24 = fVar23 + fVar28;
                            fVar18 = fVar14 + *param_7 + fVar14;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + *param_7) * *pfVar8;
                            fVar25 = fVar24 + fVar28;
                            fVar15 = fVar23 * fVar20 * fVar5 - fVar4 * fVar15;
                            fVar23 = fVar20 + fVar29;
                            pfVar8[1] = ((1.0 - fVar20) + fVar15) * fVar18 * pfVar8[1];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar24 * fVar23 * fVar5 - fVar4 * fVar15;
                            param_5 = fVar23 + fVar29;
                            pfVar8[2] = ((1.0 - fVar23) + fVar15) * fVar18 * pfVar8[2];
                            fVar18 = fVar14 + fVar18;
                            fVar15 = fVar25 * param_5 * fVar5 - fVar4 * fVar15;
                            *param_7 = fVar18;
                            pfVar8[3] = ((1.0 - param_5) + fVar15) * fVar18 * pfVar8[3];
                            pfVar8 = param_2;
                        } while ((longlong)param_2 < (longlong)register0x00000020);
                    }
                    if (param_2 < pfVar13) {
                        fVar14 = param_7[1];
                        pfVar8 = param_2;
                        do {
                            param_5 = param_5 + fVar29;
                            fVar25 = fVar25 + fVar28;
                            param_2 = pfVar8 + 1;
                            fVar18 = *param_7;
                            fVar15 = fVar25 * param_5 * fVar5 - fVar15 * fVar4;
                            *param_7 = fVar14 + fVar18;
                            *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                            pfVar8 = param_2;
                        } while (param_2 < pfVar13);
                    }
                }
                if (1.0 <= fVar25) {
                    fVar25 = fVar25 - 1.0;
                }
            } while (param_2 < pfVar1);
        }
    }
    else if ((fVar2 == 5.605194e-45) && (param_2 < pfVar1)) {
        do {
            auVar16 = ZEXT416((uint)(1.0 - fVar25)) & (undefined  [16])0xffffffffffffffff;
            fVar14 = SUB164(auVar16,0) * (1.0 / fVar28);
            auVar17 = CONCAT124(SUB1612(auVar16 >> 0x20,0),fVar14);
            iVar9 = (int)fVar14;
            if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar14)) {
                uVar6 = movmskps((int)register0x00000020,
                                 CONCAT88(SUB168(auVar16 >> 0x40,0),
                                          SUB168(auVar17,0) | SUB168(auVar17,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
                auVar17 = ZEXT416((uint)(float)(iVar9 + (uVar6 & 1 ^ 1)));
            }
            iVar9 = (int)SUB164(auVar17,0);
            if (iVar9 < 0) {
                iVar9 = -1;
            }
            else if (iVar11 < iVar9) {
                iVar9 = iVar11;
            }
            register0x00000020 = (BADSPACEBASE *)(longlong)iVar9;
            pfVar13 = pfVar1;
            if (param_2 + (longlong)register0x00000020 < pfVar1) {
                pfVar13 = param_2 + (longlong)register0x00000020;
            }
            if (param_2 < pfVar13) {
                lVar7 = (longlong)pfVar13 + (3 - (longlong)param_2);
                register0x00000020 =
                        (BADSPACEBASE *)((longlong)(lVar7 + (ulonglong)((uint)(lVar7 >> 0x3f) & 3)) >> 2);
                if (3 < (longlong)register0x00000020) {
                    fVar14 = param_7[1];
                    register0x00000020 = (BADSPACEBASE *)(pfVar13 + -3);
                    pfVar8 = param_2;
                    do {
                        param_5 = param_5 + fVar29;
                        param_2 = pfVar8 + 4;
                        fVar23 = fVar25 + fVar28 + fVar28;
                        fVar15 = (1.0 - (fVar25 + fVar28)) * param_5 * fVar5 - fVar15 * fVar4;
                        fVar20 = param_5 + fVar29;
                        fVar24 = fVar23 + fVar28;
                        fVar18 = fVar14 + *param_7 + fVar14;
                        *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + *param_7) * *pfVar8;
                        fVar25 = fVar24 + fVar28;
                        fVar15 = (1.0 - fVar23) * fVar20 * fVar5 - fVar4 * fVar15;
                        fVar23 = fVar20 + fVar29;
                        pfVar8[1] = ((1.0 - fVar20) + fVar15) * fVar18 * pfVar8[1];
                        fVar18 = fVar14 + fVar18;
                        fVar15 = (1.0 - fVar24) * fVar23 * fVar5 - fVar4 * fVar15;
                        param_5 = fVar23 + fVar29;
                        pfVar8[2] = ((1.0 - fVar23) + fVar15) * fVar18 * pfVar8[2];
                        fVar18 = fVar14 + fVar18;
                        fVar15 = (1.0 - fVar25) * param_5 * fVar5 - fVar4 * fVar15;
                        *param_7 = fVar18;
                        pfVar8[3] = ((1.0 - param_5) + fVar15) * fVar18 * pfVar8[3];
                        pfVar8 = param_2;
                    } while ((longlong)param_2 < (longlong)register0x00000020);
                }
                if (param_2 < pfVar13) {
                    fVar14 = param_7[1];
                    pfVar8 = param_2;
                    do {
                        param_5 = param_5 + fVar29;
                        fVar25 = fVar25 + fVar28;
                        param_2 = pfVar8 + 1;
                        fVar18 = *param_7;
                        fVar15 = (1.0 - fVar25) * param_5 * fVar5 - fVar15 * fVar4;
                        *param_7 = fVar14 + fVar18;
                        *pfVar8 = ((1.0 - param_5) + fVar15) * (fVar14 + fVar18) * *pfVar8;
                        pfVar8 = param_2;
                    } while (param_2 < pfVar13);
                }
            }
            if (1.0 <= fVar25) {
                fVar25 = fVar25 - 1.0;
            }
        } while (param_2 < pfVar1);
    }
    if (fVar3 != 0.0) {
        *param_1 = fVar15;
        param_1[1] = fVar5;
        param_1[2] = fVar4;
        param_1[3] = fVar25;
        param_1[4] = fVar28;
        param_1[5] = fVar2;
        FUN_1408fde98();
        param_1[3] = extraout_XMM0_Da;
    }
    return;
}

