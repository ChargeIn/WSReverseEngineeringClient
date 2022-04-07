//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140168c20(longlong param_1) {
    uint uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined auVar8[16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined auStack488[32];
    float local_1c8;
    int local_1b8;
    int local_1b4;
    int local_1b0;
    int local_1ac;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined local_198[16];
    undefined local_188[16];
    undefined local_178[256];
    ulonglong local_78;

    lVar2 = DAT_140c63678;
    local_78 = DAT_140c0f7b0 ^ (ulonglong) auStack488;
    local_1b8 = *(int *) (param_1 + 0x2cc);
    uVar6 = (ulonglong) * (uint * )(param_1 + 0x2c8);
    local_1b4 = *(int *) (param_1 + 0x2d0);
    local_1b0 = *(int *) (param_1 + 0x2d4);
    local_1ac = *(int *) (param_1 + 0x2d8);
    if (uVar6 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
        lVar7 = (ulonglong) * (uint * )(param_1 + 0x2c8) * 0x20;
        iVar4 = *(int *) (lVar7 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28));
        if (iVar4 - 1U < 0xfffffffe) {
            *(int *) (lVar7 + 0x10 + *(longlong * )(DAT_140c63678 + 0x28)) = iVar4 + 1;
        }
        if (uVar6 < *(ulonglong * )(lVar2 + 0x30)) {
            puVar5 = (undefined4 * )(uVar6 * 0x20 + *(longlong * )(lVar2 + 0x28));
            goto LAB_140168cd8;
        }
    }
    puVar5 = *(undefined4 * *)(lVar2 + 0x28);
    LAB_140168cd8:
    local_1a8 = *puVar5;
    uStack420 = puVar5[1];
    uStack416 = puVar5[2];
    uStack412 = puVar5[3];
    FUN_1401429a0(lVar2);
    if (*(longlong * )(param_1 + 0x400) != 0) {
        local_1c8 = (DAT_140c63664 - *(float *) (param_1 + 0x408)) * *(float *) (param_1 + 0x40c);
        FUN_140103cf0(*(longlong * )(param_1 + 0x400), &local_1b8, &local_1a8, 0);
    }
    (**(code * *)(*DAT_140c65680 + 0x90))(DAT_140c65680, 1);
    fVar11 = 6.283185;
    fVar14 = -6.283185;
    uVar1 = *(uint * )(param_1 + 0x298) >> 0xd;
    fVar13 = 0.0;
    if (*(float *) (param_1 + 0x520) == *(float *) (param_1 + 0x524)) {
        if ((uVar1 & 1) == 0) {
            fVar9 = *(float *) (param_1 + 0x538);
            fVar12 = *(float *) (param_1 + 0x534);
        } else {
            fVar9 = *(float *) (param_1 + 0x534);
            fVar12 = *(float *) (param_1 + 0x538);
        }
    } else {
        fVar10 = *(float *) (param_1 + 0x520) / *(float *) (param_1 + 0x524);
        fVar9 = 1.0;
        if (fVar10 <= 1.0) {
            fVar9 = fVar10;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
            fVar10 = fVar9;
        }
        if ((uVar1 & 1) == 0) {
            fVar9 = *(float *) (param_1 + 0x538);
            fVar12 = *(float *) (param_1 + 0x534) - fVar9;
            if (fVar12 <= 0.0) {
                fVar12 = fVar12 + 6.283185;
            }
            fVar12 = fVar12 * fVar10 + fVar9;
        } else {
            fVar12 = *(float *) (param_1 + 0x538);
            auVar8 = ZEXT416((uint)(fVar12 - *(float *) (param_1 + 0x534))) &
                     (undefined[16]) 0xffffffffffffffff;
            if (SUB164(auVar8, 0) <= 0.0) {
                auVar8 = CONCAT124(SUB1612(auVar8 >> 0x20, 0), SUB164(auVar8, 0) + 6.283185);
            }
            for (fVar9 = fVar12 - SUB164(auVar8, 0) * fVar10; fVar9 < 0.0; fVar9 = fVar9 + 6.283185) {
            }
            for (; 6.283185 < fVar9; fVar9 = fVar9 + -6.283185) {
            }
        }
    }
    (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 2);
    for (fVar10 = fVar12 - fVar9; fVar10 < fVar13; fVar10 = fVar10 + fVar11) {
    }
    for (; fVar11 < fVar10; fVar10 = fVar10 + fVar14) {
    }
    if (fVar10 <= 3.141593) {
        iVar4 = 0;
        local_188 = ZEXT816(CONCAT44((float) local_1ac, (float) local_1b0));
        local_198 = ZEXT816(CONCAT44((float) local_1b4, (float) local_1b8));
        if (fVar12 - 3.141593 <= fVar9) {
            iVar4 = FUN_1400cf1a0(local_198);
        }
        (**(code * *)(*DAT_140c65680 + 0x78))(DAT_140c65680, local_178, (longlong) iVar4);
    } else {
        (**(code * *)(*DAT_140c65680 + 0x40))(DAT_140c65680, 2);
        iVar4 = 0;
        fVar11 = fVar10 * 0.5 + fVar9;
        local_188 = ZEXT816(CONCAT44((float) local_1ac, (float) local_1b0));
        local_198 = ZEXT816(CONCAT44((float) local_1b4, (float) local_1b8));
        if (fVar11 - 3.141593 <= fVar9) {
            iVar3 = FUN_1400cf1a0(local_198);
        } else {
            iVar3 = 0;
        }
        (**(code * *)(*DAT_140c65680 + 0x78))(DAT_140c65680, local_178, (longlong) iVar3);
        if (*(longlong * )(param_1 + 0x430) != 0) {
            local_1c8 = (DAT_140c63664 - *(float *) (param_1 + 0x438)) * *(float *) (param_1 + 0x43c);
            FUN_140103cf0(*(longlong * )(param_1 + 0x430), &local_1b8, &local_1a8, 0);
        }
        (**(code * *)(*DAT_140c65680 + 0x48))();
        local_188 = ZEXT816(CONCAT44((float) local_1ac, (float) local_1b0));
        local_198 = ZEXT816(CONCAT44((float) local_1b4, (float) local_1b8));
        if (fVar12 - 3.141593 <= fVar11) {
            iVar4 = FUN_1400cf1a0(local_198);
        }
        (**(code * *)(*DAT_140c65680 + 0x78))(DAT_140c65680, local_178, (longlong) iVar4);
    }
    if (*(longlong * )(param_1 + 0x430) != 0) {
        local_1c8 = (DAT_140c63664 - *(float *) (param_1 + 0x438)) * *(float *) (param_1 + 0x43c);
        FUN_140103cf0(*(longlong * )(param_1 + 0x430), &local_1b8, &local_1a8, 0);
    }
    (**(code * *)(*DAT_140c65680 + 0x48))();
    FUN_1407db4f0(local_78 ^ (ulonglong) auStack488);
    return;
}


uint FUN_14016a0c0(longlong param_1) {
    uint uVar1;

    uVar1 = (uint)(*(ulonglong * )(param_1 + 0x298) >> 9);
    if ((*(ulonglong * )(param_1 + 0x298) >> 8 & 1) != 0) {
        return uVar1 & 1 | 2;
    }
    return uVar1 & 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14016a110(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
                   longlong param_5) {
    ulonglong uVar1;
    ulonglong *puVar2;
    short sVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    short *psVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    wchar_t *pwVar11;
    short *psVar12;
    undefined2 *puVar13;
    longlong lVar14;
    float *pfVar15;
    wchar_t *pwVar16;
    ulonglong uVar17;
    undefined(*pauVar18)[16];
    short *psVar19;
    double extraout_XMM0_Qa;
    double extraout_XMM0_Qa_00;
    undefined4 uVar20;
    float fVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    undefined auStack408[32];
    longlong local_178;
    longlong local_170;
    ulonglong local_168;
    undefined *local_160;
    undefined8 local_158;
    short *local_150;
    char local_148[8];
    longlong local_140;
    undefined8 local_138;
    undefined8 local_130;
    ulonglong local_128;
    longlong local_120;
    longlong local_118;
    longlong local_110;
    longlong local_108;
    longlong local_100;
    longlong local_f8;
    undefined8 local_f0;
    undefined local_e8[96];
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong) auStack408;
    local_140 = param_5;
    local_128 = param_3;
    local_f0 = param_4;
    lVar6 = FUN_1401a6b80(param_5, L"ProgressEmpty");
    psVar12 = (short *) 0x0;
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dcd0c;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_118 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_118 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_118, psVar19, lVar6);
    puVar13 = (undefined2 * )(local_118 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    lVar6 = FUN_1401a6b80(local_140, L"ProgressFull");
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dccfc;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_f8 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_f8 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_f8, psVar19, lVar6);
    puVar13 = (undefined2 * )(local_f8 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    lVar6 = FUN_1401a6b80(local_140, L"ProgressFill");
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dcc9c;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_108 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_108 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_108, psVar19, lVar6);
    puVar13 = (undefined2 * )(local_108 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    lVar6 = FUN_1401a6b80(local_140, L"ProgressEdgeGlow");
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dcc8c;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_120 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_120 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_120, psVar19, lVar6);
    puVar13 = (undefined2 * )(local_120 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    lVar6 = FUN_1401a6b80(local_140, L"TickOn");
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dccdc;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_110 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_110 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_110, psVar19, lVar6);
    puVar13 = (undefined2 * )(local_110 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    lVar6 = FUN_1401a6b80(local_140, L"TickOff");
    psVar7 = psVar12;
    if (lVar6 != 0) {
        psVar7 = (short *) FUN_1401a4f40(lVar6 + 0x20);
    }
    psVar19 = (short *) &DAT_1409dccbc;
    if (psVar7 != (short *) 0x0) {
        psVar19 = psVar7;
    }
    local_100 = 0;
    sVar3 = *psVar19;
    psVar7 = psVar12;
    while (sVar3 != 0) {
        psVar7 = (short *) ((longlong) psVar7 + 1);
        sVar3 = psVar19[(longlong) psVar7];
    }
    lVar6 = (longlong) psVar7 * 2 >> 1;
    uVar1 = lVar6 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        local_100 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_100, psVar19, lVar6);
    lVar9 = local_140;
    puVar13 = (undefined2 * )(local_100 + lVar6);
    if (puVar13 != (undefined2 *) 0x0) {
        *puVar13 = 0;
    }
    local_138 = 0;
    local_130 = 0;
    lVar6 = FUN_1401a6b80(local_140, L"TextX");
    if (lVar6 != 0) {
        uVar8 = FUN_1401a4f40(lVar6 + 0x20);
        FUN_1407df428(uVar8, &DAT_1409e4114, &local_138);
    }
    lVar6 = FUN_1401a6b80(lVar9, L"TextY");
    if (lVar6 != 0) {
        uVar8 = FUN_1401a4f40(lVar6 + 0x20);
        FUN_1407df428(uVar8, &DAT_1409e4114, (longlong) & local_138 + 4);
    }
    lVar6 = FUN_1401a6b80(lVar9, L"TextWidth");
    if (lVar6 != 0) {
        uVar8 = FUN_1401a4f40(lVar6 + 0x20);
        FUN_1407df428(uVar8, &DAT_1409e4114, &local_130);
    }
    lVar6 = FUN_1401a6b80(lVar9, L"TextHeight");
    if (lVar6 != 0) {
        uVar8 = FUN_1401a4f40(lVar6 + 0x20);
        FUN_1407df428(uVar8, &DAT_1409e4114, (longlong) & local_130 + 4);
    }
    local_130 = CONCAT44((int) ((ulonglong) local_130 >> 0x20) + local_138._4_4_,
                         (int) local_130 + (int) local_138);
    local_178 = 0;
    FUN_1400d45e0(local_e8, param_1, param_2);
    lVar6 = local_140;
    psVar7 = psVar12;
    psVar19 = psVar12;
    do {
        local_148[0] = '\0';
        lVar9 = FUN_1401a6b80(lVar6, (&PTR_u_SetTextToProgress_140a37550)[(longlong) psVar7]);
        if (lVar9 != 0) {
            uVar8 = FUN_1401a4f40(lVar9 + 0x20);
            FUN_1401a52e0(uVar8, local_148);
            if (local_148[0] != '\0') {
                psVar19 = (short *) ((ulonglong) psVar19 | 1 << ((byte) psVar7 & 0x3f));
            }
        }
        psVar7 = (short *) ((longlong) psVar7 + 1);
    } while (psVar7 < (short *) 0xf);
    lVar6 = FUN_14018b280(0x5b0, 0);
    psVar7 = psVar12;
    if (lVar6 != 0) {
        local_158 = local_f0;
        local_160 = local_e8;
        local_168 = local_128;
        local_170 = local_120;
        local_178 = local_f8;
        local_150 = psVar19;
        psVar7 = (short *) FUN_140168600(lVar6, param_1, param_2);
    }
    lVar9 = local_140;
    uVar20 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    pfVar15 = (float *) (psVar7 + 0x2a2);
    pauVar18 = (undefined(*)[16])(psVar7 + 0x2a0);
    lVar6 = 4;
    do {
        *pauVar18 = CONCAT412(uVar24, CONCAT48(uVar23, CONCAT44(uVar22, uVar20)));
        lVar10 = FUN_1401a6b80(lVar9, *(undefined8 * )(psVar12 + 0xa051ba80));
        if (lVar10 != 0) {
            uVar8 = FUN_1401a4f40(lVar10 + 0x20);
            iVar5 = FUN_1407df428(uVar8, &DAT_1409e4114, &local_128);
            if (iVar5 == 1) {
                pfVar15[-1] = (float) (int) local_128;
            }
        }
        lVar10 = FUN_1401a6b80(lVar9, *(undefined8 * )(psVar12 + 0xa051ba90));
        if (lVar10 != 0) {
            uVar8 = FUN_1401a4f40(lVar10 + 0x20);
            iVar5 = FUN_1407df428(uVar8, &DAT_1409e4114, &local_140);
            if (iVar5 == 1) {
                *pfVar15 = (float) (int) local_140;
            }
        }
        pauVar18 = pauVar18[1];
        psVar12 = psVar12 + 4;
        pfVar15 = pfVar15 + 4;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*(longlong * )(psVar7 + 0x10) != 0) {
        FUN_140109710(psVar7 + 0x230, *(longlong * )(psVar7 + 0x10) + 0xf0, local_108);
    }
    lVar10 = local_110;
    if (*(longlong * )(psVar7 + 0x10) != 0) {
        FUN_140109710(psVar7 + 0x278, *(longlong * )(psVar7 + 0x10) + 0xf0, local_110);
    }
    lVar4 = local_100;
    if (*(longlong * )(psVar7 + 0x10) != 0) {
        FUN_140109710(psVar7 + 0x260, *(longlong * )(psVar7 + 0x10) + 0xf0, local_100);
    }
    fVar26 = 0.0;
    *(int *) (psVar7 + 0x2ca) = (int) local_138;
    *(int *) (psVar7 + 0x2cc) = local_138._4_4_;
    *(int *) (psVar7 + 0x2ce) = (int) local_130;
    *(undefined4 * )(psVar7 + 0x2d0) = local_130._4_4_;
    for (lVar14 = *(longlong * )(lVar9 + 0x60); fVar27 = fVar26, lVar14 != 0;
         lVar14 = *(longlong * )(lVar14 + 0x38)) {
        pwVar16 = L"RadialMin";
        pwVar11 = (wchar_t *) FUN_1401a4f40(lVar14 + 8);
        if (pwVar11 == L"RadialMin") {
            LAB_14016a8c7:
            fVar27 = fVar26;
            if ((lVar14 != 0) &&
                (psVar12 = (short *) FUN_1401a4f40(lVar14 + 0x20), fVar27 = fVar26, psVar12 != (short *) 0x0)
                    ) {
                FUN_1407dfe80(psVar12);
                fVar26 = (float) extraout_XMM0_Qa;
                sVar3 = *psVar12;
                lVar14 = lVar6;
                while (sVar3 != 0) {
                    lVar14 = lVar14 + 1;
                    sVar3 = psVar12[lVar14];
                }
                if (psVar12[lVar14 + -1] != 0x52) {
                    fVar26 = fVar26 * 0.01745329;
                }
            }
            break;
        }
        iVar5 = 0;
        if (*pwVar11 != L'\0') {
            do {
                if (((*pwVar16 == L'\0') || (*pwVar11 != *pwVar16)) || (0x7ffffffe < iVar5)) break;
                pwVar11 = pwVar11 + 1;
                pwVar16 = pwVar16 + 1;
                iVar5 = iVar5 + 1;
            } while (*pwVar11 != L'\0');
            if (iVar5 == 0x7fffffff) goto LAB_14016a8c7;
        }
        if ((*pwVar11 == L'\0') && (*pwVar16 == L'\0')) goto LAB_14016a8c7;
    }
    fVar21 = 6.283185;
    for (; fVar26 < fVar27; fVar26 = fVar26 + 6.283185) {
    }
    fVar25 = -6.283185;
    for (; 6.283185 < fVar26; fVar26 = fVar26 + -6.283185) {
    }
    *(float *) (psVar7 + 0x29c) = fVar26;
    lVar14 = *(longlong * )(lVar9 + 0x60);
    do {
        fVar26 = fVar21;
        if (lVar14 == 0) {
            joined_r0x00014016aa18:
            for (; fVar26 < fVar27; fVar26 = fVar26 + fVar21) {
            }
            for (; fVar21 < fVar26; fVar26 = fVar26 + fVar25) {
            }
            *(float *) (psVar7 + 0x29a) = fVar26;
            FUN_1400f66f0(&local_128, lVar9, L"BarColor");
            uVar1 = local_128;
            uVar17 = local_128 & 0xffffffff;
            puVar2 = (ulonglong * )(psVar7 + 0x2d2);
            lVar6 = DAT_140c63678;
            if (puVar2 != &local_128) {
                FUN_1401429a0(DAT_140c63678, *(undefined4 *) puVar2);
                lVar6 = DAT_140c63678;
                *(int *) puVar2 = (int) local_128;
                if (uVar17 < *(ulonglong * )(lVar6 + 0x30)) {
                    lVar9 = (uVar1 & 0xffffffff) * 0x20;
                    iVar5 = *(int *) (lVar9 + 0x10 + *(longlong * )(lVar6 + 0x28));
                    if (iVar5 - 1U < 0xfffffffe) {
                        *(int *) (lVar9 + 0x10 + *(longlong * )(lVar6 + 0x28)) = iVar5 + 1;
                    }
                }
            }
            FUN_1401429a0(lVar6, uVar17);
            if (lVar4 != 0) {
                FUN_14018b900(lVar4, 0);
            }
            if (lVar10 != 0) {
                FUN_14018b900(lVar10, 0);
            }
            if (local_120 != 0) {
                FUN_14018b900(local_120, 0);
            }
            if (local_108 != 0) {
                FUN_14018b900(local_108, 0);
            }
            if (local_f8 != 0) {
                FUN_14018b900(local_f8, 0);
            }
            if (local_118 != 0) {
                FUN_14018b900(local_118, 0);
            }
            FUN_1407db4f0(local_88 ^ (ulonglong) auStack408);
            return;
        }
        pwVar16 = L"RadialMax";
        pwVar11 = (wchar_t *) FUN_1401a4f40(lVar14 + 8);
        if (pwVar11 == L"RadialMax") {
            LAB_14016a9c6:
            fVar26 = fVar21;
            if ((lVar14 != 0) &&
                (psVar12 = (short *) FUN_1401a4f40(lVar14 + 0x20), fVar26 = fVar21, psVar12 != (short *) 0x0)
                    ) {
                FUN_1407dfe80(psVar12, 0);
                sVar3 = *psVar12;
                while (sVar3 != 0) {
                    lVar6 = lVar6 + 1;
                    sVar3 = psVar12[lVar6];
                }
                fVar26 = (float) extraout_XMM0_Qa_00;
                if (psVar12[lVar6 + -1] != 0x52) {
                    fVar26 = (float) extraout_XMM0_Qa_00 * 0.01745329;
                }
            }
            goto joined_r0x00014016aa18;
        }
        iVar5 = 0;
        if (*pwVar11 != L'\0') {
            do {
                if (((*pwVar16 == L'\0') || (*pwVar11 != *pwVar16)) || (0x7ffffffe < iVar5)) break;
                pwVar11 = pwVar11 + 1;
                pwVar16 = pwVar16 + 1;
                iVar5 = iVar5 + 1;
            } while (*pwVar11 != L'\0');
            if (iVar5 == 0x7fffffff) goto LAB_14016a9c6;
        }
        if ((*pwVar11 == L'\0') && (*pwVar16 == L'\0')) goto LAB_14016a9c6;
        lVar14 = *(longlong * )(lVar14 + 0x38);
    } while (true);
}


void FUN_14016abd0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x14016abe0;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ac21;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_SetFloor_140c57f40 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0x12);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016acaf;
    FUN_1400569b0(lVar2, "Apollo.ProgressBar");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_14016acd1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14016aced:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14016aced;
        if (iVar1 == 7) goto LAB_14016acd1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14016aced;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ad1c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ad42;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ad8a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016adaf;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016add3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016adf4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ae19;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ae5c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016ae81;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_14016aee9:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14016aeba;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14016aee9;
        if (iVar1 != 8) goto LAB_14016aeba;
    }
    uVar14 = *puVar12;
    LAB_14016aeba:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016aecc;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14016aedc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


undefined8 FUN_14016afc0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if ((lVar4 != 0) && ((*(byte * )(lVar4 + 0x1b0) >> 3 & 1) != 0)) {
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(float *) (lVar4 + 0x530);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_14016b070(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar3 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 0.0;
        }
        *(float *) (lVar2 + 0x538) = (float) dVar6 * 0.01745329;
    }
    return 0;
}


undefined8 FUN_14016b140(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar3 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 0.0;
        }
        *(float *) (lVar2 + 0x534) = (float) dVar6 * 0.01745329;
    }
    return 0;
}


undefined8 FUN_14016b210(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar5 + 400);
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar3 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 0.0;
        }
        *(float *) (lVar2 + 0x524) = (float) dVar6;
    }
    return 0;
}


undefined8 FUN_14016b2d0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if ((lVar4 != 0) && ((*(byte * )(lVar4 + 0x1b0) >> 3 & 1) != 0)) {
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(float *) (lVar4 + 0x524);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_14016b380(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;
    float fVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    float fVar10;

    uVar5 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar5 + 400);
        uVar8 = 0;
        uVar9 = 0;
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar3 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            dVar6 = (double) FUN_140056c40(lVar1, 2);
        } else {
            dVar6 = 0.0;
        }
        lVar1 = *(longlong * )(uVar5 + 400);
        fVar10 = (float) dVar6;
        puVar3 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x20);
        dVar6 = (double) CONCAT44(uVar9, uVar8);
        if (((puVar3 < *(undefined8 * *)(lVar1 + 0x10)) &&
             (dVar6 = (double) CONCAT44(uVar9, uVar8), puVar3 != &DAT_140a12138)) &&
            (dVar6 = (double) CONCAT44(uVar9, uVar8), 0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x28))) {
            dVar6 = (double) FUN_140056c40(lVar1, 3);
        }
        if ((float) dVar6 <= 0.0) {
            if (*(float *) (lVar2 + 0x524) <= fVar10) {
                fVar10 = *(float *) (lVar2 + 0x524);
            }
            fVar7 = 0.0;
            if (0.0 <= fVar10) {
                fVar7 = fVar10;
            }
            *(float *) (lVar2 + 0x528) = fVar7;
            *(float *) (lVar2 + 0x520) = fVar7;
        } else {
            *(float *) (lVar2 + 0x52c) = (float) dVar6;
            if (*(float *) (lVar2 + 0x524) <= fVar10) {
                fVar10 = *(float *) (lVar2 + 0x524);
            }
            fVar7 = 0.0;
            if (0.0 <= fVar10) {
                fVar7 = fVar10;
            }
            *(float *) (lVar2 + 0x528) = fVar7;
        }
        FUN_1401689b0(lVar2);
    }
    return 0;
}


undefined8 FUN_14016b4f0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if ((lVar4 != 0) && ((*(byte * )(lVar4 + 0x1b0) >> 3 & 1) != 0)) {
        lVar2 = *(longlong * )(uVar6 + 400);
        pdVar3 = *(double **) (lVar2 + 0x10);
        *pdVar3 = (double) *(float *) (lVar4 + 0x520);
        *(undefined4 * )(pdVar3 + 1) = 3;
        plVar1 = (longlong * )(lVar2 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_14016b5a0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409dcdc4);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar4 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (*(longlong * )(lVar2 + 0x20) != 0) {
            FUN_140109710(lVar2 + 0x400, *(longlong * )(lVar2 + 0x20) + 0xf0, local_20, 0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_14016b6d0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409dcd54);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar4 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (*(longlong * )(lVar2 + 0x20) != 0) {
            FUN_140109710(lVar2 + 0x430, *(longlong * )(lVar2 + 0x20) + 0xf0, local_20, 0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_14016b800(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409dcdfc);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar4 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (*(longlong * )(lVar2 + 0x20) != 0) {
            FUN_140109710(lVar2 + 0x460, *(longlong * )(lVar2 + 0x20) + 0xf0, local_20, 0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_14016b930(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        lVar1 = *(longlong * )(uVar7 + 400);
        lVar3 = FUN_14018f0e0(local_48, &DAT_1409dcde4);
        uVar5 = *(undefined8 * )(lVar3 + 8);
        puVar4 = (undefined8 * )(*(longlong * )(lVar1 + 0x18) + 0x10);
        if ((puVar4 < *(undefined8 * *)(lVar1 + 0x10)) &&
            ((puVar4 != &DAT_140a12138 && (0 < *(int *) (*(longlong * )(lVar1 + 0x18) + 0x18))))) {
            uVar5 = FUN_140056bb0(lVar1, 2);
        }
        FUN_14018f2d0(local_28, uVar5);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        if (*(longlong * )(lVar2 + 0x20) != 0) {
            FUN_140109710(lVar2 + 0x490, *(longlong * )(lVar2 + 0x20) + 0xf0, local_20, 0);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
    }
    return 0;
}


undefined8 FUN_14016ba60(longlong param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar4;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_1400d66a0(param_1, 1);
    if ((lVar1 != 0) && ((*(byte * )(lVar1 + 0x1b0) >> 3 & 1) != 0)) {
        puVar2 = (undefined8 * )(*(longlong * )(*(longlong * )(uVar4 + 400) + 0x18) + 0x10);
        puVar5 = &DAT_140a12138;
        if (puVar2 < *(undefined8 * *)(*(longlong * )(uVar4 + 400) + 0x10)) {
            puVar5 = puVar2;
        }
        if ((*(int *) (puVar5 + 1) != 0) && ((*(int *) (puVar5 + 1) != 1 || (*(int *) puVar5 != 0)))) {
            *(ulonglong * )(lVar1 + 0x298) = *(ulonglong * )(lVar1 + 0x298) | 0x20;
            return 0;
        }
        *(ulonglong * )(lVar1 + 0x298) = *(ulonglong * )(lVar1 + 0x298) & 0xffffffffffffffdf;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14016be80(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint local_res10[6];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1)
                break;
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar2 = FUN_1400d66a0(param_1, 1);
    if ((lVar2 != 0) && ((*(byte * )(lVar2 + 0x1b0) >> 3 & 1) != 0)) {
        local_18 = _DAT_140c777d0;
        uStack20 = uRam0000000140c777d4;
        uStack16 = uRam0000000140c777d8;
        uStack12 = uRam0000000140c777dc;
        FUN_140143880(local_res10, param_1, 2, &local_18);
        lVar3 = DAT_140c63678;
        if ((uint * )(lVar2 + 0x5a4) != local_res10) {
            FUN_1401429a0(DAT_140c63678);
            lVar3 = DAT_140c63678;
            *(uint * )(lVar2 + 0x5a4) = local_res10[0];
            if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
                lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
                iVar1 = *(int *) (lVar2 + 0x10);
                if (iVar1 - 1U < 0xfffffffe) {
                    *(int *) (lVar2 + 0x10) = iVar1 + 1;
                }
            }
        }
        FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    }
    return 0;
}


undefined4 FUN_14016c0c0(longlong param_1) {
    double *pdVar1;
    undefined4 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    uint uVar8;
    float *pfVar9;
    longlong lVar10;
    undefined8 *puVar11;
    float fVar12;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined local_38[8];
    longlong local_30;

    uVar8 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        uVar3 = 0;
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar8 = uVar8 + 1;
            uVar3 = (ulonglong) uVar8;
        } while (uVar3 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_1400d66a0(param_1, 1);
    if ((lVar4 != 0) && ((*(byte * )(lVar4 + 0x1b0) >> 3 & 1) != 0)) {
        local_58 = &PTR_FUN_140b569f0;
        local_40 = 1;
        local_48 = param_1;
        if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
            *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 * *)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1, 0);
        *(undefined4 * )(puVar11 + 1) = 5;
        *puVar11 = uVar5;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        local_50 = FUN_1400578c0(param_1);
        pfVar9 = (float *) (lVar4 + 0x544);
        lVar4 = 4;
        do {
            if (*(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar11 = *(undefined8 * *)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1, 0);
            *(undefined4 * )(puVar11 + 1) = 5;
            *puVar11 = uVar5;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar2 = FUN_1400578c0(param_1);
            fVar12 = pfVar9[-1];
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0), uVar2);
            puVar11 = *(undefined8 * *)(param_1 + 0x10);
            *puVar11 = *puVar6;
            *(undefined4 * )(puVar11 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_38, &DAT_1409e17fc);
            if (*(longlong * )(lVar7 + 8) == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            } else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *) (*(longlong * )(lVar7 + 8) + lVar10) != '\0');
                FUN_140058710(param_1);
            }
            if (local_30 != 0) {
                FUN_14018b900(local_30, 0);
            }
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar1 + 1) = 3;
            *pdVar1 = (double) fVar12;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                          *(longlong * )(param_1 + 0x10) + -0x10);
            *(longlong * )(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1 + 0x10));
            fVar12 = *pfVar9;
            puVar11 = *(undefined8 * *)(param_1 + 0x10);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0), uVar2);
            *puVar11 = *puVar6;
            *(undefined4 * )(puVar11 + 1) = *(undefined4 * )(puVar6 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            lVar7 = FUN_14018f0e0(local_38, &DAT_1409e1854);
            if (*(longlong * )(lVar7 + 8) == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            } else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *) (*(longlong * )(lVar7 + 8) + lVar10) != '\0');
                FUN_140058710(param_1);
            }
            if (local_30 != 0) {
                FUN_14018b900(local_30, 0);
            }
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar1 + 1) = 3;
            *pdVar1 = (double) fVar12;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar5, *(longlong * )(param_1 + 0x10) + -0x20,
                          *(longlong * )(param_1 + 0x10) + -0x10);
            *(longlong * )(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong * )(param_1 + 0x10));
            FUN_1400fb1d0(&local_58);
            FUN_1400579e0(param_1);
            pfVar9 = pfVar9 + 4;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar4 = local_48;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 * )(*(longlong * )(local_48 + 0x20) + 0xa0), local_50);
        puVar11 = *(undefined8 * *)(lVar4 + 0x10);
        *puVar11 = *puVar6;
        uVar2 = *(undefined4 * )(puVar6 + 1);
        *(undefined4 * )(puVar11 + 1) = uVar2;
        *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 0x10;
        FUN_1400579e0(lVar4, uVar2, local_50);
        return 1;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_14016c730(longlong param_1) {
    undefined8 uVar1;
    undefined4 uVar2;
    undefined2 *puVar3;
    undefined auVar4[16];
    undefined auVar5[16];
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
    *(undefined2 * *)(param_1 + 8) = puVar3;
    *(undefined2 * *)(param_1 + 0x10) = puVar3;
    *(undefined2 * *)(param_1 + 0x18) = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x38) = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    *(undefined2 * *)(param_1 + 0x28) = puVar3;
    *(undefined2 * *)(param_1 + 0x30) = puVar3;
    *(undefined2 * *)(param_1 + 0x38) = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    uVar1 = DAT_140c63678;
    *(undefined4 * )(param_1 + 0x54) = 0;
    *(undefined4 * )(param_1 + 0x40) = 100;
    *(undefined4 * )(param_1 + 0x44) = 10;
    *(undefined4 * )(param_1 + 0x48) = 0x400;
    *(undefined4 * )(param_1 + 0x4c) = 4;
    *(undefined * )(param_1 + 0x50) = 0;
    FUN_1401429a0(uVar1, 0);
    auVar4 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                       (CONCAT97(
                                                                                                                (unkuint9)
                                                                                                                        SUB158(CONCAT78(
                                                                                                                                       SUB157(CONCAT69(
                                                                                                                                                      SUB156(
                                                                                                                                                              CONCAT510(
                                                                                                                                                                      SUB155(CONCAT411(
                                                                                                                                                                                     SUB154(CONCAT312(
                                                                                                                                                                                                    SUB153
                                                                                                                                                                                                            (CONCAT213(
                                                                                                                                                                                                                     SUB152(CONCAT114(
                                                                                                                                                                                                                                    SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                                   >> 0x38,
                                                                                                                                                                                                                                           0),
                                                                                                                                                                                                                                    SUB1614(_DAT_140b7b610,
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0
                                                                                                                                                                                                                     ),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             SUB161(_DAT_140b7b610
                                                                                                                                                                                                                                            >> 0x30,
                                                                                                                                                                                                                                    0),
                                                                                                                                                                                                                             SUB1612(
                                                                                                                                                                                                                                     _DAT_140b7b610,
                                                                                                                                                                                                                                     0)))
                                                                                                                                                                                                                     >> 0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    SUB1612(_DAT_140b7b610,
                                                                                                                                                                                                            0))
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             SUB161(_DAT_140b7b610
                                                                                                                                                                                                            >> 0x28,
                                                                                                                                                                                                    0),
                                                                                                                                                                                             SUB1610(_DAT_140b7b610,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1610(_DAT_140b7b610,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              SUB161(_DAT_140b7b610
                                                                                                                                                                             >> 0x20,
                                                                                                                                                                     0),
                                                                                                                                                              SUB168(_DAT_140b7b610,
                                                                                                                                                                     0)))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       SUB168(_DAT_140b7b610,
                                                                                                                                              0))
                                                                                                                                       >> 0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0),
                                                                                                                (SUB167(_DAT_140b7b610,
                                                                                                                        0)
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >>
                                                                                                                0x30,
                                                                                                        0),
                                                                                               SUB166(_DAT_140b7b610,
                                                                                                      0)) >> 0x28, 0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             (SUB165(_DAT_140b7b610, 0) >> 0x10)
                                                                                     << 0x20) >>
                                                                                              0x20, 0),
                                                           SUB164(_DAT_140b7b610, 0)) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         (SUB163(_DAT_140b7b610, 0) >> 8) << 0x10) >> 0x10, 0),
                       SUB162(_DAT_140b7b610, 0)) & (undefined[16]) 0xffffffffffff00ff;
    auVar5 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar4 >> 0x30, 0), SUB1612(auVar4, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar4 >> 0x20, 0),
                                                                                           SUB168(auVar4, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar4, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                         SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                         (SUB166(auVar4, 0) >> 0x10) << 0x20) >> 0x20, 0),
                       SUB164(auVar4, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_18 = (float) SUB164(auVar5 >> 0x40, 0) * 0.003921569;
    fStack20 = (float) SUB164(auVar5 >> 0x20, 0) * 0.003921569;
    fStack16 = (float) (SUB164(auVar4, 0) & 0xffff) * 0.003921569;
    fStack12 = (float) SUB164(auVar5 >> 0x60, 0) * 0.003921569;
    uVar2 = FUN_140141f10(DAT_140c63678, &local_18);
    *(undefined4 * )(param_1 + 0x54) = uVar2;
    return param_1;
}


bool FUN_14016c820(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;

    iVar2 = 0;
    for (puVar1 = (undefined8 * ) * *(undefined8 * *)(param_1 + 0x60);
         puVar1 != *(undefined8 * *)(param_1 + 0x60); puVar1 = (undefined8 * ) * puVar1) {
        iVar2 = iVar2 + 1;
    }
    return 0 < iVar2;
}


undefined *
FUN_14016c870(undefined *param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
              undefined8 param_5, undefined4 param_6, uint *param_7) {
    uint uVar1;
    int iVar2;
    longlong lVar3;

    *param_1 = 1;
    *(undefined4 * )(param_1 + 4) = param_3;
    *(undefined8 * )(param_1 + 0x10) = 0;
    FUN_1401095e0();
    *(undefined4 * )(param_1 + 0x48) = param_6;
    lVar3 = DAT_140c63678;
    uVar1 = *param_7;
    *(uint * )(param_1 + 0x4c) = uVar1;
    if ((ulonglong) uVar1 < *(ulonglong * )(lVar3 + 0x30)) {
        lVar3 = *(longlong * )(lVar3 + 0x28) + (ulonglong) uVar1 * 0x20;
        iVar2 = *(int *) (lVar3 + 0x10);
        if (iVar2 - 1U < 0xfffffffe) {
            *(int *) (lVar3 + 0x10) = iVar2 + 1;
        }
    }
    *(undefined4 * )(param_1 + 8) = 10;
    *(undefined4 * )(param_1 + 0xc) = 0x800;
    FUN_14016c910(param_1, &DAT_1409dd4b4, param_4);
    return param_1;
}


void FUN_14016c910(longlong param_1, undefined *param_2, longlong param_3) {
    longlong *plVar1;
    undefined *puVar2;

    if ((param_2 == (undefined *) 0x0) && (param_3 == 0)) {
        if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
            *(undefined8 * )(param_1 + 0x10) = 0;
            return;
        }
        return;
    }
    plVar1 = *(longlong * *)(param_1 + 0x10);
    if (plVar1 == (longlong *) 0x0) {
        puVar2 = &DAT_1409dd1e4;
        if (param_2 != (undefined *) 0x0) {
            puVar2 = param_2;
        }
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(param_3 + 0x60), puVar2, 0xffffffffffffffff,
                 param_1 + 0x10);
        return;
    }
    if (param_2 == (undefined *) 0x0) {
        param_2 = &DAT_1409dd324;
    }
    // WARNING: Could not recover jumptable at 0x00014016c996. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar1 + 0x38))(plVar1, param_2, 0xffffffffffffffff);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_14016c9a0(longlong *param_1, longlong param_2, undefined4 *param_3, longlong param_4,
              longlong param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8) {
    undefined8 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auVar6[16];
    undefined auVar7[16];
    float local_28;
    float fStack36;
    float fStack32;
    float fStack28;

    *param_1 = param_2;
    param_1[1] = param_4;
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_1401095e0();
    param_1[10] = 0;
    lVar3 = FUN_14018b280(0x18);
    lVar5 = param_5;
    param_1[0xc] = lVar3;
    *(longlong *) lVar3 = lVar3;
    *(longlong * )(param_1[0xc] + 8) = param_1[0xc];
    *(undefined4 * )(param_1 + 0xd) = *param_3;
    *(undefined4 * )(param_1 + 0xe) = param_8;
    *(undefined4 * )(param_1 + 0xf) = 0;
    if (param_5 == 0) {
        lVar3 = param_1[3];
        lVar5 = lVar3 + 1;
        lVar4 = FUN_14018db00(param_1[2], lVar5, 8);
        *(undefined8 * )(lVar4 + lVar3 * 8) = 0;
    } else {
        param_5 = 0;
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(param_4 + 0x60), lVar5, 0xffffffffffffffff, &param_5);
        lVar3 = param_1[3];
        lVar5 = lVar3 + 1;
        lVar4 = FUN_14018db00(param_1[2], lVar5, 8);
        *(longlong * )(lVar4 + lVar3 * 8) = param_5;
    }
    if (param_1[2] != lVar4) {
        FUN_1407db590(lVar4, param_1[2], param_1[3] << 3);
        lVar3 = param_1[2];
        if (lVar3 != 0) {
            (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        param_1[2] = lVar4;
    }
    param_1[3] = lVar5;
    if (param_2 != 0) {
        FUN_140109710(param_1 + 4, param_2 + 0xf0, param_6, 0);
    }
    uVar1 = DAT_140c63678;
    *(undefined * )((longlong) param_1 + 0x6c) = 1;
    FUN_1401429a0(uVar1, *(undefined4 * )(param_1 + 0xf));
    auVar6 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(CONCAT115(SUB1611(CONCAT106(SUB1610
                                                                                                       (CONCAT97(
                                                                                                                (unkuint9)
                                                                                                                        SUB158(CONCAT78(
                                                                                                                                       SUB157(CONCAT69(
                                                                                                                                                      SUB156(
                                                                                                                                                              CONCAT510(
                                                                                                                                                                      SUB155(CONCAT411(
                                                                                                                                                                                     SUB154(CONCAT312(
                                                                                                                                                                                                    SUB153
                                                                                                                                                                                                            (CONCAT213(
                                                                                                                                                                                                                     SUB152(CONCAT114(
                                                                                                                                                                                                                                    SUB161(_DAT_140b7b6f0
                                                                                                                                                                                                                                                   >> 0x38,
                                                                                                                                                                                                                                           0),
                                                                                                                                                                                                                                    SUB1614(_DAT_140b7b6f0,
                                                                                                                                                                                                                                            0))
                                                                                                                                                                                                                                    >> 0x68,
                                                                                                                                                                                                                            0
                                                                                                                                                                                                                     ),
                                                                                                                                                                                                                     CONCAT112(
                                                                                                                                                                                                                             SUB161(_DAT_140b7b6f0
                                                                                                                                                                                                                                            >> 0x30,
                                                                                                                                                                                                                                    0),
                                                                                                                                                                                                                             SUB1612(
                                                                                                                                                                                                                                     _DAT_140b7b6f0,
                                                                                                                                                                                                                                     0)))
                                                                                                                                                                                                                     >> 0x60,
                                                                                                                                                                                                             0),
                                                                                                                                                                                                    SUB1612(_DAT_140b7b6f0,
                                                                                                                                                                                                            0))
                                                                                                                                                                                                    >> 0x58,
                                                                                                                                                                                            0),
                                                                                                                                                                                     CONCAT110(
                                                                                                                                                                                             SUB161(_DAT_140b7b6f0
                                                                                                                                                                                                            >> 0x28,
                                                                                                                                                                                                    0),
                                                                                                                                                                                             SUB1610(_DAT_140b7b6f0,
                                                                                                                                                                                                     0)))
                                                                                                                                                                                     >> 0x50,
                                                                                                                                                                             0),
                                                                                                                                                                      SUB1610(_DAT_140b7b6f0,
                                                                                                                                                                              0))
                                                                                                                                                                      >> 0x48,
                                                                                                                                                              0),
                                                                                                                                                      CONCAT18(
                                                                                                                                                              SUB161(_DAT_140b7b6f0
                                                                                                                                                                             >> 0x20,
                                                                                                                                                                     0),
                                                                                                                                                              SUB168(_DAT_140b7b6f0,
                                                                                                                                                                     0)))
                                                                                                                                                      >> 0x40,
                                                                                                                                              0),
                                                                                                                                       SUB168(_DAT_140b7b6f0,
                                                                                                                                              0))
                                                                                                                                       >> 0x38,
                                                                                                                               0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0) &
                                                                                                                SUB169((undefined[16]) 0xffffffffffffffff
                                                                                                                               >> 0x38,
                                                                                                                       0),
                                                                                                                (SUB167(_DAT_140b7b6f0,
                                                                                                                        0)
                                                                                                                        >> 0x18)
                                                                                                                        << 0x30)
                                                                                                                >>
                                                                                                                0x30,
                                                                                                        0),
                                                                                               SUB166(_DAT_140b7b6f0,
                                                                                                      0)) >> 0x28, 0) &
                                                                             SUB1611((undefined[16]) 0xffff00ffffffffff
                                                                                             >>
                                                                                             0x28, 0),
                                                                             (SUB165(_DAT_140b7b6f0, 0) >> 0x10)
                                                                                     << 0x20) >>
                                                                                              0x20, 0),
                                                           SUB164(_DAT_140b7b6f0, 0)) >> 0x18, 0) &
                                         SUB1613((undefined[16]) 0xffffffff00ffffff >> 0x18, 0),
                                         (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10) >> 0x10, 0),
                       SUB162(_DAT_140b7b6f0, 0)) & (undefined[16]) 0xffffffffffff00ff;
    auVar7 = CONCAT124(SUB1612(CONCAT106((unkuint10)
                                                 SUB148(CONCAT68(SUB146(CONCAT410(SUB144(CONCAT212(SUB162(
                                                                                          auVar6 >> 0x30, 0), SUB1612(auVar6, 0)) >> 0x50, 0),
                                                                                  CONCAT28(SUB162(auVar6 >> 0x20, 0),
                                                                                           SUB168(auVar6, 0)
                                                                                  )) >> 0x40, 0), SUB168(auVar6, 0))
                                                                >> 0x30, 0)
                                         & SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0) &
                                         SUB1610((undefined[16]) 0xffffffffffffffff >> 0x30, 0),
                                         (SUB166(auVar6, 0) >> 0x10) << 0x20) >> 0x20, 0),
                       SUB164(auVar6, 0)) & (undefined[16]) 0xffffffff0000ffff;
    local_28 = (float) SUB164(auVar7 >> 0x40, 0) * 0.003921569;
    fStack36 = (float) SUB164(auVar7 >> 0x20, 0) * 0.003921569;
    fStack32 = (float) (SUB164(auVar6, 0) & 0xffff) * 0.003921569;
    fStack28 = (float) SUB164(auVar7 >> 0x60, 0) * 0.003921569;
    uVar2 = FUN_140141f10(DAT_140c63678, &local_28);
    *(undefined4 * )(param_1 + 0xf) = uVar2;
    *(undefined4 * )((longlong) param_1 + 0x74) = 0x10;
    return param_1;
}


