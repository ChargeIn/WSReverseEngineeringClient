//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Removing unreachable block (ram,0x00014031d3de)
// WARNING: Removing unreachable block (ram,0x00014031d31e)
// WARNING: Removing unreachable block (ram,0x00014031d25e)
// WARNING: Removing unreachable block (ram,0x00014031d2be)
// WARNING: Removing unreachable block (ram,0x00014031d37e)
// WARNING: Removing unreachable block (ram,0x00014031d43f)

void FUN_14031d0c0(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    *param_1 = &PTR_LAB_140b643c0;
    FUN_14018b900(param_1[0xb1],0);
    FUN_14018b900(param_1[0xb2],0);
    puVar3 = param_1 + 0xce;
    iVar5 = 2;
    do {
        lVar1 = puVar3[-2];
        puVar3 = puVar3 + -2;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    lVar1 = param_1[0xc6];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0xc4];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0xbc];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0xba];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0xac];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1[0xa3],0);
    if (param_1[0x9b] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x99] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x97] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x95] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x93] != 0) {
        FUN_140317c90();
    }
    iVar4 = 4;
    puVar3 = param_1 + 0x93;
    iVar6 = 4;
    iVar5 = iVar6;
    do {
        puVar2 = (undefined8 *)puVar3[-2];
        puVar3 = puVar3 + -2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar3 = param_1 + 0x89;
    do {
        puVar2 = (undefined8 *)puVar3[-2];
        puVar3 = puVar3 + -2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar6 = 4;
    puVar3 = param_1 + 0x7f;
    iVar5 = iVar6;
    do {
        puVar2 = (undefined8 *)puVar3[-2];
        puVar3 = puVar3 + -2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    puVar3 = param_1 + 0x75;
    do {
        puVar2 = (undefined8 *)puVar3[-2];
        puVar3 = puVar3 + -2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    puVar3 = param_1 + 0x6b;
    do {
        puVar2 = (undefined8 *)puVar3[-2];
        puVar3 = puVar3 + -2;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar5 = 9;
    puVar3 = param_1 + 0x62;
    do {
        puVar2 = (undefined8 *)puVar3[-4];
        puVar3 = puVar3 + -4;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_FUN_140b66870;
            if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                *(undefined8 *)puVar2[1] = puVar2[2];
            }
            if (puVar2[2] != 0) {
                *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
            }
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_14018b900(puVar2,0);
        }
        iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (param_1[0x36] != 0) {
        FUN_140317c90();
    }
    FUN_14032f590(param_1);
    return;
}



undefined4 FUN_14031dea0(longlong *param_1)

{
    int iVar1;

    if ((param_1[1] != 0) && (*(char *)param_1[0x9d] == '\x01')) {
        if (*(int *)(param_1 + 10) != 0) {
            iVar1 = (**(code **)(*param_1 + 0x48))();
            if (iVar1 != 0) {
                return 1;
            }
        }
        return 0;
    }
    return *(undefined4 *)(param_1 + 0xa6);
}



void FUN_14031def0(longlong param_1)

{
    longlong *plVar1;
    undefined4 *puVar2;
    float *pfVar3;
    float *pfVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    uint uVar9;
    undefined8 uVar10;
    undefined4 *puVar11;
    ulonglong uVar12;
    longlong lVar13;
    ulonglong uVar14;
    uint uVar15;
    ulonglong uVar16;
    float fVar17;
    float fVar18;
    float fVar19;

    plVar1 = (longlong *)(param_1 + 0x560);
    FUN_140052360(plVar1);
    uVar12 = 0;
    fVar19 = 0.0;
    uVar9 = 0;
    *(undefined4 *)*plVar1 = 0;
    uVar14 = uVar12;
    uVar16 = uVar12;
    do {
        uVar15 = (uint)uVar14;
        iVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0) + 0x350))();
        if (iVar8 == 0) break;
        if (*(longlong *)(param_1 + 0x20) == 0) {
            uVar10 = FUN_14018b280(0x40);
            *(undefined8 *)(param_1 + 0x20) = uVar10;
        }
        puVar11 = (undefined4 *)
                (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0) + 0x358))();
        uVar5 = puVar11[1];
        uVar6 = puVar11[2];
        uVar7 = puVar11[3];
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar14 * 0x10);
        *puVar2 = *puVar11;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        if (uVar15 != 0) {
            pfVar3 = (float *)(*(longlong *)(param_1 + 0x20) + uVar14 * 0x10);
            pfVar4 = (float *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar15 - 1) * 0x10);
            fVar17 = *pfVar3 - *pfVar4;
            fVar18 = pfVar3[1] - pfVar4[1];
            fVar19 = fVar19 + SQRT(fVar17 * fVar17 + fVar18 * fVar18 + 0.0);
        }
        uVar15 = uVar15 + 1;
        uVar14 = (ulonglong)uVar15;
        *(float *)(uVar16 + *plVar1) = fVar19;
        uVar16 = uVar16 + 4;
    } while (uVar15 < 4);
    *(uint *)(param_1 + 0x55c) = uVar15;
    if (uVar15 == 1) {
        fVar17 = 1000000.0;
    }
    else {
        fVar17 = 1.0 / (float)(ulonglong)(uVar15 - 1);
    }
    *(float *)(param_1 + 0x600) = fVar17;
    if (uVar15 != 0) {
        if (3 < (int)uVar15) {
            uVar9 = (uVar15 - 4 >> 2) + 1;
            fVar17 = 1.0 / fVar19;
            uVar14 = (ulonglong)uVar9;
            uVar9 = uVar9 * 4;
            do {
                uVar12 = uVar12 + 4;
                *(float *)(*plVar1 + -0x10 + uVar12 * 4) = fVar17 * *(float *)(*plVar1 + -0x10 + uVar12 * 4)
                        ;
                *(float *)(*plVar1 + -0xc + uVar12 * 4) = fVar17 * *(float *)(*plVar1 + -0xc + uVar12 * 4);
                *(float *)(*plVar1 + -8 + uVar12 * 4) = fVar17 * *(float *)(*plVar1 + -8 + uVar12 * 4);
                *(float *)(*plVar1 + -4 + uVar12 * 4) = fVar17 * *(float *)(*plVar1 + -4 + uVar12 * 4);
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        if (uVar9 < uVar15) {
            uVar14 = (ulonglong)(uVar15 - uVar9);
            lVar13 = uVar12 * 4;
            do {
                *(float *)(lVar13 + *plVar1) = (1.0 / fVar19) * *(float *)(lVar13 + *plVar1);
                uVar14 = uVar14 - 1;
                lVar13 = lVar13 + 4;
            } while (uVar14 != 0);
        }
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x4c0);
    }
    return;
}



void FUN_14031e170(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                   float *param_5,undefined4 param_6,int param_7)

{
    longlong lVar1;
    undefined4 *puVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    byte bVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    uint uVar11;
    int iVar12;
    longlong lVar13;
    undefined4 *puVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;

    uVar15 = 0;
    bVar7 = *(byte *)(*(longlong *)(param_1 + 0x4e8) + 4);
    if (bVar7 == 0) {
        puVar2 = (undefined4 *)*param_4;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        *(undefined4 *)(param_2 + 0x70) = *puVar2;
        *(undefined4 *)(param_2 + 0x74) = uVar8;
        *(undefined4 *)(param_2 + 0x78) = uVar9;
        *(undefined4 *)(param_2 + 0x7c) = uVar10;
        goto LAB_14031e3ce;
    }
    if (2 < bVar7) {
        if (bVar7 == 3) {
            if (*(int *)(param_1 + 0x55c) != 0) {
                do {
                    fVar18 = (float)uVar15 * *(float *)(param_1 + 0x548);
                    iVar12 = (int)fVar18;
                    fVar17 = fVar18;
                    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar18)) {
                        uVar11 = movmskps((int)uVar15,ZEXT816(CONCAT44(fVar18,fVar18)));
                        fVar17 = (float)(iVar12 - (uVar11 & 1));
                    }
                    fVar18 = fVar18 - fVar17;
                    uVar16 = (ulonglong)(fVar17 + 0.5);
                    if ((fVar18 == 0.0) && (*(int *)(*(longlong *)(param_1 + 0x4e8) + 8) - 3U <= (uint)uVar16)
                            ) {
                        uVar16 = (ulonglong)((uint)uVar16 - 1);
                        fVar18 = 1.0;
                    }
                    lVar1 = *param_4;
                    iVar12 = (int)uVar16;
                    fVar22 = fVar18 * fVar18;
                    fVar19 = fVar22 * fVar18 * 1.5;
                    fVar21 = fVar22 * fVar18 * 0.5;
                    fVar23 = fVar21 - fVar22 * 0.5;
                    fVar17 = (fVar22 * 2.0 - fVar19) + fVar18 * 0.5;
                    pfVar3 = (float *)(lVar1 + (uVar16 & 0xffffffff) * 0x10);
                    uVar11 = (int)uVar15 + 1;
                    pfVar4 = (float *)(lVar1 + (ulonglong)(iVar12 + 3) * 0x10);
                    pfVar5 = (float *)(lVar1 + (ulonglong)(iVar12 + 2) * 0x10);
                    fVar21 = (fVar22 - fVar21) - fVar18 * 0.5;
                    fVar18 = (fVar19 - fVar22 * 2.5) + 1.0;
                    pfVar6 = (float *)(lVar1 + (ulonglong)(iVar12 + 1) * 0x10);
                    *(undefined (*) [16])(param_2 + (uVar15 + 7) * 0x10) =
                            CONCAT412(fVar23 * pfVar4[3] +
                                      pfVar5[3] * fVar17 + fVar18 * pfVar6[3] + pfVar3[3] * fVar21,
                                      CONCAT48(fVar23 * pfVar4[2] +
                                               pfVar5[2] * fVar17 + fVar18 * pfVar6[2] + pfVar3[2] * fVar21,
                                               CONCAT44(fVar23 * pfVar4[1] +
                                                        pfVar5[1] * fVar17 +
                                                        fVar18 * pfVar6[1] + pfVar3[1] * fVar21,
                                                        fVar23 * *pfVar4 +
                                                        *pfVar5 * fVar17 + fVar18 * *pfVar6 + *pfVar3 * fVar21)))
                            ;
                    uVar15 = (ulonglong)uVar11;
                } while (uVar11 < *(uint *)(param_1 + 0x55c));
            }
            goto LAB_14031e3ce;
        }
        if (bVar7 != 4) goto LAB_14031e3ce;
    }
    if (param_4[1] != 0) {
        do {
            lVar1 = uVar15 + 7;
            lVar13 = uVar15 * 0x10;
            uVar15 = (ulonglong)((int)uVar15 + 1);
            puVar14 = (undefined4 *)(lVar13 + *param_4);
            uVar8 = puVar14[1];
            uVar9 = puVar14[2];
            uVar10 = puVar14[3];
            puVar2 = (undefined4 *)(param_2 + lVar1 * 0x10);
            *puVar2 = *puVar14;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
        } while (uVar15 < (ulonglong)param_4[1]);
    }
    LAB_14031e3ce:
    *(undefined4 *)(param_2 + 0x18) = param_6;
    *(undefined4 *)(param_2 + 0x14) =
            *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0xd0);
    fVar17 = param_5[1];
    fVar18 = param_5[2];
    fVar19 = param_5[3];
    *(float *)(param_2 + 0x50) = *param_5;
    *(float *)(param_2 + 0x54) = fVar17;
    *(float *)(param_2 + 0x58) = fVar18;
    *(float *)(param_2 + 0x5c) = fVar19;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    if (param_7 != 0) {
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x34) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        *(undefined4 *)(param_2 + 0x20) = 0;
        *(undefined4 *)(param_2 + 0x24) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        *(undefined8 *)(param_2 + 4) = 0;
    }
    if ((1 < *(uint *)(param_1 + 0x530)) && (param_3 != 0)) {
        fVar17 = *(float *)(param_3 + 0x70) - *(float *)(param_2 + 0x70);
        fVar18 = *(float *)(param_3 + 0x74) - *(float *)(param_2 + 0x74);
        fVar19 = *(float *)(param_3 + 0x78) - *(float *)(param_2 + 0x78);
        fVar20 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19);
        *(float *)(param_2 + 0x10) = fVar20;
        *(float *)(param_2 + 0xc) =
                fVar20 * *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4) + *(float *)(param_3 + 0xc);
        fVar17 = param_5[1];
        fVar18 = param_5[2];
        fVar19 = param_5[3];
        fVar21 = *(float *)(param_3 + 0x54);
        fVar22 = *(float *)(param_3 + 0x58);
        fVar23 = *(float *)(param_3 + 0x5c);
        *(float *)(param_2 + 0x60) = *param_5 - *(float *)(param_3 + 0x50);
        *(float *)(param_2 + 100) = fVar17 - fVar21;
        *(float *)(param_2 + 0x68) = fVar18 - fVar22;
        *(float *)(param_2 + 0x6c) = fVar19 - fVar23;
        if ((float)(*(uint *)(param_2 + 0x60) & 0x7fffffff) < 1e-05) {
            *(undefined4 *)(param_2 + 0x60) = 0;
        }
        if ((float)(*(uint *)(param_2 + 100) & 0x7fffffff) < 1e-05) {
            *(undefined4 *)(param_2 + 100) = 0;
        }
        if ((float)(*(uint *)(param_2 + 0x68) & 0x7fffffff) < 1e-05) {
            *(undefined4 *)(param_2 + 0x68) = 0;
        }
        *(float *)(param_1 + 0x570) = fVar20 + *(float *)(param_1 + 0x570);
        return;
    }
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0;
    return;
}



void FUN_14031e520(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *(int *)(param_1 + 0x52c);
    iVar2 = iVar1;
    if (iVar1 == 0) {
        iVar2 = *(int *)(param_1 + 0x520);
    }
    iVar3 = iVar1 + 1;
    *(int *)(param_1 + 0x52c) = iVar3;
    if (iVar3 == *(int *)(param_1 + 0x520)) {
        iVar3 = 0;
    }
    *(int *)(param_1 + 0x52c) = iVar3;
    if (*(int *)(param_1 + 0x530) == *(int *)(param_1 + 0x520)) {
        *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x52c);
    }
    else {
        *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
    }
    FUN_14031e170(param_1,(ulonglong)(uint)(*(int *)(param_1 + 0x524) * iVar1) +
                          *(longlong *)(param_1 + 0x518),
                  (ulonglong)(uint)((iVar2 + -1) * *(int *)(param_1 + 0x524)) +
                  *(longlong *)(param_1 + 0x518),param_2,param_3,param_4,1);
    return;
}



void FUN_14031e5e0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                   longlong param_5)

{
    float *pfVar1;
    ulonglong uVar2;
    uint uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    uVar3 = 0;
    fVar4 = *(float *)(param_5 + 0x40) * param_3;
    fVar5 = *(float *)(param_5 + 0x44) * param_3;
    fVar6 = *(float *)(param_5 + 0x48) * param_3;
    fVar7 = *(float *)(param_5 + 0x4c) * param_3;
    if (*(int *)(param_4 + 0x55c) != 0) {
        do {
            uVar2 = (ulonglong)uVar3;
            uVar3 = uVar3 + 1;
            pfVar1 = (float *)(param_5 + (uVar2 + 7) * 0x10);
            *(undefined (*) [16])(param_5 + (uVar2 + 7) * 0x10) =
                    CONCAT412(pfVar1[3] + fVar7,
                              CONCAT48(pfVar1[2] + fVar6,CONCAT44(pfVar1[1] + fVar5,*pfVar1 + fVar4)));
        } while (uVar3 < *(uint *)(param_4 + 0x55c));
    }
    *(undefined (*) [16])(param_5 + 0x50) =
            CONCAT412(*(float *)(param_5 + 0x5c) + fVar7,
                      CONCAT48(*(float *)(param_5 + 0x58) + fVar6,
                               CONCAT44(*(float *)(param_5 + 0x54) + fVar5,
                                        *(float *)(param_5 + 0x50) + fVar4)));
    fVar4 = fVar4 * fVar4 + fVar5 * fVar5 + 0.0;
    if (0.0 < fVar4) {
        *(float *)(param_5 + 0xc) =
                *(float *)(param_5 + 0xc) -
                SQRT(fVar4) * *(float *)(*(longlong *)(param_4 + 0x4e8) + 0x3b4);
    }
    *(float *)(param_5 + 0x40) = param_3 * *(float *)(param_4 + 0x610) + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = param_3 * *(float *)(param_4 + 0x614) + *(float *)(param_5 + 0x44);
    *(float *)(param_5 + 0x48) = param_3 * *(float *)(param_4 + 0x618) + *(float *)(param_5 + 0x48);
    return;
}



void FUN_14031e6b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
)

{
    float *pfVar1;
    short sVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    float *pfVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    float fVar12;
    float fVar13;
    undefined in_XMM4 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float local_b8;
    float fStack180;
    float fStack176;
    float fStack172;

    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar11 = 0;
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x40) + 0x308);
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    uVar10 = 1;
    if (uVar3 != 0) {
        lVar8 = 0;
        lVar9 = 0;
        pfVar7 = (float *)(param_4 + 8);
        do {
            if ((uVar10 & *(ushort *)(*(longlong *)(param_1 + 8) + 0x68)) != 0) {
                lVar5 = *(longlong *)(lVar4 + 0x588);
                sVar2 = *(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x310) + 2 + lVar9);
                fVar12 = *(float *)(lVar5 + 0x30 + lVar8);
                fVar17 = *(float *)(lVar5 + 0x1c + lVar8);
                fVar16 = fVar12 - fVar17;
                if (sVar2 == 0) {
                    pfVar1 = (float *)(param_3 + (ulonglong)uVar11 * 0x10);
                    fVar15 = *pfVar1 - *(float *)(param_2 + 0x50);
                    fVar13 = pfVar1[1] - *(float *)(param_2 + 0x54);
                    fVar12 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + 0.0);
                    if (fVar16 == 0.0) {
                        if (fVar17 <= fVar12) {
                            fVar17 = 0.0;
                        }
                        else {
                            fVar17 = 1.0;
                        }
                    }
                    else {
                        fVar16 = (fVar12 - fVar17) / fVar16;
                        if (1.0 <= fVar16) {
                            fVar16 = 1.0;
                        }
                        fVar17 = 0.0;
                        if (0.0 <= fVar16) {
                            fVar17 = fVar16;
                        }
                        fVar17 = 1.0 - fVar17;
                    }
                    auVar14 = divps(CONCAT412(pfVar1[3] - *(float *)(param_2 + 0x5c),
                                              CONCAT48(pfVar1[2] - *(float *)(param_2 + 0x58),
                                                       CONCAT44(fVar13,fVar15))),
                                    CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))));
                }
                else if (sVar2 == 1) {
                    pfVar1 = (float *)(param_4 + (ulonglong)uVar11 * 0x10);
                    fVar13 = *(float *)(param_2 + 0x50) * *pfVar1 + *(float *)(param_2 + 0x54) * pfVar1[1] +
                             0.0 + *(float *)(param_4 + 0xc + (ulonglong)uVar11 * 0x10);
                    fVar15 = (float)((uint)fVar13 & 0x7fffffff);
                    if (fVar16 == 0.0) {
                        if (fVar17 <= fVar15) {
                            fVar17 = 0.0;
                        }
                        else {
                            fVar17 = 1.0;
                        }
                    }
                    else {
                        fVar16 = (fVar12 - fVar15) / fVar16;
                        if (1.0 <= fVar16) {
                            fVar16 = 1.0;
                        }
                        fVar17 = 0.0;
                        if (0.0 <= fVar16) {
                            fVar17 = fVar16;
                        }
                    }
                    if (0.0 <= fVar13) {
                        auVar14 = ZEXT416((uint)(0.0 - pfVar7[-2])) & (undefined  [16])0xffffffffffffffff;
                        auVar14 = CONCAT412(SUB164(auVar14 >> 0x60,0) - 0.0,
                                            CONCAT48(SUB164(auVar14 >> 0x40,0) - *pfVar7,
                                                     CONCAT44(0.0 - pfVar7[-1],SUB164(auVar14,0))));
                    }
                    else {
                        auVar14 = ZEXT1216(CONCAT48(*pfVar7,CONCAT44(pfVar7[-1],pfVar7[-2])));
                    }
                }
                else {
                    auVar14 = in_XMM4 & (undefined  [16])0x0;
                    fVar17 = 0.0;
                }
                fVar12 = *(float *)(lVar5 + 8 + lVar8);
                fVar16 = SUB164(auVar14 >> 0x40,0) * fVar17;
                fVar15 = SUB164(auVar14 >> 0x60,0) * fVar17;
                in_XMM4 = ZEXT816(CONCAT44(fVar15,fVar16)) << 0x40;
                fVar18 = fVar12 * SUB164(auVar14,0) * fVar17 * param_5 + fVar18;
                fVar19 = fVar12 * SUB164(auVar14 >> 0x20,0) * fVar17 * param_5 + fVar19;
                fVar20 = fVar12 * fVar16 * param_5 + fVar20;
                fVar21 = fVar12 * fVar15 * param_5 + fVar21;
            }
            uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + 0x50;
            pfVar7 = pfVar7 + 4;
            lVar8 = lVar8 + 0x48;
        } while (uVar11 < uVar3);
    }
    if (((0.0 < *(float *)(*(longlong *)(param_1 + 8) + 0x30)) &&
         (*(int *)(*(longlong *)(param_1 + 8) + 8) == 2)) &&
        (plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + 0x1e8), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x1c0))(plVar6,param_2 + 0x50,&local_b8,3);
        fVar12 = *(float *)(*(longlong *)(param_1 + 8) + 0x30);
        fVar18 = fVar12 * local_b8 * param_5 + fVar18;
        fVar19 = fVar12 * fStack180 * param_5 + fVar19;
        fVar20 = fVar12 * fStack176 * param_5 + fVar20;
        fVar21 = fVar12 * fStack172 * param_5 + fVar21;
    }
    *(undefined (*) [16])(param_2 + 0x40) =
            CONCAT412(*(float *)(param_2 + 0x4c) + fVar21,
                      CONCAT48(*(float *)(param_2 + 0x48) + fVar20,
                               CONCAT44(*(float *)(param_2 + 0x44) + fVar19,
                                        *(float *)(param_2 + 0x40) + fVar18)));
    return;
}



void FUN_14031ea00(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   longlong param_5,longlong param_6)

{
    float *pfVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    uVar5 = 0;
    fVar9 = 0.0;
    if ((*(int *)(*(longlong *)(param_5 + 8) + 0x6c) != 0) &&
        (fVar6 = (float)(**(code **)(**(longlong **)(param_5 + 0x28) + 0x58))(), fVar9 < fVar6)) {
        lVar2 = *(longlong *)(param_5 + 8);
        fVar10 = 1.0;
        fVar8 = param_3 * *(float *)(lVar2 + 0x70);
        fVar11 = 1.0 - ((*(float *)(lVar2 + 0x78) - *(float *)(lVar2 + 0x74)) * param_4 +
                        *(float *)(lVar2 + 0x74));
        fVar7 = (float)(**(code **)(**(longlong **)(param_5 + 0x28) + 0x58))();
        fVar6 = fVar9;
        if (fVar9 <= fVar10 - (fVar8 / fVar7) * fVar11) {
            param_3 = param_3 * *(float *)(*(longlong *)(param_5 + 8) + 0x70);
            fVar6 = (float)(**(code **)(**(longlong **)(param_5 + 0x28) + 0x58))();
            fVar6 = fVar10 - (param_3 / fVar6) * fVar11;
        }
        lVar2 = *(longlong *)(param_5 + 0x28);
        uVar4 = 0;
        *(undefined (*) [16])(param_6 + 0x50) =
                CONCAT412(*(float *)(param_6 + 0x5c) + *(float *)(lVar2 + 0xbc) * fVar6,
                          CONCAT48(*(float *)(param_6 + 0x58) + *(float *)(lVar2 + 0xb8) * fVar6,
                                   CONCAT44(*(float *)(param_6 + 0x54) + *(float *)(lVar2 + 0xb4) * fVar6,
                                            *(float *)(param_6 + 0x50) + *(float *)(lVar2 + 0xb0) * fVar6))
                );
        if (*(int *)(param_5 + 0x55c) != 0) {
            do {
                lVar2 = *(longlong *)(param_5 + 0x28);
                uVar3 = (ulonglong)uVar4;
                uVar4 = uVar4 + 1;
                pfVar1 = (float *)(param_6 + (uVar3 + 7) * 0x10);
                *(undefined (*) [16])(param_6 + (uVar3 + 7) * 0x10) =
                        CONCAT412(pfVar1[3] + *(float *)(lVar2 + 0xbc) * fVar6,
                                  CONCAT48(pfVar1[2] + *(float *)(lVar2 + 0xb8) * fVar6,
                                           CONCAT44(pfVar1[1] + *(float *)(lVar2 + 0xb4) * fVar6,
                                                    *pfVar1 + *(float *)(lVar2 + 0xb0) * fVar6)));
            } while (uVar4 < *(uint *)(param_5 + 0x55c));
        }
    }
    lVar2 = *(longlong *)(param_5 + 8);
    if (*(int *)(lVar2 + 0x7c) != 0) {
        fVar6 = *(float *)(param_5 + 0x120);
        fVar7 = *(float *)(param_5 + 0x124);
        fVar8 = *(float *)(param_5 + 0x128);
        fVar10 = *(float *)(param_5 + 300);
        if (fVar9 < fVar6 * fVar6 + fVar7 * fVar7 + 0.0) {
            fVar11 = (*(float *)(lVar2 + 0x84) - *(float *)(lVar2 + 0x80)) * param_4 +
                     *(float *)(lVar2 + 0x80);
            if (fVar9 <= fVar11) {
                fVar9 = fVar11;
            }
            if (*(int *)(lVar2 + 8) == 2) {
                fVar6 = fVar6 - *(float *)(param_5 + 0xc0);
                fVar7 = fVar7 - *(float *)(param_5 + 0xc4);
                fVar8 = fVar8 - *(float *)(param_5 + 200);
                fVar10 = fVar10 - *(float *)(param_5 + 0xcc);
            }
            *(undefined (*) [16])(param_6 + 0x50) =
                    CONCAT412(*(float *)(param_6 + 0x5c) + fVar9 * fVar10,
                              CONCAT48(*(float *)(param_6 + 0x58) + fVar9 * fVar8,
                                       CONCAT44(*(float *)(param_6 + 0x54) + fVar9 * fVar7,
                                                *(float *)(param_6 + 0x50) + fVar9 * fVar6)));
            if (*(int *)(param_5 + 0x55c) != 0) {
                do {
                    uVar3 = (ulonglong)uVar5;
                    uVar5 = uVar5 + 1;
                    pfVar1 = (float *)(param_6 + (uVar3 + 7) * 0x10);
                    *(undefined (*) [16])(param_6 + (uVar3 + 7) * 0x10) =
                            CONCAT412(pfVar1[3] + fVar9 * fVar10,
                                      CONCAT48(pfVar1[2] + fVar9 * fVar8,
                                               CONCAT44(pfVar1[1] + fVar9 * fVar7,*pfVar1 + fVar9 * fVar6)));
                } while (uVar5 < *(uint *)(param_5 + 0x55c));
            }
        }
    }
    return;
}



void FUN_14031ec20(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    if (*(char *)(param_1 + 400) == '\0') {
        lVar1 = param_1 + 0x180;
        FUN_140317ec0(*(longlong *)(param_1 + 8) + 0x38,param_1 + 0x60,lVar1);
        FUN_1403180d0(*(longlong *)(param_1 + 0x4e8) + 0x30,param_1 + 0x1a0,lVar1);
        lVar6 = 0;
        lVar2 = param_1 + 0x1c0;
        lVar5 = 5;
        lVar7 = 2;
        lVar4 = lVar6;
        do {
            lVar3 = 5;
            do {
                FUN_140318300(*(longlong *)(param_1 + 0x4e8) + 0x50 + lVar4,lVar2,lVar1);
                lVar2 = lVar2 + 0x20;
                lVar4 = lVar4 + 0x18;
                lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar2 = param_1 + 0x350;
        do {
            FUN_140317fc0(*(longlong *)(param_1 + 0x4e8) + 0x140 + lVar6,&DAT_ffffffffffffffb0 + lVar2,
                          lVar1);
            FUN_140317fc0(*(longlong *)(param_1 + 0x4e8) + 0x1c0 + lVar6,lVar2,lVar1);
            FUN_140317fc0(*(longlong *)(param_1 + 0x4e8) + 0x238 + lVar6,lVar2 + 0x50,lVar1);
            FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x2b8 + lVar6,lVar2 + 0xa0,lVar1);
            FUN_140317fc0(*(longlong *)(param_1 + 0x4e8) + 0x330 + lVar6,lVar2 + 0xf0,lVar1);
            lVar2 = lVar2 + 0x10;
            lVar6 = lVar6 + 0x18;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x418,param_1 + 0x490,lVar1);
        if (*(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430) != '\0') {
            FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x480,param_1 + 0x4a0,lVar1);
            FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x450,param_1 + 0x4b0,lVar1);
            FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x438,param_1 + 0x4c0,lVar1);
            FUN_140317ec0(*(longlong *)(param_1 + 0x4e8) + 0x468,param_1 + 0x4d0,lVar1);
        }
        *(undefined *)(param_1 + 400) = 1;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14031ee60(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
    float *pfVar1;
    float *pfVar2;
    longlong *plVar3;
    char cVar4;
    short sVar5;
    ushort uVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    longlong lVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    int iVar16;
    uint uVar17;
    float *pfVar18;
    longlong lVar19;
    undefined4 *puVar20;
    uint uVar21;
    undefined4 *puVar22;
    float fVar23;
    longlong lVar24;
    undefined4 *puVar25;
    undefined4 *puVar26;
    uint uVar27;
    int iVar28;
    uint uVar29;
    char *pcVar30;
    undefined4 *puVar31;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    undefined auVar32 [16];
    undefined extraout_XMM0 [16];
    float fVar33;
    float fVar34;
    ulonglong uVar35;
    undefined auVar36 [16];
    float fVar37;
    float fVar38;
    undefined auVar39 [16];
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
    undefined4 uVar56;
    undefined4 uVar57;
    float fVar58;
    float fVar59;
    undefined4 uVar60;
    undefined4 uVar61;
    float fVar62;
    undefined4 uVar63;
    undefined4 uVar64;
    undefined4 uVar65;
    float fVar66;
    undefined auStack1032 [32];
    float *local_3e8;
    float local_3e0;
    undefined4 local_3d8;
    float local_3c8;
    undefined local_3b8 [8];
    undefined8 uStack944;
    undefined local_3a8 [8];
    float fStack928;
    float fStack924;
    float local_398 [4];
    undefined local_388 [8];
    undefined8 uStack896;
    float local_378 [4];
    undefined local_368 [16];
    undefined local_348 [16];
    undefined local_338 [16];
    longlong local_328;
    float *local_320;
    undefined *local_2d8 [2];
    undefined4 local_2c8;
    undefined4 uStack704;
    undefined4 local_2b8;
    undefined4 uStack692;
    undefined4 uStack688;
    uint uStack684;
    undefined local_2a8 [16];
    undefined4 local_298;
    undefined4 uStack660;
    undefined4 uStack656;
    undefined4 uStack652;
    undefined local_288 [32];
    undefined4 local_268;
    float local_1a8;
    float fStack420;
    float fStack416;
    float fStack412;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    undefined local_178 [8];
    undefined8 uStack368;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
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
    float local_128;
    float fStack292;
    float fStack288;
    float fStack284;
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    undefined local_f8 [16];
    ulonglong local_e8;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong)auStack1032;
    local_1a8 = *param_2;
    fStack420 = param_2[1];
    fStack416 = param_2[2];
    fStack412 = param_2[3];
    local_198 = param_2[4];
    fStack404 = param_2[5];
    fStack400 = param_2[6];
    fStack396 = param_2[7];
    puVar31 = (undefined4 *)0x0;
    _local_3a8 = CONCAT88(local_3a8,param_3);
    fVar62 = 0.0;
    uVar63 = 0;
    uVar64 = 0;
    uVar65 = 0;
    local_188 = param_2[8];
    fStack388 = param_2[9];
    fStack384 = param_2[10];
    fStack380 = param_2[0xb];
    _local_178 = *(undefined (*) [16])(param_2 + 0xc);
    uVar21 = 0;
    if ((*(int *)(param_1[1] + 0x28) != 0) && (*(int *)(param_1[1] + 8) == 2)) {
        uVar60 = 0;
        plVar7 = *(longlong **)(*(longlong *)(param_1[5] + 0x10) + 0x1e8);
        if (plVar7 != (longlong *)0x0) {
            local_3e8 = (float *)0x0;
            local_3b8 = CONCAT44(param_2[0xd] + fRam0000000140c77874,
                                 *(float *)*(undefined (*) [16])(param_2 + 0xc) + _DAT_140c77870);
            _local_3b8 = CONCAT48(param_2[0xe] + fRam0000000140c77878,local_3b8);
            _local_3b8 = CONCAT412(param_2[0xf] + fRam0000000140c7787c,_local_3b8);
            iVar16 = (**(code **)(*plVar7 + 0x1b8))(plVar7,local_3b8,local_288,1);
            if (iVar16 != 0) {
                uVar60 = local_268;
            }
        }
    }
    FUN_14031ec20(param_1);
    FUN_14032fe20(param_1,&local_1a8,param_3);
    iVar16 = *(int *)(param_1 + 0xa7);
    lVar24 = param_1[5];
    uVar29 = *(uint *)(*(longlong *)(lVar24 + 0x10) + 0xd0);
    *(int *)((longlong)param_1 + 0x53c) = iVar16;
    iVar28 = *(int *)(*(longlong *)(lVar24 + 0x10) + 0xd0);
    *(int *)(param_1 + 0xa7) = iVar28;
    fVar23 = (float)(iVar28 - iVar16);
    fVar53 = fVar23;
    if (((*(byte *)(param_1[0x9d] + 0x28) & 0x10) != 0) && (fVar53 = 1.401298e-43, (uint)fVar23 < 100)
            ) {
        fVar53 = fVar23;
    }
    fVar23 = 0.001;
    fVar66 = (float)(ulonglong)(uint)fVar53;
    fVar58 = fVar66 * 0.001;
    local_3c8 = fVar53;
    if (((*(char *)(param_1[0x9d] + 4) == '\x04') && (*(longlong *)(lVar24 + 0x4c0) != 0)) &&
        (param_1[2] != *(longlong *)(lVar24 + 0x4c0))) {
        FUN_14031def0(param_1);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x58))();
    fVar59 = 1.0;
    uVar60 = 0;
    uVar61 = 0;
    *(float *)((longlong)param_1 + 0x5cc) =
            extraout_XMM0_Da / (fVar58 * *(float *)(param_1[0x9d] + 0x3a8));
    fVar33 = *(float *)(param_1 + 0x34);
    fVar42 = *(float *)((longlong)param_1 + 0x1a4);
    fVar55 = *(float *)(param_1 + 0x35);
    fVar37 = param_4[5];
    fVar40 = param_4[6];
    fVar43 = param_4[7];
    fVar44 = param_4[1];
    fVar45 = param_4[2];
    fVar47 = param_4[3];
    fVar49 = param_4[9];
    fVar50 = param_4[10];
    fVar51 = param_4[0xb];
    *(float *)(param_1 + 0xc2) = fVar42 * param_4[4] + fVar33 * *param_4 + fVar55 * param_4[8];
    *(float *)((longlong)param_1 + 0x614) = fVar42 * fVar37 + fVar33 * fVar44 + fVar55 * fVar49;
    *(float *)(param_1 + 0xc3) = fVar42 * fVar40 + fVar33 * fVar45 + fVar55 * fVar50;
    *(float *)((longlong)param_1 + 0x61c) = fVar42 * fVar43 + fVar33 * fVar47 + fVar55 * fVar51;
    lVar24 = param_1[0x9d];
    if (*(char *)(lVar24 + 0x430) != '\0') {
        if (*(float *)(param_1 + 0x94) == fVar62) {
            fVar33 = 1000000.0;
        }
        else {
            fVar33 = 1.0 / *(float *)(param_1 + 0x94);
        }
        *(float *)(param_1 + 0xbe) = fVar33;
    }
    if (*(ushort *)(lVar24 + 0x26) == 0) {
        fVar33 = 100000.0;
    }
    else {
        fVar33 = 1.0 / (float)(uint)*(ushort *)(lVar24 + 0x26);
    }
    *(float *)((longlong)param_1 + 0x5f4) = fVar33;
    *(float *)((longlong)param_1 + 0x574) =
            fVar58 * *(float *)(lVar24 + 0x3bc) + *(float *)((longlong)param_1 + 0x574);
    fVar33 = fVar58 * *(float *)(lVar24 + 0x3c0) + *(float *)(param_1 + 0xaf);
    *(float *)(param_1 + 0xaf) = fVar33;
    if (fVar33 <= 1.0) {
        if (fVar33 < -1.0) {
            fVar33 = fVar33 + 1.0;
            goto LAB_14031f145;
        }
    }
    else {
        fVar33 = fVar33 - 1.0;
        LAB_14031f145:
        *(float *)(param_1 + 0xaf) = fVar33;
    }
    if ((*(uint *)(lVar24 + 0x28) & 0x200) != 0) {
        iVar16 = *(int *)(param_1 + 0xb0);
        if ((uint)(*(int *)(lVar24 + 1000) + iVar16) < uVar29) {
            iVar28 = *(int *)((longlong)param_1 + 0x57c);
            do {
                iVar28 = iVar28 + 1;
                *(int *)((longlong)param_1 + 0x57c) = iVar28;
                iVar16 = iVar16 + *(int *)(lVar24 + 1000);
                *(int *)(param_1 + 0xb0) = iVar16;
            } while ((uint)(*(int *)(lVar24 + 1000) + iVar16) < uVar29);
        }
        uVar29 = *(uint *)(lVar24 + 0x3fc);
        uVar27 = *(uint *)((longlong)param_1 + 0x57c);
        if (uVar29 <= uVar27) {
            if ((*(uint *)(lVar24 + 0x28) & 0x400) == 0) {
                uVar17 = uVar29 - 1;
                if (uVar27 < uVar29 - 1) {
                    uVar17 = uVar27;
                }
                *(uint *)((longlong)param_1 + 0x57c) = uVar17;
            }
            else if (uVar29 == 0) {
                *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
            }
            else {
                *(uint *)((longlong)param_1 + 0x57c) = uVar27 % uVar29;
            }
        }
    }
    fVar33 = 0.5;
    if (*(short *)(lVar24 + 0x404) == 2) {
        *(float *)(param_1 + 0xb8) = fVar58 * *(float *)(lVar24 + 0x408) + *(float *)(param_1 + 0xb8);
        *(float *)((longlong)param_1 + 0x5c4) =
                fVar58 * *(float *)(lVar24 + 0x40c) + *(float *)((longlong)param_1 + 0x5c4);
        *(float *)(param_1 + 0xb9) = fVar58 * *(float *)(lVar24 + 0x410) + *(float *)(param_1 + 0xb9);
        fVar55 = (*(float *)(param_1[0xb2] + 0xc) + *(float *)(param_1[0xb1] + 0xc)) * 0.5;
        FUN_1408fe3d0();
        fVar42 = extraout_XMM0_Da_00;
        FUN_1408fc950();
        *(float *)((longlong)param_1 + 0x5a4) = fVar42;
        *(float *)(param_1 + 0xb4) = extraout_XMM0_Da_01;
        *(float *)((longlong)param_1 + 0x5b4) = extraout_XMM0_Da_01;
        *(float *)(param_1 + 0xb5) =
                (fVar55 - (extraout_XMM0_Da_01 * fVar55 + fVar42 * fVar33)) + *(float *)(param_1 + 0xb8);
        *(uint *)(param_1 + 0xb6) = (uint)fVar42 ^ 0x80000000;
        *(float *)(param_1 + 0xb7) =
                (fVar42 * fVar55 - extraout_XMM0_Da_01 * fVar33) + fVar33 +
                *(float *)((longlong)param_1 + 0x5c4);
    }
    uVar57 = 0;
    uVar56 = 0;
    fVar42 = -1.0;
    puVar26 = puVar31;
    if (*(int *)(*(longlong *)(param_1[5] + 0x40) + 0x308) != 0) {
        do {
            lVar24 = param_1[5];
            lVar19 = *(longlong *)(*(longlong *)(lVar24 + 0x40) + 0x310);
            sVar5 = *(short *)(lVar19 + 2 + (longlong)puVar26 * 0x50);
            if (sVar5 == 0) {
                pfVar18 = (float *)((ulonglong)*(ushort *)(lVar19 + (longlong)puVar26 * 0x50) * 0x40 + 0x30
                                    + *(longlong *)(lVar24 + 0x338));
                fVar55 = *pfVar18;
                fVar37 = pfVar18[1];
                fVar40 = pfVar18[2];
                *(undefined (*) [16])(&local_168 + (longlong)puVar26 * 4) =
                        CONCAT412(fVar37 * param_3[7] + fVar55 * param_3[3] + fVar40 * param_3[0xb] +
                                  param_3[0xf],
                                  CONCAT48(fVar37 * param_3[6] + fVar55 * param_3[2] + fVar40 * param_3[10] +
                                           param_3[0xe],
                                           CONCAT44(fVar37 * param_3[5] + fVar55 * param_3[1] +
                                                    fVar40 * param_3[9] + param_3[0xd],
                                                    fVar37 * param_3[4] + fVar55 * *param_3 +
                                                    fVar40 * param_3[8] + param_3[0xc])));
            }
            else if (sVar5 == 1) {
                local_328 = (ulonglong)*(ushort *)(lVar19 + (longlong)puVar26 * 0x50) * 0x40 +
                            *(longlong *)(lVar24 + 0x338);
                _local_3b8 = CONCAT88(param_3,local_328);
                puVar22 = puVar26;
                local_320 = param_3;
                FUN_1401afb10(&local_328,local_368);
                local_2d8[0] = local_368;
                FUN_1401afc20(local_2d8);
                local_368 = CONCAT412(local_298,CONCAT48(SUB164(local_2a8,0),CONCAT44(local_2b8,local_2c8)))
                            & (undefined  [16])0xffffffffffffffff;
                *(undefined (*) [16])(&local_128 + (longlong)puVar26 * 4) =
                        ZEXT1216(CONCAT48(uStack660,CONCAT44(SUB164(local_2a8 >> 0x20,0),uStack692))) << 0x20;
                local_348 = CONCAT412(uStack656,
                                      CONCAT48(SUB164(local_2a8 >> 0x40,0),CONCAT44(uStack688,uStack704)));
                local_338 = CONCAT412(uStack652,ZEXT412(uStack684) << 0x20);
                puVar26 = puVar22;
            }
            uVar29 = (int)puVar26 + 1;
            puVar26 = (undefined4 *)(ulonglong)uVar29;
        } while (uVar29 < *(uint *)(*(longlong *)(param_1[5] + 0x40) + 0x308));
    }
    plVar7 = param_1 + 0x60;
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
    FUN_140318930(param_1[0x9d],plVar7,param_1 + 0x38,param_1[0xb1] + 0x20);
    if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
        FUN_140318930();
    }
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
    FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,param_1[0xb1] + 4);
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
    FUN_140318840(*(ushort *)(param_1[0x9d] + 0x2b0),param_1 + 0x88,param_1 + 0x7e,param_1[0xb1] + 8);
    FUN_14031e5e0(param_1,param_1[0xb1]);
    if (*(short *)(param_1[1] + 0x68) != 0) {
        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 | (ulonglong)(uint)fVar58);
        FUN_14031e6b0(param_1,param_1[0xb1],&local_168,&local_128);
    }
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
    FUN_140318930(param_1[0x9d],plVar7,param_1 + 0x38,param_1[0xb2] + 0x20);
    if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
        FUN_140318930();
    }
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
    FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,param_1[0xb2] + 4);
    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
    FUN_140318840(*(ushort *)(param_1[0x9d] + 0x2b0),param_1 + 0x88);
    FUN_14031e5e0(param_1);
    if (*(short *)(param_1[1] + 0x68) != 0) {
        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 | (ulonglong)(uint)fVar58);
        FUN_14031e6b0(param_1);
    }
    if (*(int *)(param_1 + 0xa6) != 0) {
        pcVar30 = (char *)param_1[0x9d];
        if (*pcVar30 == '\0') {
            lVar24 = param_1[0xb1];
            fVar55 = *(float *)(lVar24 + 8);
            fVar37 = fVar55 * fVar33 + *(float *)(param_1 + 0x98);
            fVar40 = (*(float *)(lVar24 + 0x70) - *(float *)(lVar24 + 0x50)) * fVar55 +
                     *(float *)(lVar24 + 0x50);
            fVar43 = (*(float *)(lVar24 + 0x74) - *(float *)(lVar24 + 0x54)) * fVar55 +
                     *(float *)(lVar24 + 0x54);
            fVar44 = (*(float *)(lVar24 + 0x78) - *(float *)(lVar24 + 0x58)) * fVar55 +
                     *(float *)(lVar24 + 0x58);
            fVar45 = (*(float *)(lVar24 + 0x7c) - *(float *)(lVar24 + 0x5c)) * fVar55 +
                     *(float *)(lVar24 + 0x5c);
            lVar24 = param_1[0xb2];
            fVar55 = *(float *)(lVar24 + 8);
            fVar47 = fVar55 * (*(float *)(lVar24 + 0x70) - *(float *)(lVar24 + 0x50)) +
                     *(float *)(lVar24 + 0x50);
            fVar49 = fVar55 * (*(float *)(lVar24 + 0x74) - *(float *)(lVar24 + 0x54)) +
                     *(float *)(lVar24 + 0x54);
            fVar50 = fVar55 * (*(float *)(lVar24 + 0x78) - *(float *)(lVar24 + 0x58)) +
                     *(float *)(lVar24 + 0x58);
            fVar51 = fVar55 * (*(float *)(lVar24 + 0x7c) - *(float *)(lVar24 + 0x5c)) +
                     *(float *)(lVar24 + 0x5c);
            *(undefined (*) [16])(param_1 + 0x1a) =
                    CONCAT412(fVar45 - fVar37,
                              CONCAT48(fVar44 - fVar37,CONCAT44(fVar43 - fVar37,fVar40 - fVar37)));
            *(float *)(param_1 + 0x1c) = fVar37 + fVar40;
            *(float *)((longlong)param_1 + 0xe4) = fVar37 + fVar43;
            *(float *)(param_1 + 0x1d) = fVar37 + fVar44;
            *(float *)((longlong)param_1 + 0xec) = fVar37 + fVar45;
            fVar55 = *(float *)(param_1[0xb2] + 8) * fVar33 + *(float *)(param_1 + 0x98);
            auVar36 = maxps(*(undefined (*) [16])(param_1 + 0x1c),
                            CONCAT412(fVar55 + fVar51,
                                      CONCAT48(fVar55 + fVar50,CONCAT44(fVar55 + fVar49,fVar55 + fVar47)))
            );
            auVar32 = minps(*(undefined (*) [16])(param_1 + 0x1a),
                            CONCAT412(fVar51 - fVar55,
                                      CONCAT48(fVar50 - fVar55,CONCAT44(fVar49 - fVar55,fVar47 - fVar55)))
            );
            *(undefined (*) [16])(param_1 + 0x1a) = auVar32;
            *(undefined (*) [16])(param_1 + 0x1c) = auVar36;
            if ((*(byte *)(param_1[0x9d] + 0x28) & 0x40) == 0) {
                *(int *)(param_1[0xb1] + 0x18) = *(int *)(param_1[0xb1] + 0x18) - (int)fVar53;
                *(int *)(param_1[0xb2] + 0x18) = *(int *)(param_1[0xb2] + 0x18) - (int)fVar53;
            }
            else {
                *(int *)(param_1[0xb1] + 0x18) =
                        *(int *)(param_1[0xb1] + 0x18) -
                        (int)(longlong)
                                ((*(float *)(param_1[0x9d] + 0x3ac) * *(float *)((longlong)param_1 + 0x5cc) +
                                  fVar59) * fVar66);
                *(int *)(param_1[0xb2] + 0x18) =
                        *(int *)(param_1[0xb2] + 0x18) -
                        (int)(longlong)
                                ((*(float *)(param_1[0x9d] + 0x3b0) * *(float *)((longlong)param_1 + 0x5cc) +
                                  fVar59) * fVar66);
            }
            FUN_14031ea00(param_1,param_1[0xb1]);
            FUN_14031ea00();
            local_378[0] = *(float *)(param_1 + 0xa5);
            fVar53 = *(float *)((longlong)param_1 + 0x52c);
            if ((uint)local_378[0] < (uint)fVar53) {
                uVar29 = 1;
                local_398[0] = fVar53;
            }
            else {
                uVar29 = 2;
                local_378[1] = 0.0;
                local_398[0] = *(float *)(param_1 + 0xa4);
                local_398[1] = fVar53;
            }
            auVar32 = CONCAT412(uVar65,CONCAT48(uVar64,CONCAT44(uVar63,fVar62)));
            fVar53 = *(float *)((ulonglong)(uint)((int)local_378[0] * *(int *)((longlong)param_1 + 0x524))
                                + param_1[0xa3] + 0xc);
            if (fVar53 <= fVar59) {
                if (fVar53 < fVar42) {
                    auVar32 = CONCAT412(uVar61,CONCAT48(uVar60,(ulonglong)(uint)fVar59));
                }
            }
            else {
                auVar32 = CONCAT412(uVar57,CONCAT48(uVar56,(ulonglong)(uint)fVar42));
            }
            *(float *)(param_1[0xb1] + 0xc) = SUB164(auVar32,0) + *(float *)(param_1[0xb1] + 0xc);
            *(float *)(param_1[0xb2] + 0xc) = SUB164(auVar32,0) + *(float *)(param_1[0xb2] + 0xc);
            if (uVar29 != 0) {
                local_3b8 = (ulonglong)uVar29;
                _local_388 = _local_388 & (undefined  [16])0xffffffffffffffff;
                local_388 = puVar31;
                puVar26 = puVar31;
                puVar22 = puVar31;
                do {
                    uVar29 = *(uint *)((longlong)local_378 + (longlong)local_388);
                    puVar25 = puVar26;
                    uVar27 = uVar29;
                    if (uVar29 < *(uint *)((longlong)local_398 + (longlong)local_388)) {
                        do {
                            uVar27 = uVar27 + 1;
                            puVar26 = (undefined4 *)
                                    ((ulonglong)(*(int *)((longlong)param_1 + 0x524) * uVar29) + param_1[0xa3]);
                            puVar26[3] = SUB164(auVar32,0) + (float)puVar26[3];
                            fVar53 = (float)((uint)*(ushort *)(param_1[0x9d] + 0x26) - puVar26[6]) /
                                     (float)(uint)*(ushort *)(param_1[0x9d] + 0x26);
                            FUN_14031ea00(param_1,puVar26);
                            if (fVar53 < fVar59) {
                                FUN_14031e5e0(param_1,puVar26);
                                if ((*(char *)(param_1[0x9d] + 4) == '\0') && (puVar25 != (undefined4 *)0x0)) {
                                    fVar42 = (float)puVar26[0x15];
                                    fVar55 = (float)puVar26[0x16];
                                    fVar37 = (float)puVar26[0x17];
                                    fVar40 = (float)puVar25[0x14];
                                    fVar43 = (float)puVar25[0x15];
                                    fVar44 = (float)puVar25[0x16];
                                    fVar45 = (float)puVar25[0x17];
                                    puVar26[0x18] = (float)puVar26[0x14] - fVar40;
                                    puVar26[0x19] = fVar42 - fVar43;
                                    puVar26[0x1a] = fVar55 - fVar44;
                                    puVar26[0x1b] = fVar37 - fVar45;
                                    if ((int)puVar22 == 1) {
                                        puVar25[0x18] = (float)puVar26[0x14] - fVar40;
                                        puVar25[0x19] = fVar42 - fVar43;
                                        puVar25[0x1a] = fVar55 - fVar44;
                                        puVar25[0x1b] = fVar37 - fVar45;
                                    }
                                }
                                if (*(short *)(param_1[1] + 0x68) != 0) {
                                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                          (ulonglong)(uint)fVar58);
                                    FUN_14031e6b0();
                                }
                                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                                FUN_140318930(*(ushort *)(param_1[0x9d] + 0x48),param_1 + 0x60,param_1 + 0x38,
                                              puVar26 + 8);
                                if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
                                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                                    FUN_140318930();
                                }
                                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
                                FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,
                                              puVar26 + 1);
                                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
                                FUN_140318840();
                                fVar42 = (float)puVar26[2];
                                fVar55 = fVar42 * fVar33 + *(float *)(param_1 + 0x98);
                                fVar37 = ((float)puVar26[0x1c] - (float)puVar26[0x14]) * fVar42 +
                                         (float)puVar26[0x14];
                                fVar40 = ((float)puVar26[0x1d] - (float)puVar26[0x15]) * fVar42 +
                                         (float)puVar26[0x15];
                                fVar43 = ((float)puVar26[0x1e] - (float)puVar26[0x16]) * fVar42 +
                                         (float)puVar26[0x16];
                                fVar42 = ((float)puVar26[0x1f] - (float)puVar26[0x17]) * fVar42 +
                                         (float)puVar26[0x17];
                                auVar36 = minps(*(undefined (*) [16])(param_1 + 0x1a),
                                                CONCAT412(fVar42 - fVar55,
                                                          CONCAT48(fVar43 - fVar55,
                                                                   CONCAT44(fVar40 - fVar55,fVar37 - fVar55))));
                                auVar39 = maxps(*(undefined (*) [16])(param_1 + 0x1c),
                                                CONCAT412(fVar55 + fVar42,
                                                          CONCAT48(fVar55 + fVar43,
                                                                   CONCAT44(fVar55 + fVar40,fVar55 + fVar37))));
                                *(undefined (*) [16])(param_1 + 0x1a) = auVar36;
                                *(undefined (*) [16])(param_1 + 0x1c) = auVar39;
                            }
                            else {
                                puVar25 = (undefined4 *)param_1[0xb2];
                                *puVar25 = *puVar26;
                                uVar60 = puVar26[9];
                                uVar61 = puVar26[10];
                                uVar56 = puVar26[0xb];
                                puVar25[8] = puVar26[8];
                                puVar25[9] = uVar60;
                                puVar25[10] = uVar61;
                                puVar25[0xb] = uVar56;
                                uVar60 = puVar26[0xd];
                                uVar61 = puVar26[0xe];
                                uVar56 = puVar26[0xf];
                                puVar25[0xc] = puVar26[0xc];
                                puVar25[0xd] = uVar60;
                                puVar25[0xe] = uVar61;
                                puVar25[0xf] = uVar56;
                                puVar25[1] = puVar26[1];
                                puVar25[2] = puVar26[2];
                                puVar25[6] = puVar26[6];
                                puVar25[5] = puVar26[5];
                                puVar25[3] = puVar26[3];
                                puVar25[4] = puVar26[4];
                                uVar60 = puVar26[0x11];
                                uVar61 = puVar26[0x12];
                                uVar56 = puVar26[0x13];
                                puVar25[0x10] = puVar26[0x10];
                                puVar25[0x11] = uVar60;
                                puVar25[0x12] = uVar61;
                                puVar25[0x13] = uVar56;
                                uVar60 = puVar26[0x15];
                                uVar61 = puVar26[0x16];
                                uVar56 = puVar26[0x17];
                                puVar25[0x14] = puVar26[0x14];
                                puVar25[0x15] = uVar60;
                                puVar25[0x16] = uVar61;
                                puVar25[0x17] = uVar56;
                                uVar60 = puVar26[0x19];
                                uVar61 = puVar26[0x1a];
                                uVar56 = puVar26[0x1b];
                                puVar25[0x18] = puVar26[0x18];
                                puVar25[0x19] = uVar60;
                                puVar25[0x1a] = uVar61;
                                puVar25[0x1b] = uVar56;
                                FUN_1407db590();
                                if (*(int *)(param_1 + 0xa6) != 0) {
                                    uVar17 = uVar27;
                                    if (uVar27 == *(uint *)(param_1 + 0xa4)) {
                                        uVar17 = uVar21;
                                    }
                                    *(uint *)(param_1 + 0xa5) = uVar17;
                                    *(int *)(param_1 + 0xa6) = *(int *)(param_1 + 0xa6) + -1;
                                }
                            }
                            lVar24 = param_1[0x9d];
                            fVar42 = local_3c8;
                            if ((*(byte *)(lVar24 + 0x28) & 0x40) != 0) {
                                fVar42 = (float)(longlong)
                                        ((((*(float *)(lVar24 + 0x3b0) - *(float *)(lVar24 + 0x3ac)) *
                                           fVar53 + *(float *)(lVar24 + 0x3ac)) *
                                          *(float *)((longlong)param_1 + 0x5cc) + fVar59) * fVar66);
                            }
                            puVar26[6] = puVar26[6] - (int)fVar42;
                            uVar29 = uVar29 + 1;
                            puVar22 = (undefined4 *)(ulonglong)((int)puVar22 + 1);
                            puVar25 = puVar26;
                        } while (uVar29 < *(uint *)((longlong)local_398 + (longlong)local_388));
                    }
                    local_388 = local_388 + 1;
                    local_3b8 = local_3b8 - 1;
                } while (local_3b8 != 0);
                param_3 = local_3a8;
            }
        }
        else {
            lVar24 = *(longlong *)(param_1[5] + 0x338);
            local_328 = (ulonglong)*(ushort *)(pcVar30 + 0x49c) * 0x40 + lVar24;
            _local_3b8 = CONCAT88(param_3,local_328);
            local_320 = param_3;
            FUN_1401afb10(&local_328,&local_168);
            local_328 = (ulonglong)*(ushort *)(pcVar30 + 0x49e) * 0x40 + lVar24;
            _local_3b8 = CONCAT88(param_3,local_328);
            local_320 = param_3;
            FUN_1401afb10(&local_328,&local_128);
            fVar49 = SUB164(local_f8,0);
            fVar50 = SUB164(local_f8 >> 0x20,0);
            fVar51 = SUB164(local_f8 >> 0x40,0);
            fVar46 = SUB164(local_f8 >> 0x60,0);
            fVar43 = local_138 - fVar49;
            fVar44 = fStack308 - fVar50;
            fVar45 = fStack304 - fVar51;
            fVar47 = fStack300 - fVar46;
            *(float *)(param_1 + 0xae) = SQRT(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45);
            fVar53 = local_3a8._0_4_;
            fVar23 = local_3a8._4_4_;
            fVar58 = fStack928;
            fVar66 = fStack924;
            fVar42 = local_3a8._0_4_;
            fVar55 = local_3a8._4_4_;
            fVar37 = fStack928;
            fVar40 = fStack924;
            if ((byte)(pcVar30[4] - 1U) < 3) {
                fVar66 = *(float *)(pcVar30 + 0x1c);
                fVar42 = *(float *)(pcVar30 + 0x18);
                fVar40 = *(float *)(pcVar30 + 0x1c);
                fVar54 = *(float *)(pcVar30 + 0x18);
                fVar53 = fVar66 * local_158 + fVar42 * local_168 + local_148 * 0.0 + local_138;
                fVar23 = fVar66 * fStack340 + (float)*(undefined8 *)(pcVar30 + 0x18) * fStack356 +
                         fStack324 * 0.0 + fStack308;
                fVar58 = fVar66 * fStack336 + fVar42 * fStack352 + fStack320 * 0.0 + fStack304;
                fVar66 = fVar66 * fStack332 + fVar42 * fStack348 + fStack316 * 0.0 + fStack300;
                fVar42 = fVar40 * local_118 + fVar54 * local_128 + local_108 * 0.0 + fVar49;
                fVar55 = fVar40 * fStack276 + (float)*(undefined8 *)(pcVar30 + 0x18) * fStack292 +
                         fStack260 * 0.0 + fVar50;
                fVar37 = fVar40 * fStack272 + fVar54 * fStack288 + fStack256 * 0.0 + fVar51;
                fVar40 = fVar40 * fStack268 + fVar54 * fStack284 + fStack252 * 0.0 + fVar46;
                puVar26 = puVar31;
                if (*(int *)((longlong)param_1 + 0x55c) != 0) {
                    do {
                        uVar29 = (int)puVar26 + 1;
                        fVar33 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + 4 + (longlong)puVar26 * 0xc);
                        fVar54 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + (longlong)puVar26 * 0xc);
                        pfVar18 = (float *)(param_1[0xba] + (longlong)puVar26 * 0x10);
                        *pfVar18 = fVar33 * local_158 + fVar54 * local_168 + local_148 * 0.0 + local_138;
                        pfVar18[1] = fVar33 * fStack340 + fVar54 * fStack356 + fStack324 * 0.0 + fStack308;
                        pfVar18[2] = fVar33 * fStack336 + fVar54 * fStack352 + fStack320 * 0.0 + fStack304;
                        pfVar18[3] = fVar33 * fStack332 + fVar54 * fStack348 + fStack316 * 0.0 + fStack300;
                        fVar33 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + 4 + (longlong)puVar26 * 0xc);
                        fVar54 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + (longlong)puVar26 * 0xc);
                        pfVar18 = (float *)(param_1[0xbc] + (longlong)puVar26 * 0x10);
                        *pfVar18 = fVar33 * local_118 + fVar54 * local_128 + local_108 * 0.0 + fVar49;
                        pfVar18[1] = fVar33 * fStack276 + fVar54 * fStack292 + fStack260 * 0.0 + fVar50;
                        pfVar18[2] = fVar33 * fStack272 + fVar54 * fStack288 + fStack256 * 0.0 + fVar51;
                        pfVar18[3] = fVar33 * fStack268 + fVar54 * fStack284 + fStack252 * 0.0 + fVar46;
                        puVar26 = (undefined4 *)(ulonglong)uVar29;
                    } while (uVar29 < *(uint *)((longlong)param_1 + 0x55c));
                    fVar33 = 0.5;
                }
            }
            lVar24 = param_1[0x9d];
            fVar54 = SQRT(fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45);
            if ((*(short *)(lVar24 + 0x4a0) != 1) || (*(short *)(lVar24 + 0x4a2) != 1)) {
                fVar34 = fVar44 * fVar44;
                fVar38 = fVar43 * fVar43 + fVar34 + fVar45 * fVar45;
                auVar32 = rsqrtss(CONCAT412(fVar34,CONCAT48(fVar34,CONCAT44(fVar34,fVar34))),
                                  CONCAT412(fVar47 * fVar47,
                                            CONCAT48(fVar45 * fVar45,CONCAT44(fVar34,fVar38))));
                fStack924 = SUB164(auVar32,0);
                fStack924 = (3.0 - fVar38 * fStack924 * fStack924) * fVar33 * fStack924;
                if (fStack924 <= 0.0) {
                    fStack924 = 0.0;
                }
                local_3a8._0_4_ = fStack924 * fVar43;
                local_3a8._4_4_ = fStack924 * fVar44;
                fStack928 = fStack924 * fVar45;
                fStack924 = fStack924 * fVar47;
            }
            if (*(short *)(lVar24 + 0x4a0) == 1) {
                fVar43 = fStack324 * fStack324;
                fVar44 = local_148 * local_148 + fVar43 + fStack320 * fStack320;
                auVar32 = rsqrtss(CONCAT412(fVar43,CONCAT48(fVar43,CONCAT44(fVar43,fVar43))),
                                  CONCAT412(fStack316 * fStack316,
                                            CONCAT48(fStack320 * fStack320,CONCAT44(fVar43,fVar44))));
                fVar43 = SUB164(auVar32,0);
                fVar43 = (3.0 - fVar44 * fVar43 * fVar43) * fVar33 * fVar43;
                if (fVar43 <= 0.0) {
                    fVar43 = 0.0;
                }
                _local_3b8 = CONCAT412(fVar43 * fStack316,
                                       CONCAT48(fVar43 * fStack320,
                                                CONCAT44(fVar43 * fStack324,fVar43 * local_148)));
            }
            else {
                _local_3b8 = CONCAT412(fStack924,
                                       CONCAT48(fStack928,CONCAT44(local_3a8._4_4_,local_3a8._0_4_)));
            }
            if (*(short *)(lVar24 + 0x4a2) == 1) {
                fVar43 = fStack260 * fStack260;
                fVar44 = local_108 * local_108 + fVar43 + fStack256 * fStack256;
                auVar32 = rsqrtss(CONCAT412(fVar43,CONCAT48(fVar43,CONCAT44(fVar43,fVar43))),
                                  CONCAT412(fStack252 * fStack252,
                                            CONCAT48(fStack256 * fStack256,CONCAT44(fVar43,fVar44))));
                fVar43 = SUB164(auVar32,0);
                fVar43 = (3.0 - fVar44 * fVar43 * fVar43) * fVar33 * fVar43;
                if (fVar43 <= 0.0) {
                    fVar43 = 0.0;
                }
                _local_388 = CONCAT412(fVar43 * fStack252,
                                       CONCAT48(fVar43 * fStack256,
                                                CONCAT44(fVar43 * fStack260,fVar43 * local_108)));
            }
            else {
                _local_388 = CONCAT412(fStack924,
                                       CONCAT48(fStack928,CONCAT44(local_3a8._4_4_,local_3a8._0_4_)));
            }
            fVar43 = *(float *)(lVar24 + 0x498);
            auVar39 = ZEXT816(CONCAT44(fStack316,fStack320)) << 0x40 & (undefined  [16])0x0;
            *(undefined (*) [16])(param_1[0xb1] + 0x50) =
                    CONCAT412(fStack300,CONCAT48(fStack304,CONCAT44(fStack308,local_138)));
            *(undefined (*) [16])(param_1[0xb2] + 0x50) = local_f8;
            lVar24 = param_1[0xb1];
            local_378[0] = (0.0 - local_3b8._0_4_) * fVar43 * fVar54;
            local_378[1] = (0.0 - local_3b8._4_4_) * fVar43 * fVar54;
            local_378[2] = (0.0 - (float)uStack944) * fVar43 * fVar54;
            local_378[3] = (0.0 - uStack944._4_4_) * fVar43 * fVar54;
            local_3b8 = CONCAT44((0.0 - local_388._4_4_) * fVar43 * fVar54,
                                 (0.0 - local_388._0_4_) * fVar43 * fVar54);
            _local_3b8 = CONCAT48((SUB164(auVar39 >> 0x40,0) - (float)uStack896) * fVar43 * fVar54,
                                  local_3b8);
            _local_3b8 = CONCAT412((0.0 - uStack896._4_4_) * fVar43 * fVar54,_local_3b8);
            fVar54 = *(float *)(lVar24 + 8) * fVar33 + *(float *)(param_1 + 0x98);
            fVar43 = *(float *)(lVar24 + 0x50);
            fVar44 = *(float *)(lVar24 + 0x54);
            fVar45 = *(float *)(lVar24 + 0x58);
            fVar47 = *(float *)(lVar24 + 0x5c);
            *(float *)(param_1 + 0x1a) = fVar43 - fVar54;
            *(float *)((longlong)param_1 + 0xd4) = fVar44 - fVar54;
            *(float *)(param_1 + 0x1b) = fVar45 - fVar54;
            *(float *)((longlong)param_1 + 0xdc) = fVar47 - fVar54;
            *(float *)(param_1 + 0x1c) = fVar54 + fVar43;
            *(float *)((longlong)param_1 + 0xe4) = fVar54 + fVar44;
            *(float *)(param_1 + 0x1d) = fVar54 + fVar45;
            *(float *)((longlong)param_1 + 0xec) = fVar54 + fVar47;
            lVar24 = param_1[0xb2];
            fVar43 = *(float *)(lVar24 + 8) * fVar33 + *(float *)(param_1 + 0x98);
            auVar36 = maxps(*(undefined (*) [16])(param_1 + 0x1c),
                            CONCAT412(fVar43 + *(float *)(lVar24 + 0x5c),
                                      CONCAT48(fVar43 + *(float *)(lVar24 + 0x58),
                                               CONCAT44(fVar43 + *(float *)(lVar24 + 0x54),
                                                        fVar43 + *(float *)(lVar24 + 0x50)))));
            auVar32 = minps(*(undefined (*) [16])(param_1 + 0x1a),
                            CONCAT412(*(float *)(lVar24 + 0x5c) - fVar43,
                                      CONCAT48(*(float *)(lVar24 + 0x58) - fVar43,
                                               CONCAT44(*(float *)(lVar24 + 0x54) - fVar43,
                                                        *(float *)(lVar24 + 0x50) - fVar43))));
            *(undefined (*) [16])(param_1 + 0x1a) = auVar32;
            *(undefined (*) [16])(param_1 + 0x1c) = auVar36;
            uVar29 = *(uint *)(param_1 + 0xa5);
            local_3c8 = -1.0 / (float)(ulonglong)(*(int *)(param_1 + 0xa6) - 1);
            fVar43 = fVar59;
            FUN_1408fde98();
            fVar44 = local_138;
            fVar45 = fStack308;
            fVar47 = fStack304;
            fVar54 = fStack300;
            fVar34 = extraout_XMM0_Da_02;
            if (uVar29 < *(uint *)((longlong)param_1 + 0x52c)) {
                do {
                    lVar24 = (ulonglong)(uVar29 * *(int *)((longlong)param_1 + 0x524)) + param_1[0xa3];
                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                    auVar39 = ZEXT416(0) & (undefined  [16])0xffffffffffffffff;
                    FUN_140318930(*(undefined2 *)(param_1[0x9d] + 0x26),plVar7,param_1 + 0x38,lVar24 + 0x20);
                    if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
                        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                        FUN_140318930();
                    }
                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
                    FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,lVar24 + 4)
                            ;
                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
                    FUN_140318840();
                    fVar38 = fVar59 * fVar59;
                    fVar41 = fVar59 * fVar38;
                    fVar52 = fVar41 - fVar38;
                    fVar48 = (fVar41 - fVar38 * 2.0) + fVar59;
                    fVar62 = fVar38 * 3.0 - fVar41 * 2.0;
                    fVar38 = (fVar41 * 2.0 - fVar38 * 3.0) + fVar43;
                    *(undefined (*) [16])(lVar24 + 0x50) =
                            CONCAT412(fVar52 * uStack944._4_4_ +
                                      fVar48 * local_378[3] + fVar62 * fVar46 + fVar38 * fVar54,
                                      CONCAT48(fVar52 * (float)uStack944 +
                                               fVar48 * local_378[2] + fVar62 * fVar51 + fVar38 * fVar47,
                                               CONCAT44(fVar52 * local_3b8._4_4_ +
                                                        fVar48 * local_378[1] + fVar62 * fVar50 + fVar38 * fVar45
                                                       ,fVar52 * local_3b8._0_4_ +
                                                        fVar48 * local_378[0] +
                                                        fVar62 * fVar49 + fVar38 * fVar44)));
                    fVar62 = SUB164(local_f8 >> 0x20,0);
                    fVar38 = SUB164(local_f8 >> 0x40,0);
                    if (*(char *)(param_1[0x9d] + 4) == '\0') {
                        *(float *)(lVar24 + 0x60) = *(float *)(lVar24 + 0x50) - SUB164(local_f8,0);
                        *(float *)(lVar24 + 100) = *(float *)(lVar24 + 0x54) - fVar62;
                        *(float *)(lVar24 + 0x68) = *(float *)(lVar24 + 0x58) - fVar38;
                        *(float *)(lVar24 + 0x6c) = *(float *)(lVar24 + 0x5c) - SUB164(local_f8 >> 0x60,0);
                    }
                    else if ((byte)(*(char *)(param_1[0x9d] + 4) - 1U) < 3) {
                        puVar26 = puVar31;
                        if (*(int *)((longlong)param_1 + 0x55c) != 0) {
                            do {
                                uVar27 = (int)puVar26 + 1;
                                pfVar18 = (float *)(param_1[0xba] + (longlong)puVar26 * 0x10);
                                fVar41 = pfVar18[1];
                                fVar48 = pfVar18[2];
                                fVar52 = pfVar18[3];
                                pfVar1 = (float *)(param_1[0xbc] + (longlong)puVar26 * 0x10);
                                fVar10 = pfVar1[1];
                                fVar11 = pfVar1[2];
                                fVar12 = pfVar1[3];
                                fVar13 = *(float *)(lVar24 + 0x54);
                                fVar14 = *(float *)(lVar24 + 0x58);
                                fVar15 = *(float *)(lVar24 + 0x5c);
                                pfVar2 = (float *)(lVar24 + ((longlong)puVar26 + 7) * 0x10);
                                *pfVar2 = (*(float *)(lVar24 + 0x50) - ((fVar42 - fVar53) * fVar59 + fVar53)) +
                                          (*pfVar1 - *pfVar18) * fVar59 + *pfVar18;
                                pfVar2[1] = (fVar13 - ((fVar55 - fVar23) * fVar59 + fVar23)) +
                                            (fVar10 - fVar41) * fVar59 + fVar41;
                                pfVar2[2] = (fVar14 - ((fVar37 - fVar58) * fVar59 + fVar58)) +
                                            (fVar11 - fVar48) * fVar59 + fVar48;
                                pfVar2[3] = (fVar15 - ((fVar40 - fVar66) * fVar59 + fVar66)) +
                                            (fVar12 - fVar52) * fVar59 + fVar52;
                                puVar26 = (undefined4 *)(ulonglong)uVar27;
                            } while (uVar27 < *(uint *)((longlong)param_1 + 0x55c));
                        }
                    }
                    fVar41 = SUB164(local_f8,0) - *(float *)(lVar24 + 0x50);
                    fVar62 = fVar62 - *(float *)(lVar24 + 0x54);
                    fVar38 = fVar38 - *(float *)(lVar24 + 0x58);
                    fVar59 = fVar59 + local_3c8;
                    uVar29 = uVar29 + 1;
                    fVar34 = SQRT(fVar41 * fVar41 + fVar62 * fVar62 + fVar38 * fVar38) *
                             *(float *)(param_1[0x9d] + 0x3b4) + fVar34;
                    *(float *)(lVar24 + 0xc) = fVar34;
                    fVar62 = *(float *)(lVar24 + 8) * fVar33 + *(float *)(param_1 + 0x98);
                    local_f8 = *(undefined (*) [16])(lVar24 + 0x50);
                    fVar38 = SUB164(local_f8 >> 0x20,0);
                    fVar41 = SUB164(local_f8 >> 0x40,0);
                    fVar48 = SUB164(local_f8 >> 0x60,0);
                    auVar36 = maxps(*(undefined (*) [16])(param_1 + 0x1c),
                                    CONCAT412(fVar62 + fVar48,
                                              CONCAT48(fVar62 + fVar41,
                                                       CONCAT44(fVar62 + fVar38,fVar62 + SUB164(local_f8,0))))
                    );
                    auVar32 = minps(*(undefined (*) [16])(param_1 + 0x1a),
                                    CONCAT412(fVar48 - fVar62,
                                              CONCAT48(fVar41 - fVar62,
                                                       CONCAT44(fVar38 - fVar62,SUB164(local_f8,0) - fVar62)))
                    );
                    *(undefined (*) [16])(param_1 + 0x1a) = auVar32;
                    *(undefined (*) [16])(param_1 + 0x1c) = auVar36;
                } while (uVar29 < *(uint *)((longlong)param_1 + 0x52c));
                fVar62 = 0.0;
                uVar63 = 0;
                uVar64 = 0;
                uVar65 = 0;
                auVar39 = auVar39 & (undefined  [16])0x0;
            }
            iVar16 = *(int *)((longlong)param_1 + 0x52c);
            lVar24 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x524) * *(int *)(param_1 + 0xa5)) +
                     param_1[0xa3];
            if (iVar16 == 0) {
                iVar16 = *(int *)(param_1 + 0xa4);
            }
            lVar19 = (ulonglong)(uint)((iVar16 + -1) * *(int *)((longlong)param_1 + 0x524)) +
                     param_1[0xa3];
            *(undefined4 *)(param_1[0xb1] + 0xc) = *(undefined4 *)(lVar19 + 0xc);
            *(undefined4 *)(param_1[0xb2] + 0xc) = *(undefined4 *)(lVar24 + 0xc);
            cVar4 = *(char *)(param_1[0x9d] + 4);
            fVar59 = fVar43;
            if (cVar4 == '\0') {
                if ((*(uint *)(param_1[0x9d] + 0x28) & 0x8000) == 0) {
                    pfVar18 = (float *)((ulonglong)
                                                (uint)((*(int *)(param_1 + 0xa5) + 1) *
                                                       *(int *)((longlong)param_1 + 0x524)) + 0x50 + param_1[0xa3]);
                    fVar53 = pfVar18[1];
                    fVar23 = pfVar18[2];
                    fVar58 = pfVar18[3];
                    *(float *)(lVar24 + 0x60) = *pfVar18 - *(float *)(lVar24 + 0x50);
                    *(float *)(lVar24 + 100) = fVar53 - *(float *)(lVar24 + 0x54);
                    *(float *)(lVar24 + 0x68) = fVar23 - *(float *)(lVar24 + 0x58);
                    *(float *)(lVar24 + 0x6c) = fVar58 - *(float *)(lVar24 + 0x5c);
                }
                else {
                    *(undefined (*) [16])(lVar19 + 0x60) = auVar39;
                }
                fVar23 = 0.001;
                *(undefined (*) [16])(param_1[0xb1] + 0x60) = auVar39;
                *(undefined (*) [16])(param_1[0xb2] + 0x60) = auVar39;
            }
            else {
                if (((byte)(cVar4 - 1U) < 3) &&
                    (puVar26 = puVar31, *(int *)((longlong)param_1 + 0x55c) != 0)) {
                    do {
                        uVar29 = (int)puVar26 + 1;
                        puVar22 = (undefined4 *)(param_1[0xba] + (longlong)puVar26 * 0x10);
                        uVar60 = puVar22[1];
                        uVar61 = puVar22[2];
                        uVar56 = puVar22[3];
                        puVar25 = (undefined4 *)(param_1[0xb1] + ((longlong)puVar26 + 7) * 0x10);
                        *puVar25 = *puVar22;
                        puVar25[1] = uVar60;
                        puVar25[2] = uVar61;
                        puVar25[3] = uVar56;
                        puVar22 = (undefined4 *)(param_1[0xbc] + (longlong)puVar26 * 0x10);
                        uVar60 = puVar22[1];
                        uVar61 = puVar22[2];
                        uVar56 = puVar22[3];
                        puVar26 = (undefined4 *)(param_1[0xb2] + ((longlong)puVar26 + 7) * 0x10);
                        *puVar26 = *puVar22;
                        puVar26[1] = uVar60;
                        puVar26[2] = uVar61;
                        puVar26[3] = uVar56;
                        puVar26 = (undefined4 *)(ulonglong)uVar29;
                    } while (uVar29 < *(uint *)((longlong)param_1 + 0x55c));
                }
                fVar23 = 0.001;
            }
        }
    }
    auVar32 = minps(*(undefined (*) [16])(param_1 + 0x1e),*(undefined (*) [16])(param_1 + 0x1a));
    auVar36 = maxps(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x1c));
    *(undefined (*) [16])(param_1 + 0x1e) = auVar32;
    *(undefined (*) [16])(param_1 + 0x20) = auVar36;
    if (*(char *)(param_1[0x9d] + 4) == '\x04') {
        if (*(longlong *)(param_1[5] + 0x4c0) == 0) goto LAB_1403212f8;
        puVar26 = puVar31;
        if (*(int *)((longlong)param_1 + 0x55c) != 0) {
            do {
                pfVar18 = (float *)(**(code **)(**(longlong **)(param_1[5] + 0x4c0) + 0x358))
                        (*(longlong **)(param_1[5] + 0x4c0),local_3a8);
                uVar29 = (int)puVar26 + 1;
                fVar53 = *pfVar18;
                fVar58 = pfVar18[1];
                fVar66 = pfVar18[2];
                *(undefined (*) [16])((longlong)puVar26 * 0x10 + param_1[0xc6]) =
                        CONCAT412(fVar53 * param_3[3] + fVar58 * param_3[7] + fVar66 * param_3[0xb] +
                                  param_3[0xf],
                                  CONCAT48(fVar53 * param_3[2] + fVar58 * param_3[6] + fVar66 * param_3[10] +
                                           param_3[0xe],
                                           CONCAT44(fVar53 * param_3[1] + fVar58 * param_3[5] +
                                                    fVar66 * param_3[9] + param_3[0xd],
                                                    fVar53 * *param_3 + fVar58 * param_3[4] +
                                                    fVar66 * param_3[8] + param_3[0xc])));
                puVar26 = (undefined4 *)(ulonglong)uVar29;
            } while (uVar29 < *(uint *)((longlong)param_1 + 0x55c));
        }
        iVar16 = (**(code **)(**(longlong **)(param_1[5] + 0x4c0) + 0x350))();
        if (iVar16 == 0) {
            _local_3a8 = *(undefined (*) [16])param_1[0xc6];
        }
        else {
            pfVar18 = (float *)(**(code **)(**(longlong **)(param_1[5] + 0x4c0) + 0x358))();
            fVar53 = *pfVar18;
            fVar58 = pfVar18[1];
            fVar66 = pfVar18[2];
            _local_3a8 = CONCAT412(fVar58 * param_3[7] + fVar53 * param_3[3] + fVar66 * param_3[0xb] +
                                   param_3[0xf],
                                   CONCAT48(fVar58 * param_3[6] + fVar53 * param_3[2] +
                                            fVar66 * param_3[10] + param_3[0xe],
                                            CONCAT44(fVar58 * param_3[5] + fVar53 * param_3[1] +
                                                     fVar66 * param_3[9] + param_3[0xd],
                                                     fVar58 * param_3[4] + fVar53 * *param_3 +
                                                     fVar66 * param_3[8] + param_3[0xc])));
        }
    }
    else {
        puVar26 = puVar31;
        if (*(int *)(param_1[0x9d] + 8) != 0) {
            do {
                pfVar18 = (float *)((longlong)puVar26 * 0x10 + param_1[0xc6]);
                uVar29 = (int)puVar26 + 1;
                fVar53 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + 4 + (longlong)puVar26 * 0xc);
                fVar58 = *(float *)(*(longlong *)(param_1[0x9d] + 0x10) + (longlong)puVar26 * 0xc);
                *pfVar18 = fVar53 * local_198 + fVar58 * local_1a8 + local_188 * 0.0 + local_178._0_4_;
                pfVar18[1] = fVar53 * fStack404 + fVar58 * fStack420 + fStack388 * 0.0 + local_178._4_4_;
                pfVar18[2] = fVar53 * fStack400 + fVar58 * fStack416 + fStack384 * 0.0 + (float)uStack368;
                pfVar18[3] = fVar53 * fStack396 + fVar58 * fStack412 + fStack380 * 0.0 + uStack368._4_4_;
                puVar26 = (undefined4 *)(ulonglong)uVar29;
            } while (uVar29 < *(uint *)(param_1[0x9d] + 8));
        }
        fVar53 = *(float *)(param_1[0x9d] + 0x1c);
        puVar8 = (undefined8 *)(param_1[0x9d] + 0x18);
        fVar58 = *(float *)puVar8;
        _local_3a8 = CONCAT412(fVar58 * fStack412 + fVar53 * fStack396 + fStack380 * 0.0 +
                               uStack368._4_4_,
                               CONCAT48(fVar58 * fStack416 + fVar53 * fStack400 + fStack384 * 0.0 +
                                        (float)uStack368,
                                        CONCAT44((float)*puVar8 * fStack420 + fVar53 * fStack404 +
                                                 fStack388 * 0.0 + local_178._4_4_,
                                                 fVar58 * local_1a8 + fVar53 * local_198 +
                                                 local_188 * 0.0 + local_178._0_4_)));
    }
    iVar16 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar16 != 0) {
        if (*(char *)((longlong)param_1 + 0x191) == '\0') {
            FUN_140318540(param_1[1] + 0x50);
            *(undefined *)((longlong)param_1 + 0x191) = 1;
        }
        for (puVar8 = (undefined8 *)param_1[0x31]; puVar8 != (undefined8 *)0x0;
             puVar8 = (undefined8 *)puVar8[2]) {
            (**(code **)*puVar8)(puVar8);
        }
        pcVar30 = (char *)param_1[0x9d];
        if ((*pcVar30 != '\0') ||
            (((pcVar30[4] == '\x04' &&
               (*(float *)((ulonglong)
                           *(ushort *)
                                   ((ulonglong)*(ushort *)param_1[1] * 0x160 + 6 +
                                    *(longlong *)(*(longlong *)(param_1[5] + 0x40) + 0x188)) * 0x60 + 0x30 +
                           *(longlong *)(param_1[5] + 0x1f0)) <= fVar33)) || (*(int *)(param_1 + 10) == 0))
            )) {
            *(undefined4 *)((longlong)param_1 + 0x544) = 0;
        }
        else {
            local_3d8 = 0;
            local_3e0 = (float)(uint)*(ushort *)(pcVar30 + 0x26);
            local_3e8 = (float *)local_3a8;
            plVar7 = param_1 + 0xc6;
            FUN_14031e170();
            if (*(int *)((longlong)param_1 + 0x544) == 0) {
                local_3d8 = 0;
                local_3e8 = (float *)local_3a8;
                local_3e0 = (float)(uint)*(ushort *)(param_1[0x9d] + 0x26);
                FUN_14031e170();
                *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
                *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa7) - (uint)*(ushort *)(param_1[0x9d] + 2);
            }
            lVar24 = param_1[0x9d];
            uVar6 = *(ushort *)(lVar24 + 2);
            if ((int)(uVar6 + 1) >> 1 <= *(int *)(param_1 + 0xa7) - *(int *)(param_1 + 0xa8)) {
                if (*(uint *)((longlong)param_1 + 0x6a4) < 3) {
                    *(uint *)((longlong)param_1 + 0x6a4) = *(uint *)((longlong)param_1 + 0x6a4) + 1;
                }
                else {
                    uVar29 = *(uint *)(param_1 + 0xd4);
                    fVar47 = 0.0;
                    lVar19 = param_1[((ulonglong)((uVar29 + 1) % 3) + 100) * 2];
                    lVar9 = *plVar7;
                    fVar42 = *(float *)(lVar9 + 0x10) - *(float *)(lVar19 + 0x10);
                    fVar55 = *(float *)(lVar9 + 0x14) - *(float *)(lVar19 + 0x14);
                    fVar37 = *(float *)(lVar9 + 0x18) - *(float *)(lVar19 + 0x18);
                    fVar58 = *(float *)(lVar9 + 0x1c) - *(float *)(lVar19 + 0x1c);
                    fVar53 = fVar55 * fVar55;
                    lVar9 = param_1[((ulonglong)(uVar29 % 3) + 100) * 2];
                    fVar66 = fVar42 * fVar42 + fVar53 + fVar37 * fVar37;
                    fVar40 = *(float *)(lVar19 + 0x10) - *(float *)(lVar9 + 0x10);
                    fVar43 = *(float *)(lVar19 + 0x14) - *(float *)(lVar9 + 0x14);
                    fVar44 = *(float *)(lVar19 + 0x18) - *(float *)(lVar9 + 0x18);
                    fVar45 = *(float *)(lVar19 + 0x1c) - *(float *)(lVar9 + 0x1c);
                    auVar32 = rsqrtss(CONCAT412(fVar53,CONCAT48(fVar53,CONCAT44(fVar53,fVar53))),
                                      CONCAT124(SUB1612(CONCAT412(fVar58 * fVar58,
                                                                  CONCAT48(fVar37 * fVar37,
                                                                           CONCAT44(fVar53,fVar42 * fVar42)))
                                                                >> 0x20,0),fVar66));
                    fVar53 = SUB164(auVar32,0);
                    fVar58 = fVar43 * fVar43;
                    lVar19 = param_1[((ulonglong)((uVar29 + 2) % 3) + 100) * 2];
                    fVar53 = (3.0 - fVar66 * fVar53 * fVar53) * fVar33 * fVar53;
                    if (fVar53 <= 0.0) {
                        fVar53 = fVar47;
                    }
                    fVar49 = fVar40 * fVar40 + fVar58 + fVar44 * fVar44;
                    auVar32 = rsqrtss(CONCAT412(fVar58,CONCAT48(fVar58,CONCAT44(fVar58,fVar58))),
                                      CONCAT124(SUB1612(CONCAT412(fVar45 * fVar45,
                                                                  CONCAT48(fVar44 * fVar44,
                                                                           CONCAT44(fVar58,fVar40 * fVar40)))
                                                                >> 0x20,0),fVar49));
                    fVar45 = *(float *)(lVar19 + 0x10) - *(float *)(lVar9 + 0x10);
                    fVar50 = *(float *)(lVar19 + 0x14) - *(float *)(lVar9 + 0x14);
                    fVar51 = *(float *)(lVar19 + 0x18) - *(float *)(lVar9 + 0x18);
                    fVar46 = *(float *)(lVar19 + 0x1c) - *(float *)(lVar9 + 0x1c);
                    fVar58 = SUB164(auVar32,0);
                    fVar66 = fVar50 * fVar50;
                    fVar58 = (3.0 - fVar49 * fVar58 * fVar58) * fVar33 * fVar58;
                    if (fVar58 <= 0.0) {
                        fVar58 = fVar47;
                    }
                    fVar49 = fVar45 * fVar45 + fVar66 + fVar51 * fVar51;
                    auVar32 = rsqrtss(CONCAT412(fVar66,CONCAT48(fVar66,CONCAT44(fVar66,fVar66))),
                                      CONCAT124(SUB1612(CONCAT412(fVar46 * fVar46,
                                                                  CONCAT48(fVar51 * fVar51,
                                                                           CONCAT44(fVar66,fVar45 * fVar45)))
                                                                >> 0x20,0),fVar49));
                    fVar66 = SUB164(auVar32,0);
                    fVar66 = (3.0 - fVar49 * fVar66 * fVar66) * fVar33 * fVar66;
                    if (fVar66 <= 0.0) {
                        fVar66 = fVar47;
                    }
                    fVar33 = fVar58 * fVar40 * fVar58 * fVar40 + fVar58 * fVar43 * fVar58 * fVar43 +
                             fVar58 * fVar44 * fVar58 * fVar44;
                    fVar66 = fVar66 * fVar45 * fVar66 * fVar45 + fVar66 * fVar50 * fVar66 * fVar50 +
                             fVar66 * fVar51 * fVar66 * fVar51;
                    fVar58 = fVar62;
                    if ((fVar53 * fVar42 * fVar53 * fVar42 + fVar53 * fVar55 * fVar53 * fVar55 +
                         fVar53 * fVar37 * fVar53 * fVar37 != fVar62) && (fVar33 != fVar62)) {
                        lVar19 = FUN_1408fccb0();
                        fVar58 = extraout_XMM0_Da_03;
                    }
                    uVar60 = (undefined4)lVar19;
                    if ((fVar33 == fVar62) || (fVar66 == fVar62)) {
                        auVar32 = CONCAT412(uVar65,CONCAT48(uVar64,CONCAT44(uVar63,fVar62)));
                    }
                    else {
                        uVar60 = FUN_1408fccb0();
                        auVar32 = extraout_XMM0;
                    }
                    if ((*(byte *)(lVar24 + 0x28) & 8) != 0) {
                        fVar58 = SUB164(auVar32,0) + fVar58;
                        if (*(char *)(lVar24 + 4) == '\x04') {
                            fVar58 = fVar58 * 11.45916;
                        }
                        else {
                            fVar58 = fVar58 * _DAT_140c79de4;
                        }
                        auVar36 = CONCAT124(SUB1612(auVar32 >> 0x20,0),fVar58);
                        iVar16 = (int)fVar58;
                        if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar58)) {
                            uVar63 = SUB164(auVar32 >> 0x20,0);
                            uVar35 = SUB168(auVar36,0);
                            uVar29 = movmskps(uVar60,CONCAT88(SUB168(CONCAT412(uVar63,CONCAT48(uVar63,uVar35)) >>
                                                                                                               0x40,0),uVar35 & 0xffffffff | uVar35 << 0x20)
                            );
                            auVar36 = ZEXT416((uint)(float)(iVar16 + (uVar29 & 1 ^ 1)));
                        }
                        uVar27 = (uint)(longlong)SUB164(auVar36,0);
                        uVar29 = 10;
                        if (uVar27 < 10) {
                            uVar29 = uVar27;
                        }
                        if (-1 < (int)((uVar6 - 1) +
                                       *(int *)((ulonglong)
                                                        (uint)(*(int *)((longlong)param_1 + 0x524) *
                                                               *(int *)(param_1 + 0xa5)) + 0x18 + param_1[0xa3])) /
                                 (int)(uint)uVar6) {
                            uVar21 = (int)((uVar6 - 1) +
                                           *(int *)((ulonglong)
                                                            (uint)(*(int *)((longlong)param_1 + 0x524) *
                                                                   *(int *)(param_1 + 0xa5)) + 0x18 + param_1[0xa3])) /
                                     (int)(uint)uVar6;
                        }
                        uVar21 = ((*(int *)(param_1 + 0xa4) - uVar21) - *(int *)(param_1 + 0xa6)) - 0x10;
                        if (((int)uVar21 < (int)uVar29) && (uVar29 = uVar21, (int)uVar21 < 1)) {
                            uVar29 = 1;
                        }
                        if (1 < uVar29) {
                            if (*(int *)(param_1 + 0xa6) != 0) {
                                iVar16 = *(int *)((longlong)param_1 + 0x52c);
                                *(int *)((longlong)param_1 + 0x52c) = iVar16 + -1;
                                if (iVar16 == 0) {
                                    *(int *)((longlong)param_1 + 0x52c) = *(int *)(param_1 + 0xa4) + -1;
                                }
                                *(int *)(param_1 + 0xa6) = *(int *)(param_1 + 0xa6) + -1;
                            }
                            uVar21 = *(uint *)(param_1 + 0xd4);
                            _local_178 = _local_3a8;
                            plVar3 = param_1 + ((ulonglong)((uVar21 + 2) % 3) + 0x67) * 2;
                            fVar62 = *(float *)plVar3;
                            fVar53 = *(float *)((longlong)plVar3 + 4);
                            fVar58 = *(float *)(plVar3 + 1);
                            fStack412 = *(float *)((longlong)plVar3 + 0xc);
                            plVar3 = param_1 + ((ulonglong)((uVar21 + 1) % 3) + 0x67) * 2;
                            local_198 = *(float *)plVar3;
                            fStack404 = *(float *)((longlong)plVar3 + 4);
                            fStack400 = *(float *)(plVar3 + 1);
                            fStack396 = *(float *)((longlong)plVar3 + 0xc);
                            plVar3 = param_1 + ((ulonglong)(uVar21 % 3) + 0x67) * 2;
                            local_188 = *(float *)plVar3;
                            fStack388 = *(float *)((longlong)plVar3 + 4);
                            fStack384 = *(float *)(plVar3 + 1);
                            fStack380 = *(float *)((longlong)plVar3 + 0xc);
                            fVar66 = (fVar62 - local_188) * (fVar62 - local_188);
                            fVar33 = (fVar53 - fStack388) * (fVar53 - fStack388);
                            fVar42 = (fVar58 - fStack384) * (fVar58 - fStack384);
                            fVar55 = fVar66 + fVar33 + fVar42;
                            auVar32 = CONCAT124(SUB1612(CONCAT412((fStack412 - fStack380) *
                                                                  (fStack412 - fStack380),
                                                                  CONCAT48(fVar42,CONCAT44(fVar33,fVar66))) >>
                                                                                                            0x20,0),fVar55);
                            fVar66 = (local_198 - local_3a8._0_4_) * (local_198 - local_3a8._0_4_) +
                                     (fStack404 - local_3a8._4_4_) * (fStack404 - local_3a8._4_4_) +
                                     (fStack400 - fStack928) * (fStack400 - fStack928);
                            if (fVar66 <= fVar55) {
                                if (fVar55 <= fVar66) {
                                    auVar36 = ZEXT416((uint)local_3c8);
                                }
                                else {
                                    auVar36 = ZEXT416((uint)SQRT(fVar66 / fVar55)) &
                                              (undefined  [16])0xffffffffffffffff;
                                }
                            }
                            else {
                                auVar36 = ZEXT416((uint)SQRT(fVar55 / fVar66)) & (undefined  [16])0xffffffffffffffff
                                        ;
                            }
                            iVar16 = *(int *)((longlong)param_1 + 0x52c);
                            if (iVar16 == 0) {
                                iVar16 = *(int *)(param_1 + 0xa4);
                            }
                            fVar33 = *(float *)((ulonglong)
                                                        (uint)((iVar16 + -1) * *(int *)((longlong)param_1 + 0x524)) + 0x18
                                                + param_1[0xa3]);
                            fVar59 = fVar59 / (float)(ulonglong)uVar29;
                            puVar26 = puVar31;
                            fVar42 = fVar59;
                            local_3c8 = fVar33;
                            local_1a8 = fVar62;
                            fStack420 = fVar53;
                            fStack416 = fVar58;
                            if (uVar29 != 0) {
                                while( true ) {
                                    fVar55 = SUB164(auVar36,0);
                                    if (fVar66 <= SUB164(auVar32,0)) {
                                        if (fVar66 < SUB164(auVar32,0)) {
                                            local_1a8 = (local_1a8 - local_188) * fVar55 + local_188;
                                            fStack420 = (fStack420 - fStack388) * fVar55 + fStack388;
                                            fStack416 = (fStack416 - fStack384) * fVar55 + fStack384;
                                            fStack412 = (fStack412 - fStack380) * fVar55 + fStack380;
                                        }
                                    }
                                    else {
                                        _local_178 = CONCAT412((fStack924 - fStack396) * fVar55 + fStack396,
                                                               CONCAT48((fStack928 - fStack400) * fVar55 + fStack400,
                                                                        CONCAT44((local_3a8._4_4_ - fStack404) * fVar55
                                                                                 + fStack404,
                                                                                 (local_3a8._0_4_ - local_198) * fVar55
                                                                                 + local_198)));
                                    }
                                    local_3e8 = (float *)local_178;
                                    local_3e0 = fVar59;
                                    FUN_1401adf30();
                                    if (fVar23 < (local_3b8._0_4_ - fVar62) * (local_3b8._0_4_ - fVar62) +
                                                 (local_3b8._4_4_ - fVar53) * (local_3b8._4_4_ - fVar53) +
                                                 ((float)uStack944 - fVar58) * ((float)uStack944 - fVar58)) {
                                        puVar22 = puVar31;
                                        fVar62 = local_3b8._0_4_;
                                        fVar53 = local_3b8._4_4_;
                                        fVar58 = (float)uStack944;
                                        if (*(int *)((longlong)param_1 + 0x55c) != 0) {
                                            do {
                                                uVar21 = *(uint *)(param_1 + 0xd4);
                                                iVar16 = (int)puVar22;
                                                lVar24 = (longlong)puVar22 * 2;
                                                pfVar18 = (float *)(param_1[((ulonglong)((uVar21 + 2) % 3) + 100) * 2] +
                                                                    (longlong)puVar22 * 0x10);
                                                local_168 = *pfVar18;
                                                fStack356 = pfVar18[1];
                                                fStack352 = pfVar18[2];
                                                fStack348 = pfVar18[3];
                                                pfVar18 = (float *)(param_1[((ulonglong)((uVar21 + 1) % 3) + 100) * 2] +
                                                                    (longlong)puVar22 * 0x10);
                                                local_158 = *pfVar18;
                                                fStack340 = pfVar18[1];
                                                fStack336 = pfVar18[2];
                                                fStack332 = pfVar18[3];
                                                pfVar18 = (float *)(param_1[((ulonglong)(uVar21 % 3) + 100) * 2] +
                                                                    (longlong)puVar22 * 0x10);
                                                local_148 = *pfVar18;
                                                fStack324 = pfVar18[1];
                                                fStack320 = pfVar18[2];
                                                fStack316 = pfVar18[3];
                                                pfVar18 = (float *)(*plVar7 + (longlong)puVar22 * 0x10);
                                                local_138 = *pfVar18;
                                                fStack308 = pfVar18[1];
                                                fStack304 = pfVar18[2];
                                                fStack300 = pfVar18[3];
                                                fVar62 = SUB164(auVar36,0);
                                                if (fVar66 <= SUB164(auVar32,0)) {
                                                    if (fVar66 < SUB164(auVar32,0)) {
                                                        local_168 = (local_168 - local_148) * fVar62 + local_148;
                                                        fStack356 = (fStack356 - fStack324) * fVar62 + fStack324;
                                                        fStack352 = (fStack352 - fStack320) * fVar62 + fStack320;
                                                        fStack348 = (fStack348 - fStack316) * fVar62 + fStack316;
                                                    }
                                                }
                                                else {
                                                    local_138 = (local_138 - local_158) * fVar62 + local_158;
                                                    fStack308 = (fStack308 - fStack340) * fVar62 + fStack340;
                                                    fStack304 = (fStack304 - fStack336) * fVar62 + fStack336;
                                                    fStack300 = (fStack300 - fStack332) * fVar62 + fStack332;
                                                }
                                                local_3e8 = &local_138;
                                                local_3e0 = fVar59;
                                                puVar20 = (undefined4 *)
                                                        FUN_1401adf30(local_388,&local_168,&local_158,&local_148);
                                                puVar22 = (undefined4 *)(ulonglong)(iVar16 + 1U);
                                                uVar63 = puVar20[1];
                                                uVar64 = puVar20[2];
                                                uVar65 = puVar20[3];
                                                puVar25 = (undefined4 *)(param_1[0xc4] + lVar24 * 8);
                                                *puVar25 = *puVar20;
                                                puVar25[1] = uVar63;
                                                puVar25[2] = uVar64;
                                                puVar25[3] = uVar65;
                                                fVar62 = local_3b8._0_4_;
                                                fVar53 = local_3b8._4_4_;
                                                fVar58 = (float)uStack944;
                                            } while (iVar16 + 1U < *(uint *)((longlong)param_1 + 0x55c));
                                        }
                                        FUN_14031e520(param_1,param_1 + 0xc4,local_3b8,
                                                      (int)fVar33 +
                                                      (((uint)*(ushort *)(param_1[0x9d] + 0x26) - (int)fVar33) *
                                                       ((int)puVar26 + 1)) / uVar29);
                                        iVar16 = *(int *)((longlong)param_1 + 0x52c);
                                        if (iVar16 == 0) {
                                            iVar16 = *(int *)(param_1 + 0xa4);
                                        }
                                        lVar24 = (ulonglong)(uint)((iVar16 + -1) * *(int *)((longlong)param_1 + 0x524))
                                                 + param_1[0xa3];
                                        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                                        FUN_140318930(*(ushort *)(param_1[0x9d] + 0x48),param_1 + 0x60,param_1 + 0x38,
                                                      lVar24 + 0x20);
                                        if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
                                            local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                                  (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                                            FUN_140318930();
                                        }
                                        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
                                        FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,
                                                      lVar24 + 4);
                                        local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                                              (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
                                        FUN_140318840(*(ushort *)(param_1[0x9d] + 0x2b0),param_1 + 0x88,param_1 + 0x7e,
                                                      lVar24 + 8);
                                        fVar33 = local_3c8;
                                    }
                                    uVar21 = (int)puVar26 + 1;
                                    puVar26 = (undefined4 *)(ulonglong)uVar21;
                                    fVar59 = fVar59 + fVar42;
                                    if (uVar29 <= uVar21) break;
                                    local_3a8._0_4_ = local_178._0_4_;
                                    local_3a8._4_4_ = local_178._4_4_;
                                    fStack928 = (float)uStack368;
                                    fStack924 = uStack368._4_4_;
                                }
                            }
                        }
                    }
                }
                if (*(int *)(param_1 + 0xa6) == *(int *)(param_1 + 0xa4)) {
                    puVar26 = (undefined4 *)param_1[0xb2];
                    puVar22 = (undefined4 *)
                            ((ulonglong)
                                     (uint)(*(int *)(param_1 + 0xa5) * *(int *)((longlong)param_1 + 0x524)) +
                             param_1[0xa3]);
                    *puVar26 = *puVar22;
                    uVar63 = puVar22[9];
                    uVar64 = puVar22[10];
                    uVar65 = puVar22[0xb];
                    puVar26[8] = puVar22[8];
                    puVar26[9] = uVar63;
                    puVar26[10] = uVar64;
                    puVar26[0xb] = uVar65;
                    uVar63 = puVar22[0xd];
                    uVar64 = puVar22[0xe];
                    uVar65 = puVar22[0xf];
                    puVar26[0xc] = puVar22[0xc];
                    puVar26[0xd] = uVar63;
                    puVar26[0xe] = uVar64;
                    puVar26[0xf] = uVar65;
                    puVar26[1] = puVar22[1];
                    puVar26[2] = puVar22[2];
                    puVar26[6] = puVar22[6];
                    puVar26[5] = puVar22[5];
                    puVar26[3] = puVar22[3];
                    puVar26[4] = puVar22[4];
                    uVar63 = puVar22[0x11];
                    uVar64 = puVar22[0x12];
                    uVar65 = puVar22[0x13];
                    puVar26[0x10] = puVar22[0x10];
                    puVar26[0x11] = uVar63;
                    puVar26[0x12] = uVar64;
                    puVar26[0x13] = uVar65;
                    uVar63 = puVar22[0x15];
                    uVar64 = puVar22[0x16];
                    uVar65 = puVar22[0x17];
                    puVar26[0x14] = puVar22[0x14];
                    puVar26[0x15] = uVar63;
                    puVar26[0x16] = uVar64;
                    puVar26[0x17] = uVar65;
                    uVar63 = puVar22[0x19];
                    uVar64 = puVar22[0x1a];
                    uVar65 = puVar22[0x1b];
                    puVar26[0x18] = puVar22[0x18];
                    puVar26[0x19] = uVar63;
                    puVar26[0x1a] = uVar64;
                    puVar26[0x1b] = uVar65;
                    FUN_1407db590(puVar26 + 0x1c,puVar22 + 0x1c,
                                  (ulonglong)*(uint *)((longlong)param_1 + 0x55c) << 4);
                }
                FUN_14031e520(param_1,plVar7,local_3a8,*(undefined2 *)(param_1[0x9d] + 0x26));
                iVar16 = *(int *)((longlong)param_1 + 0x52c);
                if (iVar16 == 0) {
                    iVar16 = *(int *)(param_1 + 0xa4);
                }
                lVar24 = (ulonglong)(uint)((iVar16 + -1) * *(int *)((longlong)param_1 + 0x524)) +
                         param_1[0xa3];
                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                FUN_140318930(*(ushort *)(param_1[0x9d] + 0x48),param_1 + 0x60,param_1 + 0x38,lVar24 + 0x20)
                        ;
                if ((*(byte *)(param_1[0x9d] + 0x28) & 0x20) != 0) {
                    local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                          (ulonglong)*(ushort *)(param_1[0x9d] + 0x48));
                    FUN_140318930();
                }
                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x1b8));
                FUN_140318840(*(ushort *)(param_1[0x9d] + 0x1b8),param_1 + 0x74,param_1 + 0x6a,lVar24 + 4);
                local_3e8 = (float *)((ulonglong)local_3e8 & 0xffffffff00000000 |
                                      (ulonglong)*(ushort *)(param_1[0x9d] + 0x2b0));
                FUN_140318840(*(ushort *)(param_1[0x9d] + 0x2b0),param_1 + 0x88,param_1 + 0x7e,lVar24 + 8);
                uVar6 = *(ushort *)(param_1[0x9d] + 2) >> 1;
                uVar21 = (*(int *)(param_1 + 0xa7) - (uint)*(ushort *)(param_1[0x9d] + 2)) -
                         *(int *)(param_1 + 0xa8);
                if ((int)(uint)uVar6 < (int)uVar21) {
                    uVar21 = (uint)uVar6;
                }
                iVar16 = *(int *)(param_1 + 0xd4);
                *(int *)(param_1 + 0xd4) = iVar16 + -1;
                *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa7) - uVar21;
                if (iVar16 == 0) {
                    *(undefined4 *)(param_1 + 0xd4) = 2;
                }
                if (*(int *)((longlong)param_1 + 0x55c) != 0) {
                    do {
                        uVar21 = (int)puVar31 + 1;
                        puVar26 = (undefined4 *)(*plVar7 + (longlong)puVar31 * 0x10);
                        uVar63 = puVar26[1];
                        uVar64 = puVar26[2];
                        uVar65 = puVar26[3];
                        puVar31 = (undefined4 *)
                                (param_1[((ulonglong)*(uint *)(param_1 + 0xd4) + 100) * 2] +
                                 (longlong)puVar31 * 0x10);
                        *puVar31 = *puVar26;
                        puVar31[1] = uVar63;
                        puVar31[2] = uVar64;
                        puVar31[3] = uVar65;
                        puVar31 = (undefined4 *)(ulonglong)uVar21;
                    } while (uVar21 < *(uint *)((longlong)param_1 + 0x55c));
                }
                plVar7 = param_1 + ((ulonglong)*(uint *)(param_1 + 0xd4) + 0x67) * 2;
                *(float *)plVar7 = local_3a8._0_4_;
                *(float *)((longlong)plVar7 + 4) = local_3a8._4_4_;
                *(float *)(plVar7 + 1) = fStack928;
                *(float *)((longlong)plVar7 + 0xc) = fStack924;
            }
            *(undefined4 *)((longlong)param_1 + 0x544) = 1;
        }
    }
    LAB_1403212f8:
    FUN_1407db4f0(local_e8 ^ (ulonglong)auStack1032);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140321360(longlong param_1,float **param_2,longlong param_3,longlong param_4,float param_5,
                   float *param_6,float *param_7,float param_8,float param_9,float *param_10)

{
    char cVar1;
    float *pfVar2;
    char cVar3;
    short sVar6;
    short sVar7;
    short sVar8;
    float *pfVar9;
    ushort uVar10;
    uint uVar11;
    ushort uVar12;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    int iVar13;
    int iVar15;
    undefined4 extraout_XMM0_Db;
    int iVar16;
    undefined auVar14 [16];
    int iVar17;
    short sVar18;
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
    undefined auVar32 [12];
    float fVar33;
    float fVar34;
    float fVar35;
    undefined4 uVar36;
    float fVar37;
    float fVar38;
    undefined4 uVar39;
    undefined in_XMM14 [16];
    undefined auVar40 [16];
    float local_res18 [2];
    float local_res20;
    undefined local_128 [8];
    float fStack288;
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined local_108 [8];
    float fStack256;
    undefined local_f8 [8];
    float fStack240;
    float fStack236;
    char cVar4;
    char cVar5;
    undefined4 uVar19;
    undefined6 uVar20;

    fVar37 = 0.0;
    fVar38 = 1.0;
    uVar39 = 0;
    local_118 = (*(float *)(param_4 + 0x50) - *(float *)(param_3 + 0x50)) * param_5 +
                *(float *)(param_3 + 0x50);
    fStack276 = (*(float *)(param_4 + 0x54) - *(float *)(param_3 + 0x54)) * param_5 +
                *(float *)(param_3 + 0x54);
    fStack272 = (*(float *)(param_4 + 0x58) - *(float *)(param_3 + 0x58)) * param_5 +
                *(float *)(param_3 + 0x58);
    fStack268 = (*(float *)(param_4 + 0x5c) - *(float *)(param_3 + 0x5c)) * param_5 +
                *(float *)(param_3 + 0x5c);
    fVar24 = (*(float *)(param_4 + 0x60) - *(float *)(param_3 + 0x60)) * param_5 +
             *(float *)(param_3 + 0x60);
    fVar25 = (*(float *)(param_4 + 100) - *(float *)(param_3 + 100)) * param_5 +
             *(float *)(param_3 + 100);
    fVar26 = (*(float *)(param_4 + 0x68) - *(float *)(param_3 + 0x68)) * param_5 +
             *(float *)(param_3 + 0x68);
    fVar27 = (*(float *)(param_4 + 0x6c) - *(float *)(param_3 + 0x6c)) * param_5 +
             *(float *)(param_3 + 0x6c);
    fVar33 = 0.0;
    auVar40 = in_XMM14 & (undefined  [16])0x0;
    _local_108 = CONCAT412(param_5,CONCAT48(param_5,CONCAT44(param_5,param_5)));
    fVar28 = local_118 - *param_6;
    fVar29 = fStack276 - param_6[1];
    fVar30 = fStack272 - param_6[2];
    fVar31 = fStack268 - param_6[3];
    fVar21 = fVar25 * fVar25;
    fVar23 = fVar24 * fVar24 + fVar21 + fVar26 * fVar26;
    fVar22 = fVar29 * fVar29;
    auVar14 = rsqrtss(CONCAT412(fVar21,CONCAT48(fVar21,CONCAT44(fVar21,fVar21))),
                      CONCAT124(SUB1612(CONCAT412(fVar27 * fVar27,
                                                  CONCAT48(fVar26 * fVar26,
                                                           CONCAT44(fVar21,fVar24 * fVar24))) >> 0x20,
                                        0),fVar23));
    fVar21 = SUB164(auVar14,0);
    fVar21 = (3.0 - fVar23 * fVar21 * fVar21) * 0.5 * fVar21;
    if (fVar21 <= 0.0) {
        fVar21 = fVar33;
    }
    fVar23 = fVar28 * fVar28 + fVar22 + fVar30 * fVar30;
    auVar14 = rsqrtss(CONCAT412(fVar22,CONCAT48(fVar22,CONCAT44(fVar22,fVar22))),
                      CONCAT124(SUB1612(CONCAT412(fVar31 * fVar31,
                                                  CONCAT48(fVar30 * fVar30,
                                                           CONCAT44(fVar22,fVar28 * fVar28))) >> 0x20,
                                        0),fVar23));
    fVar22 = SUB164(auVar14,0);
    fVar22 = (3.0 - fVar23 * fVar22 * fVar22) * 0.5 * fVar22;
    if (fVar22 <= 0.0) {
        fVar22 = fVar33;
    }
    fVar23 = fVar22 * fVar29 * 0.0 - fVar21 * fVar25 * fVar22 * fVar30;
    fVar26 = fVar21 * fVar24 * 0.0 - fVar21 * fVar26 * fVar22 * fVar28;
    fVar24 = fVar21 * fVar25 * fVar22 * fVar28 - fVar21 * fVar24 * fVar22 * fVar29;
    fVar21 = fVar21 * fVar27 * fVar22 * fVar31 - fVar21 * fVar27 * fVar22 * fVar31;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 2) == 0) {
        fVar22 = 1.0;
    }
    else {
        fVar22 = SQRT(fVar23 * fVar23 + fVar26 * fVar26 + fVar24 * fVar24);
        fVar22 = fVar22 + (*param_7 - fVar22) * 0.0;
        *param_7 = fVar22;
    }
    uVar36 = 0;
    fVar25 = fVar26 * fVar26;
    uVar12 = 0;
    local_res18[0] = 0.0;
    fVar29 = ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * param_5 + *(float *)(param_3 + 8))
             * param_9;
    fVar28 = (*(float *)(param_4 + 0xc) - *(float *)(param_3 + 0xc)) * param_5 +
             *(float *)(param_3 + 0xc);
    fVar27 = fVar23 * fVar23 + fVar25 + fVar24 * fVar24;
    param_9 = 0.0;
    auVar14 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                      CONCAT124(SUB1612(CONCAT412(fVar21 * fVar21,
                                                  CONCAT48(fVar24 * fVar24,
                                                           CONCAT44(fVar25,fVar23 * fVar23))) >> 0x20,
                                        0),fVar27));
    fVar21 = SUB164(auVar14,0);
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430);
    fVar21 = (3.0 - fVar27 * fVar21 * fVar21) * 0.5 * fVar21;
    if (fVar21 <= 0.0) {
        fVar21 = fVar33;
    }
    fVar23 = fVar21 * fVar23;
    fVar26 = fVar21 * fVar26;
    fVar21 = fVar21 * fVar24;
    fVar24 = ((float)(*(int *)(param_4 + 0x18) - *(int *)(param_3 + 0x18)) * param_5 +
              (float)*(int *)(param_3 + 0x18)) * *(float *)(param_1 + 0x5f4);
    _local_128 = CONCAT412((*(float *)(param_4 + 0x2c) - *(float *)(param_3 + 0x2c)) * param_5 +
                           *(float *)(param_3 + 0x2c),
                           CONCAT48((*(float *)(param_4 + 0x28) - *(float *)(param_3 + 0x28)) *
                                    param_5 + *(float *)(param_3 + 0x28),
                                    CONCAT44((*(float *)(param_4 + 0x24) - *(float *)(param_3 + 0x24))
                                             * param_5 + *(float *)(param_3 + 0x24),
                                             (*(float *)(param_4 + 0x20) - *(float *)(param_3 + 0x20))
                                             * param_5 + *(float *)(param_3 + 0x20))));
    fVar25 = (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) * param_5 + *(float *)(param_3 + 4);
    param_5 = fVar24;
    if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
            param_6 = local_res18;
        }
        else if (cVar1 == '\x02') {
            param_6 = &param_9;
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) >> 0xb & 1) == 0) {
            FUN_1408fe3d0();
            *param_6 = extraout_XMM0_Da_05 * *(float *)(param_1 + 0x4c0);
        }
        else {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res20 = extraout_XMM0_Da;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            param_8 = extraout_XMM0_Da_00;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            param_6._0_4_ = extraout_XMM0_Da_01;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar24 = param_8 + local_res20 + param_6._0_4_;
            if (fVar24 == fVar37) {
                *param_6 = 0.0;
                fVar24 = param_5;
            }
            else {
                FUN_1408fe3d0();
                fVar27 = extraout_XMM0_Da_02 * param_8;
                FUN_1408fe3d0();
                fVar27 = fVar27 + extraout_XMM0_Da_03 * local_res20;
                FUN_1408fe3d0();
                *param_6 = ((fVar27 + extraout_XMM0_Da_04 * param_6._0_4_) * *(float *)(param_1 + 0x4c0)) /
                           fVar24;
                fVar24 = param_5;
            }
        }
        fVar30 = SUB164(auVar40,0);
        fVar27 = *param_6;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x2000) != 0) {
            fVar31 = fVar37;
            if (fVar37 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar31 = (float)((uint)((fVar28 - *(float *)(*(longlong *)(param_1 + 0x588) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar31 < *(float *)(param_1 + 0x4a0)) {
                fVar31 = fVar31 * *(float *)(param_1 + 0x5f0);
                if (fVar38 <= fVar31) {
                    fVar31 = fVar38;
                }
                auVar14 = auVar40;
                if (fVar30 <= fVar31) {
                    auVar14 = CONCAT124(SUB1612(auVar40 >> 0x20,0),fVar31);
                }
                *param_6 = SUB164(auVar14,0) * fVar27;
            }
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x4000) != 0) {
            fVar31 = fVar37;
            if (fVar37 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar31 = (float)((uint)((fVar28 - *(float *)(*(longlong *)(param_1 + 0x590) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar31 < *(float *)(param_1 + 0x4a0)) {
                fVar31 = fVar31 * *(float *)(param_1 + 0x5f0);
                if (fVar38 <= fVar31) {
                    fVar31 = fVar38;
                }
                if (fVar30 <= fVar31) {
                    fVar30 = fVar31;
                }
                fVar30 = fVar30 * fVar27;
                if ((float)((uint)fVar30 & 0x7fffffff) < (float)((uint)*param_6 & 0x7fffffff)) {
                    *param_6 = fVar30;
                }
            }
        }
    }
    pfVar9 = param_10;
    pfVar2 = *param_2;
    fVar31 = 0.5;
    fVar22 = fVar29 * 0.5 * fVar22;
    fVar27 = fVar22 + param_9;
    local_128._0_4_ = local_128._0_4_ * *param_10;
    local_128._4_4_ = local_128._4_4_ * param_10[1];
    fStack288 = fStack288 * param_10[2];
    fVar29 = fVar25 * param_10[3];
    _local_f8 = CONCAT412(fVar29,CONCAT48(fStack288,CONCAT44(local_128._4_4_,local_128._0_4_)));
    *pfVar2 = local_118 - fVar27 * fVar23;
    pfVar2[1] = fStack276 - fVar27 * fVar26;
    pfVar2[2] = fStack272 - fVar27 * fVar21;
    auVar14 = maxps(auVar40,_local_f8);
    auVar14 = minps(auVar14,_DAT_140b7b240);
    iVar13 = (int)(SUB164(auVar14,0) * 255.0 + 0.5);
    iVar15 = (int)(SUB164(auVar14 >> 0x20,0) * 255.0 + 0.5);
    iVar16 = (int)(SUB164(auVar14 >> 0x40,0) * 255.0 + 0.5);
    iVar17 = (int)(SUB164(auVar14 >> 0x60,0) * 255.0 + 0.5);
    sVar6 = (short)iVar16;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    sVar18 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar15;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar15 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar15 >> 0x10);
    uVar19 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar15 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar18));
    sVar6 = (short)iVar13;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar13 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar13 >> 0x10);
    uVar20 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar13 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar19));
    sVar6 = (short)iVar17;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar17 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar17 >> 0x10);
    sVar6 = (short)((uint)uVar19 >> 0x10);
    sVar7 = (short)((uint6)uVar20 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar17 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar20)) >> 0x30);
    (*param_2)[3] =
            (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                            CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                     CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                              (0 < sVar18) * (sVar18 < 0xff) * cVar1 - (0xff < sVar18))))
            ;
    fVar27 = param_9;
    fVar30 = local_res18[0];
    FUN_1401c96d0(&param_8);
    uVar19 = extraout_XMM0_Db;
    FUN_1401c96d0();
    uVar11 = (uint)fVar24 & 0x7fffffff;
    (*param_2)[4] = param_8;
    if (uVar11 < 0x33800000) {
        uVar10 = 0;
    }
    else if (uVar11 < 0x387ff000) {
        uVar10 = (ushort)((((uint)fVar24 & 0x7fffff | 0x800000) >>
                                                                (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
    }
    else if (uVar11 < 0x47fff000) {
        uVar10 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
    }
    else {
        uVar10 = 0x43ff;
    }
    *(ushort *)(*param_2 + 5) = uVar10 | (ushort)((uint)fVar24 >> 0x10) & 0x8000;
    param_8 = fVar24;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        fVar24 = fVar28;
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) != 0) {
            fVar24 = (fVar28 - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
            uVar19 = uVar36;
        }
        auVar32 = SUB1612(CONCAT88(SUB168(CONCAT412(uVar19,CONCAT48(fVar38,CONCAT44(fVar38,fVar24))) >>
                                                                                                     0x40,0),CONCAT44(fVar38,fVar24)),0) &
                  SUB1612((undefined  [16])0xffffffffffffffff,0);
        FUN_140325540((longlong)*param_2 + 0x16,param_1 + 0x490);
        fVar24 = SUB124(auVar32 >> 0x20,0);
        fVar27 = SUB124(auVar32 >> 0x40,0);
        _local_128 = CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(*(float *)(param_1 + 0x5b0) *
                                                               SUB124(auVar32,0) +
                                                               *(float *)(param_1 + 0x5b4) * fVar24 +
                                                               *(float *)(param_1 + 0x5b8) * fVar27,
                                                               *(float *)(param_1 + 0x5a0) *
                                                               SUB124(auVar32,0) +
                                                               *(float *)(param_1 + 0x5a4) * fVar24 +
                                                               *(float *)(param_1 + 0x5a8) * fVar27)));
        FUN_1401c95b0(&param_8,local_128);
        fVar31 = 0.5;
        (*param_2)[6] = param_8;
        fVar27 = param_9;
        fVar24 = param_5;
    }
    *param_2 = (float *)((longlong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x598));
    pfVar2 = *param_2;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) != 0) {
        fVar33 = ((*(float *)(param_4 + 0x30) - *(float *)(param_3 + 0x30)) * local_108._0_4_ +
                  *(float *)(param_3 + 0x30)) * *pfVar9;
        fVar34 = ((*(float *)(param_4 + 0x34) - *(float *)(param_3 + 0x34)) * local_108._4_4_ +
                  *(float *)(param_3 + 0x34)) * pfVar9[1];
        fVar35 = ((*(float *)(param_4 + 0x38) - *(float *)(param_3 + 0x38)) * fStack256 +
                  *(float *)(param_3 + 0x38)) * pfVar9[2];
        local_128._0_4_ = (fVar33 + local_f8._0_4_) * 0.5;
        local_128._4_4_ = (fVar34 + local_f8._4_4_) * 0.5;
        fStack288 = (fVar35 + fStack240) * 0.5;
        fVar29 = (fVar25 * pfVar9[3] + fStack236) * 0.5;
        local_f8._0_4_ = fVar33;
        local_f8._4_4_ = fVar34;
        fStack240 = fVar35;
        fStack236 = fVar25 * pfVar9[3];
    }
    *pfVar2 = local_118 - fVar27 * fVar23;
    pfVar2[1] = fStack276 - fVar27 * fVar26;
    pfVar2[2] = fStack272 - fVar27 * fVar21;
    auVar14 = maxps(auVar40,CONCAT412(fVar29,CONCAT48(fStack288,
                                                      CONCAT44(local_128._4_4_,local_128._0_4_))));
    auVar14 = minps(auVar14,_DAT_140b7b240);
    iVar13 = (int)(SUB164(auVar14,0) * 255.0 + 0.5);
    iVar15 = (int)(SUB164(auVar14 >> 0x20,0) * 255.0 + 0.5);
    iVar16 = (int)(SUB164(auVar14 >> 0x40,0) * 255.0 + 0.5);
    iVar17 = (int)(SUB164(auVar14 >> 0x60,0) * 255.0 + 0.5);
    sVar6 = (short)iVar16;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    sVar18 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar15;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar15 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar15 >> 0x10);
    uVar36 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar15 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar18));
    sVar6 = (short)iVar13;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar13 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar13 >> 0x10);
    uVar20 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar13 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar36));
    sVar6 = (short)iVar17;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar17 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar17 >> 0x10);
    sVar6 = (short)((uint)uVar36 >> 0x10);
    sVar7 = (short)((uint6)uVar20 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar17 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar20)) >> 0x30);
    (*param_2)[3] =
            (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                            CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                     CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                              (0 < sVar18) * (sVar18 < 0xff) * cVar1 - (0xff < sVar18))))
            ;
    _local_f8 = CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(*(float *)(param_1 + 0x578) + fVar31 +
                                                          fVar30,fVar28 + *(float *)(param_1 + 0x574))
    ));
    FUN_1401c95b0(&param_8,local_f8);
    (*param_2)[4] = param_8;
    uVar11 = (uint)fVar24 & 0x7fffffff;
    if (uVar11 < 0x33800000) {
        uVar10 = 0;
    }
    else if (uVar11 < 0x387ff000) {
        uVar10 = (ushort)((((uint)fVar24 & 0x7fffff | 0x800000) >>
                                                                (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
    }
    else if (uVar11 < 0x47fff000) {
        uVar10 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
    }
    else {
        uVar10 = 0x43ff;
    }
    *(ushort *)(*param_2 + 5) = uVar10 | (ushort)((uint)fVar24 >> 0x10) & 0x8000;
    param_8 = fVar24;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        fVar24 = fVar28;
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) != 0) {
            fVar24 = (fVar28 - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
        }
        auVar32 = (SUB1612(CONCAT88(SUB168(CONCAT412(uVar39,CONCAT48(fVar38,CONCAT44(fVar38,fVar24))) >>
                                                                                                      0x40,0),(ulonglong)(uint)fVar24),0) |
        SUB1612((undefined  [16])0x3f00000000000000,0)) &
                SUB1612((undefined  [16])0xffffffffffffffff,0);
        FUN_140325540((longlong)*param_2 + 0x16,param_1 + 0x490);
        fVar24 = SUB124(auVar32 >> 0x20,0);
        fVar25 = SUB124(auVar32 >> 0x40,0);
        _local_f8 = CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(*(float *)(param_1 + 0x5b0) *
                                                              SUB124(auVar32,0) +
                                                              *(float *)(param_1 + 0x5b4) * fVar24 +
                                                              *(float *)(param_1 + 0x5b8) * fVar25,
                                                              *(float *)(param_1 + 0x5a0) *
                                                              SUB124(auVar32,0) +
                                                              *(float *)(param_1 + 0x5a4) * fVar24 +
                                                              *(float *)(param_1 + 0x5a8) * fVar25)));
        FUN_1401c95b0(&param_8,local_f8);
        (*param_2)[6] = param_8;
        fVar24 = param_5;
    }
    *param_2 = (float *)((longlong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x598));
    pfVar2 = *param_2;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) != 0) {
        local_128._0_4_ = local_f8._0_4_;
        local_128._4_4_ = local_f8._4_4_;
        fStack288 = fStack240;
        fVar29 = fStack236;
    }
    fVar22 = fVar22 - param_9;
    auVar14 = maxps(auVar40,CONCAT412(fVar29,CONCAT48(fStack288,
                                                      CONCAT44(local_128._4_4_,local_128._0_4_))));
    auVar14 = minps(auVar14,_DAT_140b7b240);
    *pfVar2 = fVar22 * fVar23 + local_118;
    pfVar2[1] = fVar22 * fVar26 + fStack276;
    pfVar2[2] = fVar22 * fVar21 + fStack272;
    iVar13 = (int)(SUB164(auVar14,0) * 255.0 + 0.5);
    iVar15 = (int)(SUB164(auVar14 >> 0x20,0) * 255.0 + 0.5);
    iVar16 = (int)(SUB164(auVar14 >> 0x40,0) * 255.0 + 0.5);
    iVar17 = (int)(SUB164(auVar14 >> 0x60,0) * 255.0 + 0.5);
    sVar6 = (short)iVar16;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    sVar18 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar15;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar15 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar15 >> 0x10);
    uVar36 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar15 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar18));
    sVar6 = (short)iVar13;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar13 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar13 >> 0x10);
    uVar20 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar13 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar36));
    sVar6 = (short)iVar17;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar17 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar17 >> 0x10);
    sVar6 = (short)((uint)uVar36 >> 0x10);
    sVar7 = (short)((uint6)uVar20 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar17 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar20)) >> 0x30);
    (*param_2)[3] =
            (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                            CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                     CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                              (0 < sVar18) * (sVar18 < 0xff) * cVar1 - (0xff < sVar18))))
            ;
    _local_f8 = CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(*(float *)(param_1 + 0x578) + fVar38 +
                                                          fVar30,fVar28 + *(float *)(param_1 + 0x574))
    ));
    FUN_1401c95b0(&param_5,local_f8);
    (*param_2)[4] = param_5;
    uVar11 = (uint)fVar24 & 0x7fffffff;
    if (0x337fffff < uVar11) {
        if (uVar11 < 0x387ff000) {
            uVar12 = (ushort)((((uint)fVar24 & 0x7fffff | 0x800000) >>
                                                                    (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar11 < 0x47fff000) {
            uVar12 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
        }
        else {
            uVar12 = 0x43ff;
        }
    }
    *(ushort *)(*param_2 + 5) = uVar12 | (ushort)((uint)fVar24 >> 0x10) & 0x8000;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) != 0) {
            fVar28 = (fVar28 - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
        }
        auVar32 = (SUB1612(CONCAT88(SUB168(CONCAT412(uVar39,CONCAT48(fVar38,CONCAT44(fVar38,fVar28))) >>
                                                                                                      0x40,0),(ulonglong)(uint)fVar28),0) |
        SUB1612((undefined  [16])0x3f80000000000000,0)) &
                SUB1612((undefined  [16])0xffffffffffffffff,0);
        param_5 = fVar24;
        FUN_140325540((longlong)*param_2 + 0x16,param_1 + 0x490);
        fVar21 = SUB124(auVar32 >> 0x20,0);
        fVar22 = SUB124(auVar32 >> 0x40,0);
        _local_f8 = CONCAT412(fVar37,CONCAT48(fVar37,CONCAT44(*(float *)(param_1 + 0x5b0) *
                                                              SUB124(auVar32,0) +
                                                              *(float *)(param_1 + 0x5b4) * fVar21 +
                                                              *(float *)(param_1 + 0x5b8) * fVar22,
                                                              *(float *)(param_1 + 0x5a0) *
                                                              SUB124(auVar32,0) +
                                                              *(float *)(param_1 + 0x5a4) * fVar21 +
                                                              *(float *)(param_1 + 0x5a8) * fVar22)));
        FUN_1401c95b0(&param_5,local_f8);
        (*param_2)[6] = param_5;
    }
    *param_2 = (float *)((longlong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x598));
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403220c0(longlong param_1,float **param_2)

{
    char cVar1;
    float *pfVar2;
    char cVar3;
    short sVar6;
    short sVar7;
    short sVar8;
    undefined (*pauVar9) [16];
    ushort uVar10;
    uint uVar11;
    ushort uVar12;
    float *pfVar13;
    float *pfVar14;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float fVar15;
    int iVar16;
    int iVar18;
    int iVar19;
    undefined auVar17 [16];
    int iVar20;
    short sVar21;
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
    float fVar36;
    undefined in_XMM7 [16];
    undefined auVar35 [16];
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float local_res8;
    uint uStackX12;
    float local_res10 [2];
    float local_res18;
    float local_res20;
    undefined local_108 [8];
    float fStack256;
    float fStack252;
    undefined local_f8 [8];
    float fStack240;
    float fStack236;
    undefined local_e8 [16];
    char cVar4;
    char cVar5;
    undefined4 uVar22;
    undefined6 uVar23;

    pfVar2 = param_2[1];
    _local_f8 = *(undefined (*) [16])(param_2 + 4);
    pfVar13 = *param_2;
    fVar34 = 0.0;
    auVar35 = in_XMM7 & (undefined  [16])0x0;
    fVar32 = pfVar2[0x18];
    fVar33 = pfVar2[0x19];
    fVar31 = pfVar2[0x1a];
    fVar37 = pfVar2[0x1b];
    fVar27 = pfVar2[0x14] - *(float *)(param_2 + 2);
    fVar28 = pfVar2[0x15] - *(float *)((longlong)param_2 + 0x14);
    fVar29 = pfVar2[0x16] - *(float *)(param_2 + 3);
    fVar30 = pfVar2[0x17] - *(float *)((longlong)param_2 + 0x1c);
    fVar24 = fVar33 * fVar33;
    fVar42 = 1.0;
    fVar26 = fVar32 * fVar32 + fVar24 + fVar31 * fVar31;
    auVar17 = rsqrtss(CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24))),
                      CONCAT124(SUB1612(CONCAT412(fVar37 * fVar37,
                                                  CONCAT48(fVar31 * fVar31,
                                                           CONCAT44(fVar24,fVar32 * fVar32))) >> 0x20,
                                        0),fVar26));
    fVar24 = SUB164(auVar17,0);
    fVar25 = fVar28 * fVar28;
    fVar24 = (3.0 - fVar26 * fVar24 * fVar24) * 0.5 * fVar24;
    if (fVar24 <= 0.0) {
        fVar24 = fVar34;
    }
    fVar26 = fVar27 * fVar27 + fVar25 + fVar29 * fVar29;
    auVar17 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,CONCAT44(fVar25,fVar25))),
                      CONCAT124(SUB1612(CONCAT412(fVar30 * fVar30,
                                                  CONCAT48(fVar29 * fVar29,
                                                           CONCAT44(fVar25,fVar27 * fVar27))) >> 0x20,
                                        0),fVar26));
    fVar25 = SUB164(auVar17,0);
    fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
    if (fVar25 <= 0.0) {
        fVar25 = fVar34;
    }
    fVar26 = fVar25 * fVar28 * 0.0 - fVar24 * fVar33 * fVar25 * fVar29;
    fVar31 = fVar24 * fVar32 * 0.0 - fVar24 * fVar31 * fVar25 * fVar27;
    fVar32 = fVar24 * fVar33 * fVar25 * fVar27 - fVar24 * fVar32 * fVar25 * fVar28;
    fVar33 = fVar24 * fVar37 * fVar25 * fVar30 - fVar24 * fVar37 * fVar25 * fVar30;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 2) == 0) {
        fVar37 = 1.0;
    }
    else {
        fVar37 = SQRT(fVar26 * fVar26 + fVar31 * fVar31 + fVar32 * fVar32);
        fVar37 = fVar37 + (*(float *)(param_2 + 6) - fVar37) * *(float *)((longlong)param_2 + 0x34);
        *(float *)(param_2 + 6) = fVar37;
    }
    fVar27 = 0.0;
    uVar12 = 0;
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430);
    fVar24 = fVar31 * fVar31;
    fVar28 = (float)(int)pfVar2[6] * *(float *)(param_1 + 0x5f4);
    local_res8 = 0.0;
    local_res10[0] = 0.0;
    fVar25 = fVar26 * fVar26 + fVar24 + fVar32 * fVar32;
    auVar17 = rsqrtss(CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24))),
                      CONCAT124(SUB1612(CONCAT412(fVar33 * fVar33,
                                                  CONCAT48(fVar32 * fVar32,
                                                           CONCAT44(fVar24,fVar26 * fVar26))) >> 0x20,
                                        0),fVar25));
    fVar33 = SUB164(auVar17,0);
    fVar33 = (3.0 - fVar25 * fVar33 * fVar33) * 0.5 * fVar33;
    if (fVar33 <= 0.0) {
        fVar33 = fVar34;
    }
    fVar26 = fVar33 * fVar26;
    fVar31 = fVar33 * fVar31;
    fVar33 = fVar33 * fVar32;
    if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
            pfVar14 = &local_res8;
        }
        else if (cVar1 == '\x02') {
            pfVar14 = local_res10;
        }
        else {
            pfVar14 = (float *)((ulonglong)uStackX12 << 0x20);
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) >> 0xb & 1) == 0) {
            FUN_1408fe3d0();
            *pfVar14 = extraout_XMM0_Da_05 * *(float *)(param_1 + 0x4c0);
        }
        else {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                    (SUB168(auVar17,0),*(longlong **)(param_1 + 0x38),pfVar2[5]);
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res18 = extraout_XMM0_Da_00;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res20 = extraout_XMM0_Da_01;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar32 = local_res18 + extraout_XMM0_Da + local_res20;
            if (fVar32 == fVar27) {
                *pfVar14 = 0.0;
                auVar35 = ZEXT416(0);
            }
            else {
                fVar24 = extraout_XMM0_Da;
                FUN_1408fe3d0();
                local_res18 = extraout_XMM0_Da_02 * local_res18;
                FUN_1408fe3d0();
                local_res18 = local_res18 + extraout_XMM0_Da_03 * fVar24;
                FUN_1408fe3d0();
                auVar35 = ZEXT1216(ZEXT812(0));
                *pfVar14 = ((local_res18 + extraout_XMM0_Da_04 * local_res20) * *(float *)(param_1 + 0x4c0))
                           / fVar32;
            }
        }
        fVar24 = SUB164(auVar35,0);
        fVar32 = *pfVar14;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x2000) != 0) {
            fVar25 = fVar27;
            if (fVar27 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar25 = (float)((uint)((pfVar2[3] - *(float *)(*(longlong *)(param_1 + 0x588) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar25 < *(float *)(param_1 + 0x4a0)) {
                fVar25 = fVar25 * *(float *)(param_1 + 0x5f0);
                if (fVar42 <= fVar25) {
                    fVar25 = fVar42;
                }
                auVar17 = auVar35;
                if (fVar24 <= fVar25) {
                    auVar17 = CONCAT124(SUB1612(auVar35 >> 0x20,0),fVar25);
                }
                *pfVar14 = SUB164(auVar17,0) * fVar32;
            }
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x4000) != 0) {
            fVar25 = fVar27;
            if (fVar27 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar25 = (float)((uint)((pfVar2[3] - *(float *)(*(longlong *)(param_1 + 0x590) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar25 < *(float *)(param_1 + 0x4a0)) {
                fVar25 = fVar25 * *(float *)(param_1 + 0x5f0);
                if (fVar42 <= fVar25) {
                    fVar25 = fVar42;
                }
                if (fVar24 <= fVar25) {
                    fVar24 = fVar25;
                }
                fVar24 = fVar24 * fVar32;
                if ((float)((uint)fVar24 & 0x7fffffff) < (float)((uint)*pfVar14 & 0x7fffffff)) {
                    *pfVar14 = fVar24;
                }
            }
        }
    }
    fVar32 = pfVar2[1];
    fVar24 = pfVar2[10];
    fVar25 = pfVar2[9];
    fVar29 = *(float *)*(undefined (*) [12])(pfVar2 + 8);
    fVar37 = pfVar2[2] * 0.5 * fVar37 * *(float *)(param_2 + 7);
    local_e8 = CONCAT412(fVar32,*(undefined (*) [12])(pfVar2 + 8));
    if (*(int *)((longlong)param_2 + 0x3c) != 0) {
        fVar29 = fVar29 * local_f8._0_4_;
        fVar25 = fVar25 * local_f8._4_4_;
        fVar24 = fVar24 * fStack240;
        fVar32 = fVar32 * fStack236;
        local_e8 = CONCAT412(fVar32,CONCAT48(fVar24,CONCAT44(fVar25,fVar29)));
    }
    fVar30 = pfVar2[0x15];
    fVar34 = pfVar2[0x16];
    fVar38 = 0.5;
    fVar39 = 0.5;
    fVar40 = 0.5;
    fVar41 = 0.5;
    fVar15 = fVar37 + local_res10[0];
    *pfVar13 = pfVar2[0x14] - fVar15 * fVar26;
    pfVar13[1] = fVar30 - fVar15 * fVar31;
    pfVar13[2] = fVar34 - fVar15 * fVar33;
    auVar17 = maxps(auVar35,CONCAT412(fVar32,CONCAT48(fVar24,CONCAT44(fVar25,fVar29))));
    auVar17 = minps(auVar17,_DAT_140b7b240);
    iVar16 = (int)(SUB164(auVar17,0) * 255.0 + 0.5);
    iVar18 = (int)(SUB164(auVar17 >> 0x20,0) * 255.0 + 0.5);
    iVar19 = (int)(SUB164(auVar17 >> 0x40,0) * 255.0 + 0.5);
    iVar20 = (int)(SUB164(auVar17 >> 0x60,0) * 255.0 + 0.5);
    sVar6 = (short)iVar19;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar19 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar19 >> 0x10);
    sVar21 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar19 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar18;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar18 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar18 >> 0x10);
    uVar22 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar18 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar21));
    sVar6 = (short)iVar16;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    uVar23 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar22));
    sVar6 = (short)iVar20;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar20 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar20 >> 0x10);
    sVar6 = (short)((uint)uVar22 >> 0x10);
    sVar7 = (short)((uint6)uVar23 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar20 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar23)) >> 0x30);
    pfVar13[3] = (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                 CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                          CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                   (0xff < sVar6),
                                                   (0 < sVar21) * (sVar21 < 0xff) * cVar1 -
                                                   (0xff < sVar21))));
    uVar22 = 0;
    _local_108 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(local_res8 + *(float *)(param_1 + 0x578),
                                                           *(float *)(param_1 + 0x574) + pfVar2[3])));
    fVar30 = local_res10[0];
    fVar34 = local_res8;
    FUN_1401c95b0();
    pfVar13[4] = local_res8;
    uVar11 = (uint)fVar28 & 0x7fffffff;
    if (uVar11 < 0x33800000) {
        uVar10 = 0;
    }
    else if (uVar11 < 0x387ff000) {
        uVar10 = (ushort)((((uint)fVar28 & 0x7fffff | 0x800000) >>
                                                                (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
    }
    else if (uVar11 < 0x47fff000) {
        uVar10 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
    }
    else {
        uVar10 = 0x43ff;
    }
    *(ushort *)(pfVar13 + 5) = uVar10 | (ushort)((uint)fVar28 >> 0x10) & 0x8000;
    local_res8 = fVar28;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) == 0) {
            fVar15 = pfVar2[3];
        }
        else {
            fVar15 = (pfVar2[3] - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
            uVar22 = 0;
        }
        auVar35 = CONCAT88(SUB168(CONCAT412(uVar22,CONCAT48(fVar42,CONCAT44(fVar42,fVar15))) >> 0x40,0),
                           CONCAT44(fVar42,fVar15)) & (undefined  [16])0xffffffffffffffff;
        FUN_140325540((longlong)pfVar13 + 0x16,param_1 + 0x490);
        fVar15 = SUB164(auVar35 >> 0x20,0);
        fVar36 = SUB164(auVar35 >> 0x40,0);
        _local_108 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(*(float *)(param_1 + 0x5b0) *
                                                               SUB164(auVar35,0) +
                                                               *(float *)(param_1 + 0x5b4) * fVar15 +
                                                               *(float *)(param_1 + 0x5b8) * fVar36,
                                                               *(float *)(param_1 + 0x5a0) *
                                                               SUB164(auVar35,0) +
                                                               *(float *)(param_1 + 0x5a4) * fVar15 +
                                                               *(float *)(param_1 + 0x5a8) * fVar36)));
        FUN_1401c95b0(&local_res8);
        pfVar13[6] = local_res8;
        auVar35 = auVar35 & (undefined  [16])0x0;
    }
    pfVar13 = (float *)((longlong)pfVar13 + (ulonglong)*(uint *)(param_1 + 0x598));
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) == 0) {
    }
    else {
        fStack252 = pfVar2[1];
        fStack256 = pfVar2[0xe];
        local_108._4_4_ = pfVar2[0xd];
        local_108._0_4_ = *(float *)*(undefined (*) [12])(pfVar2 + 0xc);
        _local_108 = CONCAT412(fStack252,*(undefined (*) [12])(pfVar2 + 0xc));
        if (*(int *)((longlong)param_2 + 0x3c) != 0) {
            local_108._0_4_ = local_108._0_4_ * local_f8._0_4_;
            local_108._4_4_ = local_108._4_4_ * local_f8._4_4_;
            fStack256 = fStack256 * fStack240;
            fStack252 = fStack252 * fStack236;
            _local_108 = CONCAT412(fStack252,CONCAT48(fStack256,CONCAT44(local_108._4_4_,local_108._0_4_))
            );
        }
    }
    fVar15 = pfVar2[0x15];
    fVar36 = pfVar2[0x16];
    *pfVar13 = pfVar2[0x14] - fVar30 * fVar26;
    pfVar13[1] = fVar15 - fVar30 * fVar31;
    pfVar13[2] = fVar36 - fVar30 * fVar33;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) == 0) {
        _local_f8 = CONCAT412(fVar32,CONCAT48(fVar24,CONCAT44(fVar25,fVar29)));
    }
    else {
        _local_f8 = CONCAT412((fStack252 + fVar32) * fVar41,
                              CONCAT48((fStack256 + fVar24) * fVar40,
                                       CONCAT44((local_108._4_4_ + fVar25) * fVar39,
                                                (local_108._0_4_ + fVar29) * fVar38)));
    }
    auVar17 = maxps(auVar35,_local_f8);
    auVar17 = minps(auVar17,_DAT_140b7b240);
    iVar16 = (int)(SUB164(auVar17,0) * 255.0 + fVar38);
    iVar18 = (int)(SUB164(auVar17 >> 0x20,0) * 255.0 + fVar39);
    iVar19 = (int)(SUB164(auVar17 >> 0x40,0) * 255.0 + fVar40);
    iVar20 = (int)(SUB164(auVar17 >> 0x60,0) * 255.0 + fVar41);
    sVar6 = (short)iVar19;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar19 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar19 >> 0x10);
    sVar21 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar19 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar18;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar18 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar18 >> 0x10);
    uVar22 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar18 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar21));
    sVar6 = (short)iVar16;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    uVar23 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar22));
    sVar6 = (short)iVar20;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar20 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar20 >> 0x10);
    sVar6 = (short)((uint)uVar22 >> 0x10);
    sVar7 = (short)((uint6)uVar23 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar20 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar23)) >> 0x30);
    pfVar13[3] = (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                 CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                          CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                   (0xff < sVar6),
                                                   (0 < sVar21) * (sVar21 < 0xff) * cVar1 -
                                                   (0xff < sVar21))));
    _local_f8 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(*(float *)(param_1 + 0x578) + 0.5 + fVar34,
                                                          *(float *)(param_1 + 0x574) + pfVar2[3])));
    FUN_1401c95b0();
    pfVar13[4] = local_res8;
    uVar11 = (uint)fVar28 & 0x7fffffff;
    if (uVar11 < 0x33800000) {
        uVar10 = 0;
    }
    else if (uVar11 < 0x387ff000) {
        uVar10 = (ushort)((((uint)fVar28 & 0x7fffff | 0x800000) >>
                                                                (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
    }
    else if (uVar11 < 0x47fff000) {
        uVar10 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
    }
    else {
        uVar10 = 0x43ff;
    }
    *(ushort *)(pfVar13 + 5) = uVar10 | (ushort)((uint)fVar28 >> 0x10) & 0x8000;
    fVar32 = fVar42;
    local_res8 = fVar28;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) == 0) {
            fVar24 = pfVar2[3];
        }
        else {
            fVar24 = (pfVar2[3] - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
        }
        fVar25 = 0.5;
        FUN_140325540((longlong)pfVar13 + 0x16,param_1 + 0x490);
        _local_f8 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(*(float *)(param_1 + 0x5b0) * fVar24 +
                                                              *(float *)(param_1 + 0x5b4) * fVar25 +
                                                              *(float *)(param_1 + 0x5b8) * fVar42,
                                                              *(float *)(param_1 + 0x5a0) * fVar24 +
                                                              *(float *)(param_1 + 0x5a4) * fVar25 +
                                                              *(float *)(param_1 + 0x5a8) * fVar42)));
        FUN_1401c95b0(&local_res8);
        pfVar13[6] = local_res8;
    }
    fVar24 = pfVar2[0x15];
    fVar25 = pfVar2[0x16];
    fVar37 = fVar37 - fVar30;
    pfVar13 = (float *)((longlong)pfVar13 + (ulonglong)*(uint *)(param_1 + 0x598));
    *pfVar13 = pfVar2[0x14] + fVar37 * fVar26;
    pfVar13[1] = fVar24 + fVar37 * fVar31;
    pfVar13[2] = fVar25 + fVar37 * fVar33;
    pauVar9 = (undefined (*) [16])local_108;
    if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) == 0) {
        pauVar9 = (undefined (*) [16])local_e8;
    }
    auVar17 = maxps(auVar35,*pauVar9);
    auVar17 = minps(auVar17,_DAT_140b7b240);
    iVar16 = (int)(SUB164(auVar17,0) * 255.0 + fVar38);
    iVar18 = (int)(SUB164(auVar17 >> 0x20,0) * 255.0 + fVar39);
    iVar19 = (int)(SUB164(auVar17 >> 0x40,0) * 255.0 + fVar40);
    iVar20 = (int)(SUB164(auVar17 >> 0x60,0) * 255.0 + fVar41);
    sVar6 = (short)iVar19;
    cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar19 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar19 >> 0x10);
    sVar21 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar19 >> 0x10) - (0xff < sVar6),
                      cVar1);
    sVar6 = (short)iVar18;
    cVar3 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar18 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar18 >> 0x10);
    uVar22 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar18 >> 0x10) - (0xff < sVar6),
                      CONCAT12(cVar3,sVar21));
    sVar6 = (short)iVar16;
    cVar4 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar16 - (0xff < sVar6);
    sVar6 = (short)((uint)iVar16 >> 0x10);
    uVar23 = CONCAT15((0 < sVar6) * (sVar6 < 0xff) * (char)((uint)iVar16 >> 0x10) - (0xff < sVar6),
                      CONCAT14(cVar4,uVar22));
    sVar6 = (short)iVar20;
    cVar5 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar20 - (0xff < sVar6);
    sVar8 = (short)((uint)iVar20 >> 0x10);
    sVar6 = (short)((uint)uVar22 >> 0x10);
    sVar7 = (short)((uint6)uVar23 >> 0x20);
    sVar8 = (short)(CONCAT17((0 < sVar8) * (sVar8 < 0xff) * (char)((uint)iVar20 >> 0x10) -
                             (0xff < sVar8),CONCAT16(cVar5,uVar23)) >> 0x30);
    pfVar13[3] = (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                 CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                          CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                   (0xff < sVar6),
                                                   (0 < sVar21) * (sVar21 < 0xff) * cVar1 -
                                                   (0xff < sVar21))));
    local_e8 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(*(float *)(param_1 + 0x578) + fVar32 + fVar34
            ,*(float *)(param_1 + 0x574) + pfVar2[3])));
    FUN_1401c95b0();
    pfVar13[4] = local_res8;
    uVar11 = (uint)fVar28 & 0x7fffffff;
    if (0x337fffff < uVar11) {
        if (uVar11 < 0x387ff000) {
            uVar12 = (ushort)((((uint)fVar28 & 0x7fffff | 0x800000) >>
                                                                    (0x71U - (char)(uVar11 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
        }
        else if (uVar11 < 0x47fff000) {
            uVar12 = (ushort)(uVar11 + 0xc8001000 >> 0xd);
        }
        else {
            uVar12 = 0x43ff;
        }
    }
    *(ushort *)(pfVar13 + 5) = uVar12 | (ushort)((uint)fVar28 >> 0x10) & 0x8000;
    if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) == 0) {
            fVar33 = pfVar2[3];
        }
        else {
            fVar33 = (pfVar2[3] - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
        }
        fVar31 = 1.0;
        local_res8 = fVar28;
        FUN_140325540((longlong)pfVar13 + 0x16,param_1 + 0x490);
        local_e8 = CONCAT412(fVar27,CONCAT48(fVar27,CONCAT44(*(float *)(param_1 + 0x5b0) * fVar33 +
                                                             *(float *)(param_1 + 0x5b4) * fVar31 +
                                                             *(float *)(param_1 + 0x5b8) * fVar32,
                                                             *(float *)(param_1 + 0x5a0) * fVar33 +
                                                             *(float *)(param_1 + 0x5a4) * fVar31 +
                                                             *(float *)(param_1 + 0x5a8) * fVar32)));
        FUN_1401c95b0(&local_res8);
        pfVar13[6] = local_res8;
    }
    *param_2 = (float *)((ulonglong)*(uint *)(param_1 + 0x598) + (longlong)pfVar13);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140322ce0(longlong param_1,float **param_2,longlong param_3,longlong param_4,float param_5,
                   float param_6,float *param_7)

{
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    char cVar7;
    float *pfVar8;
    char cVar9;
    short sVar12;
    short sVar13;
    short sVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    longlong lVar24;
    ushort uVar25;
    uint uVar26;
    float *pfVar27;
    ulonglong uVar28;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float fVar29;
    int iVar30;
    int iVar32;
    int iVar33;
    undefined auVar31 [16];
    int iVar34;
    short sVar35;
    float fVar36;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    undefined auVar43 [12];
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    undefined auVar44 [16];
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    undefined4 uVar53;
    undefined4 uVar54;
    undefined4 uVar55;
    undefined4 uVar56;
    float fVar57;
    undefined4 uVar58;
    undefined4 uVar59;
    undefined4 uVar60;
    undefined4 uVar61;
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
    float local_res18 [2];
    float local_res20;
    undefined local_f8 [16];
    undefined local_e8 [16];
    undefined local_d8 [8];
    float fStack208;
    char cVar10;
    char cVar11;
    undefined4 uVar37;
    undefined6 uVar38;

    fVar23 = param_5;
    fVar3 = *(float *)(param_3 + 4);
    fVar36 = (*(float *)(param_4 + 0x50) - *(float *)(param_3 + 0x50)) * param_5 +
             *(float *)(param_3 + 0x50);
    fVar39 = (*(float *)(param_4 + 0x54) - *(float *)(param_3 + 0x54)) * param_5 +
             *(float *)(param_3 + 0x54);
    fVar40 = (*(float *)(param_4 + 0x58) - *(float *)(param_3 + 0x58)) * param_5 +
             *(float *)(param_3 + 0x58);
    fVar62 = (*(float *)(param_4 + 0xc) - *(float *)(param_3 + 0xc)) * param_5 +
             *(float *)(param_3 + 0xc);
    fVar4 = *(float *)(param_3 + 0x38);
    fVar5 = *(float *)(param_3 + 0x34);
    fVar6 = *(float *)(param_3 + 0x30);
    fVar66 = ((*(float *)(param_4 + 0x20) - *(float *)(param_3 + 0x20)) * param_5 +
              *(float *)(param_3 + 0x20)) * *param_7;
    fVar67 = ((*(float *)(param_4 + 0x24) - *(float *)(param_3 + 0x24)) * param_5 +
              *(float *)(param_3 + 0x24)) * param_7[1];
    fVar68 = ((*(float *)(param_4 + 0x28) - *(float *)(param_3 + 0x28)) * param_5 +
              *(float *)(param_3 + 0x28)) * param_7[2];
    fVar69 = ((*(float *)(param_4 + 4) - fVar3) * param_5 + fVar3) * param_7[3];
    fVar42 = (*(float *)(param_4 + 0x30) - fVar6) * param_5;
    fVar45 = (*(float *)(param_4 + 0x34) - fVar5) * param_5;
    fVar47 = (*(float *)(param_4 + 0x38) - fVar4) * param_5;
    fVar48 = (*(float *)(param_4 + 4) - fVar3) * param_5;
    fVar15 = *param_7;
    fVar16 = param_7[1];
    fVar17 = param_7[2];
    fVar18 = param_7[3];
    param_7._0_4_ =
            ((float)(*(int *)(param_4 + 0x18) - *(int *)(param_3 + 0x18)) * param_5 +
             (float)*(int *)(param_3 + 0x18)) * *(float *)(param_1 + 0x5f4);
    auVar44 = ZEXT416((uint)param_7._0_4_) & (undefined  [16])0xffffffffffffffff;
    fVar63 = 1.0;
    fVar57 = 0.0;
    local_res18[0] = 0.0;
    cVar7 = *(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430);
    local_d8._0_4_ =
            ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * param_5 + *(float *)(param_3 + 8)) *
            param_6;
    param_5 = 0.0;
    fVar50 = fVar23;
    fVar51 = fVar23;
    fVar52 = fVar23;
    if (cVar7 != '\0') {
        if (cVar7 == '\x01') {
            pfVar27 = &param_5;
        }
        else if (cVar7 == '\x02') {
            pfVar27 = local_res18;
        }
        else {
            pfVar27 = (float *)((ulonglong)param_7 & 0xffffffff00000000 | (ulonglong)(uint)param_7._0_4_);
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) >> 0xb & 1) == 0) {
            FUN_1408fe3d0();
            *pfVar27 = extraout_XMM0_Da_05 * *(float *)(param_1 + 0x4c0);
        }
        else {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                    (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_4 + 0x14));
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar64 = extraout_XMM0_Da;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res20 = extraout_XMM0_Da_00;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            param_6 = extraout_XMM0_Da_01;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar49 = local_res20 + fVar64 + param_6;
            if (fVar49 == fVar57) {
                auVar44 = ZEXT416((uint)param_7._0_4_);
                *pfVar27 = 0.0;
            }
            else {
                FUN_1408fe3d0();
                local_res20 = extraout_XMM0_Da_02 * local_res20;
                FUN_1408fe3d0();
                local_res20 = local_res20 + extraout_XMM0_Da_03 * fVar64;
                FUN_1408fe3d0();
                *pfVar27 = ((local_res20 + extraout_XMM0_Da_04 * param_6) * *(float *)(param_1 + 0x4c0)) /
                           fVar49;
                auVar44 = ZEXT416((uint)param_7._0_4_);
            }
        }
        fVar64 = *pfVar27;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x2000) != 0) {
            fVar49 = fVar57;
            if (fVar57 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar49 = (float)((uint)((fVar62 - *(float *)(*(longlong *)(param_1 + 0x588) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar49 < *(float *)(param_1 + 0x4a0)) {
                fVar49 = fVar49 * *(float *)(param_1 + 0x5f0);
                if (fVar63 <= fVar49) {
                    fVar49 = fVar63;
                }
                fVar41 = 0.0;
                if (0.0 <= fVar49) {
                    fVar41 = fVar49;
                }
                *pfVar27 = fVar41 * fVar64;
            }
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x4000) != 0) {
            fVar49 = fVar57;
            if (fVar57 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar49 = (float)((uint)((fVar62 - *(float *)(*(longlong *)(param_1 + 0x590) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar49 < *(float *)(param_1 + 0x4a0)) {
                fVar49 = fVar49 * *(float *)(param_1 + 0x5f0);
                if (fVar63 <= fVar49) {
                    fVar49 = fVar63;
                }
                fVar41 = 0.0;
                if (0.0 <= fVar49) {
                    fVar41 = fVar49;
                }
                fVar41 = fVar41 * fVar64;
                if ((float)((uint)fVar41 & 0x7fffffff) < (float)((uint)*pfVar27 & 0x7fffffff)) {
                    *pfVar27 = fVar41;
                }
            }
        }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430) == '\x02') {
        lVar24 = (ulonglong)(*(int *)(param_1 + 0x55c) - 1) + 7;
        pfVar27 = (float *)(param_3 + lVar24 * 0x10);
        pfVar1 = (float *)(param_4 + lVar24 * 0x10);
        fVar50 = ((((*pfVar1 - *pfVar27) - *(float *)(param_4 + 0x70)) + *(float *)(param_3 + 0x70)) *
                  fVar50 + (*pfVar27 - *(float *)(param_3 + 0x70))) * local_res18[0];
        fVar51 = ((((pfVar1[1] - pfVar27[1]) - *(float *)(param_4 + 0x74)) + *(float *)(param_3 + 0x74))
                  * fVar51 + (pfVar27[1] - *(float *)(param_3 + 0x74))) * local_res18[0];
        fVar52 = ((((pfVar1[2] - pfVar27[2]) - *(float *)(param_4 + 0x78)) + *(float *)(param_3 + 0x78))
                  * fVar52 + (pfVar27[2] - *(float *)(param_3 + 0x78))) * local_res18[0];
    }
    else {
        fVar50 = 0.0;
        fVar51 = 0.0;
        fVar52 = 0.0;
    }
    uVar28 = 0;
    if (*(int *)(param_1 + 0x55c) != 0) {
        uVar58 = 0x3f800000;
        uVar59 = 0x3f800000;
        uVar60 = 0x3f800000;
        uVar61 = 0x3f800000;
        fVar64 = 255.0;
        fVar49 = 255.0;
        fVar41 = 255.0;
        fVar65 = 255.0;
        fVar70 = 0.5;
        fVar71 = 0.5;
        fVar72 = 0.5;
        fVar73 = 0.5;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        _local_d8 = CONCAT412(local_d8._0_4_,
                              CONCAT48(local_d8._0_4_,CONCAT44(local_d8._0_4_,local_d8._0_4_)));
        local_d8._4_4_ = local_d8._0_4_;
        fStack208 = local_d8._0_4_;
        do {
            pfVar8 = *param_2;
            lVar24 = uVar28 + 7;
            pfVar2 = (float *)(param_4 + lVar24 * 0x10);
            fVar46 = pfVar2[1];
            fVar29 = pfVar2[2];
            pfVar27 = (float *)(param_3 + lVar24 * 0x10);
            fVar19 = pfVar27[1];
            fVar20 = pfVar27[2];
            pfVar1 = (float *)(param_3 + lVar24 * 0x10);
            fVar21 = pfVar1[1];
            fVar22 = pfVar1[2];
            *pfVar8 = ((((*pfVar2 - *pfVar27) * fVar23 + *pfVar1) - fVar50) - fVar36) * local_d8._0_4_ +
                      fVar36;
            pfVar8[1] = ((((fVar46 - fVar19) * fVar23 + fVar21) - fVar51) - fVar39) * local_d8._4_4_ +
                        fVar39;
            pfVar8[2] = ((((fVar29 - fVar20) * fVar23 + fVar22) - fVar52) - fVar40) * fStack208 + fVar40;
            if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) == 0) {
                auVar31 = maxps(CONCAT412(uVar56,CONCAT48(uVar55,CONCAT44(uVar54,uVar53))),
                                CONCAT412(fVar69,CONCAT48(fVar68,CONCAT44(fVar67,fVar66))));
            }
            else {
                fVar46 = *(float *)(param_1 + 0x600);
                fVar29 = (float)uVar28;
                auVar31 = maxps(CONCAT412(uVar56,CONCAT48(uVar55,CONCAT44(uVar54,uVar53))),
                                CONCAT412(fVar46 * ((fVar48 + fVar3) * fVar18 - fVar69) * fVar29 + fVar69,
                                          CONCAT48(fVar46 * ((fVar47 + fVar4) * fVar17 - fVar68) * fVar29 +
                                                   fVar68,CONCAT44(fVar46 * ((fVar45 + fVar5) * fVar16 -
                                                                             fVar67) * fVar29 + fVar67,
                                                                   fVar46 * ((fVar42 + fVar6) * fVar15 -
                                                                             fVar66) * fVar29 + fVar66))));
            }
            auVar31 = minps(auVar31,CONCAT412(uVar61,CONCAT48(uVar60,CONCAT44(uVar59,uVar58))));
            iVar30 = (int)(SUB164(auVar31,0) * fVar64 + fVar70);
            iVar32 = (int)(SUB164(auVar31 >> 0x20,0) * fVar49 + fVar71);
            iVar33 = (int)(SUB164(auVar31 >> 0x40,0) * fVar41 + fVar72);
            iVar34 = (int)(SUB164(auVar31 >> 0x60,0) * fVar65 + fVar73);
            sVar12 = (short)iVar33;
            cVar7 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar33 - (0xff < sVar12);
            sVar12 = (short)((uint)iVar33 >> 0x10);
            sVar35 = CONCAT11((0 < sVar12) * (sVar12 < 0xff) * (char)((uint)iVar33 >> 0x10) -
                              (0xff < sVar12),cVar7);
            sVar12 = (short)iVar32;
            cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar32 - (0xff < sVar12);
            sVar12 = (short)((uint)iVar32 >> 0x10);
            uVar37 = CONCAT13((0 < sVar12) * (sVar12 < 0xff) * (char)((uint)iVar32 >> 0x10) -
                              (0xff < sVar12),CONCAT12(cVar9,sVar35));
            sVar12 = (short)iVar30;
            cVar10 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar30 - (0xff < sVar12);
            sVar12 = (short)((uint)iVar30 >> 0x10);
            uVar38 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * (char)((uint)iVar30 >> 0x10) -
                              (0xff < sVar12),CONCAT14(cVar10,uVar37));
            sVar12 = (short)iVar34;
            cVar11 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar34 - (0xff < sVar12);
            sVar14 = (short)((uint)iVar34 >> 0x10);
            sVar12 = (short)((uint)uVar37 >> 0x10);
            sVar13 = (short)((uint6)uVar38 >> 0x20);
            sVar14 = (short)(CONCAT17((0 < sVar14) * (sVar14 < 0xff) * (char)((uint)iVar34 >> 0x10) -
                                      (0xff < sVar14),CONCAT16(cVar11,uVar38)) >> 0x30);
            (*param_2)[3] =
                    (float)CONCAT13((0 < sVar14) * (sVar14 < 0xff) * cVar11 - (0xff < sVar14),
                                    CONCAT12((0 < sVar13) * (sVar13 < 0xff) * cVar10 - (0xff < sVar13),
                                             CONCAT11((0 < sVar12) * (sVar12 < 0xff) * cVar9 -
                                                      (0xff < sVar12),
                                                      (0 < sVar35) * (sVar35 < 0xff) * cVar7 -
                                                      (0xff < sVar35))));
            local_f8 = CONCAT412(fVar57,CONCAT48(fVar57,CONCAT44(*(float *)(*(longlong *)(param_1 + 0x560)
                                                                            + uVar28 * 4) *
                                                                 *(float *)(*(longlong *)(param_1 + 0x4e8)
                                                                            + 0x3b8) +
                                                                 *(float *)(param_1 + 0x578) + param_5,
                                                                 fVar62 + *(float *)(param_1 + 0x574))));
            FUN_1401c95b0(&param_6,local_f8);
            (*param_2)[4] = param_6;
            uVar26 = SUB164(auVar44,0) & 0x7fffffff;
            if (uVar26 < 0x33800000) {
                uVar25 = 0;
            }
            else if (uVar26 < 0x387ff000) {
                uVar25 = (ushort)(((SUB164(auVar44,0) & 0x7fffff | 0x800000) >>
                                                                             (0x71U - (char)(uVar26 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
            }
            else if (uVar26 < 0x47fff000) {
                uVar25 = (ushort)(uVar26 + 0xc8001000 >> 0xd);
            }
            else {
                uVar25 = 0x43ff;
            }
            *(ushort *)(*param_2 + 5) = uVar25 | SUB162(auVar44 >> 0x10,0) & 0x8000;
            if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
                fVar46 = fVar62;
                if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 4) != 0) {
                    fVar46 = (fVar62 - *(float *)(param_1 + 0x510)) * *(float *)(param_1 + 0x514);
                }
                auVar43 = SUB1612(CONCAT88(SUB168(CONCAT412(fVar57,CONCAT48(fVar63,CONCAT44(fVar63,fVar46)))
                                                          >> 0x40,0),
                                           CONCAT44((float)uVar28 * *(float *)(param_1 + 0x600),fVar46)),0);
                FUN_140325540((longlong)*param_2 + 0x16,param_1 + 0x490);
                fVar46 = SUB124(auVar43 >> 0x20,0);
                fVar29 = SUB124(auVar43 >> 0x40,0);
                local_e8 = CONCAT412(fVar57,CONCAT48(fVar57,CONCAT44(*(float *)(param_1 + 0x5b0) *
                                                                     SUB124(auVar43,0) +
                                                                     *(float *)(param_1 + 0x5b4) * fVar46 +
                                                                     *(float *)(param_1 + 0x5b8) * fVar29,
                                                                     *(float *)(param_1 + 0x5a0) *
                                                                     SUB124(auVar43,0) +
                                                                     *(float *)(param_1 + 0x5a4) * fVar46 +
                                                                     *(float *)(param_1 + 0x5a8) * fVar29)))
                        ;
                FUN_1401c95b0(local_res18,local_e8);
                auVar44 = ZEXT416((uint)param_7._0_4_);
                (*param_2)[6] = local_res18[0];
            }
            *param_2 = (float *)((longlong)*param_2 + (ulonglong)*(uint *)(param_1 + 0x598));
            uVar26 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar26;
        } while (uVar26 < *(uint *)(param_1 + 0x55c));
    }
    return;
}



void FUN_140323590(longlong param_1,float **param_2)

{
    char cVar1;
    float *pfVar2;
    char cVar3;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    ulonglong uVar10;
    unkbyte10 Var11;
    undefined auVar12 [12];
    undefined auVar13 [14];
    short sVar14;
    undefined4 uVar15;
    undefined6 uVar16;
    float fVar17;
    float fVar18;
    ulonglong uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    ushort uVar23;
    ulonglong uVar24;
    float *pfVar25;
    float *pfVar26;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float fVar27;
    int iVar28;
    uint uVar30;
    int iVar31;
    undefined auVar29 [16];
    int iVar32;
    undefined uVar33;
    undefined uVar34;
    undefined uVar35;
    undefined uVar36;
    byte bVar37;
    undefined uVar38;
    undefined uVar39;
    undefined uVar40;
    char cVar41;
    undefined uVar42;
    undefined uVar43;
    undefined uVar44;
    undefined uVar45;
    char cVar46;
    undefined uVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    undefined4 uVar52;
    undefined4 uVar53;
    undefined4 uVar54;
    undefined4 uVar55;
    undefined4 uVar56;
    undefined4 uVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float fVar62;
    float fVar63;
    float fVar64;
    float fVar65;
    float fVar66;
    undefined auVar67 [16];
    undefined4 uVar68;
    undefined4 uVar69;
    float local_res8;
    uint uStackX12;
    float local_res10;
    float local_res18 [2];
    float local_res20 [2];
    char cVar4;
    char cVar5;

    pfVar2 = param_2[1];
    pfVar25 = *param_2;
    fVar65 = pfVar2[1];
    fVar60 = pfVar2[10];
    fVar59 = pfVar2[9];
    fVar58 = pfVar2[8];
    fVar62 = pfVar2[0xc];
    fVar64 = pfVar2[0xe];
    fVar63 = pfVar2[0xd];
    fVar61 = fVar65;
    if ((*(short *)(*(longlong *)(param_1 + 8) + 0x18) != 0) &&
        (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 1)) {
        fVar58 = fVar58 * *(float *)(param_2 + 2);
        fVar59 = fVar59 * *(float *)((longlong)param_2 + 0x14);
        fVar60 = fVar60 * *(float *)(param_2 + 3);
        fVar61 = fVar65 * *(float *)((longlong)param_2 + 0x1c);
        fVar62 = fVar62 * *(float *)(param_2 + 2);
        fVar63 = fVar63 * *(float *)((longlong)param_2 + 0x14);
        fVar64 = fVar64 * *(float *)(param_2 + 3);
        fVar65 = fVar65 * *(float *)((longlong)param_2 + 0x1c);
    }
    fVar66 = 1.0;
    fVar51 = 0.0;
    bVar37 = 0;
    uVar52 = 0;
    uVar53 = 0;
    local_res20[0] = 0.0;
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430);
    auVar67 = ZEXT416((uint)((float)(int)pfVar2[6] * *(float *)(param_1 + 0x5f4))) &
              (undefined  [16])0xffffffffffffffff;
    local_res8 = 0.0;
    if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
            pfVar26 = &local_res8;
        }
        else if (cVar1 == '\x02') {
            pfVar26 = local_res20;
        }
        else {
            pfVar26 = (float *)((ulonglong)uStackX12 << 0x20);
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) >> 0xb & 1) == 0) {
            FUN_1408fe3d0();
            *pfVar26 = extraout_XMM0_Da_05 * *(float *)(param_1 + 0x4c0);
        }
        else {
            bVar37 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                    (*(longlong **)(param_1 + 0x38),pfVar2[5]);
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res10 = extraout_XMM0_Da_00;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            local_res18[0] = extraout_XMM0_Da_01;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar50 = local_res10 + extraout_XMM0_Da + local_res18[0];
            if (fVar50 == fVar51) {
                *pfVar26 = 0.0;
            }
            else {
                fVar48 = extraout_XMM0_Da;
                FUN_1408fe3d0();
                fVar49 = extraout_XMM0_Da_02 * local_res10;
                FUN_1408fe3d0();
                fVar49 = fVar49 + extraout_XMM0_Da_03 * fVar48;
                FUN_1408fe3d0();
                *pfVar26 = ((fVar49 + extraout_XMM0_Da_04 * local_res18[0]) * *(float *)(param_1 + 0x4c0)) /
                           fVar50;
            }
        }
        fVar50 = *pfVar26;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x2000) != 0) {
            if (fVar51 == *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                uVar33 = SUB41(fVar51,0);
                uVar34 = (undefined)((uint)fVar51 >> 8);
                uVar35 = (undefined)((uint)fVar51 >> 0x10);
                uVar36 = (undefined)((uint)fVar51 >> 0x18);
                uVar38 = (undefined)uVar52;
                uVar39 = (undefined)((uint)uVar52 >> 8);
                uVar40 = (undefined)((uint)uVar52 >> 0x10);
                uVar42 = (undefined)((uint)uVar52 >> 0x18);
                uVar43 = (undefined)uVar53;
                uVar44 = (undefined)((uint)uVar53 >> 8);
                uVar45 = (undefined)((uint)uVar53 >> 0x10);
                uVar47 = (undefined)((uint)uVar53 >> 0x18);
            }
            else {
                uVar30 = (uint)((pfVar2[3] - *(float *)(*(longlong *)(param_1 + 0x588) + 0xc)) *
                                *(float *)(param_1 + 0x5f8)) & 0x7fffffff;
                uVar33 = (undefined)uVar30;
                uVar34 = (undefined)(uVar30 >> 8);
                uVar35 = (undefined)(uVar30 >> 0x10);
                uVar36 = (undefined)(uVar30 >> 0x18);
                bVar37 = 0;
                uVar38 = 0;
                uVar39 = 0;
                uVar40 = 0;
                uVar42 = 0;
                uVar43 = 0;
                uVar44 = 0;
                uVar45 = 0;
                uVar47 = 0;
            }
            if ((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) <
                *(float *)(param_1 + 0x4a0)) {
                fVar48 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) *
                         *(float *)(param_1 + 0x5f0);
                auVar29 = CONCAT412(CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))),
                                    CONCAT48(CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar39,uVar38))),
                                             CONCAT44((uint)bVar37 << 0x18,fVar48)));
                uVar33 = 0;
                uVar34 = 0;
                uVar35 = 0;
                uVar36 = 0;
                if (fVar66 <= fVar48) {
                    auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20,0),fVar66);
                }
                if (0.0 <= SUB164(auVar29,0)) {
                    uVar33 = SUB161(auVar29,0);
                    uVar34 = SUB161(auVar29 >> 8,0);
                    uVar35 = SUB161(auVar29 >> 0x10,0);
                    uVar36 = SUB161(auVar29 >> 0x18,0);
                }
                *pfVar26 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) * fVar50;
            }
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x4000) != 0) {
            if (fVar51 != *(float *)(*(longlong *)(param_1 + 0x4e8) + 0x3b4)) {
                fVar51 = (float)((uint)((pfVar2[3] - *(float *)(*(longlong *)(param_1 + 0x590) + 0xc)) *
                                        *(float *)(param_1 + 0x5f8)) & 0x7fffffff);
            }
            if (fVar51 < *(float *)(param_1 + 0x4a0)) {
                fVar51 = fVar51 * *(float *)(param_1 + 0x5f0);
                uVar33 = SUB41(fVar51,0);
                uVar34 = (undefined)((uint)fVar51 >> 8);
                uVar35 = (undefined)((uint)fVar51 >> 0x10);
                uVar36 = (undefined)((uint)fVar51 >> 0x18);
                fVar48 = 0.0;
                if (fVar66 <= fVar51) {
                    uVar33 = SUB41(fVar66,0);
                    uVar34 = (undefined)((uint)fVar66 >> 8);
                    uVar35 = (undefined)((uint)fVar66 >> 0x10);
                    uVar36 = (undefined)((uint)fVar66 >> 0x18);
                }
                if (0.0 <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
                    fVar48 = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
                }
                fVar48 = fVar48 * fVar50;
                if ((float)((uint)fVar48 & 0x7fffffff) < (float)((uint)*pfVar26 & 0x7fffffff)) {
                    *pfVar26 = fVar48;
                }
            }
        }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x4e8) + 0x430) == '\x02') {
        pfVar26 = pfVar2 + ((ulonglong)(*(int *)(param_1 + 0x55c) - 1) + 7) * 4;
        fVar51 = (*pfVar26 - pfVar2[0x1c]) * local_res20[0];
        fVar66 = (pfVar26[1] - pfVar2[0x1d]) * local_res20[0];
        fVar50 = (pfVar26[2] - pfVar2[0x1e]) * local_res20[0];
    }
    else {
        fVar51 = 0.0;
        fVar66 = 0.0;
        fVar50 = 0.0;
    }
    uVar24 = 0;
    if (*(int *)(param_1 + 0x55c) != 0) {
        uVar52 = 0x3f800000;
        uVar53 = 0x3f800000;
        uVar68 = 0x3f800000;
        uVar69 = 0x3f800000;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        do {
            fVar48 = pfVar2[2];
            pfVar26 = pfVar2 + (uVar24 + 7) * 4;
            fVar17 = pfVar26[1];
            fVar18 = pfVar26[2];
            fVar27 = pfVar2[0x15];
            fVar20 = pfVar2[0x16];
            fVar49 = *(float *)(param_2 + 4);
            fVar21 = pfVar2[0x15];
            fVar22 = pfVar2[0x16];
            *pfVar25 = ((*pfVar26 - fVar51) - pfVar2[0x14]) * fVar48 * fVar49 + pfVar2[0x14];
            pfVar25[1] = ((fVar17 - fVar66) - fVar27) * fVar48 * fVar49 + fVar21;
            pfVar25[2] = ((fVar18 - fVar50) - fVar20) * fVar48 * fVar49 + fVar22;
            if ((*(byte *)(*(longlong *)(param_1 + 0x4e8) + 0x28) & 0x20) == 0) {
                auVar29 = maxps(CONCAT412(uVar57,CONCAT48(uVar56,CONCAT44(uVar55,uVar54))),
                                CONCAT412(fVar61,CONCAT48(fVar60,CONCAT44(fVar59,fVar58))));
            }
            else {
                fVar48 = *(float *)(param_1 + 0x600);
                fVar27 = (float)uVar24;
                fVar49 = fVar48 * (fVar63 - fVar59) * fVar27 + fVar59;
                fVar17 = fVar48 * (fVar64 - fVar60) * fVar27 + fVar60;
                fVar18 = fVar48 * (fVar65 - fVar61) * fVar27 + fVar61;
                auVar29 = maxps(CONCAT412(uVar57,CONCAT48(uVar56,CONCAT44(uVar55,uVar54))),
                                CONCAT115((char)((uint)fVar18 >> 0x18),
                                          CONCAT114((char)((uint)fVar18 >> 0x10),
                                                    CONCAT113((char)((uint)fVar18 >> 8),
                                                              CONCAT112(SUB41(fVar18,0),
                                                                        CONCAT111((char)((uint)fVar17 >>
                                                                                                      0x18),
                                                                                  CONCAT110((char)((uint)
                                                                                                    fVar17 >> 0x10),
                                                                                            CONCAT19((char)((uint)fVar17 >> 8),
                                                                                                     CONCAT18(SUB41(fVar17,0),
                                                                                                              CONCAT17((char)((uint)fVar49 >>
                                                                                                                                           0x18),
                                                                                                                       CONCAT16((char)((uint)
                                                                                                                                        fVar49 >> 0x10),
                                                                                                                                CONCAT15((char)((uint)fVar49 >> 8),
                                                                                                                                         CONCAT14(SUB41(fVar49,0),
                                                                                                                                                  fVar48 * (fVar62 - fVar58) *
                                                                                                                                                  fVar27 + fVar58))))))))
                                                              )))));
            }
            auVar29 = minps(auVar29,CONCAT412(uVar69,CONCAT48(uVar68,CONCAT44(uVar53,uVar52))));
            iVar28 = (int)(SUB164(auVar29,0) * 255.0 + 0.5);
            uVar30 = (uint)(SUB164(auVar29 >> 0x20,0) * 255.0 + 0.5);
            iVar31 = (int)(SUB164(auVar29 >> 0x40,0) * 255.0 + 0.5);
            iVar32 = (int)(SUB164(auVar29 >> 0x60,0) * 255.0 + 0.5);
            cVar41 = (char)((uint)iVar28 >> 0x10);
            cVar46 = (char)((uint)iVar32 >> 0x10);
            uVar19 = (ulonglong)
                    CONCAT16((char)(uVar30 >> 0x10),
                             CONCAT15((char)(uVar30 >> 8),CONCAT14((char)uVar30,iVar31)));
            uVar10 = ((ulonglong)uVar30 & 0xff000000) << 0x20 | uVar19;
            Var11 = CONCAT19((char)((uint)iVar28 >> 8),CONCAT18((char)iVar28,uVar10));
            auVar12 = CONCAT111((char)((uint)iVar28 >> 0x18),CONCAT110(cVar41,Var11));
            auVar13 = CONCAT113((char)((uint)iVar32 >> 8),CONCAT112((char)iVar32,auVar12));
            sVar6 = (short)iVar31;
            cVar1 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar31 - (0xff < sVar6);
            sVar6 = (short)(uVar19 >> 0x10);
            sVar7 = (short)(uVar19 >> 0x20);
            cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char)(uVar19 >> 0x20) - (0xff < sVar7);
            sVar7 = (short)(uVar10 >> 0x30);
            sVar8 = (short)((unkuint10)Var11 >> 0x40);
            cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar28 - (0xff < sVar8);
            sVar8 = SUB122(auVar12 >> 0x50,0);
            sVar9 = SUB142(auVar13 >> 0x60,0);
            cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar32 - (0xff < sVar9);
            sVar9 = SUB162(CONCAT115((char)((uint)iVar32 >> 0x18),CONCAT114(cVar46,auVar13)) >> 0x70,0);
            sVar14 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)(uVar19 >> 0x10) - (0xff < sVar6),cVar1
            );
            uVar15 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char)(uVar19 >> 0x30) - (0xff < sVar7),
                              CONCAT12(cVar3,sVar14));
            uVar16 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar41 - (0xff < sVar8),
                              CONCAT14(cVar4,uVar15));
            sVar6 = (short)((uint)uVar15 >> 0x10);
            sVar7 = (short)((uint6)uVar16 >> 0x20);
            sVar8 = (short)(CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar46 - (0xff < sVar9),
                                     CONCAT16(cVar5,uVar16)) >> 0x30);
            pfVar25[3] = (float)CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                         CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                                  CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                           (0xff < sVar6),
                                                           (0 < sVar14) * (sVar14 < 0xff) * cVar1 -
                                                           (0xff < sVar14))));
            FUN_1401c95b0(&local_res8);
            pfVar25[4] = local_res8;
            local_res10 = SUB164(auVar67,0);
            uVar30 = (uint)local_res10 & 0x7fffffff;
            if (uVar30 < 0x33800000) {
                uVar23 = 0;
            }
            else if (uVar30 < 0x387ff000) {
                uVar23 = (ushort)((((uint)local_res10 & 0x7fffff | 0x800000) >>
                                                                             (0x71U - (char)(uVar30 >> 0x17) & 0x1f)) + 0x1000 >> 0xd);
            }
            else if (uVar30 < 0x47fff000) {
                uVar23 = (ushort)(uVar30 + 0xc8001000 >> 0xd);
            }
            else {
                uVar23 = 0x43ff;
            }
            *(ushort *)(pfVar25 + 5) = uVar23 | SUB162(auVar67 >> 0x10,0) & 0x8000;
            if (*(short *)(*(longlong *)(param_1 + 0x4e8) + 0x404) != 0) {
                FUN_140325540((longlong)pfVar25 + 0x16,param_1 + 0x490);
                FUN_1401c95b0(local_res18);
                pfVar25[6] = local_res18[0];
            }
            uVar30 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar30;
            pfVar25 = (float *)((longlong)pfVar25 + (ulonglong)*(uint *)(param_1 + 0x598));
        } while (uVar30 < *(uint *)(param_1 + 0x55c));
    }
    *param_2 = pfVar25;
    return;
}



void FUN_140325540(ushort *param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    ushort uVar3;

    uVar1 = *param_2;
    uVar2 = uVar1 & 0x7fffffff;
    uVar3 = (ushort)(uVar1 >> 0x10) & 0x8000;
    if (uVar2 < 0x33800000) {
        *param_1 = uVar3;
        return;
    }
    if (uVar2 < 0x387ff000) {
        *param_1 = (ushort)(((uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar2 >> 0x17) & 0x1f)) +
                            0x1000 >> 0xd) | uVar3;
        return;
    }
    if (uVar2 < 0x47fff000) {
        *param_1 = (ushort)(uVar2 + 0xc8001000 >> 0xd) | uVar3;
        return;
    }
    *param_1 = uVar3 | 0x43ff;
    return;
}



undefined8 FUN_140325650(uint *param_1,uint *param_2)

{
    int iVar1;

    if (*param_1 == *param_2) {
        iVar1 = FUN_1407e6af0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),
                              (ulonglong)*param_1 << 2);
        if (iVar1 == 0) {
            return 1;
        }
    }
    return 0;
}



void FUN_140325690(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong *puVar3;
    DWORD DVar4;
    int iVar5;
    ulonglong uVar6;
    HANDLE hObject;
    ulonglong uVar7;
    DWORD *pDVar8;
    ulonglong **ppuVar9;
    undefined4 local_28 [2];
    undefined8 local_20;

    lVar1 = param_1[1];
    *param_1 = &PTR_LAB_140b64458;
    pDVar8 = (DWORD *)(lVar1 + 0x1b8);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar8 == DVar4) {
        *(longlong *)(lVar1 + 0x1c0) = *(longlong *)(lVar1 + 0x1c0) + 1;
    }
    else {
        do {
            LOCK();
            puVar3 = (ulonglong *)(lVar1 + 0x1c0);
            uVar7 = *puVar3;
            *puVar3 = *puVar3 ^ (ulonglong)(uVar7 == 0) * (*puVar3 ^ 1);
            if (uVar7 == 0) {
                *pDVar8 = DVar4;
                goto LAB_1403256fd;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8);
    }
    LAB_1403256fd:
    if (param_1[0xc] != 0) {
        local_28[0] = *(undefined4 *)((longlong)param_1 + 0x14);
        lVar2 = param_1[1];
        local_20 = param_1[3];
        uVar6 = (**(code **)(lVar2 + 0x1f8))(local_28);
        uVar7 = uVar6 % *(ulonglong *)(lVar2 + 0x1e8);
        ppuVar9 = (ulonglong **)(*(longlong *)(lVar2 + 0x1f0) + uVar7 * 8);
        puVar3 = *(ulonglong **)(*(longlong *)(lVar2 + 0x1f0) + uVar7 * 8);
        while (puVar3 != (ulonglong *)0x0) {
            if ((uVar6 == **ppuVar9) &&
                (iVar5 = (**(code **)(lVar2 + 0x200))(local_28,*ppuVar9 + 2), iVar5 != 0)) {
                puVar3 = *ppuVar9;
                *ppuVar9 = (ulonglong *)puVar3[1];
                FUN_14018b900(puVar3,0);
                *(longlong *)(lVar2 + 0x1e0) = *(longlong *)(lVar2 + 0x1e0) + -1;
                break;
            }
            ppuVar9 = (ulonglong **)(*ppuVar9 + 1);
            puVar3 = *ppuVar9;
        }
        if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[0xc] = param_1[0xd];
        }
        if (param_1[0xd] != 0) {
            *(undefined8 *)(param_1[0xd] + 0x60) = param_1[0xc];
        }
        param_1[0xc] = 0;
        param_1[0xd] = 0;
    }
    if (*(ulonglong *)(lVar1 + 0x1c0) < 2) {
        *pDVar8 = 0;
        *(undefined8 *)(lVar1 + 0x1c0) = 0;
        if (*(longlong *)(lVar1 + 0x1c8) != 0) {
            if (*(longlong *)(lVar1 + 0x1d0) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar3 = (ulonglong *)(lVar1 + 0x1d0);
                uVar6 = *puVar3;
                *puVar3 = *puVar3 ^ (ulonglong)(uVar6 == 0) * (*puVar3 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar1 + 0x1d0));
        }
    }
    else {
        *(longlong *)(lVar1 + 0x1c0) = *(longlong *)(lVar1 + 0x1c0) + -1;
    }
    FUN_14018b900(param_1[3],0);
    FUN_14018b900(param_1[4],0);
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[8],0);
    FUN_14018b900(param_1[9],0);
    FUN_14018b900(param_1[10],0);
    FUN_140326d80(param_1 + 0xe);
    FUN_14018b900(param_1[0x10],0);
    param_1[0x10] = 0;
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 *)(param_1[0xd] + 0x60) = param_1[0xc];
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403258c0(ulonglong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
    ulonglong *puVar1;
    ulonglong **ppuVar2;
    ushort uVar3;
    undefined auVar4 [16];
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined8 uVar8;
    undefined4 *puVar9;
    ulonglong *puVar10;
    undefined4 *puVar11;
    ulonglong *puVar12;
    longlong lVar13;
    ushort *puVar14;
    longlong lVar15;
    uint uVar16;
    undefined4 *puVar17;
    longlong *plVar18;
    uint uVar19;
    undefined4 *puVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    undefined4 *puVar23;
    longlong lVar24;
    ulonglong uVar25;
    short sVar26;
    undefined auStack136 [8];
    ushort auStack128 [4];
    short asStack120 [8];
    uint local_68;
    longlong local_60;
    undefined4 *local_58;
    undefined8 local_50;
    ulonglong local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    *(longlong *)(param_1 + 8) = param_2;
    lVar24 = *(longlong *)(param_2 + 0x40);
    lVar15 = *(longlong *)(param_2 + 0x38);
    *(uint *)(param_1 + 0x14) = param_3;
    uVar8 = SUB168(ZEXT816(4) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(4) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    local_60 = lVar24;
    uVar8 = FUN_14018b280(uVar8,0);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    FUN_1407db590(uVar8,param_4);
    auVar4 = ZEXT816(4) * ZEXT416(*(uint *)(param_1 + 0x14));
    uVar8 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8,0);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    FUN_1407db590(uVar8,param_4);
    FUN_1401c3280(FUN_1403264c0,*(undefined8 *)(param_1 + 0x20));
    uVar19 = *(uint *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (uVar19 != 0) {
        lVar13 = *(longlong *)(param_1 + 0x20);
        local_68 = 0;
        uVar25 = 0;
        do {
            local_58 = *(undefined4 **)(lVar24 + 0x88);
            uVar16 = (int)uVar25 + 1;
            uVar22 = (ulonglong)uVar16;
            puVar23 = local_58 + (ulonglong)*(uint *)(lVar13 + uVar25 * 4) * 0x1c;
            local_50 = *(ulonglong *)(puVar23 + 10);
            local_48 = *(undefined8 *)(puVar23 + 0xc);
            if (uVar16 < uVar19) {
                sVar26 = *(short *)(puVar23 + 4);
                local_50._6_2_ = (ushort)(local_50 >> 0x30);
                local_50._4_2_ = (ushort)(local_50 >> 0x20);
                local_50._2_2_ = (ushort)(local_50 >> 0x10);
                puVar17 = local_58;
                do {
                    puVar17 = puVar17 + (ulonglong)*(uint *)(lVar13 + uVar22 * 4) * 0x1c;
                    if (((((sVar26 != *(short *)(puVar17 + 4)) ||
                           (*(short *)((longlong)puVar23 + 0x12) != *(short *)((longlong)puVar17 + 0x12))) ||
                          (*(short *)((longlong)puVar23 + 0x16) != *(short *)((longlong)puVar17 + 0x16))) ||
                         ((*(ushort *)(puVar23 + 6) != *(ushort *)(puVar17 + 6) ||
                           (*(short *)(puVar23 + 7) != *(short *)(puVar17 + 7))))) ||
                        ((*(short *)((longlong)puVar23 + 0x1a) != *(short *)((longlong)puVar17 + 0x1a) ||
                          (*(char *)(puVar23 + 0xe) != *(char *)(puVar17 + 0xe))))) break;
                    uVar19 = 0;
                    puVar9 = puVar17 + 0xc;
                    do {
                        if (((*(ushort *)(puVar9 + -2) &
                              *(ushort *)((longlong)auStack128 + -(longlong)puVar17 + (longlong)puVar9)) == 0) ||
                            (*(short *)((longlong)asStack120 + -(longlong)puVar17 + (longlong)puVar9) !=
                             *(short *)puVar9)) {
                            if (uVar19 < 4) goto LAB_140325b1e;
                            break;
                        }
                        uVar19 = uVar19 + 1;
                        puVar9 = (undefined4 *)((longlong)puVar9 + 2);
                    } while (uVar19 < 4);
                    if ((puVar23 != puVar17) &&
                        ((*(byte *)((ulonglong)*(ushort *)(puVar23 + 6) * 0xb8 + *(longlong *)(lVar15 + 0xf8))
                          & 1) != 0)) {
                        LAB_140325b1e:
                        uVar19 = *(uint *)(param_1 + 0x14);
                        break;
                    }
                    local_50._0_2_ = (ushort)local_50 & *(ushort *)(puVar17 + 10);
                    local_50._2_2_ = local_50._2_2_ & *(ushort *)((longlong)puVar17 + 0x2a);
                    local_50._4_2_ = local_50._4_2_ & *(ushort *)(puVar17 + 0xb);
                    local_50._6_2_ = local_50._6_2_ & *(ushort *)((longlong)puVar17 + 0x2e);
                    uVar19 = *(uint *)(param_1 + 0x14);
                    lVar13 = *(longlong *)(param_1 + 0x20);
                    sVar26 = *(short *)(puVar23 + 4);
                    uVar16 = (int)uVar22 + 1;
                    uVar22 = (ulonglong)uVar16;
                    puVar17 = local_58;
                } while (uVar16 < uVar19);
                lVar13 = *(longlong *)(param_1 + 0x20);
                lVar24 = local_60;
            }
            local_68 = local_68 + 1;
            *(uint *)(param_1 + 0x30) = local_68;
            uVar25 = uVar22;
        } while ((uint)uVar22 < uVar19);
    }
    auVar4 = ZEXT816(0x70) * ZEXT416(*(uint *)(param_1 + 0x30));
    uVar8 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8,0);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    auVar4 = ZEXT816(8) * ZEXT416(*(uint *)(param_1 + 0x30));
    uVar8 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    uVar8 = FUN_14018b280(uVar8,0);
    uVar22 = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    local_68 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar25 = uVar22;
    if (*(int *)(param_1 + 0x14) != 0) {
        do {
            lVar13 = uVar22 * 4;
            puVar17 = (undefined4 *)(uVar25 * 0x70 + *(longlong *)(param_1 + 0x40));
            puVar23 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + uVar25 * 8);
            uVar16 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar16;
            puVar9 = (undefined4 *)
                    ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + lVar13) * 0x70 +
                     *(longlong *)(lVar24 + 0x88));
            *puVar17 = *puVar9;
            puVar17[1] = puVar9[1];
            puVar17[2] = puVar9[2];
            puVar17[3] = puVar9[3];
            *(undefined2 *)(puVar17 + 4) = *(undefined2 *)(puVar9 + 4);
            *(undefined2 *)((longlong)puVar17 + 0x12) = *(undefined2 *)((longlong)puVar9 + 0x12);
            *(undefined2 *)(puVar17 + 5) = *(undefined2 *)(puVar9 + 5);
            *(undefined2 *)((longlong)puVar17 + 0x16) = *(undefined2 *)((longlong)puVar9 + 0x16);
            *(undefined2 *)(puVar17 + 6) = *(undefined2 *)(puVar9 + 6);
            *(undefined2 *)((longlong)puVar17 + 0x1a) = *(undefined2 *)((longlong)puVar9 + 0x1a);
            *(undefined2 *)(puVar17 + 7) = *(undefined2 *)(puVar9 + 7);
            *(undefined2 *)((longlong)puVar17 + 0x1e) = *(undefined2 *)((longlong)puVar9 + 0x1e);
            *(undefined2 *)(puVar17 + 8) = *(undefined2 *)(puVar9 + 8);
            *(undefined2 *)((longlong)puVar17 + 0x22) = *(undefined2 *)((longlong)puVar9 + 0x22);
            *(undefined2 *)(puVar17 + 9) = *(undefined2 *)(puVar9 + 9);
            *(undefined2 *)((longlong)puVar17 + 0x26) = *(undefined2 *)((longlong)puVar9 + 0x26);
            *(undefined8 *)(puVar17 + 10) = *(undefined8 *)(puVar9 + 10);
            *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(puVar9 + 0xc);
            *(undefined *)(puVar17 + 0xe) = *(undefined *)(puVar9 + 0xe);
            *(undefined *)((longlong)puVar17 + 0x39) = *(undefined *)((longlong)puVar9 + 0x39);
            *(undefined *)((longlong)puVar17 + 0x3a) = *(undefined *)((longlong)puVar9 + 0x3a);
            uVar7 = puVar9[0x11];
            uVar5 = puVar9[0x12];
            uVar6 = puVar9[0x13];
            puVar17[0x10] = puVar9[0x10];
            puVar17[0x11] = uVar7;
            puVar17[0x12] = uVar5;
            puVar17[0x13] = uVar6;
            uVar7 = puVar9[0x15];
            uVar5 = puVar9[0x16];
            uVar6 = puVar9[0x17];
            puVar17[0x14] = puVar9[0x14];
            puVar17[0x15] = uVar7;
            puVar17[0x16] = uVar5;
            puVar17[0x17] = uVar6;
            puVar17[0x18] = puVar9[0x18];
            puVar17[0x19] = puVar9[0x19];
            puVar17[0x1a] = puVar9[0x1a];
            uVar7 = *(undefined4 *)(param_1 + 0x2c);
            *(undefined2 *)((longlong)puVar17 + 0x1e) = 0xffff;
            *(undefined4 *)((longlong)puVar17 + 0x22) = 0;
            *(undefined2 *)((longlong)puVar17 + 0x26) = 0;
            *puVar17 = uVar7;
            uVar19 = (uint)uVar25;
            if (uVar16 < *(uint *)(param_1 + 0x14)) {
                while ((((puVar20 = (undefined4 *)
                        ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + uVar22 * 4) * 0x70
                         + *(longlong *)(local_60 + 0x88)), lVar24 = local_60, uVar19 = local_68,
                        *(short *)(puVar9 + 4) == *(short *)(puVar20 + 4) &&
                        (*(short *)((longlong)puVar9 + 0x12) == *(short *)((longlong)puVar20 + 0x12))) &&
                         (*(short *)((longlong)puVar9 + 0x16) == *(short *)((longlong)puVar20 + 0x16))) &&
                        (((*(ushort *)(puVar9 + 6) == *(ushort *)(puVar20 + 6) &&
                           (*(short *)(puVar9 + 7) == *(short *)(puVar20 + 7))) &&
                          ((*(short *)((longlong)puVar9 + 0x1a) == *(short *)((longlong)puVar20 + 0x1a) &&
                            (*(char *)(puVar9 + 0xe) == *(char *)(puVar20 + 0xe)))))))) {
                    uVar16 = 0;
                    puVar11 = puVar17 + 10;
                    do {
                        if (((*(ushort *)puVar11 &
                              *(ushort *)(((longlong)puVar20 - (longlong)puVar17) + (longlong)puVar11)) == 0) ||
                            (*(ushort *)(puVar11 + 2) !=
                             *(ushort *)(((longlong)puVar20 - (longlong)puVar17) + 8 + (longlong)puVar11))) {
                            if (uVar16 < 4) goto LAB_140325e3d;
                            break;
                        }
                        uVar16 = uVar16 + 1;
                        puVar11 = (undefined4 *)((longlong)puVar11 + 2);
                    } while (uVar16 < 4);
                    if ((puVar9 != puVar20) &&
                        ((*(byte *)((ulonglong)*(ushort *)(puVar9 + 6) * 0xb8 + *(longlong *)(lVar15 + 0xf8)) &
                          1) != 0)) break;
                    puVar17[2] = puVar17[2] + puVar20[2];
                    if ((uint)puVar20[1] < (uint)puVar17[1]) {
                        puVar17[3] = puVar17[3] + (puVar17[1] - puVar20[1]);
                        puVar17[1] = puVar20[1];
                    }
                    if ((uint)(puVar17[1] + puVar17[3]) < (uint)(puVar20[3] + puVar20[1])) {
                        puVar17[3] = (puVar20[3] - puVar17[1]) + puVar20[1];
                    }
                    if (*(ushort *)(puVar17 + 5) < *(ushort *)(puVar20 + 5)) {
                        *(ushort *)(puVar17 + 5) = *(ushort *)(puVar20 + 5);
                    }
                    uVar16 = (int)uVar22 + 1;
                    uVar22 = (ulonglong)uVar16;
                    *(ushort *)(puVar17 + 10) = *(ushort *)(puVar17 + 10) & *(ushort *)(puVar20 + 10);
                    *(ushort *)((longlong)puVar17 + 0x2a) =
                            *(ushort *)((longlong)puVar17 + 0x2a) & *(ushort *)((longlong)puVar20 + 0x2a);
                    *(ushort *)(puVar17 + 0xb) = *(ushort *)(puVar17 + 0xb) & *(ushort *)(puVar20 + 0xb);
                    *(ushort *)((longlong)puVar17 + 0x2e) =
                            *(ushort *)((longlong)puVar17 + 0x2e) & *(ushort *)((longlong)puVar20 + 0x2e);
                    if (*(uint *)(param_1 + 0x14) <= uVar16) break;
                }
            }
            LAB_140325e3d:
            local_58 = puVar23;
            uVar7 = FUN_14030e510(*(undefined8 *)(param_1 + 8),puVar17);
            *puVar23 = uVar7;
            uVar7 = FUN_14030e690(*(undefined8 *)(param_1 + 8),puVar17);
            local_68 = uVar19 + 1;
            uVar25 = (ulonglong)local_68;
            puVar23[1] = uVar7;
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + puVar17[2];
        } while ((uint)uVar22 < *(uint *)(param_1 + 0x14));
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar24 + 0x18);
    if (*(uint *)(lVar15 + 0x1c0) != 0) {
        auVar4 = ZEXT816(4) * ZEXT416(*(uint *)(lVar15 + 0x1c0));
        uVar8 = SUB168(auVar4,0);
        if (SUB168(auVar4 >> 0x40,0) != 0) {
            uVar8 = 0xffffffffffffffff;
        }
        uVar8 = FUN_14018b280(uVar8);
        *(undefined8 *)(param_1 + 0x50) = uVar8;
        FUN_1407e4830();
        uVar22 = 0;
        uVar25 = uVar22;
        if (*(int *)(param_1 + 0x30) != 0) {
            do {
                lVar24 = (ulonglong)*(ushort *)(uVar25 * 0x70 + 0x16 + *(longlong *)(param_1 + 0x40)) * 0x30
                         + *(longlong *)(lVar15 + 0x1f8);
                uVar21 = uVar22;
                if (*(int *)(lVar24 + 0x20) != 0) {
                    do {
                        puVar14 = (ushort *)(uVar21 * 0x128 + *(longlong *)(lVar24 + 0x28));
                        uVar19 = (uint)*puVar14;
                        if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                        }
                        uVar19 = (uint)puVar14[1];
                        if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                        }
                        uVar19 = (int)uVar21 + 1;
                        uVar21 = (ulonglong)uVar19;
                    } while (uVar19 < *(uint *)(lVar24 + 0x20));
                }
                uVar19 = (int)uVar25 + 1;
                uVar25 = (ulonglong)uVar19;
            } while (uVar19 < *(uint *)(param_1 + 0x30));
        }
        uVar25 = uVar22;
        if (*(int *)(lVar15 + 0x318) != 0) {
            do {
                lVar24 = uVar25 * 400 + *(longlong *)(lVar15 + 800);
                uVar19 = (uint)*(ushort *)(lVar24 + 6);
                if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                }
                uVar19 = (uint)*(ushort *)(lVar24 + 8);
                if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                }
                uVar19 = (int)uVar25 + 1;
                uVar25 = (ulonglong)uVar19;
            } while (uVar19 < *(uint *)(lVar15 + 0x318));
        }
        uVar25 = uVar22;
        if (*(int *)(lVar15 + 0x560) != 0) {
            do {
                lVar24 = uVar25 * 0xa0 + *(longlong *)(lVar15 + 0x568);
                if ((uint)*(ushort *)(lVar24 + 10) < *(uint *)(lVar15 + 0x1c0)) {
                    *(undefined4 *)
                            (*(longlong *)(param_1 + 0x50) + (ulonglong)(uint)*(ushort *)(lVar24 + 10) * 4) = 1;
                }
                if ((uint)*(ushort *)(lVar24 + 4) < *(uint *)(lVar15 + 0x1c0)) {
                    *(undefined4 *)
                            (*(longlong *)(param_1 + 0x50) + (ulonglong)(uint)*(ushort *)(lVar24 + 4) * 4) = 1;
                }
                if ((*(ushort *)(lVar24 + 0xe) != 0xffff) &&
                    (lVar24 = (ulonglong)*(ushort *)(lVar24 + 0xe) * 0x30 + *(longlong *)(lVar15 + 0x1f8),
                            uVar21 = uVar22, *(int *)(lVar24 + 0x20) != 0)) {
                    do {
                        puVar14 = (ushort *)(uVar21 * 0x128 + *(longlong *)(lVar24 + 0x28));
                        uVar19 = (uint)*puVar14;
                        if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                        }
                        uVar19 = (uint)puVar14[1];
                        if (uVar19 < *(uint *)(lVar15 + 0x1c0)) {
                            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar19 * 4) = 1;
                        }
                        uVar19 = (int)uVar21 + 1;
                        uVar21 = (ulonglong)uVar19;
                    } while (uVar19 < *(uint *)(lVar24 + 0x20));
                }
                uVar19 = (int)uVar25 + 1;
                uVar25 = (ulonglong)uVar19;
            } while (uVar19 < *(uint *)(lVar15 + 0x560));
        }
        uVar25 = uVar22;
        if (*(int *)(lVar15 + 0x2f8) != 0) {
            do {
                lVar24 = *(longlong *)(lVar15 + 0x300) + uVar22;
                if (*(int *)(lVar24 + 4) == 0) {
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x90) + 0x978);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x90) + 0x994);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x90) + 0x996);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x90) + 0x99a);
                    LAB_1403261bd:
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                }
                else if (*(int *)(lVar24 + 4) == 1) {
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x98) + 0x3c4);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x98) + 0x3dc);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x98) + 0x3de);
                    if ((uint)uVar3 < *(uint *)(lVar15 + 0x1c0)) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar3 * 4) = 1;
                    }
                    uVar3 = *(ushort *)(*(longlong *)(lVar24 + 0x98) + 0x406);
                    goto LAB_1403261bd;
                }
                uVar25 = uVar25 + 1;
                uVar22 = uVar22 + 0xa0;
            } while (uVar25 < *(uint *)(lVar15 + 0x2f8));
        }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0x180);
    auVar4 = ZEXT816(4) * ZEXT416(uVar19);
    uVar8 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar8 = 0xffffffffffffffff;
    }
    lVar24 = FUN_14018b280(uVar8);
    FUN_1407e4830(lVar24);
    puVar10 = (ulonglong *)0x0;
    if (*(uint *)(param_1 + 0x30) != 0) {
        uVar25 = (ulonglong)*(uint *)(param_1 + 0x30);
        puVar12 = puVar10;
        do {
            uVar3 = *(ushort *)((longlong)puVar12 + *(longlong *)(param_1 + 0x40) + 0x10);
            uVar16 = (uint)*(ushort *)((longlong)puVar12 + *(longlong *)(param_1 + 0x40) + 0x12) +
                     (uint)uVar3;
            if (uVar3 < uVar16) {
                lVar15 = (ulonglong)(uint)uVar3 * 2;
                uVar22 = (ulonglong)(uVar16 - uVar3);
                do {
                    uVar3 = *(ushort *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0x1b8) + lVar15
                            );
                    if ((uVar3 < uVar19) && (*(int *)(lVar24 + (ulonglong)uVar3 * 4) == 0)) {
                        *(undefined4 *)(lVar24 + (ulonglong)uVar3 * 4) = 1;
                        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                    }
                    lVar15 = lVar15 + 2;
                    uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
            }
            puVar12 = puVar12 + 0xe;
            uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
    }
    FUN_14018b900(lVar24);
    puVar12 = (ulonglong *)(*(longlong *)(param_1 + 8) + 0x1d8);
    if (*(longlong *)(param_1 + 0x60) == 0) {
        *(ulonglong **)(param_1 + 0x60) = puVar12;
        puVar1 = (ulonglong *)(param_1 + 0x68);
        *puVar1 = *puVar12;
        *puVar12 = param_1;
        if (*puVar1 != 0) {
            *(ulonglong **)(*puVar1 + 0x60) = puVar1;
        }
    }
    lVar24 = *(longlong *)(param_1 + 8);
    local_50 = local_50 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x14);
    local_48 = *(ulonglong *)(param_1 + 0x18);
    plVar18 = (longlong *)(lVar24 + 0x1e0);
    if (*plVar18 == *(longlong *)(lVar24 + 0x1e8)) {
        FUN_1400290d0(plVar18);
    }
    uVar25 = (**(code **)(lVar24 + 0x1f8))(&local_50);
    ppuVar2 = (ulonglong **)
            (*(longlong *)(lVar24 + 0x1f0) + (uVar25 % *(ulonglong *)(lVar24 + 0x1e8)) * 8);
    puVar12 = (ulonglong *)FUN_14018b280(0x28);
    if (puVar12 != (ulonglong *)0x0) {
        puVar10 = *ppuVar2;
        *puVar12 = uVar25;
        puVar12[1] = (ulonglong)puVar10;
        puVar12[2] = local_50;
        puVar12[4] = param_1;
        puVar12[3] = local_48;
        puVar10 = puVar12;
    }
    *ppuVar2 = puVar10;
    *plVar18 = *plVar18 + 1;
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack136);
    return;
}



void FUN_140326380(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    int *piVar5;
    uint uVar6;
    ulonglong uVar7;

    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
        lVar3 = **(longlong **)(param_1 + 0x38);
        lVar2 = *(longlong *)(lVar1 + 0x78);
        if (*(char *)(lVar1 + 0x6d) == '\x01') {
            lVar3 = (**(code **)(lVar3 + 0x38))();
            if (lVar3 == 0) {
                return;
            }
            uVar7 = 0;
            if (*(int *)(param_1 + 0x14) != 0) {
                do {
                    uVar4 = 0;
                    piVar5 = (int *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + uVar7 * 4) * 0x70 +
                                     *(longlong *)(lVar1 + 0x88));
                    if (piVar5[2] != 0) {
                        do {
                            *(short *)(lVar3 + uVar4 * 2) =
                                    *(short *)(lVar2 + (ulonglong)(uint)(*piVar5 + (int)uVar4) * 2) +
                                    *(short *)(piVar5 + 1);
                            uVar6 = (int)uVar4 + 1;
                            uVar4 = (ulonglong)uVar6;
                        } while (uVar6 < (uint)piVar5[2]);
                    }
                    uVar6 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar6;
                    lVar3 = lVar3 + (ulonglong)(uint)piVar5[2] * 2;
                } while (uVar6 < *(uint *)(param_1 + 0x14));
            }
        }
        else {
            lVar3 = (**(code **)(lVar3 + 0x38))();
            if (lVar3 == 0) {
                return;
            }
            uVar7 = 0;
            if (*(int *)(param_1 + 0x14) != 0) {
                do {
                    uVar4 = 0;
                    piVar5 = (int *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x20) + uVar7 * 4) * 0x70 +
                                     *(longlong *)(lVar1 + 0x88));
                    if (piVar5[2] != 0) {
                        do {
                            *(int *)(lVar3 + uVar4 * 4) =
                                    *(int *)(lVar2 + (ulonglong)(uint)(*piVar5 + (int)uVar4) * 4) + piVar5[1];
                            uVar6 = (int)uVar4 + 1;
                            uVar4 = (ulonglong)uVar6;
                        } while (uVar6 < (uint)piVar5[2]);
                    }
                    uVar6 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar6;
                    lVar3 = lVar3 + (ulonglong)(uint)piVar5[2] * 4;
                } while (uVar6 < *(uint *)(param_1 + 0x14));
            }
        }
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))();
    }
    return;
}



ulonglong FUN_1403264c0(uint param_1,ulonglong param_2,longlong param_3)

{
    ushort uVar1;
    ushort uVar2;
    uint *puVar3;
    uint *puVar4;
    uint uVar5;
    uint uVar6;
    uint *puVar7;

    puVar4 = (uint *)((param_2 & 0xffffffff) * 0x70 + param_3);
    puVar7 = (uint *)((ulonglong)param_1 * 0x70 + param_3);
    if (*(short *)(puVar7 + 8) < *(short *)(puVar4 + 8)) {
        return 0xffffffff;
    }
    if (*(short *)(puVar7 + 8) <= *(short *)(puVar4 + 8)) {
        if (*(ushort *)(puVar7 + 4) < *(ushort *)(puVar4 + 4)) {
            return 0xffffffff;
        }
        if (*(ushort *)(puVar7 + 4) <= *(ushort *)(puVar4 + 4)) {
            if (*(ushort *)((longlong)puVar7 + 0x12) < *(ushort *)((longlong)puVar4 + 0x12)) {
                return 0xffffffff;
            }
            if (*(ushort *)((longlong)puVar7 + 0x12) <= *(ushort *)((longlong)puVar4 + 0x12)) {
                if (*(ushort *)((longlong)puVar7 + 0x16) < *(ushort *)((longlong)puVar4 + 0x16)) {
                    return 0xffffffff;
                }
                if (*(ushort *)((longlong)puVar7 + 0x16) <= *(ushort *)((longlong)puVar4 + 0x16)) {
                    if (*(ushort *)(puVar7 + 6) < *(ushort *)(puVar4 + 6)) {
                        return 0xffffffff;
                    }
                    if (*(ushort *)(puVar7 + 6) <= *(ushort *)(puVar4 + 6)) {
                        if (*(ushort *)(puVar7 + 7) < *(ushort *)(puVar4 + 7)) {
                            return 0xffffffff;
                        }
                        if (*(ushort *)(puVar7 + 7) <= *(ushort *)(puVar4 + 7)) {
                            if (*(ushort *)((longlong)puVar7 + 0x1a) < *(ushort *)((longlong)puVar4 + 0x1a)) {
                                return 0xffffffff;
                            }
                            if (*(ushort *)((longlong)puVar7 + 0x1a) <= *(ushort *)((longlong)puVar4 + 0x1a)) {
                                if (*(byte *)(puVar7 + 0xe) < *(byte *)(puVar4 + 0xe)) {
                                    return 0xffffffff;
                                }
                                if (*(byte *)(puVar7 + 0xe) <= *(byte *)(puVar4 + 0xe)) {
                                    uVar6 = 0;
                                    puVar3 = puVar7 + 0xc;
                                    uVar5 = uVar6;
                                    do {
                                        uVar1 = *(ushort *)puVar3;
                                        uVar2 = *(ushort *)(((longlong)puVar4 - (longlong)puVar7) + (longlong)puVar3);
                                        if (uVar1 < uVar2) {
                                            return 0xffffffff;
                                        }
                                        if (uVar1 >= uVar2 && uVar1 != uVar2) {
                                            return 1;
                                        }
                                        uVar5 = uVar5 + 1;
                                        puVar3 = (uint *)((longlong)puVar3 + 2);
                                    } while (uVar5 < 4);
                                    puVar3 = puVar7 + 10;
                                    do {
                                        if (*(int *)(&DAT_140b64448 + (ulonglong)*(ushort *)puVar3 * 4) <
                                            *(int *)(&DAT_140b64448 +
                                                     (ulonglong)
                                                     *(ushort *)
                                                             ((longlong)puVar3 + ((longlong)puVar4 - (longlong)puVar7)) * 4)) {
                                            return 0xffffffff;
                                        }
                                        if (*(int *)(&DAT_140b64448 +
                                                     (ulonglong)
                                                     *(ushort *)
                                                             ((longlong)puVar3 + ((longlong)puVar4 - (longlong)puVar7)) * 4) <
                                            *(int *)(&DAT_140b64448 + (ulonglong)*(ushort *)puVar3 * 4)) {
                                            return 1;
                                        }
                                        uVar6 = uVar6 + 1;
                                        puVar3 = (uint *)((longlong)puVar3 + 2);
                                    } while (uVar6 < 4);
                                    if (*(ushort *)((longlong)puVar4 + 0x22) <= *(ushort *)((longlong)puVar7 + 0x22))
                                    {
                                        if (*(ushort *)((longlong)puVar4 + 0x22) < *(ushort *)((longlong)puVar7 + 0x22))
                                        {
                                            return 1;
                                        }
                                        if (*(ushort *)((longlong)puVar4 + 0x26) <= *(ushort *)((longlong)puVar7 + 0x26)
                                                ) {
                                            if (*(ushort *)((longlong)puVar4 + 0x26) <
                                                *(ushort *)((longlong)puVar7 + 0x26)) {
                                                return 1;
                                            }
                                            if (*puVar4 <= *puVar7) {
                                                if (*puVar4 < *puVar7) {
                                                    return 1;
                                                }
                                                if (*(byte *)((longlong)puVar4 + 0x39) <= *(byte *)((longlong)puVar7 + 0x39)
                                                        ) {
                                                    return (ulonglong)
                                                            (*(byte *)((longlong)puVar4 + 0x39) <
                                                             *(byte *)((longlong)puVar7 + 0x39));
                                                }
                                            }
                                        }
                                    }
                                    return 0xffffffff;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}



int FUN_140326690(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140325690();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_1403266d0(longlong param_1,ulonglong *param_2)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    undefined auStack56 [32];
    ulonglong local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack56;
    local_18 = *param_2;
    uVar4 = (**(code **)(param_1 + 0x88))(&local_18);
    puVar5 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x80) + (uVar4 % *(ulonglong *)(param_1 + 0x78)) * 8);
    do {
        if (puVar5 == (ulonglong *)0x0) {
            LAB_140326752:
            if (*(longlong *)(param_1 + 0x70) == *(longlong *)(param_1 + 0x78)) {
                FUN_1400290d0(param_1 + 0x70);
            }
            uVar4 = (**(code **)(param_1 + 0x88))(&local_18);
            ppuVar1 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x80) + (uVar4 % *(ulonglong *)(param_1 + 0x78)) * 8);
            puVar5 = (ulonglong *)FUN_14018b280();
            if (puVar5 == (ulonglong *)0x0) {
                puVar5 = (ulonglong *)0x0;
            }
            else {
                puVar2 = *ppuVar1;
                *puVar5 = uVar4;
                puVar5[1] = (ulonglong)puVar2;
                puVar5[2] = local_18;
                puVar5[4] = 0;
                puVar5[3] = 0;
                puVar5[6] = 0;
                puVar5[5] = 0;
            }
            *ppuVar1 = puVar5;
            *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
            FUN_140326800(*ppuVar1 + 3,param_1,&local_18);
            LAB_1403267dd:
            FUN_1407db4f0(local_10 ^ (ulonglong)auStack56);
            return;
        }
        if ((uVar4 == *puVar5) && (iVar3 = (**(code **)(param_1 + 0x90))(&local_18), iVar3 != 0)) {
            if (puVar5 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1403267dd;
            goto LAB_140326752;
        }
        puVar5 = (ulonglong *)puVar5[1];
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x00014032684b)

void FUN_140326800(longlong *param_1,longlong param_2,longlong param_3)

{
    undefined4 *puVar1;
    short sVar2;
    uint uVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    undefined4 uVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong lVar11;
    ulonglong uVar12;
    uint *puVar13;
    uint uVar14;
    uint *puVar15;
    ulonglong uVar16;
    uint *puVar17;
    uint *puVar18;
    int iVar19;
    uint local_res10;

    uVar3 = *(uint *)(param_2 + 0x14);
    param_1[1] = 0;
    iVar19 = (uVar3 >> 1) + (uVar3 & 1);
    FUN_140326f00(param_1,iVar19);
    param_1[3] = 0;
    lVar9 = FUN_14018dbc0(param_1[2],iVar19);
    if (param_1[2] != lVar9) {
        FUN_1407db590(lVar9);
        if (param_1[2] != 0) {
            (**(code **)(*(longlong *)(param_1[2] + -0x10) + 8))();
        }
        param_1[2] = lVar9;
    }
    uVar16 = 0;
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x40);
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x38);
    local_res10 = 0;
    uVar10 = uVar16;
    uVar12 = uVar16;
    if (*(int *)(param_2 + 0x14) != 0) {
        do {
            uVar7 = (uint)uVar10;
            uVar10 = 0;
            iVar19 = (int)uVar16;
            puVar17 = (uint *)((ulonglong)*(uint *)(*(longlong *)(param_2 + 0x20) + uVar16 * 4) * 0x70 +
                               *(longlong *)(lVar9 + 0x88));
            uVar3 = puVar17[2];
            if ((uint)*(ushort *)((longlong)puVar17 + 0x1e) < *(uint *)(lVar4 + 0x200)) {
                sVar2 = *(short *)(*(longlong *)(lVar4 + 0x208) +
                                   (ulonglong)*(ushort *)((longlong)puVar17 + 0x1e) * 4);
                if (sVar2 == 0) {
                    uVar16 = (ulonglong)(iVar19 + 1);
                    local_res10 = uVar7;
                }
                else {
                    do {
                        if (sVar2 == *(short *)(param_3 + uVar10 * 2)) break;
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < 4);
                    if (uVar10 == 4) {
                        uVar16 = (ulonglong)(iVar19 + 1);
                        local_res10 = uVar7;
                    }
                    else {
                        uVar7 = (int)uVar12 + 1;
                        uVar10 = (ulonglong)uVar7;
                        FUN_140326e40();
                        if (((ulonglong)param_1[3] < uVar10 || param_1[3] == uVar10) &&
                            (lVar11 = FUN_14018db00(param_1[2],uVar10), param_1[2] != lVar11)) {
                            FUN_1407db590(lVar11);
                            if (param_1[2] != 0) {
                                (**(code **)(*(longlong *)(param_1[2] + -0x10) + 8))();
                            }
                            param_1[2] = lVar11;
                        }
                        param_1[3] = uVar10;
                        puVar15 = (uint *)(uVar12 * 0x70 + *param_1);
                        puVar1 = (undefined4 *)(param_1[2] + uVar12 * 8);
                        uVar16 = (ulonglong)(iVar19 + 1U);
                        *puVar15 = *puVar17;
                        puVar15[1] = puVar17[1];
                        puVar15[2] = puVar17[2];
                        puVar15[3] = puVar17[3];
                        *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar17 + 4);
                        *(undefined2 *)((longlong)puVar15 + 0x12) = *(undefined2 *)((longlong)puVar17 + 0x12);
                        *(undefined2 *)(puVar15 + 5) = *(undefined2 *)(puVar17 + 5);
                        *(undefined2 *)((longlong)puVar15 + 0x16) = *(undefined2 *)((longlong)puVar17 + 0x16);
                        *(undefined2 *)(puVar15 + 6) = *(undefined2 *)(puVar17 + 6);
                        *(undefined2 *)((longlong)puVar15 + 0x1a) = *(undefined2 *)((longlong)puVar17 + 0x1a);
                        *(undefined2 *)(puVar15 + 7) = *(undefined2 *)(puVar17 + 7);
                        *(undefined2 *)((longlong)puVar15 + 0x1e) = *(undefined2 *)((longlong)puVar17 + 0x1e);
                        *(undefined2 *)(puVar15 + 8) = *(undefined2 *)(puVar17 + 8);
                        *(undefined2 *)((longlong)puVar15 + 0x22) = *(undefined2 *)((longlong)puVar17 + 0x22);
                        *(undefined2 *)(puVar15 + 9) = *(undefined2 *)(puVar17 + 9);
                        *(undefined2 *)((longlong)puVar15 + 0x26) = *(undefined2 *)((longlong)puVar17 + 0x26);
                        *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar17 + 10);
                        *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar17 + 0xc);
                        *(undefined *)(puVar15 + 0xe) = *(undefined *)(puVar17 + 0xe);
                        *(undefined *)((longlong)puVar15 + 0x39) = *(undefined *)((longlong)puVar17 + 0x39);
                        *(undefined *)((longlong)puVar15 + 0x3a) = *(undefined *)((longlong)puVar17 + 0x3a);
                        uVar14 = puVar17[0x11];
                        uVar5 = puVar17[0x12];
                        uVar6 = puVar17[0x13];
                        puVar15[0x10] = puVar17[0x10];
                        puVar15[0x11] = uVar14;
                        puVar15[0x12] = uVar5;
                        puVar15[0x13] = uVar6;
                        uVar14 = puVar17[0x15];
                        uVar5 = puVar17[0x16];
                        uVar6 = puVar17[0x17];
                        puVar15[0x14] = puVar17[0x14];
                        puVar15[0x15] = uVar14;
                        puVar15[0x16] = uVar5;
                        puVar15[0x17] = uVar6;
                        puVar15[0x18] = puVar17[0x18];
                        puVar15[0x19] = puVar17[0x19];
                        uVar14 = puVar17[0x1a];
                        *(undefined4 *)((longlong)puVar15 + 0x22) = 0;
                        puVar15[0x1a] = uVar14;
                        *(undefined2 *)((longlong)puVar15 + 0x26) = 0;
                        *puVar15 = local_res10;
                        *(undefined2 *)((longlong)puVar15 + 0x1e) = 0xffff;
                        if (iVar19 + 1U < *(uint *)(param_2 + 0x14)) {
                            while( true ) {
                                uVar10 = 0;
                                puVar18 = (uint *)((ulonglong)*(uint *)(*(longlong *)(param_2 + 0x20) + uVar16 * 4)
                                                   * 0x70 + *(longlong *)(lVar9 + 0x88));
                                if ((*(uint *)(lVar4 + 0x200) <= (uint)*(ushort *)((longlong)puVar18 + 0x1e)) ||
                                    (sVar2 = *(short *)(*(longlong *)(lVar4 + 0x208) +
                                                        (ulonglong)(uint)*(ushort *)((longlong)puVar18 + 0x1e) * 4),
                                            uVar12 = uVar10, sVar2 == 0)) break;
                                do {
                                    if (sVar2 == *(short *)(param_3 + uVar12 * 2)) {
                                        uVar16 = (ulonglong)((int)uVar16 + 1);
                                        break;
                                    }
                                    uVar12 = uVar12 + 1;
                                } while (uVar12 < 4);
                                if (uVar12 == 4) break;
                                if (((((*(short *)(puVar17 + 4) != *(short *)(puVar18 + 4)) ||
                                       (*(short *)((longlong)puVar17 + 0x12) != *(short *)((longlong)puVar18 + 0x12))
                                      ) || (*(short *)((longlong)puVar17 + 0x16) !=
                                            *(short *)((longlong)puVar18 + 0x16))) ||
                                     ((*(ushort *)(puVar17 + 6) != *(ushort *)(puVar18 + 6) ||
                                       (*(short *)(puVar17 + 7) != *(short *)(puVar18 + 7))))) ||
                                    ((*(short *)((longlong)puVar17 + 0x1a) != *(short *)((longlong)puVar18 + 0x1a) ||
                                      (*(char *)(puVar17 + 0xe) != *(char *)(puVar18 + 0xe))))) goto LAB_140326c8a;
                                puVar13 = puVar15 + 10;
                                do {
                                    if (((*(ushort *)puVar13 &
                                          *(ushort *)(((longlong)puVar18 - (longlong)puVar15) + (longlong)puVar13)) ==
                                         0) || (*(ushort *)(puVar13 + 2) !=
                                                *(ushort *)
                                                        (((longlong)puVar18 - (longlong)puVar15) + 8 + (longlong)puVar13))) {
                                        if ((uint)uVar10 < 4) goto LAB_140326c8a;
                                        break;
                                    }
                                    uVar14 = (uint)uVar10 + 1;
                                    uVar10 = (ulonglong)uVar14;
                                    puVar13 = (uint *)((longlong)puVar13 + 2);
                                } while (uVar14 < 4);
                                if ((puVar17 != puVar18) &&
                                    ((*(byte *)((ulonglong)*(ushort *)(puVar17 + 6) * 0xb8 +
                                                *(longlong *)(lVar4 + 0xf8)) & 1) != 0)) goto LAB_140326c8a;
                                puVar15[2] = puVar15[2] + puVar18[2];
                                if (puVar18[1] < puVar15[1]) {
                                    puVar15[3] = puVar15[3] + (puVar15[1] - puVar18[1]);
                                    puVar15[1] = puVar18[1];
                                }
                                if (puVar15[1] + puVar15[3] < puVar18[3] + puVar18[1]) {
                                    puVar15[3] = (puVar18[3] - puVar15[1]) + puVar18[1];
                                }
                                if (*(ushort *)(puVar15 + 5) < *(ushort *)(puVar18 + 5)) {
                                    *(ushort *)(puVar15 + 5) = *(ushort *)(puVar18 + 5);
                                }
                                uVar14 = (int)uVar16 + 1;
                                uVar16 = (ulonglong)uVar14;
                                *(ushort *)(puVar15 + 10) = *(ushort *)(puVar15 + 10) & *(ushort *)(puVar18 + 10);
                                *(ushort *)((longlong)puVar15 + 0x2a) =
                                        *(ushort *)((longlong)puVar15 + 0x2a) & *(ushort *)((longlong)puVar18 + 0x2a);
                                *(ushort *)(puVar15 + 0xb) = *(ushort *)(puVar15 + 0xb) & *(ushort *)(puVar18 + 0xb)
                                        ;
                                *(ushort *)((longlong)puVar15 + 0x2e) =
                                        *(ushort *)((longlong)puVar15 + 0x2e) & *(ushort *)((longlong)puVar18 + 0x2e);
                                if (*(uint *)(param_2 + 0x14) <= uVar14) goto LAB_140326c8a;
                            }
                            uVar16 = (ulonglong)((int)uVar16 + 1);
                        }
                        LAB_140326c8a:
                        uVar8 = FUN_14030e510(*(undefined8 *)(param_2 + 8),puVar15);
                        *puVar1 = uVar8;
                        uVar8 = FUN_14030e690(*(undefined8 *)(param_2 + 8),puVar15);
                        uVar12 = (ulonglong)uVar7;
                        puVar1[1] = uVar8;
                    }
                }
            }
            else {
                uVar16 = (ulonglong)(iVar19 + 1);
                local_res10 = uVar7;
            }
            local_res10 = local_res10 + uVar3;
            uVar10 = (ulonglong)local_res10;
        } while ((uint)uVar16 < *(uint *)(param_2 + 0x14));
    }
    return;
}



undefined8 * FUN_140326d00(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(1);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1403255d0;
    param_1[4] = FUN_1402dd540;
    return param_1;
}



void FUN_140326d80(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong *)(param_1[2] + uVar4 * 8);
            lVar3 = *(longlong *)(param_1[2] + uVar4 * 8);
            while (lVar3 != 0) {
                lVar3 = *plVar1;
                *plVar1 = *(longlong *)(lVar3 + 8);
                lVar2 = *(longlong *)(lVar3 + 0x28);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar3 + 0x18);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar3,0);
                lVar3 = *plVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



void FUN_140326e40(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;

    if (param_2 <= (ulonglong)param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar1 = FUN_14018db00(*param_1,param_2,0x70);
    if (*param_1 != lVar1) {
        uVar2 = 0;
        if (param_1[1] != 0) {
            lVar3 = lVar1;
            do {
                if (lVar3 != 0) {
                    FUN_140326fb0(lVar3,(lVar3 - lVar1) + *param_1);
                }
                uVar2 = uVar2 + 1;
                lVar3 = lVar3 + 0x70;
            } while (uVar2 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar1;
    }
    param_1[1] = param_2;
    return;
}



void FUN_140326f00(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (param_2 <= (ulonglong)param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
    }
    lVar1 = FUN_14018dbc0(*param_1,param_2,0x70);
    if (*param_1 != lVar1) {
        uVar3 = 0;
        if (param_1[1] != 0) {
            lVar2 = lVar1;
            do {
                if (lVar2 != 0) {
                    FUN_140326fb0(lVar2,(lVar2 - lVar1) + *param_1);
                }
                uVar3 = uVar3 + 1;
                lVar2 = lVar2 + 0x70;
            } while (uVar3 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar1;
    }
    return;
}



undefined4 * FUN_140326fb0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
    *(undefined2 *)((longlong)param_1 + 0x16) = *(undefined2 *)((longlong)param_2 + 0x16);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
    *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)((longlong)param_2 + 0x1a);
    *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
    *(undefined2 *)((longlong)param_1 + 0x1e) = *(undefined2 *)((longlong)param_2 + 0x1e);
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x22) = *(undefined2 *)((longlong)param_2 + 0x22);
    *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
    *(undefined2 *)((longlong)param_1 + 0x26) = *(undefined2 *)((longlong)param_2 + 0x26);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined *)(param_1 + 0xe) = *(undefined *)(param_2 + 0xe);
    *(undefined *)((longlong)param_1 + 0x39) = *(undefined *)((longlong)param_2 + 0x39);
    *(undefined *)((longlong)param_1 + 0x3a) = *(undefined *)((longlong)param_2 + 0x3a);
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
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    return param_1;
}



ulonglong FUN_140327080(longlong param_1,uint param_2)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;

    uVar3 = *(uint *)(param_1 + 0x80);
    uVar2 = 0;
    if (uVar3 != 0) {
        do {
            uVar1 = (uVar3 - (int)uVar2 >> 1) + (int)uVar2;
            if (*(ushort *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar1 * 0x30) < param_2) {
                uVar2 = (ulonglong)(uVar1 + 1);
                uVar1 = uVar3;
            }
            uVar3 = uVar1;
        } while ((uint)uVar2 < uVar3);
    }
    if (((uint)uVar2 < *(uint *)(param_1 + 0x80)) &&
        (param_2 == *(ushort *)(*(longlong *)(param_1 + 0x88) + uVar2 * 0x30))) {
        return uVar2;
    }
    return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140327110(longlong param_1)

{
    undefined **ppuVar1;
    undefined4 uVar2;
    undefined *puVar3;
    char cVar4;
    short sVar8;
    short sVar9;
    short sVar10;
    short sVar11;
    ulonglong uVar12;
    unkbyte10 Var13;
    undefined auVar14 [12];
    undefined auVar15 [14];
    short sVar16;
    undefined6 uVar17;
    ulonglong uVar18;
    undefined4 *puVar19;
    undefined **ppuVar20;
    int iVar21;
    uint uVar23;
    int iVar24;
    undefined in_XMM0 [16];
    undefined auVar22 [16];
    int iVar25;
    char cVar26;
    char cVar27;
    char cVar5;
    char cVar6;
    char cVar7;

    if ((DAT_140dc0e10 & 1) == 0) {
        DAT_140dc0e10 = DAT_140dc0e10 | 1;
        auVar22 = maxps(in_XMM0 & (undefined  [16])0x0,_DAT_140b7b0c0);
        auVar22 = minps(auVar22,_DAT_140b7b240);
        iVar21 = (int)(SUB164(auVar22,0) * 255.0 + 0.5);
        uVar23 = (uint)(SUB164(auVar22 >> 0x20,0) * 255.0 + 0.5);
        iVar24 = (int)(SUB164(auVar22 >> 0x40,0) * 255.0 + 0.5);
        iVar25 = (int)(SUB164(auVar22 >> 0x60,0) * 255.0 + 0.5);
        in_XMM0 = ZEXT816(CONCAT44(iVar25,iVar24)) << 0x40;
        cVar26 = (char)((uint)iVar21 >> 0x10);
        cVar27 = (char)((uint)iVar25 >> 0x10);
        uVar18 = (ulonglong)
                CONCAT16((char)(uVar23 >> 0x10),
                         CONCAT15((char)(uVar23 >> 8),CONCAT14((char)uVar23,iVar24)));
        uVar12 = ((ulonglong)uVar23 & 0xff000000) << 0x20 | uVar18;
        Var13 = CONCAT19((char)((uint)iVar21 >> 8),CONCAT18((char)iVar21,uVar12));
        auVar14 = CONCAT111((char)((uint)iVar21 >> 0x18),CONCAT110(cVar26,Var13));
        auVar15 = CONCAT113((char)((uint)iVar25 >> 8),CONCAT112((char)iVar25,auVar14));
        sVar8 = (short)iVar24;
        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar24 - (0xff < sVar8);
        sVar8 = (short)(uVar18 >> 0x10);
        sVar9 = (short)(uVar18 >> 0x20);
        cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)(uVar18 >> 0x20) - (0xff < sVar9);
        sVar9 = (short)(uVar12 >> 0x30);
        sVar10 = (short)((unkuint10)Var13 >> 0x40);
        cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar21 - (0xff < sVar10);
        sVar10 = SUB122(auVar14 >> 0x50,0);
        sVar11 = SUB142(auVar15 >> 0x60,0);
        cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar25 - (0xff < sVar11);
        sVar11 = SUB162(CONCAT115((char)((uint)iVar25 >> 0x18),CONCAT114(cVar27,auVar15)) >> 0x70,0);
        sVar16 = CONCAT11((0 < sVar8) * (sVar8 < 0xff) * (char)(uVar18 >> 0x10) - (0xff < sVar8),cVar4);
        uVar2 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * (char)(uVar18 >> 0x30) - (0xff < sVar9),
                         CONCAT12(cVar5,sVar16));
        uVar17 = CONCAT15((0 < sVar10) * (sVar10 < 0xff) * cVar26 - (0xff < sVar10),
                          CONCAT14(cVar6,uVar2));
        sVar8 = (short)((uint)uVar2 >> 0x10);
        sVar9 = (short)((uint6)uVar17 >> 0x20);
        sVar10 = (short)(CONCAT17((0 < sVar11) * (sVar11 < 0xff) * cVar27 - (0xff < sVar11),
                                  CONCAT16(cVar7,uVar17)) >> 0x30);
        _DAT_140c8a608 =
                CONCAT13((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                         CONCAT12((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                  CONCAT11((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                           (0 < sVar16) * (sVar16 < 0xff) * cVar4 - (0xff < sVar16))));
    }
    if ((DAT_140dc0e10 & 2) == 0) {
        DAT_140dc0e10 = DAT_140dc0e10 | 2;
        auVar22 = maxps(in_XMM0 & (undefined  [16])0x0,_DAT_140b7a330);
        auVar22 = minps(auVar22,_DAT_140b7b240);
        iVar21 = (int)(SUB164(auVar22,0) * 255.0 + 0.5);
        uVar23 = (uint)(SUB164(auVar22 >> 0x20,0) * 255.0 + 0.5);
        iVar24 = (int)(SUB164(auVar22 >> 0x40,0) * 255.0 + 0.5);
        iVar25 = (int)(SUB164(auVar22 >> 0x60,0) * 255.0 + 0.5);
        cVar26 = (char)((uint)iVar21 >> 0x10);
        cVar27 = (char)((uint)iVar25 >> 0x10);
        uVar18 = (ulonglong)
                CONCAT16((char)(uVar23 >> 0x10),
                         CONCAT15((char)(uVar23 >> 8),CONCAT14((char)uVar23,iVar24)));
        uVar12 = ((ulonglong)uVar23 & 0xff000000) << 0x20 | uVar18;
        Var13 = CONCAT19((char)((uint)iVar21 >> 8),CONCAT18((char)iVar21,uVar12));
        auVar14 = CONCAT111((char)((uint)iVar21 >> 0x18),CONCAT110(cVar26,Var13));
        auVar15 = CONCAT113((char)((uint)iVar25 >> 8),CONCAT112((char)iVar25,auVar14));
        sVar8 = (short)iVar24;
        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar24 - (0xff < sVar8);
        sVar8 = (short)(uVar18 >> 0x10);
        sVar9 = (short)(uVar18 >> 0x20);
        cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)(uVar18 >> 0x20) - (0xff < sVar9);
        sVar9 = (short)(uVar12 >> 0x30);
        sVar10 = (short)((unkuint10)Var13 >> 0x40);
        cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar21 - (0xff < sVar10);
        sVar10 = SUB122(auVar14 >> 0x50,0);
        sVar11 = SUB142(auVar15 >> 0x60,0);
        cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)iVar25 - (0xff < sVar11);
        sVar11 = SUB162(CONCAT115((char)((uint)iVar25 >> 0x18),CONCAT114(cVar27,auVar15)) >> 0x70,0);
        sVar16 = CONCAT11((0 < sVar8) * (sVar8 < 0xff) * (char)(uVar18 >> 0x10) - (0xff < sVar8),cVar4);
        uVar2 = CONCAT13((0 < sVar9) * (sVar9 < 0xff) * (char)(uVar18 >> 0x30) - (0xff < sVar9),
                         CONCAT12(cVar5,sVar16));
        uVar17 = CONCAT15((0 < sVar10) * (sVar10 < 0xff) * cVar26 - (0xff < sVar10),
                          CONCAT14(cVar6,uVar2));
        sVar8 = (short)((uint)uVar2 >> 0x10);
        sVar9 = (short)((uint6)uVar17 >> 0x20);
        sVar10 = (short)(CONCAT17((0 < sVar11) * (sVar11 < 0xff) * cVar27 - (0xff < sVar11),
                                  CONCAT16(cVar7,uVar17)) >> 0x30);
        _DAT_140c8a610 =
                CONCAT13((0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10),
                         CONCAT12((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                  CONCAT11((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                           (0 < sVar16) * (sVar16 < 0xff) * cVar4 - (0xff < sVar16))));
    }
    if ((DAT_140dc0e10 & 4) == 0) {
        DAT_140dc0e10 = DAT_140dc0e10 | 4;
        DAT_140c8a60c = 0;
    }
    puVar19 = &DAT_140b64468;
    ppuVar20 = &PTR_DAT_140c58b60;
    do {
        uVar2 = *puVar19;
        puVar19 = puVar19 + 1;
        ppuVar1 = ppuVar20 + 1;
        *(undefined4 *)(param_1 + -0x140b643bc + (longlong)puVar19) = uVar2;
        puVar3 = *ppuVar20;
        *(undefined8 *)(param_1 + -0x140c58b10 + (longlong)ppuVar1) = 0;
        *(undefined **)(param_1 + -0x140c58b68 + (longlong)ppuVar1) = puVar3;
        ppuVar20 = ppuVar1;
    } while ((longlong)puVar19 < 0x140b64494);
    return param_1;
}



void FUN_140327210(longlong param_1,longlong param_2)

{
    uint uVar1;
    uint *puVar2;
    longlong lVar3;
    longlong lVar4;

    uVar1 = 1;
    lVar4 = 0;
    puVar2 = (uint *)(param_1 + 0xb0);
    lVar3 = 0xb;
    do {
        if ((uVar1 & *(ushort *)(param_2 + 6)) != 0) {
            *puVar2 = (uint)*(byte *)(lVar4 + 8 + param_2);
            *(ulonglong *)(param_1 + lVar4 * 8) =
                    (ulonglong)*(byte *)(lVar4 + 0x13 + param_2) + *(longlong *)(param_2 + 0x28);
            *(ulonglong *)(param_1 + 0x58 + lVar4 * 8) = (ulonglong)*(byte *)(param_2 + 4);
        }
        uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
        lVar4 = lVar4 + 1;
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((*(ushort *)(param_2 + 6) & 0x300) == 0x100) {
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
    }
    return;
}



undefined8 *
FUN_1403272b0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b644f8;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 1) = param_2;
    if ((undefined8 *)param_1[2] != param_3) {
        if (param_3 != (undefined8 *)0x0) {
            (**(code **)*param_3)(param_3);
        }
        if ((longlong *)param_1[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[2] + 8))();
        }
        param_1[2] = param_3;
    }
    *(undefined4 *)(param_1 + 3) = param_4;
    plVar2 = (longlong *)(param_1[2] + 0x6a8);
    if (param_1[6] == 0) {
        param_1[6] = plVar2;
        plVar1 = param_1 + 7;
        *plVar1 = *plVar2;
        *plVar2 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x30) = plVar1;
        }
    }
    return param_1;
}



undefined8 FUN_140327360(undefined8 param_1,ulonglong param_2)

{
    FUN_1403273a0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1403273a0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b644f8;
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(undefined8 *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014032740b. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)param_1[2] + 8))();
        return;
    }
    return;
}



void FUN_140327420(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;

    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3f0))();
    if (iVar2 == 0) {
        plVar1 = *(longlong **)(param_1 + 0x10);
        if ((code *)plVar1[0x76] != (code *)0x0) {
            (*(code *)plVar1[0x76])
                    (plVar1,*(undefined4 *)(param_1 + 0x40),param_1 + 0x44,
                     *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 8),plVar1[0x77]);
            return;
        }
        if (((*(byte *)(param_1 + 0x58) & 0x80) != 0) &&
            (iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,*(undefined4 *)(param_1 + 0x44)), iVar2 != 0))
        {
            uVar3 = FUN_1401ae6a0(0,0xffff);
            *(undefined4 *)(param_1 + 0x48) = uVar3;
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x248))
                    (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x40),param_1 + 0x44);
        }
    }
    return;
}



void FUN_1403274c0(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    if ((*(longlong **)(param_1 + 0x10))[0x78] != 0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3f0))();
        if (iVar2 == 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            (**(code **)(lVar1 + 0x3c0))
                    (lVar1,*(undefined4 *)(param_1 + 0x40),param_1 + 0x44,
                     *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(lVar1 + 0x3c8));
        }
    }
    return;
}



void FUN_140327520(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    if ((*(longlong **)(param_1 + 0x10))[0x7a] != 0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3f0))();
        if (iVar2 == 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            (**(code **)(lVar1 + 0x3d0))
                    (lVar1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                     param_1 + 0x50,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 8),
                     *(undefined8 *)(lVar1 + 0x3d8));
        }
    }
    return;
}



void FUN_1403275e0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3f0))();
    if (iVar1 == 0) {
        plVar2 = (longlong *)
                (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x18))();
        (**(code **)(*plVar2 + 0x108))
                (plVar2,*(undefined4 *)(param_1 + 0x40),param_1 + 0x50,*plVar2,
                 *(undefined4 *)(param_1 + 100));
    }
    return;
}



void FUN_140327640(longlong param_1)

{
    longlong lVar1;
    int iVar2;

    if ((*(longlong **)(param_1 + 0x10))[0x7f] != 0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3f0))();
        if (iVar2 == 0) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            // WARNING: Could not recover jumptable at 0x000140327677. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(lVar1 + 0x3f8))(lVar1,*(undefined8 *)(lVar1 + 0x400));
            return;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403282e0(undefined8 param_1,undefined (**param_2) [16],longlong param_3,float *param_4)

{
    longlong lVar1;
    float fVar2;
    int iVar3;
    undefined (*pauVar4) [16];
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int *piVar8;
    longlong lVar9;

    if ((DAT_140dc0e14 & 1) == 0) {
        DAT_140dc0e14 = DAT_140dc0e14 | 1;
        _DAT_140dc0e20 = 0;
        uRam0000000140dc0e24 = 0;
        uRam0000000140dc0e28 = 0;
        uRam0000000140dc0e2c = 0x3f800000;
        _DAT_140dc0e30 = 0x3f800000;
        uRam0000000140dc0e34 = 0;
        uRam0000000140dc0e38 = 0;
        uRam0000000140dc0e3c = 0;
        _DAT_140dc0e40 = 0xbf800000;
        uRam0000000140dc0e44 = 0;
        uRam0000000140dc0e48 = 0;
        uRam0000000140dc0e4c = 0x3f800000;
        _DAT_140dc0e60 = 0;
        uRam0000000140dc0e64 = 0xbf800000;
        uRam0000000140dc0e68 = 0;
        uRam0000000140dc0e6c = 0x3f800000;
        _DAT_140dc0e50 = 0;
        uRam0000000140dc0e54 = 0x3f800000;
        uRam0000000140dc0e58 = 0;
        uRam0000000140dc0e5c = 0;
        _DAT_140dc0e80 = 0;
        uRam0000000140dc0e84 = 0;
        uRam0000000140dc0e88 = 0xbf800000;
        uRam0000000140dc0e8c = 0x3f800000;
        _DAT_140dc0e70 = 0;
        uRam0000000140dc0e74 = 0;
        uRam0000000140dc0e78 = 0x3f800000;
        uRam0000000140dc0e7c = 0;
    }
    piVar8 = (int *)(param_3 + 0x90);
    lVar9 = 5;
    do {
        iVar3 = piVar8[-0x23];
        if ((iVar3 == 0) || (*piVar8 != 0)) {
            fVar2 = *param_4;
            lVar1 = (longlong)iVar3 * 0x10;
            **param_2 = CONCAT412(*(float *)(lVar1 + 0x140dc0e2c) * fVar2,
                                  CONCAT48(*(float *)(lVar1 + 0x140dc0e28) * fVar2,
                                           CONCAT44(*(float *)(lVar1 + 0x140dc0e24) * fVar2,
                                                    *(float *)(&DAT_140dc0e20 + lVar1) * fVar2)));
        }
        else {
            lVar1 = (longlong)iVar3 * 0x10;
            uVar5 = *(undefined4 *)(lVar1 + 0x140dc0e24);
            uVar6 = *(undefined4 *)(lVar1 + 0x140dc0e28);
            uVar7 = *(undefined4 *)(lVar1 + 0x140dc0e2c);
            pauVar4 = *param_2;
            *(undefined4 *)*pauVar4 = *(undefined4 *)(&DAT_140dc0e20 + lVar1);
            *(undefined4 *)(*pauVar4 + 4) = uVar5;
            *(undefined4 *)(*pauVar4 + 8) = uVar6;
            *(undefined4 *)(*pauVar4 + 0xc) = uVar7;
        }
        piVar8 = piVar8 + 1;
        param_4 = param_4 + 5;
        param_2 = param_2 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403283c0(longlong param_1,int param_2,uint param_3,longlong *param_4,ulonglong param_5,
                   longlong param_6)

{
    undefined4 *puVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    uint6 uVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    uint uVar18;
    longlong *plVar19;
    undefined (*pauVar20) [16];
    short *psVar21;
    longlong lVar22;
    undefined4 *puVar23;
    undefined8 *puVar24;
    float *pfVar25;
    float *pfVar26;
    longlong *plVar27;
    uint uVar28;
    uint uVar29;
    int *piVar30;
    ulonglong uVar31;
    undefined8 uVar32;
    uint uVar33;
    uint uVar34;
    longlong lVar35;
    int *piVar36;
    int *piVar37;
    longlong *plVar38;
    undefined4 *puVar39;
    byte bVar40;
    uint uVar41;
    uint uVar42;
    undefined4 uVar43;
    longlong lVar44;
    ulonglong uVar45;
    ushort *puVar46;
    longlong lVar47;
    int *piVar48;
    uint uVar49;
    ulonglong uVar50;
    undefined extraout_XMM0 [16];
    undefined auVar51 [16];
    float fVar52;
    ushort uVar56;
    undefined auVar53 [12];
    undefined auVar54 [16];
    float fVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    undefined auStack1176 [32];
    undefined *local_478;
    undefined4 local_470;
    undefined4 local_468;
    undefined4 local_460;
    undefined4 local_458;
    undefined4 local_454;
    undefined4 local_450;
    undefined4 local_44c;
    undefined4 local_448;
    uint local_444;
    uint local_440;
    float local_438;
    float fStack1076;
    int local_430;
    uint local_42c;
    longlong local_428;
    uint local_420;
    longlong local_418;
    longlong local_410;
    int local_408;
    longlong *local_400;
    uint local_3f8;
    uint local_3f4;
    uint local_3f0;
    int local_3ec;
    undefined local_3e8 [8];
    undefined8 uStack992;
    undefined4 local_3d4;
    longlong local_3c8;
    int *local_3c0;
    longlong local_3b8;
    longlong local_3b0;
    uint local_3a8;
    int local_3a4;
    float local_3a0;
    longlong *local_398;
    longlong local_390;
    ulonglong local_388;
    longlong *local_380;
    int *local_378;
    float *local_370;
    longlong *local_368;
    float *local_360;
    ulonglong local_358;
    longlong local_350;
    longlong *local_338;
    longlong local_328;
    longlong lStack800;
    undefined8 local_318;
    longlong lStack784;
    ulonglong local_308;
    undefined8 uStack768;
    uint local_2f8;
    undefined4 uStack756;
    uint local_2e8;
    uint local_2e4;
    undefined4 local_2e0;
    undefined4 local_2dc;
    undefined4 local_2d8;
    undefined4 local_2d4;
    uint local_2d0;
    undefined4 local_2cc;
    undefined4 local_2c8;
    undefined8 local_2c4;
    undefined4 local_2bc;
    undefined4 local_2b8;
    undefined8 local_2b0;
    uint local_2a8;
    longlong local_2a0 [8];
    undefined8 local_260;
    undefined8 local_258;
    longlong local_250 [6];
    longlong local_220 [10];
    longlong local_1d0 [6];
    undefined4 local_1a0 [8];
    undefined4 local_180;
    undefined4 local_17c;
    undefined4 local_178;
    undefined4 local_174;
    undefined4 local_170;
    undefined4 local_16c;
    ulonglong local_160 [8];
    undefined8 local_120;
    undefined8 local_118;
    ulonglong local_110 [7];
    undefined4 *local_d8;
    longlong local_d0;
    ulonglong local_88;
    undefined auVar55 [16];

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack1176;
    lVar44 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    local_3b8 = *param_4;
    plVar27 = *(longlong **)(local_3b8 + 0x30);
    plVar38 = *(longlong **)(local_3b8 + 0x48);
    local_358 = plVar27[7];
    lVar22 = plVar27[8];
    local_418 = *(longlong *)(local_3b8 + 0x40);
    local_3a0 = *(float *)(local_3b8 + 0x50);
    local_360 = *(float **)(local_3b8 + 0x38);
    piVar48 = (int *)(*(longlong *)(lVar22 + 0x1f8) + 8 +
                      (ulonglong)*(ushort *)(local_418 + 0x16) * 0x30);
    lVar35 = (ulonglong)*(ushort *)(local_418 + 0x16) * 0x60 + plVar27[0x8a];
    local_398 = (longlong *)0x0;
    local_388 = 0;
    local_410 = 0;
    local_3c0 = (int *)0x0;
    local_390 = 0;
    local_438 = 0.0;
    local_370 = (float *)0x0;
    local_368 = (longlong *)0x0;
    local_430 = param_2;
    local_428 = param_1;
    local_420 = param_3;
    local_400 = plVar27;
    local_3c8 = lVar44;
    local_3b0 = lVar35;
    local_380 = plVar38;
    local_378 = piVar48;
    local_350 = lVar22;
    local_338 = param_4;
    plVar19 = (longlong *)(**(code **)(*DAT_140c65688 + 0xe0))();
    local_3a4 = *(int *)(*plVar19 + (ulonglong)*(byte *)(lVar35 + 0x58) * 4);
    if ((plVar38 != (longlong *)0x0) && (*(short *)(*plVar38 + 6) == 3)) {
        uVar50 = (ulonglong)*(ushort *)(*plVar38 + 0xe);
        piVar48 = (int *)(*(longlong *)(lVar22 + 0x1f8) + 8 + uVar50 * 0x30);
        local_3b0 = uVar50 * 0x60 + plVar27[0x8a];
        local_378 = piVar48;
    }
    if (param_6 != 0) {
        local_398 = *(longlong **)(param_6 + 0x30);
        local_410 = *(longlong *)(param_6 + 0x40);
        local_388 = local_398[7];
        piVar36 = (int *)((ulonglong)*(ushort *)(local_410 + 0x16) * 0x30 +
                          *(longlong *)(local_398[8] + 0x1f8) + 8);
        if (*piVar48 == *piVar36) {
            local_438 = *(float *)(param_6 + 0x50);
            local_370 = *(float **)(param_6 + 0x38);
            local_390 = (ulonglong)*(ushort *)(local_410 + 0x16) * 0x60 + local_398[0x8a];
            local_368 = *(longlong **)(param_6 + 0x48);
            local_3c0 = piVar36;
        }
    }
    FUN_1407e4830(&local_2e8,0);
    uVar29 = local_2e4;
    uVar34 = local_2e8;
    local_2b8 = (**(code **)(*DAT_140c65688 + 0x110))();
    lVar22 = local_428;
    if (param_6 == 0) {
        FUN_140312840(*(undefined8 *)(local_428 + 0x10),local_430);
    }
    uVar49 = piVar48[1];
    if (((uVar49 & 4) == 0) &&
        (uVar33 = *(uint *)(*(longlong *)(lVar22 + 0x10) + 0x570), (uVar33 & 0xc0) == 0)) {
        if ((uVar33 >> 8 & 1) == 0) {
            local_2e0 = 1;
        }
        else {
            local_2e0 = 2;
        }
    }
    else {
        local_2e0 = 0;
    }
    uVar43 = 4;
    local_44c = 1;
    uVar33 = *(uint *)(*(longlong *)(lVar22 + 0x10) + 0x570);
    local_454 = 0;
    local_458 = 0;
    local_444 = 1;
    local_450 = 0;
    local_448 = 0;
    uVar41 = uVar33 & 4;
    if (uVar41 == 0) {
        if (((uVar33 >> 9 & 1) != 0) && (local_430 == 1)) {
            local_44c = 4;
            local_454 = 5;
            local_458 = 0;
            local_444 = 4;
            local_450 = 5;
            local_448 = 0;
        }
    }
    else {
        local_44c = 1;
        local_454 = 1;
        local_444 = 1;
        local_450 = 1;
        local_458 = 3;
        local_448 = 3;
    }
    local_3ec = piVar48[3];
    local_440 = 0xf;
    if (local_3c0 == (int *)0x0) {
        local_408 = 0xf;
    }
    else {
        local_408 = local_3c0[3];
    }
    if (local_430 != 5) goto LAB_140328979;
    if (local_380 != (longlong *)0x0) {
        if (local_3ec == 0) {
            local_3ec = 3;
        }
        else if ((local_3ec == 1) || (lVar44 = local_3c8, *(short *)(*local_380 + 6) == 2)) {
            local_3ec = 4;
        }
    }
    if (local_368 != (longlong *)0x0) {
        if (local_408 == 0) {
            local_408 = 3;
        }
        else if ((local_408 == 1) || (*(short *)(*local_368 + 6) == 2)) {
            local_408 = 4;
        }
    }
    if ((local_380 == (longlong *)0x0) || (*(short *)(*local_380 + 6) != 2)) {
        switch(local_3ec) {
            case 3:
                goto switchD_140328822_caseD_3;
            case 4:
                local_458 = 0;
                local_448 = 0;
                local_44c = 4;
                local_454 = 1;
                local_450 = 1;
                local_444 = 7;
                break;
            case 5:
                goto switchD_140328822_caseD_5;
            case 6:
                local_450 = 1;
                local_44c = 8;
                local_454 = 2;
                local_458 = 0;
                local_448 = 0;
                local_444 = 7;
                break;
            default:
                local_44c = 4;
                local_454 = 5;
                goto LAB_14032882f;
            case 8:
                goto switchD_140328822_caseD_8;
            case 9:
                goto switchD_140328822_caseD_9;
            case 10:
                local_44c = 1;
                local_454 = 3;
                local_458 = 0;
                local_450 = 1;
                local_448 = 0;
                local_444 = 7;
        }
        goto LAB_140328979;
    }
    switch(*(undefined2 *)(*local_380 + 0x16)) {
        case 3:
        switchD_140328822_caseD_3:
            local_454 = 1;
            goto LAB_14032882b;
        case 4:
            local_454 = 1;
            local_44c = 4;
            goto LAB_14032882f;
        case 5:
        switchD_140328822_caseD_5:
            local_450 = 1;
            local_44c = 8;
            local_454 = 0;
            local_444 = 7;
            local_448 = 0;
            local_458 = 0;
            break;
        case 6:
            local_44c = 8;
            local_454 = 2;
            goto LAB_14032882f;
        default:
            local_450 = 1;
            local_458 = 0;
            local_448 = 0;
            local_44c = 4;
            local_454 = 5;
            local_444 = 7;
            break;
        case 8:
        switchD_140328822_caseD_8:
            uVar43 = 3;
        case 9:
        switchD_140328822_caseD_9:
            local_44c = 1;
            local_454 = 1;
            local_444 = 7;
            local_450 = 1;
            local_448 = 0;
            local_458 = uVar43;
            break;
        case 10:
            local_454 = 3;
        LAB_14032882b:
            local_44c = 1;
        LAB_14032882f:
            local_450 = 1;
            local_444 = 7;
            local_458 = 0;
            local_448 = 0;
    }
    LAB_140328979:
    iVar17 = local_3ec;
    local_2cc = local_450;
    local_2c8 = local_448;
    if ((uVar33 & 8) == 0) {
        if (local_430 == 5) {
            local_440 = 0x8f;
            if ((uVar33 & 0x40) == 0) {
                local_440 = 7;
            }
            if (((uVar33 & 0x20) == 0) &&
                ((*(longlong **)(local_3b8 + 0x48) == (longlong *)0x0 ||
                  (*(short *)(**(longlong **)(local_3b8 + 0x48) + 6) != 2)))) {
                local_42c = ~(uVar49 >> 1) & 1;
            }
            else {
                local_42c = 0;
            }
        }
        else {
            if (local_430 != 4) {
                if (uVar41 == 0) {
                    if ((uVar33 & 0x20) == 0) {
                        local_440 = 0xfff;
                        if ((uVar33 >> 0xc & 1) != 0) {
                            local_440 = 0x2fff;
                        }
                        if ((local_430 == 0) && ((*(byte *)(plVar27 + 0xe4) & 1) != 0)) {
                            local_440 = local_440 | 0x2000;
                        }
                        if ((uVar49 >> 0x10 & 1) != 0) {
                            local_440 = 0;
                            local_2b8 = 0;
                        }
                    }
                    else {
                        local_440 = 0xff7;
                    }
                }
                else {
                    local_440 = 0xf;
                }
            }
            local_42c = 1;
        }
        local_2c4 = CONCAT44(local_42c,local_440);
    }
    else {
        local_42c = 0;
        local_440 = 0;
        local_2c4 = 0;
    }
    if (((uVar33 & 0x20) == 0) && ((uVar49 & 1) == 0)) {
        local_2bc = 3;
    }
    else {
        local_2bc = 7;
    }
    fVar61 = 1.0;
    uVar49 = local_2e8 | 0x5f;
    uVar33 = local_2e4 | 0x5f;
    fVar59 = 0.0;
    local_3f8 = uVar49;
    local_3f4 = uVar33;
    local_2e8 = uVar49;
    local_2e4 = uVar33;
    local_2dc = local_44c;
    local_2d8 = local_454;
    local_2d4 = local_458;
    local_2d0 = local_444;
    if (uVar41 == 0) {
        if ((local_410 == 0) || (((*(byte *)(local_410 + 0x38) ^ *(byte *)(local_418 + 0x38)) & 1) != 0)
                ) goto LAB_140328b88;
    }
    else if (param_6 == 0) {
        LAB_140328b88:
        (**(code **)(*DAT_140c65670 + 0x188))();
    }
    if (local_398 == (longlong *)0x0) {
        LAB_140328c08:
        bVar40 = 0;
        if (local_430 == 0) {
            iVar15 = (**(code **)(*plVar27 + 0x118))();
            bVar40 = -(iVar15 != 0) & 0x40;
        }
        if ((local_398 == (longlong *)0x0) ||
            ((uint)(fVar59 < *(float *)((longlong)local_398 + 0x694)) -
             (uint)(*(float *)((longlong)local_398 + 0x694) < fVar59) !=
             (uint)(fVar59 < *(float *)((longlong)plVar27 + 0x694)) -
             (uint)(*(float *)((longlong)plVar27 + 0x694) < fVar59))) {
            bVar40 = bVar40 | (&DAT_140b62cb1)
            [(ulonglong)(fVar59 < *(float *)((longlong)plVar27 + 0x694)) -
             (ulonglong)(*(float *)((longlong)plVar27 + 0x694) < fVar59)];
        }
        (**(code **)(*DAT_140c65688 + 0x108))(DAT_140c65688,bVar40,0x78);
    }
    else {
        iVar15 = (**(code **)(*local_398 + 0x118))();
        iVar16 = (**(code **)(*local_400 + 0x118))();
        plVar27 = local_400;
        if ((iVar15 != iVar16) ||
            ((uint)(fVar59 < *(float *)((longlong)local_398 + 0x694)) -
             (uint)(*(float *)((longlong)local_398 + 0x694) < fVar59) !=
             (uint)(fVar59 < *(float *)((longlong)local_400 + 0x694)) -
             (uint)(*(float *)((longlong)local_400 + 0x694) < fVar59))) goto LAB_140328c08;
    }
    piVar36 = local_3c0;
    // WARNING (jumptable): Read-only address (ram,0x000140b7ac50) is written
    if (*piVar48 != 0) {
        if (*piVar48 != 1) {
            local_3a8 = local_420;
            local_3f0 = local_420;
            goto LAB_14032a409;
        }
        if (local_3c0 == (int *)0x0) {
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
            pauVar20 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,0);
            if (pauVar20 != (undefined (*) [16])0x0) {
                lVar22 = *(longlong *)(local_428 + 0x10);
                uVar43 = *(undefined4 *)(lVar22 + 0x598);
                uVar5 = *(undefined4 *)(lVar22 + 0x5b8);
                uVar6 = *(undefined4 *)(lVar22 + 0x5a8);
                uVar49 = *(uint *)(lVar22 + 0x5ac);
                uVar7 = *(undefined4 *)(lVar22 + 0x5c8);
                uVar8 = *(undefined4 *)(lVar22 + 0x5cc);
                uVar33 = *(uint *)(lVar22 + 0x5a4);
                uVar9 = *(undefined4 *)(lVar22 + 0x5c4);
                *pauVar20 = CONCAT412(*(undefined4 *)(lVar22 + 0x5c0),
                                      CONCAT48(*(undefined4 *)(lVar22 + 0x5b0),
                                               CONCAT44(*(undefined4 *)(lVar22 + 0x5a0),
                                                        *(undefined4 *)(lVar22 + 0x590))));
                pauVar20[1] = CONCAT412(uVar9,ZEXT412(uVar33) << 0x20);
                pauVar20[2] = CONCAT412(uVar7,CONCAT48(uVar5,CONCAT44(uVar6,uVar43)));
                pauVar20[3] = CONCAT412(uVar8,ZEXT412(uVar49) << 0x20);
                FUN_140262750(*(longlong *)(local_428 + 0x10) + 0x230,pauVar20[4],
                              *(longlong *)(local_428 + 0x10) + 0xf0);
                *(undefined4 *)pauVar20[7] = *(undefined4 *)(*(longlong *)(local_428 + 0x10) + 0x510);
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
        }
        piVar36 = local_3c0;
        local_3a8 = 1;
        local_3f0 = 10;
        if ((local_3c0 == (int *)0x0) || (*(int *)(local_3b8 + 0x54) != *(int *)(param_6 + 0x54))) {
            (**(code **)(*DAT_140c65670 + 0x140))
                    (DAT_140c65670,*(undefined8 *)(lVar44 + 0x808),*(undefined4 *)(local_3b8 + 0x54));
        }
        lVar22 = local_428;
        if (piVar36 == (int *)0x0) {
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
            lVar35 = (**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xb0,0,0);
            lVar22 = local_428;
            if (lVar35 != 0) {
                FUN_140262d50(*(longlong *)(local_428 + 0x10) + 0x230);
                lVar47 = *(longlong *)(lVar22 + 0x10);
                uVar43 = *(undefined4 *)(lVar47 + 0x2e4);
                uVar5 = *(undefined4 *)(lVar47 + 0x2e8);
                uVar6 = *(undefined4 *)(lVar47 + 0x2ec);
                *(undefined4 *)(lVar35 + 0x70) = *(undefined4 *)(lVar47 + 0x2e0);
                *(undefined4 *)(lVar35 + 0x74) = uVar43;
                *(undefined4 *)(lVar35 + 0x78) = uVar5;
                *(undefined4 *)(lVar35 + 0x7c) = uVar6;
                *(undefined4 *)(lVar35 + 0x80) = *(undefined4 *)(lVar47 + 0x2c0);
                *(undefined4 *)(lVar35 + 0x84) = *(undefined4 *)(lVar47 + 0x2c4);
                *(undefined4 *)(lVar35 + 0x88) = *(undefined4 *)(lVar47 + 0x2c8);
                *(undefined4 *)(lVar35 + 0x8c) = *(undefined4 *)(lVar47 + 0x4e4);
                *(undefined4 *)(lVar35 + 0x90) = *(undefined4 *)(lVar47 + 0x2d0);
                *(undefined4 *)(lVar35 + 0x94) = *(undefined4 *)(lVar47 + 0x2d4);
                *(undefined4 *)(lVar35 + 0x98) = *(undefined4 *)(lVar47 + 0x2d8);
                *(undefined4 *)(lVar35 + 0x9c) = *(undefined4 *)(lVar47 + 0x4e0);
                *(undefined8 *)(lVar35 + 0xa0) = *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + 0x550);
                lVar47 = *(longlong *)(lVar22 + 0x10);
                local_3e8 = CONCAT44(*(float *)(lVar47 + 0x554) * 0.5,*(float *)(lVar47 + 0x550) * 0.5);
                _local_3e8 = CONCAT48(*(float *)(lVar47 + 0x558) * 0.5,local_3e8);
                _local_3e8 = CONCAT412(*(float *)(lVar47 + 0x55c) * 0.5,_local_3e8);
                *(longlong *)(lVar35 + 0xa8) = local_3e8;
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
        }
        if (iVar17 < 3) {
            LAB_14032a046:
            local_2a0[4] = *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + 0x578);
        }
        else if (iVar17 < 5) {
            local_2a0[4] = *(undefined8 *)(lVar44 + 0x878);
        }
        else if (iVar17 == 5) {
            local_2a0[4] = *(undefined8 *)(lVar44 + 0x880);
        }
        else {
            if (iVar17 != 6) goto LAB_14032a046;
            local_2a0[4] = *(undefined8 *)(lVar44 + 0x888);
        }
        uVar49 = 0;
        local_160[4] = 0;
        local_1a0[4] = 0;
        if ((piVar36 == (int *)0x0) || (iVar17 != local_408)) {
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
            pfVar26 = (float *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,1,0xb);
            if (pfVar26 != (float *)0x0) {
                if (iVar17 < 3) {
                    LAB_14032a123:
                    *pfVar26 = DAT_140c79700;
                    pfVar26[1] = DAT_140c79704;
                    pfVar26[2] = DAT_140c79708;
                    pfVar26[3] = 1.0;
                }
                else if (iVar17 < 5) {
                    *pfVar26 = DAT_140c79700;
                    pfVar26[1] = DAT_140c79704;
                    pfVar26[2] = DAT_140c79708;
                    pfVar26[3] = 0.0;
                }
                else if (iVar17 == 5) {
                    *pfVar26 = DAT_140c79710;
                    pfVar26[1] = DAT_140c79714;
                    pfVar26[2] = DAT_140c79718;
                    pfVar26[3] = 0.0;
                }
                else {
                    if (iVar17 != 6) goto LAB_14032a123;
                    *pfVar26 = 0.5;
                    pfVar26[1] = 0.5;
                    pfVar26[2] = 0.5;
                    pfVar26[3] = 0.0;
                }
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
        }
        pfVar26 = local_360;
        lVar44 = local_3c8;
        iVar17 = local_3ec;
        puVar46 = *(ushort **)(piVar48 + 8);
        local_2a0[5] = *(undefined8 *)(*(longlong *)(lVar22 + 0x10) + 0x580);
        uVar34 = uVar34 | 0x185f;
        uVar29 = uVar29 | 0x185f;
        local_1a0[5] = 0;
        local_160[5] = 0;
        uVar33 = *(uint *)(local_350 + 0x1c0);
        puVar23 = local_1a0;
        plVar27 = local_2a0;
        puVar39 = local_1a0 + 2;
        plVar38 = local_2a0 + 2;
        do {
            uVar41 = 0x80 << ((byte)uVar49 & 0x1f);
            if (*puVar46 < uVar33) {
                plVar27[0x10] = *(longlong *)(local_400[0x84] + 0x10 + (ulonglong)*puVar46 * 0x18);
                *puVar23 = 0;
            }
            else {
                *plVar27 = *(longlong *)(local_3c8 + 0x860);
                *puVar23 = 0;
                plVar27[0x28] = 0;
            }
            uVar28 = 0x80 << ((byte)uVar49 + 2 & 0x1f);
            uVar34 = uVar34 | uVar41 | uVar28;
            uVar29 = uVar29 | uVar41 | uVar28;
            if (puVar46[1] < uVar33) {
                plVar38[0x10] = *(longlong *)(local_400[0x84] + 0x10 + (ulonglong)puVar46[1] * 0x18);
                *puVar39 = 0;
            }
            else {
                *plVar38 = *(longlong *)(local_3c8 + 0x868);
                *puVar39 = 0;
                plVar38[0x28] = 0;
            }
            uVar49 = uVar49 + 1;
            puVar39 = puVar39 + 1;
            plVar38 = plVar38 + 1;
            puVar46 = puVar46 + 0x94;
            puVar23 = puVar23 + 1;
            plVar27 = plVar27 + 1;
        } while (uVar49 < 2);
        local_258 = *(undefined8 *)(local_3c8 + 0x898);
        local_17c = 0;
        local_118 = 0;
        if (((local_360 != local_370) || (local_3ec != local_408)) ||
            (((*(byte *)(local_410 + 0x38) ^ *(byte *)(local_418 + 0x38)) & 1) != 0)) {
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
            local_2e8 = uVar34;
            local_2e4 = uVar29;
            pfVar25 = (float *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x10,2);
            if (pfVar25 != (float *)0x0) {
                if (iVar17 - 5U < 2) {
                    *pfVar25 = DAT_140c79710;
                    pfVar25[1] = DAT_140c79714;
                    pfVar25[2] = DAT_140c79718;
                }
                else {
                    *pfVar25 = *pfVar26;
                    pfVar25[1] = pfVar26[1];
                    pfVar25[2] = pfVar26[2];
                }
                pfVar25[3] = pfVar26[8];
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
        }
        local_2b0 = *(undefined8 *)(lVar44 + 0x810);
        uVar49 = uVar34 | 0x10020;
        uVar33 = uVar29 | 0x10020;
        local_2a8 = *(uint *)(local_3b8 + 0x58);
        local_42c = local_2c4._4_4_;
        local_440 = (uint)local_2c4;
        local_448 = local_2c8;
        local_450 = local_2cc;
        local_444 = local_2d0;
        local_458 = local_2d4;
        local_454 = local_2d8;
        local_44c = local_2dc;
        local_2e8 = uVar49;
        local_2e4 = uVar33;
        goto LAB_14032a409;
    }
    if (local_3c0 == (int *)0x0) {
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        pauVar20 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x40,0);
        if (pauVar20 != (undefined (*) [16])0x0) {
            lVar44 = *(longlong *)(local_428 + 0x10);
            uVar43 = *(undefined4 *)(lVar44 + 0x598);
            uVar5 = *(undefined4 *)(lVar44 + 0x5b8);
            uVar6 = *(undefined4 *)(lVar44 + 0x5a8);
            uVar41 = *(uint *)(lVar44 + 0x5ac);
            uVar7 = *(undefined4 *)(lVar44 + 0x5c8);
            uVar8 = *(undefined4 *)(lVar44 + 0x5cc);
            uVar28 = *(uint *)(lVar44 + 0x5a4);
            uVar9 = *(undefined4 *)(lVar44 + 0x5c4);
            *pauVar20 = CONCAT412(*(undefined4 *)(lVar44 + 0x5c0),
                                  CONCAT48(*(undefined4 *)(lVar44 + 0x5b0),
                                           CONCAT44(*(undefined4 *)(lVar44 + 0x5a0),
                                                    *(undefined4 *)(lVar44 + 0x590))));
            pauVar20[1] = CONCAT412(uVar9,ZEXT412(uVar28) << 0x20);
            pauVar20[2] = CONCAT412(uVar7,CONCAT48(uVar5,CONCAT44(uVar6,uVar43)));
            pauVar20[3] = CONCAT412(uVar8,ZEXT412(uVar41) << 0x20);
            (**(code **)(*DAT_140c65670 + 0x108))();
        }
    }
    if (piVar36 == (int *)0x0) {
        LAB_140328e30:
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        pauVar20 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x80,1);
        if (pauVar20 != (undefined (*) [16])0x0) {
            uVar41 = 0;
            lVar44 = 0;
            puVar46 = (ushort *)(local_418 + 0x30);
            do {
                uVar28 = 3;
                if (uVar41 < (uint)piVar48[6]) {
                    uVar28 = *(uint *)(*(longlong *)(piVar48 + 8) + 0x120 + lVar44);
                }
                lVar22 = (ulonglong)uVar28 * 0x40;
                puVar23 = (undefined4 *)(&DAT_140c79e10 + lVar22);
                if (*puVar46 == 0xffff) {
                    local_328._0_4_ = *puVar23;
                    auVar51 = *(undefined (*) [16])(&DAT_140c79e30 + lVar22);
                    local_318._0_4_ = *(undefined4 *)(&DAT_140c79e20 + lVar22);
                    local_318._4_4_ = *(undefined4 *)(lVar22 + 0x140c79e24);
                    auVar51 = CONCAT412(*(undefined4 *)(lVar22 + 0x140c79e44),
                                        SUB1612(CONCAT88(SUB168(CONCAT412(SUB164(auVar51 >> 0x60,0),
                                                                          CONCAT48(SUB164(auVar51 >> 0x20,0),
                                                                                   SUB168(auVar51,0))) >> 0x40
                                                                 ,0),
                                                         SUB168(auVar51,0) & 0xffffffff |
                                                         (ulonglong)*(uint *)(&DAT_140c79e40 + lVar22) << 0x20
                                        ),0));
                }
                else {
                    local_d0 = (ulonglong)*puVar46 * 0x110 + 0xd0 + plVar27[0x6a];
                    _local_3e8 = CONCAT88(local_d0,puVar23);
                    local_d8 = puVar23;
                    FUN_1401afb10(&local_d8,&local_328);
                    auVar51 = CONCAT412(uStack756,
                                        SUB1612(CONCAT88(SUB168(CONCAT412((int)((ulonglong)uStack768 >> 0x20),
                                                                          CONCAT48((int)(local_308 >> 0x20),
                                                                                   local_308)) >> 0x40,0),
                                                         local_308 & 0xffffffff | (ulonglong)local_2f8 << 0x20
                                        ),0));
                }
                uVar41 = uVar41 + 1;
                puVar46 = puVar46 + 1;
                lVar44 = lVar44 + 0x128;
                *pauVar20 = CONCAT412(SUB164(auVar51 >> 0x20,0),
                                      CONCAT48(SUB164(auVar51,0),
                                               CONCAT44((undefined4)local_318,(undefined4)local_328)));
                pauVar20[1] = ZEXT1216(CONCAT48(SUB164(auVar51 >> 0x60,0),
                                                CONCAT44(SUB164(auVar51 >> 0x40,0),local_318._4_4_))) <<
                                                                                                      0x20;
                pauVar20 = pauVar20[2];
            } while (uVar41 < 4);
            (**(code **)(*DAT_140c65670 + 0x108))();
            piVar36 = local_3c0;
        }
    }
    else {
        if (piVar48 != piVar36) {
            uVar41 = piVar48[6];
            uVar28 = piVar36[6];
            uVar50 = (ulonglong)uVar28;
            uVar18 = uVar41;
            if (uVar28 < uVar41) {
                uVar18 = uVar28;
            }
            uVar42 = 0;
            if (uVar18 != 0) {
                piVar30 = (int *)(*(longlong *)(piVar48 + 8) + 0x120);
                piVar37 = (int *)(*(longlong *)(piVar36 + 8) + 0x120);
                do {
                    if (*piVar30 != *piVar37) goto LAB_140328e30;
                    uVar42 = uVar42 + 1;
                    piVar37 = piVar37 + 0x4a;
                    piVar30 = piVar30 + 0x4a;
                } while (uVar42 < uVar18);
            }
            if (uVar28 < uVar41) {
                piVar30 = (int *)(uVar50 * 0x128 + 0x120 + *(longlong *)(piVar48 + 8));
                do {
                    if (*piVar30 != 3) goto LAB_140328e30;
                    uVar28 = (int)uVar50 + 1;
                    uVar50 = (ulonglong)uVar28;
                    piVar30 = piVar30 + 0x4a;
                } while (uVar28 < uVar41);
            }
        }
        if (plVar27 == local_398) {
            iVar17 = FUN_1407e6af0(local_418 + 0x30,local_410 + 0x30);
            if (iVar17 != 0) goto LAB_140328e30;
        }
        else {
            uVar41 = 0;
            if (piVar48[6] != 0) {
                psVar21 = (short *)(local_418 + 0x30);
                do {
                    if (*psVar21 != -1) goto LAB_140328e30;
                    uVar41 = uVar41 + 1;
                    psVar21 = psVar21 + 1;
                } while (uVar41 < (uint)piVar48[6]);
            }
            uVar41 = 0;
            if (piVar36[6] != 0) {
                psVar21 = (short *)(local_410 + 0x30);
                do {
                    if (*psVar21 != -1) goto LAB_140328e30;
                    uVar41 = uVar41 + 1;
                    psVar21 = psVar21 + 1;
                } while (uVar41 < (uint)piVar36[6]);
            }
        }
    }
    local_3a8 = 2;
    local_3f0 = 0xe;
    if ((piVar36 == (int *)0x0) || (*(int *)(local_3b8 + 0x54) != *(int *)(param_6 + 0x54))) {
        (**(code **)(*DAT_140c65670 + 0x140))();
    }
    lVar44 = local_428;
    if (piVar36 == (int *)0x0) {
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        lVar22 = (**(code **)(*DAT_140c65670 + 0x110))();
        lVar44 = local_428;
        if (lVar22 != 0) {
            FUN_140262d50(*(longlong *)(local_428 + 0x10) + 0x230);
            FUN_140262750(*(longlong *)(lVar44 + 0x10) + 0x230);
            *(undefined8 *)(lVar22 + 0xa0) = 0;
            local_3e8 = CONCAT44(*(float *)(*(longlong *)(lVar44 + 0x10) + 0x544) - 1.0,
                                 *(float *)(*(longlong *)(lVar44 + 0x10) + 0x540) - 1.0);
            *(longlong *)(lVar22 + 0xa8) = local_3e8;
            *(undefined8 *)(lVar22 + 0xb0) = *(undefined8 *)(*(longlong *)(lVar44 + 0x10) + 0x550);
            lVar35 = *(longlong *)(lVar44 + 0x10);
            local_3e8 = CONCAT44(*(float *)(lVar35 + 0x554) * 0.5,*(float *)(lVar35 + 0x550) * 0.5);
            _local_3e8 = CONCAT48(*(float *)(lVar35 + 0x558) * 0.5,local_3e8);
            _local_3e8 = CONCAT412(*(float *)(lVar35 + 0x55c) * 0.5,_local_3e8);
            *(longlong *)(lVar22 + 0xb8) = local_3e8;
            fVar60 = *(float *)(*(longlong *)(lVar44 + 0x10) + 0x1b0);
            fVar57 = *(float *)(*(longlong *)(lVar44 + 0x10) + 0x1b4);
            *(undefined (*) [16])(lVar22 + 0xc0) =
                    CONCAT412(fVar59,CONCAT48(fVar57,CONCAT44(fVar60 - fVar57,fVar60 * fVar57)));
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
    }
    iVar17 = local_430;
    if ((*(uint *)(*(longlong *)(lVar44 + 0x10) + 0x570) & 0x224) == 0) {
        if ((local_430 == 1) || (local_430 == 4)) {
            puVar24 = (undefined8 *)(**(code **)(*DAT_140c65688 + 0xc0))();
            uVar49 = uVar34 | 0x2005f;
            uVar33 = uVar29 | 0x2005f;
            local_250[0] = *puVar24;
            local_178 = 0;
            local_110[0] = 0;
            local_3f8 = uVar49;
            local_3f4 = uVar33;
        }
        if (iVar17 == 5) {
            lVar44 = (**(code **)(*DAT_140c65688 + 200))();
            local_260 = *(undefined8 *)(lVar44 + 0x20);
            local_180 = 0;
            local_120 = 0;
            lVar44 = (**(code **)(*DAT_140c65688 + 0xc0))();
            uVar49 = uVar49 | 0x28000;
            uVar33 = uVar33 | 0x28000;
            local_250[0] = *(undefined8 *)(lVar44 + 0x38);
            local_178 = 0;
            local_110[0] = 0;
        }
        else if (iVar17 != 4) goto LAB_140329241;
        local_110[1] = (**(code **)(*DAT_140c65688 + 0xd8))();
        lVar44 = (**(code **)(*DAT_140c65688 + 0xc0))();
        uVar49 = uVar49 | 0x40000;
        uVar33 = uVar33 | 0x40000;
        local_250[1] = *(undefined8 *)(lVar44 + 0x48);
        local_174 = 0;
        local_3f8 = uVar49;
        local_3f4 = uVar33;
    }
    LAB_140329241:
    lVar44 = local_3b0;
    if ((local_3b0 != local_390) || (fVar60 = fVar59, local_3a0 != local_438)) {
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        local_3e8 = (**(code **)(*DAT_140c65670 + 0x110))();
        lVar22 = local_3b0;
        fVar60 = fVar59;
        if (local_3e8 != 0) {
            local_438 = (float)piVar48[6];
            if (4 < (uint)local_438) {
                local_438 = 5.605194e-45;
            }
            uVar50 = (ulonglong)(uint)local_438;
            auVar51 = extraout_XMM0;
            if (local_438 != 0.0) {
                fVar57 = 0.001;
                lVar35 = 0;
                lVar44 = local_3e8 + 0x80;
                puVar23 = (undefined4 *)(local_3e8 + 400);
                do {
                    local_328 = lVar44 + -0x80;
                    lStack800 = lVar44 + -0x40;
                    lVar47 = *(longlong *)(lVar22 + 8) + lVar35;
                    lStack784 = lVar44 + 0x40;
                    local_308 = lVar44 + 0x80;
                    local_318 = lVar44;
                    FUN_1403282e0();
                    uVar43 = *(undefined4 *)(lVar47 + 0xc4);
                    uVar5 = *(undefined4 *)(lVar47 + 200);
                    uVar6 = *(undefined4 *)(lVar47 + 0xcc);
                    lVar35 = lVar35 + 0xe0;
                    *(undefined4 *)(lVar44 + 0xc0) = *(undefined4 *)(lVar47 + 0xc0);
                    *(undefined4 *)(lVar44 + 0xc4) = uVar43;
                    *(undefined4 *)(lVar44 + 200) = uVar5;
                    *(undefined4 *)(lVar44 + 0xcc) = uVar6;
                    fVar52 = *(float *)(lVar47 + 100);
                    if (*(float *)(lVar47 + 100) <= fVar59) {
                        fVar52 = fVar59;
                    }
                    puVar23[-4] = fVar52;
                    auVar51 = ZEXT416((uint)(*(float *)(lVar47 + 0x78) + fVar57)) &
                              (undefined  [16])0xffffffffffffffff;
                    *puVar23 = SUB164(auVar51,0);
                    puVar23[4] = *(undefined4 *)(lVar47 + 0x8c);
                    puVar23[8] = *(undefined4 *)(lVar47 + 0xa0);
                    uVar50 = uVar50 - 1;
                    lVar44 = lVar44 + 0x10;
                    puVar23 = puVar23 + 1;
                } while (uVar50 != 0);
                uVar50 = (ulonglong)(uint)local_438;
                lVar44 = local_3b0;
                piVar48 = local_378;
                uVar49 = local_3f8;
                uVar33 = local_3f4;
            }
            if ((uint)uVar50 < 4) {
                auVar51 = auVar51 & (undefined  [16])0x0;
                pauVar20 = (undefined (*) [16])((uVar50 + 8) * 0x10 + local_3e8);
                uVar31 = (ulonglong)(4 - (uint)uVar50);
                puVar23 = (undefined4 *)(uVar50 * 4 + 400 + local_3e8);
                do {
                    pauVar20[-8] = auVar51;
                    pauVar20[-4] = auVar51;
                    *pauVar20 = auVar51;
                    pauVar20[4] = auVar51;
                    pauVar20[8] = auVar51;
                    pauVar20[0xc] = auVar51;
                    puVar23[-4] = 0;
                    *puVar23 = 0;
                    puVar23[4] = 0;
                    puVar23[8] = 0;
                    pauVar20 = pauVar20[1];
                    uVar31 = uVar31 - 1;
                    puVar23 = puVar23 + 1;
                } while (uVar31 != 0);
            }
            piVar36 = DAT_140c63750;
            bVar40 = *(byte *)(lVar44 + 0x59);
            uVar34 = (uint)bVar40;
            if (((uint)bVar40 < *(uint *)(local_3c8 + 0x8d0)) &&
                ((uint)local_3a0 < (uint)*(float *)(local_3c8 + 0x8d4))) {
                uVar34 = *(uint *)(*(longlong *)(local_3c8 + 0x8d8) +
                                   (ulonglong)
                                           ((uint)bVar40 * (int)*(float *)(local_3c8 + 0x8d4) + (int)local_3a0) * 4);
            }
            bVar40 = *(byte *)(lVar44 + 0x58);
            uVar50 = (ulonglong)bVar40;
            if (((uint)bVar40 < *(uint *)(local_3c8 + 0x8d0)) &&
                ((uint)local_3a0 < (uint)*(float *)(local_3c8 + 0x8d4))) {
                uVar50 = (ulonglong)
                         *(uint *)(*(longlong *)(local_3c8 + 0x8d8) +
                                   (ulonglong)
                                           ((int)*(float *)(local_3c8 + 0x8d4) * (uint)bVar40 + (int)local_3a0) * 4);
            }
            fVar59 = *(float *)(*(longlong *)(local_3b8 + 0x30) + 0x35c);
            local_438 = (float)uVar50;
            if (fVar60 <= fVar59) {
                local_438 = fVar59;
            }
            fVar59 = *(float *)(*(longlong *)(local_3b8 + 0x30) + 0x360);
            fStack1076 = (float)(ulonglong)uVar34;
            if (fVar60 <= fVar59) {
                fStack1076 = fVar59;
            }
            *(ulonglong *)(local_3e8 + 0x1c0) = CONCAT44(fStack1076,local_438);
            uVar50 = DAT_140c67498;
            if ((piVar48[1] & 0x2000U) != 0) {
                iVar17 = *piVar36;
                iVar15 = DAT_140c422a0;
                if (iVar17 < DAT_140c422a0) {
                    iVar15 = iVar17;
                }
                if ((&DAT_140c422b0)[iVar15] != '\0') {
                    fStack1076 = 0.0;
                    iVar15 = DAT_140c422e0;
                    if (iVar17 < DAT_140c422e0) {
                        iVar15 = iVar17;
                    }
                    local_438 = *(float *)(&DAT_140c422f0 + (longlong)iVar15 * 4);
                    uVar50 = (ulonglong)(uint)local_438;
                }
            }
            *(ulonglong *)(local_3e8 + 0x1d0) = uVar50;
            if ((piVar48[1] & 0x4000U) == 0) {
                LAB_1403295a9:
                *(ulonglong *)(local_3e8 + 0x1d8) = DAT_140c67498;
                uVar50 = DAT_140c67498;
            }
            else {
                iVar17 = *piVar36;
                iVar15 = DAT_140c42340;
                if (iVar17 < DAT_140c42340) {
                    iVar15 = iVar17;
                }
                if ((&DAT_140c42350)[iVar15] == '\0') goto LAB_1403295a9;
                iVar15 = DAT_140c42380;
                if (iVar17 < DAT_140c42380) {
                    iVar15 = iVar17;
                }
                fStack1076 = 0.0;
                *(ulonglong *)(local_3e8 + 0x1d8) =
                        (ulonglong)*(uint *)(s_UUU_UUU_UUU_UUU_UUU__140c42390 + (longlong)iVar15 * 4);
                iVar17 = DAT_140c423e0;
                if (*piVar36 < DAT_140c423e0) {
                    iVar17 = *piVar36;
                }
                local_438 = *(float *)(&DAT_140c423f0 + (longlong)iVar17 * 4);
                uVar50 = (ulonglong)(uint)local_438;
            }
            *(ulonglong *)(local_3e8 + 0x1c8) = uVar50;
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
    }
    pfVar26 = local_360;
    iVar17 = local_3ec;
    lVar22 = local_418;
    fVar57 = 0.5;
    fVar59 = 0.003921569;
    if ((((local_3ec != local_408) || (local_360 != local_370)) || (lVar44 != local_390)) ||
        (((*(byte *)(local_410 + 0x38) ^ *(byte *)(local_418 + 0x38)) & 1) != 0)) {
        local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
        pfVar25 = (float *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0xb0,2);
        if (pfVar25 != (float *)0x0) {
            if (iVar17 < 3) {
                LAB_1403296c2:
                *pfVar25 = DAT_140c79700;
                pfVar25[1] = DAT_140c79704;
                pfVar25[2] = DAT_140c79708;
                pfVar25[3] = 1.0;
            }
            else if (iVar17 < 5) {
                *pfVar25 = DAT_140c79700;
                pfVar25[1] = DAT_140c79704;
                pfVar25[2] = DAT_140c79708;
                pfVar25[3] = 0.0;
            }
            else if (iVar17 == 5) {
                *pfVar25 = DAT_140c79710;
                pfVar25[1] = DAT_140c79714;
                pfVar25[2] = DAT_140c79718;
                pfVar25[3] = 0.0;
            }
            else {
                if (iVar17 != 6) goto LAB_1403296c2;
                *pfVar25 = fVar57;
                pfVar25[1] = fVar57;
                pfVar25[2] = fVar57;
                pfVar25[3] = 0.0;
            }
            if (iVar17 == 0) {
                fVar52 = fVar60;
                if ((0.9960784 < pfVar26[8] || pfVar26[8] == 0.9960784) &&
                    (((*(byte *)(lVar22 + 0x38) & 1) == 0 ||
                      ((*(byte *)(*(longlong *)(local_428 + 0x10) + 0x570) & 4) != 0)))) {
                    fVar52 = fVar61;
                }
                pfVar25[4] = fVar52;
                fVar52 = fVar60;
                if (pfVar26[8] <= 0.9960784 && pfVar26[8] != 0.9960784) {
                    fVar52 = fVar59;
                }
                pfVar25[5] = fVar52;
            }
            else if (iVar17 == 1) {
                pfVar25[4] = 1.0;
                pfVar25[5] = 0.5;
            }
            else {
                pfVar25[4] = 0.0;
                pfVar25[5] = 0.003921569;
            }
            pfVar25[6] = pfVar26[9];
            pfVar25[7] = pfVar26[10];
            pfVar25[8] = (float)(ulonglong)((uint)~piVar48[1] >> 0xf & 1);
            pfVar25[9] = fVar60;
            pfVar25[10] = fVar60;
            pfVar25[0xb] = fVar60;
            if (iVar17 - 3U < 4) {
                auVar51 = ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff;
                *(undefined (*) [16])(pfVar25 + 0xc) = auVar51;
                *(undefined (*) [16])(pfVar25 + 0x10) = auVar51;
            }
            else {
                fVar52 = pfVar26[5];
                fVar10 = pfVar26[6];
                fVar11 = pfVar26[7];
                pfVar25[0xc] = pfVar26[4];
                pfVar25[0xd] = fVar52;
                pfVar25[0xe] = fVar10;
                pfVar25[0xf] = fVar11;
                fVar52 = *(float *)(lVar44 + 0x34);
                fVar10 = *(float *)(lVar44 + 0x38);
                fVar11 = *(float *)(lVar44 + 0x3c);
                pfVar25[0x10] = *(float *)(lVar44 + 0x30);
                pfVar25[0x11] = fVar52;
                pfVar25[0x12] = fVar10;
                pfVar25[0x13] = fVar11;
                auVar51 = *(undefined (*) [16])(lVar44 + 0x40);
            }
            *(undefined (*) [16])(pfVar25 + 0x14) = auVar51;
            if (iVar17 - 5U < 2) {
                pfVar25[0x18] = 1.0;
                pfVar25[0x19] = 1.0;
                pfVar25[0x1a] = 1.0;
                pfVar25[0x1b] = 1.0;
                pfVar25[0x1c] = 1.0;
                pfVar25[0x1d] = 1.0;
                pfVar25[0x1e] = 1.0;
                pfVar25[0x1f] = 1.0;
            }
            else {
                fVar52 = *(float *)(lVar44 + 0x14);
                fVar10 = *(float *)(lVar44 + 0x18);
                fVar11 = *(float *)(lVar44 + 0x1c);
                fVar58 = pfVar26[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar26[3];
                pfVar25[0x18] = *(float *)(lVar44 + 0x10) * *pfVar26;
                pfVar25[0x19] = fVar52 * fVar58;
                pfVar25[0x1a] = fVar10 * fVar12;
                pfVar25[0x1b] = fVar11 * fVar13;
                fVar52 = *(float *)(lVar44 + 0x24);
                fVar10 = *(float *)(lVar44 + 0x28);
                fVar11 = *(float *)(lVar44 + 0x2c);
                fVar58 = pfVar26[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar26[3];
                pfVar25[0x1c] = *(float *)(lVar44 + 0x20) * *pfVar26;
                pfVar25[0x1d] = fVar52 * fVar58;
                pfVar25[0x1e] = fVar10 * fVar12;
                pfVar25[0x1f] = fVar11 * fVar13;
            }
            if (local_3a4 == 1) {
                *(undefined (*) [16])(pfVar25 + 0x20) =
                        CONCAT412(fVar60,*(undefined (*) [12])(lVar22 + 0x60));
            }
            else {
                pfVar25[0x20] = 0.0;
                pfVar25[0x21] = 0.0;
                pfVar25[0x22] = 0.0;
                pfVar25[0x23] = 0.0;
            }
            fVar58 = fVar61 / (pfVar26[0x13] + 1e-05);
            fVar52 = pfVar26[0x11];
            fVar10 = pfVar26[0x12];
            fVar11 = pfVar26[0x13];
            pfVar25[0x24] = pfVar26[0x10] * fVar58;
            pfVar25[0x25] = fVar52 * fVar58;
            pfVar25[0x26] = fVar10 * fVar58;
            pfVar25[0x27] = fVar11 * fVar61;
            *(undefined (*) [16])(pfVar25 + 0x28) =
                    ZEXT1216(CONCAT48(fVar60,(ulonglong)(uint)(pfVar26[0x14] + 1e-05)));
            (**(code **)(*DAT_140c65670 + 0x118))();
        }
    }
    uVar34 = piVar48[6];
    uVar29 = 0;
    if (uVar34 != 0) {
        puVar23 = local_1a0;
        plVar27 = local_2a0;
        uVar41 = *(uint *)(local_350 + 0x1c0);
        puVar39 = local_1a0 + 4;
        puVar46 = *(ushort **)(local_378 + 8);
        plVar38 = local_2a0 + 4;
        do {
            uVar28 = 0x80 << ((byte)uVar29 & 0x1f);
            if (*puVar46 < uVar41) {
                plVar27[0x10] = *(longlong *)(local_400[0x84] + 0x10 + (ulonglong)*puVar46 * 0x18);
                *puVar23 = 0;
            }
            else {
                *plVar27 = *(longlong *)(local_3c8 + 0x860);
                *puVar23 = 0;
                plVar27[0x28] = 0;
            }
            uVar18 = 0x80 << ((byte)uVar29 + 4 & 0x1f);
            uVar49 = uVar49 | uVar28 | uVar18;
            uVar33 = uVar33 | uVar28 | uVar18;
            if (puVar46[1] < uVar41) {
                plVar38[0x10] = *(longlong *)(local_400[0x84] + 0x10 + (ulonglong)puVar46[1] * 0x18);
                *puVar39 = 0;
            }
            else {
                *plVar38 = *(longlong *)(local_3c8 + 0x868);
                *puVar39 = 0;
                plVar38[0x28] = 0;
            }
            uVar29 = uVar29 + 1;
            puVar39 = puVar39 + 1;
            plVar38 = plVar38 + 1;
            puVar46 = puVar46 + 0x94;
            puVar23 = puVar23 + 1;
            plVar27 = plVar27 + 1;
        } while (uVar29 < uVar34);
        local_42c = local_2c4._4_4_;
        local_440 = (uint)local_2c4;
        local_448 = local_2c8;
        local_450 = local_2cc;
        local_444 = local_2d0;
        local_458 = local_2d4;
        local_454 = local_2d8;
        local_44c = local_2dc;
        local_2e8 = uVar49;
        local_2e4 = uVar33;
    }
    if (local_3a4 == 1) {
        lVar44 = (**(code **)(*DAT_140c65688 + 0xc0))();
        local_258 = *(undefined8 *)(lVar44 + 0x50);
    }
    else {
        local_258 = *(undefined8 *)(local_3c8 + 0x898);
    }
    uVar29 = uVar49 | 0x10000;
    uVar34 = uVar33 | 0x10000;
    local_118 = 0;
    local_17c = 0;
    if (local_380 != (longlong *)0x0) {
        lVar44 = local_380[1];
        lVar22 = *local_380;
        local_170 = 0;
        if ((uint)*(ushort *)(lVar22 + 4) < *(uint *)(*(longlong *)(lVar44 + 0x40) + 0x1c0)) {
            local_1d0[2] = *(undefined8 *)
                    (*(longlong *)(lVar44 + 0x420) + 0x10 +
                     (ulonglong)*(ushort *)(lVar22 + 4) * 0x18);
        }
        else {
            local_250[2] = 0;
            local_110[2] = 0;
        }
        uVar56 = *(ushort *)(lVar22 + 10);
        lVar35 = *(longlong *)(lVar44 + 0x420);
        uVar29 = uVar49 | 0x190000;
        uVar34 = uVar33 | 0x190000;
        local_16c = 0;
        local_1d0[3] = *(undefined8 *)(lVar35 + 0x10 + (ulonglong)uVar56 * 0x18);
        if (local_380 != local_368) {
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000);
            pfVar26 = (float *)(**(code **)(*DAT_140c65670 + 0x110))(DAT_140c65670,0x40,3);
            if (pfVar26 != (float *)0x0) {
                fVar52 = fVar60;
                if ((*(ushort *)(lVar22 + 0x12) & 2) != 0) {
                    fVar52 = fVar61;
                }
                if ((*(ushort *)(lVar22 + 0x12) & 1) == 0) {
                    fVar59 = fVar60;
                }
                *pfVar26 = *(float *)(local_380 + 4) * 2.0;
                pfVar26[1] = fVar59;
                pfVar26[2] = fVar52;
                plVar27 = *(longlong **)(lVar35 + 0x10 + (ulonglong)uVar56 * 0x18);
                if ((plVar27 == (longlong *)0x0) ||
                    (plVar27 = (longlong *)(**(code **)(*plVar27 + 0x38))(), plVar27 == (longlong *)0x0)) {
                    pfVar26[3] = 0.0;
                }
                else {
                    fVar57 = (float)(uint)*(ushort *)((longlong)local_380 + 0x34) + fVar57;
                    lVar35 = (**(code **)(*plVar27 + 0x18))();
                    pfVar26[3] = fVar57 / (float)(ulonglong)*(uint *)(lVar35 + 8);
                }
                cVar2 = *(char *)((longlong)local_380 + 0x5d);
                cVar3 = *(char *)((longlong)local_380 + 0x5e);
                cVar4 = *(char *)((longlong)local_380 + 0x5f);
                pfVar26[4] = (float)(int)*(char *)((longlong)local_380 + 0x5c);
                pfVar26[5] = (float)(int)cVar2;
                pfVar26[6] = (float)(int)cVar3;
                pfVar26[7] = (float)(int)cVar4;
                local_3e8 = CONCAT44((float)(int)*(char *)((longlong)local_380 + 0x71),
                                     (float)(int)*(char *)(local_380 + 0xe));
                _local_3e8 = CONCAT48((float)(int)*(char *)((longlong)local_380 + 0x72),local_3e8);
                _local_3e8 = CONCAT412((float)(int)*(char *)((longlong)local_380 + 0x73),_local_3e8);
                *(undefined (*) [16])(pfVar26 + 8) = _local_3e8;
                if (*(short *)(lVar22 + 6) == 2) {
                    uVar43 = *(undefined4 *)(local_380 + 9);
                    uVar32 = CONCAT44(uVar43,uVar43);
                    auVar53 = CONCAT48(uVar43,uVar32);
                    auVar55 = CONCAT97((unkuint9)
                                               SUB157(CONCAT69(SUB156(CONCAT510(SUB155(CONCAT411(SUB154(CONCAT312(
                                                                                        SUB153(CONCAT213(SUB152(CONCAT114((char)((uint)
                                                                                                                                  uVar43 >> 0x18),
                                                                                                                          ZEXT1314(SUB1613(CONCAT412(uVar43,auVar53),0))) >>
                                                                                                                                                                          0x68,0),CONCAT112((char)((uint)uVar43 >> 0x10),
                                                                                                                                                                                            auVar53)) >> 0x60,0),auVar53) >>
                                                                                                                                                                                                                          0x58,0),CONCAT110((char)((uint)uVar43 >> 8),
                                                                                                                                                                                                                                            SUB1210(auVar53,0))) >> 0x50,0),
                                                                                (unkuint10)SUB129(auVar53,0)) >> 0x48,0),
                                                               CONCAT18((char)uVar43,uVar32)) >> 0x40,0) << 8,
                                       ((uint7)uVar32 >> 0x18) << 0x30);
                    auVar54 = CONCAT115(ZEXT1011(SUB1610(auVar55 >> 0x30,0)) << 8,
                                        ((uint5)uVar32 >> 0x10) << 0x20);
                    auVar51 = CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(auVar54 >> 0x20,0)) << 8,
                                                          ((uint3)uVar43 >> 8) << 0x10) >> 0x10,0),
                                        (short)uVar43) & (undefined  [16])0xffffffffffff00ff;
                    uVar56 = SUB162(auVar55 >> 0x30,0);
                    uVar14 = CONCAT42(SUB144(CONCAT212(uVar56,ZEXT1012(SUB1610(auVar51,0))) >> 0x50,0),
                                      SUB162(auVar54 >> 0x20,0));
                    pfVar26[0xc] = (float)(int)uVar14 * 0.003921569 * 2.0;
                    pfVar26[0xd] = (float)SUB164(CONCAT106((unkuint10)uVar14 << 0x10,
                                                           (SUB166(auVar51,0) >> 0x10) << 0x20) >> 0x20,0) *
                                   0.003921569 * 2.0;
                    pfVar26[0xe] = (float)(SUB164(auVar51,0) & 0xffff) * 0.003921569 * 2.0;
                    pfVar26[0xf] = (float)(uint)uVar56 * 0.003921569 * 1.0;
                }
                else if (*(short *)(lVar22 + 6) == 3) {
                    *(undefined (*) [16])(pfVar26 + 0xc) =
                            CONCAT412(fVar61,*(undefined (*) [12])
                                    (*(longlong *)
                                            ((ulonglong)*(ushort *)(lVar22 + 0xe) * 0x60 + 8 +
                                             *(longlong *)(lVar44 + 0x450)) + 0xc0));
                }
                (**(code **)(*DAT_140c65670 + 0x118))();
            }
        }
    }
    if (local_3b0 != local_390) {
        local_478 = (undefined *)0x0;
        (**(code **)(*DAT_140c65670 + 0x160))();
    }
    local_2a8 = *(uint *)(local_3b8 + 0x58);
    if (local_430 == 5) {
        if (fVar60 < *(float *)(*(longlong *)(local_428 + 0x10) + 0x524)) {
            if ((local_420 & 2) == 0) {
                local_2a8 = local_2a8 + 0xb400;
            }
            else {
                local_2a8 = local_2a8 + 0xc600;
            }
        }
        else if ((local_420 & 1) == 0) {
            local_2a8 = local_2a8 + 0xa200;
        }
        else {
            local_2a8 = local_2a8 + 0x9000;
        }
    }
    else if ((local_430 == 1) && ((*(uint *)(*(longlong *)(local_428 + 0x10) + 0x570) & 0x200) != 0))
    {
        local_2a8 = local_2a8 +
                    (0xc - ((int)((ulonglong)local_2a8 / 0x1200) +
                            (int)(((ulonglong)local_2a8 / 0x1200) / 0xd) * -0xd)) * 0x1200;
    }
    if (*(longlong *)(local_3b0 + 0x50) != 0) {
        local_2a8 = local_2a8 + 1;
    }
    uVar49 = uVar29 | 0x20;
    uVar33 = uVar34 | 0x20;
    local_2b0 = *(undefined8 *)(local_3c8 + 0x800);
    local_2e8 = uVar49;
    local_2e4 = uVar33;
    LAB_14032a409:
    lVar22 = local_358;
    lVar44 = local_388;
    local_410 = local_2b0;
    if ((local_358 != local_388) || (local_400[0x8f] != local_398[0x8f])) {
        (**(code **)(*DAT_140c65670 + 0x138))();
    }
    if (lVar22 != lVar44) {
        (**(code **)(*DAT_140c65670 + 0x130))();
    }
    if (local_3c0 == (int *)0x0) {
        (**(code **)(*DAT_140c65670 + 0x130))();
    }
    lVar44 = (**(code **)(*DAT_140c65670 + 0x2c8))();
    iVar17 = *(int *)(lVar44 + 0x30) - local_3f0;
    local_438 = (float)((uint)*(ushort *)(local_418 + 0x12) * 2 + 1 +
                        (uint)*(ushort *)(local_418 + 0x12));
    local_358 = (ulonglong)(iVar17 - 1) / (ulonglong)(uint)local_438;
    local_388 = 0;
    if (param_5 != 0) {
        local_420 = iVar17 * 0x10;
        lVar44 = local_418;
        do {
            plVar27 = local_338;
            uVar50 = local_388;
            uVar34 = (uint)local_438;
            local_478 = (undefined *)((ulonglong)local_478 & 0xffffffff00000000 | (ulonglong)local_420);
            uVar31 = param_5 - local_388;
            if (local_358 < param_5 - local_388) {
                uVar31 = local_358;
            }
            pfVar26 = (float *)(**(code **)(*DAT_140c65670 + 0x100))();
            if (pfVar26 != (float *)0x0) {
                pauVar20 = (undefined (*) [16])(pfVar26 + 4);
                uVar45 = 0;
                fVar59 = (float)(ulonglong)uVar34;
                *pfVar26 = fVar59;
                pfVar26[1] = fVar59;
                pfVar26[2] = fVar59;
                pfVar26[3] = fVar59;
                if (uVar31 != 0) {
                    do {
                        lVar22 = plVar27[uVar50 + uVar45];
                        lVar35 = *(longlong *)(lVar22 + 0x38);
                        *pauVar20 = CONCAT412(*(undefined4 *)(lVar35 + 0x3c),
                                              CONCAT48(*(undefined4 *)(lVar35 + 0x38),
                                                       CONCAT44(*(undefined4 *)(lVar35 + 0x2c),
                                                                *(undefined4 *)(lVar35 + 0x20))));
                        puVar23 = (undefined4 *)
                                ((ulonglong)*(ushort *)(lVar44 + 0x10) * 0x30 +
                                 *(longlong *)(*(longlong *)(lVar22 + 0x30) + 0x340));
                        iVar17 = (uint)*(ushort *)(lVar44 + 0x12) + (uint)*(ushort *)(lVar44 + 0x12) * 2;
                        if (iVar17 != 0) {
                            lVar22 = (longlong)iVar17;
                            puVar39 = puVar23;
                            do {
                                uVar43 = *puVar39;
                                uVar5 = puVar39[1];
                                uVar6 = puVar39[2];
                                uVar7 = puVar39[3];
                                puVar39 = puVar39 + 4;
                                puVar1 = (undefined4 *)
                                        (((longlong)pauVar20 - (longlong)puVar23) + (longlong)puVar39);
                                *puVar1 = uVar43;
                                puVar1[1] = uVar5;
                                puVar1[2] = uVar6;
                                puVar1[3] = uVar7;
                                lVar22 = lVar22 + -1;
                            } while (lVar22 != 0);
                        }
                        uVar45 = uVar45 + 1;
                        pauVar20 = pauVar20[(longlong)iVar17 + 1];
                    } while (uVar45 < uVar31);
                }
                (**(code **)(*DAT_140c65670 + 0x108))();
            }
            uVar32 = local_410;
            if (((local_430 == 0) && ((*(byte *)(*(longlong *)(local_428 + 0x10) + 0x570) & 1) != 0)) &&
                (local_3a4 == 1)) {
                (**(code **)(*DAT_140c65670 + 0x1f8))();
                (**(code **)(*DAT_140c65670 + 0x200))();
                lVar44 = (**(code **)(*DAT_140c65688 + 0xc0))();
                _local_3e8 = CONCAT124(stack0xfffffffffffffc1c,1);
                local_3d4 = 0;
                _local_3e8 = CONCAT88(*(undefined8 *)(lVar44 + 0x50),local_3e8);
                local_478 = &DAT_140c3fe88;
                (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_3e8);
                (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88);
                (**(code **)(*DAT_140c65670 + 0x1c0))(DAT_140c65670,1);
                (**(code **)(*DAT_140c65670 + 0x198))(DAT_140c65670,0);
                (**(code **)(*DAT_140c65670 + 0x1d0))();
                (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,2);
                (**(code **)(*DAT_140c65670 + 400))();
                uVar34 = 0;
                plVar27 = local_220;
                do {
                    if ((uVar49 & 0x80 << ((byte)uVar34 & 0x1f)) != 0) {
                        if (*plVar27 == 0) {
                            if (plVar27[-0x10] != 0) {
                                local_478 = (undefined *)plVar27[0x18];
                                (**(code **)(*DAT_140c65670 + 0x160))();
                            }
                        }
                        else {
                            (**(code **)(*DAT_140c65670 + 0x168))();
                        }
                    }
                    uVar34 = uVar34 + 1;
                    plVar27 = plVar27 + 1;
                } while (uVar34 < 9);
                local_478 = (undefined *)0x0;
                (**(code **)(*DAT_140c65670 + 0x160))();
                uVar34 = 10;
                plVar27 = local_1d0;
                do {
                    if ((uVar49 & 0x80 << ((byte)uVar34 & 0x1f)) != 0) {
                        if (*plVar27 == 0) {
                            if (plVar27[-0x10] != 0) {
                                local_478 = (undefined *)plVar27[0x18];
                                (**(code **)(*DAT_140c65670 + 0x160))();
                            }
                        }
                        else {
                            (**(code **)(*DAT_140c65670 + 0x168))();
                        }
                    }
                    uVar32 = local_410;
                    uVar34 = uVar34 + 1;
                    plVar27 = plVar27 + 1;
                } while (uVar34 < 0x10);
                (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,local_410);
                lVar44 = local_418;
                local_470 = *(undefined4 *)(local_418 + 0xc);
                local_468 = 0;
                local_478 = (undefined *)
                        ((ulonglong)local_478 & 0xffffffff00000000 | (ulonglong)*(uint *)(local_418 + 4)
                        );
                local_460 = (int)uVar31;
                (**(code **)(*DAT_140c65670 + 0x290))();
                (**(code **)(*DAT_140c65670 + 0x2a0))();
                (**(code **)(*DAT_140c65670 + 0x228))();
                (**(code **)(*DAT_140c65670 + 0x220))();
                uVar33 = uVar33 | 0x1003f;
                local_2e4 = uVar33;
            }
            if (uVar33 != 0) {
                if ((uVar33 & 1) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x1c0))();
                }
                if ((uVar33 & 4) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x150))();
                }
                if ((uVar33 & 8) != 0) {
                    local_468 = local_448;
                    local_470 = local_450;
                    local_478 = (undefined *)
                            ((ulonglong)local_478 & 0xffffffff00000000 | (ulonglong)local_444);
                    (**(code **)(*DAT_140c65670 + 0x1c8))(DAT_140c65670,local_44c);
                }
                if ((uVar33 & 0x10) != 0) {
                    (**(code **)(*DAT_140c65670 + 400))(DAT_140c65670,local_2bc);
                }
                if ((uVar33 & 2) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x198))(DAT_140c65670,local_42c);
                }
                if ((uVar33 & 0x40) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x1a0))(DAT_140c65670,local_2b8);
                }
                if ((uVar33 & 0x20) != 0) {
                    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,uVar32);
                }
                if ((uVar33 & 0x7fff80) != 0) {
                    uVar34 = 0;
                    plVar27 = local_220;
                    do {
                        if ((uVar33 & 0x80 << ((byte)uVar34 & 0x1f)) != 0) {
                            if (*plVar27 == 0) {
                                if (plVar27[-0x10] != 0) {
                                    local_478 = (undefined *)plVar27[0x18];
                                    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar34);
                                }
                            }
                            else {
                                (**(code **)(*DAT_140c65670 + 0x168))();
                            }
                        }
                        uVar34 = uVar34 + 1;
                        plVar27 = plVar27 + 1;
                    } while (uVar34 < 0x10);
                }
                uVar33 = 0;
                local_2e4 = 0;
                lVar44 = local_418;
            }
            local_470 = *(undefined4 *)(lVar44 + 0xc);
            local_468 = 0;
            local_478 = (undefined *)
                    ((ulonglong)local_478 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar44 + 4));
            local_460 = (int)uVar31;
            (**(code **)(*DAT_140c65670 + 0x290))(DAT_140c65670,3);
            local_388 = local_388 + uVar31;
        } while (local_388 < param_5);
    }
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack1176);
    return;
}



undefined8
FUN_14032abb0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
              undefined8 param_5_00,longlong param_6,ulonglong param_5)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;

    uVar4 = FUN_140312840(*(undefined8 *)(param_3 + 0x10));
    (**(code **)(*DAT_140c65670 + 0x188))(uVar4,param_2,0,DAT_140c65670,0);
    uVar3 = 0;
    if (param_5 != 0) {
        do {
            lVar1 = *(longlong *)(param_6 + uVar3 * 8);
            lVar2 = *(longlong *)(lVar1 + 0x40);
            (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar2 + 4),
                     *(undefined8 *)(lVar2 + 0x20));
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_5);
    }
    return 0;
}



ulonglong FUN_14032c3a0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    ushort uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong uVar10;
    ushort *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;

    uVar3 = *(ulonglong *)(param_4 + 0x30);
    uVar4 = *(ulonglong *)(param_3 + 0x30);
    uVar2 = *(uint *)(param_3 + 0x40);
    lVar5 = *(longlong *)(uVar3 + 0x40);
    lVar6 = *(longlong *)(uVar4 + 0x40);
    lVar9 = (ulonglong)*(uint *)(param_4 + 0x40) * 400 + *(longlong *)(lVar5 + 800);
    lVar7 = *(longlong *)(lVar6 + 800);
    uVar12 = 0;
    puVar11 = (ushort *)(lVar9 + 6);
    do {
        uVar1 = *(ushort *)((((ulonglong)uVar2 * 400 + lVar7) - lVar9) + (longlong)puVar11);
        uVar13 = 0xffffffffffffffff;
        if (((uint)uVar1 < *(uint *)(lVar6 + 0x1c0)) &&
            (plVar8 = *(longlong **)(*(longlong *)(uVar4 + 0x420) + 0x10 + (ulonglong)uVar1 * 0x18),
                    plVar8 != (longlong *)0x0)) {
            uVar13 = (**(code **)(*plVar8 + 0x40))();
        }
        uVar10 = 0xffffffffffffffff;
        if (((uint)*puVar11 < *(uint *)(lVar5 + 0x1c0)) &&
            (plVar8 = *(longlong **)(*(longlong *)(uVar3 + 0x420) + 0x10 + (ulonglong)*puVar11 * 0x18),
                    plVar8 != (longlong *)0x0)) {
            uVar10 = (**(code **)(*plVar8 + 0x40))();
        }
        if (uVar13 < uVar10) {
            return 0xffffffff;
        }
        if (uVar10 < uVar13) {
            return 1;
        }
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 1;
    } while (uVar12 < 2);
    if (*(ulonglong *)(uVar3 + 0x38) <= *(ulonglong *)(uVar4 + 0x38)) {
        if (*(ulonglong *)(uVar3 + 0x38) < *(ulonglong *)(uVar4 + 0x38)) {
            return 1;
        }
        if (uVar3 <= uVar4) {
            if (uVar3 < uVar4) {
                return 1;
            }
            if (*(uint *)(param_4 + 0x40) <= *(uint *)(param_3 + 0x40)) {
                return (ulonglong)(*(uint *)(param_4 + 0x40) < *(uint *)(param_3 + 0x40));
            }
        }
    }
    return 0xffffffff;
}



ulonglong FUN_14032c530(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    float *pfVar1;
    ushort uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    uVar4 = *(ulonglong *)(param_3 + 0x30);
    uVar5 = *(ulonglong *)(param_4 + 0x30);
    if (*(ulonglong *)(uVar4 + 0x38) < *(ulonglong *)(uVar5 + 0x38)) {
        return 0xffffffff;
    }
    if (*(ulonglong *)(uVar4 + 0x38) <= *(ulonglong *)(uVar5 + 0x38)) {
        if (uVar4 < uVar5) {
            return 0xffffffff;
        }
        if (uVar4 <= uVar5) {
            uVar6 = *(ulonglong *)(param_4 + 0x40);
            uVar7 = *(ulonglong *)(param_3 + 0x40);
            uVar2 = (*(ushort **)(uVar7 + 8))[6];
            uVar3 = (*(ushort **)(uVar6 + 8))[6];
            if (uVar3 <= uVar2) {
                if (uVar3 < uVar2) {
                    return 1;
                }
                pfVar1 = (float *)((ulonglong)**(ushort **)(uVar7 + 8) * 0x40 + 0x30 +
                                   *(longlong *)(uVar4 + 0x338));
                fVar10 = *pfVar1;
                fVar8 = pfVar1[1];
                fVar9 = fVar10 * fVar10 + fVar8 * fVar8 + 0.0;
                pfVar1 = (float *)((ulonglong)**(ushort **)(uVar6 + 8) * 0x40 + 0x30 +
                                   *(longlong *)(uVar5 + 0x338));
                fVar10 = *pfVar1;
                fVar8 = pfVar1[1];
                fVar10 = fVar10 * fVar10 + fVar8 * fVar8 + 0.0;
                if (fVar10 <= fVar9) {
                    if (fVar10 < fVar9) {
                        return 1;
                    }
                    if (uVar6 <= uVar7) {
                        return (ulonglong)(uVar6 < uVar7);
                    }
                }
            }
            return 0xffffffff;
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14032ca60(longlong param_1,undefined (*param_2) [16],float *param_3)

{
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar2;
    undefined auVar1 [16];
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined extraout_XMM0_01 [16];
    float fVar3;
    float fVar4;
    undefined4 in_XMM3_Da;
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
    undefined auStack504 [32];
    undefined4 local_1d8;
    undefined local_1c8 [16];
    undefined local_1b8 [16];
    float local_198;
    float fStack404;
    float fStack400;
    undefined4 uStack396;
    float local_188;
    float fStack388;
    float fStack384;
    undefined4 uStack380;
    float local_178;
    float fStack372;
    float fStack368;
    undefined4 uStack364;
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    fVar10 = 0.5;
    fVar14 = 3.0;
    fVar15 = 1.0;
    fVar16 = 0.0;
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar9 = 1.0;
    fVar11 = *param_3;
    fVar12 = param_3[1];
    fVar13 = param_3[2];
    fVar2 = param_3[3];
    local_1c8 = ZEXT816(0x3f000000);
    fVar3 = fVar12 * fVar12;
    fVar4 = fVar11 * fVar11 + fVar3 + 0.0;
    auVar1 = rsqrtss(CONCAT412(fVar3,CONCAT48(fVar3,CONCAT44(fVar3,fVar3))),
                     CONCAT412(fVar2 * fVar2,CONCAT48(fVar13 * fVar13,CONCAT44(fVar3,fVar4))));
    fVar3 = SUB164(auVar1,0);
    fVar3 = (3.0 - fVar4 * fVar3 * fVar3) * 0.5 * fVar3;
    if (fVar3 <= 0.0) {
        fVar3 = 0.0;
    }
    fVar11 = fVar3 * fVar11;
    fVar12 = fVar3 * fVar12;
    fVar13 = fVar3 * fVar13;
    fVar3 = fVar3 * fVar2;
    local_1d8 = in_XMM3_Da;
    if ((fVar11 != 0.0) || (fVar13 != 0.0)) {
        fVar4 = 0.0 - fVar12 * 0.0;
        fVar6 = fVar11 * 0.0 - 0.0;
        fVar7 = fVar12 * 0.0 - fVar11 * 1.0;
        fVar8 = fVar3 * 0.0 - fVar3 * 0.0;
        FUN_1408fccb0();
        FUN_1408fe3d0();
        fVar2 = extraout_XMM0_Da;
        FUN_1408fc950();
        uStack396 = 0;
        fStack368 = SUB164(extraout_XMM0,0);
        fVar9 = fVar9 - fStack368;
        fVar5 = fVar4 * fVar4 + fVar6 * fVar6 + 0.0;
        auVar1 = rsqrtss(extraout_XMM0,
                         CONCAT412(fVar8 * fVar8,CONCAT48(fVar7 * fVar7,CONCAT44(fVar6 * fVar6,fVar5))))
                ;
        fVar7 = SUB164(auVar1,0);
        fVar7 = (fVar14 - fVar5 * fVar7 * fVar7) * fVar10 * fVar7;
        if (fVar7 <= 0.0) {
            fVar7 = 0.0;
        }
        fVar4 = fVar7 * fVar4;
        fVar7 = fVar7 * fVar6;
        local_198 = fVar4 * fVar4 * fVar9 + fStack368;
        local_188 = fVar7 * fVar4 * fVar9;
        fStack404 = fVar2 * 0.0 + local_188;
        local_188 = local_188 - fVar2 * 0.0;
        local_178 = fVar4 * 0.0 * fVar9;
        fStack372 = fVar7 * 0.0 * fVar9;
        fStack400 = local_178 - fVar7 * fVar2;
        local_178 = fVar7 * fVar2 + local_178;
        uStack380 = 0;
        uStack364 = 0;
        fStack384 = fVar4 * fVar2 + fStack372;
        fStack372 = fStack372 - fVar4 * fVar2;
        fVar4 = fVar15 * fStack404;
        fVar10 = fVar15 * fStack400;
        fVar6 = fVar15 * 0.0;
        fStack388 = fVar7 * fVar7 * fVar9 + fStack368;
        fVar2 = fVar16 * fStack384;
        fVar5 = fVar16 * 0.0;
        fStack368 = fVar9 * 0.0 + fStack368;
        fVar15 = fVar15 * local_198 + fVar16 * local_188 + local_178 * 0.0 + 0.0;
        fVar16 = fVar4 + fVar16 * fStack388 + fStack372 * 0.0 + 0.0;
        fVar7 = fVar10 + fVar2 + fStack368 * 0.0 + 0.0;
        fVar5 = fVar6 + fVar5 + 0.0 + 1.0;
        local_1b8 = CONCAT412(0x3f800000,
                              CONCAT48(fStack400 * 0.0 + fStack384 * 0.0 + fStack368 * 0.0 + 0.0,
                                       CONCAT44(fStack404 * 0.0 + fStack388 * 0.0 + fStack372 * 0.0 +
                                                0.0,local_198 * 0.0 + local_188 * 0.0 + local_178 * 0.0
                                                    + 0.0)));
    }
    fVar10 = 1.0;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
    FUN_1408fe3d0();
    fVar4 = extraout_XMM0_Da_00;
    FUN_1408fc950();
    uStack396 = 0;
    fStack368 = SUB164(extraout_XMM0_00,0);
    fVar10 = fVar10 - fStack368;
    fVar9 = fVar15 * fVar15 + fVar16 * fVar16 + 0.0;
    auVar1 = rsqrtss(extraout_XMM0_00,
                     CONCAT412(fVar5 * fVar5,CONCAT48(fVar7 * fVar7,CONCAT44(fVar16 * fVar16,fVar9))))
            ;
    fVar2 = SUB164(auVar1,0);
    fVar2 = (fVar14 - fVar9 * fVar2 * fVar2) * local_1c8._0_4_ * fVar2;
    if (fVar2 <= 0.0) {
        fVar2 = 0.0;
    }
    fVar15 = fVar2 * fVar15;
    fVar2 = fVar2 * fVar16;
    local_198 = fVar15 * fVar15 * fVar10 + fStack368;
    local_188 = fVar2 * fVar15 * fVar10;
    fStack404 = fVar4 * 0.0 + local_188;
    local_188 = local_188 - fVar4 * 0.0;
    local_178 = fVar15 * 0.0 * fVar10;
    fStack372 = fVar2 * 0.0 * fVar10;
    fStack400 = local_178 - fVar2 * fVar4;
    fStack384 = fVar15 * fVar4 + fStack372;
    fStack388 = fVar2 * fVar2 * fVar10 + fStack368;
    local_178 = fVar2 * fVar4 + local_178;
    uStack380 = 0;
    uStack364 = 0;
    fStack372 = fStack372 - fVar15 * fVar4;
    fStack368 = fVar10 * 0.0 + fStack368;
    *param_2 = CONCAT412(fVar12 * 0.0 + fVar11 * 0.0 + 0.0 + 1.0,
                         CONCAT48(fVar12 * fStack384 + fVar11 * fStack400 + fStack368 * 0.0 + 0.0,
                                  CONCAT44(fVar12 * fStack388 + fVar11 * fStack404 + fStack372 * 0.0 +
                                           0.0,fVar12 * local_188 + fVar11 * local_198 +
                                               local_178 * 0.0 + 0.0)));
    FUN_1408fe3d0();
    fVar2 = extraout_XMM0_Da_01;
    FUN_1408fc950();
    uStack396 = 0;
    fStack368 = SUB164(extraout_XMM0_01,0);
    fVar16 = 1.0 - fStack368;
    fVar15 = fVar11 * fVar11 + fVar12 * fVar12 + 0.0;
    auVar1 = rsqrtss(extraout_XMM0_01,
                     CONCAT412(fVar3 * fVar3,
                               CONCAT48(fVar13 * fVar13,CONCAT44(fVar12 * fVar12,fVar15))));
    fVar13 = SUB164(auVar1,0);
    fVar13 = (fVar14 - fVar15 * fVar13 * fVar13) * local_1c8._0_4_ * fVar13;
    if (fVar13 <= 0.0) {
        fVar13 = 0.0;
    }
    fVar11 = fVar13 * fVar11;
    fVar13 = fVar13 * fVar12;
    local_198 = fVar11 * fVar11 * fVar16 + fStack368;
    local_188 = fVar13 * fVar11 * fVar16;
    fStack404 = fVar2 * 0.0 + local_188;
    local_188 = local_188 - fVar2 * 0.0;
    local_178 = fVar11 * 0.0 * fVar16;
    fStack372 = fVar13 * 0.0 * fVar16;
    fStack400 = local_178 - fVar13 * fVar2;
    fVar12 = *(float *)*param_2;
    fVar15 = *(float *)(*param_2 + 4);
    local_178 = fVar13 * fVar2 + local_178;
    uStack380 = 0;
    uStack364 = 0;
    fStack384 = fVar11 * fVar2 + fStack372;
    fStack372 = fStack372 - fVar11 * fVar2;
    fStack388 = fVar13 * fVar13 * fVar16 + fStack368;
    fStack368 = fVar16 * 0.0 + fStack368;
    *param_2 = CONCAT412(fVar15 * 0.0 + fVar12 * 0.0 + 0.0 + 1.0,
                         CONCAT48(fVar15 * fStack384 + fVar12 * fStack400 + fStack368 * 0.0 + 0.0,
                                  CONCAT44(fVar15 * fStack388 + fVar12 * fStack404 + fStack372 * 0.0 +
                                           0.0,fVar15 * local_188 + fVar12 * local_198 +
                                               local_178 * 0.0 + 0.0)));
    fVar11 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + 0.0);
    *param_2 = CONCAT412(*(float *)(*param_2 + 0xc) * fVar11,
                         CONCAT48(*(float *)(*param_2 + 8) * fVar11,
                                  CONCAT44(*(float *)(*param_2 + 4) * fVar11,
                                           *(float *)*param_2 * fVar11)));
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack504);
    return;
}



undefined8 * FUN_14032d190(undefined8 *param_1)

{
    FUN_14032f450();
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    *param_1 = &PTR_LAB_140b64510;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    *(undefined4 *)(param_1 + 0x72) = 0;
    *(undefined (*) [16])(param_1 + 0x74) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x76) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x7a) = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    *(undefined4 *)(param_1 + 0x82) = 1;
    *(undefined4 *)((longlong)param_1 + 0x424) = 0;
    param_1[0x85] = 0;
    return param_1;
}



undefined8 FUN_14032d3b0(undefined8 param_1,ulonglong param_2)

{
    FUN_14032d3f0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14032d3f0(undefined8 *param_1)

{
    longlong lVar1;

    lVar1 = param_1[0x85];
    *param_1 = &PTR_LAB_140b64510;
    while (lVar1 != 0) {
        lVar1 = param_1[0x85];
        if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x10);
        }
        if (*(longlong *)(lVar1 + 0x10) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        lVar1 = param_1[0x85];
    }
    if (param_1[0x35] != 0) {
        FUN_1403131d0();
    }
    if (param_1[0x85] != 0) {
        FUN_1401a4a00(param_1 + 0x85);
    }
    lVar1 = param_1[0x80];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x7e];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[0x70] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x6d] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x6b] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x69] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x67] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x65] != 0) {
        FUN_140317c90();
    }
    if (param_1[99] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x61] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x5f] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x5c] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x59] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x57] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x54] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x50] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x4d] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x4b] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x49] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x47] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x45] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x43] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x41] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x3f] != 0) {
        FUN_140317c90();
    }
    if (param_1[0x3d] != 0) {
        FUN_140317c90();
    }
    FUN_14032f590(param_1);
    return;
}



void FUN_14032d650(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
        FUN_1403131d0();
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    return;
}



undefined8 FUN_14032d6b0(longlong param_1,undefined8 param_2,longlong param_3)

{
    ushort uVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    ushort *puVar9;
    ulonglong uVar10;
    uint *puVar11;
    float fVar12;
    float fVar13;

    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_3 + 0x90);
    uVar7 = FUN_14032f6f0();
    if (-1 < (int)uVar7) {
        uVar1 = *(ushort *)
                ((ulonglong)**(ushort **)(param_1 + 8) * 0x160 + 6 +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) + 0x188));
        lVar2 = *(longlong *)(param_1 + 0x1a0);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1f0);
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        *(ulonglong *)(param_1 + 0x418) = (ulonglong)uVar1 * 0x60 + lVar3;
        if ((*(byte *)(lVar2 + 0x850) & 1) != 0) {
            *(undefined4 *)(param_1 + 0x3d0) = 1;
        }
        if ((*(byte *)(lVar2 + 0x850) & 2) != 0) {
            *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
        }
        if ((*(byte *)(lVar2 + 0x850) & 4) != 0) {
            *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + 1;
        }
        *(undefined4 *)(param_1 + 0x420) = 0;
        fVar13 = -3.402823e+38;
        *(undefined (*) [16])(param_1 + 0x370) = ZEXT1216(**(undefined (**) [12])(lVar2 + 0x288));
        lVar2 = *(longlong *)(param_1 + 0x1a0);
        fVar12 = -3.402823e+38;
        if (*(ushort *)(lVar2 + 0x4f8) != 0) {
            puVar11 = (uint *)(lVar2 + 0x500);
            uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x4f8);
            do {
                if (*puVar11 != 0) {
                    puVar9 = *(ushort **)(puVar11 + 4);
                    uVar10 = (ulonglong)*puVar11;
                    do {
                        uVar1 = *puVar9;
                        uVar4 = (uint)uVar1;
                        uVar5 = uVar4 & 0xffff7fff;
                        if ((uVar1 & 0x7c00) == 0) {
                            if ((uVar1 & 0x3ff) != 0) {
                                iVar6 = 0x71;
                                for (uVar5 = (uVar4 & 0x3ff) << 0xd; uVar5 < 0x800000; uVar5 = uVar5 * 2) {
                                    iVar6 = iVar6 + -1;
                                }
                                uVar5 = iVar6 << 0x17 | uVar5 & 0x7fffff;
                            }
                        }
                        else {
                            uVar5 = (uVar5 + 0x1c000) * 0x2000;
                        }
                        if (fVar12 < (float)(uVar5 | (uVar4 & 0xffff8000) << 0x10)) {
                            fVar12 = (float)FUN_1401c9770();
                        }
                        puVar9 = puVar9 + 1;
                        uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                }
                puVar11 = puVar11 + 6;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        if (*(uint *)(lVar2 + 0x248) != 0) {
            puVar9 = *(ushort **)(lVar2 + 600);
            uVar8 = (ulonglong)*(uint *)(lVar2 + 0x248);
            do {
                uVar1 = *puVar9;
                uVar4 = (uint)uVar1;
                uVar5 = uVar4 & 0xffff7fff;
                if ((uVar1 & 0x7c00) == 0) {
                    if ((uVar1 & 0x3ff) != 0) {
                        iVar6 = 0x71;
                        for (uVar5 = (uVar4 & 0x3ff) << 0xd; uVar5 < 0x800000; uVar5 = uVar5 * 2) {
                            iVar6 = iVar6 + -1;
                        }
                        uVar5 = iVar6 << 0x17 | uVar5 & 0x7fffff;
                    }
                }
                else {
                    uVar5 = (uVar5 + 0x1c000) * 0x2000;
                }
                if (fVar13 < (float)(uVar5 | (uVar4 & 0xffff8000) << 0x10)) {
                    fVar13 = (float)FUN_1401c9770();
                }
                puVar9 = puVar9 + 1;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        *(undefined *)(param_1 + 0x427) = 0;
        *(float *)(param_1 + 0x394) = fVar13 * fVar12;
        if (*(longlong *)(param_1 + 0x1a8) != 0) {
            FUN_1403131d0();
        }
        *(undefined8 *)(param_1 + 0x1a8) = 0;
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        lVar2 = *(longlong *)(param_1 + 0x428);
        while (lVar2 != 0) {
            lVar2 = *(longlong *)(param_1 + 0x428);
            if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
            }
            if (*(longlong *)(lVar2 + 0x10) != 0) {
                *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            }
            *(undefined8 *)(lVar2 + 8) = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            lVar2 = *(longlong *)(param_1 + 0x428);
        }
        uVar7 = 0;
    }
    return uVar7;
}



undefined8 FUN_14032d9c0(longlong param_1,undefined8 *param_2)

{
    if (param_2 == (undefined8 *)0x0) {
        return 0x80070057;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x28);
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14032da00(ulonglong param_1,uint param_2,ulonglong param_3,undefined (*param_4) [16],
                   float *param_5,float *param_6,float *param_7,float *param_8,float *param_9)

{
    undefined4 uVar1;
    byte bVar2;
    ushort uVar3;
    longlong *plVar4;
    int iVar5;
    float *pfVar6;
    float *pfVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    ulonglong *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    short *psVar14;
    longlong lVar15;
    uint uVar16;
    uint uVar17;
    ulonglong uVar18;
    uint uVar19;
    longlong lVar20;
    uint uVar21;
    longlong lVar22;
    ulonglong uVar23;
    char cVar24;
    longlong lVar25;
    int *piVar26;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    undefined4 extraout_XMM0_Da_03;
    undefined4 extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    undefined4 extraout_XMM0_Da_08;
    undefined4 extraout_XMM0_Da_09;
    float extraout_XMM0_Da_10;
    float extraout_XMM0_Da_11;
    undefined4 extraout_XMM0_Da_12;
    undefined4 extraout_XMM0_Da_13;
    undefined4 extraout_XMM0_Da_14;
    float extraout_XMM0_Da_15;
    float extraout_XMM0_Da_16;
    float extraout_XMM0_Da_17;
    float extraout_XMM0_Da_18;
    float extraout_XMM0_Da_19;
    float extraout_XMM0_Da_20;
    float extraout_XMM0_Da_21;
    float extraout_XMM0_Da_22;
    float extraout_XMM0_Da_23;
    float extraout_XMM0_Da_24;
    float extraout_XMM0_Da_25;
    float extraout_XMM0_Da_26;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    float fVar27;
    float fVar29;
    float fVar30;
    float fVar31;
    undefined auVar28 [16];
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
    undefined4 uVar52;
    undefined4 uVar53;
    float fVar54;
    float fVar55;
    undefined auStack712 [32];
    undefined4 local_2a8;
    undefined4 local_298;
    undefined4 local_294;
    undefined8 local_288;
    undefined8 uStack640;
    undefined4 local_278;
    undefined local_268 [8];
    float fStack608;
    float fStack604;
    longlong local_258;
    undefined local_248 [8];
    float fStack576;
    float local_238;
    float fStack564;
    float fStack560;
    float fStack556;
    float *local_228;
    float *local_220;
    longlong local_218;
    float *local_210;
    longlong local_208;
    float *local_200;
    undefined (*local_1f8) [16];
    undefined local_1e8 [8];
    float fStack480;
    undefined local_1d8 [16];
    float local_1c8 [7];
    float fStack428;
    float local_1a8;
    float fStack420;
    float fStack416;
    float fStack412;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float *local_178;
    float *local_170;
    float local_148;
    uint local_144;
    ulonglong local_128;
    float local_120;
    float afStack280 [12];
    ulonglong local_e8;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    _local_268 = _local_268 & (undefined  [16])0x0;
    local_228 = param_7;
    lVar15 = *(longlong *)(param_1 + 0x1a0);
    local_210 = param_8;
    uVar3 = *(ushort *)(lVar15 + 8);
    local_200 = param_5;
    local_220 = param_6;
    local_1f8 = param_4;
    local_128 = param_1;
    if (7 < uVar3) {
        fVar47 = 0.5;
        fVar51 = 3.0;
        if (uVar3 == 0xc) {
            if ((*(uint *)(param_1 + 0x18) < 2) ||
                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x4c0) == 0)) goto LAB_14032f0af;
            fVar54 = 0.0;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            uVar19 = 0;
            uVar21 = *(int *)(param_1 + 0x18) - 2;
            uVar17 = uVar19;
            if (3 < (int)uVar21) {
                uVar16 = 2;
                do {
                    pfVar6 = (float *)(param_1 + 0x3dc + (ulonglong)(uVar16 - 1) * 4);
                    if (extraout_XMM0_Da_16 < *pfVar6 || extraout_XMM0_Da_16 == *pfVar6) goto LAB_14032e0fe;
                    pfVar6 = (float *)(param_1 + 0x3dc + (ulonglong)uVar16 * 4);
                    if (extraout_XMM0_Da_16 < *pfVar6 || extraout_XMM0_Da_16 == *pfVar6) {
                        uVar19 = uVar19 + 1;
                        goto LAB_14032e0fe;
                    }
                    pfVar6 = (float *)(param_1 + 0x3dc + (ulonglong)(uVar16 + 1) * 4);
                    if (extraout_XMM0_Da_16 < *pfVar6 || extraout_XMM0_Da_16 == *pfVar6) {
                        uVar19 = uVar19 + 2;
                        goto LAB_14032e0fe;
                    }
                    pfVar6 = (float *)(param_1 + 0x3dc + (ulonglong)(uVar16 + 2) * 4);
                    if (extraout_XMM0_Da_16 < *pfVar6 || extraout_XMM0_Da_16 == *pfVar6) {
                        uVar19 = uVar19 + 3;
                        goto LAB_14032e0fe;
                    }
                    uVar19 = uVar19 + 4;
                    uVar16 = uVar16 + 4;
                    uVar17 = uVar19;
                } while (uVar19 < *(int *)(param_1 + 0x18) - 5U);
            }
            do {
                uVar19 = uVar17;
                if (uVar21 <= uVar19) break;
                pfVar6 = (float *)(param_1 + 0x3dc + (ulonglong)(uVar19 + 1) * 4);
                uVar17 = uVar19 + 1;
            } while (*pfVar6 <= extraout_XMM0_Da_16 && extraout_XMM0_Da_16 != *pfVar6);
            LAB_14032e0fe:
            uVar18 = (ulonglong)uVar19;
            fVar33 = *(float *)(param_1 + 0x3dc + uVar18 * 4);
            fVar39 = *(float *)(param_1 + 0x3dc + (ulonglong)(uVar19 + 1) * 4);
            if (fVar39 - fVar33 == fVar54) {
                if (*(longlong *)(param_1 + 0x20) == 0) {
                    auVar28 = ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff;
                }
                else {
                    auVar28 = *(undefined (*) [16])(*(longlong *)(param_1 + 0x20) + uVar18 * 0x10);
                }
            }
            else {
                plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                fVar40 = extraout_XMM0_Da_16;
                pfVar6 = (float *)(**(code **)(*plVar4 + 0x358))
                        (plVar4,&local_238,(&DAT_140af1508)[uVar19 + 1],0);
                plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                pfVar7 = (float *)(**(code **)(*plVar4 + 0x358))
                        (plVar4,&local_288,(&DAT_140af1508)[uVar18],0);
                fVar33 = (fVar40 - fVar33) / (fVar39 - fVar33);
                auVar28 = CONCAT412(fVar33 * (pfVar6[3] - pfVar7[3]) + pfVar7[3],
                                    CONCAT48(fVar33 * (pfVar6[2] - pfVar7[2]) + pfVar7[2],
                                             CONCAT44(fVar33 * (pfVar6[1] - pfVar7[1]) + pfVar7[1],
                                                      fVar33 * (*pfVar6 - *pfVar7) + *pfVar7)));
            }
            *param_4 = auVar28;
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0);
            iVar5 = (**(code **)(*plVar4 + 0x350))(plVar4,0x1f);
            if (iVar5 == 0) {
                pfVar6 = *(float **)(param_1 + 0x20);
                local_288._0_4_ = *(float *)*param_4;
                local_288._4_4_ = *(float *)(*param_4 + 4);
                if (pfVar6 != (float *)0x0) {
                    local_288._0_4_ = (float)local_288 - *pfVar6;
                    local_288._4_4_ = local_288._4_4_ - pfVar6[1];
                }
            }
            else {
                plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                (**(code **)(*plVar4 + 0x358))(plVar4,&local_288,0x1f);
                local_288._0_4_ = *(float *)*param_4 - (float)local_288;
                local_288._4_4_ = *(float *)(*param_4 + 4) - local_288._4_4_;
            }
        }
        else {
            if (uVar3 == 8) {
                LAB_14032e2e4:
                local_258 = *(longlong *)(param_1 + 0x28);
                LAB_14032e2ed:
                lVar20 = *(longlong *)(*(longlong *)(local_258 + 0x38) + 0x40);
                if (*(int *)(lVar20 + 0xa8) == 0) goto LAB_14032f0af;
                lVar22 = *(longlong *)(lVar20 + 0xb0);
                lVar25 = *(longlong *)(lVar20 + 0xc0);
                fVar33 = 1.0;
                uVar18 = 0;
                uVar19 = 0;
                if ((*(byte *)(lVar15 + 10) & 4) == 0) {
                    fVar54 = 0.0;
                    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                    uVar13 = 1;
                    uVar12 = (ulonglong)*(uint *)(lVar20 + 0x80);
                    auVar28 = extraout_XMM0_00;
                    if (1 < (ulonglong)*(uint *)(lVar20 + 0x80)) {
                        do {
                            uVar8 = (uVar12 - uVar13 >> 1) + uVar13;
                            FUN_1401c9770(lVar22 + (ulonglong)*(uint *)(lVar25 + uVar8 * 4) * 2);
                            if (extraout_XMM0_Da_22 <= SUB164(auVar28,0)) {
                                uVar13 = uVar8 + 1;
                                uVar8 = uVar12;
                            }
                            uVar12 = uVar8;
                        } while (uVar13 < uVar8);
                    }
                    uVar12 = (ulonglong)*(uint *)(lVar25 + uVar13 * 4);
                    piVar26 = (int *)((uVar13 - 1) * 0x70 + *(longlong *)(lVar20 + 0x88));
                    iVar5 = *(int *)(lVar25 + (uVar13 - 1) * 4);
                    uVar13 = (ulonglong)(iVar5 + 1);
                    if (uVar13 < uVar12) {
                        do {
                            uVar8 = (uVar12 - uVar13 >> 1) + uVar13;
                            FUN_1401c9770(lVar22 + uVar8 * 2);
                            if (extraout_XMM0_Da_23 <= SUB164(auVar28,0)) {
                                uVar13 = uVar8 + 1;
                                uVar8 = uVar12;
                            }
                            uVar12 = uVar8;
                        } while (uVar13 < uVar8);
                    }
                    iVar5 = (int)uVar13 - iVar5;
                }
                else {
                    if (*(longlong *)(param_1 + 0x408) == 0) goto LAB_14032f0af;
                    fVar54 = 0.0;
                    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                    uVar13 = 1;
                    if (1 < (ulonglong)*(uint *)(lVar20 + 0x80)) {
                        uVar12 = (ulonglong)*(uint *)(lVar20 + 0x80);
                        do {
                            uVar8 = (uVar12 - uVar13 >> 1) + uVar13;
                            if (*(float *)(*(longlong *)(param_1 + 0x400) + uVar8 * 4) <= extraout_XMM0_Da_17) {
                                uVar13 = uVar8 + 1;
                                uVar8 = uVar12;
                            }
                            uVar12 = uVar8;
                        } while (uVar13 < uVar8);
                    }
                    fVar39 = *(float *)(*(longlong *)(param_1 + 0x400) + -4 + uVar13 * 4);
                    piVar26 = (int *)((uVar13 - 1) * 0x70 + *(longlong *)(lVar20 + 0x88));
                    fVar40 = *(float *)(*(longlong *)(param_1 + 0x400) + uVar13 * 4) - fVar39;
                    if (fVar40 < 1e-05) goto LAB_14032f0af;
                    local_278 = *(int *)(lVar25 + -4 + uVar13 * 4);
                    uVar12 = (ulonglong)*(uint *)(lVar25 + uVar13 * 4);
                    uVar13 = (ulonglong)(local_278 + 1);
                    fVar42 = extraout_XMM0_Da_17;
                    FUN_1401c9770(lVar22 + uVar12 * 2);
                    fVar41 = extraout_XMM0_Da_18;
                    FUN_1401c9770();
                    cVar24 = 'q';
                    fVar39 = (fVar41 - extraout_XMM0_Da_19) * ((fVar42 - fVar39) / fVar40);
                    uVar17 = (uint)fVar39 & 0x7fffffff;
                    if (0x337fffff < uVar17) {
                        if (uVar17 < 0x387ff000) {
                            uVar19 = (((uint)fVar39 & 0x7fffff | 0x800000) >>
                                                                           (0x71U - (char)(uVar17 >> 0x17) & 0x1f)) + 0x1000 >> 0xd;
                        }
                        else if (uVar17 < 0x47fff000) {
                            uVar19 = uVar17 + 0xc8001000 >> 0xd;
                        }
                        else {
                            uVar19 = 0x43ff;
                        }
                    }
                    uVar17 = uVar19 & 0x7fff;
                    if ((uVar19 & 0x7c00) == 0) {
                        if ((uVar19 & 0x3ff) != 0) {
                            iVar5 = 0x71;
                            for (uVar17 = (uVar19 & 0x3ff) << 0xd; uVar17 < 0x800000; uVar17 = uVar17 * 2) {
                                iVar5 = iVar5 + -1;
                            }
                            uVar17 = iVar5 << 0x17 | uVar17 & 0x7fffff;
                        }
                    }
                    else {
                        uVar17 = (uVar17 + 0x1c000) * 0x2000;
                    }
                    local_298 = (float)(uVar17 | (uVar19 & 0x8000 | (uint)fVar39 >> 0x10 & 0x8000) << 0x10);
                    FUN_1401c9770();
                    local_298 = extraout_XMM0_Da_20 + local_298;
                    uVar19 = (uint)local_298 & 0x7fffffff;
                    uVar8 = uVar18;
                    if (0x337fffff < uVar19) {
                        if (uVar19 < 0x387ff000) {
                            uVar8 = (ulonglong)
                                    ((((uint)local_298 & 0x7fffff | 0x800000) >>
                                                                              (cVar24 - (char)(uVar19 >> 0x17) & 0x1fU)) + 0x1000 >> 0xd);
                        }
                        else if (uVar19 < 0x47fff000) {
                            uVar8 = (ulonglong)(uVar19 + 0xc8001000 >> 0xd);
                        }
                        else {
                            uVar8 = 0x43ff;
                        }
                    }
                    local_294 = (float)CONCAT22(local_294._2_2_,
                                                (ushort)uVar8 | (ushort)((uint)local_298 >> 0x10) & 0x8000);
                    FUN_1401c9770(&local_294);
                    auVar28 = extraout_XMM0;
                    if (uVar13 < uVar12) {
                        do {
                            uVar8 = (uVar12 - uVar13 >> 1) + uVar13;
                            FUN_1401c9770(lVar22 + uVar8 * 2);
                            if (extraout_XMM0_Da_21 <= SUB164(auVar28,0)) {
                                uVar13 = uVar8 + 1;
                                uVar8 = uVar12;
                            }
                            uVar12 = uVar8;
                        } while (uVar13 < uVar8);
                    }
                    iVar5 = (int)uVar13 - local_278;
                }
                fVar39 = (float)piVar26[1];
                local_288._0_4_ = 0.0;
                local_288._4_4_ = 0.0;
                uVar52 = 0;
                uVar53 = 0;
                lVar20 = *(longlong *)(local_258 + 0x38);
                fVar55 = 0.003921569;
                lVar22 = *(longlong *)(*(longlong *)(lVar20 + 0x40) + 0x78);
                lVar15 = *(longlong *)(*(longlong *)(local_258 + 0x40) + 0x1b8) +
                         (ulonglong)*(ushort *)(piVar26 + 4) * 2;
                local_294._0_1_ = *(byte *)(*(longlong *)(lVar20 + 0x40) + 0x6d);
                uVar19 = (iVar5 + -1) * 3 + *piVar26;
                local_218 = 0;
                local_294 = (float)((uint)local_294 & 0xffffff00 | (uint)(byte)local_294);
                local_208 = 3;
                lVar25 = local_258;
                uVar13 = uVar18;
                uVar12 = uVar18;
                fVar40 = local_1a8;
                fVar41 = fStack420;
                fVar42 = fStack416;
                fVar32 = fStack412;
                fVar34 = local_1c8[4];
                fVar30 = local_1c8[5];
                fVar31 = local_1c8[6];
                fVar43 = fStack428;
                fVar44 = local_1c8[0];
                fVar45 = local_1c8[1];
                fVar46 = local_1c8[2];
                fVar48 = local_1c8[3];
                fVar49 = local_198;
                fVar50 = fStack404;
                local_298 = fVar39;
                do {
                    if ((byte)local_294 == 1) {
                        uVar17 = (uint)*(ushort *)(lVar22 + (ulonglong)uVar19 * 2);
                    }
                    else {
                        uVar17 = *(uint *)(lVar22 + (ulonglong)uVar19 * 4);
                    }
                    uVar8 = (ulonglong)(uVar17 + (int)fVar39);
                    fVar29 = *(float *)(*(longlong *)(lVar20 + 0x150) * uVar8 + *(longlong *)(lVar20 + 0xf8));
                    local_144 = *(uint *)(*(longlong *)(lVar20 + 0x158) * uVar8 +
                                          *(longlong *)(lVar20 + 0x100));
                    uVar23 = (ulonglong)local_144;
                    if (*(int *)(lVar20 + 0x188) == 1) {
                        puVar9 = (undefined8 *)
                                (*(longlong *)(lVar20 + 0x130) * uVar8 + *(longlong *)(lVar20 + 0xd8));
                        uVar1 = *(undefined4 *)(puVar9 + 1);
                        _local_248 = CONCAT88(SUB128(CONCAT48(fVar54,CONCAT44(uVar1,uVar1)) >> 0x20,0),*puVar9);
                    }
                    else {
                        psVar14 = (short *)(*(longlong *)(lVar20 + 0x130) * uVar8 + *(longlong *)(lVar20 + 0xd8)
                        );
                        _local_248 = CONCAT412(fVar54 * 0.0009765625,
                                               CONCAT48((float)(int)psVar14[2] * 0.0009765625,
                                                        CONCAT44((float)(int)psVar14[1] * 0.0009765625,
                                                                 (float)(int)*psVar14 * 0.0009765625)));
                    }
                    local_148 = fVar29;
                    FUN_1407b08c0();
                    local_288 = (float *)CONCAT44(fStack564,local_238);
                    uStack640 = (float *)CONCAT44(fStack556,fStack560);
                    if (((float)uVar12 != fVar29) || ((int)uVar13 != (int)uVar23)) {
                        plVar4 = (longlong *)(lVar25 + 0x338);
                        uVar12 = (ulonglong)(uint)fVar29;
                        uVar13 = uVar23 & 0xffffffff;
                        pfVar6 = (float *)((ulonglong)*(ushort *)(lVar15 + (ulonglong)local_148._0_1_ * 2) *
                                           0x40 + *plVar4);
                        local_278 = (int)uVar23;
                        uVar17 = 1;
                        fStack396 = (float)(local_144 & 0xff) * fVar55;
                        fVar44 = *pfVar6 * fStack396;
                        fVar45 = pfVar6[1] * fStack396;
                        fVar46 = pfVar6[2] * fStack396;
                        fVar48 = pfVar6[3] * fStack396;
                        fVar34 = pfVar6[4] * fStack396;
                        fVar30 = pfVar6[5] * fStack396;
                        fVar31 = pfVar6[6] * fStack396;
                        fVar43 = pfVar6[7] * fStack396;
                        fVar40 = pfVar6[8] * fStack396;
                        fVar41 = pfVar6[9] * fStack396;
                        fVar42 = pfVar6[10] * fStack396;
                        fVar32 = pfVar6[0xb] * fStack396;
                        fVar49 = pfVar6[0xc] * fStack396;
                        fVar50 = pfVar6[0xd] * fStack396;
                        fStack400 = pfVar6[0xe] * fStack396;
                        fStack396 = pfVar6[0xf] * fStack396;
                        uVar8 = uVar18;
                        do {
                            bVar2 = *(byte *)((longlong)&local_278 + uVar8 + 1);
                            lVar25 = local_258;
                            local_298 = fVar29;
                            if (bVar2 == 0) break;
                            lVar10 = uVar8 + 1;
                            uVar17 = uVar17 + 1;
                            uVar8 = uVar8 + 1;
                            pfVar6 = (float *)((ulonglong)
                                               *(ushort *)
                                                       (lVar15 + (ulonglong)*(byte *)((longlong)&local_298 + lVar10) * 2)
                                               * 0x40 + *plVar4);
                            fVar27 = (float)(uint)bVar2 * fVar55;
                            fVar44 = *pfVar6 * fVar27 + fVar44;
                            fVar45 = pfVar6[1] * fVar27 + fVar45;
                            fVar46 = pfVar6[2] * fVar27 + fVar46;
                            fVar48 = pfVar6[3] * fVar27 + fVar48;
                            fVar34 = pfVar6[4] * fVar27 + fVar34;
                            fVar30 = pfVar6[5] * fVar27 + fVar30;
                            fVar31 = pfVar6[6] * fVar27 + fVar31;
                            fVar43 = pfVar6[7] * fVar27 + fVar43;
                            fVar40 = pfVar6[8] * fVar27 + fVar40;
                            fVar41 = pfVar6[9] * fVar27 + fVar41;
                            fVar42 = pfVar6[10] * fVar27 + fVar42;
                            fVar32 = pfVar6[0xb] * fVar27 + fVar32;
                            fVar49 = pfVar6[0xc] * fVar27 + fVar49;
                            fVar50 = pfVar6[0xd] * fVar27 + fVar50;
                            fStack400 = pfVar6[0xe] * fVar27 + fStack400;
                            fStack396 = pfVar6[0xf] * fVar27 + fStack396;
                        } while (uVar17 < 4);
                    }
                    lVar10 = local_218 + 0x10;
                    uVar19 = uVar19 + 1;
                    local_208 = local_208 + -1;
                    *(float *)((longlong)afStack280 + local_218) =
                            local_248._0_4_ * fVar44 + local_248._4_4_ * fVar34 + fStack576 * fVar40 + fVar49;
                    *(float *)((longlong)afStack280 + local_218 + 4) =
                            local_248._0_4_ * fVar45 + local_248._4_4_ * fVar30 + fStack576 * fVar41 + fVar50;
                    *(float *)((longlong)afStack280 + local_218 + 8) =
                            local_248._0_4_ * fVar46 + local_248._4_4_ * fVar31 + fStack576 * fVar42 + fStack400;
                    *(float *)((longlong)afStack280 + local_218 + 0xc) =
                            local_248._0_4_ * fVar48 + local_248._4_4_ * fVar43 + fStack576 * fVar32 + fStack396;
                    fVar35 = local_238 * fVar44 + fStack564 * fVar34 + fStack560 * fVar40;
                    fVar36 = local_238 * fVar45 + fStack564 * fVar30 + fStack560 * fVar41;
                    fVar37 = local_238 * fVar46 + fStack564 * fVar31 + fStack560 * fVar42;
                    fVar38 = local_238 * fVar48 + fStack564 * fVar43 + fStack560 * fVar32;
                    fVar29 = fVar36 * fVar36;
                    fVar27 = fVar35 * fVar35 + fVar29 + fVar37 * fVar37;
                    auVar28 = rsqrtss(CONCAT412(fVar29,CONCAT48(fVar29,CONCAT44(fVar29,fVar29))),
                                      CONCAT124(SUB1612(CONCAT412(fVar38 * fVar38,
                                                                  CONCAT48(fVar37 * fVar37,
                                                                           CONCAT44(fVar29,fVar35 * fVar35)))
                                                                >> 0x20,0),fVar27));
                    fVar29 = SUB164(auVar28,0);
                    fVar29 = (fVar51 - fVar27 * fVar29 * fVar29) * fVar47 * fVar29;
                    if (fVar29 <= (float)local_288) {
                        fVar29 = (float)local_288;
                    }
                    *(float *)((longlong)local_1c8 + local_218) = fVar29 * fVar35;
                    *(float *)((longlong)local_1c8 + local_218 + 4) = fVar29 * fVar36;
                    *(float *)((longlong)local_1c8 + local_218 + 8) = fVar29 * fVar37;
                    *(float *)((longlong)local_1c8 + local_218 + 0xc) = fVar29 * fVar38;
                    param_1 = local_128;
                    local_218 = lVar10;
                } while (local_208 != 0);
                (**(code **)(**(longlong **)(local_128 + 0x38) + 0x38))(SUB168(auVar28,0));
                fVar33 = fVar33 - extraout_XMM0_Da_24;
                local_128 = local_128 & 0xffffffff00000000 | (ulonglong)(uint)extraout_XMM0_Da_24;
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                puVar11 = &local_128;
                lVar15 = 3;
                local_128 = local_128 & 0xffffffff | (ulonglong)(uint)extraout_XMM0_Da_25 << 0x20;
                *local_1f8 = CONCAT412(uVar53,CONCAT48(uVar52,CONCAT44(local_288._4_4_,(float)local_288)));
                local_120 = fVar33 - extraout_XMM0_Da_25;
                do {
                    fVar47 = *(float *)puVar11;
                    fVar51 = *(float *)((longlong)afStack280 + uVar18 + 4);
                    fVar33 = *(float *)((longlong)afStack280 + uVar18 + 8);
                    fVar39 = *(float *)((longlong)afStack280 + uVar18 + 0xc);
                    fVar40 = *(float *)(*local_1f8 + 4);
                    fVar41 = *(float *)(*local_1f8 + 8);
                    fVar42 = *(float *)(*local_1f8 + 0xc);
                    puVar11 = (ulonglong *)((longlong)puVar11 + 4);
                    fVar32 = *(float *)((longlong)local_1c8 + uVar18);
                    fVar34 = *(float *)((longlong)local_1c8 + uVar18 + 4);
                    *(float *)*local_1f8 =
                            *(float *)*local_1f8 + *(float *)((longlong)afStack280 + uVar18) * fVar47;
                    *(float *)(*local_1f8 + 4) = fVar40 + fVar51 * fVar47;
                    *(float *)(*local_1f8 + 8) = fVar41 + fVar33 * fVar47;
                    *(float *)(*local_1f8 + 0xc) = fVar42 + fVar39 * fVar47;
                    local_288._0_4_ = fVar32 * fVar47 + (float)local_288;
                    local_288._4_4_ = fVar34 * fVar47 + local_288._4_4_;
                    lVar15 = lVar15 + -1;
                    uVar18 = uVar18 + 0x10;
                } while (lVar15 != 0);
                fVar51 = 3.0;
                param_4 = local_1f8;
            }
            else {
                if (uVar3 == 9) {
                    LAB_14032e25c:
                    lVar20 = *(longlong *)(param_1 + 0x28);
                }
                else {
                    if (uVar3 == 10) {
                        local_258 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                        if (local_258 == 0) goto LAB_14032e2e4;
                        goto LAB_14032e2ed;
                    }
                    if (uVar3 != 0xb) goto LAB_14032f0af;
                    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                    if (lVar20 == 0) goto LAB_14032e25c;
                }
                lVar22 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + 0x40);
                if ((*(byte *)(lVar15 + 10) & 4) == 0) {
                    if (*(int *)(lVar22 + 0x90) == 0) goto LAB_14032f0af;
                    uVar19 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
                            (*(longlong **)(param_1 + 0x38),0);
                    uVar18 = 1;
                    if (1 < (ulonglong)*(uint *)(lVar22 + 0x80)) {
                        uVar13 = (ulonglong)*(uint *)(lVar22 + 0x80);
                        do {
                            uVar12 = (uVar13 - uVar18 >> 1) + uVar18;
                            if (*(uint *)(*(longlong *)(lVar22 + 0xa0) + uVar12 * 4) <= uVar19) {
                                uVar18 = uVar12 + 1;
                                uVar12 = uVar13;
                            }
                            uVar13 = uVar12;
                        } while (uVar18 < uVar12);
                    }
                    lVar15 = *(longlong *)(lVar22 + 0xa0);
                }
                else {
                    if (*(int *)(param_1 + 0x3ec) == 0) goto LAB_14032f0af;
                    uVar19 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))
                            (*(longlong **)(param_1 + 0x38),0);
                    uVar18 = 1;
                    if (1 < (ulonglong)*(uint *)(lVar22 + 0x80)) {
                        uVar13 = (ulonglong)*(uint *)(lVar22 + 0x80);
                        do {
                            uVar12 = (uVar13 - uVar18 >> 1) + uVar18;
                            if (*(uint *)(*(longlong *)(param_1 + 0x3f0) + uVar12 * 4) <= uVar19) {
                                uVar18 = uVar12 + 1;
                                uVar12 = uVar13;
                            }
                            uVar13 = uVar12;
                        } while (uVar18 < uVar12);
                    }
                    lVar15 = *(longlong *)(param_1 + 0x3f0);
                }
                lVar22 = (uVar18 - 1) * 0x70 + *(longlong *)(lVar22 + 0x88);
                uVar18 = (ulonglong)((*(int *)(lVar22 + 4) - *(int *)(lVar15 + -4 + uVar18 * 4)) + uVar19);
                lVar15 = *(longlong *)(*(longlong *)(lVar20 + 0x40) + 0x1b8) +
                         (ulonglong)*(ushort *)(lVar22 + 0x10) * 2;
                lVar22 = *(longlong *)(lVar20 + 0x38);
                fVar47 = *(float *)(*(longlong *)(lVar22 + 0x150) * uVar18 + *(longlong *)(lVar22 + 0xf8));
                fVar33 = *(float *)(*(longlong *)(lVar22 + 0x158) * uVar18 + *(longlong *)(lVar22 + 0x100));
                local_198 = fVar47;
                fStack404 = fVar33;
                pfVar6 = (float *)FUN_14030a8a0(lVar22 + 0xd8,local_1e8,uVar18);
                FUN_1407b08c0();
                _local_248 = CONCAT412(uStack640._4_4_,CONCAT48((float)uStack640,local_288));
                if ((fVar47 != 0.0) ||
                    (fVar39 = local_1a8, fVar40 = fStack420, fVar41 = fStack416, fVar42 = fStack412,
                     fVar32 = local_1c8[4], fVar34 = local_1c8[5], fVar30 = local_1c8[6], fVar31 = fStack428,
                     fVar43 = local_1c8[0], fVar44 = local_1c8[1], fVar45 = local_1c8[2],
                     fVar46 = local_1c8[3], fVar48 = local_198, fVar49 = fStack404, fVar33 != 0.0)) {
                    local_294 = fVar47;
                    pfVar7 = (float *)((ulonglong)*(ushort *)(lVar15 + (ulonglong)local_198._0_1_ * 2) * 0x40
                                       + *(longlong *)(lVar20 + 0x338));
                    lVar22 = 0;
                    uVar19 = 1;
                    fStack396 = (float)((uint)fStack404 & 0xff) * 0.003921569;
                    fVar43 = *pfVar7 * fStack396;
                    fVar44 = pfVar7[1] * fStack396;
                    fVar45 = pfVar7[2] * fStack396;
                    fVar46 = pfVar7[3] * fStack396;
                    fVar32 = pfVar7[4] * fStack396;
                    fVar34 = pfVar7[5] * fStack396;
                    fVar30 = pfVar7[6] * fStack396;
                    fVar31 = pfVar7[7] * fStack396;
                    fVar39 = pfVar7[8] * fStack396;
                    fVar40 = pfVar7[9] * fStack396;
                    fVar41 = pfVar7[10] * fStack396;
                    fVar42 = pfVar7[0xb] * fStack396;
                    fVar48 = pfVar7[0xc] * fStack396;
                    fVar49 = pfVar7[0xd] * fStack396;
                    fStack400 = pfVar7[0xe] * fStack396;
                    fStack396 = pfVar7[0xf] * fStack396;
                    do {
                        bVar2 = *(byte *)((longlong)&local_298 + lVar22 + 1);
                        local_298 = fVar33;
                        if (bVar2 == 0) break;
                        lVar25 = lVar22 + 1;
                        uVar19 = uVar19 + 1;
                        lVar22 = lVar22 + 1;
                        pfVar7 = (float *)((ulonglong)
                                           *(ushort *)
                                                   (lVar15 + (ulonglong)*(byte *)((longlong)&local_294 + lVar25) * 2) *
                                           0x40 + *(longlong *)(lVar20 + 0x338));
                        fVar47 = (float)(uint)bVar2 * 0.003921569;
                        fVar43 = *pfVar7 * fVar47 + fVar43;
                        fVar44 = pfVar7[1] * fVar47 + fVar44;
                        fVar45 = pfVar7[2] * fVar47 + fVar45;
                        fVar46 = pfVar7[3] * fVar47 + fVar46;
                        fVar32 = pfVar7[4] * fVar47 + fVar32;
                        fVar34 = pfVar7[5] * fVar47 + fVar34;
                        fVar30 = pfVar7[6] * fVar47 + fVar30;
                        fVar31 = pfVar7[7] * fVar47 + fVar31;
                        fVar39 = pfVar7[8] * fVar47 + fVar39;
                        fVar40 = pfVar7[9] * fVar47 + fVar40;
                        fVar41 = pfVar7[10] * fVar47 + fVar41;
                        fVar42 = pfVar7[0xb] * fVar47 + fVar42;
                        fVar48 = pfVar7[0xc] * fVar47 + fVar48;
                        fVar49 = pfVar7[0xd] * fVar47 + fVar49;
                        fStack400 = pfVar7[0xe] * fVar47 + fStack400;
                        fStack396 = pfVar7[0xf] * fVar47 + fStack396;
                    } while (uVar19 < 4);
                }
                fVar47 = pfVar6[2];
                fVar33 = pfVar6[1];
                fVar50 = *pfVar6;
                fVar54 = 0.0;
                *(float *)*param_4 = fVar33 * fVar32 + fVar50 * fVar43 + fVar47 * fVar39 + fVar48;
                *(float *)(*param_4 + 4) = fVar33 * fVar34 + fVar50 * fVar44 + fVar47 * fVar40 + fVar49;
                *(float *)(*param_4 + 8) = fVar33 * fVar30 + fVar50 * fVar45 + fVar47 * fVar41 + fStack400;
                *(float *)(*param_4 + 0xc) = fVar33 * fVar31 + fVar50 * fVar46 + fVar47 * fVar42 + fStack396
                        ;
                local_288._0_4_ =
                        local_288._4_4_ * fVar32 + SUB84(local_288,0) * fVar43 + (float)uStack640 * fVar39;
                local_288._4_4_ =
                        local_288._4_4_ * fVar34 + SUB84(local_288,0) * fVar44 + (float)uStack640 * fVar40;
            }
            fVar47 = 0.5;
            param_5 = local_200;
            param_6 = local_220;
        }
        fVar33 = *(float *)*param_4;
        fVar39 = *(float *)(*param_4 + 4);
        fVar40 = *(float *)(*param_4 + 8);
        fVar41 = local_210[5];
        fVar42 = local_210[6];
        fVar32 = local_210[7];
        fVar34 = local_210[1];
        fVar30 = local_210[2];
        fVar31 = local_210[3];
        fVar43 = local_210[9];
        fVar44 = local_210[10];
        fVar45 = local_210[0xb];
        fVar46 = local_210[0xd];
        fVar48 = local_210[0xe];
        fVar49 = local_210[0xf];
        *(float *)*param_4 =
                fVar39 * local_210[4] + fVar33 * *local_210 + fVar40 * local_210[8] + local_210[0xc];
        *(float *)(*param_4 + 4) = fVar39 * fVar41 + fVar33 * fVar34 + fVar40 * fVar43 + fVar46;
        *(float *)(*param_4 + 8) = fVar39 * fVar42 + fVar33 * fVar30 + fVar40 * fVar44 + fVar48;
        *(float *)(*param_4 + 0xc) = fVar39 * fVar32 + fVar33 * fVar31 + fVar40 * fVar45 + fVar49;
        if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 10) & 2) != 0) {
            fVar33 = **(float **)(param_1 + 0x1d8);
            fVar39 = **(float **)(param_1 + 0x1b8);
            local_1d8 = CONCAT88(SUB168(CONCAT412(fVar54,CONCAT48(fVar33,CONCAT44(fVar33,fVar39))) >> 0x40
                    ,0),CONCAT44(**(float **)(param_1 + 0x1c8),fVar39));
            fVar40 = *(float *)*param_4;
            fVar41 = *(float *)(*param_4 + 4);
            fVar42 = *(float *)(*param_4 + 8);
            _local_1e8 = CONCAT412(fVar54,CONCAT48(**(undefined4 **)(param_1 + 0x1d0),
                                                   CONCAT44(**(undefined4 **)(param_1 + 0x1c0),
                                                            **(float **)(param_1 + 0x1b0)))) &
                         (undefined  [16])0xffffffffffffffff;
            fVar54 = fVar41 * local_228[4] + fVar40 * *local_228 + fVar42 * local_228[8] + local_228[0xc];
            fVar32 = fVar41 * local_228[5] + fVar40 * local_228[1] + fVar42 * local_228[9] +
                     local_228[0xd];
            fVar34 = fVar41 * local_228[6] + fVar40 * local_228[2] + fVar42 * local_228[10] +
                     local_228[0xe];
            local_288 = (float *)CONCAT44(fVar32,fVar54);
            uStack640 = (float *)CONCAT44(fVar41 * local_228[7] + fVar40 * local_228[3] +
                                          fVar42 * local_228[0xb] + local_228[0xf],fVar34);
            if (((((fVar54 < **(float **)(param_1 + 0x1b0)) || (fVar39 <= fVar54)) ||
                  (local_1e8._4_4_ = SUB164(_local_1e8 >> 0x20,0), fVar32 < local_1e8._4_4_)) ||
                 ((**(float **)(param_1 + 0x1c8) <= fVar32 ||
                   (fStack480 = SUB164(_local_1e8 >> 0x40,0), fVar34 < fStack480)))) || (fVar33 <= fVar34))
                goto LAB_14032f0af;
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 1) == 0) {
            local_288 = local_210;
            uStack640 = local_228;
            local_178 = local_210;
            local_170 = local_228;
            FUN_1401afb10(&local_178,local_1c8);
            fVar39 = local_288._4_4_ * local_1c8[4] + (float)local_288 * local_1c8[0] + local_1a8 * 0.0;
            fVar40 = local_288._4_4_ * local_1c8[5] + (float)local_288 * local_1c8[1] + fStack420 * 0.0;
            fVar41 = local_288._4_4_ * local_1c8[6] + (float)local_288 * local_1c8[2] + fStack416 * 0.0;
            fVar42 = local_288._4_4_ * fStack428 + (float)local_288 * local_1c8[3] + fStack412 * 0.0;
            fVar33 = fVar40 * fVar40;
            fVar54 = fVar39 * fVar39 + fVar33 + fVar41 * fVar41;
            auVar28 = rsqrtss(CONCAT412(fVar33,CONCAT48(fVar33,CONCAT44(fVar33,fVar33))),
                              CONCAT124(SUB1612(CONCAT412(fVar42 * fVar42,
                                                          CONCAT48(fVar41 * fVar41,
                                                                   CONCAT44(fVar33,fVar39 * fVar39))) >>
                                                                                                      0x20,0),fVar54));
            fVar33 = SUB164(auVar28,0);
            fVar33 = (fVar51 - fVar54 * fVar33 * fVar33) * fVar47 * fVar33;
            if (fVar33 <= 0.0) {
                fVar33 = 0.0;
            }
            local_2a8 = *(undefined4 *)(param_1 + 0x300);
            _local_268 = CONCAT412(fVar33 * fVar42,
                                   CONCAT48(fVar33 * fVar41,CONCAT44(fVar33 * fVar40,fVar33 * fVar39)));
            FUN_14032ca60(param_1,&local_238,param_1 + 0x270);
            local_2a8 = *(undefined4 *)(param_1 + 0x330);
            FUN_14032ca60(param_1,local_268,local_268);
            fVar47 = *(float *)(param_1 + 0x340);
            fVar51 = *(float *)(param_1 + 0x310);
            fVar34 = fVar47 * local_268._0_4_ + fVar51 * local_238;
            fVar30 = fVar47 * local_268._4_4_ + fVar51 * fStack564;
            fVar31 = fVar47 * fStack608 + fVar51 * fStack560;
            *param_5 = fVar34;
            param_5[1] = fVar30;
            param_5[2] = fVar31;
            param_5[3] = fVar47 * fStack604 + fVar51 * fStack556;
            fVar47 = param_6[5];
            fVar51 = param_6[6];
            fVar33 = param_6[7];
            fVar54 = param_6[1];
            fVar39 = param_6[2];
            fVar40 = param_6[3];
            fVar41 = param_6[9];
            fVar42 = param_6[10];
            fVar32 = param_6[0xb];
            *param_5 = fVar30 * param_6[4] + fVar34 * *param_6 + fVar31 * param_6[8];
            param_5[1] = fVar30 * fVar47 + fVar34 * fVar54 + fVar31 * fVar41;
            param_5[2] = fVar30 * fVar51 + fVar34 * fVar39 + fVar31 * fVar42;
            param_5[3] = fVar30 * fVar33 + fVar34 * fVar40 + fVar31 * fVar32;
            local_2a8 = *(undefined4 *)(param_1 + 0x300);
            FUN_14032ca60(param_1,&local_238,param_1 + 0x290);
            local_238 = local_238 + *param_5;
            fStack564 = fStack564 + param_5[1];
            fStack560 = fStack560 + param_5[2];
            fStack556 = fStack556 + param_5[3];
        }
        else {
            fVar39 = *(float *)(param_1 + 0x3c0) - *(float *)*param_4;
            fVar40 = *(float *)(param_1 + 0x3c4) - *(float *)(*param_4 + 4);
            fVar41 = *(float *)(param_1 + 0x3c8) - *(float *)(*param_4 + 8);
            fVar42 = *(float *)(param_1 + 0x3cc) - *(float *)(*param_4 + 0xc);
            fVar33 = fVar40 * fVar40;
            fVar54 = fVar39 * fVar39 + fVar33 + fVar41 * fVar41;
            auVar28 = rsqrtss(CONCAT412(fVar33,CONCAT48(fVar33,CONCAT44(fVar33,fVar33))),
                              CONCAT124(SUB1612(CONCAT412(fVar42 * fVar42,
                                                          CONCAT48(fVar41 * fVar41,
                                                                   CONCAT44(fVar33,fVar39 * fVar39))) >>
                                                                                                      0x20,0),fVar54));
            fVar33 = SUB164(auVar28,0);
            fVar33 = (fVar51 - fVar54 * fVar33 * fVar33) * fVar47 * fVar33;
            if (fVar33 <= 0.0) {
                fVar33 = 0.0;
            }
            fStack556 = *(float *)(param_1 + 0x310);
            local_238 = fStack556 * fVar33 * fVar39;
            fStack564 = fStack556 * fVar33 * fVar40;
            fStack560 = fStack556 * fVar33 * fVar41;
            fStack556 = fStack556 * fVar33 * fVar42;
        }
        *param_5 = local_238;
        param_5[1] = fStack564;
        param_5[2] = fStack560;
        param_5[3] = fStack556;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
        fVar47 = extraout_XMM0_Da_26;
        goto LAB_14032f099;
    }
    fVar47 = 0.5;
    fVar51 = 3.0;
    switch(uVar3) {
        case 0:
            *(undefined4 *)*param_4 = 0;
            *(undefined4 *)(*param_4 + 4) = 0;
            *(undefined4 *)(*param_4 + 8) = 0;
            *(undefined4 *)(*param_4 + 0xc) = 0;
            break;
        case 1:
            fVar33 = **(float **)(param_1 + 0x1b0);
            if ((*(byte *)(lVar15 + 10) & 1) == 0) {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                *(undefined8 *)(*param_4 + 4) = 0;
                *(undefined4 *)*param_4 = extraout_XMM0_Da;
            }
            else {
                fVar54 = *(float *)(param_1 + 0x3d4);
                *(undefined8 *)(*param_4 + 4) = 0;
                *(float *)*param_4 =
                        (fVar54 - fVar33 * 0.5) +
                        ((float)(ulonglong)param_2 * fVar33) / (float)(param_3 & 0xffffffff);
            }
            break;
        default:
            goto LAB_14032f0af;
        case 3:
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            *(undefined4 *)(*param_4 + 4) = 0;
            *(undefined4 *)*param_4 = extraout_XMM0_Da_00;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            *(undefined4 *)(*param_4 + 8) = extraout_XMM0_Da_01;
            _local_268 = *param_4;
            goto LAB_14032de1c;
        case 4:
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            *(undefined4 *)*param_4 = extraout_XMM0_Da_02;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            *(undefined4 *)(*param_4 + 4) = extraout_XMM0_Da_03;
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            *(undefined4 *)(*param_4 + 8) = extraout_XMM0_Da_04;
            _local_268 = *param_4;
            goto LAB_14032de1c;
        case 5:
            if ((*(byte *)(lVar15 + 10) & 1) == 0) {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                fVar33 = extraout_XMM0_Da_05;
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            }
            else {
                fVar33 = *(float *)(param_1 + 0x3d4);
            }
            FUN_1408fc950();
            *(undefined4 *)(*param_4 + 4) = 0;
            *(float *)*param_4 = extraout_XMM0_Da_06 * fVar33;
            FUN_1408fe3d0();
            *(float *)(*param_4 + 8) = extraout_XMM0_Da_07 * fVar33;
            break;
        case 6:
            fVar33 = 0.0;
            do {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                *(undefined4 *)*param_4 = extraout_XMM0_Da_08;
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                *(undefined4 *)(*param_4 + 4) = extraout_XMM0_Da_09;
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
                fVar54 = *(float *)*param_4;
                *(float *)(*param_4 + 8) = extraout_XMM0_Da_10;
                if ((fVar33 != fVar54) || (fVar33 != *(float *)(*param_4 + 4))) break;
            } while (extraout_XMM0_Da_10 == fVar33);
            fVar33 = *(float *)*param_4;
            fVar54 = *(float *)(*param_4 + 4);
            fVar39 = *(float *)(*param_4 + 8);
            fVar40 = *(float *)(*param_4 + 0xc);
            fVar41 = fVar54 * fVar54;
            fVar42 = fVar33 * fVar33 + fVar41 + fVar39 * fVar39;
            auVar28 = rsqrtss(CONCAT412(fVar41,CONCAT48(fVar41,CONCAT44(fVar41,fVar41))),
                              CONCAT124(SUB1612(CONCAT412(fVar40 * fVar40,
                                                          CONCAT48(fVar39 * fVar39,
                                                                   CONCAT44(fVar41,fVar33 * fVar33))) >>
                                                                                                      0x20,0),fVar42));
            fVar41 = SUB164(auVar28,0);
            fVar41 = (fVar51 - fVar42 * fVar41 * fVar41) * fVar47 * fVar41;
            if (fVar41 <= 0.0) {
                fVar41 = 0.0;
            }
            *param_4 = CONCAT412(fVar41 * fVar40,
                                 CONCAT48(fVar41 * fVar39,CONCAT44(fVar41 * fVar54,fVar41 * fVar33)));
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
            fVar33 = *(float *)(*param_4 + 4);
            fVar54 = *(float *)(*param_4 + 8);
            fVar39 = *(float *)(*param_4 + 0xc);
            *(float *)*param_4 = *(float *)*param_4 * extraout_XMM0_Da_11;
            *(float *)(*param_4 + 4) = fVar33 * extraout_XMM0_Da_11;
            *(float *)(*param_4 + 8) = fVar54 * extraout_XMM0_Da_11;
            *(float *)(*param_4 + 0xc) = fVar39 * extraout_XMM0_Da_11;
    }
    _local_268 = *param_4;
    LAB_14032de1c:
    if (**(char **)(param_1 + 0x1a0) == '\x02') {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
        *(undefined4 *)*param_4 = extraout_XMM0_Da_12;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
        *(undefined4 *)(*param_4 + 4) = extraout_XMM0_Da_13;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
        *(undefined4 *)(*param_4 + 8) = extraout_XMM0_Da_14;
    }
    fVar33 = *(float *)*param_4;
    fVar54 = *(float *)(*param_4 + 4);
    fVar39 = *(float *)(*param_4 + 8);
    fVar40 = *param_9 + fVar33 * *param_6 + fVar54 * param_6[4] + fVar39 * param_6[8] + param_6[0xc];
    fVar41 = param_9[1] +
             fVar33 * param_6[1] + fVar54 * param_6[5] + fVar39 * param_6[9] + param_6[0xd];
    fVar42 = param_9[2] +
             fVar33 * param_6[2] + fVar54 * param_6[6] + fVar39 * param_6[10] + param_6[0xe];
    fVar33 = param_9[3] +
             fVar33 * param_6[3] + fVar54 * param_6[7] + fVar39 * param_6[0xb] + param_6[0xf];
    *(float *)*param_4 = fVar40;
    *(float *)(*param_4 + 4) = fVar41;
    *(float *)(*param_4 + 8) = fVar42;
    *(float *)(*param_4 + 0xc) = fVar33;
    if ((*(byte *)(*(longlong *)(param_1 + 0x1a0) + 0xec8) & 1) == 0) {
        local_2a8 = *(undefined4 *)(param_1 + 0x300);
        FUN_14032ca60(param_1,&local_288,param_1 + 0x270);
        local_2a8 = *(undefined4 *)(param_1 + 0x330);
        FUN_14032ca60(param_1,local_268,local_268);
        fVar47 = *(float *)(param_1 + 0x340);
        fVar51 = *(float *)(param_1 + 0x310);
        fVar34 = fVar47 * local_268._0_4_ + fVar51 * (float)local_288;
        fVar30 = fVar47 * local_268._4_4_ + fVar51 * local_288._4_4_;
        fVar31 = fVar47 * fStack608 + fVar51 * (float)uStack640;
        *param_5 = fVar34;
        param_5[1] = fVar30;
        param_5[2] = fVar31;
        param_5[3] = fVar47 * fStack604 + fVar51 * uStack640._4_4_;
        fVar47 = param_6[1];
        fVar51 = param_6[2];
        fVar33 = param_6[3];
        fVar54 = param_6[5];
        fVar39 = param_6[6];
        fVar40 = param_6[7];
        fVar41 = param_6[9];
        fVar42 = param_6[10];
        fVar32 = param_6[0xb];
        *param_5 = fVar34 * *param_6 + fVar30 * param_6[4] + fVar31 * param_6[8];
        param_5[1] = fVar34 * fVar47 + fVar30 * fVar54 + fVar31 * fVar41;
        param_5[2] = fVar34 * fVar51 + fVar30 * fVar39 + fVar31 * fVar42;
        param_5[3] = fVar34 * fVar33 + fVar30 * fVar40 + fVar31 * fVar32;
        local_2a8 = *(undefined4 *)(param_1 + 0x300);
        FUN_14032ca60(param_1,&local_288,param_1 + 0x290);
        local_288._0_4_ = *param_5 + (float)local_288;
        local_288._4_4_ = param_5[1] + local_288._4_4_;
        uStack640._0_4_ = param_5[2] + (float)uStack640;
        uStack640._4_4_ = param_5[3] + uStack640._4_4_;
    }
    else {
        fVar40 = *(float *)(param_1 + 0x3c0) - fVar40;
        fVar41 = *(float *)(param_1 + 0x3c4) - fVar41;
        fVar42 = *(float *)(param_1 + 0x3c8) - fVar42;
        fVar33 = *(float *)(param_1 + 0x3cc) - fVar33;
        fVar54 = fVar41 * fVar41;
        fVar39 = fVar40 * fVar40 + fVar54 + fVar42 * fVar42;
        auVar28 = rsqrtss(CONCAT412(fVar54,CONCAT48(fVar54,CONCAT44(fVar54,fVar54))),
                          CONCAT124(SUB1612(CONCAT412(fVar33 * fVar33,
                                                      CONCAT48(fVar42 * fVar42,
                                                               CONCAT44(fVar54,fVar40 * fVar40))) >>
                                                                                                  0x20,0),fVar39));
        fVar54 = SUB164(auVar28,0);
        fVar54 = (fVar51 - fVar39 * fVar54 * fVar54) * fVar47 * fVar54;
        if (fVar54 <= 0.0) {
            fVar54 = 0.0;
        }
        uStack640._4_4_ = *(float *)(param_1 + 0x310);
        local_288._0_4_ = uStack640._4_4_ * fVar54 * fVar40;
        local_288._4_4_ = uStack640._4_4_ * fVar54 * fVar41;
        uStack640._0_4_ = uStack640._4_4_ * fVar54 * fVar42;
        uStack640._4_4_ = uStack640._4_4_ * fVar54 * fVar33;
    }
    *param_5 = (float)local_288;
    param_5[1] = local_288._4_4_;
    param_5[2] = (float)uStack640;
    param_5[3] = uStack640._4_4_;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))();
    fVar47 = extraout_XMM0_Da_15;
    LAB_14032f099:
    *param_5 = *param_5 * fVar47;
    param_5[1] = param_5[1] * fVar47;
    param_5[2] = param_5[2] * fVar47;
    param_5[3] = param_5[3] * fVar47;
    LAB_14032f0af:
    FUN_1407db4f0(local_e8 ^ (ulonglong)auStack712);
    return;
}



void FUN_14032f130(longlong param_1,int param_2)

{
    short sVar1;
    ushort uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    lVar3 = *(longlong *)(param_1 + 0x1a0);
    sVar1 = *(short *)(lVar3 + 8);
    if (sVar1 == 8) {
        LAB_14032f282:
        if (param_2 != 0) {
            return;
        }
        lVar6 = *(longlong *)(param_1 + 0x28);
        LAB_14032f28e:
        fVar14 = 0.0;
        fVar13 = 0.0;
        if ((*(byte *)(lVar3 + 10) & 4) != 0) {
            lVar3 = *(longlong *)(lVar6 + 0x40);
            lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x40);
            FUN_140052360();
            uVar10 = 0;
            if (*(int *)(lVar6 + 0x80) != 0) {
                lVar9 = 0;
                do {
                    lVar4 = *(longlong *)(lVar6 + 0x88);
                    *(float *)(*(longlong *)(param_1 + 0x400) + uVar10 * 4) = fVar13;
                    uVar5 = (uint)*(ushort *)(lVar9 + 0x1e + lVar4);
                    if (((uVar5 < *(uint *)(lVar3 + 0x200)) &&
                         (uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x208) + (ulonglong)uVar5 * 4), uVar2 != 0)
                        ) && ((uVar5 = (uint)*(ushort *)(lVar9 + 0x18 + lVar4),
                            uVar5 < *(uint *)(lVar3 + 0xf0) &&
                            ((*(byte *)((ulonglong)uVar5 * 0xb8 + *(longlong *)(lVar3 + 0xf8)) & 4) == 0))))
                    {
                        uVar8 = 0;
                        puVar7 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 0xc);
                        do {
                            if ((uint)uVar2 == *puVar7) {
                                fVar11 = (float)FUN_1401c9770(*(longlong *)(lVar6 + 0xb0) +
                                                              (ulonglong)
                                                              *(uint *)(*(longlong *)(lVar6 + 0xc0) + 4 + uVar10 * 4
                                                              ) * 2);
                                fVar12 = (float)FUN_1401c9770();
                                fVar13 = fVar13 + (fVar11 - fVar12);
                                break;
                            }
                            uVar8 = uVar8 + 1;
                            puVar7 = puVar7 + 1;
                        } while (uVar8 < 4);
                    }
                    uVar10 = uVar10 + 1;
                    lVar9 = lVar9 + 0x70;
                } while (uVar10 < *(uint *)(lVar6 + 0x80));
            }
            *(float *)(*(longlong *)(param_1 + 0x400) + (ulonglong)*(uint *)(lVar6 + 0x80) * 4) = fVar13;
            if (fVar13 != fVar14) {
                return;
            }
        }
        *(undefined8 *)(param_1 + 0x408) = 0;
    }
    else {
        if (sVar1 == 9) {
            LAB_14032f181:
            if (param_2 != 0) {
                return;
            }
            lVar6 = *(longlong *)(param_1 + 0x28);
        }
        else {
            if (sVar1 == 10) {
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x4c0);
                if (lVar6 == 0) goto LAB_14032f282;
                goto LAB_14032f28e;
            }
            if (sVar1 != 0xb) {
                return;
            }
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x4c0);
            if (lVar6 == 0) goto LAB_14032f181;
        }
        *(undefined4 *)(param_1 + 0x3ec) = 0;
        if ((*(byte *)(lVar3 + 10) & 4) != 0) {
            lVar3 = *(longlong *)(lVar6 + 0x40);
            lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x40);
            FUN_140052360(param_1 + 0x3f0);
            uVar10 = 0;
            if (*(int *)(lVar6 + 0x80) != 0) {
                lVar9 = 0;
                do {
                    lVar4 = *(longlong *)(lVar6 + 0x88);
                    *(undefined4 *)(*(longlong *)(param_1 + 0x3f0) + uVar10 * 4) =
                            *(undefined4 *)(param_1 + 0x3ec);
                    uVar5 = (uint)*(ushort *)(lVar9 + 0x1e + lVar4);
                    if ((((uVar5 < *(uint *)(lVar3 + 0x200)) &&
                          (uVar2 = *(ushort *)(*(longlong *)(lVar3 + 0x208) + (ulonglong)uVar5 * 4), uVar2 != 0
                          )) && (uVar5 = (uint)*(ushort *)(lVar9 + 0x18 + lVar4),
                            uVar5 < *(uint *)(lVar3 + 0xf0))) &&
                        ((*(byte *)((ulonglong)uVar5 * 0xb8 + *(longlong *)(lVar3 + 0xf8)) & 4) == 0)) {
                        uVar8 = 0;
                        puVar7 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 0xc);
                        do {
                            if ((uint)uVar2 == *puVar7) {
                                *(int *)(param_1 + 0x3ec) =
                                        *(int *)(param_1 + 0x3ec) + *(int *)(lVar9 + 0xc + lVar4);
                                break;
                            }
                            uVar8 = uVar8 + 1;
                            puVar7 = puVar7 + 1;
                        } while (uVar8 < 4);
                    }
                    uVar10 = uVar10 + 1;
                    lVar9 = lVar9 + 0x70;
                } while (uVar10 < *(uint *)(lVar6 + 0x80));
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x3f0) + (ulonglong)*(uint *)(lVar6 + 0x80) * 4) =
                    *(undefined4 *)(param_1 + 0x3ec);
        }
        if (*(int *)(param_1 + 0x3ec) == 0) {
            *(undefined8 *)(param_1 + 0x3f8) = 0;
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14032f450(undefined8 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    *param_1 = &PTR_FUN_140b645c0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    *(undefined (*) [16])(param_1 + 8) = ZEXT816(0);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    uVar3 = uRam0000000140c798cc;
    uVar2 = uRam0000000140c798c8;
    uVar1 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
    *(undefined4 *)(param_1 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
    uVar3 = uRam0000000140c798dc;
    uVar2 = uRam0000000140c798d8;
    uVar1 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c798d0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0x1d) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar3;
    uVar3 = uRam0000000140c798cc;
    uVar2 = uRam0000000140c798c8;
    uVar1 = uRam0000000140c798c4;
    *(undefined4 *)(param_1 + 0x1e) = _DAT_140c798c0;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar1;
    *(undefined4 *)(param_1 + 0x1f) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar3;
    uVar3 = uRam0000000140c798dc;
    uVar2 = uRam0000000140c798d8;
    uVar1 = uRam0000000140c798d4;
    *(undefined4 *)(param_1 + 0x20) = _DAT_140c798d0;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
    *(undefined4 *)(param_1 + 0x21) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
    *(undefined (*) [16])(param_1 + 0x22) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x24) = ZEXT816(0);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x26] = &PTR_FUN_140b62ac0;
    param_1[0x27] = 3;
    *(undefined4 *)(param_1 + 0x28) = 0;
    param_1[0x29] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    *(undefined2 *)(param_1 + 0x32) = 0;
    return param_1;
}



undefined8 FUN_14032f550(undefined8 param_1,ulonglong param_2)

{
    FUN_14032f590();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_14032f590(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_140b645c0;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[7] + 8))();
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[4],0);
    lVar2 = param_1[0x30];
    while (lVar2 != 0) {
        lVar2 = param_1[0x30];
        if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar2 = param_1[0x30];
    }
    plVar1 = param_1 + 0x31;
    lVar2 = *plVar1;
    while (lVar2 != 0) {
        lVar2 = *plVar1;
        if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        lVar2 = *plVar1;
    }
    if (param_1[0x30] != 0) {
        FUN_1401a4a00(param_1 + 0x30);
    }
    param_1[0x26] = &PTR_FUN_140b62ac0;
    if ((undefined8 *)param_1[0x2a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x2a] = param_1[0x2b];
    }
    if (param_1[0x2b] != 0) {
        *(undefined8 *)(param_1[0x2b] + 0x20) = param_1[0x2a];
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    if (param_1[0xd] != 0) {
        FUN_140317c90();
    }
    if (param_1[0xb] != 0) {
        FUN_140317c90();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14032f6f0(longlong *param_1,longlong param_2,ushort *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    int local_res8;

    pplVar1 = (longlong **)(param_1 + 7);
    param_1[1] = (longlong)param_3;
    if (pplVar1 != (longlong **)0x0) {
        lVar2 = FUN_14018b280(0x18);
        plVar3 = (longlong *)0x0;
        if (lVar2 != 0) {
            plVar3 = (longlong *)FUN_1401ae310(lVar2);
        }
        *pplVar1 = plVar3;
        iVar4 = *(int *)(param_1[1] + 0x2c);
        if (iVar4 == 0) {
            QueryPerformanceCounter((LARGE_INTEGER *)&local_res8);
            plVar3 = *pplVar1;
            iVar4 = local_res8 - _DAT_140c87988;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar4);
        param_1[5] = param_2;
        lVar2 = *(longlong *)((ulonglong)*param_3 * 0x160 + *(longlong *)(param_2 + 0x348));
        *(undefined2 *)(param_1 + 0x32) = 0;
        param_1[6] = lVar2;
        lVar2 = param_1[0x30];
        while (lVar2 != 0) {
            lVar2 = param_1[0x30];
            if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
            }
            if (*(longlong *)(lVar2 + 0x10) != 0) {
                *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            }
            *(undefined8 *)(lVar2 + 8) = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            lVar2 = param_1[0x30];
        }
        lVar2 = param_1[0x31];
        while (lVar2 != 0) {
            lVar2 = param_1[0x31];
            if (*(undefined8 **)(lVar2 + 8) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar2 + 8) = *(undefined8 *)(lVar2 + 0x10);
            }
            if (*(longlong *)(lVar2 + 0x10) != 0) {
                *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 8);
            }
            *(undefined8 *)(lVar2 + 8) = 0;
            *(undefined8 *)(lVar2 + 0x10) = 0;
            lVar2 = param_1[0x31];
        }
        (**(code **)(*param_1 + 0x78))(param_1,0);
        return 0;
    }
    return 0x80004005;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14032f8b0(undefined8 param_1,float *param_2,int param_3,int param_4,float param_5)

{
    ulonglong uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 uVar9;
    uint uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined local_e8 [4];
    undefined auStack228 [12];
    undefined local_d8 [4];
    undefined auStack212 [12];
    undefined local_c8 [16];
    undefined local_b8 [4];
    undefined auStack180 [172];

    uVar10 = 0x80000000;
    local_e8 = fRam0000000140c78394 * _DAT_140c78420 + _DAT_140c78390 * _DAT_140c78410 +
               _DAT_140c78430 * 0.0 + fRam0000000140c7839c * -0.5;
    auStack228._0_4_ =
            fRam0000000140c78394 * fRam0000000140c78424 + _DAT_140c78390 * fRam0000000140c78414 +
            fRam0000000140c78434 * 0.0 + fRam0000000140c7839c * -0.5;
    auStack228._8_4_ =
            fRam0000000140c78394 * fRam0000000140c7842c + _DAT_140c78390 * fRam0000000140c7841c +
            fRam0000000140c7843c * 0.0 + fRam0000000140c7839c * 1.0;
    local_d8 = fRam0000000140c783a4 * _DAT_140c78420 + _DAT_140c783a0 * _DAT_140c78410 +
               _DAT_140c78430 * 0.0 + fRam0000000140c783ac * -0.5;
    auStack212._0_4_ =
            fRam0000000140c783a4 * fRam0000000140c78424 + _DAT_140c783a0 * fRam0000000140c78414 +
            fRam0000000140c78434 * 0.0 + fRam0000000140c783ac * -0.5;
    auStack212._8_4_ =
            fRam0000000140c783a4 * fRam0000000140c7842c + _DAT_140c783a0 * fRam0000000140c7841c +
            fRam0000000140c7843c * 0.0 + fRam0000000140c783ac * 1.0;
    _local_e8 = CONCAT412(auStack228._8_4_,
                          CONCAT48(fRam0000000140c78394 * fRam0000000140c78428 +
                                   _DAT_140c78390 * fRam0000000140c78418 + fRam0000000140c78438 * 0.0
                                   + fRam0000000140c7839c * 0.0,CONCAT44(auStack228._0_4_,local_e8)));
    _local_d8 = CONCAT412(auStack212._8_4_,
                          CONCAT48(fRam0000000140c783a4 * fRam0000000140c78428 +
                                   _DAT_140c783a0 * fRam0000000140c78418 + fRam0000000140c78438 * 0.0
                                   + fRam0000000140c783ac * 0.0,CONCAT44(auStack212._0_4_,local_d8)));
    local_b8 = fRam0000000140c783c4 * _DAT_140c78420 + _DAT_140c783c0 * _DAT_140c78410 +
               _DAT_140c78430 * 0.0 + fRam0000000140c783cc * -0.5;
    auStack180._0_4_ =
            fRam0000000140c783c4 * fRam0000000140c78424 + _DAT_140c783c0 * fRam0000000140c78414 +
            fRam0000000140c78434 * 0.0 + fRam0000000140c783cc * -0.5;
    auStack180._8_4_ =
            fRam0000000140c783c4 * fRam0000000140c7842c + _DAT_140c783c0 * fRam0000000140c7841c +
            fRam0000000140c7843c * 0.0 + fRam0000000140c783cc * 1.0;
    _local_b8 = CONCAT412(auStack180._8_4_,
                          CONCAT48(fRam0000000140c783c4 * fRam0000000140c78428 +
                                   _DAT_140c783c0 * fRam0000000140c78418 + fRam0000000140c78438 * 0.0
                                   + fRam0000000140c783cc * 0.0,CONCAT44(auStack180._0_4_,local_b8)));
    uVar1 = CONCAT44(fRam0000000140c783b4 * fRam0000000140c78428 +
                     _DAT_140c783b0 * fRam0000000140c78418 + fRam0000000140c78438 * 0.0 +
                     fRam0000000140c783bc * 0.0,
                     fRam0000000140c783b4 * fRam0000000140c78424 +
                     _DAT_140c783b0 * fRam0000000140c78414 + fRam0000000140c78434 * 0.0 +
                     fRam0000000140c783bc * -0.5);
    local_c8._0_12_ = ZEXT812(uVar1) << 0x20;
    if (param_3 != 0) {
        auStack228 = SUB1612(_local_e8 >> 0x20,0);
        _local_e8 = CONCAT124(auStack228,local_e8) ^ (undefined  [16])0x80000000;
        auStack212 = SUB1612(_local_d8 >> 0x20,0);
        _local_d8 = CONCAT124(auStack212,local_d8) ^ (undefined  [16])0x80000000;
        local_c8._0_12_ =
                (CONCAT48(fRam0000000140c783b4 * fRam0000000140c7842c +
                          _DAT_140c783b0 * fRam0000000140c7841c + fRam0000000140c7843c * 0.0 +
                          fRam0000000140c783bc * 1.0,uVar1) &
                 SUB1612((undefined  [16])0xffffffffffffffff,0)) << 0x20 ^
                SUB1612((undefined  [16])0x80000000,0);
        auStack180._0_12_ = SUB1612(_local_b8 >> 0x20,0);
        _local_b8 = CONCAT124(auStack180._0_12_,local_b8) ^ (undefined  [16])0x80000000;
    }
    fVar11 = local_e8;
    fVar13 = auStack228._8_4_;
    fVar14 = local_d8;
    fVar15 = auStack212._8_4_;
    if (param_4 != 0) {
        _local_e8 = _local_e8 ^ (undefined  [16])0x8000000000000000;
        _local_d8 = _local_d8 ^ (undefined  [16])0x8000000000000000;
        local_c8._0_12_ = local_c8._0_12_ ^ SUB1612((undefined  [16])0x8000000000000000,0);
        _local_b8 = _local_b8 ^ (undefined  [16])0x8000000000000000;
        fVar11 = local_e8;
        fVar13 = auStack228._8_4_;
        fVar14 = local_d8;
        fVar15 = auStack212._8_4_;
    }
    uVar9 = 0;
    fVar16 = _DAT_140c78410;
    fVar17 = fRam0000000140c78414;
    if (param_5 != 0.0) {
        fVar2 = (float)FUN_1408fe3d0(0);
        fVar3 = (float)FUN_1408fc950(uVar9);
        fVar4 = (float)FUN_1408fe3d0(param_5);
        fVar5 = (float)FUN_1408fc950(param_5);
        _local_e8 = CONCAT124(_local_e8 >> 0x20,fVar2 * fVar2 * fVar4 + fVar5 * fVar3) &
                    (undefined  [16])0xffffffffffffffff;
        fVar7 = fVar4 * fVar3;
        fVar6 = fVar5 * fVar3;
        _local_d8 = CONCAT124(_local_d8 >> 0x20,fVar2 * fVar2 * fVar5 - fVar4 * fVar3) &
                    (undefined  [16])0xffffffffffffffff;
        fVar12 = auStack228._0_4_ * auStack212._8_4_;
        local_c8 = CONCAT124(local_c8._0_12_ >> 0x20,fVar2 * fVar3) &
                   (undefined  [16])0xffffffffffffffff;
        fVar2 = (float)((uint)fVar2 ^ uVar10);
        fVar3 = SUB164(local_c8,0);
        fVar4 = fVar11 * fVar7;
        fVar5 = fVar11 * auStack228._8_4_;
        fVar11 = auStack228._0_4_ * local_d8 + fVar11 * local_e8 + fVar3 * 0.0 + fVar13 * _DAT_140c78440
                ;
        auStack228._0_4_ =
                auStack228._0_4_ * fVar6 + fVar4 + fVar2 * 0.0 + fVar13 * fRam0000000140c78444;
        fVar13 = fVar12 + fVar5 + local_c8._12_4_ * 0.0 + fVar13 * fRam0000000140c7844c;
        fVar12 = auStack212._0_4_ * auStack212._8_4_;
        fVar4 = fVar14 * fVar7;
        fVar5 = fVar14 * auStack228._8_4_;
        fVar14 = auStack212._0_4_ * local_d8 + fVar14 * local_e8 + fVar3 * 0.0 + fVar15 * _DAT_140c78440
                ;
        auStack212._0_4_ =
                auStack212._0_4_ * fVar6 + fVar4 + fVar2 * 0.0 + fVar15 * fRam0000000140c78444;
        fVar15 = fVar12 + fVar5 + local_c8._12_4_ * 0.0 + fVar15 * fRam0000000140c7844c;
        auStack212._8_4_ = auStack180._0_4_ * auStack212._8_4_;
        fVar7 = local_b8 * fVar7;
        auStack228._8_4_ = local_b8 * auStack228._8_4_;
        local_b8 = auStack180._0_4_ * local_d8 + local_b8 * local_e8 + fVar3 * 0.0 +
                   auStack180._8_4_ * _DAT_140c78440;
        auStack180._0_4_ =
                auStack180._0_4_ * fVar6 + fVar7 + fVar2 * 0.0 + auStack180._8_4_ * fRam0000000140c78444;
        auStack180._8_4_ =
                auStack212._8_4_ + auStack228._8_4_ + local_c8._12_4_ * 0.0 +
                auStack180._8_4_ * fRam0000000140c7844c;
    }
    fVar8 = auStack228._0_4_ * _DAT_140c78420;
    auStack228._0_4_ = auStack228._0_4_ * fRam0000000140c78424;
    fVar3 = _DAT_140c78430 * 0.0;
    fVar4 = fRam0000000140c78434 * 0.0;
    fVar2 = _DAT_140c78430 * 0.0;
    fVar5 = fRam0000000140c78434 * 0.0;
    fVar12 = auStack212._0_4_ * _DAT_140c78420;
    auStack212._0_4_ = auStack212._0_4_ * fRam0000000140c78424;
    fVar7 = auStack180._0_4_ * fRam0000000140c78424;
    fVar6 = fRam0000000140c78434 * 0.0;
    param_2[2] = auStack180._0_4_ * _DAT_140c78420 + local_b8 * fVar16 + _DAT_140c78430 * 0.0 +
                 auStack180._8_4_ * 0.5;
    *param_2 = fVar8 + fVar11 * fVar16 + fVar3 + fVar13 * 0.5;
    param_2[1] = fVar12 + fVar14 * fVar16 + fVar2 + fVar15 * 0.5;
    param_2[6] = fVar7 + local_b8 * fVar17 + fVar6 + auStack180._8_4_ * 0.5;
    param_2[4] = auStack228._0_4_ + fVar11 * fVar17 + fVar4 + fVar13 * 0.5;
    param_2[5] = auStack212._0_4_ + fVar14 * fVar17 + fVar5 + fVar15 * 0.5;
    return;
}



void FUN_14032fe20(longlong param_1,float *param_2,undefined8 param_3,undefined4 *param_4)

{
    undefined8 *puVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;

    fVar2 = *(float *)(param_1 + 0x40);
    fVar3 = *(float *)(param_1 + 0x44);
    *(undefined (*) [16])(param_1 + 0x70) =
            CONCAT412(fVar3 * param_2[7] + fVar2 * param_2[3] + param_2[0xb] * 0.0,
                      CONCAT48(fVar3 * param_2[6] + fVar2 * param_2[2] + param_2[10] * 0.0,
                               CONCAT44(fVar3 * param_2[5] + fVar2 * param_2[1] + param_2[9] * 0.0,
                                        fVar3 * param_2[4] + fVar2 * *param_2 + param_2[8] * 0.0)));
    uVar6 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    *(undefined4 *)(param_1 + 0x80) = *param_4;
    *(undefined4 *)(param_1 + 0x84) = uVar6;
    *(undefined4 *)(param_1 + 0x88) = uVar7;
    *(undefined4 *)(param_1 + 0x8c) = uVar8;
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(param_1 + 0x90) = param_4[4];
    *(undefined4 *)(param_1 + 0x94) = uVar6;
    *(undefined4 *)(param_1 + 0x98) = uVar7;
    *(undefined4 *)(param_1 + 0x9c) = uVar8;
    uVar6 = param_4[9];
    uVar7 = param_4[10];
    uVar8 = param_4[0xb];
    *(undefined4 *)(param_1 + 0xa0) = param_4[8];
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    *(undefined4 *)(param_1 + 0xa8) = uVar7;
    *(undefined4 *)(param_1 + 0xac) = uVar8;
    uVar6 = param_4[0xd];
    uVar7 = param_4[0xe];
    uVar8 = param_4[0xf];
    *(undefined4 *)(param_1 + 0xb0) = param_4[0xc];
    *(undefined4 *)(param_1 + 0xb4) = uVar6;
    *(undefined4 *)(param_1 + 0xb8) = uVar7;
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xb0);
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x28) + 0xb4);
    *(undefined (*) [16])(param_1 + 0xc0) =
            CONCAT412(fVar3 * *(float *)(param_1 + 0x9c) + fVar2 * *(float *)(param_1 + 0x8c) +
                      *(float *)(param_1 + 0xac) * 0.0 + *(float *)(param_1 + 0xbc),
                      CONCAT48(fVar3 * *(float *)(param_1 + 0x98) + fVar2 * *(float *)(param_1 + 0x88) +
                               *(float *)(param_1 + 0xa8) * 0.0 + *(float *)(param_1 + 0xb8),
                               CONCAT44(fVar3 * *(float *)(param_1 + 0x94) +
                                        fVar2 * *(float *)(param_1 + 0x84) +
                                        *(float *)(param_1 + 0xa4) * 0.0 + *(float *)(param_1 + 0xb4),
                                        fVar3 * *(float *)(param_1 + 0x90) +
                                        fVar2 * *(float *)(param_1 + 0x80) +
                                        *(float *)(param_1 + 0xa0) * 0.0 + *(float *)(param_1 + 0xb0))));
    fVar2 = param_2[0xc];
    fVar3 = param_2[0xd];
    fVar4 = param_2[0xe];
    fVar5 = param_2[0xf];
    *(undefined (*) [16])(param_1 + 0x120) =
            CONCAT412(fVar5 - *(float *)(param_1 + 0x11c),
                      CONCAT48(fVar4 - *(float *)(param_1 + 0x118),
                               CONCAT44(fVar3 - *(float *)(param_1 + 0x114),
                                        fVar2 - *(float *)(param_1 + 0x110))));
    *(float *)(param_1 + 0x110) = fVar2;
    *(float *)(param_1 + 0x114) = fVar3;
    *(float *)(param_1 + 0x118) = fVar4;
    *(float *)(param_1 + 0x11c) = fVar5;
    for (puVar1 = *(undefined8 **)(param_1 + 0x180); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)puVar1[2]) {
        (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x30));
    }
    return;
}



uint FUN_14032ff20(longlong *param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (param_1[4] == 0) {
        uVar3 = param_1[1];
        lVar2 = FUN_14018db00(*param_1,uVar3 + 1,8);
        *(undefined8 *)(lVar2 + uVar3 * 8) = param_2;
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] << 3);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = uVar3 + 1;
    }
    else {
        uVar3 = (ulonglong)*(ushort *)(param_1[3] + -2 + param_1[4] * 2);
        *(undefined8 *)(*param_1 + uVar3 * 8) = param_2;
        FUN_140334370(param_1 + 3,param_1[4] + -1);
    }
    if ((uint)uVar3 < 0xffff) {
        *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
        return (uint)*(ushort *)(param_1 + 2) << 0x10 | (uint)uVar3 & 0xffff;
    }
    return 0xffffffff;
}



undefined8 * FUN_1403300b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined *puVar2;

    *param_1 = &PTR_FUN_140b647b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = param_3;
    *(undefined2 *)(param_1 + 7) = 0;
    param_1[8] = 0x100000;
    param_1[9] = 0x100000;
    lVar1 = FUN_14018b280(0x100000,0);
    *(undefined4 *)(param_1 + 0xd) = 1;
    param_1[10] = lVar1;
    param_1[0xc] = lVar1;
    param_1[0xb] = param_1[9] + lVar1;
    param_1[0xe] = 0;
    param_1[0xf] = param_2;
    FUN_1400522f0(param_1 + 0x10);
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    *(undefined2 *)(param_1 + 0x17) = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    puVar2 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1c] = 0;
    param_1[0x1b] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x1b] + 8) = 0;
    *(undefined8 *)(param_1[0x1b] + 0x10) = param_1[0x1b];
    *(undefined8 *)(param_1[0x1b] + 0x18) = param_1[0x1b];
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    FUN_140333850();
    return param_1;
}



undefined8 FUN_1403301d0(undefined8 param_1,ulonglong param_2)

{
    FUN_140330210();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140330210(undefined8 *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    undefined8 *puVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;

    *param_1 = &PTR_FUN_140b647b0;
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    uVar6 = uVar7;
    if (*(DWORD *)(param_1 + 1) == DVar5) {
        param_1[2] = param_1[2] + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = param_1 + 2;
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD *)(param_1 + 1) = DVar5;
                goto LAB_140330280;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(param_1 + 1,DVar5);
    }
    LAB_140330280:
    if (*(short *)(param_1 + 0x16) != 0) {
        do {
            if (((uVar7 & 0xffff) < (ulonglong)param_1[0x16]) &&
                (puVar3 = *(undefined8 **)(param_1[0x15] + (uVar7 & 0xffff) * 8),
                        puVar3 != (undefined8 *)0x0)) {
                (**(code **)*puVar3)(puVar3,1);
            }
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
        } while (uVar8 < *(ushort *)(param_1 + 0x16));
    }
    if ((ulonglong)param_1[2] < 2) {
        *(undefined4 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        if (param_1[3] != 0) {
            if (param_1[4] == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = param_1 + 4;
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent((HANDLE)param_1[4]);
        }
    }
    else {
        param_1[2] = param_1[2] + -1;
    }
    if (param_1[0x1e] != 0) {
        FUN_1401a4a00();
    }
    FUN_140008410(param_1 + 0x1a);
    FUN_14018b900(param_1[0x1b],0);
    lVar4 = param_1[0x18];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    lVar4 = param_1[0x15];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    FUN_140334210(param_1 + 0x10);
    FUN_14018b900(param_1[0x12],0);
    param_1[0x12] = 0;
    if (*(int *)(param_1 + 0xd) != 0) {
        FUN_14018b900(param_1[10],0);
    }
    if (param_1[4] != 0) {
        CloseHandle((HANDLE)param_1[4]);
    }
    *param_1 = &PTR_FUN_140b64670;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1403303e0(undefined8 *param_1,longlong **param_2,undefined8 param_3)

{
    longlong *plVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong local_res8;

    puVar5 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1[1] = 0;
    *param_1 = &PTR_FUN_140b64668;
    plVar1 = *param_2;
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)();
    }
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = &PTR_LAB_140b64918;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = param_1[3] + 0x140;
    puVar3 = (undefined8 *)FUN_14018b280(0x18);
    puVar4 = puVar5;
    if (puVar3 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)param_1[10];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = uVar2;
        puVar4 = puVar3;
    }
    param_1[0xb] = puVar4;
    param_1[5] = &PTR_LAB_140b64918;
    lVar6 = param_1[3];
    param_1[0xc] = &PTR_FUN_140b64640;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = (undefined8 *)(lVar6 + 0x140);
    puVar4 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar4 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(lVar6 + 0x140);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = uVar2;
        puVar5 = puVar4;
    }
    param_1[0x10] = puVar5;
    param_1[0x11] = 0;
    param_1[0xc] = &PTR_FUN_140b64640;
    param_1[0x12] = param_3;
    *(undefined4 *)(param_1 + 0x13) = 500;
    param_1[0x14] = 0;
    param_1[0x33] = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x13;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = DAT_140c1e52c;
    QueryPerformanceCounter(&local_res8);
    lVar6 = local_res8 - _DAT_140c87988;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x35] = lVar6;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0xffffffff;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    QueryPerformanceCounter(&local_res8);
    local_res8 = local_res8 - _DAT_140c87988;
    param_1[0x37] = 0;
    param_1[0x4b] = 0;
    param_1[0x39] = 0;
    param_1[0x4d] = 0;
    param_1[0x3b] = 0;
    param_1[0x36] = local_res8;
    param_1[0x4a] = local_res8;
    param_1[0x38] = local_res8;
    param_1[0x4c] = local_res8;
    param_1[0x3a] = local_res8;
    param_1[0x4e] = local_res8;
    param_1[0x3c] = local_res8;
    param_1[0x50] = local_res8;
    param_1[0x3e] = local_res8;
    param_1[0x52] = local_res8;
    param_1[0x40] = local_res8;
    param_1[0x54] = local_res8;
    param_1[0x42] = local_res8;
    param_1[0x56] = local_res8;
    param_1[0x44] = local_res8;
    param_1[0x58] = local_res8;
    param_1[0x46] = local_res8;
    param_1[0x5a] = local_res8;
    param_1[0x48] = local_res8;
    param_1[0x5c] = local_res8;
    param_1[0x4f] = 0;
    param_1[0x3d] = 0;
    param_1[0x51] = 0;
    param_1[0x3f] = 0;
    param_1[0x53] = 0;
    param_1[0x41] = 0;
    param_1[0x55] = 0;
    param_1[0x43] = 0;
    param_1[0x57] = 0;
    param_1[0x45] = 0;
    param_1[0x59] = 0;
    param_1[0x47] = 0;
    param_1[0x5b] = 0;
    param_1[0x49] = 0;
    param_1[0x5d] = 0;
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return param_1;
}



undefined8 FUN_140330700(undefined8 param_1,ulonglong param_2)

{
    FUN_140330740();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140330740(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b64668;
    if ((undefined8 *)param_1[0x61] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x61] = param_1[0x62];
    }
    if (param_1[0x62] != 0) {
        *(undefined8 *)(param_1[0x62] + 0x308) = param_1[0x61];
    }
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[0xc] = &PTR_FUN_140b64640;
    if (param_1[0x10] != 0) {
        FUN_14018b900(param_1[0x10],0);
        param_1[0x10] = 0;
    }
    param_1[5] = &PTR_LAB_140b64918;
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb],0);
        param_1[0xb] = 0;
    }
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 8))();
    }
    return;
}



int FUN_140330800(longlong param_1)

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
            if (*(longlong *)(param_1 + 0x18) != 0) {
                FUN_14018b900(*(longlong *)(param_1 + 0x18),0);
            }
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



undefined8 FUN_140330870(undefined8 param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    longlong lVar2;

    if (param_2 == (undefined8 *)0x0) {
        return 0x80004003;
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x40);
    if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 1;
        *puVar1 = &PTR_LAB_140b648f0;
        puVar1[2] = 0x1fffe;
        puVar1[3] = 0x1fffe;
        lVar2 = FUN_14018b280(0x1fffe,0);
        puVar1[4] = lVar2;
        puVar1[6] = lVar2;
        *(undefined4 *)(puVar1 + 7) = 1;
        puVar1[5] = puVar1[3] + lVar2;
        *param_2 = puVar1;
        return 0;
    }
    *param_2 = 0;
    return 0;
}



ulonglong * FUN_140330910(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x98))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x90) + (uVar3 % *(ulonglong *)(param_1 + 0x88)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return (ulonglong *)0x0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0xa0))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    return puVar1 + 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403309a0(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4,
                   ulonglong param_5,ulonglong param_6,undefined4 param_7)

{
    longlong lVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    undefined4 uVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong *puVar10;
    char *pcVar11;
    longlong *plVar12;
    undefined *puVar13;
    longlong lVar14;
    uint local_res10 [2];
    undefined **local_138;
    longlong local_130;
    LPVOID local_128;
    undefined **local_118;
    longlong local_110;
    LPVOID local_108;
    undefined local_f8 [8];
    longlong local_f0;
    uint local_d8;
    ulonglong local_d0;
    ulonglong local_c8;
    ulonglong local_c0;
    ulonglong local_b8;
    undefined local_b0 [8];
    longlong local_a8;
    undefined8 local_a0;
    undefined4 local_90;
    uint local_88;
    undefined4 local_84;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined8 local_50;
    undefined local_48 [8];
    longlong local_40;

    local_c0 = param_5;
    local_b8 = param_6;
    local_res10[0] = param_2;
    local_d8 = param_2;
    local_d0 = param_3;
    local_c8 = param_4;
    if (DAT_140c65828 == 0) {
        FUN_14018ee90(local_b0);
    }
    else {
        FUN_140335f10();
    }
    uVar4 = param_7;
    lVar8 = 0;
    plVar12 = (longlong *)(param_1 + 0x80);
    local_50 = 0;
    local_90 = param_7;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0xffffffffffffffff;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_88 = param_2;
    uVar6 = (**(code **)(param_1 + 0x98))(local_res10);
    puVar10 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x90) + (uVar6 % *(ulonglong *)(param_1 + 0x88)) * 8);
    do {
        if (puVar10 == (ulonglong *)0x0) {
            LAB_140330d78:
            if (*plVar12 == *(longlong *)(param_1 + 0x88)) {
                FUN_1400290d0(plVar12);
            }
            uVar6 = (**(code **)(param_1 + 0x98))(local_res10);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x90) + (uVar6 % *(ulonglong *)(param_1 + 0x88)) * 8);
            puVar10 = (ulonglong *)FUN_14018b280(0xa8,0);
            if (puVar10 == (ulonglong *)0x0) {
                puVar10 = (ulonglong *)0x0;
            }
            else {
                puVar3 = *ppuVar2;
                *puVar10 = uVar6;
                puVar10[1] = (ulonglong)puVar3;
                *(uint *)(puVar10 + 2) = local_res10[0];
                *(uint *)(puVar10 + 3) = local_d8;
                puVar10[4] = local_d0;
                puVar10[5] = local_c8;
                puVar10[6] = local_c0;
                puVar10[7] = local_b8;
                puVar10[9] = 0;
                puVar10[10] = 0;
                puVar10[0xb] = 0;
                FUN_14001b240(puVar10 + 8,local_a8,local_a0);
                *(undefined4 *)(puVar10 + 0xc) = uVar4;
                *(uint *)(puVar10 + 0xd) = param_2;
                puVar10[0x14] = 0;
                *(undefined4 *)((longlong)puVar10 + 0x6c) = 0;
                puVar10[0xe] = 0;
                puVar10[0xf] = 0xffffffffffffffff;
                puVar10[0x10] = 0;
                puVar10[0x11] = 0;
                puVar10[0x12] = 0;
                *(undefined4 *)(puVar10 + 0x13) = 0;
                FUN_140334740(puVar10 + 0xd,&local_88);
            }
            *ppuVar2 = puVar10;
            *plVar12 = *plVar12 + 1;
            if (local_a8 != 0) {
                FUN_14018b900(local_a8,0);
            }
            return;
        }
        if ((uVar6 == *puVar10) && (iVar5 = (**(code **)(param_1 + 0xa0))(), iVar5 != 0)) {
            if (puVar10 != (ulonglong *)&DAT_ffffffffffffffe8) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(&local_118,"Message Id #%d");
                    lVar8 = local_110;
                }
                else if (local_res10[0] < 3) {
                    FUN_14018ee90(&local_118,"Base Message Id #%d");
                    lVar8 = local_110;
                }
                else if ((local_res10[0] < _DAT_140c1e564) &&
                         (lVar9 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(local_res10[0] - 3) * 0x10),
                                 lVar9 != 0)) {
                    lVar7 = -1;
                    do {
                        pcVar11 = (char *)(lVar9 + 1 + lVar7);
                        lVar7 = lVar7 + 1;
                    } while (*pcVar11 != '\0');
                    lVar14 = (lVar7 + lVar9) - lVar9;
                    lVar1 = lVar14 + 1;
                    if (lVar1 != -1) {
                        lVar8 = FUN_14018b280(lVar1,0);
                    }
                    FUN_1407db590(lVar8,lVar9,lVar14);
                    puVar13 = (undefined *)(((lVar7 + lVar9) - lVar9) + lVar8);
                    if (puVar13 != (undefined *)0x0) {
                        *puVar13 = 0;
                    }
                }
                else {
                    FUN_14018ee90(&local_118,"Invalid or foreign Message Id #%d");
                    lVar8 = local_110;
                }
                lVar7 = 0;
                lVar9 = FUN_14018ee90(local_f8,"Duplicate message registration id: %s",lVar8);
                param_5 = *(longlong *)(lVar9 + 8) + 0x12fa640;
                FUN_1401a2e50(0xb);
                if (local_f0 != 0) {
                    FUN_14018b900(local_f0,0);
                }
                if (lVar8 != 0) {
                    FUN_14018b900(lVar8,0);
                }
                local_130 = 0;
                local_138 = &PTR_LAB_140b5e648;
                local_128 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_138);
                local_118 = local_138;
                local_110 = local_130;
                local_108 = local_128;
                if (DAT_140c65828 == 0) {
                    pcVar11 = "Message Id #%d";
                    LAB_140330ce6:
                    FUN_14018ee90(local_f8,pcVar11);
                }
                else {
                    if (local_res10[0] < 3) {
                        pcVar11 = "Base Message Id #%d";
                        goto LAB_140330ce6;
                    }
                    if ((_DAT_140c1e564 <= local_res10[0]) ||
                        (lVar8 = *(longlong *)(DAT_140c65828 + 8 + (ulonglong)(local_res10[0] - 3) * 0x10),
                                lVar8 == 0)) {
                        pcVar11 = "Invalid or foreign Message Id #%d";
                        goto LAB_140330ce6;
                    }
                    lVar9 = -1;
                    do {
                        pcVar11 = (char *)(lVar8 + 1 + lVar9);
                        lVar9 = lVar9 + 1;
                    } while (*pcVar11 != '\0');
                    lVar14 = (lVar9 + lVar8) - lVar8;
                    lVar1 = lVar14 + 1;
                    if (lVar1 != -1) {
                        lVar7 = FUN_14018b280(lVar1,0);
                    }
                    FUN_1407db590(lVar7,lVar8,lVar14);
                    puVar13 = (undefined *)(((lVar9 + lVar8) - lVar8) + lVar7);
                    local_f0 = lVar7;
                    if (puVar13 != (undefined *)0x0) {
                        *puVar13 = 0;
                    }
                }
                lVar8 = FUN_14018ee90(local_48,"Duplicate message registration id: %s",local_f0);
                param_5 = *(longlong *)(lVar8 + 8) + 0x12fa640;
                iVar5 = FUN_140196f30(&DAT_140c8a61c,0xb,&param_5,&local_118);
                if (local_40 != 0) {
                    FUN_14018b900(local_40,0);
                }
                if (local_f0 != 0) {
                    FUN_14018b900(local_f0,0);
                }
                local_138 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_128);
                if (iVar5 != 0) {
                    DebugBreak();
                }
            }
            goto LAB_140330d78;
        }
        puVar10 = (ulonglong *)puVar10[1];
    } while( true );
}



void FUN_140330e90(longlong param_1,undefined8 *param_2,int param_3)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong local_res8;

    puVar5 = (undefined8 *)FUN_14018b280(0x30);
    puVar6 = (undefined8 *)0x0;
    puVar7 = puVar6;
    if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_LAB_140b64648;
        *(undefined4 *)(puVar5 + 1) = 1;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar7 = puVar5;
    }
    FUN_140334160(puVar7 + 2,*(undefined8 *)(param_1 + 0x80));
    iVar4 = FUN_14018cdf0();
    if (*(longlong *)(param_1 + 0x88) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)puVar6 * 8);
            while (lVar3 = lVar1, lVar3 != 0) {
                lVar1 = *(longlong *)(lVar3 + 8);
                local_res8 = lVar3 + 0x68;
                if ((*(longlong *)(lVar3 + 0x80) != 0) &&
                    ((param_3 == 0 || ((uint)(iVar4 - *(int *)(lVar3 + 0x6c)) < 0x2711)))) {
                    plVar2 = (longlong *)puVar7[4];
                    if (plVar2 == (longlong *)puVar7[5]) {
                        FUN_14010a1c0(puVar7 + 2,plVar2,&local_res8);
                    }
                    else {
                        if (plVar2 != (longlong *)0x0) {
                            *plVar2 = local_res8;
                        }
                        puVar7[4] = puVar7[4] + 8;
                    }
                }
            }
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        } while (puVar6 < *(undefined8 **)(param_1 + 0x88));
    }
    *param_2 = puVar7;
    return;
}



undefined4 FUN_140331050(longlong param_1,longlong **param_2,undefined8 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *local_res8;
    longlong *local_res10;
    longlong *local_28;
    undefined4 local_20;

    plVar1 = *param_2;
    local_res8 = plVar1;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)*plVar1)(plVar1);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),&local_res8);
    if (iVar4 < 0) {
        if (*param_2 != (longlong *)0x0) {
            (**(code **)(**param_2 + 8))();
        }
        return 0xffffffff;
    }
    lVar6 = FUN_14018b280(800,0);
    if (lVar6 == 0) {
        lVar6 = 0;
    }
    else {
        local_res8 = *param_2;
        if (local_res8 != (longlong *)0x0) {
            (**(code **)*local_res8)();
        }
        lVar6 = FUN_1403303e0(lVar6,&local_res8,param_3);
    }
    uVar5 = FUN_14032ff20(param_1 + 0xa8,lVar6);
    *(undefined4 *)(lVar6 + 0x10) = uVar5;
    plVar2 = *(longlong **)(param_1 + 0xd8);
    plVar7 = plVar2;
    plVar3 = (longlong *)plVar2[1];
    while (plVar3 != (longlong *)0x0) {
        if ((longlong *)plVar3[4] < plVar1) {
            plVar3 = (longlong *)plVar3[3];
        }
        else {
            plVar7 = plVar3;
            plVar3 = (longlong *)plVar3[2];
        }
    }
    if ((plVar7 == plVar2) || (plVar1 < (longlong *)plVar7[4])) {
        local_20 = 0;
        local_res8 = plVar7;
        local_28 = plVar1;
        FUN_1400edd00(param_1 + 0xd0,&local_res10,&local_res8,&local_28);
        plVar7 = local_res10;
    }
    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar6 + 0x10);
    uVar5 = *(undefined4 *)(lVar6 + 0x10);
    if (*param_2 != (longlong *)0x0) {
        (**(code **)(**param_2 + 8))();
    }
    return uVar5;
}



longlong * FUN_140331370(longlong param_1,longlong *param_2,ulonglong param_3)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD *)(param_1 + 8) == DVar5) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0x10);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD *)(param_1 + 8) = DVar5;
                goto LAB_1403313db;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60();
    }
    LAB_1403313db:
    if (((param_3 & 0xffff) < *(ulonglong *)(param_1 + 0xb0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + (param_3 & 0xffff) * 8), lVar3 != 0)) {
        puVar4 = *(undefined8 **)(lVar3 + 0x18);
        *param_2 = (longlong)puVar4;
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)();
        }
    }
    else {
        *param_2 = 0;
    }
    if (*(ulonglong *)(param_1 + 0x10) < 2) {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
            if (*(longlong *)(param_1 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(param_1 + 0x20);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(param_1 + 0x20));
        }
    }
    else {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return param_2;
}



void FUN_140331550(longlong *param_1,ushort param_2)

{
    longlong lVar1;
    undefined local_res10 [24];

    if ((((ulonglong)param_2 < (ulonglong)param_1[0x16]) &&
         (lVar1 = *(longlong *)(param_1[0x15] + (ulonglong)param_2 * 8), lVar1 != 0)) &&
        (*(int *)(lVar1 + 8) == 0)) {
        *(undefined4 *)(lVar1 + 8) = 1;
        (**(code **)(*param_1 + 0xf0))(param_1,param_2,2,local_res10);
    }
    return;
}



int FUN_1403315a0(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
    int iVar1;

    if (((param_2 & 0xffff) < (ulonglong)param_1[0x16]) &&
        (*(longlong *)(param_1[0x15] + (param_2 & 0xffff) * 8) != 0)) {
        iVar1 = (**(code **)(*(longlong *)param_1[0xf] + 8))
                ((longlong *)param_1[0xf],param_1,param_2 & 0xffffffff,param_3);
        if (iVar1 < 0) {
            (**(code **)(*param_1 + 0x28))(param_1,param_2 & 0xffffffff);
            return iVar1;
        }
    }
    return 0;
}



undefined4
FUN_140331620(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong param_4,uint *param_5
)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    undefined local_b8 [8];
    longlong local_b0;
    undefined **local_98;
    undefined4 local_90;
    ulonglong *local_88;
    uint *local_80;
    undefined8 local_78;
    undefined8 local_70;
    longlong local_68;
    ulonglong local_60;
    ulonglong local_58;
    uint *local_50;
    longlong local_48;
    longlong local_40;
    int local_38;

    if (param_5 == (uint *)0x0) {
        return 0xe;
    }
    *(undefined4 *)((longlong)param_1 + 0x74) = 1;
    if (((param_4 == 0) || (param_2 == (longlong *)0x0)) || (param_3 == (undefined4 *)0x0)) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        return 0xc;
    }
    uVar7 = (ulonglong)*param_5;
    if (uVar7 < 6) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        return 5;
    }
    local_48 = uVar7 + (longlong)param_5;
    local_50 = param_5;
    local_80 = param_5;
    local_88 = &local_60;
    local_98 = &PTR_LAB_140b64918;
    uVar6 = 0;
    local_38 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = uVar7;
    local_58 = uVar7;
    local_40 = local_48;
    iVar2 = FUN_140336c60(&local_98,&param_5,0x20);
    if ((iVar2 < 0) || (iVar2 = FUN_140336c60(&local_98,&param_5,0x10), puVar1 = param_5, iVar2 < 0))
    {
        uVar6 = 0xc;
        goto LAB_140331940;
    }
    *param_3 = (int)param_5;
    lVar3 = (**(code **)(*param_1 + 0x130))(param_1,(ulonglong)param_5 & 0xffffffff);
    if (lVar3 == 0) {
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_b8,"Message Id #%d",(ulonglong)puVar1 & 0xffffffff);
            puVar4 = local_b8;
        }
        else {
            puVar4 = (undefined *)FUN_140335f10(local_b8,(ulonglong)puVar1 & 0xffffffff);
        }
        param_5 = (uint *)0x141debb58;
        FUN_1401a2e50(0xb,0,&param_5,(ulonglong)puVar1 & 0xffffffff,*(undefined8 *)(puVar4 + 8));
        if (local_b0 != 0) {
            FUN_14018b900(local_b0,0);
        }
    }
    else {
        FUN_140334a70(lVar3 + 0x50,uVar7,2);
        *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(param_4 + 0x20);
        if (*(ulonglong *)(param_4 + 0x18) <= *(ulonglong *)(lVar3 + 8) &&
            *(ulonglong *)(lVar3 + 8) != *(ulonglong *)(param_4 + 0x18)) {
            param_5 = (uint *)0x141debc20;
            FUN_1401a2e50(0xb,0,&param_5);
            FUN_14018b900(param_4,0);
            uVar6 = 4;
            goto LAB_140331940;
        }
        lVar5 = FUN_1403374e0(param_4 + 0x10);
        if (lVar5 == 0) {
            uVar6 = 6;
            goto LAB_140331940;
        }
        *param_2 = lVar5;
        *(undefined4 *)(param_1 + 0xe) = 0;
        if (*(code **)(lVar3 + 0x20) == (code *)0x0) {
            if (DAT_140c65828 == 0) {
                FUN_14018ee90(local_b8,"Message Id #%d",(ulonglong)puVar1 & 0xffffffff);
                puVar4 = local_b8;
            }
            else {
                puVar4 = (undefined *)FUN_140335f10(local_b8,(ulonglong)puVar1 & 0xffffffff);
            }
            param_5 = (uint *)0x141debbb0;
            uVar6 = 0xb;
            FUN_1401a3130(0xb,0,&param_5,(ulonglong)puVar1 & 0xffffffff,*(undefined8 *)(puVar4 + 8));
            if (local_b0 != 0) {
                FUN_14018b900(local_b0,0);
            }
            goto LAB_140331940;
        }
        iVar2 = (**(code **)(lVar3 + 0x20))(&local_98,param_4 + 0x10,lVar5);
        if (-1 < iVar2) goto LAB_140331940;
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_b8,"Message Id #%d",(ulonglong)puVar1 & 0xffffffff);
            puVar4 = local_b8;
        }
        else {
            puVar4 = (undefined *)FUN_140335f10(local_b8,(ulonglong)puVar1 & 0xffffffff);
        }
        param_5 = (uint *)0x141debc88;
        FUN_1401a2e50(0xb,0,&param_5,(ulonglong)puVar1 & 0xffffffff,*(undefined8 *)(puVar4 + 8));
        if (local_b0 != 0) {
            FUN_14018b900(local_b0,0);
            uVar6 = 8;
            goto LAB_140331940;
        }
    }
    uVar6 = 8;
    LAB_140331940:
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    local_98 = &PTR_LAB_140b64918;
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
        local_68 = 0;
    }
    if (local_38 != 0) {
        FUN_14018b900(local_50,0);
    }
    return uVar6;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140331990(longlong *param_1,longlong param_2,longlong param_3)

{
    ulonglong *puVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined *puVar10;
    byte *pbVar11;
    uint uVar12;
    ulonglong local_res18;
    undefined8 local_res20;
    ulonglong in_stack_ffffffffffffff48;
    undefined4 uVar13;
    ulonglong in_stack_ffffffffffffff50;
    uint uVar14;
    ulonglong in_stack_ffffffffffffff58;
    undefined4 uVar15;
    uint uVar16;
    undefined8 in_stack_ffffffffffffff60;
    undefined4 uVar17;
    undefined8 in_stack_ffffffffffffff68;
    undefined4 uVar18;
    ulonglong local_88;
    ulonglong local_80;
    undefined local_78 [8];
    longlong local_70;
    undefined local_58 [8];
    longlong local_50;

    uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    local_res18 = local_res18 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_3 + 8);
    if (*(longlong *)(param_3 + 0x10) == 0) {
        LAB_140331a31:
        iVar5 = FUN_140336d60(param_3,&local_res20,0x20);
        if (iVar5 < 0) {
            return 0xc;
        }
        uVar12 = (uint)local_res20;
    }
    else {
        puVar1 = *(ulonglong **)(param_3 + 0x18);
        lVar8 = *(longlong *)(param_3 + 0x20);
        if ((ulonglong)
                    ((*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) * 8 + (longlong)puVar1 * -8) - lVar8)
            < 0x40) goto LAB_140331a31;
        uVar12 = (uint)(*puVar1 >> ((byte)lVar8 & 0x3f));
        if (0x40 < (lVar8 + 0x27U & 0xfffffffffffffff8)) {
            uVar12 = uVar12 | (uint)*(byte *)(puVar1 + 1) << (0x40 - (byte)lVar8 & 0x3f);
        }
        *(ulonglong *)(param_3 + 0x20) = (ulonglong)((uint)lVar8 & 7);
        lVar8 = (lVar8 + 0x20U >> 3) + (longlong)puVar1;
        *(longlong *)(param_3 + 0x18) = lVar8;
        *(uint *)(param_3 + 8) = ((int)lVar8 - (int)puVar1) + *(uint *)(param_3 + 8);
    }
    if (*(longlong *)(param_3 + 0x10) == 0) {
        LAB_140331ac3:
        iVar5 = FUN_140336d60(param_3,&local_res20,0x10);
        uVar9 = local_res20;
    }
    else {
        lVar8 = *(longlong *)(param_3 + 0x18);
        if ((ulonglong)
                    ((*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) * 8 + lVar8 * -8) -
                     *(longlong *)(param_3 + 0x20)) < 0x40) goto LAB_140331ac3;
        uVar9 = FUN_1400a71c0(param_3 + 0x18,(longlong *)(param_3 + 0x20),0x10);
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (*(int *)(param_3 + 0x18) - (int)lVar8);
        iVar5 = 0;
    }
    if (iVar5 < 0) {
        return 0xc;
    }
    if (*(int *)(param_2 + 0x20) == 1) {
        uVar9 = (ulonglong)((uint)uVar9 | 0x10000);
    }
    iVar5 = (int)uVar9;
    lVar8 = (**(code **)(*param_1 + 0x130))(param_1,uVar9 & 0xffffffff);
    uVar13 = (undefined4)(in_stack_ffffffffffffff48 >> 0x20);
    uVar15 = (undefined4)(in_stack_ffffffffffffff58 >> 0x20);
    if (lVar8 == 0) {
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_58,"Message Id #%d");
            puVar10 = local_58;
        }
        else {
            puVar10 = (undefined *)FUN_140335f10(local_58,*(undefined4 *)(param_2 + 0x318));
        }
        uVar2 = *(undefined8 *)(puVar10 + 8);
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_78,"Message Id #%d",uVar9 & 0xffffffff);
            puVar10 = local_78;
        }
        else {
            puVar10 = (undefined *)FUN_140335f10(local_78,uVar9 & 0xffffffff);
        }
        lVar8 = *(longlong *)(param_2 + 0x18);
        uVar3 = *(undefined8 *)(puVar10 + 8);
        if (*(char *)(lVar8 + 200) == '\0') {
            FUN_140334d90();
        }
        local_res20 = 0x141debc30;
        FUN_1401a2e50(0xb,0,&local_res20,lVar8 + 200,CONCAT44(uVar13,*(undefined4 *)(param_2 + 0x10)),
                      uVar3,CONCAT44(uVar15,uVar12),CONCAT44(uVar17,*(undefined4 *)(param_2 + 0x318)),
                      uVar2);
        lVar8 = local_50;
        if (local_70 != 0) {
            FUN_14018b900(local_70,0);
            lVar8 = local_50;
        }
    }
    else {
        uVar6 = FUN_140335ec0();
        uVar17 = (undefined4)(in_stack_ffffffffffffff48 >> 0x20);
        uVar14 = (uint)(in_stack_ffffffffffffff50 >> 0x20);
        uVar16 = (uint)(in_stack_ffffffffffffff58 >> 0x20);
        local_res20 = CONCAT44(local_res20._4_4_,uVar6);
        local_80 = (ulonglong)((float)(ulonglong)uVar6 * 2.0);
        if (uVar12 <= uVar6) {
            if ((uint)(longlong)((float)(ulonglong)uVar6 * 0.9) < uVar12) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
                    puVar10 = local_58;
                }
                else {
                    puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
                }
                lVar4 = *(longlong *)(param_2 + 0x18);
                local_88 = *(ulonglong *)(puVar10 + 8);
                in_stack_ffffffffffffff58 = local_88;
                if (*(char *)(lVar4 + 200) == '\0') {
                    FUN_140334d90();
                    in_stack_ffffffffffffff58 = local_88;
                }
                local_88 = 0x141debcc0;
                in_stack_ffffffffffffff50 = local_res20 & 0xffffffff | (ulonglong)uVar14 << 0x20;
                in_stack_ffffffffffffff48 = CONCAT44(uVar17,uVar12);
                FUN_1401a2e50(0xb,1,&local_88,lVar4 + 200,in_stack_ffffffffffffff48,
                              in_stack_ffffffffffffff50,in_stack_ffffffffffffff58);
                if (local_50 != 0) {
                    FUN_14018b900(local_50,0);
                }
            }
            *(int *)(param_2 + 0x318) = iVar5;
            FUN_140334a70(lVar8 + 0x50,uVar12,2);
            param_1[0xc] = param_1[10];
            param_1[8] = local_80 & 0xffffffff;
            pbVar11 = (byte *)FUN_1403374e0(param_1 + 8,*(undefined8 *)(lVar8 + 8));
            if (pbVar11 == (byte *)0x0) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
                    puVar10 = local_58;
                }
                else {
                    puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
                }
                local_res20 = 0x141debfb0;
                FUN_1401a3130(0xb,0,&local_res20,uVar9 & 0xffffffff,*(undefined8 *)(puVar10 + 8),
                              *(undefined8 *)(lVar8 + 8));
                if (local_50 != 0) {
                    FUN_14018b900(local_50,0);
                }
                iVar5 = *(int *)(param_3 + 8);
                if (*(longlong *)(param_3 + 0x20) != 0) {
                    iVar5 = iVar5 + 1;
                }
                uVar6 = iVar5 - (int)local_res18;
                if ((uVar6 != 0) && (uVar6 < uVar12)) {
                    FUN_1403370c0(param_3,uVar12 - uVar6);
                }
                return 4;
            }
            if (*(code **)(lVar8 + 0x20) == (code *)0x0) {
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
                    puVar10 = local_58;
                }
                else {
                    puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
                }
                local_res20 = 0x141debf40;
                FUN_1401a3130(0xb,0,&local_res20,uVar9 & 0xffffffff,*(undefined8 *)(puVar10 + 8));
                if (local_50 != 0) {
                    FUN_14018b900(local_50,0);
                }
                iVar5 = *(int *)(param_3 + 8);
                if (*(longlong *)(param_3 + 0x20) != 0) {
                    iVar5 = iVar5 + 1;
                }
                uVar6 = iVar5 - (int)local_res18;
                if ((uVar6 != 0) && (uVar6 < uVar12)) {
                    FUN_1403370c0(param_3,uVar12 - uVar6);
                }
                return 0xb;
            }
            iVar7 = (**(code **)(lVar8 + 0x20))(param_3,param_1 + 8,pbVar11);
            if (iVar7 < 0) {
                iVar5 = *(int *)(param_3 + 8);
                if (*(longlong *)(param_3 + 0x20) != 0) {
                    iVar5 = iVar5 + 1;
                }
                uVar6 = iVar5 - (int)local_res18;
                if ((uVar6 != 0) && (uVar6 < uVar12)) {
                    FUN_1403370c0(param_3,uVar12 - uVar6);
                }
                if (DAT_140c65828 == 0) {
                    FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
                    puVar10 = local_58;
                }
                else {
                    puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
                }
                lVar8 = *(longlong *)(param_2 + 0x18);
                uVar2 = *(undefined8 *)(puVar10 + 8);
                if (*(char *)(lVar8 + 200) == '\0') {
                    FUN_140334d90();
                }
                local_res18 = 0x141dec040;
                FUN_1401a2e50(0xb,0,&local_res18,lVar8 + 200,uVar2,
                              in_stack_ffffffffffffff50 & 0xffffffff00000000 | (ulonglong)uVar6,
                              in_stack_ffffffffffffff58 & 0xffffffff00000000 | (ulonglong)uVar12);
                if (local_50 == 0) {
                    return 8;
                }
                FUN_14018b900(local_50,0);
                return 8;
            }
            if (iVar5 == 0) {
                local_res18 = local_res18 & 0xffffffffffffff00 | (ulonglong)*pbVar11;
                (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(param_2 + 0x10),1,&local_res18);
            }
            else if (iVar5 == 1) {
                FUN_140333790(param_1,*(undefined4 *)(param_2 + 0x10),pbVar11);
            }
            else if (iVar5 != 2) {
                lVar8 = *(longlong *)param_1[0xf];
                if (*(int *)(param_2 + 0x20) == 0) {
                    iVar5 = (**(code **)(lVar8 + 0x10))();
                    if (iVar5 < 0) {
                        if (DAT_140c65828 == 0) {
                            FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
                            puVar10 = local_58;
                        }
                        else {
                            puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
                        }
                        lVar8 = *(longlong *)(param_2 + 0x18);
                        uVar2 = *(undefined8 *)(puVar10 + 8);
                        if (*(char *)(lVar8 + 200) == '\0') {
                            FUN_140334d90();
                        }
                        local_res18 = 0x141dec018;
                        FUN_1401a2e50(0xb,0,&local_res18,lVar8 + 200,uVar2);
                        LAB_14033212d:
                        if (local_50 != 0) {
                            FUN_14018b900(local_50,0);
                        }
                        return 0xe;
                    }
                }
                else {
                    iVar5 = (**(code **)(lVar8 + 0x18))
                            ((longlong *)param_1[0xf],param_1,*(undefined4 *)(param_2 + 0x10),
                             *(int *)(param_2 + 0x20),
                             in_stack_ffffffffffffff48 & 0xffffffff00000000 | uVar9 & 0xffffffff,
                             pbVar11);
                    if (iVar5 < 0) {
                        if (DAT_140c65828 == 0) {
                            FUN_14018ee90(local_78,"Message Id #%d",uVar9 & 0xffffffff);
                            puVar10 = local_78;
                        }
                        else {
                            puVar10 = (undefined *)FUN_140335f10(local_78,uVar9 & 0xffffffff);
                        }
                        lVar8 = *(longlong *)(param_2 + 0x18);
                        uVar2 = *(undefined8 *)(puVar10 + 8);
                        if (*(char *)(lVar8 + 200) == '\0') {
                            FUN_140334d90();
                        }
                        local_res18 = 0x141dec0d8;
                        FUN_1401a2e50(0xb,0,&local_res18,lVar8 + 200,uVar2);
                        local_50 = local_70;
                        goto LAB_14033212d;
                    }
                }
            }
            return 0;
        }
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_78,"Message Id #%d");
            puVar10 = local_78;
        }
        else {
            puVar10 = (undefined *)FUN_140335f10(local_78,*(undefined4 *)(param_2 + 0x318));
        }
        uVar2 = *(undefined8 *)(puVar10 + 8);
        if (DAT_140c65828 == 0) {
            FUN_14018ee90(local_58,"Message Id #%d",uVar9 & 0xffffffff);
            puVar10 = local_58;
        }
        else {
            puVar10 = (undefined *)FUN_140335f10(local_58,uVar9 & 0xffffffff);
        }
        lVar8 = *(longlong *)(param_2 + 0x18);
        uVar3 = *(undefined8 *)(puVar10 + 8);
        if (*(char *)(lVar8 + 200) == '\0') {
            FUN_140334d90();
        }
        local_88 = 0x141debd30;
        FUN_1401a2e50(0xb,0,&local_88,lVar8 + 200,CONCAT44(uVar17,*(undefined4 *)(param_2 + 0x10)),
                      CONCAT44(uVar14,uVar12),local_res20 & 0xffffffff | (ulonglong)uVar16 << 0x20,uVar3
                ,CONCAT44(uVar18,*(undefined4 *)(param_2 + 0x318)),uVar2);
        lVar8 = local_70;
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
            lVar8 = local_70;
        }
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    iVar5 = *(int *)(param_3 + 8);
    if (*(longlong *)(param_3 + 0x20) != 0) {
        iVar5 = iVar5 + 1;
    }
    uVar6 = iVar5 - (int)local_res18;
    if ((uVar6 != 0) && (uVar6 < uVar12)) {
        FUN_1403370c0(param_3,uVar12 - uVar6);
        return 8;
    }
    return 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403323a0(longlong *param_1,longlong *param_2)

{
    ulonglong *puVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    char cVar5;
    ushort uVar6;
    int iVar7;
    int iVar8;
    DWORD DVar9;
    longlong lVar10;
    longlong *plVar11;
    HANDLE hObject;
    ulonglong uVar12;
    ulonglong uVar13;
    DWORD *pDVar14;
    ulonglong local_res8;
    undefined8 local_res18 [2];

    uVar6 = (**(code **)(*param_1 + 0x40))();
    if (((ulonglong)param_1[0x16] <= (ulonglong)uVar6) ||
        (lVar3 = *(longlong *)(param_1[0x15] + (ulonglong)uVar6 * 8), lVar3 == 0)) {
        lVar3 = *param_2;
        if (*(char *)(lVar3 + 200) == '\0') {
            FUN_140334d90();
        }
        local_res18[0] = 0x141dec0f8;
        FUN_1401a2e50(0xb,0,local_res18,lVar3 + 200);
        return;
    }
    lVar4 = *param_2;
    pDVar14 = (DWORD *)(lVar4 + 0x120);
    DVar9 = GetCurrentThreadId();
    uVar12 = 0;
    if (*pDVar14 == DVar9) {
        *(longlong *)(lVar4 + 0x128) = *(longlong *)(lVar4 + 0x128) + 1;
    }
    else {
        do {
            LOCK();
            puVar1 = (ulonglong *)(lVar4 + 0x128);
            uVar13 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ 1);
            if (uVar13 == 0) {
                *pDVar14 = DVar9;
                goto LAB_140332434;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 < 0x400);
        FUN_14019fb60(pDVar14);
    }
    LAB_140332434:
    if (*(longlong *)(*param_2 + 0x198) != 0) {
        QueryPerformanceCounter(&local_res8);
        *(ulonglong *)(lVar3 + 0x300) = local_res8 - _DAT_140c87988;
        lVar10 = FUN_140338040(*param_2 + 0x198);
        param_1[0x20] = param_1[0x20] + lVar10;
    }
    plVar11 = (longlong *)(*param_2 + 0x198);
    lVar10 = *plVar11;
    while (lVar10 != 0) {
        if (((*(longlong *)(lVar3 + 0x50) != 0) && (*(longlong *)(lVar3 + 0x58) != 0)) &&
            (FUN_140337f20(*(longlong *)(lVar3 + 0x58),*plVar11), *(longlong *)(lVar3 + 0x38) == 0)) {
            FUN_140336b00(lVar3 + 0x28);
        }
        plVar11 = (longlong *)(*param_2 + 0x198);
        lVar10 = *plVar11;
    }
    if (*(ulonglong *)(lVar4 + 0x128) < 2) {
        *pDVar14 = 0;
        *(undefined8 *)(lVar4 + 0x128) = 0;
        if (*(longlong *)(lVar4 + 0x130) != 0) {
            if (*(longlong *)(lVar4 + 0x138) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                LOCK();
                puVar1 = (ulonglong *)(lVar4 + 0x138);
                uVar12 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ (ulonglong)hObject);
                if (uVar12 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE *)(lVar4 + 0x138));
        }
    }
    else {
        *(longlong *)(lVar4 + 0x128) = *(longlong *)(lVar4 + 0x128) + -1;
    }
    FUN_140332ae0();
    uVar12 = (ulonglong)*(uint *)(lVar3 + 0x10);
    if (((ulonglong)param_1[0x16] <= (uVar12 & 0xffff)) ||
        (lVar3 = *(longlong *)(param_1[0x15] + (uVar12 & 0xffff) * 8), lVar3 == 0)) {
        local_res8 = 0x141dec090;
        FUN_1401a3130(0xb,0,&local_res8,uVar12);
        return;
    }
    iVar7 = FUN_140336fa0(lVar3 + 0x28,&local_res8);
    while( true ) {
        if (iVar7 == -0x7ff8ffda) {
            return;
        }
        if (*(longlong *)(lVar3 + 0x48) != 0) {
            return;
        }
        if (*(longlong *)(lVar3 + 0x38) == 0) {
            return;
        }
        uVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x20) - *(longlong *)(lVar3 + 0x40);
        if (uVar13 < (local_res8 & 0xffffffff)) {
            if (*(longlong **)(lVar3 + 0x58) == (longlong *)0x0) {
                return;
            }
            lVar4 = *(longlong *)(**(longlong **)(lVar3 + 0x58) + 0x38);
            while( true ) {
                if (lVar4 == 0) {
                    return;
                }
                uVar13 = uVar13 + (*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x10));
                if ((local_res8 & 0xffffffff) <= uVar13) break;
                lVar4 = *(longlong *)(lVar4 + 0x38);
            }
        }
        iVar7 = FUN_140331990(param_1,lVar3,lVar3 + 0x28);
        cVar5 = (**(code **)(*param_1 + 0x78))(param_1,uVar12);
        if (cVar5 == '\0') break;
        if (*(longlong *)(lVar3 + 0x48) != 0) {
            *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
            *(undefined8 *)(lVar3 + 0x48) = 0;
        }
        if ((*(longlong *)(lVar3 + 0x38) == 0) ||
            (*(longlong *)(lVar3 + 0x40) == *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x20))) {
            FUN_140336b00();
        }
        if (iVar7 != 0) {
            if ((iVar7 - 8U < 2) || (iVar7 == 0xe)) {
                *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            }
            uVar2 = *(uint *)(lVar3 + 0x10);
            if ((((ulonglong)(uVar2 & 0xffff) < (ulonglong)param_1[0x16]) &&
                 (*(longlong *)(param_1[0x15] + (ulonglong)(uVar2 & 0xffff) * 8) != 0)) &&
                (iVar8 = (**(code **)(*(longlong *)param_1[0xf] + 8))
                        ((longlong *)param_1[0xf],param_1,uVar2,iVar7), iVar8 < 0)) {
                (**(code **)(*param_1 + 0x28))(param_1,uVar2);
                local_res8 = 0x141dec140;
                FUN_1401a3130(0xb,0,&local_res8,*(undefined4 *)(lVar3 + 0x10),iVar7);
                return;
            }
            cVar5 = (**(code **)(*param_1 + 0x78))(param_1,uVar12);
            if (cVar5 == '\0') {
                return;
            }
        }
        iVar7 = FUN_140336fa0(lVar3 + 0x28,&local_res8);
    }
    return;
}

