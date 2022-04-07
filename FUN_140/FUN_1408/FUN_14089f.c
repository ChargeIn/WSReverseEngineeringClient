//
// Created by flop on 05.04.22.
//
void FUN_1408f01b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
    char *pcVar1;
    longlong lVar2;
    undefined uVar3;
    undefined2 uVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    longlong lVar10;
    uint uVar11;
    int iVar12;
    uint uVar13;
    int iVar14;
    ulonglong uVar15;
    int iVar16;
    char *pcVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    int iVar21;
    uint uVar22;
    uint uVar23;
    longlong lVar24;
    undefined8 auStack112 [5];
    int aiStack72 [2];
    longlong lStack64;

    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    auStack112[0] = 0x1408f0207;
    uVar5 = FUN_1408ec1c0(param_1,4);
    *(undefined4 *)param_2 = uVar5;
    auStack112[0] = 0x1408f0214;
    iVar6 = FUN_1408ec1c0(param_1,0xe);
    *(int *)((longlong)param_2 + 4) = iVar6;
    auStack112[0] = 0x1408f0239;
    lVar10 = FUN_1407f0f60((longlong)iVar6,0xffffffffffffff0);
    lVar10 = -lVar10;
    pcVar1 = &stack0xffffffffffffffc8 + lVar10;
    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f0252;
    iVar6 = FUN_1408ec1c0(param_1,1);
    if (iVar6 == 0) {
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f0265;
        uVar5 = FUN_1408ec1c0(param_1,3);
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f0275;
        iVar6 = FUN_1408ec1c0(param_1,1);
        iVar16 = 0;
        if (iVar6 == 0) {
            *(int *)(param_2 + 1) = *(int *)((longlong)param_2 + 4);
            pcVar17 = pcVar1;
            if (0 < *(int *)((longlong)param_2 + 4)) {
                do {
                    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f03bb;
                    iVar6 = FUN_1408ec1c0(param_1,uVar5);
                    *pcVar17 = (char)iVar6 + '\x01';
                    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
                        *(int *)((longlong)param_2 + 0xc) = iVar6 + 1;
                    }
                    iVar16 = iVar16 + 1;
                    pcVar17 = pcVar17 + 1;
                } while (iVar16 < *(int *)((longlong)param_2 + 4));
            }
        }
        else {
            pcVar17 = pcVar1;
            if (0 < *(int *)((longlong)param_2 + 4)) {
                do {
                    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f029d;
                    iVar6 = FUN_1408ec1c0(param_1,1);
                    if (iVar6 == 0) {
                        *pcVar17 = '\0';
                    }
                    else {
                        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f02ac;
                        iVar6 = FUN_1408ec1c0(param_1,uVar5);
                        *pcVar17 = (char)iVar6 + '\x01';
                        *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
                        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
                            *(int *)((longlong)param_2 + 0xc) = iVar6 + 1;
                        }
                    }
                    iVar16 = iVar16 + 1;
                    pcVar17 = pcVar17 + 1;
                } while (iVar16 < *(int *)((longlong)param_2 + 4));
            }
        }
    }
    else {
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f03e3;
        iVar6 = FUN_1408ec1c0(param_1,5);
        uVar20 = 0;
        *(int *)(param_2 + 1) = *(int *)((longlong)param_2 + 4);
        uVar18 = uVar20;
        uVar15 = uVar20;
        if (0 < *(int *)((longlong)param_2 + 4)) {
            do {
                iVar6 = iVar6 + 1;
                uVar19 = uVar20;
                for (uVar8 = *(int *)((longlong)param_2 + 4) - (int)uVar15; uVar8 != 0; uVar8 = uVar8 >> 1)
                {
                    uVar19 = (ulonglong)((int)uVar19 + 1);
                }
                *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f041e;
                iVar16 = FUN_1408ec1c0(param_1,uVar19);
                uVar19 = uVar20;
                if (0 < iVar16) {
                    do {
                        if (*(int *)((longlong)param_2 + 4) <= (int)uVar15) break;
                        uVar8 = (int)uVar19 + 1;
                        uVar19 = (ulonglong)uVar8;
                        pcVar1[uVar18] = (char)iVar6;
                        uVar15 = (ulonglong)((int)uVar15 + 1);
                        uVar18 = uVar18 + 1;
                    } while ((int)uVar8 < iVar16);
                }
                *(int *)((longlong)param_2 + 0xc) = iVar6;
            } while ((int)uVar15 < *(int *)((longlong)param_2 + 4));
        }
    }
    uVar18 = 0;
    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f02e3;
    iVar6 = FUN_1408ec1c0();
    uVar8 = 0;
    if (iVar6 == 0) {
        uVar22 = *(uint *)((longlong)param_2 + 4);
        uVar15 = uVar18;
        uVar7 = uVar8;
        for (uVar11 = uVar22; uVar11 != 0; uVar11 = uVar11 >> 1) {
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
        }
        iVar16 = ((int)(uVar7 + ((int)uVar7 >> 0x1f & 7U)) >> 3) + 1;
        iVar6 = 4;
        if (1 < *(int *)(param_2 + 1)) {
            if (iVar16 == 3) {
                iVar16 = 4;
            }
            uVar15 = uVar18;
            uVar7 = uVar8;
            for (uVar11 = *(int *)(param_2 + 1) * 3 - 6; uVar11 != 0; uVar11 = uVar11 >> 1) {
                uVar7 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar7;
            }
            iVar14 = uVar7 + 1;
            iVar6 = iVar16;
            if (iVar14 == iVar16 * 4 || SBORROW4(iVar14,iVar16 * 4) != iVar14 + iVar16 * -4 < 0) {
                iVar6 = 1;
                if (iVar16 / 2 != 0) {
                    iVar6 = iVar16 / 2;
                }
            }
        }
        *(int *)(param_2 + 3) = iVar6;
        for (; uVar22 != 0; uVar22 = uVar22 >> 1) {
            uVar8 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar8;
        }
        *(longlong *)((longlong)&lStack64 + lVar10) = param_3;
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)((longlong)aiStack72 + lVar10) = 0;
        iVar21 = 0;
        *(uint *)((longlong)param_2 + 0x1c) =
                (iVar6 < ((int)(uVar8 + ((int)uVar8 >> 0x1f & 7U)) >> 3) + 1) + 1;
    }
    else {
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f0461;
        uVar11 = FUN_1408ec1c0();
        iVar16 = ((int)uVar11 >> 0x15 & 0x3ffU) - 0x314;
        *(int *)(param_2 + 5) = iVar16;
        uVar22 = uVar11 & 0x1fffff;
        if (uVar22 == 0) {
            *(undefined4 *)(param_2 + 5) = 0xffffd8f1;
        }
        else {
            do {
                uVar7 = uVar22;
                uVar22 = uVar7 * 2;
                iVar16 = iVar16 + -1;
            } while ((uVar22 >> 0x1e & 1) == 0);
            *(int *)(param_2 + 5) = iVar16;
            if ((uVar11 & 0x80000000) != 0) {
                uVar22 = uVar7 * -2;
            }
        }
        *(uint *)((longlong)param_2 + 0x24) = uVar22;
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f04bc;
        uVar11 = FUN_1408ec1c0();
        iVar16 = ((int)uVar11 >> 0x15 & 0x3ffU) - 0x314;
        *(int *)(param_2 + 6) = iVar16;
        uVar22 = uVar11 & 0x1fffff;
        if (uVar22 == 0) {
            *(undefined4 *)(param_2 + 6) = 0xffffd8f1;
        }
        else {
            do {
                uVar7 = uVar22;
                uVar22 = uVar7 * 2;
                iVar16 = iVar16 + -1;
            } while ((uVar22 >> 0x1e & 1) == 0);
            *(int *)(param_2 + 6) = iVar16;
            if ((uVar11 & 0x80000000) != 0) {
                uVar22 = uVar7 * -2;
            }
        }
        *(uint *)((longlong)param_2 + 0x2c) = uVar22;
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f050d;
        iVar16 = FUN_1408ec1c0(param_1,4);
        *(int *)((longlong)param_2 + 0x34) = iVar16 + 1;
        *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f051f;
        FUN_1408ec1c0();
        iVar16 = *(int *)((longlong)param_2 + 0x34);
        uVar22 = *(uint *)((longlong)param_2 + 4);
        *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + iVar16;
        *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) >> ((byte)iVar16 & 0x1f)
                ;
        uVar15 = uVar18;
        uVar7 = uVar8;
        for (uVar11 = uVar22; uVar11 != 0; uVar11 = uVar11 >> 1) {
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
        }
        uVar11 = *(uint *)param_2;
        iVar21 = (int)uVar22 >> ((byte)((int)((uVar11 - 1) * (uVar7 - 1)) / (int)uVar11) & 0x1f);
        iVar14 = iVar21 + 1;
        while( true ) {
            while( true ) {
                iVar9 = 1;
                iVar12 = 1;
                uVar15 = (ulonglong)uVar11;
                if (0 < (int)uVar11) {
                    do {
                        iVar9 = iVar9 * iVar21;
                        iVar12 = iVar12 * iVar14;
                        uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                }
                if (iVar9 <= (int)uVar22) break;
                iVar21 = iVar21 + -1;
                iVar14 = iVar14 + -1;
            }
            if ((int)uVar22 < iVar12) break;
            iVar21 = iVar21 + 1;
            iVar14 = iVar14 + 1;
        }
        iVar14 = uVar11 * iVar16 + 8;
        iVar14 = (int)(iVar14 + (iVar14 >> 0x1f & 7U)) >> 3;
        uVar22 = iVar21 - 1;
        uVar15 = uVar18;
        uVar13 = uVar8;
        for (uVar7 = uVar22; uVar7 != 0; uVar7 = uVar7 >> 1) {
            uVar13 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar13;
        }
        lVar24 = (longlong)iVar21;
        if ((iVar14 < 5) &&
            (iVar12 = uVar11 * uVar13 + 8,
                    iVar14 <= ((int)((iVar12 >> 0x1f & 7U) + iVar12) >> 3) +
                              ((int)(iVar16 + 7 + (iVar16 + 7 >> 0x1f & 7U)) >> 3))) {
            uVar15 = lVar24 * 2 + 0xf;
            if (uVar15 <= (ulonglong)(lVar24 * 2)) {
                uVar15 = 0xffffffffffffff0;
            }
            uVar15 = uVar15 & 0xfffffffffffffff0;
            *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f061f;
            FUN_1407f0f60();
            lVar2 = -uVar15;
            param_2[8] = &stack0xffffffffffffffc8 + lVar2 + lVar10;
            uVar15 = uVar18;
            if (0 < iVar21) {
                do {
                    *(undefined8 *)((longlong)auStack112 + lVar2 + lVar10) = 0x1408f063d;
                    uVar4 = FUN_1408ec1c0(param_1);
                    uVar15 = uVar15 + 1;
                    *(undefined2 *)(param_2[8] + -2 + uVar15 * 2) = uVar4;
                } while ((longlong)uVar15 < lVar24);
            }
            *(undefined4 *)(param_2 + 4) = 1;
            iVar16 = *(int *)param_2 * *(int *)((longlong)param_2 + 0x34) + 8;
            iVar14 = (int)(iVar16 + (iVar16 >> 0x1f & 7U)) >> 3;
            iVar16 = 4;
            if (1 < *(int *)(param_2 + 1)) {
                iVar12 = iVar14;
                if (iVar14 == 3) {
                    iVar12 = 4;
                }
                for (uVar22 = (*(int *)(param_2 + 1) + -2) * 3; uVar22 != 0; uVar22 = uVar22 >> 1) {
                    uVar8 = (int)uVar18 + 1;
                    uVar18 = (ulonglong)uVar8;
                }
                iVar9 = uVar8 + 1;
                iVar16 = iVar12;
                if (iVar9 == iVar12 * 4 || SBORROW4(iVar9,iVar12 * 4) != iVar9 + iVar12 * -4 < 0) {
                    iVar16 = 1;
                    if (iVar12 / 2 != 0) {
                        iVar16 = iVar12 / 2;
                    }
                }
            }
            *(int *)(param_2 + 3) = iVar16;
            *(uint *)((longlong)param_2 + 0x1c) = (iVar16 < iVar14) + 1;
            *(longlong *)((longlong)&lStack64 + lVar2 + lVar10) = param_3;
            *(int *)((longlong)aiStack72 + lVar2 + lVar10) = iVar6;
            *(undefined8 *)((longlong)auStack112 + lVar2 + lVar10) = 0x1408f06ea;
            FUN_1408ef4c0(param_2,pcVar1,iVar21,param_1);
            param_2[8] = 0;
            return;
        }
        uVar15 = uVar18;
        uVar11 = uVar22;
        uVar7 = uVar8;
        if (iVar16 < 9) {
            uVar20 = uVar18;
            if (iVar21 != 0) {
                uVar13 = iVar21 + 3U & 0xfffffffc;
                uVar23 = *(int *)(param_3 + 0x10) + uVar13;
                if (uVar23 < *(uint *)(param_3 + 0x14) || uVar23 == *(uint *)(param_3 + 0x14)) {
                    uVar20 = *(ulonglong *)(param_3 + 8);
                    *(uint *)(param_3 + 0x10) = uVar23;
                    *(ulonglong *)(param_3 + 8) = uVar13 + uVar20;
                }
            }
            param_2[8] = uVar20;
            uVar20 = uVar18;
            if (0 < iVar21) {
                do {
                    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f073c;
                    uVar3 = FUN_1408ec1c0(param_1);
                    uVar19 = uVar20 + 1;
                    *(undefined *)(uVar20 + param_2[8]) = uVar3;
                    uVar20 = uVar19;
                } while ((longlong)uVar19 < lVar24);
            }
        }
        else {
            uVar20 = uVar18;
            if (iVar21 * 2 != 0) {
                uVar13 = iVar21 * 2 + 3U & 0xfffffffc;
                uVar23 = *(int *)(param_3 + 0x10) + uVar13;
                if (uVar23 < *(uint *)(param_3 + 0x14) || uVar23 == *(uint *)(param_3 + 0x14)) {
                    uVar20 = *(ulonglong *)(param_3 + 8);
                    *(uint *)(param_3 + 0x10) = uVar23;
                    *(ulonglong *)(param_3 + 8) = uVar13 + uVar20;
                }
            }
            param_2[8] = uVar20;
            uVar20 = uVar18;
            if (0 < iVar21) {
                do {
                    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f079b;
                    uVar4 = FUN_1408ec1c0(param_1);
                    uVar20 = uVar20 + 1;
                    *(undefined2 *)(param_2[8] + -2 + uVar20 * 2) = uVar4;
                } while ((longlong)uVar20 < lVar24);
            }
        }
        for (; uVar11 != 0; uVar11 = uVar11 >> 1) {
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
        }
        *(uint *)(param_2 + 7) = uVar7;
        *(undefined4 *)(param_2 + 4) = 2;
        uVar15 = uVar18;
        uVar7 = uVar8;
        for (uVar11 = uVar22; uVar11 != 0; uVar11 = uVar11 >> 1) {
            uVar7 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar7;
        }
        iVar16 = *(int *)param_2 * uVar7 + 8;
        iVar14 = (int)(iVar16 + (iVar16 >> 0x1f & 7U)) >> 3;
        iVar16 = 4;
        if (1 < *(int *)(param_2 + 1)) {
            if (iVar14 == 3) {
                iVar14 = 4;
            }
            uVar15 = uVar18;
            uVar7 = uVar8;
            for (uVar11 = (*(int *)(param_2 + 1) + -2) * 3; uVar11 != 0; uVar11 = uVar11 >> 1) {
                uVar7 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar7;
            }
            iVar12 = uVar7 + 1;
            iVar16 = iVar14;
            if (iVar12 == iVar14 * 4 || SBORROW4(iVar12,iVar14 * 4) != iVar12 + iVar14 * -4 < 0) {
                iVar16 = 1;
                if (iVar14 / 2 != 0) {
                    iVar16 = iVar14 / 2;
                }
            }
        }
        *(int *)(param_2 + 3) = iVar16;
        for (; uVar22 != 0; uVar22 = uVar22 >> 1) {
            uVar8 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar8;
        }
        iVar14 = *(int *)param_2 * uVar8 + 8;
        *(longlong *)((longlong)&lStack64 + lVar10) = param_3;
        *(int *)((longlong)aiStack72 + lVar10) = iVar6;
        *(uint *)((longlong)param_2 + 0x1c) = (iVar16 < (int)(iVar14 + (iVar14 >> 0x1f & 7U)) >> 3) + 1;
    }
    *(undefined8 *)((longlong)auStack112 + lVar10) = 0x1408f088c;
    FUN_1408ef4c0(param_2,pcVar1,iVar21,param_1);
    return;
}


void FUN_1408f0920(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c6010;
    if (param_1[3] != 0) {
        (**(code **)(*(longlong *)param_1[7] + 0x10))();
    }
    if (param_1[4] != 0) {
        (**(code **)(*(longlong *)param_1[7] + 0x10))();
    }
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



undefined8
FUN_1408f0970(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
              undefined8 param_5_00,uint *param_5)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;

    if ((param_5[1] & 0x3ffff) != 4) {
        return 0x4e;
    }
    *(longlong **)(param_2 + 0x38) = param_3;
    iVar4 = 0;
    for (uVar3 = param_5[1] & 0x3ffff; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        iVar4 = iVar4 + 1;
    }
    *(int *)(param_2 + 0x10) = iVar4;
    uVar3 = *param_5;
    *(undefined8 *)(param_2 + 8) = param_5_00;
    *(uint *)(param_2 + 0x14) = uVar3;
    FUN_1408f1e20(param_1,(float)(ulonglong)uVar3);
    uVar3 = *(uint *)(*(longlong *)(param_2 + 8) + 0x40);
    uVar1 = (uint)(longlong)
            ((float)(ulonglong)uVar3 * *(float *)(*(longlong *)(param_2 + 8) + 0x2c) * 0.01 +
             0.5);
    if (uVar1 < uVar3) {
        uVar3 = uVar1;
    }
    *(uint *)(param_2 + 0x28) = uVar3;
    if ((*(int *)(param_2 + 0x10) != 0) && (uVar3 != 0)) {
        uVar3 = uVar3 + 3 & 0xfffffffc;
        lVar2 = (**(code **)(*param_3 + 8))(param_3,*(int *)(param_2 + 0x10) * uVar3 * 8);
        *(longlong *)(param_2 + 0x18) = lVar2;
        if (lVar2 != 0) {
            lVar2 = (**(code **)(*param_3 + 8))(param_3,uVar3 * 0xc);
            *(longlong *)(param_2 + 0x20) = lVar2;
            if (lVar2 != 0) goto LAB_1408f0a75;
        }
        return 0x34;
    }
    LAB_1408f0a75:
    FUN_1408f0e10(param_2);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x10);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x14);
    *(float *)(param_2 + 0x48) = 1.0 - 125.6637 / (float)(ulonglong)*(uint *)(param_2 + 0x14);
    return 1;
}



undefined8 FUN_1408f0ae0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408f0b20(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1407e4830(*(longlong *)(param_1 + 0x18),0,
                      (*(int *)(param_1 + 0x28) + 3U & 0xfffffffc) * *(int *)(param_1 + 0x10) * 8);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    return 1;
}



void FUN_1408f0b90(longlong param_1,longlong *param_2)

{
    float *pfVar1;
    float fVar2;
    ushort uVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    float *pfVar8;
    float *pfVar9;
    int iVar10;
    float *pfVar11;
    uint uVar12;
    ulonglong uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined8 in_stack_ffffffffffffffc0;
    undefined4 uVar19;

    uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        iVar10 = (uint)*(ushort *)(param_2 + 2) * *(int *)(param_1 + 0x10) * 4;
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
                (*(longlong **)(param_1 + 0x38),iVar10);
        if (lVar5 != 0) {
            FUN_1407e4830(lVar5,0,iVar10);
            FUN_1408a1d50();
            FUN_1408f13e0(param_2,lVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
                          *(undefined4 *)(param_1 + 0x10),CONCAT44(uVar19,*(undefined4 *)(param_1 + 0x28))
            );
            FUN_1408f10c0();
            if (*(int *)((longlong)param_2 + 0xc) == 0x11) {
                uVar4 = *(uint *)(param_1 + 0x10);
                uVar13 = 0;
                if (uVar4 != 0) {
                    fVar2 = *(float *)(param_1 + 0x48);
                    uVar3 = *(ushort *)(param_2 + 2);
                    do {
                        fVar15 = *(float *)(param_1 + 0x40);
                        fVar14 = *(float *)(param_1 + 0x44);
                        fVar18 = 0.0;
                        pfVar11 = (float *)(*param_2 + uVar13 * uVar3 * 4);
                        pfVar1 = pfVar11 + uVar3;
                        if (pfVar11 < pfVar1) {
                            lVar6 = (longlong)pfVar1 + (3 - (longlong)pfVar11);
                            pfVar9 = pfVar11;
                            if (3 < (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
                                pfVar8 = pfVar11;
                                do {
                                    pfVar9 = pfVar8 + 4;
                                    fVar16 = pfVar8[1];
                                    fVar15 = (*pfVar8 - fVar15) + fVar2 * fVar14;
                                    fVar14 = pfVar8[2];
                                    fVar17 = (fVar16 - *pfVar8) + fVar2 * fVar15;
                                    *pfVar8 = fVar15;
                                    pfVar8[1] = fVar17;
                                    fVar15 = pfVar8[3];
                                    fVar16 = (fVar14 - fVar16) + fVar2 * fVar17;
                                    pfVar8[2] = fVar16;
                                    fVar14 = (fVar15 - fVar14) + fVar2 * fVar16;
                                    pfVar8[3] = fVar14;
                                    pfVar8 = pfVar9;
                                } while ((longlong)pfVar9 < (longlong)(pfVar1 + -3));
                            }
                            for (; pfVar9 < pfVar1; pfVar9 = pfVar9 + 1) {
                                fVar16 = *pfVar9;
                                fVar14 = (fVar16 - fVar15) + fVar2 * fVar14;
                                *pfVar9 = fVar14;
                                fVar15 = fVar16;
                            }
                        }
                        *(float *)(param_1 + 0x40) = fVar15;
                        *(float *)(param_1 + 0x44) = fVar14;
                        uVar3 = *(ushort *)(param_2 + 2);
                        if (uVar3 != 0) {
                            uVar7 = (ulonglong)(uint)uVar3;
                            do {
                                fVar15 = *pfVar11;
                                pfVar11 = pfVar11 + 1;
                                fVar18 = fVar18 + fVar15 * fVar15;
                                uVar7 = uVar7 - 1;
                            } while (uVar7 != 0);
                        }
                        if (6.309573e-08 <= fVar18 / (float)(uint)uVar3) {
                            *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
                            break;
                        }
                        uVar12 = (int)uVar13 + 1;
                        uVar13 = (ulonglong)uVar12;
                    } while (uVar12 < uVar4);
                }
            }
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38),lVar5);
        }
    }
    return;
}



void FUN_1408f0e10(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    undefined4 *puVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined4 uVar7;

    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
    uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x44);
    uVar2 = 0;
    uVar4 = *(uint *)(param_1 + 0x28) & 0xfffffffc;
    if (uVar4 != 0) {
        puVar3 = (undefined4 *)(lVar1 + 8);
        uVar2 = (uVar4 - 1 >> 2) + 1;
        uVar6 = (ulonglong)uVar2;
        uVar2 = uVar2 * 4;
        do {
            FUN_1408f1570(uVar7,puVar3[-2],puVar3[1],*puVar3);
            puVar3[-2] = puVar3[2];
            puVar3[-1] = puVar3[3];
            *puVar3 = puVar3[4];
            puVar3[1] = puVar3[5];
            FUN_1408f1570(uVar7,puVar3[-2],puVar3[1],*puVar3);
            puVar3[-2] = puVar3[6];
            puVar3[-1] = puVar3[7];
            *puVar3 = puVar3[8];
            puVar3[1] = puVar3[9];
            FUN_1408f1570(uVar7,puVar3[-2],puVar3[1],*puVar3);
            puVar3[-2] = puVar3[10];
            puVar3[-1] = puVar3[0xb];
            *puVar3 = puVar3[0xc];
            puVar3[1] = puVar3[0xd];
            FUN_1408f1570(uVar7,puVar3[-2],puVar3[1],*puVar3);
            lVar5 = lVar5 + 0x30;
            puVar3 = puVar3 + 0x10;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    if (uVar2 < *(uint *)(param_1 + 0x28)) {
        do {
            uVar6 = (ulonglong)uVar2;
            FUN_1408f1570(uVar7,*(undefined4 *)(lVar1 + uVar6 * 0x10),
                          *(undefined4 *)(lVar1 + 0xc + uVar6 * 0x10),
                          *(undefined4 *)(lVar1 + 8 + uVar6 * 0x10));
            uVar2 = uVar2 + 1;
            lVar5 = lVar5 + 4;
        } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
    uVar4 = *(int *)(param_1 + 0x28) + 3U & 0xfffffffc;
    if (uVar2 < uVar4) {
        puVar3 = (undefined4 *)(lVar5 + 0x20);
        uVar6 = (ulonglong)(uVar4 - uVar2);
        do {
            puVar3[-8] = 0;
            puVar3[-4] = 0;
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    return;
}



void FUN_1408f10c0(undefined8 param_1,undefined8 param_2,float param_3,float **param_4,
                   longlong param_5_00,undefined8 param_6_00,float *param_7_00,float param_5,
                   float *param_6,uint param_7)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    ushort uVar4;
    ushort uVar5;
    longlong lVar6;
    float *pfVar7;
    float *pfVar8;
    ulonglong uVar9;
    float *pfVar10;
    float *pfVar11;
    ulonglong uVar12;
    float *pfVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;

    if (param_7 == 0) {
        *param_7_00 = param_3;
        *param_6 = param_5;
        return;
    }
    fVar2 = *param_7_00;
    pfVar13 = *param_4;
    uVar4 = *(ushort *)(param_4 + 2);
    uVar5 = *(ushort *)((longlong)param_4 + 0x12);
    fVar3 = *param_6;
    uVar12 = 0;
    uVar9 = (ulonglong)param_7;
    do {
        pfVar8 = (float *)(param_5_00 + uVar12 * 4);
        pfVar1 = pfVar8 + uVar5;
        if ((param_3 == fVar2) && (param_5 == fVar3)) {
            if (pfVar8 < pfVar1) {
                lVar6 = (longlong)pfVar1 + (3 - (longlong)pfVar8);
                pfVar11 = pfVar13;
                pfVar7 = pfVar8;
                if (3 < (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
                    pfVar10 = pfVar13;
                    do {
                        pfVar8 = pfVar7 + 4;
                        pfVar11 = pfVar10 + 4;
                        fVar20 = pfVar7[1];
                        *pfVar10 = (fVar2 * *pfVar10 + *pfVar7) * fVar3;
                        pfVar10[1] = (fVar2 * pfVar10[1] + fVar20) * fVar3;
                        fVar20 = pfVar7[3];
                        pfVar10[2] = (fVar2 * pfVar10[2] + pfVar7[2]) * fVar3;
                        pfVar10[3] = (fVar2 * pfVar10[3] + fVar20) * fVar3;
                        pfVar7 = pfVar8;
                        pfVar10 = pfVar11;
                    } while ((longlong)pfVar8 < (longlong)(pfVar1 + -3));
                }
                while (pfVar8 < pfVar1) {
                    pfVar10 = pfVar8 + 1;
                    *(float *)((longlong)pfVar11 + (-4 - (longlong)pfVar7) + (longlong)pfVar10) =
                            (fVar2 * *(float *)((longlong)pfVar11 + (-4 - (longlong)pfVar7) + (longlong)pfVar10)
                             + *pfVar8) * fVar3;
                    pfVar8 = pfVar10;
                }
            }
        }
        else {
            fVar20 = (param_3 - fVar2) * (1.0 / (float)(uint)uVar4);
            fVar21 = (param_5 - fVar3) * (1.0 / (float)(uint)uVar4);
            if (pfVar8 < pfVar1) {
                lVar6 = (longlong)pfVar1 + (3 - (longlong)pfVar8);
                pfVar11 = pfVar13;
                fVar16 = fVar3;
                fVar19 = fVar2;
                if (3 < (longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 3)) >> 2) {
                    pfVar7 = pfVar8;
                    pfVar10 = pfVar13;
                    do {
                        pfVar8 = pfVar7 + 4;
                        pfVar11 = pfVar10 + 4;
                        fVar17 = fVar19 + fVar20 + fVar20;
                        fVar14 = fVar16 + fVar21 + fVar21;
                        *pfVar10 = ((fVar19 + fVar20) * *pfVar10 + *pfVar7) * (fVar16 + fVar21);
                        fVar18 = fVar17 + fVar20;
                        fVar15 = fVar14 + fVar21;
                        pfVar10[1] = (fVar17 * pfVar10[1] + pfVar7[1]) * fVar14;
                        fVar19 = fVar18 + fVar20;
                        fVar16 = fVar15 + fVar21;
                        pfVar10[2] = (fVar18 * pfVar10[2] + pfVar7[2]) * fVar15;
                        pfVar10[3] = (fVar19 * pfVar10[3] + pfVar7[3]) * fVar16;
                        pfVar7 = pfVar8;
                        pfVar10 = pfVar11;
                    } while ((longlong)pfVar8 < (longlong)(pfVar1 + -3));
                }
                for (; pfVar8 < pfVar1; pfVar8 = pfVar8 + 1) {
                    *pfVar11 = ((fVar19 + fVar20) * *pfVar11 + *pfVar8) * (fVar16 + fVar21);
                    pfVar11 = pfVar11 + 1;
                    fVar16 = fVar16 + fVar21;
                    fVar19 = fVar19 + fVar20;
                }
            }
        }
        uVar12 = (ulonglong)((int)uVar12 + (uint)uVar4);
        pfVar13 = pfVar13 + uVar4;
        uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    *param_7_00 = param_3;
    *param_6 = param_5;
    return;
}



void FUN_1408f13e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5
        ,int param_6)

{
    float *pfVar1;
    ushort uVar2;
    ushort uVar3;
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
    uint uVar16;
    undefined (*pauVar17) [16];
    longlong lVar18;
    float *pfVar19;
    uint uVar20;
    longlong lVar21;
    float *pfVar22;
    ulonglong uVar23;
    ulonglong uVar24;
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

    uVar20 = 0;
    uVar16 = param_6 + 3U & 0xfffffffc;
    if (param_5 != 0) {
        lVar21 = 0;
        uVar24 = 0;
        do {
            uVar2 = *(ushort *)(param_1 + 2);
            pfVar1 = (float *)(*param_1 + (ulonglong)uVar2 * lVar21 * 4);
            pauVar17 = (undefined (*) [16])(param_4 + uVar24 * 4);
            if (uVar16 != 0) {
                pfVar19 = (float *)(param_3 + 0x20);
                uVar23 = (ulonglong)(param_6 + 3U >> 2);
                do {
                    uVar3 = *(ushort *)((longlong)param_1 + 0x12);
                    fVar25 = *(float *)*pauVar17;
                    fVar26 = *(float *)(*pauVar17 + 4);
                    fVar27 = *(float *)(*pauVar17 + 8);
                    fVar28 = *(float *)(*pauVar17 + 0xc);
                    fVar30 = *(float *)pauVar17[1];
                    fVar32 = *(float *)(pauVar17[1] + 4);
                    fVar34 = *(float *)(pauVar17[1] + 8);
                    fVar36 = *(float *)(pauVar17[1] + 0xc);
                    fVar4 = pfVar19[-8];
                    fVar5 = pfVar19[-7];
                    fVar6 = pfVar19[-6];
                    fVar7 = pfVar19[-5];
                    fVar8 = pfVar19[-4];
                    fVar9 = pfVar19[-3];
                    fVar10 = pfVar19[-2];
                    fVar11 = pfVar19[-1];
                    fVar12 = *pfVar19;
                    fVar13 = pfVar19[1];
                    fVar14 = pfVar19[2];
                    fVar15 = pfVar19[3];
                    if (pfVar1 < pfVar1 + uVar3) {
                        lVar18 = (param_2 + (ulonglong)(uVar2 * uVar20) * 4) - (longlong)pfVar1;
                        pfVar22 = pfVar1;
                        fVar29 = fVar30;
                        fVar31 = fVar32;
                        fVar33 = fVar34;
                        fVar35 = fVar36;
                        do {
                            fVar36 = fVar28;
                            fVar34 = fVar27;
                            fVar32 = fVar26;
                            fVar30 = fVar25;
                            fVar28 = *pfVar22;
                            pfVar22 = pfVar22 + 1;
                            fVar25 = fVar12 * fVar29 + fVar28 + fVar8 * fVar30;
                            fVar26 = fVar13 * fVar31 + fVar28 + fVar9 * fVar32;
                            fVar27 = fVar14 * fVar33 + fVar28 + fVar10 * fVar34;
                            fVar28 = fVar15 * fVar35 + fVar28 + fVar11 * fVar36;
                            *(float *)(lVar18 + -4 + (longlong)pfVar22) =
                                    *(float *)(lVar18 + -4 + (longlong)pfVar22) +
                                    (fVar26 * fVar5 - fVar5 * fVar31) + (fVar28 * fVar7 - fVar7 * fVar35) +
                                    (fVar25 * fVar4 - fVar4 * fVar29) + (fVar27 * fVar6 - fVar6 * fVar33);
                            fVar29 = fVar30;
                            fVar31 = fVar32;
                            fVar33 = fVar34;
                            fVar35 = fVar36;
                        } while (pfVar22 < pfVar1 + uVar3);
                    }
                    *pauVar17 = CONCAT412(fVar28,CONCAT48(fVar27,CONCAT44(fVar26,fVar25)));
                    pauVar17[1] = CONCAT412(fVar36,CONCAT48(fVar34,CONCAT44(fVar32,fVar30)));
                    pauVar17 = pauVar17[2];
                    pfVar19 = pfVar19 + 0xc;
                    uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
            }
            uVar20 = uVar20 + 1;
            lVar21 = lVar21 + 1;
            uVar24 = (ulonglong)((int)uVar24 + uVar16 * 2);
        } while (uVar20 < param_5);
    }
    return;
}



void FUN_1408f1570(float param_1,float param_2,float param_3,float param_4)

{
    undefined4 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float in_stack_00000028;
    float *in_stack_00000030;
    float *in_stack_00000038;
    uint *in_stack_00000040;

    fVar5 = param_2 * 6.283185 * (1.0 / in_stack_00000028);
    uVar1 = FUN_1408fc7f0(param_4 * -3.141593 * (1.0 / in_stack_00000028));
    fVar2 = (float)FUN_1408f1690(uVar1,fVar5);
    uVar1 = 0x41200000;
    fVar3 = (float)FUN_1408fbfc0(0x41200000,param_1 * -0.05);
    fVar3 = fVar3 * 0.5;
    fVar4 = (float)FUN_1408fbfc0(uVar1,param_3 * 0.05);
    *in_stack_00000030 = fVar3 * fVar4;
    fVar3 = (float)FUN_1408fc950(fVar5);
    *in_stack_00000038 = fVar3 * fVar2 * 2.0;
    *in_stack_00000040 = (uint)(fVar2 * fVar2) ^ 0x80000000;
    return;
}



undefined8 FUN_1408f1690(undefined8 param_1,float param_2)

{
    uint uVar1;
    bool bVar2;
    float fVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;

    uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
    fVar6 = (float)param_1;
    fVar8 = 1.0;
    if (1.0 < fVar6) {
        fVar6 = 1.0;
        uVar7 = 0;
    }
    uVar1 = DAT_140c63444;
    if ((DAT_140c63444 & 1) == 0) {
        uVar1 = DAT_140c63444 | 1;
        DAT_140c63444 = uVar1;
        DAT_140c63440 = (float)FUN_1408fccb0(0x3f75c28f);
    }
    if ((uVar1 & 2) == 0) {
        uVar1 = uVar1 | 2;
        DAT_140c63448 = 3.141593 - DAT_140c63440;
        DAT_140c63444 = uVar1;
    }
    if ((uVar1 & 4) == 0) {
        uVar1 = uVar1 | 4;
        DAT_140c6344c = -0.25 / DAT_140c63440;
        DAT_140c63444 = uVar1;
    }
    if ((uVar1 & 8) == 0) {
        uVar1 = uVar1 | 8;
        DAT_140c63450 = 0.25 / (3.141593 - DAT_140c63448);
        DAT_140c63444 = uVar1;
    }
    if ((uVar1 & 0x10) == 0) {
        DAT_140c63444 = uVar1 | 0x10;
        DAT_140c63454 = fVar8 - DAT_140c63450 * 3.141593;
    }
    if (DAT_140c63440 <= param_2) {
        if (param_2 <= DAT_140c63448) {
            fVar3 = 0.75;
            uVar4 = 0;
            bVar2 = fVar6 < 0.75;
            fVar8 = fVar6;
            uVar5 = uVar7;
            if (fVar6 <= 0.75) goto LAB_1408f17e7;
        }
        else {
            fVar8 = DAT_140c63450 * param_2 + DAT_140c63454;
            uVar5 = 0;
        }
    }
    else {
        fVar8 = DAT_140c6344c * param_2 + fVar8;
        uVar5 = 0;
    }
    bVar2 = fVar6 < fVar8;
    fVar3 = fVar8;
    uVar4 = uVar5;
    LAB_1408f17e7:
    if (bVar2) {
        fVar6 = fVar3;
        uVar7 = uVar4;
    }
    return CONCAT44(uVar7,fVar6);
}



undefined8 * FUN_1408f1810(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409c6010;
    if (param_1[3] != 0) {
        (**(code **)(*(longlong *)param_1[7] + 0x10))();
    }
    if (param_1[4] != 0) {
        (**(code **)(*(longlong *)param_1[7] + 0x10))();
    }
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408f1880(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x48);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409c6070;
        puVar1[1] = 0;
        puVar1[7] = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_1408f1900(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c6070;
    if (param_1[7] != 0) {
        (**(code **)(*(longlong *)param_1[1] + 0x10))();
        *param_1 = &PTR_FUN_1409a70c8;
        return;
    }
    *param_1 = &PTR_FUN_1409a70c8;
    return;
}



undefined8 * FUN_1408f1950(undefined8 *param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    *param_1 = &PTR_FUN_1409c6070;
    plVar2 = *(longlong **)(param_2 + 8);
    param_1[1] = plVar2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    if ((*(longlong *)(param_2 + 0x38) == 0) || (*(uint *)(param_2 + 0x40) == 0)) {
        param_1[7] = 0;
    }
    else {
        lVar4 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)*(uint *)(param_2 + 0x40) << 4);
        param_1[7] = lVar4;
        if (lVar4 != 0) {
            iVar1 = *(int *)(param_2 + 0x40);
            *(int *)(param_1 + 8) = iVar1;
            uVar6 = 0;
            if (iVar1 == 0) {
                return param_1;
            }
            do {
                lVar4 = *(longlong *)(param_2 + 0x38);
                lVar3 = param_1[7];
                uVar5 = (int)uVar6 + 1;
                *(undefined4 *)(lVar3 + uVar6 * 0x10) = *(undefined4 *)(lVar4 + uVar6 * 0x10);
                *(undefined4 *)(lVar3 + 4 + uVar6 * 0x10) = *(undefined4 *)(lVar4 + 4 + uVar6 * 0x10);
                *(undefined4 *)(lVar3 + 8 + uVar6 * 0x10) = *(undefined4 *)(lVar4 + 8 + uVar6 * 0x10);
                *(undefined4 *)(lVar3 + 0xc + uVar6 * 0x10) = *(undefined4 *)(lVar4 + 0xc + uVar6 * 0x10);
                uVar6 = (ulonglong)uVar5;
            } while (uVar5 < *(uint *)(param_1 + 8));
            return param_1;
        }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    return param_1;
}



void FUN_1408f1a50(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_2 + 8))(param_2,0x48);
    if (lVar1 != 0) {
        FUN_1408f1950(lVar1,param_1);
        return;
    }
    return;
}



undefined8 FUN_1408f1a90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;

    param_1[1] = param_2;
    if (param_4 == 0) {
        uVar2 = FUN_1408fbfc0(0x41200000,0);
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
        *(undefined4 *)(param_1 + 5) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        *(undefined4 *)(param_1 + 2) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
        *(undefined2 *)(param_1 + 6) = 0x101;
        *(undefined *)((longlong)param_1 + 0x32) = 1;
        return 1;
    }
    // WARNING: Could not recover jumptable at 0x0001408f1af6. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
    return uVar1;
}



undefined8 FUN_1408f1b00(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



void FUN_1408f1b40(longlong param_1,float *param_2)

{
    undefined4 uVar1;
    longlong local_res8;
    undefined local_res18 [16];

    uVar1 = FUN_1408fbfc0(0x41200000,*param_2 * 0.05);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_1408fbfc0(0x41200000,param_2[1] * 0.05);
    local_res8 = (longlong)param_2 + 0x23;
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(float *)(param_1 + 0x18) = param_2[2];
    *(float *)(param_1 + 0x1c) = param_2[3];
    *(float *)(param_1 + 0x20) = param_2[4];
    *(float *)(param_1 + 0x24) = param_2[5];
    *(float *)(param_1 + 0x28) = param_2[6];
    *(float *)(param_1 + 0x2c) = param_2[7];
    *(undefined *)(param_1 + 0x30) = *(undefined *)(param_2 + 8);
    *(undefined *)(param_1 + 0x31) = *(undefined *)((longlong)param_2 + 0x21);
    *(undefined *)(param_1 + 0x32) = *(undefined *)((longlong)param_2 + 0x22);
    FUN_1408f2080(param_1,&local_res8,local_res18);
    return;
}



undefined8 FUN_1408f1c10(longlong param_1,short param_2,float *param_3)

{
    undefined8 uVar1;
    undefined4 uVar2;
    float *local_res18;
    undefined local_res20 [8];

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    if (0x7fff < param_2) {
        switchD_1408f1c65_caseD_b:
        return 0x1f;
    }
    switch(param_2) {
        case 0:
            uVar2 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x10) = uVar2;
            return 1;
        case 1:
            *(float *)(param_1 + 0x18) = *param_3;
            return 1;
        case 2:
            *(float *)(param_1 + 0x1c) = *param_3;
            return 1;
        case 3:
            *(float *)(param_1 + 0x20) = *param_3;
            return 1;
        case 4:
            *(float *)(param_1 + 0x24) = *param_3;
            return 1;
        case 5:
            *(float *)(param_1 + 0x28) = *param_3;
            return 1;
        case 6:
            if (*param_3 != 0.0) {
                *(undefined *)(param_1 + 0x30) = 1;
                return 1;
            }
            *(undefined *)(param_1 + 0x30) = 0;
            return 1;
        case 7:
            if (*param_3 != 0.0) {
                *(undefined *)(param_1 + 0x31) = 1;
                return 1;
            }
            *(undefined *)(param_1 + 0x31) = 0;
            return 1;
        case 8:
            if (*param_3 != 0.0) {
                *(undefined *)(param_1 + 0x32) = 1;
                return 1;
            }
            *(undefined *)(param_1 + 0x32) = 0;
            return 1;
        case 9:
            *(float *)(param_1 + 0x2c) = *param_3;
            return 1;
        case 10:
            uVar2 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
            return 1;
        default:
            local_res18 = param_3;
            uVar1 = FUN_1408f2080(param_1,&local_res18,local_res20);
            return uVar1;
        case -0xbad1541f:
            goto switchD_1408f1c65_caseD_b;
    }
}



void FUN_1408f1e20(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    uint uVar6;
    float extraout_XMM0_Da;
    float fVar7;
    float extraout_XMM0_Da_00;
    float fVar8;
    uint uVar9;
    float fVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    float fVar13;

    fVar10 = 2.0;
    uVar5 = 0;
    fVar8 = 0.0;
    uVar11 = 0x400080;
    uVar12 = 0x3f000020;
    fVar13 = 1.0;
    param_2 = param_2 * 0.5;
    if ((*(char *)(param_3 + 0x30) != '\0') &&
        ((*(float *)(param_3 + 0x18) != 0.0 || (*(float *)(param_3 + 0x1c) != 0.0)))) {
        rand();
        FUN_1408fbfc0();
        uVar4 = uVar5;
        if (*(int *)(param_3 + 0x40) != 0) {
            do {
                lVar1 = *(longlong *)(param_3 + 0x38);
                fVar7 = extraout_XMM0_Da * *(float *)(lVar1 + uVar4 * 0x10);
                if (fVar7 < param_2) {
                    if (20.0 <= fVar7) {
                        *(float *)(lVar1 + uVar4 * 0x10) = fVar7;
                    }
                    else {
                        *(undefined4 *)(lVar1 + uVar4 * 0x10) = 0x41a00000;
                    }
                }
                else {
                    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + -1;
                    if ((uint)uVar4 < *(uint *)(param_3 + 0x40)) {
                        uVar3 = (ulonglong)*(uint *)(param_3 + 0x40);
                        *(undefined4 *)(lVar1 + uVar4 * 0x10) = *(undefined4 *)(lVar1 + uVar3 * 0x10);
                        *(undefined4 *)(lVar1 + 4 + uVar4 * 0x10) = *(undefined4 *)(lVar1 + 4 + uVar3 * 0x10);
                        *(undefined4 *)(lVar1 + 8 + uVar4 * 0x10) = *(undefined4 *)(lVar1 + 8 + uVar3 * 0x10);
                        *(undefined4 *)(lVar1 + 0xc + uVar4 * 0x10) =
                                *(undefined4 *)(lVar1 + 0xc + uVar3 * 0x10);
                    }
                }
                uVar6 = (uint)uVar4 + 1;
                uVar4 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_3 + 0x40));
        }
    }
    if ((*(char *)(param_3 + 0x31) != '\0') &&
        ((fVar8 != *(float *)(param_3 + 0x20) || (fVar8 != *(float *)(param_3 + 0x24))))) {
        rand();
        FUN_1408fbfc0();
        uVar4 = uVar5;
        if (*(int *)(param_3 + 0x40) != 0) {
            do {
                uVar6 = (int)uVar4 + 1;
                *(float *)(*(longlong *)(param_3 + 0x38) + 8 + uVar4 * 0x10) =
                        extraout_XMM0_Da_00 * *(float *)(*(longlong *)(param_3 + 0x38) + 8 + uVar4 * 0x10);
                uVar4 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_3 + 0x40));
        }
    }
    if (((*(char *)(param_3 + 0x32) != '\0') && (fVar8 != *(float *)(param_3 + 0x28))) &&
        (uVar6 = *(uint *)(param_3 + 0x40) >> 1, uVar6 != 0)) {
        uVar9 = 0x80000000;
        uVar4 = (ulonglong)((uVar6 - 1 >> 1) + 1);
        do {
            iVar2 = rand();
            fVar8 = ((float)((double)iVar2 * (double)CONCAT44(uVar12,uVar11)) * fVar10 - fVar13) *
                    *(float *)(param_3 + 0x28);
            *(uint *)(uVar5 + 0xc + *(longlong *)(param_3 + 0x38)) = (uint)fVar8 ^ uVar9;
            *(float *)(uVar5 + 0x1c + *(longlong *)(param_3 + 0x38)) = fVar8;
            uVar4 = uVar4 - 1;
            uVar5 = uVar5 + 0x20;
        } while (uVar4 != 0);
    }
    return;
}



undefined8 FUN_1408f2080(longlong param_1,ushort **param_2)

{
    ushort uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;

    if (*(longlong *)(param_1 + 0x38) != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
        *(undefined8 *)(param_1 + 0x38) = 0;
    }
    puVar2 = (undefined4 *)*param_2;
    *param_2 = (ushort *)(puVar2 + 1);
    *(undefined4 *)(param_1 + 0x44) = *puVar2;
    uVar1 = **param_2;
    *param_2 = *param_2 + 1;
    *(uint *)(param_1 + 0x40) = (uint)uVar1;
    if (uVar1 != 0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
        *(longlong *)(param_1 + 0x38) = lVar3;
        if (lVar3 == 0) {
            return 0x34;
        }
        uVar5 = 0;
        if (*(int *)(param_1 + 0x40) != 0) {
            do {
                puVar2 = (undefined4 *)*param_2;
                uVar4 = (int)uVar5 + 1;
                *param_2 = (ushort *)(puVar2 + 1);
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar5 * 0x10) = *puVar2;
                puVar2 = (undefined4 *)*param_2;
                *param_2 = (ushort *)(puVar2 + 1);
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 4 + uVar5 * 0x10) = *puVar2;
                puVar2 = (undefined4 *)*param_2;
                *param_2 = (ushort *)(puVar2 + 1);
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8 + uVar5 * 0x10) = *puVar2;
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0xc + uVar5 * 0x10) = 0;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(param_1 + 0x40));
        }
    }
    return 1;
}



void FUN_1408f2190(void)

{
    rand();
    FUN_1408fbfc0();
    return;
}



void FUN_1408f21f0(void)

{
    rand();
    FUN_1408fbfc0();
    return;
}



void FUN_1408f2250(void)

{
    rand();
    return;
}



undefined8 * FUN_1408f2290(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409c6070;
    if (param_1[7] != 0) {
        (**(code **)(*(longlong *)param_1[1] + 0x10))();
    }
    *param_1 = &PTR_FUN_1409a70c8;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



void FUN_1408f2300(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x160);
    if (lVar1 != 0) {
        FUN_1408f2330(lVar1);
        return;
    }
    return;
}



undefined8 * FUN_1408f2330(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c60c0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    FUN_1408f43d0(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_1408f4010((longlong)param_1 + 0x144);
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    return param_1;
}



void FUN_1408f23b0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c60c0;
    FUN_1408f4410();
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



void FUN_1408f23f0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                   undefined8 param_5)

{
    uint *puVar1;
    ushort uVar2;
    int iVar3;

    *(undefined8 *)(param_1 + 8) = param_4;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    uVar2 = (**(code **)(*param_3 + 0x90))(param_3);
    *(uint *)(param_1 + 0x2c) = (uint)uVar2;
    uVar2 = (**(code **)(*param_3 + 0x10))(param_3);
    FUN_1408f4420(param_1 + 0x60,*(longlong *)(param_1 + 8) + 0x78,param_5);
    *(float *)(param_1 + 0x30) =
            (float)(ulonglong)uVar2 / (float)(ulonglong)*(uint *)(param_1 + 0x120);
    iVar3 = FUN_1408f29f0(param_1);
    if (iVar3 == 1) {
        FUN_1408f2d20(param_1);
        FUN_1408f2e70(param_1,param_2);
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xe8);
        *puVar1 = *puVar1 & 0xffffffdf;
    }
    return;
}



undefined8 FUN_1408f24b0(undefined8 *param_1,longlong *param_2)

{
    if (param_1[3] != 0) {
        (**(code **)(*(longlong *)param_1[2] + 0x10))();
        param_1[3] = 0;
    }
    if (param_1[4] != 0) {
        (**(code **)(*(longlong *)param_1[2] + 0x10))();
        param_1[4] = 0;
    }
    FUN_1408f4350(param_1 + 0x26,param_2);
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



void FUN_1408f2590(undefined8 param_1,longlong param_2,longlong *param_3)

{
    uint *puVar1;
    ushort uVar2;
    longlong lVar3;
    uint uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 in_XMM6_Da;
    float fVar8;
    undefined4 in_XMM6_Db;
    undefined4 uVar9;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar10 [16];

    uVar2 = *(ushort *)(param_3 + 2);
    uVar4 = 0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x2d;
    *(ushort *)((longlong)param_3 + 0x12) = uVar2;
    if (*(int *)(param_2 + 0x60) != 0) {
        do {
            param_1 = FUN_1407e4830(*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)uVar4 * 4,
                                    0,(uint)uVar2 * 4);
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_2 + 0x60));
    }
    if (*(int *)(param_2 + 0x124) != 0) {
        auVar10 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar9 = 0;
        lVar3 = 0;
        puVar5 = (undefined4 *)(param_2 + 0x88);
        fVar8 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x3c);
        lVar6 = 0;
        lVar7 = 7;
        do {
            if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0 + lVar3) == '\0') {
                *puVar5 = 0;
            }
            else {
                param_1 = FUN_140835ca0(param_1,CONCAT44(uVar9,fVar8 * *(float *)(param_2 + 0x34)),
                                        *(longlong *)(param_2 + 8) + 8 + lVar6);
                *puVar5 = (int)param_1;
            }
            lVar3 = lVar3 + 1;
            lVar6 = lVar6 + 0x10;
            puVar5 = puVar5 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        FUN_1408f4650(param_2 + 0x60,(ulonglong)uVar2,param_2 + 0x130,
                      *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xe8),auVar10);
        lVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))
                (*(longlong **)(param_2 + 0x10),
                 (ulonglong)(*(int *)(param_2 + 0x60) * 0x1000 + 0x400) << 2);
        if (lVar3 == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 2;
            return;
        }
        FUN_1408f4880(param_2 + 0x60,param_3,lVar3);
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))(*(longlong **)(param_2 + 0x10),lVar3);
    }
    fVar8 = ((float)(ulonglong)uVar2 / (float)(ulonglong)*(uint *)(param_2 + 0x120)) *
            *(float *)(*(longlong *)(param_2 + 8) + 0x94) + *(float *)(param_2 + 0x34);
    *(float *)(param_2 + 0x34) = fVar8;
    if (*(float *)(param_2 + 0x3c) <= fVar8) {
        uVar9 = FUN_1408fde98();
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
        *(undefined4 *)(param_2 + 0x34) = uVar9;
        *(undefined8 *)(param_2 + 0x44) = 0;
        *(undefined8 *)(param_2 + 0x4c) = 0;
        *(undefined8 *)(param_2 + 0x54) = 0;
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if ((*(uint *)(param_2 + 0x2c) == 0) || (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x2c)))
        {
            *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x78);
            fVar8 = *(float *)(*(longlong *)(param_2 + 8) + 0x7c);
            uVar4 = *(int *)(param_2 + 0xc4) * 0x343fd + 0x269ec3;
            *(uint *)(param_2 + 0xc4) = uVar4;
            fVar8 = ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar8;
            *(float *)(param_2 + 0x40) = fVar8;
            fVar8 = fVar8 + *(float *)(*(longlong *)(param_2 + 8) + 0x78);
            *(float *)(param_2 + 0x3c) = fVar8;
            if (fVar8 <= 0.1) {
                fVar8 = 0.1;
            }
            *(float *)(param_2 + 0x3c) = fVar8;
            puVar1 = (uint *)(*(longlong *)(param_2 + 8) + 0xe8);
            *puVar1 = *puVar1 & 0xfffffff7;
        }
        else {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0x11;
        }
    }
    *(undefined4 *)(*(longlong *)(param_2 + 8) + 0xe8) = 0;
    return;
}



undefined8 FUN_1408f2860(undefined8 param_1,longlong param_2,uint *param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong lVar5;
    float fVar6;
    undefined4 uVar7;

    uVar1 = *param_3;
    if (*(int *)(param_2 + 0x124) != 0) {
        lVar2 = 0;
        uVar7 = 0;
        puVar4 = (undefined4 *)(param_2 + 0x88);
        fVar6 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x3c);
        lVar5 = 7;
        lVar3 = lVar2;
        do {
            if (*(char *)(lVar3 + 0xd0 + *(longlong *)(param_2 + 8)) == '\0') {
                *puVar4 = 0;
            }
            else {
                param_1 = FUN_140835ca0(param_1,CONCAT44(uVar7,fVar6 * *(float *)(param_2 + 0x34)),
                                        *(longlong *)(param_2 + 8) + 8 + lVar2);
                *puVar4 = (int)param_1;
            }
            lVar3 = lVar3 + 1;
            lVar2 = lVar2 + 0x10;
            puVar4 = puVar4 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    fVar6 = ((float)(ulonglong)uVar1 / (float)(ulonglong)*(uint *)(param_2 + 0x120)) *
            *(float *)(*(longlong *)(param_2 + 8) + 0x94) + *(float *)(param_2 + 0x34);
    *(float *)(param_2 + 0x34) = fVar6;
    if (*(float *)(param_2 + 0x3c) <= fVar6) {
        uVar7 = FUN_1408fde98();
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
        *(undefined4 *)(param_2 + 0x34) = uVar7;
        *(undefined8 *)(param_2 + 0x44) = 0;
        *(undefined8 *)(param_2 + 0x4c) = 0;
        *(undefined8 *)(param_2 + 0x54) = 0;
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if ((*(uint *)(param_2 + 0x2c) != 0) && (*(uint *)(param_2 + 0x2c) <= *(uint *)(param_2 + 0x28))
                ) {
            return 0x11;
        }
        FUN_1408f2d20(param_2);
    }
    return 0x2d;
}



undefined8 FUN_1408f29f0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = *(longlong *)(param_1 + 8);
    iVar2 = *(int *)(lVar3 + 0xec);
    *(int *)(param_1 + 0x124) = iVar2;
    if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar3 + 0xe0);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x20);
        *(longlong *)(param_1 + 0x68) = lVar3 + 0x78;
        LAB_1408f2af5:
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xe8);
        *puVar1 = *puVar1 & 0xfffffffe;
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xe8);
        *puVar1 = *puVar1 & 0xfffffffb;
        return 1;
    }
    iVar4 = (iVar2 + 3U >> 2) * (uint)*(ushort *)(param_1 + 0x128);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
        FUN_1407e4830(lVar3,0,iVar2 << 5);
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),iVar4)
                ;
        *(longlong *)(param_1 + 0x20) = lVar3;
        if (lVar3 != 0) {
            FUN_1407e4830(lVar3,0,iVar4);
            *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe0);
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x18);
            *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 8) + 0x78;
            *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x20);
            *(undefined *)(param_1 + 0x12a) = 1;
            if (1 < *(uint *)(param_1 + 0x60)) {
                FUN_1408f4b00();
            }
            FUN_1408f2b80(param_1);
            goto LAB_1408f2af5;
        }
    }
    return 0x34;
}



void FUN_1408f2b30(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x18) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
        *(undefined8 *)(param_1 + 0x20) = 0;
    }
    return;
}



void FUN_1408f2b80(longlong param_1)

{
    float fVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined4 uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;

    if (*(uint *)(param_1 + 0x124) != 0) {
        fVar6 = 2.328306e-10;
        fVar7 = 2.0;
        fVar8 = 1.0;
        lVar4 = 0;
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x124);
        uVar10 = 0x41200000;
        fVar9 = 0.05;
        do {
            fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0xc4);
            uVar2 = *(int *)(param_1 + 0xc4) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xc4) = uVar2;
            *(float *)(*(longlong *)(param_1 + 0x18) + 0x14 + lVar4) =
                    ((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1;
            fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 200);
            uVar2 = *(int *)(param_1 + 0xc4) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xc4) = uVar2;
            *(float *)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar4) =
                    ((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1;
            fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0xcc);
            uVar2 = *(int *)(param_1 + 0xc4) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xc4) = uVar2;
            uVar5 = FUN_1408fbfc0(uVar10,((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1 * fVar9
            );
            lVar4 = lVar4 + 0x20;
            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + lVar4) = uVar5;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return;
}



void FUN_1408f2d20(longlong param_1)

{
    uint *puVar1;
    uint uVar2;
    float fVar3;

    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78);
    fVar3 = *(float *)(*(longlong *)(param_1 + 8) + 0x7c);
    uVar2 = *(int *)(param_1 + 0xc4) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0xc4) = uVar2;
    fVar3 = ((float)(ulonglong)uVar2 * 2.328306e-10 * 2.0 - 1.0) * fVar3;
    *(float *)(param_1 + 0x40) = fVar3;
    fVar3 = fVar3 + *(float *)(*(longlong *)(param_1 + 8) + 0x78);
    *(float *)(param_1 + 0x3c) = fVar3;
    if (fVar3 <= 0.1) {
        fVar3 = 0.1;
    }
    *(float *)(param_1 + 0x3c) = fVar3;
    puVar1 = (uint *)(*(longlong *)(param_1 + 8) + 0xe8);
    *puVar1 = *puVar1 & 0xfffffff7;
    return;
}



undefined4 FUN_1408f2da0(undefined4 param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined4 uVar3;

    uVar2 = (ulonglong)param_3;
    if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0 + uVar2) == '\0') {
        uVar3 = 0;
    }
    else {
        lVar1 = param_2 + uVar2 * 4;
        uVar3 = FUN_140835ca0(param_1,0,*(longlong *)(param_2 + 8) + 8 + uVar2 * 0x10,param_3,
                              *(undefined4 *)(lVar1 + 0x44),lVar1 + 0x44);
    }
    if (param_3 != 0) {
        if (param_3 == 2) {
            FUN_1408f4e60(uVar3,uVar3,param_2 + 0x60);
        }
        else if (param_3 == 3) {
            FUN_1408f4ea0(uVar3,uVar3,param_2 + 0x60);
            return *(undefined4 *)(param_2 + 0xa4 + (ulonglong)param_3 * 4);
        }
        return *(undefined4 *)(param_2 + 0xa4 + (ulonglong)param_3 * 4);
    }
    FUN_1408f4df0(uVar3,uVar3,param_2 + 0x60);
    return *(undefined4 *)(param_2 + 0xa4 + uVar2 * 4);
}



void FUN_1408f2e70(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined4 in_EAX;
    float fVar2;
    ulonglong uVar3;
    undefined auVar4 [16];

    lVar1 = *(longlong *)(param_1 + 8);
    auVar4 = ZEXT416((uint)(*(float *)(lVar1 + 0x8c) * 2.0)) & (undefined  [16])0xffffffffffffffff;
    fVar2 = SUB164(auVar4,0) / (*(float *)(param_1 + 0x30) * 2.0);
    if (((int)fVar2 != -0x80000000) && ((float)(int)fVar2 != fVar2)) {
        uVar3 = SUB168(CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar2),0);
        movmskps(in_EAX,CONCAT88(SUB168(auVar4 >> 0x40,0),uVar3 | uVar3 << 0x20) &
                        (undefined  [16])0xffffffffffffffff);
    }
    if (*(char *)(lVar1 + 0xd0) != '\0') {
        FUN_140835ca0(lVar1 + 8,param_2,*(undefined4 *)(param_1 + 0x44),param_1 + 0x44);
    }
    FUN_1408f4df0(param_1 + 0x60);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0xd2) != '\0') {
        FUN_140835ca0(*(longlong *)(param_1 + 8) + 0x28);
    }
    FUN_1408f4e60(param_1 + 0x60);
    if (*(char *)(*(longlong *)(param_1 + 8) + 0xd3) != '\0') {
        FUN_140835ca0(*(longlong *)(param_1 + 8) + 0x38);
    }
    FUN_1408f4ea0(param_1 + 0x60);
    FUN_1408f4230(param_1 + 0x130);
    return;
}



undefined8 * FUN_1408f3000(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409c60c0;
    FUN_1408f4410();
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408f3050(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xf0);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_LAB_1409c6130;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0x1b] = 0;
        puVar1[0x1c] = 0;
        puVar1[0x1d] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408f3150(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    uint uVar9;
    ulonglong uVar10;

    uVar6 = 0;
    *param_1 = &PTR_LAB_1409c6130;
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
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *param_3 = 1;
    plVar2 = *(longlong **)(param_2 + 0xd8);
    param_1[0x1b] = plVar2;
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
    uVar1 = *(undefined4 *)(param_2 + 0xd4);
    param_1[0x1d] = 0x3f;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
    param_1[0x1c] = 0;
    if ((*(longlong *)(param_2 + 0xe0) != 0) && (*(int *)(param_2 + 0xec) != 0)) {
        lVar5 = (**(code **)(*plVar2 + 8))(plVar2,*(int *)(param_2 + 0xec) * 0x14);
        param_1[0x1c] = lVar5;
        if (lVar5 == 0) goto LAB_1408f33ce;
        iVar4 = *(int *)(param_2 + 0xec);
        *(int *)((longlong)param_1 + 0xec) = iVar4;
        uVar10 = uVar6;
        if (iVar4 != 0) {
            do {
                uVar9 = (int)uVar10 + 1;
                lVar5 = uVar10 * 0x14;
                lVar3 = *(longlong *)(param_2 + 0xe0);
                puVar8 = (undefined4 *)(param_1[0x1c] + lVar5);
                *puVar8 = *(undefined4 *)(lVar5 + lVar3);
                puVar8[1] = *(undefined4 *)(lVar5 + 4 + lVar3);
                puVar8[2] = *(undefined4 *)(lVar5 + 8 + lVar3);
                puVar8[3] = *(undefined4 *)(lVar5 + 0xc + lVar3);
                puVar8[4] = *(undefined4 *)(lVar5 + 0x10 + lVar3);
                uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)((longlong)param_1 + 0xec));
        }
    }
    puVar7 = (undefined8 *)(param_2 + 8);
    while( true ) {
        iVar4 = FUN_140837e30(param_1 + uVar6 * 2 + 1,*puVar7,*(undefined4 *)(puVar7 + 1),0);
        if (iVar4 == 0x34) break;
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
        puVar7 = puVar7 + 2;
        if (6 < uVar9) {
            return param_1;
        }
    }
    LAB_1408f33ce:
    *param_3 = 0x34;
    return param_1;
}



void FUN_1408f3400(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    *param_1 = &PTR_LAB_1409c6130;
    if (param_1[0x1c] != 0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
    }
    plVar1 = param_1 + 1;
    lVar2 = 7;
    do {
        if (*plVar1 != 0) {
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
        }
        plVar1[1] = 0;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    *param_1 = &PTR_FUN_1409a70c8;
    return;
}



longlong * FUN_1408f3490(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int local_res10 [6];

    local_res10[0] = 1;
    lVar1 = (**(code **)(*param_2 + 8))(param_2,0xf0);
    if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1408f3150(lVar1,param_1,local_res10);
        if (plVar2 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        if (local_res10[0] == 1) {
            return plVar2;
        }
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    }
    return (longlong *)0x0;
}



undefined8 FUN_1408f3590(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



ulonglong FUN_1408f35d0(longlong param_1,undefined4 *param_2)

{
    ushort uVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 uVar5;
    longlong local_res8 [4];

    *(undefined4 *)(param_1 + 0x78) = *param_2;
    *(undefined4 *)(param_1 + 0x7c) = param_2[1];
    uVar1 = *(ushort *)(param_2 + 2);
    *(uint *)(param_1 + 0x80) = (uint)uVar1;
    if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x80) = 4;
    }
    else {
        uVar5 = 0x33;
        if (uVar1 != 2) {
            uVar5 = 3;
        }
        *(undefined4 *)(param_1 + 0x80) = uVar5;
    }
    local_res8[0] = (longlong)param_2 + 0x59;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 10);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x12);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x16);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0x1e);
    *(undefined *)(param_1 + 0xd0) = *(undefined *)((longlong)param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x23);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0x27);
    *(undefined *)(param_1 + 0xd1) = *(undefined *)((longlong)param_2 + 0x2b);
    *(undefined4 *)(param_1 + 0xa0) = param_2[0xb];
    *(undefined4 *)(param_1 + 0xbc) = param_2[0xc];
    *(undefined *)(param_1 + 0xd2) = *(undefined *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x35);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((longlong)param_2 + 0x39);
    *(undefined *)(param_1 + 0xd3) = *(undefined *)((longlong)param_2 + 0x3d);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 0x3e);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0x42);
    *(undefined *)(param_1 + 0xd4) = *(undefined *)((longlong)param_2 + 0x46);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x47);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)((longlong)param_2 + 0x4b);
    *(undefined *)(param_1 + 0xd5) = *(undefined *)((longlong)param_2 + 0x4f);
    *(undefined4 *)(param_1 + 0xb0) = param_2[0x14];
    *(undefined4 *)(param_1 + 0xcc) = param_2[0x15];
    *(undefined *)(param_1 + 0xd6) = *(undefined *)(param_2 + 0x16);
    uVar5 = FUN_1408fbfc0(0x41200000,*(float *)(param_1 + 0xb0) * 0.05);
    *(undefined4 *)(param_1 + 0xb0) = uVar5;
    *(undefined4 *)(param_1 + 0xe8) = 0x3f;
    uVar3 = FUN_1408f3bf0(param_1,local_res8);
    if ((int)uVar3 == 1) {
        uVar2 = FUN_1408f3d80(param_1,local_res8);
        uVar4 = 1;
        if (uVar2 != 1) {
            uVar4 = uVar2;
        }
        uVar3 = (ulonglong)uVar4;
    }
    return uVar3;
}



ulonglong FUN_1408f37c0(longlong param_1,short param_2,float *param_3)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    float *local_res18 [2];

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    iVar1 = (int)param_2;
    if (iVar1 < 0x8000) {
        local_res18[0] = param_3;
        if (iVar1 == 0x7fff) {
            *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x17;
            uVar2 = FUN_1408f3bf0(param_1,local_res18);
            if (uVar2 == 1) {
                uVar3 = FUN_1408f3d80(param_1,local_res18);
                return uVar3;
            }
            return (ulonglong)uVar2;
        }
        switch(iVar1) {
            case 0:
                *(float *)(param_1 + 0x98) = *param_3;
                return 1;
            case 1:
                *(float *)(param_1 + 0xb4) = *param_3;
                return 1;
            case 2:
                *(undefined *)(param_1 + 0xd0) = *(undefined *)param_3;
                return 1;
            case 3:
                *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) | 0x10;
                *(float *)(param_1 + 0x9c) = *param_3;
                return 1;
            case 4:
                *(float *)(param_1 + 0xb8) = *param_3;
                return 1;
            case 5:
                *(undefined *)(param_1 + 0xd1) = *(undefined *)param_3;
                return 1;
            case 6:
                *(float *)(param_1 + 0xa0) = *param_3;
                return 1;
            case 7:
                *(float *)(param_1 + 0xbc) = *param_3;
                return 1;
            case 8:
                *(undefined *)(param_1 + 0xd2) = *(undefined *)param_3;
                return 1;
            case 9:
                *(float *)(param_1 + 0xa4) = *param_3;
                return 1;
            case 10:
                *(float *)(param_1 + 0xc0) = *param_3;
                return 1;
            case 0xb:
                *(undefined *)(param_1 + 0xd3) = *(undefined *)param_3;
                return 1;
            case 0x14:
                *(float *)(param_1 + 0xa8) = *param_3;
                return 1;
            case 0x15:
                *(float *)(param_1 + 0xc4) = *param_3;
                return 1;
            case 0x16:
                *(undefined *)(param_1 + 0xd4) = *(undefined *)param_3;
                return 1;
            case 0x17:
                *(float *)(param_1 + 0xac) = *param_3;
                return 1;
            case 0x18:
                *(float *)(param_1 + 200) = *param_3;
                return 1;
            case 0x19:
                *(undefined *)(param_1 + 0xd5) = *(undefined *)param_3;
                return 1;
            case 0x1a:
                uVar4 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0xb0) = uVar4;
                return 1;
            case 0x1b:
                *(float *)(param_1 + 0xcc) = *param_3;
                return 1;
            case 0x1c:
                *(undefined *)(param_1 + 0xd6) = *(undefined *)param_3;
                return 1;
            case 0x28:
                if (*(short *)param_3 != 0) {
                    uVar4 = 0x33;
                    if (*(short *)param_3 != 2) {
                        uVar4 = 3;
                    }
                    *(undefined4 *)(param_1 + 0x80) = uVar4;
                    return 1;
                }
                *(undefined4 *)(param_1 + 0x80) = 4;
                return 1;
            case 0x2a:
                *(float *)(param_1 + 0x78) = *param_3;
                return 1;
            case 0x2b:
                *(float *)(param_1 + 0x7c) = *param_3;
                return 1;
            case 0x2c:
                *(float *)(param_1 + 0x84) = *param_3;
                return 1;
            case 0x2d:
                *(float *)(param_1 + 0x88) = *param_3;
                return 1;
            case 0x2e:
                *(float *)(param_1 + 0x90) = *param_3;
                return 1;
            case 0x30:
                *(float *)(param_1 + 0x94) = *param_3;
                return 1;
            case -1:
                return 1;
        }
    }
    return 0x1f;
}



undefined8 FUN_1408f3bf0(longlong param_1,ushort **param_2)

{
    ushort uVar1;
    ushort *puVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 uVar8;
    float fVar9;
    undefined4 uVar10;

    puVar2 = *param_2;
    uVar1 = *puVar2;
    puVar7 = (undefined4 *)(puVar2 + 3);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(puVar2 + 1);
    uVar4 = (uint)uVar1;
    if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(uint *)(param_1 + 0xec) != uVar4)) {
        (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xec) = 0;
    }
    if (uVar1 != 0) {
        *(uint *)(param_1 + 0xec) = uVar4;
        if (*(longlong *)(param_1 + 0xe0) == 0) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))
                    (*(longlong **)(param_1 + 0xd8),uVar4 * 0x14);
            *(longlong *)(param_1 + 0xe0) = lVar3;
            if (lVar3 == 0) {
                *(undefined4 *)(param_1 + 0xec) = 0;
                return 0x34;
            }
        }
        if (*(int *)(param_1 + 0xec) != 0) {
            fVar9 = 0.05;
            uVar10 = 0x41200000;
            uVar5 = 0;
            puVar6 = puVar7;
            do {
                puVar7 = puVar6 + 5;
                *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 0x14) = *puVar6;
                *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 4 + uVar5 * 0x14) = puVar6[1];
                *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 8 + uVar5 * 0x14) = puVar6[2];
                *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0xc + uVar5 * 0x14) = puVar6[3];
                uVar8 = FUN_1408fbfc0(uVar10,(float)puVar6[4] * fVar9);
                uVar4 = (int)uVar5 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0x10 + uVar5 * 0x14) = uVar8;
                uVar5 = (ulonglong)uVar4;
                puVar6 = puVar7;
            } while (uVar4 < *(uint *)(param_1 + 0xec));
        }
    }
    *param_2 = (ushort *)puVar7;
    return 1;
}



undefined8 FUN_1408f3d80(longlong param_1,ushort **param_2)

{
    ushort uVar1;
    ushort uVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    longlong *plVar6;
    undefined4 *puVar7;
    ushort uVar8;
    longlong lVar9;

    plVar6 = (longlong *)(param_1 + 8);
    lVar9 = 7;
    uVar8 = 0;
    do {
        if (*plVar6 != 0) {
            FUN_140881720(DAT_140c10f20);
            *plVar6 = 0;
        }
        plVar6[1] = 0;
        plVar6 = plVar6 + 2;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar1 = **param_2;
    puVar7 = (undefined4 *)(*param_2 + 1);
    if (uVar1 != 0) {
        do {
            uVar2 = *(ushort *)(puVar7 + 1);
            uVar3 = *puVar7;
            puVar7 = (undefined4 *)((longlong)puVar7 + 6);
            if (uVar2 != 0) {
                uVar4 = FUN_1408f3f40(param_1,uVar3);
                iVar5 = FUN_140837e30(param_1 + 8 + (ulonglong)uVar4 * 0x10,puVar7,uVar2,0);
                if (iVar5 == 0x34) {
                    return 0x34;
                }
                puVar7 = puVar7 + (ulonglong)uVar2 * 3;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
    }
    *param_2 = (ushort *)puVar7;
    return 1;
}



undefined8 FUN_1408f3e80(longlong param_1,longlong *param_2)

{
    ushort uVar1;
    undefined4 *puVar2;
    uint uVar3;
    undefined8 uVar4;
    longlong lVar5;

    puVar2 = (undefined4 *)*param_2;
    uVar1 = *(ushort *)(puVar2 + 1);
    lVar5 = (longlong)puVar2 + 6;
    if (uVar1 != 0) {
        uVar3 = FUN_1408f3f40(param_1,*puVar2);
        uVar4 = FUN_140837e30(param_1 + 8 + (ulonglong)uVar3 * 0x10,lVar5,uVar1,0);
        if ((int)uVar4 == 0x34) {
            return uVar4;
        }
        lVar5 = lVar5 + (ulonglong)uVar1 * 0xc;
    }
    *param_2 = lVar5;
    return 1;
}



undefined8 FUN_1408f3f40(undefined8 param_1,undefined4 param_2)

{
    undefined8 uVar1;

    uVar1 = 0;
    switch(param_2) {
        case 3:
            return 1;
        case 6:
            return 2;
        case 9:
            return 3;
        case 0x14:
            return 4;
        case 0x17:
            return 5;
        case 0x1a:
            uVar1 = 6;
    }
    return uVar1;
}



undefined8 * FUN_1408f4010(undefined8 *param_1)

{
    int iVar1;

    *param_1 = 0;
    param_1[1] = 0;
    iVar1 = rand();
    *(int *)(param_1 + 2) = iVar1;
    return param_1;
}



void FUN_1408f4040(float *param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    float extraout_XMM0_Da;
    float fVar4;
    undefined4 uVar5;
    undefined extraout_XMM0 [16];
    float fVar6;
    ulonglong uVar7;
    undefined auVar8 [16];
    float in_XMM3_Da;
    float fVar9;
    float fVar10;
    float in_stack_00000028;

    fVar10 = 2.0;
    fVar9 = 13.5 - in_XMM3_Da * 9.0;
    FUN_1408fbfc0();
    fVar4 = extraout_XMM0_Da * param_1[1];
    param_1[1] = fVar4;
    fVar6 = fVar4 + param_1[2];
    if (((fVar4 == 0.0) || ((0.0 < fVar4 && (*param_1 <= fVar6)))) ||
        ((fVar4 < 0.0 && (fVar6 < *param_1 || fVar6 == *param_1)))) {
        param_1[4] = (float)(((int)param_1[4] * 0x343fd + 0x269ec3) * 0x343fd + 0x269ec3);
        param_1[3] = fVar9;
        uVar2 = (int)param_1[4] * 0x343fd + 0x269ec3;
        fVar4 = (float)(uVar2 * 0x343fd + 0x269ec3);
        param_1[4] = fVar4;
        fVar4 = ((float)(ulonglong)(uint)fVar4 * 2.328306e-10 + (float)(ulonglong)uVar2 * 2.328306e-10)
        * 0.5 * fVar10 - 1.0;
        *param_1 = fVar4;
        fVar4 = fVar4 - param_1[2];
        uVar1 = FUN_1408fbfc0();
        uVar5 = SUB164(extraout_XMM0 >> 0x20,0);
        in_stack_00000028 = (SUB164(extraout_XMM0,0) * 0.001) / in_stack_00000028;
        auVar8 = CONCAT124(SUB1612(extraout_XMM0 >> 0x20,0),in_stack_00000028);
        iVar3 = (int)in_stack_00000028;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != in_stack_00000028)) {
            uVar7 = SUB168(auVar8,0);
            uVar2 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar5,CONCAT48(uVar5,uVar7)) >> 0x40,0),
                                            uVar7 & 0xffffffff | uVar7 << 0x20));
            auVar8 = ZEXT416((uint)(float)(iVar3 + (uVar2 & 1 ^ 1)));
        }
        param_1[1] = fVar4 / SUB164(auVar8,0);
    }
    param_1[2] = param_1[2] + param_1[1];
    FUN_1408fbfc0();
    return;
}



undefined8
FUN_1408f4230(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              uint *param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar4;
    float extraout_XMM0_Da;
    float fVar5;
    longlong *in_stack_00000030;
    uint in_stack_00000038;
    uint in_stack_00000040;

    param_5[10] = in_stack_00000040;
    if (in_stack_00000038 == 0) {
        in_stack_00000038 = 1;
    }
    *param_5 = in_stack_00000038;
    lVar1 = (**(code **)(*in_stack_00000030 + 8))(in_stack_00000030,(ulonglong)in_stack_00000038 << 2)
            ;
    *(longlong *)(param_5 + 2) = lVar1;
    if (lVar1 == 0) {
        uVar2 = 0x34;
    }
    else {
        uVar4 = 0;
        param_5[4] = 0;
        param_5[5] = param_5[7];
        fVar5 = extraout_XMM0_Da;
        if (*param_5 != 0) {
            do {
                fVar5 = (float)FUN_1408f4040(fVar5,param_2,param_3,param_4,param_5 + 5);
                if (fVar5 <= (float)param_5[10]) {
                    fVar5 = (float)param_5[10];
                }
                *(float *)(*(longlong *)(param_5 + 2) + uVar4 * 4) = fVar5;
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *param_5);
        }
        uVar2 = 1;
    }
    return uVar2;
}



void FUN_1408f4350(undefined4 *param_1,longlong *param_2)

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



longlong FUN_1408f43d0(longlong param_1)

{
    int iVar1;

    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    iVar1 = rand();
    *(int *)(param_1 + 100) = iVar1;
    FUN_1408f6840(param_1 + 0x68);
    return param_1;
}



void FUN_1408f4410(void)

{
    return;
}



void FUN_1408f4420(uint *param_1,longlong param_2,uint *param_3)

{
    float fVar1;
    undefined2 uVar2;
    uint uVar3;
    uint uVar4;

    param_1[0x30] = *param_3;
    uVar4 = *(uint *)(param_2 + 8);
    param_3[1] = param_3[1] & 0xfffc0000;
    param_3[1] = param_3[1] | uVar4 & 0x3ffff;
    switch(param_3[1] & 0x3ffff) {
        case 3:
        case 4:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xf:
        case 0x33:
        case 0x37:
        case 0x3b:
        case 0x3f:
            break;
        default:
            param_3[1] = param_3[1] & 0xfffc0003;
            uVar4 = 3;
            param_3[1] = param_3[1] | 3;
    }
    uVar3 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        uVar3 = uVar3 + 1;
    }
    *param_1 = uVar3;
    param_3[1] = param_3[1] & 0xe0ffffff;
    param_3[1] = param_3[1] | (uVar3 & 7) << 0x1a;
    uVar4 = *param_1;
    param_1[0x1d] = (uint)(1.0 - 251.3274 / (float)(ulonglong)param_1[0x30]);
    if (uVar4 == 1) {
        uVar2 = 0x70;
    }
    else if (uVar4 == 2) {
        uVar2 = 0x90;
    }
    else {
        if (uVar4 != 4) goto LAB_1408f450e;
        uVar2 = 0xb0;
    }
    *(undefined2 *)(param_1 + 0x32) = uVar2;
    LAB_1408f450e:
    fVar1 = *(float *)(param_2 + 0x3c);
    uVar4 = param_1[0x19] * 0x343fd + 0x269ec3;
    param_1[0x19] = uVar4;
    param_1[0x15] = (uint)(((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar1);
    fVar1 = *(float *)(param_2 + 0x40);
    uVar4 = param_1[0x19] * 0x343fd + 0x269ec3;
    param_1[0x19] = uVar4;
    param_1[0x16] = (uint)(((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar1);
    fVar1 = *(float *)(param_2 + 0x44);
    uVar4 = param_1[0x19] * 0x343fd + 0x269ec3;
    param_1[0x19] = uVar4;
    param_1[0x17] = (uint)(((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar1);
    fVar1 = *(float *)(param_2 + 0x48);
    uVar4 = param_1[0x19] * 0x343fd + 0x269ec3;
    param_1[0x19] = uVar4;
    param_1[0x18] = (uint)(((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar1);
    *(undefined *)((longlong)param_1 + 0xca) = 1;
    return;
}



void FUN_1408f4650(longlong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    float fVar6;
    float fVar7;
    undefined8 uVar8;
    ulonglong uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    ulonglong uVar5;

    lVar3 = *(longlong *)(param_1 + 8);
    fVar11 = 2.0;
    fVar6 = (float)FUN_1408fbfc0(0x40000000);
    fVar10 = fVar6 * 8.0;
    if (fVar6 * 8.0 <= fVar11) {
        fVar10 = fVar11;
    }
    *(float *)(param_1 + 0x44) = fVar10;
    *(float *)(param_1 + 0x48) =
            *(float *)(lVar3 + 0x24) + *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x2c);
    fVar10 = *(float *)(lVar3 + 0x28) + *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x30);
    if (fVar10 < 1.0) {
        if (fVar10 <= 0.0) {
            fVar10 = 0.0;
        }
    }
    else {
        fVar10 = 1.0;
    }
    *(float *)(param_1 + 0x4c) = fVar10;
    fVar10 = *(float *)(lVar3 + 0x2c) + *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x34);
    if (fVar10 < 1.0) {
        if (fVar10 <= 0.0) {
            fVar10 = 0.0;
        }
    }
    else {
        fVar10 = 1.0;
    }
    *(float *)(param_1 + 0x50) = fVar10;
    uVar8 = FUN_1408f5bd0(fVar10,*(undefined4 *)(param_1 + 0x38),param_1);
    uVar8 = FUN_1408f5c90(uVar8,*(undefined4 *)(param_1 + 0x3c),param_1);
    FUN_1408f5da0(uVar8,*(undefined4 *)(param_1 + 0x40),param_1);
    fVar10 = (float)((double)(param_2 & 0xffffffff) / (double)(ulonglong)*(uint *)(param_1 + 0xc0));
    uVar9 = FUN_1408f4040((double)(ulonglong)*(uint *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x44)
            ,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((float)uVar9 <= (float)param_3[10]) {
        uVar9 = (ulonglong)param_3[10];
    }
    *(int *)(*(longlong *)(param_3 + 2) + (ulonglong)param_3[4] * 4) = (int)uVar9;
    param_3[4] = param_3[4] + 1;
    uVar1 = *param_3;
    lVar3 = *(longlong *)(param_3 + 2);
    uVar4 = param_3[4];
    if (param_3[4] == uVar1) {
        uVar4 = 0;
    }
    param_3[4] = uVar4;
    uVar13 = 0;
    fVar6 = (*(float *)(lVar3 + ((ulonglong)((uVar1 - 2) + uVar4) % (ulonglong)uVar1) * 4) +
             *(float *)(lVar3 + ((ulonglong)((uVar1 - 1) + uVar4) % (ulonglong)uVar1) * 4) +
             *(float *)(lVar3 + ((ulonglong)((uVar1 - 3) + uVar4) % (ulonglong)uVar1) * 4)) * 0.3333333
            ;
    if (((*(char *)(*(longlong *)(param_1 + 8) + 0x59) != '\0') || ((param_4 & 0x15) != 0)) ||
        (*(char *)(param_1 + 0xca) != '\0')) {
        uVar9 = FUN_1408f5290(param_1);
    }
    FUN_1408f4ee0(uVar9,CONCAT44(uVar13,fVar6),fVar10,param_1);
    if (*(char *)(param_1 + 0xca) == '\0') {
        FUN_1408f5820(param_1,param_2 & 0xffffffff);
    }
    else {
        FUN_1408f55c0(param_1);
    }
    uVar1 = *(uint *)(param_1 + 0xc4);
    uVar9 = 0;
    fVar10 = 1.0 / (float)(ulonglong)*(uint *)(param_1 + 0xc0);
    if (uVar1 != 0) {
        fVar6 = 20.0;
        uVar13 = 0;
        fVar11 = 0.9992;
        fVar16 = 0.5;
        fVar15 = 2.0;
        fVar17 = 0.125;
        fVar18 = 3.141593;
        fVar19 = -0.5;
        uVar5 = uVar9;
        do {
            lVar3 = *(longlong *)(param_1 + 0x18);
            fVar7 = (float)(ulonglong)*(uint *)(param_1 + 0xc0) * fVar16;
            fVar12 = *(float *)(lVar3 + 8 + uVar9) * *(float *)(lVar3 + 4 + uVar9) * fVar17;
            if (fVar7 <= fVar12) {
                fVar12 = fVar7;
            }
            uVar14 = 0;
            if (fVar12 <= fVar6) {
                fVar12 = fVar6;
                uVar14 = uVar13;
            }
            fVar7 = (float)FUN_1408fc7f0(CONCAT44(uVar14,(fVar12 / *(float *)(lVar3 + 0xc + uVar9)) *
                                                         fVar15 * fVar18 * fVar10 * fVar19));
            if (fVar11 <= fVar7) {
                fVar7 = fVar11;
            }
            uVar2 = (ulonglong)((uint)uVar5 & 3);
            lVar3 = (ulonglong)((int)(uVar5 >> 2) * (uint)*(ushort *)(param_1 + 200)) +
                    *(longlong *)(param_1 + 0x20);
            fVar12 = (float)FUN_1408fc950(CONCAT44(uVar14,fVar12 * 6.283185 * fVar10));
            uVar4 = (uint)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
            uVar9 = uVar9 + 0x20;
            *(uint *)(lVar3 + 0x40 + uVar2 * 4) = (uint)(fVar7 * fVar7) ^ 0x80000000;
            *(float *)(lVar3 + 0x30 + uVar2 * 4) = fVar12 * fVar7 * fVar15;
        } while (uVar4 < uVar1);
    }
    return;
}



void FUN_1408f4880(int *param_1)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;

    iVar1 = *param_1;
    if (iVar1 == 1) {
        FUN_1408f6070();
    }
    else if (iVar1 == 2) {
        FUN_1408f6260();
    }
    else if (iVar1 == 4) {
        FUN_1408f64d0();
    }
    uVar2 = param_1[0x31];
    uVar8 = 0;
    if (3 < (int)uVar2) {
        uVar6 = 1;
        do {
            uVar3 = uVar8 >> 2;
            uVar8 = uVar8 + 4;
            puVar4 = (undefined4 *)
                    ((ulonglong)(uVar3 * *(ushort *)(param_1 + 0x32)) + *(longlong *)(param_1 + 8));
            puVar4[4] = 0;
            *puVar4 = puVar4[8];
            uVar7 = (ulonglong)(uVar6 & 3);
            lVar5 = (ulonglong)((uVar6 >> 2) * (uint)*(ushort *)(param_1 + 0x32)) +
                    *(longlong *)(param_1 + 8);
            *(undefined4 *)(lVar5 + 0x10 + uVar7 * 4) = 0;
            *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)(lVar5 + 0x20 + uVar7 * 4);
            uVar7 = (ulonglong)(uVar6 + 1 & 3);
            lVar5 = (ulonglong)((uVar6 + 1 >> 2) * (uint)*(ushort *)(param_1 + 0x32)) +
                    *(longlong *)(param_1 + 8);
            *(undefined4 *)(lVar5 + 0x10 + uVar7 * 4) = 0;
            *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)(lVar5 + 0x20 + uVar7 * 4);
            uVar7 = (ulonglong)(uVar6 - 2 & 3);
            uVar3 = uVar6 + 2;
            uVar6 = uVar6 + 4;
            lVar5 = (ulonglong)((uVar3 >> 2) * (uint)*(ushort *)(param_1 + 0x32)) +
                    *(longlong *)(param_1 + 8);
            *(undefined4 *)(lVar5 + 0x10 + uVar7 * 4) = 0;
            *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)(lVar5 + 0x20 + uVar7 * 4);
        } while (uVar8 < uVar2 - 3);
    }
    for (; uVar8 < uVar2; uVar8 = uVar8 + 1) {
        uVar7 = (ulonglong)(uVar8 & 3);
        lVar5 = (ulonglong)((uVar8 >> 2) * (uint)*(ushort *)(param_1 + 0x32)) +
                *(longlong *)(param_1 + 8);
        *(undefined4 *)(lVar5 + 0x10 + uVar7 * 4) = 0;
        *(undefined4 *)(lVar5 + uVar7 * 4) = *(undefined4 *)(lVar5 + 0x20 + uVar7 * 4);
    }
    return;
}



void FUN_1408f48e0(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    undefined4 uVar4;

    lVar1 = *(longlong *)(param_1 + 0x10);
    fVar2 = (float)FUN_1408fbfc0(*(float *)(lVar1 + (ulonglong)param_2 * 0x14) /
                                 *(float *)(*(longlong *)(param_1 + 8) + 0x14),0x3e2aaaab);
    fVar3 = (float)FUN_1408fc950((90.0 - *(float *)(lVar1 + 4 + (ulonglong)param_2 * 0x14)) * 3.141593
                                 * 0.005555556);
    fVar2 = fVar2 * fVar3 * 3.141593 * 0.25 + 0.7853982;
    uVar4 = FUN_1408fc950(fVar2);
    *param_3 = uVar4;
    uVar4 = FUN_1408fe3d0(fVar2);
    *param_4 = uVar4;
    return;
}



void FUN_1408f49a0(longlong param_1,ulonglong param_2,float *param_3,float *param_4,float *param_5,
                   float *param_6)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar4 = (90.0 - *(float *)(*(longlong *)(param_1 + 0x10) + 4 + (param_2 & 0xffffffff) * 0x14)) *
            3.141593 * 0.005555556;
    fVar1 = (float)FUN_1408fbfc0(*(float *)(*(longlong *)(param_1 + 0x10) +
                                            (param_2 & 0xffffffff) * 0x14) /
                                 *(float *)(*(longlong *)(param_1 + 8) + 0x14),0x3e2aaaab);
    fVar2 = (float)FUN_1408fc950(fVar4);
    fVar3 = fVar2 * fVar1 * 3.141593 * 0.25 + 0.7853982;
    fVar2 = (float)FUN_1408fc950(fVar3);
    fVar3 = (float)FUN_1408fe3d0(fVar3);
    fVar4 = (float)FUN_1408fe3d0(fVar4);
    fVar4 = fVar4 * fVar1 * 3.141593 * 0.25 + 0.7853982;
    fVar1 = (float)FUN_1408fe3d0(fVar4);
    fVar4 = (float)FUN_1408fc950(fVar4);
    *param_3 = fVar1 * fVar2;
    *param_4 = fVar1 * fVar3;
    *param_5 = fVar4 * fVar2;
    *param_6 = fVar4 * fVar3;
    return;
}



void FUN_1408f4b00(int *param_1)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    longlong lVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    undefined4 uVar16;
    float fVar17;
    ulonglong uVar6;

    uVar1 = param_1[0x31];
    if (*param_1 == 2) {
        uVar3 = 0;
        if (uVar1 != 0) {
            uVar16 = 0x3e2aaaab;
            fVar14 = 90.0;
            fVar13 = 3.141593;
            fVar15 = 0.005555556;
            fVar17 = 0.25;
            fVar8 = 0.7853982;
            uVar6 = uVar3;
            do {
                lVar7 = *(longlong *)(param_1 + 4);
                fVar9 = (float)FUN_1408fbfc0(*(float *)(lVar7 + uVar3) /
                                             *(float *)(*(longlong *)(param_1 + 2) + 0x14),uVar16);
                fVar11 = (float)FUN_1408fc950((fVar14 - *(float *)(lVar7 + 4 + uVar3)) * fVar13 * fVar15);
                uVar4 = (ulonglong)((uint)uVar6 & 3);
                lVar7 = (ulonglong)((int)(uVar6 >> 2) * (uint)*(ushort *)(param_1 + 0x32)) +
                        *(longlong *)(param_1 + 8);
                fVar9 = fVar9 * fVar11 * fVar13 * fVar17 + fVar8;
                uVar10 = FUN_1408fc950(fVar9);
                *(undefined4 *)(lVar7 + 0x70 + uVar4 * 4) = uVar10;
                uVar10 = FUN_1408fe3d0(fVar9);
                uVar5 = (uint)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                uVar3 = uVar3 + 0x14;
                *(undefined4 *)(lVar7 + 0x80 + uVar4 * 4) = uVar10;
            } while (uVar5 < uVar1);
        }
    }
    else if ((*param_1 == 4) && (uVar3 = 0, uVar1 != 0)) {
        fVar13 = 3.141593;
        fVar14 = 0.25;
        fVar17 = 90.0;
        uVar16 = 0x3e2aaaab;
        fVar15 = 0.7853982;
        uVar6 = uVar3;
        do {
            fVar12 = (fVar17 - *(float *)(uVar3 + 4 + *(longlong *)(param_1 + 4))) * fVar13 * 0.005555556;
            fVar8 = (float)FUN_1408fbfc0(*(float *)(uVar3 + *(longlong *)(param_1 + 4)) /
                                         *(float *)(*(longlong *)(param_1 + 2) + 0x14),uVar16);
            fVar9 = (float)FUN_1408fc950(fVar12);
            fVar11 = fVar9 * fVar8 * fVar13 * fVar14 + fVar15;
            fVar9 = (float)FUN_1408fc950(fVar11);
            fVar11 = (float)FUN_1408fe3d0(fVar11);
            fVar12 = (float)FUN_1408fe3d0(fVar12);
            fVar12 = fVar12 * fVar8 * fVar13 * fVar14 + fVar15;
            fVar8 = (float)FUN_1408fe3d0(fVar12);
            fVar12 = (float)FUN_1408fc950(fVar12);
            uVar2 = (ulonglong)((uint)uVar6 & 3);
            uVar4 = uVar6 >> 2;
            uVar5 = (uint)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar3 = uVar3 + 0x14;
            lVar7 = (ulonglong)((int)uVar4 * (uint)*(ushort *)(param_1 + 0x32)) +
                    *(longlong *)(param_1 + 8);
            *(float *)(lVar7 + 0x70 + uVar2 * 4) = fVar8 * fVar9;
            *(float *)(lVar7 + 0x80 + uVar2 * 4) = fVar8 * fVar11;
            *(float *)(lVar7 + 0x90 + uVar2 * 4) = fVar12 * fVar9;
            *(float *)(lVar7 + 0xa0 + uVar2 * 4) = fVar12 * fVar11;
        } while (uVar5 < uVar1);
    }
    return;
}



void FUN_1408f4df0(undefined8 param_1,float param_2,longlong param_3)

{
    float fVar1;
    float fVar2;

    fVar2 = 2.0;
    fVar1 = (float)FUN_1408fbfc0(0x40000000,
                                 (*(float *)(*(longlong *)(param_3 + 8) + 0x20) +
                                  *(float *)(param_3 + 0x54) + param_2) * 0.0008333334);
    if (fVar1 * 8.0 <= fVar2) {
        *(float *)(param_3 + 0x44) = fVar2;
        return;
    }
    *(float *)(param_3 + 0x44) = fVar1 * 8.0;
    return;
}



void FUN_1408f4e60(undefined8 param_1,float param_2,longlong param_3)

{
    param_2 = *(float *)(*(longlong *)(param_3 + 8) + 0x28) + *(float *)(param_3 + 0x5c) + param_2;
    if (1.0 <= param_2) {
        *(undefined4 *)(param_3 + 0x4c) = 0x3f800000;
        return;
    }
    if (param_2 <= 0.0) {
        *(undefined4 *)(param_3 + 0x4c) = 0;
        return;
    }
    *(float *)(param_3 + 0x4c) = param_2;
    return;
}



void FUN_1408f4ea0(undefined8 param_1,float param_2,longlong param_3)

{
    param_2 = *(float *)(*(longlong *)(param_3 + 8) + 0x2c) + *(float *)(param_3 + 0x60) + param_2;
    if (1.0 <= param_2) {
        *(undefined4 *)(param_3 + 0x50) = 0x3f800000;
        return;
    }
    if (param_2 <= 0.0) {
        *(undefined4 *)(param_3 + 0x50) = 0;
        return;
    }
    *(float *)(param_3 + 0x50) = param_2;
    return;
}



void FUN_1408f4ee0(undefined8 param_1,float param_2,float param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6,uint *param_7)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    float fVar7;

    uVar1 = *(uint *)(param_4 + 0xc4);
    uVar4 = 0;
    lVar5 = 0;
    if (3 < (int)uVar1) {
        fVar7 = 1.0 / (param_2 * param_3);
        uVar2 = (uVar1 - 4 >> 2) + 1;
        lVar3 = 0;
        uVar4 = uVar2 * 4;
        lVar5 = (ulonglong)uVar2 * 4;
        uVar6 = (ulonglong)uVar2;
        do {
            lVar3 = lVar3 + 0x80;
            *(undefined4 *)(*(longlong *)(param_4 + 0x18) + -0x7c + lVar3) =
                    *(undefined4 *)
                            (*(longlong *)(param_7 + 2) +
                             ((ulonglong)
                                      ((param_7[4] - 1) +
                                       (*param_7 -
                                        (int)(longlong)(fVar7 * *(float *)(*(longlong *)(param_4 + 0x18) + -0x80 + lVar3)))) %
                              (ulonglong)*param_7) * 4);
            *(undefined4 *)(*(longlong *)(param_4 + 0x18) + -0x5c + lVar3) =
                    *(undefined4 *)
                            (*(longlong *)(param_7 + 2) +
                             ((ulonglong)
                                      ((param_7[4] - 1) +
                                       (*param_7 -
                                        (int)(longlong)
                                                (fVar7 * *(float *)(&DAT_ffffffffffffffa0 + lVar3 + *(longlong *)(param_4 + 0x18))
                                                ))) % (ulonglong)*param_7) * 4);
            *(undefined4 *)(*(longlong *)(param_4 + 0x18) + -0x3c + lVar3) =
                    *(undefined4 *)
                            (*(longlong *)(param_7 + 2) +
                             ((ulonglong)
                                      ((param_7[4] - 1) +
                                       (*param_7 -
                                        (int)(longlong)(fVar7 * *(float *)(*(longlong *)(param_4 + 0x18) + -0x40 + lVar3)))) %
                              (ulonglong)*param_7) * 4);
            *(undefined4 *)(*(longlong *)(param_4 + 0x18) + -0x1c + lVar3) =
                    *(undefined4 *)
                            (*(longlong *)(param_7 + 2) +
                             ((ulonglong)
                                      ((param_7[4] - 1) +
                                       (*param_7 -
                                        (int)(longlong)(fVar7 * *(float *)(*(longlong *)(param_4 + 0x18) + -0x20 + lVar3)))) %
                              (ulonglong)*param_7) * 4);
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    if (uVar4 < uVar1) {
        uVar6 = (ulonglong)(uVar1 - uVar4);
        lVar5 = lVar5 << 5;
        do {
            *(undefined4 *)(lVar5 + 4 + *(longlong *)(param_4 + 0x18)) =
                    *(undefined4 *)
                            (*(longlong *)(param_7 + 2) +
                             ((ulonglong)
                                      ((param_7[4] - 1) +
                                       (*param_7 -
                                        (int)(longlong)
                                                ((1.0 / (param_2 * param_3)) * *(float *)(lVar5 + *(longlong *)(param_4 + 0x18))))
                                      ) % (ulonglong)*param_7) * 4);
            uVar6 = uVar6 - 1;
            lVar5 = lVar5 + 0x20;
        } while (uVar6 != 0);
    }
    return;
}



void FUN_1408f5290(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;

    uVar1 = *(uint *)(param_1 + 0xc4);
    lVar5 = 0;
    uVar8 = 0;
    fVar13 = 3.141593;
    fVar14 = 0.005555556;
    fVar12 = *(float *)(param_1 + 0x48) * 3.141593 * 0.005555556;
    fVar15 = *(float *)(*(longlong *)(param_1 + 8) + 0x14);
    fVar11 = fVar15 * 2.0;
    if (uVar1 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x18);
        uVar9 = (ulonglong)uVar1;
        lVar6 = lVar5;
        lVar7 = lVar5;
        do {
            lVar2 = *(longlong *)(param_1 + 0x10);
            fVar10 = (float)FUN_1408fc950(fVar12 - *(float *)(lVar2 + 4 + lVar6) * fVar13 * fVar14);
            *(float *)(lVar7 + lVar4) = fVar15 - fVar10 * *(float *)(lVar2 + lVar6);
            lVar4 = *(longlong *)(param_1 + 0x18);
            if (*(float *)(lVar7 + lVar4) <= fVar11) {
                fVar11 = *(float *)(lVar7 + lVar4);
            }
            lVar6 = lVar6 + 0x14;
            lVar7 = lVar7 + 0x20;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    lVar4 = lVar5;
    if (3 < (int)uVar1) {
        uVar3 = (uVar1 - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar3;
        uVar8 = uVar3 * 4;
        lVar4 = (ulonglong)uVar3 * 4;
        do {
            *(float *)(lVar5 + *(longlong *)(param_1 + 0x18)) =
                    *(float *)(lVar5 + *(longlong *)(param_1 + 0x18)) - fVar11;
            *(float *)(lVar5 + 0x20 + *(longlong *)(param_1 + 0x18)) =
                    *(float *)(lVar5 + 0x20 + *(longlong *)(param_1 + 0x18)) - fVar11;
            *(float *)(lVar5 + 0x40 + *(longlong *)(param_1 + 0x18)) =
                    *(float *)(lVar5 + 0x40 + *(longlong *)(param_1 + 0x18)) - fVar11;
            *(float *)(lVar5 + 0x60 + *(longlong *)(param_1 + 0x18)) =
                    *(float *)(lVar5 + 0x60 + *(longlong *)(param_1 + 0x18)) - fVar11;
            uVar9 = uVar9 - 1;
            lVar5 = lVar5 + 0x80;
        } while (uVar9 != 0);
    }
    if (uVar8 < uVar1) {
        uVar9 = (ulonglong)(uVar1 - uVar8);
        lVar5 = lVar4 << 5;
        do {
            *(float *)(lVar5 + *(longlong *)(param_1 + 0x18)) =
                    *(float *)(lVar5 + *(longlong *)(param_1 + 0x18)) - fVar11;
            uVar9 = uVar9 - 1;
            lVar5 = lVar5 + 0x20;
        } while (uVar9 != 0);
    }
    return;
}



float FUN_1408f5490(undefined4 param_1,float param_2,float param_3,float param_4,longlong param_5)

{
    longlong lVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 in_stack_00000028;
    undefined4 in_stack_00000030;

    lVar1 = *(longlong *)(param_5 + 8);
    fVar2 = (float)FUN_1408f5f80(param_1,in_stack_00000028,in_stack_00000030);
    if (*(float *)(lVar1 + 0xc) <= param_3 && param_3 != *(float *)(lVar1 + 0xc)) {
        fVar4 = (float)FUN_1408fe170(param_3 / *(float *)(lVar1 + 0xc));
        fVar4 = (float)FUN_1408fbfc0(0x41200000,
                                     fVar4 * 1.442695 * *(float *)(lVar1 + 0x10) * -6.0 * 0.05);
    }
    else {
        fVar4 = 1.0;
    }
    if ((DAT_140c6345c & 1) == 0) {
        DAT_140c6345c = DAT_140c6345c | 1;
        DAT_140c63458 = 48.0;
    }
    fVar3 = (float)FUN_1408fbfc0(param_4 / DAT_140c63458,
                                 (*(float *)(lVar1 + 0x18) + 1.0) * 48.0 * 0.0415241);
    return fVar3 * fVar4 * param_2 * fVar2;
}



void FUN_1408f55c0(float param_1,longlong param_2)

{
    float *pfVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    longlong lVar10;
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

    uVar2 = *(uint *)(param_2 + 0xc4);
    if (uVar2 == 0) {
        *(undefined *)(param_2 + 0xca) = 0;
        return;
    }
    lVar5 = 0;
    lVar10 = 0;
    fVar17 = 48.0;
    fVar18 = 0.0415241;
    fVar20 = -6.0;
    fVar19 = 1.442695;
    fVar14 = DAT_140c63458;
    fVar12 = 1.0;
    uVar6 = DAT_140c6345c;
    uVar8 = 0;
    do {
        lVar4 = *(longlong *)(param_2 + 0x18);
        lVar3 = *(longlong *)(param_2 + 8);
        fVar13 = *(float *)(lVar4 + 4 + lVar5);
        fVar11 = *(float *)(lVar10 + *(longlong *)(param_2 + 0x10));
        fVar15 = *(float *)(lVar3 + 0xc);
        param_1 = (float)FUN_1408f5f80(param_1,*(undefined4 *)(lVar4 + 8 + lVar5),
                                       *(undefined4 *)(lVar4 + 0xc + lVar5),param_2);
        fVar16 = fVar12;
        if (fVar15 < fVar11) {
            fVar11 = (float)FUN_1408fe170(fVar11 / fVar15);
            fVar16 = fVar12;
            fVar12 = (float)FUN_1408fbfc0(0x41200000,
                                          fVar11 * fVar19 * *(float *)(lVar3 + 0x10) * fVar20 * 0.05);
        }
        if ((uVar6 & 1) == 0) {
            uVar6 = uVar6 | 1;
            fVar14 = fVar17;
        }
        fVar13 = (float)FUN_1408fbfc0(fVar13 / fVar14,
                                      (*(float *)(lVar3 + 0x18) + fVar16) * fVar17 * fVar18);
        uVar7 = (ulonglong)(uVar8 & 3);
        uVar9 = uVar8 + 1;
        pfVar1 = (float *)(lVar4 + 0x10 + lVar5);
        lVar10 = lVar10 + 0x14;
        lVar5 = lVar5 + 0x20;
        param_1 = fVar13 * fVar12 * *pfVar1 * param_1;
        lVar4 = (ulonglong)((uVar8 >> 2) * (uint)*(ushort *)(param_2 + 200)) +
                *(longlong *)(param_2 + 0x20);
        *(float *)(lVar4 + 0x20 + uVar7 * 4) = param_1;
        *(float *)(lVar4 + uVar7 * 4) = param_1;
        *(undefined4 *)(lVar4 + 0x10 + uVar7 * 4) = 0;
        fVar12 = fVar16;
        uVar8 = uVar9;
    } while (uVar9 < uVar2);
    DAT_140c63458 = fVar14;
    DAT_140c6345c = uVar6;
    *(undefined *)(param_2 + 0xca) = 0;
    return;
}



void FUN_1408f5820(longlong param_1,ulonglong param_2)

{
    float *pfVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
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

    uVar2 = *(uint *)(param_1 + 0xc4);
    uVar5 = 0;
    fVar11 = (float)(param_2 & 0xffffffff);
    fVar16 = DAT_140c63458;
    uVar6 = DAT_140c6345c;
    if (uVar2 != 0) {
        fVar18 = 48.0;
        fVar20 = 0.0415241;
        fVar21 = 1.442695;
        fVar19 = 1.0 / fVar11;
        uVar8 = uVar5;
        uVar10 = uVar5;
        fVar13 = 1.0;
        do {
            lVar4 = *(longlong *)(param_1 + 0x18);
            lVar3 = *(longlong *)(param_1 + 8);
            fVar14 = *(float *)(lVar4 + 4 + uVar5);
            fVar12 = *(float *)(uVar8 + *(longlong *)(param_1 + 0x10));
            fVar15 = *(float *)(lVar3 + 0xc);
            fVar11 = (float)FUN_1408f5f80(fVar11,*(undefined4 *)(lVar4 + 8 + uVar5),
                                          *(undefined4 *)(lVar4 + 0xc + uVar5),param_1);
            fVar17 = fVar13;
            if (fVar15 < fVar12) {
                fVar12 = (float)FUN_1408fe170(fVar12 / fVar15);
                fVar17 = fVar13;
                fVar13 = (float)FUN_1408fbfc0(0x41200000,
                                              fVar12 * fVar21 * *(float *)(lVar3 + 0x10) * -6.0 * 0.05);
            }
            if ((uVar6 & 1) == 0) {
                uVar6 = uVar6 | 1;
                fVar16 = fVar18;
            }
            fVar14 = (float)FUN_1408fbfc0(fVar14 / fVar16,
                                          (*(float *)(lVar3 + 0x18) + fVar17) * fVar18 * fVar20);
            uVar7 = (ulonglong)((uint)uVar10 & 3);
            uVar9 = (uint)uVar10 + 1;
            pfVar1 = (float *)(lVar4 + 0x10 + uVar5);
            uVar8 = uVar8 + 0x14;
            uVar5 = uVar5 + 0x20;
            fVar11 = fVar14 * fVar13 * *pfVar1 * fVar11;
            lVar4 = (ulonglong)((int)(uVar10 >> 2) * (uint)*(ushort *)(param_1 + 200)) +
                    *(longlong *)(param_1 + 0x20);
            *(float *)(lVar4 + 0x20 + uVar7 * 4) = fVar11;
            fVar11 = (fVar11 - *(float *)(lVar4 + uVar7 * 4)) * fVar19;
            *(float *)(lVar4 + 0x10 + uVar7 * 4) = fVar11;
            uVar10 = (ulonglong)uVar9;
            fVar13 = fVar17;
        } while (uVar9 < uVar2);
    }
    DAT_140c6345c = uVar6;
    DAT_140c63458 = fVar16;
    return;
}



void FUN_1408f5bd0(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;

    fVar6 = *(float *)(*(longlong *)(param_3 + 8) + 0x30);
    if (*(uint *)(param_3 + 0xc4) != 0) {
        lVar2 = 0;
        uVar4 = (ulonglong)*(uint *)(param_3 + 0xc4);
        uVar7 = 0x40000000;
        lVar3 = lVar2;
        do {
            lVar1 = *(longlong *)(param_3 + 0x18);
            fVar5 = (float)FUN_1408fbfc0(uVar7,fVar6 + *(float *)(lVar3 + 0x14 + lVar1) + param_2);
            lVar2 = lVar2 + 0x14;
            *(float *)(lVar3 + 8 + lVar1) =
                    fVar5 * *(float *)(*(longlong *)(param_3 + 0x10) + -0xc + lVar2);
            uVar4 = uVar4 - 1;
            lVar3 = lVar3 + 0x20;
        } while (uVar4 != 0);
    }
    return;
}



void FUN_1408f5c90(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;

    fVar9 = *(float *)(*(longlong *)(param_3 + 8) + 0x34);
    if (*(uint *)(param_3 + 0xc4) != 0) {
        lVar2 = 0;
        uVar3 = (ulonglong)*(uint *)(param_3 + 0xc4);
        fVar7 = 0.1;
        fVar8 = 50.0;
        uVar10 = 0x40000000;
        lVar4 = lVar2;
        do {
            lVar1 = *(longlong *)(param_3 + 0x18);
            fVar5 = (float)FUN_1408fbfc0(uVar10,fVar9 + *(float *)(lVar2 + 0x18 + lVar1) + param_2);
            fVar5 = fVar5 * *(float *)(lVar4 + 0xc + *(longlong *)(param_3 + 0x10));
            fVar6 = fVar8;
            if ((fVar5 < fVar8) && (fVar6 = fVar5, fVar5 <= fVar7)) {
                fVar6 = fVar7;
            }
            *(float *)(lVar2 + 0xc + lVar1) = fVar6;
            lVar2 = lVar2 + 0x20;
            lVar4 = lVar4 + 0x14;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return;
}



void FUN_1408f5da0(longlong param_1)

{
    float *pfVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    fVar11 = *(float *)(*(longlong *)(param_1 + 8) + 0x38);
    fVar9 = (float)FUN_1408fbfc0(0x41200000);
    uVar2 = *(uint *)(param_1 + 0xc4);
    lVar4 = 0;
    uVar8 = 0;
    lVar5 = lVar4;
    if (3 < (int)uVar2) {
        uVar3 = (uVar2 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar3;
        uVar8 = uVar3 * 4;
        lVar5 = (ulonglong)uVar3 * 4;
        lVar6 = lVar4;
        do {
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x1c + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x3c + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x18) + 0x30 + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x24 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x5c + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x18) + 0x50 + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x38 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x7c + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x10) + 0x4c + lVar6);
            lVar4 = lVar4 + 0x80;
            lVar6 = lVar6 + 0x50;
            *(float *)(*(longlong *)(param_1 + 0x18) + -0x10 + lVar4) = fVar10 * *pfVar1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    if (uVar8 < uVar2) {
        lVar4 = lVar5 * 0x14;
        lVar5 = lVar5 << 5;
        uVar7 = (ulonglong)(uVar2 - uVar8);
        do {
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x18) + 0x1c + lVar5) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar4);
            lVar5 = lVar5 + 0x20;
            lVar4 = lVar4 + 0x14;
            *(float *)(*(longlong *)(param_1 + 0x18) + -0x10 + lVar5) = fVar10 * *pfVar1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    return;
}



float FUN_1408f5f80(undefined8 param_1,float param_2,float param_3,longlong param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;

    fVar3 = SQRT(param_2);
    param_2 = param_2 / param_3;
    fVar1 = (float)FUN_1408fe170(param_2);
    fVar1 = fVar1 * 1.442695;
    fVar2 = (float)FUN_1408fc7f0(((param_2 * 2.0 * 3.141593) /
                                  (float)(ulonglong)*(uint *)(param_4 + 0xc0)) * -0.5);
    if (0.9992 <= fVar2) {
        fVar2 = 0.9992;
    }
    fVar1 = (float)FUN_1408fc7f0(fVar1 * -0.023 * fVar1 + fVar1 * -0.1648 + 3.9543);
    return (fVar1 + 0.7) * fVar3 * (1.0 - fVar2 * fVar2) * 0.5;
}



void FUN_1408f6070(longlong param_1,longlong *param_2,float *param_3)

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
    float *pfVar14;
    float *pfVar15;
    float *pfVar16;
    longlong lVar17;
    float *pfVar18;
    undefined (*pauVar19) [16];
    uint uVar20;
    uint uVar21;
    ulonglong uVar22;
    float *pfVar23;
    longlong lVar24;
    ulonglong uVar25;
    uint uVar26;
    ulonglong uVar27;
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

    uVar21 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar27 = 0;
    uVar26 = *(int *)(param_1 + 0xc4) + 3;
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            uVar20 = 0x400;
            if (uVar21 < 0x400) {
                uVar20 = uVar21;
            }
            FUN_1408f6890(param_1 + 0x68,param_3,uVar20);
            FUN_1407e4830(param_3 + 0x400,0);
            if (uVar26 >> 2 != 0) {
                lVar24 = 0;
                uVar25 = (ulonglong)(uVar26 >> 2);
                lVar17 = 0;
                do {
                    lVar1 = *(longlong *)(param_1 + 0x20);
                    pfVar18 = (float *)(lVar24 + lVar1);
                    fVar32 = *pfVar18;
                    fVar33 = pfVar18[1];
                    fVar34 = pfVar18[2];
                    fVar35 = pfVar18[3];
                    pfVar18 = (float *)(lVar24 + 0x10 + lVar1);
                    fVar2 = *pfVar18;
                    fVar3 = pfVar18[1];
                    fVar4 = pfVar18[2];
                    fVar5 = pfVar18[3];
                    pfVar18 = (float *)(lVar24 + 0x30 + lVar1);
                    fVar6 = *pfVar18;
                    fVar7 = pfVar18[1];
                    fVar8 = pfVar18[2];
                    fVar9 = pfVar18[3];
                    pfVar18 = (float *)(lVar24 + 0x40 + lVar1);
                    fVar10 = *pfVar18;
                    fVar11 = pfVar18[1];
                    fVar12 = pfVar18[2];
                    fVar13 = pfVar18[3];
                    pfVar18 = (float *)(lVar24 + 0x50 + lVar1);
                    fVar28 = *pfVar18;
                    fVar29 = pfVar18[1];
                    fVar30 = pfVar18[2];
                    fVar31 = pfVar18[3];
                    pfVar18 = (float *)(lVar24 + 0x60 + lVar1);
                    fVar37 = *pfVar18;
                    fVar39 = pfVar18[1];
                    fVar41 = pfVar18[2];
                    fVar43 = pfVar18[3];
                    if (uVar20 != 0) {
                        uVar22 = (ulonglong)uVar20;
                        pfVar18 = param_3;
                        pauVar19 = (undefined (*) [16])(param_3 + 0x400);
                        fVar36 = fVar37;
                        fVar38 = fVar39;
                        fVar40 = fVar41;
                        fVar42 = fVar43;
                        do {
                            fVar43 = fVar31;
                            fVar41 = fVar30;
                            fVar39 = fVar29;
                            fVar37 = fVar28;
                            fVar31 = *pfVar18;
                            fVar32 = fVar32 + fVar2;
                            fVar33 = fVar33 + fVar3;
                            fVar34 = fVar34 + fVar4;
                            fVar35 = fVar35 + fVar5;
                            pfVar18 = pfVar18 + 1;
                            fVar28 = fVar37 * fVar6 + fVar31 + fVar36 * fVar10;
                            fVar29 = fVar39 * fVar7 + fVar31 + fVar38 * fVar11;
                            fVar30 = fVar41 * fVar8 + fVar31 + fVar40 * fVar12;
                            fVar31 = fVar43 * fVar9 + fVar31 + fVar42 * fVar13;
                            *pauVar19 = CONCAT412((fVar31 - fVar42) * fVar35 +
                                                  *(float *)((longlong)*pauVar19 + 0xc),
                                                  CONCAT48((fVar30 - fVar40) * fVar34 +
                                                           *(float *)((longlong)*pauVar19 + 8),
                                                           CONCAT44((fVar29 - fVar38) * fVar33 +
                                                                    *(float *)((longlong)*pauVar19 + 4),
                                                                    (fVar28 - fVar36) * fVar32 +
                                                                    *(float *)*pauVar19)));
                            uVar22 = uVar22 - 1;
                            pauVar19 = pauVar19[1];
                            fVar36 = fVar37;
                            fVar38 = fVar39;
                            fVar40 = fVar41;
                            fVar42 = fVar43;
                        } while (uVar22 != 0);
                    }
                    *(undefined (*) [16])(lVar17 + 0x50 + lVar1) =
                            CONCAT412(fVar31,CONCAT48(fVar30,CONCAT44(fVar29,fVar28)));
                    lVar24 = lVar24 + 0x70;
                    *(undefined (*) [16])(lVar17 + 0x60 + *(longlong *)(param_1 + 0x20)) =
                            CONCAT412(fVar43,CONCAT48(fVar41,CONCAT44(fVar39,fVar37)));
                    *(undefined (*) [16])(lVar17 + *(longlong *)(param_1 + 0x20)) =
                            CONCAT412(fVar35,CONCAT48(fVar34,CONCAT44(fVar33,fVar32)));
                    uVar25 = uVar25 - 1;
                    lVar17 = lVar17 + 0x70;
                } while (uVar25 != 0);
            }
            pfVar18 = param_3 + 0x400;
            if (uVar20 != 0) {
                uVar25 = (ulonglong)uVar20;
                pfVar23 = (float *)(*param_2 + uVar27 * 4);
                do {
                    fVar32 = *pfVar18;
                    pfVar14 = pfVar18 + 1;
                    pfVar15 = pfVar18 + 2;
                    pfVar16 = pfVar18 + 3;
                    pfVar18 = pfVar18 + 4;
                    *pfVar23 = *pfVar14 + *pfVar16 + fVar32 + *pfVar15;
                    uVar25 = uVar25 - 1;
                    pfVar23 = pfVar23 + 1;
                } while (uVar25 != 0);
            }
            uVar27 = (ulonglong)((int)uVar27 + uVar20);
            uVar21 = uVar21 - uVar20;
        } while (uVar21 != 0);
    }
    return;
}



void FUN_1408f6260(longlong param_1,longlong *param_2,float *param_3)

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
    float *pfVar22;
    float *pfVar23;
    float *pfVar24;
    longlong lVar25;
    float *pfVar26;
    undefined (*pauVar27) [16];
    float *pfVar28;
    uint uVar29;
    uint uVar30;
    longlong lVar31;
    ulonglong uVar32;
    ulonglong uVar33;
    uint uVar34;
    ulonglong uVar35;
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

    uVar30 = (uint)*(ushort *)((longlong)param_2 + 0x12);
    uVar35 = 0;
    uVar34 = *(int *)(param_1 + 0xc4) + 3;
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            uVar29 = 0x400;
            if (uVar30 < 0x400) {
                uVar29 = uVar30;
            }
            FUN_1408f6890(param_1 + 0x68,param_3,uVar29);
            FUN_1407e4830(param_3 + 0x400);
            if (uVar34 >> 2 != 0) {
                lVar31 = 0;
                uVar33 = (ulonglong)(uVar34 >> 2);
                lVar25 = 0;
                do {
                    lVar1 = *(longlong *)(param_1 + 0x20);
                    pfVar26 = (float *)(lVar31 + lVar1);
                    fVar44 = *pfVar26;
                    fVar45 = pfVar26[1];
                    fVar46 = pfVar26[2];
                    fVar47 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x10 + lVar1);
                    fVar2 = *pfVar26;
                    fVar3 = pfVar26[1];
                    fVar4 = pfVar26[2];
                    fVar5 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x30 + lVar1);
                    fVar6 = *pfVar26;
                    fVar7 = pfVar26[1];
                    fVar8 = pfVar26[2];
                    fVar9 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x40 + lVar1);
                    fVar10 = *pfVar26;
                    fVar11 = pfVar26[1];
                    fVar12 = pfVar26[2];
                    fVar13 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x50 + lVar1);
                    fVar36 = *pfVar26;
                    fVar38 = pfVar26[1];
                    fVar40 = pfVar26[2];
                    fVar42 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x60 + lVar1);
                    fVar49 = *pfVar26;
                    fVar51 = pfVar26[1];
                    fVar53 = pfVar26[2];
                    fVar55 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x70 + lVar1);
                    fVar14 = *pfVar26;
                    fVar15 = pfVar26[1];
                    fVar16 = pfVar26[2];
                    fVar17 = pfVar26[3];
                    pfVar26 = (float *)(lVar31 + 0x80 + lVar1);
                    fVar18 = *pfVar26;
                    fVar19 = pfVar26[1];
                    fVar20 = pfVar26[2];
                    fVar21 = pfVar26[3];
                    if (uVar29 != 0) {
                        uVar32 = (ulonglong)uVar29;
                        pauVar27 = (undefined (*) [16])(param_3 + 0x400);
                        pfVar26 = param_3;
                        fVar48 = fVar49;
                        fVar50 = fVar51;
                        fVar52 = fVar53;
                        fVar54 = fVar55;
                        do {
                            fVar55 = fVar42;
                            fVar53 = fVar40;
                            fVar51 = fVar38;
                            fVar49 = fVar36;
                            fVar42 = *pfVar26;
                            fVar44 = fVar44 + fVar2;
                            fVar45 = fVar45 + fVar3;
                            fVar46 = fVar46 + fVar4;
                            fVar47 = fVar47 + fVar5;
                            pfVar26 = pfVar26 + 1;
                            fVar36 = fVar49 * fVar6 + fVar42 + fVar48 * fVar10;
                            fVar38 = fVar51 * fVar7 + fVar42 + fVar50 * fVar11;
                            fVar40 = fVar53 * fVar8 + fVar42 + fVar52 * fVar12;
                            fVar42 = fVar55 * fVar9 + fVar42 + fVar54 * fVar13;
                            fVar37 = (fVar36 - fVar48) * fVar44;
                            fVar39 = (fVar38 - fVar50) * fVar45;
                            fVar41 = (fVar40 - fVar52) * fVar46;
                            fVar43 = (fVar42 - fVar54) * fVar47;
                            fVar48 = *(float *)pauVar27[1];
                            fVar50 = *(float *)((longlong)pauVar27[1] + 4);
                            fVar52 = *(float *)((longlong)pauVar27[1] + 8);
                            fVar54 = *(float *)((longlong)pauVar27[1] + 0xc);
                            *pauVar27 = CONCAT412(fVar43 * fVar17 + *(float *)((longlong)*pauVar27 + 0xc),
                                                  CONCAT48(fVar41 * fVar16 + *(float *)((longlong)*pauVar27 + 8),
                                                           CONCAT44(fVar39 * fVar15 +
                                                                    *(float *)((longlong)*pauVar27 + 4),
                                                                    fVar37 * fVar14 + *(float *)*pauVar27)));
                            pauVar27[1] = CONCAT412(fVar43 * fVar21 + fVar54,
                                                    CONCAT48(fVar41 * fVar20 + fVar52,
                                                             CONCAT44(fVar39 * fVar19 + fVar50,
                                                                      fVar37 * fVar18 + fVar48)));
                            uVar32 = uVar32 - 1;
                            pauVar27 = pauVar27[2];
                            fVar48 = fVar49;
                            fVar50 = fVar51;
                            fVar52 = fVar53;
                            fVar54 = fVar55;
                        } while (uVar32 != 0);
                    }
                    *(undefined (*) [16])(lVar25 + 0x50 + lVar1) =
                            CONCAT412(fVar42,CONCAT48(fVar40,CONCAT44(fVar38,fVar36)));
                    lVar31 = lVar31 + 0x90;
                    *(undefined (*) [16])(lVar25 + 0x60 + *(longlong *)(param_1 + 0x20)) =
                            CONCAT412(fVar55,CONCAT48(fVar53,CONCAT44(fVar51,fVar49)));
                    *(undefined (*) [16])(lVar25 + *(longlong *)(param_1 + 0x20)) =
                            CONCAT412(fVar47,CONCAT48(fVar46,CONCAT44(fVar45,fVar44)));
                    uVar33 = uVar33 - 1;
                    lVar25 = lVar25 + 0x90;
                } while (uVar33 != 0);
            }
            lVar25 = *param_2;
            pfVar26 = param_3 + 0x400;
            if (uVar29 != 0) {
                uVar33 = (ulonglong)uVar29;
                pfVar28 = (float *)(lVar25 + uVar35 * 4);
                do {
                    fVar44 = *pfVar26;
                    pfVar22 = pfVar26 + 1;
                    pfVar23 = pfVar26 + 2;
                    pfVar24 = pfVar26 + 3;
                    pfVar26 = pfVar26 + 8;
                    *pfVar28 = *pfVar22 + *pfVar24 + fVar44 + *pfVar23;
                    uVar33 = uVar33 - 1;
                    pfVar28 = pfVar28 + 1;
                } while (uVar33 != 0);
            }
            pfVar26 = param_3 + 0x404;
            if (uVar29 != 0) {
                uVar33 = (ulonglong)uVar29;
                pfVar28 = (float *)(lVar25 + (*(ushort *)(param_2 + 2) + uVar35) * 4);
                do {
                    fVar44 = *pfVar26;
                    pfVar22 = pfVar26 + 1;
                    pfVar23 = pfVar26 + 2;
                    pfVar24 = pfVar26 + 3;
                    pfVar26 = pfVar26 + 8;
                    *pfVar28 = *pfVar22 + *pfVar24 + fVar44 + *pfVar23;
                    uVar33 = uVar33 - 1;
                    pfVar28 = pfVar28 + 1;
                } while (uVar33 != 0);
            }
            uVar35 = (ulonglong)((int)uVar35 + uVar29);
            uVar30 = uVar30 - uVar29;
        } while (uVar30 != 0);
    }
    return;
}



void FUN_1408f64d0(longlong param_1,longlong *param_2,float *param_3)

{
    ushort uVar1;
    longlong lVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    longlong lVar6;
    undefined (*pauVar7) [16];
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    longlong lVar14;
    uint uVar15;
    float *pfVar16;
    longlong lVar17;
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
    uint local_res8;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    float local_158;
    float fStack340;
    float fStack336;
    float fStack332;
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

    uVar13 = *(int *)(param_1 + 0xc4) + 3U >> 2;
    local_res8 = 0;
    for (uVar12 = (uint)*(ushort *)((longlong)param_2 + 0x12); uVar12 != 0; uVar12 = uVar12 - uVar15)
    {
        uVar15 = 0x400;
        if (uVar12 < 0x400) {
            uVar15 = uVar12;
        }
        FUN_1408f6890(param_1 + 0x68,param_3,uVar15);
        FUN_1407e4830(param_3 + 0x400,0,0x10000);
        if (uVar13 != 0) {
            lVar14 = 0;
            uVar18 = (ulonglong)uVar13;
            lVar17 = 0;
            do {
                lVar2 = *(longlong *)(param_1 + 0x20);
                pfVar9 = (float *)(lVar14 + lVar2);
                if ((((uint)pfVar9 | (uint)&local_168) & 0xf) == 0) {
                    lVar6 = 1;
                    pfVar16 = &local_168;
                    do {
                        pfVar10 = pfVar9;
                        pfVar8 = pfVar16;
                        fVar27 = pfVar10[1];
                        fVar28 = pfVar10[2];
                        fVar29 = pfVar10[3];
                        fVar30 = pfVar10[4];
                        fVar19 = pfVar10[5];
                        fVar21 = pfVar10[6];
                        fVar23 = pfVar10[7];
                        *pfVar8 = *pfVar10;
                        pfVar8[1] = fVar27;
                        pfVar8[2] = fVar28;
                        pfVar8[3] = fVar29;
                        fVar27 = pfVar10[8];
                        fVar28 = pfVar10[9];
                        fVar29 = pfVar10[10];
                        fVar25 = pfVar10[0xb];
                        pfVar8[4] = fVar30;
                        pfVar8[5] = fVar19;
                        pfVar8[6] = fVar21;
                        pfVar8[7] = fVar23;
                        fVar30 = pfVar10[0xc];
                        fVar19 = pfVar10[0xd];
                        fVar21 = pfVar10[0xe];
                        fVar23 = pfVar10[0xf];
                        pfVar8[8] = fVar27;
                        pfVar8[9] = fVar28;
                        pfVar8[10] = fVar29;
                        pfVar8[0xb] = fVar25;
                        fVar27 = pfVar10[0x10];
                        fVar28 = pfVar10[0x11];
                        fVar29 = pfVar10[0x12];
                        fVar25 = pfVar10[0x13];
                        pfVar8[0xc] = fVar30;
                        pfVar8[0xd] = fVar19;
                        pfVar8[0xe] = fVar21;
                        pfVar8[0xf] = fVar23;
                        fVar30 = pfVar10[0x14];
                        fVar19 = pfVar10[0x15];
                        fVar21 = pfVar10[0x16];
                        fVar23 = pfVar10[0x17];
                        pfVar8[0x10] = fVar27;
                        pfVar8[0x11] = fVar28;
                        pfVar8[0x12] = fVar29;
                        pfVar8[0x13] = fVar25;
                        fVar27 = pfVar10[0x18];
                        fVar28 = pfVar10[0x19];
                        fVar29 = pfVar10[0x1a];
                        fVar25 = pfVar10[0x1b];
                        pfVar8[0x14] = fVar30;
                        pfVar8[0x15] = fVar19;
                        pfVar8[0x16] = fVar21;
                        pfVar8[0x17] = fVar23;
                        fVar30 = pfVar10[0x1c];
                        fVar19 = pfVar10[0x1d];
                        fVar21 = pfVar10[0x1e];
                        fVar23 = pfVar10[0x1f];
                        pfVar8[0x18] = fVar27;
                        pfVar8[0x19] = fVar28;
                        pfVar8[0x1a] = fVar29;
                        pfVar8[0x1b] = fVar25;
                        pfVar8[0x1c] = fVar30;
                        pfVar8[0x1d] = fVar19;
                        pfVar8[0x1e] = fVar21;
                        pfVar8[0x1f] = fVar23;
                        lVar6 = lVar6 + -1;
                        pfVar16 = pfVar8 + 0x20;
                        pfVar9 = pfVar10 + 0x20;
                    } while (lVar6 != 0);
                    fVar27 = pfVar10[0x21];
                    fVar28 = pfVar10[0x22];
                    fVar29 = pfVar10[0x23];
                    fVar19 = pfVar10[0x24];
                    fVar21 = pfVar10[0x25];
                    fVar23 = pfVar10[0x26];
                    fVar25 = pfVar10[0x27];
                    pfVar8[0x20] = pfVar10[0x20];
                    pfVar8[0x21] = fVar27;
                    pfVar8[0x22] = fVar28;
                    pfVar8[0x23] = fVar29;
                    fVar27 = pfVar10[0x28];
                    fVar28 = pfVar10[0x29];
                    fVar29 = pfVar10[0x2a];
                    fVar30 = pfVar10[0x2b];
                    pfVar8[0x24] = fVar19;
                    pfVar8[0x25] = fVar21;
                    pfVar8[0x26] = fVar23;
                    pfVar8[0x27] = fVar25;
                    pfVar8[0x28] = fVar27;
                    pfVar8[0x29] = fVar28;
                    pfVar8[0x2a] = fVar29;
                    pfVar8[0x2b] = fVar30;
                }
                else {
                    FUN_1407db590(&local_168,pfVar9,0xb0);
                }
                fVar27 = local_168;
                fVar28 = fStack356;
                fVar29 = fStack352;
                fVar30 = fStack348;
                fVar19 = local_118;
                fVar21 = fStack276;
                fVar23 = fStack272;
                fVar25 = fStack268;
                fVar32 = local_108;
                fVar34 = fStack260;
                fVar36 = fStack256;
                fVar38 = fStack252;
                if (uVar15 != 0) {
                    uVar11 = (ulonglong)uVar15;
                    pauVar7 = (undefined (*) [16])(param_3 + 0x408);
                    pfVar9 = param_3;
                    fVar31 = local_108;
                    fVar33 = fStack260;
                    fVar35 = fStack256;
                    fVar37 = fStack252;
                    do {
                        fVar38 = fVar25;
                        fVar36 = fVar23;
                        fVar34 = fVar21;
                        fVar32 = fVar19;
                        fVar25 = *pfVar9;
                        fVar27 = fVar27 + local_158;
                        fVar28 = fVar28 + fStack340;
                        fVar29 = fVar29 + fStack336;
                        fVar30 = fVar30 + fStack332;
                        pfVar9 = pfVar9 + 1;
                        fVar19 = fVar32 * local_138 + fVar25 + fVar31 * local_128;
                        fVar21 = fVar34 * fStack308 + fVar25 + fVar33 * fStack292;
                        fVar23 = fVar36 * fStack304 + fVar25 + fVar35 * fStack288;
                        fVar25 = fVar38 * fStack300 + fVar25 + fVar37 * fStack284;
                        fVar20 = (fVar19 - fVar31) * fVar27;
                        fVar22 = (fVar21 - fVar33) * fVar28;
                        fVar24 = (fVar23 - fVar35) * fVar29;
                        fVar26 = (fVar25 - fVar37) * fVar30;
                        fVar31 = *(float *)pauVar7[-1];
                        fVar33 = *(float *)((longlong)pauVar7[-1] + 4);
                        fVar35 = *(float *)((longlong)pauVar7[-1] + 8);
                        fVar37 = *(float *)((longlong)pauVar7[-1] + 0xc);
                        pauVar7[-2] = CONCAT412(fVar26 * fStack236 + *(float *)((longlong)pauVar7[-2] + 0xc),
                                                CONCAT48(fVar24 * fStack240 +
                                                         *(float *)((longlong)pauVar7[-2] + 8),
                                                         CONCAT44(fVar22 * fStack244 +
                                                                  *(float *)((longlong)pauVar7[-2] + 4),
                                                                  fVar20 * local_f8 + *(float *)pauVar7[-2])));
                        pauVar7[-1] = CONCAT412(fVar26 * fStack220 + fVar37,
                                                CONCAT48(fVar24 * fStack224 + fVar35,
                                                         CONCAT44(fVar22 * fStack228 + fVar33,
                                                                  fVar20 * local_e8 + fVar31)));
                        fVar31 = *(float *)pauVar7[1];
                        fVar33 = *(float *)((longlong)pauVar7[1] + 4);
                        fVar35 = *(float *)((longlong)pauVar7[1] + 8);
                        fVar37 = *(float *)((longlong)pauVar7[1] + 0xc);
                        *pauVar7 = CONCAT412(fVar26 * fStack204 + *(float *)((longlong)*pauVar7 + 0xc),
                                             CONCAT48(fVar24 * fStack208 + *(float *)((longlong)*pauVar7 + 8),
                                                      CONCAT44(fVar22 * fStack212 +
                                                               *(float *)((longlong)*pauVar7 + 4),
                                                               fVar20 * local_d8 + *(float *)*pauVar7)));
                        pauVar7[1] = CONCAT412(fVar26 * fStack188 + fVar37,
                                               CONCAT48(fVar24 * fStack192 + fVar35,
                                                        CONCAT44(fVar22 * fStack196 + fVar33,
                                                                 fVar20 * local_c8 + fVar31)));
                        uVar11 = uVar11 - 1;
                        pauVar7 = pauVar7[4];
                        fVar31 = fVar32;
                        fVar33 = fVar34;
                        fVar35 = fVar36;
                        fVar37 = fVar38;
                    } while (uVar11 != 0);
                }
                *(undefined (*) [16])(lVar17 + 0x50 + lVar2) =
                        CONCAT412(fVar25,CONCAT48(fVar23,CONCAT44(fVar21,fVar19)));
                lVar14 = lVar14 + 0xb0;
                *(undefined (*) [16])(lVar17 + 0x60 + *(longlong *)(param_1 + 0x20)) =
                        CONCAT412(fVar38,CONCAT48(fVar36,CONCAT44(fVar34,fVar32)));
                *(undefined (*) [16])(lVar17 + *(longlong *)(param_1 + 0x20)) =
                        CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(fVar28,fVar27)));
                uVar18 = uVar18 - 1;
                lVar17 = lVar17 + 0xb0;
            } while (uVar18 != 0);
        }
        uVar1 = *(ushort *)(param_2 + 2);
        pfVar16 = param_3 + 0x400;
        lVar17 = 4;
        pfVar9 = (float *)(*param_2 + (ulonglong)local_res8 * 4);
        do {
            if (uVar15 != 0) {
                uVar18 = (ulonglong)uVar15;
                pfVar8 = pfVar16;
                pfVar10 = pfVar9;
                do {
                    fVar27 = *pfVar8;
                    pfVar3 = pfVar8 + 1;
                    pfVar4 = pfVar8 + 2;
                    pfVar5 = pfVar8 + 3;
                    pfVar8 = pfVar8 + 0x10;
                    *pfVar10 = *pfVar3 + *pfVar5 + fVar27 + *pfVar4;
                    uVar18 = uVar18 - 1;
                    pfVar10 = pfVar10 + 1;
                } while (uVar18 != 0);
            }
            pfVar16 = pfVar16 + 4;
            pfVar9 = pfVar9 + uVar1;
            lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        local_res8 = local_res8 + uVar15;
    }
    return;
}



longlong FUN_1408f6840(longlong param_1)

{
    FUN_1408f6b60();
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return param_1;
}



void FUN_1408f6890(longlong param_1,float *param_2,uint param_3)

{
    uint uVar1;
    float *pfVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    float *pfVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    FUN_1408f6b80(param_1,param_2,param_3 * 2);
    uVar7 = *(uint *)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 0x14);
    local_58 = *(undefined8 *)(param_1 + 0x18);
    pfVar2 = param_2 + param_3;
    local_50 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    local_40 = *(undefined8 *)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x38);
    local_30 = *(undefined8 *)(param_1 + 0x40);
    local_28 = *(undefined8 *)(param_1 + 0x48);
    local_20 = *(undefined8 *)(param_1 + 0x50);
    if (param_2 < pfVar2) {
        lVar4 = (longlong)pfVar2 + (3 - (longlong)param_2);
        pfVar8 = param_2;
        pfVar11 = pfVar2;
        if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
            pfVar9 = param_2;
            pfVar10 = pfVar2;
            do {
                fVar12 = *pfVar10;
                pfVar8 = pfVar9 + 4;
                uVar5 = uVar7 + 1 & 0xffff;
                pfVar11 = pfVar10 + 4;
                uVar1 = uVar5 + 1;
                uVar6 = uVar1 & 0xffff;
                fVar13 = *(float *)((longlong)&local_58 +
                                               (longlong)
                                               *(int *)(&DAT_1409c61b0 +
                                                        (ulonglong)((-uVar5 & uVar7 + 1 & 0xffff) * 0x77cb531 >> 0x1b) *
                                                        4) * 4);
                *(float *)((longlong)&local_58 +
                                      (longlong)
                                      *(int *)(&DAT_1409c61b0 +
                                               (ulonglong)((-uVar5 & uVar7 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4) * 4) =
                        fVar12;
                fVar12 = (fVar14 - fVar13) + fVar12;
                iVar3 = *(int *)(&DAT_1409c61b0 +
                                 (ulonglong)((-uVar6 & uVar1 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
                uVar6 = uVar6 + 1;
                uVar7 = uVar6 & 0xffff;
                fVar14 = *(float *)((longlong)&local_58 + (longlong)iVar3 * 4);
                *pfVar9 = (fVar12 + *pfVar9) * 0.1470588;
                fVar13 = pfVar10[1];
                *(float *)((longlong)&local_58 + (longlong)iVar3 * 4) = fVar13;
                fVar13 = (fVar12 - fVar14) + fVar13;
                iVar3 = *(int *)(&DAT_1409c61b0 +
                                 (ulonglong)((-uVar7 & uVar6 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
                uVar7 = uVar7 + 1 & 0xffff;
                fVar14 = *(float *)((longlong)&local_58 + (longlong)iVar3 * 4);
                pfVar9[1] = (fVar13 + pfVar9[1]) * 0.1470588;
                fVar12 = pfVar10[2];
                *(float *)((longlong)&local_58 + (longlong)iVar3 * 4) = fVar12;
                fVar12 = (fVar13 - fVar14) + fVar12;
                iVar3 = *(int *)(&DAT_1409c61b0 + (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4);
                fVar14 = *(float *)((longlong)&local_58 + (longlong)iVar3 * 4);
                pfVar9[2] = (fVar12 + pfVar9[2]) * 0.1470588;
                fVar14 = (fVar12 - fVar14) + pfVar10[3];
                *(float *)((longlong)&local_58 + (longlong)iVar3 * 4) = pfVar10[3];
                pfVar9[3] = (fVar14 + pfVar9[3]) * 0.1470588;
                pfVar9 = pfVar8;
                pfVar10 = pfVar11;
            } while ((longlong)pfVar8 < (longlong)(pfVar2 + -3));
        }
        if (pfVar8 < pfVar2) {
            pfVar9 = pfVar8;
            do {
                fVar12 = *(float *)(((longlong)pfVar11 - (longlong)pfVar8) + (longlong)pfVar9);
                pfVar10 = pfVar9 + 1;
                uVar7 = uVar7 + 1 & 0xffff;
                fVar13 = *(float *)((longlong)&local_58 +
                                               (longlong)
                                               *(int *)(&DAT_1409c61b0 +
                                                        (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4) * 4);
                *(float *)((longlong)&local_58 +
                                      (longlong)
                                      *(int *)(&DAT_1409c61b0 + (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4) *
                                      4) = fVar12;
                fVar14 = (fVar14 - fVar13) + fVar12;
                *pfVar9 = (fVar14 + *pfVar9) * 0.1470588;
                pfVar9 = pfVar10;
            } while (pfVar10 < pfVar2);
        }
    }
    FUN_1408aad50(param_1 + 4,param_2,(ulonglong)param_3);
    *(uint *)(param_1 + 0x10) = uVar7;
    *(float *)(param_1 + 0x14) = fVar14;
    *(undefined8 *)(param_1 + 0x18) = local_58;
    *(undefined8 *)(param_1 + 0x20) = local_50;
    *(undefined8 *)(param_1 + 0x28) = local_48;
    *(undefined8 *)(param_1 + 0x30) = local_40;
    *(undefined8 *)(param_1 + 0x38) = local_38;
    *(undefined8 *)(param_1 + 0x40) = local_30;
    *(undefined8 *)(param_1 + 0x48) = local_28;
    *(undefined8 *)(param_1 + 0x50) = local_20;
    return;
}



int * FUN_1408f6b60(int *param_1)

{
    int iVar1;

    iVar1 = rand();
    *param_1 = iVar1;
    return param_1;
}



void FUN_1408f6b80(int *param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    float *pfVar6;

    fVar2 = DAT_140c1aa28;
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    if (param_2 < pfVar1) {
        lVar5 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2) {
            pfVar6 = param_2;
            do {
                param_2 = pfVar6 + 4;
                iVar3 = *param_1 * 0x343fd + 0x269ec3;
                iVar4 = iVar3 * 0x343fd + 0x269ec3;
                *pfVar6 = (float)iVar3 * fVar2;
                iVar3 = iVar4 * 0x343fd + 0x269ec3;
                pfVar6[1] = (float)iVar4 * fVar2;
                iVar4 = iVar3 * 0x343fd + 0x269ec3;
                *param_1 = iVar4;
                pfVar6[2] = (float)iVar3 * fVar2;
                pfVar6[3] = (float)iVar4 * fVar2;
                pfVar6 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            iVar3 = *param_1 * 0x343fd + 0x269ec3;
            *param_1 = iVar3;
            *param_2 = (float)iVar3 * fVar2;
        }
    }
    return;
}



undefined8 * FUN_1408f6c80(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x270);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409c6270;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        FUN_1408f92b0(puVar1 + 0xc);
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408f6cf0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c6270;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_1408f92b0();
    param_1[10] = 0;
    param_1[0xb] = 0;
    return param_1;
}



void FUN_1408f6d50(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409c6270;
    FUN_1408f9350();
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



undefined8
FUN_1408f6d90(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
              undefined8 param_5)

{
    undefined4 uVar1;
    undefined8 uVar2;
    ushort uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;

    *(undefined8 *)(param_1 + 0x18) = param_4;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    uVar3 = (**(code **)(*param_3 + 0x90))(param_3);
    *(uint *)(param_1 + 0x44) = (uint)uVar3;
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    FUN_1408f9360(param_1 + 0x60,*(longlong *)(param_1 + 0x18) + 0x48,param_5);
    *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffff7;
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 200);
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xb8);
    *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x234) = uVar1;
    uVar5 = FUN_1408f7670(param_1);
    if ((int)uVar5 == 1) {
        FUN_1408f7920(param_1);
        lVar6 = *(longlong *)(param_1 + 0x18);
        uVar5 = FUN_140837e30(param_1 + 8,*(undefined8 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0x10),
                              *(undefined4 *)(lVar6 + 0x14));
        if ((int)uVar5 == 0x34) {
            return uVar5;
        }
        iVar4 = FUN_1408f79a0(param_1);
        if (iVar4 != 1) {
            return 2;
        }
        FUN_1408f81a0(param_1);
        iVar4 = *(int *)(param_1 + 0xa8) << 4;
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),iVar4)
                ;
        *(longlong *)(param_1 + 0x38) = lVar6;
        if (lVar6 == 0) {
            return 0x34;
        }
        FUN_1407e4830(lVar6,0,iVar4);
        lVar6 = *(longlong *)(param_1 + 0x18);
        uVar5 = *(undefined8 *)(lVar6 + 0xb0);
        uVar2 = *(undefined8 *)(lVar6 + 0xc0);
        *(longlong *)(param_1 + 0x78) = lVar6 + 0x48;
        *(undefined8 *)(param_1 + 0x80) = uVar5;
        *(undefined8 *)(param_1 + 0x98) = uVar2;
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x38);
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa8) = *(undefined4 *)(param_1 + 0x23c);
        uVar5 = 1;
    }
    return uVar5;
}



undefined8 FUN_1408f6f20(undefined8 *param_1,longlong *param_2)

{
    if (param_1[5] != 0) {
        (**(code **)(*(longlong *)param_1[4] + 0x10))();
        param_1[5] = 0;
    }
    if (param_1[6] != 0) {
        (**(code **)(*(longlong *)param_1[4] + 0x10))();
        param_1[6] = 0;
    }
    if (param_1[1] != 0) {
        FUN_140881720(DAT_140c10f20);
        param_1[1] = 0;
    }
    param_1[2] = 0;
    if (param_1[7] != 0) {
        (**(code **)(*(longlong *)param_1[4] + 0x10))();
        param_1[7] = 0;
    }
    (**(code **)*param_1)(param_1,0);
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return 1;
}



void FUN_1408f7030(longlong param_1,longlong *param_2)

{
    ushort uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    uint uVar7;
    int iVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float fVar11;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    float fVar12;
    undefined4 in_XMM8_Db;
    undefined4 in_XMM8_Dc;
    undefined4 in_XMM8_Dd;
    undefined4 in_XMM9_Da;
    float fVar13;
    undefined4 in_XMM9_Db;
    undefined4 in_XMM9_Dc;
    undefined4 in_XMM9_Dd;
    undefined auVar14 [16];
    undefined auVar15 [16];
    undefined auVar16 [16];
    undefined auVar17 [16];

    uVar1 = *(ushort *)(param_2 + 2);
    uVar10 = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x2d;
    auVar15 = CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da)));
    auVar14 = CONCAT412(in_XMM9_Dd,CONCAT48(in_XMM9_Dc,CONCAT44(in_XMM9_Db,in_XMM9_Da)));
    *(ushort *)((longlong)param_2 + 0x12) = uVar1;
    if (*(int *)(param_1 + 0x60) != 0) {
        uVar5 = uVar10;
        do {
            FUN_1407e4830(*param_2 + *(ushort *)(param_2 + 2) * uVar5 * 4,0,(uint)uVar1 * 4);
            uVar7 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(param_1 + 0x60));
    }
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x60);
    fVar13 = *(float *)(param_1 + 0x68) * (float)(ulonglong)uVar1;
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa8);
    if (*(char *)(param_1 + 0x261) != '\0') {
        *(undefined2 *)(param_1 + 0x260) = 1;
        *(undefined8 *)(param_1 + 0x248) = 0;
        *(undefined4 *)(param_1 + 0x238) = 0;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa8) = 0;
    if (*(int *)(param_1 + 0x230) != 0) {
        auVar17 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        auVar16 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
        uVar5 = uVar10;
        if (*(int *)(param_1 + 0xa8) != 0) {
            do {
                puVar6 = (undefined4 *)(param_1 + 0x50);
                uVar9 = uVar10;
                do {
                    lVar2 = *(longlong *)(param_1 + 0x18);
                    iVar8 = (int)uVar9;
                    iVar3 = (int)uVar5;
                    if (*(char *)(uVar9 + 0x98 + lVar2) == '\0') {
                        *(undefined4 *)
                                (*(longlong *)(param_1 + 0x38) +
                                 (ulonglong)(uint)(*(int *)(param_1 + 0xa8) * iVar8 + iVar3) * 4) = 0;
                    }
                    else {
                        if (iVar8 == 0) {
                            lVar4 = param_1 + 8;
                        }
                        else {
                            lVar4 = uVar9 * 0x10 + 8 + lVar2;
                        }
                        FUN_140835ca0(lVar4,lVar2,*puVar6,puVar6,auVar14,auVar15,auVar16,auVar17);
                        *(undefined4 *)
                                (*(longlong *)(param_1 + 0x38) +
                                 (ulonglong)(uint)(*(int *)(param_1 + 0xa8) * iVar8 + iVar3) * 4) = extraout_XMM0_Da;
                    }
                    uVar9 = (ulonglong)(iVar8 + 1U);
                    puVar6 = puVar6 + 1;
                } while (iVar8 + 1U < 4);
                uVar5 = (ulonglong)(iVar3 + 1U);
            } while (iVar3 + 1U < *(uint *)(param_1 + 0xa8));
        }
        fVar11 = (float)(uint)*(ushort *)((longlong)param_2 + 0x12) /
                 (float)(ulonglong)*(uint *)(param_1 + 0xa8);
        iVar3 = (int)fVar11;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar11)) {
            uVar7 = movmskps(*(uint *)(param_1 + 0xa8),
                             ZEXT816(CONCAT44(fVar11,fVar11)) & (undefined  [16])0xffffffffffffffff);
            fVar11 = (float)(iVar3 + (uVar7 & 1 ^ 1));
        }
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                (*(longlong **)(param_1 + 0x20),
                 (ulonglong)(((int)(longlong)fVar11 + 3U & 0xfffffffc) * 5) << 2);
        if (lVar2 == 0) goto LAB_1408f735b;
        FUN_1408f95c0(param_1 + 0x60,param_2,lVar2);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),lVar2);
    }
    fVar12 = fVar12 * fVar13 + *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x6c) = fVar12;
    if (fVar12 < *(float *)(param_1 + 0x70)) {
        return;
    }
    FUN_1408fde98();
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    *(undefined4 *)(param_1 + 0x6c) = extraout_XMM0_Da_00;
    if ((*(uint *)(param_1 + 0x44) != 0) && (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)))
    {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0x11;
        return;
    }
    *(undefined *)(param_1 + 0x261) = 1;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x48);
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x4c);
    uVar7 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0xf8) = uVar7;
    fVar12 = ((float)(ulonglong)uVar7 * 2.328306e-10 * 2.0 - 1.0) * fVar12;
    *(float *)(param_1 + 0x4c) = fVar12;
    fVar12 = fVar12 + *(float *)(*(longlong *)(param_1 + 0x18) + 0x48);
    *(float *)(param_1 + 0x70) = fVar12;
    if (fVar12 <= 0.1) {
        fVar12 = 0.1;
    }
    *(float *)(param_1 + 0x70) = fVar12;
    iVar3 = FUN_1408f79a0(param_1);
    if (iVar3 == 1) {
        FUN_1408f81a0(param_1);
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        return;
    }
    LAB_1408f735b:
    *(undefined4 *)((longlong)param_2 + 0xc) = 2;
    return;
}



undefined8 FUN_1408f7670(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int iVar3;

    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xac);
    *(int *)(param_1 + 0x230) = iVar1;
    if (iVar1 == 0) {
        LAB_1408f770d:
        *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffc;
        return 1;
    }
    iVar3 = (iVar1 + 3U >> 2) * 0x70;
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
            (*(longlong **)(param_1 + 0x20),iVar1 * 0x1c);
    *(longlong *)(param_1 + 0x28) = lVar2;
    if (lVar2 != 0) {
        FUN_1407e4830(lVar2,0,iVar1 * 0x1c);
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),iVar3)
                ;
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 != 0) {
            FUN_1407e4830(lVar2,0,iVar3);
            *(undefined *)(param_1 + 0x262) = 1;
            FUN_1408f7780(param_1);
            goto LAB_1408f770d;
        }
    }
    return 0x34;
}



void FUN_1408f7730(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x28) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    return;
}



void FUN_1408f7780(longlong param_1)

{
    float fVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined4 uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;

    if (*(uint *)(param_1 + 0x230) != 0) {
        fVar6 = 2.328306e-10;
        fVar7 = 2.0;
        fVar8 = 1.0;
        lVar4 = 0;
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x230);
        uVar10 = 0x41200000;
        fVar9 = 0.05;
        do {
            fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x8c);
            uVar2 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xf8) = uVar2;
            *(float *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar4) =
                    ((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1;
            fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x90);
            uVar2 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xf8) = uVar2;
            *(float *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar4) =
                    ((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1;
            fVar1 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x94);
            uVar2 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xf8) = uVar2;
            uVar5 = FUN_1408fbfc0(uVar10,((float)(ulonglong)uVar2 * fVar6 * fVar7 - fVar8) * fVar1 * fVar9
            );
            lVar4 = lVar4 + 0x1c;
            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + -4 + lVar4) = uVar5;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return;
}



void FUN_1408f7920(longlong param_1)

{
    uint uVar1;
    float fVar2;

    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x48);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x4c);
    uVar1 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0xf8) = uVar1;
    fVar2 = ((float)(ulonglong)uVar1 * 2.328306e-10 * 2.0 - 1.0) * fVar2;
    *(float *)(param_1 + 0x4c) = fVar2;
    fVar2 = fVar2 + *(float *)(*(longlong *)(param_1 + 0x18) + 0x48);
    *(float *)(param_1 + 0x70) = fVar2;
    if (0.1 < fVar2) {
        *(float *)(param_1 + 0x70) = fVar2;
        return;
    }
    *(undefined4 *)(param_1 + 0x70) = 0x3dcccccd;
    return;
}



undefined8 FUN_1408f79a0(longlong param_1)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;

    lVar10 = *(longlong *)(param_1 + 0x18);
    fVar19 = 0.0;
    fVar20 = *(float *)(lVar10 + 0x6c);
    bVar2 = fVar20 != 0.0;
    fVar18 = *(float *)(lVar10 + 0x70);
    if ((*(char *)(lVar10 + 0x98) != '\0') && ((bVar2 || (fVar18 != 0.0)))) {
        iVar3 = FUN_140837e30(param_1 + 8);
        if (iVar3 == 0x34) {
            return 2;
        }
        uVar6 = *(uint *)(param_1 + 0x10);
        if ((uVar6 < 3) || (!bVar2)) {
            uVar5 = 0;
            lVar10 = 0;
            if (3 < (int)uVar6) {
                uVar11 = (uVar6 - 4 >> 2) + 1;
                uVar9 = (ulonglong)uVar11;
                uVar5 = uVar11 * 4;
                lVar10 = (ulonglong)uVar11 * 4;
                lVar8 = 0;
                do {
                    lVar7 = lVar8 + 0x30;
                    uVar11 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar11;
                    *(float *)(lVar8 + 4 + *(longlong *)(param_1 + 8)) =
                            ((float)(ulonglong)uVar11 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar8 + 4 + *(longlong *)(param_1 + 8));
                    uVar11 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar11;
                    *(float *)(*(longlong *)(param_1 + 8) + -0x20 + lVar7) =
                            ((float)(ulonglong)uVar11 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(*(longlong *)(param_1 + 8) + -0x20 + lVar7);
                    uVar11 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar11;
                    *(float *)(*(longlong *)(param_1 + 8) + -0x14 + lVar7) =
                            ((float)(ulonglong)uVar11 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(*(longlong *)(param_1 + 8) + -0x14 + lVar7);
                    uVar11 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar11;
                    *(float *)(lVar8 + 0x28 + *(longlong *)(param_1 + 8)) =
                            ((float)(ulonglong)uVar11 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar8 + 0x28 + *(longlong *)(param_1 + 8));
                    uVar9 = uVar9 - 1;
                    lVar8 = lVar7;
                } while (uVar9 != 0);
            }
            if (uVar5 < uVar6) {
                uVar9 = (ulonglong)(uVar6 - uVar5);
                lVar10 = lVar10 * 0xc;
                do {
                    uVar6 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar6;
                    *(float *)(lVar10 + 4 + *(longlong *)(param_1 + 8)) =
                            ((float)(ulonglong)uVar6 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar10 + 4 + *(longlong *)(param_1 + 8));
                    uVar9 = uVar9 - 1;
                    lVar10 = lVar10 + 0xc;
                } while (uVar9 != 0);
            }
        }
        else {
            lVar8 = 0;
            uVar5 = uVar6 - 1;
            uVar11 = 0;
            fVar17 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x48);
            lVar10 = lVar8;
            fVar12 = fVar19;
            if (3 < (int)uVar5) {
                lVar7 = 0x18;
                uVar4 = (uVar6 - 5 >> 2) + 1;
                uVar9 = (ulonglong)uVar4;
                uVar11 = uVar4 * 4;
                lVar10 = (ulonglong)uVar4 * 4;
                do {
                    lVar1 = *(longlong *)(param_1 + 8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    fVar13 = *(float *)(lVar1 + -0xc + lVar7);
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    fVar12 = fVar13 - fVar12;
                    fVar16 = ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar20 * fVar12 * 0.99 +
                             fVar12;
                    *(float *)(lVar1 + -0xc + lVar7) = fVar16 + *(float *)(lVar1 + lVar8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    *(float *)(lVar1 + -8 + lVar7) =
                            ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar1 + -8 + lVar7);
                    lVar1 = *(longlong *)(param_1 + 8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    fVar14 = *(float *)(lVar1 + lVar7);
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    fVar13 = fVar14 - fVar13;
                    fVar13 = ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar20 * fVar13 * 0.99 +
                             fVar13;
                    *(float *)(lVar1 + lVar7) = fVar13 + *(float *)(lVar1 + 0xc + lVar8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    *(float *)(lVar1 + 4 + lVar7) =
                            ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar1 + 4 + lVar7);
                    lVar1 = *(longlong *)(param_1 + 8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    fVar15 = *(float *)(lVar1 + 0xc + lVar7);
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    fVar14 = fVar15 - fVar14;
                    lVar7 = lVar7 + 0x30;
                    lVar8 = lVar8 + 0x30;
                    fVar14 = ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar20 * fVar14 * 0.99 +
                             fVar14;
                    *(float *)(lVar1 + -0x24 + lVar7) =
                            fVar14 + *(float *)(&DAT_ffffffffffffffe8 + lVar8 + lVar1);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    *(float *)(lVar1 + -0x20 + lVar7) =
                            ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar1 + -0x20 + lVar7);
                    lVar1 = *(longlong *)(param_1 + 8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    fVar12 = *(float *)(&DAT_ffffffffffffffe8 + lVar7 + lVar1);
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    fVar15 = fVar12 - fVar15;
                    fVar15 = ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar20 * fVar15 * 0.99 +
                             fVar15;
                    fVar19 = fVar19 + fVar16 + fVar13 + fVar14 + fVar15;
                    *(float *)(&DAT_ffffffffffffffe8 + lVar7 + lVar1) =
                            fVar15 + *(float *)(lVar1 + -0xc + lVar8);
                    uVar4 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar4;
                    *(float *)(lVar1 + -0x14 + lVar7) =
                            ((float)(ulonglong)uVar4 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar1 + -0x14 + lVar7);
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            if (uVar11 < uVar5) {
                lVar10 = lVar10 * 0xc;
                lVar8 = (ulonglong)(uVar11 + 1) * 0xc;
                uVar9 = (ulonglong)(uVar5 - uVar11);
                do {
                    lVar7 = *(longlong *)(param_1 + 8);
                    lVar8 = lVar8 + 0xc;
                    lVar10 = lVar10 + 0xc;
                    uVar5 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    fVar13 = *(float *)(lVar7 + -0xc + lVar8);
                    *(uint *)(param_1 + 0xf8) = uVar5;
                    fVar12 = fVar13 - fVar12;
                    fVar12 = ((float)(ulonglong)uVar5 * 2.328306e-10 * 2.0 - 1.0) * fVar20 * fVar12 * 0.99 +
                             fVar12;
                    fVar19 = fVar19 + fVar12;
                    *(float *)(lVar7 + -0xc + lVar8) = fVar12 + *(float *)(lVar7 + -0xc + lVar10);
                    uVar5 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
                    *(uint *)(param_1 + 0xf8) = uVar5;
                    *(float *)(lVar7 + -8 + lVar8) =
                            ((float)(ulonglong)uVar5 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                            *(float *)(lVar7 + -8 + lVar8);
                    uVar9 = uVar9 - 1;
                    fVar12 = fVar13;
                } while (uVar9 != 0);
            }
            uVar11 = 1;
            fVar17 = fVar17 / fVar19;
            lVar10 = 1;
            uVar5 = *(int *)(param_1 + 0xf8) * 0x343fd + 0x269ec3;
            *(uint *)(param_1 + 0xf8) = uVar5;
            *(float *)(*(longlong *)(param_1 + 8) + 4) =
                    ((float)(ulonglong)uVar5 * 2.328306e-10 * 2.0 - 1.0) * fVar18 +
                    *(float *)(*(longlong *)(param_1 + 8) + 4);
            if (1 < uVar6) {
                if (3 < (int)(uVar6 - 1)) {
                    uVar5 = (uVar6 - 5 >> 2) + 1;
                    uVar9 = (ulonglong)uVar5;
                    uVar11 = uVar5 * 4 + 1;
                    lVar10 = (ulonglong)uVar5 * 4 + 1;
                    lVar8 = 0xc;
                    do {
                        lVar7 = lVar8 + 0x30;
                        *(float *)(lVar8 + *(longlong *)(param_1 + 8)) =
                                fVar17 * *(float *)(lVar8 + *(longlong *)(param_1 + 8));
                        *(float *)(*(longlong *)(param_1 + 8) + -0x24 + lVar7) =
                                fVar17 * *(float *)(*(longlong *)(param_1 + 8) + -0x24 + lVar7);
                        *(float *)(&DAT_ffffffffffffffe8 + lVar7 + *(longlong *)(param_1 + 8)) =
                                fVar17 * *(float *)(&DAT_ffffffffffffffe8 + lVar7 + *(longlong *)(param_1 + 8));
                        *(float *)(lVar8 + 0x24 + *(longlong *)(param_1 + 8)) =
                                fVar17 * *(float *)(lVar8 + 0x24 + *(longlong *)(param_1 + 8));
                        uVar9 = uVar9 - 1;
                        lVar8 = lVar7;
                    } while (uVar9 != 0);
                }
                if (uVar11 < uVar6) {
                    uVar9 = (ulonglong)(uVar6 - uVar11);
                    lVar10 = lVar10 * 0xc;
                    do {
                        *(float *)(lVar10 + *(longlong *)(param_1 + 8)) =
                                fVar17 * *(float *)(lVar10 + *(longlong *)(param_1 + 8));
                        uVar9 = uVar9 - 1;
                        lVar10 = lVar10 + 0xc;
                    } while (uVar9 != 0);
                }
            }
        }
    }
    return 1;
}



undefined4 FUN_1408f8160(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;

    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar2 = FUN_140837e30(param_1 + 8,*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),
                          *(undefined4 *)(lVar1 + 0x14));
    uVar3 = 0x34;
    if (iVar2 != 0x34) {
        uVar3 = 1;
    }
    return uVar3;
}



void FUN_1408f81a0(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;

    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (((*(char *)(*(longlong *)(param_1 + 0x18) + 0x98) != '\0') && (1 < *(uint *)(param_1 + 0x10)))
        && (uVar2 = *(uint *)(param_1 + 0x10) - 1, uVar2 != 0)) {
        lVar4 = 0xc;
        uVar3 = (ulonglong)uVar2;
        do {
            lVar1 = *(longlong *)(param_1 + 8);
            fVar6 = (float)FUN_1408f95f0(*(undefined4 *)(lVar5 + lVar1),*(undefined4 *)(lVar5 + 4 + lVar1)
                    ,*(undefined4 *)(lVar4 + lVar1),
                                         *(undefined4 *)(lVar4 + 4 + lVar1));
            lVar4 = lVar4 + 0xc;
            lVar5 = lVar5 + 0xc;
            *(float *)(param_1 + 0x250) = fVar6 + *(float *)(param_1 + 0x250);
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return;
}



undefined8 * FUN_1408f8250(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_1409c6270;
    FUN_1408f9350();
    *param_1 = &PTR_LAB_1409a9900;
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408f82a0(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xd0);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409c62f0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        puVar1[0x16] = 0;
        *(undefined4 *)(puVar1 + 0x17) = 0;
        puVar1[0x18] = 0;
        *(undefined4 *)(puVar1 + 0x19) = 0;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1408f8380(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    undefined8 *puVar9;

    uVar6 = 0;
    *param_1 = &PTR_FUN_1409c62f0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    *param_3 = 1;
    plVar2 = *(longlong **)(param_2 + 0xa0);
    param_1[0x14] = plVar2;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    param_1[0x15] = 0xf;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x18] = 0;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar1;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
    if ((*(longlong *)(param_2 + 0xb0) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
        lVar5 = (**(code **)(*plVar2 + 8))(plVar2,*(int *)(param_2 + 0xac) * 0xc);
        param_1[0x16] = lVar5;
        if (lVar5 == 0) {
            *param_3 = 0x34;
            return param_1;
        }
        iVar4 = *(int *)(param_2 + 0xac);
        *(int *)((longlong)param_1 + 0xac) = iVar4;
        uVar7 = uVar6;
        if (iVar4 != 0) {
            do {
                lVar5 = *(longlong *)(param_2 + 0xb0);
                lVar3 = param_1[0x16];
                uVar8 = (int)uVar7 + 1;
                *(undefined4 *)(lVar3 + uVar7 * 0xc) = *(undefined4 *)(lVar5 + uVar7 * 0xc);
                *(undefined4 *)(lVar3 + 4 + uVar7 * 0xc) = *(undefined4 *)(lVar5 + 4 + uVar7 * 0xc);
                *(undefined4 *)(lVar3 + 8 + uVar7 * 0xc) = *(undefined4 *)(lVar5 + 8 + uVar7 * 0xc);
                uVar7 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)((longlong)param_1 + 0xac));
        }
    }
    puVar9 = (undefined8 *)(param_2 + 8);
    uVar7 = uVar6;
    do {
        iVar4 = FUN_140837e30(param_1 + uVar7 * 2 + 1,*puVar9,*(undefined4 *)(puVar9 + 1),0);
        if (iVar4 == 0x34) goto LAB_1408f8624;
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        puVar9 = puVar9 + 2;
    } while (uVar8 < 4);
    if ((*(longlong *)(param_2 + 0xc0) != 0) && (*(int *)(param_2 + 0xb8) != 0)) {
        lVar5 = (**(code **)(*(longlong *)param_1[0x14] + 8))
                ((longlong *)param_1[0x14],*(int *)(param_2 + 0xb8) * 0xc);
        param_1[0x18] = lVar5;
        if (lVar5 == 0) {
            LAB_1408f8624:
            *param_3 = 0x34;
        }
        else {
            iVar4 = *(int *)(param_2 + 0xb8);
            *(int *)(param_1 + 0x17) = iVar4;
            if (iVar4 != 0) {
                do {
                    lVar5 = *(longlong *)(param_2 + 0xc0);
                    lVar3 = param_1[0x18];
                    uVar8 = (int)uVar6 + 1;
                    *(undefined4 *)(lVar3 + uVar6 * 0xc) = *(undefined4 *)(lVar5 + uVar6 * 0xc);
                    *(undefined4 *)(lVar3 + 4 + uVar6 * 0xc) = *(undefined4 *)(lVar5 + 4 + uVar6 * 0xc);
                    *(undefined4 *)(lVar3 + 8 + uVar6 * 0xc) = *(undefined4 *)(lVar5 + 8 + uVar6 * 0xc);
                    uVar6 = (ulonglong)uVar8;
                } while (uVar8 < *(uint *)(param_1 + 0x17));
            }
        }
    }
    return param_1;
}



void FUN_1408f8650(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_1409c62f0;
    if (param_1[0x16] != 0) {
        (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
    }
    plVar1 = param_1 + 1;
    lVar2 = 4;
    do {
        if (*plVar1 != 0) {
            FUN_140881720(DAT_140c10f20);
            *plVar1 = 0;
        }
        plVar1[1] = 0;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (param_1[0x18] != 0) {
        (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
    }
    *param_1 = &PTR_FUN_1409a70c8;
    return;
}



longlong * FUN_1408f8700(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int local_res10 [6];

    local_res10[0] = 1;
    lVar1 = (**(code **)(*param_2 + 8))(param_2,0xd0);
    if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1408f8380(lVar1,param_1,local_res10);
        if (plVar2 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        if (local_res10[0] == 1) {
            return plVar2;
        }
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    }
    return (longlong *)0x0;
}



undefined8 FUN_1408f87f0(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



ulonglong FUN_1408f8830(longlong param_1,undefined4 *param_2)

{
    ushort uVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 uVar5;
    longlong local_res8 [4];

    *(undefined4 *)(param_1 + 0x48) = *param_2;
    *(undefined4 *)(param_1 + 0x4c) = param_2[1];
    uVar1 = *(ushort *)(param_2 + 2);
    *(uint *)(param_1 + 0x50) = (uint)uVar1;
    if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x50) = 4;
    }
    else {
        uVar5 = 0x33;
        if (uVar1 != 2) {
            uVar5 = 3;
        }
        *(undefined4 *)(param_1 + 0x50) = uVar5;
    }
    local_res8[0] = (longlong)param_2 + 0x4b;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 10);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x12);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x16);
    *(uint *)(param_1 + 0x68) = (uint)*(ushort *)((longlong)param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x6c) = param_2[7];
    *(undefined4 *)(param_1 + 0x70) = param_2[8];
    *(undefined *)(param_1 + 0x9c) = *(undefined *)(param_2 + 9);
    *(uint *)(param_1 + 0x74) = (uint)*(ushort *)((longlong)param_2 + 0x25);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x27);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x2b);
    *(undefined *)(param_1 + 0x98) = *(undefined *)((longlong)param_2 + 0x2f);
    *(undefined4 *)(param_1 + 0x7c) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x8c) = param_2[0xd];
    *(undefined *)(param_1 + 0x99) = *(undefined *)(param_2 + 0xe);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x39);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((longlong)param_2 + 0x3d);
    *(undefined *)(param_1 + 0x9a) = *(undefined *)((longlong)param_2 + 0x41);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x42);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x46);
    *(undefined *)(param_1 + 0x9b) = *(undefined *)((longlong)param_2 + 0x4a);
    uVar5 = FUN_1408fbfc0(0x41200000,*(float *)(param_1 + 0x84) * 0.05);
    *(undefined4 *)(param_1 + 0x84) = uVar5;
    *(undefined4 *)(param_1 + 0xa8) = 0xf;
    uVar3 = FUN_1408f8d80(param_1,local_res8);
    if ((int)uVar3 == 1) {
        uVar3 = FUN_1408f8ee0(param_1,local_res8);
        if ((int)uVar3 == 1) {
            uVar2 = FUN_1408f90a0(param_1,local_res8);
            uVar4 = 1;
            if (uVar2 != 1) {
                uVar4 = uVar2;
            }
            uVar3 = (ulonglong)uVar4;
        }
    }
    return uVar3;
}



ulonglong FUN_1408f89e0(longlong param_1,short param_2,float *param_3)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    float *local_res18 [2];

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    iVar1 = (int)param_2;
    if (iVar1 < 0x8000) {
        local_res18[0] = param_3;
        if (iVar1 == 0x7fff) {
            *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 7;
            uVar2 = FUN_1408f8d80(param_1,local_res18);
            if (uVar2 != 1) {
                return (ulonglong)uVar2;
            }
            uVar2 = FUN_1408f8ee0(param_1,local_res18);
            if (uVar2 == 1) {
                uVar3 = FUN_1408f90a0(param_1,local_res18);
                return uVar3;
            }
            return (ulonglong)uVar2;
        }
        switch(iVar1) {
            case 0:
                *(float *)(param_1 + 0x78) = *param_3;
                return 1;
            case 1:
                *(float *)(param_1 + 0x88) = *param_3;
                return 1;
            case 2:
                *(undefined *)(param_1 + 0x98) = *(undefined *)param_3;
                return 1;
            case 0x14:
                *(float *)(param_1 + 0x7c) = *param_3;
                return 1;
            case 0x15:
                *(float *)(param_1 + 0x8c) = *param_3;
                return 1;
            case 0x16:
                *(undefined *)(param_1 + 0x99) = *(undefined *)param_3;
                return 1;
            case 0x17:
                *(float *)(param_1 + 0x80) = *param_3;
                return 1;
            case 0x18:
                *(float *)(param_1 + 0x90) = *param_3;
                return 1;
            case 0x19:
                *(undefined *)(param_1 + 0x9a) = *(undefined *)param_3;
                return 1;
            case 0x1a:
                uVar4 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined4 *)(param_1 + 0x84) = uVar4;
                return 1;
            case 0x1b:
                *(float *)(param_1 + 0x94) = *param_3;
                return 1;
            case 0x1c:
                *(undefined *)(param_1 + 0x9b) = *(undefined *)param_3;
                return 1;
            case 0x28:
                if (*(short *)param_3 != 0) {
                    uVar4 = 0x33;
                    if (*(short *)param_3 != 2) {
                        uVar4 = 3;
                    }
                    *(undefined4 *)(param_1 + 0x50) = uVar4;
                    return 1;
                }
                *(undefined4 *)(param_1 + 0x50) = 4;
                return 1;
            case 0x2a:
                *(float *)(param_1 + 0x48) = *param_3;
                return 1;
            case 0x2b:
                *(float *)(param_1 + 0x4c) = *param_3;
                return 1;
            case 0x2c:
                *(float *)(param_1 + 0x54) = *param_3;
                return 1;
            case 0x2d:
                *(float *)(param_1 + 0x58) = *param_3;
                return 1;
            case 0x2e:
                *(uint *)(param_1 + 0x68) = (uint)*(ushort *)param_3;
                return 1;
            case 0x2f:
                *(float *)(param_1 + 0x6c) = *param_3;
                return 1;
            case 0x30:
                *(float *)(param_1 + 0x70) = *param_3;
                return 1;
            case 0x31:
                *(undefined *)(param_1 + 0x9c) = *(undefined *)param_3;
                return 1;
            case 0x32:
                *(float *)(param_1 + 0x60) = *param_3;
                return 1;
            case 0x33:
                *(uint *)(param_1 + 0x74) = (uint)*(ushort *)param_3;
                return 1;
            case 0x34:
                *(float *)(param_1 + 0x5c) = *param_3;
                return 1;
            case -1:
                return 1;
        }
    }
    return 0x1f;
}



undefined8 FUN_1408f8d80(longlong param_1,short **param_2)

{
    ushort uVar1;
    short *psVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 uVar8;
    float fVar9;
    undefined4 uVar10;

    psVar2 = *param_2;
    puVar7 = (undefined4 *)(psVar2 + 2);
    *(int *)(param_1 + 100) = (int)*psVar2;
    uVar1 = psVar2[1];
    uVar4 = (uint)uVar1;
    if ((*(longlong *)(param_1 + 0xb0) != 0) && (*(uint *)(param_1 + 0xac) != uVar4)) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
    }
    if (uVar1 != 0) {
        *(uint *)(param_1 + 0xac) = uVar4;
        if (*(longlong *)(param_1 + 0xb0) == 0) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                    (*(longlong **)(param_1 + 0xa0),uVar4 * 0xc);
            *(longlong *)(param_1 + 0xb0) = lVar3;
            if (lVar3 == 0) {
                *(undefined4 *)(param_1 + 0xac) = 0;
                return 0x34;
            }
        }
        if (*(int *)(param_1 + 0xac) != 0) {
            fVar9 = 0.05;
            uVar10 = 0x41200000;
            uVar5 = 0;
            puVar6 = puVar7;
            do {
                puVar7 = puVar6 + 3;
                *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + uVar5 * 0xc) = *puVar6;
                *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 4 + uVar5 * 0xc) = puVar6[1];
                uVar8 = FUN_1408fbfc0(uVar10,(float)puVar6[2] * fVar9);
                uVar4 = (int)uVar5 + 1;
                *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 8 + uVar5 * 0xc) = uVar8;
                uVar5 = (ulonglong)uVar4;
                puVar6 = puVar7;
            } while (uVar4 < *(uint *)(param_1 + 0xac));
        }
    }
    *param_2 = (short *)puVar7;
    return 1;
}



undefined8 FUN_1408f8ee0(longlong param_1,int **param_2)

{
    ushort uVar1;
    ushort uVar2;
    int iVar3;
    longlong *plVar4;
    int *piVar5;
    ushort uVar6;
    longlong lVar7;

    plVar4 = (longlong *)(param_1 + 8);
    lVar7 = 4;
    do {
        if (*plVar4 != 0) {
            FUN_140881720();
            *plVar4 = 0;
        }
        plVar4[1] = 0;
        plVar4 = plVar4 + 2;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = 0;
    uVar1 = *(ushort *)*param_2;
    piVar5 = (int *)((longlong)*param_2 + 2);
    if (uVar1 != 0) {
        do {
            iVar3 = *piVar5;
            if (iVar3 == 0) {
                lVar7 = 0;
            }
            else if (iVar3 == 0x14) {
                lVar7 = 1;
            }
            else if (iVar3 == 0x17) {
                lVar7 = 2;
            }
            else {
                lVar7 = 0;
                if (iVar3 == 0x1a) {
                    lVar7 = 3;
                }
            }
            uVar2 = *(ushort *)(piVar5 + 1);
            piVar5 = (int *)((longlong)piVar5 + 6);
            if (uVar2 != 0) {
                iVar3 = FUN_140837e30(param_1 + 8 + lVar7 * 0x10,piVar5,uVar2,0);
                if (iVar3 == 0x34) {
                    return 0x34;
                }
                piVar5 = piVar5 + (ulonglong)uVar2 * 3;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
    }
    *param_2 = piVar5;
    return 1;
}



undefined8 FUN_1408f8ff0(longlong param_1,int **param_2)

{
    ushort uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;

    piVar5 = *param_2;
    lVar3 = 0;
    iVar2 = *piVar5;
    if (iVar2 != 0) {
        if (iVar2 == 0x14) {
            lVar3 = 1;
        }
        else if (iVar2 == 0x17) {
            lVar3 = 2;
        }
        else if (iVar2 == 0x1a) {
            lVar3 = 3;
        }
    }
    uVar1 = *(ushort *)(piVar5 + 1);
    piVar5 = (int *)((longlong)piVar5 + 6);
    if (uVar1 != 0) {
        uVar4 = FUN_140837e30(param_1 + 8 + lVar3 * 0x10,piVar5,uVar1,0);
        if ((int)uVar4 == 0x34) {
            return uVar4;
        }
        piVar5 = piVar5 + (ulonglong)uVar1 * 3;
    }
    *param_2 = piVar5;
    return 1;
}



undefined8 FUN_1408f90a0(longlong param_1,ushort **param_2)

{
    ushort uVar1;
    ushort *puVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    uint uVar6;
    ulonglong uVar7;

    puVar2 = *param_2;
    uVar1 = *puVar2;
    puVar5 = (undefined4 *)(puVar2 + 3);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(puVar2 + 1);
    uVar6 = (uint)uVar1;
    if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(uint *)(param_1 + 0xb8) != uVar6)) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    if (uVar1 != 0) {
        *(uint *)(param_1 + 0xb8) = uVar6;
        if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 8))
                    (*(longlong **)(param_1 + 0xa0),uVar6 * 0xc);
            *(longlong *)(param_1 + 0xc0) = lVar3;
            if (lVar3 == 0) {
                *(undefined4 *)(param_1 + 0xb8) = 0;
                return 0x34;
            }
        }
        puVar4 = puVar5;
        uVar7 = 0;
        if (*(int *)(param_1 + 0xb8) != 0) {
            do {
                uVar6 = (int)uVar7 + 1;
                puVar5 = puVar4 + 3;
                *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar7 * 0xc) = *puVar4;
                *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar7 * 0xc) = puVar4[1];
                *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 8 + uVar7 * 0xc) = puVar4[2];
                puVar4 = puVar5;
                uVar7 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_1 + 0xb8));
        }
    }
    *param_2 = (ushort *)puVar5;
    return 1;
}



undefined8 FUN_1408f9240(undefined8 param_1,uint param_2)

{
    FUN_1408f8650();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



longlong FUN_1408f92b0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;

    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    iVar1 = rand();
    *(int *)(param_1 + 0x98) = iVar1;
    uVar2 = FUN_1408f6b60(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    FUN_1408a8e90(uVar2,0x3f800000,0,0);
    return param_1;
}



void FUN_1408f9350(void)

{
    return;
}



void FUN_1408f9360(uint *param_1,longlong param_2,uint *param_3)

{
    float fVar1;
    uint uVar2;
    uint uVar3;

    param_1[1] = *param_3;
    param_1[2] = (uint)(1.0 / (float)(ulonglong)*param_3);
    uVar3 = *(uint *)(param_2 + 8);
    param_3[1] = param_3[1] & 0xfffc0000;
    param_3[1] = param_3[1] | uVar3 & 0x3ffff;
    switch(param_3[1] & 0x3ffff) {
        case 3:
        case 4:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xf:
        case 0x33:
        case 0x37:
        case 0x3b:
        case 0x3f:
            break;
        default:
            param_3[1] = param_3[1] & 0xfffc0003;
            uVar3 = 3;
            param_3[1] = param_3[1] | 3;
    }
    uVar2 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        uVar2 = uVar2 + 1;
    }
    *param_1 = uVar2;
    param_3[1] = param_3[1] & 0xe0ffffff;
    param_3[1] = param_3[1] | (uVar2 & 7) << 0x1a;
    FUN_1408fba30(param_1 + 0x28,*(undefined4 *)(param_2 + 0x20),param_1[1]);
    param_1[0x12] = *(uint *)(param_2 + 0x2c);
    fVar1 = *(float *)(param_2 + 0x40);
    uVar3 = param_1[0x26] * 0x343fd + 0x269ec3;
    param_1[0x26] = uVar3;
    *(undefined2 *)((longlong)param_1 + 0x201) = 0x100;
    *(undefined *)(param_1 + 0x80) = 1;
    param_1[0x76] = 0;
    *(undefined8 *)(param_1 + 0x7a) = 0;
    param_1[0x18] = (uint)(((float)(ulonglong)uVar3 * 2.328306e-10 * 2.0 - 1.0) * fVar1);
    return;
}



void FUN_1408f94f0(uint *param_1,undefined4 param_2)

{
    float fVar1;
    undefined4 uVar2;

    fVar1 = *(float *)(*(longlong *)(param_1 + 6) + 0x30) + (float)param_1[0x18] +
            (float)param_1[0x13];
    param_1[0x17] = (uint)fVar1;
    uVar2 = FUN_1408fa950(fVar1,param_1[0x14]);
    uVar2 = FUN_1408faa10(uVar2,param_1[0x15],param_1);
    FUN_1408fab20(uVar2,param_1[0x16],param_1);
    FUN_1408f98e0(param_1);
    FUN_1408f9830(param_1);
    FUN_1408f9710(param_1);
    if (*(char *)((longlong)param_1 + 0x202) == '\0') {
        FUN_1408fa040(param_1,param_2);
        if (1 < *param_1) {
            FUN_1408fa750(param_1,param_2);
        }
    }
    else {
        FUN_1408f9e00(param_1);
        if (1 < *param_1) {
            FUN_1408fa640(param_1);
        }
        *(undefined *)((longlong)param_1 + 0x202) = 0;
    }
    FUN_1408f9b60(param_1);
    param_1[0x77] = 0;
    return;
}



void FUN_1408f95c0(int *param_1)

{
    int iVar1;

    iVar1 = *param_1;
    if (iVar1 == 1) {
        FUN_1408fae50();
        return;
    }
    if (iVar1 != 2) {
        if (iVar1 == 4) {
            FUN_1408fb540();
            return;
        }
        return;
    }
    FUN_1408fb170();
    return;
}



ulonglong FUN_1408f95f0(float param_1,float param_2,float param_3,float param_4)

{
    undefined4 uVar1;
    undefined4 extraout_XMM0_Db;
    ulonglong uVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    fVar3 = 2.0;
    if ((DAT_140c63464 & 1) == 0) {
        DAT_140c63464 = DAT_140c63464 | 1;
        DAT_140c63460 = (float)FUN_1408fe170(0x40000000);
    }
    param_3 = param_3 - param_1;
    fVar5 = param_4 * 0.02 + fVar3;
    fVar4 = param_2 * 0.02 + fVar3;
    if (fVar5 - fVar4 == 0.0) {
        uVar2 = FUN_1408fbfc0(fVar3,fVar4);
        uVar2 = uVar2 & 0xffffffff00000000 | (ulonglong)(uint)((float)uVar2 * param_3);
    }
    else {
        fVar3 = DAT_140c63460;
        FUN_1408fc7f0(DAT_140c63460 * fVar5);
        uVar1 = FUN_1408fc7f0(fVar3 * fVar4);
        uVar2 = CONCAT44(extraout_XMM0_Db,uVar1);
    }
    return uVar2;
}



void FUN_1408f9710(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;

    if (*(uint *)(param_1 + 0x1d4) < 2) {
        *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 4);
        *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8);
        return;
    }
    uVar5 = *(uint *)(param_1 + 0x1d8);
    uVar6 = *(uint *)(param_1 + 0x1d4) - 1;
    if (uVar5 < uVar6) {
        uVar2 = uVar5;
        do {
            uVar2 = uVar2 + 1;
            if (*(float *)(param_1 + 0x1e8) <
                *(float *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar2 * 0xc)) {
                *(uint *)(param_1 + 0x1d8) = uVar5;
                break;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x1d8);
    if (*(float *)(param_1 + 500) <= *(float *)(param_1 + 0x1e8)) {
        *(undefined4 *)(param_1 + 0x1f8) =
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 4 + (ulonglong)uVar6 * 0xc);
        *(undefined4 *)(param_1 + 0x1fc) =
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar6 * 0xc);
        return;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x1d8) + 1);
    fVar7 = (*(float *)(param_1 + 0x1e8) - *(float *)(lVar1 + uVar4 * 0xc)) /
            (*(float *)(lVar1 + uVar3 * 0xc) - *(float *)(lVar1 + uVar4 * 0xc));
    *(float *)(param_1 + 0x1f8) =
            (*(float *)(lVar1 + 4 + uVar3 * 0xc) - *(float *)(lVar1 + 4 + uVar4 * 0xc)) * fVar7 +
            *(float *)(lVar1 + 4 + uVar4 * 0xc);
    *(float *)(param_1 + 0x1fc) =
            (*(float *)(lVar1 + 8 + uVar3 * 0xc) - *(float *)(lVar1 + 8 + uVar4 * 0xc)) * fVar7 +
            *(float *)(lVar1 + 8 + uVar4 * 0xc);
    return;
}



void FUN_1408f9830(longlong param_1)

{
    float fVar1;

    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x50) != '\0') {
        if (*(char *)(param_1 + 0x200) == '\0') {
            fVar1 = (float)FUN_1408f95f0(*(undefined4 *)(param_1 + 0x1e0),*(undefined4 *)(param_1 + 0x1e4)
                    ,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x4c));
            fVar1 = fVar1 / *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1ec);
            *(float *)(param_1 + 0x1ec) = fVar1;
            *(float *)(param_1 + 0x1e8) = fVar1 * *(float *)(param_1 + 500);
        }
        else {
            *(undefined *)(param_1 + 0x200) = 0;
        }
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x4c);
        return;
    }
    *(float *)(param_1 + 0x1e8) =
            (*(float *)(param_1 + 0xc) / *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 500);
    return;
}



void FUN_1408f98e0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;

    fVar11 = 0.0;
    FUN_1408fbfc0();
    iVar10 = *(int *)(param_1 + 0x1d0);
    lVar8 = (longlong)iVar10;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x1c);
    fVar11 = fVar11 * 16.0;
    if ((iVar10 == 1) && (uVar3 != 0xffffffff)) {
        uVar3 = 0xffffffff;
    }
    uVar1 = (iVar10 - uVar3) - 1;
    if ((int)((iVar10 - uVar3) + -1) <= (int)uVar3) {
        uVar1 = uVar3;
    }
    lVar4 = 0;
    iVar10 = 0;
    if (uVar3 == 0xffffffff) {
        lVar5 = lVar4;
        if (3 < lVar8) {
            lVar6 = (lVar8 - 4U >> 2) + 1;
            lVar5 = lVar6 * 4;
            do {
                *(float *)(lVar4 + *(longlong *)(param_1 + 0x28)) = fVar11;
                *(float *)(lVar4 + 0x1c + *(longlong *)(param_1 + 0x28)) = fVar11;
                *(float *)(lVar4 + 0x38 + *(longlong *)(param_1 + 0x28)) = fVar11;
                *(float *)(lVar4 + 0x54 + *(longlong *)(param_1 + 0x28)) = fVar11;
                lVar6 = lVar6 + -1;
                lVar4 = lVar4 + 0x70;
            } while (lVar6 != 0);
        }
        if (lVar5 < lVar8) {
            lVar8 = lVar8 - lVar5;
            lVar4 = lVar5 * 0x1c;
            do {
                *(float *)(lVar4 + *(longlong *)(param_1 + 0x28)) = fVar11;
                lVar8 = lVar8 + -1;
                lVar4 = lVar4 + 0x1c;
            } while (lVar8 != 0);
        }
    }
    else {
        lVar5 = lVar4;
        if (3 < lVar8) {
            iVar7 = 2 - uVar3;
            lVar6 = (lVar8 - 4U >> 2) + 1;
            iVar9 = uVar3 - 2;
            iVar10 = (int)lVar6 * 4;
            lVar5 = lVar6 * 4;
            fVar12 = 1.0 / (float)(ulonglong)uVar1;
            do {
                iVar2 = iVar9 + 2;
                if (iVar2 < 0) {
                    iVar2 = iVar7 + -2;
                }
                *(float *)(lVar4 + *(longlong *)(param_1 + 0x28)) = (float)iVar2 * fVar12 * fVar11;
                iVar2 = iVar9 + 1;
                if (iVar2 < 0) {
                    iVar2 = iVar7 + -1;
                }
                *(float *)(lVar4 + 0x1c + *(longlong *)(param_1 + 0x28)) = (float)iVar2 * fVar12 * fVar11;
                iVar2 = iVar7;
                if (-1 < iVar9) {
                    iVar2 = iVar9;
                }
                *(float *)(lVar4 + 0x38 + *(longlong *)(param_1 + 0x28)) = (float)iVar2 * fVar12 * fVar11;
                iVar2 = iVar9 + -1;
                if (iVar2 < 0) {
                    iVar2 = iVar7 + 1;
                }
                iVar9 = iVar9 + -4;
                iVar7 = iVar7 + 4;
                *(float *)(lVar4 + 0x54 + *(longlong *)(param_1 + 0x28)) = (float)iVar2 * fVar12 * fVar11;
                lVar6 = lVar6 + -1;
                lVar4 = lVar4 + 0x70;
            } while (lVar6 != 0);
        }
        if (lVar5 < lVar8) {
            iVar9 = iVar10 - uVar3;
            iVar10 = uVar3 - iVar10;
            lVar8 = lVar8 - lVar5;
            lVar4 = lVar5 * 0x1c;
            do {
                iVar7 = iVar9;
                if (-1 < iVar10) {
                    iVar7 = iVar10;
                }
                iVar10 = iVar10 + -1;
                iVar9 = iVar9 + 1;
                *(float *)(lVar4 + *(longlong *)(param_1 + 0x28)) =
                        (float)iVar7 * (1.0 / (float)(ulonglong)uVar1) * fVar11;
                lVar8 = lVar8 + -1;
                lVar4 = lVar4 + 0x1c;
            } while (lVar8 != 0);
            return;
        }
    }
    return;
}



void FUN_1408f9b60(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
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

    uVar1 = *(uint *)(param_1 + 0x1d0);
    uVar3 = 0;
    fVar7 = (float)(ulonglong)*(uint *)(param_1 + 4) * 0.5;
    if (uVar1 != 0) {
        lVar4 = 0;
        fVar8 = 20.0;
        fVar10 = 0.9992;
        fVar12 = 0.0625;
        fVar11 = 2.0;
        fVar13 = 3.141593;
        fVar14 = -0.5;
        do {
            lVar2 = *(longlong *)(param_1 + 0x28);
            fVar6 = *(float *)(lVar2 + 4 + lVar4) * *(float *)(lVar2 + lVar4) * fVar12;
            if (fVar7 <= fVar6) {
                fVar6 = fVar7;
            }
            if (fVar6 <= fVar8) {
                fVar6 = fVar8;
            }
            fVar9 = *(float *)(param_1 + 8);
            fVar5 = (float)FUN_1408fc7f0((fVar6 / *(float *)(lVar2 + 8 + lVar4)) * fVar11 * fVar13 * fVar9
                                         * fVar14);
            if (fVar10 <= fVar5) {
                fVar5 = fVar10;
            }
            lVar2 = (ulonglong)(uVar3 >> 2) * 0x1c + (ulonglong)(uVar3 & 3);
            fVar6 = (float)FUN_1408fc950(fVar6 * 6.283185 * fVar9);
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0x1c;
            *(float *)(*(longlong *)(param_1 + 0x30) + 0x30 + lVar2 * 4) = fVar6 * fVar5 * fVar11;
            *(uint *)(*(longlong *)(param_1 + 0x30) + 0x40 + lVar2 * 4) =
                    (uint)(fVar5 * fVar5) ^ 0x80000000;
        } while (uVar3 < uVar1);
    }
    return;
}



ulonglong FUN_1408f9d50(undefined4 param_1,float param_2,float param_3,float param_4,
                        longlong param_5)

{
    float fVar1;
    ulonglong uVar2;
    undefined4 in_stack_00000028;
    undefined4 in_stack_00000030;

    uVar2 = FUN_1408fad00(param_1,in_stack_00000028,in_stack_00000030);
    fVar1 = (float)FUN_1408fbfc0(param_3 * 0.0625,
                                 (*(float *)(*(longlong *)(param_5 + 0x18) + 0x14) + 1.0) * 48.0 *
                                 0.0415241);
    return uVar2 & 0xffffffff00000000 | (ulonglong)(uint)((float)uVar2 * fVar1 * param_2 * param_4);
}



void FUN_1408f9e00(longlong param_1)

{
    float *pfVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    undefined in_XMM2 [16];
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined4 uVar18;
    float fVar19;
    float fVar20;

    uVar2 = *(uint *)(param_1 + 0x1d0);
    uVar8 = 0;
    if (uVar2 != 0) {
        lVar7 = 0;
        fVar15 = 1.442695;
        fVar14 = 0.01;
        fVar16 = -6.0;
        fVar17 = 0.05;
        uVar18 = 0x41200000;
        fVar19 = 0.0625;
        fVar20 = 48.0;
        fVar12 = 1.0;
        do {
            lVar6 = *(longlong *)(param_1 + 0x18);
            fVar9 = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x1fc);
            auVar11 = sqrtps(in_XMM2,ZEXT416((uint)(*(float *)(param_1 + 0x1f8) *
                                                    *(float *)(param_1 + 0x1f8) + fVar9)));
            fVar13 = fVar12;
            if (*(char *)(lVar6 + 0x54) != '\0') {
                fVar9 = *(float *)(lVar6 + 0xc) * fVar14;
                if (fVar9 < SUB164(auVar11,0)) {
                    fVar9 = (float)FUN_1408fe170(SUB164(auVar11,0) / fVar9);
                    fVar13 = fVar12;
                    fVar9 = (float)FUN_1408fbfc0(uVar18,fVar9 * fVar15 * *(float *)(lVar6 + 0x10) * fVar16 *
                                                        fVar17);
                    fVar12 = fVar9;
                }
            }
            lVar3 = *(longlong *)(param_1 + 0x28);
            in_XMM2 = ZEXT416(*(uint *)(lVar3 + 8 + lVar7));
            fVar9 = (float)FUN_1408fad00(fVar9,*(undefined4 *)(lVar3 + 4 + lVar7),param_1);
            fVar10 = (float)FUN_1408fbfc0(*(float *)(lVar3 + lVar7) * fVar19,
                                          (*(float *)(lVar6 + 0x14) + fVar13) * fVar20 * 0.0415241);
            pfVar1 = (float *)(lVar3 + 0xc + lVar7);
            uVar4 = uVar8 & 3;
            uVar5 = uVar8 >> 2;
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x1c;
            lVar6 = (ulonglong)uVar5 * 0x1c + (ulonglong)uVar4;
            fVar9 = fVar9 * fVar10 * *pfVar1 * fVar12;
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar6 * 4) = 0;
            *(float *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar6 * 4) = fVar9;
            *(float *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = fVar9;
            fVar12 = fVar13;
        } while (uVar8 < uVar2);
    }
    return;
}



void FUN_1408fa040(longlong param_1,ulonglong param_2)

{
    float *pfVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    uint uVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    undefined in_XMM2 [16];
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined4 uVar19;
    float fVar20;

    uVar2 = *(uint *)(param_1 + 0x1d0);
    uVar7 = 0;
    if (uVar2 != 0) {
        lVar8 = 0;
        fVar16 = 1.442695;
        fVar14 = 0.01;
        fVar17 = -6.0;
        fVar18 = 0.05;
        uVar19 = 0x41200000;
        fVar20 = 0.0625;
        fVar15 = 1.0 / (float)(param_2 & 0xffffffff);
        fVar12 = 1.0;
        do {
            lVar6 = *(longlong *)(param_1 + 0x18);
            fVar9 = *(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x1fc);
            auVar11 = sqrtps(in_XMM2,ZEXT416((uint)(*(float *)(param_1 + 0x1f8) *
                                                    *(float *)(param_1 + 0x1f8) + fVar9)));
            fVar13 = fVar12;
            if (*(char *)(lVar6 + 0x54) != '\0') {
                fVar9 = *(float *)(lVar6 + 0xc) * fVar14;
                if (fVar9 < SUB164(auVar11,0)) {
                    fVar9 = (float)FUN_1408fe170(SUB164(auVar11,0) / fVar9);
                    fVar13 = fVar12;
                    fVar9 = (float)FUN_1408fbfc0(uVar19,fVar9 * fVar16 * *(float *)(lVar6 + 0x10) * fVar17 *
                                                        fVar18);
                    fVar12 = fVar9;
                }
            }
            lVar3 = *(longlong *)(param_1 + 0x28);
            in_XMM2 = ZEXT416(*(uint *)(lVar3 + 8 + lVar8));
            fVar9 = (float)FUN_1408fad00(fVar9,*(undefined4 *)(lVar3 + 4 + lVar8),param_1);
            fVar10 = (float)FUN_1408fbfc0(*(float *)(lVar3 + lVar8) * fVar20,
                                          (*(float *)(lVar6 + 0x14) + fVar13) * 48.0 * 0.0415241);
            pfVar1 = (float *)(lVar3 + 0xc + lVar8);
            uVar4 = uVar7 & 3;
            uVar5 = uVar7 >> 2;
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 0x1c;
            lVar6 = (ulonglong)uVar5 * 0x1c + (ulonglong)uVar4;
            fVar9 = fVar9 * fVar10 * *pfVar1 * fVar12;
            *(float *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar6 * 4) =
                    (fVar9 - *(float *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4)) * fVar15;
            *(float *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar6 * 4) = fVar9;
            fVar12 = fVar13;
        } while (uVar7 < uVar2);
    }
    return;
}



void FUN_1408fa280(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong lVar5;
    uint uVar6;
    uint uVar7;

    uVar1 = *(uint *)(param_1 + 0x1d0);
    uVar6 = 0;
    if (3 < (int)uVar1) {
        uVar7 = 1;
        uVar2 = uVar6;
        do {
            uVar6 = uVar2 + 4;
            uVar4 = (ulonglong)(uVar2 >> 2);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + uVar4 * 0x70) = 0;
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + uVar4 * 0x70) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + uVar4 * 0x70);
            lVar5 = (ulonglong)(uVar7 >> 2) * 0x1c + (ulonglong)(uVar7 & 3);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar5 * 4) = 0;
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar5 * 4);
            lVar5 = (ulonglong)(uVar7 + 1 >> 2) * 0x1c + (ulonglong)(uVar7 + 1 & 3);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar5 * 4) = 0;
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar5 * 4);
            uVar2 = uVar7 - 2;
            uVar3 = uVar7 + 2;
            uVar7 = uVar7 + 4;
            lVar5 = (ulonglong)(uVar3 >> 2) * 0x1c + (ulonglong)(uVar2 & 3);
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar5 * 4) = 0;
            *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar5 * 4);
            uVar2 = uVar6;
        } while (uVar6 < uVar1 - 3);
    }
    for (; uVar6 < uVar1; uVar6 = uVar6 + 1) {
        lVar5 = (ulonglong)(uVar6 >> 2) * 0x1c + (ulonglong)(uVar6 & 3);
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar5 * 4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4) =
                *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20 + lVar5 * 4);
    }
    return;
}



undefined8 FUN_1408fa3a0(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    float fVar3;

    lVar1 = *(longlong *)(param_3 + 0x18);
    if ((*(char *)(lVar1 + 0x54) != '\0') && (fVar3 = *(float *)(lVar1 + 0xc) * 0.01, fVar3 < param_2)
            ) {
        fVar3 = (float)FUN_1408fe170(param_2 / fVar3);
        uVar2 = FUN_1408fbfc0(0x41200000,fVar3 * 1.442695 * *(float *)(lVar1 + 0x10) * -6.0 * 0.05);
        return uVar2;
    }
    return 0x3f800000;
}



void FUN_1408fa420(undefined8 param_1,float param_2,float param_3)

{
    undefined4 *in_R9;
    float fVar1;
    float fVar2;
    undefined4 uVar3;
    undefined4 *in_stack_00000028;

    fVar1 = (float)FUN_1408fbfc0(SQRT(param_2 * param_2 + param_3 * param_3),0x3e2aaaab);
    FUN_1408fd190(param_3,param_2);
    fVar2 = (float)FUN_1408fc950();
    fVar1 = fVar1 * fVar2 * 3.141593 * 0.25 + 0.7853982;
    uVar3 = FUN_1408fc950(fVar1);
    *in_R9 = uVar3;
    uVar3 = FUN_1408fe3d0(fVar1);
    *in_stack_00000028 = uVar3;
    return;
}



void FUN_1408fa4e0(undefined8 param_1,float param_2,float param_3)

{
    float *in_R9;
    undefined4 uVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *in_stack_00000028;
    float *in_stack_00000030;
    float *in_stack_00000038;

    uVar1 = FUN_1408fd190(param_3);
    fVar2 = (float)FUN_1408fbfc0(SQRT(param_2 * param_2 + param_3 * param_3),0x3e2aaaab);
    fVar3 = (float)FUN_1408fc950(uVar1);
    fVar5 = fVar3 * fVar2 * 3.141593 * 0.25 + 0.7853982;
    fVar3 = (float)FUN_1408fc950(fVar5);
    fVar5 = (float)FUN_1408fe3d0(fVar5);
    fVar4 = (float)FUN_1408fe3d0(uVar1);
    fVar4 = fVar4 * fVar2 * 3.141593 * 0.25 + 0.7853982;
    fVar2 = (float)FUN_1408fe3d0(fVar4);
    fVar4 = (float)FUN_1408fc950(fVar4);
    *in_R9 = fVar2 * fVar3;
    *in_stack_00000028 = fVar2 * fVar5;
    *in_stack_00000030 = fVar4 * fVar3;
    *in_stack_00000038 = fVar4 * fVar5;
    return;
}



void FUN_1408fa640(undefined8 param_1,int *param_2)

{
    if (*param_2 == 2) {
        FUN_1408fa420(param_1,param_2[0x7e],param_2[0x7f]);
        *(undefined8 *)(param_2 + 0x1d) = 0;
        param_2[0x19] = param_2[0x21];
        param_2[0x1a] = param_2[0x22];
    }
    else if (*param_2 == 4) {
        FUN_1408fa4e0(param_1,param_2[0x7e],param_2[0x7f]);
        *(undefined8 *)(param_2 + 0x1d) = 0;
        *(undefined8 *)(param_2 + 0x1f) = 0;
        param_2[0x19] = param_2[0x21];
        param_2[0x1a] = param_2[0x22];
        param_2[0x1b] = param_2[0x23];
        param_2[0x1c] = param_2[0x24];
        return;
    }
    return;
}



void FUN_1408fa750(undefined4 param_1,int *param_2,uint param_3)

{
    float fVar1;

    if (*param_2 == 2) {
        FUN_1408fa420(param_1,param_2[0x7e],param_2[0x7f]);
        fVar1 = 1.0 / (float)(ulonglong)param_3;
        param_2[0x1d] = (int)(((float)param_2[0x21] - (float)param_2[0x19]) * fVar1);
        param_2[0x1e] = (int)(((float)param_2[0x22] - (float)param_2[0x1a]) * fVar1);
    }
    else if (*param_2 == 4) {
        FUN_1408fa4e0(param_1,param_2[0x7e],param_2[0x7f]);
        fVar1 = 1.0 / (float)(ulonglong)param_3;
        param_2[0x1d] = (int)(((float)param_2[0x21] - (float)param_2[0x19]) * fVar1);
        param_2[0x1e] = (int)(((float)param_2[0x22] - (float)param_2[0x1a]) * fVar1);
        param_2[0x1f] = (int)(((float)param_2[0x23] - (float)param_2[0x1b]) * fVar1);
        param_2[0x20] = (int)(((float)param_2[0x24] - (float)param_2[0x1c]) * fVar1);
        return;
    }
    return;
}



void FUN_1408fa950(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;

    fVar6 = *(float *)(*(longlong *)(param_3 + 0x18) + 0x34);
    if (*(uint *)(param_3 + 0x1d0) != 0) {
        lVar2 = 0;
        uVar4 = (ulonglong)*(uint *)(param_3 + 0x1d0);
        uVar7 = 0x40000000;
        lVar3 = lVar2;
        do {
            lVar1 = *(longlong *)(param_3 + 0x28);
            fVar5 = (float)FUN_1408fbfc0(uVar7,fVar6 + *(float *)(lVar3 + 0x10 + lVar1) + param_2);
            lVar2 = lVar2 + 0xc;
            *(float *)(lVar3 + 4 + lVar1) =
                    fVar5 * *(float *)(*(longlong *)(param_3 + 0x20) + -0xc + lVar2);
            uVar4 = uVar4 - 1;
            lVar3 = lVar3 + 0x1c;
        } while (uVar4 != 0);
    }
    return;
}



void FUN_1408faa10(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;

    fVar9 = *(float *)(*(longlong *)(param_3 + 0x18) + 0x38);
    if (*(uint *)(param_3 + 0x1d0) != 0) {
        lVar2 = 0;
        uVar3 = (ulonglong)*(uint *)(param_3 + 0x1d0);
        fVar7 = 0.1;
        fVar8 = 50.0;
        uVar10 = 0x40000000;
        lVar4 = lVar2;
        do {
            lVar1 = *(longlong *)(param_3 + 0x28);
            fVar5 = (float)FUN_1408fbfc0(uVar10,fVar9 + *(float *)(lVar2 + 0x14 + lVar1) + param_2);
            fVar5 = fVar5 * *(float *)(lVar4 + 4 + *(longlong *)(param_3 + 0x20));
            fVar6 = fVar8;
            if ((fVar5 < fVar8) && (fVar6 = fVar5, fVar5 <= fVar7)) {
                fVar6 = fVar7;
            }
            *(float *)(lVar2 + 8 + lVar1) = fVar6;
            lVar2 = lVar2 + 0x1c;
            lVar4 = lVar4 + 0xc;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return;
}



void FUN_1408fab20(longlong param_1)

{
    float *pfVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    uint uVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    fVar11 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x3c);
    fVar9 = (float)FUN_1408fbfc0(0x41200000);
    uVar2 = *(uint *)(param_1 + 0x1d0);
    lVar4 = 0;
    uVar8 = 0;
    lVar5 = lVar4;
    if (3 < (int)uVar2) {
        uVar3 = (uVar2 - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar3;
        uVar8 = uVar3 * 4;
        lVar5 = (ulonglong)uVar3 * 4;
        lVar6 = lVar4;
        do {
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x20) + 8 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x34 + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x28) + 0x28 + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x20) + 0x14 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x50 + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            *(float *)(*(longlong *)(param_1 + 0x28) + 0x44 + lVar4) =
                    fVar10 * *(float *)(*(longlong *)(param_1 + 0x20) + 0x20 + lVar6);
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x6c + lVar4) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x20) + 0x2c + lVar6);
            lVar4 = lVar4 + 0x70;
            lVar6 = lVar6 + 0x30;
            *(float *)(*(longlong *)(param_1 + 0x28) + -0x10 + lVar4) = fVar10 * *pfVar1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    if (uVar8 < uVar2) {
        lVar4 = lVar5 * 0xc;
        lVar5 = lVar5 * 0x1c;
        uVar7 = (ulonglong)(uVar2 - uVar8);
        do {
            fVar10 = fVar11 * *(float *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar5) * fVar9;
            if (fVar10 < 16.0) {
                if (fVar10 <= 0.0) {
                    fVar10 = 0.0;
                }
            }
            else {
                fVar10 = 16.0;
            }
            pfVar1 = (float *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4);
            lVar5 = lVar5 + 0x1c;
            lVar4 = lVar4 + 0xc;
            *(float *)(*(longlong *)(param_1 + 0x28) + -0x10 + lVar5) = fVar10 * *pfVar1;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
    }
    return;
}



float FUN_1408fad00(undefined8 param_1,float param_2,float param_3,longlong param_4)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float local_res10;

    iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x20);
    fVar4 = 1.0;
    if (iVar1 == 0) {
        local_res10 = 1.0;
    }
    else if (iVar1 == 1) {
        local_res10 = SQRT(param_2 * 0.025);
    }
    else if (iVar1 == 2) {
        local_res10 = param_2 * 0.01;
    }
    else if (iVar1 == 3) {
        local_res10 = 650.0 / param_2;
    }
    param_2 = param_2 / param_3;
    fVar2 = (float)FUN_1408fe170(param_2);
    fVar2 = fVar2 * 1.442695;
    fVar3 = (float)FUN_1408fc7f0(param_2 * 2.0 * 3.141593 * *(float *)(param_4 + 8) * -0.5);
    if (0.9992 <= fVar3) {
        fVar3 = 0.9992;
    }
    fVar2 = (float)FUN_1408fc7f0(fVar2 * -0.023 * fVar2 + fVar2 * -0.1648 + 3.9543);
    return (fVar2 + 0.7) * local_res10 * (fVar4 - fVar3 * fVar3) * 0.5;
}



void FUN_1408fae50(longlong param_1,longlong *param_2,float *param_3)

{
    undefined (*pauVar1) [16];
    longlong lVar2;
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
    uint uVar15;
    uint uVar16;
    ulonglong uVar17;
    int iVar18;
    longlong lVar19;
    longlong lVar20;
    undefined (*pauVar21) [16];
    int iVar22;
    float *pfVar23;
    ulonglong uVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    ulonglong uVar27;
    uint uVar28;
    ulonglong uVar29;
    float fVar30;
    undefined auVar31 [16];
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
    undefined auVar32 [16];

    uVar29 = (ulonglong)*(ushort *)((longlong)param_2 + 0x12);
    uVar15 = *(int *)(param_1 + 0x1d0) + 3U >> 2;
    auVar31 = ZEXT416((uint)(float)uVar29) & (undefined  [16])0xffffffffffffffff;
    uVar26 = 0;
    uVar27 = 0;
    fVar30 = SUB164(auVar31,0) / (float)(ulonglong)*(uint *)(param_1 + 0x48);
    auVar32 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar30);
    iVar18 = (int)fVar30;
    if ((iVar18 != -0x80000000) && ((float)iVar18 != fVar30)) {
        uVar16 = movmskps(*(uint *)(param_1 + 0x48),
                          CONCAT88(SUB168(auVar31 >> 0x40,0),
                                   SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                          (undefined  [16])0xffffffffffffffff);
        auVar32 = ZEXT416((uint)(float)(iVar18 + (uVar16 & 1 ^ 1)));
    }
    uVar16 = (int)(longlong)SUB164(auVar32,0) + 3U & 0xfffffffc;
    pauVar1 = (undefined (*) [16])(param_3 + uVar16);
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + uVar27 * 4);
            iVar18 = (int)uVar27;
            *(undefined4 *)(param_1 + 0x50) =
                    *(undefined4 *)
                            (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(uint)(*(int *)(param_1 + 0x48) + iVar18) * 4);
            *(undefined4 *)(param_1 + 0x54) =
                    *(undefined4 *)
                            (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(uint)(*(int *)(param_1 + 0x48) * 2 + iVar18) * 4);
            uVar27 = (ulonglong)(iVar18 + 1);
            uVar17 = (ulonglong)uVar16;
            if ((uint)uVar29 < uVar16) {
                uVar17 = uVar29;
            }
            *(undefined4 *)(param_1 + 0x58) =
                    *(undefined4 *)
                            (*(longlong *)(param_1 + 0x40) +
                             (ulonglong)(uint)(*(int *)(param_1 + 0x48) * 3 + iVar18) * 4);
            iVar22 = (int)uVar17;
            FUN_1408f94f0(param_1,uVar17);
            iVar18 = *(int *)(param_1 + 0x1c0);
            if (iVar18 == 1) {
                FUN_1408fbb00(param_1 + 0xa0,param_3,uVar17);
            }
            else if (iVar18 == 2) {
                FUN_1408fbd40(param_1 + 0xa0);
            }
            else if (iVar18 == 3) {
                FUN_1408fbd90(param_1 + 0xa0);
            }
            else {
                FUN_1408f6b80();
            }
            FUN_1407e4830(pauVar1,0,uVar16 << 4);
            if (uVar15 != 0) {
                lVar20 = 0;
                uVar25 = (ulonglong)uVar15;
                lVar19 = 0;
                do {
                    lVar2 = *(longlong *)(param_1 + 0x30);
                    pfVar23 = (float *)(lVar20 + lVar2);
                    fVar30 = *pfVar23;
                    fVar37 = pfVar23[1];
                    fVar38 = pfVar23[2];
                    fVar39 = pfVar23[3];
                    pfVar23 = (float *)(lVar20 + 0x10 + lVar2);
                    fVar3 = *pfVar23;
                    fVar4 = pfVar23[1];
                    fVar5 = pfVar23[2];
                    fVar6 = pfVar23[3];
                    pfVar23 = (float *)(lVar20 + 0x30 + lVar2);
                    fVar7 = *pfVar23;
                    fVar8 = pfVar23[1];
                    fVar9 = pfVar23[2];
                    fVar10 = pfVar23[3];
                    pfVar23 = (float *)(lVar20 + 0x40 + lVar2);
                    fVar11 = *pfVar23;
                    fVar12 = pfVar23[1];
                    fVar13 = pfVar23[2];
                    fVar14 = pfVar23[3];
                    pfVar23 = (float *)(lVar20 + 0x50 + lVar2);
                    fVar33 = *pfVar23;
                    fVar34 = pfVar23[1];
                    fVar35 = pfVar23[2];
                    fVar36 = pfVar23[3];
                    pfVar23 = (float *)(lVar20 + 0x60 + lVar2);
                    fVar41 = *pfVar23;
                    fVar43 = pfVar23[1];
                    fVar45 = pfVar23[2];
                    fVar47 = pfVar23[3];
                    pfVar23 = param_3;
                    pauVar21 = pauVar1;
                    uVar24 = uVar17;
                    fVar40 = fVar41;
                    fVar42 = fVar43;
                    fVar44 = fVar45;
                    fVar46 = fVar47;
                    if (iVar22 != 0) {
                        do {
                            fVar47 = fVar36;
                            fVar45 = fVar35;
                            fVar43 = fVar34;
                            fVar41 = fVar33;
                            fVar36 = *pfVar23;
                            fVar30 = fVar30 + fVar3;
                            fVar37 = fVar37 + fVar4;
                            fVar38 = fVar38 + fVar5;
                            fVar39 = fVar39 + fVar6;
                            fVar33 = fVar41 * fVar7 + fVar36 + fVar40 * fVar11;
                            fVar34 = fVar43 * fVar8 + fVar36 + fVar42 * fVar12;
                            fVar35 = fVar45 * fVar9 + fVar36 + fVar44 * fVar13;
                            fVar36 = fVar47 * fVar10 + fVar36 + fVar46 * fVar14;
                            *pauVar21 = CONCAT412((fVar36 - fVar46) * fVar39 +
                                                  *(float *)((longlong)*pauVar21 + 0xc),
                                                  CONCAT48((fVar35 - fVar44) * fVar38 +
                                                           *(float *)((longlong)*pauVar21 + 8),
                                                           CONCAT44((fVar34 - fVar42) * fVar37 +
                                                                    *(float *)((longlong)*pauVar21 + 4),
                                                                    (fVar33 - fVar40) * fVar30 +
                                                                    *(float *)*pauVar21)));
                            uVar24 = uVar24 - 1;
                            pfVar23 = pfVar23 + 1;
                            pauVar21 = pauVar21[1];
                            fVar40 = fVar41;
                            fVar42 = fVar43;
                            fVar44 = fVar45;
                            fVar46 = fVar47;
                        } while (uVar24 != 0);
                    }
                    *(undefined (*) [16])(lVar19 + 0x50 + lVar2) =
                            CONCAT412(fVar36,CONCAT48(fVar35,CONCAT44(fVar34,fVar33)));
                    lVar20 = lVar20 + 0x70;
                    *(undefined (*) [16])(lVar19 + 0x60 + *(longlong *)(param_1 + 0x30)) =
                            CONCAT412(fVar47,CONCAT48(fVar45,CONCAT44(fVar43,fVar41)));
                    *(undefined (*) [16])(lVar19 + *(longlong *)(param_1 + 0x30)) =
                            CONCAT412(fVar39,CONCAT48(fVar38,CONCAT44(fVar37,fVar30)));
                    uVar25 = uVar25 - 1;
                    lVar19 = lVar19 + 0x70;
                } while (uVar25 != 0);
            }
            pfVar23 = (float *)(*param_2 + uVar26 * 4);
            pauVar21 = pauVar1;
            if (iVar22 != 0) {
                do {
                    *pfVar23 = *(float *)((longlong)*pauVar21 + 4) + *(float *)((longlong)*pauVar21 + 0xc) +
                               *(float *)*pauVar21 + *(float *)((longlong)*pauVar21 + 8);
                    uVar17 = uVar17 - 1;
                    pauVar21 = pauVar21[1];
                    pfVar23 = pfVar23 + 1;
                } while (uVar17 != 0);
            }
            FUN_1408fa280();
            uVar26 = (ulonglong)(uint)((int)uVar26 + iVar22);
            uVar28 = (uint)uVar29 - iVar22;
            uVar29 = (ulonglong)uVar28;
        } while (uVar28 != 0);
    }
    return;
}



void FUN_1408fb170(int *param_1,longlong *param_2,float *param_3)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    uint uVar10;
    int iVar11;
    longlong lVar12;
    undefined (*pauVar13) [16];
    uint uVar14;
    longlong lVar15;
    float *pfVar16;
    ulonglong uVar18;
    int iVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    float fVar23;
    undefined auVar24 [16];
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
    uint local_res8;
    ulonglong uVar17;
    undefined auVar25 [16];

    uVar22 = (ulonglong)*(ushort *)((longlong)param_2 + 0x12);
    iVar1 = param_1[0x74];
    auVar24 = ZEXT416((uint)(float)uVar22) & (undefined  [16])0xffffffffffffffff;
    uVar18 = 0;
    uVar17 = 0;
    local_res8 = 0;
    fVar23 = SUB164(auVar24,0) / (float)(ulonglong)(uint)param_1[0x12];
    auVar25 = CONCAT124(SUB1612(auVar24 >> 0x20,0),fVar23);
    iVar11 = (int)fVar23;
    if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar23)) {
        uVar10 = movmskps(param_1[0x12],
                          CONCAT88(SUB168(auVar24 >> 0x40,0),
                                   SUB168(auVar25,0) | SUB168(auVar25,0) << 0x20) &
                          (undefined  [16])0xffffffffffffffff);
        auVar25 = ZEXT416((uint)(float)(iVar11 + (uVar10 & 1 ^ 1)));
    }
    uVar10 = (int)(longlong)SUB164(auVar25,0) + 3U & 0xfffffffc;
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            iVar11 = (int)uVar17;
            param_1[0x13] = *(int *)(*(longlong *)(param_1 + 0x10) + uVar17 * 4);
            param_1[0x14] =
                    *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)(param_1[0x12] + iVar11) * 4);
            param_1[0x15] =
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             (ulonglong)(uint)(iVar11 + param_1[0x12] * 2) * 4);
            uVar17 = (ulonglong)uVar10;
            if ((uint)uVar22 < uVar10) {
                uVar17 = uVar22;
            }
            param_1[0x16] =
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             (ulonglong)(uint)(iVar11 + param_1[0x12] * 3) * 4);
            iVar19 = (int)uVar17;
            FUN_1408f94f0(param_1,uVar17);
            iVar2 = param_1[0x70];
            if (iVar2 == 1) {
                FUN_1408fbb00(param_1 + 0x28,param_3,uVar17);
            }
            else if (iVar2 == 2) {
                FUN_1408fbd40(param_1 + 0x28);
            }
            else if (iVar2 == 3) {
                FUN_1408fbd90(param_1 + 0x28);
            }
            else {
                FUN_1408f6b80();
            }
            FUN_1407e4830();
            if (iVar1 + 3U >> 2 != 0) {
                lVar15 = 0;
                uVar21 = (ulonglong)(iVar1 + 3U >> 2);
                lVar12 = 0;
                do {
                    lVar3 = *(longlong *)(param_1 + 0xc);
                    pfVar16 = (float *)(lVar15 + lVar3);
                    fVar23 = *pfVar16;
                    fVar33 = pfVar16[1];
                    fVar35 = pfVar16[2];
                    fVar37 = pfVar16[3];
                    pfVar16 = (float *)(lVar15 + 0x10 + lVar3);
                    fVar28 = *pfVar16;
                    fVar30 = pfVar16[1];
                    fVar32 = pfVar16[2];
                    fVar34 = pfVar16[3];
                    pfVar16 = (float *)(lVar15 + 0x30 + lVar3);
                    fVar36 = *pfVar16;
                    fVar38 = pfVar16[1];
                    fVar4 = pfVar16[2];
                    fVar5 = pfVar16[3];
                    pfVar16 = (float *)(lVar15 + 0x40 + lVar3);
                    fVar6 = *pfVar16;
                    fVar7 = pfVar16[1];
                    fVar8 = pfVar16[2];
                    fVar9 = pfVar16[3];
                    pfVar16 = (float *)(lVar15 + 0x50 + lVar3);
                    fVar26 = *pfVar16;
                    fVar27 = pfVar16[1];
                    fVar29 = pfVar16[2];
                    fVar31 = pfVar16[3];
                    pfVar16 = (float *)(lVar15 + 0x60 + lVar3);
                    fVar40 = *pfVar16;
                    fVar42 = pfVar16[1];
                    fVar44 = pfVar16[2];
                    fVar46 = pfVar16[3];
                    pfVar16 = param_3;
                    pauVar13 = (undefined (*) [16])(param_3 + uVar10);
                    uVar20 = uVar17;
                    fVar39 = fVar40;
                    fVar41 = fVar42;
                    fVar43 = fVar44;
                    fVar45 = fVar46;
                    if (iVar19 != 0) {
                        do {
                            fVar46 = fVar31;
                            fVar44 = fVar29;
                            fVar42 = fVar27;
                            fVar40 = fVar26;
                            fVar31 = *pfVar16;
                            fVar23 = fVar23 + fVar28;
                            fVar33 = fVar33 + fVar30;
                            fVar35 = fVar35 + fVar32;
                            fVar37 = fVar37 + fVar34;
                            fVar26 = fVar40 * fVar36 + fVar31 + fVar39 * fVar6;
                            fVar27 = fVar42 * fVar38 + fVar31 + fVar41 * fVar7;
                            fVar29 = fVar44 * fVar4 + fVar31 + fVar43 * fVar8;
                            fVar31 = fVar46 * fVar5 + fVar31 + fVar45 * fVar9;
                            *pauVar13 = CONCAT412((fVar31 - fVar45) * fVar37 +
                                                  *(float *)((longlong)*pauVar13 + 0xc),
                                                  CONCAT48((fVar29 - fVar43) * fVar35 +
                                                           *(float *)((longlong)*pauVar13 + 8),
                                                           CONCAT44((fVar27 - fVar41) * fVar33 +
                                                                    *(float *)((longlong)*pauVar13 + 4),
                                                                    (fVar26 - fVar39) * fVar23 +
                                                                    *(float *)*pauVar13)));
                            uVar20 = uVar20 - 1;
                            pfVar16 = pfVar16 + 1;
                            pauVar13 = pauVar13[1];
                            fVar39 = fVar40;
                            fVar41 = fVar42;
                            fVar43 = fVar44;
                            fVar45 = fVar46;
                        } while (uVar20 != 0);
                    }
                    *(undefined (*) [16])(lVar12 + 0x50 + lVar3) =
                            CONCAT412(fVar31,CONCAT48(fVar29,CONCAT44(fVar27,fVar26)));
                    lVar15 = lVar15 + 0x70;
                    *(undefined (*) [16])(lVar12 + 0x60 + *(longlong *)(param_1 + 0xc)) =
                            CONCAT412(fVar46,CONCAT48(fVar44,CONCAT44(fVar42,fVar40)));
                    *(undefined (*) [16])(lVar12 + *(longlong *)(param_1 + 0xc)) =
                            CONCAT412(fVar37,CONCAT48(fVar35,CONCAT44(fVar33,fVar23)));
                    uVar21 = uVar21 - 1;
                    lVar12 = lVar12 + 0x70;
                } while (uVar21 != 0);
            }
            pfVar16 = (float *)(*param_2 + uVar18 * 4);
            uVar21 = uVar17;
            pauVar13 = (undefined (*) [16])(param_3 + uVar10);
            if (iVar19 != 0) {
                do {
                    *pfVar16 = *(float *)((longlong)*pauVar13 + 4) + *(float *)((longlong)*pauVar13 + 0xc) +
                               *(float *)*pauVar13 + *(float *)((longlong)*pauVar13 + 8);
                    uVar21 = uVar21 - 1;
                    pauVar13 = pauVar13[1];
                    pfVar16 = pfVar16 + 1;
                } while (uVar21 != 0);
            }
            FUN_1408fa280(param_1);
            fVar23 = (float)param_1[0x19];
            fVar33 = (float)param_1[0x1a];
            fVar35 = (float)param_1[0x1d];
            uVar17 = uVar17 >> 2;
            fVar37 = (float)param_1[0x1e];
            uVar14 = (uint)uVar17;
            fVar28 = fVar23;
            fVar30 = fVar23;
            fVar32 = fVar23;
            fVar34 = fVar33;
            fVar36 = fVar33;
            fVar38 = fVar33;
            pfVar16 = (float *)(*param_2 + uVar18 * 4);
            while (uVar14 != 0) {
                fVar4 = *pfVar16;
                fVar5 = pfVar16[1];
                fVar6 = pfVar16[2];
                fVar7 = pfVar16[3];
                fVar23 = fVar23 + fVar35;
                fVar28 = fVar28 + fVar35;
                fVar30 = fVar30 + fVar35;
                fVar32 = fVar32 + fVar35;
                fVar33 = fVar33 + fVar37;
                fVar34 = fVar34 + fVar37;
                fVar36 = fVar36 + fVar37;
                fVar38 = fVar38 + fVar37;
                *pfVar16 = fVar4 * fVar23;
                pfVar16[1] = fVar5 * fVar28;
                pfVar16[2] = fVar6 * fVar30;
                pfVar16[3] = fVar7 * fVar32;
                *(undefined (*) [16])(pfVar16 + 0x400) =
                        CONCAT412(fVar7 * fVar38,
                                  CONCAT48(fVar6 * fVar36,CONCAT44(fVar5 * fVar34,fVar4 * fVar33)));
                uVar14 = (int)uVar17 - 1;
                uVar17 = (ulonglong)uVar14;
                pfVar16 = pfVar16 + 4;
            }
            if (*param_1 == 2) {
                *(undefined8 *)(param_1 + 0x1d) = 0;
                param_1[0x19] = param_1[0x21];
                param_1[0x1a] = param_1[0x22];
            }
            else if (*param_1 == 4) {
                param_1[0x19] = param_1[0x21];
                *(undefined8 *)(param_1 + 0x1d) = 0;
                param_1[0x1a] = param_1[0x22];
                *(undefined8 *)(param_1 + 0x1f) = 0;
                param_1[0x1b] = param_1[0x23];
                param_1[0x1c] = param_1[0x24];
            }
            uVar17 = (ulonglong)(iVar11 + 1);
            local_res8 = local_res8 + iVar19;
            uVar18 = (ulonglong)local_res8;
            uVar14 = (uint)uVar22 - iVar19;
            uVar22 = (ulonglong)uVar14;
        } while (uVar14 != 0);
    }
    return;
}



void FUN_1408fb540(int *param_1,longlong *param_2,float *param_3)

{
    undefined (*pauVar1) [16];
    longlong lVar2;
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
    uint uVar15;
    uint uVar16;
    int iVar17;
    longlong lVar18;
    longlong lVar19;
    undefined (*pauVar20) [16];
    int iVar21;
    ulonglong uVar22;
    float *pfVar23;
    ulonglong uVar24;
    ulonglong uVar25;
    uint uVar26;
    ulonglong uVar27;
    ulonglong uVar28;
    ulonglong uVar29;
    float fVar30;
    undefined auVar31 [16];
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
    undefined auVar32 [16];

    uVar27 = (ulonglong)*(ushort *)((longlong)param_2 + 0x12);
    uVar15 = param_1[0x74] + 3U >> 2;
    auVar31 = ZEXT416((uint)(float)uVar27) & (undefined  [16])0xffffffffffffffff;
    uVar29 = 0;
    uVar28 = 0;
    fVar30 = SUB164(auVar31,0) / (float)(ulonglong)(uint)param_1[0x12];
    auVar32 = CONCAT124(SUB1612(auVar31 >> 0x20,0),fVar30);
    iVar17 = (int)fVar30;
    if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar30)) {
        uVar16 = movmskps(param_1[0x12],
                          CONCAT88(SUB168(auVar31 >> 0x40,0),
                                   SUB168(auVar32,0) | SUB168(auVar32,0) << 0x20) &
                          (undefined  [16])0xffffffffffffffff);
        auVar32 = ZEXT416((uint)(float)(iVar17 + (uVar16 & 1 ^ 1)));
    }
    uVar16 = (int)(longlong)SUB164(auVar32,0) + 3U & 0xfffffffc;
    pauVar1 = (undefined (*) [16])(param_3 + uVar16);
    if (*(ushort *)((longlong)param_2 + 0x12) != 0) {
        do {
            param_1[0x13] = *(int *)(*(longlong *)(param_1 + 0x10) + uVar28 * 4);
            iVar17 = (int)uVar28;
            param_1[0x14] =
                    *(int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)(param_1[0x12] + iVar17) * 4);
            param_1[0x15] =
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             (ulonglong)(uint)(param_1[0x12] * 2 + iVar17) * 4);
            uVar28 = (ulonglong)(iVar17 + 1);
            uVar22 = (ulonglong)uVar16;
            if ((uint)uVar27 < uVar16) {
                uVar22 = uVar27;
            }
            param_1[0x16] =
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             (ulonglong)(uint)(param_1[0x12] * 3 + iVar17) * 4);
            iVar21 = (int)uVar22;
            FUN_1408f94f0(param_1,uVar22);
            iVar17 = param_1[0x70];
            if (iVar17 == 1) {
                FUN_1408fbb00(param_1 + 0x28,param_3,uVar22);
            }
            else if (iVar17 == 2) {
                FUN_1408fbd40(param_1 + 0x28);
            }
            else if (iVar17 == 3) {
                FUN_1408fbd90(param_1 + 0x28);
            }
            else {
                FUN_1408f6b80();
            }
            FUN_1407e4830(pauVar1,0,uVar16 << 4);
            if (uVar15 != 0) {
                lVar19 = 0;
                uVar25 = (ulonglong)uVar15;
                lVar18 = 0;
                do {
                    lVar2 = *(longlong *)(param_1 + 0xc);
                    pfVar23 = (float *)(lVar19 + lVar2);
                    fVar30 = *pfVar23;
                    fVar37 = pfVar23[1];
                    fVar38 = pfVar23[2];
                    fVar39 = pfVar23[3];
                    pfVar23 = (float *)(lVar19 + 0x10 + lVar2);
                    fVar3 = *pfVar23;
                    fVar4 = pfVar23[1];
                    fVar5 = pfVar23[2];
                    fVar6 = pfVar23[3];
                    pfVar23 = (float *)(lVar19 + 0x30 + lVar2);
                    fVar7 = *pfVar23;
                    fVar8 = pfVar23[1];
                    fVar9 = pfVar23[2];
                    fVar10 = pfVar23[3];
                    pfVar23 = (float *)(lVar19 + 0x40 + lVar2);
                    fVar11 = *pfVar23;
                    fVar12 = pfVar23[1];
                    fVar13 = pfVar23[2];
                    fVar14 = pfVar23[3];
                    pfVar23 = (float *)(lVar19 + 0x50 + lVar2);
                    fVar33 = *pfVar23;
                    fVar34 = pfVar23[1];
                    fVar35 = pfVar23[2];
                    fVar36 = pfVar23[3];
                    pfVar23 = (float *)(lVar19 + 0x60 + lVar2);
                    fVar41 = *pfVar23;
                    fVar43 = pfVar23[1];
                    fVar45 = pfVar23[2];
                    fVar47 = pfVar23[3];
                    pfVar23 = param_3;
                    pauVar20 = pauVar1;
                    uVar24 = uVar22;
                    fVar40 = fVar41;
                    fVar42 = fVar43;
                    fVar44 = fVar45;
                    fVar46 = fVar47;
                    if (iVar21 != 0) {
                        do {
                            fVar47 = fVar36;
                            fVar45 = fVar35;
                            fVar43 = fVar34;
                            fVar41 = fVar33;
                            fVar36 = *pfVar23;
                            fVar30 = fVar30 + fVar3;
                            fVar37 = fVar37 + fVar4;
                            fVar38 = fVar38 + fVar5;
                            fVar39 = fVar39 + fVar6;
                            fVar33 = fVar41 * fVar7 + fVar36 + fVar40 * fVar11;
                            fVar34 = fVar43 * fVar8 + fVar36 + fVar42 * fVar12;
                            fVar35 = fVar45 * fVar9 + fVar36 + fVar44 * fVar13;
                            fVar36 = fVar47 * fVar10 + fVar36 + fVar46 * fVar14;
                            *pauVar20 = CONCAT412((fVar36 - fVar46) * fVar39 +
                                                  *(float *)((longlong)*pauVar20 + 0xc),
                                                  CONCAT48((fVar35 - fVar44) * fVar38 +
                                                           *(float *)((longlong)*pauVar20 + 8),
                                                           CONCAT44((fVar34 - fVar42) * fVar37 +
                                                                    *(float *)((longlong)*pauVar20 + 4),
                                                                    (fVar33 - fVar40) * fVar30 +
                                                                    *(float *)*pauVar20)));
                            uVar24 = uVar24 - 1;
                            pfVar23 = pfVar23 + 1;
                            pauVar20 = pauVar20[1];
                            fVar40 = fVar41;
                            fVar42 = fVar43;
                            fVar44 = fVar45;
                            fVar46 = fVar47;
                        } while (uVar24 != 0);
                    }
                    *(undefined (*) [16])(lVar18 + 0x50 + lVar2) =
                            CONCAT412(fVar36,CONCAT48(fVar35,CONCAT44(fVar34,fVar33)));
                    lVar19 = lVar19 + 0x70;
                    *(undefined (*) [16])(lVar18 + 0x60 + *(longlong *)(param_1 + 0xc)) =
                            CONCAT412(fVar47,CONCAT48(fVar45,CONCAT44(fVar43,fVar41)));
                    *(undefined (*) [16])(lVar18 + *(longlong *)(param_1 + 0xc)) =
                            CONCAT412(fVar39,CONCAT48(fVar38,CONCAT44(fVar37,fVar30)));
                    uVar25 = uVar25 - 1;
                    lVar18 = lVar18 + 0x70;
                } while (uVar25 != 0);
            }
            pfVar23 = (float *)(*param_2 + uVar29 * 4);
            uVar25 = uVar22;
            pauVar20 = pauVar1;
            if (iVar21 != 0) {
                do {
                    *pfVar23 = *(float *)((longlong)*pauVar20 + 4) + *(float *)((longlong)*pauVar20 + 0xc) +
                               *(float *)*pauVar20 + *(float *)((longlong)*pauVar20 + 8);
                    uVar25 = uVar25 - 1;
                    pauVar20 = pauVar20[1];
                    pfVar23 = pfVar23 + 1;
                } while (uVar25 != 0);
            }
            FUN_1408fa280(param_1);
            FUN_1408fb930(param_1,param_2,uVar22,uVar29);
            if (*param_1 == 2) {
                *(undefined8 *)(param_1 + 0x1d) = 0;
                param_1[0x19] = param_1[0x21];
                param_1[0x1a] = param_1[0x22];
            }
            else if (*param_1 == 4) {
                param_1[0x19] = param_1[0x21];
                *(undefined8 *)(param_1 + 0x1d) = 0;
                param_1[0x1a] = param_1[0x22];
                *(undefined8 *)(param_1 + 0x1f) = 0;
                param_1[0x1b] = param_1[0x23];
                param_1[0x1c] = param_1[0x24];
            }
            uVar29 = (ulonglong)(uint)((int)uVar29 + iVar21);
            uVar26 = (uint)uVar27 - iVar21;
            uVar27 = (ulonglong)uVar26;
        } while (uVar26 != 0);
    }
    return;
}



void FUN_1408fb930(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined (*pauVar9) [16];
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
    float fVar23;
    float fVar24;
    float fVar25;

    fVar10 = *(float *)(param_1 + 100);
    fVar14 = *(float *)(param_1 + 0x68);
    fVar18 = *(float *)(param_1 + 0x6c);
    fVar22 = *(float *)(param_1 + 0x70);
    fVar1 = *(float *)(param_1 + 0x74);
    fVar2 = *(float *)(param_1 + 0x80);
    fVar3 = *(float *)(param_1 + 0x78);
    fVar4 = *(float *)(param_1 + 0x7c);
    fVar11 = fVar10;
    fVar12 = fVar10;
    fVar13 = fVar10;
    fVar15 = fVar14;
    fVar16 = fVar14;
    fVar17 = fVar14;
    pauVar9 = (undefined (*) [16])(*param_2 + (ulonglong)param_4 * 4);
    fVar19 = fVar18;
    fVar20 = fVar18;
    fVar21 = fVar18;
    fVar23 = fVar22;
    fVar24 = fVar22;
    fVar25 = fVar22;
    for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
        fVar5 = *(float *)*pauVar9;
        fVar6 = *(float *)(*pauVar9 + 4);
        fVar7 = *(float *)(*pauVar9 + 8);
        fVar8 = *(float *)(*pauVar9 + 0xc);
        fVar10 = fVar10 + fVar1;
        fVar11 = fVar11 + fVar1;
        fVar12 = fVar12 + fVar1;
        fVar13 = fVar13 + fVar1;
        fVar14 = fVar14 + fVar3;
        fVar15 = fVar15 + fVar3;
        fVar16 = fVar16 + fVar3;
        fVar17 = fVar17 + fVar3;
        fVar18 = fVar18 + fVar4;
        fVar19 = fVar19 + fVar4;
        fVar20 = fVar20 + fVar4;
        fVar21 = fVar21 + fVar4;
        fVar22 = fVar22 + fVar2;
        fVar23 = fVar23 + fVar2;
        fVar24 = fVar24 + fVar2;
        fVar25 = fVar25 + fVar2;
        *pauVar9 = CONCAT412(fVar8 * fVar13,
                             CONCAT48(fVar7 * fVar12,CONCAT44(fVar6 * fVar11,fVar5 * fVar10)));
        pauVar9[0x100] =
                CONCAT412(fVar8 * fVar17,CONCAT48(fVar7 * fVar16,CONCAT44(fVar6 * fVar15,fVar5 * fVar14)));
        pauVar9[0x200] =
                CONCAT412(fVar8 * fVar21,CONCAT48(fVar7 * fVar20,CONCAT44(fVar6 * fVar19,fVar5 * fVar18)));
        pauVar9[0x300] =
                CONCAT412(fVar8 * fVar25,CONCAT48(fVar7 * fVar24,CONCAT44(fVar6 * fVar23,fVar5 * fVar22)));
        pauVar9 = pauVar9[1];
    }
    return;
}



void FUN_1408fba30(longlong param_1,int param_2,uint param_3)

{
    undefined4 uVar1;

    *(int *)(param_1 + 0x120) = param_2;
    uVar1 = DAT_140c1aba8;
    if (param_2 == 1) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(float *)(param_1 + 0xc) = 1.0 - 251.3274 / (float)(ulonglong)param_3;
        return;
    }
    if (param_2 == 3) {
        FUN_1408a8e90(DAT_140c1abb0,DAT_140c1abb4,DAT_140c1abb8,DAT_140c1abbc,param_1 + 0x70);
        return;
    }
    if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x60) = 0xbf7eb852;
        *(undefined4 *)(param_1 + 0x5c) = uVar1;
    }
    return;
}



void FUN_1408fbb00(longlong param_1,float *param_2,uint param_3,undefined8 param_4)

{
    uint uVar1;
    float *pfVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    float *pfVar8;
    float *pfVar9;
    float *pfVar10;
    float *pfVar11;
    undefined4 in_XMM6_Da;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    FUN_1408f6b80(param_1,param_2,param_3 * 2,param_4,
                  CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    uVar7 = *(uint *)(param_1 + 0x10);
    pfVar2 = param_2 + param_3;
    fVar14 = *(float *)(param_1 + 0x14);
    if (param_2 < pfVar2) {
        lVar4 = (longlong)pfVar2 + (3 - (longlong)param_2);
        pfVar8 = param_2;
        pfVar11 = pfVar2;
        if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
            pfVar9 = param_2;
            pfVar10 = pfVar2;
            do {
                fVar12 = *pfVar10;
                pfVar8 = pfVar9 + 4;
                uVar5 = uVar7 + 1 & 0xffff;
                pfVar11 = pfVar10 + 4;
                uVar1 = uVar5 + 1;
                uVar6 = uVar1 & 0xffff;
                fVar13 = *(float *)(param_1 + 0x18 +
                                    (longlong)
                                    *(int *)(&DAT_1409c6350 +
                                             (ulonglong)((-uVar5 & uVar7 + 1 & 0xffff) * 0x77cb531 >> 0x1b) *
                                             4) * 4);
                *(float *)(param_1 + 0x18 +
                           (longlong)
                           *(int *)(&DAT_1409c6350 +
                                    (ulonglong)((-uVar5 & uVar7 + 1 & 0xffff) * 0x77cb531 >> 0x1b) * 4) * 4) =
                        fVar12;
                fVar12 = (fVar14 - fVar13) + fVar12;
                iVar3 = *(int *)(&DAT_1409c6350 +
                                 (ulonglong)((-uVar6 & uVar1 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
                uVar6 = uVar6 + 1;
                uVar7 = uVar6 & 0xffff;
                fVar14 = *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4);
                *pfVar9 = (fVar12 + *pfVar9) * 0.1470588;
                fVar13 = pfVar10[1];
                *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4) = fVar13;
                fVar13 = (fVar12 - fVar14) + fVar13;
                iVar3 = *(int *)(&DAT_1409c6350 +
                                 (ulonglong)((-uVar7 & uVar6 & 0xffff) * 0x77cb531 >> 0x1b) * 4);
                uVar7 = uVar7 + 1 & 0xffff;
                fVar14 = *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4);
                pfVar9[1] = (fVar13 + pfVar9[1]) * 0.1470588;
                fVar12 = pfVar10[2];
                *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4) = fVar12;
                fVar12 = (fVar13 - fVar14) + fVar12;
                iVar3 = *(int *)(&DAT_1409c6350 + (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4);
                fVar14 = *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4);
                pfVar9[2] = (fVar12 + pfVar9[2]) * 0.1470588;
                fVar14 = (fVar12 - fVar14) + pfVar10[3];
                *(float *)(param_1 + 0x18 + (longlong)iVar3 * 4) = pfVar10[3];
                pfVar9[3] = (fVar14 + pfVar9[3]) * 0.1470588;
                pfVar9 = pfVar8;
                pfVar10 = pfVar11;
            } while ((longlong)pfVar8 < (longlong)(pfVar2 + -3));
        }
        if (pfVar8 < pfVar2) {
            pfVar9 = pfVar8;
            do {
                fVar12 = *(float *)(((longlong)pfVar11 - (longlong)pfVar8) + (longlong)pfVar9);
                pfVar10 = pfVar9 + 1;
                uVar7 = uVar7 + 1 & 0xffff;
                fVar13 = *(float *)(param_1 + 0x18 +
                                    (longlong)
                                    *(int *)(&DAT_1409c6350 +
                                             (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4) * 4);
                *(float *)(param_1 + 0x18 +
                           (longlong)
                           *(int *)(&DAT_1409c6350 + (ulonglong)((-uVar7 & uVar7) * 0x77cb531 >> 0x1b) * 4) *
                           4) = fVar12;
                fVar14 = (fVar14 - fVar13) + fVar12;
                *pfVar9 = (fVar14 + *pfVar9) * 0.1470588;
                pfVar9 = pfVar10;
            } while (pfVar10 < pfVar2);
        }
    }
    FUN_1408aad50(param_1 + 4,param_2,(ulonglong)param_3);
    *(uint *)(param_1 + 0x10) = uVar7;
    *(float *)(param_1 + 0x14) = fVar14;
    return;
}



void FUN_1408fbd40(longlong param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float *pfVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    float *pfVar6;
    float fVar7;

    FUN_1408f6b80();
    pfVar1 = (float *)(param_1 + 0x58);
    pfVar2 = param_2 + (param_3 & 0xffffffff);
    if (param_2 < pfVar2) {
        lVar5 = (longlong)pfVar2 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2) {
            fVar3 = *(float *)(param_1 + 0x5c);
            fVar4 = *(float *)(param_1 + 0x60);
            pfVar6 = param_2;
            do {
                param_2 = pfVar6 + 4;
                fVar7 = fVar3 * *pfVar6 - fVar4 * *pfVar1;
                *pfVar6 = fVar7;
                fVar7 = fVar3 * pfVar6[1] - fVar4 * fVar7;
                pfVar6[1] = fVar7;
                fVar7 = fVar3 * pfVar6[2] - fVar4 * fVar7;
                pfVar6[2] = fVar7;
                fVar7 = fVar3 * pfVar6[3] - fVar4 * fVar7;
                pfVar6[3] = fVar7;
                *pfVar1 = fVar7;
                pfVar6 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar2 + -3));
        }
        if (param_2 < pfVar2) {
            fVar3 = *(float *)(param_1 + 0x5c);
            fVar4 = *(float *)(param_1 + 0x60);
            do {
                pfVar6 = param_2 + 1;
                fVar7 = fVar3 * *param_2 - fVar4 * *pfVar1;
                *param_2 = fVar7;
                *pfVar1 = fVar7;
                param_2 = pfVar6;
            } while (pfVar6 < pfVar2);
        }
    }
    return;
}



void FUN_1408fbd90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    FUN_1408f6b80();
    FUN_1408a8970(param_1 + 0x70,param_2,param_3,0);
    return;
}



BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
    BOOL BVar1;

    // WARNING: Could not recover jumptable at 0x0001408fbdce. Too many branches
    // WARNING: Treating indirect jump as call
    BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
    return BVar1;
}



void RtlUnwindEx(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,
                 PVOID ReturnValue,PCONTEXT ContextRecord,PUNWIND_HISTORY_TABLE HistoryTable)

{
    // WARNING: Could not recover jumptable at 0x0001408fbdd4. Too many branches
    // WARNING: Treating indirect jump as call
    RtlUnwindEx(TargetFrame,TargetIp,ExceptionRecord,ReturnValue,ContextRecord,HistoryTable);
    return;
}



wchar_t * FUN_1408fbddc(wchar_t *param_1,wchar_t *param_2)

{
    _ptiddata p_Var1;
    wchar_t *pwVar2;
    wchar_t wVar3;
    wchar_t *pwVar4;

    p_Var1 = _getptd();
    if (param_1 == (wchar_t *)0x0) {
        param_1 = p_Var1->_wtoken;
    }
    for (; pwVar4 = param_1, *param_1 != L'\0'; param_1 = param_1 + 1) {
        pwVar2 = param_2;
        if (*param_2 != L'\0') {
            wVar3 = *param_2;
            do {
                if (wVar3 == *param_1) break;
                pwVar2 = pwVar2 + 1;
                wVar3 = *pwVar2;
            } while (wVar3 != L'\0');
        }
        if (*pwVar2 == L'\0') break;
    }
    do {
        if (*pwVar4 == L'\0') {
            LAB_1408fbe6d:
            p_Var1->_wtoken = pwVar4;
            if (param_1 == pwVar4) {
                param_1 = (wchar_t *)0x0;
            }
            return param_1;
        }
        pwVar2 = param_2;
        if (*param_2 != L'\0') {
            wVar3 = *param_2;
            do {
                if (wVar3 == *pwVar4) break;
                pwVar2 = pwVar2 + 1;
                wVar3 = *pwVar2;
            } while (wVar3 != L'\0');
        }
        if (*pwVar2 != L'\0') {
            *pwVar4 = L'\0';
            pwVar4 = pwVar4 + 1;
            goto LAB_1408fbe6d;
        }
        pwVar4 = pwVar4 + 1;
    } while( true );
}



int FUN_1408fbe84(byte *param_1,byte *param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;

    do {
        bVar1 = *param_1;
        uVar3 = (uint)bVar1;
        param_1 = param_1 + 1;
        if (bVar1 - 0x41 < 0x1a) {
            uVar3 = bVar1 + 0x20;
        }
        bVar1 = *param_2;
        uVar2 = (uint)bVar1;
        param_2 = param_2 + 1;
        if (bVar1 - 0x41 < 0x1a) {
            uVar2 = bVar1 + 0x20;
        }
    } while ((uVar3 != 0) && (uVar3 == uVar2));
    return uVar3 - uVar2;
}



ulonglong FUN_1408fbec0(longlong param_1,undefined *param_2)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    ulonglong uVar5;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    if (DAT_140c5f560 == 0) {
        if ((param_1 != 0) && (param_2 != (undefined *)0x0)) {
            uVar5 = FUN_1408fbe84();
            return uVar5;
        }
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
        return 0x7fffffff;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
    if ((param_1 == 0) || (param_2 == (undefined *)0x0)) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
        uVar5 = 0x7fffffff;
    }
    else if (*(longlong *)(local_28[0] + 0x138) == 0) {
        uVar1 = FUN_1408fbe84(param_1,param_2);
        uVar5 = (ulonglong)uVar1;
    }
    else {
        param_1 = param_1 - (longlong)param_2;
        do {
            iVar2 = FUN_1407f6858(param_2[param_1],local_28);
            iVar3 = FUN_1407f6858(*param_2,local_28);
            param_2 = param_2 + 1;
            if (iVar2 == 0) break;
        } while (iVar2 == iVar3);
        uVar5 = (ulonglong)(uint)(iVar2 - iVar3);
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408fbfc0(float param_1,float param_2,ulonglong param_3)

{
    float fVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    double dVar8;
    double dVar9;
    uint local_a8;

    uVar3 = (ulonglong)(uint)param_2;
    dVar8 = (double)(ulonglong)(uint)param_1;
    if (((uint)param_2 & 0x7fffffff) == 0) {
        fVar1 = 0.0;
        if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
            fVar1 = param_1;
        }
    }
    else {
        if (param_2 != 1.0) {
            local_a8 = 0;
            if (((uint)param_1 & 0x80000000) != 0x80000000) {
                if (param_1 == 1.0) {
                    fVar1 = 0.0;
                    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
                        fVar1 = param_2;
                    }
                    if (((uint)fVar1 & 0x7fffff) == 0) {
                        return;
                    }
                    if (((uint)param_2 & 0x400000) != 0) {
                        return;
                    }
                    FUN_14090229c();
                    return;
                }
                if (param_1 != 0.0) {
                    if (((uint)param_1 & 0x7f800000) == 0x7f800000) goto LAB_1408fc5e0;
                    if (0x4f000000 < ((uint)param_2 & 0x7f800000)) goto LAB_1408fc4f0;
                    fVar1 = param_1;
                    if (((uint)param_2 & 0x7f800000) < 0x2e800000) {
                        return;
                    }
                    LAB_1408fc089:
                    iVar7 = 0;
                    dVar8 = (double)fVar1;
                    uVar2 = ((ulonglong)dVar8 & 0xfe00000000000) + ((ulonglong)dVar8 & 0x100000000000) * 2;
                    uVar3 = uVar2 >> 0x2d;
                    dVar9 = ((double)(uVar2 | SUB168(_DAT_1409c74e0,0)) -
                             (double)((ulonglong)dVar8 & SUB168(_DAT_1409c7490,0) | SUB168(_DAT_1409c74e0,0)))
                            * *(double *)(&DAT_1409c7940 + uVar3 * 8);
                    dVar8 = ((*(double *)(&DAT_1409c7530 + uVar3 * 8) -
                              ((dVar9 * 0.5 + 1.0) * dVar9 +
                               (dVar9 * 0.25 + 0.3333333333333333) * dVar9 * dVar9 * dVar9)) +
                             (double)((uint)((ulonglong)dVar8 >> 0x34) - 0x3ff) * 0.6931471805599453) *
                            (double)param_2;
                    if (4096.0 <= dVar8 * 46.16624130844683) {
                        iVar7 = 0x7f800000;
                    }
                    else if (-4768.0 <= dVar8 * 46.16624130844683) {
                        return;
                    }
                    LAB_1408fc6f0:
                    uVar4 = 7;
                    if (iVar7 != 0) {
                        uVar4 = 9;
                    }
                    FUN_14090229c(param_3,dVar8,uVar3,uVar4);
                    return;
                }
                goto LAB_1408fc540;
            }
            if (((uint)param_2 & 0x7f800000) < 0x4f000001) {
                uVar6 = (uint)param_2 & 0x7fffffff;
                param_3 = 0x17;
                uVar5 = (uVar6 >> 0x17) - 0x7f;
                if ((int)uVar5 < 0) {
                    LAB_1408fc4a0:
                    if (((uint)param_1 & 0x7f800000) != 0x7f800000) {
                        if (param_1 != -0.0) {
                            FUN_14090229c();
                            return;
                        }
                        goto LAB_1408fc540;
                    }
                }
                else {
                    fVar1 = (float)((uint)param_1 & 0x7fffffff);
                    param_3 = (ulonglong)uVar5;
                    if ((int)uVar5 < 0x19) {
                        if ((0x7fffffU >> ((byte)uVar5 & 0x1f) & uVar6) != 0) goto LAB_1408fc4a0;
                        if ((0x800000U >> ((byte)uVar5 & 0x1f) & uVar6) != 0) {
                            local_a8 = 0x80000000;
                        }
                    }
                    if (param_1 == -0.0) {
                        LAB_1408fc540:
                        if (((uint)param_2 & 0x7f800000) != 0x7f800000) {
                            if (((uint)param_2 & 0x80000000) == 0) {
                                return;
                            }
                            LAB_1408fc580:
                            FUN_14090229c();
                            return;
                        }
                        if (param_2 == -INFINITY) goto LAB_1408fc580;
                        uVar6 = (uint)param_2 & 0x7fffff;
                        goto joined_r0x0001408fc62f;
                    }
                    if (param_1 == -1.0) goto LAB_1408fc450;
                    if (((uint)param_1 & 0x7f800000) != 0x7f800000) goto LAB_1408fc089;
                }
                LAB_1408fc5e0:
                if (((uint)param_1 & 0x7fffff) != 0) goto LAB_1408fc740;
                fVar1 = 0.0;
                if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
                    fVar1 = param_2;
                }
                uVar6 = (uint)fVar1 & 0x7fffff;
            }
            else {
                LAB_1408fc4f0:
                if (((uint)param_1 & 0x7f800000) == 0x7f800000) goto LAB_1408fc5e0;
                if (((uint)param_1 & 0x7fffffff) == 0) goto LAB_1408fc540;
                if (param_1 != -1.0) {
                    if (((uint)param_1 & 0x7fffffff) < 0x3f800000) {
                        iVar7 = 0;
                        if (((uint)param_2 & 0x80000000) != 0) {
                            iVar7 = 0x7f800000;
                        }
                    }
                    else {
                        iVar7 = 0;
                        if (((uint)param_2 & 0x80000000) == 0) {
                            iVar7 = 0x7f800000;
                        }
                    }
                    fVar1 = 0.0;
                    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
                        fVar1 = param_2;
                    }
                    if (((uint)fVar1 & 0x7fffff) == 0) {
                        if (fVar1 != 0.0) {
                            return;
                        }
                        goto LAB_1408fc6f0;
                    }
                    goto LAB_1408fc790;
                }
                LAB_1408fc450:
                uVar6 = 0x3f800000;
                if (param_2 == -INFINITY) {
                    uVar6 = 0xbf800000;
                }
                dVar8 = (double)(ulonglong)(uVar6 | local_a8);
                fVar1 = 0.0;
                if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
                    fVar1 = param_2;
                }
                uVar6 = (uint)fVar1 & 0x7fffff;
            }
            joined_r0x0001408fc62f:
            if (uVar6 == 0) {
                return;
            }
            LAB_1408fc790:
            FUN_14090229c(param_3,dVar8,uVar3,4);
            return;
        }
        fVar1 = 0.0;
        if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
            fVar1 = param_1;
        }
    }
    if (((uint)fVar1 & 0x7fffff) == 0) {
        return;
    }
    LAB_1408fc740:
    fVar1 = 0.0;
    if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
        fVar1 = param_2;
    }
    if (((uint)fVar1 & 0x7fffff) == 0) {
        FUN_14090229c();
    }
    else {
        FUN_14090229c();
    }
    // WARNING: Read-only address (ram,0x0001409c7490) is written
    // WARNING: Read-only address (ram,0x0001409c74e0) is written
    return;
}



void FUN_1408fc7f0(float param_1,undefined8 param_2)

{
    if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
        if (param_1 != INFINITY) {
            if (param_1 == -INFINITY) {
                return;
            }
            FUN_140902494(param_2,(uint)param_1 | 0x400000,1);
        }
    }
    else if (param_1 * 92.33248 <= 8192.0) {
        FUN_140902494(param_1,param_2,param_1,3);
    }
    else {
        if (-9600.0 <= param_1 * 92.33248) {
            return;
        }
        FUN_140902494(param_1,param_2,param_1,2);
    }
    return;
}



float FUN_1408fc950(float param_1)

{
    ulonglong uVar1;
    undefined8 in_R9;
    double dVar2;
    undefined4 uVar3;
    float fVar4;
    undefined4 uVar5;
    double dVar6;
    double dVar7;
    double dVar8;
    uint local_58 [4];
    double local_48 [9];

    if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
        fVar4 = (float)FUN_140902804();
        return fVar4;
    }
    dVar6 = (double)param_1;
    uVar3 = SUB84(dVar6,0);
    uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar2 = (double)((ulonglong)dVar6 & 0x7fffffffffffffff);
    if ((ulonglong)dVar2 < 0x3fe921fb54442d19) {
        dVar6 = dVar6 * dVar6;
        local_58[0] = 0;
    }
    else {
        if (dVar6 != dVar2) {
            uVar3 = SUB84(0.0 - dVar6,0);
            uVar5 = (undefined4)((ulonglong)(0.0 - dVar6) >> 0x20);
        }
        if ((ulonglong)dVar2 < 0x411e848000000000) {
            local_58[0] = (uint)((double)CONCAT44(uVar5,uVar3) * 0.6366197723675814 + 0.5);
            dVar7 = (double)local_58[0];
            dVar8 = (double)CONCAT44(uVar5,uVar3) - dVar7 * 1.570796326734126;
            dVar6 = dVar8 - dVar7 * 6.077100506506192e-11;
            uVar3 = SUB84(dVar6,0);
            uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
            uVar1 = (ulonglong)((longlong)dVar6 << 1) >> 0x35;
            if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - uVar1)) {
                dVar6 = dVar8 - dVar7 * 6.077100506303966e-11;
                dVar6 = dVar6 - (dVar7 * 2.022266248795951e-21 -
                                 ((dVar8 - dVar6) - dVar7 * 6.077100506303966e-11));
                uVar3 = SUB84(dVar6,0);
                uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
            }
            dVar6 = (double)CONCAT44(uVar5,uVar3) * (double)CONCAT44(uVar5,uVar3);
            dVar2 = (double)CONCAT44(uVar5,uVar3);
            if (uVar1 < 0x3f2) {
                if (uVar1 < 0x3df) {
                    if ((local_58[0] & 1) == 0) {
                        dVar2 = 1.0;
                    }
                }
                else if ((local_58[0] & 1) == 0) {
                    dVar2 = 1.0 - dVar6 * 0.5;
                }
                else {
                    dVar2 = dVar2 - dVar2 * 0.1666666666666667 * dVar6;
                }
                goto LAB_1408fcbbc;
            }
        }
        else {
            FUN_140902580(uVar3,dVar6,CONCAT44(uVar5,uVar3),local_48,local_58,in_R9,dVar6);
            uVar3 = SUB84(local_48[0],0);
            uVar5 = (undefined4)((ulonglong)local_48[0] >> 0x20);
            dVar6 = local_48[0] * local_48[0];
        }
    }
    if ((local_58[0] & 1) == 0) {
        dVar2 = ((dVar6 * -2.755731727234419e-07 + 2.480158729876704e-05) * dVar6 * dVar6 +
                 dVar6 * -0.00138888888888874 + 0.04166666666666666) * dVar6 * dVar6 -
                (dVar6 * 0.5 - 1.0);
    }
    else {
        dVar2 = ((dVar6 * 2.75573161037288e-06 + -0.0001984126983676113) * dVar6 * dVar6 +
                 dVar6 * 0.00833333333333095 + -0.1666666666666667) *
                dVar6 * (double)CONCAT44(uVar5,uVar3) + (double)CONCAT44(uVar5,uVar3);
    }
    LAB_1408fcbbc:
    if ((local_58[0] + 1 & 2) != 0) {
        dVar2 = 0.0 - dVar2;
    }
    return (float)dVar2;
}



// Library Function - Single Match
//  _time64
//
// Library: Visual Studio 2012 Release

__time64_t _time64(__time64_t *_Time)

{
    ulonglong uVar1;
    _FILETIME local_res8 [4];

    GetSystemTimeAsFileTime(local_res8);
    uVar1 = ((longlong)local_res8[0] + 0xfe624e212ac18000U) / 10000000;
    if (0x793406fff < uVar1) {
        uVar1 = 0xffffffffffffffff;
    }
    if (_Time != (__time64_t *)0x0) {
        *_Time = uVar1;
    }
    return uVar1;
}



ulonglong FUN_1408fccb0(float param_1)

{
    float fVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined4 uVar8;
    float local_res8;
    undefined4 uVar9;

    local_res8 = 0.0;
    iVar2 = ((uint)param_1 >> 0x17 & 0xff) - 0x7f;
    if (((uint)param_1 & 0x7fffffff) < 0x7f800001) {
        if (iVar2 < -0x1a) {
            uVar9 = 0x3fc90fdb;
        }
        else {
            if (iVar2 < 0) {
                fVar6 = param_1;
                if (((uint)param_1 & 0x80000000) != 0) {
                    fVar6 = (float)((uint)param_1 ^ 0x80000000);
                }
                if (iVar2 < -1) {
                    fVar5 = fVar6 * fVar6;
                }
                else {
                    fVar5 = (1.0 - fVar6) * 0.5;
                    fVar6 = SQRT(fVar5);
                    local_res8 = fVar6;
                }
                fVar7 = ((((-0.01338193 - fVar5 * 0.003961375) * fVar5 - 0.05652987) * fVar5 + 0.1841616) *
                         fVar5) / (1.10497 - fVar5 * 0.8364113);
                if (iVar2 >= -1) {
                    if (((uint)param_1 & 0x80000000) != 0) {
                        return (ulonglong)(uint)(3.141593 - ((fVar7 * fVar6 - 6.123234e-17) + local_res8) * 2.0)
                                ;
                    }
                    fVar1 = (float)((uint)local_res8 & 0xffff0000);
                    return (ulonglong)
                            (uint)(((fVar5 - fVar1 * fVar1) / (fVar1 + local_res8)) * 2.0 + fVar6 * 2.0 * fVar7
                                   + fVar1 * 2.0);
                }
                return (ulonglong)(uint)(1.570796 - (param_1 - (6.123234e-17 - fVar7 * param_1)));
            }
            if (param_1 == 1.0) {
                return 0;
            }
            if (param_1 != -1.0) {
                uVar3 = 0xffc00000;
                uVar9 = 8;
                goto LAB_1408fcd21;
            }
            uVar9 = 0x40490fdb;
        }
        uVar8 = 0;
        _set_statfp(0x20);
        uVar4 = CONCAT44(uVar8,uVar9);
    }
    else {
        uVar3 = (uint)param_1 | 0x400000;
        uVar9 = 0;
        LAB_1408fcd21:
        uVar4 = FUN_1407efd48("acosf",0xd,uVar3,1,uVar9,0x21,param_1,0,1);
    }
    return uVar4;
}



ulonglong FUN_1408fcf3c(ulonglong param_1)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong extraout_XMM0_Qa;
    float fVar4;
    float local_res8;
    undefined4 uVar5;

    fVar4 = (float)param_1;
    local_res8 = 0.0;
    iVar1 = ((uint)fVar4 >> 0x17 & 0xff) - 0x7f;
    if (((uint)fVar4 & 0x7fffffff) < 0x7f800001) {
        if (-0xf < iVar1) {
            if (iVar1 < 0) {
                if ((param_1 & 0x80000000) != 0) {
                    fVar4 = (float)((uint)fVar4 ^ 0x80000000);
                }
                if (iVar1 < -1) {
                    fVar4 = fVar4 * fVar4;
                }
                else {
                    fVar4 = (1.0 - fVar4) * 0.5;
                    local_res8 = SQRT(fVar4);
                    param_1 = param_1 & 0xffffffff00000000;
                }
                if (iVar1 < -1) {
                    return param_1 & 0xffffffff00000000 | (ulonglong)(uint)(1.10497 - fVar4 * 0.8364113);
                }
                return param_1 & 0xffffffff00000000 |
                       (ulonglong)(uint)(0.7853981 - (float)((uint)local_res8 & 0xffff0000) * 2.0);
            }
            if ((fVar4 != 1.0) && (fVar4 != -1.0)) {
                uVar2 = 0xffc00000;
                uVar5 = 8;
                goto LAB_1408fcfad;
            }
        }
        _set_statfp(0x20);
        uVar3 = extraout_XMM0_Qa;
    }
    else {
        uVar2 = (uint)fVar4 | 0x400000;
        uVar5 = 0;
        LAB_1408fcfad:
        uVar3 = FUN_1407efd48("asinf",0xe,uVar2,1,uVar5,0x21,fVar4,0,1);
    }
    return uVar3;
}



ulonglong FUN_1408fd190(double param_1,float param_2)

{
    bool bVar1;
    bool bVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    int iVar9;
    double dVar10;
    double dVar11;
    undefined4 uVar12;
    float fVar13;
    undefined4 uVar14;
    uint uVar15;
    uint uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    uint uVar19;
    float local_res8;

    uVar6 = 0;
    uVar17 = 0;
    uVar18 = 0;
    fVar13 = SUB84(param_1,0);
    dVar10 = (double)fVar13;
    uVar12 = SUB84(dVar10,0);
    uVar15 = (uint)((ulonglong)dVar10 >> 0x20);
    dVar11 = (double)param_2;
    uVar14 = SUB84(dVar11,0);
    uVar19 = (uint)((ulonglong)dVar11 >> 0x20);
    uVar7 = (ulonglong)dVar11 & 0x8000000000000000;
    uVar5 = (ulonglong)dVar10 & 0x7fffffffffffffff;
    uVar8 = (ulonglong)dVar10 & 0x8000000000000000;
    uVar3 = (ulonglong)dVar11 & 0x7fffffffffffffff;
    iVar9 = (uVar15 >> 0x14 & 0x7ff) - (uVar19 >> 0x14 & 0x7ff);
    local_res8 = param_2;
    if ((0x7ff0000000000000 < uVar3) || (local_res8 = fVar13, 0x7ff0000000000000 < uVar5)) {
        uVar3 = FUN_1407efd48("atan2f",0x10,(uint)local_res8 | 0x400000,1,0,0x21,param_2,fVar13,2);
        return uVar3;
    }
    if (uVar5 == 0) {
        if (uVar7 == 0) goto LAB_1408fd470;
        if (uVar8 == 0) {
            fVar13 = (float)DAT_140c1abc0;
            param_1 = (double)(ulonglong)(uint)fVar13;
        }
        else {
            param_1 = (double)((ulonglong)DAT_140c1abc0 ^ 0x8000000000000000);
            fVar13 = (float)param_1;
        }
        uVar14 = 0;
        uVar4 = 0x20;
        goto LAB_1408fd2e5;
    }
    uVar4 = 0x20;
    if (uVar3 == 0) {
        param_1 = DAT_140c1abc8;
        if (uVar8 == 0) {
            param_1 = (double)_set_statfp();
            goto LAB_1408fd33c;
        }
        LAB_1408fd309:
        param_1 = (double)((ulonglong)param_1 ^ 0x8000000000000000);
        uVar14 = 0;
        fVar13 = (float)param_1;
        goto LAB_1408fd2e5;
    }
    LAB_1408fd33c:
    dVar10 = DAT_140c1abc8;
    if (iVar9 < 0x1b) {
        if ((iVar9 < -0xd) && (uVar7 == 0)) {
            if (-0x97 < iVar9) {
                if (iVar9 < -0x7e) {
                    dVar10 = ((double)CONCAT44(uVar15,uVar12) * 1.267650600228229e+30) /
                             (double)CONCAT44(uVar19,uVar14);
                    uVar19 = (uint)((ulonglong)dVar10 >> 0x20);
                    iVar9 = ((uVar19 & 0x7fffffff) >> 0x14) - 100;
                    if (iVar9 < 1) {
                        if (1 - iVar9 < 0x37) {
                            uVar3 = ((ulonglong)dVar10 & 0x1fffffffffffff | 0x10000000000000) >>
                                                                                              ((char)(1 - iVar9) - 1U & 0x3f);
                            uVar6 = (uVar3 >> 1) + (ulonglong)((uint)uVar3 & 1);
                        }
                    }
                    else {
                        uVar6 = (longlong)iVar9 << 0x34 | (ulonglong)dVar10 & 0xfffffffffffff;
                    }
                    uVar15 = (uint)(uVar6 >> 0x20) | uVar19 & 0x80000000;
                    uVar12 = (undefined4)uVar6;
                    uVar17 = 0;
                    uVar18 = 0;
                    if ((uVar6 & 0x7ff0000000000000) == 0) {
                        _set_statfp(0x30);
                    }
                }
                else {
                    dVar10 = (double)CONCAT44(uVar15,uVar12) / (double)CONCAT44(uVar19,uVar14);
                    uVar12 = SUB84(dVar10,0);
                    uVar15 = (uint)((ulonglong)dVar10 >> 0x20);
                }
                LAB_1408fd470:
                return CONCAT44((float)(double)CONCAT44(uVar18,uVar17),
                                (float)(double)CONCAT44(uVar15,uVar12));
            }
            if (uVar8 == 0) {
                fVar13 = 0.0;
            }
            else {
                fVar13 = -0.0;
            }
            uVar14 = 0;
            uVar4 = 0x30;
            goto LAB_1408fd2e5;
        }
        if ((-0x1b < iVar9) || (uVar7 == 0)) {
            if ((uVar5 != 0x7ff0000000000000) || (uVar3 != 0x7ff0000000000000)) {
                if (uVar7 != 0) {
                    uVar19 = uVar19 ^ 0x80000000;
                }
                if (uVar8 != 0) {
                    uVar15 = uVar15 ^ 0x80000000;
                }
                bVar1 = (double)CONCAT44(uVar15,uVar12) != (double)CONCAT44(uVar19,uVar14);
                bVar2 = (double)CONCAT44(uVar19,uVar14) <= (double)CONCAT44(uVar15,uVar12);
                uVar17 = uVar12;
                uVar16 = uVar15;
                if (bVar2 && bVar1) {
                    uVar17 = uVar14;
                    uVar16 = uVar19;
                    uVar14 = uVar12;
                    uVar19 = uVar15;
                }
                dVar10 = (double)CONCAT44(uVar16,uVar17) / (double)CONCAT44(uVar19,uVar14);
                if (dVar10 <= 0.0625) {
                    if (dVar10 < 0.0001) goto LAB_1408fd5bd;
                    dVar11 = dVar10 * dVar10;
                    dVar11 = (0.3333333333333317 - (0.1999999999939322 - dVar11 * 0.1428571356180717) * dVar11
                             ) * dVar11 * dVar10;
                }
                else {
                    uVar15 = (uint)(dVar10 * 256.0 + 0.5);
                    dVar10 = (double)(ulonglong)uVar15;
                    dVar11 = ((double)CONCAT44(uVar16,uVar17) * 256.0 -
                              dVar10 * (double)CONCAT44(uVar19,uVar14)) /
                             (dVar10 * (double)CONCAT44(uVar16,uVar17) +
                              (double)CONCAT44(uVar19,uVar14) * 256.0);
                    dVar10 = dVar11 + *(double *)(&DAT_1409c80f0 + (ulonglong)(uVar15 - 0x10) * 8);
                    dVar11 = dVar11 * dVar11 * dVar11 * 0.333333333332241;
                }
                dVar10 = dVar10 - dVar11;
                LAB_1408fd5bd:
                if (bVar2 && bVar1) {
                    dVar10 = DAT_140c1abc8 - dVar10;
                }
                if (uVar7 != 0) {
                    dVar10 = DAT_140c1abc0 - dVar10;
                }
                if (uVar8 != 0) {
                    dVar10 = (double)((ulonglong)dVar10 ^ 0x8000000000000000);
                }
                return (ulonglong)(uint)(float)dVar10;
            }
            dVar10 = DAT_140c1abd0;
            if (uVar7 != 0) {
                dVar10 = DAT_140c1abd8;
            }
            goto LAB_1408fd34a;
        }
        dVar10 = DAT_140c1abc0;
        param_1 = DAT_140c1abc0;
        if (uVar8 != 0) goto LAB_1408fd309;
        LAB_1408fd35d:
        param_1 = (double)(ulonglong)(uint)(float)dVar10;
    }
    else {
        LAB_1408fd34a:
        if (uVar8 == 0) goto LAB_1408fd35d;
        param_1 = (double)(((ulonglong)dVar10 ^ 0x8000000000000000) & 0xffffffff00000000 |
                           (ulonglong)(uint)(float)(double)((ulonglong)dVar10 ^ 0x8000000000000000));
    }
    fVar13 = SUB84(param_1,0);
    uVar14 = (undefined4)((ulonglong)param_1 >> 0x20);
    LAB_1408fd2e5:
    _set_statfp(param_1,uVar4);
    return CONCAT44(uVar14,fVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408fd620(double param_1,undefined8 param_2,undefined4 param_3)

{
    undefined4 in_EAX;
    uint uVar1;
    uint uVar2;
    byte bVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    uint uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    uint uVar13;
    ulonglong uVar14;
    longlong lVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    bool bVar20;
    bool bVar21;
    double dVar22;
    double dVar23;
    double dVar24;
    double dVar25;
    double in_XMM0_Qb;
    double dVar26;
    double dVar27;
    double dVar28;
    double dVar29;
    double dVar30;
    double dVar31;
    double dVar32;
    double dVar33;
    double dVar34;
    double dVar35;
    undefined auVar36 [16];
    undefined auVar37 [16];
    double dVar38;
    double local_88 [10];
    double local_38 [7];

    if (1 < _DAT_140c0f7c0) {
        auVar36 = CONCAT88(in_XMM0_Qb * 0.3183098861837907,param_1 * 0.3183098861837907);
        roundpd(auVar36,auVar36,0);
        uVar1 = movmskpd(in_EAX,CONCAT412(-(uint)(0x40ff4000 <
                                                  (uint)(((ulonglong)in_XMM0_Qb & 0x7fffffffffffffff) >>
                                                                                                      0x20)),
                                          CONCAT48(-(uint)(0 < (int)((ulonglong)in_XMM0_Qb &
                                                                     0x7fffffffffffffff)),
                                                   CONCAT44(-(uint)(0x40ff4000 <
                                                                    (uint)(((ulonglong)param_1 &
                                                                            0x7fffffffffffffff) >> 0x20)),
                                                            -(uint)(0 < (int)((ulonglong)param_1 &
                                                                              0x7fffffffffffffff))))));
        if (uVar1 == 0) {
            return;
        }
        local_88[0] = param_1;
        iVar5 = movmskpd(param_3,CONCAT412(-(uint)((uint)(((ulonglong)in_XMM0_Qb & 0x7fffffffffffffff)
                                                                  >> 0x20) < 0x41d00000),
                                           CONCAT48(-(uint)((int)((ulonglong)in_XMM0_Qb &
                                                                  0x7fffffffffffffff) < 0),
                                                    CONCAT44(-(uint)((uint)(((ulonglong)param_1 &
                                                                             0x7fffffffffffffff) >> 0x20)
                                                                     < 0x41d00000),
                                                             -(uint)((int)((ulonglong)param_1 &
                                                                           0x7fffffffffffffff) < 0)))));
        if (iVar5 != 3) {
            lVar8 = 0;
            do {
                if ((uVar1 & 1) != 0) {
                    dVar22 = local_88[lVar8];
                    uVar7 = (uint)((ulonglong)dVar22 >> 0x20);
                    uVar2 = uVar7 >> 0x10 & 0x7ff0;
                    if (uVar2 == 0x7ff0) {
                        dVar22 = dVar22 - dVar22;
                    }
                    else {
                        uVar4 = uVar2 - 0x3f60 >> 7 & 0xfffc;
                        uVar17 = (ulonglong)dVar22 & 0xffffffff;
                        uVar12 = (ulonglong)(((uint)((ulonglong)dVar22 >> 0x15) | 0x80000000) >> 0xb);
                        uVar16 = *(uint *)(&DAT_140e4fcf4 + uVar4) * uVar17;
                        uVar18 = (uVar16 & 0xffffffff) + *(uint *)(&DAT_140e4fcf8 + uVar4) * uVar12;
                        uVar10 = *(uint *)(&DAT_140e4fcf0 + uVar4) * uVar17;
                        uVar11 = *(uint *)(&DAT_140e4fcec + uVar4) * uVar17;
                        uVar14 = *(uint *)(&DAT_140e4fcf4 + uVar4) * uVar12 + (uVar16 >> 0x20) +
                                 (uVar18 >> 0x20) + (uVar10 & 0xffffffff);
                        uVar16 = uVar18 & 0xffffffff | uVar14 << 0x20;
                        uVar14 = *(uint *)(&DAT_140e4fcf0 + uVar4) * uVar12 + (uVar10 >> 0x20) +
                                 (uVar14 >> 0x20) + (uVar11 & 0xffffffff);
                        uVar10 = *(uint *)(&DAT_140e4fce8 + uVar4) * uVar17;
                        uVar19 = *(uint *)(&DAT_140e4fcec + uVar4) * uVar12 + (uVar11 >> 0x20) +
                                 (uVar14 >> 0x20) + (uVar10 & 0xffffffff);
                        uVar11 = *(uint *)(&DAT_140e4fce4 + uVar4) * uVar17;
                        uVar18 = uVar19 << 0x20 | uVar14 & 0xffffffff;
                        uVar2 = *(uint *)(&DAT_140e4fce0 + uVar4);
                        uVar14 = *(uint *)(&DAT_140e4fce8 + uVar4) * uVar12 + (uVar10 >> 0x20) +
                                 (uVar19 >> 0x20) + (uVar11 & 0xffffffff);
                        uVar10 = uVar14 & 0xffffffff;
                        uVar9 = uVar7 >> 0x10 & 0x8000;
                        iVar5 = (((int)(&DAT_140e4fce0 + uVar4) + -0x40e4fce0) * 8 + 0x13) -
                                ((uVar7 >> 0x14 & 0x7ff) - 0x3ff);
                        lVar15 = *(uint *)(&DAT_140e4fce4 + uVar4) * uVar12 + (uVar11 >> 0x20) +
                                 (uVar14 >> 0x20) + uVar17 * uVar2;
                        iVar6 = iVar5 + 0x20;
                        if (iVar5 < 1) {
                            bVar3 = -(char)iVar5;
                            uVar12 = (lVar15 << 0x20 | uVar10) << (bVar3 & 0x3f);
                            if ((uVar12 & 0x80000000) == 0) {
                                uVar10 = (ulonglong)((uint)uVar12 >> (bVar3 & 0x1f));
                                uVar7 = 0;
                                uVar4 = (uint)(uVar12 >> 3);
                            }
                            else {
                                bVar20 = uVar16 != 0;
                                uVar16 = -uVar16;
                                bVar21 = uVar18 != 0;
                                uVar10 = -uVar18;
                                uVar18 = uVar10 - bVar20;
                                uVar10 = ((0x100000000U >> (bVar3 & 0x3f)) -
                                          (ulonglong)((uint)uVar12 >> (bVar3 & 0x1f))) -
                                         (ulonglong)(bVar21 || uVar10 < bVar20);
                                uVar7 = 0x8000;
                                uVar4 = (int)(uVar12 >> 3) + 0x20000000;
                            }
                        }
                        else {
                            bVar3 = 0x1d - (char)iVar5;
                            uVar4 = (int)lVar15 << (bVar3 & 0x1f);
                            uVar13 = uVar4 & 0x1fffffff;
                            if ((uVar4 & 0x10000000) == 0) {
                                uVar7 = 0;
                                uVar10 = (ulonglong)(uVar13 >> (bVar3 & 0x1f)) << 0x20 | uVar10;
                            }
                            else {
                                uVar4 = uVar4 + 0x20000000;
                                bVar20 = uVar16 != 0;
                                uVar16 = -uVar16;
                                bVar21 = uVar18 != 0;
                                uVar12 = -uVar18;
                                uVar18 = uVar12 - bVar20;
                                uVar10 = (((ulonglong)(0x20000000 >> (bVar3 & 0x1f)) << 0x20) -
                                          ((ulonglong)(uVar13 >> (bVar3 & 0x1f)) << 0x20 | uVar10)) -
                                         (ulonglong)(bVar21 || uVar12 < bVar20);
                                uVar7 = 0x8000;
                            }
                        }
                        uVar12 = uVar16;
                        uVar17 = uVar18;
                        if (uVar10 == 0) {
                            iVar6 = iVar5 + 0x60;
                            uVar12 = 0;
                            uVar10 = uVar18;
                            uVar17 = uVar16;
                            if (uVar18 != 0) goto LAB_1409039e8;
                            iVar6 = iVar5 + 0xa0;
                            uVar17 = 0;
                            uVar10 = uVar16;
                            if (uVar16 != 0) goto LAB_1409039e8;
                            dVar31 = 0.0;
                            dVar38 = 0.0;
                        }
                        else {
                            LAB_1409039e8:
                            lVar15 = 0x3f;
                            if (uVar10 != 0) {
                                for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                                }
                            }
                            iVar5 = 0x1d - (int)lVar15;
                            bVar3 = (byte)iVar5;
                            if (iVar5 == 0 || 0x1d < (int)lVar15) {
                                uVar16 = uVar10;
                                if (iVar5 != 0) {
                                    uVar16 = uVar10 >> (-bVar3 & 0x3f);
                                    iVar6 = iVar6 + iVar5;
                                    uVar17 = uVar17 >> (-bVar3 & 0x3f) | uVar10 << (bVar3 + 0x40 & 0x3f);
                                }
                            }
                            else {
                                iVar6 = iVar6 + iVar5;
                                uVar16 = uVar17 >> (0x40 - bVar3 & 0x3f);
                                uVar17 = uVar17 << (bVar3 & 0x3f) | uVar12 >> (0x40 - bVar3 & 0x3f);
                                uVar16 = uVar10 << (bVar3 & 0x3f) | uVar16;
                            }
                            uVar7 = (iVar6 * -0x10 + 0x3ff0U | uVar9) ^ uVar7;
                            auVar36 = pinsrw(ZEXT816(0),uVar7,3);
                            auVar37 = pinsrw(ZEXT816(0),uVar7 - 0x3f0,3);
                            dVar22 = (double)uVar16 * SUB168(auVar36,0);
                            uVar2 = (int)(uVar9 << 0x10) >> 0x1f;
                            dVar31 = (double)(uVar17 >> 1) * SUB168(auVar37,0);
                            dVar23 = dVar22 * 0.7853981256484985;
                            uVar2 = (uVar4 >> 0x1d) + uVar2 ^ uVar2;
                            dVar38 = (dVar22 + dVar31) * 3.774894977445941e-08 + dVar31 * 0.7853981256484985;
                            dVar31 = dVar23 + dVar38;
                            dVar38 = dVar38 + (dVar23 - dVar31);
                        }
                        dVar28 = (dVar31 * 10.1859163578813 + 6755399441055744.0) - 6755399441055744.0;
                        uVar7 = ((int)ROUND(dVar31 * 10.1859163578813) + 0x1c7600 + uVar2 * 8 & 0x3f) << 5;
                        dVar29 = dVar28 * 3.798187816439979e-12;
                        dVar23 = dVar31 - dVar28 * 0.09817477042088285;
                        dVar31 = dVar31 - dVar28 * 0.09817477042088285;
                        dVar34 = dVar31 - dVar29;
                        dVar24 = dVar23 - dVar29;
                        dVar26 = dVar23 - dVar28 * 3.798187816439979e-12;
                        dVar25 = dVar24 * dVar24;
                        dVar27 = dVar26 * dVar26;
                        dVar30 = *(double *)(&DAT_140e4fd90 + uVar7) + *(double *)(&DAT_140e4fda8 + uVar7);
                        dVar32 = *(double *)(&DAT_140e4fda8 + uVar7) * dVar34;
                        dVar35 = dVar34 * *(double *)(&DAT_140e4fd90 + uVar7);
                        dVar33 = dVar32 + *(double *)(&DAT_140e4fd98 + uVar7);
                        dVar22 = dVar35 + dVar33;
                        dVar22 = dVar22 + ((dVar28 * 1.263916405497469e-22 - ((dVar31 - dVar34) - dVar29)) -
                                           dVar38) * (*(double *)(&DAT_140e4fd98 + uVar7) * dVar34 - dVar30) +
                                 *(double *)(&DAT_140e4fda0 + uVar7) +
                                 (*(double *)(&DAT_140e4fd98 + uVar7) - dVar33) + dVar32 +
                                 (dVar33 - dVar22) + dVar35 +
                                 (dVar25 * 0.008333333333333333 + -0.1666666666666667 +
                                  (dVar23 * 2.755731922398589e-06 * dVar24 + -0.0001984126984126984) *
                                  dVar25 * dVar25) * dVar30 * dVar34 * dVar25 +
                                 (dVar27 * 0.04166666666666666 + -0.1666666666666667 +
                                  (dVar23 * 2.48015873015873e-05 * dVar26 + -0.0001984126984126984) *
                                  dVar27 * dVar27) * *(double *)(&DAT_140e4fd98 + uVar7) * dVar27;
                    }
                    local_38[lVar8] = dVar22;
                }
                lVar8 = lVar8 + 1;
                uVar1 = (int)uVar1 >> 1;
            } while (lVar8 < 2);
        }
        return;
    }
    uVar1 = movmskpd(in_EAX,CONCAT412(-(uint)(0x40ff4000 <
                                              (uint)(((ulonglong)in_XMM0_Qb & 0x7fffffffffffffff) >>
                                                                                                  0x20)),
                                      CONCAT48(-(uint)(0 < (int)((ulonglong)in_XMM0_Qb &
                                                                 0x7fffffffffffffff)),
                                               CONCAT44(-(uint)(0x40ff4000 <
                                                                (uint)(((ulonglong)param_1 &
                                                                        0x7fffffffffffffff) >> 0x20)),
                                                        -(uint)(0 < (int)((ulonglong)param_1 &
                                                                          0x7fffffffffffffff))))));
    if (uVar1 == 0) {
        return;
    }
    local_88[0] = param_1;
    iVar5 = movmskpd(param_3,CONCAT412(-(uint)((uint)(((ulonglong)in_XMM0_Qb & 0x7fffffffffffffff) >>
                                                                                                   0x20) < 0x41d00000),
                                       CONCAT48(-(uint)((int)((ulonglong)in_XMM0_Qb &
                                                              0x7fffffffffffffff) < 0),
                                                CONCAT44(-(uint)((uint)(((ulonglong)param_1 &
                                                                         0x7fffffffffffffff) >> 0x20) <
                                                                 0x41d00000),
                                                         -(uint)((int)((ulonglong)param_1 &
                                                                       0x7fffffffffffffff) < 0)))));
    if (iVar5 != 3) {
        lVar8 = 0;
        do {
            if ((uVar1 & 1) != 0) {
                dVar22 = local_88[lVar8];
                uVar7 = (uint)((ulonglong)dVar22 >> 0x20);
                uVar2 = uVar7 >> 0x10 & 0x7ff0;
                if (uVar2 == 0x7ff0) {
                    dVar22 = dVar22 - dVar22;
                }
                else {
                    uVar4 = uVar2 - 0x3f60 >> 7 & 0xfffc;
                    uVar17 = (ulonglong)dVar22 & 0xffffffff;
                    uVar12 = (ulonglong)(((uint)((ulonglong)dVar22 >> 0x15) | 0x80000000) >> 0xb);
                    uVar16 = *(uint *)(&DAT_140e4f0f4 + uVar4) * uVar17;
                    uVar18 = (uVar16 & 0xffffffff) + *(uint *)(&DAT_140e4f0f8 + uVar4) * uVar12;
                    uVar10 = *(uint *)(&DAT_140e4f0f0 + uVar4) * uVar17;
                    uVar11 = *(uint *)(&DAT_140e4f0ec + uVar4) * uVar17;
                    uVar14 = *(uint *)(&DAT_140e4f0f4 + uVar4) * uVar12 + (uVar16 >> 0x20) + (uVar18 >> 0x20)
                             + (uVar10 & 0xffffffff);
                    uVar16 = uVar18 & 0xffffffff | uVar14 << 0x20;
                    uVar14 = *(uint *)(&DAT_140e4f0f0 + uVar4) * uVar12 + (uVar10 >> 0x20) + (uVar14 >> 0x20)
                             + (uVar11 & 0xffffffff);
                    uVar10 = *(uint *)(&DAT_140e4f0e8 + uVar4) * uVar17;
                    uVar19 = *(uint *)(&DAT_140e4f0ec + uVar4) * uVar12 + (uVar11 >> 0x20) + (uVar14 >> 0x20)
                             + (uVar10 & 0xffffffff);
                    uVar11 = *(uint *)(&DAT_140e4f0e4 + uVar4) * uVar17;
                    uVar18 = uVar19 << 0x20 | uVar14 & 0xffffffff;
                    uVar2 = *(uint *)(&DAT_140e4f0e0 + uVar4);
                    uVar14 = *(uint *)(&DAT_140e4f0e8 + uVar4) * uVar12 + (uVar10 >> 0x20) + (uVar19 >> 0x20)
                             + (uVar11 & 0xffffffff);
                    uVar10 = uVar14 & 0xffffffff;
                    uVar9 = uVar7 >> 0x10 & 0x8000;
                    iVar5 = (((int)(&DAT_140e4f0e0 + uVar4) + -0x40e4f0e0) * 8 + 0x13) -
                            ((uVar7 >> 0x14 & 0x7ff) - 0x3ff);
                    lVar15 = *(uint *)(&DAT_140e4f0e4 + uVar4) * uVar12 + (uVar11 >> 0x20) + (uVar14 >> 0x20)
                             + uVar17 * uVar2;
                    iVar6 = iVar5 + 0x20;
                    if (iVar5 < 1) {
                        bVar3 = -(char)iVar5;
                        uVar12 = (lVar15 << 0x20 | uVar10) << (bVar3 & 0x3f);
                        if ((uVar12 & 0x80000000) == 0) {
                            uVar10 = (ulonglong)((uint)uVar12 >> (bVar3 & 0x1f));
                            uVar7 = 0;
                            uVar4 = (uint)(uVar12 >> 3);
                        }
                        else {
                            bVar20 = uVar16 != 0;
                            uVar16 = -uVar16;
                            bVar21 = uVar18 != 0;
                            uVar10 = -uVar18;
                            uVar18 = uVar10 - bVar20;
                            uVar10 = ((0x100000000U >> (bVar3 & 0x3f)) -
                                      (ulonglong)((uint)uVar12 >> (bVar3 & 0x1f))) -
                                     (ulonglong)(bVar21 || uVar10 < bVar20);
                            uVar7 = 0x8000;
                            uVar4 = (int)(uVar12 >> 3) + 0x20000000;
                        }
                    }
                    else {
                        bVar3 = 0x1d - (char)iVar5;
                        uVar4 = (int)lVar15 << (bVar3 & 0x1f);
                        uVar13 = uVar4 & 0x1fffffff;
                        if ((uVar4 & 0x10000000) == 0) {
                            uVar7 = 0;
                            uVar10 = (ulonglong)(uVar13 >> (bVar3 & 0x1f)) << 0x20 | uVar10;
                        }
                        else {
                            uVar4 = uVar4 + 0x20000000;
                            bVar20 = uVar16 != 0;
                            uVar16 = -uVar16;
                            bVar21 = uVar18 != 0;
                            uVar12 = -uVar18;
                            uVar18 = uVar12 - bVar20;
                            uVar10 = (((ulonglong)(0x20000000 >> (bVar3 & 0x1f)) << 0x20) -
                                      ((ulonglong)(uVar13 >> (bVar3 & 0x1f)) << 0x20 | uVar10)) -
                                     (ulonglong)(bVar21 || uVar12 < bVar20);
                            uVar7 = 0x8000;
                        }
                    }
                    uVar12 = uVar16;
                    uVar17 = uVar18;
                    if (uVar10 == 0) {
                        iVar6 = iVar5 + 0x60;
                        uVar12 = 0;
                        uVar10 = uVar18;
                        uVar17 = uVar16;
                        if (uVar18 != 0) goto LAB_14090303a;
                        iVar6 = iVar5 + 0xa0;
                        uVar17 = 0;
                        uVar10 = uVar16;
                        if (uVar16 != 0) goto LAB_14090303a;
                        dVar31 = 0.0;
                        dVar38 = 0.0;
                    }
                    else {
                        LAB_14090303a:
                        lVar15 = 0x3f;
                        if (uVar10 != 0) {
                            for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                            }
                        }
                        iVar5 = 0x1d - (int)lVar15;
                        bVar3 = (byte)iVar5;
                        if (iVar5 == 0 || 0x1d < (int)lVar15) {
                            uVar16 = uVar10;
                            if (iVar5 != 0) {
                                uVar16 = uVar10 >> (-bVar3 & 0x3f);
                                iVar6 = iVar6 + iVar5;
                                uVar17 = uVar17 >> (-bVar3 & 0x3f) | uVar10 << (bVar3 + 0x40 & 0x3f);
                            }
                        }
                        else {
                            iVar6 = iVar6 + iVar5;
                            uVar16 = uVar17 >> (0x40 - bVar3 & 0x3f);
                            uVar17 = uVar17 << (bVar3 & 0x3f) | uVar12 >> (0x40 - bVar3 & 0x3f);
                            uVar16 = uVar10 << (bVar3 & 0x3f) | uVar16;
                        }
                        uVar7 = (iVar6 * -0x10 + 0x3ff0U | uVar9) ^ uVar7;
                        auVar36 = pinsrw(ZEXT816(0),uVar7,3);
                        auVar37 = pinsrw(ZEXT816(0),uVar7 - 0x3f0,3);
                        dVar22 = (double)uVar16 * SUB168(auVar36,0);
                        uVar2 = (int)(uVar9 << 0x10) >> 0x1f;
                        dVar31 = (double)(uVar17 >> 1) * SUB168(auVar37,0);
                        dVar23 = dVar22 * 0.7853981256484985;
                        uVar2 = (uVar4 >> 0x1d) + uVar2 ^ uVar2;
                        dVar38 = (dVar22 + dVar31) * 3.774894977445941e-08 + dVar31 * 0.7853981256484985;
                        dVar31 = dVar23 + dVar38;
                        dVar38 = dVar38 + (dVar23 - dVar31);
                    }
                    dVar28 = (dVar31 * 10.1859163578813 + 6755399441055744.0) - 6755399441055744.0;
                    uVar7 = ((int)ROUND(dVar31 * 10.1859163578813) + 0x1c7600 + uVar2 * 8 & 0x3f) << 5;
                    dVar29 = dVar28 * 3.798187816439979e-12;
                    dVar23 = dVar31 - dVar28 * 0.09817477042088285;
                    dVar31 = dVar31 - dVar28 * 0.09817477042088285;
                    dVar34 = dVar31 - dVar29;
                    dVar24 = dVar23 - dVar29;
                    dVar26 = dVar23 - dVar28 * 3.798187816439979e-12;
                    dVar25 = dVar24 * dVar24;
                    dVar27 = dVar26 * dVar26;
                    dVar30 = *(double *)(&DAT_140e4f190 + uVar7) + *(double *)(&DAT_140e4f1a8 + uVar7);
                    dVar32 = *(double *)(&DAT_140e4f1a8 + uVar7) * dVar34;
                    dVar35 = dVar34 * *(double *)(&DAT_140e4f190 + uVar7);
                    dVar33 = dVar32 + *(double *)(&DAT_140e4f198 + uVar7);
                    dVar22 = dVar35 + dVar33;
                    dVar22 = dVar22 + ((dVar28 * 1.263916405497469e-22 - ((dVar31 - dVar34) - dVar29)) -
                                       dVar38) * (*(double *)(&DAT_140e4f198 + uVar7) * dVar34 - dVar30) +
                             *(double *)(&DAT_140e4f1a0 + uVar7) +
                             (*(double *)(&DAT_140e4f198 + uVar7) - dVar33) + dVar32 +
                             (dVar33 - dVar22) + dVar35 +
                             (dVar25 * 0.008333333333333333 + -0.1666666666666667 +
                              (dVar23 * 2.755731922398589e-06 * dVar24 + -0.0001984126984126984) *
                              dVar25 * dVar25) * dVar30 * dVar34 * dVar25 +
                             (dVar27 * 0.04166666666666666 + -0.1666666666666667 +
                              (dVar23 * 2.48015873015873e-05 * dVar26 + -0.0001984126984126984) *
                              dVar27 * dVar27) * *(double *)(&DAT_140e4f198 + uVar7) * dVar27;
                }
                local_38[lVar8] = dVar22;
            }
            lVar8 = lVar8 + 1;
            uVar1 = (int)uVar1 >> 1;
        } while (lVar8 < 2);
    }
    return;
}



void FUN_1408fd634(ulonglong param_1,double *param_2,uint *param_3)

{
    char cVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    ulonglong uVar9;
    int iVar10;
    double local_98 [2];
    ulonglong local_88;
    ulonglong local_80 [9];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)local_98;
    local_80[3] = 0;
    iVar10 = ((uint)(param_1 >> 0x34) & 0x7ff) - 0x3ff;
    iVar8 = iVar10 / 0x24;
    uVar9 = (param_1 & 0xfffffe0000000 | 0x10000000000000) >> 0x1d;
    iVar10 = iVar10 % 0x24;
    lVar6 = (longlong)(iVar8 + 3);
    uVar5 = (&DAT_140c1abd8)[lVar6] * uVar9 +
            (*(longlong *)(&DAT_140c1abe0 + lVar6 * 8) * uVar9 >> 0x24);
    local_80[2] = *(longlong *)(&DAT_140c1abe0 + lVar6 * 8) * uVar9 & 0xfffffffff;
    uVar3 = (&DAT_140c1abd0)[lVar6] * uVar9 + (uVar5 >> 0x24);
    local_80[1] = uVar5 & 0xfffffffff;
    local_80[0] = uVar3 & 0xfffffffff;
    iVar7 = 1;
    local_88 = *(longlong *)(&DAT_140c1abe0 + (longlong)iVar8 * 8) * uVar9 + (uVar3 >> 0x24) &
               0xfffffffff;
    cVar1 = (char)iVar10;
    uVar3 = (local_88 << 0x24 | local_80[0]) >> (0x23U - cVar1 & 0x3f);
    uVar4 = (int)((uint)uVar3 & 7) >> 1;
    if ((uVar3 & 1) == 0) {
        *param_3 = uVar4;
        uVar5 = (1 << (0x24U - cVar1 & 0x3f)) - 1U & local_80[0];
        if (uVar5 < 0x10000) {
            puVar2 = local_80;
            do {
                puVar2 = puVar2 + 1;
                iVar7 = iVar7 + 1;
                uVar5 = uVar5 << 0x24 | *puVar2;
            } while (uVar5 < 0x10000);
        }
        uVar9 = local_80[iVar7];
    }
    else {
        *param_3 = uVar4 + 1 & 3;
        uVar5 = (1 << (0x24U - cVar1 & 0x3f)) - 1U & ~local_80[0];
        if (uVar5 < 0x10000) {
            puVar2 = local_80;
            do {
                puVar2 = puVar2 + 1;
                iVar7 = iVar7 + 1;
                uVar5 = ~*puVar2 & 0xfffffffff | uVar5 << 0x24;
            } while (uVar5 < 0x10000);
        }
        uVar9 = ~local_80[iVar7] & 0xfffffffff;
    }
    iVar8 = 0;
    for (; uVar5 < 0x400000000000; uVar5 = uVar5 << 6) {
        iVar8 = iVar8 + 6;
    }
    for (; uVar5 < 0x10000000000000; uVar5 = uVar5 * 2) {
        iVar8 = iVar8 + 1;
    }
    local_98[0] = (double)((longlong)(((iVar10 + iVar7 * -0x24) - iVar8) + 0x34) + 0x3ff << 0x34 |
                           (uVar9 >> (0x24U - (char)iVar8 & 0x3f) | uVar5) & 0xfffffffffffff);
    if ((uVar3 & 1) != 0) {
        local_98[0] = (double)((ulonglong)local_98[0] | 0x8000000000000000);
    }
    *param_2 = local_98[0] * 1.570796326794897;
    FUN_1407db4f0(local_38 ^ (ulonglong)local_98);
    return;
}



ulonglong FUN_1408fd8a4(ulonglong param_1)

{
    ulonglong uVar1;
    float fVar2;
    double dVar3;
    double dVar4;
    double dVar5;
    uint uVar7;
    double dVar6;
    ulonglong uVar8;
    uint local_res10 [2];
    double local_res18;
    double local_res20;
    undefined4 uVar9;

    fVar2 = (float)param_1;
    uVar9 = (undefined4)(param_1 >> 0x20);
    dVar3 = (double)fVar2;
    uVar1 = (ulonglong)dVar3 & 0x7fffffffffffffff;
    local_res18 = dVar3;
    if (uVar1 < 0x3fe921fb54442d19) {
        if (0x3f7fffffffffffff < uVar1) {
            dVar5 = (double)fVar2;
            uVar7 = SUB164(ZEXT816((ulonglong)dVar5) >> 0x20,0);
            dVar3 = (double)((ulonglong)dVar5 & 0xffffffff | (ulonglong)uVar7 << 0x20) * dVar5;
            return (ulonglong)
                    (uint)(float)(((0.3852960712639954 - dVar3 * 0.01720324804714817) *
                                   (double)((ulonglong)dVar5 & 0xffffffff | (ulonglong)uVar7 << 0x20) *
                                   dVar3) / ((dVar3 * 0.01844239256901656 - 0.5139650547885454) * dVar3 +
                                             1.155888214346884) + dVar5);
        }
        if (uVar1 < 0x3f20000000000000) {
            if (uVar1 != 0) {
                _set_statfp(0x20);
            }
            return CONCAT44(uVar9,fVar2);
        }
        dVar3 = dVar3 * dVar3 * dVar3 * 0.3333333333333333 + dVar3;
    }
    else {
        if (((ulonglong)dVar3 & 0x7ff0000000000000) == 0x7ff0000000000000) {
            if (((ulonglong)dVar3 & 0xfffffffffffff) == 0) {
                uVar9 = 8;
                uVar1 = 0xffc00000;
            }
            else {
                uVar1 = param_1 & 0xffffffff | 0x400000;
                uVar9 = 0;
            }
            uVar1 = FUN_1407efd48(&DAT_1409c8900,0x20,uVar1,1,uVar9,0x21,fVar2,0,1);
            return uVar1;
        }
        uVar8 = 0x8000000000000000;
        dVar5 = dVar3;
        if ((longlong)dVar3 < 0) {
            dVar5 = (double)((ulonglong)dVar3 ^ 0x8000000000000000);
        }
        if (500000.0 <= dVar5) {
            FUN_1408fd634(uVar1,&local_res20,local_res10);
        }
        else {
            if (uVar1 < 0x400f6a7a2955385f) {
                local_res10[0] = (0x4002d97c7f3321d2 < uVar1) + 1;
            }
            else if (uVar1 < 0x401c463abeccb2bc) {
                local_res10[0] = (0x4015fdbbe9bba775 < uVar1) + 3;
            }
            else {
                local_res10[0] = (uint)(dVar5 * 0.6366197723675814 + 0.5);
            }
            dVar6 = (double)local_res10[0];
            local_res20 = dVar6 * 6.077100506506192e-11;
            dVar5 = dVar5 - dVar6 * 1.570796326734126;
            uVar1 = (uVar1 >> 0x34) - (ulonglong)((uint)((ulonglong)dVar5 >> 0x34) & 0x7ff);
            if (0xf < uVar1) {
                dVar4 = dVar5 - dVar6 * 6.077100506303966e-11;
                local_res20 = dVar6 * 2.022266248795951e-21 -
                              ((dVar5 - dVar4) - dVar6 * 6.077100506303966e-11);
                dVar5 = dVar4;
                if (0x30 < uVar1) {
                    dVar5 = dVar4 - dVar6 * 2.022266248711166e-21;
                    local_res20 = dVar6 * 8.4784276603689e-32 -
                                  ((dVar4 - dVar5) - dVar6 * 2.022266248711166e-21);
                }
            }
            local_res20 = dVar5 - local_res20;
            local_res10[0] = local_res10[0] & 3;
        }
        dVar5 = local_res20 * local_res20;
        local_res20 = ((0.3852960712639954 - dVar5 * 0.01720324804714817) * dVar5 * local_res20) /
                      ((dVar5 * 0.01844239256901656 - 0.5139650547885454) * dVar5 + 1.155888214346884) +
                      local_res20;
        uVar7 = SUB164(ZEXT816((ulonglong)local_res20) >> 0x20,0);
        if ((longlong)dVar3 < 0) {
            if ((local_res10[0] & 1) == 0) {
                local_res20 = (double)((ulonglong)local_res20 & 0xffffffff | (ulonglong)uVar7 << 0x20);
            }
            else {
                local_res20 = -1.0 / local_res20;
            }
            dVar3 = (double)((ulonglong)local_res20 ^ uVar8);
        }
        else if ((local_res10[0] & 1) == 0) {
            dVar3 = (double)((ulonglong)local_res20 & 0xffffffff | (ulonglong)uVar7 << 0x20);
        }
        else {
            dVar3 = -1.0 / local_res20;
        }
    }
    return (ulonglong)dVar3 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1408fdc10(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    float fVar3;
    float fVar4;
    undefined auVar5 [16];
    float fVar6;
    float fVar7;

    fVar3 = (float)param_1;
    fVar6 = (float)(((uint)fVar3 >> 0x17) - 0x7f);
    if ((float)((uint)fVar3 & 0x7f800000) == INFINITY) {
        if (fVar3 == INFINITY) {
            return param_1;
        }
        if (fVar3 != -INFINITY) {
            uVar2 = FUN_140903d30(fVar3,(uint)fVar3 | 0x400000,param_1,param_2,param_3,3);
            return uVar2;
        }
    }
    else {
        auVar5 = CONCAT412(in_XMM0_Dd,CONCAT48(in_XMM0_Dc,param_1)) & _DAT_1409c8a30;
        fVar4 = fVar3;
        if (fVar6 == -127.0) {
            fVar6 = SUB164(auVar5 | _DAT_1409c8990,0) - 1.0;
            auVar5 = CONCAT124(SUB1612((auVar5 | _DAT_1409c8990) >> 0x20,0),fVar6) & _DAT_1409c8a30;
            fVar4 = SUB164(auVar5,0);
            fVar6 = (float)(((uint)fVar6 >> 0x17) - 0xfd);
        }
        uVar1 = ((uint)fVar4 & 0x7f0000) + ((uint)fVar4 & 0x8000) * 2;
        if ((float)((uint)(fVar3 - 1.0) & 0x7fffffff) < 0.0625) {
            fVar3 = fVar3 - 1.0;
            fVar6 = fVar3 / (fVar3 + 2.0);
            fVar4 = fVar6 + fVar6;
            fVar7 = (float)((uint)fVar3 & SUB164(_DAT_1409c8b10,0));
            fVar3 = ((fVar4 * fVar4 * 0.0125 + 0.08333334) * fVar4 * fVar4 * fVar4 - fVar3 * fVar6) +
                    (fVar3 - fVar7);
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)
                           (uint)(fVar7 * 0.0007007319 + fVar3 * 0.0007007319 + fVar3 * 0.4335938 +
                                  fVar7 * 0.4335938);
        }
        uVar2 = (ulonglong)(uVar1 >> 0x10);
        if (0.0 < fVar3) {
            fVar3 = ((float)(uVar1 | SUB164(_DAT_1409c8ab0,0)) -
                     (float)(SUB164(auVar5,0) | SUB164(_DAT_1409c8ab0,0))) *
                    *(float *)(&DAT_1409cc2d0 + uVar2 * 4);
            return (ulonglong)
                    (uint)(fVar6 * 0.3007813 + *(float *)(&DAT_1409c8ba0 + uVar2 * 4) +
                           (fVar6 * 0.0002487456 -
                            (fVar3 + (fVar3 * 0.3333333 + 0.5) * fVar3 * fVar3) * 0.4342945) +
                           *(float *)(&DAT_1409c8db0 + uVar2 * 4));
        }
        if (fVar3 == 0.0) {
            uVar2 = FUN_140903d30(param_2,param_3,1);
            return uVar2;
        }
    }
    uVar2 = FUN_140903d30(param_2,param_3,2);
    // WARNING: Read-only address (ram,0x0001409c8990) is written
    // WARNING: Read-only address (ram,0x0001409c8a30) is written
    // WARNING: Read-only address (ram,0x0001409c8ab0) is written
    // WARNING: Read-only address (ram,0x0001409c8b10) is written
    return uVar2;
}



ulonglong FUN_1408fde98(ulonglong param_1,float param_2)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;
    double dVar4;
    double dVar5;
    float fVar6;
    double dVar7;
    double dVar8;
    undefined4 uVar9;

    fVar6 = (float)param_1;
    dVar7 = (double)fVar6;
    dVar8 = (double)param_2;
    dVar4 = (double)((ulonglong)dVar7 & 0x7fffffffffffffff);
    dVar5 = (double)((ulonglong)dVar8 & 0x7fffffffffffffff);
    uVar1 = (uint)((ulonglong)dVar7 >> 0x34) & 0x7ff;
    uVar3 = (uint)((ulonglong)dVar8 >> 0x34) & 0x7ff;
    if (uVar1 == 0) {
        LAB_1408fe057:
        if (0x7fe < uVar1) goto LAB_1408fe05f;
        if (0x7fe < uVar3) {
            if (((ulonglong)dVar8 & 0xfffffffffffff) == 0) {
                return param_1;
            }
            uVar2 = (ulonglong)(uint)param_2 | 0x400000;
            uVar9 = 0;
            goto LAB_1408fe156;
        }
        if ((uVar1 == 0) && (uVar3 != 0)) {
            return param_1;
        }
    }
    else {
        if (uVar1 < 0x7ff) {
            if (uVar3 - 1 < 0x7fe) {
                if (dVar4 == dVar5) {
                    return (ulonglong)(uint)(float)(double)((ulonglong)dVar7 & 0x8000000000000000);
                }
                if ((ulonglong)dVar4 < (ulonglong)dVar5) {
                    if (fVar6 < 0.0) {
                        dVar4 = (double)((ulonglong)dVar4 ^ 0x8000000000000000);
                    }
                    return (ulonglong)(uint)(float)dVar4;
                }
                if (uVar3 < uVar1) {
                    uVar1 = (int)(uVar1 - uVar3) / 0x18;
                    dVar7 = 5.960464477539063e-08;
                    dVar5 = (double)((longlong)(int)(uVar1 * 0x18 + 0x3ff) << 0x34) * dVar5;
                }
                else {
                    dVar7 = 1.0;
                    uVar1 = 0;
                }
                if (0 < (int)uVar1) {
                    uVar2 = (ulonglong)uVar1;
                    do {
                        dVar8 = (double)(int)(dVar4 / dVar5) * dVar5;
                        dVar5 = dVar5 * dVar7;
                        dVar4 = dVar4 - dVar8;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                }
                dVar4 = dVar4 - (double)(int)(dVar4 / dVar5) * dVar5;
                if (fVar6 < 0.0) {
                    dVar4 = (double)((ulonglong)dVar4 ^ 0x8000000000000000);
                }
                return (ulonglong)dVar4 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar4;
            }
            goto LAB_1408fe057;
        }
        LAB_1408fe05f:
        if (((ulonglong)dVar7 & 0xfffffffffffff) != 0) {
            uVar2 = param_1 & 0xffffffff | 0x400000;
            uVar9 = 0;
            goto LAB_1408fe156;
        }
    }
    uVar9 = 8;
    uVar2 = 0xffc00000;
    LAB_1408fe156:
    uVar2 = FUN_1407efd48("fmodf",0x16,uVar2,1,uVar9,0x21,fVar6,param_2,2);
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1408fe170(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    float fVar3;
    float fVar4;
    undefined auVar5 [16];
    float fVar6;

    fVar3 = (float)param_1;
    fVar6 = (float)(((uint)fVar3 >> 0x17) - 0x7f);
    if ((float)((uint)fVar3 & 0x7f800000) == INFINITY) {
        if (fVar3 == INFINITY) {
            return param_1;
        }
        if (fVar3 != -INFINITY) {
            uVar2 = FUN_140903e3c(fVar3,(uint)fVar3 | 0x400000,param_1,param_2,param_3,3);
            return uVar2;
        }
    }
    else {
        auVar5 = CONCAT412(in_XMM0_Dd,CONCAT48(in_XMM0_Dc,param_1)) & _DAT_1409c9070;
        fVar4 = fVar3;
        if (fVar6 == -127.0) {
            fVar6 = SUB164(auVar5 | _DAT_1409c8fd0,0) - 1.0;
            auVar5 = CONCAT124(SUB1612((auVar5 | _DAT_1409c8fd0) >> 0x20,0),fVar6) & _DAT_1409c9070;
            fVar4 = SUB164(auVar5,0);
            fVar6 = (float)(((uint)fVar6 >> 0x17) - 0xfd);
        }
        uVar1 = ((uint)fVar4 & 0x7f0000) + ((uint)fVar4 & 0x8000) * 2;
        if (fVar3 == 2.718282) {
            return 0x3f800000;
        }
        if ((float)((uint)(fVar3 - 1.0) & 0x7fffffff) < 0.0625) {
            fVar3 = fVar3 - 1.0;
            fVar6 = fVar3 / (fVar3 + 2.0);
            fVar4 = fVar6 + fVar6;
            return param_1 & 0xffffffff00000000 |
                   (ulonglong)
                           (uint)(fVar3 + ((fVar4 * fVar4 * 0.0125 + 0.08333334) * fVar4 * fVar4 * fVar4 -
                                           fVar3 * fVar6));
        }
        uVar2 = (ulonglong)(uVar1 >> 0x10);
        if (0.0 < fVar3) {
            fVar3 = ((float)(uVar1 | SUB164(_DAT_1409c90f0,0)) -
                     (float)(SUB164(auVar5,0) | SUB164(_DAT_1409c90f0,0))) *
                    *(float *)(&DAT_1409cc2d0 + uVar2 * 4);
            return (ulonglong)
                    (uint)(fVar6 * 0.6931152 + *(float *)(&DAT_1409c9180 + uVar2 * 4) +
                           (fVar6 * 3.194618e-05 - (fVar3 + (fVar3 * 0.3333333 + 0.5) * fVar3 * fVar3)) +
                           *(float *)(&DAT_1409c9390 + uVar2 * 4));
        }
        if (fVar3 == 0.0) {
            uVar2 = FUN_140903e3c(param_2,param_3,1);
            return uVar2;
        }
    }
    uVar2 = FUN_140903e3c(param_2,param_3,2);
    // WARNING: Read-only address (ram,0x0001409c8fd0) is written
    // WARNING: Read-only address (ram,0x0001409c9070) is written
    // WARNING: Read-only address (ram,0x0001409c90f0) is written
    return uVar2;
}



float FUN_1408fe3d0(float param_1)

{
    ulonglong uVar1;
    double dVar2;
    uint uVar3;
    bool bVar4;
    float fVar5;
    double dVar6;
    double dVar7;
    double dVar8;
    uint local_58 [4];
    undefined local_48 [72];

    if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
        fVar5 = (float)FUN_14090299c();
        return fVar5;
    }
    dVar6 = (double)param_1;
    dVar2 = (double)((ulonglong)dVar6 & 0x7fffffffffffffff);
    if ((ulonglong)dVar2 < 0x3fe921fb54442d19) {
        if ((ulonglong)dVar2 < 0x3f80000000000000) {
            if (0x3f1fffffffffffff < (ulonglong)dVar2) {
                dVar6 = dVar6 - dVar6 * dVar6 * dVar6 * 0.1666666666666667;
            }
        }
        else {
            dVar2 = dVar6 * dVar6;
            dVar6 = dVar6 + ((dVar2 * 2.755731922398589e-06 + -0.0001984126984126984) * dVar2 * dVar2 +
                             dVar2 * 0.008333333333333333 + -0.1666666666666667) * dVar6 * dVar2;
        }
        goto LAB_1408fe730;
    }
    bVar4 = dVar6 != dVar2;
    if (bVar4) {
        dVar6 = 0.0 - dVar6;
    }
    if ((ulonglong)dVar2 < 0x411e848000000000) {
        local_58[0] = (uint)(dVar6 * 0.6366197723675814 + 0.5);
        dVar7 = (double)local_58[0];
        dVar8 = dVar6 - dVar7 * 1.570796326734126;
        dVar6 = dVar8 - dVar7 * 6.077100506506192e-11;
        uVar1 = (ulonglong)((longlong)dVar6 << 1) >> 0x35;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - uVar1)) {
            dVar6 = dVar8 - dVar7 * 6.077100506303966e-11;
            dVar6 = dVar6 - (dVar7 * 2.022266248795951e-21 -
                             ((dVar8 - dVar6) - dVar7 * 6.077100506303966e-11));
        }
        if (0x3f1 < uVar1) goto LAB_1408fe646;
        if (uVar1 < 0x3df) {
            if ((local_58[0] & 1) != 0) {
                dVar6 = 1.0;
            }
        }
        else if ((local_58[0] & 1) == 0) {
            dVar6 = dVar6 - dVar6 * 0.1666666666666667 * dVar6 * dVar6;
        }
        else {
            dVar6 = 1.0 - dVar6 * dVar6 * 0.5;
        }
    }
    else {
        dVar6 = (double)FUN_140902580(dVar6,local_48,local_58);
        LAB_1408fe646:
        dVar2 = dVar6 * dVar6;
        if ((local_58[0] & 1) == 0) {
            dVar6 = dVar6 + ((dVar2 * 2.755731922398589e-06 + -0.0001984126984126984) * dVar2 * dVar2 +
                             dVar2 * 0.008333333333333333 + -0.1666666666666667) * dVar6 * dVar2;
        }
        else {
            dVar6 = dVar2 * -0.5 + 1.0 +
                    ((dVar2 * -2.755731922398589e-07 + 2.48015873015873e-05) * dVar2 * dVar2 +
                     dVar2 * -0.001388888888888889 + 0.04166666666666666) * dVar2 * dVar2;
        }
    }
    uVar3 = (uint)bVar4;
    if ((local_58[0] >> 1 & uVar3 | ~(local_58[0] >> 1) & ~uVar3 & 1) == 0) {
        dVar6 = 0.0 - dVar6;
    }
    LAB_1408fe730:
    return (float)dVar6;
}



undefined8 FUN_1408fe750(double param_1,undefined8 param_2)

{
    ulonglong uVar1;
    double dVar2;
    undefined4 uVar3;
    undefined4 uVar5;
    uint uVar6;
    undefined8 uVar4;
    double dVar7;
    double dVar8;
    double dVar9;
    undefined8 local_58 [2];
    double local_48 [2];
    uint local_38 [14];

    uVar6 = (uint)((ulonglong)param_1 >> 0x20);
    uVar3 = SUB84(param_1,0);
    if ((uVar6 & 0x7ff00000) == 0x7ff00000) {
        uVar4 = FUN_1409027f0();
        return uVar4;
    }
    dVar2 = (double)((ulonglong)param_1 & 0x7fffffffffffffff);
    if ((ulonglong)dVar2 < 0x3fe921fb54442d19) {
        if ((ulonglong)dVar2 < 0x3f20000000000000) {
            if ((ulonglong)dVar2 < 0x3e40000000000000) {
                uVar3 = 0;
                uVar5 = 0x3ff00000;
            }
            else {
                dVar2 = 1.0 - param_1 * param_1 * 0.5;
                uVar3 = SUB84(dVar2,0);
                uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
        }
        else {
            param_1 = param_1 * param_1;
            dVar8 = param_1 * param_1;
            dVar2 = param_1 * -0.5 + 1.0;
            dVar2 = (1.0 - dVar2) + param_1 * -0.5 +
                    (param_1 * -0.00138888888888874 + 0.04166666666666666) * dVar8 +
                    (param_1 * -2.755731727234489e-07 + 2.480158729876704e-05) * dVar8 * dVar8 +
                    dVar8 * dVar8 * dVar8 * (param_1 * -1.138263981623609e-11 + 2.087614638237214e-09) +
                    dVar2;
            uVar3 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        goto LAB_1408febc0;
    }
    if (param_1 != dVar2) {
        uVar3 = SUB84(0.0 - param_1,0);
        uVar6 = (uint)((ulonglong)(0.0 - param_1) >> 0x20);
    }
    if ((ulonglong)dVar2 < 0x411e848000000000) {
        local_38[0] = (uint)((double)CONCAT44(uVar6,uVar3) * 0.6366197723675814 + 0.5);
        dVar7 = (double)local_38[0];
        dVar9 = (double)CONCAT44(uVar6,uVar3) - dVar7 * 1.570796326734126;
        local_48[0] = dVar7 * 6.077100506506192e-11;
        dVar8 = dVar9 - local_48[0];
        uVar3 = SUB84(dVar8,0);
        uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar1 = (ulonglong)((longlong)dVar8 << 1) >> 0x35;
        dVar8 = dVar9;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - uVar1)) {
            dVar8 = dVar9 - dVar7 * 6.077100506303966e-11;
            local_48[0] = dVar7 * 2.022266248795951e-21 -
                          ((dVar9 - dVar8) - dVar7 * 6.077100506303966e-11);
            uVar3 = SUB84(dVar8 - local_48[0],0);
            uVar5 = (undefined4)((ulonglong)(dVar8 - local_48[0]) >> 0x20);
        }
        local_48[0] = (dVar8 - (double)CONCAT44(uVar5,uVar3)) - local_48[0];
        if (0x3f1 < uVar1) goto LAB_1408fea40;
        if (uVar1 < 0x3df) {
            if ((local_38[0] & 1) == 0) {
                uVar3 = 0;
                uVar5 = 0x3ff00000;
            }
        }
        else {
            dVar2 = (double)CONCAT44(uVar5,uVar3) * (double)CONCAT44(uVar5,uVar3);
            if ((local_38[0] & 1) == 0) {
                dVar2 = 1.0 - dVar2 * 0.5;
                uVar3 = SUB84(dVar2,0);
                uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
            else {
                dVar2 = (double)CONCAT44(uVar5,uVar3) -
                        (double)CONCAT44(uVar5,uVar3) * 0.1666666666666667 * dVar2;
                uVar3 = SUB84(dVar2,0);
                uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            }
        }
    }
    else {
        FUN_140903f70(param_2,local_58,local_48,local_38);
        uVar3 = (undefined4)local_58[0];
        uVar5 = (undefined4)((ulonglong)local_58[0] >> 0x20);
        LAB_1408fea40:
        dVar2 = (double)CONCAT44(uVar5,uVar3) * (double)CONCAT44(uVar5,uVar3);
        if ((local_38[0] & 1) == 0) {
            dVar2 = (((dVar2 * 2.480158729876704e-05 + -0.00138888888888874) * dVar2 + 0.04166666666666666
                      + ((dVar2 * -1.138263981623609e-11 + 2.087614638237214e-09) * dVar2 +
                         -2.755731727234489e-07) * dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
                     ((((dVar2 * 0.5 - 1.0) + 1.0) - dVar2 * 0.5) -
                      local_48[0] * (double)CONCAT44(uVar5,uVar3))) - (dVar2 * 0.5 - 1.0);
            uVar3 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        else {
            dVar2 = local_48[0] +
                    ((double)CONCAT44(uVar5,uVar3) * dVar2 *
                     (((dVar2 * 1.591814430448591e-10 + -2.50511320680217e-08) * dVar2 +
                       2.75573161037288e-06) * dVar2 * dVar2 * dVar2 +
                      (dVar2 * -0.0001984126983676113 + 0.00833333333333095) * dVar2 + -0.1666666666666667)
                     - dVar2 * 0.5 * local_48[0]) + (double)CONCAT44(uVar5,uVar3);
            uVar3 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
    }
    if ((local_38[0] + 1 & 2) != 0) {
        dVar2 = 0.0 - (double)CONCAT44(uVar5,uVar3);
        uVar3 = SUB84(dVar2,0);
        uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    LAB_1408febc0:
    return CONCAT44(uVar5,uVar3);
}



undefined4 FUN_1408febe0(double param_1,undefined8 param_2)

{
    ulonglong uVar1;
    double dVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    double dVar6;
    double dVar7;
    double dVar8;
    undefined8 local_58 [2];
    double local_48 [2];
    uint local_38 [14];

    uVar3 = (uint)((ulonglong)param_1 >> 0x20);
    uVar4 = SUB84(param_1,0);
    if ((uVar3 & 0x7ff00000) == 0x7ff00000) {
        uVar4 = FUN_140902818();
        return uVar4;
    }
    dVar2 = (double)((ulonglong)param_1 & 0x7fffffffffffffff);
    if ((ulonglong)dVar2 < 0x3fe921fb54442d19) {
        if (0x3f1fffffffffffff < (ulonglong)dVar2) {
            dVar2 = param_1 * param_1;
            return SUB84(param_1 + param_1 * dVar2 *
                                   (((dVar2 * 1.591814430448591e-10 + -2.50511320680217e-08) * dVar2 +
                                     2.75573161037288e-06) * dVar2 * dVar2 * dVar2 +
                                    (dVar2 * -0.0001984126983676113 + 0.00833333333333095) * dVar2 +
                                    -0.1666666666666667),0);
        }
        if ((ulonglong)dVar2 < 0x3e40000000000000) {
            return uVar4;
        }
        return SUB84(param_1 - param_1 * param_1 * param_1 * 0.1666666666666667,0);
    }
    if (param_1 != dVar2) {
        uVar4 = SUB84(0.0 - param_1,0);
        uVar3 = (uint)((ulonglong)(0.0 - param_1) >> 0x20);
    }
    if ((ulonglong)dVar2 < 0x411e848000000000) {
        local_38[0] = (uint)((double)CONCAT44(uVar3,uVar4) * 0.6366197723675814 + 0.5);
        dVar6 = (double)local_38[0];
        dVar7 = (double)CONCAT44(uVar3,uVar4) - dVar6 * 1.570796326734126;
        local_48[0] = dVar6 * 6.077100506506192e-11;
        dVar8 = dVar7 - local_48[0];
        uVar4 = SUB84(dVar8,0);
        uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar1 = (ulonglong)((longlong)dVar8 << 1) >> 0x35;
        dVar8 = dVar7;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - uVar1)) {
            dVar8 = dVar7 - dVar6 * 6.077100506303966e-11;
            local_48[0] = dVar6 * 2.022266248795951e-21 -
                          ((dVar7 - dVar8) - dVar6 * 6.077100506303966e-11);
            uVar4 = SUB84(dVar8 - local_48[0],0);
            uVar5 = (undefined4)((ulonglong)(dVar8 - local_48[0]) >> 0x20);
        }
        local_48[0] = (dVar8 - (double)CONCAT44(uVar5,uVar4)) - local_48[0];
        if (uVar1 < 0x3f2) {
            if (uVar1 < 0x3df) {
                if ((local_38[0] & 1) != 0) {
                    uVar4 = 0;
                    uVar5 = 0x3ff00000;
                }
            }
            else {
                dVar8 = (double)CONCAT44(uVar5,uVar4) * (double)CONCAT44(uVar5,uVar4);
                if ((local_38[0] & 1) == 0) {
                    dVar8 = (double)CONCAT44(uVar5,uVar4) -
                            (double)CONCAT44(uVar5,uVar4) * 0.1666666666666667 * dVar8;
                    uVar4 = SUB84(dVar8,0);
                    uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
                }
                else {
                    dVar8 = 1.0 - dVar8 * 0.5;
                    uVar4 = SUB84(dVar8,0);
                    uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
                }
            }
            goto LAB_1408ff020;
        }
    }
    else {
        FUN_140903f70(param_2,local_58,local_48,local_38);
        uVar4 = (undefined4)local_58[0];
        uVar5 = (undefined4)((ulonglong)local_58[0] >> 0x20);
    }
    dVar8 = (double)CONCAT44(uVar5,uVar4) * (double)CONCAT44(uVar5,uVar4);
    if ((local_38[0] & 1) == 0) {
        dVar8 = local_48[0] +
                ((double)CONCAT44(uVar5,uVar4) * dVar8 *
                 (((dVar8 * 1.591814430448591e-10 + -2.50511320680217e-08) * dVar8 +
                   2.75573161037288e-06) * dVar8 * dVar8 * dVar8 +
                  (dVar8 * -0.0001984126983676113 + 0.00833333333333095) * dVar8 + -0.1666666666666667) -
                 dVar8 * 0.5 * local_48[0]) + (double)CONCAT44(uVar5,uVar4);
        uVar4 = SUB84(dVar8,0);
        uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
    }
    else {
        dVar8 = (((dVar8 * 2.480158729876704e-05 + -0.00138888888888874) * dVar8 + 0.04166666666666666 +
                  ((dVar8 * -1.138263981623609e-11 + 2.087614638237214e-09) * dVar8 +
                   -2.755731727234489e-07) * dVar8 * dVar8 * dVar8) * dVar8 * dVar8 +
                 ((((dVar8 * 0.5 - 1.0) + 1.0) - dVar8 * 0.5) -
                  local_48[0] * (double)CONCAT44(uVar5,uVar4))) - (dVar8 * 0.5 - 1.0);
        uVar4 = SUB84(dVar8,0);
        uVar5 = (undefined4)((ulonglong)dVar8 >> 0x20);
    }
    LAB_1408ff020:
    uVar3 = (uint)(param_1 != dVar2);
    if ((local_38[0] >> 1 & uVar3 | ~(local_38[0] >> 1) & ~uVar3 & 1) == 0) {
        uVar4 = SUB84(0.0 - (double)CONCAT44(uVar5,uVar4),0);
    }
    return uVar4;
}



void FUN_1408ff070(undefined *param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
    undefined uVar1;
    int iVar2;
    int *piVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;
    undefined *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined *puVar10;
    undefined8 auStack1032 [62];
    undefined8 auStack536 [62];

    if ((((param_1 == (undefined *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
        (param_4 == (code *)0x0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        return;
    }
    if (param_2 < 2) {
        return;
    }
    lVar9 = 0;
    puVar10 = param_1 + (param_2 - 1) * param_3;
    LAB_1408ff100:
    while (uVar8 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1, 8 < uVar8) {
        puVar6 = param_1 + (uVar8 >> 1) * param_3;
        iVar2 = (*param_4)(param_1,puVar6);
        if ((0 < iVar2) && (param_1 != puVar6)) {
            puVar5 = puVar6;
            uVar8 = param_3;
            do {
                uVar1 = puVar5[(longlong)param_1 - (longlong)puVar6];
                (puVar5 + 1)[((longlong)param_1 - (longlong)puVar6) + -1] = *puVar5;
                *puVar5 = uVar1;
                uVar8 = uVar8 - 1;
                puVar5 = puVar5 + 1;
            } while (uVar8 != 0);
        }
        iVar2 = (*param_4)(param_1,puVar10);
        if ((0 < iVar2) && (param_1 != puVar10)) {
            puVar5 = puVar10;
            uVar8 = param_3;
            do {
                uVar1 = puVar5[(longlong)param_1 - (longlong)puVar10];
                (puVar5 + 1)[((longlong)param_1 - (longlong)puVar10) + -1] = *puVar5;
                *puVar5 = uVar1;
                uVar8 = uVar8 - 1;
                puVar5 = puVar5 + 1;
            } while (uVar8 != 0);
        }
        iVar2 = (*param_4)();
        puVar5 = param_1;
        puVar7 = puVar10;
        if ((0 < iVar2) && (puVar6 != puVar10)) {
            puVar4 = puVar10;
            uVar8 = param_3;
            do {
                uVar1 = puVar4[(longlong)puVar6 - (longlong)puVar10];
                (puVar4 + 1)[((longlong)puVar6 - (longlong)puVar10) + -1] = *puVar4;
                *puVar4 = uVar1;
                uVar8 = uVar8 - 1;
                puVar4 = puVar4 + 1;
            } while (uVar8 != 0);
        }
        LAB_1408ff200:
        if (puVar5 < puVar6) {
            do {
                puVar5 = puVar5 + param_3;
                if (puVar6 <= puVar5) goto LAB_1408ff220;
                iVar2 = (*param_4)();
            } while (iVar2 < 1);
            if (puVar6 <= puVar5) goto LAB_1408ff220;
        }
        else {
            LAB_1408ff220:
            do {
                puVar5 = puVar5 + param_3;
                if (puVar10 < puVar5) break;
                iVar2 = (*param_4)();
            } while (iVar2 < 1);
        }
        do {
            puVar7 = puVar7 + -param_3;
            if (puVar7 <= puVar6) break;
            iVar2 = (*param_4)();
        } while (0 < iVar2);
        if (puVar5 <= puVar7) {
            if (puVar5 != puVar7) {
                puVar4 = puVar7;
                uVar8 = param_3;
                do {
                    uVar1 = puVar4[(longlong)puVar5 - (longlong)puVar7];
                    (puVar4 + 1)[((longlong)puVar5 - (longlong)puVar7) + -1] = *puVar4;
                    *puVar4 = uVar1;
                    uVar8 = uVar8 - 1;
                    puVar4 = puVar4 + 1;
                } while (uVar8 != 0);
            }
            if (puVar6 == puVar7) {
                puVar6 = puVar5;
            }
            goto LAB_1408ff200;
        }
        puVar7 = puVar7 + param_3;
        if (puVar6 < puVar7) {
            do {
                puVar7 = puVar7 + -param_3;
                if (puVar7 <= puVar6) goto LAB_1408ff2b0;
                iVar2 = (*param_4)(puVar7);
            } while (iVar2 == 0);
            if (puVar7 <= puVar6) goto LAB_1408ff2b0;
        }
        else {
            LAB_1408ff2b0:
            do {
                puVar7 = puVar7 + -param_3;
                if (puVar7 <= param_1) break;
                iVar2 = (*param_4)(puVar7);
            } while (iVar2 == 0);
        }
        if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar5)
            goto LAB_1408ff2fc;
        if (param_1 < puVar7) {
            auStack1032[lVar9] = param_1;
            auStack536[lVar9] = puVar7;
            lVar9 = lVar9 + 1;
        }
        param_1 = puVar5;
        if (puVar10 <= puVar5) goto LAB_1408ff126;
    }
    FUN_1408ff360(param_1,puVar10,param_3,param_4);
    goto LAB_1408ff126;
    LAB_1408ff2fc:
    if (puVar5 < puVar10) {
        auStack1032[lVar9] = puVar5;
        auStack536[lVar9] = puVar10;
        lVar9 = lVar9 + 1;
    }
    puVar10 = puVar7;
    if (puVar7 <= param_1) {
        LAB_1408ff126:
        lVar9 = lVar9 + -1;
        if (lVar9 < 0) {
            return;
        }
        param_1 = (undefined *)auStack1032[lVar9];
        puVar10 = (undefined *)auStack536[lVar9];
    }
    goto LAB_1408ff100;
}



void FUN_1408ff360(undefined *param_1,undefined *param_2,longlong param_3,code *param_4)

{
    undefined uVar1;
    int iVar2;
    undefined *puVar3;
    undefined *puVar4;
    longlong lVar5;

    if (param_1 < param_2) {
        puVar3 = param_1 + param_3;
        puVar4 = param_1;
        do {
            for (; puVar3 <= param_2; puVar3 = puVar3 + param_3) {
                iVar2 = (*param_4)();
                if (0 < iVar2) {
                    puVar4 = puVar3;
                }
            }
            if ((puVar4 != param_2) && (param_3 != 0)) {
                puVar3 = param_2;
                lVar5 = param_3;
                do {
                    uVar1 = puVar3[(longlong)puVar4 - (longlong)param_2];
                    (puVar3 + 1)[((longlong)puVar4 - (longlong)param_2) + -1] = *puVar3;
                    *puVar3 = uVar1;
                    lVar5 = lVar5 + -1;
                    puVar3 = puVar3 + 1;
                } while (lVar5 != 0);
            }
            param_2 = param_2 + -param_3;
            puVar3 = param_1 + param_3;
            puVar4 = param_1;
        } while (param_1 < param_2);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_1408ff420(double param_1,undefined8 param_2,undefined8 param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    double dVar3;
    double dVar4;
    double dVar5;
    double dVar6;

    dVar6 = (double)((uint)((ulonglong)param_1 >> 0x34) - 0x3ff);
    if ((double)((ulonglong)param_1 & 0x7ff0000000000000) == INFINITY) {
        if (param_1 == INFINITY) {
            return INFINITY;
        }
        if (param_1 != -INFINITY) {
            dVar6 = (double)FUN_140903d50(param_1,(ulonglong)param_1 | 0x8000000000000,param_1,param_2,
                                          param_3,3);
            return dVar6;
        }
    }
    else {
        dVar3 = param_1;
        dVar4 = (double)((ulonglong)param_1 & 0xfffffffffffff);
        if (dVar6 == -1023.0) {
            dVar6 = (double)((ulonglong)param_1 & 0xfffffffffffff | SUB168(_DAT_1409c98f0,0)) - 1.0;
            dVar3 = (double)((ulonglong)dVar6 & SUB168(_DAT_1409c9870,0));
            dVar6 = (double)((uint)((ulonglong)dVar6 >> 0x34) - 0x7fd);
            dVar4 = dVar3;
        }
        uVar1 = ((ulonglong)dVar3 & 0xff00000000000) + ((ulonglong)dVar3 & 0x80000000000) * 2;
        if ((double)((ulonglong)(param_1 - 1.0) & 0x7fffffffffffffff) < 0.0625) {
            param_1 = param_1 - 1.0;
            dVar6 = param_1 / (param_1 + 2.0);
            dVar3 = dVar6 + dVar6;
            dVar4 = dVar3 * dVar3;
            dVar5 = dVar4 * dVar3;
            return param_1 + (((dVar4 * 0.01250000000377175 + 0.08333333333333179) * dVar5 +
                               (dVar4 * 0.0004348877777076146 + 0.002232139987919448) *
                               dVar5 * dVar5 * dVar3) - param_1 * dVar6);
        }
        uVar2 = uVar1 >> 0x2c;
        if (0.0 < param_1) {
            dVar4 = ((double)(uVar1 | SUB168(_DAT_1409c9900,0)) -
                     (double)((ulonglong)dVar4 | SUB168(_DAT_1409c9900,0))) *
                    *(double *)(&DAT_1409cd600 + uVar2 * 8);
            dVar3 = dVar4 * dVar4;
            return *(double *)(&DAT_1409cc5e0 + uVar2 * 8) + dVar6 * 0.6931471228599548 +
                   *(double *)(&DAT_1409ccdf0 + uVar2 * 8) +
                   (dVar6 * 5.769999047543285e-08 -
                    ((dVar4 * 0.3333333333333333 + 0.5) * dVar3 + dVar4 +
                     ((dVar4 * 0.1666666666666667 + 0.2) * dVar4 + 0.25) * dVar3 * dVar3));
        }
        if (param_1 == 0.0) {
            dVar6 = (double)FUN_140903d50(param_2,param_3,1);
            return dVar6;
        }
    }
    dVar6 = (double)FUN_140903d50(param_2,param_3,2);
    // WARNING: Read-only address (ram,0x0001409c9870) is written
    // WARNING: Read-only address (ram,0x0001409c98f0) is written
    // WARNING: Read-only address (ram,0x0001409c9900) is written
    return dVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double FUN_1408ff6e0(double param_1,undefined8 param_2,undefined8 param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    double dVar3;
    double dVar4;
    double dVar5;
    double dVar6;
    double dVar7;

    dVar7 = (double)((uint)((ulonglong)param_1 >> 0x34) - 0x3ff);
    if ((double)((ulonglong)param_1 & 0x7ff0000000000000) == INFINITY) {
        if (param_1 == INFINITY) {
            return INFINITY;
        }
        if (param_1 != -INFINITY) {
            dVar7 = (double)FUN_140903d10(param_1,(ulonglong)param_1 | 0x8000000000000,param_1,param_2,
                                          param_3,3);
            return dVar7;
        }
    }
    else {
        dVar3 = param_1;
        dVar4 = (double)((ulonglong)param_1 & 0xfffffffffffff);
        if (dVar7 == -1023.0) {
            dVar7 = (double)((ulonglong)param_1 & 0xfffffffffffff | SUB168(_DAT_1409c9b00,0)) - 1.0;
            dVar3 = (double)((ulonglong)dVar7 & SUB168(_DAT_1409c9a50,0));
            dVar7 = (double)((uint)((ulonglong)dVar7 >> 0x34) - 0x7fd);
            dVar4 = dVar3;
        }
        uVar1 = ((ulonglong)dVar3 & 0xff00000000000) + ((ulonglong)dVar3 & 0x80000000000) * 2;
        if ((double)((ulonglong)(param_1 - 1.0) & 0x7fffffffffffffff) < 0.0625) {
            param_1 = param_1 - 1.0;
            dVar7 = param_1 / (param_1 + 2.0);
            dVar3 = dVar7 + dVar7;
            dVar4 = dVar3 * dVar3;
            dVar5 = dVar4 * dVar3;
            dVar6 = (double)((ulonglong)param_1 & SUB168(_DAT_1409c9c10,0));
            dVar7 = (((dVar4 * 0.01250000000377175 + 0.08333333333333179) * dVar5 +
                      (dVar4 * 0.0004348877777076146 + 0.002232139987919448) * dVar5 * dVar5 * dVar3) -
                     param_1 * dVar7) + (param_1 - dVar6);
            return dVar6 * 7.349550096401511e-07 + dVar7 * 7.349550096401511e-07 +
                   dVar7 * 0.4342937469482422 + dVar6 * 0.4342937469482422;
        }
        uVar2 = uVar1 >> 0x2c;
        if (0.0 < param_1) {
            dVar4 = ((double)(uVar1 | SUB168(_DAT_1409c9b10,0)) -
                     (double)((ulonglong)dVar4 | SUB168(_DAT_1409c9b10,0))) *
                    *(double *)(&DAT_1409cd600 + uVar2 * 8);
            dVar3 = dVar4 * dVar4;
            return *(double *)(&DAT_1409c9c20 + uVar2 * 8) + dVar7 * 0.3010299950838089 +
                   *(double *)(&DAT_1409ca430 + uVar2 * 8) +
                   (dVar7 * 5.801722962879576e-10 -
                    ((dVar4 * 0.3333333333333333 + 0.5) * dVar3 + dVar4 +
                     ((dVar4 * 0.1666666666666667 + 0.2) * dVar4 + 0.25) * dVar3 * dVar3) *
                    0.4342944819032518);
        }
        if (param_1 == 0.0) {
            dVar7 = (double)FUN_140903d10(param_2,param_3,1);
            return dVar7;
        }
    }
    dVar7 = (double)FUN_140903d10(param_2,param_3,2);
    // WARNING: Read-only address (ram,0x0001409c9a50) is written
    // WARNING: Read-only address (ram,0x0001409c9b00) is written
    // WARNING: Read-only address (ram,0x0001409c9b10) is written
    // WARNING: Read-only address (ram,0x0001409c9c10) is written
    return dVar7;
}


/*
Unable to decompile 'FUN_1408ffa00'
Cause:
Low-level Error: Overlapping input varnodes
*/