void FUN_14016cb60(longlong *param_1) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong *plVar4;

    uVar3 = 0;
    if (param_1[3] != 0) {
        do {
            lVar1 = param_1[2];
            plVar4 = *(longlong * *)(lVar1 + uVar3 * 8);
            if (plVar4 != (longlong *) 0x0) {
                (**(code * *)(*plVar4 + 8))();
                *(undefined8 * )(lVar1 + uVar3 * 8) = 0;
            }
            uVar3 = (ulonglong)((int) uVar3 + 1);
        } while (uVar3 < (ulonglong) param_1[3]);
    }
    FUN_1400579e0(*(undefined8 * )(*param_1 + 400));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0xf));
    plVar4 = *(longlong * *)(longlong * )
    param_1[0xc];
    if (plVar4 != (longlong *) param_1[0xc]) {
        do {
            plVar2 = (longlong * ) * plVar4;
            FUN_14018b900(plVar4, 0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *) param_1[0xc]);
    }
    *(longlong *) param_1[0xc] = param_1[0xc];
    *(longlong * )(param_1[0xc] + 8) = param_1[0xc];
    FUN_14018b900(param_1[0xc], 0);
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    lVar1 = param_1[2];
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014016cc64. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}


void FUN_14016cc70(longlong param_1, uint param_2, undefined *param_3) {
    ulonglong uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined *puVar7;
    undefined8 local_res8;

    uVar1 = *(ulonglong * )(param_1 + 0x18);
    uVar6 = (ulonglong) param_2;
    puVar7 = &DAT_1409dd43c;
    if (param_3 != (undefined *) 0x0) {
        puVar7 = param_3;
    }
    if (uVar1 <= uVar6) {
        while (uVar1 < uVar6) {
            lVar3 = *(longlong * )(param_1 + 0x18);
            uVar1 = lVar3 + 1;
            lVar4 = FUN_14018db00(*(undefined8 * )(param_1 + 0x10), uVar1, 8);
            *(undefined8 * )(lVar4 + lVar3 * 8) = 0;
            if (*(longlong * )(param_1 + 0x10) != lVar4) {
                FUN_1407db590(lVar4, *(longlong * )(param_1 + 0x10), *(longlong * )(param_1 + 0x18) << 3);
                lVar3 = *(longlong * )(param_1 + 0x10);
                if (lVar3 != 0) {
                    (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                *(longlong * )(param_1 + 0x10) = lVar4;
            }
            *(ulonglong * )(param_1 + 0x18) = uVar1;
        }
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x60), puVar7,
                 0xffffffffffffffff, &local_res8);
        lVar4 = *(longlong * )(param_1 + 0x18);
        lVar3 = lVar4 + 1;
        lVar5 = FUN_14018db00(*(undefined8 * )(param_1 + 0x10), lVar3, 8);
        *(undefined8 * )(lVar5 + lVar4 * 8) = local_res8;
        if (*(longlong * )(param_1 + 0x10) != lVar5) {
            FUN_1407db590(lVar5, *(longlong * )(param_1 + 0x10), *(longlong * )(param_1 + 0x18) << 3);
            lVar4 = *(longlong * )(param_1 + 0x10);
            if (lVar4 != 0) {
                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
            *(longlong * )(param_1 + 0x10) = lVar5;
        }
        *(longlong * )(param_1 + 0x18) = lVar3;
        return;
    }
    if (*(longlong * )(*(longlong * )(param_1 + 0x10) + uVar6 * 8) == 0) {
        (**(code * *)(*DAT_140c65680 + 0x28))
                (DAT_140c65680, *(undefined8 * )(*(longlong * )(param_1 + 8) + 0x60), puVar7,
                 0xffffffffffffffff, &local_res8);
        *(undefined8 * )(*(longlong * )(param_1 + 0x10) + uVar6 * 8) = local_res8;
    }
    plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + uVar6 * 8);
    // WARNING: Could not recover jumptable at 0x00014016ccf0. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(*plVar2 + 0x38))(plVar2, puVar7, 0xffffffffffffffff);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_14016ce10(undefined8 *param_1, longlong param_2, undefined8 param_3, undefined8 *param_4,
              int param_5, undefined8 *param_6, undefined8 param_7, undefined8 param_8,
              undefined8 param_9) {
    longlong **pplVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    uint uVar4;
    longlong lVar5;
    char cVar6;
    undefined4 uVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 **ppuVar11;
    uint uVar12;
    int iVar13;
    longlong lVar14;
    ulonglong uVar15;
    wchar_t **ppwVar16;
    int iVar17;
    ulonglong uVar18;
    longlong *plVar19;
    undefined auVar20[16];
    undefined in_XMM6_Ba;
    byte bVar23;
    undefined in_XMM6_Bb;
    undefined uVar24;
    undefined in_XMM6_Bc;
    undefined uVar25;
    undefined in_XMM6_Bd;
    undefined uVar26;
    undefined in_XMM6_Be;
    undefined uVar27;
    undefined in_XMM6_Bf;
    undefined uVar28;
    undefined in_XMM6_Bg;
    undefined uVar29;
    undefined in_XMM6_Bh;
    undefined uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    uint local_res8;
    undefined4 local_resc;
    undefined4 local_res10;
    uint local_res14;
    undefined8 *local_res20;
    undefined8 uVar35;
    undefined local_f8[16];
    wchar_t *local_e8[4];
    wchar_t *local_c8;
    undefined local_b8[8];
    longlong local_b0;
    longlong local_90;
    undefined4 local_64;
    undefined auVar21[16];
    undefined auVar22[16];

    local_res20 = param_4;
    uVar35 = param_9;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5cf80;
    FUN_1401095e0(param_1 + 0x80);
    FUN_1401095e0(param_1 + 0x86);
    FUN_1401095e0(param_1 + 0x8c);
    pplVar1 = (longlong * *)(param_1 + 0x92);
    FUN_1401095e0(pplVar1);
    pplVar2 = (longlong * *)(param_1 + 0x98);
    FUN_1401095e0(pplVar2);
    FUN_1401095e0(param_1 + 0x9e);
    FUN_1401095e0(param_1 + 0xa4);
    param_1[0xaa] = 0;
    *(undefined * )(param_1 + 0xab) = 0;
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    local_res8 = 0xffffffff;
    FUN_14016c9a0(param_1 + 0xb4, param_1[4], &local_res8, param_1[0x57], &DAT_1409dd354, &DAT_1409dd3ec,
                  uVar35, 0xfffffffe);
    uVar35 = DAT_140c63678;
    param_1[0xc4] = 0xffffffffffffffff;
    fVar31 = 0.003921569;
    fVar32 = 0.003921569;
    fVar33 = 0.003921569;
    fVar34 = 0.003921569;
    uVar12 = CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba))) ^
             CONCAT13(in_XMM6_Bd, CONCAT12(in_XMM6_Bc, CONCAT11(in_XMM6_Bb, in_XMM6_Ba)));
    bVar23 = (byte) uVar12;
    uVar24 = (undefined)(uVar12 >> 8);
    uVar25 = (undefined)(uVar12 >> 0x10);
    uVar26 = (undefined)(uVar12 >> 0x18);
    uVar4 = CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be))) ^
            CONCAT13(in_XMM6_Bh, CONCAT12(in_XMM6_Bg, CONCAT11(in_XMM6_Bf, in_XMM6_Be)));
    uVar27 = (undefined) uVar4;
    uVar28 = (undefined)(uVar4 >> 8);
    uVar29 = (undefined)(uVar4 >> 0x10);
    uVar30 = (undefined)(uVar4 >> 0x18);
    auVar22 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar30, CONCAT114(SUB161(_DAT_140b7b6f0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar29, SUB1613(_DAT_140b7b6f0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6f0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6f0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar28, SUB1611(_DAT_140b7b6f0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6f0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6f0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar27, SUB169(_DAT_140b7b6f0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6f0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6f0, 0))) >> 0x40, 0), uVar26),
                       (SUB167(_DAT_140b7b6f0, 0) >> 0x18) << 0x30);
    auVar21 = CONCAT115(CONCAT101(SUB1610(auVar22 >> 0x30, 0), uVar25),
                        (SUB165(_DAT_140b7b6f0, 0) >> 0x10) << 0x20);
    auVar20 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar21 >> 0x20, 0), uVar24),
                                          (SUB163(_DAT_140b7b6f0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6f0, 0) & 0xff | (ushort) bVar23 << 8);
    param_1[0xc6] = 0;
    param_1[0xc5] = 0;
    iVar13 = SUB164(CONCAT214((short) (uVar4 >> 0x10),
                              CONCAT212(SUB162(auVar22 >> 0x30, 0), SUB1612(auVar20, 0))) >> 0x60, 0);
    auVar21 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210((short) uVar4, SUB1610(auVar20, 0))) >> 0x50, 0),
                        CONCAT28(SUB162(auVar21 >> 0x20, 0), SUB168(auVar20, 0)));
    param_1[200] = 0;
    param_1[199] = 0;
    local_f8 = CONCAT412((float) iVar13 * 0.003921569,
                         CONCAT48((float) (SUB164(auVar20, 0) & 0xffff | uVar12 << 0x10) * 0.003921569,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar21 >> 0x40, 0),
                                                                             (short) (uVar12 >> 0x10)),
                                                                    (SUB166(auVar20, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * 0.003921569,
                                           (float) SUB164(auVar21 >> 0x40, 0) * 0.003921569)));
    uVar7 = FUN_140141f10(uVar35, local_f8);
    plVar19 = param_1 + 0xcb;
    *(undefined4 * )((longlong) param_1 + 0x64c) = uVar7;
    param_1[0xca] = 0;
    FUN_1400c35f0(plVar19);
    param_1[0x36] = param_1[0x36] | 0x200;
    if ((local_res20 == (undefined8 *) 0x0) || (param_5 < 1)) {
        FUN_14016c730(local_b8);
        FUN_140170ba0(param_1, local_b8);
        FUN_1401429a0(DAT_140c63678, local_64);
        if (local_90 != 0) {
            FUN_14018b900(local_90, 0);
        }
        if (local_b0 != 0) {
            FUN_14018b900(local_b0, 0);
        }
    } else {
        iVar13 = 0;
        if (0 < param_5) {
            do {
                if (0x1f < iVar13) break;
                FUN_140170ba0(param_1, local_res20 + (longlong) iVar13 * 0xb);
                iVar13 = iVar13 + 1;
            } while (iVar13 < param_5);
        }
    }
    plVar8 = (longlong *) param_1[0xb2];
    local_res20 = param_1 + 0xb4;
    if (plVar8 == (longlong *) param_1[0xb3]) {
        FUN_1400b9430(param_1 + 0xb0);
    } else {
        if (plVar8 != (longlong *) 0x0) {
            *plVar8 = (longlong) local_res20;
        }
        param_1[0xb2] = param_1[0xb2] + 8;
    }
    if (param_2 != 0) {
        if ((*pplVar2 == (longlong *) 0x0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x9a, L"CRB_TreeControlCollapse"), cVar6 == '\0')) {
            plVar8 = (longlong *) FUN_140108e80(param_2 + 0xf0, L"CRB_TreeControlCollapse");
            if (plVar8 != (longlong *) 0x0) {
                lVar10 = 0;
                do {
                    lVar14 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                } while (L"CRB_TreeControlCollapse"[lVar14] != L'\0');
                FUN_14001c480(param_1 + 0x9a, L"CRB_TreeControlCollapse");
            }
            if (plVar8 != *pplVar2) {
                if (plVar8 != (longlong *) 0x0) {
                    (**(code * *) * plVar8)(plVar8);
                }
                if (*pplVar2 != (longlong *) 0x0) {
                    (**(code * *)(**pplVar2 + 8))();
                    *pplVar2 = (longlong *) 0x0;
                }
                *pplVar2 = plVar8;
            }
        }
        if (param_2 != 0) {
            if ((*pplVar1 == (longlong *) 0x0) ||
                (cVar6 = FUN_14002c740(param_1 + 0x94, L"CRB_TreeControlExpand"), cVar6 == '\0')) {
                plVar8 = (longlong *) FUN_140108e80(param_2 + 0xf0, L"CRB_TreeControlExpand");
                if (plVar8 != (longlong *) 0x0) {
                    lVar10 = 0;
                    do {
                        lVar14 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                    } while (L"CRB_TreeControlExpand"[lVar14] != L'\0');
                    FUN_14001c480(param_1 + 0x94, L"CRB_TreeControlExpand");
                }
                if (plVar8 != *pplVar1) {
                    if (plVar8 != (longlong *) 0x0) {
                        (**(code * *) * plVar8)(plVar8);
                    }
                    if (*pplVar1 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar1 + 8))();
                        *pplVar1 = (longlong *) 0x0;
                    }
                    *pplVar1 = plVar8;
                }
            }
            if ((param_2 != 0) &&
                ((pplVar3 = (longlong * *)(param_1 + 0x80), *pplVar3 == (longlong *) 0x0 ||
                                                            (cVar6 = FUN_14002c740(param_1 + 0x82,
                                                                                   L"CRB_TreeControlVLine"), cVar6 ==
                                                                                                             '\0')))) {
                plVar8 = (longlong *) FUN_140108e80(param_2 + 0xf0, L"CRB_TreeControlVLine");
                if (plVar8 != (longlong *) 0x0) {
                    lVar10 = 0;
                    do {
                        lVar14 = lVar10 + 1;
                        lVar10 = lVar10 + 1;
                    } while (L"CRB_TreeControlVLine"[lVar14] != L'\0');
                    FUN_14001c480(param_1 + 0x82);
                }
                if (plVar8 != *pplVar3) {
                    if (plVar8 != (longlong *) 0x0) {
                        (**(code * *) * plVar8)(plVar8);
                    }
                    if (*pplVar3 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar3 + 8))();
                        *pplVar3 = (longlong *) 0x0;
                    }
                    *pplVar3 = plVar8;
                }
            }
        }
    }
    if (param_2 != 0) {
        if ((param_1[0x86] == 0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x88, L"CRB_TreeControlLastNodeLine"), cVar6 == '\0')) {
            puVar9 = (undefined8 *) FUN_140108e80(param_2 + 0xf0, L"CRB_TreeControlLastNodeLine");
            if (puVar9 != (undefined8 *) 0x0) {
                lVar10 = 0;
                do {
                    lVar14 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                } while (L"CRB_TreeControlLastNodeLine"[lVar14] != L'\0');
                FUN_14001c480(param_1 + 0x88);
            }
            if (puVar9 != (undefined8 *) param_1[0x86]) {
                if (puVar9 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar9)(puVar9);
                }
                if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
                    (**(code * *)(*(longlong *) param_1[0x86] + 8))();
                    param_1[0x86] = 0;
                }
                param_1[0x86] = puVar9;
            }
        }
        if ((param_2 != 0) &&
            ((param_1[0x8c] == 0 ||
              (cVar6 = FUN_14002c740(param_1 + 0x8e, L"CRB_TreeControlNodeLine"), cVar6 == '\0')))) {
            puVar9 = (undefined8 *) FUN_140108e80(param_2 + 0xf0, L"CRB_TreeControlNodeLine");
            if (puVar9 != (undefined8 *) 0x0) {
                lVar10 = 0;
                do {
                    lVar14 = lVar10 + 1;
                    lVar10 = lVar10 + 1;
                } while (L"CRB_TreeControlNodeLine"[lVar14] != L'\0');
                FUN_14001c480(param_1 + 0x8e);
            }
            if (puVar9 != (undefined8 *) param_1[0x8c]) {
                if (puVar9 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar9)(puVar9);
                }
                if ((longlong *) param_1[0x8c] != (longlong *) 0x0) {
                    (**(code * *)(*(longlong *) param_1[0x8c] + 8))();
                    param_1[0x8c] = 0;
                }
                param_1[0x8c] = puVar9;
            }
        }
    }
    if (*pplVar2 == (longlong *) 0x0) {
        if (param_2 == 0) goto LAB_14016d657;
        lVar10 = FUN_140108e80(param_2 + 0xf0, L"TreeControlCollapse");
        if (lVar10 != 0) {
            lVar14 = 0;
            do {
                lVar5 = lVar14 + 1;
                lVar14 = lVar14 + 1;
            } while (L"TreeControlCollapse"[lVar5] != L'\0');
            FUN_14001c480(param_1 + 0x9a, L"TreeControlCollapse");
        }
        FUN_1401097f0(pplVar2, lVar10);
        if (param_2 == 0) goto LAB_14016d657;
        if ((*pplVar1 == (longlong *) 0x0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x94, L"TreeControlExpand"), cVar6 == '\0')) {
            lVar10 = FUN_140108e80(param_2 + 0xf0, L"TreeControlExpand");
            if (lVar10 != 0) {
                lVar14 = 0;
                do {
                    lVar5 = lVar14 + 1;
                    lVar14 = lVar14 + 1;
                } while (L"TreeControlExpand"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 0x94, L"TreeControlExpand");
            }
            FUN_1401097f0(pplVar1, lVar10);
        }
        if (param_2 == 0) goto LAB_14016d657;
        if ((param_1[0x80] == 0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x82, L"TreeControlVLine"), cVar6 == '\0')) {
            lVar10 = FUN_140108e80(param_2 + 0xf0, L"TreeControlVLine");
            if (lVar10 != 0) {
                lVar14 = 0;
                do {
                    lVar5 = lVar14 + 1;
                    lVar14 = lVar14 + 1;
                } while (L"TreeControlVLine"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 0x82, L"TreeControlVLine");
            }
            FUN_1401097f0(param_1 + 0x80, lVar10);
        }
        if (param_2 == 0) goto LAB_14016d657;
        if ((param_1[0x86] == 0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x88, L"TreeControlLastNodeLine"), cVar6 == '\0')) {
            lVar10 = FUN_140108e80(param_2 + 0xf0, L"TreeControlLastNodeLine");
            if (lVar10 != 0) {
                lVar14 = 0;
                do {
                    lVar5 = lVar14 + 1;
                    lVar14 = lVar14 + 1;
                } while (L"TreeControlLastNodeLine"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 0x88, L"TreeControlLastNodeLine");
            }
            FUN_1401097f0(param_1 + 0x86, lVar10);
        }
        if (param_2 == 0) goto LAB_14016d657;
        if ((param_1[0x8c] == 0) ||
            (cVar6 = FUN_14002c740(param_1 + 0x8e, L"TreeControlNodeLine"), cVar6 == '\0')) {
            lVar10 = FUN_140108e80(param_2 + 0xf0, L"TreeControlNodeLine");
            if (lVar10 != 0) {
                lVar14 = 0;
                do {
                    lVar5 = lVar14 + 1;
                    lVar14 = lVar14 + 1;
                } while (L"TreeControlNodeLine"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 0x8e, L"TreeControlNodeLine", L"TreeControlNodeLine" + lVar14);
            }
            FUN_1401097f0(param_1 + 0x8c, lVar10);
        }
    }
    if ((param_2 != 0) &&
        ((pplVar1 = (longlong * *)(param_1 + 0xa4), *pplVar1 == (longlong *) 0x0 ||
                                                    (cVar6 = FUN_14002c740(param_1 + 0xa6, L"WhiteFill"), cVar6 ==
                                                                                                          '\0')))) {
        plVar8 = (longlong *) FUN_140108e80(param_2 + 0xf0, L"WhiteFill");
        if (plVar8 != (longlong *) 0x0) {
            lVar10 = 0;
            do {
                lVar14 = lVar10 + 1;
                lVar10 = lVar10 + 1;
            } while (L"WhiteFill"[lVar14] != L'\0');
            FUN_14001c480(param_1 + 0xa6, L"WhiteFill", L"WhiteFill" + lVar10);
        }
        if (plVar8 != *pplVar1) {
            if (plVar8 != (longlong *) 0x0) {
                (**(code * *) * plVar8)(plVar8);
            }
            if (*pplVar1 != (longlong *) 0x0) {
                (**(code * *)(**pplVar1 + 8))();
                *pplVar1 = (longlong *) 0x0;
            }
            *pplVar1 = plVar8;
        }
    }
    LAB_14016d657:
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x554));
    auVar22 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                         SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                          (uVar30, CONCAT114(SUB161(_DAT_140b7b6c0 >> 0x38, 0),
                                                                                                                                             SUB1614(_DAT_140b7b6c0, 0))) >>
                                                                                                                                                                          0x70, 0),
                                                                                                           CONCAT113(uVar29, SUB1613(_DAT_140b7b6c0, 0)
                                                                                                           )) >> 0x68, 0),
                                                                                          CONCAT112(SUB161(_DAT_140b7b6c0 >> 0x30, 0),
                                                                                                    SUB1612(_DAT_140b7b6c0, 0))) >> 0x60, 0),
                                                                         CONCAT111(uVar28, SUB1611(_DAT_140b7b6c0, 0))) >>
                                                                                                                        0x58, 0), CONCAT110(SUB161(_DAT_140b7b6c0 >> 0x28, 0),
                                                                                                                                            SUB1610(_DAT_140b7b6c0, 0))) >>
                                                                                                                                                                         0x50, 0),
                                                                 CONCAT19(uVar27, SUB169(_DAT_140b7b6c0, 0)))
                                                               >> 0x48, 0),
                                                CONCAT18(SUB161(_DAT_140b7b6c0 >> 0x20, 0),
                                                         SUB168(_DAT_140b7b6c0, 0))) >> 0x40, 0), uVar26),
                       (SUB167(_DAT_140b7b6c0, 0) >> 0x18) << 0x30);
    auVar21 = CONCAT115(CONCAT101(SUB1610(auVar22 >> 0x30, 0), uVar25),
                        (SUB165(_DAT_140b7b6c0, 0) >> 0x10) << 0x20);
    auVar20 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar21 >> 0x20, 0), uVar24),
                                          (SUB163(_DAT_140b7b6c0, 0) >> 8) << 0x10) >> 0x10, 0),
                        SUB162(_DAT_140b7b6c0, 0) & 0xff | (ushort) bVar23 << 8);
    iVar13 = SUB164(CONCAT214(CONCAT11(uVar30, uVar29),
                              CONCAT212(SUB162(auVar22 >> 0x30, 0), SUB1612(auVar20, 0))) >> 0x60, 0);
    auVar21 = CONCAT610(SUB166(CONCAT412(iVar13, CONCAT210(CONCAT11(uVar28, uVar27), SUB1610(auVar20, 0)))
                                       >> 0x50, 0), CONCAT28(SUB162(auVar21 >> 0x20, 0), SUB168(auVar20, 0)));
    local_f8 = CONCAT412((float) iVar13 * fVar34,
                         CONCAT48((float) (SUB164(auVar20, 0) & 0xffff |
                                           (uint) CONCAT11(uVar24, bVar23) << 0x10) * fVar33,
                                  CONCAT44((float) SUB164(CONCAT106(CONCAT82(SUB168(auVar21 >> 0x40, 0),
                                                                             CONCAT11(uVar26, uVar25)),
                                                                    (SUB166(auVar20, 0) >> 0x10) << 0x20
                                           ) >> 0x20, 0) * fVar32,
                                           (float) SUB164(auVar21 >> 0x40, 0) * fVar31)));
    uVar7 = FUN_140141f10(DAT_140c63678, local_f8);
    uVar15 = 0;
    *(undefined4 * )((longlong) param_1 + 0x554) = uVar7;
    *(undefined4 * )(param_1 + 0xac) = 0x10;
    local_e8[0] = L"WhiteFill";
    *(undefined4 * )((longlong) param_1 + 0x564) = 0xffffffff;
    local_e8[1] = L"WhiteFill";
    *(undefined4 * )(param_1 + 0xc9) = 0;
    local_e8[2] = L"WhiteFill";
    local_e8[3] = L"WhiteFill";
    local_c8 = L"WhiteFill";
    if (param_6 == (undefined8 *) 0x0) {
        lVar10 = param_1[4];
        ppwVar16 = local_e8;
        lVar14 = 6;
        plVar8 = plVar19;
        do {
            if (lVar10 != 0) {
                FUN_140109710(plVar8, lVar10 + 0xf0, *ppwVar16, 0);
            }
            plVar8 = plVar8 + 6;
            ppwVar16 = ppwVar16 + 1;
            lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        FUN_1400c3ad0(plVar19, param_1 + 0xf5);
        uVar12 = (int) *(float *) (param_1[0x57] + 0x5c) + 4;
    } else {
        FUN_1400c3730(plVar19, param_6 + 0x51);
        param_6 = (undefined8 *) 0x0;
        lVar10 = 6;
        uVar18 = uVar15;
        do {
            iVar13 = (int) uVar15;
            iVar17 = (int) uVar18;
            lVar14 = *plVar19;
            if (lVar14 == 0) {
                local_resc = 0;
                local_res8 = 0;
            } else {
                FUN_140101470(lVar14, &local_res8);
            }
            ppuVar11 = &local_res20;
            if ((int) local_res8 <= iVar17) {
                ppuVar11 = &param_6;
            }
            local_res20 = (undefined8 * )
                    ((ulonglong) local_res20 & 0xffffffff00000000 | (ulonglong) local_res8);
            uVar18 = (ulonglong) * (uint *) ppuVar11;
            param_6 = (undefined8 * )
                    ((ulonglong) param_6 & 0xffffffff00000000 | (ulonglong) * (uint *) ppuVar11);
            if (lVar14 == 0) {
                local_res10 = 0;
                local_res14 = 0;
            } else {
                FUN_140101470(lVar14, &local_res10);
            }
            ppuVar11 = &local_res20;
            if ((int) local_res14 <= iVar13) {
                ppuVar11 = (undefined8 * *)((longlong) & param_6 + 4);
            }
            local_res20 = (undefined8 * )
                    ((ulonglong) local_res20 & 0xffffffff00000000 | (ulonglong) local_res14);
            plVar19 = plVar19 + 6;
            uVar4 = *(uint *) ppuVar11;
            uVar15 = (ulonglong) uVar4;
            param_6 = (undefined8 * )((ulonglong) param_6 & 0xffffffff | (ulonglong) uVar4 << 0x20);
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uVar12 = (int) *(float *) (param_1[0x57] + 0x5c) + 4;
        if ((int) uVar12 < (int) uVar4) {
            uVar12 = uVar4;
        }
    }
    *(uint * )((longlong) param_1 + 0x55c) = uVar12;
    return param_1;
}


undefined8 FUN_14016d850(undefined8 param_1, ulonglong param_2) {
    FUN_14016d890();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14016d890(undefined8 *param_1) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    iVar2 = 1;
    *param_1 = &PTR_LAB_140b5cf80;
    if (1 < (int) ((longlong)(param_1[0xb2] - param_1[0xb1]) >> 3)) {
        lVar3 = 8;
        do {
            lVar1 = *(longlong * )(lVar3 + param_1[0xb1]);
            if (lVar1 != 0) {
                FUN_14016cb60(lVar1);
                FUN_14018b900(lVar1, 0);
            }
            iVar2 = iVar2 + 1;
            lVar3 = lVar3 + 8;
        } while (iVar2 < (int) ((longlong)(param_1[0xb2] - param_1[0xb1]) >> 3));
    }
    lVar3 = param_1[0xb2];
    lVar1 = param_1[0xb1];
    FUN_1407db590(lVar1, lVar3, 0);
    param_1[0xb2] = param_1[0xb2] + (lVar3 - lVar1 >> 3) * -8;
    uVar4 = 0;
    if (param_1[0xaf] != 0) {
        do {
            lVar3 = *(longlong * )(param_1[0xae] + uVar4 * 8);
            if (lVar3 != 0) {
                if (*(longlong * *)(lVar3 + 0x10) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar3 + 0x10) + 8))();
                    *(undefined8 * )(lVar3 + 0x10) = 0;
                }
                FUN_1401429a0(DAT_140c63678, *(undefined4 * )(lVar3 + 0x4c));
                if (*(longlong * *)(lVar3 + 0x18) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(lVar3 + 0x18) + 8))();
                    *(undefined8 * )(lVar3 + 0x18) = 0;
                }
                if (*(longlong * )(lVar3 + 0x30) != 0) {
                    FUN_14018b900();
                }
                FUN_14018b900();
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < (ulonglong) param_1[0xaf]);
    }
    if (param_1[0xf2] != 0) {
        FUN_14018b900(param_1[0xf2], 0);
    }
    iVar2 = 5;
    puVar5 = param_1 + 0xef;
    do {
        if ((longlong *) puVar5[-6] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) puVar5[-6] + 8))();
            puVar5[-6] = 0;
        }
        if (puVar5[-3] != 0) {
            FUN_14018b900(puVar5[-3], 0);
        }
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + -6;
    } while (-1 < iVar2);
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x64c));
    lVar3 = param_1[199];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = param_1[0xc5];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    FUN_14016cb60(param_1 + 0xb4);
    if (param_1[0xb1] != 0) {
        FUN_14018b900(param_1[0xb1], 0);
    }
    lVar3 = param_1[0xae];
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x554));
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )(param_1 + 0xaa));
    if ((longlong *) param_1[0xa4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xa4] + 8))();
        param_1[0xa4] = 0;
    }
    if (param_1[0xa7] != 0) {
        FUN_14018b900(param_1[0xa7], 0);
    }
    if ((longlong *) param_1[0x9e] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x9e] + 8))();
        param_1[0x9e] = 0;
    }
    if (param_1[0xa1] != 0) {
        FUN_14018b900(param_1[0xa1], 0);
    }
    if ((longlong *) param_1[0x98] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x98] + 8))();
        param_1[0x98] = 0;
    }
    if (param_1[0x9b] != 0) {
        FUN_14018b900(param_1[0x9b], 0);
    }
    if ((longlong *) param_1[0x92] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if (param_1[0x95] != 0) {
        FUN_14018b900(param_1[0x95], 0);
    }
    if ((longlong *) param_1[0x8c] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x8c] + 8))();
        param_1[0x8c] = 0;
    }
    if (param_1[0x8f] != 0) {
        FUN_14018b900(param_1[0x8f], 0);
    }
    if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if (param_1[0x89] != 0) {
        FUN_14018b900(param_1[0x89], 0);
    }
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83], 0);
    }
    FUN_1400c6030(param_1);
    return;
}


