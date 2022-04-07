//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14025efb0(longlong param_1, int param_2) {
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int local_res10;

    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_1 + 0x6a8), 0, 0);
    iVar1 = *(int *) (param_1 + 0x30);
    uVar2 = 0;
    iVar3 = 1;
    iVar4 = 0;
    if ((iVar1 == 9) || (iVar1 == 0xd)) {
        (**(code * *)(*DAT_140c65670 + 0x160))
                (DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x6b8), 0, *(undefined8 * )(param_1 + 0x808));
        local_res10 = iVar3;
    } else if (iVar1 == 0x12) {
        (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, *(undefined8 * )(param_1 + 0x6a8), 0, 0);
        local_res10 = iVar4;
    }
    if (param_2 == 0) {
        iVar4 = iVar3;
        if (*(int *) (param_1 + 0x260) != 0) goto LAB_14025f06c;
    } else if (*(int *) (param_1 + 0x260) == 0) {
        iVar3 = 2;
        LAB_14025f06c:
        uVar2 = (uint)(*(int *) (param_1 + 0x30) == 0xd);
        goto LAB_14025f089;
    }
    iVar3 = iVar4;
    if (*(int *) (param_1 + 0x30) == 0xd) {
        uVar2 = 2;
    }
    LAB_14025f089:
    // WARNING: Could not recover jumptable at 0x00014025f0b9. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x178))
            (DAT_140c65670, *(undefined8 * )(param_1 + 0x8a0), uVar2 + (iVar3 + local_res10 * 4) * 3);
    return;
}


void FUN_14025f0c0(longlong param_1) {
    (**(code * *)(*DAT_140c65670 + 0x138))(DAT_140c65670, *(undefined8 * )(param_1 + 0x810));
    (**(code * *)(*DAT_140c65670 + 0x130))(DAT_140c65670, *(undefined8 * )(param_1 + 0x820), 1);
    *(undefined8 * )(param_1 + 0x9a8) = 0x24;
    *(undefined8 * )(param_1 + 0x9b0) = 8;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14025f120(undefined8 param_1, longlong param_2) {
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined local_88[16];
    float local_78;
    float local_74;

    local_88._8_8_ = local_88._0_8_;
    iVar1 = *(int *) (param_2 + 0x48);
    if (iVar1 == 0) {
        local_78 = *(float *) (param_2 + 0x9c);
        local_88 = ZEXT816(0);
        FUN_14025f560(0, local_88);
    } else if (iVar1 == 1) {
        uVar5 = *(undefined4 * )(param_2 + 0x84);
        local_78 = (float) FUN_1408fe3d0(uVar5);
        FUN_1408fc950(uVar5);
        local_78 = *(float *) (param_2 + 0x90) * local_78;
        local_88 = CONCAT124(CONCAT84(local_88._8_8_, local_78), local_78) ^
                   (undefined[16]) 0x8000000080000000;
        local_74 = local_78;
        FUN_14025f6f0();
    } else if (iVar1 == 2) {
        uVar5 = *(undefined4 * )(param_2 + 0x84);
        local_78 = (float) FUN_1408fc950(uVar5);
        uVar6 = *(undefined4 * )(param_2 + 0x8c);
        fVar2 = (float) FUN_1408fc950(uVar6);
        fVar3 = (float) FUN_1408fe3d0(uVar5);
        fVar3 = fVar3 / local_78;
        fVar4 = (float) FUN_1408fe3d0(uVar6);
        if (fVar2 <= local_78) {
            local_78 = fVar2;
        }
        local_78 = local_78 * *(float *) (param_2 + 0x90);
        local_74 = local_78 * (fVar4 / fVar2);
        local_78 = local_78 * fVar3;
        local_88 = CONCAT88(local_88._8_8_, CONCAT44(local_74, local_78)) ^
                   (undefined[16]) 0x8000000080000000;
        FUN_14025f6f0();
    } else {
        if (iVar1 == 3) {
            fVar3 = (float) FUN_1408fd8a4(*(undefined4 * )(param_2 + 0x40));
            fVar4 = (float) FUN_1408fd8a4(*(undefined4 * )(param_2 + 0x44));
            fVar2 = *(float *) (param_2 + 0x84);
            fVar3 = *(float *) (param_2 + 0x90) * fVar3;
            fVar4 = *(float *) (param_2 + 0x90) * fVar4;
            local_78 = fVar2 + fVar3;
            local_74 = fVar4 + fVar2;
            local_88 = CONCAT124(CONCAT84(local_88._8_8_, fVar4 - fVar2), fVar3 - fVar2);
        } else {
            if (iVar1 != 4) {
                return;
            }
            fVar2 = (float) FUN_1408fd8a4(*(undefined4 * )(param_2 + 0x40));
            local_74 = (float) FUN_1408fd8a4(*(undefined4 * )(param_2 + 0x44));
            fVar2 = *(float *) (param_2 + 0x90) * fVar2;
            local_78 = *(float *) (param_2 + 0x84) + fVar2;
            local_74 = *(float *) (param_2 + 0x90) * local_74;
            local_88 = CONCAT124(CONCAT84(local_88._8_8_, local_74 - *(float *) (param_2 + 0x8c)),
                                 fVar2 - *(float *) (param_2 + 0x84));
            local_74 = *(float *) (param_2 + 0x8c) + local_74;
        }
        FUN_14025f6f0();
    }
    return;
}


void FUN_14025f560(undefined8 param_1, float *param_2, undefined8 param_3) {
    float fVar1;
    float fVar2;
    float fVar3;
    undefined auStack360[32];
    undefined4 local_148;
    undefined4 local_140;
    undefined *local_138;
    undefined8 local_130;
    undefined local_128[16];
    undefined local_118[16];
    undefined local_f8[16];
    undefined local_e8[16];
    undefined local_d8[16];
    undefined local_c8[16];
    undefined local_b8[20];
    uint uStack164;
    undefined4 uStack132;
    undefined *local_78;
    undefined8 local_70;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    fVar1 = param_2[4];
    local_138 = local_f8;
    fVar2 = *param_2 - fVar1;
    fVar3 = param_2[1] - fVar1;
    local_f8 = ZEXT416((uint)((fVar1 + *param_2) - fVar2));
    local_e8 = ZEXT416((uint)((fVar1 + param_2[1]) - fVar3)) << 0x20;
    local_d8 = ZEXT1216(ZEXT812(0));
    local_c8 = CONCAT412(0x3f800000, ZEXT812(CONCAT44(fVar3, fVar2)));
    local_130 = param_3;
    local_78 = local_138;
    local_70 = param_3;
    FUN_1401afb10(&local_78, local_b8);
    local_140 = 0;
    local_148 = 4;
    local_118 = CONCAT412(uStack132, ZEXT412(uStack164) << 0x20);
    (**(code * *)(*DAT_140c65670 + 0x148))(DAT_140c65670, 0x30, local_128);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


void FUN_14025f6f0(undefined8 param_1, float *param_2, float *param_3, undefined4 *param_4,
                   ulonglong param_5) {
    float fVar1;
    float fVar2;
    undefined auStack376[32];
    undefined4 local_158;
    undefined4 local_150;
    undefined *local_148;
    ulonglong uStack320;
    float local_138;
    float fStack308;
    uint uStack304;
    undefined4 local_128;
    undefined4 uStack288;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined local_108[16];
    undefined local_f8[16];
    undefined local_e8[16];
    undefined local_d8[16];
    undefined local_c8[16];
    undefined local_b8[16];
    undefined local_a8[16];
    undefined *local_98;
    ulonglong local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    local_148 = local_d8;
    local_138 = param_2[4];
    if (param_2[4] <= param_3[4]) {
        local_138 = param_3[4];
    }
    fStack308 = param_2[5];
    if (param_2[5] <= param_3[5]) {
        fStack308 = param_3[5];
    }
    fVar2 = *param_2;
    if (*param_3 <= *param_2) {
        fVar2 = *param_3;
    }
    fVar1 = param_2[1];
    if (param_3[1] <= param_2[1]) {
        fVar1 = param_3[1];
    }
    uStack304 = param_4[1];
    uStack320 = param_5;
    local_d8 = ZEXT416((uint)(local_138 - fVar2));
    local_c8 = ZEXT416((uint)(fStack308 - fVar1)) << 0x20;
    local_b8 = ZEXT1216(ZEXT812(0));
    local_90 = param_5;
    local_a8 = CONCAT412(0x3f800000, CONCAT48(*param_4, CONCAT44(fVar1, fVar2)));
    local_98 = local_148;
    FUN_1401afb10(&local_98, &local_148);
    local_150 = 0;
    local_158 = 4;
    local_108 = CONCAT412(local_118,
                          CONCAT48(local_128,
                                   (ulonglong) local_148 & 0xffffffff |
                                   (ulonglong)(uint)
    local_138 << 0x20));
    local_f8 = CONCAT412(uStack276, ZEXT412((uint) fStack308) << 0x20);
    local_e8 = CONCAT412(uStack272,
                         CONCAT48(uStack288, uStack320 & 0xffffffff | (ulonglong) uStack304 << 0x20));
    (**(code * *)(*DAT_140c65670 + 0x148))(DAT_140c65670, 0x30, local_108);
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack376);
    return;
}


void FUN_14025f8b0(undefined8 param_1, longlong param_2, undefined8 param_3) {
    float *pfVar1;
    undefined auStack360[32];
    undefined4 local_148;
    undefined4 local_140;
    undefined *local_138;
    undefined8 local_130;
    undefined local_128[16];
    undefined local_118[16];
    undefined local_f8[16];
    undefined local_e8[16];
    undefined local_d8[16];
    undefined local_c8[16];
    undefined local_b8[20];
    uint uStack164;
    undefined4 uStack132;
    undefined *local_78;
    undefined8 local_70;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    pfVar1 = *(float **) (param_2 + 0x20);
    local_138 = local_f8;
    local_f8 = ZEXT416((uint)((pfVar1[4] + 2.0) - (*pfVar1 - 2.0)));
    local_e8 = ZEXT416((uint)((pfVar1[5] + 2.0) - (pfVar1[1] - 2.0))) << 0x20;
    local_d8 = ZEXT1216(ZEXT812(0));
    local_c8 = CONCAT412(0x3f800000, ZEXT812(CONCAT44(pfVar1[1] - 2.0, *pfVar1 - 2.0)));
    local_130 = param_3;
    local_78 = local_138;
    local_70 = param_3;
    FUN_1401afb10(&local_78, local_b8);
    local_140 = 0;
    local_148 = 4;
    local_118 = CONCAT412(uStack132, ZEXT412(uStack164) << 0x20);
    (**(code * *)(*DAT_140c65670 + 0x148))(DAT_140c65670, 0x30, local_128);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


void FUN_14025fa40(longlong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
                   ulonglong param_5, undefined8 param_6) {
    undefined4 *puVar1;
    float *pfVar2;
    float *pfVar3;
    undefined4 *puVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    float fVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    float *pfVar15;
    undefined(*pauVar16)[16];
    float *pfVar17;
    undefined(*pauVar18)[16];
    undefined(**ppauVar19)[16];
    undefined(*pauVar20)[16];
    undefined(*pauVar21)[16];
    undefined(*pauVar22)[16];
    longlong lVar23;
    undefined(*pauVar24)[16];
    float *pfVar25;
    float *pfVar26;
    undefined(*pauVar27)[16];
    undefined(*pauVar28)[16];
    undefined(*pauVar29)[16];
    float *pfVar30;
    float *pfVar31;
    float *pfVar32;
    float **ppfVar33;
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
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    undefined auStack328[32];
    undefined8 local_128;
    ulonglong local_120;
    longlong local_118;
    undefined(**local_110)[16];
    float **local_108;
    float local_100;
    float local_f8[4];
    ulonglong local_e8;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    local_118 = param_1;
    FUN_1402626b0(param_1 + 0x988, param_5);
    local_120 = param_5 & 0xffffffff;
    lVar23 = 0x10;
    local_128 = param_6;
    FUN_1401ade90(*(undefined8 * )(param_1 + 0x988));
    lVar11 = local_118;
    uVar13 = *(ulonglong * )(param_1 + 0x988);
    uVar14 = param_5 * 0x10 + uVar13;
    if (uVar13 < uVar14) {
        fVar51 = 0.0;
        uVar10 = uVar13;
        do {
            if (*(float *) (uVar10 + 8) <= 0.0 && *(float *) (uVar10 + 8) != 0.0) {
                uVar10 = uVar13;
                goto LAB_14025fb40;
            }
            uVar10 = uVar10 + lVar23;
        } while (uVar10 < uVar14);
    }
    goto LAB_1402604e8;
    while (uVar10 = uVar10 + lVar23, uVar10 < uVar14) {
        LAB_14025fb40:
        if ((float) (*(uint * )(param_1 + 0x1cc) ^ 0x80000000) < *(float *) (uVar10 + 8)) {
            FUN_1402626b0(local_118 + 0x998);
            uVar14 = 0;
            if (param_3 != 0) {
                lVar23 = 0;
                do {
                    lVar12 = uVar14 * 2;
                    uVar14 = uVar14 + 1;
                    puVar1 = (undefined4 * )(uVar13 + (ulonglong) * (ushort * )(param_2 + lVar12) * 0x10);
                    uVar6 = puVar1[1];
                    uVar7 = puVar1[2];
                    uVar8 = puVar1[3];
                    puVar4 = (undefined4 * )(lVar23 + *(longlong * )(lVar11 + 0x998));
                    *puVar4 = *puVar1;
                    puVar4[1] = uVar6;
                    puVar4[2] = uVar7;
                    puVar4[3] = uVar8;
                    lVar23 = lVar23 + 0x10;
                } while (uVar14 < param_3);
            }
            pfVar15 = *(float **) (lVar11 + 0x998);
            fVar55 = 1.0;
            uVar14 = 0;
            ppauVar19 = (undefined (**)[16]) 0x1;
            do {
                ppauVar19 = (undefined(**)[16])(1 - (longlong) ppauVar19);
                pfVar17 = (float *) (((longlong) * (int *) ((longlong) & DAT_140b60428 + uVar14) + 0x1c) * 0x10 +
                                     lVar11);
                ppfVar33 = (float **) (lVar11 + 0x988 + (longlong) ppauVar19 * 0x10);
                local_110 = ppauVar19;
                local_108 = ppfVar33;
                FUN_1402626b0(ppfVar33, param_3 * 2);
                pfVar32 = pfVar15 + param_3 * 4;
                pfVar31 = *ppfVar33;
                if (pfVar15 < pfVar32) {
                    pauVar20 = (undefined(*)[16])(pfVar31 + 0x14);
                    pauVar21 = (undefined(*)[16])(pfVar31 + 4);
                    pauVar22 = (undefined(*)[16])(pfVar31 + 8);
                    pfVar25 = pfVar31 + 0xc;
                    pauVar28 = (undefined(*)[16])(pfVar31 + 0x10);
                    pfVar30 = pfVar31;
                    do {
                        fVar52 = *pfVar17;
                        fVar53 = pfVar17[1];
                        local_f8[0] = *pfVar15 * fVar52 + pfVar15[1] * fVar53 + 0.0 + pfVar17[3];
                        local_f8[1] = pfVar15[4] * fVar52 + pfVar15[5] * fVar53 + 0.0 + pfVar17[3];
                        uVar13 = (ulonglong)(local_f8[1] < local_f8[0]);
                        local_f8[2] = pfVar15[8] * fVar52 + pfVar15[9] * fVar53 + 0.0 + pfVar17[3];
                        if (local_f8[2] < local_f8[uVar13]) {
                            uVar13 = 2;
                        }
                        fVar52 = local_f8[uVar13];
                        pauVar16 = pauVar20;
                        pauVar18 = pauVar21;
                        pauVar24 = pauVar22;
                        pfVar26 = pfVar25;
                        pauVar27 = pauVar28;
                        pfVar31 = pfVar30;
                        if (fVar52 < fVar51) {
                            lVar11 = *(longlong * )(&DAT_140b60400 + uVar13 * 8);
                            lVar23 = *(longlong * )(&DAT_140b60408 + uVar13 * 8);
                            fVar53 = local_f8[lVar11];
                            fVar54 = local_f8[lVar23];
                            if (fVar51 < fVar53) {
                                pfVar31 = pfVar15 + uVar13 * 4;
                                fVar35 = *pfVar31;
                                fVar5 = pfVar31[1];
                                fVar9 = pfVar31[2];
                                fVar39 = pfVar31[3];
                                if (fVar51 < fVar54) {
                                    pfVar31 = pfVar15 + lVar11 * 4;
                                    fVar41 = *pfVar31;
                                    fVar42 = pfVar31[1];
                                    fVar43 = pfVar31[2];
                                    fVar47 = pfVar31[3];
                                    fVar49 = fVar52 / (fVar52 - fVar53);
                                    pfVar31 = pfVar15 + lVar23 * 4;
                                    fVar53 = *pfVar31;
                                    fVar48 = pfVar31[1];
                                    fVar36 = pfVar31[2];
                                    fVar37 = pfVar31[3];
                                    *pfVar30 = fVar35;
                                    pfVar30[1] = fVar5;
                                    pfVar30[2] = fVar9;
                                    pfVar30[3] = fVar39;
                                    if (fVar55 <= fVar49) {
                                        fVar49 = fVar55;
                                    }
                                    fVar52 = fVar52 / (fVar52 - fVar54);
                                    *pauVar21 = CONCAT412((fVar47 - fVar39) * fVar49 + fVar39,
                                                          CONCAT48((fVar43 - fVar9) * fVar49 + fVar9,
                                                                   CONCAT44((fVar42 - fVar5) * fVar49 + fVar5,
                                                                            (fVar41 - fVar35) * fVar49 + fVar35)));
                                    if (fVar55 <= fVar52) {
                                        fVar52 = fVar55;
                                    }
                                    *pauVar22 = CONCAT412((fVar37 - fVar39) * fVar52 + fVar39,
                                                          CONCAT48((fVar36 - fVar9) * fVar52 + fVar9,
                                                                   CONCAT44((fVar48 - fVar5) * fVar52 + fVar5,
                                                                            (fVar53 - fVar35) * fVar52 + fVar35)));
                                    goto LAB_14025ff79;
                                }
                                pfVar31 = pfVar15 + lVar11 * 4;
                                fVar41 = *pfVar31;
                                fVar42 = pfVar31[1];
                                fVar43 = pfVar31[2];
                                fVar47 = pfVar31[3];
                                fVar52 = fVar52 / (fVar52 - fVar53);
                                pauVar16 = pauVar20[6];
                                pfVar31 = pfVar30 + 0x18;
                                pfVar26 = pfVar25 + 0x18;
                                pauVar27 = pauVar28[6];
                                pauVar18 = pauVar21[6];
                                pauVar24 = pauVar22[6];
                                if (fVar55 <= fVar52) {
                                    fVar52 = fVar55;
                                }
                                pfVar2 = pfVar15 + lVar23 * 4;
                                fVar48 = *pfVar2;
                                fVar36 = pfVar2[1];
                                fVar37 = pfVar2[2];
                                fVar49 = pfVar2[3];
                                *pfVar30 = fVar35;
                                pfVar30[1] = fVar5;
                                pfVar30[2] = fVar9;
                                pfVar30[3] = fVar39;
                                *pauVar21 = CONCAT412((fVar47 - fVar39) * fVar52 + fVar39,
                                                      CONCAT48((fVar43 - fVar9) * fVar52 + fVar9,
                                                               CONCAT44((fVar42 - fVar5) * fVar52 + fVar5,
                                                                        (fVar41 - fVar35) * fVar52 + fVar35)));
                                fVar53 = fVar53 / (fVar53 - fVar54);
                                if (fVar55 <= fVar53) {
                                    fVar53 = fVar55;
                                }
                                fVar41 = (fVar48 - fVar41) * fVar53 + fVar41;
                                fVar42 = (fVar36 - fVar42) * fVar53 + fVar42;
                                fVar43 = (fVar37 - fVar43) * fVar53 + fVar43;
                                fVar47 = (fVar49 - fVar47) * fVar53 + fVar47;
                                *pauVar22 = CONCAT412(fVar47, CONCAT48(fVar43, CONCAT44(fVar42, fVar41)));
                                pfVar30 = pfVar15 + uVar13 * 4;
                                fVar52 = pfVar30[1];
                                fVar53 = pfVar30[2];
                                fVar54 = pfVar30[3];
                                *pfVar25 = *pfVar30;
                                pfVar25[1] = fVar52;
                                pfVar25[2] = fVar53;
                                pfVar25[3] = fVar54;
                                *pauVar28 = CONCAT412(fVar47, CONCAT48(fVar43, CONCAT44(fVar42, fVar41)));
                                pfVar25 = pfVar15 + lVar23 * 4;
                                fVar52 = pfVar25[1];
                                fVar53 = pfVar25[2];
                                fVar54 = pfVar25[3];
                                *(float *) *pauVar20 = *pfVar25;
                                *(float *) (*pauVar20 + 4) = fVar52;
                                *(float *) (*pauVar20 + 8) = fVar53;
                                *(float *) (*pauVar20 + 0xc) = fVar54;
                            } else if (fVar51 < fVar54) {
                                pfVar31 = pfVar15 + lVar23 * 4;
                                fVar35 = *pfVar31;
                                fVar5 = pfVar31[1];
                                fVar9 = pfVar31[2];
                                fVar39 = pfVar31[3];
                                pfVar31 = pfVar15 + uVar13 * 4;
                                fVar41 = *pfVar31;
                                fVar42 = pfVar31[1];
                                fVar43 = pfVar31[2];
                                fVar47 = pfVar31[3];
                                pauVar16 = pauVar20[6];
                                pfVar31 = pfVar30 + 0x18;
                                pfVar26 = pfVar25 + 0x18;
                                pauVar27 = pauVar28[6];
                                pauVar18 = pauVar21[6];
                                pauVar24 = pauVar22[6];
                                fVar53 = fVar53 / (fVar53 - fVar54);
                                pfVar2 = pfVar15 + lVar11 * 4;
                                if (fVar55 <= fVar53) {
                                    fVar53 = fVar55;
                                }
                                pfVar3 = pfVar15 + lVar11 * 4;
                                fVar48 = (fVar35 - *pfVar2) * fVar53 + *pfVar3;
                                fVar36 = (fVar5 - pfVar2[1]) * fVar53 + pfVar3[1];
                                fVar37 = (fVar9 - pfVar2[2]) * fVar53 + pfVar3[2];
                                fVar53 = (fVar39 - pfVar2[3]) * fVar53 + pfVar3[3];
                                *pfVar30 = fVar41;
                                pfVar30[1] = fVar42;
                                pfVar30[2] = fVar43;
                                pfVar30[3] = fVar47;
                                fVar52 = fVar52 / (fVar52 - fVar54);
                                if (fVar55 <= fVar52) {
                                    fVar52 = fVar55;
                                }
                                pfVar30 = pfVar15 + lVar11 * 4;
                                fVar54 = pfVar30[1];
                                fVar49 = pfVar30[2];
                                fVar50 = pfVar30[3];
                                *(float *) *pauVar21 = *pfVar30;
                                *(float *) (*pauVar21 + 4) = fVar54;
                                *(float *) (*pauVar21 + 8) = fVar49;
                                *(float *) (*pauVar21 + 0xc) = fVar50;
                                *pauVar22 = CONCAT412(fVar53, CONCAT48(fVar37, CONCAT44(fVar36, fVar48)));
                                pfVar30 = pfVar15 + uVar13 * 4;
                                fVar54 = pfVar30[1];
                                fVar49 = pfVar30[2];
                                fVar50 = pfVar30[3];
                                *pfVar25 = *pfVar30;
                                pfVar25[1] = fVar54;
                                pfVar25[2] = fVar49;
                                pfVar25[3] = fVar50;
                                *pauVar28 = CONCAT412(fVar53, CONCAT48(fVar37, CONCAT44(fVar36, fVar48)));
                                *pauVar20 = CONCAT412((fVar39 - fVar47) * fVar52 + fVar47,
                                                      CONCAT48((fVar9 - fVar43) * fVar52 + fVar43,
                                                               CONCAT44((fVar5 - fVar42) * fVar52 + fVar42,
                                                                        (fVar35 - fVar41) * fVar52 + fVar41)));
                            } else {
                                pfVar31 = pfVar15 + uVar13 * 4;
                                fVar52 = pfVar31[1];
                                fVar53 = pfVar31[2];
                                fVar54 = pfVar31[3];
                                *pfVar30 = *pfVar31;
                                pfVar30[1] = fVar52;
                                pfVar30[2] = fVar53;
                                pfVar30[3] = fVar54;
                                pfVar31 = pfVar15 + lVar11 * 4;
                                fVar52 = pfVar31[1];
                                fVar53 = pfVar31[2];
                                fVar54 = pfVar31[3];
                                *(float *) *pauVar21 = *pfVar31;
                                *(float *) (*pauVar21 + 4) = fVar52;
                                *(float *) (*pauVar21 + 8) = fVar53;
                                *(float *) (*pauVar21 + 0xc) = fVar54;
                                pfVar31 = pfVar15 + lVar23 * 4;
                                fVar52 = pfVar31[1];
                                fVar53 = pfVar31[2];
                                fVar54 = pfVar31[3];
                                *(float *) *pauVar22 = *pfVar31;
                                *(float *) (*pauVar22 + 4) = fVar52;
                                *(float *) (*pauVar22 + 8) = fVar53;
                                *(float *) (*pauVar22 + 0xc) = fVar54;
                                LAB_14025ff79:
                                pfVar31 = pfVar30 + 0xc;
                                pfVar26 = pfVar25 + 0xc;
                                pauVar27 = pauVar28[3];
                                pauVar16 = pauVar20[3];
                                pauVar18 = pauVar21[3];
                                pauVar24 = pauVar22[3];
                            }
                        }
                        pfVar15 = pfVar15 + 0xc;
                        ppauVar19 = local_110;
                        pauVar20 = pauVar16;
                        pauVar21 = pauVar18;
                        pauVar22 = pauVar24;
                        pfVar25 = pfVar26;
                        pauVar28 = pauVar27;
                        pfVar30 = pfVar31;
                        ppfVar33 = local_108;
                    } while (pfVar15 < pfVar32);
                }
                param_3 = (longlong) pfVar31 - (longlong) * ppfVar33 >> 4;
                if (param_3 == 0) goto LAB_1402604e8;
                FUN_1402626b0(ppfVar33, param_3);
                lVar11 = local_118;
                pfVar15 = *ppfVar33;
                uVar14 = uVar14 + 4;
            } while (uVar14 < 0x10);
            ppauVar19 = (undefined(**)[16])(local_118 + (longlong) ppauVar19 * -0x10 + 0x998);
            fVar52 = *(float *) (local_118 + 0x1cc) + 0.001;
            local_110 = ppauVar19;
            FUN_1402626b0(ppauVar19, param_3 * 3);
            pauVar20 = *ppauVar19;
            pfVar32 = pfVar15 + param_3 * 4;
            if (pfVar15 < pfVar32) {
                pauVar21 = pauVar20[2];
                pauVar22 = pauVar20[1];
                pauVar29 = pauVar20[8];
                pauVar28 = pauVar20[7];
                pauVar16 = pauVar20[6];
                pauVar18 = pauVar20[5];
                pauVar24 = pauVar20[4];
                pauVar27 = pauVar20[3];
                do {
                    local_108 = (float **) CONCAT44(fVar52 + pfVar15[6], fVar52 + pfVar15[2]);
                    local_100 = fVar52 + pfVar15[10];
                    uVar14 = (ulonglong)(fVar52 + pfVar15[6] < fVar52 + pfVar15[2]);
                    if (fVar52 + pfVar15[10] < *(float *) ((longlong) & local_108 + uVar14 * 4)) {
                        uVar14 = 2;
                    }
                    lVar11 = *(longlong * )(&DAT_140b60400 + uVar14 * 8);
                    lVar23 = *(longlong * )(&DAT_140b60408 + uVar14 * 8);
                    fVar53 = *(float *) ((longlong) & local_108 + uVar14 * 4);
                    if (fVar51 < fVar53) {
                        fVar54 = fVar52 / (fVar52 - fVar53);
                        fVar53 = *(float *) ((longlong) & local_108 + lVar11 * 4);
                        pfVar31 = pfVar15 + uVar14 * 4;
                        *pauVar20 = CONCAT412(fVar54 * pfVar31[3],
                                              CONCAT48(fVar54 * pfVar31[2],
                                                       CONCAT44(fVar54 * pfVar31[1], fVar54 * *pfVar31)));
                        fVar54 = fVar52 / (fVar52 - fVar53);
                        fVar53 = *(float *) ((longlong) & local_108 + lVar23 * 4);
                        pfVar31 = pfVar15 + lVar11 * 4;
                        *pauVar22 = CONCAT412(fVar54 * pfVar31[3],
                                              CONCAT48(fVar54 * pfVar31[2],
                                                       CONCAT44(fVar54 * pfVar31[1], fVar54 * *pfVar31)));
                        fVar53 = fVar52 / (fVar52 - fVar53);
                        pfVar31 = pfVar15 + lVar23 * 4;
                        *pauVar21 = CONCAT412(fVar53 * pfVar31[3],
                                              CONCAT48(fVar53 * pfVar31[2],
                                                       CONCAT44(fVar53 * pfVar31[1], fVar53 * *pfVar31)));
                        LAB_1402603e4:
                        pauVar20 = pauVar20[3];
                        pauVar27 = pauVar27[3];
                        pauVar24 = pauVar24[3];
                        pauVar18 = pauVar18[3];
                        pauVar16 = pauVar16[3];
                        pauVar28 = pauVar28[3];
                        pauVar29 = pauVar29[3];
                        pauVar22 = pauVar22[3];
                        pauVar21 = pauVar21[3];
                    } else {
                        fVar54 = *(float *) ((longlong) & local_108 + lVar11 * 4);
                        if (fVar51 < fVar54) {
                            fVar35 = *(float *) ((longlong) & local_108 + lVar23 * 4);
                            if (fVar51 < fVar35) {
                                pfVar31 = pfVar15 + uVar14 * 4;
                                fVar5 = *pfVar31;
                                fVar9 = pfVar31[1];
                                fVar39 = pfVar31[2];
                                fVar41 = pfVar31[3];
                                pfVar31 = pfVar15 + lVar11 * 4;
                                pfVar17 = pfVar15 + lVar23 * 4;
                                fVar42 = fVar53 / (fVar53 - fVar54);
                                if (fVar55 <= fVar42) {
                                    fVar42 = fVar55;
                                }
                                fVar43 = (*pfVar31 - fVar5) * fVar42 + fVar5;
                                fVar47 = (pfVar31[1] - fVar9) * fVar42 + fVar9;
                                fVar48 = (pfVar31[2] - fVar39) * fVar42 + fVar39;
                                fVar42 = (pfVar31[3] - fVar41) * fVar42 + fVar41;
                                fVar53 = fVar53 / (fVar53 - fVar35);
                                if (fVar55 <= fVar53) {
                                    fVar53 = fVar55;
                                }
                                fVar40 = fVar52 / (fVar52 - fVar54);
                                fVar34 = fVar52 / (fVar52 - fVar35);
                                pfVar31 = pfVar15 + lVar11 * 4;
                                fVar54 = *pfVar31;
                                fVar49 = pfVar31[1];
                                fVar50 = pfVar31[2];
                                fVar38 = pfVar31[3];
                                fVar44 = (*pfVar17 - fVar5) * fVar53 + fVar5;
                                fVar45 = (pfVar17[1] - fVar9) * fVar53 + fVar9;
                                fVar46 = (pfVar17[2] - fVar39) * fVar53 + fVar39;
                                fVar53 = (pfVar17[3] - fVar41) * fVar53 + fVar41;
                                pfVar31 = pfVar15 + lVar23 * 4;
                                fVar35 = fVar34 * *pfVar31;
                                fVar36 = fVar34 * pfVar31[1];
                                fVar37 = fVar34 * pfVar31[2];
                                fVar34 = fVar34 * pfVar31[3];
                                *(float *) *pauVar20 = fVar5;
                                *(float *) (*pauVar20 + 4) = fVar9;
                                *(float *) (*pauVar20 + 8) = fVar39;
                                *(float *) (*pauVar20 + 0xc) = fVar41;
                                *pauVar22 = CONCAT412(fVar42, CONCAT48(fVar48, CONCAT44(fVar47, fVar43)));
                                *pauVar21 = CONCAT412(fVar53, CONCAT48(fVar46, CONCAT44(fVar45, fVar44)));
                                *pauVar27 = CONCAT412(fVar42, CONCAT48(fVar48, CONCAT44(fVar47, fVar43)));
                                *pauVar24 = CONCAT412(fVar40 * fVar38,
                                                      CONCAT48(fVar40 * fVar50,
                                                               CONCAT44(fVar40 * fVar49, fVar40 * fVar54)));
                                *pauVar18 = CONCAT412(fVar53, CONCAT48(fVar46, CONCAT44(fVar45, fVar44)));
                                *pauVar16 = CONCAT412(fVar53, CONCAT48(fVar46, CONCAT44(fVar45, fVar44)));
                                *pauVar28 = CONCAT412(fVar40 * fVar38,
                                                      CONCAT48(fVar40 * fVar50,
                                                               CONCAT44(fVar40 * fVar49, fVar40 * fVar54)));
                                goto LAB_14026033a;
                            }
                            pfVar31 = pfVar15 + lVar11 * 4;
                            fVar5 = *pfVar31;
                            fVar9 = pfVar31[1];
                            fVar39 = pfVar31[2];
                            fVar41 = pfVar31[3];
                            pfVar31 = pfVar15 + uVar14 * 4;
                            fVar42 = *pfVar31;
                            fVar43 = pfVar31[1];
                            fVar47 = pfVar31[2];
                            fVar48 = pfVar31[3];
                            fVar53 = fVar53 / (fVar53 - fVar54);
                            if (fVar55 <= fVar53) {
                                fVar53 = fVar55;
                            }
                            fVar36 = (fVar5 - fVar42) * fVar53 + fVar42;
                            fVar37 = (fVar9 - fVar43) * fVar53 + fVar43;
                            fVar49 = (fVar39 - fVar47) * fVar53 + fVar47;
                            fVar50 = (fVar41 - fVar48) * fVar53 + fVar48;
                            fVar53 = fVar54 / (fVar54 - fVar35);
                            if (fVar55 <= fVar53) {
                                fVar53 = fVar55;
                            }
                            pfVar31 = pfVar15 + lVar23 * 4;
                            fVar35 = *pfVar31;
                            fVar38 = pfVar31[1];
                            fVar34 = pfVar31[2];
                            fVar40 = pfVar31[3];
                            *(float *) *pauVar20 = fVar42;
                            *(float *) (*pauVar20 + 4) = fVar43;
                            *(float *) (*pauVar20 + 8) = fVar47;
                            *(float *) (*pauVar20 + 0xc) = fVar48;
                            *pauVar22 = CONCAT412(fVar50, CONCAT48(fVar49, CONCAT44(fVar37, fVar36)));
                            fVar42 = fVar52 / (fVar52 - fVar54);
                            fVar43 = (fVar35 - fVar5) * fVar53 + fVar5;
                            fVar47 = (fVar38 - fVar9) * fVar53 + fVar9;
                            fVar48 = (fVar34 - fVar39) * fVar53 + fVar39;
                            fVar38 = (fVar40 - fVar41) * fVar53 + fVar41;
                            *pauVar21 = CONCAT412(fVar38, CONCAT48(fVar48, CONCAT44(fVar47, fVar43)));
                            pfVar31 = pfVar15 + uVar14 * 4;
                            fVar53 = pfVar31[1];
                            fVar54 = pfVar31[2];
                            fVar35 = pfVar31[3];
                            *(float *) *pauVar27 = *pfVar31;
                            *(float *) (*pauVar27 + 4) = fVar53;
                            *(float *) (*pauVar27 + 8) = fVar54;
                            *(float *) (*pauVar27 + 0xc) = fVar35;
                            *pauVar24 = CONCAT412(fVar38, CONCAT48(fVar48, CONCAT44(fVar47, fVar43)));
                            pfVar31 = pfVar15 + lVar23 * 4;
                            fVar53 = pfVar31[1];
                            fVar54 = pfVar31[2];
                            fVar35 = pfVar31[3];
                            *(float *) *pauVar18 = *pfVar31;
                            *(float *) (*pauVar18 + 4) = fVar53;
                            *(float *) (*pauVar18 + 8) = fVar54;
                            *(float *) (*pauVar18 + 0xc) = fVar35;
                            *pauVar16 = CONCAT412(fVar50, CONCAT48(fVar49, CONCAT44(fVar37, fVar36)));
                            *pauVar28 = CONCAT412(fVar42 * fVar41,
                                                  CONCAT48(fVar42 * fVar39, CONCAT44(fVar42 * fVar9, fVar42 * fVar5)
                                                  ));
                            *pauVar29 = CONCAT412(fVar38, CONCAT48(fVar48, CONCAT44(fVar47, fVar43)));
                        } else {
                            fVar5 = *(float *) ((longlong) & local_108 + lVar23 * 4);
                            if (fVar5 <= fVar51) {
                                pfVar31 = pfVar15 + uVar14 * 4;
                                fVar53 = pfVar31[1];
                                fVar54 = pfVar31[2];
                                fVar35 = pfVar31[3];
                                *(float *) *pauVar20 = *pfVar31;
                                *(float *) (*pauVar20 + 4) = fVar53;
                                *(float *) (*pauVar20 + 8) = fVar54;
                                *(float *) (*pauVar20 + 0xc) = fVar35;
                                pfVar31 = pfVar15 + lVar11 * 4;
                                fVar53 = pfVar31[1];
                                fVar54 = pfVar31[2];
                                fVar35 = pfVar31[3];
                                *(float *) *pauVar22 = *pfVar31;
                                *(float *) (*pauVar22 + 4) = fVar53;
                                *(float *) (*pauVar22 + 8) = fVar54;
                                *(float *) (*pauVar22 + 0xc) = fVar35;
                                pfVar31 = pfVar15 + lVar23 * 4;
                                fVar53 = pfVar31[1];
                                fVar54 = pfVar31[2];
                                fVar35 = pfVar31[3];
                                *(float *) *pauVar21 = *pfVar31;
                                *(float *) (*pauVar21 + 4) = fVar53;
                                *(float *) (*pauVar21 + 8) = fVar54;
                                *(float *) (*pauVar21 + 0xc) = fVar35;
                                goto LAB_1402603e4;
                            }
                            pfVar31 = pfVar15 + lVar23 * 4;
                            fVar35 = *pfVar31;
                            fVar36 = pfVar31[1];
                            fVar37 = pfVar31[2];
                            fVar9 = pfVar31[3];
                            fVar54 = fVar54 / (fVar54 - fVar5);
                            pfVar31 = pfVar15 + lVar11 * 4;
                            if (fVar55 <= fVar54) {
                                fVar54 = fVar55;
                            }
                            pfVar17 = pfVar15 + uVar14 * 4;
                            fVar39 = *pfVar17;
                            fVar41 = pfVar17[1];
                            fVar42 = pfVar17[2];
                            fVar43 = pfVar17[3];
                            pfVar17 = pfVar15 + lVar11 * 4;
                            fVar47 = (fVar35 - *pfVar31) * fVar54 + *pfVar17;
                            fVar48 = (fVar36 - pfVar31[1]) * fVar54 + pfVar17[1];
                            fVar49 = (fVar37 - pfVar31[2]) * fVar54 + pfVar17[2];
                            fVar54 = (fVar9 - pfVar31[3]) * fVar54 + pfVar17[3];
                            *(float *) *pauVar20 = fVar39;
                            *(float *) (*pauVar20 + 4) = fVar41;
                            *(float *) (*pauVar20 + 8) = fVar42;
                            *(float *) (*pauVar20 + 0xc) = fVar43;
                            fVar53 = fVar53 / (fVar53 - fVar5);
                            if (fVar55 <= fVar53) {
                                fVar53 = fVar55;
                            }
                            fVar34 = fVar52 / (fVar52 - fVar5);
                            pfVar31 = pfVar15 + lVar11 * 4;
                            fVar5 = pfVar31[1];
                            fVar50 = pfVar31[2];
                            fVar38 = pfVar31[3];
                            *(float *) *pauVar22 = *pfVar31;
                            *(float *) (*pauVar22 + 4) = fVar5;
                            *(float *) (*pauVar22 + 8) = fVar50;
                            *(float *) (*pauVar22 + 0xc) = fVar38;
                            *pauVar21 = CONCAT412(fVar54, CONCAT48(fVar49, CONCAT44(fVar48, fVar47)));
                            pfVar31 = pfVar15 + uVar14 * 4;
                            fVar5 = pfVar31[1];
                            fVar50 = pfVar31[2];
                            fVar38 = pfVar31[3];
                            fVar39 = (fVar35 - fVar39) * fVar53 + fVar39;
                            fVar41 = (fVar36 - fVar41) * fVar53 + fVar41;
                            fVar42 = (fVar37 - fVar42) * fVar53 + fVar42;
                            fVar43 = (fVar9 - fVar43) * fVar53 + fVar43;
                            fVar35 = fVar34 * fVar35;
                            fVar36 = fVar34 * fVar36;
                            fVar37 = fVar34 * fVar37;
                            fVar34 = fVar34 * fVar9;
                            *(float *) *pauVar27 = *pfVar31;
                            *(float *) (*pauVar27 + 4) = fVar5;
                            *(float *) (*pauVar27 + 8) = fVar50;
                            *(float *) (*pauVar27 + 0xc) = fVar38;
                            *pauVar24 = CONCAT412(fVar54, CONCAT48(fVar49, CONCAT44(fVar48, fVar47)));
                            *pauVar18 = CONCAT412(fVar43, CONCAT48(fVar42, CONCAT44(fVar41, fVar39)));
                            *pauVar16 = CONCAT412(fVar43, CONCAT48(fVar42, CONCAT44(fVar41, fVar39)));
                            *pauVar28 = CONCAT412(fVar54, CONCAT48(fVar49, CONCAT44(fVar48, fVar47)));
                            LAB_14026033a:
                            *pauVar29 = CONCAT412(fVar34, CONCAT48(fVar37, CONCAT44(fVar36, fVar35)));
                        }
                        pauVar20 = pauVar20[9];
                        pauVar27 = pauVar27[9];
                        pauVar24 = pauVar24[9];
                        pauVar18 = pauVar18[9];
                        pauVar16 = pauVar16[9];
                        pauVar28 = pauVar28[9];
                        pauVar29 = pauVar29[9];
                        pauVar22 = pauVar22[9];
                        pauVar21 = pauVar21[9];
                    }
                    pfVar15 = pfVar15 + 0xc;
                    lVar11 = local_118;
                    ppauVar19 = local_110;
                } while (pfVar15 < pfVar32);
            }
            lVar23 = (longlong) pauVar20 - (longlong) * ppauVar19 >> 4;
            if (lVar23 != 0) {
                FUN_1402626b0(ppauVar19, lVar23);
                pauVar20 = *ppauVar19;
                lVar12 = (**(code * *)(*DAT_140c65670 + 0xe0))(DAT_140c65670, (int) lVar23 << 4, 1);
                if (lVar12 != 0) {
                    FUN_1407db590(lVar12, pauVar20, lVar23 << 4);
                    (**(code * *)(*DAT_140c65670 + 0xe8))();
                    *(undefined8 * )(lVar11 + 0x9a8) = 0;
                    *(longlong * )(lVar11 + 0x9b0) = lVar23;
                }
            }
            goto LAB_1402604e8;
        }
    }
    lVar11 = (**(code * *)(*DAT_140c65670 + 0xf0))(DAT_140c65670, (int) param_3 * 2, 0);
    if (lVar11 != 0) {
        FUN_1407db590(lVar11, param_2, param_3 * 2);
        (**(code * *)(*DAT_140c65670 + 0xf8))();
        lVar11 = (**(code * *)(*DAT_140c65670 + 0xe0))(DAT_140c65670, (int) param_5 << 4, 1);
        if (lVar11 != 0) {
            FUN_1407db590(lVar11, uVar13, param_5 * 0x10);
            (**(code * *)(*DAT_140c65670 + 0xe8))();
            *(ulonglong * )(param_1 + 0x9a8) = param_3;
            *(ulonglong * )(param_1 + 0x9b0) = param_5;
        }
    }
    LAB_1402604e8:
    FUN_1407db4f0(local_e8 ^ (ulonglong) auStack328);
    return;
}


void FUN_140260520(longlong param_1) {
    if (*(longlong * )(param_1 + 0x9a8) == 0) {
        (**(code * *)(*DAT_140c65670 + 0x288))(DAT_140c65670, 3, 0, *(undefined4 * )(param_1 + 0x9b0), 1);
        return;
    }
    (**(code * *)(*DAT_140c65670 + 0x290))
            (DAT_140c65670, 3, 0, *(undefined4 * )(param_1 + 0x9a8), 0, *(undefined4 * )(param_1 + 0x9b0), 0, 1);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140260cf0(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    float fVar2;
    undefined auStack440[32];
    undefined8 local_198;
    undefined4 local_190;
    undefined4 local_188;
    undefined4 local_180;
    undefined local_178[8];
    undefined8 uStack368;
    undefined4 local_164;
    undefined local_158[16];
    undefined local_148[16];
    undefined local_128[16];
    undefined local_118[20];
    uint uStack260;
    uint uStack252;
    undefined4 uStack228;
    undefined4 uStack220;
    undefined8 local_d8;
    undefined8 local_d0;
    undefined local_c8[64];
    undefined *local_88;
    undefined *local_80;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack440;
    if (*(int *) (param_1 + 0x94) != 4) {
        *(undefined4 * )(param_1 + 0x94) = 4;
        (**(code * *)(*DAT_140c65670 + 0x120))();
        (**(code * *)(*DAT_140c65670 + 0x210))(DAT_140c65670, &DAT_140c3fe88, 1);
        (**(code * *)(*DAT_140c65670 + 0x150))(DAT_140c65670, 0);
        (**(code * *)(*DAT_140c65670 + 0x140))(DAT_140c65670, *(undefined8 * )(param_1 + 0x858), 0);
        (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_1 + 0x850), 1);
        _local_178 = CONCAT412(0x3f800000, CONCAT48(0x3f800000, 0x3f8000003f800000));
        local_190 = 0;
        local_198 = (undefined * )((ulonglong) local_198._4_4_ << 0x20);
        (**(code * *)(*DAT_140c65670 + 0x180))(DAT_140c65670, 0x10, local_178, 0);
    }
    _local_178 = CONCAT124(stack0xfffffffffffffe8c, 1);
    _local_178 = CONCAT88(param_2[6], local_178);
    local_164 = 0;
    local_198 = &DAT_140c3fe88;
    (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_178, &DAT_140c3fe88, &DAT_140c3fe88);
    fVar2 = 1.0;
    _local_178 = ZEXT816(0);
    local_198 = (undefined * )((ulonglong) local_198 & 0xffffffff00000000);
    (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, local_178);
    lVar1 = (**(code * *)(*DAT_140c65670 + 0xf0))(DAT_140c65670, *(int *) param_2[3] * 2, 0);
    if (lVar1 != 0) {
        FUN_1407db590(lVar1, *(undefined8 * )((uint *) param_2[3] + 2), (ulonglong) * (uint *) param_2[3] * 2);
        (**(code * *)(*DAT_140c65670 + 0xf8))();
        lVar1 = (**(code * *)(*DAT_140c65670 + 0xe0))(DAT_140c65670, *(int *) param_2[2] << 4, 1);
        if (lVar1 != 0) {
            FUN_1407db590(lVar1, *(undefined8 * )((uint *) param_2[2] + 2),
                          (ulonglong) * (uint *) param_2[2] << 4);
            (**(code * *)(*DAT_140c65670 + 0xe8))();
            lVar1 = (**(code * *)(*(longlong *) param_2[6] + 0x18))();
            if ((DAT_140dc0c10 & 1) == 0) {
                DAT_140dc0c10 = DAT_140dc0c10 | 1;
                _DAT_140dc0c20 = 0x40000000;
                uRam0000000140dc0c24 = 0;
                uRam0000000140dc0c28 = 0;
                uRam0000000140dc0c2c = 0;
                _DAT_140dc0c40 = ZEXT816(0);
                _DAT_140dc0c30 = 0;
                uRam0000000140dc0c34 = 0xc0000000;
                uRam0000000140dc0c38 = 0;
                uRam0000000140dc0c3c = 0;
                _DAT_140dc0c50 =
                        CONCAT412(fVar2, ZEXT812(CONCAT44(fVar2 / (float) (ulonglong) * (uint * )(lVar1 + 8) + fVar2,
                                                          -1.0 - fVar2 / (float) (ulonglong) * (uint * )(lVar1 + 4)
                        )));
            }
            local_d8 = *param_2;
            local_d0 = param_2[1];
            local_178 = local_d8;
            uStack368 = local_d0;
            FUN_1401afb10(&local_d8, local_c8);
            local_88 = local_c8;
            _local_178 = CONCAT88(0x140dc0c20, local_88);
            local_80 = &DAT_140dc0c20;
            FUN_1401afb10(&local_88, local_118);
            local_190 = 0;
            local_198 = (undefined * )((ulonglong) local_198 & 0xffffffff00000000);
            local_148 = CONCAT412(uStack228, ZEXT412(uStack260) << 0x20);
            local_128 = CONCAT412(uStack220, ZEXT412(uStack252) << 0x20);
            (**(code * *)(*DAT_140c65670 + 0x148))(DAT_140c65670, 0x40, local_158);
            local_190 = *(undefined4 *) param_2[2];
            local_180 = 1;
            local_188 = 0;
            local_198 = (undefined * )((ulonglong) local_198 & 0xffffffff00000000);
            (**(code * *)(*DAT_140c65670 + 0x290))(DAT_140c65670, 3, 0, *(undefined4 *) param_2[3]);
        }
    }
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack440);
    return;
}


void FUN_1402610d0(longlong *param_1, undefined8 param_2, longlong param_3, longlong param_4) {
    undefined8 in_stack_ffffffffffffffc8;
    undefined4 uVar1;

    uVar1 = (undefined4)((ulonglong) in_stack_ffffffffffffffc8 >> 0x20);
    *(undefined4 * )((longlong) param_1 + 0x94) = 6;
    (**(code * *)(*param_1 + 0x48))();
    (**(code * *)(*param_1 + 0x50))(param_1);
    FUN_14025ec20(param_1, param_2);
    if (param_4 != 0) {
        (**(code * *)(*DAT_140c65670 + 0x1f0))(DAT_140c65670, param_4, 0);
    }
    if (param_3 == 0) {
        (**(code * *)(*DAT_140c65670 + 0x1a8))
                (DAT_140c65670, *(uint * )(param_1 + 0x12d), *(uint * )((longlong) param_1 + 0x96c) | 0x80);
        (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 1, 1, 1, CONCAT44(uVar1, 2));
        (**(code * *)(*DAT_140c65670 + 0x298))
                (DAT_140c65670, 0xffffffff, *DAT_140c65670, param_1 + 0xd9, param_1 + 0xda, 0);
    } else {
        (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, *(uint * )(param_1 + 0x12d) | 0x80);
        (**(code * *)(*DAT_140c65670 + 0x1b0))(DAT_140c65670, 1, 1, 1, CONCAT44(uVar1, 2));
        (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    }
    if (param_4 != 0) {
        (**(code * *)(*DAT_140c65670 + 0x1f0))(DAT_140c65670, 0, 0);
    }
    return;
}


void FUN_140261650(longlong *param_1, undefined8 param_2) {
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined8 uVar6;
    int local_res8;
    undefined8 in_stack_ffffffffffffff78;
    uint uVar8;
    ulonglong uVar7;
    undefined8 in_stack_ffffffffffffff80;
    uint uVar10;
    undefined8 uVar9;
    undefined4 local_78[2];
    longlong local_70;
    undefined4 local_64;
    undefined local_58[16];
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];

    uVar8 = (uint)((ulonglong) in_stack_ffffffffffffff78 >> 0x20);
    uVar10 = (uint)((ulonglong) in_stack_ffffffffffffff80 >> 0x20);
    local_70 = param_1[0xd7];
    *(undefined4 * )((longlong) param_1 + 0x94) = 8;
    local_78[0] = 1;
    local_64 = 0;
    (**(code * *)(*DAT_140c65670 + 0x210))
            (DAT_140c65670, local_78, *(undefined4 * )((longlong) param_1 + 0x95c));
    (**(code * *)(*DAT_140c65670 + 0x140))(DAT_140c65670, param_1[0x112], 0);
    uVar7 = (ulonglong) uVar8 << 0x20;
    local_58 = CONCAT412(*(undefined4 * )(param_1 + 0x2a),
                         CONCAT48(*(undefined4 * )(param_1 + 0x28),
                                  CONCAT44(*(undefined4 * )(param_1 + 0x26),
                                           *(undefined4 * )(param_1 + 0x24))));
    local_48 = CONCAT412(*(undefined4 * )((longlong) param_1 + 0x154),
                         ZEXT412(*(uint * )((longlong) param_1 + 0x134)) << 0x20);
    local_38 = CONCAT412(*(undefined4 * )(param_1 + 0x2b),
                         CONCAT48(*(undefined4 * )(param_1 + 0x29),
                                  CONCAT44(*(undefined4 * )(param_1 + 0x27),
                                           *(undefined4 * )(param_1 + 0x25))));
    local_28 = CONCAT412(*(undefined4 * )((longlong) param_1 + 0x15c),
                         ZEXT412(*(uint * )((longlong) param_1 + 0x13c)) << 0x20);
    (**(code * *)(*DAT_140c65670 + 0x148))
            (DAT_140c65670, 0x40, local_58, 0, uVar7, (ulonglong) uVar10 << 0x20);
    puVar5 = (undefined4 * )
            (**(code * *)(*DAT_140c65670 + 0x110))(DAT_140c65670, 0x30, 0, 0, uVar7 & 0xffffffff00000000);
    if (puVar5 != (undefined4 *) 0x0) {
        uVar2 = *(undefined4 * )((longlong) param_1 + 0x224);
        uVar3 = *(undefined4 * )(param_1 + 0x45);
        uVar4 = *(undefined4 * )((longlong) param_1 + 0x22c);
        *puVar5 = *(undefined4 * )(param_1 + 0x44);
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        uVar2 = *(undefined4 * )((longlong) param_1 + 0x234);
        uVar3 = *(undefined4 * )(param_1 + 0x47);
        uVar4 = *(undefined4 * )((longlong) param_1 + 0x23c);
        puVar5[4] = *(undefined4 * )(param_1 + 0x46);
        puVar5[5] = uVar2;
        puVar5[6] = uVar3;
        puVar5[7] = uVar4;
        uVar2 = *(undefined4 * )((longlong) param_1 + 0x254);
        uVar3 = *(undefined4 * )(param_1 + 0x4b);
        uVar4 = *(undefined4 * )((longlong) param_1 + 0x25c);
        puVar5[8] = *(undefined4 * )(param_1 + 0x4a);
        puVar5[9] = uVar2;
        puVar5[10] = uVar3;
        puVar5[0xb] = uVar4;
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    if (*(int *) (param_1 + 0x12d) != 0) {
        (**(code * *)(*param_1 + 0x50))(param_1);
        local_70 = param_1[0xd6];
        local_78[0] = 1;
        local_64 = 0;
        (**(code * *)(*DAT_140c65670 + 0x208))
                (DAT_140c65670, local_78, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
        (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x123);
        (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 1);
        (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 1, 0);
        (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
        (**(code * *)(*DAT_140c65670 + 0x1a8))
                (DAT_140c65670, *(undefined4 * )(param_1 + 0x12e), *(undefined4 * )(param_1 + 0x12e), 0);
        if (*(int *) (param_1 + 6) == 9) {
            (**(code * *)(*DAT_140c65670 + 0x1a0))(DAT_140c65670, 0, 0);
        }
        iVar1 = *(int *) (param_1 + 6);
        if ((iVar1 == 9) || (iVar1 == 0xd)) {
            (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, param_1[0xd7], 0, param_1[0x101]);
            local_res8 = 1;
        } else if (iVar1 == 0x12) {
            (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 1, param_1[0xd5], 0, 0);
            local_res8 = 0;
        }
        (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, param_1[0x114], local_res8 * 0xc + 9);
        (**(code * *)(*DAT_140c65670 + 0x298))
                (DAT_140c65670, 0xffffffff, *DAT_140c65670, param_1 + 0xd9, param_1 + 0xda, 0);
        (**(code * *)(*DAT_140c65670 + 0x2a0))();
    }
    if ((*(int *) (param_1 + 0x4c) == 0) && (*(int *) (param_1 + 6) == 0x12)) goto LAB_140261b7e;
    (**(code * *)(*param_1 + 0x50))(param_1);
    (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
    iVar1 = *(int *) (param_1 + 6);
    if (*(int *) (param_1 + 0x4c) == 0) {
        if (iVar1 == 9) {
            LAB_1402619c0:
            uVar6 = 4;
            uVar9 = uVar6;
            goto LAB_1402619c8;
        }
        if (iVar1 == 0xd) goto LAB_140261bb9;
    } else {
        if (iVar1 == 9) {
            uVar6 = 0;
            uVar9 = 4;
        } else {
            if (iVar1 != 0xd) {
                if (iVar1 != 0x12) goto LAB_1402619db;
                goto LAB_1402619c0;
            }
            LAB_140261bb9:
            uVar6 = 2;
            uVar9 = uVar6;
        }
        LAB_1402619c8:
        (**(code * *)(*DAT_140c65670 + 0x1a8))(DAT_140c65670, uVar6, uVar9, 0);
    }
    LAB_1402619db:
    local_70 = param_1[0x126];
    local_78[0] = 1;
    local_64 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_78, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x123);
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 7);
    (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 1, 4);
    FUN_14025ed60(param_1, param_2, 0, 1);
    uVar9 = 0;
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_70 = param_1[0xd6];
    local_78[0] = 1;
    local_64 = 0;
    (**(code * *)(*DAT_140c65670 + 0x208))
            (DAT_140c65670, local_78, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88, uVar9);
    (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_1 + 0x123);
    (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 1);
    (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 1, 0);
    FUN_14025efb0(param_1, 1);
    (**(code * *)(*DAT_140c65670 + 0x298))(DAT_140c65670, 0xffffffff);
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    LAB_140261b7e:
    // WARNING: Could not recover jumptable at 0x000140261b98. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*param_1 + 0x50))(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140262160(longlong param_1, longlong param_2) {
    char cVar1;
    short sVar4;
    short sVar5;
    short sVar6;
    int iVar7;
    float fVar8;
    uint uVar9;
    int iVar10;
    undefined(*pauVar11)[16];
    undefined extraout_XMM0_Ba;
    undefined extraout_XMM0_Bb;
    undefined extraout_XMM0_Bc;
    undefined uVar12;
    undefined extraout_XMM0_Bd;
    undefined extraout_XMM0_Be;
    undefined extraout_XMM0_Bf;
    undefined uVar13;
    undefined extraout_XMM0_Bg;
    char cVar14;
    undefined extraout_XMM0_Bh;
    uint uVar15;
    int iVar16;
    short sVar17;
    undefined auVar20[12];
    undefined auVar21[16];
    undefined auVar24[16];
    ulonglong uVar25;
    undefined local_18[16];
    char cVar2;
    char cVar3;
    undefined4 uVar18;
    undefined6 uVar19;
    undefined auVar22[16];
    undefined auVar23[16];

    // WARNING (jumptable): Read-only address (ram,0x000140b7b6f4) is written
    uVar25 = 0;
    (**(code * *)(*DAT_140c65670 + 0x160))(DAT_140c65670, 0, *(undefined8 * )(param_2 + 0x300), 0, 0);
    (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_1 + 0x848), 0);
    pauVar11 = (undefined(*)[16])
            (**(code * *)(*DAT_140c65670 + 0x110))
            (DAT_140c65670, 0x10, 0, 0, uVar25 & 0xffffffff00000000);
    if (pauVar11 != (undefined (*)[16]) 0x0) {
        fVar8 = *(float *) (param_2 + 0x264) * 2.0;
        *pauVar11 = CONCAT412(*(float *) (param_2 + 0x26c) * 2.0,
                              CONCAT48(*(float *) (param_2 + 0x268) * 2.0,
                                       CONCAT17((char) ((uint) fVar8 >> 0x18),
                                                CONCAT16((char) ((uint) fVar8 >> 0x10),
                                                         CONCAT15((char) ((uint) fVar8 >> 8),
                                                                  CONCAT14(SUB41(fVar8, 0),
                                                                           *(float *) (param_2 + 0x260) *
                                                                           2.0))))));
        (**(code * *)(*DAT_140c65670 + 0x118))();
    }
    // WARNING (jumptable): Read-only address (ram,0x000140b7b6f4) is written
    (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 4, 5);
    uVar15 = CONCAT13(extraout_XMM0_Bd,
                      CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba))) ^
             CONCAT13(extraout_XMM0_Bd,
                      CONCAT12(extraout_XMM0_Bc, CONCAT11(extraout_XMM0_Bb, extraout_XMM0_Ba)));
    uVar12 = (undefined)(uVar15 >> 0x10);
    uVar9 = CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be))) ^
            CONCAT13(extraout_XMM0_Bh,
                     CONCAT12(extraout_XMM0_Bg, CONCAT11(extraout_XMM0_Bf, extraout_XMM0_Be)));
    uVar13 = (undefined)(uVar9 >> 8);
    auVar23 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          ((char) (uVar9 >> 0x18),
                                                                                                                           CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38, 0),
                                                                                                                                     SUB1614(_DAT_140b7b6f0, 0))) >> 0x70, 0),
                                                                                                           CONCAT113((char) (uVar9 >> 0x10),
                                                                                                                     SUB1613(_DAT_140b7b6f0, 0))) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6f0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar13, SUB1611(_DAT_140b7b6f0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19((char) uVar9,
                                                                          SUB169(_DAT_140b7b6f0, 0))) >>
                                                                                                      0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6f0, 0))) >> 0x40, 0),
                                (char) (uVar15 >> 0x18)), (SUB167(_DAT_140b7b6f0, 0) >> 0x18) << 0x30);
    auVar22 = CONCAT115(CONCAT101(SUB1610(auVar23 >> 0x30, 0), uVar12),
                        (SUB165(_DAT_140b7b6f0, 0) >> 0x10) << 0x20);
    auVar21 = CONCAT133(SUB1613(CONCAT124(SUB1612(auVar22 >> 0x20, 0), (uVar15 >> 8) << 0x18) >> 0x18, 0),
                        (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10);
    auVar24 = CONCAT142(SUB1614(auVar21 >> 0x10, 0),
                        SUB162(_DAT_140b7b6f0, 0) & 0xff | (ushort)(byte)
    uVar15 << 8);
    auVar20 = CONCAT48((float) (SUB164(auVar24, 0) & 0xffff | uVar15 << 0x10) * 0.003921569,
                       CONCAT44((float) CONCAT13((char) (((ulonglong)(ushort)(uVar15 >> 0x10) << 0x30)
                                                         >> 0x38),
                                                 CONCAT12(uVar12, SUB162(auVar21 >> 0x10, 0))) *
                                0.003921569,
                                (float) CONCAT13(uVar13, CONCAT12((char) uVar9, SUB162(auVar22 >> 0x20, 0))
                                ) * 0.003921569));
    local_18 = CONCAT412(*(undefined4 * )(param_2 + 0x2e4), auVar20);
    auVar24 = maxps(CONCAT412((float) SUB164(CONCAT214((short) (uVar9 >> 0x10),
                                                       CONCAT212(SUB162(auVar23 >> 0x30, 0),
                                                                 SUB1612(auVar24, 0))) >> 0x60, 0) *
                              0.003921569, auVar20) & (undefined[16]) 0x0, local_18);
    auVar24 = minps(auVar24, _DAT_140b7b240);
    iVar7 = (int) (SUB164(auVar24, 0) * 255.0 + 0.5);
    iVar10 = (int) (SUB164(auVar24 >> 0x20, 0) * 255.0 + 0.5);
    cVar14 = (char) ((uint) iVar10 >> 0x10);
    uVar15 = (uint)(SUB164(auVar24 >> 0x40, 0) * 255.0 + 0.5);
    iVar16 = (int) (SUB164(auVar24 >> 0x60, 0) * 255.0 + 0.5);
    uVar25 = CONCAT17((char) ((uint) iVar10 >> 0x18),
                      CONCAT16(cVar14, CONCAT15((char) ((uint) iVar10 >> 8), CONCAT14((char) iVar10, iVar7))
                      )) & 0xffffffff00000000;
    sVar4 = (short) uVar15;
    cVar1 = (0 < sVar4) * (sVar4 < 0xff) * (char) uVar15 - (0xff < sVar4);
    sVar4 = (short) ((ulonglong) uVar15 >> 0x10);
    sVar17 = CONCAT11((0 < sVar4) * (sVar4 < 0xff) * (char) (uVar15 >> 0x10) - (0xff < sVar4), cVar1);
    sVar4 = (short) (uVar25 >> 0x20);
    cVar2 = (0 < sVar4) * (sVar4 < 0xff) * (char) iVar10 - (0xff < sVar4);
    sVar4 = (short) (uVar25 >> 0x30);
    uVar18 = CONCAT13((0 < sVar4) * (sVar4 < 0xff) * cVar14 - (0xff < sVar4), CONCAT12(cVar2, sVar17));
    sVar4 = (short) iVar7;
    cVar14 = (0 < sVar4) * (sVar4 < 0xff) * (char) iVar7 - (0xff < sVar4);
    sVar4 = (short) ((uint) iVar7 >> 0x10);
    uVar19 = CONCAT15((0 < sVar4) * (sVar4 < 0xff) * (char) ((uint) iVar7 >> 0x10) - (0xff < sVar4),
                      CONCAT14(cVar14, uVar18));
    sVar4 = (short) iVar16;
    cVar3 = (0 < sVar4) * (sVar4 < 0xff) * (char) iVar16 - (0xff < sVar4);
    sVar6 = (short) ((uint) iVar16 >> 0x10);
    sVar4 = (short) ((uint) uVar18 >> 0x10);
    sVar5 = (short) ((uint6) uVar19 >> 0x20);
    sVar6 = (short) (CONCAT17((0 < sVar6) * (sVar6 < 0xff) * (char) ((uint) iVar16 >> 0x10) -
                              (0xff < sVar6), CONCAT16(cVar3, uVar19)) >> 0x30);
    (**(code * *)(*DAT_140c65670 + 0x298))
            (DAT_140c65670,
             CONCAT13((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                      CONCAT12((0 < sVar5) * (sVar5 < 0xff) * cVar14 - (0xff < sVar5),
                               CONCAT11((0 < sVar4) * (sVar4 < 0xff) * cVar2 - (0xff < sVar4),
                                        (0 < sVar17) * (sVar17 < 0xff) * cVar1 - (0xff < sVar17)))),
             *DAT_140c65670, param_1 + 0x6c8, param_1 + 0x6d0, 0);
    // WARNING: Could not recover jumptable at 0x0001402622bd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    return;
}


void FUN_1402622d0(undefined8 param_1, undefined8 param_2, longlong param_3, undefined8 param_4) {
    undefined8 uVar1;
    undefined4 local_28[2];
    undefined8 local_20;
    undefined4 local_14;

    if (*(int *) (param_3 + 0x968) != 0) {
        local_20 = *(undefined8 * )(param_3 + 0x930);
        local_28[0] = 1;
        local_14 = 0;
        (**(code * *)(*DAT_140c65670 + 0x208))
                (DAT_140c65670, local_28, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
        (**(code * *)(*DAT_140c65670 + 0x250))(DAT_140c65670, param_3 + 0x918);
        (**(code * *)(*DAT_140c65670 + 0x150))(DAT_140c65670, 0);
        (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 7);
        (**(code * *)(*DAT_140c65670 + 0x1d0))(DAT_140c65670, 1, 4);
        (**(code * *)(*DAT_140c65670 + 400))(DAT_140c65670, 7);
        uVar1 = FUN_14025ed60(param_3, param_4, 0, 0);
        (**(code * *)(*DAT_140c65670 + 0x298))
                (uVar1, param_2, 0, DAT_140c65670, 0xffffffff, *DAT_140c65670, param_3 + 0x6c8,
                 param_3 + 0x6d0, 0);
        (**(code * *)(*DAT_140c65670 + 0x2a0))();
    }
    return;
}


void FUN_140262400(longlong param_1, undefined8 param_2) {
    undefined8 uVar1;
    int iVar2;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    *(undefined4 * )(param_1 + 0x94) = 0xb;
    (**(code * *)(*DAT_140c65670 + 0x2a0))();
    local_38 = *(undefined8 * )(param_1 + 0x670);
    local_30 = *(undefined8 * )(param_1 + 0x800);
    local_18 = 0;
    local_28 = 0x200000000;
    local_20 = 1;
    FUN_140258740(param_1, &local_38, param_2);
    local_38 = *(undefined8 * )(param_1 + 0x670);
    local_30 = *(undefined8 * )(param_1 + 0x678);
    local_28 = 0;
    local_20 = 1;
    local_18 = 0;
    iVar2 = FUN_140258cc0(param_1, &local_38, param_2);
    if (iVar2 != 0) {
        uVar1 = *(undefined8 * )(param_1 + 0x670);
        *(undefined8 * )(param_1 + 0x670) = *(undefined8 * )(param_1 + 0x678);
        *(undefined8 * )(param_1 + 0x678) = uVar1;
    }
    return;
}


void FUN_140262570(longlong param_1, longlong *param_2, undefined (*param_3)[16]) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;

    if (param_2 != (longlong *) 0x0) {
        lVar3 = (**(code * *)(*param_2 + 0x18))();
        fVar6 = 0.0;
        iVar1 = *(int *) (lVar3 + 4);
        iVar2 = *(int *) (lVar3 + 8);
        iVar5 = iVar1;
        if (iVar1 < (int) DAT_140c77768) {
            iVar5 = (int) DAT_140c77768;
        }
        iVar4 = iVar2;
        if (iVar2 < DAT_140c77768._4_4_) {
            iVar4 = DAT_140c77768._4_4_;
        }
        if (*(float *) (param_1 + 0x6e4) <= 1.0) {
            fVar7 = 0.0;
        } else {
            fVar7 = ((float) iVar4 - 1.0) / ((*(float *) (param_1 + 0x6e4) - 1.0) * (float) iVar2);
        }
        if (1.0 < *(float *) (param_1 + 0x6e0)) {
            fVar6 = ((float) iVar5 - 1.0) / ((*(float *) (param_1 + 0x6e0) - 1.0) * (float) iVar1);
        }
        *param_3 = CONCAT412(0.5 / (float) iVar2, CONCAT48(0.5 / (float) iVar1, CONCAT44(fVar7, fVar6)));
        return;
    }
    *(undefined4 * ) * param_3 = 0;
    *(undefined4 * )(*param_3 + 4) = 0;
    *(undefined4 * )(*param_3 + 8) = 0;
    *(undefined4 * )(*param_3 + 0xc) = 0;
    return;
}


void FUN_1402626b0(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    ulonglong uVar8;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        puVar5 = (undefined4 *) FUN_14018db00(*param_1, param_2, 0x10);
        if ((undefined4 * ) * param_1 != puVar5) {
            uVar8 = 0;
            if (param_1[1] != 0) {
                puVar7 = puVar5;
                do {
                    if (puVar7 != (undefined4 *) 0x0) {
                        puVar6 = (undefined4 * )((longlong) puVar7 + (*param_1 - (longlong) puVar5));
                        uVar2 = puVar6[1];
                        uVar3 = puVar6[2];
                        uVar4 = puVar6[3];
                        *puVar7 = *puVar6;
                        puVar7[1] = uVar2;
                        puVar7[2] = uVar3;
                        puVar7[3] = uVar4;
                    }
                    uVar8 = uVar8 + 1;
                    puVar7 = puVar7 + 4;
                } while (uVar8 < (ulonglong) param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = (longlong) puVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}


void FUN_140262750(longlong param_1, undefined8 *param_2, longlong param_3) {
    float fVar1;
    float fVar2;

    fVar2 = 1.0;
    if (*(float *) (param_1 + 700) <= *(float *) (param_1 + 0x2b8)) {
        *param_2 = 0;
    } else {
        fVar1 = (*(float *) (param_1 + 0x2b8) + *(float *) (param_1 + 700)) * 0.5;
        fVar1 = -1.0 / (fVar1 * fVar1);
        *(float *) param_2 = fVar1;
        fVar1 = (float) FUN_1408fc7f0(*(float *) (param_1 + 700) * *(float *) (param_1 + 700) * fVar1 *
                                      0.6931472);
        *(float *) ((longlong) param_2 + 4) = fVar2 / (fVar1 - fVar2);
    }
    if (*(float *) (param_1 + 0x2f4) <= 0.0) {
        if (*(float *) (param_1 + 0x2c4) <= *(float *) (param_1 + 0x2c0)) goto LAB_140262874;
        fVar1 = -2.0 / (*(float *) (param_1 + 0x2c0) + *(float *) (param_1 + 0x2c4));
        *(float *) (param_2 + 1) = fVar1;
        fVar1 = fVar1 * *(float *) (param_1 + 0x2c4);
    } else {
        if (*(float *) (param_1 + 0x2cc) <= *(float *) (param_1 + 0x2c8)) {
            LAB_140262874:
            param_2[1] = 0;
            goto LAB_140262878;
        }
        fVar1 = -2.0 / (*(float *) (param_1 + 0x2c8) + *(float *) (param_1 + 0x2cc));
        *(float *) (param_2 + 1) = fVar1;
        fVar1 = fVar1 * *(float *) (param_1 + 0x2cc);
    }
    fVar1 = (float) FUN_1408fc7f0(fVar1 * 0.6931472);
    *(float *) ((longlong) param_2 + 0xc) = fVar2 / (fVar1 - fVar2);
    LAB_140262878:
    *(undefined4 * )(param_2 + 2) = *(undefined4 * )(param_1 + 0xd0);
    *(undefined4 * )((longlong) param_2 + 0x14) = *(undefined4 * )(param_1 + 0xd4);
    *(undefined4 * )(param_2 + 3) = *(undefined4 * )(param_1 + 0xd8);
    *(undefined4 * )(param_2 + 4) = *(undefined4 * )(param_3 + 0x10);
    *(undefined4 * )((longlong) param_2 + 0x24) = *(undefined4 * )(param_3 + 0x14);
    *(undefined4 * )(param_2 + 5) = *(undefined4 * )(param_3 + 0x18);
    if (*(float *) (param_1 + 0x2f0) <= *(float *) (param_1 + 0x2ec)) {
        *(undefined4 * )((longlong) param_2 + 0x1c) = 0;
        *(undefined4 * )((longlong) param_2 + 0x2c) = 0;
    } else {
        fVar2 = fVar2 / (*(float *) (param_1 + 0x2f0) - *(float *) (param_1 + 0x2ec));
        *(float *) ((longlong) param_2 + 0x1c) = fVar2;
        *(uint * )((longlong) param_2 + 0x2c) = (uint)(fVar2 * *(float *) (param_1 + 0x2ec)) ^ 0x80000000;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]

FUN_140262900(float *param_1, undefined (*param_2)[16], float *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
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

    uVar3 = uRam0000000140c777dc;
    uVar2 = uRam0000000140c777d8;
    uVar1 = uRam0000000140c777d4;
    fVar4 = param_3[2];
    fVar6 = param_3[1];
    fVar7 = fVar6 * -0.4886025;
    fVar8 = fVar4 * 0.4886025;
    fVar11 = fVar4 * fVar6 * -1.092548;
    fVar5 = *param_3;
    *(undefined4 * ) * param_2 = _DAT_140c777d0;
    *(undefined4 * )(*param_2 + 4) = uVar1;
    *(undefined4 * )(*param_2 + 8) = uVar2;
    *(undefined4 * )(*param_2 + 0xc) = uVar3;
    fVar9 = fVar5 * -0.4886025;
    fVar12 = (fVar4 * 3.0 * fVar4 - 1.0) * 0.3153916;
    fVar10 = fVar5 * fVar6 * 1.092548;
    fVar13 = fVar5 * fVar4 * -1.092548;
    fVar14 = (fVar5 * fVar5 - fVar6 * fVar6) * 0.5462742;
    fVar5 = *param_1 * 0.2820948 + *(float *) *param_2;
    *(float *) *param_2 = fVar5;
    fVar6 = param_1[0xc] * 0.2820948 + *(float *) (*param_2 + 4);
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = param_1[0x18] * 0.2820948 + *(float *) (*param_2 + 8);
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar7 * param_1[1] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar7 * param_1[0xd] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar7 * param_1[0x19] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar8 * param_1[2] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar8 * param_1[0xe] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar8 * param_1[0x1a] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar9 * param_1[3] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar9 * param_1[0xf] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar9 * param_1[0x1b] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar10 * param_1[4] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar10 * param_1[0x10] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar10 * param_1[0x1c] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar11 * param_1[5] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar11 * param_1[0x11] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar11 * param_1[0x1d] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar12 * param_1[6] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar12 * param_1[0x12] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar12 * param_1[0x1e] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    fVar5 = fVar13 * param_1[7] + fVar5;
    *(float *) *param_2 = fVar5;
    fVar6 = fVar13 * param_1[0x13] + fVar6;
    *(float *) (*param_2 + 4) = fVar6;
    fVar4 = fVar13 * param_1[0x1f] + fVar4;
    *(float *) (*param_2 + 8) = fVar4;
    *(float *) *param_2 = fVar14 * param_1[8] + fVar5;
    *(float *) (*param_2 + 4) = fVar14 * param_1[0x14] + fVar6;
    *(float *) (*param_2 + 8) = fVar14 * param_1[0x20] + fVar4;
    fVar4 = param_1[0x2c] * *param_3 + param_1[0x2d] * param_3[1] + 0.0;
    if (1.0 <= fVar4) {
        fVar4 = 1.0;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar4) {
        fVar6 = fVar4;
    }
    *param_2 = CONCAT412(*(float *) (*param_2 + 0xc) + param_1[0x27] * fVar6,
                         CONCAT48(*(float *) (*param_2 + 8) + param_1[0x26] * fVar6,
                                  CONCAT44(*(float *) (*param_2 + 4) + param_1[0x25] * fVar6,
                                           *(float *) *param_2 + param_1[0x24] * fVar6)));
    *(undefined4 * )(*param_2 + 0xc) = 0x3f800000;
    return param_2;
}


void FUN_140262c40(longlong param_1, float *param_2, longlong param_3) {
    float fVar1;
    float fVar2;
    undefined auStack152[32];
    longlong local_78;
    float *local_70;
    longlong local_68;
    longlong local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    local_78 = param_1;
    local_70 = param_2;
    FUN_1401ae910(&local_78, param_1);
    local_70 = (float *) (param_1 + 0x270);
    fVar1 = *(float *) (param_1 + 0xb0);
    fVar2 = *(float *) (param_1 + 0xb4);
    *(undefined(*)[16])(param_1 + 0xb0) =
            CONCAT412(fVar2 * param_2[7] + fVar1 * param_2[3] + param_2[0xb] * 0.0,
                      CONCAT48(fVar2 * param_2[6] + fVar1 * param_2[2] + param_2[10] * 0.0,
                               CONCAT44(fVar2 * param_2[5] + fVar1 * param_2[1] + param_2[9] * 0.0,
                                        fVar2 * param_2[4] + fVar1 * *param_2 + param_2[8] * 0.0)));
    local_78 = param_3;
    local_68 = param_3;
    local_60 = (longlong) local_70;
    FUN_1401afb10(&local_68);
    fVar1 = *(float *) (param_1 + 0xd0);
    fVar2 = *(float *) (param_1 + 0xd4);
    *(undefined(*)[16])(param_1 + 0xd0) =
            CONCAT412(fVar2 * param_2[7] + fVar1 * param_2[3] + param_2[0xb] * 0.0 + param_2[0xf],
                      CONCAT48(fVar2 * param_2[6] + fVar1 * param_2[2] + param_2[10] * 0.0 + param_2[0xe],
                               CONCAT44(fVar2 * param_2[5] + fVar1 * param_2[1] + param_2[9] * 0.0 +
                                        param_2[0xd],
                                        fVar2 * param_2[4] + fVar1 * *param_2 + param_2[8] * 0.0 +
                                        param_2[0xc])));
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack152);
    return;
}


void FUN_140262d50(float *param_1, undefined (*param_2)[16]) {
    float fVar1;

    if ((DAT_140dc0c60 & 1) == 0) {
        DAT_140dc0c60 = DAT_140dc0c60 | 1;
        DAT_140dc0c64 = 0.2365437;
    }
    fVar1 = DAT_140dc0c64;
    *param_2 = CONCAT412(*param_1 * 0.2820948 - param_1[6] * 0.07884789,
                         CONCAT48(param_1[2] * 0.325735,
                                  CONCAT44(param_1[1] * -0.325735, param_1[3] * -0.325735)));
    param_2[1] = CONCAT412(param_1[0xc] * 0.2820948 - param_1[0x12] * 0.07884789,
                           CONCAT48(param_1[0xe] * 0.325735,
                                    CONCAT44(param_1[0xd] * -0.325735, param_1[0xf] * -0.325735)));
    param_2[2] = CONCAT412(param_1[0x18] * 0.2820948 - param_1[0x1e] * 0.07884789,
                           CONCAT48(param_1[0x1a] * 0.325735,
                                    CONCAT44(param_1[0x19] * -0.325735, param_1[0x1b] * -0.325735)));
    param_2[3] = CONCAT412(param_1[7] * -0.2731371,
                           CONCAT48(fVar1 * param_1[6],
                                    CONCAT44(param_1[5] * -0.2731371, param_1[4] * 0.2731371)));
    param_2[4] = CONCAT412(param_1[0x13] * -0.2731371,
                           CONCAT48(fVar1 * param_1[0x12],
                                    CONCAT44(param_1[0x11] * -0.2731371, param_1[0x10] * 0.2731371)));
    param_2[5] = CONCAT412(param_1[0x1f] * -0.2731371,
                           CONCAT48(fVar1 * param_1[0x1e],
                                    CONCAT44(param_1[0x1d] * -0.2731371, param_1[0x1c] * 0.2731371)));
    param_2[6] = ZEXT1216(CONCAT48(param_1[0x20] * 0.1365686,
                                   CONCAT44(param_1[0x14] * 0.1365686, param_1[8] * 0.1365686)));
    return;
}


float FUN_140262fb0(float param_1, float param_2, float param_3) {
    float fVar1;
    float fVar2;

    if (param_2 <= param_1) {
        fVar2 = 0.0;
        fVar1 = 0.0;
    } else {
        fVar2 = -1.0 / ((param_1 + param_2) * 0.5);
        fVar1 = (float) FUN_1408fc7f0(fVar2 * param_2 * 0.6931472);
        fVar1 = 1.0 / (fVar1 - 1.0);
    }
    fVar2 = (float) FUN_1408fc7f0(fVar2 * param_3 * 0.6931472);
    fVar1 = fVar2 * fVar1 - fVar1;
    if (1.0 <= fVar1) {
        fVar1 = 1.0;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
        fVar2 = fVar1;
    }
    return fVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *FUN_1402630a0(undefined8 *param_1, undefined8 param_2) {
    int *piVar1;
    uint uVar2;
    undefined *puVar3;
    int iVar4;
    uint *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined **ppuVar8;
    longlong lVar9;
    uint uVar10;
    uint *puVar11;

    *param_1 = &PTR_LAB_140b60a80;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x301] = 0;
    FUN_140265f50(param_1 + 0x302);
    FUN_140264aa0(param_1 + 0x307);
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 * )(param_1 + 7) = 1;
    *(undefined4 * )((longlong) param_1 + 0x3c) = 1;
    *(undefined4 * )(param_1 + 8) = 1;
    *(undefined4 * )((longlong) param_1 + 0x44) = 0x1b;
    param_1[10] = param_2;
    FUN_1407e4830(param_1 + 0x11, 0, 0x68);
    FUN_1407e4830(param_1 + 0x1e, 0, 0x3b0);
    puVar6 = param_1 + 0x94;
    FUN_1407e4830(puVar6, 0);
    puVar11 = &DAT_140ae5d90;
    ppuVar8 = &PTR_DAT_140c38350;
    lVar7 = 0x17;
    do {
        puVar3 = *ppuVar8;
        uVar10 = 0xffffffff;
        if (puVar3 < puVar3 + (ulonglong) * puVar11 * 0x10) {
            puVar5 = (uint * )(puVar3 + 8);
            lVar9 = ((ulonglong)(puVar3 + (ulonglong) * puVar11 * 0x10 + (-1 - (longlong) puVar3)) >> 4) + 1;
            do {
                iVar4 = *(int *) (&DAT_140ae4d78 + (longlong)(int)
                puVar5[-1] * 4);
                uVar2 = *puVar5;
                if (*(uint *) puVar6 < uVar2 || *(uint *) puVar6 == uVar2) {
                    *(uint *) puVar6 = uVar2 + 1;
                }
                piVar1 = (int *) ((longlong) puVar6 + (ulonglong) * puVar5 * 4 + 4);
                *piVar1 = *piVar1 + iVar4;
                if (puVar5[1] == 0) {
                    *(uint * )(puVar6 + 9) = *(uint * )(puVar6 + 9) + iVar4;
                    if (*puVar5 != uVar10) {
                        *(uint * )((longlong) puVar6 + (ulonglong) * (uint * )((longlong) puVar6 + 0x4c) * 4 + 0x50) =
                                *puVar5;
                        *(uint * )((longlong) puVar6 + 0x4c) = *(uint * )((longlong) puVar6 + 0x4c) + 1;
                    }
                } else {
                    uVar2 = *puVar5;
                    *(uint * )(puVar6 + 0x12) = *(uint * )(puVar6 + 0x12) + iVar4;
                    *(uint * )((longlong) puVar6 + 0x44) =
                            *(uint * )((longlong) puVar6 + 0x44) | 1 << ((byte) uVar2 & 0x1f);
                    if (uVar10 != *puVar5) {
                        *(uint * )((longlong) puVar6 + (ulonglong) * (uint * )((longlong) puVar6 + 0x94) * 4 + 0x98) =
                                *puVar5;
                        *(uint * )((longlong) puVar6 + 0x94) = *(uint * )((longlong) puVar6 + 0x94) + 1;
                    }
                }
                uVar10 = *puVar5;
                puVar5 = puVar5 + 4;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
        }
        puVar6 = puVar6 + 0x1b;
        ppuVar8 = ppuVar8 + 1;
        puVar11 = puVar11 + 1;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (_DAT_140c65690 == 0) {
        _DAT_140c65690 = 1;
        iVar4 = FUN_14080b190();
        if ((iVar4 == 0) && (iVar4 = FUN_14080c3b0(&DAT_140c65698, &DAT_140c656a0), iVar4 == 0)) {
            DAT_140c65694 = 1;
        }
    }
    return param_1;
}


undefined8 FUN_1402632b0(undefined8 param_1, ulonglong param_2) {
    FUN_1402632f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402632f0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b60a80;
    FUN_1401981b0();
    FUN_140019490(param_1 + 0x307);
    FUN_14018b900(param_1[0x309], 0);
    param_1[0x309] = 0;
    FUN_140019490(param_1 + 0x302);
    FUN_14018b900(param_1[0x304], 0);
    param_1[0x304] = 0;
    if (param_1[0x301] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[6] != 0) {
        CloseHandle((HANDLE) param_1[6]);
    }
    FUN_1401981b0(param_1 + 2);
    if (param_1[2] != 0) {
        FUN_1401a4a00(param_1 + 2);
    }
    return;
}


undefined8 FUN_140263690(undefined8 param_1, undefined8 *param_2, undefined8 *param_3) {
    undefined8 *puVar1;

    if ((param_2 != (undefined8 *) 0x0) && (param_3 != (undefined8 *) 0x0)) {
        puVar1 = (undefined8 *) FUN_14018b280(0x40);
        if (puVar1 != (undefined8 *) 0x0) {
            *(undefined4 * )(puVar1 + 1) = 1;
            puVar1[2] = param_2;
            *puVar1 = &PTR_LAB_140b61700;
            (**(code * *) * param_2)(param_2);
            *(undefined4 * )(puVar1 + 7) = 0;
            *param_3 = puVar1;
            return 0;
        }
        *param_3 = 0;
        return 0;
    }
    return 0x80070057;
}


void FUN_140263730(longlong *param_1, ulonglong param_2, longlong *param_3, undefined4 param_4) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_3 != (longlong *) 0x0) {
        lVar1 = *param_1;
        uVar2 = (**(code * *)(*param_3 + 0x38))(param_3);
        (**(code * *)(lVar1 + 0x160))(param_1, param_2 & 0xffffffff, uVar2, param_4, 0);
        return;
    }
    (**(code * *)(*param_1 + 0x160))(param_1, param_2, 0, 0, 0);
    return;
}


void FUN_140263800(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;

    FUN_1401981b0(param_1 + 0x10);
    for (plVar1 = *(longlong * *)(param_1 + 0x1808); plVar1 != (longlong *) 0x0;
         plVar1 = (longlong *) plVar1[0x13]) {
        lVar2 = (**(code * *)(*plVar1 + 0x28))(plVar1);
        FUN_1400035b0(0xe, 1, 0, plVar1, *(undefined8 * )(lVar2 + 0x18));
    }
    return;
}


undefined8 FUN_140263860(int param_1, int param_2, undefined4 *param_3, uint *param_4) {
    int iVar1;
    undefined8 local_48;
    undefined **local_40;
    undefined8 local_38;
    LPVOID local_30;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (param_2 == 0) {
        *param_3 = 0;
        *param_4 = *param_4 & 0xffffff40;
    } else if (((param_2 - 3U & 0xfffffffd) == 0) && (param_1 == 1)) {
        local_38 = 0;
        local_40 = &PTR_LAB_140b5e648;
        local_30 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_40);
        local_28 = local_40;
        local_48 = 0x141ddff20;
        local_18 = local_30;
        local_20 = local_38;
        iVar1 = FUN_1401971e0(&DAT_140c8a2c8, 0xe, &local_48, &local_28);
        local_40 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_30);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    if (param_1 == 0) {
        *param_4 = *param_4 & 0xffffffcf;
    }
    return 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140263970(int *param_1, longlong param_2) {
    uint uVar1;
    uint uVar2;
    uint uVar3;
    byte bVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    uint uVar9;
    undefined *puVar10;
    LPVOID lpTlsValue;
    undefined8 local_res8;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_60;
    undefined8 local_58;
    LPVOID local_50;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;

    switch (param_1[7]) {
        case 0:
            param_1[9] = param_1[9] & 0xffffff40;
            param_1[8] = 0;
            break;
        case 1:
        case 2:
        case 4:
            if ((&DAT_140ae64c0)[param_1[6]] != 0) {
                local_70 = 0;
                local_78 = &PTR_LAB_140b5e648;
                local_68 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_78);
                local_48 = local_78;
                local_res8 = 0x141ddfea0;
                local_38 = local_68;
                local_40 = local_70;
                iVar7 = FUN_1401971e0(&DAT_140c8a2cc, 0xe, &local_res8, &local_48);
                local_78 = &PTR_LAB_140b5e648;
                lpTlsValue = local_68;
                goto LAB_140263e16;
            }
            break;
        case 3:
        case 5:
            if (*(int *) (&DAT_140ae6450 + (longlong) param_1[6] * 4) != 0) break;
            local_58 = 0;
            local_60 = &PTR_LAB_140b5e648;
            local_50 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_60);
            local_res8 = 0x141ddfe00;
            puVar10 = &DAT_140c8a2b8;
            goto LAB_140263dda;
    }
    iVar7 = *param_1;
    if (iVar7 == 0) {
        param_1[9] = param_1[9] & 0xffffffcf;
        param_1[3] = 1;
    }
    uVar1 = param_1[1];
    lVar8 = (longlong) param_1[6] * 0x2c;
    local_48 = (undefined **) CONCAT44(*(undefined4 * )(&DAT_140ae5204 + lVar8), local_48._0_4_);
    local_40 = *(undefined8 * )(&DAT_140ae5208 + lVar8);
    local_38 = *(LPVOID * )(&DAT_140ae5210 + lVar8);
    local_2c = *(undefined4 * )(&DAT_140ae521c + lVar8);
    local_28 = *(undefined4 * )(&DAT_140ae5220 + lVar8);
    local_24 = *(undefined4 * )(&DAT_140ae5224 + lVar8);
    local_20 = *(undefined4 * )(&DAT_140ae5228 + lVar8);
    if (((uVar1 < *(uint * )(&DAT_140ae5200 + lVar8)) ||
         (uVar2 = param_1[2], uVar2 < *(uint * )(&DAT_140ae520c + lVar8))) ||
        (uVar3 = param_1[3], uVar3 < *(uint * )(&DAT_140ae5218 + lVar8))) {
        local_58 = 0;
        local_60 = &PTR_LAB_140b5e648;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_res8 = 0x141ddfd80;
        puVar10 = &DAT_140c8a2bc;
    } else if ((*(uint * )(param_2 + 0x38) < uVar1) || (*(uint * )(param_2 + 0x38) < uVar2)) {
        local_58 = 0;
        local_60 = &PTR_LAB_140b5e648;
        local_50 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_60);
        local_res8 = 0x141ddfd10;
        puVar10 = &DAT_140c8a2c0;
    } else {
        uVar9 = 1;
        if ((param_1[9] & 0x180U) == 0) {
            uVar6 = 2;
            if (1 < uVar1) {
                do {
                    uVar6 = uVar6 << 1 | (uint)((int) uVar6 < 0);
                    uVar9 = uVar9 + 1;
                } while (uVar6 <= uVar1);
            }
            bVar4 = (byte) uVar9 & 0x1f;
            uVar6 = 1 << bVar4 | 1U >> 0x20 - bVar4;
            uVar5 = 1 << ((byte) uVar9 & 0x1f);
            while (uVar5 <= uVar2) {
                uVar9 = uVar9 + 1;
                uVar6 = uVar6 << 1 | (uint)((int) uVar6 < 0);
                uVar5 = uVar6;
            }
            bVar4 = (byte) uVar9 & 0x1f;
            uVar6 = 1 << bVar4 | 1U >> 0x20 - bVar4;
            uVar5 = 1 << ((byte) uVar9 & 0x1f);
            while (uVar5 <= uVar3) {
                uVar9 = uVar9 + 1;
                uVar6 = uVar6 << 1 | (uint)((int) uVar6 < 0);
                uVar5 = uVar6;
            }
        }
        if (param_1[5] == 0) {
            param_1[5] = uVar9;
        }
        if ((uint) param_1[5] < uVar9 || param_1[5] == uVar9) {
            if (param_1[7] == 0) {
                return 0;
            }
            if (iVar7 == 1) {
                if ((((uVar1 & uVar1 - 1) == 0) && ((uVar2 & uVar2 - 1) == 0)) && ((uVar3 & uVar3 - 1) == 0)
                        ) {
                    return 0;
                }
                local_70 = 0;
                puVar10 = &DAT_1409e3bb4;
                if (*(undefined * *)(param_1 + 0xc) != (undefined *) 0x0) {
                    puVar10 = *(undefined * *)(param_1 + 0xc);
                }
                local_78 = &PTR_LAB_140b5e648;
                local_68 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_78);
                local_res8 = 0x141de0050;
                local_48 = local_78;
                local_40 = local_70;
                local_38 = local_68;
                iVar7 = FUN_1401971e0(&DAT_140c8a2b0, 0xe, &local_res8, puVar10, param_1[1], param_1[2],
                                      param_1[3], *param_1, param_1[4], param_1[5], param_1[6], param_1[7],
                                      param_1[8], param_1[9], param_1[10], param_1[0xe], &local_48);
                local_78 = &PTR_LAB_140b5e648;
                lpTlsValue = local_68;
                goto LAB_140263e16;
            }
            if (iVar7 != 2) {
                return 0;
            }
            if ((uVar1 & uVar1 - 1) == 0) {
                return 0;
            }
            local_58 = 0;
            local_60 = &PTR_LAB_140b5e648;
            local_50 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_60);
            local_res8 = 0x141ddfff0;
            puVar10 = &DAT_140c8a2b4;
        } else {
            local_58 = 0;
            local_60 = &PTR_LAB_140b5e648;
            local_50 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_60);
            local_res8 = 0x141de0150;
            puVar10 = &DAT_140c8a2c4;
        }
    }
    LAB_140263dda:
    local_48 = local_60;
    local_40 = local_58;
    local_38 = local_50;
    iVar7 = FUN_1401971e0(puVar10, 0xe, &local_res8, &local_48);
    local_60 = &PTR_LAB_140b5e648;
    lpTlsValue = local_50;
    LAB_140263e16:
    TlsSetValue(DAT_140c63720, lpTlsValue);
    if (iVar7 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}


int FUN_140263e70(int *param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    iVar3 = param_1[5];
    iVar2 = 0;
    if (iVar3 != 0) {
        do {
            if (param_1[6] - 0xdU < 3) {
                iVar1 = (uVar5 + 3 >> 2) * (uVar4 + 3 >> 2) * uVar6;
            } else {
                iVar1 = uVar6 * uVar5 * uVar4;
            }
            iVar2 = iVar2 + iVar1;
            uVar4 = (uVar4 >> 1) + (uint)(uVar4 >> 1 == 0);
            uVar5 = (uVar5 >> 1) + (uint)(uVar5 >> 1 == 0);
            uVar6 = (uVar6 >> 1) + (uint)(uVar6 >> 1 == 0);
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    if (*param_1 == 2) {
        iVar2 = iVar2 * 6;
    }
    return *(int *) (&DAT_140ae6320 + (longlong) param_1[6] * 4) * iVar2;
}


longlong FUN_140263f30(longlong param_1, longlong param_2) {
    short sVar1;
    short *psVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    psVar3 = (short *) FUN_1407dd8d8(param_1, 0x2e);
    if (psVar3 == (short *) 0x0) {
        return param_2;
    }
    lVar5 = (longlong) psVar3 - param_1 >> 1;
    lVar6 = -lVar5;
    lVar4 = lVar6 + 0x104;
    if (lVar6 + 0x103U < 0x7fffffff) {
        lVar6 = (longlong) L".tex" - (longlong) psVar3;
        psVar2 = psVar3;
        while ((psVar3 = psVar2, lVar5 + 0x7ffffefa + lVar4 != 0 &&
                                 (sVar1 = *(short *) (lVar6 + (longlong) psVar3), sVar1 != 0))) {
            *psVar3 = sVar1;
            lVar4 = lVar4 + -1;
            psVar2 = psVar3 + 1;
            if (lVar4 == 0) {
                *psVar3 = 0;
                return param_1;
            }
        }
        if (lVar4 == 0) {
            psVar3[-1] = 0;
            return param_1;
        }
    } else if (lVar4 == 0) {
        return param_1;
    }
    *psVar3 = 0;
    return param_1;
}


longlong FUN_140264000(longlong param_1, undefined8 param_2, longlong param_3, int param_4) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res10;
    longlong local_18[2];

    local_res10 = param_2;
    lVar2 = FUN_1407dd8d8(param_3, 0x2e);
    if (lVar2 != 0) {
        local_res10 = 0x104;
        local_18[0] = param_1;
        iVar1 = FUN_140265fd0(param_1, 0x104, param_3, lVar2 - param_3 >> 1, local_18, &local_res10);
        if (((-1 < iVar1) &&
             (iVar1 = FUN_1401a3210(local_18[0], local_res10, local_18, &local_res10, 0, &DAT_140ae4cf8,
                                    (&PTR_u_vs_3_0_140ae5ad8)[param_4]), -1 < iVar1)) &&
            (iVar1 = FUN_14001b2d0(local_18[0], local_res10, lVar2), -1 < iVar1)) {
            return param_1;
        }
    }
    return param_3;
}


void FUN_140264190(longlong param_1, longlong param_2, uint param_3) {
    ushort uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (param_3 != 0) {
        do {
            uVar1 = *(ushort * )(param_2 + uVar2 * 2);
            uVar2 = uVar2 + 1;
            *(uint * )(param_1 + -4 + uVar2 * 4) =
                    ((uVar1 & 0x7e0) << 2 | uVar1 & 0xe01f) << 3 | (uVar1 >> 1 & 0xe | uVar1 & 0x600) >> 1 |
                    (uVar1 & 0xfff800) << 8 | 0xff000000;
        } while (uVar2 < param_3);
    }
    return;
}


void FUN_140264210(longlong param_1, longlong param_2, uint param_3) {
    ushort uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((ulonglong) param_3 != 0) {
        do {
            uVar1 = *(ushort * )(param_2 + uVar3 * 2);
            uVar2 = (uint) uVar1;
            uVar3 = uVar3 + 1;
            *(uint * )(param_1 + -4 + uVar3 * 4) =
                    (((((uVar2 & 0x7c00) << 3 | uVar1 & 0x3e0) << 2 | uVar2 & 0x7000) * 2 | uVar2 & 0x1f) <<
                                                                                                          2 |
                     uVar2 & 0x380) * 2 | -(uint)((uVar1 & 0x8000) != 0) & 0xff000000 | uVar1 >> 2 & 7;
        } while (uVar3 < param_3);
    }
    return;
}


void FUN_140264370(uint *param_1, uint *param_2, uint param_3) {
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar7 = 0;
    uVar8 = (ulonglong) param_3;
    if (param_3 != 0) {
        if ((3 < uVar8) && ((param_2 + (uVar8 - 1) < param_1 || (param_1 + (uVar8 - 1) < param_2)))) {
            puVar6 = param_2;
            do {
                uVar2 = *puVar6;
                uVar3 = puVar6[1];
                uVar4 = puVar6[2];
                uVar5 = puVar6[3];
                uVar7 = uVar7 + 4;
                puVar6 = puVar6 + 4;
                puVar1 = (uint * )((longlong) param_1 + (-0x10 - (longlong) param_2) + (longlong) puVar6);
                *puVar1 = (uVar2 & 0xff) << 0x10 | uVar2 & 0xff00ff00 | (uVar2 & 0xff0000) >> 0x10;
                puVar1[1] = uVar3 & 0xff00ffff | (uVar3 & 0xff0000) >> 0x10;
                puVar1[2] = uVar4 & 0xff00ffff | (uVar4 & 0xff0000) >> 0x10;
                puVar1[3] = uVar5 & 0xff00ffff | (uVar5 & 0xff0000) >> 0x10;
            } while (uVar7 < uVar8 - (param_3 & 3));
        }
        if (uVar7 < uVar8) {
            lVar9 = uVar8 - uVar7;
            puVar6 = param_2 + uVar7;
            do {
                *(uint * )((longlong) puVar6 + ((longlong) param_1 - (longlong) param_2)) =
                        (*puVar6 & 0xff) << 0x10 | (uint) * (byte * )((longlong) puVar6 + 2) | *puVar6 & 0xff00ff00;
                lVar9 = lVar9 + -1;
                puVar6 = puVar6 + 1;
            } while (lVar9 != 0);
        }
    }
    return;
}


void FUN_140264470(undefined2 *param_1, longlong param_2, uint param_3) {
    undefined2 *puVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong) param_3;
    if (param_3 != 0) {
        puVar1 = param_1;
        do {
            *puVar1 = *(undefined2 * )((param_2 - (longlong) param_1) + (longlong) puVar1);
            uVar2 = uVar2 - 1;
            puVar1 = puVar1 + 1;
        } while (uVar2 != 0);
    }
    return;
}


void FUN_1402644a0(uint *param_1, uint *param_2, uint param_3) {
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar7 = 0;
    uVar8 = (ulonglong) param_3;
    if (param_3 != 0) {
        if ((3 < uVar8) && ((param_2 + (uVar8 - 1) < param_1 || (param_1 + (uVar8 - 1) < param_2)))) {
            puVar6 = param_2;
            do {
                uVar2 = *puVar6;
                uVar3 = puVar6[1];
                uVar4 = puVar6[2];
                uVar5 = puVar6[3];
                uVar7 = uVar7 + 4;
                puVar6 = puVar6 + 4;
                puVar1 = (uint * )((longlong) param_1 + (-0x10 - (longlong) param_2) + (longlong) puVar6);
                *puVar1 = (uVar2 & 0xff) << 0x10 | 0xff000000 | uVar2 & 0xff00 | (uVar2 & 0xff0000) >> 0x10;
                puVar1[1] = uVar3 & 0xff | 0xff000000 | uVar3 & 0xff00 | (uVar3 & 0xff0000) >> 0x10;
                puVar1[2] = uVar4 & 0xff | 0xff000000 | uVar4 & 0xff00 | (uVar4 & 0xff0000) >> 0x10;
                puVar1[3] = uVar5 & 0xff | 0xff000000 | uVar5 & 0xff00 | (uVar5 & 0xff0000) >> 0x10;
            } while (uVar7 < uVar8 - (param_3 & 3));
        }
        if (uVar7 < uVar8) {
            lVar9 = uVar8 - uVar7;
            puVar6 = param_2 + uVar7;
            do {
                *(uint * )((longlong) puVar6 + ((longlong) param_1 - (longlong) param_2)) =
                        (*puVar6 | 0xffffff00) << 0x10 | (uint) * (byte * )((longlong) puVar6 + 2) |
                        *puVar6 & 0xff00;
                lVar9 = lVar9 + -1;
                puVar6 = puVar6 + 1;
            } while (lVar9 != 0);
        }
    }
    return;
}


undefined8
FUN_1402645d0(ulonglong param_1, int *param_2, uint *param_3, longlong param_4, int *param_5,
              uint *param_6) {
    int iVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    code *pcVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    code *pcVar10;
    uint uVar11;
    longlong local_res10;
    ulonglong local_48;

    if (((*param_2 == *param_5) && (param_2[1] == param_5[1])) && (param_2[2] == param_5[2])) {
        iVar1 = param_2[3];
        lVar6 = (longlong) iVar1 * 0x2c;
        iVar2 = param_5[3];
        uVar11 = (uint)(*(int *) (&DAT_140ae5204 + lVar6) + *param_2) >>
                                                                      ((byte) *
                                                                       (undefined4 * )(&DAT_140ae5208 + lVar6) & 0x1f);
        if (iVar1 == iVar2) {
            iVar1 = *(int *) (&DAT_140ae5224 + lVar6);
            uVar7 = param_3[2] + param_1;
            if (param_1 < uVar7) {
                do {
                    uVar3 = param_3[1];
                    lVar6 = param_4;
                    for (uVar9 = param_1; uVar9 < uVar3 + param_1; uVar9 = uVar9 + *param_3) {
                        FUN_1407db590(uVar9, lVar6, iVar1 * uVar11);
                        lVar6 = lVar6 + (ulonglong) * param_6;
                    }
                    param_1 = param_1 + param_3[1];
                    param_4 = param_4 + (ulonglong) param_6[1];
                } while (param_1 < uVar7);
            }
        } else {
            pcVar10 = (code *) 0x0;
            local_res10 = param_4;
            if (iVar1 != 0) {
                if (iVar1 != 0x17) {
                    if (iVar1 != 0x19) goto switchD_14026475b_caseD_6;
                    if (iVar2 == 0) {
                        pcVar10 = FUN_140264370;
                    } else if (iVar2 == 1) {
                        pcVar10 = FUN_1402644a0;
                    }
                }
                if (iVar2 == 0x16) {
                    pcVar10 = FUN_140264470;
                }
                goto LAB_140264791;
            }
            switch (iVar2) {
                case 1:
                    pcVar10 = (code * ) & LAB_1402640f0;
                    break;
                case 2:
                    pcVar10 = FUN_140264190;
                    break;
                case 3:
                    pcVar10 = FUN_140264210;
                    break;
                case 4:
                    pcVar10 = (code * ) & LAB_1402642a0;
                    break;
                case 5:
                    pcVar10 = (code * ) & LAB_140264310;
                    break;
                default:
                    goto switchD_14026475b_caseD_6;
                case 0x19:
                    pcVar10 = FUN_140264370;
            }
            LAB_140264791:
            if (pcVar10 == (code *) 0x0) {
                switchD_14026475b_caseD_6:
                pcVar10 = (code * )(&PTR_LAB_140ae5b60)[iVar2];
                pcVar5 = (code * )(&PTR_LAB_140ae5c60)[iVar1];
                if ((pcVar10 != (code *) 0x0) && (pcVar5 != (code *) 0x0)) {
                    uVar8 = SUB168(ZEXT816(0x10) * ZEXT416(uVar11), 0);
                    if (SUB168(ZEXT816(0x10) * ZEXT416(uVar11) >> 0x40, 0) != 0) {
                        uVar8 = 0xffffffffffffffff;
                    }
                    uVar8 = FUN_14018b280(uVar8, 0);
                    uVar3 = param_3[2];
                    local_48 = param_1;
                    if (param_1 < uVar3 + param_1) {
                        do {
                            uVar4 = param_3[1];
                            lVar6 = local_res10;
                            for (uVar7 = local_48; uVar7 < uVar4 + local_48; uVar7 = uVar7 + *param_3) {
                                (*pcVar10)(uVar8, lVar6, uVar11);
                                (*pcVar5)(uVar7, uVar8);
                                lVar6 = lVar6 + (ulonglong) * param_6;
                            }
                            local_48 = local_48 + param_3[1];
                            local_res10 = local_res10 + (ulonglong) param_6[1];
                        } while (local_48 < uVar3 + param_1);
                    }
                    FUN_14018b900(uVar8, 0);
                    return 0;
                }
                goto LAB_140264917;
            }
            uVar7 = param_3[2] + param_1;
            if (param_1 < uVar7) {
                do {
                    uVar3 = param_3[1];
                    lVar6 = local_res10;
                    for (uVar9 = param_1; uVar9 < uVar3 + param_1; uVar9 = uVar9 + *param_3) {
                        (*pcVar10)(uVar9, lVar6, uVar11);
                        lVar6 = lVar6 + (ulonglong) * param_6;
                    }
                    param_1 = param_1 + param_3[1];
                    local_res10 = local_res10 + (ulonglong) param_6[1];
                } while (param_1 < uVar7);
                return 0;
            }
        }
        uVar8 = 0;
    } else {
        LAB_140264917:
        uVar8 = 0x80004005;
    }
    return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1402649d0(ulonglong param_1) {
    int iVar1;
    HMODULE hModule;
    INT_PTR IVar2;
    undefined4 local_res8[8];

    if ((param_1 & 4) != 0) {
        if (_DAT_140c6569c == 0) {
            if ((DAT_140c8e0e8 & 1) == 0) {
                DAT_140c8e0e8 = DAT_140c8e0e8 | 1;
                DAT_140c8e0ec = FUN_140193b70(6, 0, 0);
            }
            if (((DAT_140c8e0ec == 0) || (iVar1 = FUN_140193c40(), iVar1 != 0)) ||
                (hModule = (HMODULE) FUN_140193770(L"dwmapi.dll"), hModule == (HMODULE) 0x0)) {
                _DAT_140c6569c = 1;
            } else {
                DAT_140c656e0 = GetProcAddress(hModule, "DwmIsCompositionEnabled");
                _DAT_140c6569c = 1;
            }
        }
        if (DAT_140c656e0 != (FARPROC) 0x0) {
            IVar2 = (*DAT_140c656e0)(local_res8);
            if ((int) IVar2 < 0) {
                local_res8[0] = 0;
            }
            return local_res8[0];
        }
    }
    return 0;
}


undefined8 *FUN_140264aa0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xffd);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = FUN_1402883c0;
    param_1[4] = FUN_140288450;
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140265250(longlong param_1, undefined (*param_2)[16], uint param_3) {
    int in_EAX;
    uint uVar1;
    undefined *puVar2;
    int iVar3;
    undefined(*pauVar4)[16];
    undefined auVar5[16];
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    pauVar4 = param_2[param_3];
    if (param_2 < pauVar4) {
        puVar2 = (undefined * )(param_1 + 2);
        do {
            if (puVar2 + -2 != (undefined *) 0x0) {
                auVar5 = minps(*param_2, _DAT_140b7b240);
                auVar5 = maxps(_DAT_140b7b5b0, auVar5);
                fVar6 = SUB164(auVar5, 0) * 127.0 + 0.5;
                fVar7 = SUB164(auVar5 >> 0x20, 0) * 127.0 + 0.5;
                fVar8 = SUB164(auVar5 >> 0x40, 0) * 127.0 + 0.5;
                fVar9 = SUB164(auVar5 >> 0x60, 0) * 127.0 + 0.5;
                iVar3 = (int) fVar6;
                if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar6)) {
                    uVar1 = movmskps(in_EAX, CONCAT88(SUB168(CONCAT412(fVar7, CONCAT48(fVar7, CONCAT44(fVar7,
                                                                                                       fVar6))) >> 0x40,
                                                             0),
                                                      (ulonglong)(uint)
                    fVar6 | CONCAT44(fVar7, fVar6) << 0x20));
                    fVar6 = (float) (iVar3 - (uVar1 & 1));
                }
                iVar3 = (int) fVar7;
                puVar2[-2] = (char) (int) fVar6;
                if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar7)) {
                    uVar1 = movmskps((int) fVar6, ZEXT816(CONCAT44(fVar7, fVar7)));
                    fVar7 = (float) (iVar3 - (uVar1 & 1));
                }
                iVar3 = (int) fVar8;
                puVar2[-1] = (char) (int) fVar7;
                if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar8)) {
                    uVar1 = movmskps((int) fVar7, ZEXT816(CONCAT44(fVar8, fVar8)));
                    fVar8 = (float) (iVar3 - (uVar1 & 1));
                }
                iVar3 = (int) fVar9;
                *puVar2 = (char) (int) fVar8;
                if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar9)) {
                    uVar1 = movmskps((int) fVar8, ZEXT816(CONCAT44(fVar9, fVar9)));
                    fVar9 = (float) (iVar3 - (uVar1 & 1));
                }
                in_EAX = (int) fVar9;
                puVar2[1] = (char) in_EAX;
            }
            param_2 = param_2[1];
            puVar2 = puVar2 + 4;
        } while (param_2 < pauVar4);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402653a0(short *param_1, undefined (*param_2)[16], uint param_3) {
    int in_EAX;
    uint uVar1;
    int iVar2;
    undefined(*pauVar3)[16];
    undefined auVar4[16];
    float fVar5;
    float fVar6;

    pauVar3 = param_2[param_3];
    if (param_2 < pauVar3) {
        do {
            if (param_1 != (short *) 0x0) {
                auVar4 = minps(*param_2, _DAT_140b7b240);
                auVar4 = maxps(_DAT_140b7b5b0, auVar4);
                fVar5 = SUB164(auVar4, 0) * 32767.0 + 0.5;
                fVar6 = SUB164(auVar4 >> 0x20, 0) * 32767.0 + 0.5;
                iVar2 = (int) fVar5;
                if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar5)) {
                    uVar1 = movmskps(in_EAX, CONCAT88(SUB168(CONCAT412(fVar6, CONCAT48(fVar6, CONCAT44(fVar6,
                                                                                                       fVar5))) >> 0x40,
                                                             0),
                                                      (ulonglong)(uint)
                    fVar5 | CONCAT44(fVar6, fVar5) << 0x20));
                    fVar5 = (float) (iVar2 - (uVar1 & 1));
                }
                *param_1 = (short) (char) (int) fVar5;
                iVar2 = (int) fVar6;
                if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar6)) {
                    uVar1 = movmskps((int) fVar5, ZEXT816(CONCAT44(fVar6, fVar6)));
                    fVar6 = (float) (iVar2 - (uVar1 & 1));
                }
                in_EAX = (int) fVar6;
                param_1[1] = (short) (char) in_EAX;
            }
            param_2 = param_2[1];
            param_1 = param_1 + 2;
        } while (param_2 < pauVar3);
    }
    return;
}


void FUN_1402658b0(longlong param_1, uint *param_2, ulonglong param_3) {
    uint *puVar1;
    uint uVar2;
    ushort uVar3;
    uint uVar4;
    uint *puVar5;
    ushort *puVar6;

    if (param_2 < param_2 + (param_3 & 0xffffffff) * 4) {
        puVar6 = (ushort * )(param_1 + 4);
        puVar5 = param_2 + 2;
        do {
            if (puVar6 + -2 != (ushort *) 0x0) {
                uVar2 = puVar5[-2];
                uVar4 = uVar2 & 0x7fffffff;
                if (uVar4 < 0x33800000) {
                    uVar3 = 0;
                } else if (uVar4 < 0x387ff000) {
                    uVar3 = (ushort)(((uVar2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar4 >> 0x17) & 0x1f))
                                     + 0x1000 >> 0xd);
                } else if (uVar4 < 0x47fff000) {
                    uVar3 = (ushort)(uVar4 + 0xc8001000 >> 0xd);
                } else {
                    uVar3 = 0x43ff;
                }
                puVar6[-2] = uVar3 | (ushort)(uVar2 >> 0x10) & 0x8000;
                uVar2 = puVar5[-1];
                uVar4 = uVar2 & 0x7fffffff;
                if (uVar4 < 0x33800000) {
                    uVar3 = 0;
                } else if (uVar4 < 0x387ff000) {
                    uVar3 = (ushort)(((uVar2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar4 >> 0x17) & 0x1f))
                                     + 0x1000 >> 0xd);
                } else if (uVar4 < 0x47fff000) {
                    uVar3 = (ushort)(uVar4 + 0xc8001000 >> 0xd);
                } else {
                    uVar3 = 0x43ff;
                }
                puVar6[-1] = uVar3 | (ushort)(uVar2 >> 0x10) & 0x8000;
                uVar2 = *puVar5;
                uVar4 = uVar2 & 0x7fffffff;
                if (uVar4 < 0x33800000) {
                    uVar3 = 0;
                } else if (uVar4 < 0x387ff000) {
                    uVar3 = (ushort)(((uVar2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar4 >> 0x17) & 0x1f))
                                     + 0x1000 >> 0xd);
                } else if (uVar4 < 0x47fff000) {
                    uVar3 = (ushort)(uVar4 + 0xc8001000 >> 0xd);
                } else {
                    uVar3 = 0x43ff;
                }
                *puVar6 = uVar3 | (ushort)(uVar2 >> 0x10) & 0x8000;
                uVar2 = puVar5[1];
                uVar4 = uVar2 & 0x7fffffff;
                if (uVar4 < 0x33800000) {
                    uVar3 = 0;
                } else if (uVar4 < 0x387ff000) {
                    uVar3 = (ushort)(((uVar2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar4 >> 0x17) & 0x1f))
                                     + 0x1000 >> 0xd);
                } else if (uVar4 < 0x47fff000) {
                    uVar3 = (ushort)(uVar4 + 0xc8001000 >> 0xd);
                } else {
                    uVar3 = 0x43ff;
                }
                puVar6[1] = uVar3 | (ushort)(uVar2 >> 0x10) & 0x8000;
            }
            puVar6 = puVar6 + 4;
            puVar1 = puVar5 + 2;
            puVar5 = puVar5 + 4;
        } while (puVar1 < param_2 + (param_3 & 0xffffffff) * 4);
    }
    return;
}


void FUN_140265d30(uint *param_1, float *param_2, uint param_3) {
    float *pfVar1;
    float fVar2;
    float fVar3;

    pfVar1 = param_2 + (ulonglong) param_3 * 4;
    if (param_2 < pfVar1) {
        do {
            if (param_1 != (uint *) 0x0) {
                fVar2 = *param_2;
                if (1.0 <= fVar2) {
                    fVar2 = 1.0;
                }
                fVar3 = 0.0;
                if (0.0 <= fVar2) {
                    fVar3 = fVar2;
                }
                *param_1 = (int) (longlong)(fVar3 * 1.677722e+07 + 0.5) << 8 | (uint) * (byte *) param_1;
                fVar2 = param_2[1];
                if (1.0 <= fVar2) {
                    fVar2 = 1.0;
                }
                fVar3 = 0.0;
                if (0.0 <= fVar2) {
                    fVar3 = fVar2;
                }
                *(byte *) param_1 = (byte)(longlong)(fVar3 * 255.0 + 0.5);
            }
            param_2 = param_2 + 4;
            param_1 = param_1 + 1;
        } while (param_2 < pfVar1);
    }
    return;
}


undefined8 FUN_140265f20(longlong *param_1, longlong *param_2) {
    int iVar1;

    if (*param_1 != *param_2) {
        iVar1 = FUN_14018e2c0();
        if (iVar1 != 0) {
            return 0;
        }
    }
    return 1;
}


undefined8 *FUN_140265f50(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xffd);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140265f10;
    param_1[4] = FUN_140265f20;
    return param_1;
}


ulonglong FUN_140265fd0(short *param_1, longlong param_2, short *param_3, ulonglong param_4,
                        short **param_5, longlong *param_6) {
    short sVar1;
    short *psVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar7 = 0;
    uVar4 = 0;
    if (0x7ffffffe < param_2 - 1U) {
        uVar4 = 0x80070057;
    }
    if ((int) uVar4 < 0) {
        if (param_2 != 0) {
            *param_1 = 0;
        }
        return (ulonglong) uVar4;
    }
    uVar6 = uVar7;
    if (0x7ffffffe < param_4) {
        uVar6 = 0x80070057;
    }
    iVar5 = (int) uVar6;
    if (iVar5 < 0) {
        if (param_2 != 0) {
            *param_1 = 0;
        }
    } else if (param_2 == 0) {
        if ((param_4 != 0) && (*param_3 != 0)) {
            if (param_1 == (short *) 0x0) {
                return 0x80070057;
            }
            uVar6 = 0x8007007a;
            goto LAB_1402660cd;
        }
    } else {
        psVar2 = param_1;
        lVar3 = param_2;
        uVar6 = uVar7;
        do {
            if (((param_4 - param_2) + lVar3 == 0) ||
                (sVar1 = *(short *) (((longlong) param_3 - (longlong) param_1) + (longlong) psVar2), sVar1 == 0
                )) {
                if (lVar3 != 0) goto LAB_1402660a5;
                break;
            }
            *psVar2 = sVar1;
            psVar2 = psVar2 + 1;
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        psVar2 = psVar2 + -1;
        uVar7 = 0x8007007a;
        uVar6 = uVar6 - 1;
        LAB_1402660a5:
        param_2 = param_2 - uVar6;
        *psVar2 = 0;
        param_1 = param_1 + uVar6;
        iVar5 = (int) uVar7;
        uVar6 = uVar7;
    }
    if ((iVar5 < 0) && ((int) uVar6 != -0x7ff8ff86)) {
        return uVar6;
    }
    LAB_1402660cd:
    if (param_5 != (short **) 0x0) {
        *param_5 = param_1;
    }
    if (param_6 != (longlong *) 0x0) {
        *param_6 = param_2;
    }
    return uVar6;
}


void FUN_140266120(float *param_1, float *param_2, longlong param_3, ulonglong param_4, uint param_5) {
    float *pfVar1;
    bool bVar2;
    float *pfVar3;
    longlong lVar4;
    float *pfVar5;
    float *pfVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    undefined *puVar14;
    undefined *puVar15;
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
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    float local_168;
    float local_164;
    float local_160;
    float local_15c;
    float local_158;
    float local_154;
    float local_150;
    float local_14c;
    float local_148;
    float local_144;
    float local_140;
    float local_13c;
    float local_138;
    float local_134;
    undefined4 local_130;
    float local_128[16];
    ulonglong local_e8;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong) & local_168;
    puVar14 = &DAT_140b60e08;
    puVar15 = &DAT_140b60d78;
    if (param_4 == 3) {
        puVar14 = &DAT_140b60dd0;
        puVar15 = &DAT_140b60dc0;
    }
    if ((param_5 & 0x40000) == 0) {
        local_13c = DAT_140c40618;
        local_138 = DAT_140c4061c;
        local_134 = DAT_140c40620;
        local_130 = DAT_140c40624;
    } else {
        local_13c = 1.0;
        local_138 = 1.0;
        local_134 = 1.0;
        local_130 = 0x3f800000;
    }
    pfVar1 = (float *) (param_3 + 8);
    lVar4 = 4;
    local_154 = 0.0;
    local_14c = 0.0;
    local_150 = 0.0;
    pfVar3 = pfVar1;
    local_160 = local_138;
    local_164 = local_134;
    fVar51 = local_13c;
    do {
        fVar26 = pfVar3[-2];
        if (fVar26 < fVar51) {
            fVar51 = fVar26;
        }
        fVar34 = pfVar3[-1];
        if (fVar34 < local_160) {
            local_160 = fVar34;
        }
        fVar42 = *pfVar3;
        if (fVar42 < local_164) {
            local_164 = fVar42;
        }
        if (local_154 < fVar26) {
            local_154 = fVar26;
        }
        if (local_14c < fVar34) {
            local_14c = fVar34;
        }
        if (local_150 < fVar42) {
            local_150 = fVar42;
        }
        fVar26 = pfVar3[2];
        if (fVar26 < fVar51) {
            fVar51 = fVar26;
        }
        fVar34 = pfVar3[3];
        if (fVar34 < local_160) {
            local_160 = fVar34;
        }
        fVar42 = pfVar3[4];
        if (fVar42 < local_164) {
            local_164 = fVar42;
        }
        if (local_154 < fVar26) {
            local_154 = fVar26;
        }
        if (local_14c < fVar34) {
            local_14c = fVar34;
        }
        if (local_150 < fVar42) {
            local_150 = fVar42;
        }
        fVar26 = pfVar3[6];
        if (fVar26 < fVar51) {
            fVar51 = fVar26;
        }
        fVar34 = pfVar3[7];
        if (fVar34 < local_160) {
            local_160 = fVar34;
        }
        fVar42 = pfVar3[8];
        if (fVar42 < local_164) {
            local_164 = fVar42;
        }
        if (local_154 < fVar26) {
            local_154 = fVar26;
        }
        if (local_14c < fVar34) {
            local_14c = fVar34;
        }
        if (local_150 < fVar42) {
            local_150 = fVar42;
        }
        fVar26 = pfVar3[10];
        if (fVar26 < fVar51) {
            fVar51 = fVar26;
        }
        fVar34 = pfVar3[0xb];
        if (fVar34 < local_160) {
            local_160 = fVar34;
        }
        fVar42 = pfVar3[0xc];
        if (fVar42 < local_164) {
            local_164 = fVar42;
        }
        if (local_154 < fVar26) {
            local_154 = fVar26;
        }
        if (local_14c < fVar34) {
            local_14c = fVar34;
        }
        if (local_150 < fVar42) {
            local_150 = fVar42;
        }
        pfVar3 = pfVar3 + 0x10;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fVar26 = local_154 - fVar51;
    fVar34 = local_14c - local_160;
    fVar42 = local_150 - local_164;
    local_15c = fVar34 * fVar34 + fVar26 * fVar26 + fVar42 * fVar42;
    local_168 = fVar51;
    if (1.175494e-38 <= local_15c) {
        fVar52 = 1.0 / local_15c;
        lVar4 = 2;
        fVar42 = fVar52 * fVar42;
        fVar26 = fVar52 * fVar26;
        fVar52 = fVar52 * fVar34;
        local_140 = 0.0;
        local_148 = 0.0;
        local_144 = 0.0;
        fVar53 = 0.0;
        fVar54 = (local_154 + fVar51) * 0.5;
        fVar55 = (local_14c + local_160) * 0.5;
        fVar34 = (local_150 + local_164) * 0.5;
        pfVar3 = pfVar1;
        do {
            fVar43 = (pfVar3[-2] - fVar54) * fVar26;
            fVar27 = (pfVar3[-1] - fVar55) * fVar52;
            fVar18 = fVar27 + fVar43;
            fVar43 = fVar43 - fVar27;
            fVar35 = (*pfVar3 - fVar34) * fVar42;
            fVar47 = (pfVar3[2] - fVar54) * fVar26;
            fVar27 = fVar18 + fVar35;
            fVar18 = fVar18 - fVar35;
            fVar28 = (pfVar3[3] - fVar55) * fVar52;
            fVar16 = fVar43 + fVar35;
            fVar43 = fVar43 - fVar35;
            fVar19 = fVar28 + fVar47;
            fVar47 = fVar47 - fVar28;
            fVar36 = (pfVar3[4] - fVar34) * fVar42;
            fVar44 = (pfVar3[6] - fVar54) * fVar26;
            fVar29 = (pfVar3[7] - fVar55) * fVar52;
            fVar28 = fVar19 + fVar36;
            fVar19 = fVar19 - fVar36;
            fVar35 = fVar47 + fVar36;
            fVar47 = fVar47 - fVar36;
            fVar20 = fVar29 + fVar44;
            fVar44 = fVar44 - fVar29;
            fVar37 = (pfVar3[8] - fVar34) * fVar42;
            fVar29 = fVar20 + fVar37;
            fVar20 = fVar20 - fVar37;
            fVar48 = (pfVar3[10] - fVar54) * fVar26;
            fVar36 = fVar44 + fVar37;
            fVar44 = fVar44 - fVar37;
            fVar37 = (pfVar3[0xb] - fVar55) * fVar52;
            fVar38 = (pfVar3[0xc] - fVar34) * fVar42;
            fVar45 = (pfVar3[0xe] - fVar54) * fVar26;
            fVar21 = fVar37 + fVar48;
            fVar48 = fVar48 - fVar37;
            fVar37 = fVar21 + fVar38;
            fVar21 = fVar21 - fVar38;
            fVar30 = (pfVar3[0xf] - fVar55) * fVar52;
            fVar17 = fVar48 + fVar38;
            fVar48 = fVar48 - fVar38;
            fVar22 = fVar30 + fVar45;
            fVar45 = fVar45 - fVar30;
            fVar39 = (pfVar3[0x10] - fVar34) * fVar42;
            fVar31 = (pfVar3[0x13] - fVar55) * fVar52;
            fVar49 = (pfVar3[0x12] - fVar54) * fVar26;
            fVar30 = fVar22 + fVar39;
            fVar22 = fVar22 - fVar39;
            fVar38 = fVar45 + fVar39;
            fVar45 = fVar45 - fVar39;
            fVar23 = fVar31 + fVar49;
            fVar49 = fVar49 - fVar31;
            fVar40 = (pfVar3[0x14] - fVar34) * fVar42;
            fVar46 = (pfVar3[0x16] - fVar54) * fVar26;
            fVar32 = (pfVar3[0x17] - fVar55) * fVar52;
            fVar31 = fVar23 + fVar40;
            fVar23 = fVar23 - fVar40;
            fVar39 = fVar49 + fVar40;
            fVar49 = fVar49 - fVar40;
            fVar24 = fVar32 + fVar46;
            fVar46 = fVar46 - fVar32;
            fVar41 = (pfVar3[0x18] - fVar34) * fVar42;
            fVar50 = (pfVar3[0x1a] - fVar54) * fVar26;
            fVar33 = (pfVar3[0x1b] - fVar55) * fVar52;
            fVar32 = fVar24 + fVar41;
            fVar24 = fVar24 - fVar41;
            fVar40 = fVar46 + fVar41;
            fVar25 = fVar33 + fVar50;
            fVar46 = fVar46 - fVar41;
            fVar50 = fVar50 - fVar33;
            fVar41 = (pfVar3[0x1c] - fVar34) * fVar42;
            fVar33 = fVar25 + fVar41;
            fVar25 = fVar25 - fVar41;
            fVar53 = fVar53 + fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29 + fVar37 * fVar37 +
                     fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32 + fVar33 * fVar33;
            local_144 = local_144 + fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21
                        + fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25;
            fVar27 = fVar50 + fVar41;
            fVar50 = fVar50 - fVar41;
            local_148 = local_148 + fVar16 * fVar16 + fVar35 * fVar35 + fVar36 * fVar36 + fVar17 * fVar17
                        + fVar38 * fVar38 + fVar39 * fVar39 + fVar40 * fVar40 + fVar27 * fVar27;
            local_140 = local_140 + fVar43 * fVar43 + fVar47 * fVar47 + fVar44 * fVar44 + fVar48 * fVar48
                        + fVar45 * fVar45 + fVar49 * fVar49 + fVar46 * fVar46 + fVar50 * fVar50;
            lVar4 = lVar4 + -1;
            pfVar3 = pfVar3 + 0x20;
        } while (lVar4 != 0);
        fVar26 = fVar53;
        if (fVar53 < local_144) {
            fVar26 = local_144;
        }
        bVar2 = fVar26 < local_148;
        if (bVar2) {
            fVar26 = local_148;
        }
        fVar34 = local_160;
        if (fVar26 < local_140 || bVar2) {
            fVar34 = local_14c;
            local_14c = local_160;
        }
        fVar42 = local_164;
        if (fVar26 < local_140 || !bVar2 && fVar53 < local_144) {
            fVar42 = local_150;
            local_150 = local_164;
        }
        if (0.0002441406 <= local_15c) {
            lVar4 = param_4 - 1;
            local_160 = (float) lVar4;
            if (lVar4 < 0) {
                local_160 = local_160 + 1.844674e+19;
            }
            uVar12 = 0;
            while (true) {
                uVar11 = 0;
                if (3 < (longlong) param_4) {
                    lVar7 = (longlong) puVar15 - (longlong) puVar14;
                    lVar13 = (param_4 - 4 >> 2) + 1;
                    uVar11 = lVar13 * 4;
                    pfVar3 = local_128 + 1;
                    pfVar6 = (float *) (puVar14 + 4);
                    do {
                        fVar26 = *(float *) (lVar7 + -4 + (longlong) pfVar6);
                        fVar52 = pfVar6[-1];
                        fVar53 = *(float *) (lVar7 + (longlong) pfVar6);
                        pfVar5 = pfVar6 + 4;
                        pfVar3[-1] = fVar26 * local_154 + fVar52 * fVar51;
                        fVar54 = *pfVar6;
                        *pfVar3 = fVar26 * local_14c + fVar52 * fVar34;
                        pfVar3[1] = fVar26 * local_150 + fVar52 * fVar42;
                        fVar26 = *(float *) (lVar7 + -0xc + (longlong) pfVar5);
                        pfVar3[3] = fVar53 * local_154 + fVar54 * fVar51;
                        fVar52 = pfVar6[1];
                        pfVar3[5] = fVar53 * local_150 + fVar54 * fVar42;
                        fVar55 = *(float *) (lVar7 + -8 + (longlong) pfVar5);
                        pfVar3[4] = fVar53 * local_14c + fVar54 * fVar34;
                        pfVar3[7] = fVar26 * local_154 + fVar52 * fVar51;
                        fVar53 = pfVar6[2];
                        pfVar3[8] = fVar26 * local_14c + fVar52 * fVar34;
                        pfVar3[9] = fVar26 * local_150 + fVar52 * fVar42;
                        pfVar3[0xb] = fVar55 * local_154 + fVar53 * fVar51;
                        pfVar3[0xd] = fVar55 * local_150 + fVar53 * fVar42;
                        pfVar3[0xc] = fVar55 * local_14c + fVar53 * fVar34;
                        lVar13 = lVar13 + -1;
                        pfVar3 = pfVar3 + 0x10;
                        pfVar6 = pfVar5;
                    } while (lVar13 != 0);
                }
                if (uVar11 < param_4) {
                    pfVar3 = (float *) (puVar14 + uVar11 * 4);
                    lVar7 = param_4 - uVar11;
                    pfVar6 = local_128 + uVar11 * 4 + 1;
                    do {
                        fVar26 = *(float *) (((longlong) puVar15 - (longlong) puVar14) + (longlong) pfVar3);
                        fVar52 = *pfVar3;
                        pfVar3 = pfVar3 + 1;
                        pfVar6[-1] = fVar26 * local_154 + fVar52 * fVar51;
                        *pfVar6 = fVar26 * local_14c + fVar52 * fVar34;
                        pfVar6[1] = fVar26 * local_150 + fVar52 * fVar42;
                        lVar7 = lVar7 + -1;
                        pfVar6 = pfVar6 + 4;
                    } while (lVar7 != 0);
                }
                fVar54 = local_154 - fVar51;
                fVar52 = local_14c - fVar34;
                fVar53 = local_150 - fVar42;
                fVar26 = fVar52 * fVar52 + fVar54 * fVar54 + fVar53 * fVar53;
                if (fVar26 < 0.0002441406) break;
                lVar7 = 4;
                fVar55 = 0.0;
                fVar27 = 0.0;
                fVar26 = local_160 / fVar26;
                fVar16 = 0.0;
                fVar28 = 0.0;
                local_15c = 0.0;
                local_148 = fVar53 * fVar26;
                local_144 = fVar54 * fVar26;
                local_140 = fVar52 * fVar26;
                local_164 = 0.0;
                local_168 = 0.0;
                local_158 = 0.0;
                pfVar3 = pfVar1;
                do {
                    fVar26 = (pfVar3[-2] - fVar51) * local_144 + (pfVar3[-1] - fVar34) * local_140 +
                             (*pfVar3 - fVar42) * local_148;
                    lVar13 = lVar4;
                    if (fVar26 < local_160) {
                        fVar26 = fVar26 + 0.5;
                        if (9.223372e+18 <= fVar26) {
                            fVar26 = fVar26 - 9.223372e+18;
                        }
                        lVar13 = (longlong) fVar26;
                    }
                    fVar26 = *(float *) (puVar14 + lVar13 * 4) * 0.125;
                    fVar35 = local_128[lVar13 * 4 + 1] - pfVar3[-1];
                    fVar54 = local_128[lVar13 * 4] - pfVar3[-2];
                    fVar53 = *(float *) (puVar15 + lVar13 * 4) * 0.125;
                    fVar52 = (pfVar3[3] - fVar34) * local_140 + (pfVar3[2] - fVar51) * local_144 +
                             (pfVar3[4] - fVar42) * local_148;
                    lVar8 = lVar4;
                    if (fVar52 < local_160) {
                        fVar52 = fVar52 + 0.5;
                        if (9.223372e+18 <= fVar52) {
                            fVar52 = fVar52 - 9.223372e+18;
                        }
                        lVar8 = (longlong) fVar52;
                    }
                    fVar52 = *(float *) (puVar14 + lVar8 * 4) * 0.125;
                    fVar17 = local_128[lVar8 * 4 + 1] - pfVar3[3];
                    fVar37 = local_128[lVar8 * 4] - pfVar3[2];
                    fVar36 = *(float *) (puVar15 + lVar8 * 4) * 0.125;
                    fVar29 = (pfVar3[7] - fVar34) * local_140 + (pfVar3[6] - fVar51) * local_144 +
                             (pfVar3[8] - fVar42) * local_148;
                    lVar9 = lVar4;
                    if (fVar29 < local_160) {
                        fVar29 = fVar29 + 0.5;
                        if (9.223372e+18 <= fVar29) {
                            fVar29 = fVar29 - 9.223372e+18;
                        }
                        lVar9 = (longlong) fVar29;
                    }
                    fVar29 = *(float *) (puVar14 + lVar9 * 4) * 0.125;
                    fVar39 = local_128[lVar9 * 4 + 1] - pfVar3[7];
                    fVar31 = local_128[lVar9 * 4] - pfVar3[6];
                    fVar38 = *(float *) (puVar15 + lVar9 * 4) * 0.125;
                    fVar30 = (pfVar3[0xb] - fVar34) * local_140 + (pfVar3[10] - fVar51) * local_144 +
                             (pfVar3[0xc] - fVar42) * local_148;
                    lVar10 = lVar4;
                    if (fVar30 < local_160) {
                        fVar30 = fVar30 + 0.5;
                        if (9.223372e+18 <= fVar30) {
                            fVar30 = fVar30 - 9.223372e+18;
                        }
                        lVar10 = (longlong) fVar30;
                    }
                    fVar30 = *(float *) (puVar14 + lVar10 * 4) * 0.125;
                    local_168 = local_168 + *(float *) (puVar14 + lVar13 * 4) * fVar26 +
                                *(float *) (puVar14 + lVar8 * 4) * fVar52 +
                                *(float *) (puVar14 + lVar9 * 4) * fVar29 +
                                *(float *) (puVar14 + lVar10 * 4) * fVar30;
                    fVar33 = local_128[lVar10 * 4 + 1] - pfVar3[0xb];
                    fVar40 = local_128[lVar10 * 4] - pfVar3[10];
                    local_15c = local_15c + fVar26 * fVar54 + fVar52 * fVar37 + fVar29 * fVar31 +
                                fVar30 * fVar40;
                    fVar32 = *(float *) (puVar15 + lVar10 * 4) * 0.125;
                    local_158 = local_158 + fVar26 * fVar35 + fVar52 * fVar17 + fVar29 * fVar39 +
                                fVar30 * fVar33;
                    fVar28 = fVar28 + fVar26 * (local_128[lVar13 * 4 + 2] - *pfVar3) +
                             fVar52 * (local_128[lVar8 * 4 + 2] - pfVar3[4]) +
                             fVar29 * (local_128[lVar9 * 4 + 2] - pfVar3[8]) +
                             fVar30 * (local_128[lVar10 * 4 + 2] - pfVar3[0xc]);
                    local_164 = local_164 + *(float *) (puVar15 + lVar13 * 4) * fVar53 +
                                *(float *) (puVar15 + lVar8 * 4) * fVar36 +
                                *(float *) (puVar15 + lVar9 * 4) * fVar38 +
                                *(float *) (puVar15 + lVar10 * 4) * fVar32;
                    fVar27 = fVar27 + fVar53 * fVar35 + fVar36 * fVar17 + fVar38 * fVar39 + fVar32 * fVar33;
                    fVar55 = fVar55 + fVar53 * (local_128[lVar13 * 4 + 2] - *pfVar3) +
                             fVar36 * (local_128[lVar8 * 4 + 2] - pfVar3[4]) +
                             fVar38 * (local_128[lVar9 * 4 + 2] - pfVar3[8]) +
                             fVar32 * (local_128[lVar10 * 4 + 2] - pfVar3[0xc]);
                    fVar16 = fVar16 + fVar53 * fVar54 + fVar36 * fVar37 + fVar38 * fVar31 + fVar32 * fVar40;
                    lVar7 = lVar7 + -1;
                    pfVar3 = pfVar3 + 0x10;
                } while (lVar7 != 0);
                if (0.0 < local_168) {
                    fVar26 = -1.0 / local_168;
                    fVar42 = fVar42 + fVar26 * fVar28;
                    fVar51 = fVar51 + fVar26 * local_15c;
                    fVar34 = fVar34 + fVar26 * local_158;
                }
                if (0.0 < local_164) {
                    fVar26 = -1.0 / local_164;
                    local_154 = local_154 + fVar26 * fVar16;
                    local_150 = local_150 + fVar26 * fVar55;
                    local_14c = local_14c + fVar26 * fVar27;
                }
                if (((((local_15c * local_15c < 1.525879e-05) && (local_158 * local_158 < 1.525879e-05)) &&
                      (fVar28 * fVar28 < 1.525879e-05)) &&
                     (((fVar16 * fVar16 < 1.525879e-05 && (fVar27 * fVar27 < 1.525879e-05)) &&
                       (fVar55 * fVar55 < 1.525879e-05)))) || (uVar12 = uVar12 + 1, 7 < uVar12))
                    break;
            }
            *param_1 = fVar51;
            param_1[1] = fVar34;
            param_1[2] = fVar42;
            *param_2 = local_154;
            param_2[1] = local_14c;
            param_2[2] = local_150;
        } else {
            *param_1 = fVar51;
            param_1[1] = fVar34;
            param_1[2] = fVar42;
            *param_2 = local_154;
            param_2[1] = local_14c;
            param_2[2] = local_150;
        }
    } else {
        *param_1 = fVar51;
        param_1[1] = local_160;
        param_1[2] = local_164;
        *param_2 = local_154;
        param_2[1] = local_14c;
        param_2[2] = local_150;
    }
    FUN_1407db4f0(local_e8 ^ (ulonglong) & local_168);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402672a0(undefined (*param_1)[16], uint *param_2, char param_3) {
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    uVar2 = *param_2;
    uVar1 = *(uint * )((longlong) param_2 + 2);
    fVar11 = (float) (uVar2 & 0x1f) * 1.0 * _DAT_140c58780;
    fVar12 = (float) (uVar2 & 0x7e0) * 0.03125 * fRam0000000140c58784;
    fVar13 = (float) (uVar2 & 0xf800) * 0.0004882813 * fRam0000000140c58788;
    fVar14 = (float) (uVar1 & 0x1f) * 1.0 * _DAT_140c58780;
    fVar15 = (float) (uVar1 & 0x7e0) * 0.03125 * fRam0000000140c58784;
    fVar16 = (float) (uVar1 & 0xf800) * 0.0004882813 * fRam0000000140c58788;
    if ((param_3 == '\0') ||
        (*(ushort * )((longlong) param_2 + 2) <= *(ushort *) param_2 &&
         *(ushort *) param_2 != *(ushort * )((longlong) param_2 + 2))) {
        fVar4 = (fVar16 - fVar13) * 0.3333333;
        fVar5 = (fVar15 - fVar12) * 0.3333333;
        fVar6 = (fVar14 - fVar11) * 0.3333333;
        fVar7 = (fVar16 - fVar13) * 0.6666667 + fVar13;
        fVar8 = (fVar15 - fVar12) * 0.6666667 + fVar12;
        fVar9 = (fVar14 - fVar11) * 0.6666667 + fVar11;
        uVar10 = 0x3f800000;
    } else {
        fVar7 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        uVar10 = 0;
        fVar4 = (fVar16 - fVar13) * 0.5;
        fVar5 = (fVar15 - fVar12) * 0.5;
        fVar6 = (fVar14 - fVar11) * 0.5;
    }
    uVar2 = param_2[1];
    lVar3 = 0x10;
    do {
        uVar1 = uVar2 & 3;
        if (uVar1 == 0) {
            *(float *) *param_1 = fVar13;
            *(float *) (*param_1 + 4) = fVar12;
            *(float *) (*param_1 + 8) = fVar11;
            *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
        } else if (uVar1 == 1) {
            *(float *) *param_1 = fVar16;
            *(float *) (*param_1 + 4) = fVar15;
            *(float *) (*param_1 + 8) = fVar14;
            *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
        } else if (uVar1 == 2) {
            *param_1 = CONCAT412(0x3f800000,
                                 CONCAT48(fVar6 + fVar11, CONCAT44(fVar5 + fVar12, fVar4 + fVar13)));
        } else {
            *param_1 = CONCAT412(uVar10, CONCAT48(fVar9, CONCAT44(fVar8, fVar7)));
        }
        param_1 = param_1[1];
        uVar2 = uVar2 >> 2;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140267380(undefined8 *param_1, longlong param_2, char param_3, undefined8 param_4, uint param_5
) {
    longlong lVar1;
    ushort uVar2;
    ushort uVar3;
    uint uVar4;
    ulonglong uVar5;
    float *pfVar6;
    ushort uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ushort uVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    undefined *puVar14;
    longlong lVar15;
    longlong lVar16;
    float fVar17;
    float in_XMM3_Da;
    float fVar18;
    float fVar19;
    undefined auVar20[16];
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    undefined auStack1016[32];
    uint local_3d8;
    uint local_3c8;
    uint local_3c4;
    longlong local_3b8;
    float fStack944;
    undefined4 uStack940;
    float local_3a8;
    float fStack932;
    float fStack928;
    undefined4 uStack924;
    float local_398;
    float fStack916;
    float fStack912;
    undefined4 uStack908;
    float local_388;
    float fStack900;
    float fStack896;
    undefined4 uStack892;
    longlong local_378;
    undefined8 *local_370;
    longlong local_368;
    longlong local_360;
    longlong local_358;
    longlong local_350;
    longlong local_348;
    longlong local_340;
    undefined *local_338;
    longlong local_330;
    longlong local_328;
    longlong local_320;
    undefined local_318[4];
    float afStack788[3];
    undefined local_308[8];
    float fStack768;
    float fStack764;
    float local_2f8;
    float local_2f4;
    float local_2f0;
    float local_2ec;
    float local_2e8;
    float local_2e4;
    float local_2e0[2];
    float local_2d8;
    undefined local_2d4[4];
    float local_2d0;
    float local_2cc;
    float local_2c8[6];
    float local_2b0;
    float local_2ac;
    float local_2a8[3];
    float local_29c;
    float local_298[3];
    float local_28c;
    float local_288[42];
    float afStack480[66];
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong) auStack1016;
    uVar8 = 0;
    lVar9 = 4;
    local_370 = param_1;
    local_320 = param_2;
    if (param_3 != '\0') {
        pfVar6 = (float *) (param_2 + 0x1c);
        uVar5 = uVar8;
        do {
            if (pfVar6[-4] <= in_XMM3_Da && in_XMM3_Da != pfVar6[-4]) {
                uVar5 = uVar5 + 1;
            }
            if (*pfVar6 <= in_XMM3_Da && in_XMM3_Da != *pfVar6) {
                uVar5 = uVar5 + 1;
            }
            if (pfVar6[4] <= in_XMM3_Da && in_XMM3_Da != pfVar6[4]) {
                uVar5 = uVar5 + 1;
            }
            if (pfVar6[8] <= in_XMM3_Da && in_XMM3_Da != pfVar6[8]) {
                uVar5 = uVar5 + 1;
            }
            pfVar6 = pfVar6 + 0x10;
            lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (uVar5 == 0x10) {
            *param_1 = 0xffffffffffff0000;
            goto LAB_140268031;
        }
        lVar9 = (ulonglong)(uVar5 == 0) + 3;
    }
    uVar13 = param_5 & 0x10000;
    local_3c8 = uVar13;
    local_3b8 = lVar9;
    if (uVar13 != 0) {
        FUN_1407e4830(&local_2d8, 0, 0x100);
    }
    lVar1 = local_3b8;
    local_3c4 = param_5 & 0x40000;
    local_350 = (longlong) & local_2d8 + -param_2;
    fVar25 = 31.0;
    fVar26 = 0.03225806;
    local_338 = local_2d4 + -param_2;
    local_328 = (longlong) & local_2cc - param_2;
    fVar27 = 63.0;
    fVar28 = 0.01587302;
    local_360 = (longlong) local_2c8 - param_2;
    lVar15 = (longlong) local_2a8 + (8 - param_2);
    local_358 = (longlong) & local_2ac - param_2;
    lVar12 = (longlong) local_298 + (8 - param_2);
    local_348 = (longlong) local_2a8 - param_2;
    lVar9 = -param_2;
    lVar11 = (longlong) afStack480 + lVar9 + 8;
    local_340 = (longlong) & local_29c - param_2;
    pfVar6 = (float *) (param_2 + 8);
    local_378 = (longlong) local_298 - param_2;
    local_330 = (longlong) & local_28c - param_2;
    local_368 = (longlong) local_288 - param_2;
    param_2 = -param_2;
    do {
        fVar17 = pfVar6[-2];
        fVar18 = pfVar6[-1];
        fVar19 = *pfVar6;
        if (uVar13 != 0) {
            fVar17 = fVar17 + *(float *) ((longlong) local_2e0 + -param_2 + (longlong) pfVar6);
            fVar18 = fVar18 + *(float *) ((longlong) & local_2d8 + -param_2 + -4 + (longlong) pfVar6);
            fVar19 = fVar19 + *(float *) (local_350 + (longlong) pfVar6);
        }
        *(undefined4 * )((longlong) afStack480 + param_2 + 0xc + (longlong) pfVar6) = 0x3f800000;
        fVar21 = (float) (int) (fVar17 * 31.0 + 0.5) * 0.03225806;
        *(float *) ((longlong) pfVar6 + (longlong) afStack480 + lVar9) = fVar21;
        fVar22 = (float) (int) (fVar18 * 63.0 + 0.5) * 0.01587302;
        *(float *) ((longlong) pfVar6 + (longlong) afStack480 + param_2 + 4) = fVar22;
        fVar23 = (float) (int) (fVar19 * 31.0 + 0.5) * 0.03225806;
        *(float *) ((longlong) pfVar6 + lVar11) = fVar23;
        if (uVar13 != 0) {
            fVar17 = fVar17 - fVar21;
            fVar18 = fVar18 - fVar22;
            uVar4 = (uint) uVar8 & 3;
            fVar19 = fVar19 - fVar23;
            if (uVar4 != 3) {
                fVar24 = *(float *) (local_328 + (longlong) pfVar6);
                *(float *) (((longlong) & local_2d0 - param_2) + (longlong) pfVar6) =
                        fVar17 * 0.4375 + *(float *) (((longlong) & local_2d0 - param_2) + (longlong) pfVar6);
                *(float *) (local_328 + (longlong) pfVar6) = fVar18 * 0.4375 + fVar24;
                *(float *) (local_360 + (longlong) pfVar6) =
                        fVar19 * 0.4375 + *(float *) (local_360 + (longlong) pfVar6);
            }
            if (uVar8 < 0xc) {
                if ((uVar8 & 3) != 0) {
                    fVar24 = *(float *) (local_358 + (longlong) pfVar6);
                    *(float *) (((longlong) & local_2b0 - param_2) + (longlong) pfVar6) =
                            fVar17 * 0.1875 + *(float *) (((longlong) & local_2b0 - param_2) + (longlong) pfVar6);
                    *(float *) (local_358 + (longlong) pfVar6) = fVar18 * 0.1875 + fVar24;
                    *(float *) (local_348 + (longlong) pfVar6) =
                            fVar19 * 0.1875 + *(float *) (local_348 + (longlong) pfVar6);
                }
                fVar24 = *(float *) (local_340 + (longlong) pfVar6);
                *(float *) (lVar15 + (longlong) pfVar6) =
                        fVar17 * 0.3125 + *(float *) (lVar15 + (longlong) pfVar6);
                *(float *) (local_340 + (longlong) pfVar6) = fVar18 * 0.3125 + fVar24;
                *(float *) (local_378 + (longlong) pfVar6) =
                        fVar19 * 0.3125 + *(float *) (local_378 + (longlong) pfVar6);
                if (uVar4 != 3) {
                    fVar24 = *(float *) ((longlong) pfVar6 + lVar12);
                    *(float *) ((longlong) pfVar6 + local_330) =
                            fVar18 * 0.0625 + *(float *) ((longlong) pfVar6 + local_330);
                    *(float *) ((longlong) pfVar6 + lVar12) = fVar17 * 0.0625 + fVar24;
                    *(float *) ((longlong) pfVar6 + local_368) =
                            fVar19 * 0.0625 + *(float *) ((longlong) pfVar6 + local_368);
                }
            }
        }
        if (local_3c4 == 0) {
            *(float *) ((longlong) pfVar6 + (longlong) afStack480 + lVar9) = fVar21 * DAT_140c40618;
            *(float *) ((longlong) pfVar6 + (longlong) afStack480 + param_2 + 4) = fVar22 * DAT_140c4061c;
            *(float *) ((longlong) pfVar6 + lVar11) = fVar23 * DAT_140c40620;
        }
        uVar8 = uVar8 + 1;
        pfVar6 = pfVar6 + 4;
    } while (uVar8 < 0x10);
    local_3d8 = param_5;
    FUN_140266120();
    lVar9 = local_320;
    if (local_3c4 == 0) {
        fVar21 = fStack900 * _DAT_140c4062c;
        fVar23 = local_398 * DAT_140c40628;
        fVar17 = fStack916 * _DAT_140c4062c;
        fVar22 = DAT_140c40628 * local_388;
        fVar19 = fStack896 * _DAT_140c40630;
        fVar18 = fStack912 * _DAT_140c40630;
    } else {
        local_3b8 = CONCAT44(fStack900, local_388);
        fStack944 = fStack896;
        uStack940 = uStack892;
        local_3a8 = local_398;
        fStack932 = fStack916;
        fStack928 = fStack912;
        uStack924 = uStack908;
        fVar17 = fStack916;
        fVar18 = fStack912;
        fVar19 = fStack896;
        fVar21 = fStack900;
        fVar22 = local_388;
        fVar23 = local_398;
    }
    fVar24 = 0.0;
    if (0.0 <= fVar22) {
        if (1.0 < fVar22) {
            fVar22 = 1.0;
        }
    } else {
        fVar22 = 0.0;
    }
    if (0.0 <= fVar21) {
        if (1.0 < fVar21) {
            fVar21 = 1.0;
        }
    } else {
        fVar21 = 0.0;
    }
    if (0.0 <= fVar19) {
        if (1.0 < fVar19) {
            fVar19 = 1.0;
        }
    } else {
        fVar19 = 0.0;
    }
    uVar2 = (ushort)(int)(fVar19 * fVar25 + 0.5);
    uVar10 = ((short) (int) (fVar22 * fVar25 + 0.5) << 6 | (ushort)(int)(fVar21 * fVar27 + 0.5)) << 5 |
             uVar2;
    if (0.0 <= fVar23) {
        if (1.0 < fVar23) {
            fVar23 = 1.0;
        }
    } else {
        fVar23 = 0.0;
    }
    if (0.0 <= fVar17) {
        if (1.0 < fVar17) {
            fVar17 = 1.0;
        }
    } else {
        fVar17 = 0.0;
    }
    if (0.0 <= fVar18) {
        fVar19 = 1.0;
        if (fVar18 <= 1.0) {
            fVar19 = fVar18;
        }
    } else {
        fVar19 = 0.0;
    }
    uVar3 = (ushort)(int)(fVar19 * fVar25 + 0.5);
    uVar7 = ((short) (int) (fVar23 * fVar25 + 0.5) << 6 | (ushort)(int)(fVar17 * fVar27 + 0.5)) << 5 |
            uVar3;
    if ((lVar1 == 4) && (uVar10 == uVar7)) {
        *(ushort *) local_370 = uVar10;
        *(ushort * )((longlong) local_370 + 2) = uVar7;
        *(undefined4 * )((longlong) local_370 + 4) = 0;
    } else {
        uStack940 = 0x3f800000;
        uStack924 = 0x3f800000;
        fVar25 = (float) (uint)(uVar10 >> 0xb) * fVar26;
        fVar27 = (float) (uint)(uVar10 >> 5 & 0x3f) * fVar28;
        local_3b8 = CONCAT44(fVar27, fVar25);
        fStack944 = (float) (uint)(uVar2 & 0x1f) * fVar26;
        local_3a8 = (float) (uint)(uVar7 >> 0xb) * fVar26;
        fStack932 = (float) (uint)(uVar7 >> 5 & 0x3f) * fVar28;
        fStack928 = (float) (uint)(uVar3 & 0x1f) * fVar26;
        if (local_3c4 == 0) {
            fVar27 = fVar27 * DAT_140c4061c;
            fVar26 = fStack944 * DAT_140c40620;
            fStack916 = fStack932 * DAT_140c4061c;
            fStack912 = fStack928 * DAT_140c40620;
            fVar25 = DAT_140c40618 * fVar25;
            local_398 = local_3a8 * DAT_140c40618;
            _local_308 = CONCAT412(uStack908, CONCAT48(fStack912, CONCAT44(fStack916, local_398)));
            local_388 = fVar25;
            fStack900 = fVar27;
            fStack896 = fVar26;
        } else {
            uStack892 = 0x3f800000;
            _local_308 = CONCAT412(0x3f800000, CONCAT48(fStack928, CONCAT44(fStack932, local_3a8)));
            fVar26 = fStack944;
        }
        if ((lVar1 == 3) == uVar10 <= uVar7) {
            *(ushort *) local_370 = uVar10;
            *(ushort * )((longlong) local_370 + 2) = uVar7;
            _local_318 = CONCAT412(uStack892, CONCAT48(fVar26, CONCAT44(fVar27, fVar25)));
        } else {
            *(ushort *) local_370 = uVar7;
            *(ushort * )((longlong) local_370 + 2) = uVar10;
            _local_318 = _local_308;
            _local_308 = CONCAT412(uStack892, CONCAT48(fVar26, CONCAT44(fVar27, fVar25)));
        }
        local_308._0_4_ = local_308._0_4_ - local_318;
        local_308._4_4_ = local_308._4_4_ - afStack788[0];
        fStack768 = fStack768 - afStack788[1];
        if (lVar1 == 3) {
            puVar14 = &DAT_140b60df0;
            local_2f8 = local_308._0_4_ * 0.5 + local_318;
            local_2ec = (fStack764 - afStack788[2]) * 0.5 + afStack788[2];
            local_2f4 = local_308._4_4_ * 0.5 + afStack788[0];
            local_2f0 = fStack768 * 0.5 + afStack788[1];
        } else {
            puVar14 = &DAT_140b60da0;
            local_2f8 = local_308._0_4_ * 0.3333333 + local_318;
            local_2f4 = local_308._4_4_ * 0.3333333 + afStack788[0];
            local_2f0 = fStack768 * 0.3333333 + afStack788[1];
            local_2e0[1] = (fStack764 - afStack788[2]) * 0.6666667 + afStack788[2];
            local_2ec = (fStack764 - afStack788[2]) * 0.3333333 + afStack788[2];
            local_2e8 = local_308._0_4_ * 0.6666667 + local_318;
            local_2e4 = local_308._4_4_ * 0.6666667 + afStack788[0];
            local_2e0[0] = fStack768 * 0.6666667 + afStack788[1];
        }
        fVar25 = (float) (lVar1 + -1);
        if (lVar1 + -1 < 0) {
            fVar25 = fVar25 + 1.844674e+19;
        }
        if (uVar10 == uVar7) {
            fVar26 = 0.0;
        } else {
            fVar26 = fVar25 / (local_308._4_4_ * local_308._4_4_ + local_308._0_4_ * local_308._0_4_ +
                               fStack768 * fStack768);
        }
        uVar13 = 0;
        local_308._0_4_ = local_308._0_4_ * fVar26;
        local_308._4_4_ = local_308._4_4_ * fVar26;
        fStack768 = fStack768 * fVar26;
        if (local_3c8 != 0) {
            FUN_1407e4830(&local_2d8, 0, 0x100);
        }
        lVar15 = (longlong) local_2c8 + (4 - lVar9);
        lVar11 = (longlong) local_2a8 + (4 - lVar9);
        lVar16 = (longlong) local_298 + (4 - lVar9);
        uVar8 = 0;
        pfVar6 = (float *) (lVar9 + 4);
        lVar12 = (longlong) local_288 + (4 - lVar9);
        do {
            if ((lVar1 != 3) || (in_XMM3_Da < pfVar6[2] || in_XMM3_Da == pfVar6[2])) {
                if (local_3c4 == 0) {
                    fVar26 = DAT_140c40618 * pfVar6[-1];
                    auVar20 = ZEXT416((uint)(DAT_140c4061c * *pfVar6)) & (undefined[16]) 0xffffffffffffffff;
                    fVar27 = DAT_140c40620 * pfVar6[1];
                } else {
                    fVar26 = pfVar6[-1];
                    auVar20 = ZEXT416((uint) * pfVar6);
                    fVar27 = pfVar6[1];
                }
                if (local_3c8 != 0) {
                    fVar26 = fVar26 + *(float *) (local_350 + -4 + (longlong) pfVar6);
                    auVar20 = CONCAT124(SUB1612(auVar20 >> 0x20, 0),
                                        SUB164(auVar20, 0) + *(float *) (local_350 + (longlong) pfVar6));
                    fVar27 = fVar27 + *(float *) (local_338 + (longlong) pfVar6);
                }
                fVar28 = (SUB164(auVar20, 0) - afStack788[0]) * local_308._4_4_ +
                         (fVar26 - local_318) * local_308._0_4_ + (fVar27 - afStack788[1]) * fStack768;
                if (fVar24 < fVar28) {
                    if (fVar28 < fVar25) {
                        fVar28 = fVar28 + 0.5;
                        if (9.223372e+18 <= fVar28) {
                            fVar28 = fVar28 - 9.223372e+18;
                        }
                        uVar4 = *(uint * )(puVar14 + (longlong) fVar28 * 8);
                    } else {
                        uVar4 = 1;
                    }
                } else {
                    uVar4 = 0;
                }
                uVar13 = uVar4 << 0x1e | uVar13 >> 2;
                if (local_3c8 != 0) {
                    fVar28 = *(float *) ((longlong) afStack480 + (0x10 - lVar9) + (longlong) pfVar6);
                    uVar5 = (ulonglong) uVar4;
                    uVar4 = (uint) uVar8 & 3;
                    fVar26 = (fVar26 - *(float *) (local_318 + uVar5 * 0x10)) * fVar28;
                    fVar17 = (SUB164(auVar20, 0) - *(float *) (local_318 + uVar5 * 0x10 + 4)) * fVar28;
                    fVar28 = (fVar27 - afStack788[uVar5 * 4 + 1]) * fVar28;
                    if (uVar4 != 3) {
                        *(float *) (local_328 + (longlong) pfVar6) =
                                fVar26 * 0.4375 + *(float *) (local_328 + (longlong) pfVar6);
                        fVar27 = *(float *) (lVar15 + (longlong) pfVar6);
                        *(float *) (local_360 + (longlong) pfVar6) =
                                fVar17 * 0.4375 + *(float *) (local_360 + (longlong) pfVar6);
                        *(float *) (lVar15 + (longlong) pfVar6) = fVar28 * 0.4375 + fVar27;
                    }
                    if (uVar8 < 0xc) {
                        if ((uVar8 & 3) != 0) {
                            *(float *) (local_358 + (longlong) pfVar6) =
                                    fVar26 * 0.1875 + *(float *) (local_358 + (longlong) pfVar6);
                            fVar27 = *(float *) (lVar11 + (longlong) pfVar6);
                            *(float *) (local_348 + (longlong) pfVar6) =
                                    fVar17 * 0.1875 + *(float *) (local_348 + (longlong) pfVar6);
                            *(float *) (lVar11 + (longlong) pfVar6) = fVar28 * 0.1875 + fVar27;
                        }
                        *(float *) (local_340 + (longlong) pfVar6) =
                                fVar26 * 0.3125 + *(float *) (local_340 + (longlong) pfVar6);
                        fVar27 = *(float *) (lVar16 + (longlong) pfVar6);
                        *(float *) (local_378 + (longlong) pfVar6) =
                                fVar17 * 0.3125 + *(float *) (local_378 + (longlong) pfVar6);
                        *(float *) (lVar16 + (longlong) pfVar6) = fVar28 * 0.3125 + fVar27;
                        if (uVar4 != 3) {
                            fVar27 = *(float *) (lVar12 + (longlong) pfVar6);
                            *(float *) ((longlong) pfVar6 + local_330) =
                                    fVar26 * 0.0625 + *(float *) ((longlong) pfVar6 + local_330);
                            *(float *) (lVar12 + (longlong) pfVar6) = fVar28 * 0.0625 + fVar27;
                            *(float *) ((longlong) pfVar6 + local_368) =
                                    fVar17 * 0.0625 + *(float *) ((longlong) pfVar6 + local_368);
                        }
                    }
                }
            } else {
                uVar13 = uVar13 >> 2 | 0xc0000000;
            }
            uVar8 = uVar8 + 1;
            pfVar6 = pfVar6 + 4;
        } while (uVar8 < 0x10);
        *(uint * )((longlong) local_370 + 4) = uVar13;
    }
    LAB_140268031:
    FUN_1407db4f0(local_d8 ^ (ulonglong) auStack1016);
    return;
}


void FUN_140268060(undefined (*param_1)[16], uint *param_2) {
    uint uVar1;
    undefined(*pauVar2)[16];
    longlong lVar3;
    uint uVar4;
    longlong lVar5;

    FUN_1402672a0(param_1, param_2 + 2, 0);
    uVar4 = *param_2;
    lVar3 = 8;
    lVar5 = 8;
    pauVar2 = param_1;
    do {
        uVar1 = uVar4 & 0xf;
        uVar4 = uVar4 >> 4;
        *pauVar2 = CONCAT412((float) (ulonglong) uVar1 * 0.06666667, ZEXT812(*(ulonglong * ) * pauVar2));
        lVar5 = lVar5 + -1;
        pauVar2 = pauVar2[1];
    } while (lVar5 != 0);
    uVar4 = param_2[1];
    pauVar2 = param_1[8];
    do {
        uVar1 = uVar4 & 0xf;
        uVar4 = uVar4 >> 4;
        *pauVar2 = CONCAT412((float) (ulonglong) uVar1 * 0.06666667, ZEXT812(*(ulonglong * ) * pauVar2));
        lVar3 = lVar3 + -1;
        pauVar2 = pauVar2[1];
    } while (lVar3 != 0);
    return;
}


void FUN_140268120(undefined8 *param_1, undefined4 *param_2, uint param_3) {
    ulonglong uVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    uint uVar8;
    longlong lVar9;
    undefined4 *puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    uint uVar13;
    float *pfVar14;
    float *pfVar15;
    uint uVar16;
    ulonglong uVar17;
    float fVar18;
    undefined auStack472[32];
    uint local_1b8;
    float local_1a8[16];
    undefined local_168[28];
    float local_14c[57];
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong) auStack472;
    lVar9 = 0x10;
    puVar10 = param_2;
    do {
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar10 = puVar10 + 4;
        puVar2 = (undefined4 * )((longlong) local_1a8 + (0x30 - (longlong) param_2) + (longlong) puVar10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *param_1 = 0;
    uVar13 = param_3 & 0x20000;
    if (uVar13 != 0) {
        FUN_1407e4830(local_1a8, 0, 0x40);
    }
    pfVar15 = local_1a8 + 1;
    pfVar14 = local_14c;
    uVar17 = 3;
    do {
        fVar18 = pfVar14[-4];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[-1];
        }
        uVar12 = uVar17 - 3;
        uVar16 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + (uVar12 >> 3) * 4) =
                *(uint * )((longlong) param_1 + (uVar12 >> 3) * 4) >> 4 | uVar16 << 0x1c;
        if (uVar13 != 0) {
            uVar7 = (uint) uVar12 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar16 * 0.06666667;
            if (uVar7 != 3) {
                *pfVar15 = fVar18 * 0.4375 + *pfVar15;
            }
            if (uVar12 < 0xc) {
                if ((uVar12 & 3) != 0) {
                    pfVar15[2] = fVar18 * 0.1875 + pfVar15[2];
                }
                pfVar15[3] = fVar18 * 0.3125 + pfVar15[3];
                if (uVar7 != 3) {
                    pfVar15[4] = fVar18 * 0.0625 + pfVar15[4];
                }
            }
        }
        fVar18 = *pfVar14;
        if (uVar13 != 0) {
            fVar18 = fVar18 + *pfVar15;
        }
        uVar1 = uVar17 - 2;
        uVar16 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + (uVar1 >> 3) * 4) =
                *(uint * )((longlong) param_1 + (uVar1 >> 3) * 4) >> 4 | uVar16 << 0x1c;
        if (uVar13 != 0) {
            uVar7 = (uint) uVar1 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar16 * 0.06666667;
            if (uVar7 != 3) {
                pfVar15[1] = fVar18 * 0.4375 + pfVar15[1];
            }
            if (uVar1 < 0xc) {
                if ((uVar1 & 3) != 0) {
                    pfVar15[3] = fVar18 * 0.1875 + pfVar15[3];
                }
                pfVar15[4] = fVar18 * 0.3125 + pfVar15[4];
                if (uVar7 != 3) {
                    pfVar15[5] = fVar18 * 0.0625 + pfVar15[5];
                }
            }
        }
        fVar18 = pfVar14[4];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[1];
        }
        uVar11 = uVar17 - 1 >> 3;
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + uVar11 * 4) =
                uVar7 << 0x1c | *(uint * )((longlong) param_1 + uVar11 * 4) >> 4;
        uVar16 = (uint) uVar17;
        if (uVar13 != 0) {
            uVar8 = uVar16 - 1 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if (uVar8 != 3) {
                pfVar15[2] = fVar18 * 0.4375 + pfVar15[2];
            }
            if (uVar17 - 1 < 0xc) {
                if (uVar8 != 0) {
                    pfVar15[4] = fVar18 * 0.1875 + pfVar15[4];
                }
                pfVar15[5] = fVar18 * 0.3125 + pfVar15[5];
                if (uVar8 != 3) {
                    pfVar15[6] = fVar18 * 0.0625 + pfVar15[6];
                }
            }
        }
        fVar18 = pfVar14[8];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[2];
        }
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + (uVar17 >> 3) * 4) =
                uVar7 << 0x1c | *(uint * )((longlong) param_1 + (uVar17 >> 3) * 4) >> 4;
        if (uVar13 != 0) {
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if ((uVar16 & 3) != 3) {
                pfVar15[3] = fVar18 * 0.4375 + pfVar15[3];
            }
            if (uVar17 < 0xc) {
                if ((uVar17 & 3) != 0) {
                    pfVar15[5] = fVar18 * 0.1875 + pfVar15[5];
                }
                pfVar15[6] = fVar18 * 0.3125 + pfVar15[6];
                if ((uVar16 & 3) != 3) {
                    pfVar15[7] = fVar18 * 0.0625 + pfVar15[7];
                }
            }
        }
        fVar18 = pfVar14[0xc];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[3];
        }
        uVar11 = uVar17 + 1 >> 3;
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + uVar11 * 4) =
                *(uint * )((longlong) param_1 + uVar11 * 4) >> 4 | uVar7 << 0x1c;
        if (uVar13 != 0) {
            uVar8 = (uint) uVar12 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if (uVar8 != 3) {
                pfVar15[4] = fVar18 * 0.4375 + pfVar15[4];
            }
            if (uVar17 + 1 < 0xc) {
                if ((uVar12 & 3) != 0) {
                    pfVar15[6] = fVar18 * 0.1875 + pfVar15[6];
                }
                pfVar15[7] = fVar18 * 0.3125 + pfVar15[7];
                if (uVar8 != 3) {
                    pfVar15[8] = fVar18 * 0.0625 + pfVar15[8];
                }
            }
        }
        fVar18 = pfVar14[0x10];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[4];
        }
        uVar12 = uVar17 + 2 >> 3;
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + uVar12 * 4) =
                *(uint * )((longlong) param_1 + uVar12 * 4) >> 4 | uVar7 << 0x1c;
        if (uVar13 != 0) {
            uVar8 = (uint) uVar1 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if (uVar8 != 3) {
                pfVar15[5] = fVar18 * 0.4375 + pfVar15[5];
            }
            if (uVar17 + 2 < 0xc) {
                if ((uVar1 & 3) != 0) {
                    pfVar15[7] = fVar18 * 0.1875 + pfVar15[7];
                }
                pfVar15[8] = fVar18 * 0.3125 + pfVar15[8];
                if (uVar8 != 3) {
                    pfVar15[9] = fVar18 * 0.0625 + pfVar15[9];
                }
            }
        }
        fVar18 = pfVar14[0x14];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[5];
        }
        uVar12 = uVar17 + 3 >> 3;
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + uVar12 * 4) =
                *(uint * )((longlong) param_1 + uVar12 * 4) >> 4 | uVar7 << 0x1c;
        if (uVar13 != 0) {
            uVar8 = uVar16 - 1 & 3;
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if (uVar8 != 3) {
                pfVar15[6] = fVar18 * 0.4375 + pfVar15[6];
            }
            if (uVar17 + 3 < 0xc) {
                if (uVar8 != 0) {
                    pfVar15[8] = fVar18 * 0.1875 + pfVar15[8];
                }
                pfVar15[9] = fVar18 * 0.3125 + pfVar15[9];
                if (uVar8 != 3) {
                    pfVar15[10] = fVar18 * 0.0625 + pfVar15[10];
                }
            }
        }
        fVar18 = pfVar14[0x18];
        if (uVar13 != 0) {
            fVar18 = fVar18 + pfVar15[6];
        }
        uVar12 = uVar17 + 4 >> 3;
        uVar7 = (uint)(fVar18 * 15.0 + 0.5);
        *(uint * )((longlong) param_1 + uVar12 * 4) =
                uVar7 << 0x1c | *(uint * )((longlong) param_1 + uVar12 * 4) >> 4;
        if (uVar13 != 0) {
            fVar18 = fVar18 - (float) (ulonglong) uVar7 * 0.06666667;
            if ((uVar16 & 3) != 3) {
                pfVar15[7] = fVar18 * 0.4375 + pfVar15[7];
            }
            if (uVar17 + 4 < 0xc) {
                if ((uVar17 & 3) != 0) {
                    pfVar15[9] = fVar18 * 0.1875 + pfVar15[9];
                }
                pfVar15[10] = fVar18 * 0.3125 + pfVar15[10];
                if ((uVar16 & 3) != 3) {
                    pfVar15[0xb] = fVar18 * 0.0625 + pfVar15[0xb];
                }
            }
        }
        pfVar14 = pfVar14 + 0x20;
        pfVar15 = pfVar15 + 8;
        uVar12 = uVar17 + 5;
        uVar17 = uVar17 + 8;
    } while (uVar12 < 0x10);
    local_1b8 = param_3;
    FUN_140267380(param_1 + 1, local_168, 0);
    FUN_1407db4f0(local_68 ^ (ulonglong) auStack472);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140268ce2)
// WARNING: Removing unreachable block (ram,0x000140268cf5)
// WARNING: Removing unreachable block (ram,0x000140268cfe)
// WARNING: Removing unreachable block (ram,0x000140268d2b)
// WARNING: Removing unreachable block (ram,0x000140268b7b)
// WARNING: Removing unreachable block (ram,0x000140268bdb)
// WARNING: Removing unreachable block (ram,0x000140268aca)
// WARNING: Removing unreachable block (ram,0x000140268ae6)
// WARNING: Removing unreachable block (ram,0x000140268afb)
// WARNING: Removing unreachable block (ram,0x000140268b25)
// WARNING: Removing unreachable block (ram,0x000140268b2e)
// WARNING: Removing unreachable block (ram,0x000140268b6d)
// WARNING: Removing unreachable block (ram,0x000140268be7)
// WARNING: Removing unreachable block (ram,0x000140268bf0)
// WARNING: Removing unreachable block (ram,0x000140268c2c)
// WARNING: Removing unreachable block (ram,0x000140268c48)
// WARNING: Removing unreachable block (ram,0x000140268c4b)
// WARNING: Removing unreachable block (ram,0x000140268c5b)
// WARNING: Removing unreachable block (ram,0x000140268c64)
// WARNING: Removing unreachable block (ram,0x000140268c79)
// WARNING: Removing unreachable block (ram,0x000140268cb2)
// WARNING: Removing unreachable block (ram,0x000140268cc0)
// WARNING: Removing unreachable block (ram,0x000140268cd0)
// WARNING: Removing unreachable block (ram,0x000140268c69)
// WARNING: Removing unreachable block (ram,0x000140268c75)
// WARNING: Removing unreachable block (ram,0x000140268cd9)
// WARNING: Removing unreachable block (ram,0x000140268d06)
// WARNING: Removing unreachable block (ram,0x000140268d0b)
// WARNING: Removing unreachable block (ram,0x000140268d10)
// WARNING: Removing unreachable block (ram,0x000140268d1e)
// WARNING: Removing unreachable block (ram,0x000140268d56)

void FUN_140268830(char *param_1, undefined8 param_2) {
    CHAR *pCVar1;
    CHAR *pCVar2;
    char cVar3;
    byte bVar4;
    int iVar5;
    HRESULT HVar6;
    HRESULT HVar7;
    longlong lVar8;
    char cVar9;
    CHAR *pCVar10;
    char cVar11;
    ushort uVar12;
    uint iDevNum;
    char *pcVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    undefined auStackY1736[32];
    longlong *local_660;
    undefined8 local_658;
    _DISPLAY_DEVICEA local_5e8;
    ushort local_438[512];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStackY1736;
    uVar15 = 0;
    local_438[0] = 0;
    local_658 = param_2;
    FUN_1407e4830(&local_5e8, 0, 0x1a8);
    local_5e8.cb = 0x1a8;
    iVar5 = EnumDisplayDevicesA((LPCSTR) 0x0, 0, &local_5e8, 0);
    uVar14 = uVar15;
    while (iVar5 != 0) {
        if (((local_5e8.StateFlags & 8) == 0) && ((local_5e8.StateFlags & 1) != 0)) {
            pcVar13 = param_1;
            while (true) {
                cVar3 = *pcVar13;
                cVar11 = cVar3;
                if ((byte)(cVar3 + 0xbfU) < 0x1a) {
                    cVar11 = cVar3 + ' ';
                }
                cVar9 = pcVar13[(longlong) & local_5e8 + (4 - (longlong) param_1)];
                if ((byte)(cVar9 + 0xbfU) < 0x1a) {
                    cVar9 = cVar9 + ' ';
                }
                if (cVar11 != cVar9) break;
                if (cVar3 == '\0') {
                    uVar14 = 0xffffffffffffffff;
                    pCVar10 = local_5e8.DeviceID;
                    goto LAB_140268924;
                }
                pcVar13 = pcVar13 + 1;
            }
        }
        iDevNum = (int) uVar14 + 1;
        uVar14 = (ulonglong) iDevNum;
        iVar5 = EnumDisplayDevicesA((LPCSTR) 0x0, iDevNum, &local_5e8, 0);
    }
    goto LAB_1402689fb;
    LAB_140268924:
    do {
        bVar4 = *pCVar10;
        if ((char) bVar4 < '\0') {
            if (((1 < uVar14) && ((bVar4 & 0xe0) == 0xc0)) &&
                (pCVar1 = pCVar10 + 1, (*pCVar1 & 0xc0U) == 0x80)) {
                pCVar10 = pCVar10 + 2;
                uVar12 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pCVar1 & 0x3f);
                uVar14 = uVar14 - 2;
                goto LAB_1402689d0;
            }
            if (((2 < uVar14) && ((bVar4 & 0xf0) == 0xe0)) &&
                ((pCVar1 = pCVar10 + 1, (*pCVar1 & 0xc0U) == 0x80 &&
                                        (pCVar2 = pCVar10 + 2, (*pCVar2 & 0xc0U) == 0x80)))) {
                pCVar10 = pCVar10 + 3;
                uVar12 = ((short) (char) (*pCVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                         (short) (char) (*pCVar2 & 0x3f);
                uVar14 = uVar14 - 3;
                goto LAB_1402689d0;
            }
            pCVar10 = pCVar10 + 1;
            uVar14 = uVar14 - 1;
        } else {
            pCVar10 = pCVar10 + 1;
            uVar12 = (ushort)(char)
            bVar4;
            uVar14 = uVar14 - 1;
            LAB_1402689d0:
            if (uVar15 == 0x200) break;
            local_438[uVar15] = uVar12;
            uVar15 = uVar15 + 1;
            if (uVar12 == 0) break;
        }
    } while (uVar14 != 0);
    LAB_1402689fb:
    if (local_438[0] == 0) goto LAB_140268d8f;
    HVar6 = CoInitialize((LPVOID) 0x0);
    local_660 = (longlong *) 0x0;
    HVar7 = CoCreateInstance((IID * ) & DAT_140b61178, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140b61168, &local_660);
    if (HVar7 < 0) {
        LAB_140268d5c:
        if (local_660 != (longlong *) 0x0) {
            (**(code * *)(*local_660 + 0x10))();
            local_660 = (longlong *) 0x0;
        }
    } else if (local_660 != (longlong *) 0x0) {
        lVar8 = Ordinal_2(L"\\\\.\\root\\cimv2");
        (**(code * *)(*local_660 + 0x18))(local_660, lVar8, 0, 0);
        if (lVar8 != 0) {
            Ordinal_6(lVar8);
        }
        goto LAB_140268d5c;
    }
    if (-1 < HVar6) {
        CoUninitialize();
    }
    LAB_140268d8f:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStackY1736);
    return;
}


undefined8 *FUN_140268db0(undefined8 *param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;

    FUN_1402630a0();
    *param_1 = &PTR_LAB_140b60e70;
    param_1[0x33f] = 0;
    param_1[0x33e] = 0;
    param_1[0x381] = 0;
    param_1[0x382] = 0;
    param_1[899] = 0;
    param_1[900] = 0;
    param_1[0x385] = 0;
    param_1[0x386] = 0;
    param_1[0x387] = 0;
    param_1[0x388] = 0;
    param_1[0x389] = 0;
    param_1[0x38a] = 0;
    param_1[0x38b] = 0;
    param_1[0x38c] = 0;
    param_1[0x38d] = 0;
    param_1[0x38e] = 0;
    FUN_140264aa0(param_1 + 0x38f);
    FUN_1402756a0(param_1 + 0x394);
    FUN_1402756a0(param_1 + 0x399);
    FUN_140275720(param_1 + 0x39e);
    FUN_140275720(param_1 + 0x3a3);
    FUN_1402757a0(param_1 + 0x3a8);
    param_1[0x3bf] = 0;
    param_1[0x3c7] = 0;
    param_1[0x518] = 0;
    param_1[0x519] = 0;
    param_1[0x338] = 0;
    param_1[0x339] = 0;
    param_1[0x33a] = 0;
    param_1[0x33b] = 0;
    param_1[0x33c] = 0;
    FUN_140275940(param_1 + 0x33e);
    FUN_1407e4830(param_1 + 0x340, 0, 0xb8);
    FUN_1407e4830(param_1 + 0x357, 0, 0xb8);
    param_1[0x36e] = 0;
    param_1[0x373] = 0;
    param_1[0x374] = 0x200000;
    param_1[0x375] = 0;
    param_1[0x376] = 0x17;
    puVar1 = param_1 + 0x37a;
    puVar2 = param_1 + 0x377;
    lVar3 = 2;
    do {
        *puVar2 = 0;
        *(undefined4 * )(puVar1 + -1) = 0x80000;
        *(undefined4 *) puVar1 = 0;
        *(undefined4 * )(puVar1 + 1) = 0;
        puVar1 = (undefined8 * )((longlong) puVar1 + 4);
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    param_1[0x37c] = 0;
    param_1[0x3b2] = 0;
    param_1[0x3b1] = 0;
    param_1[0x3b0] = 0;
    param_1[0x3af] = 0;
    param_1[0x3bc] = 0;
    param_1[0x3bb] = 0;
    param_1[0x3ba] = 0;
    param_1[0x3b9] = 0;
    param_1[0x3bd] = 0;
    param_1[0x3c1] = 0;
    param_1[0x3c4] = 0;
    param_1[0x3c5] = 0;
    return param_1;
}


undefined8 FUN_140268fd0(undefined8 param_1, ulonglong param_2) {
    FUN_140269010();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140269010(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 *puVar4;

    *param_1 = &PTR_LAB_140b60e70;
    FUN_14026a900(param_1, 0);
    FUN_140274d70(param_1);
    FUN_140275940(param_1 + 0x33e);
    uVar3 = 0;
    if ((longlong *) param_1[0x33b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x33b] + 0x10))();
        param_1[0x33b] = 0;
    }
    if ((longlong *) param_1[0x33a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x33a] + 0x10))();
        param_1[0x33a] = 0;
    }
    if ((longlong *) param_1[0x339] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x339] + 0x10))();
        param_1[0x339] = 0;
    }
    if ((longlong *) param_1[0x338] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x338] + 0x10))();
        param_1[0x338] = 0;
    }
    if ((HMODULE) param_1[0x518] != (HMODULE) 0x0) {
        FreeLibrary((HMODULE) param_1[0x518]);
    }
    if ((HMODULE) param_1[0x519] != (HMODULE) 0x0) {
        FreeLibrary((HMODULE) param_1[0x519]);
    }
    puVar4 = param_1 + 0x340;
    lVar2 = 0x17;
    do {
        FUN_14018b900(*puVar4, 0);
        puVar4 = puVar4 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (param_1[0x3c7] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x3bf] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x3a8);
    FUN_14018b900(param_1[0x3aa], 0);
    param_1[0x3aa] = 0;
    FUN_140019490(param_1 + 0x3a3);
    FUN_14018b900(param_1[0x3a5], 0);
    param_1[0x3a5] = 0;
    FUN_140019490(param_1 + 0x39e);
    FUN_14018b900(param_1[0x3a0], 0);
    param_1[0x3a0] = 0;
    FUN_140019490(param_1 + 0x399);
    FUN_14018b900(param_1[0x39b], 0);
    param_1[0x39b] = 0;
    FUN_140019490(param_1 + 0x394);
    FUN_14018b900(param_1[0x396], 0);
    param_1[0x396] = 0;
    FUN_140019490(param_1 + 0x38f);
    FUN_14018b900(param_1[0x391], 0);
    param_1[0x391] = 0;
    if (param_1[0x38e] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x38d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x38c] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x38b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x38a] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x389] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x388] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x387] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x386] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x385] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[900] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[899] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x382] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x381] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x33f] != 0) {
        do {
            plVar1 = *(longlong * *)(param_1[0x33e] + uVar3 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x10))();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong) param_1[0x33f]);
    }
    lVar2 = param_1[0x33e];
    if (lVar2 != 0) {
        (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_1402632f0(param_1);
    return;
}


void FUN_140269350(longlong param_1) {
    WCHAR WVar1;
    WCHAR *pWVar2;
    DWORD DVar3;
    uint uVar4;
    BOOL BVar5;
    int iVar6;
    HMODULE hModule;
    WCHAR *pWVar7;
    ulonglong uVar8;
    undefined8 *lpAddress;
    uint uVar9;
    longlong lVar10;
    longlong lVar11;
    undefined auStack1128[32];
    DWORD local_448[4];
    WCHAR local_438[264];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    FUN_14001b370(local_228, 0x104, L"d3dx9_%u.dll", 0x2b);
    DVar3 = GetModuleFileNameW((HMODULE) 0x0, local_438, 0x104);
    uVar8 = (ulonglong) DVar3;
    do {
        uVar4 = DVar3;
        if (uVar4 == 0) break;
        uVar4 = (uint) uVar8;
        uVar8 = (ulonglong)(uVar4 - 1);
        DVar3 = uVar4 - 1;
    } while (local_438[uVar8] != L'\\');
    uVar9 = 0x104 - uVar4;
    uVar8 = (ulonglong) uVar9;
    hModule = (HMODULE) 0x0;
    iVar6 = 0;
    pWVar7 = local_438 + uVar4;
    if (0x7ffffffe < uVar8 - 1) {
        iVar6 = -0x7ff8ffa9;
    }
    if (iVar6 < 0) {
        if (uVar9 == 0) goto LAB_14026944b;
    } else if (uVar9 == 0) {
        LAB_140269437:
        pWVar7 = pWVar7 + -1;
        iVar6 = -0x7ff8ff86;
    } else {
        lVar10 = 0x7ffffffe - uVar8;
        lVar11 = (longlong) local_228 - (longlong) pWVar7;
        pWVar2 = pWVar7;
        do {
            pWVar7 = pWVar2;
            if ((lVar10 + uVar8 == 0) || (WVar1 = *(WCHAR * )(lVar11 + (longlong) pWVar7), WVar1 == L'\0')) {
                iVar6 = 0;
                if (uVar8 != 0) goto LAB_140269447;
                goto LAB_140269437;
            }
            *pWVar7 = WVar1;
            uVar8 = uVar8 - 1;
            pWVar2 = pWVar7 + 1;
        } while (uVar8 != 0);
        iVar6 = -0x7ff8ff86;
    }
    LAB_140269447:
    *pWVar7 = L'\0';
    LAB_14026944b:
    if (-1 < iVar6) {
        hModule = LoadLibraryW(local_438);
    }
    *(HMODULE * )(param_1 + 0x28c8) = hModule;
    if (((((hModule != (HMODULE) 0x0) &&
           (DAT_140c65748 = GetProcAddress(hModule, "D3DXCreateTexture"), DAT_140c65748 != (FARPROC) 0x0)
          ) && (DAT_140c65750 =
                        GetProcAddress(*(HMODULE * )(param_1 + 0x28c8),
                                       "D3DXCreateTextureFromFileInMemoryEx"),
            DAT_140c65750 != (FARPROC) 0x0)) &&
         (((DAT_140c65758 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXCreateCubeTexture"),
                 DAT_140c65758 != (FARPROC) 0x0 &&
                 (DAT_140c65760 =
                          GetProcAddress(*(HMODULE * )(param_1 + 0x28c8),
                                         "D3DXCreateCubeTextureFromFileInMemoryEx"),
                         DAT_140c65760 != (FARPROC) 0x0)) &&
           ((DAT_140c65768 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXCreateVolumeTexture"),
                   DAT_140c65768 != (FARPROC) 0x0 &&
                   ((DAT_140c656f0 =
                             GetProcAddress(*(HMODULE * )(param_1 + 0x28c8),
                                            "D3DXCreateVolumeTextureFromFileInMemoryEx"),
                           DAT_140c656f0 != (FARPROC) 0x0 &&
                           (DAT_140c656f8 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXFilterTexture"),
                                   DAT_140c656f8 != (FARPROC) 0x0)))))))) &&
        ((DAT_140c65700 =
                  GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXGetImageInfoFromFileInMemory"),
                DAT_140c65700 != (FARPROC) 0x0 &&
                (((((DAT_140c65708 =
                             GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXLoadSurfaceFromMemory"),
                        DAT_140c65708 != (FARPROC) 0x0 &&
                        (DAT_140c65710 =
                                 GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXLoadSurfaceFromSurface"),
                                DAT_140c65710 != (FARPROC) 0x0)) &&
                    (DAT_140c65718 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXLoadVolumeFromMemory"),
                            DAT_140c65718 != (FARPROC) 0x0)) &&
                   ((DAT_140c65720 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXLoadVolumeFromVolume"),
                           DAT_140c65720 != (FARPROC) 0x0 &&
                           (DAT_140c65728 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXSHProjectCubeMap"),
                                   DAT_140c65728 != (FARPROC) 0x0)))) &&
                  (DAT_140c656e8 =
                           GetProcAddress(*(HMODULE * )(param_1 + 0x28c8), "D3DXSaveTextureToFileInMemory"),
                          DAT_140c656e8 != (FARPROC) 0x0)))))) {
        lVar10 = *(longlong * )(param_1 + 0x28c8);
        lpAddress = (undefined8 * )(lVar10 + 0x11fe0e);
        BVar5 = VirtualProtect(lpAddress, 0xf, 0x40, local_448);
        if (BVar5 != 0) {
            iVar6 = FUN_1407e6af0(lpAddress, &DAT_140b60e48, 0xf);
            if (iVar6 == 0) {
                *lpAddress = 0x4100ff390c06348;
                *(undefined4 * )(lVar10 + 0x11fe16) = 0xf41f386;
                *(undefined2 * )(lVar10 + 0x11fe1a) = 0x1c10;
                *(undefined * )(lVar10 + 0x11fe1c) = 0x84;
            } else {
                FUN_1400035b0(0xe, 0, 0, local_228);
            }
            VirtualProtect(lpAddress, 0xf, local_448[0], local_448);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1128);
    return;
}


undefined8 FUN_140269730(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    uint *puVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;

    FUN_1407e4830(param_1 + 0x1864, 0);
    uVar5 = *(uint * )(param_1 + 0x1920);
    *(undefined4 * )(param_1 + 0x1870) = 0x60000000;
    *(undefined4 * )(param_1 + 0x1878) = 0x80000000;
    *(undefined4 * )(param_1 + 0x187c) = 1;
    *(undefined4 * )(param_1 + 0x1880) = 0x100000;
    *(undefined4 * )(param_1 + 0x1884) = 0xa48f0;
    *(undefined4 * )(param_1 + 0x1888) = 0x2000010;
    *(undefined4 * )(param_1 + 0x188c) = 0xff;
    *(undefined4 * )(param_1 + 0x1890) = 0x3ff;
    *(undefined4 * )(param_1 + 0x1894) = 0x3ff;
    *(undefined4 * )(param_1 + 0x1898) = 0xff;
    *(undefined4 * )(&DAT_000018a0 + param_1) = 0x1e804;
    *(undefined4 * )(param_1 + 0x18a4) = 0x3030300;
    *(undefined4 * )(param_1 + 0x18a8) = 0x3030300;
    *(undefined4 * )(param_1 + 0x18ac) = 0x3030300;
    *(undefined4 * )(param_1 + 0x18b0) = 0x1f;
    *(undefined4 * )(param_1 + 0x18b4) = 0x1f;
    *(undefined4 * )(param_1 + 0x18ec) = 0x1ff;
    *(undefined4 * )(param_1 + 0x1938) = 0x11;
    *(undefined4 * )(param_1 + 0x1950) = 0x300;
    *(undefined4 * )(param_1 + 0x1958) = 0x3000300;
    *(undefined4 * )(param_1 + 0x18bc) = 0x400;
    *(undefined4 * )(param_1 + 0x18c0) = 0x400;
    *(undefined4 * )(param_1 + 0x18c4) = 0x20;
    *(undefined4 * )(param_1 + 0x1928) = 0xfffe0300;
    *(undefined4 * )(param_1 + 0x192c) = 0x100;
    *(undefined4 * )(param_1 + 0x1930) = 0xffff0300;
    *(undefined4 * )(param_1 + 0x1954) = 4;
    puVar3 = (uint * )(param_1 + 0x4a0);
    lVar6 = 0x17;
    do {
        uVar4 = *puVar3;
        if (uVar5 < uVar4) {
            *(uint * )(param_1 + 0x1920) = uVar4;
            uVar5 = uVar4;
        }
        uVar2 = 0;
        if (*puVar3 != 0) {
            uVar4 = *(uint * )(param_1 + 0x1924);
            do {
                uVar1 = puVar3[uVar2 + 1];
                if (uVar4 < uVar1) {
                    *(uint * )(param_1 + 0x1924) = uVar1;
                    uVar4 = uVar1;
                }
                uVar1 = (int) uVar2 + 1;
                uVar2 = (ulonglong) uVar1;
            } while (uVar1 < *puVar3);
        }
        puVar3 = puVar3 + 0x36;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402698c0(longlong param_1) {
    undefined uVar1;
    uint uVar2;
    undefined auVar3[16];
    DWORD DVar4;
    UINT UVar5;
    int iVar6;
    undefined4 uVar7;
    HMODULE pHVar8;
    FARPROC pFVar9;
    INT_PTR IVar10;
    undefined8 uVar11;
    longlong lVar12;
    int *piVar13;
    undefined **ppuVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    undefined *puVar18;
    int iVar19;
    uint *puVar20;
    undefined auStack616[32];
    WCHAR local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack616;
    DVar4 = GetCurrentThreadId();
    *(DWORD * )(param_1 + 0x19b8) = DVar4;
    UVar5 = GetSystemDirectoryW(local_248, 0x104);
    pHVar8 = (HMODULE) 0x0;
    if (UVar5 != 0) {
        iVar6 = FUN_14001b370(local_248 + UVar5, 0x104 - (ulonglong) UVar5, &DAT_140a43680, L"d3d9.dll");
        if (iVar6 < 0) {
            pHVar8 = (HMODULE) 0x0;
        } else {
            pHVar8 = LoadLibraryW(local_248);
        }
    }
    *(HMODULE * )(param_1 + 0x28c0) = pHVar8;
    if (((((pHVar8 == (HMODULE) 0x0) ||
           (DAT_140c65770 = GetProcAddress(pHVar8, "D3DPERF_SetOptions"), DAT_140c65770 == (FARPROC) 0x0)
          ) || (_DAT_140c65730 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c0), "D3DPERF_GetStatus"),
            _DAT_140c65730 == (FARPROC) 0x0)) ||
         ((_DAT_140c65738 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c0), "D3DPERF_BeginEvent"),
                 _DAT_140c65738 == (FARPROC) 0x0 ||
                 (_DAT_140c65740 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c0), "D3DPERF_EndEvent"),
                         _DAT_140c65740 == (FARPROC) 0x0)))) ||
        (((uVar2 = *(uint * )(&DAT_00001860 + param_1), (*DAT_140c65770)(), (~uVar2 & 1) != 0 &&
                                                                            (pFVar9 = GetProcAddress(
                                                                                    *(HMODULE * )(param_1 + 0x28c0),
                                                                                    "Direct3DCreate9Ex"),
                                                                                    pFVar9 != (FARPROC) 0x0)) &&
          ((IVar10 = (*pFVar9)(0x20, param_1 + 0x19c8), (int) IVar10 < 0 ||
                                                        (iVar6 = (**(code * *) * *(undefined8 * *)(param_1 + 0x19c8))
                                                                (*(undefined8 * *)(param_1 + 0x19c8), &DAT_140964770),
                                                                iVar6 < 0))))))
        goto LAB_140269c64;
    if (*(longlong * )(param_1 + 0x19c0) == 0) {
        pFVar9 = GetProcAddress(*(HMODULE * )(param_1 + 0x28c0), "Direct3DCreate9");
        if (pFVar9 == (FARPROC) 0x0) goto LAB_140269c64;
        IVar10 = (*pFVar9)();
        *(INT_PTR * )(param_1 + 0x19c0) = IVar10;
        if (IVar10 == 0) goto LAB_140269c64;
    }
    if (*(longlong * )(param_1 + 0x19c8) == 0) {
        *(undefined4 * )(param_1 + 0x19e8) = 0;
        *(undefined * *)(param_1 + 0x1b78) = &DAT_140ae7b18;
        *(undefined * *)(param_1 + 0x1b80) = &DAT_140ae7a60;
        *(undefined * *)(param_1 + 0x1b88) = &DAT_140ae7a90;
        *(undefined * *)(param_1 + 0x1b90) = &DAT_140ae7ab0;
    } else {
        *(undefined * *)(param_1 + 0x1b78) = &DAT_140ae7a48;
        *(undefined * *)(param_1 + 0x1b80) = &DAT_140ae7a78;
        *(undefined * *)(param_1 + 0x1b88) = &DAT_140ae7aa0;
        *(undefined * *)(param_1 + 0x1b90) = &DAT_140ae7ac0;
        uVar7 = FUN_140193c40();
        *(undefined4 * )(param_1 + 0x19e8) = uVar7;
    }
    ppuVar14 = &PTR_DAT_140c38350;
    puVar20 = &DAT_140ae5d90;
    lVar15 = 0x17;
    do {
        uVar2 = *puVar20;
        uVar17 = (ulonglong) uVar2;
        puVar18 = *ppuVar14;
        auVar3 = ZEXT816(8) * ZEXT416(uVar2 + 1);
        uVar11 = SUB168(auVar3, 0);
        if (SUB168(auVar3 >> 0x40, 0) != 0) {
            uVar11 = 0xffffffffffffffff;
        }
        lVar12 = FUN_14018b280(uVar11, 0);
        iVar6 = -1;
        if (uVar2 != 0) {
            piVar13 = (int *) (puVar18 + 4);
            uVar16 = uVar17;
            puVar18 = (undefined * )(lVar12 + 4);
            pHVar8 = (HMODULE) 0x0;
            do {
                iVar19 = (int) pHVar8;
                if (iVar6 != piVar13[1]) {
                    iVar6 = piVar13[1];
                    iVar19 = 0;
                }
                *(short *) (puVar18 + -4) = (short) iVar6;
                *(short *) (puVar18 + -2) = (short) iVar19;
                uVar1 = (&UNK_140ae7980)[(longlong) * piVar13 * 4];
                puVar18[1] = 0;
                *puVar18 = uVar1;
                puVar18[2] = (&UNK_140ae79b0)[(longlong) piVar13[-1] * 4];
                puVar18[3] = (&UNK_140ae7a00)[(longlong) piVar13[-1] * 4];
                pHVar8 = (HMODULE)(ulonglong)
                        (uint)(iVar19 + *(int *) (&DAT_140ae4d78 + (longlong) * piVar13 * 4));
                uVar16 = uVar16 - 1;
                piVar13 = piVar13 + 4;
                puVar18 = puVar18 + 8;
            } while (uVar16 != 0);
        }
        *(undefined4 * )(lVar12 + uVar17 * 8) = 0xff;
        *(undefined4 * )(lVar12 + 4 + uVar17 * 8) = 0x11;
        *(longlong * )(param_1 + -0x140c36950 + (longlong) ppuVar14) = lVar12;
        ppuVar14 = ppuVar14 + 1;
        puVar20 = puVar20 + 1;
        lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    LAB_140269c64:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack616);
    return;
}


bool FUN_140269c80(longlong param_1, longlong param_2) {
    if ((((((((*(uint * )(param_2 + 0x14) & *(uint * )(param_1 + 0x1878)) == *(uint * )(param_1 + 0x1878)
             ) && ((*(uint * )(param_2 + 0x18) & *(uint * )(param_1 + 0x187c)) ==
                   *(uint * )(param_1 + 0x187c))) &&
            ((*(uint * )(param_2 + 0x1c) & *(uint * )(param_1 + 0x1880)) == *(uint * )(param_1 + 0x1880)))
           && (((*(uint * )(param_2 + 0x20) & *(uint * )(param_1 + 0x1884)) ==
                *(uint * )(param_1 + 0x1884) &&
                ((*(uint * )(param_2 + 0x24) & *(uint * )(param_1 + 0x1888)) ==
                 *(uint * )(param_1 + 0x1888))))) &&
          ((*(uint * )(param_2 + 0x28) & *(uint * )(param_1 + 0x188c)) == *(uint * )(param_1 + 0x188c)))
         && ((((((*(uint * )(param_2 + 0x2c) & *(uint * )(param_1 + 0x1890)) ==
                 *(uint * )(param_1 + 0x1890) &&
                 ((*(uint * )(param_2 + 0x30) & *(uint * )(param_1 + 0x1894)) ==
                  *(uint * )(param_1 + 0x1894))) &&
                (((*(uint * )(param_2 + 0x34) & *(uint * )(param_1 + 0x1898)) ==
                  *(uint * )(param_1 + 0x1898) &&
                  ((((*(uint * )(param_2 + 0x3c) & *(uint * )(&DAT_000018a0 + param_1)) ==
                     *(uint * )(&DAT_000018a0 + param_1) &&
                     ((*(uint * )(param_2 + 0x40) & *(uint * )(param_1 + 0x18a4)) ==
                      *(uint * )(param_1 + 0x18a4))) &&
                    ((*(uint * )(param_2 + 0x44) & *(uint * )(param_1 + 0x18a8)) ==
                     *(uint * )(param_1 + 0x18a8))))))) &&
               (((*(uint * )(param_2 + 0x48) & *(uint * )(param_1 + 0x18ac)) ==
                 *(uint * )(param_1 + 0x18ac) &&
                 ((*(uint * )(param_2 + 0x4c) & *(uint * )(param_1 + 0x18b0)) ==
                  *(uint * )(param_1 + 0x18b0))))) &&
              ((*(uint * )(param_2 + 0x50) & *(uint * )(param_1 + 0x18b4)) == *(uint * )(param_1 + 0x18b4))
    ))) &&
        (((((*(uint * )(param_2 + 0x88) & *(uint * )(param_1 + 0x18ec)) == *(uint * )(param_1 + 0x18ec) &&
            ((*(uint * )(param_2 + 0xd4) & *(uint * )(param_1 + 0x1938)) == *(uint * )(param_1 + 0x1938)))
           && (((*(uint * )(param_2 + 0xec) & *(uint * )(param_1 + 0x1950)) == *(uint * )(param_1 + 0x1950)
                && ((((*(uint * )(param_2 + 0xf4) & *(uint * )(param_1 + 0x1958)) ==
                      *(uint * )(param_1 + 0x1958) &&
                      (*(uint * )(param_1 + 0x18bc) <= *(uint * )(param_2 + 0x58))) &&
                     (*(uint * )(param_1 + 0x18c0) <= *(uint * )(param_2 + 0x5c))))))) &&
          (((*(uint * )(param_1 + 0x18c4) <= *(uint * )(param_2 + 0x60) &&
             (*(uint * )(param_1 + 0x1920) <= *(uint * )(param_2 + 0xbc))) &&
            ((*(uint * )(param_1 + 0x1924) <= *(uint * )(param_2 + 0xc0) &&
              (((*(uint * )(param_1 + 0x1928) <= *(uint * )(param_2 + 0xc4) &&
                 (*(uint * )(param_1 + 0x192c) <= *(uint * )(param_2 + 200))) &&
                ((*(uint * )(param_1 + 0x1930) <= *(uint * )(param_2 + 0xcc) &&
                  (*(uint * )(param_1 + 0x1954) <= *(uint * )(param_2 + 0xf0))))))))))))) {
        return (*(uint * )(param_2 + 0x3c) & 0x22) == 0;
    }
    return false;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140269ec0(ulonglong param_1, int *param_2, undefined4 param_3, int *param_4) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    undefined auStack216[32];
    int *local_b8;
    uint local_a8;
    ulonglong local_a0;
    int local_98;
    int local_88;
    int iStack132;
    int iStack128;
    int iStack124;
    int local_78;
    int iStack116;
    int iStack112;
    int iStack108;
    int local_68;
    int local_64;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack216;
    *param_4 = 0x18;
    plVar1 = *(longlong * *)(param_1 + 0x19c8);
    local_a0 = param_1;
    if (plVar1 == (longlong *) 0x0) {
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x40))
                (*(longlong * *)(param_1 + 0x19c0), param_3, &local_78);
        if (-1 < iVar2) {
            if ((*(byte * )(param_2 + 8) & 2) != 0) {
                local_98 = iStack112;
                if (param_2[4] != 0) {
                    local_98 = param_2[4];
                }
                uVar7 = 0xffffffff;
                uVar8 = 0xffffffff;
                local_a8 = (&DAT_140ae7b30)[param_2[2]];
                uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x30))
                        (*(longlong * *)(param_1 + 0x19c0), param_3, local_a8);
                uVar4 = 0;
                local_a0 = local_a0 & 0xffffffff00000000 | (ulonglong) uVar6;
                if (uVar6 != 0) {
                    do {
                        local_b8 = &local_88;
                        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x38))
                                (*(longlong * *)(param_1 + 0x19c0), param_3, local_a8, uVar4);
                        if (iVar2 < 0) goto LAB_14026a12d;
                        uVar6 = (iStack132 - param_2[1]) * (iStack132 - param_2[1]) +
                                (local_88 - *param_2) * (local_88 - *param_2);
                        if ((uVar6 <= uVar7) &&
                            ((uVar5 = iStack128 - local_98 >> 0x1f,
                                    uVar5 = (iStack128 - local_98 ^ uVar5) - uVar5, uVar6 != uVar7 || (uVar5 <= uVar8)))
                                ) {
                            local_78 = local_88;
                            iStack116 = iStack132;
                            iStack112 = iStack128;
                            iStack108 = iStack124;
                            uVar7 = uVar6;
                            uVar8 = uVar5;
                        }
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < (uint) local_a0);
                }
            }
            param_4[5] = 1;
            param_4[1] = local_78;
            param_4[2] = iStack116;
            param_4[3] = iStack112;
            param_4[4] = iStack108;
        }
    } else {
        iVar2 = (**(code * *)(*plVar1 + 0x98))(plVar1, param_3, param_4);
        if ((-1 < iVar2) && ((*(byte * )(param_2 + 8) & 2) != 0)) {
            iVar2 = param_2[4];
            if (iVar2 == 0) {
                iVar2 = param_4[3];
            }
            local_78 = 0x18;
            iStack132 = (&DAT_140ae7b30)[param_2[2]];
            local_88 = 0xc;
            iStack128 = 1;
            uVar7 = 0xffffffff;
            uVar8 = 0xffffffff;
            local_a8 = (**(code * *)(**(longlong * *)(local_a0 + 0x19c8) + 0x88))
                    (*(longlong * *)(local_a0 + 0x19c8), param_3, &local_88);
            uVar6 = 0;
            if (local_a8 != 0) {
                do {
                    local_b8 = &local_78;
                    iVar3 = (**(code * *)(**(longlong * *)(local_a0 + 0x19c8) + 0x90))();
                    if (iVar3 < 0) break;
                    uVar4 = (iStack112 - param_2[1]) * (iStack112 - param_2[1]) +
                            (iStack116 - *param_2) * (iStack116 - *param_2);
                    if ((uVar4 <= uVar7) &&
                        ((uVar5 = iStack108 - iVar2 >> 0x1f, uVar5 = (iStack108 - iVar2 ^ uVar5) - uVar5,
                                uVar4 != uVar7 || (uVar5 <= uVar8)))) {
                        *param_4 = local_78;
                        param_4[1] = iStack116;
                        param_4[2] = iStack112;
                        param_4[3] = iStack108;
                        param_4[4] = local_68;
                        param_4[5] = local_64;
                        uVar7 = uVar4;
                        uVar8 = uVar5;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < local_a8);
            }
        }
    }
    LAB_14026a12d:
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack216);
    return;
}


undefined8 FUN_14026a150(longlong param_1, int *param_2, longlong param_3, undefined8 *param_4) {
    bool bVar1;
    DWORD DVar2;
    int iVar3;
    undefined4 uVar4;
    char cVar5;
    int iVar6;
    bool bVar7;
    DWORD local_res8[2];

    GetWindowThreadProcessId(*(HWND * )(param_2 + 6), local_res8);
    DVar2 = GetCurrentProcessId();
    bVar7 = local_res8[0] != DVar2;
    if (((param_2[8] & 2U) == 0) || (bVar1 = true, bVar7)) {
        bVar1 = false;
    }
    if (((*(int *) (param_1 + 0x19e8) == 0) || (bVar7)) ||
        (cVar5 = bVar7 + '\x01', *(int *) (param_1 + 0xe4) != 0)) {
        cVar5 = '\0';
    }
    if (((param_2[8] & 4U) == 0) || (iVar6 = 1, bVar7)) {
        iVar6 = 0;
    }
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    if (bVar1) {
        *(undefined4 *) param_4 = *(undefined4 * )(param_3 + 4);
        *(undefined4 * )((longlong) param_4 + 4) = *(undefined4 * )(param_3 + 8);
        uVar4 = *(undefined4 * )(param_3 + 0x10);
        *(undefined4 * )((longlong) param_4 + 0xc) = 1;
        *(undefined4 * )(param_4 + 3) = 1;
        *(undefined4 * )(param_4 + 5) = 0;
        *(undefined4 * )(param_4 + 1) = uVar4;
        *(undefined4 * )(param_4 + 7) = *(undefined4 * )(param_3 + 0xc);
    } else {
        iVar3 = 1;
        if (*param_2 != 0) {
            iVar3 = *param_2;
        }
        *(int *) param_4 = iVar3;
        iVar3 = 1;
        if (param_2[1] != 0) {
            iVar3 = param_2[1];
        }
        *(int *) ((longlong) param_4 + 4) = iVar3;
        if (param_2[2] < 0x1b) {
            uVar4 = (&DAT_140ae7b30)[param_2[2]];
        } else {
            uVar4 = *(undefined4 * )(param_3 + 0x10);
        }
        *(undefined4 * )(param_4 + 1) = uVar4;
        *(undefined4 * )(param_4 + 5) = 1;
        *(undefined4 * )(param_4 + 7) = 0;
        *(uint * )((longlong) param_4 + 0xc) = (cVar5 != '\0') + 1;
        uVar4 = 1;
        if (cVar5 != '\0') {
            uVar4 = 5;
        }
        *(undefined4 * )(param_4 + 3) = uVar4;
    }
    param_4[2] = 0;
    param_4[4] = *(undefined8 * )(param_2 + 6);
    *(undefined8 * )((longlong) param_4 + 0x2c) = 0;
    *(undefined4 * )((longlong) param_4 + 0x34) = 0;
    iVar3 = -0x80000000;
    if (iVar6 != 0) {
        iVar3 = 0;
    }
    *(int *) ((longlong) param_4 + 0x3c) = iVar3;
    return 0;
}


undefined4 *
FUN_14026a2d0(longlong param_1, undefined8 *param_2, undefined4 *param_3, undefined4 *param_4) {
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    undefined4 uVar6;
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
    int iStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    int iStack28;

    puVar4 = (undefined4 *) FUN_14026a900(param_1, 1);
    if ((int) puVar4 < 0) {
        return puVar4;
    }
    local_58 = *param_3;
    uStack84 = param_3[1];
    uStack80 = param_3[2];
    uStack76 = param_3[3];
    local_48 = param_3[4];
    uStack68 = param_3[5];
    uStack64 = param_3[6];
    uStack60 = param_3[7];
    puVar4 = (undefined4 *) 0x0;
    uVar6 = 0;
    local_38 = param_3[8];
    uStack52 = param_3[9];
    iStack48 = param_3[10];
    uStack44 = param_3[0xb];
    local_28 = param_3[0xc];
    uStack36 = param_3[0xd];
    uStack32 = param_3[0xe];
    iStack28 = param_3[0xf];
    if (*(longlong * )(param_1 + 0x19c8) == 0) {
        puVar5 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x80))
                (*(longlong * *)(param_1 + 0x19d0), &local_58);
        iVar2 = (int) puVar5;
    } else {
        uVar6 = 0;
        if (((iStack48 != 0) && (uVar6 = 0, iStack28 == 0)) &&
            (iVar2 = FUN_1402649d0(*(undefined4 * )(&DAT_00001860 + param_1)), iVar2 != 0)) {
            iStack28 = -0x80000000;
            uVar6 = 1;
        }
        puVar5 = param_4;
        if (iStack48 != 0) {
            puVar5 = puVar4;
        }
        puVar5 = (undefined4 * )
                (**(code * *)(**(longlong * *)(param_1 + 0x19d8) + 0x420))
                (*(longlong * *)(param_1 + 0x19d8), &local_58, puVar5);
        iVar2 = (int) puVar5;
    }
    if (iVar2 < 0) {
        return puVar5;
    }
    puVar5 = (undefined4 *) FUN_14026a800(param_1, param_2, param_3);
    if ((int) puVar5 < 0) {
        return puVar5;
    }
    *(undefined8 * )(param_1 + 0x38) = *param_2;
    *(undefined8 * )(param_1 + 0x40) = param_2[1];
    *(undefined8 * )(param_1 + 0x48) = param_2[2];
    *(undefined8 * )(param_1 + 0x50) = param_2[3];
    *(undefined8 * )(param_1 + 0x58) = param_2[4];
    *(undefined4 * )(param_1 + 0x19a0) = *param_4;
    *(undefined4 * )(param_1 + 0x19a4) = param_4[1];
    *(undefined4 * )(param_1 + 0x19a8) = param_4[2];
    *(undefined4 * )(param_1 + 0x19ac) = param_4[3];
    *(undefined4 * )(param_1 + 0x19b0) = param_4[4];
    uVar1 = param_4[5];
    *(undefined4 * )(param_1 + 0x19ec) = uVar6;
    *(undefined4 * )(param_1 + 0x19b4) = uVar1;
    *(undefined8 * )(param_1 + 0x60) = 0;
    *(undefined8 * )(param_1 + 0x68) = 0;
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    *(undefined8 * )(param_1 + 0x80) = 0;
    *(undefined4 * )(param_1 + 0x60) = *(undefined4 * )(param_1 + 0x19a4);
    *(undefined4 * )(param_1 + 100) = *(undefined4 * )(param_1 + 0x19a8);
    *(undefined4 * )(param_1 + 0x70) = *(undefined4 * )(param_1 + 0x19ac);
    if (*(int *) (param_1 + 0x19b0) == 0x17) {
        *(undefined4 * )(param_1 + 0x68) = 2;
    } else {
        if (*(int *) (param_1 + 0x19b0) != 0x18) {
            *(undefined4 * )(param_1 + 0x68) = 1;
            *(undefined4 * )(param_1 + 0x6c) = 0x17;
            goto LAB_14026a490;
        }
        *(undefined4 * )(param_1 + 0x68) = 4;
    }
    *(undefined4 * )(param_1 + 0x6c) = 0x15;
    LAB_14026a490:
    uVar3 = FUN_14026a900(param_1, 2);
    if ((int) uVar3 < 0) {
        puVar4 = (undefined4 * )(ulonglong)
        uVar3;
    }
    return puVar4;
}


ulonglong FUN_14026a4d0(longlong param_1, undefined8 *param_2, undefined4 param_3, undefined4 param_4,
                        undefined8 param_5, undefined4 *param_6, undefined4 *param_7) {
    longlong **pplVar1;
    longlong **pplVar2;
    undefined4 uVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined4 *puVar7;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    int iStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    int iStack44;

    uVar6 = FUN_14026a900(param_1, 0);
    if ((int) uVar6 < 0) {
        return uVar6;
    }
    pplVar1 = (longlong * *)(param_1 + 0x19d0);
    if (*pplVar1 != (longlong *) 0x0) {
        (**(code * *)(**pplVar1 + 0x10))();
        *pplVar1 = (longlong *) 0x0;
    }
    pplVar2 = (longlong * *)(param_1 + 0x19d8);
    if (*pplVar2 != (longlong *) 0x0) {
        (**(code * *)(**pplVar2 + 0x10))();
        *pplVar2 = (longlong *) 0x0;
    }
    param_5._0_4_ = 0;
    local_68 = *param_6;
    uStack100 = param_6[1];
    uStack96 = param_6[2];
    uStack92 = param_6[3];
    local_58 = param_6[4];
    uStack84 = param_6[5];
    uStack80 = param_6[6];
    uStack76 = param_6[7];
    local_48 = param_6[8];
    uStack68 = param_6[9];
    iStack64 = param_6[10];
    uStack60 = param_6[0xb];
    local_38 = param_6[0xc];
    uStack52 = param_6[0xd];
    uStack48 = param_6[0xe];
    iStack44 = param_6[0xf];
    if (*(longlong * )(param_1 + 0x19c8) == 0) {
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x80))
                (*(longlong * *)(param_1 + 0x19c0), param_3, 1, param_2[3], 0x50, &local_68, pplVar1);
        param_5._0_4_ = 0;
        if ((int) uVar6 < 0) {
            return uVar6;
        }
    } else {
        if (((iStack64 != 0) && (iStack44 == 0)) &&
            (iVar4 = FUN_1402649d0(*(undefined4 * )(&DAT_00001860 + param_1)), iVar4 != 0)) {
            iStack44 = -0x80000000;
            param_5._0_4_ = 1;
        }
        puVar7 = param_7;
        if (iStack64 != 0) {
            puVar7 = (undefined4 *) 0x0;
        }
        uVar6 = (**(code * *)(**(longlong * *)(param_1 + 0x19c8) + 0xa0))
                (*(longlong * *)(param_1 + 0x19c8), param_3, 1, param_2[3], 0x8050, &local_68, puVar7, pplVar2);
        if ((int) uVar6 < 0) {
            return uVar6;
        }
        uVar5 = (**(code * *) * *pplVar2)(*pplVar2, &DAT_140964780, pplVar1);
        if ((int) uVar5 < 0) {
            if (*pplVar2 == (longlong *) 0x0) {
                return (ulonglong) uVar5;
            }
            (**(code * *)(**pplVar2 + 0x10))();
            *pplVar2 = (longlong *) 0x0;
            return (ulonglong) uVar5;
        }
    }
    uVar6 = FUN_14026a800(param_1, param_2, param_6);
    if (-1 < (int) uVar6) {
        *(undefined4 * )(param_1 + 0x1994) = param_3;
        *(undefined4 * )(param_1 + 0x199c) = 1;
        *(undefined4 * )(param_1 + 0x1998) = param_4;
        *(undefined8 * )(param_1 + 0x38) = *param_2;
        *(undefined8 * )(param_1 + 0x40) = param_2[1];
        *(undefined8 * )(param_1 + 0x48) = param_2[2];
        *(undefined8 * )(param_1 + 0x50) = param_2[3];
        *(undefined8 * )(param_1 + 0x58) = param_2[4];
        *(undefined4 * )(param_1 + 0x19a0) = *param_7;
        *(undefined4 * )(param_1 + 0x19a4) = param_7[1];
        *(undefined4 * )(param_1 + 0x19a8) = param_7[2];
        *(undefined4 * )(param_1 + 0x19ac) = param_7[3];
        *(undefined4 * )(param_1 + 0x19b0) = param_7[4];
        uVar3 = param_7[5];
        *(undefined4 * )(param_1 + 0x19ec) = (undefined4) param_5;
        *(undefined4 * )(param_1 + 0x19b4) = uVar3;
        *(undefined8 * )(param_1 + 0x60) = 0;
        *(undefined8 * )(param_1 + 0x68) = 0;
        *(undefined8 * )(param_1 + 0x70) = 0;
        *(undefined8 * )(param_1 + 0x78) = 0;
        *(undefined8 * )(param_1 + 0x80) = 0;
        *(undefined4 * )(param_1 + 0x60) = *(undefined4 * )(param_1 + 0x19a4);
        *(undefined4 * )(param_1 + 0x68) = 1;
        *(undefined4 * )(param_1 + 100) = *(undefined4 * )(param_1 + 0x19a8);
        *(undefined4 * )(param_1 + 0x6c) = 0x17;
        *(undefined4 * )(param_1 + 0x70) = *(undefined4 * )(param_1 + 0x19ac);
        uVar5 = FUN_14026a900(param_1, 2);
        uVar6 = (ulonglong) uVar5;
        if ((int) uVar5 < 0) {
            if (*pplVar2 != (longlong *) 0x0) {
                (**(code * *)(**pplVar2 + 0x10))();
                *pplVar2 = (longlong *) 0x0;
            }
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 0x10))();
                *pplVar1 = (longlong *) 0x0;
            }
        } else {
            uVar6 = 0;
        }
    }
    return uVar6;
}


undefined8 FUN_14026a800(longlong param_1, longlong param_2, undefined4 *param_3) {
    longlong **pplVar1;
    int iVar2;
    undefined8 uVar3;
    longlong **pplVar4;

    pplVar4 = (longlong * *)(param_1 + 0x1de8);
    if (*pplVar4 != (longlong *) 0x0) {
        (**(code * *)(**pplVar4 + 0x10))();
        *pplVar4 = (longlong *) 0x0;
    }
    pplVar1 = (longlong * *)(param_1 + 0x1e28);
    if (*pplVar1 != (longlong *) 0x0) {
        (**(code * *)(**pplVar1 + 0x10))();
        *pplVar1 = (longlong *) 0x0;
    }
    uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x90))
            (*(longlong * *)(param_1 + 0x19d0), 0, 0, 0, pplVar4);
    if (-1 < (int) uVar3) {
        if ((*(int *) (param_2 + 0xc) < 0x1b) &&
            (uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0xe8))
                    (*(longlong * *)(param_1 + 0x19d0), *param_3, param_3[1],
                     (&DAT_140ae7b30)[*(int *) (param_2 + 0xc)],
                     (ulonglong) pplVar4 & 0xffffffff00000000 | (ulonglong)(uint)
            param_3[4],
                    param_3[5], 0, pplVar1, 0), (int) uVar3 < 0)) {
            return uVar3;
        }
        iVar2 = *(int *) (param_1 + 0xf0) + -1;
        *(int *) (param_1 + 0x1df0) = iVar2;
        *(int *) (param_1 + 0x1e30) = iVar2;
        uVar3 = 0;
    }
    return uVar3;
}


int FUN_14026a900(longlong param_1, int param_2) {
    DWORD *pDVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    DWORD DVar5;
    int iVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    pDVar1 = (DWORD * )(param_1 + 0x18);
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    puVar8 = (ulonglong * )(param_1 + 0x20);
    if (*pDVar1 == DVar5) {
        *puVar8 = *puVar8 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
            if (uVar2 == 0) {
                *pDVar1 = DVar5;
                goto LAB_14026a97a;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60();
    }
    LAB_14026a97a:
    iVar6 = *(int *) (param_1 + 0x19e0);
    if (iVar6 < param_2) {
        if ((((iVar6 < 1) && (0 < param_2)) && (iVar6 = FUN_14026ada0(), iVar6 < 0)) ||
            (((*(int *) (param_1 + 0x19e0) < 2 && (1 < param_2)) && (iVar6 = FUN_14026b680(), iVar6 < 0)))
                )
            goto LAB_14026ad13;
    } else if (param_2 < iVar6) {
        FUN_1401981b0();
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c08); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x78)) {
        iVar6 = FUN_140289670(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c10); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x40)) {
        iVar6 = FUN_140289bd0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c18); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x38)) {
        if ((*(int *) (lVar3 + 0x20) < 2) && (1 < param_2)) {
            *(int *) (lVar3 + 0x28) = *(int *) (*(longlong * )(lVar3 + 0x10) + 0x1ba8) + -1;
        }
        *(int *) (lVar3 + 0x20) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c20); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x40)) {
        iVar6 = FUN_14028af50(lVar3);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c28); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x40)) {
        if ((*(int *) (lVar3 + 0x24) < 2) && (1 < param_2)) {
            *(int *) (lVar3 + 0x2c) =
                    *(int *) (*(longlong * )(lVar3 + 0x10) + 0x1bd8 + (longlong) * (int *) (lVar3 + 0x1c) * 4) +
                    -1;
        }
        *(int *) (lVar3 + 0x24) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c30); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xf8)) {
        iVar6 = FUN_14028c810(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c38); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xe8)) {
        iVar6 = FUN_14028fcd0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c40); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x170)) {
        iVar6 = FUN_140292530(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c48); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x98)) {
        if (*(int *) (lVar3 + 0x28) < 1) {
            if (0 < param_2) {
                iVar6 = FUN_140295aa0(lVar3);
                goto LAB_14026ab99;
            }
            if (0 < *(int *) (lVar3 + 0x28)) goto LAB_14026ab8c;
        } else {
            LAB_14026ab8c:
            if (param_2 < 1) {
                iVar6 = FUN_140295b40(lVar3);
                LAB_14026ab99:
                if (iVar6 < 0) goto LAB_14026ad13;
            }
        }
        *(int *) (lVar3 + 0x28) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c50); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x98)) {
        if (*(int *) (lVar3 + 0x28) < 1) {
            if (0 < param_2) {
                iVar6 = FUN_140296860(lVar3);
                goto LAB_14026abe9;
            }
            if (0 < *(int *) (lVar3 + 0x28)) goto LAB_14026abdc;
        } else {
            LAB_14026abdc:
            if (param_2 < 1) {
                iVar6 = FUN_140296900(lVar3);
                LAB_14026abe9:
                if (iVar6 < 0) goto LAB_14026ad13;
            }
        }
        *(int *) (lVar3 + 0x28) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c58); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x80)) {
        iVar6 = FUN_140297290(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c60); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x38)) {
        if (*(int *) (lVar3 + 0x18) < 2) {
            if (param_2 < 2) {
                if (1 < *(int *) (lVar3 + 0x18)) goto LAB_14026ac7f;
            } else {
                plVar4 = *(longlong * *)(*(longlong * )(lVar3 + 0x10) + 0x19d0);
                iVar6 = (**(code * *)(*plVar4 + 0x3b0))(plVar4, 9, lVar3 + 0x20);
                if (iVar6 < 0) goto LAB_14026ad13;
                *(undefined4 * )(lVar3 + 0x28) = 0;
            }
        } else {
            LAB_14026ac7f:
            if ((param_2 < 2) && (*(longlong * *)(lVar3 + 0x20) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(lVar3 + 0x20) + 0x10))();
                *(undefined8 * )(lVar3 + 0x20) = 0;
            }
        }
        *(int *) (lVar3 + 0x18) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1c70); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xf8)) {
        iVar6 = FUN_140298430(lVar3, param_2);
        if (iVar6 < 0) goto LAB_14026ad13;
    }
    if ((*(int *) (param_1 + 0x19e0) <= param_2) ||
        ((((*(int *) (param_1 + 0x19e0) < 2 || (1 < param_2)) ||
           (iVar6 = FUN_14026bac0(param_1), -1 < iVar6)) &&
          (((*(int *) (param_1 + 0x19e0) < 1 || (0 < param_2)) ||
            (iVar6 = FUN_14026be80(param_1), -1 < iVar6)))))) {
        *(int *) (param_1 + 0x19e0) = param_2;
        iVar6 = 0;
    }
    LAB_14026ad13:
    if (*puVar8 < 2) {
        *pDVar1 = 0;
        *puVar8 = 0;
        if (*(longlong * )(param_1 + 0x28) != 0) {
            if (*(longlong * )(param_1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar8 = (ulonglong * )(param_1 + 0x30);
                uVar7 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_1 + 0x30));
        }
        return iVar6;
    }
    *puVar8 = *puVar8 - 1;
    return iVar6;
}


void FUN_14026ada0(longlong param_1) {
    byte *pbVar1;
    byte *pbVar2;
    byte bVar3;
    undefined auVar4[16];
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    byte *pbVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    uint uVar12;
    ulonglong uVar13;
    ushort uVar14;
    ulonglong uVar15;
    undefined4 uVar16;
    bool bVar17;
    undefined auStack1576[32];
    undefined4 local_608;
    undefined4 local_600;
    undefined4 local_5f8;
    uint local_5e8[2];
    undefined4 local_5e0[2];
    uint local_5d8;
    undefined4 local_5d4;
    uint local_560;
    uint local_55c;
    undefined4 local_54c;
    undefined4 local_508;
    undefined4 local_4f0;
    byte local_488[512];
    byte local_288[512];
    byte local_88[32];
    undefined8 local_68;
    int local_60;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1576;
    iVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x28))
            (*(longlong * *)(param_1 + 0x19c0), *(undefined4 * )(param_1 + 0x1994));
    if (-1 < iVar5) {
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x38))();
        uVar11 = 0;
        uVar10 = 0x20;
        pbVar8 = local_88;
        uVar16 = 0;
        *(undefined4 * )(param_1 + 0x88) = 0;
        uVar9 = 0x20;
        uVar13 = uVar11;
        do {
            bVar3 = *pbVar8;
            if ((char) bVar3 < '\0') {
                if (((1 < uVar9) && ((bVar3 & 0xe0) == 0xc0)) &&
                    (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    pbVar8 = pbVar8 + 2;
                    uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar9 = uVar9 - 2;
                    goto LAB_14026aef7;
                }
                if (((2 < uVar9) && ((bVar3 & 0xf0) == 0xe0)) &&
                    ((pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                           (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    pbVar8 = pbVar8 + 3;
                    uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar9 = uVar9 - 3;
                    goto LAB_14026aef7;
                }
                pbVar8 = pbVar8 + 1;
                uVar9 = uVar9 - 1;
            } else {
                pbVar8 = pbVar8 + 1;
                uVar14 = (ushort)(char)
                bVar3;
                uVar9 = uVar9 - 1;
                LAB_14026aef7:
                uVar13 = uVar13 + 1;
                if (uVar14 == 0) break;
            }
        } while (uVar9 != 0);
        uVar6 = SUB168(ZEXT816(2) * ZEXT816(uVar13), 0);
        if (SUB168(ZEXT816(2) * ZEXT816(uVar13) >> 0x40, 0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6, 0);
        pbVar8 = local_88;
        *(longlong * )(param_1 + 0x90) = lVar7;
        uVar9 = uVar11;
        if ((lVar7 != 0) || (uVar13 == 0)) {
            do {
                bVar3 = *pbVar8;
                if ((char) bVar3 < '\0') {
                    if (((1 < uVar10) && ((bVar3 & 0xe0) == 0xc0)) &&
                        (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                        pbVar8 = pbVar8 + 2;
                        uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                        uVar10 = uVar10 - 2;
                        goto LAB_14026affc;
                    }
                    if (((2 < uVar10) && ((bVar3 & 0xf0) == 0xe0)) &&
                        ((pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                               (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                        pbVar8 = pbVar8 + 3;
                        uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                                 (short) (char) (*pbVar2 & 0x3f);
                        uVar10 = uVar10 - 3;
                        goto LAB_14026affc;
                    }
                    pbVar8 = pbVar8 + 1;
                    uVar10 = uVar10 - 1;
                } else {
                    pbVar8 = pbVar8 + 1;
                    uVar14 = (ushort)(char)
                    bVar3;
                    uVar10 = uVar10 - 1;
                    LAB_14026affc:
                    if (uVar13 != 0) {
                        if (uVar9 == uVar13) break;
                        *(ushort * )(lVar7 + uVar9 * 2) = uVar14;
                    }
                    uVar9 = uVar9 + 1;
                    if (uVar14 == 0) break;
                }
            } while (uVar10 != 0);
        }
        uVar10 = 0x200;
        pbVar8 = local_288;
        uVar9 = 0x200;
        uVar13 = uVar11;
        do {
            bVar3 = *pbVar8;
            if ((char) bVar3 < '\0') {
                if (((1 < uVar9) && ((bVar3 & 0xe0) == 0xc0)) &&
                    (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    pbVar8 = pbVar8 + 2;
                    uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar9 = uVar9 - 2;
                    goto LAB_14026b0ea;
                }
                if ((((2 < uVar9) && ((bVar3 & 0xf0) == 0xe0)) &&
                     (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) &&
                    (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)) {
                    pbVar8 = pbVar8 + 3;
                    uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar9 = uVar9 - 3;
                    goto LAB_14026b0ea;
                }
                pbVar8 = pbVar8 + 1;
                uVar9 = uVar9 - 1;
            } else {
                pbVar8 = pbVar8 + 1;
                uVar14 = (ushort)(char)
                bVar3;
                uVar9 = uVar9 - 1;
                LAB_14026b0ea:
                uVar13 = uVar13 + 1;
                if (uVar14 == 0) break;
            }
        } while (uVar9 != 0);
        uVar6 = SUB168(ZEXT816(2) * ZEXT816(uVar13), 0);
        if (SUB168(ZEXT816(2) * ZEXT816(uVar13) >> 0x40, 0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6);
        uVar15 = 0x200;
        pbVar8 = local_288;
        *(longlong * )(param_1 + 0x98) = lVar7;
        uVar9 = uVar11;
        if ((lVar7 != 0) || (uVar13 == 0)) {
            do {
                bVar3 = *pbVar8;
                if ((char) bVar3 < '\0') {
                    if (((1 < uVar15) && ((bVar3 & 0xe0) == 0xc0)) &&
                        (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                        pbVar8 = pbVar8 + 2;
                        uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                        uVar15 = uVar15 - 2;
                        goto LAB_14026b1ec;
                    }
                    if ((((2 < uVar15) && ((bVar3 & 0xf0) == 0xe0)) &&
                         (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) &&
                        (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)) {
                        pbVar8 = pbVar8 + 3;
                        uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                                 (short) (char) (*pbVar2 & 0x3f);
                        uVar15 = uVar15 - 3;
                        goto LAB_14026b1ec;
                    }
                    pbVar8 = pbVar8 + 1;
                    uVar15 = uVar15 - 1;
                } else {
                    pbVar8 = pbVar8 + 1;
                    uVar14 = (ushort)(char)
                    bVar3;
                    uVar15 = uVar15 - 1;
                    LAB_14026b1ec:
                    if (uVar13 != 0) {
                        if (uVar9 == uVar13) break;
                        *(ushort * )(lVar7 + uVar9 * 2) = uVar14;
                    }
                    uVar9 = uVar9 + 1;
                    if (uVar14 == 0) break;
                }
            } while (uVar15 != 0);
        }
        uVar9 = 0x200;
        pbVar8 = local_488;
        uVar13 = uVar11;
        do {
            bVar3 = *pbVar8;
            if ((char) bVar3 < '\0') {
                if (((1 < uVar9) && ((bVar3 & 0xe0) == 0xc0)) &&
                    (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    pbVar8 = pbVar8 + 2;
                    uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar9 = uVar9 - 2;
                    goto LAB_14026b2d6;
                }
                if (((2 < uVar9) && ((bVar3 & 0xf0) == 0xe0)) &&
                    ((pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                           (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    pbVar8 = pbVar8 + 3;
                    uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar9 = uVar9 - 3;
                    goto LAB_14026b2d6;
                }
                pbVar8 = pbVar8 + 1;
                uVar9 = uVar9 - 1;
            } else {
                pbVar8 = pbVar8 + 1;
                uVar14 = (ushort)(char)
                bVar3;
                uVar9 = uVar9 - 1;
                LAB_14026b2d6:
                uVar13 = uVar13 + 1;
                if (uVar14 == 0) break;
            }
        } while (uVar9 != 0);
        uVar6 = SUB168(ZEXT816(2) * ZEXT816(uVar13), 0);
        if (SUB168(ZEXT816(2) * ZEXT816(uVar13) >> 0x40, 0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        lVar7 = FUN_14018b280(uVar6, 0);
        pbVar8 = local_488;
        *(longlong * )(param_1 + 0xa0) = lVar7;
        uVar9 = uVar11;
        if ((lVar7 != 0) || (uVar13 == 0)) {
            do {
                bVar3 = *pbVar8;
                if ((char) bVar3 < '\0') {
                    if (((1 < uVar10) && ((bVar3 & 0xe0) == 0xc0)) &&
                        (pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                        pbVar8 = pbVar8 + 2;
                        uVar14 = (short) (char) (bVar3 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                        uVar10 = uVar10 - 2;
                        goto LAB_14026b3dc;
                    }
                    if (((2 < uVar10) && ((bVar3 & 0xf0) == 0xe0)) &&
                        ((pbVar1 = pbVar8 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                               (pbVar2 = pbVar8 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                        pbVar8 = pbVar8 + 3;
                        uVar14 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar3 << 6) << 6 |
                                 (short) (char) (*pbVar2 & 0x3f);
                        uVar10 = uVar10 - 3;
                        goto LAB_14026b3dc;
                    }
                    pbVar8 = pbVar8 + 1;
                    uVar10 = uVar10 - 1;
                } else {
                    pbVar8 = pbVar8 + 1;
                    uVar14 = (ushort)(char)
                    bVar3;
                    uVar10 = uVar10 - 1;
                    LAB_14026b3dc:
                    if (uVar13 != 0) {
                        if (uVar9 == uVar13) break;
                        *(ushort * )(lVar7 + uVar9 * 2) = uVar14;
                    }
                    uVar9 = uVar9 + 1;
                    if (uVar14 == 0) break;
                }
            } while (uVar10 != 0);
        }
        *(undefined8 * )(param_1 + 0xa8) = local_68;
        *(undefined4 * )(param_1 + 200) = local_508;
        if (local_560 < local_55c) {
            local_55c = local_560;
        }
        *(undefined4 * )(param_1 + 0xb8) = local_4f0;
        *(uint * )(param_1 + 0xc0) = local_55c;
        *(undefined4 * )(param_1 + 0xb0) = 0;
        *(undefined4 * )(param_1 + 0xb4) = 1;
        *(undefined4 * )(param_1 + 0xbc) = 0xe0;
        *(undefined4 * )(param_1 + 0xc4) = local_54c;
        local_5e8[0] = 0;
        FUN_140268830(local_88, local_5e8);
        uVar12 = 0x20000000;
        if (0x20000000 < local_5e8[0]) {
            uVar12 = local_5e8[0];
        }
        *(ulonglong * )(param_1 + 0xd0) = (ulonglong) uVar12;
        if ((local_60 != 0x1002) || (((&DAT_00001860)[param_1] & 8) != 0)) {
            uVar16 = 1;
        }
        *(undefined4 * )(param_1 + 0xdc) = uVar16;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x40))
                (*(longlong * *)(param_1 + 0x19d0), 0, local_5e0);
        local_5f8 = 0x4c4c554e;
        local_600 = 3;
        local_608 = 1;
        iVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x50))
                (*(longlong * *)(param_1 + 0x19c0), *(undefined4 * )(param_1 + 0x1994),
                 *(undefined4 * )(param_1 + 0x199c), local_5d4);
        if (iVar5 < 0) {
            LAB_14026b577:
            *(undefined4 * )(param_1 + 0xd8) = 0;
        } else {
            *(undefined4 * )(param_1 + 0xd8) = 1;
            uVar13 = uVar11;
            do {
                if (*(int *) ((longlong) & DAT_140ae64c0 + uVar11) != 0) {
                    local_5f8 = *(undefined4 * )((longlong) & DAT_140ae7b30 + uVar11);
                    local_600 = 3;
                    local_608 = 2;
                    iVar5 = (**(code * *)(**(longlong * *)(param_1 + 0x19c0) + 0x50))
                            (*(longlong * *)(param_1 + 0x19c0), *(undefined4 * )(param_1 + 0x1994),
                             *(undefined4 * )(param_1 + 0x199c), local_5d4);
                    if (iVar5 < 0) goto LAB_14026b577;
                }
                uVar12 = (int) uVar13 + 1;
                uVar13 = (ulonglong) uVar12;
                uVar11 = uVar11 + 4;
            } while (uVar12 < 0x1b);
        }
        bVar17 = DAT_140c65694 != 0;
        *(undefined8 * )(param_1 + 0xe0) = 0;
        *(undefined4 * )(param_1 + 0x28bc) = 0;
        *(undefined4 * )(param_1 + 0xe8) = 3;
        if ((bVar17) && (local_60 == 0x10de)) {
            local_5e0[0] = 0x1001c;
            iVar5 = FUN_140818b00(*(undefined8 * )(param_1 + 0x19d0), local_5e0);
            if ((iVar5 == 0) && (*(undefined4 * )(param_1 + 0x28bc) = 1, 1 < local_5d8)) {
                *(undefined4 * )(param_1 + 0xe4) = 1;
                *(uint * )(param_1 + 0xe8) = local_5d8 + 1;
            }
        }
        auVar4 = ZEXT816(0x10) * ZEXT416(*(uint * )(param_1 + 0xb8));
        uVar6 = SUB168(auVar4, 0);
        if (SUB168(auVar4 >> 0x40, 0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar6, 0);
        *(undefined8 * )(param_1 + 0x1be8) = uVar6;
        auVar4 = ZEXT816(0x10) * ZEXT416(*(uint * )(param_1 + 0xbc));
        uVar6 = SUB168(auVar4, 0);
        if (SUB168(auVar4 >> 0x40, 0) != 0) {
            uVar6 = 0xffffffffffffffff;
        }
        uVar6 = FUN_14018b280(uVar6, 0);
        *(undefined8 * )(param_1 + 0x1bf8) = uVar6;
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1576);
    return;
}


undefined8 FUN_14026b680(longlong *param_1) {
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    int *piVar6;
    ulonglong uVar7;
    longlong *plVar8;
    undefined4 local_res8[2];
    undefined8 local_res10;
    undefined8 in_stack_ffffffffffffffb8;
    undefined4 uVar10;
    undefined4 *puVar9;

    FUN_140275820(param_1 + 0x33e, *(undefined4 * )(param_1 + 0x1d));
    uVar10 = (undefined4)((ulonglong) in_stack_ffffffffffffffb8 >> 0x20);
    uVar7 = 0;
    uVar4 = uVar7;
    if (param_1[0x33f] != 0) {
        do {
            uVar2 = (**(code * *)(*(longlong *) param_1[0x33a] + 0x3b0))
                    ((longlong *) param_1[0x33a], 8, param_1[0x33e] + uVar4 * 8);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            plVar8 = *(longlong * *)(param_1[0x33e] + uVar4 * 8);
            (**(code * *)(*plVar8 + 0x30))(plVar8, 1);
            uVar10 = (undefined4)((ulonglong) in_stack_ffffffffffffffb8 >> 0x20);
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong) param_1[0x33f]);
    }
    *(undefined4 * )((longlong) param_1 + 0x1ba4) = 0;
    puVar9 = (undefined4 *) CONCAT44(uVar10, *(undefined4 * )(param_1[0x372] + 0xc));
    uVar2 = (**(code * *)(*(longlong *) param_1[0x33a] + 0xd0))
            ((longlong *) param_1[0x33a], *(undefined4 * )(param_1 + 0x374),
             *(undefined4 * )(param_1[0x371] + 0xc), 0, puVar9, param_1 + 0x373, 0);
    if (-1 < (int) uVar2) {
        if ((*(int *) ((longlong) param_1 + 0x28bc) != 0) &&
            (iVar1 = FUN_1408194d0(param_1[0x33a], param_1[0x373], &local_res10), iVar1 == 0)) {
            puVar9 = local_res8;
            local_res8[0] = 1;
            FUN_140819670(param_1[0x33a], local_res10, 1, 1, puVar9);
        }
        plVar8 = param_1 + 0x377;
        plVar5 = param_1 + 0x379;
        uVar4 = uVar7;
        do {
            *(undefined4 * )(plVar5 + 1) = 0;
            puVar9 = (undefined4 * )
                    ((ulonglong) puVar9 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1[0x372] + 0xc));
            uVar2 = (**(code * *)(*(longlong *) param_1[0x33a] + 0xd8))
                    ((longlong *) param_1[0x33a], *(undefined4 *) plVar5,
                     *(undefined4 * )(param_1[0x371] + 0xc),
                     *(undefined4 * )
                             (((longlong) & DAT_140ae5e30 - (longlong) param_1) + (longlong) plVar5), puVar9,
                     param_1 + uVar4 + 0x377, 0);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            if ((*(int *) ((longlong) param_1 + 0x28bc) != 0) &&
                (iVar1 = FUN_1408194d0(param_1[0x33a], *plVar8, &local_res10), iVar1 == 0)) {
                puVar9 = local_res8;
                local_res8[0] = 1;
                FUN_140819670(param_1[0x33a], local_res10, 1);
            }
            uVar3 = (int) uVar4 + 1;
            uVar4 = (ulonglong) uVar3;
            plVar8 = plVar8 + 1;
            plVar5 = (longlong * )((longlong) plVar5 + 4);
        } while (uVar3 < 2);
        plVar8 = param_1 + 0x340;
        uVar4 = uVar7;
        do {
            uVar2 = (**(code * *)(*(longlong *) param_1[0x33a] + 0x2b0))
                    ((longlong *) param_1[0x33a], *plVar8, param_1 + uVar4 + 0x357);
            if ((int) uVar2 < 0) {
                return uVar2;
            }
            uVar3 = (int) uVar4 + 1;
            uVar4 = (ulonglong) uVar3;
            plVar8 = plVar8 + 1;
        } while (uVar3 < 0x17);
        FUN_1407e4830((longlong) param_1 + 0x1e44, 0xdf, 0x348);
        FUN_1407e4830((longlong) param_1 + 0x218c, 0xdf, 0x380);
        FUN_1407e4830((longlong) param_1 + 0x250c, 0xdf, 0xe0);
        *(undefined4 * )(param_1 + 0x376) = 0x17;
        *(undefined4 * )((longlong) param_1 + 0x25ec) = 0;
        FUN_1407e4830(param_1 + 0x4be, 0, 0x100);
        FUN_1407e4830(param_1 + 0x4de, 0xdf, 0x40);
        param_1[0x4e6] = 0;
        param_1[0x4e7] = 0;
        FUN_1407e4830(param_1 + 0x4e8, 0xff, 0x80);
        FUN_1407e4830(param_1 + 0x4f8, 0xff, 0x40);
        FUN_1407e4830(param_1 + 0x500, 0xff, 0x40);
        param_1[0x508] = -1;
        param_1[0x509] = -1;
        param_1[0x50a] = -1;
        param_1[0x50b] = -1;
        param_1[0x50c] = -1;
        param_1[0x50d] = -1;
        param_1[0x50e] = -1;
        param_1[0x50f] = -1;
        *(undefined4 * )(param_1 + 0x510) = 0x10;
        *(undefined4 * )((longlong) param_1 + 0x2884) = 4;
        param_1[0x511] = 0;
        *(undefined4 * )(param_1 + 0x512) = DAT_140c77760;
        *(undefined4 * )((longlong) param_1 + 0x2894) = DAT_140c77764;
        (**(code * *)(*param_1 + 0x208))
                (param_1, &DAT_140c79a80, &DAT_140c3fe88, &DAT_140c3fe88, &DAT_140c3fe88);
        (**(code * *)(*param_1 + 0x210))(param_1, &DAT_140c79a80, 1);
        (**(code * *)(*param_1 + 0x120))(param_1);
        piVar6 = (int *) ((longlong) param_1 + 0x21b4);
        do {
            if (*piVar6 != *(int *) ((longlong) param_1 + 0xc4)) {
                *piVar6 = *(int *) ((longlong) param_1 + 0xc4);
                (**(code * *)(*(longlong *) param_1[0x33a] + 0x228))((longlong *) param_1[0x33a], uVar7, 10);
            }
            uVar3 = (int) uVar7 + 1;
            uVar7 = (ulonglong) uVar3;
            piVar6 = piVar6 + 0xe;
        } while (uVar3 < 0x10);
        (**(code * *)(*(longlong *) param_1[0x33a] + 0x148))();
        uVar2 = 0;
    }
    return uVar2;
}


undefined8 FUN_14026bac0(longlong param_1) {
    int *piVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong lVar4;

    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x150))();
    FUN_140275940(param_1 + 0x19f0);
    if (*(longlong * *)(param_1 + 0x1b98) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1b98) + 0x10))();
        *(undefined8 * )(param_1 + 0x1b98) = 0;
    }
    *(int *) (param_1 + 0x1ba8) = *(int *) (param_1 + 0x1ba8) + 1;
    piVar1 = (int *) (param_1 + 0x1bd8);
    pplVar2 = (longlong * *)(param_1 + 0x1bb8);
    lVar3 = 2;
    do {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 0x10))();
            *pplVar2 = (longlong *) 0x0;
        }
        *piVar1 = *piVar1 + 1;
        piVar1 = piVar1 + 1;
        pplVar2 = pplVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pplVar2 = (longlong * *)(param_1 + 0x1ab8);
    lVar3 = 0x17;
    do {
        if (*pplVar2 != (longlong *) 0x0) {
            (**(code * *)(**pplVar2 + 0x10))();
            *pplVar2 = (longlong *) 0x0;
        }
        pplVar2 = pplVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 * )(param_1 + 0x1d68) = 4;
    *(undefined4 * )(param_1 + 0x1db8) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1d78) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1d78) + 8))();
        *(undefined8 * )(param_1 + 0x1d78) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1dc8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1dc8) + 0x10))();
        *(undefined8 * )(param_1 + 0x1dc8) = 0;
    }
    *(undefined4 * )(param_1 + 0x1d6c) = 4;
    *(undefined4 * )(param_1 + 0x1dbc) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1d80) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1d80) + 8))();
        *(undefined8 * )(param_1 + 0x1d80) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1dd0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1dd0) + 0x10))();
        *(undefined8 * )(param_1 + 0x1dd0) = 0;
    }
    *(undefined4 * )(param_1 + 0x1d70) = 4;
    *(undefined4 * )(param_1 + 0x1dc0) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1d88) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1d88) + 8))();
        *(undefined8 * )(param_1 + 0x1d88) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1dd8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1dd8) + 0x10))();
        *(undefined8 * )(param_1 + 0x1dd8) = 0;
    }
    *(undefined4 * )(param_1 + 0x1d74) = 4;
    *(undefined4 * )(param_1 + 0x1dc4) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1d90) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1d90) + 8))();
        *(undefined8 * )(param_1 + 0x1d90) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1de0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1de0) + 0x10))();
        *(undefined8 * )(param_1 + 0x1de0) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1de8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1de8) + 0x10))();
        *(undefined8 * )(param_1 + 0x1de8) = 0;
    }
    *(undefined4 * )(param_1 + 0x1e04) = 4;
    *(undefined4 * )(param_1 + 0x1e18) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1e08) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e08) + 8))();
        *(undefined8 * )(param_1 + 0x1e08) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1e20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e20) + 0x10))();
        *(undefined8 * )(param_1 + 0x1e20) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1e28) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e28) + 0x10))();
        *(undefined8 * )(param_1 + 0x1e28) = 0;
    }
    lVar3 = *(longlong * )(param_1 + 0x1df8);
    while (lVar3 != 0) {
        lVar3 = *(longlong * )(param_1 + 0x1df8);
        if (lVar3 != 0) {
            pplVar2 = (longlong * *)(lVar3 + 8);
            lVar4 = 4;
            do {
                if (*pplVar2 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar2 + 8))();
                    *pplVar2 = (longlong *) 0x0;
                }
                pplVar2 = pplVar2 + 3;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            if (*(undefined8 * *)(lVar3 + 0x78) != (undefined8 *) 0x0) {
                **(undefined8 * *)(lVar3 + 0x78) = *(undefined8 * )(lVar3 + 0x80);
            }
            if (*(longlong * )(lVar3 + 0x80) != 0) {
                *(undefined8 * )(*(longlong * )(lVar3 + 0x80) + 0x78) = *(undefined8 * )(lVar3 + 0x78);
            }
            *(undefined8 * )(lVar3 + 0x78) = 0;
            *(undefined8 * )(lVar3 + 0x80) = 0;
            FUN_14018b900(lVar3, 0);
        }
        lVar3 = *(longlong * )(param_1 + 0x1df8);
    }
    lVar3 = *(longlong * )(param_1 + 0x1e38);
    while (lVar3 != 0) {
        lVar3 = *(longlong * )(param_1 + 0x1e38);
        if (lVar3 != 0) {
            if (*(longlong * *)(lVar3 + 8) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(lVar3 + 8) + 8))();
                *(undefined8 * )(lVar3 + 8) = 0;
            }
            if (*(undefined8 * *)(lVar3 + 0x18) != (undefined8 *) 0x0) {
                **(undefined8 * *)(lVar3 + 0x18) = *(undefined8 * )(lVar3 + 0x20);
            }
            if (*(longlong * )(lVar3 + 0x20) != 0) {
                *(undefined8 * )(*(longlong * )(lVar3 + 0x20) + 0x18) = *(undefined8 * )(lVar3 + 0x18);
            }
            *(undefined8 * )(lVar3 + 0x18) = 0;
            *(undefined8 * )(lVar3 + 0x20) = 0;
            FUN_14018b900(lVar3, 0);
        }
        lVar3 = *(longlong * )(param_1 + 0x1e38);
    }
    return 0;
}


longlong FUN_14026be10(longlong param_1) {
    if (*(longlong * *)(param_1 + 8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 8) + 8))();
        *(undefined8 * )(param_1 + 8) = 0;
    }
    if (*(undefined8 * *)(param_1 + 0x18) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x18) = *(undefined8 * )(param_1 + 0x20);
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0x18) = *(undefined8 * )(param_1 + 0x18);
    }
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    FUN_14018b900(param_1, 0);
    return param_1;
}


undefined8 FUN_14026be80(longlong param_1) {
    FUN_14018b900(*(undefined8 * )(param_1 + 0x90), 0);
    *(undefined8 * )(param_1 + 0x90) = 0;
    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    *(undefined8 * )(param_1 + 0x98) = 0;
    FUN_14018b900(*(undefined8 * )(param_1 + 0xa0), 0);
    *(undefined8 * )(param_1 + 0xa0) = 0;
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1be8), 0);
    *(undefined8 * )(param_1 + 0x1be8) = 0;
    FUN_14018b900(*(undefined8 * )(param_1 + 0x1bf8), 0);
    *(undefined8 * )(param_1 + 0x1bf8) = 0;
    if (*(longlong * *)(param_1 + 0x1b70) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1b70) + 8))();
        *(undefined8 * )(param_1 + 0x1b70) = 0;
    }
    return 0;
}


void FUN_14026bf20(longlong param_1, undefined8 param_2) {
    int iVar1;
    undefined4 local_res8[4];
    undefined8 local_res18[2];

    if (*(int *) (param_1 + 0x28bc) != 0) {
        iVar1 = FUN_1408194d0(*(undefined8 * )(param_1 + 0x19d0), param_2, local_res18);
        if (iVar1 == 0) {
            local_res8[0] = 1;
            FUN_140819670(*(undefined8 * )(param_1 + 0x19d0), local_res18[0], 1, 1, local_res8);
        }
    }
    return;
}


void FUN_14026bf80(longlong param_1, int param_2) {
    ulonglong uVar1;
    ulonglong uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint *puVar5;

    if (param_2 != *(int *) (param_1 + 0x1bb0)) {
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x2b8))();
        uVar4 = 0;
        puVar5 = (uint * )(param_1 + 0x4a0 + (longlong) param_2 * 0xd8);
        uVar2 = uVar4;
        if (puVar5[0x13] != 0) {
            do {
                uVar1 = (ulonglong) puVar5[uVar2 + 0x14];
                if (*(int *) (param_1 + 0x26f0 + uVar1 * 4) != 1) {
                    *(undefined4 * )(param_1 + 0x26f0 + uVar1 * 4) = 1;
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x330))
                            (*(longlong * *)(param_1 + 0x19d0), uVar1, 1);
                }
                uVar3 = (int) uVar2 + 1;
                uVar2 = (ulonglong) uVar3;
            } while (uVar3 < puVar5[0x13]);
        }
        if (puVar5[0x25] != 0) {
            do {
                uVar2 = (ulonglong) puVar5[uVar4 + 0x26];
                if (*(int *) (param_1 + 0x26f0 + uVar2 * 4) != -0x7fffffff) {
                    *(undefined4 * )(param_1 + 0x26f0 + uVar2 * 4) = 0x80000001;
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x330))
                            (*(longlong * *)(param_1 + 0x19d0), uVar2, 0x80000001);
                }
                uVar3 = (int) uVar4 + 1;
                uVar4 = (ulonglong) uVar3;
            } while (uVar3 < puVar5[0x25]);
        }
        uVar3 = *puVar5;
        if (uVar3 < *(uint * )(param_1 + 0x25ec)) {
            do {
                uVar2 = (ulonglong) uVar3;
                *(undefined8 * )(param_1 + (uVar2 + 0x25f) * 0x10) = 0;
                *(undefined8 * )(param_1 + 0x25f8 + (ulonglong) uVar3 * 0x10) = 0;
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 800))
                        (*(longlong * *)(param_1 + 0x19d0), uVar3, 0, 0, 0);
                if (*(int *) (param_1 + 0x26f0 + uVar2 * 4) != 1) {
                    *(undefined4 * )(param_1 + 0x26f0 + uVar2 * 4) = 1;
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x330))();
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(uint * )(param_1 + 0x25ec));
        }
        *(int *) (param_1 + 0x1bb0) = param_2;
        *(uint * )(param_1 + 0x25ec) = *puVar5;
    }
    return;
}


undefined8 FUN_14026c130(longlong param_1, uint param_2, longlong param_3) {
    longlong lVar1;

    lVar1 = param_1 + (ulonglong) param_2 * 8;
    if (*(longlong * )(lVar1 + 0x2740) == param_3) {
        return 0;
    }
    *(longlong * )(lVar1 + 0x2740) = param_3;
    if ((param_3 != 0) &&
        (*(uint * )(param_1 + 0x2880) < param_2 || *(uint * )(param_1 + 0x2880) == param_2)) {
        *(uint * )(param_1 + 0x2880) = param_2 + 1;
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x208))();
    return 1;
}


undefined8 FUN_14026c190(longlong param_1, uint param_2, longlong param_3) {
    longlong lVar1;

    lVar1 = param_1 + (ulonglong) param_2 * 8;
    if (*(longlong * )(lVar1 + 0x2840) == param_3) {
        return 0;
    }
    *(longlong * )(lVar1 + 0x2840) = param_3;
    if ((param_3 != 0) &&
        (*(uint * )(param_1 + 0x2884) < param_2 || *(uint * )(param_1 + 0x2884) == param_2)) {
        *(uint * )(param_1 + 0x2884) = param_2 + 1;
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x208))
            (*(longlong * *)(param_1 + 0x19d0), param_2 + 0x101);
    return 1;
}


void FUN_14026c1f0(longlong param_1, uint param_2) {
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong) param_2;
    *(undefined4 * )(param_1 + 0x1d68 + uVar2 * 4) = 4;
    *(undefined4 * )(param_1 + 0x1db8 + uVar2 * 4) = 0x1b;
    plVar1 = *(longlong * *)(param_1 + 0x1d78 + uVar2 * 8);
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 8))();
        *(undefined8 * )(param_1 + 0x1d78 + uVar2 * 8) = 0;
    }
    plVar1 = *(longlong * *)(param_1 + 0x1dc8 + uVar2 * 8);
    if (plVar1 != (longlong *) 0x0) {
        (**(code * *)(*plVar1 + 0x10))();
        *(undefined8 * )(param_1 + 0x1dc8 + uVar2 * 8) = 0;
    }
    return;
}


void FUN_14026c260(longlong param_1) {
    *(undefined4 * )(param_1 + 0x1e04) = 4;
    *(undefined4 * )(param_1 + 0x1e18) = 0x1b;
    if (*(longlong * *)(param_1 + 0x1e08) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e08) + 8))();
        *(undefined8 * )(param_1 + 0x1e08) = 0;
    }
    if (*(longlong * *)(param_1 + 0x1e20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x1e20) + 0x10))();
        *(undefined8 * )(param_1 + 0x1e20) = 0;
    }
    return;
}


undefined8 FUN_14026c2c0(undefined8 param_1, longlong *param_2, longlong **param_3) {
    longlong lVar1;
    longlong *plVar2;

    if (param_3 != (longlong **) 0x0) {
        lVar1 = FUN_14018b280(200, 0);
        if (lVar1 == 0) {
            plVar2 = (longlong *) 0x0;
        } else {
            plVar2 = (longlong *) FUN_140298630(lVar1, param_1);
        }
        if (param_2 != (longlong *) 0x0) {
            plVar2[7] = (longlong) param_2;
            (**(code * *)(*param_2 + 8))(param_2);
            *(undefined4 * )(plVar2 + 0x14) = 0;
            *param_3 = plVar2;
            return 0;
        }
        if (plVar2 != (longlong *) 0x0) {
            (**(code * *)(*plVar2 + 0x10))(plVar2, 1);
        }
    }
    return 0x80070057;
}


int FUN_14026c360(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, longlong **param_8) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    if (param_8 == (longlong **) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        lVar2 = FUN_14018b280(200, 0);
        if (lVar2 == 0) {
            plVar3 = (longlong *) 0x0;
        } else {
            plVar3 = (longlong *) FUN_140298630(lVar2, param_1);
        }
        iVar1 = FUN_140298b30(plVar3, param_2, param_3, param_4, param_5, param_6, param_7);
        if (iVar1 < 0) {
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 0x10))(plVar3, 1);
            }
        } else {
            *param_8 = plVar3;
            iVar1 = 0;
        }
    }
    return iVar1;
}


undefined8 FUN_14026c430(int param_1) {
    if (param_1 < 0x31545845) {
        if (param_1 == 0x31545844) {
            return 0xd;
        }
        switch (param_1) {
            case 0x16:
                return 1;
            case 0x17:
                return 2;
            case 0x18:
                return 4;
            case 0x19:
                return 3;
            case 0x1a:
                return 5;
            case 0x1f:
                return 0x1a;
            case 0x20:
                return 0x19;
            case 0x22:
                return 8;
            case 0x24:
                return 9;
            case 0x32:
                return 6;
            case 0x3c:
                return 10;
            case 0x3f:
                return 0xb;
            case 0x40:
                return 0xc;
            case 0x4b:
                return 0x17;
            case 0x4d:
                return 0x16;
            case 0x50:
                return 0x15;
            case 0x51:
                return 7;
            case 0x6f:
                return 0x10;
            case 0x70:
                return 0x11;
            case 0x71:
                return 0x12;
            case 0x72:
                return 0x13;
            case 0x74:
                return 0x14;
        }
    } else {
        if (param_1 == 0x33545844) {
            return 0xe;
        }
        if (param_1 == 0x35545844) {
            return 0xf;
        }
        if (param_1 == 0x4c4c554e) {
            return 0x18;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14026c5f0(short *param_1, longlong *param_2) {
    longlong *plVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    byte bVar8;
    longlong *plVar9;
    uint uVar10;
    ulonglong uVar11;
    longlong *plVar12;
    uint uVar13;
    undefined auStack520[32];
    undefined8 local_1e8;
    undefined8 local_1e0;
    longlong *local_1d8;
    longlong *local_1d0;
    int local_1c8;
    uint local_1c4;
    uint local_1c0;
    uint local_1bc;
    int local_1b8;
    int local_1b4;
    int local_1b0;
    int local_1ac;
    int local_1a8;
    int local_1a4;
    uint local_1a0;
    int local_19c;
    uint local_198;
    int local_190;
    int local_18c;
    int local_188;
    int local_184;
    int local_180;
    int local_17c;
    int local_178;
    int local_174;
    int local_170;
    int local_16c;
    int local_168;
    int local_164;
    undefined8 local_160;
    short *local_158;
    undefined4 *local_150;
    int local_148[2];
    undefined8 local_140;
    undefined4 local_138;
    undefined4 uStack308;
    uint uStack304;
    uint uStack300;
    uint local_128;
    uint uStack292;
    int iStack288;
    int iStack284;
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
    int local_c8[2];
    undefined8 local_c0;
    uint local_b8;
    uint local_b4;
    uint local_b0;
    int local_a8[6];
    uint local_90;
    uint local_8c;
    undefined local_88[64];
    ulonglong local_48;
    ulonglong uVar14;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack520;
    local_158 = param_1;
    if (((param_1 == (short *) 0x0) || (param_2 == (longlong *) 0x0)) || (*param_1 == 0))
        goto LAB_14026cbfc;
    lVar5 = FUN_1407dd8d8(param_1, 0x2e);
    uVar11 = 0;
    if (lVar5 == 0) {
        uVar11 = 4;
    } else {
        iVar2 = FUN_14018e2c0(lVar5, L".tex");
        if (iVar2 == 0) {
            FUN_1407e4830(&local_138, 0, 0x70);
            local_138 = 0x474658;
            uStack308 = 3;
            iVar2 = (**(code * *)(*param_2 + 0x68))(param_2);
            local_118 = 0;
            iStack288 = iVar2;
            local_190 = (**(code * *)(*param_2 + 0x50))(param_2);
            if (local_190 == 3) {
                iVar3 = (**(code * *)(*param_2 + 0x88))(param_2, 0, local_a8);
                if (iVar3 < 0) goto LAB_14026cbfc;
                uVar10 = 1;
                LAB_14026c77c:
                local_128 = 1;
                uStack304 = local_90;
                uStack300 = local_8c;
                LAB_14026c799:
                local_1c4 = uStack300;
                local_1c0 = uStack304;
                uStack292 = uVar10;
                iStack284 = FUN_14026c430(local_a8[0]);
            } else {
                if (local_190 == 4) {
                    iVar3 = (**(code * *)(*param_2 + 0x88))(param_2, 0, local_c8);
                    if (iVar3 < 0) goto LAB_14026cbfc;
                    uVar10 = 1;
                    uStack304 = local_b8;
                    uStack300 = local_b4;
                    local_128 = local_b0;
                    local_a8[0] = local_c8[0];
                    goto LAB_14026c799;
                }
                if (local_190 == 5) {
                    iVar3 = (**(code * *)(*param_2 + 0x88))(param_2, 0, local_a8);
                    if (iVar3 < 0) goto LAB_14026cbfc;
                    uVar10 = 6;
                    goto LAB_14026c77c;
                }
                local_1c4 = uStack300;
                local_1c0 = uStack304;
                uVar10 = uStack292;
            }
            uVar6 = FUN_14029bdc0(&local_138);
            local_1d0 = (longlong *) 0x0;
            iVar3 = FUN_1401c5690(uVar6, &local_1d0, 0);
            plVar1 = local_1d0;
            if (-1 < iVar3) {
                (**(code * *)(*local_1d0 + 0x10))(local_1d0);
                uVar6 = (**(code * *)(*plVar1 + 0x20))(plVar1);
                FUN_1407e4830(uVar6);
                puVar7 = (undefined4 * )(**(code * *)(*plVar1 + 0x20))(plVar1);
                *puVar7 = local_138;
                puVar7[1] = uStack308;
                puVar7[2] = uStack304;
                puVar7[3] = uStack300;
                puVar7[4] = local_128;
                puVar7[5] = uStack292;
                puVar7[6] = iStack288;
                puVar7[7] = iStack284;
                puVar7[8] = local_118;
                puVar7[9] = uStack276;
                puVar7[10] = uStack272;
                puVar7[0xb] = uStack268;
                puVar7[0xc] = local_108;
                puVar7[0xd] = uStack260;
                puVar7[0xe] = uStack256;
                puVar7[0xf] = uStack252;
                puVar7[0x10] = local_f8;
                puVar7[0x11] = uStack244;
                puVar7[0x12] = uStack240;
                puVar7[0x13] = uStack236;
                puVar7[0x14] = local_e8;
                puVar7[0x15] = uStack228;
                puVar7[0x16] = uStack224;
                puVar7[0x17] = uStack220;
                puVar7[0x18] = local_d8;
                puVar7[0x19] = uStack212;
                puVar7[0x1a] = uStack208;
                puVar7[0x1b] = uStack204;
                lVar5 = (**(code * *)(*plVar1 + 0x20))(plVar1);
                lVar5 = lVar5 + 0x70;
                if (iVar2 != 0) {
                    local_1a4 = iStack284;
                    plVar12 = (longlong * )(&DAT_140ae5224 + (longlong) iStack284 * 0x2c);
                    plVar9 = (longlong * )(&DAT_140ae5200 + (longlong) iStack284 * 0x2c);
                    local_1d8 = plVar9;
                    local_1d0 = plVar12;
                    do {
                        iVar2 = iVar2 + -1;
                        bVar8 = (byte) iVar2;
                        local_1b0 = (local_1c0 >> (bVar8 & 0x1f)) + (uint)(local_1c0 >> (bVar8 & 0x1f) == 0);
                        local_1b4 = (local_1c4 >> (bVar8 & 0x1f)) + (uint)(local_1c4 >> (bVar8 & 0x1f) == 0);
                        local_1b8 = (local_128 >> (bVar8 & 0x1f)) + (uint)(local_128 >> (bVar8 & 0x1f) == 0);
                        local_1a0 = ((uint)(*(int *) ((longlong) plVar9 + 4) + local_1b0) >>
                                                                                          ((byte) *
                                                                                           (undefined4 * )(plVar9 + 1) &
                                                                                           0x1f)) * *(int *) plVar12 +
                                    3 &
                                    0xfffffffc;
                        local_19c = ((uint)(*(int *) (plVar9 + 2) + local_1b4) >>
                                                                               ((byte) * (undefined4 * )(
                                                                                       (longlong) plVar9 + 0x14) &
                                                                                0x1f)) * local_1a0;
                        local_1bc = ((uint)(*(int *) ((longlong) plVar9 + 0x1c) + local_1b8) >>
                                                                                             ((byte) * (undefined4 * )(
                                                                                                     plVar9 + 4) &
                                                                                              0x1f)) * local_19c;
                        local_1c8 = iVar2;
                        local_1ac = local_1b4;
                        local_1a8 = local_1b8;
                        local_198 = local_1bc;
                        if (local_190 == 3) {
                            iVar3 = (**(code * *)(*param_2 + 0x88))(param_2, iVar2, local_88);
                            if (iVar3 < 0) goto LAB_14026cbcb;
                            local_1e8 = (int *) CONCAT44(local_1e8._4_4_, 0x10);
                            iVar3 = (**(code * *)(*param_2 + 0x98))(param_2, iVar2, local_c8, 0);
                            if (iVar3 < 0) goto LAB_14026cbcb;
                            local_17c = ((uint)(*(int *) (local_1d8 + 2) + local_1b4) >>
                                                                                      ((byte) * (undefined4 * )(
                                                                                              (longlong) local_1d8 +
                                                                                              0x14) & 0x1f)) *
                                        local_c8[0];
                            local_178 = ((uint)(*(int *) ((longlong) local_1d8 + 0x1c) + local_1b8) >>
                                                                                                    ((byte) *
                                                                                                     (undefined4 * )(
                                                                                                             local_1d8 +
                                                                                                             4) &
                                                                                                     0x1f)) * local_17c;
                            local_1e0 = &local_180;
                            uVar6 = local_c0;
                            LAB_14026cb02:
                            local_1e8 = &local_1b0;
                            FUN_1402645d0(lVar5, &local_1b0, &local_1a0, uVar6);
                            iVar3 = (**(code * *)(*param_2 + 0xa0))();
                            if (iVar3 < 0) goto LAB_14026cbcb;
                            lVar5 = lVar5 + (ulonglong) local_1bc;
                            plVar9 = local_1d8;
                            plVar12 = local_1d0;
                        } else {
                            if (local_190 == 4) {
                                iVar3 = (**(code * *)(*param_2 + 0x88))(param_2, iVar2, local_a8);
                                if (-1 < iVar3) {
                                    local_1e8 = (int *) CONCAT44(local_1e8._4_4_, 0x10);
                                    iVar3 = (**(code * *)(*param_2 + 0x98))(param_2, iVar2, &local_168, 0);
                                    if (-1 < iVar3) {
                                        local_174 = local_168;
                                        local_170 = local_164;
                                        local_16c = ((uint)(*(int *) ((longlong) local_1d8 + 0x1c) + local_1b8) >>
                                                                                                                ((byte) *
                                                                                                                 (undefined4 * )(
                                                                                                                         local_1d8 +
                                                                                                                         4) &
                                                                                                                 0x1f)) *
                                                    local_164;
                                        local_1e0 = &local_174;
                                        uVar6 = local_160;
                                        goto LAB_14026cb02;
                                    }
                                }
                                goto LAB_14026cbcb;
                            }
                            if (local_190 == 5) {
                                iVar2 = (**(code * *)(*param_2 + 0x88))();
                                if (iVar2 < 0) goto LAB_14026cbcb;
                                plVar9 = local_1d8;
                                plVar12 = local_1d0;
                                uVar14 = uVar11;
                                iVar2 = local_1c8;
                                if (uVar10 != 0) {
                                    do {
                                        local_150 = &DAT_140ae7b00 + uVar14;
                                        local_1e0 = (int *) CONCAT44(local_1e0._4_4_, 0x10);
                                        local_1e8 = (int *) 0x0;
                                        iVar2 = (**(code * *)(*param_2 + 0x98))
                                                (param_2, (&DAT_140ae7b00)[uVar14], local_1c8, local_148);
                                        if (iVar2 < 0) goto LAB_14026cbcb;
                                        local_18c = local_148[0];
                                        local_188 = ((uint)(*(int *) (local_1d8 + 2) + local_1b4) >>
                                                                                                  ((byte) *
                                                                                                   (undefined4 * )(
                                                                                                           (longlong) local_1d8 +
                                                                                                           0x14) &
                                                                                                   0x1f)) *
                                                    local_148[0];
                                        local_184 = ((uint)(*(int *) ((longlong) local_1d8 + 0x1c) + local_1b8) >>
                                                                                                                ((byte) *
                                                                                                                 (undefined4 * )(
                                                                                                                         local_1d8 +
                                                                                                                         4) &
                                                                                                                 0x1f)) *
                                                    local_188;
                                        local_1e0 = &local_18c;
                                        local_1e8 = &local_1b0;
                                        FUN_1402645d0(lVar5, &local_1b0, &local_1a0, local_140);
                                        iVar2 = (**(code * *)(*param_2 + 0xa0))();
                                        if (iVar2 < 0) goto LAB_14026cbcb;
                                        uVar13 = (int) uVar14 + 1;
                                        uVar14 = (ulonglong) uVar13;
                                        lVar5 = lVar5 + (ulonglong) local_1bc;
                                        plVar9 = local_1d8;
                                        plVar12 = local_1d0;
                                        iVar2 = local_1c8;
                                    } while (uVar13 < uVar10);
                                }
                            }
                        }
                    } while (iVar2 != 0);
                }
                iVar2 = FUN_1401b6f30();
                if (-1 < iVar2) {
                    (**(code * *)(*plVar1 + 8))(plVar1);
                    goto LAB_14026cbfc;
                }
            }
            LAB_14026cbcb:
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
            goto LAB_14026cbfc;
        }
        iVar2 = FUN_14018e2c0(lVar5, L".bmp");
        if (iVar2 != 0) {
            iVar2 = FUN_14018e2c0(lVar5, L".jpg");
            if (iVar2 == 0) {
                uVar11 = 1;
            } else {
                iVar2 = FUN_14018e2c0(lVar5, L".tga");
                if (iVar2 == 0) {
                    uVar11 = 2;
                } else {
                    iVar2 = FUN_14018e2c0(lVar5, L".png");
                    if (iVar2 == 0) {
                        uVar11 = 3;
                    } else {
                        iVar2 = FUN_14018e2c0(lVar5, L".hdr");
                        uVar11 = 4;
                        if (iVar2 == 0) {
                            uVar11 = 7;
                        }
                    }
                }
            }
        }
    }
    local_1d8 = (longlong *) 0x0;
    if ((DAT_140c656e8 != (code *) 0x0) &&
        (iVar2 = (*DAT_140c656e8)(&local_1d8, uVar11, param_2, 0), plVar1 = local_1d8, -1 < iVar2)) {
        local_1d0 = (longlong *) 0x0;
        uVar4 = (**(code * *)(*local_1d8 + 0x20))(local_1d8);
        uVar6 = (**(code * *)(*plVar1 + 0x18))(plVar1);
        iVar2 = FUN_1401c5810(uVar6, uVar4, &local_1d0);
        plVar1 = local_1d0;
        if ((-1 < iVar2) && (iVar2 = FUN_1401b6f30(), -1 < iVar2)) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))(plVar1);
            }
            if (local_1d8 != (longlong *) 0x0) {
                (**(code * *)(*local_1d8 + 0x10))();
            }
            goto LAB_14026cbfc;
        }
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 8))(plVar1);
        }
    }
    if (local_1d8 != (longlong *) 0x0) {
        (**(code * *)(*local_1d8 + 0x10))(local_1d8);
    }
    LAB_14026cbfc:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack520);
    return;
}


int FUN_14026d5b0(longlong param_1, undefined4 param_2, int param_3, undefined8 *param_4) {
    int iVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        if (param_3 == 3) {
            puVar2 = (undefined8 *) FUN_14018b280(0x40);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b61790;
                puVar2[6] = 0;
                puVar2[7] = 0;
                *(undefined4 * )(puVar2 + 4) = 0;
                *(undefined4 * )(puVar2 + 1) = 1;
                puVar2[2] = param_1;
                *(int *) ((longlong) puVar2 + 0x2c) = *(int *) (param_1 + 0xf0) + -1;
            }
            iVar1 = FUN_14028a2d0(puVar2, param_2);
            if (iVar1 < 0) {
                if (puVar2 == (undefined8 *) 0x0) {
                    return iVar1;
                }
                FUN_14028a170(puVar2);
                FUN_14018b900(puVar2, 0);
                return iVar1;
            }
        } else {
            puVar2 = (undefined8 *) FUN_14018b280(0x48);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b617e0;
                puVar2[7] = 0;
                puVar2[8] = 0;
                *(undefined4 * )(puVar2 + 4) = 0;
                puVar2[5] = 0;
                *(undefined4 * )(puVar2 + 6) = 0;
                *(undefined4 * )(puVar2 + 1) = 1;
                puVar2[2] = param_1;
                *(int *) ((longlong) puVar2 + 0x34) = *(int *) (param_1 + 0xf0) + -1;
            }
            iVar1 = FUN_140289a00(puVar2, param_2, param_3);
            if (iVar1 < 0) {
                if (puVar2 == (undefined8 *) 0x0) {
                    return iVar1;
                }
                FUN_140289880(puVar2);
                FUN_14018b900(puVar2, 0);
                return iVar1;
            }
        }
        *param_4 = puVar2;
        iVar1 = 0;
    }
    return iVar1;
}


int FUN_14026d700(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4,
                  undefined8 *param_5) {
    int iVar1;
    undefined8 *puVar2;

    if (param_5 == (undefined8 *) 0x0) {
        iVar1 = -0x7ff8ffa9;
    } else {
        if (param_4 == 3) {
            puVar2 = (undefined8 *) FUN_14018b280(0x48);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b61830;
                puVar2[7] = 0;
                puVar2[8] = 0;
                *(undefined4 * )((longlong) puVar2 + 0x24) = 0;
                *(undefined4 * )(puVar2 + 1) = 1;
                puVar2[2] = param_1;
                *(int *) (puVar2 + 6) = *(int *) (param_1 + 0xf0) + -1;
            }
            iVar1 = FUN_14028b5e0(puVar2, param_2, param_3);
            if (iVar1 < 0) {
                if (puVar2 == (undefined8 *) 0x0) {
                    return iVar1;
                }
                FUN_14028b480(puVar2);
                FUN_14018b900(puVar2, 0);
                return iVar1;
            }
        } else {
            puVar2 = (undefined8 *) FUN_14018b280(0x48);
            if (puVar2 != (undefined8 *) 0x0) {
                *puVar2 = &PTR_LAB_140b61880;
                puVar2[7] = 0;
                puVar2[8] = 0;
                *(undefined4 * )((longlong) puVar2 + 0x24) = 0;
                puVar2[5] = 0;
                *(undefined4 * )(puVar2 + 6) = 0;
                *(undefined4 * )(puVar2 + 1) = 1;
                puVar2[2] = param_1;
                *(int *) ((longlong) puVar2 + 0x34) = *(int *) (param_1 + 0xf0) + -1;
            }
            iVar1 = FUN_14028ad70(puVar2, param_2, param_3, param_4);
            if (iVar1 < 0) {
                if (puVar2 == (undefined8 *) 0x0) {
                    return iVar1;
                }
                FUN_14028abf0(puVar2);
                FUN_14018b900(puVar2, 0);
                return iVar1;
            }
        }
        *param_5 = puVar2;
        iVar1 = 0;
    }
    return iVar1;
}


int FUN_14026daa0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  undefined4 param_9, ulonglong *param_10) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_10 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14026db47;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14026db47:
        lVar5 = FUN_14018b280(0x110, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_14028bf30(lVar5, param_1);
        }
        iVar4 = FUN_14028c380(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_14028c000(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_10 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14026deb0(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  undefined4 param_9, undefined4 param_10, ulonglong *param_11) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_11 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14026df57;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14026df57:
        lVar5 = FUN_14018b280(0xf0, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_14028f500(lVar5, param_1);
        }
        iVar4 = FUN_14028f8e0(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                              param_10);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_14028f5b0(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_11 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14026e380(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                  ulonglong *param_9) {
    DWORD *pDVar1;
    ulonglong uVar2;
    DWORD DVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;

    if (param_9 == (ulonglong *) 0x0) {
        iVar4 = -0x7ff8ffa9;
    } else {
        pDVar1 = (DWORD * )(param_1 + 0x18);
        DVar3 = GetCurrentThreadId();
        uVar6 = 0;
        puVar8 = (ulonglong * )(param_1 + 0x20);
        uVar7 = uVar6;
        if (*pDVar1 == DVar3) {
            *puVar8 = *puVar8 + 1;
        } else {
            do {
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
                if (uVar2 == 0) {
                    *pDVar1 = DVar3;
                    goto LAB_14026e427;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pDVar1);
        }
        LAB_14026e427:
        lVar5 = FUN_14018b280(0x178, 0);
        if (lVar5 != 0) {
            uVar6 = FUN_140291c80(lVar5, param_1);
        }
        iVar4 = FUN_1402920f0(uVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
        if (iVar4 < 0) {
            if (uVar6 != 0) {
                FUN_140291db0(uVar6);
                FUN_14018b900(uVar6, 0);
            }
        } else {
            *param_9 = uVar6;
            iVar4 = 0;
        }
        if (*puVar8 < 2) {
            *pDVar1 = 0;
            *puVar8 = 0;
            if (*(longlong * )(param_1 + 0x28) != 0) {
                if (*(longlong * )(param_1 + 0x30) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar8 = (ulonglong * )(param_1 + 0x30);
                    uVar7 = *puVar8;
                    *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(param_1 + 0x30));
            }
        } else {
            *puVar8 = *puVar8 - 1;
        }
    }
    return iVar4;
}


int FUN_14026f0a0(undefined8 param_1, undefined8 *param_2) {
    int iVar1;
    undefined8 *puVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return -0x7ff8ffa9;
    }
    puVar2 = (undefined8 *) FUN_14018b280(0x28);
    if (puVar2 == (undefined8 *) 0x0) {
        puVar2 = (undefined8 *) 0x0;
    } else {
        *puVar2 = &PTR_LAB_140b61bf0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined4 * )(puVar2 + 1) = 1;
        puVar2[2] = param_1;
    }
    iVar1 = FUN_14029c610(puVar2);
    if (iVar1 < 0) {
        if (puVar2 != (undefined8 *) 0x0) {
            FUN_14029c4e0(puVar2);
            FUN_14018b900(puVar2, 0);
        }
        return iVar1;
    }
    *param_2 = puVar2;
    return 0;
}


undefined8 FUN_14026f160(undefined8 param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    lVar1 = FUN_14018b280(0x100, 0);
    if (lVar1 != 0) {
        uVar2 = FUN_140298100(lVar1, param_1);
        *param_2 = uVar2;
        return 0;
    }
    *param_2 = 0;
    return 0;
}


undefined8 FUN_14026f1d0(longlong param_1, longlong **param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong *plVar4;

    if (param_2 == (longlong **) 0x0) {
        return 0x80070057;
    }
    plVar4 = (longlong *) FUN_14018b280(0x70);
    if (plVar4 == (longlong *) 0x0) {
        plVar4 = (longlong *) 0x0;
    } else {
        *plVar4 = (longlong) & PTR_LAB_140b61c18;
        plVar4[1] = 0;
        plVar4[2] = 0;
        *(undefined4 * )(plVar4 + 3) = 1;
        plVar4[4] = param_1;
        *(undefined4 * )(plVar4 + 6) = *param_3;
        *(undefined4 * )((longlong) plVar4 + 0x34) = param_3[1];
        *(undefined4 * )(plVar4 + 7) = param_3[2];
        *(undefined4 * )((longlong) plVar4 + 0x3c) = param_3[3];
        *(undefined4 * )(plVar4 + 8) = param_3[4];
        *(undefined4 * )((longlong) plVar4 + 0x44) = param_3[5];
        *(undefined4 * )(plVar4 + 9) = param_3[6];
        *(undefined4 * )((longlong) plVar4 + 0x4c) = param_3[7];
        *(undefined4 * )(plVar4 + 10) = param_3[8];
        uVar1 = param_3[0xd];
        uVar2 = param_3[0xe];
        uVar3 = param_3[0xf];
        *(undefined4 * )(plVar4 + 0xc) = param_3[0xc];
        *(undefined4 * )((longlong) plVar4 + 100) = uVar1;
        *(undefined4 * )(plVar4 + 0xd) = uVar2;
        *(undefined4 * )((longlong) plVar4 + 0x6c) = uVar3;
        (**(code * *) * plVar4)(plVar4);
    }
    *param_2 = plVar4;
    if (plVar4 != (longlong *) 0x0) {
        (**(code * *)(*plVar4 + 8))(plVar4);
    }
    return 0;
}


undefined8 FUN_14026f4d0(longlong param_1, uint param_2, int param_3, ulonglong param_4) {
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 local_58;
    undefined local_50[8];
    undefined8 local_48;
    undefined **local_40;
    undefined8 local_38;
    LPVOID local_30;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((param_2 == 0) ||
        (*(uint * )(param_1 + 0x1ba0) <= param_2 && param_2 != *(uint * )(param_1 + 0x1ba0))) {
        uVar2 = 0;
    } else {
        uVar3 = (uint)(param_4 & 0xffffffff);
        if ((uVar3 < 0x10) &&
            (*(int *) (param_1 + 0x4a4 + ((longlong) param_3 * 0x36 + (param_4 & 0xffffffff)) * 4) != 0)) {
            FUN_14003d8f0(local_50);
            iVar1 = *(int *) (param_1 + 0x1ba4);
            if (iVar1 + param_2 < *(uint * )(param_1 + 0x1ba0) ||
                iVar1 + param_2 == *(uint * )(param_1 + 0x1ba0)) {
                uVar4 = 0x1000;
            } else {
                *(int *) (param_1 + 0x1ba8) = *(int *) (param_1 + 0x1ba8) + 1;
                *(undefined4 * )(param_1 + 0x1ba4) = 0;
                uVar4 = 0x2000;
                iVar1 = 0;
            }
            iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x1b98) + 0x58))
                    (*(longlong * *)(param_1 + 0x1b98), iVar1, param_2, &local_58, uVar4);
            uVar2 = 0;
            if (-1 < iVar1) {
                *(int *) (param_1 + 0x1bac) = *(int *) (param_1 + 0x1ba4);
                *(uint * )(param_1 + 0x1bb4) = uVar3;
                *(uint * )(param_1 + 0x1ba4) = *(int *) (param_1 + 0x1ba4) + param_2;
                FUN_14026bf80(param_1, (longlong) param_3 & 0xffffffff);
                LOCK();
                *(int *) (param_1 + 0x204) = *(int *) (param_1 + 0x204) + 1;
                LOCK();
                *(int *) (param_1 + 0x208) = *(int *) (param_1 + 0x208) + param_2;
                LOCK();
                *(int *) (param_1 + 0x20c) = *(int *) (param_1 + 0x20c) + 1;
                LOCK();
                *(int *) (param_1 + 0x210) = *(int *) (param_1 + 0x210) + param_2;
                uVar2 = local_58;
            }
            FUN_14003d880(local_50);
        } else {
            local_40 = &PTR_LAB_140b5e648;
            local_38 = 0;
            local_30 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_40);
            local_28 = local_40;
            local_48 = 0x141de0ea0;
            local_18 = local_30;
            local_20 = local_38;
            iVar1 = FUN_1401971e0(&DAT_140c8a348, 0xe, &local_48, &local_28);
            local_40 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_30);
            if (iVar1 != 0) {
                DebugBreak();
            }
            uVar2 = 0;
        }
    }
    return uVar2;
}


void FUN_14026f6b0(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    ulonglong uVar3;

    (**(code * *)(**(longlong * *)(param_1 + 0x1b98) + 0x60))();
    uVar3 = (ulonglong) * (uint * )(param_1 + 0x1bb4);
    uVar1 = *(undefined4 * )(param_1 + 0x1bac);
    uVar2 = *(undefined4 * )
            (param_1 + 0x4a4 + ((longlong) * (int *) (param_1 + 0x1bb0) * 0x36 + uVar3) * 4);
    *(undefined8 * )(param_1 + (uVar3 + 0x25f) * 0x10) = *(undefined8 * )(param_1 + 0x1b98);
    *(undefined4 * )(param_1 + 0x25f8 + uVar3 * 0x10) = uVar1;
    *(undefined4 * )(param_1 + 0x25fc + uVar3 * 0x10) = uVar2;
    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 800))();
    return;
}


void FUN_14026f920(longlong param_1) {
    (**(code * *)(**(longlong * *)(param_1 + 0x1bb8 + (longlong) * (int *) (param_1 + 0x1be4) * 8) + 0x60))
            ();
    // WARNING: Could not recover jumptable at 0x00014026f95c. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x340))
            (*(longlong * *)(param_1 + 0x19d0),
             *(undefined8 * )(param_1 + 0x1bb8 + (longlong) * (int *) (param_1 + 0x1be4) * 8));
    return;
}


undefined8 FUN_14026f970(longlong param_1, int param_2, undefined8 param_3, int param_4) {
    int iVar1;
    undefined *puVar2;
    uint uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    uVar3 = param_2 + 0xfU >> 4;
    if (*(uint * )(param_1 + 0xb8) < uVar3) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_res8 = 0x141de12a0;
        puVar2 = &DAT_140c8a33c;
    } else {
        if (uVar3 + param_4 <= *(uint * )(param_1 + 0xb8)) {
            *(int *) (param_1 + 0x1bf0) = param_4;
            *(uint * )(param_1 + 0x1bf4) = uVar3;
            return *(undefined8 * )(param_1 + 0x1be8);
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_res8 = 0x141de1230;
        puVar2 = &DAT_140c8a340;
    }
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar1 = FUN_1401971e0(puVar2, 0xe, &local_res8, &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0;
}


undefined8 FUN_14026faf0(longlong param_1, int param_2, undefined8 param_3, int param_4) {
    int iVar1;
    undefined *puVar2;
    uint uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    uVar3 = param_2 + 0xfU >> 4;
    if (*(uint * )(param_1 + 0xbc) < uVar3) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_res8 = 0x141de11d0;
        puVar2 = &DAT_140c8a344;
    } else {
        if (uVar3 + param_4 <= *(uint * )(param_1 + 0xbc)) {
            *(int *) (param_1 + 0x1c00) = param_4;
            *(uint * )(param_1 + 0x1c04) = uVar3;
            return *(undefined8 * )(param_1 + 0x1bf8);
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_res8 = 0x141de1160;
        puVar2 = &DAT_140c8a330;
    }
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar1 = FUN_1401971e0(puVar2, 0xe, &local_res8, &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0;
}


void FUN_14026fc70(longlong param_1) {
    if (*(int *) (param_1 + 0x1e9c) != 2) {
        *(undefined4 * )(param_1 + 0x1e9c) = 2;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x16, 2);
    }
    if (*(int *) (param_1 + 0x1e64) != 3) {
        *(undefined4 * )(param_1 + 0x1e64) = 3;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 8, 3);
    }
    if (*(int *) (param_1 + 0x2150) != 0) {
        *(undefined4 * )(param_1 + 0x2150) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xc3, 0);
    }
    if (*(int *) (param_1 + 0x2100) != 0) {
        *(undefined4 * )(param_1 + 0x2100) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xaf, 0);
    }
    if (*(int *) (param_1 + 0x1e60) != 1) {
        *(undefined4 * )(param_1 + 0x1e60) = 1;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 7, 1);
    }
    if (*(int *) (param_1 + 0x1ea0) != 4) {
        *(undefined4 * )(param_1 + 0x1ea0) = 4;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x17, 4);
    }
    if (*(int *) (param_1 + 0x1e7c) != 1) {
        *(undefined4 * )(param_1 + 0x1e7c) = 1;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xe, 1);
    }
    if (*(int *) (param_1 + 0x1f14) != 0) {
        *(undefined4 * )(param_1 + 0x1f14) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x34);
    }
    if (*(int *) (param_1 + 0x20e4) != 0xf) {
        *(undefined4 * )(param_1 + 0x20e4) = 0xf;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xa8, 0xf);
    }
    if (*(int *) (param_1 + 0x213c) != 0xf) {
        *(undefined4 * )(param_1 + 0x213c) = 0xf;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xbe, 0xf);
    }
    if (*(int *) (param_1 + 0x2140) != 0xf) {
        *(undefined4 * )(param_1 + 0x2140) = 0xf;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xbf, 0xf);
    }
    if (*(int *) (param_1 + 0x2144) != 0xf) {
        *(undefined4 * )(param_1 + 0x2144) = 0xf;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xc0, 0xf);
    }
    if (*(int *) (param_1 + 0x1eb0) != 0) {
        *(undefined4 * )(param_1 + 0x1eb0) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x1b);
    }
    if (*(int *) (param_1 + 0x20b4) != 0) {
        *(undefined4 * )(param_1 + 0x20b4) = 0;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x9c, 0);
    }
    return;
}


void FUN_14026fee0(longlong param_1) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = 0;
    uVar3 = uVar1;
    if (*(int *) (param_1 + 0x2880) != 0) {
        do {
            if (*(longlong * )(param_1 + 0x2740 + uVar3 * 8) != 0) {
                *(undefined8 * )(param_1 + 0x2740 + uVar3 * 8) = 0;
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x208))
                        (*(longlong * *)(param_1 + 0x19d0), uVar3, 0);
            }
            uVar2 = (int) uVar3 + 1;
            uVar3 = (ulonglong) uVar2;
        } while (uVar2 < *(uint * )(param_1 + 0x2880));
    }
    *(undefined4 * )(param_1 + 0x2880) = 0;
    if (*(int *) (param_1 + 0x2884) != 0) {
        do {
            if (*(longlong * )(param_1 + 0x2840 + uVar1 * 8) != 0) {
                *(undefined8 * )(param_1 + 0x2840 + uVar1 * 8) = 0;
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x208))
                        (*(longlong * *)(param_1 + 0x19d0), (int) uVar1 + 0x101, 0);
            }
            uVar2 = (int) uVar1 + 1;
            uVar1 = (ulonglong) uVar2;
        } while (uVar2 < *(uint * )(param_1 + 0x2884));
    }
    *(undefined4 * )(param_1 + 0x2884) = 0;
    return;
}


ulonglong FUN_14026ff90(longlong param_1, longlong *param_2, int param_3, ulonglong param_4) {
    uint *puVar1;
    int *piVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    ulonglong extraout_RAX;
    ulonglong uVar9;
    ulonglong extraout_RAX_00;
    longlong lVar10;
    undefined8 local_res10;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_90;
    undefined8 local_88;
    LPVOID local_80;
    undefined8 local_78[2];
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    param_4 = param_4 & 0xffffffff;
    lVar8 = (**(code * *)(*param_2 + 0x18))(param_2);
    if (*(int *) (lVar8 + 4) == 0) {
        local_88 = 0;
        local_90 = &PTR_LAB_140b5e648;
        local_80 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_90);
        local_68 = local_90;
        local_res10 = 0x141de10e0;
        local_58 = local_80;
        local_60 = local_88;
        iVar6 = FUN_1401971e0(&DAT_140c8a334, 0xe, &local_res10, &local_68);
        local_90 = &PTR_LAB_140b5e648;
        uVar7 = TlsSetValue(DAT_140c63720, local_80);
        uVar9 = (ulonglong) uVar7;
        if (iVar6 != 0) {
            DebugBreak();
            uVar9 = extraout_RAX;
        }
    } else {
        uVar9 = (**(code * *)(*param_2 + 0x28))(param_2);
        if ((int) uVar9 != 0) {
            lVar10 = (longlong) param_3 * 0xd8 + param_1;
            if (((uint) param_4 < 0x10) && (*(int *) (lVar10 + 0x4a4 + param_4 * 4) != 0)) {
                FUN_14026bf80(param_1);
                uVar3 = *(undefined4 * )(lVar10 + 0x4a4 + param_4 * 4);
                if (*(int *) (lVar8 + 4) == 3) {
                    uVar4 = *(undefined4 * )((longlong) param_2 + 0x24);
                    uVar5 = *(undefined8 * )(param_1 + 0x1b98);
                    *(undefined4 * )(param_1 + 0x25fc + param_4 * 0x10) = uVar3;
                    *(undefined8 * )(param_1 + (param_4 + 0x25f) * 0x10) = uVar5;
                    *(undefined4 * )(param_1 + 0x25f8 + param_4 * 0x10) = uVar4;
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 800))
                            (*(longlong * *)(param_1 + 0x19d0), param_4);
                    uVar7 = *(uint * )(param_1 + 0xf0);
                    uVar9 = (ulonglong) uVar7;
                    if (*(uint * )((longlong) param_2 + 0x2c) != uVar7) {
                        *(uint * )((longlong) param_2 + 0x2c) = uVar7;
                        LOCK();
                        *(int *) (param_1 + 0x20c) = *(int *) (param_1 + 0x20c) + 1;
                        LOCK();
                        puVar1 = (uint * )(param_1 + 0x210);
                        uVar9 = (ulonglong) * puVar1;
                        *puVar1 = *puVar1 + *(int *) (param_2 + 3);
                    }
                } else {
                    lVar10 = param_2[5];
                    *(undefined4 * )(param_1 + 0x25fc + param_4 * 0x10) = uVar3;
                    *(undefined4 * )(param_1 + 0x25f8 + param_4 * 0x10) = 0;
                    *(longlong * )(param_1 + (param_4 + 0x25f) * 0x10) = lVar10;
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 800))
                            (*(longlong * *)(param_1 + 0x19d0), param_4, lVar10, 0, uVar3);
                    uVar7 = *(uint * )(param_1 + 0xf0);
                    uVar9 = (ulonglong) uVar7;
                    if (*(uint * )((longlong) param_2 + 0x34) != uVar7) {
                        *(uint * )((longlong) param_2 + 0x34) = uVar7;
                        iVar6 = *(int *) (lVar8 + 4);
                        LOCK();
                        piVar2 = (int *) (param_1 + 0x17c + (longlong) iVar6 * 0x30);
                        *piVar2 = *piVar2 + 1;
                        LOCK();
                        puVar1 = (uint * )(param_1 + 0x180 + (longlong) iVar6 * 0x30);
                        uVar9 = (ulonglong) * puVar1;
                        *puVar1 = *puVar1 + *(int *) (param_2 + 3);
                    }
                }
            } else {
                local_a0 = 0;
                local_a8 = &PTR_LAB_140b5e648;
                local_98 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_a8);
                local_48 = local_a8;
                local_78[0] = 0x141de1060;
                local_38 = local_98;
                local_40 = local_a0;
                iVar6 = FUN_1401971e0(&DAT_140c8a338, 0xe, local_78, &local_48);
                local_a8 = &PTR_LAB_140b5e648;
                uVar7 = TlsSetValue(DAT_140c63720, local_98);
                uVar9 = (ulonglong) uVar7;
                if (iVar6 != 0) {
                    DebugBreak();
                    uVar9 = extraout_RAX_00;
                }
            }
        }
    }
    return uVar9;
}


ulonglong FUN_140270260(longlong param_1, longlong *param_2) {
    uint *puVar1;
    int *piVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong extraout_RAX;
    ulonglong uVar7;
    undefined8 local_res10;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar6 = (**(code * *)(*param_2 + 0x18))(param_2);
    if (*(int *) (lVar6 + 8) == 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res10 = 0x141de0fe0;
        local_18 = local_38;
        local_20 = local_40;
        iVar4 = FUN_1401971e0(&DAT_140c8a328, 0xe, &local_res10, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        uVar5 = TlsSetValue(DAT_140c63720, local_38);
        uVar7 = (ulonglong) uVar5;
        if (iVar4 != 0) {
            // WARNING: Could not recover jumptable at 0x00014027033f. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return extraout_RAX;
        }
    } else {
        uVar7 = (**(code * *)(*param_2 + 0x28))(param_2);
        if ((int) uVar7 != 0) {
            lVar3 = **(longlong * *)(param_1 + 0x19d0);
            if (*(int *) (lVar6 + 8) == 3) {
                iVar4 = *(int *) ((longlong) param_2 + 0x1c);
                (**(code * *)(lVar3 + 0x340))();
                *(uint * )(param_1 + 0x1be0) =
                        *(uint * )(param_2 + 5) / *(uint * )(&DAT_140ae4ed8 + (longlong) iVar4 * 4);
                uVar5 = *(uint * )(param_1 + 0xf0);
                uVar7 = (ulonglong) uVar5;
                if (*(uint * )(param_2 + 6) != uVar5) {
                    *(uint * )(param_2 + 6) = uVar5;
                    LOCK();
                    *(int *) (param_1 + 0x2cc) = *(int *) (param_1 + 0x2cc) + 1;
                    LOCK();
                    puVar1 = (uint * )(param_1 + 0x2d0);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 + *(int *) (param_2 + 3);
                    return (ulonglong) uVar5;
                }
            } else {
                (**(code * *)(lVar3 + 0x340))(*(longlong * *)(param_1 + 0x19d0), param_2[5]);
                uVar5 = *(uint * )(param_1 + 0xf0);
                uVar7 = (ulonglong) uVar5;
                *(undefined4 * )(param_1 + 0x1be0) = 0;
                if (*(uint * )((longlong) param_2 + 0x34) != uVar5) {
                    *(uint * )((longlong) param_2 + 0x34) = uVar5;
                    iVar4 = *(int *) (lVar6 + 8);
                    LOCK();
                    piVar2 = (int *) (param_1 + 0x23c + (longlong) iVar4 * 0x30);
                    *piVar2 = *piVar2 + 1;
                    LOCK();
                    puVar1 = (uint * )(param_1 + 0x240 + (longlong) iVar4 * 0x30);
                    uVar7 = (ulonglong) * puVar1;
                    *puVar1 = *puVar1 + *(int *) (param_2 + 3);
                }
            }
        }
    }
    return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140270420(longlong param_1, longlong *param_2, ulonglong param_3) {
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong extraout_RAX;
    ulonglong extraout_RAX_00;
    ulonglong uVar5;
    undefined8 local_res10;
    undefined8 local_res20;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined **local_c0;
    undefined8 local_b8;
    LPVOID local_b0;
    undefined **local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    int iStack144;
    undefined4 uStack140;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined4 local_48[4];
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    local_48[0] = 0xffffffff;
    (**(code * *)(*param_2 + 0x20))(param_2, local_48);
    if ((uint)(param_3 & 0xffffffff) < *(uint * )((longlong) param_2 + 0x1c)) {
        uVar5 = (ulonglong) * (uint * )(*(longlong * )(param_2[6] + 0x20) + (param_3 & 0xffffffff) * 4);
        lVar2 = uVar5 * 8;
        if ((*(longlong * )(param_2[9] + lVar2) == 0) &&
            (iStack144 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x2d8))
                    (*(longlong * *)(param_1 + 0x19d0),
                     *(undefined8 * )(*(longlong * )(param_2[6] + 0x10) + 8 + uVar5 * 0x10))
                    , iStack144 < 0)) {
            local_b8 = 0;
            local_c0 = &PTR_LAB_140b5e648;
            local_b0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_c0);
            local_68 = local_c0;
            local_60 = local_b8;
            local_a8 = &PTR_LAB_140b5e648;
            uStack160 = L"Result";
            local_58 = local_b0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            local_a8 = &PTR_LAB_140b5e640;
            local_28 = (undefined4) local_98;
            uStack36 = local_98._4_4_;
            uStack28 = uStack140;
            local_res20 = 0x141de16a0;
            local_38 = 0x40b5e640;
            uStack52 = 1;
            uStack48 = (undefined4) uStack160;
            uStack44 = uStack160._4_4_;
            iStack32 = iStack144;
            iVar3 = FUN_1401971e0(&DAT_140c8a31c, 0xe, &local_res20, &local_38, &local_68);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_98);
            local_c0 = &PTR_LAB_140b5e648;
            uVar4 = TlsSetValue(DAT_140c63720, local_b0);
            uVar5 = (ulonglong) uVar4;
            if (iVar3 != 0) {
                DebugBreak();
                uVar5 = extraout_RAX_00;
            }
        } else {
            lVar2 = *(longlong * )(lVar2 + param_2[9]);
            if (*(longlong * )(param_1 + 0x2730) != lVar2) {
                *(longlong * )(param_1 + 0x2730) = lVar2;
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x2e0))();
            }
            uVar4 = *(uint * )(param_1 + 0xf0);
            uVar5 = (ulonglong) uVar4;
            if (*(uint * )((longlong) param_2 + 0x54) != uVar4) {
                *(uint * )((longlong) param_2 + 0x54) = uVar4;
                LOCK();
                *(int *) (param_1 + 0x11c) = *(int *) (param_1 + 0x11c) + 1;
                LOCK();
                puVar1 = (uint * )(param_1 + 0x120);
                uVar5 = (ulonglong) * puVar1;
                *puVar1 = *puVar1 + *(int *) ((longlong) param_2 + 0x2c);
            }
        }
    } else {
        local_d0 = 0;
        local_d8 = &PTR_LAB_140b5e648;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_88 = local_d8;
        local_res10 = 0x141de0f90;
        local_78 = local_c8;
        local_80 = local_d0;
        iVar3 = FUN_1401971e0(&DAT_140c8a32c, 0xe, &local_res10, &local_88);
        local_d8 = &PTR_LAB_140b5e648;
        uVar4 = TlsSetValue(DAT_140c63720, local_c8);
        uVar5 = (ulonglong) uVar4;
        if (iVar3 != 0) {
            DebugBreak();
            uVar5 = extraout_RAX;
        }
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140271610(longlong param_1, longlong *param_2, ulonglong param_3) {
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong extraout_RAX;
    ulonglong extraout_RAX_00;
    ulonglong uVar5;
    undefined8 local_res10;
    undefined8 local_res20;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined **local_c0;
    undefined8 local_b8;
    LPVOID local_b0;
    undefined **local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    int iStack144;
    undefined4 uStack140;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined4 local_48[4];
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    local_48[0] = 0xffffffff;
    (**(code * *)(*param_2 + 0x20))(param_2, local_48);
    if ((uint)(param_3 & 0xffffffff) < *(uint * )((longlong) param_2 + 0x1c)) {
        uVar5 = (ulonglong) * (uint * )(*(longlong * )(param_2[6] + 0x20) + (param_3 & 0xffffffff) * 4);
        lVar2 = uVar5 * 8;
        if ((*(longlong * )(param_2[9] + lVar2) == 0) &&
            (iStack144 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x350))
                    (*(longlong * *)(param_1 + 0x19d0),
                     *(undefined8 * )(*(longlong * )(param_2[6] + 0x10) + 8 + uVar5 * 0x10))
                    , iStack144 < 0)) {
            local_b8 = 0;
            local_c0 = &PTR_LAB_140b5e648;
            local_b0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_c0);
            local_68 = local_c0;
            local_60 = local_b8;
            local_a8 = &PTR_LAB_140b5e648;
            uStack160 = L"Result";
            local_58 = local_b0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_a8);
            local_a8 = &PTR_LAB_140b5e640;
            local_28 = (undefined4) local_98;
            uStack36 = local_98._4_4_;
            uStack28 = uStack140;
            local_res20 = 0x141de19c0;
            local_38 = 0x40b5e640;
            uStack52 = 1;
            uStack48 = (undefined4) uStack160;
            uStack44 = uStack160._4_4_;
            iStack32 = iStack144;
            iVar3 = FUN_1401971e0(&DAT_140c8a2fc, 0xe, &local_res20, &local_38, &local_68);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_98);
            local_c0 = &PTR_LAB_140b5e648;
            uVar4 = TlsSetValue(DAT_140c63720, local_b0);
            uVar5 = (ulonglong) uVar4;
            if (iVar3 != 0) {
                DebugBreak();
                uVar5 = extraout_RAX_00;
            }
        } else {
            lVar2 = *(longlong * )(lVar2 + param_2[9]);
            if (*(longlong * )(param_1 + 0x2738) != lVar2) {
                *(longlong * )(param_1 + 0x2738) = lVar2;
                (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x358))();
            }
            uVar4 = *(uint * )(param_1 + 0xf0);
            uVar5 = (ulonglong) uVar4;
            if (*(uint * )((longlong) param_2 + 0x54) != uVar4) {
                *(uint * )((longlong) param_2 + 0x54) = uVar4;
                LOCK();
                *(int *) (param_1 + 0x14c) = *(int *) (param_1 + 0x14c) + 1;
                LOCK();
                puVar1 = (uint * )(param_1 + 0x150);
                uVar5 = (ulonglong) * puVar1;
                *puVar1 = *puVar1 + *(int *) ((longlong) param_2 + 0x2c);
            }
        }
    } else {
        local_d0 = 0;
        local_d8 = &PTR_LAB_140b5e648;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_88 = local_d8;
        local_res10 = 0x141de1a10;
        local_78 = local_c8;
        local_80 = local_d0;
        iVar3 = FUN_1401971e0(&DAT_140c8a30c, 0xe, &local_res10, &local_88);
        local_d8 = &PTR_LAB_140b5e648;
        uVar4 = TlsSetValue(DAT_140c63720, local_c8);
        uVar5 = (ulonglong) uVar4;
        if (iVar3 != 0) {
            DebugBreak();
            uVar5 = extraout_RAX;
        }
    }
    return uVar5;
}


void FUN_1402719d0(longlong param_1, int param_2, int param_3) {
    if (*(int *) (param_1 + 0x1f14) != param_2) {
        *(int *) (param_1 + 0x1f14) = param_2;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x34, param_2);
    }
    if ((param_2 != 0) && (*(int *) (param_1 + 0x2128) != param_3)) {
        *(int *) (param_1 + 0x2128) = param_3;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xb9, param_3);
    }
    return;
}


void FUN_140271a50(longlong param_1, int param_2, int param_3, int param_4) {
    if (*(int *) (param_1 + 0x1f28) != param_2) {
        *(int *) (param_1 + 0x1f28) = param_2;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x39, param_2);
    }
    if (*(int *) (param_1 + 0x1f2c) != param_3) {
        *(int *) (param_1 + 0x1f2c) = param_3;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x3a, param_3);
    }
    if (*(int *) (param_1 + 0x1f30) != param_4) {
        *(int *) (param_1 + 0x1f30) = param_4;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0x3b, param_4);
    }
    return;
}


void FUN_140271af0(longlong param_1, int param_2, int param_3, int param_4, int param_5) {
    if (*(int *) (param_1 + 0x1f18) != *(int *) (&DAT_140ae7d08 + (longlong) param_2 * 4)) {
        *(int *) (param_1 + 0x1f18) = *(int *) (&DAT_140ae7d08 + (longlong) param_2 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x35);
    }
    if (*(int *) (param_1 + 0x1f1c) != *(int *) (&DAT_140ae7d08 + (longlong) param_3 * 4)) {
        *(int *) (param_1 + 0x1f1c) = *(int *) (&DAT_140ae7d08 + (longlong) param_3 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x36);
    }
    if (*(int *) (param_1 + 0x1f20) != *(int *) (&DAT_140ae7d08 + (longlong) param_4 * 4)) {
        *(int *) (param_1 + 0x1f20) = *(int *) (&DAT_140ae7d08 + (longlong) param_4 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x37);
    }
    if (*(int *) (param_1 + 0x1f24) != *(int *) (&DAT_140ae7ca8 + (longlong) param_5 * 4)) {
        *(int *) (param_1 + 0x1f24) = *(int *) (&DAT_140ae7ca8 + (longlong) param_5 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0x38);
    }
    return;
}


void FUN_140271bf0(longlong param_1, int param_2, int param_3, int param_4, int param_5) {
    if (*(int *) (param_1 + 0x212c) != *(int *) (&DAT_140ae7d08 + (longlong) param_2 * 4)) {
        *(int *) (param_1 + 0x212c) = *(int *) (&DAT_140ae7d08 + (longlong) param_2 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xba);
    }
    if (*(int *) (param_1 + 0x2130) != *(int *) (&DAT_140ae7d08 + (longlong) param_3 * 4)) {
        *(int *) (param_1 + 0x2130) = *(int *) (&DAT_140ae7d08 + (longlong) param_3 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xbb);
    }
    if (*(int *) (param_1 + 0x2134) != *(int *) (&DAT_140ae7d08 + (longlong) param_4 * 4)) {
        *(int *) (param_1 + 0x2134) = *(int *) (&DAT_140ae7d08 + (longlong) param_4 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xbc);
    }
    if (*(int *) (param_1 + 0x2138) != *(int *) (&DAT_140ae7ca8 + (longlong) param_5 * 4)) {
        *(int *) (param_1 + 0x2138) = *(int *) (&DAT_140ae7ca8 + (longlong) param_5 * 4);
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xbd);
    }
    return;
}


void FUN_140271cf0(longlong param_1, uint param_2) {
    uint uVar1;

    if (*(uint * )(param_1 + 0x20e4) != (param_2 & 0xf)) {
        *(uint * )(param_1 + 0x20e4) = param_2 & 0xf;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xa8);
    }
    uVar1 = param_2 >> 4 & 0xf;
    if (*(uint * )(param_1 + 0x213c) != uVar1) {
        *(uint * )(param_1 + 0x213c) = uVar1;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xbe);
    }
    uVar1 = param_2 >> 8 & 0xf;
    if (*(uint * )(param_1 + 0x2140) != uVar1) {
        *(uint * )(param_1 + 0x2140) = uVar1;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))(*(longlong * *)(param_1 + 0x19d0), 0xbf);
    }
    uVar1 = param_2 >> 0xc & 0xf;
    if (*(uint * )(param_1 + 0x2144) != uVar1) {
        *(uint * )(param_1 + 0x2144) = uVar1;
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                (*(longlong * *)(param_1 + 0x19d0), 0xc0, uVar1);
    }
    return;
}


void FUN_140271dd0(longlong param_1, int param_2, int param_3, int param_4) {
    longlong *plVar1;
    undefined4 uVar2;

    if (((param_2 == 1) && (param_3 == 0)) && (param_4 == 0)) {
        if (*(int *) (param_1 + 0x1eb0) == 0) {
            return;
        }
        *(undefined4 * )(param_1 + 0x1eb0) = 0;
        plVar1 = *(longlong * *)(param_1 + 0x19d0);
        uVar2 = 0x1b;
    } else {
        if (*(int *) (param_1 + 0x1e90) != *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4)) {
            *(int *) (param_1 + 0x1e90) = *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x13);
        }
        if (*(int *) (param_1 + 0x1e94) != *(int *) (&DAT_140ae7cc8 + (longlong) param_3 * 4)) {
            *(int *) (param_1 + 0x1e94) = *(int *) (&DAT_140ae7cc8 + (longlong) param_3 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x14);
        }
        if (*(int *) (param_1 + 0x20f0) != *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4)) {
            *(int *) (param_1 + 0x20f0) = *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xab);
        }
        if (*(int *) (param_1 + 0x1eb0) != 1) {
            *(undefined4 * )(param_1 + 0x1eb0) = 1;
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x1b, 1);
        }
        if (*(int *) (param_1 + 0x217c) == 0) {
            return;
        }
        *(undefined4 * )(param_1 + 0x217c) = 0;
        plVar1 = *(longlong * *)(param_1 + 0x19d0);
        uVar2 = 0xce;
    }
    (**(code * *)(*plVar1 + 0x1c8))(plVar1, uVar2, 0);
    return;
}


void FUN_140271f20(longlong param_1, int param_2, undefined8 param_3, int param_4, int param_5,
                   int param_6, int param_7) {
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;

    iVar3 = (int) param_3;
    if (((param_5 == param_2) && (param_6 == iVar3)) && (param_7 == param_4)) {
        if (((param_2 == 1) && (iVar3 == 0)) && (param_4 == 0)) {
            if (*(int *) (param_1 + 0x1eb0) == 0) {
                return;
            }
            *(undefined4 * )(param_1 + 0x1eb0) = 0;
            plVar1 = *(longlong * *)(param_1 + 0x19d0);
            uVar2 = 0x1b;
            goto LAB_1402721e2;
        }
        if (*(int *) (param_1 + 0x1e90) != *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4)) {
            *(int *) (param_1 + 0x1e90) = *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x13);
        }
        if (*(int *) (param_1 + 0x1e94) != *(int *) (&DAT_140ae7cc8 + (longlong) iVar3 * 4)) {
            *(int *) (param_1 + 0x1e94) = *(int *) (&DAT_140ae7cc8 + (longlong) iVar3 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x14);
        }
        if (*(int *) (param_1 + 0x20f0) != *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4)) {
            *(int *) (param_1 + 0x20f0) = *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xab);
        }
        if (*(int *) (param_1 + 0x1eb0) != 1) {
            *(undefined4 * )(param_1 + 0x1eb0) = 1;
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x1b, 1);
        }
        if (*(int *) (param_1 + 0x217c) == 0) {
            return;
        }
        *(undefined4 * )(param_1 + 0x217c) = 0;
        param_3 = 0;
    } else {
        if (*(int *) (param_1 + 0x1e90) != *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4)) {
            *(int *) (param_1 + 0x1e90) = *(int *) (&DAT_140ae7cc8 + (longlong) param_2 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x13);
        }
        if (*(int *) (param_1 + 0x1e94) != *(int *) (&DAT_140ae7cc8 + (longlong) iVar3 * 4)) {
            *(int *) (param_1 + 0x1e94) = *(int *) (&DAT_140ae7cc8 + (longlong) iVar3 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x14);
        }
        if (*(int *) (param_1 + 0x20f0) != *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4)) {
            *(int *) (param_1 + 0x20f0) = *(int *) (&DAT_140ae7cf0 + (longlong) param_4 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xab);
        }
        if (*(int *) (param_1 + 0x2180) != *(int *) (&DAT_140ae7cc8 + (longlong) param_5 * 4)) {
            *(int *) (param_1 + 0x2180) = *(int *) (&DAT_140ae7cc8 + (longlong) param_5 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xcf);
        }
        if (*(int *) (param_1 + 0x2184) != *(int *) (&DAT_140ae7cc8 + (longlong) param_6 * 4)) {
            *(int *) (param_1 + 0x2184) = *(int *) (&DAT_140ae7cc8 + (longlong) param_6 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xd0);
        }
        if (*(int *) (param_1 + 0x2188) != *(int *) (&DAT_140ae7cf0 + (longlong) param_7 * 4)) {
            *(int *) (param_1 + 0x2188) = *(int *) (&DAT_140ae7cf0 + (longlong) param_7 * 4);
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0xd1);
        }
        if (*(int *) (param_1 + 0x1eb0) != 1) {
            *(undefined4 * )(param_1 + 0x1eb0) = 1;
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x1c8))
                    (*(longlong * *)(param_1 + 0x19d0), 0x1b, 1);
        }
        if (*(int *) (param_1 + 0x217c) == 1) {
            return;
        }
        *(undefined4 * )(param_1 + 0x217c) = 1;
        param_3 = 1;
    }
    plVar1 = *(longlong * *)(param_1 + 0x19d0);
    uVar2 = 0xce;
    LAB_1402721e2:
    (**(code * *)(*plVar1 + 0x1c8))(plVar1, uVar2, param_3);
    return;
}


void FUN_140272320(longlong param_1) {
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined4 *puVar9;
    longlong *plVar10;

    lVar6 = FUN_14018b280(0x88);
    if (lVar6 != 0) {
        *(undefined8 * )(lVar6 + 0x78) = 0;
        *(undefined8 * )(lVar6 + 0x80) = 0;
        *(undefined8 * )(lVar6 + 8) = 0;
        *(undefined8 * )(lVar6 + 0x20) = 0;
        *(undefined8 * )(lVar6 + 0x38) = 0;
        *(undefined8 * )(lVar6 + 0x50) = 0;
    }
    puVar7 = (undefined4 * )(lVar6 + 0x10);
    plVar10 = (longlong * )(param_1 + 0x1d78);
    puVar9 = (undefined4 * )(param_1 + 0x1d98);
    lVar8 = 4;
    do {
        puVar5 = (undefined8 * ) * plVar10;
        uVar2 = puVar9[4];
        uVar3 = *puVar9;
        uVar4 = puVar9[-0xc];
        *(undefined8 * *)(puVar7 + -2) = puVar5;
        *puVar7 = uVar3;
        puVar7[1] = uVar2;
        puVar7[-4] = uVar4;
        if (puVar5 != (undefined8 *) 0x0) {
            (**(code * *) * puVar5)();
        }
        plVar10 = plVar10 + 1;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 6;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    plVar10 = (longlong * )(param_1 + 0x1df8);
    *(undefined4 * )(lVar6 + 0x60) = *(undefined4 * )(param_1 + 0x28a0);
    *(undefined4 * )(lVar6 + 100) = *(undefined4 * )(param_1 + 0x28a4);
    *(undefined4 * )(lVar6 + 0x68) = *(undefined4 * )(param_1 + 0x28a8);
    *(undefined4 * )(lVar6 + 0x6c) = *(undefined4 * )(param_1 + 0x28ac);
    *(undefined4 * )(lVar6 + 0x70) = *(undefined4 * )(param_1 + 0x28b0);
    *(undefined4 * )(lVar6 + 0x74) = *(undefined4 * )(param_1 + 0x28b4);
    if (*(longlong * )(lVar6 + 0x78) == 0) {
        *(longlong * *)(lVar6 + 0x78) = plVar10;
        plVar1 = (longlong * )(lVar6 + 0x80);
        *plVar1 = *plVar10;
        *plVar10 = lVar6;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x78) = plVar1;
        }
    }
    return;
}


void FUN_140272450(longlong param_1) {
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    undefined4 *puVar6;
    longlong *plVar7;

    puVar6 = (undefined4 *) FUN_14018b280(0x28);
    if (puVar6 != (undefined4 *) 0x0) {
        *(undefined8 * )(puVar6 + 6) = 0;
        *(undefined8 * )(puVar6 + 8) = 0;
        *(undefined8 * )(puVar6 + 2) = 0;
    }
    puVar5 = *(undefined8 * *)(param_1 + 0x1e08);
    uVar2 = *(undefined4 * )(param_1 + 0x1e14);
    uVar3 = *(undefined4 * )(param_1 + 0x1e10);
    uVar4 = *(undefined4 * )(param_1 + 0x1e04);
    *(undefined8 * *)(puVar6 + 2) = puVar5;
    puVar6[4] = uVar3;
    puVar6[5] = uVar2;
    *puVar6 = uVar4;
    if (puVar5 != (undefined8 *) 0x0) {
        (**(code * *) * puVar5)();
    }
    plVar7 = (longlong * )(param_1 + 0x1e38);
    if (*(longlong * )(puVar6 + 6) == 0) {
        *(longlong * *)(puVar6 + 6) = plVar7;
        plVar1 = (longlong * )(puVar6 + 8);
        *plVar1 = *plVar7;
        *plVar7 = (longlong) puVar6;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x18) = plVar1;
        }
    }
    return;
}


ulonglong FUN_1402725d0(longlong param_1, ulonglong param_2, int *param_3) {
    int *piVar1;
    uint *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong extraout_RAX;
    ulonglong extraout_RAX_00;
    ulonglong extraout_RAX_01;
    uint uVar9;
    longlong *plVar10;
    undefined8 local_res8;
    undefined8 local_res18;
    undefined8 local_res20;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    undefined8 local_c8;
    LPVOID local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    param_2 = param_2 & 0xffffffff;
    lVar3 = *(longlong * )(param_1 + 0x1dc8 + param_2 * 8);
    if (*param_3 == 0) {
        FUN_14026c1f0(param_1, param_2);
        puVar4 = *(undefined8 * *)(param_3 + 2);
        *(undefined4 * )(param_1 + 0x1d68 + param_2 * 4) = 0;
        if (puVar4 == (undefined8 *) 0x0) {
            uVar7 = (ulonglong) * (uint * )(param_1 + 0x40);
            *(uint * )(param_1 + 0x1db8 + param_2 * 4) = *(uint * )(param_1 + 0x40);
            plVar10 = *(longlong * *)(param_1 + 0x1de8);
            *(longlong * *)(param_1 + 0x1dc8 + param_2 * 8) = plVar10;
            if (plVar10 != (longlong *) 0x0) {
                uVar7 = (**(code * *)(*plVar10 + 8))();
            }
        } else {
            *(undefined8 * *)(param_1 + 0x1d78 + param_2 * 8) = puVar4;
            (**(code * *) * puVar4)(puVar4);
            uVar7 = (ulonglong) * (uint * )(puVar4 + 4);
            *(uint * )(param_1 + 0x1db8 + param_2 * 4) = *(uint * )(puVar4 + 4);
            plVar10 = (longlong *) puVar4[10];
            *(longlong * *)(param_1 + 0x1dc8 + param_2 * 8) = plVar10;
            if (plVar10 != (longlong *) 0x0) {
                uVar7 = (**(code * *)(*plVar10 + 8))();
            }
        }
    } else if (*(longlong * *)(param_3 + 2) == (longlong *) 0x0) {
        uVar7 = FUN_14026c1f0(param_1, param_2);
    } else {
        lVar8 = (**(code * *)(**(longlong * *)(param_3 + 2) + 0x18))();
        if (*(uint * )(lVar8 + 0x14) <= (uint) param_3[5]) {
            local_b0 = 0;
            local_b8 = &PTR_LAB_140b5e648;
            local_a8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b8);
            local_98 = local_b8;
            local_res8 = 0x141de1950;
            local_88 = local_a8;
            local_90 = local_b0;
            iVar6 = FUN_1401971e0(&DAT_140c8a2ec, 0xe, &local_res8, &local_98);
            local_b8 = &PTR_LAB_140b5e648;
            uVar9 = TlsSetValue(DAT_140c63720, local_a8);
            if (iVar6 == 0) {
                return (ulonglong) uVar9;
            }
            DebugBreak();
            return extraout_RAX;
        }
        if ((*(byte * )(*(longlong * )(param_1 + 0x1b78) + (longlong) * (int *) (lVar8 + 0x1c) * 4) & 1) == 0
                ) {
            local_c8 = 0;
            local_d0 = &PTR_LAB_140b5e648;
            local_c0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_d0);
            local_78 = local_d0;
            local_res18 = 0x141de1890;
            local_68 = local_c0;
            local_70 = local_c8;
            iVar6 = FUN_1401971e0(&DAT_140c8a2f0, 0xe, &local_res18, &local_78);
            local_d0 = &PTR_LAB_140b5e648;
            uVar9 = TlsSetValue(DAT_140c63720, local_c0);
            if (iVar6 == 0) {
                return (ulonglong) uVar9;
            }
            DebugBreak();
            return extraout_RAX_00;
        }
        if ((&DAT_140ae64c0)[*(int *) (lVar8 + 0x18)] != 0) {
            local_e0 = 0;
            local_e8 = &PTR_LAB_140b5e648;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_58 = local_e8;
            local_res20 = 0x141de1830;
            local_48 = local_d8;
            local_50 = local_e0;
            iVar6 = FUN_1401971e0(&DAT_140c8a2f4, 0xe, &local_res20, &local_58);
            local_e8 = &PTR_LAB_140b5e648;
            uVar9 = TlsSetValue(DAT_140c63720, local_d8);
            if (iVar6 == 0) {
                return (ulonglong) uVar9;
            }
            DebugBreak();
            return extraout_RAX_01;
        }
        FUN_14026c1f0(param_1, param_2);
        *(int *) (param_1 + 0x1d68 + param_2 * 4) = *param_3;
        puVar4 = *(undefined8 * *)(param_3 + 2);
        *(undefined8 * *)(param_1 + 0x1d78 + param_2 * 8) = puVar4;
        (**(code * *) * puVar4)();
        *(int *) (param_1 + 0x1d98 + param_2 * 4) = param_3[4];
        *(int *) (param_1 + 0x1da8 + param_2 * 4) = param_3[5];
        uVar7 = (ulonglong) * (uint * )(lVar8 + 0x18);
        *(uint * )(param_1 + 0x1db8 + param_2 * 4) = *(uint * )(lVar8 + 0x18);
        if (*param_3 == 1) {
            uVar9 = param_3[5];
        } else {
            if (*param_3 != 2) goto LAB_140272986;
            uVar9 = param_3[4] + param_3[5] * 6;
        }
        lVar5 = *(longlong * )(param_3 + 2);
        plVar10 = *(longlong * *)(*(longlong * )(lVar5 + 0x80) + (ulonglong) uVar9 * 8);
        *(longlong * *)(param_1 + 0x1dc8 + param_2 * 8) = plVar10;
        (**(code * *)(*plVar10 + 8))();
        *(undefined4 * )(lVar5 + 0x60) = 0;
        uVar9 = *(uint * )(param_1 + 0xf0);
        uVar7 = (ulonglong) uVar9;
        if (*(uint * )(lVar5 + 0x8c) != uVar9) {
            *(uint * )(lVar5 + 0x8c) = uVar9;
            iVar6 = *(int *) (lVar8 + 0x1c);
            LOCK();
            piVar1 = (int *) (param_1 + 0x2fc + (longlong) iVar6 * 0x30);
            *piVar1 = *piVar1 + 1;
            LOCK();
            puVar2 = (uint * )(param_1 + 0x300 + (longlong) iVar6 * 0x30);
            uVar7 = (ulonglong) * puVar2;
            *puVar2 = *puVar2 + *(int *) (lVar5 + 0x88);
        }
    }
    LAB_140272986:
    if (*(longlong * )(param_1 + 0x1dc8 + param_2 * 8) != lVar3) {
        uVar9 = (int) param_2 + 1;
        uVar7 = (ulonglong) uVar9;
        if (uVar9 < 4) {
            plVar10 = (longlong * )(param_1 + 0x1dc8 + uVar7 * 8);
            do {
                if (*(longlong * )(param_1 + 0x1dc8 + param_2 * 8) == *plVar10) {
                    FUN_14026c1f0(param_1, uVar7);
                    (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x128))
                            (*(longlong * *)(param_1 + 0x19d0), uVar7, 0);
                }
                uVar9 = (int) uVar7 + 1;
                uVar7 = (ulonglong) uVar9;
                plVar10 = plVar10 + 1;
            } while (uVar9 < 4);
        }
        uVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x128))
                (*(longlong * *)(param_1 + 0x19d0), param_2,
                 *(undefined8 * )(param_1 + 0x1dc8 + param_2 * 8));
        *(undefined4 * )(param_1 + 0x1e00) = 1;
    }
    return uVar7;
}


void FUN_140272a30(longlong param_1, int *param_2, int param_3) {
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    undefined *puVar7;
    undefined8 local_res8;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    lVar1 = *(longlong * )(param_1 + 0x1e20);
    if (*param_2 == 0) {
        FUN_14026c260();
        puVar2 = *(undefined8 * *)(param_2 + 2);
        *(undefined4 * )(param_1 + 0x1e04) = 0;
        if (puVar2 == (undefined8 *) 0x0) {
            plVar3 = *(longlong * *)(param_1 + 0x1e28);
            *(int *) (param_1 + 0x1e18) = *(int *) (param_1 + 0x44);
            *(longlong * *)(param_1 + 0x1e20) = plVar3;
            *(undefined4 * )(param_1 + 0x1e1c) =
                    *(undefined4 * )(&DAT_140ae5228 + (longlong) * (int *) (param_1 + 0x44) * 0x2c);
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 8))();
            }
        } else {
            *(undefined8 * *)(param_1 + 0x1e08) = puVar2;
            (**(code * *) * puVar2)(puVar2);
            *(undefined4 * )(param_1 + 0x1e18) = *(undefined4 * )((longlong) puVar2 + 0x24);
            *(undefined8 * )(param_1 + 0x1e20) = puVar2[0xc];
            *(undefined4 * )(param_1 + 0x1e1c) =
                    *(undefined4 * )(&DAT_140ae5228 + (longlong) * (int *) ((longlong) puVar2 + 0x24) * 0x2c);
            if (*(longlong * *)(param_1 + 0x1e20) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x1e20) + 8))();
            }
        }
    } else {
        if (*(longlong * *)(param_2 + 2) != (longlong *) 0x0) {
            lVar5 = (**(code * *)(**(longlong * *)(param_2 + 2) + 0x18))();
            if ((uint) param_2[5] < *(uint * )(lVar5 + 0x14)) {
                if ((*(byte * )(*(longlong * )(param_1 + 0x1b78) + (longlong) * (int *) (lVar5 + 0x1c) * 4) & 1)
                    == 0) {
                    local_68 = &PTR_LAB_140b5e648;
                    local_60 = 0;
                    local_58 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_68);
                    local_res8 = 0x141de16f0;
                    puVar7 = &DAT_140c8a2e0;
                } else {
                    if ((&DAT_140ae64c0)[*(int *) (lVar5 + 0x18)] != 0) {
                        FUN_14026c260(param_1);
                        *(int *) (param_1 + 0x1e04) = *param_2;
                        puVar2 = *(undefined8 * *)(param_2 + 2);
                        *(undefined8 * *)(param_1 + 0x1e08) = puVar2;
                        (**(code * *) * puVar2)();
                        *(int *) (param_1 + 0x1e10) = param_2[4];
                        *(int *) (param_1 + 0x1e14) = param_2[5];
                        *(undefined4 * )(param_1 + 0x1e18) = *(undefined4 * )(lVar5 + 0x18);
                        *(undefined4 * )(param_1 + 0x1e1c) =
                                *(undefined4 * )(&DAT_140ae5228 + (longlong) * (int *) (lVar5 + 0x18) * 0x2c);
                        if (*param_2 == 1) {
                            uVar6 = param_2[5];
                        } else {
                            if (*param_2 != 2) goto LAB_140272d31;
                            uVar6 = param_2[4] + param_2[5] * 6;
                        }
                        lVar5 = *(longlong * )(param_2 + 2);
                        plVar3 = *(longlong * *)(*(longlong * )(lVar5 + 0x80) + (ulonglong) uVar6 * 8);
                        *(longlong * *)(param_1 + 0x1e20) = plVar3;
                        (**(code * *)(*plVar3 + 8))();
                        if (param_3 == 0) {
                            *(undefined4 * )(lVar5 + 0x60) = *(undefined4 * )(lVar5 + 0x60);
                        } else {
                            *(undefined4 * )(lVar5 + 0x60) = 0;
                        }
                        goto LAB_140272d31;
                    }
                    local_68 = &PTR_LAB_140b5e648;
                    local_60 = 0;
                    local_58 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_68);
                    local_res8 = 0x141de1be0;
                    puVar7 = &DAT_140c8a2e4;
                }
            } else {
                local_68 = &PTR_LAB_140b5e648;
                local_60 = 0;
                local_58 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_68);
                local_res8 = 0x141de1790;
                puVar7 = &DAT_140c8a2f8;
            }
            local_48 = local_68;
            local_40 = local_60;
            local_38 = local_58;
            iVar4 = FUN_1401971e0(puVar7, 0xe, &local_res8, &local_48);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_58);
            if (iVar4 == 0) {
                return;
            }
            DebugBreak();
            return;
        }
        FUN_14026c260(param_1);
        *(undefined4 * )(param_1 + 0x1e1c) = 0;
    }
    LAB_140272d31:
    if (*(longlong * )(param_1 + 0x1e20) != lVar1) {
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x138))();
        *(undefined4 * )(param_1 + 0x1e40) = 1;
    }
    return;
}


ulonglong FUN_140272d70(longlong param_1, ulonglong param_2, int *param_3) {
    int *piVar1;
    uint *puVar2;
    int iVar3;
    uint uVar4;
    ulonglong extraout_RAX;
    longlong lVar5;
    ulonglong extraout_RAX_00;
    ulonglong extraout_RAX_01;
    longlong lVar6;
    longlong *local_res18;
    longlong *local_res20;
    undefined **local_e8;
    undefined8 local_e0;
    LPVOID local_d8;
    undefined **local_d0;
    undefined8 local_c8;
    LPVOID local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;

    if (*param_3 == 1) {
        lVar5 = (**(code * *)(**(longlong * *)(param_3 + 2) + 0x18))();
        if (*(uint * )(lVar5 + 0x14) <= (uint) param_3[5]) {
            local_d0 = &PTR_LAB_140b5e648;
            local_c8 = 0;
            local_c0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_d0);
            local_48 = local_d0;
            local_90 = 0x141de1b90;
            local_38 = local_c0;
            local_40 = local_c8;
            iVar3 = FUN_1401971e0(&DAT_140c8a2e8, 0xe, &local_90, &local_48);
            local_d0 = &PTR_LAB_140b5e648;
            uVar4 = TlsSetValue(DAT_140c63720, local_c0);
            if (iVar3 == 0) {
                return (ulonglong) uVar4;
            }
            DebugBreak();
            return extraout_RAX_01;
        }
        lVar6 = *(longlong * )(param_3 + 2);
        iVar3 = (**(code * *)(**(longlong * *)(lVar6 + 0x78) + 0x90))
                (*(longlong * *)(lVar6 + 0x78), param_3[5], &local_res20);
        if (-1 < iVar3) {
            iVar3 = (*DAT_140c65710)(local_res20, 0, 0,
                                     *(undefined8 * )(param_1 + 0x1dc8 + (param_2 & 0xffffffff) * 8), 0, 0,
                                     0xffffffff, 0);
            if (-1 < iVar3) {
                *(undefined4 * )(lVar6 + 0x60) = 1;
            }
            if (local_res20 != (longlong *) 0x0) {
                (**(code * *)(*local_res20 + 0x10))();
            }
        }
    } else {
        if (*param_3 != 2) {
            local_b8 = &PTR_LAB_140b5e648;
            local_b0 = 0;
            local_a8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b8);
            local_88 = local_b8;
            local_a0 = 0x141de1ae0;
            local_78 = local_a8;
            local_80 = local_b0;
            iVar3 = FUN_1401971e0(&DAT_140c8a2d8, 0xe, &local_a0, &local_88);
            local_b8 = &PTR_LAB_140b5e648;
            uVar4 = TlsSetValue(DAT_140c63720, local_a8);
            if (iVar3 == 0) {
                return (ulonglong) uVar4;
            }
            DebugBreak();
            return extraout_RAX;
        }
        lVar5 = (**(code * *)(**(longlong * *)(param_3 + 2) + 0x18))();
        if (*(uint * )(lVar5 + 0x14) <= (uint) param_3[5]) {
            local_e8 = &PTR_LAB_140b5e648;
            local_e0 = 0;
            local_d8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_e8);
            local_68 = local_e8;
            local_98 = 0x141de1b40;
            local_58 = local_d8;
            local_60 = local_e0;
            iVar3 = FUN_1401971e0(&DAT_140c8a2d4, 0xe, &local_98, &local_68);
            local_e8 = &PTR_LAB_140b5e648;
            uVar4 = TlsSetValue(DAT_140c63720, local_d8);
            if (iVar3 == 0) {
                return (ulonglong) uVar4;
            }
            DebugBreak();
            return extraout_RAX_00;
        }
        lVar6 = *(longlong * )(param_3 + 2);
        iVar3 = (**(code * *)(**(longlong * *)(lVar6 + 0x78) + 0x90))
                (*(longlong * *)(lVar6 + 0x78), (&DAT_140ae7b00)[param_3[4]], param_3[5],
                 &local_res18);
        if (-1 < iVar3) {
            iVar3 = (*DAT_140c65710)(local_res18, 0, 0,
                                     *(undefined8 * )(param_1 + 0x1dc8 + (param_2 & 0xffffffff) * 8), 0, 0,
                                     0xffffffff, 0);
            if (-1 < iVar3) {
                *(undefined4 * )(lVar6 + 0x60) = 1;
            }
            if (local_res18 != (longlong *) 0x0) {
                (**(code * *)(*local_res18 + 0x10))();
            }
        }
    }
    iVar3 = *(int *) (lVar5 + 0x1c);
    LOCK();
    piVar1 = (int *) (param_1 + 0x2f4 + (longlong) iVar3 * 0x30);
    *piVar1 = *piVar1 + 1;
    LOCK();
    puVar2 = (uint * )(param_1 + 0x2f8 + (longlong) iVar3 * 0x30);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 + *(int *) (lVar6 + 0x88);
    return (ulonglong) uVar4;
}


void FUN_1402732b0(longlong *param_1) {
    int *piVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 local_res8;
    undefined8 local_68;
    int *local_60;
    LPVOID local_58;
    undefined8 local_48;
    int *local_40;
    LPVOID local_38;
    undefined4 local_28;
    undefined8 local_20;

    piVar1 = (int *) param_1[0x3c7];
    if (piVar1 == (int *) 0x0) {
        local_68 = &PTR_LAB_140b5e648;
        local_60 = piVar1;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_68);
        local_48 = local_68;
        local_res8 = 0x141de17d8;
        local_38 = local_58;
        local_40 = local_60;
        iVar2 = FUN_1401971e0(&DAT_140c8a2d0, 0xe, &local_res8, &local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_58);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140273382. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        iVar2 = *piVar1;
        if (iVar2 == 0) {
            local_20 = *(undefined8 * )(piVar1 + 2);
            local_28 = 0;
            puVar3 = (undefined8 * ) & local_28;
        } else if (iVar2 == 1) {
            local_40 = *(int **) (piVar1 + 2);
            local_48 = (undefined **) CONCAT44(local_48._4_4_, 1);
            puVar3 = &local_48;
            local_38 = (LPVOID)((ulonglong) local_38 & 0xffffffff | (ulonglong)(uint)
            piVar1[5] << 0x20);
        } else if (iVar2 == 2) {
            local_60 = *(int **) (piVar1 + 2);
            local_68 = (undefined **) CONCAT44(local_68._4_4_, 2);
            puVar3 = &local_68;
            local_58 = *(LPVOID * )(piVar1 + 4);
        } else {
            puVar3 = (undefined8 * ) & DAT_140c3fe88;
        }
        (**(code * *)(*param_1 + 0x210))(param_1, puVar3, 1);
        if (param_1[0x3c7] != 0) {
            FUN_14026be10();
        }
    }
    return;
}


void FUN_1402734b0(longlong param_1) {
    if (*(int *) (param_1 + 0x28b8) != 0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x178))
                (*(longlong * *)(param_1 + 0x19d0), param_1 + 0x28a0);
        *(undefined4 * )(param_1 + 0x28b8) = 0;
    }
    return;
}


void FUN_1402734f0(longlong *param_1) {
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    undefined auStack104[32];
    WINDOWPLACEMENT local_48;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    if (*(int *) ((longlong) param_1 + 0x19e4) != 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
        return;
    }
    if ((HWND) param_1[10] != (HWND) 0x0) {
        local_48.length = 0x2c;
        GetWindowPlacement((HWND) param_1[10], &local_48);
        if ((local_48.showCmd - 1 & 0xfffffffd) != 0) {
            FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
            return;
        }
    }
    plVar1 = (longlong *) param_1[0x33b];
    if (plVar1 == (longlong *) 0x0) {
        if ((longlong *) param_1[0x33a] == (longlong *) 0x0) goto LAB_1402735e0;
        iVar2 = (**(code * *)(*(longlong *) param_1[0x33a] + 0x18))();
        if (iVar2 != -0x7789f798) {
            if (iVar2 != 0) goto LAB_140273599;
            goto LAB_1402735cc;
        }
        LAB_1402735d8:
        uVar3 = 0;
    } else {
        iVar2 = (**(code * *)(*plVar1 + 0x400))(plVar1, param_1[10]);
        if (iVar2 == -0x7789f798) goto LAB_1402735d8;
        if ((iVar2 == 0) || (iVar2 == 0x8760877)) {
            LAB_1402735cc:
            *(undefined4 * )((longlong) param_1 + 0x19e4) = 1;
            goto LAB_1402735e0;
        }
        if (iVar2 == 0x8760878) goto LAB_1402735d8;
        LAB_140273599:
        iVar2 = (**(code * *)(*param_1 + 0x28))(param_1, param_1 + 7);
        uVar3 = (uint)(-1 < iVar2);
    }
    *(uint * )((longlong) param_1 + 0x19e4) = uVar3;
    LAB_1402735e0:
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


bool FUN_140273600(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;

    plVar1 = *(longlong * *)(param_1 + 0x19d8);
    if (plVar1 != (longlong *) 0x0) {
        uVar3 = 0;
        if ((*(byte * )(param_1 + 0x58) & 2) == 0) {
            uVar3 = *(undefined8 * )(param_1 + 0x50);
        }
        iVar2 = (**(code * *)(*plVar1 + 0x400))(plVar1, uVar3);
        return iVar2 == -0x7789f798;
    }
    if (*(longlong * *)(param_1 + 0x19d0) != (longlong *) 0x0) {
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x18))();
        return iVar2 == -0x7789f798;
    }
    return false;
}


void FUN_140273670(longlong param_1) {
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_res8[8];

    if (*(ulonglong * )(param_1 + 0x19f8) != 0) {
        plVar1 = *(longlong * *)
                (*(longlong * )(param_1 + 0x19f0) +
                 ((ulonglong) * (uint * )(param_1 + 0xf0) % *(ulonglong * )(param_1 + 0x19f8)) * 8);
        iVar2 = (**(code * *)(*plVar1 + 0x38))(plVar1, local_res8, 4);
        if (iVar2 == 1) {
            uVar6 = 1;
            iVar2 = FUN_14018cdf0();
            uVar7 = 0;
            uVar5 = uVar7;
            do {
                if (((int) uVar6 != 0) && (uVar6 = uVar7, DAT_140c63758 != 0)) {
                    uVar3 = FUN_1401c81f0();
                    uVar6 = (ulonglong) uVar3;
                }
                iVar4 = (**(code * *)(*plVar1 + 0x38))(plVar1, local_res8, 4);
            } while ((iVar4 == 1) &&
                     ((uVar5 = uVar5 + 1, uVar5 < 1000 ||
                                          (iVar4 = FUN_14018cdf0(), uVar5 = uVar7, iVar4 - (iVar2 + 10000) < 0))));
        }
    }
    return;
}


void FUN_140273f80(longlong param_1, ulonglong param_2) {
    uint uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    uint uVar6;
    uint *puVar7;
    longlong *plVar8;

    uVar6 = 0;
    if ((param_2 & 1) != 0) {
        plVar8 = (longlong * )(param_1 + 0x1d78);
        puVar7 = (uint * )(param_1 + 0x1da8);
        lVar5 = 4;
        do {
            uVar1 = puVar7[-0x10];
            if (uVar1 == 0) {
                lVar2 = *plVar8;
                if (lVar2 == 0) {
                    if (*(int *) (param_1 + 0x1df0) != *(int *) (param_1 + 0xf0)) {
                        *(int *) (param_1 + 0x1df0) = *(int *) (param_1 + 0xf0);
                        goto LAB_140274046;
                    }
                } else if (*(int *) (lVar2 + 0x58) != *(int *) (param_1 + 0xf0)) {
                    *(int *) (lVar2 + 0x58) = *(int *) (param_1 + 0xf0);
                    LAB_140274046:
                    uVar6 = 1;
                }
            } else if (uVar1 == 1) {
                if (*plVar8 != 0) {
                    lVar2 = *(longlong * )(*plVar8 + 0x98);
                    if (*(int *) (lVar2 + (ulonglong) * puVar7 * 4) != *(int *) (param_1 + 0xf0)) {
                        *(int *) (lVar2 + (ulonglong) * puVar7 * 4) = *(int *) (param_1 + 0xf0);
                        goto LAB_140274046;
                    }
                }
            } else if ((uVar1 == 2) && (lVar2 = *plVar8, lVar2 != 0)) {
                uVar4 = (ulonglong)(*(int *) (lVar2 + 0x2c) * puVar7[-4] + *puVar7);
                if (*(int *) (*(longlong * )(lVar2 + 0x98) + uVar4 * 4) != *(int *) (param_1 + 0xf0)) {
                    *(int *) (*(longlong * )(lVar2 + 0x98) + uVar4 * 4) = *(int *) (param_1 + 0xf0);
                    goto LAB_140274046;
                }
            }
            puVar7 = puVar7 + 1;
            plVar8 = plVar8 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        *(undefined4 * )(param_1 + 0x1e00) = 0;
    }
    if ((*(longlong * )(param_1 + 0x1e20) == 0) || ((param_2 & 2) == 0)) goto LAB_14027414b;
    iVar3 = *(int *) (param_1 + 0x1e04);
    if (iVar3 == 0) {
        lVar5 = *(longlong * )(param_1 + 0x1e08);
        if (lVar5 == 0) {
            if (*(int *) (param_1 + 0x1e30) != *(int *) (param_1 + 0xf0)) {
                *(int *) (param_1 + 0x1e30) = *(int *) (param_1 + 0xf0);
                goto LAB_140274135;
            }
        } else if (*(int *) (lVar5 + 0x68) != *(int *) (param_1 + 0xf0)) {
            *(int *) (lVar5 + 0x68) = *(int *) (param_1 + 0xf0);
            LAB_140274135:
            uVar6 = uVar6 | *(uint * )(&DAT_140ae7ba0 + (longlong) * (int *) (param_1 + 0x1e18) * 4);
        }
    } else if (iVar3 == 1) {
        if (*(longlong * )(param_1 + 0x1e08) != 0) {
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x1e08) + 0x98);
            if (*(int *) (lVar5 + (ulonglong) * (uint * )(param_1 + 0x1e14) * 4) != *(int *) (param_1 + 0xf0)) {
                *(int *) (lVar5 + (ulonglong) * (uint * )(param_1 + 0x1e14) * 4) = *(int *) (param_1 + 0xf0);
                goto LAB_140274135;
            }
        }
    } else if ((iVar3 == 2) && (lVar5 = *(longlong * )(param_1 + 0x1e08), lVar5 != 0)) {
        uVar4 = (ulonglong)
                (uint)(*(int *) (param_1 + 0x1e10) * *(int *) (lVar5 + 0x2c) + *(int *) (param_1 + 0x1e14));
        if (*(int *) (*(longlong * )(lVar5 + 0x98) + uVar4 * 4) != *(int *) (param_1 + 0xf0)) {
            *(int *) (*(longlong * )(lVar5 + 0x98) + uVar4 * 4) = *(int *) (param_1 + 0xf0);
            goto LAB_140274135;
        }
    }
    *(undefined4 * )(param_1 + 0x1e40) = 0;
    LAB_14027414b:
    if (uVar6 != 0) {
        iVar3 = DAT_140c40590;
        if (*DAT_140c63750 < DAT_140c40590) {
            iVar3 = *DAT_140c63750;
        }
        if ((&DAT_140c405a0)[iVar3] != '\0') {
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x158))
                    (*(longlong * *)(param_1 + 0x19d0), 0, 0, uVar6, 0, 0x3f800000, 0);
        }
    }
    return;
}


void FUN_1402741b0(longlong param_1, uint param_2) {
    int iVar1;
    longlong lVar2;
    uint uVar3;
    uint *puVar4;
    longlong *plVar5;
    longlong lVar6;

    if ((param_2 & 1) != 0) {
        plVar5 = (longlong * )(param_1 + 0x1d78);
        puVar4 = (uint * )(param_1 + 0x1da8);
        lVar6 = 4;
        do {
            uVar3 = puVar4[-0x10];
            if (uVar3 == 0) {
                if (*plVar5 == 0) {
                    *(undefined4 * )(param_1 + 0x1df0) = *(undefined4 * )(param_1 + 0xf0);
                } else {
                    *(undefined4 * )(*plVar5 + 0x58) = *(undefined4 * )(param_1 + 0xf0);
                }
            } else if (uVar3 == 1) {
                lVar2 = *plVar5;
                if (lVar2 != 0) {
                    uVar3 = *puVar4;
                    goto LAB_140274205;
                }
            } else if ((uVar3 == 2) && (lVar2 = *plVar5, lVar2 != 0)) {
                uVar3 = *(int *) (lVar2 + 0x2c) * puVar4[-4] + *puVar4;
                LAB_140274205:
                *(undefined4 * )(*(longlong * )(lVar2 + 0x98) + (ulonglong) uVar3 * 4) =
                        *(undefined4 * )(param_1 + 0xf0);
            }
            puVar4 = puVar4 + 1;
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        *(undefined4 * )(param_1 + 0x1e00) = 0;
    }
    if ((*(longlong * )(param_1 + 0x1e20) != 0) && ((param_2 & 2) != 0)) {
        iVar1 = *(int *) (param_1 + 0x1e04);
        if (iVar1 == 0) {
            if (*(longlong * )(param_1 + 0x1e08) != 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x1e08) + 0x68) = *(undefined4 * )(param_1 + 0xf0);
                *(undefined4 * )(param_1 + 0x1e40) = 0;
                return;
            }
            *(undefined4 * )(param_1 + 0x1e30) = *(undefined4 * )(param_1 + 0xf0);
        } else if (iVar1 == 1) {
            lVar6 = *(longlong * )(param_1 + 0x1e08);
            if (lVar6 != 0) {
                uVar3 = *(uint * )(param_1 + 0x1e14);
                goto LAB_1402742a6;
            }
        } else if ((iVar1 == 2) && (lVar6 = *(longlong * )(param_1 + 0x1e08), lVar6 != 0)) {
            uVar3 = *(int *) (param_1 + 0x1e10) * *(int *) (lVar6 + 0x2c) + *(int *) (param_1 + 0x1e14);
            LAB_1402742a6:
            *(undefined4 * )(*(longlong * )(lVar6 + 0x98) + (ulonglong) uVar3 * 4) =
                    *(undefined4 * )(param_1 + 0xf0);
            *(undefined4 * )(param_1 + 0x1e40) = 0;
            return;
        }
        *(undefined4 * )(param_1 + 0x1e40) = 0;
    }
    return;
}


void FUN_1402747d0(undefined8 param_1, undefined8 param_2, float param_3, longlong *param_4,
                   float param_5_00, undefined8 param_6_00, int *param_7, float *param_5, float *param_6) {
    undefined auVar1[12];
    float *pfVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float local_98;
    float fStack148;

    if (param_6 == (float *) 0x0) {
        fVar8 = (float) (ulonglong) * (uint * )(param_4 + 0x514);
        fVar11 = (float) (ulonglong) * (uint * )((longlong) param_4 + 0x28a4);
        fVar10 = (float) (ulonglong) * (uint * )(param_4 + 0x515) + fVar8;
        fVar6 = (float) (ulonglong) * (uint * )((longlong) param_4 + 0x28ac) + fVar11;
    } else {
        fVar8 = *param_6;
        fVar11 = param_6[1];
        fVar10 = param_6[4];
        fVar6 = param_6[5];
    }
    fVar3 = fVar10 - fVar8;
    fVar5 = fVar6 - fVar11;
    if (param_5 == (float *) 0x0) {
        fVar5 = 1.0;
        fVar4 = 1.0;
        fVar7 = 0.0;
        fVar3 = 0.0;
    } else {
        if (fVar5 <= 1.0) {
            fVar7 = 0.0;
            fVar4 = fVar3;
        } else {
            fVar7 = ((param_5[5] - param_5[1]) - 1.0) / (fVar5 - 1.0);
            fVar4 = fVar5 - 1.0;
        }
        if (fVar3 <= 1.0) {
            fVar9 = 0.0;
        } else {
            fVar4 = fVar3 - 1.0;
            fVar9 = ((param_5[4] - *param_5) - 1.0) / fVar4;
        }
        auVar1 = CONCAT48(fVar4, CONCAT44(fVar7, fVar9)) & (undefined[12]) 0xffffffffffffffff;
        local_98 = SUB124(auVar1, 0);
        fStack148 = SUB164(ZEXT1216(auVar1) >> 0x20, 0);
        if (param_7 == (int *) 0x0) {
            fVar4 = ((param_5[4] - 0.5) + local_98 * 0.5) * (1.0 / fVar3);
            fVar7 = ((param_5[1] + 0.5) - fStack148 * 0.5) * (1.0 / fVar5);
            fVar5 = ((param_5[5] - 0.5) + fStack148 * 0.5) * (1.0 / fVar5);
            fVar3 = ((*param_5 + 0.5) - local_98 * 0.5) * (1.0 / fVar3);
        } else {
            fVar3 = ((*param_5 + 0.5) - local_98 * 0.5) * (1.0 / (float) *param_7);
            fVar7 = ((param_5[1] + 0.5) - fStack148 * 0.5) * (1.0 / (float) param_7[1]);
            fVar5 = ((param_5[5] - 0.5) + fStack148 * 0.5) * (1.0 / (float) param_7[1]);
            fVar4 = ((param_5[4] - 0.5) + local_98 * 0.5) * (1.0 / (float) *param_7);
        }
    }
    pfVar2 = (float *) (**(code * *)(*param_4 + 0xe0))(param_4, 0x70, 0);
    if (pfVar2 != (float *) 0x0) {
        pfVar2[3] = 1.0;
        pfVar2[4] = param_5_00;
        pfVar2[10] = 1.0;
        pfVar2[0xb] = param_5_00;
        pfVar2[0x11] = 1.0;
        pfVar2[0x12] = param_5_00;
        *pfVar2 = fVar8 - 0.5;
        pfVar2[1] = fVar11 - 0.5;
        pfVar2[2] = param_3;
        pfVar2[0x18] = 1.0;
        pfVar2[0x19] = param_5_00;
        pfVar2[7] = fVar8 - 0.5;
        pfVar2[0xe] = fVar10 - 0.5;
        *(ulonglong * )(pfVar2 + 5) = CONCAT44(fVar7, fVar3);
        pfVar2[0x15] = fVar10 - 0.5;
        *(ulonglong * )(pfVar2 + 0xc) = CONCAT44(fVar5, fVar3);
        pfVar2[8] = fVar6 - 0.5;
        pfVar2[0xf] = fVar11 - 0.5;
        pfVar2[0x16] = fVar6 - 0.5;
        pfVar2[9] = param_3;
        *(ulonglong * )(pfVar2 + 0x13) = CONCAT44(fVar7, fVar4);
        pfVar2[0x10] = param_3;
        pfVar2[0x17] = param_3;
        *(ulonglong * )(pfVar2 + 0x1a) = CONCAT44(fVar5, fVar4);
        (**(code * *)(*param_4 + 0xe8))(param_4);
        (**(code * *)(*param_4 + 0x288))(param_4, 4, 0, 4, 1);
    }
    return;
}


void FUN_140274b90(longlong param_1) {
    int *piVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    int *piVar5;

    plVar4 = (longlong * )(param_1 + 0x1d78);
    piVar5 = (int *) (param_1 + 0x1d68);
    lVar3 = 4;
    do {
        piVar1 = DAT_140c636a0;
        iVar2 = *piVar5;
        if (iVar2 == 0) {
            *DAT_140c636a0 = *DAT_140c636a0 + 0x10000;
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x150))();
            if (*plVar4 == 0) {
                if (*(longlong * *)(param_1 + 0x19d8) == (longlong *) 0x0) {
                    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x88))
                            (*(longlong * *)(param_1 + 0x19d0), 0, 0, 0, 0);
                    if (iVar2 < 0) {
                        *(undefined4 * )(param_1 + 0x19e4) = 0;
                    }
                } else {
                    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x19d8) + 0x3c8))();
                    if ((iVar2 < 0) || (iVar2 == 0x8760878)) {
                        *(undefined4 * )(param_1 + 0x19e4) = 0;
                    }
                    if ((*(int *) (param_1 + 0x19e4) != 0) && (*(int *) (param_1 + 0x19ec) != 0)) {
                        (**(code * *)(**(longlong * *)(param_1 + 0x19d8) + 0x3e0))();
                    }
                }
            } else {
                (**(code * *)(**(longlong * *)(*plVar4 + 0x48) + 0x18))();
            }
            (**(code * *)(**(longlong * *)(param_1 + 0x19d0) + 0x148))();
            *piVar1 = *piVar1 + -0x10000;
        } else if (((iVar2 == 1) || (iVar2 == 2)) && (*plVar4 != 0)) {
            *(undefined4 * )(*plVar4 + 0x60) = 1;
        }
        piVar5 = piVar5 + 1;
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (((*(int *) (param_1 + 0x1e04) == 1) || (*(int *) (param_1 + 0x1e04) == 2)) &&
        (*(longlong * )(param_1 + 0x1e08) != 0)) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x1e08) + 0x60) = 1;
    }
    return;
}


void FUN_140274d20(longlong param_1) {
    longlong *plVar1;

    if (*(ulonglong * )(param_1 + 0x19f8) != 0) {
        plVar1 = *(longlong * *)
                (*(longlong * )(param_1 + 0x19f0) +
                 ((ulonglong) * (uint * )(param_1 + 0xf0) % *(ulonglong * )(param_1 + 0x19f8)) * 8);
        (**(code * *)(*plVar1 + 0x30))(plVar1, 1);
    }
    *(int *) (param_1 + 0xf0) = *(int *) (param_1 + 0xf0) + 1;
    return;
}


void FUN_140274d70(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    int *piVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    undefined *puVar6;
    ulonglong in_stack_ffffffffffffff88;
    undefined *in_stack_ffffffffffffff90;
    undefined *in_stack_ffffffffffffff98;
    ulonglong in_stack_ffffffffffffffb0;
    undefined *in_stack_ffffffffffffffb8;
    undefined *in_stack_ffffffffffffffc8;
    undefined *in_stack_ffffffffffffffd0;
    ulonglong in_stack_ffffffffffffffd8;
    undefined *in_stack_ffffffffffffffe0;

    FUN_1401981b0(param_1 + 0x10);
    for (plVar5 = *(longlong * *)(param_1 + 0x1808); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x13]) {
        lVar1 = (**(code * *)(*plVar5 + 0x28))(plVar5);
        in_stack_ffffffffffffff88 = *(ulonglong * )(lVar1 + 0x18);
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1c08); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0xf]) {
        puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))();
        in_stack_ffffffffffffff90 =
                (undefined * )
                        ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 | (ulonglong) puVar2[1]);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
        FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90);
    }
    plVar5 = *(longlong * *)(param_1 + 0x1c10);
    if (plVar5 == (longlong *) 0x0) {
        if (*(longlong * )(param_1 + 0x1c18) != 0) goto LAB_140274e71;
    } else {
        do {
            puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffff90 = (&PTR_u_Scratch_140b60e18)[(int) puVar2[1]];
            in_stack_ffffffffffffff88 =
                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
            FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90);
            plVar5 = (longlong *) plVar5[8];
        } while (plVar5 != (longlong *) 0x0);
        LAB_140274e71:
        for (plVar5 = *(longlong * *)(param_1 + 0x1c18); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[7]) {
            puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffff90 = (&PTR_u_Scratch_140b60e18)[(int) puVar2[1]];
            in_stack_ffffffffffffff88 =
                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
            FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90);
        }
    }
    plVar5 = *(longlong * *)(param_1 + 0x1c20);
    if (plVar5 == (longlong *) 0x0) {
        if (*(longlong * )(param_1 + 0x1c28) != 0) goto LAB_140274f2c;
    } else {
        do {
            puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffff98 = (&PTR_u_Scratch_140b60e18)[(int) puVar2[2]];
            in_stack_ffffffffffffff90 = (&PTR_DAT_140b60e38)[(int) puVar2[1]];
            in_stack_ffffffffffffff88 =
                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
            FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98);
            plVar5 = (longlong *) plVar5[8];
        } while (plVar5 != (longlong *) 0x0);
        LAB_140274f2c:
        for (plVar5 = *(longlong * *)(param_1 + 0x1c28); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[8]) {
            puVar2 = (uint * )(**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffff98 = (&PTR_u_Scratch_140b60e18)[(int) puVar2[2]];
            in_stack_ffffffffffffff90 = (&PTR_DAT_140b60e38)[(int) puVar2[1]];
            in_stack_ffffffffffffff88 =
                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong) * puVar2;
            FUN_1400035b0(0xe, 1, 0, plVar5, in_stack_ffffffffffffff88, in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98);
        }
    }
    plVar5 = *(longlong * *)(param_1 + 0x1c30);
    if (plVar5 == (longlong *) 0x0) {
        if ((*(longlong * )(param_1 + 0x1c38) != 0) || (*(longlong * )(param_1 + 0x1c40) != 0))
            goto LAB_140275078;
    } else {
        do {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            in_stack_ffffffffffffffe0 = &DAT_1409e3e2c;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                in_stack_ffffffffffffffe0 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10];
            in_stack_ffffffffffffffd0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffd0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9]);
            in_stack_ffffffffffffffc8 = (&PTR_u_Point_140c587d0)[piVar3[8]];
            in_stack_ffffffffffffffb8 = (&PTR_u_A8R8G8B8_140c58840)[piVar3[6]];
            in_stack_ffffffffffffffb0 =
                    in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[5];
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x11));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c58790)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[2], piVar3[4], in_stack_ffffffffffffffb0,
                          in_stack_ffffffffffffffb8, (&PTR_u_Scratch_140c58810)[piVar3[7]],
                          in_stack_ffffffffffffffc8, in_stack_ffffffffffffffd0, in_stack_ffffffffffffffd8,
                          in_stack_ffffffffffffffe0);
            plVar5 = (longlong *) plVar5[0x1f];
        } while (plVar5 != (longlong *) 0x0);
        LAB_140275078:
        for (plVar5 = *(longlong * *)(param_1 + 0x1c38); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[0x1d]) {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            puVar6 = &DAT_1409e3de4;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                puVar6 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffe0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffe0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10]);
            in_stack_ffffffffffffffd8 =
                    in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9];
            in_stack_ffffffffffffffd0 = (&PTR_u_Point_140c587d0)[piVar3[8]];
            in_stack_ffffffffffffffc8 = (&PTR_u_Scratch_140c58810)[piVar3[7]];
            in_stack_ffffffffffffffb8 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffb8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[5]);
            in_stack_ffffffffffffffb0 =
                    in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[4];
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x10));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c58790)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[2], piVar3[3], in_stack_ffffffffffffffb0,
                          in_stack_ffffffffffffffb8, (&PTR_u_A8R8G8B8_140c58840)[piVar3[6]],
                          in_stack_ffffffffffffffc8, in_stack_ffffffffffffffd0, in_stack_ffffffffffffffd8,
                          in_stack_ffffffffffffffe0, puVar6);
        }
        for (plVar5 = *(longlong * *)(param_1 + 0x1c40); plVar5 != (longlong *) 0x0;
             plVar5 = (longlong *) plVar5[0x2e]) {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            puVar6 = &DAT_1409e3dc4;
            if (*(undefined * *)(piVar3 + 0xc) != (undefined *) 0x0) {
                puVar6 = *(undefined * *)(piVar3 + 0xc);
            }
            in_stack_ffffffffffffffd0 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffd0 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[10]);
            in_stack_ffffffffffffffc8 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[9]);
            in_stack_ffffffffffffff98 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff98 & 0xffffffff00000000 | (ulonglong)(uint)
            piVar3[1]);
            in_stack_ffffffffffffff90 =
                    (undefined * )
                            ((ulonglong) in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                             (ulonglong) * (uint * )(plVar5 + 0x11));
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_DAT_140c58790)[*piVar3], in_stack_ffffffffffffff90,
                          in_stack_ffffffffffffff98, piVar3[4], piVar3[5],
                          (&PTR_u_A8R8G8B8_140c58840)[piVar3[6]], (&PTR_u_Scratch_140c58810)[piVar3[7]],
                          (&PTR_u_Point_140c587d0)[piVar3[8]], in_stack_ffffffffffffffc8,
                          in_stack_ffffffffffffffd0, puVar6);
        }
    }
    plVar5 = *(longlong * *)(param_1 + 0x1c48);
    if (plVar5 == (longlong *) 0x0) {
        if (*(longlong * )(param_1 + 0x1c50) == 0) goto LAB_1402752d3;
    } else {
        do {
            piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
            FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_u_VS30_140c587a8)[*piVar3], *(undefined8 * )(piVar3 + 2));
            plVar5 = (longlong *) plVar5[0x13];
        } while (plVar5 != (longlong *) 0x0);
    }
    for (plVar5 = *(longlong * *)(param_1 + 0x1c50); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x13]) {
        piVar3 = (int *) (**(code * *)(*plVar5 + 0x18))(plVar5);
        FUN_1400035b0(0xe, 1, 0, plVar5, (&PTR_u_VS30_140c587a8)[*piVar3], *(undefined8 * )(piVar3 + 2));
    }
    LAB_1402752d3:
    for (plVar5 = *(longlong * *)(param_1 + 0x1c58); plVar5 != (longlong *) 0x0;
         plVar5 = (longlong *) plVar5[0x10]) {
        puVar4 = (undefined8 * )(**(code * *)(*plVar5 + 0x18))(plVar5);
        FUN_1400035b0(0xe, 1, 0, plVar5, *puVar4);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1c60); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x38)) {
        FUN_1400035b0(0xe);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1c68); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x20)) {
        FUN_1400035b0(0xe);
    }
    for (lVar1 = *(longlong * )(param_1 + 0x1c70); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0xf8)) {
        FUN_1400035b0(0xe);
    }
    return;
}


undefined8 *FUN_1402756a0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xfb);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = FUN_1402883c0;
    param_1[4] = FUN_140288450;
    return param_1;
}


undefined8 *FUN_140275720(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xfb);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140265f10;
    param_1[4] = FUN_140265f20;
    return param_1;
}


undefined8 *FUN_1402757a0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x3d);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140265f10;
    param_1[4] = FUN_140265f20;
    return param_1;
}


void FUN_140275820(longlong *param_1, ulonglong param_2) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_2 < (ulonglong) param_1[1]) {
        uVar5 = param_2;
        if ((ulonglong) param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        do {
            plVar1 = *(longlong * *)(*param_1 + uVar5 * 8);
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 0x10))();
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong) param_1[1]);
    } else {
        lVar2 = FUN_14018db00(*param_1, param_2, 8);
        uVar6 = 0;
        uVar5 = param_1[1];
        if (uVar5 < param_2) {
            puVar3 = (undefined8 * )(lVar2 + uVar5 * 8);
            lVar4 = param_2 - uVar5;
            do {
                if (puVar3 != (undefined8 *) 0x0) {
                    *puVar3 = 0;
                }
                puVar3 = puVar3 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
        if (*param_1 != lVar2) {
            if (param_1[1] != 0) {
                do {
                    puVar3 = (undefined8 * )(lVar2 + uVar6 * 8);
                    if (puVar3 != (undefined8 *) 0x0) {
                        lVar4 = *param_1;
                        *puVar3 = *(undefined8 * )(lVar4 + uVar6 * 8);
                        *(undefined8 * )(lVar4 + uVar6 * 8) = 0;
                    }
                    plVar1 = *(longlong * *)(*param_1 + uVar6 * 8);
                    if (plVar1 != (longlong *) 0x0) {
                        (**(code * *)(*plVar1 + 0x10))();
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (ulonglong) param_1[1]);
            }
            lVar4 = *param_1;
            if (lVar4 != 0) {
                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *param_1 = lVar2;
        }
    }
    param_1[1] = param_2;
    return;
}


void FUN_140275940(longlong *param_1) {
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (param_1[1] == 0) {
        param_1[1] = 0;
        return;
    }
    do {
        plVar1 = *(longlong * *)(*param_1 + uVar2 * 8);
        if (plVar1 != (longlong *) 0x0) {
            (**(code * *)(*plVar1 + 0x10))();
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong) param_1[1]);
    param_1[1] = 0;
    return;
}


void FUN_1402759a0(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong) param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1, param_2, 0x28);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2, *param_1, param_1[1] * 0x28);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}


undefined8 *FUN_140275a30(undefined8 *param_1) {
    longlong lVar1;
    undefined8 *puVar2;

    FUN_1402630a0();
    *param_1 = &PTR_LAB_140b61270;
    param_1[0x30e] = 0;
    param_1[0x30f] = 0;
    param_1[0x310] = 0;
    param_1[0x311] = 0;
    param_1[0x313] = 0;
    param_1[0x312] = 0;
    param_1[0x314] = 0;
    param_1[0x315] = 0;
    param_1[0x316] = 0;
    param_1[0x317] = 0;
    param_1[0x318] = 0;
    param_1[0x319] = 0;
    param_1[0x31a] = 0;
    param_1[0x31b] = 0;
    param_1[0x31c] = 0;
    param_1[0x31d] = 0;
    param_1[0x31e] = 0;
    param_1[799] = 0;
    param_1[0x34f] = 0;
    param_1[0x350] = 0;
    param_1[0x351] = 0;
    param_1[0x352] = 0;
    param_1[0x353] = 0;
    param_1[0x354] = 0;
    param_1[0x355] = 0;
    param_1[0x356] = 0;
    param_1[0x357] = 0;
    param_1[0x358] = 0;
    param_1[0x359] = 0;
    param_1[0x35a] = 0;
    param_1[0x35b] = 0;
    param_1[0x35c] = 0;
    param_1[0x35d] = 0;
    param_1[0x35e] = 0;
    param_1[0x35f] = 0;
    param_1[0x360] = 0;
    param_1[0x361] = 0;
    param_1[0x362] = 0;
    FUN_140264aa0(param_1 + 0x363);
    FUN_1402756a0(param_1 + 0x368);
    FUN_1402756a0(param_1 + 0x36d);
    FUN_140275720(param_1 + 0x372);
    FUN_140275720(param_1 + 0x377);
    FUN_1402757a0(param_1 + 0x37c);
    FUN_140282ee0(param_1 + 0x387);
    param_1[0x38c] = 0;
    FUN_140282cb0(param_1 + 0x394);
    param_1[0x399] = 0;
    param_1[0x39a] = 0;
    param_1[0x39b] = 0;
    param_1[0x39c] = 0;
    FUN_140282ab0(param_1 + 0x3be);
    param_1[0x3c3] = 0;
    param_1[0x3c4] = 0;
    param_1[0x3c5] = 0;
    param_1[0x3c6] = 0;
    param_1[0x3c7] = 0;
    param_1[0x3c8] = 0;
    param_1[0x3c9] = 0;
    puVar2 = param_1 + 0x3ca;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    param_1[0x3da] = 0;
    param_1[0x3df] = 0;
    param_1[0x3e0] = 0;
    param_1[0x3e1] = 0;
    param_1[0x3e2] = 0;
    puVar2 = param_1 + 0x3e3;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    param_1[0x3f3] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fe] = 0;
    param_1[0x401] = 0;
    param_1[0x403] = 0;
    param_1[0x405] = 0;
    param_1[0x424] = 0;
    param_1[0x426] = 0;
    param_1[0x430] = 0;
    param_1[0x42f] = 0;
    param_1[0x431] = 0;
    param_1[0x432] = 0;
    param_1[0x433] = 0;
    *(undefined4 * )((longlong) param_1 + 0x1864) = 0;
    param_1[0x438] = 0;
    param_1[0x439] = 0;
    param_1[0x43a] = 0;
    FUN_1407e4830(param_1 + 0x337, 0, 0xb8);
    *(undefined4 * )(param_1 + 0x30d) = 0;
    *(undefined4 * )((longlong) param_1 + 0x186c) = 1;
    FUN_1407e4830(param_1 + 0x406, 0, 0x68);
    *(undefined4 * )(param_1 + 0x413) = 0xffffffff;
    FUN_1407e4830(param_1 + 0x414, 0, 0x68);
    param_1[0x42b] = 0;
    param_1[0x42d] = 0;
    *(undefined4 * )(param_1 + 0x421) = 0xffffffff;
    *(undefined4 * )(param_1 + 0x42e) = 1;
    return param_1;
}


undefined8 FUN_140275d70(undefined8 param_1, ulonglong param_2) {
    FUN_140275db0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140275db0(undefined8 *param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong **pplVar8;
    undefined8 *puVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    *param_1 = &PTR_LAB_140b61270;
    iVar10 = 1;
    if (param_1[0x34f] != 0) {
        (**(code * *)(*(longlong *) param_1[0x354] + 0x10))((longlong *) param_1[0x354], 1);
        (**(code * *)(*(longlong *) param_1[0x34f] + 0x30))((longlong *) param_1[0x34f], 0xffffffff);
    }
    FUN_1402773e0(param_1, 0);
    FUN_140281c30(param_1);
    uVar6 = 0;
    if ((longlong *) param_1[0x31a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x31a] + 0x10))();
        param_1[0x31a] = 0;
    }
    if ((longlong *) param_1[0x31b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x31b] + 0x10))();
        param_1[0x31b] = 0;
    }
    if ((longlong *) param_1[0x318] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x318] + 0x10))();
        param_1[0x318] = 0;
    }
    if ((longlong *) param_1[0x319] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x319] + 0x10))();
        param_1[0x319] = 0;
    }
    if ((longlong *) param_1[0x314] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x314] + 0x10))();
        param_1[0x314] = 0;
    }
    if ((longlong *) param_1[0x315] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x315] + 0x10))();
        param_1[0x315] = 0;
    }
    uVar7 = uVar6;
    if (param_1[0x313] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x312] + uVar7 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 0x10))();
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_1[0x313]);
    }
    param_1[0x313] = 0;
    if ((longlong *) param_1[0x30f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x30f] + 0x10))();
        param_1[0x30f] = 0;
    }
    if ((longlong *) param_1[0x310] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x310] + 0x10))();
        param_1[0x310] = 0;
    }
    if ((longlong *) param_1[0x311] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x311] + 0x10))();
        param_1[0x311] = 0;
    }
    if ((HMODULE) param_1[0x43a] != (HMODULE) 0x0) {
        FreeLibrary((HMODULE) param_1[0x43a]);
    }
    if ((HMODULE) param_1[0x439] != (HMODULE) 0x0) {
        FreeLibrary((HMODULE) param_1[0x439]);
    }
    if ((HMODULE) param_1[0x438] != (HMODULE) 0x0) {
        FreeLibrary((HMODULE) param_1[0x438]);
    }
    DestroyIcon((HICON) param_1[0x42d]);
    puVar9 = param_1 + 0x337;
    lVar5 = 0x17;
    do {
        FUN_14018b900(*puVar9, 0);
        puVar9 = puVar9 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*(int *) ((longlong) param_1 + 0x1864) != 0) {
        CoUninitialize();
    }
    if (param_1[0x433] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x432] != 0) {
        FUN_1401a4a00();
    }
    if ((longlong *) param_1[0x431] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x431] + 8))();
    }
    uVar7 = uVar6;
    if (param_1[0x430] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x42f] + uVar7 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 0x10))();
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_1[0x430]);
    }
    lVar5 = param_1[0x42f];
    if (lVar5 != 0) {
        (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if ((longlong *) param_1[0x426] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x426] + 0x10))();
    }
    if ((longlong *) param_1[0x424] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x424] + 0x10))();
    }
    if ((longlong *) param_1[0x405] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x405] + 8))();
    }
    if ((longlong *) param_1[0x403] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x403] + 8))();
    }
    if ((longlong *) param_1[0x401] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x401] + 8))();
    }
    if ((longlong *) param_1[0x3fe] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x3fe] + 8))();
    }
    if ((longlong *) param_1[0x3fa] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x3fa] + 0x10))();
    }
    if ((longlong *) param_1[0x3f6] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x3f6] + 0x10))();
    }
    pplVar8 = (longlong * *)(param_1 + 0x3f3);
    if (*pplVar8 != (longlong *) 0x0) {
        (**(code * *)(**pplVar8 + 8))();
    }
    iVar11 = 0xf;
    iVar3 = 0xf;
    do {
        pplVar1 = pplVar8 + -1;
        pplVar8 = pplVar8 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar12 = 3;
    puVar9 = param_1 + 0x3e3;
    iVar4 = 3;
    iVar3 = 3;
    do {
        pplVar8 = (longlong * *)(puVar9 + -1);
        puVar9 = puVar9 + -1;
        if (*pplVar8 != (longlong *) 0x0) {
            (**(code * *)(**pplVar8 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    pplVar8 = (longlong * *)(param_1 + 0x3da);
    if (*pplVar8 != (longlong *) 0x0) {
        (**(code * *)(**pplVar8 + 8))();
    }
    do {
        pplVar1 = pplVar8 + -1;
        pplVar8 = pplVar8 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    puVar9 = param_1 + 0x3ca;
    do {
        pplVar8 = (longlong * *)(puVar9 + -1);
        puVar9 = puVar9 + -1;
        if (*pplVar8 != (longlong *) 0x0) {
            (**(code * *)(**pplVar8 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    pplVar8 = (longlong * *)(param_1 + 0x3c5);
    if (*pplVar8 != (longlong *) 0x0) {
        (**(code * *)(**pplVar8 + 0x10))();
    }
    do {
        pplVar1 = pplVar8 + -1;
        pplVar8 = pplVar8 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 0x10))();
        }
        iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    FUN_140282c10(param_1 + 0x3be);
    FUN_14018b900(param_1[0x3c0], 0);
    param_1[0x3c0] = 0;
    puVar9 = param_1 + 0x39d;
    do {
        pplVar8 = (longlong * *)(puVar9 + -1);
        puVar9 = puVar9 + -1;
        if (*pplVar8 != (longlong *) 0x0) {
            (**(code * *)(**pplVar8 + 0x10))();
        }
        iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    FUN_140282e50(param_1 + 0x394);
    FUN_14018b900(param_1[0x396], 0);
    param_1[0x396] = 0;
    if ((longlong *) param_1[0x38c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x38c] + 0x10))();
    }
    FUN_140283040(param_1 + 0x387);
    FUN_14018b900(param_1[0x389], 0);
    param_1[0x389] = 0;
    FUN_140019490(param_1 + 0x37c);
    FUN_14018b900(param_1[0x37e], 0);
    param_1[0x37e] = 0;
    FUN_140019490(param_1 + 0x377);
    FUN_14018b900(param_1[0x379], 0);
    param_1[0x379] = 0;
    FUN_140019490(param_1 + 0x372);
    FUN_14018b900(param_1[0x374], 0);
    param_1[0x374] = 0;
    FUN_140019490(param_1 + 0x36d);
    FUN_14018b900(param_1[0x36f], 0);
    param_1[0x36f] = 0;
    FUN_140019490(param_1 + 0x368);
    FUN_14018b900(param_1[0x36a], 0);
    param_1[0x36a] = 0;
    FUN_140019490(param_1 + 0x363);
    FUN_14018b900(param_1[0x365], 0);
    param_1[0x365] = 0;
    if (param_1[0x362] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x361] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x360] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35f] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35e] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35c] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35b] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x35a] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x359] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x358] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x357] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x356] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x355] != 0) {
        FUN_1401a4a00();
    }
    if ((longlong *) param_1[0x354] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x354] + 8))();
    }
    if (param_1[0x353] != 0) {
        CloseHandle((HANDLE) param_1[0x353]);
    }
    if ((longlong *) param_1[0x34f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x34f] + 8))();
    }
    if (param_1[799] != 0) {
        CloseHandle((HANDLE) param_1[799]);
    }
    if ((longlong *) param_1[0x31b] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x31b] + 0x10))();
    }
    if ((longlong *) param_1[0x31a] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x31a] + 0x10))();
    }
    if ((longlong *) param_1[0x319] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x319] + 0x10))();
    }
    if ((longlong *) param_1[0x318] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x318] + 0x10))();
    }
    if ((longlong *) param_1[0x317] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x317] + 0x10))();
    }
    if ((longlong *) param_1[0x316] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x316] + 0x10))();
    }
    if ((longlong *) param_1[0x315] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x315] + 0x10))();
    }
    if ((longlong *) param_1[0x314] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x314] + 0x10))();
    }
    if (param_1[0x313] != 0) {
        do {
            plVar2 = *(longlong * *)(param_1[0x312] + uVar6 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 0x10))();
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong) param_1[0x313]);
    }
    lVar5 = param_1[0x312];
    if (lVar5 != 0) {
        (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if ((longlong *) param_1[0x311] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x311] + 0x10))();
    }
    if ((longlong *) param_1[0x310] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x310] + 0x10))();
    }
    if ((longlong *) param_1[0x30f] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x30f] + 0x10))();
    }
    FUN_1401981b0(param_1 + 0x30e);
    if (param_1[0x30e] != 0) {
        FUN_1401a4a00(param_1 + 0x30e);
    }
    FUN_1402632f0(param_1);
    return;
}


int FUN_1402765b0(longlong *param_1, undefined4 param_2) {
    int iVar1;
    int iVar2;
    undefined *local_38;
    undefined4 local_30;
    undefined4 local_2c;
    longlong *local_28;
    undefined *local_20;
    undefined8 local_18;
    undefined4 local_10;

    *(undefined4 * )(param_1 + 0x30c) = param_2;
    iVar1 = FUN_1401a1120(param_1 + 0x354, 0);
    if (-1 < iVar1) {
        local_38 = &DAT_1409e3e74;
        local_30 = 2;
        local_2c = 2;
        local_20 = &LAB_140279ba0;
        local_18 = 0;
        local_10 = 1;
        local_28 = param_1;
        iVar1 = FUN_1401a0eb0(&local_38);
        if ((-1 < iVar1) && (iVar1 = CoInitialize((LPVOID) 0x0), -1 < iVar1)) {
            *(undefined4 * )((longlong) param_1 + 0x1864) = 1;
            iVar1 = FUN_140276670(param_1);
            if ((-1 < iVar1) &&
                (iVar2 = (**(code * *)(*param_1 + 0x28))(param_1, param_1 + 7), iVar1 = 0, iVar2 < 0)) {
                iVar1 = iVar2;
            }
        }
    }
    return iVar1;
}


void FUN_140276670(longlong param_1) {
    WCHAR WVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined *puVar4;
    WCHAR *pWVar5;
    UINT UVar6;
    DWORD DVar7;
    int iVar8;
    HMODULE pHVar9;
    INT_PTR IVar10;
    WCHAR *pWVar11;
    ulonglong uVar12;
    uint *puVar13;
    uint uVar14;
    HMODULE pHVar15;
    undefined **ppuVar16;
    longlong lVar17;
    int *piVar18;
    int iVar19;
    longlong lVar20;
    undefined4 *puVar21;
    longlong *plVar22;
    undefined auStack632[32];
    longlong *local_258;
    longlong *local_250;
    WCHAR local_248[264];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack632;
    UVar6 = GetSystemDirectoryW(local_248, 0x104);
    pHVar15 = (HMODULE) 0x0;
    iVar8 = 0;
    pHVar9 = pHVar15;
    if (UVar6 != 0) {
        iVar19 = FUN_14001b370(local_248 + UVar6, 0x104 - (ulonglong) UVar6, &DAT_140a43680, L"dxgi.dll");
        if (iVar19 < 0) {
            pHVar9 = (HMODULE) 0x0;
        } else {
            pHVar9 = LoadLibraryW(local_248);
        }
    }
    *(HMODULE * )(param_1 + 0x21c0) = pHVar9;
    if ((pHVar9 == (HMODULE) 0x0) ||
        ((DAT_140c65780 = GetProcAddress(pHVar9, "CreateDXGIFactory1"), DAT_140c65780 == (FARPROC) 0x0 &&
                                                                        (DAT_140c65778 = GetProcAddress(
                                                                                *(HMODULE * )(param_1 + 0x21c0),
                                                                                "CreateDXGIFactory"),
                                                                                DAT_140c65778 == (FARPROC) 0x0))))
        goto LAB_140276b92;
    UVar6 = GetSystemDirectoryW(local_248, 0x104);
    pHVar9 = pHVar15;
    if ((UVar6 != 0) &&
        (iVar19 = FUN_14001b370(local_248 + UVar6, 0x104 - (ulonglong) UVar6, &DAT_140a43680, L"d3d11.dll")
                , -1 < iVar19)) {
        pHVar9 = LoadLibraryW(local_248);
    }
    *(HMODULE * )(param_1 + 0x21c8) = pHVar9;
    if ((pHVar9 == (HMODULE) 0x0) ||
        (DAT_140c65788 = GetProcAddress(pHVar9, "D3D11CreateDevice"), DAT_140c65788 == (FARPROC) 0x0))
        goto LAB_140276b92;
    DVar7 = GetModuleFileNameW((HMODULE) 0x0, local_248, 0x104);
    do {
        uVar2 = DVar7;
        if (uVar2 == 0) break;
        DVar7 = uVar2 - 1;
    } while (local_248[uVar2 - 1] != L'\\');
    uVar14 = 0x104 - uVar2;
    uVar12 = (ulonglong) uVar14;
    pWVar11 = local_248 + uVar2;
    if (0x7ffffffe < uVar12 - 1) {
        iVar8 = -0x7ff8ffa9;
    }
    if (iVar8 < 0) {
        if (uVar14 != 0) goto LAB_140276866;
    } else {
        if (uVar14 == 0) {
            LAB_140276856:
            pWVar11 = pWVar11 + -1;
            iVar8 = -0x7ff8ff86;
        } else {
            lVar17 = 0x7ffffffe - uVar12;
            lVar20 = (longlong) L"d3dx11_43.dll" - (longlong) pWVar11;
            pWVar5 = pWVar11;
            do {
                pWVar11 = pWVar5;
                if ((uVar12 + lVar17 == 0) ||
                    (WVar1 = *(WCHAR * )((longlong) pWVar11 + lVar20), WVar1 == L'\0')) {
                    iVar8 = 0;
                    if (uVar12 != 0) goto LAB_140276866;
                    goto LAB_140276856;
                }
                *pWVar11 = WVar1;
                uVar12 = uVar12 - 1;
                pWVar5 = pWVar11 + 1;
            } while (uVar12 != 0);
            iVar8 = -0x7ff8ff86;
        }
        LAB_140276866:
        *pWVar11 = L'\0';
    }
    pHVar9 = pHVar15;
    if (-1 < iVar8) {
        pHVar9 = LoadLibraryW(local_248);
    }
    *(HMODULE * )(param_1 + 0x21d0) = pHVar9;
    if (((pHVar9 != (HMODULE) 0x0) &&
         (DAT_140c65790 = GetProcAddress(pHVar9, "D3DX11LoadTextureFromTexture"),
                 DAT_140c65790 != (FARPROC) 0x0)) &&
        (DAT_140c65798 = GetProcAddress(*(HMODULE * )(param_1 + 0x21d0), "D3DX11SHProjectCubeMap"),
                DAT_140c65798 != (FARPROC) 0x0)) {
        if (DAT_140c65780 == (FARPROC) 0x0) {
            IVar10 = (*DAT_140c65778)(&DAT_140b61250, param_1 + 0x1878);
            if ((int) IVar10 < 0) goto LAB_140276b92;
            local_258 = (longlong *) 0x0;
            iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x1878) + 0x38))
                    (*(longlong * *)(param_1 + 0x1878), 0, &local_258);
            while (-1 < iVar8) {
                FUN_1402826c0(param_1 + 0x1890, &local_258);
                if (local_258 != (longlong *) 0x0) {
                    (**(code * *)(*local_258 + 0x10))();
                }
                local_258 = (longlong *) 0x0;
                pHVar15 = (HMODULE)(ulonglong)((int) pHVar15 + 1);
                iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x1878) + 0x38))
                        (*(longlong * *)(param_1 + 0x1878), pHVar15, &local_258);
            }
        } else {
            IVar10 = (*DAT_140c65780)(&DAT_140b61260, param_1 + 0x1880);
            if ((int) IVar10 < 0) goto LAB_140276b92;
            (**(code * *) * *(undefined8 * *)(param_1 + 0x1880))
                    (*(undefined8 * *)(param_1 + 0x1880), &DAT_140b61240, param_1 + 0x1888);
            FUN_140282570(param_1 + 0x1878, *(undefined8 * )(param_1 + 0x1880));
            local_258 = (longlong *) 0x0;
            iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x1880) + 0x60))
                    (*(longlong * *)(param_1 + 0x1880), 0, &local_258);
            while (-1 < iVar8) {
                local_250 = local_258;
                if (local_258 != (longlong *) 0x0) {
                    (**(code * *)(*local_258 + 8))();
                }
                FUN_140282790(param_1 + 0x1890, &local_250);
                if (local_250 != (longlong *) 0x0) {
                    (**(code * *)(*local_250 + 0x10))();
                }
                if (local_258 != (longlong *) 0x0) {
                    (**(code * *)(*local_258 + 0x10))();
                }
                local_258 = (longlong *) 0x0;
                pHVar15 = (HMODULE)(ulonglong)((int) pHVar15 + 1);
                iVar8 = (**(code * *)(**(longlong * *)(param_1 + 0x1880) + 0x60))
                        (*(longlong * *)(param_1 + 0x1880), pHVar15, &local_258);
            }
        }
        if (local_258 != (longlong *) 0x0) {
            (**(code * *)(*local_258 + 0x10))();
        }
        ppuVar16 = &PTR_DAT_140c38350;
        puVar13 = &DAT_140ae5d90;
        lVar17 = 0x17;
        plVar22 = (longlong * )(param_1 + -0x140c36998);
        local_250 = plVar22;
        do {
            uVar2 = *puVar13;
            puVar4 = *ppuVar16;
            uVar12 = (ulonglong) uVar2;
            lVar20 = FUN_14018b280();
            iVar8 = -1;
            iVar19 = 0;
            if (uVar2 != 0) {
                piVar18 = (int *) (puVar4 + 0xc);
                puVar21 = (undefined4 * )(lVar20 + 0xc);
                do {
                    if (iVar8 != piVar18[-1]) {
                        iVar19 = 0;
                        iVar8 = piVar18[-1];
                    }
                    *(undefined * *)(puVar21 + -3) = (&PTR_s_POSITION_140ae7f00)[piVar18[-3]];
                    puVar21[-1] = *(undefined4 * )(&UNK_140ae7d50 + (longlong) piVar18[-3] * 4);
                    uVar3 = *(undefined4 * )(&UNK_140ae7d28 + (longlong) piVar18[-2] * 4);
                    puVar21[1] = iVar8;
                    puVar21[2] = iVar19;
                    *puVar21 = uVar3;
                    puVar21[3] = *(undefined4 * )(&DAT_140ae7d98 + (longlong) * piVar18 * 4);
                    puVar21[4] = *(undefined4 * )(&DAT_140ae7da0 + (longlong) * piVar18 * 4);
                    iVar19 = iVar19 + *(int *) (&DAT_140ae4d78 + (longlong) piVar18[-2] * 4);
                    uVar12 = uVar12 - 1;
                    piVar18 = piVar18 + 4;
                    puVar21 = puVar21 + 8;
                    plVar22 = local_250;
                } while (uVar12 != 0);
            }
            *(longlong * )((longlong) plVar22 + (longlong) ppuVar16) = lVar20;
            ppuVar16 = ppuVar16 + 1;
            puVar13 = puVar13 + 1;
            lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
    }
    LAB_140276b92:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack632);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140276df0(longlong param_1, longlong *param_2) {
    int iVar1;
    undefined auStack344[32];
    undefined *local_138;
    int local_130;
    undefined4 local_128;
    longlong **local_120;
    undefined4 *local_118;
    longlong **local_110;
    longlong *local_108;
    longlong *local_100;
    longlong *local_f8;
    longlong *local_f0;
    longlong *local_e8;
    undefined8 local_e0;
    undefined4 local_d8[2];
    longlong *local_d0;
    longlong *local_c8[2];
    undefined local_b8[80];
    undefined4 local_68;
    undefined *local_60;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined8 local_38;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack344;
    local_f8 = (longlong *) 0x0;
    (**(code * *) * param_2)(param_2, &DAT_140b61210, &local_f8);
    local_138 = &DAT_140b61228;
    local_100 = (longlong *) 0x0;
    local_130 = (*(longlong * )(param_1 + 0x1888) != 0) + 1;
    local_110 = &local_e8;
    if (*(longlong * )(param_1 + 0x1888) != 0) {
        local_138 = &DAT_140b61220;
    }
    local_118 = local_d8;
    local_120 = &local_100;
    local_128 = 7;
    local_e8 = (longlong *) 0x0;
    iVar1 = (*DAT_140c65788)(param_2, 0, 0, 0x80);
    if (-1 < iVar1) {
        local_108 = (longlong *) 0x0;
        local_f0 = (longlong *) 0x0;
        FUN_1407e4830(&local_58, 0, 0x38);
        local_e0 = 0;
        iVar1 = (**(code * *) * local_100)(local_100, &DAT_140b61230, &local_108);
        if (-1 < iVar1) {
            (**(code * *)(*local_108 + 0x158))(local_108, &local_f0);
            (**(code * *)(*local_108 + 0x108))(local_108, 5, &local_58, 0x38);
            (**(code * *)(*local_108 + 0x108))(local_108, 0, &local_e0, 8);
        }
        if ((DAT_140c65694 != 0) && (_DAT_140c65698 < 0x81c5)) {
            local_38 = 0;
        }
        *(undefined4 * )(param_1 + 0x1a70) = 0;
        iVar1 = (**(code * *) * local_100)(local_100, &DAT_140b611f0, &local_d0);
        if (-1 < iVar1) {
            iVar1 = (**(code * *) * local_d0)(local_d0, &DAT_140b61200, local_c8);
            if (-1 < iVar1) {
                FUN_1407e4830(local_b8, 0, 0x60);
                local_68 = 4;
                local_60 = &DAT_140c58aa0;
                (**(code * *)(*local_c8[0] + 0x60))(local_c8[0], local_b8);
                (**(code * *)(*local_c8[0] + 0x10))();
            }
            (**(code * *)(*local_d0 + 0x10))();
            *(undefined4 * )(param_1 + 0x1a70) = 1;
        }
        iVar1 = FUN_1402773e0(param_1, 0);
        if (-1 < iVar1) {
            *(undefined4 * )(param_1 + 0x1900) = local_d8[0];
            *(undefined4 * )(param_1 + 0x1904) = local_58;
            *(undefined4 * )(param_1 + 0x1908) = local_54;
            *(undefined4 * )(param_1 + 0x190c) = local_50;
            *(undefined4 * )(param_1 + 0x1910) = local_4c;
            *(undefined4 * )(param_1 + 0x1914) = local_48;
            *(undefined4 * )(param_1 + 0x1918) = local_44;
            *(undefined4 * )(param_1 + 0x191c) = local_40;
            *(undefined4 * )(param_1 + 0x1920) = local_3c;
            *(undefined4 * )(param_1 + 0x1924) = (undefined4) local_38;
            *(undefined4 * )(param_1 + 0x1928) = local_38._4_4_;
            *(undefined4 * )(param_1 + 0x192c) = local_30;
            *(undefined4 * )(param_1 + 0x1930) = local_2c;
            *(undefined4 * )(param_1 + 0x1934) = local_28;
            *(undefined4 * )(param_1 + 0x1938) = local_24;
            *(undefined8 * )(param_1 + 0x193c) = local_e0;
            if (*(longlong * *)(param_1 + 0x18d0) != local_e8) {
                if (local_e8 != (longlong *) 0x0) {
                    (**(code * *)(*local_e8 + 8))(local_e8);
                }
                if (*(longlong * *)(param_1 + 0x18d0) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0x10))();
                }
                *(longlong * *)(param_1 + 0x18d0) = local_e8;
            }
            if (*(longlong * *)(param_1 + 0x18d8) != local_f0) {
                if (local_f0 != (longlong *) 0x0) {
                    (**(code * *)(*local_f0 + 8))(local_f0);
                }
                if (*(longlong * *)(param_1 + 0x18d8) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x18d8) + 0x10))();
                }
                *(longlong * *)(param_1 + 0x18d8) = local_f0;
            }
            if (*(longlong * *)(param_1 + 0x18c0) != local_100) {
                if (local_100 != (longlong *) 0x0) {
                    (**(code * *)(*local_100 + 8))(local_100);
                }
                if (*(longlong * *)(param_1 + 0x18c0) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x10))();
                }
                *(longlong * *)(param_1 + 0x18c0) = local_100;
            }
            if (*(longlong * *)(param_1 + 0x18c8) != local_108) {
                if (local_108 != (longlong *) 0x0) {
                    (**(code * *)(*local_108 + 8))(local_108);
                }
                if (*(longlong * *)(param_1 + 0x18c8) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x18c8) + 0x10))();
                }
                *(longlong * *)(param_1 + 0x18c8) = local_108;
            }
            if (*(longlong * *)(&DAT_000018a0 + param_1) != param_2) {
                (**(code * *)(*param_2 + 8))(param_2);
                if (*(longlong * *)(&DAT_000018a0 + param_1) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(&DAT_000018a0 + param_1) + 0x10))();
                }
                *(longlong * *)(&DAT_000018a0 + param_1) = param_2;
            }
            if (*(longlong * *)(param_1 + 0x18a8) != local_f8) {
                if (local_f8 != (longlong *) 0x0) {
                    (**(code * *)(*local_f8 + 8))(local_f8);
                }
                if (*(longlong * *)(param_1 + 0x18a8) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(param_1 + 0x18a8) + 0x10))();
                }
                *(longlong * *)(param_1 + 0x18a8) = local_f8;
            }
            *(undefined4 * )(param_1 + 0x186c) = 0;
            FUN_1402773e0(param_1, 1);
        }
        if (local_f0 != (longlong *) 0x0) {
            (**(code * *)(*local_f0 + 0x10))();
        }
        if (local_108 != (longlong *) 0x0) {
            (**(code * *)(*local_108 + 0x10))();
        }
    }
    if (local_e8 != (longlong *) 0x0) {
        (**(code * *)(*local_e8 + 0x10))();
    }
    if (local_100 != (longlong *) 0x0) {
        (**(code * *)(*local_100 + 0x10))();
    }
    if (local_f8 != (longlong *) 0x0) {
        (**(code * *)(*local_f8 + 0x10))();
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack344);
    return;
}


int FUN_140277280(longlong *param_1, longlong *param_2, longlong *param_3) {
    int iVar1;
    int iVar2;
    longlong *local_res10;

    local_res10 = (longlong *) 0x0;
    (**(code * *) * param_2)(param_2, &DAT_140b611e0, &local_res10);
    iVar1 = FUN_1402773e0(param_1, 1);
    if (-1 < iVar1) {
        if ((longlong *) param_1[0x431] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[0x431] + 8))();
            param_1[0x431] = 0;
        }
        if ((longlong *) param_1[0x316] != param_2) {
            (**(code * *)(*param_2 + 8))(param_2);
            if ((longlong *) param_1[0x316] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x316] + 0x10))();
            }
            param_1[0x316] = (longlong) param_2;
        }
        if ((longlong *) param_1[0x317] != local_res10) {
            if (local_res10 != (longlong *) 0x0) {
                (**(code * *)(*local_res10 + 8))(local_res10);
            }
            if ((longlong *) param_1[0x317] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x317] + 0x10))();
            }
            param_1[0x317] = (longlong) local_res10;
        }
        iVar1 = (**(code * *)(*param_1 + 0x30))(param_1, param_3, param_1 + 0x431);
        if (-1 < iVar1) {
            param_1[7] = *param_3;
            param_1[8] = param_3[1];
            param_1[9] = param_3[2];
            param_1[10] = param_3[3];
            param_1[0xb] = param_3[4];
            iVar1 = FUN_1402773e0(param_1, 2);
            iVar2 = 0;
            if (-1 < iVar1) goto LAB_1402773aa;
        }
    }
    iVar2 = iVar1;
    LAB_1402773aa:
    if (local_res10 != (longlong *) 0x0) {
        (**(code * *)(*local_res10 + 0x10))();
    }
    return iVar2;
}


int FUN_1402773e0(longlong param_1, int param_2) {
    DWORD *pDVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    DWORD DVar5;
    int iVar6;
    HANDLE hObject;
    ulonglong uVar7;
    ulonglong *puVar8;
    undefined8 local_res18;

    pDVar1 = (DWORD * )(param_1 + 0x18);
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    puVar8 = (ulonglong * )(param_1 + 0x20);
    if (*pDVar1 == DVar5) {
        *puVar8 = *puVar8 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar8;
            *puVar8 = *puVar8 ^ (ulonglong)(uVar2 == 0) * (*puVar8 ^ 1);
            if (uVar2 == 0) {
                *pDVar1 = DVar5;
                goto LAB_14027745a;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pDVar1);
    }
    LAB_14027745a:
    iVar6 = *(int *) (param_1 + 0x1868);
    if (iVar6 < param_2) {
        if ((((iVar6 < 1) && (0 < param_2)) && (iVar6 = FUN_140277890(param_1), iVar6 < 0)) ||
            (((*(int *) (param_1 + 0x1868) < 2 && (1 < param_2)) &&
              ((iVar6 = FUN_1402784d0(param_1), iVar6 < 0 || (iVar6 = FUN_1402786a0(param_1), iVar6 < 0)))
            )))
            goto LAB_1402777fe;
    } else if (param_2 < iVar6) {
        FUN_1401981b0(param_1 + 0x1870);
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ab0); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xa8)) {
        iVar6 = FUN_14029d910(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ab8); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x50)) {
        iVar6 = FUN_14029e7a0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ac0); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x58)) {
        iVar6 = FUN_14029f5d0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ac8); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x128)) {
        iVar6 = FUN_1402a0970(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ad0); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x120)) {
        iVar6 = FUN_1402a3ce0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ad8); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x240)) {
        iVar6 = FUN_1402a6900(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ae0); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xa0)) {
        if (*(int *) (lVar3 + 0x28) < 1) {
            if (0 < param_2) {
                iVar6 = FUN_1402a93e0(lVar3);
                goto LAB_140277619;
            }
            if (0 < *(int *) (lVar3 + 0x28)) goto LAB_14027760c;
        } else {
            LAB_14027760c:
            if (param_2 < 1) {
                iVar6 = FUN_1402a9480(lVar3);
                LAB_140277619:
                if (iVar6 < 0) goto LAB_1402777fe;
            }
        }
        *(int *) (lVar3 + 0x28) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1ae8); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x98)) {
        if (*(int *) (lVar3 + 0x28) < 1) {
            if (0 < param_2) {
                iVar6 = FUN_1402aa340(lVar3);
                goto LAB_140277669;
            }
            if (0 < *(int *) (lVar3 + 0x28)) goto LAB_14027765c;
        } else {
            LAB_14027765c:
            if (param_2 < 1) {
                iVar6 = FUN_140296900(lVar3);
                LAB_140277669:
                if (iVar6 < 0) goto LAB_1402777fe;
            }
        }
        *(int *) (lVar3 + 0x28) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1af0); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x90)) {
        iVar6 = FUN_1402ab010(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1af8); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x38)) {
        if (*(int *) (lVar3 + 0x18) < 2) {
            if (param_2 < 2) {
                if (1 < *(int *) (lVar3 + 0x18)) goto LAB_140277704;
            } else {
                local_res18 = 1;
                plVar4 = *(longlong * *)(*(longlong * )(lVar3 + 0x10) + 0x18c0);
                iVar6 = (**(code * *)(*plVar4 + 0xc0))(plVar4, &local_res18, lVar3 + 0x20);
                if (iVar6 < 0) goto LAB_1402777fe;
                *(undefined4 * )(lVar3 + 0x28) = 0;
            }
        } else {
            LAB_140277704:
            if ((param_2 < 2) && (*(longlong * *)(lVar3 + 0x20) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(lVar3 + 0x20) + 0x10))();
                *(undefined8 * )(lVar3 + 0x20) = 0;
            }
        }
        *(int *) (lVar3 + 0x18) = param_2;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1b00); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x30)) {
        iVar6 = FUN_1402ac310(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1b08); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0xf8)) {
        iVar6 = FUN_1402ac7a0(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    for (lVar3 = *(longlong * )(param_1 + 0x1b10); lVar3 != 0; lVar3 = *(longlong * )(lVar3 + 0x10)) {
        iVar6 = FUN_1402acb10(lVar3, param_2);
        if (iVar6 < 0) goto LAB_1402777fe;
    }
    if ((*(int *) (param_1 + 0x1868) <= param_2) ||
        ((((*(int *) (param_1 + 0x1868) < 2 || (1 < param_2)) ||
           ((iVar6 = FUN_140278900(param_1), -1 < iVar6 && (iVar6 = FUN_140278a70(param_1), -1 < iVar6))
           )) && (((*(int *) (param_1 + 0x1868) < 1 || (0 < param_2)) ||
                   (iVar6 = FUN_140278c20(param_1), -1 < iVar6)))))) {
        *(int *) (param_1 + 0x1868) = param_2;
        iVar6 = 0;
    }
    LAB_1402777fe:
    if (1 < *puVar8) {
        *puVar8 = *puVar8 - 1;
        return iVar6;
    }
    *pDVar1 = 0;
    *puVar8 = 0;
    if (*(longlong * )(param_1 + 0x28) != 0) {
        if (*(longlong * )(param_1 + 0x30) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar8 = (ulonglong * )(param_1 + 0x30);
            uVar7 = *puVar8;
            *puVar8 = *puVar8 ^ (ulonglong)(uVar7 == 0) * (*puVar8 ^ (ulonglong) hObject);
            if (uVar7 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(param_1 + 0x30));
    }
    return iVar6;
}


void FUN_140277890(longlong param_1) {
    undefined auVar1[16];
    int iVar2;
    uint uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    uint *puVar7;
    byte bVar8;
    undefined4 uVar9;
    longlong *plVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    undefined4 uVar14;
    bool bVar15;
    undefined extraout_XMM0[16];
    undefined auStack1192[32];
    undefined4 *local_488;
    longlong *local_478;
    longlong *local_470;
    undefined4 local_468;
    undefined4 local_464;
    undefined4 local_460[2];
    undefined8 local_458;
    undefined8 local_450;
    undefined4 *local_448;
    undefined4 local_440;
    undefined4 local_43c;
    undefined8 local_438;
    undefined8 local_430;
    undefined8 local_428;
    undefined8 local_420;
    undefined8 local_418;
    undefined8 local_410;
    undefined8 local_408;
    undefined8 local_400;
    undefined8 local_3f8;
    undefined8 local_3f0;
    undefined8 local_3e8[2];
    undefined local_3d8[16];
    undefined4 local_3c8;
    undefined4 local_3c4;
    undefined4 local_3c0;
    undefined8 local_3bc;
    undefined4 local_3b4;
    undefined4 local_3b0;
    undefined4 local_3ac;
    undefined4 local_3a8;
    undefined8 local_3a4;
    undefined4 local_39c;
    undefined4 local_398;
    undefined4 local_394;
    undefined4 local_390;
    undefined8 local_38c;
    undefined4 local_384;
    undefined4 local_380;
    undefined4 local_37c;
    undefined4 local_378;
    undefined8 local_374;
    undefined4 local_36c;
    uint local_368;
    undefined4 local_364;
    undefined4 local_360;
    uint local_35c;
    undefined2 local_358;
    undefined4 local_354;
    undefined4 local_350;
    undefined4 local_34c;
    undefined4 local_348;
    undefined4 local_344;
    undefined4 local_340;
    undefined4 local_33c;
    undefined4 local_338;
    undefined4 local_330;
    undefined4 local_32c;
    undefined8 local_328;
    undefined8 local_320;
    undefined8 local_318;
    undefined8 local_310;
    undefined4 local_308;
    undefined8 local_304;
    undefined4 local_2fc;
    undefined4 local_2f8;
    undefined8 local_2f4;
    undefined4 local_2ec;
    undefined8 local_2e8;
    undefined4 local_2e0;
    undefined4 local_2d8;
    undefined4 local_2d4;
    undefined4 local_2d0;
    undefined8 local_2cc;
    undefined4 local_2c4;
    undefined8 local_2c0;
    undefined8 local_2b8;
    undefined8 local_2b0;
    undefined4 local_2a8;
    undefined4 local_2a0;
    uint local_298;
    short local_278[128];
    int local_178;
    ulonglong local_168;
    undefined8 local_148;
    undefined8 uStack320;
    undefined8 local_138;
    undefined8 uStack304;
    undefined4 local_128;
    byte local_124;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1192;
    iVar2 = (**(code * *)(**(longlong * *)(&DAT_000018a0 + param_1) + 0x40))
            (*(longlong * *)(&DAT_000018a0 + param_1), local_278);
    if (iVar2 < 0) goto LAB_14027840d;
    puVar13 = (undefined8 *) 0x0;
    uVar14 = 0;
    *(undefined4 * )(param_1 + 0x88) = 1;
    *(undefined8 * )(param_1 + 0x90) = 0;
    puVar11 = puVar13;
    while (local_278[0] != 0) {
        puVar11 = (undefined8 * )((longlong) puVar11 + 1);
        local_278[0] = local_278[(longlong) puVar11];
    }
    auVar1 = ZEXT816(2) * ZEXT816((undefined * )((longlong) puVar11 + 1));
    uVar4 = SUB168(auVar1, 0);
    if (SUB168(auVar1 >> 0x40, 0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    uVar4 = FUN_14018b280(uVar4, 0);
    FUN_1407db590(uVar4, local_278, (longlong)(undefined * )((longlong) puVar11 + 1) * 2);
    *(undefined8 * )(param_1 + 0x98) = uVar4;
    *(undefined8 * )(param_1 + 0xa0) = 0;
    *(undefined8 * )(param_1 + 0xa8) = 0;
    *(undefined4 * )(param_1 + 0xb0) = 2;
    *(undefined4 * )(param_1 + 0xb4) = 3;
    *(undefined4 * )(param_1 + 0xb8) = 0x1000;
    *(undefined4 * )(param_1 + 0xbc) = 0x1000;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x128))();
    *(undefined4 * )(param_1 + 0xc4) = 0x10;
    *(undefined4 * )(param_1 + 200) = 0x3f800000;
    uVar9 = 0x4000;
    if (iVar2 < 0xb000) {
        uVar9 = 0x2000;
    }
    *(undefined4 * )(param_1 + 0xc0) = uVar9;
    uVar6 = 0x20000000;
    if (0x20000000 < local_168) {
        uVar6 = local_168;
    }
    *(ulonglong * )(param_1 + 0xd0) = uVar6;
    if ((local_178 != 0x1002) || (((&DAT_00001860)[param_1] & 8) != 0)) {
        uVar14 = 1;
    }
    *(undefined4 * )(param_1 + 0xdc) = uVar14;
    *(undefined4 * )(param_1 + 0xd8) = 1;
    if ((local_178 != 0x1002) || (uVar14 = 0, ((&DAT_00001860)[param_1] & 2) != 0)) {
        uVar14 = 1;
    }
    bVar15 = DAT_140c65694 != 0;
    *(undefined4 * )(param_1 + 0xe0) = uVar14;
    *(undefined4 * )(param_1 + 0xe4) = 0;
    *(undefined4 * )(param_1 + 0xe8) = 3;
    *(undefined4 * )(param_1 + 0x21d8) = 0;
    if ((bVar15) && (local_178 == 0x10de)) {
        local_2a0 = 0x1001c;
        iVar2 = FUN_140818b00(*(undefined8 * )(param_1 + 0x18c0));
        if ((iVar2 == 0) && (*(undefined4 * )(param_1 + 0x21d8) = 1, 1 < local_298)) {
            *(undefined4 * )(param_1 + 0xe4) = 1;
            *(uint * )(param_1 + 0xe8) = local_298 + 1;
        }
    }
    FUN_1407e4830(param_1 + 0x1944, 0, 0x70);
    puVar11 = puVar13;
    do {
        if (*(uint * )(puVar11 + 0x2815d024) != 0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xe8))
                    (*(longlong * *)(param_1 + 0x18c0), *(uint * )(puVar11 + 0x2815d024),
                     (undefined * )((longlong) puVar11 + param_1 + 0x1944));
        }
        puVar11 = (undefined8 * )((longlong) puVar11 + 4);
    } while (puVar11 < &DAT_0000006c);
    *(undefined8 * )(param_1 + 0x1fb8) = 0;
    *(undefined8 * )(param_1 + 0x1fc0) = 0;
    *(undefined4 * )(param_1 + 0x1fc8) = 0x200000;
    local_398 = 0x200000;
    local_394 = 2;
    local_390 = 1;
    *(int *) (param_1 + 0x1fcc) = *(int *) (param_1 + 0xf0) + -1;
    local_38c = 0x10000;
    local_384 = 0;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x18))
            (*(longlong * *)(param_1 + 0x18c0), &local_398, 0, param_1 + 0x1fb0);
    if (iVar2 < 0) {
        local_418 = 0x141de2a00;
        FUN_1401a3130(0xe, 2, &local_418, iVar2);
        goto LAB_14027840d;
    }
    if ((*(int *) (param_1 + 0x21d8) != 0) &&
        (iVar2 = FUN_1408194d0(*(undefined8 * )(param_1 + 0x18c0), *(undefined8 * )(param_1 + 0x1fb0),
                               local_3e8), iVar2 == 0)) {
        local_488 = &local_464;
        local_464 = 1;
        FUN_140819670(*(undefined8 * )(param_1 + 0x18c0), local_3e8[0], 1);
    }
    *(undefined8 * )(param_1 + 0x1fd8) = 0;
    *(undefined4 * )(param_1 + 0x1fe0) = 0;
    *(undefined4 * )(param_1 + 0x1fe4) = 0x80000;
    local_3b0 = 0x80000;
    local_3ac = 2;
    local_3a8 = 2;
    *(int *) (param_1 + 0x1fe8) = *(int *) (param_1 + 0xf0) + -1;
    local_3a4 = 0x10000;
    local_39c = 0;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x18))
            (*(longlong * *)(param_1 + 0x18c0), &local_3b0, 0, param_1 + 0x1fd0);
    if (iVar2 < 0) {
        local_430 = 0x141de29d8;
        FUN_1401a3130(0xe, 2, &local_430, iVar2);
        goto LAB_14027840d;
    }
    if ((*(int *) (param_1 + 0x21d8) != 0) &&
        (iVar2 = FUN_1408194d0(*(undefined8 * )(param_1 + 0x18c0), *(undefined8 * )(param_1 + 0x1fd0),
                               &local_3f0), iVar2 == 0)) {
        local_488 = local_460;
        local_460[0] = 1;
        FUN_140819670(*(undefined8 * )(param_1 + 0x18c0), local_3f0, 1);
    }
    local_3c8 = 0x10;
    local_3c4 = 2;
    local_3c0 = 4;
    local_3bc = 0x10000;
    local_3b4 = 0;
    *(int *) (param_1 + 0x2128) = *(int *) (param_1 + 0xf0) + -1;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x18))
            (*(longlong * *)(param_1 + 0x18c0), &local_3c8, 0, param_1 + 0x2120);
    if (iVar2 < 0) {
        local_420 = 0x141de29b0;
        FUN_1401a3130(0xe, 2, &local_420, iVar2);
        goto LAB_14027840d;
    }
    FUN_140279fa0(param_1, *(undefined8 * )(param_1 + 0x2120));
    local_380 = 0x10;
    local_37c = 2;
    local_3d8 = extraout_XMM0 & (undefined[16]) 0x0;
    *(undefined(*)[16])(param_1 + 0x2140) = local_3d8;
    local_378 = 4;
    local_374 = 0x10000;
    local_36c = 0;
    *(int *) (param_1 + 0x2150) = *(int *) (param_1 + 0xf0) + -1;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x18))
            (*(longlong * *)(param_1 + 0x18c0), &local_380, 0, param_1 + 0x2130);
    if (iVar2 < 0) {
        local_400 = 0x141de2ac0;
        FUN_1401a3130(0xe, 2, &local_400, iVar2);
        goto LAB_14027840d;
    }
    FUN_140279fa0(param_1, *(undefined8 * )(param_1 + 0x2130));
    local_330 = 3;
    local_32c = 3;
    local_328 = 1;
    local_320 = 0;
    local_318 = 1;
    local_310 = 0;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xb0))
            (*(longlong * *)(param_1 + 0x18c0), &local_330, param_1 + 0x1c60);
    if (iVar2 < 0) {
        local_410 = 0x141de2a88;
        FUN_1401a3130(0xe, 2, &local_410, iVar2);
        goto LAB_14027840d;
    }
    lVar12 = param_1 + 0x1cc8;
    puVar11 = puVar13;
    do {
        local_364 = 1;
        local_368 = (uint) puVar11 & 1;
        local_360 = 8;
        local_358 = 0xffff;
        local_354 = 1;
        local_350 = 1;
        local_34c = 3;
        local_348 = 8;
        local_344 = 1;
        local_340 = 1;
        local_33c = 3;
        local_338 = 8;
        local_35c = (uint)((ulonglong) puVar11 >> 1) & 1;
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xa8))
                (*(longlong * *)(param_1 + 0x18c0), &local_368, lVar12);
        if (iVar2 < 0) {
            puVar13 = &local_3f8;
            local_3f8 = 0x141de2a78;
            goto LAB_1402783d2;
        }
        puVar11 = (undefined8 * )((longlong) puVar11 + 1);
        lVar12 = lVar12 + 8;
    } while (puVar11 < &DAT_00000004);
    lVar12 = param_1 + 0x1e18;
    puVar11 = puVar13;
    do {
        local_128 = 1;
        local_148 = 0;
        uStack320 = 0x200000000;
        local_138 = 0x100000001;
        uStack304 = 0x100000002;
        local_124 = -(puVar11 != (undefined8 *) 0x0) & 0xf;
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xa0))
                (0, 0x100000001, *(longlong * *)(param_1 + 0x18c0), &local_148, lVar12);
        if (iVar2 < 0) {
            puVar13 = &local_408;
            local_408 = 0x141de2a68;
            goto LAB_1402783d2;
        }
        puVar11 = (undefined8 * )((longlong) puVar11 + 1);
        lVar12 = lVar12 + 8;
    } while (puVar11 < (undefined8 *) 0x2);
    local_448 = &local_468;
    local_308 = 1;
    local_304 = 1;
    local_2fc = 1;
    local_2f8 = 0x1c;
    local_2f4 = 1;
    local_2ec = 0;
    local_2e8 = 8;
    local_2e0 = 0;
    local_468 = 0;
    local_440 = 4;
    local_43c = 4;
    local_478 = (longlong *) 0x0;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x28))
            (*(longlong * *)(param_1 + 0x18c0), &local_308, &local_448, param_1 + 0x1e28);
    if ((iVar2 < 0) ||
        (iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0x38))
                (*(longlong * *)(param_1 + 0x18c0), *(undefined8 * )(param_1 + 0x1e28), 0,
                 &local_478), iVar2 < 0)) {
        LAB_14027837d:
        local_450 = 0x141de2a58;
        FUN_1401a3130(0xe, 2, &local_450, iVar2);
        plVar10 = local_478;
    } else {
        if ((uint * *)(param_1 + 0x1ed0) == (uint **) 0x0) {
            iVar2 = -0x7ff8ffa9;
        } else {
            puVar5 = (undefined8 *) FUN_14018b280(0x18);
            puVar11 = puVar13;
            if (puVar5 != (undefined8 *) 0x0) {
                *puVar5 = &PTR_LAB_140b55048;
                *(uint * )(puVar5 + 1) = 1;
                *puVar5 = &PTR_LAB_140b61188;
                puVar5[2] = local_478;
                puVar11 = puVar5;
                if (local_478 != (longlong *) 0x0) {
                    (**(code * *)(*local_478 + 8))();
                }
            }
            *(uint * *)(param_1 + 0x1ed0) = (uint *) puVar11;
            iVar2 = 0;
        }
        if (iVar2 < 0) goto LAB_14027837d;
        if (local_478 != (longlong *) 0x0) {
            (**(code * *)(*local_478 + 0x10))();
        }
        local_2d8 = 0x15;
        local_2d4 = 3;
        local_2d0 = 3;
        local_2a8 = 0x7f7fffff;
        local_2cc = 3;
        local_2c4 = 0x10;
        local_2c0 = 1;
        local_2b8 = 0;
        local_2b0 = 0;
        local_470 = (longlong *) 0x0;
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xb8))
                (*(longlong * *)(param_1 + 0x18c0), &local_2d8, &local_470);
        if (-1 < iVar2) {
            if ((uint * *)(param_1 + 0x1f98) == (uint **) 0x0) {
                iVar2 = -0x7ff8ffa9;
            } else {
                puVar5 = (undefined8 *) FUN_14018b280(0x18);
                puVar11 = puVar13;
                if (puVar5 != (undefined8 *) 0x0) {
                    *puVar5 = &PTR_LAB_140b55048;
                    *(uint * )(puVar5 + 1) = 1;
                    *puVar5 = &PTR_LAB_140b61188;
                    puVar5[2] = local_470;
                    puVar11 = puVar5;
                    if (local_470 != (longlong *) 0x0) {
                        (**(code * *)(*local_470 + 8))();
                    }
                }
                *(uint * *)(param_1 + 0x1f98) = (uint *) puVar11;
                iVar2 = 0;
            }
            if (-1 < iVar2) {
                if (local_470 != (longlong *) 0x0) {
                    (**(code * *)(*local_470 + 0x10))();
                }
                FUN_140275820();
                local_458 = 0;
                puVar11 = puVar13;
                if (*(longlong * )(param_1 + 0x2180) != 0) {
                    do {
                        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18c0) + 0xc0))
                                (*(longlong * *)(param_1 + 0x18c0), &local_458,
                                 *(longlong * )(param_1 + 0x2178) + (longlong) puVar11 * 8);
                        if (iVar2 < 0) {
                            puVar13 = &local_438;
                            local_438 = 0x141de2b80;
                            LAB_1402783d2:
                            FUN_1401a3130(0xe, 2, puVar13, iVar2);
                            goto LAB_14027840d;
                        }
                        (**(code * *)(**(longlong * *)(param_1 + 0x18d0) + 0xe0))();
                        puVar11 = (undefined8 * )((longlong) puVar11 + 1);
                    } while (puVar11 < *(undefined8 * *)(param_1 + 0x2180));
                }
                if (*(int *) (param_1 + 0x1924) == 0) {
                    uVar3 = *(uint * )(param_1 + 0xb8);
                    if (*(uint * )(param_1 + 0xb8) < *(uint * )(param_1 + 0xbc)) {
                        uVar3 = *(uint * )(param_1 + 0xbc);
                    }
                    if (uVar3 < 2) {
                        bVar8 = 0;
                    } else {
                        uVar3 = uVar3 - 1;
                        bVar8 = 1;
                        if ((uVar3 & 0xffff0000) != 0) {
                            bVar8 = 0x11;
                            uVar3 = uVar3 >> 0x10;
                        }
                        if ((uVar3 & 0xff00) != 0) {
                            bVar8 = bVar8 + 8;
                            uVar3 = uVar3 >> 8;
                        }
                        if ((uVar3 & 0xf0) != 0) {
                            bVar8 = bVar8 + 4;
                            uVar3 = uVar3 >> 4;
                        }
                        if ((uVar3 & 0xc) != 0) {
                            bVar8 = bVar8 + 2;
                            uVar3 = uVar3 >> 2;
                        }
                        if ((uVar3 & 2) != 0) {
                            bVar8 = bVar8 + 1;
                        }
                    }
                    *(uint * )(param_1 + 0x2118) = bVar8 + 1;
                } else {
                    *(undefined4 * )(param_1 + 0x2118) = 1;
                }
                uVar3 = *(uint * )(param_1 + 0x2118);
                uVar6 = SUB168(ZEXT816(0x58) * ZEXT416(uVar3), 0);
                if (SUB168(ZEXT816(0x58) * ZEXT416(uVar3) >> 0x40, 0) != 0) {
                    uVar6 = 0xffffffffffffffff;
                }
                lVar12 = uVar6 + 8;
                if (0xfffffffffffffff7 < uVar6) {
                    lVar12 = -1;
                }
                puVar7 = (uint *) FUN_14018b280(lVar12, 0);
                if (puVar7 != (uint *) 0x0) {
                    iVar2 = uVar3 - 1;
                    *puVar7 = uVar3;
                    puVar13 = (undefined8 * )(puVar7 + 2);
                    if (-1 < iVar2) {
                        puVar11 = (undefined8 * )(puVar7 + 0xc);
                        do {
                            puVar11[-4] = 0;
                            puVar11[-3] = 0;
                            puVar11[-2] = 0;
                            puVar11[-1] = 0;
                            *puVar11 = 0;
                            puVar11[1] = 0;
                            puVar11[2] = 0;
                            puVar11[3] = 0;
                            puVar11[4] = 0;
                            puVar11[5] = 0;
                            FUN_140172f70(puVar11 + -5);
                            iVar2 = iVar2 + -1;
                            puVar11 = puVar11 + 0xb;
                        } while (-1 < iVar2);
                        *(undefined8 * *)(param_1 + 0x2110) = puVar13;
                        goto LAB_14027840d;
                    }
                }
                *(undefined8 * *)(param_1 + 0x2110) = puVar13;
                goto LAB_14027840d;
            }
        }
        local_428 = 0x141de2b98;
        FUN_1401a3130(0xe, 2, &local_428, iVar2);
        plVar10 = local_470;
    }
    if (plVar10 != (longlong *) 0x0) {
        (**(code * *)(*plVar10 + 0x10))();
    }
    LAB_14027840d:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1192);
    return;
}


longlong FUN_140278430(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined8 *puVar4;

    iVar3 = *(int *) (param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar4 = (undefined8 * )((longlong) * (int *) (param_1 + -8) * 0x58 + 8 + param_1);
        do {
            if (puVar4[-0xb] != 0) {
                lVar1 = puVar4[-2];
                for (puVar2 = (undefined8 *) puVar4[-6]; puVar2 < (undefined8 * )(lVar1 + 8);
                     puVar2 = puVar2 + 1) {
                    FUN_14018b900(*puVar2, 0);
                }
                FUN_14018b900(puVar4[-0xb], 0);
            }
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + -0xb;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8, 0);
    return param_1 + -8;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402784d0(longlong param_1) {
    undefined auVar1[16];
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined auStack424[32];
    DWORD local_188;
    DWORD local_184;
    undefined8 local_180;
    ulonglong local_178;
    undefined4 local_170;
    WCHAR local_168[48];
    undefined local_108[172];
    DWORD local_5c;
    DWORD local_58;
    uint local_50;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack424;
    iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18b0) + 0x38))
            (*(longlong * *)(param_1 + 0x18b0), local_168);
    if (-1 < iVar2) {
        lVar4 = 0;
        while (local_168[0] != L'\0') {
            lVar4 = lVar4 + 1;
            local_168[0] = local_168[lVar4];
        }
        auVar1 = ZEXT816(2) * ZEXT816(lVar4 + 1U);
        uVar5 = SUB168(auVar1, 0);
        if (SUB168(auVar1 >> 0x40, 0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar5 = FUN_14018b280(uVar5, 0);
        FUN_1407db590(uVar5, local_168, (lVar4 + 1U) * 2);
        *(undefined8 * )(param_1 + 0x90) = uVar5;
        iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18b0) + 0x38))
                (*(longlong * *)(param_1 + 0x18b0), local_168);
        if (-1 < iVar2) {
            local_108._68_4_ = 0xdc;
            EnumDisplaySettingsW(local_168, 0xffffffff, (DEVMODEW *) local_108);
            local_188 = local_5c;
            local_184 = local_58;
            if (local_50 < 2) {
                local_180 = 0;
            } else {
                local_180 = CONCAT44(1, local_50);
            }
            local_178 = 0x1c;
            local_170 = 0;
            iVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x18b0) + 0x48))
                    (*(longlong * *)(param_1 + 0x18b0), &local_188, &local_188,
                     *(undefined8 * )(param_1 + 0x18c0));
            if (((iVar2 + 0x80000000U & 0x80000000) != 0) || (iVar2 == -0x7785ffde)) {
                *(undefined8 * )(param_1 + 0x60) = 0;
                *(undefined8 * )(param_1 + 0x68) = 0;
                *(undefined8 * )(param_1 + 0x70) = 0;
                *(undefined8 * )(param_1 + 0x78) = 0;
                *(undefined8 * )(param_1 + 0x80) = 0;
                *(DWORD * )(param_1 + 0x60) = local_188;
                *(DWORD * )(param_1 + 100) = local_184;
                *(uint * )(param_1 + 0x70) = (uint) local_180 / local_180._4_4_;
                uVar3 = FUN_14027a000(local_178 & 0xffffffff,
                                      (local_180 & 0xffffffff) % (ulonglong) local_180._4_4_);
                *(undefined4 * )(param_1 + 0x6c) = 0x17;
                *(undefined4 * )(param_1 + 0x68) = uVar3;
            }
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack424);
    return;
}
