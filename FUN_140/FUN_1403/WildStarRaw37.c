//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038b6d0(longlong param_1)

{
    int *piVar1;
    longlong *plVar2;
    float fVar3;
    float fVar4;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auVar13 [12];
    undefined auVar14 [12];
    uint uVar15;
    float *pfVar16;
    float *pfVar17;
    int iVar18;
    int iVar19;
    undefined (*pauVar20) [16];
    longlong *plVar21;
    longlong lVar22;
    int iVar23;
    int iVar24;
    undefined auVar25 [16];
    float fVar26;
    undefined auVar27 [16];
    float fVar28;
    float fVar29;
    undefined auVar30 [16];
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    undefined auVar35 [16];
    undefined auVar36 [16];
    undefined local_d8 [8];
    float fStack208;
    undefined4 uStack204;
    undefined local_c8 [8];
    float fStack192;
    undefined4 uStack188;
    float local_b8;
    float fStack176;
    float local_a8;
    float fStack160;
    float fVar5;
    float fVar6;

    lVar22 = 4;
    pfVar16 = (float *)(param_1 + 0x214);
    pauVar20 = (undefined (*) [16])(param_1 + 0x100);
    auVar35 = _DAT_140c798c0;
    auVar36 = _DAT_140c798d0;
    do {
        auVar14 = *(undefined (*) [12])(param_1 + 0x60);
        auVar13 = *(undefined (*) [12])(param_1 + 0x60);
        fVar26 = *(float *)(param_1 + 0x30);
        fVar34 = pfVar16[-5];
        fVar3 = pfVar16[-1];
        local_d8._0_4_ = SUB124(auVar13,0);
        local_c8._0_4_ = SUB124(auVar14,0);
        fVar5 = fVar3;
        fVar6 = fVar34;
        if (0.0 < fVar26) {
            fVar5 = fVar34;
            fVar6 = fVar3;
        }
        fVar4 = *(float *)(param_1 + 0x40);
        fVar33 = pfVar16[-4];
        fVar7 = *pfVar16;
        fVar8 = fVar7;
        fVar31 = fVar33;
        if (0.0 < fVar4) {
            fVar8 = fVar33;
            fVar31 = fVar7;
        }
        fVar32 = pfVar16[-3];
        fVar28 = pfVar16[1];
        fVar29 = *(float *)(param_1 + 0x50);
        fVar9 = fVar32;
        fVar10 = fVar28;
        if (0.0 < fVar29) {
            fVar9 = fVar28;
            fVar10 = fVar32;
        }
        _local_d8 = CONCAT124(auVar13 >> 0x20,
                              local_d8._0_4_ + fVar26 * fVar5 + fVar8 * fVar4 + fVar10 * fVar29) &
                    (undefined  [16])0xffffffffffffffff;
        _local_c8 = CONCAT124(auVar14 >> 0x20,
                              local_c8._0_4_ + fVar26 * fVar6 + fVar31 * fVar4 + fVar9 * fVar29) &
                    (undefined  [16])0xffffffffffffffff;
        fVar26 = *(float *)(param_1 + 0x34);
        fVar5 = fVar3;
        fVar6 = fVar34;
        if (0.0 < fVar26) {
            fVar5 = fVar34;
            fVar6 = fVar3;
        }
        fVar4 = *(float *)(param_1 + 0x44);
        fVar8 = fVar7;
        fVar31 = fVar33;
        if (0.0 < fVar4) {
            fVar8 = fVar33;
            fVar31 = fVar7;
        }
        fVar29 = *(float *)(param_1 + 0x54);
        fVar10 = fVar28;
        fVar9 = fVar32;
        if (0.0 < fVar29) {
            fVar10 = fVar32;
            fVar9 = fVar28;
        }
        fVar11 = *(float *)(param_1 + 0x38);
        fVar34 = fVar34 * fVar11;
        fVar12 = fVar3 * fVar11;
        if (0.0 < fVar11) {
            fVar12 = fVar34;
            fVar34 = fVar3 * fVar11;
        }
        fVar3 = *(float *)(param_1 + 0x48);
        fVar33 = fVar33 * fVar3;
        fVar11 = fVar7 * fVar3;
        if (0.0 < fVar3) {
            fVar11 = fVar33;
            fVar33 = fVar7 * fVar3;
        }
        fVar3 = *(float *)(param_1 + 0x58);
        fVar32 = fVar32 * fVar3;
        fVar7 = fVar28 * fVar3;
        if (0.0 < fVar3) {
            fVar7 = fVar32;
            fVar32 = fVar28 * fVar3;
        }
        pfVar17 = pfVar16 + 0x10;
        *(float *)*pauVar20 = local_d8._0_4_;
        *(float *)(*pauVar20 + 4) = local_d8._4_4_ + fVar5 * fVar26 + fVar8 * fVar4 + fVar10 * fVar29;
        *(float *)(*pauVar20 + 8) = fStack208 + fVar12 + fVar11 + fVar7;
        *(undefined4 *)(*pauVar20 + 0xc) = uStack204;
        *(float *)pauVar20[1] = local_c8._0_4_;
        *(float *)(pauVar20[1] + 4) = local_c8._4_4_ + fVar6 * fVar26 + fVar31 * fVar4 + fVar9 * fVar29;
        *(float *)(pauVar20[1] + 8) = fStack192 + fVar34 + fVar33 + fVar32;
        *(undefined4 *)(pauVar20[1] + 0xc) = uStack188;
        fVar26 = *(float *)(param_1 + 0x50);
        fVar34 = *(float *)(param_1 + 0x54);
        fVar3 = *(float *)(param_1 + 0x40);
        fVar5 = *(float *)(param_1 + 0x44);
        fVar6 = *(float *)(param_1 + 0x30);
        fVar4 = *(float *)(param_1 + 0x34);
        fVar28 = fVar26 * fVar26 + fVar34 * fVar34 + 0.0;
        fVar32 = fVar3 * fVar3 + fVar5 * fVar5 + 0.0;
        fVar33 = pfVar16[3];
        fVar7 = pfVar16[4];
        fVar8 = pfVar16[5];
        fVar31 = fVar6 * fVar6 + fVar4 * fVar4 + 0.0;
        if (fVar31 <= fVar32) {
            fVar31 = fVar32;
        }
        if (fVar31 <= fVar28) {
            fVar31 = fVar28;
        }
        fVar32 = fVar7 * *(float *)(param_1 + 0x48);
        fVar28 = fVar7 * *(float *)(param_1 + 0x4c);
        auVar25 = sqrtps(CONCAT412(fVar28,CONCAT48(fVar32,CONCAT44(fVar7 * fVar5,fVar7 * fVar3))),
                         ZEXT416((uint)fVar31));
        *(undefined (*) [16])(pfVar16 + -0x3d) =
                CONCAT412(fVar33 * *(float *)(param_1 + 0x3c) + fVar28 + fVar8 * *(float *)(param_1 + 0x5c)
                          + *(float *)(param_1 + 0x6c),
                          CONCAT48(fVar33 * *(float *)(param_1 + 0x38) + fVar32 +
                                   fVar8 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68),
                                   CONCAT44(fVar33 * fVar4 + fVar7 * fVar5 + fVar8 * fVar34 +
                                            *(float *)(param_1 + 100),
                                            fVar33 * fVar6 + fVar7 * fVar3 + fVar8 * fVar26 +
                                            *(float *)(param_1 + 0x60))));
        pfVar16[-0x39] = SUB164(auVar25,0) * pfVar16[7];
        fVar26 = DAT_140c43fb8;
        auVar36 = maxps(auVar36,pauVar20[1]);
        auVar35 = minps(auVar35,*pauVar20);
        lVar22 = lVar22 + -1;
        pfVar16 = pfVar17;
        pauVar20 = pauVar20[4];
    } while (lVar22 != 0);
    fVar34 = *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x54);
    fVar5 = *(float *)(param_1 + 0x40);
    fVar6 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x30);
    fVar33 = *(float *)(param_1 + 0x34);
    fVar29 = fVar34 * fVar34 + fVar3 * fVar3 + 0.0;
    fVar28 = fVar5 * fVar5 + fVar6 * fVar6 + 0.0;
    fVar7 = *(float *)(param_1 + 800);
    fVar8 = *(float *)(param_1 + 0x324);
    fVar31 = *(float *)(param_1 + 0x328);
    fVar32 = fVar4 * fVar4 + fVar33 * fVar33 + 0.0;
    if (fVar32 <= fVar28) {
        fVar32 = fVar28;
    }
    if (fVar32 <= fVar29) {
        fVar32 = fVar29;
    }
    fVar28 = fVar8 * *(float *)(param_1 + 0x48);
    fVar29 = fVar8 * *(float *)(param_1 + 0x4c);
    local_b8 = SUB164(auVar35,0);
    auVar25 = sqrtps(CONCAT412(fVar29,CONCAT48(fVar28,CONCAT44(fVar8 * fVar6,fVar8 * fVar5))),
                     ZEXT416((uint)fVar32));
    auVar27 = ZEXT416((uint)(local_b8 * DAT_140c43fb8)) & (undefined  [16])0xffffffffffffffff;
    *(undefined (*) [16])(param_1 + 0x300) =
            CONCAT412(fVar7 * *(float *)(param_1 + 0x3c) + fVar29 + fVar31 * *(float *)(param_1 + 0x5c) +
                      *(float *)(param_1 + 0x6c),
                      CONCAT48(fVar7 * *(float *)(param_1 + 0x38) + fVar28 +
                               fVar31 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68),
                               CONCAT44(fVar7 * fVar33 + fVar8 * fVar6 + fVar31 * fVar3 +
                                        *(float *)(param_1 + 100),
                                        fVar7 * fVar4 + fVar8 * fVar5 + fVar31 * fVar34 +
                                        *(float *)(param_1 + 0x60))));
    *(float *)(param_1 + 0x310) = SUB164(auVar25,0) * *(float *)(param_1 + 0x330);
    fVar34 = (SUB164(auVar27,0) + 0.5) * 2048.0;
    auVar25 = CONCAT124(SUB1612(auVar27 >> 0x20,0),fVar34);
    iVar18 = (int)fVar34;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar34)) {
        uVar15 = movmskps((int)pfVar17,
                          CONCAT88(SUB168(auVar27 >> 0x40,0),
                                   SUB168(auVar25,0) | SUB168(auVar25,0) << 0x20) &
                          (undefined  [16])0xffffffffffffffff);
        pfVar17 = (float *)(ulonglong)(uVar15 & 1);
        auVar25 = ZEXT416((uint)(float)(iVar18 - (uVar15 & 1)));
    }
    uVar15 = (uint)pfVar17;
    fStack176 = SUB164(auVar35 >> 0x40,0);
    auVar35 = ZEXT416((uint)(fStack176 * fVar26)) & (undefined  [16])0xffffffffffffffff;
    fVar34 = (SUB164(auVar35,0) + 0.5) * 2048.0;
    auVar27 = CONCAT124(SUB1612(auVar35 >> 0x20,0),fVar34);
    iVar18 = (int)fVar34;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar34)) {
        uVar15 = movmskps(uVar15,CONCAT88(SUB168(auVar35 >> 0x40,0),
                                          SUB168(auVar27,0) | SUB168(auVar27,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        uVar15 = uVar15 & 1;
        auVar27 = ZEXT416((uint)(float)(iVar18 - uVar15));
    }
    local_a8 = SUB164(auVar36,0);
    auVar35 = ZEXT416((uint)(local_a8 * fVar26)) & (undefined  [16])0xffffffffffffffff;
    fVar34 = (SUB164(auVar35,0) + 0.5) * 2048.0;
    auVar30 = CONCAT124(SUB1612(auVar35 >> 0x20,0),fVar34);
    iVar18 = (int)fVar34;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar34)) {
        uVar15 = movmskps(uVar15,CONCAT88(SUB168(auVar35 >> 0x40,0),
                                          SUB168(auVar30,0) | SUB168(auVar30,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        uVar15 = uVar15 & 1;
        auVar30 = ZEXT416((uint)(float)(iVar18 - uVar15));
    }
    fStack160 = SUB164(auVar36 >> 0x40,0);
    auVar35 = ZEXT416((uint)(fStack160 * fVar26)) & (undefined  [16])0xffffffffffffffff;
    iVar18 = (int)SUB164(auVar30,0) + 1;
    fVar26 = (SUB164(auVar35,0) + 0.5) * 2048.0;
    auVar36 = CONCAT124(SUB1612(auVar35 >> 0x20,0),fVar26);
    iVar19 = (int)fVar26;
    if ((iVar19 != -0x80000000) && ((float)iVar19 != fVar26)) {
        uVar15 = movmskps(uVar15,CONCAT88(SUB168(auVar35 >> 0x40,0),
                                          SUB168(auVar36,0) | SUB168(auVar36,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
        auVar36 = ZEXT416((uint)(float)(iVar19 - (uVar15 & 1)));
    }
    piVar1 = (int *)(param_1 + 0x340);
    *piVar1 = (int)SUB164(auVar25,0);
    *(int *)(param_1 + 0x344) = (int)SUB164(auVar27,0);
    *(int *)(param_1 + 0x348) = iVar18;
    iVar19 = (int)SUB164(auVar36,0) + 1;
    *(int *)(param_1 + 0x34c) = iVar19;
    if (DAT_140c445a0 < iVar18) {
        iVar18 = DAT_140c445a0;
    }
    if (DAT_140c445a4 < iVar19) {
        iVar19 = DAT_140c445a4;
    }
    iVar24 = *piVar1;
    if (*piVar1 < DAT_140c44598) {
        iVar24 = DAT_140c44598;
    }
    iVar23 = *(int *)(param_1 + 0x344);
    if (*(int *)(param_1 + 0x344) < DAT_140c4459c) {
        iVar23 = DAT_140c4459c;
    }
    if ((iVar24 < iVar18) && (iVar23 < iVar19)) {
        if (piVar1 != (int *)0x0) {
            *piVar1 = iVar24;
            *(int *)(param_1 + 0x344) = iVar23;
            *(int *)(param_1 + 0x348) = iVar18;
            *(int *)(param_1 + 0x34c) = iVar19;
        }
    }
    else {
        *piVar1 = DAT_140c784c0;
        *(undefined4 *)(param_1 + 0x344) = DAT_140c784c4;
        *(undefined4 *)(param_1 + 0x348) = DAT_140c784c8;
        *(undefined4 *)(param_1 + 0x34c) = DAT_140c784cc;
    }
    if (*(int *)(param_1 + 0xe4) != 0) {
        FUN_140367870(*(undefined8 *)(param_1 + 0x10),param_1 + 0x180);
    }
    if (*(longlong *)(param_1 + 0x410) == 0) {
        plVar2 = (longlong *)(param_1 + 0x418);
        plVar21 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1490);
        *(longlong **)(param_1 + 0x410) = plVar21;
        *plVar2 = *plVar21;
        *plVar21 = param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x410) = plVar2;
        }
    }
    return;
}



void FUN_14038bd40(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x410) != 0) {
        FUN_14038bdb0();
        FUN_14038c060(param_1);
        if (*(undefined8 **)(param_1 + 0x410) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x418);
        }
        if (*(longlong *)(param_1 + 0x418) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x418) + 0x410) = *(undefined8 *)(param_1 + 0x410);
        }
        *(undefined8 *)(param_1 + 0x410) = 0;
        *(undefined8 *)(param_1 + 0x418) = 0;
    }
    return;
}



void FUN_14038bdb0(longlong *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;
    uint *puVar6;
    undefined8 *puVar7;
    int iVar8;
    longlong **pplVar9;
    uint *puVar10;
    ulonglong uVar11;
    longlong **pplVar12;
    int local_res8;
    int local_resc;
    longlong *local_res10;

    if ((*(longlong *)((longlong)param_1 + 0x39c) != param_1[0x68]) ||
        (*(longlong *)((longlong)param_1 + 0x3a4) != param_1[0x69])) {
        if (param_1[0x76] != 0) {
            FUN_1403762e0();
        }
        uVar11 = 0;
        param_1[0x76] = 0;
        *(undefined4 *)((longlong)param_1 + 0x39c) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0x344);
        *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x69);
        *(undefined4 *)(param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x34c);
        if ((longlong *)param_1[0x80] != (longlong *)0x0) {
            *(longlong *)param_1[0x80] = param_1[0x81];
        }
        pplVar9 = (longlong **)(param_1 + 0x81);
        if (*pplVar9 != (longlong *)0x0) {
            (*pplVar9)[0x80] = param_1[0x80];
        }
        param_1[0x80] = 0;
        *pplVar9 = (longlong *)0x0;
        if (*(int *)((longlong)param_1 + 0x39c) < *(int *)((longlong)param_1 + 0x3a4)) {
            if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x75)) {
                uVar3 = (*(int *)((longlong)param_1 + 0x3a4) - *(int *)((longlong)param_1 + 0x39c)) *
                        (*(int *)(param_1 + 0x75) - *(int *)(param_1 + 0x74));
                if (uVar3 < 0x100) {
                    uVar4 = SUB168(ZEXT816(0x20) * ZEXT416(uVar3),0);
                    if (SUB168(ZEXT816(0x20) * ZEXT416(uVar3) >> 0x40,0) != 0) {
                        uVar4 = 0xffffffffffffffff;
                    }
                    lVar5 = uVar4 + 8;
                    if (0xfffffffffffffff7 < uVar4) {
                        lVar5 = -1;
                    }
                    puVar6 = (uint *)FUN_14018b280(lVar5,0);
                    if (puVar6 == (uint *)0x0) {
                        puVar10 = (uint *)0x0;
                    }
                    else {
                        iVar8 = uVar3 - 1;
                        *puVar6 = uVar3;
                        puVar10 = puVar6 + 2;
                        if (-1 < iVar8) {
                            puVar7 = (undefined8 *)(puVar6 + 6);
                            do {
                                iVar8 = iVar8 + -1;
                                *puVar7 = 0;
                                puVar7[1] = 0;
                                puVar7[-2] = 0;
                                puVar7 = puVar7 + 4;
                            } while (-1 < iVar8);
                        }
                    }
                    param_1[0x76] = (longlong)puVar10;
                    local_resc = *(int *)(param_1 + 0x74);
                    if (local_resc < *(int *)(param_1 + 0x75)) {
                        do {
                            local_res8 = *(int *)((longlong)param_1 + 0x39c);
                            uVar4 = uVar11;
                            if (local_res8 < *(int *)((longlong)param_1 + 0x3a4)) {
                                do {
                                    local_res10 = (longlong *)0x0;
                                    if ((((DAT_140c44530 <= local_res8) && (local_res8 < DAT_140c44538)) &&
                                         (DAT_140c44534 <= local_resc)) && (local_resc < DAT_140c4453c)) {
                                        FUN_14035bec0(param_1[2],&local_res8,&local_res10);
                                    }
                                    plVar2 = local_res10;
                                    uVar11 = (ulonglong)((int)uVar4 + 1);
                                    pplVar12 = (longlong **)(uVar4 * 0x20 + param_1[0x76]);
                                    *pplVar12 = local_res10;
                                    pplVar12[1] = param_1;
                                    (**(code **)*local_res10)(local_res10);
                                    pplVar9 = (longlong **)(*pplVar12 + 8);
                                    if (pplVar12[2] == (longlong *)0x0) {
                                        pplVar12[2] = (longlong *)pplVar9;
                                        pplVar1 = pplVar12 + 3;
                                        *pplVar1 = *pplVar9;
                                        *pplVar9 = (longlong *)pplVar12;
                                        if (*pplVar1 != (longlong *)0x0) {
                                            (*pplVar1)[2] = (longlong)pplVar1;
                                        }
                                    }
                                    (**(code **)(*plVar2 + 8))(plVar2);
                                    local_res8 = local_res8 + 1;
                                    uVar4 = uVar11;
                                } while (local_res8 < *(int *)((longlong)param_1 + 0x3a4));
                            }
                            local_resc = local_resc + 1;
                        } while (local_resc < *(int *)(param_1 + 0x75));
                    }
                }
                else {
                    pplVar12 = (longlong **)(param_1[2] + 0x1488);
                    param_1[0x80] = (longlong)pplVar12;
                    *pplVar9 = *pplVar12;
                    *pplVar12 = param_1;
                    if (*pplVar9 != (longlong *)0x0) {
                        (*pplVar9)[0x80] = (longlong)pplVar9;
                        return;
                    }
                }
            }
        }
    }
    return;
}



void FUN_14038c060(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auVar6 [16];
    undefined auVar7 [16];
    undefined local_28 [16];
    undefined local_18 [16];

    lVar4 = param_1[0x77];
    while (lVar4 != 0) {
        lVar4 = param_1[0x77];
        if (lVar4 != 0) {
            FUN_14038fdb0(lVar4);
            FUN_14018b900(lVar4,0);
        }
        lVar4 = param_1[0x77];
    }
    if (param_1[0x80] != 0) {
        *(undefined4 *)(param_1 + 0x73) = 1;
        return;
    }
    lVar4 = FUN_1403589f0(param_1[2],param_1 + 0xe);
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar5 == 0) {
        *(uint *)(param_1 + 0x73) = (uint)(lVar4 == 0);
        if ((lVar4 != 0) && (lVar5 = FUN_14018b280(0x30), lVar5 != 0)) {
            FUN_14038fcf0(lVar5,lVar4,param_1);
            return;
        }
    }
    else {
        auVar7 = maxps(*(undefined (*) [16])(param_1 + 0x22),*(undefined (*) [16])(param_1 + 0x2a));
        auVar6 = minps(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x28));
        local_18 = maxps(auVar7,*(undefined (*) [16])(param_1 + 0x32));
        local_28 = minps(auVar6,*(undefined (*) [16])(param_1 + 0x30));
        uVar2 = FUN_140358d20(SUB168(local_28,0),SUB168(local_18,0),param_1[2],lVar4,local_28);
        *(undefined4 *)(param_1 + 0x73) = uVar2;
        for (plVar1 = *(longlong **)(param_1[2] + 0x1550); plVar1 != (longlong *)0x0;
             plVar1 = (longlong *)plVar1[0x27]) {
            iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if ((iVar3 == 0) && (lVar4 = FUN_14018b280(0x30,0), lVar4 != 0)) {
                FUN_14038fcf0(lVar4,plVar1,param_1);
            }
        }
    }
    return;
}



void FUN_14038c1c0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    undefined4 local_88;
    undefined4 local_84;
    float local_80;
    undefined4 local_78 [2];
    longlong local_70;
    undefined *local_68;
    undefined8 local_60;

    if (*(undefined8 **)(param_1 + 0x480) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x480) = *(undefined8 *)(param_1 + 0x488);
    }
    if (*(longlong *)(param_1 + 0x488) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x480) = *(undefined8 *)(param_1 + 0x480);
    }
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
        (uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(), (uVar2 & 8) == 0)) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar1 + 0x648) == 0) {
            if ((*(int *)(lVar1 + 0xa0) != 0) || (16.0 <= *(float *)(lVar1 + 0x3bc))) {
                fVar3 = *(float *)(param_1 + 0x300) - *(float *)(lVar1 + 0x390);
                fVar4 = *(float *)(param_1 + 0x304) - *(float *)(lVar1 + 0x394);
                fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0);
            }
            else {
                fVar3 = *(float *)(param_1 + 0x300) - *(float *)(lVar1 + 0x360);
                fVar4 = *(float *)(param_1 + 0x304) - *(float *)(lVar1 + 0x364);
                fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + 0.0) - *(float *)(lVar1 + 0x3bc);
            }
            fVar3 = (float)((uint)(fVar3 - *(float *)(param_1 + 0x310)) & 0xfff00000);
            if (fVar3 <= *(float *)(lVar1 + 0x64c)) {
                fVar3 = *(float *)(lVar1 + 0x64c);
            }
        }
        else {
            fVar3 = 1.0;
        }
        local_88 = *(undefined4 *)(lVar1 + 0x774);
        local_84 = *(undefined4 *)(lVar1 + 0x778);
        local_80 = fVar3 * *(float *)(param_1 + 0x80) * *(float *)(lVar1 + 0x77c);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0xf0))(*(longlong **)(param_1 + 0x20),&local_88);
        fVar3 = fVar3 * 250.0 * 0.03125;
        local_78[0] = 0;
        local_68 = &LAB_14038c3f0;
        if (fVar3 <= 250.0) {
            fVar3 = 250.0;
        }
        local_60 = 0;
        if (8000.0 <= fVar3) {
            fVar3 = 8000.0;
        }
        local_70 = param_1;
        FUN_140195960(param_1 + 0x350,(longlong)fVar3,local_78,4);
    }
    return;
}



byte FUN_14038c430(longlong param_1,uint param_2)

{
    byte bVar1;

    bVar1 = false;
    if ((param_2 >> 0xb & 1) == 0) {
        if ((param_2 >> 0xf & 1) != 0) {
            bVar1 = *(int *)(param_1 + 0xe4) != 0;
        }
    }
    else {
        bVar1 = true;
    }
    if ((((param_2 >> 0xc & 1) != 0) && (*(int *)(param_1 + 0xe0) != 0)) ||
        ((param_2 >> 0xd & 1) != 0)) {
        bVar1 = bVar1 | 2;
    }
    if (((param_2 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0xe4) != 0)) {
        bVar1 = bVar1 | 4;
    }
    return bVar1;
}



void FUN_14038c490(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
    int iVar1;
    longlong *plVar2;

    if ((param_1[4] != 0) && (plVar2 = param_1, iVar1 = FUN_14038c430(param_1,param_3), iVar1 != 0)) {
        (**(code **)(*plVar2 + 0x20))();
        (**(code **)(*(longlong *)param_1[4] + 0x528))((longlong *)param_1[4],param_2,iVar1,param_4);
    }
    return;
}



float FUN_14038c510(longlong param_1,int param_2)

{
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;

    iVar1 = *(int *)(param_1 + 0xf8);
    iVar2 = *(int *)(param_1 + 0xfc);
    if (-1 < iVar1 - iVar2) {
        return *(float *)(param_1 + 0xf4);
    }
    if (param_2 - iVar1 < 0) {
        return *(float *)(param_1 + 0xf0);
    }
    if (param_2 - iVar2 < 0) {
        fVar4 = ((float)(ulonglong)(uint)(param_2 - iVar1) / (float)(ulonglong)(uint)(iVar2 - iVar1)) *
                (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xf0)) + *(float *)(param_1 + 0xf0);
        if (1.0 <= fVar4) {
            fVar4 = 1.0;
        }
        fVar3 = 0.0;
        if (0.0 <= fVar4) {
            fVar3 = fVar4;
        }
        return (3.0 - fVar3 * 2.0) * fVar3 * fVar3;
    }
    *(int *)(param_1 + 0xf8) = iVar2;
    *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf4);
    return *(float *)(param_1 + 0xf4);
}



int FUN_14038c610(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14038acf0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_14038c650(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_1 + 0x490) != 0) {
        plVar1 = *(longlong **)(param_1 + 0x20);
        if (plVar1 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0);
            if ((int)uVar2 == 0) {
                return uVar2;
            }
        }
        FUN_14038b4e0(param_1);
        FUN_14038b6d0(param_1);
        FUN_14038c1c0(param_1);
        if (*(undefined8 **)(param_1 + 0x490) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x498);
        }
        if (*(longlong *)(param_1 + 0x498) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x490) = *(undefined8 *)(param_1 + 0x490);
        }
        *(undefined8 *)(param_1 + 0x490) = 0;
        *(undefined8 *)(param_1 + 0x498) = 0;
    }
    return 1;
}



undefined8 FUN_14038c6f0(longlong *param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    if (param_1[0x94] != 0) {
        iVar2 = (**(code **)(*param_1 + 0x20))();
        if (iVar2 == 0) {
            return 0;
        }
        plVar1 = (longlong *)param_1[4];
        if ((plVar1 != (longlong *)0x0) &&
            (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0), iVar2 == 0)) {
            return 0;
        }
        if ((longlong *)param_1[0x94] != (longlong *)0x0) {
            *(longlong *)param_1[0x94] = param_1[0x95];
        }
        if (param_1[0x95] != 0) {
            *(longlong *)(param_1[0x95] + 0x4a0) = param_1[0x94];
        }
        param_1[0x94] = 0;
        param_1[0x95] = 0;
    }
    return 1;
}



longlong * FUN_14038c7a0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    return param_1 + 0x68;
}



longlong * FUN_14038c7d0(longlong *param_1,int param_2)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    return param_1 + ((longlong)param_2 + 8) * 8;
}



longlong * FUN_14038c810(longlong *param_1,int param_2)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    return param_1 + ((longlong)param_2 + 4) * 8;
}



undefined4 * FUN_14038c850(longlong *param_1,undefined4 *param_2,int param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    if (param_3 == 0) {
        plVar1 = (longlong *)param_1[4];
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x498))(plVar1,param_2);
            return param_2;
        }
    }
    else if ((param_3 == 1) && (plVar1 = (longlong *)param_1[4], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x4b0))(plVar1,param_2);
        return param_2;
    }
    plVar1 = param_1 + ((longlong)param_3 + 8) * 8;
    uVar2 = *(undefined4 *)((longlong)plVar1 + 4);
    uVar3 = *(undefined4 *)(plVar1 + 1);
    uVar4 = *(undefined4 *)((longlong)plVar1 + 0xc);
    *param_2 = *(undefined4 *)plVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_1 = param_1 + ((longlong)param_3 + 8) * 8 + 2;
    uVar2 = *(undefined4 *)((longlong)param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    param_2[4] = *(undefined4 *)param_1;
    param_2[5] = uVar2;
    param_2[6] = uVar3;
    param_2[7] = uVar4;
    return param_2;
}



undefined8
FUN_14038ce10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *)0x0) {
        uVar1 = 0x80070057;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 1;
            *puVar2 = &PTR_LAB_140b5fe88;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
        }
        FUN_14038c490(param_1,param_2,param_3,puVar2);
        *param_4 = puVar2;
        uVar1 = 0;
    }
    return uVar1;
}



undefined4 FUN_14038d0b0(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x20))(param_1,local_18);
    FUN_14038bd40(param_1);
    return *(undefined4 *)(param_1 + 0x73);
}



void FUN_14038d2c0(longlong *param_1,undefined4 param_2)

{
    longlong *plVar1;

    *(undefined4 *)((longlong)param_1 + 0xc4) = param_2;
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x148))();
    if (plVar1 != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014038d2ee. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined4 *)((longlong)param_1 + 0xc4));
        return;
    }
    return;
}



ulonglong FUN_14038d370(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong *plVar3;
    int local_res18 [4];

    if ((((param_3 != 0) &&
          (*(float *)(param_1 + 0x140) <= *(float *)(param_1 + 0x150) &&
           *(float *)(param_1 + 0x150) != *(float *)(param_1 + 0x140))) &&
         (*(float *)(param_1 + 0x144) <= *(float *)(param_1 + 0x154) &&
          *(float *)(param_1 + 0x154) != *(float *)(param_1 + 0x144))) &&
        (*(float *)(param_1 + 0x148) <= *(float *)(param_1 + 0x158) &&
         *(float *)(param_1 + 0x158) != *(float *)(param_1 + 0x148))) {
        if (*(longlong *)(param_1 + 0x470) == 0) {
            plVar1 = (longlong *)(param_1 + 0x478);
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14c0);
            *(longlong **)(param_1 + 0x470) = plVar3;
            *plVar1 = *plVar3;
            *plVar3 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x470) = plVar1;
            }
        }
        plVar1 = *(longlong **)(param_1 + 0x3d8);
        if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x3e4) != 0)) {
            uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res18,param_2);
            if ((int)uVar2 == 0) {
                *(undefined4 *)(param_1 + 0x3e4) = 0;
                uVar2 = uVar2 & 0xffffffffffffff00 | (ulonglong)(local_res18[0] == 0);
                *(int *)(param_1 + 0x3ec) = (int)uVar2;
                return uVar2;
            }
        }
        return (ulonglong)*(uint *)(param_1 + 0x3ec);
    }
    if (*(longlong *)(param_1 + 0x460) == 0) {
        plVar1 = (longlong *)(param_1 + 0x468);
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14b8);
        *(longlong **)(param_1 + 0x460) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x460) = plVar1;
        }
    }
    plVar1 = *(longlong **)(param_1 + 0x3d0);
    if ((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x3e0) != 0)) {
        uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,local_res18,param_2);
        if ((int)uVar2 == 0) {
            *(undefined4 *)(param_1 + 0x3e0) = 0;
            uVar2 = uVar2 & 0xffffffffffffff00 | (ulonglong)(local_res18[0] == 0);
            *(int *)(param_1 + 1000) = (int)uVar2;
            return uVar2;
        }
    }
    if (param_4 != 0) {
        return (ulonglong)*(uint *)(param_1 + 1000);
    }
    return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038d560(longlong param_1,undefined4 *param_2)

{
    float *pfVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    iVar5 = FUN_1407e6af0(param_1 + 0x30,param_2,0x40);
    if (iVar5 != 0) {
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        *(undefined4 *)(param_1 + 0x30) = *param_2;
        *(undefined4 *)(param_1 + 0x34) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x3c) = uVar4;
        uVar2 = param_2[5];
        uVar3 = param_2[6];
        uVar4 = param_2[7];
        *(undefined4 *)(param_1 + 0x40) = param_2[4];
        *(undefined4 *)(param_1 + 0x44) = uVar2;
        *(undefined4 *)(param_1 + 0x48) = uVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
        uVar2 = param_2[9];
        uVar3 = param_2[10];
        uVar4 = param_2[0xb];
        *(undefined4 *)(param_1 + 0x50) = param_2[8];
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        *(undefined4 *)(param_1 + 0x5c) = uVar4;
        uVar2 = param_2[0xd];
        uVar3 = param_2[0xe];
        uVar4 = param_2[0xf];
        *(undefined4 *)(param_1 + 0x60) = param_2[0xc];
        *(undefined4 *)(param_1 + 100) = uVar2;
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        *(float *)(param_1 + 0x80) =
                1.0 / SQRT(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
                           *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) + 0.0);
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            iVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x3b0))();
            if (iVar5 == 0) {
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                        (*(longlong **)(param_1 + 0x20),param_1 + 0x30);
            }
        }
        if (*(longlong *)(param_1 + 0x490) == 0) {
            if (*(int *)(param_1 + 0xe4) != 0) {
                FUN_140367870(*(undefined8 *)(param_1 + 0x10),param_1 + 0x180);
            }
            FUN_14038b6d0(param_1);
        }
    }
    pfVar1 = *(float **)(param_2 + 0x10);
    if (pfVar1 == (float *)0x0) {
        fVar6 = *(float *)(param_1 + 0x60) + _DAT_140c77870;
        fVar7 = *(float *)(param_1 + 100) + fRam0000000140c77874;
        fVar8 = *(float *)(param_1 + 0x68) + fRam0000000140c77878;
        fVar9 = *(float *)(param_1 + 0x6c) + fRam0000000140c7787c;
    }
    else {
        fVar6 = *pfVar1;
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
    }
    *(float *)(param_1 + 0x70) = fVar6;
    *(float *)(param_1 + 0x74) = fVar7;
    *(float *)(param_1 + 0x78) = fVar8;
    *(float *)(param_1 + 0x7c) = fVar9;
    return;
}



void FUN_14038d670(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong *plVar3;

    if (*(longlong **)(param_1 + 0x20) != param_2) {
        if (param_2 != (longlong *)0x0) {
            (**(code **)*param_2)(param_2);
        }
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        }
        *(longlong **)(param_1 + 0x20) = param_2;
        if (param_2 != (longlong *)0x0) {
            iVar2 = (**(code **)(*param_2 + 0x3b0))(param_2);
            if (iVar2 == 0) {
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))();
            }
        }
        if (*(longlong *)(param_1 + 0x490) == 0) {
            plVar1 = (longlong *)(param_1 + 0x498);
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d0);
            *(longlong **)(param_1 + 0x490) = plVar3;
            *plVar1 = *plVar3;
            *plVar3 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x490) = plVar1;
            }
        }
        if (*(longlong *)(param_1 + 0x4a0) == 0) {
            plVar1 = (longlong *)(param_1 + 0x4a8);
            plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x14d8);
            *(longlong **)(param_1 + 0x4a0) = plVar3;
            *plVar1 = *plVar3;
            *plVar3 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x4a0) = plVar1;
            }
        }
        if (*(undefined8 **)(param_1 + 0x410) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x418);
        }
        if (*(longlong *)(param_1 + 0x418) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x418) + 0x410) = *(undefined8 *)(param_1 + 0x410);
        }
        *(undefined8 *)(param_1 + 0x410) = 0;
        *(undefined8 *)(param_1 + 0x418) = 0;
        if (*(undefined8 **)(param_1 + 0x480) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x480) = *(undefined8 *)(param_1 + 0x488);
        }
        if (*(longlong *)(param_1 + 0x488) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x480) = *(undefined8 *)(param_1 + 0x480);
        }
        *(undefined8 *)(param_1 + 0x480) = 0;
        *(undefined8 *)(param_1 + 0x488) = 0;
        FUN_140195d70(param_1 + 0x350);
    }
    return;
}



void FUN_14038d820(longlong *param_1,int param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    undefined4 uVar4;

    if (*(int *)((longlong)param_1 + 0xec) != 1) {
        lVar3 = 0;
        plVar1 = param_1;
        if (param_2 == 0) {
            *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
            param_1[0x1f] = 0;
        }
        else {
            iVar2 = *(int *)(param_1[2] + 0x370);
            uVar4 = FUN_14038c510();
            *(int *)(plVar1 + 0x1f) = iVar2;
            *(int *)((longlong)plVar1 + 0xfc) = iVar2 + param_2;
            *(undefined4 *)(plVar1 + 0x1e) = uVar4;
        }
        *(undefined4 *)((longlong)plVar1 + 0xf4) = 0x3f800000;
        if ((longlong *)plVar1[0x84] != (longlong *)0x0) {
            *(longlong *)plVar1[0x84] = param_1[0x85];
            if (param_1[0x85] != 0) {
                *(longlong *)(param_1[0x85] + 0x420) = param_1[0x84];
            }
            param_1[0x84] = lVar3;
            param_1[0x85] = lVar3;
            (**(code **)(*param_1 + 8))(param_1);
        }
        *(undefined4 *)((longlong)param_1 + 0xec) = 1;
    }
    return;
}



void FUN_14038d8e0(undefined8 *param_1,int param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    undefined4 uVar5;

    if (*(int *)((longlong)param_1 + 0xec) != 0) {
        puVar2 = param_1;
        if (param_2 == 0) {
            param_1[0x1e] = 0;
            param_1[0x1f] = 0;
        }
        else {
            iVar4 = *(int *)(param_1[2] + 0x370);
            uVar5 = FUN_14038c510();
            *(undefined4 *)((longlong)puVar2 + 0xf4) = 0;
            *(int *)(puVar2 + 0x1f) = iVar4;
            *(int *)((longlong)puVar2 + 0xfc) = iVar4 + param_2;
            *(undefined4 *)(puVar2 + 0x1e) = uVar5;
        }
        if (puVar2[0x84] == 0) {
            plVar1 = param_1 + 0x85;
            plVar3 = (longlong *)(puVar2[2] + 0x1498);
            param_1[0x84] = plVar3;
            *plVar1 = *plVar3;
            *plVar3 = (longlong)param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x420) = plVar1;
            }
            (**(code **)*param_1)(param_1);
        }
        *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    }
    return;
}



void FUN_14038d9a0(longlong *param_1)

{
    int iVar1;

    if ((longlong *)param_1[4] != (longlong *)0x0) {
        iVar1 = (**(code **)(*(longlong *)param_1[4] + 0x538))();
        if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x120))(param_1);
            if ((iVar1 != 0) && (param_1[0x92] == 0)) {
                FUN_140367870(param_1[2],param_1 + 0x30);
                return;
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14038da00(undefined8 *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    longlong *plVar7;
    int iVar8;

    *param_1 = &PTR_LAB_140b65e90;
    param_1[0x6b] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined (*) [16])(param_1 + 0x5e) = ZEXT816(0);
    uVar4 = uRam0000000140c798cc;
    uVar3 = uRam0000000140c798c8;
    uVar2 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x60) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0x304) = uVar2;
    *(undefined4 *)(param_1 + 0x61) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uVar4;
    uVar4 = uRam0000000140c798dc;
    uVar3 = uRam0000000140c798d8;
    uVar2 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x62) = _DAT_140c798d0;
    *(undefined4 *)((longlong)param_1 + 0x314) = uVar2;
    *(undefined4 *)(param_1 + 99) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x31c) = uVar4;
    iVar6 = (int)_DAT_140c784f0;
    iVar5 = (int)_DAT_140c784e4;
    iVar8 = (int)_DAT_140c784f4;
    *(int *)(param_1 + 0x68) = (int)_DAT_140c784e0;
    *(int *)((longlong)param_1 + 0x344) = iVar5;
    *(int *)(param_1 + 0x69) = iVar6;
    *(int *)((longlong)param_1 + 0x34c) = iVar8;
    param_1[0x6a] = 0;
    plVar7 = (longlong *)(param_1[2] + 0x14e0);
    *(undefined4 *)(param_1 + 0x6c) = 1;
    if (param_1[0x6d] == 0) {
        param_1[0x6d] = plVar7;
        plVar1 = param_1 + 0x6e;
        *plVar1 = *plVar7;
        *plVar7 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x368) = plVar1;
        }
    }
    return param_1;
}



void FUN_14038db00(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b65e90;
    if (param_1[0x6a] != 0) {
        FUN_1403762e0();
    }
    lVar1 = param_1[0x6b];
    while (lVar1 != 0) {
        lVar1 = param_1[0x6b];
        if (lVar1 != 0) {
            FUN_14038ff70(lVar1);
            FUN_14018b900(lVar1);
        }
        lVar1 = param_1[0x6b];
    }
    if ((undefined8 *)param_1[0x6d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6d] = param_1[0x6e];
    }
    if (param_1[0x6e] != 0) {
        *(undefined8 *)(param_1[0x6e] + 0x368) = param_1[0x6d];
    }
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    if ((undefined8 *)param_1[0x71] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x71] = param_1[0x72];
    }
    if (param_1[0x72] != 0) {
        *(undefined8 *)(param_1[0x72] + 0x388) = param_1[0x71];
    }
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    if ((undefined8 *)param_1[0x6f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6f] = param_1[0x70];
    }
    if (param_1[0x70] != 0) {
        *(undefined8 *)(param_1[0x70] + 0x378) = param_1[0x6f];
    }
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    if ((undefined8 *)param_1[0x6d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x6d] = param_1[0x6e];
    }
    if (param_1[0x6e] != 0) {
        *(undefined8 *)(param_1[0x6e] + 0x368) = param_1[0x6d];
    }
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    if (param_1[0x6b] != 0) {
        FUN_1401a4a00(param_1 + 0x6b);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038dc80(longlong *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    uint in_EAX;
    uint uVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int *piVar7;
    undefined8 *puVar8;
    undefined8 uVar9;
    int iVar10;
    longlong **pplVar11;
    int iVar12;
    int *piVar13;
    longlong **pplVar14;
    int iVar15;
    int iVar16;
    ulonglong uVar17;
    undefined auVar18 [16];
    undefined auVar19 [16];
    float fVar20;
    undefined auVar22 [16];
    int local_res8;
    int local_resc;
    longlong *local_res10;
    float local_58;
    float fStack84;
    float fStack80;
    float fStack76;
    undefined local_48 [16];
    undefined local_38 [16];
    undefined auVar21 [16];

    if (param_1[0x6f] != 0) {
        fVar20 = (DAT_140c43fb8 * *(float *)(param_1 + 0x60) + 0.5) * 2048.0;
        auVar21 = ZEXT416((uint)fVar20) & (undefined  [16])0xffffffffffffffff;
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,ZEXT816(SUB168(auVar21,0) | SUB168(auVar21,0) << 0x20));
            in_EAX = uVar3 & 1;
            auVar21 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 0x61))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar22 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar22,0) | SUB168(auVar22,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            in_EAX = uVar3 & 1;
            auVar22 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 0x62))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar19 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            in_EAX = uVar3 & 1;
            auVar19 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 99))) &
                  (undefined  [16])0xffffffffffffffff;
        iVar10 = (int)SUB164(auVar19,0) + 1;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar19 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar12 = (int)fVar20;
        if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            auVar19 = ZEXT416((uint)(float)(iVar12 - (uVar3 & 1)));
        }
        iVar12 = (int)SUB164(auVar19,0) + 1;
        if (DAT_140c445b0 < iVar10) {
            iVar10 = DAT_140c445b0;
        }
        if (DAT_140c445b4 < iVar12) {
            iVar12 = DAT_140c445b4;
        }
        iVar16 = (int)SUB164(auVar21,0);
        if ((int)SUB164(auVar21,0) < DAT_140c445a8) {
            iVar16 = DAT_140c445a8;
        }
        iVar15 = (int)SUB164(auVar22,0);
        if ((int)SUB164(auVar22,0) < DAT_140c445ac) {
            iVar15 = DAT_140c445ac;
        }
        if ((iVar10 <= iVar16) || (iVar12 <= iVar15)) {
            iVar10 = DAT_140c784c8;
            iVar12 = DAT_140c784cc;
            iVar15 = DAT_140c784c4;
            iVar16 = DAT_140c784c0;
        }
        uVar17 = 0;
        if ((param_1[0x68] != CONCAT44(iVar15,iVar16)) || (param_1[0x69] != CONCAT44(iVar12,iVar10))) {
            *(int *)(param_1 + 0x68) = iVar16;
            *(int *)((longlong)param_1 + 0x344) = iVar15;
            *(int *)(param_1 + 0x69) = iVar10;
            *(int *)((longlong)param_1 + 0x34c) = iVar12;
            if (param_1[0x6a] != 0) {
                FUN_1403762e0();
            }
            param_1[0x6a] = 0;
            if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x69)) {
                if (*(int *)((longlong)param_1 + 0x344) < *(int *)((longlong)param_1 + 0x34c)) {
                    iVar10 = (*(int *)(param_1 + 0x69) - *(int *)(param_1 + 0x68)) *
                             (*(int *)((longlong)param_1 + 0x34c) - *(int *)((longlong)param_1 + 0x344));
                    uVar5 = SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)iVar10),0);
                    if (SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)iVar10) >> 0x40,0) != 0) {
                        uVar5 = 0xffffffffffffffff;
                    }
                    lVar6 = uVar5 + 8;
                    if (0xfffffffffffffff7 < uVar5) {
                        lVar6 = -1;
                    }
                    piVar7 = (int *)FUN_14018b280(lVar6,0);
                    if (piVar7 == (int *)0x0) {
                        piVar13 = (int *)0x0;
                    }
                    else {
                        iVar12 = iVar10 + -1;
                        *piVar7 = iVar10;
                        piVar13 = piVar7 + 2;
                        if (-1 < iVar12) {
                            puVar8 = (undefined8 *)(piVar7 + 6);
                            do {
                                iVar12 = iVar12 + -1;
                                *puVar8 = 0;
                                puVar8[1] = 0;
                                puVar8[-2] = 0;
                                puVar8 = puVar8 + 4;
                            } while (-1 < iVar12);
                        }
                    }
                    param_1[0x6a] = (longlong)piVar13;
                    local_resc = *(int *)((longlong)param_1 + 0x344);
                    if (local_resc < *(int *)((longlong)param_1 + 0x34c)) {
                        do {
                            local_res8 = *(int *)(param_1 + 0x68);
                            uVar5 = uVar17;
                            if (local_res8 < *(int *)(param_1 + 0x69)) {
                                do {
                                    local_res10 = (longlong *)0x0;
                                    if ((((DAT_140c44530 <= local_res8) && (local_res8 < DAT_140c44538)) &&
                                         (DAT_140c44534 <= local_resc)) && (local_resc < DAT_140c4453c)) {
                                        FUN_14035bec0(param_1[2],&local_res8,&local_res10);
                                    }
                                    plVar2 = local_res10;
                                    uVar17 = (ulonglong)((int)uVar5 + 1);
                                    pplVar14 = (longlong **)(uVar5 * 0x20 + param_1[0x6a]);
                                    *pplVar14 = local_res10;
                                    pplVar14[1] = param_1;
                                    (**(code **)*local_res10)(local_res10);
                                    pplVar11 = (longlong **)(*pplVar14 + 9);
                                    if (pplVar14[2] == (longlong *)0x0) {
                                        pplVar14[2] = (longlong *)pplVar11;
                                        pplVar1 = pplVar14 + 3;
                                        *pplVar1 = *pplVar11;
                                        *pplVar11 = (longlong *)pplVar14;
                                        if (*pplVar1 != (longlong *)0x0) {
                                            (*pplVar1)[2] = (longlong)pplVar1;
                                        }
                                    }
                                    (**(code **)(*plVar2 + 8))(plVar2);
                                    local_res8 = local_res8 + 1;
                                    uVar5 = uVar17;
                                } while (local_res8 < *(int *)(param_1 + 0x69));
                            }
                            local_resc = local_resc + 1;
                        } while (local_resc < *(int *)((longlong)param_1 + 0x34c));
                    }
                }
            }
        }
        lVar6 = param_1[0x6b];
        while (lVar6 != 0) {
            lVar6 = param_1[0x6b];
            if (lVar6 != 0) {
                FUN_14038ff70(lVar6);
                FUN_14018b900(lVar6,0);
            }
            lVar6 = param_1[0x6b];
        }
        auVar21 = *(undefined (*) [16])(param_1 + 0x5e);
        local_48 = minps(*(undefined (*) [16])(param_1 + 0x60),auVar21);
        local_38 = maxps(*(undefined (*) [16])(param_1 + 0x62),auVar21);
        local_58 = _DAT_140c77870 + SUB164(auVar21,0);
        fStack84 = fRam0000000140c77874 + SUB164(auVar21 >> 0x20,0);
        fStack80 = fRam0000000140c77878 + SUB164(auVar21 >> 0x40,0);
        fStack76 = fRam0000000140c7787c + SUB164(auVar21 >> 0x60,0);
        uVar9 = FUN_1403589f0(param_1[2],&local_58);
        uVar4 = FUN_140358d20(param_1[2],uVar9,local_48);
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        for (plVar2 = *(longlong **)(param_1[2] + 0x1550); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[0x27]) {
            iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
            if ((iVar10 == 0) && (lVar6 = FUN_14018b280(0x30,0), lVar6 != 0)) {
                FUN_14038feb0(lVar6,plVar2,param_1);
            }
        }
        if ((longlong *)param_1[0x6f] != (longlong *)0x0) {
            *(longlong *)param_1[0x6f] = param_1[0x70];
        }
        if (param_1[0x70] != 0) {
            *(longlong *)(param_1[0x70] + 0x378) = param_1[0x6f];
        }
        param_1[0x6f] = 0;
        param_1[0x70] = 0;
    }
    return;
}



int FUN_14038e150(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14038db00();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_14038e190(longlong *param_1)

{
    FUN_14038e1c0(param_1 + 4);
    // WARNING: Could not recover jumptable at 0x00014038e1ad. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
}



undefined4 * FUN_14038e1c0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;

    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    lVar8 = 2;
    *param_1 = *param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    lVar9 = 2;
    param_1[4] = param_2[4];
    param_1[5] = uVar3;
    param_1[6] = uVar4;
    param_1[7] = uVar5;
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    uVar5 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = uVar5;
    uVar3 = param_2[0xd];
    uVar4 = param_2[0xe];
    uVar5 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
    uVar3 = param_2[0x11];
    uVar4 = param_2[0x12];
    uVar5 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar4;
    param_1[0x13] = uVar5;
    lVar7 = (longlong)param_1 - (longlong)param_2;
    puVar6 = param_2 + 0x18;
    do {
        uVar3 = puVar6[-3];
        uVar4 = puVar6[-2];
        uVar5 = puVar6[-1];
        puVar2 = puVar6 + 0x10;
        puVar1 = (undefined4 *)(&DAT_ffffffffffffffb0 + lVar7 + (longlong)puVar2);
        *puVar1 = puVar6[-4];
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        puVar1 = (undefined4 *)(lVar7 + -0x40 + (longlong)puVar2);
        *puVar1 = *puVar6;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar1 = (undefined4 *)(&DAT_ffffffffffffffd0 + lVar7 + (longlong)puVar2);
        *puVar1 = puVar6[4];
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        uVar3 = puVar6[9];
        uVar4 = puVar6[10];
        uVar5 = puVar6[0xb];
        puVar1 = (undefined4 *)(lVar7 + -0x20 + (longlong)puVar2);
        *puVar1 = puVar6[8];
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        lVar9 = lVar9 + -1;
        puVar6 = puVar2;
    } while (lVar9 != 0);
    uVar3 = param_2[0x35];
    uVar4 = param_2[0x36];
    uVar5 = param_2[0x37];
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = uVar3;
    param_1[0x36] = uVar4;
    param_1[0x37] = uVar5;
    uVar3 = param_2[0x39];
    uVar4 = param_2[0x3a];
    uVar5 = param_2[0x3b];
    param_1[0x38] = param_2[0x38];
    param_1[0x39] = uVar3;
    param_1[0x3a] = uVar4;
    param_1[0x3b] = uVar5;
    uVar3 = param_2[0x3d];
    uVar4 = param_2[0x3e];
    uVar5 = param_2[0x3f];
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3d] = uVar3;
    param_1[0x3e] = uVar4;
    param_1[0x3f] = uVar5;
    uVar3 = param_2[0x41];
    uVar4 = param_2[0x42];
    uVar5 = param_2[0x43];
    param_1[0x40] = param_2[0x40];
    param_1[0x41] = uVar3;
    param_1[0x42] = uVar4;
    param_1[0x43] = uVar5;
    uVar3 = param_2[0x45];
    uVar4 = param_2[0x46];
    uVar5 = param_2[0x47];
    param_1[0x44] = param_2[0x44];
    param_1[0x45] = uVar3;
    param_1[0x46] = uVar4;
    param_1[0x47] = uVar5;
    uVar3 = param_2[0x49];
    uVar4 = param_2[0x4a];
    uVar5 = param_2[0x4b];
    param_1[0x48] = param_2[0x48];
    param_1[0x49] = uVar3;
    param_1[0x4a] = uVar4;
    param_1[0x4b] = uVar5;
    uVar3 = param_2[0x4d];
    uVar4 = param_2[0x4e];
    uVar5 = param_2[0x4f];
    param_1[0x4c] = param_2[0x4c];
    param_1[0x4d] = uVar3;
    param_1[0x4e] = uVar4;
    param_1[0x4f] = uVar5;
    uVar3 = param_2[0x51];
    uVar4 = param_2[0x52];
    uVar5 = param_2[0x53];
    param_1[0x50] = param_2[0x50];
    param_1[0x51] = uVar3;
    param_1[0x52] = uVar4;
    param_1[0x53] = uVar5;
    puVar6 = param_2 + 0x58;
    do {
        uVar3 = puVar6[-3];
        uVar4 = puVar6[-2];
        uVar5 = puVar6[-1];
        puVar2 = (undefined4 *)((longlong)puVar6 + lVar7 + -0x10);
        *puVar2 = puVar6[-4];
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        puVar2 = (undefined4 *)((longlong)puVar6 + lVar7);
        *puVar2 = *puVar6;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar2 = (undefined4 *)((longlong)puVar6 + lVar7 + 0x10);
        *puVar2 = puVar6[4];
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = puVar6[9];
        uVar4 = puVar6[10];
        uVar5 = puVar6[0xb];
        puVar2 = (undefined4 *)((longlong)puVar6 + lVar7 + 0x20);
        *puVar2 = puVar6[8];
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 0x10;
    } while (lVar8 != 0);
    uVar3 = param_2[0x75];
    uVar4 = param_2[0x76];
    uVar5 = param_2[0x77];
    param_1[0x74] = param_2[0x74];
    param_1[0x75] = uVar3;
    param_1[0x76] = uVar4;
    param_1[0x77] = uVar5;
    uVar3 = param_2[0x79];
    uVar4 = param_2[0x7a];
    uVar5 = param_2[0x7b];
    param_1[0x78] = param_2[0x78];
    param_1[0x79] = uVar3;
    param_1[0x7a] = uVar4;
    param_1[0x7b] = uVar5;
    uVar3 = param_2[0x7d];
    uVar4 = param_2[0x7e];
    uVar5 = param_2[0x7f];
    param_1[0x7c] = param_2[0x7c];
    param_1[0x7d] = uVar3;
    param_1[0x7e] = uVar4;
    param_1[0x7f] = uVar5;
    uVar3 = param_2[0x81];
    uVar4 = param_2[0x82];
    uVar5 = param_2[0x83];
    param_1[0x80] = param_2[0x80];
    param_1[0x81] = uVar3;
    param_1[0x82] = uVar4;
    param_1[0x83] = uVar5;
    uVar3 = param_2[0x85];
    uVar4 = param_2[0x86];
    uVar5 = param_2[0x87];
    param_1[0x84] = param_2[0x84];
    param_1[0x85] = uVar3;
    param_1[0x86] = uVar4;
    param_1[0x87] = uVar5;
    uVar3 = param_2[0x89];
    uVar4 = param_2[0x8a];
    uVar5 = param_2[0x8b];
    param_1[0x88] = param_2[0x88];
    param_1[0x89] = uVar3;
    param_1[0x8a] = uVar4;
    param_1[0x8b] = uVar5;
    uVar3 = param_2[0x8d];
    uVar4 = param_2[0x8e];
    uVar5 = param_2[0x8f];
    param_1[0x8c] = param_2[0x8c];
    param_1[0x8d] = uVar3;
    param_1[0x8e] = uVar4;
    param_1[0x8f] = uVar5;
    uVar3 = param_2[0x91];
    uVar4 = param_2[0x92];
    uVar5 = param_2[0x93];
    param_1[0x90] = param_2[0x90];
    param_1[0x91] = uVar3;
    param_1[0x92] = uVar4;
    param_1[0x93] = uVar5;
    uVar3 = param_2[0x95];
    uVar4 = param_2[0x96];
    uVar5 = param_2[0x97];
    param_1[0x94] = param_2[0x94];
    param_1[0x95] = uVar3;
    param_1[0x96] = uVar4;
    param_1[0x97] = uVar5;
    param_1[0x98] = param_2[0x98];
    param_1[0x99] = param_2[0x99];
    param_1[0x9a] = param_2[0x9a];
    param_1[0x9b] = param_2[0x9b];
    param_1[0x9c] = param_2[0x9c];
    param_1[0x9d] = param_2[0x9d];
    param_1[0x9e] = param_2[0x9e];
    param_1[0x9f] = param_2[0x9f];
    param_1[0xa0] = param_2[0xa0];
    param_1[0xa1] = param_2[0xa1];
    uVar3 = param_2[0xa5];
    uVar4 = param_2[0xa6];
    uVar5 = param_2[0xa7];
    param_1[0xa4] = param_2[0xa4];
    param_1[0xa5] = uVar3;
    param_1[0xa6] = uVar4;
    param_1[0xa7] = uVar5;
    uVar3 = param_2[0xa9];
    uVar4 = param_2[0xaa];
    uVar5 = param_2[0xab];
    param_1[0xa8] = param_2[0xa8];
    param_1[0xa9] = uVar3;
    param_1[0xaa] = uVar4;
    param_1[0xab] = uVar5;
    *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
    *(undefined8 *)(param_1 + 0xae) = *(undefined8 *)(param_2 + 0xae);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xb2) = *(undefined8 *)(param_2 + 0xb2);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14038e5b0(undefined8 *param_1,undefined8 param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    longlong *plVar7;
    int iVar8;

    *param_1 = &PTR_LAB_140b65ed0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x37] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 1) = 1;
    uVar4 = uRam0000000140c798cc;
    uVar3 = uRam0000000140c798c8;
    uVar2 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x2c) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
    *(undefined4 *)(param_1 + 0x2d) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
    uVar4 = uRam0000000140c798dc;
    uVar3 = uRam0000000140c798d8;
    uVar2 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x2e) = _DAT_140c798d0;
    *(undefined4 *)((longlong)param_1 + 0x174) = uVar2;
    *(undefined4 *)(param_1 + 0x2f) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x17c) = uVar4;
    iVar6 = (int)_DAT_140c784f0;
    iVar5 = (int)_DAT_140c784e4;
    iVar8 = (int)_DAT_140c784f4;
    *(int *)(param_1 + 0x34) = (int)_DAT_140c784e0;
    *(int *)((longlong)param_1 + 0x1a4) = iVar5;
    *(int *)(param_1 + 0x35) = iVar6;
    *(int *)((longlong)param_1 + 0x1ac) = iVar8;
    param_1[0x36] = 0;
    plVar7 = (longlong *)(param_1[2] + 0x14f8);
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (param_1[0x39] == 0) {
        param_1[0x39] = plVar7;
        plVar1 = param_1 + 0x3a;
        *plVar1 = *plVar7;
        *plVar7 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x1c8) = plVar1;
        }
    }
    return param_1;
}



void FUN_14038e6d0(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b65ed0;
    if (param_1[0x36] != 0) {
        FUN_1403762e0();
    }
    lVar1 = param_1[0x37];
    while (lVar1 != 0) {
        lVar1 = param_1[0x37];
        if (lVar1 != 0) {
            FUN_140390120(lVar1);
            FUN_14018b900(lVar1);
        }
        lVar1 = param_1[0x37];
    }
    if ((undefined8 *)param_1[0x39] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x39] = param_1[0x3a];
    }
    if (param_1[0x3a] != 0) {
        *(undefined8 *)(param_1[0x3a] + 0x1c8) = param_1[0x39];
    }
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    if ((undefined8 *)param_1[0x3f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3f] = param_1[0x40];
    }
    if (param_1[0x40] != 0) {
        *(undefined8 *)(param_1[0x40] + 0x1f8) = param_1[0x3f];
    }
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    if ((undefined8 *)param_1[0x3d] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3d] = param_1[0x3e];
    }
    if (param_1[0x3e] != 0) {
        *(undefined8 *)(param_1[0x3e] + 0x1e8) = param_1[0x3d];
    }
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    if ((undefined8 *)param_1[0x3b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3b] = param_1[0x3c];
    }
    if (param_1[0x3c] != 0) {
        *(undefined8 *)(param_1[0x3c] + 0x1d8) = param_1[0x3b];
    }
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    if ((undefined8 *)param_1[0x39] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x39] = param_1[0x3a];
    }
    if (param_1[0x3a] != 0) {
        *(undefined8 *)(param_1[0x3a] + 0x1c8) = param_1[0x39];
    }
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    if (param_1[0x37] != 0) {
        FUN_1401a4a00(param_1 + 0x37);
    }
    if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2b] + 8))();
    }
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2a] + 8))();
    }
    return;
}



undefined8
FUN_14038e8b0(longlong *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
              undefined4 param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    FUN_1407e4830(param_1 + 4,0,0x130);
    *(undefined4 *)(param_1 + 4) = 0xbf000000;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xbf000000;
    *(undefined4 *)(param_1 + 5) = 0xbf000000;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xbf000000;
    *(undefined4 *)(param_1 + 6) = 0x3f000000;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f000000;
    *(undefined4 *)(param_1 + 7) = 0x3f000000;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 8) = *param_2;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 9) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    *(undefined4 *)(param_1 + 10) = param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0xb) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    *(undefined4 *)(param_1 + 0xc) = param_2[8];
    *(undefined4 *)((longlong)param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0xd) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    *(undefined4 *)(param_1 + 0xe) = param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0xf) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 300) = param_5;
    *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0x3e800000;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x26) = param_4;
    param_1[0x28] = param_3;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14038e9a0(longlong *param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    uint in_EAX;
    uint uVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int *piVar7;
    undefined8 *puVar8;
    undefined8 uVar9;
    int iVar10;
    longlong **pplVar11;
    int iVar12;
    int *piVar13;
    ulonglong uVar14;
    longlong **pplVar15;
    int iVar16;
    int iVar17;
    undefined auVar18 [16];
    undefined auVar19 [16];
    float fVar20;
    undefined auVar22 [16];
    int local_res8;
    int local_resc;
    longlong *local_res10;
    float local_38;
    float fStack52;
    float fStack48;
    float fStack44;
    undefined auVar21 [16];

    if (param_1[0x3b] != 0) {
        fVar20 = (DAT_140c43fb8 * *(float *)(param_1 + 0x2c) + 0.5) * 2048.0;
        auVar21 = ZEXT416((uint)fVar20) & (undefined  [16])0xffffffffffffffff;
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,ZEXT816(SUB168(auVar21,0) | SUB168(auVar21,0) << 0x20));
            in_EAX = uVar3 & 1;
            auVar21 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 0x2d))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar22 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar22,0) | SUB168(auVar22,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            in_EAX = uVar3 & 1;
            auVar22 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 0x2e))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar19 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar10 = (int)fVar20;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            in_EAX = uVar3 & 1;
            auVar19 = ZEXT416((uint)(float)(iVar10 - in_EAX));
        }
        auVar18 = ZEXT416((uint)(DAT_140c43fb8 * *(float *)(param_1 + 0x2f))) &
                  (undefined  [16])0xffffffffffffffff;
        iVar10 = (int)SUB164(auVar19,0) + 1;
        fVar20 = (SUB164(auVar18,0) + 0.5) * 2048.0;
        auVar19 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar20);
        iVar16 = (int)fVar20;
        if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar20)) {
            uVar3 = movmskps(in_EAX,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                             SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                                    (undefined  [16])0xffffffffffffffff);
            auVar19 = ZEXT416((uint)(float)(iVar16 - (uVar3 & 1)));
        }
        iVar16 = (int)SUB164(auVar19,0) + 1;
        if (DAT_140c445c8 < iVar10) {
            iVar10 = DAT_140c445c8;
        }
        if (DAT_140c445cc < iVar16) {
            iVar16 = DAT_140c445cc;
        }
        iVar17 = (int)SUB164(auVar21,0);
        if ((int)SUB164(auVar21,0) < DAT_140c445c0) {
            iVar17 = DAT_140c445c0;
        }
        iVar12 = (int)SUB164(auVar22,0);
        if ((int)SUB164(auVar22,0) < DAT_140c445c4) {
            iVar12 = DAT_140c445c4;
        }
        if ((iVar10 <= iVar17) || (iVar16 <= iVar12)) {
            iVar10 = DAT_140c784c8;
            iVar12 = DAT_140c784c4;
            iVar16 = DAT_140c784cc;
            iVar17 = DAT_140c784c0;
        }
        uVar14 = 0;
        if ((param_1[0x34] != CONCAT44(iVar12,iVar17)) || (param_1[0x35] != CONCAT44(iVar16,iVar10))) {
            *(int *)(param_1 + 0x34) = iVar17;
            *(int *)((longlong)param_1 + 0x1a4) = iVar12;
            *(int *)(param_1 + 0x35) = iVar10;
            *(int *)((longlong)param_1 + 0x1ac) = iVar16;
            if (param_1[0x36] != 0) {
                FUN_1403762e0();
            }
            param_1[0x36] = 0;
            if (*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x35)) {
                if (*(int *)((longlong)param_1 + 0x1a4) < *(int *)((longlong)param_1 + 0x1ac)) {
                    iVar10 = (*(int *)(param_1 + 0x35) - *(int *)(param_1 + 0x34)) *
                             (*(int *)((longlong)param_1 + 0x1ac) - *(int *)((longlong)param_1 + 0x1a4));
                    uVar5 = SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)iVar10),0);
                    if (SUB168(ZEXT816(0x20) * ZEXT816((ulonglong)(longlong)iVar10) >> 0x40,0) != 0) {
                        uVar5 = 0xffffffffffffffff;
                    }
                    lVar6 = uVar5 + 8;
                    if (0xfffffffffffffff7 < uVar5) {
                        lVar6 = -1;
                    }
                    piVar7 = (int *)FUN_14018b280(lVar6,0);
                    if (piVar7 == (int *)0x0) {
                        piVar13 = (int *)0x0;
                    }
                    else {
                        iVar16 = iVar10 + -1;
                        *piVar7 = iVar10;
                        piVar13 = piVar7 + 2;
                        if (-1 < iVar16) {
                            puVar8 = (undefined8 *)(piVar7 + 6);
                            do {
                                iVar16 = iVar16 + -1;
                                *puVar8 = 0;
                                puVar8[1] = 0;
                                puVar8[-2] = 0;
                                puVar8 = puVar8 + 4;
                            } while (-1 < iVar16);
                        }
                    }
                    param_1[0x36] = (longlong)piVar13;
                    local_resc = *(int *)((longlong)param_1 + 0x1a4);
                    if (local_resc < *(int *)((longlong)param_1 + 0x1ac)) {
                        do {
                            local_res8 = *(int *)(param_1 + 0x34);
                            uVar5 = uVar14;
                            if (local_res8 < *(int *)(param_1 + 0x35)) {
                                do {
                                    local_res10 = (longlong *)0x0;
                                    if ((((DAT_140c44530 <= local_res8) && (local_res8 < DAT_140c44538)) &&
                                         (DAT_140c44534 <= local_resc)) && (local_resc < DAT_140c4453c)) {
                                        FUN_14035bec0(param_1[2],&local_res8,&local_res10);
                                    }
                                    plVar2 = local_res10;
                                    uVar14 = (ulonglong)((int)uVar5 + 1);
                                    pplVar15 = (longlong **)(uVar5 * 0x20 + param_1[0x36]);
                                    *pplVar15 = local_res10;
                                    pplVar15[1] = param_1;
                                    (**(code **)*local_res10)(local_res10);
                                    pplVar11 = (longlong **)(*pplVar15 + 10);
                                    if (pplVar15[2] == (longlong *)0x0) {
                                        pplVar15[2] = (longlong *)pplVar11;
                                        pplVar1 = pplVar15 + 3;
                                        *pplVar1 = *pplVar11;
                                        *pplVar11 = (longlong *)pplVar15;
                                        if (*pplVar1 != (longlong *)0x0) {
                                            (*pplVar1)[2] = (longlong)pplVar1;
                                        }
                                    }
                                    (**(code **)(*plVar2 + 8))(plVar2);
                                    local_res8 = local_res8 + 1;
                                    uVar5 = uVar14;
                                } while (local_res8 < *(int *)(param_1 + 0x35));
                            }
                            local_resc = local_resc + 1;
                        } while (local_resc < *(int *)((longlong)param_1 + 0x1ac));
                    }
                }
            }
        }
        lVar6 = param_1[0x37];
        while (lVar6 != 0) {
            lVar6 = param_1[0x37];
            if (lVar6 != 0) {
                FUN_140390120(lVar6);
                FUN_14018b900(lVar6,0);
            }
            lVar6 = param_1[0x37];
        }
        local_38 = *(float *)(param_1 + 0xe) + _DAT_140c77870;
        fStack52 = *(float *)((longlong)param_1 + 0x74) + fRam0000000140c77874;
        fStack48 = *(float *)(param_1 + 0xf) + fRam0000000140c77878;
        fStack44 = *(float *)((longlong)param_1 + 0x7c) + fRam0000000140c7787c;
        uVar9 = FUN_1403589f0(param_1[2],&local_38);
        uVar4 = FUN_140358d20(param_1[2],uVar9,param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        for (plVar2 = *(longlong **)(param_1[2] + 0x1550); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[0x27]) {
            iVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
            if ((iVar10 == 0) && (lVar6 = FUN_14018b280(0x30,0), lVar6 != 0)) {
                FUN_140390060(lVar6,plVar2,param_1);
            }
        }
        if ((longlong *)param_1[0x3b] != (longlong *)0x0) {
            *(longlong *)param_1[0x3b] = param_1[0x3c];
        }
        if (param_1[0x3c] != 0) {
            *(longlong *)(param_1[0x3c] + 0x1d8) = param_1[0x3b];
        }
        param_1[0x3b] = 0;
        param_1[0x3c] = 0;
    }
    return;
}



int FUN_14038ee60(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14038e6d0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_14038eea0(longlong *param_1)

{
    FUN_14038eed0(param_1 + 4);
    // WARNING: Could not recover jumptable at 0x00014038eebd. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
}



undefined4 * FUN_14038eed0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x16];
    uVar3 = param_2[0x17];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar3;
    uVar1 = param_2[0x19];
    uVar2 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar1;
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
    uVar1 = param_2[0x1d];
    uVar2 = param_2[0x1e];
    uVar3 = param_2[0x1f];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar1;
    param_1[0x1e] = uVar2;
    param_1[0x1f] = uVar3;
    uVar1 = param_2[0x21];
    uVar2 = param_2[0x22];
    uVar3 = param_2[0x23];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = uVar1;
    param_1[0x22] = uVar2;
    param_1[0x23] = uVar3;
    uVar1 = param_2[0x25];
    uVar2 = param_2[0x26];
    uVar3 = param_2[0x27];
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = uVar1;
    param_1[0x26] = uVar2;
    param_1[0x27] = uVar3;
    uVar1 = param_2[0x29];
    uVar2 = param_2[0x2a];
    uVar3 = param_2[0x2b];
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = uVar1;
    param_1[0x2a] = uVar2;
    param_1[0x2b] = uVar3;
    uVar1 = param_2[0x2d];
    uVar2 = param_2[0x2e];
    uVar3 = param_2[0x2f];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = uVar1;
    param_1[0x2e] = uVar2;
    param_1[0x2f] = uVar3;
    uVar1 = param_2[0x31];
    uVar2 = param_2[0x32];
    uVar3 = param_2[0x33];
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = uVar1;
    param_1[0x32] = uVar2;
    param_1[0x33] = uVar3;
    uVar1 = param_2[0x35];
    uVar2 = param_2[0x36];
    uVar3 = param_2[0x37];
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = uVar1;
    param_1[0x36] = uVar2;
    param_1[0x37] = uVar3;
    uVar1 = param_2[0x39];
    uVar2 = param_2[0x3a];
    uVar3 = param_2[0x3b];
    param_1[0x38] = param_2[0x38];
    param_1[0x39] = uVar1;
    param_1[0x3a] = uVar2;
    param_1[0x3b] = uVar3;
    param_1[0x3c] = param_2[0x3c];
    param_1[0x3d] = param_2[0x3d];
    param_1[0x3e] = param_2[0x3e];
    param_1[0x3f] = param_2[0x3f];
    param_1[0x40] = param_2[0x40];
    param_1[0x41] = param_2[0x41];
    param_1[0x42] = param_2[0x42];
    param_1[0x43] = param_2[0x43];
    param_1[0x44] = param_2[0x44];
    param_1[0x45] = param_2[0x45];
    param_1[0x46] = param_2[0x46];
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14038f020(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    uint uVar4;
    longlong *plVar5;
    float fVar6;
    float in_xmmTmp2_Dd;
    undefined auStack296 [32];
    undefined *local_108;
    undefined *local_100;
    undefined local_f8 [8];
    undefined4 uStack240;
    float fStack236;
    float local_e8;
    float fStack228;
    undefined4 uStack224;
    float fStack220;
    undefined local_d8 [8];
    undefined4 uStack208;
    undefined4 uStack204;
    undefined local_c8 [16];
    longlong local_b8 [2];
    undefined local_a8 [64];
    undefined *local_68;
    undefined *local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x124);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x124) ^ 0x80000000;
    uVar3 = FUN_140252a70(param_1 + 0x20,local_f8);
    uVar4 = movmskps(uVar3,CONCAT412(-(uint)(*(float *)(param_1 + 0x16c) != in_xmmTmp2_Dd),
                                     CONCAT48(-(uint)(*(float *)(param_1 + 0x168) != fStack236),
                                              CONCAT44(-(uint)(*(float *)(param_1 + 0x164) !=
                                                               local_f8._4_4_),
                                                       -(uint)(*(float *)(param_1 + 0x160) !=
                                                               local_f8._0_4_)))));
    if ((char)(uVar4 & 7) == '\0') {
        uVar4 = movmskps(uVar4 & 7,
                         CONCAT412(-(uint)(*(float *)(param_1 + 0x17c) != in_xmmTmp2_Dd),
                                   CONCAT48(-(uint)(*(float *)(param_1 + 0x178) != fStack220),
                                            CONCAT44(-(uint)(*(float *)(param_1 + 0x174) != fStack228),
                                                     -(uint)(*(float *)(param_1 + 0x170) != local_e8))))
        );
        if ((uVar4 & 7) != 0) goto LAB_14038f0a5;
    }
    else {
        LAB_14038f0a5:
        *(float *)(param_1 + 0x160) = local_f8._0_4_;
        *(float *)(param_1 + 0x164) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 0x168) = uStack240;
        *(float *)(param_1 + 0x16c) = fStack236;
        *(float *)(param_1 + 0x170) = local_e8;
        *(float *)(param_1 + 0x174) = fStack228;
        *(undefined4 *)(param_1 + 0x178) = uStack224;
        *(float *)(param_1 + 0x17c) = fStack220;
        *(undefined4 *)(param_1 + 0x180) = local_d8._0_4_;
        *(undefined4 *)(param_1 + 0x184) = local_d8._4_4_;
        *(undefined4 *)(param_1 + 0x188) = uStack208;
        *(undefined4 *)(param_1 + 0x18c) = uStack204;
        *(undefined4 *)(param_1 + 400) = local_c8._0_4_;
        if (*(longlong *)(param_1 + 0x1d8) == 0) {
            plVar1 = (longlong *)(param_1 + 0x1e0);
            plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1500);
            *(longlong **)(param_1 + 0x1d8) = plVar5;
            *plVar1 = *plVar5;
            *plVar5 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x1d8) = plVar1;
            }
        }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x140);
    if (*(undefined8 **)(param_1 + 0x150) == puVar2) {
        if (*(longlong *)(param_1 + 0x158) == *(longlong *)(param_1 + 0x148)) goto LAB_14038f1cb;
        if (*(undefined8 **)(param_1 + 0x150) != puVar2) goto LAB_14038f134;
    }
    else {
        LAB_14038f134:
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x150) + 8))();
        }
        *(undefined8 **)(param_1 + 0x150) = puVar2;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x158) != puVar2) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if (*(longlong **)(param_1 + 0x158) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x158) + 8))();
        }
        *(undefined8 **)(param_1 + 0x158) = puVar2;
    }
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
        plVar1 = (longlong *)(param_1 + 0x200);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1510);
        *(longlong **)(param_1 + 0x1f8) = plVar5;
        *plVar1 = *plVar5;
        *plVar5 = param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x1f8) = plVar1;
        }
    }
    LAB_14038f1cb:
    local_b8[0] = param_1 + 0x40;
    fVar6 = 1.0 / (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20));
    local_e8 = 0.0;
    fStack228 = 0.0;
    uStack224 = 0x3f800000;
    fStack220 = 0.0;
    _local_f8 = ZEXT416((uint)fVar6);
    _local_d8 = ZEXT416(0x7f800000) << 0x20;
    local_c8 = CONCAT412(0x3f800000,
                         ZEXT812(CONCAT44(*(float *)(param_1 + 0x28) * INFINITY,
                                          fVar6 * *(float *)(param_1 + 0x20)) ^ 0x8000000080000000));
    FUN_1401afc20(0,0x3f800000,local_b8,local_a8);
    local_108 = local_a8;
    local_100 = local_f8;
    local_68 = local_108;
    local_60 = local_100;
    FUN_1401afb10(&local_68,param_1 + 0x80);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack296);
    return;
}



undefined8 FUN_14038f2e0(longlong param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    if (*(longlong *)(param_1 + 0x1f8) != 0) {
        if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x20))(), iVar2 == 0)) {
            return 0;
        }
        plVar1 = *(longlong **)(param_1 + 0x158);
        if ((plVar1 != (longlong *)0x0) &&
            (iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) {
            return 0;
        }
        if (*(undefined8 **)(param_1 + 0x1f8) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x200);
        }
        if (*(longlong *)(param_1 + 0x200) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x1f8) = *(undefined8 *)(param_1 + 0x1f8);
        }
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
    }
    return 1;
}



void FUN_14038f4b0(longlong **param_1)

{
    if (*param_1 != (longlong *)0x0) {
        if ((longlong **)param_1[2] != (longlong **)0x0) {
            *param_1[2] = (longlong)param_1[3];
        }
        if (param_1[3] != (longlong *)0x0) {
            param_1[3][2] = (longlong)param_1[2];
        }
        param_1[2] = (longlong *)0x0;
        param_1[3] = (longlong *)0x0;
        FUN_14038f970(*param_1);
        (**(code **)(**param_1 + 8))();
    }
    if ((longlong **)param_1[2] != (longlong **)0x0) {
        *param_1[2] = (longlong)param_1[3];
    }
    if (param_1[3] != (longlong *)0x0) {
        param_1[3][2] = (longlong)param_1[2];
    }
    param_1[3] = (longlong *)0x0;
    param_1[2] = (longlong *)0x0;
    return;
}



void FUN_14038f540(longlong **param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    if (*param_1 != (longlong *)0x0) {
        if ((*param_1)[4] != 0) {
            plVar2 = param_1[1];
            plVar1 = plVar2 + 0x84;
            *(int *)plVar1 = *(int *)plVar1 + -1;
            if (*(int *)plVar1 == 0) {
                FUN_140367760(plVar2[2],plVar2);
                (**(code **)(*(longlong *)plVar2[6] + 0x18))();
            }
        }
        if ((longlong **)param_1[2] != (longlong **)0x0) {
            *param_1[2] = (longlong)param_1[3];
        }
        if (param_1[3] != (longlong *)0x0) {
            param_1[3][2] = (longlong)param_1[2];
        }
        param_1[2] = (longlong *)0x0;
        param_1[3] = (longlong *)0x0;
        if ((*param_1)[4] != 0) {
            FUN_140382e90();
        }
        (**(code **)(**param_1 + 8))();
    }
    if ((longlong **)param_1[2] != (longlong **)0x0) {
        *param_1[2] = (longlong)param_1[3];
    }
    if (param_1[3] != (longlong *)0x0) {
        param_1[3][2] = (longlong)param_1[2];
    }
    param_1[3] = (longlong *)0x0;
    param_1[2] = (longlong *)0x0;
    return;
}



undefined8 FUN_14038f600(longlong *param_1,undefined8 *param_2,longlong param_3)

{
    longlong **pplVar1;
    int iVar2;
    longlong lVar3;
    longlong **pplVar4;

    *param_1 = (longlong)param_2;
    param_1[1] = param_3;
    (**(code **)*param_2)(param_2);
    pplVar4 = (longlong **)(*param_1 + 0x30);
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar4;
        pplVar1 = (longlong **)(param_1 + 3);
        *pplVar1 = *pplVar4;
        *pplVar4 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[2] = (longlong)pplVar1;
        }
    }
    if (*(longlong *)(*param_1 + 0x20) != 0) {
        FUN_140382e90();
    }
    if (*(longlong *)(*param_1 + 0x20) != 0) {
        lVar3 = param_1[1];
        iVar2 = *(int *)(lVar3 + 0x420);
        *(int *)(lVar3 + 0x420) = iVar2 + 1;
        if (iVar2 == 0) {
            (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x10))();
            FUN_1403675c0(*(undefined8 *)(lVar3 + 0x10),lVar3);
        }
    }
    return 0;
}



undefined8 * FUN_14038f6a0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    longlong *plVar7;

    puVar6 = (ulonglong *)0x0;
    *param_1 = &PTR_LAB_140b65f70;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = param_2;
    *(undefined4 *)(param_1 + 3) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_3[1];
    param_1[4] = 0;
    plVar7 = (longlong *)(param_1[2] + 0x930);
    if (param_1[0xc] == 0) {
        param_1[0xc] = plVar7;
        plVar1 = param_1 + 0xd;
        *plVar1 = *plVar7;
        *plVar7 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x60) = plVar1;
        }
    }
    lVar3 = param_1[2];
    plVar7 = (longlong *)(lVar3 + 0x938);
    if (*plVar7 == *(longlong *)(lVar3 + 0x940)) {
        FUN_1400290d0(plVar7);
    }
    uVar4 = (**(code **)(lVar3 + 0x950))(param_1 + 3);
    ppuVar2 = (ulonglong **)
            (*(longlong *)(lVar3 + 0x948) + (uVar4 % *(ulonglong *)(lVar3 + 0x940)) * 8);
    puVar5 = (ulonglong *)FUN_14018b280(0x20);
    if (puVar5 != (ulonglong *)0x0) {
        puVar6 = *ppuVar2;
        *puVar5 = uVar4;
        puVar5[1] = (ulonglong)puVar6;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 3);
        *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x1c);
        puVar5[3] = (ulonglong)param_1;
        puVar6 = puVar5;
    }
    *ppuVar2 = puVar6;
    *plVar7 = *plVar7 + 1;
    return param_1;
}



void FUN_14038f7c0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b65f70;
    FUN_1400b6120(param_1[2] + 0x938,param_1 + 3);
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 *)(param_1[0xd] + 0x60) = param_1[0xc];
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (param_1[0xb] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[10] != 0) {
        FUN_1401a4a00(param_1 + 10);
    }
    if (param_1[9] != 0) {
        FUN_1401a4a00(param_1 + 9);
    }
    if (param_1[8] != 0) {
        FUN_1401a4a00(param_1 + 8);
    }
    if (param_1[7] != 0) {
        FUN_1401a4a00(param_1 + 7);
    }
    if (param_1[6] != 0) {
        FUN_1401a4a00(param_1 + 6);
    }
    if (param_1[5] != 0) {
        FUN_1401a4a00(param_1 + 5);
        return;
    }
    return;
}



void FUN_14038f890(longlong param_1,longlong param_2)

{
    int *piVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;

    if (param_2 == 0) {
        if ((*(longlong *)(param_1 + 0x20) != 0) && (lVar4 = *(longlong *)(param_1 + 0x30), lVar4 != 0))
        {
            do {
                lVar3 = *(longlong *)(lVar4 + 8);
                piVar1 = (int *)(lVar3 + 0x420);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    FUN_140367760(*(undefined8 *)(lVar3 + 0x10),lVar3);
                    (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x18))();
                }
                lVar4 = *(longlong *)(lVar4 + 0x18);
            } while (lVar4 != 0);
            *(undefined8 *)(param_1 + 0x20) = 0;
            return;
        }
    }
    else if ((*(longlong *)(param_1 + 0x20) == 0) &&
             (lVar4 = *(longlong *)(param_1 + 0x30), lVar4 != 0)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 8);
            iVar2 = *(int *)(lVar3 + 0x420);
            *(int *)(lVar3 + 0x420) = iVar2 + 1;
            if (iVar2 == 0) {
                (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x10))();
                FUN_1403675c0(*(undefined8 *)(lVar3 + 0x10));
            }
            lVar4 = *(longlong *)(lVar4 + 0x18);
        } while (lVar4 != 0);
        *(longlong *)(param_1 + 0x20) = param_2;
        return;
    }
    *(longlong *)(param_1 + 0x20) = param_2;
    return;
}



void FUN_14038f970(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;

    for (lVar2 = *(longlong *)(param_1 + 0x30); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        lVar3 = *(longlong *)(lVar2 + 8);
        if (((lVar3 == *(longlong *)(lVar3 + 0x20)) && (*(int *)(lVar3 + 0x4c) != 0)) &&
            (*(longlong *)(lVar3 + 0x4a0) == 0)) {
            plVar1 = (longlong *)(lVar3 + 0x4a8);
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x13b0);
            *(longlong **)(lVar3 + 0x4a0) = plVar4;
            *plVar1 = *plVar4;
            *plVar4 = lVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x4a0) = plVar1;
            }
        }
    }
    for (lVar2 = *(longlong *)(param_1 + 0x40); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        lVar3 = *(longlong *)(lVar2 + 8);
        if ((*(longlong *)(lVar3 + 0x490) == 0) && (*(longlong *)(lVar3 + 0x410) == 0)) {
            plVar1 = (longlong *)(lVar3 + 0x418);
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x1490);
            *(longlong **)(lVar3 + 0x410) = plVar4;
            *plVar1 = *plVar4;
            *plVar4 = lVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x410) = plVar1;
            }
        }
    }
    for (lVar2 = *(longlong *)(param_1 + 0x48); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        lVar3 = *(longlong *)(lVar2 + 8);
        if (*(longlong *)(lVar3 + 0x378) == 0) {
            plVar1 = (longlong *)(lVar3 + 0x380);
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x14e8);
            *(longlong **)(lVar3 + 0x378) = plVar4;
            *plVar1 = *plVar4;
            *plVar4 = lVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x378) = plVar1;
            }
        }
    }
    for (lVar2 = *(longlong *)(param_1 + 0x50); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        lVar3 = *(longlong *)(lVar2 + 8);
        if (*(longlong *)(lVar3 + 0x1d8) == 0) {
            plVar1 = (longlong *)(lVar3 + 0x1e0);
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x1500);
            *(longlong **)(lVar3 + 0x1d8) = plVar4;
            *plVar1 = *plVar4;
            *plVar4 = lVar3;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x1d8) = plVar1;
            }
        }
    }
    return;
}



int FUN_14038fae0(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14038f7c0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



longlong * FUN_14038fb20(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;

    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2;
    pplVar5 = (longlong **)(param_2 + 0x78);
    param_1[1] = param_3;
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 3);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[2] = (longlong)pplVar3;
        }
    }
    pplVar5 = (longlong **)(param_1[1] + 0x460);
    if (param_1[4] == 0) {
        param_1[4] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 5);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[4] = (longlong)pplVar3;
        }
    }
    lVar2 = param_1[1];
    if (((lVar2 == *(longlong *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x4c) != 0)) &&
        (*(longlong *)(lVar2 + 0x4a0) == 0)) {
        plVar1 = (longlong *)(lVar2 + 0x4a8);
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x13b0);
        *(longlong **)(lVar2 + 0x4a0) = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x4a0) = plVar1;
        }
    }
    return param_1;
}



void FUN_14038fbf0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (((lVar2 == *(longlong *)(lVar2 + 0x20)) && (*(int *)(lVar2 + 0x4c) != 0)) &&
        (*(longlong *)(lVar2 + 0x4a0) == 0)) {
        plVar1 = (longlong *)(lVar2 + 0x4a8);
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x13b0);
        *(longlong **)(lVar2 + 0x4a0) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x4a0) = plVar1;
        }
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



longlong * FUN_14038fcf0(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;

    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2;
    pplVar5 = (longlong **)(param_2 + 0x80);
    param_1[1] = param_3;
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 3);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[2] = (longlong)pplVar3;
        }
    }
    pplVar5 = (longlong **)(param_1[1] + 0x3b8);
    if (param_1[4] == 0) {
        param_1[4] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 5);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[4] = (longlong)pplVar3;
        }
    }
    lVar2 = param_1[1];
    if ((*(longlong *)(lVar2 + 0x490) == 0) && (*(longlong *)(lVar2 + 0x410) == 0)) {
        plVar1 = (longlong *)(lVar2 + 0x418);
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x1490);
        *(longlong **)(lVar2 + 0x410) = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x410) = plVar1;
        }
    }
    return param_1;
}



void FUN_14038fdb0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if ((*(longlong *)(lVar2 + 0x490) == 0) && (*(longlong *)(lVar2 + 0x410) == 0)) {
        plVar1 = (longlong *)(lVar2 + 0x418);
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x1490);
        *(longlong **)(lVar2 + 0x410) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x410) = plVar1;
        }
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



longlong * FUN_14038feb0(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;

    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2;
    pplVar5 = (longlong **)(param_2 + 0x88);
    param_1[1] = param_3;
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 3);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[2] = (longlong)pplVar3;
        }
    }
    pplVar5 = (longlong **)(param_1[1] + 0x358);
    if (param_1[4] == 0) {
        param_1[4] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 5);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[4] = (longlong)pplVar3;
        }
    }
    lVar2 = param_1[1];
    if (*(longlong *)(lVar2 + 0x378) == 0) {
        plVar1 = (longlong *)(lVar2 + 0x380);
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x14e8);
        *(longlong **)(lVar2 + 0x378) = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x378) = plVar1;
        }
    }
    return param_1;
}



void FUN_14038ff70(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(longlong *)(lVar2 + 0x378) == 0) {
        plVar1 = (longlong *)(lVar2 + 0x380);
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x14e8);
        *(longlong **)(lVar2 + 0x378) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x378) = plVar1;
        }
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



longlong * FUN_140390060(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong *plVar4;
    longlong **pplVar5;

    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2;
    pplVar5 = (longlong **)(param_2 + 0x90);
    param_1[1] = param_3;
    if (param_1[2] == 0) {
        param_1[2] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 3);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[2] = (longlong)pplVar3;
        }
    }
    pplVar5 = (longlong **)(param_1[1] + 0x1b8);
    if (param_1[4] == 0) {
        param_1[4] = (longlong)pplVar5;
        pplVar3 = (longlong **)(param_1 + 5);
        *pplVar3 = *pplVar5;
        *pplVar5 = param_1;
        if (*pplVar3 != (longlong *)0x0) {
            (*pplVar3)[4] = (longlong)pplVar3;
        }
    }
    lVar2 = param_1[1];
    if (*(longlong *)(lVar2 + 0x1d8) == 0) {
        plVar1 = (longlong *)(lVar2 + 0x1e0);
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x1500);
        *(longlong **)(lVar2 + 0x1d8) = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x1d8) = plVar1;
        }
    }
    return param_1;
}



void FUN_140390120(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(longlong *)(lVar2 + 0x1d8) == 0) {
        plVar1 = (longlong *)(lVar2 + 0x1e0);
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x10) + 0x1500);
        *(longlong **)(lVar2 + 0x1d8) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = lVar2;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x1d8) = plVar1;
        }
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
}



longlong *
FUN_140390210(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
    longlong **pplVar1;
    longlong **pplVar2;

    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    if (param_2 != 0) {
        pplVar1 = (longlong **)(param_2 + 0x98);
        param_1[4] = (longlong)pplVar1;
        pplVar2 = (longlong **)(param_1 + 5);
        *pplVar2 = *pplVar1;
        *pplVar1 = param_1;
        if (*pplVar2 != (longlong *)0x0) {
            (*pplVar2)[4] = (longlong)pplVar2;
        }
    }
    pplVar2 = (longlong **)(param_1[2] + 0xe0);
    if (param_1[6] == 0) {
        param_1[6] = (longlong)pplVar2;
        pplVar1 = (longlong **)(param_1 + 7);
        *pplVar1 = *pplVar2;
        *pplVar2 = param_1;
        if (*pplVar1 != (longlong *)0x0) {
            (*pplVar1)[6] = (longlong)pplVar1;
        }
    }
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    return param_1;
}



void FUN_1403902b0(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc) = 0;
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = *(undefined8 *)(param_1 + 0x40);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x30) = *(undefined8 *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
}



void FUN_140390390(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;

    if ((DAT_140dc2130 & 1) == 0) {
        DAT_140dc2130 = DAT_140dc2130 | 1;
        DAT_140dc2140 = 0;
        DAT_140dc2138 = 0;
        FUN_1407dd89c(&LAB_14094f7b0);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    DAT_140dc2140 = 0;
    for (lVar2 = *plVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
        FUN_140391870();
        lVar2 = *plVar1;
        plVar1 = (longlong *)(lVar2 + 0x18);
    }
    (**(code **)(*DAT_140c65688 + 0x78))
            (DAT_140c65688,*(longlong *)(param_1 + 0x10) + 0x20,DAT_140dc2138,DAT_140dc2140,param_2,
             0x80,param_4);
    return;
}



void FUN_1403904c0(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    *param_1 = &PTR_LAB_140b65f80;
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + -8);
        lVar2 = (longlong)iVar1 * 0x20 + lVar3;
        while (iVar1 = iVar1 + -1, -1 < iVar1) {
            lVar2 = lVar2 + -0x20;
            FUN_14038f4b0(lVar2);
        }
        FUN_14018b900(lVar3 + -8);
    }
    lVar3 = param_1[0xf];
    while (lVar3 != 0) {
        lVar3 = param_1[0xf];
        if (lVar3 != 0) {
            FUN_14038fbf0(lVar3);
            FUN_14018b900(lVar3);
        }
        lVar3 = param_1[0xf];
    }
    lVar3 = param_1[0x10];
    while (lVar3 != 0) {
        lVar3 = param_1[0x10];
        if (lVar3 != 0) {
            FUN_14038fdb0(lVar3);
            FUN_14018b900(lVar3);
        }
        lVar3 = param_1[0x10];
    }
    lVar3 = param_1[0x11];
    while (lVar3 != 0) {
        lVar3 = param_1[0x11];
        if (lVar3 != 0) {
            FUN_14038ff70(lVar3);
            FUN_14018b900(lVar3);
        }
        lVar3 = param_1[0x11];
    }
    lVar3 = param_1[0x12];
    while (lVar3 != 0) {
        lVar3 = param_1[0x12];
        if (lVar3 != 0) {
            FUN_140390120(lVar3);
            FUN_14018b900(lVar3);
        }
        lVar3 = param_1[0x12];
    }
    lVar3 = param_1[0x13];
    while (lVar3 != 0) {
        if (param_1[0x13] != 0) {
            FUN_1403902b0();
            FUN_14018b900();
        }
        lVar3 = param_1[0x13];
    }
    FUN_14018b900(param_1[0x14]);
    if ((undefined8 *)param_1[0x28] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x28] = param_1[0x29];
    }
    if (param_1[0x29] != 0) {
        *(undefined8 *)(param_1[0x29] + 0x140) = param_1[0x28];
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    if ((undefined8 *)param_1[0x26] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x26] = param_1[0x27];
    }
    if (param_1[0x27] != 0) {
        *(undefined8 *)(param_1[0x27] + 0x130) = param_1[0x26];
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if (param_1[0x13] != 0) {
        FUN_1401a4a00(param_1 + 0x13);
    }
    if (param_1[0x12] != 0) {
        FUN_1401a4a00(param_1 + 0x12);
    }
    if (param_1[0x11] != 0) {
        FUN_1401a4a00(param_1 + 0x11);
    }
    if (param_1[0x10] != 0) {
        FUN_1401a4a00(param_1 + 0x10);
    }
    if (param_1[0xf] != 0) {
        FUN_1401a4a00(param_1 + 0xf);
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
    }
    return;
}



undefined8 FUN_140390730(longlong *param_1,longlong param_2,longlong *param_3)

{
    longlong **pplVar1;
    ulonglong *puVar2;
    float fVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    longlong lVar11;
    uint *puVar12;
    undefined8 *puVar13;
    longlong lVar14;
    longlong *plVar15;
    longlong *plVar16;
    undefined8 uVar17;
    longlong *plVar18;
    longlong lVar19;
    int iVar20;
    int iVar21;
    longlong **pplVar22;
    uint *puVar23;
    longlong **pplVar24;
    int iVar25;
    int iVar26;
    longlong *plVar27;
    undefined auVar28 [16];
    undefined auVar29 [16];
    float fVar30;
    float fVar31;
    float fVar33;
    float fVar34;
    float fVar35;
    int local_res8;
    int local_resc;
    undefined auVar32 [16];
    undefined auVar36 [16];

    param_1[1] = param_2;
    param_1[2] = (longlong)param_3;
    puVar9 = (undefined4 *)(**(code **)(*param_3 + 0x70))();
    uVar8 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    *(undefined4 *)(param_1 + 4) = *puVar9;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
    *(undefined4 *)(param_1 + 5) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
    fVar31 = (float)puVar9[4];
    fVar35 = (float)puVar9[5];
    fVar3 = (float)puVar9[6];
    fVar4 = (float)puVar9[7];
    *(float *)(param_1 + 6) = fVar31;
    *(float *)((longlong)param_1 + 0x34) = fVar35;
    *(float *)(param_1 + 7) = fVar3;
    *(float *)((longlong)param_1 + 0x3c) = fVar4;
    fVar30 = fVar31 - *(float *)(param_1 + 4);
    fVar33 = fVar35 - *(float *)((longlong)param_1 + 0x24);
    fVar34 = fVar3 - *(float *)(param_1 + 5);
    *(float *)(param_1 + 8) = (*(float *)(param_1 + 4) + fVar31) * 0.5;
    *(float *)((longlong)param_1 + 0x44) = (*(float *)((longlong)param_1 + 0x24) + fVar35) * 0.5;
    *(float *)(param_1 + 9) = (*(float *)(param_1 + 5) + fVar3) * 0.5;
    *(float *)((longlong)param_1 + 0x4c) = (*(float *)((longlong)param_1 + 0x2c) + fVar4) * 0.5;
    fVar31 = DAT_140c43fb8;
    *(float *)(param_1 + 10) = SQRT(fVar30 * fVar30 + fVar33 * fVar33 + fVar34 * fVar34) * 0.5;
    fVar35 = (fVar31 * *(float *)(param_1 + 4) + 0.5) * 2048.0;
    auVar36 = ZEXT416((uint)fVar35) & (undefined  [16])0xffffffffffffffff;
    iVar20 = (int)fVar35;
    if ((iVar20 != -0x80000000) && ((float)iVar20 != fVar35)) {
        uVar7 = movmskps((int)puVar9,ZEXT816(SUB168(auVar36,0) | SUB168(auVar36,0) << 0x20));
        puVar9 = (undefined4 *)(ulonglong)(uVar7 & 1);
        auVar36 = ZEXT416((uint)(float)(iVar20 - (uVar7 & 1)));
    }
    uVar7 = (uint)puVar9;
    auVar28 = ZEXT416((uint)(fVar31 * *(float *)(param_1 + 5))) & (undefined  [16])0xffffffffffffffff;
    fVar35 = (SUB164(auVar28,0) + 0.5) * 2048.0;
    auVar29 = CONCAT124(SUB1612(auVar28 >> 0x20,0),fVar35);
    iVar20 = (int)fVar35;
    if ((iVar20 != -0x80000000) && ((float)iVar20 != fVar35)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar28 >> 0x40,0),
                                        SUB168(auVar29,0) | SUB168(auVar29,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar7 = uVar7 & 1;
        auVar29 = ZEXT416((uint)(float)(iVar20 - uVar7));
    }
    auVar28 = ZEXT416((uint)(fVar31 * *(float *)(param_1 + 6))) & (undefined  [16])0xffffffffffffffff;
    fVar35 = (SUB164(auVar28,0) + 0.5) * 2048.0;
    auVar32 = CONCAT124(SUB1612(auVar28 >> 0x20,0),fVar35);
    iVar20 = (int)fVar35;
    if ((iVar20 != -0x80000000) && ((float)iVar20 != fVar35)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar28 >> 0x40,0),
                                        SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar7 = uVar7 & 1;
        auVar32 = ZEXT416((uint)(float)(iVar20 - uVar7));
    }
    auVar28 = ZEXT416((uint)(fVar31 * *(float *)(param_1 + 7))) & (undefined  [16])0xffffffffffffffff;
    iVar20 = (int)SUB164(auVar32,0) + 1;
    fVar31 = (SUB164(auVar28,0) + 0.5) * 2048.0;
    auVar32 = CONCAT124(SUB1612(auVar28 >> 0x20,0),fVar31);
    iVar21 = (int)fVar31;
    if ((iVar21 != -0x80000000) && ((float)iVar21 != fVar31)) {
        uVar7 = movmskps(uVar7,CONCAT88(SUB168(auVar28 >> 0x40,0),
                                        SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar32 = ZEXT416((uint)(float)(iVar21 - (uVar7 & 1)));
    }
    *(int *)(param_1 + 0xc) = (int)SUB164(auVar36,0);
    *(int *)((longlong)param_1 + 100) = (int)SUB164(auVar29,0);
    *(int *)(param_1 + 0xd) = iVar20;
    iVar21 = (int)SUB164(auVar32,0) + 1;
    *(int *)((longlong)param_1 + 0x6c) = iVar21;
    if (DAT_140c445d8 < iVar20) {
        iVar20 = DAT_140c445d8;
    }
    if (DAT_140c445dc < iVar21) {
        iVar21 = DAT_140c445dc;
    }
    iVar26 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0xc) < DAT_140c445d0) {
        iVar26 = DAT_140c445d0;
    }
    iVar25 = *(int *)((longlong)param_1 + 100);
    if (*(int *)((longlong)param_1 + 100) < DAT_140c445d4) {
        iVar25 = DAT_140c445d4;
    }
    plVar27 = (longlong *)0x0;
    if ((iVar26 < iVar20) && (iVar25 < iVar21)) {
        *(int *)(param_1 + 0xc) = iVar26;
        *(int *)((longlong)param_1 + 100) = iVar25;
        *(int *)(param_1 + 0xd) = iVar20;
        *(int *)((longlong)param_1 + 0x6c) = iVar21;
        uVar7 = (iVar21 - *(int *)((longlong)param_1 + 100)) * (iVar20 - *(int *)(param_1 + 0xc));
        uVar10 = SUB168(ZEXT816(0x20) * ZEXT416(uVar7),0);
        if (SUB168(ZEXT816(0x20) * ZEXT416(uVar7) >> 0x40,0) != 0) {
            uVar10 = 0xffffffffffffffff;
        }
        lVar11 = uVar10 + 8;
        if (0xfffffffffffffff7 < uVar10) {
            lVar11 = -1;
        }
        puVar12 = (uint *)FUN_14018b280(lVar11,0);
        if (puVar12 == (uint *)0x0) {
            puVar23 = (uint *)0x0;
        }
        else {
            iVar20 = uVar7 - 1;
            *puVar12 = uVar7;
            puVar23 = puVar12 + 2;
            if (-1 < iVar20) {
                puVar13 = (undefined8 *)(puVar12 + 6);
                do {
                    iVar20 = iVar20 + -1;
                    *puVar13 = 0;
                    puVar13[1] = 0;
                    puVar13[-2] = 0;
                    puVar13 = puVar13 + 4;
                } while (-1 < iVar20);
            }
        }
        param_1[0xe] = (longlong)puVar23;
        local_resc = *(int *)((longlong)param_1 + 100);
        plVar16 = plVar27;
        if (local_resc < *(int *)((longlong)param_1 + 0x6c)) {
            do {
                local_res8 = *(int *)(param_1 + 0xc);
                if (local_res8 < *(int *)(param_1 + 0xd)) {
                    do {
                        lVar11 = *(longlong *)(param_1[1] + 0x10);
                        if ((((local_res8 < DAT_140c44530) || (DAT_140c44538 <= local_res8)) ||
                             (local_resc < DAT_140c44534)) || (DAT_140c4453c <= local_resc)) {
                            return 0x80070057;
                        }
                        uVar10 = (**(code **)(lVar11 + 0x950))(&local_res8);
                        for (puVar2 = *(ulonglong **)
                                (*(longlong *)(lVar11 + 0x948) +
                                 (uVar10 % *(ulonglong *)(lVar11 + 0x940)) * 8);
                             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                            if ((uVar10 == *puVar2) &&
                                (iVar20 = (**(code **)(lVar11 + 0x958))(&local_res8), iVar20 != 0)) {
                                if ((longlong **)(puVar2 + 3) != (longlong **)0x0) {
                                    plVar15 = (longlong *)puVar2[3];
                                    (**(code **)*plVar15)(plVar15);
                                    goto LAB_140390a8b;
                                }
                                break;
                            }
                        }
                        lVar14 = FUN_14018b280(0x70);
                        plVar15 = plVar27;
                        if (lVar14 != 0) {
                            plVar15 = (longlong *)FUN_14038f6a0(lVar14,lVar11,&local_res8);
                        }
                        LAB_140390a8b:
                        pplVar24 = (longlong **)((longlong)plVar16 * 0x20 + param_1[0xe]);
                        *pplVar24 = plVar15;
                        pplVar24[1] = param_1;
                        (**(code **)*plVar15)(plVar15);
                        pplVar22 = (longlong **)(*pplVar24 + 5);
                        if (pplVar24[2] == (longlong *)0x0) {
                            pplVar24[2] = (longlong *)pplVar22;
                            pplVar1 = pplVar24 + 3;
                            *pplVar1 = *pplVar22;
                            *pplVar22 = (longlong *)pplVar24;
                            if (*pplVar1 != (longlong *)0x0) {
                                (*pplVar1)[2] = (longlong)pplVar1;
                            }
                        }
                        FUN_14038f970(*pplVar24);
                        plVar16 = (longlong *)(ulonglong)((int)plVar16 + 1);
                        (**(code **)(*plVar15 + 8))();
                        local_res8 = local_res8 + 1;
                    } while (local_res8 < *(int *)(param_1 + 0xd));
                }
                local_resc = local_resc + 1;
            } while (local_resc < *(int *)((longlong)param_1 + 0x6c));
        }
    }
    iVar20 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar20 == 0) {
        uVar8 = (**(code **)(*(longlong *)param_1[2] + 0xe8))();
        FUN_140391230(param_1,uVar8);
    }
    plVar16 = (longlong *)(**(code **)(*param_3 + 0x80))(param_3);
    uVar17 = SUB168(ZEXT816(0x18) * ZEXT816(plVar16),0);
    if (SUB168(ZEXT816(0x18) * ZEXT816(plVar16) >> 0x40,0) != 0) {
        uVar17 = 0xffffffffffffffff;
    }
    lVar11 = FUN_14018b280(uVar17,0);
    param_1[0x14] = lVar11;
    plVar15 = plVar27;
    if (plVar16 != (longlong *)0x0) {
        do {
            plVar18 = (longlong *)(**(code **)(*param_3 + 0x88))(param_3,plVar15);
            lVar11 = param_1[0x14];
            *(longlong **)((longlong)plVar27 + lVar11 + 8) = param_1;
            *(longlong **)((longlong)plVar27 + lVar11) = plVar18;
            lVar14 = *(longlong *)(*(longlong *)(param_1[1] + 0x30) + 0x20);
            plVar18 = (longlong *)(**(code **)(*plVar18 + 8))(plVar18);
            lVar19 = (**(code **)(*plVar18 + 0x20))(plVar18);
            plVar15 = (longlong *)((longlong)plVar15 + 1);
            *(longlong *)((longlong)plVar27 + lVar11 + 0x10) = lVar19 * 0x150 + lVar14;
            plVar27 = plVar27 + 3;
        } while (plVar15 < plVar16);
    }
    return 0;
}



uint FUN_140390c00(longlong *param_1,undefined8 param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    uint local_res8;

    if (param_1[0x26] != 0) {
        return 0;
    }
    pplVar1 = (longlong **)(param_1 + 0x27);
    pplVar8 = (longlong **)(*(longlong *)(param_1[1] + 0x10) + 0x1550);
    param_1[0x26] = (longlong)pplVar8;
    *pplVar1 = *pplVar8;
    *pplVar8 = param_1;
    if (*pplVar1 != (longlong *)0x0) {
        (*pplVar1)[0x26] = (longlong)pplVar1;
    }
    local_res8 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar5 = (**(code **)(*(longlong *)param_1[2] + 0x80))();
    uVar9 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x30) + 0x20);
    if (uVar5 != 0) {
        do {
            plVar6 = (longlong *)
                    (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],uVar9);
            iVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,param_2);
            if (iVar3 != 0) {
                plVar6 = (longlong *)
                        (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],uVar9);
                plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6);
                lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
                uVar4 = FUN_140390c00(lVar7 * 0x150 + lVar2,param_2);
                local_res8 = local_res8 | uVar4;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
    }
    return local_res8;
}



uint FUN_140390d10(longlong param_1,float *param_2,undefined8 param_3,longlong param_4)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    uint uVar5;
    float *pfVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    uint uVar10;
    longlong lVar11;
    float fVar12;
    longlong local_48;

    *(undefined4 *)(param_1 + 0xa8) = 1;
    uVar10 = 0;
    local_48 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
    if (local_48 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        return 0;
    }
    fVar12 = -1e-05;
    lVar11 = 0;
    do {
        lVar2 = *(longlong *)(param_1 + 0xa0);
        iVar4 = (**(code **)(**(longlong **)(lVar11 + lVar2) + 0x60))
                (*(longlong **)(lVar11 + lVar2),param_3);
        if ((iVar4 != 0) &&
            (pfVar6 = (float *)(**(code **)(**(longlong **)(lVar11 + lVar2) + 0x18))(),
                    *param_2 * *pfVar6 + param_2[1] * pfVar6[1] + 0.0 + pfVar6[3] <= fVar12)) {
            plVar3 = *(longlong **)(lVar11 + 0x10 + lVar2);
            iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
            if (iVar4 == 0) {
                lVar9 = FUN_14018b280(0x50);
                if (lVar9 != 0) {
                    uVar8 = (**(code **)(**(longlong **)(lVar11 + lVar2) + 0x38))();
                    lVar9 = FUN_140390210(lVar9,plVar3,uVar8,*(undefined8 *)(param_4 + 0x10),param_4);
                }
                if (*(int *)(plVar3 + 0x15) == 0) {
                    uVar5 = FUN_140390d10(plVar3,param_2,param_3,lVar9);
                }
                else {
                    uVar5 = 0;
                }
                uVar10 = uVar10 | uVar5;
            }
            else {
                puVar7 = (undefined8 *)FUN_14018b280(0x50);
                if (puVar7 != (undefined8 *)0x0) {
                    uVar8 = (**(code **)(**(longlong **)(lVar11 + lVar2) + 0x38))();
                    lVar2 = *(longlong *)(param_4 + 0x10);
                    puVar7[4] = 0;
                    puVar7[5] = 0;
                    puVar7[6] = 0;
                    puVar7[7] = 0;
                    puVar7[8] = 0;
                    puVar7[9] = 0;
                    puVar7[3] = param_4;
                    plVar3 = (longlong *)(lVar2 + 0xe0);
                    *puVar7 = 0;
                    puVar7[1] = uVar8;
                    puVar7[2] = lVar2;
                    if (puVar7[6] == 0) {
                        puVar7[6] = plVar3;
                        plVar1 = puVar7 + 7;
                        *plVar1 = *plVar3;
                        *plVar3 = (longlong)puVar7;
                        if (*plVar1 != 0) {
                            *(longlong **)(*plVar1 + 0x30) = plVar1;
                        }
                    }
                    *(undefined4 *)(puVar7[2] + 0xc) = 0;
                }
                uVar10 = 1;
            }
        }
        lVar11 = lVar11 + 0x18;
        local_48 = local_48 + -1;
    } while (local_48 != 0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return uVar10;
}



void FUN_140390f20(longlong param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined *puVar8;
    undefined *puVar9;
    undefined auVar10 [16];
    undefined auVar11 [16];
    undefined auStack472 [32];
    undefined8 *local_1b8;
    undefined *local_1a8;
    undefined *puStack416;
    undefined (*local_198) [16];
    undefined8 local_188;
    undefined8 uStack384;
    undefined **local_178;
    undefined8 uStack368;
    undefined8 local_168;
    longlong *local_160;
    longlong local_148;
    undefined (*local_140) [16];
    longlong local_138;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined local_128 [64];
    undefined *local_e8;
    undefined *local_e0;
    undefined **local_d8;
    undefined8 local_d0;
    undefined8 local_c8;
    longlong *local_c0;
    undefined *local_78;
    undefined8 local_70;
    undefined local_68 [64];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    local_198 = param_3;
    local_140 = param_2;
    if (*(int *)(param_1 + 0xa8) == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 1;
        if (*(longlong *)(param_1 + 0x140) == 0) {
            plVar5 = (longlong *)(param_1 + 0x148);
            plVar7 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x1558);
            *(longlong **)(param_1 + 0x140) = plVar7;
            *plVar5 = *plVar7;
            *plVar7 = param_1;
            if (*plVar5 != 0) {
                *(longlong **)(*plVar5 + 0x140) = plVar5;
            }
            uVar1 = *(undefined4 *)(*param_2 + 4);
            uVar2 = *(undefined4 *)(*param_2 + 8);
            uVar3 = *(undefined4 *)(*param_2 + 0xc);
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)*param_2;
            *(undefined4 *)(param_1 + 0xb4) = uVar1;
            *(undefined4 *)(param_1 + 0xb8) = uVar2;
            *(undefined4 *)(param_1 + 0xbc) = uVar3;
            uVar1 = *(undefined4 *)(param_2[1] + 4);
            uVar2 = *(undefined4 *)(param_2[1] + 8);
            uVar3 = *(undefined4 *)(param_2[1] + 0xc);
            *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)param_2[1];
            *(undefined4 *)(param_1 + 0xc4) = uVar1;
            *(undefined4 *)(param_1 + 200) = uVar2;
            *(undefined4 *)(param_1 + 0xcc) = uVar3;
        }
        else {
            auVar10 = minps(*(undefined (*) [16])(param_1 + 0xb0),*param_2);
            auVar11 = maxps(*(undefined (*) [16])(param_1 + 0xc0),param_2[1]);
            *(undefined (*) [16])(param_1 + 0xb0) = auVar10;
            *(undefined (*) [16])(param_1 + 0xc0) = auVar11;
        }
        puVar8 = (undefined *)0x0;
        puVar9 = &DAT_140dc2150;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        if ((DAT_140dc2148 & 1) == 0) {
            DAT_140dc2148 = DAT_140dc2148 | 1;
            local_178 = &local_1a8;
            local_188 = 0;
            local_160 = &local_138;
            uStack384 = 0;
            local_138 = 0x3f0000003f000000;
            uStack304 = 0;
            uStack300 = 0;
            local_1a8 = (undefined *)0x3f0000003f000000;
            puStack416 = (undefined *)0x3f800000;
            local_e8 = (undefined *)0x0;
            uStack368 = 0;
            local_168 = 0;
            local_e0 = (undefined *)0x0;
            local_d0 = 0;
            local_c8 = 0;
            local_d8 = local_178;
            local_c0 = local_160;
            FUN_1401aff00(&local_e8,&DAT_140dc2150);
        }
        local_1a8 = (undefined *)(lVar6 + 0x3c0);
        puStack416 = (undefined *)FUN_140359840(lVar6,&local_188,param_2);
        local_78 = local_1a8;
        local_70 = puStack416;
        FUN_1401afb10(&local_78,local_68);
        local_1a8 = local_68;
        puStack416 = puVar9;
        local_e8 = local_1a8;
        local_e0 = puVar9;
        FUN_1401afb10(&local_e8,local_128);
        local_1a8 = (undefined *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
        local_138 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) + 0x20);
        if (local_1a8 != (undefined *)0x0) {
            local_148 = lVar6 + 0x390;
            do {
                plVar5 = (longlong *)
                        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                        (*(longlong **)(param_1 + 0x10),puVar8);
                local_1b8 = &local_188;
                iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,local_148,local_128,local_140);
                if (iVar4 != 0) {
                    plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
                    lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
                    plVar5 = (longlong *)(lVar6 * 0x150 + local_138);
                    iVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
                    if (iVar4 == 0) {
                        FUN_140390f20(plVar5,&local_188,local_198);
                    }
                    else if (local_198 != (undefined (*) [16])0x0) {
                        auVar10 = minps(*local_198,CONCAT88(uStack384,local_188));
                        auVar11 = maxps(local_198[1],CONCAT88(uStack368,local_178));
                        *local_198 = auVar10;
                        local_198[1] = auVar11;
                    }
                }
                puVar8 = puVar8 + 1;
            } while (puVar8 < local_1a8);
        }
        *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack472);
    return;
}



void FUN_140391230(longlong *param_1,int param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    longlong *plVar5;
    longlong *local_res8;

    iVar4 = (**(code **)(*param_1 + 0x18))();
    if (iVar4 == 0) {
        lVar1 = *(longlong *)(param_1[1] + 0x10);
        local_res8 = (longlong *)0x0;
        if (((param_2 == 0) ||
             (iVar4 = FUN_1403543e0(lVar1,param_2,*(undefined8 *)(lVar1 + 0xa08),&local_res8),
                     plVar5 = local_res8, iVar4 < 0)) &&
            (plVar3 = local_res8, plVar2 = *(longlong **)(lVar1 + 0xa18), plVar5 = local_res8,
                    local_res8 != plVar2)) {
            if (plVar2 != (longlong *)0x0) {
                (**(code **)*plVar2)(plVar2);
            }
            plVar5 = plVar2;
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))(plVar3);
            }
        }
        if ((longlong *)param_1[3] != plVar5) {
            if (plVar5 != (longlong *)0x0) {
                (**(code **)*plVar5)(plVar5);
            }
            if ((longlong *)param_1[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[3] + 8))();
            }
            param_1[3] = (longlong)plVar5;
        }
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
        }
    }
    return;
}



void FUN_140391300(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_140372af0();
    }
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
    if (lVar3 != 0) {
        lVar5 = 0;
        do {
            lVar1 = *(longlong *)(param_1 + 0xa0);
            lVar2 = *(longlong *)(lVar5 + 8 + lVar1);
            if (lVar2 == param_1) {
                lVar4 = *(longlong *)(lVar5 + 0x10 + lVar1);
            }
            else {
                lVar4 = 0;
                if (*(longlong *)(lVar5 + 0x10 + lVar1) == param_1) {
                    lVar4 = lVar2;
                }
            }
            if ((*(longlong *)(lVar4 + 0x140) == 0) && (*(longlong *)(lVar4 + 0x18) != 0)) {
                FUN_140372af0();
            }
            lVar5 = lVar5 + 0x18;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    return;
}



undefined8 FUN_1403913a0(longlong param_1,int param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    float fVar8;

    if (param_2 != 0) {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
        fVar8 = (float)(**(code **)(*plVar3 + 0x88))(plVar3);
        if (fVar8 < 1.0) {
            return 0;
        }
    }
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
    if (lVar4 != 0) {
        if (param_3 != (longlong *)0x0) {
            (**(code **)(*param_3 + 0x18))(param_3);
        }
        if (lVar4 != 0) {
            lVar7 = 0;
            do {
                lVar1 = *(longlong *)(param_1 + 0xa0);
                lVar2 = *(longlong *)(lVar1 + 8 + lVar7);
                if (lVar2 == param_1) {
                    lVar5 = *(longlong *)(lVar1 + 0x10 + lVar7);
                }
                else {
                    lVar5 = 0;
                    if (*(longlong *)(lVar1 + 0x10 + lVar7) == param_1) {
                        lVar5 = lVar2;
                    }
                }
                if (*(longlong *)(lVar5 + 0x140) != 0) {
                    uVar6 = (**(code **)(**(longlong **)(lVar1 + lVar7) + 0x38))();
                    (**(code **)(*DAT_140c65688 + 0x58))(DAT_140c65688,uVar6);
                }
                lVar7 = lVar7 + 0x18;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
        }
        if (param_3 != (longlong *)0x0) {
            (**(code **)(*param_3 + 0x20))(param_3);
        }
        return 1;
    }
    return 0;
}



void FUN_1403914b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
    if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0xdb0;
    }
    else {
        lVar7 = *(longlong *)(param_1 + 0x18) + 0x40;
    }
    if (lVar2 != 0) {
        lVar5 = 0;
        do {
            lVar1 = *(longlong *)(param_1 + 0xa0);
            lVar6 = *(longlong *)(lVar5 + 8 + lVar1);
            if (lVar6 == param_1) {
                lVar3 = *(longlong *)(lVar5 + 0x10 + lVar1);
            }
            else {
                lVar3 = 0;
                if (*(longlong *)(lVar5 + 0x10 + lVar1) == param_1) {
                    lVar3 = lVar6;
                }
            }
            if (*(longlong *)(lVar3 + 0x18) == 0) {
                lVar6 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) + 0xdb0;
            }
            else {
                lVar6 = *(longlong *)(lVar3 + 0x18) + 0x40;
            }
            if (lVar7 != lVar6) {
                uVar4 = (**(code **)(**(longlong **)(lVar5 + lVar1) + 0x38))();
                (**(code **)(*DAT_140c65688 + 0x88))(DAT_140c65688,uVar4,lVar7,lVar6,param_2,0x80,param_4);
            }
            lVar5 = lVar5 + 0x18;
            lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
    }
    return;
}



undefined8 FUN_1403915c0(longlong *param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong lVar7;
    float fVar8;

    iVar2 = (**(code **)(*param_1 + 0x18))();
    if (iVar2 != 0) {
        return 0;
    }
    if (param_3 != 0) {
        plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x10))();
        fVar8 = (float)(**(code **)(*plVar3 + 0x88))(plVar3);
        if (fVar8 < 1.0) {
            return 0;
        }
    }
    lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x80))();
    if (lVar4 != 0) {
        lVar7 = 0;
        do {
            lVar1 = param_1[0x14];
            plVar3 = *(longlong **)(lVar7 + 8 + lVar1);
            if (plVar3 == param_1) {
                plVar6 = *(longlong **)(lVar7 + 0x10 + lVar1);
            }
            else {
                plVar6 = (longlong *)0x0;
                if (*(longlong **)(lVar7 + 0x10 + lVar1) == param_1) {
                    plVar6 = plVar3;
                }
            }
            if ((plVar6[0x28] != 0) && (iVar2 = (**(code **)(*plVar6 + 0x18))(), iVar2 != 0)) {
                uVar5 = (**(code **)(**(longlong **)(lVar7 + lVar1) + 0x38))();
                (**(code **)(*DAT_140c65688 + 0x98))(DAT_140c65688,uVar5,param_2);
            }
            lVar7 = lVar7 + 0x18;
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
    }
    return 1;
}



void FUN_1403916d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;

    if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0xdb0;
    }
    else {
        lVar6 = *(longlong *)(param_1 + 0x18) + 0x40;
    }
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
    if (lVar3 != 0) {
        lVar7 = 0;
        do {
            lVar1 = *(longlong *)(param_1 + 0xa0);
            lVar2 = *(longlong *)(lVar7 + 8 + lVar1);
            if (lVar2 == param_1) {
                lVar4 = *(longlong *)(lVar7 + 0x10 + lVar1);
            }
            else {
                lVar4 = 0;
                if (*(longlong *)(lVar7 + 0x10 + lVar1) == param_1) {
                    lVar4 = lVar2;
                }
            }
            if (*(longlong *)(lVar4 + 0x140) != 0) {
                uVar5 = (**(code **)(**(longlong **)(lVar7 + lVar1) + 0x38))();
                (**(code **)(*DAT_140c65688 + 0xa0))(DAT_140c65688,uVar5,lVar6);
            }
            lVar7 = lVar7 + 0x18;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    return;
}



uint FUN_1403917a0(longlong param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    return *(uint *)(lVar1 + 0x30) & 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403917c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined local_18 [16];

    local_18 = CONCAT412(0.0 - fRam0000000140c7787c,
                         CONCAT48(0.0 - fRam0000000140c77878,
                                  CONCAT44(0.0 - fRam0000000140c77874,0.0 - _DAT_140c77870)));
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
            (*(longlong **)(param_1 + 0x10),param_2,local_18,param_3,param_4);
    return;
}



longlong FUN_140391870(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = DAT_140dc2140;
    lVar1 = DAT_140dc2140 + 1;
    lVar4 = FUN_14018db00(DAT_140dc2138,lVar1,8);
    *(undefined8 *)(lVar4 + lVar2 * 8) = *param_2;
    lVar3 = DAT_140dc2138;
    if ((DAT_140dc2138 != lVar4) &&
        (FUN_1407db590(lVar4,DAT_140dc2138,DAT_140dc2140 * 8), lVar3 = lVar4, DAT_140dc2138 != 0)) {
        (**(code **)(*(longlong *)(DAT_140dc2138 + -0x10) + 8))(DAT_140dc2138 + -0x10);
    }
    DAT_140dc2138 = lVar3;
    DAT_140dc2140 = lVar1;
    return lVar2;
}



undefined8 *
FUN_140391920(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
              undefined8 *param_5_00,undefined8 param_6_00,undefined4 *param_5,uint param_6)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *(undefined4 *)((longlong)param_3 + 0xc) = param_2;
    *(undefined4 *)(param_3 + 1) = 1;
    param_3[2] = param_5_00;
    param_3[3] = param_6_00;
    *param_3 = &PTR_LAB_140b65fc8;
    if (param_5_00 != (undefined8 *)0x0) {
        (**(code **)*param_5_00)(param_5_00);
    }
    if ((undefined8 *)param_3[3] != (undefined8 *)0x0) {
        (***(code ***)(undefined8 *)param_3[3])();
    }
    if ((param_6 & 0x8003f) != 0) {
        if ((param_6 & 1) != 0) {
            *(undefined4 *)(param_3 + 8) = param_5[8];
        }
        if ((param_6 & 2) != 0) {
            uVar1 = param_5[1];
            uVar2 = param_5[2];
            uVar3 = param_5[3];
            *(undefined4 *)(param_3 + 4) = *param_5;
            *(undefined4 *)((longlong)param_3 + 0x24) = uVar1;
            *(undefined4 *)(param_3 + 5) = uVar2;
            *(undefined4 *)((longlong)param_3 + 0x2c) = uVar3;
        }
        if ((param_6 & 4) != 0) {
            *(undefined4 *)((longlong)param_3 + 0x44) = param_5[9];
            *(undefined4 *)(param_3 + 9) = param_5[10];
            *(undefined4 *)((longlong)param_3 + 0x4c) = param_5[0xb];
            *(undefined4 *)(param_3 + 10) = param_5[0xc];
        }
        if ((param_6 & 8) != 0) {
            param_3[6] = *(undefined8 *)(param_5 + 4);
            param_3[7] = *(undefined8 *)(param_5 + 6);
        }
        if ((param_6 & 0x10) != 0) {
            *(undefined4 *)((longlong)param_3 + 0x54) = param_5[0xd];
        }
        if ((param_6 & 0x20) != 0) {
            *(undefined4 *)(param_3 + 0xb) = param_5[0xe];
        }
        if ((param_6 >> 0x13 & 1) != 0) {
            *(undefined4 *)((longlong)param_3 + 0x5c) = param_5[0xf];
        }
    }
    return param_3;
}



int FUN_1403919f0(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *)0x0) {
            *param_1 = &PTR_LAB_140b65fc8;
            if ((longlong *)param_1[2] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[2] + 8))();
            }
            if ((longlong *)param_1[3] != (longlong *)0x0) {
                (**(code **)(*(longlong *)param_1[3] + 8))();
            }
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_140391a50(int *param_1,longlong param_2,int *param_3)

{
    float fVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    float fVar5;
    float fStack32;
    float fStack28;
    float fStack16;
    float fStack12;

    if (1 < *param_3) {
        return 0x80070057;
    }
    *(longlong *)(param_1 + 0x24) = param_2;
    param_1[0x26] = *(int *)(param_2 + 0x370);
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    iVar2 = param_3[5];
    iVar3 = param_3[6];
    iVar4 = param_3[7];
    param_1[4] = param_3[4];
    param_1[5] = iVar2;
    param_1[6] = iVar3;
    param_1[7] = iVar4;
    param_1[8] = param_3[8];
    param_1[9] = param_3[9];
    param_1[10] = param_3[10];
    param_1[0xb] = param_3[0xb];
    param_1[0xc] = param_3[0xc];
    param_1[0xd] = param_3[0xd];
    param_1[0xe] = param_3[0xe];
    param_1[0xf] = param_3[0xf];
    param_1[0x10] = param_3[0x10];
    *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_3 + 0xd);
    if (1.0 < (float)param_1[2]) {
        param_1[2] = 0x3f800000;
    }
    fVar5 = (float)param_1[2];
    if (1.0 < fVar5 + (float)param_1[3]) {
        param_1[3] = (int)(1.0 - fVar5);
    }
    param_1[0x28] = (int)(1.0 / (float)(ulonglong)(uint)param_1[0xc]);
    if (fVar5 == 0.0) {
        fVar5 = 0.0;
    }
    else {
        fVar5 = 1.0 / fVar5;
    }
    param_1[0x29] = (int)fVar5;
    if ((float)param_1[3] == 0.0) {
        fVar5 = 0.0;
    }
    else {
        fVar5 = 1.0 / (float)param_1[3];
    }
    param_1[0x2a] = (int)fVar5;
    if ((float)param_1[0xf] == 0.0) {
        fVar5 = 1000000.0;
    }
    else {
        fVar5 = 3.141593 / (float)param_1[0xf];
    }
    fVar1 = (float)param_1[8];
    param_1[0x2b] = (int)fVar5;
    if (fVar1 == 0.0) {
        fVar5 = 100000.0;
    }
    else {
        fVar5 = 1.0 / (fVar1 * *(float *)(param_2 + 0x1584));
    }
    param_1[0x2c] = (int)fVar5;
    param_1[0x2d] = (int)(fVar1 * fVar1);
    *(undefined (*) [16])(param_1 + 0x14) =
            CONCAT412(fStack28 + 0.0,
                      CONCAT48(fStack32 + 0.0,
                               CONCAT44((float)((uint)fVar1 ^ 0x80000000) + (float)param_1[6],
                                        (float)((uint)fVar1 ^ 0x80000000) + (float)param_1[4])));
    *(undefined (*) [16])(param_1 + 0x18) =
            CONCAT412(fStack12 + 0.0,
                      CONCAT48(fStack16 + 0.0,
                               CONCAT44(fVar1 + (float)param_1[6],fVar1 + (float)param_1[4])));
    return 0;
}



undefined8 FUN_140391c30(undefined8 param_1,float param_2,int *param_3)

{
    undefined2 uVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    float fVar5;
    float fVar6;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    int iVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    float fVar12;
    uint uVar13;
    float fVar14;
    uint uVar15;
    undefined local_res8 [8];
    undefined local_res10 [16];
    int local_res20;
    float fStack144;
    float fStack140;
    float fStack128;
    float fStack124;

    fVar8 = (float)(ulonglong)(uint)(*(int *)(*(longlong *)(param_3 + 0x24) + 0x370) - param_3[0x26])
            * (float)param_3[0x28];
    param_3[0x27] = (int)fVar8;
    fVar12 = ((float)param_3[10] - (float)param_3[9]) * fVar8 + (float)param_3[9];
    fVar5 = (float)FUN_1408fe3d0(fVar12);
    fVar6 = (float)FUN_1408fc950(fVar12);
    puVar2 = (undefined2 *)FUN_1401c96d0(fVar6,fVar5,local_res10);
    fVar8 = 0.0;
    puVar3 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da,0,local_res8);
    puVar4 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_00,extraout_XMM0_Da_00);
    uVar15 = 0x80000000;
    local_res20 = CONCAT22(*puVar3,*puVar4);
    uVar1 = *puVar2;
    param_3[0x2f] = local_res20;
    *(undefined2 *)(param_3 + 0x30) = uVar1;
    uVar13 = (uint)(fVar12 + (float)param_3[0x10]) ^ 0x80000000;
    fVar14 = (float)((uint)(param_2 * (float)param_3[0xb] * (float)param_3[0x2b]) ^ 0x80000000);
    fVar6 = fVar14 * fVar6;
    fVar14 = fVar14 * fVar5;
    fVar5 = (float)FUN_1408fe3d0(uVar13,fVar8,fVar5);
    fVar12 = (float)FUN_1408fc950(uVar13);
    uVar11 = 0x40c90fdb;
    param_3[0x1c] = (int)fVar12;
    param_3[0x1d] = (uint)fVar5 ^ uVar15;
    iVar7 = FUN_1408fde98((float)((uint)fVar5 ^ uVar15) * fVar14 + fVar6 * fVar12 +
                          (float)param_3[0x1e],0x40c90fdb);
    param_3[0x1e] = iVar7;
    param_3[0x20] = (int)fVar5;
    param_3[0x21] = (int)fVar12;
    iVar7 = FUN_1408fde98(fVar14 * fVar12 + fVar6 * fVar5 + (float)param_3[0x22],uVar11);
    param_3[0x22] = iVar7;
    if (*param_3 == 0) {
        fVar5 = (float)param_3[0xb];
        fVar6 = (float)param_3[8];
        fVar12 = (float)(ulonglong)
                (uint)(*(int *)(*(longlong *)(param_3 + 0x24) + 0x370) - param_3[0x26]);
        fVar14 = fVar12 * 1.0 * 0.001 * fVar5;
        fVar9 = fVar12 * 0.0 * 0.001 * fVar5;
        fVar10 = fVar12 * 0.0 * 0.001 * fVar5;
        fVar5 = fVar12 * 0.0 * 0.001 * fVar5;
        *(undefined (*) [16])(param_3 + 0x14) =
                CONCAT412(fStack140 + fVar8 + fVar5,
                          CONCAT48(fStack144 + fVar8 + fVar10,
                                   CONCAT44((float)((uint)fVar6 ^ uVar15) + (float)param_3[6] + fVar9,
                                            (float)((uint)fVar6 ^ uVar15) + (float)param_3[4] + fVar14)));
        *(undefined (*) [16])(param_3 + 0x18) =
                CONCAT412(fStack124 + fVar8 + fVar5,
                          CONCAT48(fStack128 + fVar8 + fVar10,
                                   CONCAT44(fVar6 + (float)param_3[6] + fVar9,
                                            fVar6 + (float)param_3[4] + fVar14)));
    }
    fVar5 = (float)param_3[0x27];
    if (((float)param_3[2] <= fVar5) || ((float)param_3[2] == fVar8)) {
        if (fVar8 <= 1.0 - fVar5) {
            fVar8 = 1.0 - fVar5;
        }
        if ((float)param_3[3] <= fVar8) {
            param_3[0x2e] = 0x3f800000;
        }
        else {
            param_3[0x2e] = (int)(fVar8 * (float)param_3[0x2a]);
        }
    }
    else {
        param_3[0x2e] = (int)(fVar5 * (float)param_3[0x29]);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140391f40(int *param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,
                   float *param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    int *piVar4;
    undefined2 *puVar5;
    undefined2 *puVar6;
    ushort uVar7;
    ushort uVar8;
    uint uVar9;
    ushort uVar10;
    undefined4 *puVar11;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    undefined4 extraout_XMM0_Da_03;
    undefined4 extraout_XMM0_Da_04;
    undefined4 extraout_XMM0_Da_05;
    undefined4 extraout_XMM0_Da_06;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    undefined4 uVar20;
    float local_res8 [2];
    undefined4 local_c8;
    float local_c4;
    undefined local_be [4];
    undefined local_ba [2];
    undefined local_b8 [2];
    undefined local_b6 [2];
    undefined local_b4 [4];
    undefined local_b0 [4];
    undefined local_ac [4];
    undefined local_a8 [2];
    undefined local_a6 [14];
    undefined local_98 [16];
    undefined local_88 [96];

    iVar3 = *param_1;
    if (iVar3 == 0) {
        fVar13 = *(float *)(*(longlong *)(param_1 + 0x24) + 0x1584);
        fVar19 = ((float)param_1[4] - *param_5) * fVar13;
        fVar14 = ((float)param_1[6] - param_5[1]) * fVar13;
        fVar18 = (*param_3 - *param_5) * fVar13 - fVar19;
        fVar12 = (param_3[1] - param_5[1]) * fVar13 - fVar14;
        fVar19 = (param_3[4] - *param_5) * fVar13 - fVar19;
        fVar14 = (param_3[5] - param_5[1]) * fVar13 - fVar14;
        fVar13 = (float)param_1[0x2e];
        local_98 = CONCAT412(fVar13 * 0.0,
                             CONCAT48(fVar13 * 0.0,
                                      CONCAT44(fVar13 * ((float)param_1[0xd] + (float)param_1[0xe]) *
                                               0.5,
                                               fVar13 * ((float)param_1[0xe] - (float)param_1[0xd]) *
                                               0.5)));
        puVar11 = param_4;
        FUN_1401c95b0(&local_c4,local_98);
        uVar1 = puVar11[1];
        uVar2 = *puVar11;
        uVar20 = 0x3f800000;
        param_2[3] = 0x3f800000;
        *param_2 = uVar2;
        param_2[1] = uVar1;
        param_2[2] = 0x3f800000;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar2,fVar12,local_res8);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_03,fVar18);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[4] = local_c8;
        fVar13 = (float)param_1[0x2b] * fVar12;
        fVar17 = (float)param_1[0x2b] * fVar18;
        fVar15 = (float)param_1[0x21] * fVar13;
        fVar16 = (float)param_1[0x1c] * fVar17;
        fVar13 = (float)param_1[0x1d] * fVar13;
        puVar5 = (undefined2 *)
                FUN_1401c96d0(fVar15,(float)param_1[0x20] * fVar17 + fVar15 + 0.0,local_be);
        puVar6 = (undefined2 *)FUN_1401c96d0(fVar13,fVar16 + fVar13 + 0.0);
        fVar13 = local_c4;
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[5] = local_c8;
        param_2[6] = local_c4;
        param_2[7] = param_1[0x2f];
        *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_1 + 0x30);
        FUN_140325540((longlong)param_2 + 0x22,param_1 + 0x2c);
        uVar1 = param_4[4];
        uVar2 = param_4[1];
        param_2[9] = uVar1;
        param_2[10] = uVar2;
        param_2[0xc] = 0x3f800000;
        param_2[0xb] = uVar20;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,fVar12,local_b6);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_04,fVar19);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0xd] = local_c8;
        fVar12 = (float)param_1[0x2b] * fVar12;
        fVar15 = (float)param_1[0x2b] * fVar19;
        fVar17 = (float)param_1[0x1c] * fVar15;
        fVar16 = (float)param_1[0x1d] * fVar12;
        fVar12 = (float)param_1[0x21] * fVar12;
        puVar5 = (undefined2 *)
                FUN_1401c96d0(fVar12,(float)param_1[0x20] * fVar15 + fVar12 + 0.0,local_ba);
        puVar6 = (undefined2 *)FUN_1401c96d0(fVar16,fVar17 + fVar16 + 0.0);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0xe] = local_c8;
        param_2[0xf] = local_c4;
        param_2[0x10] = param_1[0x2f];
        *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(param_1 + 0x30);
        FUN_140325540((longlong)param_2 + 0x46,param_1 + 0x2c);
        uVar1 = *param_4;
        uVar2 = param_4[5];
        param_2[0x12] = uVar1;
        param_2[0x13] = uVar2;
        param_2[0x15] = 0x3f800000;
        param_2[0x14] = uVar20;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,fVar14,local_ac);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_05,fVar18);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0x16] = local_c8;
        fVar12 = (float)param_1[0x2b] * fVar14;
        fVar18 = (float)param_1[0x2b] * fVar18;
        fVar15 = (float)param_1[0x1c] * fVar18;
        fVar17 = (float)param_1[0x1d] * fVar12;
        fVar12 = (float)param_1[0x21] * fVar12;
        puVar5 = (undefined2 *)
                FUN_1401c96d0(fVar12,(float)param_1[0x20] * fVar18 + fVar12 + 0.0,local_a8);
        puVar6 = (undefined2 *)FUN_1401c96d0(fVar17,fVar15 + fVar17 + 0.0);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0x17] = local_c8;
        param_2[0x18] = local_c4;
        param_2[0x19] = param_1[0x2f];
        *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 0x30);
        FUN_140325540((longlong)param_2 + 0x6a,param_1 + 0x2c);
        uVar1 = param_4[4];
        uVar2 = param_4[5];
        param_2[0x1b] = uVar1;
        param_2[0x1c] = uVar2;
        param_2[0x1e] = 0x3f800000;
        param_2[0x1d] = uVar20;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,fVar14,local_a6);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_06,fVar19);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0x1f] = local_c8;
        fVar14 = (float)param_1[0x2b] * fVar14;
        fVar19 = (float)param_1[0x2b] * fVar19;
        fVar12 = (float)param_1[0x1c] * fVar19;
        fVar15 = (float)param_1[0x1d] * fVar14;
        fVar14 = (float)param_1[0x21] * fVar14;
        puVar5 = (undefined2 *)
                FUN_1401c96d0(fVar14,(float)param_1[0x20] * fVar19 + fVar14 + 0.0,local_b0);
        puVar6 = (undefined2 *)FUN_1401c96d0(fVar15,fVar12 + fVar15 + 0.0);
        local_c4 = (float)CONCAT22(*puVar5,*puVar6);
        param_2[0x20] = local_c4;
        param_2[0x21] = fVar13;
        param_2[0x22] = param_1[0x2f];
        *(undefined2 *)(param_2 + 0x23) = *(undefined2 *)(param_1 + 0x30);
        FUN_140325540((longlong)param_2 + 0x8e,param_1 + 0x2c);
    }
    else if (iVar3 == 1) {
        piVar4 = &DAT_140c7974c;
        if (param_1[0xd] == iVar3 + -1) {
            piVar4 = param_1 + 0x2f;
        }
        uVar8 = *(ushort *)(piVar4 + 1);
        iVar3 = *piVar4;
        fVar15 = 1.0;
        local_res8[0] = (float)((uint)local_res8[0] & 0xffff0000 | (uint)uVar8);
        fVar13 = *(float *)(*(longlong *)(param_1 + 0x24) + 0x1584);
        fVar19 = (float)param_1[0x2e] * (float)param_1[0xe];
        fVar14 = ((float)param_1[4] - *param_5) * fVar13;
        fVar12 = ((float)param_1[6] - param_5[1]) * fVar13;
        uVar1 = *param_4;
        fVar17 = (*param_3 - *param_5) * fVar13 - fVar14;
        fVar18 = (param_3[1] - param_5[1]) * fVar13 - fVar12;
        local_88._0_16_ =
                CONCAT412((param_3[7] - param_5[3]) * fVar13 - 0.0,
                          CONCAT48((param_3[6] - param_5[2]) * fVar13 - 0.0,
                                   CONCAT44((param_3[5] - param_5[1]) * fVar13 - fVar12,
                                            (param_3[4] - *param_5) * fVar13 - fVar14)));
        uVar2 = param_4[1];
        *param_2 = uVar1;
        param_2[3] = 0x3f800000;
        param_2[1] = uVar2;
        param_2[2] = 0x3f800000;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,fVar18,local_b8);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da,fVar17);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[4] = local_c8;
        FUN_140325540();
        uVar10 = 0;
        uVar9 = (uint)fVar19 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar7 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar7 = (ushort)((((uint)fVar19 & 0x7fffff | 0x800000) >>
                                                                   (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar7 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar7 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x16) = uVar7 | (ushort)((uint)fVar19 >> 0x10) & 0x8000;
        param_2[6] = iVar3;
        *(ushort *)(param_2 + 7) = uVar8;
        local_c4 = fVar15;
        if (param_1[0xd] == 0) {
            local_c4 = 0.0;
        }
        uVar9 = (uint)local_c4 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)local_c4 & 0x7fffff | 0x800000) >>
                                                                     (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x1e) = uVar8 | (ushort)((uint)local_c4 >> 0x10) & 0x8000;
        uVar1 = param_4[4];
        uVar2 = param_4[1];
        param_2[0xb] = 0x3f800000;
        param_2[8] = uVar1;
        param_2[9] = uVar2;
        param_2[10] = fVar15;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,fVar18,local_b4);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_00,local_88._0_4_);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0xc] = local_c8;
        FUN_140325540();
        uVar9 = (uint)fVar19 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)fVar19 & 0x7fffff | 0x800000) >>
                                                                   (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x36) = uVar8 | (ushort)((uint)fVar19 >> 0x10) & 0x8000;
        param_2[0xe] = iVar3;
        *(undefined2 *)(param_2 + 0xf) = local_res8[0]._0_2_;
        local_res8[0] = fVar15;
        if (param_1[0xd] == 0) {
            local_res8[0] = 0.0;
        }
        uVar9 = (uint)local_res8[0] & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)local_res8[0] & 0x7fffff | 0x800000) >>
                                                                          (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x3e) = uVar8 | (ushort)((uint)local_res8[0] >> 0x10) & 0x8000;
        uVar1 = *param_4;
        uVar2 = param_4[5];
        param_2[0x13] = 0x3f800000;
        param_2[0x10] = uVar1;
        param_2[0x11] = uVar2;
        param_2[0x12] = fVar15;
        local_c4 = fVar19;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,local_88._4_4_,local_res8);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_01,fVar17);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0x14] = local_c8;
        FUN_140325540();
        uVar9 = (uint)fVar19 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)fVar19 & 0x7fffff | 0x800000) >>
                                                                   (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x56) = uVar8 | (ushort)((uint)fVar19 >> 0x10) & 0x8000;
        param_2[0x16] = iVar3;
        *(undefined2 *)(param_2 + 0x17) = local_res8[0]._0_2_;
        local_c4 = fVar15;
        if (param_1[0xd] == 0) {
            local_c4 = 0.0;
        }
        uVar9 = (uint)local_c4 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)local_c4 & 0x7fffff | 0x800000) >>
                                                                     (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x5e) = uVar8 | (ushort)((uint)local_c4 >> 0x10) & 0x8000;
        uVar1 = param_4[4];
        uVar2 = param_4[5];
        param_2[0x1b] = 0x3f800000;
        param_2[0x18] = uVar1;
        param_2[0x19] = uVar2;
        param_2[0x1a] = fVar15;
        puVar5 = (undefined2 *)FUN_1401c96d0(uVar1,local_88._4_4_,local_be);
        puVar6 = (undefined2 *)FUN_1401c96d0(extraout_XMM0_Da_02,local_88._0_4_);
        local_c8 = CONCAT22(*puVar5,*puVar6);
        param_2[0x1c] = local_c8;
        FUN_140325540();
        uVar9 = (uint)fVar19 & 0x7fffffff;
        if (uVar9 < 0x33800000) {
            uVar8 = 0;
        }
        else if (uVar9 < 0x387ff000) {
            uVar8 = (ushort)((((uint)fVar19 & 0x7fffff | 0x800000) >>
                                                                   (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar9 < 0x47fff000) {
            uVar8 = (ushort)(uVar9 + 0xc8001000 >> 0xd);
        }
        else {
            uVar8 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x76) = uVar8 | (ushort)((uint)fVar19 >> 0x10) & 0x8000;
        param_2[0x1e] = iVar3;
        *(undefined2 *)(param_2 + 0x1f) = local_res8[0]._0_2_;
        if (param_1[0xd] == 0) {
            fVar15 = 0.0;
        }
        uVar9 = (uint)fVar15 & 0x7fffffff;
        uVar8 = (ushort)((uint)fVar15 >> 0x10) & 0x8000;
        if (0x337fffff < uVar9) {
            if (uVar9 < 0x387ff000) {
                *(ushort *)((longlong)param_2 + 0x7e) =
                        (ushort)((((uint)fVar15 & 0x7fffff | 0x800000) >>
                                                                       (0x71U - (char)(uVar9 >> 0x17) & 0x1f)) + 0x1000 >> 0xd) | uVar8;
                return;
            }
            if (uVar9 < 0x47fff000) {
                *(ushort *)((longlong)param_2 + 0x7e) = (ushort)(uVar9 + 0xc8001000 >> 0xd) | uVar8;
                return;
            }
            uVar10 = 0x43ff;
        }
        *(ushort *)((longlong)param_2 + 0x7e) = uVar10 | uVar8;
    }
    return;
}



int FUN_140392b70(undefined8 *param_1)

{
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *)0x0) {
            *param_1 = &PTR_LAB_140b65ff8;
            FUN_14018b900(param_1[3],0);
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140392bd0(undefined8 *param_1)

{
    longlong lVar1;
    longlong **pplVar2;

    *param_1 = &PTR_LAB_140b66020;
    if (param_1[0x1a] != 0) {
        *(longlong *)(*(longlong *)param_1[2] + 0x10d8) =
                *(longlong *)(*(longlong *)param_1[2] + 0x10d8) + -1;
        if ((undefined8 *)param_1[0x1a] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[0x1a] = param_1[0x1b];
        }
        if (param_1[0x1b] != 0) {
            *(undefined8 *)(param_1[0x1b] + 0xd0) = param_1[0x1a];
        }
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[5] + 8))();
        param_1[5] = 0;
    }
    pplVar2 = (longlong **)(param_1 + 6);
    lVar1 = 4;
    do {
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
            *pplVar2 = (longlong *)0x0;
        }
        pplVar2 = pplVar2 + 1;
        lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
        param_1[10] = 0;
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xc] + 8))();
        param_1[0xc] = 0;
    }
    if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1c] = param_1[0x1d];
    }
    if (param_1[0x1d] != 0) {
        *(undefined8 *)(param_1[0x1d] + 0xe0) = param_1[0x1c];
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if ((undefined8 *)param_1[0x1a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1a] = param_1[0x1b];
    }
    if (param_1[0x1b] != 0) {
        *(undefined8 *)(param_1[0x1b] + 0xd0) = param_1[0x1a];
    }
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140392d60(longlong param_1,undefined8 *param_2)

{
    longlong *plVar1;
    undefined (*pauVar2) [12];
    undefined auVar3 [12];
    undefined auVar4 [12];
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    int *piVar9;
    undefined8 uVar10;
    undefined (*pauVar11) [12];
    longlong *plVar12;
    longlong lVar13;
    uint uVar14;
    ulonglong uVar15;
    undefined auVar16 [16];
    undefined auVar17 [16];
    float fVar18;
    float fVar19;

    *(undefined8 **)(param_1 + 0x18) = param_2;
    (**(code **)*param_2)(param_2);
    piVar9 = (int *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(int **)(param_1 + 0x20) = piVar9;
    if ((*piVar9 == 0) ||
        (uVar10 = FUN_140354930(**(undefined8 **)(param_1 + 0x10),*piVar9,param_1 + 0x28),
                -1 < (int)uVar10)) {
        uVar15 = 0;
        lVar13 = 0;
        do {
            iVar8 = *(int *)(lVar13 + 4 + *(longlong *)(param_1 + 0x20));
            if ((iVar8 != 0) &&
                (uVar10 = FUN_140354aa0(**(undefined8 **)(param_1 + 0x10),iVar8,param_1 + (uVar15 + 6) * 8)
                        , (int)uVar10 < 0)) {
                return uVar10;
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            lVar13 = lVar13 + 4;
        } while (uVar14 < 4);
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x38);
        if ((iVar8 != 0) &&
            (iVar8 = FUN_140354aa0(**(undefined8 **)(param_1 + 0x10),iVar8,param_1 + 0x50), iVar8 < 0)) {
            *(undefined8 *)(param_1 + 0x50) = 0;
        }
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x40);
        if (*(uint *)(*(longlong *)(param_1 + 0x20) + 0x44) < 0x10000) {
            uVar10 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,iVar8 * 2,0);
            if ((int)uVar10 < 0) {
                return uVar10;
            }
        }
        else {
            uVar10 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,iVar8 << 2,1,1,param_1 + 0x58);
            if ((int)uVar10 < 0) {
                return uVar10;
            }
        }
        uVar10 = (**(code **)(*DAT_140c65670 + 0x38))
                (DAT_140c65670,*(int *)(*(longlong *)(param_1 + 0x20) + 0x44) * 0x48,1,
                 param_1 + 0x60);
        uVar7 = uRam0000000140c798cc;
        uVar6 = uRam0000000140c798c8;
        uVar5 = uRam0000000140c798c4;
        if (-1 < (int)uVar10) {
            *(undefined4 *)(param_1 + 0x70) = _DAT_140c798c0;
            *(undefined4 *)(param_1 + 0x74) = uVar5;
            *(undefined4 *)(param_1 + 0x78) = uVar6;
            *(undefined4 *)(param_1 + 0x7c) = uVar7;
            auVar17 = _DAT_140c798d0;
            *(undefined (*) [16])(param_1 + 0x80) = _DAT_140c798d0;
            pauVar11 = (undefined (*) [12])(**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
            pauVar2 = pauVar11[(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + 0x44) * 6];
            while (pauVar11 < pauVar2) {
                auVar4 = *pauVar11;
                auVar3 = *pauVar11;
                pauVar11 = pauVar11[6];
                auVar16 = minps(*(undefined (*) [16])(param_1 + 0x70),
                                CONCAT412(SUB164(auVar17,0),auVar3) & (undefined  [16])0xffffffffffffffff);
                auVar17 = maxps(*(undefined (*) [16])(param_1 + 0x80),
                                CONCAT412(SUB164(auVar17,0),auVar4) & (undefined  [16])0xffffffffffffffff);
                *(undefined (*) [16])(param_1 + 0x70) = auVar16;
                *(undefined (*) [16])(param_1 + 0x80) = auVar17;
            }
            fVar18 = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x70);
            fVar19 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x74);
            *(undefined (*) [16])(param_1 + 0x90) =
                    CONCAT412((*(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x8c)) * 0.5,
                              CONCAT48((*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x88)) * 0.5,
                                       CONCAT44((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x84)) *
                                                0.5,(*(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x80))
                                                    * 0.5)));
            *(float *)(param_1 + 0xa0) = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + 0.0) * 0.5;
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 8);
            *(int *)(param_1 + 0xb0) = iVar8;
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc);
            *(int *)(param_1 + 0xb8) = (int)DAT_140c77768 + iVar8;
            *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb4) + DAT_140c77768._4_4_;
            FUN_140393020(param_1);
            *(undefined8 *)(param_1 + 0xc0) = 0;
            plVar12 = (longlong *)(**(longlong **)(param_1 + 0x10) + 0x10e0);
            if (*(longlong *)(param_1 + 0xd0) == 0) {
                *(longlong **)(param_1 + 0xd0) = plVar12;
                plVar1 = (longlong *)(param_1 + 0xd8);
                *plVar1 = *plVar12;
                *plVar12 = param_1;
                if (*plVar1 != 0) {
                    *(longlong **)(*plVar1 + 0xd0) = plVar1;
                }
            }
            plVar12 = (longlong *)(**(longlong **)(param_1 + 0x10) + 0x10d8);
            *plVar12 = *plVar12 + 1;
            uVar10 = 0;
        }
    }
    return uVar10;
}



void FUN_140393020(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    undefined4 *puVar9;

    if (*(longlong *)(param_1 + 0x58) != 0) {
        if (*(uint *)(*(longlong *)(param_1 + 0x20) + 0x44) < 0x10000) {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))
                    (*(longlong **)(param_1 + 0x58),0,0,2);
            if (lVar5 == 0) goto LAB_1403930f5;
            uVar8 = 0;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x40) != 0) {
                do {
                    lVar1 = uVar8 * 4;
                    uVar8 = uVar8 + 1;
                    *(undefined2 *)(lVar5 + -2 + uVar8 * 2) = *(undefined2 *)(lVar4 + lVar1);
                } while (uVar8 < *(uint *)(*(longlong *)(param_1 + 0x20) + 0x40));
            }
        }
        else {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
            puVar6 = (undefined4 *)
                    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))
                    (*(longlong **)(param_1 + 0x58),0,0,2);
            if (puVar6 == (undefined4 *)0x0) goto LAB_1403930f5;
            uVar8 = 0;
            if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x40) != 0) {
                puVar9 = puVar6;
                do {
                    uVar8 = uVar8 + 1;
                    *puVar9 = *(undefined4 *)((lVar4 - (longlong)puVar6) + (longlong)puVar9);
                    puVar9 = puVar9 + 1;
                } while (uVar8 < *(uint *)(*(longlong *)(param_1 + 0x20) + 0x40));
            }
        }
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x40))();
    }
    LAB_1403930f5:
    plVar3 = *(longlong **)(param_1 + 0x60);
    if ((plVar3 != (longlong *)0x0) &&
        (lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,0,0,2), lVar4 != 0)) {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x44);
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
        FUN_1407db590(lVar4,uVar7,(ulonglong)uVar2 * 0x48);
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
    }
    return;
}



undefined8 FUN_140393160(longlong param_1)

{
    float *pfVar1;
    undefined4 *puVar2;

    pfVar1 = (float *)(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x10,1,7,0);
    if (pfVar1 != (float *)0x0) {
        if (*(longlong *)(param_1 + 0x28) == 0) {
            *pfVar1 = 0.0;
        }
        else {
            *pfVar1 = (float)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0x24);
        }
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    puVar2 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,1,5,0);
    if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x34);
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x60),0x11);
    (**(code **)(*DAT_140c65670 + 0x290))
            (DAT_140c65670,3,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x40),0,
             *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x44),0,1);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140393280(longlong param_1)

{
    longlong lVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    undefined (*pauVar5) [16];
    int iVar6;
    uint uVar7;
    longlong *plVar8;
    undefined (*pauVar9) [16];
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    undefined8 in_stack_ffffffffffffff88;
    uint uVar17;
    ulonglong uVar16;
    undefined local_58 [4];
    undefined auStack84 [4];
    undefined8 uStack80;
    undefined local_48 [4];
    undefined auStack68 [4];
    undefined8 uStack64;

    uVar17 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
    uVar7 = 0;
    iVar6 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x28);
    }
    fVar15 = 0.0;
    iVar3 = DAT_140c44360;
    if (*DAT_140c63750 < DAT_140c44360) {
        iVar3 = *DAT_140c63750;
    }
    if (((&DAT_140c44370)[iVar3] == '\0') ||
        (iVar3 = 1, (*(byte *)(*(longlong *)(param_1 + 0x20) + 0x48) & 0x10) != 0)) {
        iVar3 = 0;
    }
    (**(code **)(*DAT_140c65670 + 0x178))
            (DAT_140c65670,
             *(undefined8 *)(*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x10) + 0xb0),
             iVar3 + ((uint)(0.0 < *(float *)(**(longlong **)(param_1 + 0x10) + 0x10a4)) + iVar6 * 2
                     ) * 2);
    uVar16 = (ulonglong)uVar17 << 0x20;
    pauVar5 = (undefined (*) [16])
            (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xe0,1,10,uVar16);
    if (pauVar5 != (undefined (*) [16])0x0) {
        plVar8 = (longlong *)(param_1 + 0x30);
        pauVar9 = pauVar5;
        do {
            if (*plVar8 == 0) {
                (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar7,0,0,0);
                (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar7 + 4,0,0,0);
                uVar10 = 0;
                uVar11 = 0;
                uVar12 = 0;
                uVar13 = 0;
                *pauVar9 = ZEXT816(0);
            }
            else {
                (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar7,*(undefined8 *)(*plVar8 + 0x50));
                (**(code **)(*DAT_140c65670 + 0x160))
                        (DAT_140c65670,uVar7 + 4,*(undefined8 *)(*plVar8 + 0x58),0,0);
                lVar1 = *plVar8;
                uVar10 = *(undefined4 *)(lVar1 + 0x84);
                uVar11 = *(undefined4 *)(lVar1 + 0x88);
                uVar12 = *(undefined4 *)(lVar1 + 0x8c);
                *(undefined4 *)*pauVar9 = *(undefined4 *)(lVar1 + 0x80);
                *(undefined4 *)(*pauVar9 + 4) = uVar10;
                *(undefined4 *)(*pauVar9 + 8) = uVar11;
                *(undefined4 *)(*pauVar9 + 0xc) = uVar12;
                uVar10 = *(undefined4 *)(lVar1 + 0x90);
                uVar11 = *(undefined4 *)(lVar1 + 0x94);
                uVar12 = *(undefined4 *)(lVar1 + 0x98);
                uVar13 = *(undefined4 *)(lVar1 + 0x9c);
            }
            uVar7 = uVar7 + 1;
            pauVar9[1] = CONCAT412(uVar13,CONCAT48(uVar12,CONCAT44(uVar11,uVar10)));
            pauVar9 = pauVar9[2];
            plVar8 = plVar8 + 1;
        } while (uVar7 < 4);
        lVar1 = *(longlong *)(param_1 + 0x30);
        _local_58 = ZEXT816(0);
        _local_48 = ZEXT816(0);
        fVar14 = fVar15;
        if (lVar1 != 0) {
            fVar14 = *(float *)(lVar1 + 0x4c);
            _local_58 = CONCAT124(SUB1612(_local_58 >> 0x20,0),fVar14);
            _local_48 = CONCAT124(SUB1612(_local_48 >> 0x20,0),*(undefined4 *)(lVar1 + 0x48));
        }
        lVar1 = *(longlong *)(param_1 + 0x38);
        if (lVar1 != 0) {
            _local_58 = CONCAT44(*(float *)(lVar1 + 0x4c),local_58);
            _local_48 = CONCAT44(*(undefined4 *)(lVar1 + 0x48),local_48);
            fVar14 = fVar14 + *(float *)(lVar1 + 0x4c);
        }
        lVar1 = *(longlong *)(param_1 + 0x40);
        if (lVar1 != 0) {
            _local_58 = CONCAT48(*(float *)(lVar1 + 0x4c),_local_58);
            _local_48 = CONCAT48(*(undefined4 *)(lVar1 + 0x48),_local_48);
            fVar14 = fVar14 + *(float *)(lVar1 + 0x4c);
        }
        lVar1 = *(longlong *)(param_1 + 0x48);
        if (lVar1 != 0) {
            _local_58 = CONCAT412(*(float *)(lVar1 + 0x4c),_local_58);
            _local_48 = CONCAT412(*(undefined4 *)(lVar1 + 0x48),_local_48);
            fVar14 = fVar14 + *(float *)(lVar1 + 0x4c);
        }
        *(undefined4 *)pauVar5[8] = local_58;
        *(undefined4 *)(pauVar5[8] + 4) = auStack84;
        *(undefined4 *)(pauVar5[8] + 8) = (undefined4)uStack80;
        *(undefined4 *)(pauVar5[8] + 0xc) = uStack80._4_4_;
        *(undefined4 *)pauVar5[9] = local_48;
        *(undefined4 *)(pauVar5[9] + 4) = auStack68;
        *(undefined4 *)(pauVar5[9] + 8) = (undefined4)uStack64;
        *(undefined4 *)(pauVar5[9] + 0xc) = uStack64._4_4_;
        if (fVar14 == fVar15) {
            *(undefined4 *)pauVar5[0xb] = 0x4b189680;
        }
        else {
            *(float *)pauVar5[0xb] = 1.0 / fVar14;
        }
        piVar2 = DAT_140c63750;
        iVar6 = *DAT_140c63750;
        iVar3 = DAT_140c445f0;
        if (iVar6 < DAT_140c445f0) {
            iVar3 = iVar6;
        }
        iVar4 = DAT_140c44650;
        if (iVar6 < DAT_140c44650) {
            iVar4 = iVar6;
        }
        fVar15 = 1.0 / (*(float *)(&DAT_140c44600 + (longlong)iVar3 * 4) -
                        *(float *)(&DAT_140c44660 + (longlong)iVar4 * 4));
        uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x18);
        *(ulonglong *)pauVar5[10] = CONCAT44(uVar10,uVar10);
        *(float *)(pauVar5[10] + 8) = fVar15;
        iVar6 = DAT_140c44650;
        if (*piVar2 < DAT_140c44650) {
            iVar6 = *piVar2;
        }
        *(uint *)(pauVar5[10] + 0xc) =
                (uint)(fVar15 * *(float *)(&DAT_140c44660 + (longlong)iVar6 * 4)) ^ 0x80000000;
        iVar6 = DAT_140c443a0;
        if (*piVar2 < DAT_140c443a0) {
            iVar6 = *piVar2;
        }
        *(undefined4 *)(pauVar5[0xb] + 4) = *(undefined4 *)(&DAT_140c443b0 + (longlong)iVar6 * 4);
        *(undefined4 *)(pauVar5[0xb] + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x30);
        if (*(longlong *)(param_1 + 0x50) == 0) {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,*(undefined8 *)(&DAT_000015b0 + **(longlong **)(param_1 + 0x10)),
                     0,0);
            uVar16 = 0;
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,*(undefined8 *)(**(longlong **)(param_1 + 0x10) + 0x15b8),0,0);
            uVar12 = uRam0000000140c7786c;
            uVar11 = uRam0000000140c77868;
            uVar10 = uRam0000000140c77864;
            *(undefined4 *)pauVar5[0xc] = _DAT_140c77860;
            *(undefined4 *)(pauVar5[0xc] + 4) = uVar10;
            *(undefined4 *)(pauVar5[0xc] + 8) = uVar11;
            *(undefined4 *)(pauVar5[0xc] + 0xc) = uVar12;
            uVar12 = uRam0000000140c7787c;
            uVar11 = uRam0000000140c77878;
            uVar10 = uRam0000000140c77874;
            *(undefined4 *)pauVar5[0xd] = _DAT_140c77870;
            *(undefined4 *)(pauVar5[0xd] + 4) = uVar10;
            *(undefined4 *)(pauVar5[0xd] + 8) = uVar11;
            *(undefined4 *)(pauVar5[0xd] + 0xc) = uVar12;
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xd,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x50));
            uVar16 = 0;
            (**(code **)(*DAT_140c65670 + 0x160))
                    (DAT_140c65670,0xe,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x58),0,0);
            lVar1 = *(longlong *)(param_1 + 0x50);
            uVar10 = *(undefined4 *)(lVar1 + 0x84);
            uVar11 = *(undefined4 *)(lVar1 + 0x88);
            uVar12 = *(undefined4 *)(lVar1 + 0x8c);
            *(undefined4 *)pauVar5[0xc] = *(undefined4 *)(lVar1 + 0x80);
            *(undefined4 *)(pauVar5[0xc] + 4) = uVar10;
            *(undefined4 *)(pauVar5[0xc] + 8) = uVar11;
            *(undefined4 *)(pauVar5[0xc] + 0xc) = uVar12;
            uVar10 = *(undefined4 *)(lVar1 + 0x94);
            uVar11 = *(undefined4 *)(lVar1 + 0x98);
            uVar12 = *(undefined4 *)(lVar1 + 0x9c);
            *(undefined4 *)pauVar5[0xd] = *(undefined4 *)(lVar1 + 0x90);
            *(undefined4 *)(pauVar5[0xd] + 4) = uVar10;
            *(undefined4 *)(pauVar5[0xd] + 8) = uVar11;
            *(undefined4 *)(pauVar5[0xd] + 0xc) = uVar12;
        }
        (**(code **)(*DAT_140c65670 + 0x118))();
    }
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x60),0x11);
    (**(code **)(*DAT_140c65670 + 0x290))
            (DAT_140c65670,3,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x40),
             uVar16 & 0xffffffff00000000,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x44),0,1);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140393740(longlong *param_1,undefined (*param_2) [16],ulonglong param_3,longlong param_4)

{
    uint *puVar1;
    float fVar2;
    float fVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined auVar10 [16];
    uint uVar11;
    int iVar12;
    undefined8 uVar13;
    longlong lVar14;
    longlong lVar15;
    uint *puVar16;
    undefined4 *puVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    uint *puVar20;
    ulonglong uVar21;
    float fStack144;
    undefined4 uStack128;
    undefined local_78 [4];
    undefined auStack116 [8];
    undefined4 uStack108;
    undefined local_68 [8];
    float fStack96;

    if ((param_3 & 4) != 0) {
        _local_78 = CONCAT124(_auStack116,0xffffffff);
        (**(code **)(*param_1 + 0x20))(param_1,local_78);
        _local_68 = minps(param_2[1],*(undefined (*) [16])(param_1 + 0x10));
        _local_78 = maxps(*param_2,*(undefined (*) [16])(param_1 + 0xe));
        if ((SUB164(_local_78,0) <= SUB164(_local_68,0)) &&
            (SUB164(_local_78 >> 0x20,0) <= SUB164(_local_68 >> 0x20,0))) {
            auVar10 = ZEXT816(4) * ZEXT416(*(uint *)(param_1[4] + 0x44));
            uVar13 = SUB168(auVar10,0);
            if (SUB168(auVar10 >> 0x40,0) != 0) {
                uVar13 = 0xffffffffffffffff;
            }
            lVar14 = FUN_14018b280(0,0,SUB168(_local_78,0),SUB168(_local_68,0),uVar13,0);
            lVar15 = (**(code **)(*(longlong *)param_1[3] + 0x20))();
            uVar18 = 0;
            if (*(int *)(param_1[4] + 0x44) != 0) {
                do {
                    fVar2 = *(float *)(lVar15 + 4 + uVar18 * 0x48);
                    fVar3 = *(float *)(lVar15 + uVar18 * 0x48);
                    if (local_78 <= fVar3) {
                        uVar11 = 0;
                        if (local_68._0_4_ < fVar3) {
                            uVar11 = 2;
                        }
                    }
                    else {
                        uVar11 = 1;
                    }
                    if (auStack116._0_4_ <= fVar2) {
                        if (local_68._4_4_ < fVar2) {
                            uVar11 = uVar11 | 8;
                        }
                    }
                    else {
                        uVar11 = uVar11 | 4;
                    }
                    fStack144 = SUB164(ZEXT1216(CONCAT48(*(undefined4 *)(lVar15 + 8 + uVar18 * 0x48),
                                                         CONCAT44(fVar2,fVar3))) >> 0x40,0);
                    if (auStack116._4_4_ <= fStack144) {
                        if (fStack96 < fStack144) {
                            uVar11 = uVar11 | 0x20;
                        }
                    }
                    else {
                        uVar11 = uVar11 | 0x10;
                    }
                    *(uint *)(lVar14 + uVar18 * 4) = uVar11;
                    uVar11 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar11;
                } while (uVar11 < *(uint *)(param_1[4] + 0x44));
            }
            puVar16 = (uint *)(**(code **)(*(longlong *)param_1[3] + 0x18))();
            uVar11 = *(uint *)(param_1[4] + 0x40);
            if (puVar16 < puVar16 + uVar11) {
                puVar20 = puVar16 + 2;
                do {
                    uVar21 = (ulonglong)puVar20[-2];
                    uVar19 = (ulonglong)puVar20[-1];
                    uVar18 = (ulonglong)*puVar20;
                    if ((*(uint *)(lVar14 + uVar18 * 4) &
                         *(uint *)(lVar14 + uVar21 * 4) & *(uint *)(lVar14 + uVar19 * 4)) == 0) {
                        _local_78 = ZEXT1216(CONCAT48(*(undefined4 *)(lVar15 + 8 + uVar19 * 0x48),
                                                      CONCAT44(*(undefined4 *)(lVar15 + 4 + uVar19 * 0x48),
                                                               *(undefined4 *)(lVar15 + uVar19 * 0x48))));
                        uVar4 = *(undefined4 *)(lVar15 + 8 + uVar18 * 0x48);
                        uVar5 = *(undefined4 *)(lVar15 + 4 + uVar18 * 0x48);
                        uVar6 = *(undefined4 *)(lVar15 + uVar18 * 0x48);
                        uVar7 = *(undefined4 *)(lVar15 + 8 + uVar21 * 0x48);
                        uVar8 = *(undefined4 *)(lVar15 + 4 + uVar21 * 0x48);
                        uVar9 = *(undefined4 *)(lVar15 + uVar21 * 0x48);
                        if ((*(code **)(param_4 + 0x28) == (code *)0x0) ||
                            (iVar12 = (**(code **)(param_4 + 0x28))(), iVar12 != 0)) {
                            iVar12 = *(int *)(param_4 + 0x10);
                            if (*(int *)(param_4 + 0xc) == iVar12) {
                                if (iVar12 == 0) {
                                    *(undefined4 *)(param_4 + 0x10) = 0x10;
                                }
                                else {
                                    *(int *)(param_4 + 0x10) = iVar12 * 2;
                                }
                                uVar13 = FUN_14018c320(*(undefined8 *)(param_4 + 0x18));
                                *(undefined8 *)(param_4 + 0x18) = uVar13;
                            }
                            fStack144 = SUB164(ZEXT1216(CONCAT48(uVar7,CONCAT44(uVar8,uVar9))) >> 0x40,0);
                            puVar17 = (undefined4 *)
                                    ((ulonglong)(uint)(*(int *)(param_4 + 0xc) * 3) * 0x10 +
                                     *(longlong *)(param_4 + 0x18));
                            *puVar17 = uVar9;
                            puVar17[1] = uVar8;
                            puVar17[2] = fStack144;
                            puVar17[3] = 0;
                            uStack128 = SUB164(ZEXT1216(CONCAT48(uVar4,CONCAT44(uVar5,uVar6))) >> 0x40,0);
                            puVar17[4] = uVar6;
                            puVar17[5] = uVar5;
                            puVar17[6] = uStack128;
                            puVar17[7] = 0;
                            puVar17[8] = local_78;
                            puVar17[9] = auStack116._0_4_;
                            puVar17[10] = auStack116._4_4_;
                            puVar17[0xb] = uStack108;
                            *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
                            if (*(longlong *)(param_4 + 0x20) != 0) {
                                FUN_14018b900();
                                *(undefined8 *)(param_4 + 0x20) = 0;
                            }
                        }
                    }
                    puVar1 = puVar20 + 1;
                    puVar20 = puVar20 + 3;
                } while (puVar1 < puVar16 + uVar11);
            }
            FUN_14018b900(lVar14,0);
        }
    }
    return;
}



int FUN_140393ac0(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140392bd0();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8
FUN_140393c50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;

    if (param_4 == (undefined8 *)0x0) {
        uVar1 = 0x80070057;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(0x38);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = 1;
            *puVar2 = &PTR_LAB_140b5fe88;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
        }
        FUN_140393740(param_1,param_2,param_3,puVar2);
        *param_4 = puVar2;
        uVar1 = 0;
    }
    return uVar1;
}



undefined8 FUN_1403942d0(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_140b787c0;
        *(undefined4 *)(puVar1 + 3) = 1;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *param_2 = puVar1;
        return 0;
    }
    *param_2 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_140394340(undefined8 param_1,float param_2,longlong param_3,undefined (*param_4) [16],
float *param_5_00,longlong param_6,uint param_5)

{
undefined (*pauVar1) [12];
longlong lVar2;
undefined auVar3 [16];
undefined4 uVar4;
undefined4 uVar5;
undefined (*pauVar6) [12];
undefined (*pauVar7) [12];
float fVar8;
undefined extraout_XMM0 [16];
float fVar10;
undefined4 uVar11;
float fVar12;
undefined auVar9 [16];

pauVar6 = (undefined (*) [12])(**(code **)(**(longlong **)(param_3 + 0x18) + 0x20))();
pauVar1 = pauVar6[(ulonglong)*(uint *)(*(longlong *)(param_3 + 0x20) + 0x44) * 6];
pauVar7 = pauVar6;
if (pauVar6 < pauVar1) {
fVar8 = DAT_140c44698;
do {
fVar10 = *param_5_00 - *(float *)*pauVar6;
fVar12 = param_5_00[1] - *(float *)(*pauVar6 + 4);
param_2 = param_5_00[2] - *(float *)(*pauVar6 + 8);
param_2 = param_2 * param_2;
fVar10 = fVar10 * fVar10 + fVar12 * fVar12 + param_2;
if (fVar10 < fVar8) {
pauVar7 = pauVar6;
fVar8 = fVar10;
}
pauVar6 = pauVar6[6];
} while (pauVar6 < pauVar1);
}
auVar9 = ZEXT416(0);
uVar11 = 0;
*param_4 = CONCAT412(param_2,*pauVar7) & (undefined  [16])0xffffffffffffffff;
if (param_6 != 0) {
if ((param_5 & 0x8003f) != 0) {
FUN_140386280(*(undefined8 *)(param_3 + 0x10),param_5_00,param_6,param_5,0);
auVar9 = extraout_XMM0;
}
if ((param_5 & 0x1fc0) != 0) {
if ((param_5 & 0x40) != 0) {
*(undefined4 *)(param_6 + 0x90) = *(undefined4 *)(*param_4 + 4);
}
if ((char)param_5 < '\0') {
auVar9 = ZEXT416(0);
*(undefined (*) [16])(param_6 + 0x40) =
CONCAT412(uVar11,pauVar7[1]) & (undefined  [16])0xffffffffffffffff;
}
if ((param_5 >> 8 & 1) != 0) {
*(undefined4 *)(param_6 + 0x94) = **(undefined4 **)(param_3 + 0x20);
}
if ((param_5 >> 9 & 1) != 0) {
lVar2 = *(longlong *)(param_3 + 0x20);
*(undefined4 *)(param_6 + 0x98) = *(undefined4 *)(lVar2 + 4);
*(undefined4 *)(param_6 + 0x9c) = *(undefined4 *)(lVar2 + 8);
*(undefined4 *)(param_6 + 0xa0) = *(undefined4 *)(lVar2 + 0xc);
*(undefined4 *)(param_6 + 0xa4) = *(undefined4 *)(lVar2 + 0x10);
}
if ((param_5 >> 10 & 1) != 0) {
*(float *)(param_6 + 0x50) = (float)(ulonglong)(byte)pauVar7[5][8] * 0.003921569;
*(float *)(param_6 + 0x54) = (float)(uint)(byte)pauVar7[5][9] * 0.003921569;
*(float *)(param_6 + 0x58) = (float)(uint)(byte)pauVar7[5][10] * 0.003921569;
fVar8 = (float)(uint)(byte)pauVar7[5][0xb] * 0.003921569;
auVar9 = ZEXT416((uint)fVar8) & (undefined  [16])0xffffffffffffffff;
*(float *)(param_6 + 0x5c) = fVar8;
}
auVar3 = _DAT_140c77860;
if ((param_5 >> 0xb & 1) != 0) {
*(undefined (*) [16])(param_6 + 0x60) = _DAT_140c77860;
uVar5 = uRam0000000140c7787c;
uVar4 = uRam0000000140c77878;
uVar11 = uRam0000000140c77874;
*(undefined4 *)(param_6 + 0x70) = _DAT_140c77870;
*(undefined4 *)(param_6 + 0x74) = uVar11;
*(undefined4 *)(param_6 + 0x78) = uVar4;
*(undefined4 *)(param_6 + 0x7c) = uVar5;
auVar9 = auVar3;
}
if ((param_5 >> 0xc & 1) != 0) {
*(undefined (*) [16])(param_6 + 0x80) = auVar9 & (undefined  [16])0x0;
}
}
if ((param_5 & 0x7e000) != 0) {
FUN_140388a30(*(undefined8 *)(param_3 + 0x10),param_4,param_6,param_5);
}
}
return param_4;
}



undefined8 * FUN_1403945c0(undefined8 *param_1,ulonglong param_2)

{
*param_1 = &PTR_FUN_140b660c0;
if ((longlong *)param_1[2] != (longlong *)0x0) {
(**(code **)(*(longlong *)param_1[2] + 8))();
param_1[2] = 0;
}
*param_1 = &PTR_FUN_140b66330;
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



undefined8 FUN_140394620(longlong param_1,longlong param_2)

{
uint uVar1;
longlong lVar2;
undefined8 uVar3;

*(longlong *)(param_1 + 8) = param_2;
uVar1 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x80);
lVar2 = **(longlong **)(*(longlong *)(param_2 + 0x10) + 0x28);
uVar3 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
uVar3 = (**(code **)(lVar2 + 0x28))
        (*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x28),uVar3,param_1 + 0x10,
         ~(uVar1 >> 0x17) & 0x10 | 2);
if (-1 < (int)uVar3) {
*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
uVar3 = 0;
}
return uVar3;
}



undefined8 FUN_1403946b0(longlong param_1,undefined8 param_2)

{
int iVar1;
uint uVar2;
undefined8 uVar3;

if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
return 1;
}
uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
        (*(longlong **)(param_1 + 0x10),param_2,0);
if ((int)uVar3 != 0) {
iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))
        (*(longlong **)(param_1 + 0x10),0xa9);
if ((iVar1 == 0) ||
(iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))
        (*(longlong **)(param_1 + 0x10),0xaa), iVar1 == 0)) {
iVar1 = 0;
}
else {
iVar1 = 1;
}
*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | iVar1 * 2;
uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))
        (*(longlong **)(param_1 + 0x10),0xab);
*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | (uVar2 & 1) << 2 | 1;
return 1;
}
return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_140394810(longlong *param_1,undefined (*param_2) [16],int param_3)

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;
longlong lVar4;
float fVar5;
float fVar6;
undefined4 local_28 [8];

local_28[0] = 0xffffffff;
(**(code **)(*param_1 + 0x28))(param_1,local_28);
if (param_3 == 0) {
lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x490))();
}
else if (param_3 == 1) {
lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x4a8))();
}
else if (param_3 == 2) {
lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x4b8))();
}
else {
if (param_3 != 3) {
fVar5 = _DAT_140c798b0 - _DAT_140c798a0;
fVar6 = fRam0000000140c798b4 - fRam0000000140c798a4;
*param_2 = CONCAT412((fRam0000000140c798ac + fRam0000000140c798bc) * 0.5,
                     CONCAT48((fRam0000000140c798a8 + fRam0000000140c798b8) * 0.5,
                              CONCAT44((fRam0000000140c798a4 + fRam0000000140c798b4) * 0.5,
                                       (_DAT_140c798a0 + _DAT_140c798b0) * 0.5)));
*(float *)param_2[1] = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0) * 0.5;
return param_2;
}
lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x4c8))();
}
uVar1 = *(undefined4 *)(lVar4 + 0x24);
uVar2 = *(undefined4 *)(lVar4 + 0x28);
uVar3 = *(undefined4 *)(lVar4 + 0x2c);
*(undefined4 *)*param_2 = *(undefined4 *)(lVar4 + 0x20);
*(undefined4 *)(*param_2 + 4) = uVar1;
*(undefined4 *)(*param_2 + 8) = uVar2;
*(undefined4 *)(*param_2 + 0xc) = uVar3;
*(undefined4 *)param_2[1] = *(undefined4 *)(lVar4 + 0x30);
return param_2;
}



undefined4 * FUN_140394920(longlong *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x28))(param_1,local_18);
    lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x490))();
    uVar1 = *(undefined4 *)(lVar4 + 0x24);
    uVar2 = *(undefined4 *)(lVar4 + 0x28);
    uVar3 = *(undefined4 *)(lVar4 + 0x2c);
    *param_2 = *(undefined4 *)(lVar4 + 0x20);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = *(undefined4 *)(lVar4 + 0x30);
    return param_2;
}



void FUN_140394fe0(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    *param_1 = &PTR_LAB_140b66190;
    FUN_140395740();
    uVar3 = 0;
    if (param_1[5] != 0) {
        do {
            lVar1 = param_1[6];
            plVar2 = *(longlong **)(lVar1 + uVar3 * 8);
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 8))();
                *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[5]);
    }
    FUN_14018b900(param_1[6],0);
    param_1[6] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    *param_1 = &PTR_FUN_140b66330;
    return;
}



ulonglong FUN_140395080(longlong param_1,longlong param_2)

{
int iVar1;
undefined4 uVar2;
uint uVar3;
undefined8 uVar4;
longlong lVar5;
ulonglong uVar6;

*(longlong *)(param_1 + 8) = param_2;
iVar1 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x28))();
if (iVar1 == 1) {
(**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
if (DAT_140c657f0 == 0) {
return 0x80004005;
}
uVar6 = FUN_1402c83a0();
if ((int)uVar6 < 0) {
return uVar6;
}
}
else if (iVar1 == 3) {
uVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x40))();
uVar4 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
if (DAT_140c657f0 == 0) {
return 0x80004005;
}
lVar5 = FUN_14018b280(0x220,0);
if (lVar5 == 0) {
lVar5 = 0;
}
else {
lVar5 = FUN_1402cb050(lVar5);
}
uVar3 = FUN_1402cb440(lVar5,uVar4,uVar2,&DAT_140c78390);
if ((int)uVar3 < 0) {
if (lVar5 != 0) {
FUN_1402cb170(lVar5);
FUN_14018b900(lVar5,0);
}
}
else {
*(longlong *)(param_1 + 0x10) = lVar5;
uVar3 = 0;
}
if ((int)uVar3 < 0) {
return (ulonglong)uVar3;
}
}
return 0;
}



void FUN_1403951c0(longlong param_1)

{
ulonglong uVar1;
undefined8 uVar2;

uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x148))();
*(ulonglong *)(param_1 + 0x28) = uVar1;
if (uVar1 != 0) {
uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
uVar2 = 0xffffffffffffffff;
}
uVar2 = FUN_14018b280(uVar2,0);
*(undefined8 *)(param_1 + 0x30) = uVar2;
FUN_1407e4830(uVar2,0,*(longlong *)(param_1 + 0x28) << 3);
*(undefined8 *)(param_1 + 0x48) = 0;
return;
}
*(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
*(undefined8 *)(param_1 + 0x30) = 0;
*(undefined8 *)(param_1 + 0x48) = 0;
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140395240(longlong param_1,uint *param_2)

{
longlong *plVar1;
longlong *plVar2;
uint *puVar3;
undefined4 uVar4;
undefined4 uVar5;
int iVar6;
undefined8 uVar7;
longlong lVar8;
undefined8 uVar9;
undefined8 uVar10;
ulonglong uVar11;
longlong *local_res8;
uint *local_res10;
longlong local_res18;
longlong local_res20;
undefined local_98 [16];
undefined local_88 [72];

local_res10 = param_2;
if (*(ulonglong *)(param_1 + 0x48) < *(ulonglong *)(param_1 + 0x28)) {
do {
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x168))
        (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x48),&local_res18
        );
local_res8 = (longlong *)0x0;
if (local_res18 != 0) {
FUN_1402d9b70(local_res18,uVar7,&local_res8);
}
plVar2 = local_res8;
lVar8 = FUN_14018b280(0x520,0);
if (lVar8 == 0) {
lVar8 = 0;
}
else {
lVar8 = FUN_1403757e0(lVar8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
}
plVar1 = *(longlong **)(param_1 + 0x10);
uVar4 = (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(param_1 + 0x48));
uVar5 = (**(code **)(*plVar1 + 0x170))(plVar1,*(undefined8 *)(param_1 + 0x48));
uVar7 = (**(code **)(*plVar1 + 0x160))(plVar1,local_98,*(undefined8 *)(param_1 + 0x48));
uVar9 = (**(code **)(*plVar1 + 0x158))(plVar1,local_88,*(undefined8 *)(param_1 + 0x48));
uVar10 = (**(code **)(*plVar1 + 0x150))(plVar1,*(undefined8 *)(param_1 + 0x48));
iVar6 = FUN_140376790(lVar8,*(undefined8 *)(param_1 + 8),uVar10,uVar9,uVar7,uVar5,uVar4,plVar2
);
if (iVar6 < 0) {
if (lVar8 != 0) {
FUN_140375b60(lVar8);
FUN_14018b900(lVar8);
}
}
else {
if (plVar2 != (longlong *)0x0) {
FUN_1403773f0(lVar8);
}
*(longlong *)(*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x48) * 8) = lVar8;
}
puVar3 = local_res10;
*(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
if (*local_res10 == 0) goto LAB_140395443;
if (-1 < (int)*local_res10) {
QueryPerformanceCounter(&local_res20);
uVar11 = (local_res20 - *(longlong *)(puVar3 + 2)) - _DAT_140c87988;
if (*puVar3 * DAT_140c636b0 <= uVar11) {
*puVar3 = 0;
LAB_140395443:
if (plVar2 != (longlong *)0x0) {
(**(code **)(*plVar2 + 8))(plVar2);
}
return 0;
}
if ((int)((*puVar3 * DAT_140c636b0 - uVar11) / DAT_140c636b0) == -1) goto LAB_140395443;
}
if (plVar2 != (longlong *)0x0) {
(**(code **)(*plVar2 + 8))(plVar2);
}
} while (*(ulonglong *)(param_1 + 0x48) < *(ulonglong *)(param_1 + 0x28));
}
return 1;
}



void FUN_140395740(longlong param_1)

{
int iVar1;
longlong lVar2;
longlong lVar3;

lVar2 = *(longlong *)(param_1 + 0x20);
if (lVar2 != 0) {
iVar1 = *(int *)(lVar2 + -0x10);
lVar3 = (longlong)iVar1 * 0x150 + lVar2;
while (iVar1 = iVar1 + -1, -1 < iVar1) {
lVar3 = lVar3 + -0x150;
FUN_1403904c0(lVar3);
}
FUN_14018b900(lVar2 + -0x10,0);
*(undefined8 *)(param_1 + 0x20) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
return;
}
*(undefined8 *)(param_1 + 0x20) = 0;
*(undefined8 *)(param_1 + 0x18) = 0;
return;
}



void FUN_1403957d0(longlong param_1)

{
longlong *plVar1;
longlong *plVar2;
int iVar3;
int iVar4;
longlong lVar5;
ulonglong uVar6;
int *piVar7;
ulonglong uVar8;
ulonglong uVar9;
ulonglong uVar10;
undefined auStack104 [32];
uint local_48;
uint local_44;
longlong *local_40;
ulonglong local_38;
undefined8 local_30;
ulonglong local_28;

local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
if (iVar3 == 3) {
plVar2 = *(longlong **)(param_1 + 0x10);
iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1);
iVar4 = (**(code **)(*plVar2 + 0x30))(plVar2);
if (iVar3 != iVar4) {
FUN_140377140(*(undefined8 *)(param_1 + 8));
goto LAB_140395a44;
}
}
iVar3 = (**(code **)(*plVar1 + 0x188))(plVar1,2,0,&local_44);
uVar10 = 0;
uVar9 = (ulonglong)local_44;
if (iVar3 == 0) {
uVar9 = uVar10;
}
local_44 = (uint)uVar9;
(**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
(*(longlong **)(param_1 + 0x10),uVar9,0xffffffff,0);
iVar3 = (**(code **)(*plVar1 + 0x188))(plVar1,0,0,&local_48);
uVar9 = (ulonglong)local_48;
if (iVar3 == 0) {
uVar9 = uVar10;
}
local_48 = (uint)uVar9;
(**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c0))
(*(longlong **)(param_1 + 0x10),uVar9,0xffffffffffffffff);
if (*(longlong *)(param_1 + 0x20) != 0) {
local_38 = 0;
local_30 = 0;
iVar3 = (**(code **)(*plVar1 + 0x188))(plVar1,1,0,&local_38);
if (iVar3 == 0) {
lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
local_38 = local_38 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar5 + 0xc);
}
lVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))();
uVar9 = uVar10;
uVar8 = uVar10;
if (lVar5 != 0) {
do {
FUN_140391230(*(longlong *)(param_1 + 0x20) + uVar8,local_38 & 0xffffffff);
uVar9 = uVar9 + 1;
uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))();
uVar8 = uVar8 + 0x150;
} while (uVar9 < uVar6);
}
}
local_40 = (longlong *)0x0;
iVar3 = (**(code **)(*plVar1 + 400))(plVar1,&local_40);
if ((-1 < iVar3) && (uVar9 = (**(code **)(*local_40 + 0x10))(), uVar9 != 0)) {
do {
piVar7 = (int *)(**(code **)(*local_40 + 0x18))(local_40,uVar10);
if (piVar7[1] != 0) {
iVar3 = *piVar7;
if (iVar3 == 0) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c8))
(*(longlong **)(param_1 + 0x10),piVar7[2]);
}
else if (iVar3 == 1) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0x1d8))
(*(longlong **)(param_1 + 0x10),piVar7[2]);
if ((*(longlong *)(param_1 + 0x20) != 0) &&
(uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x128))
        (*(longlong **)(param_1 + 0x10),piVar7[1]),
        uVar8 < *(ulonglong *)(param_1 + 0x18))) {
FUN_140391230(uVar8 * 0x150 + *(longlong *)(param_1 + 0x20),piVar7[2]);
}
}
else if (iVar3 == 2) {
(**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
(*(longlong **)(param_1 + 0x10),piVar7[2],0xffffffffffffffff,piVar7[1]);
}
}
uVar10 = uVar10 + 1;
} while (uVar10 < uVar9);
}
if (local_40 != (longlong *)0x0) {
(**(code **)(*local_40 + 8))();
}
LAB_140395a44:
FUN_1407db4f0(local_28 ^ (ulonglong)auStack104);
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140395a70(longlong param_1,int *param_2)

{
longlong *plVar1;
int iVar2;
ulonglong uVar3;
longlong local_res8;
int local_18 [2];
longlong local_10;

if (*(uint *)(param_1 + 0x3c) == 7) {
return 1;
}
if ((*(uint *)(param_1 + 0x3c) & 1) == 0) {
iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
        (*(longlong **)(param_1 + 0x10),param_2,5);
if (iVar2 == 0) {
return 0;
}
FUN_1403951c0(param_1);
*(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
}
if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
QueryPerformanceCounter(&local_res8);
local_18[0] = *param_2;
local_10 = local_res8 - _DAT_140c87988;
if ((local_18[0] < 0) || (local_18[0] != 0)) {
local_10 = *(longlong *)(param_2 + 2);
}
else {
local_18[0] = 1;
}
iVar2 = FUN_140395240(param_1,local_18);
if (iVar2 == 0) {
return 0;
}
*(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
}
if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
uVar3 = 0;
if (*(longlong *)(param_1 + 0x28) != 0) {
do {
plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar3 * 8);
if ((plVar1 != (longlong *)0x0) &&
(iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2), iVar2 == 0)) {
return 0;
}
uVar3 = uVar3 + 1;
} while (uVar3 < *(ulonglong *)(param_1 + 0x28));
}
*(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
}
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_140395bc0(longlong *param_1,undefined4 *param_2,uint param_3)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 local_18 [4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x28))(param_1,local_18);
uVar4 = uRam0000000140c798ac;
uVar3 = uRam0000000140c798a8;
uVar2 = uRam0000000140c798a4;
if (param_3 < 3) {
puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1[2] + 0x100))();
uVar2 = puVar1[1];
uVar3 = puVar1[2];
uVar4 = puVar1[3];
*param_2 = *puVar1;
param_2[1] = uVar2;
param_2[2] = uVar3;
param_2[3] = uVar4;
uVar2 = puVar1[4];
uVar3 = puVar1[5];
uVar4 = puVar1[6];
uVar5 = puVar1[7];
}
else {
*param_2 = _DAT_140c798a0;
param_2[1] = uVar2;
param_2[2] = uVar3;
param_2[3] = uVar4;
uVar2 = _DAT_140c798b0;
uVar3 = uRam0000000140c798b4;
uVar4 = uRam0000000140c798b8;
uVar5 = uRam0000000140c798bc;
}
*(undefined (*) [16])(param_2 + 4) = CONCAT412(uVar5,CONCAT48(uVar4,CONCAT44(uVar3,uVar2)));
return param_2;
}



undefined8 * FUN_140395ea0(undefined8 *param_1,ulonglong param_2)

{
*param_1 = &PTR_FUN_140b66260;
if ((longlong *)param_1[5] != (longlong *)0x0) {
(**(code **)(*(longlong *)param_1[5] + 8))();
param_1[5] = 0;
}
*param_1 = &PTR_FUN_140b66330;
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



undefined8 FUN_140395f00(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
undefined8 uVar2;

plVar1 = *(longlong **)(param_1 + 0x28);
if (plVar1 != (longlong *)0x0) {
uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0);
if ((int)uVar2 == 0) {
return uVar2;
}
}
return 1;
}



undefined8 FUN_140395f30(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
undefined8 uVar2;

plVar1 = *(longlong **)(param_1 + 0x28);
if (plVar1 != (longlong *)0x0) {
uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
if ((int)uVar2 == 0) {
return uVar2;
}
}
return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_140395f60(longlong *param_1,undefined (*param_2) [16],int param_3)

{
undefined4 *puVar1;
undefined4 uVar2;
undefined4 uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 local_28 [8];

local_28[0] = 0xffffffff;
(**(code **)(*param_1 + 0x28))(param_1,local_28);
uVar4 = uRam0000000140c798ac;
uVar3 = uRam0000000140c798a8;
uVar2 = uRam0000000140c798a4;
if (param_3 == 0) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1[5] + 0x490))();
uVar2 = puVar1[1];
uVar3 = puVar1[2];
uVar4 = puVar1[3];
*(undefined4 *)*param_2 = *puVar1;
*(undefined4 *)(*param_2 + 4) = uVar2;
*(undefined4 *)(*param_2 + 8) = uVar3;
*(undefined4 *)(*param_2 + 0xc) = uVar4;
uVar2 = puVar1[4];
uVar3 = puVar1[5];
uVar4 = puVar1[6];
uVar5 = puVar1[7];
goto LAB_140396031;
}
}
else if (param_3 == 1) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1[5] + 0x4a8))();
uVar2 = puVar1[1];
uVar3 = puVar1[2];
uVar4 = puVar1[3];
*(undefined4 *)*param_2 = *puVar1;
*(undefined4 *)(*param_2 + 4) = uVar2;
*(undefined4 *)(*param_2 + 8) = uVar3;
*(undefined4 *)(*param_2 + 0xc) = uVar4;
uVar2 = puVar1[4];
uVar3 = puVar1[5];
uVar4 = puVar1[6];
uVar5 = puVar1[7];
goto LAB_140396031;
}
}
else if (param_3 == 2) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1[5] + 0x4b8))();
uVar2 = puVar1[1];
uVar3 = puVar1[2];
uVar4 = puVar1[3];
*(undefined4 *)*param_2 = *puVar1;
*(undefined4 *)(*param_2 + 4) = uVar2;
*(undefined4 *)(*param_2 + 8) = uVar3;
*(undefined4 *)(*param_2 + 0xc) = uVar4;
uVar2 = puVar1[4];
uVar3 = puVar1[5];
uVar4 = puVar1[6];
uVar5 = puVar1[7];
goto LAB_140396031;
}
}
else if (param_3 == 3) {
*param_2 = CONCAT412(0xbf800000,CONCAT48(0xbf800000,0xbf800000bf800000));
uVar2 = 0x3f800000;
uVar3 = 0x3f800000;
uVar4 = 0x3f800000;
uVar5 = 0x3f800000;
goto LAB_140396031;
}
*(undefined4 *)*param_2 = _DAT_140c798a0;
*(undefined4 *)(*param_2 + 4) = uVar2;
*(undefined4 *)(*param_2 + 8) = uVar3;
*(undefined4 *)(*param_2 + 0xc) = uVar4;
uVar2 = _DAT_140c798b0;
uVar3 = uRam0000000140c798b4;
uVar4 = uRam0000000140c798b8;
uVar5 = uRam0000000140c798bc;
LAB_140396031:
param_2[1] = CONCAT412(uVar5,CONCAT48(uVar4,CONCAT44(uVar3,uVar2)));
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16] FUN_140396050(longlong *param_1,undefined (*param_2) [16],int param_3)

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;
longlong lVar4;
float fVar5;
float fVar6;
undefined4 local_28 [8];

local_28[0] = 0xffffffff;
(**(code **)(*param_1 + 0x28))(param_1,local_28);
if (param_3 == 0) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
lVar4 = (**(code **)(*(longlong *)param_1[5] + 0x490))();
uVar1 = *(undefined4 *)(lVar4 + 0x24);
uVar2 = *(undefined4 *)(lVar4 + 0x28);
uVar3 = *(undefined4 *)(lVar4 + 0x2c);
*(undefined4 *)*param_2 = *(undefined4 *)(lVar4 + 0x20);
*(undefined4 *)(*param_2 + 4) = uVar1;
*(undefined4 *)(*param_2 + 8) = uVar2;
*(undefined4 *)(*param_2 + 0xc) = uVar3;
*(undefined4 *)param_2[1] = *(undefined4 *)(lVar4 + 0x30);
return param_2;
}
}
else if (param_3 == 1) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
lVar4 = (**(code **)(*(longlong *)param_1[5] + 0x4a8))();
uVar1 = *(undefined4 *)(lVar4 + 0x24);
uVar2 = *(undefined4 *)(lVar4 + 0x28);
uVar3 = *(undefined4 *)(lVar4 + 0x2c);
*(undefined4 *)*param_2 = *(undefined4 *)(lVar4 + 0x20);
*(undefined4 *)(*param_2 + 4) = uVar1;
*(undefined4 *)(*param_2 + 8) = uVar2;
*(undefined4 *)(*param_2 + 0xc) = uVar3;
*(undefined4 *)param_2[1] = *(undefined4 *)(lVar4 + 0x30);
return param_2;
}
}
else if (param_3 == 2) {
if ((longlong *)param_1[5] != (longlong *)0x0) {
lVar4 = (**(code **)(*(longlong *)param_1[5] + 0x4b8))();
uVar1 = *(undefined4 *)(lVar4 + 0x24);
uVar2 = *(undefined4 *)(lVar4 + 0x28);
uVar3 = *(undefined4 *)(lVar4 + 0x2c);
*(undefined4 *)*param_2 = *(undefined4 *)(lVar4 + 0x20);
*(undefined4 *)(*param_2 + 4) = uVar1;
*(undefined4 *)(*param_2 + 8) = uVar2;
*(undefined4 *)(*param_2 + 0xc) = uVar3;
*(undefined4 *)param_2[1] = *(undefined4 *)(lVar4 + 0x30);
return param_2;
}
}
else if (param_3 == 3) {
*param_2 = ZEXT816(0);
*(undefined4 *)param_2[1] = 0x3f800000;
return param_2;
}
fVar5 = _DAT_140c798b0 - _DAT_140c798a0;
fVar6 = fRam0000000140c798b4 - fRam0000000140c798a4;
*param_2 = CONCAT412((fRam0000000140c798ac + fRam0000000140c798bc) * 0.5,
                     CONCAT48((fRam0000000140c798a8 + fRam0000000140c798b8) * 0.5,
                              CONCAT44((fRam0000000140c798a4 + fRam0000000140c798b4) * 0.5,
                                       (_DAT_140c798a0 + _DAT_140c798b0) * 0.5)));
*(float *)param_2[1] = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + 0.0) * 0.5;
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_1403961c0(longlong *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x28))(param_1,local_18);
    uVar3 = uRam0000000140c783dc;
    uVar2 = uRam0000000140c783d8;
    uVar1 = uRam0000000140c783d4;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
        lVar4 = (**(code **)(*(longlong *)param_1[5] + 0x490))();
        uVar1 = *(undefined4 *)(lVar4 + 0x24);
        uVar2 = *(undefined4 *)(lVar4 + 0x28);
        uVar3 = *(undefined4 *)(lVar4 + 0x2c);
        *param_2 = *(undefined4 *)(lVar4 + 0x20);
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        param_2[3] = uVar3;
        param_2[4] = *(undefined4 *)(lVar4 + 0x30);
        return param_2;
    }
    *param_2 = _DAT_140c783d0;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = DAT_140c783e0;
    return param_2;
}



void FUN_140396240(longlong param_1,undefined8 param_2)

{
longlong *plVar1;
undefined auStack216 [32];
undefined8 local_b8;
longlong local_b0;
undefined local_a8 [64];
undefined8 local_68;
longlong local_60;
ulonglong local_18;

local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
plVar1 = *(longlong **)(param_1 + 0x20);
if (plVar1 != (longlong *)0x0) {
local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x440;
local_b8 = param_2;
local_68 = param_2;
local_60 = local_b0;
FUN_1401afb10(&local_68,local_a8);
(**(code **)(*plVar1 + 0x58))(plVar1,local_a8);
}
plVar1 = *(longlong **)(param_1 + 0x28);
if (plVar1 != (longlong *)0x0) {
(**(code **)(*plVar1 + 0x48))(plVar1,param_2);
}
FUN_1407db4f0(local_18 ^ (ulonglong)auStack216);
return;
}



void FUN_1403963b0(longlong param_1,int param_2)

{
int iVar1;
longlong lVar2;
code *pcVar3;
int iVar4;
int iVar5;
int iVar6;
undefined8 uVar7;

iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x134);
if (iVar1 < param_2) {
iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x158))();
iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x168))();
if (iVar4 == 0) {
if (((iVar1 < 2) && (1 < param_2)) && (iVar5 != 0)) {
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pcVar3 = *(code **)(lVar2 + 0x1468);
if (pcVar3 != (code *)0x0) {
(*pcVar3)(iVar5,0,*(undefined8 *)(lVar2 + 0x1470));
}
}
}
else {
if ((iVar1 < 1) && (0 < param_2)) {
if (iVar5 == 0) {
iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x10)
                 + 0xb00);
}
iVar6 = (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,param_1 + 0x20,0);
if (iVar6 < 0) {
return;
}
iVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
        (*(longlong **)(param_1 + 0x20),param_1 + 0x18,iVar4,iVar5);
if (iVar5 < 0) {
return;
}
lVar2 = **(longlong **)(param_1 + 0x20);
uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
(**(code **)(lVar2 + 0x58))(*(undefined8 *)(param_1 + 0x20),uVar7);
}
if (((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (iVar1 < 2)) && (1 < param_2)) {
(**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
}
}
}
else {
if ((param_2 < 2) && (1 < iVar1)) {
if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
}
iVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x158))();
iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x168))();
if ((iVar5 == 0) && (iVar4 != 0)) {
lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
pcVar3 = *(code **)(lVar2 + 0x1468);
if (pcVar3 != (code *)0x0) {
(*pcVar3)(iVar4,1,*(undefined8 *)(lVar2 + 0x1470));
}
}
}
if ((param_2 < 1) && (0 < iVar1)) {
if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
*(undefined8 *)(param_1 + 0x18) = 0;
}
if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
(**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
*(undefined8 *)(param_1 + 0x20) = 0;
return;
}
}
}
return;
}



void FUN_1403965b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
        longlong param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
longlong *plVar1;
longlong lVar2;
undefined4 uVar3;
undefined4 in_XMM6_Da;
undefined4 in_XMM6_Db;
undefined4 in_XMM6_Dc;
undefined4 in_XMM6_Dd;
undefined4 in_XMM7_Da;
undefined4 in_XMM7_Db;
undefined4 in_XMM7_Dc;
undefined4 in_XMM7_Dd;

plVar1 = *(longlong **)(param_5 + 0x28);
if ((plVar1 != (longlong *)0x0) && (param_6 != 0)) {
(**(code **)(*plVar1 + 0x128))
(plVar1,1,param_7,param_8,
CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
uVar3 = (**(code **)(**(longlong **)(param_5 + 0x28) + 0x140))(*(longlong **)(param_5 + 0x28),1)
;
uVar3 = (**(code **)(**(longlong **)(param_5 + 0x28) + 0x70))(uVar3,param_3);
(**(code **)(**(longlong **)(param_5 + 0x28) + 0x80))(uVar3,param_4);
lVar2 = *(longlong *)(param_5 + 0x10);
if (*(int *)(lVar2 + 0x68) == 0) {
lVar2 = *(longlong *)(lVar2 + 0x20);
}
plVar1 = *(longlong **)(lVar2 + 0x150);
if (plVar1 == (longlong *)0x0) {
uVar3 = 0;
}
else {
uVar3 = FUN_1407c2c10(plVar1,*(undefined8 *)(*plVar1 + *(longlong *)(lVar2 + 0x160) * 8));
}
(**(code **)(**(longlong **)(param_5 + 0x28) + 0x100))(uVar3,uVar3);
}
return;
}



undefined8 * FUN_140396670(undefined8 *param_1,ulonglong param_2)

{
*param_1 = &PTR_FUN_140b66330;
if ((param_2 & 1) != 0) {
FUN_14018b900(param_1,0);
}
return param_1;
}



undefined (*) [16] FUN_1403966c0(longlong *param_1,undefined (*param_2) [16])

{
float *pfVar1;
float fVar2;
float fVar3;
undefined local_28 [32];

pfVar1 = (float *)(**(code **)(*param_1 + 0x68))(param_1,local_28);
fVar2 = pfVar1[4] - *pfVar1;
fVar3 = pfVar1[5] - pfVar1[1];
*param_2 = CONCAT412((pfVar1[3] + pfVar1[7]) * 0.5,
                     CONCAT48((pfVar1[2] + pfVar1[6]) * 0.5,
                              CONCAT44((pfVar1[1] + pfVar1[5]) * 0.5,(*pfVar1 + pfVar1[4]) * 0.5))
);
*(float *)param_2[1] = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + 0.0) * 0.5;
return param_2;
}



undefined8 FUN_140396730(longlong *param_1,undefined8 param_2)

{
(**(code **)(*param_1 + 0x70))(param_1,param_2,0);
return param_2;
}



undefined8 FUN_140396750(longlong param_1,uint param_2)

{
longlong lVar1;
longlong lVar2;
longlong local_res8;

lVar1 = *(longlong *)(param_1 + 0x48);
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
lVar1 = *(longlong *)(param_1 + 0x68);
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
}
return 1;
}



longlong FUN_1403967f0(longlong param_1,uint param_2)

{
longlong lVar1;
longlong lVar2;
longlong local_res8;

lVar1 = *(longlong *)(param_1 + 0x28);
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
return local_res8 + 0x28;
}



undefined8 FUN_140396850(undefined8 param_1,int param_2)

{
if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
(*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) != param_2)) &&
((*(longlong *)(DAT_140c65898 + 0x6490) == 0 ||
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) != param_2)))) {
return 0;
}
return 1;
}



bool FUN_140396880(undefined8 param_1,longlong param_2)

{
if (param_2 == 0) {
return false;
}
if (*(longlong *)(DAT_140c65898 + 0x78) == param_2) {
return true;
}
return *(longlong *)(DAT_140c65898 + 0x6490) == param_2;
}



void FUN_1403968b0(undefined8 param_1,longlong param_2)

{
int iVar1;
longlong lVar2;
undefined4 uVar3;

lVar2 = DAT_140c65898;
if (*(longlong *)(DAT_140c65898 + 0x6490) != param_2) {
iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x50c);
if (iVar1 != 0) {
*(int *)(param_2 + 0x50c) = iVar1;
}
*(longlong *)(lVar2 + 0x6490) = param_2;
*(undefined8 *)(lVar2 + 0x6488) = 0;
if (*(longlong *)(lVar2 + 0x78) != 0) {
iVar1 = *(int *)(*(longlong *)(lVar2 + 0x78) + 0x108);
if (iVar1 != *(int *)(param_2 + 0x108)) {
*(int *)(param_2 + 0x108) = iVar1;
uVar3 = FUN_14045a950(param_2);
*(undefined4 *)(param_2 + 0x10c) = uVar3;
}
}
}
if (DAT_140c65b78 != 0) {
FUN_140575dd0();
return;
}
return;
}



void FUN_140396940(undefined8 param_1,longlong param_2)

{
longlong lVar1;
undefined4 uVar2;
longlong lVar3;
longlong lVar4;
longlong lVar5;

lVar4 = DAT_140c65898;
if (param_2 != 0) {
uVar2 = *(undefined4 *)(param_2 + 8);
lVar3 = *(longlong *)(DAT_140c65898 + 0x6740);
lVar1 = lVar3 + 1;
lVar5 = FUN_14018db00(*(undefined8 *)(DAT_140c65898 + 0x6738),lVar1,4);
*(undefined4 *)(lVar5 + lVar3 * 4) = uVar2;
if (*(longlong *)(lVar4 + 0x6738) != lVar5) {
FUN_1407db590(lVar5,*(longlong *)(lVar4 + 0x6738),*(longlong *)(lVar4 + 0x6740) << 2);
lVar3 = *(longlong *)(lVar4 + 0x6738);
if (lVar3 != 0) {
(**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
}
*(longlong *)(lVar4 + 0x6738) = lVar5;
}
*(longlong *)(lVar4 + 0x6740) = lVar1;
}
return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140396a00(longlong param_1)

{
bool bVar1;
int iVar2;
int iVar3;
longlong lVar4;
longlong lVar5;
longlong *plVar6;
longlong *plVar7;
ulonglong uVar8;
ulonglong uVar9;
ulonglong uVar10;
float fVar11;
float fVar12;
float fVar13;
float fVar14;
float fVar15;
undefined4 uVar16;
float fVar17;
uint uVar18;
uint uVar19;
float fVar20;

if (*(longlong *)(param_1 + 0x78) == 0) {
return;
}
if (*(longlong *)(param_1 + 0x6490) == 0) {
return;
}
if (DAT_140c7dc64 != 0) {
return;
}
uVar8 = 0;
*(undefined4 *)(param_1 + 0x6728) = 0;
if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x250) != 0) {
return;
}
if (*(longlong *)(param_1 + 0x6740) == 0) {
FUN_1403971c0();
return;
}
if ((DAT_140dc2190 & 1) == 0) {
DAT_140dc2190 = DAT_140dc2190 | 1;
lVar4 = FUN_140200220(0x1b6);
if (lVar4 == 0) {
DAT_140dc2194 = 30.0;
}
else {
DAT_140dc2194 = *(float *)(lVar4 + 0x18);
}
}
uVar19 = DAT_140dc2190;
fVar20 = 0.005555556;
fVar17 = 0.0;
fVar12 = *(float *)(*(longlong *)(param_1 + 0x6490) + 0x12c0);
uVar16 = 0x40c90fdb;
fVar13 = 3.141593;
fVar14 = DAT_140c3b438 * 0.005555556 * DAT_140dc2194 * 0.5;
fVar11 = fVar12 - fVar14;
if (fVar11 < 0.0) {
fVar11 = (float)FUN_1408fde98(fVar11 - 3.141593,0x40c90fdb);
fVar11 = fVar11 + fVar13;
}
else {
fVar11 = (float)FUN_1408fde98(fVar11 + 3.141593,0x40c90fdb);
fVar11 = fVar11 - fVar13;
}
fVar14 = fVar14 + fVar12;
if (fVar14 < fVar17) {
fVar12 = (float)FUN_1408fde98(fVar14 - fVar13,uVar16);
fVar12 = fVar12 + fVar13;
}
else {
fVar12 = (float)FUN_1408fde98(fVar14 + fVar13,uVar16);
fVar12 = fVar12 - fVar13;
}
if ((uVar19 & 2) == 0) {
DAT_140dc2190 = uVar19 | 2;
lVar4 = FUN_140200220(0x1b8);
if (lVar4 == 0) {
_DAT_140dc2198 = 20.0;
}
else {
_DAT_140dc2198 = *(float *)(lVar4 + 0x18);
}
fVar13 = 3.141593;
uVar16 = 0x40c90fdb;
uVar19 = DAT_140dc2190;
}
if ((uVar19 & 4) == 0) {
DAT_140dc2190 = uVar19 | 4;
lVar4 = FUN_140200220(0x1b7);
if (lVar4 == 0) {
DAT_140dc219c = 160.0;
}
else {
DAT_140dc219c = *(float *)(lVar4 + 0x18);
}
fVar13 = 3.141593;
uVar16 = 0x40c90fdb;
uVar19 = DAT_140dc2190;
}
fVar14 = *(float *)(*(longlong *)(param_1 + 0x6490) + 0x12c0);
fVar15 = DAT_140c3b438 * fVar20 * DAT_140dc219c * 0.5;
fVar20 = fVar14 - fVar15;
if (fVar20 < fVar17) {
fVar20 = (float)FUN_1408fde98(fVar20 - fVar13,uVar16);
fVar20 = fVar20 + fVar13;
}
else {
fVar20 = (float)FUN_1408fde98(fVar20 + fVar13,uVar16);
fVar20 = fVar20 - fVar13;
}
fVar15 = fVar15 + fVar14;
if (fVar15 < fVar17) {
fVar14 = (float)FUN_1408fde98(fVar15 - fVar13,uVar16);
fVar14 = fVar14 + fVar13;
}
else {
fVar14 = (float)FUN_1408fde98(fVar15 + fVar13,uVar16);
fVar14 = fVar14 - fVar13;
}
if ((uVar19 & 8) == 0) {
DAT_140dc2190 = uVar19 | 8;
lVar4 = FUN_140200220(0x1b9);
if (lVar4 == 0) {
_DAT_140dc21a0 = 5.0;
}
else {
_DAT_140dc21a0 = *(float *)(lVar4 + 0x18);
}
}
uVar19 = 0x80000000;
uVar9 = 0;
uVar10 = uVar8;
if ((*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) == 0) ||
(lVar4 = FUN_1403d90d0(DAT_140c65898), uVar10 = uVar9, lVar4 == 0)) {
LAB_140396f03:
if (*(longlong *)(param_1 + 0x6740) != 0) {
uVar18 = 0x7fffffff;
do {
lVar4 = FUN_1403d90d0(DAT_140c65898,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x6738) + uVar8 * 4));
if ((*(longlong *)(*(longlong *)(lVar4 + 0x1908) + 0x40) != 0) &&
(*(char *)(*(longlong *)(lVar4 + 0x1908) + 4) != '\0')) {
fVar13 = *(float *)(lVar4 + 0x11e0) - *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e0)
;
fVar17 = *(float *)(lVar4 + 0x11e4) - *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e4)
;
fVar17 = SQRT(fVar13 * fVar13 + fVar17 * fVar17 + 0.0);
fVar13 = (float)FUN_1408fd190((uint)fVar13 ^ uVar19,uVar19);
if (fVar12 < fVar11) {
if ((fVar11 <= fVar13) || (fVar13 <= fVar12)) goto LAB_140396fff;
LAB_14039700d:
iVar2 = 0;
}
else {
if ((fVar13 < fVar11) || (fVar12 < fVar13)) goto LAB_14039700d;
LAB_140396fff:
iVar2 = 1;
if (_DAT_140dc2198 < fVar17) goto LAB_14039700d;
}
if (fVar14 < fVar20) {
if ((fVar20 <= fVar13) || (fVar13 <= fVar14)) goto LAB_140397030;
LAB_14039703e:
bVar1 = false;
}
else {
if ((fVar13 < fVar20) || (fVar14 < fVar13)) goto LAB_14039703e;
LAB_140397030:
bVar1 = true;
if (_DAT_140dc21a0 < fVar17) goto LAB_14039703e;
}
if ((iVar2 != 0) || (bVar1)) {
if (*(int *)(param_1 + 0x6728) != 0) {
if (iVar2 == 0) {
if (*(int *)(param_1 + 0x6734) != 0) goto LAB_1403970d9;
}
else if (*(int *)(param_1 + 0x6734) == 0) goto LAB_140397077;
if (*(float *)(param_1 + 0x672c) <= fVar17) goto LAB_1403970d9;
}
LAB_140397077:
plVar7 = *(longlong **)(lVar4 + 0x16f0);
plVar6 = plVar7;
if (plVar7 == (longlong *)0x0) {
plVar6 = *(longlong **)(lVar4 + 0x16f8);
}
if (plVar6 != (longlong *)0x0) {
if (plVar7 == (longlong *)0x0) {
plVar7 = *(longlong **)(lVar4 + 0x16f8);
}
iVar3 = (**(code **)(*plVar7 + 0x108))(plVar7,0,1);
if (iVar3 != 0) goto LAB_1403970d9;
}
uVar16 = *(undefined4 *)(lVar4 + 8);
*(float *)(param_1 + 0x672c) = fVar17;
*(undefined4 *)(param_1 + 0x6728) = uVar16;
*(int *)(param_1 + 0x6734) = iVar2;
*(uint *)(param_1 + 0x6730) = (uint)fVar13 & uVar18;
}
}
LAB_1403970d9:
uVar8 = (ulonglong)((int)uVar8 + 1);
} while (uVar8 < *(ulonglong *)(param_1 + 0x6740));
}
if ((*(int *)(param_1 + 0x6728) != 0) || ((int)uVar10 == 0)) goto LAB_140397155;
lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108));
if (lVar4 == 0) {
*(undefined4 *)(param_1 + 0x6728) = 0;
goto LAB_140397155;
}
uVar16 = *(undefined4 *)(lVar4 + 8);
*(undefined4 *)(param_1 + 0x6734) = 0;
}
else {
plVar7 = *(longlong **)(lVar4 + 0x16f0);
plVar6 = plVar7;
if (plVar7 == (longlong *)0x0) {
plVar6 = *(longlong **)(lVar4 + 0x16f8);
}
if (plVar6 == (longlong *)0x0) goto LAB_140396f03;
if (plVar7 == (longlong *)0x0) {
plVar7 = *(longlong **)(lVar4 + 0x16f8);
}
iVar2 = (**(code **)(*plVar7 + 0x108))(plVar7,0,1);
if (((iVar2 == 1) || (*(longlong *)(*(longlong *)(lVar4 + 0x1908) + 0x40) == 0)) ||
(*(char *)(*(longlong *)(lVar4 + 0x1908) + 4) == '\0')) goto LAB_140396f03;
iVar2 = DAT_140c4d260;
if (*DAT_140c63750 < DAT_140c4d260) {
iVar2 = *DAT_140c63750;
}
if ((&DAT_140c4d270)[iVar2] == '\0') {
iVar2 = FUN_14046c580(lVar4,*(undefined8 *)(param_1 + 0x78));
if (iVar2 != 0) {
lVar5 = FUN_1403acd90(DAT_140c65b70,iVar2,*(undefined8 *)(param_1 + 0x6490));
if (lVar5 == 0) goto LAB_140396f03;
FUN_1403ad860(DAT_140c65b70,iVar2,lVar4);
FUN_1403ad8f0(DAT_140c65b70,iVar2,lVar4);
}
iVar2 = FUN_1403ad690(*(undefined8 *)(param_1 + 0x6490),lVar4);
if (iVar2 == 0) goto LAB_140396f03;
}
fVar13 = *(float *)(lVar4 + 0x11e0) - *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e0);
fVar17 = *(float *)(lVar4 + 0x11e4) - *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e4);
fVar17 = SQRT(fVar13 * fVar13 + fVar17 * fVar17 + 0.0);
fVar13 = (float)FUN_1408fd190((uint)fVar13 ^ uVar19,uVar19);
if (fVar14 < fVar20) {
if ((fVar20 <= fVar13) || (fVar13 <= fVar14)) goto LAB_140396fd4;
LAB_140396efd:
uVar10 = 1;
goto LAB_140396f03;
}
if ((fVar13 < fVar20) || (fVar14 < fVar13)) goto LAB_140396efd;
LAB_140396fd4:
if (_DAT_140dc21a0 < fVar17) goto LAB_140396efd;
uVar16 = *(undefined4 *)(lVar4 + 8);
*(undefined4 *)(param_1 + 0x6734) = 1;
}
*(undefined4 *)(param_1 + 0x672c) = 0;
*(undefined4 *)(param_1 + 0x6728) = uVar16;
*(undefined4 *)(param_1 + 0x6730) = 0;
LAB_140397155:
FUN_1403971c0(param_1);
return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403971c0(longlong param_1)

{
ulonglong uVar1;
short sVar2;
longlong lVar3;
int iVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
undefined2 *puVar8;
longlong *plVar9;
longlong *plVar10;
short *psVar11;
int iVar12;
longlong *plVar13;
float fVar14;
float fVar15;
float fVar16;
undefined auStack888 [32];
undefined *local_358;
undefined4 local_348;
undefined local_340 [8];
longlong local_338;
undefined2 *local_330;
longlong local_328;
undefined **local_318;
undefined local_310 [8];
undefined2 *local_308;
undefined2 *local_300;
undefined local_258 [16];
undefined2 *local_248;
undefined local_238 [512];
ulonglong local_38;

local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack888;
iVar4 = FUN_14055a260(param_1 + 0x7330);
plVar13 = (longlong *)0x0;
iVar5 = 0;
iVar12 = 0;
if (iVar4 == 0) {
if (*(int *)(param_1 + 0x64c4) == 0) {
lVar6 = 0;
}
else {
lVar6 = FUN_1403d90d0(param_1);
if (((lVar6 != 0) && (*(char *)(*(longlong *)(lVar6 + 0x1908) + 4) != '\0')) &&
(*(longlong *)(*(longlong *)(lVar6 + 0x1908) + 0x40) != 0)) {
iVar5 = *(int *)(lVar6 + 8);
}
}
fVar15 = 0.0;
*(int *)(param_1 + 0x6720) = iVar5;
fVar16 = 0.0;
if (lVar6 != 0) {
fVar16 = *(float *)(lVar6 + 0x11e0) - *(float *)(*(longlong *)(param_1 + 0x78) + 0x11e0);
fVar14 = *(float *)(lVar6 + 0x11e4) - *(float *)(*(longlong *)(param_1 + 0x78) + 0x11e4);
fVar15 = *(float *)(*(longlong *)(lVar6 + 0x1908) + 0x10);
fVar16 = fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
if (fVar15 <= 0.0) {
fVar15 = 5.0;
}
}
if ((iVar5 == 0) || (fVar15 * fVar15 < fVar16)) {
lVar6 = FUN_1403d90d0(param_1);
iVar5 = iVar12;
if ((lVar6 != 0) &&
((*(char *)(*(longlong *)(lVar6 + 0x1908) + 4) != '\0' &&
(*(longlong *)(*(longlong *)(lVar6 + 0x1908) + 0x40) != 0)))) {
iVar5 = *(int *)(lVar6 + 8);
}
*(int *)(param_1 + 0x6720) = iVar5;
}
if (*(int *)(param_1 + 0x6720) != 0) goto LAB_1403973a9;
if ((*(longlong *)(param_1 + 0x6490) != 0) &&
(iVar5 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0x108), iVar5 != 0)) goto LAB_14039737c;
}
else {
iVar5 = iVar12;
if ((*(int *)(param_1 + 0x64c4) != 0) &&
(((lVar6 = FUN_1403d90d0(param_1), lVar6 != 0 &&
(*(char *)(*(longlong *)(lVar6 + 0x1908) + 4) != '\0')) &&
(*(longlong *)(*(longlong *)(lVar6 + 0x1908) + 0x40) != 0)))) {
iVar5 = *(int *)(lVar6 + 8);
}
*(int *)(param_1 + 0x6720) = iVar5;
if (iVar5 == 0) {
iVar5 = iVar12;
if (((*(longlong *)(param_1 + 0x6490) != 0) &&
(*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) != 0)) &&
((lVar6 = FUN_1403d90d0(param_1), lVar6 != 0 &&
((*(char *)(*(longlong *)(lVar6 + 0x1908) + 4) != '\0' &&
(*(longlong *)(*(longlong *)(lVar6 + 0x1908) + 0x40) != 0)))))) {
iVar5 = *(int *)(lVar6 + 8);
}
*(int *)(param_1 + 0x6720) = iVar5;
}
if (*(int *)(param_1 + 0x6720) != 0) goto LAB_1403973a9;
iVar5 = *(int *)(param_1 + 0x6728);
LAB_14039737c:
lVar6 = FUN_1403d90d0(param_1,iVar5);
if (((lVar6 != 0) && (*(char *)(*(longlong *)(lVar6 + 0x1908) + 4) != '\0')) &&
(*(longlong *)(*(longlong *)(lVar6 + 0x1908) + 0x40) != 0)) {
iVar12 = *(int *)(lVar6 + 8);
}
}
*(int *)(param_1 + 0x6720) = iVar12;
LAB_1403973a9:
iVar5 = *(int *)(param_1 + 0x6720);
if (*(int *)(param_1 + 0x6724) != iVar5) {
*(int *)(param_1 + 0x6724) = iVar5;
FUN_1407e4830(local_238,0,0x200);
if (((iVar5 == 0) || (lVar6 = FUN_1403d90d0(param_1,iVar5), lVar6 == 0)) ||
(*(longlong *)(lVar6 + 0x18) == 0)) {
local_358 = local_238;
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"InteractiveUnitChanged",&DAT_1409edfbc,0);
}
else {
lVar7 = FUN_140200ee0(*(undefined4 *)(*(longlong *)(lVar6 + 0x18) + 0x134));
if (lVar7 == 0) {
local_348 = *(undefined4 *)(*(longlong *)(lVar6 + 0x1908) + 0x30);
}
else {
local_348 = *(undefined4 *)(lVar7 + 4);
}
FUN_1400b6f30(&local_318);
local_318 = &PTR_FUN_140b69230;
local_248 = (undefined2 *)0x0;
local_258 = ZEXT816(0);
puVar8 = (undefined2 *)FUN_14018b280(0x10);
local_258 = CONCAT88(puVar8,puVar8);
local_248 = puVar8 + 8;
if (puVar8 != (undefined2 *)0x0) {
*puVar8 = 0;
}
lVar7 = FUN_14018b280(0x60);
plVar9 = plVar13;
if (lVar7 != 0) {
plVar9 = (longlong *)FUN_1404db7e0(lVar7,lVar6);
}
local_338 = 0;
local_330 = (undefined2 *)0x0;
local_328 = 0;
plVar10 = plVar13;
do {
psVar11 = &DAT_140af562a + (longlong)plVar10;
plVar10 = (longlong *)((longlong)plVar10 + 1);
} while (*psVar11 != 0);
lVar7 = (longlong)plVar10 * 2 >> 1;
uVar1 = lVar7 + 1;
if (uVar1 < 0x7fffffffffffffff) {
lVar3 = uVar1 * 2;
local_330 = (undefined2 *)FUN_14018b280(lVar3,0);
local_328 = (longlong)local_330 + lVar3;
}
lVar3 = (longlong)local_330;
lVar7 = lVar7 * 2;
local_338 = (longlong)local_330;
FUN_1407db590(local_330,&DAT_140af5628,lVar7);
local_330 = (undefined2 *)(lVar7 + lVar3);
if (local_330 != (undefined2 *)0x0) {
*local_330 = 0;
}
FUN_1400b7480(&local_318,plVar9);
(**(code **)(*plVar9 + 0x48))(plVar9,local_340);
if (local_338 != 0) {
FUN_14018b900(local_338,0);
}
psVar11 = (short *)FUN_14034bdd0();
if (psVar11 == (short *)0x0) {
if (local_308 != local_300) {
*local_308 = 0;
local_300 = local_308;
}
}
else {
sVar2 = *psVar11;
plVar9 = plVar13;
while (sVar2 != 0) {
plVar9 = (longlong *)((longlong)plVar9 + 1);
sVar2 = psVar11[(longlong)plVar9];
}
FUN_14001c480(local_310,psVar11,psVar11 + (longlong)plVar9);
}
lVar7 = FUN_1400b7660(&local_318);
sVar2 = **(short **)(lVar7 + 8);
while (sVar2 != 0) {
plVar13 = (longlong *)((longlong)plVar13 + 1);
sVar2 = (*(short **)(lVar7 + 8))[(longlong)plVar13];
}
FUN_14001b2d0(local_238,(longlong)plVar13 + 1);
local_358 = local_238;
FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"InteractiveUnitChanged",&DAT_1409edfbc,
*(undefined4 *)(lVar6 + 8));
if (local_258._0_8_ != 0) {
FUN_14018b900(local_258._0_8_,0);
}
FUN_1400b7390(&local_318);
}
}
FUN_1407db4f0(local_38 ^ (ulonglong)auStack888);
return;
}



undefined * FUN_1403976a0(undefined8 param_1,int *param_2)

{
int iVar1;
uint uVar2;
longlong *plVar3;
undefined *puVar4;
longlong lVar5;

iVar1 = *param_2;
if (iVar1 < 300) {
uVar2 = param_2[1];
if ((uVar2 != 0xffffffff) && ((iVar1 != 0 || (uVar2 < 0x1f)))) {
if (iVar1 == 4) {
plVar3 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0xa90) + (ulonglong)uVar2 * 8);
if (plVar3 == (longlong *)0x0) {
return (undefined *)0x0;
}
// WARNING: Could not recover jumptable at 0x0001403976f3. Too many branches
// WARNING: Treating indirect jump as call
puVar4 = (undefined *)(**(code **)(*plVar3 + 0x88))();
return puVar4;
}
if (iVar1 == 6) {
lVar5 = FUN_1403acab0();
if (lVar5 == 0) {
return (undefined *)0x0;
}
}
else {
lVar5 = FUN_1403ac780(DAT_140c65898 + 0xa0);
if (lVar5 == 0) {
return (undefined *)0x0;
}
lVar5 = *(longlong *)(lVar5 + 0x40);
}
return *(undefined **)(lVar5 + 0x1e8);
}
}
return &DAT_1409e794c;
}



ulonglong FUN_140397740(longlong param_1)

{
uint uVar1;
ulonglong uVar2;
longlong lVar3;
longlong lVar4;
longlong lVar5;
longlong lVar6;
undefined4 local_res8;
undefined4 local_resc;

uVar2 = *(ulonglong *)(param_1 + 0x78);
if (uVar2 == 0) {
return uVar2;
}
lVar4 = FUN_1401f31e0(*(undefined4 *)(uVar2 + 0xdc));
if (lVar4 == 0) {
return 0;
}
lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar4 + 0x44),*(undefined8 *)(param_1 + 0x78))
;
if ((lVar5 == 0) || (*(int *)(param_1 + 0x1498) != 9)) {
return 0;
}
local_resc = 0x10;
local_res8 = 0;
lVar6 = FUN_1403ac780(param_1 + 0xa0,&local_res8);
uVar1 = (*(uint **)(lVar5 + 0x70))[0x3d];
if (uVar1 == 0) {
if (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x318) == 0) {
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x458);
joined_r0x00014039783c:
if (lVar3 == 0) goto LAB_14039783e;
}
}
else if (uVar1 - 1 < 2) {
if (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x308) == 0) {
lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x458);
goto joined_r0x00014039783c;
}
}
else {
LAB_14039783e:
if (lVar6 != 0) {
uVar1 = **(uint **)(lVar5 + 0x70);
goto LAB_140397811;
}
}
uVar1 = *(uint *)(lVar4 + 0x4c);
LAB_140397811:
return (ulonglong)uVar1;
}



void FUN_140397850(longlong param_1,int param_2,longlong *param_3)

{
int iVar1;
undefined4 uVar2;
int iVar3;
longlong lVar4;
longlong lVar5;
longlong lVar6;
float fVar7;
float fVar8;
int local_res8 [2];
ulonglong in_stack_fffffffffffffea8;
ulonglong in_stack_fffffffffffffeb0;
undefined8 local_138;
undefined8 local_130;
undefined4 local_128;
undefined4 uStack292;
undefined4 local_120;
undefined4 uStack284;
undefined4 local_118 [22];
undefined4 local_c0;

local_res8[0] = 0;
lVar4 = FUN_1403d90d0();
if (lVar4 == 0) {
return;
}
if ((((*(longlong *)(lVar4 + 0x18) != 0) && (*(int *)(*(longlong *)(lVar4 + 0x18) + 0xa8) != 0))
&& (lVar5 = FUN_140244b00(), lVar5 != 0)) &&
((lVar6 = FUN_140246480(*(undefined4 *)(lVar5 + 4)), lVar6 != 0 &&
(*(int *)(lVar6 + 4) != 0x14)))) {
if ((*(int *)(lVar5 + 8) != 0) &&
(iVar1 = (**(code **)(*DAT_140c659a0 + 0x20))
        (DAT_140c659a0,*(undefined8 *)(param_1 + 0x78),*(int *)(lVar5 + 8),0,
         in_stack_fffffffffffffea8 & 0xffffffff00000000,
         in_stack_fffffffffffffeb0 & 0xffffffff00000000), iVar1 == 0)) {
return;
}
lVar5 = FUN_1403ac780(param_1 + 0xa0);
if (lVar5 != 0) {
FUN_1403998e0(DAT_140c65898,lVar5 + 0x20,0,0);
return;
}
}
local_118[0] = FUN_140397740(param_1);
lVar5 = FUN_1403acd90(DAT_140c65b70,local_118[0],*(undefined8 *)(param_1 + 0x78));
if (lVar5 == 0) {
return;
}
iVar1 = DAT_140c45e40;
if (*DAT_140c63750 < DAT_140c45e40) {
iVar1 = *DAT_140c63750;
}
if ((&DAT_140c45e50)[iVar1] != '\0') {
if (param_2 == 2) {
*(undefined4 *)(param_1 + 0x6364) = local_118[0];
}
else if ((param_3 != (longlong *)0x0) &&
(iVar1 = (**(code **)(*param_3 + 0xa8))(param_3), iVar1 == 2)) {
*(undefined4 *)(param_1 + 0x6364) = 0;
return;
}
}
FUN_1407e4830(local_118,0,200);
iVar1 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
local_c0 = 1;
if (((iVar1 - 2U & 0xfffffffa) == 0) && (iVar1 != 3)) {
lVar5 = FUN_1403bfd60(param_1,local_118,local_res8,0);
if (lVar5 == 0) {
return;
}
if ((local_res8[0] != 0) && (local_res8[0] != 0x13d)) {
return;
}
}
if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
FUN_1403a2550(param_1);
*(undefined4 *)(param_1 + 0x6648) = 7;
local_138 = (ulonglong)local_138._4_4_ << 0x20;
local_130 = FUN_14001c280(param_1);
local_120 = 0;
uStack284 = 0;
local_128 = 0x4039ea90;
uStack292 = 1;
uVar2 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
FUN_140195960(param_1 + 0x6658,uVar2,&local_138,4);
return;
}
local_138 = 0;
uStack292 = 0;
local_120 = 0;
local_128 = 0;
uStack284 = 0x60;
local_130 = 0;
iVar1 = FUN_1403986f0(&local_138,**(undefined4 **)(lVar5 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      lVar4,0,0,&local_138,1);
if (iVar1 == 0x69) {
fVar7 = *(float *)(*(longlong *)(lVar5 + 0x70) + 0x70) - 1.0;
fVar8 = 1.0;
if (1.0 <= fVar7) {
fVar8 = fVar7;
}
iVar1 = DAT_140c4d2a0;
if (*DAT_140c63750 < DAT_140c4d2a0) {
iVar1 = *DAT_140c63750;
}
if (((&DAT_140c4d2b0)[iVar1] != '\0') && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
FUN_1405598d0(param_1 + 0x70b0);
*(undefined4 *)(param_1 + 0x70b4) = 2;
uVar2 = *(undefined4 *)(lVar4 + 8);
*(float *)(param_1 + 0x70ec) = fVar8;
*(undefined4 *)(param_1 + 0x70bc) = uVar2;
*(undefined4 *)(param_1 + 0x7104) = 1;
FUN_140559920(param_1 + 0x70b0);
}
}
else {
if ((iVar1 == 0) || (iVar1 == 0x13d)) {
iVar3 = FUN_14047bfd0();
if ((iVar3 != 0) && (iVar3 = FUN_1403986f0(), (iVar3 - 0x43U & 0xfffffffd) == 0)) {
*(undefined4 *)(param_1 + 0x6648) = 7;
FUN_14039e400(param_1);
goto LAB_140397ca9;
}
if (*(int *)(param_1 + 0x70b8) != 0) {
FUN_1405598d0();
}
if (iVar1 != 0x13d) {
FUN_14046afc0(*(undefined8 *)(param_1 + 0x78),lVar5,0);
}
}
if ((iVar1 == 0) || (iVar1 == 0x13d)) {
iVar1 = DAT_140c45e80;
if (*DAT_140c63750 < DAT_140c45e80) {
iVar1 = *DAT_140c63750;
}
if (((&DAT_140c45e90)[iVar1] == '\0') || (local_res8[0] = 0, *(int *)(param_1 + 0x6364) != 0))
{
local_res8[0] = 1;
}
FUN_1403f4900(param_1,0xe3,local_res8);
}
}
LAB_140397ca9:
if (local_138 != 0) {
(**(code **)(*(longlong *)(local_138 + -0x10) + 8))(local_138 + -0x10);
}
return;
}



void FUN_140397ce0(longlong param_1)

{
float fVar1;
int iVar2;
undefined4 uVar3;
int iVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
float fVar8;
uint local_res8 [2];
undefined8 uVar9;
undefined8 uVar10;
undefined8 *puVar11;
undefined8 local_118;
undefined8 local_110;
undefined4 local_108;
undefined4 uStack260;
undefined4 local_100;
undefined4 uStack252;
undefined4 local_f8 [22];
undefined4 local_a0;

lVar6 = *(longlong *)(param_1 + 0x6490);
if ((lVar6 != 0) && (*(int *)(lVar6 + 0x2ac) != 0)) {
return;
}
uVar3 = 0;
if (lVar6 != 0) {
uVar3 = *(undefined4 *)(lVar6 + 0x108);
}
lVar6 = FUN_1403d90d0(param_1,uVar3);
if (lVar6 == 0) {
return;
}
if (*(int *)(lVar6 + 0x80) != 0x14) {
return;
}
if (*(int *)(lVar6 + 0x250) == 0) {
return;
}
iVar2 = FUN_14045a950(*(undefined8 *)(param_1 + 0x78),uVar3);
if (iVar2 == 0) {
return;
}
if (*(longlong *)(param_1 + 0x78) == 0) {
uVar3 = 0x17;
}
else {
uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xdc);
}
lVar7 = FUN_1401f31e0(uVar3);
if (lVar7 == 0) {
return;
}
local_f8[0] = *(undefined4 *)(lVar7 + 0x54);
lVar7 = FUN_1403acd90(DAT_140c65b70,local_f8[0],*(undefined8 *)(param_1 + 0x78));
if (lVar7 == 0) {
return;
}
if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
FUN_1403a2550(param_1);
*(undefined4 *)(param_1 + 0x6648) = 8;
local_118 = (ulonglong)local_118._4_4_ << 0x20;
local_110 = FUN_14001c280(param_1);
local_100 = 0;
uStack252 = 0;
local_108 = 0x4039ea90;
uStack260 = 1;
uVar3 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
FUN_140195960(param_1 + 0x6658,uVar3,&local_118,4);
return;
}
FUN_1407e4830(local_f8,0,200);
iVar2 = *(int *)(*(longlong *)(lVar7 + 0x70) + 0x18);
local_a0 = 1;
local_res8[0] = 0;
if (((iVar2 - 2U & 0xfffffffa) == 0) && (iVar2 != 3)) {
lVar7 = FUN_1403bfd60(param_1,local_f8,local_res8,0);
if (lVar7 == 0) {
return;
}
if ((local_res8[0] != 0) && (local_res8[0] != 0x13d)) {
return;
}
}
uVar3 = 1;
puVar11 = &local_118;
uVar10 = 0;
local_118 = 0;
uStack260 = 0;
local_100 = 0;
local_108 = 0;
uStack252 = 0x60;
local_110 = 0;
uVar9 = 0;
iVar2 = FUN_1403986f0(puVar11,**(undefined4 **)(lVar7 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      lVar6,0,0,puVar11,1);
if (iVar2 == 0x69) {
fVar1 = *(float *)(*(longlong *)(lVar7 + 0x70) + 0x70);
fVar8 = 0.1;
if (0.1 <= fVar1) {
fVar8 = fVar1;
}
iVar2 = DAT_140c4d2a0;
if (*DAT_140c63750 < DAT_140c4d2a0) {
iVar2 = *DAT_140c63750;
}
if (((&DAT_140c4d2b0)[iVar2] != '\0') && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
FUN_1405598d0(param_1 + 0x70b0);
*(undefined4 *)(param_1 + 0x70b4) = 2;
uVar3 = *(undefined4 *)(lVar6 + 8);
*(float *)(param_1 + 0x70ec) = fVar8;
*(undefined4 *)(param_1 + 0x70bc) = uVar3;
*(undefined4 *)(param_1 + 0x7104) = 3;
FUN_140559920(param_1 + 0x70b0);
}
}
else {
if ((iVar2 == 0) || (iVar2 == 0x13d)) {
uVar3 = 1;
puVar11 = (undefined8 *)0x0;
uVar10 = 0;
uVar9 = 0;
iVar4 = FUN_1403986f0();
iVar5 = FUN_14047bfd0(*(undefined8 *)(param_1 + 0x78));
if ((iVar5 != 0) && ((iVar4 - 0x43U & 0xfffffffd) == 0)) {
*(undefined4 *)(param_1 + 0x6648) = 8;
FUN_14039e400(param_1);
goto LAB_14039804d;
}
if (*(int *)(param_1 + 0x70b8) != 0) {
FUN_1405598d0(param_1 + 0x70b0);
}
}
if ((iVar2 == 0) || (iVar2 == 0x13d)) {
local_res8[0] = local_res8[0] & 0xffffff00;
FUN_1403f4900(param_1,0xe4,local_res8);
if (iVar2 != 0x13d) {
FUN_14046afc0(*(undefined8 *)(param_1 + 0x78),lVar7,0);
}
}
else {
FUN_1403a12a0(param_1,iVar2,lVar7,0,uVar9,uVar10,puVar11,uVar3);
}
}
LAB_14039804d:
if (local_118 != 0) {
(**(code **)(*(longlong *)(local_118 + -0x10) + 8))(local_118 + -0x10);
}
return;
}



void FUN_1403980a0(longlong param_1)

{
undefined4 uVar1;
int iVar2;
longlong lVar3;
undefined8 uVar4;
undefined4 local_res8 [2];

if (*(longlong *)(param_1 + 0x78) != 0) {
uVar4 = 0;
if ((*(int *)(*(longlong *)(param_1 + 0x78) + 0x2ac) == 0) &&
((*(longlong *)(DAT_140c65898 + 0x7258) == 0 ||
((iVar2 = *(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14), iVar2 != 3 && (iVar2 != 8)
))))) {
iVar2 = DAT_140c45de0;
if (*DAT_140c63750 < DAT_140c45de0) {
iVar2 = *DAT_140c63750;
}
if (*(int *)(&DAT_140c45df0 + (longlong)iVar2 * 4) != 1) {
return;
}
}
else {
uVar4 = 1;
}
uVar1 = FUN_1403982a0(param_1,uVar4);
lVar3 = FUN_1403acd90(DAT_140c65b70,uVar1,*(undefined8 *)(param_1 + 0x78));
if (lVar3 != 0) {
iVar2 = FUN_1403986f0(*(undefined4 **)(lVar3 + 0x70),**(undefined4 **)(lVar3 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x78),0,0,0,1)
;
if (iVar2 == 0) {
FUN_14046afc0(*(undefined8 *)(param_1 + 0x78),lVar3,0);
}
else if (iVar2 != 0x13d) {
return;
}
local_res8[0] = 1;
FUN_1403f4900(param_1,0x17e,local_res8);
*(undefined4 *)(param_1 + 0x6820) = 1;
}
}
return;
}



void FUN_1403981c0(longlong param_1)

{
int iVar1;
int iVar2;
longlong lVar3;
longlong lVar4;
undefined4 local_res8 [2];

lVar4 = *(longlong *)(param_1 + 0x78);
lVar3 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(lVar4 + 0x1600));
if (lVar3 == 0) {
if (*(longlong *)(DAT_140c65898 + 0x78) != lVar4) goto LAB_140398244;
lVar4 = FUN_14039df50();
if (lVar4 == 0) goto LAB_140398244;
lVar3 = FUN_1404695e0(lVar4);
if (lVar3 == 0) goto LAB_140398244;
}
iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x138) + 0x70) + 4);
iVar2 = FUN_1403982a0(param_1,0);
if (iVar1 != iVar2) {
iVar2 = FUN_1403982a0(param_1,1);
if (iVar1 != iVar2) {
LAB_140398244:
local_res8[0] = 0;
FUN_1403f4900(param_1,0x17e,local_res8);
*(undefined4 *)(param_1 + 0x6820) = 0;
return;
}
}
FUN_14039cce0(param_1,*(undefined4 *)(lVar3 + 0x5c),6);
return;
}



undefined4 FUN_1403982a0(longlong param_1,int param_2)

{
int iVar1;
longlong lVar2;
undefined8 uVar3;

if (*(longlong *)(param_1 + 0x78) != 0) {
iVar1 = FUN_14047be40();
if (iVar1 != 0) {
iVar1 = 1;
goto LAB_140398311;
}
}
iVar1 = FUN_14039e1a0(param_1);
if (iVar1 == 0) {
iVar1 = 0;
if (*(longlong *)(param_1 + 0x78) != 0) {
lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc0));
iVar1 = 0;
if ((lVar2 != 0) && (iVar1 = 0, *(int *)(lVar2 + 0x80) == 7)) {
iVar1 = 3;
}
}
}
else {
iVar1 = 2;
}
LAB_140398311:
uVar3 = 0x4cb;
if (param_2 != 0) {
uVar3 = 0x19f;
}
lVar2 = FUN_140200220(uVar3);
if (lVar2 != 0) {
return *(undefined4 *)(lVar2 + 4 + (longlong)iVar1 * 4);
}
return 0;
}



void FUN_140398360(longlong param_1)

{
int iVar1;

if (DAT_140c89aa0 == 0) {
iVar1 = FUN_1404daac0();
if (iVar1 != 0) goto LAB_1403983a7;
iVar1 = FUN_1404dab80(param_1);
if (iVar1 != 0) goto LAB_1403983a7;
iVar1 = FUN_1404dacf0(param_1);
if (iVar1 != 0) goto LAB_1403983a7;
iVar1 = FUN_1404dad90(param_1);
if ((iVar1 != 0) || (*(int *)(param_1 + 0x70b8) != 0)) goto LAB_1403983a7;
LAB_1403983c9:
if (*(int *)(param_1 + 0x6820) != 0) {
FUN_1403981c0(param_1);
return;
}
}
else {
LAB_1403983a7:
if (*(int *)(param_1 + 0x6824) == 0) {
iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7588) + 200))
        (*(longlong **)(param_1 + 0x7588),0x21);
if (iVar1 == 0) goto LAB_1403983c9;
}
if (*(int *)(param_1 + 0x6820) == 0) {
FUN_1403980a0(param_1);
return;
}
}
return;
}



void FUN_140398400(ulonglong param_1)

{
    longlong lVar1;
    ulonglong local_res8 [4];

    lVar1 = DAT_140c65898;
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) == 0)) &&
        (*(int *)(DAT_140c65898 + 0x66e0) != 0)) {
        local_res8[0] = param_1;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Vacuum","");
        FUN_140051af0(0,0x6e);
        local_res8[0] = local_res8[0] & 0xffffffffffffff00;
        FUN_1403f4900(lVar1,0x1ad,local_res8);
    }
    return;
}



void FUN_140398470(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = DAT_140c65898;
    if (((DAT_140c65970 == 0) || (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 == 0)) ||
        (*(int *)(lVar1 + 0x250) != 0)) {
        return;
    }
    if ((((*(uint *)(lVar1 + 0x1070) & 0x100) == 0) && (*(int *)(lVar1 + 0x1088) != 1)) &&
        ((iVar3 = FUN_14039e0a0(DAT_140c65898), iVar3 == 0 &&
                                                (iVar3 = FUN_14039e060(lVar2), iVar3 == 0)))) {
        return;
    }
    FUN_14056f9f0();
    return;
}



void FUN_1403984e0(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = DAT_140c65898;
    if ((((DAT_140c65970 != 0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 != 0)) &&
         (*(int *)(lVar1 + 0x250) == 0)) &&
        (((*(uint *)(lVar1 + 0x1070) & 0x100) == 0 && (*(int *)(lVar1 + 0x1088) != 1)))) {
        iVar3 = FUN_14039e0a0(DAT_140c65898);
        if (iVar3 == 0) {
            FUN_14039e060(lVar2);
            return;
        }
    }
    return;
}



void FUN_140398540(ulonglong param_1,short *param_2)

{
    undefined2 *puVar1;
    short sVar2;
    int iVar3;
    undefined8 uVar4;
    undefined2 *puVar5;
    ulonglong *puVar6;
    undefined2 *puVar7;
    ulonglong uVar8;
    undefined2 *puVar9;
    longlong lVar10;
    ulonglong local_res8;
    ulonglong local_res10;
    longlong local_38;
    undefined2 *local_30;

    uVar4 = DAT_140c65898;
    if ((param_2 != (short *)0x0) && (DAT_140c65970 != 0)) {
        puVar7 = (undefined2 *)0x0;
        sVar2 = *param_2;
        puVar5 = puVar7;
        while (sVar2 != 0) {
            puVar5 = (undefined2 *)((longlong)puVar5 + 1);
            sVar2 = param_2[(longlong)puVar5];
        }
        lVar10 = (longlong)puVar5 * 2 >> 1;
        puVar5 = puVar7;
        local_res8 = param_1;
        if (lVar10 + 1U < 0x7fffffffffffffff) {
            puVar5 = (undefined2 *)FUN_14018b280((lVar10 + 1U) * 2,0);
        }
        FUN_1407db590(puVar5,param_2,lVar10 * 2);
        puVar1 = puVar5 + lVar10;
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        local_res8 = (longlong)puVar1 - (longlong)puVar5 >> 1;
        local_res10 = 0x10;
        puVar6 = &local_res8;
        if (0xf < local_res8) {
            puVar6 = &local_res10;
        }
        puVar1 = puVar5 + *puVar6;
        uVar8 = ((longlong)puVar1 - (longlong)puVar5 >> 1) + 1;
        if (uVar8 < 0x7fffffffffffffff) {
            puVar7 = (undefined2 *)FUN_14018b280(uVar8 * 2);
        }
        puVar9 = puVar7;
        if (puVar5 != puVar1) {
            do {
                if (puVar9 != (undefined2 *)0x0) {
                    *puVar9 = *(undefined2 *)(((longlong)puVar5 - (longlong)puVar7) + (longlong)puVar9);
                }
                puVar9 = puVar9 + 1;
            } while ((undefined2 *)(((longlong)puVar5 - (longlong)puVar7) + (longlong)puVar9) != puVar1);
        }
        if (puVar9 != (undefined2 *)0x0) {
            *puVar9 = 0;
        }
        if (puVar5 != (undefined2 *)0x0) {
            FUN_14018b900(puVar5);
        }
        iVar3 = DAT_140c4d460;
        if (*DAT_140c63750 < DAT_140c4d460) {
            iVar3 = *DAT_140c63750;
        }
        local_38 = (ulonglong)*(uint *)(&DAT_140c4d470 + (longlong)iVar3 * 4) << 0x20;
        local_30 = puVar7;
        FUN_1403f4900(uVar4,0x68c,&local_38);
        if (puVar7 != (undefined2 *)0x0) {
            FUN_14018b900(puVar7,0);
        }
    }
    return;
}



undefined8
        FUN_1403986f0(undefined8 param_1,int param_2,longlong param_3,longlong param_4,undefined4 *param_5,
undefined8 param_6,undefined8 param_7)

{
longlong lVar1;
undefined8 uVar2;
bool bVar3;
int local_d8 [7];
undefined4 local_bc;
undefined4 local_b4;
undefined4 local_a4;
undefined4 local_a0;
undefined4 local_9c;

FUN_1407e4830(local_d8,0,200);
local_bc = 0;
if (param_3 != 0) {
local_bc = *(undefined4 *)(param_3 + 8);
}
if (param_2 == 0) {
LAB_1403987dd:
uVar2 = 4;
}
else {
local_d8[0] = param_2;
if (param_3 == 0) {
LAB_140398776:
lVar1 = FUN_1407a0fd0(DAT_140c65b70,param_2);
if (lVar1 == 0) goto LAB_1403987dd;
}
else {
if (*(longlong *)(DAT_140c65898 + 0x78) == param_3) {
bVar3 = true;
}
else {
bVar3 = *(longlong *)(DAT_140c65898 + 0x6490) == param_3;
}
lVar1 = 0;
if (bVar3) {
lVar1 = DAT_140c65898;
}
if (lVar1 == 0) goto LAB_140398776;
lVar1 = FUN_1405a5b90(lVar1,param_2);
if (lVar1 == 0) goto LAB_140398776;
}
if (param_4 != 0) {
local_b4 = *(undefined4 *)(param_4 + 8);
}
if (param_5 != (undefined4 *)0x0) {
local_a4 = *param_5;
local_a0 = param_5[1];
local_9c = param_5[2];
}
uVar2 = FUN_1403ace00(param_5,local_d8,param_6,param_7);
}
return uVar2;
}



undefined8
        FUN_140398800(undefined8 param_1,int *param_2,longlong param_3,longlong param_4,int *param_5,
        undefined8 param_6,undefined8 param_7)

{
longlong lVar1;
undefined8 uVar2;
bool bVar3;

if (*param_2 != 0) {
if (param_3 != 0) {
if (*(longlong *)(DAT_140c65898 + 0x78) == param_3) {
bVar3 = true;
}
else {
bVar3 = *(longlong *)(DAT_140c65898 + 0x6490) == param_3;
}
lVar1 = 0;
if (bVar3) {
lVar1 = DAT_140c65898;
}
if (lVar1 != 0) {
lVar1 = FUN_1405a5b90();
if (lVar1 != 0) goto LAB_140398869;
}
}
lVar1 = FUN_1407a0fd0(DAT_140c65b70);
if (lVar1 != 0) {
LAB_140398869:
if (param_4 != 0) {
param_2[9] = *(int *)(param_4 + 8);
}
if (param_5 != (int *)0x0) {
param_2[0xd] = *param_5;
param_2[0xe] = param_5[1];
param_2[0xf] = param_5[2];
}
uVar2 = FUN_1403ace00(param_5,param_2,param_6,param_7);
return uVar2;
}
}
return 4;
}



// WARNING: Removing unreachable block (ram,0x000140398c61)
// WARNING: Removing unreachable block (ram,0x000140398c69)
// WARNING: Removing unreachable block (ram,0x000140398c80)
// WARNING: Removing unreachable block (ram,0x000140398ca2)

int FUN_1403988d0(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4,
int *param_5,undefined8 *param_6,undefined4 *param_7)

{
int iVar1;
int iVar2;
int iVar3;
int iVar4;
longlong lVar5;
longlong lVar6;
longlong *plVar7;
undefined local_res8 [8];
int local_res10;
longlong local_res18;
longlong local_res20;
ulonglong in_stack_ffffffffffffff78;
longlong local_68;
undefined8 local_60;
undefined4 local_58;
undefined8 local_54;
undefined4 local_4c;

local_res18 = param_3;
local_res20 = param_4;
if (*(longlong *)(param_1 + 0x7040) != 0) {
FUN_14057a2c0();
}
lVar5 = FUN_1403d90d0();
iVar4 = 0;
if ((((*(longlong *)(param_1 + 0x78) != 0) &&
(param_2[7] == *(int *)(*(longlong *)(param_1 + 0x78) + 8))) &&
(*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
((*(int *)(lVar5 + 8) == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) &&
(*(longlong *)(DAT_140c65898 + 0x6718) != 0)))) {
local_res8[0] = 0;
FUN_1403f4900(param_1,399,local_res8);
}
iVar3 = *(int *)(lVar5 + 0x108);
local_res10 = 1;
iVar2 = 1;
*param_2 = **(undefined4 **)(param_3 + 0x70);
param_2[7] = *(undefined4 *)(lVar5 + 8);
iVar1 = DAT_140c4d2a0;
if (*DAT_140c63750 < DAT_140c4d2a0) {
iVar1 = *DAT_140c63750;
}
if ((((&DAT_140c4d2b0)[iVar1] != '\0') && (*(int *)(*(longlong *)(param_3 + 0x70) + 0x7c) == 2))
&& (((*(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c) & 0x4000000) == 0 && (iVar3 != 0)))) {
lVar6 = FUN_1403d90d0(param_1,iVar3);
in_stack_ffffffffffffff78 = param_1 + 0x6d10;
param_2[9] = iVar3;
iVar2 = FUN_140398800(local_res20 == 0,param_2,lVar5,lVar6,in_stack_ffffffffffffff78,local_res20
        ,0,local_res20 == 0);
param_3 = local_res18;
if (iVar2 == 0x69) {
iVar4 = iVar3;
iVar3 = 0;
goto LAB_140398a85;
}
}
if (*param_5 == 0) {
lVar6 = FUN_14055bdc0(param_1,lVar5,param_3,0,in_stack_ffffffffffffff78 & 0xffffffff00000000);
iVar3 = local_res10;
if (lVar6 != 0) {
iVar4 = *(int *)(lVar6 + 8);
}
}
else {
lVar6 = FUN_1403d90d0();
iVar4 = *param_5;
iVar3 = local_res10;
}
LAB_140398a85:
*param_5 = iVar4;
param_2[9] = iVar4;
if (iVar3 != 0) {
iVar2 = FUN_140398800(param_1 + 0x6d10,param_2,lVar5,lVar6,param_1 + 0x6d10,local_res20,0,
                      local_res20 == 0);
}
*param_7 = 0;
if ((((((iVar2 - 0x43U & 0xfffffffd) == 0) && (lVar5 == *(longlong *)(DAT_140c65898 + 0x78))) &&
(plVar7 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar5 + 0xc0)),
plVar7 != (longlong *)0x0)) &&
((iVar4 = (**(code **)(*plVar7 + 0x20))(plVar7), iVar4 != 0 && (*(int *)(plVar7 + 0x10) != 9))
)) && ((iVar4 = FUN_14047c120(plVar7), iVar4 == 0 &&
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == *(int *)(lVar5 + 0xc0))))) {
local_68 = 0;
local_54 = 0;
local_58 = 0;
local_4c = 0x60;
local_60 = 0;
iVar4 = FUN_140398800(param_1 + 0x6d10,param_2,lVar5,lVar6,param_1 + 0x6d10,local_res20,
                      &local_68,local_res20 == 0);
if ((iVar4 == 0) || (iVar4 == 0x13d)) {
*param_7 = 1;
}
else if (iVar4 != 0x33) {
iVar2 = iVar4;
}
if (local_68 != 0) {
(**(code **)(*(longlong *)(local_68 + -0x10) + 8))(local_68 + -0x10);
}
}
if ((iVar2 == 0) || (iVar2 == 0x13d)) {
if (DAT_140c65b70 == 0) {
iVar4 = 1;
}
else {
iVar4 = FUN_140561780();
}
if (param_6 != (undefined8 *)0x0) {
*param_6 = 0;
}
if (iVar4 == 0) {
if (*(int *)(lVar5 + 0x80) == 0x18) {
iVar2 = 0;
}
else {
iVar2 = 5;
}
}
else {
iVar2 = 1;
}
}
return iVar2;
}



int FUN_140398cc0(longlong param_1,longlong *param_2,longlong param_3,int param_4,
        undefined8 *param_5)

{
uint uVar1;
longlong lVar2;
undefined4 uVar3;
int iVar4;
int iVar5;
longlong lVar6;
longlong lVar7;
longlong lVar8;
undefined8 *puVar9;
undefined8 uVar10;
undefined8 uVar11;
longlong lVar12;
undefined4 local_res10 [2];
undefined8 local_138;
undefined4 local_130;
undefined4 uStack300;
undefined4 local_128;
undefined4 uStack292;
code *local_120;
undefined8 local_118;
undefined4 local_110;
longlong local_108;
int local_100 [2];
undefined4 local_f8 [7];
undefined4 local_dc;
undefined2 local_d8;
undefined4 local_a0;

lVar12 = param_2[9];
lVar6 = param_2[8];
local_138 = 0xffffffff0000012c;
if (lVar12 == 0) {
lVar12 = lVar6 + 8;
}
if ((*(int *)(lVar6 + 0x1a4) != 0) && (*(int *)((longlong)param_2 + 0x7c) == 0)) {
return 0x19;
}
uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x38);
if (uVar1 <= *(uint *)(lVar12 + 8) && *(uint *)(lVar12 + 8) != uVar1) {
return 0x1a;
}
uVar3 = 0;
local_res10[0] = 0;
if (param_4 == 1) {
if (*(int *)(*(longlong *)(param_3 + 0x70) + 0x7c) != 6) {
return 5;
}
local_138 = *param_5;
lVar6 = FUN_1403ac780(param_1 + 0xa0,&local_138);
if (lVar6 == 0) {
return 0x5a;
}
goto LAB_140398f0d;
}
if (param_4 == 2) {
if (param_5 != (undefined8 *)0x0) {
uVar3 = *(undefined4 *)param_5;
}
goto LAB_140398f0d;
}
if (*(int *)(lVar6 + 0x1b4) == 0) goto LAB_140398f0d;
lVar7 = FUN_1405a8a40();
if (*(int *)(lVar6 + 0x1b8) == -1) {
iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar7 + 8));
if (iVar4 == 2) {
return 0x1d;
}
iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar7 + 8));
if (iVar4 == 3) {
return 0x1d;
}
iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar7 + 8));
if (iVar4 != 1) {
return 0x1c;
}
goto LAB_140398f0d;
}
iVar4 = FUN_1405510d0(lVar7);
if (iVar4 != 0) {
return 0x1d;
}
iVar4 = FUN_140550c00(lVar7,*(undefined4 *)(lVar6 + 0x1b8));
if (iVar4 == 0) {
return 0x1c;
}
iVar4 = FUN_1405517a0(lVar7,*(undefined4 *)(lVar6 + 0x1b8));
if (iVar4 == 0) goto LAB_140398f0d;
lVar2 = *(longlong *)(param_1 + 0x6490);
if (*(int *)(*(longlong *)(param_3 + 0x70) + 0x18) == 3) {
switchD_140398e46_caseD_4:
uVar3 = 0;
}
else {
switch(*(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x7c)) {
case 0:
case 2:
case 6:
case 7:
uVar3 = *(undefined4 *)(lVar2 + 8);
break;
case 1:
case 3:
case 5:
case 8:
uVar3 = *(undefined4 *)(lVar2 + 0x108);
break;
default:
goto switchD_140398e46_caseD_4;
}
}
lVar8 = FUN_1403d90d0(param_1,uVar3);
uVar3 = local_res10[0];
if ((lVar8 != 0) && (lVar2 != lVar8)) {
if (*(int *)(lVar8 + 0x35f8) == -1) {
return 0x1c;
}
iVar4 = FUN_140551730(lVar7,*(undefined4 *)(lVar6 + 0x1b8));
uVar3 = local_res10[0];
if (iVar4 != 0) {
return 0x1c;
}
}
LAB_140398f0d:
if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) == 0) {
FUN_1407e4830(local_f8,0,200);
local_dc = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
local_d8 = *(undefined2 *)(lVar12 + 0xc);
local_a0 = 1;
local_108 = 0;
local_res10[0] = uVar3;
iVar4 = FUN_1403988d0(param_1,local_f8,param_3,param_2,local_res10,&local_108,local_100);
lVar12 = local_108;
if ((iVar4 == 0) || (iVar4 == 0x13d)) {
uStack300 = 0;
local_128 = 0;
uStack292 = 0;
local_120 = (code *)0x0;
local_118 = 0;
local_110 = 0;
local_130 = *(undefined4 *)(local_108 + 0x60);
puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
uStack300 = (undefined4)*puVar9;
local_128 = (undefined4)((ulonglong)*puVar9 >> 0x20);
uStack292 = *(undefined4 *)(lVar12 + 0x158);
local_118 = *(undefined8 *)(param_1 + 0x6d10);
local_110 = *(undefined4 *)(param_1 + 0x6d18);
local_120 = (code *)local_138;
FUN_1403f4900(param_1,0x943,&local_130);
}
else {
if (iVar4 == 0x69) {
uVar10 = (**(code **)(*param_2 + 0x20))(param_2,&local_108);
uVar11 = FUN_1403d90d0(param_1,local_res10[0]);
iVar5 = FUN_1405593e0(param_1 + 0x70b0,uVar11,uVar10);
if (-1 < iVar5) {
iVar4 = 2;
}
}
else if (local_100[0] != 0) {
*(undefined4 *)(param_1 + 0x6648) = 1;
puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
*(undefined8 *)(param_1 + 0x66a8) = *puVar9;
uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
*(undefined8 *)(param_1 + 0x66b0) = uVar10;
FUN_14039e400(param_1);
}
uVar10 = FUN_1403b5250(iVar4);
FUN_1400035b0(0x18,3,0,local_f8[0],uVar10);
}
}
else {
FUN_1403a2550(param_1);
*(undefined4 *)(param_1 + 0x6648) = 1;
puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
*(undefined8 *)(param_1 + 0x66a8) = *puVar9;
uVar10 = (**(code **)(*param_2 + 0x30))(param_2);
local_130 = 0;
*(undefined8 *)(param_1 + 0x66b0) = uVar10;
uVar10 = FUN_14001c280(param_1);
local_118 = 0;
local_128 = (undefined4)uVar10;
uStack292 = (undefined4)((ulonglong)uVar10 >> 0x20);
local_120 = FUN_14039ea90;
uVar3 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
FUN_140195960(param_1 + 0x6658,uVar3,&local_130,4);
iVar4 = 2;
}
return iVar4;
}



int FUN_1403993c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
longlong lVar1;
longlong lVar2;
int iVar3;
undefined8 local_res8;
longlong local_res10;
undefined local_e8 [28];
undefined4 local_cc [15];
undefined4 local_90;

lVar1 = DAT_140c65898;
local_res10 = 0;
local_res8 = param_1;
if ((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x1cc) != 0) &&
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x37a0) == 0)) {
FUN_1403a2550();
}
lVar2 = DAT_140c65898;
*(undefined4 *)(DAT_140c659d0 + 0x188) = *param_3;
FUN_1407e4830(local_e8,0,200);
local_cc[0] = *(undefined4 *)(*(longlong *)(lVar2 + 0x78) + 8);
local_90 = 1;
iVar3 = 5;
if (param_2 != 0) {
iVar3 = 0;
}
if ((((iVar3 == 0) || (iVar3 == 0x13d)) &&
(iVar3 = FUN_1403988d0(lVar2,local_e8,param_2,0,local_cc,&local_res10,&local_res8),
        local_res10 != 0)) && ((iVar3 == 0 || (iVar3 == 0x13d)))) {
param_3[1] = *(undefined4 *)(local_res10 + 0x60);
FUN_1403f4900(lVar1,0x141,param_3);
}
return iVar3;
}



undefined8 FUN_1403994f0(longlong param_1,longlong param_2,ulonglong param_3)

{
ulonglong *puVar1;
longlong lVar2;
longlong lVar3;
int iVar4;
undefined8 uVar5;
undefined8 uVar6;
longlong local_res8;
undefined local_e8 [28];
undefined4 local_cc;
undefined4 local_90;

lVar2 = DAT_140c65898;
local_res8 = param_1;
if ((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x1cc) != 0) &&
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x37a0) == 0)) {
FUN_1403a2550(DAT_140c65898);
}
lVar3 = DAT_140c65898;
FUN_1407e4830(local_e8,0,200);
uVar6 = 0;
local_cc = *(undefined4 *)(*(longlong *)(lVar3 + 0x78) + 8);
local_90 = 1;
uVar5 = 5;
if (param_2 != 0) {
local_res8 = 0;
uVar5 = uVar6;
if (((DAT_140c65b70 != 0) &&
(iVar4 = FUN_140561780(local_cc,local_e8,**(undefined4 **)(param_2 + 0x70),&local_res8),
        local_res8 != 0)) && (iVar4 == 0)) {
puVar1 = (ulonglong *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x118);
if ((param_3 & 0xffffffff) < *puVar1 || (param_3 & 0xffffffff) == *puVar1) {
local_res8 = CONCAT44(*(undefined4 *)(local_res8 + 0x60),**(undefined4 **)(param_2 + 0x70));
FUN_1403f4900(lVar2,0xc2,&local_res8);
}
else {
uVar5 = 0x14b;
}
}
}
return uVar5;
}



int FUN_140399630(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
longlong lVar1;
int iVar2;
undefined4 uVar3;
longlong lVar4;
undefined8 uVar5;
undefined8 local_res8;
longlong local_res10;
undefined local_d8 [28];
undefined4 local_bc [15];
undefined4 local_80;

lVar1 = DAT_140c65898;
local_res10 = 0;
local_res8 = param_1;
if ((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x1cc) != 0) &&
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x37a0) == 0)) {
FUN_1403a2550(DAT_140c65898);
}
FUN_1407e4830(local_d8,0,200);
local_bc[0] = *(undefined4 *)(*(longlong *)(lVar1 + 0x78) + 8);
local_80 = 1;
if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
return 5;
}
iVar2 = FUN_1403988d0(lVar1,local_d8,param_2,0,local_bc,&local_res10,&local_res8);
if (local_res10 == 0) {
return iVar2;
}
if ((iVar2 != 0) && (iVar2 != 0x13d)) {
return iVar2;
}
*param_3 = *(undefined4 *)(local_res10 + 0x60);
lVar4 = FUN_140245c00(param_3[2]);
if (lVar4 != 0) {
if (*(int *)(lVar4 + 8) == 0x16) {
uVar5 = 0x4f;
goto LAB_14039973e;
}
if (((*(byte *)(lVar4 + 0x20) & 4) != 0) && (uVar5 = 0x57, *(int *)(lVar4 + 0x1c) == 0))
goto LAB_14039973e;
}
uVar5 = 0x2c;
LAB_14039973e:
uVar3 = FUN_1403a0d20(lVar1,uVar5);
param_3[1] = uVar3;
FUN_1403f4900();
return iVar2;
}



int FUN_140399780(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
longlong lVar1;
int iVar2;
undefined4 uVar3;
longlong lVar4;
undefined8 uVar5;
undefined8 local_res8;
longlong local_res10;
undefined local_e8 [28];
undefined4 local_cc [15];
undefined4 local_90;

lVar1 = DAT_140c65898;
local_res10 = 0;
local_res8 = param_1;
if ((*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x1cc) != 0) &&
(*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x37a0) == 0)) {
FUN_1403a2550(DAT_140c65898);
}
FUN_1407e4830(local_e8,0,200);
local_cc[0] = *(undefined4 *)(*(longlong *)(lVar1 + 0x78) + 8);
local_90 = 1;
if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
return 5;
}
iVar2 = FUN_1403988d0(lVar1,local_e8,param_2,0,local_cc,&local_res10,&local_res8);
if (local_res10 == 0) {
return iVar2;
}
if ((iVar2 != 0) && (iVar2 != 0x13d)) {
return iVar2;
}
*param_3 = *(undefined4 *)(local_res10 + 0x60);
lVar4 = FUN_140245c00(param_3[2]);
if (lVar4 != 0) {
if (*(int *)(lVar4 + 8) == 0x16) {
uVar5 = 0x4f;
goto LAB_140399892;
}
if (((*(byte *)(lVar4 + 0x20) & 4) != 0) && (uVar5 = 0x57, *(int *)(lVar4 + 0x1c) == 0))
goto LAB_140399892;
}
uVar5 = 0x2c;
LAB_140399892:
uVar3 = FUN_1403a0d20(lVar1,uVar5);
param_3[1] = uVar3;
if (param_4 == 0) {
FUN_1403f4900();
}
else {
FUN_1403f4900();
}
return iVar2;
}



ulonglong FUN_1403998e0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
undefined4 uVar1;
longlong lVar2;
uint *puVar3;
int iVar4;
uint uVar5;
longlong *plVar6;
ulonglong uVar7;
longlong lVar8;
ulonglong uVar9;
undefined8 uVar10;
undefined *puVar11;
bool bVar12;
undefined4 local_res8;
undefined4 local_resc;
ulonglong in_stack_ffffffffffffff88;
ulonglong uVar13;
undefined4 local_40;
undefined4 uStack60;
longlong local_38;
undefined4 uStack44;

if (*(longlong *)(param_1 + 0x78) == 0) {
return 0x1e;
}
plVar6 = (longlong *)FUN_1403ac780(param_1 + 0xa0);
if (plVar6 == (longlong *)0x0) {
return 0x16;
}
lVar8 = plVar6[9];
lVar2 = plVar6[8];
if (lVar8 == 0) {
lVar8 = lVar2 + 8;
}
iVar4 = FUN_1403ad020(param_1,lVar2,lVar8);
if (iVar4 == 0) {
(**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
iVar4 = FUN_1403c1460();
if (-1 < iVar4) {
return 0;
}
}
if ((((*(uint *)(lVar2 + 0x154) & 0x400) != 0) && (*(int *)(lVar2 + 0x180) != 0)) &&
(*(int *)(plVar6 + 4) != 0)) {
local_res8 = 300;
local_resc = 0xffffffff;
uVar7 = FUN_140399de0(param_1,param_2,&local_res8,0,
                      in_stack_ffffffffffffff88 & 0xffffffff00000000);
return uVar7;
}
lVar8 = plVar6[10];
uVar7 = 0;
if (lVar8 == 0) {
lVar8 = plVar6[8] + 0x9c;
}
uVar9 = uVar7;
if (((*(int *)(lVar8 + 0x80) != 0) &&
(uVar9 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar8 + 0x80),
                       *(undefined8 *)(DAT_140c65898 + 0x78)), uVar9 != 0)) &&
((lVar8 = FUN_14047b6d0(), lVar8 != 0 &&
((*(int *)(param_1 + 0x67b0) != 0 && (**(int **)(uVar9 + 0x70) == *(int *)(param_1 + 0x67b0)))
)))) {
FUN_14039e400(param_1);
return 0;
}
if (*(int *)(plVar6[8] + 0x198) != 0) {
uVar13 = 0;
iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
        (DAT_140c659a0,*(undefined8 *)(param_1 + 0x78),
         *(undefined4 *)(plVar6[8] + 0x198),0,0,0);
if (iVar4 == 0) {
lVar8 = FUN_1402259c0(*(undefined4 *)(plVar6[8] + 0x198));
if (*(int *)(lVar8 + 0x38) != 0) {
uVar10 = FUN_14034bdd0();
iVar4 = FUN_14018e2c0(&DAT_1409e7964,uVar10);
if (iVar4 != 0) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PrereqFailureMessage",
&DAT_1409e958c,uVar10);
return 0x11;
}
}
uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
if (*(longlong *)(uVar9 + 8) == 0) {
puVar11 = &DAT_1409e7914;
}
else {
puVar11 = (undefined *)FUN_14034bdd0();
}
puVar3 = *(uint **)(DAT_140c7df98 + 0x6f48);
if (puVar3 != (uint *)0x0) {
uVar13 = uVar13 & 0xffffffff00000000;
FUN_1405648a0();
lVar8 = CONCAT44(uStack60,local_40);
if (lVar8 != local_38) {
FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpellCastFailed","iiUUSS",puVar3[4]
,uVar13 & 0xffffffff00000000 | (ulonglong)*puVar3,uVar1,uVar1,lVar8,puVar11)
;
}
if (lVar8 != 0) {
FUN_14018b900(lVar8,0);
}
}
return 0x11;
}
}
lVar8 = plVar6[8];
if (((*(uint *)(lVar8 + 0x154) & 0x400) == 0) || (*(int *)(lVar8 + 0x180) == 0)) {
bVar12 = true;
}
else {
bVar12 = *(int *)(plVar6 + 4) == 0;
}
if ((uVar9 != 0) && (((*(uint *)(lVar8 + 0x154) & 0x200) != 0 || (bVar12)))) {
uVar5 = FUN_14056a070(plVar6,0,param_3,param_4);
if ((uVar5 == 0) || (uVar5 == 0x13d)) {
if (*(int *)(*(longlong *)(uVar9 + 0x70) + 0x7c) == 4) {
iVar4 = FUN_1403a1600(param_1);
if (iVar4 == 0) {
uVar10 = *param_2;
*(ulonglong *)(param_1 + 0x6ce8) = uVar9;
*(undefined8 *)(param_1 + 0x6cf0) = 0x100000000;
*(undefined8 *)(param_1 + 0x6cf8) = uVar10;
*(ulonglong *)(param_1 + 0x6d00) = CONCAT44(uStack44,9);
return 0;
}
FUN_1403a1510();
}
uVar5 = FUN_140398cc0(param_1,plVar6,uVar9,param_3,param_4);
}
if ((uVar5 != 0) && (uVar5 != 0x13d)) {
FUN_1403a12a0(param_1,uVar5,uVar9,0);
}
return (ulonglong)uVar5;
}
if (*(int *)(lVar2 + 0x1b0) == 0) {
if (*(int *)(lVar2 + 0x1d0) != 0) {
(**(code **)(*plVar6 + 0x30))(plVar6);
iVar4 = FUN_1404b99b0();
if (iVar4 != 0) goto LAB_140399cbb;
}
if (*(int *)(lVar2 + 0x1d8) == 0) {
uVar7 = 0x17;
}
else {
iVar4 = FUN_1404528b0();
FUN_140452a30();
if (iVar4 == 2) {
uVar7 = 0x16;
}
}
}
else {
FUN_14039c8a0(param_1,plVar6);
LAB_140399cbb:
uVar7 = 0;
}
return uVar7;
}



int FUN_140399d40(undefined8 param_1,undefined8 param_2)

{
undefined8 *puVar1;
longlong lVar2;
int iVar3;
ulonglong uVar4;
undefined4 *puVar5;
longlong lVar6;
longlong local_res20;
undefined8 local_148;
undefined8 local_140;
undefined8 local_138;
longlong local_130;
undefined8 local_128;
undefined4 local_120;
undefined8 local_11c;
undefined4 local_114;
undefined4 local_110;
undefined4 uStack268;
undefined local_f8 [28];
undefined4 local_dc;
undefined4 local_d4 [13];
undefined4 local_a0;
undefined8 uStack48;

lVar2 = DAT_140c65898;
if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
return 0x1e;
}
uStack48 = 0x140399d73;
puVar5 = (undefined4 *)FUN_1400b5df0(DAT_140c658f0,param_2,0);
if (puVar5 == (undefined4 *)0x0) {
return 0x16;
}
if (puVar5[0x75] != 0) {
uStack48 = 0x140399d98;
lVar6 = FUN_1402085e0();
if (lVar6 != 0) {
uStack48 = 0x140399db0;
lVar6 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar6 + 4),*(undefined8 *)(lVar2 + 0x78));
if (lVar6 != 0) {
if (*(int *)(*(longlong *)(lVar2 + 0x6490) + 0x1cc) != 0) {
FUN_1403a2550();
return 2;
}
uVar4 = 0;
if (DAT_140c7de20 != 0) {
do {
puVar1 = *(undefined8 **)(DAT_140c7de18 + uVar4 * 8);
if (*(int *)(puVar1 + 2) == 3) {
if (puVar1 == (undefined8 *)0x0) {
return 0x15;
}
local_130 = 0;
local_11c = 0;
local_120 = 0;
local_114 = 0x60;
local_128 = 0;
iVar3 = FUN_1403986f0(&local_130,**(undefined4 **)(lVar6 + 0x70),
                      *(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x78),0,0,
                      &local_130,0);
if ((iVar3 == 0) || (iVar3 == 0x13d)) {
FUN_1407e4830(local_f8,0,200);
local_dc = *(undefined4 *)(*(longlong *)(lVar2 + 0x78) + 8);
local_a0 = 1;
local_d4[0] = local_dc;
iVar3 = FUN_1403988d0(lVar2,local_f8,lVar6,0,local_d4,&local_res20,&stack0x00000008)
;
if ((iVar3 == 0) || (iVar3 == 0x13d)) {
local_138 = CONCAT44(*(undefined4 *)(local_res20 + 0x60),*puVar5);
local_110 = *(undefined4 *)(DAT_140c635f0 + 0x1680);
local_140 = *puVar1;
local_148 = CONCAT44(uStack268,local_110);
FUN_1403f4900(lVar2,0x94f,&local_148);
iVar3 = 0;
}
}
else {
FUN_1403a12a0(lVar2,iVar3,lVar6,0);
}
if (local_130 != 0) {
(**(code **)(*(longlong *)(local_130 + -0x10) + 8))(local_130 + -0x10);
return iVar3;
}
return iVar3;
}
uVar4 = uVar4 + 1;
} while (uVar4 < DAT_140c7de20);
}
return 0x15;
}
}
}
return 0x17;
}



undefined4
        FUN_140399de0(longlong param_1,undefined8 param_2,int *param_3,undefined4 param_4,int param_5)

{
int iVar1;
longlong lVar2;
longlong *plVar3;
undefined8 uVar4;
uint uVar5;
uint uVar6;
longlong lVar7;
int local_res8;
uint local_resc;

lVar2 = FUN_1403ac780();
if (lVar2 == 0) {
return 0x16;
}
local_res8 = *param_3;
local_resc = param_3[1];
if (((299 < local_res8) || (local_resc == 0xffffffff)) ||
((local_res8 == 0 && (0x1e < local_resc)))) {
if (*(int *)(lVar2 + 0x20) == 0) {
uVar5 = 0;
local_res8 = 300;
local_resc = 0xffffffff;
if (*(uint *)(param_1 + 0xc4) != 0) {
plVar3 = *(longlong **)(param_1 + 200);
do {
if (*plVar3 == 0) {
local_res8 = *(int *)(param_1 + 0xb8);
local_resc = uVar5;
break;
}
uVar5 = uVar5 + 1;
plVar3 = plVar3 + 1;
} while (uVar5 < *(uint *)(param_1 + 0xc4));
}
}
else if ((*(uint *)(*(longlong *)(lVar2 + 0x40) + 0x154) & 0x100) == 0) {
uVar5 = 0xffffffff;
uVar6 = 0;
lVar7 = 0;
do {
if ((*(uint *)(*(longlong *)(lVar2 + 0x40) + 0x180) >> (uVar6 & 0x1f) & 1) != 0) {
local_resc = uVar6;
if ((*(uint *)(param_1 + 0xa4) <= uVar6) ||
(*(longlong *)(lVar7 + *(longlong *)(param_1 + 0xb0)) == 0)) break;
if (uVar5 == 0xffffffff) {
uVar5 = uVar6;
}
}
uVar6 = uVar6 + 1;
lVar7 = lVar7 + 8;
local_resc = uVar5;
} while (uVar6 < 0x1f);
if (local_resc == 0xffffffff) {
return 0x14;
}
local_res8 = 0;
}
else {
local_res8 = 300;
local_resc = 0xffffffff;
FUN_1403acc80(DAT_140c65898 + 0xa0,lVar2,&local_res8);
if (((299 < local_res8) || (local_resc == 0xffffffff)) ||
((local_res8 == 0 && (0x1e < local_resc)))) {
return 0x14;
}
}
}
lVar2 = FUN_1403ac780(param_1 + 0xa0,param_2);
uVar4 = FUN_1403ac780(param_1 + 0xa0,param_3);
if (param_5 == 0) {
iVar1 = FUN_1403c17d0(param_1,param_2,&local_res8,param_4);
}
else {
if (lVar2 == 0) {
return 0x14;
}
iVar1 = FUN_1403ad100(param_1,lVar2,uVar4,&local_res8,0,0);
}
if (iVar1 == 0) {
if (param_5 == 0) {
*(undefined4 *)(param_1 + 0x6f98) = 1;
}
return 0;
}
if (iVar1 == 2) {
return 0xe;
}
if (iVar1 != 0x2a) {
if (iVar1 == 0x28) {
return 0x13f;
}
if (iVar1 != 0x27) {
return 0x14;
}
return 0x13e;
}
return 0x1a;
}



ulonglong FUN_14039a040(longlong param_1,uint param_2,uint **param_3,int param_4,uint param_5,
undefined8 *param_6)

{
uint uVar1;
undefined4 uVar2;
longlong *plVar3;
longlong *plVar4;
int iVar5;
int iVar6;
undefined4 uVar7;
longlong lVar8;
int *piVar9;
longlong lVar10;
uint *puVar11;
ulonglong uVar12;
longlong lVar13;
uint *puVar14;
undefined8 uVar15;
uint uVar16;
uint *puVar17;
bool bVar18;
uint local_res8 [2];
uint local_res10;
undefined8 in_stack_fffffffffffffe98;
undefined8 in_stack_fffffffffffffea0;
undefined4 uVar19;
undefined8 local_148;
uint *local_140;
undefined4 local_138;
int iStack308;
undefined4 uStack304;
undefined4 uStack300;
int local_128 [2];
longlong local_120;
int local_118;
int local_108;
int local_104;
undefined4 local_ec;
undefined4 local_e4;
undefined4 local_d4;
undefined4 local_d0;
undefined4 local_cc;
int local_bc;
undefined4 local_b0;

puVar17 = (uint *)0x0;
if (param_6 != (undefined8 *)0x0) {
*param_6 = 0;
}
if (*(longlong *)(param_1 + 0x78) == 0) {
return 0x1e;
}
if (*(ulonglong *)(param_1 + 0xa98) <= (ulonglong)param_2) {
return 4;
}
plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa90) + (ulonglong)param_2 * 8);
if (plVar3 == (longlong *)0x0) {
return 0x16;
}
local_res10 = param_2;
iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3);
if (iVar5 == 0x1c) {
return 0x11d;
}
iVar5 = 0;
local_res8[0] = 0;
FUN_1407e4830(&local_108,0,200);
local_ec = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
local_b0 = 1;
lVar8 = FUN_1405a4b80(plVar3);
if (lVar8 == 0) {
return 4;
}
if ((((*(uint *)(*(longlong *)(param_1 + 0x6490) + 0x1070) & 0x200) != 0) &&
(iVar6 = FUN_14039e0a0(), iVar6 == 0)) && (*(uint *)(lVar8 + 0x28) != 0)) {
piVar9 = (int *)(*(longlong *)(lVar8 + 0x30) + 0x10);
puVar14 = puVar17;
do {
if (*piVar9 == 0x24) {
if ((DAT_140dc21a4 & 1) == 0) {
DAT_140dc21a4 = DAT_140dc21a4 | 1;
lVar10 = FUN_140200220(0x495);
if (lVar10 == 0) {
DAT_140dc21a8 = 1.0;
}
else {
DAT_140dc21a8 = *(float *)(lVar10 + 0x18);
}
}
if (DAT_140dc21a8 + *(float *)(*(longlong *)(param_1 + 0x6490) + 0x11e4) <
*(float *)(*(longlong *)(param_1 + 0x6490) + 0x17d0)) {
if (param_3 != (uint **)0x0) {
FUN_1403b51f0(param_3,0x117);
}
return 0x117;
}
break;
}
uVar16 = (int)puVar14 + 1;
puVar14 = (uint *)(ulonglong)uVar16;
piVar9 = piVar9 + 0x2a;
} while (uVar16 < *(uint *)(lVar8 + 0x28));
}
uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
if (param_4 == 0) {
iVar6 = FUN_14039e0a0(param_1);
uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
if ((iVar6 != 0) && (puVar14 = puVar17, *(int *)(lVar8 + 0x28) != 0)) {
do {
if (*(int *)((longlong)puVar14 * 0xa8 + 0x10 + *(longlong *)(lVar8 + 0x30)) == 0x24) {
FUN_14039e400(param_1);
uVar16 = *(uint *)((longlong)puVar14 * 0xa8 + 0x40 + *(longlong *)(lVar8 + 0x30));
lVar10 = FUN_14039de90(param_1);
puVar11 = puVar17;
if (lVar10 != 0) {
puVar11 = *(uint **)(lVar10 + 0x18);
}
if ((puVar11 != (uint *)0x0) && (*puVar11 == uVar16)) {
return 0;
}
}
uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
uVar16 = (int)puVar14 + 1;
puVar14 = (uint *)(ulonglong)uVar16;
} while (uVar16 < *(uint *)(lVar8 + 0x28));
}
}
plVar4 = *(longlong **)(param_1 + 0x6d90);
if (plVar4 != (longlong *)0x0) {
iVar6 = **(int **)(lVar8 + 0x70);
lVar8 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,*(undefined8 *)(param_1 + 0x78));
if (**(int **)(lVar8 + 0x70) != iVar6) {
local_bc = iVar6;
}
}
local_108 = **(int **)(lVar8 + 0x70);
local_104 = local_108;
local_118 = FUN_1405a4ce0(plVar3);
iVar6 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x18);
if ((((iVar6 - 2U & 0xfffffffa) == 0) && (iVar6 != 3)) &&
((lVar8 = FUN_1403bfd60(param_1,&local_108,local_res8), lVar8 == 0 ||
((local_res8[0] != 0 && (local_res8[0] != 0x13d)))))) {
uVar16 = local_res8[0];
if (param_3 != (uint **)0x0) {
param_6._0_4_ = local_res8[0];
*(uint *)(param_3 + 2) = local_res8[0];
if ((local_res8[0] != 0) && (local_res8[0] != 0x13d)) {
*(undefined4 *)(param_3 + 3) = 1;
if (param_3[1] != (uint *)0x0) {
puVar14 = *param_3;
do {
uVar1 = *puVar14;
if (uVar1 == local_res8[0]) goto LAB_14039a7b9;
if (uVar1 != local_res8[0] && (int)local_res8[0] <= (int)uVar1) break;
puVar17 = (uint *)((longlong)puVar17 + 1);
puVar14 = puVar14 + 1;
} while (puVar17 < param_3[1]);
}
LAB_14039a4d8:
uVar16 = (uint)param_6;
FUN_1401c2e70(param_3,puVar17,&param_6);
return (ulonglong)uVar16;
}
}
goto LAB_14039a7b9;
}
uVar2 = *(undefined4 *)(*(longlong *)(lVar8 + 0x70) + 4);
iVar6 = FUN_1405a7020(param_1,uVar2);
if ((iVar6 != 0) && (iVar6 = FUN_1405a6c30(param_1,uVar2), iVar6 == 0)) {
if (param_3 != (uint **)0x0) {
param_6._0_4_ = 0xb6;
*(undefined4 *)(param_3 + 2) = 0xb6;
*(undefined4 *)(param_3 + 3) = 1;
if (param_3[1] != (uint *)0x0) {
puVar14 = *param_3;
do {
if (*puVar14 == 0xb6) {
return 0xb6;
}
if (0xb6 < (int)*puVar14) break;
puVar17 = (uint *)((longlong)puVar17 + 1);
puVar14 = puVar14 + 1;
} while (puVar17 < param_3[1]);
}
FUN_1401c2e70(param_3,puVar17,&param_6);
}
return 0xb6;
}
lVar10 = FUN_14055bdc0(param_1,*(undefined8 *)(param_1 + 0x78),lVar8,param_4,
                       CONCAT44(uVar7,param_5));
local_res8[0] = param_5;
if (lVar10 != 0) {
param_5 = *(uint *)(lVar10 + 8);
local_res8[0] = param_5;
if (*(longlong *)(param_1 + 0x78) != lVar10) {
(**(code **)(*DAT_140c65b70 + 0x48))
(DAT_140c65b70,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8),
*(undefined4 *)(lVar10 + 8));
uVar16 = FUN_1403ad540(lVar8,*(undefined8 *)(param_1 + 0x78),lVar10);
if ((uVar16 != 0) && (uVar16 != 0x13d)) {
if (param_3 != (uint **)0x0) {
*(uint *)(param_3 + 2) = uVar16;
*(undefined4 *)(param_3 + 3) = 1;
param_6._0_4_ = uVar16;
if (param_3[1] != (uint *)0x0) {
puVar14 = *param_3;
do {
uVar1 = *puVar14;
if (uVar1 == uVar16) goto LAB_14039a7b9;
if (uVar1 != uVar16 && (int)uVar16 <= (int)uVar1) break;
puVar17 = (uint *)((longlong)puVar17 + 1);
puVar14 = puVar14 + 1;
} while (puVar17 < param_3[1]);
}
goto LAB_14039a4d8;
}
goto LAB_14039a7b9;
}
}
}
if (param_4 == 0) {
if ((*(longlong *)(param_1 + 0x6ce8) == 0) &&
(*(int *)(*(longlong *)(lVar8 + 0x70) + 0x7c) == 4)) {
*(longlong *)(param_1 + 0x6ce8) = lVar8;
*(undefined8 *)(param_1 + 0x6cf0) = 0;
*(ulonglong *)(param_1 + 0x6cf8) = CONCAT44(local_res10,4);
*(ulonglong *)(param_1 + 0x6d00) = CONCAT44(uStack300,9);
return 0;
}
iVar6 = FUN_1403a1600(param_1);
if (iVar6 != 0) {
FUN_1403a1510();
}
if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
FUN_1403a2550();
*(uint *)(param_1 + 0x664c) = param_5;
*(uint *)(param_1 + 0x66a0) = local_res10;
local_148 = (ulonglong)local_148._4_4_ << 0x20;
*(undefined4 *)(param_1 + 0x6648) = 4;
local_140 = (uint *)FUN_14001c280(param_1);
uStack304 = 0;
uStack300 = 0;
local_138 = 0x4039ea90;
iStack308 = 1;
uVar7 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
FUN_140195960(param_1 + 0x6658,uVar7,&local_148,4);
uVar16 = 2;
if (param_3 != (uint **)0x0) {
param_6._0_4_ = 2;
*(undefined4 *)(param_3 + 2) = 2;
*(undefined4 *)(param_3 + 3) = 1;
if (param_3[1] != (uint *)0x0) {
puVar14 = *param_3;
do {
if (*puVar14 == 2) goto LAB_14039ac5e;
if (2 < (int)*puVar14) break;
puVar17 = (uint *)((longlong)puVar17 + 1);
puVar14 = puVar14 + 1;
} while (puVar17 < param_3[1]);
}
FUN_1401c2e70(param_3,puVar17,&param_6);
}
goto LAB_14039ac5e;
}
local_128[0] = 0;
local_120 = 0;
uVar16 = FUN_1403988d0(param_1,&local_108,lVar8,0,local_res8,&local_120,local_128);
lVar10 = local_120;
if ((uVar16 == 0) || (uVar16 == 0x13d)) {
if (*(int *)(*(longlong *)(lVar8 + 0x70) + 0x7c) == 4) {
uVar15 = 0x9b;
uVar7 = *(undefined4 *)(local_120 + 0x60);
local_140 = *(uint **)(param_1 + 0x6d10);
local_138 = *(undefined4 *)(param_1 + 0x6d18);
}
else {
uVar7 = *(undefined4 *)(local_120 + 0x60);
iVar5 = DAT_140c45e80;
if (*DAT_140c63750 < DAT_140c45e80) {
iVar5 = *DAT_140c63750;
}
if (((&DAT_140c45e90)[iVar5] == '\0') ||
(local_140 = (uint *)(ulonglong)*(uint *)(local_120 + 0x158),
*(int *)(param_1 + 0x6364) != 0)) {
local_140 = (uint *)CONCAT44(1,*(uint *)(local_120 + 0x158));
}
uVar15 = 0x9a;
}
local_148 = (ulonglong)CONCAT24((short)local_res10,uVar7);
FUN_1403f4900(param_1,uVar15,&local_148);
if ((longlong *)CONCAT44(param_6._4_4_,(uint)param_6) != (longlong *)0x0) {
*(longlong *)CONCAT44(param_6._4_4_,(uint)param_6) = lVar10;
}
goto LAB_14039ac5e;
}
lVar10 = FUN_1404695e0(*(undefined8 *)(param_1 + 0x78));
if (lVar10 != 0) {
lVar10 = FUN_1404695e0(*(undefined8 *)(param_1 + 0x78));
iVar5 = *(int *)(lVar10 + 0x50);
}
uVar1 = local_res10;
if ((uVar16 == 0x69) && (local_118 == 0)) {
uVar15 = FUN_1403d90d0(param_1,local_res8[0]);
iVar5 = FUN_140559500(param_1 + 0x70b0,uVar15,local_res10);
if (-1 < iVar5) {
uVar16 = 2;
}
}
else if ((iVar5 == 0) && (uVar16 - 0xe < 3)) {
lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
while ((lVar8 != 0 &&
(((*(int *)(lVar8 + 4) != 0 || (*(longlong *)(lVar8 + 0x20) == 0)) ||
(iVar5 = FUN_140195f70(lVar8 + 0x10), iVar5 == 0))))) {
lVar8 = *(longlong *)(lVar8 + 0x88);
}
iVar5 = local_108;
lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
while ((lVar8 != 0 &&
(((*(int *)(lVar8 + 4) != 1 || (iVar5 != *(int *)(lVar8 + 0xc))) ||
((*(longlong *)(lVar8 + 0x20) == 0 ||
(iVar6 = FUN_140195f70(lVar8 + 0x10), iVar6 == 0))))))) {
lVar8 = *(longlong *)(lVar8 + 0x88);
}
iVar5 = local_108;
lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
while ((lVar8 != 0 &&
(((*(int *)(lVar8 + 4) != 2 || (iVar5 != *(int *)(lVar8 + 0xc))) ||
((*(longlong *)(lVar8 + 0x20) == 0 ||
(iVar6 = FUN_140195f70(lVar8 + 0x10), iVar6 == 0))))))) {
lVar8 = *(longlong *)(lVar8 + 0x88);
}
}
else if (((*(uint *)(*(longlong *)(lVar8 + 0x70) + 0x10c) & 0x4000000) == 0) ||
((uVar16 - 0x5b & 0xfffffff7) != 0)) {
if (local_128[0] != 0) {
*(undefined4 *)(param_1 + 0x6648) = 4;
*(uint *)(param_1 + 0x66a0) = local_res10;
*(uint *)(param_1 + 0x664c) = local_res8[0];
FUN_14039e400(param_1);
if ((*(longlong *)(param_1 + 0x6ce8) == 0) &&
(*(int *)(*(longlong *)(lVar8 + 0x70) + 0x7c) == 4)) goto LAB_14039ab26;
}
}
else {
uVar16 = 3;
LAB_14039ab26:
param_6._4_4_ = uVar1;
*(longlong *)(param_1 + 0x6ce8) = lVar8;
param_6._0_4_ = 4;
uStack304 = 9;
local_140 = (uint *)0x0;
*(undefined8 *)(param_1 + 0x6cf0) = 0;
*(ulonglong *)(param_1 + 0x6cf8) = CONCAT44(uVar1,4);
*(ulonglong *)(param_1 + 0x6d00) = CONCAT44(uStack300,9);
}
uVar15 = FUN_1403b5250(uVar16);
FUN_1400035b0(0x18,3,0,uVar15);
LAB_14039ac5e:
return (ulonglong)uVar16;
}
if (param_3 != (uint **)0x0) {
uVar12 = FUN_140398800();
return uVar12;
}
lVar8 = *(longlong *)(param_1 + 0x78);
local_148 = 0;
iStack308 = 0;
uStack304 = 0;
local_138 = 0;
uStack300 = 0x60;
local_140 = (uint *)0x0;
if (local_108 == 0) {
LAB_14039a79f:
uVar16 = 4;
}
else {
if (lVar8 == 0) {
LAB_14039a5a9:
lVar8 = FUN_1407a0fd0(DAT_140c65b70);
if (lVar8 == 0) goto LAB_14039a79f;
}
else {
if (*(longlong *)(DAT_140c65898 + 0x1e) == lVar8) {
bVar18 = true;
}
else {
bVar18 = *(longlong *)(DAT_140c65898 + 0x1924) == lVar8;
}
puVar14 = puVar17;
if (bVar18) {
puVar14 = DAT_140c65898;
}
if ((puVar14 == (uint *)0x0) || (lVar8 = FUN_1405a5b90(), lVar8 == 0)) goto LAB_14039a5a9;
}
plVar3 = DAT_140c65b70;
if (lVar10 != 0) {
local_e4 = *(undefined4 *)(lVar10 + 8);
}
if ((undefined4 *)(param_1 + 0x6d10) != (undefined4 *)0x0) {
local_d4 = *(undefined4 *)(param_1 + 0x6d10);
local_d0 = *(undefined4 *)(param_1 + 0x6d14);
local_cc = *(undefined4 *)(param_1 + 0x6d18);
}
uVar12 = CONCAT44(uVar19,1);
uVar16 = FUN_1403ae8c0(DAT_140c65b70,&local_108,0,&local_148,DAT_140c659a0,uVar12);
if (uVar16 == 0) {
LAB_14039a638:
lVar8 = FUN_1403d90d0(DAT_140c65898,local_ec);
lVar10 = FUN_1403d90d0(DAT_140c65898,local_e4);
if (lVar8 == 0) {
uVar16 = 0x1e;
}
else {
lVar13 = FUN_1403acd90(plVar3,local_108);
if (lVar13 == 0) goto LAB_14039a79f;
iVar5 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x168);
if ((iVar5 == 0) ||
((*(longlong *)(lVar13 + 0x40) != 0 &&
((*(byte *)(*(longlong *)(lVar13 + 0x70) + 0x108) & 2) != 0)))) {
LAB_14039a723:
iVar5 = *(int *)(*(longlong *)(lVar13 + 0x70) + 0x16c);
if (((iVar5 == 0) || (lVar10 == 0)) ||
(iVar5 = (**(code **)(*DAT_140c659a0 + 0x18))
        (DAT_140c659a0,lVar10,iVar5,lVar8,0,uVar12 & 0xffffffff00000000),
        iVar5 != 0)) goto LAB_14039a7a4;
uVar16 = 0x119;
uStack304 = 1;
param_6._0_4_ = 0x119;
local_138 = 0x119;
if (local_140 != (uint *)0x0) {
do {
iVar5 = *(int *)(local_148 + (longlong)puVar17 * 4);
if (iVar5 == 0x119) goto LAB_14039a7a4;
} while ((iVar5 < 0x11a) &&
(puVar17 = (uint *)((longlong)puVar17 + 1), puVar17 < local_140));
}
}
else {
uVar12 = uVar12 & 0xffffffff00000000;
iVar5 = (**(code **)(*DAT_140c659a0 + 0x18))(DAT_140c659a0,lVar8,iVar5,lVar10,0,uVar12);
if (iVar5 != 0) goto LAB_14039a723;
uVar16 = 0x97;
uStack304 = 1;
param_6._0_4_ = 0x97;
local_138 = 0x97;
if (local_140 != (uint *)0x0) {
do {
iVar5 = *(int *)(local_148 + (longlong)puVar17 * 4);
if (iVar5 == 0x97) goto LAB_14039a7a4;
} while ((iVar5 < 0x98) &&
(puVar17 = (uint *)((longlong)puVar17 + 1), puVar17 < local_140));
}
}
uStack304 = 1;
FUN_1401c2e70(&local_148,puVar17,&param_6);
}
}
else if (uVar16 == 0x13d) {
if (iStack308 != 0) goto LAB_14039a638;
uVar16 = 0x13d;
}
}
LAB_14039a7a4:
if (local_148 != 0) {
(**(code **)(*(longlong *)(local_148 + -0x10) + 8))(local_148 + -0x10);
}
LAB_14039a7b9:
return (ulonglong)uVar16;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14039ac90(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,
        uint param_5)

{
undefined4 uVar1;
int iVar2;
uint uVar3;
int iVar4;
longlong lVar5;
longlong lVar6;
longlong lVar7;
undefined8 uVar8;
ulonglong uVar9;
bool bVar10;
ulonglong local_res10;
uint local_res18;
undefined4 local_res20;
undefined8 in_stack_fffffffffffffea8;
longlong *plVar11;
undefined4 *puVar12;
undefined8 in_stack_fffffffffffffeb0;
undefined8 local_138;
ulonglong local_130;
code *local_128;
undefined8 local_120;
undefined4 local_118 [2];
longlong local_110;
uint local_108;
uint local_104;
undefined4 local_ec;
undefined4 local_e4;
undefined4 local_b0;

uVar1 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
uVar3 = (uint)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
if (param_2 == 0) {
return 0x1e;
}
local_res18 = param_3;
local_res20 = param_4;
lVar5 = FUN_1403acd90(DAT_140c65b70,param_5,param_2);
if (lVar5 == 0) {
return 0x16;
}
uVar9 = 0;
local_118[0] = 0;
FUN_1407e4830(&local_108,0,200);
local_ec = *(undefined4 *)(param_2 + 8);
local_108 = param_5;
local_104 = param_5;
local_b0 = 1;
plVar11 = (longlong *)((ulonglong)uVar3 << 0x20);
lVar6 = FUN_14055bdc0(param_1,param_2,lVar5,0,plVar11);
if (lVar6 != 0) {
local_118[0] = *(undefined4 *)(lVar6 + 8);
}
if (*(int *)(*(longlong *)(lVar5 + 0x70) + 0x7c) != 4) {
LAB_14039ada4:
local_res10 = local_res10 & 0xffffffff00000000;
local_110 = 0;
if (*(int *)(param_2 + 0x80) != 0x18) {
if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
FUN_1403a2550();
*(uint *)(param_1 + 0x66b8) = local_res18;
*(undefined4 *)(param_1 + 0x66a0) = local_res20;
*(undefined4 *)(param_1 + 0x6648) = 3;
*(uint *)(param_1 + 0x6650) = param_5;
local_138 = (ulonglong)local_138._4_4_ << 0x20;
local_130 = FUN_14001c280(param_1);
local_120 = 0;
local_128 = FUN_14039ea90;
uVar1 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
FUN_140195960(param_1 + 0x6658,uVar1,&local_138,4);
return 2;
}
plVar11 = &local_110;
puVar12 = local_118;
uVar3 = FUN_1403988d0(param_1,&local_108,lVar5,0,puVar12,plVar11,&local_res10);
uVar9 = (ulonglong)uVar3;
if ((uVar3 != 0) && (uVar3 != 0x13d)) {
if (uVar3 == 0x69) {
iVar4 = FUN_140559650(param_1 + 0x70b0,param_2,lVar6,local_res20,
                      (ulonglong)puVar12 & 0xffffffff00000000 | (ulonglong)param_5,
(ulonglong)plVar11 & 0xffffffff00000000 | (ulonglong)local_res18);
if (-1 < iVar4) {
uVar9 = 2;
}
}
else if (((*(uint *)(*(longlong *)(lVar5 + 0x70) + 0x10c) & 0x4000000) == 0) ||
((uVar3 - 0x5b & 0xfffffff7) != 0)) {
if ((int)local_res10 != 0) {
*(undefined4 *)(param_1 + 0x6648) = 3;
*(uint *)(param_1 + 0x6650) = param_5;
*(uint *)(param_1 + 0x66b8) = local_res18;
*(undefined4 *)(param_1 + 0x66a0) = local_res20;
FUN_14039e400(param_1);
}
}
else {
local_130 = 0x600000000;
if (param_2 == *(longlong *)(param_1 + 0x78)) {
local_130 = 0x200000000;
}
else {
lVar6 = FUN_14039df50(param_1);
if (param_2 == lVar6) {
local_130 = CONCAT44(4,(undefined4)local_130);
}
else {
uVar1 = *(undefined4 *)(param_2 + 8);
iVar4 = FUN_1403c0960(param_1);
if (iVar4 != 0) {
local_130 = CONCAT44(3,uVar1);
}
}
}
*(longlong *)(param_1 + 0x6ce8) = lVar5;
*(ulonglong *)(param_1 + 0x6cf0) = local_130;
local_res10 = CONCAT44(local_res20,4);
local_120 = local_120 & 0xffffffff00000000 | (ulonglong)local_res18;
*(ulonglong *)(param_1 + 0x6cf8) = local_res10;
uVar9 = 3;
*(ulonglong *)(param_1 + 0x6d00) = local_120;
}
uVar8 = FUN_1403b5250(uVar9);
FUN_1400035b0(0x18,3,0,uVar8);
return uVar9;
}
}
local_130 = (ulonglong)local_res18;
local_138 = (ulonglong)CONCAT14((char)local_res20,*(undefined4 *)(local_110 + 0x60));
if (lVar6 == 0) {
local_128 = *(code **)(param_1 + 0x6d10);
uVar3 = *(uint *)(param_1 + 0x6d18);
}
else {
local_130 = CONCAT44(*(undefined4 *)(lVar6 + 8),local_res18);
local_128 = *(code **)(lVar6 + 0x11e0);
uVar3 = *(uint *)(lVar6 + 0x11e8);
}
local_120 = local_120 & 0xffffffff00000000 | (ulonglong)uVar3;
FUN_1403f4900(param_1,0x96,&local_138);
return uVar9;
}
if ((*(longlong *)(param_1 + 0x6ce8) != 0) &&
((iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x6ce8) + 0x70) + 0x7c), iVar4 == 4 ||
(iVar4 - 7U < 2)))) {
FUN_1403a1510(param_1);
goto LAB_14039ada4;
}
lVar7 = *(longlong *)(param_1 + 0x78);
if (local_108 == 0) {
LAB_14039b0b2:
iVar4 = 4;
goto LAB_14039b0b7;
}
if (lVar7 == 0) {
LAB_14039aea8:
lVar7 = FUN_1407a0fd0(DAT_140c65b70);
if (lVar7 == 0) goto LAB_14039b0b2;
}
else {
if (*(longlong *)(DAT_140c65898 + 0x78) == lVar7) {
bVar10 = true;
}
else {
bVar10 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar7;
}
if (bVar10) {
uVar9 = DAT_140c65898;
}
if (uVar9 == 0) goto LAB_14039aea8;
lVar7 = FUN_1405a5b90();
if (lVar7 == 0) goto LAB_14039aea8;
}
uVar8 = DAT_140c65b70;
if (lVar6 != 0) {
local_e4 = *(undefined4 *)(lVar6 + 8);
}
plVar11 = DAT_140c659a0;
iVar4 = FUN_1403ae8c0(DAT_140c65b70,&local_108,0,0,DAT_140c659a0,CONCAT44(uVar1,1));
if (iVar4 == 0) {
lVar6 = FUN_1403d90d0(DAT_140c65898);
local_res10 = FUN_1403d90d0(DAT_140c65898);
if (lVar6 == 0) {
iVar4 = 0x1e;
}
else {
lVar6 = FUN_1403acd90(uVar8);
if (lVar6 == 0) {
iVar4 = 4;
}
else {
if ((*(int *)(*(longlong *)(lVar6 + 0x70) + 0x168) != 0) &&
((*(longlong *)(lVar6 + 0x40) == 0 ||
((*(byte *)(*(longlong *)(lVar6 + 0x70) + 0x108) & 2) == 0)))) {
plVar11 = (longlong *)0x0;
iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))();
if (iVar2 == 0) {
iVar4 = 0x97;
goto LAB_14039aff9;
}
}
if ((*(int *)(*(longlong *)(lVar6 + 0x70) + 0x16c) != 0) && (local_res10 != 0)) {
plVar11 = (longlong *)0x0;
iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))();
if (iVar2 == 0) {
iVar4 = 0x119;
}
}
}
}
}
else if (iVar4 == 0x13d) {
iVar4 = 0x13d;
}
LAB_14039aff9:
if ((iVar4 == 0) || (iVar4 == 0x13d)) {
local_130 = 0x600000000;
if (param_2 == *(longlong *)(param_1 + 0x78)) {
local_130 = 0x200000000;
}
else {
lVar6 = FUN_14039df50(param_1);
if (param_2 == lVar6) {
local_130 = CONCAT44(4,(undefined4)local_130);
}
else {
uVar1 = *(undefined4 *)(param_2 + 8);
iVar4 = FUN_1403c0960(param_1);
if (iVar4 != 0) {
local_130 = CONCAT44(3,uVar1);
}
}
}
*(longlong *)(param_1 + 0x6ce8) = lVar5;
*(ulonglong *)(param_1 + 0x6cf0) = local_130;
local_res10 = CONCAT44(local_res20,4);
local_120 = CONCAT44(local_120._4_4_,local_res18);
*(ulonglong *)(param_1 + 0x6cf8) = local_res10;
*(ulonglong *)(param_1 + 0x6d00) = local_120;
return 0;
}
LAB_14039b0b7:
FUN_1403a12a0(param_1,iVar4,lVar5,0,plVar11);
return 0;
}