undefined4 FUN_14016dc20(longlong param_1) {
    undefined4 uVar1;

    uVar1 = 1;
    if (*(longlong * )(param_1 + 0x578) != 0) {
        uVar1 = *(undefined4 * )(param_1 + 0x578);
    }
    return uVar1;
}


void FUN_14016dc40(longlong param_1, int *param_2) {
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    char cVar7;
    int iVar8;
    int local_res10[2];

    iVar8 = *param_2;
    if (((-1 < iVar8) &&
         (iVar8 < (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3))) &&
        (lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar8 * 8), lVar1 != 0)) {
        cVar7 = FUN_14016c820(lVar1);
        while (cVar7 != '\0') {
            plVar2 = (longlong * ) * *(longlong * *)(lVar1 + 0x60);
            if (plVar2 == *(longlong * *)(lVar1 + 0x60)) {
                iVar8 = -1;
            } else {
                iVar8 = *(int *) (plVar2 + 2);
            }
            local_res10[0] = iVar8;
            FUN_14016dd40(param_1, local_res10);
            puVar3 = *(undefined8 * *)(lVar1 + 0x60);
            puVar4 = (undefined8 * ) * puVar3;
            while (puVar6 = puVar4, puVar6 != puVar3) {
                puVar4 = (undefined8 * ) * puVar6;
                if (*(int *) (puVar6 + 2) == iVar8) {
                    puVar5 = (undefined8 *) puVar6[1];
                    *puVar5 = puVar4;
                    puVar4[1] = puVar5;
                    FUN_14018b900(puVar6, 0);
                }
            }
            cVar7 = FUN_14016c820(lVar1);
        }
        if (*(char *) (lVar1 + 0x6c) != '\0') {
            *(undefined * )(param_1 + 0x558) = 1;
        }
    }
    return;
}


void FUN_14016dd40(longlong param_1, int *param_2) {
    int iVar1;
    int iVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    bool bVar6;
    undefined8 *puVar7;
    char cVar8;
    longlong lVar9;
    longlong lVar10;
    int local_res8[2];
    int local_res10[2];

    local_res8[0] = *param_2;
    if ((local_res8[0] == *(int *) (param_1 + 0x620)) ||
        (local_res10[0] = *(int *) (param_1 + 0x620),
                cVar8 = FUN_140170340(param_1, local_res10, local_res8), cVar8 != '\0')) {
        bVar6 = true;
    } else {
        bVar6 = false;
    }
    local_res8[0] = *param_2;
    FUN_14016dc40(param_1, local_res8);
    iVar1 = *param_2;
    if (iVar1 != 0) {
        if ((iVar1 < 0) ||
            ((int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) <= iVar1)) {
            lVar10 = 0;
        } else {
            lVar10 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar1 * 8);
        }
        iVar2 = *(int *) (lVar10 + 0x68);
        if ((iVar2 < 0) ||
            ((int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) <= iVar2)) {
            lVar9 = 0;
        } else {
            lVar9 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar2 * 8);
        }
        puVar3 = *(undefined8 * *)(lVar9 + 0x60);
        puVar4 = (undefined8 * ) * puVar3;
        while (puVar7 = puVar4, puVar7 != puVar3) {
            puVar4 = (undefined8 * ) * puVar7;
            if (*(int *) (puVar7 + 2) == iVar1) {
                puVar5 = (undefined8 *) puVar7[1];
                *puVar5 = puVar4;
                puVar4[1] = puVar5;
                FUN_14018b900(puVar7, 0);
            }
        }
        FUN_14016cb60(lVar10);
        FUN_14018b900(lVar10, 0);
        *(undefined8 * )(*(longlong * )(param_1 + 0x588) + (longlong) * param_2 * 8) = 0;
        *(undefined * )(param_1 + 0x558) = 1;
    }
    if (bVar6) {
        *(undefined4 * )(param_1 + 0x620) = 0xffffffff;
        FUN_1400d4070(param_1, 0x42, param_1, &DAT_1409dd484, *(undefined4 * )(param_1 + 0x620),
                      *(undefined4 * )(param_1 + 0x620));
    }
    return;
}


int *FUN_14016ded0(longlong param_1, int *param_2, int *param_3, undefined8 param_4, undefined8 param_5
) {
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    undefined8 local_res18;

    iVar4 = *param_3;
    if (((iVar4 < 0) ||
         ((int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) <= iVar4)) ||
        (lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar4 * 8), lVar1 == 0)) {
        *param_2 = -1;
    } else {
        lVar2 = FUN_14018b280(0x80, 0);
        if (lVar2 != 0) {
            local_res18 = CONCAT44(local_res18._4_4_, *param_3);
            lVar2 = FUN_14016c9a0(lVar2, *(undefined8 * )(param_1 + 0x20), &local_res18,
                                  *(undefined8 * )(param_1 + 0x2b8), param_4, param_5);
        }
        plVar3 = *(longlong * *)(param_1 + 0x590);
        local_res18 = lVar2;
        if (plVar3 == *(longlong * *)(param_1 + 0x598)) {
            FUN_1400b9430(param_1 + 0x580, plVar3, &local_res18);
        } else {
            if (plVar3 != (longlong *) 0x0) {
                *plVar3 = lVar2;
            }
            *(longlong * )(param_1 + 0x590) = *(longlong * )(param_1 + 0x590) + 8;
        }
        lVar1 = *(longlong * )(lVar1 + 0x60);
        iVar4 = (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) + -1;
        plVar3 = (longlong *) FUN_14018b280(0x18);
        if (plVar3 + 2 != (longlong *) 0x0) {
            *(int *) (plVar3 + 2) = iVar4;
        }
        *plVar3 = lVar1;
        lVar2 = *(longlong * )(lVar1 + 8);
        *param_2 = iVar4;
        plVar3[1] = lVar2;
        **(longlong * **)(lVar1 + 8) = plVar3;
        *(longlong * *)(lVar1 + 8) = plVar3;
        *(undefined * )(param_1 + 0x558) = 1;
    }
    return param_2;
}


void FUN_14016e020(longlong param_1, int *param_2) {
    int iVar1;
    longlong lVar2;

    iVar1 = *param_2;
    if (((-1 < iVar1) &&
         (iVar1 < (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3))) &&
        (lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar1 * 8), lVar2 != 0)) {
        *(undefined * )(lVar2 + 0x6c) = 0;
        FUN_1400d4070(param_1, 0x44, param_1, &DAT_1409dd464, *param_2);
        *(undefined * )(param_1 + 0x558) = 1;
    }
    return;
}


void FUN_14016e090(longlong param_1, int *param_2) {
    int iVar1;
    longlong lVar2;

    iVar1 = *param_2;
    if (((-1 < iVar1) &&
         (iVar1 < (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3))) &&
        (lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar1 * 8), lVar2 != 0)) {
        *(undefined * )(lVar2 + 0x6c) = 1;
        FUN_1400d4070(param_1, 0x43, param_1, &DAT_1409dd4cc, *param_2);
        *(undefined * )(param_1 + 0x558) = 1;
    }
    return;
}


int FUN_14016e100(longlong param_1, int *param_2) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong lVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    float extraout_XMM0_Da;
    float fVar9;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined8 local_28[2];
    float local_18;
    undefined4 local_14;

    iVar7 = *param_2;
    if (((iVar7 < 0) ||
         ((int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) <= iVar7)) ||
        (lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar7 * 8), lVar2 == 0)) {
        iVar7 = 0;
    } else {
        puVar4 = (undefined4 * )
                (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x2b8) + 0x60) + 0x20))();
        if (*(ulonglong * )(param_1 + 0x578) < 2) {
            iVar7 = *(int *) (param_1 + 0x2d4) - *(int *) (param_1 + 0x2cc);
        } else if (*(int *) (param_1 + 0x578) < 1) {
            iVar7 = 0;
        } else {
            iVar7 = *(int *) (**(longlong * *)(param_1 + 0x570) + 4);
        }
        iVar3 = *param_2;
        iVar6 = -2;
        if ((-1 < iVar3) &&
            (iVar8 = (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3),
                    iVar3 < iVar8)) {
            lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar3 * 8);
            while (lVar5 != 0) {
                iVar1 = *(int *) (lVar5 + 0x68);
                if ((iVar1 < 0) || (iVar8 <= iVar1)) {
                    lVar5 = 0;
                } else {
                    lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar1 * 8);
                }
                iVar6 = iVar6 + 1;
            }
        }
        if (((iVar3 < 0) ||
             ((int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3) <= iVar3)) ||
            (lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar3 * 8), lVar5 == 0)) {
            iVar3 = 0;
        } else {
            iVar3 = *(int *) (lVar5 + 0x74);
        }
        local_14 = *puVar4;
        local_28[0] = 0;
        fVar9 = 0.0;
        local_18 = (float) (((iVar7 + iVar6 * -0x10) - iVar3) + -0x14);
        if (*(longlong * )(lVar2 + 0x18) == 0) {
            lVar5 = 0;
        } else {
            lVar5 = **(longlong * *)(lVar2 + 0x10);
        }
        if (lVar5 != 0) {
            local_38 = 0x3f800000;
            uStack52 = 0x3f800000;
            uStack48 = 0x3f800000;
            uStack44 = 0x3f800000;
            (**(code * *)(*DAT_140c65680 + 0x118))
                    (DAT_140c65680, lVar5, 0, 0xffffffffffffffff, local_28, 0x400, &local_38, 1, 0);
            fVar9 = extraout_XMM0_Da;
        }
        iVar3 = *(int *) (param_1 + 0x560);
        if (*(int *) (param_1 + 0x560) < (int) fVar9) {
            iVar3 = (int) fVar9;
        }
        iVar7 = *(int *) (lVar2 + 0x74);
        if (*(int *) (lVar2 + 0x74) < iVar3) {
            iVar7 = iVar3;
        }
    }
    return iVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14016e310(longlong param_1, int *param_2) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    longlong lVar12;
    undefined auVar13[16];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    float local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    float local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    iVar3 = *param_2;
    lVar9 = (longlong) iVar3;
    if ((iVar3 < 0) ||
        (iVar5 = (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3),
                iVar5 <= iVar3)) {
        return 0;
    }
    lVar1 = *(longlong * )(param_1 + 0x588);
    lVar2 = *(longlong * )(lVar1 + lVar9 * 8);
    if (lVar2 == 0) {
        return 0;
    }
    iVar11 = 0;
    iVar10 = 0;
    lVar12 = 0;
    lVar7 = param_1;
    iVar3 = FUN_14016dc20();
    if (0 < iVar3) {
        do {
            if (*(ulonglong * )(param_1 + 0x578) < 2) {
                iVar4 = *(int *) (lVar7 + 0x2d4) - *(int *) (lVar7 + 0x2cc);
            } else if (iVar10 < (int) *(ulonglong * )(param_1 + 0x578)) {
                iVar4 = *(int *) (*(longlong * )(*(longlong * )(lVar7 + 0x570) + lVar12 * 8) + 4);
            } else {
                iVar4 = 0;
            }
            lVar12 = lVar12 + 1;
            iVar11 = iVar11 + iVar4;
            iVar10 = iVar10 + 1;
        } while (lVar12 < iVar3);
        if (0 < iVar11) {
            return iVar11;
        }
    }
    iVar3 = -2;
    if ((-1 < (int) lVar9) && (lVar7 = lVar2, (int) lVar9 < iVar5)) {
        while (lVar7 != 0) {
            iVar10 = *(int *) (lVar7 + 0x68);
            if ((iVar10 < 0) || (iVar5 <= iVar10)) {
                lVar7 = 0;
            } else {
                lVar7 = *(longlong * )(lVar1 + (longlong) iVar10 * 8);
            }
            iVar3 = iVar3 + 1;
        }
    }
    iVar3 = iVar3 * 0x10;
    local_38 = _DAT_140c784e0;
    uStack52 = _DAT_140c784e4;
    uStack48 = uRam0000000140c784e8;
    uStack44 = uRam0000000140c784ec;
    local_28 = _DAT_140c784f0;
    uStack36 = _DAT_140c784f4;
    uStack32 = uRam0000000140c784f8;
    uStack28 = uRam0000000140c784fc;
    if ((*(longlong * )(lVar2 + 0x18) != 0) && (**(longlong * *)(lVar2 + 0x10) != 0)) {
        local_48 = 0x3f800000;
        uStack68 = 0x3f800000;
        uStack64 = 0x3f800000;
        uStack60 = 0x3f800000;
        plVar8 = DAT_140c65680;
        (**(code * *)(*DAT_140c65680 + 0x118))
                (DAT_140c65680, **(longlong * *)(lVar2 + 0x10), 0, 0xffffffffffffffff, &local_38, 0x400,
                 &local_48, 1, 0);
        auVar13 = ZEXT416((uint)(local_28 - local_38)) & (undefined[16]) 0xffffffffffffffff;
        iVar5 = (int) SUB164(auVar13, 0);
        if ((iVar5 != -0x80000000) && ((float) iVar5 != SUB164(auVar13, 0))) {
            uVar6 = movmskps((int) plVar8, ZEXT816(SUB168(auVar13, 0) | SUB168(auVar13, 0) << 0x20));
            auVar13 = ZEXT416((uint)(float)(iVar5 + (uVar6 & 1 ^ 1)));
        }
        iVar3 = iVar3 + (int) SUB164(auVar13, 0);
    }
    return iVar3;
}


void FUN_14016e510(longlong param_1, undefined4 *param_2, char param_3) {
    undefined4 uVar1;
    int local_res8[2];
    undefined4 uVar2;
    int *piVar3;

    if ((*(byte * )(param_1 + 0x298) & 1) == 0) {
        piVar3 = local_res8;
        local_res8[0] = 1;
        FUN_1400d4070(param_1, 0x41, param_1, &DAT_140a381a4, *param_2, *(undefined4 * )(param_1 + 0x620),
                      piVar3);
        if (local_res8[0] != 0) {
            uVar1 = *param_2;
            uVar2 = *(undefined4 * )(param_1 + 0x620);
            *(undefined4 * )(param_1 + 0x620) = uVar1;
            FUN_1400d4070(param_1, 0x42, param_1, &DAT_1409dd50c, uVar1, uVar2, piVar3);
            if (param_3 != '\0') {
                FUN_1400d4070(param_1, 0x45, param_1, &DAT_1409dd4ec, *(undefined4 * )(param_1 + 0x620), uVar2,
                              piVar3);
            }
        }
    }
    return;
}


int *FUN_14016e5e0(longlong param_1, int *param_2, int *param_3, undefined *param_4, int *param_5) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    longlong lVar12;
    uint uVar13;
    int iVar14;

    lVar12 = *(longlong * )(param_1 + 0x1d0);
    iVar8 = *(int *) (param_1 + 0x2cc);
    iVar7 = *(int *) (param_1 + 0x2d0);
    iVar11 = *(int *) (param_1 + 0x2d4);
    if (lVar12 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(int *) (lVar12 + 0x514);
    }
    uVar6 = *(ulonglong * )(param_1 + 0x1d8);
    if (uVar6 != 0) {
        uVar6 = (ulonglong) * (uint * )(uVar6 + 0x514);
    }
    iVar14 = param_3[1] + (int) uVar6;
    if (lVar12 == 0) {
        iVar5 = 0;
    } else {
        iVar5 = *(int *) (lVar12 + 0x514);
    }
    uVar6 = *(ulonglong * )(param_1 + 0x578);
    uVar13 = *param_3 + iVar3 + iVar5;
    uVar10 = (ulonglong) uVar13;
    iVar3 = 1;
    if (uVar6 != 0) {
        iVar3 = (int) uVar6;
    }
    uVar9 = 0;
    lVar12 = 0;
    *param_5 = iVar3;
    iVar3 = FUN_14016dc20(param_1);
    if (0 < iVar3) {
        do {
            iVar5 = (int) uVar9;
            if (uVar6 < 2) {
                iVar4 = iVar11 - iVar8;
            } else if (iVar5 < (int) uVar6) {
                iVar4 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar12 * 8) + 4);
            } else {
                iVar4 = 0;
            }
            if ((int) uVar10 < iVar4) {
                *param_5 = iVar5;
                break;
            }
            if (uVar6 < 2) {
                iVar4 = iVar11 - iVar8;
            } else if (iVar5 < (int) uVar6) {
                iVar4 = *(int *) (*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar12 * 8) + 4);
            } else {
                iVar4 = 0;
            }
            lVar12 = lVar12 + 1;
            uVar10 = (ulonglong)(uint)((int) uVar10 - iVar4);
            uVar9 = (ulonglong)(iVar5 + 1);
        } while (lVar12 < iVar3);
    }
    if ((*(byte * )(param_1 + 0x298) >> 4 & 1) != 0) {
        if (iVar14 < *(int *) (param_1 + 0x55c)) {
            *param_2 = 0x10;
            *param_4 = 0;
            return param_2;
        }
        iVar14 = iVar14 - *(int *) (param_1 + 0x55c);
    }
    uVar6 = *(ulonglong * )(param_1 + 0x640);
    uVar10 = 0;
    *param_4 = 0;
    if (uVar6 != 0) {
        do {
            iVar3 = *(int *) (*(longlong * )(param_1 + 0x638) + uVar10 * 4);
            param_5._0_4_ = iVar3;
            iVar5 = FUN_14016e100(param_1, &param_5);
            if ((((iVar8 <= (int) uVar13) && ((int) uVar13 < iVar11)) && (iVar7 <= iVar14)) &&
                (iVar14 < iVar5 + iVar7)) {
                iVar7 = -2;
                if ((-1 < iVar3) &&
                    (iVar11 = (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3),
                            iVar3 < iVar11)) {
                    lVar12 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar3 * 8);
                    while (lVar12 != 0) {
                        iVar14 = *(int *) (lVar12 + 0x68);
                        if ((iVar14 < 0) || (iVar11 <= iVar14)) {
                            lVar12 = 0;
                        } else {
                            lVar12 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar14 * 8);
                        }
                        iVar7 = iVar7 + 1;
                    }
                }
                iVar8 = iVar7 * 0x10 + iVar8;
                if (((-1 < iVar3) &&
                     (iVar3 < (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3)))
                    && (lVar12 = *(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) iVar3 * 8),
                        lVar12 != 0)) {
                    puVar1 = *(undefined8 * *)(lVar12 + 0x60);
                    iVar7 = 0;
                    for (puVar2 = (undefined8 * ) * puVar1; puVar2 != puVar1; puVar2 = (undefined8 * ) * puVar2) {
                        iVar7 = iVar7 + 1;
                    }
                    if (((iVar7 != 0) && (iVar8 <= (int) uVar13)) && ((int) uVar13 < iVar8 + 0x10)) {
                        *param_4 = 1;
                        *param_2 = iVar3;
                        return param_2;
                    }
                }
                *param_4 = 0;
                *param_2 = iVar3;
                return param_2;
            }
            uVar10 = uVar10 + 1;
            iVar7 = iVar5 + iVar7;
        } while (uVar10 < uVar6);
    }
    *param_2 = -1;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14016e890(longlong param_1) {
    byte *pbVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    longlong *plVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined2 *puVar10;
    undefined8 *puVar11;
    undefined4 *puVar12;
    longlong lVar13;
    ulonglong uVar14;
    int iVar15;
    int iVar16;
    undefined8 *puVar17;
    int local_res10;
    int local_res18;
    undefined8 local_res20;
    undefined local_a8[8];
    longlong local_a0;
    longlong local_98;
    undefined4 *local_90;
    undefined local_88[16];
    undefined8 *local_78;
    undefined4 *puStack112;
    undefined local_68[16];
    undefined8 *local_58;

    local_res18 = 0;
    local_res10 = 0;
    if ((*(byte * )(param_1 + 0x298) >> 4 & 1) != 0) {
        local_res10 = *(int *) (param_1 + 0x55c);
    }
    *(undefined8 * )(param_1 + 0x640) = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = (undefined4 *) 0x0;
    local_88 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_58 = (undefined8 *) 0x0;
    local_78 = (undefined8 *) 0x0;
    puStack112 = (undefined4 *) 0x0;
    FUN_140172f70();
    plVar7 = *(longlong * *)(param_1 + 0x600);
    puVar17 = local_58;
    if (plVar7 != (longlong * ) * plVar7) {
        do {
            uVar2 = *(undefined4 * )(plVar7[1] + 0x10);
            if (puStack112 == local_68._8_8_ + -1) {
                if ((ulonglong)(local_98 - ((longlong) puVar17 - local_a0 >> 3)) < 2) {
                    FUN_140173030(local_a8);
                    puVar17 = local_58;
                }
                puVar12 = puStack112;
                puVar17 = puVar17 + 1;
                uVar8 = FUN_14018b280(0x1f0);
                *puVar17 = uVar8;
                if (puVar12 != (undefined4 *) 0x0) {
                    *puVar12 = uVar2;
                }
                puStack112 = (undefined4 * ) * puVar17;
                local_68._8_8_ = puStack112 + 0x7c;
                local_68 = CONCAT88(local_68._8_8_, puStack112);
                local_68._0_8_ = puStack112;
                local_58 = puVar17;
            } else {
                if (puStack112 != (undefined4 *) 0x0) {
                    *puStack112 = uVar2;
                }
                puStack112 = puStack112 + 1;
            }
            plVar7 = (longlong *) plVar7[1];
        } while (plVar7 != **(longlong * **)(param_1 + 0x600));
    }
    puVar12 = puStack112;
    if (puStack112 != local_90) {
        do {
            puVar6 = puVar12;
            if (puVar12 == local_68._0_8_) {
                puVar6 = (undefined4 * )(puVar17[-1] + 0x1f0);
            }
            local_res20._0_4_ = puVar6[-1];
            local_res20 = (undefined4 * )
                    ((ulonglong) local_res20 & 0xffffffff00000000 | (ulonglong)(uint)
            local_res20);
            if (puVar12 == local_68._0_8_) {
                FUN_14018b900();
                local_68._0_8_ = (undefined4 *) puVar17[-1];
                puVar17 = puVar17 + -1;
                local_68._8_8_ = local_68._0_8_ + 0x7c;
                puVar12 = local_68._0_8_ + 0x7b;
                local_58 = puVar17;
            } else {
                puVar12 = puVar12 + -1;
            }
            puStack112 = puVar12;
            if (((-1 < (int) (uint) local_res20) &&
                 ((int) (uint) local_res20 <
                  (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3))) &&
                (lVar9 = *(longlong * )
                        (*(longlong * )(param_1 + 0x588) + (longlong)(int)(uint)
                local_res20 * 8),
            lVar9 != 0)) {
                if ((*(char *) (lVar9 + 0x6c) != '\0') &&
                    (plVar7 = *(longlong * *)(lVar9 + 0x60), lVar13 = local_a0, plVar7 != (longlong * ) * plVar7)
                        ) {
                    do {
                        uVar2 = *(undefined4 * )((longlong *) plVar7[1] + 2);
                        if (puStack112 == local_68._8_8_ + -1) {
                            if ((ulonglong)(local_98 - ((longlong) puVar17 - lVar13 >> 3)) < 2) {
                                FUN_140173030(local_a8);
                                lVar13 = local_a0;
                                puVar17 = local_58;
                            }
                            puVar12 = puStack112;
                            puVar17 = puVar17 + 1;
                            uVar8 = FUN_14018b280(0x1f0, 0);
                            *puVar17 = uVar8;
                            if (puVar12 != (undefined4 *) 0x0) {
                                *puVar12 = uVar2;
                            }
                            puStack112 = (undefined4 * ) * puVar17;
                            local_68._8_8_ = puStack112 + 0x7c;
                            local_68 = CONCAT88(local_68._8_8_, puStack112);
                            local_68._0_8_ = puStack112;
                            local_58 = puVar17;
                        } else {
                            if (puStack112 != (undefined4 *) 0x0) {
                                *puStack112 = uVar2;
                            }
                            puStack112 = puStack112 + 1;
                        }
                        plVar7 = (longlong *) plVar7[1];
                    } while (plVar7 != **(longlong * **)(lVar9 + 0x60));
                }
                puVar12 = puStack112;
                local_res20 = (undefined4 * )
                        ((ulonglong) local_res20 & 0xffffffff00000000 | (ulonglong)(uint)
                local_res20);
                iVar4 = FUN_14016e100(param_1, &local_res20);
                local_res10 = local_res10 + iVar4;
                local_res20 = (undefined4 * )
                        ((ulonglong) local_res20 & 0xffffffff00000000 | (ulonglong)(uint)
                local_res20);
                iVar4 = FUN_14016e310(param_1, &local_res20);
                lVar9 = *(longlong * )(param_1 + 0x640);
                if (local_res18 < iVar4) {
                    local_res18 = iVar4;
                }
                local_res20 = (undefined4 *) FUN_14018db00(*(undefined8 * )(param_1 + 0x638));
                if (local_res20 + lVar9 != (uint *) 0x0) {
                    local_res20[lVar9] = (uint) local_res20;
                }
                if (*(undefined4 * *)(param_1 + 0x638) != local_res20) {
                    uVar14 = 0;
                    if (*(longlong * )(param_1 + 0x640) != 0) {
                        puVar6 = local_res20;
                        do {
                            if (puVar6 != (undefined4 *) 0x0) {
                                *puVar6 = *(undefined4 * )
                                        ((longlong) puVar6 +
                                         (*(longlong * )(param_1 + 0x638) - (longlong) local_res20));
                            }
                            uVar14 = uVar14 + 1;
                            puVar6 = puVar6 + 1;
                        } while (uVar14 < *(ulonglong * )(param_1 + 0x640));
                    }
                    if (*(longlong * )(param_1 + 0x638) != 0) {
                        (**(code * *)(*(longlong * )(*(longlong * )(param_1 + 0x638) + -0x10) + 8))();
                    }
                    *(undefined4 * *)(param_1 + 0x638) = local_res20;
                }
                *(longlong * )(param_1 + 0x640) = lVar9 + 1;
            }
        } while (puVar12 != local_90);
    }
    puVar6 = local_90;
    iVar4 = *(int *) (param_1 + 0x2d0);
    local_res20._0_4_ = *(int *) (param_1 + 0x2cc);
    iVar16 = *(int *) (param_1 + 0x2d4);
    iVar3 = *(int *) (param_1 + 0x2d8);
    local_res18 = ((uint) local_res20 - iVar16) + local_res18;
    iVar15 = 0;
    if (0 < local_res18) {
        iVar15 = local_res18;
    }
    if (iVar15 < 0) {
        iVar15 = 0;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10, 0);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                *(undefined4 * )(lVar9 + 0x4e8) = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d0);
        *(int *) (lVar9 + 0x510) = iVar15;
        if (*(int *) (lVar9 + 0x514) < iVar15) {
            iVar15 = *(int *) (lVar9 + 0x514);
        }
        iVar5 = 0;
        if (0 < iVar15) {
            iVar5 = iVar15;
        }
        *(byte * )(lVar9 + 0x570) = *(byte * )(lVar9 + 0x570) | 0x10;
        *(int *) (lVar9 + 0x514) = iVar5;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d0);
        pbVar1 = (byte * )(lVar9 + 0x570);
        *pbVar1 = *pbVar1 | 0x10;
        *(uint * )(lVar9 + 0x518) = iVar16 - (uint) local_res20;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d0);
        *(undefined4 * )(lVar9 + 0x330) = 0x3c000000;
        *(undefined4 * )(lVar9 + 400) = 0x3c000000;
    }
    if (((*(byte * )(param_1 + 0x290) >> 2 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d0) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d0) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0x198, 0);
        }
        *(undefined4 * )(*(longlong * )(param_1 + 0x1d0) + 0x51c) = 0x10;
    }
    local_res10 = (iVar4 - iVar3) + local_res10;
    iVar16 = 0;
    if (0 < local_res10) {
        iVar16 = local_res10;
    }
    if (iVar16 < 0) {
        iVar16 = 0;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10, 0);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                *(undefined4 * )(lVar9 + 0x4e8) = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        *(int *) (lVar9 + 0x510) = iVar16;
        if (*(int *) (lVar9 + 0x514) < iVar16) {
            iVar16 = *(int *) (lVar9 + 0x514);
        }
        iVar15 = 0;
        if (0 < iVar16) {
            iVar15 = iVar16;
        }
        *(byte * )(lVar9 + 0x570) = *(byte * )(lVar9 + 0x570) | 0x10;
        *(int *) (lVar9 + 0x514) = iVar15;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        pbVar1 = (byte * )(lVar9 + 0x570);
        *pbVar1 = *pbVar1 | 0x10;
        *(int *) (lVar9 + 0x518) = iVar3 - iVar4;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        lVar9 = *(longlong * )(param_1 + 0x1d8);
        *(undefined4 * )(lVar9 + 0x330) = 0x3c000000;
        *(undefined4 * )(lVar9 + 400) = 0x3c000000;
    }
    if (((*(byte * )(param_1 + 0x290) >> 1 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
        if (*(longlong * )(param_1 + 0x1d8) == 0) {
            lVar9 = FUN_14018b280(0x578, 0);
            if (lVar9 != 0) {
                FUN_1400c35f0(lVar9);
                FUN_1400c35f0(lVar9 + 0x1a0);
                FUN_1400c35f0(lVar9 + 0x340);
                *(undefined8 * )(lVar9 + 0x4f8) = 0;
                *(undefined8 * )(lVar9 + 0x500) = 0;
                *(undefined8 * )(lVar9 + 0x508) = 0;
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                *(undefined2 * *)(lVar9 + 0x4f8) = puVar10;
                *(undefined2 * *)(lVar9 + 0x500) = puVar10;
                *(undefined2 * *)(lVar9 + 0x508) = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                uVar2 = DAT_140c63664;
                *(undefined8 * )(lVar9 + 0x4e0) = 0;
                *(undefined4 * )(lVar9 + 0x4e8) = uVar2;
                *(undefined4 * )(lVar9 + 0x4ec) = 0x3f800000;
                FUN_1400c41e0(lVar9);
            }
            *(longlong * )(param_1 + 0x1d8) = lVar9;
            FUN_1400c4330(lVar9, *(longlong * )(param_1 + 0x30) + 0xa8, 1);
        }
        *(undefined4 * )(*(longlong * )(param_1 + 0x1d8) + 0x51c) = 0x10;
    }
    *(undefined * )(param_1 + 0x558) = 0;
    FUN_14016f5c0(param_1);
    lVar9 = local_a0;
    puVar11 = local_78;
    while (puVar6 != puVar12) {
        puVar6 = puVar6 + 1;
        if (puVar6 == local_88._8_8_) {
            puVar6 = (undefined4 *) puVar11[1];
            puVar11 = puVar11 + 1;
            local_88._8_8_ = puVar6 + 0x7c;
        }
    }
    if (local_a0 != 0) {
        for (puVar11 = local_78; puVar11 < puVar17 + 1; puVar11 = puVar11 + 1) {
            FUN_14018b900(*puVar11, 0);
        }
        FUN_14018b900(lVar9, 0);
    }
    return;
}


void FUN_14016f5c0(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    int local_res8[2];
    int local_res10[2];

    *(undefined8 * )(param_1 + 0x630) = 0;
    uVar4 = *(ulonglong * )(param_1 + 0x1d8);
    iVar5 = *(int *) (param_1 + 0x2d0);
    iVar1 = *(int *) (param_1 + 0x2d8);
    if (uVar4 != 0) {
        uVar4 = (ulonglong) * (uint * )(uVar4 + 0x514);
    }
    iVar6 = DAT_140c784c4 - (int) uVar4;
    if ((*(byte * )(param_1 + 0x298) >> 4 & 1) != 0) {
        iVar6 = iVar6 + *(int *) (param_1 + 0x55c);
        iVar5 = iVar5 + *(int *) (param_1 + 0x55c);
    }
    uVar4 = *(ulonglong * )(param_1 + 0x640);
    uVar7 = 0;
    if (uVar4 != 0) {
        do {
            local_res8[0] = *(int *) (*(longlong * )(param_1 + 0x638) + uVar7 * 4);
            if (((-1 < local_res8[0]) &&
                 (local_res8[0] <
                  (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3))) &&
                (*(longlong * )(*(longlong * )(param_1 + 0x588) + (longlong) local_res8[0] * 8) != 0)) {
                local_res10[0] = local_res8[0];
                iVar2 = FUN_14016e100(param_1, local_res8);
                iVar6 = iVar6 + iVar2;
                if (iVar5 <= iVar6) {
                    if (*(longlong * )(param_1 + 0x630) == 0) {
                        iVar3 = (iVar2 - iVar6) - iVar5;
                        iVar2 = 0;
                        if (0 < iVar3) {
                            iVar2 = iVar3;
                        }
                        *(int *) (param_1 + 0x648) = iVar2;
                    }
                    FUN_140172eb0(param_1 + 0x628, local_res10);
                }
                if (iVar1 < iVar6) {
                    return;
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
    }
    return;
}


void FUN_140170080(longlong param_1) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    ulonglong uVar10;
    uint uVar11;
    undefined *in_stack_ffffffffffffff88;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    undefined local_38[16];
    undefined local_28[16];
    ulonglong uVar12;

    if ((*(byte * )(param_1 + 0x298) >> 4 & 1) != 0) {
        local_40 = *(int *) (param_1 + 0x2d4);
        local_44 = *(int *) (param_1 + 0x2d0);
        local_3c = *(int *) (param_1 + 0x55c) + local_44;
        uVar10 = 0;
        iVar8 = 0;
        if (*(longlong * )(param_1 + 0x1d0) != 0) {
            iVar8 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
        }
        iVar8 = *(int *) (param_1 + 0x2cc) - iVar8;
        iVar9 = *(int *) (param_1 + 0x578);
        if (0 < iVar9) {
            lVar7 = 1;
            lVar4 = DAT_140c63678;
            uVar12 = uVar10;
            local_48 = iVar8;
            do {
                lVar1 = *(longlong * )(uVar10 + *(longlong * )(param_1 + 0x570));
                iVar5 = local_48;
                if (*(char *) (lVar1 + 1) == '\0') {
                    iVar5 = *(int *) (lVar1 + 4);
                    if (lVar7 < iVar9) {
                        plVar2 = (longlong * )(*(longlong * )(param_1 + 0x570) + 8 + uVar10);
                        lVar3 = lVar7;
                        do {
                            if (*(char *) (*plVar2 + 1) == '\0') break;
                            iVar5 = iVar5 + *(int *) (*plVar2 + 4);
                            lVar3 = lVar3 + 1;
                            plVar2 = plVar2 + 1;
                        } while (lVar3 < iVar9);
                    }
                    if ((ulonglong) * (uint * )(param_1 + 0x64c) < *(ulonglong * )(lVar4 + 0x30)) {
                        lVar3 = (ulonglong) * (uint * )(param_1 + 0x64c) * 0x20 + *(longlong * )(lVar4 + 0x28);
                    } else {
                        lVar3 = *(longlong * )(lVar4 + 0x28);
                    }
                    iVar9 = iVar8;
                    if (*(longlong * )(param_1 + 0x658) != 0) {
                        in_stack_ffffffffffffff88 =
                                (undefined * )
                                        ((ulonglong) in_stack_ffffffffffffff88 & 0xffffffff00000000 |
                                         (ulonglong)
                                                 (uint)((DAT_140c63664 - *(float *) (param_1 + 0x660)) *
                                                        *(float *) (param_1 + 0x664))
                                        );
                        FUN_140103cf0(*(longlong * )(param_1 + 0x658), &local_48, lVar3, 0, in_stack_ffffffffffffff88
                        );
                        lVar4 = DAT_140c63678;
                        iVar9 = local_48;
                    }
                    local_40 = iVar5 + iVar9;
                    iVar8 = local_40;
                    iVar5 = local_40;
                    if (*(longlong * )(lVar1 + 0x10) != 0) {
                        uVar6 = (ulonglong) * (uint * )(lVar1 + 0x4c);
                        local_38 = ZEXT816(CONCAT44((float) local_44, (float) iVar9));
                        local_28 = ZEXT816(CONCAT44((float) local_3c, (float) local_40));
                        if (uVar6 < *(ulonglong * )(lVar4 + 0x30)) {
                            lVar3 = (ulonglong) * (uint * )(lVar1 + 0x4c) * 0x20;
                            iVar8 = *(int *) (lVar3 + 0x10 + *(longlong * )(lVar4 + 0x28));
                            if (iVar8 - 1U < 0xfffffffe) {
                                *(int *) (lVar3 + 0x10 + *(longlong * )(lVar4 + 0x28)) = iVar8 + 1;
                            }
                            if (*(ulonglong * )(lVar4 + 0x30) <= uVar6) goto LAB_140170285;
                            lVar4 = uVar6 * 0x20 + *(longlong * )(lVar4 + 0x28);
                        } else {
                            LAB_140170285:
                            lVar4 = *(longlong * )(lVar4 + 0x28);
                        }
                        in_stack_ffffffffffffff88 = local_38;
                        (**(code * *)(*DAT_140c65680 + 0x118))
                                (DAT_140c65680, *(undefined8 * )(lVar1 + 0x10), 0, 0xffffffffffffffff,
                                 in_stack_ffffffffffffff88, *(undefined4 * )(lVar1 + 0x48), lVar4, 1, 0);
                        FUN_1401429a0(DAT_140c63678, uVar6);
                        lVar4 = DAT_140c63678;
                        iVar8 = local_40;
                        iVar5 = local_40;
                    }
                }
                local_48 = iVar5;
                iVar9 = *(int *) (param_1 + 0x578);
                uVar11 = (int) uVar12 + 1;
                uVar12 = (ulonglong) uVar11;
                uVar10 = uVar10 + 8;
                lVar7 = lVar7 + 1;
            } while ((int) uVar11 < iVar9);
        }
    }
    return;
}


ulonglong FUN_140170340(longlong param_1, int *param_2, int *param_3) {
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;

    iVar1 = *param_2;
    uVar3 = (ulonglong) iVar1;
    if ((((iVar1 != -1) && (iVar2 = *param_3, iVar2 != -1)) && (iVar1 != iVar2)) &&
        ((-1 < iVar1 &&
          (iVar4 = (int) (*(longlong * )(param_1 + 0x590) - *(longlong * )(param_1 + 0x588) >> 3),
                  iVar1 < iVar4)))) {
        for (uVar3 = *(ulonglong * )(*(longlong * )(param_1 + 0x588) + uVar3 * 8); uVar3 != 0;
             uVar3 = *(ulonglong * )(*(longlong * )(param_1 + 0x588) + uVar3 * 8)) {
            iVar1 = *(int *) (uVar3 + 0x68);
            uVar3 = (ulonglong) iVar1;
            if (iVar1 == iVar2) {
                return CONCAT71((int7)(int3)((uint) iVar1 >> 8), 1);
            }
            if ((iVar1 < 0) || (iVar4 <= iVar1)) break;
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


undefined8 FUN_140170510(longlong param_1, int *param_2) {
    longlong lVar1;
    char cVar2;
    int iVar3;
    undefined8 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_res18[2];

    cVar2 = FUN_140001d30();
    if (cVar2 != '\0') {
        iVar3 = *(int *) (param_1 + 0x564);
        iVar6 = *(int *) (param_1 + 0x388) - *param_2;
        iVar7 = *(int *) (param_1 + 0x38c) - param_2[1];
        if (-1 < iVar3) {
            if (iVar3 < *(int *) (param_1 + 0x578)) {
                lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x570) + (longlong) iVar3 * 8);
                iVar5 = *(int *) (param_1 + 0x568) - iVar6;
                iVar3 = *(int *) (lVar1 + 8);
                if ((*(int *) (lVar1 + 8) <= iVar5) && (iVar3 = iVar5, *(int *) (lVar1 + 0xc) < iVar5)) {
                    iVar3 = *(int *) (lVar1 + 0xc);
                }
                *(int *) (lVar1 + 4) = iVar3;
                FUN_14016e890(param_1);
            } else {
                *(undefined4 * )(param_1 + 0x564) = 0xffffffff;
            }
        }
        if ((((*(int *) (param_1 + 0x624) != -1) &&
              (*(longlong * )(*(longlong * )(param_1 + 0x20) + 0xd38) == 0)) &&
             (0x30 < iVar7 * iVar7 + iVar6 * iVar6)) &&
            (iVar3 = FUN_14018cdf0(), 0x7d < (uint)(iVar3 - *(int *) (param_1 + 0x3a4)))) {
            local_res18[0] = 0;
            FUN_1400d4070(param_1, 0x13, param_1, &DAT_140a38154, *(undefined4 * )(param_1 + 0x388),
                          *(undefined4 * )(param_1 + 0x38c), local_res18);
            if (local_res18[0] != 0) {
                FUN_1400d23b0(param_1, param_2);
                return 0;
            }
        }
    }
    uVar4 = FUN_1400d23b0(param_1, param_2);
    return uVar4;
}


undefined8 FUN_140170650(longlong param_1, int param_2, undefined4 *param_3) {
    undefined8 uVar1;
    int local_res8[2];

    if ((-1 < *(int *) (param_1 + 0x564)) && (param_2 == 0)) {
        *(undefined4 * )(param_1 + 0x564) = 0xffffffff;
    }
    if ((*(int *) (param_1 + 0x624) != -1) &&
        (*(longlong * )(*(longlong * )(param_1 + 0x20) + 0xd38) == 0)) {
        local_res8[0] = 0;
        FUN_1400d4070(param_1, 0x14, param_1, &DAT_140a3814c, *param_3, param_3[1], local_res8);
        if (local_res8[0] != 0) {
            FUN_1400d2550(param_1, param_2, param_3);
            return 0;
        }
    }
    *(undefined4 * )(param_1 + 0x624) = 0xffffffff;
    uVar1 = FUN_1400d2550(param_1, param_2, param_3);
    return uVar1;
}


undefined8 FUN_140170850(longlong param_1, int *param_2) {
    int iVar1;
    char **ppcVar2;
    int iVar3;
    ulonglong uVar4;

    if (*(longlong * )(param_1 + 0x1d0) == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(int *) (*(longlong * )(param_1 + 0x1d0) + 0x514);
    }
    iVar3 = -iVar3;
    uVar4 = 0;
    *(undefined4 * )(param_1 + 0x564) = 0xffffffff;
    if (*(ulonglong * )(param_1 + 0x578) != 0) {
        ppcVar2 = *(char ***) (param_1 + 0x570);
        do {
            if (**ppcVar2 == '\0') {
                iVar1 = 0;
            } else {
                iVar1 = *(int *) (*ppcVar2 + 4);
            }
            iVar3 = iVar3 + iVar1;
            if ((iVar3 <= *param_2) && (*param_2 < iVar3 + 10)) {
                *(int *) (param_1 + 0x564) = (int) uVar4;
                *(undefined4 * )(param_1 + 0x568) = *(undefined4 * )(*ppcVar2 + 4);
            }
            uVar4 = uVar4 + 1;
            ppcVar2 = ppcVar2 + 1;
        } while (uVar4 < *(ulonglong * )(param_1 + 0x578));
    }
    return 0;
}


void FUN_1401708e0(longlong param_1, longlong param_2) {
    longlong *plVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;

    if (param_2 != 0) {
        lVar4 = FUN_1400e58c0(*(undefined8 * )(param_1 + 0x20));
        *(longlong * )(param_1 + 0x650) = lVar4;
        if (lVar4 == 0) {
            *(undefined8 * )(param_1 + 0x650) = *(undefined8 * )(param_1 + 0x2b8);
        }
        uVar5 = 0;
        iVar3 = FUN_14016dc20(param_1);
        uVar7 = uVar5;
        if (0 < iVar3) {
            do {
                lVar4 = *(longlong * )(uVar5 + *(longlong * )(param_1 + 0x570));
                if (*(longlong * )(param_1 + 0x650) != 0) {
                    plVar1 = *(longlong * *)(lVar4 + 0x10);
                    uVar2 = *(undefined8 * )(*(longlong * )(param_1 + 0x650) + 0x60);
                    if (plVar1 == (longlong *) 0x0) {
                        (**(code * *)(*DAT_140c65680 + 0x28))
                                (DAT_140c65680, uVar2, &DAT_1409dd27c, 0xffffffffffffffff, lVar4 + 0x10);
                    } else {
                        (**(code * *)(*plVar1 + 0x28))(plVar1, uVar2);
                    }
                }
                uVar6 = (int) uVar7 + 1;
                uVar5 = uVar5 + 8;
                iVar3 = FUN_14016dc20(param_1);
                uVar7 = (ulonglong) uVar6;
            } while ((int) uVar6 < iVar3);
        }
    }
    return;
}


void FUN_1401709a0(longlong param_1, int param_2, int param_3) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined local_68[8];
    longlong local_60;
    longlong local_40;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined local_18;
    uint local_14[3];

    if (-1 < param_2) {
        if (param_2 <= *(int *) (param_1 + 0x578)) {
            if (param_2 == *(int *) (param_1 + 0x578)) {
                FUN_14016c730(local_68);
                local_18 = 0;
                if (local_14 == (uint * )(param_1 + 0x2c4)) {
                    uVar3 = (ulonglong) local_14[0];
                } else {
                    FUN_1401429a0(DAT_140c63678, local_14[0]);
                    local_14[0] = *(uint * )(param_1 + 0x2c4);
                    uVar3 = (ulonglong) local_14[0];
                    if (uVar3 < *(ulonglong * )(DAT_140c63678 + 0x30)) {
                        lVar2 = *(longlong * )(DAT_140c63678 + 0x28) + (ulonglong) local_14[0] * 0x20;
                        iVar1 = *(int *) (lVar2 + 0x10);
                        if (iVar1 - 1U < 0xfffffffe) {
                            *(int *) (lVar2 + 0x10) = iVar1 + 1;
                        }
                    }
                }
                local_20 = 0x400;
                local_24 = 10;
                local_1c = 4;
                local_28 = param_3;
                FUN_140170ba0(param_1, local_68);
                FUN_1401429a0(DAT_140c63678, uVar3);
                if (local_40 != 0) {
                    FUN_14018b900(local_40, 0);
                }
                if (local_60 != 0) {
                    FUN_14018b900(local_60, 0);
                }
            }
            lVar2 = *(longlong * )(*(longlong * )(param_1 + 0x570) + (longlong) param_2 * 8);
            iVar1 = *(int *) (lVar2 + 8);
            if ((*(int *) (lVar2 + 8) <= param_3) && (iVar1 = param_3, *(int *) (lVar2 + 0xc) < param_3)) {
                iVar1 = *(int *) (lVar2 + 0xc);
            }
            *(int *) (lVar2 + 4) = iVar1;
            FUN_14016e890(param_1);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140170af0(longlong param_1, int param_2, longlong param_3) {
    longlong lVar1;
    longlong *plVar2;

    if ((-1 < param_2) && (param_2 < *(int *) (param_1 + 0x578))) {
        lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x570) + (longlong) param_2 * 8);
        if (param_3 != 0) {
            plVar2 = *(longlong * *)(lVar1 + 0x10);
            if (plVar2 != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x000140170b8c. Too many branches
                // WARNING: Treating indirect jump as call
                (**(code * *)(*plVar2 + 0x38))(plVar2, param_3, 0xffffffffffffffff);
                return;
            }
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, _DAT_00000060, param_3, 0xffffffffffffffff, lVar1 + 0x10);
            return;
        }
        if (*(longlong * *)(lVar1 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(lVar1 + 0x10) + 8))();
            *(undefined8 * )(lVar1 + 0x10) = 0;
            return;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140170ba0(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    int iVar6;

    lVar3 = FUN_14018b280(0x50);
    if (lVar3 == 0) {
        uVar4 = 0;
    } else {
        uVar4 = FUN_14016c870(lVar3);
    }
    lVar1 = *(longlong * )(param_1 + 0x578);
    lVar3 = lVar1 + 1;
    lVar5 = FUN_14018db00(*(undefined8 * )(param_1 + 0x570), lVar3, 8);
    *(undefined8 * )(lVar5 + lVar1 * 8) = uVar4;
    if (*(longlong * )(param_1 + 0x570) != lVar5) {
        FUN_1407db590(lVar5, *(longlong * )(param_1 + 0x570), *(longlong * )(param_1 + 0x578) << 3);
        lVar1 = *(longlong * )(param_1 + 0x570);
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(longlong * )(param_1 + 0x570) = lVar5;
    }
    *(longlong * )(param_1 + 0x578) = lVar3;
    lVar1 = *(longlong * )(param_2 + 8);
    iVar6 = (int) lVar3 + -1;
    lVar3 = (longlong) iVar6 * 8;
    lVar5 = *(longlong * )(lVar3 + *(longlong * )(param_1 + 0x570));
    if (lVar1 == 0) {
        if (*(longlong * *)(lVar5 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(lVar5 + 0x10) + 8))();
            *(undefined8 * )(lVar5 + 0x10) = 0;
        }
    } else {
        plVar2 = *(longlong * *)(lVar5 + 0x10);
        if (plVar2 == (longlong *) 0x0) {
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, _DAT_00000060, lVar1, 0xffffffffffffffff, lVar5 + 0x10);
        } else {
            (**(code * *)(*plVar2 + 0x38))(plVar2, lVar1, 0xffffffffffffffff);
        }
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar3) + 0x18,
                      *(longlong * )(param_1 + 0x20) + 0xf0, *(undefined8 * )(param_2 + 0x28), 0);
    }
    *(undefined * )(*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar3) + 1) =
            *(undefined * )(param_2 + 0x50);
    *(undefined4 * )(*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar3) + 8) =
            *(undefined4 * )(param_2 + 0x44);
    *(undefined4 * )(*(longlong * )(*(longlong * )(param_1 + 0x570) + lVar3) + 0xc) =
            *(undefined4 * )(param_2 + 0x48);
    return iVar6;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_140170d60(ulonglong param_1, undefined8 param_2, longlong param_3) {
    short sVar1;
    longlong lVar2;
    wchar_t *pwVar3;
    longlong lVar4;
    short *psVar5;
    short *psVar6;
    undefined8 uVar7;
    uint *puVar8;
    uint uVar9;
    int iVar10;
    wchar_t *pwVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    short *psVar15;
    ulonglong uVar16;
    longlong lVar17;
    ulonglong uVar18;
    int iVar19;
    ulonglong local_res8;
    int local_res20[2];
    undefined local_68[16];
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;

    uVar18 = 0;
    local_res8 = param_1;
    lVar2 = FUN_1401a5ae0(param_2);
    uVar12 = uVar18;
    if (lVar2 == 0) {
        return 0;
    }
    do {
        psVar6 = (short *) 0x0;
        iVar19 = (int) uVar12;
        if (0x1f < iVar19) {
            return uVar12;
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar11 = L"Width";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"Width") {
                LAB_140170e34:
                if (lVar4 != 0) {
                    uVar7 = FUN_1401a4f40(lVar4 + 0x20);
                    FUN_1407df428(uVar7, &DAT_1409e4114, param_3 + 0x40 + (longlong) iVar19 * 0x58);
                }
                break;
            }
            psVar5 = psVar6;
            if (*pwVar3 == L'\0') {
                LAB_140170e23:
                if (*pwVar11 == L'\0') goto LAB_140170e34;
            } else {
                do {
                    uVar9 = (uint) psVar5;
                    if (((*pwVar11 == L'\0') || (*pwVar3 != *pwVar11)) || (0x7ffffffe < (int) uVar9)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar11 = pwVar11 + 1;
                    uVar9 = uVar9 + 1;
                    psVar5 = (short *) (ulonglong) uVar9;
                } while (*pwVar3 != L'\0');
                if (uVar9 == 0x7fffffff) goto LAB_140170e34;
                if (*pwVar3 == L'\0') goto LAB_140170e23;
            }
        }
        lVar4 = FUN_1401a6b80(lVar2, L"Text");
        psVar5 = psVar6;
        if (lVar4 != 0) {
            psVar5 = (short *) FUN_1401a4f40(lVar4 + 0x20);
        }
        psVar15 = (short *) &DAT_1409d4564;
        if (psVar5 != (short *) 0x0) {
            psVar15 = psVar5;
        }
        sVar1 = *psVar15;
        psVar5 = psVar6;
        while (sVar1 != 0) {
            psVar5 = (short *) ((longlong) psVar5 + 1);
            sVar1 = psVar15[(longlong) psVar5];
        }
        lVar4 = (longlong) psVar5 * 2 >> 1;
        if (lVar4 + 1U < 0x7fffffffffffffff) {
            psVar6 = (short *) FUN_14018b280((lVar4 + 1U) * 2, 0);
        }
        FUN_1407db590(psVar6, psVar15, lVar4 * 2);
        if (psVar6 + lVar4 != (short *) 0x0) {
            psVar6[lVar4] = 0;
        }
        lVar4 = FUN_1401a6b80(lVar2, L"TextId");
        if (lVar4 != 0) {
            FUN_1401a4f40(lVar4 + 0x20);
        }
        FUN_1400e2630();
        if (psVar6 != (short *) 0x0) {
            FUN_14018b900(psVar6);
        }
        lVar13 = uVar18 * 0x58 + param_3;
        lVar4 = *(longlong * )(lVar13 + 8);
        *(undefined8 * )(lVar13 + 8) = local_58;
        *(undefined8 * )(lVar13 + 0x10) = local_50;
        *(undefined8 * )(lVar13 + 0x18) = local_48;
        if (lVar4 != 0) {
            FUN_14018b900();
        }
        if (*(longlong * )(lVar13 + 8) == *(longlong * )(lVar13 + 0x10)) {
            for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
                psVar5 = &DAT_140a31790;
                psVar6 = (short *) FUN_1401a4f40();
                if (psVar6 == &DAT_140a31790) {
                    LAB_140171247:
                    if (lVar4 != 0) {
                        psVar6 = (short *) FUN_1401a4f40(lVar4 + 0x20);
                        goto LAB_140170ffc;
                    }
                    break;
                }
                iVar10 = 0;
                if (*psVar6 != 0) {
                    do {
                        if (((*psVar5 == 0) || (*psVar6 != *psVar5)) || (0x7ffffffe < iVar10)) break;
                        psVar6 = psVar6 + 1;
                        psVar5 = psVar5 + 1;
                        iVar10 = iVar10 + 1;
                    } while (*psVar6 != 0);
                    if (iVar10 == 0x7fffffff) goto LAB_140171247;
                }
                if ((*psVar6 == 0) && (*psVar5 == 0)) goto LAB_140171247;
            }
            psVar6 = (short *) 0x0;
            LAB_140170ffc:
            psVar5 = (short *) &DAT_1409dd58c;
            if (psVar6 != (short *) 0x0) {
                psVar5 = psVar6;
            }
            lVar4 = 0;
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar5[lVar4];
            }
            FUN_14001c480((longlong) iVar19 * 0x58 + param_3, psVar5, psVar5 + lVar4);
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar11 = L"Image";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"Image") {
                LAB_14017125e:
                if (lVar4 != 0) {
                    psVar6 = (short *) FUN_1401a4f40();
                    goto LAB_1401710ac;
                }
                break;
            }
            iVar10 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar11 == L'\0') || (*pwVar3 != *pwVar11)) || (0x7ffffffe < iVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar11 = pwVar11 + 1;
                    iVar10 = iVar10 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar10 == 0x7fffffff) goto LAB_14017125e;
            }
            if ((*pwVar3 == L'\0') && (*pwVar11 == L'\0')) goto LAB_14017125e;
        }
        psVar6 = (short *) 0x0;
        LAB_1401710ac:
        psVar5 = (short *) &DAT_1409dd54c;
        if (psVar6 != (short *) 0x0) {
            psVar5 = psVar6;
        }
        lVar4 = 0;
        sVar1 = *psVar5;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar5[lVar4];
        }
        lVar14 = (longlong) iVar19 * 0x58 + param_3;
        FUN_14001c480(lVar14 + 0x20, psVar5, psVar5 + lVar4);
        uVar16 = 0;
        uVar12 = 0;
        do {
            local_res8 = local_res8 & 0xffffffffffffff00;
            lVar4 = FUN_1401a6b80(lVar2, (&PTR_u_DT_CENTER_140a389f0)[uVar12]);
            if (lVar4 != 0) {
                uVar7 = FUN_1401a4f40(lVar4 + 0x20);
                FUN_1401a52e0(uVar7, &local_res8);
                if ((char) local_res8 != '\0') {
                    uVar16 = uVar16 | 1 << ((byte) uVar12 & 0x3f);
                }
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < 6);
        *(int *) (lVar13 + 0x4c) = (int) uVar16;
        puVar8 = (uint *) FUN_1400f66f0(local_68, lVar2, L"TextColor", 0);
        lVar4 = DAT_140c63678;
        if ((uint * )(lVar13 + 0x54) != puVar8) {
            FUN_1401429a0(DAT_140c63678);
            lVar4 = DAT_140c63678;
            uVar9 = *puVar8;
            *(uint * )(lVar13 + 0x54) = uVar9;
            if ((ulonglong) uVar9 < *(ulonglong * )(lVar4 + 0x30)) {
                lVar17 = *(longlong * )(lVar4 + 0x28) + (ulonglong) uVar9 * 0x20;
                iVar10 = *(int *) (lVar17 + 0x10);
                if (iVar10 - 1U < 0xfffffffe) {
                    *(int *) (lVar17 + 0x10) = iVar10 + 1;
                }
            }
        }
        FUN_1401429a0(lVar4);
        *(undefined * )(lVar13 + 0x50) = 0;
        lVar4 = *(longlong * )(lVar2 + 0x60);
        local_res20[0] = 0;
        for (; lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar11 = L"MergeLeft";
            pwVar3 = (wchar_t *) FUN_1401a4f40(lVar4 + 8);
            if (pwVar3 == L"MergeLeft") {
                LAB_140171275:
                if (lVar4 != 0) {
                    uVar7 = FUN_1401a4f40(lVar4 + 0x20);
                    iVar10 = FUN_1407df428(uVar7, &DAT_1409e4114, local_res20);
                    if (iVar10 == 1) {
                        *(bool *) (lVar13 + 0x50) = local_res20[0] != 0;
                    }
                }
                break;
            }
            iVar10 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar11 == L'\0') || (*pwVar3 != *pwVar11)) || (0x7ffffffe < iVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar11 = pwVar11 + 1;
                    iVar10 = iVar10 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar10 == 0x7fffffff) goto LAB_140171275;
            }
            if ((*pwVar3 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140171275;
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar11 = L"MinWidth";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"MinWidth") {
                LAB_140171324:
                if (lVar4 != 0) {
                    uVar7 = FUN_1401a4f40(lVar4 + 0x20);
                    FUN_1407df428(uVar7, &DAT_1409e4114, lVar14 + 0x44);
                }
                break;
            }
            iVar10 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar11 == L'\0') || (*pwVar3 != *pwVar11)) || (0x7ffffffe < iVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar11 = pwVar11 + 1;
                    iVar10 = iVar10 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar10 == 0x7fffffff) goto LAB_140171324;
            }
            if ((*pwVar3 == L'\0') && (*pwVar11 == L'\0')) goto LAB_140171324;
        }
        for (lVar4 = *(longlong * )(lVar2 + 0x60); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x38)) {
            pwVar11 = L"MaxWidth";
            pwVar3 = (wchar_t *) FUN_1401a4f40();
            if (pwVar3 == L"MaxWidth") {
                LAB_1401713bc:
                if (lVar4 != 0) {
                    uVar7 = FUN_1401a4f40(lVar4 + 0x20);
                    FUN_1407df428(uVar7, &DAT_1409e4114, lVar14 + 0x48);
                }
                break;
            }
            iVar10 = 0;
            if (*pwVar3 != L'\0') {
                do {
                    if (((*pwVar11 == L'\0') || (*pwVar3 != *pwVar11)) || (0x7ffffffe < iVar10)) break;
                    pwVar3 = pwVar3 + 1;
                    pwVar11 = pwVar11 + 1;
                    iVar10 = iVar10 + 1;
                } while (*pwVar3 != L'\0');
                if (iVar10 == 0x7fffffff) goto LAB_1401713bc;
            }
            if ((*pwVar3 == L'\0') && (*pwVar11 == L'\0')) goto LAB_1401713bc;
        }
        uVar18 = uVar18 + 1;
        lVar2 = FUN_1401a5bc0(lVar2);
        uVar12 = (ulonglong)(iVar19 + 1);
        if (lVar2 == 0) {
            return (ulonglong)(iVar19 + 1);
        }
    } while (true);
}


void FUN_140171b10(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.TreeControl", 0x12);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_140171b80(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x140171b90;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171bd1;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_AddNode_140c58060 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0x1a);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171c5f;
    FUN_1400569b0(lVar2, "Apollo.TreeControl");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140171c81:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_140171c9d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_140171c9d;
        if (iVar1 == 7) goto LAB_140171c81;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_140171c9d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171ccc;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171cf2;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171d3a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171d5f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171d83;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171da4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171dc9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171e0c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171e31;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140171e99:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_140171e6a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140171e99;
        if (iVar1 != 8) goto LAB_140171e6a;
    }
    uVar14 = *puVar12;
    LAB_140171e6a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171e7c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140171e8c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140171eb0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((lVar1 == 0) || ((*(uint * )(lVar1 + 0x1b0) >> 9 & 1) == 0)) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, &DAT_140a384e0, pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140171f50(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    double *pdVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    undefined *puVar6;
    int *piVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined4 local_res8[2];
    undefined local_res10[8];
    undefined local_58[8];
    longlong local_50;
    undefined local_38[8];
    longlong local_30;

    uVar4 = FUN_140171eb0();
    local_res8[0] = FUN_140056d60(param_1, 2);
    uVar5 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_38, uVar5);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        puVar6 = (undefined *) FUN_140056bb0(param_1, 4);
    } else {
        puVar6 = &DAT_1409d064e;
    }
    FUN_14018f2d0(local_58, puVar6);
    puVar8 = *(undefined8 * *)(param_1 + 0x10);
    if (4 < (int) ((longlong) puVar8 - *(longlong * )(param_1 + 0x18) >> 4)) {
        puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x40);
        puVar9 = &DAT_140a12138;
        if (puVar1 < puVar8) {
            puVar9 = puVar1;
        }
        *puVar8 = *puVar9;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        FUN_1400578c0(param_1);
    }
    piVar7 = (int *) FUN_14016ded0(uVar4, local_res10, local_res8, local_30, local_50);
    pdVar3 = *(double **) (param_1 + 0x10);
    iVar2 = *piVar7;
    *(undefined4 * )(pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar2;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30, 0);
    }
    return 1;
}


undefined8 FUN_1401720b0(undefined8 param_1) {
    undefined8 uVar1;
    undefined4 local_res10[6];

    uVar1 = FUN_140171eb0();
    local_res10[0] = FUN_140056d60(param_1, 2);
    FUN_14016dd40(uVar1, local_res10);
    return 0;
}


undefined8 FUN_140172160(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_140171eb0();
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x18))) {
        uVar1 = FUN_140056d60(param_1, 2);
        *(undefined4 * )(lVar2 + 0x620) = uVar1;
        return 0;
    }
    *(undefined4 * )(lVar2 + 0x620) = 0;
    return 0;
}


undefined8 FUN_1401721d0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140171eb0();
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (lVar3 + 0x620);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140172210(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140171eb0();
    iVar2 = FUN_140056d60(param_1, 2);
    if ((((-1 < iVar2) &&
          (iVar2 < (int) (*(longlong * )(lVar3 + 0x590) - *(longlong * )(lVar3 + 0x588) >> 3))) &&
         (lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x588) + (longlong) iVar2 * 8), lVar3 != 0)) &&
        (iVar2 = *(int *) (lVar3 + 0x68), iVar2 != -1)) {
        pdVar1 = *(double **) (param_1 + 0x10);
        *(undefined4 * )(pdVar1 + 1) = 3;
        *pdVar1 = (double) iVar2;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_140172340(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_140171eb0();
    iVar2 = FUN_140056d60(param_1, 2);
    iVar2 = iVar2 + -1;
    if (*(ulonglong * )(lVar3 + 0x578) < 2) {
        iVar2 = *(int *) (lVar3 + 0x2d4) - *(int *) (lVar3 + 0x2cc);
        LAB_140172395:
        if (0 < iVar2) {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 * )(pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar2;
            goto LAB_1401723bd;
        }
    } else if (*(int *) (lVar3 + 0x578) != iVar2 && iVar2 <= *(int *) (lVar3 + 0x578)) {
        iVar2 = *(int *) (*(longlong * )(*(longlong * )(lVar3 + 0x570) + (longlong) iVar2 * 8) + 4);
        goto LAB_140172395;
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
    LAB_1401723bd:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1401723e0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140171eb0();
    if ((*(longlong * )(lVar3 + 0x640) != 0) && (iVar1 = **(int **) (lVar3 + 0x638), iVar1 != -1)) {
        pdVar2 = *(double **) (param_1 + 0x10);
        *(undefined4 * )(pdVar2 + 1) = 3;
        *pdVar2 = (double) iVar1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_140172440(longlong param_1) {
    ulonglong uVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    int *piVar6;

    lVar4 = FUN_140171eb0();
    iVar3 = FUN_140056d60(param_1);
    if (iVar3 != -1) {
        uVar1 = *(ulonglong * )(lVar4 + 0x640);
        uVar5 = 0;
        if (uVar1 != 0) {
            piVar6 = *(int **) (lVar4 + 0x638);
            do {
                if ((*piVar6 == iVar3) && (uVar5 + 1 < uVar1)) {
                    iVar3 = (*(int **) (lVar4 + 0x638))[uVar5 + 1];
                    if (iVar3 == -1) {
                        return 0;
                    }
                    pdVar2 = *(double **) (param_1 + 0x10);
                    *(undefined4 * )(pdVar2 + 1) = 3;
                    *pdVar2 = (double) iVar3;
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    return 1;
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 1;
            } while (uVar5 < uVar1);
        }
    }
    return 0;
}


undefined8 FUN_1401724e0(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    double *pdVar6;
    bool bVar7;
    int iVar8;
    longlong lVar9;
    int iVar10;

    lVar9 = FUN_140171eb0();
    iVar8 = FUN_140056d60(param_1, 2);
    if (((1 < iVar8 + 1U) && (-1 < iVar8)) &&
        (iVar10 = (int) (*(longlong * )(lVar9 + 0x590) - *(longlong * )(lVar9 + 0x588) >> 3),
                iVar8 < iVar10)) {
        lVar3 = *(longlong * )(*(longlong * )(lVar9 + 0x588) + (longlong) iVar8 * 8);
        if (lVar3 != 0) {
            iVar2 = *(int *) (lVar3 + 0x68);
            if (((-1 < iVar2) && (iVar2 < iVar10)) &&
                (lVar9 = *(longlong * )(*(longlong * )(lVar9 + 0x588) + (longlong) iVar2 * 8), lVar9 != 0)) {
                puVar4 = *(undefined8 * *)(lVar9 + 0x60);
                bVar7 = false;
                puVar5 = (undefined8 * ) * puVar4;
                while (puVar5 != puVar4) {
                    if (bVar7) {
                        iVar8 = *(int *) (puVar5 + 2);
                        if (iVar8 == -1) {
                            return 0;
                        }
                        pdVar6 = *(double **) (param_1 + 0x10);
                        *(undefined4 * )(pdVar6 + 1) = 3;
                        *pdVar6 = (double) iVar8;
                        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                        return 1;
                    }
                    puVar1 = puVar5 + 2;
                    puVar5 = (undefined8 * ) * puVar5;
                    if (*(int *) puVar1 == iVar8) {
                        bVar7 = true;
                    }
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1401725c0(undefined8 param_1) {
    undefined8 uVar1;
    undefined4 local_res10[6];

    uVar1 = FUN_140171eb0();
    local_res10[0] = FUN_140056d60(param_1, 2);
    FUN_14016e020(uVar1, local_res10);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1401726e0(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint local_res10[2];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 3, &local_18);
    if ((iVar1 < 0) ||
        ((int) (*(longlong * )(lVar2 + 0x590) - *(longlong * )(lVar2 + 0x588) >> 3) <= iVar1)) {
        lVar2 = 0;
    } else {
        lVar2 = *(longlong * )(*(longlong * )(lVar2 + 0x588) + (longlong) iVar1 * 8);
    }
    lVar3 = DAT_140c63678;
    if ((uint * )(lVar2 + 0x78) != local_res10) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *(uint * )(lVar2 + 0x78) = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}


undefined8 FUN_140172910(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    uVar3 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_28, uVar3);
    if ((iVar1 < 0) ||
        ((int) (*(longlong * )(lVar2 + 0x590) - *(longlong * )(lVar2 + 0x588) >> 3) <= iVar1)) {
        plVar4 = (longlong *) 0x0;
    } else {
        plVar4 = *(longlong * *)(*(longlong * )(lVar2 + 0x588) + (longlong) iVar1 * 8);
    }
    if (*plVar4 != 0) {
        FUN_140109710(plVar4 + 4, *plVar4 + 0xf0, local_20, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1401729d0(undefined8 param_1) {
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    int iVar4;

    uVar3 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    uVar2 = FUN_140056d60(param_1, 3);
    iVar4 = 0;
    if (0 < iVar1 + -1) {
        iVar4 = iVar1 + -1;
    }
    FUN_1401709a0(uVar3, iVar4, uVar2);
    return 0;
}


undefined8 FUN_140172a30(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    if (((iVar1 < 0) ||
         ((int) (*(longlong * )(lVar2 + 0x590) - *(longlong * )(lVar2 + 0x588) >> 3) <= iVar1)) ||
        (lVar2 = *(longlong * )(*(longlong * )(lVar2 + 0x588) + (longlong) iVar1 * 8), lVar2 == 0)) {
        *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    } else {
        if (*(longlong * )(lVar2 + 0x18) == 0) {
            puVar3 = &DAT_1409dd3fc;
        } else if (**(longlong * **)(lVar2 + 0x10) == (longlong *) 0x0) {
            puVar3 = &DAT_1409dd44c;
        } else {
            puVar3 = (undefined * )(**(code * *)(***(longlong * **)(lVar2 + 0x10) + 0x40))();
        }
        lVar2 = FUN_14018f0e0(local_28, puVar3);
        if (*(longlong * )(lVar2 + 8) == 0) {
            *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        } else {
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
            return 1;
        }
    }
    return 1;
}


undefined8 FUN_140172b40(longlong param_1) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    uint *puVar3;
    int iVar4;
    longlong lVar5;
    bool bVar6;

    lVar5 = FUN_140171eb0();
    iVar4 = FUN_140056d60(param_1);
    if (((iVar4 < 0) ||
         ((int) (*(longlong * )(lVar5 + 0x590) - *(longlong * )(lVar5 + 0x588) >> 3) <= iVar4)) ||
        (lVar5 = *(longlong * )(*(longlong * )(lVar5 + 0x588) + (longlong) iVar4 * 8), lVar5 == 0)) {
        bVar6 = false;
    } else {
        puVar1 = *(undefined8 * *)(lVar5 + 0x60);
        iVar4 = 0;
        for (puVar2 = (undefined8 * ) * puVar1; puVar2 != puVar1; puVar2 = (undefined8 * ) * puVar2) {
            iVar4 = iVar4 + 1;
        }
        bVar6 = iVar4 != 0;
    }
    puVar3 = *(uint * *)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint) bVar6;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140172c90(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    uVar3 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_28, uVar3);
    if (((-1 < iVar1) && (iVar1 < *(int *) (lVar2 + 0x578))) && (*(longlong * )(lVar2 + 0x20) != 0)) {
        FUN_140109710(*(longlong * )(*(longlong * )(lVar2 + 0x570) + (longlong) iVar1 * 8) + 0x18,
                      *(longlong * )(lVar2 + 0x20) + 0xf0, local_20, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140172d40(undefined8 param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    uint *puVar4;
    uint local_res10[2];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar2 = FUN_140171eb0();
    iVar1 = FUN_140056d60(param_1, 2);
    local_18 = _DAT_140c777d0;
    uStack20 = uRam0000000140c777d4;
    uStack16 = uRam0000000140c777d8;
    uStack12 = uRam0000000140c777dc;
    FUN_140143880(local_res10, param_1, 3, &local_18);
    lVar3 = DAT_140c63678;
    if (((-1 < iVar1) && (iVar1 < *(int *) (lVar2 + 0x578))) &&
        (puVar4 = (uint * )(*(longlong * )(*(longlong * )(lVar2 + 0x570) + (longlong) iVar1 * 8) + 0x4c),
                puVar4 != local_res10)) {
        FUN_1401429a0(DAT_140c63678);
        lVar3 = DAT_140c63678;
        *puVar4 = local_res10[0];
        if ((ulonglong) local_res10[0] < *(ulonglong * )(lVar3 + 0x30)) {
            lVar2 = *(longlong * )(lVar3 + 0x28) + (ulonglong) local_res10[0] * 0x20;
            iVar1 = *(int *) (lVar2 + 0x10);
            if (iVar1 - 1U < 0xfffffffe) {
                *(int *) (lVar2 + 0x10) = iVar1 + 1;
            }
        }
    }
    FUN_1401429a0(lVar3, (ulonglong) local_res10[0]);
    return 0;
}


undefined8 FUN_140172e20(undefined8 param_1) {
    undefined4 uVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined local_28[8];
    longlong local_20;

    uVar2 = FUN_140171eb0();
    uVar1 = FUN_140056d60(param_1, 2);
    FUN_140056d60(param_1, 3);
    uVar3 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_28, uVar3);
    FUN_140170af0(uVar2, uVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


longlong FUN_140172eb0(longlong *param_1, undefined4 *param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    ulonglong uVar5;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *) FUN_14018db00(*param_1, lVar1 + 1);
    if (puVar3 + lVar1 != (undefined4 *) 0x0) {
        puVar3[lVar1] = *param_2;
    }
    if ((undefined4 * ) * param_1 != puVar3) {
        uVar5 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined4 *) 0x0) {
                    *puVar4 = *(undefined4 * )((longlong) puVar4 + (*param_1 - (longlong) puVar3));
                }
                uVar5 = uVar5 + 1;
                puVar4 = puVar4 + 1;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong) puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}


void FUN_140172f70(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    *(undefined8 * )(param_1 + 0x10) = 8;
    lVar2 = FUN_14018b280(0x40);
    *(longlong * )(param_1 + 8) = lVar2;
    plVar1 = (longlong * )(lVar2 + (*(longlong * )(param_1 + 0x10) - 1U >> 1) * 8);
    for (plVar3 = plVar1; plVar3 < plVar1 + 1; plVar3 = plVar3 + 1) {
        lVar2 = FUN_14018b280(0x1f0, 0);
        *plVar3 = lVar2;
    }
    *(longlong * *)(param_1 + 0x30) = plVar1;
    lVar2 = *plVar1;
    *(longlong * )(param_1 + 0x20) = lVar2;
    *(longlong * )(param_1 + 0x28) = lVar2 + 0x1f0;
    *(longlong * *)(param_1 + 0x50) = plVar1;
    lVar2 = *plVar1;
    *(longlong * )(param_1 + 0x40) = lVar2;
    *(longlong * )(param_1 + 0x48) = lVar2 + 0x1f0;
    *(undefined8 * )(param_1 + 0x18) = *(undefined8 * )(param_1 + 0x20);
    *(undefined8 * )(param_1 + 0x38) = *(undefined8 * )(param_1 + 0x40);
    return;
}


void FUN_140173030(longlong param_1) {
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong local_res10;

    plVar2 = *(longlong * *)(param_1 + 0x30);
    puVar1 = (ulonglong * )(param_1 + 0x10);
    uVar7 = *puVar1;
    local_res10 = 1;
    lVar6 = *(longlong * )(param_1 + 0x50) - (longlong) plVar2 >> 3;
    lVar5 = lVar6 + 2;
    if ((ulonglong)(lVar5 * 2) < uVar7) {
        lVar4 = *(longlong * )(param_1 + 0x50) - (longlong) plVar2;
        plVar8 = (longlong * )(*(longlong * )(param_1 + 8) + (uVar7 - lVar5 >> 1) * 8);
        if (plVar8 < plVar2) {
            FUN_1407db590(plVar8, plVar2, lVar4 + 8U & 0xfffffffffffffff8);
        } else {
            lVar5 = lVar4 + 8 >> 3;
            FUN_1407db590(plVar8 + ((lVar6 + 1) - lVar5), plVar2, lVar5 * 8);
        }
    } else {
        puVar3 = &local_res10;
        if (uVar7 != 0) {
            puVar3 = puVar1;
        }
        uVar7 = uVar7 + 2 + *puVar3;
        lVar4 = FUN_14018b280(uVar7 * 8, 0);
        plVar8 = (longlong * )(lVar4 + (uVar7 - lVar5 >> 1) * 8);
        FUN_1407db590(plVar8, *(longlong * )(param_1 + 0x30),
                      (*(longlong * )(param_1 + 0x50) - *(longlong * )(param_1 + 0x30)) + 8U &
                      0xfffffffffffffff8);
        FUN_14018b900(*(undefined8 * )(param_1 + 8), 0);
        *(longlong * )(param_1 + 8) = lVar4;
        *puVar1 = uVar7;
    }
    *(longlong * *)(param_1 + 0x30) = plVar8;
    lVar5 = *plVar8;
    *(longlong * )(param_1 + 0x20) = lVar5;
    *(longlong * )(param_1 + 0x28) = lVar5 + 0x1f0;
    *(longlong * *)(param_1 + 0x50) = plVar8 + lVar6;
    lVar5 = plVar8[lVar6];
    *(longlong * )(param_1 + 0x40) = lVar5;
    *(longlong * )(param_1 + 0x48) = lVar5 + 0x1f0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140173180(undefined8 *param_1) {
    float fVar1;
    undefined4 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    uint uVar11;
    undefined *in_stack_00000028;
    undefined8 in_stack_00000030;
    undefined auStack376[32];
    undefined8 local_158;
    undefined8 local_150;
    undefined8 local_148;
    undefined8 local_140;
    undefined *local_138;
    undefined8 local_130;
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
    undefined4 local_e8[4];
    undefined4 local_d8[4];
    uint local_c8;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
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
    uint local_68;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40[4];
    ulonglong local_30;
    float fVar2;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    uVar7 = 0;
    local_148 = 0;
    local_150 = in_stack_00000030;
    local_158 = in_stack_00000028;
    FUN_1400c5920(param_1);
    param_1[0x36] = param_1[0x36] | 0x20;
    local_50 = 0x40400000;
    uStack76 = 0x40a00000;
    *param_1 = &PTR_LAB_140b5d1c0;
    *(undefined8 * )((longlong) param_1 + 0x424) = 0;
    *(undefined4 * )((longlong) param_1 + 0x42c) = 0;
    local_58 = 0x3f80000000000000;
    local_48 = 0xbf800000;
    local_44 = 0xbf800000;
    puVar8 = &local_58;
    uVar6 = uVar7;
    do {
        fVar1 = *(float *) ((longlong) puVar8 + 4);
        fVar2 = *(float *) ((longlong) puVar8 + 4);
        *(undefined8 * )((longlong) param_1 + (0x430 - (longlong) & local_58) + (longlong) puVar8) = *puVar8;
        *(int *) (param_1 + 0x8e) = (int) uVar6;
        if (fVar2 <= 0.0 && fVar1 != 0.0) break;
        uVar11 = (int) uVar6 + 1;
        uVar6 = (ulonglong) uVar11;
        puVar8 = puVar8 + 1;
    } while ((int) uVar11 < 8);
    *(undefined4 * )((longlong) param_1 + 0x41c) = 0;
    *(undefined4 * )(param_1 + 0x84) = 0x42c80000;
    *(undefined4 * )(param_1 + 0x83) = 0;
    local_c8 = 0;
    puVar8 = (undefined8 * ) & local_108;
    uVar6 = uVar7;
    do {
        uVar3 = *(undefined4 * )((longlong) & DAT_140a393c0 + uVar6);
        *(undefined4 * )((longlong) local_d8 + uVar6) = 0;
        uVar9 = uVar6 + 4;
        *(undefined4 * )((longlong) local_e8 + uVar6) = uVar3;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        uVar6 = uVar9;
    } while ((longlong) uVar9 < 0x10);
    lVar4 = param_1[6];
    local_58 = 0x3f800000;
    local_50 = 0x3f800000;
    uStack76 = 0x3f000000;
    local_40[0] = 0xfffffff0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    uVar6 = uVar7;
    uVar9 = uVar7;
    if ((lVar4 != 0) && (lVar4 != -0xa8)) {
        uVar6 = lVar4 + 0xb8;
        uVar9 = lVar4 + 0x100;
    }
    local_c8 = local_c8 & 0xfffffffe;
    uVar5 = uVar7;
    puVar8 = (undefined8 * ) & local_108;
    do {
        uVar10 = uVar5 + 4;
        *(undefined4 * )((longlong) local_e8 + uVar5) = *(undefined4 * )((longlong) & local_58 + uVar5);
        *(undefined4 * )((longlong) local_d8 + uVar5) = *(undefined4 * )((longlong) local_40 + uVar5);
        *puVar8 = 0;
        uVar5 = uVar10;
        puVar8 = puVar8 + 1;
    } while ((longlong) uVar10 < 0x10);
    lVar4 = FUN_14018b280(0x620, 0);
    uVar5 = uVar7;
    if (lVar4 != 0) {
        local_130 = 0;
        local_138 = &DAT_140c67280;
        local_140 = 0;
        local_158 = (undefined *) CONCAT44(local_158._4_4_, 2);
        uVar5 = FUN_14012f720(lVar4, param_1[4], param_1, uVar6);
    }
    uVar11 = local_c8;
    param_1[0x81] = uVar5;
    *(ulonglong * )(uVar5 + 0x290) = *(ulonglong * )(uVar5 + 0x290) | 0x100;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    local_98 = local_f8;
    uStack148 = uStack244;
    uStack144 = uStack240;
    uStack140 = uStack236;
    local_68 = local_c8 | 0x300;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    local_78 = local_d8[0];
    uStack116 = local_d8[1];
    uStack112 = local_d8[2];
    uStack108 = local_d8[3];
    FUN_1400cc680(param_1[0x81], &local_b8);
    local_c8 = uVar11 & 0xfffffffe;
    local_58 = 0x3f0000003f800000;
    local_50 = 0x3f800000;
    uStack76 = 0x3f800000;
    uVar6 = uVar7;
    puVar8 = (undefined8 * ) & local_108;
    do {
        uVar5 = uVar6 + 4;
        *(undefined4 * )((longlong) local_e8 + uVar6) = *(undefined4 * )((longlong) & local_58 + uVar6);
        *(undefined4 * )((longlong) local_d8 + uVar6) = *(undefined4 * )((longlong) local_40 + uVar6);
        *puVar8 = 0;
        uVar6 = uVar5;
        puVar8 = puVar8 + 1;
    } while ((longlong) uVar5 < 0x10);
    lVar4 = FUN_14018b280(0x620, 0);
    uVar6 = uVar7;
    if (lVar4 != 0) {
        local_130 = 0;
        local_138 = &DAT_140c67280;
        local_140 = 0;
        local_158 = (undefined *) CONCAT44(local_158._4_4_, 2);
        uVar6 = FUN_14012f720(lVar4, param_1[4], param_1, uVar9);
    }
    uVar11 = local_c8;
    param_1[0x80] = uVar6;
    *(ulonglong * )(uVar6 + 0x290) = *(ulonglong * )(uVar6 + 0x290) | 0x100;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    local_98 = local_f8;
    uStack148 = uStack244;
    uStack144 = uStack240;
    uStack140 = uStack236;
    local_68 = local_c8 | 0x300;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    local_78 = local_d8[0];
    uStack116 = local_d8[1];
    uStack112 = local_d8[2];
    uStack108 = local_d8[3];
    FUN_1400cc680(param_1[0x80], &local_b8);
    local_c8 = uVar11 & 0xfffffffe;
    local_58 = 0;
    local_50 = 0x3f800000;
    uStack76 = 0x3f800000;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0xfffffff0;
    local_40[3] = 0;
    uVar6 = uVar7;
    puVar8 = (undefined8 * ) & local_108;
    do {
        uVar9 = uVar6 + 4;
        *(undefined4 * )((longlong) local_e8 + uVar6) = *(undefined4 * )((longlong) & local_58 + uVar6);
        *(undefined4 * )((longlong) local_d8 + uVar6) = *(undefined4 * )((longlong) local_40 + uVar6);
        *puVar8 = 0;
        uVar6 = uVar9;
        puVar8 = puVar8 + 1;
    } while ((longlong) uVar9 < 0x10);
    lVar4 = FUN_14018b280(0x580);
    if (lVar4 != 0) {
        local_148 = 0;
        local_150 = 0;
        local_158 = &DAT_140c67280;
        uVar7 = FUN_14010e4a0(lVar4, param_1[4], param_1, 0);
    }
    local_68 = local_c8 | 0x300;
    param_1[0x82] = uVar7;
    *(ulonglong * )(uVar7 + 0x290) = *(ulonglong * )(uVar7 + 0x290) | 0x100;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    local_98 = local_f8;
    uStack148 = uStack244;
    uStack144 = uStack240;
    uStack140 = uStack236;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    local_78 = local_d8[0];
    uStack116 = local_d8[1];
    uStack112 = local_d8[2];
    uStack108 = local_d8[3];
    FUN_1400cc680(param_1[0x82], &local_b8);
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack376);
    return;
}


undefined8 FUN_1401735d0(undefined8 param_1, ulonglong param_2) {
    FUN_140173610();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140173610(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5d1c0;
    if ((longlong *) param_1[0x82] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x82] + 8))();
        param_1[0x82] = 0;
    }
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if ((longlong *) param_1[0x81] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_140173690(longlong param_1) {
    undefined *puVar1;
    float *pfVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    double dVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    puVar1 = (undefined * )(**(code * *)(**(longlong * *)(param_1 + 0x410) + 0x70))();
    puVar3 = &DAT_1409dd9f4;
    if (puVar1 != (undefined *) 0x0) {
        puVar3 = puVar1;
    }
    dVar7 = (double) FUN_1407dfd50(puVar3, 0);
    lVar5 = (longlong) * (int *) (param_1 + 0x470);
    lVar6 = 0;
    fVar10 = 1.0;
    if (3 < lVar5) {
        fVar9 = *(float *) (param_1 + 0x424);
        pfVar2 = (float *) (param_1 + 0x434);
        lVar4 = (lVar5 - 4U >> 2) + 1;
        lVar6 = lVar4 * 4;
        do {
            if (pfVar2[-1] <= fVar9) {
                fVar10 = *pfVar2;
            }
            if (pfVar2[1] <= fVar9) {
                fVar10 = pfVar2[2];
            }
            if (pfVar2[3] <= fVar9) {
                fVar10 = pfVar2[4];
            }
            if (pfVar2[5] <= fVar9) {
                fVar10 = pfVar2[6];
            }
            pfVar2 = pfVar2 + 8;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    if (lVar6 < lVar5) {
        lVar5 = lVar5 - lVar6;
        pfVar2 = (float *) (param_1 + 0x434 + lVar6 * 8);
        do {
            if (pfVar2[-1] <= *(float *) (param_1 + 0x424)) {
                fVar10 = *pfVar2;
            }
            pfVar2 = pfVar2 + 2;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    if (*(int *) (param_1 + 0x42c) == 2) {
        fVar10 = (float) ((uint) fVar10 ^ 0x80000000);
    }
    fVar10 = fVar10 + (float) dVar7;
    fVar9 = *(float *) (param_1 + 0x420);
    if (fVar10 <= *(float *) (param_1 + 0x420)) {
        fVar9 = fVar10;
    }
    fVar8 = *(float *) (param_1 + 0x41c);
    if (*(float *) (param_1 + 0x41c) <= fVar9) {
        fVar8 = fVar9;
    }
    FUN_1401737f0(SUB84(dVar7, 0), fVar8, fVar10, param_1, lVar5, 1);
    return;
}


float FUN_1401737b0(longlong param_1) {
    double dVar1;
    undefined *puVar2;
    undefined *puVar3;

    puVar2 = (undefined * )(**(code * *)(**(longlong * *)(param_1 + 0x410) + 0x70))();
    puVar3 = &DAT_1409dd974;
    if (puVar2 != (undefined *) 0x0) {
        puVar3 = puVar2;
    }
    dVar1 = (double) FUN_1407dfd50(puVar3, 0, DAT_140c7aac8);
    return (float) dVar1;
}


void FUN_1401737f0(undefined8 param_1, float param_2, longlong param_3, undefined8 param_4, int param_5) {
    int iVar1;
    undefined *puVar2;
    undefined *puVar3;
    double dVar4;
    undefined8 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auStack216[32];
    double local_b8;
    double local_b0;
    int *local_a8;
    int local_98[2];
    undefined local_90[32];
    ulonglong local_70;

    local_70 = DAT_140c0f7b0 ^ (ulonglong) auStack216;
    puVar2 = (undefined * )(**(code * *)(**(longlong * *)(param_3 + 0x410) + 0x70))();
    puVar3 = &DAT_1409dd974;
    if (puVar2 != (undefined *) 0x0) {
        puVar3 = puVar2;
    }
    dVar4 = (double) FUN_1407dfd50(puVar3, 0, DAT_140c7aac8);
    fVar10 = *(float *) (param_3 + 0x420);
    if (param_2 <= *(float *) (param_3 + 0x420)) {
        fVar10 = param_2;
    }
    fVar12 = (float) dVar4;
    fVar11 = *(float *) (param_3 + 0x41c);
    if (*(float *) (param_3 + 0x41c) <= fVar10) {
        fVar11 = fVar10;
    }
    if (param_5 != 0) {
        local_b8 = (double) fVar11;
        iVar1 = FUN_14034bf80(local_90, 0x10, L"%.*f", *(undefined4 * )(param_3 + 0x418));
        if (-1 < iVar1) {
            dVar4 = (double) FUN_1407dfd50(local_90, 0, DAT_140c7aac8);
            fVar11 = (float) dVar4;
        }
    }
    local_a8 = local_98;
    local_b0 = (double) fVar12;
    uVar6 = SUB84(local_b0, 0);
    uVar7 = (undefined4)((ulonglong) local_b0 >> 0x20);
    local_b8 = (double) fVar11;
    uVar8 = SUB84(local_b8, 0);
    uVar9 = (undefined4)((ulonglong) local_b8 >> 0x20);
    local_98[0] = 1;
    uVar5 = FUN_1400d4070(param_3, 0x46, param_3, &DAT_140a38dc4);
    if (local_98[0] != 0) {
        FUN_140173980(uVar5, fVar11, param_3);
        local_b0 = (double) CONCAT44(uVar7, uVar6);
        local_b8 = (double) CONCAT44(uVar9, uVar8);
        FUN_1400d4070(param_3, 0x47, param_3, &DAT_1409dda0c);
    }
    FUN_1407db4f0(local_70 ^ (ulonglong) auStack216);
    return;
}


void FUN_140173980(undefined8 param_1, float param_2, longlong param_3) {
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    float fVar4;
    undefined auStack104[32];
    double local_48;
    undefined local_38[32];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    if (*(float *) (param_3 + 0x420) <= param_2) {
        param_2 = *(float *) (param_3 + 0x420);
    }
    fVar4 = *(float *) (param_3 + 0x41c);
    if (*(float *) (param_3 + 0x41c) <= param_2) {
        fVar4 = param_2;
    }
    local_48 = (double) fVar4;
    iVar3 = FUN_14034bf80(local_38, 0x10, L"%.*f", *(undefined4 * )(param_3 + 0x418));
    if (-1 < iVar3) {
        plVar1 = *(longlong * *)(param_3 + 0x410);
        lVar2 = plVar1[0x80];
        (**(code * *)(*plVar1 + 0x50))(plVar1, local_38);
        FUN_140111750(*(undefined8 * )(param_3 + 0x410), lVar2, lVar2);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack104);
    return;
}


void FUN_140173a30(undefined8 param_1, float param_2, longlong param_3) {
    char cVar1;
    float fVar2;

    *(undefined4 * )(*(longlong * )(param_3 + 0x410) + 0x2c0) = *(undefined4 * )(param_3 + 0x2c0);
    cVar1 = FUN_1401301f0(*(undefined8 * )(param_3 + 0x408));
    if (cVar1 == '\0') {
        cVar1 = FUN_1401301f0(*(undefined8 * )(param_3 + 0x400));
        if (cVar1 == '\0') {
            *(undefined4 * )(param_3 + 0x42c) = 0;
        }
    }
    if (*(int *) (param_3 + 0x42c) != 0) {
        fVar2 = param_2 + *(float *) (param_3 + 0x428);
        *(float *) (param_3 + 0x428) = fVar2;
        *(float *) (param_3 + 0x424) = param_2 + *(float *) (param_3 + 0x424);
        if (0.1 < fVar2) {
            FUN_140173690(param_3);
            *(float *) (param_3 + 0x428) = *(float *) (param_3 + 0x428) - 0.1;
        }
    }
    return;
}


void FUN_140173ae0(longlong param_1, int param_2, longlong *param_3, undefined8 param_4) {
    undefined *puVar1;
    undefined *puVar2;
    double dVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar4;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar5;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];
    undefined auVar9[16];

    if ((param_2 - 0x27U < 2) && (param_3 == *(longlong * *)(param_1 + 0x410))) {
        auVar9 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
        auVar8 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
        auVar7 = CONCAT412(in_XMM8_Dd, CONCAT48(in_XMM8_Dc, CONCAT44(in_XMM8_Db, in_XMM8_Da)));
        auVar6 = CONCAT412(in_XMM9_Dd, CONCAT48(in_XMM9_Dc, CONCAT44(in_XMM9_Db, in_XMM9_Da)));
        puVar1 = (undefined * )(**(code * *)(**(longlong * *)(param_1 + 0x410) + 0x70))();
        puVar2 = &DAT_1409dda2c;
        if (puVar1 != (undefined *) 0x0) {
            puVar2 = puVar1;
        }
        dVar3 = (double) FUN_1407dfd50(puVar2, 0, DAT_140c7aac8, param_4, auVar6, auVar7, auVar8, auVar9);
        fVar5 = *(float *) (param_1 + 0x420);
        if ((float) dVar3 <= *(float *) (param_1 + 0x420)) {
            fVar5 = (float) dVar3;
        }
        fVar4 = *(float *) (param_1 + 0x41c);
        if (*(float *) (param_1 + 0x41c) <= fVar5) {
            fVar4 = fVar5;
        }
        FUN_1401737f0(dVar3, fVar4, param_1);
    }
    if (param_2 == 0x21) {
        if (param_3 == *(longlong * *)(param_1 + 0x408)) {
            *(undefined8 * )(param_1 + 0x424) = 0;
            *(undefined4 * )(param_1 + 0x42c) = 1;
            FUN_140173690(param_1);
        }
        if (param_3 == *(longlong * *)(param_1 + 0x400)) {
            *(undefined8 * )(param_1 + 0x424) = 0;
            *(undefined4 * )(param_1 + 0x42c) = 2;
            FUN_140173690(param_1);
        }
    }
    return;
}


void FUN_140173d80(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.Spinner", 0xe);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_140173df0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x140173e00;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173e41;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_SetMinMax_140c58200 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 6);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173ecf;
    FUN_1400569b0(lVar2, "Apollo.Spinner");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140173ef1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_140173f0d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_140173f0d;
        if (iVar1 == 7) goto LAB_140173ef1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_140173f0d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173f3c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173f62;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173faa;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173fcf;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140173ff3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140174014;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140174039;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017407c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401740a1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140174109:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_1401740da;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140174109;
        if (iVar1 != 8) goto LAB_1401740da;
    }
    uVar14 = *puVar12;
    LAB_1401740da:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401740ec;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401740fc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140174120(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((lVar1 == 0) || ((*(byte * )(lVar1 + 0x1b0) >> 5 & 1) == 0)) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "Spinner", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_1401741c0(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double dVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar6;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar7[16];
    undefined auVar8[16];

    auVar8 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    auVar7 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
    lVar2 = FUN_140174120();
    dVar4 = (double) FUN_140056c40(param_1, 2, param_3, param_4, auVar7, auVar8);
    fVar5 = (float) dVar4;
    dVar4 = (double) FUN_140056c40(param_1, 3);
    puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    fVar6 = (float) dVar4;
    if (((puVar3 < *(undefined8 * *)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        uVar1 = FUN_140056d60(param_1, 4);
    } else {
        uVar1 = 0;
    }
    *(float *) (lVar2 + 0x41c) = fVar5;
    *(float *) (lVar2 + 0x420) = fVar6;
    *(undefined4 * )(lVar2 + 0x418) = uVar1;
    return 0;
}


undefined8 FUN_140174270(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double *pdVar4;
    longlong *plVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    float *pfVar9;
    ulonglong uVar10;
    uint uVar11;
    ulonglong uVar12;
    double dVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    float fVar16;
    double local_res10;
    longlong local_res18[2];
    double local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;

    lVar2 = FUN_140174120();
    uVar12 = 0;
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    uVar6 = uVar12;
    uVar10 = uVar12;
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (uVar6 = 0, uVar10 = 0, *(int *) (*(longlong * )(param_1 + 0x18) + 0x18) == 5)) {
        *(undefined4 * )(*(undefined8 * *)(param_1 + 0x10) + 1) = 0;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar6 = uVar12;
        uVar10 = uVar12;
        while (true) {
            puVar3 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
            puVar8 = &DAT_140a12138;
            if (puVar3 < *(undefined8 * *)(param_1 + 0x10)) {
                puVar8 = puVar3;
            }
            iVar1 = FUN_14005ba70(param_1, *puVar8, *(undefined8 * *)(param_1 + 0x10) + -2);
            if (iVar1 == 0) break;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            puVar8 = *(undefined8 * *)(param_1 + 0x10);
            if ((puVar8 != (undefined8 * ) & DAT_140a12148) && (*(int *) (puVar8 + -1) == 5)) {
                *puVar8 = 0x3ff0000000000000;
                *(undefined4 * )(puVar8 + 1) = 3;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x10) + -0x10;
                FUN_14005e8e0(param_1, *(longlong * )(param_1 + 0x10) + -0x20, lVar7, lVar7);
                iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
                pdVar4 = (double *) (*(longlong * )(param_1 + 0x10) + -0x10);
                if (iVar1 == 3) {
                    LAB_1401743c4:
                    dVar13 = *pdVar4;
                } else {
                    if ((iVar1 == 4) &&
                        (iVar1 = FUN_14005ac80((longlong) * pdVar4 + 0x20, &local_res10), iVar1 != 0)) {
                        local_70 = 3;
                        pdVar4 = &local_78;
                        local_78 = local_res10;
                        goto LAB_1401743c4;
                    }
                    dVar13 = 0.0;
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                puVar8 = *(undefined8 * *)(param_1 + 0x10);
                fVar16 = (float) dVar13;
                *puVar8 = 0x4000000000000000;
                *(undefined4 * )(puVar8 + 1) = 3;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong * )(param_1 + 0x10) + -0x10;
                FUN_14005e8e0(param_1, *(longlong * )(param_1 + 0x10) + -0x20, lVar7, lVar7);
                iVar1 = *(int *) (*(longlong * )(param_1 + 0x10) + -8);
                plVar5 = (longlong * )(*(longlong * )(param_1 + 0x10) + -0x10);
                if (iVar1 == 3) {
                    LAB_140174444:
                    uVar14 = (undefined4) * plVar5;
                    uVar15 = (undefined4)((ulonglong) * plVar5 >> 0x20);
                } else {
                    if ((iVar1 == 4) && (iVar1 = FUN_14005ac80(*plVar5 + 0x20, local_res18), iVar1 != 0)) {
                        local_60 = 3;
                        plVar5 = &local_68;
                        local_68 = local_res18[0];
                        goto LAB_140174444;
                    }
                    uVar14 = 0;
                    uVar15 = 0;
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                uVar6 = FUN_14018c320(uVar6, uVar10 * 8 + 8, 0);
                uVar10 = uVar10 + 1;
                *(float *) ((uVar6 - 4) + uVar10 * 8) = (float) (double) CONCAT44(uVar15, uVar14);
                *(float *) ((uVar6 - 8) + uVar10 * 8) = fVar16;
            }
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
    }
    lVar7 = FUN_14018c320(uVar6, uVar10 * 8 + 8, 0);
    *(undefined4 * )(lVar7 + 4 + uVar10 * 8) = 0xbf800000;
    *(undefined4 * )(lVar7 + uVar10 * 8) = 0xbf800000;
    pfVar9 = (float *) (lVar7 + 4);
    do {
        *(undefined8 * )((lVar2 - lVar7) + 0x42c + (longlong) pfVar9) = *(undefined8 * )(pfVar9 + -1);
        *(int *) (lVar2 + 0x470) = (int) uVar12;
        if (*pfVar9 <= 0.0 && *pfVar9 != 0.0) break;
        uVar11 = (int) uVar12 + 1;
        uVar12 = (ulonglong) uVar11;
        pfVar9 = pfVar9 + 2;
    } while ((int) uVar11 < 8);
    FUN_14018b900(lVar7, 0);
    return 0;
}


undefined8 FUN_140174540(undefined8 param_1) {
    undefined8 uVar1;
    double dVar2;

    uVar1 = FUN_140174120();
    dVar2 = (double) FUN_140056c40(param_1, 2);
    FUN_140173980(dVar2, (float) dVar2, uVar1);
    return 0;
}


undefined8 FUN_140174580(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined *puVar4;
    double dVar5;

    lVar2 = FUN_140174120();
    puVar3 = (undefined * )(**(code * *)(**(longlong * *)(lVar2 + 0x410) + 0x70))();
    puVar4 = &DAT_1409dd974;
    if (puVar3 != (undefined *) 0x0) {
        puVar4 = puVar3;
    }
    dVar5 = (double) FUN_1407dfd50(puVar4, 0, DAT_140c7aac8);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 * )(pdVar1 + 1) = 3;
    *pdVar1 = (double) (float) dVar5;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140174620(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140174120();
    pdVar2 = *(double **) (param_1 + 0x10);
    fVar1 = *(float *) (lVar3 + 0x420);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 *
FUN_140174660(undefined8 *param_1, undefined8 param_2, undefined8 param_3, longlong param_4,
              ulonglong param_5) {
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5d400;
    *(undefined4 * )((longlong) param_1 + 0x40c) = 0x3f800000;
    *(undefined2 * )(param_1 + 0x82) = 0;
    *(undefined4 * )((longlong) param_1 + 0x414) = 0;
    FUN_1400c35f0(param_1 + 0x84);
    FUN_1400c35f0(param_1 + 0xb8);
    FUN_1400c35f0(param_1 + 0xec);
    FUN_1401095e0(param_1 + 0x120);
    FUN_1401095e0(param_1 + 0x126);
    FUN_1401095e0(param_1 + 300);
    FUN_1401095e0(param_1 + 0x132);
    param_1[0x36] = param_1[0x36] | 0x400;
    if (((param_4 != 0) && (param_4 != -0x198)) && (param_4 + 0x238 != 0)) {
        param_5 = param_5 & 0xffffffffffffff00;
        FUN_1400c3880(param_1 + 0xec, param_4 + 0x238, 2, 0, param_5);
        param_5 = param_5 & 0xffffffffffffff00;
        FUN_1400c3880(param_1 + 0x84, param_4 + 0x1a8, 2, 0, param_5);
        FUN_1400c3880(param_1 + 0xb8, param_4 + 0x1f0, 2, 0, param_5 & 0xffffffffffffff00);
    }
    return param_1;
}


undefined8 FUN_1401747c0(undefined8 param_1, ulonglong param_2) {
    FUN_140174800();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140174800(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5d400;
    if ((longlong *) param_1[0x132] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x132] + 8))();
        param_1[0x132] = 0;
    }
    if (param_1[0x135] != 0) {
        FUN_14018b900(param_1[0x135], 0);
    }
    if ((longlong *) param_1[300] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[300] + 8))();
        param_1[300] = 0;
    }
    if (param_1[0x12f] != 0) {
        FUN_14018b900(param_1[0x12f], 0);
    }
    if ((longlong *) param_1[0x126] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x126] + 8))();
        param_1[0x126] = 0;
    }
    if (param_1[0x129] != 0) {
        FUN_14018b900(param_1[0x129], 0);
    }
    if ((longlong *) param_1[0x120] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x120] + 8))();
        param_1[0x120] = 0;
    }
    if (param_1[0x123] != 0) {
        FUN_14018b900(param_1[0x123], 0);
    }
    FUN_1400c4170(param_1 + 0xec);
    FUN_1400c4170(param_1 + 0xb8);
    FUN_1400c4170(param_1 + 0x84);
    FUN_1400c6030(param_1);
    return;
}


void FUN_140174900(undefined8 param_1, undefined8 param_2, longlong param_3) {
    uint in_EAX;
    uint uVar1;
    int iVar2;
    float fVar3;
    undefined4 uVar4;
    undefined4 in_XMM1_Dc;
    undefined4 in_XMM1_Dd;
    float fVar5;
    float fVar6;
    ulonglong uVar7;
    float fVar9;
    undefined auVar8[16];

    uVar4 = (undefined4)((ulonglong) param_2 >> 0x20);
    fVar3 = (float) param_2;
    fVar6 = *(float *) (param_3 + 0x404);
    if (fVar3 <= *(float *) (param_3 + 0x404)) {
        fVar6 = fVar3;
    }
    fVar9 = *(float *) (param_3 + 0x400);
    if (*(float *) (param_3 + 0x400) <= fVar6) {
        fVar9 = fVar6;
    }
    *(float *) (param_3 + 0x408) = fVar9;
    if (((*(byte * )(param_3 + 0x298) & 1) != 0) && (fVar6 = *(float *) (param_3 + 0x40c), 0.0 < fVar6)) {
        fVar5 = fVar3 / fVar6;
        auVar8 = CONCAT124(SUB1612(CONCAT412(in_XMM1_Dd, CONCAT48(in_XMM1_Dc, param_2)) >> 0x20, 0), fVar5);
        iVar2 = (int) fVar5;
        fVar9 = fVar5;
        if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar5)) {
            uVar1 = movmskps(in_EAX, CONCAT88(SUB168(CONCAT412(uVar4, CONCAT48(uVar4, param_2)) >> 0x40, 0),
                                              CONCAT44(fVar5, fVar5)) & (undefined[16]) 0xffffffffffffffff);
            in_EAX = uVar1 & 1;
            fVar9 = (float) (iVar2 - in_EAX);
        }
        iVar2 = (int) fVar5;
        fVar9 = fVar9 * fVar6;
        if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar5)) {
            uVar7 = SUB168(auVar8, 0);
            uVar1 = movmskps(in_EAX, CONCAT88(SUB168(CONCAT412(uVar4, CONCAT48(uVar4, uVar7)) >> 0x40, 0),
                                              uVar7 & 0xffffffff | uVar7 << 0x20));
            auVar8 = ZEXT416((uint)(float)(iVar2 + (uVar1 & 1 ^ 1)));
        }
        fVar6 = SUB164(auVar8, 0) * fVar6;
        if (fVar9 != fVar6) {
            if ((float) ((uint)(fVar6 - fVar3) & 0x7fffffff) < (float) ((uint)(fVar3 - fVar9) & 0x7fffffff)) {
                *(float *) (param_3 + 0x408) = fVar6;
                return;
            }
            *(float *) (param_3 + 0x408) = fVar9;
        }
    }
    return;
}


void FUN_1401749f0(undefined8 param_1, float param_2, longlong param_3) {
    double dVar1;
    double dVar2;
    uint in_EAX;
    uint uVar3;
    int iVar4;
    float fVar5;
    float fVar6;
    undefined auVar7[16];
    float fVar8;
    ulonglong uVar9;
    undefined auVar10[16];
    float fVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    int local_res10[6];
    int *piVar16;

    fVar6 = *(float *) (param_3 + 0x404);
    if (param_2 <= *(float *) (param_3 + 0x404)) {
        fVar6 = param_2;
    }
    fVar11 = *(float *) (param_3 + 0x400);
    if (*(float *) (param_3 + 0x400) <= fVar6) {
        fVar11 = fVar6;
    }
    if (((*(byte * )(param_3 + 0x298) & 1) != 0) && (fVar6 = *(float *) (param_3 + 0x40c), 0.0 < fVar6)) {
        auVar7 = ZEXT416((uint)(fVar11 / fVar6)) & (undefined[16]) 0xffffffffffffffff;
        fVar5 = SUB164(auVar7, 0);
        uVar9 = SUB168(auVar7, 0);
        iVar4 = (int) fVar5;
        auVar10 = auVar7;
        if ((iVar4 != -0x80000000) && ((float) iVar4 != fVar5)) {
            uVar3 = movmskps(in_EAX, ZEXT816(uVar9 | uVar9 << 0x20));
            in_EAX = uVar3 & 1;
            auVar10 = ZEXT416((uint)(float)(iVar4 - in_EAX));
        }
        iVar4 = (int) fVar5;
        fVar8 = SUB164(auVar10, 0) * fVar6;
        if ((iVar4 != -0x80000000) && ((float) iVar4 != fVar5)) {
            uVar3 = movmskps(in_EAX, ZEXT816(uVar9 | uVar9 << 0x20));
            auVar7 = ZEXT416((uint)(float)(iVar4 + (uVar3 & 1 ^ 1)));
        }
        fVar6 = SUB164(auVar7, 0) * fVar6;
        if ((fVar8 != fVar6) &&
            (fVar11 = fVar8,
                    (float) ((uint)(fVar6 - fVar11) & 0x7fffffff) < (float) ((uint)(fVar11 - fVar8) & 0x7fffffff))) {
            fVar11 = fVar6;
        }
    }
    piVar16 = local_res10;
    dVar2 = (double) fVar11;
    uVar14 = SUB84(dVar2, 0);
    uVar15 = (undefined4)((ulonglong) dVar2 >> 0x20);
    dVar1 = (double) *(float *) (param_3 + 0x408);
    uVar12 = SUB84(dVar1, 0);
    uVar13 = (undefined4)((ulonglong) dVar1 >> 0x20);
    local_res10[0] = 1;
    FUN_1400d4070(param_3, 0x48, param_3, &DAT_140a39774, dVar2, dVar1, piVar16);
    if (local_res10[0] != 0) {
        FUN_140174900(param_3);
        FUN_1400d4070(param_3, 0x49, param_3, &DAT_1409ddcb4, CONCAT44(uVar15, uVar14),
                      CONCAT44(uVar13, uVar12), piVar16);
    }
    return;
}


void FUN_140174b80(longlong param_1) {
    undefined8 local_58;
    undefined local_50;
    undefined local_48[16];
    undefined local_38[16];
    undefined local_28[16];
    undefined8 local_18;

    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x960, *(longlong * )(param_1 + 0x20) + 0xf0, 0, 0);
    }
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_58 = 0;
    local_50 = 0;
    local_38 = ZEXT816(0);
    local_18 = 0;
    FUN_14010b330(&local_58, *(undefined8 * )(param_1 + 0x20), L"DefaultHScrollThumb", 0);
    *(undefined4 * )(param_1 + 0x888) = 0;
    FUN_1400c3730(param_1 + 0x760, &local_58);
    *(byte * )(param_1 + 0x8fe) = *(byte * )(param_1 + 0x8fe) & 0xfe;
    *(undefined2 * )(param_1 + 0x8fc) = 0x10;
    *(undefined4 * )(param_1 + 0x8ec) = 0x3e800000;
    *(undefined8 * )(param_1 + 0x8f0) = 0x3e800000;
    *(undefined8 * )(param_1 + 0x8e4) = 5;
    *(undefined4 * )(param_1 + 0x8f8) = 0x3f000000;
    *(undefined4 * )(param_1 + 0x8e0) = 5;
    *(undefined8 * )(param_1 + 0x880) = local_18;
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x900, *(longlong * )(param_1 + 0x20) + 0xf0, 0, 0);
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x930, *(longlong * )(param_1 + 0x20) + 0xf0, 0, 0);
    }
    if (*(longlong * )(param_1 + 0x20) != 0) {
        FUN_140109710(param_1 + 0x990, *(longlong * )(param_1 + 0x20) + 0xf0, 0, 0);
    }
    return;
}


int *FUN_140174ce0(longlong param_1, int *param_2) {
    uint uVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    undefined auVar12[16];
    float fVar14;
    float fVar15;
    int local_res8;
    int local_resc;
    undefined auVar13[16];

    iVar6 = *(int *) (param_1 + 0x2cc);
    iVar9 = *(int *) (param_1 + 0x2d0);
    iVar5 = *(int *) (param_1 + 0x2d4);
    iVar10 = *(int *) (param_1 + 0x2d8);
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        iVar7 = 0;
        lVar2 = *(longlong * )(param_1 + 0x900);
        iVar4 = 0;
        if (*(char *) (param_1 + 0x411) == '\0') {
            iVar8 = iVar4;
            if (lVar2 != 0) {
                FUN_140101470(lVar2, &local_res8);
                iVar4 = local_res8;
                iVar8 = iVar7;
            }
            iVar6 = iVar6 + iVar4;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar8 = local_res8;
            }
            iVar5 = iVar5 - iVar8;
        } else {
            iVar8 = iVar4;
            if (lVar2 != 0) {
                FUN_140101470(lVar2, &local_res8);
                iVar4 = local_resc;
                iVar8 = iVar7;
            }
            iVar9 = iVar9 + iVar4;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar8 = local_resc;
            }
            iVar10 = iVar10 - iVar8;
        }
    } else if (*(char *) (param_1 + 0x411) == '\0') {
        piVar3 = (int *) FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar6 = iVar6 + *piVar3;
        piVar3 = (int *) FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar5 = iVar5 - *piVar3;
    } else {
        lVar2 = FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar9 = iVar9 + *(int *) (lVar2 + 4);
        lVar2 = FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar10 = iVar10 - *(int *) (lVar2 + 4);
    }
    fVar11 = 0.0;
    fVar14 = *(float *) (param_1 + 0x404) - *(float *) (param_1 + 0x400);
    if (0.0 < fVar14) {
        if (*(char *) (param_1 + 0x411) == '\0') {
            piVar3 = (int *) FUN_1400c3930();
            iVar4 = *piVar3;
            fVar15 = (float) (iVar5 - iVar6);
        } else {
            fVar15 = (float) (iVar10 - iVar9);
            piVar3 = (int *) FUN_1400c3930();
            iVar4 = piVar3[1];
        }
        if (fVar11 < fVar15 - (float) iVar4) {
            auVar12 = ZEXT416((uint)(*(float *) (param_1 + 0x408) - *(float *) (param_1 + 0x400))) &
                      (undefined[16]) 0xffffffffffffffff;
            fVar11 = (SUB164(auVar12, 0) * (fVar15 - (float) iVar4)) / fVar14 + 0.5;
            auVar13 = CONCAT124(SUB1612(auVar12 >> 0x20, 0), fVar11);
            iVar4 = (int) fVar11;
            if ((iVar4 != -0x80000000) && ((float) iVar4 != fVar11)) {
                uVar1 = movmskps((int) piVar3,
                                 CONCAT88(SUB168(auVar12 >> 0x40, 0),
                                          SUB168(auVar13, 0) | SUB168(auVar13, 0) << 0x20) &
                                 (undefined[16]) 0xffffffffffffffff);
                auVar13 = ZEXT416((uint)(float)(iVar4 - (uVar1 & 1)));
            }
            if (*(char *) (param_1 + 0x411) == '\0') {
                iVar6 = iVar6 + (int) SUB164(auVar13, 0);
                piVar3 = (int *) FUN_1400c3930(param_1 + 0x760, &local_res8);
                iVar5 = *piVar3 + iVar6;
            } else {
                iVar9 = iVar9 + (int) SUB164(auVar13, 0);
                lVar2 = FUN_1400c3930(param_1 + 0x760, &local_res8);
                iVar10 = *(int *) (lVar2 + 4) + iVar9;
            }
            *param_2 = iVar6;
            param_2[1] = iVar9;
            param_2[2] = iVar5;
            param_2[3] = iVar10;
        } else {
            *param_2 = DAT_140c784d0;
            param_2[1] = DAT_140c784d4;
            param_2[2] = DAT_140c784d8;
            param_2[3] = DAT_140c784dc;
        }
    } else {
        *param_2 = DAT_140c784d0;
        param_2[1] = DAT_140c784d4;
        param_2[2] = DAT_140c784d8;
        param_2[3] = DAT_140c784dc;
    }
    return param_2;
}


int *FUN_140174f70(longlong param_1, int *param_2) {
    longlong lVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int local_res8;
    int local_resc;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;

    iVar4 = *(int *) (param_1 + 0x2cc);
    iVar3 = *(int *) (param_1 + 0x2d0);
    iVar8 = *(int *) (param_1 + 0x2d4);
    iVar9 = *(int *) (param_1 + 0x2d8);
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        iVar5 = 0;
        lVar1 = *(longlong * )(param_1 + 0x900);
        iVar6 = 0;
        if (*(char *) (param_1 + 0x411) == '\0') {
            iVar7 = iVar6;
            if (lVar1 != 0) {
                FUN_140101470(lVar1, &local_res8);
                iVar6 = local_res8;
                iVar7 = iVar5;
            }
            iVar4 = iVar4 + iVar6;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar7 = local_res8;
            }
            iVar8 = iVar8 - iVar7;
        } else {
            iVar7 = iVar6;
            if (lVar1 != 0) {
                FUN_140101470(lVar1, &local_res8);
                iVar6 = local_resc;
                iVar7 = iVar5;
            }
            iVar3 = iVar3 + iVar6;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar7 = local_resc;
            }
            iVar9 = iVar9 - iVar7;
        }
    } else if (*(char *) (param_1 + 0x411) == '\0') {
        piVar2 = (int *) FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar4 = iVar4 + *piVar2;
        piVar2 = (int *) FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar8 = iVar8 - *piVar2;
    } else {
        lVar1 = FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar3 = iVar3 + *(int *) (lVar1 + 4);
        lVar1 = FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar9 = iVar9 - *(int *) (lVar1 + 4);
    }
    FUN_140174ce0(param_1, &local_28);
    if ((local_28 < local_20) && (local_24 < local_1c)) {
        if (*(char *) (param_1 + 0x411) == '\0') {
            *param_2 = local_20;
            param_2[1] = iVar3;
            param_2[2] = iVar8;
            param_2[3] = iVar9;
        } else {
            *param_2 = iVar4;
            param_2[1] = local_1c;
            param_2[2] = iVar8;
            param_2[3] = iVar9;
        }
    } else {
        *param_2 = DAT_140c784d0;
        param_2[1] = DAT_140c784d4;
        param_2[2] = DAT_140c784d8;
        param_2[3] = DAT_140c784dc;
    }
    return param_2;
}


int *FUN_140175130(longlong param_1, int *param_2) {
    longlong lVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int local_res8;
    int local_resc;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;

    iVar8 = *(int *) (param_1 + 0x2cc);
    iVar9 = *(int *) (param_1 + 0x2d0);
    iVar4 = *(int *) (param_1 + 0x2d4);
    iVar3 = *(int *) (param_1 + 0x2d8);
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        iVar5 = 0;
        lVar1 = *(longlong * )(param_1 + 0x900);
        iVar6 = 0;
        if (*(char *) (param_1 + 0x411) == '\0') {
            iVar7 = iVar6;
            if (lVar1 != 0) {
                FUN_140101470(lVar1, &local_res8);
                iVar6 = local_res8;
                iVar7 = iVar5;
            }
            iVar8 = iVar8 + iVar6;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar7 = local_res8;
            }
            iVar4 = iVar4 - iVar7;
        } else {
            iVar7 = iVar6;
            if (lVar1 != 0) {
                FUN_140101470(lVar1, &local_res8);
                iVar6 = local_resc;
                iVar7 = iVar5;
            }
            iVar9 = iVar9 + iVar6;
            if (*(longlong * )(param_1 + 0x930) != 0) {
                FUN_140101470(*(longlong * )(param_1 + 0x930), &local_res8);
                iVar7 = local_resc;
            }
            iVar3 = iVar3 - iVar7;
        }
    } else if (*(char *) (param_1 + 0x411) == '\0') {
        piVar2 = (int *) FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar8 = iVar8 + *piVar2;
        piVar2 = (int *) FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar4 = iVar4 - *piVar2;
    } else {
        lVar1 = FUN_1400c3930(param_1 + 0x420, &local_res8);
        iVar9 = iVar9 + *(int *) (lVar1 + 4);
        lVar1 = FUN_1400c3930(param_1 + 0x5c0, &local_res8);
        iVar3 = iVar3 - *(int *) (lVar1 + 4);
    }
    FUN_140174ce0(param_1, &local_28);
    if ((local_28 < local_20) && (local_24 < local_1c)) {
        if (*(char *) (param_1 + 0x411) == '\0') {
            *param_2 = iVar8;
            param_2[1] = iVar9;
            param_2[2] = local_28;
            param_2[3] = iVar3;
        } else {
            *param_2 = iVar8;
            param_2[1] = iVar9;
            param_2[2] = iVar4;
            param_2[3] = local_24;
        }
    } else {
        *param_2 = DAT_140c784d0;
        param_2[1] = DAT_140c784d4;
        param_2[2] = DAT_140c784d8;
        param_2[3] = DAT_140c784dc;
    }
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140175310(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    uint uVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    undefined8 uVar10;
    undefined auVar12[16];
    int iVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined uVar22;
    byte bVar23;
    undefined uVar24;
    undefined uVar25;
    undefined uVar26;
    undefined uVar27;
    undefined uVar28;
    undefined uVar29;
    undefined uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    int local_res8[2];
    int local_b8;
    undefined4 local_b4;
    int local_b0;
    undefined4 local_ac;
    int local_a8;
    undefined4 local_a4;
    int local_a0;
    undefined4 local_9c;
    undefined local_98[16];
    undefined local_88[16];
    undefined auVar11[12];
    undefined auVar13[16];
    undefined auVar14[16];

    iVar9 = *(int *) (param_1 + 0x2d4);
    iVar7 = *(int *) (param_1 + 0x2cc);
    uVar1 = *(undefined4 * )(param_1 + 0x2d0);
    uVar2 = *(undefined4 * )(param_1 + 0x2d8);
    if (iVar9 - iVar7 < 1) {
        return;
    }
    local_b8 = iVar7;
    local_b4 = uVar1;
    local_b0 = iVar9;
    local_ac = uVar2;
    if ((*(byte * )(param_1 + 0x298) >> 3 & 1) == 0) {
        lVar6 = *(longlong * )(param_1 + 0x900);
        local_a8 = iVar7;
        local_a4 = uVar1;
        local_9c = uVar2;
        if (lVar6 == 0) {
            local_a0 = 0;
        } else {
            local_a0 = iVar9;
            FUN_140101470(lVar6, local_res8);
            local_a0 = local_res8[0];
        }
        uVar18 = 0x3f800000;
        uVar19 = 0x3f800000;
        uVar20 = 0x3f800000;
        uVar21 = 0x3f800000;
        local_a0 = local_a0 + iVar7;
        local_88._0_12_ = CONCAT48(0x3f800000, 0x3f8000003f800000);
        local_88 = CONCAT412(0x3f800000, local_88._0_12_);
        if (lVar6 != 0) {
            FUN_140103cf0(lVar6, &local_a8, local_88, 0,
                          (DAT_140c63664 - *(float *) (param_1 + 0x908)) * *(float *) (param_1 + 0x90c));
        }
        lVar6 = *(longlong * )(param_1 + 0x930);
        if (lVar6 == 0) {
            local_a8 = 0;
            local_a4 = uVar1;
            local_a0 = iVar9;
            local_9c = uVar2;
        } else {
            local_a8 = iVar7;
            local_a4 = uVar1;
            local_a0 = iVar9;
            local_9c = uVar2;
            FUN_140101470(lVar6, local_res8);
            local_a8 = local_res8[0];
        }
        local_a8 = iVar9 - local_a8;
        local_88 = CONCAT412(uVar21, CONCAT48(uVar20, CONCAT44(uVar19, uVar18)));
        if (lVar6 != 0) {
            FUN_140103cf0(lVar6, &local_a8, local_88, 0,
                          (DAT_140c63664 - *(float *) (param_1 + 0x938)) * *(float *) (param_1 + 0x93c));
        }
        if (*(longlong * )(param_1 + 0x900) == 0) {
            iVar9 = 0;
        } else {
            FUN_140101470(*(longlong * )(param_1 + 0x900), local_res8);
            iVar9 = local_res8[0];
        }
        local_b8 = local_b8 + iVar9;
        if (*(longlong * )(param_1 + 0x930) != 0) {
            FUN_140101470(*(longlong * )(param_1 + 0x930), local_res8);
            local_b0 = local_b0 - local_res8[0];
        }
        goto LAB_140175605;
    }
    bVar23 = *(byte * )(param_1 + 0x5bc);
    uVar18 = 0x3f800000;
    uVar19 = 0x3f800000;
    uVar20 = 0x3f800000;
    uVar21 = 0x3f800000;
    local_88._0_12_ = CONCAT48(0x3f800000, 0x3f8000003f800000);
    local_88 = CONCAT412(0x3f800000, local_88._0_12_);
    uVar8 = 4;
    if ((bVar23 & 0x10) == 0) {
        uVar3 = 4;
    } else if ((char) bVar23 < '\0') {
        if ((bVar23 & 0x40) == 0) {
            LAB_1401754f5:
            if ((char) bVar23 < '\0') {
                uVar3 = 2;
            } else {
                uVar3 = -(uint)((*(byte * )(param_1 + 0x5be) & 1) != 0) & 5;
            }
        } else {
            uVar3 = 3;
        }
    } else {
        if ((bVar23 & 0x40) == 0) goto LAB_1401754f5;
        uVar3 = 1;
    }
    lVar4 = (longlong)(int)
    uVar3;
    lVar6 = *(longlong * )(param_1 + 0x420 + lVar4 * 0x30);
    if (lVar6 != 0) {
        FUN_140103cf0(lVar6, param_1 + 0x580, local_88, 0,
                      (DAT_140c63664 - *(float *) (param_1 + 0x428 + lVar4 * 0x30)) *
                      *(float *) (param_1 + 0x42c + lVar4 * 0x30));
    }
    bVar23 = *(byte * )(param_1 + 0x75c);
    local_88 = CONCAT412(uVar21, CONCAT48(uVar20, CONCAT44(uVar19, uVar18)));
    if ((bVar23 & 0x10) != 0) {
        if ((char) bVar23 < '\0') {
            if ((bVar23 & 0x40) == 0) {
                LAB_140175588:
                if ((char) bVar23 < '\0') {
                    uVar8 = 2;
                } else {
                    uVar8 = -(uint)((*(byte * )(param_1 + 0x75e) & 1) != 0) & 5;
                }
            } else {
                uVar8 = 3;
            }
        } else {
            if ((bVar23 & 0x40) == 0) goto LAB_140175588;
            uVar8 = 1;
        }
    }
    lVar4 = (longlong)(int)
    uVar8;
    lVar6 = *(longlong * )(param_1 + 0x5c0 + lVar4 * 0x30);
    if (lVar6 != 0) {
        FUN_140103cf0(lVar6, param_1 + 0x720, local_88, 0,
                      (DAT_140c63664 - *(float *) (param_1 + 0x5c8 + lVar4 * 0x30)) *
                      *(float *) (param_1 + 0x5cc + lVar4 * 0x30));
    }
    piVar5 = (int *) FUN_1400c3930(param_1 + 0x420);
    local_b8 = local_b8 + *piVar5;
    piVar5 = (int *) FUN_1400c3930(param_1 + 0x5c0, local_res8);
    local_b0 = local_b0 - *piVar5;
    LAB_140175605:
    local_88 = CONCAT412(uVar21, CONCAT48(uVar20, CONCAT44(uVar19, uVar18)));
    if (*(longlong * )(param_1 + 0x960) != 0) {
        FUN_140103cf0(*(longlong * )(param_1 + 0x960), &local_b8, local_88, 0,
                      (DAT_140c63664 - *(float *) (param_1 + 0x968)) * *(float *) (param_1 + 0x96c));
    }
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    fVar16 = 0.0;
    fVar17 = *(float *) (param_1 + 0x404) - *(float *) (param_1 + 0x400);
    uVar22 = SUB41(fVar17, 0);
    uVar24 = (undefined)((uint) fVar17 >> 8);
    uVar25 = (undefined)((uint) fVar17 >> 0x10);
    uVar26 = (undefined)((uint) fVar17 >> 0x18);
    if ((0.0 < fVar17) &&
        (piVar5 = (int *) FUN_1400c3930(param_1 + 0x760, local_res8),
                fVar16 < (float) (local_b0 - local_b8) - (float) *piVar5)) {
        (**(code * *)(*DAT_140c65680 + 0x90))();
        if ((*(byte * )(param_1 + 0x298) >> 1 & 1) != 0) {
            iVar9 = 0;
            if (*(longlong * )(param_1 + 0x990) != 0) {
                FUN_140101470();
                iVar9 = local_res8[0];
            }
            fVar17 = *(float *) (param_1 + 0x400);
            if (0 < *(int *) (param_1 + 0x418)) {
                iVar9 = *(int *) (param_1 + 0x418);
            }
            if (fVar17 < *(float *) (param_1 + 0x404) || fVar17 == *(float *) (param_1 + 0x404)) {
                fVar16 = 0.003921569;
                fVar32 = 0.003921569;
                fVar33 = 0.003921569;
                fVar34 = 0.003921569;
                fVar31 = 1.0 / (float) CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar22)));
                uVar8 = CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar22))) ^
                        CONCAT13(uVar26, CONCAT12(uVar25, CONCAT11(uVar24, uVar22)));
                bVar23 = (byte) uVar8;
                uVar22 = (undefined)(uVar8 >> 8);
                uVar24 = (undefined)(uVar8 >> 0x10);
                uVar25 = (undefined)(uVar8 >> 0x18);
                uVar8 = CONCAT13(uVar30, CONCAT12(uVar29, CONCAT11(uVar28, uVar27))) ^
                        CONCAT13(uVar30, CONCAT12(uVar29, CONCAT11(uVar28, uVar27)));
                uVar26 = (undefined) uVar8;
                uVar27 = (undefined)(uVar8 >> 8);
                uVar28 = (undefined)(uVar8 >> 0x10);
                uVar29 = (undefined)(uVar8 >> 0x18);
                iVar7 = local_b8;
                do {
                    local_a4 = local_b4;
                    local_9c = local_ac;
                    uVar1 = *(undefined4 * )(param_1 + 0x41c);
                    uVar10 = CONCAT44(uVar1, uVar1);
                    auVar11 = CONCAT48(uVar1, uVar10);
                    local_a8 = ((int) ((fVar17 - *(float *) (param_1 + 0x400)) * fVar31 *
                                       (float) (local_b0 - iVar7)) - iVar9 / 2) + iVar7;
                    auVar14 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                         CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                             (CONCAT115(uVar29, CONCAT114(
                                                                                                                                                     (char) ((uint) uVar1 >>
                                                                                                                                                                          0x18),
                                                                                                                                                     SUB1614(CONCAT412(
                                                                                                                                                             uVar1, auVar11), 0)))
                                                                                                                                                      >> 0x70, 0),
                                                                                                                                     CONCAT113(uVar28,
                                                                                                                                               SUB1613(CONCAT412(uVar1, auVar11),
                                                                                                                                                       0))) >> 0x68, 0),
                                                                                                                    CONCAT112((char) ((uint) uVar1 >> 0x10), auVar11)) >>
                                                                                                                                                                       0x60, 0),
                                                                                                   CONCAT111(uVar27, SUB1211(auVar11, 0))) >>
                                                                                                                                           0x58, 0), CONCAT110(
                                                                                         (char) ((uint) uVar1 >> 8),
                                                                                         SUB1210(auVar11, 0))) >> 0x50, 0),
                                                                                 CONCAT19(uVar26, SUB129(auVar11, 0)))
                                                                               >> 0x48, 0),
                                                                CONCAT18((char) uVar1, uVar10)) >> 0x40, 0), uVar25),
                                       ((uint7) uVar10 >> 0x18) << 0x30);
                    auVar13 = CONCAT115(CONCAT101(SUB1610(auVar14 >> 0x30, 0), uVar24),
                                        ((uint5) uVar10 >> 0x10) << 0x20);
                    auVar12 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar13 >> 0x20, 0), uVar22),
                                                          ((uint3) uVar1 >> 8) << 0x10) >> 0x10, 0),
                                        (ushort) uVar1 & 0xff | (ushort) bVar23 << 8);
                    local_a0 = local_a8 + iVar9;
                    iVar15 = SUB164(CONCAT214(CONCAT11(uVar29, uVar28),
                                              CONCAT212(SUB162(auVar14 >> 0x30, 0), SUB1612(auVar12, 0))) >> 0x60, 0);
                    auVar13 = CONCAT610(SUB166(CONCAT412(iVar15, CONCAT210(CONCAT11(uVar27, uVar26),
                                                                           SUB1610(auVar12, 0))) >> 0x50, 0),
                                        CONCAT28(SUB162(auVar13 >> 0x20, 0), SUB168(auVar12, 0)));
                    local_88._0_12_ =
                            CONCAT48((float) (SUB164(auVar12, 0) & 0xffff | (uint) CONCAT11(uVar22, bVar23) << 0x10)
                                     * fVar33, CONCAT44((float) SUB164(
                                                                CONCAT106(CONCAT82(SUB168(auVar13 >> 0x40, 0), CONCAT11(uVar25, uVar24)),
                                                                          (SUB166(auVar12, 0) >> 0x10) <<
                                                                                                       0x20) >> 0x20, 0) * fVar32,
                                                        (float) SUB164(auVar13 >> 0x40, 0) * fVar16));
                    local_88 = CONCAT412((float) iVar15 * fVar34, local_88._0_12_);
                    if (*(longlong * )(param_1 + 0x990) != 0) {
                        FUN_140103cf0(*(longlong * )(param_1 + 0x990), &local_a8, local_88, 0,
                                      (DAT_140c63664 - *(float *) (param_1 + 0x998)) *
                                      *(float *) (param_1 + 0x99c));
                        iVar7 = local_b8;
                    }
                    fVar17 = fVar17 + *(float *) (param_1 + 0x40c);
                } while (fVar17 < *(float *) (param_1 + 0x404) || fVar17 == *(float *) (param_1 + 0x404));
            }
        }
        FUN_140174ce0(param_1, local_98);
        local_88 = CONCAT412(uVar21, CONCAT48(uVar20, CONCAT44(uVar19, uVar18)));
        if (*(char *) (param_1 + 0x410) == '\0') {
            lVar6 = *(longlong * )(param_1 + 0x760);
            if (lVar6 == 0) {
                return;
            }
            fVar17 = (DAT_140c63664 - *(float *) (param_1 + 0x768)) * *(float *) (param_1 + 0x76c);
        } else {
            lVar6 = *(longlong * )(param_1 + 0x790);
            if (lVar6 == 0) {
                return;
            }
            fVar17 = (DAT_140c63664 - *(float *) (param_1 + 0x798)) * *(float *) (param_1 + 0x79c);
        }
        FUN_140103cf0(lVar6, local_98, local_88, 0, fVar17);
    }
    return;
}


void FUN_140175a00(longlong *param_1, int param_2, int *param_3, undefined param_4) {
    int iVar1;
    int iVar2;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    undefined local_18[16];

    FUN_140174ce0(param_1, &local_28);
    FUN_140174f70(param_1, local_18);
    FUN_140175130();
    if (((*(byte * )(param_1 + 0x53) >> 3 & 1) != 0) && (param_2 == 0)) {
        iVar2 = FUN_1400c3d70(param_1 + 0x84, param_3);
        if (iVar2 == 2) {
            (**(code * *)(*param_1 + 0x240))(param_1);
        }
        iVar2 = FUN_1400c3d70();
        if (iVar2 == 2) {
            (**(code * *)(*param_1 + 0x238))();
        }
    }
    iVar2 = *param_3;
    if ((local_28 <= iVar2) && (iVar2 < local_20)) {
        iVar1 = param_3[1];
        if ((local_24 <= iVar1) && (iVar1 < local_1c)) {
            if (*(char *) ((longlong) param_1 + 0x411) == '\0') {
                *(int *) ((longlong) param_1 + 0x414) = iVar2 - local_28;
            } else {
                *(int *) ((longlong) param_1 + 0x414) = iVar1 - local_24;
            }
            *(undefined * )(param_1 + 0x82) = 1;
        }
    }
    FUN_1400d2120(param_1, param_2, param_3, param_4);
    return;
}


void FUN_140175b10(longlong *param_1, int param_2, undefined8 param_3) {
    int iVar1;

    *(undefined * )(param_1 + 0x82) = 0;
    if (((*(byte * )(param_1 + 0x53) >> 3 & 1) != 0) && (param_2 == 0)) {
        if ((*(byte * )((longlong) param_1 + 0x5bc) & 0x20) != 0) {
            iVar1 = FUN_1400c3e20(param_1 + 0x84);
            if (iVar1 == 2) {
                (**(code * *)(*param_1 + 0x240))(param_1);
            }
        }
        if ((*(byte * )((longlong) param_1 + 0x75c) & 0x20) != 0) {
            iVar1 = FUN_1400c3e20(param_1 + 0xb8);
            if (iVar1 == 2) {
                (**(code * *)(*param_1 + 0x238))(param_1);
            }
        }
    }
    FUN_1400d2550(param_1, param_2, param_3);
    return;
}


undefined8 FUN_140175bb0(longlong *param_1, int *param_2) {
    int iVar1;
    undefined8 uVar2;
    float fVar3;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    undefined local_18[16];

    if ((*(byte * )(param_1 + 0x53) >> 3 & 1) != 0) {
        if ((*(byte * )((longlong) param_1 + 0x5bc) & 0x20) != 0) {
            iVar1 = FUN_1400c3f20(param_1 + 0x84);
            if (iVar1 == 2) {
                (**(code * *)(*param_1 + 0x240))(param_1);
            }
        }
        if ((*(byte * )((longlong) param_1 + 0x75c) & 0x20) != 0) {
            iVar1 = FUN_1400c3f20(param_1 + 0xb8, param_2);
            if (iVar1 == 2) {
                (**(code * *)(*param_1 + 0x238))(param_1);
            }
        }
    }
    if (*(char *) (param_1 + 0x82) == '\0') {
        uVar2 = FUN_1400d23b0(param_1, param_2);
        return uVar2;
    }
    FUN_140174ce0(param_1, local_18);
    FUN_140174f70(param_1, &local_38);
    FUN_140175130();
    if (*(char *) ((longlong) param_1 + 0x411) == '\0') {
        iVar1 = (*param_2 - *(int *) ((longlong) param_1 + 0x414)) - local_20;
        local_1c = ((local_30 - local_38) - local_28) + local_20;
    } else {
        iVar1 = (param_2[1] - *(int *) ((longlong) param_1 + 0x414)) - local_1c;
        local_1c = ((local_2c - local_24) - local_34) + local_1c;
    }
    if (((0 < local_1c) &&
         (fVar3 = *(float *) ((longlong) param_1 + 0x404) - *(float *) (param_1 + 0x80), 0.0 < fVar3)) &&
        (((float) iVar1 * fVar3) / (float) local_1c != 0.0)) {
        FUN_1401749f0(param_1);
    }
    return 0;
}


void FUN_140175d40(undefined8 param_1, undefined4 param_2, longlong *param_3) {
    int iVar1;
    undefined8 extraout_XMM0_Qa;

    if ((*(byte * )(param_3 + 0x53) >> 3 & 1) != 0) {
        if ((*(byte * )((longlong) param_3 + 0x5bc) & 0x20) != 0) {
            iVar1 = FUN_1400c4090(param_3 + 0x84);
            param_1 = extraout_XMM0_Qa;
            if (iVar1 == 2) {
                param_1 = (**(code * *)(*param_3 + 0x240))(param_3);
            }
        }
        if ((*(byte * )((longlong) param_3 + 0x75c) & 0x20) != 0) {
            iVar1 = FUN_1400c4090(param_1, param_2, param_3 + 0xb8);
            if (iVar1 == 2) {
                (**(code * *)(*param_3 + 0x238))(param_3);
            }
        }
    }
    return;
}


void FUN_140176540(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.SliderBar", 0x10);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_1401765b0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x1401765c0;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140176601;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_GetValue_140c58260 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 6);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017668f;
    FUN_1400569b0(lVar2, "Apollo.SliderBar");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_1401766b1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_1401766cd:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1401766cd;
        if (iVar1 == 7) goto LAB_1401766b1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_1401766cd;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401766fc;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140176722;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017676a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017678f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401767b3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401767d4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401767f9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017683c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140176861;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_1401768c9:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14017689a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1401768c9;
        if (iVar1 != 8) goto LAB_14017689a;
    }
    uVar14 = *puVar12;
    LAB_14017689a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401768ac;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401768bc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_1401768e0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if ((*(uint * )(lVar1 + 0x1b0) >> 10 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "SliderBar", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140176980(undefined8 param_1) {
    undefined8 uVar1;
    double dVar2;

    uVar1 = FUN_1401768e0();
    dVar2 = (double) FUN_140056c40(param_1, 2);
    FUN_140174900(dVar2, (float) dVar2, uVar1);
    return 0;
}


undefined8 FUN_1401769c0(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401768e0();
    pdVar2 = *(double **) (param_1 + 0x10);
    fVar1 = *(float *) (lVar3 + 0x408);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140176a00(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    undefined8 *puVar2;
    double dVar3;
    float fVar4;
    undefined4 in_XMM6_Da;
    float fVar5;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar6;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar7[16];
    undefined auVar8[16];

    auVar8 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    auVar7 = CONCAT412(in_XMM7_Dd, CONCAT48(in_XMM7_Dc, CONCAT44(in_XMM7_Db, in_XMM7_Da)));
    lVar1 = FUN_1401768e0();
    dVar3 = (double) FUN_140056c40(param_1, 2, param_3, param_4, auVar7, auVar8);
    fVar5 = (float) dVar3;
    dVar3 = (double) FUN_140056c40(param_1, 3);
    puVar2 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
    fVar6 = (float) dVar3;
    if (((puVar2 < *(undefined8 * *)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x38))) {
        dVar3 = (double) FUN_140056c40(param_1, 4, param_3, param_4, auVar7, auVar8);
    } else {
        dVar3 = 1.0;
    }
    *(float *) (lVar1 + 0x400) = fVar5;
    fVar4 = fVar6;
    if (*(float *) (lVar1 + 0x408) <= fVar6) {
        fVar4 = *(float *) (lVar1 + 0x408);
    }
    *(float *) (lVar1 + 0x404) = fVar6;
    if (fVar5 <= fVar4) {
        fVar5 = fVar4;
    }
    *(float *) (lVar1 + 0x40c) = (float) dVar3;
    *(float *) (lVar1 + 0x408) = fVar5;
    return 0;
}


undefined8 FUN_140176ad0(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401768e0();
    pdVar2 = *(double **) (param_1 + 0x10);
    fVar1 = *(float *) (lVar3 + 0x400);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140176b10(longlong param_1) {
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1401768e0();
    pdVar2 = *(double **) (param_1 + 0x10);
    fVar1 = *(float *) (lVar3 + 0x404);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) fVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140176b50(longlong param_1) {
    char cVar1;
    uint *puVar2;
    longlong lVar3;

    lVar3 = FUN_1401768e0();
    if (lVar3 == 0) {
        return 0;
    }
    puVar2 = *(uint * *)(param_1 + 0x10);
    cVar1 = *(char *) (lVar3 + 0x410);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar1 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140176ba0(undefined8 *param_1, undefined8 param_2, undefined8 param_3, longlong param_4,
                   undefined *param_5, longlong param_6, undefined4 *param_7) {
    undefined4 uVar1;
    uint uVar2;
    undefined2 *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined *puVar9;
    uint uVar10;
    undefined auStack392[32];
    undefined8 local_168;
    longlong local_160;
    undefined4 *local_158;
    ulonglong local_150;
    undefined *local_148;
    undefined8 local_140;
    undefined8 local_138;
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
    undefined4 local_f8[4];
    undefined4 local_e8[4];
    uint local_d8;
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
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    uint local_78;
    undefined8 local_68;
    int local_60;
    int local_5c;
    int local_58[4];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    local_158 = param_7;
    local_160 = param_6;
    local_168 = param_5;
    FUN_1400c5920();
    lVar6 = 0;
    *(undefined4 * )(param_1 + 0x83) = 100;
    *param_1 = &PTR_LAB_140b5d650;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[0x85] = puVar3;
    param_1[0x86] = puVar3;
    param_1[0x87] = puVar3 + 8;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    param_1[0x36] = param_1[0x36] | 0x10;
    uVar4 = FUN_1400cb890(param_1, local_58);
    FUN_14014e8d0(param_5, &local_68, uVar4);
    local_d8 = 0;
    local_68._4_4_ = local_5c - local_68._4_4_;
    puVar8 = (undefined8 * ) & local_118;
    lVar5 = lVar6;
    do {
        uVar1 = *(undefined4 * )((longlong) & DAT_140a3a9a8 + lVar5);
        *(undefined4 * )((longlong) local_e8 + lVar5) = 0;
        lVar7 = lVar5 + 4;
        *(undefined4 * )((longlong) local_f8 + lVar5) = uVar1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        lVar5 = lVar7;
    } while (lVar7 < 0x10);
    local_d8 = local_d8 & 0xfffffffe;
    local_58[0] = 0;
    local_58[1] = 0;
    local_60 = -local_68._4_4_;
    local_58[2] = 0x3f800000;
    local_58[3] = 0x3f800000;
    local_68 = 0;
    local_5c = 0;
    lVar5 = lVar6;
    puVar8 = (undefined8 * ) & local_118;
    do {
        lVar7 = lVar5 + 4;
        *(undefined4 * )((longlong) local_f8 + lVar5) = *(undefined4 * )((longlong) local_58 + lVar5);
        *(undefined4 * )((longlong) local_e8 + lVar5) = *(undefined4 * )((longlong) & local_68 + lVar5);
        *puVar8 = 0;
        lVar5 = lVar7;
        puVar8 = puVar8 + 1;
    } while (lVar7 < 0x10);
    lVar7 = FUN_14018b280(0x580, 0);
    lVar5 = lVar6;
    if (lVar7 != 0) {
        local_158 = (undefined4 *) 0x0;
        local_160 = 0;
        local_168 = &DAT_140c67280;
        lVar5 = FUN_14010e4a0(lVar7, param_2, param_1, 0);
    }
    uVar2 = local_d8;
    param_1[0x80] = lVar5;
    *(undefined4 * )(lVar5 + 0x2c0) = *(undefined4 * )(param_1 + 0x58);
    local_c8 = local_128;
    uStack196 = uStack292;
    uStack192 = uStack288;
    uStack188 = uStack284;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    *(ulonglong * )(param_1[0x80] + 0x290) = *(ulonglong * )(param_1[0x80] + 0x290) | 0x100;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    *(ulonglong * )(param_1[0x80] + 0x298) = *(ulonglong * )(param_1[0x80] + 0x298) | 2;
    local_98 = local_f8[0];
    uStack148 = local_f8[1];
    uStack144 = local_f8[2];
    uStack140 = local_f8[3];
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    local_78 = local_d8 | 0x300;
    FUN_1400cc680(param_1[0x80], &local_c8);
    local_d8 = uVar2 & 0xfffffffe;
    local_68 = 0x3f800000;
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58[0] = -local_68._4_4_;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    lVar5 = lVar6;
    puVar8 = (undefined8 * ) & local_118;
    do {
        lVar7 = lVar5 + 4;
        *(undefined4 * )((longlong) local_f8 + lVar5) = *(undefined4 * )((longlong) & local_68 + lVar5);
        *(undefined4 * )((longlong) local_e8 + lVar5) = *(undefined4 * )((longlong) local_58 + lVar5);
        *puVar8 = 0;
        lVar5 = lVar7;
        puVar8 = puVar8 + 1;
    } while (lVar7 < 0x10);
    lVar5 = lVar6;
    if (((param_4 == 0) || (param_4 == -0xa8)) || (param_4 + 0x100 == 0)) {
        lVar7 = FUN_14018b280(0x620, 0);
        if (lVar7 != 0) {
            local_138 = 0;
            local_140 = 0;
            local_148 = &DAT_140c67280;
            local_150 = 0;
            local_158 = (undefined4 * )((ulonglong) local_158 & 0xffffffffffffff00);
            local_160 = 0;
            local_168 = (undefined *) CONCAT44(local_168._4_4_, 1);
            lVar5 = FUN_14012fa20(lVar7, param_1[4], param_1, L"DefaultVScrollDownButton");
        }
    } else {
        lVar7 = FUN_14018b280(0x620, 0);
        if (lVar7 != 0) {
            local_140 = 0;
            local_148 = &DAT_140c67280;
            local_150 = 0;
            local_168 = (undefined *) CONCAT44(local_168._4_4_, 1);
            lVar5 = FUN_14012f720(lVar7, param_1[4], param_1, param_4 + 0x100);
        }
    }
    uVar2 = local_d8;
    param_1[0x81] = lVar5;
    *(ulonglong * )(lVar5 + 0x290) = *(ulonglong * )(lVar5 + 0x290) | 0x100;
    local_c8 = local_128;
    uStack196 = uStack292;
    uStack192 = uStack288;
    uStack188 = uStack284;
    local_a8 = local_108;
    uStack164 = uStack260;
    uStack160 = uStack256;
    uStack156 = uStack252;
    local_78 = local_d8 | 0x300;
    local_b8 = local_118;
    uStack180 = uStack276;
    uStack176 = uStack272;
    uStack172 = uStack268;
    local_98 = local_f8[0];
    uStack148 = local_f8[1];
    uStack144 = local_f8[2];
    uStack140 = local_f8[3];
    local_88 = local_e8[0];
    uStack132 = local_e8[1];
    uStack128 = local_e8[2];
    uStack124 = local_e8[3];
    FUN_1400cc680(param_1[0x81], &local_c8);
    local_58[3] = *(undefined4 * )(param_1 + 0x83);
    local_68 = 0x3f80000000000000;
    local_60 = 0x3f800000;
    uVar10 = 0x1001a;
    if (((byte) param_1[0x53] >> 1 & 1) != 0) {
        uVar10 = 0x10008;
    }
    local_5c = 0x3f800000;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    puVar9 = (undefined *) 0x20;
    if (((byte) param_1[0x53] >> 2 & 1) != 0) {
        puVar9 = (undefined *) 0xa0;
        local_58[3] = 0;
    }
    if ((*(uint * )(param_1 + 0x52) >> 0x17 & 1) != 0) {
        uVar10 = uVar10 | 0x800000;
    }
    local_d8 = uVar2 & 0xfffffffe;
    lVar5 = lVar6;
    puVar8 = (undefined8 * ) & local_118;
    do {
        lVar7 = lVar5 + 4;
        *(undefined4 * )((longlong) local_f8 + lVar5) = *(undefined4 * )((longlong) & local_68 + lVar5);
        *(undefined4 * )((longlong) local_e8 + lVar5) = *(undefined4 * )((longlong) local_58 + lVar5);
        *puVar8 = 0;
        lVar5 = lVar7;
        puVar8 = puVar8 + 1;
    } while (lVar7 < 0x10);
    lVar5 = FUN_14018b280(0x8c0, 0);
    if (lVar5 != 0) {
        local_78 = local_d8 | 0x300;
        local_150 = (ulonglong) uVar10;
        local_c8 = local_128;
        uStack196 = uStack292;
        uStack192 = uStack288;
        uStack188 = uStack284;
        local_a8 = local_108;
        uStack164 = uStack260;
        uStack160 = uStack256;
        uStack156 = uStack252;
        local_158 = &local_c8;
        local_b8 = local_118;
        uStack180 = uStack276;
        uStack176 = uStack272;
        uStack172 = uStack268;
        local_98 = local_f8[0];
        uStack148 = local_f8[1];
        uStack144 = local_f8[2];
        uStack140 = local_f8[3];
        local_88 = local_e8[0];
        uStack132 = local_e8[1];
        uStack128 = local_e8[2];
        uStack124 = local_e8[3];
        local_168 = (undefined * )((ulonglong) local_168 & 0xffffffff00000000);
        local_160 = param_4;
        local_148 = puVar9;
        lVar6 = FUN_14015d7f0(lVar5, param_1[4], param_1, 0);
    }
    param_1[0x82] = lVar6;
    *(undefined4 * )(lVar6 + 0x2a0) = 1;
    FUN_1400d42f0(param_1[0x82], 0, 0);
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack392);
    return;
}


undefined8 FUN_1401770b0(undefined8 param_1, ulonglong param_2) {
    FUN_1401770f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1401770f0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5d650;
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if ((longlong *) param_1[0x81] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if ((longlong *) param_1[0x82] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x82] + 8))();
        param_1[0x82] = 0;
    }
    if (param_1[0x85] != 0) {
        FUN_14018b900(param_1[0x85], 0);
    }
    FUN_1400c6030(param_1);
    return;
}


void FUN_140177180(longlong *param_1, int param_2, longlong param_3, undefined8 param_4,
                   undefined8 param_5) {
    byte *pbVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (param_2 == 0x24) {
        if (param_3 != param_1[0x81]) {
            return;
        }
        (**(code * *)(*param_1 + 0x1b0))();
        lVar3 = param_1[0x82];
        uVar2 = 1;
    } else {
        if (param_2 == 0x25) {
            if (param_3 != param_1[0x81]) {
                return;
            }
            lVar3 = param_1[0x82];
        } else {
            if ((param_2 != 0x2d) || (param_3 != param_1[0x82])) {
                return;
            }
            FUN_1400d3c30(param_1, 0x31, 0, param_1, param_4, param_5);
            lVar3 = *param_1;
            uVar2 = FUN_1401774a0(param_1, *(undefined4 * )(param_1[0x82] + 0x408));
            (**(code * *)(lVar3 + 0x50))(param_1, uVar2);
            FUN_1400d42f0(param_1[0x82], 0, 0);
            lVar3 = param_1[0x81];
            pbVar1 = (byte * )(lVar3 + 0x59c);
            *pbVar1 = *pbVar1 & 0xbf;
            lVar3 = *(longlong * )(lVar3 + 0x618);
            if (lVar3 == 0) {
                return;
            }
            if ((*(byte * )(lVar3 + 0x1c) & 1) == 0) {
                return;
            }
        }
        uVar2 = 0;
    }
    FUN_1400d42f0(lVar3, uVar2, 0);
    return;
}


void FUN_140177290(longlong param_1, ulonglong param_2, int *param_3, undefined param_4) {
    char cVar1;
    ulonglong uVar2;
    longlong lVar3;

    uVar2 = param_2 & 0xffffffff;
    if (((((*(byte * )(param_1 + 0x298) & 1) == 0) && (*(int *) (param_1 + 0x2cc) <= *param_3)) &&
         (*param_3 < *(int *) (param_1 + 0x2d4))) &&
        ((*(int *) (param_1 + 0x2d0) <= param_3[1] && (param_3[1] < *(int *) (param_1 + 0x2d8))))) {
        lVar3 = *(longlong * )(param_1 + 0x410);
        if (0.0 < *(float *) (lVar3 + 0x288)) {
            if (*(longlong * )(lVar3 + 0x10) == 0) {
                cVar1 = '\x01';
            } else {
                cVar1 = FUN_1400d1a60();
            }
        } else {
            cVar1 = '\0';
        }
        FUN_1400d42f0(lVar3, param_2 & 0xffffffffffffff00 | (ulonglong)(cVar1 == '\0'), 0);
    }
    FUN_1400d2120(param_1, uVar2, param_3, param_4);
    return;
}


void FUN_140177350(longlong param_1) {
    undefined local_28[16];
    undefined local_18[16];

    if (((*(byte * )(param_1 + 0x298) & 1) == 0) && (*(longlong * )(param_1 + 0x2b0) != 0)) {
        local_18 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d8),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2d4)));
        local_28 = ZEXT816(CONCAT44((float) *(int *) (param_1 + 0x2d0),
                                    (float) (int) *(undefined8 * )(param_1 + 0x2cc)));
        FUN_1400ce790(param_1, local_28, param_1 + 0x2c4);
    }
    return;
}


void FUN_1401773e0(longlong *param_1, int param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    int iVar4;

    lVar1 = param_1[0x82];
    iVar4 = *(int *) (lVar1 + 0x488) + -1;
    if (param_2 < iVar4) {
        iVar4 = param_2;
    }
    iVar2 = -1;
    if (-1 < iVar4) {
        iVar2 = iVar4;
    }
    *(int *) (lVar1 + 0x408) = iVar2;
    *(int *) (lVar1 + 0x410) = iVar2;
    lVar1 = *param_1;
    uVar3 = FUN_1401774a0(param_1, *(undefined4 * )(param_1[0x82] + 0x408));
    // WARNING: Could not recover jumptable at 0x000140177446. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code * *)(lVar1 + 0x50))(param_1, uVar3);
    return;
}


undefined *FUN_1401774a0(longlong param_1, int param_2) {
    undefined *puVar1;
    longlong lVar2;

    lVar2 = *(longlong * )(param_1 + 0x410);
    if (((0 < *(int *) (lVar2 + 0x478)) && (-1 < param_2)) && (param_2 < *(int *) (lVar2 + 0x488))) {
        lVar2 = *(longlong * )(*(longlong * )(lVar2 + 0x480) + (longlong) param_2 * 8);
        if (*(int *) (lVar2 + 0x18) < 1) {
            lVar2 = 0;
        } else {
            lVar2 = **(longlong * *)(lVar2 + 0x10);
        }
        if (lVar2 != 0) {
            if (*(longlong * *)(lVar2 + 0xc0) != (longlong *) 0x0) {
                // WARNING: Could not recover jumptable at 0x0001401774f2. Too many branches
                // WARNING: Treating indirect jump as call
                puVar1 = (undefined * )(**(code * *)(**(longlong * *)(lVar2 + 0xc0) + 0x40))();
                return puVar1;
            }
            return &DAT_1409dc2ec;
        }
    }
    return *(undefined * *)(param_1 + 0x428);
}


void FUN_140177720(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x140177730;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177771;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_AddItem_140c582c0 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 0x11);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401777ff;
    FUN_1400569b0(lVar2, "Apollo.ComboBox");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_140177821:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14017783d:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14017783d;
        if (iVar1 == 7) goto LAB_140177821;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14017783d;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017786c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177892;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401778da;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401778ff;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177923;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177944;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177969;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401779ac;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x1401779d1;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_140177a39:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_140177a0a;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_140177a39;
        if (iVar1 != 8) goto LAB_140177a0a;
    }
    uVar14 = *puVar12;
    LAB_140177a0a:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177a1c;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x140177a2c;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140177ac0(undefined8 param_1) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(byte * )(lVar1 + 0x1b0) >> 4 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "ComboBox", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_140177b70(longlong param_1) {
    undefined8 *puVar1;
    double *pdVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    lVar5 = FUN_140177ac0();
    uVar6 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar6);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    if (((puVar8 < *(undefined8 * *)(param_1 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong * )(param_1 + 0x18) + 0x28))) {
        puVar7 = (undefined *) FUN_140056bb0(param_1, 3);
    } else {
        puVar7 = &DAT_1409d064f;
    }
    FUN_14018f2d0(local_48, puVar7);
    puVar8 = *(undefined8 * *)(param_1 + 0x10);
    uVar3 = 0xfffffffe;
    if (3 < (int) ((longlong) puVar8 - *(longlong * )(param_1 + 0x18) >> 4)) {
        puVar1 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x30);
        puVar9 = &DAT_140a12138;
        if (puVar1 < puVar8) {
            puVar9 = puVar1;
        }
        *puVar8 = *puVar9;
        *(undefined4 * )(puVar8 + 1) = *(undefined4 * )(puVar9 + 1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
    }
    iVar4 = FUN_14015fd10(*(undefined8 * )(lVar5 + 0x410), local_20, local_40, 0, uVar3);
    pdVar2 = *(double **) (param_1 + 0x10);
    if (iVar4 == -1) {
        *(undefined4 * )(pdVar2 + 1) = 0;
    } else {
        *(undefined4 * )(pdVar2 + 1) = 3;
        *pdVar2 = (double) iVar4;
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140177cc0(undefined8 param_1) {
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    uint *puVar8;
    uint local_res10[2];
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    lVar3 = FUN_140177ac0();
    uVar1 = FUN_140056d60(param_1, 2);
    iVar2 = FUN_140056d60(param_1, 3);
    local_18 = 0x3f800000;
    uStack20 = 0x3f800000;
    uStack16 = 0x3f800000;
    uStack12 = 0x3f800000;
    lVar4 = FUN_140056ab0(param_1, 4, "CColor");
    if (lVar4 != 0) {
        puVar5 = (undefined4 *) FUN_140056ab0(param_1, 4, "CColor");
        local_18 = *puVar5;
        uStack20 = puVar5[1];
        uStack16 = puVar5[2];
        uStack12 = puVar5[3];
    }
    lVar3 = *(longlong * )(lVar3 + 0x410);
    if (uVar1 < *(uint * )(lVar3 + 0x488)) {
        if ((((-1 < iVar2) && (iVar2 < *(int *) (lVar3 + 0x478))) && (-1 < (int) uVar1)) &&
            ((int) uVar1 < *(int *) (lVar3 + 0x488))) {
            lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong)(int)
            uVar1 * 8);
            if (iVar2 < *(int *) (lVar3 + 0x18)) {
                lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x10) + (longlong) iVar2 * 8);
            } else {
                lVar3 = 0;
            }
            if (lVar3 != 0) {
                uVar1 = FUN_140141f10(DAT_140c63678, &local_18);
                puVar8 = (uint * )(lVar3 + 0xa0);
                uVar7 = (ulonglong) uVar1;
                lVar3 = DAT_140c63678;
                if (puVar8 != local_res10) {
                    FUN_1401429a0(DAT_140c63678, *puVar8);
                    lVar3 = DAT_140c63678;
                    *puVar8 = uVar1;
                    if (uVar7 < *(ulonglong * )(lVar3 + 0x30)) {
                        iVar2 = *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar3 + 0x28));
                        if (iVar2 - 1U < 0xfffffffe) {
                            *(int *) ((ulonglong) uVar1 * 0x20 + 0x10 + *(longlong * )(lVar3 + 0x28)) = iVar2 + 1;
                            FUN_1401429a0(lVar3, uVar7);
                            return 1;
                        }
                    }
                }
                FUN_1401429a0(lVar3, uVar7);
            }
        }
        uVar6 = 1;
    } else {
        uVar6 = 0;
    }
    return uVar6;
}


undefined8 FUN_140177e50(longlong param_1) {
    uint uVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined *puVar6;
    longlong lVar7;
    uint uVar8;
    undefined local_28[8];
    longlong local_20;

    lVar4 = FUN_140177ac0();
    uVar5 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar5);
    uVar1 = *(uint * )(*(longlong * )(lVar4 + 0x410) + 0x488);
    uVar8 = 0;
    if (uVar1 != 0) {
        do {
            lVar7 = *(longlong * )(lVar4 + 0x410);
            if (((0 < *(int *) (lVar7 + 0x478)) && (-1 < (int) uVar8)) &&
                ((int) uVar8 < *(int *) (lVar7 + 0x488))) {
                lVar7 = *(longlong * )(*(longlong * )(lVar7 + 0x480) + (longlong)(int)
                uVar8 * 8);
                if (*(int *) (lVar7 + 0x18) < 1) {
                    lVar7 = 0;
                } else {
                    lVar7 = **(longlong * *)(lVar7 + 0x10);
                }
                if (lVar7 != 0) {
                    if (*(longlong * *)(lVar7 + 0xc0) == (longlong *) 0x0) {
                        puVar6 = &DAT_1409dc2ec;
                    } else {
                        puVar6 = (undefined * )(**(code * *)(**(longlong * *)(lVar7 + 0xc0) + 0x40))();
                    }
                    iVar3 = FUN_14018e2c0(local_20, puVar6);
                    if (iVar3 == 0) {
                        puVar2 = *(undefined4 * *)(param_1 + 0x10);
                        *puVar2 = 1;
                        puVar2[2] = 1;
                        goto LAB_140177f31;
                    }
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
    }
    puVar2 = *(undefined4 * *)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_140177f31:
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140177f80(longlong param_1) {
    uint uVar1;
    undefined8 *puVar2;
    double *pdVar3;
    bool bVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    uint uVar10;

    plVar6 = (longlong *) FUN_140177ac0();
    (**(code * *)(*plVar6 + 0x1b0))(plVar6);
    uVar10 = 0;
    uVar1 = *(uint * )(plVar6[0x82] + 0x488);
    if (uVar1 != 0) {
        do {
            lVar9 = plVar6[0x82];
            if (((0 < *(int *) (lVar9 + 0x478)) && (-1 < (int) uVar10)) &&
                ((int) uVar10 < *(int *) (lVar9 + 0x488))) {
                lVar9 = *(longlong * )(*(longlong * )(lVar9 + 0x480) + (longlong)(int)
                uVar10 * 8);
                if (*(int *) (lVar9 + 0x18) < 1) {
                    lVar9 = 0;
                } else {
                    lVar9 = **(longlong * *)(lVar9 + 0x10);
                }
                if (lVar9 != 0) {
                    puVar7 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0),
                                          *(undefined4 * )(lVar9 + 0xb0));
                    puVar2 = *(undefined8 * *)(param_1 + 0x10);
                    *puVar2 = *puVar7;
                    *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar7 + 1);
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    puVar2 = *(undefined8 * *)(param_1 + 0x10);
                    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
                    puVar7 = &DAT_140a12138;
                    if (puVar8 < puVar2) {
                        puVar7 = puVar8;
                    }
                    if (((puVar7 == &DAT_140a12138) || (puVar2 == (undefined8 * ) & DAT_140a12148)) ||
                        ((*(int *) (puVar7 + 1) != *(int *) (puVar2 + -1) ||
                          (iVar5 = FUN_14005f0d0(param_1), iVar5 == 0)))) {
                        bVar4 = false;
                    } else {
                        bVar4 = true;
                    }
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                    pdVar3 = *(double **) (param_1 + 0x10);
                    if (bVar4) {
                        *(undefined4 * )(pdVar3 + 1) = 3;
                        *pdVar3 = (double) uVar10;
                        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                        return 1;
                    }
                }
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < uVar1);
    }
    return 0;
}


undefined8 FUN_1401780e0(longlong param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = FUN_140177ac0();
    iVar2 = FUN_140056d60(param_1, 2);
    lVar3 = *(longlong * )(lVar3 + 0x410);
    if (((0 < *(int *) (lVar3 + 0x478)) && (-1 < iVar2)) && (iVar2 < *(int *) (lVar3 + 0x488))) {
        lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar2 * 8);
        if (*(int *) (lVar3 + 0x18) < 1) {
            lVar3 = 0;
        } else {
            lVar3 = **(longlong * *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0),
                                  *(undefined4 * )(lVar3 + 0xb0));
            puVar1 = *(undefined8 * *)(param_1 + 0x10);
            *puVar1 = *puVar4;
            *(undefined4 * )(puVar1 + 1) = *(undefined4 * )(puVar4 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140178190(longlong param_1) {
    int iVar1;
    longlong lVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    int iVar9;
    undefined8 *puVar10;
    int local_res10[2];
    int *piVar11;

    plVar6 = (longlong *) FUN_140177ac0();
    iVar4 = FUN_140056d60(param_1, 2);
    puVar10 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    puVar7 = &DAT_140a12138;
    if (puVar10 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar7 = puVar10;
    }
    if ((*(int *) (puVar7 + 1) == 0) || ((*(int *) (puVar7 + 1) == 1 && (*(int *) puVar7 == 0)))) {
        bVar3 = false;
    } else {
        bVar3 = true;
    }
    iVar1 = *(int *) (plVar6[0x82] + 0x408);
    (**(code * *)(*plVar6 + 0x1b0))(plVar6);
    piVar11 = local_res10;
    local_res10[0] = 1;
    FUN_1400d4070(plVar6, 0x30, plVar6, &DAT_140a3a4d0, iVar4, iVar1, piVar11);
    if (local_res10[0] != 0) {
        lVar2 = plVar6[0x82];
        iVar9 = *(int *) (lVar2 + 0x488) + -1;
        if (iVar4 < iVar9) {
            iVar9 = iVar4;
        }
        iVar5 = -1;
        if (-1 < iVar9) {
            iVar5 = iVar9;
        }
        *(int *) (lVar2 + 0x408) = iVar5;
        *(int *) (lVar2 + 0x410) = iVar5;
        lVar2 = *plVar6;
        uVar8 = FUN_1401774a0(plVar6, *(undefined4 * )(plVar6[0x82] + 0x408));
        (**(code * *)(lVar2 + 0x50))(plVar6, uVar8);
        if ((bVar3) && (iVar4 != iVar1)) {
            FUN_1400d4070(plVar6, 0x31, plVar6, &DAT_1409de0d4, iVar4, iVar1, piVar11);
        }
    }
    return 0;
}


undefined4 FUN_1401782d0(longlong param_1) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    uint *puVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined *puVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    int iVar12;
    ulonglong uVar13;
    undefined4 uVar14;
    int local_res10[2];
    int local_res18;
    int *piVar15;
    undefined local_58[8];
    longlong local_50;

    plVar6 = (longlong *) FUN_140177ac0();
    uVar7 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_58, uVar7);
    puVar11 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    puVar8 = &DAT_140a12138;
    if (puVar11 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar8 = puVar11;
    }
    uVar14 = 0;
    if ((*(int *) (puVar8 + 1) == 0) || ((*(int *) (puVar8 + 1) == 1 && (*(int *) puVar8 == 0)))) {
        local_res18 = 0;
    } else {
        local_res18 = 1;
    }
    iVar1 = *(int *) (plVar6[0x82] + 0x408);
    (**(code * *)(*plVar6 + 0x1b0))(plVar6);
    uVar2 = *(uint * )(plVar6[0x82] + 0x488);
    uVar13 = 0;
    if (uVar2 != 0) {
        do {
            lVar3 = plVar6[0x82];
            iVar12 = (int) uVar13;
            if (((0 < *(int *) (lVar3 + 0x478)) && (-1 < iVar12)) && (iVar12 < *(int *) (lVar3 + 0x488))) {
                lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar12 * 8);
                uVar10 = 0;
                if (0 < *(int *) (lVar3 + 0x18)) {
                    uVar10 = **(ulonglong * *)(lVar3 + 0x10);
                }
                if (uVar10 != 0) {
                    if (*(longlong * *)(uVar10 + 0xc0) == (longlong *) 0x0) {
                        puVar9 = &DAT_1409dc2ec;
                    } else {
                        puVar9 = (undefined * )(**(code * *)(**(longlong * *)(uVar10 + 0xc0) + 0x40))();
                    }
                    iVar5 = FUN_14018e2c0(local_50, puVar9);
                    if (iVar5 == 0) {
                        piVar15 = local_res10;
                        local_res10[0] = 1;
                        FUN_1400d4070(plVar6, 0x30, plVar6, &DAT_140a3a4d8, iVar12, iVar1, piVar15);
                        if (local_res10[0] != 0) {
                            FUN_1401773e0(plVar6, uVar13);
                            if ((local_res18 != 0) && (iVar12 != iVar1)) {
                                FUN_1400d4070(plVar6, 0x31, plVar6, &DAT_1409ddffc, iVar12, iVar1, piVar15);
                            }
                            puVar4 = *(uint * *)(param_1 + 0x10);
                            puVar4[2] = 1;
                            *puVar4 = (uint)(iVar12 != 0);
                            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                            uVar14 = 1;
                            break;
                        }
                    }
                }
            }
            uVar13 = (ulonglong)(iVar12 + 1U);
        } while (iVar12 + 1U < uVar2);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50, 0);
    }
    return uVar14;
}


undefined8 FUN_1401784c0(longlong param_1) {
    uint uVar1;
    uint uVar2;
    bool bVar3;
    bool bVar4;
    int iVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    uint uVar11;
    int local_res10[2];
    int *piVar12;

    plVar6 = (longlong *) FUN_140177ac0();
    puVar9 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x20);
    puVar7 = &DAT_140a12138;
    if (puVar9 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar7 = puVar9;
    }
    if ((*(int *) (puVar7 + 1) == 0) || ((*(int *) (puVar7 + 1) == 1 && (*(int *) puVar7 == 0)))) {
        bVar4 = false;
    } else {
        bVar4 = true;
    }
    uVar1 = *(uint * )(plVar6[0x82] + 0x408);
    (**(code * *)(*plVar6 + 0x1b0))(plVar6);
    uVar11 = 0;
    uVar2 = *(uint * )(plVar6[0x82] + 0x488);
    if (uVar2 != 0) {
        do {
            lVar10 = plVar6[0x82];
            if (((0 < *(int *) (lVar10 + 0x478)) && (-1 < (int) uVar11)) &&
                ((int) uVar11 < *(int *) (lVar10 + 0x488))) {
                lVar10 = *(longlong * )(*(longlong * )(lVar10 + 0x480) + (longlong)(int)
                uVar11 * 8);
                if (*(int *) (lVar10 + 0x18) < 1) {
                    lVar10 = 0;
                } else {
                    lVar10 = **(longlong * *)(lVar10 + 0x10);
                }
                if (lVar10 != 0) {
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0),
                                          *(undefined4 * )(lVar10 + 0xb0));
                    puVar7 = *(undefined8 * *)(param_1 + 0x10);
                    *puVar7 = *puVar9;
                    *(undefined4 * )(puVar7 + 1) = *(undefined4 * )(puVar9 + 1);
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
                    puVar7 = *(undefined8 * *)(param_1 + 0x10);
                    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
                    puVar9 = &DAT_140a12138;
                    if (puVar8 < puVar7) {
                        puVar9 = puVar8;
                    }
                    if (((puVar9 == &DAT_140a12138) || (puVar7 == (undefined8 * ) & DAT_140a12148)) ||
                        ((*(int *) (puVar9 + 1) != *(int *) (puVar7 + -1) ||
                          (iVar5 = FUN_14005f0d0(param_1), iVar5 == 0)))) {
                        bVar3 = false;
                    } else {
                        bVar3 = true;
                    }
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -0x10;
                    if (bVar3) {
                        piVar12 = local_res10;
                        local_res10[0] = 1;
                        FUN_1400d4070(plVar6, 0x30, plVar6, &DAT_140a3a4c8, uVar11, uVar1, piVar12);
                        if (local_res10[0] != 0) {
                            FUN_1401773e0(plVar6, uVar11);
                            if (!bVar4) {
                                return 0;
                            }
                            if (uVar11 == uVar1) {
                                return 0;
                            }
                            FUN_1400d4070(plVar6, 0x31, plVar6, &DAT_1409de09c, uVar11, uVar1, piVar12);
                            return 0;
                        }
                    }
                }
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar2);
    }
    return 0;
}


undefined8 FUN_1401786b0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    bool bVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    int iVar8;
    undefined8 *puVar9;

    plVar5 = (longlong *) FUN_140177ac0();
    puVar9 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar9 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar6 = puVar9;
    }
    if ((*(int *) (puVar6 + 1) == 0) || ((*(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
        bVar4 = false;
    } else {
        bVar4 = true;
    }
    lVar2 = plVar5[0x82];
    iVar1 = *(int *) (lVar2 + 0x408);
    iVar8 = *(int *) (lVar2 + 0x488) + -1;
    if (-1 < iVar8) {
        iVar8 = -1;
    }
    iVar3 = -1;
    if (-1 < iVar8) {
        iVar3 = iVar8;
    }
    *(int *) (lVar2 + 0x408) = iVar3;
    *(int *) (lVar2 + 0x410) = iVar3;
    lVar2 = *plVar5;
    uVar7 = FUN_1401774a0(plVar5, *(undefined4 * )(plVar5[0x82] + 0x408));
    (**(code * *)(lVar2 + 0x50))(plVar5, uVar7);
    if ((bVar4) && (iVar1 != *(int *) (plVar5[0x82] + 0x408))) {
        FUN_1400d4070(plVar5, 0x31, plVar5, &DAT_1409de06c, *(int *) (plVar5[0x82] + 0x408), iVar1);
    }
    return 0;
}


undefined8 FUN_1401787a0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140177ac0();
    iVar1 = *(int *) (*(longlong * )(lVar3 + 0x410) + 0x408);
    if (iVar1 != -1) {
        pdVar2 = *(double **) (param_1 + 0x10);
        *(undefined4 * )(pdVar2 + 1) = 3;
        *pdVar2 = (double) iVar1;
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_1401787f0(longlong param_1) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = FUN_140177ac0();
    lVar3 = *(longlong * )(lVar3 + 0x410);
    iVar1 = *(int *) (lVar3 + 0x408);
    if ((((iVar1 != -1) && (0 < *(int *) (lVar3 + 0x478))) && (-1 < iVar1)) &&
        (iVar1 < *(int *) (lVar3 + 0x488))) {
        lVar3 = *(longlong * )(*(longlong * )(lVar3 + 0x480) + (longlong) iVar1 * 8);
        if (*(int *) (lVar3 + 0x18) < 1) {
            lVar3 = 0;
        } else {
            lVar3 = **(longlong * *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 * )(*(longlong * )(param_1 + 0x20) + 0xa0),
                                  *(undefined4 * )(lVar3 + 0xb0));
            puVar2 = *(undefined8 * *)(param_1 + 0x10);
            *puVar2 = *puVar4;
            *(undefined4 * )(puVar2 + 1) = *(undefined4 * )(puVar4 + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140178890(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    lVar2 = FUN_140177ac0();
    lVar2 = *(longlong * )(lVar2 + 0x410);
    iVar1 = *(int *) (lVar2 + 0x408);
    if ((((iVar1 != -1) && (0 < *(int *) (lVar2 + 0x478))) && (-1 < iVar1)) &&
        (iVar1 < *(int *) (lVar2 + 0x488))) {
        lVar2 = *(longlong * )(*(longlong * )(lVar2 + 0x480) + (longlong) iVar1 * 8);
        if (*(int *) (lVar2 + 0x18) < 1) {
            lVar2 = 0;
        } else {
            lVar2 = **(longlong * *)(lVar2 + 0x10);
        }
        if (lVar2 != 0) {
            if (*(longlong * *)(lVar2 + 0xc0) == (longlong *) 0x0) {
                puVar3 = &DAT_1409dc2ec;
            } else {
                puVar3 = (undefined * )(**(code * *)(**(longlong * *)(lVar2 + 0xc0) + 0x40))();
            }
            lVar2 = FUN_14018f0e0(local_28, puVar3);
            if (*(longlong * )(lVar2 + 8) == 0) {
                *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 8) = 0;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            } else {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong * )(lVar2 + 8) + lVar4) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140178980(longlong param_1) {
    int iVar1;
    int iVar2;
    bool bVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    lVar4 = FUN_140177ac0();
    puVar6 = (undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10);
    puVar5 = &DAT_140a12138;
    if (puVar6 < *(undefined8 * *)(param_1 + 0x10)) {
        puVar5 = puVar6;
    }
    if ((*(int *) (puVar5 + 1) == 0) || ((*(int *) (puVar5 + 1) == 1 && (*(int *) puVar5 == 0)))) {
        bVar3 = false;
    } else {
        bVar3 = true;
    }
    iVar1 = *(int *) (*(longlong * )(lVar4 + 0x410) + 0x408);
    FUN_1401601d0();
    (**(code * *)(**(longlong * *)(lVar4 + 0x400) + 0x50))(*(longlong * *)(lVar4 + 0x400), &DAT_1409ddfd4);
    if ((bVar3) && (iVar2 = *(int *) (*(longlong * )(lVar4 + 0x410) + 0x408), iVar1 != iVar2)) {
        FUN_1400d4070(lVar4, 0x31, lVar4, &DAT_1409de15c, iVar2, iVar1);
    }
    return 0;
}


void FUN_140178a40(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_140177ac0();
    FUN_1400d62a0(param_1, *(undefined8 * )(lVar1 + 0x400));
    return;
}


void FUN_140178a70(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_140177ac0();
    FUN_1400d62a0(param_1, *(undefined8 * )(lVar1 + 0x408));
    return;
}


void FUN_140178aa0(undefined8 param_1) {
    longlong lVar1;

    lVar1 = FUN_140177ac0();
    FUN_1400d62a0(param_1, *(undefined8 * )(lVar1 + 0x410));
    return;
}


undefined8 FUN_140178ad0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140177ac0();
    pdVar2 = *(double **) (param_1 + 0x10);
    iVar1 = *(int *) (*(longlong * )(lVar3 + 0x410) + 0x488);
    *(undefined4 * )(pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *FUN_140178b10(undefined8 *param_1, longlong param_2) {
    undefined8 *puVar1;
    longlong lVar2;
    char cVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *local_res8;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    lVar7 = 0;
    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b5d890;
    FUN_1401095e0(param_1 + 0x80);
    FUN_1401095e0(param_1 + 0x86);
    *(undefined4 * )(param_1 + 0x8c) = 0;
    *(undefined * )((longlong) param_1 + 0x464) = 0;
    *(undefined4 * )(param_1 + 0x8d) = 100;
    *(undefined4 * )(param_1 + 0x8f) = 0;
    *(undefined * )((longlong) param_1 + 0x47c) = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x36] = param_1[0x36] | 0x1000;
    if (param_2 != 0) {
        if ((param_1[0x80] == 0) ||
            (cVar3 = FUN_14002c740(param_1 + 0x82, L"CRB_ChatLogSprites:sprChatTabSelected"),
                    cVar3 == '\0')) {
            lVar5 = FUN_140108e80(param_2 + 0xf0, L"CRB_ChatLogSprites:sprChatTabSelected");
            lVar6 = lVar7;
            if (lVar5 != 0) {
                do {
                    lVar2 = lVar6 + 1;
                    lVar6 = lVar6 + 1;
                } while (L"CRB_ChatLogSprites:sprChatTabSelected"[lVar2] != L'\0');
                FUN_14001c480(param_1 + 0x82, L"CRB_ChatLogSprites:sprChatTabSelected",
                              L"CRB_ChatLogSprites:sprChatTabSelected" + lVar6);
            }
            FUN_1401097f0(param_1 + 0x80, lVar5);
        }
        if ((param_2 != 0) &&
            ((param_1[0x86] == 0 ||
              (cVar3 = FUN_14002c740(param_1 + 0x88, L"CRB_ChatLogSprites:sprChatTabUnselected"),
                      cVar3 == '\0')))) {
            lVar6 = FUN_140108e80(param_2 + 0xf0, L"CRB_ChatLogSprites:sprChatTabUnselected");
            if (lVar6 != 0) {
                do {
                    lVar5 = lVar7 + 1;
                    lVar7 = lVar7 + 1;
                } while (L"CRB_ChatLogSprites:sprChatTabUnselected"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 0x88, L"CRB_ChatLogSprites:sprChatTabUnselected",
                              L"CRB_ChatLogSprites:sprChatTabUnselected" + lVar7);
            }
            FUN_1401097f0(param_1 + 0x86, lVar6);
        }
    }
    local_38 = _DAT_140c777d0;
    uStack52 = uRam0000000140c777d4;
    uStack48 = uRam0000000140c777d8;
    uStack44 = uRam0000000140c777dc;
    FUN_1401429a0(DAT_140c63678, *(undefined4 * )((longlong) param_1 + 0x2c4));
    uVar4 = FUN_140141f10(DAT_140c63678, &local_38);
    *(undefined4 * )((longlong) param_1 + 0x2c4) = uVar4;
    puVar1 = (undefined8 *) param_1[0x98];
    local_res8 = param_1;
    if (puVar1 == (undefined8 *) param_1[0x99]) {
        FUN_1400b9430(param_1 + 0x96, puVar1, &local_res8);
        FUN_1401795d0(param_1);
        return param_1;
    }
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = param_1;
    }
    param_1[0x98] = param_1[0x98] + 8;
    FUN_1401795d0(param_1);
    return param_1;
}


undefined8 FUN_140178d90(undefined8 param_1, ulonglong param_2) {
    FUN_140178dd0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140178dd0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5d890;
    if (param_1[0x9b] != 0) {
        FUN_14018b900(param_1[0x9b], 0);
    }
    if (param_1[0x97] != 0) {
        FUN_14018b900(param_1[0x97], 0);
    }
    if ((longlong *) param_1[0x86] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x86] + 8))();
        param_1[0x86] = 0;
    }
    if (param_1[0x89] != 0) {
        FUN_14018b900(param_1[0x89], 0);
    }
    if ((longlong *) param_1[0x80] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83], 0);
    }
    FUN_1400c6030(param_1);
    return;
}


int FUN_140179350(longlong param_1) {
    int iVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    iVar1 = 0;
    iVar3 = (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3);
    if (0 < iVar3) {
        plVar2 = *(longlong * *)(param_1 + 0x4b8);
        do {
            if (*plVar2 == param_1) {
                return iVar1;
            }
            iVar1 = iVar1 + 1;
            plVar2 = plVar2 + 1;
        } while (iVar1 < iVar3);
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_48);
    local_28 = local_48;
    local_res8 = 0x141d35440;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8a154, 0xd, &local_res8, &local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return -1;
}


ulonglong FUN_140179450(longlong param_1, int *param_2) {
    longlong lVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int local_38[2];
    int local_30;

    FUN_1400cb3d0(param_1, local_38);
    iVar7 = DAT_140c77764;
    iVar11 = DAT_140c77760;
    local_30 = local_30 - local_38[0];
    iVar2 = DAT_140c77764;
    if (((*(byte * )(param_1 + 0x290) >> 3 & 1) != 0) &&
        (lVar6 = *(longlong * )(param_1 + 0x30), lVar6 != 0)) {
        iVar2 = FUN_14010cf80(lVar6);
        iVar3 = FUN_14010d0a0(lVar6);
        local_30 = local_30 - iVar3;
        iVar3 = FUN_14010d1c0(lVar6);
        iVar11 = iVar11 + iVar2;
        iVar2 = iVar3 + iVar7;
    }
    iVar3 = *param_2;
    if ((((iVar11 <= iVar3) && (iVar3 < local_30)) && (iVar11 = param_2[1], iVar7 <= iVar11)) &&
        (iVar11 < iVar2)) {
        uVar5 = (ulonglong) * (int *) (param_1 + 0x478);
        iVar7 = (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3);
        if (*(int *) (param_1 + 0x478) < iVar7) {
            lVar6 = uVar5 << 4;
            do {
                iVar2 = DAT_140c784dc;
                iVar8 = DAT_140c784d0;
                iVar10 = DAT_140c784d4;
                iVar9 = DAT_140c784d8;
                if ((int) uVar5 <=
                    (int) (*(longlong * )(param_1 + 0x4e0) - *(longlong * )(param_1 + 0x4d8) >> 4)) {
                    lVar1 = *(longlong * )(param_1 + 0x4d8);
                    iVar2 = *(int *) (lVar6 + 0xc + lVar1);
                    iVar8 = *(int *) (lVar6 + lVar1);
                    iVar10 = *(int *) (lVar6 + 4 + lVar1);
                    iVar9 = *(int *) (lVar6 + 8 + lVar1);
                }
                if (((iVar8 <= iVar3) && (iVar3 < iVar9)) && ((iVar10 <= iVar11 && (iVar11 < iVar2)))) {
                    return uVar5 & 0xffffffff;
                }
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
                lVar6 = lVar6 + 0x10;
            } while ((int) uVar4 < iVar7);
        }
        return 0xffffffff;
    }
    return 0xffffffff;
}


void FUN_1401795d0(longlong param_1) {
    int iVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;
    int *piVar7;
    int iVar8;
    longlong lVar9;
    int *piVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    float fVar16;
    int local_res18;
    int local_res20;
    int local_b8;
    int local_a8;
    int local_98;
    undefined4 local_94;
    int local_90;
    undefined4 local_8c;
    undefined local_88[24];
    int *local_70;
    int *local_68;
    int *local_60;

    FUN_14015c920(param_1 + 0x4d0);
    FUN_1400cb3d0(param_1, &local_98);
    iVar1 = DAT_140c77764;
    iVar3 = DAT_140c77764;
    if (((*(byte * )(param_1 + 0x290) >> 3 & 1) != 0) &&
        (lVar6 = *(longlong * )(param_1 + 0x30), lVar6 != 0)) {
        FUN_14010cf80(lVar6);
        FUN_14010d0a0(lVar6);
        iVar3 = FUN_14010d1c0(lVar6);
        iVar3 = iVar3 + iVar1;
    }
    FUN_1400cb3d0(param_1, &local_98);
    iVar11 = DAT_140c77760;
    if (((*(byte * )(param_1 + 0x290) >> 3 & 1) != 0) &&
        (lVar6 = *(longlong * )(param_1 + 0x30), lVar6 != 0)) {
        FUN_14010cf80(lVar6);
        FUN_14010d1c0(lVar6);
    }
    local_a8 = iVar11;
    FUN_1400cb3d0(param_1);
    iVar13 = local_90 - local_98;
    if (((*(byte * )(param_1 + 0x290) >> 3 & 1) != 0) &&
        (lVar6 = *(longlong * )(param_1 + 0x30), lVar6 != 0)) {
        FUN_14010d0a0(lVar6);
        FUN_14010d1c0(lVar6);
    }
    piVar10 = (int *) 0x0;
    iVar12 = (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3);
    lVar6 = (longlong) iVar12;
    iVar8 = 0;
    iVar14 = 0;
    iVar13 = iVar13 - iVar11;
    lVar9 = 0;
    local_b8 = 0;
    local_res20 = -1;
    local_70 = (int *) 0x0;
    local_68 = (int *) 0x0;
    local_60 = (int *) 0x0;
    iVar15 = 0;
    if (0 < iVar12) {
        iVar8 = 0;
        fVar16 = 0.0;
        do {
            lVar4 = *(longlong * )(*(longlong * )(param_1 + 0x4b8) + lVar9 * 8);
            iVar15 = *(int *) (lVar4 + 0x468);
            iVar8 = iVar8 + iVar15;
            piVar7 = local_68;
            if ((fVar16 < *(float *) (lVar4 + 0x288)) &&
                ((*(longlong * )(lVar4 + 0x10) == 0 || (cVar2 = FUN_1400d1a60(), cVar2 != '\0')))) {
                local_res20 = iVar14;
                local_b8 = iVar15;
            }
            if (piVar7 == piVar10) {
                FUN_14017b140();
                piVar10 = local_60;
            } else {
                if (piVar7 != (int *) 0x0) {
                    *piVar7 = iVar15;
                }
                local_68 = piVar7 + 1;
            }
            lVar9 = lVar9 + 1;
            iVar14 = iVar14 + 1;
            iVar15 = local_b8;
        } while (lVar9 < lVar6);
    }
    if (iVar13 < iVar8) {
        if (iVar12 < 2) {
            *local_70 = iVar13;
        } else {
            iVar8 = *(int *) (param_1 + 0x488) + *(int *) (param_1 + 0x480);
            if (iVar13 < iVar8 * iVar12) {
                lVar9 = lVar6;
                piVar10 = local_70;
                if (0 < lVar6) {
                    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
                        *piVar10 = iVar13 / iVar12;
                        piVar10 = piVar10 + 1;
                    }
                }
                local_70[local_res20] = local_70[local_res20] + (iVar13 - (iVar13 / iVar12) * iVar12);
            } else if (iVar13 < (iVar12 + -1) * iVar8 + iVar15) {
                lVar9 = lVar6;
                piVar10 = local_70;
                if (0 < lVar6) {
                    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
                        *piVar10 = iVar8;
                        piVar10 = piVar10 + 1;
                    }
                }
                local_70[local_res20] = local_70[local_res20] + (iVar13 - iVar8 * iVar12);
            } else {
                lVar9 = lVar6;
                piVar10 = local_70;
                if (0 < lVar6) {
                    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
                        *piVar10 = (iVar13 - iVar15) / (iVar12 + -1);
                        piVar10 = piVar10 + 1;
                    }
                }
                local_70[local_res20] = iVar15;
            }
        }
    }
    local_res18 = 0;
    lVar9 = 0;
    if (0 < lVar6) {
        do {
            if (local_res18 < *(int *) (param_1 + 0x478)) {
                puVar5 = *(undefined4 * *)(param_1 + 0x4e0);
                if (puVar5 == *(undefined4 * *)(param_1 + 0x4e8)) {
                    FUN_14015c990();
                } else {
                    if (puVar5 != (undefined4 *) 0x0) {
                        *puVar5 = DAT_140c784d0;
                        puVar5[1] = DAT_140c784d4;
                        puVar5[2] = DAT_140c784d8;
                        puVar5[3] = DAT_140c784dc;
                    }
                    *(longlong * )(param_1 + 0x4e0) = *(longlong * )(param_1 + 0x4e0) + 0x10;
                }
            } else if ((lVar9 == 0) &&
                       ((*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) &
                         0xfffffffffffffff8U) == 8)) {
                iVar13 = *local_70;
                piVar10 = *(int **) (param_1 + 0x4e0);
                if (piVar10 == *(int **) (param_1 + 0x4e8)) {
                    FUN_14015c990();
                    iVar11 = local_a8;
                } else {
                    if (piVar10 != (int *) 0x0) {
                        *piVar10 = iVar11;
                        piVar10[1] = iVar1;
                        piVar10[2] = iVar13 + iVar11;
                        piVar10[3] = iVar3;
                    }
                    *(longlong * )(param_1 + 0x4e0) = *(longlong * )(param_1 + 0x4e0) + 0x10;
                }
            } else {
                iVar13 = local_70[lVar9];
                if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
                    puVar5 = (undefined4 *) FUN_1400cb0e0(param_1, local_88);
                    *(undefined4 * )(param_1 + 0x18c) = *puVar5;
                    *(undefined4 * )(param_1 + 400) = puVar5[1];
                    *(undefined4 * )(param_1 + 0x194) = puVar5[2];
                    *(undefined4 * )(param_1 + 0x198) = puVar5[3];
                    *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
                    lVar4 = param_1;
                    do {
                        if (*(int *) (lVar4 + 0x188) == 0) break;
                        *(undefined4 * )(lVar4 + 0x188) = 0;
                        lVar4 = *(longlong * )(lVar4 + 0x10);
                    } while (lVar4 != 0);
                }
                local_94 = *(undefined4 * )(param_1 + 400);
                local_90 = *(int *) (param_1 + 0x194);
                local_98 = *(int *) (param_1 + 0x18c);
                local_8c = *(undefined4 * )(param_1 + 0x198);
                iVar15 = local_90 - local_98;
                if (((*(byte * )(param_1 + 0x290) >> 3 & 1) != 0) && (*(longlong * )(param_1 + 0x30) != 0)) {
                    FUN_14010d0a0(*(longlong * )(param_1 + 0x30));
                    FUN_14010d1c0();
                }
                piVar10 = *(int **) (param_1 + 0x4e0);
                local_a8 = iVar13 + iVar11;
                if (iVar15 < iVar13 + iVar11) {
                    local_a8 = iVar15;
                }
                if (piVar10 == *(int **) (param_1 + 0x4e8)) {
                    FUN_14015c990();
                    iVar11 = local_a8;
                } else {
                    if (piVar10 != (int *) 0x0) {
                        *piVar10 = iVar11;
                        piVar10[1] = iVar1;
                        piVar10[2] = local_a8;
                        piVar10[3] = iVar3;
                    }
                    *(longlong * )(param_1 + 0x4e0) = *(longlong * )(param_1 + 0x4e0) + 0x10;
                    iVar11 = local_a8;
                }
            }
            local_res18 = local_res18 + 1;
            lVar9 = lVar9 + 1;
        } while (lVar9 < lVar6);
    }
    if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
        puVar5 = (undefined4 *) FUN_1400cb0e0();
        *(undefined4 * )(param_1 + 0x18c) = *puVar5;
        *(undefined4 * )(param_1 + 400) = puVar5[1];
        *(undefined4 * )(param_1 + 0x194) = puVar5[2];
        *(undefined4 * )(param_1 + 0x198) = puVar5[3];
        *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
        lVar6 = param_1;
        do {
            if (*(int *) (lVar6 + 0x188) == 0) break;
            *(undefined4 * )(lVar6 + 0x188) = 0;
            lVar6 = *(longlong * )(lVar6 + 0x10);
        } while (lVar6 != 0);
    }
    *(undefined4 * )(param_1 + 0x490) = *(undefined4 * )(param_1 + 0x18c);
    *(undefined4 * )(param_1 + 0x494) = *(undefined4 * )(param_1 + 400);
    *(undefined4 * )(param_1 + 0x498) = *(undefined4 * )(param_1 + 0x194);
    *(undefined4 * )(param_1 + 0x49c) = *(undefined4 * )(param_1 + 0x198);
    if (local_70 != (int *) 0x0) {
        FUN_14018b900(local_70, 0);
    }
    return;
}


undefined8 FUN_140179b80(longlong param_1, int param_2, undefined8 param_3, undefined param_4) {
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;

    if (param_2 != 0) {
        return 1;
    }
    iVar1 = FUN_140179450(param_1, param_3);
    if (-1 < iVar1) {
        lVar3 = (longlong) iVar1;
        if (*(longlong * )(*(longlong * )(param_1 + 0x4b8) + lVar3 * 8) != param_1) {
            FUN_1400d42f0(param_1, 0, 1);
            FUN_1400d42f0(*(undefined8 * )(*(longlong * )(param_1 + 0x4b8) + lVar3 * 8), 1);
            FUN_1400cc680(*(undefined8 * )(*(longlong * )(param_1 + 0x4b8) + lVar3 * 8), param_1 + 0x40);
            FUN_1401795d0(*(undefined8 * )(*(longlong * )(param_1 + 0x4b8) + lVar3 * 8));
        }
        lVar3 = *(longlong * )(*(longlong * )(param_1 + 0x4b8) + lVar3 * 8);
        if (*(char *) (lVar3 + 0x464) != '\0') {
            FUN_1400d2120(lVar3, 0, param_3, param_4);
            return 0;
        }
        *(undefined * )(lVar3 + 0x47c) = 1;
        return 0;
    }
    uVar2 = FUN_1400d2120(param_1, 0, param_3, param_4);
    return uVar2;
}


void FUN_14017a180(longlong param_1) {
    undefined4 uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 local_10;
    undefined4 uStack12;

    uVar1 = DAT_140c636a8;
    if ((DAT_140c63690 != 0) && (lVar3 = *(longlong * )(param_1 + 0x260), lVar3 != 0)) {
        *(undefined * )(lVar3 + 0x14) = 0;
        *(undefined4 * )(lVar3 + 8) = uVar1;
        *(undefined4 * )(lVar3 + 0x10) = *(undefined4 * )(lVar3 + 0x20);
        *(undefined4 * )(lVar3 + 0x18) = *(undefined4 * )(lVar3 + 0x20);
        *(undefined4 * )(lVar3 + 0x1c) = 0;
        lVar3 = *(longlong * )(param_1 + 0x260);
        *(undefined4 * )(lVar3 + 0x38) = uVar1;
        *(undefined * )(lVar3 + 0x44) = 0;
        *(undefined4 * )(lVar3 + 0x40) = *(undefined4 * )(lVar3 + 0x2c);
        *(undefined4 * )(lVar3 + 0x48) = *(undefined4 * )(lVar3 + 0x2c);
        *(undefined4 * )(lVar3 + 0x4c) = 0;
    }
    if ((*(byte * )(param_1 + 0x1d) & 0x80) == 0) {
        puVar2 = (undefined4 *) FUN_1400cb0e0(param_1, &local_18, param_1 + 0x40);
        *(undefined4 * )(param_1 + 0x18c) = *puVar2;
        *(undefined4 * )(param_1 + 400) = puVar2[1];
        *(undefined4 * )(param_1 + 0x194) = puVar2[2];
        *(undefined4 * )(param_1 + 0x198) = puVar2[3];
        *(byte * )(param_1 + 0x1d) = *(byte * )(param_1 + 0x1d) | 0x80;
        lVar3 = param_1;
        do {
            if (*(int *) (lVar3 + 0x188) == 0) break;
            *(undefined4 * )(lVar3 + 0x188) = 0;
            lVar3 = *(longlong * )(lVar3 + 0x10);
        } while (lVar3 != 0);
    }
    local_18 = *(undefined4 * )(longlong * )(param_1 + 0x18c);
    uStack20 = *(undefined4 * )(param_1 + 400);
    local_10 = *(undefined4 * )(longlong * )(param_1 + 0x194);
    uStack12 = *(undefined4 * )(param_1 + 0x198);
    if ((*(longlong * )(param_1 + 0x18c) != *(longlong * )(param_1 + 0x490)) ||
        (*(longlong * )(param_1 + 0x194) != *(longlong * )(param_1 + 0x498))) {
        FUN_1401795d0(param_1);
    }
    return;
}


void FUN_14017a290(longlong param_1, longlong param_2, char param_3) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong local_res8;

    if ((ulonglong)(*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3) < 2) {
        FUN_14017b020(param_1 + 0x4b0, param_2 + 0x4b0);
        iVar3 = 0;
        if (0 < (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3)) {
            lVar4 = 0;
            local_res8 = param_1;
            do {
                lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x4b8) + lVar4);
                plVar2 = *(longlong * *)(lVar1 + 0x4c0);
                if (plVar2 == *(longlong * *)(lVar1 + 0x4c8)) {
                    FUN_1400b9430(lVar1 + 0x4b0, plVar2, &local_res8);
                } else {
                    if (plVar2 != (longlong *) 0x0) {
                        *plVar2 = param_1;
                    }
                    *(longlong * )(lVar1 + 0x4c0) = *(longlong * )(lVar1 + 0x4c0) + 8;
                }
                FUN_1401795d0(*(undefined8 * )(*(longlong * )(param_1 + 0x4b8) + lVar4));
                iVar3 = iVar3 + 1;
                lVar4 = lVar4 + 8;
            } while (iVar3 < (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3));
        }
        plVar2 = *(longlong * *)(param_1 + 0x4c0);
        if (plVar2 == *(longlong * *)(param_1 + 0x4c8)) {
            local_res8 = param_1;
            FUN_1400b9430(param_1 + 0x4b0, plVar2, &local_res8);
        } else {
            if (plVar2 != (longlong *) 0x0) {
                *plVar2 = param_1;
            }
            *(longlong * )(param_1 + 0x4c0) = *(longlong * )(param_1 + 0x4c0) + 8;
            local_res8 = param_1;
        }
        FUN_1400cc680(param_1, param_2 + 0x40);
        if (param_3 == '\0') {
            param_2 = param_1;
        }
        FUN_1400d42f0(param_2, 0, 1);
        FUN_1401795d0(param_1);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014017a5b6)
// WARNING: Removing unreachable block (ram,0x00014017a5c0)

void FUN_14017a3d0(longlong param_1) {
    longlong lVar1;
    undefined4 *puVar2;
    bool bVar3;
    longlong lVar4;
    longlong *plVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    int iVar9;
    longlong local_res8;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;

    lVar4 = *(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3;
    if (lVar4 != 1) {
        bVar3 = false;
        iVar9 = 0;
        if (0 < (int) lVar4) {
            lVar4 = 0;
            lVar8 = 0;
            do {
                lVar1 = *(longlong * )(lVar8 + *(longlong * )(param_1 + 0x4b8));
                if (lVar1 == param_1) {
                    lVar1 = *(longlong * )(param_1 + 0x4d8);
                    local_48 = *(undefined4 * )(lVar4 + lVar1);
                    local_44 = *(undefined4 * )(lVar4 + 4 + lVar1);
                    local_40 = *(undefined4 * )(lVar4 + 8 + lVar1);
                    local_3c = *(undefined4 * )(lVar4 + 0xc + lVar1);
                } else {
                    if (!bVar3) {
                        FUN_1400d42f0(lVar1, 1);
                        bVar3 = true;
                    }
                    iVar6 = 0;
                    lVar1 = *(longlong * )(lVar8 + *(longlong * )(param_1 + 0x4b8));
                    iVar7 = (int) ((longlong) * (longlong * *)(lVar1 + 0x4c0) - *(longlong * )(lVar1 + 0x4b8) >> 3);
                    if (iVar7 < 1) {
                        LAB_14017a4cd:
                        FUN_1401795d0(lVar1);
                    } else {
                        plVar5 = *(longlong * *)(lVar1 + 0x4b8);
                        do {
                            if (*plVar5 == param_1) {
                                if (*(longlong * *)(lVar1 + 0x4b8) + (longlong) iVar6 + 1 !=
                                    *(longlong * *)(lVar1 + 0x4c0)) {
                                    FUN_1407db590();
                                }
                                *(longlong * )(lVar1 + 0x4c0) = *(longlong * )(lVar1 + 0x4c0) + -8;
                                goto LAB_14017a4cd;
                            }
                            iVar6 = iVar6 + 1;
                            plVar5 = plVar5 + 1;
                        } while (iVar6 < iVar7);
                        FUN_1401795d0(lVar1);
                    }
                }
                iVar9 = iVar9 + 1;
                lVar8 = lVar8 + 8;
                lVar4 = lVar4 + 0x10;
            } while (iVar9 < (int) (*(longlong * )(param_1 + 0x4c0) - *(longlong * )(param_1 + 0x4b8) >> 3));
        }
        lVar4 = *(longlong * )(param_1 + 0x4c0);
        lVar8 = *(longlong * )(param_1 + 0x4b8);
        FUN_1407db590(lVar8, lVar4, 0);
        *(longlong * )(param_1 + 0x4c0) = *(longlong * )(param_1 + 0x4c0) + (lVar4 - lVar8 >> 3) * -8;
        plVar5 = *(longlong * *)(param_1 + 0x4c0);
        local_res8 = param_1;
        if (plVar5 == *(longlong * *)(param_1 + 0x4c8)) {
            FUN_1400b9430(param_1 + 0x4b0, plVar5, &local_res8);
        } else {
            if (plVar5 != (longlong *) 0x0) {
                *plVar5 = param_1;
            }
            *(longlong * )(param_1 + 0x4c0) = *(longlong * )(param_1 + 0x4c0) + 8;
        }
        *(longlong * )(param_1 + 0x4e0) =
                *(longlong * )(param_1 + 0x4e0) +
                (*(longlong * )(param_1 + 0x4e0) - *(longlong * )(param_1 + 0x4d8) >> 4) * -0x10;
        puVar2 = *(undefined4 * *)(param_1 + 0x4e0);
        if (puVar2 != *(undefined4 * *)(param_1 + 0x4e8)) {
            if (puVar2 != (undefined4 *) 0x0) {
                *puVar2 = local_48;
                puVar2[1] = local_44;
                puVar2[2] = local_40;
                puVar2[3] = local_3c;
            }
            *(longlong * )(param_1 + 0x4e0) = *(longlong * )(param_1 + 0x4e0) + 0x10;
            return;
        }
        FUN_14015c990(param_1 + 0x4d0, puVar2, &local_48);
    }
    return;
}


void FUN_14017a760(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong * )(param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.TabWindow", 0x10);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 * )(param_2 + 0x10));
    *(longlong * )(param_2 + 0x10) = *(longlong * )(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}


void FUN_14017a7d0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    uint uVar10;
    ulonglong *puVar12;
    undefined8 unaff_RBX;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong lVar17;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 auStackX8[2];
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar11;
    ulonglong uVar16;

    uStack40 = 0x14017a7e0;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong * )(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong * )(param_1 + 400);
    *(undefined8 * )(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 * )(&stack0x00004020 + lVar4) = unaff_R15;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a821;
    FUN_1407e4830();
    uVar14 = 0;
    uVar8 = uVar14;
    uVar11 = uVar14;
    uVar16 = uVar14;
    do {
        uVar10 = (int) uVar11 + 1;
        uVar11 = (ulonglong) uVar10;
        uVar15 = (int) uVar16 + 1;
        uVar16 = (ulonglong) uVar15;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4) =
                *(undefined8 * )((longlong) & PTR_DAT_140c56a80 + uVar8);
        puVar9 = (undefined8 * )((longlong) & PTR_FUN_140c56a88 + uVar8);
        uVar8 = uVar8 + 0x10;
        *(undefined8 * )((longlong) alStackX16 + uVar8 + lVar4 + -8) = *puVar9;
    } while (uVar10 < 0x97);
    lVar17 = (longlong) & PTR_s_AttachTab_140c583d0 +
                          ((longlong)(int)
    uVar15 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar9 = (undefined8 * )((longlong) alStackX16 + (longlong)(int)
    uVar15 * 0x10 + lVar4);
    uVar8 = uVar14;
    do {
        uVar10 = (int) uVar8 + 1;
        uVar8 = (ulonglong) uVar10;
        *puVar9 = *(undefined8 * )(lVar17 + (longlong) puVar9);
        puVar9[1] = *(undefined8 * )(lVar17 + -8 + (longlong)(puVar9 + 2));
        puVar9 = puVar9 + 2;
    } while (uVar10 < 6);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a8af;
    FUN_1400569b0(lVar2, "Apollo.TabWindow");
    puVar9 = *(undefined8 * *)(lVar2 + 0x10);
    iVar1 = *(int *) (puVar9 + -1);
    if (iVar1 == 2) {
        LAB_14017a8d1:
        if (*(int *) (puVar9 + -1) == 2) {
            LAB_14017a8ed:
            uVar8 = puVar9[-2];
        } else if (*(int *) (puVar9 + -1) == 7) {
            uVar8 = puVar9[-2] + 0x30;
        } else {
            uVar8 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14017a8ed;
        if (iVar1 == 7) goto LAB_14017a8d1;
        uVar8 = uVar14;
        if (iVar1 == 8) goto LAB_14017a8ed;
    }
    *puVar9 = puVar9[-2];
    *(undefined4 * )(puVar9 + 1) = *(undefined4 * )(puVar9 + -1);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a91c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar13 = *(longlong * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a942;
    FUN_14005ea50(lVar2, lVar17 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
    lVar13 = *(longlong * )((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong * )(lVar2 + 0x10);
    lVar17 = (longlong) alStackX16 + lVar4;
    if (lVar13 != 0) {
        *(undefined8 * )(&stack0x00004060 + lVar4) = unaff_R14;
        do {
            uVar5 = *(undefined8 * )(lVar17 + 8);
            if (*(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x70) <=
                *(ulonglong * )(*(longlong * )(lVar2 + 0x20) + 0x78)) {
                *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a98a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a9af;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 * )(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong * *)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 * )(plVar3 + 1) = 6;
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a9d3;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar13 + lVar6) != '\0');
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017a9f4;
            uVar7 = FUN_140062650(lVar2, lVar13);
            lVar13 = *(longlong * )(lVar2 + 0x10);
            *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
            *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017aa19;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar13 + -0x10);
            *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + -0x10;
            lVar13 = *(longlong * )(lVar17 + 0x10);
            lVar6 = *(longlong * )(lVar2 + 0x10);
            lVar17 = lVar17 + 0x10;
        } while (lVar13 != 0);
    }
    lVar17 = *(longlong * )(lVar2 + 0x20);
    *(longlong * )(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017aa5c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 * )(lVar2 + 0x10);
    *(undefined8 * )((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 * )((longlong) auStackX8 + lVar4) = 4;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017aa81;
    FUN_14005e8e0(lVar2, lVar17 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong * )(lVar2 + 0x10) = *(longlong * )(lVar2 + 0x10) + 0x10;
    lVar17 = *(longlong * )(lVar2 + 0x10);
    iVar1 = *(int *) (lVar17 + -8);
    puVar12 = (ulonglong * )(lVar17 + -0x10);
    if (iVar1 == 2) {
        LAB_14017aae9:
        if (*(int *) (lVar17 + -8) != 2) {
            if (*(int *) (lVar17 + -8) == 7) {
                uVar14 = *puVar12 + 0x30;
            }
            goto LAB_14017aaba;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14017aae9;
        if (iVar1 != 8) goto LAB_14017aaba;
    }
    uVar14 = *puVar12;
    LAB_14017aaba:
    *(ulonglong * *)(lVar2 + 0x10) = puVar12;
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017aacc;
    FUN_1400ed720(param_1, uVar8, uVar14);
    *(undefined8 * )((longlong) & uStack40 + lVar4) = 0x14017aadc;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_14017ab00(undefined8 param_1, undefined4 param_2) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint * )(lVar1 + 0x1b0) >> 0xc & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, param_2);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "TabWindow", pcVar4);
        FUN_140056570(param_1, param_2, uVar3);
    }
    return lVar1;
}


undefined8 FUN_14017abb0(longlong param_1) {
    longlong lVar1;
    uint *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1)
                break;
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_14017ab00(param_1, 1);
    if ((lVar3 != 0) && ((*(uint * )(lVar3 + 0x1b0) >> 0xc & 1) != 0)) {
        lVar1 = *(longlong * )(lVar3 + 0x4c0);
        puVar2 = *(uint * *)(param_1 + 0x10);
        lVar3 = *(longlong * )(lVar3 + 0x4b8);
        puVar2[2] = 1;
        *puVar2 = (uint)(lVar3 != lVar1);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_14017ac60(longlong param_1) {
    longlong *plVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1)
                break;
            uVar7 = (ulonglong)((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_14017ab00(param_1, 1);
    if ((lVar4 != 0) && ((*(uint * )(lVar4 + 0x1b0) >> 0xc & 1) != 0)) {
        lVar5 = FUN_14017ab00(param_1, 2);
        if ((lVar5 != 0) && ((*(uint * )(lVar5 + 0x1b0) >> 0xc & 1) != 0)) {
            plVar1 = *(longlong * *)(lVar4 + 0x4c0);
            plVar6 = *(longlong * *)(lVar4 + 0x4b8);
            if (((*(longlong * )(lVar5 + 0x4c0) - *(longlong * )(lVar5 + 0x4b8) ^
                  (longlong) plVar1 - (longlong) plVar6) & 0xfffffffffffffff8U) == 0) {
                if (plVar6 != plVar1) {
                    lVar4 = *(longlong * )(lVar5 + 0x4b8) - (longlong) plVar6;
                    do {
                        if (*plVar6 != *(longlong * )(lVar4 + (longlong) plVar6)) goto LAB_14017ad59;
                        plVar6 = plVar6 + 1;
                    } while (plVar6 != plVar1);
                }
                bVar3 = 1;
            } else {
                LAB_14017ad59:
                bVar3 = 0;
            }
            puVar2 = *(uint * *)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint) bVar3;
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_14017ad90(longlong param_1) {
    byte bVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;

    uVar5 = 0;
    uVar8 = *(ulonglong * )(DAT_140c63650 + 0x300);
    if (uVar8 != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar7 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_14017ade1;
            }
            uVar5 = (ulonglong)((int) uVar5 + 1);
        } while (uVar5 < uVar8);
    }
    lVar7 = 0;
    LAB_14017ade1:
    bVar1 = 1;
    lVar2 = FUN_14017ab00(param_1, 1);
    if ((lVar2 != 0) && ((*(uint * )(lVar2 + 0x1b0) >> 0xc & 1) != 0)) {
        lVar3 = FUN_14017ab00(param_1, 2);
        if (lVar3 != 0) {
            puVar4 = (undefined8 * )(*(longlong * )(*(longlong * )(lVar7 + 400) + 0x18) + 0x20);
            puVar6 = &DAT_140a12138;
            if (puVar4 < *(undefined8 * *)(*(longlong * )(lVar7 + 400) + 0x10)) {
                puVar6 = puVar4;
            }
            if ((*(int *) (puVar6 + 1) == 0) || ((*(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
                bVar1 = 0;
            }
            FUN_14017a290(lVar3, lVar2, uVar8 & 0xffffffffffffff00 | (ulonglong) bVar1);
        }
    }
    return 0;
}


undefined8 FUN_14017ae80(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1)
                break;
            uVar2 = (ulonglong)((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar1 = FUN_14017ab00(param_1, 1);
    if (lVar1 != 0) {
        FUN_14017a3d0(lVar1);
    }
    return 0;
}


undefined8 FUN_14017aee0(longlong param_1) {
    undefined uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    longlong lVar6;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_14017af28;
            }
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_14017af28:
    uVar1 = 1;
    lVar2 = FUN_14017ab00(param_1, 1);
    if (lVar2 != 0) {
        puVar3 = (undefined8 * )(*(longlong * )(*(longlong * )(lVar6 + 400) + 0x18) + 0x10);
        puVar5 = &DAT_140a12138;
        if (puVar3 < *(undefined8 * *)(*(longlong * )(lVar6 + 400) + 0x10)) {
            puVar5 = puVar3;
        }
        if ((*(int *) (puVar5 + 1) == 0) || ((*(int *) (puVar5 + 1) == 1 && (*(int *) puVar5 == 0)))) {
            uVar1 = 0;
        }
        *(undefined * )(lVar2 + 0x464) = uVar1;
    }
    return 0;
}


undefined8 FUN_14017af90(longlong param_1) {
    char cVar1;
    uint *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong * )(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong * )(*(longlong * )(*(longlong * )(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1)
                break;
            uVar4 = (ulonglong)((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong * )(DAT_140c63650 + 0x300));
    }
    lVar3 = FUN_14017ab00(param_1, 1);
    if (lVar3 == 0) {
        return 0;
    }
    cVar1 = *(char *) (lVar3 + 0x464);
    puVar2 = *(uint * *)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(cVar1 != '\0');
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    return 1;
}


longlong FUN_14017b020(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (param_2 != param_1) {
        lVar2 = *(longlong * )(param_1 + 8);
        lVar3 = *(longlong * )(param_2 + 8);
        lVar1 = *(longlong * )(param_2 + 0x10);
        uVar4 = lVar1 - lVar3 >> 3;
        if ((ulonglong)(*(longlong * )(param_1 + 0x18) - lVar2 >> 3) < uVar4) {
            lVar2 = FUN_14018b280(uVar4 * 8, 0);
            FUN_1407db590(lVar2, lVar3, lVar1 - lVar3 & 0xfffffffffffffff8);
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar2;
            *(ulonglong * )(param_1 + 0x18) = uVar4 * 8 + lVar2;
        } else {
            uVar5 = *(longlong * )(param_1 + 0x10) - lVar2 >> 3;
            if (uVar5 < uVar4) {
                FUN_1407db590(lVar2, lVar3, uVar5 * 8);
                lVar2 = *(longlong * )(param_1 + 0x10);
                lVar3 = *(longlong * )(param_2 + 8) + (lVar2 - *(longlong * )(param_1 + 8) >> 3) * 8;
                uVar5 = *(longlong * )(param_2 + 0x10) - lVar3;
            } else {
                uVar5 = lVar1 - lVar3;
            }
            FUN_1407db590(lVar2, lVar3, uVar5 & 0xfffffffffffffff8);
        }
        *(ulonglong * )(param_1 + 0x10) = *(longlong * )(param_1 + 8) + uVar4 * 8;
    }
    return param_1;
}


void FUN_14017b140(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;

    puVar2 = *(undefined4 * *)(param_1 + 0x10);
    if (puVar2 != *(undefined4 * *)(param_1 + 0x18)) {
        if (puVar2 != (undefined4 *) 0x0) {
            *puVar2 = puVar2[-1];
        }
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 4;
        uVar1 = *param_3;
        FUN_1407db590(*(longlong * )(param_1 + 0x10) +
                      ((*(longlong * )(param_1 + 0x10) - (longlong) param_2) + -8 >> 2) * -4 + -4);
        *param_2 = uVar1;
        return;
    }
    lVar5 = (longlong) puVar2 - *(longlong * )(param_1 + 8) >> 2;
    lVar4 = lVar5 * 2;
    if (lVar5 == 0) {
        lVar4 = 1;
    }
    uVar3 = FUN_14018a3e0(lVar4 * 4);
    lVar5 = FUN_14018b280(uVar3 & 0xfffffffffffffffc, 0);
    lVar4 = ((longlong) param_2 - *(longlong * )(param_1 + 8) >> 2) * 4;
    FUN_1407db590(lVar5, *(longlong * )(param_1 + 8), lVar4);
    puVar2 = (undefined4 * )(lVar4 + lVar5);
    if (puVar2 != (undefined4 *) 0x0) {
        *puVar2 = *param_3;
    }
    lVar4 = *(longlong * )(param_1 + 0x10) - (longlong) param_2 >> 2;
    FUN_1407db590(puVar2 + 1, param_2, lVar4 * 4);
    if (*(longlong * )(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong * )(param_1 + 8), 0);
    }
    *(longlong * )(param_1 + 8) = lVar5;
    *(undefined4 * *)(param_1 + 0x10) = puVar2 + 1 + lVar4;
    *(ulonglong * )(param_1 + 0x18) = (uVar3 & 0xfffffffffffffffc) + lVar5;
    return;
}


undefined8 *
FUN_14017b280(undefined8 *param_1, undefined8 *param_2, undefined4 param_3, undefined8 param_4,
              undefined4 param_5) {
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined4 in_XMM3_Da;
    undefined local_18[16];

    *(undefined4 * )(param_1 + 3) = in_XMM3_Da;
    *param_1 = param_2;
    *(undefined4 * )(param_1 + 1) = param_3;
    *(undefined4 * )(param_1 + 2) = param_5;
    *(undefined4 * )((longlong) param_1 + 0xc) = 0;
    *(undefined4 * )((longlong) param_1 + 0x14) = 0;
    *(undefined4 * )(param_1 + 4) = 0;
    param_1[5] = 0;
    FUN_1401095e0(param_1 + 6);
    *(undefined4 * )(param_1 + 0xc) = 0;
    if (param_2 != (undefined8 *) 0x0) {
        (**(code * *) * param_2)(param_2);
    }
    if ((*(byte * )((longlong) param_2 + 0x1d) & 0x80) == 0) {
        puVar1 = (undefined4 *) FUN_1400cb0e0(param_2, local_18, param_2 + 8);
        *(undefined4 * )((longlong) param_2 + 0x18c) = *puVar1;
        *(undefined4 * )(param_2 + 0x32) = puVar1[1];
        *(undefined4 * )((longlong) param_2 + 0x194) = puVar1[2];
        *(undefined4 * )(param_2 + 0x33) = puVar1[3];
        *(byte * )((longlong) param_2 + 0x1d) = *(byte * )((longlong) param_2 + 0x1d) | 0x80;
        puVar2 = param_2;
        do {
            if (*(int *) (puVar2 + 0x31) == 0) break;
            *(undefined4 * )(puVar2 + 0x31) = 0;
            puVar2 = (undefined8 *) puVar2[2];
        } while (puVar2 != (undefined8 *) 0x0);
    }
    *(float *) ((longlong) param_1 + 0x1c) =
            (float) (*(int *) ((longlong) param_2 + 0x194) - *(int *) ((longlong) param_2 + 0x18c));
    return param_1;
}
